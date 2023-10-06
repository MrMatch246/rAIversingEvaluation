java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x08000188>>__do_global_dtors_aux>>////

/* WARNING: Removing unreachable block (ram,0x08000194) */

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  if ((char)completed_8911 == '\0') {
    completed_8911._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x080001ac>>frame_dummy>>////

/* WARNING: Removing unreachable block (ram,0x080001b2) */

undefined8 frame_dummy(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}


////>>0x080001c8>>coolant_flood_on>>////

/* WARNING: Unknown calling convention */

void coolant_flood_on(void)

{
  return;
}


////>>0x080001d4>>coolant_flood_off>>////

/* WARNING: Unknown calling convention */

void coolant_flood_off(void)

{
  return;
}


////>>0x080001e0>>coolant_mist_on>>////

/* WARNING: Unknown calling convention */

void coolant_mist_on(void)

{
  return;
}


////>>0x080001ec>>coolant_mist_off>>////

/* WARNING: Unknown calling convention */

void coolant_mist_off(void)

{
  return;
}


////>>0x080001f8>>coolant_init>>////

/* WARNING: Unknown calling convention */

void coolant_init(void)

{
  current_coolant_mode = '\0';
  coolant_stop();
  return;
}


////>>0x08000210>>coolant_stop>>////

/* WARNING: Unknown calling convention */

void coolant_stop(void)

{
  coolant_mist_off();
  coolant_flood_off();
  return;
}


////>>0x08000220>>coolant_run>>////

void coolant_run(uint8_t mode)

{
  uint8_t mode_local;
  
  if (mode != current_coolant_mode) {
    plan_synchronize();
    if (mode == '\x01') {
      coolant_flood_on();
      current_coolant_mode = mode;
    }
    else if (mode == '\x02') {
      coolant_mist_on();
      current_coolant_mode = mode;
    }
    else {
      coolant_stop();
      current_coolant_mode = mode;
    }
  }
  return;
}


////>>0x08000268>>get_current_usecs>>////


/* WARNING: Unknown calling convention */

uint64_t get_current_usecs(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_GetTick();
  return (uint64_t)((uVar1 + 1) * 1000 - _DAT_e000e018 / 0xa8);
}


////>>0x080002a0>>_delay_ms>>////

void _delay_ms(uint _ms)

{
  uint _ms_local;
  
  HAL_Delay(_ms);
  return;
}


////>>0x080002b6>>_delay_us>>////

void _delay_us(uint _us)

{
  uint uVar1;
  bool bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint _us_local;
  uint64_t timeout;
  
  uVar3 = get_current_usecs();
  do {
    uVar4 = get_current_usecs();
    uVar1 = (uint)(uVar4 >> 0x20);
    timeout._0_4_ = (uint)(uVar3 + _us);
    timeout._4_4_ = (uint)(uVar3 + _us >> 0x20);
    bVar2 = timeout._4_4_ <= uVar1;
    if (uVar1 == timeout._4_4_) {
      bVar2 = (uint)timeout <= (uint)uVar4;
    }
  } while (!bVar2);
  return;
}


////>>0x080002f0>>eeprom_init>>////

/* WARNING: Unknown calling convention */

void eeprom_init(void)

{
  memset(eeprom_data,0xff,4);
  eeprom_ready = 1;
  return;
}


////>>0x08000310>>eeprom_get_char>>////

char eeprom_get_char(uint addr)

{
  uint addr_local;
  
  if (eeprom_ready == 0) {
    eeprom_init();
  }
  return eeprom_data[addr & 0x3ff];
}


////>>0x08000340>>eeprom_put_char>>////

void eeprom_put_char(uint addr,uchar new_value)

{
  uchar new_value_local;
  uint addr_local;
  
  if (eeprom_ready == 0) {
    eeprom_init();
  }
  eeprom_data[addr & 0x3ff] = new_value;
  return;
}


////>>0x08000374>>memcpy_to_eeprom_with_checksum>>////

void memcpy_to_eeprom_with_checksum(uint destination,char *source,uint size)

{
  uint size_local;
  char *source_local;
  uint destination_local;
  uchar checksum;
  
  checksum = '\0';
  size_local = size;
  source_local = source;
  destination_local = destination;
  if (eeprom_ready == 0) {
    eeprom_init();
    source_local = source;
    destination_local = destination;
  }
  for (; size_local != 0; size_local = size_local - 1) {
    checksum = (checksum != '\0') + *source_local;
    eeprom_put_char(destination_local,*source_local);
    source_local = source_local + 1;
    destination_local = destination_local + 1;
  }
  eeprom_put_char(destination_local,checksum);
  return;
}


////>>0x080003ec>>memcpy_from_eeprom_with_checksum>>////

int memcpy_from_eeprom_with_checksum(char *destination,uint source,uint size)

{
  char cVar1;
  uint size_local;
  uint source_local;
  char *destination_local;
  uchar data;
  uchar checksum;
  
  checksum = '\0';
  size_local = size;
  source_local = source;
  destination_local = destination;
  if (eeprom_ready == 0) {
    eeprom_init();
    source_local = source;
    destination_local = destination;
  }
  for (; size_local != 0; size_local = size_local - 1) {
    cVar1 = eeprom_get_char(source_local);
    checksum = cVar1 + (checksum != '\0');
    *destination_local = cVar1;
    source_local = source_local + 1;
    destination_local = destination_local + 1;
  }
  cVar1 = eeprom_get_char(source_local);
  return (uint)((uint)checksum == (int)cVar1);
}


////>>0x08000478>>select_plane>>////

void select_plane(uint8_t axis_0,uint8_t axis_1,uint8_t axis_2)

{
  uint8_t axis_2_local;
  uint8_t axis_1_local;
  uint8_t axis_0_local;
  
  gc.plane_axis_0 = axis_0;
  gc.plane_axis_1 = axis_1;
  gc.plane_axis_2 = axis_2;
  return;
}


////>>0x080004ac>>gc_init>>////

/* WARNING: Unknown calling convention */

void gc_init(void)

{
  uint8_t uVar1;
  
  memset(&gc,0,0x38);
  gc.feed_rate = settings.default_feed_rate;
  select_plane('\0','\x01','\x02');
  gc.absolute_mode = '\x01';
  uVar1 = settings_read_coord_data(gc.coord_select,gc.coord_system);
  if (uVar1 == '\0') {
    report_status_message('\n');
  }
  return;
}


////>>0x080004fc>>gc_set_current_position>>////

void gc_set_current_position(int32_t x,int32_t y,int32_t z)

{
  undefined4 uVar1;
  int32_t z_local;
  int32_t y_local;
  int32_t x_local;
  
  uVar1 = __floatsisf(x);
  gc.position[0] = (float)__aeabi_fdiv(uVar1,settings.steps_per_mm[0]);
  uVar1 = __floatsisf(y);
  gc.position[1] = (float)__aeabi_fdiv(uVar1,settings.steps_per_mm[1]);
  uVar1 = __floatsisf(z);
  gc.position[2] = (float)__aeabi_fdiv(uVar1,settings.steps_per_mm[2]);
  return;
}


////>>0x0800056c>>to_millimeters>>////

float to_millimeters(float value)

{
  undefined4 in_r0;
  undefined8 uVar1;
  float value_local;
  
  if (gc.inches_mode != '\0') {
    uVar1 = __aeabi_f2d(in_r0);
    uVar1 = __muldf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x66666666,0x40396666);
    value = (float)__truncdfsf2((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  }
  return value;
}


////>>0x080005b4>>gc_execute_line>>////

uint8_t gc_execute_line(char *line)

{
  uint8_t uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  uint extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  uint uVar6;
  float fVar7;
  float value_00;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_06;
  undefined8 extraout_d0_07;
  undefined8 extraout_d0_08;
  undefined8 extraout_d0_09;
  undefined8 extraout_d0_10;
  undefined8 extraout_d0_11;
  undefined8 extraout_d0_12;
  undefined8 extraout_d0_13;
  undefined8 extraout_d0_14;
  undefined8 extraout_d0_15;
  undefined8 extraout_d0_16;
  undefined8 extraout_d0_17;
  float y_00;
  undefined8 extraout_d0_18;
  undefined8 extraout_d0_19;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s2_07;
  float extraout_s2_08;
  float extraout_s2_09;
  float extraout_s2_10;
  float extraout_s2_11;
  float extraout_s2_12;
  float extraout_s2_13;
  float extraout_s2_14;
  float extraout_s2_15;
  float extraout_s2_16;
  float extraout_s2_17;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float extraout_s3_06;
  float extraout_s3_07;
  float extraout_s3_08;
  float extraout_s3_09;
  float extraout_s3_10;
  float extraout_s3_11;
  float extraout_s3_12;
  float extraout_s3_13;
  float extraout_s3_14;
  float extraout_s3_15;
  float extraout_s3_16;
  float extraout_s3_17;
  undefined8 uVar8;
  undefined4 in_stack_ffffff48;
  undefined4 in_stack_ffffff4c;
  undefined4 in_stack_ffffff50;
  undefined4 in_stack_ffffff54;
  char *line_local;
  float coord_data_2 [3];
  float coord_data_1 [3];
  float coord_data [3];
  float offset [3];
  float target [3];
  float value;
  char letter;
  uint8_t char_counter;
  float y;
  float x;
  uint8_t isclockwise;
  float h_x2_div_d;
  uint8_t i_3;
  uint8_t i_2;
  uint8_t i_1;
  uint8_t i;
  uint8_t l;
  float r;
  float p;
  uint8_t group_number;
  uint8_t non_modal_action;
  uint8_t absolute_override;
  float inverse_feed_rate;
  uint8_t axis_words;
  uint16_t modal_group_words;
  int int_value;
  
  if (sys.state == '\x06') {
    uVar1 = '\f';
  }
  else {
    char_counter = '\0';
    modal_group_words = 0;
    axis_words = '\0';
    inverse_feed_rate = -1.0;
    absolute_override = '\0';
    non_modal_action = '\0';
    memset(target,0,0xc);
    memset(offset,0,0xc);
    gc.status_code = '\0';
    group_number = '\0';
    while (iVar2 = next_statement(&letter,&value,line,&char_counter), iVar2 != 0) {
      uVar4 = __aeabi_f2d(value);
      trunc((double)CONCAT44(in_stack_ffffff4c,in_stack_ffffff48));
      int_value = __aeabi_d2iz(uVar4,extraout_r1);
      if (letter == 'G') {
        switch(int_value) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 0x50:
          group_number = '\x02';
          break;
        case 4:
        case 10:
        case 0x1c:
        case 0x1e:
        case 0x35:
        case 0x5c:
          group_number = '\x01';
          break;
        case 0x11:
        case 0x12:
        case 0x13:
          group_number = '\x03';
          break;
        case 0x14:
        case 0x15:
          group_number = '\a';
          break;
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
          group_number = '\t';
          break;
        case 0x5a:
        case 0x5b:
          group_number = '\x04';
          break;
        case 0x5d:
        case 0x5e:
          group_number = '\x06';
        }
        switch(int_value) {
        case 0:
          gc.motion_mode = '\0';
          break;
        case 1:
          gc.motion_mode = '\x01';
          break;
        case 2:
          gc.motion_mode = '\x02';
          break;
        case 3:
          gc.motion_mode = '\x03';
          break;
        case 4:
          non_modal_action = '\x01';
          break;
        default:
          gc.status_code = '\x03';
          break;
        case 10:
          non_modal_action = '\x02';
          break;
        case 0x11:
          select_plane('\0','\x01','\x02');
          break;
        case 0x12:
          select_plane('\x02','\0','\x01');
          break;
        case 0x13:
          select_plane('\x01','\x02','\0');
          break;
        case 0x14:
          gc.inches_mode = '\x01';
          break;
        case 0x15:
          gc.inches_mode = '\0';
          break;
        case 0x1c:
        case 0x1e:
          uVar4 = __aeabi_fmul(value,0x41200000);
          uVar4 = __aeabi_f2d(uVar4);
          trunc((double)CONCAT44(in_stack_ffffff4c,in_stack_ffffff48));
          int_value = __aeabi_d2iz(uVar4,extraout_r1_00);
          switch(int_value) {
          case 0x118:
            non_modal_action = '\x03';
            break;
          case 0x119:
            non_modal_action = '\x04';
            break;
          default:
            gc.status_code = '\x03';
            break;
          case 300:
            non_modal_action = '\x05';
            break;
          case 0x12d:
            non_modal_action = '\x06';
          }
          break;
        case 0x35:
          absolute_override = '\x01';
          break;
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
          gc.coord_select = (char)int_value + 0xca;
          break;
        case 0x50:
          gc.motion_mode = '\x04';
          break;
        case 0x5a:
          gc.absolute_mode = '\x01';
          break;
        case 0x5b:
          gc.absolute_mode = '\0';
          break;
        case 0x5c:
          uVar4 = __aeabi_fmul(value,0x41200000);
          uVar4 = __aeabi_f2d(uVar4);
          trunc((double)CONCAT44(in_stack_ffffff4c,in_stack_ffffff48));
          int_value = __aeabi_d2iz(uVar4,extraout_r1_01);
          if (int_value == 0x398) {
            non_modal_action = '\a';
          }
          else if (int_value == 0x399) {
            non_modal_action = '\b';
          }
          else {
            gc.status_code = '\x03';
          }
          break;
        case 0x5d:
          gc.inverse_feed_rate_mode = '\x01';
          break;
        case 0x5e:
          gc.inverse_feed_rate_mode = '\0';
        }
      }
      else if (letter == 'M') {
        if (int_value == 0x1e) {
LAB_08000b96:
          group_number = '\x05';
        }
        else if (int_value < 0x1f) {
          if (int_value < 3) {
            if (-1 < int_value) goto LAB_08000b96;
          }
          else if (int_value - 3U < 3) {
            group_number = '\b';
          }
        }
        switch(int_value) {
        case 0:
          gc.program_flow = '\x01';
          break;
        case 1:
          break;
        case 2:
        case 0x1e:
          gc.program_flow = '\x02';
          break;
        case 3:
          gc.spindle_direction = '\x01';
          break;
        case 4:
          gc.spindle_direction = -1;
          break;
        case 5:
          gc.spindle_direction = '\0';
          break;
        default:
          gc.status_code = '\x03';
          break;
        case 7:
          gc.coolant_mode = '\x02';
          break;
        case 8:
          gc.coolant_mode = '\x01';
          break;
        case 9:
          gc.coolant_mode = '\0';
        }
      }
      if (group_number != '\0') {
        if (((int)(uint)modal_group_words >> group_number & 1U) == 0) {
          modal_group_words = modal_group_words | (ushort)(1 << group_number);
        }
        else {
          gc.status_code = '\x05';
        }
        group_number = '\0';
      }
    }
    uVar1 = gc.status_code;
    if (gc.status_code == '\0') {
      p = 0.0;
      r = 0.0;
      l = '\0';
      char_counter = '\0';
switchD_08000d18_caseD_47:
      iVar2 = next_statement(&letter,&value,line,&char_counter);
      if (iVar2 != 0) {
        fVar7 = (float)extraout_d0;
        switch(letter) {
        case 'F':
          iVar2 = __aeabi_fcmple(value,0);
          if (iVar2 != 0) {
            gc.status_code = '\x06';
          }
          if (gc.inverse_feed_rate_mode == '\0') {
            fVar7 = value;
            to_millimeters(value_00);
            gc.feed_rate = fVar7;
          }
          else {
            fVar7 = value;
            to_millimeters(value_00);
            inverse_feed_rate = fVar7;
          }
          break;
        case 'G':
        case 'M':
        case 'N':
          break;
        default:
          gc.status_code = '\x03';
          break;
        case 'I':
        case 'J':
        case 'K':
          uVar6 = (uint)(byte)letter;
          fVar3 = value;
          to_millimeters(fVar7);
          offset[uVar6 - 0x49] = fVar3;
          break;
        case 'L':
          uVar4 = __aeabi_f2d(value);
          trunc((double)CONCAT44(in_stack_ffffff4c,in_stack_ffffff48));
          l = __aeabi_d2uiz(uVar4,extraout_r1_02);
          break;
        case 'P':
          p = value;
          break;
        case 'R':
          fVar3 = value;
          to_millimeters(fVar7);
          r = fVar3;
          break;
        case 'S':
          iVar2 = __aeabi_fcmplt(value,0);
          if (iVar2 != 0) {
            gc.status_code = '\x06';
          }
          break;
        case 'T':
          iVar2 = __aeabi_fcmplt(value,0);
          if (iVar2 != 0) {
            gc.status_code = '\x06';
          }
          uVar4 = __aeabi_f2d(value);
          trunc((double)CONCAT44(in_stack_ffffff4c,in_stack_ffffff48));
          gc.tool = __aeabi_d2uiz(uVar4,extraout_r1_03);
          break;
        case 'X':
          target[0] = value;
          to_millimeters(fVar7);
          axis_words = axis_words | 1;
          break;
        case 'Y':
          target[1] = value;
          to_millimeters(fVar7);
          axis_words = axis_words | 2;
          break;
        case 'Z':
          target[2] = value;
          to_millimeters(fVar7);
          axis_words = axis_words | 4;
        }
        goto switchD_08000d18_caseD_47;
      }
      uVar1 = gc.status_code;
      if (gc.status_code == '\0') {
        uVar8 = extraout_d0;
        fVar7 = extraout_s2;
        fVar3 = extraout_s3;
        if (sys.state != '\a') {
          spindle_run(gc.spindle_direction);
          coolant_run(gc.coolant_mode);
          uVar8 = extraout_d0_00;
          fVar7 = extraout_s2_00;
          fVar3 = extraout_s3_00;
        }
        if ((modal_group_words & 0x200) != 0) {
          uVar1 = settings_read_coord_data(gc.coord_select,coord_data);
          if (uVar1 == '\0') {
            return '\n';
          }
          gc.coord_system[0] = coord_data[0];
          gc.coord_system[1] = coord_data[1];
          gc.coord_system[2] = coord_data[2];
          uVar8 = extraout_d0_01;
          fVar7 = extraout_s2_01;
          fVar3 = extraout_s3_01;
        }
        switch(non_modal_action) {
        case '\x01':
          iVar2 = __aeabi_fcmplt(p,0);
          uVar8 = extraout_d0_02;
          fVar7 = extraout_s2_02;
          fVar3 = extraout_s3_02;
          if (iVar2 == 0) {
            if (sys.state != '\a') {
              mc_dwell((float)extraout_d0_02);
              uVar8 = extraout_d0_03;
              fVar7 = extraout_s2_03;
              fVar3 = extraout_s3_03;
            }
          }
          else {
            gc.status_code = '\x06';
          }
          break;
        case '\x02':
          uVar4 = __aeabi_f2d(p);
          trunc((double)CONCAT44(in_stack_ffffff4c,in_stack_ffffff48));
          int_value = __aeabi_d2iz(uVar4,extraout_r1_04);
          uVar8 = extraout_d0_04;
          fVar7 = extraout_s2_04;
          fVar3 = extraout_s3_04;
          if ((((l == '\x02') || (l == '\x14')) && (-1 < int_value)) && (int_value < 7)) {
            if ((axis_words == '\0') && (l == '\x02')) {
              gc.status_code = '\x06';
            }
            else {
              if (int_value < 1) {
                int_value = (int)gc.coord_select;
              }
              else {
                int_value = int_value + -1;
              }
              uVar1 = settings_read_coord_data((uint8_t)int_value,coord_data_2);
              if (uVar1 == '\0') {
                return '\n';
              }
              for (i = '\0'; i < 3; i = i + '\x01') {
                if (((int)(uint)axis_words >> i & 1U) != 0) {
                  if (l == '\x14') {
                    uVar6 = (uint)i;
                    fVar7 = (float)__aeabi_fsub(gc.position[i],target[i]);
                    coord_data_2[uVar6] = fVar7;
                  }
                  else {
                    coord_data_2[i] = target[i];
                  }
                }
              }
              settings_write_coord_data((uint8_t)int_value,coord_data_2);
              uVar8 = extraout_d0_05;
              fVar7 = extraout_s2_05;
              fVar3 = extraout_s3_05;
              if (int_value == (uint)gc.coord_select) {
                gc.coord_system[0] = coord_data_2[0];
                gc.coord_system[1] = coord_data_2[1];
                gc.coord_system[2] = coord_data_2[2];
              }
            }
          }
          else {
            gc.status_code = '\x03';
          }
          axis_words = '\0';
          break;
        case '\x03':
        case '\x05':
          if (axis_words != '\0') {
            for (i_1 = '\0'; i_1 < 3; i_1 = i_1 + '\x01') {
              if (((int)(uint)axis_words >> i_1 & 1U) == 0) {
                target[i_1] = gc.position[i_1];
              }
              else if (gc.absolute_mode == '\0') {
                uVar6 = (uint)i_1;
                fVar7 = (float)__addsf3(target[i_1],gc.position[i_1]);
                target[uVar6] = fVar7;
                uVar8 = extraout_d0_07;
                fVar7 = extraout_s2_07;
                fVar3 = extraout_s3_07;
              }
              else {
                fVar7 = target[i_1];
                uVar4 = __addsf3(gc.coord_system[i_1],gc.coord_offset[i_1]);
                uVar6 = (uint)i_1;
                fVar7 = (float)__addsf3(fVar7,uVar4);
                target[uVar6] = fVar7;
                uVar8 = extraout_d0_06;
                fVar7 = extraout_s2_06;
                fVar3 = extraout_s3_06;
              }
            }
            mc_line((float)uVar8,(float)((ulonglong)uVar8 >> 0x20),fVar7,fVar3,SUB41(target[0],0));
          }
          if (non_modal_action == '\x05') {
            uVar1 = settings_read_coord_data('\a',coord_data_1);
            uVar8 = extraout_d0_08;
            fVar7 = extraout_s2_08;
            fVar3 = extraout_s3_08;
            if (uVar1 == '\0') {
              return '\n';
            }
          }
          else {
            uVar1 = settings_read_coord_data('\x06',coord_data_1);
            uVar8 = extraout_d0_09;
            fVar7 = extraout_s2_09;
            fVar3 = extraout_s3_09;
            if (uVar1 == '\0') {
              return '\n';
            }
          }
          in_stack_ffffff48 = 0;
          mc_line((float)uVar8,(float)((ulonglong)uVar8 >> 0x20),fVar7,fVar3,
                  SUB41(coord_data_1[0],0));
          gc.position[0] = coord_data_1[0];
          gc.position[1] = coord_data_1[1];
          gc.position[2] = coord_data_1[2];
          axis_words = '\0';
          uVar8 = extraout_d0_10;
          fVar7 = extraout_s2_10;
          fVar3 = extraout_s3_10;
          break;
        case '\x04':
        case '\x06':
          if (non_modal_action == '\x06') {
            settings_write_coord_data('\a',gc.position);
            uVar8 = extraout_d0_11;
            fVar7 = extraout_s2_11;
            fVar3 = extraout_s3_11;
          }
          else {
            settings_write_coord_data('\x06',gc.position);
            uVar8 = extraout_d0_12;
            fVar7 = extraout_s2_12;
            fVar3 = extraout_s3_12;
          }
          break;
        case '\a':
          if (axis_words == '\0') {
            gc.status_code = '\x06';
          }
          else {
            for (i_2 = '\0'; i_2 < 3; i_2 = i_2 + '\x01') {
              if (((int)(uint)axis_words >> i_2 & 1U) != 0) {
                uVar4 = __aeabi_fsub(gc.position[i_2],gc.coord_system[i_2]);
                uVar6 = (uint)i_2;
                fVar7 = (float)__aeabi_fsub(uVar4,target[i_2]);
                gc.coord_offset[uVar6] = fVar7;
                uVar8 = extraout_d0_13;
                fVar7 = extraout_s2_13;
                fVar3 = extraout_s3_13;
              }
            }
          }
          axis_words = '\0';
          break;
        case '\b':
          memset(gc.coord_offset,0,0xc);
          uVar8 = extraout_d0_14;
          fVar7 = extraout_s2_14;
          fVar3 = extraout_s3_14;
        }
        if (((modal_group_words & 4) != 0) || (axis_words != '\0')) {
          if ((gc.inverse_feed_rate_mode != '\0') &&
             ((iVar2 = __aeabi_fcmplt(inverse_feed_rate,0), uVar8 = extraout_d0_15,
              fVar7 = extraout_s2_15, fVar3 = extraout_s3_15, iVar2 != 0 &&
              (gc.motion_mode != '\x04')))) {
            gc.status_code = '\x06';
          }
          if (((absolute_override != '\0') && (gc.motion_mode != '\0')) &&
             (gc.motion_mode != '\x01')) {
            gc.status_code = '\x06';
          }
          if (gc.status_code != '\0') {
            return gc.status_code;
          }
          for (i_3 = '\0'; i_3 < 3; i_3 = i_3 + '\x01') {
            if (((int)(uint)axis_words >> i_3 & 1U) == 0) {
              target[i_3] = gc.position[i_3];
            }
            else if (absolute_override == '\0') {
              if (gc.absolute_mode == '\0') {
                uVar6 = (uint)i_3;
                fVar7 = (float)__addsf3(target[i_3],gc.position[i_3]);
                target[uVar6] = fVar7;
                uVar8 = extraout_d0_17;
                fVar7 = extraout_s2_17;
                fVar3 = extraout_s3_17;
              }
              else {
                fVar7 = target[i_3];
                uVar4 = __addsf3(gc.coord_system[i_3],gc.coord_offset[i_3]);
                uVar6 = (uint)i_3;
                fVar7 = (float)__addsf3(fVar7,uVar4);
                target[uVar6] = fVar7;
                uVar8 = extraout_d0_16;
                fVar7 = extraout_s2_16;
                fVar3 = extraout_s3_16;
              }
            }
          }
          if (gc.motion_mode < 5) {
            y_00 = (float)((ulonglong)uVar8 >> 0x20);
            switch(gc.motion_mode) {
            case '\0':
              if (axis_words == '\0') {
                gc.status_code = '\x06';
              }
              else {
                mc_line((float)uVar8,y_00,fVar7,fVar3,SUB41(target[0],0));
              }
              break;
            case '\x01':
              if (axis_words == '\0') {
                gc.status_code = '\x06';
              }
              else {
                mc_line((float)uVar8,y_00,fVar7,fVar3,SUB41(target[0],0));
              }
              break;
            default:
              axis_words = axis_words & ~(byte)(1 << gc.plane_axis_2);
              if ((axis_words == 0) ||
                 (((iVar2 = __aeabi_fcmpeq(r,0), iVar2 != 0 &&
                   (iVar2 = __aeabi_fcmpeq(offset[gc.plane_axis_0],0), iVar2 != 0)) &&
                  (iVar2 = __aeabi_fcmpeq(offset[gc.plane_axis_1],0), iVar2 != 0)))) {
                gc.status_code = '\x06';
              }
              else {
                iVar2 = __aeabi_fcmpeq(r,0);
                if (iVar2 == 0) {
                  x = (float)__aeabi_fsub(target[gc.plane_axis_0],gc.position[gc.plane_axis_0]);
                  y = (float)__aeabi_fsub(target[gc.plane_axis_1],gc.position[gc.plane_axis_1]);
                  memset(offset,0,0xc);
                  uVar4 = __aeabi_fmul(r,0x40800000);
                  uVar4 = __aeabi_fmul(uVar4,r);
                  uVar5 = __aeabi_fmul(x,x);
                  uVar4 = __aeabi_fsub(uVar4,uVar5);
                  uVar5 = __aeabi_fmul(y,y);
                  h_x2_div_d = (float)__aeabi_fsub(uVar4,uVar5);
                  iVar2 = __aeabi_fcmplt(h_x2_div_d,0);
                  if (iVar2 != 0) {
                    gc.status_code = '\x04';
                    return '\x04';
                  }
                  uVar4 = __aeabi_f2d(h_x2_div_d);
                  sqrt((double)CONCAT44(in_stack_ffffff4c,in_stack_ffffff48));
                  uVar5 = __aeabi_f2d(x);
                  __aeabi_f2d(y);
                  hypot((double)CONCAT44(in_stack_ffffff4c,in_stack_ffffff48),
                        (double)CONCAT44(in_stack_ffffff54,in_stack_ffffff50));
                  uVar8 = __divdf3(uVar4,extraout_r1_05 ^ 0x80000000,uVar5,extraout_r1_06);
                  h_x2_div_d = (float)__truncdfsf2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
                  if (gc.motion_mode == '\x03') {
                    h_x2_div_d = (float)((uint)h_x2_div_d ^ 0x80000000);
                  }
                  iVar2 = __aeabi_fcmplt(r,0);
                  if (iVar2 != 0) {
                    h_x2_div_d = (float)((uint)h_x2_div_d ^ 0x80000000);
                    r = (float)((uint)r ^ 0x80000000);
                  }
                  uVar4 = __aeabi_fmul(y,h_x2_div_d);
                  uVar4 = __aeabi_fsub(x,uVar4);
                  uVar6 = (uint)gc.plane_axis_0;
                  fVar7 = (float)__aeabi_fmul(uVar4,0x3f000000);
                  offset[uVar6] = fVar7;
                  uVar4 = __aeabi_fmul(x,h_x2_div_d);
                  uVar4 = __addsf3(uVar4,y);
                  uVar6 = (uint)gc.plane_axis_1;
                  fVar7 = (float)__aeabi_fmul(uVar4,0x3f000000);
                  offset[uVar6] = fVar7;
                  uVar8 = extraout_d0_18;
                }
                else {
                  uVar4 = __aeabi_f2d(offset[gc.plane_axis_0]);
                  __aeabi_f2d(offset[gc.plane_axis_1]);
                  hypot((double)CONCAT44(in_stack_ffffff4c,in_stack_ffffff48),
                        (double)CONCAT44(in_stack_ffffff54,in_stack_ffffff50));
                  r = (float)__truncdfsf2(uVar4,extraout_r1_07);
                  uVar8 = extraout_d0_19;
                }
                isclockwise = gc.motion_mode == '\x02';
                fVar7 = inverse_feed_rate;
                if (gc.inverse_feed_rate_mode == '\0') {
                  fVar7 = gc.feed_rate;
                }
                mc_arc(gc.position,target,offset,gc.plane_axis_0,gc.plane_axis_1,gc.plane_axis_2,
                       (float)uVar8,SUB41(fVar7,0),(float)((ulonglong)uVar8 >> 0x20),
                       gc.inverse_feed_rate_mode);
              }
              break;
            case '\x04':
              if (axis_words != '\0') {
                gc.status_code = '\x06';
              }
            }
          }
          if (gc.status_code != '\0') {
            return gc.status_code;
          }
          gc.position[0] = target[0];
          gc.position[1] = target[1];
          gc.position[2] = target[2];
        }
        uVar1 = gc.status_code;
        if (gc.program_flow != '\0') {
          plan_synchronize();
          sys.auto_start = '\0';
          if (gc.program_flow == '\x02') {
            mc_reset();
            uVar1 = gc.status_code;
          }
          else {
            gc.program_flow = '\0';
            uVar1 = gc.status_code;
          }
        }
      }
    }
  }
  return uVar1;
}


////>>0x0800184c>>next_statement>>////

int next_statement(char *letter,float *float_ptr,char *line,uint8_t *char_counter)

{
  int iVar1;
  uint8_t *char_counter_local;
  char *line_local;
  float *float_ptr_local;
  char *letter_local;
  
  if (line[*char_counter] == '\0') {
    iVar1 = 0;
  }
  else {
    *letter = line[*char_counter];
    if (((byte)*letter < 0x41) || (0x5a < (byte)*letter)) {
      gc.status_code = '\x02';
      iVar1 = 0;
    }
    else {
      *char_counter = *char_counter + '\x01';
      iVar1 = read_float(line,char_counter,float_ptr);
      if (iVar1 == 0) {
        gc.status_code = '\x01';
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}


////>>0x080018cc>>step_wr>>////



void step_wr(uint32_t x)

{
  uint32_t x_local;
  uint32_t val;
  
  _DAT_40021014 = x | _DAT_40021014 & 0xfffffaaf;
  return;
}


////>>0x080018fc>>dirn_wr>>////



void dirn_wr(uint32_t x)

{
  uint32_t x_local;
  uint32_t val;
  
  _DAT_40021014 = x | _DAT_40021014 & 0xfffff55f;
  return;
}


////>>0x0800192c>>limits_init>>////

/* WARNING: Unknown calling convention */

void limits_init(void)

{
  limits_enabled = (int)((settings.flags & 8) != 0);
  return;
}


////>>0x0800195c>>limits_isr>>////

/* WARNING: Unknown calling convention */

void limits_isr(void)

{
  if ((sys.state != '\x06') && ((sys.execute & 0x20) == 0)) {
    mc_reset();
    sys.execute = sys.execute | 0x40;
  }
  return;
}


////>>0x08001994>>homing_cycle>>////

/* WARNING: Variable defined which should be unmapped: homing_rate-local */

void homing_cycle(uint8_t cycle_mask,int8_t pos_dir,_Bool invert_pin,float homing_rate)

{
  bool bVar1;
  uint16_t uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint32_t uVar7;
  undefined4 in_r3;
  uint32_t uVar8;
  undefined8 uVar9;
  float homing_rate_local;
  undefined uStack_64;
  _Bool invert_pin_local;
  int8_t pos_dir_local;
  uint8_t cycle_mask_local;
  uint32_t steps [3];
  uint16_t step_bits0;
  uint32_t dt_min;
  uint32_t delta_rate;
  float ds;
  uint32_t step_event_count;
  uint32_t limit_state;
  uint16_t step_bits;
  uint32_t trap_counter;
  uint32_t step_rate;
  uint32_t step_delay;
  int32_t counter_z;
  int32_t counter_y;
  int32_t counter_x;
  uint16_t dirn_bits;
  uint32_t dt;
  uint8_t dist;
  
  bVar1 = !invert_pin;
  memset(steps,0,0xc);
  dist = (cycle_mask & 1) != 0;
  if ((bool)dist) {
    __aeabi_f2d(settings.steps_per_mm[0]);
    steps[0] = lround((double)CONCAT17(cycle_mask,
                                       CONCAT16(pos_dir,CONCAT15(bVar1,CONCAT14(uStack_64,in_r3)))))
    ;
  }
  if ((cycle_mask & 2) != 0) {
    dist = dist + '\x01';
    __aeabi_f2d(settings.steps_per_mm[1]);
    steps[1] = lround((double)CONCAT17(cycle_mask,
                                       CONCAT16(pos_dir,CONCAT15(bVar1,CONCAT14(uStack_64,in_r3)))))
    ;
  }
  if ((cycle_mask & 4) != 0) {
    dist = dist + '\x01';
    __aeabi_f2d(settings.steps_per_mm[2]);
    steps[2] = lround((double)CONCAT17(cycle_mask,
                                       CONCAT16(pos_dir,CONCAT15(bVar1,CONCAT14(uStack_64,in_r3)))))
    ;
  }
  uVar7 = steps[2];
  if (steps[2] < steps[1]) {
    uVar7 = steps[1];
  }
  uVar8 = steps[0];
  if (steps[0] < uVar7) {
    uVar8 = uVar7;
  }
  uVar9 = __floatunsidf(uVar8);
  uVar3 = __floatunsidf(dist);
  sqrt((double)CONCAT17(cycle_mask,CONCAT16(pos_dir,CONCAT15(bVar1,CONCAT14(uStack_64,in_r3)))));
  uVar9 = __divdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,extraout_r1);
  uVar3 = __truncdfsf2((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar4 = __aeabi_fmul(settings.acceleration,uVar3);
  uVar4 = __aeabi_fdiv(uVar4,0x453b8000);
  uVar4 = __aeabi_f2d(uVar4);
  ceil((double)CONCAT17(cycle_mask,CONCAT16(pos_dir,CONCAT15(bVar1,CONCAT14(uStack_64,in_r3)))));
  iVar5 = __aeabi_d2uiz(uVar4,extraout_r1_00);
  uVar4 = __floatunsidf(dist);
  sqrt((double)CONCAT17(cycle_mask,CONCAT16(pos_dir,CONCAT15(bVar1,CONCAT14(uStack_64,in_r3)))));
  uVar9 = __aeabi_f2d(in_r3);
  uVar9 = __muldf3(uVar4,extraout_r1_01,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar4 = __truncdfsf2((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar3 = __aeabi_fmul(uVar3,uVar4);
  uVar3 = __aeabi_fdiv(0x4c64e1c0,uVar3);
  __aeabi_f2d(uVar3);
  uVar6 = lround((double)CONCAT17(cycle_mask,
                                  CONCAT16(pos_dir,CONCAT15(bVar1,CONCAT14(uStack_64,uVar4)))));
  uVar2 = settings.step_invert_mask;
  dt = 75000;
  if (uVar6 < 75000) {
    dt = uVar6;
  }
  dirn_bits = settings.dirn_invert_mask ^ settings.homing_dir_mask & 0xaa0;
  if (pos_dir == '\0') {
    dirn_bits = dirn_bits ^ 0xaa0;
  }
  dirn_wr((uint)dirn_bits);
  step_wr((uint)uVar2);
  counter_z = -(uVar8 >> 1);
  step_delay = dt - settings.pulse_microseconds;
  step_rate = 0;
  trap_counter = 10000;
  cycle_mask_local = cycle_mask;
  counter_y = counter_z;
  counter_x = counter_z;
  while( true ) {
    step_bits = uVar2;
    limit_state = debounce_rd();
    if (bVar1) {
      limit_state = limit_state ^ 0x1e;
    }
    if (((cycle_mask_local & 1) != 0) && (counter_x = counter_x + steps[0], 0 < counter_x)) {
      if ((limit_state & 0x10) == 0) {
        cycle_mask_local = cycle_mask_local & 0xfe;
      }
      else {
        step_bits = uVar2 ^ 0x10;
      }
      counter_x = counter_x - uVar8;
    }
    if (((cycle_mask_local & 2) != 0) && (counter_y = counter_y + steps[1], 0 < counter_y)) {
      if ((limit_state & 8) == 0) {
        cycle_mask_local = cycle_mask_local & 0xfd;
      }
      else {
        step_bits = step_bits ^ 0x440;
      }
      counter_y = counter_y - uVar8;
    }
    if (((cycle_mask_local & 4) != 0) && (counter_z = counter_z + steps[2], 0 < counter_z)) {
      if ((limit_state & 4) == 0) {
        cycle_mask_local = cycle_mask_local & 0xfb;
      }
      else {
        step_bits = step_bits ^ 0x100;
      }
      counter_z = counter_z - uVar8;
    }
    if ((cycle_mask_local == '\0') || ((sys.execute & 0x10) != 0)) break;
    step_wr((uint)step_bits);
    delay_us((uint)settings.pulse_microseconds);
    step_wr((uint)uVar2);
    delay_us(step_delay);
    if ((uVar6 < dt) && (trap_counter = dt + trap_counter, 20000 < trap_counter)) {
      trap_counter = trap_counter - 20000;
      step_rate = iVar5 + step_rate;
      dt = 60000000 / step_rate;
      if (60000000 / step_rate < uVar6) {
        dt = uVar6;
      }
      step_delay = dt - settings.pulse_microseconds;
    }
  }
  return;
}


////>>0x08001d4c>>limits_go_home>>////

/* WARNING: Unknown calling convention */

void limits_go_home(void)

{
  char cVar1;
  float homing_rate;
  float homing_rate_00;
  float extraout_s0;
  float homing_rate_01;
  float extraout_s0_00;
  float homing_rate_02;
  int8_t n_cycle;
  
  st_wake_up();
  homing_cycle('\x04','\x01',false,homing_rate);
  homing_cycle('\x03','\x01',false,homing_rate_00);
  delay_ms(settings.homing_debounce_delay);
  n_cycle = '\x02';
  homing_rate_02 = extraout_s0;
  while (cVar1 = n_cycle + -1, n_cycle != '\0') {
    homing_cycle('\a','\0',true,homing_rate_02);
    delay_ms(settings.homing_debounce_delay);
    homing_rate_02 = homing_rate_01;
    n_cycle = cVar1;
    if ('\0' < cVar1) {
      homing_cycle('\a','\x01',false,homing_rate_01);
      delay_ms(settings.homing_debounce_delay);
      homing_rate_02 = extraout_s0_00;
    }
  }
  st_go_idle();
  return;
}


////>>0x08001ddc>>grbl_main>>////

/* WARNING: Unknown calling convention */

int grbl_main(void)

{
  serial_init();
  settings_init();
  st_init();
  memset(&sys,0,0x14);
  sys.abort = '\x01';
  sys.state = '\x01';
  do {
    if (sys.abort != '\0') {
      serial_reset_read_buffer();
      plan_init();
      gc_init();
      protocol_init();
      spindle_init();
      coolant_init();
      limits_init();
      st_reset();
      sys_sync_current_position();
      sys.abort = '\0';
      sys.execute = '\0';
      if ((settings.flags & 2) != 0) {
        sys.auto_start = '\x01';
      }
      if ((sys.state == '\x01') && ((settings.flags & 0x10) != 0)) {
        sys.state = '\x06';
      }
      if (sys.state == '\x06') {
        report_feedback_message('\x02');
      }
      else {
        sys.state = '\0';
        protocol_execute_startup();
      }
    }
    protocol_execute_runtime();
    protocol_process();
  } while( true );
}


////>>0x08001e98>>mc_line>>////

void mc_line(float x,float y,float z,float feed_rate,uint8_t invert_feed_rate)

{
  uint8_t uVar1;
  float x_00;
  float y_00;
  float z_00;
  float feed_rate_00;
  float feed_rate_local;
  float z_local;
  float y_local;
  float x_local;
  
  if (sys.state != '\a') {
    do {
      protocol_execute_runtime();
      if (sys.abort != '\0') {
        return;
      }
      uVar1 = plan_check_full_buffer();
    } while (uVar1 != '\0');
    plan_buffer_line(x_00,y_00,z_00,feed_rate_00,invert_feed_rate);
    if (sys.state == '\0') {
      sys.state = '\x02';
    }
    if (sys.auto_start != '\0') {
      st_cycle_start();
    }
  }
  return;
}


////>>0x08001f00>>mc_arc>>////

/* WARNING: Variable defined which should be unmapped: axis_0-local */

void mc_arc(float *position,float *target,float *offset,uint8_t axis_0,uint8_t axis_1,
           uint8_t axis_linear,float feed_rate,uint8_t invert_feed_rate,float radius,
           uint8_t isclockwise)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  float extraout_s2;
  float z;
  float extraout_s2_00;
  float extraout_s3;
  float feed_rate_00;
  float extraout_s3_00;
  float feed_rate_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined3 in_stack_00000009;
  undefined4 in_stack_00000010;
  char in_stack_00000014;
  uint in_stack_ffffff78;
  undefined4 in_stack_ffffff7c;
  undefined3 uStack_80;
  uint8_t axis_0_local;
  float *offset_local;
  float *target_local;
  float *position_local;
  float arc_target [3];
  float r_axisi;
  float sin_Ti;
  float cos_Ti;
  float sin_T;
  float cos_T;
  float linear_per_segment;
  float theta_per_segment;
  uint16_t segments;
  float millimeters_of_travel;
  float rt_axis1;
  float rt_axis0;
  float linear_travel;
  float center_axis1;
  float center_axis0;
  int8_t count;
  uint16_t i;
  float angular_travel;
  float r_axis1;
  float r_axis0;
  
  _uStack_80 = CONCAT13(axis_0,uStack_80);
  center_axis0 = (float)__addsf3(feed_rate,position[axis_0],offset[axis_0]);
  center_axis1 = (float)__addsf3(position[axis_1],offset[axis_1]);
  uVar1 = __aeabi_fsub(target[axis_linear],position[axis_linear]);
  r_axis0 = (float)((uint)offset[axis_0] ^ 0x80000000);
  r_axis1 = (float)((uint)offset[axis_1] ^ 0x80000000);
  uVar2 = __aeabi_fsub(target[axis_0],center_axis0);
  uVar3 = __aeabi_fsub(target[axis_1],center_axis1);
  uVar4 = __aeabi_fmul(r_axis0,uVar3);
  uVar5 = __aeabi_fmul(r_axis1,uVar2);
  uVar4 = __aeabi_fsub(uVar4,uVar5);
  uVar8 = __aeabi_f2d(uVar4);
  uVar2 = __aeabi_fmul(r_axis0,uVar2);
  uVar3 = __aeabi_fmul(r_axis1,uVar3);
  uVar2 = __addsf3(uVar2,uVar3);
  uVar9 = __aeabi_f2d(uVar2);
  uVar8 = atan2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                (int)((ulonglong)uVar9 >> 0x20));
  angular_travel = (float)__truncdfsf2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  if (in_stack_00000014 == '\0') {
    iVar6 = __aeabi_fcmple(angular_travel,0);
    if (iVar6 != 0) {
      uVar8 = __aeabi_f2d(angular_travel);
      uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x54442d18,0x401921fb);
      angular_travel = (float)__truncdfsf2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    }
  }
  else {
    iVar6 = __aeabi_fcmpge(angular_travel,0);
    if (iVar6 != 0) {
      uVar8 = __aeabi_f2d(angular_travel);
      uVar8 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x54442d18,0x401921fb);
      angular_travel = (float)__truncdfsf2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    }
  }
  uVar2 = __aeabi_fmul(angular_travel,in_stack_00000010);
  uVar2 = __aeabi_f2d(uVar2);
  __aeabi_f2d(uVar1 & 0x7fffffff);
  hypot((double)CONCAT44(in_stack_ffffff7c,in_stack_ffffff78),(double)CONCAT44(offset,_uStack_80));
  uVar2 = __truncdfsf2(uVar2,extraout_r1);
  iVar6 = __aeabi_fcmpeq(uVar2,0);
  if (iVar6 == 0) {
    uVar2 = __aeabi_fdiv(uVar2,settings.mm_per_arc_segment);
    uVar2 = __aeabi_f2d(uVar2);
    floor((double)CONCAT44(in_stack_ffffff7c,in_stack_ffffff78));
    segments = __aeabi_d2uiz(uVar2,extraout_r1_00);
    if (isclockwise != '\0') {
      uVar2 = __floatsisf(segments);
      __aeabi_fmul(_invert_feed_rate,uVar2);
    }
    uVar2 = __floatsisf(segments);
    sin_T = (float)__aeabi_fdiv(angular_travel,uVar2);
    uVar2 = __floatsisf(segments);
    linear_per_segment = (float)__aeabi_fdiv(uVar1,uVar2);
    uVar8 = __aeabi_f2d(sin_T);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,0x3fe00000);
    uVar9 = __aeabi_f2d(sin_T);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                     (int)((ulonglong)uVar9 >> 0x20));
    uVar8 = __subdf3(0,0x3ff00000,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    cos_T = (float)__truncdfsf2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    count = '\0';
    theta_per_segment = sin_T;
    arc_target[axis_linear] = position[axis_linear];
    uVar8 = extraout_d0;
    fVar7 = extraout_s2;
    feed_rate_01 = extraout_s3;
    for (i = 1; i < segments; i = i + 1) {
      if ((int)count < (int)(uint)settings.n_arc_correction) {
        uVar2 = __aeabi_fmul(r_axis0,sin_T);
        uVar3 = __aeabi_fmul(r_axis1,cos_T);
        fVar7 = (float)__addsf3(uVar2,uVar3);
        uVar2 = __aeabi_fmul(r_axis0,cos_T);
        uVar3 = __aeabi_fmul(r_axis1,sin_T);
        r_axis0 = (float)__aeabi_fsub(uVar2,uVar3);
        count = count + '\x01';
        r_axis1 = fVar7;
      }
      else {
        uVar2 = __floatsisf(i);
        uVar2 = __aeabi_fmul(uVar2,theta_per_segment);
        uVar2 = __aeabi_f2d(uVar2);
        cos((double)CONCAT44(in_stack_ffffff7c,in_stack_ffffff78));
        uVar2 = __truncdfsf2(uVar2,extraout_r1_01);
        uVar3 = __floatsisf(i);
        uVar3 = __aeabi_fmul(uVar3,theta_per_segment);
        uVar3 = __aeabi_f2d(uVar3);
        sin((double)CONCAT44(in_stack_ffffff7c,in_stack_ffffff78));
        uVar3 = __truncdfsf2(uVar3,extraout_r1_02);
        uVar4 = __aeabi_fmul((uint)offset[axis_0] ^ 0x80000000,uVar2);
        uVar5 = __aeabi_fmul(offset[axis_1],uVar3);
        r_axis0 = (float)__addsf3(uVar4,uVar5);
        uVar3 = __aeabi_fmul((uint)offset[axis_0] ^ 0x80000000,uVar3);
        uVar2 = __aeabi_fmul(offset[axis_1],uVar2);
        r_axis1 = (float)__aeabi_fsub(uVar3,uVar2);
        count = '\0';
      }
      fVar7 = (float)__addsf3(center_axis0,r_axis0);
      arc_target[axis_0] = fVar7;
      fVar7 = (float)__addsf3(center_axis1,r_axis1);
      arc_target[axis_1] = fVar7;
      fVar7 = (float)__addsf3(arc_target[axis_linear],linear_per_segment);
      arc_target[axis_linear] = fVar7;
      in_stack_ffffff78 = (uint)isclockwise;
      mc_line((float)extraout_d0_00,(float)((ulonglong)extraout_d0_00 >> 0x20),z,feed_rate_00,
              SUB41(arc_target[0],0));
      if (sys.abort != '\0') {
        return;
      }
      uVar8 = extraout_d0_01;
      fVar7 = extraout_s2_00;
      feed_rate_01 = extraout_s3_00;
    }
    mc_line((float)uVar8,(float)((ulonglong)uVar8 >> 0x20),fVar7,feed_rate_01,SUB41(*target,0));
  }
  return;
}


////>>0x08002408>>mc_dwell>>////

/* WARNING: Variable defined which should be unmapped: seconds-local */

void mc_dwell(float seconds)

{
  uint16_t ms;
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uStack_20;
  float seconds_local;
  uint16_t i;
  
  uVar1 = __aeabi_fmul(seconds,in_r0,0x41a00000);
  uVar1 = __aeabi_f2d(uVar1);
  floor((double)CONCAT44(in_r0,uStack_20));
  i = __aeabi_d2uiz(uVar1,extraout_r1);
  plan_synchronize();
  uVar1 = __aeabi_fmul(in_r0,0x447a0000);
  uVar2 = __floatsisf((uint)i * 0x32);
  uVar1 = __aeabi_fsub(uVar1,uVar2);
  uVar1 = __aeabi_f2d(uVar1);
  floor((double)CONCAT44(in_r0,uStack_20));
  ms = __aeabi_d2uiz(uVar1,extraout_r1_00);
  delay_ms(ms);
  while ((i != 0 && (protocol_execute_runtime(), sys.abort == '\0'))) {
    _delay_ms(0x32);
    i = i - 1;
  }
  return;
}


////>>0x080024c4>>mc_go_home>>////

/* WARNING: Unknown calling convention */

void mc_go_home(void)

{
  uint8_t invert_feed_rate;
  undefined4 uVar1;
  undefined8 uVar2;
  float z;
  float feed_rate;
  int8_t z_dir;
  int8_t y_dir;
  int8_t x_dir;
  
  sys.state = '\x05';
  limits_enabled = 0;
  limits_go_home();
  protocol_execute_runtime();
  if (sys.abort == '\0') {
    memset(sys.position,0,0xc);
    sys_sync_current_position();
    sys.state = '\0';
    if ((settings.homing_dir_mask & 0x20) == 0) {
      x_dir = -1;
    }
    else {
      x_dir = '\x01';
    }
    if ((settings.homing_dir_mask & 0x80) == 0) {
      y_dir = -1;
    }
    else {
      y_dir = '\x01';
    }
    if ((settings.homing_dir_mask & 0x200) == 0) {
      z_dir = -1;
    }
    else {
      z_dir = '\x01';
    }
    uVar1 = __floatsisf((int)x_dir);
    invert_feed_rate = __aeabi_fmul(uVar1,settings.homing_pulloff);
    uVar1 = __floatsisf((int)y_dir);
    __aeabi_fmul(uVar1,settings.homing_pulloff);
    uVar1 = __floatsisf((int)z_dir);
    uVar2 = __aeabi_fmul(uVar1,settings.homing_pulloff);
    mc_line((float)uVar2,(float)((ulonglong)uVar2 >> 0x20),z,feed_rate,invert_feed_rate);
    st_cycle_start();
    plan_synchronize();
    sys_sync_current_position();
    if ((settings.flags & 8) != 0) {
      limits_enabled = 1;
    }
  }
  return;
}


////>>0x080025e8>>mc_reset>>////

/* WARNING: Unknown calling convention */

void mc_reset(void)

{
  if ((sys.execute & 0x10) == 0) {
    sys.execute = sys.execute | 0x10;
    spindle_stop();
    coolant_stop();
    if (sys.state - 3 < 3) {
      sys.execute = sys.execute | 0x20;
      st_go_idle();
    }
  }
  return;
}


////>>0x08002638>>read_float>>////

int read_float(char *line,uint8_t *char_counter,float *float_ptr)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar6;
  undefined8 uVar7;
  float *float_ptr_local;
  uint8_t *char_counter_local;
  char *line_local;
  float fval;
  _Bool isdecimal;
  uint8_t ndigit;
  int8_t exp;
  uint32_t intval;
  _Bool isnegative;
  uchar c;
  char *ptr;
  
  puVar5 = (uchar *)(line + *char_counter);
  puVar4 = puVar5 + 1;
  c = *puVar5;
  bVar2 = false;
  if (c == '-') {
    bVar2 = true;
    c = *puVar4;
    ptr = (char *)(puVar5 + 2);
  }
  else {
    ptr = (char *)puVar4;
    if (c == '+') {
      ptr = (char *)(puVar5 + 2);
      c = *puVar4;
    }
  }
  intval = 0;
  exp = '\0';
  ndigit = '\0';
  bVar3 = false;
  do {
    bVar1 = c - 0x30;
    if (bVar1 < 10) {
      ndigit = ndigit + 1;
      if (ndigit < 9) {
        if (bVar3) {
          exp = exp + -1;
        }
        intval = (uint)bVar1 + intval * 10;
      }
      else if (!bVar3) {
        exp = exp + '\x01';
      }
    }
    else {
      if ((bVar1 != 0xfe) || (bVar3)) {
        if (ndigit == '\0') {
          iVar6 = 0;
        }
        else {
          fval = (float)__floatunsisf(intval);
          iVar6 = __aeabi_fcmpeq(fval,0);
          if (iVar6 == 0) {
            for (; exp < -1; exp = exp + '\x02') {
              uVar7 = __aeabi_f2d(fval);
              uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x47ae147b,0x3f847ae1);
              fval = (float)__truncdfsf2((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
            }
            if (exp < '\0') {
              uVar7 = __aeabi_f2d(fval);
              uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x9999999a,0x3fb99999);
              fval = (float)__truncdfsf2((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
            }
            else {
              for (; '\0' < exp; exp = exp + -1) {
                fval = (float)__aeabi_fmul(fval,0x41200000);
              }
            }
          }
          if (bVar2) {
            *float_ptr = (float)((uint)fval ^ 0x80000000);
          }
          else {
            *float_ptr = fval;
          }
          *char_counter = ((char)ptr - (char)line) + 0xff;
          iVar6 = 1;
        }
        return iVar6;
      }
      bVar3 = true;
    }
    c = *ptr;
    ptr = ptr + 1;
  } while( true );
}


////>>0x08002814>>delay_ms>>////

void delay_ms(uint16_t ms)

{
  uint16_t ms_local;
  
  return;
}


////>>0x08002828>>delay_us>>////

void delay_us(uint32_t us)

{
  uint32_t us_local;
  
  return;
}


////>>0x0800283a>>sys_sync_current_position>>////

/* WARNING: Unknown calling convention */

void sys_sync_current_position(void)

{
  plan_set_current_position(sys.position[0],sys.position[1],sys.position[2]);
  gc_set_current_position(sys.position[0],sys.position[1],sys.position[2]);
  return;
}


////>>0x08002870>>next_block_index>>////

uint8_t next_block_index(uint8_t block_index)

{
  uint8_t block_index_local;
  
  block_index_local = block_index + '\x01';
  if (block_index_local == '\x12') {
    block_index_local = '\0';
  }
  return block_index_local;
}


////>>0x08002896>>prev_block_index>>////

uint8_t prev_block_index(uint8_t block_index)

{
  uint8_t block_index_local;
  
  block_index_local = block_index;
  if (block_index == '\0') {
    block_index_local = '\x12';
  }
  return block_index_local + 0xff;
}


////>>0x080028bc>>estimate_acceleration_distance>>////

float estimate_acceleration_distance(float initial_rate,float target_rate,float acceleration)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  float fVar3;
  float acceleration_local;
  float target_rate_local;
  float initial_rate_local;
  
  uVar1 = __aeabi_fmul(in_r1,in_r1);
  uVar2 = __aeabi_fmul(in_r0,in_r0);
  uVar1 = __aeabi_fsub(uVar1,uVar2);
  uVar2 = __addsf3(in_r2,in_r2);
  fVar3 = (float)__aeabi_fdiv(uVar1,uVar2);
  return fVar3;
}


////>>0x08002908>>intersection_distance>>////

float intersection_distance(float initial_rate,float final_rate,float acceleration,float distance)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  float fVar3;
  float distance_local;
  float acceleration_local;
  float final_rate_local;
  float initial_rate_local;
  
  uVar1 = __addsf3(in_r2,in_r2);
  uVar1 = __aeabi_fmul(uVar1,in_r3);
  uVar2 = __aeabi_fmul(in_r0,in_r0);
  uVar1 = __aeabi_fsub(uVar1,uVar2);
  uVar2 = __aeabi_fmul(in_r1,in_r1);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __aeabi_fmul(in_r2,0x40800000);
  fVar3 = (float)__aeabi_fdiv(uVar1,uVar2);
  return fVar3;
}


////>>0x08002978>>max_allowable_speed>>////

/* WARNING: Variable defined which should be unmapped: distance-local */

float max_allowable_speed(float acceleration,float target_velocity,float distance)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 extraout_r1;
  undefined4 in_r2;
  float fVar3;
  undefined4 uStack_20;
  float distance_local;
  float target_velocity_local;
  float acceleration_local;
  
  uVar1 = __aeabi_fmul(acceleration,in_r1,in_r1);
  uVar2 = __addsf3(in_r0,in_r0);
  uVar2 = __aeabi_fmul(uVar2,in_r2);
  uVar1 = __aeabi_fsub(uVar1,uVar2);
  uVar1 = __aeabi_f2d(uVar1);
  sqrt((double)CONCAT44(in_r2,uStack_20));
  fVar3 = (float)__truncdfsf2(uVar1,extraout_r1);
  return fVar3;
}


////>>0x080029d8>>planner_reverse_pass_kernel>>////

void planner_reverse_pass_kernel(block_t *previous,block_t *current,block_t *next)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float acceleration;
  float acceleration_00;
  float target_velocity;
  float target_velocity_00;
  float distance;
  float distance_00;
  block_t *next_local;
  block_t *current_local;
  block_t *previous_local;
  
  if (((current != (block_t *)0x0) && (next != (block_t *)0x0)) &&
     (iVar1 = __aeabi_fcmpeq(current->entry_speed,current->max_entry_speed), iVar1 == 0)) {
    if ((current->nominal_length_flag == '\0') &&
       (iVar1 = __aeabi_fcmpgt(current->max_entry_speed,next->entry_speed), iVar1 != 0)) {
      fVar3 = current->max_entry_speed;
      uVar2 = (uint)settings.acceleration ^ 0x80000000;
      max_allowable_speed(acceleration,target_velocity,distance);
      iVar1 = __aeabi_fcmplt(fVar3,uVar2);
      if (iVar1 == 0) {
        fVar3 = (float)((uint)settings.acceleration ^ 0x80000000);
        max_allowable_speed(acceleration_00,target_velocity_00,distance_00);
      }
      else {
        fVar3 = current->max_entry_speed;
      }
      current->entry_speed = fVar3;
    }
    else {
      current->entry_speed = current->max_entry_speed;
    }
    current->recalculate_flag = '\x01';
  }
  return;
}


////>>0x08002a94>>planner_reverse_pass>>////

/* WARNING: Unknown calling convention */

void planner_reverse_pass(void)

{
  block_t *next;
  block_t *block [3];
  uint8_t block_index;
  
  block_index = block_buffer_head;
  block[0] = (block_t *)0x0;
  block[1] = (block_t *)0x0;
  while (next = block[1], block_index != block_buffer_tail) {
    block_index = prev_block_index(block_index);
    block[1] = block[0];
    planner_reverse_pass_kernel(block_buffer + block_index,block[0],next);
    block[0] = block_buffer + block_index;
  }
  return;
}


////>>0x08002afc>>planner_forward_pass_kernel>>////

void planner_forward_pass_kernel(block_t *previous,block_t *current,block_t *next)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float acceleration;
  float acceleration_00;
  float target_velocity;
  float target_velocity_00;
  float distance;
  float distance_00;
  block_t *next_local;
  block_t *current_local;
  block_t *previous_local;
  float entry_speed;
  
  if (((previous != (block_t *)0x0) && (previous->nominal_length_flag == '\0')) &&
     (iVar1 = __aeabi_fcmplt(previous->entry_speed,current->entry_speed), iVar1 != 0)) {
    fVar3 = current->entry_speed;
    uVar2 = (uint)settings.acceleration ^ 0x80000000;
    max_allowable_speed(acceleration,target_velocity,distance);
    iVar1 = __aeabi_fcmplt(fVar3,uVar2);
    if (iVar1 == 0) {
      fVar3 = (float)((uint)settings.acceleration ^ 0x80000000);
      max_allowable_speed(acceleration_00,target_velocity_00,distance_00);
    }
    else {
      fVar3 = current->entry_speed;
    }
    iVar1 = __aeabi_fcmpeq(fVar3,current->entry_speed);
    if (iVar1 == 0) {
      current->entry_speed = fVar3;
      current->recalculate_flag = '\x01';
    }
  }
  return;
}


////>>0x08002ba8>>planner_forward_pass>>////

/* WARNING: Unknown calling convention */

void planner_forward_pass(void)

{
  block_t *previous;
  uint uVar1;
  block_t *block [3];
  uint8_t block_index;
  
  block[1] = (block_t *)0x0;
  block[2] = (block_t *)0x0;
  block_index = block_buffer_tail;
  while (previous = block[1], block_index != block_buffer_head) {
    block[1] = block[2];
    uVar1 = (uint)block_index;
    planner_forward_pass_kernel(previous,block[2],block_buffer + uVar1);
    block_index = next_block_index(block_index);
    block[2] = block_buffer + uVar1;
  }
  planner_forward_pass_kernel(block[1],block[2],(block_t *)0x0);
  return;
}


////>>0x08002c18>>calculate_trapezoid_for_block>>////

/* WARNING: Variable defined which should be unmapped: exit_factor-local */

void calculate_trapezoid_for_block(block_t *block,float entry_factor,float exit_factor)

{
  undefined4 uVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_r1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 in_r2;
  float acceleration;
  float acceleration_00;
  float acceleration_01;
  float distance;
  undefined8 uVar6;
  undefined4 uStack_38;
  float exit_factor_local;
  float entry_factor_local;
  block_t *block_local;
  int32_t decelerate_steps;
  int32_t acceleration_per_minute;
  int32_t plateau_steps;
  int32_t accelerate_steps;
  
  uVar1 = __floatunsisf(entry_factor,block->nominal_rate);
  uVar1 = __aeabi_fmul(uVar1,in_r1);
  uVar1 = __aeabi_f2d(uVar1);
  ceil((double)CONCAT44(in_r2,uStack_38));
  uVar2 = __aeabi_d2uiz(uVar1,extraout_r1);
  block->initial_rate = uVar2;
  uVar1 = __floatunsisf(block->nominal_rate);
  uVar1 = __aeabi_fmul(uVar1,in_r2);
  uVar1 = __aeabi_f2d(uVar1);
  ceil((double)CONCAT44(in_r2,uStack_38));
  uVar2 = __aeabi_d2uiz(uVar1,extraout_r1_00);
  block->final_rate = uVar2;
  uVar6 = __aeabi_i2d(block->rate_delta * 0x32);
  uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0x404e0000);
  iVar3 = __aeabi_d2iz((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar1 = __floatunsisf(block->initial_rate);
  __floatunsisf(block->nominal_rate);
  uVar6 = __floatsisf(iVar3);
  estimate_acceleration_distance((float)uVar6,(float)((ulonglong)uVar6 >> 0x20),acceleration);
  uVar1 = __aeabi_f2d(uVar1);
  ceil((double)CONCAT44(in_r2,uStack_38));
  accelerate_steps = __aeabi_d2iz(uVar1,extraout_r1_01);
  uVar1 = __floatunsisf(block->nominal_rate);
  __floatunsisf(block->final_rate);
  uVar6 = __floatsisf(-iVar3);
  estimate_acceleration_distance((float)uVar6,(float)((ulonglong)uVar6 >> 0x20),acceleration_00);
  uVar1 = __aeabi_f2d(uVar1);
  floor((double)CONCAT44(in_r2,uStack_38));
  iVar4 = __aeabi_d2iz(uVar1,extraout_r1_02);
  plateau_steps = (block->step_event_count - accelerate_steps) - iVar4;
  if (plateau_steps < 0) {
    uVar1 = __floatunsisf(block->initial_rate);
    __floatunsisf(block->final_rate);
    __floatsisf(iVar3);
    uVar6 = __floatsisf(block->step_event_count);
    intersection_distance((float)uVar6,(float)((ulonglong)uVar6 >> 0x20),acceleration_01,distance);
    uVar1 = __aeabi_f2d(uVar1);
    ceil((double)CONCAT44(in_r2,uStack_38));
    uVar5 = __aeabi_d2iz(uVar1,extraout_r1_03);
    uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
    accelerate_steps = block->step_event_count;
    if ((int)uVar5 <= block->step_event_count) {
      accelerate_steps = uVar5;
    }
    plateau_steps = 0;
  }
  block->accelerate_until = accelerate_steps;
  block->decelerate_after = plateau_steps + accelerate_steps;
  return;
}


////>>0x08002e08>>planner_recalculate_trapezoids>>////

/* WARNING: Unknown calling convention */

void planner_recalculate_trapezoids(void)

{
  uint uVar1;
  undefined8 uVar2;
  block_t *current;
  block_t *next;
  uint8_t block_index;
  
  next = (block_t *)0x0;
  block_index = block_buffer_tail;
  while (block_index != block_buffer_head) {
    uVar1 = (uint)block_index;
    if ((next != (block_t *)0x0) &&
       ((next->recalculate_flag != '\0' || (block_buffer[uVar1].recalculate_flag != '\0')))) {
      __aeabi_fdiv(next->entry_speed,next->nominal_speed);
      uVar2 = __aeabi_fdiv(block_buffer[uVar1].entry_speed,next->nominal_speed);
      calculate_trapezoid_for_block(next,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
      next->recalculate_flag = '\0';
    }
    block_index = next_block_index(block_index);
    next = block_buffer + uVar1;
  }
  __aeabi_fdiv(next->entry_speed,next->nominal_speed);
  uVar2 = __aeabi_fdiv(0,next->nominal_speed);
  calculate_trapezoid_for_block(next,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  next->recalculate_flag = '\0';
  return;
}


////>>0x08002edc>>planner_recalculate>>////

/* WARNING: Unknown calling convention */

void planner_recalculate(void)

{
  planner_reverse_pass();
  planner_forward_pass();
  planner_recalculate_trapezoids();
  return;
}


////>>0x08002ef0>>plan_reset_buffer>>////

/* WARNING: Unknown calling convention */

void plan_reset_buffer(void)

{
  block_buffer_tail = block_buffer_head;
  next_buffer_head = next_block_index(block_buffer_head);
  return;
}


////>>0x08002f24>>plan_init>>////

/* WARNING: Unknown calling convention */

void plan_init(void)

{
  plan_reset_buffer();
  memset(&pl,0,0x1c);
  return;
}


////>>0x08002f40>>plan_discard_current_block>>////

/* WARNING: Unknown calling convention */

void plan_discard_current_block(void)

{
  if (block_buffer_head != block_buffer_tail) {
    block_buffer_tail = next_block_index(block_buffer_tail);
  }
  return;
}


////>>0x08002f74>>plan_get_current_block>>////

/* WARNING: Unknown calling convention */

block_t * plan_get_current_block(void)

{
  block_t *pbVar1;
  
  if (block_buffer_head == block_buffer_tail) {
    pbVar1 = (block_t *)0x0;
  }
  else {
    pbVar1 = block_buffer + block_buffer_tail;
  }
  return pbVar1;
}


////>>0x08002fac>>plan_check_full_buffer>>////

/* WARNING: Unknown calling convention */

uint8_t plan_check_full_buffer(void)

{
  return block_buffer_tail == next_buffer_head;
}


////>>0x08002fd4>>plan_synchronize>>////

/* WARNING: Unknown calling convention */

void plan_synchronize(void)

{
  block_t *pbVar1;
  
  while ((pbVar1 = plan_get_current_block(), pbVar1 != (block_t *)0x0 || (sys.state == '\x03'))) {
    protocol_execute_runtime();
    if (sys.abort != '\0') {
      return;
    }
  }
  return;
}


////>>0x08003004>>plan_buffer_line>>////

/* WARNING: Variable defined which should be unmapped: feed_rate-local */

void plan_buffer_line(float x,float y,float z,float feed_rate,uint8_t invert_feed_rate)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  int32_t iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  undefined4 in_r1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 in_r2;
  uint uVar16;
  undefined4 in_r3;
  uint uVar17;
  block_t *pbVar18;
  uint32_t uVar19;
  uint uVar20;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char in_stack_00000000;
  float feed_rate_local;
  float z_local;
  float y_local;
  float x_local;
  float unit_vec [3];
  float delta_mm [3];
  int32_t target [3];
  float v_allowable;
  float sin_theta_d2;
  float cos_theta;
  float inverse_millimeters;
  block_t *block;
  float vmax_junction;
  float inverse_minute;
  
  uVar17 = (uint)block_buffer_head;
  pbVar18 = block_buffer + uVar17;
  uVar1 = __aeabi_fmul(x,settings.steps_per_mm[0],invert_feed_rate);
  __aeabi_f2d(uVar1);
  lVar2 = lround((double)CONCAT44(in_r2,in_r3));
  uVar1 = __aeabi_fmul(settings.steps_per_mm[1],in_r1);
  __aeabi_f2d(uVar1);
  lVar3 = lround((double)CONCAT44(in_r2,in_r3));
  uVar1 = __aeabi_fmul(settings.steps_per_mm[2],in_r2);
  __aeabi_f2d(uVar1);
  lVar4 = lround((double)CONCAT44(in_r2,in_r3));
  pbVar18->direction_bits = 0;
  if (lVar2 < pl.position[0]) {
    pbVar18->direction_bits = pbVar18->direction_bits | 0x20;
  }
  if (lVar3 < pl.position[1]) {
    pbVar18->direction_bits = pbVar18->direction_bits | 0x880;
  }
  if (lVar4 < pl.position[2]) {
    pbVar18->direction_bits = pbVar18->direction_bits | 0x200;
  }
  uVar19 = lVar2 - pl.position[0];
  if ((int)uVar19 < 0) {
    uVar19 = -uVar19;
  }
  block_buffer[uVar17].steps_x = uVar19;
  uVar19 = lVar3 - pl.position[1];
  if ((int)uVar19 < 0) {
    uVar19 = -uVar19;
  }
  block_buffer[uVar17].steps_y = uVar19;
  uVar19 = lVar4 - pl.position[2];
  if ((int)uVar19 < 0) {
    uVar19 = -uVar19;
  }
  block_buffer[uVar17].steps_z = uVar19;
  uVar16 = block_buffer[uVar17].steps_z;
  if (block_buffer[uVar17].steps_z < block_buffer[uVar17].steps_y) {
    uVar16 = block_buffer[uVar17].steps_y;
  }
  uVar20 = block_buffer[uVar17].steps_x;
  if (block_buffer[uVar17].steps_x < uVar16) {
    uVar20 = uVar16;
  }
  block_buffer[uVar17].step_event_count = uVar20;
  if (block_buffer[uVar17].step_event_count != 0) {
    uVar1 = __floatsisf(lVar2 - pl.position[0]);
    uVar1 = __aeabi_fdiv(uVar1,settings.steps_per_mm[0]);
    uVar5 = __floatsisf(lVar3 - pl.position[1]);
    uVar5 = __aeabi_fdiv(uVar5,settings.steps_per_mm[1]);
    uVar6 = __floatsisf(lVar4 - pl.position[2]);
    uVar6 = __aeabi_fdiv(uVar6,settings.steps_per_mm[2]);
    uVar7 = __aeabi_fmul(uVar1,uVar1);
    uVar8 = __aeabi_fmul(uVar5,uVar5);
    uVar7 = __addsf3(uVar7,uVar8);
    uVar8 = __aeabi_fmul(uVar6,uVar6);
    uVar7 = __addsf3(uVar7,uVar8);
    uVar7 = __aeabi_f2d(uVar7);
    sqrt((double)CONCAT44(in_r2,in_r3));
    fVar9 = (float)__truncdfsf2(uVar7,extraout_r1);
    block_buffer[uVar17].millimeters = fVar9;
    uVar7 = __aeabi_fdiv(0x3f800000,block_buffer[uVar17].millimeters);
    if (in_stack_00000000 == '\0') {
      inverse_minute = (float)__aeabi_fmul(in_r3,uVar7);
    }
    else {
      inverse_minute = (float)__aeabi_fdiv(0x3f800000,in_r3);
    }
    fVar9 = (float)__aeabi_fmul(block_buffer[uVar17].millimeters,inverse_minute);
    block_buffer[uVar17].nominal_speed = fVar9;
    uVar8 = __floatsisf(block_buffer[uVar17].step_event_count);
    uVar8 = __aeabi_fmul(uVar8,inverse_minute);
    uVar8 = __aeabi_f2d(uVar8);
    ceil((double)CONCAT44(in_r2,in_r3));
    uVar19 = __aeabi_d2uiz(uVar8,extraout_r1_00);
    block_buffer[uVar17].nominal_rate = uVar19;
    uVar8 = __floatsisf(block_buffer[uVar17].step_event_count);
    uVar8 = __aeabi_fmul(uVar8,uVar7);
    uVar8 = __aeabi_fmul(uVar8,settings.acceleration);
    uVar8 = __aeabi_fdiv(uVar8,0x453b8000);
    uVar8 = __aeabi_f2d(uVar8);
    ceil((double)CONCAT44(in_r2,in_r3));
    iVar10 = __aeabi_d2iz(uVar8,extraout_r1_01);
    block_buffer[uVar17].rate_delta = iVar10;
    fVar11 = (float)__aeabi_fmul(uVar1,uVar7);
    fVar12 = (float)__aeabi_fmul(uVar5,uVar7);
    fVar13 = (float)__aeabi_fmul(uVar6,uVar7);
    vmax_junction = 0.0;
    uVar21 = extraout_d0;
    fVar9 = extraout_s2;
    if ((block_buffer_head != block_buffer_tail) &&
       (iVar14 = __aeabi_fcmpgt(pl.previous_nominal_speed,0), uVar21 = extraout_d0_00,
       fVar9 = extraout_s2_00, iVar14 != 0)) {
      uVar1 = __aeabi_fmul((uint)pl.previous_unit_vec[0] ^ 0x80000000,fVar11);
      uVar5 = __aeabi_fmul(pl.previous_unit_vec[1],fVar12);
      uVar1 = __aeabi_fsub(uVar1,uVar5);
      uVar5 = __aeabi_fmul(pl.previous_unit_vec[2],fVar13);
      uVar1 = __aeabi_fsub(uVar1,uVar5);
      uVar21 = __aeabi_f2d(uVar1);
      iVar14 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),0x66666666,0x3fee6666);
      uVar21 = extraout_d0_01;
      fVar9 = extraout_s2_01;
      if (iVar14 != 0) {
        iVar14 = __aeabi_fcmplt(pl.previous_nominal_speed,block_buffer[uVar17].nominal_speed);
        vmax_junction = pl.previous_nominal_speed;
        if (iVar14 == 0) {
          vmax_junction = block_buffer[uVar17].nominal_speed;
        }
        uVar21 = __aeabi_f2d(uVar1);
        iVar14 = __aeabi_dcmpgt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),0x66666666,0xbfee6666);
        uVar21 = extraout_d0_02;
        fVar9 = extraout_s2_02;
        if (iVar14 != 0) {
          uVar21 = __aeabi_f2d(uVar1);
          uVar21 = __subdf3(0,0x3ff00000,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
          uVar1 = __muldf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),0,0x3fe00000);
          sqrt((double)CONCAT44(in_r2,in_r3));
          uVar1 = __truncdfsf2(uVar1,extraout_r1_02);
          uVar21 = __aeabi_f2d(vmax_junction);
          uVar5 = __aeabi_fmul(settings.acceleration,settings.junction_deviation);
          uVar5 = __aeabi_fmul(uVar5,uVar1);
          uVar22 = __aeabi_f2d(uVar5);
          uVar23 = __aeabi_f2d(uVar1);
          uVar23 = __subdf3(0,0x3ff00000,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
          uVar5 = __divdf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                           (int)((ulonglong)uVar23 >> 0x20));
          sqrt((double)CONCAT44(in_r2,in_r3));
          iVar14 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),uVar5,extraout_r1_03)
          ;
          uVar21 = extraout_d0_03;
          fVar9 = extraout_s2_03;
          if (iVar14 == 0) {
            uVar5 = __aeabi_fmul(settings.acceleration,settings.junction_deviation);
            uVar5 = __aeabi_fmul(uVar5,uVar1);
            uVar21 = __aeabi_f2d(uVar5);
            uVar22 = __aeabi_f2d(uVar1);
            uVar22 = __subdf3(0,0x3ff00000,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
            uVar1 = __divdf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                             (int)((ulonglong)uVar22 >> 0x20));
            sqrt((double)CONCAT44(in_r2,in_r3));
            vmax_junction = (float)__truncdfsf2(uVar1,extraout_r1_04);
            uVar21 = extraout_d0_04;
            fVar9 = extraout_s2_04;
          }
        }
      }
    }
    block_buffer[uVar17].max_entry_speed = vmax_junction;
    fVar15 = (float)((uint)settings.acceleration ^ 0x80000000);
    max_allowable_speed((float)uVar21,(float)((ulonglong)uVar21 >> 0x20),fVar9);
    iVar14 = __aeabi_fcmplt(vmax_junction,fVar15);
    fVar9 = fVar15;
    if (iVar14 != 0) {
      fVar9 = vmax_junction;
    }
    block_buffer[uVar17].entry_speed = fVar9;
    iVar14 = __aeabi_fcmpge(fVar15,block_buffer[uVar17].nominal_speed);
    if (iVar14 == 0) {
      block_buffer[uVar17].nominal_length_flag = '\0';
    }
    else {
      block_buffer[uVar17].nominal_length_flag = '\x01';
    }
    block_buffer[uVar17].recalculate_flag = '\x01';
    pl.previous_nominal_speed = block_buffer[uVar17].nominal_speed;
    block_buffer_head = next_buffer_head;
    pl.previous_unit_vec[0] = fVar11;
    pl.previous_unit_vec[1] = fVar12;
    pl.previous_unit_vec[2] = fVar13;
    next_buffer_head = next_block_index(next_buffer_head);
    pl.position[0] = lVar2;
    pl.position[1] = lVar3;
    pl.position[2] = lVar4;
    planner_recalculate();
  }
  return;
}


////>>0x080035ec>>plan_set_current_position>>////

void plan_set_current_position(int32_t x,int32_t y,int32_t z)

{
  int32_t z_local;
  int32_t y_local;
  int32_t x_local;
  
  pl.position[0] = x;
  pl.position[1] = y;
  pl.position[2] = z;
  return;
}


////>>0x08003618>>plan_cycle_reinitialize>>////

void plan_cycle_reinitialize(int32_t step_events_remaining)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  int32_t step_events_remaining_local;
  block_t *block;
  
  uVar3 = (uint)block_buffer_tail;
  fVar4 = block_buffer[uVar3].millimeters;
  uVar1 = __floatsisf(step_events_remaining);
  uVar1 = __aeabi_fmul(fVar4,uVar1);
  uVar2 = __floatsisf(block_buffer[uVar3].step_event_count);
  fVar4 = (float)__aeabi_fdiv(uVar1,uVar2);
  block_buffer[uVar3].millimeters = fVar4;
  block_buffer[uVar3].step_event_count = step_events_remaining;
  block_buffer[uVar3].entry_speed = 0.0;
  block_buffer[uVar3].max_entry_speed = 0.0;
  block_buffer[uVar3].nominal_length_flag = '\0';
  block_buffer[uVar3].recalculate_flag = '\x01';
  planner_recalculate();
  return;
}


////>>0x0800369c>>printString>>////

void printString(char *s)

{
  char *s_local;
  
  s_local = s;
  while (*s_local != '\0') {
    serial_write(*s_local);
    s_local = s_local + 1;
  }
  return;
}


////>>0x080036c6>>printPgmString>>////

void printPgmString(char *s)

{
  char *s_local;
  
  s_local = s;
  while (*s_local != '\0') {
    serial_write(*s_local);
    s_local = s_local + 1;
  }
  return;
}


////>>0x080036f0>>print_base2>>////

void print_base2(uint n,int bits)

{
  uint8_t data;
  int bits_local;
  uint n_local;
  int i;
  uint32_t mask;
  
  mask = 1 << (bits - 1U & 0xff);
  for (i = 0; i < bits; i = i + 1) {
    if ((mask & n) == 0) {
      data = '0';
    }
    else {
      data = '1';
    }
    serial_write(data);
    mask = mask >> 1;
  }
  return;
}


////>>0x08003740>>print_uint8_base2>>////

void print_uint8_base2(uint8_t n)

{
  uint8_t n_local;
  
  print_base2((uint)n,8);
  return;
}


////>>0x0800375c>>print_uint16_base2>>////

void print_uint16_base2(uint16_t n)

{
  uint16_t n_local;
  
  print_base2((uint)n,0x10);
  return;
}


////>>0x08003778>>print_uint32_base10>>////

void print_uint32_base10(ulong n)

{
  uint uVar1;
  ulong n_local;
  uint8_t uStack_15;
  uchar buf [10];
  uint8_t i;
  
  i = '\0';
  n_local = n;
  if (n == 0) {
    serial_write('0');
  }
  else {
    for (; n_local != 0; n_local = n_local / 10) {
      uVar1 = (uint)i;
      i = i + '\x01';
      buf[uVar1] = (char)(n_local % 10) + '0';
    }
    for (; i != '\0'; i = i + 0xff) {
      serial_write(buf[i - 1]);
    }
  }
  return;
}


////>>0x080037fc>>printInteger>>////

void printInteger(long n)

{
  long n_local;
  
  n_local = n;
  if (n < 0) {
    serial_write('-');
    n_local = -n;
  }
  print_uint32_base10(n_local);
  return;
}


////>>0x08003826>>printFloat>>////

void printFloat(float n)

{
  float in_r0;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  float n_local;
  uint8_t uStack_1d;
  uchar buf [10];
  uint32_t a;
  uint8_t i;
  uint8_t decimals;
  
  iVar1 = __aeabi_fcmplt(in_r0,0);
  n_local = in_r0;
  if (iVar1 != 0) {
    serial_write('-');
    n_local = (float)((uint)in_r0 ^ 0x80000000);
  }
  for (decimals = settings.decimal_places; 1 < decimals; decimals = decimals + 0xfe) {
    n_local = (float)__aeabi_fmul(n_local,0x42c80000);
  }
  if (decimals != '\0') {
    n_local = (float)__aeabi_fmul(n_local,0x41200000);
  }
  uVar2 = __addsf3(n_local,0x3f000000);
  i = '\0';
  a = __aeabi_f2iz(uVar2);
  buf[settings.decimal_places] = '.';
  for (; a != 0; a = a / 10) {
    if (i == settings.decimal_places) {
      i = i + '\x01';
    }
    uVar4 = (uint)i;
    i = i + '\x01';
    buf[uVar4] = (char)(a % 10) + '0';
  }
  while (i < settings.decimal_places) {
    uVar4 = (uint)i;
    i = i + '\x01';
    buf[uVar4] = '0';
  }
  if (i == settings.decimal_places) {
    bVar3 = i + 1;
    i = i + '\x02';
    buf[bVar3] = '0';
  }
  for (; i != '\0'; i = i + 0xff) {
    serial_write(buf[i - 1]);
  }
  return;
}


////>>0x08003980>>protocol_reset_line_buffer>>////

/* WARNING: Unknown calling convention */

void protocol_reset_line_buffer(void)

{
  char_counter = '\0';
  iscomment = '\0';
  return;
}


////>>0x080039a0>>protocol_init>>////

/* WARNING: Unknown calling convention */

void protocol_init(void)

{
  protocol_reset_line_buffer();
  report_init_message();
  buttons_enabled = 1;
  return;
}


////>>0x080039bc>>protocol_execute_startup>>////

/* WARNING: Unknown calling convention */

void protocol_execute_startup(void)

{
  uint8_t uVar1;
  uint8_t n;
  
  for (n = '\0'; n < 2; n = n + '\x01') {
    uVar1 = settings_read_startup_line(n,line);
    if (uVar1 == '\0') {
      report_status_message('\n');
    }
    else if (line[0] != '\0') {
      printString(line);
      uVar1 = gc_execute_line(line);
      report_status_message(uVar1);
    }
  }
  return;
}


////>>0x08003a18>>buttons_isr>>////

void buttons_isr(uint32_t buttons)

{
  uint32_t buttons_local;
  
  if ((buttons & 0x80) == 0) {
    if ((buttons & 0x40) == 0) {
      if ((buttons & 0x20) != 0) {
        sys.execute = sys.execute | 2;
      }
    }
    else {
      sys.execute = sys.execute | 8;
    }
  }
  else {
    mc_reset();
  }
  return;
}


////>>0x08003a74>>protocol_execute_runtime>>////

/* WARNING: Removing unreachable block (ram,0x08003ad2) */
/* WARNING: Unknown calling convention */

void protocol_execute_runtime(void)

{
  uint8_t uVar1;
  uint8_t rt_exec;
  
  uVar1 = sys.execute;
  if (sys.execute != '\0') {
    if ((sys.execute & 0x60) != 0) {
      sys.state = '\x06';
      if ((sys.execute & 0x40) != 0) {
        report_alarm_message(-1);
        report_feedback_message('\x01');
        do {
        } while( true );
      }
      report_alarm_message(-2);
      sys.execute = sys.execute & 0x9f;
    }
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 1) != 0) {
        report_realtime_status();
        sys.execute = sys.execute & 0xfe;
      }
      if ((uVar1 & 8) != 0) {
        st_feed_hold();
        sys.execute = sys.execute & 0xf7;
      }
      if ((uVar1 & 4) != 0) {
        st_cycle_reinitialize();
        sys.execute = sys.execute & 0xfb;
      }
      if ((uVar1 & 2) != 0) {
        st_cycle_start();
        if ((settings.flags & 2) != 0) {
          sys.auto_start = '\x01';
        }
        sys.execute = sys.execute & 0xfd;
      }
    }
    else {
      sys.abort = '\x01';
    }
  }
  return;
}


////>>0x08003b98>>protocol_execute_line>>////

/* WARNING: Variable defined which should be unmapped: line-local */

uint8_t protocol_execute_line(char *line)

{
  byte bVar1;
  uint8_t uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  uint uVar5;
  float value_00;
  undefined4 uStack_20;
  char *line_local;
  float value;
  float parameter;
  uint8_t char_counter;
  uint8_t helper_var;
  
  if (*line != '$') {
    uVar2 = gc_execute_line(line);
    return uVar2;
  }
  char_counter = '\x01';
  helper_var = '\0';
  bVar1 = line[1];
  if (bVar1 == 0) {
    report_grbl_help();
    return '\0';
  }
  if ((0x58 < bVar1) || (bVar1 < 0x23)) goto switchD_08003bdc_caseD_25;
  switch(bVar1) {
  case 0x23:
    char_counter = '\x02';
    if (line[2] != '\0') {
      return '\x03';
    }
    report_gcode_parameters();
    break;
  case 0x24:
    char_counter = '\x02';
    if (line[2] != '\0') {
      return '\x03';
    }
    report_grbl_settings();
    break;
  case 0x43:
    char_counter = '\x02';
    if (line[2] != '\0') {
      return '\x03';
    }
    if (sys.state == '\a') {
      mc_reset();
      report_feedback_message('\x05');
    }
    else {
      if (sys.state != '\0') {
        return '\v';
      }
      sys.state = '\a';
      report_feedback_message('\x04');
    }
    break;
  case 0x47:
    char_counter = '\x02';
    if (line[2] != '\0') {
      return '\x03';
    }
    report_gcode_modes();
    break;
  case 0x48:
    if ((settings.flags & 0x10) == 0) {
      return '\a';
    }
    if ((sys.state != '\0') && (sys.state != '\x06')) {
      return '\v';
    }
    mc_go_home();
    if (sys.abort == '\0') {
      protocol_execute_startup();
    }
    break;
  case 0x4e:
    char_counter = '\x02';
    if (line[2] == '\0') {
      for (helper_var = '\0'; helper_var < 2; helper_var = helper_var + '\x01') {
        uVar2 = settings_read_startup_line(helper_var,line);
        if (uVar2 == '\0') {
          report_status_message('\n');
        }
        else {
          report_startup_line(helper_var,line);
        }
      }
      return '\0';
    }
    helper_var = '\x01';
  default:
switchD_08003bdc_caseD_25:
    iVar3 = read_float(line,&char_counter,&parameter);
    if (iVar3 == 0) {
      return '\x01';
    }
    bVar1 = char_counter + 1;
    if (line[char_counter] != '=') {
      return '\x03';
    }
    char_counter = bVar1;
    if (helper_var == '\0') {
      iVar3 = read_float(line,&char_counter,&value);
      if (iVar3 == 0) {
        return '\x01';
      }
      if (line[char_counter] == '\0') {
        iVar3 = __aeabi_f2iz(parameter);
        uVar2 = settings_store_global_setting(iVar3,value_00);
        return uVar2;
      }
      return '\x03';
    }
    do {
      line[(uint)char_counter - (uint)bVar1] = line[char_counter];
      uVar5 = (uint)char_counter;
      char_counter = char_counter + '\x01';
    } while (line[uVar5] != '\0');
    helper_var = bVar1;
    helper_var = gc_execute_line(line);
    if (helper_var != '\0') {
      return helper_var;
    }
    uVar4 = __aeabi_f2d(parameter);
    trunc((double)CONCAT44(line,uStack_20));
    helper_var = __aeabi_d2uiz(uVar4,extraout_r1);
    settings_store_startup_line(helper_var,line);
    break;
  case 0x58:
    char_counter = '\x02';
    if (line[2] != '\0') {
      return '\x03';
    }
    if (sys.state == '\x06') {
      report_feedback_message('\x03');
      sys.state = '\0';
    }
  }
  return '\0';
}


////>>0x08003f34>>protocol_process>>////

/* WARNING: Unknown calling convention */

void protocol_process(void)

{
  uint8_t status_code;
  byte bVar1;
  uint uVar2;
  uint8_t c;
  
  while( true ) {
    while( true ) {
      bVar1 = serial_read();
      if (bVar1 == 0xff) {
        return;
      }
      if ((bVar1 == 10) || (bVar1 == 0xd)) break;
      if (iscomment == '\0') {
        if ((0x20 < bVar1) && (bVar1 != 0x2f)) {
          if (bVar1 == 0x28) {
            iscomment = '\x01';
          }
          else if (char_counter == 0xff) {
            report_status_message('\r');
            protocol_reset_line_buffer();
          }
          else if ((bVar1 < 0x61) || (0x7a < bVar1)) {
            uVar2 = (uint)char_counter;
            char_counter = char_counter + '\x01';
            line[uVar2] = bVar1;
          }
          else {
            uVar2 = (uint)char_counter;
            char_counter = char_counter + '\x01';
            line[uVar2] = bVar1 - 0x20;
          }
        }
      }
      else if (bVar1 == 0x29) {
        iscomment = '\0';
      }
    }
    protocol_execute_runtime();
    if (sys.abort != '\0') break;
    if (char_counter == '\0') {
      report_status_message('\0');
    }
    else {
      line[char_counter] = '\0';
      status_code = protocol_execute_line(line);
      report_status_message(status_code);
    }
    protocol_reset_line_buffer();
  }
  return;
}


////>>0x08004030>>report_status_message>>////

void report_status_message(uint8_t status_code)

{
  uint8_t status_code_local;
  
  if (status_code == '\0') {
    printPgmString("ok\r\n");
  }
  else {
    printPgmString("error: ");
    switch(status_code) {
    case '\x01':
      printPgmString("Bad number format");
      break;
    case '\x02':
      printPgmString("Expected command letter");
      break;
    case '\x03':
      printPgmString("Unsupported statement");
      break;
    case '\x04':
      printPgmString("Invalid radius");
      break;
    case '\x05':
      printPgmString("Modal group violation");
      break;
    case '\x06':
      printPgmString("Invalid statement");
      break;
    case '\a':
      printPgmString("Setting disabled");
      break;
    case '\b':
      printPgmString("Value < 0.0");
      break;
    case '\t':
      printPgmString("Value < 3 usec");
      break;
    case '\n':
      printPgmString("EEPROM read fail. Using defaults");
      break;
    case '\v':
      printPgmString("Busy or queued");
      break;
    case '\f':
      printPgmString("Alarm lock");
      break;
    case '\r':
      printPgmString("Line overflow");
    }
    printPgmString("\r\n");
  }
  return;
}


////>>0x08004148>>report_alarm_message>>////

void report_alarm_message(int8_t alarm_code)

{
  int8_t alarm_code_local;
  
  printPgmString("ALARM: ");
  if (alarm_code == -2) {
    printPgmString("Abort during cycle");
  }
  else if (alarm_code == -1) {
    printPgmString("Hard limit");
  }
  printPgmString(". MPos?\r\n");
  delay_ms(500);
  return;
}


////>>0x080041a0>>report_feedback_message>>////

void report_feedback_message(uint8_t message_code)

{
  uint8_t message_code_local;
  
  printPgmString("[");
  switch(message_code) {
  case '\x01':
    printPgmString("Reset to continue");
    break;
  case '\x02':
    printPgmString("\'$H\'|\'$X\' to unlock");
    break;
  case '\x03':
    printPgmString("Caution: Unlocked");
    break;
  case '\x04':
    printPgmString("Enabled");
    break;
  case '\x05':
    printPgmString("Disabled");
  }
  printPgmString("]\r\n");
  return;
}


////>>0x08004228>>report_init_message>>////

/* WARNING: Unknown calling convention */

void report_init_message(void)

{
  printPgmString("\r\nGrbl 0.8c [\'$\' for help]\r\n");
  return;
}


////>>0x0800423c>>report_grbl_help>>////

/* WARNING: Unknown calling convention */

void report_grbl_help(void)

{
  printPgmString(
                "$$ (view Grbl settings)\r\n$# (view # parameters)\r\n$G (view parser state)\r\n$N (view startup blocks)\r\n$x=value (save Grbl setting)\r\n$Nx=line (save startup block)\r\n$C (check gcode mode)\r\n$X (kill alarm lock)\r\n$H (run homing cycle)\r\n~ (cycle start)\r\n! (feed hold)\r\n? (current status)\r\nctrl-x (reset Grbl)\r\n"
                );
  return;
}


////>>0x08004250>>report_grbl_settings>>////

/* WARNING: Unknown calling convention */

void report_grbl_settings(void)

{
  float n;
  float n_00;
  float n_01;
  float n_02;
  float n_03;
  float n_04;
  float n_05;
  float n_06;
  float n_07;
  float n_08;
  float n_09;
  
  printPgmString("$0=");
  printFloat(n);
  printPgmString(" (x, step/mm)\r\n$1=");
  printFloat(n_00);
  printPgmString(" (y, step/mm)\r\n$2=");
  printFloat(n_01);
  printPgmString(" (z, step/mm)\r\n$3=");
  printInteger((uint)settings.pulse_microseconds);
  printPgmString(" (step pulse, usec)\r\n$4=");
  printFloat(n_02);
  printPgmString(" (default feed, mm/min)\r\n$5=");
  printFloat(n_03);
  printPgmString(" (default seek, mm/min)\r\n$6=");
  printInteger((uint)settings.step_invert_mask);
  printPgmString(" (step port invert mask, int:");
  print_uint16_base2(settings.step_invert_mask);
  printPgmString(")\r\n$7=");
  printInteger((uint)settings.stepper_idle_lock_time);
  printPgmString(" (step idle delay, msec)\r\n$8=");
  n_04 = (float)__aeabi_fdiv(settings.acceleration,0x45610000);
  printFloat(n_04);
  printPgmString(" (acceleration, mm/sec^2)\r\n$9=");
  printFloat(n_05);
  printPgmString(" (junction deviation, mm)\r\n$10=");
  printFloat(n_06);
  printPgmString(" (arc, mm/segment)\r\n$11=");
  printInteger((uint)settings.n_arc_correction);
  printPgmString(" (n-arc correction, int)\r\n$12=");
  printInteger((uint)settings.decimal_places);
  printPgmString(" (n-decimals, int)\r\n$13=");
  printInteger((uint)((settings.flags & 1) != 0));
  printPgmString(" (report inches, bool)\r\n$14=");
  printInteger((uint)((settings.flags & 2) != 0));
  printPgmString(" (auto start, bool)\r\n$15=");
  printInteger((uint)((settings.flags & 4) != 0));
  printPgmString(" (invert step enable, bool)\r\n$16=");
  printInteger((uint)((settings.flags & 8) != 0));
  printPgmString(" (hard limits, bool)\r\n$17=");
  printInteger((uint)((settings.flags & 0x10) != 0));
  printPgmString(" (homing cycle, bool)\r\n$18=");
  printInteger((uint)settings.homing_dir_mask);
  printPgmString(" (homing dir invert mask, int:");
  print_uint16_base2(settings.homing_dir_mask);
  printPgmString(")\r\n$19=");
  printFloat(n_07);
  printPgmString(" (homing feed, mm/min)\r\n$20=");
  printFloat(n_08);
  printPgmString(" (homing seek, mm/min)\r\n$21=");
  printInteger((uint)settings.homing_debounce_delay);
  printPgmString(" (homing debounce, msec)\r\n$22=");
  printFloat(n_09);
  printPgmString(" (homing pull-off, mm)\r\n$23=");
  printInteger((uint)settings.dirn_invert_mask);
  printPgmString(" (dir port invert mask, int:");
  print_uint16_base2(settings.dirn_invert_mask);
  printPgmString(")\r\n");
  return;
}


////>>0x080044e8>>report_gcode_parameters>>////

/* WARNING: Unknown calling convention */

void report_gcode_parameters(void)

{
  uint8_t uVar1;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float fVar2;
  float extraout_s0_11;
  float extraout_s0_12;
  undefined8 uVar3;
  float coord_data [3];
  uint8_t i;
  uint8_t coord_select;
  
  coord_select = '\0';
  while( true ) {
    if (7 < coord_select) {
      printPgmString("[G92:");
      fVar2 = extraout_s0_10;
      for (i = '\0'; i < 3; i = i + '\x01') {
        if ((settings.flags & 1) == 0) {
          printFloat(fVar2);
        }
        else {
          uVar3 = __aeabi_f2d(gc.coord_offset[i]);
          uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x57e16865,0x3fa42851);
          fVar2 = (float)__truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
          printFloat(fVar2);
        }
        if (i < 2) {
          printPgmString(",");
          fVar2 = extraout_s0_11;
        }
        else {
          printPgmString("]\r\n");
          fVar2 = extraout_s0_12;
        }
      }
      return;
    }
    uVar1 = settings_read_coord_data(coord_select,coord_data);
    if (uVar1 == '\0') break;
    printPgmString("[G");
    fVar2 = extraout_s0;
    switch(coord_select) {
    case '\0':
      printPgmString("54:");
      fVar2 = extraout_s0_00;
      break;
    case '\x01':
      printPgmString("55:");
      fVar2 = extraout_s0_01;
      break;
    case '\x02':
      printPgmString("56:");
      fVar2 = extraout_s0_02;
      break;
    case '\x03':
      printPgmString("57:");
      fVar2 = extraout_s0_03;
      break;
    case '\x04':
      printPgmString("58:");
      fVar2 = extraout_s0_04;
      break;
    case '\x05':
      printPgmString("59:");
      fVar2 = extraout_s0_05;
      break;
    case '\x06':
      printPgmString("28:");
      fVar2 = extraout_s0_06;
      break;
    case '\a':
      printPgmString("30:");
      fVar2 = extraout_s0_07;
    }
    for (i = '\0'; i < 3; i = i + '\x01') {
      if ((settings.flags & 1) == 0) {
        printFloat(fVar2);
      }
      else {
        uVar3 = __aeabi_f2d(coord_data[i]);
        uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x57e16865,0x3fa42851);
        fVar2 = (float)__truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
        printFloat(fVar2);
      }
      if (i < 2) {
        printPgmString(",");
        fVar2 = extraout_s0_08;
      }
      else {
        printPgmString("]\r\n");
        fVar2 = extraout_s0_09;
      }
    }
    coord_select = coord_select + '\x01';
  }
  report_status_message('\n');
  return;
}


////>>0x080046d0>>report_gcode_modes>>////

/* WARNING: Unknown calling convention */

void report_gcode_modes(void)

{
  float n;
  float n_00;
  undefined8 uVar1;
  
  switch(gc.motion_mode) {
  case '\0':
    printPgmString("[G0");
    break;
  case '\x01':
    printPgmString("[G1");
    break;
  case '\x02':
    printPgmString("[G2");
    break;
  case '\x03':
    printPgmString("[G3");
    break;
  case '\x04':
    printPgmString("[G80");
  }
  printPgmString(" G");
  printInteger(gc.coord_select + 0x36);
  if (gc.plane_axis_0 == '\0') {
    if (gc.plane_axis_1 == '\x01') {
      printPgmString(" G17");
    }
    else {
      printPgmString(" G18");
    }
  }
  else {
    printPgmString(" G19");
  }
  if (gc.inches_mode == '\0') {
    printPgmString(" G21");
  }
  else {
    printPgmString(" G20");
  }
  if (gc.absolute_mode == '\0') {
    printPgmString(" G91");
  }
  else {
    printPgmString(" G90");
  }
  if (gc.inverse_feed_rate_mode == '\0') {
    printPgmString(" G94");
  }
  else {
    printPgmString(" G93");
  }
  if (gc.program_flow == '\x02') {
    printPgmString(" M2");
  }
  else if (gc.program_flow < 3) {
    if (gc.program_flow == '\0') {
      printPgmString(" M0");
    }
    else if (gc.program_flow == '\x01') {
      printPgmString(" M1");
    }
  }
  if (gc.spindle_direction == '\x01') {
    printPgmString(" M3");
  }
  else if (gc.spindle_direction < '\x02') {
    if (gc.spindle_direction == -1) {
      printPgmString(" M4");
    }
    else if (gc.spindle_direction == '\0') {
      printPgmString(" M5");
    }
  }
  if (gc.coolant_mode == '\x02') {
    printPgmString(" M7");
  }
  else if (gc.coolant_mode < 3) {
    if (gc.coolant_mode == '\0') {
      printPgmString(" M9");
    }
    else if (gc.coolant_mode == '\x01') {
      printPgmString(" M8");
    }
  }
  printPgmString(" T");
  printInteger((uint)gc.tool);
  printPgmString(" F");
  if (gc.inches_mode == '\0') {
    printFloat(n);
  }
  else {
    uVar1 = __aeabi_f2d(gc.feed_rate);
    uVar1 = __muldf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x57e16865,0x3fa42851);
    n_00 = (float)__truncdfsf2((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
    printFloat(n_00);
  }
  printPgmString("]\r\n");
  return;
}


////>>0x08004900>>report_startup_line>>////

void report_startup_line(uint8_t n,char *line)

{
  char *line_local;
  uint8_t n_local;
  
  printPgmString("$N");
  printInteger((uint)n);
  printPgmString("=");
  printString(line);
  printPgmString("\r\n");
  return;
}


////>>0x08004940>>report_realtime_status>>////

/* WARNING: Unknown calling convention */

void report_realtime_status(void)

{
  undefined4 uVar1;
  float fVar2;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined8 uVar3;
  undefined8 uVar4;
  float print_position [3];
  int32_t current_position [3];
  uint8_t i;
  
  current_position[0] = sys.position[0];
  current_position[1] = sys.position[1];
  current_position[2] = sys.position[2];
  switch(sys.state) {
  case '\0':
    printPgmString("<Idle");
    break;
  case '\x02':
    printPgmString("<Queue");
    break;
  case '\x03':
    printPgmString("<Run");
    break;
  case '\x04':
    printPgmString("<Hold");
    break;
  case '\x05':
    printPgmString("<Home");
    break;
  case '\x06':
    printPgmString("<Alarm");
    break;
  case '\a':
    printPgmString("<Check");
  }
  printPgmString(",MPos:");
  for (i = '\0'; i < 3; i = i + '\x01') {
    uVar1 = __floatsisf(current_position[i]);
    fVar2 = (float)__aeabi_fdiv(uVar1,settings.steps_per_mm[i]);
    print_position[i] = fVar2;
    fVar2 = extraout_s0;
    if ((settings.flags & 1) != 0) {
      uVar3 = __aeabi_f2d(print_position[i]);
      uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x57e16865,0x3fa42851);
      fVar2 = (float)__truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
      print_position[i] = fVar2;
      fVar2 = extraout_s0_00;
    }
    printFloat(fVar2);
    printPgmString(",");
  }
  printPgmString("WPos:");
  for (i = '\0'; i < 3; i = i + '\x01') {
    if ((settings.flags & 1) == 0) {
      fVar2 = print_position[i];
      uVar1 = __addsf3(gc.coord_system[i],gc.coord_offset[i]);
      fVar2 = (float)__aeabi_fsub(fVar2,uVar1);
      print_position[i] = fVar2;
      fVar2 = extraout_s0_02;
    }
    else {
      uVar3 = __aeabi_f2d(print_position[i]);
      uVar1 = __addsf3(gc.coord_system[i],gc.coord_offset[i]);
      uVar4 = __aeabi_f2d(uVar1);
      uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x57e16865,0x3fa42851);
      uVar3 = __subdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
      fVar2 = (float)__truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
      print_position[i] = fVar2;
      fVar2 = extraout_s0_01;
    }
    printFloat(fVar2);
    if (i < 2) {
      printPgmString(",");
    }
  }
  printPgmString(">\r\n");
  return;
}


////>>0x08004bc0>>settings_store_startup_line>>////

void settings_store_startup_line(uint8_t n,char *line)

{
  char *line_local;
  uint8_t n_local;
  uint16_t addr;
  
  memcpy_to_eeprom_with_checksum((uint)(ushort)((ushort)n * 0x101 + 0x300),line,0x100);
  return;
}


////>>0x08004bf4>>settings_write_coord_data>>////

void settings_write_coord_data(uint8_t coord_select,float *coord_data)

{
  float *coord_data_local;
  uint8_t coord_select_local;
  uint16_t addr;
  
  memcpy_to_eeprom_with_checksum
            ((uint)(ushort)((ushort)coord_select * 0xd + 0x200),(char *)coord_data,0xc);
  return;
}


////>>0x08004c2a>>write_global_settings>>////

/* WARNING: Unknown calling convention */

void write_global_settings(void)

{
  eeprom_put_char(0,'\x05');
  memcpy_to_eeprom_with_checksum(1,(char *)&settings,0x40);
  return;
}


////>>0x08004c48>>settings_reset>>////

void settings_reset(_Bool reset_all)

{
  _Bool reset_all_local;
  
  if (reset_all) {
    settings.steps_per_mm[0] = 157.4803;
    settings.steps_per_mm[1] = 157.4803;
    settings.steps_per_mm[2] = 157.4803;
    settings.pulse_microseconds = '\n';
    settings.default_feed_rate = 250.0;
    settings.default_seek_rate = 500.0;
    settings.acceleration = 36000.0;
    settings.mm_per_arc_segment = 0.1;
    settings.step_invert_mask = 0;
    settings.dirn_invert_mask = 0xa80;
    settings.junction_deviation = 0.05;
  }
  settings.flags = '\x12';
  settings.homing_dir_mask = 0;
  settings.homing_feed_rate = 25.0;
  settings.homing_seek_rate = 250.0;
  settings.homing_debounce_delay = 100;
  settings.homing_pulloff = 1.0;
  settings.stepper_idle_lock_time = '\x19';
  settings.decimal_places = '\x03';
  settings.n_arc_correction = '\x19';
  write_global_settings();
  return;
}


////>>0x08004d2c>>settings_read_startup_line>>////

uint8_t settings_read_startup_line(uint8_t n,char *line)

{
  int iVar1;
  char *line_local;
  uint8_t n_local;
  uint16_t addr;
  
  iVar1 = memcpy_from_eeprom_with_checksum(line,(uint)(ushort)((ushort)n * 0x101 + 0x300),0x100);
  if (iVar1 == 0) {
    *line = '\0';
    settings_store_startup_line(n,line);
  }
  return iVar1 != 0;
}


////>>0x08004d7c>>settings_read_coord_data>>////

uint8_t settings_read_coord_data(uint8_t coord_select,float *coord_data)

{
  int iVar1;
  float *coord_data_local;
  uint8_t coord_select_local;
  uint16_t addr;
  
  iVar1 = memcpy_from_eeprom_with_checksum
                    ((char *)coord_data,(uint)(ushort)((ushort)coord_select * 0xd + 0x200),0xc);
  if (iVar1 == 0) {
    memset(coord_data,0,0xc);
    settings_write_coord_data(coord_select,coord_data);
  }
  return iVar1 != 0;
}


////>>0x08004dd2>>read_global_settings>>////

/* WARNING: Unknown calling convention */

uint8_t read_global_settings(void)

{
  byte bVar1;
  int iVar2;
  uint8_t version;
  
  bVar1 = eeprom_get_char(0);
  if (bVar1 == 5) {
    iVar2 = memcpy_from_eeprom_with_checksum((char *)&settings,1,0x40);
    if (iVar2 == 0) {
      return '\0';
    }
  }
  else {
    if (4 < bVar1) {
      return '\0';
    }
    iVar2 = memcpy_from_eeprom_with_checksum((char *)&settings,1,0x28);
    if (iVar2 == 0) {
      return '\0';
    }
    settings_reset(false);
  }
  return '\x01';
}


////>>0x08004e30>>settings_store_global_setting>>////

/* WARNING: Variable defined which should be unmapped: value-local */

uint8_t settings_store_global_setting(int parameter,float value)

{
  int iVar1;
  undefined4 uVar2;
  float in_r1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  float value_local;
  int parameter_local;
  
  switch(parameter) {
  case 0:
  case 1:
  case 2:
    iVar1 = __aeabi_fcmple(value,in_r1,0);
    if (iVar1 != 0) {
      return '\b';
    }
    settings.steps_per_mm[parameter] = in_r1;
    break;
  case 3:
    iVar1 = __aeabi_fcmplt(in_r1,0x40400000);
    if (iVar1 != 0) {
      return '\t';
    }
    uVar2 = __aeabi_f2d(in_r1);
    round((double)CONCAT44(parameter,in_r1));
    settings.pulse_microseconds = __aeabi_d2uiz(uVar2,extraout_r1);
    break;
  case 4:
    settings.default_feed_rate = in_r1;
    break;
  case 5:
    settings.default_seek_rate = in_r1;
    break;
  case 6:
    uVar2 = __aeabi_f2d(in_r1);
    trunc((double)CONCAT44(parameter,in_r1));
    settings.step_invert_mask = __aeabi_d2uiz(uVar2,extraout_r1_00);
    break;
  case 7:
    uVar2 = __aeabi_f2d(in_r1);
    round((double)CONCAT44(parameter,in_r1));
    settings.stepper_idle_lock_time = __aeabi_d2uiz(uVar2,extraout_r1_01);
    break;
  case 8:
    uVar2 = __aeabi_fmul(in_r1,0x42700000);
    settings.acceleration = (float)__aeabi_fmul(uVar2,0x42700000);
    break;
  case 9:
    settings.junction_deviation = (float)((uint)in_r1 & 0x7fffffff);
    break;
  case 10:
    settings.mm_per_arc_segment = in_r1;
    break;
  case 0xb:
    uVar2 = __aeabi_f2d(in_r1);
    round((double)CONCAT44(parameter,in_r1));
    settings.n_arc_correction = __aeabi_d2uiz(uVar2,extraout_r1_02);
    break;
  case 0xc:
    uVar2 = __aeabi_f2d(in_r1);
    round((double)CONCAT44(parameter,in_r1));
    settings.decimal_places = __aeabi_d2uiz(uVar2,extraout_r1_03);
    break;
  case 0xd:
    iVar1 = __aeabi_fcmpeq(in_r1,0);
    if (iVar1 == 0) {
      settings.flags = settings.flags | 1;
    }
    else {
      settings.flags = settings.flags & 0xfe;
    }
    break;
  case 0xe:
    iVar1 = __aeabi_fcmpeq(in_r1,0);
    if (iVar1 == 0) {
      settings.flags = settings.flags | 2;
    }
    else {
      settings.flags = settings.flags & 0xfd;
    }
    break;
  case 0xf:
    iVar1 = __aeabi_fcmpeq(in_r1,0);
    if (iVar1 == 0) {
      settings.flags = settings.flags | 4;
    }
    else {
      settings.flags = settings.flags & 0xfb;
    }
    break;
  case 0x10:
    iVar1 = __aeabi_fcmpeq(in_r1,0);
    if (iVar1 == 0) {
      settings.flags = settings.flags | 8;
    }
    else {
      settings.flags = settings.flags & 0xf7;
    }
    limits_init();
    break;
  case 0x11:
    iVar1 = __aeabi_fcmpeq(in_r1,0);
    if (iVar1 == 0) {
      settings.flags = settings.flags | 0x10;
    }
    else {
      settings.flags = settings.flags & 0xef;
    }
    break;
  case 0x12:
    uVar2 = __aeabi_f2d(in_r1);
    trunc((double)CONCAT44(parameter,in_r1));
    settings.homing_dir_mask = __aeabi_d2uiz(uVar2,extraout_r1_04);
    break;
  case 0x13:
    settings.homing_feed_rate = in_r1;
    break;
  case 0x14:
    settings.homing_seek_rate = in_r1;
    break;
  case 0x15:
    uVar2 = __aeabi_f2d(in_r1);
    round((double)CONCAT44(parameter,in_r1));
    settings.homing_debounce_delay = __aeabi_d2uiz(uVar2,extraout_r1_05);
    break;
  case 0x16:
    settings.homing_pulloff = in_r1;
    break;
  case 0x17:
    uVar2 = __aeabi_f2d(in_r1);
    trunc((double)CONCAT44(parameter,in_r1));
    settings.dirn_invert_mask = __aeabi_d2uiz(uVar2,extraout_r1_06);
    break;
  default:
    return '\x06';
  }
  write_global_settings();
  return '\0';
}


////>>0x080051b4>>settings_init>>////

/* WARNING: Unknown calling convention */

void settings_init(void)

{
  uint8_t uVar1;
  float coord_data [3];
  uint8_t i;
  
  uVar1 = read_global_settings();
  if (uVar1 == '\0') {
    report_status_message('\n');
    settings_reset(true);
    report_grbl_settings();
  }
  for (i = '\0'; i < 8; i = i + '\x01') {
    uVar1 = settings_read_coord_data(i,coord_data);
    if (uVar1 == '\0') {
      report_status_message('\n');
    }
  }
  return;
}


////>>0x08005208>>spindle_on>>////

/* WARNING: Unknown calling convention */

void spindle_on(void)

{
  return;
}


////>>0x08005214>>spindle_off>>////

/* WARNING: Unknown calling convention */

void spindle_off(void)

{
  return;
}


////>>0x08005220>>spindle_fwd>>////

/* WARNING: Unknown calling convention */

void spindle_fwd(void)

{
  return;
}


////>>0x0800522c>>spindle_rev>>////

/* WARNING: Unknown calling convention */

void spindle_rev(void)

{
  return;
}


////>>0x08005238>>spindle_init>>////

/* WARNING: Unknown calling convention */

void spindle_init(void)

{
  current_direction = '\0';
  spindle_stop();
  return;
}


////>>0x08005250>>spindle_stop>>////

/* WARNING: Unknown calling convention */

void spindle_stop(void)

{
  spindle_off();
  return;
}


////>>0x0800525c>>spindle_run>>////

void spindle_run(int8_t direction)

{
  int8_t direction_local;
  
  if ((int)direction != (uint)current_direction) {
    plan_synchronize();
    if (direction == '\0') {
      spindle_stop();
      current_direction = direction;
    }
    else {
      if (direction < '\x01') {
        spindle_rev();
      }
      else {
        spindle_fwd();
      }
      spindle_on();
      current_direction = direction;
    }
  }
  return;
}


////>>0x080052ac>>step_wr>>////



void step_wr(uint32_t x)

{
  uint32_t x_local;
  uint32_t val;
  
  _DAT_40021014 = x | _DAT_40021014 & 0xfffffaaf;
  return;
}


////>>0x080052dc>>dirn_wr>>////



void dirn_wr(uint32_t x)

{
  uint32_t x_local;
  uint32_t val;
  
  _DAT_40021014 = x | _DAT_40021014 & 0xfffff55f;
  return;
}


////>>0x0800530c>>stepper_motor_disable>>////

/* WARNING: Unknown calling convention */

void stepper_motor_disable(void)

{
  return;
}


////>>0x08005318>>stepper_motor_enable>>////

/* WARNING: Unknown calling convention */

void stepper_motor_enable(void)

{
  return;
}


////>>0x08005324>>set_step_events_per_minute>>////

void set_step_events_per_minute(uint32_t steps_per_minute)

{
  uint32_t steps_per_minute_local;
  uint32_t ticks;
  
  steps_per_minute_local = steps_per_minute;
  if (steps_per_minute < 800) {
    steps_per_minute_local = 800;
  }
  st.cycles_per_step_event = 1260000000 / steps_per_minute_local;
  set_step_period(st.cycles_per_step_event);
  return;
}


////>>0x08005360>>iterate_trapezoid_cycle_counter>>////

/* WARNING: Unknown calling convention */

int iterate_trapezoid_cycle_counter(void)

{
  bool bVar1;
  
  st.trapezoid_tick_cycle_counter = st.cycles_per_step_event + st.trapezoid_tick_cycle_counter;
  bVar1 = 420000 < st.trapezoid_tick_cycle_counter;
  if (bVar1) {
    st.trapezoid_tick_cycle_counter = st.trapezoid_tick_cycle_counter - 420000;
  }
  return (uint)bVar1;
}


////>>0x080053a0>>step_period_isr>>////

/* WARNING: Unknown calling convention */

void step_period_isr(void)

{
  int iVar1;
  
  dirn_wr((uint)dirn_bits);
  saved_step_bits = step_bits;
  if (current_block == (block_t *)0x0) {
    current_block = plan_get_current_block();
    if (current_block == (block_t *)0x0) {
      st_go_idle();
      sys.execute = sys.execute | 4;
    }
    else {
      if (sys.state == '\x03') {
        st.trapezoid_adjusted_rate = current_block->initial_rate;
        set_step_events_per_minute(st.trapezoid_adjusted_rate);
        st.trapezoid_tick_cycle_counter = 210000;
      }
      st.min_safe_rate = (current_block->rate_delta >> 1) + current_block->rate_delta;
      st.counter_x = -(current_block->step_event_count >> 1);
      st.event_count = current_block->step_event_count;
      st.step_events_completed = 0;
      st.counter_y = st.counter_x;
      st.counter_z = st.counter_x;
    }
  }
  if (current_block != (block_t *)0x0) {
    dirn_bits = current_block->direction_bits;
    step_bits = 0;
    st.counter_x = current_block->steps_x + st.counter_x;
    if (0 < st.counter_x) {
      step_bits = 0x10;
      st.counter_x = st.counter_x - st.event_count;
      if ((dirn_bits & 0x20) == 0) {
        sys.position[0] = sys.position[0] + 1;
      }
      else {
        sys.position[0] = sys.position[0] + -1;
      }
    }
    st.counter_y = current_block->steps_y + st.counter_y;
    if (0 < st.counter_y) {
      step_bits = step_bits | 0x440;
      st.counter_y = st.counter_y - st.event_count;
      if ((dirn_bits & 0x80) == 0) {
        sys.position[1] = sys.position[1] + 1;
      }
      else {
        sys.position[1] = sys.position[1] + -1;
      }
    }
    st.counter_z = current_block->steps_z + st.counter_z;
    if (0 < st.counter_z) {
      step_bits = step_bits | 0x100;
      st.counter_z = st.counter_z - st.event_count;
      if ((dirn_bits & 0x200) == 0) {
        sys.position[2] = sys.position[2] + 1;
      }
      else {
        sys.position[2] = sys.position[2] + -1;
      }
    }
    st.step_events_completed = st.step_events_completed + 1;
    if (st.step_events_completed < (uint)current_block->step_event_count) {
      if (sys.state == '\x04') {
        iVar1 = iterate_trapezoid_cycle_counter();
        if (iVar1 != 0) {
          if ((uint)current_block->rate_delta < st.trapezoid_adjusted_rate) {
            st.trapezoid_adjusted_rate = st.trapezoid_adjusted_rate - current_block->rate_delta;
            set_step_events_per_minute(st.trapezoid_adjusted_rate);
          }
          else {
            st_go_idle();
            sys.execute = sys.execute | 4;
          }
        }
      }
      else if (st.step_events_completed < current_block->accelerate_until) {
        iVar1 = iterate_trapezoid_cycle_counter();
        if (iVar1 != 0) {
          st.trapezoid_adjusted_rate = st.trapezoid_adjusted_rate + current_block->rate_delta;
          if (current_block->nominal_rate <= st.trapezoid_adjusted_rate) {
            st.trapezoid_adjusted_rate = current_block->nominal_rate;
          }
          set_step_events_per_minute(st.trapezoid_adjusted_rate);
        }
      }
      else if (st.step_events_completed < current_block->decelerate_after) {
        if (st.trapezoid_adjusted_rate != current_block->nominal_rate) {
          st.trapezoid_adjusted_rate = current_block->nominal_rate;
          set_step_events_per_minute(st.trapezoid_adjusted_rate);
        }
      }
      else if (st.step_events_completed == current_block->decelerate_after) {
        if (st.trapezoid_adjusted_rate == current_block->nominal_rate) {
          st.trapezoid_tick_cycle_counter = 210000;
        }
        else {
          st.trapezoid_tick_cycle_counter = 420000 - st.trapezoid_tick_cycle_counter;
        }
      }
      else {
        iVar1 = iterate_trapezoid_cycle_counter();
        if (iVar1 != 0) {
          if (st.min_safe_rate < st.trapezoid_adjusted_rate) {
            st.trapezoid_adjusted_rate = st.trapezoid_adjusted_rate - current_block->rate_delta;
          }
          else {
            st.trapezoid_adjusted_rate = st.trapezoid_adjusted_rate >> 1;
          }
          if (st.trapezoid_adjusted_rate < current_block->final_rate) {
            st.trapezoid_adjusted_rate = current_block->final_rate;
          }
          set_step_events_per_minute(st.trapezoid_adjusted_rate);
        }
      }
    }
    else {
      step_bits = 0;
      current_block = (block_t *)0x0;
      plan_discard_current_block();
    }
  }
  step_bits = step_bits ^ settings.step_invert_mask;
  dirn_bits = dirn_bits ^ settings.dirn_invert_mask;
  return;
}


////>>0x08005760>>step_pulse_isr>>////

/* WARNING: Unknown calling convention */

void step_pulse_isr(void)

{
  step_wr((uint)settings.step_invert_mask);
  return;
}


////>>0x08005778>>step_delay_isr>>////

/* WARNING: Unknown calling convention */

void step_delay_isr(void)

{
  step_wr((uint)saved_step_bits);
  return;
}


////>>0x08005790>>st_wake_up>>////

/* WARNING: Unknown calling convention */

void st_wake_up(void)

{
  stepper_motor_enable();
  if (sys.state == '\x03') {
    step_bits = settings.step_invert_mask;
    dirn_bits = settings.dirn_invert_mask;
    set_step_pulse_delay(0x69);
    set_step_pulse_time((settings.pulse_microseconds + 5) * 0x15);
    step_isr_enable();
  }
  return;
}


////>>0x080057e4>>st_go_idle>>////

/* WARNING: Unknown calling convention */

void st_go_idle(void)

{
  step_isr_disable();
  if ((settings.stepper_idle_lock_time != 0xff) || ((sys.execute & 0x20) != 0)) {
    stepper_motor_disable();
  }
  return;
}


////>>0x08005814>>st_reset>>////

/* WARNING: Unknown calling convention */

void st_reset(void)

{
  memset(&st,0,0x24);
  set_step_events_per_minute(800);
  current_block = (block_t *)0x0;
  return;
}


////>>0x0800583c>>st_init>>////

/* WARNING: Unknown calling convention */

void st_init(void)

{
  step_wr((uint)settings.step_invert_mask);
  st_wake_up();
  st_go_idle();
  return;
}


////>>0x0800585c>>st_cycle_start>>////

/* WARNING: Unknown calling convention */

void st_cycle_start(void)

{
  if (sys.state == '\x02') {
    sys.state = '\x03';
    st_wake_up();
  }
  return;
}


////>>0x0800587c>>st_feed_hold>>////

/* WARNING: Unknown calling convention */

void st_feed_hold(void)

{
  if (sys.state == '\x03') {
    sys.state = '\x04';
    sys.auto_start = '\0';
  }
  return;
}


////>>0x080058a0>>st_cycle_reinitialize>>////

/* WARNING: Unknown calling convention */

void st_cycle_reinitialize(void)

{
  if (current_block == (block_t *)0x0) {
    sys.state = '\0';
  }
  else {
    plan_cycle_reinitialize(current_block->step_event_count - st.step_events_completed);
    st.trapezoid_adjusted_rate = 0;
    set_step_events_per_minute(0);
    st.trapezoid_tick_cycle_counter = 210000;
    st.step_events_completed = 0;
    sys.state = '\x02';
  }
  return;
}


////>>0x08005900>>serial_rx_hook>>////

int serial_rx_hook(uint8_t data)

{
  uint8_t data_local;
  int rc;
  
  if (data == '~') {
    sys.execute = sys.execute | 2;
    return 1;
  }
  if (data < 0x7f) {
    if (data == '?') {
      sys.execute = sys.execute | 1;
      return 1;
    }
    if (data < 0x40) {
      if (data == '\x18') {
        mc_reset();
        return 1;
      }
      if (data == '!') {
        sys.execute = sys.execute | 8;
        return 1;
      }
    }
  }
  return 0;
}


////>>0x0800597c>>aflCall>>////

/* WARNING: Unknown calling convention */

uint32_t aflCall(uint32_t a0,uint32_t a1,int32_t a2)

{
  software_interrupt(0x3f);
  return a0;
}


////>>0x08005984>>startForkserver>>////

int startForkserver(int ticks)

{
  uint32_t uVar1;
  int ticks_local;
  
  if (noHyperCall == 0) {
    uVar1 = aflCall(1,ticks,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x080059b4>>HAL_Init>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_Init(void)

{
  _DAT_40023c00 = _DAT_40023c00 | 0x700;
  HAL_SYSTICK_Config(16000);
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_MspInit();
  return HAL_OK;
}


////>>0x080059f8>>HAL_DeInit>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_DeInit(void)

{
  _DAT_40023820 = 0;
  _DAT_40023824 = 0;
  _DAT_40023810 = 0;
  _DAT_40023814 = 0;
  _DAT_40023818 = 0;
  HAL_MspDeInit();
  return HAL_OK;
}


////>>0x08005a50>>HAL_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_MspInit(void)

{
  return;
}


////>>0x08005a5c>>HAL_MspDeInit>>////

/* WARNING: Unknown calling convention */

void HAL_MspDeInit(void)

{
  return;
}


////>>0x08005a68>>HAL_IncTick>>////

/* WARNING: Unknown calling convention */

void HAL_IncTick(void)

{
  uwTick = uwTick + 1;
  return;
}


////>>0x08005a84>>HAL_GetTick>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_GetTick(void)

{
  return uwTick;
}


////>>0x08005a98>>HAL_Delay>>////

void HAL_Delay(uint32_t Delay)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t Delay_local;
  uint32_t timingdelay;
  
  uVar1 = HAL_GetTick();
  do {
    uVar2 = HAL_GetTick();
  } while (uVar2 < Delay + uVar1);
  return;
}


////>>0x08005ac4>>HAL_GetHalVersion>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_GetHalVersion(void)

{
  return 0x1000000;
}


////>>0x08005ad4>>HAL_GetREVID>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_GetREVID(void)

{
  return _DAT_e0042000 >> 0x10;
}


////>>0x08005aec>>HAL_GetDEVID>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_GetDEVID(void)

{
  return _DAT_e0042000 & 0xfff;
}


////>>0x08005b04>>HAL_EnableDBGSleepMode>>////


/* WARNING: Unknown calling convention */

void HAL_EnableDBGSleepMode(void)

{
  _DAT_e0042004 = _DAT_e0042004 | 1;
  return;
}


////>>0x08005b20>>HAL_DisableDBGSleepMode>>////


/* WARNING: Unknown calling convention */

void HAL_DisableDBGSleepMode(void)

{
  _DAT_e0042004 = _DAT_e0042004 & 0xfffffffe;
  return;
}


////>>0x08005b3c>>HAL_EnableDBGStopMode>>////


/* WARNING: Unknown calling convention */

void HAL_EnableDBGStopMode(void)

{
  _DAT_e0042004 = _DAT_e0042004 | 2;
  return;
}


////>>0x08005b58>>HAL_DisableDBGStopMode>>////


/* WARNING: Unknown calling convention */

void HAL_DisableDBGStopMode(void)

{
  _DAT_e0042004 = _DAT_e0042004 & 0xfffffffd;
  return;
}


////>>0x08005b74>>HAL_EnableDBGStandbyMode>>////


/* WARNING: Unknown calling convention */

void HAL_EnableDBGStandbyMode(void)

{
  _DAT_e0042004 = _DAT_e0042004 | 4;
  return;
}


////>>0x08005b90>>HAL_DisableDBGStandbyMode>>////


/* WARNING: Unknown calling convention */

void HAL_DisableDBGStandbyMode(void)

{
  _DAT_e0042004 = _DAT_e0042004 & 0xfffffffb;
  return;
}


////>>0x08005bac>>HAL_EnableCompensationCell>>////


/* WARNING: Unknown calling convention */

void HAL_EnableCompensationCell(void)

{
  _DAT_42270400 = 1;
  return;
}


////>>0x08005bc4>>HAL_DisableCompensationCell>>////


/* WARNING: Unknown calling convention */

void HAL_DisableCompensationCell(void)

{
  _DAT_42270400 = 0;
  return;
}


////>>0x08005bdc>>NVIC_SetPriority>>////

void NVIC_SetPriority(IRQn_Type IRQn,uint32_t priority)

{
  uint32_t priority_local;
  IRQn_Type IRQn_local;
  
  if (IRQn < WWDG_IRQn) {
    *(char *)(((byte)IRQn & 0xf) + 0xe000ed14) = (char)((priority & 0xff) << 4);
  }
  else {
    *(char *)(IRQn + -0x1fff1c00) = (char)((priority & 0xff) << 4);
  }
  return;
}


////>>0x08005c30>>SysTick_Config>>////



uint32_t SysTick_Config(uint32_t ticks)

{
  bool bVar1;
  uint32_t ticks_local;
  
  bVar1 = ticks - 1 < 0x1000000;
  if (bVar1) {
    _DAT_e000e014 = ticks - 1;
    NVIC_SetPriority(SysTick_IRQn,0xf);
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
  }
  return (uint)!bVar1;
}


////>>0x08005c74>>HAL_RCC_DeInit>>////


/* WARNING: Unknown calling convention */

void HAL_RCC_DeInit(void)

{
  _DAT_40023808 = 0;
  _DAT_40023804 = 0x4003010;
  _DAT_40023884 = 0x20003000;
  _DAT_40023800 = _DAT_40023800 & 0xfaf2ffff | 0x81;
  _DAT_4002380c = 0;
  return;
}


////>>0x08005cec>>HAL_RCC_OscConfig>>////



HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct)

{
  uint32_t uVar1;
  uint32_t uVar2;
  RCC_OscInitTypeDef *RCC_OscInitStruct_local;
  uint32_t result_2;
  uint32_t result_3;
  uint32_t result_4;
  uint32_t result_5;
  uint32_t result_6;
  uint32_t result_7;
  uint32_t result;
  uint32_t result_1;
  uint32_t timeout;
  
  if ((RCC_OscInitStruct->OscillatorType & 1) != 0) {
    if (((_DAT_40023808 & 0xc) == 4) ||
       (((_DAT_40023808 & 0xc) == 8 && ((_DAT_40023804 & 0x400000) == 0x400000)))) {
      if (((_DAT_40023800 & 0x20000) != 0) && (RCC_OscInitStruct->HSEState != 1)) {
        return HAL_ERROR;
      }
    }
    else {
      _DAT_40023800 = (uint3)_DAT_40023800;
      uVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 0x20000) != 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 5000 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
      _DAT_40023800 = CONCAT12((char)RCC_OscInitStruct->HSEState,_DAT_40023800);
      if (RCC_OscInitStruct->HSEState == 1) {
        uVar1 = HAL_GetTick();
        while ((_DAT_40023800 & 0x20000) == 0) {
          uVar2 = HAL_GetTick();
          if (uVar1 + 5000 <= uVar2) {
            return HAL_TIMEOUT;
          }
        }
      }
      else {
        uVar1 = HAL_GetTick();
        while ((_DAT_40023800 & 0x20000) != 0) {
          uVar2 = HAL_GetTick();
          if (uVar1 + 5000 <= uVar2) {
            return HAL_TIMEOUT;
          }
        }
      }
    }
  }
  if ((RCC_OscInitStruct->OscillatorType & 2) != 0) {
    if (((_DAT_40023808 & 0xc) == 0) ||
       (((_DAT_40023808 & 0xc) == 8 && ((_DAT_40023804 & 0x400000) == 0)))) {
      if (((_DAT_40023800 & 2) != 0) && (RCC_OscInitStruct->HSIState != 1)) {
        return HAL_ERROR;
      }
    }
    else if (RCC_OscInitStruct->HSIState == 0) {
      _DAT_42470000 = 0;
      uVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 100 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      _DAT_42470000 = 1;
      uVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 100 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
      _DAT_40023800 = RCC_OscInitStruct->HSICalibrationValue << 3 | _DAT_40023800 & 0xffffff07;
    }
  }
  if ((RCC_OscInitStruct->OscillatorType & 8) != 0) {
    if (RCC_OscInitStruct->LSIState == 0) {
      _DAT_42470e80 = 0;
      uVar1 = HAL_GetTick();
      while ((_DAT_40023874 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 100 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      _DAT_42470e80 = 1;
      uVar1 = HAL_GetTick();
      while ((_DAT_40023874 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 100 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
  }
  if ((RCC_OscInitStruct->OscillatorType & 4) != 0) {
    _DAT_40023840 = _DAT_40023840 | 0x10000000;
    _DAT_40007000 = _DAT_40007000 | 0x100;
    uVar1 = HAL_GetTick();
    while ((_DAT_40007000 & 0x100) == 0) {
      uVar2 = HAL_GetTick();
      if (uVar1 + 100 <= uVar2) {
        return HAL_TIMEOUT;
      }
    }
    _DAT_40023870 = _DAT_40023870 & 0xffffff00;
    uVar1 = HAL_GetTick();
    while ((_DAT_40023870 & 2) != 0) {
      uVar2 = HAL_GetTick();
      if (uVar1 + 5000 <= uVar2) {
        return HAL_TIMEOUT;
      }
    }
    _DAT_40023870 = CONCAT31(DAT_40023870_1,(char)RCC_OscInitStruct->LSEState);
    if (RCC_OscInitStruct->LSEState == 1) {
      uVar1 = HAL_GetTick();
      while ((_DAT_40023870 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 5000 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      uVar1 = HAL_GetTick();
      while ((_DAT_40023870 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 5000 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
  }
  if ((RCC_OscInitStruct->PLL).PLLState != 0) {
    if ((_DAT_40023808 & 0xc) == 8) {
      return HAL_ERROR;
    }
    if ((RCC_OscInitStruct->PLL).PLLState == 2) {
      _DAT_42470060 = 0;
      uVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 0x2000000) != 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 100 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
      _DAT_40023804 =
           (RCC_OscInitStruct->PLL).PLLQ << 0x18 |
           (RCC_OscInitStruct->PLL).PLLM | (RCC_OscInitStruct->PLL).PLLN << 6 |
           (((RCC_OscInitStruct->PLL).PLLP >> 1) - 1) * 0x10000 | (RCC_OscInitStruct->PLL).PLLSource
           | 0x20000000;
      _DAT_42470060 = 1;
      uVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 0x2000000) == 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 100 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      _DAT_42470060 = 0;
      uVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 0x2000000) != 0) {
        uVar2 = HAL_GetTick();
        if (uVar1 + 100 <= uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
  }
  return HAL_OK;
}


////>>0x0800618c>>HAL_RCC_ClockConfig>>////



HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct,uint32_t FLatency)

{
  uint32_t uVar1;
  uint uVar2;
  uint32_t FLatency_local;
  RCC_ClkInitTypeDef *RCC_ClkInitStruct_local;
  uint32_t timeout;
  
  if ((_DAT_40023c00 & 0xf) < FLatency) {
    _DAT_40023c00 = CONCAT31(DAT_40023c00_1,(char)FLatency);
    if (FLatency != (FLatency & 0xf)) {
      return HAL_ERROR;
    }
    if ((RCC_ClkInitStruct->ClockType & 1) != 0) {
      if (RCC_ClkInitStruct->SYSCLKSource == 1) {
        if ((_DAT_40023800 & 0x20000) == 0) {
          return HAL_ERROR;
        }
      }
      else if ((RCC_ClkInitStruct->SYSCLKSource != 2) && ((_DAT_40023800 & 2) == 0)) {
        return HAL_ERROR;
      }
      _DAT_40023808 = RCC_ClkInitStruct->SYSCLKSource | _DAT_40023808 & 0xfffffffc;
      uVar1 = HAL_GetTick();
      uVar2 = uVar1 + 5000;
      if (RCC_ClkInitStruct->SYSCLKSource == 1) {
        while ((_DAT_40023808 & 0xc) != 4) {
          uVar1 = HAL_GetTick();
          if (uVar2 <= uVar1) {
            return HAL_TIMEOUT;
          }
        }
      }
      else if (RCC_ClkInitStruct->SYSCLKSource == 2) {
        while ((_DAT_40023808 & 0xc) != 8) {
          uVar1 = HAL_GetTick();
          if (uVar2 <= uVar1) {
            return HAL_TIMEOUT;
          }
        }
      }
      else {
        while ((_DAT_40023808 & 0xc) != 0) {
          uVar1 = HAL_GetTick();
          if (uVar2 <= uVar1) {
            return HAL_TIMEOUT;
          }
        }
      }
    }
  }
  else {
    if ((RCC_ClkInitStruct->ClockType & 1) != 0) {
      if (RCC_ClkInitStruct->SYSCLKSource == 1) {
        if ((_DAT_40023800 & 0x20000) == 0) {
          return HAL_ERROR;
        }
      }
      else if (RCC_ClkInitStruct->SYSCLKSource == 2) {
        if ((_DAT_40023800 & 0x2000000) == 0) {
          return HAL_ERROR;
        }
      }
      else if ((_DAT_40023800 & 2) == 0) {
        return HAL_ERROR;
      }
      _DAT_40023808 = RCC_ClkInitStruct->SYSCLKSource | _DAT_40023808 & 0xfffffffc;
      uVar1 = HAL_GetTick();
      uVar2 = uVar1 + 5000;
      if (RCC_ClkInitStruct->SYSCLKSource == 1) {
        while ((_DAT_40023808 & 0xc) != 4) {
          uVar1 = HAL_GetTick();
          if (uVar2 <= uVar1) {
            return HAL_TIMEOUT;
          }
        }
      }
      else if (RCC_ClkInitStruct->SYSCLKSource == 2) {
        while ((_DAT_40023808 & 0xc) != 8) {
          uVar1 = HAL_GetTick();
          if (uVar2 <= uVar1) {
            return HAL_TIMEOUT;
          }
        }
      }
      else {
        while ((_DAT_40023808 & 0xc) != 0) {
          uVar1 = HAL_GetTick();
          if (uVar2 <= uVar1) {
            return HAL_TIMEOUT;
          }
        }
      }
    }
    _DAT_40023c00 = CONCAT31(DAT_40023c00_1,(char)FLatency);
    if (FLatency != (FLatency & 0xf)) {
      return HAL_ERROR;
    }
  }
  if ((RCC_ClkInitStruct->ClockType & 2) != 0) {
    _DAT_40023808 = RCC_ClkInitStruct->AHBCLKDivider | _DAT_40023808 & 0xffffff0f;
  }
  if ((RCC_ClkInitStruct->ClockType & 4) != 0) {
    _DAT_40023808 = RCC_ClkInitStruct->APB1CLKDivider | _DAT_40023808 & 0xffffe3ff;
  }
  if ((RCC_ClkInitStruct->ClockType & 8) != 0) {
    _DAT_40023808 = RCC_ClkInitStruct->APB2CLKDivider << 3 | _DAT_40023808 & 0xffff1fff;
  }
  uVar1 = HAL_RCC_GetHCLKFreq();
  SysTick_Config(uVar1 / 1000);
  return HAL_OK;
}


////>>0x0800640c>>HAL_RCC_MCOConfig>>////



void HAL_RCC_MCOConfig(uint32_t RCC_MCOx,uint32_t RCC_MCOSource,uint32_t RCC_MCODiv)

{
  uint32_t RCC_MCODiv_local;
  uint32_t RCC_MCOSource_local;
  uint32_t RCC_MCOx_local;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  if (RCC_MCOx == 0) {
    _DAT_40023830 = _DAT_40023830 | 1;
    GPIO_InitStruct.Pin = 0x100;
    GPIO_InitStruct.Mode = 2;
    GPIO_InitStruct.Speed = 3;
    GPIO_InitStruct.Pull = 0;
    GPIO_InitStruct.Alternate = 0;
    HAL_GPIO_Init((GPIO_TypeDef *)0x40020000,&GPIO_InitStruct);
    _DAT_40023808 = RCC_MCODiv | RCC_MCOSource | _DAT_40023808 & 0xf89fffff;
  }
  else {
    _DAT_40023830 = _DAT_40023830 | 4;
    GPIO_InitStruct.Pin = 0x200;
    GPIO_InitStruct.Mode = 2;
    GPIO_InitStruct.Speed = 3;
    GPIO_InitStruct.Pull = 0;
    GPIO_InitStruct.Alternate = 0;
    HAL_GPIO_Init((GPIO_TypeDef *)0x40020800,&GPIO_InitStruct);
    _DAT_40023808 = RCC_MCOSource | RCC_MCODiv << 3 | _DAT_40023808 & 0x7ffffff;
  }
  return;
}


////>>0x080064bc>>HAL_RCC_EnableCSS>>////


/* WARNING: Unknown calling convention */

void HAL_RCC_EnableCSS(void)

{
  _DAT_4247004c = 1;
  return;
}


////>>0x080064d4>>HAL_RCC_DisableCSS>>////


/* WARNING: Unknown calling convention */

void HAL_RCC_DisableCSS(void)

{
  _DAT_4247004c = 0;
  return;
}


////>>0x080064ec>>HAL_RCC_GetSysClockFreq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetSysClockFreq(void)

{
  uint uVar1;
  uint32_t result_6;
  uint32_t result_7;
  uint32_t result_4;
  uint32_t result_5;
  uint32_t result_2;
  uint32_t result_3;
  uint32_t result;
  uint32_t result_1;
  uint32_t pllp;
  uint32_t pllm;
  uint32_t sysclockfreq;
  uint32_t pllvco;
  
  uVar1 = _DAT_40023808 & 0xc;
  if (uVar1 == 8) {
    if ((_DAT_40023804 & 0x400000) == 0) {
      pllvco = ((_DAT_40023804 & 0x7fc0) >> 6) * (16000000 / (_DAT_40023804 & 0x3f));
    }
    else {
      pllvco = ((_DAT_40023804 & 0x7fc0) >> 6) * (8000000 / (_DAT_40023804 & 0x3f));
    }
    return pllvco / ((((_DAT_40023804 & 0x30000) >> 0x10) + 1) * 2);
  }
  if (uVar1 < 9) {
    if (uVar1 == 0) {
      return 16000000;
    }
    if (uVar1 == 4) {
      return 8000000;
    }
  }
  return 16000000;
}


////>>0x08006628>>HAL_RCC_GetHCLKFreq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetHCLKFreq(void)

{
  uint32_t uVar1;
  uint32_t result;
  uint32_t result_1;
  
  uVar1 = HAL_RCC_GetSysClockFreq();
  SystemCoreClock = uVar1 >> ""[(_DAT_40023808 & 0xf0) >> 4];
  return uVar1 >> ""[(_DAT_40023808 & 0xf0) >> 4];
}


////>>0x08006680>>HAL_RCC_GetPCLK1Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK1Freq(void)

{
  uint32_t uVar1;
  uint32_t result;
  uint32_t result_1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[(_DAT_40023808 & 0x1c00) >> 10];
}


////>>0x080066cc>>HAL_RCC_GetPCLK2Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK2Freq(void)

{
  uint32_t uVar1;
  uint32_t result;
  uint32_t result_1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[(_DAT_40023808 & 0xe000) >> 0xd];
}


////>>0x08006718>>HAL_RCC_GetOscConfig>>////



void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct)

{
  RCC_OscInitTypeDef *RCC_OscInitStruct_local;
  uint32_t result_2;
  uint32_t result_3;
  uint32_t result_4;
  uint32_t result_5;
  uint32_t result_6;
  uint32_t result_7;
  uint32_t result;
  uint32_t result_1;
  
  RCC_OscInitStruct->OscillatorType = 0xf;
  if ((_DAT_40023800 & 0x40000) == 0x40000) {
    RCC_OscInitStruct->HSEState = 5;
  }
  else if ((_DAT_40023800 & 0x10000) == 0x10000) {
    RCC_OscInitStruct->HSEState = 1;
  }
  else {
    RCC_OscInitStruct->HSEState = 0;
  }
  if ((_DAT_40023800 & 1) == 1) {
    RCC_OscInitStruct->HSIState = 1;
  }
  else {
    RCC_OscInitStruct->HSIState = 0;
  }
  RCC_OscInitStruct->HSICalibrationValue = (_DAT_40023800 & 0xf8) >> 3;
  if ((_DAT_40023870 & 4) == 4) {
    RCC_OscInitStruct->LSEState = 5;
  }
  else if ((_DAT_40023870 & 1) == 1) {
    RCC_OscInitStruct->LSEState = 1;
  }
  else {
    RCC_OscInitStruct->LSEState = 0;
  }
  if ((_DAT_40023874 & 1) == 1) {
    RCC_OscInitStruct->LSIState = 1;
  }
  else {
    RCC_OscInitStruct->LSIState = 0;
  }
  if ((_DAT_40023800 & 0x1000000) == 0x1000000) {
    (RCC_OscInitStruct->PLL).PLLState = 2;
  }
  else {
    (RCC_OscInitStruct->PLL).PLLState = 1;
  }
  (RCC_OscInitStruct->PLL).PLLSource = _DAT_40023804 & 0x400000;
  (RCC_OscInitStruct->PLL).PLLM = _DAT_40023804 & 0x3f;
  (RCC_OscInitStruct->PLL).PLLN = (_DAT_40023804 & 0x7fc0) >> 6;
  (RCC_OscInitStruct->PLL).PLLP = ((_DAT_40023804 & 0x30000) + 0x10000) * 2 >> 0x10;
  (RCC_OscInitStruct->PLL).PLLQ = (_DAT_40023804 & 0xf000000) >> 0x18;
  return;
}


////>>0x080068bc>>HAL_RCC_GetClockConfig>>////



void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct,uint32_t *pFLatency)

{
  uint32_t *pFLatency_local;
  RCC_ClkInitTypeDef *RCC_ClkInitStruct_local;
  
  RCC_ClkInitStruct->ClockType = 0xf;
  RCC_ClkInitStruct->SYSCLKSource = _DAT_40023808 & 3;
  RCC_ClkInitStruct->AHBCLKDivider = _DAT_40023808 & 0xf0;
  RCC_ClkInitStruct->APB1CLKDivider = _DAT_40023808 & 0x1c00;
  RCC_ClkInitStruct->APB2CLKDivider = _DAT_40023808 >> 3 & 0x1c00;
  *pFLatency = _DAT_40023c00 & 0xf;
  return;
}


////>>0x0800691c>>HAL_RCC_NMI_IRQHandler>>////


/* WARNING: Unknown calling convention */

void HAL_RCC_NMI_IRQHandler(void)

{
  if ((_DAT_4002380c & 0x80) == 0x80) {
    HAL_RCC_CCSCallback();
  }
  return;
}


////>>0x08006944>>HAL_RCC_CCSCallback>>////

/* WARNING: Unknown calling convention */

void HAL_RCC_CCSCallback(void)

{
  return;
}


////>>0x08006950>>NVIC_SetPriorityGrouping>>////



void NVIC_SetPriorityGrouping(uint32_t PriorityGroup)

{
  uint32_t PriorityGroup_local;
  uint32_t reg_value;
  uint32_t PriorityGroupTmp;
  
  _DAT_e000ed0c = _DAT_e000ed0c & 0xf8ff | (PriorityGroup & 7) << 8 | 0x5fa0000;
  return;
}


////>>0x08006998>>NVIC_GetPriorityGrouping>>////


/* WARNING: Unknown calling convention */

uint32_t NVIC_GetPriorityGrouping(void)

{
  return _DAT_e000ed0c >> 8 & 7;
}


////>>0x080069b4>>NVIC_EnableIRQ>>////

void NVIC_EnableIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  *(int *)(((uint)(int)IRQn >> 5) * 4 + -0x1fff1f00) = 1 << (IRQn & 0x1fU);
  return;
}


////>>0x080069e4>>NVIC_DisableIRQ>>////

void NVIC_DisableIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  *(int *)((((uint)(int)IRQn >> 5) + 0x20) * 4 + -0x1fff1f00) = 1 << (IRQn & 0x1fU);
  return;
}


////>>0x08006a18>>NVIC_GetPendingIRQ>>////

uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  return (uint)((*(uint *)((((uint)(int)IRQn >> 5) + 0x40) * 4 + -0x1fff1f00) & 1 << (IRQn & 0x1fU))
               != 0);
}


////>>0x08006a58>>NVIC_SetPendingIRQ>>////

void NVIC_SetPendingIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  *(int *)((((uint)(int)IRQn >> 5) + 0x40) * 4 + -0x1fff1f00) = 1 << (IRQn & 0x1fU);
  return;
}


////>>0x08006a8c>>NVIC_ClearPendingIRQ>>////

void NVIC_ClearPendingIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  *(int *)((((uint)(int)IRQn >> 5) + 0x60) * 4 + -0x1fff1f00) = 1 << (IRQn & 0x1fU);
  return;
}


////>>0x08006ac0>>NVIC_GetActive>>////

uint32_t NVIC_GetActive(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  return (uint)((*(uint *)((((uint)(int)IRQn >> 5) + 0x80) * 4 + -0x1fff1f00) & 1 << (IRQn & 0x1fU))
               != 0);
}


////>>0x08006b00>>NVIC_SetPriority>>////

void NVIC_SetPriority(IRQn_Type IRQn,uint32_t priority)

{
  uint32_t priority_local;
  IRQn_Type IRQn_local;
  
  if (IRQn < WWDG_IRQn) {
    *(char *)(((byte)IRQn & 0xf) + 0xe000ed14) = (char)((priority & 0xff) << 4);
  }
  else {
    *(char *)(IRQn + -0x1fff1c00) = (char)((priority & 0xff) << 4);
  }
  return;
}


////>>0x08006b54>>NVIC_GetPriority>>////

uint32_t NVIC_GetPriority(IRQn_Type IRQn)

{
  byte bVar1;
  IRQn_Type IRQn_local;
  
  if (IRQn < WWDG_IRQn) {
    bVar1 = *(byte *)(((byte)IRQn & 0xf) + 0xe000ed14);
  }
  else {
    bVar1 = *(byte *)(IRQn + -0x1fff1c00);
  }
  return (uint)(bVar1 >> 4);
}


////>>0x08006ba0>>NVIC_EncodePriority>>////

uint32_t NVIC_EncodePriority(uint32_t PriorityGroup,uint32_t PreemptPriority,uint32_t SubPriority)

{
  uint uVar1;
  uint uVar2;
  uint32_t SubPriority_local;
  uint32_t PreemptPriority_local;
  uint32_t PriorityGroup_local;
  uint32_t SubPriorityBits;
  uint32_t PreemptPriorityBits;
  uint32_t PriorityGroupTmp;
  
  uVar1 = PriorityGroup & 7;
  uVar2 = 7 - uVar1;
  if (3 < uVar2) {
    uVar2 = 4;
  }
  if (uVar1 + 4 < 7) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 - 3;
  }
  return SubPriority & (1 << (uVar1 & 0xff)) - 1U |
         ((1 << (uVar2 & 0xff)) - 1U & PreemptPriority) << (uVar1 & 0xff);
}


////>>0x08006c04>>NVIC_DecodePriority>>////

void NVIC_DecodePriority(uint32_t Priority,uint32_t PriorityGroup,uint32_t *pPreemptPriority,
                        uint32_t *pSubPriority)

{
  uint uVar1;
  uint uVar2;
  uint32_t *pSubPriority_local;
  uint32_t *pPreemptPriority_local;
  uint32_t PriorityGroup_local;
  uint32_t Priority_local;
  uint32_t SubPriorityBits;
  uint32_t PreemptPriorityBits;
  uint32_t PriorityGroupTmp;
  
  uVar1 = PriorityGroup & 7;
  uVar2 = 7 - uVar1;
  if (3 < uVar2) {
    uVar2 = 4;
  }
  if (uVar1 + 4 < 7) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 - 3;
  }
  *pPreemptPriority = (1 << (uVar2 & 0xff)) - 1U & Priority >> (uVar1 & 0xff);
  *pSubPriority = (1 << (uVar1 & 0xff)) - 1U & Priority;
  return;
}


////>>0x08006c70>>NVIC_SystemReset>>////

/* WARNING: Unknown calling convention */

void NVIC_SystemReset(void)

{
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08006c9c>>SysTick_Config>>////



uint32_t SysTick_Config(uint32_t ticks)

{
  bool bVar1;
  uint32_t ticks_local;
  
  bVar1 = ticks - 1 < 0x1000000;
  if (bVar1) {
    _DAT_e000e014 = ticks - 1;
    NVIC_SetPriority(SysTick_IRQn,0xf);
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
  }
  return (uint)!bVar1;
}


////>>0x08006ce0>>HAL_NVIC_SetPriorityGrouping>>////

void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup)

{
  uint32_t PriorityGroup_local;
  
  NVIC_SetPriorityGrouping(PriorityGroup);
  return;
}


////>>0x08006cf6>>HAL_NVIC_SetPriority>>////

void HAL_NVIC_SetPriority(IRQn_Type IRQn,uint32_t PreemptPriority,uint32_t SubPriority)

{
  uint32_t uVar1;
  uint32_t SubPriority_local;
  uint32_t PreemptPriority_local;
  IRQn_Type IRQn_local;
  uint32_t prioritygroup;
  
  uVar1 = NVIC_GetPriorityGrouping();
  uVar1 = NVIC_EncodePriority(uVar1,PreemptPriority,SubPriority);
  NVIC_SetPriority(IRQn,uVar1);
  return;
}


////>>0x08006d2e>>HAL_NVIC_EnableIRQ>>////

void HAL_NVIC_EnableIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  NVIC_EnableIRQ(IRQn);
  return;
}


////>>0x08006d4a>>HAL_NVIC_DisableIRQ>>////

void HAL_NVIC_DisableIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  NVIC_DisableIRQ(IRQn);
  return;
}


////>>0x08006d66>>HAL_NVIC_SystemReset>>////

/* WARNING: Unknown calling convention */

void HAL_NVIC_SystemReset(void)

{
  NVIC_SystemReset();
  return;
}


////>>0x08006d72>>HAL_SYSTICK_Config>>////

uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb)

{
  uint32_t uVar1;
  uint32_t TicksNumb_local;
  
  uVar1 = SysTick_Config(TicksNumb);
  return uVar1;
}


////>>0x08006d8a>>HAL_NVIC_GetPriorityGrouping>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_NVIC_GetPriorityGrouping(void)

{
  uint32_t uVar1;
  
  uVar1 = NVIC_GetPriorityGrouping();
  return uVar1;
}


////>>0x08006d98>>HAL_NVIC_GetPriority>>////

void HAL_NVIC_GetPriority
               (IRQn_Type IRQn,uint32_t PriorityGroup,uint32_t *pPreemptPriority,
               uint32_t *pSubPriority)

{
  uint32_t Priority;
  uint32_t *pSubPriority_local;
  uint32_t *pPreemptPriority_local;
  uint32_t PriorityGroup_local;
  IRQn_Type IRQn_local;
  
  Priority = NVIC_GetPriority(IRQn);
  NVIC_DecodePriority(Priority,PriorityGroup,pPreemptPriority,pSubPriority);
  return;
}


////>>0x08006dc4>>HAL_NVIC_SetPendingIRQ>>////

void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  NVIC_SetPendingIRQ(IRQn);
  return;
}


////>>0x08006de0>>HAL_NVIC_GetPendingIRQ>>////

uint32_t HAL_NVIC_GetPendingIRQ(IRQn_Type IRQn)

{
  uint32_t uVar1;
  IRQn_Type IRQn_local;
  
  uVar1 = NVIC_GetPendingIRQ(IRQn);
  return uVar1;
}


////>>0x08006dfe>>HAL_NVIC_ClearPendingIRQ>>////

void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  NVIC_ClearPendingIRQ(IRQn);
  return;
}


////>>0x08006e1a>>HAL_NVIC_GetActive>>////

uint32_t HAL_NVIC_GetActive(IRQn_Type IRQn)

{
  uint32_t uVar1;
  IRQn_Type IRQn_local;
  
  uVar1 = NVIC_GetActive(IRQn);
  return uVar1;
}


////>>0x08006e38>>HAL_SYSTICK_CLKSourceConfig>>////



void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource)

{
  uint32_t CLKSource_local;
  
  if (CLKSource == 4) {
    _DAT_e000e010 = _DAT_e000e010 | 4;
  }
  else {
    _DAT_e000e010 = _DAT_e000e010 & 0xfffffffb;
  }
  return;
}


////>>0x08006e70>>HAL_SYSTICK_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_IRQHandler(void)

{
  HAL_SYSTICK_Callback();
  return;
}


////>>0x08006e7c>>HAL_SYSTICK_Callback>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_Callback(void)

{
  return;
}


////>>0x08006e88>>HAL_GPIO_Init>>////



void HAL_GPIO_Init(GPIO_TypeDef *GPIOx,GPIO_InitTypeDef *GPIO_Init)

{
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  GPIO_InitTypeDef *GPIO_Init_local;
  GPIO_TypeDef *GPIOx_local;
  uint32_t temp;
  uint32_t iocurrent;
  uint32_t ioposition;
  uint32_t position;
  
  for (position = 0; position < 0x10; position = position + 1) {
    uVar2 = 1 << (position & 0xff);
    uVar3 = GPIO_Init->Pin & uVar2;
    if (uVar3 == uVar2) {
      if ((GPIO_Init->Mode == 2) || (GPIO_Init->Mode == 0x12)) {
        uVar1 = GPIO_Init->Alternate;
        GPIOx->AFR[position >> 3] = GPIOx->AFR[position >> 3] & ~(0xf << ((position & 7) << 2));
        GPIOx->AFR[position >> 3] = GPIOx->AFR[position >> 3] | uVar1 << ((position & 7) << 2);
      }
      GPIOx->MODER = GPIOx->MODER & ~(3 << ((position & 0x7f) << 1));
      GPIOx->MODER = GPIOx->MODER | (GPIO_Init->Mode & 3) << ((position & 0x7f) << 1);
      if ((((GPIO_Init->Mode == 1) || (GPIO_Init->Mode == 2)) || (GPIO_Init->Mode == 0x11)) ||
         (GPIO_Init->Mode == 0x12)) {
        GPIOx->OSPEEDR = GPIOx->OSPEEDR & ~(3 << ((position & 0x7f) << 1));
        GPIOx->OSPEEDR = GPIOx->OSPEEDR | GPIO_Init->Speed << ((position & 0x7f) << 1);
        GPIOx->OTYPER = GPIOx->OTYPER & ~(1 << (position & 0xff));
        GPIOx->OTYPER = GPIOx->OTYPER | (GPIO_Init->Mode >> 4 & 1) << (position & 0xff);
      }
      GPIOx->PUPDR = GPIOx->PUPDR & ~(3 << ((position & 0x7f) << 1));
      GPIOx->PUPDR = GPIOx->PUPDR | GPIO_Init->Pull << ((position & 0x7f) << 1);
      if ((GPIO_Init->Mode & 0x10000000) != 0) {
        _DAT_40023844 = _DAT_40023844 | 0x4000;
        *(uint *)(((position >> 2) + 2) * 4 + 0x40013800) =
             ~(0xf << ((position & 3) << 2)) & *(uint *)(((position >> 2) + 2) * 4 + 0x40013800);
        if (GPIOx == (GPIO_TypeDef *)0x40020000) {
          iVar4 = 0;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40020400) {
          iVar4 = 1;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40020800) {
          iVar4 = 2;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40020c00) {
          iVar4 = 3;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40021000) {
          iVar4 = 4;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40021400) {
          iVar4 = 5;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40021800) {
          iVar4 = 6;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40021c00) {
          iVar4 = 7;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40022000) {
          iVar4 = 8;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40022400) {
          iVar4 = 9;
        }
        else {
          iVar4 = 10;
        }
        *(uint *)(((position >> 2) + 2) * 4 + 0x40013800) =
             iVar4 << ((position & 3) << 2) | *(uint *)(((position >> 2) + 2) * 4 + 0x40013800);
        _DAT_40013c00 = ~uVar3 & _DAT_40013c00;
        _DAT_40013c04 = ~uVar3 & _DAT_40013c04;
        if ((GPIO_Init->Mode & 0x10000) != 0) {
          _DAT_40013c00 = uVar3 | _DAT_40013c00;
        }
        if ((GPIO_Init->Mode & 0x20000) != 0) {
          _DAT_40013c04 = uVar3 | _DAT_40013c04;
        }
        _DAT_40013c08 = ~uVar3 & _DAT_40013c08;
        _DAT_40013c0c = ~uVar3 & _DAT_40013c0c;
        if ((GPIO_Init->Mode & 0x100000) != 0) {
          _DAT_40013c08 = uVar3 | _DAT_40013c08;
        }
        if ((GPIO_Init->Mode & 0x200000) != 0) {
          _DAT_40013c0c = uVar3 | _DAT_40013c0c;
        }
      }
    }
  }
  return;
}


////>>0x080071d0>>HAL_GPIO_DeInit>>////



void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx,uint32_t GPIO_Pin)

{
  uint uVar1;
  uint uVar2;
  uint32_t GPIO_Pin_local;
  GPIO_TypeDef *GPIOx_local;
  uint32_t tmp;
  uint32_t iocurrent;
  uint32_t ioposition;
  uint32_t position;
  
  for (position = 0; position < 0x10; position = position + 1) {
    uVar1 = 1 << (position & 0xff);
    uVar2 = uVar1 & GPIO_Pin;
    if (uVar2 == uVar1) {
      GPIOx->MODER = GPIOx->MODER & ~(3 << ((position & 0x7f) << 1));
      GPIOx->AFR[position >> 3] = GPIOx->AFR[position >> 3] & ~(0xf << ((position & 7) << 2));
      GPIOx->OSPEEDR = GPIOx->OSPEEDR & ~(3 << ((position & 0x7f) << 1));
      GPIOx->OTYPER = GPIOx->OTYPER & ~(1 << (position & 0xff));
      GPIOx->PUPDR = GPIOx->PUPDR & ~(3 << ((position & 0x7f) << 1));
      *(uint *)(((position >> 2) + 2) * 4 + 0x40013800) =
           ~(0xf << ((position & 3) << 2)) & *(uint *)(((position >> 2) + 2) * 4 + 0x40013800);
      _DAT_40013c00 = ~uVar2 & _DAT_40013c00;
      _DAT_40013c04 = ~uVar2 & _DAT_40013c04;
      _DAT_40013c08 = ~uVar2 & _DAT_40013c08;
      _DAT_40013c0c = ~uVar2 & _DAT_40013c0c;
    }
  }
  return;
}


////>>0x08007310>>HAL_GPIO_ReadPin>>////

GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)

{
  uint16_t GPIO_Pin_local;
  GPIO_TypeDef *GPIOx_local;
  GPIO_PinState bitstatus;
  
  return ((uint)GPIO_Pin & GPIOx->IDR) != 0;
}


////>>0x0800733e>>HAL_GPIO_WritePin>>////

void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin,GPIO_PinState PinState)

{
  GPIO_PinState PinState_local;
  uint16_t GPIO_Pin_local;
  GPIO_TypeDef *GPIOx_local;
  
  if (PinState == GPIO_PIN_RESET) {
    GPIOx->BSRRH = GPIO_Pin;
  }
  else {
    GPIOx->BSRRL = GPIO_Pin;
  }
  return;
}


////>>0x0800736c>>HAL_GPIO_TogglePin>>////

void HAL_GPIO_TogglePin(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)

{
  uint16_t GPIO_Pin_local;
  GPIO_TypeDef *GPIOx_local;
  
  GPIOx->ODR = GPIOx->ODR ^ (uint)GPIO_Pin;
  return;
}


////>>0x0800738e>>HAL_GPIO_EXTI_IRQHandler>>////



void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin)

{
  uint16_t GPIO_Pin_local;
  
  if ((GPIO_Pin & _DAT_40013c14) != 0) {
    _DAT_40013c14 = (uint)GPIO_Pin;
    HAL_GPIO_EXTI_Callback(GPIO_Pin);
  }
  return;
}


////>>0x080073c0>>HAL_GPIO_EXTI_Callback>>////

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)

{
  uint16_t GPIO_Pin_local;
  
  return;
}


////>>0x080073d4>>gpio_clr>>////

void gpio_clr(int n)

{
  int n_local;
  
  *(short *)((n >> 4) * 0x400 + 0x4002001a) = (short)(1 << (n & 0xfU));
  return;
}


////>>0x08007402>>gpio_set>>////

void gpio_set(int n)

{
  int n_local;
  
  *(short *)((n >> 4) * 0x400 + 0x40020018) = (short)(1 << (n & 0xfU));
  return;
}


////>>0x08007430>>Error_Handler>>////

/* WARNING: Unknown calling convention */

void Error_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08007436>>SystemClock_Config>>////


/* WARNING: Unknown calling convention */

void SystemClock_Config(void)

{
  HAL_StatusTypeDef HVar1;
  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  
  _DAT_40023840 = _DAT_40023840 | 0x10000000;
  _DAT_40007000 = _DAT_40007000 | 0xc000;
  RCC_OscInitStruct.OscillatorType = 1;
  RCC_OscInitStruct.HSEState = 1;
  RCC_OscInitStruct.PLL.PLLState = 2;
  RCC_OscInitStruct.PLL.PLLSource = 0x400000;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 0x150;
  RCC_OscInitStruct.PLL.PLLP = 2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  HVar1 = HAL_RCC_OscConfig(&RCC_OscInitStruct);
  if (HVar1 != HAL_OK) {
    Error_Handler();
  }
  RCC_ClkInitStruct.ClockType = 0xf;
  RCC_ClkInitStruct.SYSCLKSource = 2;
  RCC_ClkInitStruct.AHBCLKDivider = 0;
  RCC_ClkInitStruct.APB1CLKDivider = 0x1400;
  RCC_ClkInitStruct.APB2CLKDivider = 0x1000;
  HVar1 = HAL_RCC_ClockConfig(&RCC_ClkInitStruct,5);
  if (HVar1 != HAL_OK) {
    Error_Handler();
  }
  return;
}


////>>0x080074c8>>debounce_on_handler>>////

void debounce_on_handler(uint32_t bits)

{
  uint32_t bits_local;
  
  if ((bits & 1) != 0) {
    gpio_set(0x3e);
  }
  if ((limits_enabled != 0) && ((bits & 0x1e) != 0)) {
    limits_isr();
  }
  if ((buttons_enabled != 0) && ((bits & 0x80) != 0)) {
    buttons_isr(bits);
  }
  return;
}


////>>0x08007520>>debounce_off_handler>>////

void debounce_off_handler(uint32_t bits)

{
  uint32_t bits_local;
  
  if ((bits & 1) != 0) {
    gpio_clr(0x3e);
  }
  return;
}


////>>0x08007540>>main>>////

/* WARNING: Unknown calling convention */

int main(void)

{
  HAL_Init();
  SystemClock_Config();
  gpio_init();
  timers_init();
  debounce_init();
  usart_init();
  startForkserver(0);
  grbl_main();
  return 0;
}


////>>0x0800756c>>SystemInit>>////


/* WARNING: Unknown calling convention */

void SystemInit(void)

{
  _DAT_40023808 = 0;
  _DAT_40023804 = 0x24003010;
  _DAT_40023800 = _DAT_40023800 & 0xfef2ffff | 1;
  _DAT_4002380c = 0;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x080075c8>>SystemCoreClockUpdate>>////


/* WARNING: Unknown calling convention */

void SystemCoreClockUpdate(void)

{
  uint uVar1;
  uint32_t pllm;
  uint32_t pllsource;
  uint32_t pllp;
  uint32_t tmp;
  uint32_t pllvco;
  
  uVar1 = _DAT_40023808 & 0xc;
  if (uVar1 == 8) {
    if ((_DAT_40023804 >> 0x16 & 1) == 0) {
      pllvco = (_DAT_40023804 >> 6 & 0x1ff) * (16000000 / (_DAT_40023804 & 0x3f));
    }
    else {
      pllvco = (_DAT_40023804 >> 6 & 0x1ff) * (8000000 / (_DAT_40023804 & 0x3f));
    }
    SystemCoreClock = pllvco / (((_DAT_40023804 >> 0x10 & 3) + 1) * 2);
    goto LAB_0800768a;
  }
  if (uVar1 < 9) {
    if (uVar1 == 0) {
      SystemCoreClock = 16000000;
      goto LAB_0800768a;
    }
    if (uVar1 == 4) {
      SystemCoreClock = 8000000;
      goto LAB_0800768a;
    }
  }
  SystemCoreClock = 16000000;
LAB_0800768a:
  SystemCoreClock = SystemCoreClock >> AHBPrescTable[_DAT_40023808 >> 4 & 0xf];
  return;
}


////>>0x080076c8>>gpio_toggle>>////

void gpio_toggle(int n)

{
  int n_local;
  
  *(uint *)((n >> 4) * 0x400 + 0x40020014) =
       *(uint *)((n >> 4) * 0x400 + 0x40020014) ^ 1 << (n & 0xfU);
  return;
}


////>>0x0800770e>>NMI_Handler>>////

/* WARNING: Unknown calling convention */

void NMI_Handler(void)

{
  return;
}


////>>0x0800771a>>HardFault_Handler>>////

/* WARNING: Unknown calling convention */

void HardFault_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08007720>>MemManage_Handler>>////

/* WARNING: Unknown calling convention */

void MemManage_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08007726>>BusFault_Handler>>////

/* WARNING: Unknown calling convention */

void BusFault_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x0800772c>>UsageFault_Handler>>////

/* WARNING: Unknown calling convention */

void UsageFault_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08007732>>SVC_Handler>>////

/* WARNING: Unknown calling convention */

void SVC_Handler(void)

{
  return;
}


////>>0x0800773e>>DebugMon_Handler>>////

/* WARNING: Unknown calling convention */

void DebugMon_Handler(void)

{
  return;
}


////>>0x0800774a>>PendSV_Handler>>////

/* WARNING: Unknown calling convention */

void PendSV_Handler(void)

{
  return;
}


////>>0x08007756>>SysTick_Handler>>////

/* WARNING: Unknown calling convention */

void SysTick_Handler(void)

{
  uint32_t uVar1;
  uint32_t ticks;
  
  uVar1 = HAL_GetTick();
  if ((uVar1 & 0x1ff) == 0) {
    gpio_toggle(0x3c);
  }
  if ((uVar1 & 0xf) == 0) {
    debounce_isr();
  }
  HAL_IncTick();
  return;
}


////>>0x0800778c>>gpio_init>>////


/* WARNING: Unknown calling convention */

void gpio_init(void)

{
  GPIO_INFO *pGVar1;
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_INFO *gpio;
  int i;
  
  for (i = 0; (uint)i < 0x11; i = i + 1) {
    pGVar1 = gpio_info + i;
    _DAT_40023830 = _DAT_40023830 | 1 << (pGVar1->num >> 4 & 0xff);
    GPIO_InitStruct.Pin = 1 << (pGVar1->num & 0xf);
    GPIO_InitStruct.Mode = gpio_info[i].mode;
    GPIO_InitStruct.Pull = gpio_info[i].pull;
    GPIO_InitStruct.Speed = gpio_info[i].speed;
    GPIO_InitStruct.Alternate = gpio_info[i].alt;
    HAL_GPIO_Init((GPIO_TypeDef *)(((pGVar1->num >> 4) + 0x100080) * 0x400),&GPIO_InitStruct);
    if (-1 < gpio_info[i].init) {
      HAL_GPIO_WritePin((GPIO_TypeDef *)(((pGVar1->num >> 4) + 0x100080) * 0x400),
                        (uint16_t)(1 << (pGVar1->num & 0xf)),(GPIO_PinState)gpio_info[i].init);
    }
  }
  return;
}


////>>0x08007854>>gpio_rd>>////

int gpio_rd(int n)

{
  int n_local;
  
  return *(uint *)((n >> 4) * 0x400 + 0x40020010) >> (n & 0xfU) & 1;
}


////>>0x08007884>>debounce_input>>////

/* WARNING: Unknown calling convention */

uint32_t debounce_input(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = gpio_rd(0x36);
  iVar2 = gpio_rd(0x37);
  iVar3 = gpio_rd(0x38);
  iVar4 = gpio_rd(0x39);
  iVar5 = gpio_rd(0xf);
  uVar6 = gpio_rd(0);
  return uVar6 | iVar1 << 4 | iVar2 << 3 | iVar3 << 2 | iVar4 << 1 | iVar5 << 7;
}


////>>0x080078d0>>debounce_on_handler>>////

void debounce_on_handler(uint32_t bits)

{
  uint uVar1;
  int in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  uint unaff_r8;
  int unaff_r11;
  int in_r12;
  char in_NG;
  undefined in_CY;
  char in_OV;
  undefined4 in_cr4;
  uint32_t bits_local;
  
  if (in_NG != in_OV) {
    unaff_r11 = in_r3 + bits * 0x200;
  }
  if ((bool)in_OV) {
    uVar1 = bits * 0x40000000;
    in_CY = unaff_r8 <= uVar1;
    in_OV = SBORROW4(uVar1,unaff_r8);
    in_NG = (int)(uVar1 - unaff_r8) < 0;
  }
  if (!(bool)in_CY) {
    *(int *)(in_r12 + bits * -0x40000000) = unaff_r11;
  }
  if (in_NG == in_OV) {
    software_interrupt(0xb083);
  }
  else {
    coprocessor_store(6,in_cr4,bits);
    *(undefined4 *)bits = unaff_r4;
    software_interrupt(0x6078);
  }
  if ((bool)in_NG) {
    register0x00000054 = (BADSPACEBASE *)(&stack0x00000000 + in_r12 * 0x4000);
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
  while (*(int *)((int)register0x00000054 + -0x10) < 4) {
    *(uint32_t *)((int)register0x00000054 + -0xc) =
         debounce.sample[*(int *)((int)register0x00000054 + -0x10)] |
         *(uint *)((int)register0x00000054 + -0xc);
    *(int *)((int)register0x00000054 + -0x10) = *(int *)((int)register0x00000054 + -0x10) + 1;
  }
  return;
}


////>>0x080078e2>>debounce_off_handler>>////

void debounce_off_handler(uint32_t bits)

{
  uint uVar1;
  int in_r3;
  undefined4 unaff_r4;
  uint unaff_r8;
  int unaff_r11;
  int in_r12;
  char in_NG;
  undefined in_CY;
  char in_OV;
  undefined4 in_cr4;
  uint32_t bits_local;
  
  if (in_NG != in_OV) {
    unaff_r11 = in_r3 + bits * 0x200;
  }
  if ((bool)in_OV) {
    uVar1 = bits * 0x40000000;
    in_CY = unaff_r8 <= uVar1;
    in_OV = SBORROW4(uVar1,unaff_r8);
    in_NG = (int)(uVar1 - unaff_r8) < 0;
  }
  if (!(bool)in_CY) {
    *(int *)(in_r12 + bits * -0x40000000) = unaff_r11;
  }
  if (in_NG != in_OV) {
    coprocessor_store(6,in_cr4,bits);
    *(undefined4 *)bits = unaff_r4;
  }
  for (bits_local = 0; (int)bits_local < 4; bits_local = bits_local + 1) {
  }
  return;
}


////>>0x080078f4>>debounce_rd>>////

/* WARNING: Unknown calling convention */

uint32_t debounce_rd(void)

{
  int i;
  uint32_t state;
  
  state = 0;
  for (i = 0; i < 4; i = i + 1) {
    state = debounce.sample[i] | state;
  }
  return state;
}


////>>0x08007930>>debounce_isr>>////

/* WARNING: Unknown calling convention */

void debounce_isr(void)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint bits;
  uint32_t off_bits;
  uint32_t on_bits;
  uint32_t state;
  DEBOUNCE_CTRL *db;
  
  iVar1 = debounce.idx;
  uVar2 = debounce.state;
  if (debounce_ready != 0) {
    uVar2 = debounce_input();
    debounce.sample[iVar1] = uVar2;
    if (debounce.idx == 3) {
      debounce.idx = 0;
    }
    else {
      debounce.idx = debounce.idx + 1;
    }
    uVar3 = debounce_rd();
    uVar2 = debounce.state;
    if (uVar3 != debounce.state) {
      bits = ~uVar3 & debounce.state;
      if ((~debounce.state & uVar3) != 0) {
        debounce_on_handler(~debounce.state & uVar3);
      }
      uVar2 = uVar3;
      if (bits != 0) {
        debounce_off_handler(bits);
      }
    }
  }
  debounce.state = uVar2;
  return;
}


////>>0x080079c0>>debounce_init>>////

/* WARNING: Unknown calling convention */

void debounce_init(void)

{
  memset(&debounce,0,0x18);
  debounce_ready = 1;
  return;
}


////>>0x080079e0>>NVIC_EnableIRQ>>////

void NVIC_EnableIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  *(int *)(((uint)(int)IRQn >> 5) * 4 + -0x1fff1f00) = 1 << (IRQn & 0x1fU);
  return;
}


////>>0x08007a10>>enable_tim_clock>>////



void enable_tim_clock(TIM_TypeDef *tim)

{
  TIM_TypeDef *tim_local;
  
  if (tim == (TIM_TypeDef *)&DAT_40000000) {
    _DAT_40023840 = _DAT_40023840 | 1;
  }
  else if (tim == (TIM_TypeDef *)0x40000400) {
    _DAT_40023840 = _DAT_40023840 | 2;
  }
  else if (tim == (TIM_TypeDef *)&DAT_40000800) {
    _DAT_40023840 = _DAT_40023840 | 4;
  }
  return;
}


////>>0x08007a70>>enable_tim_interrupt>>////

void enable_tim_interrupt(TIM_TypeDef *tim,uint32_t pre,uint32_t sub)

{
  uint32_t sub_local;
  uint32_t pre_local;
  TIM_TypeDef *tim_local;
  uint32_t irq;
  
  if (tim == (TIM_TypeDef *)&DAT_40000000) {
    irq._0_1_ = TIM2_IRQn;
  }
  else if (tim == (TIM_TypeDef *)0x40000400) {
    irq._0_1_ = TIM3_IRQn;
  }
  else {
    if (tim != (TIM_TypeDef *)&DAT_40000800) {
      return;
    }
    irq._0_1_ = TIM4_IRQn;
  }
  HAL_NVIC_SetPriority((IRQn_Type)irq,pre,sub);
  NVIC_EnableIRQ((IRQn_Type)irq);
  return;
}


////>>0x08007ad0>>step_timer_init>>////


/* WARNING: Unknown calling convention */

void step_timer_init(void)

{
  TIM_TypeDef *TIMx;
  
  enable_tim_clock((TIM_TypeDef *)&DAT_40000000);
  _DAT_40000000 = 0;
  _DAT_40000004 = 0;
  _DAT_40000008 = 0;
  _DAT_4000000c = 0;
  _DAT_40000010 = 0;
  _DAT_40000018 = 0;
  _DAT_4000001c = 0;
  _DAT_40000020 = 0;
  _DAT_40000024 = 0;
  _DAT_40000028 = SystemCoreClock / 42000000 - 1;
  _DAT_4000002c = 0;
  _DAT_40000034 = 0;
  _DAT_40000038 = 0;
  _DAT_4000003c = 0;
  _DAT_40000040 = 0;
  _DAT_40000048 = 0;
  _DAT_4000004c = 0;
  enable_tim_interrupt((TIM_TypeDef *)&DAT_40000000,0,0);
  return;
}


////>>0x08007b70>>step_isr_enable>>////


/* WARNING: Unknown calling convention */

void step_isr_enable(void)

{
  TIM_TypeDef *TIMx;
  uint32_t enable;
  
  enable = 1;
  if (_DAT_40000034 != 0) {
    enable = 3;
  }
  if (_DAT_40000038 != 0) {
    enable = enable | 4;
  }
  _DAT_4000000c = _DAT_4000000c | enable;
  _DAT_40000000 = _DAT_40000000 | 1;
  return;
}


////>>0x08007bc2>>step_isr_disable>>////


/* WARNING: Unknown calling convention */

void step_isr_disable(void)

{
  TIM_TypeDef *TIMx;
  
  _DAT_40000000 = _DAT_40000000 & 0xfffffffe;
  _DAT_4000000c = _DAT_4000000c & 0xfffffff8;
  return;
}


////>>0x08007bf0>>set_step_period>>////



void set_step_period(uint32_t ticks)

{
  uint32_t ticks_local;
  uint32_t saved;
  TIM_TypeDef *TIMx;
  
  _DAT_4000002c = ticks;
  if (ticks <= _DAT_40000024) {
    _DAT_40000024 = ticks;
  }
  return;
}


////>>0x08007c40>>set_step_pulse_delay>>////



void set_step_pulse_delay(uint32_t ticks)

{
  uint32_t ticks_local;
  TIM_TypeDef *TIMx;
  
  _DAT_40000034 = ticks;
  return;
}


////>>0x08007c5e>>set_step_pulse_time>>////



void set_step_pulse_time(uint32_t ticks)

{
  uint32_t ticks_local;
  TIM_TypeDef *TIMx;
  
  _DAT_40000038 = ticks;
  return;
}


////>>0x08007c7c>>TIM2_IRQHandler>>////


/* WARNING: Unknown calling convention */

void TIM2_IRQHandler(void)

{
  TIM_TypeDef *TIMx;
  
  if (((_DAT_40000010 & 2) != 0) && ((_DAT_4000000c & 2) != 0)) {
    _DAT_40000010 = _DAT_40000010 & 0xfffffffd;
    step_delay_isr();
  }
  if (((_DAT_40000010 & 4) != 0) && ((_DAT_4000000c & 4) != 0)) {
    _DAT_40000010 = _DAT_40000010 & 0xfffffffb;
    step_pulse_isr();
  }
  if (((_DAT_40000010 & 1) != 0) && ((_DAT_4000000c & 1) != 0)) {
    _DAT_40000010 = _DAT_40000010 & 0xfffffffe;
    step_period_isr();
  }
  return;
}


////>>0x08007d08>>g540_timer_init>>////


/* WARNING: Unknown calling convention */

void g540_timer_init(void)

{
  TIM_TypeDef *TIMx;
  
  enable_tim_clock((TIM_TypeDef *)&DAT_40000800);
  _DAT_40000800 = 0x80;
  _DAT_40000804 = 0;
  _DAT_40000808 = 0;
  _DAT_4000080c = 0;
  _DAT_40000810 = 0;
  _DAT_40000818 = 0x6800;
  _DAT_4000081c = 0;
  _DAT_40000820 = 0;
  _DAT_40000824 = 0;
  _DAT_40000828 = SystemCoreClock / 4800000 - 1;
  _DAT_4000082c = 199;
  _DAT_40000834 = 0;
  _DAT_40000838 = 100;
  _DAT_4000083c = 0;
  _DAT_40000840 = 0;
  _DAT_40000848 = 0;
  _DAT_4000084c = 0;
  _DAT_40000814 = 1;
  return;
}


////>>0x08007da8>>g540_timer_start>>////


/* WARNING: Unknown calling convention */

void g540_timer_start(void)

{
  TIM_TypeDef *TIMx;
  
  _DAT_40000820 = _DAT_40000820 | 0x10;
  _DAT_40000800 = _DAT_40000800 | 1;
  return;
}


////>>0x08007dd8>>g540_timer_stop>>////


/* WARNING: Unknown calling convention */

void g540_timer_stop(void)

{
  TIM_TypeDef *TIMx;
  
  _DAT_40000800 = _DAT_40000800 & 0xfffffffe;
  _DAT_40000820 = _DAT_40000820 & 0xffffffef;
  return;
}


////>>0x08007e08>>timers_init>>////

/* WARNING: Unknown calling convention */

void timers_init(void)

{
  step_timer_init();
  g540_timer_init();
  g540_timer_start();
  return;
}


////>>0x08007e1c>>usart_putc>>////



void usart_putc(char c)

{
  char c_local;
  USART_TypeDef *usart;
  
  do {
  } while ((_DAT_40004400 & 0x80) == 0);
  _DAT_40004404 = (uint)(byte)c;
  return;
}


////>>0x08007e4c>>usart_flush>>////

/* WARNING: Unknown calling convention */

void usart_flush(void)

{
  return;
}


////>>0x08007e58>>usart_tstc>>////


/* WARNING: Unknown calling convention */

int usart_tstc(void)

{
  USART_TypeDef *usart;
  
  return (uint)((_DAT_40004400 & 0x20) != 0);
}


////>>0x08007e84>>usart_getc>>////


/* WARNING: Unknown calling convention */

char usart_getc(void)

{
  USART_TypeDef *usart;
  
  return (char)_DAT_40004404;
}


////>>0x08007ea4>>enable_usart_clock>>////



void enable_usart_clock(USART_TypeDef *usart)

{
  USART_TypeDef *usart_local;
  
  if (usart == (USART_TypeDef *)0x40011000) {
    _DAT_40023844 = _DAT_40023844 | 0x10;
  }
  else if (usart == (USART_TypeDef *)&DAT_40004400) {
    _DAT_40023840 = _DAT_40023840 | 0x20000;
  }
  else if (usart == (USART_TypeDef *)0x40004800) {
    _DAT_40023840 = _DAT_40023840 | 0x40000;
  }
  else if (usart == (USART_TypeDef *)0x40004c00) {
    _DAT_40023840 = _DAT_40023840 | 0x80000;
  }
  else if (usart == (USART_TypeDef *)0x40005000) {
    _DAT_40023840 = _DAT_40023840 | 0x100000;
  }
  else if (usart == (USART_TypeDef *)0x40011400) {
    _DAT_40023844 = _DAT_40023844 | 0x20;
  }
  return;
}


////>>0x08007f54>>set_baud_rate>>////

void set_baud_rate(USART_TypeDef *usart,int baud)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int baud_local;
  USART_TypeDef *usart_local;
  
  if ((usart->CR1 & 0x8000) == 0) {
    if ((usart == (USART_TypeDef *)0x40011000) || (usart == (USART_TypeDef *)0x40011400)) {
      uVar1 = HAL_RCC_GetPCLK2Freq();
      uVar2 = HAL_RCC_GetPCLK2Freq();
      uVar3 = HAL_RCC_GetPCLK2Freq();
      usart->BRR = (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uint)(baud << 2)) / 100) << 4 |
                   (((uVar2 * 0x19) / (uint)(baud << 2) +
                    (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uint)(baud << 2)) / 100) * -100)
                    * 0x10 + 0x32) / 100 & 0xf;
    }
    else {
      uVar1 = HAL_RCC_GetPCLK1Freq();
      uVar2 = HAL_RCC_GetPCLK1Freq();
      uVar3 = HAL_RCC_GetPCLK1Freq();
      usart->BRR = (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uint)(baud << 2)) / 100) << 4 |
                   (((uVar2 * 0x19) / (uint)(baud << 2) +
                    (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uint)(baud << 2)) / 100) * -100)
                    * 0x10 + 0x32) / 100 & 0xf;
    }
  }
  else if ((usart == (USART_TypeDef *)0x40011000) || (usart == (USART_TypeDef *)0x40011400)) {
    uVar1 = HAL_RCC_GetPCLK2Freq();
    uVar2 = HAL_RCC_GetPCLK2Freq();
    uVar3 = HAL_RCC_GetPCLK2Freq();
    usart->BRR = (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uint)(baud << 1)) / 100) << 4 |
                 (((uVar2 * 0x19) / (uint)(baud << 1) +
                  (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uint)(baud << 1)) / 100) * -100) *
                  0x10 + 0x32) / 100 & 0xf;
  }
  else {
    uVar1 = HAL_RCC_GetPCLK1Freq();
    uVar2 = HAL_RCC_GetPCLK1Freq();
    uVar3 = HAL_RCC_GetPCLK1Freq();
    usart->BRR = (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uint)(baud << 1)) / 100) << 4 |
                 (((uVar2 * 0x19) / (uint)(baud << 1) +
                  (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uint)(baud << 1)) / 100) * -100) *
                  0x10 + 0x32) / 100 & 0xf;
  }
  return;
}


////>>0x08008190>>usart_init>>////


/* WARNING: Unknown calling convention */

void usart_init(void)

{
  uint32_t val;
  USART_TypeDef *usart;
  
  enable_usart_clock((USART_TypeDef *)&DAT_40004400);
  _DAT_4000440c = _DAT_4000440c & 0xffff400c | 0xc;
  _DAT_40004410 = _DAT_40004410 & 0xffff8090;
  _DAT_40004414 = _DAT_40004414 & 0xfffff000;
  _DAT_40004400 = _DAT_40004400 & 0xfffffc00;
  set_baud_rate((USART_TypeDef *)&DAT_40004400,0x1c200);
  _DAT_4000440c = _DAT_4000440c | 0x2000;
  return;
}


////>>0x08008244>>serial_init>>////

/* WARNING: Unknown calling convention */

void serial_init(void)

{
  return;
}


////>>0x08008250>>serial_write>>////

void serial_write(uint8_t data)

{
  uint8_t data_local;
  
  usart_putc(data);
  return;
}


////>>0x0800826a>>__io_putchar>>////

int __io_putchar(int ch)

{
  int ch_local;
  
  usart_putc((char)ch);
  return 0;
}


////>>0x08008286>>serial_read>>////

/* WARNING: Unknown calling convention */

uint8_t serial_read(void)

{
  uint8_t data;
  int iVar1;
  uint8_t c;
  
  iVar1 = usart_tstc();
  if (iVar1 != 0) {
    data = usart_getc();
    iVar1 = serial_rx_hook(data);
    if (iVar1 == 0) {
      return data;
    }
  }
  return 0xff;
}


////>>0x080082ba>>serial_reset_read_buffer>>////

/* WARNING: Unknown calling convention */

void serial_reset_read_buffer(void)

{
  return;
}


////>>0x080082c8>>__aeabi_drsub>>////

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __aeabi_dadd(param_1,param_2 ^ 0x80000000);
  return;
}


////>>0x080082d0>>__subdf3>>////

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  uVar6 = param_4 ^ 0x80000000;
  uVar9 = param_2 << 1;
  param_4 = param_4 << 1;
  bVar13 = ((param_2 ^ uVar6) & 0x7fffffff) == 0;
  bVar14 = bVar13 && param_1 == param_3;
  if (!bVar13 || param_1 != param_3) {
    bVar14 = (uVar9 | param_1) == 0;
  }
  if (!bVar14) {
    bVar14 = (param_4 | param_3) == 0;
  }
  iVar8 = (int)uVar9 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar8 == -1;
  }
  iVar1 = (int)param_4 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar1 == -1;
  }
  if (bVar14) {
    if (iVar8 == -1 || iVar1 == -1) {
      uVar9 = uVar6;
      uVar11 = param_3;
      if (iVar8 == -1) {
        uVar9 = param_2;
        uVar11 = param_1;
      }
      if (iVar8 != -1 || iVar1 != -1) {
        param_3 = uVar11;
        uVar6 = uVar9;
      }
      bVar14 = (uVar11 | uVar9 << 0xc) == 0;
      if (bVar14) {
        bVar14 = (param_3 | uVar6 << 0xc) == 0;
      }
      if (bVar14) {
        bVar14 = uVar9 == uVar6;
      }
      if (!bVar14) {
        uVar9 = uVar9 | 0x80000;
      }
      return CONCAT44(uVar9,uVar11);
    }
    if (((param_2 ^ uVar6) & 0x7fffffff) != 0 || param_1 != param_3) {
      if ((uVar9 | param_1) == 0) {
        param_1 = param_3;
        param_2 = uVar6;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar6) {
      return 0;
    }
    if (uVar9 >> 0x15 == 0) {
      bVar14 = (param_1 & 0x80000000) != 0;
      uVar6 = param_2 * 2 + (uint)bVar14;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar14)) {
        uVar6 = uVar6 | 0x80000000;
      }
      return CONCAT44(uVar6,param_1 << 1);
    }
    if (uVar9 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_08008514:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = uVar9 >> 0x15;
  param_4 = param_4 >> 0x15;
  uVar11 = param_4 - uVar9;
  bVar14 = uVar11 != 0;
  if (param_4 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar7 = param_2;
  if (bVar14 && uVar9 <= param_4) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar7 = uVar6;
    param_3 = param_1;
    uVar6 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar7,uVar10);
  }
  uVar4 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar4 = -uVar4 - (uint)bVar14;
  }
  uVar7 = uVar6 & 0xfffff | 0x100000;
  if ((uVar6 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar7 = -uVar7 - (uint)bVar14;
  }
  if (uVar9 == uVar11) {
    uVar7 = uVar7 ^ 0x100000;
    if (uVar9 == 0) {
      uVar4 = uVar4 ^ 0x100000;
      uVar9 = 1;
    }
    else {
      uVar11 = uVar11 - 1;
    }
  }
  uVar6 = -uVar11 + 0x20;
  if ((int)uVar11 < 0x21) {
    uVar12 = param_3 << (uVar6 & 0xff);
    param_3 = param_3 >> (uVar11 & 0xff);
    uVar3 = uVar10 + param_3;
    uVar5 = uVar7 << (uVar6 & 0xff);
    uVar6 = uVar3 + uVar5;
    uVar4 = uVar4 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar3,uVar5);
  }
  else {
    uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar7 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
    uVar6 = uVar10 + uVar7;
    uVar4 = uVar4 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar7);
  }
  param_2 = uVar4 & 0x80000000;
  uVar11 = uVar4;
  if ((int)uVar4 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar6;
    uVar6 = -(uint)!bVar14 - uVar6;
    uVar11 = -(uint)(bVar14 <= uVar11) - uVar4;
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      uVar10 = uVar11 & 1;
      uVar11 = uVar11 >> 1;
      bVar2 = (byte)uVar6;
      uVar6 = (uint)(uVar10 != 0) << 0x1f | uVar6 >> 1;
      uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_08008514;
    }
LAB_080083e0:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (uVar6 & 1) != 0;
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar6,(uint)bVar14) | param_2,
                    uVar6 + bVar14);
  }
  bVar13 = (uVar12 & 0x80000000) != 0;
  uVar12 = uVar12 << 1;
  uVar10 = uVar6 * 2;
  bVar14 = CARRY4(uVar6,uVar6);
  uVar6 = uVar6 * 2 + (uint)bVar13;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar13));
  uVar10 = uVar9 - 2;
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_080083e0;
  uVar7 = uVar6;
  uVar9 = uVar11;
  if (uVar11 == 0) {
    uVar7 = 0;
    uVar9 = uVar6;
  }
  iVar8 = LZCOUNT(uVar9);
  if (uVar11 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar11 = iVar8 - 0xb;
  bVar15 = SBORROW4(uVar11,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar14 = (int)uVar6 < 0;
  bVar13 = uVar6 == 0;
  if ((int)uVar11 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    iVar8 = iVar8 + -0x1f;
    bVar14 = iVar8 < 0;
    bVar13 = iVar8 == 0;
    uVar6 = uVar11;
    if (!bVar13 && bVar14 == bVar15) {
      uVar7 = uVar9 << (uVar11 & 0xff);
      uVar9 = uVar9 >> (0xcU - iVar8 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar13 || bVar14 != bVar15) {
    uVar12 = 0x20 - uVar6;
  }
  uVar9 = uVar9 << (uVar6 & 0xff);
  if (bVar13 || bVar14 != bVar15) {
    uVar9 = uVar9 | uVar7 >> (uVar12 & 0xff);
  }
  if (bVar13 || bVar14 != bVar15) {
    uVar7 = uVar7 << (uVar6 & 0xff);
  }
LAB_08008458:
  if ((int)uVar11 <= (int)uVar10) {
    return CONCAT44(uVar9 + (uVar10 - uVar11) * 0x100000 | param_2,uVar7);
  }
  uVar6 = ~(uVar10 - uVar11);
  if ((int)uVar6 < 0x1f) {
    iVar8 = uVar6 - 0x13;
    if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar6 - 0x1f,0xc)) {
      return CONCAT44(uVar4,uVar7 >> (0x20 - (0xcU - iVar8) & 0xff) | uVar9 << (0xcU - iVar8 & 0xff)
                     ) & 0x80000000ffffffff;
    }
    uVar6 = uVar6 + 1;
    return CONCAT44(param_2 | uVar9 >> (uVar6 & 0xff),
                    uVar7 >> (uVar6 & 0xff) | uVar9 << (0x20 - uVar6 & 0xff));
  }
  return CONCAT44(uVar4,uVar9 >> (uVar6 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


////>>0x080082d4>>__aeabi_dadd>>////

ulonglong __aeabi_dadd(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  uVar7 = param_2 << 1;
  uVar9 = param_4 << 1;
  bVar13 = ((param_2 ^ param_4) & 0x7fffffff) == 0;
  bVar14 = bVar13 && param_1 == param_3;
  if (!bVar13 || param_1 != param_3) {
    bVar14 = (uVar7 | param_1) == 0;
  }
  if (!bVar14) {
    bVar14 = (uVar9 | param_3) == 0;
  }
  iVar6 = (int)uVar7 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar6 == -1;
  }
  iVar1 = (int)uVar9 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar1 == -1;
  }
  if (bVar14) {
    if (iVar6 == -1 || iVar1 == -1) {
      uVar9 = param_4;
      uVar7 = param_3;
      if (iVar6 == -1) {
        uVar9 = param_2;
        uVar7 = param_1;
      }
      if (iVar6 != -1 || iVar1 != -1) {
        param_3 = uVar7;
        param_4 = uVar9;
      }
      bVar14 = (uVar7 | uVar9 << 0xc) == 0;
      if (bVar14) {
        bVar14 = (param_3 | param_4 << 0xc) == 0;
      }
      if (bVar14) {
        bVar14 = uVar9 == param_4;
      }
      if (!bVar14) {
        uVar9 = uVar9 | 0x80000;
      }
      return CONCAT44(uVar9,uVar7);
    }
    if (((param_2 ^ param_4) & 0x7fffffff) != 0 || param_1 != param_3) {
      if ((uVar7 | param_1) == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if (uVar7 >> 0x15 == 0) {
      bVar14 = (param_1 & 0x80000000) != 0;
      uVar9 = param_2 * 2 + (uint)bVar14;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar14)) {
        uVar9 = uVar9 | 0x80000000;
      }
      return CONCAT44(uVar9,param_1 << 1);
    }
    if (uVar7 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_08008514:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar7 = uVar7 >> 0x15;
  uVar9 = uVar9 >> 0x15;
  uVar10 = uVar9 - uVar7;
  bVar14 = uVar10 != 0;
  if (uVar9 < uVar7) {
    uVar10 = -uVar10;
  }
  uVar8 = param_1;
  uVar5 = param_2;
  if (bVar14 && uVar7 <= uVar9) {
    uVar7 = uVar7 + uVar10;
    uVar8 = param_3;
    uVar5 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar10) {
    return CONCAT44(uVar5,uVar8);
  }
  uVar9 = uVar5 & 0xfffff | 0x100000;
  if ((uVar5 & 0x80000000) != 0) {
    bVar14 = uVar8 != 0;
    uVar8 = -uVar8;
    uVar9 = -uVar9 - (uint)bVar14;
  }
  uVar5 = param_4 & 0xfffff | 0x100000;
  if ((param_4 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar5 = -uVar5 - (uint)bVar14;
  }
  if (uVar7 == uVar10) {
    uVar5 = uVar5 ^ 0x100000;
    if (uVar7 == 0) {
      uVar9 = uVar9 ^ 0x100000;
      uVar7 = 1;
    }
    else {
      uVar10 = uVar10 - 1;
    }
  }
  uVar12 = -uVar10 + 0x20;
  if ((int)uVar10 < 0x21) {
    uVar11 = param_3 << (uVar12 & 0xff);
    param_3 = param_3 >> (uVar10 & 0xff);
    uVar3 = uVar8 + param_3;
    uVar4 = uVar5 << (uVar12 & 0xff);
    uVar12 = uVar3 + uVar4;
    uVar9 = uVar9 + CARRY4(uVar8,param_3) + ((int)uVar5 >> (uVar10 & 0xff)) +
            (uint)CARRY4(uVar3,uVar4);
  }
  else {
    uVar11 = uVar5 << (-uVar10 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar11 = uVar11 | 2;
    }
    uVar5 = (int)uVar5 >> (uVar10 - 0x20 & 0xff);
    uVar12 = uVar8 + uVar5;
    uVar9 = uVar9 + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar8,uVar5);
  }
  param_2 = uVar9 & 0x80000000;
  uVar10 = uVar9;
  if ((int)uVar9 < 0) {
    bVar14 = uVar11 == 0;
    uVar11 = -uVar11;
    uVar10 = -uVar12;
    uVar12 = -(uint)!bVar14 - uVar12;
    uVar10 = -(uint)(bVar14 <= uVar10) - uVar9;
  }
  if (0xfffff < uVar10) {
    uVar8 = uVar7 - 1;
    if (0x1fffff < uVar10) {
      uVar9 = uVar10 & 1;
      uVar10 = uVar10 >> 1;
      bVar2 = (byte)uVar12;
      uVar12 = (uint)(uVar9 != 0) << 0x1f | uVar12 >> 1;
      uVar11 = (uint)(bVar2 & 1) << 0x1f | uVar11 >> 1;
      uVar8 = uVar7;
      if (0xffbfffff < uVar7 * 0x200000) goto LAB_08008514;
    }
LAB_080083e0:
    bVar14 = 0x7fffffff < uVar11;
    if (uVar11 == 0x80000000) {
      bVar14 = (uVar12 & 1) != 0;
    }
    return CONCAT44(uVar10 + uVar8 * 0x100000 + (uint)CARRY4(uVar12,(uint)bVar14) | param_2,
                    uVar12 + bVar14);
  }
  bVar13 = (uVar11 & 0x80000000) != 0;
  uVar11 = uVar11 << 1;
  uVar8 = uVar12 * 2;
  bVar14 = CARRY4(uVar12,uVar12);
  uVar12 = uVar12 * 2 + (uint)bVar13;
  uVar10 = uVar10 * 2 + (uint)(bVar14 || CARRY4(uVar8,(uint)bVar13));
  uVar8 = uVar7 - 2;
  if (uVar7 - 1 != 0 && 0xfffff < uVar10) goto LAB_080083e0;
  uVar5 = uVar12;
  uVar7 = uVar10;
  if (uVar10 == 0) {
    uVar5 = 0;
    uVar7 = uVar12;
  }
  iVar6 = LZCOUNT(uVar7);
  if (uVar10 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar12 = iVar6 - 0xb;
  bVar15 = SBORROW4(uVar12,0x20);
  uVar10 = iVar6 - 0x2b;
  bVar14 = (int)uVar10 < 0;
  bVar13 = uVar10 == 0;
  if ((int)uVar12 < 0x20) {
    bVar15 = SCARRY4(uVar10,0xc);
    iVar6 = iVar6 + -0x1f;
    bVar14 = iVar6 < 0;
    bVar13 = iVar6 == 0;
    uVar10 = uVar12;
    if (!bVar13 && bVar14 == bVar15) {
      uVar5 = uVar7 << (uVar12 & 0xff);
      uVar7 = uVar7 >> (0xcU - iVar6 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar13 || bVar14 != bVar15) {
    uVar11 = 0x20 - uVar10;
  }
  uVar7 = uVar7 << (uVar10 & 0xff);
  if (bVar13 || bVar14 != bVar15) {
    uVar7 = uVar7 | uVar5 >> (uVar11 & 0xff);
  }
  if (bVar13 || bVar14 != bVar15) {
    uVar5 = uVar5 << (uVar10 & 0xff);
  }
LAB_08008458:
  if ((int)uVar12 <= (int)uVar8) {
    return CONCAT44(uVar7 + (uVar8 - uVar12) * 0x100000 | param_2,uVar5);
  }
  uVar10 = ~(uVar8 - uVar12);
  if ((int)uVar10 < 0x1f) {
    iVar6 = uVar10 - 0x13;
    if (iVar6 != 0 && iVar6 < 0 == SCARRY4(uVar10 - 0x1f,0xc)) {
      return CONCAT44(uVar9,uVar5 >> (0x20 - (0xcU - iVar6) & 0xff) | uVar7 << (0xcU - iVar6 & 0xff)
                     ) & 0x80000000ffffffff;
    }
    uVar10 = uVar10 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar10 & 0xff),
                    uVar5 >> (uVar10 & 0xff) | uVar7 << (0x20 - uVar10 & 0xff));
  }
  return CONCAT44(uVar9,uVar7 >> (uVar10 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


////>>0x0800854c>>__floatunsidf>>////

ulonglong __floatunsidf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_r12;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  iVar3 = LZCOUNT(param_1);
  uVar4 = iVar3 + 0x15;
  bVar7 = SBORROW4(uVar4,0x20);
  uVar2 = iVar3 - 0xb;
  bVar5 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  if (uVar4 < 0x20) {
    bVar7 = SCARRY4(uVar2,0xc);
    bVar5 = false;
    bVar6 = iVar3 + 1 == 0;
    uVar2 = uVar4;
    if (!bVar6 && bVar7 == false) {
      uVar1 = param_1 << uVar4;
      param_1 = param_1 >> (0xcU - (iVar3 + 1) & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    in_r12 = 0x20 - uVar2;
  }
  param_1 = param_1 << (uVar2 & 0xff);
  if (bVar6 || bVar5 != bVar7) {
    param_1 = param_1 | 0U >> (in_r12 & 0xff);
  }
  if (bVar6 || bVar5 != bVar7) {
    uVar1 = 0 << (uVar2 & 0xff);
  }
LAB_08008458:
  if (uVar4 < 0x433) {
    return CONCAT44(param_1 + (0x432 - uVar4) * 0x100000,uVar1);
  }
  uVar2 = ~(0x432 - uVar4);
  if (0x1e < (int)uVar2) {
    return (ulonglong)(param_1 >> (uVar2 - 0x1f & 0xff));
  }
  iVar3 = uVar2 - 0x13;
  if (iVar3 == 0 || iVar3 < 0 != SCARRY4(uVar2 - 0x1f,0xc)) {
    uVar2 = uVar2 + 1;
    return CONCAT44(param_1 >> (uVar2 & 0xff),
                    uVar1 >> (uVar2 & 0xff) | param_1 << (0x20 - uVar2 & 0xff));
  }
  return (ulonglong)(uVar1 >> (0x20 - (0xcU - iVar3) & 0xff) | param_1 << (0xcU - iVar3 & 0xff));
}


////>>0x0800856c>>__aeabi_i2d>>////

ulonglong __aeabi_i2d(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar6 < 0) {
    uVar2 = -param_1;
  }
  uVar1 = 0;
  iVar4 = LZCOUNT(uVar2);
  uVar5 = iVar4 + 0x15;
  bVar9 = SBORROW4(uVar5,0x20);
  uVar3 = iVar4 - 0xb;
  bVar7 = (int)uVar3 < 0;
  bVar8 = uVar3 == 0;
  if (uVar5 < 0x20) {
    bVar9 = SCARRY4(uVar3,0xc);
    bVar7 = false;
    bVar8 = iVar4 + 1 == 0;
    uVar3 = uVar5;
    if (!bVar8 && bVar9 == false) {
      uVar1 = uVar2 << uVar5;
      uVar2 = uVar2 >> (0xcU - (iVar4 + 1) & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar8 || bVar7 != bVar9) {
    in_r12 = 0x20 - uVar3;
  }
  uVar2 = uVar2 << (uVar3 & 0xff);
  if (bVar8 || bVar7 != bVar9) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
  }
  if (bVar8 || bVar7 != bVar9) {
    uVar1 = 0 << (uVar3 & 0xff);
  }
LAB_08008458:
  if (uVar5 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar5) * 0x100000 | uVar6,uVar1);
  }
  uVar3 = ~(0x432 - uVar5);
  if (0x1e < (int)uVar3) {
    return CONCAT44(param_1,uVar2 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  iVar4 = uVar3 - 0x13;
  if (iVar4 == 0 || iVar4 < 0 != SCARRY4(uVar3 - 0x1f,0xc)) {
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar6 | uVar2 >> (uVar3 & 0xff),
                    uVar1 >> (uVar3 & 0xff) | uVar2 << (0x20 - uVar3 & 0xff));
  }
  return CONCAT44(param_1,uVar1 >> (0x20 - (0xcU - iVar4) & 0xff) | uVar2 << (0xcU - iVar4 & 0xff))
         & 0x80000000ffffffff;
}


////>>0x08008590>>__aeabi_f2d>>////

ulonglong __aeabi_f2d(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_r12;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  uVar5 = param_1 << 1;
  bVar9 = uVar5 == 0;
  uVar1 = (uint)((param_1 & 0x80000000) != 0) << 0x1f;
  uVar4 = (uint)((int)uVar5 >> 3) >> 1;
  uVar3 = uVar1 | uVar4;
  param_1 = param_1 << 0x1d;
  if (!bVar9) {
    param_4 = uVar5 & 0xff000000;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = param_4 == 0xff000000;
  }
  if (!bVar9) {
    return CONCAT44(uVar3,param_1) ^ 0x3800000000000000;
  }
  if ((uVar5 & 0xffffff) == 0) {
    return CONCAT44(uVar3,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar3,param_1) | 0x8000000000000;
  }
  uVar2 = param_1;
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar2 = 0;
    uVar5 = param_1;
  }
  iVar6 = LZCOUNT(uVar5);
  if (uVar4 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar10 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar9 = (int)uVar4 < 0;
  bVar8 = uVar4 == 0;
  if ((int)uVar7 < 0x20) {
    bVar10 = SCARRY4(uVar4,0xc);
    iVar6 = iVar6 + -0x1f;
    bVar9 = iVar6 < 0;
    bVar8 = iVar6 == 0;
    uVar4 = uVar7;
    if (!bVar8 && bVar9 == bVar10) {
      uVar2 = uVar5 << (uVar7 & 0xff);
      uVar5 = uVar5 >> (0xcU - iVar6 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar8 || bVar9 != bVar10) {
    in_r12 = 0x20 - uVar4;
  }
  uVar5 = uVar5 << (uVar4 & 0xff);
  if (bVar8 || bVar9 != bVar10) {
    uVar5 = uVar5 | uVar2 >> (in_r12 & 0xff);
  }
  if (bVar8 || bVar9 != bVar10) {
    uVar2 = uVar2 << (uVar4 & 0xff);
  }
LAB_08008458:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar5 + (0x380 - uVar7) * 0x100000 | uVar1,uVar2);
  }
  uVar4 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar4) {
    return CONCAT44(uVar3,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  iVar6 = uVar4 - 0x13;
  if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar4 - 0x1f,0xc)) {
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar1 | uVar5 >> (uVar4 & 0xff),
                    uVar2 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  return CONCAT44(uVar3,uVar2 >> (0x20 - (0xcU - iVar6) & 0xff) | uVar5 << (0xcU - iVar6 & 0xff)) &
         0x80000000ffffffff;
}


////>>0x080085d4>>__floatundidf>>////

ulonglong __floatundidf(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  if ((param_1 | param_2) == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar7 = 0x432;
  uVar8 = param_2 >> 0x16;
  if (uVar8 != 0) {
    iVar7 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar7 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar7 = iVar7 + 3;
    }
    uVar4 = iVar7 - ((int)param_2 >> 0x1f);
    uVar8 = param_1 << (0x20 - uVar4 & 0xff);
    param_1 = param_1 >> (uVar4 & 0xff) | param_2 << (0x20 - uVar4 & 0xff);
    param_2 = param_2 >> (uVar4 & 0xff);
    iVar7 = uVar4 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      uVar4 = param_2 & 1;
      param_2 = param_2 >> 1;
      bVar1 = (byte)param_1;
      param_1 = (uint)(uVar4 != 0) << 0x1f | param_1 >> 1;
      uVar8 = (uint)(bVar1 & 1) << 0x1f | uVar8 >> 1;
      iVar7 = iVar7 + 1;
      if (0xffbfffff < (uint)(iVar7 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_080083e0:
    bVar10 = 0x7fffffff < uVar8;
    if (uVar8 == 0x80000000) {
      bVar10 = (param_1 & 1) != 0;
    }
    return CONCAT44(param_2 + iVar7 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar10),param_1 + bVar10
                   );
  }
  bVar9 = (uVar8 & 0x80000000) != 0;
  uVar8 = uVar8 << 1;
  uVar4 = param_1 * 2;
  bVar10 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar9;
  param_2 = param_2 * 2 + (uint)(bVar10 || CARRY4(uVar4,(uint)bVar9));
  bVar10 = iVar7 != 0;
  iVar7 = iVar7 + -1;
  if (bVar10 && 0xfffff < param_2) goto LAB_080083e0;
  uVar2 = param_1;
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
    uVar4 = param_1;
  }
  iVar5 = LZCOUNT(uVar4);
  if (param_2 == 0) {
    iVar5 = iVar5 + 0x20;
  }
  uVar6 = iVar5 - 0xb;
  bVar11 = SBORROW4(uVar6,0x20);
  uVar3 = iVar5 - 0x2b;
  bVar10 = (int)uVar3 < 0;
  bVar9 = uVar3 == 0;
  if ((int)uVar6 < 0x20) {
    bVar11 = SCARRY4(uVar3,0xc);
    iVar5 = iVar5 + -0x1f;
    bVar10 = iVar5 < 0;
    bVar9 = iVar5 == 0;
    uVar3 = uVar6;
    if (!bVar9 && bVar10 == bVar11) {
      uVar2 = uVar4 << (uVar6 & 0xff);
      uVar4 = uVar4 >> (0xcU - iVar5 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar9 || bVar10 != bVar11) {
    uVar8 = 0x20 - uVar3;
  }
  uVar4 = uVar4 << (uVar3 & 0xff);
  if (bVar9 || bVar10 != bVar11) {
    uVar4 = uVar4 | uVar2 >> (uVar8 & 0xff);
  }
  if (bVar9 || bVar10 != bVar11) {
    uVar2 = uVar2 << (uVar3 & 0xff);
  }
LAB_08008458:
  if ((int)uVar6 <= iVar7) {
    return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000,uVar2);
  }
  uVar8 = ~(iVar7 - uVar6);
  if ((int)uVar8 < 0x1f) {
    iVar7 = uVar8 - 0x13;
    if (iVar7 != 0 && iVar7 < 0 == SCARRY4(uVar8 - 0x1f,0xc)) {
      return (ulonglong)(uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) | uVar4 << (0xcU - iVar7 & 0xff));
    }
    uVar8 = uVar8 + 1;
    return CONCAT44(uVar4 >> (uVar8 & 0xff),uVar2 >> (uVar8 & 0xff) | uVar4 << (0x20 - uVar8 & 0xff)
                   );
  }
  return (ulonglong)(uVar4 >> (uVar8 - 0x1f & 0xff));
}


////>>0x080085e4>>__aeabi_l2d>>////

ulonglong __aeabi_l2d(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  if ((param_1 | param_2) == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar8 = param_2 & 0x80000000;
  uVar3 = param_2;
  if ((int)uVar8 < 0) {
    bVar11 = param_1 != 0;
    param_1 = -param_1;
    uVar3 = -param_2 - (uint)bVar11;
  }
  iVar7 = 0x432;
  uVar9 = uVar3 >> 0x16;
  if (uVar9 != 0) {
    iVar7 = 3;
    if (uVar3 >> 0x19 != 0) {
      iVar7 = 6;
    }
    if (uVar3 >> 0x1c != 0) {
      iVar7 = iVar7 + 3;
    }
    uVar4 = iVar7 - ((int)uVar3 >> 0x1f);
    uVar9 = param_1 << (0x20 - uVar4 & 0xff);
    param_1 = param_1 >> (uVar4 & 0xff) | uVar3 << (0x20 - uVar4 & 0xff);
    uVar3 = uVar3 >> (uVar4 & 0xff);
    iVar7 = uVar4 + 0x432;
  }
  if (0xfffff < uVar3) {
    if (0x1fffff < uVar3) {
      uVar4 = uVar3 & 1;
      uVar3 = uVar3 >> 1;
      bVar1 = (byte)param_1;
      param_1 = (uint)(uVar4 != 0) << 0x1f | param_1 >> 1;
      uVar9 = (uint)(bVar1 & 1) << 0x1f | uVar9 >> 1;
      iVar7 = iVar7 + 1;
      if (0xffbfffff < (uint)(iVar7 * 0x200000)) {
        return (ulonglong)(uVar8 | 0x7ff00000) << 0x20;
      }
    }
LAB_080083e0:
    bVar11 = 0x7fffffff < uVar9;
    if (uVar9 == 0x80000000) {
      bVar11 = (param_1 & 1) != 0;
    }
    return CONCAT44(uVar3 + iVar7 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar11) | uVar8,
                    param_1 + bVar11);
  }
  bVar10 = (uVar9 & 0x80000000) != 0;
  uVar9 = uVar9 << 1;
  uVar4 = param_1 * 2;
  bVar11 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar10;
  uVar3 = uVar3 * 2 + (uint)(bVar11 || CARRY4(uVar4,(uint)bVar10));
  bVar11 = iVar7 != 0;
  iVar7 = iVar7 + -1;
  if (bVar11 && 0xfffff < uVar3) goto LAB_080083e0;
  uVar2 = param_1;
  uVar4 = uVar3;
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar4 = param_1;
  }
  iVar5 = LZCOUNT(uVar4);
  if (uVar3 == 0) {
    iVar5 = iVar5 + 0x20;
  }
  uVar6 = iVar5 - 0xb;
  bVar12 = SBORROW4(uVar6,0x20);
  uVar3 = iVar5 - 0x2b;
  bVar11 = (int)uVar3 < 0;
  bVar10 = uVar3 == 0;
  if ((int)uVar6 < 0x20) {
    bVar12 = SCARRY4(uVar3,0xc);
    iVar5 = iVar5 + -0x1f;
    bVar11 = iVar5 < 0;
    bVar10 = iVar5 == 0;
    uVar3 = uVar6;
    if (!bVar10 && bVar11 == bVar12) {
      uVar2 = uVar4 << (uVar6 & 0xff);
      uVar4 = uVar4 >> (0xcU - iVar5 & 0xff);
      goto LAB_08008458;
    }
  }
  if (bVar10 || bVar11 != bVar12) {
    uVar9 = 0x20 - uVar3;
  }
  uVar4 = uVar4 << (uVar3 & 0xff);
  if (bVar10 || bVar11 != bVar12) {
    uVar4 = uVar4 | uVar2 >> (uVar9 & 0xff);
  }
  if (bVar10 || bVar11 != bVar12) {
    uVar2 = uVar2 << (uVar3 & 0xff);
  }
LAB_08008458:
  if ((int)uVar6 <= iVar7) {
    return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000 | uVar8,uVar2);
  }
  uVar3 = ~(iVar7 - uVar6);
  if ((int)uVar3 < 0x1f) {
    iVar7 = uVar3 - 0x13;
    if (iVar7 != 0 && iVar7 < 0 == SCARRY4(uVar3 - 0x1f,0xc)) {
      return CONCAT44(param_2,uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) |
                              uVar4 << (0xcU - iVar7 & 0xff)) & 0x80000000ffffffff;
    }
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar8 | uVar4 >> (uVar3 & 0xff),
                    uVar2 >> (uVar3 & 0xff) | uVar4 << (0x20 - uVar3 & 0xff));
  }
  return CONCAT44(param_2,uVar4 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


////>>0x08008640>>__muldf3>>////

ulonglong __muldf3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint unaff_r5;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  
  uVar12 = CONCAT44(param_2,param_1);
  uVar7 = 0x7ff;
  uVar4 = param_2 >> 0x14 & 0x7ff;
  bVar9 = uVar4 == 0;
  if (!bVar9) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar9 = unaff_r5 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar4 == 0x7ff;
  }
  if (!bVar9) {
    bVar9 = unaff_r5 == 0x7ff;
  }
  if (bVar9) {
    uVar12 = FUN_0800881c();
  }
  uVar3 = (uint)(uVar12 >> 0x20);
  iVar5 = uVar4 + unaff_r5;
  uVar4 = uVar3 ^ param_4;
  uVar3 = uVar3 & ~(uVar7 << 0x15);
  param_4 = param_4 & ~(uVar7 << 0x15);
  bVar9 = ((uint)uVar12 | uVar3 << 0xc) == 0;
  if (!bVar9) {
    bVar9 = (param_3 | param_4 << 0xc) == 0;
  }
  uVar3 = uVar3 | 0x100000;
  param_4 = param_4 | 0x100000;
  if (bVar9) {
    param_3 = (uint)uVar12 | param_3;
    param_4 = (uVar4 & 0x80000000 | uVar3) ^ param_4;
    uVar4 = uVar7 >> 1;
    bVar11 = SBORROW4(iVar5,uVar4);
    uVar6 = iVar5 - uVar4;
    bVar9 = uVar6 == 0;
    uVar3 = uVar6;
    if (!bVar9 && (int)uVar4 <= iVar5) {
      bVar11 = SBORROW4(uVar7,uVar6);
      uVar3 = uVar7 - uVar6;
      bVar9 = uVar7 == uVar6;
    }
    if (!bVar9 && (int)uVar3 < 0 == bVar11) {
      param_4 = param_4 | uVar6 * 0x100000;
    }
    if (!bVar9 && (int)uVar3 < 0 == bVar11) {
      return CONCAT44(param_4,param_3);
    }
    param_4 = param_4 | 0x100000;
    uVar7 = 0;
    bVar11 = SBORROW4(uVar6,1);
    uVar6 = uVar6 - 1;
    bVar9 = uVar6 == 0;
    uVar4 = uVar6;
  }
  else {
    uVar1 = (uVar12 & 0xffffffff) * (ulonglong)param_3;
    uVar12 = (uVar12 & 0xffffffff) * (ulonglong)param_4 +
             (ulonglong)uVar3 * (ulonglong)param_3 + (uVar1 >> 0x20);
    uVar8 = (uint)uVar12;
    lVar2 = (ulonglong)uVar3 * (ulonglong)param_4 + (uVar12 >> 0x20);
    uVar7 = (uint)lVar2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    if ((int)uVar1 != 0) {
      uVar8 = uVar8 | 1;
    }
    uVar6 = (iVar5 + -0x3ff) - (uint)(uVar3 < 0x200);
    if (uVar3 < 0x200) {
      bVar9 = (uVar8 & 0x80000000) != 0;
      uVar8 = uVar8 << 1;
      lVar2 = CONCAT44(uVar3 * 2 + (uint)(CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar9)),
                       uVar7 * 2 + (uint)bVar9);
    }
    param_4 = uVar4 & 0x80000000 | (int)((ulonglong)lVar2 >> 0x20) << 0xb | (uint)lVar2 >> 0x15;
    param_3 = (uint)lVar2 << 0xb | uVar8 >> 0x15;
    uVar7 = uVar8 * 0x800;
    bVar10 = 0xfc < uVar6;
    bVar11 = SBORROW4(uVar6,0xfd);
    uVar3 = uVar6 - 0xfd;
    bVar9 = uVar3 == 0;
    uVar4 = uVar3;
    if (bVar10 && !bVar9) {
      bVar10 = 0x6ff < uVar3;
      bVar11 = SBORROW4(uVar3,0x700);
      uVar4 = uVar6 - 0x7fd;
      bVar9 = uVar3 == 0x700;
    }
    if (!bVar10 || bVar9) {
      bVar9 = 0x7fffffff < uVar7;
      if (uVar7 == 0x80000000) {
        bVar9 = (uVar8 >> 0x15 & 1) != 0;
      }
      return CONCAT44(param_4 + uVar6 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar9),param_3 + bVar9
                     );
    }
  }
  if (!bVar9 && (int)uVar4 < 0 == bVar11) {
    return (ulonglong)(param_4 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  bVar10 = SCARRY4(uVar6,0x36);
  bVar9 = (int)(uVar6 + 0x36) < 0;
  bVar11 = uVar6 == 0xffffffca;
  if (bVar11 || bVar9 != bVar10) {
    param_3 = 0;
  }
  if (bVar11 || bVar9 != bVar10) {
    param_4 = param_4 & 0x80000000;
  }
  if (bVar11 || bVar9 != bVar10) {
    return CONCAT44(param_4,param_3);
  }
  uVar4 = -uVar6;
  uVar3 = uVar4 - 0x20;
  if (0x1f < (int)uVar4) {
    uVar6 = param_3 >> (uVar3 & 0xff) | param_4 << (0x20 - uVar3 & 0xff);
    uVar4 = (param_4 >> (uVar3 & 0xff) & ~((param_4 & 0x80000000) >> (uVar3 & 0xff))) -
            ((int)uVar6 >> 0x1f);
    if ((uVar7 | param_3 << (0x20 - uVar3 & 0xff) | uVar6 << 1) == 0) {
      uVar4 = uVar4 & ~(uVar6 >> 0x1f);
    }
    return CONCAT44(param_4,uVar4) & 0x80000000ffffffff;
  }
  iVar5 = uVar4 - 0x14;
  if (iVar5 == 0 || iVar5 < 0 != SCARRY4(uVar3,0xc)) {
    uVar8 = param_3 << (uVar6 + 0x20 & 0xff);
    uVar3 = param_3 >> (uVar4 & 0xff) | param_4 << (uVar6 + 0x20 & 0xff);
    uVar6 = uVar3 + -((int)uVar8 >> 0x1f);
    if ((uVar7 | uVar8 << 1) == 0) {
      uVar6 = uVar6 & ~(uVar8 >> 0x1f);
    }
    return CONCAT44((param_4 & 0x80000000) +
                    ((param_4 & 0x7fffffff) >> (uVar4 & 0xff)) +
                    (uint)CARRY4(uVar3,-((int)uVar8 >> 0x1f)),uVar6);
  }
  uVar4 = 0xc - iVar5;
  uVar6 = param_3 << (uVar4 & 0xff);
  uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | param_4 << (uVar4 & 0xff);
  uVar3 = uVar4 + -((int)uVar6 >> 0x1f);
  if ((uVar7 | uVar6 << 1) == 0) {
    uVar3 = uVar3 & ~(uVar6 >> 0x1f);
  }
  return CONCAT44((param_4 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar3);
}


////>>0x0800881c>>FUN_0800881c>>////

ulonglong FUN_0800881c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  bool bVar4;
  
  uVar2 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 != in_r12 && uVar2 != in_r12) {
    bVar4 = (param_1 | param_2 << 1) == 0;
    if (!bVar4) {
      bVar4 = (param_3 | param_4 << 1) == 0;
    }
    if (bVar4) {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    if (unaff_r4 == 0) {
      uVar3 = param_2 & 0x80000000;
      do {
        uVar1 = param_1 & 0x80000000;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 + (uint)(uVar1 != 0);
      } while ((param_2 & 0x100000) == 0);
      param_2 = param_2 | uVar3;
      if (uVar2 != 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    do {
      uVar2 = param_3 & 0x80000000;
      param_3 = param_3 << 1;
      param_4 = param_4 * 2 + (uint)(uVar2 != 0);
    } while ((param_4 & 0x100000) == 0);
    return CONCAT44(param_2,param_1);
  }
  bVar4 = (param_1 | param_2 << 1) == 0;
  if (bVar4) {
    param_2 = param_4;
    param_1 = param_3;
  }
  if (!bVar4) {
    bVar4 = (param_3 | param_4 << 1) == 0;
  }
  uVar3 = param_2;
  if (((!bVar4) && ((unaff_r4 != in_r12 || ((param_1 | param_2 << 0xc) == 0)))) &&
     ((uVar2 != in_r12 || (param_1 = param_3, uVar3 = param_4, (param_3 | param_4 << 0xc) == 0)))) {
    return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}


////>>0x08008894>>__divdf3>>////

ulonglong __divdf3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint unaff_r5;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  
  uVar17 = CONCAT44(param_2,param_1);
  uVar13 = 0x7ff;
  uVar7 = param_2 >> 0x14 & 0x7ff;
  bVar14 = uVar7 == 0;
  if (!bVar14) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar14 = unaff_r5 == 0;
  }
  if (!bVar14) {
    bVar14 = uVar7 == 0x7ff;
  }
  if (!bVar14) {
    bVar14 = unaff_r5 == 0x7ff;
  }
  if (bVar14) {
    uVar17 = FUN_08008a02();
  }
  uVar9 = (uint)((ulonglong)uVar17 >> 0x20);
  uVar11 = (uint)uVar17;
  iVar8 = uVar7 - unaff_r5;
  if ((param_3 | param_4 << 0xc) == 0) {
    uVar7 = (uVar9 ^ param_4) & 0x80000000 | uVar9 & 0xfffff;
    bVar16 = SCARRY4(iVar8,uVar13 >> 1);
    uVar9 = iVar8 + (uVar13 >> 1);
    bVar14 = (int)uVar9 < 0;
    bVar15 = uVar9 == 0;
    if (!bVar15 && bVar14 == bVar16) {
      bVar16 = SBORROW4(uVar13,uVar9);
      bVar14 = (int)(uVar13 - uVar9) < 0;
      bVar15 = uVar13 == uVar9;
    }
    if (!bVar15 && bVar14 == bVar16) {
      uVar7 = uVar7 | uVar9 * 0x100000;
    }
    if (!bVar15 && bVar14 == bVar16) {
      return CONCAT44(uVar7,uVar11);
    }
    uVar7 = uVar7 | 0x100000;
    uVar13 = 0;
    bVar15 = SBORROW4(uVar9,1);
    uVar9 = uVar9 - 1;
    bVar14 = uVar9 == 0;
    uVar3 = uVar9;
  }
  else {
    uVar3 = (param_4 << 0xc) >> 4 | 0x10000000 | param_3 >> 0x18;
    uVar13 = param_3 << 8;
    uVar10 = (uVar9 << 0xc) >> 4 | 0x10000000 | uVar11 >> 0x18;
    uVar11 = uVar11 * 0x100;
    uVar7 = (uVar9 ^ param_4) & 0x80000000;
    bVar14 = uVar3 <= uVar10;
    if (uVar10 == uVar3) {
      bVar14 = uVar13 <= uVar11;
    }
    iVar8 = iVar8 + (uint)bVar14;
    uVar9 = iVar8 + 0x3fd;
    if (bVar14 == false) {
      uVar3 = uVar3 >> 1;
      uVar13 = (uint)((param_3 >> 0x18 & 1) != 0) << 0x1f | uVar13 >> 1;
    }
    uVar12 = uVar11 - uVar13;
    uVar10 = (uVar10 - uVar3) - (uint)(uVar11 < uVar13);
    uVar4 = uVar3 >> 1;
    uVar1 = (uint)((uVar3 & 1) != 0) << 0x1f | uVar13 >> 1;
    uVar11 = 0x100000;
    uVar3 = 0x80000;
    while( true ) {
      bVar14 = uVar1 <= uVar12;
      if (uVar4 < uVar10 || uVar10 - uVar4 < (uint)bVar14) {
        uVar12 = uVar12 - uVar1;
        uVar11 = uVar11 | uVar3;
        uVar10 = (uVar10 - uVar4) - (uint)!bVar14;
      }
      uVar5 = uVar4 >> 1;
      uVar1 = (uint)((uVar4 & 1) != 0) << 0x1f | uVar1 >> 1;
      bVar15 = uVar1 <= uVar12;
      bVar14 = uVar10 - uVar5 < (uint)bVar15;
      uVar13 = uVar10;
      if (uVar5 < uVar10 || bVar14) {
        uVar12 = uVar12 - uVar1;
        uVar13 = (uVar10 - uVar5) - (uint)!bVar15;
      }
      if (uVar5 < uVar10 || bVar14) {
        uVar11 = uVar11 | uVar3 >> 1;
      }
      uVar10 = uVar4 >> 2;
      uVar2 = (uint)((uVar5 & 1) != 0) << 0x1f | uVar1 >> 1;
      bVar15 = uVar2 <= uVar12;
      bVar14 = uVar13 - uVar10 < (uint)bVar15;
      uVar5 = uVar13;
      if (uVar10 < uVar13 || bVar14) {
        uVar12 = uVar12 - uVar2;
        uVar5 = (uVar13 - uVar10) - (uint)!bVar15;
      }
      if (uVar10 < uVar13 || bVar14) {
        uVar11 = uVar11 | uVar3 >> 2;
      }
      uVar6 = uVar4 >> 3;
      uVar1 = (uint)((uVar10 & 1) != 0) << 0x1f | uVar2 >> 1;
      bVar15 = uVar1 <= uVar12;
      bVar14 = uVar5 - uVar6 < (uint)bVar15;
      uVar10 = uVar5;
      if (uVar6 < uVar5 || bVar14) {
        uVar12 = uVar12 - uVar1;
        uVar10 = (uVar5 - uVar6) - (uint)!bVar15;
      }
      if (uVar6 < uVar5 || bVar14) {
        uVar11 = uVar11 | uVar3 >> 3;
      }
      uVar13 = uVar10 | uVar12;
      if (uVar13 == 0) break;
      uVar10 = uVar10 << 4 | uVar12 >> 0x1c;
      uVar12 = uVar12 << 4;
      uVar4 = uVar4 & 0xfffffff8 | uVar1 >> 0x1d;
      uVar1 = (uVar2 >> 1) << 3;
      uVar3 = uVar3 >> 4;
      if (uVar3 == 0) {
        uVar6 = uVar4;
        if ((uVar7 & 0x100000) != 0) goto LAB_080089b2;
        uVar7 = uVar7 | uVar11;
        uVar11 = 0;
        uVar3 = 0x80000000;
      }
    }
    if ((uVar7 & 0x100000) == 0) {
      uVar7 = uVar7 | uVar11;
      uVar11 = 0;
    }
LAB_080089b2:
    bVar16 = 0xfc < uVar9;
    bVar15 = SBORROW4(uVar9,0xfd);
    uVar4 = iVar8 + 0x300;
    bVar14 = uVar4 == 0;
    uVar3 = uVar4;
    if (bVar16 && !bVar14) {
      bVar16 = 0x6ff < uVar4;
      bVar15 = SBORROW4(uVar4,0x700);
      uVar3 = iVar8 - 0x400;
      bVar14 = uVar4 == 0x700;
    }
    if (!bVar16 || bVar14) {
      bVar14 = uVar6 <= uVar10;
      if (uVar10 == uVar6) {
        bVar14 = uVar1 <= uVar12;
      }
      if (uVar10 == uVar6 && uVar12 == uVar1) {
        bVar14 = (uVar11 & 1) != 0;
      }
      return CONCAT44(uVar7 + uVar9 * 0x100000 + (uint)CARRY4(uVar11,(uint)bVar14),uVar11 + bVar14);
    }
  }
  if (!bVar14 && (int)uVar3 < 0 == bVar15) {
    return (ulonglong)(uVar7 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  bVar16 = SCARRY4(uVar9,0x36);
  bVar14 = (int)(uVar9 + 0x36) < 0;
  bVar15 = uVar9 == 0xffffffca;
  if (bVar15 || bVar14 != bVar16) {
    uVar11 = 0;
  }
  if (bVar15 || bVar14 != bVar16) {
    uVar7 = uVar7 & 0x80000000;
  }
  if (bVar15 || bVar14 != bVar16) {
    return CONCAT44(uVar7,uVar11);
  }
  uVar3 = -uVar9;
  uVar10 = uVar3 - 0x20;
  if (0x1f < (int)uVar3) {
    uVar3 = uVar11 >> (uVar10 & 0xff) | uVar7 << (0x20 - uVar10 & 0xff);
    uVar9 = (uVar7 >> (uVar10 & 0xff) & ~((uVar7 & 0x80000000) >> (uVar10 & 0xff))) -
            ((int)uVar3 >> 0x1f);
    if ((uVar13 | uVar11 << (0x20 - uVar10 & 0xff) | uVar3 << 1) == 0) {
      uVar9 = uVar9 & ~(uVar3 >> 0x1f);
    }
    return CONCAT44(uVar7,uVar9) & 0x80000000ffffffff;
  }
  iVar8 = uVar3 - 0x14;
  if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar10,0xc)) {
    uVar9 = 0xc - iVar8;
    uVar3 = uVar11 << (uVar9 & 0xff);
    uVar11 = uVar11 >> (0x20 - uVar9 & 0xff) | uVar7 << (uVar9 & 0xff);
    uVar9 = uVar11 + -((int)uVar3 >> 0x1f);
    if ((uVar13 | uVar3 << 1) == 0) {
      uVar9 = uVar9 & ~(uVar3 >> 0x1f);
    }
    return CONCAT44((uVar7 & 0x80000000) + (uint)CARRY4(uVar11,-((int)uVar3 >> 0x1f)),uVar9);
  }
  uVar10 = uVar11 << (uVar9 + 0x20 & 0xff);
  uVar11 = uVar11 >> (uVar3 & 0xff) | uVar7 << (uVar9 + 0x20 & 0xff);
  uVar9 = uVar11 + -((int)uVar10 >> 0x1f);
  if ((uVar13 | uVar10 << 1) == 0) {
    uVar9 = uVar9 & ~(uVar10 >> 0x1f);
  }
  return CONCAT44((uVar7 & 0x80000000) +
                  ((uVar7 & 0x7fffffff) >> (uVar3 & 0xff)) +
                  (uint)CARRY4(uVar11,-((int)uVar10 >> 0x1f)),uVar9);
}


////>>0x08008a02>>FUN_08008a02>>////

ulonglong FUN_08008a02(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  bool bVar4;
  
  uVar2 = in_r12 & param_4 >> 0x14;
  uVar3 = param_2;
  if (unaff_r4 != in_r12 || uVar2 != in_r12) {
    if (unaff_r4 == in_r12) {
      if (((param_1 | param_2 << 0xc) == 0) && (param_1 = param_3, uVar3 = param_4, uVar2 != in_r12)
         ) {
LAB_08008874:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar2 == in_r12) {
      param_1 = param_3;
      uVar3 = param_4;
      if ((param_3 | param_4 << 0xc) == 0) {
LAB_08008838:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
      }
    }
    else {
      bVar4 = (param_1 | param_2 << 1) == 0;
      if (!bVar4) {
        bVar4 = (param_3 | param_4 << 1) == 0;
      }
      if (!bVar4) {
        if (unaff_r4 == 0) {
          uVar3 = param_2 & 0x80000000;
          do {
            uVar1 = param_1 & 0x80000000;
            param_1 = param_1 << 1;
            param_2 = param_2 * 2 + (uint)(uVar1 != 0);
          } while ((param_2 & 0x100000) == 0);
          param_2 = param_2 | uVar3;
          if (uVar2 != 0) {
            return CONCAT44(param_2,param_1);
          }
        }
        do {
          uVar3 = param_3 & 0x80000000;
          param_3 = param_3 << 1;
          param_4 = param_4 * 2 + (uint)(uVar3 != 0);
        } while ((param_4 & 0x100000) == 0);
        return CONCAT44(param_2,param_1);
      }
      if ((param_1 | param_2 << 1) != 0) goto LAB_08008874;
      if ((param_3 | param_4 << 1) != 0) goto LAB_08008838;
    }
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}


////>>0x08008a64>>__gedf2>>////

uint __gedf2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  if (((int)(param_2 << 1) >> 0x15 == -1 || (int)(param_4 << 1) >> 0x15 == -1) &&
     ((((int)(param_2 << 1) >> 0x15 == -1 && ((param_1 | param_2 << 0xc) != 0)) ||
      (((int)(param_4 << 1) >> 0x15 == -1 && ((param_3 | param_4 << 0xc) != 0)))))) {
    return 0xffffffff;
  }
  bVar2 = (param_1 | param_2 << 1) == 0;
  if (bVar2) {
    bVar2 = (param_3 | param_4 << 1) == 0;
  }
  if (!bVar2) {
    bVar2 = param_2 == param_4;
  }
  if (bVar2) {
    bVar2 = param_1 == param_3;
  }
  if (!bVar2) {
    uVar1 = param_2 ^ param_4;
    bVar2 = uVar1 == 0;
    if (-1 < (int)uVar1) {
      bVar2 = param_2 == param_4;
    }
    bVar3 = -1 < (int)uVar1 && param_4 <= param_2;
    if (bVar2) {
      bVar3 = param_3 <= param_1;
    }
    param_4 = (int)param_4 >> 0x1f;
    if (!bVar3) {
      param_4 = ~param_4;
    }
    return param_4 | 1;
  }
  return 0;
}


////>>0x08008a6c>>__ledf2>>////

uint __ledf2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  if (((int)(param_2 << 1) >> 0x15 == -1 || (int)(param_4 << 1) >> 0x15 == -1) &&
     ((((int)(param_2 << 1) >> 0x15 == -1 && ((param_1 | param_2 << 0xc) != 0)) ||
      (((int)(param_4 << 1) >> 0x15 == -1 && ((param_3 | param_4 << 0xc) != 0)))))) {
    return 1;
  }
  bVar2 = (param_1 | param_2 << 1) == 0;
  if (bVar2) {
    bVar2 = (param_3 | param_4 << 1) == 0;
  }
  if (!bVar2) {
    bVar2 = param_2 == param_4;
  }
  if (bVar2) {
    bVar2 = param_1 == param_3;
  }
  if (!bVar2) {
    uVar1 = param_2 ^ param_4;
    bVar2 = uVar1 == 0;
    if (-1 < (int)uVar1) {
      bVar2 = param_2 == param_4;
    }
    bVar3 = -1 < (int)uVar1 && param_4 <= param_2;
    if (bVar2) {
      bVar3 = param_3 <= param_1;
    }
    param_4 = (int)param_4 >> 0x1f;
    if (!bVar3) {
      param_4 = ~param_4;
    }
    return param_4 | 1;
  }
  return 0;
}


////>>0x08008a74>>__nedf2>>////

uint __nedf2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  if (((int)(param_2 << 1) >> 0x15 == -1 || (int)(param_4 << 1) >> 0x15 == -1) &&
     ((((int)(param_2 << 1) >> 0x15 == -1 && ((param_1 | param_2 << 0xc) != 0)) ||
      (((int)(param_4 << 1) >> 0x15 == -1 && ((param_3 | param_4 << 0xc) != 0)))))) {
    return 1;
  }
  bVar2 = (param_1 | param_2 << 1) == 0;
  if (bVar2) {
    bVar2 = (param_3 | param_4 << 1) == 0;
  }
  if (!bVar2) {
    bVar2 = param_2 == param_4;
  }
  if (bVar2) {
    bVar2 = param_1 == param_3;
  }
  if (!bVar2) {
    uVar1 = param_2 ^ param_4;
    bVar2 = uVar1 == 0;
    if (-1 < (int)uVar1) {
      bVar2 = param_2 == param_4;
    }
    bVar3 = -1 < (int)uVar1 && param_4 <= param_2;
    if (bVar2) {
      bVar3 = param_3 <= param_1;
    }
    param_4 = (int)param_4 >> 0x1f;
    if (!bVar3) {
      param_4 = ~param_4;
    }
    return param_4 | 1;
  }
  return 0;
}


////>>0x08008af0>>__aeabi_cdrcmple>>////

void __aeabi_cdrcmple(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __aeabi_cdcmpeq(param_3,param_4,param_1,param_2);
  return;
}


////>>0x08008b00>>__aeabi_cdcmpeq>>////

undefined4 __aeabi_cdcmpeq(undefined4 param_1)

{
  __nedf2();
  return param_1;
}


////>>0x08008b10>>__aeabi_dcmpeq>>////

bool __aeabi_dcmpeq(void)

{
  char in_ZR;
  
  __aeabi_cdcmpeq();
  return in_ZR != '\0';
}


////>>0x08008b24>>__aeabi_dcmplt>>////

bool __aeabi_dcmplt(void)

{
  char in_CY;
  
  __aeabi_cdcmpeq();
  return in_CY == '\0';
}


////>>0x08008b38>>__aeabi_dcmple>>////

bool __aeabi_dcmple(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08008b4c>>__aeabi_dcmpge>>////

bool __aeabi_dcmpge(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08008b60>>__aeabi_dcmpgt>>////

bool __aeabi_dcmpgt(void)

{
  char in_CY;
  
  __aeabi_cdrcmple();
  return in_CY == '\0';
}


////>>0x08008b74>>__unorddf2>>////

undefined4 __unorddf2(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((((param_2 << 1) >> 0x15 != -1) || ((param_1 | param_2 << 0xc) == 0)) &&
     (((param_4 << 1) >> 0x15 != -1 || ((param_3 | param_4 << 0xc) == 0)))) {
    return 0;
  }
  return 1;
}


////>>0x08008ba0>>__aeabi_d2iz>>////

uint __aeabi_d2iz(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_2 * 2 + 0x200000;
  if (param_2 * 2 < 0xffe00000) {
    if (-1 < iVar2) {
      return 0;
    }
    uVar1 = iVar2 >> 0x15;
    uVar3 = -uVar1 - 0x3e1;
    if (uVar1 < 0xfffffc20 && uVar3 != 0) {
      uVar1 = (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar3 & 0xff);
      if ((param_2 & 0x80000000) != 0) {
        uVar1 = -uVar1;
      }
      return uVar1;
    }
  }
  else if ((param_1 | param_2 << 0xc) != 0) {
    return 0;
  }
  param_2 = param_2 & 0x80000000;
  if (param_2 == 0) {
    param_2 = 0x7fffffff;
  }
  return param_2;
}


////>>0x08008bf0>>__aeabi_d2uiz>>////

uint __aeabi_d2uiz(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 0x80000000) != 0) {
    return 0;
  }
  iVar1 = param_2 * 2 + 0x200000;
  if (param_2 * 2 < 0xffe00000) {
    if (-1 < iVar1) {
      return 0;
    }
    uVar2 = -(iVar1 >> 0x15) - 0x3e1;
    if (-1 < (int)uVar2) {
      return (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar2 & 0xff);
    }
  }
  else if ((param_1 | param_2 << 0xc) != 0) {
    return 0;
  }
  return 0xffffffff;
}


////>>0x08008c30>>__truncdfsf2>>////

uint __truncdfsf2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  bool bVar4;
  bool bVar5;
  
  uVar2 = param_2 * 2;
  bVar5 = uVar2 < 0x70000000;
  uVar3 = uVar2 + 0x90000000;
  uVar1 = uVar3;
  if (!bVar5) {
    in_r12 = uVar2 + 0x8fe00000;
    uVar1 = in_r12;
  }
  bVar4 = uVar1 == 0;
  if (!bVar5 && uVar3 >= 0x200000) {
    bVar4 = in_r12 == 0x1fc00000;
  }
  if (((bVar5 || uVar3 < 0x200000) || 0x1fc00000 < in_r12) || bVar4) {
    if ((param_2 & 0x40000000) != 0) {
      if (((int)uVar2 >> 0x15 == -1) && ((param_1 | param_2 << 0xc) != 0)) {
        return 0x7fc00000;
      }
      return param_2 & 0x80000000 | 0x7f800000;
    }
    if ((int)(uVar2 + 0x92e00000) < 0 != SCARRY4(uVar3,0x2e00000)) {
      return param_2 & 0x80000000;
    }
    uVar2 = 0x18 - (uVar2 + 0x92e00000 >> 0x15);
    uVar1 = param_1 >> (uVar2 & 0xff);
    if (param_1 << (0x20 - uVar2 & 0xff) != 0) {
      uVar1 = uVar1 | 1;
    }
    uVar3 = param_2 & 0x1fffff | 0x100000;
    param_1 = uVar1 | uVar3 << (0x20 - uVar2 & 0xff);
    uVar3 = (uVar3 >> (uVar2 & 0xff)) << 1;
  }
  uVar1 = (param_2 & 0x80000000 | param_1 >> 0x1d) + uVar3 * 4 + (uint)(0x7fffffff < param_1 * 8);
  if (param_1 * 8 == 0x80000000) {
    uVar1 = uVar1 & 0xfffffffe;
  }
  return uVar1;
}


////>>0x08008cd0>>__aeabi_frsub>>////

void __aeabi_frsub(uint param_1)

{
  __addsf3(param_1 ^ 0x80000000);
  return;
}


////>>0x08008cd8>>__aeabi_fsub>>////

uint __aeabi_fsub(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = param_2 ^ 0x80000000;
  uVar5 = param_1 << 1;
  bVar8 = uVar5 == 0;
  if (!bVar8) {
    param_4 = param_2 << 1;
    bVar8 = param_4 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar5 == param_4;
  }
  iVar1 = (int)uVar5 >> 0x18;
  if (!bVar8) {
    bVar8 = iVar1 == -1;
  }
  if (!bVar8) {
    bVar8 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar8) {
    iVar2 = (int)(param_2 << 1) >> 0x18;
    if (iVar1 == -1 || iVar2 == -1) {
      uVar5 = uVar3;
      if (iVar1 == -1) {
        uVar5 = param_1;
      }
      if (iVar1 != -1 || iVar2 != -1) {
        uVar3 = uVar5;
      }
      bVar8 = (uVar5 & 0x7fffff) == 0;
      if (bVar8) {
        bVar8 = (uVar3 & 0x7fffff) == 0;
      }
      if (bVar8) {
        bVar8 = uVar5 == uVar3;
      }
      if (!bVar8) {
        uVar5 = uVar5 | 0x400000;
      }
      return uVar5;
    }
    if (((param_1 ^ uVar3) & 0x7fffffff) != 0) {
      if (uVar5 == 0) {
        param_1 = uVar3;
      }
      return param_1;
    }
    if (param_1 != uVar3) {
      return 0;
    }
    if ((uVar5 & 0xff000000) == 0) {
      uVar3 = param_1 << 1;
      if ((param_1 & 0x80000000) != 0) {
        uVar3 = uVar3 | 0x80000000;
      }
      return uVar3;
    }
    if (uVar5 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_08008e12:
    return param_1 | 0x7f800000;
  }
  uVar5 = uVar5 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar7 = param_4 - uVar5;
  bVar8 = uVar7 != 0;
  uVar6 = uVar5;
  if (bVar8 && uVar5 <= param_4) {
    uVar6 = uVar5 + uVar7;
  }
  if (bVar8 && uVar5 <= param_4) {
    uVar3 = uVar3 ^ param_1;
  }
  if (bVar8 && uVar5 <= param_4) {
    param_1 = param_1 ^ uVar3;
  }
  if (bVar8 && uVar5 <= param_4) {
    uVar3 = uVar3 ^ param_1;
  }
  if (param_4 < uVar5) {
    uVar7 = -uVar7;
  }
  if (0x19 < uVar7) {
    return param_1;
  }
  uVar5 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar5 = -uVar5;
  }
  uVar4 = uVar3 & 0xffffff | 0x800000;
  if ((uVar3 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  if (uVar6 == uVar7) {
    uVar4 = uVar4 ^ 0x800000;
    if (uVar6 == 0) {
      uVar5 = uVar5 ^ 0x800000;
      uVar6 = 1;
    }
    else {
      uVar7 = uVar7 - 1;
    }
  }
  uVar5 = uVar5 + ((int)uVar4 >> (uVar7 & 0xff));
  uVar4 = uVar4 << (0x20 - uVar7 & 0xff);
  param_1 = uVar5 & 0x80000000;
  if ((int)uVar5 < 0) {
    bVar8 = uVar4 != 0;
    uVar4 = -uVar4;
    uVar5 = -uVar5 - (uint)bVar8;
  }
  if (uVar5 < 0x800000) {
    uVar3 = uVar4 & 0x80000000;
    uVar4 = uVar4 << 1;
    uVar5 = uVar5 * 2 + (uint)(uVar3 != 0);
    uVar3 = uVar6 - 2;
    if (uVar6 - 1 == 0 || uVar5 < 0x800000) {
      uVar7 = LZCOUNT(uVar5) - 8;
      uVar5 = uVar5 << (uVar7 & 0xff);
      if ((int)uVar3 < (int)uVar7) {
        uVar5 = uVar5 >> (-(uVar3 - uVar7) & 0xff);
      }
      else {
        uVar5 = uVar5 + (uVar3 - uVar7) * 0x800000;
      }
      return uVar5 | param_1;
    }
  }
  else {
    uVar3 = uVar6 - 1;
    if (0xffffff < uVar5) {
      uVar3 = uVar5 & 1;
      uVar5 = uVar5 >> 1;
      uVar4 = (uint)(uVar3 != 0) << 0x1f | uVar4 >> 1;
      uVar3 = uVar6;
      if (0xfd < uVar6) goto LAB_08008e12;
    }
  }
  uVar5 = uVar5 + uVar3 * 0x800000 + (uint)(0x7fffffff < uVar4);
  if (uVar4 == 0x80000000) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5 | param_1;
}


////>>0x08008cdc>>__addsf3>>////

uint __addsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = param_1 << 1;
  bVar7 = uVar4 == 0;
  if (!bVar7) {
    param_4 = param_2 << 1;
    bVar7 = param_4 == 0;
  }
  if (!bVar7) {
    bVar7 = uVar4 == param_4;
  }
  iVar1 = (int)uVar4 >> 0x18;
  if (!bVar7) {
    bVar7 = iVar1 == -1;
  }
  if (!bVar7) {
    bVar7 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar7) {
    iVar2 = (int)(param_2 << 1) >> 0x18;
    if (iVar1 == -1 || iVar2 == -1) {
      uVar4 = param_2;
      if (iVar1 == -1) {
        uVar4 = param_1;
      }
      if (iVar1 != -1 || iVar2 != -1) {
        param_2 = uVar4;
      }
      bVar7 = (uVar4 & 0x7fffff) == 0;
      if (bVar7) {
        bVar7 = (param_2 & 0x7fffff) == 0;
      }
      if (bVar7) {
        bVar7 = uVar4 == param_2;
      }
      if (!bVar7) {
        uVar4 = uVar4 | 0x400000;
      }
      return uVar4;
    }
    if (((param_1 ^ param_2) & 0x7fffffff) != 0) {
      if (uVar4 == 0) {
        param_1 = param_2;
      }
      return param_1;
    }
    if (param_1 != param_2) {
      return 0;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = param_1 << 1;
      if ((param_1 & 0x80000000) != 0) {
        uVar4 = uVar4 | 0x80000000;
      }
      return uVar4;
    }
    if (uVar4 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_08008e12:
    return param_1 | 0x7f800000;
  }
  uVar4 = uVar4 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar6 = param_4 - uVar4;
  bVar7 = uVar6 != 0;
  uVar5 = uVar4;
  if (bVar7 && uVar4 <= param_4) {
    uVar5 = uVar4 + uVar6;
  }
  if (bVar7 && uVar4 <= param_4) {
    param_2 = param_2 ^ param_1;
  }
  if (bVar7 && uVar4 <= param_4) {
    param_1 = param_1 ^ param_2;
  }
  if (bVar7 && uVar4 <= param_4) {
    param_2 = param_2 ^ param_1;
  }
  if (param_4 < uVar4) {
    uVar6 = -uVar6;
  }
  if (0x19 < uVar6) {
    return param_1;
  }
  uVar4 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  uVar3 = param_2 & 0xffffff | 0x800000;
  if ((param_2 & 0x80000000) != 0) {
    uVar3 = -uVar3;
  }
  if (uVar5 == uVar6) {
    uVar3 = uVar3 ^ 0x800000;
    if (uVar5 == 0) {
      uVar4 = uVar4 ^ 0x800000;
      uVar5 = 1;
    }
    else {
      uVar6 = uVar6 - 1;
    }
  }
  uVar4 = uVar4 + ((int)uVar3 >> (uVar6 & 0xff));
  uVar3 = uVar3 << (0x20 - uVar6 & 0xff);
  param_1 = uVar4 & 0x80000000;
  if ((int)uVar4 < 0) {
    bVar7 = uVar3 != 0;
    uVar3 = -uVar3;
    uVar4 = -uVar4 - (uint)bVar7;
  }
  if (uVar4 < 0x800000) {
    uVar6 = uVar3 & 0x80000000;
    uVar3 = uVar3 << 1;
    uVar4 = uVar4 * 2 + (uint)(uVar6 != 0);
    uVar6 = uVar5 - 2;
    if (uVar5 - 1 == 0 || uVar4 < 0x800000) {
      uVar5 = LZCOUNT(uVar4) - 8;
      uVar4 = uVar4 << (uVar5 & 0xff);
      if ((int)uVar6 < (int)uVar5) {
        uVar4 = uVar4 >> (-(uVar6 - uVar5) & 0xff);
      }
      else {
        uVar4 = uVar4 + (uVar6 - uVar5) * 0x800000;
      }
      return uVar4 | param_1;
    }
  }
  else {
    uVar6 = uVar5 - 1;
    if (0xffffff < uVar4) {
      uVar6 = uVar4 & 1;
      uVar4 = uVar4 >> 1;
      uVar3 = (uint)(uVar6 != 0) << 0x1f | uVar3 >> 1;
      uVar6 = uVar5;
      if (0xfd < uVar5) goto LAB_08008e12;
    }
  }
  uVar4 = uVar4 + uVar6 * 0x800000 + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}


////>>0x08008e3c>>__floatunsisf>>////

uint __floatunsisf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = LZCOUNT(param_1);
  uVar2 = uVar1 - 8;
  iVar3 = uVar2 * -0x800000 + 0x4a800000;
  if (7 < uVar1) {
    uVar4 = 0 << (uVar2 & 0xff);
    uVar1 = iVar3 + (param_1 << (uVar2 & 0xff)) +
            (0U >> (0x20 - uVar2 & 0xff)) + (uint)(0x7fffffff < uVar4);
    if (uVar4 == 0x80000000) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  uVar2 = param_1 << uVar1 + 0x18;
  uVar1 = iVar3 + ((param_1 >> (0x20 - (uVar1 + 0x18) & 0xff)) - ((int)uVar2 >> 0x1f));
  if ((uVar2 & 0x7fffffff) == 0) {
    uVar1 = uVar1 & ~(uVar2 >> 0x1f);
  }
  return uVar1;
}


////>>0x08008e44>>__floatsisf>>////

uint __floatsisf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1 & 0x80000000;
  if ((int)uVar3 < 0) {
    param_1 = -param_1;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = LZCOUNT(param_1);
  uVar2 = uVar1 - 8;
  iVar4 = ((uVar3 | 0x4b000000) - 0x800000) + uVar2 * -0x800000;
  if (7 < uVar1) {
    uVar1 = 0 << (uVar2 & 0xff);
    uVar3 = iVar4 + (param_1 << (uVar2 & 0xff)) +
            (0U >> (0x20 - uVar2 & 0xff)) + (uint)(0x7fffffff < uVar1);
    if (uVar1 == 0x80000000) {
      uVar3 = uVar3 & 0xfffffffe;
    }
    return uVar3;
  }
  uVar2 = param_1 << uVar1 + 0x18;
  uVar3 = iVar4 + ((param_1 >> (0x20 - (uVar1 + 0x18) & 0xff)) - ((int)uVar2 >> 0x1f));
  if ((uVar2 & 0x7fffffff) == 0) {
    uVar3 = uVar3 & ~(uVar2 >> 0x1f);
  }
  return uVar3;
}


////>>0x08008e60>>__aeabi_ul2f>>////

uint __aeabi_ul2f(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1 | param_2) == 0) {
    return param_1;
  }
  uVar1 = param_1;
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = param_1;
  }
  iVar5 = 0x5b000000;
  if (param_2 == 0) {
    iVar5 = 0x4b000000;
  }
  uVar3 = LZCOUNT(uVar2);
  uVar4 = uVar3 - 8;
  iVar5 = iVar5 + -0x800000 + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar4 = uVar2 << uVar3 + 0x18;
    uVar2 = iVar5 + ((uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff)) - ((int)uVar4 >> 0x1f));
    if ((uVar1 | uVar4 << 1) == 0) {
      uVar2 = uVar2 & ~(uVar4 >> 0x1f);
    }
    return uVar2;
  }
  uVar3 = uVar1 << (uVar4 & 0xff);
  uVar2 = iVar5 + (uVar2 << (uVar4 & 0xff)) +
          (uVar1 >> (0x20 - uVar4 & 0xff)) + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}


////>>0x08008e70>>__aeabi_l2f>>////

uint __aeabi_l2f(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if ((param_1 | param_2) == 0) {
    return param_1;
  }
  uVar5 = param_2 & 0x80000000;
  if ((int)uVar5 < 0) {
    bVar7 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -param_2 - (uint)bVar7;
  }
  uVar2 = param_1;
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
    uVar1 = param_1;
  }
  uVar5 = uVar5 | 0x5b000000;
  if (param_2 == 0) {
    uVar5 = uVar5 + 0xf0000000;
  }
  uVar3 = LZCOUNT(uVar1);
  uVar4 = uVar3 - 8;
  iVar6 = (uVar5 - 0x800000) + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar4 = uVar1 << uVar3 + 0x18;
    uVar5 = iVar6 + ((uVar1 >> (0x20 - (uVar3 + 0x18) & 0xff)) - ((int)uVar4 >> 0x1f));
    if ((uVar2 | uVar4 << 1) == 0) {
      uVar5 = uVar5 & ~(uVar4 >> 0x1f);
    }
    return uVar5;
  }
  uVar3 = uVar2 << (uVar4 & 0xff);
  uVar5 = iVar6 + (uVar1 << (uVar4 & 0xff)) +
          (uVar2 >> (0x20 - uVar4 & 0xff)) + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5;
}


////>>0x08008eec>>__aeabi_fmul>>////

uint __aeabi_fmul(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar3 = param_1 >> 0x17 & 0xff;
  bVar9 = uVar3 == 0;
  if (!bVar9) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar3 == 0xff;
  }
  if (!bVar9) {
    bVar9 = param_4 == 0xff;
  }
  if (bVar9) {
    param_4 = param_2 >> 0x17 & 0xff;
    if (uVar3 == 0xff || param_4 == 0xff) {
      bVar9 = param_1 == 0 || param_1 == 0x80000000;
      uVar2 = param_2;
      if (param_1 != 0 && param_1 != 0x80000000) {
        bVar9 = param_2 == 0;
        uVar2 = param_1;
      }
      if (!bVar9) {
        bVar9 = param_2 == 0x80000000;
      }
      uVar8 = uVar2;
      if (((bVar9) || ((uVar3 == 0xff && ((uVar2 & 0x7fffff) != 0)))) ||
         ((param_4 == 0xff && (uVar8 = param_2, (param_2 & 0x7fffff) != 0)))) {
        return uVar8 | 0x7fc00000;
      }
      uVar2 = uVar2 ^ param_2;
      goto LAB_0800903c;
    }
    bVar9 = (param_1 & 0x7fffffff) == 0;
    if (!bVar9) {
      bVar9 = (param_2 & 0x7fffffff) == 0;
    }
    if (bVar9) {
      return (param_1 ^ param_2) & 0x80000000;
    }
    bVar9 = uVar3 == 0;
    uVar2 = param_1 & 0x80000000;
    while( true ) {
      if (bVar9) {
        param_1 = param_1 << 1;
        bVar9 = (param_1 & 0x800000) == 0;
      }
      if (!bVar9) break;
      uVar3 = uVar3 - 1;
    }
    param_1 = param_1 | uVar2;
    bVar9 = param_4 == 0;
    uVar2 = param_2 & 0x80000000;
    while( true ) {
      if (bVar9) {
        param_2 = param_2 << 1;
        bVar9 = (param_2 & 0x800000) == 0;
      }
      if (!bVar9) break;
      param_4 = param_4 - 1;
    }
    param_2 = param_2 | uVar2;
  }
  iVar4 = uVar3 + param_4;
  uVar8 = param_1 ^ param_2;
  uVar3 = param_1 << 9;
  bVar9 = uVar3 == 0;
  if (!bVar9) {
    param_2 = param_2 << 9;
    bVar9 = param_2 == 0;
  }
  if (bVar9) {
    if (uVar3 == 0) {
      param_2 = param_2 << 9;
    }
    uVar2 = uVar8 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
    bVar10 = SBORROW4(iVar4,0x7f);
    iVar5 = iVar4 + -0x7f;
    bVar9 = iVar5 == 0;
    iVar7 = iVar5;
    if (!bVar9 && 0x7e < iVar4) {
      bVar10 = SBORROW4(0xff,iVar5);
      iVar7 = 0xff - iVar5;
      bVar9 = iVar5 == 0xff;
    }
    if (!bVar9 && iVar7 < 0 == bVar10) {
      uVar2 = uVar2 | iVar5 * 0x800000;
    }
    if (!bVar9 && iVar7 < 0 == bVar10) {
      return uVar2;
    }
    uVar2 = uVar2 | 0x800000;
    uVar6 = 0;
    bVar10 = SBORROW4(iVar5,1);
    uVar8 = iVar4 - 0x80;
    bVar9 = uVar8 == 0;
    uVar3 = uVar8;
  }
  else {
    lVar1 = (ulonglong)(uVar3 >> 5 | 0x8000000) * (ulonglong)(param_2 >> 5 | 0x8000000);
    uVar6 = (uint)lVar1;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
    bVar9 = uVar2 < 0x800000;
    if (bVar9) {
      uVar2 = uVar2 << 1;
    }
    if (bVar9) {
      uVar2 = uVar2 | uVar6 >> 0x1f;
      uVar6 = uVar6 << 1;
    }
    uVar2 = uVar8 & 0x80000000 | uVar2;
    uVar8 = (iVar4 + -0x7f) - (uint)bVar9;
    bVar10 = SBORROW4(uVar8,0xfd);
    bVar9 = uVar8 == 0xfd;
    uVar3 = uVar8 - 0xfd;
    if (uVar8 < 0xfe) {
      uVar2 = uVar2 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
      if (uVar6 == 0x80000000) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      return uVar2;
    }
  }
  if (bVar9 || (int)uVar3 < 0 != bVar10) {
    bVar9 = (int)(uVar8 + 0x19) < 0;
    if (uVar8 == 0xffffffe7 || bVar9 != SCARRY4(uVar8,0x19)) {
      uVar2 = uVar2 & 0x80000000;
    }
    if (uVar8 != 0xffffffe7 && bVar9 == SCARRY4(uVar8,0x19)) {
      uVar3 = (uVar2 << 1) >> (-uVar8 & 0xff);
      uVar8 = uVar2 << (uVar8 + 0x20 & 0xff);
      uVar3 = ((uint)((uVar2 & 0x80000000) != 0) << 0x1f | uVar3 >> 1) + (uint)((byte)uVar3 & 1);
      if ((uVar6 | uVar8 << 1) == 0) {
        uVar3 = uVar3 & ~(uVar8 >> 0x1f);
      }
      return uVar3;
    }
    return uVar2;
  }
LAB_0800903c:
  return uVar2 & 0x80000000 | 0x7f800000;
}


////>>0x08009054>>__aeabi_fdiv>>////

uint __aeabi_fdiv(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  uVar2 = param_1 >> 0x17 & 0xff;
  bVar7 = uVar2 == 0;
  if (!bVar7) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar7 = param_4 == 0;
  }
  if (!bVar7) {
    bVar7 = uVar2 == 0xff;
  }
  if (!bVar7) {
    bVar7 = param_4 == 0xff;
  }
  if (bVar7) {
    param_4 = param_2 >> 0x17 & 0xff;
    uVar6 = param_1;
    if (uVar2 == 0xff) {
      if (((param_1 & 0x7fffff) != 0) || (uVar6 = param_2, param_4 == 0xff)) {
LAB_0800904a:
        return uVar6 | 0x7fc00000;
      }
    }
    else {
      if (param_4 == 0xff) {
        uVar6 = param_2;
        if ((param_2 & 0x7fffff) == 0) {
LAB_08009000:
          return (param_1 ^ param_2) & 0x80000000;
        }
        goto LAB_0800904a;
      }
      bVar7 = (param_1 & 0x7fffffff) == 0;
      if (!bVar7) {
        bVar7 = (param_2 & 0x7fffffff) == 0;
      }
      if (!bVar7) {
        bVar7 = uVar2 == 0;
        uVar6 = param_1 & 0x80000000;
        while( true ) {
          if (bVar7) {
            param_1 = param_1 << 1;
            bVar7 = (param_1 & 0x800000) == 0;
          }
          if (!bVar7) break;
          uVar2 = uVar2 - 1;
        }
        param_1 = param_1 | uVar6;
        bVar7 = param_4 == 0;
        uVar6 = param_2 & 0x80000000;
        while( true ) {
          if (bVar7) {
            param_2 = param_2 << 1;
            bVar7 = (param_2 & 0x800000) == 0;
          }
          if (!bVar7) break;
          param_4 = param_4 - 1;
        }
        param_2 = param_2 | uVar6;
        goto LAB_0800906c;
      }
      if ((param_1 & 0x7fffffff) == 0) {
        if ((param_2 & 0x7fffffff) != 0) goto LAB_08009000;
        goto LAB_0800904a;
      }
    }
    param_1 = param_1 ^ param_2;
  }
  else {
LAB_0800906c:
    iVar3 = uVar2 - param_4;
    if (param_2 << 9 == 0) {
      param_1 = (param_1 ^ param_2) & 0x80000000 | param_1 & 0x7fffff;
      bVar9 = SCARRY4(iVar3,0x7f);
      iVar5 = iVar3 + 0x7f;
      bVar7 = iVar5 < 0;
      bVar8 = iVar5 == 0;
      if (!bVar8 && bVar7 == bVar9) {
        bVar9 = SBORROW4(0xff,iVar5);
        bVar7 = 0xff - iVar5 < 0;
        bVar8 = iVar5 == 0xff;
      }
      if (!bVar8 && bVar7 == bVar9) {
        param_1 = param_1 | iVar5 * 0x800000;
      }
      if (!bVar8 && bVar7 == bVar9) {
        return param_1;
      }
      param_1 = param_1 | 0x800000;
      uVar2 = 0;
      bVar8 = SBORROW4(iVar5,1);
      uVar4 = iVar3 + 0x7e;
      bVar7 = uVar4 == 0;
      uVar6 = uVar4;
    }
    else {
      uVar1 = (param_2 << 9) >> 4 | 0x10000000;
      uVar2 = (param_1 << 9) >> 4 | 0x10000000;
      param_1 = (param_1 ^ param_2) & 0x80000000;
      bVar7 = uVar1 <= uVar2;
      if (!bVar7) {
        uVar2 = uVar2 << 1;
      }
      uVar4 = iVar3 + 0x7d + (uint)bVar7;
      uVar6 = 0x800000;
      do {
        if (uVar1 <= uVar2) {
          uVar2 = uVar2 - uVar1;
          param_1 = param_1 | uVar6;
        }
        bVar7 = uVar1 >> 1 <= uVar2;
        if (bVar7) {
          uVar2 = uVar2 - (uVar1 >> 1);
        }
        if (bVar7) {
          param_1 = param_1 | uVar6 >> 1;
        }
        bVar7 = uVar1 >> 2 <= uVar2;
        if (bVar7) {
          uVar2 = uVar2 - (uVar1 >> 2);
        }
        if (bVar7) {
          param_1 = param_1 | uVar6 >> 2;
        }
        bVar7 = uVar1 >> 3 <= uVar2;
        if (bVar7) {
          uVar2 = uVar2 - (uVar1 >> 3);
        }
        if (bVar7) {
          param_1 = param_1 | uVar6 >> 3;
        }
        uVar2 = uVar2 * 0x10;
        bVar7 = uVar2 == 0;
        if (!bVar7) {
          uVar6 = uVar6 >> 4;
          bVar7 = uVar6 == 0;
        }
      } while (!bVar7);
      bVar8 = SBORROW4(uVar4,0xfd);
      bVar7 = uVar4 == 0xfd;
      uVar6 = uVar4 - 0xfd;
      if (uVar4 < 0xfe) {
        param_1 = param_1 + uVar4 * 0x800000 + (uint)(uVar1 <= uVar2);
        if (uVar2 - uVar1 == 0) {
          param_1 = param_1 & 0xfffffffe;
        }
        return param_1;
      }
    }
    if (bVar7 || (int)uVar6 < 0 != bVar8) {
      bVar7 = (int)(uVar4 + 0x19) < 0;
      if (uVar4 == 0xffffffe7 || bVar7 != SCARRY4(uVar4,0x19)) {
        param_1 = param_1 & 0x80000000;
      }
      if (uVar4 == 0xffffffe7 || bVar7 != SCARRY4(uVar4,0x19)) {
        return param_1;
      }
      uVar6 = (param_1 << 1) >> (-uVar4 & 0xff);
      uVar4 = param_1 << (uVar4 + 0x20 & 0xff);
      uVar6 = ((uint)((param_1 & 0x80000000) != 0) << 0x1f | uVar6 >> 1) + (uint)((byte)uVar6 & 1);
      if ((uVar2 | uVar4 << 1) == 0) {
        uVar6 = uVar6 & ~(uVar4 >> 0x1f);
      }
      return uVar6;
    }
  }
  return param_1 & 0x80000000 | 0x7f800000;
}


////>>0x0800918c>>__gesf2>>////

uint __gesf2(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = param_1 * 2;
  uVar3 = param_2 * 2;
  if (((int)uVar2 >> 0x18 == -1 || (int)uVar3 >> 0x18 == -1) &&
     ((((int)uVar2 >> 0x18 == -1 && ((param_1 & 0x7fffff) != 0)) ||
      (((int)uVar3 >> 0x18 == -1 && ((param_2 & 0x7fffff) != 0)))))) {
    return 0xffffffff;
  }
  uVar4 = uVar2 | param_2 & 0x7fffffff;
  bVar5 = uVar4 == 0;
  if (!bVar5) {
    uVar4 = param_1 ^ param_2;
    bVar5 = uVar4 == 0;
  }
  bVar1 = -1 < (int)uVar4;
  if (bVar1) {
    param_1 = uVar2 + param_2 * -2;
    bVar5 = param_1 == 0;
  }
  if ((bVar1 && uVar3 <= uVar2) && !bVar5) {
    param_1 = (int)param_2 >> 0x1f;
  }
  if (!bVar1 || uVar3 > uVar2) {
    param_1 = ~((int)param_2 >> 0x1f);
  }
  if (!bVar5) {
    param_1 = param_1 | 1;
  }
  return param_1;
}


////>>0x08009194>>__ltsf2>>////

uint __ltsf2(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = param_1 * 2;
  uVar3 = param_2 * 2;
  if (((int)uVar2 >> 0x18 == -1 || (int)uVar3 >> 0x18 == -1) &&
     ((((int)uVar2 >> 0x18 == -1 && ((param_1 & 0x7fffff) != 0)) ||
      (((int)uVar3 >> 0x18 == -1 && ((param_2 & 0x7fffff) != 0)))))) {
    return 1;
  }
  uVar4 = uVar2 | param_2 & 0x7fffffff;
  bVar5 = uVar4 == 0;
  if (!bVar5) {
    uVar4 = param_1 ^ param_2;
    bVar5 = uVar4 == 0;
  }
  bVar1 = -1 < (int)uVar4;
  if (bVar1) {
    param_1 = uVar2 + param_2 * -2;
    bVar5 = param_1 == 0;
  }
  if ((bVar1 && uVar3 <= uVar2) && !bVar5) {
    param_1 = (int)param_2 >> 0x1f;
  }
  if (!bVar1 || uVar3 > uVar2) {
    param_1 = ~((int)param_2 >> 0x1f);
  }
  if (!bVar5) {
    param_1 = param_1 | 1;
  }
  return param_1;
}


////>>0x0800919c>>__cmpsf2>>////

uint __cmpsf2(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = param_1 * 2;
  uVar3 = param_2 * 2;
  if (((int)uVar2 >> 0x18 == -1 || (int)uVar3 >> 0x18 == -1) &&
     ((((int)uVar2 >> 0x18 == -1 && ((param_1 & 0x7fffff) != 0)) ||
      (((int)uVar3 >> 0x18 == -1 && ((param_2 & 0x7fffff) != 0)))))) {
    return 1;
  }
  uVar4 = uVar2 | param_2 & 0x7fffffff;
  bVar5 = uVar4 == 0;
  if (!bVar5) {
    uVar4 = param_1 ^ param_2;
    bVar5 = uVar4 == 0;
  }
  bVar1 = -1 < (int)uVar4;
  if (bVar1) {
    param_1 = uVar2 + param_2 * -2;
    bVar5 = param_1 == 0;
  }
  if ((bVar1 && uVar3 <= uVar2) && !bVar5) {
    param_1 = (int)param_2 >> 0x1f;
  }
  if (!bVar1 || uVar3 > uVar2) {
    param_1 = ~((int)param_2 >> 0x1f);
  }
  if (!bVar5) {
    param_1 = param_1 | 1;
  }
  return param_1;
}


////>>0x080091fc>>__aeabi_cfrcmple>>////

void __aeabi_cfrcmple(undefined4 param_1,undefined4 param_2)

{
  __aeabi_cfcmpeq(param_2,param_1);
  return;
}


////>>0x08009204>>__aeabi_cfcmpeq>>////

undefined8 __aeabi_cfcmpeq(undefined4 param_1,undefined4 param_2)

{
  __cmpsf2();
  return CONCAT44(param_2,param_1);
}


////>>0x08009214>>__aeabi_fcmpeq>>////

bool __aeabi_fcmpeq(void)

{
  char in_ZR;
  
  __aeabi_cfcmpeq();
  return in_ZR != '\0';
}


////>>0x08009228>>__aeabi_fcmplt>>////

bool __aeabi_fcmplt(void)

{
  char in_CY;
  
  __aeabi_cfcmpeq();
  return in_CY == '\0';
}


////>>0x0800923c>>__aeabi_fcmple>>////

bool __aeabi_fcmple(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08009250>>__aeabi_fcmpge>>////

bool __aeabi_fcmpge(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08009264>>__aeabi_fcmpgt>>////

bool __aeabi_fcmpgt(void)

{
  char in_CY;
  
  __aeabi_cfrcmple();
  return in_CY == '\0';
}


////>>0x08009278>>__aeabi_f2iz>>////

uint __aeabi_f2iz(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 << 1 < 0x7f000000) {
    return 0;
  }
  uVar1 = (param_1 << 1) >> 0x18;
  uVar2 = 0x9e - uVar1;
  if (uVar1 < 0x9f && uVar2 != 0) {
    uVar1 = (param_1 << 8 | 0x80000000) >> (uVar2 & 0xff);
    if ((param_1 & 0x80000000) != 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  if ((uVar2 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
    return 0;
  }
  param_1 = param_1 & 0x80000000;
  if (param_1 == 0) {
    param_1 = 0x7fffffff;
  }
  return param_1;
}


////>>0x080092c4>>Reset_Handler>>////

/* WARNING: This function may have set the stack pointer */

void Reset_Handler(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &completed_8911; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(&__fini_array_end + iVar1);
  }
  for (puVar2 = &completed_8911; puVar2 < &_ebss; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  SystemInit();
  __libc_init_array();
  UNRECOVERED_JUMPTABLE = (code *)0x80092fa;
  main();
                    /* WARNING: Could not recover jumptable at 0x080092fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08009314>>DMA1_Stream3_IRQHandler>>////

void DMA1_Stream3_IRQHandler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08009318>>ceil>>////

double ceil(double __x)

{
  uint in_r0;
  uint in_r1;
  uint uVar1;
  uint uVar2;
  double in_d0;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined8 uVar3;
  
  uVar2 = (in_r1 << 1) >> 0x15;
  uVar1 = uVar2 - 0x3ff;
  if ((int)uVar1 < 0x14) {
    if ((int)uVar1 < 0) {
      uVar3 = __aeabi_dadd(in_r0,in_r1,0x8800759c,0x7e37e43c);
      __aeabi_dcmpgt((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0);
      in_d0 = extraout_d0_00;
    }
    else if ((in_r1 & 0xfffff >> (uVar1 & 0xff) | in_r0) != 0) {
      uVar3 = __aeabi_dadd(in_r0,in_r1,0x8800759c,0x7e37e43c);
      __aeabi_dcmpgt((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0);
      in_d0 = extraout_d0;
    }
  }
  else if ((int)uVar1 < 0x34) {
    if ((0xffffffffU >> (uVar2 - 0x413 & 0xff) & in_r0) != 0) {
      uVar3 = __aeabi_dadd(in_r0,in_r1,0x8800759c,0x7e37e43c);
      __aeabi_dcmpgt((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0);
      in_d0 = extraout_d0_01;
    }
  }
  else if (uVar1 == 0x400) {
    in_d0 = (double)__aeabi_dadd();
  }
  return in_d0;
}


////>>0x08009410>>cos>>////

double cos(double __x)

{
  undefined4 in_r0;
  uint uVar1;
  uint in_r1;
  double dVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (0x3fe921fb < (in_r1 & 0x7fffffff)) {
    if ((in_r1 & 0x7fffffff) < 0x7ff00000) {
      uVar1 = __ieee754_rem_pio2(in_r0,in_r1,&local_28);
      uVar1 = uVar1 & 3;
      if (uVar1 == 1) {
        dVar2 = (double)__kernel_sin(local_28,uStack_24,local_20,uStack_1c,1);
      }
      else if (uVar1 == 2) {
        dVar2 = (double)__kernel_cos(local_28,uStack_24,local_20,uStack_1c);
      }
      else if (uVar1 == 0) {
        dVar2 = (double)__kernel_cos(local_28,uStack_24,local_20,uStack_1c);
      }
      else {
        dVar2 = (double)__kernel_sin(local_28,uStack_24,local_20,uStack_1c,1);
      }
    }
    else {
      dVar2 = (double)__subdf3();
    }
    return dVar2;
  }
  dVar2 = (double)__kernel_cos(in_r0,in_r1,0,0);
  return dVar2;
}


////>>0x080094c0>>floor>>////

double floor(double __x)

{
  uint in_r0;
  uint in_r1;
  uint uVar1;
  uint uVar2;
  double in_d0;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined8 uVar3;
  
  uVar2 = (in_r1 << 1) >> 0x15;
  uVar1 = uVar2 - 0x3ff;
  if ((int)uVar1 < 0x14) {
    if ((int)uVar1 < 0) {
      uVar3 = __aeabi_dadd(in_r0,in_r1,0x8800759c,0x7e37e43c);
      __aeabi_dcmpgt((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0);
      in_d0 = extraout_d0_01;
    }
    else if ((in_r1 & 0xfffff >> (uVar1 & 0xff) | in_r0) != 0) {
      uVar3 = __aeabi_dadd(in_r0,in_r1,0x8800759c,0x7e37e43c);
      __aeabi_dcmpgt((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0);
      in_d0 = extraout_d0;
    }
  }
  else if ((int)uVar1 < 0x34) {
    if ((0xffffffffU >> (uVar2 - 0x413 & 0xff) & in_r0) != 0) {
      uVar3 = __aeabi_dadd(in_r0,in_r1,0x8800759c,0x7e37e43c);
      __aeabi_dcmpgt((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0);
      in_d0 = extraout_d0_00;
    }
  }
  else if (uVar1 == 0x400) {
    in_d0 = (double)__aeabi_dadd();
  }
  return in_d0;
}


////>>0x080095b8>>lround>>////

long lround(double __x)

{
  uint in_r0;
  uint in_r1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = (in_r1 << 1) >> 0x15;
  uVar5 = uVar2 - 0x3ff;
  if ((int)in_r1 < 0) {
    lVar4 = -1;
  }
  else {
    lVar4 = 1;
  }
  uVar3 = in_r1 & 0xfffff | 0x100000;
  if ((int)uVar5 < 0x14) {
    if ((int)uVar5 < 0) {
      if (uVar5 != 0xffffffff) {
        lVar4 = 0;
      }
      return lVar4;
    }
    uVar3 = uVar3 + (0x80000 >> (uVar5 & 0xff)) >> (0x14 - uVar5 & 0xff);
  }
  else {
    if (0x1e < uVar5) {
      lVar4 = __aeabi_d2iz();
      return lVar4;
    }
    if ((int)uVar5 < 0x34) {
      uVar1 = 0x80000000 >> (uVar2 - 0x413 & 0xff);
      if (CARRY4(uVar1,in_r0) != false) {
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 << (uVar2 - 0x413 & 0xff);
      if (uVar5 != 0x14) {
        uVar3 = uVar3 | uVar1 + in_r0 >> (0x34 - uVar5 & 0xff);
      }
    }
    else {
      uVar3 = uVar3 << (uVar2 - 0x413 & 0xff) | in_r0 << (uVar2 - 0x433 & 0xff);
    }
  }
  return uVar3 * lVar4;
}


////>>0x08009654>>round>>////

double round(double __x)

{
  int in_r1;
  int iVar1;
  double in_d0;
  
  iVar1 = ((uint)(in_r1 << 1) >> 0x15) - 0x3ff;
  if (((0x13 < iVar1) && (0x33 < iVar1)) && (iVar1 == 0x400)) {
    in_d0 = (double)__aeabi_dadd();
  }
  return in_d0;
}


////>>0x080096e8>>sin>>////

double sin(double __x)

{
  undefined4 in_r0;
  uint uVar1;
  uint in_r1;
  double dVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (0x3fe921fb < (in_r1 & 0x7fffffff)) {
    if ((in_r1 & 0x7fffffff) < 0x7ff00000) {
      uVar1 = __ieee754_rem_pio2(in_r0,in_r1,&local_28);
      uVar1 = uVar1 & 3;
      if (uVar1 == 1) {
        dVar2 = (double)__kernel_cos(local_28,uStack_24,local_20,uStack_1c);
      }
      else if (uVar1 == 2) {
        dVar2 = (double)__kernel_sin(local_28,uStack_24,local_20,uStack_1c,1);
      }
      else if (uVar1 == 0) {
        dVar2 = (double)__kernel_sin(local_28,uStack_24,local_20,uStack_1c,1);
      }
      else {
        dVar2 = (double)__kernel_cos(local_28,uStack_24,local_20,uStack_1c);
      }
    }
    else {
      dVar2 = (double)__subdf3();
    }
    return dVar2;
  }
  dVar2 = (double)__kernel_sin(in_r0,in_r1,0,0,0);
  return dVar2;
}


////>>0x08009798>>trunc>>////

double trunc(double __x)

{
  int in_r1;
  int iVar1;
  double in_d0;
  
  iVar1 = ((uint)(in_r1 << 1) >> 0x15) - 0x3ff;
  if (iVar1 < 0x14) {
    if (iVar1 < 0) {
      return in_d0;
    }
  }
  else {
    if (iVar1 < 0x34) {
      return in_d0;
    }
    if (iVar1 != 0x400) {
      return in_d0;
    }
    in_d0 = (double)__aeabi_dadd();
  }
  return in_d0;
}


////>>0x08009818>>atan2>>////

void atan2(uint param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  int iVar1;
  undefined4 unaff_r4;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar3 = param_4 & 0x7fffffff;
  if (((uVar3 | (-param_3 | param_3) >> 0x1f) < 0x7ff00001) &&
     (uVar4 = param_2 & 0x7fffffff, (uVar4 | (-param_1 | param_1) >> 0x1f) < 0x7ff00001)) {
    if ((param_4 + 0xc0100000 | param_3) == 0) {
      atan(param_5);
      return;
    }
    uVar2 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
    if (((((uVar4 | param_1) != 0) && ((uVar3 | param_3) != 0)) && (uVar3 != 0x7ff00000)) &&
       (uVar4 != 0x7ff00000)) {
      iVar1 = (int)(uVar4 - uVar3) >> 0x14;
      if (((int)(uVar4 - uVar3) < 0x3d00000) &&
         ((-1 < (int)param_4 || (iVar1 + 0x3c < 0 == SCARRY4(iVar1,0x3c))))) {
        __divdf3(param_1,param_2,param_3,param_4);
        fabs((double)CONCAT44(unaff_r4,param_4));
        atan((double)CONCAT44(unaff_r4,param_4));
      }
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          uVar5 = __subdf3();
          __subdf3(0x54442d18,0x400921fb,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        }
        else if (uVar2 != 0) {
          uVar5 = __subdf3();
          __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x54442d18,0x400921fb);
        }
      }
    }
  }
  else {
    __aeabi_dadd(param_3,param_4,param_1,param_2);
  }
  return;
}


////>>0x0800981c>>hypot>>////

/* WARNING: Removing unreachable block (ram,0x080098b6) */

double hypot(double __x,double __y)

{
  int iVar1;
  undefined4 *puVar2;
  double dVar3;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  int in_stack_ffffffb0;
  char *in_stack_ffffffb4;
  
  dVar3 = (double)__ieee754_hypot();
  if ((((__fdlib_version != -1) &&
       (iVar1 = finite((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0)), dVar3 = extraout_d0,
       iVar1 == 0)) &&
      (iVar1 = finite((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0)), dVar3 = extraout_d0_00
      , iVar1 != 0)) &&
     ((iVar1 = finite((double)CONCAT44(in_stack_ffffffb4,in_stack_ffffffb0)), dVar3 = extraout_d0_01
      , iVar1 != 0 &&
      (((__fdlib_version != '\0' && (__fdlib_version == '\x02')) ||
       (iVar1 = matherr((exception *)&stack0xffffffb0), dVar3 = extraout_d0_03, iVar1 == 0)))))) {
    puVar2 = (undefined4 *)__errno();
    *puVar2 = 0x22;
    dVar3 = extraout_d0_02;
  }
  return dVar3;
}


////>>0x080098d0>>sqrt>>////

double sqrt(double __x)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  double dVar5;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  undefined local_50 [24];
  undefined8 local_38;
  int local_30;
  
  dVar5 = (double)__ieee754_sqrt();
  cVar1 = __fdlib_version;
  if (((__fdlib_version == -1) || (local_30 = __unorddf2(), dVar5 = extraout_d0, local_30 != 0)) ||
     (iVar2 = __aeabi_dcmplt(), dVar5 = extraout_d0_00, iVar2 == 0)) {
    return dVar5;
  }
  local_50._0_4_ = 1;
  local_50._4_4_ = "sqrt";
  if (cVar1 == '\0') {
    local_38 = 0.0;
LAB_0800996c:
    iVar2 = matherr((exception *)local_50);
    dVar5 = extraout_d0_02;
    if (iVar2 != 0) goto joined_r0x0800997a;
  }
  else {
    local_38 = (double)__divdf3(0,0,0,0);
    if (cVar1 != '\x02') goto LAB_0800996c;
  }
  puVar3 = (undefined4 *)__errno();
  *puVar3 = 0x21;
  dVar5 = extraout_d0_01;
joined_r0x0800997a:
  if (local_30 != 0) {
    piVar4 = (int *)__errno();
    *piVar4 = local_30;
    dVar5 = extraout_d0_03;
  }
  return dVar5;
}


////>>0x08009990>>__ieee754_atan2>>////

void __ieee754_atan2(uint param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  int iVar1;
  undefined4 unaff_r4;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar3 = param_4 & 0x7fffffff;
  if (((uVar3 | (-param_3 | param_3) >> 0x1f) < 0x7ff00001) &&
     (uVar4 = param_2 & 0x7fffffff, (uVar4 | (-param_1 | param_1) >> 0x1f) < 0x7ff00001)) {
    if ((param_4 + 0xc0100000 | param_3) == 0) {
      atan(param_5);
      return;
    }
    uVar2 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
    if (((((uVar4 | param_1) != 0) && ((uVar3 | param_3) != 0)) && (uVar3 != 0x7ff00000)) &&
       (uVar4 != 0x7ff00000)) {
      iVar1 = (int)(uVar4 - uVar3) >> 0x14;
      if (((int)(uVar4 - uVar3) < 0x3d00000) &&
         ((-1 < (int)param_4 || (iVar1 + 0x3c < 0 == SCARRY4(iVar1,0x3c))))) {
        __divdf3(param_1,param_2,param_3,param_4);
        fabs((double)CONCAT44(unaff_r4,param_4));
        atan((double)CONCAT44(unaff_r4,param_4));
      }
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          uVar5 = __subdf3();
          __subdf3(0x54442d18,0x400921fb,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        }
        else if (uVar2 != 0) {
          uVar5 = __subdf3();
          __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x54442d18,0x400921fb);
        }
      }
    }
  }
  else {
    __aeabi_dadd(param_3,param_4,param_1,param_2);
  }
  return;
}


////>>0x08009b24>>__ieee754_hypot>>////

uint __ieee754_hypot(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_3c;
  
  param_2 = param_2 & 0x7fffffff;
  param_4 = param_4 & 0x7fffffff;
  uVar3 = param_1;
  uVar7 = param_2;
  if (param_2 < param_4) {
    uVar3 = param_3;
    param_3 = param_1;
    uVar7 = param_4;
    param_4 = param_2;
  }
  if (0x3c00000 < (int)(uVar7 - param_4)) {
    uVar3 = __aeabi_dadd(uVar3,uVar7,param_3,param_4);
    return uVar3;
  }
  if (uVar7 < 0x5f300001) {
    local_3c = 0;
  }
  else {
    if (0x7fefffff < uVar7) {
      if ((uVar7 & 0xfffff | uVar3) != 0) {
        uVar3 = __aeabi_dadd(uVar3,uVar7,param_3,param_4);
      }
      if ((param_4 ^ 0x7ff00000 | param_3) != 0) {
        return uVar3;
      }
      return param_3;
    }
    uVar7 = uVar7 + 0xda800000;
    param_4 = param_4 + 0xda800000;
    local_3c = 600;
  }
  uVar11 = CONCAT44(uVar7,uVar3);
  uVar10 = CONCAT44(param_4,param_3);
  if ((int)param_4 < 0x20b00000) {
    if ((int)param_4 < 0x100000) {
      if ((param_4 | param_3) == 0) {
        return uVar3;
      }
      uVar10 = __muldf3(param_3,param_4,0,0x7fd00000);
      uVar11 = __muldf3(uVar3,uVar7,0,0x7fd00000);
      local_3c = local_3c + -0x3fe;
    }
    else {
      uVar7 = uVar7 + 0x25800000;
      uVar11 = CONCAT44(uVar7,uVar3);
      param_4 = param_4 + 0x25800000;
      uVar10 = CONCAT44(param_4,param_3);
      local_3c = local_3c + -600;
    }
  }
  uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar8 = (undefined4)uVar11;
  iVar6 = (int)((ulonglong)uVar10 >> 0x20);
  uVar5 = (undefined4)uVar10;
  uVar10 = __subdf3(uVar8,uVar9,uVar5,iVar6);
  iVar4 = (int)((ulonglong)uVar10 >> 0x20);
  uVar1 = (undefined4)uVar10;
  iVar2 = __aeabi_dcmplt(uVar5,iVar6,uVar1,iVar4);
  if (iVar2 == 0) {
    uVar10 = __muldf3(0,param_4,0);
    uVar11 = __muldf3(uVar1,iVar4 + -0x80000000,uVar1,iVar4);
    uVar12 = __aeabi_dadd(uVar8,uVar9,uVar8,uVar9);
    uVar12 = __subdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,uVar7 + 0x100000);
    uVar12 = __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar5,iVar6);
    uVar13 = __subdf3(uVar5,iVar6,0,param_4);
    uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,uVar7 + 0x100000);
    uVar12 = __aeabi_dadd((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
    uVar11 = __subdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                      (int)((ulonglong)uVar12 >> 0x20));
    __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
             (int)((ulonglong)uVar11 >> 0x20));
    uVar10 = __ieee754_sqrt();
  }
  else {
    uVar10 = __muldf3(0,uVar7,0,uVar7);
    uVar11 = __muldf3(uVar5,iVar6 + -0x80000000,uVar5,iVar6);
    uVar12 = __aeabi_dadd(uVar8,uVar9,0,uVar7);
    uVar13 = __subdf3(uVar8,uVar9,0,uVar7);
    uVar12 = __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                      (int)((ulonglong)uVar13 >> 0x20));
    uVar11 = __subdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                      (int)((ulonglong)uVar12 >> 0x20));
    __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
             (int)((ulonglong)uVar11 >> 0x20));
    uVar10 = __ieee754_sqrt();
  }
  uVar3 = (uint)uVar10;
  if (local_3c != 0) {
    uVar3 = __muldf3(uVar3,(int)((ulonglong)uVar10 >> 0x20),0,local_3c * 0x100000 + 0x3ff00000);
  }
  return uVar3;
}


////>>0x08009d78>>__ieee754_rem_pio2>>////

int __ieee754_rem_pio2(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 in_stack_ffffffa8;
  undefined4 in_stack_ffffffac;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar8 = param_2 & 0x7fffffff;
  if (uVar8 < 0x3fe921fc) {
    *(undefined4 *)param_3 = param_1;
    *(uint *)((int)param_3 + 4) = param_2;
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((int)param_3 + 0xc) = 0;
    return 0;
  }
  if (uVar8 < 0x4002d97c) {
    if ((int)param_2 < 1) {
      uVar10 = __aeabi_dadd(param_1,param_2,0x54400000,0x3ff921fb);
      uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar1 = (undefined4)uVar10;
      if (uVar8 != 0x3ff921fb) {
        uVar10 = __aeabi_dadd(uVar1,uVar2,0x1a626331,0x3dd0b461);
        *param_3 = uVar10;
        uVar10 = __subdf3(uVar1,uVar2);
        uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x1a626331,0x3dd0b461);
        param_3[1] = uVar10;
        return -1;
      }
      uVar10 = __aeabi_dadd(uVar1,uVar2,0x1a600000,0x3dd0b461);
      uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar11 = __aeabi_dadd((int)uVar10,uVar1,0x2e037073,0x3ba3198a);
      *param_3 = uVar11;
      uVar10 = __subdf3((int)uVar10,uVar1);
      uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x2e037073,0x3ba3198a);
      param_3[1] = uVar10;
      return -1;
    }
    uVar10 = __subdf3();
    uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar1 = (undefined4)uVar10;
    if (uVar8 != 0x3ff921fb) {
      uVar10 = __subdf3(uVar1,uVar2,0x1a626331,0x3dd0b461);
      *param_3 = uVar10;
      uVar10 = __subdf3(uVar1,uVar2);
      uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x1a626331,0x3dd0b461);
      param_3[1] = uVar10;
      return 1;
    }
    uVar10 = __subdf3(uVar1,uVar2,0x1a600000,0x3dd0b461);
    uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar11 = __subdf3((int)uVar10,uVar1,0x2e037073,0x3ba3198a);
    *param_3 = uVar11;
    uVar10 = __subdf3((int)uVar10,uVar1);
    uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x2e037073,0x3ba3198a);
    param_3[1] = uVar10;
    return 1;
  }
  if (0x413921fb < uVar8) {
    if (0x7fefffff < uVar8) {
      uVar10 = __subdf3(param_1,param_2,param_1,param_2);
      param_3[1] = uVar10;
      *param_3 = uVar10;
      return 0;
    }
    iVar9 = ((int)uVar8 >> 0x14) + -0x416;
    __aeabi_d2iz();
    local_40 = __aeabi_i2d();
    uVar10 = __subdf3(param_1,uVar8 + iVar9 * -0x100000,(int)local_40,
                      (int)((ulonglong)local_40 >> 0x20));
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x41700000);
    __aeabi_d2iz();
    local_38 = __aeabi_i2d();
    uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    local_30 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x41700000);
    __aeabi_dcmpeq((int)local_30,(int)((ulonglong)local_30 >> 0x20),0,0);
    iVar9 = __kernel_rem_pio2(&local_40,param_3,iVar9);
    if (-1 < (int)param_2) {
      return iVar9;
    }
    *(int *)((int)param_3 + 4) = *(int *)((int)param_3 + 4) + -0x80000000;
    *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + -0x80000000;
    return -iVar9;
  }
  fabs((double)CONCAT44(in_stack_ffffffac,in_stack_ffffffa8));
  uVar10 = __muldf3();
  __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3fe00000);
  iVar9 = __aeabi_d2iz();
  uVar10 = __aeabi_i2d();
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar1 = (undefined4)uVar10;
  uVar10 = __muldf3(uVar1,uVar4,0x54400000,0x3ff921fb);
  uVar10 = __subdf3(param_1,extraout_r1,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar2 = (undefined4)uVar10;
  uVar11 = __muldf3(uVar1,uVar4,0x1a626331,0x3dd0b461);
  if ((0x1f < iVar9) || (*(uint *)(&npio2_hw + (iVar9 + -1) * 4) == uVar8)) {
    uVar12 = __subdf3(uVar2,uVar5,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    if ((int)((uVar8 >> 0x14) - ((uint)((int)((ulonglong)uVar12 >> 0x20) << 1) >> 0x15)) < 0x11)
    goto LAB_0800a0ce;
    uVar11 = __muldf3(uVar1,uVar4,0x1a600000,0x3dd0b461);
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = __subdf3(uVar2,uVar5,(int)uVar11,uVar6);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar3 = (undefined4)uVar10;
    uVar12 = __subdf3(uVar2,uVar5,uVar3,uVar7);
    uVar11 = __subdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,uVar6);
    uVar12 = __muldf3(uVar1,uVar4,0x2e037073,0x3ba3198a);
    uVar11 = __subdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                      (int)((ulonglong)uVar11 >> 0x20));
    uVar12 = __subdf3(uVar3,uVar7,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    if ((int)(((int)uVar8 >> 0x14) - ((uint)((int)((ulonglong)uVar12 >> 0x20) << 1) >> 0x15)) < 0x32
       ) goto LAB_0800a0ce;
    uVar11 = __muldf3(uVar1,uVar4,0x2e000000,0x3ba3198a);
    uVar2 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = __subdf3(uVar3,uVar7,(int)uVar11,uVar2);
    uVar12 = __subdf3(uVar3,uVar7);
    uVar11 = __subdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,uVar2);
    uVar12 = __muldf3(uVar1,uVar4,0x252049c1,0x397b839a);
    uVar11 = __subdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                      (int)((ulonglong)uVar11 >> 0x20));
  }
  uVar12 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                    (int)((ulonglong)uVar11 >> 0x20));
LAB_0800a0ce:
  uStack_4c = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_50 = (undefined4)uVar10;
  *param_3 = uVar12;
  uVar10 = __subdf3(local_50,uStack_4c);
  uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                    (int)((ulonglong)uVar11 >> 0x20));
  param_3[1] = uVar10;
  if ((int)param_2 < 0) {
    *(int *)param_3 = (int)uVar12;
    *(int *)((int)param_3 + 4) = (int)((ulonglong)uVar12 >> 0x20) + -0x80000000;
    *(int *)(param_3 + 1) = (int)uVar10;
    *(int *)((int)param_3 + 0xc) = (int)((ulonglong)uVar10 >> 0x20) + -0x80000000;
    iVar9 = -iVar9;
  }
  return iVar9;
}


////>>0x0800a1bc>>__ieee754_sqrt>>////

uint __ieee754_sqrt(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  
  if ((~param_2 & 0x7ff00000) == 0) {
    uVar13 = __muldf3(param_1,param_2,param_1,param_2);
    uVar7 = __aeabi_dadd((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),param_1,param_2);
    return uVar7;
  }
  if ((int)param_2 < 1) {
    if ((param_2 & 0x7fffffff | param_1) == 0) {
      return param_1;
    }
    if (param_2 != 0) {
      uVar13 = __subdf3(param_1,param_2,param_1);
      uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar7 = __divdf3((int)uVar13,uVar4,(int)uVar13,uVar4);
      return uVar7;
    }
    do {
      uVar9 = param_1;
      uVar7 = uVar9 >> 0xb;
      param_2 = param_2 - 0x15;
      param_1 = uVar9 << 0x15;
    } while (uVar7 == 0);
    uVar1 = param_2;
    if (-1 < (int)uVar9) goto LAB_0800a290;
    uVar12 = 0x20;
    uVar5 = 0xffffffff;
    uVar9 = param_1;
  }
  else {
    uVar1 = (int)param_2 >> 0x14;
    uVar7 = param_2;
    uVar9 = param_1;
    if (uVar1 != 0) goto LAB_0800a1da;
LAB_0800a290:
    uVar9 = 0;
    uVar12 = uVar7;
    do {
      uVar5 = uVar9;
      uVar7 = uVar12 << 1;
      iVar10 = uVar12 << 0xc;
      uVar9 = uVar5 + 1;
      uVar12 = uVar7;
    } while (-1 < iVar10);
    uVar12 = 0x20 - uVar9;
    param_2 = uVar1;
    uVar9 = param_1 << (uVar9 & 0xff);
  }
  uVar7 = param_1 >> (uVar12 & 0xff) | uVar7;
  uVar1 = param_2 - uVar5;
LAB_0800a1da:
  uVar7 = uVar7 & 0xfffff | 0x100000;
  if (-1 < (int)(uVar1 << 0x1f)) {
    uVar7 = uVar7 * 2 - ((int)uVar9 >> 0x1f);
    uVar9 = uVar9 << 1;
  }
  uVar12 = 0;
  uVar7 = uVar7 * 2 - ((int)uVar9 >> 0x1f);
  uVar9 = uVar9 << 1;
  uVar1 = 0;
  iVar10 = 0x16;
  uVar5 = 0x200000;
  do {
    iVar2 = uVar1 + uVar5;
    if (iVar2 <= (int)uVar7) {
      uVar7 = uVar7 - iVar2;
      uVar1 = iVar2 + uVar5;
      uVar12 = uVar12 + uVar5;
    }
    iVar10 = iVar10 + -1;
    uVar7 = uVar7 * 2 - ((int)uVar9 >> 0x1f);
    uVar5 = uVar5 >> 1;
    uVar9 = uVar9 << 1;
  } while (iVar10 != 0);
  iVar2 = 0x20;
  uVar6 = 0x80000000;
  iVar10 = 0;
  uVar5 = 0;
  do {
    uVar3 = uVar6 + iVar10;
    uVar11 = uVar1;
    if ((int)uVar1 < (int)uVar7) {
      if ((int)uVar3 < 0) {
LAB_0800a26a:
        if (-1 < (int)(uVar3 + uVar6)) {
          uVar11 = uVar1 + 1;
        }
      }
      uVar8 = uVar7 - uVar1;
      uVar1 = uVar11;
      if (uVar9 < uVar3) {
        uVar8 = uVar8 - 1;
      }
LAB_0800a262:
      iVar10 = uVar3 + uVar6;
      uVar9 = uVar9 - uVar3;
      uVar5 = uVar5 + uVar6;
      uVar7 = uVar8;
    }
    else if ((uVar7 == uVar1) && (uVar3 <= uVar9)) {
      if ((int)uVar3 < 0) goto LAB_0800a26a;
      uVar8 = 0;
      uVar1 = uVar7;
      goto LAB_0800a262;
    }
    iVar2 = iVar2 + -1;
    uVar6 = uVar6 >> 1;
    uVar7 = uVar7 * 2 - ((int)uVar9 >> 0x1f);
    uVar9 = uVar9 << 1;
    if (iVar2 == 0) {
      if ((uVar7 | uVar9) == 0) {
        uVar5 = uVar5 >> 1;
      }
      else if (uVar5 == 0xffffffff) {
        uVar12 = uVar12 + 1;
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + 1 >> 1;
      }
      if ((uVar12 & 1) != 0) {
        uVar5 = uVar5 | 0x80000000;
      }
      return uVar5;
    }
  } while( true );
}


////>>0x0800a348>>__kernel_cos>>////

undefined4 __kernel_cos(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar4 = param_2 & 0x7fffffff;
  if (uVar4 < 0x3e400000) {
    iVar1 = __aeabi_d2iz();
    if (iVar1 == 0) {
      return 0;
    }
    uVar5 = __muldf3(param_1,param_2,param_1,param_2);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    uVar6 = __muldf3(uVar2,uVar3,0xbe8838d4,0xbda8fae9);
    uVar6 = __aeabi_dadd((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0xbdb4b1c4,0x3e21ee9e);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x809c52ad,0x3e927e4f);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = __aeabi_dadd((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x19cb1590,0x3efa01a0);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x16c15177,0x3f56c16c);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = __aeabi_dadd((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x5555554c,0x3fa55555);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
  }
  else {
    uVar5 = __muldf3(param_1,param_2,param_1,param_2);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    uVar6 = __muldf3(uVar2,uVar3,0xbe8838d4,0xbda8fae9);
    uVar6 = __aeabi_dadd((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0xbdb4b1c4,0x3e21ee9e);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x809c52ad,0x3e927e4f);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = __aeabi_dadd((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x19cb1590,0x3efa01a0);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x16c15177,0x3f56c16c);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    uVar6 = __aeabi_dadd((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x5555554c,0x3fa55555);
    uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar3);
    if (0x3fd33332 < uVar4) {
      if (uVar4 < 0x3fe90001) {
        iVar1 = uVar4 - 0x200000;
        uVar5 = __subdf3(0,0x3ff00000,0,iVar1);
      }
      else {
        iVar1 = 0x3fd20000;
        uVar5 = 0x3fe7000000000000;
      }
      uStack_24 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28 = (undefined4)uVar5;
      uVar5 = __muldf3(uVar2,uVar3,0,0x3fe00000);
      uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,iVar1);
      uVar6 = __muldf3(uVar2,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar7 = __muldf3(param_1,param_2,param_3,param_4);
      uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                       (int)((ulonglong)uVar7 >> 0x20));
      uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
      uVar2 = __subdf3(local_28,uStack_24,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      return uVar2;
    }
  }
  uStack_2c = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_30 = (undefined4)uVar6;
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar6 = __muldf3((int)uVar5,uVar2,0,0x3fe00000);
  uVar5 = __muldf3((int)uVar5,uVar2,local_30,uStack_2c);
  uVar7 = __muldf3(param_1,param_2,param_3,param_4);
  uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar7,
                   (int)((ulonglong)uVar7 >> 0x20));
  uVar5 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                   (int)((ulonglong)uVar5 >> 0x20));
  uVar2 = __subdf3(0,0x3ff00000,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  return uVar2;
}


////>>0x0800a5a0>>__kernel_rem_pio2>>////

/* WARNING: Type propagation algorithm not settling */

uint __kernel_rem_pio2(int param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                      int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r1;
  int iVar5;
  uint *puVar6;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar7;
  uint **ppuVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 *puVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 in_stack_fffffd78;
  int local_280;
  int local_26c;
  uint *local_260 [2];
  uint local_258 [20];
  undefined8 uStack_208;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_c8;
  
  iVar16 = *(int *)(&init_jk + param_5 * 4);
  iVar9 = param_4 + -1;
  local_260[1] = (uint *)param_2;
  if (param_3 + 0x14 < 0 == SCARRY4(param_3,0x14)) {
    local_26c = (param_3 + -3) / 0x18;
    iVar10 = (local_26c + 1) * -0x18;
  }
  else {
    iVar10 = -0x18;
    local_26c = 0;
  }
  param_3 = param_3 + iVar10;
  iVar10 = local_26c - iVar9;
  if (-1 < iVar16 + iVar9) {
    iVar23 = iVar16 + iVar9 + 1 + iVar10;
    puVar19 = &uStack_208;
    do {
      while (iVar10 < 0) {
        iVar10 = iVar10 + 1;
        *(undefined4 *)puVar19 = 0;
        *(undefined4 *)((int)puVar19 + 4) = 0;
        puVar19 = puVar19 + 1;
        if (iVar10 == iVar23) goto LAB_0800a626;
      }
      uVar27 = __aeabi_i2d(*(undefined4 *)(param_6 + iVar10 * 4));
      iVar10 = iVar10 + 1;
      *puVar19 = uVar27;
      puVar19 = puVar19 + 1;
    } while (iVar10 != iVar23);
  }
LAB_0800a626:
  puVar11 = (undefined4 *)(param_1 + -8);
  if (-1 < iVar16) {
    puVar17 = &uStack_208 + param_4;
    iVar23 = iVar16 + param_4;
    iVar10 = iVar9;
    puVar19 = &uStack_c8;
    do {
      if (iVar9 < 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = 0;
        puVar24 = puVar11;
        puVar21 = puVar17;
        do {
          puVar20 = puVar24 + 2;
          uVar26 = __muldf3(*puVar20,puVar24[3],*(undefined4 *)(puVar21 + -1),
                            *(undefined4 *)((int)puVar21 + -4));
          uVar27 = __aeabi_dadd((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar26,
                                (int)((ulonglong)uVar26 >> 0x20));
          puVar24 = puVar20;
          puVar21 = puVar21 + -1;
        } while (puVar20 != puVar11 + param_4 * 2);
      }
      iVar10 = iVar10 + 1;
      *puVar19 = uVar27;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    } while (iVar10 != iVar23);
  }
  local_260[0] = local_258 + iVar16 + -1;
  local_280 = iVar16;
  do {
    iVar23 = *(int *)(&uStack_c8 + local_280);
    uVar27 = CONCAT44(*(undefined4 *)((int)&uStack_c8 + local_280 * 8 + 4),iVar23);
    iVar10 = local_280;
    if (0 < local_280) {
      puVar19 = &uStack_c8 + local_280;
      puVar6 = local_258;
      do {
        uVar7 = (undefined4)((ulonglong)uVar27 >> 0x20);
        __muldf3((int)uVar27,uVar7,0,0x3e700000);
        __aeabi_d2iz();
        uVar26 = __aeabi_i2d();
        uVar3 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar28 = __muldf3((int)uVar26,uVar3,0,0x41700000);
        __subdf3((int)uVar27,uVar7,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
        uVar2 = __aeabi_d2iz();
        puVar17 = puVar19 + -1;
        uVar7 = *(undefined4 *)puVar17;
        uVar12 = *(undefined4 *)((int)puVar19 + -4);
        *puVar6 = uVar2;
        uVar27 = __aeabi_dadd((int)uVar26,uVar3,uVar7,uVar12);
        iVar23 = (int)uVar27;
        puVar19 = puVar17;
        puVar6 = puVar6 + 1;
      } while (puVar17 != &uStack_c8);
    }
    scalbn((double)CONCAT44(iVar10,in_stack_fffffd78),iVar23);
    __muldf3();
    floor((double)CONCAT44(iVar10,in_stack_fffffd78));
    uVar27 = __muldf3();
    uVar27 = __subdf3(iVar23,extraout_r1,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
    uVar2 = __aeabi_d2iz();
    uVar26 = __aeabi_i2d();
    uVar27 = __subdf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar26,
                      (int)((ulonglong)uVar26 >> 0x20));
    uVar7 = (undefined4)((ulonglong)uVar27 >> 0x20);
    uVar3 = (undefined4)uVar27;
    if (param_3 < 1) {
      if (param_3 == 0) {
        iVar23 = (int)local_258[iVar10 + -1] >> 0x17;
        goto joined_r0x0800a8b8;
      }
      iVar23 = __aeabi_dcmpge(uVar3,uVar7,0,0x3fe00000);
      if (iVar23 != 0) {
        uVar2 = uVar2 + 1;
        if (iVar10 < 1) {
          uVar27 = __subdf3(0,0x3ff00000,uVar3,uVar7);
          iVar23 = 2;
          goto LAB_0800a7a4;
        }
        iVar23 = 2;
        goto LAB_0800a8c8;
      }
    }
    else {
      iVar5 = (int)local_258[iVar10 + -1] >> (0x18U - param_3 & 0xff);
      uVar13 = local_258[iVar10 + -1] - (iVar5 << (0x18U - param_3 & 0xff));
      iVar23 = (int)uVar13 >> (0x17U - param_3 & 0xff);
      local_258[iVar10 + -1] = uVar13;
      uVar2 = uVar2 + iVar5;
joined_r0x0800a8b8:
      if (0 < iVar23) {
        uVar2 = uVar2 + 1;
        if (iVar10 < 1) {
          bVar25 = false;
        }
        else {
LAB_0800a8c8:
          if (local_258[0] == 0) {
            bVar25 = false;
            if (iVar10 != 1) {
              puVar6 = local_258;
              iVar5 = 1;
              do {
                puVar6 = puVar6 + 1;
                if (*puVar6 != 0) {
                  iVar15 = iVar5 + 1;
                  uVar13 = *puVar6;
                  goto LAB_0800a8e2;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 != iVar10);
              bVar25 = false;
            }
          }
          else {
            iVar15 = 1;
            iVar5 = 0;
            uVar13 = local_258[0];
LAB_0800a8e2:
            local_258[iVar5] = 0x1000000 - uVar13;
            if (iVar15 < iVar10) {
              uVar13 = local_258[iVar15];
              puVar6 = local_258 + iVar15;
              while( true ) {
                puVar14 = puVar6 + 1;
                *puVar6 = 0xffffff - uVar13;
                if (puVar14 == local_258 + iVar10) break;
                uVar13 = *puVar14;
                puVar6 = puVar14;
              }
            }
            bVar25 = true;
          }
        }
        if (0 < param_3) {
          if (param_3 == 1) {
            local_258[iVar10 + -1] = local_258[iVar10 + -1] & 0x7fffff;
          }
          else if (param_3 == 2) {
            local_258[iVar10 + -1] = local_258[iVar10 + -1] & 0x3fffff;
          }
        }
        if (iVar23 == 2) {
          uVar27 = __subdf3(0,0x3ff00000,uVar3,uVar7);
          if (bVar25) {
            uVar3 = 0;
            scalbn((double)CONCAT44(iVar10,in_stack_fffffd78),0);
            uVar27 = __subdf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar3,extraout_r1_00);
          }
        }
      }
    }
LAB_0800a7a4:
    iVar15 = (int)uVar27;
    iVar5 = __aeabi_dcmpeq(iVar15,(int)((ulonglong)uVar27 >> 0x20),0,0);
    if (iVar5 == 0) {
      scalbn((double)CONCAT44(iVar10,in_stack_fffffd78),iVar15);
      iVar9 = __aeabi_dcmpge();
      if (iVar9 == 0) {
        iVar5 = iVar10;
        uVar13 = __aeabi_d2iz(iVar15,extraout_r1_02);
        local_258[iVar5] = uVar13;
        iVar10 = iVar5;
      }
      else {
        __muldf3(iVar15,extraout_r1_02,0,0x3e700000);
        uVar13 = __aeabi_d2iz();
        uVar27 = __aeabi_i2d();
        uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0,0x41700000);
        __subdf3(iVar15,extraout_r1_02,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
        iVar9 = iVar10;
        uVar4 = __aeabi_d2iz();
        iVar5 = iVar10 + 1;
        local_258[iVar10] = uVar4;
        local_258[iVar5] = uVar13;
        iVar10 = iVar9;
      }
      goto LAB_0800a9f6;
    }
    iVar5 = iVar10 + -1;
    if (iVar16 <= iVar5) {
      uVar13 = 0;
      puVar6 = local_258 + iVar10 + 0x3fffffff;
      do {
        puVar14 = puVar6 + -1;
        uVar13 = uVar13 | *puVar6;
        puVar6 = puVar14;
      } while (puVar14 != local_260[0]);
      if (uVar13 != 0) break;
    }
    if (local_258[iVar16 + -1] == 0) {
      local_280 = 1;
      ppuVar8 = local_260 + iVar16;
      do {
        puVar6 = *ppuVar8;
        local_280 = local_280 + 1;
        ppuVar8 = ppuVar8 + -1;
      } while (puVar6 == (uint *)0x0);
      local_280 = iVar10 + local_280;
    }
    else {
      local_280 = iVar10 + 1;
    }
    iVar23 = iVar10 + 1;
    puVar24 = (undefined4 *)(param_6 + (iVar23 + local_26c + 0x3fffffff) * 4);
    puVar19 = &uStack_208 + iVar10 + param_4;
    puVar17 = &uStack_c8 + iVar23;
    do {
      puVar24 = puVar24 + 1;
      uVar27 = __aeabi_i2d(*puVar24);
      *puVar19 = uVar27;
      puVar21 = puVar19 + 1;
      if (iVar9 < 0) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        puVar20 = puVar11;
        while( true ) {
          puVar19 = puVar19 + -1;
          puVar1 = puVar20 + 2;
          uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),*puVar1,puVar20[3]);
          uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                                (int)((ulonglong)uVar27 >> 0x20));
          if (puVar1 == puVar11 + param_4 * 2) break;
          uVar27 = *puVar19;
          puVar20 = puVar1;
        }
      }
      *puVar17 = uVar26;
      iVar23 = iVar23 + 1;
      puVar19 = puVar21;
      puVar17 = puVar17 + 1;
    } while (iVar23 <= local_280);
  } while( true );
  if (local_258[iVar5] == 0) {
    puVar6 = local_258 + iVar10 + 0x3ffffffe;
    do {
      uVar13 = *puVar6;
      iVar5 = iVar5 + -1;
      puVar6 = puVar6 + -1;
    } while (uVar13 == 0);
  }
LAB_0800a9f6:
  uVar3 = 0;
  scalbn((double)CONCAT44(iVar10,in_stack_fffffd78),0);
  uVar27 = CONCAT44(extraout_r1_01,uVar3);
  if (iVar5 < 0) {
    if (2 < param_5) {
      if (param_5 == 3) {
        puVar19 = (undefined8 *)&local_168;
        uVar27 = 0;
LAB_0800abe4:
        if (iVar23 == 0) {
          uVar3 = *(undefined4 *)(puVar19 + 1);
          uVar7 = *(undefined4 *)((int)puVar19 + 0xc);
          *local_260[1] = local_168;
          *(undefined4 *)((int)local_260[1] + 4) = local_164;
          *(undefined8 *)((int)local_260[1] + 0x10) = uVar27;
          *(undefined4 *)((int)local_260[1] + 8) = uVar3;
          *(undefined4 *)((int)local_260[1] + 0xc) = uVar7;
          return uVar2 & 7;
        }
        iVar9 = *(int *)((int)puVar19 + 4);
        *(int *)((int)local_260[1] + 0x10) = (int)uVar27;
        iVar16 = *(int *)((int)puVar19 + 0xc);
        *(undefined4 *)((int)local_260[1] + 8) = *(undefined4 *)(puVar19 + 1);
        *(int *)((int)local_260[1] + 0x14) = (int)((ulonglong)uVar27 >> 0x20) + -0x80000000;
        uVar3 = *(undefined4 *)puVar19;
        *(int *)((int)local_260[1] + 4) = iVar9 + -0x80000000;
        *(int *)((int)local_260[1] + 0xc) = iVar16 + -0x80000000;
        *local_260[1] = uVar3;
        return uVar2 & 7;
      }
      goto LAB_0800ab0e;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_0800ab0e;
      uVar27 = 0;
LAB_0800aafc:
      iVar9 = (int)((ulonglong)uVar27 >> 0x20);
      if (iVar23 != 0) {
        iVar9 = iVar9 + -0x80000000;
      }
      *local_260[1] = (int)uVar27;
      *(int *)((int)local_260[1] + 4) = iVar9;
LAB_0800ab0e:
      return uVar2 & 7;
    }
    uVar27 = 0;
  }
  else {
    puVar17 = &uStack_c8 + iVar5;
    puVar6 = local_258 + iVar5 + 1;
    puVar19 = &uStack_c8 + iVar5 + 1;
    do {
      uVar3 = (undefined4)((ulonglong)uVar27 >> 0x20);
      puVar6 = puVar6 + -1;
      uVar26 = __aeabi_i2d(*puVar6);
      uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,uVar3);
      puVar19 = puVar19 + -1;
      *puVar19 = uVar26;
      uVar27 = __muldf3((int)uVar27,uVar3,0,0x3e700000);
    } while (puVar6 != local_258);
    puVar19 = (undefined8 *)&local_168;
    iVar9 = 0;
    do {
      if (iVar16 < 0) {
        uVar27 = 0;
      }
      else {
        uVar3 = 0x40000000;
        uVar7 = 0x3ff921fb;
        uVar27 = 0;
        iVar10 = 0;
        puVar21 = puVar17;
        puVar11 = &DAT_0800c028;
        while( true ) {
          uVar26 = __muldf3(*(undefined4 *)puVar21,*(undefined4 *)((int)puVar21 + 4),uVar3,uVar7);
          uVar27 = __aeabi_dadd((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar26,
                                (int)((ulonglong)uVar26 >> 0x20));
          iVar10 = iVar10 + 1;
          if ((iVar16 < iVar10) || (iVar9 < iVar10)) break;
          uVar3 = *puVar11;
          uVar7 = puVar11[1];
          puVar21 = puVar21 + 1;
          puVar11 = puVar11 + 2;
        }
      }
      bVar25 = iVar9 != iVar5;
      puVar19[iVar9] = uVar27;
      puVar17 = puVar17 + -1;
      iVar9 = iVar9 + 1;
    } while (bVar25);
    if (2 < param_5) {
      if (param_5 == 3) {
        if (iVar5 != 0) {
          puVar17 = puVar19 + iVar5;
          uVar27 = *puVar17;
          do {
            uVar7 = (undefined4)((ulonglong)uVar27 >> 0x20);
            uVar3 = (undefined4)uVar27;
            uVar12 = *(undefined4 *)(puVar17 + -1);
            uVar22 = *(undefined4 *)((int)puVar17 + -4);
            uVar27 = __aeabi_dadd(uVar3,uVar7,uVar12,uVar22);
            uVar26 = __subdf3(uVar12,uVar22,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
            uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar3,uVar7);
            *puVar17 = uVar26;
            puVar17 = puVar17 + -1;
            *puVar17 = uVar27;
          } while (puVar19 != puVar17);
          if (1 < iVar5) {
            puVar21 = puVar19 + iVar5;
            uVar27 = *puVar21;
            puVar17 = puVar21;
            do {
              uVar7 = (undefined4)((ulonglong)uVar27 >> 0x20);
              uVar3 = (undefined4)uVar27;
              uVar12 = *(undefined4 *)(puVar17 + -1);
              uVar22 = *(undefined4 *)((int)puVar17 + -4);
              uVar27 = __aeabi_dadd(uVar3,uVar7,uVar12,uVar22);
              uVar26 = __subdf3(uVar12,uVar22,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
              uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar3,uVar7);
              *puVar17 = uVar26;
              puVar17 = puVar17 + -1;
              *puVar17 = uVar27;
            } while (&local_160 != puVar17);
            uVar27 = 0;
            puVar18 = puVar19 + 2;
            puVar17 = puVar21 + 1;
            do {
              puVar21 = puVar17 + -1;
              uVar27 = __aeabi_dadd((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),
                                    *(undefined4 *)puVar21,*(undefined4 *)((int)puVar17 + -4));
              puVar17 = puVar21;
            } while (puVar18 != puVar21);
            goto LAB_0800abe4;
          }
        }
        uVar27 = 0;
        goto LAB_0800abe4;
      }
      goto LAB_0800ab0e;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_0800ab0e;
      uVar27 = 0;
      puVar17 = puVar19 + iVar5 + 1;
      do {
        puVar21 = puVar17 + -1;
        uVar27 = __aeabi_dadd((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),*(undefined4 *)puVar21,
                              *(undefined4 *)((int)puVar17 + -4));
        puVar17 = puVar21;
      } while (puVar19 != puVar21);
      goto LAB_0800aafc;
    }
    uVar27 = 0;
    puVar17 = puVar19 + iVar5 + 1;
    do {
      puVar21 = puVar17 + -1;
      uVar27 = __aeabi_dadd((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),*(undefined4 *)puVar21,
                            *(undefined4 *)((int)puVar17 + -4));
      puVar17 = puVar21;
    } while (puVar19 != puVar21);
  }
  iVar9 = (int)((ulonglong)uVar27 >> 0x20);
  uVar3 = (undefined4)uVar27;
  if (iVar23 == 0) {
    *(undefined8 *)local_260[1] = uVar27;
    uVar27 = __subdf3(local_168,local_164,uVar3,iVar9);
    if (iVar5 < 1) goto LAB_0800ad26;
LAB_0800ad04:
    iVar9 = 1;
    puVar19 = (undefined8 *)&local_168;
    do {
      uVar27 = __aeabi_dadd((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),
                            *(undefined4 *)(puVar19 + 1),*(undefined4 *)((int)puVar19 + 0xc));
      iVar9 = iVar9 + 1;
      puVar19 = puVar19 + 1;
    } while (iVar9 <= iVar5);
    if (iVar23 == 0) goto LAB_0800ad26;
  }
  else {
    *local_260[1] = uVar3;
    *(int *)((int)local_260[1] + 4) = iVar9 + -0x80000000;
    uVar27 = __subdf3(local_168,local_164,uVar3,iVar9);
    if (0 < iVar5) goto LAB_0800ad04;
  }
  uVar27 = CONCAT44((int)((ulonglong)uVar27 >> 0x20) + -0x80000000,(int)uVar27);
LAB_0800ad26:
  *(undefined8 *)((int)local_260[1] + 8) = uVar27;
  return uVar2 & 7;
}


////>>0x0800adf0>>__kernel_sin>>////

undefined4
__kernel_sin(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (((param_2 & 0x7fffffff) < 0x3e400000) && (iVar1 = __aeabi_d2iz(), iVar1 == 0)) {
    return param_1;
  }
  uVar7 = __muldf3(param_1,param_2,param_1);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar3 = (undefined4)uVar7;
  uVar7 = __muldf3(param_1,param_2,uVar3,uVar4);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  uVar7 = __muldf3(uVar3,uVar4,0x5acfd57c,0x3de5d93a);
  uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x8a2b9ceb,0x3e5ae5e6);
  uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
  uVar7 = __aeabi_dadd((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x57b1fe7d,0x3ec71de3);
  uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
  uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x19c161d5,0x3f2a01a0);
  uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
  uVar7 = __aeabi_dadd((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x1110f8a6,0x3f811111);
  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (param_5 != 0) {
    uVar8 = __muldf3(param_3,param_4,0,0x3fe00000);
    uVar7 = __muldf3(uVar2,uVar5,(int)uVar7,uVar6);
    uVar7 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                     (int)((ulonglong)uVar7 >> 0x20));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,uVar4);
    uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_3,param_4);
    uVar8 = __muldf3(uVar2,uVar5,0x55555549,0x3fc55555);
    uVar7 = __aeabi_dadd((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                         (int)((ulonglong)uVar8 >> 0x20));
    uVar3 = __subdf3(param_1,param_2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    return uVar3;
  }
  uVar7 = __muldf3(uVar3,uVar4,(int)uVar7,uVar6);
  uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x55555549,0x3fc55555);
  uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar2,uVar5);
  uVar3 = __aeabi_dadd((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_1,param_2);
  return uVar3;
}


////>>0x0800af78>>atan>>////

double atan(double __x)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  uint uVar5;
  int iVar6;
  double in_d0;
  double dVar7;
  double extraout_d0;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 in_stack_ffffffd0;
  uint uVar10;
  
  uVar5 = in_r1 & 0x7fffffff;
  if (uVar5 < 0x44100000) {
    if (uVar5 < 0x3fdc0000) {
      uVar10 = in_r1;
      if (uVar5 < 0x3e200000) {
        uVar8 = __aeabi_dadd(in_r0,in_r1,0x8800759c,0x7e37e43c);
        iVar6 = __aeabi_dcmpgt((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,0x3ff00000);
        if (iVar6 != 0) {
          return extraout_d0;
        }
      }
      iVar6 = -1;
    }
    else {
      fabs((double)CONCAT44(in_r1,in_stack_ffffffd0));
      if (uVar5 < 0x3ff30000) {
        if (uVar5 < 0x3fe60000) {
          uVar8 = __aeabi_dadd();
          uVar8 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,0x3ff00000);
          uVar9 = __aeabi_dadd(in_r0,extraout_r1,0,0x40000000);
          uVar8 = __divdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
          uVar10 = (uint)((ulonglong)uVar8 >> 0x20);
          in_r0 = (int)uVar8;
          iVar6 = 0;
        }
        else {
          uVar8 = __subdf3();
          uVar9 = __aeabi_dadd(in_r0,extraout_r1,0,0x3ff00000);
          uVar8 = __divdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
          uVar10 = (uint)((ulonglong)uVar8 >> 0x20);
          in_r0 = (int)uVar8;
          iVar6 = 1;
        }
      }
      else if (uVar5 < 0x40038000) {
        uVar8 = __subdf3();
        uVar9 = __muldf3(in_r0,extraout_r1,0,0x3ff80000);
        uVar9 = __aeabi_dadd((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
        uVar8 = __divdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
        uVar10 = (uint)((ulonglong)uVar8 >> 0x20);
        in_r0 = (int)uVar8;
        iVar6 = 2;
      }
      else {
        uVar8 = __divdf3(0,0xbff00000,in_r0,extraout_r1);
        uVar10 = (uint)((ulonglong)uVar8 >> 0x20);
        in_r0 = (int)uVar8;
        iVar6 = 3;
      }
    }
    uVar8 = __muldf3(in_r0,uVar10,in_r0);
    uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar1 = (undefined4)uVar8;
    uVar8 = __muldf3(uVar1,uVar3,uVar1,uVar3);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar2 = (undefined4)uVar8;
    uVar8 = __muldf3(uVar2,uVar4,0xe322da11,0x3f90ad3a);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x24760deb,0x3fa97b4b);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar2,uVar4);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0xa0d03d51,0x3fb10d66);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar2,uVar4);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0xc54c206e,0x3fb745cd);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar2,uVar4);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x920083ff,0x3fc24924);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar2,uVar4);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x5555550d,0x3fd55555);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar1,uVar3);
    uVar1 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar9 = __muldf3(uVar2,uVar4,0x2c6a6c2f,0xbfa2b444);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x52defd9a,0x3fadde2d);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar4);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xaf749a6d,0x3fb3b0f2);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar4);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xfe231671,0x3fbc71c6);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar4);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x9998ebc4,0x3fc99999);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar4);
    uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (iVar6 == -1) {
      uVar8 = __aeabi_dadd((int)uVar8,uVar1,(int)uVar9,uVar2);
      uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),in_r0,uVar10);
      dVar7 = (double)__subdf3(in_r0,uVar10,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      return dVar7;
    }
    uVar8 = __aeabi_dadd((int)uVar8,uVar1,(int)uVar9,uVar2);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),in_r0,uVar10);
    uVar8 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),*(undefined4 *)(&atanlo + iVar6 * 8)
                     ,*(undefined4 *)(&UNK_0800c094 + iVar6 * 8));
    uVar8 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),in_r0,uVar10);
    in_d0 = (double)__subdf3(*(undefined4 *)(&atanhi + iVar6 * 8),
                             *(undefined4 *)(&UNK_0800c074 + iVar6 * 8),(int)uVar8,
                             (int)((ulonglong)uVar8 >> 0x20));
    if ((int)in_r1 < 0) {
      return in_d0;
    }
  }
  else if ((0x7ff00000 < uVar5) || ((uVar5 == 0x7ff00000 && (in_r0 != 0)))) {
    dVar7 = (double)__aeabi_dadd();
    return dVar7;
  }
  return in_d0;
}


////>>0x0800b2cc>>fabs>>////

double fabs(double __x)

{
  double in_d0;
  
  return in_d0;
}


////>>0x0800b2d4>>finite>>////

int finite(double __value)

{
  uint in_r1;
  
  return (in_r1 | 0x80000000) + 0x100000 >> 0x1f;
}


////>>0x0800b2e0>>matherr>>////

int matherr(exception *__exc)

{
  return 0;
}


////>>0x0800b2e8>>scalbn>>////

double scalbn(double __x,int __n)

{
  uint in_r1;
  int in_r2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  double in_d0;
  double extraout_d0;
  double dVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(in_r1,__n);
  uVar1 = (in_r1 << 1) >> 0x15;
  if (uVar1 == 0) {
    if ((__n | in_r1 & 0x7fffffff) == 0) {
      return in_d0;
    }
    uVar5 = __muldf3(__n,in_r1,0,0x43500000);
    if (in_r2 < -50000) goto LAB_0800b34a;
    uVar1 = ((uint)((int)((ulonglong)uVar5 >> 0x20) << 1) >> 0x15) - 0x36;
    in_d0 = extraout_d0;
  }
  else if (uVar1 == 0x7ff) {
    dVar4 = (double)__aeabi_dadd(__n,in_r1,__n);
    return dVar4;
  }
  uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
  iVar2 = uVar1 + in_r2;
  if (iVar2 < 0x7ff) {
    if (0 < iVar2) {
      return in_d0;
    }
    if (iVar2 + 0x35 < 0 == SCARRY4(iVar2,0x35)) {
      dVar4 = (double)__muldf3((int)uVar5,uVar3 & 0x800fffff | (iVar2 + 0x36) * 0x100000,0,
                               0x3c900000);
      return dVar4;
    }
    if (in_r2 < 0xc351) {
      uVar5 = CONCAT44(uVar3 & 0x80000000 | 0x1a56e1f,0xc2f8f359);
LAB_0800b34a:
      dVar4 = (double)__muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xc2f8f359,0x1a56e1f);
      return dVar4;
    }
  }
  dVar4 = (double)__muldf3(0x8800759c,uVar3 & 0x80000000 | 0x7e37e43c,0x8800759c,0x7e37e43c);
  return dVar4;
}


////>>0x0800b3dc>>__errno>>////

undefined4 __errno(void)

{
  return _impure_ptr;
}


////>>0x0800b3e8>>__libc_init_array>>////

/* WARNING: Removing unreachable block (ram,0x0800b3f4) */
/* WARNING: Removing unreachable block (ram,0x0800b3f6) */

void __libc_init_array(EVP_PKEY_CTX *param_1)

{
  int iVar1;
  code **ppcVar2;
  
  _init(param_1);
  iVar1 = 0;
  ppcVar2 = (code **)&__preinit_array_end;
  do {
    iVar1 = iVar1 + 1;
    (**ppcVar2)();
    ppcVar2 = ppcVar2 + 1;
  } while (iVar1 != 2);
  return;
}


////>>0x0800b430>>memset>>////

void * memset(void *__s,int __c,size_t __n)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  
  puVar2 = (uint *)__s;
  if (((uint)__s & 3) != 0) {
    uVar5 = __n - 1;
    puVar3 = (uint *)__s;
    if (__n == 0) {
      return __s;
    }
    while( true ) {
      puVar2 = (uint *)((int)puVar3 + 1);
      *(char *)puVar3 = (char)__c;
      __n = uVar5;
      if (((uint)puVar2 & 3) == 0) break;
      bVar6 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      puVar3 = puVar2;
      if (bVar6) {
        return __s;
      }
    }
  }
  if (3 < __n) {
    uVar5 = __c & 0xffU | (__c & 0xffU) << 8;
    uVar5 = uVar5 | uVar5 << 0x10;
    if (0xf < __n) {
      puVar3 = puVar2 + 4;
      do {
        puVar3[-4] = uVar5;
        puVar3[-3] = uVar5;
        puVar3[-2] = uVar5;
        puVar3[-1] = uVar5;
        puVar3 = puVar3 + 4;
      } while (puVar3 != (uint *)((int)puVar2 + (__n - 0x10 & 0xfffffff0) + 0x20));
      uVar1 = __n & 0xc;
      puVar2 = puVar2 + ((__n - 0x10 >> 4) + 1) * 4;
      __n = __n & 0xf;
      if (uVar1 == 0) goto joined_r0x0800b4a8;
    }
    puVar3 = (uint *)((__n - 4 & 0xfffffffc) + 4 + (int)puVar2);
    do {
      puVar4 = puVar2 + 1;
      *puVar2 = uVar5;
      puVar2 = puVar4;
    } while (puVar3 != puVar4);
    __n = __n & 3;
    puVar2 = puVar3;
  }
joined_r0x0800b4a8:
  if (__n != 0) {
    puVar3 = puVar2;
    do {
      puVar4 = (uint *)((int)puVar3 + 1);
      *(char *)puVar3 = (char)__c;
      puVar3 = puVar4;
    } while ((uint *)(__n + (int)puVar2) != puVar4);
  }
  return __s;
}


////>>0x0800b4d0>>register_fini>>////

/* WARNING: Removing unreachable block (ram,0x0800b4d4) */

void register_fini(void)

{
  return;
}


////>>0x0800b4e4>>atexit>>////

int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __register_exitproc(0,__func,0);
  return iVar1;
}


////>>0x0800b4f0>>__libc_fini_array>>////

void __libc_fini_array(void)

{
  int iVar1;
  code **ppcVar2;
  
  iVar1 = 1;
  ppcVar2 = (code **)&__do_global_dtors_aux_fini_array_entry;
  do {
    iVar1 = iVar1 + -1;
    (**ppcVar2)();
    ppcVar2 = ppcVar2 + -1;
  } while (iVar1 != 0);
  _fini();
  return;
}


////>>0x0800b51c>>__retarget_lock_acquire_recursive>>////

void __retarget_lock_acquire_recursive(void)

{
  return;
}


////>>0x0800b520>>__retarget_lock_release_recursive>>////

void __retarget_lock_release_recursive(void)

{
  return;
}


////>>0x0800b524>>__register_exitproc>>////

undefined4 __register_exitproc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  __retarget_lock_acquire_recursive(__atexit_recursive_mutex);
  if (DAT_20000168 == (undefined *)0x0) {
    DAT_20000168 = &DAT_2000016c;
  }
  puVar1 = DAT_20000168;
  uVar4 = *(uint *)(DAT_20000168 + 4);
  if ((int)uVar4 < 0x20) {
    if (param_1 != 0) {
      *(undefined4 *)(DAT_20000168 + uVar4 * 4 + 0x88) = param_3;
      uVar3 = 1 << (uVar4 & 0xff);
      *(uint *)(puVar1 + 0x188) = *(uint *)(puVar1 + 0x188) | uVar3;
      *(undefined4 *)(puVar1 + uVar4 * 4 + 0x108) = param_4;
      if (param_1 == 2) {
        *(uint *)(puVar1 + 0x18c) = uVar3 | *(uint *)(puVar1 + 0x18c);
      }
    }
    uVar2 = __atexit_recursive_mutex;
    *(uint *)(puVar1 + 4) = uVar4 + 1;
    *(undefined4 *)(puVar1 + (uVar4 + 2) * 4) = param_2;
    __retarget_lock_release_recursive(uVar2);
    uVar2 = 0;
  }
  else {
    __retarget_lock_release_recursive(__atexit_recursive_mutex);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


////>>0x0800b5b0>>_init>>////

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}


////>>0x0800b5bc>>_fini>>////

void _fini(void)

{
  return;
}


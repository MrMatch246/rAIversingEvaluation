java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x08000188>>FUN_08000188>>////

/* WARNING: Removing unreachable block (ram,0x08000194) */

undefined4 FUN_08000188(undefined4 param_1)

{
  if ((char)DAT_2000044c == '\0') {
    DAT_2000044c._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x080001ac>>FUN_080001ac>>////

/* WARNING: Removing unreachable block (ram,0x080001b2) */

undefined8 FUN_080001ac(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}


////>>0x080001c8>>FUN_080001c8>>////

void FUN_080001c8(void)

{
  return;
}


////>>0x080001d4>>FUN_080001d4>>////

void FUN_080001d4(void)

{
  return;
}


////>>0x080001e0>>FUN_080001e0>>////

void FUN_080001e0(void)

{
  return;
}


////>>0x080001ec>>FUN_080001ec>>////

void FUN_080001ec(void)

{
  return;
}


////>>0x080001f8>>FUN_080001f8>>////

void FUN_080001f8(void)

{
  DAT_20000468 = 0;
  coolant_stop();
  return;
}


////>>0x08000210>>FUN_08000210>>////

void FUN_08000210(void)

{
  coolant_mist_off();
  coolant_flood_off();
  return;
}


////>>0x08000220>>FUN_08000220>>////

void FUN_08000220(char param_1)

{
  if (param_1 != DAT_20000468) {
    plan_synchronize();
    if (param_1 == '\x01') {
      coolant_flood_on();
      DAT_20000468 = param_1;
    }
    else if (param_1 == '\x02') {
      coolant_mist_on();
      DAT_20000468 = param_1;
    }
    else {
      coolant_stop();
      DAT_20000468 = param_1;
    }
  }
  return;
}


////>>0x08000268>>FUN_08000268>>////



int FUN_08000268(void)

{
  int iVar1;
  
  iVar1 = HAL_GetTick();
  return (iVar1 + 1) * 1000 - _DAT_e000e018 / 0xa8;
}


////>>0x080002a0>>FUN_080002a0>>////

void FUN_080002a0(undefined4 param_1)

{
  HAL_Delay(param_1);
  return;
}


////>>0x080002b6>>FUN_080002b6>>////

void FUN_080002b6(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = get_current_usecs();
  uVar2 = (uint)(lVar4 + (ulonglong)param_1 >> 0x20);
  do {
    uVar5 = get_current_usecs();
    uVar1 = (uint)((ulonglong)uVar5 >> 0x20);
    bVar3 = uVar2 <= uVar1;
    if (uVar1 == uVar2) {
      bVar3 = (uint)(lVar4 + (ulonglong)param_1) <= (uint)uVar5;
    }
  } while (!bVar3);
  return;
}


////>>0x080002f0>>FUN_080002f0>>////

void FUN_080002f0(void)

{
  memset(&DAT_20000470,0xff,4);
  DAT_2000046c = 1;
  return;
}


////>>0x08000310>>FUN_08000310>>////

undefined FUN_08000310(uint param_1)

{
  if (DAT_2000046c == 0) {
    eeprom_init();
  }
  return (&DAT_20000470)[param_1 & 0x3ff];
}


////>>0x08000340>>FUN_08000340>>////

void FUN_08000340(uint param_1,undefined param_2)

{
  if (DAT_2000046c == 0) {
    eeprom_init();
  }
  (&DAT_20000470)[param_1 & 0x3ff] = param_2;
  return;
}


////>>0x08000374>>FUN_08000374>>////

void FUN_08000374(int param_1,char *param_2,int param_3)

{
  int local_1c;
  char *local_18;
  int local_14;
  char local_9;
  
  local_9 = '\0';
  local_1c = param_3;
  local_18 = param_2;
  local_14 = param_1;
  if (DAT_2000046c == 0) {
    eeprom_init();
    local_18 = param_2;
    local_14 = param_1;
  }
  for (; local_1c != 0; local_1c = local_1c + -1) {
    local_9 = (local_9 != '\0') + *local_18;
    eeprom_put_char(local_14,*local_18);
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
  }
  eeprom_put_char(local_14,local_9);
  return;
}


////>>0x080003ec>>FUN_080003ec>>////

bool FUN_080003ec(char *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int local_1c;
  int local_18;
  char *local_14;
  byte local_9;
  
  local_9 = 0;
  local_1c = param_3;
  local_18 = param_2;
  local_14 = param_1;
  if (DAT_2000046c == 0) {
    eeprom_init();
    local_18 = param_2;
    local_14 = param_1;
  }
  for (; local_1c != 0; local_1c = local_1c + -1) {
    cVar1 = eeprom_get_char(local_18);
    local_9 = cVar1 + (local_9 != 0);
    *local_14 = cVar1;
    local_18 = local_18 + 1;
    local_14 = local_14 + 1;
  }
  uVar2 = eeprom_get_char(local_18);
  return local_9 == uVar2;
}


////>>0x08000478>>FUN_08000478>>////

void FUN_08000478(undefined param_1,undefined param_2,undefined param_3)

{
  DAT_20000e89 = param_1;
  DAT_20000e8a = param_2;
  DAT_20000e8b = param_3;
  return;
}


////>>0x080004ac>>FUN_080004ac>>////

void FUN_080004ac(void)

{
  int iVar1;
  
  memset(&DAT_20000e70,0,0x38);
  DAT_20000e78 = DAT_20000ecc;
  select_plane(0,1,2);
  DAT_20000e74 = 1;
  iVar1 = settings_read_coord_data(DAT_20000e8c,&DAT_20000e90);
  if (iVar1 == 0) {
    report_status_message(10);
  }
  return;
}


////>>0x080004fc>>FUN_080004fc>>////

void FUN_080004fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = __floatsisf(param_1);
  DAT_20000e7c = __aeabi_fdiv(uVar1,DAT_20000ebc);
  uVar1 = __floatsisf(param_2);
  DAT_20000e80 = __aeabi_fdiv(uVar1,DAT_20000ec0);
  uVar1 = __floatsisf(param_3);
  DAT_20000e84 = __aeabi_fdiv(uVar1,DAT_20000ec4);
  return;
}


////>>0x0800056c>>FUN_0800056c>>////

undefined4 FUN_0800056c(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_20000e73 != '\0') {
    uVar1 = __aeabi_f2d(param_1);
    uVar1 = __muldf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x66666666,0x40396666);
    param_1 = __truncdfsf2((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  }
  return param_1;
}


////>>0x080005b4>>FUN_080005b4>>////

char FUN_080005b4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_94 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [6];
  undefined4 local_58;
  byte local_52;
  undefined local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined local_45;
  uint local_44;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  char local_39;
  uint local_38;
  undefined4 local_34;
  sbyte local_2f;
  char local_2e;
  char local_2d;
  undefined4 local_2c;
  byte local_27;
  ushort local_26;
  uint local_24;
  
  if (DAT_20000ea9 == '\x06') {
    cVar3 = '\f';
  }
  else {
    local_51 = 0;
    local_26 = 0;
    local_27 = 0;
    local_2c = 0xbf800000;
    local_2d = '\0';
    local_2e = '\0';
    memset(auStack_70 + 3,0,0xc);
    memset(auStack_70,0,0xc);
    DAT_20000e70 = '\0';
    local_2f = 0;
    while (iVar1 = next_statement(&local_52,auStack_70 + 6,param_1,&local_51), iVar1 != 0) {
      uVar6 = __aeabi_f2d(local_58);
      uVar6 = trunc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      local_24 = __aeabi_d2iz((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      if (local_52 == 0x47) {
        switch(local_24) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 0x50:
          local_2f = 2;
          break;
        case 4:
        case 10:
        case 0x1c:
        case 0x1e:
        case 0x35:
        case 0x5c:
          local_2f = 1;
          break;
        case 0x11:
        case 0x12:
        case 0x13:
          local_2f = 3;
          break;
        case 0x14:
        case 0x15:
          local_2f = 7;
          break;
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
          local_2f = 9;
          break;
        case 0x5a:
        case 0x5b:
          local_2f = 4;
          break;
        case 0x5d:
        case 0x5e:
          local_2f = 6;
        }
        switch(local_24) {
        case 0:
          DAT_20000e71 = '\0';
          break;
        case 1:
          DAT_20000e71 = '\x01';
          break;
        case 2:
          DAT_20000e71 = '\x02';
          break;
        case 3:
          DAT_20000e71 = '\x03';
          break;
        case 4:
          local_2e = '\x01';
          break;
        default:
          DAT_20000e70 = '\x03';
          break;
        case 10:
          local_2e = '\x02';
          break;
        case 0x11:
          select_plane(0,1,2);
          break;
        case 0x12:
          select_plane(2,0,1);
          break;
        case 0x13:
          select_plane(1,2,0);
          break;
        case 0x14:
          DAT_20000e73 = 1;
          break;
        case 0x15:
          DAT_20000e73 = 0;
          break;
        case 0x1c:
        case 0x1e:
          uVar2 = __aeabi_fmul(local_58,0x41200000);
          uVar6 = __aeabi_f2d(uVar2);
          uVar6 = trunc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          local_24 = __aeabi_d2iz((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          switch(local_24) {
          case 0x118:
            local_2e = '\x03';
            break;
          case 0x119:
            local_2e = '\x04';
            break;
          default:
            DAT_20000e70 = '\x03';
            break;
          case 300:
            local_2e = '\x05';
            break;
          case 0x12d:
            local_2e = '\x06';
          }
          break;
        case 0x35:
          local_2d = '\x01';
          break;
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
          DAT_20000e8c = (char)local_24 - 0x36;
          break;
        case 0x50:
          DAT_20000e71 = '\x04';
          break;
        case 0x5a:
          DAT_20000e74 = '\x01';
          break;
        case 0x5b:
          DAT_20000e74 = '\0';
          break;
        case 0x5c:
          uVar2 = __aeabi_fmul(local_58,0x41200000);
          uVar6 = __aeabi_f2d(uVar2);
          uVar6 = trunc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          local_24 = __aeabi_d2iz((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          if (local_24 == 0x398) {
            local_2e = '\a';
          }
          else if (local_24 == 0x399) {
            local_2e = '\b';
          }
          else {
            DAT_20000e70 = '\x03';
          }
          break;
        case 0x5d:
          DAT_20000e72 = '\x01';
          break;
        case 0x5e:
          DAT_20000e72 = '\0';
        }
      }
      else if (local_52 == 0x4d) {
        if (local_24 == 0x1e) {
LAB_08000b96:
          local_2f = 5;
        }
        else if ((int)local_24 < 0x1f) {
          if ((int)local_24 < 3) {
            if (-1 < (int)local_24) goto LAB_08000b96;
          }
          else if (local_24 - 3 < 3) {
            local_2f = 8;
          }
        }
        switch(local_24) {
        case 0:
          DAT_20000e75 = '\x01';
          break;
        case 1:
          break;
        case 2:
        case 0x1e:
          DAT_20000e75 = '\x02';
          break;
        case 3:
          DAT_20000e76 = '\x01';
          break;
        case 4:
          DAT_20000e76 = -1;
          break;
        case 5:
          DAT_20000e76 = '\0';
          break;
        default:
          DAT_20000e70 = '\x03';
          break;
        case 7:
          DAT_20000e77 = 2;
          break;
        case 8:
          DAT_20000e77 = 1;
          break;
        case 9:
          DAT_20000e77 = 0;
        }
      }
      if (local_2f != 0) {
        if (((int)(uint)local_26 >> local_2f & 1U) == 0) {
          local_26 = local_26 | (ushort)(1 << local_2f);
        }
        else {
          DAT_20000e70 = '\x05';
        }
        local_2f = 0;
      }
    }
    cVar3 = DAT_20000e70;
    if (DAT_20000e70 == '\0') {
      local_34 = 0;
      local_38 = 0;
      local_39 = '\0';
      local_51 = 0;
switchD_08000d18_caseD_47:
      iVar1 = next_statement(&local_52,auStack_70 + 6,param_1,&local_51);
      if (iVar1 != 0) {
        switch(local_52) {
        case 0x46:
          iVar1 = __aeabi_fcmple(local_58,0);
          if (iVar1 != 0) {
            DAT_20000e70 = '\x06';
          }
          if (DAT_20000e72 == '\0') {
            DAT_20000e78 = to_millimeters(local_58);
          }
          else {
            local_2c = to_millimeters(local_58);
          }
          break;
        case 0x47:
        case 0x4d:
        case 0x4e:
          break;
        default:
          DAT_20000e70 = '\x03';
          break;
        case 0x49:
        case 0x4a:
        case 0x4b:
          uVar4 = (uint)local_52;
          uVar2 = to_millimeters(local_58);
          auStack_70[uVar4 - 0x49] = uVar2;
          break;
        case 0x4c:
          uVar6 = __aeabi_f2d(local_58);
          uVar6 = trunc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          local_39 = __aeabi_d2uiz((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          break;
        case 0x50:
          local_34 = local_58;
          break;
        case 0x52:
          local_38 = to_millimeters(local_58);
          break;
        case 0x53:
          iVar1 = __aeabi_fcmplt(local_58,0);
          if (iVar1 != 0) {
            DAT_20000e70 = '\x06';
          }
          break;
        case 0x54:
          iVar1 = __aeabi_fcmplt(local_58,0);
          if (iVar1 != 0) {
            DAT_20000e70 = '\x06';
          }
          uVar6 = __aeabi_f2d(local_58);
          uVar6 = trunc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          DAT_20000e88 = __aeabi_d2uiz((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          break;
        case 0x58:
          auStack_70[3] = to_millimeters(local_58);
          local_27 = local_27 | 1;
          break;
        case 0x59:
          auStack_70[4] = to_millimeters(local_58);
          local_27 = local_27 | 2;
          break;
        case 0x5a:
          auStack_70[5] = to_millimeters(local_58);
          local_27 = local_27 | 4;
        }
        goto switchD_08000d18_caseD_47;
      }
      cVar3 = DAT_20000e70;
      if (DAT_20000e70 == '\0') {
        if (DAT_20000ea9 != '\a') {
          spindle_run((int)DAT_20000e76);
          coolant_run(DAT_20000e77);
        }
        if ((local_26 & 0x200) != 0) {
          iVar1 = settings_read_coord_data(DAT_20000e8c,&local_7c);
          if (iVar1 == 0) {
            return '\n';
          }
          DAT_20000e90 = local_7c;
          DAT_20000e94 = uStack_78;
          DAT_20000e98 = uStack_74;
        }
        switch(local_2e) {
        case '\x01':
          iVar1 = __aeabi_fcmplt(local_34,0);
          if (iVar1 == 0) {
            if (DAT_20000ea9 != '\a') {
              mc_dwell(local_34);
            }
          }
          else {
            DAT_20000e70 = '\x06';
          }
          break;
        case '\x02':
          uVar6 = __aeabi_f2d(local_34);
          uVar6 = trunc((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          local_24 = __aeabi_d2iz((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          if ((((local_39 == '\x02') || (local_39 == '\x14')) && (-1 < (int)local_24)) &&
             ((int)local_24 < 7)) {
            if ((local_27 == 0) && (local_39 == '\x02')) {
              DAT_20000e70 = '\x06';
            }
            else {
              if ((int)local_24 < 1) {
                local_24 = (uint)DAT_20000e8c;
              }
              else {
                local_24 = local_24 - 1;
              }
              iVar1 = settings_read_coord_data(local_24 & 0xff,local_94);
              if (iVar1 == 0) {
                return '\n';
              }
              for (local_3a = 0; local_3a < 3; local_3a = local_3a + 1) {
                if (((int)(uint)local_27 >> local_3a & 1U) != 0) {
                  if (local_39 == '\x14') {
                    uVar4 = (uint)local_3a;
                    uVar2 = __aeabi_fsub(*(undefined4 *)(&DAT_20000e74 + (local_3a + 2) * 4),
                                         auStack_70[local_3a + 3]);
                    local_94[uVar4] = uVar2;
                  }
                  else {
                    local_94[local_3a] = auStack_70[local_3a + 3];
                  }
                }
              }
              settings_write_coord_data(local_24 & 0xff,local_94);
              if (local_24 == DAT_20000e8c) {
                DAT_20000e90 = local_94[0];
                DAT_20000e94 = local_94[1];
                DAT_20000e98 = local_94[2];
              }
            }
          }
          else {
            DAT_20000e70 = '\x03';
          }
          local_27 = 0;
          break;
        case '\x03':
        case '\x05':
          if (local_27 != 0) {
            for (local_3b = 0; local_3b < 3; local_3b = local_3b + 1) {
              if (((int)(uint)local_27 >> local_3b & 1U) == 0) {
                auStack_70[local_3b + 3] = *(undefined4 *)(&DAT_20000e74 + (local_3b + 2) * 4);
              }
              else if (DAT_20000e74 == '\0') {
                uVar4 = (uint)local_3b;
                uVar2 = __addsf3(auStack_70[local_3b + 3],
                                 *(undefined4 *)(&DAT_20000e74 + (local_3b + 2) * 4));
                auStack_70[uVar4 + 3] = uVar2;
              }
              else {
                uVar5 = auStack_70[local_3b + 3];
                uVar2 = __addsf3(*(undefined4 *)(&DAT_20000e70 + (local_3b + 8) * 4),
                                 *(undefined4 *)(&DAT_20000e74 + (local_3b + 10) * 4));
                uVar4 = (uint)local_3b;
                uVar2 = __addsf3(uVar5,uVar2);
                auStack_70[uVar4 + 3] = uVar2;
              }
            }
            mc_line(auStack_70[3],auStack_70[4],auStack_70[5],DAT_20000ed0,0);
          }
          if (local_2e == '\x05') {
            iVar1 = settings_read_coord_data(7,local_94 + 3);
            if (iVar1 == 0) {
              return '\n';
            }
          }
          else {
            iVar1 = settings_read_coord_data(6,local_94 + 3);
            if (iVar1 == 0) {
              return '\n';
            }
          }
          mc_line(local_94[3],local_84,local_80,DAT_20000ed0,0);
          DAT_20000e7c = local_94[3];
          DAT_20000e80 = local_84;
          DAT_20000e84 = local_80;
          local_27 = 0;
          break;
        case '\x04':
        case '\x06':
          if (local_2e == '\x06') {
            settings_write_coord_data(7,&DAT_20000e7c);
          }
          else {
            settings_write_coord_data(6,&DAT_20000e7c);
          }
          break;
        case '\a':
          if (local_27 == 0) {
            DAT_20000e70 = '\x06';
          }
          else {
            for (local_3c = 0; local_3c < 3; local_3c = local_3c + 1) {
              if (((int)(uint)local_27 >> local_3c & 1U) != 0) {
                uVar2 = __aeabi_fsub(*(undefined4 *)(&DAT_20000e74 + (local_3c + 2) * 4),
                                     *(undefined4 *)(&DAT_20000e70 + (local_3c + 8) * 4));
                uVar4 = (uint)local_3c;
                uVar2 = __aeabi_fsub(uVar2,auStack_70[local_3c + 3]);
                *(undefined4 *)(&DAT_20000e74 + (uVar4 + 10) * 4) = uVar2;
              }
            }
          }
          local_27 = 0;
          break;
        case '\b':
          memset(&DAT_20000e9c,0,0xc);
        }
        if (((local_26 & 4) != 0) || (local_27 != 0)) {
          if ((DAT_20000e72 != '\0') &&
             ((iVar1 = __aeabi_fcmplt(local_2c,0), iVar1 != 0 && (DAT_20000e71 != '\x04')))) {
            DAT_20000e70 = '\x06';
          }
          if (((local_2d != '\0') && (DAT_20000e71 != '\0')) && (DAT_20000e71 != '\x01')) {
            DAT_20000e70 = '\x06';
          }
          if (DAT_20000e70 != '\0') {
            return DAT_20000e70;
          }
          for (local_3d = 0; local_3d < 3; local_3d = local_3d + 1) {
            if (((int)(uint)local_27 >> local_3d & 1U) == 0) {
              auStack_70[local_3d + 3] = *(undefined4 *)(&DAT_20000e74 + (local_3d + 2) * 4);
            }
            else if (local_2d == '\0') {
              if (DAT_20000e74 == '\0') {
                uVar4 = (uint)local_3d;
                uVar2 = __addsf3(auStack_70[local_3d + 3],
                                 *(undefined4 *)(&DAT_20000e74 + (local_3d + 2) * 4));
                auStack_70[uVar4 + 3] = uVar2;
              }
              else {
                uVar5 = auStack_70[local_3d + 3];
                uVar2 = __addsf3(*(undefined4 *)(&DAT_20000e70 + (local_3d + 8) * 4),
                                 *(undefined4 *)(&DAT_20000e74 + (local_3d + 10) * 4));
                uVar4 = (uint)local_3d;
                uVar2 = __addsf3(uVar5,uVar2);
                auStack_70[uVar4 + 3] = uVar2;
              }
            }
          }
          switch(DAT_20000e71) {
          case '\0':
            if (local_27 == 0) {
              DAT_20000e70 = '\x06';
            }
            else {
              mc_line(auStack_70[3],auStack_70[4],auStack_70[5],DAT_20000ed0,0);
            }
            break;
          case '\x01':
            if (local_27 == 0) {
              DAT_20000e70 = '\x06';
            }
            else {
              uVar2 = local_2c;
              if (DAT_20000e72 == '\0') {
                uVar2 = DAT_20000e78;
              }
              mc_line(auStack_70[3],auStack_70[4],auStack_70[5],uVar2,DAT_20000e72);
            }
            break;
          case '\x02':
          case '\x03':
            local_27 = local_27 & ~(byte)(1 << DAT_20000e8b);
            if ((local_27 == 0) ||
               (((iVar1 = __aeabi_fcmpeq(local_38,0), iVar1 != 0 &&
                 (iVar1 = __aeabi_fcmpeq(auStack_70[DAT_20000e89],0), iVar1 != 0)) &&
                (iVar1 = __aeabi_fcmpeq(auStack_70[DAT_20000e8a],0), iVar1 != 0)))) {
              DAT_20000e70 = '\x06';
            }
            else {
              iVar1 = __aeabi_fcmpeq(local_38,0);
              if (iVar1 == 0) {
                local_4c = __aeabi_fsub(auStack_70[DAT_20000e89 + 3],
                                        *(undefined4 *)(&DAT_20000e74 + (DAT_20000e89 + 2) * 4));
                local_50 = __aeabi_fsub(auStack_70[DAT_20000e8a + 3],
                                        *(undefined4 *)(&DAT_20000e74 + (DAT_20000e8a + 2) * 4));
                memset(auStack_70,0,0xc);
                uVar2 = __aeabi_fmul(local_38,0x40800000);
                uVar2 = __aeabi_fmul(uVar2,local_38);
                uVar5 = __aeabi_fmul(local_4c,local_4c);
                uVar2 = __aeabi_fsub(uVar2,uVar5);
                uVar5 = __aeabi_fmul(local_50,local_50);
                local_44 = __aeabi_fsub(uVar2,uVar5);
                iVar1 = __aeabi_fcmplt(local_44,0);
                if (iVar1 != 0) {
                  DAT_20000e70 = 4;
                  return '\x04';
                }
                uVar6 = __aeabi_f2d(local_44);
                uVar6 = sqrt((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
                uVar7 = __aeabi_f2d(local_4c);
                uVar8 = __aeabi_f2d(local_50);
                uVar7 = hypot((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                              (int)((ulonglong)uVar8 >> 0x20));
                uVar6 = __divdf3((int)uVar6,(uint)((ulonglong)uVar6 >> 0x20) ^ 0x80000000,(int)uVar7
                                 ,(int)((ulonglong)uVar7 >> 0x20));
                local_44 = __truncdfsf2((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
                if (DAT_20000e71 == '\x03') {
                  local_44 = local_44 ^ 0x80000000;
                }
                iVar1 = __aeabi_fcmplt(local_38,0);
                if (iVar1 != 0) {
                  local_44 = local_44 ^ 0x80000000;
                  local_38 = local_38 ^ 0x80000000;
                }
                uVar2 = __aeabi_fmul(local_50,local_44);
                uVar2 = __aeabi_fsub(local_4c,uVar2);
                uVar4 = (uint)DAT_20000e89;
                uVar2 = __aeabi_fmul(uVar2,0x3f000000);
                auStack_70[uVar4] = uVar2;
                uVar2 = __aeabi_fmul(local_4c,local_44);
                uVar2 = __addsf3(uVar2,local_50);
                uVar4 = (uint)DAT_20000e8a;
                uVar2 = __aeabi_fmul(uVar2,0x3f000000);
                auStack_70[uVar4] = uVar2;
              }
              else {
                uVar6 = __aeabi_f2d(auStack_70[DAT_20000e89]);
                uVar7 = __aeabi_f2d(auStack_70[DAT_20000e8a]);
                uVar6 = hypot((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                              (int)((ulonglong)uVar7 >> 0x20));
                local_38 = __truncdfsf2((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
              }
              local_45 = DAT_20000e71 == '\x02';
              uVar2 = local_2c;
              if (DAT_20000e72 == '\0') {
                uVar2 = DAT_20000e78;
              }
              mc_arc(&DAT_20000e7c,auStack_70 + 3,auStack_70,DAT_20000e89,DAT_20000e8a,DAT_20000e8b,
                     uVar2,DAT_20000e72,local_38,local_45);
            }
            break;
          case '\x04':
            if (local_27 != 0) {
              DAT_20000e70 = '\x06';
            }
          }
          if (DAT_20000e70 != '\0') {
            return DAT_20000e70;
          }
          DAT_20000e7c = auStack_70[3];
          DAT_20000e80 = auStack_70[4];
          DAT_20000e84 = auStack_70[5];
        }
        cVar3 = DAT_20000e70;
        if (DAT_20000e75 != '\0') {
          plan_synchronize();
          DAT_20000eb8 = 0;
          if (DAT_20000e75 == '\x02') {
            mc_reset();
            cVar3 = DAT_20000e70;
          }
          else {
            DAT_20000e75 = '\0';
            cVar3 = DAT_20000e70;
          }
        }
      }
    }
  }
  return cVar3;
}


////>>0x0800184c>>FUN_0800184c>>////

undefined4 FUN_0800184c(byte *param_1,undefined4 param_2,int param_3,byte *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_3 + (uint)*param_4) == '\0') {
    uVar2 = 0;
  }
  else {
    *param_1 = *(byte *)(param_3 + (uint)*param_4);
    if ((*param_1 < 0x41) || (0x5a < *param_1)) {
      DAT_20000e70 = 2;
      uVar2 = 0;
    }
    else {
      *param_4 = *param_4 + 1;
      iVar1 = read_float(param_3,param_4,param_2);
      if (iVar1 == 0) {
        DAT_20000e70 = 1;
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


////>>0x080018cc>>FUN_080018cc>>////



void FUN_080018cc(uint param_1)

{
  _DAT_40021014 = param_1 | _DAT_40021014 & 0xfffffaaf;
  return;
}


////>>0x080018fc>>FUN_080018fc>>////



void FUN_080018fc(uint param_1)

{
  _DAT_40021014 = param_1 | _DAT_40021014 & 0xfffff55f;
  return;
}


////>>0x0800192c>>FUN_0800192c>>////

void FUN_0800192c(void)

{
  DAT_20000e4c = (uint)((DAT_20000ee4 & 8) != 0);
  return;
}


////>>0x0800195c>>FUN_0800195c>>////

void FUN_0800195c(void)

{
  if ((DAT_20000ea9 != '\x06') && ((DAT_20000eaa & 0x20) == 0)) {
    mc_reset();
    DAT_20000eaa = DAT_20000eaa | 0x40;
  }
  return;
}


////>>0x08001994>>FUN_08001994>>////

void FUN_08001994(byte param_1,char param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_61;
  uint local_5c;
  uint local_58;
  uint local_54;
  ushort local_4e;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  ushort local_36;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  ushort local_1a;
  uint local_18;
  char local_11;
  
  local_11 = '\0';
  memset(&local_5c,0,0xc);
  if ((param_1 & 1) != 0) {
    local_11 = local_11 + '\x01';
    uVar3 = __aeabi_f2d(DAT_20000ebc);
    local_5c = lround((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  if ((param_1 & 2) != 0) {
    local_11 = local_11 + '\x01';
    uVar3 = __aeabi_f2d(DAT_20000ec0);
    local_58 = lround((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  if ((param_1 & 4) != 0) {
    local_11 = local_11 + '\x01';
    uVar3 = __aeabi_f2d(DAT_20000ec4);
    local_54 = lround((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  uVar2 = local_54;
  if (local_54 < local_58) {
    uVar2 = local_58;
  }
  local_40 = local_5c;
  if (local_5c < uVar2) {
    local_40 = uVar2;
  }
  uVar3 = __floatunsidf(local_40);
  uVar4 = __floatunsidf(local_11);
  uVar4 = sqrt((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  uVar3 = __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                   (int)((ulonglong)uVar4 >> 0x20));
  local_44 = __truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = __aeabi_fmul(DAT_20000edc,local_44);
  uVar1 = __aeabi_fdiv(uVar1,0x453b8000);
  uVar3 = __aeabi_f2d(uVar1);
  uVar3 = ceil((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  local_48 = __aeabi_d2uiz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar3 = __floatunsidf(local_11);
  uVar3 = sqrt((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar4 = __aeabi_f2d(param_4);
  uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                   (int)((ulonglong)uVar4 >> 0x20));
  uVar1 = __truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = __aeabi_fmul(local_44,uVar1);
  uVar1 = __aeabi_fdiv(0x4c64e1c0,uVar1);
  uVar3 = __aeabi_f2d(uVar1);
  local_4c = lround((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  local_18 = 75000;
  if (local_4c < 75000) {
    local_18 = local_4c;
  }
  local_4e = DAT_20000ed4;
  local_1a = DAT_20000ed6 ^ DAT_20000ee6 & 0xaa0;
  if (param_2 == '\0') {
    local_1a = local_1a ^ 0xaa0;
  }
  FUN_080018fc(local_1a);
  FUN_080018cc(local_4e);
  local_28 = -(local_40 >> 1);
  local_2c = local_18 - DAT_20000ec9;
  local_30 = 0;
  local_34 = 10000;
  local_61 = param_1;
  local_24 = local_28;
  local_20 = local_28;
  while( true ) {
    local_36 = local_4e;
    local_3c = debounce_rd();
    if (param_3 == '\0') {
      local_3c = local_3c ^ 0x1e;
    }
    if (((local_61 & 1) != 0) && (local_20 = local_20 + local_5c, 0 < local_20)) {
      if ((local_3c & 0x10) == 0) {
        local_61 = local_61 & 0xfe;
      }
      else {
        local_36 = local_36 ^ 0x10;
      }
      local_20 = local_20 - local_40;
    }
    if (((local_61 & 2) != 0) && (local_24 = local_24 + local_58, 0 < local_24)) {
      if ((local_3c & 8) == 0) {
        local_61 = local_61 & 0xfd;
      }
      else {
        local_36 = local_36 ^ 0x440;
      }
      local_24 = local_24 - local_40;
    }
    if (((local_61 & 4) != 0) && (local_28 = local_28 + local_54, 0 < local_28)) {
      if ((local_3c & 4) == 0) {
        local_61 = local_61 & 0xfb;
      }
      else {
        local_36 = local_36 ^ 0x100;
      }
      local_28 = local_28 - local_40;
    }
    if ((local_61 == 0) || ((DAT_20000eaa & 0x10) != 0)) break;
    FUN_080018cc(local_36);
    delay_us(DAT_20000ec9);
    FUN_080018cc(local_4e);
    delay_us(local_2c);
    if ((local_4c < local_18) && (local_34 = local_18 + local_34, 20000 < local_34)) {
      local_34 = local_34 - 20000;
      local_30 = local_48 + local_30;
      local_18 = 60000000 / local_30;
      if (local_18 < local_4c) {
        local_18 = local_4c;
      }
      local_2c = local_18 - DAT_20000ec9;
    }
  }
  return;
}


////>>0x08001d4c>>FUN_08001d4c>>////

void FUN_08001d4c(void)

{
  char cVar1;
  char local_9;
  
  st_wake_up();
  homing_cycle(4,1,0,DAT_20000eec);
  homing_cycle(3,1,0,DAT_20000eec);
  delay_ms(DAT_20000ef0);
  local_9 = '\x02';
  while( true ) {
    cVar1 = local_9 + -1;
    if (local_9 == '\0') break;
    homing_cycle(7,0,1,DAT_20000ee8);
    delay_ms(DAT_20000ef0);
    local_9 = cVar1;
    if ('\0' < cVar1) {
      homing_cycle(7,1,0,DAT_20000ee8);
      delay_ms(DAT_20000ef0);
    }
  }
  st_go_idle();
  return;
}


////>>0x08001ddc>>FUN_08001ddc>>////

void FUN_08001ddc(void)

{
  serial_init();
  settings_init();
  st_init();
  memset(&DAT_20000ea8,0,0x14);
  DAT_20000ea8 = '\x01';
  DAT_20000ea9 = '\x01';
  do {
    if (DAT_20000ea8 != '\0') {
      serial_reset_read_buffer();
      plan_init();
      gc_init();
      protocol_init();
      spindle_init();
      coolant_init();
      limits_init();
      st_reset();
      sys_sync_current_position();
      DAT_20000ea8 = '\0';
      DAT_20000eaa = 0;
      if ((DAT_20000ee4 & 2) != 0) {
        DAT_20000eb8 = 1;
      }
      if ((DAT_20000ea9 == '\x01') && ((DAT_20000ee4 & 0x10) != 0)) {
        DAT_20000ea9 = '\x06';
      }
      if (DAT_20000ea9 == '\x06') {
        report_feedback_message(2);
      }
      else {
        DAT_20000ea9 = '\0';
        protocol_execute_startup();
      }
    }
    protocol_execute_runtime();
    protocol_process();
  } while( true );
}


////>>0x08001e98>>FUN_08001e98>>////

void FUN_08001e98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined param_5)

{
  int iVar1;
  
  if (DAT_20000ea9 != '\a') {
    do {
      protocol_execute_runtime();
      if (DAT_20000ea8 != '\0') {
        return;
      }
      iVar1 = plan_check_full_buffer();
    } while (iVar1 != 0);
    plan_buffer_line(param_1,param_2,param_3,param_4,param_5);
    if (DAT_20000ea9 == '\0') {
      DAT_20000ea9 = '\x02';
    }
    if (DAT_20000eb8 != '\0') {
      st_cycle_start();
    }
  }
  return;
}


////>>0x08001f00>>FUN_08001f00>>////

void FUN_08001f00(int param_1,undefined4 *param_2,int param_3,byte param_4,byte param_5,byte param_6
                 ,undefined4 param_7,char param_8,undefined4 param_9,char param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  ushort local_42;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_27;
  ushort local_26;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  
  local_2c = __addsf3(*(undefined4 *)((uint)param_4 * 4 + param_1),
                      *(undefined4 *)((uint)param_4 * 4 + param_3));
  local_30 = __addsf3(*(undefined4 *)((uint)param_5 * 4 + param_1),
                      *(undefined4 *)((uint)param_5 * 4 + param_3));
  local_34 = __aeabi_fsub(param_2[param_6],*(undefined4 *)((uint)param_6 * 4 + param_1));
  local_1c = *(uint *)((uint)param_4 * 4 + param_3) ^ 0x80000000;
  local_20 = *(uint *)((uint)param_5 * 4 + param_3) ^ 0x80000000;
  local_38 = __aeabi_fsub(param_2[param_4],local_2c);
  local_3c = __aeabi_fsub(param_2[param_5],local_30);
  uVar1 = __aeabi_fmul(local_1c,local_3c);
  uVar2 = __aeabi_fmul(local_20,local_38);
  uVar1 = __aeabi_fsub(uVar1,uVar2);
  uVar5 = __aeabi_f2d(uVar1);
  uVar1 = __aeabi_fmul(local_1c,local_38);
  uVar2 = __aeabi_fmul(local_20,local_3c);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar6 = __aeabi_f2d(uVar1);
  uVar5 = atan2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                (int)((ulonglong)uVar6 >> 0x20));
  local_24 = __truncdfsf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  if (param_10 == '\0') {
    iVar3 = __aeabi_fcmple(local_24,0);
    if (iVar3 != 0) {
      uVar5 = __aeabi_f2d(local_24);
      uVar5 = __aeabi_dadd((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x54442d18,0x401921fb);
      local_24 = __truncdfsf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    }
  }
  else {
    iVar3 = __aeabi_fcmpge(local_24,0);
    if (iVar3 != 0) {
      uVar5 = __aeabi_f2d(local_24);
      uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x54442d18,0x401921fb);
      local_24 = __truncdfsf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    }
  }
  uVar1 = __aeabi_fmul(local_24,param_9);
  uVar5 = __aeabi_f2d(uVar1);
  uVar6 = __aeabi_f2d(local_34 & 0x7fffffff);
  uVar5 = hypot((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                (int)((ulonglong)uVar6 >> 0x20));
  local_40 = __truncdfsf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  iVar3 = __aeabi_fcmpeq(local_40,0);
  if (iVar3 == 0) {
    uVar1 = __aeabi_fdiv(local_40,DAT_20000ed8);
    uVar5 = __aeabi_f2d(uVar1);
    uVar5 = floor((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_42 = __aeabi_d2uiz((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    if (param_8 != '\0') {
      uVar1 = __floatsisf(local_42);
      param_7 = __aeabi_fmul(param_7,uVar1);
    }
    uVar1 = __floatsisf(local_42);
    local_48 = __aeabi_fdiv(local_24,uVar1);
    uVar1 = __floatsisf(local_42);
    local_4c = __aeabi_fdiv(local_34,uVar1);
    uVar5 = __aeabi_f2d(local_48);
    uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x3fe00000);
    uVar6 = __aeabi_f2d(local_48);
    uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                     (int)((ulonglong)uVar6 >> 0x20));
    uVar5 = __subdf3(0,0x3ff00000,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_50 = __truncdfsf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_54 = local_48;
    local_27 = '\0';
    local_6c[param_6] = *(uint *)(param_1 + (uint)param_6 * 4);
    for (local_26 = 1; local_26 < local_42; local_26 = local_26 + 1) {
      if ((int)local_27 < (int)(uint)DAT_20000efa) {
        uVar1 = __aeabi_fmul(local_1c,local_54);
        uVar2 = __aeabi_fmul(local_20,local_50);
        local_6c[3] = __addsf3(uVar1,uVar2);
        uVar1 = __aeabi_fmul(local_1c,local_50);
        uVar2 = __aeabi_fmul(local_20,local_54);
        local_1c = __aeabi_fsub(uVar1,uVar2);
        local_20 = local_6c[3];
        local_27 = local_27 + '\x01';
      }
      else {
        uVar1 = __floatsisf(local_26);
        uVar1 = __aeabi_fmul(uVar1,local_48);
        uVar5 = __aeabi_f2d(uVar1);
        uVar5 = cos((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        local_58 = __truncdfsf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        uVar1 = __floatsisf(local_26);
        uVar1 = __aeabi_fmul(uVar1,local_48);
        uVar5 = __aeabi_f2d(uVar1);
        uVar5 = sin((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        local_5c = __truncdfsf2((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
        uVar1 = __aeabi_fmul(*(uint *)((uint)param_4 * 4 + param_3) ^ 0x80000000,local_58);
        uVar2 = __aeabi_fmul(*(undefined4 *)((uint)param_5 * 4 + param_3),local_5c);
        local_1c = __addsf3(uVar1,uVar2);
        uVar1 = __aeabi_fmul(*(uint *)((uint)param_4 * 4 + param_3) ^ 0x80000000,local_5c);
        uVar2 = __aeabi_fmul(*(undefined4 *)((uint)param_5 * 4 + param_3),local_58);
        local_20 = __aeabi_fsub(uVar1,uVar2);
        local_27 = '\0';
      }
      uVar4 = __addsf3(local_2c,local_1c);
      local_6c[param_4] = uVar4;
      uVar4 = __addsf3(local_30,local_20);
      local_6c[param_5] = uVar4;
      uVar4 = __addsf3(local_6c[param_6],local_4c);
      local_6c[param_6] = uVar4;
      mc_line(local_6c[0],local_6c[1],local_6c[2],param_7,param_8);
      if (DAT_20000ea8 != '\0') {
        return;
      }
    }
    mc_line(*param_2,param_2[1],param_2[2],param_7,param_8);
  }
  return;
}


////>>0x08002408>>FUN_08002408>>////

void FUN_08002408(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ushort local_12;
  
  uVar2 = __aeabi_fmul(param_1,0x41a00000);
  uVar4 = __aeabi_f2d(uVar2);
  uVar4 = floor((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  local_12 = __aeabi_d2uiz((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  plan_synchronize();
  uVar2 = __aeabi_fmul(param_1,0x447a0000);
  uVar3 = __floatsisf((uint)local_12 * 0x32);
  uVar2 = __aeabi_fsub(uVar2,uVar3);
  uVar4 = __aeabi_f2d(uVar2);
  uVar4 = floor((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  uVar1 = __aeabi_d2uiz((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  delay_ms(uVar1);
  while ((local_12 != 0 && (protocol_execute_runtime(), DAT_20000ea8 == '\0'))) {
    _delay_ms(0x32);
    local_12 = local_12 - 1;
  }
  return;
}


////>>0x080024c4>>FUN_080024c4>>////

void FUN_080024c4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char local_13;
  char local_12;
  char local_11;
  
  DAT_20000ea9 = 5;
  DAT_20000e4c = 0;
  limits_go_home();
  protocol_execute_runtime();
  if (DAT_20000ea8 == '\0') {
    memset(&DAT_20000eac,0,0xc);
    sys_sync_current_position();
    DAT_20000ea9 = 0;
    if ((DAT_20000ee6 & 0x20) == 0) {
      local_11 = -1;
    }
    else {
      local_11 = '\x01';
    }
    if ((DAT_20000ee6 & 0x80) == 0) {
      local_12 = -1;
    }
    else {
      local_12 = '\x01';
    }
    if ((DAT_20000ee6 & 0x200) == 0) {
      local_13 = -1;
    }
    else {
      local_13 = '\x01';
    }
    uVar1 = __floatsisf((int)local_11);
    uVar1 = __aeabi_fmul(uVar1,DAT_20000ef4);
    uVar2 = __floatsisf((int)local_12);
    uVar2 = __aeabi_fmul(uVar2,DAT_20000ef4);
    uVar3 = __floatsisf((int)local_13);
    uVar3 = __aeabi_fmul(uVar3,DAT_20000ef4);
    mc_line(uVar1,uVar2,uVar3,DAT_20000eec,0);
    st_cycle_start();
    plan_synchronize();
    sys_sync_current_position();
    if ((DAT_20000ee4 & 8) != 0) {
      DAT_20000e4c = 1;
    }
  }
  return;
}


////>>0x080025e8>>FUN_080025e8>>////

void FUN_080025e8(void)

{
  if ((DAT_20000eaa & 0x10) == 0) {
    DAT_20000eaa = DAT_20000eaa | 0x10;
    spindle_stop();
    coolant_stop();
    if (DAT_20000ea9 - 3 < 3) {
      DAT_20000eaa = DAT_20000eaa | 0x20;
      st_go_idle();
    }
  }
  return;
}


////>>0x08002638>>FUN_08002638>>////

undefined4 FUN_08002638(int param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_1c;
  byte local_16;
  char local_15;
  int local_14;
  char local_d;
  char *local_c;
  
  pcVar6 = (char *)(param_1 + (uint)*param_2);
  pcVar5 = pcVar6 + 1;
  local_d = *pcVar6;
  bVar2 = false;
  if (local_d == '-') {
    bVar2 = true;
    local_d = *pcVar5;
    local_c = pcVar6 + 2;
  }
  else {
    local_c = pcVar5;
    if (local_d == '+') {
      local_c = pcVar6 + 2;
      local_d = *pcVar5;
    }
  }
  local_14 = 0;
  local_15 = '\0';
  local_16 = 0;
  bVar3 = false;
  do {
    bVar1 = local_d - 0x30;
    if (bVar1 < 10) {
      local_16 = local_16 + 1;
      if (local_16 < 9) {
        if (bVar3) {
          local_15 = local_15 + -1;
        }
        local_14 = (uint)bVar1 + local_14 * 10;
      }
      else if (!bVar3) {
        local_15 = local_15 + '\x01';
      }
    }
    else {
      if ((bVar1 != 0xfe) || (bVar3)) {
        if (local_16 == 0) {
          uVar7 = 0;
        }
        else {
          local_1c = __floatunsisf(local_14);
          iVar4 = __aeabi_fcmpeq(local_1c,0);
          if (iVar4 == 0) {
            for (; local_15 < -1; local_15 = local_15 + '\x02') {
              uVar8 = __aeabi_f2d(local_1c);
              uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x47ae147b,0x3f847ae1);
              local_1c = __truncdfsf2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
            }
            if (local_15 < '\0') {
              uVar8 = __aeabi_f2d(local_1c);
              uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x9999999a,0x3fb99999);
              local_1c = __truncdfsf2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
            }
            else {
              for (; '\0' < local_15; local_15 = local_15 + -1) {
                local_1c = __aeabi_fmul(local_1c,0x41200000);
              }
            }
          }
          if (bVar2) {
            *param_3 = local_1c ^ 0x80000000;
          }
          else {
            *param_3 = local_1c;
          }
          *param_2 = ((char)local_c - (char)param_1) - 1;
          uVar7 = 1;
        }
        return uVar7;
      }
      bVar3 = true;
    }
    local_d = *local_c;
    local_c = local_c + 1;
  } while( true );
}


////>>0x08002814>>FUN_08002814>>////

void FUN_08002814(void)

{
  return;
}


////>>0x08002828>>FUN_08002828>>////

void FUN_08002828(void)

{
  return;
}


////>>0x0800283a>>FUN_0800283a>>////

void FUN_0800283a(void)

{
  plan_set_current_position(DAT_20000eac,DAT_20000eb0,DAT_20000eb4);
  gc_set_current_position(DAT_20000eac,DAT_20000eb0,DAT_20000eb4);
  return;
}


////>>0x08002870>>FUN_08002870>>////

char FUN_08002870(char param_1)

{
  char local_9;
  
  local_9 = param_1 + '\x01';
  if (local_9 == '\x12') {
    local_9 = '\0';
  }
  return local_9;
}


////>>0x08002896>>FUN_08002896>>////

char FUN_08002896(char param_1)

{
  char local_9;
  
  local_9 = param_1;
  if (param_1 == '\0') {
    local_9 = '\x12';
  }
  return local_9 + -1;
}


////>>0x080028bc>>FUN_080028bc>>////

undefined4 FUN_080028bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = __aeabi_fmul(param_2,param_2);
  uVar2 = __aeabi_fmul(param_1,param_1);
  uVar1 = __aeabi_fsub(uVar1,uVar2);
  uVar2 = __addsf3(param_3,param_3);
  uVar1 = __aeabi_fdiv(uVar1,uVar2);
  return uVar1;
}


////>>0x08002908>>FUN_08002908>>////

undefined4 FUN_08002908(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = __addsf3(param_3,param_3);
  uVar1 = __aeabi_fmul(uVar1,param_4);
  uVar2 = __aeabi_fmul(param_1,param_1);
  uVar1 = __aeabi_fsub(uVar1,uVar2);
  uVar2 = __aeabi_fmul(param_2,param_2);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __aeabi_fmul(param_3,0x40800000);
  uVar1 = __aeabi_fdiv(uVar1,uVar2);
  return uVar1;
}


////>>0x08002978>>FUN_08002978>>////

undefined4 FUN_08002978(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = __aeabi_fmul(param_2,param_2);
  uVar2 = __addsf3(param_1,param_1);
  uVar2 = __aeabi_fmul(uVar2,param_3);
  uVar1 = __aeabi_fsub(uVar1,uVar2);
  uVar3 = __aeabi_f2d(uVar1);
  uVar3 = sqrt((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = __truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return uVar1;
}


////>>0x080029d8>>FUN_080029d8>>////

void FUN_080029d8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_2 != 0) && (param_3 != 0)) &&
     (iVar1 = __aeabi_fcmpeq(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c)),
     iVar1 == 0)) {
    if ((*(char *)(param_2 + 0x25) == '\0') &&
       (iVar1 = __aeabi_fcmpgt(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_3 + 0x18)),
       iVar1 != 0)) {
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
      uVar2 = max_allowable_speed(DAT_20000edc ^ 0x80000000,*(undefined4 *)(param_3 + 0x18),
                                  *(undefined4 *)(param_2 + 0x20));
      iVar1 = __aeabi_fcmplt(uVar3,uVar2);
      if (iVar1 == 0) {
        uVar2 = max_allowable_speed(DAT_20000edc ^ 0x80000000,*(undefined4 *)(param_3 + 0x18),
                                    *(undefined4 *)(param_2 + 0x20));
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x1c);
      }
      *(undefined4 *)(param_2 + 0x18) = uVar2;
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
    }
    *(undefined *)(param_2 + 0x24) = 1;
  }
  return;
}


////>>0x08002a94>>FUN_08002a94>>////

void FUN_08002a94(void)

{
  undefined *puVar1;
  undefined *local_18;
  undefined *local_14;
  byte local_9;
  
  local_9 = DAT_20000cf0;
  local_18 = (undefined *)0x0;
  local_14 = (undefined *)0x0;
  while (puVar1 = local_14, local_9 != DAT_20000cf1) {
    local_9 = prev_block_index(local_9);
    local_14 = local_18;
    planner_reverse_pass_kernel(&DAT_20000870 + (uint)local_9 * 0x40,local_18,puVar1);
    local_18 = &DAT_20000870 + (uint)local_9 * 0x40;
  }
  return;
}


////>>0x08002afc>>FUN_08002afc>>////

void FUN_08002afc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 != 0) && (*(char *)(param_1 + 0x25) == '\0')) &&
     (iVar1 = __aeabi_fcmplt(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x18)),
     iVar1 != 0)) {
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar2 = max_allowable_speed(DAT_20000edc ^ 0x80000000,*(undefined4 *)(param_1 + 0x18),
                                *(undefined4 *)(param_1 + 0x20));
    iVar1 = __aeabi_fcmplt(uVar3,uVar2);
    if (iVar1 == 0) {
      uVar2 = max_allowable_speed(DAT_20000edc ^ 0x80000000,*(undefined4 *)(param_1 + 0x18),
                                  *(undefined4 *)(param_1 + 0x20));
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x18);
    }
    iVar1 = __aeabi_fcmpeq(uVar2,*(undefined4 *)(param_2 + 0x18));
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined *)(param_2 + 0x24) = 1;
    }
  }
  return;
}


////>>0x08002ba8>>FUN_08002ba8>>////

void FUN_08002ba8(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_14;
  undefined *local_10;
  byte local_9;
  
  local_14 = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  local_9 = DAT_20000cf1;
  puVar3 = (undefined *)0x0;
  while (puVar2 = local_14, local_9 != DAT_20000cf0) {
    local_14 = local_10;
    uVar1 = (uint)local_9;
    planner_forward_pass_kernel(puVar2,local_10,&DAT_20000870 + uVar1 * 0x40);
    local_9 = next_block_index(local_9);
    puVar3 = puVar2;
    local_10 = &DAT_20000870 + uVar1 * 0x40;
  }
  planner_forward_pass_kernel(local_14,local_10,0,local_14,puVar3);
  return;
}


////>>0x08002c18>>FUN_08002c18>>////

void FUN_08002c18(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_20;
  uint local_1c;
  
  uVar1 = __floatunsisf(*(undefined4 *)(param_1 + 0x3c));
  uVar1 = __aeabi_fmul(uVar1,param_2);
  uVar7 = __aeabi_f2d(uVar1);
  uVar7 = ceil((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar1 = __aeabi_d2uiz((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = __floatunsisf(*(undefined4 *)(param_1 + 0x3c));
  uVar1 = __aeabi_fmul(uVar1,param_3);
  uVar7 = __aeabi_f2d(uVar1);
  uVar7 = ceil((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar1 = __aeabi_d2uiz((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar7 = __aeabi_i2d(*(int *)(param_1 + 0x30) * 0x32);
  uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,0x404e0000);
  iVar2 = __aeabi_d2iz((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar1 = __floatunsisf(*(undefined4 *)(param_1 + 0x28));
  uVar3 = __floatunsisf(*(undefined4 *)(param_1 + 0x3c));
  uVar4 = __floatsisf(iVar2);
  uVar1 = estimate_acceleration_distance(uVar1,uVar3,uVar4);
  uVar7 = __aeabi_f2d(uVar1);
  uVar7 = ceil((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  local_1c = __aeabi_d2iz((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar1 = __floatunsisf(*(undefined4 *)(param_1 + 0x3c));
  uVar3 = __floatunsisf(*(undefined4 *)(param_1 + 0x2c));
  uVar4 = __floatsisf(-iVar2);
  uVar1 = estimate_acceleration_distance(uVar1,uVar3,uVar4);
  uVar7 = __aeabi_f2d(uVar1);
  uVar7 = floor((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  local_20 = __aeabi_d2iz((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  local_20 = (*(int *)(param_1 + 0x10) - local_1c) - local_20;
  if (local_20 < 0) {
    uVar1 = __floatunsisf(*(undefined4 *)(param_1 + 0x28));
    uVar3 = __floatunsisf(*(undefined4 *)(param_1 + 0x2c));
    uVar4 = __floatsisf(iVar2);
    uVar5 = __floatsisf(*(undefined4 *)(param_1 + 0x10));
    uVar1 = intersection_distance(uVar1,uVar3,uVar4,uVar5);
    uVar7 = __aeabi_f2d(uVar1);
    uVar7 = ceil((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar6 = __aeabi_d2iz((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
    local_1c = *(uint *)(param_1 + 0x10);
    if ((int)uVar6 <= (int)*(uint *)(param_1 + 0x10)) {
      local_1c = uVar6;
    }
    local_20 = 0;
  }
  *(uint *)(param_1 + 0x34) = local_1c;
  *(uint *)(param_1 + 0x38) = local_20 + local_1c;
  return;
}


////>>0x08002e08>>FUN_08002e08>>////

void FUN_08002e08(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *local_18;
  byte local_11;
  
  local_18 = (undefined *)0x0;
  local_11 = DAT_20000cf1;
  while (local_11 != DAT_20000cf0) {
    iVar3 = (uint)local_11 * 0x40;
    if ((local_18 != (undefined *)0x0) &&
       ((local_18[0x24] != '\0' || ((&DAT_20000894)[iVar3] != '\0')))) {
      uVar1 = __aeabi_fdiv(*(undefined4 *)(local_18 + 0x18),*(undefined4 *)(local_18 + 0x14));
      uVar2 = __aeabi_fdiv(*(undefined4 *)(&DAT_20000888 + iVar3),*(undefined4 *)(local_18 + 0x14));
      calculate_trapezoid_for_block(local_18,uVar1,uVar2);
      local_18[0x24] = 0;
    }
    local_11 = next_block_index(local_11);
    local_18 = &DAT_20000870 + iVar3;
  }
  uVar1 = __aeabi_fdiv(*(undefined4 *)(local_18 + 0x18),*(undefined4 *)(local_18 + 0x14));
  uVar2 = __aeabi_fdiv(0,*(undefined4 *)(local_18 + 0x14));
  calculate_trapezoid_for_block(local_18,uVar1,uVar2);
  local_18[0x24] = 0;
  return;
}


////>>0x08002edc>>FUN_08002edc>>////

void FUN_08002edc(void)

{
  planner_reverse_pass();
  planner_forward_pass();
  planner_recalculate_trapezoids();
  return;
}


////>>0x08002ef0>>FUN_08002ef0>>////

void FUN_08002ef0(void)

{
  DAT_20000cf1 = DAT_20000cf0;
  DAT_20000cf2 = next_block_index(DAT_20000cf0);
  return;
}


////>>0x08002f24>>FUN_08002f24>>////

void FUN_08002f24(void)

{
  plan_reset_buffer();
  memset(&DAT_20000cf4,0,0x1c);
  return;
}


////>>0x08002f40>>FUN_08002f40>>////

void FUN_08002f40(void)

{
  if (DAT_20000cf0 != DAT_20000cf1) {
    DAT_20000cf1 = next_block_index(DAT_20000cf1);
  }
  return;
}


////>>0x08002f74>>FUN_08002f74>>////

undefined * FUN_08002f74(void)

{
  undefined *puVar1;
  
  if (DAT_20000cf0 == DAT_20000cf1) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_20000870 + (uint)DAT_20000cf1 * 0x40;
  }
  return puVar1;
}


////>>0x08002fac>>FUN_08002fac>>////

bool FUN_08002fac(void)

{
  return DAT_20000cf1 == DAT_20000cf2;
}


////>>0x08002fd4>>FUN_08002fd4>>////

void FUN_08002fd4(void)

{
  int iVar1;
  
  while ((iVar1 = plan_get_current_block(), iVar1 != 0 || (DAT_20000ea9 == '\x03'))) {
    protocol_execute_runtime();
    if (DAT_20000ea8 != '\0') {
      return;
    }
  }
  return;
}


////>>0x08003004>>FUN_08003004>>////

void FUN_08003004(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar10 = (uint)DAT_20000cf0 * 0x40;
  puVar11 = (ushort *)(&DAT_20000870 + iVar10);
  uVar1 = __aeabi_fmul(DAT_20000ebc,param_1);
  uVar14 = __aeabi_f2d(uVar1);
  iVar2 = lround((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  uVar1 = __aeabi_fmul(DAT_20000ec0,param_2);
  uVar14 = __aeabi_f2d(uVar1);
  iVar3 = lround((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  uVar1 = __aeabi_fmul(DAT_20000ec4,param_3);
  uVar14 = __aeabi_f2d(uVar1);
  iVar4 = lround((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  *puVar11 = 0;
  if (iVar2 < DAT_20000cf4) {
    *puVar11 = *puVar11 | 0x20;
  }
  if (iVar3 < DAT_20000cf8) {
    *puVar11 = *puVar11 | 0x880;
  }
  if (iVar4 < DAT_20000cfc) {
    *puVar11 = *puVar11 | 0x200;
  }
  iVar12 = iVar2 - DAT_20000cf4;
  if (iVar12 < 0) {
    iVar12 = -iVar12;
  }
  *(int *)(&DAT_20000874 + iVar10) = iVar12;
  iVar12 = iVar3 - DAT_20000cf8;
  if (iVar12 < 0) {
    iVar12 = -iVar12;
  }
  *(int *)(&DAT_20000878 + iVar10) = iVar12;
  iVar12 = iVar4 - DAT_20000cfc;
  if (iVar12 < 0) {
    iVar12 = -iVar12;
  }
  *(int *)(&DAT_2000087c + iVar10) = iVar12;
  uVar9 = *(uint *)(&DAT_2000087c + iVar10);
  if (*(uint *)(&DAT_2000087c + iVar10) < *(uint *)(&DAT_20000878 + iVar10)) {
    uVar9 = *(uint *)(&DAT_20000878 + iVar10);
  }
  uVar13 = *(uint *)(&DAT_20000874 + iVar10);
  if (*(uint *)(&DAT_20000874 + iVar10) < uVar9) {
    uVar13 = uVar9;
  }
  *(uint *)(&DAT_20000880 + iVar10) = uVar13;
  if (*(int *)(&DAT_20000880 + iVar10) != 0) {
    uVar1 = __floatsisf(iVar2 - DAT_20000cf4);
    uVar1 = __aeabi_fdiv(uVar1,DAT_20000ebc);
    uVar5 = __floatsisf(iVar3 - DAT_20000cf8);
    uVar5 = __aeabi_fdiv(uVar5,DAT_20000ec0);
    uVar6 = __floatsisf(iVar4 - DAT_20000cfc);
    uVar6 = __aeabi_fdiv(uVar6,DAT_20000ec4);
    uVar7 = __aeabi_fmul(uVar1,uVar1);
    uVar8 = __aeabi_fmul(uVar5,uVar5);
    uVar7 = __addsf3(uVar7,uVar8);
    uVar8 = __aeabi_fmul(uVar6,uVar6);
    uVar7 = __addsf3(uVar7,uVar8);
    uVar14 = __aeabi_f2d(uVar7);
    uVar14 = sqrt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    uVar7 = __truncdfsf2((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    *(undefined4 *)(&DAT_20000890 + iVar10) = uVar7;
    uVar7 = __aeabi_fdiv(0x3f800000,*(undefined4 *)(&DAT_20000890 + iVar10));
    if (param_5 == '\0') {
      local_1c = __aeabi_fmul(param_4,uVar7);
    }
    else {
      local_1c = __aeabi_fdiv(0x3f800000,param_4);
    }
    uVar8 = __aeabi_fmul(*(undefined4 *)(&DAT_20000890 + iVar10),local_1c);
    *(undefined4 *)(&DAT_20000884 + iVar10) = uVar8;
    uVar8 = __floatsisf(*(undefined4 *)(&DAT_20000880 + iVar10));
    uVar8 = __aeabi_fmul(uVar8,local_1c);
    uVar14 = __aeabi_f2d(uVar8);
    uVar14 = ceil((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    uVar8 = __aeabi_d2uiz((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    *(undefined4 *)(&DAT_200008ac + iVar10) = uVar8;
    uVar8 = __floatsisf(*(undefined4 *)(&DAT_20000880 + iVar10));
    uVar8 = __aeabi_fmul(uVar8,uVar7);
    uVar8 = __aeabi_fmul(uVar8,DAT_20000edc);
    uVar8 = __aeabi_fdiv(uVar8,0x453b8000);
    uVar14 = __aeabi_f2d(uVar8);
    uVar14 = ceil((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    uVar8 = __aeabi_d2iz((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    *(undefined4 *)(&DAT_200008a0 + iVar10) = uVar8;
    uVar9 = __aeabi_fmul(uVar1,uVar7);
    uVar1 = __aeabi_fmul(uVar5,uVar7);
    uVar5 = __aeabi_fmul(uVar6,uVar7);
    local_20 = 0;
    if ((DAT_20000cf0 != DAT_20000cf1) && (iVar12 = __aeabi_fcmpgt(DAT_20000d0c,0), iVar12 != 0)) {
      uVar6 = __aeabi_fmul(DAT_20000d00 ^ 0x80000000,uVar9);
      uVar7 = __aeabi_fmul(DAT_20000d04,uVar1);
      uVar6 = __aeabi_fsub(uVar6,uVar7);
      uVar7 = __aeabi_fmul(DAT_20000d08,uVar5);
      uVar6 = __aeabi_fsub(uVar6,uVar7);
      uVar14 = __aeabi_f2d(uVar6);
      iVar12 = __aeabi_dcmplt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x66666666,0x3fee6666);
      if (iVar12 != 0) {
        iVar12 = __aeabi_fcmplt(DAT_20000d0c,*(undefined4 *)(&DAT_20000884 + iVar10));
        local_20 = DAT_20000d0c;
        if (iVar12 == 0) {
          local_20 = *(undefined4 *)(&DAT_20000884 + iVar10);
        }
        uVar14 = __aeabi_f2d(uVar6);
        iVar12 = __aeabi_dcmpgt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x66666666,0xbfee6666);
        if (iVar12 != 0) {
          uVar14 = __aeabi_f2d(uVar6);
          uVar14 = __subdf3(0,0x3ff00000,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
          uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,0x3fe00000);
          uVar14 = sqrt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
          uVar6 = __truncdfsf2((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
          uVar14 = __aeabi_f2d(local_20);
          uVar7 = __aeabi_fmul(DAT_20000edc,DAT_20000ee0);
          uVar7 = __aeabi_fmul(uVar7,uVar6);
          uVar15 = __aeabi_f2d(uVar7);
          uVar16 = __aeabi_f2d(uVar6);
          uVar16 = __subdf3(0,0x3ff00000,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
          uVar15 = __divdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                            (int)((ulonglong)uVar16 >> 0x20));
          uVar15 = sqrt((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          iVar12 = __aeabi_dcmplt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                  (int)((ulonglong)uVar15 >> 0x20));
          if (iVar12 == 0) {
            uVar7 = __aeabi_fmul(DAT_20000edc,DAT_20000ee0);
            uVar7 = __aeabi_fmul(uVar7,uVar6);
            uVar14 = __aeabi_f2d(uVar7);
            uVar15 = __aeabi_f2d(uVar6);
            uVar15 = __subdf3(0,0x3ff00000,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
            uVar14 = __divdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                              (int)((ulonglong)uVar15 >> 0x20));
            uVar14 = sqrt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
            local_20 = __truncdfsf2((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
          }
        }
      }
    }
    *(undefined4 *)(&DAT_2000088c + iVar10) = local_20;
    uVar7 = max_allowable_speed(DAT_20000edc ^ 0x80000000,0,*(undefined4 *)(&DAT_20000890 + iVar10))
    ;
    iVar12 = __aeabi_fcmplt(local_20,uVar7);
    uVar6 = uVar7;
    if (iVar12 != 0) {
      uVar6 = local_20;
    }
    *(undefined4 *)(&DAT_20000888 + iVar10) = uVar6;
    iVar12 = __aeabi_fcmpge(uVar7,*(undefined4 *)(&DAT_20000884 + iVar10));
    if (iVar12 == 0) {
      (&DAT_20000895)[iVar10] = 0;
    }
    else {
      (&DAT_20000895)[iVar10] = 1;
    }
    (&DAT_20000894)[iVar10] = 1;
    DAT_20000d0c = *(undefined4 *)(&DAT_20000884 + iVar10);
    DAT_20000cf0 = DAT_20000cf2;
    DAT_20000d00 = uVar9;
    DAT_20000d04 = uVar1;
    DAT_20000d08 = uVar5;
    DAT_20000cf2 = next_block_index(DAT_20000cf2);
    DAT_20000cf4 = iVar2;
    DAT_20000cf8 = iVar3;
    DAT_20000cfc = iVar4;
    planner_recalculate();
  }
  return;
}


////>>0x080035ec>>FUN_080035ec>>////

void FUN_080035ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_20000cf4 = param_1;
  DAT_20000cf8 = param_2;
  DAT_20000cfc = param_3;
  return;
}


////>>0x08003618>>FUN_08003618>>////

void FUN_08003618(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (uint)DAT_20000cf1 * 0x40;
  uVar3 = *(undefined4 *)(&DAT_20000890 + iVar2);
  uVar1 = __floatsisf(param_1);
  uVar1 = __aeabi_fmul(uVar3,uVar1);
  uVar3 = __floatsisf(*(undefined4 *)(&DAT_20000880 + iVar2));
  uVar1 = __aeabi_fdiv(uVar1,uVar3);
  *(undefined4 *)(&DAT_20000890 + iVar2) = uVar1;
  *(undefined4 *)(&DAT_20000880 + iVar2) = param_1;
  *(undefined4 *)(&DAT_20000888 + iVar2) = 0;
  *(undefined4 *)(&DAT_2000088c + iVar2) = 0;
  (&DAT_20000895)[iVar2] = 0;
  (&DAT_20000894)[iVar2] = 1;
  planner_recalculate();
  return;
}


////>>0x0800369c>>FUN_0800369c>>////

void FUN_0800369c(char *param_1)

{
  char *local_c;
  
  local_c = param_1;
  while (*local_c != '\0') {
    serial_write(*local_c);
    local_c = local_c + 1;
  }
  return;
}


////>>0x080036c6>>FUN_080036c6>>////

void FUN_080036c6(char *param_1)

{
  char *local_c;
  
  local_c = param_1;
  while (*local_c != '\0') {
    serial_write(*local_c);
    local_c = local_c + 1;
  }
  return;
}


////>>0x080036f0>>FUN_080036f0>>////

void FUN_080036f0(uint param_1,int param_2)

{
  undefined4 uVar1;
  int local_10;
  uint local_c;
  
  local_c = 1 << (param_2 - 1U & 0xff);
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    if ((local_c & param_1) == 0) {
      uVar1 = 0x30;
    }
    else {
      uVar1 = 0x31;
    }
    serial_write(uVar1);
    local_c = local_c >> 1;
  }
  return;
}


////>>0x08003740>>FUN_08003740>>////

void FUN_08003740(undefined param_1)

{
  print_base2(param_1,8);
  return;
}


////>>0x0800375c>>FUN_0800375c>>////

void FUN_0800375c(undefined2 param_1)

{
  print_base2(param_1,0x10);
  return;
}


////>>0x08003778>>FUN_08003778>>////

void FUN_08003778(uint param_1)

{
  uint uVar1;
  uint local_1c;
  char acStack_15 [12];
  byte local_9;
  
  local_9 = 0;
  local_1c = param_1;
  if (param_1 == 0) {
    serial_write(0x30);
  }
  else {
    for (; local_1c != 0; local_1c = local_1c / 10) {
      uVar1 = (uint)local_9;
      local_9 = local_9 + 1;
      acStack_15[uVar1 + 1] = (char)(local_1c % 10) + '0';
    }
    for (; local_9 != 0; local_9 = local_9 - 1) {
      serial_write(acStack_15[local_9]);
    }
  }
  return;
}


////>>0x080037fc>>FUN_080037fc>>////

void FUN_080037fc(int param_1)

{
  int local_c;
  
  local_c = param_1;
  if (param_1 < 0) {
    serial_write(0x2d);
    local_c = -param_1;
  }
  print_uint32_base10(local_c);
  return;
}


////>>0x08003826>>FUN_08003826>>////

void FUN_08003826(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint local_24;
  char acStack_1d [13];
  uint local_10;
  byte local_a;
  byte local_9;
  
  iVar1 = __aeabi_fcmplt(param_1,0);
  local_24 = param_1;
  if (iVar1 != 0) {
    serial_write(0x2d);
    local_24 = param_1 ^ 0x80000000;
  }
  for (local_9 = DAT_20000ef9; 1 < local_9; local_9 = local_9 - 2) {
    local_24 = __aeabi_fmul(local_24,0x42c80000);
  }
  if (local_9 != 0) {
    local_24 = __aeabi_fmul(local_24,0x41200000);
  }
  uVar2 = __addsf3(local_24,0x3f000000);
  local_a = 0;
  local_10 = __aeabi_f2iz(uVar2);
  acStack_1d[DAT_20000ef9 + 1] = '.';
  for (; local_10 != 0; local_10 = local_10 / 10) {
    if (local_a == DAT_20000ef9) {
      local_a = local_a + 1;
    }
    uVar4 = (uint)local_a;
    local_a = local_a + 1;
    acStack_1d[uVar4 + 1] = (char)(local_10 % 10) + '0';
  }
  while (local_a < DAT_20000ef9) {
    uVar4 = (uint)local_a;
    local_a = local_a + 1;
    acStack_1d[uVar4 + 1] = '0';
  }
  if (local_a == DAT_20000ef9) {
    bVar3 = local_a + 1;
    local_a = local_a + 2;
    acStack_1d[bVar3 + 1] = '0';
  }
  for (; local_a != 0; local_a = local_a - 1) {
    serial_write(acStack_1d[local_a]);
  }
  return;
}


////>>0x08003980>>FUN_08003980>>////

void FUN_08003980(void)

{
  DAT_20000e10 = 0;
  DAT_20000e11 = 0;
  return;
}


////>>0x080039a0>>FUN_080039a0>>////

void FUN_080039a0(void)

{
  protocol_reset_line_buffer();
  report_init_message();
  DAT_20000e50 = 1;
  return;
}


////>>0x080039bc>>FUN_080039bc>>////

void FUN_080039bc(void)

{
  int iVar1;
  undefined4 uVar2;
  byte local_9;
  
  for (local_9 = 0; local_9 < 2; local_9 = local_9 + 1) {
    iVar1 = settings_read_startup_line(local_9,&DAT_20000d10);
    if (iVar1 == 0) {
      report_status_message(10);
    }
    else if (DAT_20000d10 != '\0') {
      printString(&DAT_20000d10);
      uVar2 = gc_execute_line(&DAT_20000d10);
      report_status_message(uVar2);
    }
  }
  return;
}


////>>0x08003a18>>FUN_08003a18>>////

void FUN_08003a18(uint param_1)

{
  if ((param_1 & 0x80) == 0) {
    if ((param_1 & 0x40) == 0) {
      if ((param_1 & 0x20) != 0) {
        DAT_20000eaa = DAT_20000eaa | 2;
      }
    }
    else {
      DAT_20000eaa = DAT_20000eaa | 8;
    }
  }
  else {
    mc_reset();
  }
  return;
}


////>>0x08003a74>>FUN_08003a74>>////

/* WARNING: Removing unreachable block (ram,0x08003ad2) */

void FUN_08003a74(void)

{
  byte bVar1;
  
  bVar1 = DAT_20000eaa;
  if (DAT_20000eaa != 0) {
    if ((DAT_20000eaa & 0x60) != 0) {
      DAT_20000ea9 = 6;
      if ((DAT_20000eaa & 0x40) != 0) {
        report_alarm_message(0xffffffff);
        report_feedback_message(1);
        do {
        } while( true );
      }
      report_alarm_message(0xfffffffe);
      DAT_20000eaa = DAT_20000eaa & 0x9f;
    }
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 1) != 0) {
        report_realtime_status();
        DAT_20000eaa = DAT_20000eaa & 0xfe;
      }
      if ((bVar1 & 8) != 0) {
        st_feed_hold();
        DAT_20000eaa = DAT_20000eaa & 0xf7;
      }
      if ((bVar1 & 4) != 0) {
        st_cycle_reinitialize();
        DAT_20000eaa = DAT_20000eaa & 0xfb;
      }
      if ((bVar1 & 2) != 0) {
        st_cycle_start();
        if ((DAT_20000ee4 & 2) != 0) {
          DAT_20000eb8 = 1;
        }
        DAT_20000eaa = DAT_20000eaa & 0xfd;
      }
    }
    else {
      DAT_20000ea8 = 1;
    }
  }
  return;
}


////>>0x08003b98>>FUN_08003b98>>////

uint FUN_08003b98(char *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_14;
  undefined4 local_10;
  byte local_a;
  byte local_9;
  
  if (*param_1 != '$') {
    uVar4 = gc_execute_line(param_1);
    return uVar4;
  }
  local_a = 1;
  local_9 = '\0';
  bVar1 = param_1[1];
  if (bVar1 == 0) {
    report_grbl_help();
    return 0;
  }
  if ((0x58 < bVar1) || (bVar1 < 0x23)) goto switchD_08003bdc_caseD_25;
  switch(bVar1) {
  case 0x23:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    report_gcode_parameters();
    break;
  case 0x24:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    report_grbl_settings();
    break;
  case 0x43:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    if (DAT_20000ea9 == '\a') {
      mc_reset();
      report_feedback_message(5);
    }
    else {
      if (DAT_20000ea9 != '\0') {
        return 0xb;
      }
      DAT_20000ea9 = '\a';
      report_feedback_message(4);
    }
    break;
  case 0x47:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    report_gcode_modes();
    break;
  case 0x48:
    if ((DAT_20000ee4 & 0x10) == 0) {
      return 7;
    }
    if ((DAT_20000ea9 != '\0') && (DAT_20000ea9 != '\x06')) {
      return 0xb;
    }
    mc_go_home();
    if (DAT_20000ea8 == '\0') {
      protocol_execute_startup();
    }
    break;
  case 0x4e:
    local_a = 2;
    if (param_1[2] == '\0') {
      for (local_9 = 0; local_9 < 2; local_9 = local_9 + 1) {
        iVar2 = settings_read_startup_line(local_9,param_1);
        if (iVar2 == 0) {
          report_status_message(10);
        }
        else {
          report_startup_line(local_9,param_1);
        }
      }
      return 0;
    }
    local_9 = '\x01';
  default:
switchD_08003bdc_caseD_25:
    iVar2 = read_float(param_1,&local_a,&local_10);
    if (iVar2 == 0) {
      return 1;
    }
    bVar1 = local_a + 1;
    if (param_1[local_a] != '=') {
      return 3;
    }
    local_a = bVar1;
    if (local_9 == '\0') {
      iVar2 = read_float(param_1,&local_a,&local_14);
      if (iVar2 == 0) {
        return 1;
      }
      if (param_1[local_a] == '\0') {
        uVar3 = __aeabi_f2iz(local_10);
        uVar4 = settings_store_global_setting(uVar3,local_14);
        return uVar4;
      }
      return 3;
    }
    do {
      param_1[(uint)local_a - (uint)bVar1] = param_1[local_a];
      uVar4 = (uint)local_a;
      local_a = local_a + 1;
    } while (param_1[uVar4] != '\0');
    local_9 = bVar1;
    local_9 = gc_execute_line(param_1);
    if (local_9 != 0) {
      return (uint)local_9;
    }
    uVar5 = __aeabi_f2d(local_10);
    uVar5 = trunc((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    local_9 = __aeabi_d2uiz((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    settings_store_startup_line(local_9,param_1);
    break;
  case 0x58:
    local_a = 2;
    if (param_1[2] != '\0') {
      return 3;
    }
    if (DAT_20000ea9 == '\x06') {
      report_feedback_message(3);
      DAT_20000ea9 = '\0';
    }
  }
  return 0;
}


////>>0x08003f34>>FUN_08003f34>>////

void FUN_08003f34(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  while( true ) {
    while( true ) {
      bVar1 = serial_read();
      if (bVar1 == 0xff) {
        return;
      }
      if ((bVar1 == 10) || (bVar1 == 0xd)) break;
      if (DAT_20000e11 == '\0') {
        if ((0x20 < bVar1) && (bVar1 != 0x2f)) {
          if (bVar1 == 0x28) {
            DAT_20000e11 = '\x01';
          }
          else if (DAT_20000e10 == 0xff) {
            report_status_message(0xd);
            protocol_reset_line_buffer();
          }
          else if ((bVar1 < 0x61) || (0x7a < bVar1)) {
            uVar3 = (uint)DAT_20000e10;
            DAT_20000e10 = DAT_20000e10 + 1;
            (&DAT_20000d10)[uVar3] = bVar1;
          }
          else {
            uVar3 = (uint)DAT_20000e10;
            DAT_20000e10 = DAT_20000e10 + 1;
            (&DAT_20000d10)[uVar3] = bVar1 - 0x20;
          }
        }
      }
      else if (bVar1 == 0x29) {
        DAT_20000e11 = '\0';
      }
    }
    protocol_execute_runtime();
    if (DAT_20000ea8 != '\0') break;
    if (DAT_20000e10 == 0) {
      report_status_message(0);
    }
    else {
      (&DAT_20000d10)[DAT_20000e10] = 0;
      uVar2 = protocol_execute_line(&DAT_20000d10);
      report_status_message(uVar2);
    }
    protocol_reset_line_buffer();
  }
  return;
}


////>>0x08004030>>FUN_08004030>>////

void FUN_08004030(char param_1)

{
  if (param_1 == '\0') {
    printPgmString(&DAT_0800b5c8);
  }
  else {
    printPgmString("error: ");
    switch(param_1) {
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
    printPgmString(&DAT_0800b6d8);
  }
  return;
}


////>>0x08004148>>FUN_08004148>>////

void FUN_08004148(char param_1)

{
  printPgmString("ALARM: ");
  if (param_1 == -2) {
    printPgmString("Abort during cycle");
  }
  else if (param_1 == -1) {
    printPgmString("Hard limit");
  }
  printPgmString(". MPos?\r\n");
  delay_ms(500);
  return;
}


////>>0x080041a0>>FUN_080041a0>>////

void FUN_080041a0(undefined param_1)

{
  printPgmString(&DAT_0800b710);
  switch(param_1) {
  case 1:
    printPgmString("Reset to continue");
    break;
  case 2:
    printPgmString("\'$H\'|\'$X\' to unlock");
    break;
  case 3:
    printPgmString("Caution: Unlocked");
    break;
  case 4:
    printPgmString("Enabled");
    break;
  case 5:
    printPgmString("Disabled");
  }
  printPgmString(&DAT_0800b764);
  return;
}


////>>0x08004228>>FUN_08004228>>////

void FUN_08004228(void)

{
  printPgmString("\r\nGrbl 0.8c [\'$\' for help]\r\n");
  return;
}


////>>0x0800423c>>FUN_0800423c>>////

void FUN_0800423c(void)

{
  printPgmString(
                "$$ (view Grbl settings)\r\n$# (view # parameters)\r\n$G (view parser state)\r\n$N (view startup blocks)\r\n$x=value (save Grbl setting)\r\n$Nx=line (save startup block)\r\n$C (check gcode mode)\r\n$X (kill alarm lock)\r\n$H (run homing cycle)\r\n~ (cycle start)\r\n! (feed hold)\r\n? (current status)\r\nctrl-x (reset Grbl)\r\n"
                );
  return;
}


////>>0x08004250>>FUN_08004250>>////

void FUN_08004250(void)

{
  undefined4 uVar1;
  
  printPgmString(&DAT_0800b8b8);
  printFloat(DAT_20000ebc);
  printPgmString(" (x, step/mm)\r\n$1=");
  printFloat(DAT_20000ec0);
  printPgmString(" (y, step/mm)\r\n$2=");
  printFloat(DAT_20000ec4);
  printPgmString(" (z, step/mm)\r\n$3=");
  printInteger(DAT_20000ec9);
  printPgmString(" (step pulse, usec)\r\n$4=");
  printFloat(DAT_20000ecc);
  printPgmString(" (default feed, mm/min)\r\n$5=");
  printFloat(DAT_20000ed0);
  printPgmString(" (default seek, mm/min)\r\n$6=");
  printInteger(DAT_20000ed4);
  printPgmString(" (step port invert mask, int:");
  print_uint16_base2(DAT_20000ed4);
  printPgmString(")\r\n$7=");
  printInteger(DAT_20000ef8);
  printPgmString(" (step idle delay, msec)\r\n$8=");
  uVar1 = __aeabi_fdiv(DAT_20000edc,0x45610000);
  printFloat(uVar1);
  printPgmString(" (acceleration, mm/sec^2)\r\n$9=");
  printFloat(DAT_20000ee0);
  printPgmString(" (junction deviation, mm)\r\n$10=");
  printFloat(DAT_20000ed8);
  printPgmString(" (arc, mm/segment)\r\n$11=");
  printInteger(DAT_20000efa);
  printPgmString(" (n-arc correction, int)\r\n$12=");
  printInteger(DAT_20000ef9);
  printPgmString(" (n-decimals, int)\r\n$13=");
  printInteger((DAT_20000ee4 & 1) != 0);
  printPgmString(" (report inches, bool)\r\n$14=");
  printInteger((DAT_20000ee4 & 2) != 0);
  printPgmString(" (auto start, bool)\r\n$15=");
  printInteger((DAT_20000ee4 & 4) != 0);
  printPgmString(" (invert step enable, bool)\r\n$16=");
  printInteger((DAT_20000ee4 & 8) != 0);
  printPgmString(" (hard limits, bool)\r\n$17=");
  printInteger((DAT_20000ee4 & 0x10) != 0);
  printPgmString(" (homing cycle, bool)\r\n$18=");
  printInteger(DAT_20000ee6);
  printPgmString(" (homing dir invert mask, int:");
  print_uint16_base2(DAT_20000ee6);
  printPgmString(")\r\n$19=");
  printFloat(DAT_20000ee8);
  printPgmString(" (homing feed, mm/min)\r\n$20=");
  printFloat(DAT_20000eec);
  printPgmString(" (homing seek, mm/min)\r\n$21=");
  printInteger(DAT_20000ef0);
  printPgmString(" (homing debounce, msec)\r\n$22=");
  printFloat(DAT_20000ef4);
  printPgmString(" (homing pull-off, mm)\r\n$23=");
  printInteger(DAT_20000ed6);
  printPgmString(" (dir port invert mask, int:");
  print_uint16_base2(DAT_20000ed6);
  printPgmString(&DAT_0800bb94);
  return;
}


////>>0x080044e8>>FUN_080044e8>>////

void FUN_080044e8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 auStack_18 [3];
  byte local_a;
  byte local_9;
  
  local_9 = 0;
  while( true ) {
    if (7 < local_9) {
      printPgmString("[G92:");
      for (local_a = 0; local_a < 3; local_a = local_a + 1) {
        if ((DAT_20000ee4 & 1) == 0) {
          printFloat(*(undefined4 *)(&DAT_20000e74 + (local_a + 10) * 4));
        }
        else {
          uVar3 = __aeabi_f2d(*(undefined4 *)(&DAT_20000e74 + (local_a + 10) * 4));
          uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x57e16865,0x3fa42851);
          uVar2 = __truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
          printFloat(uVar2);
        }
        if (local_a < 2) {
          printPgmString(&DAT_0800bbbc);
        }
        else {
          printPgmString(&DAT_0800b764);
        }
      }
      return;
    }
    iVar1 = settings_read_coord_data(local_9,auStack_18);
    if (iVar1 == 0) break;
    printPgmString(&DAT_0800bb98);
    switch(local_9) {
    case 0:
      printPgmString(&DAT_0800bb9c);
      break;
    case 1:
      printPgmString(&DAT_0800bba0);
      break;
    case 2:
      printPgmString(&DAT_0800bba4);
      break;
    case 3:
      printPgmString(&DAT_0800bba8);
      break;
    case 4:
      printPgmString(&DAT_0800bbac);
      break;
    case 5:
      printPgmString(&DAT_0800bbb0);
      break;
    case 6:
      printPgmString(&DAT_0800bbb4);
      break;
    case 7:
      printPgmString(&DAT_0800bbb8);
    }
    for (local_a = 0; local_a < 3; local_a = local_a + 1) {
      if ((DAT_20000ee4 & 1) == 0) {
        printFloat(auStack_18[local_a]);
      }
      else {
        uVar3 = __aeabi_f2d(auStack_18[local_a]);
        uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x57e16865,0x3fa42851);
        uVar2 = __truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
        printFloat(uVar2);
      }
      if (local_a < 2) {
        printPgmString(&DAT_0800bbbc);
      }
      else {
        printPgmString(&DAT_0800b764);
      }
    }
    local_9 = local_9 + 1;
  }
  report_status_message(10);
  return;
}


////>>0x080046d0>>FUN_080046d0>>////

void FUN_080046d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  switch(DAT_20000e71) {
  case 0:
    printPgmString(&DAT_0800bbc8);
    break;
  case 1:
    printPgmString(&DAT_0800bbcc);
    break;
  case 2:
    printPgmString(&DAT_0800bbd0);
    break;
  case 3:
    printPgmString(&DAT_0800bbd4);
    break;
  case 4:
    printPgmString(&DAT_0800bbd8);
  }
  printPgmString(&DAT_0800bbe0);
  printInteger(DAT_20000e8c + 0x36);
  if (DAT_20000e89 == '\0') {
    if (DAT_20000e8a == '\x01') {
      printPgmString(&DAT_0800bbe4);
    }
    else {
      printPgmString(&DAT_0800bbec);
    }
  }
  else {
    printPgmString(&DAT_0800bbf4);
  }
  if (DAT_20000e73 == '\0') {
    printPgmString(&DAT_0800bc04);
  }
  else {
    printPgmString(&DAT_0800bbfc);
  }
  if (DAT_20000e74 == '\0') {
    printPgmString(&DAT_0800bc14);
  }
  else {
    printPgmString(&DAT_0800bc0c);
  }
  if (DAT_20000e72 == '\0') {
    printPgmString(&DAT_0800bc24);
  }
  else {
    printPgmString(&DAT_0800bc1c);
  }
  if (DAT_20000e75 == 2) {
    printPgmString(&DAT_0800bc34);
  }
  else if (DAT_20000e75 < 3) {
    if (DAT_20000e75 == 0) {
      printPgmString(&DAT_0800bc2c);
    }
    else if (DAT_20000e75 == 1) {
      printPgmString(&DAT_0800bc30);
    }
  }
  if (DAT_20000e76 == '\x01') {
    printPgmString(&DAT_0800bc38);
  }
  else if (DAT_20000e76 < '\x02') {
    if (DAT_20000e76 == -1) {
      printPgmString(&DAT_0800bc3c);
    }
    else if (DAT_20000e76 == '\0') {
      printPgmString(&DAT_0800bc40);
    }
  }
  if (DAT_20000e77 == 2) {
    printPgmString(&DAT_0800bc4c);
  }
  else if (DAT_20000e77 < 3) {
    if (DAT_20000e77 == 0) {
      printPgmString(&DAT_0800bc44);
    }
    else if (DAT_20000e77 == 1) {
      printPgmString(&DAT_0800bc48);
    }
  }
  printPgmString(&DAT_0800bc50);
  printInteger(DAT_20000e88);
  printPgmString(&DAT_0800bc54);
  if (DAT_20000e73 == '\0') {
    printFloat(DAT_20000e78);
  }
  else {
    uVar2 = __aeabi_f2d(DAT_20000e78);
    uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x57e16865,0x3fa42851);
    uVar1 = __truncdfsf2((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    printFloat(uVar1);
  }
  printPgmString(&DAT_0800b764);
  return;
}


////>>0x08004900>>FUN_08004900>>////

void FUN_08004900(undefined param_1,undefined4 param_2)

{
  printPgmString(&DAT_0800bc58);
  printInteger(param_1);
  printPgmString(&DAT_0800bc5c);
  printString(param_2);
  printPgmString(&DAT_0800b6d8);
  return;
}


////>>0x08004940>>FUN_08004940>>////

void FUN_08004940(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 auStack_2c [6];
  byte local_11;
  
  auStack_2c[3] = DAT_20000eac;
  auStack_2c[4] = DAT_20000eb0;
  auStack_2c[5] = DAT_20000eb4;
  switch(DAT_20000ea9) {
  case 0:
    printPgmString("<Idle");
    break;
  case 2:
    printPgmString("<Queue");
    break;
  case 3:
    printPgmString(&DAT_0800bc70);
    break;
  case 4:
    printPgmString("<Hold");
    break;
  case 5:
    printPgmString("<Home");
    break;
  case 6:
    printPgmString("<Alarm");
    break;
  case 7:
    printPgmString("<Check");
  }
  printPgmString(",MPos:");
  for (local_11 = 0; local_11 < 3; local_11 = local_11 + 1) {
    uVar1 = __floatsisf(auStack_2c[local_11 + 3]);
    uVar2 = (uint)local_11;
    uVar1 = __aeabi_fdiv(uVar1,(&DAT_20000ebc)[local_11]);
    auStack_2c[uVar2] = uVar1;
    if ((DAT_20000ee4 & 1) != 0) {
      uVar4 = __aeabi_f2d(auStack_2c[local_11]);
      uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x57e16865,0x3fa42851);
      uVar2 = (uint)local_11;
      uVar1 = __truncdfsf2((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
      auStack_2c[uVar2] = uVar1;
    }
    printFloat(auStack_2c[local_11]);
    printPgmString(&DAT_0800bbbc);
  }
  printPgmString("WPos:");
  for (local_11 = 0; local_11 < 3; local_11 = local_11 + 1) {
    if ((DAT_20000ee4 & 1) == 0) {
      uVar3 = auStack_2c[local_11];
      uVar1 = __addsf3(*(undefined4 *)(&DAT_20000e70 + (local_11 + 8) * 4),
                       *(undefined4 *)(&DAT_20000e74 + (local_11 + 10) * 4));
      uVar2 = (uint)local_11;
      uVar1 = __aeabi_fsub(uVar3,uVar1);
      auStack_2c[uVar2] = uVar1;
    }
    else {
      uVar4 = __aeabi_f2d(auStack_2c[local_11]);
      uVar1 = __addsf3(*(undefined4 *)(&DAT_20000e70 + (local_11 + 8) * 4),
                       *(undefined4 *)(&DAT_20000e74 + (local_11 + 10) * 4));
      uVar5 = __aeabi_f2d(uVar1);
      uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x57e16865,0x3fa42851);
      uVar4 = __subdf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20));
      uVar2 = (uint)local_11;
      uVar1 = __truncdfsf2((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
      auStack_2c[uVar2] = uVar1;
    }
    printFloat(auStack_2c[local_11]);
    if (local_11 < 2) {
      printPgmString(&DAT_0800bbbc);
    }
  }
  printPgmString(&DAT_0800bca8);
  return;
}


////>>0x08004bc0>>FUN_08004bc0>>////

void FUN_08004bc0(byte param_1,undefined4 param_2)

{
  memcpy_to_eeprom_with_checksum((ushort)param_1 * 0x101 + 0x300,param_2,0x100);
  return;
}


////>>0x08004bf4>>FUN_08004bf4>>////

void FUN_08004bf4(byte param_1,undefined4 param_2)

{
  memcpy_to_eeprom_with_checksum((ushort)param_1 * 0xd + 0x200,param_2,0xc);
  return;
}


////>>0x08004c2a>>FUN_08004c2a>>////

void FUN_08004c2a(void)

{
  eeprom_put_char(0,5);
  memcpy_to_eeprom_with_checksum(1,&DAT_20000ebc,0x40);
  return;
}


////>>0x08004c48>>FUN_08004c48>>////

void FUN_08004c48(char param_1)

{
  if (param_1 != '\0') {
    DAT_20000ebc = 0x431d7af6;
    DAT_20000ec0 = 0x431d7af6;
    DAT_20000ec4 = 0x431d7af6;
    DAT_20000ec9 = 10;
    DAT_20000ecc = 0x437a0000;
    DAT_20000ed0 = 0x43fa0000;
    DAT_20000edc = 0x470ca000;
    DAT_20000ed8 = 0x3dcccccd;
    DAT_20000ed4 = 0;
    DAT_20000ed6 = 0xa80;
    DAT_20000ee0 = 0x3d4ccccd;
  }
  DAT_20000ee4 = 0x12;
  DAT_20000ee6 = 0;
  DAT_20000ee8 = 0x41c80000;
  DAT_20000eec = 0x437a0000;
  DAT_20000ef0 = 100;
  DAT_20000ef4 = 0x3f800000;
  DAT_20000ef8 = 0x19;
  DAT_20000ef9 = 3;
  DAT_20000efa = 0x19;
  write_global_settings();
  return;
}


////>>0x08004d2c>>FUN_08004d2c>>////

bool FUN_08004d2c(byte param_1,undefined *param_2)

{
  int iVar1;
  
  iVar1 = memcpy_from_eeprom_with_checksum(param_2,(ushort)param_1 * 0x101 + 0x300,0x100);
  if (iVar1 == 0) {
    *param_2 = 0;
    settings_store_startup_line(param_1,param_2);
  }
  return iVar1 != 0;
}


////>>0x08004d7c>>FUN_08004d7c>>////

bool FUN_08004d7c(byte param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = memcpy_from_eeprom_with_checksum(param_2,(ushort)param_1 * 0xd + 0x200,0xc);
  if (iVar1 == 0) {
    memset(param_2,0,0xc);
    settings_write_coord_data(param_1,param_2);
  }
  return iVar1 != 0;
}


////>>0x08004dd2>>FUN_08004dd2>>////

undefined4 FUN_08004dd2(void)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = eeprom_get_char(0);
  if (bVar1 == 5) {
    iVar2 = memcpy_from_eeprom_with_checksum(&DAT_20000ebc,1,0x40);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    if (4 < bVar1) {
      return 0;
    }
    iVar2 = memcpy_from_eeprom_with_checksum(&DAT_20000ebc,1,0x28);
    if (iVar2 == 0) {
      return 0;
    }
    settings_reset(0);
  }
  return 1;
}


////>>0x08004e30>>FUN_08004e30>>////

undefined4 FUN_08004e30(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  switch(param_1) {
  case 0:
  case 1:
  case 2:
    iVar2 = __aeabi_fcmple(param_2,0);
    if (iVar2 != 0) {
      return 8;
    }
    (&DAT_20000ebc)[param_1] = param_2;
    break;
  case 3:
    iVar2 = __aeabi_fcmplt(param_2,0x40400000);
    if (iVar2 != 0) {
      return 9;
    }
    uVar3 = __aeabi_f2d(param_2);
    uVar3 = round((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    DAT_20000ec9 = __aeabi_d2uiz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    break;
  case 4:
    DAT_20000ecc = param_2;
    break;
  case 5:
    DAT_20000ed0 = param_2;
    break;
  case 6:
    uVar3 = __aeabi_f2d(param_2);
    uVar3 = trunc((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    DAT_20000ed4 = __aeabi_d2uiz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    break;
  case 7:
    uVar3 = __aeabi_f2d(param_2);
    uVar3 = round((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    DAT_20000ef8 = __aeabi_d2uiz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    break;
  case 8:
    uVar1 = __aeabi_fmul(param_2,0x42700000);
    DAT_20000edc = __aeabi_fmul(uVar1,0x42700000);
    break;
  case 9:
    DAT_20000ee0 = param_2 & 0x7fffffff;
    break;
  case 10:
    DAT_20000ed8 = param_2;
    break;
  case 0xb:
    uVar3 = __aeabi_f2d(param_2);
    uVar3 = round((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    DAT_20000efa = __aeabi_d2uiz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    break;
  case 0xc:
    uVar3 = __aeabi_f2d(param_2);
    uVar3 = round((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    DAT_20000ef9 = __aeabi_d2uiz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    break;
  case 0xd:
    iVar2 = __aeabi_fcmpeq(param_2,0);
    if (iVar2 == 0) {
      DAT_20000ee4 = DAT_20000ee4 | 1;
    }
    else {
      DAT_20000ee4 = DAT_20000ee4 & 0xfe;
    }
    break;
  case 0xe:
    iVar2 = __aeabi_fcmpeq(param_2,0);
    if (iVar2 == 0) {
      DAT_20000ee4 = DAT_20000ee4 | 2;
    }
    else {
      DAT_20000ee4 = DAT_20000ee4 & 0xfd;
    }
    break;
  case 0xf:
    iVar2 = __aeabi_fcmpeq(param_2,0);
    if (iVar2 == 0) {
      DAT_20000ee4 = DAT_20000ee4 | 4;
    }
    else {
      DAT_20000ee4 = DAT_20000ee4 & 0xfb;
    }
    break;
  case 0x10:
    iVar2 = __aeabi_fcmpeq(param_2,0);
    if (iVar2 == 0) {
      DAT_20000ee4 = DAT_20000ee4 | 8;
    }
    else {
      DAT_20000ee4 = DAT_20000ee4 & 0xf7;
    }
    limits_init();
    break;
  case 0x11:
    iVar2 = __aeabi_fcmpeq(param_2,0);
    if (iVar2 == 0) {
      DAT_20000ee4 = DAT_20000ee4 | 0x10;
    }
    else {
      DAT_20000ee4 = DAT_20000ee4 & 0xef;
    }
    break;
  case 0x12:
    uVar3 = __aeabi_f2d(param_2);
    uVar3 = trunc((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    DAT_20000ee6 = __aeabi_d2uiz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    break;
  case 0x13:
    DAT_20000ee8 = param_2;
    break;
  case 0x14:
    DAT_20000eec = param_2;
    break;
  case 0x15:
    uVar3 = __aeabi_f2d(param_2);
    uVar3 = round((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    DAT_20000ef0 = __aeabi_d2uiz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    break;
  case 0x16:
    DAT_20000ef4 = param_2;
    break;
  case 0x17:
    uVar3 = __aeabi_f2d(param_2);
    uVar3 = trunc((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    DAT_20000ed6 = __aeabi_d2uiz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    break;
  default:
    return 6;
  }
  write_global_settings();
  return 0;
}


////>>0x080051b4>>FUN_080051b4>>////

void FUN_080051b4(void)

{
  int iVar1;
  undefined auStack_18 [15];
  byte local_9;
  
  iVar1 = read_global_settings();
  if (iVar1 == 0) {
    report_status_message(10);
    settings_reset(1);
    report_grbl_settings();
  }
  for (local_9 = 0; local_9 < 8; local_9 = local_9 + 1) {
    iVar1 = settings_read_coord_data(local_9,auStack_18);
    if (iVar1 == 0) {
      report_status_message(10);
    }
  }
  return;
}


////>>0x08005208>>FUN_08005208>>////

void FUN_08005208(void)

{
  return;
}


////>>0x08005214>>FUN_08005214>>////

void FUN_08005214(void)

{
  return;
}


////>>0x08005220>>FUN_08005220>>////

void FUN_08005220(void)

{
  return;
}


////>>0x0800522c>>FUN_0800522c>>////

void FUN_0800522c(void)

{
  return;
}


////>>0x08005238>>FUN_08005238>>////

void FUN_08005238(void)

{
  DAT_20000e12 = 0;
  spindle_stop();
  return;
}


////>>0x08005250>>FUN_08005250>>////

void FUN_08005250(void)

{
  spindle_off();
  return;
}


////>>0x0800525c>>FUN_0800525c>>////

void FUN_0800525c(byte param_1)

{
  if ((int)(char)param_1 != (uint)DAT_20000e12) {
    plan_synchronize();
    if (param_1 == 0) {
      spindle_stop();
      DAT_20000e12 = param_1;
    }
    else {
      if ((char)param_1 < '\x01') {
        spindle_rev();
      }
      else {
        spindle_fwd();
      }
      spindle_on();
      DAT_20000e12 = param_1;
    }
  }
  return;
}


////>>0x080052ac>>FUN_080052ac>>////



void FUN_080052ac(uint param_1)

{
  _DAT_40021014 = param_1 | _DAT_40021014 & 0xfffffaaf;
  return;
}


////>>0x080052dc>>FUN_080052dc>>////



void FUN_080052dc(uint param_1)

{
  _DAT_40021014 = param_1 | _DAT_40021014 & 0xfffff55f;
  return;
}


////>>0x0800530c>>FUN_0800530c>>////

void FUN_0800530c(void)

{
  return;
}


////>>0x08005318>>FUN_08005318>>////

void FUN_08005318(void)

{
  return;
}


////>>0x08005324>>FUN_08005324>>////

void FUN_08005324(uint param_1)

{
  uint local_14;
  
  local_14 = param_1;
  if (param_1 < 800) {
    local_14 = 800;
  }
  DAT_20000e28 = 1260000000 / local_14;
  set_step_period(DAT_20000e28);
  return;
}


////>>0x08005360>>FUN_08005360>>////

bool FUN_08005360(void)

{
  bool bVar1;
  
  DAT_20000e2c = DAT_20000e28 + DAT_20000e2c;
  bVar1 = 420000 < DAT_20000e2c;
  if (bVar1) {
    DAT_20000e2c = DAT_20000e2c - 420000;
  }
  return bVar1;
}


////>>0x080053a0>>FUN_080053a0>>////

void FUN_080053a0(void)

{
  int iVar1;
  
  dirn_wr(DAT_20000e3e);
  DAT_20000e40 = DAT_20000e3c;
  if (DAT_20000e38 == (ushort *)0x0) {
    DAT_20000e38 = (ushort *)plan_get_current_block();
    if (DAT_20000e38 == (ushort *)0x0) {
      st_go_idle();
      DAT_20000eaa = DAT_20000eaa | 4;
    }
    else {
      if (DAT_20000ea9 == '\x03') {
        DAT_20000e30 = *(uint *)(DAT_20000e38 + 0x14);
        set_step_events_per_minute(DAT_20000e30);
        DAT_20000e2c = 210000;
      }
      DAT_20000e34 = (*(int *)(DAT_20000e38 + 0x18) >> 1) + *(int *)(DAT_20000e38 + 0x18);
      DAT_20000e14 = -(*(int *)(DAT_20000e38 + 8) >> 1);
      DAT_20000e20 = *(int *)(DAT_20000e38 + 8);
      DAT_20000e24 = 0;
      DAT_20000e18 = DAT_20000e14;
      DAT_20000e1c = DAT_20000e14;
    }
  }
  if (DAT_20000e38 != (ushort *)0x0) {
    DAT_20000e3e = *DAT_20000e38;
    DAT_20000e3c = 0;
    DAT_20000e14 = *(int *)(DAT_20000e38 + 2) + DAT_20000e14;
    if (0 < DAT_20000e14) {
      DAT_20000e3c = 0x10;
      DAT_20000e14 = DAT_20000e14 - DAT_20000e20;
      if ((DAT_20000e3e & 0x20) == 0) {
        DAT_20000eac = DAT_20000eac + 1;
      }
      else {
        DAT_20000eac = DAT_20000eac + -1;
      }
    }
    DAT_20000e18 = *(int *)(DAT_20000e38 + 4) + DAT_20000e18;
    if (0 < DAT_20000e18) {
      DAT_20000e3c = DAT_20000e3c | 0x440;
      DAT_20000e18 = DAT_20000e18 - DAT_20000e20;
      if ((DAT_20000e3e & 0x80) == 0) {
        DAT_20000eb0 = DAT_20000eb0 + 1;
      }
      else {
        DAT_20000eb0 = DAT_20000eb0 + -1;
      }
    }
    DAT_20000e1c = *(int *)(DAT_20000e38 + 6) + DAT_20000e1c;
    if (0 < DAT_20000e1c) {
      DAT_20000e3c = DAT_20000e3c | 0x100;
      DAT_20000e1c = DAT_20000e1c - DAT_20000e20;
      if ((DAT_20000e3e & 0x200) == 0) {
        DAT_20000eb4 = DAT_20000eb4 + 1;
      }
      else {
        DAT_20000eb4 = DAT_20000eb4 + -1;
      }
    }
    DAT_20000e24 = DAT_20000e24 + 1;
    if (DAT_20000e24 < *(uint *)(DAT_20000e38 + 8)) {
      if (DAT_20000ea9 == '\x04') {
        iVar1 = iterate_trapezoid_cycle_counter();
        if (iVar1 != 0) {
          if (*(uint *)(DAT_20000e38 + 0x18) < DAT_20000e30) {
            DAT_20000e30 = DAT_20000e30 - *(int *)(DAT_20000e38 + 0x18);
            set_step_events_per_minute(DAT_20000e30);
          }
          else {
            st_go_idle();
            DAT_20000eaa = DAT_20000eaa | 4;
          }
        }
      }
      else if (DAT_20000e24 < *(uint *)(DAT_20000e38 + 0x1a)) {
        iVar1 = iterate_trapezoid_cycle_counter();
        if (iVar1 != 0) {
          DAT_20000e30 = DAT_20000e30 + *(int *)(DAT_20000e38 + 0x18);
          if (*(uint *)(DAT_20000e38 + 0x1e) <= DAT_20000e30) {
            DAT_20000e30 = *(uint *)(DAT_20000e38 + 0x1e);
          }
          set_step_events_per_minute(DAT_20000e30);
        }
      }
      else if (DAT_20000e24 < *(uint *)(DAT_20000e38 + 0x1c)) {
        if (DAT_20000e30 != *(uint *)(DAT_20000e38 + 0x1e)) {
          DAT_20000e30 = *(uint *)(DAT_20000e38 + 0x1e);
          set_step_events_per_minute(DAT_20000e30);
        }
      }
      else if (DAT_20000e24 == *(uint *)(DAT_20000e38 + 0x1c)) {
        if (DAT_20000e30 == *(uint *)(DAT_20000e38 + 0x1e)) {
          DAT_20000e2c = 210000;
        }
        else {
          DAT_20000e2c = 420000 - DAT_20000e2c;
        }
      }
      else {
        iVar1 = iterate_trapezoid_cycle_counter();
        if (iVar1 != 0) {
          if (DAT_20000e34 < DAT_20000e30) {
            DAT_20000e30 = DAT_20000e30 - *(int *)(DAT_20000e38 + 0x18);
          }
          else {
            DAT_20000e30 = DAT_20000e30 >> 1;
          }
          if (DAT_20000e30 < *(uint *)(DAT_20000e38 + 0x16)) {
            DAT_20000e30 = *(uint *)(DAT_20000e38 + 0x16);
          }
          set_step_events_per_minute(DAT_20000e30);
        }
      }
    }
    else {
      DAT_20000e3c = 0;
      DAT_20000e38 = (ushort *)0x0;
      plan_discard_current_block();
    }
  }
  DAT_20000e3c = DAT_20000e3c ^ DAT_20000ed4;
  DAT_20000e3e = DAT_20000e3e ^ DAT_20000ed6;
  return;
}


////>>0x08005760>>FUN_08005760>>////

void FUN_08005760(void)

{
  step_wr(DAT_20000ed4);
  return;
}


////>>0x08005778>>FUN_08005778>>////

void FUN_08005778(void)

{
  step_wr(DAT_20000e40);
  return;
}


////>>0x08005790>>FUN_08005790>>////

void FUN_08005790(void)

{
  stepper_motor_enable();
  if (DAT_20000ea9 == '\x03') {
    DAT_20000e3c = DAT_20000ed4;
    DAT_20000e3e = DAT_20000ed6;
    set_step_pulse_delay(0x69);
    set_step_pulse_time((DAT_20000ec9 + 5) * 0x15);
    step_isr_enable();
  }
  return;
}


////>>0x080057e4>>FUN_080057e4>>////

void FUN_080057e4(void)

{
  step_isr_disable();
  if ((DAT_20000ef8 != -1) || ((DAT_20000eaa & 0x20) != 0)) {
    stepper_motor_disable();
  }
  return;
}


////>>0x08005814>>FUN_08005814>>////

void FUN_08005814(void)

{
  memset(&DAT_20000e14,0,0x24);
  set_step_events_per_minute(800);
  DAT_20000e38 = 0;
  return;
}


////>>0x0800583c>>FUN_0800583c>>////

void FUN_0800583c(void)

{
  step_wr(DAT_20000ed4);
  st_wake_up();
  st_go_idle();
  return;
}


////>>0x0800585c>>FUN_0800585c>>////

void FUN_0800585c(void)

{
  if (DAT_20000ea9 == '\x02') {
    DAT_20000ea9 = '\x03';
    st_wake_up();
  }
  return;
}


////>>0x0800587c>>FUN_0800587c>>////

void FUN_0800587c(void)

{
  if (DAT_20000ea9 == '\x03') {
    DAT_20000ea9 = '\x04';
    DAT_20000eb8 = 0;
  }
  return;
}


////>>0x080058a0>>FUN_080058a0>>////

void FUN_080058a0(void)

{
  if (DAT_20000e38 == 0) {
    DAT_20000ea9 = 0;
  }
  else {
    plan_cycle_reinitialize(*(int *)(DAT_20000e38 + 0x10) - DAT_20000e24);
    DAT_20000e30 = 0;
    set_step_events_per_minute(0);
    DAT_20000e2c = 210000;
    DAT_20000e24 = 0;
    DAT_20000ea9 = 2;
  }
  return;
}


////>>0x08005900>>FUN_08005900>>////

undefined4 FUN_08005900(byte param_1)

{
  if (param_1 == 0x7e) {
    DAT_20000eaa = DAT_20000eaa | 2;
    return 1;
  }
  if (param_1 < 0x7f) {
    if (param_1 == 0x3f) {
      DAT_20000eaa = DAT_20000eaa | 1;
      return 1;
    }
    if (param_1 < 0x40) {
      if (param_1 == 0x18) {
        mc_reset();
        return 1;
      }
      if (param_1 == 0x21) {
        DAT_20000eaa = DAT_20000eaa | 8;
        return 1;
      }
    }
  }
  return 0;
}


////>>0x0800597c>>FUN_0800597c>>////

void FUN_0800597c(void)

{
  software_interrupt(0x3f);
  return;
}


////>>0x08005984>>FUN_08005984>>////

undefined4 FUN_08005984(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_20000e44 == 0) {
    uVar1 = aflCall(1,param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x080059b4>>FUN_080059b4>>////



undefined4 FUN_080059b4(void)

{
  _DAT_40023c00 = _DAT_40023c00 | 0x700;
  HAL_SYSTICK_Config(16000);
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_MspInit();
  return 0;
}


////>>0x080059f8>>FUN_080059f8>>////



undefined4 FUN_080059f8(void)

{
  _DAT_40023820 = 0;
  _DAT_40023824 = 0;
  _DAT_40023810 = 0;
  _DAT_40023814 = 0;
  _DAT_40023818 = 0;
  HAL_MspDeInit();
  return 0;
}


////>>0x08005a50>>FUN_08005a50>>////

void FUN_08005a50(void)

{
  return;
}


////>>0x08005a5c>>FUN_08005a5c>>////

void FUN_08005a5c(void)

{
  return;
}


////>>0x08005a68>>FUN_08005a68>>////

void FUN_08005a68(void)

{
  DAT_20000e48 = DAT_20000e48 + 1;
  return;
}


////>>0x08005a84>>FUN_08005a84>>////

undefined4 FUN_08005a84(void)

{
  return DAT_20000e48;
}


////>>0x08005a98>>FUN_08005a98>>////

void FUN_08005a98(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = HAL_GetTick();
  do {
    uVar2 = HAL_GetTick();
  } while (uVar2 < (uint)(param_1 + iVar1));
  return;
}


////>>0x08005bdc>>FUN_08005bdc>>////

void FUN_08005bdc(byte param_1,uint param_2)

{
  if ((char)param_1 < '\0') {
    *(char *)((param_1 & 0xf) + 0xe000ed14) = (char)((param_2 & 0xff) << 4);
  }
  else {
    *(char *)((char)param_1 + -0x1fff1c00) = (char)((param_2 & 0xff) << 4);
  }
  return;
}


////>>0x08005c30>>FUN_08005c30>>////



bool FUN_08005c30(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 - 1U < 0x1000000;
  if (bVar1) {
    _DAT_e000e014 = param_1 + -1;
    FUN_08005bdc(0xffffffff,0xf);
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
  }
  return !bVar1;
}


////>>0x08005cec>>FUN_08005cec>>////



undefined4 FUN_08005cec(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*param_1 & 1) != 0) {
    if (((_DAT_40023808 & 0xc) == 4) ||
       (((_DAT_40023808 & 0xc) == 8 && ((_DAT_40023804 & 0x400000) == 0x400000)))) {
      if (((_DAT_40023800 & 0x20000) != 0) && (param_1[1] != 1)) {
        return 1;
      }
    }
    else {
      _DAT_40023800 = (uint3)_DAT_40023800;
      iVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 0x20000) != 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 5000U <= uVar2) {
          return 3;
        }
      }
      _DAT_40023800 = CONCAT13(DAT_40023800_3,CONCAT12((char)param_1[1],_DAT_40023800));
      if (param_1[1] == 1) {
        iVar1 = HAL_GetTick();
        while ((_DAT_40023800 & 0x20000) == 0) {
          uVar2 = HAL_GetTick();
          if (iVar1 + 5000U <= uVar2) {
            return 3;
          }
        }
      }
      else {
        iVar1 = HAL_GetTick();
        while ((_DAT_40023800 & 0x20000) != 0) {
          uVar2 = HAL_GetTick();
          if (iVar1 + 5000U <= uVar2) {
            return 3;
          }
        }
      }
    }
  }
  if ((*param_1 & 2) != 0) {
    if (((_DAT_40023808 & 0xc) == 0) ||
       (((_DAT_40023808 & 0xc) == 8 && ((_DAT_40023804 & 0x400000) == 0)))) {
      if (((_DAT_40023800 & 2) != 0) && (param_1[3] != 1)) {
        return 1;
      }
    }
    else if (param_1[3] == 0) {
      _DAT_42470000 = 0;
      iVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      _DAT_42470000 = 1;
      iVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
      _DAT_40023800 = param_1[4] << 3 | _DAT_40023800 & 0xffffff07;
    }
  }
  if ((*param_1 & 8) != 0) {
    if (param_1[5] == 0) {
      _DAT_42470e80 = 0;
      iVar1 = HAL_GetTick();
      while ((_DAT_40023874 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      _DAT_42470e80 = 1;
      iVar1 = HAL_GetTick();
      while ((_DAT_40023874 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
  }
  if ((*param_1 & 4) != 0) {
    _DAT_40023840 = _DAT_40023840 | 0x10000000;
    _DAT_40007000 = _DAT_40007000 | 0x100;
    iVar1 = HAL_GetTick();
    while ((_DAT_40007000 & 0x100) == 0) {
      uVar2 = HAL_GetTick();
      if (iVar1 + 100U <= uVar2) {
        return 3;
      }
    }
    _DAT_40023870 = _DAT_40023870 & 0xffffff00;
    iVar1 = HAL_GetTick();
    while ((_DAT_40023870 & 2) != 0) {
      uVar2 = HAL_GetTick();
      if (iVar1 + 5000U <= uVar2) {
        return 3;
      }
    }
    _DAT_40023870 = CONCAT31(DAT_40023870_1,(char)param_1[2]);
    if (param_1[2] == 1) {
      iVar1 = HAL_GetTick();
      while ((_DAT_40023870 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 5000U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      iVar1 = HAL_GetTick();
      while ((_DAT_40023870 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 5000U <= uVar2) {
          return 3;
        }
      }
    }
  }
  if (param_1[6] != 0) {
    if ((_DAT_40023808 & 0xc) == 8) {
      return 1;
    }
    if (param_1[6] == 2) {
      _DAT_42470060 = 0;
      iVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 0x2000000) != 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
      _DAT_40023804 =
           param_1[0xb] << 0x18 |
           param_1[8] | param_1[9] << 6 | ((param_1[10] >> 1) - 1) * 0x10000 | param_1[7] |
           0x20000000;
      _DAT_42470060 = 1;
      iVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 0x2000000) == 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
    else {
      _DAT_42470060 = 0;
      iVar1 = HAL_GetTick();
      while ((_DAT_40023800 & 0x2000000) != 0) {
        uVar2 = HAL_GetTick();
        if (iVar1 + 100U <= uVar2) {
          return 3;
        }
      }
    }
  }
  return 0;
}


////>>0x0800618c>>FUN_0800618c>>////



undefined4 FUN_0800618c(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((_DAT_40023c00 & 0xf) < param_2) {
    _DAT_40023c00 = CONCAT31(DAT_40023c00_1,(char)param_2);
    if (param_2 != (param_2 & 0xf)) {
      return 1;
    }
    if ((*param_1 & 1) != 0) {
      if (param_1[1] == 1) {
        if ((_DAT_40023800 & 0x20000) == 0) {
          return 1;
        }
      }
      else if ((param_1[1] != 2) && ((_DAT_40023800 & 2) == 0)) {
        return 1;
      }
      _DAT_40023808 = param_1[1] | _DAT_40023808 & 0xfffffffc;
      iVar1 = HAL_GetTick();
      uVar3 = iVar1 + 5000;
      if (param_1[1] == 1) {
        while ((_DAT_40023808 & 0xc) != 4) {
          uVar2 = HAL_GetTick();
          if (uVar3 <= uVar2) {
            return 3;
          }
        }
      }
      else if (param_1[1] == 2) {
        while ((_DAT_40023808 & 0xc) != 8) {
          uVar2 = HAL_GetTick();
          if (uVar3 <= uVar2) {
            return 3;
          }
        }
      }
      else {
        while ((_DAT_40023808 & 0xc) != 0) {
          uVar2 = HAL_GetTick();
          if (uVar3 <= uVar2) {
            return 3;
          }
        }
      }
    }
  }
  else {
    if ((*param_1 & 1) != 0) {
      if (param_1[1] == 1) {
        if ((_DAT_40023800 & 0x20000) == 0) {
          return 1;
        }
      }
      else if (param_1[1] == 2) {
        if ((_DAT_40023800 & 0x2000000) == 0) {
          return 1;
        }
      }
      else if ((_DAT_40023800 & 2) == 0) {
        return 1;
      }
      _DAT_40023808 = param_1[1] | _DAT_40023808 & 0xfffffffc;
      iVar1 = HAL_GetTick();
      uVar3 = iVar1 + 5000;
      if (param_1[1] == 1) {
        while ((_DAT_40023808 & 0xc) != 4) {
          uVar2 = HAL_GetTick();
          if (uVar3 <= uVar2) {
            return 3;
          }
        }
      }
      else if (param_1[1] == 2) {
        while ((_DAT_40023808 & 0xc) != 8) {
          uVar2 = HAL_GetTick();
          if (uVar3 <= uVar2) {
            return 3;
          }
        }
      }
      else {
        while ((_DAT_40023808 & 0xc) != 0) {
          uVar2 = HAL_GetTick();
          if (uVar3 <= uVar2) {
            return 3;
          }
        }
      }
    }
    _DAT_40023c00 = CONCAT31(DAT_40023c00_1,(char)param_2);
    if (param_2 != (param_2 & 0xf)) {
      return 1;
    }
  }
  if ((*param_1 & 2) != 0) {
    _DAT_40023808 = param_1[2] | _DAT_40023808 & 0xffffff0f;
  }
  if ((*param_1 & 4) != 0) {
    _DAT_40023808 = param_1[3] | _DAT_40023808 & 0xffffe3ff;
  }
  if ((*param_1 & 8) != 0) {
    _DAT_40023808 = param_1[4] << 3 | _DAT_40023808 & 0xffff1fff;
  }
  uVar4 = HAL_RCC_GetHCLKFreq();
  FUN_08005c30((uint)uVar4 / 1000,(int)((ulonglong)uVar4 >> 0x20),(uint)uVar4 * 0x10624dd3);
  return 0;
}


////>>0x0800640c>>FUN_0800640c>>////



void FUN_0800640c(int param_1,uint param_2,uint param_3)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_1 == 0) {
    _DAT_40023830 = _DAT_40023830 | 1;
    local_1c = 0x100;
    local_18 = 2;
    local_10 = 3;
    local_14 = 0;
    local_c = 0;
    HAL_GPIO_Init(0x40020000,&local_1c);
    _DAT_40023808 = param_3 | param_2 | _DAT_40023808 & 0xf89fffff;
  }
  else {
    _DAT_40023830 = _DAT_40023830 | 4;
    local_1c = 0x200;
    local_18 = 2;
    local_10 = 3;
    local_14 = 0;
    local_c = 0;
    HAL_GPIO_Init(0x40020800,&local_1c);
    _DAT_40023808 = param_2 | param_3 << 3 | _DAT_40023808 & 0x7ffffff;
  }
  return;
}


////>>0x080064ec>>FUN_080064ec>>////



uint FUN_080064ec(void)

{
  uint uVar1;
  uint local_c;
  
  uVar1 = _DAT_40023808 & 0xc;
  if (uVar1 == 8) {
    if ((_DAT_40023804 & 0x400000) == 0) {
      local_c = ((_DAT_40023804 & 0x7fc0) >> 6) * (16000000 / (_DAT_40023804 & 0x3f));
    }
    else {
      local_c = ((_DAT_40023804 & 0x7fc0) >> 6) * (8000000 / (_DAT_40023804 & 0x3f));
    }
    return local_c / ((((_DAT_40023804 & 0x30000) >> 0x10) + 1) * 2);
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


////>>0x08006628>>FUN_08006628>>////



uint FUN_08006628(void)

{
  uint uVar1;
  
  uVar1 = HAL_RCC_GetSysClockFreq();
  DAT_20000000 = uVar1 >> (&DAT_0800bcac)[(_DAT_40023808 & 0xf0) >> 4];
  return uVar1 >> (&DAT_0800bcac)[(_DAT_40023808 & 0xf0) >> 4];
}


////>>0x08006680>>FUN_08006680>>////



uint FUN_08006680(void)

{
  uint uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> (&DAT_0800bcac)[(_DAT_40023808 & 0x1c00) >> 10];
}


////>>0x080066cc>>FUN_080066cc>>////



uint FUN_080066cc(void)

{
  uint uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> (&DAT_0800bcac)[(_DAT_40023808 & 0xe000) >> 0xd];
}


////>>0x08006950>>FUN_08006950>>////



void FUN_08006950(uint param_1)

{
  _DAT_e000ed0c = _DAT_e000ed0c & 0xf8ff | (param_1 & 7) << 8 | 0x5fa0000;
  return;
}


////>>0x08006998>>FUN_08006998>>////



uint FUN_08006998(void)

{
  return _DAT_e000ed0c >> 8 & 7;
}


////>>0x080069b4>>FUN_080069b4>>////

void FUN_080069b4(byte param_1)

{
  *(int *)(((uint)(int)(char)param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x080069e4>>FUN_080069e4>>////

void FUN_080069e4(byte param_1)

{
  *(int *)((((uint)(int)(char)param_1 >> 5) + 0x20) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x08006a18>>FUN_08006a18>>////

bool FUN_08006a18(byte param_1)

{
  return (*(uint *)((((uint)(int)(char)param_1 >> 5) + 0x40) * 4 + -0x1fff1f00) &
         1 << (param_1 & 0x1f)) != 0;
}


////>>0x08006a58>>FUN_08006a58>>////

void FUN_08006a58(byte param_1)

{
  *(int *)((((uint)(int)(char)param_1 >> 5) + 0x40) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x08006a8c>>FUN_08006a8c>>////

void FUN_08006a8c(byte param_1)

{
  *(int *)((((uint)(int)(char)param_1 >> 5) + 0x60) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x08006ac0>>FUN_08006ac0>>////

bool FUN_08006ac0(byte param_1)

{
  return (*(uint *)((((uint)(int)(char)param_1 >> 5) + 0x80) * 4 + -0x1fff1f00) &
         1 << (param_1 & 0x1f)) != 0;
}


////>>0x08006b00>>FUN_08006b00>>////

void FUN_08006b00(byte param_1,uint param_2)

{
  if ((char)param_1 < '\0') {
    *(char *)((param_1 & 0xf) + 0xe000ed14) = (char)((param_2 & 0xff) << 4);
  }
  else {
    *(char *)((char)param_1 + -0x1fff1c00) = (char)((param_2 & 0xff) << 4);
  }
  return;
}


////>>0x08006b54>>FUN_08006b54>>////

byte FUN_08006b54(byte param_1)

{
  byte bVar1;
  
  if ((char)param_1 < '\0') {
    bVar1 = *(byte *)((param_1 & 0xf) + 0xe000ed14);
  }
  else {
    bVar1 = *(byte *)((char)param_1 + -0x1fff1c00);
  }
  return bVar1 >> 4;
}


////>>0x08006ba0>>FUN_08006ba0>>////

uint FUN_08006ba0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  param_1 = param_1 & 7;
  uVar1 = 7 - param_1;
  if (3 < uVar1) {
    uVar1 = 4;
  }
  if (param_1 + 4 < 7) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 - 3;
  }
  return param_3 & (1 << (param_1 & 0xff)) - 1U |
         ((1 << (uVar1 & 0xff)) - 1U & param_2) << (param_1 & 0xff);
}


////>>0x08006c04>>FUN_08006c04>>////

void FUN_08006c04(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  param_2 = param_2 & 7;
  uVar1 = 7 - param_2;
  if (3 < uVar1) {
    uVar1 = 4;
  }
  if (param_2 + 4 < 7) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 - 3;
  }
  *param_3 = (1 << (uVar1 & 0xff)) - 1U & param_1 >> (param_2 & 0xff);
  *param_4 = (1 << (param_2 & 0xff)) - 1U & param_1;
  return;
}


////>>0x08006c70>>FUN_08006c70>>////

void FUN_08006c70(void)

{
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08006c9c>>FUN_08006c9c>>////



bool FUN_08006c9c(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 - 1U < 0x1000000;
  if (bVar1) {
    _DAT_e000e014 = param_1 + -1;
    NVIC_SetPriority(0xffffffff,0xf);
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
  }
  return !bVar1;
}


////>>0x08006ce0>>FUN_08006ce0>>////

void FUN_08006ce0(undefined4 param_1)

{
  NVIC_SetPriorityGrouping(param_1);
  return;
}


////>>0x08006cf6>>FUN_08006cf6>>////

void FUN_08006cf6(char param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = NVIC_GetPriorityGrouping();
  uVar1 = NVIC_EncodePriority(uVar1,param_2,param_3);
  NVIC_SetPriority((int)param_1,uVar1);
  return;
}


////>>0x08006d2e>>FUN_08006d2e>>////

void FUN_08006d2e(char param_1)

{
  FUN_080069b4((int)param_1);
  return;
}


////>>0x08006d4a>>FUN_08006d4a>>////

void FUN_08006d4a(char param_1)

{
  NVIC_DisableIRQ((int)param_1);
  return;
}


////>>0x08006d66>>FUN_08006d66>>////

void FUN_08006d66(void)

{
  NVIC_SystemReset();
  return;
}


////>>0x08006d72>>FUN_08006d72>>////

undefined4 FUN_08006d72(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = SysTick_Config(param_1);
  return uVar1;
}


////>>0x08006d8a>>FUN_08006d8a>>////

undefined4 FUN_08006d8a(void)

{
  undefined4 uVar1;
  
  uVar1 = NVIC_GetPriorityGrouping();
  return uVar1;
}


////>>0x08006d98>>FUN_08006d98>>////

void FUN_08006d98(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = NVIC_GetPriority((int)param_1);
  NVIC_DecodePriority(uVar1,param_2,param_3,param_4);
  return;
}


////>>0x08006dc4>>FUN_08006dc4>>////

void FUN_08006dc4(char param_1)

{
  NVIC_SetPendingIRQ((int)param_1);
  return;
}


////>>0x08006de0>>FUN_08006de0>>////

undefined4 FUN_08006de0(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = NVIC_GetPendingIRQ((int)param_1);
  return uVar1;
}


////>>0x08006dfe>>FUN_08006dfe>>////

void FUN_08006dfe(char param_1)

{
  NVIC_ClearPendingIRQ((int)param_1);
  return;
}


////>>0x08006e1a>>FUN_08006e1a>>////

undefined4 FUN_08006e1a(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = NVIC_GetActive((int)param_1);
  return uVar1;
}


////>>0x08006e88>>FUN_08006e88>>////



void FUN_08006e88(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    uVar1 = 1 << (local_c & 0xff);
    uVar2 = *param_2 & uVar1;
    if (uVar2 == uVar1) {
      if ((param_2[1] == 2) || (param_2[1] == 0x12)) {
        uVar1 = param_2[4];
        param_1[(local_c >> 3) + 8] = param_1[(local_c >> 3) + 8] & ~(0xf << ((local_c & 7) << 2));
        param_1[(local_c >> 3) + 8] = param_1[(local_c >> 3) + 8] | uVar1 << ((local_c & 7) << 2);
      }
      *param_1 = *param_1 & ~(3 << ((local_c & 0x7f) << 1));
      *param_1 = *param_1 | (param_2[1] & 3) << ((local_c & 0x7f) << 1);
      if ((((param_2[1] == 1) || (param_2[1] == 2)) || (param_2[1] == 0x11)) || (param_2[1] == 0x12)
         ) {
        param_1[2] = param_1[2] & ~(3 << ((local_c & 0x7f) << 1));
        param_1[2] = param_1[2] | param_2[3] << ((local_c & 0x7f) << 1);
        param_1[1] = param_1[1] & ~(1 << (local_c & 0xff));
        param_1[1] = param_1[1] | (param_2[1] >> 4 & 1) << (local_c & 0xff);
      }
      param_1[3] = param_1[3] & ~(3 << ((local_c & 0x7f) << 1));
      param_1[3] = param_1[3] | param_2[2] << ((local_c & 0x7f) << 1);
      if ((param_2[1] & 0x10000000) != 0) {
        _DAT_40023844 = _DAT_40023844 | 0x4000;
        *(uint *)(((local_c >> 2) + 2) * 4 + 0x40013800) =
             ~(0xf << ((local_c & 3) << 2)) & *(uint *)(((local_c >> 2) + 2) * 4 + 0x40013800);
        if (param_1 == (uint *)0x40020000) {
          iVar3 = 0;
        }
        else if (param_1 == (uint *)0x40020400) {
          iVar3 = 1;
        }
        else if (param_1 == (uint *)0x40020800) {
          iVar3 = 2;
        }
        else if (param_1 == (uint *)0x40020c00) {
          iVar3 = 3;
        }
        else if (param_1 == (uint *)0x40021000) {
          iVar3 = 4;
        }
        else if (param_1 == (uint *)0x40021400) {
          iVar3 = 5;
        }
        else if (param_1 == (uint *)0x40021800) {
          iVar3 = 6;
        }
        else if (param_1 == (uint *)0x40021c00) {
          iVar3 = 7;
        }
        else if (param_1 == (uint *)0x40022000) {
          iVar3 = 8;
        }
        else if (param_1 == (uint *)0x40022400) {
          iVar3 = 9;
        }
        else {
          iVar3 = 10;
        }
        *(uint *)(((local_c >> 2) + 2) * 4 + 0x40013800) =
             iVar3 << ((local_c & 3) << 2) | *(uint *)(((local_c >> 2) + 2) * 4 + 0x40013800);
        _DAT_40013c00 = ~uVar2 & _DAT_40013c00;
        _DAT_40013c04 = ~uVar2 & _DAT_40013c04;
        if ((param_2[1] & 0x10000) != 0) {
          _DAT_40013c00 = uVar2 | _DAT_40013c00;
        }
        if ((param_2[1] & 0x20000) != 0) {
          _DAT_40013c04 = uVar2 | _DAT_40013c04;
        }
        _DAT_40013c08 = ~uVar2 & _DAT_40013c08;
        _DAT_40013c0c = ~uVar2 & _DAT_40013c0c;
        if ((param_2[1] & 0x100000) != 0) {
          _DAT_40013c08 = uVar2 | _DAT_40013c08;
        }
        if ((param_2[1] & 0x200000) != 0) {
          _DAT_40013c0c = uVar2 | _DAT_40013c0c;
        }
      }
    }
  }
  return;
}


////>>0x0800733e>>FUN_0800733e>>////

void FUN_0800733e(int param_1,undefined2 param_2,char param_3)

{
  if (param_3 == '\0') {
    *(undefined2 *)(param_1 + 0x1a) = param_2;
  }
  else {
    *(undefined2 *)(param_1 + 0x18) = param_2;
  }
  return;
}


////>>0x0800738e>>FUN_0800738e>>////



void FUN_0800738e(ushort param_1)

{
  if ((param_1 & _DAT_40013c14) != 0) {
    _DAT_40013c14 = (uint)param_1;
    HAL_GPIO_EXTI_Callback(param_1);
  }
  return;
}


////>>0x080073c0>>FUN_080073c0>>////

void FUN_080073c0(void)

{
  return;
}


////>>0x080073d4>>FUN_080073d4>>////

void FUN_080073d4(uint param_1)

{
  *(short *)(((int)param_1 >> 4) * 0x400 + 0x4002001a) = (short)(1 << (param_1 & 0xf));
  return;
}


////>>0x08007402>>FUN_08007402>>////

void FUN_08007402(uint param_1)

{
  *(short *)(((int)param_1 >> 4) * 0x400 + 0x40020018) = (short)(1 << (param_1 & 0xf));
  return;
}


////>>0x08007430>>FUN_08007430>>////

void FUN_08007430(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08007436>>FUN_08007436>>////



void FUN_08007436(void)

{
  int iVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  _DAT_40023840 = _DAT_40023840 | 0x10000000;
  _DAT_40007000 = _DAT_40007000 | 0xc000;
  local_4c = 1;
  local_48 = 1;
  local_34 = 2;
  local_30 = 0x400000;
  local_2c = 8;
  local_28 = 0x150;
  local_24 = 2;
  local_20 = 7;
  iVar1 = HAL_RCC_OscConfig(&local_4c);
  if (iVar1 != 0) {
    Error_Handler();
  }
  local_1c = 0xf;
  local_18 = 2;
  local_14 = 0;
  local_10 = 0x1400;
  local_c = 0x1000;
  iVar1 = HAL_RCC_ClockConfig(&local_1c,5);
  if (iVar1 != 0) {
    Error_Handler();
  }
  return;
}


////>>0x080074c8>>FUN_080074c8>>////

void FUN_080074c8(uint param_1)

{
  if ((param_1 & 1) != 0) {
    gpio_set(0x3e);
  }
  if ((DAT_20000e4c != 0) && ((param_1 & 0x1e) != 0)) {
    limits_isr();
  }
  if ((DAT_20000e50 != 0) && ((param_1 & 0x80) != 0)) {
    buttons_isr(param_1);
  }
  return;
}


////>>0x08007520>>FUN_08007520>>////

void FUN_08007520(uint param_1)

{
  if ((param_1 & 1) != 0) {
    gpio_clr(0x3e);
  }
  return;
}


////>>0x08007540>>FUN_08007540>>////

undefined4 FUN_08007540(void)

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


////>>0x0800756c>>FUN_0800756c>>////



void FUN_0800756c(void)

{
  _DAT_40023808 = 0;
  _DAT_40023804 = 0x24003010;
  _DAT_40023800 = _DAT_40023800 & 0xfef2ffff | 1;
  _DAT_4002380c = 0;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x080076c8>>FUN_080076c8>>////

void FUN_080076c8(uint param_1)

{
  *(uint *)(((int)param_1 >> 4) * 0x400 + 0x40020014) =
       *(uint *)(((int)param_1 >> 4) * 0x400 + 0x40020014) ^ 1 << (param_1 & 0xf);
  return;
}


////>>0x08007756>>FUN_08007756>>////

void FUN_08007756(void)

{
  uint uVar1;
  
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


////>>0x0800778c>>FUN_0800778c>>////



void FUN_0800778c(void)

{
  int iVar1;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint *local_10;
  uint local_c;
  
  for (local_c = 0; local_c < 0x11; local_c = local_c + 1) {
    iVar1 = local_c * 0x18;
    local_10 = (uint *)(&DAT_0800bcbc + iVar1);
    _DAT_40023830 = _DAT_40023830 | 1 << (*local_10 >> 4 & 0xff);
    local_24 = 1 << (*local_10 & 0xf);
    local_20 = *(undefined4 *)(&DAT_0800bcc0 + iVar1);
    local_1c = *(undefined4 *)(&DAT_0800bcc4 + iVar1);
    local_18 = *(undefined4 *)(&DAT_0800bcc8 + iVar1);
    local_14 = *(undefined4 *)(&DAT_0800bccc + iVar1);
    HAL_GPIO_Init(((*local_10 >> 4) + 0x100080) * 0x400,&local_24);
    if (-1 < (int)local_10[5]) {
      HAL_GPIO_WritePin(((*local_10 >> 4) + 0x100080) * 0x400,1 << (*local_10 & 0xf) & 0xffff,
                        local_10[5] & 0xff);
    }
  }
  return;
}


////>>0x08007854>>FUN_08007854>>////

uint FUN_08007854(uint param_1)

{
  return *(uint *)(((int)param_1 >> 4) * 0x400 + 0x40020010) >> (param_1 & 0xf) & 1;
}


////>>0x08007884>>FUN_08007884>>////

uint FUN_08007884(void)

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


////>>0x080078f4>>FUN_080078f4>>////

uint FUN_080078f4(void)

{
  int local_10;
  uint local_c;
  
  local_c = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    local_c = *(uint *)(&DAT_20000e54 + local_10 * 4) | local_c;
  }
  return local_c;
}


////>>0x08007930>>FUN_08007930>>////

void FUN_08007930(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = DAT_20000e68;
  uVar2 = DAT_20000e64;
  if (DAT_20000e6c != 0) {
    uVar3 = debounce_input();
    *(undefined4 *)(&DAT_20000e54 + iVar1 * 4) = uVar3;
    if (DAT_20000e68 == 3) {
      DAT_20000e68 = 0;
    }
    else {
      DAT_20000e68 = DAT_20000e68 + 1;
    }
    uVar4 = debounce_rd();
    uVar2 = DAT_20000e64;
    if (uVar4 != DAT_20000e64) {
      uVar5 = ~uVar4 & DAT_20000e64;
      if ((~DAT_20000e64 & uVar4) != 0) {
        FUN_080074c8(~DAT_20000e64 & uVar4);
      }
      uVar2 = uVar4;
      if (uVar5 != 0) {
        FUN_08007520(uVar5);
      }
    }
  }
  DAT_20000e64 = uVar2;
  return;
}


////>>0x080079c0>>FUN_080079c0>>////

void FUN_080079c0(void)

{
  memset(&DAT_20000e54,0,0x18);
  DAT_20000e6c = 1;
  return;
}


////>>0x080079e0>>FUN_080079e0>>////

void FUN_080079e0(byte param_1)

{
  *(int *)(((uint)(int)(char)param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x08007a10>>FUN_08007a10>>////



void FUN_08007a10(undefined *param_1)

{
  if (param_1 == (undefined *)0x40000000) {
    _DAT_40023840 = _DAT_40023840 | 1;
  }
  else if (param_1 == (undefined *)0x40000400) {
    _DAT_40023840 = _DAT_40023840 | 2;
  }
  else if (param_1 == &DAT_40000800) {
    _DAT_40023840 = _DAT_40023840 | 4;
  }
  return;
}


////>>0x08007a70>>FUN_08007a70>>////

void FUN_08007a70(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined local_c;
  
  if (param_1 == (undefined *)0x40000000) {
    local_c = 0x1c;
  }
  else if (param_1 == (undefined *)0x40000400) {
    local_c = 0x1d;
  }
  else {
    if (param_1 != &DAT_40000800) {
      return;
    }
    local_c = 0x1e;
  }
  HAL_NVIC_SetPriority(local_c,param_2,param_3);
  NVIC_EnableIRQ(local_c);
  return;
}


////>>0x08007ad0>>FUN_08007ad0>>////



void FUN_08007ad0(void)

{
  enable_tim_clock(0x40000000);
  _DAT_40000000 = 0;
  _DAT_40000004 = 0;
  _DAT_40000008 = 0;
  _DAT_4000000c = 0;
  _DAT_40000010 = 0;
  _DAT_40000018 = 0;
  _DAT_4000001c = 0;
  _DAT_40000020 = 0;
  _DAT_40000024 = 0;
  _DAT_40000028 = DAT_20000000 / 42000000 - 1;
  _DAT_4000002c = 0;
  _DAT_40000034 = 0;
  _DAT_40000038 = 0;
  _DAT_4000003c = 0;
  _DAT_40000040 = 0;
  _DAT_40000048 = 0;
  _DAT_4000004c = 0;
  enable_tim_interrupt(0x40000000,0,0);
  return;
}


////>>0x08007b70>>FUN_08007b70>>////



void FUN_08007b70(void)

{
  uint local_c;
  
  local_c = 1;
  if (_DAT_40000034 != 0) {
    local_c = 3;
  }
  if (_DAT_40000038 != 0) {
    local_c = local_c | 4;
  }
  _DAT_4000000c = _DAT_4000000c | local_c;
  _DAT_40000000 = _DAT_40000000 | 1;
  return;
}


////>>0x08007bc2>>FUN_08007bc2>>////



void FUN_08007bc2(void)

{
  _DAT_40000000 = _DAT_40000000 & 0xfffffffe;
  _DAT_4000000c = _DAT_4000000c & 0xfffffff8;
  return;
}


////>>0x08007bf0>>FUN_08007bf0>>////



void FUN_08007bf0(uint param_1)

{
  _DAT_4000002c = param_1;
  if (param_1 <= _DAT_40000024) {
    _DAT_40000024 = param_1;
  }
  return;
}


////>>0x08007c40>>FUN_08007c40>>////



void FUN_08007c40(undefined4 param_1)

{
  _DAT_40000034 = param_1;
  return;
}


////>>0x08007c5e>>FUN_08007c5e>>////



void FUN_08007c5e(undefined4 param_1)

{
  _DAT_40000038 = param_1;
  return;
}


////>>0x08007c7c>>FUN_08007c7c>>////



void FUN_08007c7c(void)

{
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


////>>0x08007d08>>FUN_08007d08>>////



void FUN_08007d08(void)

{
  enable_tim_clock(&DAT_40000800);
  _DAT_40000800 = 0x80;
  _DAT_40000804 = 0;
  _DAT_40000808 = 0;
  _DAT_4000080c = 0;
  _DAT_40000810 = 0;
  _DAT_40000818 = 0x6800;
  _DAT_4000081c = 0;
  _DAT_40000820 = 0;
  _DAT_40000824 = 0;
  _DAT_40000828 = DAT_20000000 / 4800000 - 1;
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


////>>0x08007da8>>FUN_08007da8>>////



void FUN_08007da8(void)

{
  _DAT_40000820 = _DAT_40000820 | 0x10;
  _DAT_40000800 = _DAT_40000800 | 1;
  return;
}


////>>0x08007e08>>FUN_08007e08>>////

void FUN_08007e08(void)

{
  step_timer_init();
  g540_timer_init();
  g540_timer_start();
  return;
}


////>>0x08007e1c>>FUN_08007e1c>>////



void FUN_08007e1c(byte param_1)

{
  do {
  } while ((_DAT_40004400 & 0x80) == 0);
  _DAT_40004404 = (uint)param_1;
  return;
}


////>>0x08007e58>>FUN_08007e58>>////



bool FUN_08007e58(void)

{
  return (_DAT_40004400 & 0x20) != 0;
}


////>>0x08007e84>>FUN_08007e84>>////



uint FUN_08007e84(void)

{
  return _DAT_40004404 & 0xff;
}


////>>0x08007ea4>>FUN_08007ea4>>////



void FUN_08007ea4(undefined *param_1)

{
  if (param_1 == (undefined *)0x40011000) {
    _DAT_40023844 = _DAT_40023844 | 0x10;
  }
  else if (param_1 == &DAT_40004400) {
    _DAT_40023840 = _DAT_40023840 | 0x20000;
  }
  else if (param_1 == (undefined *)0x40004800) {
    _DAT_40023840 = _DAT_40023840 | 0x40000;
  }
  else if (param_1 == (undefined *)0x40004c00) {
    _DAT_40023840 = _DAT_40023840 | 0x80000;
  }
  else if (param_1 == (undefined *)0x40005000) {
    _DAT_40023840 = _DAT_40023840 | 0x100000;
  }
  else if (param_1 == (undefined *)0x40011400) {
    _DAT_40023844 = _DAT_40023844 | 0x20;
  }
  return;
}


////>>0x08007f54>>FUN_08007f54>>////

void FUN_08007f54(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*(uint *)(param_1 + 0xc) & 0x8000) == 0) {
    if ((param_1 != 0x40011000) && (param_1 != 0x40011400)) {
      uVar4 = HAL_RCC_GetPCLK1Freq();
      uVar1 = (ulonglong)(uint)((int)uVar4 * 0x19) / (ulonglong)(uint)(param_2 << 2);
      iVar2 = HAL_RCC_GetPCLK1Freq
                        ((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)(uVar1 * 0x51eb851f));
      iVar3 = HAL_RCC_GetPCLK1Freq();
      *(uint *)(param_1 + 8) =
           (int)(uVar1 / 100) << 4 |
           (((uint)(iVar2 * 0x19) / (uint)(param_2 << 2) +
            (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_2 << 2)) / 100) * -100)
            * 0x10 + 0x32) / 100 & 0xf;
      return;
    }
    uVar4 = HAL_RCC_GetPCLK2Freq();
    uVar1 = (ulonglong)(uint)((int)uVar4 * 0x19) / (ulonglong)(uint)(param_2 << 2);
    iVar2 = HAL_RCC_GetPCLK2Freq
                      ((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)(uVar1 * 0x51eb851f));
    iVar3 = HAL_RCC_GetPCLK2Freq();
    *(uint *)(param_1 + 8) =
         (int)(uVar1 / 100) << 4 |
         (((uint)(iVar2 * 0x19) / (uint)(param_2 << 2) +
          (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_2 << 2)) / 100) * -100) *
          0x10 + 0x32) / 100 & 0xf;
  }
  else {
    if ((param_1 != 0x40011000) && (param_1 != 0x40011400)) {
      uVar4 = HAL_RCC_GetPCLK1Freq();
      uVar1 = (ulonglong)(uint)((int)uVar4 * 0x19) / (ulonglong)(uint)(param_2 << 1);
      iVar2 = HAL_RCC_GetPCLK1Freq
                        ((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)(uVar1 * 0x51eb851f));
      iVar3 = HAL_RCC_GetPCLK1Freq();
      *(uint *)(param_1 + 8) =
           (int)(uVar1 / 100) << 4 |
           (((uint)(iVar2 * 0x19) / (uint)(param_2 << 1) +
            (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_2 << 1)) / 100) * -100)
            * 0x10 + 0x32) / 100 & 0xf;
      return;
    }
    uVar4 = HAL_RCC_GetPCLK2Freq();
    uVar1 = (ulonglong)(uint)((int)uVar4 * 0x19) / (ulonglong)(uint)(param_2 << 1);
    iVar2 = HAL_RCC_GetPCLK2Freq
                      ((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)(uVar1 * 0x51eb851f));
    iVar3 = HAL_RCC_GetPCLK2Freq();
    *(uint *)(param_1 + 8) =
         (int)(uVar1 / 100) << 4 |
         (((uint)(iVar2 * 0x19) / (uint)(param_2 << 1) +
          (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_2 << 1)) / 100) * -100) *
          0x10 + 0x32) / 100 & 0xf;
  }
  return;
}


////>>0x08008190>>FUN_08008190>>////



void FUN_08008190(void)

{
  enable_usart_clock(&DAT_40004400);
  _DAT_4000440c = _DAT_4000440c & 0xffff400c | 0xc;
  _DAT_40004410 = _DAT_40004410 & 0xffff8090;
  _DAT_40004414 = _DAT_40004414 & 0xfffff000;
  _DAT_40004400 = _DAT_40004400 & 0xfffffc00;
  set_baud_rate(&DAT_40004400,0x1c200);
  _DAT_4000440c = _DAT_4000440c | 0x2000;
  return;
}


////>>0x08008244>>FUN_08008244>>////

void FUN_08008244(void)

{
  return;
}


////>>0x08008250>>FUN_08008250>>////

void FUN_08008250(undefined param_1)

{
  usart_putc(param_1);
  return;
}


////>>0x0800826a>>FUN_0800826a>>////

undefined4 FUN_0800826a(undefined param_1)

{
  usart_putc(param_1);
  return 0;
}


////>>0x08008286>>FUN_08008286>>////

undefined FUN_08008286(void)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = usart_tstc();
  if (iVar2 != 0) {
    uVar1 = usart_getc();
    iVar2 = serial_rx_hook(uVar1);
    if (iVar2 == 0) {
      return uVar1;
    }
  }
  return 0xff;
}


////>>0x080082ba>>FUN_080082ba>>////

void FUN_080082ba(void)

{
  return;
}


////>>0x080082d0>>FUN_080082d0>>////

ulonglong FUN_080082d0(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x080082d4>>FUN_080082d4>>////

ulonglong FUN_080082d4(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x0800854c>>FUN_0800854c>>////

ulonglong FUN_0800854c(uint param_1)

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


////>>0x0800856c>>FUN_0800856c>>////

ulonglong FUN_0800856c(uint param_1)

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


////>>0x08008590>>FUN_08008590>>////

ulonglong FUN_08008590(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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


////>>0x08008640>>FUN_08008640>>////

ulonglong FUN_08008640(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x08008894>>FUN_08008894>>////

ulonglong FUN_08008894(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x08008a74>>FUN_08008a74>>////

uint FUN_08008a74(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x08008af0>>FUN_08008af0>>////

void FUN_08008af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __aeabi_cdcmpeq(param_3,param_4,param_1,param_2);
  return;
}


////>>0x08008b00>>FUN_08008b00>>////

undefined4 FUN_08008b00(undefined4 param_1)

{
  __nedf2();
  return param_1;
}


////>>0x08008b10>>FUN_08008b10>>////

bool FUN_08008b10(void)

{
  char in_ZR;
  
  __aeabi_cdcmpeq();
  return in_ZR != '\0';
}


////>>0x08008b24>>FUN_08008b24>>////

bool FUN_08008b24(void)

{
  char in_CY;
  
  __aeabi_cdcmpeq();
  return in_CY == '\0';
}


////>>0x08008b4c>>FUN_08008b4c>>////

bool FUN_08008b4c(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08008b60>>FUN_08008b60>>////

bool FUN_08008b60(void)

{
  char in_CY;
  
  __aeabi_cdrcmple();
  return in_CY == '\0';
}


////>>0x08008b74>>FUN_08008b74>>////

undefined4 FUN_08008b74(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((((param_2 << 1) >> 0x15 != -1) || ((param_1 | param_2 << 0xc) == 0)) &&
     (((param_4 << 1) >> 0x15 != -1 || ((param_3 | param_4 << 0xc) == 0)))) {
    return 0;
  }
  return 1;
}


////>>0x08008ba0>>FUN_08008ba0>>////

uint FUN_08008ba0(uint param_1,uint param_2)

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


////>>0x08008bf0>>FUN_08008bf0>>////

uint FUN_08008bf0(uint param_1,uint param_2)

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


////>>0x08008c30>>FUN_08008c30>>////

uint FUN_08008c30(uint param_1,uint param_2)

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


////>>0x08008cd8>>FUN_08008cd8>>////

uint FUN_08008cd8(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x08008cdc>>FUN_08008cdc>>////

uint FUN_08008cdc(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x08008e3c>>FUN_08008e3c>>////

uint FUN_08008e3c(uint param_1)

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


////>>0x08008e44>>FUN_08008e44>>////

uint FUN_08008e44(uint param_1)

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


////>>0x08008eec>>FUN_08008eec>>////

uint FUN_08008eec(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x08009054>>FUN_08009054>>////

uint FUN_08009054(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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


////>>0x0800919c>>FUN_0800919c>>////

uint FUN_0800919c(uint param_1,uint param_2)

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


////>>0x080091fc>>FUN_080091fc>>////

void FUN_080091fc(undefined4 param_1,undefined4 param_2)

{
  __aeabi_cfcmpeq(param_2,param_1);
  return;
}


////>>0x08009204>>FUN_08009204>>////

undefined8 FUN_08009204(undefined4 param_1,undefined4 param_2)

{
  __cmpsf2();
  return CONCAT44(param_2,param_1);
}


////>>0x08009214>>FUN_08009214>>////

bool FUN_08009214(void)

{
  char in_ZR;
  
  __aeabi_cfcmpeq();
  return in_ZR != '\0';
}


////>>0x08009228>>FUN_08009228>>////

bool FUN_08009228(void)

{
  char in_CY;
  
  __aeabi_cfcmpeq();
  return in_CY == '\0';
}


////>>0x0800923c>>FUN_0800923c>>////

bool FUN_0800923c(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08009250>>FUN_08009250>>////

bool FUN_08009250(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08009264>>FUN_08009264>>////

bool FUN_08009264(void)

{
  char in_CY;
  
  __aeabi_cfrcmple();
  return in_CY == '\0';
}


////>>0x08009278>>FUN_08009278>>////

uint FUN_08009278(uint param_1)

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


////>>0x080092c4>>FUN_080092c4>>////

/* WARNING: This function may have set the stack pointer */

void FUN_080092c4(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &DAT_2000044c; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(iVar1 + 0x800c0c0);
  }
  for (puVar2 = &DAT_2000044c; puVar2 < &DAT_20000f20; puVar2 = puVar2 + 1) {
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


////>>0x08009318>>FUN_08009318>>////

longlong FUN_08009318(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar3 = (param_2 << 1) >> 0x15;
  uVar2 = uVar3 - 0x3ff;
  if ((int)uVar2 < 0x14) {
    if ((int)uVar2 < 0) {
      uVar5 = __aeabi_dadd(param_1,param_2,0x8800759c,0x7e37e43c,param_4);
      iVar1 = __aeabi_dcmpgt((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (iVar1 != 0) {
        if ((int)param_2 < 0) {
          lVar6 = -0x8000000000000000;
        }
        else if ((param_1 | param_2) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0x3ff0000000000000;
        }
      }
    }
    else {
      uVar3 = 0xfffff >> (uVar2 & 0xff);
      lVar6 = CONCAT44(param_2,param_1);
      if ((param_2 & uVar3 | param_1) != 0) {
        uVar5 = __aeabi_dadd(param_1,param_2,0x8800759c,0x7e37e43c,param_4);
        iVar1 = __aeabi_dcmpgt((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
        lVar6 = CONCAT44(param_2,param_1);
        if (iVar1 != 0) {
          if (0 < (int)param_2) {
            param_2 = param_2 + (0x100000 >> (uVar2 & 0xff));
          }
          lVar6 = (ulonglong)(param_2 & ~uVar3) << 0x20;
        }
      }
    }
  }
  else if ((int)uVar2 < 0x34) {
    uVar3 = 0xffffffff >> (uVar3 - 0x413 & 0xff);
    lVar6 = CONCAT44(param_2,param_1);
    if ((uVar3 & param_1) != 0) {
      uVar5 = __aeabi_dadd(param_1,param_2,0x8800759c,0x7e37e43c,param_4);
      iVar1 = __aeabi_dcmpgt((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (iVar1 != 0) {
        if (0 < (int)param_2) {
          if (uVar2 == 0x14) {
            param_2 = param_2 + 1;
          }
          else {
            uVar2 = 1 << (0x34 - uVar2 & 0xff);
            bVar4 = CARRY4(uVar2,param_1);
            param_1 = uVar2 + param_1;
            if (bVar4 != false) {
              param_2 = param_2 + 1;
            }
          }
        }
        lVar6 = CONCAT44(param_2,param_1 & ~uVar3);
      }
    }
  }
  else {
    lVar6 = CONCAT44(param_2,param_1);
    if (uVar2 == 0x400) {
      lVar6 = __aeabi_dadd();
    }
  }
  return lVar6;
}


////>>0x08009410>>FUN_08009410>>////

undefined4 FUN_08009410(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (0x3fe921fb < (param_2 & 0x7fffffff)) {
    if ((param_2 & 0x7fffffff) < 0x7ff00000) {
      uVar2 = __ieee754_rem_pio2(param_1,param_2,&local_28);
      uVar2 = uVar2 & 3;
      if (uVar2 == 1) {
        uVar1 = __kernel_sin(local_28,uStack_24,local_20,uStack_1c,1);
      }
      else if (uVar2 == 2) {
        uVar1 = __kernel_cos(local_28,uStack_24,local_20,uStack_1c);
      }
      else if (uVar2 == 0) {
        uVar1 = __kernel_cos(local_28,uStack_24,local_20,uStack_1c);
      }
      else {
        uVar1 = __kernel_sin(local_28,uStack_24,local_20,uStack_1c,1);
      }
    }
    else {
      uVar1 = __subdf3(param_1,param_2,param_1,param_2);
    }
    return uVar1;
  }
  uVar1 = __kernel_cos(param_1,param_2,0,0);
  return uVar1;
}


////>>0x080094c0>>FUN_080094c0>>////

longlong FUN_080094c0(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar3 = (param_2 << 1) >> 0x15;
  uVar2 = uVar3 - 0x3ff;
  if ((int)uVar2 < 0x14) {
    if ((int)uVar2 < 0) {
      uVar5 = __aeabi_dadd(param_1,param_2,0x8800759c,0x7e37e43c,param_4);
      iVar1 = __aeabi_dcmpgt((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (iVar1 != 0) {
        if ((int)param_2 < 0) {
          if ((param_1 | param_2 & 0x7fffffff) != 0) {
            param_2 = 0xbff00000;
          }
          lVar6 = (ulonglong)param_2 << 0x20;
        }
        else {
          lVar6 = 0;
        }
      }
    }
    else {
      uVar3 = 0xfffff >> (uVar2 & 0xff);
      lVar6 = CONCAT44(param_2,param_1);
      if ((param_2 & uVar3 | param_1) != 0) {
        uVar5 = __aeabi_dadd(param_1,param_2,0x8800759c,0x7e37e43c,param_4);
        iVar1 = __aeabi_dcmpgt((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
        lVar6 = CONCAT44(param_2,param_1);
        if (iVar1 != 0) {
          if ((int)param_2 < 0) {
            param_2 = param_2 + (0x100000 >> (uVar2 & 0xff));
          }
          lVar6 = (ulonglong)(param_2 & ~uVar3) << 0x20;
        }
      }
    }
  }
  else if ((int)uVar2 < 0x34) {
    uVar3 = 0xffffffff >> (uVar3 - 0x413 & 0xff);
    lVar6 = CONCAT44(param_2,param_1);
    if ((uVar3 & param_1) != 0) {
      uVar5 = __aeabi_dadd(param_1,param_2,0x8800759c,0x7e37e43c,param_4);
      iVar1 = __aeabi_dcmpgt((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0);
      lVar6 = CONCAT44(param_2,param_1);
      if (iVar1 != 0) {
        if ((int)param_2 < 0) {
          if (uVar2 == 0x14) {
            param_2 = param_2 + 1;
          }
          else {
            uVar2 = 1 << (0x34 - uVar2 & 0xff);
            bVar4 = CARRY4(uVar2,param_1);
            param_1 = uVar2 + param_1;
            if (bVar4 != false) {
              param_2 = param_2 + 1;
            }
          }
        }
        lVar6 = CONCAT44(param_2,param_1 & ~uVar3);
      }
    }
  }
  else {
    lVar6 = CONCAT44(param_2,param_1);
    if (uVar2 == 0x400) {
      lVar6 = __aeabi_dadd();
    }
  }
  return lVar6;
}


////>>0x080095b8>>FUN_080095b8>>////

int FUN_080095b8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (param_2 << 1) >> 0x15;
  uVar5 = uVar2 - 0x3ff;
  if ((int)param_2 < 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = 1;
  }
  uVar3 = param_2 & 0xfffff | 0x100000;
  if ((int)uVar5 < 0x14) {
    if ((int)uVar5 < 0) {
      if (uVar5 != 0xffffffff) {
        iVar4 = 0;
      }
      return iVar4;
    }
    uVar3 = uVar3 + (0x80000 >> (uVar5 & 0xff)) >> (0x14 - uVar5 & 0xff);
  }
  else {
    if (0x1e < uVar5) {
      iVar4 = __aeabi_d2iz();
      return iVar4;
    }
    if ((int)uVar5 < 0x34) {
      uVar1 = 0x80000000 >> (uVar2 - 0x413 & 0xff);
      if (CARRY4(uVar1,param_1) != false) {
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 << (uVar2 - 0x413 & 0xff);
      if (uVar5 != 0x14) {
        uVar3 = uVar3 | uVar1 + param_1 >> (0x34 - uVar5 & 0xff);
      }
    }
    else {
      uVar3 = uVar3 << (uVar2 - 0x413 & 0xff) | param_1 << (uVar2 - 0x433 & 0xff);
    }
  }
  return uVar3 * iVar4;
}


////>>0x08009654>>FUN_08009654>>////

longlong FUN_08009654(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = CONCAT44(param_2,param_1);
  uVar2 = (param_2 << 1) >> 0x15;
  uVar1 = uVar2 - 0x3ff;
  if ((int)uVar1 < 0x14) {
    if ((int)uVar1 < 0) {
      param_2 = param_2 & 0x80000000;
      if (uVar1 == 0xffffffff) {
        param_2 = param_2 | 0x3ff00000;
      }
      lVar3 = (ulonglong)param_2 << 0x20;
    }
    else {
      uVar2 = 0xfffff >> (uVar1 & 0xff);
      lVar3 = CONCAT44(param_2,param_1);
      if ((param_2 & uVar2 | param_1) != 0) {
        lVar3 = (ulonglong)(param_2 + (0x80000 >> (uVar1 & 0xff)) & ~uVar2) << 0x20;
      }
    }
  }
  else if ((int)uVar1 < 0x34) {
    uVar2 = 0xffffffff >> (uVar2 - 0x413 & 0xff);
    if ((param_1 & uVar2) != 0) {
      uVar1 = 1 << (0x33 - uVar1 & 0xff);
      if (CARRY4(param_1,uVar1) != false) {
        param_2 = param_2 + 1;
      }
      lVar3 = CONCAT44(param_2,param_1 + uVar1 & ~uVar2);
    }
  }
  else {
    lVar3 = CONCAT44(param_2,param_1);
    if (uVar1 == 0x400) {
      lVar3 = __aeabi_dadd();
    }
  }
  return lVar3;
}


////>>0x080096e8>>FUN_080096e8>>////

undefined4 FUN_080096e8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (0x3fe921fb < (param_2 & 0x7fffffff)) {
    if ((param_2 & 0x7fffffff) < 0x7ff00000) {
      uVar2 = __ieee754_rem_pio2(param_1,param_2,&local_28);
      uVar2 = uVar2 & 3;
      if (uVar2 == 1) {
        uVar1 = __kernel_cos(local_28,uStack_24,local_20,uStack_1c);
      }
      else if (uVar2 == 2) {
        uVar1 = __kernel_sin(local_28,uStack_24,local_20,uStack_1c,1);
      }
      else if (uVar2 == 0) {
        uVar1 = __kernel_sin(local_28,uStack_24,local_20,uStack_1c,1);
      }
      else {
        uVar1 = __kernel_cos(local_28,uStack_24,local_20,uStack_1c);
      }
    }
    else {
      uVar1 = __subdf3(param_1,param_2,param_1,param_2);
    }
    return uVar1;
  }
  uVar1 = __kernel_sin(param_1,param_2,0,0,0);
  return uVar1;
}


////>>0x08009798>>FUN_08009798>>////

longlong FUN_08009798(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = (param_2 << 1) >> 0x15;
  uVar1 = uVar2 - 0x3ff;
  if ((int)uVar1 < 0x14) {
    if ((int)uVar1 < 0) {
      return ((ulonglong)param_2 & 0x80000000) << 0x20;
    }
    lVar3 = (ulonglong)(param_2 & ~(0xfffff >> (uVar1 & 0xff))) << 0x20;
  }
  else {
    if ((int)uVar1 < 0x34) {
      return CONCAT44(param_2,param_1 & ~(0xffffffffU >> (uVar2 - 0x413 & 0xff)));
    }
    if (uVar1 != 0x400) {
      return CONCAT44(param_2,param_1);
    }
    lVar3 = __aeabi_dadd(param_1,param_2,param_1,param_2,param_4);
  }
  return lVar3;
}


////>>0x08009818>>FUN_08009818>>////

uint __ieee754_atan2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = param_4 & 0x7fffffff;
  if (((uVar4 | (-param_3 | param_3) >> 0x1f) < 0x7ff00001) &&
     (uVar5 = param_2 & 0x7fffffff, (uVar5 | (-param_1 | param_1) >> 0x1f) < 0x7ff00001)) {
    if ((param_4 + 0xc0100000 | param_3) == 0) {
      uVar4 = atan();
      return uVar4;
    }
    uVar3 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
    if ((uVar5 | param_1) == 0) {
      if (uVar3 == 2) {
        param_1 = 0x54442d18;
      }
      else if (uVar3 == 3) {
        param_1 = 0x54442d18;
      }
    }
    else {
      if ((uVar4 | param_3) != 0) {
        if (uVar4 == 0x7ff00000) {
          uVar3 = uVar3 - 1;
          if (uVar5 == 0x7ff00000) {
            if (uVar3 < 3) {
              return *(uint *)(&DAT_0800be68 + uVar3 * 8);
            }
            return 0x54442d18;
          }
          if (uVar3 < 3) {
            return *(uint *)(&DAT_0800be80 + uVar3 * 8);
          }
          return 0;
        }
        if (uVar5 != 0x7ff00000) {
          iVar1 = (int)(uVar5 - uVar4) >> 0x14;
          if ((int)(uVar5 - uVar4) < 0x3d00000) {
            if (((int)param_4 < 0) && (iVar1 + 0x3c < 0 != SCARRY4(iVar1,0x3c))) {
              uVar6 = 0;
            }
            else {
              __divdf3(param_1,param_2,param_3,param_4,param_4);
              fabs();
              uVar6 = atan();
            }
          }
          else {
            uVar6 = 0x3ff921fb54442d18;
          }
          uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar4 = (uint)uVar6;
          if (uVar3 == 1) {
            return uVar4;
          }
          if (uVar3 == 2) {
            uVar6 = __subdf3(uVar4,uVar2,0x33145c07,0x3ca1a626);
            uVar4 = __subdf3(0x54442d18,0x400921fb,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
            return uVar4;
          }
          if (uVar3 == 0) {
            return uVar4;
          }
          uVar6 = __subdf3(uVar4,uVar2,0x33145c07,0x3ca1a626);
          uVar4 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x54442d18,0x400921fb);
          return uVar4;
        }
      }
      if ((int)param_2 < 0) {
        param_1 = 0x54442d18;
      }
      else {
        param_1 = 0x54442d18;
      }
    }
  }
  else {
    param_1 = __aeabi_dadd(param_3,param_4,param_1,param_2);
  }
  return param_1;
}


////>>0x0800981c>>FUN_0800981c>>////

undefined8 FUN_0800981c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 local_50;
  char *pcStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  
  uVar4 = __ieee754_hypot();
  if (DAT_20000014 == -1) {
    return uVar4;
  }
  local_30 = finite();
  if (local_30 != 0) {
    return uVar4;
  }
  iVar1 = finite(param_1,param_2);
  if (iVar1 == 0) {
    return uVar4;
  }
  iVar1 = finite(param_3,param_4);
  if (iVar1 == 0) {
    return uVar4;
  }
  local_50 = 3;
  pcStack_4c = "hypot";
  local_48 = param_1;
  uStack_44 = param_2;
  local_40 = param_3;
  uStack_3c = param_4;
  if (DAT_20000014 == '\0') {
    local_38 = 0xe0000000;
    uStack_34 = 0x47efffff;
LAB_080098aa:
    iVar1 = matherr(&local_50);
    if (iVar1 != 0) goto LAB_08009896;
  }
  else {
    local_38 = 0;
    uStack_34 = 0x7ff00000;
    if (DAT_20000014 != '\x02') goto LAB_080098aa;
  }
  puVar2 = (undefined4 *)__errno();
  *puVar2 = 0x22;
LAB_08009896:
  uVar4 = CONCAT44(uStack_34,local_38);
  if (local_30 != 0) {
    piVar3 = (int *)__errno();
    uVar4 = CONCAT44(uStack_34,local_38);
    *piVar3 = local_30;
  }
  return uVar4;
}


////>>0x080098d0>>FUN_080098d0>>////

undefined4 FUN_080098d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_30;
  
  uVar2 = __ieee754_sqrt();
  cVar1 = DAT_20000014;
  if (((DAT_20000014 == -1) ||
      (local_30 = __unorddf2(param_1,param_2,param_1,param_2), local_30 != 0)) ||
     (iVar3 = __aeabi_dcmplt(param_1,param_2,0,0), iVar3 == 0)) {
    return uVar2;
  }
  local_50 = 1;
  local_4c = &DAT_0800be5c;
  local_48 = param_1;
  uStack_44 = param_2;
  local_40 = param_1;
  uStack_3c = param_2;
  if (cVar1 == '\0') {
    local_38 = 0;
LAB_0800996c:
    iVar3 = matherr(&local_50);
    if (iVar3 != 0) goto joined_r0x0800997a;
  }
  else {
    local_38 = __divdf3(0,0,0,0);
    if (cVar1 != '\x02') goto LAB_0800996c;
  }
  puVar4 = (undefined4 *)__errno();
  *puVar4 = 0x21;
joined_r0x0800997a:
  if (local_30 != 0) {
    piVar5 = (int *)__errno();
    *piVar5 = local_30;
  }
  return (undefined4)local_38;
}


////>>0x08009990>>FUN_08009990>>////

uint FUN_08009990(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = param_4 & 0x7fffffff;
  if (((uVar4 | (-param_3 | param_3) >> 0x1f) < 0x7ff00001) &&
     (uVar5 = param_2 & 0x7fffffff, (uVar5 | (-param_1 | param_1) >> 0x1f) < 0x7ff00001)) {
    if ((param_4 + 0xc0100000 | param_3) == 0) {
      uVar4 = atan();
      return uVar4;
    }
    uVar3 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
    if ((uVar5 | param_1) == 0) {
      if (uVar3 == 2) {
        param_1 = 0x54442d18;
      }
      else if (uVar3 == 3) {
        param_1 = 0x54442d18;
      }
    }
    else {
      if ((uVar4 | param_3) != 0) {
        if (uVar4 == 0x7ff00000) {
          uVar3 = uVar3 - 1;
          if (uVar5 == 0x7ff00000) {
            if (uVar3 < 3) {
              return *(uint *)(&DAT_0800be68 + uVar3 * 8);
            }
            return 0x54442d18;
          }
          if (uVar3 < 3) {
            return *(uint *)(&DAT_0800be80 + uVar3 * 8);
          }
          return 0;
        }
        if (uVar5 != 0x7ff00000) {
          iVar1 = (int)(uVar5 - uVar4) >> 0x14;
          if ((int)(uVar5 - uVar4) < 0x3d00000) {
            if (((int)param_4 < 0) && (iVar1 + 0x3c < 0 != SCARRY4(iVar1,0x3c))) {
              uVar6 = 0;
            }
            else {
              __divdf3(param_1,param_2,param_3,param_4,param_4);
              fabs();
              uVar6 = atan();
            }
          }
          else {
            uVar6 = 0x3ff921fb54442d18;
          }
          uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar4 = (uint)uVar6;
          if (uVar3 == 1) {
            return uVar4;
          }
          if (uVar3 == 2) {
            uVar6 = __subdf3(uVar4,uVar2,0x33145c07,0x3ca1a626);
            uVar4 = __subdf3(0x54442d18,0x400921fb,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
            return uVar4;
          }
          if (uVar3 == 0) {
            return uVar4;
          }
          uVar6 = __subdf3(uVar4,uVar2,0x33145c07,0x3ca1a626);
          uVar4 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x54442d18,0x400921fb);
          return uVar4;
        }
      }
      if ((int)param_2 < 0) {
        param_1 = 0x54442d18;
      }
      else {
        param_1 = 0x54442d18;
      }
    }
  }
  else {
    param_1 = __aeabi_dadd(param_3,param_4,param_1,param_2);
  }
  return param_1;
}


////>>0x08009b24>>FUN_08009b24>>////

uint FUN_08009b24(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x08009d78>>FUN_08009d78>>////

int FUN_08009d78(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
      uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar1 = (undefined4)uVar10;
      if (uVar8 != 0x3ff921fb) {
        uVar10 = __aeabi_dadd(uVar1,uVar3,0x1a626331,0x3dd0b461);
        *param_3 = uVar10;
        uVar10 = __subdf3(uVar1,uVar3);
        uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x1a626331,0x3dd0b461);
        param_3[1] = uVar10;
        return -1;
      }
      uVar10 = __aeabi_dadd(uVar1,uVar3,0x1a600000,0x3dd0b461);
      uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar11 = __aeabi_dadd((int)uVar10,uVar1,0x2e037073,0x3ba3198a);
      *param_3 = uVar11;
      uVar10 = __subdf3((int)uVar10,uVar1);
      uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x2e037073,0x3ba3198a);
      param_3[1] = uVar10;
      return -1;
    }
    uVar10 = __subdf3();
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar1 = (undefined4)uVar10;
    if (uVar8 != 0x3ff921fb) {
      uVar10 = __subdf3(uVar1,uVar3,0x1a626331,0x3dd0b461);
      *param_3 = uVar10;
      uVar10 = __subdf3(uVar1,uVar3);
      uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x1a626331,0x3dd0b461);
      param_3[1] = uVar10;
      return 1;
    }
    uVar10 = __subdf3(uVar1,uVar3,0x1a600000,0x3dd0b461);
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
  uVar10 = fabs();
  uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar11 = __muldf3((int)uVar10,uVar3,0x6dc9c883,0x3fe45f30);
  __aeabi_dadd((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x3fe00000);
  iVar9 = __aeabi_d2iz();
  uVar11 = __aeabi_i2d();
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar1 = (undefined4)uVar11;
  uVar11 = __muldf3(uVar1,uVar4,0x54400000,0x3ff921fb);
  uVar10 = __subdf3((int)uVar10,uVar3,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar3 = (undefined4)uVar10;
  uVar11 = __muldf3(uVar1,uVar4,0x1a626331,0x3dd0b461);
  if ((0x1f < iVar9) || (*(uint *)(&DAT_0800be98 + (iVar9 + -1) * 4) == uVar8)) {
    uVar12 = __subdf3(uVar3,uVar5,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    if ((int)((uVar8 >> 0x14) - ((uint)((int)((ulonglong)uVar12 >> 0x20) << 1) >> 0x15)) < 0x11)
    goto LAB_0800a0ce;
    uVar11 = __muldf3(uVar1,uVar4,0x1a600000,0x3dd0b461);
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = __subdf3(uVar3,uVar5,(int)uVar11,uVar6);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar2 = (undefined4)uVar10;
    uVar12 = __subdf3(uVar3,uVar5,uVar2,uVar7);
    uVar11 = __subdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,uVar6);
    uVar12 = __muldf3(uVar1,uVar4,0x2e037073,0x3ba3198a);
    uVar11 = __subdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                      (int)((ulonglong)uVar11 >> 0x20));
    uVar12 = __subdf3(uVar2,uVar7,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    if ((int)(((int)uVar8 >> 0x14) - ((uint)((int)((ulonglong)uVar12 >> 0x20) << 1) >> 0x15)) < 0x32
       ) goto LAB_0800a0ce;
    uVar11 = __muldf3(uVar1,uVar4,0x2e000000,0x3ba3198a);
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = __subdf3(uVar2,uVar7,(int)uVar11,uVar3);
    uVar12 = __subdf3(uVar2,uVar7);
    uVar11 = __subdf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,uVar3);
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


////>>0x0800a1bc>>FUN_0800a1bc>>////

uint FUN_0800a1bc(uint param_1,uint param_2)

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


////>>0x0800a348>>FUN_0800a348>>////

undefined4 FUN_0800a348(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

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


////>>0x0800a5a0>>FUN_0800a5a0>>////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0800a5a0(int param_1,undefined8 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint **ppuVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  bool bVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *local_284;
  int local_280;
  int local_270;
  int local_26c;
  uint *local_260 [2];
  uint local_258 [20];
  undefined8 uStack_208;
  undefined8 local_168;
  int local_160 [38];
  undefined8 uStack_c8;
  
  iVar15 = *(int *)(&DAT_0800c060 + param_5 * 4);
  iVar9 = param_4 + -1;
  local_260[1] = (uint *)param_2;
  if (param_3 + 0x14 < 0 == SCARRY4(param_3,0x14)) {
    local_26c = (param_3 + -3) / 0x18;
    local_270 = (local_26c + 1) * -0x18;
  }
  else {
    local_270 = -0x18;
    local_26c = 0;
  }
  local_270 = param_3 + local_270;
  iVar17 = local_26c - iVar9;
  if (-1 < iVar15 + iVar9) {
    iVar21 = iVar15 + iVar9 + 1 + iVar17;
    puVar16 = &uStack_208;
    do {
      while (iVar17 < 0) {
        iVar17 = iVar17 + 1;
        *(undefined4 *)puVar16 = 0;
        *(undefined4 *)((int)puVar16 + 4) = 0;
        puVar16 = puVar16 + 1;
        if (iVar17 == iVar21) goto LAB_0800a626;
      }
      uVar26 = __aeabi_i2d(*(undefined4 *)(param_6 + iVar17 * 4));
      iVar17 = iVar17 + 1;
      *puVar16 = uVar26;
      puVar16 = puVar16 + 1;
    } while (iVar17 != iVar21);
  }
LAB_0800a626:
  puVar10 = (undefined4 *)(param_1 + -8);
  if (-1 < iVar15) {
    puVar22 = &uStack_208 + param_4;
    iVar17 = iVar9;
    puVar16 = &uStack_c8;
    do {
      if (iVar9 < 0) {
        uVar26 = 0;
      }
      else {
        uVar26 = 0;
        puVar23 = puVar10;
        puVar19 = puVar22;
        do {
          puVar18 = puVar23 + 2;
          uVar25 = __muldf3(*puVar18,puVar23[3],*(undefined4 *)(puVar19 + -1),
                            *(undefined4 *)((int)puVar19 + -4));
          uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                                (int)((ulonglong)uVar25 >> 0x20));
          puVar23 = puVar18;
          puVar19 = puVar19 + -1;
        } while (puVar18 != puVar10 + param_4 * 2);
      }
      iVar17 = iVar17 + 1;
      *puVar16 = uVar26;
      puVar22 = puVar22 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar17 != iVar15 + param_4);
  }
  local_260[0] = local_258 + iVar15 + -1;
  iVar17 = iVar15;
  do {
    uVar26 = CONCAT44(*(undefined4 *)((int)&uStack_c8 + iVar17 * 8 + 4),
                      *(undefined4 *)(&uStack_c8 + iVar17));
    if (0 < iVar17) {
      puVar16 = &uStack_c8 + iVar17;
      puVar5 = local_258;
      do {
        uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
        __muldf3((int)uVar26,uVar6,0,0x3e700000);
        __aeabi_d2iz();
        uVar25 = __aeabi_i2d();
        uVar8 = (undefined4)((ulonglong)uVar25 >> 0x20);
        uVar27 = __muldf3((int)uVar25,uVar8,0,0x41700000);
        __subdf3((int)uVar26,uVar6,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
        uVar2 = __aeabi_d2iz();
        puVar22 = puVar16 + -1;
        uVar6 = *(undefined4 *)puVar22;
        uVar11 = *(undefined4 *)((int)puVar16 + -4);
        *puVar5 = uVar2;
        uVar26 = __aeabi_dadd((int)uVar25,uVar8,uVar6,uVar11);
        puVar16 = puVar22;
        puVar5 = puVar5 + 1;
      } while (puVar22 != &uStack_c8);
    }
    uVar26 = scalbn((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),local_270);
    uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
    __muldf3((int)uVar26,uVar8,0,0x3fc00000);
    uVar25 = floor();
    uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),0,0x40200000);
    uVar26 = __subdf3((int)uVar26,uVar8,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar2 = __aeabi_d2iz();
    uVar25 = __aeabi_i2d();
    uVar26 = __subdf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                      (int)((ulonglong)uVar25 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
    uVar8 = (undefined4)uVar26;
    if (local_270 < 1) {
      if (local_270 == 0) {
        iVar21 = (int)local_258[iVar17 + -1] >> 0x17;
        goto joined_r0x0800a8b8;
      }
      iVar21 = __aeabi_dcmpge(uVar8,uVar6,0,0x3fe00000);
      if (iVar21 != 0) {
        uVar2 = uVar2 + 1;
        if (iVar17 < 1) {
          uVar26 = __subdf3(0,0x3ff00000,uVar8,uVar6);
          iVar21 = 2;
          goto LAB_0800a7a4;
        }
        iVar21 = 2;
        goto LAB_0800a8c8;
      }
    }
    else {
      iVar4 = (int)local_258[iVar17 + -1] >> (0x18U - local_270 & 0xff);
      uVar12 = local_258[iVar17 + -1] - (iVar4 << (0x18U - local_270 & 0xff));
      iVar21 = (int)uVar12 >> (0x17U - local_270 & 0xff);
      local_258[iVar17 + -1] = uVar12;
      uVar2 = uVar2 + iVar4;
joined_r0x0800a8b8:
      if (0 < iVar21) {
        uVar2 = uVar2 + 1;
        if (iVar17 < 1) {
          bVar24 = false;
        }
        else {
LAB_0800a8c8:
          if (local_258[0] == 0) {
            bVar24 = false;
            if (iVar17 != 1) {
              puVar5 = local_258;
              iVar4 = 1;
              do {
                puVar5 = puVar5 + 1;
                if (*puVar5 != 0) {
                  iVar14 = iVar4 + 1;
                  uVar12 = *puVar5;
                  goto LAB_0800a8e2;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 != iVar17);
              bVar24 = false;
            }
          }
          else {
            iVar14 = 1;
            iVar4 = 0;
            uVar12 = local_258[0];
LAB_0800a8e2:
            local_258[iVar4] = 0x1000000 - uVar12;
            if (iVar14 < iVar17) {
              uVar12 = local_258[iVar14];
              puVar5 = local_258 + iVar14;
              while( true ) {
                puVar13 = puVar5 + 1;
                *puVar5 = 0xffffff - uVar12;
                if (puVar13 == local_258 + iVar17) break;
                uVar12 = *puVar13;
                puVar5 = puVar13;
              }
            }
            bVar24 = true;
          }
        }
        if (0 < local_270) {
          if (local_270 == 1) {
            local_258[iVar17 + -1] = local_258[iVar17 + -1] & 0x7fffff;
          }
          else if (local_270 == 2) {
            local_258[iVar17 + -1] = local_258[iVar17 + -1] & 0x3fffff;
          }
        }
        if (iVar21 == 2) {
          uVar26 = __subdf3(0,0x3ff00000,uVar8,uVar6);
          if (bVar24) {
            uVar25 = scalbn(0,0x3ff00000,local_270);
            uVar26 = __subdf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                              (int)((ulonglong)uVar25 >> 0x20));
          }
        }
      }
    }
LAB_0800a7a4:
    uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar4 = __aeabi_dcmpeq((int)uVar26,uVar8,0,0);
    if (iVar4 == 0) {
      uVar26 = scalbn((int)uVar26,uVar8,-local_270);
      uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
      uVar8 = (undefined4)uVar26;
      iVar9 = __aeabi_dcmpge(uVar8,uVar6,0,0x41700000);
      if (iVar9 == 0) {
        uVar12 = __aeabi_d2iz(uVar8,uVar6);
        local_258[iVar17] = uVar12;
        iVar4 = iVar17;
      }
      else {
        __muldf3(uVar8,uVar6,0,0x3e700000);
        uVar12 = __aeabi_d2iz();
        uVar26 = __aeabi_i2d();
        uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x41700000);
        __subdf3(uVar8,uVar6,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
        uVar3 = __aeabi_d2iz();
        local_270 = local_270 + 0x18;
        local_258[iVar17] = uVar3;
        local_258[iVar17 + 1] = uVar12;
        iVar4 = iVar17 + 1;
      }
      goto LAB_0800a9f6;
    }
    iVar4 = iVar17 + -1;
    if (iVar15 <= iVar4) {
      uVar12 = 0;
      puVar5 = local_258 + iVar17 + 0x3fffffff;
      do {
        puVar13 = puVar5 + -1;
        uVar12 = uVar12 | *puVar5;
        puVar5 = puVar13;
      } while (puVar13 != local_260[0]);
      if (uVar12 != 0) break;
    }
    if (local_258[iVar15 + -1] == 0) {
      local_280 = 1;
      ppuVar7 = local_260 + iVar15;
      do {
        puVar5 = *ppuVar7;
        local_280 = local_280 + 1;
        ppuVar7 = ppuVar7 + -1;
      } while (puVar5 == (uint *)0x0);
      local_280 = iVar17 + local_280;
    }
    else {
      local_280 = iVar17 + 1;
    }
    iVar21 = iVar17 + 1;
    puVar23 = (undefined4 *)(param_6 + (iVar21 + local_26c + 0x3fffffff) * 4);
    puVar16 = &uStack_208 + iVar17 + param_4;
    local_284 = &uStack_c8 + iVar21;
    do {
      puVar23 = puVar23 + 1;
      uVar26 = __aeabi_i2d(*puVar23);
      *puVar16 = uVar26;
      puVar22 = puVar16 + 1;
      if (iVar9 < 0) {
        uVar25 = 0;
      }
      else {
        uVar25 = 0;
        puVar18 = puVar10;
        while( true ) {
          puVar16 = puVar16 + -1;
          puVar1 = puVar18 + 2;
          uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),*puVar1,puVar18[3]);
          uVar25 = __aeabi_dadd((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,
                                (int)((ulonglong)uVar26 >> 0x20));
          if (puVar1 == puVar10 + param_4 * 2) break;
          uVar26 = *puVar16;
          puVar18 = puVar1;
        }
      }
      *local_284 = uVar25;
      iVar21 = iVar21 + 1;
      iVar17 = local_280;
      puVar16 = puVar22;
      local_284 = local_284 + 1;
    } while (iVar21 <= local_280);
  } while( true );
  local_270 = local_270 + -0x18;
  if (local_258[iVar4] == 0) {
    puVar5 = local_258 + iVar17 + 0x3ffffffe;
    do {
      uVar12 = *puVar5;
      iVar4 = iVar4 + -1;
      local_270 = local_270 + -0x18;
      puVar5 = puVar5 + -1;
    } while (uVar12 == 0);
  }
LAB_0800a9f6:
  uVar26 = scalbn(0,0x3ff00000,local_270);
  if (iVar4 < 0) {
    if (2 < param_5) {
      if (param_5 == 3) {
        uVar26 = 0;
LAB_0800abe4:
        if (iVar21 == 0) {
          *local_260[1] = (undefined4)local_168;
          *(int *)((int)local_260[1] + 4) = local_168._4_4_;
          *(undefined8 *)((int)local_260[1] + 0x10) = uVar26;
          *(int *)((int)local_260[1] + 8) = local_160[0];
          *(int *)((int)local_260[1] + 0xc) = local_160[1];
          return uVar2 & 7;
        }
        *(int *)((int)local_260[1] + 0x10) = (int)uVar26;
        *(int *)((int)local_260[1] + 8) = local_160[0];
        *(int *)((int)local_260[1] + 0x14) = (int)((ulonglong)uVar26 >> 0x20) + -0x80000000;
        *(int *)((int)local_260[1] + 4) = local_168._4_4_ + -0x80000000;
        *(int *)((int)local_260[1] + 0xc) = local_160[1] + -0x80000000;
        *local_260[1] = (undefined4)local_168;
        return uVar2 & 7;
      }
      goto LAB_0800ab0e;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_0800ab0e;
      uVar26 = 0;
LAB_0800aafc:
      iVar9 = (int)((ulonglong)uVar26 >> 0x20);
      if (iVar21 != 0) {
        iVar9 = iVar9 + -0x80000000;
      }
      *local_260[1] = (int)uVar26;
      *(int *)((int)local_260[1] + 4) = iVar9;
LAB_0800ab0e:
      return uVar2 & 7;
    }
    uVar26 = 0;
  }
  else {
    puVar22 = &uStack_c8 + iVar4;
    puVar5 = local_258 + iVar4 + 1;
    puVar16 = &uStack_c8 + iVar4 + 1;
    do {
      uVar8 = (undefined4)((ulonglong)uVar26 >> 0x20);
      puVar5 = puVar5 + -1;
      uVar25 = __aeabi_i2d(*puVar5);
      uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,uVar8);
      puVar16 = puVar16 + -1;
      *puVar16 = uVar25;
      uVar26 = __muldf3((int)uVar26,uVar8,0,0x3e700000);
    } while (puVar5 != local_258);
    iVar9 = 0;
    do {
      if (iVar15 < 0) {
        uVar26 = 0;
      }
      else {
        uVar8 = 0x40000000;
        uVar6 = 0x3ff921fb;
        uVar26 = 0;
        iVar17 = 0;
        puVar16 = puVar22;
        puVar10 = &DAT_0800c028;
        while( true ) {
          uVar25 = __muldf3(*(undefined4 *)puVar16,*(undefined4 *)((int)puVar16 + 4),uVar8,uVar6);
          uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,
                                (int)((ulonglong)uVar25 >> 0x20));
          iVar17 = iVar17 + 1;
          if ((iVar15 < iVar17) || (iVar9 < iVar17)) break;
          uVar8 = *puVar10;
          uVar6 = puVar10[1];
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 2;
        }
      }
      bVar24 = iVar9 != iVar4;
      *(int *)(&local_168 + iVar9) = (int)uVar26;
      *(int *)((int)&local_168 + (iVar9 * 2 + 1) * 4) = (int)((ulonglong)uVar26 >> 0x20);
      puVar22 = puVar22 + -1;
      iVar9 = iVar9 + 1;
    } while (bVar24);
    if (2 < param_5) {
      if (param_5 == 3) {
        if (iVar4 != 0) {
          puVar16 = &local_168 + iVar4;
          uVar26 = CONCAT44(*(undefined4 *)((int)&local_168 + (iVar4 * 2 + 1) * 4),
                            *(undefined4 *)puVar16);
          do {
            uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
            uVar8 = (undefined4)uVar26;
            uVar11 = *(undefined4 *)(puVar16 + -1);
            uVar20 = *(undefined4 *)((int)puVar16 + -4);
            uVar26 = __aeabi_dadd(uVar8,uVar6,uVar11,uVar20);
            uVar25 = __subdf3(uVar11,uVar20,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
            uVar25 = __aeabi_dadd((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),uVar8,uVar6);
            *puVar16 = uVar25;
            puVar16 = puVar16 + -1;
            *puVar16 = uVar26;
          } while (&local_168 != puVar16);
          if (1 < iVar4) {
            puVar16 = &local_168 + iVar4;
            uVar26 = CONCAT44(*(undefined4 *)((int)&local_168 + (iVar4 * 2 + 1) * 4),
                              *(undefined4 *)puVar16);
            do {
              uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
              uVar8 = (undefined4)uVar26;
              uVar11 = *(undefined4 *)(puVar16 + -1);
              uVar20 = *(undefined4 *)((int)puVar16 + -4);
              uVar26 = __aeabi_dadd(uVar8,uVar6,uVar11,uVar20);
              uVar25 = __subdf3(uVar11,uVar20,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
              uVar25 = __aeabi_dadd((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),uVar8,uVar6);
              *puVar16 = uVar25;
              puVar16 = puVar16 + -1;
              *puVar16 = uVar26;
            } while (&local_168 + 1 != puVar16);
            uVar26 = 0;
            puVar16 = &local_168 + iVar4 + 1;
            do {
              puVar22 = puVar16 + -1;
              uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),
                                    *(undefined4 *)puVar22,*(undefined4 *)((int)puVar16 + -4));
              puVar16 = puVar22;
            } while (&local_168 + 2 != puVar22);
            goto LAB_0800abe4;
          }
        }
        uVar26 = 0;
        goto LAB_0800abe4;
      }
      goto LAB_0800ab0e;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_0800ab0e;
      uVar26 = 0;
      puVar16 = &local_168 + iVar4 + 1;
      do {
        puVar22 = puVar16 + -1;
        uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),*(undefined4 *)puVar22,
                              *(undefined4 *)((int)puVar16 + -4));
        puVar16 = puVar22;
      } while (&local_168 != puVar22);
      goto LAB_0800aafc;
    }
    uVar26 = 0;
    puVar16 = &local_168 + iVar4 + 1;
    do {
      puVar22 = puVar16 + -1;
      uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),*(undefined4 *)puVar22,
                            *(undefined4 *)((int)puVar16 + -4));
      puVar16 = puVar22;
    } while (&local_168 != puVar22);
  }
  iVar9 = (int)((ulonglong)uVar26 >> 0x20);
  uVar8 = (undefined4)uVar26;
  if (iVar21 == 0) {
    *(undefined8 *)local_260[1] = uVar26;
    uVar26 = __subdf3((undefined4)local_168,local_168._4_4_,uVar8,iVar9);
    if (iVar4 < 1) goto LAB_0800ad26;
LAB_0800ad04:
    iVar9 = 1;
    puVar16 = &local_168;
    do {
      uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),
                            *(undefined4 *)(puVar16 + 1),*(undefined4 *)((int)puVar16 + 0xc));
      iVar9 = iVar9 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar9 <= iVar4);
    if (iVar21 == 0) goto LAB_0800ad26;
  }
  else {
    *local_260[1] = uVar8;
    *(int *)((int)local_260[1] + 4) = iVar9 + -0x80000000;
    uVar26 = __subdf3((undefined4)local_168,local_168._4_4_,uVar8,iVar9);
    if (0 < iVar4) goto LAB_0800ad04;
  }
  uVar26 = CONCAT44((int)((ulonglong)uVar26 >> 0x20) + -0x80000000,(int)uVar26);
LAB_0800ad26:
  *(undefined8 *)((int)local_260[1] + 8) = uVar26;
  return uVar2 & 7;
}


////>>0x0800adf0>>FUN_0800adf0>>////

undefined4
FUN_0800adf0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

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


////>>0x0800af78>>FUN_0800af78>>////

int FUN_0800af78(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_2c;
  
  uVar8 = CONCAT44(param_2,param_1);
  uVar7 = param_2 & 0x7fffffff;
  if (uVar7 < 0x44100000) {
    if (uVar7 < 0x3fdc0000) {
      if (uVar7 < 0x3e200000) {
        uVar9 = __aeabi_dadd(param_1,param_2,0x8800759c,0x7e37e43c);
        iVar5 = __aeabi_dcmpgt((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
        if (iVar5 != 0) {
          return param_1;
        }
      }
      iVar5 = -1;
    }
    else {
      uVar8 = fabs();
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar1 = (undefined4)uVar8;
      if (uVar7 < 0x3ff30000) {
        if (uVar7 < 0x3fe60000) {
          uVar8 = __aeabi_dadd(uVar1,uVar4,uVar1,uVar4);
          uVar8 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,0x3ff00000);
          uVar9 = __aeabi_dadd(uVar1,uVar4,0,0x40000000);
          uVar8 = __divdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
          iVar5 = 0;
        }
        else {
          uVar8 = __subdf3(uVar1,uVar4,0,0x3ff00000);
          uVar9 = __aeabi_dadd(uVar1,uVar4,0,0x3ff00000);
          uVar8 = __divdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
          iVar5 = 1;
        }
      }
      else if (uVar7 < 0x40038000) {
        uVar8 = __subdf3(uVar1,uVar4,0,0x3ff80000);
        uVar9 = __muldf3(uVar1,uVar4,0,0x3ff80000);
        uVar9 = __aeabi_dadd((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
        uVar8 = __divdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
        iVar5 = 2;
      }
      else {
        uVar8 = __divdf3(0,0xbff00000,uVar1,uVar4);
        iVar5 = 3;
      }
    }
    local_2c = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar6 = (undefined4)uVar8;
    uVar8 = __muldf3(uVar6,local_2c,uVar6);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar1 = (undefined4)uVar8;
    uVar8 = __muldf3(uVar1,uVar2,uVar1,uVar2);
    uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar4 = (undefined4)uVar8;
    uVar8 = __muldf3(uVar4,uVar3,0xe322da11,0x3f90ad3a);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x24760deb,0x3fa97b4b);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar4,uVar3);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0xa0d03d51,0x3fb10d66);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar4,uVar3);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0xc54c206e,0x3fb745cd);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar4,uVar3);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x920083ff,0x3fc24924);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar4,uVar3);
    uVar8 = __aeabi_dadd((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x5555550d,0x3fd55555);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar1,uVar2);
    uVar1 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar9 = __muldf3(uVar4,uVar3,0x2c6a6c2f,0xbfa2b444);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x52defd9a,0x3fadde2d);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar4,uVar3);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xaf749a6d,0x3fb3b0f2);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar4,uVar3);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xfe231671,0x3fbc71c6);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar4,uVar3);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x9998ebc4,0x3fc99999);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar4,uVar3);
    uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (iVar5 == -1) {
      uVar8 = __aeabi_dadd((int)uVar8,uVar1,(int)uVar9,uVar4);
      uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar6,local_2c);
      iVar5 = __subdf3(uVar6,local_2c,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      return iVar5;
    }
    uVar8 = __aeabi_dadd((int)uVar8,uVar1,(int)uVar9,uVar4);
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar6,local_2c);
    uVar8 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),
                     *(undefined4 *)(&UNK_0800c090 + iVar5 * 8),
                     *(undefined4 *)(&UNK_0800c094 + iVar5 * 8));
    uVar8 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar6,local_2c);
    iVar5 = __subdf3(*(undefined4 *)(&UNK_0800c070 + iVar5 * 8),
                     *(undefined4 *)(&UNK_0800c074 + iVar5 * 8),(int)uVar8,
                     (int)((ulonglong)uVar8 >> 0x20));
    if ((int)param_2 < 0) {
      return iVar5;
    }
  }
  else {
    if ((0x7ff00000 < uVar7) || ((uVar7 == 0x7ff00000 && (param_1 != 0)))) {
      iVar5 = __aeabi_dadd(param_1,param_2,param_1);
      return iVar5;
    }
    iVar5 = 0x54442d18;
  }
  return iVar5;
}


////>>0x0800b2cc>>FUN_0800b2cc>>////

void FUN_0800b2cc(void)

{
  return;
}


////>>0x0800b2d4>>FUN_0800b2d4>>////

uint FUN_0800b2d4(undefined4 param_1,uint param_2)

{
  return (param_2 | 0x80000000) + 0x100000 >> 0x1f;
}


////>>0x0800b2e0>>FUN_0800b2e0>>////

undefined4 FUN_0800b2e0(void)

{
  return 0;
}


////>>0x0800b2e8>>FUN_0800b2e8>>////

uint FUN_0800b2e8(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  uVar1 = (param_2 << 1) >> 0x15;
  if (uVar1 == 0) {
    if ((param_1 | param_2 & 0x7fffffff) == 0) {
      return param_1;
    }
    uVar4 = __muldf3(param_1,param_2,0,0x43500000);
    if (param_3 < -50000) goto LAB_0800b34a;
    uVar1 = ((uint)((int)((ulonglong)uVar4 >> 0x20) << 1) >> 0x15) - 0x36;
  }
  else if (uVar1 == 0x7ff) {
    uVar1 = __aeabi_dadd(param_1,param_2,param_1,param_2,param_4);
    return uVar1;
  }
  uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
  iVar2 = uVar1 + param_3;
  if (iVar2 < 0x7ff) {
    if (0 < iVar2) {
      return (uint)uVar4;
    }
    if (iVar2 + 0x35 < 0 == SCARRY4(iVar2,0x35)) {
      uVar1 = __muldf3((uint)uVar4,uVar3 & 0x800fffff | (iVar2 + 0x36) * 0x100000,0,0x3c900000);
      return uVar1;
    }
    if (param_3 < 0xc351) {
      uVar4 = CONCAT44(uVar3 & 0x80000000 | 0x1a56e1f,0xc2f8f359);
LAB_0800b34a:
      uVar1 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xc2f8f359,0x1a56e1f);
      return uVar1;
    }
  }
  uVar1 = __muldf3(0x8800759c,uVar3 & 0x80000000 | 0x7e37e43c,0x8800759c,0x7e37e43c);
  return uVar1;
}


////>>0x0800b3dc>>FUN_0800b3dc>>////

undefined4 FUN_0800b3dc(void)

{
  return DAT_20000018;
}


////>>0x0800b3e8>>FUN_0800b3e8>>////

/* WARNING: Removing unreachable block (ram,0x0800b3f4) */
/* WARNING: Removing unreachable block (ram,0x0800b3f6) */

void FUN_0800b3e8(void)

{
  int iVar1;
  code **ppcVar2;
  
  _init();
  iVar1 = 0;
  ppcVar2 = (code **)&DAT_0800c0b4;
  do {
    iVar1 = iVar1 + 1;
    (**ppcVar2)();
    ppcVar2 = ppcVar2 + 1;
  } while (iVar1 != 2);
  return;
}


////>>0x0800b430>>FUN_0800b430>>////

void FUN_0800b430(undefined4 *param_1,undefined param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  if (((uint)param_1 & 3) != 0) {
    uVar3 = param_3 - 1;
    puVar1 = param_1;
    if (param_3 == 0) {
      return;
    }
    while( true ) {
      param_1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined *)puVar1 = param_2;
      param_3 = uVar3;
      if (((uint)param_1 & 3) == 0) break;
      bVar5 = uVar3 == 0;
      uVar3 = uVar3 - 1;
      puVar1 = param_1;
      if (bVar5) {
        return;
      }
    }
  }
  if (3 < param_3) {
    uVar4 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    if (0xf < param_3) {
      puVar1 = param_1 + 4;
      do {
        puVar1[-4] = uVar4;
        puVar1[-3] = uVar4;
        puVar1[-2] = uVar4;
        puVar1[-1] = uVar4;
        puVar1 = puVar1 + 4;
      } while (puVar1 != (undefined4 *)((int)param_1 + (param_3 - 0x10 & 0xfffffff0) + 0x20));
      uVar3 = param_3 & 0xc;
      param_1 = param_1 + ((param_3 - 0x10 >> 4) + 1) * 4;
      param_3 = param_3 & 0xf;
      if (uVar3 == 0) goto joined_r0x0800b4a8;
    }
    puVar1 = (undefined4 *)((param_3 - 4 & 0xfffffffc) + 4 + (int)param_1);
    do {
      puVar2 = param_1 + 1;
      *param_1 = uVar4;
      param_1 = puVar2;
    } while (puVar1 != puVar2);
    param_3 = param_3 & 3;
    param_1 = puVar1;
  }
joined_r0x0800b4a8:
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(undefined *)puVar1 = param_2;
      puVar1 = puVar2;
    } while ((undefined4 *)(param_3 + (int)param_1) != puVar2);
  }
  return;
}


////>>0x0800b4d0>>FUN_0800b4d0>>////

/* WARNING: Removing unreachable block (ram,0x0800b4d4) */

void FUN_0800b4d0(void)

{
  return;
}


////>>0x0800b51c>>FUN_0800b51c>>////

void FUN_0800b51c(void)

{
  return;
}


////>>0x0800b520>>FUN_0800b520>>////

void FUN_0800b520(void)

{
  return;
}


////>>0x0800b524>>FUN_0800b524>>////

undefined4 FUN_0800b524(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  __retarget_lock_acquire_recursive(DAT_20000448);
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
    uVar2 = DAT_20000448;
    *(uint *)(puVar1 + 4) = uVar4 + 1;
    *(undefined4 *)(puVar1 + (uVar4 + 2) * 4) = param_2;
    __retarget_lock_release_recursive(uVar2);
    uVar2 = 0;
  }
  else {
    __retarget_lock_release_recursive(DAT_20000448);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


////>>0x0800b5b0>>FUN_0800b5b0>>////

void FUN_0800b5b0(void)

{
  return;
}


////>>0x0800b5bc>>FUN_0800b5bc>>////

void FUN_0800b5bc(void)

{
  return;
}


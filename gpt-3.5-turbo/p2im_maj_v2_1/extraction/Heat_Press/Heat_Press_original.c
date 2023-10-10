java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x000800f4>>__do_global_dtors_aux>>////

/* WARNING: Removing unreachable block (ram,0x00080100) */

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  if ((char)completed_7857 == '\0') {
    completed_7857._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x00080118>>frame_dummy>>////

/* WARNING: Removing unreachable block (ram,0x0008011e) */
/* WARNING: Removing unreachable block (ram,0x00080130) */


void frame_dummy(void)

{
  return;
}


////>>0x00080148>>aflCall>>////

/* WARNING: Unknown calling convention */

uint32_t aflCall(uint32_t a0,uint32_t a1,int32_t a2)

{
  software_interrupt(0x3f);
  return a0;
}


////>>0x0008014c>>startForkserver>>////

/* WARNING: Unknown calling convention */

int startForkserver(int ticks)

{
  uint32_t uVar1;
  
  if (noHyperCall == 0) {
    uVar1 = aflCall(1,ticks,0);
    return uVar1;
  }
  return 0;
}


////>>0x00080164>>begin>>////

/* DWARF original prototype: void  begin(Modbus * this, long u32speed) */

void __thiscall Modbus::begin(Modbus *this,long u32speed)

{
  int iVar1;
  
  this->port = &Serial.super_HardwareSerial;
  (**(code **)(Serial._0_4_ + 0x18))(&Serial);
  if (1 < this->u8txenpin) {
    pinMode((uint)this->u8txenpin,1);
    digitalWrite((uint)this->u8txenpin,0);
  }
  do {
    iVar1 = (**(code **)(*(int *)this->port + 0xc))();
  } while (-1 < iVar1);
  this->u8BufferSize = '\0';
  this->u8lastRec = '\0';
  this->u16errCnt = 0;
  this->u16OutCnt = 0;
  this->u16InCnt = 0;
  return;
}


////>>0x000801b0>>getRxBuffer>>////

/* DWARF original prototype: int8_t  getRxBuffer(Modbus * this) */

int8_t __thiscall Modbus::getRxBuffer(Modbus *this)

{
  bool bVar1;
  uchar uVar2;
  uint8_t uVar3;
  int iVar4;
  byte bVar5;
  
  if (1 < this->u8txenpin) {
    digitalWrite((uint)this->u8txenpin,0);
  }
  bVar1 = false;
  this->u8BufferSize = '\0';
  if (this->u8serno < 4) {
    while (iVar4 = (**(code **)(*(int *)this->port + 8))(), iVar4 != 0) {
      bVar5 = this->u8BufferSize;
      uVar2 = (**(code **)(*(int *)this->port + 0xc))();
      uVar3 = this->u8BufferSize;
      this->au8Buffer[bVar5] = uVar2;
      bVar5 = uVar3 + 1;
      this->u8BufferSize = bVar5;
      if (0x3f < bVar5) {
        bVar1 = true;
      }
    }
  }
  this->u16InCnt = this->u16InCnt + 1;
  if (bVar1) {
    uVar3 = 0xfd;
    this->u16errCnt = this->u16errCnt + 1;
  }
  else {
    uVar3 = this->u8BufferSize;
  }
  return uVar3;
}


////>>0x0008021c>>calcCRC>>////

/* DWARF original prototype: uint16_t  calcCRC(Modbus * this, uint8_t u8length) */

uint16_t __thiscall Modbus::calcCRC(Modbus *this,uint8_t u8length)

{
  Modbus *pMVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint flag;
  
  uVar2 = 0xffff;
  for (pMVar1 = this; ((int)pMVar1 - (int)this & 0xffU) < (uint)u8length;
      pMVar1 = (Modbus *)((int)&pMVar1->port + 1)) {
    uVar2 = uVar2 ^ pMVar1->au8Buffer[0];
    cVar3 = '\b';
    do {
      uVar4 = uVar2 & 1;
      uVar2 = uVar2 >> 1;
      if (uVar4 != 0) {
        uVar2 = uVar2 ^ 0xa001;
      }
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  return (ushort)(uVar2 << 8) | (ushort)(uVar2 >> 8);
}


////>>0x00080258>>sendTxBuffer>>////

/* DWARF original prototype: void  sendTxBuffer(Modbus * this) */

void __thiscall Modbus::sendTxBuffer(Modbus *this)

{
  byte u8length;
  uint16_t uVar1;
  uint16_t u16crc;
  uint32_t uVar2;
  int iVar3;
  
  u8length = this->u8BufferSize;
  uVar1 = calcCRC(this,u8length);
  this->au8Buffer[u8length] = (uchar)(uVar1 >> 8);
  this->au8Buffer[u8length + 1 & 0xff] = (uchar)uVar1;
  this->u8BufferSize = u8length + 2;
  if (1 < this->u8txenpin) {
    digitalWrite((uint)this->u8txenpin,1);
  }
  if (this->u8serno < 4) {
    (**(code **)(*(int *)this->port + 4))(this->port,this->au8Buffer,this->u8BufferSize);
  }
  if (1 < this->u8txenpin) {
    digitalWrite((uint)this->u8txenpin,0);
  }
  if (this->u8serno < 4) {
    do {
      iVar3 = (**(code **)(*(int *)this->port + 0xc))();
    } while (-1 < iVar3);
  }
  this->u8BufferSize = '\0';
  uVar2 = millis();
  this->u32timeOut = uVar2 + this->u16timeOut;
  this->u16OutCnt = this->u16OutCnt + 1;
  return;
}


////>>0x000802da>>query>>////

/* DWARF original prototype: int8_t  query(Modbus * this, modbus_t telegram) */

int8_t __thiscall Modbus::query(Modbus *this,modbus_t telegram)

{
  uchar uVar1;
  uint in_r1;
  uint8_t u8bytesno;
  byte bVar3;
  ushort in_r2;
  ushort *puVar4;
  uint8_t uVar5;
  ushort uVar6;
  ushort *in_r3;
  uint uVar7;
  ushort *puVar8;
  uchar local_1c;
  uchar local_1b;
  uchar uVar2;
  
  local_1c = (uchar)in_r1;
  local_1b = (uchar)(in_r1 >> 8);
  uVar7 = (uint)in_r2;
  if (this->u8id != '\0') {
    return -2;
  }
  if (this->u8state != '\0') {
    return -1;
  }
  if (0xf6 < ((in_r1 & 0xff) - 1 & 0xff)) {
    return -3;
  }
  this->au8Buffer[0] = local_1c;
  this->au8Buffer[1] = local_1b;
  this->au16regs = in_r3;
  this->au8Buffer[2] = (uchar)(in_r1 >> 0x18);
  this->au8Buffer[3] = (uchar)(in_r1 >> 0x10);
  uVar1 = (uchar)in_r2;
  uVar2 = (uchar)(in_r2 >> 8);
  switch(local_1b) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
    this->au8Buffer[4] = uVar2;
    break;
  case '\x05':
    uVar6 = *in_r3;
    if (uVar6 != 0) {
      uVar6 = 1;
    }
    this->au8Buffer[4] = -(char)uVar6;
    uVar7 = 0;
    break;
  case '\x06':
    this->au8Buffer[4] = (uchar)(*in_r3 >> 8);
    uVar7 = (uint)*in_r3;
    break;
  default:
    goto switchD_0008031e_caseD_7;
  case '\x0f':
    bVar3 = (byte)(in_r2 >> 3) & 0xfe;
    if ((in_r2 & 0xf) != 0) {
      bVar3 = bVar3 + 1;
    }
    this->au8Buffer[5] = uVar1;
    this->au8Buffer[4] = uVar2;
    this->au8Buffer[6] = bVar3;
    uVar5 = '\a';
    goto LAB_0008034a;
  case '\x10':
    this->au8Buffer[4] = uVar2;
    this->au8Buffer[5] = uVar1;
    puVar4 = in_r3 + -1;
    this->au8Buffer[6] = uVar1 * '\x02';
    this->u8BufferSize = '\a';
    puVar8 = puVar4 + uVar7;
    while (puVar4 != puVar8) {
      bVar3 = this->u8BufferSize;
      this->au8Buffer[bVar3] = (uchar)(puVar4[1] >> 8);
      uVar7 = bVar3 + 1 & 0xff;
      this->u8BufferSize = (uint8_t)uVar7;
      puVar4 = puVar4 + 1;
      this->au8Buffer[uVar7] = (uchar)*puVar4;
      this->u8BufferSize = bVar3 + 2;
    }
    goto switchD_0008031e_caseD_7;
  }
  this->au8Buffer[5] = (uchar)uVar7;
  uVar5 = '\x06';
LAB_0008034a:
  this->u8BufferSize = uVar5;
switchD_0008031e_caseD_7:
  sendTxBuffer(this);
  this->u8state = '\x01';
  return '\0';
}


////>>0x000803d4>>validateAnswer>>////

/* DWARF original prototype: uint8_t  validateAnswer(Modbus * this) */

uint8_t __thiscall Modbus::validateAnswer(Modbus *this)

{
  uint8_t i;
  int iVar1;
  
  if ((int)((uint)this->au8Buffer[1] << 0x18) < 0) {
    this->u16errCnt = this->u16errCnt + 1;
    return 0xfb;
  }
  iVar1 = 0;
  do {
    if ("\x01\x02\x03\x04\x05\x06\x0f\x10"[iVar1] == this->au8Buffer[1]) {
      return '\0';
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  this->u16errCnt = this->u16errCnt + 1;
  return '\x01';
}


////>>0x00080410>>get_FC3>>////

/* DWARF original prototype: void  get_FC3(Modbus * this) */

void __thiscall Modbus::get_FC3(Modbus *this)

{
  uint16_t uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint16_t *puVar5;
  
  bVar3 = 0;
  while( true ) {
    uVar4 = (uint)bVar3;
    bVar3 = bVar3 + 1;
    uVar2 = uVar4 * 2 + 3 & 0xff;
    if (this->au8Buffer[2] >> 1 <= uVar4) break;
    puVar5 = this->au16regs;
    uVar1 = makeWord(this->au8Buffer[uVar2],this->au8Buffer[uVar2 + 1]);
    puVar5[uVar4] = uVar1;
  }
  return;
}


////>>0x0008043e>>poll>>////

/* DWARF original prototype: int8_t  poll(Modbus * this) */

int __thiscall Modbus::poll(Modbus *this,pollfd *__fds,nfds_t __nfds,int __timeout)

{
  byte bVar1;
  uint8_t uVar2;
  uint8_t u8exception;
  uint32_t uVar3;
  uint8_t u8current;
  uint unaff_r6;
  
  if (this->u8serno < 4) {
    bVar1 = (**(code **)(*(int *)this->port + 8))();
    unaff_r6 = (uint)bVar1;
  }
  uVar3 = millis();
  if (this->u32timeOut < uVar3) {
    this->u8lastError = 0xff;
    this->u8state = '\0';
    this->u16errCnt = this->u16errCnt + 1;
  }
  else if (7 < unaff_r6) {
    getRxBuffer(this);
    uVar2 = validateAnswer(this);
    if (uVar2 == '\0') {
      if (this->au8Buffer[1] - 3 < 2) {
        get_FC3(this);
      }
      this->u8state = '\0';
      uVar2 = this->u8BufferSize;
    }
    else {
      this->u8state = '\0';
    }
    goto LAB_000804a2;
  }
  uVar2 = '\0';
LAB_000804a2:
  return (int)(char)uVar2;
}


////>>0x000804a8>>setup>>////

/* WARNING: Unknown calling convention */

void setup(void)

{
  uint32_t uVar1;
  
  pinMode(1,0);
  pinMode(6,1);
  pinMode(0,1);
  pinMode(1,1);
  digitalWrite(0,0);
  digitalWrite(1,0);
  telegram[1].u16RegAdd = 0x13;
  telegram[1].u16CoilsNo = 10;
  telegram[1].au16reg = au16data + 0x13;
  telegram[0].u8fct = '\x03';
  telegram[2].u8fct = '\x03';
  telegram[2].u16RegAdd = 0x14;
  telegram[3].u16CoilsNo = 3;
  telegram[0].u16CoilsNo = 0x10;
  telegram[0].au16reg = au16data;
  telegram[1].u8fct = '\x10';
  telegram[2].u16CoilsNo = 0xc;
  telegram[3].u8fct = '\x10';
  telegram[4].u16CoilsNo = 8;
  telegram[3].u16RegAdd = 0x1c;
  telegram[3].au16reg = au16data + 0x1c;
  telegram[4].u8id = '\x02';
  telegram[4].u8fct = '\x02';
  telegram[4].au16reg = data8024;
  telegram[5].u8id = '\x02';
  telegram[0].u8id = '\x01';
  telegram[1].u8id = '\x01';
  telegram[2].u8id = '\x01';
  telegram[3].u8id = '\x01';
  telegram[5].u16RegAdd = 1;
  telegram[5].u16CoilsNo = 1;
  telegram[0].u16RegAdd = 0;
  telegram[2].au16reg = au16data + 0x14;
  telegram[4].u16RegAdd = 0;
  telegram[5].u8fct = '\x05';
  telegram[5].au16reg = data8024 + 1;
  Modbus::begin(&master,0x4b00);
  master.u16timeOut = 2000;
  u32wait = millis();
  uVar1 = millis();
  tiempopid1 = uVar1 + 1000;
  uVar1 = millis();
  dutyalto1 = uVar1 + 1000;
  uVar1 = millis();
  dutybajo1 = uVar1 + 1000;
  uVar1 = millis();
  reloj = uVar1 + 1000;
  u8state = '\0';
  startForkserver(0);
  return;
}


////>>0x000805d0>>loop>>////

/* WARNING: Unknown calling convention */

void loop(void)

{
  modbus_t telegram;
  modbus_t telegram_00;
  modbus_t telegram_01;
  modbus_t telegram_02;
  uint32_t uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  pollfd *in_r1;
  nfds_t in_r2;
  int *piVar7;
  uint __timeout;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  float *pfVar8;
  undefined4 in_stack_ffffffd0;
  ulong *puVar9;
  float *pfVar10;
  
  __timeout = (uint)u8state;
  switch(__timeout) {
  case 0:
    uVar1 = millis();
    if (u32wait < uVar1) goto LAB_000806ca;
    break;
  case 1:
    Modbus::poll(&master,in_r1,in_r2,__timeout);
    if (master.u8state == '\0') {
      telegram._4_4_ = in_stack_ffffffcc;
      telegram.u8id = (char)in_stack_ffffffc8;
      telegram.u8fct = (char)((uint)in_stack_ffffffc8 >> 8);
      telegram.u16RegAdd = (short)((uint)in_stack_ffffffc8 >> 0x10);
      telegram.au16reg = (uint16_t *)in_stack_ffffffd0;
      Modbus::query(&master,telegram);
      u8state = u8state + '\x01';
      u32wait = millis();
      tempe_z1 = (int)au16data[1];
      tempe_z2 = (int)au16data[2];
      kpa1 = (float)__floatunsisf(au16data[6]);
      kia1 = (float)__floatsisf(au16data[7] / 10);
      kda1 = (float)__floatunsisf(au16data[8]);
      duty2 = (int)au16data[12];
      duty1 = (int)au16data[9];
      minutos = (int)au16data[14];
      segundos = (int)au16data[15];
    }
    break;
  case 2:
  case 4:
  case 6:
  case 8:
    Modbus::poll(&master,in_r1,in_r2,__timeout);
    if (master.u8state == '\0') {
      u8state = u8state + '\x01';
      u32wait = millis();
    }
    break;
  case 3:
    Modbus::poll(&master,in_r1,in_r2,__timeout);
    if (master.u8state == '\0') {
      telegram_00._4_4_ = in_stack_ffffffcc;
      telegram_00.u8id = (char)in_stack_ffffffc8;
      telegram_00.u8fct = (char)((uint)in_stack_ffffffc8 >> 8);
      telegram_00.u16RegAdd = (short)((uint)in_stack_ffffffc8 >> 0x10);
      telegram_00.au16reg = (uint16_t *)in_stack_ffffffd0;
      Modbus::query(&master,telegram_00);
      u8state = u8state + '\x01';
      u32wait = millis();
      tiempo_espera = (int)au16data[30];
      estado = (int)au16data[29];
    }
    break;
  case 5:
    Modbus::poll(&master,in_r1,in_r2,__timeout);
    if (master.u8state == '\0') {
LAB_000806c4:
      telegram_01._4_4_ = in_stack_ffffffcc;
      telegram_01.u8id = (char)in_stack_ffffffc8;
      telegram_01.u8fct = (char)((uint)in_stack_ffffffc8 >> 8);
      telegram_01.u16RegAdd = (short)((uint)in_stack_ffffffc8 >> 0x10);
      telegram_01.au16reg = (uint16_t *)in_stack_ffffffd0;
      Modbus::query(&master,telegram_01);
      goto LAB_000806ca;
    }
    break;
  case 7:
    Modbus::poll(&master,in_r1,in_r2,__timeout);
    if ((terminar_ciclo == 1) && (master.u8state == '\0')) {
      au16data[29] = 0;
      terminar_ciclo = 0;
      goto LAB_000806c4;
    }
LAB_000806ca:
    u8state = u8state + '\x01';
    break;
  case 9:
    Modbus::poll(&master,in_r1,in_r2,__timeout);
    if (master.u8state == '\0') {
      telegram_02._4_4_ = in_stack_ffffffcc;
      telegram_02.u8id = (char)in_stack_ffffffc8;
      telegram_02.u8fct = (char)((uint)in_stack_ffffffc8 >> 8);
      telegram_02.u16RegAdd = (short)((uint)in_stack_ffffffc8 >> 0x10);
      telegram_02.au16reg = (uint16_t *)in_stack_ffffffd0;
      Modbus::query(&master,telegram_02);
      u32wait = millis();
    }
    u8state = '\0';
  }
  mmt = minutos - mmres;
  if (mmt < 0) {
    mmt = mmt + 0x3c;
  }
  sst = segundos - ssres;
  if (sst < 0) {
    mmt = mmt + -1;
    sst = sst + 0x3c;
  }
  au16data[27] = (ushort)mmt;
  au16data[28] = (ushort)sst;
  if ((mmt == 0) && (sst == 0)) {
    terminar_ciclo = 1;
    mmres = sst;
    ssres = sst;
  }
  if (minutosp == minutos) {
    segundosp = 1 - segundos;
    if (1 < (uint)segundos) {
      segundosp = 0;
    }
    if (segundosp != 0) goto LAB_00080a08;
  }
  else {
LAB_00080a08:
    segundosp = segundos;
    mmres = 0;
    ssres = 0;
    espera_plancha = 0;
    minutosp = minutos;
  }
  if (estado == 0) {
    mmres = estado;
    ssres = estado;
    piVar7 = &espera_plancha;
LAB_000808f2:
    *piVar7 = ssres;
  }
  else {
    if (estado != 1) goto LAB_000808f4;
    if ((espera_plancha < tiempo_espera) && (uVar1 = millis(), reloj < uVar1)) {
      espera_plancha = espera_plancha + 1;
      puVar9 = &reloj;
      uVar1 = millis();
      *puVar9 = uVar1 + 1000;
    }
    if (espera_plancha < tiempo_espera) goto LAB_000808f4;
    espera_plancha = tiempo_espera + 1;
    if (mmres < minutos) {
      uVar1 = millis();
      if (reloj < uVar1) {
        ssres = ssres + 1;
        uVar1 = millis();
        reloj = uVar1 + 1000;
      }
    }
    else {
      if (mmres != minutos) goto LAB_000808f4;
      if (segundos < ssres) {
        piVar7 = &mmres;
        ssres = 0;
        goto LAB_000808f2;
      }
      uVar1 = millis();
      if (reloj < uVar1) {
        ssres = ssres + 1;
        uVar1 = millis();
        reloj = uVar1 + 1000;
      }
    }
    if (0x3b < ssres) {
      ssres = 0;
      mmres = mmres + 1;
    }
  }
LAB_000808f4:
  uVar1 = millis();
  if (tiempopid1 < uVar1) {
    uVar2 = __floatsisf(tempe_z1);
    fVar3 = (float)__aeabi_fsub(uVar2,temperatura1);
    pfVar8 = &ep1;
    e1 = fVar3;
    fVar5 = ep1;
    uVar2 = __addsf3(fVar3,ep1);
    uVar2 = __aeabi_fmul(uVar2,kia1);
    fVar4 = (float)__addsf3(uVar2,kip1);
    kia1 = fVar4;
    uVar2 = __aeabi_fsub(fVar3,fVar5);
    uVar2 = __aeabi_fmul(uVar2,kda1);
    pfVar10 = &kdp1;
    fVar5 = (float)__aeabi_fsub(uVar2,kdp1);
    kda1 = fVar5;
    uVar2 = __aeabi_fmul(fVar3,kpa1);
    uVar2 = __addsf3(uVar2,fVar4);
    __addsf3(uVar2,fVar5);
    pid1 = __aeabi_f2iz();
    YN = (float)__floatsisf();
    *pfVar8 = fVar3;
    incre = 0;
    kip1 = fVar4;
    *pfVar10 = fVar5;
    uVar1 = millis();
    tiempopid1 = uVar1 + duty1;
  }
  fVar5 = (float)__floatsisf(duty1);
  iVar6 = __aeabi_fcmpge(YN,fVar5);
  if (iVar6 != 0) {
    YN = fVar5;
  }
  iVar6 = __aeabi_fcmple(YN,0);
  if (iVar6 != 0) {
    YN = 0.0;
  }
  au16data[21] = __fixunssfsi(YN);
  incre = incre + 1;
  in1 = data8024[0] & 1 ^ 1;
  return;
}


////>>0x00080a68>>_GLOBAL__sub_I__ZN6ModbusC2Ev>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__ZN6ModbusC2Ev(void)

{
  String::String(&RxString,"");
  __aeabi_atexit(&RxString,0x815ff,&__dso_handle);
  master.u8id = '\0';
  master.u8serno = '\0';
  master.u8txenpin = '\x06';
  master.u16timeOut = 1000;
  return;
}


////>>0x00080aa8>>serialEvent>>////

/* WARNING: Unknown calling convention */

void serialEvent(void)

{
  return;
}


////>>0x00080aac>>UART_Handler>>////

/* WARNING: Unknown calling convention */

void UART_Handler(void)

{
  UARTClass::IrqHandler(&Serial);
  return;
}


////>>0x00080ab8>>serialEvent1>>////

/* WARNING: Unknown calling convention */

void serialEvent1(void)

{
  return;
}


////>>0x00080aba>>serialEvent2>>////

/* WARNING: Unknown calling convention */

void serialEvent2(void)

{
  return;
}


////>>0x00080abc>>serialEvent3>>////

/* WARNING: Unknown calling convention */

void serialEvent3(void)

{
  return;
}


////>>0x00080ac0>>USART0_Handler>>////

/* WARNING: Unknown calling convention */

void USART0_Handler(void)

{
  UARTClass::IrqHandler(&Serial1.super_UARTClass);
  return;
}


////>>0x00080acc>>USART1_Handler>>////

/* WARNING: Unknown calling convention */

void USART1_Handler(void)

{
  UARTClass::IrqHandler(&Serial2.super_UARTClass);
  return;
}


////>>0x00080ad8>>USART3_Handler>>////

/* WARNING: Unknown calling convention */

void USART3_Handler(void)

{
  UARTClass::IrqHandler(&Serial3.super_UARTClass);
  return;
}


////>>0x00080ae4>>init>>////



int init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  uint32_t ulPin;
  uint32_t uVar2;
  
  SystemInit();
  _DAT_e000e014 = SystemCoreClock / 1000 - 1;
  DAT_e000ed23 = 0xf0;
  _DAT_e000e018 = 0;
  _DAT_e000e010 = 7;
  __libc_init_array();
  ulPin = 0;
  do {
    uVar2 = ulPin + 1;
    digitalWrite(ulPin,0);
    ulPin = uVar2;
  } while (uVar2 != 0x4f);
  _DAT_400e0ea0 = 0xffffffff;
  _DAT_400e10a0 = 0xffffffff;
  _DAT_400e12a0 = 0xffffffff;
  _DAT_400e14a0 = 0xffffffff;
  PIO_Configure(&DAT_400e0e00,1,0x300,0);
  digitalWrite(0,1);
  PIO_Configure(&DAT_400e0e00,1,0xc00,0);
  PIO_Configure(&DAT_400e0e00,1,0x3000,0);
  PIO_Configure(&DAT_400e1400,2,0x30,0);
  PIO_Configure(&DAT_400e1000,1,0xc00,0);
  PIO_Configure(&DAT_400e0e00,1,3,0);
  PIO_Configure(&DAT_400e1000,1,0xc000,0);
  pmc_enable_periph_clk(0x25);
  adc_init(0x400c0000,SystemCoreClock,20000000,0xc);
  adc_configure_timing(0x400c0000,0,0x300000,1);
  adc_configure_trigger(0x400c0000,0,0);
  adc_disable_interrupt(0x400c0000,0xffffffff);
  iVar1 = adc_disable_all_channel(0x400c0000);
  analogOutputInit();
  return iVar1;
}


////>>0x00080c0c>>_GLOBAL__sub_I_g_APinDescription>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I_g_APinDescription(void)

{
  RingBuffer::RingBuffer(&rx_buffer1);
  RingBuffer::RingBuffer(&tx_buffer1);
  UARTClass::UARTClass(&Serial,(Uart *)0x400e0800,UART_IRQn,8,&rx_buffer1,&tx_buffer1);
  RingBuffer::RingBuffer(&rx_buffer2);
  RingBuffer::RingBuffer(&rx_buffer3);
  RingBuffer::RingBuffer(&rx_buffer4);
  RingBuffer::RingBuffer(&tx_buffer2);
  RingBuffer::RingBuffer(&tx_buffer3);
  RingBuffer::RingBuffer(&tx_buffer4);
  USARTClass::USARTClass(&Serial1,(Usart *)0x40098000,USART0_IRQn,0x11,&rx_buffer2,&tx_buffer2);
  USARTClass::USARTClass(&Serial2,(Usart *)0x4009c000,USART1_IRQn,0x12,&rx_buffer3,&tx_buffer3);
  USARTClass::USARTClass(&Serial3,(Usart *)0x400a4000,USART3_IRQn,0x14,&rx_buffer4,&tx_buffer4);
  return;
}


////>>0x00080ce0>>serialEventRun>>////

/* WARNING: Unknown calling convention */

void serialEventRun(void)

{
  int iVar1;
  
  iVar1 = UARTClass::available(&Serial);
  if (iVar1 != 0) {
    serialEvent();
  }
  iVar1 = UARTClass::available(&Serial1.super_UARTClass);
  if (iVar1 != 0) {
    serialEvent1();
  }
  iVar1 = UARTClass::available(&Serial2.super_UARTClass);
  if (iVar1 != 0) {
    serialEvent2();
  }
  iVar1 = UARTClass::available(&Serial3.super_UARTClass);
  if (iVar1 != 0) {
    serialEvent3();
  }
  return;
}


////>>0x00080d24>>PIO_PullUp>>////

void PIO_PullUp(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 100) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}


////>>0x00080d2e>>PIO_SetPeripheral>>////

void PIO_SetPeripheral(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x44) = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    return;
  case 1:
    uVar1 = *(uint *)(param_1 + 0x70) & *(uint *)(param_1 + 0x70) & ~param_3;
    break;
  case 2:
    uVar1 = *(uint *)(param_1 + 0x70) | param_3;
    break;
  default:
    goto switchD_00080d34_caseD_6;
  }
  *(uint *)(param_1 + 0x70) = uVar1;
switchD_00080d34_caseD_6:
  *(uint *)(param_1 + 4) = param_3;
  return;
}


////>>0x00080d54>>PIO_SetInput>>////

void PIO_SetInput(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = (int)(param_3 << 0x1f) < 0;
  param_1[0x11] = param_2;
  if (bVar1) {
    param_1[0x19] = param_2;
  }
  if (!bVar1) {
    param_1[0x18] = param_2;
  }
  bVar1 = (param_3 & 10) != 0;
  if (bVar1) {
    param_1[8] = param_2;
  }
  if (!bVar1) {
    param_1[9] = param_2;
  }
  if (((int)(param_3 << 0x1e) < 0) || ((int)(param_3 << 0x1c) < 0)) {
    param_1[0x20] = param_2;
  }
  param_1[5] = param_2;
  *param_1 = param_2;
  return;
}


////>>0x00080d7a>>PIO_SetOutput>>////

void PIO_SetOutput(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  param_1[0x11] = param_2;
  if (param_5 == 0) {
    param_1[0x18] = param_2;
  }
  else {
    param_1[0x19] = param_2;
  }
  if (param_4 == 0) {
    param_1[0x15] = param_2;
  }
  else {
    param_1[0x14] = param_2;
  }
  if (param_3 == 0) {
    param_1[0xd] = param_2;
  }
  else {
    param_1[0xc] = param_2;
  }
  param_1[4] = param_2;
  *param_1 = param_2;
  return;
}


////>>0x00080da0>>PIO_Configure>>////

undefined4 PIO_Configure(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  
  switch(param_2) {
  case 1:
  case 2:
    PIO_SetPeripheral(param_1,param_2,param_3);
    bVar1 = (int)(param_4 << 0x1f) < 0;
    *(undefined4 *)(param_1 + 0x44) = param_3;
    if (bVar1) {
      *(undefined4 *)(param_1 + 100) = param_3;
    }
    if (!bVar1) {
      *(undefined4 *)(param_1 + 0x60) = param_3;
    }
    break;
  case 3:
    PIO_SetInput(param_1,param_3,param_4,0x80d55,param_1);
    break;
  case 4:
  case 5:
    PIO_SetOutput(param_1,param_3,param_2 == 5,(param_4 << 0x1d) >> 0x1f,param_4 & 1,param_2,param_3
                 );
    break;
  default:
    return 0;
  }
  return 1;
}


////>>0x00080e04>>PIO_GetOutputDataStatus>>////

uint PIO_GetOutputDataStatus(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8) & param_2;
  if (uVar1 != 0) {
    if ((param_2 & *(uint *)(param_1 + 0x18)) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


////>>0x00080e18>>pmc_enable_periph_clk>>////



undefined4 pmc_enable_periph_clk(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x2d) {
    if (param_1 < 0x20) {
      uVar1 = 1 << (param_1 & 0xff);
      if ((uVar1 & _DAT_400e0618) != uVar1) {
        _DAT_400e0610 = uVar1;
      }
    }
    else {
      uVar1 = 1 << (param_1 - 0x20 & 0xff);
      if ((uVar1 & _DAT_400e0708) != uVar1) {
        _DAT_400e0700 = uVar1;
      }
    }
    return 0;
  }
  return 1;
}


////>>0x00080e5c>>pmc_disable_periph_clk>>////



undefined4 pmc_disable_periph_clk(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 < 0x2d) {
    if (param_1 < 0x20) {
      uVar1 = 1 << (param_1 & 0xff);
      uVar2 = _DAT_400e0618 & uVar1;
      if (uVar2 == uVar1) {
        _DAT_400e0614 = uVar2;
      }
    }
    else {
      uVar1 = 1 << (param_1 - 0x20 & 0xff);
      uVar2 = _DAT_400e0708 & uVar1;
      if (uVar2 == uVar1) {
        _DAT_400e0704 = uVar2;
      }
    }
    return 0;
  }
  return 1;
}


////>>0x00080e9c>>SystemInit>>////



void SystemInit(void)

{
  _DAT_400e0a00 = 0x400;
  _DAT_400e0c00 = 0x400;
  _DAT_400e0620 = _DAT_400e0620 << 7;
  while (-1 < _DAT_400e0620) {
    _DAT_400e0620 = _DAT_400e0668 << 0x1f;
  }
  _DAT_400e0620 = 0x1370809;
  do {
  } while (-1 < _DAT_400e0668 << 0xf);
  do {
  } while (-1 < _DAT_400e0668 << 0x1c);
  _DAT_400e0628 = 0x200d3f01;
  do {
  } while (-1 < _DAT_400e0668 << 0x1e);
  do {
  } while (-1 < _DAT_400e0668 << 0x1c);
  _DAT_400e0630 = 0x12;
  do {
  } while (-1 < _DAT_400e0668 << 0x1c);
  SystemCoreClock = 84000000;
  return;
}


////>>0x00080f24>>Reset_Handler>>////

/* WARNING: Removing unreachable block (ram,0x00080f6e) */


void Reset_Handler(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (iVar1 = 0; banzai + iVar1 < &completed_7857; iVar1 = iVar1 + 4) {
    *(undefined4 *)(banzai + iVar1) = *(undefined4 *)(&_etext + iVar1);
  }
  for (puVar2 = &completed_7857; puVar2 < &_ebss; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  _DAT_e000ed08 = 0x80000;
  main();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00080f9c>>adc_init>>////

undefined4 adc_init(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_58 [16];
  
  local_58[0] = 0;
  local_58[1] = 8;
  local_58[2] = 0x10;
  local_58[3] = 0x18;
  local_58[4] = 0x40;
  local_58[5] = 0x50;
  local_58[6] = 0x60;
  local_58[7] = 0x70;
  local_58[8] = 0x200;
  local_58[9] = 0x240;
  local_58[10] = 0x280;
  local_58[11] = 0x2c0;
  local_58[12] = 0x300;
  local_58[13] = 0x340;
  local_58[14] = 0x380;
  local_58[15] = 0x3c0;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[0x48] = 0x202;
  param_1[0x41] = 0;
  param_1[0x45] = 0;
  uVar1 = param_2 / (uint)(param_3 * 2);
  if (param_2 == param_3 * 2 * uVar1) {
    uVar1 = uVar1 - 1;
  }
  uVar2 = 0;
  do {
    if ((uint)(param_4 * (int)(((ulonglong)param_2 / (ulonglong)((uVar1 + 1) * 2)) / 1000000)) <=
        local_58[uVar2]) {
      param_1[1] = (uVar2 & 0xf) << 0x10 | (uVar1 & 0xff) << 8 | param_1[1];
      return 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x10);
  return 0xffffffff;
}


////>>0x00081034>>adc_configure_trigger>>////

void adc_configure_trigger(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 4) = param_2 | *(uint *)(param_1 + 4) | (param_3 & 1) << 7;
  return;
}


////>>0x00081042>>adc_configure_timing>>////

void adc_configure_timing(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 4) =
       param_3 | *(uint *)(param_1 + 4) | (param_2 & 0xf) << 0x18 | (param_4 & 3) << 0x1c;
  return;
}


////>>0x0008105c>>adc_disable_channel>>////

void adc_disable_channel(int param_1,uint param_2)

{
  *(int *)(param_1 + 0x14) = 1 << (param_2 & 0xff);
  return;
}


////>>0x00081066>>adc_disable_all_channel>>////

void adc_disable_all_channel(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xffff;
  return;
}


////>>0x0008106e>>adc_disable_interrupt>>////

void adc_disable_interrupt(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


////>>0x00081074>>UOTGHS_Handler>>////

void UOTGHS_Handler(void)

{
  if (gpf_isr != (code *)0x0) {
    (*gpf_isr)();
  }
  return;
}


////>>0x00081084>>PIOA_Handler>>////


/* WARNING: Unknown calling convention */

void PIOA_Handler(void)

{
  uint8_t leading_zeros;
  uint32_t isr;
  uint uVar1;
  
  for (isr = _DAT_400e0e4c; (uint)LZCOUNT(isr) < 0x20; isr = isr & ~(1 << uVar1)) {
    uVar1 = 0x1fU - LZCOUNT(isr) & 0xff;
    if (callbacksPioA[uVar1] != (interruptCB)0x0) {
      (*callbacksPioA[uVar1])();
    }
  }
  return;
}


////>>0x000810bc>>PIOB_Handler>>////


/* WARNING: Unknown calling convention */

void PIOB_Handler(void)

{
  uint8_t leading_zeros;
  uint32_t isr;
  uint uVar1;
  
  for (isr = _DAT_400e104c; (uint)LZCOUNT(isr) < 0x20; isr = isr & ~(1 << uVar1)) {
    uVar1 = 0x1fU - LZCOUNT(isr) & 0xff;
    if (callbacksPioB[uVar1] != (interruptCB)0x0) {
      (*callbacksPioB[uVar1])();
    }
  }
  return;
}


////>>0x000810f4>>PIOC_Handler>>////


/* WARNING: Unknown calling convention */

void PIOC_Handler(void)

{
  uint8_t leading_zeros;
  uint32_t isr;
  uint uVar1;
  
  for (isr = _DAT_400e124c; (uint)LZCOUNT(isr) < 0x20; isr = isr & ~(1 << uVar1)) {
    uVar1 = 0x1fU - LZCOUNT(isr) & 0xff;
    if (callbacksPioC[uVar1] != (interruptCB)0x0) {
      (*callbacksPioC[uVar1])();
    }
  }
  return;
}


////>>0x0008112c>>PIOD_Handler>>////


/* WARNING: Unknown calling convention */

void PIOD_Handler(void)

{
  uint8_t leading_zeros;
  uint32_t isr;
  uint uVar1;
  
  for (isr = _DAT_400e144c; (uint)LZCOUNT(isr) < 0x20; isr = isr & ~(1 << uVar1)) {
    uVar1 = 0x1fU - LZCOUNT(isr) & 0xff;
    if (callbacksPioD[uVar1] != (interruptCB)0x0) {
      (*callbacksPioD[uVar1])();
    }
  }
  return;
}


////>>0x00081164>>__halt>>////

/* WARNING: Unknown calling convention */

void __halt(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00081166>>SVC_Handler>>////

/* WARNING: Unknown calling convention */

void SVC_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x0008116a>>PendSV_Handler>>////

/* WARNING: Unknown calling convention */

void PendSV_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x0008116e>>SysTick_Handler>>////

/* WARNING: Unknown calling convention */

void SysTick_Handler(void)

{
  int iVar1;
  
  iVar1 = __false();
  if (iVar1 == 0) {
    tickReset();
    TimeTick_Increment();
    return;
  }
  return;
}


////>>0x00081184>>__false>>////

/* WARNING: Unknown calling convention */

int __false(void)

{
  return 0;
}


////>>0x00081188>>__halt>>////

/* WARNING: Unknown calling convention */

void __halt(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x0008118c>>_sbrk>>////

void * _sbrk(intptr_t __delta)

{
  uchar *puVar1;
  uchar *prev_heap;
  
  if (_sbrk::heap == (uchar *)0x0) {
    _sbrk::heap = &_ebss;
  }
  puVar1 = _sbrk::heap;
  _sbrk::heap = _sbrk::heap + __delta;
  return puVar1;
}


////>>0x000811a8>>link>>////

int link(char *__from,char *__to)

{
  return -1;
}


////>>0x000811ae>>_close>>////

int _close(int __fd)

{
  return -1;
}


////>>0x000811b4>>_fstat>>////

int _fstat(int __fd,stat *__buf)

{
  *(undefined4 *)((int)&__buf->st_dev + 4) = 0x2000;
  return 0;
}


////>>0x000811be>>_isatty>>////

int _isatty(int __fd)

{
  return 1;
}


////>>0x000811c2>>_lseek>>////

__off_t _lseek(int __fd,__off_t __offset,int __whence)

{
  return 0;
}


////>>0x000811c6>>_read>>////

/* WARNING: Unknown calling convention */

int _read(int file_UNUSED,char *ptr_UNUSED,int len_UNUSED)

{
  return 0;
}


////>>0x000811cc>>_write>>////


/* WARNING: Unknown calling convention */

int _write(int file_UNUSED,char *ptr,int len)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < len; iVar1 = iVar1 + 1) {
    do {
    } while (-1 < _DAT_400e0814 << 0x1e);
    _DAT_400e081c = (uint)(byte)ptr[iVar1];
  }
  return len & ~(len >> 0x1f);
}


////>>0x000811f0>>_exit>>////

void _exit(int __status)

{
  iprintf("Exiting with status %d.\n",__status);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00081200>>_kill>>////

/* WARNING: Unknown calling convention */

void _kill(int pid_UNUSED,int sig_UNUSED)

{
  return;
}


////>>0x00081202>>_getpid>>////



__pid_t _getpid(void)

{
  return -1;
}


////>>0x00081208>>millis>>////

/* WARNING: Unknown calling convention */

uint32_t millis(void)

{
  return _dwTickCount;
}


////>>0x0008120c>>delay>>////

/* WARNING: Unknown calling convention */

void delay(uint32_t ms)

{
  return;
}


////>>0x0008120e>>analogOutputInit>>////

/* WARNING: Unknown calling convention */

void analogOutputInit(void)

{
  return;
}


////>>0x00081210>>pinMode>>////

/* WARNING: Unknown calling convention */

void pinMode(uint32_t ulPin,uint32_t ulMode)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  Pio_conflict *pPVar4;
  
  if (g_APinDescription[ulPin].ulPinType != PIO_NOT_A_PIN) {
    if ((g_pinStatus[ulPin] & 0xf) == 4) {
      adc_disable_channel(0x400c0000,g_APinDescription[ulPin].ulADCChannelNumber);
    }
    bVar3 = g_pinStatus[ulPin];
    bVar2 = bVar3 & 0xf;
    if ((bVar2 < 3) && (bVar3 != 0)) {
      if (bVar2 == 2) {
        if (ulMode == 0) {
          return;
        }
      }
      else if (bVar2 == 1) {
        if (ulMode == 2) {
          return;
        }
      }
      else if (bVar2 == 3) {
        if (ulMode == 1) {
          return;
        }
        goto LAB_0008126c;
      }
    }
    if (ulMode != 1) {
LAB_0008126c:
      if (ulMode == 0) {
        pmc_enable_periph_clk(g_APinDescription[ulPin].ulPeripheralId);
        PIO_Configure(g_APinDescription[ulPin].pPort,3,g_APinDescription[ulPin].ulPin,0);
        bVar3 = g_pinStatus[ulPin] & 0xf0 | 2;
      }
      else {
        if (ulMode != 2) {
          return;
        }
        pmc_enable_periph_clk(g_APinDescription[ulPin].ulPeripheralId);
        PIO_Configure(g_APinDescription[ulPin].pPort,3,g_APinDescription[ulPin].ulPin,1);
        bVar3 = g_pinStatus[ulPin] & 0xf0 | 1;
      }
      g_pinStatus[ulPin] = bVar3;
      return;
    }
    pPVar4 = g_APinDescription[ulPin].pPort;
    if (bVar3 >> 4 == 0) {
      uVar1 = 4;
    }
    else {
      uVar1 = 5;
    }
    PIO_Configure(pPVar4,uVar1,g_APinDescription[ulPin].ulPin,
                  g_APinDescription[ulPin].ulPinConfiguration);
    g_pinStatus[ulPin] = g_pinStatus[ulPin] & 0xf0 | 3;
    if (pPVar4->PIO_OSR == 0xffffffff) {
      pmc_disable_periph_clk(g_APinDescription[ulPin].ulPeripheralId);
      return;
    }
  }
  return;
}


////>>0x00081318>>digitalWrite>>////

/* WARNING: Unknown calling convention */

void digitalWrite(uint32_t ulPin,uint32_t ulVal)

{
  int iVar1;
  uint32_t uVar2;
  Pio_conflict *pPVar3;
  uint32_t uVar4;
  
  if (g_APinDescription[ulPin].ulPinType != PIO_NOT_A_PIN) {
    uVar4 = ulVal;
    if ((g_pinStatus[ulPin] & 0xf) == 5) {
      pinMode(ulPin,1);
    }
    g_pinStatus[ulPin] = g_pinStatus[ulPin] & 0xf | (byte)(ulVal << 4);
    pPVar3 = g_APinDescription[ulPin].pPort;
    uVar2 = g_APinDescription[ulPin].ulPin;
    iVar1 = PIO_GetOutputDataStatus(pPVar3,uVar2);
    if (iVar1 == 0) {
      PIO_PullUp(pPVar3,uVar2,ulVal);
      return;
    }
    PIO_SetOutput(pPVar3,uVar2,ulVal,0,1,uVar4);
  }
  return;
}


////>>0x00081388>>tickReset>>////

/* WARNING: Unknown calling convention */

void tickReset(void)

{
  if ((ticks != -1) && (ticks = ticks + -1, ticks == 0)) {
    banzai();
  }
  return;
}


////>>0x000813a8>>RingBuffer>>////

/* DWARF original prototype: RingBuffer *  RingBuffer(RingBuffer * this) */

RingBuffer * __thiscall RingBuffer::RingBuffer(RingBuffer *this)

{
  memset(this,0,0x80);
  this->_iHead = 0;
  this->_iTail = 0;
  return this;
}


////>>0x000813c2>>store_char>>////

/* DWARF original prototype: void  store_char(RingBuffer * this, uint8_t c) */

void __thiscall RingBuffer::store_char(RingBuffer *this,uint8_t c)

{
  int i;
  uint uVar1;
  
  i = this->_iHead;
  uVar1 = i + 1U & 0x7f;
  if (uVar1 != this->_iTail) {
    this->_aucBuffer[this->_iHead] = c;
    this->_iHead = uVar1;
  }
  return;
}


////>>0x000813e0>>operator_bool>>////

/* DWARF original name: operator bool
   DWARF original prototype: bool  operator_bool(UARTClass * this) */

bool __thiscall UARTClass::operator_bool(UARTClass *this)

{
  return true;
}


////>>0x000813e4>>available>>////

/* DWARF original prototype: int  available(UARTClass * this) */

int __thiscall UARTClass::available(UARTClass *this)

{
  return this->_rx_buffer->_iHead - this->_rx_buffer->_iTail & 0x7f;
}


////>>0x000813f6>>peek>>////

/* DWARF original prototype: int  peek(UARTClass * this) */

int __thiscall UARTClass::peek(UARTClass *this)

{
  uint uVar1;
  RingBuffer *pRVar2;
  
  pRVar2 = this->_rx_buffer;
  if (pRVar2->_iHead == pRVar2->_iTail) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)pRVar2->_aucBuffer[pRVar2->_iTail];
  }
  return uVar1;
}


////>>0x00081412>>read>>////

/* DWARF original prototype: int  read(UARTClass * this) */

ssize_t __thiscall UARTClass::read(UARTClass *this,int __fd,void *__buf,size_t __nbytes)

{
  byte bVar1;
  uint8_t uc;
  RingBuffer *pRVar2;
  
  pRVar2 = this->_rx_buffer;
  if (pRVar2->_iHead != pRVar2->_iTail) {
    bVar1 = pRVar2->_aucBuffer[pRVar2->_iTail];
    pRVar2->_iTail = pRVar2->_iTail + 1U & 0x7f;
    return (uint)bVar1;
  }
  return -1;
}


////>>0x0008143c>>flush>>////

/* DWARF original prototype: void  flush(UARTClass * this) */

void __thiscall UARTClass::flush(UARTClass *this)

{
  do {
  } while (this->_tx_buffer->_iHead != this->_tx_buffer->_iTail);
  do {
  } while (-1 < (int)(this->_pUart->UART_SR << 0x16));
  return;
}


////>>0x00081454>>write>>////

/* DWARF original prototype: size_t  write(UARTClass * this, uint8_t uc_data) */

ssize_t __thiscall UARTClass::write(UARTClass *this,int __fd,void *__buf,size_t __n)

{
  RingBuffer *pRVar1;
  uint uVar2;
  
  pRVar1 = this->_tx_buffer;
  if (((int)(this->_pUart->UART_SR << 0x1e) < 0) && (pRVar1->_iTail == pRVar1->_iHead)) {
    this->_pUart->UART_THR = __fd;
  }
  else {
    uVar2 = pRVar1->_iHead + 1U & 0x8000007f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffff80) + 1;
    }
    do {
    } while (pRVar1->_iTail == uVar2);
    pRVar1->_aucBuffer[pRVar1->_iHead] = (uchar)__fd;
    this->_tx_buffer->_iHead = uVar2;
    this->_pUart->UART_IER = 2;
  }
  return 1;
}


////>>0x000814a8>>end>>////

/* DWARF original prototype: void  end(UARTClass * this) */

void __thiscall UARTClass::end(UARTClass *this)

{
  this->_rx_buffer->_iHead = this->_rx_buffer->_iTail;
  (**(code **)(*(int *)this + 0x14))();
  *(int *)((((uint)(int)this->_dwIrq >> 5) + 0x20) * 4 + -0x1fff1f00) =
       1 << (uint)(byte)(this->_dwIrq & 0x1f);
  pmc_disable_periph_clk(this->_dwId);
  return;
}


////>>0x000814e4>>UARTClass>>////

/* DWARF original prototype: UARTClass *  UARTClass(UARTClass * this, Uart * pUart, IRQn_Type dwIrq,
   uint32_t dwId, RingBuffer * pRx_buffer, RingBuffer * pTx_buffer) */

UARTClass * __thiscall
UARTClass::UARTClass
          (UARTClass *this,Uart *pUart,IRQn_Type dwIrq,uint32_t dwId,RingBuffer *pRx_buffer,
          RingBuffer *pTx_buffer)

{
  *(undefined4 *)&this->field_0x4 = 0;
  *(undefined4 *)&this->field_0x8 = 1000;
  this->_pUart = pUart;
  *(undefined ***)this = &PTR_write_1_000857a8;
  this->_dwIrq = dwIrq;
  this->_rx_buffer = pRx_buffer;
  this->_dwId = dwId;
  this->_tx_buffer = pTx_buffer;
  return this;
}


////>>0x00081508>>init>>////

/* DWARF original prototype: void  init(UARTClass * this, uint32_t dwBaudRate, uint32_t modeReg) */

int __thiscall UARTClass::init(UARTClass *this,EVP_PKEY_CTX *ctx)

{
  uint uVar1;
  RingBuffer *pRVar2;
  RwReg in_r2;
  Uart *pUVar3;
  
  pmc_enable_periph_clk(this->_dwId);
  pUVar3 = this->_pUart;
  pUVar3->UART_PTCR = 0x202;
  pUVar3->UART_CR = 0xac;
  pUVar3->UART_MR = in_r2;
  pUVar3->UART_BRGR = SystemCoreClock / (uint)ctx >> 4;
  pUVar3->UART_IDR = 0xffffffff;
  pUVar3->UART_IER = 0x61;
  uVar1 = (uint)(int)this->_dwIrq >> 5;
  *(int *)(uVar1 * 4 + -0x1fff1f00) = 1 << (uint)(byte)(this->_dwIrq & 0x1f);
  pRVar2 = this->_rx_buffer;
  pRVar2->_iTail = 0;
  pRVar2->_iHead = 0;
  pRVar2 = this->_tx_buffer;
  pRVar2->_iTail = 0;
  pRVar2->_iHead = 0;
  pUVar3->UART_CR = 0x50;
  return uVar1;
}


////>>0x00081578>>begin>>////

/* DWARF original prototype: void  begin(UARTClass * this, uint32_t dwBaudRate) */

void __thiscall UARTClass::begin(UARTClass *this,uint32_t dwBaudRate)

{
  init(this,(EVP_PKEY_CTX *)dwBaudRate);
  return;
}


////>>0x00081580>>IrqHandler>>////

/* DWARF original prototype: void  IrqHandler(UARTClass * this) */

void __thiscall UARTClass::IrqHandler(UARTClass *this)

{
  RingBuffer *pRVar1;
  uint32_t status;
  RoReg RVar2;
  
  RVar2 = this->_pUart->UART_SR;
  if ((int)(RVar2 << 0x1f) < 0) {
    RingBuffer::store_char(this->_rx_buffer,(uint8_t)this->_pUart->UART_RHR);
  }
  if ((int)(RVar2 << 0x1e) < 0) {
    pRVar1 = this->_tx_buffer;
    if (pRVar1->_iTail != pRVar1->_iHead) {
      this->_pUart->UART_THR = (uint)pRVar1->_aucBuffer[pRVar1->_iTail];
      pRVar1->_iTail = pRVar1->_iTail + 1U & 0x7f;
      return;
    }
    this->_pUart->UART_IDR = 2;
  }
  return;
}


////>>0x000815ca>>begin>>////

/* DWARF original prototype: void  begin(USARTClass * this, uint32_t dwBaudRate) */

void __thiscall USARTClass::begin(USARTClass *this,uint32_t dwBaudRate)

{
  UARTClass::init(&this->super_UARTClass,(EVP_PKEY_CTX *)dwBaudRate);
  return;
}


////>>0x000815d4>>USARTClass>>////

/* DWARF original prototype: USARTClass *  USARTClass(USARTClass * this, Usart * pUsart, IRQn_Type
   dwIrq, uint32_t dwId, RingBuffer * pRx_buffer, RingBuffer * pTx_buffer) */

USARTClass * __thiscall
USARTClass::USARTClass
          (USARTClass *this,Usart *pUsart,IRQn_Type dwIrq,uint32_t dwId,RingBuffer *pRx_buffer,
          RingBuffer *pTx_buffer)

{
  UARTClass::UARTClass(&this->super_UARTClass,(Uart *)pUsart,dwIrq,dwId,pRx_buffer,pTx_buffer);
  *(undefined ***)&this->super_UARTClass = &PTR_write_1_000857d8;
  this->_pUsart = pUsart;
  return this;
}


////>>0x000815f8>>makeWord>>////

/* WARNING: Unknown calling convention */

uint16_t makeWord(uint8_t h,uint8_t l)

{
  return CONCAT11(h,l);
}


////>>0x000815fe>>~String>>////

/* DWARF original prototype: void *  ~String(String * this, int __in_chrg) */

void * __thiscall String::~String(String *this,int __in_chrg)

{
  free(this->buffer);
  return this;
}


////>>0x0008160c>>invalidate>>////

/* DWARF original prototype: void  invalidate(String * this) */

void __thiscall String::invalidate(String *this)

{
  if (this->buffer != (char *)0x0) {
    free(this->buffer);
  }
  this->buffer = (char *)0x0;
  this->len = 0;
  this->capacity = 0;
  return;
}


////>>0x00081622>>changeBuffer>>////

/* DWARF original prototype: uchar  changeBuffer(String * this, uint maxStrLen) */

uchar __thiscall String::changeBuffer(String *this,uint maxStrLen)

{
  char *pcVar1;
  char *newbuffer;
  
  pcVar1 = (char *)realloc(this->buffer,maxStrLen + 1);
  if (pcVar1 != (char *)0x0) {
    this->buffer = pcVar1;
    this->capacity = maxStrLen;
    pcVar1 = (char *)0x1;
  }
  return (uchar)pcVar1;
}


////>>0x0008163a>>reserve>>////

/* DWARF original prototype: uchar  reserve(String * this, uint size) */

uchar __thiscall String::reserve(String *this,uint size)

{
  uchar uVar1;
  
  if ((this->buffer == (char *)0x0) || (this->capacity < size)) {
    uVar1 = changeBuffer(this,size);
    if (uVar1 == '\0') {
      return '\0';
    }
    if (this->len == 0) {
      *this->buffer = '\0';
    }
  }
  return '\x01';
}


////>>0x0008165c>>copy>>////

/* DWARF original prototype: String *  copy(String * this, char * cstr, uint length) */

int __thiscall String::copy(String *this,EVP_PKEY_CTX *dst,EVP_PKEY_CTX *src)

{
  uchar uVar1;
  
  uVar1 = reserve(this,(uint)src);
  if (uVar1 == '\0') {
    invalidate(this);
  }
  else {
    this->len = (uint)src;
    strcpy(this->buffer,(char *)dst);
  }
  return (int)this;
}


////>>0x00081682>>String>>////

/* DWARF original prototype: String *  String(String * this, char * cstr) */

String * __thiscall String::String(String *this,char *cstr)

{
  EVP_PKEY_CTX *src;
  
  this->buffer = (char *)0x0;
  this->capacity = 0;
  this->len = 0;
  if (cstr != (char *)0x0) {
    src = (EVP_PKEY_CTX *)strlen(cstr);
    copy(this,(EVP_PKEY_CTX *)cstr,src);
  }
  return this;
}


////>>0x000816a6>>initVariant>>////

/* WARNING: Unknown calling convention */

void initVariant(void)

{
  return;
}


////>>0x000816a8>>main>>////

/* WARNING: Unknown calling convention */

int main(void)

{
  EVP_PKEY_CTX *in_r0;
  
  _watchdogDefaultSetup();
  init(in_r0);
  initVariant();
  delay(1);
  setup();
  do {
    loop();
    serialEventRun();
  } while( true );
}


////>>0x000816d4>>_watchdogDefaultSetup>>////

/* WARNING: Unknown calling convention */

void _watchdogDefaultSetup(void)

{
  WDT_Disable(0x400e1a50);
  return;
}


////>>0x000816e0>>write>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x000816f6 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  write(Print * this, uint8_t * buffer, size_t size) */

ssize_t __thiscall Print::write(Print *this,int __fd,void *__buf,size_t __n)

{
  Print *pPVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  pPVar1 = this;
  while ((pvVar2 != __buf &&
         (pPVar1 = (Print *)(**this->_vptr_Print)(pPVar1,(uint)*(byte *)(__fd + (int)pvVar2)),
         pPVar1 != (Print *)0x0))) {
    pvVar2 = (void *)((int)pvVar2 + 1);
  }
  return (ssize_t)pvVar2;
}


////>>0x00081704>>TimeTick_Increment>>////

void TimeTick_Increment(void)

{
  _dwTickCount = _dwTickCount + 1;
  return;
}


////>>0x00081714>>GetTickCount>>////

undefined4 GetTickCount(void)

{
  return _dwTickCount;
}


////>>0x00081720>>WDT_Disable>>////

void WDT_Disable(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x8000;
  return;
}


////>>0x00081728>>__aeabi_frsub>>////

void __aeabi_frsub(uint param_1)

{
  __addsf3(param_1 ^ 0x80000000);
  return;
}


////>>0x00081730>>__aeabi_fsub>>////

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
LAB_0008186a:
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
    if ((uVar5 & 0x800000) == 0) {
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
      if (0xfd < uVar6) goto LAB_0008186a;
    }
  }
  uVar5 = uVar5 + uVar3 * 0x800000 + (uint)(0x7fffffff < uVar4);
  if (uVar4 == 0x80000000) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5 | param_1;
}


////>>0x00081734>>__addsf3>>////

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
LAB_0008186a:
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
    if ((uVar4 & 0x800000) == 0) {
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
      if (0xfd < uVar5) goto LAB_0008186a;
    }
  }
  uVar4 = uVar4 + uVar6 * 0x800000 + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}


////>>0x00081894>>__floatunsisf>>////

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


////>>0x0008189c>>__floatsisf>>////

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


////>>0x000818b8>>__aeabi_ul2f>>////

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


////>>0x000818c8>>__aeabi_l2f>>////

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


////>>0x00081944>>__aeabi_fmul>>////

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
      goto LAB_00081a94;
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
LAB_00081a94:
  return uVar2 & 0x80000000 | 0x7f800000;
}


////>>0x00081aac>>__aeabi_fdiv>>////

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
LAB_00081aa2:
        return uVar6 | 0x7fc00000;
      }
    }
    else {
      if (param_4 == 0xff) {
        uVar6 = param_2;
        if ((param_2 & 0x7fffff) == 0) {
LAB_00081a58:
          return (param_1 ^ param_2) & 0x80000000;
        }
        goto LAB_00081aa2;
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
        goto LAB_00081ac4;
      }
      if ((param_1 & 0x7fffffff) == 0) {
        if ((param_2 & 0x7fffffff) != 0) goto LAB_00081a58;
        goto LAB_00081aa2;
      }
    }
    param_1 = param_1 ^ param_2;
  }
  else {
LAB_00081ac4:
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


////>>0x00081be4>>__gesf2>>////

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


////>>0x00081bec>>__ltsf2>>////

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


////>>0x00081bf4>>__cmpsf2>>////

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


////>>0x00081c54>>__aeabi_cfrcmple>>////

void __aeabi_cfrcmple(undefined4 param_1,undefined4 param_2)

{
  __aeabi_cfcmpeq(param_2,param_1);
  return;
}


////>>0x00081c5c>>__aeabi_cfcmpeq>>////

undefined8 __aeabi_cfcmpeq(undefined4 param_1,undefined4 param_2)

{
  __cmpsf2();
  return CONCAT44(param_2,param_1);
}


////>>0x00081c6c>>__aeabi_fcmpeq>>////

bool __aeabi_fcmpeq(void)

{
  char in_ZR;
  
  __aeabi_cfcmpeq();
  return in_ZR != '\0';
}


////>>0x00081c80>>__aeabi_fcmplt>>////

bool __aeabi_fcmplt(void)

{
  char in_CY;
  
  __aeabi_cfcmpeq();
  return in_CY == '\0';
}


////>>0x00081c94>>__aeabi_fcmple>>////

bool __aeabi_fcmple(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x00081ca8>>__aeabi_fcmpge>>////

bool __aeabi_fcmpge(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x00081cbc>>__aeabi_fcmpgt>>////

bool __aeabi_fcmpgt(void)

{
  char in_CY;
  
  __aeabi_cfrcmple();
  return in_CY == '\0';
}


////>>0x00081cd0>>__aeabi_f2iz>>////

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


////>>0x00081d1c>>__fixunssfsi>>////

uint __fixunssfsi(uint param_1)

{
  uint uVar1;
  
  if (((param_1 & 0x80000000) != 0) || (param_1 << 1 < 0x7f000000)) {
    return 0;
  }
  uVar1 = 0x9e - ((param_1 << 1) >> 0x18);
  if (-1 < (int)uVar1) {
    return (param_1 << 8 | 0x80000000) >> (uVar1 & 0xff);
  }
  if ((uVar1 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
    return 0;
  }
  return 0xffffffff;
}


////>>0x00081d5c>>__aeabi_atexit>>////

void __aeabi_atexit(undefined4 param_1,undefined4 param_2)

{
  __cxa_atexit(param_2,param_1);
  return;
}


////>>0x00081d68>>__cxa_atexit>>////

void __cxa_atexit(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  __register_exitproc(2,param_1,param_2,param_3);
  return;
}


////>>0x00081d7c>>__libc_init_array>>////

/* WARNING: Removing unreachable block (ram,0x00081d88) */
/* WARNING: Removing unreachable block (ram,0x00081d8c) */
/* WARNING: Removing unreachable block (ram,0x00081db8) */

void __libc_init_array(void)

{
  int iVar1;
  code **ppcVar2;
  
  _init();
  ppcVar2 = (code **)0x85860;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    ppcVar2 = ppcVar2 + 1;
    (**ppcVar2)();
  } while (iVar1 != 4);
  return;
}


////>>0x00081dcc>>iprintf>>////

void iprintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  _vfiprintf_r(_impure_ptr,*(undefined4 *)(_impure_ptr + 8),param_1,&uStack_c);
  return;
}


////>>0x00081df4>>malloc>>////

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)_malloc_r(_impure_ptr,__size);
  return pvVar1;
}


////>>0x00081e04>>free>>////

void free(void *__ptr)

{
  _free_r(_impure_ptr,__ptr);
  return;
}


////>>0x00081e14>>_malloc_r>>////

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int * _malloc_r(undefined4 *param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  
  if (param_2 + 0xb < 0x17) {
    uVar13 = 0x10;
    if (0x10 < param_2) goto LAB_00081e7a;
  }
  else {
    uVar13 = param_2 + 0xb & 0xfffffff8;
    if (((int)uVar13 < 0) || (uVar13 < param_2)) {
LAB_00081e7a:
      *param_1 = 0xc;
      return (int *)0x0;
    }
  }
  __malloc_lock(param_1);
  puVar14 = DAT_20070474;
  if (uVar13 < 0x1f8) {
    puVar12 = *(undefined1 **)((int)&DAT_20070470 + uVar13);
    if ((puVar12 != &__malloc_av_ + uVar13) ||
       (puVar11 = puVar12 + 8, puVar12 = *(undefined1 **)(puVar12 + 0x14), puVar11 != puVar12)) {
      uVar8 = *(uint *)(puVar12 + 4);
      iVar5 = *(int *)(puVar12 + 0xc);
      uVar13 = *(uint *)(puVar12 + (uVar8 & 0xfffffffc) + 4);
      iVar2 = *(int *)(puVar12 + 8);
      *(int *)(iVar2 + 0xc) = iVar5;
      *(int *)(iVar5 + 8) = iVar2;
      *(uint *)(puVar12 + (uVar8 & 0xfffffffc) + 4) = uVar13 | 1;
      __malloc_unlock(param_1);
      return (int *)(puVar12 + 8);
    }
    uVar8 = (uVar13 >> 3) + 2;
  }
  else {
    uVar8 = uVar13 >> 9;
    if (uVar8 == 0) {
      iVar5 = 0x7e;
      iVar2 = 0x3f;
    }
    else if (uVar8 < 5) {
      iVar2 = (uVar13 >> 6) + 0x38;
      iVar5 = iVar2 * 2;
    }
    else if (uVar8 < 0x15) {
      iVar2 = uVar8 + 0x5b;
      iVar5 = iVar2 * 2;
    }
    else if (uVar8 < 0x55) {
      iVar2 = (uVar13 >> 0xc) + 0x6e;
      iVar5 = iVar2 * 2;
    }
    else if (uVar8 < 0x155) {
      iVar2 = (uVar13 >> 0xf) + 0x77;
      iVar5 = iVar2 * 2;
    }
    else if (uVar8 < 0x555) {
      iVar2 = (uVar13 >> 0x12) + 0x7c;
      iVar5 = iVar2 * 2;
    }
    else {
      iVar5 = 0xfc;
      iVar2 = 0x7e;
    }
    for (puVar12 = (undefined1 *)(&DAT_20070470)[iVar5]; &__malloc_av_ + iVar5 * 4 != puVar12;
        puVar12 = *(undefined1 **)(puVar12 + 0xc)) {
      uVar8 = *(uint *)(puVar12 + 4) & 0xfffffffc;
      if (0xf < (int)(uVar8 - uVar13)) {
        iVar2 = iVar2 + -1;
        break;
      }
      if (-1 < (int)(uVar8 - uVar13)) {
        uVar13 = *(uint *)(puVar12 + uVar8 + 4);
        iVar5 = *(int *)(puVar12 + 0xc);
        iVar2 = *(int *)(puVar12 + 8);
        *(int *)(iVar2 + 0xc) = iVar5;
        *(int *)(iVar5 + 8) = iVar2;
        *(uint *)(puVar12 + uVar8 + 4) = uVar13 | 1;
        __malloc_unlock(param_1);
        return (int *)(puVar12 + 8);
      }
    }
    uVar8 = iVar2 + 1;
  }
  uVar3 = DAT_20070468;
  if ((undefined1 **)DAT_20070474 != &DAT_2007046c) {
    uVar3 = DAT_20070474[1];
    uVar4 = uVar3 & 0xfffffffc;
    uVar6 = uVar4 - uVar13;
    if (0xf < (int)uVar6) {
      puVar15 = (undefined4 *)(uVar13 + (int)DAT_20070474);
      DAT_20070474[1] = uVar13 | 1;
      DAT_20070474 = puVar15;
      DAT_20070478 = puVar15;
      puVar15[3] = &DAT_2007046c;
      puVar15[2] = &DAT_2007046c;
      puVar15[1] = uVar6 | 1;
      *(uint *)((int)puVar15 + uVar6) = uVar6;
      __malloc_unlock(param_1);
      return puVar14 + 2;
    }
    DAT_20070478 = &DAT_2007046c;
    DAT_20070474 = &DAT_2007046c;
    if (-1 < (int)uVar6) {
      *(uint *)((int)puVar14 + uVar4 + 4) = *(uint *)((int)puVar14 + uVar4 + 4) | 1;
      __malloc_unlock(param_1);
      return puVar14 + 2;
    }
    if (uVar4 < 0x200) {
      uVar4 = uVar3 & 0xfffffff8;
      iVar2 = *(int *)((int)&DAT_2007046c + uVar4);
      uVar3 = 1 << ((int)(uVar3 >> 3) >> 2 & 0xffU) | DAT_20070468;
      puVar14[2] = iVar2;
      puVar14[3] = &__malloc_av_ + uVar4;
      DAT_20070468 = uVar3;
      *(undefined4 **)((int)&DAT_2007046c + uVar4) = puVar14;
      *(undefined4 **)(iVar2 + 0xc) = puVar14;
    }
    else {
      uVar6 = uVar3 >> 9;
      if (uVar6 < 5) {
        iVar5 = (uVar3 >> 6) + 0x38;
        iVar2 = iVar5 * 2;
      }
      else if (uVar6 < 0x15) {
        iVar5 = uVar6 + 0x5b;
        iVar2 = iVar5 * 2;
      }
      else if (uVar6 < 0x55) {
        iVar5 = (uVar3 >> 0xc) + 0x6e;
        iVar2 = iVar5 * 2;
      }
      else if (uVar6 < 0x155) {
        iVar5 = (uVar3 >> 0xf) + 0x77;
        iVar2 = iVar5 * 2;
      }
      else if (uVar6 < 0x555) {
        iVar5 = (uVar3 >> 0x12) + 0x7c;
        iVar2 = iVar5 * 2;
      }
      else {
        iVar2 = 0xfc;
        iVar5 = 0x7e;
      }
      puVar12 = (&DAT_2007046c)[iVar2];
      if (puVar12 == &__malloc_av_ + iVar2 * 4) {
        DAT_20070468 = DAT_20070468 | 1 << (iVar5 >> 2 & 0xffU);
        puVar11 = puVar12;
      }
      else {
        do {
          puVar11 = puVar12;
          if ((*(uint *)(puVar12 + 4) & 0xfffffffc) <= uVar4) break;
          puVar12 = *(undefined1 **)(puVar12 + 8);
          puVar11 = puVar12;
        } while (&__malloc_av_ + iVar2 * 4 != puVar12);
        puVar12 = *(undefined1 **)(puVar11 + 0xc);
      }
      uVar3 = DAT_20070468;
      puVar14[3] = puVar12;
      puVar14[2] = puVar11;
      *(undefined4 **)(puVar12 + 8) = puVar14;
      *(undefined4 **)(puVar11 + 0xc) = puVar14;
    }
  }
  puVar12 = DAT_2007046c;
  uVar4 = 1 << ((int)uVar8 >> 2 & 0xffU);
  if (uVar4 <= uVar3) {
    if ((uVar3 & uVar4) == 0) {
      uVar8 = uVar8 & 0xfffffffc;
      do {
        uVar4 = uVar4 << 1;
        uVar8 = uVar8 + 4;
      } while ((uVar3 & uVar4) == 0);
    }
    do {
      puVar15 = (undefined4 *)(&__malloc_av_ + uVar8 * 8);
      puVar14 = puVar15;
      uVar3 = uVar8;
      do {
        for (puVar9 = (undefined4 *)puVar14[3]; puVar14 != puVar9; puVar9 = (undefined4 *)puVar9[3])
        {
          uVar6 = puVar9[1] & 0xfffffffc;
          uVar7 = uVar6 - uVar13;
          if (0xf < (int)uVar7) {
            iVar5 = puVar9[2];
            iVar2 = puVar9[3];
            puVar14 = (undefined4 *)(uVar13 + (int)puVar9);
            puVar9[1] = uVar13 | 1;
            *(int *)(iVar5 + 0xc) = iVar2;
            *(int *)(iVar2 + 8) = iVar5;
            DAT_20070474 = puVar14;
            DAT_20070478 = puVar14;
            puVar14[3] = &DAT_2007046c;
            puVar14[2] = &DAT_2007046c;
            puVar14[1] = uVar7 | 1;
            *(uint *)((int)puVar14 + uVar7) = uVar7;
            __malloc_unlock(param_1);
            return puVar9 + 2;
          }
          if (-1 < (int)uVar7) {
            iVar2 = puVar9[2];
            iVar5 = puVar9[3];
            *(uint *)((int)puVar9 + uVar6 + 4) = *(uint *)((int)puVar9 + uVar6 + 4) | 1;
            *(int *)(iVar2 + 0xc) = iVar5;
            *(int *)(iVar5 + 8) = iVar2;
            __malloc_unlock(param_1);
            return puVar9 + 2;
          }
        }
        uVar3 = uVar3 + 1;
        puVar14 = puVar14 + 2;
      } while ((uVar3 & 3) != 0);
      do {
        uVar6 = uVar8 & 3;
        puVar14 = puVar15 + -2;
        uVar8 = uVar8 - 1;
        if (uVar6 == 0) {
          DAT_20070468 = DAT_20070468 & ~uVar4;
          break;
        }
        puVar15 = (undefined4 *)*puVar15;
      } while (puVar15 == puVar14);
      uVar4 = uVar4 * 2;
      if ((DAT_20070468 <= uVar4 && uVar4 - DAT_20070468 != 0) || (uVar8 = uVar3, uVar4 == 0))
      break;
      for (; (DAT_20070468 & uVar4) == 0; uVar4 = uVar4 << 1) {
        uVar8 = uVar8 + 4;
      }
    } while( true );
  }
  uVar8 = *(uint *)(DAT_2007046c + 4) & 0xfffffffc;
  if ((uVar13 <= uVar8) && (uVar3 = uVar8 - uVar13, puVar11 = DAT_2007046c, 0xf < (int)uVar3))
  goto LAB_0008211e;
  puVar16 = DAT_2007046c + uVar8;
  if (__malloc_sbrk_base == (undefined1 *)0xffffffff) {
    uVar3 = uVar13 + __malloc_top_pad + 0x10;
  }
  else {
    uVar3 = uVar13 + __malloc_top_pad + 0x100f & 0xfffff000;
  }
  puVar11 = (undefined1 *)_sbrk_r(param_1,uVar3);
  if ((puVar11 == (undefined1 *)0xffffffff) || ((puVar11 < puVar16 && (puVar12 != &__malloc_av_))))
  {
    uVar8 = *(uint *)(DAT_2007046c + 4) & 0xfffffffc;
    puVar11 = DAT_2007046c;
  }
  else {
    puVar10 = __malloc_current_mallinfo + uVar3;
    __malloc_current_mallinfo = puVar10;
    if ((puVar16 == puVar11) && (((uint)puVar16 & 0xfff) == 0)) {
      *(uint *)(DAT_2007046c + 4) = uVar3 + uVar8 | 1;
    }
    else {
      puVar1 = puVar11;
      if (__malloc_sbrk_base != (undefined1 *)0xffffffff) {
        puVar1 = __malloc_sbrk_base;
        __malloc_current_mallinfo = puVar10 + ((int)puVar11 - (int)puVar16);
      }
      __malloc_sbrk_base = puVar1;
      uVar4 = (uint)puVar11 & 7;
      if (uVar4 == 0) {
        iVar2 = 0x1000;
      }
      else {
        puVar11 = puVar11 + (8 - uVar4);
        iVar2 = 0x1008 - uVar4;
      }
      iVar2 = iVar2 - ((uint)(puVar11 + uVar3) & 0xfff);
      iVar5 = _sbrk_r(param_1,iVar2);
      if (iVar5 == -1) {
        uVar3 = 1;
        iVar2 = 0;
      }
      else {
        uVar3 = (iVar5 - (int)puVar11) + iVar2 | 1;
      }
      puVar10 = __malloc_current_mallinfo + iVar2;
      DAT_2007046c = puVar11;
      __malloc_current_mallinfo = puVar10;
      *(uint *)(puVar11 + 4) = uVar3;
      if (puVar12 != &__malloc_av_) {
        if (uVar8 < 0x10) {
          *(undefined4 *)(puVar11 + 4) = 1;
          uVar8 = 0;
          goto LAB_00082108;
        }
        uVar8 = uVar8 - 0xc & 0xfffffff8;
        *(uint *)(puVar12 + 4) = uVar8 | *(uint *)(puVar12 + 4) & 1;
        *(undefined4 *)(puVar12 + uVar8 + 4) = 5;
        *(undefined4 *)(puVar12 + uVar8 + 8) = 5;
        if (0xf < uVar8) {
          _free_r(param_1,puVar12 + 8);
          puVar10 = __malloc_current_mallinfo;
        }
      }
    }
    if (__malloc_max_sbrked_mem < puVar10) {
      __malloc_max_sbrked_mem = puVar10;
    }
    if (__malloc_max_total_mem < puVar10) {
      __malloc_max_total_mem = puVar10;
    }
    uVar8 = *(uint *)(DAT_2007046c + 4) & 0xfffffffc;
    puVar11 = DAT_2007046c;
  }
LAB_00082108:
  uVar3 = uVar8 - uVar13;
  if ((uVar8 < uVar13) || ((int)uVar3 < 0x10)) {
    __malloc_unlock(param_1);
    return (int *)0x0;
  }
LAB_0008211e:
  DAT_2007046c = puVar11 + uVar13;
  *(uint *)(puVar11 + 4) = uVar13 | 1;
  *(uint *)(DAT_2007046c + 4) = uVar3 | 1;
  __malloc_unlock(param_1);
  return (int *)(puVar11 + 8);
}


////>>0x0008234c>>memcpy>>////

void * memcpy(void *__dest,void *__src,size_t __n)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  puVar3 = (undefined4 *)__dest;
  if ((((uint)__src | (uint)__dest) & 3) != 0) {
    if (__n < 8) {
      uVar8 = __n - 4;
      puVar1 = (undefined *)__dest;
      if (3 < __n) {
        do {
          puVar6 = (undefined *)__src;
          puVar4 = puVar1;
          bVar9 = uVar8 != 0;
          uVar8 = uVar8 - 1;
          *puVar4 = *puVar6;
          puVar1 = puVar4 + 1;
          __src = puVar6 + 1;
        } while (bVar9);
        puVar4[1] = puVar6[1];
        puVar4[2] = puVar6[2];
        puVar4[3] = puVar6[3];
        return __dest;
      }
      goto LAB_000823d0;
    }
    if ((((uint)__src & 3) != 0) && (((uint)__dest & 3) != 0)) {
      uVar8 = 4 - ((uint)__dest & 3);
      __n = __n - uVar8;
      puVar2 = (undefined4 *)__dest;
      puVar5 = (undefined4 *)__src;
                    /* WARNING: Load size is inaccurate */
      if (((uint)__dest & 1) != 0) {
        puVar5 = (undefined4 *)((int)__src + 1);
        puVar2 = (undefined4 *)((int)__dest + 1);
        *(undefined *)__dest = *__src;
      }
      puVar3 = puVar2;
      __src = puVar5;
      if ((uVar8 & 2) != 0) {
        __src = (void *)((int)puVar5 + 2);
        puVar3 = (undefined4 *)((int)puVar2 + 2);
        *(undefined2 *)puVar2 = *(undefined2 *)puVar5;
      }
    }
  }
  while (0x3f < __n) {
                    /* WARNING: Load size is inaccurate */
    *puVar3 = *__src;
    puVar3[1] = *(undefined4 *)((int)__src + 4);
    puVar3[2] = *(undefined4 *)((int)__src + 8);
    puVar3[3] = *(undefined4 *)((int)__src + 0xc);
    puVar3[4] = *(undefined4 *)((int)__src + 0x10);
    puVar3[5] = *(undefined4 *)((int)__src + 0x14);
    puVar3[6] = *(undefined4 *)((int)__src + 0x18);
    puVar3[7] = *(undefined4 *)((int)__src + 0x1c);
    puVar3[8] = *(undefined4 *)((int)__src + 0x20);
    puVar3[9] = *(undefined4 *)((int)__src + 0x24);
    puVar3[10] = *(undefined4 *)((int)__src + 0x28);
    puVar3[0xb] = *(undefined4 *)((int)__src + 0x2c);
    puVar3[0xc] = *(undefined4 *)((int)__src + 0x30);
    puVar3[0xd] = *(undefined4 *)((int)__src + 0x34);
    puVar3[0xe] = *(undefined4 *)((int)__src + 0x38);
    puVar3[0xf] = *(undefined4 *)((int)__src + 0x3c);
    puVar3 = puVar3 + 0x10;
    __src = (undefined4 *)((int)__src + 0x40);
    __n = __n - 0x40;
  }
  uVar7 = __n - 0x10;
  if (0xffffffcf < __n - 0x40) {
    do {
                    /* WARNING: Load size is inaccurate */
      *puVar3 = *__src;
      puVar3[1] = *(undefined4 *)((int)__src + 4);
      puVar3[2] = *(undefined4 *)((int)__src + 8);
      puVar3[3] = *(undefined4 *)((int)__src + 0xc);
      puVar3 = puVar3 + 4;
      __src = (void *)((int)__src + 0x10);
      bVar9 = 0xf < uVar7;
      uVar7 = uVar7 - 0x10;
    } while (bVar9);
  }
  uVar8 = uVar7 + 0xc;
  puVar5 = puVar3;
  puVar2 = (undefined4 *)__src;
  if (0xfffffff3 < uVar7) {
    do {
      __src = puVar2 + 1;
      *puVar5 = *puVar2;
      bVar9 = 3 < uVar8;
      uVar8 = uVar8 - 4;
      puVar3 = puVar5 + 1;
      puVar5 = puVar5 + 1;
      puVar2 = (undefined4 *)__src;
    } while (bVar9);
  }
LAB_000823d0:
  if (uVar8 + 4 != 0) {
    puVar2 = puVar3;
    puVar5 = (undefined4 *)__src;
                    /* WARNING: Load size is inaccurate */
    if ((uVar8 & 1) != 0) {
      puVar5 = (undefined4 *)((int)__src + 1);
      puVar2 = (undefined4 *)((int)puVar3 + 1);
      *(undefined *)puVar3 = *__src;
    }
    if ((uVar8 + 4 & 2) != 0) {
      *(undefined2 *)puVar2 = *(undefined2 *)puVar5;
    }
  }
  return __dest;
}


////>>0x00082438>>memmove>>////

void * memmove(void *__dest,void *__src,size_t __n)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  
  if ((__src < __dest) && (puVar5 = (undefined *)((int)__src + __n), __dest < puVar5)) {
    puVar7 = (undefined *)((int)__dest + __n);
    iVar1 = __n - 1;
    if (__n != 0) {
      do {
        puVar5 = puVar5 + -1;
        iVar1 = iVar1 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar5;
      } while (iVar1 != -1);
    }
    return __dest;
  }
  puVar2 = (undefined4 *)__dest;
  if (__n < 0x10) {
    if (__n == 0) {
      return __dest;
    }
  }
  else if ((((uint)__dest | (uint)__src) & 3) == 0) {
    puVar3 = (undefined4 *)__src;
    do {
      puVar4 = puVar2 + 4;
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2[2] = puVar3[2];
      puVar2[3] = puVar3[3];
      puVar2 = puVar4;
      puVar3 = puVar3 + 4;
    } while (puVar4 != (undefined4 *)((int)__dest + (__n - 0x10 & 0xfffffff0) + 0x10));
    uVar8 = __n & 0xf;
    iVar1 = ((__n - 0x10 >> 4) + 1) * 0x10;
    __src = (void *)((int)__src + iVar1);
    puVar2 = (undefined4 *)(iVar1 + (int)__dest);
    uVar6 = uVar8;
    puVar3 = puVar2;
    puVar4 = (undefined4 *)__src;
    if (3 < uVar8) {
      do {
        uVar6 = uVar6 - 4;
        *puVar3 = *puVar4;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (3 < uVar6);
      iVar1 = (uVar8 - 4 & 0xfffffffc) + 4;
      puVar2 = (undefined4 *)((int)puVar2 + iVar1);
      __src = (void *)((int)__src + iVar1);
      uVar8 = __n & 3;
    }
    __n = uVar8;
    if (__n == 0) {
      return __dest;
    }
  }
  puVar3 = puVar2;
  do {
                    /* WARNING: Load size is inaccurate */
    puVar4 = (undefined4 *)((int)puVar3 + 1);
    *(undefined *)puVar3 = *__src;
    __src = (undefined4 *)((int)__src + 1);
    puVar3 = puVar4;
  } while (puVar4 != (undefined4 *)(__n + (int)puVar2));
  return __dest;
}


////>>0x00082504>>memset>>////

void * memset(void *__s,int __c,size_t __n)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar2 = (uint *)__s;
  if (((uint)__s & 3) != 0) {
    bVar6 = __n == 0;
    puVar1 = (uint *)__s;
    __n = __n - 1;
    if (bVar6) {
      return __s;
    }
    while( true ) {
      puVar2 = (uint *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)__c;
      if (((uint)puVar2 & 3) == 0) break;
      bVar6 = __n == 0;
      puVar1 = puVar2;
      __n = __n - 1;
      if (bVar6) {
        return __s;
      }
    }
  }
  if (3 < __n) {
    uVar4 = __c & 0xffU | (__c & 0xffU) << 8;
    uVar4 = uVar4 | uVar4 << 0x10;
    uVar5 = __n;
    puVar1 = puVar2;
    if (0xf < __n) {
      uVar5 = __n - 0x10;
      do {
        *puVar1 = uVar4;
        puVar1[1] = uVar4;
        puVar1[2] = uVar4;
        puVar1[3] = uVar4;
        puVar1 = puVar1 + 4;
      } while (puVar1 != (uint *)((int)puVar2 + (uVar5 & 0xfffffff0) + 0x10));
      __n = __n & 0xf;
      puVar2 = puVar2 + ((uVar5 >> 4) + 1) * 4;
      uVar5 = __n;
      puVar1 = puVar2;
      if (__n < 4) goto LAB_00082580;
    }
    do {
      __n = __n - 4;
      *puVar2 = uVar4;
      puVar2 = puVar2 + 1;
    } while (3 < __n);
    puVar2 = (uint *)((int)puVar1 + (uVar5 - 4 & 0xfffffffc) + 4);
    __n = uVar5 & 3;
  }
LAB_00082580:
  if (__n != 0) {
    puVar1 = puVar2;
    do {
      puVar3 = (uint *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)__c;
      puVar1 = puVar3;
    } while (puVar3 != (uint *)(__n + (int)puVar2));
  }
  return __s;
}


////>>0x00082598>>__malloc_lock>>////

void __malloc_lock(void)

{
  return;
}


////>>0x0008259c>>__malloc_unlock>>////

void __malloc_unlock(void)

{
  return;
}


////>>0x000825a0>>realloc>>////

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)_realloc_r(_impure_ptr,__ptr,__size);
  return pvVar1;
}


////>>0x000825b0>>_realloc_r>>////

int * _realloc_r(undefined4 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)_malloc_r(param_1,param_3);
    return piVar2;
  }
  __malloc_lock();
  uVar5 = param_2[-1];
  uVar8 = uVar5 & 0xfffffffc;
  piVar2 = param_2 + -2;
  if (param_3 + 0xb < 0x17) {
    uVar9 = 0x10;
  }
  else {
    uVar9 = param_3 + 0xb & 0xfffffff8;
    if ((int)uVar9 < 0) goto LAB_0008267c;
  }
  if (uVar9 < param_3) {
LAB_0008267c:
    *param_1 = 0xc;
    return (int *)0x0;
  }
  if ((int)uVar8 < (int)uVar9) {
    iVar1 = (int)piVar2 + uVar8;
    if (DAT_2007046c == iVar1) {
      uVar3 = *(uint *)(DAT_2007046c + 4) & 0xfffffffc;
      iVar1 = DAT_2007046c;
      if ((int)(uVar9 + 0x10) <= (int)(uVar3 + uVar8)) {
        DAT_2007046c = (int)piVar2 + uVar9;
        *(uint *)(DAT_2007046c + 4) = (uVar3 + uVar8) - uVar9 | 1;
        param_2[-1] = uVar9 | param_2[-1] & 1U;
        __malloc_unlock(param_1);
        return param_2;
      }
    }
    else if ((*(uint *)((*(uint *)(iVar1 + 4) & 0xfffffffe) + iVar1 + 4) & 1) == 0) {
      uVar3 = *(uint *)(iVar1 + 4) & 0xfffffffc;
      if ((int)uVar9 <= (int)(uVar3 + uVar8)) {
        iVar6 = *(int *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 8);
        *(int *)(iVar1 + 0xc) = iVar6;
        *(int *)(iVar6 + 8) = iVar1;
        uVar8 = uVar3 + uVar8;
        goto LAB_0008268c;
      }
    }
    else {
      uVar3 = 0;
      iVar1 = 0;
    }
    if (-1 < (int)(uVar5 << 0x1f)) {
      piVar10 = (int *)((int)piVar2 - param_2[-2]);
      uVar5 = (piVar10[1] & 0xfffffffcU) + uVar8;
      if (iVar1 != 0) {
        if (iVar1 == DAT_2007046c) {
          if ((int)(uVar9 + 0x10) <= (int)(uVar3 + uVar5)) {
            piVar2 = piVar10 + 2;
            iVar1 = *piVar2;
            iVar6 = piVar10[3];
            sVar4 = uVar8 - 4;
            *(int *)(iVar1 + 0xc) = iVar6;
            *(int *)(iVar6 + 8) = iVar1;
            if (sVar4 < 0x25) {
              piVar7 = piVar2;
              if (0x13 < sVar4) {
                piVar10[2] = *param_2;
                piVar10[3] = param_2[1];
                if (sVar4 < 0x1c) {
                  param_2 = param_2 + 2;
                  piVar7 = piVar10 + 4;
                }
                else {
                  piVar10[4] = param_2[2];
                  piVar10[5] = param_2[3];
                  if (sVar4 == 0x24) {
                    piVar10[6] = param_2[4];
                    piVar7 = param_2 + 5;
                    param_2 = param_2 + 6;
                    piVar10[7] = *piVar7;
                    piVar7 = piVar10 + 8;
                  }
                  else {
                    param_2 = param_2 + 4;
                    piVar7 = piVar10 + 6;
                  }
                }
              }
              *piVar7 = *param_2;
              piVar7[1] = param_2[1];
              piVar7[2] = param_2[2];
            }
            else {
              memmove(piVar2,param_2,sVar4);
            }
            DAT_2007046c = (int)piVar10 + uVar9;
            *(uint *)(DAT_2007046c + 4) = (uVar3 + uVar5) - uVar9 | 1;
            piVar10[1] = uVar9 | piVar10[1] & 1U;
            __malloc_unlock(param_1);
            return piVar2;
          }
        }
        else {
          uVar3 = uVar3 + uVar5;
          if ((int)uVar9 <= (int)uVar3) {
            iVar6 = *(int *)(iVar1 + 0xc);
            iVar1 = *(int *)(iVar1 + 8);
            *(int *)(iVar1 + 0xc) = iVar6;
            *(int *)(iVar6 + 8) = iVar1;
            piVar7 = piVar10 + 2;
            iVar1 = *piVar7;
            iVar6 = piVar10[3];
            sVar4 = uVar8 - 4;
            *(int *)(iVar1 + 0xc) = iVar6;
            *(int *)(iVar6 + 8) = iVar1;
            uVar8 = uVar3;
            if (sVar4 < 0x25) {
              piVar2 = piVar7;
              if (0x13 < sVar4) {
                piVar10[2] = *param_2;
                piVar10[3] = param_2[1];
                if (sVar4 < 0x1c) {
                  param_2 = param_2 + 2;
                  piVar2 = piVar10 + 4;
                }
                else {
                  piVar10[4] = param_2[2];
                  piVar10[5] = param_2[3];
                  if (sVar4 == 0x24) {
                    piVar10[6] = param_2[4];
                    piVar2 = param_2 + 5;
                    param_2 = param_2 + 6;
                    piVar10[7] = *piVar2;
                    piVar2 = piVar10 + 8;
                  }
                  else {
                    param_2 = param_2 + 4;
                    piVar2 = piVar10 + 6;
                  }
                }
              }
              *piVar2 = *param_2;
              piVar2[1] = param_2[1];
              piVar2[2] = param_2[2];
              uVar5 = piVar10[1];
              piVar2 = piVar10;
              param_2 = piVar7;
            }
            else {
              memmove(piVar7,param_2,sVar4);
              uVar5 = piVar10[1];
              piVar2 = piVar10;
              param_2 = piVar7;
            }
            goto LAB_0008268c;
          }
        }
      }
      if ((int)uVar9 <= (int)uVar5) {
        piVar7 = piVar10 + 2;
        iVar1 = *piVar7;
        iVar6 = piVar10[3];
        sVar4 = uVar8 - 4;
        *(int *)(iVar1 + 0xc) = iVar6;
        *(int *)(iVar6 + 8) = iVar1;
        uVar8 = uVar5;
        if (sVar4 < 0x25) {
          piVar2 = piVar7;
          if (0x13 < sVar4) {
            piVar10[2] = *param_2;
            piVar10[3] = param_2[1];
            if (sVar4 < 0x1c) {
              param_2 = param_2 + 2;
              piVar2 = piVar10 + 4;
            }
            else {
              piVar10[4] = param_2[2];
              piVar10[5] = param_2[3];
              if (sVar4 == 0x24) {
                piVar10[6] = param_2[4];
                piVar2 = param_2 + 5;
                param_2 = param_2 + 6;
                piVar10[7] = *piVar2;
                piVar2 = piVar10 + 8;
              }
              else {
                param_2 = param_2 + 4;
                piVar2 = piVar10 + 6;
              }
            }
          }
          *piVar2 = *param_2;
          piVar2[1] = param_2[1];
          piVar2[2] = param_2[2];
          uVar5 = piVar10[1];
          piVar2 = piVar10;
          param_2 = piVar7;
        }
        else {
          memmove(piVar7,param_2,sVar4);
          uVar5 = piVar10[1];
          piVar2 = piVar10;
          param_2 = piVar7;
        }
        goto LAB_0008268c;
      }
    }
    piVar10 = (int *)_malloc_r(param_1,param_3);
    if (piVar10 == (int *)0x0) goto LAB_000826a4;
    uVar5 = param_2[-1];
    if (piVar10 + -2 != (int *)((uVar5 & 0xfffffffe) + (int)piVar2)) {
      sVar4 = uVar8 - 4;
      if (sVar4 < 0x25) {
        piVar2 = param_2;
        piVar7 = piVar10;
        if (0x13 < sVar4) {
          *piVar10 = *param_2;
          piVar10[1] = param_2[1];
          if (sVar4 < 0x1c) {
            piVar2 = param_2 + 2;
            piVar7 = piVar10 + 2;
          }
          else {
            piVar10[2] = param_2[2];
            piVar10[3] = param_2[3];
            if (sVar4 == 0x24) {
              piVar10[4] = param_2[4];
              piVar10[5] = param_2[5];
              piVar2 = param_2 + 6;
              piVar7 = piVar10 + 6;
            }
            else {
              piVar2 = param_2 + 4;
              piVar7 = piVar10 + 4;
            }
          }
        }
        *piVar7 = *piVar2;
        piVar7[1] = piVar2[1];
        piVar7[2] = piVar2[2];
      }
      else {
        memmove(piVar10,param_2,sVar4);
      }
      _free_r(param_1,param_2);
      goto LAB_000826a4;
    }
    uVar8 = uVar8 + (piVar10[-1] & 0xfffffffcU);
  }
LAB_0008268c:
  uVar3 = uVar8 - uVar9;
  piVar10 = param_2;
  if (uVar3 < 0x10) {
    piVar2[1] = uVar5 & 1 | uVar8;
    *(uint *)((int)piVar2 + uVar8 + 4) = *(uint *)((int)piVar2 + uVar8 + 4) | 1;
  }
  else {
    piVar2[1] = uVar5 & 1 | uVar9;
    *(uint *)((int)piVar2 + uVar9 + 4) = uVar3 | 1;
    *(uint *)((int)piVar2 + uVar3 + uVar9 + 4) = *(uint *)((int)piVar2 + uVar3 + uVar9 + 4) | 1;
    _free_r(param_1,(int)piVar2 + uVar9 + 8);
  }
LAB_000826a4:
  __malloc_unlock(param_1);
  return piVar10;
}


////>>0x00082970>>_sbrk_r>>////

void _sbrk_r(int *param_1,intptr_t param_2)

{
  void *pvVar1;
  
  errno = 0;
  pvVar1 = _sbrk(param_2);
  if ((pvVar1 == (void *)0xffffffff) && (errno != 0)) {
    *param_1 = errno;
    return;
  }
  return;
}


////>>0x00082994>>strcpy>>////

char * strcpy(char *__dest,char *__src)

{
  char cVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  bool bVar10;
  
  pcVar9 = __dest;
  if ((((uint)__dest ^ (uint)__src) & 3) != 0) {
    do {
      cVar1 = *__src;
      *pcVar9 = cVar1;
      __src = __src + 1;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    return __dest;
  }
  puVar8 = (uint *)__dest;
  if (((uint)__src & 3) != 0) {
    puVar4 = (uint *)__src;
    if (((uint)__src & 1) != 0) {
      puVar4 = (uint *)(__src + 1);
      cVar1 = *__src;
      puVar8 = (uint *)(__dest + 1);
      *__dest = cVar1;
      if (cVar1 == '\0') {
        return __dest;
      }
    }
    __src = (char *)puVar4;
    if (((uint)puVar4 & 2) != 0) {
      __src = (char *)((int)puVar4 + 2);
      uVar2 = *(ushort *)puVar4;
      bVar10 = (uVar2 & 0xff) == 0;
      if (bVar10) {
        *(char *)puVar8 = (char)uVar2;
      }
      else {
        *(ushort *)puVar8 = uVar2;
        bVar10 = (uVar2 & 0xff00) == 0;
        puVar8 = (uint *)((int)puVar8 + 2);
      }
      if (bVar10) {
        return __dest;
      }
    }
  }
  uVar5 = *(uint *)__src;
  puVar4 = (uint *)((int)__src + 4);
  puVar7 = puVar8;
  if (((uint)__src & 4) != 0) {
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) goto LAB_000829f8;
    puVar7 = puVar8 + 1;
    *puVar8 = uVar5;
    puVar4 = (uint *)((int)__src + 8);
    uVar5 = *(uint *)((int)__src + 4);
  }
  while( true ) {
    puVar3 = puVar4 + 1;
    uVar6 = *puVar4;
    puVar8 = puVar7;
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) break;
    puVar8 = puVar7 + 1;
    *puVar7 = uVar5;
    uVar5 = uVar6;
    if ((uVar6 + 0xfefefeff & ~uVar6 & 0x80808080) != 0) break;
    puVar4 = puVar4 + 2;
    uVar5 = *puVar3;
    puVar7 = puVar7 + 2;
    *puVar8 = uVar6;
  }
LAB_000829f8:
  do {
    *(char *)puVar8 = (char)uVar5;
    uVar6 = uVar5 & 0xff;
    uVar5 = uVar5 >> 8 | uVar5 << 0x18;
    puVar8 = (uint *)((int)puVar8 + 1);
  } while (uVar6 != 0);
  return __dest;
}


////>>0x00082a50>>strlen>>////

size_t strlen(char *__s)

{
  size_t sVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = (uint *)((uint)__s & 0xfffffffc);
  sVar1 = -((uint)__s & 3);
  uVar3 = *puVar2;
  if (((uint)__s & 3) != 0) {
    uVar3 = uVar3 | 0xffffffffU >> ((sVar1 + 4 & 0x1f) << 3);
  }
  while (puVar2 = puVar2 + 1, (uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0) {
    sVar1 = sVar1 + 4;
    uVar3 = *puVar2;
  }
  bVar4 = (uVar3 & 0xff) == 0;
  if (!bVar4) {
    sVar1 = sVar1 + 1;
    bVar4 = (uVar3 & 0xff00) == 0;
  }
  if (!bVar4) {
    sVar1 = sVar1 + 1;
    bVar4 = (uVar3 & 0xff0000) == 0;
  }
  if (!bVar4) {
    sVar1 = sVar1 + 1;
  }
  return sVar1;
}


////>>0x00082ab0>>kill>>////

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = _kill_r(_impure_ptr,__pid,__sig);
  return iVar1;
}


////>>0x00082ac0>>__sprint_r.part.0>>////

int __sprint_r_part_0(undefined4 param_1,int param_2,int **param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (-1 < *(int *)(param_2 + 100) << 0x12) {
    iVar2 = __sfvwrite_r();
    param_3[2] = (int *)0x0;
    param_3[1] = (int *)0x0;
    return iVar2;
  }
  piVar3 = param_3[2];
  piVar1 = *param_3;
  while (piVar3 != (int *)0x0) {
    uVar6 = piVar1[1];
    uVar7 = uVar6 >> 2;
    if (uVar7 != 0) {
      puVar5 = (undefined4 *)(*piVar1 + -4);
      uVar4 = 0;
      do {
        puVar5 = puVar5 + 1;
        iVar2 = _fputwc_r(param_1,*puVar5,param_2);
        uVar4 = uVar4 + 1;
        if (iVar2 == -1) goto LAB_00082b00;
      } while (uVar7 != uVar4);
      piVar3 = param_3[2];
    }
    piVar3 = (int *)((int)piVar3 - (uVar6 & 0xfffffffc));
    param_3[2] = piVar3;
    piVar1 = piVar1 + 2;
  }
  iVar2 = 0;
LAB_00082b00:
  param_3[2] = (int *)0x0;
  param_3[1] = (int *)0x0;
  return iVar2;
}


////>>0x00082b38>>_vfiprintf_r>>////

/* WARNING: Type propagation algorithm not settling */

int _vfiprintf_r(int param_1,int param_2,int *******param_3,int **param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  int ********ppppppppiVar7;
  int *piVar8;
  int iVar9;
  char cVar10;
  int *******pppppppiVar11;
  uint uVar12;
  int **ppiVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int ********ppppppppiVar17;
  int iVar18;
  int *******pppppppiVar19;
  int *piVar20;
  int *******pppppppiVar21;
  uint uVar22;
  int *piVar23;
  int *******pppppppiVar24;
  undefined4 uVar25;
  int ********__s;
  bool bVar26;
  longlong lVar27;
  int *******local_dc;
  int *******local_d4;
  int **local_c8;
  int local_c4;
  char *local_c0;
  char local_a1;
  undefined local_a0;
  undefined local_9f;
  int ********local_9c;
  int local_98;
  int *******local_94;
  undefined local_90;
  char cStack_6a;
  undefined local_69;
  undefined local_68 [4];
  int *******local_64 [16];
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    __sinit();
  }
  uVar14 = (uint)*(ushort *)(param_2 + 0xc);
  if (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x12)) {
    uVar14 = uVar14 | 0x2000;
    *(short *)(param_2 + 0xc) = (short)uVar14;
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xffffdfff;
  }
  if (((int)(uVar14 << 0x1c) < 0) && (*(int *)(param_2 + 0x10) != 0)) {
    if ((uVar14 & 0x1a) != 10) goto LAB_00082b8a;
  }
  else {
    iVar9 = __swsetup_r(param_1,param_2);
    if (iVar9 != 0) {
      return -1;
    }
    if ((*(ushort *)(param_2 + 0xc) & 0x1a) != 10) goto LAB_00082b8a;
  }
  if (-1 < *(short *)(param_2 + 0xe)) {
    iVar9 = __sbprintf(param_1,param_2,param_3,param_4);
    return iVar9;
  }
LAB_00082b8a:
  local_c0 = (char *)0x0;
  local_94 = (int *******)0x0;
  local_98 = 0;
  local_c4 = 0;
  ppppppppiVar7 = (int ********)local_68;
  local_c8 = param_4;
  local_9c = (int ********)local_68;
LAB_00082b9e:
  pppppppiVar11 = param_3;
  if ((*(char *)param_3 != '\0') && (*(char *)param_3 != '%')) {
    do {
      pppppppiVar11 = (int *******)((int)pppppppiVar11 + 1);
      if (*(char *)pppppppiVar11 == '\0') break;
    } while (*(char *)pppppppiVar11 != '%');
    pppppppiVar21 = (int *******)((int)pppppppiVar11 - (int)param_3);
    if (pppppppiVar21 != (int *******)0x0) {
      local_98 = local_98 + 1;
      local_94 = (int *******)((int)local_94 + (int)pppppppiVar21);
      *ppppppppiVar7 = param_3;
      ppppppppiVar7[1] = pppppppiVar21;
      if (local_98 < 8) {
        ppppppppiVar7 = ppppppppiVar7 + 2;
      }
      else {
        if (local_94 == (int *******)0x0) {
          local_c4 = local_c4 + (int)pppppppiVar21;
          local_98 = 0;
          ppppppppiVar7 = (int ********)local_68;
          goto LAB_00082bee;
        }
        iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
        ppppppppiVar7 = (int ********)local_68;
        if (iVar9 != 0) goto LAB_000833de;
      }
      local_c4 = local_c4 + (int)pppppppiVar21;
    }
  }
LAB_00082bee:
  if (*(char *)pppppppiVar11 != '\0') {
    local_a1 = '\0';
    uVar15 = (uint)*(byte *)((int)pppppppiVar11 + 1);
    uVar14 = 0;
    bVar5 = false;
    bVar2 = false;
    bVar1 = false;
    bVar3 = false;
    bVar26 = false;
    pppppppiVar21 = (int *******)0x0;
    local_d4 = (int *******)0xffffffff;
    param_3 = (int *******)((int)pppppppiVar11 + 1);
LAB_00082c12:
    param_3 = (int *******)((int)param_3 + 1);
LAB_00082c16:
    switch(uVar15) {
    case 0x20:
      goto switchD_00082c20_caseD_20;
    default:
      if (uVar15 != 0) {
        local_dc = (int *******)0x1;
        local_d4 = (int *******)0x1;
        __s = (int ********)&local_90;
        local_90 = (char)uVar15;
        goto LAB_00083012;
      }
      goto LAB_000833d0;
    case 0x23:
      bVar3 = true;
      uVar15 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x2a:
      pppppppiVar21 = (int *******)*local_c8;
      local_c8 = local_c8 + 1;
      if ((int)pppppppiVar21 < 0) {
        pppppppiVar21 = (int *******)-(int)pppppppiVar21;
        goto switchD_00082c20_caseD_2d;
      }
      uVar15 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x2b:
      uVar15 = (uint)*(byte *)param_3;
      local_a1 = '+';
      goto LAB_00082c12;
    case 0x2d:
switchD_00082c20_caseD_2d:
      uVar14 = uVar14 | 4;
      uVar15 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x2e:
      uVar15 = (uint)*(byte *)param_3;
      pppppppiVar11 = (int *******)((int)param_3 + 1);
      if (uVar15 == 0x2a) {
        uVar15 = (uint)*(byte *)((int)param_3 + 1);
        local_d4 = (int *******)*local_c8;
        local_c8 = local_c8 + 1;
        param_3 = pppppppiVar11;
        if ((int)local_d4 < 0) {
          local_d4 = (int *******)0xffffffff;
        }
        goto LAB_00082c12;
      }
      uVar12 = uVar15 - 0x30;
      if (uVar12 < 10) {
        uVar22 = 0;
        do {
          param_3 = (int *******)((int)pppppppiVar11 + 1);
          uVar15 = (uint)*(byte *)pppppppiVar11;
          uVar22 = uVar12 + uVar22 * 10;
          uVar12 = uVar15 - 0x30;
          pppppppiVar11 = param_3;
        } while (uVar12 < 10);
        local_d4 = (int *******)(uVar22 | (int)uVar22 >> 0x1f);
      }
      else {
        local_d4 = (int *******)0x0;
        param_3 = pppppppiVar11;
      }
      goto LAB_00082c16;
    case 0x30:
      uVar14 = uVar14 | 0x80;
      uVar15 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_00082c20_caseD_31;
    case 0x44:
      bVar2 = true;
      if (bVar1 == false) goto LAB_00083028;
LAB_00082e98:
      local_c8 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      piVar20 = *local_c8;
      piVar23 = local_c8[1];
      local_c8 = local_c8 + 2;
      goto LAB_00082eac;
    case 0x4f:
      bVar2 = true;
      if (bVar1 != false) goto LAB_00082d42;
LAB_00082f2a:
      iVar9 = (uint)bVar2 << 4;
      iVar16 = (uint)bVar1 << 5;
      if ((bVar2 == 0) && (iVar16 = (uint)bVar26 << 6, bVar26 != 0)) {
        piVar20 = (int *)(uint)*(ushort *)local_c8;
        local_c8 = local_c8 + 1;
        piVar23 = (int *)0x0;
      }
      else {
        iVar9 = iVar16;
        piVar20 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar23 = (int *)0x0;
      }
      break;
    case 0x55:
      bVar2 = true;
      if (bVar1 != false) goto LAB_00082e62;
LAB_00082f7c:
      if ((bVar2) || (bVar26 == false)) {
        iVar9 = 1;
        piVar20 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar23 = (int *)0x0;
      }
      else {
        piVar23 = (int *)0x0;
        piVar20 = (int *)(uint)*(ushort *)local_c8;
        local_c8 = local_c8 + 1;
        iVar9 = 1;
      }
      break;
    case 0x58:
      local_c0 = "0123456789ABCDEF";
      if (bVar1 == false) goto LAB_00083196;
LAB_00082fb6:
      ppiVar13 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar13 + 2;
      piVar20 = *ppiVar13;
      piVar23 = ppiVar13[1];
      goto LAB_00082fca;
    case 99:
      piVar20 = *local_c8;
      local_c8 = local_c8 + 1;
      local_dc = (int *******)0x1;
      local_90 = SUB41(piVar20,0);
      local_d4 = (int *******)0x1;
      __s = (int ********)&local_90;
      goto LAB_00083012;
    case 100:
    case 0x69:
      if (bVar1 != false) goto LAB_00082e98;
LAB_00083028:
      if ((bVar2 == false) && (bVar26 != false)) {
        piVar20 = (int *)(int)*(short *)local_c8;
        local_c8 = local_c8 + 1;
        piVar23 = (int *)((int)piVar20 >> 0x1f);
      }
      else {
        piVar20 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar23 = (int *)((int)piVar20 >> 0x1f);
      }
LAB_00082eac:
      if ((int)piVar23 < 0) {
        bVar26 = piVar20 != (int *)0x0;
        piVar20 = (int *)-(int)piVar20;
        piVar23 = (int *)(-(int)piVar23 - (uint)bVar26);
        local_a1 = '-';
        cVar4 = '-';
        iVar9 = 1;
        goto LAB_00082d6a;
      }
      if (-1 < (int)local_d4) {
        uVar14 = uVar14 & 0xffffff7f;
      }
      bVar5 = false;
      uVar15 = (uint)piVar20 | (uint)piVar23;
      iVar9 = 1;
      cVar4 = local_a1;
      goto joined_r0x00082d78;
    case 0x68:
      bVar26 = true;
      uVar15 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x6c:
      uVar15 = (uint)*(byte *)param_3;
      if (uVar15 == 0x6c) {
        bVar1 = true;
        uVar15 = (uint)*(byte *)((int)param_3 + 1);
        param_3 = (int *******)((int)param_3 + 1);
      }
      else {
        bVar2 = true;
      }
      goto LAB_00082c12;
    case 0x6e:
      if (bVar1 == false) {
        if (bVar2 == false) {
          if (bVar26) {
            piVar20 = *local_c8;
            local_c8 = local_c8 + 1;
            *(short *)piVar20 = (short)local_c4;
          }
          else {
            piVar20 = *local_c8;
            local_c8 = local_c8 + 1;
            *piVar20 = local_c4;
          }
        }
        else {
          piVar20 = *local_c8;
          local_c8 = local_c8 + 1;
          *piVar20 = local_c4;
        }
      }
      else {
        piVar20 = *local_c8;
        local_c8 = local_c8 + 1;
        *piVar20 = local_c4;
        piVar20[1] = local_c4 >> 0x1f;
      }
      goto LAB_00082b9e;
    case 0x6f:
      if (bVar1 == false) goto LAB_00082f2a;
LAB_00082d42:
      ppiVar13 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar13 + 2;
      piVar20 = *ppiVar13;
      piVar23 = ppiVar13[1];
      iVar9 = 0;
      break;
    case 0x70:
      piVar20 = *local_c8;
      local_c8 = local_c8 + 1;
      local_9f = 0x78;
      bVar5 = true;
      piVar23 = (int *)0x0;
      local_a0 = 0x30;
      local_c0 = "0123456789abcdef";
      iVar9 = 2;
      break;
    case 0x71:
      bVar1 = true;
      uVar15 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x73:
      __s = (int ********)*local_c8;
      local_a1 = '\0';
      local_c8 = local_c8 + 1;
      if (__s != (int ********)0x0) {
        if ((int)local_d4 < 0) {
          local_d4 = (int *******)strlen((char *)__s);
          pppppppiVar11 = (int *******)0x0;
          cVar4 = local_a1;
        }
        else {
          pvVar6 = memchr(__s,0,(size_t)local_d4);
          cVar4 = local_a1;
          if (pvVar6 == (void *)0x0) {
            pppppppiVar11 = (int *******)0x0;
          }
          else {
            pppppppiVar19 = (int *******)((int)pvVar6 - (int)__s);
            if ((int)local_d4 <= (int)(int *******)((int)pvVar6 - (int)__s)) {
              pppppppiVar19 = local_d4;
            }
            pppppppiVar11 = (int *******)0x0;
            local_d4 = pppppppiVar19;
          }
        }
        goto LAB_00082da0;
      }
      if ((int *******)0x5 < local_d4) {
        local_d4 = (int *******)0x6;
      }
      local_dc = (int *******)((uint)local_d4 & ~((int)local_d4 >> 0x1f));
      __s = (int ********)&UNK_00085840;
LAB_00083012:
      local_a1 = '\0';
      pppppppiVar11 = (int *******)0x0;
      goto LAB_00082dba;
    case 0x75:
      if (!bVar1) goto LAB_00082f7c;
LAB_00082e62:
      ppiVar13 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar13 + 2;
      piVar20 = *ppiVar13;
      piVar23 = ppiVar13[1];
      iVar9 = 1;
      break;
    case 0x78:
      local_c0 = "0123456789abcdef";
      if (bVar1 != false) goto LAB_00082fb6;
LAB_00083196:
      if ((bVar2 == false) && (bVar26 != false)) {
        piVar23 = (int *)0x0;
        piVar20 = (int *)(uint)*(ushort *)local_c8;
        local_c8 = local_c8 + 1;
      }
      else {
        piVar20 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar23 = (int *)0x0;
      }
LAB_00082fca:
      if ((bVar3) && (((uint)piVar20 | (uint)piVar23) != 0)) {
        bVar5 = true;
        local_a0 = 0x30;
        iVar9 = 2;
        local_9f = (char)uVar15;
      }
      else {
        iVar9 = 2;
      }
    }
    local_a1 = '\0';
    cVar4 = '\0';
LAB_00082d6a:
    if (-1 < (int)local_d4) {
      uVar14 = uVar14 & 0xffffff7f;
    }
    uVar15 = (uint)piVar20 | (uint)piVar23;
joined_r0x00082d78:
    lVar27 = CONCAT44(piVar23,piVar20);
    pppppppiVar11 = local_d4;
    if ((uVar15 == 0) && (local_d4 == (int *******)0x0)) {
      __s = (int ********)local_68;
      if ((iVar9 != 0) || (!bVar3)) goto LAB_00082da0;
      __s = (int ********)(&cStack_6a + 1);
      local_69 = '0';
      goto LAB_00082d9a;
    }
    if (iVar9 == 1) {
      if (piVar23 != (int *)0x0 || (int *)0x9 < piVar20) {
        ppppppppiVar17 = (int ********)(&cStack_6a + 1);
        do {
          __s = ppppppppiVar17;
          uVar25 = (undefined4)((ulonglong)lVar27 >> 0x20);
          cVar10 = '\n';
          __aeabi_uldivmod((int)lVar27,uVar25,10,0);
          *(char *)__s = cVar10 + '0';
          lVar27 = __aeabi_uldivmod((int)lVar27,uVar25,10,0);
          ppppppppiVar17 = (int ********)((int)__s + -1);
        } while (lVar27 != 0);
        local_d4 = (int *******)((int)local_68 - (int)__s);
        goto LAB_00082da0;
      }
      local_69 = (char)piVar20 + '0';
      __s = (int ********)(&cStack_6a + 1);
      goto LAB_0008351e;
    }
    ppppppppiVar17 = (int ********)(&cStack_6a + 1);
    if (iVar9 != 2) goto LAB_0008337e;
    do {
      __s = ppppppppiVar17;
      uVar15 = (uint)piVar20 & 0xf;
      piVar20 = (int *)((uint)piVar20 >> 4 | (int)piVar23 << 0x1c);
      piVar23 = (int *)((uint)piVar23 >> 4);
      *(char *)__s = local_c0[uVar15];
      ppppppppiVar17 = (int ********)((int)__s + -1);
    } while (((uint)piVar20 | (uint)piVar23) != 0);
    local_d4 = (int *******)((int)local_68 - (int)__s);
    goto LAB_00082da0;
  }
LAB_000833d0:
  if (local_94 != (int *******)0x0) {
    __sprint_r_part_0(param_1,param_2,&local_9c);
  }
LAB_000833de:
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x19) < 0) {
    return -1;
  }
  return local_c4;
LAB_0008337e:
  do {
    __s = ppppppppiVar17;
    piVar8 = (int *)((uint)piVar20 >> 3 | (int)piVar23 << 0x1d);
    piVar23 = (int *)((uint)piVar23 >> 3);
    iVar9 = ((uint)piVar20 & 7) + 0x30;
    *(char *)__s = (char)iVar9;
    ppppppppiVar17 = (int ********)((int)__s + -1);
    piVar20 = piVar8;
  } while (((uint)piVar8 | (uint)piVar23) != 0);
  if (bVar3) {
    if (iVar9 == 0x30) {
LAB_00082d9a:
      local_d4 = (int *******)((int)local_68 - (int)__s);
    }
    else {
      *(undefined *)((int)__s + -1) = 0x30;
      __s = ppppppppiVar17;
      local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar17);
    }
  }
  else {
LAB_0008351e:
    local_d4 = (int *******)((int)local_68 - (int)__s);
  }
LAB_00082da0:
  local_dc = local_d4;
  if ((int)local_d4 < (int)pppppppiVar11) {
    local_dc = pppppppiVar11;
  }
  if (cVar4 != '\0') {
    local_dc = (int *******)((int)local_dc + 1);
  }
LAB_00082dba:
  if (bVar5) {
    local_dc = (int *******)((int)local_dc + 2);
  }
  if ((uVar14 == 0) &&
     (pppppppiVar19 = (int *******)((int)pppppppiVar21 - (int)local_dc), 0 < (int)pppppppiVar19)) {
    if ((int)pppppppiVar19 < 0x11) {
      local_98 = local_98 + 1;
    }
    else {
      do {
        pppppppiVar24 = pppppppiVar19;
        iVar9 = local_98 + 1;
        local_94 = local_94 + 4;
        *ppppppppiVar7 = (int *******)0x85808;
        ppppppppiVar7[1] = (int *******)0x10;
        if (iVar9 < 8) {
          iVar16 = local_98 + 2;
          ppppppppiVar7 = ppppppppiVar7 + 2;
          local_98 = iVar9;
        }
        else if (local_94 == (int *******)0x0) {
          iVar16 = 1;
          ppppppppiVar7 = (int ********)local_68;
          local_98 = 0;
        }
        else {
          local_98 = iVar9;
          iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
          if (iVar9 != 0) goto LAB_000833de;
          iVar16 = local_98 + 1;
          ppppppppiVar7 = (int ********)local_68;
        }
        pppppppiVar19 = pppppppiVar24 + -4;
      } while (0x10 < (int)pppppppiVar19);
      pppppppiVar19 = pppppppiVar24 + -4;
      local_98 = iVar16;
    }
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar19);
    *ppppppppiVar7 = (int *******)0x85808;
    ppppppppiVar7[1] = pppppppiVar19;
    if (local_98 < 8) {
      iVar9 = local_98 + 1;
      ppppppppiVar7 = ppppppppiVar7 + 2;
    }
    else if (local_94 == (int *******)0x0) {
      iVar9 = 1;
      local_98 = 0;
      ppppppppiVar7 = (int ********)local_68;
    }
    else {
      iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
      if (iVar9 != 0) goto LAB_000833de;
      iVar9 = local_98 + 1;
      ppppppppiVar7 = (int ********)local_68;
    }
  }
  else {
    iVar9 = local_98 + 1;
  }
  iVar16 = iVar9;
  if (local_a1 != '\0') {
    local_94 = (int *******)((int)local_94 + 1);
    iVar16 = 1;
    *ppppppppiVar7 = (int *******)&local_a1;
    ppppppppiVar7[1] = (int *******)0x1;
    local_98 = iVar9;
    if (iVar9 < 8) {
      iVar16 = iVar9 + 1;
      ppppppppiVar7 = ppppppppiVar7 + 2;
    }
    else if (local_94 == (int *******)0x0) {
      local_98 = 0;
      ppppppppiVar7 = (int ********)local_68;
    }
    else {
      iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
      if (iVar9 != 0) goto LAB_000833de;
      iVar16 = local_98 + 1;
      ppppppppiVar7 = (int ********)local_68;
    }
  }
  iVar9 = iVar16;
  iVar18 = local_98;
  if (bVar5) {
    local_94 = (int *******)((int)local_94 + 2);
    *ppppppppiVar7 = (int *******)&local_a0;
    ppppppppiVar7[1] = (int *******)0x2;
    if (iVar16 < 8) {
      iVar9 = iVar16 + 1;
      iVar18 = iVar16;
      ppppppppiVar7 = ppppppppiVar7 + 2;
    }
    else if (local_94 == (int *******)0x0) {
      iVar9 = 1;
      iVar18 = 0;
      ppppppppiVar7 = (int ********)local_68;
    }
    else {
      local_98 = iVar16;
      iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
      if (iVar9 != 0) goto LAB_000833de;
      iVar9 = local_98 + 1;
      iVar18 = local_98;
      ppppppppiVar7 = (int ********)local_68;
    }
  }
  local_98 = iVar18;
  if ((uVar14 == 0x80) &&
     (pppppppiVar19 = (int *******)((int)pppppppiVar21 - (int)local_dc), 0 < (int)pppppppiVar19)) {
    if (0x10 < (int)pppppppiVar19) {
      do {
        while( true ) {
          pppppppiVar24 = pppppppiVar19;
          local_98 = iVar18 + 1;
          local_94 = local_94 + 4;
          *ppppppppiVar7 = (int *******)&zeroes_6718;
          ppppppppiVar7[1] = (int *******)0x10;
          if (7 < local_98) break;
          iVar9 = iVar18 + 2;
          ppppppppiVar7 = ppppppppiVar7 + 2;
LAB_0008348e:
          iVar18 = local_98;
          pppppppiVar19 = pppppppiVar24 + -4;
          if ((int)(pppppppiVar24 + -4) < 0x11) goto LAB_000834b4;
        }
        if (local_94 != (int *******)0x0) {
          iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
          if (iVar9 == 0) {
            iVar9 = local_98 + 1;
            ppppppppiVar7 = (int ********)local_68;
            goto LAB_0008348e;
          }
          goto LAB_000833de;
        }
        iVar9 = 1;
        iVar18 = 0;
        pppppppiVar19 = pppppppiVar24 + -4;
        ppppppppiVar7 = (int ********)local_68;
      } while (0x10 < (int)(pppppppiVar24 + -4));
LAB_000834b4:
      pppppppiVar19 = pppppppiVar24 + -4;
    }
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar19);
    *ppppppppiVar7 = (int *******)&zeroes_6718;
    ppppppppiVar7[1] = pppppppiVar19;
    local_98 = iVar9;
    if (iVar9 < 8) {
      iVar9 = iVar9 + 1;
      ppppppppiVar7 = ppppppppiVar7 + 2;
    }
    else if (local_94 == (int *******)0x0) {
      iVar9 = 1;
      local_98 = 0;
      ppppppppiVar7 = (int ********)local_68;
    }
    else {
      iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
      if (iVar9 != 0) goto LAB_000833de;
      iVar9 = local_98 + 1;
      ppppppppiVar7 = (int ********)local_68;
    }
  }
  pppppppiVar11 = (int *******)((int)pppppppiVar11 - (int)local_d4);
  ppppppppiVar17 = (int ********)local_68;
  if ((int)pppppppiVar11 < 1) {
LAB_000832c6:
    local_94 = (int *******)((int)local_94 + (int)local_d4);
    *ppppppppiVar7 = (int *******)__s;
    ppppppppiVar7[1] = local_d4;
    local_d4 = local_94;
    local_98 = iVar9;
    if (iVar9 < 8) goto LAB_0008345a;
    if (local_94 == (int *******)0x0) {
      local_98 = 0;
    }
    else {
      iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
      if (iVar9 != 0) goto LAB_000833de;
    }
  }
  else {
    iVar16 = local_98;
    if (0x10 < (int)pppppppiVar11) {
      do {
        while( true ) {
          pppppppiVar19 = pppppppiVar11;
          local_98 = iVar16 + 1;
          local_94 = local_94 + 4;
          *ppppppppiVar7 = (int *******)&zeroes_6718;
          ppppppppiVar7[1] = (int *******)0x10;
          if (7 < local_98) break;
          iVar9 = iVar16 + 2;
          ppppppppiVar7 = ppppppppiVar7 + 2;
LAB_00083282:
          iVar16 = local_98;
          pppppppiVar11 = pppppppiVar19 + -4;
          if ((int)(pppppppiVar19 + -4) < 0x11) goto LAB_000832aa;
        }
        if (local_94 != (int *******)0x0) {
          iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
          if (iVar9 == 0) {
            iVar9 = local_98 + 1;
            ppppppppiVar7 = (int ********)local_68;
            goto LAB_00083282;
          }
          goto LAB_000833de;
        }
        iVar9 = 1;
        ppppppppiVar7 = (int ********)local_68;
        iVar16 = 0;
        pppppppiVar11 = pppppppiVar19 + -4;
      } while (0x10 < (int)(pppppppiVar19 + -4));
LAB_000832aa:
      pppppppiVar11 = pppppppiVar19 + -4;
    }
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar11);
    *ppppppppiVar7 = (int *******)&zeroes_6718;
    ppppppppiVar7[1] = pppppppiVar11;
    if (iVar9 < 8) {
      iVar9 = iVar9 + 1;
      ppppppppiVar7 = ppppppppiVar7 + 2;
      goto LAB_000832c6;
    }
    if (local_94 != (int *******)0x0) {
      local_98 = iVar9;
      iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
      if (iVar9 != 0) goto LAB_000833de;
      iVar9 = local_98 + 1;
      ppppppppiVar7 = (int ********)local_68;
      goto LAB_000832c6;
    }
    local_64[0] = local_d4;
    local_98 = 1;
    ppppppppiVar7 = (int ********)local_68;
    local_68 = (undefined  [4])__s;
LAB_0008345a:
    ppppppppiVar17 = ppppppppiVar7 + 2;
    local_94 = local_d4;
  }
  if (((uVar14 & 4) != 0) &&
     (pppppppiVar11 = (int *******)((int)pppppppiVar21 - (int)local_dc), 0 < (int)pppppppiVar11)) {
    iVar9 = local_98;
    if ((int)pppppppiVar11 < 0x11) {
      iVar16 = local_98 + 1;
    }
    else {
      do {
        while( true ) {
          local_98 = iVar9 + 1;
          local_94 = local_94 + 4;
          *ppppppppiVar17 = (int *******)0x85808;
          ppppppppiVar17[1] = (int *******)0x10;
          if (7 < local_98) break;
          iVar16 = iVar9 + 2;
          ppppppppiVar17 = ppppppppiVar17 + 2;
LAB_00083316:
          pppppppiVar11 = pppppppiVar11 + -4;
          iVar9 = local_98;
          if ((int)pppppppiVar11 < 0x11) goto LAB_0008333e;
        }
        if (local_94 != (int *******)0x0) {
          iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
          if (iVar9 == 0) {
            iVar16 = local_98 + 1;
            ppppppppiVar17 = (int ********)local_68;
            goto LAB_00083316;
          }
          goto LAB_000833de;
        }
        pppppppiVar11 = pppppppiVar11 + -4;
        iVar16 = 1;
        iVar9 = 0;
        ppppppppiVar17 = (int ********)local_68;
      } while (0x10 < (int)pppppppiVar11);
    }
LAB_0008333e:
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar11);
    *ppppppppiVar17 = (int *******)0x85808;
    ppppppppiVar17[1] = pppppppiVar11;
    local_98 = iVar16;
    if (7 < iVar16) {
      if (local_94 == (int *******)0x0) {
        if ((int)local_dc < (int)pppppppiVar21) {
          local_dc = pppppppiVar21;
        }
        local_c4 = local_c4 + (int)local_dc;
        goto LAB_00083422;
      }
      iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c);
      if (iVar9 != 0) goto LAB_000833de;
    }
  }
  if ((int)local_dc < (int)pppppppiVar21) {
    local_dc = pppppppiVar21;
  }
  local_c4 = local_c4 + (int)local_dc;
  if ((local_94 != (int *******)0x0) &&
     (iVar9 = __sprint_r_part_0(param_1,param_2,&local_9c), iVar9 != 0)) goto LAB_000833de;
LAB_00083422:
  local_98 = 0;
  ppppppppiVar7 = (int ********)local_68;
  goto LAB_00082b9e;
switchD_00082c20_caseD_31:
  uVar12 = uVar15 - 0x30;
  pppppppiVar21 = (int *******)0x0;
  pppppppiVar11 = param_3;
  do {
    param_3 = (int *******)((int)pppppppiVar11 + 1);
    uVar15 = (uint)*(byte *)pppppppiVar11;
    pppppppiVar21 = (int *******)(uVar12 + (int)pppppppiVar21 * 10);
    uVar12 = uVar15 - 0x30;
    pppppppiVar11 = param_3;
  } while (uVar12 < 10);
  goto LAB_00082c16;
switchD_00082c20_caseD_20:
  uVar15 = (uint)*(byte *)param_3;
  if (local_a1 == '\0') {
    local_a1 = ' ';
  }
  goto LAB_00082c12;
}


////>>0x0008378c>>__sbprintf>>////

int __sbprintf(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *local_488 [2];
  undefined4 local_480;
  ushort local_47c;
  undefined2 local_47a;
  undefined *local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_464;
  undefined4 local_424;
  undefined auStack_420 [1024];
  
  local_424 = *(undefined4 *)(param_2 + 100);
  local_46c = *(undefined4 *)(param_2 + 0x1c);
  local_47a = *(undefined2 *)(param_2 + 0xe);
  local_464 = *(undefined4 *)(param_2 + 0x24);
  local_488[0] = auStack_420;
  local_47c = *(ushort *)(param_2 + 0xc) & 0xfffd;
  local_480 = 0x400;
  local_474 = 0x400;
  local_470 = 0;
  local_478 = local_488[0];
  iVar1 = _vfiprintf_r(param_1,local_488);
  if ((-1 < iVar1) && (iVar2 = _fflush_r(param_1,local_488), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((int)((uint)local_47c << 0x19) < 0) {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x40;
  }
  return iVar1;
}


////>>0x00083808>>__swsetup_r>>////

undefined4 __swsetup_r(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  if ((_impure_ptr != 0) && (*(int *)(_impure_ptr + 0x38) == 0)) {
    __sinit();
  }
  uVar4 = *(ushort *)(param_2 + 3);
  uVar3 = (uint)uVar4;
  if ((int)(uVar3 << 0x1c) < 0) {
    iVar2 = param_2[4];
  }
  else {
    if (-1 < (int)(uVar3 << 0x1b)) {
      *param_1 = 9;
      *(ushort *)(param_2 + 3) = uVar4 | 0x40;
      return 0xffffffff;
    }
    if ((int)(uVar3 << 0x1d) < 0) {
      if ((int *)param_2[0xc] != (int *)0x0) {
        if ((int *)param_2[0xc] != param_2 + 0x10) {
          _free_r(param_1);
          uVar4 = *(ushort *)(param_2 + 3);
        }
        param_2[0xc] = 0;
      }
      iVar2 = param_2[4];
      uVar4 = uVar4 & 0xffdb;
      *param_2 = iVar2;
      param_2[1] = 0;
    }
    else {
      iVar2 = param_2[4];
    }
    *(ushort *)(param_2 + 3) = uVar4 | 8;
    uVar3 = (uint)(uVar4 | 8);
  }
  if ((iVar2 == 0) && ((uVar3 & 0x280) != 0x200)) {
    __smakebuf_r(param_1,param_2);
    uVar3 = (uint)*(ushort *)(param_2 + 3);
    iVar2 = param_2[4];
  }
  if ((uVar3 & 1) == 0) {
    iVar1 = 0;
    if (-1 < (int)(uVar3 << 0x1e)) {
      iVar1 = param_2[5];
    }
    param_2[2] = iVar1;
  }
  else {
    param_2[6] = -param_2[5];
    param_2[2] = 0;
  }
  if ((iVar2 == 0) && ((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0)) {
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
    return 0xffffffff;
  }
  return 0;
}


////>>0x000838cc>>__register_exitproc>>////

undefined4 __register_exitproc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_20070180 == (undefined4 *)0x0) {
    DAT_20070180 = (undefined4 *)&DAT_20070184;
  }
  uVar2 = DAT_20070180[1];
  puVar1 = DAT_20070180;
  if (0x1f < (int)uVar2) {
    puVar1 = (undefined4 *)malloc(400);
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    *puVar1 = DAT_20070180;
    puVar1[1] = 0;
    uVar2 = 0;
    DAT_20070180 = puVar1;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
  }
  if (param_1 != 0) {
    uVar3 = 1 << (uVar2 & 0xff);
    puVar1[uVar2 + 0x22] = param_3;
    puVar1[0x62] = puVar1[0x62] | uVar3;
    puVar1[uVar2 + 0x42] = param_4;
    if (param_1 == 2) {
      puVar1[99] = uVar3 | puVar1[99];
    }
  }
  puVar1[1] = uVar2 + 1;
  puVar1[uVar2 + 2] = param_2;
  return 0;
}


////>>0x00083974>>register_fini>>////

/* WARNING: Removing unreachable block (ram,0x00083978) */

void register_fini(void)

{
  return;
}


////>>0x00083988>>atexit>>////

int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __register_exitproc(0,__func,0,0);
  return iVar1;
}


////>>0x00083994>>__sflush_r>>////

undefined4 __sflush_r(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  
  uVar3 = *(ushort *)(param_2 + 3);
  if ((int)((uint)uVar3 << 0x1c) < 0) {
    iVar7 = param_2[4];
    if (iVar7 == 0) {
      return 0;
    }
    iVar2 = *param_2;
    if ((uVar3 & 3) == 0) {
      iVar5 = param_2[5];
    }
    else {
      iVar5 = 0;
    }
    *param_2 = iVar7;
    iVar2 = iVar2 - iVar7;
    param_2[2] = iVar5;
    do {
      if (iVar2 < 1) {
        return 0;
      }
      iVar5 = (*(code *)param_2[9])(param_1,param_2[7],iVar7,iVar2);
      iVar2 = iVar2 - iVar5;
      iVar7 = iVar7 + iVar5;
    } while (0 < iVar5);
LAB_00083a54:
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
    return 0xffffffff;
  }
  *(ushort *)(param_2 + 3) = uVar3 | 0x800;
  if ((param_2[1] < 1) && (param_2[0xf] < 1)) {
    return 0;
  }
  pcVar6 = (code *)param_2[10];
  if (pcVar6 == (code *)0x0) {
    return 0;
  }
  uVar4 = (uint)(uVar3 | 0x800);
  iVar7 = *param_1;
  *param_1 = 0;
  if ((uVar3 & 0x1000) == 0) {
    iVar2 = (*pcVar6)(param_1,param_2[7],uVar4 & 0x1000,1);
    if ((iVar2 == -1) && (iVar5 = *param_1, iVar5 != 0)) {
      if ((iVar5 == 0x1d) || (iVar5 == 0x16)) {
        *param_1 = iVar7;
        return 0;
      }
      goto LAB_00083a54;
    }
    uVar4 = (uint)*(ushort *)(param_2 + 3);
    pcVar6 = (code *)param_2[10];
  }
  else {
    iVar2 = param_2[0x14];
  }
  if (((int)(uVar4 << 0x1d) < 0) && (iVar2 = iVar2 - param_2[1], param_2[0xc] != 0)) {
    iVar2 = iVar2 - param_2[0xf];
  }
  iVar2 = (*pcVar6)(param_1,param_2[7],iVar2,0);
  if (iVar2 == -1) {
    iVar5 = *param_1;
    if (iVar5 != 0) {
      if ((iVar5 != 0x1d) && (iVar5 != 0x16)) {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
        return 0xffffffff;
      }
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xf7ff;
      *param_2 = param_2[4];
      param_2[1] = 0;
      goto LAB_00083a00;
    }
    uVar3 = *(ushort *)(param_2 + 3) & 0xf7ff;
    param_2[1] = 0;
    *(ushort *)(param_2 + 3) = uVar3;
    *param_2 = param_2[4];
  }
  else {
    uVar3 = *(ushort *)(param_2 + 3) & 0xf7ff;
    *param_2 = param_2[4];
    *(ushort *)(param_2 + 3) = uVar3;
    param_2[1] = 0;
  }
  if ((int)((uint)uVar3 << 0x13) < 0) {
    param_2[0x14] = iVar2;
  }
LAB_00083a00:
  piVar1 = (int *)param_2[0xc];
  *param_1 = iVar7;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1 != param_2 + 0x10) {
    _free_r(param_1);
  }
  param_2[0xc] = 0;
  return 0;
}


////>>0x00083adc>>_fflush_r>>////

void _fflush_r(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    __sinit();
  }
  if (*(short *)(param_2 + 0xc) == 0) {
    return;
  }
  __sflush_r(param_1);
  return;
}


////>>0x00083b08>>_cleanup_r>>////

void _cleanup_r(undefined4 param_1)

{
  _fwalk(param_1,0x846a5);
  return;
}


////>>0x00083b14>>__sinit>>////

void __sinit(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x3c) = 0x83b09;
    *(undefined4 *)(param_1 + 0x2e4) = 3;
    *(int *)(param_1 + 0x2e8) = param_1 + 0x2ec;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined2 *)(puVar1 + 3) = 4;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    memset(puVar1 + 0x17,0,8);
    puVar2 = *(undefined4 **)(param_1 + 8);
    puVar1[7] = puVar1;
    puVar1[8] = 0x84441;
    puVar1[9] = 0x84465;
    puVar1[10] = 0x8449d;
    puVar1[0xb] = 0x844bd;
    *(undefined2 *)((int)puVar2 + 0xe) = 1;
    *(undefined2 *)(puVar2 + 3) = 9;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[0x19] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    memset(puVar2 + 0x17,0,8);
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    puVar2[7] = puVar2;
    puVar2[8] = 0x84441;
    puVar2[9] = 0x84465;
    puVar2[10] = 0x8449d;
    puVar2[0xb] = 0x844bd;
    *(undefined2 *)(puVar1 + 3) = 0x12;
    *(undefined2 *)((int)puVar1 + 0xe) = 2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0x19] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    memset(puVar1 + 0x17,0,8);
    puVar1[7] = puVar1;
    puVar1[8] = 0x84441;
    puVar1[9] = 0x84465;
    puVar1[10] = 0x8449d;
    puVar1[0xb] = 0x844bd;
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}


////>>0x00083c08>>__sfp_lock_acquire>>////

void __sfp_lock_acquire(void)

{
  return;
}


////>>0x00083c0c>>__sfp_lock_release>>////

void __sfp_lock_release(void)

{
  return;
}


////>>0x00083c10>>__libc_fini_array>>////

void __libc_fini_array(void)

{
  int iVar1;
  code **ppcVar2;
  
  iVar1 = 1;
  ppcVar2 = (code **)&__fini_array_end;
  do {
    iVar1 = iVar1 + -1;
    ppcVar2 = ppcVar2 + -1;
    (**ppcVar2)();
  } while (iVar1 != 0);
  _fini();
  return;
}


////>>0x00083c40>>_fputwc_r>>////

uint _fputwc_r(undefined4 param_1,uint param_2,byte **param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_1c;
  byte abStack_1b [3];
  
  if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x12)) {
    *(ushort *)(param_3 + 3) = *(ushort *)(param_3 + 3) | 0x2000;
    param_3[0x19] = (byte *)((uint)param_3[0x19] | 0x2000);
  }
  iVar1 = __locale_mb_cur_max();
  if ((iVar1 == 1) && (param_2 - 1 < 0xff)) {
    uVar3 = param_2 & 0xff;
    local_1c = (byte)uVar3;
    uVar2 = 1;
  }
  else {
    uVar2 = _wcrtomb_r(param_1,&local_1c,param_2,param_3 + 0x17);
    if (uVar2 == 0xffffffff) {
      *(ushort *)(param_3 + 3) = *(ushort *)(param_3 + 3) | 0x40;
      return 0xffffffff;
    }
    if (uVar2 == 0) {
      return param_2;
    }
    uVar3 = (uint)local_1c;
  }
  uVar5 = 0;
  do {
    pbVar4 = param_3[2] + -1;
    param_3[2] = pbVar4;
    if ((int)pbVar4 < 0) {
      if ((int)param_3[6] <= (int)pbVar4) {
        **param_3 = (byte)uVar3;
        pbVar4 = *param_3;
        uVar3 = (uint)*pbVar4;
        if (uVar3 != 10) goto LAB_00083c90;
      }
      iVar1 = __swbuf_r(param_1,uVar3,param_3);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
    }
    else {
      **param_3 = (byte)uVar3;
      pbVar4 = *param_3;
LAB_00083c90:
      *param_3 = pbVar4 + 1;
    }
    if (uVar2 <= uVar5 + 1) {
      return param_2;
    }
    uVar3 = (uint)abStack_1b[uVar5];
    uVar5 = uVar5 + 1;
  } while( true );
}


////>>0x00083d00>>_malloc_trim_r>>////

undefined4 _malloc_trim_r(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  __malloc_lock();
  uVar2 = *(uint *)(DAT_2007046c + 4) & 0xfffffffc;
  iVar3 = ((uVar2 - param_2) + 0xfef & 0xfffff000) - 0x1000;
  if (0xfff < iVar3) {
    iVar1 = _sbrk_r(param_1,0);
    if (iVar1 == DAT_2007046c + uVar2) {
      iVar1 = _sbrk_r(param_1,-iVar3);
      if (iVar1 != -1) {
        __malloc_current_mallinfo = __malloc_current_mallinfo - iVar3;
        *(uint *)(DAT_2007046c + 4) = uVar2 - iVar3 | 1;
        __malloc_unlock(param_1);
        return 1;
      }
      iVar3 = _sbrk_r(param_1,0);
      if (0xf < iVar3 - DAT_2007046c) {
        __malloc_current_mallinfo = iVar3 - __malloc_sbrk_base;
        *(uint *)(DAT_2007046c + 4) = iVar3 - DAT_2007046c | 1;
      }
    }
  }
  __malloc_unlock(param_1);
  return 0;
}


////>>0x00083d9c>>_free_r>>////

void _free_r(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    return;
  }
  __malloc_lock();
  uVar3 = *(uint *)(param_2 + -4);
  iVar9 = param_2 + -8;
  uVar7 = uVar3 & 0xfffffffe;
  iVar5 = iVar9 + uVar7;
  uVar10 = *(uint *)(iVar5 + 4) & 0xfffffffc;
  if (DAT_2007046c == iVar5) {
    uVar10 = uVar10 + uVar7;
    if (-1 < (int)(uVar3 << 0x1f)) {
      iVar9 = iVar9 - *(int *)(param_2 + -8);
      iVar4 = *(int *)(iVar9 + 0xc);
      iVar5 = *(int *)(iVar9 + 8);
      uVar10 = uVar10 + *(int *)(param_2 + -8);
      *(int *)(iVar5 + 0xc) = iVar4;
      *(int *)(iVar4 + 8) = iVar5;
    }
    uVar3 = __malloc_trim_threshold;
    *(uint *)(iVar9 + 4) = uVar10 | 1;
    DAT_2007046c = iVar9;
    if (uVar3 <= uVar10) {
      _malloc_trim_r(param_1,__malloc_top_pad);
    }
  }
  else {
    *(uint *)(iVar5 + 4) = uVar10;
    if ((uVar3 & 1) == 0) {
      iVar9 = iVar9 - *(int *)(param_2 + -8);
      puVar1 = *(undefined4 **)(iVar9 + 8);
      uVar7 = uVar7 + *(int *)(param_2 + -8);
      if (puVar1 == &DAT_2007046c) {
        bVar2 = true;
      }
      else {
        iVar4 = *(int *)(iVar9 + 0xc);
        puVar1[3] = iVar4;
        *(undefined4 **)(iVar4 + 8) = puVar1;
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
    if (-1 < *(int *)(iVar5 + uVar10 + 4) << 0x1f) {
      uVar7 = uVar7 + uVar10;
      puVar1 = *(undefined4 **)(iVar5 + 8);
      if ((!bVar2) && (puVar1 == &DAT_2007046c)) {
        DAT_20070474 = iVar9;
        DAT_20070478 = iVar9;
        *(int **)(iVar9 + 0xc) = &DAT_2007046c;
        *(int **)(iVar9 + 8) = &DAT_2007046c;
        *(uint *)(iVar9 + 4) = uVar7 | 1;
        *(uint *)(iVar9 + uVar7) = uVar7;
        goto LAB_00083e30;
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      puVar1[3] = iVar5;
      *(undefined4 **)(iVar5 + 8) = puVar1;
    }
    *(uint *)(iVar9 + 4) = uVar7 | 1;
    *(uint *)(iVar9 + uVar7) = uVar7;
    if (!bVar2) {
      if (uVar7 < 0x200) {
        uVar3 = uVar7 & 0xfffffff8;
        iVar5 = *(int *)((int)&DAT_2007046c + uVar3);
        DAT_20070468 = DAT_20070468 | 1 << ((int)(uVar7 >> 3) >> 2 & 0xffU);
        *(int *)(iVar9 + 8) = iVar5;
        *(undefined1 **)(iVar9 + 0xc) = &__malloc_av_ + uVar3;
        *(int *)((int)&DAT_2007046c + uVar3) = iVar9;
        *(int *)(iVar5 + 0xc) = iVar9;
        __malloc_unlock(param_1);
        return;
      }
      uVar3 = uVar7 >> 9;
      if (uVar3 < 5) {
        iVar5 = (uVar7 >> 6) + 0x38;
        iVar4 = iVar5 * 2;
      }
      else if (uVar3 < 0x15) {
        iVar5 = uVar3 + 0x5b;
        iVar4 = iVar5 * 2;
      }
      else if (uVar3 < 0x55) {
        iVar5 = (uVar7 >> 0xc) + 0x6e;
        iVar4 = iVar5 * 2;
      }
      else if (uVar3 < 0x155) {
        iVar5 = (uVar7 >> 0xf) + 0x77;
        iVar4 = iVar5 * 2;
      }
      else if (uVar3 < 0x555) {
        iVar5 = (uVar7 >> 0x12) + 0x7c;
        iVar4 = iVar5 * 2;
      }
      else {
        iVar4 = 0xfc;
        iVar5 = 0x7e;
      }
      puVar6 = (undefined1 *)(&DAT_2007046c)[iVar4];
      if (puVar6 == &__malloc_av_ + iVar4 * 4) {
        DAT_20070468 = DAT_20070468 | 1 << (iVar5 >> 2 & 0xffU);
        puVar8 = puVar6;
      }
      else {
        do {
          if ((*(uint *)(puVar6 + 4) & 0xfffffffc) <= uVar7) break;
          puVar6 = *(undefined1 **)(puVar6 + 8);
        } while (&__malloc_av_ + iVar4 * 4 != puVar6);
        puVar8 = *(undefined1 **)(puVar6 + 0xc);
      }
      *(undefined1 **)(iVar9 + 0xc) = puVar8;
      *(undefined1 **)(iVar9 + 8) = puVar6;
      *(int *)(puVar8 + 8) = iVar9;
      *(int *)(puVar6 + 0xc) = iVar9;
    }
  }
LAB_00083e30:
  __malloc_unlock(param_1);
  return;
}


////>>0x00083f34>>__sfvwrite_r>>////

undefined4 __sfvwrite_r(undefined4 *param_1,void **param_2,undefined4 *param_3)

{
  void **ppvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  void **ppvVar10;
  void *pvVar11;
  void *pvVar12;
  void *__n;
  size_t __n_00;
  void *local_2c;
  
  if (param_3[2] != 0) {
    uVar7 = *(ushort *)(param_2 + 3);
    uVar8 = (uint)uVar7;
    if (((int)(uVar8 << 0x1c) < 0) && (param_2[4] != (void *)0x0)) {
      ppvVar10 = (void **)*param_3;
    }
    else {
      iVar2 = __swsetup_r(param_1,param_2);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      uVar7 = *(ushort *)(param_2 + 3);
      uVar8 = (uint)uVar7;
      ppvVar10 = (void **)*param_3;
    }
    if ((uVar7 & 2) == 0) {
      pvVar5 = (void *)(uVar8 & 2);
      pvVar12 = pvVar5;
      pvVar11 = pvVar5;
      local_2c = pvVar5;
      if ((uVar8 & 1) == 0) {
        pvVar5 = (void *)0x0;
        pvVar12 = (void *)0x0;
        while( true ) {
          while (pvVar5 == (void *)0x0) {
            pvVar12 = *ppvVar10;
            ppvVar1 = ppvVar10 + 1;
            ppvVar10 = ppvVar10 + 2;
            pvVar5 = *ppvVar1;
          }
          pvVar11 = param_2[2];
          if ((int)(uVar8 << 0x16) < 0) {
            if (pvVar5 < pvVar11) {
              pvVar3 = *param_2;
              pvVar11 = pvVar5;
            }
            else if ((uVar8 & 0x480) == 0) {
              pvVar3 = *param_2;
            }
            else {
              __n_00 = (int)*param_2 - (int)param_2[4];
              pvVar11 = (void *)(__n_00 + 1 + (int)pvVar5);
              pvVar3 = (void *)(((int)param_2[5] * 3) / 2);
              if (pvVar11 <= pvVar3) {
                pvVar11 = pvVar3;
              }
              if ((int)(uVar8 << 0x15) < 0) {
                pvVar4 = (void *)_malloc_r(param_1,pvVar11);
                if (pvVar4 == (void *)0x0) {
                  *param_1 = 0xc;
                  uVar7 = *(ushort *)(param_2 + 3);
                  goto LAB_00084030;
                }
                memcpy(pvVar4,param_2[4],__n_00);
                *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
              }
              else {
                pvVar4 = (void *)_realloc_r(param_1);
                if (pvVar4 == (void *)0x0) {
                  _free_r(param_1,param_2[4]);
                  uVar7 = *(ushort *)(param_2 + 3) & 0xff7f;
                  *param_1 = 0xc;
                  goto LAB_00084030;
                }
              }
              pvVar3 = (void *)((int)pvVar4 + __n_00);
              param_2[4] = pvVar4;
              param_2[5] = pvVar11;
              *param_2 = pvVar3;
              param_2[2] = (void *)((int)pvVar11 - __n_00);
              pvVar11 = pvVar5;
            }
            memmove(pvVar3,pvVar12,(size_t)pvVar11);
            param_2[2] = (void *)((int)param_2[2] - (int)pvVar11);
            *param_2 = (void *)((int)*param_2 + (int)pvVar11);
            pvVar11 = pvVar5;
          }
          else if ((param_2[4] < *param_2) || (pvVar3 = param_2[5], pvVar5 < pvVar3)) {
            if (pvVar5 < pvVar11) {
              pvVar11 = pvVar5;
            }
            memmove(*param_2,pvVar12,(size_t)pvVar11);
            pvVar3 = param_2[2];
            param_2[2] = (void *)((int)pvVar3 - (int)pvVar11);
            *param_2 = (void *)((int)*param_2 + (int)pvVar11);
            if (((void *)((int)pvVar3 - (int)pvVar11) == (void *)0x0) &&
               (iVar2 = _fflush_r(param_1,param_2), iVar2 != 0)) goto LAB_0008402e;
          }
          else {
            pvVar11 = (void *)0x7fffffff;
            if (pvVar5 < (void *)0x7fffffff) {
              pvVar11 = pvVar5;
            }
            pvVar11 = (void *)(*(code *)param_2[9])
                                        (param_1,param_2[7],pvVar12,
                                         ((uint)pvVar11 / (uint)pvVar3) * (int)pvVar3);
            if ((int)pvVar11 < 1) goto LAB_0008402e;
          }
          iVar2 = param_3[2];
          pvVar12 = (void *)((int)pvVar12 + (int)pvVar11);
          pvVar5 = (void *)((int)pvVar5 - (int)pvVar11);
          param_3[2] = iVar2 - (int)pvVar11;
          if (iVar2 - (int)pvVar11 == 0) break;
          uVar8 = (uint)*(ushort *)(param_2 + 3);
        }
      }
      else {
        do {
          while (pvVar5 == (void *)0x0) {
            pvVar11 = *ppvVar10;
            pvVar5 = ppvVar10[1];
            local_2c = (void *)0x0;
            ppvVar10 = ppvVar10 + 2;
          }
          if (local_2c == (void *)0x0) {
            pvVar12 = memchr(pvVar11,10,(size_t)pvVar5);
            if (pvVar12 == (void *)0x0) {
              pvVar12 = (void *)((int)pvVar5 + 1);
              local_2c = (void *)0x1;
            }
            else {
              pvVar12 = (void *)((int)pvVar12 + (1 - (int)pvVar11));
              local_2c = (void *)0x1;
            }
          }
          pvVar4 = *param_2;
          pvVar3 = pvVar12;
          if (pvVar5 <= pvVar12) {
            pvVar3 = pvVar5;
          }
          pvVar6 = param_2[5];
          if ((param_2[4] < pvVar4) &&
             (__n = (void *)((int)param_2[2] + (int)pvVar6), (int)__n < (int)pvVar3)) {
            memmove(pvVar4,pvVar11,(size_t)__n);
            *param_2 = (void *)((int)*param_2 + (int)__n);
            iVar2 = _fflush_r(param_1,param_2);
            if (iVar2 != 0) goto LAB_0008402e;
          }
          else if ((int)pvVar3 < (int)pvVar6) {
            memmove(pvVar4,pvVar11,(size_t)pvVar3);
            param_2[2] = (void *)((int)param_2[2] - (int)pvVar3);
            *param_2 = (void *)((int)pvVar3 + (int)*param_2);
            __n = pvVar3;
          }
          else {
            __n = (void *)(*(code *)param_2[9])(param_1,param_2[7],pvVar11,pvVar6);
            if ((int)__n < 1) goto LAB_0008402e;
          }
          pvVar12 = (void *)((int)pvVar12 - (int)__n);
          if (pvVar12 == (void *)0x0) {
            iVar2 = _fflush_r(param_1,param_2);
            if (iVar2 != 0) goto LAB_0008402e;
            local_2c = (void *)0x0;
          }
          iVar2 = param_3[2];
          pvVar11 = (void *)((int)pvVar11 + (int)__n);
          pvVar5 = (void *)((int)pvVar5 - (int)__n);
          param_3[2] = iVar2 - (int)__n;
        } while (iVar2 - (int)__n != 0);
      }
    }
    else {
      pvVar12 = (void *)0x0;
      pvVar5 = (void *)0x0;
      do {
        while( true ) {
          pvVar11 = pvVar5;
          if ((void *)0x7ffffbff < pvVar5) {
            pvVar11 = (void *)0x7ffffc00;
          }
          if (pvVar5 != (void *)0x0) break;
          pvVar12 = *ppvVar10;
          pvVar5 = ppvVar10[1];
          ppvVar10 = ppvVar10 + 2;
        }
        iVar2 = (*(code *)param_2[9])(param_1,param_2[7],pvVar12,pvVar11);
        if (iVar2 < 1) {
LAB_0008402e:
          uVar7 = *(ushort *)(param_2 + 3);
LAB_00084030:
          *(ushort *)(param_2 + 3) = uVar7 | 0x40;
          return 0xffffffff;
        }
        iVar9 = param_3[2];
        pvVar12 = (void *)((int)pvVar12 + iVar2);
        pvVar5 = (void *)((int)pvVar5 - iVar2);
        param_3[2] = iVar9 - iVar2;
      } while (iVar9 - iVar2 != 0);
    }
  }
  return 0;
}


////>>0x00084248>>_fwalk>>////

uint _fwalk(int param_1,code *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x2e0);
  if (piVar5 != (int *)0x0) {
    uVar4 = 0;
    do {
      iVar2 = piVar5[2];
      iVar3 = piVar5[1] + -1;
      if (-1 < iVar3) {
        do {
          iVar3 = iVar3 + -1;
          if ((1 < *(ushort *)(iVar2 + 0xc)) && (*(short *)(iVar2 + 0xe) != -1)) {
            uVar1 = (*param_2)(iVar2);
            uVar4 = uVar4 | uVar1;
          }
          iVar2 = iVar2 + 0x68;
        } while (iVar3 != -1);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
    return uVar4;
  }
  return 0;
}


////>>0x00084290>>__locale_charset>>////

char * __locale_charset(void)

{
  return lc_ctype_charset;
}


////>>0x00084298>>__locale_mb_cur_max>>////

undefined4 __locale_mb_cur_max(void)

{
  return __mb_cur_max;
}


////>>0x000842a4>>__smakebuf_r>>////

void __smakebuf_r(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined auStack_54 [4];
  uint local_50;
  
  uVar1 = *(ushort *)(param_2 + 3);
  uVar4 = (uint)uVar1;
  if ((int)(uVar4 << 0x1e) < 0) {
    *param_2 = (int)param_2 + 0x43;
    param_2[4] = (int)param_2 + 0x43;
    param_2[5] = 1;
    return;
  }
  if (-1 < *(short *)((int)param_2 + 0xe)) {
    iVar2 = _fstat_r(param_1,(int)*(short *)((int)param_2 + 0xe),auStack_54);
    if (-1 < iVar2) {
      bVar5 = (local_50 & 0xf000) == 0x2000;
      if (((local_50 & 0xf000) == 0x8000) && (param_2[10] == 0x8449d)) {
        iVar2 = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x400;
        param_2[0x13] = 0x400;
      }
      else {
        iVar2 = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x800;
      }
      goto LAB_00084300;
    }
    uVar1 = *(ushort *)(param_2 + 3);
    uVar4 = (uint)uVar1;
  }
  *(ushort *)(param_2 + 3) = uVar1 | 0x800;
  if ((uVar4 & 0x80) == 0) {
    iVar2 = 0x400;
  }
  else {
    iVar2 = 0x40;
  }
  bVar5 = false;
LAB_00084300:
  iVar3 = _malloc_r(param_1,iVar2);
  uVar1 = *(ushort *)(param_2 + 3);
  if (iVar3 == 0) {
    if (-1 < (int)((uint)uVar1 << 0x16)) {
      *(ushort *)(param_2 + 3) = uVar1 | 2;
      *param_2 = (int)param_2 + 0x43;
      param_2[4] = (int)param_2 + 0x43;
      param_2[5] = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = 0x83b09;
    *(ushort *)(param_2 + 3) = uVar1 | 0x80;
    *param_2 = iVar3;
    param_2[4] = iVar3;
    param_2[5] = iVar2;
    if ((bVar5) && (iVar2 = _isatty_r(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0)) {
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 1;
    }
  }
  return;
}


////>>0x00084384>>memchr>>////

void * memchr(void *__s,int __c,size_t __n)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = __c & 0xff;
  if (((uint)__s & 3) == 0) {
LAB_000843b4:
    if (3 < __n) {
      uVar5 = uVar1 | uVar1 << 8;
      puVar4 = (uint *)__s;
      do {
        uVar2 = *puVar4 ^ (uVar5 | uVar5 << 0x10);
        __s = puVar4;
        if ((uVar2 + 0xfefefeff & ~uVar2 & 0x80808080) != 0) break;
        __n = __n - 4;
        __s = puVar4 + 1;
        puVar4 = puVar4 + 1;
      } while (3 < __n);
    }
    if (__n == 0) {
      __s = (uint *)0x0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      if (*__s != uVar1) {
        iVar3 = 0;
        do {
          __s = (void *)((int)__s + 1);
          bVar6 = iVar3 == __n - 1;
          iVar3 = iVar3 + 1;
          if (bVar6) goto LAB_000843dc;
                    /* WARNING: Load size is inaccurate */
        } while (*__s != uVar1);
      }
    }
  }
  else if (__n == 0) {
LAB_000843dc:
    __s = (uint *)0x0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if (*__s != uVar1) {
      puVar4 = (uint *)((int)__s + 1);
      __n = __n - 1;
      do {
        __s = puVar4;
        if (((uint)__s & 3) == 0) goto LAB_000843b4;
        if (__n == 0) goto LAB_000843dc;
                    /* WARNING: Load size is inaccurate */
        puVar4 = (uint *)((int)__s + 1);
        __n = __n - 1;
      } while (*__s != uVar1);
    }
  }
  return __s;
}


////>>0x00084418>>_kill_r>>////

void _kill_r(int *param_1,int param_2,int param_3)

{
  errno = 0;
  _kill(param_2,param_3);
  if ((param_2 == -1) && (errno != 0)) {
    *param_1 = errno;
    return;
  }
  return;
}


////>>0x00084440>>__sread>>////

void __sread(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _read_r(param_1,(int)*(short *)(param_2 + 0xe));
  if (-1 < iVar1) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + iVar1;
    return;
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  return;
}


////>>0x00084464>>__swrite>>////

void __swrite(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 0xc);
  if ((int)((uint)uVar1 << 0x17) < 0) {
    _lseek_r(param_1,(int)*(short *)(param_2 + 0xe),0,2);
    uVar1 = *(ushort *)(param_2 + 0xc);
  }
  *(ushort *)(param_2 + 0xc) = uVar1 & 0xefff;
  _write_r(param_1,(int)*(short *)(param_2 + 0xe),param_3,param_4);
  return;
}


////>>0x0008449c>>__sseek>>////

void __sseek(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = _lseek_r(param_1,(int)*(short *)(param_2 + 0xe));
  if (iVar1 == -1) {
    uVar2 = *(ushort *)(param_2 + 0xc) & 0xefff;
  }
  else {
    uVar2 = *(ushort *)(param_2 + 0xc) | 0x1000;
  }
  if (iVar1 != -1) {
    *(int *)(param_2 + 0x50) = iVar1;
  }
  *(ushort *)(param_2 + 0xc) = uVar2;
  return;
}


////>>0x000844bc>>__sclose>>////

void __sclose(undefined4 param_1,int param_2)

{
  _close_r(param_1,(int)*(short *)(param_2 + 0xe));
  return;
}


////>>0x000844c4>>__swbuf_r>>////

uint __swbuf_r(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    __sinit();
  }
  uVar1 = *(ushort *)(param_3 + 3);
  uVar2 = (uint)uVar1;
  param_3[2] = param_3[6];
  if ((-1 < (int)(uVar2 << 0x1c)) || (iVar4 = param_3[4], iVar4 == 0)) {
    iVar4 = __swsetup_r(param_1,param_3,uVar1,uVar2,param_4);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    uVar1 = *(ushort *)(param_3 + 3);
    iVar4 = param_3[4];
    uVar2 = (uint)uVar1;
  }
  param_2 = param_2 & 0xff;
  if ((int)(uVar2 << 0x12) < 0) {
    puVar3 = (undefined *)*param_3;
    iVar4 = (int)puVar3 - iVar4;
    if (iVar4 < (int)param_3[5]) {
LAB_000844f6:
      iVar4 = iVar4 + 1;
      goto LAB_000844f8;
    }
  }
  else {
    param_3[0x19] = param_3[0x19] & 0xffffdfff;
    puVar3 = (undefined *)*param_3;
    *(ushort *)(param_3 + 3) = uVar1 | 0x2000;
    iVar4 = (int)puVar3 - iVar4;
    if (iVar4 < (int)param_3[5]) goto LAB_000844f6;
  }
  iVar4 = _fflush_r(param_1,param_3);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  puVar3 = (undefined *)*param_3;
  iVar4 = 1;
LAB_000844f8:
  param_3[2] = param_3[2] + -1;
  *param_3 = puVar3 + 1;
  *puVar3 = (char)param_2;
  if (((param_3[5] == iVar4) ||
      (((int)((uint)*(ushort *)(param_3 + 3) << 0x1f) < 0 && (param_2 == 10)))) &&
     (iVar4 = _fflush_r(param_1,param_3), iVar4 != 0)) {
    return 0xffffffff;
  }
  return param_2;
}


////>>0x0008456c>>_wcrtomb_r>>////

void _wcrtomb_r(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_24 [12];
  
  pcVar1 = __wctomb;
  if (param_2 == 0) {
    uVar2 = __locale_charset();
    iVar3 = (*pcVar1)(param_1,auStack_24,0,uVar2,param_4);
  }
  else {
    uVar2 = __locale_charset();
    iVar3 = (*pcVar1)(param_1,param_2,param_3,uVar2,param_4);
  }
  if (iVar3 == -1) {
    *param_4 = 0;
    *param_1 = 0x8a;
  }
  return;
}


////>>0x000845bc>>__ascii_wctomb>>////

undefined4 __ascii_wctomb(undefined4 *param_1,undefined *param_2,uint param_3)

{
  if (param_2 == (undefined *)0x0) {
    return 0;
  }
  if (param_3 < 0x100) {
    *param_2 = (char)param_3;
    return 1;
  }
  *param_1 = 0x8a;
  return 0xffffffff;
}


////>>0x000845d8>>_write_r>>////

void _write_r(int *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _write(param_2,param_3,param_4);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
    return;
  }
  return;
}


////>>0x00084600>>_close_r>>////

void _close_r(int *param_1,int param_2)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _close(param_2);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
    return;
  }
  return;
}


////>>0x00084624>>_fclose_r>>////

undefined4 _fclose_r(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
      __sinit();
    }
    if (*(short *)(param_2 + 0xc) != 0) {
      uVar1 = _fflush_r(param_1,param_2);
      if ((*(code **)(param_2 + 0x2c) != (code *)0x0) &&
         (iVar2 = (**(code **)(param_2 + 0x2c))(param_1,*(undefined4 *)(param_2 + 0x1c)), iVar2 < 0)
         ) {
        uVar1 = 0xffffffff;
      }
      if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x18) < 0) {
        _free_r(param_1,*(undefined4 *)(param_2 + 0x10));
      }
      if (*(int *)(param_2 + 0x30) != 0) {
        if (*(int *)(param_2 + 0x30) != param_2 + 0x40) {
          _free_r(param_1);
        }
        *(undefined4 *)(param_2 + 0x30) = 0;
      }
      if (*(int *)(param_2 + 0x44) != 0) {
        _free_r(param_1);
        *(undefined4 *)(param_2 + 0x44) = 0;
      }
      __sfp_lock_acquire();
      *(undefined2 *)(param_2 + 0xc) = 0;
      __sfp_lock_release();
      return uVar1;
    }
  }
  return 0;
}


////>>0x000846a4>>fclose>>////

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = _fclose_r(_impure_ptr,__stream);
  return iVar1;
}


////>>0x000846b4>>_fstat_r>>////

void _fstat_r(int *param_1,int param_2,stat *param_3)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _fstat(param_2,param_3);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
    return;
  }
  return;
}


////>>0x000846dc>>_isatty_r>>////

void _isatty_r(int *param_1,int param_2)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _isatty(param_2);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
    return;
  }
  return;
}


////>>0x00084700>>_lseek_r>>////

void _lseek_r(int *param_1,int param_2,__off_t param_3,int param_4)

{
  __off_t _Var1;
  
  errno = 0;
  _Var1 = _lseek(param_2,param_3,param_4);
  if ((_Var1 == -1) && (errno != 0)) {
    *param_1 = errno;
    return;
  }
  return;
}


////>>0x00084728>>_read_r>>////

void _read_r(int *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _read(param_2,param_3,param_4);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
    return;
  }
  return;
}


////>>0x00084750>>__aeabi_uldivmod>>////

void __aeabi_uldivmod(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_1 = -1;
    }
    __aeabi_idiv0(param_1);
    return;
  }
  __gnu_uldivmod_helper();
  return;
}


////>>0x0008477c>>__gnu_ldivmod_helper>>////

void __gnu_ldivmod_helper
               (uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = __divdi3();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = (param_2 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar1);
  return;
}


////>>0x000847ac>>__gnu_uldivmod_helper>>////

void __gnu_uldivmod_helper
               (uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = __udivdi3();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = (param_2 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar1);
  return;
}


////>>0x000847dc>>__aeabi_idiv0>>////

void __aeabi_idiv0(void)

{
  return;
}


////>>0x000847e0>>__divdi3>>////

undefined8 __divdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
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
  
  if ((int)param_2 < 0) {
    bVar13 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -param_2 - (uint)bVar13;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = 0;
  }
  if ((int)param_4 < 0) {
    uVar9 = ~uVar9;
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -param_4 - (uint)bVar13;
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar6 = LZCOUNT(param_3);
      if (iVar6 != 0) {
        uVar3 = param_1 >> (0x20U - iVar6 & 0xff);
        param_3 = param_3 << iVar6;
        param_1 = param_1 << iVar6;
        param_2 = param_2 << iVar6 | uVar3;
      }
      uVar2 = param_3 >> 0x10;
      uVar4 = param_2 / uVar2;
      uVar7 = (param_3 & 0xffff) * uVar4;
      uVar10 = param_1 >> 0x10 | (param_2 - uVar2 * uVar4) * 0x10000;
      uVar3 = uVar4;
      if (uVar10 <= uVar7 && uVar7 - uVar10 != 0) {
        bVar13 = CARRY4(uVar10,param_3);
        uVar10 = uVar10 + param_3;
        uVar3 = uVar4 - 1;
        if ((bVar13 == false) && (uVar10 <= uVar7 && uVar7 - uVar10 != 0)) {
          uVar3 = uVar4 - 2;
          uVar10 = uVar10 + param_3;
        }
      }
      uVar8 = (uVar10 - uVar7) / uVar2;
      uVar4 = (param_3 & 0xffff) * uVar8;
      uVar7 = param_1 & 0xffff | ((uVar10 - uVar7) - uVar2 * uVar8) * 0x10000;
      uVar2 = uVar8;
      if (uVar7 <= uVar4 && uVar4 - uVar7 != 0) {
        uVar2 = uVar8 - 1;
        if ((CARRY4(uVar7,param_3) == false) &&
           (uVar7 + param_3 <= uVar4 && uVar4 - (uVar7 + param_3) != 0)) {
          uVar2 = uVar8 - 2;
        }
      }
      uVar2 = uVar2 | uVar3 << 0x10;
      uVar3 = 0;
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      iVar6 = LZCOUNT(param_3);
      if (iVar6 == 0) {
        param_2 = param_2 - param_3;
        uVar4 = param_3 >> 0x10;
        uVar12 = param_3 & 0xffff;
        uVar3 = 1;
      }
      else {
        param_3 = param_3 << iVar6;
        uVar3 = param_2 >> (0x20U - iVar6 & 0xff);
        uVar4 = param_3 >> 0x10;
        uVar10 = uVar3 / uVar4;
        uVar12 = param_3 & 0xffff;
        uVar7 = uVar12 * uVar10;
        uVar8 = param_1 >> (0x20U - iVar6 & 0xff) | param_2 << iVar6;
        uVar3 = uVar8 >> 0x10 | (uVar3 - uVar4 * uVar10) * 0x10000;
        param_1 = param_1 << iVar6;
        uVar2 = uVar10;
        if (uVar3 <= uVar7 && uVar7 - uVar3 != 0) {
          bVar13 = CARRY4(uVar3,param_3);
          uVar3 = uVar3 + param_3;
          uVar2 = uVar10 - 1;
          if ((bVar13 == false) && (uVar3 <= uVar7 && uVar7 - uVar3 != 0)) {
            uVar2 = uVar10 - 2;
            uVar3 = uVar3 + param_3;
          }
        }
        uVar5 = (uVar3 - uVar7) / uVar4;
        uVar10 = uVar12 * uVar5;
        param_2 = uVar8 & 0xffff | ((uVar3 - uVar7) - uVar4 * uVar5) * 0x10000;
        uVar3 = uVar5;
        if (param_2 <= uVar10 && uVar10 - param_2 != 0) {
          bVar13 = CARRY4(param_2,param_3);
          param_2 = param_2 + param_3;
          uVar3 = uVar5 - 1;
          if ((bVar13 == false) && (param_2 <= uVar10 && uVar10 - param_2 != 0)) {
            uVar3 = uVar5 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar10;
        uVar3 = uVar3 | uVar2 << 0x10;
      }
      uVar2 = param_2 / uVar4;
      uVar10 = uVar12 * uVar2;
      uVar8 = param_1 >> 0x10 | (param_2 - uVar4 * uVar2) * 0x10000;
      uVar7 = uVar2;
      if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
        bVar13 = CARRY4(uVar8,param_3);
        uVar8 = uVar8 + param_3;
        uVar7 = uVar2 - 1;
        if ((bVar13 == false) && (uVar8 <= uVar10 && uVar10 - uVar8 != 0)) {
          uVar7 = uVar2 - 2;
          uVar8 = uVar8 + param_3;
        }
      }
      uVar5 = (uVar8 - uVar10) / uVar4;
      uVar12 = uVar12 * uVar5;
      uVar4 = param_1 & 0xffff | ((uVar8 - uVar10) - uVar4 * uVar5) * 0x10000;
      uVar2 = uVar5;
      if (uVar4 <= uVar12 && uVar12 - uVar4 != 0) {
        uVar2 = uVar5 - 1;
        if ((CARRY4(uVar4,param_3) == false) &&
           (uVar4 + param_3 <= uVar12 && uVar12 - (uVar4 + param_3) != 0)) {
          uVar2 = uVar5 - 2;
        }
      }
      uVar2 = uVar2 | uVar7 << 0x10;
    }
  }
  else if (param_2 < param_4) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    iVar6 = LZCOUNT(param_4);
    if (iVar6 == 0) {
      if ((param_4 < param_2) || (param_3 <= param_1)) {
        uVar3 = 0;
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0x20 - iVar6;
      uVar4 = param_2 >> (uVar3 & 0xff);
      uVar12 = param_3 >> (uVar3 & 0xff) | param_4 << iVar6;
      uVar10 = uVar12 >> 0x10;
      uVar2 = uVar4 / uVar10;
      uVar8 = (uVar12 & 0xffff) * uVar2;
      uVar7 = param_2 << iVar6 | param_1 >> (uVar3 & 0xff);
      uVar4 = uVar7 >> 0x10 | (uVar4 - uVar10 * uVar2) * 0x10000;
      uVar3 = uVar2;
      if (uVar4 <= uVar8 && uVar8 - uVar4 != 0) {
        bVar13 = CARRY4(uVar4,uVar12);
        uVar4 = uVar4 + uVar12;
        uVar3 = uVar2 - 1;
        if ((bVar13 == false) && (uVar4 <= uVar8 && uVar8 - uVar4 != 0)) {
          uVar3 = uVar2 - 2;
          uVar4 = uVar4 + uVar12;
        }
      }
      uVar5 = (uVar4 - uVar8) / uVar10;
      uVar11 = (uVar12 & 0xffff) * uVar5;
      uVar4 = uVar7 & 0xffff | ((uVar4 - uVar8) - uVar10 * uVar5) * 0x10000;
      uVar2 = uVar5;
      if (uVar4 <= uVar11 && uVar11 - uVar4 != 0) {
        bVar13 = CARRY4(uVar4,uVar12);
        uVar4 = uVar4 + uVar12;
        uVar2 = uVar5 - 1;
        if ((bVar13 == false) && (uVar4 <= uVar11 && uVar11 - uVar4 != 0)) {
          uVar2 = uVar5 - 2;
          uVar4 = uVar4 + uVar12;
        }
      }
      uVar2 = uVar2 | uVar3 << 0x10;
      lVar1 = (ulonglong)uVar2 * (ulonglong)(param_3 << iVar6);
      uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar3 = 0;
      if ((uVar4 - uVar11 < uVar7) ||
         ((uVar4 - uVar11 == uVar7 && (param_1 << iVar6 < (uint)lVar1)))) {
        uVar2 = uVar2 - 1;
        uVar3 = 0;
      }
    }
  }
  if (uVar9 != 0) {
    bVar13 = uVar2 != 0;
    uVar2 = -uVar2;
    uVar3 = -uVar3 - (uint)bVar13;
  }
  return CONCAT44(uVar3,uVar2);
}


////>>0x00084a80>>__udivdi3>>////

ulonglong __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      iVar10 = LZCOUNT(param_3);
      if (iVar10 == 0) {
        param_2 = param_2 - param_3;
        uVar3 = param_3 >> 0x10;
        uVar5 = param_3 & 0xffff;
        uVar2 = 1;
      }
      else {
        param_3 = param_3 << iVar10;
        uVar8 = param_2 >> (0x20U - iVar10 & 0xff);
        uVar3 = param_3 >> 0x10;
        uVar9 = uVar8 / uVar3;
        uVar5 = param_3 & 0xffff;
        uVar2 = uVar5 * uVar9;
        uVar6 = param_1 >> (0x20U - iVar10 & 0xff) | param_2 << iVar10;
        uVar4 = uVar6 >> 0x10 | (uVar8 - uVar3 * uVar9) * 0x10000;
        param_1 = param_1 << iVar10;
        uVar8 = uVar9;
        if (uVar4 <= uVar2 && uVar2 - uVar4 != 0) {
          bVar11 = CARRY4(uVar4,param_3);
          uVar4 = uVar4 + param_3;
          uVar8 = uVar9 - 1;
          if ((bVar11 == false) && (uVar4 <= uVar2 && uVar2 - uVar4 != 0)) {
            uVar8 = uVar9 - 2;
            uVar4 = uVar4 + param_3;
          }
        }
        uVar7 = (uVar4 - uVar2) / uVar3;
        uVar9 = uVar5 * uVar7;
        param_2 = uVar6 & 0xffff | ((uVar4 - uVar2) - uVar3 * uVar7) * 0x10000;
        uVar2 = uVar7;
        if (param_2 <= uVar9 && uVar9 - param_2 != 0) {
          bVar11 = CARRY4(param_2,param_3);
          param_2 = param_2 + param_3;
          uVar2 = uVar7 - 1;
          if ((bVar11 == false) && (param_2 <= uVar9 && uVar9 - param_2 != 0)) {
            uVar2 = uVar7 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar9;
        uVar2 = uVar2 | uVar8 << 0x10;
      }
      uVar9 = param_2 / uVar3;
      uVar4 = uVar5 * uVar9;
      uVar6 = param_1 >> 0x10 | (param_2 - uVar3 * uVar9) * 0x10000;
      uVar8 = uVar9;
      if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
        bVar11 = CARRY4(uVar6,param_3);
        uVar6 = uVar6 + param_3;
        uVar8 = uVar9 - 1;
        if ((bVar11 == false) && (uVar6 <= uVar4 && uVar4 - uVar6 != 0)) {
          uVar8 = uVar9 - 2;
          uVar6 = uVar6 + param_3;
        }
      }
      uVar9 = (uVar6 - uVar4) / uVar3;
      uVar5 = uVar5 * uVar9;
      uVar6 = param_1 & 0xffff | ((uVar6 - uVar4) - uVar3 * uVar9) * 0x10000;
      uVar3 = uVar9;
      if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
        uVar3 = uVar9 - 1;
        if ((CARRY4(uVar6,param_3) == false) &&
           (uVar6 + param_3 <= uVar5 && uVar5 - (uVar6 + param_3) != 0)) {
          uVar3 = uVar9 - 2;
        }
      }
      return CONCAT44(uVar2,uVar3 | uVar8 << 0x10);
    }
    iVar10 = LZCOUNT(param_3);
    if (iVar10 != 0) {
      uVar8 = param_1 >> (0x20U - iVar10 & 0xff);
      param_3 = param_3 << iVar10;
      param_1 = param_1 << iVar10;
      param_2 = uVar8 | param_2 << iVar10;
    }
    uVar2 = param_3 >> 0x10;
    uVar3 = param_2 / uVar2;
    uVar5 = (param_3 & 0xffff) * uVar3;
    uVar9 = param_1 >> 0x10 | (param_2 - uVar2 * uVar3) * 0x10000;
    uVar8 = uVar3;
    if (uVar9 <= uVar5 && uVar5 - uVar9 != 0) {
      bVar11 = CARRY4(uVar9,param_3);
      uVar9 = uVar9 + param_3;
      uVar8 = uVar3 - 1;
      if ((bVar11 == false) && (uVar9 <= uVar5 && uVar5 - uVar9 != 0)) {
        uVar8 = uVar3 - 2;
        uVar9 = uVar9 + param_3;
      }
    }
    uVar6 = (uVar9 - uVar5) / uVar2;
    uVar3 = (param_3 & 0xffff) * uVar6;
    uVar5 = param_1 & 0xffff | ((uVar9 - uVar5) - uVar2 * uVar6) * 0x10000;
    uVar2 = uVar6;
    if (uVar5 <= uVar3 && uVar3 - uVar5 != 0) {
      uVar2 = uVar6 - 1;
      if ((CARRY4(uVar5,param_3) == false) &&
         (uVar5 + param_3 <= uVar3 && uVar3 - (uVar5 + param_3) != 0)) {
        uVar2 = uVar6 - 2;
      }
    }
    uVar2 = uVar2 | uVar8 << 0x10;
  }
  else {
    if (param_2 < param_4) {
      return 0;
    }
    iVar10 = LZCOUNT(param_4);
    if (iVar10 == 0) {
      if ((param_4 < param_2) || (param_3 <= param_1)) {
        return 1;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0x20 - iVar10;
      uVar8 = param_2 >> (uVar2 & 0xff);
      uVar3 = param_4 << iVar10 | param_3 >> (uVar2 & 0xff);
      uVar5 = uVar3 >> 0x10;
      uVar4 = uVar8 / uVar5;
      uVar9 = (uVar3 & 0xffff) * uVar4;
      uVar6 = param_1 >> (uVar2 & 0xff) | param_2 << iVar10;
      uVar2 = uVar6 >> 0x10 | (uVar8 - uVar5 * uVar4) * 0x10000;
      uVar8 = uVar4;
      if (uVar2 <= uVar9 && uVar9 - uVar2 != 0) {
        bVar11 = CARRY4(uVar2,uVar3);
        uVar2 = uVar2 + uVar3;
        uVar8 = uVar4 - 1;
        if ((bVar11 == false) && (uVar2 <= uVar9 && uVar9 - uVar2 != 0)) {
          uVar8 = uVar4 - 2;
          uVar2 = uVar2 + uVar3;
        }
      }
      uVar4 = (uVar2 - uVar9) / uVar5;
      uVar7 = (uVar3 & 0xffff) * uVar4;
      uVar5 = uVar6 & 0xffff | ((uVar2 - uVar9) - uVar5 * uVar4) * 0x10000;
      uVar2 = uVar4;
      if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
        bVar11 = CARRY4(uVar5,uVar3);
        uVar5 = uVar5 + uVar3;
        uVar2 = uVar4 - 1;
        if ((bVar11 == false) && (uVar5 <= uVar7 && uVar7 - uVar5 != 0)) {
          uVar2 = uVar4 - 2;
          uVar5 = uVar5 + uVar3;
        }
      }
      uVar2 = uVar2 | uVar8 << 0x10;
      lVar1 = (ulonglong)uVar2 * (ulonglong)(param_3 << iVar10);
      uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar5 - uVar7 < uVar8) || ((uVar5 - uVar7 == uVar8 && (param_1 << iVar10 < (uint)lVar1)))
         ) {
        uVar2 = uVar2 - 1;
      }
    }
  }
  return (ulonglong)uVar2;
}


////>>0x00085858>>_init>>////

void _init(void)

{
  return;
}


////>>0x00085874>>_fini>>////

void _fini(void)

{
  return;
}


////>>0x20070000>>banzai>>////

/* WARNING: Unknown calling convention */

void banzai(void)

{
  disableIRQinterrupts();
  do {
  } while (-1 < *(int *)(DAT_2007001c + 8) << 0x1f);
  *(undefined4 *)(DAT_2007001c + 4) = DAT_20070020;
  do {
  } while (-1 < *(int *)(DAT_2007001c + 8) << 0x1f);
  *DAT_20070028 = DAT_20070024;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


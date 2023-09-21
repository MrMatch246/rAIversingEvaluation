java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x080001ac>>__do_global_dtors_aux>>////

/* WARNING: Removing unreachable block (ram,0x080001b8) */

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  if ((char)completed_8667 == '\0') {
    completed_8667._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x080001d0>>frame_dummy>>////

/* WARNING: Removing unreachable block (ram,0x080001d4) */
/* WARNING: Removing unreachable block (ram,0x080001ee) */
/* WARNING: Removing unreachable block (ram,0x080001e4) */
/* WARNING: Removing unreachable block (ram,0x08000200) */
/* WARNING: Removing unreachable block (ram,0x080001f4) */

void frame_dummy(void)

{
  return;
}


////>>0x08000218>>strlen>>////

size_t strlen(char *__s)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = __s;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return (size_t)(pcVar2 + (-1 - (int)__s));
}


////>>0x08000230>>memchr>>////

void * memchr(void *__s,int __c,size_t __n)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  
  uVar9 = __c & 0xff;
  if ((int)__n < 0x10) {
joined_r0x08000290:
    do {
      if (__n == 0) {
        return (void *)0x0;
      }
                    /* WARNING: Load size is inaccurate */
      puVar7 = (uint *)((int)__s + 1);
      bVar1 = *__s;
      __n = __n - 1;
      __s = puVar7;
    } while (bVar1 != uVar9);
  }
  else {
    uVar10 = (uint)__s & 7;
    while( true ) {
      if (uVar10 == 0) {
        uVar10 = uVar9 | uVar9 << 8;
        uVar10 = uVar10 | uVar10 << 0x10;
        uVar11 = __n & 0xfffffff8;
        do {
          puVar7 = (uint *)((int)__s + 8);
                    /* WARNING: Load size is inaccurate */
          uVar11 = uVar11 - 8;
          uVar12 = *__s ^ uVar10;
          uVar13 = *(uint *)((int)__s + 4) ^ uVar10;
          cVar2 = -((char)uVar12 == '\0');
          cVar3 = -((char)(uVar12 >> 8) == '\0');
          cVar4 = -((char)(uVar12 >> 0x10) == '\0');
          cVar5 = -((char)(uVar12 >> 0x18) == '\0');
          uVar12 = CONCAT13(cVar5,CONCAT12(cVar4,CONCAT11(cVar3,cVar2)));
          bVar14 = (char)uVar13 != '\0';
          bVar15 = (char)(uVar13 >> 8) != '\0';
          bVar16 = (char)(uVar13 >> 0x10) != '\0';
          bVar17 = (char)(uVar13 >> 0x18) != '\0';
          uVar13 = CONCAT13(bVar17 * cVar5 - !bVar17,
                            CONCAT12(bVar16 * cVar4 - !bVar16,
                                     CONCAT11(bVar15 * cVar3 - !bVar15,bVar14 * cVar2 - !bVar14)));
          if (uVar13 != 0) {
            if (uVar12 == 0) {
              pbVar8 = (byte *)((int)__s + 5);
              uVar12 = uVar13;
            }
            else {
              pbVar8 = (byte *)((int)__s + 1);
            }
            if ((uVar12 & 1) == 0) {
              bVar14 = (uVar12 & 0x100) == 0;
              pbVar6 = pbVar8 + 1;
              if (bVar14) {
                bVar14 = (uVar12 & 0x18000) == 0;
                pbVar6 = pbVar8 + 2;
              }
              pbVar8 = pbVar6;
              if (bVar14) {
                pbVar8 = pbVar8 + 1;
              }
            }
            return pbVar8 + -1;
          }
          __s = puVar7;
        } while (uVar11 != 0);
        __n = __n & 7;
        goto joined_r0x08000290;
      }
                    /* WARNING: Load size is inaccurate */
      puVar7 = (uint *)((int)__s + 1);
      __n = __n - 1;
      if (*__s == uVar9) break;
      uVar10 = (uint)puVar7 & 7;
      __s = puVar7;
      if (__n == 0) {
        return (void *)0x0;
      }
    }
  }
  return (byte *)((int)puVar7 + -1);
}


////>>0x080002d0>>__aeabi_uldivmod>>////

void __aeabi_uldivmod(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_2 = -1;
      param_1 = -1;
    }
    __aeabi_idiv0(param_1,param_2);
    return;
  }
  __udivmoddi4();
  return;
}


////>>0x08000300>>__udivmoddi4>>////

/* WARNING: Removing unreachable block (ram,0x080005aa) */

ulonglong __udivmoddi4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  ulonglong uVar1;
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
    if (param_2 < param_3) {
      iVar10 = LZCOUNT(param_3);
      if (iVar10 != 0) {
        param_3 = param_3 << iVar10;
        param_2 = param_1 >> (0x20U - iVar10 & 0xff) | param_2 << iVar10;
        param_1 = param_1 << iVar10;
      }
      uVar8 = param_3 >> 0x10;
      uVar6 = param_2 / uVar8;
      uVar5 = param_1 >> 0x10 | (param_2 - uVar8 * uVar6) * 0x10000;
      uVar4 = uVar6 * (param_3 & 0xffff);
      uVar3 = uVar6;
      if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
        bVar11 = CARRY4(uVar5,param_3);
        uVar5 = uVar5 + param_3;
        uVar3 = uVar6 - 1;
        if ((bVar11 == false) && (uVar5 <= uVar4 && uVar4 - uVar5 != 0)) {
          uVar3 = uVar6 - 2;
          uVar5 = uVar5 + param_3;
        }
      }
      uVar6 = (uVar5 - uVar4) / uVar8;
      uVar5 = param_1 & 0xffff | ((uVar5 - uVar4) - uVar8 * uVar6) * 0x10000;
      uVar8 = uVar6 * (param_3 & 0xffff);
      uVar4 = uVar6;
      if (uVar5 <= uVar8 && uVar8 - uVar5 != 0) {
        bVar11 = CARRY4(uVar5,param_3);
        uVar5 = uVar5 + param_3;
        uVar4 = uVar6 - 1;
        if ((bVar11 == false) && (uVar5 <= uVar8 && uVar8 - uVar5 != 0)) {
          uVar4 = uVar6 - 2;
          uVar5 = uVar5 + param_3;
        }
      }
      uVar5 = uVar5 - uVar8;
      uVar4 = uVar4 | uVar3 << 0x10;
      uVar3 = 0;
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      iVar10 = LZCOUNT(param_3);
      if (iVar10 == 0) {
        param_2 = param_2 - param_3;
        uVar5 = param_3 >> 0x10;
        uVar9 = param_3 & 0xffff;
        uVar3 = 1;
      }
      else {
        param_3 = param_3 << iVar10;
        uVar5 = param_3 >> 0x10;
        uVar4 = param_2 >> (0x20U - iVar10 & 0xff);
        uVar7 = param_1 >> (0x20U - iVar10 & 0xff) | param_2 << iVar10;
        uVar3 = uVar4 / uVar5;
        uVar9 = param_3 & 0xffff;
        uVar8 = uVar7 >> 0x10 | (uVar4 - uVar5 * uVar3) * 0x10000;
        uVar6 = uVar3 * uVar9;
        param_1 = param_1 << iVar10;
        uVar4 = uVar3;
        if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
          bVar11 = CARRY4(uVar8,param_3);
          uVar8 = uVar8 + param_3;
          uVar4 = uVar3 - 1;
          if ((bVar11 == false) && (uVar8 <= uVar6 && uVar6 - uVar8 != 0)) {
            uVar4 = uVar3 - 2;
            uVar8 = uVar8 + param_3;
          }
        }
        uVar2 = (uVar8 - uVar6) / uVar5;
        param_2 = uVar7 & 0xffff | ((uVar8 - uVar6) - uVar5 * uVar2) * 0x10000;
        uVar6 = uVar2 * uVar9;
        uVar3 = uVar2;
        if (param_2 <= uVar6 && uVar6 - param_2 != 0) {
          bVar11 = CARRY4(param_2,param_3);
          param_2 = param_2 + param_3;
          uVar3 = uVar2 - 1;
          if ((bVar11 == false) && (param_2 <= uVar6 && uVar6 - param_2 != 0)) {
            uVar3 = uVar2 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar6;
        uVar3 = uVar3 | uVar4 << 0x10;
      }
      uVar7 = param_2 / uVar5;
      uVar8 = param_1 >> 0x10 | (param_2 - uVar5 * uVar7) * 0x10000;
      uVar4 = uVar9 * uVar7;
      uVar6 = uVar7;
      if (uVar8 <= uVar4 && uVar4 - uVar8 != 0) {
        bVar11 = CARRY4(uVar8,param_3);
        uVar8 = uVar8 + param_3;
        uVar6 = uVar7 - 1;
        if ((bVar11 == false) && (uVar8 <= uVar4 && uVar4 - uVar8 != 0)) {
          uVar6 = uVar7 - 2;
          uVar8 = uVar8 + param_3;
        }
      }
      uVar7 = (uVar8 - uVar4) / uVar5;
      uVar5 = param_1 & 0xffff | ((uVar8 - uVar4) - uVar5 * uVar7) * 0x10000;
      uVar9 = uVar9 * uVar7;
      uVar4 = uVar7;
      if (uVar5 <= uVar9 && uVar9 - uVar5 != 0) {
        bVar11 = CARRY4(uVar5,param_3);
        uVar5 = uVar5 + param_3;
        uVar4 = uVar7 - 1;
        if ((bVar11 == false) && (uVar5 <= uVar9 && uVar9 - uVar5 != 0)) {
          uVar4 = uVar7 - 2;
          uVar5 = uVar5 + param_3;
        }
      }
      uVar5 = uVar5 - uVar9;
      uVar4 = uVar4 | uVar6 << 0x10;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar5 >> iVar10;
      param_5[1] = 0;
      return CONCAT44(uVar3,uVar4);
    }
  }
  else if (param_2 < param_4) {
    if (param_5 != (uint *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
      return 0;
    }
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    iVar10 = LZCOUNT(param_4);
    if (iVar10 != 0) {
      uVar8 = 0x20 - iVar10;
      uVar3 = param_3 >> (uVar8 & 0xff) | param_4 << iVar10;
      uVar9 = uVar3 >> 0x10;
      uVar4 = param_2 >> (uVar8 & 0xff);
      uVar2 = param_1 >> (uVar8 & 0xff) | param_2 << iVar10;
      uVar7 = uVar4 / uVar9;
      uVar6 = uVar2 >> 0x10 | (uVar4 - uVar9 * uVar7) * 0x10000;
      uVar5 = uVar7 * (uVar3 & 0xffff);
      param_1 = param_1 << iVar10;
      uVar4 = uVar7;
      if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
        bVar11 = CARRY4(uVar6,uVar3);
        uVar6 = uVar6 + uVar3;
        uVar4 = uVar7 - 1;
        if ((bVar11 == false) && (uVar6 <= uVar5 && uVar5 - uVar6 != 0)) {
          uVar4 = uVar7 - 2;
          uVar6 = uVar6 + uVar3;
        }
      }
      uVar7 = (uVar6 - uVar5) / uVar9;
      uVar6 = uVar2 & 0xffff | ((uVar6 - uVar5) - uVar9 * uVar7) * 0x10000;
      uVar9 = uVar7 * (uVar3 & 0xffff);
      uVar5 = uVar7;
      if (uVar6 <= uVar9 && uVar9 - uVar6 != 0) {
        bVar11 = CARRY4(uVar6,uVar3);
        uVar6 = uVar6 + uVar3;
        uVar5 = uVar7 - 1;
        if ((bVar11 == false) && (uVar6 <= uVar9 && uVar9 - uVar6 != 0)) {
          uVar5 = uVar7 - 2;
          uVar6 = uVar6 + uVar3;
        }
      }
      uVar5 = uVar5 | uVar4 << 0x10;
      uVar1 = (ulonglong)uVar5 * (ulonglong)(param_3 << iVar10);
      if (CONCAT44(uVar6 - uVar9,param_1) < uVar1) {
        uVar1 = uVar1 - CONCAT44(uVar3,param_3 << iVar10);
        uVar5 = uVar5 - 1;
      }
      if (param_5 != (uint *)0x0) {
        uVar4 = ((uVar6 - uVar9) - (int)(uVar1 >> 0x20)) - (uint)(param_1 < (uint)uVar1);
        *param_5 = uVar4 << (uVar8 & 0xff) | param_1 - (uint)uVar1 >> iVar10;
        param_5[1] = uVar4 >> iVar10;
      }
      return (ulonglong)uVar5;
    }
    if ((param_4 < param_2) || (param_3 <= param_1)) {
      bVar11 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = (param_2 - param_4) - (uint)bVar11;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    uVar3 = 0;
    if (param_5 != (uint *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
      return (ulonglong)uVar4;
    }
  }
  return CONCAT44(uVar3,uVar4);
}


////>>0x080005dc>>__aeabi_idiv0>>////

void __aeabi_idiv0(void)

{
  return;
}


////>>0x080005e0>>aflCall>>////

/* WARNING: Unknown calling convention */

uint32_t aflCall(uint32_t a0,uint32_t a1,int32_t a2)

{
  software_interrupt(0x3f);
  return a0;
}


////>>0x080005e4>>startForkserver>>////

/* WARNING: Unknown calling convention */

int startForkserver(int ticks)

{
  uint32_t uVar1;
  
  if (noHyperCall != 0) {
    return 0;
  }
  uVar1 = aflCall(1,ticks,0);
  return uVar1;
}


////>>0x08000600>>begin>>////

/* DWARF original prototype: void  begin(Modbus * this, long u32speed) */

void __thiscall Modbus::begin(Modbus *this,long u32speed)

{
  uint8_t uVar1;
  int iVar2;
  
  uVar1 = this->u8serno;
  if (uVar1 == '\x02') {
    this->port = &Serial3;
  }
  else if (uVar1 == '\x03') {
    this->port = &Serial3;
  }
  else if (uVar1 == '\x01') {
    this->port = &Serial3;
  }
  else {
    this->port = &Serial3;
  }
  HardwareSerial::begin(this->port,u32speed,'\x06');
  if (1 < this->u8txenpin) {
    pinMode((uint)this->u8txenpin,1);
    digitalWrite((uint)this->u8txenpin,0);
  }
  do {
    iVar2 = (*(this->port->super_Stream).super_Print._vptr_Print[3])();
  } while (-1 < iVar2);
  this->u8BufferSize = '\0';
  this->u8lastRec = '\0';
  this->u16errCnt = 0;
  this->u16OutCnt = 0;
  this->u16InCnt = 0;
  return;
}


////>>0x0800066c>>init>>////

/* DWARF original prototype: void  init(Modbus * this, uint8_t u8id, uint8_t u8serno, uint8_t
   u8txenpin) */

int __thiscall Modbus::init(Modbus *this,EVP_PKEY_CTX *ctx)

{
  int in_r2;
  uint8_t in_r3;
  
  this->u8id = (uint8_t)ctx;
  if (3 < in_r2) {
    in_r2 = 0;
  }
  this->u8serno = (uint8_t)in_r2;
  this->u8txenpin = in_r3;
  this->u16timeOut = 1000;
  return (int)this;
}


////>>0x08000682>>Modbus>>////

/* DWARF original prototype: Modbus *  Modbus(Modbus * this, uint8_t u8id, uint8_t u8serno, uint8_t
   u8txenpin) */

Modbus * __thiscall Modbus::Modbus(Modbus *this,uint8_t u8id,uint8_t u8serno,uint8_t u8txenpin)

{
  init(this,(EVP_PKEY_CTX *)(uint)u8id);
  return this;
}


////>>0x08000690>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if (__initialize_p != 1) {
    return;
  }
  if (__priority == 0xffff) {
    Modbus::Modbus(&slave,'\x01','\0','\0');
  }
  return;
}


////>>0x080006b4>>getRxBuffer>>////

/* DWARF original prototype: int8_t  getRxBuffer(Modbus * this) */

int8_t __thiscall Modbus::getRxBuffer(Modbus *this)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  if (1 < this->u8txenpin) {
    digitalWrite((uint)this->u8txenpin,0);
  }
  this->u8BufferSize = '\0';
  if (this->u8serno < 4) {
    bVar1 = false;
    while (iVar2 = (*(this->port->super_Stream).super_Print._vptr_Print[2])(), iVar2 != 0) {
      bVar3 = this->u8BufferSize;
      iVar2 = (*(this->port->super_Stream).super_Print._vptr_Print[3])();
      this->au8Buffer[bVar3] = (uint8_t)iVar2;
      bVar3 = this->u8BufferSize + 1;
      this->u8BufferSize = bVar3;
      if (0x3f < bVar3) {
        bVar1 = true;
      }
    }
  }
  else {
    bVar1 = false;
  }
  this->u16InCnt = this->u16InCnt + 1;
  if (bVar1) {
    this->u16errCnt = this->u16errCnt + 1;
    return -3;
  }
  return this->u8BufferSize;
}


////>>0x08000728>>calcCRC>>////

/* DWARF original prototype: uint16_t  calcCRC(Modbus * this, uint8_t u8length) */

uint16_t __thiscall Modbus::calcCRC(Modbus *this,uint8_t u8length)

{
  uchar j;
  uint uVar1;
  uint flag;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0xffff;
  for (uVar3 = 0; uVar3 < u8length; uVar3 = uVar3 + 1 & 0xff) {
    uVar1 = uVar1 ^ this->au8Buffer[uVar3];
    for (j = 1; j < 9; j = j + 1) {
      uVar2 = uVar1 & 1;
      uVar1 = uVar1 >> 1;
      if (uVar2 != 0) {
        uVar1 = uVar1 ^ 0xa001;
      }
    }
  }
  return (ushort)(uVar1 << 8) | (ushort)(uVar1 >> 8);
}


////>>0x0800076c>>sendTxBuffer>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080007ec */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void  sendTxBuffer(Modbus * this) */

void __thiscall Modbus::sendTxBuffer(Modbus *this)

{
  byte u8length;
  uint16_t uVar1;
  uint16_t u16crc;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  
  u8length = this->u8BufferSize;
  uVar1 = calcCRC(this,u8length);
  this->au8Buffer[u8length] = (uint8_t)(uVar1 >> 8);
  uVar4 = u8length + 1 & 0xff;
  this->au8Buffer[uVar4] = (uint8_t)uVar1;
  this->u8BufferSize = (char)uVar4 + '\x01';
  if (1 < this->u8txenpin) {
    digitalWrite((uint)this->u8txenpin,1);
  }
  if (this->u8serno < 4) {
    (*(this->port->super_Stream).super_Print._vptr_Print[1])
              (this->port,this->au8Buffer,(uint)this->u8BufferSize);
  }
  if (1 < this->u8txenpin) {
    digitalWrite((uint)this->u8txenpin,0);
  }
  if (this->u8serno < 4) {
    do {
      iVar2 = (*(this->port->super_Stream).super_Print._vptr_Print[3])();
    } while (-1 < iVar2);
  }
  this->u8BufferSize = '\0';
  uVar3 = millis();
  this->u32timeOut = uVar3 + this->u16timeOut;
  this->u16OutCnt = this->u16OutCnt + 1;
  return;
}


////>>0x080007f0>>validateRequest>>////

/* DWARF original prototype: uint8_t  validateRequest(Modbus * this) */

uint8_t __thiscall Modbus::validateRequest(Modbus *this)

{
  bool bVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uint uVar4;
  uint8_t u8regs;
  
  uVar4 = 0;
  do {
    if (7 < uVar4) {
      bVar1 = false;
LAB_0800080a:
      if (!bVar1) {
        this->u16errCnt = this->u16errCnt + 1;
        return '\x01';
      }
      switch(this->au8Buffer[1]) {
      case '\x01':
      case '\x02':
      case '\x0f':
        goto switchD_08000816_caseD_1;
      case '\x03':
      case '\x04':
      case '\x10':
        uVar2 = makeWord(this->au8Buffer[2],this->au8Buffer[3]);
        uVar3 = makeWord(this->au8Buffer[4],this->au8Buffer[5]);
        if (this->u8regsize < (byte)((char)uVar3 + (char)uVar2)) {
          return '\x02';
        }
        return '\0';
      case '\x05':
        uVar2 = makeWord(this->au8Buffer[2],this->au8Buffer[3]);
        if ((uint)this->u8regsize < ((uint)uVar2 << 0x14) >> 0x18) {
          return '\x02';
        }
        return '\0';
      case '\x06':
        uVar2 = makeWord(this->au8Buffer[2],this->au8Buffer[3]);
        if (this->u8regsize < (byte)uVar2) {
          return '\x02';
        }
        return '\0';
      default:
        return '\0';
      }
    }
    if ("\x01\x02\x03\x04\x05\x06\x0f\x10"[uVar4] == this->au8Buffer[1]) {
      bVar1 = true;
      goto LAB_0800080a;
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while( true );
switchD_08000816_caseD_1:
  uVar2 = makeWord(this->au8Buffer[2],this->au8Buffer[3]);
  uVar3 = makeWord(this->au8Buffer[4],this->au8Buffer[5]);
  if ((uint)this->u8regsize <
      ((((uint)uVar2 << 0xc) >> 0x10) + (((uint)uVar3 << 0xc) >> 0x10) & 0xff)) {
    return '\x02';
  }
  return '\0';
}


////>>0x080008cc>>buildException>>////

/* DWARF original prototype: void  buildException(Modbus * this, uint8_t u8exception) */

void __thiscall Modbus::buildException(Modbus *this,uint8_t u8exception)

{
  byte bVar1;
  uint8_t u8func;
  
  bVar1 = this->au8Buffer[1];
  this->au8Buffer[0] = this->u8id;
  this->au8Buffer[1] = bVar1 ^ 0x80;
  this->au8Buffer[2] = u8exception;
  this->u8BufferSize = '\x03';
  return;
}


////>>0x080008e2>>process_FC1>>////

/* DWARF original prototype: int8_t  process_FC1(Modbus * this, uint16_t * regs, uint8_t u8size) */

int8_t __thiscall Modbus::process_FC1(Modbus *this,uint16_t *regs,uint8_t u8size)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint16_t u16Coilno;
  uint uVar3;
  uint uVar4;
  uint8_t uVar5;
  uint8_t u8bytesno;
  uint8_t u8CopyBufferSize;
  uint16_t u16StartCoil;
  
  uVar1 = makeWord(this->au8Buffer[2],this->au8Buffer[3]);
  uVar2 = makeWord(this->au8Buffer[4],this->au8Buffer[5]);
  uVar5 = (uint8_t)(((uint)uVar2 << 0x15) >> 0x18);
  if ((uVar2 & 7) != 0) {
    uVar5 = uVar5 + '\x01';
  }
  this->au8Buffer[2] = uVar5;
  this->u8BufferSize = '\x03';
  uVar4 = 0;
  for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1 & 0xffff) {
    if (((int)(uint)regs[(uVar3 + uVar1) * 0x100000 >> 0x18] >> (uVar3 + uVar1 & 0xf) & 1U) == 0) {
      this->au8Buffer[this->u8BufferSize] =
           this->au8Buffer[this->u8BufferSize] & ~(byte)(1 << uVar4);
    }
    else {
      this->au8Buffer[this->u8BufferSize] = this->au8Buffer[this->u8BufferSize] | (byte)(1 << uVar4)
      ;
    }
    uVar4 = uVar4 + 1 & 0xff;
    if (7 < uVar4) {
      this->u8BufferSize = this->u8BufferSize + '\x01';
      uVar4 = 0;
    }
  }
  if ((uVar2 & 7) != 0) {
    this->u8BufferSize = this->u8BufferSize + '\x01';
  }
  uVar5 = this->u8BufferSize;
  sendTxBuffer(this);
  return uVar5 + '\x02';
}


////>>0x08000998>>process_FC3>>////

/* DWARF original prototype: int8_t  process_FC3(Modbus * this, uint16_t * regs, uint8_t u8size) */

int8_t __thiscall Modbus::process_FC3(Modbus *this,uint16_t *regs,uint8_t u8size)

{
  byte bVar1;
  uint8_t uVar2;
  uint8_t u8regsno;
  uint16_t uVar3;
  uint16_t uVar4;
  uint uVar5;
  uint uVar6;
  uint8_t u8CopyBufferSize;
  uint8_t u8StartAdd;
  uint8_t i;
  
  uVar3 = makeWord(this->au8Buffer[2],this->au8Buffer[3]);
  uVar4 = makeWord(this->au8Buffer[4],this->au8Buffer[5]);
  this->au8Buffer[2] = (byte)uVar4 << 1;
  this->u8BufferSize = '\x03';
  for (uVar5 = (uint)(byte)uVar3; uVar5 < (uint)(byte)uVar3 + (uint)(byte)uVar4;
      uVar5 = uVar5 + 1 & 0xff) {
    bVar1 = this->u8BufferSize;
    this->au8Buffer[bVar1] = (uint8_t)(regs[uVar5] >> 8);
    uVar6 = bVar1 + 1 & 0xff;
    uVar2 = (uint8_t)uVar6;
    this->u8BufferSize = uVar2;
    this->au8Buffer[uVar6] = *(uint8_t *)(regs + uVar5);
    this->u8BufferSize = uVar2 + '\x01';
  }
  uVar2 = this->u8BufferSize;
  sendTxBuffer(this);
  return uVar2 + '\x02';
}


////>>0x08000a00>>process_FC5>>////

/* DWARF original prototype: int8_t  process_FC5(Modbus * this, uint16_t * regs, uint8_t u8size) */

int8_t __thiscall Modbus::process_FC5(Modbus *this,uint16_t *regs,uint8_t u8size)

{
  uint8_t u8currentBit;
  uint16_t uVar1;
  uint16_t u16coil;
  uint uVar2;
  uint8_t u8currentRegister;
  uint uVar3;
  
  uVar1 = makeWord(this->au8Buffer[2],this->au8Buffer[3]);
  uVar3 = ((uint)uVar1 << 0x14) >> 0x18;
  uVar2 = uVar1 & 0xf;
  if (this->au8Buffer[4] == 0xff) {
    regs[uVar3] = (ushort)(1 << uVar2) | regs[uVar3];
  }
  else {
    regs[uVar3] = regs[uVar3] & ~(ushort)(1 << uVar2);
  }
  this->u8BufferSize = '\x06';
  sendTxBuffer(this);
  return '\b';
}


////>>0x08000a4e>>process_FC6>>////

/* DWARF original prototype: int8_t  process_FC6(Modbus * this, uint16_t * regs, uint8_t u8size) */

int8_t __thiscall Modbus::process_FC6(Modbus *this,uint16_t *regs,uint8_t u8size)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint16_t u16val;
  uint8_t u8add;
  
  uVar1 = makeWord(this->au8Buffer[2],this->au8Buffer[3]);
  uVar2 = makeWord(this->au8Buffer[4],this->au8Buffer[5]);
  regs[(byte)uVar1] = uVar2;
  this->u8BufferSize = '\x06';
  sendTxBuffer(this);
  return '\b';
}


////>>0x08000a7a>>process_FC15>>////

/* DWARF original prototype: int8_t  process_FC15(Modbus * this, uint16_t * regs, uint8_t u8size) */

int8_t __thiscall Modbus::process_FC15(Modbus *this,uint16_t *regs,uint8_t u8size)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint16_t u16Coilno;
  uint uVar3;
  uint uVar4;
  uint8_t u8currentBit;
  uint uVar5;
  uint16_t u16StartCoil;
  uint8_t u8currentRegister;
  uint uVar6;
  uint uVar7;
  
  uVar1 = makeWord(this->au8Buffer[2],this->au8Buffer[3]);
  uVar2 = makeWord(this->au8Buffer[4],this->au8Buffer[5]);
  uVar4 = 0;
  uVar7 = 7;
  for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1 & 0xffff) {
    uVar6 = (uVar3 + uVar1) * 0x100000 >> 0x18;
    uVar5 = uVar3 + uVar1 & 0xf;
    if (((int)(uint)this->au8Buffer[uVar7] >> uVar4 & 1U) == 0) {
      regs[uVar6] = regs[uVar6] & ~(ushort)(1 << uVar5);
    }
    else {
      regs[uVar6] = (ushort)(1 << uVar5) | regs[uVar6];
    }
    uVar4 = uVar4 + 1 & 0xff;
    if (7 < uVar4) {
      uVar7 = uVar7 + 1 & 0xff;
      uVar4 = 0;
    }
  }
  this->u8BufferSize = '\x06';
  sendTxBuffer(this);
  return '\b';
}


////>>0x08000b04>>process_FC16>>////

/* DWARF original prototype: int8_t  process_FC16(Modbus * this, uint16_t * regs, uint8_t u8size) */

int8_t __thiscall Modbus::process_FC16(Modbus *this,uint16_t *regs,uint8_t u8size)

{
  byte bVar1;
  byte bVar2;
  uint8_t uVar3;
  uint16_t uVar4;
  uint16_t temp;
  uint8_t u8CopyBufferSize;
  uint8_t i;
  uint uVar5;
  uint8_t u8regsno;
  uint8_t u8StartAdd;
  
  bVar1 = this->au8Buffer[3];
  bVar2 = this->au8Buffer[5];
  this->au8Buffer[4] = '\0';
  this->au8Buffer[5] = bVar2;
  this->u8BufferSize = '\x06';
  for (uVar5 = 0; uVar5 < bVar2; uVar5 = uVar5 + 1 & 0xff) {
    uVar4 = makeWord(this->au8Buffer[uVar5 * 2 + 7],this->au8Buffer[uVar5 * 2 + 8]);
    regs[bVar1 + uVar5] = uVar4;
  }
  uVar3 = this->u8BufferSize;
  sendTxBuffer(this);
  return uVar3 + '\x02';
}


////>>0x08000b54>>poll>>////

/* DWARF original prototype: int8_t  poll(Modbus * this, uint16_t * regs, uint8_t u8size) */

int __thiscall Modbus::poll(Modbus *this,pollfd *__fds,nfds_t __nfds,int __timeout)

{
  uint8_t u8size;
  uint8_t uVar1;
  int8_t i8state;
  uint8_t u8exception;
  int8_t iVar2;
  uint uVar3;
  uint32_t uVar4;
  uint8_t u8current;
  uint unaff_r5;
  int iVar5;
  
  this->au16regs = (uint16_t *)__fds;
  u8size = (uint8_t)__nfds;
  this->u8regsize = u8size;
  if (this->u8serno < 4) {
    uVar3 = (*(this->port->super_Stream).super_Print._vptr_Print[2])();
    unaff_r5 = uVar3 & 0xff;
  }
  if (unaff_r5 == 0) {
    iVar5 = 0;
  }
  else if ((int)unaff_r5 < 8) {
    iVar5 = 0;
  }
  else {
    uVar1 = getRxBuffer(this);
    iVar5 = (int)(char)uVar1;
    this->u8lastError = uVar1;
    if (this->au8Buffer[0] == this->u8id) {
      uVar1 = validateRequest(this);
      if (uVar1 == '\0') {
        uVar4 = millis();
        this->u32timeOut = this->u16timeOut + uVar4;
        this->u8lastError = '\0';
        switch(this->au8Buffer[1]) {
        case '\x01':
        case '\x02':
          iVar2 = process_FC1(this,(uint16_t *)__fds,u8size);
          iVar5 = (int)iVar2;
          break;
        case '\x03':
        case '\x04':
          iVar2 = process_FC3(this,(uint16_t *)__fds,u8size);
          iVar5 = (int)iVar2;
          break;
        case '\x05':
          iVar2 = process_FC5(this,(uint16_t *)__fds,u8size);
          iVar5 = (int)iVar2;
          break;
        case '\x06':
          iVar2 = process_FC6(this,(uint16_t *)__fds,u8size);
          iVar5 = (int)iVar2;
          break;
        case '\x0f':
          iVar2 = process_FC15(this,(uint16_t *)__fds,u8size);
          iVar5 = (int)iVar2;
          break;
        case '\x10':
          iVar2 = process_FC16(this,(uint16_t *)__fds,u8size);
          iVar5 = (int)iVar2;
        }
      }
      else {
        if (uVar1 != 0xff) {
          buildException(this,uVar1);
          sendTxBuffer(this);
        }
        this->u8lastError = uVar1;
        iVar5 = (int)(char)uVar1;
      }
    }
    else {
      iVar5 = 0;
    }
  }
  return iVar5;
}


////>>0x08000c4c>>setup>>////

/* WARNING: Unknown calling convention */

void setup(void)

{
  startForkserver(0);
  Modbus::begin(&slave,0x4b00);
  return;
}


////>>0x08000c64>>loop>>////

/* WARNING: Unknown calling convention */

void loop(void)

{
  int in_r3;
  
  Modbus::poll(&slave,(pollfd *)au16data,0x10,in_r3);
  return;
}


////>>0x08000c7c>>_GLOBAL__sub_I__ZN6ModbusC2Ev>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__ZN6ModbusC2Ev(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x08000c8c>>SystemClock_Config>>////


/* WARNING: Unknown calling convention */

void SystemClock_Config(void)

{
  uint32_t uVar1;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  
  _DAT_40023840 = _DAT_40023840 | 0x10000000;
  _DAT_40007000 = _DAT_40007000 | 0xc000;
  RCC_OscInitStruct.OscillatorType = 1;
  RCC_OscInitStruct.HSEState = 0x50000;
  RCC_OscInitStruct.PLL.PLLState = 2;
  RCC_OscInitStruct.PLL.PLLSource = 0x400000;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 0x150;
  RCC_OscInitStruct.PLL.PLLP = 2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  HAL_RCC_OscConfig((RCC_OscInitTypeDef_conflict *)&RCC_OscInitStruct);
  HAL_PWREx_EnableOverDrive();
  RCC_ClkInitStruct.ClockType = 0xf;
  RCC_ClkInitStruct.SYSCLKSource = 2;
  RCC_ClkInitStruct.AHBCLKDivider = 0;
  RCC_ClkInitStruct.APB1CLKDivider = 0x1400;
  RCC_ClkInitStruct.APB2CLKDivider = 0x1000;
  HAL_RCC_ClockConfig((RCC_ClkInitTypeDef_conflict *)&RCC_ClkInitStruct,5);
  uVar1 = HAL_RCC_GetHCLKFreq();
  HAL_SYSTICK_Config(uVar1 / 1000);
  HAL_SYSTICK_CLKSourceConfig(4);
  HAL_NVIC_SetPriority(SysTick_IRQn,0,0);
  return;
}


////>>0x08000d3c>>Reset_Handler>>////

/* WARNING: This function may have set the stack pointer */

void Reset_Handler(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &completed_8667; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(&_sidata + iVar1);
  }
  for (puVar2 = &completed_8667; puVar2 < &_ebss; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  SystemInit();
  __libc_init_array();
  UNRECOVERED_JUMPTABLE = (code *)0x8000d72;
  main();
                    /* WARNING: Could not recover jumptable at 0x08000d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08000d8c>>CAN2_SCE_IRQHandler>>////

void CAN2_SCE_IRQHandler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08000d8e>>init>>////

int init(EVP_PKEY_CTX *ctx)

{
  hw_config_init();
  return (int)ctx;
}


////>>0x08000d96>>HAL_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_MspInit(void)

{
  return;
}


////>>0x08000d98>>HAL_InitTick>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)

{
  uint32_t uVar1;
  
  uVar1 = HAL_SYSTICK_Config((uint32_t)((ulonglong)SystemCoreClock / (1000 / (ulonglong)uwTickFreq))
                            );
  if (uVar1 != 0) {
    return HAL_ERROR;
  }
  if (0xf < TickPriority) {
    return HAL_ERROR;
  }
  HAL_NVIC_SetPriority(SysTick_IRQn,TickPriority,0);
  uwTickPrio = TickPriority;
  return HAL_OK;
}


////>>0x08000de4>>HAL_Init>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_Init(void)

{
  _DAT_40023c00 = _DAT_40023c00 | 0x700;
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_InitTick(0xf);
  HAL_MspInit();
  return HAL_OK;
}


////>>0x08000e18>>HAL_IncTick>>////

/* WARNING: Unknown calling convention */

void HAL_IncTick(void)

{
  uwTick = uwTickFreq + uwTick;
  return;
}


////>>0x08000e30>>HAL_GetTick>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_GetTick(void)

{
  return uwTick;
}


////>>0x08000e3c>>HAL_NVIC_SetPriorityGrouping>>////


/* WARNING: Unknown calling convention */

void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup)

{
  uint32_t reg_value;
  
  _DAT_e000ed0c = (PriorityGroup & 7) << 8 | _DAT_e000ed0c & 0xf8ff | 0x5fa0000;
  return;
}


////>>0x08000e60>>HAL_NVIC_SetPriority>>////


/* WARNING: Unknown calling convention */

void HAL_NVIC_SetPriority(IRQn_Type_conflict IRQn,uint32_t PreemptPriority,uint32_t SubPriority)

{
  uint uVar1;
  uint uVar2;
  uint32_t PriorityGroupTmp;
  uint32_t SubPriorityBits;
  uint32_t PreemptPriorityBits;
  
  uVar1 = (uint)IRQn;
  uVar2 = (uint)(_DAT_e000ed0c << 0x15) >> 0x1d;
  PreemptPriorityBits = 7 - uVar2;
  if (3 < PreemptPriorityBits) {
    PreemptPriorityBits = 4;
  }
  if (uVar2 + 4 < 7) {
    SubPriorityBits = 0;
  }
  else {
    SubPriorityBits = uVar2 - 3;
  }
  uVar2 = (PreemptPriority & (1 << (PreemptPriorityBits & 0xff)) - 1U) << (SubPriorityBits & 0xff) |
          (1 << (SubPriorityBits & 0xff)) - 1U & SubPriority;
  if ((int)uVar1 < 0) {
    *(char *)((uVar1 & 0xf) + 0xe000ed14) = (char)(uVar2 << 4);
  }
  else {
    *(char *)(uVar1 + 0xe000e400) = (char)(uVar2 << 4);
  }
  return;
}


////>>0x08000ec4>>HAL_NVIC_EnableIRQ>>////

/* WARNING: Unknown calling convention */

void HAL_NVIC_EnableIRQ(IRQn_Type_conflict IRQn)

{
  uint uVar1;
  
  uVar1 = (uint)IRQn;
  if (-1 < (int)uVar1) {
    *(int *)((uVar1 >> 5) * 4 + -0x1fff1f00) = 1 << (uVar1 & 0x1f);
  }
  return;
}


////>>0x08000ee0>>HAL_SYSTICK_Config>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb)

{
  if (TicksNumb - 1 < 0x1000000) {
    _DAT_e000e014 = TicksNumb - 1;
    DAT_e000ed23 = 0xf0;
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
    return 0;
  }
  return 1;
}


////>>0x08000f0c>>HAL_NVIC_ClearPendingIRQ>>////

/* WARNING: Unknown calling convention */

void HAL_NVIC_ClearPendingIRQ(IRQn_Type_conflict IRQn)

{
  uint uVar1;
  
  uVar1 = (uint)IRQn;
  if (-1 < (int)uVar1) {
    *(int *)(((uVar1 >> 5) + 0x60) * 4 + -0x1fff1f00) = 1 << (uVar1 & 0x1f);
  }
  return;
}


////>>0x08000f2c>>HAL_SYSTICK_CLKSourceConfig>>////


/* WARNING: Unknown calling convention */

void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource)

{
  if (CLKSource != 4) {
    _DAT_e000e010 = _DAT_e000e010 & 0xfffffffb;
    return;
  }
  _DAT_e000e010 = _DAT_e000e010 | 4;
  return;
}


////>>0x08000f4c>>HAL_SYSTICK_Callback>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_Callback(void)

{
  return;
}


////>>0x08000f4e>>HAL_SYSTICK_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_IRQHandler(void)

{
  HAL_SYSTICK_Callback();
  return;
}


////>>0x08000f56>>HAL_DAC_DeInit>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_DAC_DeInit(DAC_HandleTypeDef *hdac)

{
  if (hdac != (DAC_HandleTypeDef *)0x0) {
    hdac->State = HAL_DAC_STATE_BUSY;
    HAL_DAC_MspDeInit(hdac);
    hdac->ErrorCode = 0;
    hdac->State = HAL_DAC_STATE_RESET;
    hdac->Lock = HAL_UNLOCKED;
    return HAL_OK;
  }
  return HAL_ERROR;
}


////>>0x08000f72>>HAL_DAC_Stop>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_DAC_Stop(DAC_HandleTypeDef *hdac,uint32_t Channel)

{
  hdac->Instance->CR = hdac->Instance->CR & ~(1 << (Channel & 0xff));
  hdac->State = HAL_DAC_STATE_READY;
  return HAL_OK;
}


////>>0x08000f8c>>HAL_DMA_Abort_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_DMA_Abort_IT(DMA_HandleTypeDef *hdma)

{
  if (hdma->State != HAL_DMA_STATE_BUSY) {
    hdma->ErrorCode = 0x80;
    return HAL_ERROR;
  }
  hdma->State = HAL_DMA_STATE_ABORT;
  hdma->Instance->CR = hdma->Instance->CR & 0xfffffffe;
  return HAL_OK;
}


////>>0x08000fb4>>HAL_GPIO_Init>>////


/* WARNING: Unknown calling convention */

void HAL_GPIO_Init(GPIO_TypeDef *GPIOx,GPIO_InitTypeDef *GPIO_Init)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint32_t tmpreg;
  
  for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
    uVar2 = 1 << (uVar3 & 0xff);
    uVar4 = uVar2 & GPIO_Init->Pin;
    uVar1 = _DAT_40013c0c;
    if (uVar2 == uVar4) {
      if ((GPIO_Init->Mode == 2) || (GPIO_Init->Mode == 0x12)) {
        iVar9 = (uVar3 & 7) << 2;
        GPIOx->AFR[uVar3 >> 3] =
             GPIOx->AFR[uVar3 >> 3] & ~(0xf << iVar9) | GPIO_Init->Alternate << iVar9;
      }
      uVar8 = uVar3 << 1;
      uVar1 = ~(3 << (uVar8 & 0xff));
      GPIOx->MODER = GPIOx->MODER & uVar1 | (GPIO_Init->Mode & 3) << (uVar8 & 0xff);
      uVar6 = GPIO_Init->Mode;
      if (((uVar6 - 1 < 2) || (uVar6 == 0x11)) || (uVar6 == 0x12)) {
        GPIOx->OSPEEDR = GPIOx->OSPEEDR & uVar1 | GPIO_Init->Speed << (uVar8 & 0xff);
        GPIOx->OTYPER =
             GPIOx->OTYPER & ~uVar2 | ((GPIO_Init->Mode << 0x1b) >> 0x1f) << (uVar3 & 0xff);
      }
      GPIOx->PUPDR = uVar1 & GPIOx->PUPDR | GPIO_Init->Pull << (uVar8 & 0xff);
      uVar1 = _DAT_40013c0c;
      if ((GPIO_Init->Mode & 0x10000000) != 0) {
        _DAT_40023844 = _DAT_40023844 | 0x4000;
        iVar9 = (uVar3 & 3) << 2;
        if (GPIOx == (GPIO_TypeDef *)0x40020000) {
          iVar7 = 0;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40020400) {
          iVar7 = 1;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40020800) {
          iVar7 = 2;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40020c00) {
          iVar7 = 3;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40021000) {
          iVar7 = 4;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40021400) {
          iVar7 = 5;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40021800) {
          iVar7 = 6;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40021c00) {
          iVar7 = 7;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40022000) {
          iVar7 = 8;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40022400) {
          iVar7 = 9;
        }
        else {
          iVar7 = 10;
        }
        *(uint *)(((uVar3 >> 2) + 2) * 4 + 0x40013800) =
             *(uint *)(((uVar3 >> 2) + 2) * 4 + 0x40013800) & ~(0xf << iVar9) | iVar7 << iVar9;
        uVar1 = ~uVar4;
        uVar2 = _DAT_40013c00 & uVar1;
        if ((GPIO_Init->Mode & 0x10000) != 0) {
          uVar2 = uVar4 | _DAT_40013c00;
        }
        uVar8 = uVar1 & _DAT_40013c04;
        if ((GPIO_Init->Mode & 0x20000) != 0) {
          uVar8 = uVar4 | _DAT_40013c04;
        }
        uVar5 = uVar1 & _DAT_40013c08;
        if ((GPIO_Init->Mode & 0x100000) != 0) {
          uVar5 = uVar4 | _DAT_40013c08;
        }
        _DAT_40013c00 = uVar2;
        _DAT_40013c04 = uVar8;
        _DAT_40013c08 = uVar5;
        uVar1 = uVar1 & _DAT_40013c0c;
        if ((GPIO_Init->Mode & 0x200000) != 0) {
          uVar1 = uVar4 | _DAT_40013c0c;
        }
      }
    }
    _DAT_40013c0c = uVar1;
  }
  return;
}


////>>0x08001198>>HAL_GPIO_WritePin>>////

/* WARNING: Unknown calling convention */

void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin,GPIO_PinState PinState)

{
  if (PinState == GPIO_PIN_RESET) {
    GPIOx->BSRR = (uint)GPIO_Pin << 0x10;
    return;
  }
  GPIOx->BSRR = (uint)GPIO_Pin;
  return;
}


////>>0x080011a4>>HAL_GPIO_EXTI_IRQHandler>>////


/* WARNING: Unknown calling convention */

void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin)

{
  if ((_DAT_40013c14 & GPIO_Pin) != 0) {
    _DAT_40013c14 = (uint)GPIO_Pin;
    HAL_GPIO_EXTI_Callback(GPIO_Pin);
  }
  return;
}


////>>0x080011c0>>I2C_Master_SB>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_Master_SB(I2C_HandleTypeDef *hi2c)

{
  if (hi2c->Mode == HAL_I2C_MODE_MEM) {
    if (hi2c->EventCount == 0) {
      hi2c->Instance->DR = hi2c->Devaddress & 0xfe;
    }
    else {
      hi2c->Instance->DR = hi2c->Devaddress & 0xff | 1;
    }
  }
  else if ((hi2c->Init).AddressingMode == 0x4000) {
    if (hi2c->State == HAL_I2C_STATE_BUSY_TX) {
      hi2c->Instance->DR = hi2c->Devaddress & 0xfe;
    }
    else {
      hi2c->Instance->DR = hi2c->Devaddress & 0xff | 1;
    }
  }
  else if (hi2c->EventCount == 0) {
    hi2c->Instance->DR = (hi2c->Devaddress << 0x10) >> 0x17 & 6 | 0xf0;
  }
  else if (hi2c->EventCount == 1) {
    hi2c->Instance->DR = (hi2c->Devaddress << 0x10) >> 0x17 & 6 | 0xf1;
  }
  return HAL_OK;
}


////>>0x0800124a>>I2C_Master_ADD10>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_Master_ADD10(I2C_HandleTypeDef *hi2c)

{
  hi2c->Instance->DR = hi2c->Devaddress & 0xff;
  return HAL_OK;
}


////>>0x08001256>>I2C_Master_ADDR>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_Master_ADDR(I2C_HandleTypeDef *hi2c)

{
  uint32_t CurrentXferOptions;
  uint32_t uVar1;
  I2C_TypeDef *pIVar2;
  uint32_t Prev_State;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_2;
  uint32_t tmpreg_3;
  uint32_t tmpreg_4;
  uint32_t tmpreg_5;
  uint32_t tmpreg_6;
  uint32_t tmpreg_7;
  uint32_t tmpreg_8;
  uint32_t tmpreg_9;
  
  uVar1 = hi2c->XferOptions;
  if ((hi2c->State == HAL_I2C_STATE_BUSY_RX) &&
     ((hi2c->EventCount != 0 || (hi2c->Mode != HAL_I2C_MODE_MEM)))) {
    if ((hi2c->EventCount == 0) && ((hi2c->Init).AddressingMode == 0xc000)) {
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
      hi2c->EventCount = hi2c->EventCount + 1;
    }
    else {
      if (hi2c->XferCount == 0) {
        hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
      }
      else if (hi2c->XferCount == 1) {
        if (uVar1 == 0xffff0000) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
          pIVar2 = hi2c->Instance;
          if ((pIVar2->CR2 & 0x800) == 0) {
            pIVar2->CR1 = pIVar2->CR1 | 0x200;
          }
          else {
            pIVar2->CR1 = pIVar2->CR1 & 0xfffffbff;
          }
        }
        else if (((uVar1 == 4) || (uVar1 == 8)) || (hi2c->PreviousState == 0x12)) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
        }
        else if (hi2c->XferOptions == 2) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
        }
        else {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
        }
      }
      else if (hi2c->XferCount == 2) {
        if (hi2c->XferOptions == 2) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
        }
        else {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x800;
        }
        pIVar2 = hi2c->Instance;
        if ((pIVar2->CR2 & 0x800) != 0) {
          pIVar2->CR2 = pIVar2->CR2 | 0x1000;
        }
      }
      else {
        hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
        pIVar2 = hi2c->Instance;
        if ((pIVar2->CR2 & 0x800) != 0) {
          pIVar2->CR2 = pIVar2->CR2 | 0x1000;
        }
      }
      hi2c->EventCount = 0;
    }
  }
  return HAL_OK;
}


////>>0x08001420>>I2C_SlaveTransmit_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_SlaveTransmit_BTF(I2C_HandleTypeDef *hi2c)

{
  byte *pbVar1;
  
  if (hi2c->XferCount != 0) {
    pbVar1 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = pbVar1 + 1;
    hi2c->Instance->DR = (uint)*pbVar1;
    hi2c->XferCount = hi2c->XferCount - 1;
  }
  return HAL_OK;
}


////>>0x08001440>>I2C_SlaveReceive_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_SlaveReceive_BTF(I2C_HandleTypeDef *hi2c)

{
  uint8_t *puVar1;
  
  if (hi2c->XferCount != 0) {
    puVar1 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar1 + 1;
    *puVar1 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
  }
  return HAL_OK;
}


////>>0x08001460>>HAL_I2C_Slave_Sequential_Transmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_I2C_Slave_Sequential_Transmit_IT
          (I2C_HandleTypeDef *hi2c,uint8_t *pData,uint16_t Size,uint32_t XferOptions)

{
  HAL_StatusTypeDef HVar1;
  I2C_TypeDef *pIVar2;
  uint32_t tmpreg;
  
  if (hi2c->State == HAL_I2C_STATE_LISTEN) {
    if (pData == (uint8_t *)0x0) {
      HVar1 = HAL_ERROR;
    }
    else if (Size == 0) {
      HVar1 = HAL_ERROR;
    }
    else if (hi2c->Lock == HAL_LOCKED) {
      HVar1 = HAL_BUSY;
    }
    else {
      hi2c->Lock = HAL_LOCKED;
      pIVar2 = hi2c->Instance;
      if ((pIVar2->CR1 & 1) == 0) {
        pIVar2->CR1 = pIVar2->CR1 | 1;
      }
      hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffff7ff;
      hi2c->State = HAL_I2C_STATE_BUSY_TX_LISTEN;
      hi2c->Mode = HAL_I2C_MODE_SLAVE;
      HVar1 = HAL_OK;
      hi2c->ErrorCode = 0;
      hi2c->pBuffPtr = pData;
      hi2c->XferCount = Size;
      hi2c->XferOptions = XferOptions;
      hi2c->XferSize = hi2c->XferCount;
      hi2c->Lock = HAL_UNLOCKED;
      hi2c->Instance->CR2 = hi2c->Instance->CR2 | 0x700;
    }
  }
  else {
    HVar1 = HAL_BUSY;
  }
  return HVar1;
}


////>>0x080014ec>>HAL_I2C_Slave_Sequential_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_I2C_Slave_Sequential_Receive_IT
          (I2C_HandleTypeDef *hi2c,uint8_t *pData,uint16_t Size,uint32_t XferOptions)

{
  HAL_StatusTypeDef HVar1;
  I2C_TypeDef *pIVar2;
  uint32_t tmpreg;
  
  if (hi2c->State == HAL_I2C_STATE_LISTEN) {
    if (pData == (uint8_t *)0x0) {
      HVar1 = HAL_ERROR;
    }
    else if (Size == 0) {
      HVar1 = HAL_ERROR;
    }
    else if (hi2c->Lock == HAL_LOCKED) {
      HVar1 = HAL_BUSY;
    }
    else {
      hi2c->Lock = HAL_LOCKED;
      pIVar2 = hi2c->Instance;
      if ((pIVar2->CR1 & 1) == 0) {
        pIVar2->CR1 = pIVar2->CR1 | 1;
      }
      hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffff7ff;
      hi2c->State = HAL_I2C_STATE_BUSY_RX_LISTEN;
      hi2c->Mode = HAL_I2C_MODE_SLAVE;
      HVar1 = HAL_OK;
      hi2c->ErrorCode = 0;
      hi2c->pBuffPtr = pData;
      hi2c->XferCount = Size;
      hi2c->XferOptions = XferOptions;
      hi2c->XferSize = hi2c->XferCount;
      hi2c->Lock = HAL_UNLOCKED;
      hi2c->Instance->CR2 = hi2c->Instance->CR2 | 0x700;
    }
  }
  else {
    HVar1 = HAL_BUSY;
  }
  return HVar1;
}


////>>0x08001578>>HAL_I2C_EnableListen_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_I2C_EnableListen_IT(I2C_HandleTypeDef *hi2c)

{
  I2C_TypeDef *pIVar1;
  
  if (hi2c->State != HAL_I2C_STATE_READY) {
    return HAL_BUSY;
  }
  hi2c->State = HAL_I2C_STATE_LISTEN;
  pIVar1 = hi2c->Instance;
  if ((pIVar1->CR1 & 1) == 0) {
    pIVar1->CR1 = pIVar1->CR1 | 1;
  }
  hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
  hi2c->Instance->CR2 = hi2c->Instance->CR2 | 0x300;
  return HAL_OK;
}


////>>0x080015b6>>HAL_I2C_MasterTxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x080015b8>>HAL_I2C_MasterRxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x080015ba>>HAL_I2C_SlaveTxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x080015bc>>I2C_SlaveTransmit_TXE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_SlaveTransmit_TXE(I2C_HandleTypeDef *hi2c)

{
  HAL_I2C_StateTypeDef HVar1;
  byte *pbVar2;
  
  HVar1 = hi2c->State;
  if (hi2c->XferCount != 0) {
    pbVar2 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = pbVar2 + 1;
    hi2c->Instance->DR = (uint)*pbVar2;
    hi2c->XferCount = hi2c->XferCount - 1;
    if ((hi2c->XferCount == 0) && (HVar1 == HAL_I2C_STATE_BUSY_TX_LISTEN)) {
      hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffbff;
      hi2c->PreviousState = 0x21;
      hi2c->State = HAL_I2C_STATE_LISTEN;
      HAL_I2C_SlaveTxCpltCallback(hi2c);
    }
    return HAL_OK;
  }
  return HAL_OK;
}


////>>0x0800160c>>HAL_I2C_SlaveRxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x0800160e>>I2C_SlaveReceive_RXNE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_SlaveReceive_RXNE(I2C_HandleTypeDef *hi2c)

{
  HAL_I2C_StateTypeDef HVar1;
  uint8_t *puVar2;
  
  HVar1 = hi2c->State;
  if (hi2c->XferCount != 0) {
    puVar2 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar2 + 1;
    *puVar2 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
    if ((hi2c->XferCount == 0) && (HVar1 == HAL_I2C_STATE_BUSY_RX_LISTEN)) {
      hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffbff;
      hi2c->PreviousState = 0x22;
      hi2c->State = HAL_I2C_STATE_LISTEN;
      HAL_I2C_SlaveRxCpltCallback(hi2c);
    }
  }
  return HAL_OK;
}


////>>0x0800165a>>I2C_Slave_ADDR>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_Slave_ADDR(I2C_HandleTypeDef *hi2c)

{
  uint16_t AddrMatchCode;
  
  if ((hi2c->Instance->SR2 & 0x80) == 0) {
    AddrMatchCode = *(uint16_t *)&(hi2c->Init).OwnAddress1;
  }
  else {
    AddrMatchCode = *(uint16_t *)&(hi2c->Init).OwnAddress2;
  }
  HAL_I2C_AddrCallback(hi2c,(hi2c->Instance->SR2 & 4) == 0,AddrMatchCode);
  return HAL_OK;
}


////>>0x08001684>>I2C_Slave_AF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_Slave_AF(I2C_HandleTypeDef *hi2c)

{
  uint32_t CurrentXferOptions;
  uint32_t CurrentState;
  
  if (((hi2c->XferOptions == 4) || (hi2c->XferOptions == 8)) &&
     (hi2c->State == HAL_I2C_STATE_LISTEN)) {
    hi2c->XferOptions = 0xffff0000;
    hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffff8ff;
    hi2c->Instance->SR1 = 0xfffffbff;
    hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
    hi2c->PreviousState = 0;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->Mode = HAL_I2C_MODE_NONE;
    HAL_I2C_ListenCpltCallback(hi2c);
  }
  else if (hi2c->State == HAL_I2C_STATE_BUSY_TX) {
    hi2c->XferOptions = 0xffff0000;
    hi2c->PreviousState = 0x21;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->Mode = HAL_I2C_MODE_NONE;
    hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffff8ff;
    hi2c->Instance->SR1 = 0xfffffbff;
    hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
    HAL_I2C_SlaveTxCpltCallback(hi2c);
  }
  else {
    hi2c->Instance->SR1 = 0xfffffbff;
  }
  return HAL_OK;
}


////>>0x08001718>>HAL_I2C_MemTxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x0800171a>>I2C_MasterTransmit_TXE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_MasterTransmit_TXE(I2C_HandleTypeDef *hi2c)

{
  HAL_I2C_StateTypeDef HVar1;
  uint32_t CurrentState;
  byte *pbVar2;
  uint32_t CurrentXferOptions;
  uint32_t uVar3;
  
  HVar1 = hi2c->State;
  uVar3 = hi2c->XferOptions;
  if ((hi2c->XferSize == 0) && (HVar1 == HAL_I2C_STATE_BUSY_TX)) {
    if ((uVar3 == 4) || ((uVar3 == 8 || (uVar3 == 0xffff0000)))) {
      hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffff8ff;
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
      hi2c->PreviousState = 0;
      hi2c->State = HAL_I2C_STATE_READY;
      if (hi2c->Mode == HAL_I2C_MODE_MEM) {
        hi2c->Mode = HAL_I2C_MODE_NONE;
        HAL_I2C_MemTxCpltCallback(hi2c);
      }
      else {
        hi2c->Mode = HAL_I2C_MODE_NONE;
        HAL_I2C_MasterTxCpltCallback(hi2c);
      }
    }
    else {
      hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffff8ff;
      hi2c->PreviousState = 0x11;
      hi2c->Mode = HAL_I2C_MODE_NONE;
      hi2c->State = HAL_I2C_STATE_READY;
      HAL_I2C_MasterTxCpltCallback(hi2c);
    }
  }
  else if ((HVar1 == HAL_I2C_STATE_BUSY_TX) ||
          ((hi2c->Mode == HAL_I2C_MODE_MEM && (HVar1 == HAL_I2C_STATE_BUSY_RX)))) {
    if (hi2c->XferCount == 0) {
      hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffbff;
    }
    else if (hi2c->Mode == HAL_I2C_MODE_MEM) {
      if (hi2c->EventCount == 0) {
        if (hi2c->MemaddSize == 1) {
          hi2c->Instance->DR = hi2c->Memaddress & 0xff;
          hi2c->EventCount = hi2c->EventCount + 2;
        }
        else {
          hi2c->Instance->DR = (hi2c->Memaddress << 0x10) >> 0x18;
          hi2c->EventCount = hi2c->EventCount + 1;
        }
      }
      else if (hi2c->EventCount == 1) {
        hi2c->Instance->DR = hi2c->Memaddress & 0xff;
        hi2c->EventCount = hi2c->EventCount + 1;
      }
      else if (hi2c->EventCount == 2) {
        if (hi2c->State == HAL_I2C_STATE_BUSY_RX) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
        }
        else if (hi2c->State == HAL_I2C_STATE_BUSY_TX) {
          pbVar2 = hi2c->pBuffPtr;
          hi2c->pBuffPtr = pbVar2 + 1;
          hi2c->Instance->DR = (uint)*pbVar2;
          hi2c->XferCount = hi2c->XferCount - 1;
        }
      }
    }
    else {
      pbVar2 = hi2c->pBuffPtr;
      hi2c->pBuffPtr = pbVar2 + 1;
      hi2c->Instance->DR = (uint)*pbVar2;
      hi2c->XferCount = hi2c->XferCount - 1;
    }
  }
  return HAL_OK;
}


////>>0x08001864>>I2C_MasterTransmit_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_MasterTransmit_BTF(I2C_HandleTypeDef *hi2c)

{
  uint32_t uVar1;
  uint32_t CurrentXferOptions;
  byte *pbVar2;
  
  uVar1 = hi2c->XferOptions;
  if (hi2c->State == HAL_I2C_STATE_BUSY_TX) {
    if (hi2c->XferCount == 0) {
      if (((uVar1 == 4) || (uVar1 == 8)) || (uVar1 == 0xffff0000)) {
        hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffff8ff;
        hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
        hi2c->PreviousState = 0;
        hi2c->State = HAL_I2C_STATE_READY;
        if (hi2c->Mode == HAL_I2C_MODE_MEM) {
          hi2c->Mode = HAL_I2C_MODE_NONE;
          HAL_I2C_MemTxCpltCallback(hi2c);
        }
        else {
          hi2c->Mode = HAL_I2C_MODE_NONE;
          HAL_I2C_MasterTxCpltCallback(hi2c);
        }
      }
      else {
        hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffff8ff;
        hi2c->PreviousState = 0x11;
        hi2c->Mode = HAL_I2C_MODE_NONE;
        hi2c->State = HAL_I2C_STATE_READY;
        HAL_I2C_MasterTxCpltCallback(hi2c);
      }
    }
    else {
      pbVar2 = hi2c->pBuffPtr;
      hi2c->pBuffPtr = pbVar2 + 1;
      hi2c->Instance->DR = (uint)*pbVar2;
      hi2c->XferCount = hi2c->XferCount - 1;
    }
  }
  return HAL_OK;
}


////>>0x08001902>>HAL_I2C_MemRxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x08001904>>I2C_MasterReceive_RXNE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_MasterReceive_RXNE(I2C_HandleTypeDef *hi2c)

{
  uint8_t *puVar1;
  
  if (hi2c->State == HAL_I2C_STATE_BUSY_RX) {
    if (hi2c->XferCount < 4) {
      if (hi2c->XferCount < 2) {
        hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
        hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffff8ff;
        puVar1 = hi2c->pBuffPtr;
        hi2c->pBuffPtr = puVar1 + 1;
        *puVar1 = (uint8_t)hi2c->Instance->DR;
        hi2c->XferCount = hi2c->XferCount - 1;
        hi2c->State = HAL_I2C_STATE_READY;
        hi2c->PreviousState = 0;
        if (hi2c->Mode == HAL_I2C_MODE_MEM) {
          hi2c->Mode = HAL_I2C_MODE_NONE;
          HAL_I2C_MemRxCpltCallback(hi2c);
        }
        else {
          hi2c->Mode = HAL_I2C_MODE_NONE;
          HAL_I2C_MasterRxCpltCallback(hi2c);
        }
      }
    }
    else {
      puVar1 = hi2c->pBuffPtr;
      hi2c->pBuffPtr = puVar1 + 1;
      *puVar1 = (uint8_t)hi2c->Instance->DR;
      hi2c->XferCount = hi2c->XferCount - 1;
      if (hi2c->XferCount == 3) {
        hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffbff;
      }
    }
  }
  return HAL_OK;
}


////>>0x080019a0>>I2C_MasterReceive_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_MasterReceive_BTF(I2C_HandleTypeDef *hi2c)

{
  uint32_t CurrentXferOptions;
  uint8_t *puVar1;
  
  if (hi2c->XferCount == 4) {
    hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffbff;
    puVar1 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar1 + 1;
    *puVar1 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
  }
  else if (hi2c->XferCount == 3) {
    hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffbff;
    hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
    puVar1 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar1 + 1;
    *puVar1 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
  }
  else if (hi2c->XferCount == 2) {
    if (hi2c->XferOptions - 1 < 2) {
      hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
    }
    else {
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
    }
    puVar1 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar1 + 1;
    *puVar1 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
    puVar1 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar1 + 1;
    *puVar1 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
    hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffcff;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->PreviousState = 0;
    if (hi2c->Mode == HAL_I2C_MODE_MEM) {
      hi2c->Mode = HAL_I2C_MODE_NONE;
      HAL_I2C_MemRxCpltCallback(hi2c);
    }
    else {
      hi2c->Mode = HAL_I2C_MODE_NONE;
      HAL_I2C_MasterRxCpltCallback(hi2c);
    }
  }
  else {
    puVar1 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar1 + 1;
    *puVar1 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
  }
  return HAL_OK;
}


////>>0x08001aac>>HAL_I2C_AbortCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x08001ab0>>I2C_ITError>>////

/* WARNING: Unknown calling convention */

void I2C_ITError(I2C_HandleTypeDef *hi2c)

{
  HAL_StatusTypeDef HVar1;
  uint8_t *puVar2;
  I2C_TypeDef *pIVar3;
  
  if (hi2c->State - 0x29 < 2) {
    hi2c->PreviousState = 0;
    hi2c->State = HAL_I2C_STATE_LISTEN;
  }
  else {
    if ((hi2c->State != HAL_I2C_STATE_ABORT) && ((hi2c->Instance->CR2 & 0x800) == 0)) {
      hi2c->State = HAL_I2C_STATE_READY;
    }
    hi2c->PreviousState = 0;
    hi2c->Mode = HAL_I2C_MODE_NONE;
  }
  hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffff7ff;
  pIVar3 = hi2c->Instance;
  if ((pIVar3->CR2 & 0x800) == 0) {
    if (hi2c->State == HAL_I2C_STATE_ABORT) {
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->ErrorCode = 0;
      if ((pIVar3->SR1 & 0x40) != 0) {
        puVar2 = hi2c->pBuffPtr;
        hi2c->pBuffPtr = puVar2 + 1;
        *puVar2 = (uint8_t)pIVar3->DR;
      }
      hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffffe;
      HAL_I2C_AbortCpltCallback(hi2c);
    }
    else {
      if ((pIVar3->SR1 & 0x40) != 0) {
        puVar2 = hi2c->pBuffPtr;
        hi2c->pBuffPtr = puVar2 + 1;
        *puVar2 = (uint8_t)pIVar3->DR;
      }
      HAL_I2C_ErrorCallback(hi2c);
    }
  }
  else {
    pIVar3->CR2 = pIVar3->CR2 & 0xfffff7ff;
    if (hi2c->hdmatx->State == HAL_DMA_STATE_READY) {
      hi2c->hdmarx->XferAbortCallback = I2C_DMAAbort + 1;
      HVar1 = HAL_DMA_Abort_IT(hi2c->hdmarx);
      if (HVar1 != HAL_OK) {
        if ((hi2c->Instance->SR1 & 0x40) != 0) {
          puVar2 = hi2c->pBuffPtr;
          hi2c->pBuffPtr = puVar2 + 1;
          *puVar2 = (uint8_t)hi2c->Instance->DR;
        }
        hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffffe;
        hi2c->State = HAL_I2C_STATE_READY;
        (*hi2c->hdmarx->XferAbortCallback)(hi2c->hdmarx);
      }
    }
    else {
      hi2c->hdmatx->XferAbortCallback = I2C_DMAAbort + 1;
      HVar1 = HAL_DMA_Abort_IT(hi2c->hdmatx);
      if (HVar1 != HAL_OK) {
        hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffffe;
        hi2c->State = HAL_I2C_STATE_READY;
        (*hi2c->hdmatx->XferAbortCallback)(hi2c->hdmatx);
      }
    }
  }
  if ((hi2c->State == HAL_I2C_STATE_LISTEN) && ((hi2c->ErrorCode & 4) != 0)) {
    hi2c->XferOptions = 0xffff0000;
    hi2c->PreviousState = 0;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->Mode = HAL_I2C_MODE_NONE;
    HAL_I2C_ListenCpltCallback(hi2c);
  }
  return;
}


////>>0x08001bfc>>I2C_Slave_STOPF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_Slave_STOPF(I2C_HandleTypeDef *hi2c)

{
  HAL_I2C_StateTypeDef HVar1;
  I2C_TypeDef *pIVar2;
  uint8_t *puVar3;
  uint32_t CurrentState;
  uint32_t tmpreg;
  
  HVar1 = hi2c->State;
  hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffff8ff;
  hi2c->Instance->CR1 = hi2c->Instance->CR1 | 1;
  hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
  pIVar2 = hi2c->Instance;
  if ((pIVar2->CR2 & 0x800) != 0) {
    if ((hi2c->State == HAL_I2C_STATE_BUSY_RX) || (hi2c->State == HAL_I2C_STATE_BUSY_RX_LISTEN)) {
      hi2c->XferCount = (uint16_t)hi2c->hdmarx->Instance->NDTR;
    }
    else {
      hi2c->XferCount = (uint16_t)hi2c->hdmatx->Instance->NDTR;
    }
  }
  if (hi2c->XferCount != 0) {
    if ((pIVar2->SR1 & 4) != 0) {
      puVar3 = hi2c->pBuffPtr;
      hi2c->pBuffPtr = puVar3 + 1;
      *puVar3 = (uint8_t)pIVar2->DR;
      hi2c->XferCount = hi2c->XferCount - 1;
    }
    if ((hi2c->Instance->SR1 & 0x40) != 0) {
      puVar3 = hi2c->pBuffPtr;
      hi2c->pBuffPtr = puVar3 + 1;
      *puVar3 = (uint8_t)hi2c->Instance->DR;
      hi2c->XferCount = hi2c->XferCount - 1;
    }
    hi2c->ErrorCode = hi2c->ErrorCode | 4;
  }
  if (hi2c->ErrorCode == 0) {
    if (((HVar1 == HAL_I2C_STATE_LISTEN) || (HVar1 == HAL_I2C_STATE_BUSY_RX_LISTEN)) ||
       (HVar1 == HAL_I2C_STATE_BUSY_TX_LISTEN)) {
      hi2c->XferOptions = 0xffff0000;
      hi2c->PreviousState = 0;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Mode = HAL_I2C_MODE_NONE;
      HAL_I2C_ListenCpltCallback(hi2c);
    }
    else if ((hi2c->PreviousState == 0x22) || (HVar1 == HAL_I2C_STATE_BUSY_RX)) {
      hi2c->PreviousState = 0;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Mode = HAL_I2C_MODE_NONE;
      HAL_I2C_SlaveRxCpltCallback(hi2c);
    }
  }
  else {
    I2C_ITError(hi2c);
  }
  return HAL_OK;
}


////>>0x08001d00>>HAL_I2C_EV_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_EV_IRQHandler(I2C_HandleTypeDef *hi2c)

{
  I2C_TypeDef *pIVar1;
  uint32_t CurrentMode;
  uint uVar2;
  uint32_t sr1itflags;
  uint uVar3;
  uint32_t itsources;
  uint uVar4;
  uint32_t sr2itflags;
  
  pIVar1 = hi2c->Instance;
  uVar4 = pIVar1->SR2;
  uVar2 = pIVar1->SR1;
  uVar3 = pIVar1->CR2;
  if ((hi2c->Mode == HAL_I2C_MODE_MASTER) || (hi2c->Mode == HAL_I2C_MODE_MEM)) {
    if (((uVar2 & 0x10001) == 0) || ((uVar3 & 0x200) == 0)) {
      if (((uVar2 & 0x10008) == 0) || ((uVar3 & 0x200) == 0)) {
        if (((uVar2 & 0x10002) != 0) && ((uVar3 & 0x200) != 0)) {
          I2C_Master_ADDR(hi2c);
        }
      }
      else {
        I2C_Master_ADD10(hi2c);
      }
    }
    else {
      I2C_Master_SB(hi2c);
    }
    if ((uVar4 & 0x100004) == 0) {
      if ((((uVar2 & 0x10040) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        I2C_MasterReceive_RXNE(hi2c);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        I2C_MasterReceive_BTF(hi2c);
        return;
      }
    }
    else {
      if ((((uVar2 & 0x10080) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        I2C_MasterTransmit_TXE(hi2c);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        I2C_MasterTransmit_BTF(hi2c);
        return;
      }
    }
  }
  else {
    if (((uVar2 & 0x10002) != 0) && ((uVar3 & 0x200) != 0)) {
      I2C_Slave_ADDR(hi2c);
      return;
    }
    if (((uVar2 & 0x10010) != 0) && ((uVar3 & 0x200) != 0)) {
      I2C_Slave_STOPF(hi2c);
      return;
    }
    if ((uVar4 & 0x100004) == 0) {
      if ((((uVar2 & 0x10040) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        I2C_SlaveReceive_RXNE(hi2c);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        I2C_SlaveReceive_BTF(hi2c);
      }
    }
    else {
      if ((((uVar2 & 0x10080) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        I2C_SlaveTransmit_TXE(hi2c);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        I2C_SlaveTransmit_BTF(hi2c);
        return;
      }
    }
  }
  return;
}


////>>0x08001e68>>HAL_I2C_ER_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_ER_IRQHandler(I2C_HandleTypeDef *hi2c)

{
  HAL_I2C_StateTypeDef HVar1;
  I2C_TypeDef *pIVar2;
  uint32_t sr1itflags;
  uint uVar3;
  uint32_t itsources;
  uint uVar4;
  
  pIVar2 = hi2c->Instance;
  uVar3 = pIVar2->SR1;
  uVar4 = pIVar2->CR2;
  if (((uVar3 & 0x10100) != 0) && ((uVar4 & 0x100) != 0)) {
    hi2c->ErrorCode = hi2c->ErrorCode | 1;
    pIVar2->SR1 = 0xfffffeff;
  }
  if (((uVar3 & 0x10200) != 0) && ((uVar4 & 0x100) != 0)) {
    hi2c->ErrorCode = hi2c->ErrorCode | 2;
    hi2c->Instance->SR1 = 0xfffffdff;
  }
  if (((uVar3 & 0x10400) != 0) && ((uVar4 & 0x100) != 0)) {
    HVar1 = hi2c->State;
    if (((hi2c->Mode == HAL_I2C_MODE_SLAVE) && (hi2c->XferCount == 0)) &&
       (((HVar1 == HAL_I2C_STATE_BUSY_TX || (HVar1 == HAL_I2C_STATE_BUSY_TX_LISTEN)) ||
        ((HVar1 == HAL_I2C_STATE_LISTEN && (hi2c->PreviousState == 0x21)))))) {
      I2C_Slave_AF(hi2c);
    }
    else {
      hi2c->ErrorCode = hi2c->ErrorCode | 4;
      if (hi2c->Mode == HAL_I2C_MODE_MASTER) {
        hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
      }
      hi2c->Instance->SR1 = 0xfffffbff;
    }
  }
  if (((uVar3 & 0x10800) != 0) && ((uVar4 & 0x100) != 0)) {
    hi2c->ErrorCode = hi2c->ErrorCode | 8;
    hi2c->Instance->SR1 = 0xfffff7ff;
  }
  if (hi2c->ErrorCode != 0) {
    I2C_ITError(hi2c);
  }
  return;
}


////>>0x08001f3c>>I2C_DMAAbort>>////

/* WARNING: Unknown calling convention */

void I2C_DMAAbort(DMA_HandleTypeDef *hdma)

{
  I2C_HandleTypeDef *hi2c_00;
  I2C_HandleTypeDef *hi2c;
  
  hi2c_00 = (I2C_HandleTypeDef *)hdma->Parent;
  hi2c_00->Instance->CR1 = hi2c_00->Instance->CR1 & 0xfffffbff;
  hi2c_00->XferCount = 0;
  hi2c_00->hdmatx->XferAbortCallback = (_func_void___DMA_HandleTypeDef_ptr *)0x0;
  hi2c_00->hdmarx->XferAbortCallback = (_func_void___DMA_HandleTypeDef_ptr *)0x0;
  if (hi2c_00->State != HAL_I2C_STATE_ABORT) {
    hi2c_00->State = HAL_I2C_STATE_READY;
    hi2c_00->Mode = HAL_I2C_MODE_NONE;
    hi2c_00->Instance->CR1 = hi2c_00->Instance->CR1 & 0xfffffffe;
    HAL_I2C_ErrorCallback(hi2c_00);
    return;
  }
  hi2c_00->State = HAL_I2C_STATE_READY;
  hi2c_00->Mode = HAL_I2C_MODE_NONE;
  hi2c_00->ErrorCode = 0;
  hi2c_00->Instance->CR1 = hi2c_00->Instance->CR1 & 0xfffffffe;
  HAL_I2C_AbortCpltCallback(hi2c_00);
  return;
}


////>>0x08001f9c>>HAL_PWREx_EnableOverDrive>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_PWREx_EnableOverDrive(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t tmpreg;
  
  _DAT_40023840 = _DAT_40023840 | 0x10000000;
  _DAT_420e0040 = 1;
  uVar1 = HAL_GetTick();
  do {
    if ((_DAT_40007004 & 0x10000) != 0) {
      _DAT_420e0044 = 1;
      uVar1 = HAL_GetTick();
      do {
        if ((_DAT_40007004 & 0x20000) != 0) {
          return HAL_OK;
        }
        uVar2 = HAL_GetTick();
      } while (uVar2 - uVar1 < 0x3e9);
      return HAL_TIMEOUT;
    }
    uVar2 = HAL_GetTick();
  } while (uVar2 - uVar1 < 0x3e9);
  return HAL_TIMEOUT;
}


////>>0x0800201c>>HAL_RCC_OscConfig>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef_conflict *RCC_OscInitStruct)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t tickstart;
  bool bVar4;
  uint32_t tmpreg;
  
  if (RCC_OscInitStruct == (RCC_OscInitTypeDef_conflict *)0x0) {
    return HAL_ERROR;
  }
  if ((RCC_OscInitStruct->OscillatorType & 1) != 0) {
    if (((_DAT_40023808 & 0xc) == 4) ||
       (((_DAT_40023808 & 0xc) == 8 && ((_DAT_40023804 & 0x400000) != 0)))) {
      if (((_DAT_40023800 & 0x20000) != 0) && (RCC_OscInitStruct->HSEState == 0)) {
        return HAL_ERROR;
      }
    }
    else {
      if (RCC_OscInitStruct->HSEState == 0x10000) {
        _DAT_40023800 = _DAT_40023800 | 0x10000;
      }
      else if (RCC_OscInitStruct->HSEState == 0x50000) {
        _DAT_40023800 = _DAT_40023800 | 0x50000;
      }
      else {
        _DAT_40023800 = _DAT_40023800 & 0xfffaffff;
      }
      if (RCC_OscInitStruct->HSEState == 0) {
        uVar2 = HAL_GetTick();
        while ((_DAT_40023800 & 0x20000) != 0) {
          uVar3 = HAL_GetTick();
          if (100 < uVar3 - uVar2) {
            return HAL_TIMEOUT;
          }
        }
      }
      else {
        uVar2 = HAL_GetTick();
        while ((_DAT_40023800 & 0x20000) == 0) {
          uVar3 = HAL_GetTick();
          if (100 < uVar3 - uVar2) {
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
      _DAT_40023800 = _DAT_40023800 & 0xffffff07 | RCC_OscInitStruct->HSICalibrationValue << 3;
    }
    else if (RCC_OscInitStruct->HSIState == 0) {
      _DAT_42470000 = 0;
      uVar2 = HAL_GetTick();
      while ((_DAT_40023800 & 2) != 0) {
        uVar3 = HAL_GetTick();
        if (2 < uVar3 - uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      _DAT_42470000 = 1;
      uVar2 = HAL_GetTick();
      while ((_DAT_40023800 & 2) == 0) {
        uVar3 = HAL_GetTick();
        if (2 < uVar3 - uVar2) {
          return HAL_TIMEOUT;
        }
      }
      _DAT_40023800 = _DAT_40023800 & 0xffffff07 | RCC_OscInitStruct->HSICalibrationValue << 3;
    }
  }
  if ((RCC_OscInitStruct->OscillatorType & 8) != 0) {
    if (RCC_OscInitStruct->LSIState == 0) {
      _DAT_42470e80 = 0;
      uVar2 = HAL_GetTick();
      while ((_DAT_40023874 & 2) != 0) {
        uVar3 = HAL_GetTick();
        if (2 < uVar3 - uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      _DAT_42470e80 = 1;
      uVar2 = HAL_GetTick();
      while ((_DAT_40023874 & 2) == 0) {
        uVar3 = HAL_GetTick();
        if (2 < uVar3 - uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
  }
  if ((RCC_OscInitStruct->OscillatorType & 4) != 0) {
    bVar4 = (_DAT_40023840 & 0x10000000) == 0;
    if (bVar4) {
      _DAT_40023840 = _DAT_40023840 | 0x10000000;
    }
    if ((_DAT_40007000 & 0x100) == 0) {
      _DAT_40007000 = _DAT_40007000 | 0x100;
      uVar2 = HAL_GetTick();
      while ((_DAT_40007000 & 0x100) == 0) {
        uVar3 = HAL_GetTick();
        if (2 < uVar3 - uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
    if (RCC_OscInitStruct->LSEState == 1) {
      _DAT_40023870 = _DAT_40023870 | 1;
    }
    else if (RCC_OscInitStruct->LSEState == 5) {
      _DAT_40023870 = _DAT_40023870 | 5;
    }
    else {
      _DAT_40023870 = _DAT_40023870 & 0xfffffffa;
    }
    if (RCC_OscInitStruct->LSEState == 0) {
      uVar2 = HAL_GetTick();
      while ((_DAT_40023870 & 2) != 0) {
        uVar3 = HAL_GetTick();
        if (5000 < uVar3 - uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      uVar2 = HAL_GetTick();
      while ((_DAT_40023870 & 2) == 0) {
        uVar3 = HAL_GetTick();
        if (5000 < uVar3 - uVar2) {
          return HAL_TIMEOUT;
        }
      }
    }
    if (bVar4) {
      _DAT_40023840 = _DAT_40023840 & 0xefffffff;
    }
  }
  uVar2 = (RCC_OscInitStruct->PLL).PLLState;
  if (uVar2 == 0) {
    HVar1 = HAL_OK;
  }
  else if ((_DAT_40023808 & 0xc) == 8) {
    HVar1 = HAL_ERROR;
  }
  else if (uVar2 == 2) {
    _DAT_42470060 = 0;
    uVar2 = HAL_GetTick();
    do {
      if ((_DAT_40023800 & 0x2000000) == 0) {
        _DAT_40023804 =
             (RCC_OscInitStruct->PLL).PLLSource | (RCC_OscInitStruct->PLL).PLLM |
             (RCC_OscInitStruct->PLL).PLLN << 6 |
             (((RCC_OscInitStruct->PLL).PLLP >> 1) - 1) * 0x10000 |
             (RCC_OscInitStruct->PLL).PLLQ << 0x18;
        _DAT_42470060 = 1;
        uVar2 = HAL_GetTick();
        do {
          if ((_DAT_40023800 & 0x2000000) != 0) {
            return HAL_OK;
          }
          uVar3 = HAL_GetTick();
        } while (uVar3 - uVar2 < 3);
        return HAL_TIMEOUT;
      }
      uVar3 = HAL_GetTick();
    } while (uVar3 - uVar2 < 3);
    HVar1 = HAL_TIMEOUT;
  }
  else {
    _DAT_42470060 = 0;
    uVar2 = HAL_GetTick();
    do {
      if ((_DAT_40023800 & 0x2000000) == 0) {
        return HAL_OK;
      }
      uVar3 = HAL_GetTick();
    } while (uVar3 - uVar2 < 3);
    HVar1 = HAL_TIMEOUT;
  }
  return HVar1;
}


////>>0x080023b4>>HAL_RCC_GetSysClockFreq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetSysClockFreq(void)

{
  uint uVar1;
  
  if ((_DAT_40023808 & 0xc) == 4) {
    return 8000000;
  }
  if ((_DAT_40023808 & 0xc) != 8) {
    return 16000000;
  }
  if ((_DAT_40023804 & 0x400000) == 0) {
    uVar1 = (_DAT_40023804 << 0x11) >> 0x17;
    uVar1 = __aeabi_uldivmod(uVar1 * 16000000,
                             (((uint)(uVar1 * 0x20 < uVar1) * -0x3f -
                              (uint)(uVar1 * 0x7c0 < uVar1 * 0x1f)) * 8 +
                             (uint)CARRY4(uVar1 * 0x3d08,uVar1)) * 0x400 | uVar1 * 0x3d09 >> 0x16,
                             _DAT_40023804 & 0x3f,0);
  }
  else {
    uVar1 = (_DAT_40023804 << 0x11) >> 0x17;
    uVar1 = __aeabi_uldivmod(uVar1 * 8000000,
                             (((uint)(uVar1 * 0x20 < uVar1) * -0x3f -
                              (uint)(uVar1 * 0x7c0 < uVar1 * 0x1f)) * 8 +
                             (uint)CARRY4(uVar1 * 0x3d08,uVar1)) * 0x200,_DAT_40023804 & 0x3f,0);
  }
  return uVar1 / ((((_DAT_40023804 << 0xe) >> 0x1e) + 1) * 2);
}


////>>0x08002488>>HAL_RCC_ClockConfig>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_RCC_ClockConfig(RCC_ClkInitTypeDef_conflict *RCC_ClkInitStruct,uint32_t FLatency)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  uint32_t tickstart;
  
  if (RCC_ClkInitStruct == (RCC_ClkInitTypeDef_conflict *)0x0) {
    return HAL_ERROR;
  }
  if (((_DAT_40023c00 & 0xf) < FLatency) &&
     (_DAT_40023c00 = CONCAT31(DAT_40023c00_1,(char)FLatency), FLatency != (FLatency & 0xf))) {
    return HAL_ERROR;
  }
  if ((RCC_ClkInitStruct->ClockType & 2) != 0) {
    if ((RCC_ClkInitStruct->ClockType & 4) != 0) {
      _DAT_40023808 = _DAT_40023808 | 0x1c00;
    }
    if ((RCC_ClkInitStruct->ClockType & 8) != 0) {
      _DAT_40023808 = _DAT_40023808 | 0xe000;
    }
    _DAT_40023808 = _DAT_40023808 & 0xffffff0f | RCC_ClkInitStruct->AHBCLKDivider;
  }
  if ((RCC_ClkInitStruct->ClockType & 1) != 0) {
    uVar3 = RCC_ClkInitStruct->SYSCLKSource;
    if (uVar3 == 1) {
      if ((_DAT_40023800 & 0x20000) == 0) {
        return HAL_ERROR;
      }
    }
    else if (uVar3 - 2 < 2) {
      if ((_DAT_40023800 & 0x2000000) == 0) {
        return HAL_ERROR;
      }
    }
    else if ((_DAT_40023800 & 2) == 0) {
      return HAL_ERROR;
    }
    _DAT_40023808 = uVar3 | _DAT_40023808 & 0xfffffffc;
    uVar1 = HAL_GetTick();
    while ((_DAT_40023808 & 0xc) != RCC_ClkInitStruct->SYSCLKSource * 4) {
      uVar2 = HAL_GetTick();
      if (5000 < uVar2 - uVar1) {
        return HAL_TIMEOUT;
      }
    }
  }
  if ((FLatency < (_DAT_40023c00 & 0xf)) &&
     (_DAT_40023c00 = CONCAT31(DAT_40023c00_1,(char)FLatency), FLatency != (FLatency & 0xf))) {
    return HAL_ERROR;
  }
  if ((RCC_ClkInitStruct->ClockType & 4) != 0) {
    _DAT_40023808 = _DAT_40023808 & 0xffffe3ff | RCC_ClkInitStruct->APB1CLKDivider;
  }
  if ((RCC_ClkInitStruct->ClockType & 8) != 0) {
    _DAT_40023808 = _DAT_40023808 & 0xffff1fff | RCC_ClkInitStruct->APB2CLKDivider << 3;
  }
  uVar1 = HAL_RCC_GetSysClockFreq();
  SystemCoreClock = uVar1 >> ""[(_DAT_40023808 << 0x18) >> 0x1c];
  HAL_InitTick(0xf);
  return HAL_OK;
}


////>>0x080025e0>>HAL_RCC_GetHCLKFreq>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetHCLKFreq(void)

{
  return SystemCoreClock;
}


////>>0x080025ec>>HAL_RCC_GetPCLK1Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK1Freq(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[(uint)(_DAT_40023808 << 0x13) >> 0x1d];
}


////>>0x0800260c>>HAL_RCC_GetPCLK2Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK2Freq(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[(uint)(_DAT_40023808 << 0x10) >> 0x1d];
}


////>>0x0800262c>>HAL_RTC_AlarmIRQHandler>>////


/* WARNING: Unknown calling convention */

void HAL_RTC_AlarmIRQHandler(RTC_HandleTypeDef *hrtc)

{
  if (((hrtc->Instance->ISR & 0x100) != 0) && ((hrtc->Instance->CR & 0x1000) != 0)) {
    HAL_RTC_AlarmAEventCallback(hrtc);
    hrtc->Instance->ISR = hrtc->Instance->ISR & 0xff | 0xfffffe7f;
  }
  if (((hrtc->Instance->ISR & 0x200) != 0) && ((hrtc->Instance->CR & 0x2000) != 0)) {
    HAL_RTCEx_AlarmBEventCallback(hrtc);
    hrtc->Instance->ISR = hrtc->Instance->ISR & 0xff | 0xfffffd7f;
  }
  _DAT_40013c14 = 0x20000;
  hrtc->State = HAL_RTC_STATE_READY;
  return;
}


////>>0x0800268c>>HAL_RTCEx_AlarmBEventCallback>>////

/* WARNING: Unknown calling convention */

void HAL_RTCEx_AlarmBEventCallback(RTC_HandleTypeDef *hrtc)

{
  return;
}


////>>0x0800268e>>HAL_TIM_PWM_DeInit>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim)

{
  TIM_TypeDef *pTVar1;
  
  htim->State = HAL_TIM_STATE_BUSY;
  pTVar1 = htim->Instance;
  if (((pTVar1->CCER & 0x1111) == 0) && ((pTVar1->CCER & 0x444) == 0)) {
    pTVar1->CR1 = pTVar1->CR1 & 0xfffffffe;
  }
  HAL_TIM_PWM_MspDeInit(htim);
  htim->State = HAL_TIM_STATE_RESET;
  htim->Lock = HAL_UNLOCKED;
  return HAL_OK;
}


////>>0x080026c8>>HAL_TIM_IC_CaptureCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x080026ca>>HAL_TIM_PWM_PulseFinishedCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x080026cc>>HAL_TIM_TriggerCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x080026ce>>HAL_TIM_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim)

{
  TIM_TypeDef *pTVar1;
  
  pTVar1 = htim->Instance;
  if (((pTVar1->SR & 2) != 0) && ((pTVar1->DIER & 2) != 0)) {
    pTVar1->SR = 0xfffffffd;
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_1;
    if ((htim->Instance->CCMR1 & 3) == 0) {
      HAL_TIM_OC_DelayElapsedCallback(htim);
      HAL_TIM_PWM_PulseFinishedCallback(htim);
    }
    else {
      HAL_TIM_IC_CaptureCallback(htim);
    }
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->SR & 4) != 0) && ((pTVar1->DIER & 4) != 0)) {
    pTVar1->SR = 0xfffffffb;
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_2;
    if ((htim->Instance->CCMR1 & 0x300) == 0) {
      HAL_TIM_OC_DelayElapsedCallback(htim);
      HAL_TIM_PWM_PulseFinishedCallback(htim);
    }
    else {
      HAL_TIM_IC_CaptureCallback(htim);
    }
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->SR & 8) != 0) && ((pTVar1->DIER & 8) != 0)) {
    pTVar1->SR = 0xfffffff7;
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_3;
    if ((htim->Instance->CCMR2 & 3) == 0) {
      HAL_TIM_OC_DelayElapsedCallback(htim);
      HAL_TIM_PWM_PulseFinishedCallback(htim);
    }
    else {
      HAL_TIM_IC_CaptureCallback(htim);
    }
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->SR & 0x10) != 0) && ((pTVar1->DIER & 0x10) != 0)) {
    pTVar1->SR = 0xffffffef;
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_4;
    if ((htim->Instance->CCMR2 & 0x300) == 0) {
      HAL_TIM_OC_DelayElapsedCallback(htim);
      HAL_TIM_PWM_PulseFinishedCallback(htim);
    }
    else {
      HAL_TIM_IC_CaptureCallback(htim);
    }
    htim->Channel = HAL_TIM_ACTIVE_CHANNEL_CLEARED;
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->SR & 1) != 0) && ((pTVar1->DIER & 1) != 0)) {
    pTVar1->SR = 0xfffffffe;
    HAL_TIM_PeriodElapsedCallback(htim);
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->SR & 0x80) != 0) && ((pTVar1->DIER & 0x80) != 0)) {
    pTVar1->SR = 0xffffff7f;
    HAL_TIMEx_BreakCallback(htim);
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->SR & 0x40) != 0) && ((pTVar1->DIER & 0x40) != 0)) {
    pTVar1->SR = 0xffffffbf;
    HAL_TIM_TriggerCallback(htim);
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->SR & 0x20) != 0) && ((pTVar1->DIER & 0x20) != 0)) {
    pTVar1->SR = 0xffffffdf;
    HAL_TIMEx_CommutationCallback(htim);
  }
  return;
}


////>>0x08002848>>TIM_CCxChannelCmd>>////

/* WARNING: Unknown calling convention */

void TIM_CCxChannelCmd(TIM_TypeDef *TIMx,uint32_t Channel,uint32_t ChannelState)

{
  TIMx->CCER = TIMx->CCER & ~(1 << (Channel & 0xff));
  TIMx->CCER = TIMx->CCER | ChannelState << (Channel & 0xff);
  return;
}


////>>0x08002864>>HAL_TIM_PWM_Stop>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim,uint32_t Channel)

{
  bool bVar1;
  TIM_TypeDef *pTVar2;
  
  TIM_CCxChannelCmd(htim->Instance,Channel,0);
  pTVar2 = htim->Instance;
  if (pTVar2 == (TIM_TypeDef *)0x40010000) {
    bVar1 = true;
  }
  else if (pTVar2 == (TIM_TypeDef *)0x40010400) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((bVar1) && ((pTVar2->CCER & 0x1111) == 0)) && ((pTVar2->CCER & 0x444) == 0)) {
    pTVar2->BDTR = pTVar2->BDTR & 0xffff7fff;
  }
  pTVar2 = htim->Instance;
  if (((pTVar2->CCER & 0x1111) == 0) && ((pTVar2->CCER & 0x444) == 0)) {
    pTVar2->CR1 = pTVar2->CR1 & 0xfffffffe;
  }
  htim->State = HAL_TIM_STATE_READY;
  return HAL_OK;
}


////>>0x080028d4>>TIM_CCxNChannelCmd>>////

/* WARNING: Unknown calling convention */

void TIM_CCxNChannelCmd(TIM_TypeDef *TIMx,uint32_t Channel,uint32_t ChannelNState)

{
  TIMx->CCER = TIMx->CCER & ~(4 << (Channel & 0xff));
  TIMx->CCER = TIMx->CCER | ChannelNState << (Channel & 0xff);
  return;
}


////>>0x080028f0>>HAL_TIMEx_PWMN_Stop>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_TIMEx_PWMN_Stop(TIM_HandleTypeDef *htim,uint32_t Channel)

{
  TIM_TypeDef *pTVar1;
  
  TIM_CCxNChannelCmd(htim->Instance,Channel,0);
  pTVar1 = htim->Instance;
  if (((pTVar1->CCER & 0x1111) == 0) && ((pTVar1->CCER & 0x444) == 0)) {
    pTVar1->BDTR = pTVar1->BDTR & 0xffff7fff;
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->CCER & 0x1111) == 0) && ((pTVar1->CCER & 0x444) == 0)) {
    pTVar1->CR1 = pTVar1->CR1 & 0xfffffffe;
  }
  return HAL_OK;
}


////>>0x0800293c>>HAL_TIMEx_CommutationCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIMEx_CommutationCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x0800293e>>HAL_TIMEx_BreakCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x08002940>>UART_EndRxTransfer>>////

/* WARNING: Unknown calling convention */

void UART_EndRxTransfer(UART_HandleTypeDef *huart)

{
  huart->Instance->CR1 = huart->Instance->CR1 & 0xfffffedf;
  huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffffe;
  huart->RxState = HAL_UART_STATE_READY;
  return;
}


////>>0x0800295c>>UART_Transmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef UART_Transmit_IT(UART_HandleTypeDef *huart)

{
  uint16_t uVar1;
  byte *pbVar2;
  uint16_t *tmp;
  
  if (huart->gState != HAL_UART_STATE_BUSY_TX) {
    return HAL_BUSY;
  }
  if ((huart->Init).WordLength == 0x1000) {
    huart->Instance->DR = *(ushort *)huart->pTxBuffPtr & 0x1ff;
    if ((huart->Init).Parity == 0) {
      huart->pTxBuffPtr = huart->pTxBuffPtr + 2;
    }
    else {
      huart->pTxBuffPtr = huart->pTxBuffPtr + 1;
    }
  }
  else {
    pbVar2 = huart->pTxBuffPtr;
    huart->pTxBuffPtr = pbVar2 + 1;
    huart->Instance->DR = (uint)*pbVar2;
  }
  uVar1 = huart->TxXferCount - 1;
  huart->TxXferCount = uVar1;
  if (uVar1 == 0) {
    huart->Instance->CR1 = huart->Instance->CR1 & 0xffffff7f;
    huart->Instance->CR1 = huart->Instance->CR1 | 0x40;
    return HAL_OK;
  }
  return HAL_OK;
}


////>>0x080029c8>>UART_SetConfig>>////

/* WARNING: Unknown calling convention */

void UART_SetConfig(UART_HandleTypeDef *huart)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  USART_TypeDef *pUVar10;
  
  huart->Instance->CR2 = huart->Instance->CR2 & 0xffffcfff | (huart->Init).StopBits;
  huart->Instance->CR1 =
       huart->Instance->CR1 & 0xffff69f3 |
       (huart->Init).WordLength | (huart->Init).Parity | (huart->Init).Mode |
       (huart->Init).OverSampling;
  huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffcff | (huart->Init).HwFlowCtl;
  if ((huart->Init).OverSampling == 0x8000) {
    pUVar10 = huart->Instance;
    if ((pUVar10 != (USART_TypeDef *)0x40011000) && (pUVar10 != (USART_TypeDef *)0x40011400)) {
      uVar1 = HAL_RCC_GetPCLK1Freq();
      uVar6 = (huart->Init).BaudRate;
      uVar2 = HAL_RCC_GetPCLK1Freq();
      uVar7 = (huart->Init).BaudRate;
      uVar3 = HAL_RCC_GetPCLK1Freq();
      uVar8 = (huart->Init).BaudRate;
      uVar4 = HAL_RCC_GetPCLK1Freq();
      uVar9 = (huart->Init).BaudRate;
      uVar5 = HAL_RCC_GetPCLK1Freq();
      pUVar10->BRR = ((uint)((int)((ulonglong)
                                   (((uVar4 * 0x19) / (uVar9 << 1) +
                                    (int)(((ulonglong)(uVar5 * 0x19) /
                                          (ulonglong)((huart->Init).BaudRate << 1)) / 100) * -100) *
                                    8 + 0x32) * 0x51eb851f >> 0x20) << 0x18) >> 0x1d) +
                     ((((uVar2 * 0x19) / (uVar7 << 1) +
                       (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uVar8 << 1)) / 100) * -100) *
                       8 + 0x32) / 100 & 0xf8) * 2 +
                     (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uVar6 << 1)) / 100) * 0x10;
      return;
    }
    uVar1 = HAL_RCC_GetPCLK2Freq();
    uVar6 = (huart->Init).BaudRate;
    uVar2 = HAL_RCC_GetPCLK2Freq();
    uVar7 = (huart->Init).BaudRate;
    uVar3 = HAL_RCC_GetPCLK2Freq();
    uVar8 = (huart->Init).BaudRate;
    uVar4 = HAL_RCC_GetPCLK2Freq();
    uVar9 = (huart->Init).BaudRate;
    uVar5 = HAL_RCC_GetPCLK2Freq();
    pUVar10->BRR = ((uint)((int)((ulonglong)
                                 (((uVar4 * 0x19) / (uVar9 << 1) +
                                  (int)(((ulonglong)(uVar5 * 0x19) /
                                        (ulonglong)((huart->Init).BaudRate << 1)) / 100) * -100) * 8
                                 + 0x32) * 0x51eb851f >> 0x20) << 0x18) >> 0x1d) +
                   ((((uVar2 * 0x19) / (uVar7 << 1) +
                     (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uVar8 << 1)) / 100) * -100) * 8
                    + 0x32) / 100 & 0xf8) * 2 +
                   (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uVar6 << 1)) / 100) * 0x10;
    return;
  }
  pUVar10 = huart->Instance;
  if ((pUVar10 != (USART_TypeDef *)0x40011000) && (pUVar10 != (USART_TypeDef *)0x40011400)) {
    uVar1 = HAL_RCC_GetPCLK1Freq();
    uVar6 = (huart->Init).BaudRate;
    uVar2 = HAL_RCC_GetPCLK1Freq();
    uVar7 = (huart->Init).BaudRate;
    uVar3 = HAL_RCC_GetPCLK1Freq();
    uVar8 = (huart->Init).BaudRate;
    uVar4 = HAL_RCC_GetPCLK1Freq();
    uVar9 = (huart->Init).BaudRate;
    uVar5 = HAL_RCC_GetPCLK1Freq();
    pUVar10->BRR = ((uint)((int)((ulonglong)
                                 (((uVar4 * 0x19) / (uVar9 << 2) +
                                  (int)(((ulonglong)(uVar5 * 0x19) /
                                        (ulonglong)((huart->Init).BaudRate << 2)) / 100) * -100) *
                                  0x10 + 0x32) * 0x51eb851f >> 0x20) << 0x17) >> 0x1c) +
                   ((((uVar2 * 0x19) / (uVar7 << 2) +
                     (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uVar8 << 2)) / 100) * -100) *
                     0x10 + 0x32) / 100 & 0xf0) +
                   (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uVar6 << 2)) / 100) * 0x10;
    return;
  }
  uVar1 = HAL_RCC_GetPCLK2Freq();
  uVar6 = (huart->Init).BaudRate;
  uVar2 = HAL_RCC_GetPCLK2Freq();
  uVar7 = (huart->Init).BaudRate;
  uVar3 = HAL_RCC_GetPCLK2Freq();
  uVar8 = (huart->Init).BaudRate;
  uVar4 = HAL_RCC_GetPCLK2Freq();
  uVar9 = (huart->Init).BaudRate;
  uVar5 = HAL_RCC_GetPCLK2Freq();
  pUVar10->BRR = ((uint)((int)((ulonglong)
                               (((uVar4 * 0x19) / (uVar9 << 2) +
                                (int)(((ulonglong)(uVar5 * 0x19) /
                                      (ulonglong)((huart->Init).BaudRate << 2)) / 100) * -100) *
                                0x10 + 0x32) * 0x51eb851f >> 0x20) << 0x17) >> 0x1c) +
                 ((((uVar2 * 0x19) / (uVar7 << 2) +
                   (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uVar8 << 2)) / 100) * -100) * 0x10
                  + 0x32) / 100 & 0xf0) +
                 (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uVar6 << 2)) / 100) * 0x10;
  return;
}


////>>0x08002d0c>>UART_WaitOnFlagUntilTimeout>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
UART_WaitOnFlagUntilTimeout
          (UART_HandleTypeDef *huart,uint32_t Flag,FlagStatus Status,uint32_t Tickstart,
          uint32_t Timeout)

{
  uint32_t uVar1;
  
  do {
    if (((Flag & ~huart->Instance->SR) == 0) != (bool)Status) {
      return HAL_OK;
    }
  } while ((Timeout == 0xffffffff) ||
          ((Timeout != 0 && (uVar1 = HAL_GetTick(), uVar1 - Tickstart <= Timeout))));
  huart->Instance->CR1 = huart->Instance->CR1 & 0xfffffe5f;
  huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffffe;
  huart->gState = HAL_UART_STATE_READY;
  huart->RxState = HAL_UART_STATE_READY;
  huart->Lock = HAL_UNLOCKED;
  return HAL_TIMEOUT;
}


////>>0x08002d70>>HAL_UART_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_UART_MspInit(UART_HandleTypeDef *huart)

{
  return;
}


////>>0x08002d72>>HAL_UART_Init>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart)

{
  if (huart != (UART_HandleTypeDef *)0x0) {
    if (huart->gState == HAL_UART_STATE_RESET) {
      huart->Lock = HAL_UNLOCKED;
      HAL_UART_MspInit(huart);
    }
    huart->gState = HAL_UART_STATE_BUSY;
    huart->Instance->CR1 = huart->Instance->CR1 & 0xffffdfff;
    UART_SetConfig(huart);
    huart->Instance->CR2 = huart->Instance->CR2 & 0xffffb7ff;
    huart->Instance->CR3 = huart->Instance->CR3 & 0xffffffd5;
    huart->Instance->CR1 = huart->Instance->CR1 | 0x2000;
    huart->ErrorCode = 0;
    huart->gState = HAL_UART_STATE_READY;
    huart->RxState = HAL_UART_STATE_READY;
    return HAL_OK;
  }
  return HAL_ERROR;
}


////>>0x08002dd0>>HAL_UART_Transmit>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_UART_Transmit(UART_HandleTypeDef *huart,uint8_t *pData,uint16_t Size,uint32_t Timeout)

{
  HAL_StatusTypeDef HVar1;
  uint32_t Tickstart;
  uint16_t *tmp;
  
  if (huart->gState == HAL_UART_STATE_READY) {
    if (pData == (uint8_t *)0x0) {
      HVar1 = HAL_ERROR;
    }
    else if (Size == 0) {
      HVar1 = HAL_ERROR;
    }
    else if (huart->Lock == HAL_LOCKED) {
      HVar1 = HAL_BUSY;
    }
    else {
      huart->Lock = HAL_LOCKED;
      huart->ErrorCode = 0;
      huart->gState = HAL_UART_STATE_BUSY_TX;
      Tickstart = HAL_GetTick();
      huart->TxXferSize = Size;
      huart->TxXferCount = Size;
      while (huart->TxXferCount != 0) {
        huart->TxXferCount = huart->TxXferCount - 1;
        if ((huart->Init).WordLength == 0x1000) {
          HVar1 = UART_WaitOnFlagUntilTimeout(huart,0x80,RESET,Tickstart,Timeout);
          if (HVar1 != HAL_OK) {
            return HAL_TIMEOUT;
          }
          huart->Instance->DR = *(ushort *)pData & 0x1ff;
          if ((huart->Init).Parity == 0) {
            pData = (uint8_t *)((int)pData + 2);
          }
          else {
            pData = (uint8_t *)((int)pData + 1);
          }
        }
        else {
          HVar1 = UART_WaitOnFlagUntilTimeout(huart,0x80,RESET,Tickstart,Timeout);
          if (HVar1 != HAL_OK) {
            return HAL_TIMEOUT;
          }
          huart->Instance->DR = (uint)*pData;
          pData = (uint8_t *)((int)pData + 1);
        }
      }
      HVar1 = UART_WaitOnFlagUntilTimeout(huart,0x40,RESET,Tickstart,Timeout);
      if (HVar1 == HAL_OK) {
        huart->gState = HAL_UART_STATE_READY;
        huart->Lock = HAL_UNLOCKED;
        HVar1 = HAL_OK;
      }
      else {
        HVar1 = HAL_TIMEOUT;
      }
    }
  }
  else {
    HVar1 = HAL_BUSY;
  }
  return HVar1;
}


////>>0x08002eb2>>HAL_UART_Transmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_UART_Transmit_IT(UART_HandleTypeDef *huart,uint8_t *pData,uint16_t Size)

{
  if (huart->gState != HAL_UART_STATE_READY) {
    return HAL_BUSY;
  }
  if (pData == (uint8_t *)0x0) {
    return HAL_ERROR;
  }
  if (Size == 0) {
    return HAL_ERROR;
  }
  if (huart->Lock != HAL_LOCKED) {
    huart->pTxBuffPtr = pData;
    huart->TxXferSize = Size;
    huart->TxXferCount = Size;
    huart->ErrorCode = 0;
    huart->gState = HAL_UART_STATE_BUSY_TX;
    huart->Lock = HAL_UNLOCKED;
    huart->Instance->CR1 = huart->Instance->CR1 | 0x80;
    return HAL_OK;
  }
  return HAL_BUSY;
}


////>>0x08002efa>>HAL_UART_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart,uint8_t *pData,uint16_t Size)

{
  if (huart->RxState != HAL_UART_STATE_READY) {
    return HAL_BUSY;
  }
  if (pData == (uint8_t *)0x0) {
    return HAL_ERROR;
  }
  if (Size == 0) {
    return HAL_ERROR;
  }
  if (huart->Lock != HAL_LOCKED) {
    huart->pRxBuffPtr = pData;
    huart->RxXferSize = Size;
    huart->RxXferCount = Size;
    huart->ErrorCode = 0;
    huart->RxState = HAL_UART_STATE_BUSY_RX;
    huart->Lock = HAL_UNLOCKED;
    huart->Instance->CR3 = huart->Instance->CR3 | 1;
    huart->Instance->CR1 = huart->Instance->CR1 | 0x120;
    return HAL_OK;
  }
  return HAL_BUSY;
}


////>>0x08002f4c>>UART_EndTransmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef UART_EndTransmit_IT(UART_HandleTypeDef *huart)

{
  huart->Instance->CR1 = huart->Instance->CR1 & 0xffffffbf;
  huart->gState = HAL_UART_STATE_READY;
  HAL_UART_TxCpltCallback(huart);
  return HAL_OK;
}


////>>0x08002f66>>UART_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef UART_Receive_IT(UART_HandleTypeDef *huart)

{
  uint16_t *tmp;
  byte *pbVar1;
  uint16_t uVar2;
  uint8_t *puVar3;
  
  if (huart->RxState != HAL_UART_STATE_BUSY_RX) {
    return HAL_BUSY;
  }
  if ((huart->Init).WordLength == 0x1000) {
    if ((huart->Init).Parity == 0) {
      *(ushort *)huart->pRxBuffPtr = (ushort)((huart->Instance->DR << 0x17) >> 0x17);
      huart->pRxBuffPtr = huart->pRxBuffPtr + 2;
    }
    else {
      *(ushort *)huart->pRxBuffPtr = (ushort)huart->Instance->DR & 0xff;
      huart->pRxBuffPtr = huart->pRxBuffPtr + 1;
    }
  }
  else if ((huart->Init).Parity == 0) {
    puVar3 = huart->pRxBuffPtr;
    huart->pRxBuffPtr = puVar3 + 1;
    *puVar3 = (uint8_t)huart->Instance->DR;
  }
  else {
    pbVar1 = huart->pRxBuffPtr;
    huart->pRxBuffPtr = pbVar1 + 1;
    *pbVar1 = (byte)huart->Instance->DR & 0x7f;
  }
  uVar2 = huart->RxXferCount - 1;
  huart->RxXferCount = uVar2;
  if (uVar2 != 0) {
    return HAL_OK;
  }
  huart->Instance->CR1 = huart->Instance->CR1 & 0xfffffedf;
  huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffffe;
  huart->RxState = HAL_UART_STATE_READY;
  HAL_UART_RxCpltCallback(huart);
  return HAL_OK;
}


////>>0x08002ffc>>HAL_UART_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_UART_IRQHandler(UART_HandleTypeDef *huart)

{
  HAL_StatusTypeDef HVar1;
  uint uVar2;
  uint32_t cr1its;
  USART_TypeDef *pUVar3;
  uint32_t cr3its;
  uint uVar4;
  uint uVar5;
  uint32_t isrflags;
  
  pUVar3 = huart->Instance;
  uVar5 = pUVar3->SR;
  uVar2 = pUVar3->CR1;
  if ((((uVar5 & 0xf) == 0) && ((uVar5 & 0x20) != 0)) && ((uVar2 & 0x20) != 0)) {
    UART_Receive_IT(huart);
    return;
  }
  if (((uVar5 & 0xf) == 0) || ((uVar4 = pUVar3->CR3 & 1, uVar4 == 0 && ((uVar2 & 0x120) == 0)))) {
    if (((uVar5 & 0x80) != 0) && ((uVar2 & 0x80) != 0)) {
      UART_Transmit_IT(huart);
      return;
    }
    if (((uVar5 & 0x40) != 0) && ((uVar2 & 0x40) != 0)) {
      UART_EndTransmit_IT(huart);
    }
  }
  else {
    if (((uVar5 & 1) != 0) && ((uVar2 & 0x100) != 0)) {
      huart->ErrorCode = huart->ErrorCode | 1;
    }
    if (((uVar5 & 4) != 0) && (uVar4 != 0)) {
      huart->ErrorCode = huart->ErrorCode | 2;
    }
    if (((uVar5 & 2) != 0) && (uVar4 != 0)) {
      huart->ErrorCode = huart->ErrorCode | 4;
    }
    if (((uVar5 & 8) != 0) && (uVar4 != 0)) {
      huart->ErrorCode = huart->ErrorCode | 8;
    }
    if (huart->ErrorCode != 0) {
      if (((uVar5 & 0x20) != 0) && ((uVar2 & 0x20) != 0)) {
        UART_Receive_IT(huart);
      }
      if (((huart->ErrorCode & 8) == 0) && ((huart->Instance->CR3 & 0x40) == 0)) {
        HAL_UART_ErrorCallback(huart);
        huart->ErrorCode = 0;
        return;
      }
      UART_EndRxTransfer(huart);
      pUVar3 = huart->Instance;
      if ((pUVar3->CR3 & 0x40) == 0) {
        HAL_UART_ErrorCallback(huart);
        return;
      }
      pUVar3->CR3 = pUVar3->CR3 & 0xffffffbf;
      if (huart->hdmarx == (DMA_HandleTypeDef *)0x0) {
        HAL_UART_ErrorCallback(huart);
        return;
      }
      huart->hdmarx->XferAbortCallback = UART_DMAAbortOnError + 1;
      HVar1 = HAL_DMA_Abort_IT(huart->hdmarx);
      if (HVar1 != HAL_OK) {
        (*huart->hdmarx->XferAbortCallback)(huart->hdmarx);
        return;
      }
    }
  }
  return;
}


////>>0x0800311c>>UART_DMAAbortOnError>>////

/* WARNING: Unknown calling convention */

void UART_DMAAbortOnError(DMA_HandleTypeDef *hdma)

{
  UART_HandleTypeDef *huart_00;
  UART_HandleTypeDef *huart;
  
  huart_00 = (UART_HandleTypeDef *)hdma->Parent;
  huart_00->RxXferCount = 0;
  huart_00->TxXferCount = 0;
  HAL_UART_ErrorCallback(huart_00);
  return;
}


////>>0x0800312c>>HAL_UART_GetState>>////

/* WARNING: Unknown calling convention */

HAL_UART_StateTypeDef HAL_UART_GetState(UART_HandleTypeDef *huart)

{
  return huart->RxState | huart->gState;
}


////>>0x08003138>>is_pin_configured>>////

/* WARNING: Unknown calling convention */

_Bool is_pin_configured(PinName_conflict pin,uint32_t *map)

{
  uint32_t index;
  
  index = map[(uint)((int)pin << 0x18) >> 0x1c];
  return (_Bool)((byte)(index >> ((int)pin & 0xfU)) & 1);
}


////>>0x0800314e>>set_pin_configured>>////

/* WARNING: Unknown calling convention */

void set_pin_configured(PinName_conflict pin,uint32_t *map)

{
  uint uVar1;
  uint32_t index;
  
  uVar1 = (uint)((int)pin << 0x18) >> 0x1c;
  map[uVar1] = map[uVar1] | 1 << ((int)pin & 0xfU);
  return;
}


////>>0x0800316c>>reset_pin_configured>>////

/* WARNING: Unknown calling convention */

void reset_pin_configured(PinName_conflict pin,uint32_t *map)

{
  uint uVar1;
  uint32_t index;
  
  uVar1 = (uint)((int)pin << 0x18) >> 0x1c;
  map[uVar1] = map[uVar1] & ~(1 << ((int)pin & 0xfU));
  return;
}


////>>0x0800318c>>get_GPIO_Port>>////

/* WARNING: Unknown calling convention */

GPIO_TypeDef * get_GPIO_Port(uint32_t port_idx)

{
  switch(port_idx) {
  case 0:
    return (GPIO_TypeDef *)0x40020000;
  case 1:
    return (GPIO_TypeDef *)0x40020400;
  case 2:
    return (GPIO_TypeDef *)0x40020800;
  case 3:
    return (GPIO_TypeDef *)0x40020c00;
  case 4:
    return (GPIO_TypeDef *)0x40021000;
  case 5:
    return (GPIO_TypeDef *)0x40021400;
  case 6:
    return (GPIO_TypeDef *)0x40021800;
  case 7:
    return (GPIO_TypeDef *)0x40021c00;
  case 8:
    return (GPIO_TypeDef *)0x40022000;
  case 9:
    return (GPIO_TypeDef *)0x40022400;
  case 10:
    return (GPIO_TypeDef *)0x40022800;
  default:
    return (GPIO_TypeDef *)0x0;
  }
}


////>>0x080031fc>>set_GPIO_Port_Clock>>////


/* WARNING: Unknown calling convention */

GPIO_TypeDef * set_GPIO_Port_Clock(uint32_t port_idx)

{
  GPIO_TypeDef *pGVar1;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_2;
  uint32_t tmpreg_3;
  uint32_t tmpreg_4;
  uint32_t tmpreg_5;
  uint32_t tmpreg_6;
  uint32_t tmpreg_7;
  uint32_t tmpreg_8;
  uint32_t tmpreg_9;
  uint32_t tmpreg_10;
  
  switch(port_idx) {
  case 0:
    _DAT_40023830 = _DAT_40023830 | 1;
    pGVar1 = (GPIO_TypeDef *)0x40020000;
    break;
  case 1:
    _DAT_40023830 = _DAT_40023830 | 2;
    pGVar1 = (GPIO_TypeDef *)0x40020400;
    break;
  case 2:
    _DAT_40023830 = _DAT_40023830 | 4;
    pGVar1 = (GPIO_TypeDef *)0x40020800;
    break;
  case 3:
    _DAT_40023830 = _DAT_40023830 | 8;
    pGVar1 = (GPIO_TypeDef *)0x40020c00;
    break;
  case 4:
    _DAT_40023830 = _DAT_40023830 | 0x10;
    pGVar1 = (GPIO_TypeDef *)0x40021000;
    break;
  case 5:
    _DAT_40023830 = _DAT_40023830 | 0x20;
    pGVar1 = (GPIO_TypeDef *)0x40021400;
    break;
  case 6:
    _DAT_40023830 = _DAT_40023830 | 0x40;
    pGVar1 = (GPIO_TypeDef *)0x40021800;
    break;
  case 7:
    _DAT_40023830 = _DAT_40023830 | 0x80;
    pGVar1 = (GPIO_TypeDef *)0x40021c00;
    break;
  case 8:
    _DAT_40023830 = _DAT_40023830 | 0x100;
    pGVar1 = (GPIO_TypeDef *)0x40022000;
    break;
  case 9:
    _DAT_40023830 = _DAT_40023830 | 0x200;
    pGVar1 = (GPIO_TypeDef *)0x40022400;
    break;
  case 10:
    _DAT_40023830 = _DAT_40023830 | 0x400;
    pGVar1 = (GPIO_TypeDef *)0x40022800;
    break;
  default:
    pGVar1 = (GPIO_TypeDef *)0x0;
  }
  return pGVar1;
}


////>>0x08003380>>get_dac_channel>>////

/* WARNING: Unknown calling convention */

uint32_t get_dac_channel(PinName_conflict pin)

{
  uint32_t uVar1;
  uint32_t function;
  
  uVar1 = pinmap_function(pin,(PinMap_conflict *)&PinMap_DAC);
  function = uVar1 << 0xc;
  function = function >> 0x1b;
  if (function != 2) {
    return 0;
  }
  return 0x10;
}


////>>0x0800339c>>get_pwm_channel>>////

/* WARNING: Unknown calling convention */

uint32_t get_pwm_channel(PinName_conflict pin)

{
  uint32_t uVar1;
  uint32_t function;
  
  uVar1 = pinmap_function(pin,(PinMap_conflict *)&PinMap_PWM);
  function = uVar1 << 0xc;
  function = function >> 0x1b;
  if (function == 3) {
    return 8;
  }
  if (function != 4) {
    if (function != 2) {
      return 0;
    }
    return 4;
  }
  return 0xc;
}


////>>0x080033c8>>HAL_DAC_MspDeInit>>////


/* WARNING: Unknown calling convention */

void HAL_DAC_MspDeInit(DAC_HandleTypeDef *hdac)

{
  _DAT_40023840 = _DAT_40023840 & 0xdfffffff;
  return;
}


////>>0x080033d8>>dac_stop>>////

/* WARNING: Unknown calling convention */

void dac_stop(PinName_conflict pin)

{
  uint32_t Channel;
  uint32_t dacChannel;
  DAC_HandleTypeDef DacHandle;
  
  DacHandle.Instance = (DAC_TypeDef *)pinmap_peripheral(pin,(PinMap_conflict *)&PinMap_DAC);
  if ((DacHandle.Instance != (DAC_TypeDef *)0x0) &&
     ((Channel = get_dac_channel(pin), Channel == 0 || (Channel == 0x10)))) {
    HAL_DAC_Stop(&DacHandle,Channel);
    HAL_DAC_DeInit(&DacHandle);
  }
  return;
}


////>>0x0800340c>>HAL_TIM_PWM_MspDeInit>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim)

{
  timer_disable_clock(htim);
  return;
}


////>>0x08003414>>pwm_stop>>////

/* WARNING: Unknown calling convention */

void pwm_stop(PinName_conflict pin)

{
  uint32_t Channel;
  uint32_t timChannel;
  uint32_t uVar1;
  TIM_HandleTypeDef timHandle;
  
  timHandle.Instance = (TIM_TypeDef *)pinmap_peripheral(pin,(PinMap_conflict *)&PinMap_PWM);
  if ((timHandle.Instance != (TIM_TypeDef *)0x0) &&
     ((((Channel = get_pwm_channel(pin), Channel == 0 || (Channel == 4)) || (Channel == 8)) ||
      ((Channel == 0xc || (Channel == 0x18)))))) {
    uVar1 = pinmap_function(pin,(PinMap_conflict *)&PinMap_PWM);
    if ((uVar1 & 0x100000) == 0) {
      HAL_TIM_PWM_Stop(&timHandle,Channel);
    }
    else {
      HAL_TIMEx_PWMN_Stop(&timHandle,Channel);
    }
    HAL_TIM_PWM_DeInit(&timHandle);
  }
  return;
}


////>>0x0800346c>>GetCurrentMilli>>////

/* WARNING: Unknown calling convention */

uint32_t GetCurrentMilli(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_GetTick();
  return uVar1;
}


////>>0x08003474>>noOsSystickHandler>>////

/* WARNING: Unknown calling convention */

void noOsSystickHandler(void)

{
  return;
}


////>>0x08003476>>SysTick_Handler>>////

/* WARNING: Unknown calling convention */

void SysTick_Handler(void)

{
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
  noOsSystickHandler();
  return;
}


////>>0x08003486>>digital_io_init>>////

/* WARNING: Unknown calling convention */

void digital_io_init(PinName_conflict pin,uint32_t mode,uint32_t pull)

{
  GPIO_TypeDef *GPIOx;
  GPIO_TypeDef *port;
  GPIO_InitTypeDef GPIO_InitStructure;
  
  GPIOx = set_GPIO_Port_Clock((uint)((int)pin << 0x18) >> 0x1c);
  GPIO_InitStructure.Pin = 1 << ((int)pin & 0xfU) & 0xffff;
  GPIO_InitStructure.Speed = 2;
  GPIO_InitStructure.Mode = mode;
  GPIO_InitStructure.Pull = pull;
  HAL_GPIO_Init(GPIOx,&GPIO_InitStructure);
  return;
}


////>>0x080034b6>>digital_io_write>>////

/* WARNING: Unknown calling convention */

void digital_io_write(GPIO_TypeDef *port,uint32_t pin,uint32_t val)

{
  if (val == 0) {
    HAL_GPIO_WritePin(port,(uint16_t)pin,GPIO_PIN_RESET);
    return;
  }
  HAL_GPIO_WritePin(port,(uint16_t)pin,GPIO_PIN_SET);
  return;
}


////>>0x080034ce>>hw_config_init>>////

/* WARNING: Unknown calling convention */

void hw_config_init(void)

{
  HAL_Init();
  SystemClock_Config();
  return;
}


////>>0x080034da>>pinmap_find_peripheral>>////

/* WARNING: Unknown calling convention */

void * pinmap_find_peripheral(PinName_conflict pin,PinMap_conflict *map)

{
  while( true ) {
    if (map->pin == NC) {
      return (void *)0x0;
    }
    if (map->pin == pin) break;
    map = map + 1;
  }
  return map->peripheral;
}


////>>0x080034f4>>pinmap_peripheral>>////

/* WARNING: Unknown calling convention */

void * pinmap_peripheral(PinName_conflict pin,PinMap_conflict *map)

{
  void *pvVar1;
  
  if (pin != NC) {
    pvVar1 = pinmap_find_peripheral(pin,map);
    return pvVar1;
  }
  return (void *)0x0;
}


////>>0x08003506>>pinmap_find_pin>>////

/* WARNING: Unknown calling convention */

PinName_conflict pinmap_find_pin(void *peripheral,PinMap_conflict *map)

{
  while( true ) {
    if (map->peripheral == (void *)0x0) {
      return NC;
    }
    if (map->peripheral == peripheral) break;
    map = map + 1;
  }
  return map->pin;
}


////>>0x0800351e>>pinmap_pin>>////

/* WARNING: Unknown calling convention */

PinName_conflict pinmap_pin(void *peripheral,PinMap_conflict *map)

{
  PinName_conflict PVar1;
  
  if (peripheral != (void *)0x0) {
    PVar1 = pinmap_find_pin(peripheral,map);
    return PVar1;
  }
  return NC;
}


////>>0x0800352e>>pinmap_find_function>>////

/* WARNING: Unknown calling convention */

uint32_t pinmap_find_function(PinName_conflict pin,PinMap_conflict *map)

{
  while( true ) {
    if (map->pin == NC) {
      return 0xffffffff;
    }
    if (map->pin == pin) break;
    map = map + 1;
  }
  return map->function;
}


////>>0x0800354a>>pinmap_function>>////

/* WARNING: Unknown calling convention */

uint32_t pinmap_function(PinName_conflict pin,PinMap_conflict *map)

{
  uint32_t uVar1;
  
  if (pin == NC) {
    return 0xffffffff;
  }
  uVar1 = pinmap_find_function(pin,map);
  return uVar1;
}


////>>0x0800355e>>pin_in_pinmap>>////

/* WARNING: Unknown calling convention */

_Bool pin_in_pinmap(PinName_conflict pin,PinMap_conflict *map)

{
  if (pin == NC) {
    return false;
  }
  while( true ) {
    if (map->pin == NC) {
      return false;
    }
    if (pin == map->pin) break;
    map = map + 1;
  }
  return true;
}


////>>0x08003582>>pinmap_merge_peripheral>>////

/* WARNING: Unknown calling convention */

void * pinmap_merge_peripheral(void *a,void *b)

{
  if (a != b) {
    if (a == (void *)0x0) {
      return b;
    }
    if (b == (void *)0x0) {
      return a;
    }
    a = (void *)0x0;
  }
  return a;
}


////>>0x08003594>>HAL_RTC_AlarmAEventCallback>>////

/* WARNING: Unknown calling convention */

void HAL_RTC_AlarmAEventCallback(RTC_HandleTypeDef *hrtc)

{
  if (RTCUserCallback != (voidCallbackPtr)0x0) {
    (*RTCUserCallback)(callbackUserData);
  }
  return;
}


////>>0x080035ac>>RTC_Alarm_IRQHandler>>////

/* WARNING: Unknown calling convention */

void RTC_Alarm_IRQHandler(void)

{
  HAL_RTC_AlarmIRQHandler(&RtcHandle);
  return;
}


////>>0x080035bc>>SystemInit>>////


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


////>>0x080035fc>>timer_disable_clock>>////


/* WARNING: Unknown calling convention */

void timer_disable_clock(TIM_HandleTypeDef *htim)

{
  if (htim->Instance == (TIM_TypeDef *)0x40010000) {
    _DAT_40023844 = _DAT_40023844 & 0xfffffffe;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40000000) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffffe;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40000400) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffffd;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40000800) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffffb;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40000c00) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffff7;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40001000) {
    _DAT_40023840 = _DAT_40023840 & 0xffffffef;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40001400) {
    _DAT_40023840 = _DAT_40023840 & 0xffffffdf;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40010400) {
    _DAT_40023844 = _DAT_40023844 & 0xfffffffd;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40014000) {
    _DAT_40023844 = _DAT_40023844 & 0xfffeffff;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40014400) {
    _DAT_40023844 = _DAT_40023844 & 0xfffdffff;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40014800) {
    _DAT_40023844 = _DAT_40023844 & 0xfffbffff;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40001800) {
    _DAT_40023840 = _DAT_40023840 & 0xffffffbf;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40001c00) {
    _DAT_40023840 = _DAT_40023840 & 0xffffff7f;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40002000) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffeff;
  }
  return;
}


////>>0x08003750>>get_timer_obj>>////

/* WARNING: Unknown calling convention */

stimer_t * get_timer_obj(TIM_HandleTypeDef *htim)

{
  return (stimer_t *)&htim[-1].Lock;
}


////>>0x08003754>>HAL_TIM_OC_DelayElapsedCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim)

{
  stimer_t *psVar1;
  stimer_t *obj;
  
  psVar1 = get_timer_obj(htim);
  if ((psVar1->irqHandleOC != (_func_void_stimer_t_ptr_uint32_t *)0x0) &&
     (htim->Channel == HAL_TIM_ACTIVE_CHANNEL_1)) {
    (*psVar1->irqHandleOC)(psVar1,0);
  }
  return;
}


////>>0x0800376e>>HAL_TIM_PeriodElapsedCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)

{
  stimer_t *psVar1;
  stimer_t *obj;
  
  psVar1 = get_timer_obj(htim);
  if (psVar1->irqHandle != (_func_void_stimer_t_ptr *)0x0) {
    (*psVar1->irqHandle)(psVar1);
  }
  return;
}


////>>0x0800377c>>TIM1_UP_TIM10_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM1_UP_TIM10_IRQHandler(void)

{
  if (timer_handles[0] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[0]);
  }
  if (timer_handles[9] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[9]);
  }
  return;
}


////>>0x08003798>>TIM2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM2_IRQHandler(void)

{
  if (timer_handles[1] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[1]);
  }
  return;
}


////>>0x080037ac>>TIM3_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM3_IRQHandler(void)

{
  if (timer_handles[2] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[2]);
  }
  return;
}


////>>0x080037c0>>TIM4_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM4_IRQHandler(void)

{
  if (timer_handles[3] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[3]);
  }
  return;
}


////>>0x080037d4>>TIM5_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM5_IRQHandler(void)

{
  if (timer_handles[4] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[4]);
  }
  return;
}


////>>0x080037e8>>TIM6_DAC_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM6_DAC_IRQHandler(void)

{
  if (timer_handles[5] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[5]);
  }
  return;
}


////>>0x080037fc>>TIM7_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM7_IRQHandler(void)

{
  if (timer_handles[6] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[6]);
  }
  return;
}


////>>0x08003810>>TIM8_UP_TIM13_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM8_UP_TIM13_IRQHandler(void)

{
  if (timer_handles[7] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[7]);
  }
  if (timer_handles[12] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[12]);
  }
  return;
}


////>>0x0800382c>>TIM1_BRK_TIM9_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM1_BRK_TIM9_IRQHandler(void)

{
  if (timer_handles[8] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[8]);
  }
  return;
}


////>>0x08003840>>TIM1_TRG_COM_TIM11_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM1_TRG_COM_TIM11_IRQHandler(void)

{
  if (timer_handles[10] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[10]);
  }
  return;
}


////>>0x08003854>>TIM8_BRK_TIM12_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM8_BRK_TIM12_IRQHandler(void)

{
  if (timer_handles[11] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[11]);
  }
  return;
}


////>>0x08003868>>TIM8_TRG_COM_TIM14_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM8_TRG_COM_TIM14_IRQHandler(void)

{
  if (timer_handles[13] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[13]);
  }
  return;
}


////>>0x0800387c>>get_i2c_obj>>////

/* WARNING: Unknown calling convention */

i2c_t * get_i2c_obj(I2C_HandleTypeDef *hi2c)

{
  return (i2c_t *)&hi2c[-1].EventCount;
}


////>>0x08003880>>HAL_I2C_AddrCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_AddrCallback(I2C_HandleTypeDef *hi2c,uint8_t TransferDirection,uint16_t AddrMatchCode)

{
  i2c_t *piVar1;
  i2c_t *obj;
  
  piVar1 = get_i2c_obj(hi2c);
  if ((uint)AddrMatchCode == (hi2c->Init).OwnAddress1) {
    if (TransferDirection == '\0') {
      piVar1->i2cTxRxBufferSize = '\0';
      piVar1->slaveMode = '\0';
      if (piVar1->i2c_onSlaveTransmit != (_func_void *)0x0) {
        (*piVar1->i2c_onSlaveTransmit)();
      }
      HAL_I2C_Slave_Sequential_Transmit_IT
                (hi2c,piVar1->i2cTxRxBuffer,(ushort)piVar1->i2cTxRxBufferSize,8);
      return;
    }
    piVar1->slaveMode = '\x01';
    HAL_I2C_Slave_Sequential_Receive_IT(hi2c,piVar1->i2cTxRxBuffer,0x20,8);
  }
  return;
}


////>>0x080038d0>>HAL_I2C_ListenCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef *hi2c)

{
  i2c_t *piVar1;
  i2c_t *obj;
  uint uVar2;
  
  piVar1 = get_i2c_obj(hi2c);
  if (((piVar1->i2c_onSlaveReceive != (_func_void_uint8_t_ptr_int *)0x0) &&
      (piVar1->slaveMode == '\x01')) &&
     (uVar2 = 0x20 - *(byte *)&(piVar1->handle).XferSize & 0xff, uVar2 != 0)) {
    (*piVar1->i2c_onSlaveReceive)(piVar1->i2cTxRxBuffer,uVar2);
  }
  HAL_I2C_EnableListen_IT(hi2c);
  return;
}


////>>0x08003900>>HAL_I2C_ErrorCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c)

{
  i2c_t *piVar1;
  i2c_t *obj;
  
  piVar1 = get_i2c_obj(hi2c);
  if (piVar1->isMaster == '\0') {
    HAL_I2C_EnableListen_IT(hi2c);
  }
  return;
}


////>>0x08003918>>I2C1_EV_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C1_EV_IRQHandler(void)

{
  HAL_I2C_EV_IRQHandler(i2c_handles);
  return;
}


////>>0x08003928>>I2C1_ER_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C1_ER_IRQHandler(void)

{
  HAL_I2C_ER_IRQHandler(i2c_handles);
  return;
}


////>>0x08003938>>I2C2_EV_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C2_EV_IRQHandler(void)

{
  HAL_I2C_EV_IRQHandler(I2C2_ER_IRQHandler::handle);
  return;
}


////>>0x08003948>>I2C2_ER_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C2_ER_IRQHandler(void)

{
  HAL_I2C_ER_IRQHandler(I2C2_ER_IRQHandler::handle);
  return;
}


////>>0x08003958>>I2C3_EV_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C3_EV_IRQHandler(void)

{
  HAL_I2C_EV_IRQHandler(I2C3_ER_IRQHandler::handle);
  return;
}


////>>0x08003968>>I2C3_ER_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C3_ER_IRQHandler(void)

{
  HAL_I2C_ER_IRQHandler(I2C3_ER_IRQHandler::handle);
  return;
}


////>>0x08003978>>uart_init>>////


/* WARNING: Unknown calling convention */

void uart_init(serial_t *obj)

{
  void *a;
  USART_TypeDef *uart_tx;
  void *b;
  USART_TypeDef *uart_rx;
  USART_TypeDef *pUVar1;
  GPIO_TypeDef *pGVar2;
  GPIO_TypeDef *port;
  uint32_t uVar3;
  UART_HandleTypeDef *huart;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_2;
  uint32_t tmpreg_3;
  uint32_t tmpreg_4;
  uint32_t tmpreg_5;
  uint32_t tmpreg_6;
  uint32_t tmpreg_7;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  if (obj != (serial_t *)0x0) {
    a = pinmap_peripheral(obj->pin_tx,(PinMap_conflict *)&PinMap_UART_TX);
    b = pinmap_peripheral(obj->pin_rx,(PinMap_conflict *)&PinMap_UART_RX);
    if ((b == (void *)0x0) || (a == (void *)0x0)) {
      iprintf("ERROR: at least one UART pin has no peripheral\n");
    }
    else {
      pUVar1 = (USART_TypeDef *)pinmap_merge_peripheral(a,b);
      obj->uart = pUVar1;
      if (pUVar1 == (USART_TypeDef *)0x0) {
        iprintf("ERROR: U(S)ART pins mismatch\n");
      }
      else {
        if (pUVar1 == (USART_TypeDef *)0x40011000) {
          _DAT_40023824 = _DAT_40023824 & 0xffffffef;
          _DAT_40023844 = _DAT_40023844 | 0x10;
          obj->index = '\0';
          obj->irq = USART1_IRQn;
        }
        else if (pUVar1 == (USART_TypeDef *)0x40004400) {
          _DAT_40023820 = _DAT_40023820 & 0xfffdffff;
          _DAT_40023840 = _DAT_40023840 | 0x20000;
          obj->index = '\x01';
          obj->irq = USART2_IRQn;
        }
        else if (pUVar1 == (USART_TypeDef *)0x40004800) {
          _DAT_40023820 = _DAT_40023820 & 0xfffbffff;
          _DAT_40023840 = _DAT_40023840 | 0x40000;
          obj->index = '\x02';
          obj->irq = USART3_IRQn;
        }
        else if (pUVar1 == (USART_TypeDef *)0x40004c00) {
          _DAT_40023820 = _DAT_40023820 & 0xfff7ffff;
          _DAT_40023840 = _DAT_40023840 | 0x80000;
          obj->index = '\x03';
          obj->irq = UART4_IRQn;
        }
        else if (pUVar1 == (USART_TypeDef *)0x40005000) {
          _DAT_40023820 = _DAT_40023820 & 0xffefffff;
          _DAT_40023840 = _DAT_40023840 | 0x100000;
          obj->index = '\x04';
          obj->irq = UART5_IRQn;
        }
        else if (pUVar1 == (USART_TypeDef *)0x40011400) {
          _DAT_40023824 = _DAT_40023824 & 0xffffffdf;
          _DAT_40023844 = _DAT_40023844 | 0x20;
          obj->index = '\x05';
          obj->irq = USART6_IRQn;
        }
        else if (pUVar1 == (USART_TypeDef *)0x40007800) {
          _DAT_40023820 = _DAT_40023820 & 0xbfffffff;
          _DAT_40023840 = _DAT_40023840 | 0x40000000;
          obj->index = '\x06';
          obj->irq = UART7_IRQn;
        }
        else if (pUVar1 == (USART_TypeDef *)0x40007c00) {
          _DAT_40023820 = _DAT_40023820 & 0x7fffffff;
          _DAT_40023840 = _DAT_40023840 | 0x80000000;
          obj->index = '\a';
          obj->irq = UART8_IRQn;
        }
        pGVar2 = set_GPIO_Port_Clock((uint)((int)obj->pin_rx << 0x18) >> 0x1c);
        uVar3 = pinmap_function(obj->pin_rx,(PinMap_conflict *)&PinMap_UART_RX);
        GPIO_InitStruct.Pin = 1 << (obj->pin_rx & 0xfU) & 0xffff;
        GPIO_InitStruct.Mode = (uVar3 >> 3 & 1) << 4 | uVar3 & 7;
        GPIO_InitStruct.Pull = (uVar3 << 0x1a) >> 0x1e;
        GPIO_InitStruct.Alternate = (uVar3 << 0x11) >> 0x19;
        GPIO_InitStruct.Speed = 3;
        HAL_GPIO_Init(pGVar2,&GPIO_InitStruct);
        pGVar2 = set_GPIO_Port_Clock((uint)((int)obj->pin_tx << 0x18) >> 0x1c);
        uVar3 = pinmap_function(obj->pin_tx,(PinMap_conflict *)&PinMap_UART_TX);
        GPIO_InitStruct.Pin = 1 << (obj->pin_tx & 0xfU) & 0xffff;
        GPIO_InitStruct.Mode = (uVar3 >> 3 & 1) << 4 | uVar3 & 7;
        GPIO_InitStruct.Pull = (uVar3 << 0x1a) >> 0x1e;
        HAL_GPIO_Init(pGVar2,&GPIO_InitStruct);
        uart_handlers[obj->index] = &obj->handle;
        (obj->handle).Instance = obj->uart;
        (obj->handle).Init.BaudRate = obj->baudrate;
        (obj->handle).Init.WordLength = obj->databits;
        (obj->handle).Init.StopBits = obj->stopbits;
        (obj->handle).Init.Parity = obj->parity;
        (obj->handle).Init.Mode = 0xc;
        (obj->handle).Init.HwFlowCtl = 0;
        (obj->handle).Init.OverSampling = 0;
        HAL_UART_Init(&obj->handle);
      }
    }
    return;
  }
  return;
}


////>>0x08003cc8>>uart_debug_init>>////

/* WARNING: Unknown calling convention */

void uart_debug_init(void)

{
  void *pvVar1;
  
  pvVar1 = pinmap_peripheral(PD_8,(PinMap_conflict *)&PinMap_UART_TX);
  if (pvVar1 != (void *)0x0) {
    pvVar1 = pinmap_peripheral(PD_8,(PinMap_conflict *)&PinMap_UART_TX);
    serial_debug.pin_rx = pinmap_pin(pvVar1,(PinMap_conflict *)&PinMap_UART_RX);
    serial_debug.pin_tx = PD_8;
    serial_debug.baudrate = 0x2580;
    serial_debug.parity = 0;
    serial_debug.databits = 0;
    serial_debug.stopbits = 0;
    uart_init(&serial_debug);
  }
  return;
}


////>>0x08003d18>>uart_debug_write>>////

/* WARNING: Unknown calling convention */

size_t uart_debug_write(uint8_t *data,uint32_t size)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  uint32_t tickstart;
  void *pvVar3;
  USART_TypeDef *pUVar4;
  uint32_t uVar5;
  uint uVar6;
  
  uVar2 = HAL_GetTick();
  pvVar3 = pinmap_peripheral(PD_8,(PinMap_conflict *)&PinMap_UART_TX);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  uVar6 = 0;
  while ((uVar6 < 10 &&
         ((uart_handlers[uVar6] == (UART_HandleTypeDef *)0x0 ||
          (pUVar4 = (USART_TypeDef *)pinmap_peripheral(PD_8,(PinMap_conflict *)&PinMap_UART_TX),
          uart_handlers[uVar6]->Instance != pUVar4))))) {
    uVar6 = uVar6 + 1 & 0xff;
  }
  if (9 < uVar6) {
    if ((9 < serial_debug.index) && (uart_debug_init(), 9 < serial_debug.index)) {
      return 0;
    }
    uVar6 = (uint)serial_debug.index;
  }
  do {
    HVar1 = HAL_UART_Transmit(uart_handlers[uVar6],data,(uint16_t)size,1000);
    if (HVar1 == HAL_OK) {
      return size;
    }
    uVar5 = HAL_GetTick();
  } while (uVar5 - uVar2 < 1000);
  return 0;
}


////>>0x08003dd0>>serial_rx_active>>////

/* WARNING: Unknown calling convention */

uint8_t serial_rx_active(serial_t *obj)

{
  HAL_UART_StateTypeDef HVar1;
  
  HVar1 = HAL_UART_GetState(uart_handlers[obj->index]);
  return (HVar1 & 0x22) == 0x22;
}


////>>0x08003df4>>serial_tx_active>>////

/* WARNING: Unknown calling convention */

uint8_t serial_tx_active(serial_t *obj)

{
  HAL_UART_StateTypeDef HVar1;
  
  HVar1 = HAL_UART_GetState(uart_handlers[obj->index]);
  return (HVar1 & 0x21) == 0x21;
}


////>>0x08003e18>>uart_getc>>////

/* WARNING: Unknown calling convention */

int uart_getc(serial_t *obj,uchar *c)

{
  uint8_t uVar1;
  
  if (obj == (serial_t *)0x0) {
    return -1;
  }
  uVar1 = serial_rx_active(obj);
  if (uVar1 == '\0') {
    *c = obj->recv;
    HAL_UART_Receive_IT(uart_handlers[obj->index],&obj->recv,1);
    return 0;
  }
  return -1;
}


////>>0x08003e54>>uart_attach_rx_callback>>////

/* WARNING: Unknown calling convention */

void uart_attach_rx_callback(serial_t *obj,_func_void_serial_t_ptr *callback)

{
  byte bVar1;
  uint8_t uVar2;
  
  if (obj != (serial_t *)0x0) {
    uVar2 = serial_rx_active(obj);
    if (uVar2 == '\0') {
      bVar1 = obj->index;
      rx_callback[bVar1] = callback;
      rx_callback_obj[bVar1] = obj;
      HAL_NVIC_SetPriority(obj->irq,0,1);
      HAL_NVIC_EnableIRQ(obj->irq);
      HAL_UART_Receive_IT(uart_handlers[obj->index],&obj->recv,1);
    }
    return;
  }
  return;
}


////>>0x08003eac>>uart_attach_tx_callback>>////

/* WARNING: Unknown calling convention */

void uart_attach_tx_callback(serial_t *obj,_func_int_serial_t_ptr *callback)

{
  byte bVar1;
  
  if (obj != (serial_t *)0x0) {
    bVar1 = obj->index;
    tx_callback[bVar1] = callback;
    tx_callback_obj[bVar1] = obj;
    HAL_NVIC_SetPriority(obj->irq,0,2);
    HAL_NVIC_EnableIRQ(obj->irq);
    HAL_UART_Transmit_IT(uart_handlers[obj->index],obj->tx_buff + obj->tx_tail,1);
    return;
  }
  return;
}


////>>0x08003f00>>uart_index>>////

/* WARNING: Unknown calling convention */

uint8_t uart_index(UART_HandleTypeDef *huart)

{
  uint uVar1;
  
  if (huart == (UART_HandleTypeDef *)0x0) {
    uVar1 = 10;
  }
  else {
    uVar1 = 0;
    while( true ) {
      if (9 < uVar1) {
        return (uint8_t)uVar1;
      }
      if (huart == uart_handlers[uVar1]) break;
      uVar1 = uVar1 + 1 & 0xff;
    }
  }
  return (uint8_t)uVar1;
}


////>>0x08003f24>>HAL_UART_RxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)

{
  byte bVar1;
  uint8_t index;
  uint uVar2;
  
  bVar1 = uart_index(huart);
  uVar2 = (uint)bVar1;
  if (uVar2 < 10) {
    (*rx_callback[uVar2])(rx_callback_obj[uVar2]);
  }
  return;
}


////>>0x08003f48>>HAL_UART_TxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)

{
  byte bVar1;
  uint8_t index;
  int iVar3;
  serial_t *obj;
  serial_t *psVar4;
  uint uVar2;
  
  bVar1 = uart_index(huart);
  uVar2 = (uint)bVar1;
  psVar4 = tx_callback_obj[uVar2];
  if ((uVar2 < 10) && (iVar3 = (*tx_callback[uVar2])(psVar4), iVar3 != -1)) {
    HAL_UART_Transmit_IT(uart_handlers[psVar4->index],psVar4->tx_buff + psVar4->tx_tail,1);
  }
  return;
}


////>>0x08003f94>>HAL_UART_ErrorCallback>>////

/* WARNING: Unknown calling convention */

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)

{
  uint32_t tmpval;
  
  return;
}


////>>0x08003fd4>>USART1_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART1_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART1_IRQn);
  HAL_UART_IRQHandler(uart_handlers[0]);
  return;
}


////>>0x08003fec>>USART2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART2_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART2_IRQn);
  HAL_UART_IRQHandler(uart_handlers[1]);
  return;
}


////>>0x08004004>>USART3_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART3_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART3_IRQn);
  if (uart_handlers[2] != (UART_HandleTypeDef *)0x0) {
    HAL_UART_IRQHandler(uart_handlers[2]);
  }
  return;
}


////>>0x0800401c>>UART4_IRQHandler>>////

/* WARNING: Unknown calling convention */

void UART4_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(UART4_IRQn);
  HAL_UART_IRQHandler(uart_handlers[3]);
  return;
}


////>>0x08004034>>UART5_IRQHandler>>////

/* WARNING: Unknown calling convention */

void UART5_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(UART5_IRQn);
  HAL_UART_IRQHandler(uart_handlers[4]);
  return;
}


////>>0x0800404c>>USART6_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART6_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART6_IRQn);
  HAL_UART_IRQHandler(uart_handlers[5]);
  return;
}


////>>0x08004064>>UART7_IRQHandler>>////

/* WARNING: Unknown calling convention */

void UART7_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(UART7_IRQn);
  HAL_UART_IRQHandler(uart_handlers[6]);
  return;
}


////>>0x0800407c>>UART8_IRQHandler>>////

/* WARNING: Unknown calling convention */

void UART8_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(UART8_IRQn);
  HAL_UART_IRQHandler(uart_handlers[7]);
  return;
}


////>>0x08004094>>_sbrk>>////

void * _sbrk(intptr_t __delta)

{
  char *pcVar1;
  char *prev_heap_end;
  
  if (_sbrk::heap_end == (char *)0x0) {
    _sbrk::heap_end = &_ebss;
  }
  pcVar1 = _sbrk::heap_end;
  if (_sbrk::heap_end + __delta <= &stack0x00000000) {
    _sbrk::heap_end = _sbrk::heap_end + __delta;
    return pcVar1;
  }
  errno = 0xc;
  return (void *)0xffffffff;
}


////>>0x080040d0>>_close>>////

int _close(int __fd)

{
  return -1;
}


////>>0x080040d6>>_fstat>>////

int _fstat(int __fd,stat *__buf)

{
  *(undefined4 *)((int)&__buf->st_dev + 4) = 0x2000;
  return 0;
}


////>>0x080040e0>>_isatty>>////

int _isatty(int __fd)

{
  return 1;
}


////>>0x080040e4>>_lseek>>////

__off_t _lseek(int __fd,__off_t __offset,int __whence)

{
  return 0;
}


////>>0x080040e8>>_read>>////

/* WARNING: Unknown calling convention */

int _read(int file_UNUSED,char *ptr_UNUSED,int len_UNUSED)

{
  return 0;
}


////>>0x080040ec>>_write>>////

/* WARNING: Unknown calling convention */

int _write(int file_UNUSED,char *ptr,int len)

{
  size_t sVar1;
  
  sVar1 = uart_debug_write((uint8_t *)ptr,len);
  return sVar1;
}


////>>0x080040f8>>_exit>>////

void _exit(int __status)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080040fc>>_kill>>////

int _kill(__pid_t __pid,int __sig)

{
  errno = 0x16;
  return -1;
}


////>>0x0800410c>>_getpid>>////



__pid_t _getpid(void)

{
  return 1;
}


////>>0x08004110>>pinMode>>////

/* WARNING: Unknown calling convention */

void pinMode(uint32_t ulPin,uint32_t ulMode)

{
  _Bool _Var1;
  PinName_conflict p;
  
  if (ulPin < 0x60) {
    p = *(PinName_conflict *)(&digitalPin + ulPin * 2);
  }
  else {
    p = NC;
  }
  if (p != NC) {
    _Var1 = is_pin_configured(p,g_anOutputPinConfigured);
    if (_Var1) {
      _Var1 = pin_in_pinmap(p,(PinMap_conflict *)&PinMap_DAC);
      if (_Var1) {
        dac_stop(p);
      }
      else {
        _Var1 = pin_in_pinmap(p,(PinMap_conflict *)&PinMap_PWM);
        if (_Var1) {
          pwm_stop(p);
        }
      }
      reset_pin_configured(p,g_anOutputPinConfigured);
    }
    switch(ulMode) {
    case 0:
      digital_io_init(p,0,0);
      break;
    case 1:
      digital_io_init(p,1,0);
      break;
    case 2:
      digital_io_init(p,0,1);
      break;
    case 3:
      digital_io_init(p,0,2);
    }
    set_pin_configured(p,g_digPinConfigured);
  }
  return;
}


////>>0x080041bc>>digitalWrite>>////

/* WARNING: Unknown calling convention */

void digitalWrite(uint32_t ulPin,uint32_t ulVal)

{
  _Bool _Var1;
  GPIO_TypeDef *port;
  PinName_conflict p;
  uint uVar2;
  
  if (ulPin < 0x60) {
    uVar2 = (uint)*(short *)(&digitalPin + ulPin * 2);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if ((uVar2 != 0xffffffff) &&
     (_Var1 = is_pin_configured((PinName_conflict)uVar2,g_digPinConfigured), _Var1)) {
    port = get_GPIO_Port((uVar2 << 0x18) >> 0x1c);
    digital_io_write(port,1 << (uVar2 & 0xf) & 0xffff,ulVal);
  }
  return;
}


////>>0x08004204>>millis>>////

/* WARNING: Unknown calling convention */

uint32_t millis(void)

{
  uint32_t uVar1;
  
  uVar1 = GetCurrentMilli();
  return uVar1;
}


////>>0x0800420c>>_tx_complete_irq>>////

/* WARNING: Unknown calling convention */

int HardwareSerial::_tx_complete_irq(serial_t_conflict *obj)

{
  ushort uVar1;
  uint16_t uVar2;
  int iVar3;
  
  iVar3 = obj->tx_tail + 1;
  uVar1 = (ushort)iVar3;
  uVar2 = uVar1 & 0x7f;
  if (iVar3 == 0) {
    uVar2 = -(-uVar1 & 0x7f);
  }
  obj->tx_tail = uVar2;
  if (obj->tx_head != obj->tx_tail) {
    return 0;
  }
  return -1;
}


////>>0x08004240>>available>>////

/* DWARF original prototype: int  available(HardwareSerial * this) */

int __thiscall HardwareSerial::available(HardwareSerial *this)

{
  return ((this->_serial).rx_head + 0x40) - (uint)(this->_serial).rx_tail & 0x3f;
}


////>>0x08004254>>peek>>////

/* DWARF original prototype: int  peek(HardwareSerial * this) */

int __thiscall HardwareSerial::peek(HardwareSerial *this)

{
  uint uVar1;
  
  uVar1 = (uint)(this->_serial).rx_tail;
  if ((this->_serial).rx_head != uVar1) {
    return (uint)(this->_serial).rx_buff[uVar1];
  }
  return -1;
}


////>>0x08004270>>read>>////

/* DWARF original prototype: int  read(HardwareSerial * this) */

ssize_t __thiscall HardwareSerial::read(HardwareSerial *this,int __fd,void *__buf,size_t __nbytes)

{
  byte bVar1;
  ushort uVar2;
  uchar c;
  
  uVar2 = (this->_serial).rx_tail;
  if ((uint)(this->_serial).rx_head != (uint)uVar2) {
    bVar1 = (this->_serial).rx_buff[uVar2];
    (this->_serial).rx_tail = uVar2 + 1 & 0x3f;
    return (uint)bVar1;
  }
  return -1;
}


////>>0x08004298>>flush>>////

/* DWARF original prototype: void  flush(HardwareSerial * this) */

void __thiscall HardwareSerial::flush(HardwareSerial *this)

{
  if (this->_written != false) {
    do {
    } while ((this->_serial).tx_head != (this->_serial).tx_tail);
  }
  return;
}


////>>0x080042ac>>_rx_complete_irq>>////

/* WARNING: Unknown calling convention */

void HardwareSerial::_rx_complete_irq(serial_t_conflict *obj)

{
  int iVar1;
  rx_buffer_index_t i;
  ushort uVar2;
  uchar c;
  
  iVar1 = uart_getc((serial_t *)obj,&c);
  if ((iVar1 == 0) && (uVar2 = obj->rx_head + 1 & 0x3f, uVar2 != obj->rx_tail)) {
    obj->rx_buff[obj->rx_head] = c;
    obj->rx_head = uVar2;
  }
  return;
}


////>>0x080042e8>>write>>////

/* DWARF original prototype: size_t  write(HardwareSerial * this, uint8_t c) */

ssize_t __thiscall HardwareSerial::write(HardwareSerial *this,int __fd,void *__buf,size_t __n)

{
  byte bVar1;
  uint8_t uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  tx_buffer_index_t i;
  
  this->_written = true;
  uVar5 = (uint)(this->_serial).tx_head;
  iVar4 = uVar5 + 1;
  bVar1 = (byte)iVar4;
  bVar3 = bVar1 & 0x7f;
  if (iVar4 == 0) {
    bVar3 = -(-bVar1 & 0x7f);
  }
  do {
  } while ((this->_serial).tx_tail == (ushort)bVar3);
  (this->_serial).tx_buff[uVar5] = (uint8_t)__fd;
  (this->_serial).tx_head = (ushort)bVar3;
  uVar2 = serial_tx_active((serial_t *)&this->_serial);
  if (uVar2 == '\0') {
    uart_attach_tx_callback((serial_t *)&this->_serial,_tx_complete_irq + 1);
  }
  return 1;
}


////>>0x08004338>>serialEventRun>>////

/* WARNING: Removing unreachable block (ram,0x0800433e) */
/* WARNING: Removing unreachable block (ram,0x08004350) */
/* WARNING: Removing unreachable block (ram,0x08004346) */
/* WARNING: Removing unreachable block (ram,0x08004358) */
/* WARNING: Unknown calling convention */

void serialEventRun(void)

{
  return;
}


////>>0x08004364>>init>>////

/* DWARF original prototype: void  init(HardwareSerial * this) */

int __thiscall HardwareSerial::init(HardwareSerial *this,EVP_PKEY_CTX *ctx)

{
  (this->_serial).rx_buff = this->_rx_buffer;
  (this->_serial).rx_head = 0;
  (this->_serial).rx_tail = 0;
  (this->_serial).tx_buff = this->_tx_buffer;
  (this->_serial).tx_head = 0;
  (this->_serial).tx_tail = 0;
  return (int)this;
}


////>>0x08004388>>begin>>////

/* DWARF original prototype: void  begin(HardwareSerial * this, ulong baud, byte config) */

void __thiscall HardwareSerial::begin(HardwareSerial *this,ulong baud,byte config)

{
  byte bVar1;
  int iVar2;
  
  (this->_serial).baudrate = baud;
  this->_config = config;
  bVar1 = config & 7;
  if (bVar1 == 4) {
    iVar2 = 7;
  }
  else if (bVar1 == 6) {
    iVar2 = 8;
  }
  else if (bVar1 == 2) {
    iVar2 = 6;
  }
  else {
    iVar2 = 0;
  }
  if ((config & 0x30) == 0x30) {
    (this->_serial).parity = 0x600;
    iVar2 = iVar2 + 1;
  }
  else if ((config & 0x20) == 0) {
    (this->_serial).parity = 0;
  }
  else {
    (this->_serial).parity = 0x400;
    iVar2 = iVar2 + 1;
  }
  if ((config & 8) == 0) {
    (this->_serial).stopbits = 0;
  }
  else {
    (this->_serial).stopbits = 0x2000;
  }
  if (iVar2 == 8) {
    (this->_serial).databits = 0;
  }
  else if (iVar2 == 9) {
    (this->_serial).databits = 0x1000;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    uart_init((serial_t *)&this->_serial);
    uart_attach_rx_callback((serial_t *)&this->_serial,_rx_complete_irq + 1);
    return;
  }
                    
  __assert_func("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/cores/arduino/HardwareSerial.cpp"
                ,299,"void HardwareSerial::begin(long unsigned int, byte)","databits!=0");
}


////>>0x08004444>>setRx>>////

/* DWARF original prototype: void  setRx(HardwareSerial * this, uint32_t _rx) */

void __thiscall HardwareSerial::setRx(HardwareSerial *this,uint32_t _rx)

{
  PinName PVar1;
  
  if (_rx < 0x60) {
    PVar1 = *(PinName *)(&digitalPin + _rx * 2);
  }
  else {
    PVar1 = NC;
  }
  (this->_serial).pin_rx = PVar1;
  return;
}


////>>0x08004460>>setTx>>////

/* DWARF original prototype: void  setTx(HardwareSerial * this, uint32_t _tx) */

void __thiscall HardwareSerial::setTx(HardwareSerial *this,uint32_t _tx)

{
  PinName PVar1;
  
  if (_tx < 0x60) {
    PVar1 = *(PinName *)(&digitalPin + _tx * 2);
  }
  else {
    PVar1 = NC;
  }
  (this->_serial).pin_tx = PVar1;
  return;
}


////>>0x0800447c>>HardwareSerial>>////

/* DWARF original prototype: HardwareSerial *  HardwareSerial(HardwareSerial * this, void *
   peripheral) */

HardwareSerial * __thiscall HardwareSerial::HardwareSerial(HardwareSerial *this,void *peripheral)

{
  PinName_conflict PVar1;
  EVP_PKEY_CTX *extraout_r1;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY_CTX *extraout_r1_00;
  
  (this->super_Stream).super_Print.write_error = 0;
  (this->super_Stream)._timeout = 1000;
  (this->super_Stream).super_Print._vptr_Print = (_func_int_varargs **)&PTR_write_1_08005ed4;
  if (this == &Serial3) {
    setRx(&Serial3,0x4c);
    setTx(&Serial3,0x4d);
    ctx = extraout_r1_00;
  }
  else {
    PVar1 = pinmap_pin(peripheral,(PinMap_conflict *)&PinMap_UART_RX);
    (this->_serial).pin_rx = PVar1;
    PVar1 = pinmap_pin(peripheral,(PinMap_conflict *)&PinMap_UART_TX);
    (this->_serial).pin_tx = PVar1;
    ctx = extraout_r1;
  }
  init(this,ctx);
  return this;
}


////>>0x080044d8>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if (__initialize_p != 1) {
    return;
  }
  if (__priority == 0xffff) {
    HardwareSerial::HardwareSerial(&Serial3,(void *)0x40004800);
  }
  return;
}


////>>0x080044fc>>_GLOBAL__sub_I_Serial3>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I_Serial3(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x0800450a>>printTo>>////

/* DWARF original prototype: size_t  printTo(IPAddress * this, Print * p) */

size_t __thiscall IPAddress::printTo(IPAddress *this,Print *p)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    sVar1 = Print::print(p,(this->_address).bytes[iVar3],10);
    sVar2 = Print::print(p,'.');
    iVar4 = iVar4 + sVar1 + sVar2;
  }
  sVar1 = Print::print(p,(this->_address).bytes[3],10);
  return sVar1 + iVar4;
}


////>>0x08004544>>IPAddress>>////

/* DWARF original prototype: IPAddress *  IPAddress(IPAddress * this, uint8_t first_octet, uint8_t
   second_octet, uint8_t third_octet, uint8_t fourth_octet) */

IPAddress * __thiscall
IPAddress::IPAddress
          (IPAddress *this,uint8_t first_octet,uint8_t second_octet,uint8_t third_octet,
          uint8_t fourth_octet)

{
  (this->super_Printable)._vptr_Printable = (_func_int_varargs **)&DAT_08005f28;
  (this->_address).bytes[0] = first_octet;
  (this->_address).bytes[1] = second_octet;
  (this->_address).bytes[2] = third_octet;
  (this->_address).bytes[3] = fourth_octet;
  return this;
}


////>>0x08004560>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if ((__initialize_p == 1) && (__priority == 0xffff)) {
    IPAddress::IPAddress(&INADDR_NONE,'\0','\0','\0','\0');
    return;
  }
  return;
}


////>>0x0800458c>>_GLOBAL__sub_I__ZN9IPAddressC2Ev>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__ZN9IPAddressC2Ev(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x0800459a>>write>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080045ae */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  write(Print * this, uint8_t * buffer, size_t size) */

ssize_t __thiscall Print::write(Print *this,int __fd,void *__buf,size_t __n)

{
  Print *pPVar1;
  int iVar2;
  
  iVar2 = 0;
  pPVar1 = this;
  while( true ) {
    if (__buf == (void *)0x0) {
      return iVar2;
    }
    pPVar1 = (Print *)(**this->_vptr_Print)(pPVar1,(uint)*(byte *)__fd,__buf,*this->_vptr_Print,__n)
    ;
    if (pPVar1 == (Print *)0x0) break;
    iVar2 = iVar2 + 1;
    __fd = (int)(__fd + 1);
    __buf = (void *)((int)__buf + -1);
  }
  return iVar2;
}


////>>0x080045be>>print>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080045c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  print(Print * this, char c) */

size_t __thiscall Print::print(Print *this,char c)

{
  size_t sVar1;
  
  sVar1 = (**this->_vptr_Print)(this,(int)c);
  return sVar1;
}


////>>0x080045c8>>printNumber>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08004618 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  printNumber(Print * this, ulong n, uint8_t base) */

size_t __thiscall Print::printNumber(Print *this,ulong n,uint8_t base)

{
  char cVar1;
  char c;
  size_t sVar2;
  size_t sVar3;
  ulong m;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *__s;
  char buf [33];
  
  uVar5 = (uint)base;
  buf[32] = '\0';
  if (uVar5 < 2) {
    uVar5 = 10;
  }
  __s = buf + 0x20;
  m = n;
  do {
    uVar6 = m / uVar5;
    uVar4 = (m & 0xff) - ((int)(short)uVar6 * (int)(short)uVar5 & 0xffU) & 0xff;
    __s = __s + -1;
    cVar1 = (char)uVar4;
    if (uVar4 < 10) {
      cVar1 = cVar1 + '0';
    }
    else {
      cVar1 = cVar1 + '7';
    }
    *__s = cVar1;
    m = uVar6;
  } while (uVar6 != 0);
  if (__s == (char *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar2 = strlen(__s);
    sVar3 = (*this->_vptr_Print[1])(sVar2,__s,sVar2);
  }
  return sVar3;
}


////>>0x08004622>>print>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08004634 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  print(Print * this, ulong n, int base) */

size_t __thiscall Print::print(Print *this,ulong n,int base)

{
  size_t sVar1;
  
  if (base != 0) {
    sVar1 = printNumber(this,n,(uint8_t)base);
    return sVar1;
  }
  sVar1 = (**this->_vptr_Print)(this,n & 0xff);
  return sVar1;
}


////>>0x08004638>>print>>////

/* DWARF original prototype: size_t  print(Print * this, uchar b, int base) */

size_t __thiscall Print::print(Print *this,uchar b,int base)

{
  size_t sVar1;
  
  sVar1 = print(this,(uint)b,base);
  return sVar1;
}


////>>0x08004640>>makeWord>>////

/* WARNING: Unknown calling convention */

uint16_t makeWord(uint8_t h,uint8_t l)

{
  return CONCAT11(h,l);
}


////>>0x08004646>>initVariant>>////

/* WARNING: Unknown calling convention */

void initVariant(void)

{
  return;
}


////>>0x08004648>>premain>>////

/* WARNING: Unknown calling convention */

void premain(void)

{
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)0x3;
  HAL_NVIC_SetPriorityGrouping(3);
  init(ctx);
  return;
}


////>>0x08004658>>main>>////

/* WARNING: Unknown calling convention */

int main(void)

{
  initVariant();
  setup();
  do {
    loop();
    serialEventRun();
  } while( true );
}


////>>0x08004678>>get_pin_id>>////

/* WARNING: Unknown calling convention */

uint8_t get_pin_id(uint16_t pin)

{
  uint uVar1;
  uint8_t uVar2;
  
  uVar2 = '\0';
  for (uVar1 = (uint)pin; uVar1 != 1; uVar1 = uVar1 >> 1) {
    uVar2 = uVar2 + '\x01';
  }
  return uVar2;
}


////>>0x0800468c>>__tcf_0>>////

/* WARNING: Unknown calling convention */

void __tcf_0(void *param_1)

{
  gpio_irq_conf_str *pgVar1;
  _Manager_type p_Var2;
  gpio_irq_conf_str *pgVar3;
  
  pgVar1 = (gpio_irq_conf_str *)&__malloc_free_list;
  while (pgVar3 = pgVar1, pgVar3 != gpio_irq_conf) {
    p_Var2 = pgVar3[-1].callback.super__Function_base._M_manager;
    pgVar1 = pgVar3 + -1;
    if (p_Var2 != (_Manager_type)0x0) {
      (*p_Var2)((_Any_data *)&pgVar3[-1].callback,(_Any_data *)&pgVar3[-1].callback,
                __destroy_functor);
    }
  }
  return;
}


////>>0x080046b4>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if (__initialize_p != 1) {
    return;
  }
  if (__priority == 0xffff) {
    gpio_irq_conf[0].irqnb = EXTI0_IRQn;
    gpio_irq_conf[0].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[1].irqnb = EXTI1_IRQn;
    gpio_irq_conf[1].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[2].irqnb = EXTI2_IRQn;
    gpio_irq_conf[2].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[3].irqnb = EXTI3_IRQn;
    gpio_irq_conf[3].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[4].irqnb = EXTI4_IRQn;
    gpio_irq_conf[4].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[5].irqnb = EXTI9_5_IRQn;
    gpio_irq_conf[5].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[6].irqnb = EXTI9_5_IRQn;
    gpio_irq_conf[6].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[7].irqnb = EXTI9_5_IRQn;
    gpio_irq_conf[7].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[8].irqnb = EXTI9_5_IRQn;
    gpio_irq_conf[8].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[9].irqnb = EXTI9_5_IRQn;
    gpio_irq_conf[9].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[10].irqnb = EXTI15_10_IRQn;
    gpio_irq_conf[10].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[11].irqnb = EXTI15_10_IRQn;
    gpio_irq_conf[11].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[12].irqnb = EXTI15_10_IRQn;
    gpio_irq_conf[12].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[13].irqnb = EXTI15_10_IRQn;
    gpio_irq_conf[13].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[14].irqnb = EXTI15_10_IRQn;
    gpio_irq_conf[14].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    gpio_irq_conf[15].irqnb = EXTI15_10_IRQn;
    gpio_irq_conf[15].callback.super__Function_base._M_manager = (_Manager_type)0x0;
    __aeabi_atexit(0,0x800468d,0x20000000);
  }
  return;
}


////>>0x08004760>>EXTI0_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI0_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(1);
  return;
}


////>>0x0800476a>>EXTI1_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI1_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(2);
  return;
}


////>>0x08004774>>EXTI2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI2_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(4);
  return;
}


////>>0x0800477e>>EXTI3_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI3_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(8);
  return;
}


////>>0x08004788>>EXTI4_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI4_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(0x10);
  return;
}


////>>0x08004792>>EXTI9_5_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI9_5_IRQHandler(void)

{
  uint uVar1;
  
  for (uVar1 = 0x20; uVar1 < 0x201; uVar1 = uVar1 << 1) {
    HAL_GPIO_EXTI_IRQHandler((uint16_t)uVar1);
  }
  return;
}


////>>0x080047a8>>EXTI15_10_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI15_10_IRQHandler(void)

{
  uint uVar1;
  
  for (uVar1 = 0x400; uVar1 < 0x8001; uVar1 = uVar1 << 1) {
    HAL_GPIO_EXTI_IRQHandler((uint16_t)uVar1);
  }
  return;
}


////>>0x080047c0>>operator()>>////

/* DWARF original prototype: void  operator()(function<void()> * this) */

void __thiscall std::function<void()>::operator()(function<void()> *this)

{
  if ((this->super__Function_base)._M_manager != (_Manager_type)0x0) {
    (*this->_M_invoker)((_Any_data *)this);
    return;
  }
                    
  __throw_bad_function_call();
}


////>>0x080047d0>>HAL_GPIO_EXTI_Callback>>////

/* WARNING: Unknown calling convention */

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)

{
  byte bVar1;
  uint8_t irq_id;
  
  bVar1 = get_pin_id(GPIO_Pin);
  if (gpio_irq_conf[bVar1].callback.super__Function_base._M_manager != (_Manager_type)0x0) {
    std::function<void()>::operator()(&gpio_irq_conf[bVar1].callback);
  }
  return;
}


////>>0x080047f0>>_GLOBAL__sub_I__Z22stm32_interrupt_enableP12GPIO_TypeDeftSt8functionIFvvEEm>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__Z22stm32_interrupt_enableP12GPIO_TypeDeftSt8functionIFvvEEm(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x080047fe>>__aeabi_atexit>>////

void __aeabi_atexit(undefined4 param_1,undefined4 param_2)

{
  __cxa_atexit(param_2,param_1);
  return;
}


////>>0x08004808>>__assert_func>>////

void __assert_func(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  char *pcVar1;
  
  if (param_3 == (char *)0x0) {
    param_3 = "";
    pcVar1 = param_3;
  }
  else {
    pcVar1 = ", function: ";
  }
  fiprintf(*(FILE **)(_impure_ptr + 0xc),"assertion \"%s\" failed: file \"%s\", line %d%s%s\n",
           param_4,param_1,param_2,pcVar1,param_3,param_4);
                    
  abort();
}


////>>0x08004844>>__cxa_atexit>>////

/* WARNING: Removing unreachable block (ram,0x0800484c) */

longlong __cxa_atexit(undefined4 param_1,uint param_2)

{
  return (ulonglong)param_2 << 0x20;
}


////>>0x08004860>>fiprintf>>////

int fiprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  iVar1 = _vfiprintf_r(_impure_ptr,__stream,__format,&uStack_8,__stream,&uStack_8);
  return iVar1;
}


////>>0x08004884>>__libc_init_array>>////

void __libc_init_array(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    (*(code *)(&__preinit_array_end)[iVar1])();
  }
  _init();
  for (iVar1 = 0; iVar1 != 10; iVar1 = iVar1 + 1) {
    (*(code *)(&__preinit_array_end)[iVar1])();
  }
  return;
}


////>>0x080048cc>>memset>>////

void * memset(void *__s,int __c,size_t __n)

{
  undefined *puVar1;
  
  for (puVar1 = (undefined *)__s; puVar1 != (undefined *)(__n + (int)__s); puVar1 = puVar1 + 1) {
    *puVar1 = (char)__c;
  }
  return __s;
}


////>>0x080048dc>>_free_r>>////

void _free_r(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int **extraout_r1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    return;
  }
  ppiVar5 = (int **)(param_2 + -4);
  if (*(int *)(param_2 + -4) < 0) {
    ppiVar5 = (int **)((int)ppiVar5 + *(int *)(param_2 + -4));
  }
  __malloc_lock();
  ppiVar3 = (int **)&__malloc_free_list;
  if (__malloc_free_list == (int **)0x0) {
    ppiVar5[1] = (int *)0x0;
    ppiVar2 = extraout_r1;
    __malloc_free_list = ppiVar5;
  }
  else {
    ppiVar3 = __malloc_free_list;
    if (ppiVar5 < __malloc_free_list) {
      ppiVar2 = (int **)*ppiVar5;
      ppiVar3 = (int **)((int)ppiVar5 + (int)ppiVar2);
      bVar6 = __malloc_free_list == ppiVar3;
      if (bVar6) {
        ppiVar3 = (int **)*__malloc_free_list;
        __malloc_free_list = (int **)__malloc_free_list[1];
      }
      ppiVar5[1] = (int *)__malloc_free_list;
      __malloc_free_list = ppiVar5;
      if (bVar6) {
        ppiVar3 = (int **)((int)ppiVar3 + (int)ppiVar2);
        *ppiVar5 = (int *)ppiVar3;
      }
    }
    else {
      do {
        ppiVar4 = ppiVar3;
        ppiVar3 = (int **)ppiVar4[1];
        if (ppiVar3 == (int **)0x0) break;
      } while (ppiVar3 <= ppiVar5);
      ppiVar2 = (int **)*ppiVar4;
      if ((int **)((int)ppiVar4 + (int)ppiVar2) == ppiVar5) {
        ppiVar2 = (int **)((int)ppiVar2 + (int)*ppiVar5);
        *ppiVar4 = (int *)ppiVar2;
        if (ppiVar3 == (int **)((int)ppiVar4 + (int)ppiVar2)) {
          piVar1 = *ppiVar3;
          ppiVar3 = (int **)ppiVar3[1];
          ppiVar4[1] = (int *)ppiVar3;
          ppiVar2 = (int **)((int)ppiVar2 + (int)piVar1);
          *ppiVar4 = (int *)ppiVar2;
        }
      }
      else if (ppiVar5 < (int **)((int)ppiVar4 + (int)ppiVar2)) {
        *param_1 = 0xc;
      }
      else {
        ppiVar2 = (int **)((int)ppiVar5 + (int)*ppiVar5);
        bVar6 = ppiVar3 == ppiVar2;
        if (bVar6) {
          ppiVar2 = (int **)*ppiVar3;
          ppiVar3 = (int **)ppiVar3[1];
        }
        ppiVar5[1] = (int *)ppiVar3;
        if (bVar6) {
          ppiVar2 = (int **)((int)ppiVar2 + (int)*ppiVar5);
          *ppiVar5 = (int *)ppiVar2;
        }
        ppiVar4[1] = (int *)ppiVar5;
      }
    }
  }
  __malloc_unlock(param_1,ppiVar2,ppiVar3,param_4);
  return;
}


////>>0x08004978>>_malloc_r>>////

uint _malloc_r(undefined4 *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = (param_2 + 3 & 0xfffffffc) + 8;
  if (uVar6 < 0xc) {
    uVar6 = 0xc;
  }
  if (((int)uVar6 < 0) || (uVar6 < param_2)) {
    *param_1 = 0xc;
  }
  else {
    __malloc_lock();
    puVar1 = __malloc_free_list;
    puVar5 = __malloc_free_list;
    while (puVar3 = puVar1, puVar3 != (uint *)0x0) {
      uVar4 = *puVar3 - uVar6;
      if (-1 < (int)uVar4) {
        if (uVar4 < 0xc) {
          if (puVar5 == puVar3) {
            puVar1 = (uint *)puVar5[1];
          }
          else {
            puVar1 = (uint *)puVar3[1];
          }
          if (puVar5 != puVar3) {
            puVar5[1] = (uint)puVar1;
            puVar5 = puVar3;
            puVar1 = __malloc_free_list;
          }
        }
        else {
          *puVar3 = uVar4;
          *(uint *)((int)puVar3 + uVar4) = uVar6;
          puVar5 = (uint *)((int)puVar3 + uVar4);
          puVar1 = __malloc_free_list;
        }
        goto LAB_080049dc;
      }
      puVar5 = puVar3;
      puVar1 = (uint *)puVar3[1];
    }
    if (__malloc_sbrk_start == 0) {
      __malloc_sbrk_start = _sbrk_r(param_1);
    }
    puVar1 = (uint *)_sbrk_r(param_1,uVar6);
    if ((puVar1 != (uint *)0xffffffff) &&
       ((puVar5 = (uint *)((int)puVar1 + 3U & 0xfffffffc), puVar1 == puVar5 ||
        (iVar2 = _sbrk_r(param_1,(int)puVar5 - (int)puVar1), iVar2 != -1)))) {
      *puVar5 = uVar6;
      puVar1 = __malloc_free_list;
LAB_080049dc:
      __malloc_free_list = puVar1;
      __malloc_unlock(param_1);
      uVar6 = (int)puVar5 + 0xbU & 0xfffffff8;
      iVar2 = uVar6 - (int)(puVar5 + 1);
      if (iVar2 != 0) {
        *(int *)((int)puVar5 + iVar2) = -iVar2;
        return uVar6;
      }
      return uVar6;
    }
    *param_1 = 0xc;
    __malloc_unlock(param_1);
  }
  return 0;
}


////>>0x08004a34>>__sfputc_r>>////

uint __sfputc_r(undefined4 param_1,byte param_2,byte **param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_3[2] + -1;
  param_3[2] = pbVar2;
  if (((int)pbVar2 < 0) && (((int)pbVar2 < (int)param_3[6] || (param_2 == 10)))) {
    uVar1 = __swbuf_r();
    return uVar1;
  }
  pbVar2 = *param_3;
  *param_3 = pbVar2 + 1;
  *pbVar2 = param_2;
  return (uint)param_2;
}


////>>0x08004a60>>__sfputs_r>>////

int __sfputs_r(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = param_3 + param_4;
  iVar3 = param_4;
  do {
    if (param_3 == puVar2) {
      return 0;
    }
    iVar1 = __sfputc_r(param_1,*param_3,param_2,param_4,iVar3);
    param_4 = iVar1 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return iVar1;
}


////>>0x08004a84>>_vfiprintf_r>>////

/* WARNING: Removing unreachable block (ram,0x08004c58) */

int _vfiprintf_r(int param_1,undefined4 *param_2,byte *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  int unaff_r9;
  int iVar7;
  int *local_8c;
  uint local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  int local_74;
  byte local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_45;
  undefined4 local_30;
  
  local_8c = param_4;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    __sinit();
  }
  if (param_2 == &__sf_fake_stdin) {
    param_2 = *(undefined4 **)(param_1 + 4);
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stdout) {
    param_2 = *(undefined4 **)(param_1 + 8);
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stderr) {
    param_2 = *(undefined4 **)(param_1 + 0xc);
  }
  if (((-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1c)) || (param_2[4] == 0)) &&
     (iVar7 = __swsetup_r(param_1,param_2), iVar7 != 0)) {
    return -1;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar5 = param_3;
LAB_08004ac6:
  pbVar6 = pbVar5;
  if (*pbVar6 != 0) goto LAB_08004b7c;
  goto LAB_08004ad0;
LAB_08004b7c:
  pbVar5 = pbVar6 + 1;
  if (*pbVar6 != 0x25) goto LAB_08004ac6;
LAB_08004ad0:
  iVar7 = (int)pbVar6 - (int)param_3;
  if (iVar7 != 0) {
    iVar2 = __sfputs_r(param_1,param_2,param_3,iVar7);
    if (iVar2 == -1) {
LAB_08004c70:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar7;
  }
  if (*pbVar6 == 0) goto LAB_08004c70;
  local_88 = 0;
  local_7c = 0;
  local_84 = -1;
  local_80 = 0;
  local_45 = 0;
  local_30 = 0;
  pbVar5 = pbVar6 + 1;
  while( true ) {
    pvVar3 = memchr("#-0+ ",(uint)*pbVar5,5);
    param_3 = pbVar5 + 1;
    if (pvVar3 == (void *)0x0) break;
    local_88 = 1 << ((int)pvVar3 + 0xf7ffa094U & 0xff) | local_88;
    pbVar5 = param_3;
  }
  if ((int)(local_88 << 0x1b) < 0) {
    local_45 = 0x20;
  }
  if ((int)(local_88 << 0x1c) < 0) {
    local_45 = 0x2b;
  }
  if (*pbVar5 == 0x2a) {
    piVar4 = local_8c + 1;
    iVar7 = *local_8c;
    local_8c = piVar4;
    if (iVar7 < 0) {
      local_7c = -iVar7;
      local_88 = local_88 | 2;
      goto LAB_08004bae;
    }
  }
  else {
    bVar1 = false;
    iVar7 = local_7c;
    param_3 = pbVar5;
    while( true ) {
      if (9 < *param_3 - 0x30) break;
      iVar7 = iVar7 * 10 + (*param_3 - 0x30);
      bVar1 = true;
      param_3 = param_3 + 1;
    }
    if (!bVar1) goto LAB_08004bae;
  }
  local_7c = iVar7;
LAB_08004bae:
  if (*param_3 == 0x2e) {
    if (param_3[1] == 0x2a) {
      local_84 = *local_8c;
      if (local_84 < 0) {
        local_84 = -1;
      }
      param_3 = param_3 + 2;
      local_8c = local_8c + 1;
    }
    else {
      bVar1 = false;
      local_84 = 0;
      iVar7 = 0;
      while( true ) {
        param_3 = param_3 + 1;
        if (9 < *param_3 - 0x30) break;
        iVar7 = iVar7 * 10 + (*param_3 - 0x30);
        bVar1 = true;
      }
      if (bVar1) {
        local_84 = iVar7;
      }
    }
  }
  pvVar3 = memchr(&DAT_08005f72,(uint)*param_3,3);
  if (pvVar3 != (void *)0x0) {
    local_88 = local_88 | 0x40 << ((int)pvVar3 + 0xf7ffa08eU & 0xff);
    param_3 = param_3 + 1;
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  pvVar3 = memchr("efgEFG",(uint)local_70,6);
  if (pvVar3 == (void *)0x0) {
    unaff_r9 = _printf_i(param_1,&local_88,param_2,0x8004a61,&local_8c);
    if (unaff_r9 == -1) goto LAB_08004c70;
  }
  else {
    local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
  }
  local_74 = local_74 + unaff_r9;
  pbVar5 = param_3;
  goto LAB_08004ac6;
}


////>>0x08004cb0>>_printf_common>>////

undefined4
_printf_common(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = param_2[4];
  if ((int)param_2[4] < (int)param_2[2]) {
    uVar3 = param_2[2];
  }
  *param_3 = uVar3;
  if (*(char *)((int)param_2 + 0x43) != '\0') {
    *param_3 = uVar3 + 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *param_3 = *param_3 + 2;
  }
  if ((*param_2 & 6) == 0) {
    for (iVar1 = 0; iVar1 < (int)(param_2[3] - *param_3); iVar1 = iVar1 + 1) {
      iVar2 = (*param_5)(param_1,param_4,(int)param_2 + 0x19,1);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
    }
  }
  uVar3 = (uint)*(byte *)((int)param_2 + 0x43);
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *(undefined *)((int)param_2 + uVar3 + 0x43) = 0x30;
    *(undefined *)((int)param_2 + uVar3 + 0x44) = *(undefined *)((int)param_2 + 0x45);
    uVar3 = uVar3 + 2;
  }
  iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x43,uVar3);
  if (iVar1 != -1) {
    uVar3 = param_2[3];
    bVar5 = (*param_2 & 6) == 4;
    if (bVar5) {
      uVar3 = uVar3 - *param_3;
    }
    if (bVar5) {
      uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
    }
    else {
      uVar3 = 0;
    }
    if ((int)param_2[4] < (int)param_2[2]) {
      uVar3 = uVar3 + (param_2[2] - param_2[4]);
    }
    uVar4 = 0;
    while( true ) {
      if (uVar3 == uVar4) {
        return 0;
      }
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x1a,1);
      if (iVar1 == -1) break;
      uVar4 = uVar4 + 1;
    }
  }
  return 0xffffffff;
}


////>>0x08004d9c>>_printf_i>>////

uint _printf_i(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint **ppuVar8;
  char **ppcVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *__s;
  uint local_24 [2];
  
  bVar1 = *(byte *)(param_2 + 6);
  __s = (char *)((int)param_2 + 0x43);
  if (bVar1 != 0x6e) {
    if (bVar1 < 0x6f) {
      if (bVar1 != 99) {
        if (bVar1 < 100) {
          if (bVar1 == 0) goto LAB_08004f56;
          if (bVar1 != 0x58) goto LAB_08004dcc;
          *(undefined *)((int)param_2 + 0x45) = 0x58;
          pcVar6 = "0123456789ABCDEF";
LAB_08004ee6:
          uVar7 = *param_2;
          puVar3 = *param_5;
          *param_5 = puVar3 + 1;
          if (((uVar7 & 0x80) == 0) && ((int)(uVar7 << 0x19) < 0)) {
            uVar10 = (uint)*(ushort *)puVar3;
          }
          else {
            uVar10 = *puVar3;
          }
          if ((int)(uVar7 << 0x1f) < 0) {
            *param_2 = uVar7 | 0x20;
          }
          if (uVar10 == 0) {
            *param_2 = *param_2 & 0xffffffdf;
          }
          uVar7 = 0x10;
LAB_08004e7c:
          *(undefined *)((int)param_2 + 0x43) = 0;
        }
        else {
          if ((bVar1 != 100) && (bVar1 != 0x69)) goto LAB_08004dcc;
          uVar10 = *param_2;
          puVar3 = *param_5;
          if ((uVar10 & 0x80) == 0) {
            *param_5 = puVar3 + 1;
            if ((uVar10 & 0x40) == 0) goto LAB_08004dec;
            uVar10 = (uint)(short)*(ushort *)puVar3;
          }
          else {
            *param_5 = puVar3 + 1;
LAB_08004dec:
            uVar10 = *puVar3;
          }
          if ((int)uVar10 < 0) {
            uVar10 = -uVar10;
            *(undefined *)((int)param_2 + 0x43) = 0x2d;
          }
          pcVar6 = "0123456789ABCDEF";
          uVar7 = 10;
        }
        uVar11 = param_2[1];
        param_2[2] = uVar11;
        pcVar12 = __s;
        if ((int)uVar11 < 0) {
          if (uVar10 != 0) goto LAB_08004f1a;
LAB_08004fc8:
          *(char *)((int)param_2 + 0x42) = *pcVar6;
          pcVar12 = (char *)((int)param_2 + 0x42);
        }
        else {
          *param_2 = *param_2 & 0xfffffffb;
          if (uVar10 == 0) {
            if (uVar11 != 0) goto LAB_08004fc8;
          }
          else {
LAB_08004f1a:
            do {
              uVar11 = uVar10 / uVar7;
              pcVar12 = pcVar12 + -1;
              *pcVar12 = pcVar6[uVar10 - uVar7 * uVar11];
              uVar10 = uVar11;
            } while (uVar11 != 0);
          }
        }
        if (((uVar7 == 8) && ((int)(*param_2 << 0x1f) < 0)) && ((int)param_2[1] <= (int)param_2[4]))
        {
          pcVar12[-1] = '0';
          pcVar12 = pcVar12 + -1;
        }
        param_2[4] = (int)__s - (int)pcVar12;
        __s = pcVar12;
        goto LAB_08004ec2;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      *(char *)((int)param_2 + 0x42) = (char)*puVar3;
LAB_08004e2c:
      __s = (char *)((int)param_2 + 0x42);
      uVar10 = 1;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 < 0x74) {
          if (bVar1 == 0x6f) {
LAB_08004e52:
            uVar10 = *param_2;
            puVar3 = *param_5;
            if ((uVar10 & 0x80) == 0) {
              *param_5 = puVar3 + 1;
              if ((uVar10 & 0x40) == 0) goto LAB_08004e60;
              uVar10 = (uint)*(ushort *)puVar3;
            }
            else {
              *param_5 = puVar3 + 1;
LAB_08004e60:
              uVar10 = *puVar3;
            }
            pcVar6 = "0123456789ABCDEF";
            if (bVar1 == 0x6f) {
              uVar7 = 8;
            }
            else {
              uVar7 = 10;
            }
            goto LAB_08004e7c;
          }
          if (bVar1 == 0x70) {
            *param_2 = *param_2 | 0x20;
LAB_08004e12:
            *(undefined *)((int)param_2 + 0x45) = 0x78;
            pcVar6 = "0123456789abcdef";
            goto LAB_08004ee6;
          }
        }
        else {
          if (bVar1 == 0x75) goto LAB_08004e52;
          if (bVar1 == 0x78) goto LAB_08004e12;
        }
LAB_08004dcc:
        *(byte *)((int)param_2 + 0x42) = bVar1;
        goto LAB_08004e2c;
      }
      ppcVar9 = (char **)*param_5;
      *param_5 = (uint *)(ppcVar9 + 1);
      __s = *ppcVar9;
      pvVar4 = memchr(__s,0,param_2[1]);
      if (pvVar4 != (void *)0x0) {
        param_2[1] = (int)pvVar4 - (int)__s;
      }
      uVar10 = param_2[1];
    }
    param_2[4] = uVar10;
    *(undefined *)((int)param_2 + 0x43) = 0;
    goto LAB_08004ec2;
  }
  uVar10 = *param_2;
  ppuVar8 = (uint **)*param_5;
  uVar7 = param_2[5];
  if ((uVar10 & 0x80) == 0) {
    *param_5 = (uint *)(ppuVar8 + 1);
    puVar3 = *ppuVar8;
    if ((uVar10 & 0x40) == 0) goto LAB_08004f42;
    *(short *)puVar3 = (short)uVar7;
  }
  else {
    *param_5 = (uint *)(ppuVar8 + 1);
    puVar3 = *ppuVar8;
LAB_08004f42:
    *puVar3 = uVar7;
  }
LAB_08004f56:
  param_2[4] = 0;
LAB_08004ec2:
  iVar2 = _printf_common(param_1,param_2,local_24,param_3,param_4);
  if ((iVar2 == -1) || (iVar2 = (*param_4)(param_1,param_3,__s,param_2[4]), iVar2 == -1)) {
LAB_08004ed6:
    uVar10 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar2 = 0; iVar2 < (int)(param_2[3] - local_24[0]); iVar2 = iVar2 + 1) {
        iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar5 == -1) goto LAB_08004ed6;
      }
    }
    uVar10 = param_2[3];
    if ((int)param_2[3] < (int)local_24[0]) {
      uVar10 = local_24[0];
    }
  }
  return uVar10;
}


////>>0x08004fdc>>iprintf>>////

int iprintf(char *__format,...)

{
  int iVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  char *pcVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = _impure_ptr;
  pcVar2 = __format;
  uStack_c = in_r1;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  if ((_impure_ptr != 0) && (*(int *)(_impure_ptr + 0x18) == 0)) {
    __sinit(_impure_ptr);
  }
  iVar1 = _vfiprintf_r(iVar1,*(undefined4 *)(iVar1 + 8),__format,&uStack_c,pcVar2,&uStack_c);
  return iVar1;
}


////>>0x0800500c>>_sbrk_r>>////

void _sbrk_r(int *param_1,intptr_t param_2)

{
  void *pvVar1;
  
  errno = 0;
  pvVar1 = _sbrk(param_2);
  if ((pvVar1 == (void *)0xffffffff) && (errno != 0)) {
    *param_1 = errno;
  }
  return;
}


////>>0x0800502c>>__swbuf_r>>////

uint __swbuf_r(int param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    __sinit();
  }
  if (param_3 == &__sf_fake_stdin) {
    param_3 = *(int **)(param_1 + 4);
  }
  else if (param_3 == (int *)&__sf_fake_stdout) {
    param_3 = *(int **)(param_1 + 8);
  }
  else if (param_3 == (int *)&__sf_fake_stderr) {
    param_3 = *(int **)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  uVar2 = (uint)*(ushort *)(param_3 + 3);
  iVar1 = uVar2 << 0x1c;
  if (((iVar1 < 0) && (uVar2 = param_3[4], uVar2 != 0)) ||
     (iVar1 = __swsetup_r(param_1,param_3,iVar1,uVar2,param_4), iVar1 == 0)) {
    iVar1 = *param_3 - param_3[4];
    param_2 = param_2 & 0xff;
    if ((iVar1 < param_3[5]) || (iVar1 = _fflush_r(param_1,param_3), iVar1 == 0)) {
      param_3[2] = param_3[2] + -1;
      puVar3 = (undefined *)*param_3;
      *param_3 = (int)(puVar3 + 1);
      *puVar3 = (char)param_2;
      if (iVar1 + 1 != param_3[5]) {
        if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x1f)) {
          return param_2;
        }
        if (param_2 != 10) {
          return param_2;
        }
      }
      iVar1 = _fflush_r(param_1,param_3);
      if (iVar1 == 0) {
        return param_2;
      }
    }
  }
  return 0xffffffff;
}


////>>0x080050d0>>__swsetup_r>>////

uint __swsetup_r(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  iVar1 = _impure_ptr;
  if ((_impure_ptr != 0) && (*(int *)(_impure_ptr + 0x18) == 0)) {
    __sinit(_impure_ptr);
  }
  if (param_2 == &__sf_fake_stdin) {
    param_2 = *(undefined4 **)(iVar1 + 4);
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stdout) {
    param_2 = *(undefined4 **)(iVar1 + 8);
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stderr) {
    param_2 = *(undefined4 **)(iVar1 + 0xc);
  }
  uVar3 = *(ushort *)(param_2 + 3);
  uVar2 = (uint)uVar3;
  if (-1 < (int)(uVar2 << 0x1c)) {
    if (-1 < (int)(uVar2 << 0x1b)) {
      *param_1 = 9;
      goto LAB_08005100;
    }
    if ((int)(uVar2 << 0x1d) < 0) {
      if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
        if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
          _free_r(param_1);
        }
        param_2[0xd] = 0;
      }
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xffdb;
      param_2[1] = 0;
      *param_2 = param_2[4];
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 8;
  }
  if ((param_2[4] == 0) && ((*(ushort *)(param_2 + 3) & 0x280) != 0x200)) {
    __smakebuf_r(param_1,param_2);
  }
  uVar3 = *(ushort *)(param_2 + 3);
  uVar2 = uVar3 & 1;
  if ((uVar3 & 1) == 0) {
    if (-1 < (int)((uint)uVar3 << 0x1e)) {
      uVar2 = param_2[5];
    }
    param_2[2] = uVar2;
  }
  else {
    param_2[2] = 0;
    param_2[6] = -param_2[5];
  }
  if (param_2[4] == 0) {
    uVar3 = *(ushort *)(param_2 + 3);
    uVar2 = (int)(short)uVar3 & 0x80;
    if (uVar2 != 0) {
LAB_08005100:
      *(ushort *)(param_2 + 3) = uVar3 | 0x40;
      return 0xffffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x080051ac>>abort>>////



void abort(void)

{
  raise(6);
                    
  _exit(1);
}


////>>0x080051bc>>__sflush_r>>////

undefined4 __sflush_r(uint *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  uVar4 = *(ushort *)(param_2 + 3);
  uVar3 = (uint)uVar4;
  if ((int)(uVar3 << 0x1c) < 0) {
    iVar1 = param_2[4];
    if (iVar1 != 0) {
      iVar5 = uVar3 << 0x1e;
      bVar9 = iVar5 == 0;
      iVar7 = *param_2;
      if (bVar9) {
        iVar5 = param_2[5];
      }
      *param_2 = iVar1;
      if (!bVar9) {
        iVar5 = 0;
      }
      param_2[2] = iVar5;
      for (iVar7 = iVar7 - iVar1; 0 < iVar7; iVar7 = iVar7 - iVar5) {
        iVar5 = (*(code *)param_2[10])(param_1,param_2[8],iVar1,iVar7);
        if (iVar5 < 1) {
          uVar4 = *(ushort *)(param_2 + 3);
          goto LAB_080052b2;
        }
        iVar1 = iVar1 + iVar5;
      }
    }
  }
  else if (((0 < param_2[1]) || (0 < param_2[0x10])) &&
          (pcVar6 = (code *)param_2[0xb], pcVar6 != (code *)0x0)) {
    uVar8 = *param_1;
    *param_1 = 0;
    if ((uVar4 & 0x1000) == 0) {
      iVar1 = (*pcVar6)(param_1,param_2[8],uVar3 & 0x1000,1);
      if ((iVar1 == -1) && (uVar3 = *param_1, uVar3 != 0)) {
        if ((uVar3 != 0x1d) && (uVar3 != 0x16)) {
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
          return 0xffffffff;
        }
        *param_1 = uVar8;
        return 0;
      }
    }
    else {
      iVar1 = param_2[0x15];
    }
    if (((int)((uint)*(ushort *)(param_2 + 3) << 0x1d) < 0) &&
       (iVar1 = iVar1 - param_2[1], param_2[0xd] != 0)) {
      iVar1 = iVar1 - param_2[0x10];
    }
    iVar1 = (*(code *)param_2[0xb])(param_1,param_2[8],iVar1,0);
    uVar4 = *(ushort *)(param_2 + 3);
    if ((iVar1 == -1) &&
       ((0x1d < *param_1 || (-1 < (int)((0x20400001U >> (*param_1 & 0xff)) << 0x1f))))) {
LAB_080052b2:
      *(ushort *)(param_2 + 3) = uVar4 | 0x40;
      return 0xffffffff;
    }
    param_2[1] = 0;
    *param_2 = param_2[4];
    if (((int)((uint)uVar4 << 0x13) < 0) && ((iVar1 != -1 || (*param_1 == 0)))) {
      param_2[0x15] = iVar1;
    }
    piVar2 = (int *)param_2[0xd];
    *param_1 = uVar8;
    if (piVar2 != (int *)0x0) {
      if (piVar2 != param_2 + 0x11) {
        _free_r(param_1);
      }
      param_2[0xd] = 0;
      return 0;
    }
  }
  return 0;
}


////>>0x080052cc>>_fflush_r>>////

undefined4 _fflush_r(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2[4] != 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      __sinit();
    }
    if (param_2 == &__sf_fake_stdin) {
      param_2 = *(undefined4 **)(param_1 + 4);
    }
    else if (param_2 == (undefined4 *)&__sf_fake_stdout) {
      param_2 = *(undefined4 **)(param_1 + 8);
    }
    else if (param_2 == (undefined4 *)&__sf_fake_stderr) {
      param_2 = *(undefined4 **)(param_1 + 0xc);
    }
    if (*(short *)(param_2 + 3) != 0) {
      uVar1 = __sflush_r(param_1,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


////>>0x08005320>>_cleanup_r>>////

void _cleanup_r(undefined4 param_1)

{
  _fwalk_reent(param_1,0x80052cd);
  return;
}


////>>0x0800532c>>std.isra.0>>////

void std_isra_0(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  memset(param_1 + 0x17,0,8);
  param_1[9] = 0x8005609;
  param_1[10] = 0x800562b;
  param_1[0xb] = 0x8005663;
  param_1[8] = param_1;
  param_1[0xc] = 0x8005687;
  return;
}


////>>0x08005374>>__sfmoreglue>>////

undefined4 * __sfmoreglue(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 + -1) * 0x68;
  puVar1 = (undefined4 *)_malloc_r(param_1,iVar2 + 0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = puVar1 + 3;
    memset(puVar1 + 3,0,iVar2 + 0x68);
  }
  return puVar1;
}


////>>0x080053a0>>__sinit>>////

void __sinit(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar2 = &impure_data;
    *(undefined4 *)(param_1 + 0x28) = 0x8005321;
    if (param_1 == &impure_data) {
      puVar2 = (undefined1 *)0x1;
    }
    if (param_1 == &impure_data) {
      *(undefined1 **)(param_1 + 0x18) = puVar2;
    }
    uVar1 = __sfp();
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = __sfp(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = __sfp(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    std_isra_0(*(undefined4 *)(param_1 + 4),4,0);
    std_isra_0(*(undefined4 *)(param_1 + 8),9,1);
    std_isra_0(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


////>>0x08005400>>__sfp>>////

int * __sfp(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  
  if (DAT_200000bc == 0) {
    __sinit(&impure_data);
  }
  ppiVar3 = (int **)&DAT_200000ec;
  do {
    piVar2 = ppiVar3[2];
    piVar1 = ppiVar3[1];
    while (piVar1 = (int *)((int)piVar1 + -1), -1 < (int)piVar1) {
      if (*(short *)(piVar2 + 3) == 0) {
        *(undefined2 *)((int)piVar2 + 0xe) = 0xffff;
        *(undefined2 *)(piVar2 + 3) = 1;
        piVar2[0x19] = 0;
        *piVar2 = 0;
        piVar2[2] = 0;
        piVar2[1] = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        memset(piVar2 + 0x17,0,8);
        piVar2[0xd] = 0;
        piVar2[0xe] = 0;
        piVar2[0x12] = 0;
        piVar2[0x13] = 0;
        return piVar2;
      }
      piVar2 = piVar2 + 0x1a;
    }
    if (*ppiVar3 == (int *)0x0) {
      piVar1 = (int *)__sfmoreglue(param_1,4);
      *ppiVar3 = piVar1;
      if (piVar1 == (int *)0x0) {
        *param_1 = 0xc;
        return (int *)0x0;
      }
    }
    ppiVar3 = (int **)*ppiVar3;
  } while( true );
}


////>>0x08005478>>_fwalk_reent>>////

uint _fwalk_reent(int param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  for (piVar3 = (int *)(param_1 + 0x48); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    iVar4 = piVar3[2];
    iVar6 = piVar3[1];
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      if ((1 < *(ushort *)(iVar4 + 0xc)) && (iVar2 = *(short *)(iVar4 + 0xe) + 1, iVar2 != 0)) {
        uVar1 = (*param_2)(param_1,iVar4,param_3,iVar2,param_4);
        uVar5 = uVar5 | uVar1;
      }
      iVar4 = iVar4 + 0x68;
    }
  }
  return uVar5;
}


////>>0x080054b4>>__swhatbuf_r>>////

undefined4 __swhatbuf_r(undefined4 param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_4c [4];
  uint local_48;
  
  if ((*(short *)(param_2 + 0xe) < 0) ||
     (iVar1 = _fstat_r(param_1,(int)*(short *)(param_2 + 0xe),auStack_4c), iVar1 < 0)) {
    *param_4 = 0;
    if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x18) < 0) {
      uVar2 = 0x40;
      goto LAB_080054f4;
    }
  }
  else {
    *param_4 = (uint)((local_48 & 0xf000) == 0x2000);
  }
  uVar2 = 0x400;
LAB_080054f4:
  *param_3 = uVar2;
  return 0;
}


////>>0x080054fc>>__smakebuf_r>>////

void __smakebuf_r(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int local_18;
  int *local_14;
  
  if (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1e)) {
    local_18 = param_1;
    local_14 = param_2;
    uVar1 = __swhatbuf_r(param_1,param_2,&local_18,&local_14);
    iVar2 = _malloc_r(param_1,local_18);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0x8005321;
      *param_2 = iVar2;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x80;
      param_2[5] = local_18;
      param_2[4] = iVar2;
      if ((local_14 != (int *)0x0) &&
         (iVar2 = _isatty_r(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0)) {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 1;
      }
      *(ushort *)(param_2 + 3) = uVar1 | *(ushort *)(param_2 + 3);
      return;
    }
    if ((int)(short)*(ushort *)(param_2 + 3) << 0x16 < 0) {
      return;
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 2;
  }
  *param_2 = (int)param_2 + 0x47;
  param_2[4] = (int)param_2 + 0x47;
  param_2[5] = 1;
  return;
}


////>>0x0800557c>>__malloc_lock>>////

void __malloc_lock(void)

{
  return;
}


////>>0x0800557e>>__malloc_unlock>>////

void __malloc_unlock(void)

{
  return;
}


////>>0x08005580>>_raise_r>>////

undefined4 _raise_r(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  __pid_t _Var1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  if (0x1f < param_2) {
    *param_1 = 0x16;
    return 0xffffffff;
  }
  iVar3 = param_1[0x11];
  if ((iVar3 != 0) && (pcVar4 = *(code **)(iVar3 + param_2 * 4), pcVar4 != (code *)0x0)) {
    if (pcVar4 != (code *)0x1) {
      if (pcVar4 == (code *)0xffffffff) {
        *param_1 = 0x16;
        return 1;
      }
      *(undefined4 *)(iVar3 + param_2 * 4) = 0;
      (*pcVar4)(param_2);
    }
    return 0;
  }
  _Var1 = _getpid_r();
  uVar2 = _kill_r(param_1,_Var1,param_2,param_4);
  return uVar2;
}


////>>0x080055d0>>raise>>////

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = _raise_r(_impure_ptr,__sig);
  return iVar1;
}


////>>0x080055e0>>_kill_r>>////

void _kill_r(int *param_1,__pid_t param_2,int param_3)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _kill(param_2,param_3);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
  }
  return;
}


////>>0x08005604>>_getpid_r>>////



__pid_t _getpid_r(void)

{
  return 1;
}


////>>0x08005608>>__sread>>////

void __sread(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = _read_r(param_1,(int)*(short *)(param_2 + 0xe));
  bVar3 = -1 < iVar1;
  if (bVar3) {
    uVar2 = *(int *)(param_2 + 0x54) + iVar1;
  }
  else {
    uVar2 = *(ushort *)(param_2 + 0xc) & 0xffffefff;
  }
  if (bVar3) {
    *(uint *)(param_2 + 0x54) = uVar2;
  }
  if (!bVar3) {
    *(short *)(param_2 + 0xc) = (short)uVar2;
  }
  return;
}


////>>0x0800562a>>__swrite>>////

void __swrite(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    _lseek_r(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  _write_r(param_1,(int)*(short *)(param_2 + 0xe),param_3,param_4);
  return;
}


////>>0x08005662>>__sseek>>////

void __sseek(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  
  iVar1 = _lseek_r(param_1,(int)*(short *)(param_2 + 0xe));
  bVar3 = iVar1 == -1;
  if (bVar3) {
    uVar2 = *(ushort *)(param_2 + 0xc) & 0xefff;
  }
  else {
    *(int *)(param_2 + 0x54) = iVar1;
    uVar2 = *(ushort *)(param_2 + 0xc) | 0x1000;
  }
  if (bVar3) {
    *(ushort *)(param_2 + 0xc) = uVar2;
  }
  if (!bVar3) {
    *(ushort *)(param_2 + 0xc) = uVar2;
  }
  return;
}


////>>0x08005686>>__sclose>>////

void __sclose(undefined4 param_1,int param_2)

{
  _close_r(param_1,(int)*(short *)(param_2 + 0xe));
  return;
}


////>>0x08005690>>_write_r>>////

void _write_r(int *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _write(param_2,param_3,param_4);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
  }
  return;
}


////>>0x080056b4>>_close_r>>////

void _close_r(int *param_1,int param_2)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _close(param_2);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
  }
  return;
}


////>>0x080056d4>>_fstat_r>>////

void _fstat_r(int *param_1,int param_2,stat *param_3)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _fstat(param_2,param_3);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
  }
  return;
}


////>>0x080056f8>>_isatty_r>>////

void _isatty_r(int *param_1,int param_2)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _isatty(param_2);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
  }
  return;
}


////>>0x08005718>>_lseek_r>>////

void _lseek_r(int *param_1,int param_2,__off_t param_3,int param_4)

{
  __off_t _Var1;
  
  errno = 0;
  _Var1 = _lseek(param_2,param_3,param_4);
  if ((_Var1 == -1) && (errno != 0)) {
    *param_1 = errno;
  }
  return;
}


////>>0x0800573c>>_read_r>>////

void _read_r(int *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  
  errno = 0;
  iVar1 = _read(param_2,param_3,param_4);
  if ((iVar1 == -1) && (errno != 0)) {
    *param_1 = errno;
  }
  return;
}


////>>0x08005760>>__throw_bad_function_call>>////


/* std::__throw_bad_function_call() */

void std::__throw_bad_function_call(void)

{
                    
  abort();
}


////>>0x08005768>>_GLOBAL__sub_I_ctype_byname>>////

/* std::ctype_byname<char>::ctype_byname(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&, unsigned int) */

void std::ctype_byname<char>::_GLOBAL__sub_I_ctype_byname(void)

{
  if (-1 < moneypunct<char,false>::id << 0x1f) {
    moneypunct<char,false>::id = 1;
  }
  if (-1 < moneypunct<char,true>::id << 0x1f) {
    moneypunct<char,true>::id = 1;
  }
  if (-1 < money_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id << 0x1f) {
    money_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id = 1;
  }
  if (-1 < money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::id << 0x1f) {
    money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::id = 1;
  }
  if (-1 < numpunct<char>::id << 0x1f) {
    numpunct<char>::id = 1;
  }
  if (-1 < num_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id << 0x1f) {
    num_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id = 1;
  }
  if (-1 < num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::id << 0x1f) {
    num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::id = 1;
  }
  if (-1 < __timepunct<char>::id << 0x1f) {
    __timepunct<char>::id = 1;
  }
  if (-1 < time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::id << 0x1f) {
    time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::id = 1;
  }
  if (-1 < time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id << 0x1f) {
    time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id = 1;
  }
  if (-1 < messages<char>::id << 0x1f) {
    messages<char>::id = 1;
  }
  if (-1 < collate<char>::id << 0x1f) {
    collate<char>::id = 1;
  }
  return;
}


////>>0x0800582c>>_GLOBAL__sub_I_ctype_byname>>////

/* std::ctype_byname<wchar_t>::ctype_byname(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&, unsigned int) */

void std::ctype_byname<wchar_t>::_GLOBAL__sub_I_ctype_byname(void)

{
  if (-1 < moneypunct<wchar_t,false>::id << 0x1f) {
    moneypunct<wchar_t,false>::id = 1;
  }
  if (-1 < moneypunct<wchar_t,true>::id << 0x1f) {
    moneypunct<wchar_t,true>::id = 1;
  }
  if (-1 < money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id <<
           0x1f) {
    money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = 1;
  }
  if (-1 < money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id <<
           0x1f) {
    money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = 1;
  }
  if (-1 < numpunct<wchar_t>::id << 0x1f) {
    numpunct<wchar_t>::id = 1;
  }
  if (-1 < num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id << 0x1f)
  {
    num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = 1;
  }
  if (-1 < num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id << 0x1f)
  {
    num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = 1;
  }
  if (-1 < __timepunct<wchar_t>::id << 0x1f) {
    __timepunct<wchar_t>::id = 1;
  }
  if (-1 < time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id << 0x1f
     ) {
    time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = 1;
  }
  if (-1 < time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id << 0x1f
     ) {
    time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = 1;
  }
  if (-1 < messages<wchar_t>::id << 0x1f) {
    messages<wchar_t>::id = 1;
  }
  if (-1 < collate<wchar_t>::id << 0x1f) {
    collate<wchar_t>::id = 1;
  }
  return;
}


////>>0x080058f0>>_GLOBAL__sub_I_ctype_byname>>////

/* std::ctype_byname<wchar_t>::ctype_byname(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&, unsigned int) */

void std::ctype_byname<wchar_t>::_GLOBAL__sub_I_ctype_byname(void)

{
  if (-1 < __cxx11::moneypunct<wchar_t,false>::id << 0x1f) {
    __cxx11::moneypunct<wchar_t,false>::id = 1;
  }
  if (-1 < __cxx11::moneypunct<wchar_t,true>::id << 0x1f) {
    __cxx11::moneypunct<wchar_t,true>::id = 1;
  }
  if (-1 < __cxx11::money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
           id << 0x1f) {
    __cxx11::money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = 1;
  }
  if (-1 < __cxx11::money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
           id << 0x1f) {
    __cxx11::money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = 1;
  }
  if (-1 < __cxx11::numpunct<wchar_t>::id << 0x1f) {
    __cxx11::numpunct<wchar_t>::id = 1;
  }
  if (-1 < __cxx11::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
           id << 0x1f) {
    __cxx11::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::id = 1;
  }
  if (-1 < __cxx11::messages<wchar_t>::id << 0x1f) {
    __cxx11::messages<wchar_t>::id = 1;
  }
  if (-1 < __cxx11::collate<wchar_t>::id << 0x1f) {
    __cxx11::collate<wchar_t>::id = 1;
  }
  return;
}


////>>0x08005974>>_GLOBAL__sub_I_ctype_byname>>////

/* std::ctype_byname<char>::ctype_byname(std::__cxx11::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&, unsigned int) */

void std::ctype_byname<char>::_GLOBAL__sub_I_ctype_byname(void)

{
  if (-1 < __cxx11::moneypunct<char,false>::id << 0x1f) {
    __cxx11::moneypunct<char,false>::id = 1;
  }
  if (-1 < __cxx11::moneypunct<char,true>::id << 0x1f) {
    __cxx11::moneypunct<char,true>::id = 1;
  }
  if (-1 < __cxx11::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id <<
           0x1f) {
    __cxx11::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id = 1;
  }
  if (-1 < __cxx11::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::id <<
           0x1f) {
    __cxx11::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::id = 1;
  }
  if (-1 < __cxx11::numpunct<char>::id << 0x1f) {
    __cxx11::numpunct<char>::id = 1;
  }
  if (-1 < __cxx11::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id << 0x1f
     ) {
    __cxx11::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>>>::id = 1;
  }
  if (-1 < __cxx11::messages<char>::id << 0x1f) {
    __cxx11::messages<char>::id = 1;
  }
  if (-1 < __cxx11::collate<char>::id << 0x1f) {
    __cxx11::collate<char>::id = 1;
  }
  return;
}


////>>0x080059f8>>_init>>////

void _init(void)

{
  return;
}


////>>0x08005a04>>_fini>>////

void _fini(void)

{
  return;
}


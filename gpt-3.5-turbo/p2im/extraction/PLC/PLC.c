java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x080001ac>>FUN_080001ac>>////

/* WARNING: Removing unreachable block (ram,0x080001b8) */

undefined4 FUN_080001ac(undefined4 param_1)

{
  if ((char)DAT_20000104 == '\0') {
    DAT_20000104._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x08000230>>FUN_08000230>>////

byte * FUN_08000230(uint *param_1,uint param_2,uint param_3)

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
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  
  param_2 = param_2 & 0xff;
  if ((int)param_3 < 0x10) {
joined_r0x08000290:
    do {
      if (param_3 == 0) {
        return (byte *)0x0;
      }
      puVar7 = (uint *)((int)param_1 + 1);
      bVar1 = *(byte *)param_1;
      param_3 = param_3 - 1;
      param_1 = puVar7;
    } while (bVar1 != param_2);
  }
  else {
    uVar9 = (uint)param_1 & 7;
    while( true ) {
      if (uVar9 == 0) {
        uVar9 = param_2 | param_2 << 8;
        uVar9 = uVar9 | uVar9 << 0x10;
        uVar10 = param_3 & 0xfffffff8;
        do {
          puVar7 = param_1 + 2;
          uVar10 = uVar10 - 8;
          uVar11 = *param_1 ^ uVar9;
          uVar12 = param_1[1] ^ uVar9;
          cVar2 = -((char)uVar11 == '\0');
          cVar3 = -((char)(uVar11 >> 8) == '\0');
          cVar4 = -((char)(uVar11 >> 0x10) == '\0');
          cVar5 = -((char)(uVar11 >> 0x18) == '\0');
          uVar11 = CONCAT13(cVar5,CONCAT12(cVar4,CONCAT11(cVar3,cVar2)));
          bVar13 = (char)uVar12 != '\0';
          bVar14 = (char)(uVar12 >> 8) != '\0';
          bVar15 = (char)(uVar12 >> 0x10) != '\0';
          bVar16 = (char)(uVar12 >> 0x18) != '\0';
          uVar12 = CONCAT13(bVar16 * cVar5 - !bVar16,
                            CONCAT12(bVar15 * cVar4 - !bVar15,
                                     CONCAT11(bVar14 * cVar3 - !bVar14,bVar13 * cVar2 - !bVar13)));
          if (uVar12 != 0) {
            if (uVar11 == 0) {
              pbVar8 = (byte *)((int)param_1 + 5);
              uVar11 = uVar12;
            }
            else {
              pbVar8 = (byte *)((int)param_1 + 1);
            }
            if ((uVar11 & 1) == 0) {
              bVar13 = (uVar11 & 0x100) == 0;
              pbVar6 = pbVar8 + 1;
              if (bVar13) {
                bVar13 = (uVar11 & 0x18000) == 0;
                pbVar6 = pbVar8 + 2;
              }
              pbVar8 = pbVar6;
              if (bVar13) {
                pbVar8 = pbVar8 + 1;
              }
            }
            return pbVar8 + -1;
          }
          param_1 = puVar7;
        } while (uVar10 != 0);
        param_3 = param_3 & 7;
        goto joined_r0x08000290;
      }
      puVar7 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
      if (*(byte *)param_1 == param_2) break;
      uVar9 = (uint)puVar7 & 7;
      param_1 = puVar7;
      if (param_3 == 0) {
        return (byte *)0x0;
      }
    }
  }
  return (byte *)((int)puVar7 + -1);
}


////>>0x080002d0>>FUN_080002d0>>////

undefined8 FUN_080002d0(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_2 = -1;
      param_1 = -1;
    }
    return CONCAT44(param_2,param_1);
  }
  uVar1 = FUN_08000300();
  return uVar1;
}


////>>0x08000300>>FUN_08000300>>////

/* WARNING: Removing unreachable block (ram,0x080005aa) */

ulonglong FUN_08000300(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


////>>0x080005e0>>FUN_080005e0>>////

void FUN_080005e0(void)

{
  software_interrupt(0x3f);
  return;
}


////>>0x080005e4>>FUN_080005e4>>////

undefined4 FUN_080005e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_20000120 != 0) {
    return 0;
  }
  uVar1 = FUN_080005e0(1,param_1,0,0,param_4);
  return uVar1;
}


////>>0x08000600>>FUN_08000600>>////

void FUN_08000600(int **param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)((int)param_1 + 5);
  if (cVar1 == '\x02') {
    *param_1 = &DAT_20000338;
  }
  else if (cVar1 == '\x03') {
    *param_1 = &DAT_20000338;
  }
  else if (cVar1 == '\x01') {
    *param_1 = &DAT_20000338;
  }
  else {
    *param_1 = &DAT_20000338;
  }
  FUN_08004388(*param_1,param_2,6);
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_08004110(*(byte *)((int)param_1 + 6),1);
    FUN_080041bc(*(undefined *)((int)param_1 + 6),0);
  }
  do {
    iVar2 = (**(code **)(**param_1 + 0xc))();
  } while (-1 < iVar2);
  *(undefined *)((int)param_1 + 0x49) = 0;
  *(undefined *)((int)param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((int)param_1 + 0x52) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  return;
}


////>>0x0800066c>>FUN_0800066c>>////

void FUN_0800066c(int param_1,undefined param_2,int param_3,undefined param_4)

{
  *(undefined *)(param_1 + 4) = param_2;
  if (3 < param_3) {
    param_3 = 0;
  }
  *(char *)(param_1 + 5) = (char)param_3;
  *(undefined *)(param_1 + 6) = param_4;
  *(undefined2 *)(param_1 + 0x56) = 1000;
  return;
}


////>>0x08000682>>FUN_08000682>>////

undefined4 FUN_08000682(undefined4 param_1)

{
  FUN_0800066c();
  return param_1;
}


////>>0x08000690>>FUN_08000690>>////

void FUN_08000690(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    FUN_08000682(&DAT_20000124,1,0,0,param_4);
  }
  return;
}


////>>0x080006b4>>FUN_080006b4>>////

int FUN_080006b4(int **param_1)

{
  bool bVar1;
  undefined uVar2;
  int iVar3;
  byte bVar4;
  
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_080041bc(*(byte *)((int)param_1 + 6),0);
  }
  *(undefined *)((int)param_1 + 0x49) = 0;
  if (*(byte *)((int)param_1 + 5) < 4) {
    bVar1 = false;
    while (iVar3 = (**(code **)(**param_1 + 8))(), iVar3 != 0) {
      bVar4 = *(byte *)((int)param_1 + 0x49);
      uVar2 = (**(code **)(**param_1 + 0xc))();
      *(undefined *)((int)param_1 + bVar4 + 9) = uVar2;
      bVar4 = *(char *)((int)param_1 + 0x49) + 1;
      *(byte *)((int)param_1 + 0x49) = bVar4;
      if (0x3f < bVar4) {
        bVar1 = true;
      }
    }
  }
  else {
    bVar1 = false;
  }
  *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + 1;
  if (bVar1) {
    *(short *)(param_1 + 0x15) = *(short *)(param_1 + 0x15) + 1;
    return -3;
  }
  return (int)*(char *)((int)param_1 + 0x49);
}


////>>0x08000728>>FUN_08000728>>////

uint FUN_08000728(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0xffff;
  for (uVar4 = 0; (int)uVar4 < param_2; uVar4 = uVar4 + 1 & 0xff) {
    uVar2 = uVar2 ^ *(byte *)(param_1 + uVar4 + 9);
    for (bVar1 = 1; bVar1 < 9; bVar1 = bVar1 + 1) {
      uVar3 = uVar2 & 1;
      uVar2 = uVar2 >> 1;
      if (uVar3 != 0) {
        uVar2 = uVar2 ^ 0xa001;
      }
    }
  }
  return (uVar2 & 0xff) << 8 | uVar2 >> 8;
}


////>>0x0800076c>>FUN_0800076c>>////

void FUN_0800076c(int **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)((int)param_1 + 0x49);
  uVar1 = FUN_08000728(param_1,uVar3,param_3,param_4,param_4);
  *(char *)((int)param_1 + uVar3 + 9) = (char)((ushort)uVar1 >> 8);
  uVar3 = uVar3 + 1 & 0xff;
  *(char *)((int)param_1 + uVar3 + 9) = (char)uVar1;
  *(char *)((int)param_1 + 0x49) = (char)uVar3 + '\x01';
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_080041bc(*(byte *)((int)param_1 + 6),1);
  }
  if (*(byte *)((int)param_1 + 5) < 4) {
    (**(code **)(**param_1 + 4))(*param_1,(int)param_1 + 9,*(undefined *)((int)param_1 + 0x49));
  }
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_080041bc(*(byte *)((int)param_1 + 6),0);
  }
  if (*(byte *)((int)param_1 + 5) < 4) {
    do {
      iVar2 = (**(code **)(**param_1 + 0xc))();
    } while (-1 < iVar2);
  }
  *(undefined *)((int)param_1 + 0x49) = 0;
  iVar2 = FUN_08004204();
  param_1[0x17] = (int *)(iVar2 + (uint)*(ushort *)((int)param_1 + 0x56));
  *(short *)((int)param_1 + 0x52) = *(short *)((int)param_1 + 0x52) + 1;
  return;
}


////>>0x080007f0>>FUN_080007f0>>////

undefined4 FUN_080007f0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  do {
    if (7 < uVar6) {
      bVar1 = false;
LAB_0800080a:
      if (!bVar1) {
        *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1;
        return 1;
      }
      iVar7 = *(byte *)(param_1 + 10) - 1;
      switch(*(byte *)(param_1 + 10)) {
      case 1:
      case 2:
      case 0xf:
        goto switchD_08000816_caseD_1;
      case 3:
      case 4:
      case 0x10:
        cVar3 = FUN_08004640(*(undefined *)(param_1 + 0xb),*(undefined *)(param_1 + 0xc),param_3,
                             iVar7,param_4);
        cVar4 = FUN_08004640(*(undefined *)(param_1 + 0xd),*(undefined *)(param_1 + 0xe));
        if (*(byte *)(param_1 + 0x60) < (byte)(cVar4 + cVar3)) {
          return 2;
        }
        return 0;
      case 5:
        iVar7 = FUN_08004640(*(undefined *)(param_1 + 0xb),*(undefined *)(param_1 + 0xc),param_3,
                             iVar7,param_4);
        if ((uint)*(byte *)(param_1 + 0x60) < (uint)(iVar7 << 0x14) >> 0x18) {
          return 2;
        }
        return 0;
      case 6:
        bVar2 = FUN_08004640(*(undefined *)(param_1 + 0xb),*(undefined *)(param_1 + 0xc),param_3,
                             iVar7,param_4);
        if (*(byte *)(param_1 + 0x60) < bVar2) {
          return 2;
        }
        return 0;
      default:
        return 0;
      }
    }
    param_3 = (uint)*(byte *)(param_1 + 10);
    if ((byte)(&DAT_08005a10)[uVar6] == param_3) {
      bVar1 = true;
      goto LAB_0800080a;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while( true );
switchD_08000816_caseD_1:
  iVar7 = FUN_08004640(*(undefined *)(param_1 + 0xb),*(undefined *)(param_1 + 0xc),param_3,iVar7,
                       param_4);
  iVar5 = FUN_08004640(*(undefined *)(param_1 + 0xd),*(undefined *)(param_1 + 0xe));
  if ((uint)*(byte *)(param_1 + 0x60) <
      (((uint)(iVar7 << 0xc) >> 0x10) + ((uint)(iVar5 << 0xc) >> 0x10) & 0xff)) {
    return 2;
  }
  return 0;
}


////>>0x080008cc>>FUN_080008cc>>////

void FUN_080008cc(int param_1,undefined param_2)

{
  *(undefined *)(param_1 + 9) = *(undefined *)(param_1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) ^ 0x80;
  *(undefined *)(param_1 + 0xb) = param_2;
  *(undefined *)(param_1 + 0x49) = 3;
  return;
}


////>>0x080008e2>>FUN_080008e2>>////

int FUN_080008e2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  
  iVar1 = FUN_08004640(*(undefined *)(param_1 + 0xb),*(undefined *)(param_1 + 0xc),param_3,param_4,
                       param_4);
  uVar2 = FUN_08004640(*(undefined *)(param_1 + 0xd),*(undefined *)(param_1 + 0xe));
  cVar5 = (char)((uVar2 << 0x15) >> 0x18);
  if ((uVar2 & 7) != 0) {
    cVar5 = cVar5 + '\x01';
  }
  *(char *)(param_1 + 0xb) = cVar5;
  *(undefined *)(param_1 + 0x49) = 3;
  uVar4 = 0;
  for (uVar3 = 0; (int)uVar3 < (int)uVar2; uVar3 = uVar3 + 1 & 0xffff) {
    if (((int)(uint)*(ushort *)(param_2 + ((uVar3 + iVar1) * 0x100000 >> 0x18) * 2) >>
         (uVar3 + iVar1 & 0xf) & 1U) == 0) {
      iVar6 = (uint)*(byte *)(param_1 + 0x49) + param_1;
      *(byte *)(iVar6 + 9) = *(byte *)(iVar6 + 9) & ~(byte)(1 << uVar4);
    }
    else {
      iVar6 = (uint)*(byte *)(param_1 + 0x49) + param_1;
      *(byte *)(iVar6 + 9) = *(byte *)(iVar6 + 9) | (byte)(1 << uVar4);
    }
    uVar4 = uVar4 + 1 & 0xff;
    if (7 < uVar4) {
      *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x01';
      uVar4 = 0;
    }
  }
  if ((uVar2 & 7) != 0) {
    *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x01';
  }
  cVar5 = *(char *)(param_1 + 0x49);
  FUN_0800076c(param_1);
  return (int)(char)(cVar5 + '\x02');
}


////>>0x08000998>>FUN_08000998>>////

int FUN_08000998(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar3 = FUN_08004640(*(undefined *)(param_1 + 0xb),*(undefined *)(param_1 + 0xc),param_3,param_4,
                       param_4);
  bVar4 = FUN_08004640(*(undefined *)(param_1 + 0xd),*(undefined *)(param_1 + 0xe));
  *(byte *)(param_1 + 0xb) = bVar4 << 1;
  *(undefined *)(param_1 + 0x49) = 3;
  for (uVar5 = (uint)bVar3; uVar5 < (uint)bVar3 + (uint)bVar4; uVar5 = uVar5 + 1 & 0xff) {
    bVar1 = *(byte *)(param_1 + 0x49);
    *(char *)(param_1 + (uint)bVar1 + 9) = (char)((ushort)*(undefined2 *)(param_2 + uVar5 * 2) >> 8)
    ;
    uVar6 = bVar1 + 1 & 0xff;
    cVar2 = (char)uVar6;
    *(char *)(param_1 + 0x49) = cVar2;
    *(undefined *)(param_1 + uVar6 + 9) = *(undefined *)(param_2 + uVar5 * 2);
    *(char *)(param_1 + 0x49) = cVar2 + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x49);
  FUN_0800076c(param_1);
  return (int)(char)(cVar2 + '\x02');
}


////>>0x08000a00>>FUN_08000a00>>////

undefined4 FUN_08000a00(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_08004640(*(undefined *)(param_1 + 0xb),*(undefined *)(param_1 + 0xc),param_3,param_4,
                       param_4);
  uVar2 = (uVar1 << 0x14) >> 0x18;
  if (*(char *)(param_1 + 0xd) == -1) {
    *(ushort *)(param_2 + uVar2 * 2) =
         (ushort)(1 << (uVar1 & 0xf)) | *(ushort *)(param_2 + uVar2 * 2);
  }
  else {
    *(ushort *)(param_2 + uVar2 * 2) =
         *(ushort *)(param_2 + uVar2 * 2) & ~(ushort)(1 << (uVar1 & 0xf));
  }
  *(undefined *)(param_1 + 0x49) = 6;
  FUN_0800076c(param_1);
  return 8;
}


////>>0x08000a4e>>FUN_08000a4e>>////

undefined4 FUN_08000a4e(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  
  bVar1 = FUN_08004640(*(undefined *)(param_1 + 0xb),*(undefined *)(param_1 + 0xc));
  uVar2 = FUN_08004640(*(undefined *)(param_1 + 0xd),*(undefined *)(param_1 + 0xe));
  *(undefined2 *)(param_2 + (uint)bVar1 * 2) = uVar2;
  *(undefined *)(param_1 + 0x49) = 6;
  FUN_0800076c(param_1);
  return 8;
}


////>>0x08000a7a>>FUN_08000a7a>>////

undefined4 FUN_08000a7a(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = FUN_08004640(*(undefined *)(param_1 + 0xb),*(undefined *)(param_1 + 0xc),param_3,param_4,
                       param_4);
  iVar2 = FUN_08004640(*(undefined *)(param_1 + 0xd),*(undefined *)(param_1 + 0xe));
  uVar4 = 0;
  uVar7 = 7;
  for (uVar3 = 0; (int)uVar3 < iVar2; uVar3 = uVar3 + 1 & 0xffff) {
    uVar6 = (uVar3 + iVar1) * 0x100000 >> 0x18;
    uVar5 = uVar3 + iVar1 & 0xf;
    if (((int)(uint)*(byte *)(param_1 + uVar7 + 9) >> uVar4 & 1U) == 0) {
      *(ushort *)(param_2 + uVar6 * 2) = *(ushort *)(param_2 + uVar6 * 2) & ~(ushort)(1 << uVar5);
    }
    else {
      *(ushort *)(param_2 + uVar6 * 2) = (ushort)(1 << uVar5) | *(ushort *)(param_2 + uVar6 * 2);
    }
    uVar4 = uVar4 + 1 & 0xff;
    if (7 < uVar4) {
      uVar7 = uVar7 + 1 & 0xff;
      uVar4 = 0;
    }
  }
  *(undefined *)(param_1 + 0x49) = 6;
  FUN_0800076c(param_1);
  return 8;
}


////>>0x08000b04>>FUN_08000b04>>////

int FUN_08000b04(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  bVar2 = *(byte *)(param_1 + 0xe);
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 0xe) = bVar2;
  *(undefined *)(param_1 + 0x49) = 6;
  for (uVar5 = 0; uVar5 < bVar2; uVar5 = uVar5 + 1 & 0xff) {
    uVar4 = FUN_08004640(*(undefined *)(uVar5 * 2 + param_1 + 0x10),
                         *(undefined *)(param_1 + (uVar5 + 4) * 2 + 9));
    *(undefined2 *)(param_2 + (bVar1 + uVar5) * 2) = uVar4;
  }
  cVar3 = *(char *)(param_1 + 0x49);
  FUN_0800076c(param_1);
  return (int)(char)(cVar3 + '\x02');
}


////>>0x08000b54>>FUN_08000b54>>////

int FUN_08000b54(int **param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  uint unaff_r5;
  int iVar3;
  
  param_1[0x13] = param_2;
  *(char *)(param_1 + 0x18) = (char)param_3;
  if (*(byte *)((int)param_1 + 5) < 4) {
    bVar1 = (**(code **)(**param_1 + 8))();
    unaff_r5 = (uint)bVar1;
  }
  if (unaff_r5 == 0) {
    iVar3 = 0;
  }
  else if ((int)unaff_r5 < 8) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_080006b4(param_1);
    *(char *)(param_1 + 2) = (char)iVar3;
    if (*(char *)((int)param_1 + 9) == *(char *)(param_1 + 1)) {
      iVar2 = FUN_080007f0(param_1);
      if (iVar2 < 1) {
        iVar2 = FUN_08004204();
        param_1[0x17] = (int *)((uint)*(ushort *)((int)param_1 + 0x56) + iVar2);
        *(undefined *)(param_1 + 2) = 0;
        switch(*(undefined *)((int)param_1 + 10)) {
        case 1:
        case 2:
          iVar3 = FUN_080008e2(param_1,param_2,param_3);
          break;
        case 3:
        case 4:
          iVar3 = FUN_08000998(param_1,param_2,param_3);
          break;
        case 5:
          iVar3 = FUN_08000a00(param_1,param_2,param_3);
          break;
        case 6:
          iVar3 = FUN_08000a4e(param_1,param_2,param_3);
          break;
        case 0xf:
          iVar3 = FUN_08000a7a(param_1,param_2,param_3);
          break;
        case 0x10:
          iVar3 = FUN_08000b04(param_1,param_2,param_3);
        }
      }
      else {
        if (iVar2 != 0xff) {
          FUN_080008cc(param_1,iVar2);
          FUN_0800076c(param_1);
        }
        *(char *)(param_1 + 2) = (char)iVar2;
        iVar3 = (int)(char)iVar2;
      }
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}


////>>0x08000c4c>>FUN_08000c4c>>////

void FUN_08000c4c(void)

{
  FUN_080005e4(0);
  FUN_08000600(&DAT_20000124,0x4b00);
  return;
}


////>>0x08000c64>>FUN_08000c64>>////

void FUN_08000c64(void)

{
  undefined4 in_r3;
  
  FUN_08000b54(&DAT_20000124,&DAT_20000004,0x10,in_r3,in_r3);
  return;
}


////>>0x08000c8c>>FUN_08000c8c>>////



void FUN_08000c8c(void)

{
  uint uVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  _DAT_40023840 = _DAT_40023840 | 0x10000000;
  _DAT_40007000 = _DAT_40007000 | 0xc000;
  local_54 = 1;
  local_50 = 0x50000;
  local_3c = 2;
  local_38 = 0x400000;
  local_34 = 8;
  local_30 = 0x150;
  local_2c = 2;
  local_28 = 7;
  FUN_0800201c(&local_54);
  FUN_08001f9c();
  local_24 = 0xf;
  local_20 = 2;
  local_1c = 0;
  local_18 = 0x1400;
  local_14 = 0x1000;
  FUN_08002488(&local_24,5);
  uVar1 = FUN_080025e0();
  FUN_08000ee0(uVar1 / 1000);
  FUN_08000f2c(4);
  FUN_08000e60(0xffffffff,0,0);
  return;
}


////>>0x08000d3c>>entry>>////

/* WARNING: This function may have set the stack pointer */

void entry(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &DAT_20000104; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(iVar1 + 0x8006034);
  }
  for (puVar2 = &DAT_20000104; puVar2 < &DAT_20000678; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  FUN_080035bc();
  FUN_08004884();
  UNRECOVERED_JUMPTABLE = (code *)0x8000d72;
  FUN_08004658();
                    /* WARNING: Could not recover jumptable at 0x08000d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08000d8e>>FUN_08000d8e>>////

void FUN_08000d8e(void)

{
  FUN_080034ce();
  return;
}


////>>0x08000d96>>FUN_08000d96>>////

void FUN_08000d96(void)

{
  return;
}


////>>0x08000d98>>FUN_08000d98>>////

undefined4 FUN_08000d98(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_08000ee0(DAT_2000002c / (1000 / DAT_20000024));
  if (iVar1 != 0) {
    return 1;
  }
  if (0xf < param_1) {
    return 1;
  }
  FUN_08000e60(0xffffffff,param_1,0);
  DAT_20000028 = param_1;
  return 0;
}


////>>0x08000de4>>FUN_08000de4>>////



undefined4 FUN_08000de4(void)

{
  _DAT_40023c00 = _DAT_40023c00 | 0x700;
  FUN_08000e3c(3);
  FUN_08000d98(0xf);
  FUN_08000d96();
  return 0;
}


////>>0x08000e18>>FUN_08000e18>>////

void FUN_08000e18(void)

{
  DAT_20000670 = (uint)DAT_20000024 + DAT_20000670;
  return;
}


////>>0x08000e30>>FUN_08000e30>>////

undefined4 FUN_08000e30(void)

{
  return DAT_20000670;
}


////>>0x08000e3c>>FUN_08000e3c>>////



void FUN_08000e3c(uint param_1)

{
  _DAT_e000ed0c = (param_1 & 7) << 8 | _DAT_e000ed0c & 0xf8ff | 0x5fa0000;
  return;
}


////>>0x08000e60>>FUN_08000e60>>////



void FUN_08000e60(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(_DAT_e000ed0c << 0x15) >> 0x1d;
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
  uVar1 = (param_2 & (1 << (uVar2 & 0xff)) - 1U) << (uVar1 & 0xff) |
          (1 << (uVar1 & 0xff)) - 1U & param_3;
  if ((int)param_1 < 0) {
    *(char *)((param_1 & 0xf) + 0xe000ed14) = (char)(uVar1 << 4);
  }
  else {
    *(char *)(param_1 + 0xe000e400) = (char)(uVar1 << 4);
  }
  return;
}


////>>0x08000ec4>>FUN_08000ec4>>////

void FUN_08000ec4(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)((param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  }
  return;
}


////>>0x08000ee0>>FUN_08000ee0>>////



undefined4 FUN_08000ee0(int param_1)

{
  if (param_1 - 1U < 0x1000000) {
    _DAT_e000e014 = param_1 - 1U;
    DAT_e000ed23 = 0xf0;
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
    return 0;
  }
  return 1;
}


////>>0x08000f0c>>FUN_08000f0c>>////

void FUN_08000f0c(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(((param_1 >> 5) + 0x60) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  }
  return;
}


////>>0x08000f2c>>FUN_08000f2c>>////



void FUN_08000f2c(int param_1)

{
  if (param_1 != 4) {
    _DAT_e000e010 = _DAT_e000e010 & 0xfffffffb;
    return;
  }
  _DAT_e000e010 = _DAT_e000e010 | 4;
  return;
}


////>>0x08000f4c>>FUN_08000f4c>>////

void FUN_08000f4c(void)

{
  return;
}


////>>0x08000f4e>>FUN_08000f4e>>////

void FUN_08000f4e(void)

{
  FUN_08000f4c();
  return;
}


////>>0x08000f56>>FUN_08000f56>>////

undefined4 FUN_08000f56(int param_1)

{
  if (param_1 != 0) {
    *(undefined *)(param_1 + 4) = 2;
    FUN_080033c8();
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 5) = 0;
    return 0;
  }
  return 1;
}


////>>0x08000f72>>FUN_08000f72>>////

undefined4 FUN_08000f72(uint **param_1,uint param_2)

{
  **param_1 = **param_1 & ~(1 << (param_2 & 0xff));
  *(undefined *)(param_1 + 1) = 1;
  return 0;
}


////>>0x08000f8c>>FUN_08000f8c>>////

undefined4 FUN_08000f8c(uint **param_1)

{
  if (*(char *)((int)param_1 + 0x35) != '\x02') {
    param_1[0x15] = (uint *)0x80;
    return 1;
  }
  *(undefined *)((int)param_1 + 0x35) = 5;
  **param_1 = **param_1 & 0xfffffffe;
  return 0;
}


////>>0x08000fb4>>FUN_08000fb4>>////



void FUN_08000fb4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
    uVar2 = 1 << (uVar3 & 0xff);
    uVar4 = uVar2 & *param_2;
    uVar1 = _DAT_40013c0c;
    if (uVar2 == uVar4) {
      if ((param_2[1] == 2) || (param_2[1] == 0x12)) {
        iVar6 = (uVar3 >> 3) + 8;
        iVar8 = (uVar3 & 7) << 2;
        param_1[iVar6] = param_1[iVar6] & ~(0xf << iVar8) | param_2[4] << iVar8;
      }
      uVar7 = uVar3 << 1;
      uVar1 = ~(3 << (uVar7 & 0xff));
      *param_1 = *param_1 & uVar1 | (param_2[1] & 3) << (uVar7 & 0xff);
      uVar5 = param_2[1];
      if (((uVar5 - 1 < 2) || (uVar5 == 0x11)) || (uVar5 == 0x12)) {
        param_1[2] = param_1[2] & uVar1 | param_2[3] << (uVar7 & 0xff);
        param_1[1] = param_1[1] & ~uVar2 | ((param_2[1] << 0x1b) >> 0x1f) << (uVar3 & 0xff);
      }
      param_1[3] = uVar1 & param_1[3] | param_2[2] << (uVar7 & 0xff);
      uVar1 = _DAT_40013c0c;
      if ((param_2[1] & 0x10000000) != 0) {
        _DAT_40023844 = _DAT_40023844 | 0x4000;
        iVar8 = (uVar3 & 3) << 2;
        if (param_1 == (uint *)0x40020000) {
          iVar6 = 0;
        }
        else if (param_1 == (uint *)0x40020400) {
          iVar6 = 1;
        }
        else if (param_1 == (uint *)0x40020800) {
          iVar6 = 2;
        }
        else if (param_1 == (uint *)0x40020c00) {
          iVar6 = 3;
        }
        else if (param_1 == (uint *)0x40021000) {
          iVar6 = 4;
        }
        else if (param_1 == (uint *)0x40021400) {
          iVar6 = 5;
        }
        else if (param_1 == (uint *)0x40021800) {
          iVar6 = 6;
        }
        else if (param_1 == (uint *)0x40021c00) {
          iVar6 = 7;
        }
        else if (param_1 == (uint *)0x40022000) {
          iVar6 = 8;
        }
        else if (param_1 == (uint *)0x40022400) {
          iVar6 = 9;
        }
        else {
          iVar6 = 10;
        }
        *(uint *)(((uVar3 >> 2) + 2) * 4 + 0x40013800) =
             *(uint *)(((uVar3 >> 2) + 2) * 4 + 0x40013800) & ~(0xf << iVar8) | iVar6 << iVar8;
        uVar1 = ~uVar4;
        uVar2 = _DAT_40013c00 & uVar1;
        if ((param_2[1] & 0x10000) != 0) {
          uVar2 = uVar4 | _DAT_40013c00;
        }
        uVar5 = uVar1 & _DAT_40013c04;
        if ((param_2[1] & 0x20000) != 0) {
          uVar5 = uVar4 | _DAT_40013c04;
        }
        uVar7 = uVar1 & _DAT_40013c08;
        if ((param_2[1] & 0x100000) != 0) {
          uVar7 = uVar4 | _DAT_40013c08;
        }
        _DAT_40013c00 = uVar2;
        _DAT_40013c04 = uVar5;
        _DAT_40013c08 = uVar7;
        uVar1 = uVar1 & _DAT_40013c0c;
        if ((param_2[1] & 0x200000) != 0) {
          uVar1 = uVar4 | _DAT_40013c0c;
        }
      }
    }
    _DAT_40013c0c = uVar1;
  }
  return;
}


////>>0x08001198>>FUN_08001198>>////

void FUN_08001198(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    *(int *)(param_1 + 0x18) = param_2 << 0x10;
    return;
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}


////>>0x080011a4>>FUN_080011a4>>////



void FUN_080011a4(uint param_1)

{
  if ((_DAT_40013c14 & param_1) != 0) {
    _DAT_40013c14 = param_1;
    FUN_080047d0();
  }
  return;
}


////>>0x080011c0>>FUN_080011c0>>////

undefined4 FUN_080011c0(int *param_1)

{
  if (*(char *)((int)param_1 + 0x3e) == '@') {
    if (param_1[0x14] == 0) {
      *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xfe;
    }
    else {
      *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xffU | 1;
    }
  }
  else if (param_1[4] == 0x4000) {
    if (*(char *)((int)param_1 + 0x3d) == '!') {
      *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xfe;
    }
    else {
      *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xffU | 1;
    }
  }
  else if (param_1[0x14] == 0) {
    *(uint *)(*param_1 + 0x10) = (uint)(param_1[0x11] << 0x10) >> 0x17 & 6 | 0xf0;
  }
  else if (param_1[0x14] == 1) {
    *(uint *)(*param_1 + 0x10) = (uint)(param_1[0x11] << 0x10) >> 0x17 & 6 | 0xf1;
  }
  return 0;
}


////>>0x0800124a>>FUN_0800124a>>////

undefined4 FUN_0800124a(int *param_1)

{
  *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xff;
  return 0;
}


////>>0x08001256>>FUN_08001256>>////

undefined4 FUN_08001256(uint **param_1)

{
  uint *puVar1;
  
  puVar1 = param_1[0xb];
  if ((*(char *)((int)param_1 + 0x3d) == '\"') &&
     ((param_1[0x14] != (uint *)0x0 || (*(char *)((int)param_1 + 0x3e) != '@')))) {
    if ((param_1[0x14] == (uint *)0x0) && (param_1[4] == (uint *)0xc000)) {
      **param_1 = **param_1 | 0x100;
      param_1[0x14] = (uint *)((int)param_1[0x14] + 1);
    }
    else {
      if (*(short *)((int)param_1 + 0x2a) == 0) {
        **param_1 = **param_1 | 0x200;
      }
      else if (*(short *)((int)param_1 + 0x2a) == 1) {
        if (puVar1 == (uint *)0xffff0000) {
          **param_1 = **param_1 & 0xfffffbff;
          puVar1 = *param_1;
          if ((puVar1[1] & 0x800) == 0) {
            *puVar1 = *puVar1 | 0x200;
          }
          else {
            *puVar1 = *puVar1 & 0xfffffbff;
          }
        }
        else if (((puVar1 == (uint *)0x4) || (puVar1 == (uint *)0x8)) ||
                (param_1[0xc] == (uint *)0x12)) {
          **param_1 = **param_1 & 0xfffffbff;
          **param_1 = **param_1 | 0x200;
        }
        else if (param_1[0xb] == (uint *)0x2) {
          **param_1 = **param_1 | 0x400;
        }
        else {
          **param_1 = **param_1 & 0xfffffbff;
        }
      }
      else if (*(short *)((int)param_1 + 0x2a) == 2) {
        if (param_1[0xb] == (uint *)0x2) {
          **param_1 = **param_1 | 0x400;
        }
        else {
          **param_1 = **param_1 & 0xfffffbff;
          **param_1 = **param_1 | 0x800;
        }
        puVar1 = *param_1;
        if ((puVar1[1] & 0x800) != 0) {
          puVar1[1] = puVar1[1] | 0x1000;
        }
      }
      else {
        **param_1 = **param_1 | 0x400;
        puVar1 = *param_1;
        if ((puVar1[1] & 0x800) != 0) {
          puVar1[1] = puVar1[1] | 0x1000;
        }
      }
      param_1[0x14] = (uint *)0x0;
    }
  }
  return 0;
}


////>>0x08001420>>FUN_08001420>>////

undefined4 FUN_08001420(int *param_1)

{
  byte *pbVar1;
  
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    pbVar1 = (byte *)param_1[9];
    param_1[9] = (int)(pbVar1 + 1);
    *(uint *)(*param_1 + 0x10) = (uint)*pbVar1;
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  return 0;
}


////>>0x08001440>>FUN_08001440>>////

undefined4 FUN_08001440(int *param_1)

{
  undefined *puVar1;
  
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    puVar1 = (undefined *)param_1[9];
    param_1[9] = (int)(puVar1 + 1);
    *puVar1 = (char)*(undefined4 *)(*param_1 + 0x10);
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  return 0;
}


////>>0x08001460>>FUN_08001460>>////

undefined4 FUN_08001460(uint **param_1,uint *param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (*(char *)((int)param_1 + 0x3d) == '(') {
    if (param_2 == (uint *)0x0) {
      uVar1 = 1;
    }
    else if (param_3 == 0) {
      uVar1 = 1;
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      uVar1 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
      puVar2 = *param_1;
      if ((*puVar2 & 1) == 0) {
        *puVar2 = *puVar2 | 1;
      }
      **param_1 = **param_1 & 0xfffff7ff;
      *(undefined *)((int)param_1 + 0x3d) = 0x29;
      *(undefined *)((int)param_1 + 0x3e) = 0x20;
      uVar1 = 0;
      param_1[0x10] = (uint *)0x0;
      param_1[9] = param_2;
      *(short *)((int)param_1 + 0x2a) = (short)param_3;
      param_1[0xb] = param_4;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
      *(undefined *)(param_1 + 0xf) = 0;
      (*param_1)[1] = (*param_1)[1] | 0x700;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


////>>0x080014ec>>FUN_080014ec>>////

undefined4 FUN_080014ec(uint **param_1,uint *param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (*(char *)((int)param_1 + 0x3d) == '(') {
    if (param_2 == (uint *)0x0) {
      uVar1 = 1;
    }
    else if (param_3 == 0) {
      uVar1 = 1;
    }
    else if (*(char *)(param_1 + 0xf) == '\x01') {
      uVar1 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
      puVar2 = *param_1;
      if ((*puVar2 & 1) == 0) {
        *puVar2 = *puVar2 | 1;
      }
      **param_1 = **param_1 & 0xfffff7ff;
      *(undefined *)((int)param_1 + 0x3d) = 0x2a;
      *(undefined *)((int)param_1 + 0x3e) = 0x20;
      uVar1 = 0;
      param_1[0x10] = (uint *)0x0;
      param_1[9] = param_2;
      *(short *)((int)param_1 + 0x2a) = (short)param_3;
      param_1[0xb] = param_4;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
      *(undefined *)(param_1 + 0xf) = 0;
      (*param_1)[1] = (*param_1)[1] | 0x700;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


////>>0x08001578>>FUN_08001578>>////

undefined4 FUN_08001578(uint **param_1)

{
  uint *puVar1;
  
  if (*(char *)((int)param_1 + 0x3d) != ' ') {
    return 2;
  }
  *(undefined *)((int)param_1 + 0x3d) = 0x28;
  puVar1 = *param_1;
  if ((*puVar1 & 1) == 0) {
    *puVar1 = *puVar1 | 1;
  }
  **param_1 = **param_1 | 0x400;
  (*param_1)[1] = (*param_1)[1] | 0x300;
  return 0;
}


////>>0x080015b6>>FUN_080015b6>>////

void FUN_080015b6(void)

{
  return;
}


////>>0x080015b8>>FUN_080015b8>>////

void FUN_080015b8(void)

{
  return;
}


////>>0x080015ba>>FUN_080015ba>>////

void FUN_080015ba(void)

{
  return;
}


////>>0x080015bc>>FUN_080015bc>>////

undefined4 FUN_080015bc(int *param_1)

{
  char cVar1;
  byte *pbVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x3d);
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    pbVar2 = (byte *)param_1[9];
    param_1[9] = (int)(pbVar2 + 1);
    *(uint *)(*param_1 + 0x10) = (uint)*pbVar2;
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    if ((*(short *)((int)param_1 + 0x2a) == 0) && (cVar1 == ')')) {
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xfffffbff;
      param_1[0xc] = 0x21;
      *(undefined *)((int)param_1 + 0x3d) = 0x28;
      FUN_080015ba();
    }
    return 0;
  }
  return 0;
}


////>>0x0800160c>>FUN_0800160c>>////

void FUN_0800160c(void)

{
  return;
}


////>>0x0800160e>>FUN_0800160e>>////

undefined4 FUN_0800160e(int *param_1)

{
  char cVar1;
  undefined *puVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x3d);
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    puVar2 = (undefined *)param_1[9];
    param_1[9] = (int)(puVar2 + 1);
    *puVar2 = (char)*(undefined4 *)(*param_1 + 0x10);
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    if ((*(short *)((int)param_1 + 0x2a) == 0) && (cVar1 == '*')) {
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xfffffbff;
      param_1[0xc] = 0x22;
      *(undefined *)((int)param_1 + 0x3d) = 0x28;
      FUN_0800160c();
    }
  }
  return 0;
}


////>>0x0800165a>>FUN_0800165a>>////

undefined4 FUN_0800165a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*param_1 + 0x18);
  if ((uVar2 & 0x80) == 0) {
    uVar1 = *(undefined2 *)(param_1 + 3);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 6);
  }
  FUN_08003880(param_1,(*(uint *)(*param_1 + 0x18) & 4) == 0,uVar1,uVar2,param_4);
  return 0;
}


////>>0x08001684>>FUN_08001684>>////

undefined4 FUN_08001684(uint **param_1)

{
  if (((param_1[0xb] == (uint *)0x4) || (param_1[0xb] == (uint *)0x8)) &&
     (*(char *)((int)param_1 + 0x3d) == '(')) {
    param_1[0xb] = (uint *)0xffff0000;
    (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
    (*param_1)[5] = 0xfffffbff;
    **param_1 = **param_1 & 0xfffffbff;
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    FUN_080038d0();
  }
  else if (*(char *)((int)param_1 + 0x3d) == '!') {
    param_1[0xb] = (uint *)0xffff0000;
    param_1[0xc] = (uint *)0x21;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
    (*param_1)[5] = 0xfffffbff;
    **param_1 = **param_1 & 0xfffffbff;
    FUN_080015ba();
  }
  else {
    (*param_1)[5] = 0xfffffbff;
  }
  return 0;
}


////>>0x08001718>>FUN_08001718>>////

void FUN_08001718(void)

{
  return;
}


////>>0x0800171a>>FUN_0800171a>>////

undefined4 FUN_0800171a(uint **param_1)

{
  char cVar1;
  uint *puVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x3d);
  puVar2 = param_1[0xb];
  if ((*(short *)(param_1 + 10) == 0) && (cVar1 == '!')) {
    if ((puVar2 == (uint *)0x4) || ((puVar2 == (uint *)0x8 || (puVar2 == (uint *)0xffff0000)))) {
      (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
      **param_1 = **param_1 | 0x200;
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      if (*(char *)((int)param_1 + 0x3e) == '@') {
        *(undefined *)((int)param_1 + 0x3e) = 0;
        FUN_08001718();
      }
      else {
        *(undefined *)((int)param_1 + 0x3e) = 0;
        FUN_080015b6();
      }
    }
    else {
      (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
      param_1[0xc] = (uint *)0x11;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      FUN_080015b6();
    }
  }
  else if ((cVar1 == '!') || ((*(char *)((int)param_1 + 0x3e) == '@' && (cVar1 == '\"')))) {
    if (*(short *)((int)param_1 + 0x2a) == 0) {
      (*param_1)[1] = (*param_1)[1] & 0xfffffbff;
    }
    else if (*(char *)((int)param_1 + 0x3e) == '@') {
      if (param_1[0x14] == (uint *)0x0) {
        if (param_1[0x13] == (uint *)0x1) {
          (*param_1)[4] = (uint)param_1[0x12] & 0xff;
          param_1[0x14] = (uint *)((int)param_1[0x14] + 2);
        }
        else {
          (*param_1)[4] = (uint)((int)param_1[0x12] << 0x10) >> 0x18;
          param_1[0x14] = (uint *)((int)param_1[0x14] + 1);
        }
      }
      else if (param_1[0x14] == (uint *)0x1) {
        (*param_1)[4] = (uint)param_1[0x12] & 0xff;
        param_1[0x14] = (uint *)((int)param_1[0x14] + 1);
      }
      else if (param_1[0x14] == (uint *)0x2) {
        if (*(char *)((int)param_1 + 0x3d) == '\"') {
          **param_1 = **param_1 | 0x100;
        }
        else if (*(char *)((int)param_1 + 0x3d) == '!') {
          puVar2 = param_1[9];
          param_1[9] = (uint *)((int)puVar2 + 1);
          (*param_1)[4] = (uint)*(byte *)puVar2;
          *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
        }
      }
    }
    else {
      puVar2 = param_1[9];
      param_1[9] = (uint *)((int)puVar2 + 1);
      (*param_1)[4] = (uint)*(byte *)puVar2;
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
  }
  return 0;
}


////>>0x08001864>>FUN_08001864>>////

undefined4 FUN_08001864(uint **param_1)

{
  uint *puVar1;
  
  puVar1 = param_1[0xb];
  if (*(char *)((int)param_1 + 0x3d) == '!') {
    if (*(short *)((int)param_1 + 0x2a) == 0) {
      if (((puVar1 == (uint *)0x4) || (puVar1 == (uint *)0x8)) || (puVar1 == (uint *)0xffff0000)) {
        (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
        **param_1 = **param_1 | 0x200;
        param_1[0xc] = (uint *)0x0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        if (*(char *)((int)param_1 + 0x3e) == '@') {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_08001718();
        }
        else {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_080015b6();
        }
      }
      else {
        (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
        param_1[0xc] = (uint *)0x11;
        *(undefined *)((int)param_1 + 0x3e) = 0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        FUN_080015b6();
      }
    }
    else {
      puVar1 = param_1[9];
      param_1[9] = (uint *)((int)puVar1 + 1);
      (*param_1)[4] = (uint)*(byte *)puVar1;
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
  }
  return 0;
}


////>>0x08001902>>FUN_08001902>>////

void FUN_08001902(void)

{
  return;
}


////>>0x08001904>>FUN_08001904>>////

undefined4 FUN_08001904(uint **param_1)

{
  uint *puVar1;
  
  if (*(char *)((int)param_1 + 0x3d) == '\"') {
    if (*(ushort *)((int)param_1 + 0x2a) < 4) {
      if (*(ushort *)((int)param_1 + 0x2a) < 2) {
        **param_1 = **param_1 & 0xfffffbff;
        (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
        puVar1 = param_1[9];
        param_1[9] = (uint *)((int)puVar1 + 1);
        *(char *)puVar1 = (char)(*param_1)[4];
        *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        param_1[0xc] = (uint *)0x0;
        if (*(char *)((int)param_1 + 0x3e) == '@') {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_08001902();
        }
        else {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_080015b8();
        }
      }
    }
    else {
      puVar1 = param_1[9];
      param_1[9] = (uint *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)(*param_1)[4];
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
      if (*(short *)((int)param_1 + 0x2a) == 3) {
        (*param_1)[1] = (*param_1)[1] & 0xfffffbff;
      }
    }
  }
  return 0;
}


////>>0x080019a0>>FUN_080019a0>>////

undefined4 FUN_080019a0(uint **param_1)

{
  uint *puVar1;
  
  if (*(short *)((int)param_1 + 0x2a) == 4) {
    (*param_1)[1] = (*param_1)[1] & 0xfffffbff;
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  else if (*(short *)((int)param_1 + 0x2a) == 3) {
    (*param_1)[1] = (*param_1)[1] & 0xfffffbff;
    **param_1 = **param_1 & 0xfffffbff;
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  else if (*(short *)((int)param_1 + 0x2a) == 2) {
    if ((int)param_1[0xb] - 1U < 2) {
      **param_1 = **param_1 & 0xfffffbff;
      **param_1 = **param_1 | 0x100;
    }
    else {
      **param_1 = **param_1 | 0x200;
    }
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    (*param_1)[1] = (*param_1)[1] & 0xfffffcff;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    param_1[0xc] = (uint *)0x0;
    if (*(char *)((int)param_1 + 0x3e) == '@') {
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_08001902();
    }
    else {
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_080015b8();
    }
  }
  else {
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  return 0;
}


////>>0x08001aac>>FUN_08001aac>>////

void FUN_08001aac(void)

{
  return;
}


////>>0x08001ab0>>FUN_08001ab0>>////

void FUN_08001ab0(uint **param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (*(byte *)((int)param_1 + 0x3d) - 0x29 < 2) {
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3d) = 0x28;
  }
  else {
    if ((*(char *)((int)param_1 + 0x3d) != '`') && (((*param_1)[1] & 0x800) == 0)) {
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
    }
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3e) = 0;
  }
  **param_1 = **param_1 & 0xfffff7ff;
  puVar3 = *param_1;
  if ((puVar3[1] & 0x800) == 0) {
    if (*(char *)((int)param_1 + 0x3d) == '`') {
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      param_1[0x10] = (uint *)0x0;
      if ((puVar3[5] & 0x40) != 0) {
        puVar2 = param_1[9];
        param_1[9] = (uint *)((int)puVar2 + 1);
        *(char *)puVar2 = (char)puVar3[4];
      }
      **param_1 = **param_1 & 0xfffffffe;
      FUN_08001aac(param_1);
    }
    else {
      if ((puVar3[5] & 0x40) != 0) {
        puVar2 = param_1[9];
        param_1[9] = (uint *)((int)puVar2 + 1);
        *(char *)puVar2 = (char)puVar3[4];
      }
      FUN_08003900(param_1);
    }
  }
  else {
    puVar3[1] = puVar3[1] & 0xfffff7ff;
    if (*(char *)((int)param_1[0xd] + 0x35) == '\x01') {
      param_1[0xe][0x14] = (uint)&LAB_08001f3c_1;
      iVar1 = FUN_08000f8c(param_1[0xe]);
      if (iVar1 != 0) {
        if (((*param_1)[5] & 0x40) != 0) {
          puVar3 = param_1[9];
          param_1[9] = (uint *)((int)puVar3 + 1);
          *(char *)puVar3 = (char)(*param_1)[4];
        }
        **param_1 = **param_1 & 0xfffffffe;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        (*(code *)param_1[0xe][0x14])();
      }
    }
    else {
      param_1[0xd][0x14] = (uint)&LAB_08001f3c_1;
      iVar1 = FUN_08000f8c(param_1[0xd]);
      if (iVar1 != 0) {
        **param_1 = **param_1 & 0xfffffffe;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        (*(code *)param_1[0xd][0x14])();
      }
    }
  }
  if ((*(char *)((int)param_1 + 0x3d) == '(') && (((uint)param_1[0x10] & 4) != 0)) {
    param_1[0xb] = (uint *)0xffff0000;
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    FUN_080038d0(param_1);
  }
  return;
}


////>>0x08001bfc>>FUN_08001bfc>>////

undefined4 FUN_08001bfc(uint **param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x3d);
  (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
  **param_1 = **param_1 | 1;
  **param_1 = **param_1 & 0xfffffbff;
  puVar2 = *param_1;
  if ((puVar2[1] & 0x800) != 0) {
    if ((*(char *)((int)param_1 + 0x3d) == '\"') || (*(char *)((int)param_1 + 0x3d) == '*')) {
      *(short *)((int)param_1 + 0x2a) = (short)*(undefined4 *)(*param_1[0xe] + 4);
    }
    else {
      *(short *)((int)param_1 + 0x2a) = (short)*(undefined4 *)(*param_1[0xd] + 4);
    }
  }
  if (*(short *)((int)param_1 + 0x2a) != 0) {
    if ((puVar2[5] & 4) != 0) {
      puVar3 = param_1[9];
      param_1[9] = (uint *)((int)puVar3 + 1);
      *(char *)puVar3 = (char)puVar2[4];
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
    if (((*param_1)[5] & 0x40) != 0) {
      puVar2 = param_1[9];
      param_1[9] = (uint *)((int)puVar2 + 1);
      *(char *)puVar2 = (char)(*param_1)[4];
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
    param_1[0x10] = (uint *)((uint)param_1[0x10] | 4);
  }
  if (param_1[0x10] == (uint *)0x0) {
    if (((cVar1 == '(') || (cVar1 == '*')) || (cVar1 == ')')) {
      param_1[0xb] = (uint *)0xffff0000;
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_080038d0();
    }
    else if ((param_1[0xc] == (uint *)0x22) || (cVar1 == '\"')) {
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_0800160c();
    }
  }
  else {
    FUN_08001ab0();
  }
  return 0;
}


////>>0x08001d00>>FUN_08001d00>>////

void FUN_08001d00(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  uVar4 = *(uint *)(iVar1 + 0x18);
  uVar2 = *(uint *)(iVar1 + 0x14);
  uVar3 = *(uint *)(iVar1 + 4);
  if ((*(char *)((int)param_1 + 0x3e) == '\x10') || (*(char *)((int)param_1 + 0x3e) == '@')) {
    if (((uVar2 & 0x10001) == 0) || ((uVar3 & 0x200) == 0)) {
      if (((uVar2 & 0x10008) == 0) || ((uVar3 & 0x200) == 0)) {
        if (((uVar2 & 0x10002) != 0) && ((uVar3 & 0x200) != 0)) {
          FUN_08001256(param_1);
        }
      }
      else {
        FUN_0800124a(param_1);
      }
    }
    else {
      FUN_080011c0(param_1);
    }
    if ((uVar4 & 0x100004) == 0) {
      if ((((uVar2 & 0x10040) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        FUN_08001904(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_080019a0(param_1);
        return;
      }
    }
    else {
      if ((((uVar2 & 0x10080) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        FUN_0800171a(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_08001864(param_1);
        return;
      }
    }
  }
  else {
    if (((uVar2 & 0x10002) != 0) && ((uVar3 & 0x200) != 0)) {
      FUN_0800165a();
      return;
    }
    if (((uVar2 & 0x10010) != 0) && ((uVar3 & 0x200) != 0)) {
      FUN_08001bfc(param_1);
      return;
    }
    if ((uVar4 & 0x100004) == 0) {
      if ((((uVar2 & 0x10040) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        FUN_0800160e(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_08001440(param_1);
      }
    }
    else {
      if ((((uVar2 & 0x10080) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        FUN_080015bc(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_08001420(param_1);
        return;
      }
    }
  }
  return;
}


////>>0x08001e68>>FUN_08001e68>>////

void FUN_08001e68(uint **param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = *param_1;
  uVar3 = puVar2[5];
  uVar4 = puVar2[1];
  if (((uVar3 & 0x10100) != 0) && ((uVar4 & 0x100) != 0)) {
    param_1[0x10] = (uint *)((uint)param_1[0x10] | 1);
    puVar2[5] = 0xfffffeff;
  }
  if (((uVar3 & 0x10200) != 0) && ((uVar4 & 0x100) != 0)) {
    param_1[0x10] = (uint *)((uint)param_1[0x10] | 2);
    (*param_1)[5] = 0xfffffdff;
  }
  if (((uVar3 & 0x10400) != 0) && ((uVar4 & 0x100) != 0)) {
    cVar1 = *(char *)((int)param_1 + 0x3d);
    if (((*(char *)((int)param_1 + 0x3e) == ' ') && (*(short *)((int)param_1 + 0x2a) == 0)) &&
       (((cVar1 == '!' || (cVar1 == ')')) || ((cVar1 == '(' && (param_1[0xc] == (uint *)0x21)))))) {
      FUN_08001684(param_1);
    }
    else {
      param_1[0x10] = (uint *)((uint)param_1[0x10] | 4);
      if (*(char *)((int)param_1 + 0x3e) == '\x10') {
        **param_1 = **param_1 | 0x200;
      }
      (*param_1)[5] = 0xfffffbff;
    }
  }
  if (((uVar3 & 0x10800) != 0) && ((uVar4 & 0x100) != 0)) {
    param_1[0x10] = (uint *)((uint)param_1[0x10] | 8);
    (*param_1)[5] = 0xfffff7ff;
  }
  if (param_1[0x10] != (uint *)0x0) {
    FUN_08001ab0(param_1);
  }
  return;
}


////>>0x08001f9c>>FUN_08001f9c>>////



undefined4 FUN_08001f9c(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_40023840 = _DAT_40023840 | 0x10000000;
  _DAT_420e0040 = 1;
  iVar1 = FUN_08000e30();
  do {
    if ((_DAT_40007004 & 0x10000) != 0) {
      _DAT_420e0044 = 1;
      iVar1 = FUN_08000e30();
      do {
        if ((_DAT_40007004 & 0x20000) != 0) {
          return 0;
        }
        iVar2 = FUN_08000e30();
      } while ((uint)(iVar2 - iVar1) < 0x3e9);
      return 3;
    }
    iVar2 = FUN_08000e30();
  } while ((uint)(iVar2 - iVar1) < 0x3e9);
  return 3;
}


////>>0x0800201c>>FUN_0800201c>>////



undefined4 FUN_0800201c(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (param_1 == (uint *)0x0) {
    return 1;
  }
  if ((*param_1 & 1) != 0) {
    if (((_DAT_40023808 & 0xc) == 4) ||
       (((_DAT_40023808 & 0xc) == 8 && ((_DAT_40023804 & 0x400000) != 0)))) {
      if (((_DAT_40023800 & 0x20000) != 0) && (param_1[1] == 0)) {
        return 1;
      }
    }
    else {
      if (param_1[1] == 0x10000) {
        _DAT_40023800 = _DAT_40023800 | 0x10000;
      }
      else if (param_1[1] == 0x50000) {
        _DAT_40023800 = _DAT_40023800 | 0x50000;
      }
      else {
        _DAT_40023800 = _DAT_40023800 & 0xfffaffff;
      }
      if (param_1[1] == 0) {
        iVar1 = FUN_08000e30();
        while ((_DAT_40023800 & 0x20000) != 0) {
          iVar2 = FUN_08000e30();
          if (100 < (uint)(iVar2 - iVar1)) {
            return 3;
          }
        }
      }
      else {
        iVar1 = FUN_08000e30();
        while ((_DAT_40023800 & 0x20000) == 0) {
          iVar2 = FUN_08000e30();
          if (100 < (uint)(iVar2 - iVar1)) {
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
      _DAT_40023800 = _DAT_40023800 & 0xffffff07 | param_1[4] << 3;
    }
    else if (param_1[3] == 0) {
      _DAT_42470000 = 0;
      iVar1 = FUN_08000e30();
      while ((_DAT_40023800 & 2) != 0) {
        iVar2 = FUN_08000e30();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      _DAT_42470000 = 1;
      iVar1 = FUN_08000e30();
      while ((_DAT_40023800 & 2) == 0) {
        iVar2 = FUN_08000e30();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      _DAT_40023800 = _DAT_40023800 & 0xffffff07 | param_1[4] << 3;
    }
  }
  if ((*param_1 & 8) != 0) {
    if (param_1[5] == 0) {
      _DAT_42470e80 = 0;
      iVar1 = FUN_08000e30();
      while ((_DAT_40023874 & 2) != 0) {
        iVar2 = FUN_08000e30();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      _DAT_42470e80 = 1;
      iVar1 = FUN_08000e30();
      while ((_DAT_40023874 & 2) == 0) {
        iVar2 = FUN_08000e30();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
  }
  if ((*param_1 & 4) != 0) {
    bVar4 = (_DAT_40023840 & 0x10000000) == 0;
    if (bVar4) {
      _DAT_40023840 = _DAT_40023840 | 0x10000000;
    }
    if ((_DAT_40007000 & 0x100) == 0) {
      _DAT_40007000 = _DAT_40007000 | 0x100;
      iVar1 = FUN_08000e30();
      while ((_DAT_40007000 & 0x100) == 0) {
        iVar2 = FUN_08000e30();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    if (param_1[2] == 1) {
      _DAT_40023870 = _DAT_40023870 | 1;
    }
    else if (param_1[2] == 5) {
      _DAT_40023870 = _DAT_40023870 | 5;
    }
    else {
      _DAT_40023870 = _DAT_40023870 & 0xfffffffa;
    }
    if (param_1[2] == 0) {
      iVar1 = FUN_08000e30();
      while ((_DAT_40023870 & 2) != 0) {
        iVar2 = FUN_08000e30();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      iVar1 = FUN_08000e30();
      while ((_DAT_40023870 & 2) == 0) {
        iVar2 = FUN_08000e30();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    if (bVar4) {
      _DAT_40023840 = _DAT_40023840 & 0xefffffff;
    }
  }
  if (param_1[6] == 0) {
    uVar3 = 0;
  }
  else if ((_DAT_40023808 & 0xc) == 8) {
    uVar3 = 1;
  }
  else if (param_1[6] == 2) {
    _DAT_42470060 = 0;
    iVar1 = FUN_08000e30();
    do {
      if ((_DAT_40023800 & 0x2000000) == 0) {
        _DAT_40023804 =
             param_1[7] | param_1[8] | param_1[9] << 6 | ((param_1[10] >> 1) - 1) * 0x10000 |
             param_1[0xb] << 0x18;
        _DAT_42470060 = 1;
        iVar1 = FUN_08000e30();
        do {
          if ((_DAT_40023800 & 0x2000000) != 0) {
            return 0;
          }
          iVar2 = FUN_08000e30();
        } while ((uint)(iVar2 - iVar1) < 3);
        return 3;
      }
      iVar2 = FUN_08000e30();
    } while ((uint)(iVar2 - iVar1) < 3);
    uVar3 = 3;
  }
  else {
    _DAT_42470060 = 0;
    iVar1 = FUN_08000e30();
    do {
      if ((_DAT_40023800 & 0x2000000) == 0) {
        return 0;
      }
      iVar2 = FUN_08000e30();
    } while ((uint)(iVar2 - iVar1) < 3);
    uVar3 = 3;
  }
  return uVar3;
}


////>>0x080023b4>>FUN_080023b4>>////



uint FUN_080023b4(void)

{
  undefined4 in_r3;
  uint uVar1;
  
  if ((_DAT_40023808 & 0xc) == 4) {
    return 8000000;
  }
  if ((_DAT_40023808 & 0xc) != 8) {
    return 16000000;
  }
  if ((_DAT_40023804 & 0x400000) == 0) {
    uVar1 = (_DAT_40023804 << 0x11) >> 0x17;
    uVar1 = FUN_080002d0(uVar1 * 16000000,
                         (((uint)(uVar1 * 0x20 < uVar1) * -0x3f -
                          (uint)(uVar1 * 0x7c0 < uVar1 * 0x1f)) * 8 +
                         (uint)CARRY4(uVar1 * 0x3d08,uVar1)) * 0x400 | uVar1 * 0x3d09 >> 0x16,
                         _DAT_40023804 & 0x3f,0,in_r3);
  }
  else {
    uVar1 = (_DAT_40023804 << 0x11) >> 0x17;
    uVar1 = FUN_080002d0(uVar1 * 8000000,
                         (((uint)(uVar1 * 0x20 < uVar1) * -0x3f -
                          (uint)(uVar1 * 0x7c0 < uVar1 * 0x1f)) * 8 +
                         (uint)CARRY4(uVar1 * 0x3d08,uVar1)) * 0x200,_DAT_40023804 & 0x3f,0,in_r3);
  }
  return uVar1 / ((((_DAT_40023804 << 0xe) >> 0x1e) + 1) * 2);
}


////>>0x08002488>>FUN_08002488>>////



undefined4 FUN_08002488(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (uint *)0x0) {
    return 1;
  }
  if ((_DAT_40023c00 & 0xf) < param_2) {
    _DAT_40023c00 = CONCAT31(DAT_40023c00_1,(char)param_2);
    if (param_2 != (param_2 & 0xf)) {
      return 1;
    }
  }
  if ((*param_1 & 2) != 0) {
    if ((*param_1 & 4) != 0) {
      _DAT_40023808 = _DAT_40023808 | 0x1c00;
    }
    if ((*param_1 & 8) != 0) {
      _DAT_40023808 = _DAT_40023808 | 0xe000;
    }
    _DAT_40023808 = _DAT_40023808 & 0xffffff0f | param_1[2];
  }
  if ((*param_1 & 1) != 0) {
    uVar3 = param_1[1];
    if (uVar3 == 1) {
      if ((_DAT_40023800 & 0x20000) == 0) {
        return 1;
      }
    }
    else if (uVar3 - 2 < 2) {
      if ((_DAT_40023800 & 0x2000000) == 0) {
        return 1;
      }
    }
    else if ((_DAT_40023800 & 2) == 0) {
      return 1;
    }
    _DAT_40023808 = uVar3 | _DAT_40023808 & 0xfffffffc;
    iVar1 = FUN_08000e30();
    while( true ) {
      if ((_DAT_40023808 & 0xc) == param_1[1] * 4) break;
      iVar2 = FUN_08000e30();
      if (5000 < (uint)(iVar2 - iVar1)) {
        return 3;
      }
    }
  }
  if (param_2 < (_DAT_40023c00 & 0xf)) {
    _DAT_40023c00 = CONCAT31(DAT_40023c00_1,(char)param_2);
    if (param_2 != (param_2 & 0xf)) {
      return 1;
    }
  }
  if ((*param_1 & 4) != 0) {
    _DAT_40023808 = _DAT_40023808 & 0xffffe3ff | param_1[3];
  }
  if ((*param_1 & 8) != 0) {
    _DAT_40023808 = _DAT_40023808 & 0xffff1fff | param_1[4] << 3;
  }
  uVar3 = FUN_080023b4();
  DAT_2000002c = uVar3 >> (&DAT_08005dfc)[(_DAT_40023808 << 0x18) >> 0x1c];
  FUN_08000d98(0xf);
  return 0;
}


////>>0x080025e0>>FUN_080025e0>>////

undefined4 FUN_080025e0(void)

{
  return DAT_2000002c;
}


////>>0x080025ec>>FUN_080025ec>>////



uint FUN_080025ec(void)

{
  uint uVar1;
  
  uVar1 = FUN_080025e0();
  return uVar1 >> (&DAT_08005e0c)[(uint)(_DAT_40023808 << 0x13) >> 0x1d];
}


////>>0x0800260c>>FUN_0800260c>>////



uint FUN_0800260c(void)

{
  uint uVar1;
  
  uVar1 = FUN_080025e0();
  return uVar1 >> (&DAT_08005e0c)[(uint)(_DAT_40023808 << 0x10) >> 0x1d];
}


////>>0x0800262c>>FUN_0800262c>>////



void FUN_0800262c(int *param_1)

{
  if (((*(uint *)(*param_1 + 0xc) & 0x100) != 0) && ((*(uint *)(*param_1 + 8) & 0x1000) != 0)) {
    FUN_08003594();
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xff | 0xfffffe7f;
  }
  if (((*(uint *)(*param_1 + 0xc) & 0x200) != 0) && ((*(uint *)(*param_1 + 8) & 0x2000) != 0)) {
    FUN_0800268c(param_1);
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xff | 0xfffffd7f;
  }
  _DAT_40013c14 = 0x20000;
  *(undefined *)((int)param_1 + 0x1d) = 1;
  return;
}


////>>0x0800268c>>FUN_0800268c>>////

void FUN_0800268c(void)

{
  return;
}


////>>0x0800268e>>FUN_0800268e>>////

void FUN_0800268e(uint **param_1)

{
  uint *puVar1;
  
  *(undefined *)((int)param_1 + 0x39) = 2;
  puVar1 = *param_1;
  if ((puVar1[8] & 0x1111) == 0) {
    if ((puVar1[8] & 0x444) == 0) {
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  FUN_0800340c(param_1);
  *(undefined *)((int)param_1 + 0x39) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return;
}


////>>0x080026c8>>FUN_080026c8>>////

void FUN_080026c8(void)

{
  return;
}


////>>0x080026ca>>FUN_080026ca>>////

void FUN_080026ca(void)

{
  return;
}


////>>0x080026cc>>FUN_080026cc>>////

void FUN_080026cc(void)

{
  return;
}


////>>0x080026ce>>FUN_080026ce>>////

void FUN_080026ce(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 2) != 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffd;
    *(undefined *)(param_1 + 6) = 1;
    if ((*(uint *)(*param_1 + 0x18) & 3) == 0) {
      FUN_08003754();
      FUN_080026ca(param_1);
    }
    else {
      FUN_080026c8();
    }
    *(undefined *)(param_1 + 6) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 4) != 0) && ((*(uint *)(iVar1 + 0xc) & 4) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffb;
    *(undefined *)(param_1 + 6) = 2;
    if ((*(uint *)(*param_1 + 0x18) & 0x300) == 0) {
      FUN_08003754(param_1);
      FUN_080026ca(param_1);
    }
    else {
      FUN_080026c8(param_1);
    }
    *(undefined *)(param_1 + 6) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 8) != 0) && ((*(uint *)(iVar1 + 0xc) & 8) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffff7;
    *(undefined *)(param_1 + 6) = 4;
    if ((*(uint *)(*param_1 + 0x1c) & 3) == 0) {
      FUN_08003754(param_1);
      FUN_080026ca(param_1);
    }
    else {
      FUN_080026c8(param_1);
    }
    *(undefined *)(param_1 + 6) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x10) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x10) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffef;
    *(undefined *)(param_1 + 6) = 8;
    if ((*(uint *)(*param_1 + 0x1c) & 0x300) == 0) {
      FUN_08003754(param_1);
      FUN_080026ca(param_1);
    }
    else {
      FUN_080026c8(param_1);
    }
    *(undefined *)(param_1 + 6) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 1) != 0) && ((*(uint *)(iVar1 + 0xc) & 1) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffe;
    FUN_0800376e(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x80) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x80) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffff7f;
    FUN_0800293e(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x40) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x40) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffbf;
    FUN_080026cc(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x20) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x20) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffdf;
    FUN_0800293c(param_1);
  }
  return;
}


////>>0x08002848>>FUN_08002848>>////

void FUN_08002848(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_3 << (param_2 & 0xff);
  return;
}


////>>0x08002864>>FUN_08002864>>////

undefined4 FUN_08002864(uint **param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  
  FUN_08002848(*param_1,param_2,0);
  puVar2 = *param_1;
  if (puVar2 == (uint *)0x40010000) {
    bVar1 = true;
  }
  else if (puVar2 == (uint *)0x40010400) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((bVar1) && ((puVar2[8] & 0x1111) == 0)) && ((puVar2[8] & 0x444) == 0)) {
    puVar2[0x11] = puVar2[0x11] & 0xffff7fff;
  }
  puVar2 = *param_1;
  if (((puVar2[8] & 0x1111) == 0) && ((puVar2[8] & 0x444) == 0)) {
    *puVar2 = *puVar2 & 0xfffffffe;
  }
  *(undefined *)((int)param_1 + 0x39) = 1;
  return 0;
}


////>>0x080028d4>>FUN_080028d4>>////

void FUN_080028d4(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(4 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_3 << (param_2 & 0xff);
  return;
}


////>>0x080028f0>>FUN_080028f0>>////

undefined4 FUN_080028f0(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  FUN_080028d4(*param_1,param_2,0);
  puVar1 = *param_1;
  if (((puVar1[8] & 0x1111) == 0) && ((puVar1[8] & 0x444) == 0)) {
    puVar1[0x11] = puVar1[0x11] & 0xffff7fff;
  }
  puVar1 = *param_1;
  if (((puVar1[8] & 0x1111) == 0) && ((puVar1[8] & 0x444) == 0)) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return 0;
}


////>>0x0800293c>>FUN_0800293c>>////

void FUN_0800293c(void)

{
  return;
}


////>>0x0800293e>>FUN_0800293e>>////

void FUN_0800293e(void)

{
  return;
}


////>>0x08002940>>FUN_08002940>>////

void FUN_08002940(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffedf;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  return;
}


////>>0x0800295c>>FUN_0800295c>>////

undefined4 FUN_0800295c(int *param_1)

{
  short sVar1;
  byte *pbVar2;
  
  if (*(char *)((int)param_1 + 0x39) != '!') {
    return 2;
  }
  if (param_1[2] == 0x1000) {
    *(uint *)(*param_1 + 4) = *(ushort *)param_1[8] & 0x1ff;
    if (param_1[4] == 0) {
      param_1[8] = param_1[8] + 2;
    }
    else {
      param_1[8] = param_1[8] + 1;
    }
  }
  else {
    pbVar2 = (byte *)param_1[8];
    param_1[8] = (int)(pbVar2 + 1);
    *(uint *)(*param_1 + 4) = (uint)*pbVar2;
  }
  sVar1 = *(short *)((int)param_1 + 0x26) + -1;
  *(short *)((int)param_1 + 0x26) = sVar1;
  if (sVar1 == 0) {
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffff7f;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x40;
    return 0;
  }
  return 0;
}


////>>0x080029c8>>FUN_080029c8>>////

void FUN_080029c8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffcfff | param_1[3];
  *(uint *)(*param_1 + 0xc) =
       *(uint *)(*param_1 + 0xc) & 0xffff69f3 | param_1[2] | param_1[4] | param_1[5] | param_1[7];
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffcff | param_1[6];
  if (param_1[7] == 0x8000) {
    iVar10 = *param_1;
    if ((iVar10 != 0x40011000) && (iVar10 != 0x40011400)) {
      iVar1 = FUN_080025ec();
      iVar6 = param_1[1];
      iVar2 = FUN_080025ec();
      iVar7 = param_1[1];
      iVar3 = FUN_080025ec();
      iVar8 = param_1[1];
      iVar4 = FUN_080025ec();
      iVar9 = param_1[1];
      iVar5 = FUN_080025ec();
      *(uint *)(iVar10 + 8) =
           ((uint)((int)((ulonglong)
                         (((uint)(iVar4 * 0x19) / (uint)(iVar9 << 1) +
                          (int)(((ulonglong)(uint)(iVar5 * 0x19) /
                                (ulonglong)(uint)(param_1[1] << 1)) / 100) * -100) * 8 + 0x32) *
                         0x51eb851f >> 0x20) << 0x18) >> 0x1d) +
           ((((uint)(iVar2 * 0x19) / (uint)(iVar7 << 1) +
             (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(iVar8 << 1)) / 100) * -100)
             * 8 + 0x32) / 100 & 0xf8) * 2 +
           (int)(((ulonglong)(uint)(iVar1 * 0x19) / (ulonglong)(uint)(iVar6 << 1)) / 100) * 0x10;
      return;
    }
    iVar1 = FUN_0800260c();
    iVar6 = param_1[1];
    iVar2 = FUN_0800260c();
    iVar7 = param_1[1];
    iVar3 = FUN_0800260c();
    iVar8 = param_1[1];
    iVar4 = FUN_0800260c();
    iVar9 = param_1[1];
    iVar5 = FUN_0800260c();
    *(uint *)(iVar10 + 8) =
         ((uint)((int)((ulonglong)
                       (((uint)(iVar4 * 0x19) / (uint)(iVar9 << 1) +
                        (int)(((ulonglong)(uint)(iVar5 * 0x19) / (ulonglong)(uint)(param_1[1] << 1))
                             / 100) * -100) * 8 + 0x32) * 0x51eb851f >> 0x20) << 0x18) >> 0x1d) +
         ((((uint)(iVar2 * 0x19) / (uint)(iVar7 << 1) +
           (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(iVar8 << 1)) / 100) * -100) *
           8 + 0x32) / 100 & 0xf8) * 2 +
         (int)(((ulonglong)(uint)(iVar1 * 0x19) / (ulonglong)(uint)(iVar6 << 1)) / 100) * 0x10;
    return;
  }
  iVar10 = *param_1;
  if ((iVar10 != 0x40011000) && (iVar10 != 0x40011400)) {
    iVar1 = FUN_080025ec();
    iVar6 = param_1[1];
    iVar2 = FUN_080025ec();
    iVar7 = param_1[1];
    iVar3 = FUN_080025ec();
    iVar8 = param_1[1];
    iVar4 = FUN_080025ec();
    iVar9 = param_1[1];
    iVar5 = FUN_080025ec();
    *(uint *)(iVar10 + 8) =
         ((uint)((int)((ulonglong)
                       (((uint)(iVar4 * 0x19) / (uint)(iVar9 << 2) +
                        (int)(((ulonglong)(uint)(iVar5 * 0x19) / (ulonglong)(uint)(param_1[1] << 2))
                             / 100) * -100) * 0x10 + 0x32) * 0x51eb851f >> 0x20) << 0x17) >> 0x1c) +
         ((((uint)(iVar2 * 0x19) / (uint)(iVar7 << 2) +
           (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(iVar8 << 2)) / 100) * -100) *
           0x10 + 0x32) / 100 & 0xf0) +
         (int)(((ulonglong)(uint)(iVar1 * 0x19) / (ulonglong)(uint)(iVar6 << 2)) / 100) * 0x10;
    return;
  }
  iVar1 = FUN_0800260c();
  iVar6 = param_1[1];
  iVar2 = FUN_0800260c();
  iVar7 = param_1[1];
  iVar3 = FUN_0800260c();
  iVar8 = param_1[1];
  iVar4 = FUN_0800260c();
  iVar9 = param_1[1];
  iVar5 = FUN_0800260c();
  *(uint *)(iVar10 + 8) =
       ((uint)((int)((ulonglong)
                     (((uint)(iVar4 * 0x19) / (uint)(iVar9 << 2) +
                      (int)(((ulonglong)(uint)(iVar5 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) /
                           100) * -100) * 0x10 + 0x32) * 0x51eb851f >> 0x20) << 0x17) >> 0x1c) +
       ((((uint)(iVar2 * 0x19) / (uint)(iVar7 << 2) +
         (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(iVar8 << 2)) / 100) * -100) *
         0x10 + 0x32) / 100 & 0xf0) +
       (int)(((ulonglong)(uint)(iVar1 * 0x19) / (ulonglong)(uint)(iVar6 << 2)) / 100) * 0x10;
  return;
}


////>>0x08002d0c>>FUN_08002d0c>>////

undefined4 FUN_08002d0c(uint **param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  
  do {
    if (((param_2 & ~**param_1) == 0) != param_3) {
      return 0;
    }
  } while ((param_5 == 0xffffffff) ||
          ((param_5 != 0 && (iVar1 = FUN_08000e30(), (uint)(iVar1 - param_4) <= param_5))));
  (*param_1)[3] = (*param_1)[3] & 0xfffffe5f;
  (*param_1)[5] = (*param_1)[5] & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x39) = 0x20;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  *(undefined *)(param_1 + 0xe) = 0;
  return 3;
}


////>>0x08002d70>>FUN_08002d70>>////

void FUN_08002d70(void)

{
  return;
}


////>>0x08002d72>>FUN_08002d72>>////

undefined4 FUN_08002d72(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*(char *)((int)param_1 + 0x39) == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      FUN_08002d70();
    }
    *(undefined *)((int)param_1 + 0x39) = 0x24;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
    FUN_080029c8(param_1);
    *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffb7ff;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffd5;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x2000;
    param_1[0xf] = 0;
    *(undefined *)((int)param_1 + 0x39) = 0x20;
    *(undefined *)((int)param_1 + 0x3a) = 0x20;
    return 0;
  }
  return 1;
}


////>>0x08002dd0>>FUN_08002dd0>>////

undefined4 FUN_08002dd0(int *param_1,ushort *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0x39) == ' ') {
    if (param_2 == (ushort *)0x0) {
      uVar2 = 1;
    }
    else if (param_3 == 0) {
      uVar2 = 1;
    }
    else if (*(char *)(param_1 + 0xe) == '\x01') {
      uVar2 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
      param_1[0xf] = 0;
      *(undefined *)((int)param_1 + 0x39) = 0x21;
      uVar2 = FUN_08000e30();
      *(short *)(param_1 + 9) = (short)param_3;
      *(short *)((int)param_1 + 0x26) = (short)param_3;
      while (*(short *)((int)param_1 + 0x26) != 0) {
        *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + -1;
        if (param_1[2] == 0x1000) {
          iVar1 = FUN_08002d0c(param_1,0x80,0,uVar2,param_4);
          if (iVar1 != 0) {
            return 3;
          }
          *(uint *)(*param_1 + 4) = *param_2 & 0x1ff;
          if (param_1[4] == 0) {
            param_2 = param_2 + 1;
          }
          else {
            param_2 = (ushort *)((int)param_2 + 1);
          }
        }
        else {
          iVar1 = FUN_08002d0c(param_1,0x80,0,uVar2,param_4);
          if (iVar1 != 0) {
            return 3;
          }
          *(uint *)(*param_1 + 4) = (uint)*(byte *)param_2;
          param_2 = (ushort *)((int)param_2 + 1);
        }
      }
      iVar1 = FUN_08002d0c(param_1,0x40,0,uVar2,param_4);
      if (iVar1 == 0) {
        *(undefined *)((int)param_1 + 0x39) = 0x20;
        *(undefined *)(param_1 + 0xe) = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


////>>0x08002eb2>>FUN_08002eb2>>////

undefined4 FUN_08002eb2(int *param_1,int param_2,int param_3)

{
  if (*(char *)((int)param_1 + 0x39) != ' ') {
    return 2;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0xe) != '\x01') {
    param_1[8] = param_2;
    *(short *)(param_1 + 9) = (short)param_3;
    *(short *)((int)param_1 + 0x26) = (short)param_3;
    param_1[0xf] = 0;
    *(undefined *)((int)param_1 + 0x39) = 0x21;
    *(undefined *)(param_1 + 0xe) = 0;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x80;
    return 0;
  }
  return 2;
}


////>>0x08002efa>>FUN_08002efa>>////

undefined4 FUN_08002efa(int *param_1,int param_2,int param_3)

{
  if (*(char *)((int)param_1 + 0x3a) != ' ') {
    return 2;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0xe) != '\x01') {
    param_1[10] = param_2;
    *(short *)(param_1 + 0xb) = (short)param_3;
    *(short *)((int)param_1 + 0x2e) = (short)param_3;
    param_1[0xf] = 0;
    *(undefined *)((int)param_1 + 0x3a) = 0x22;
    *(undefined *)(param_1 + 0xe) = 0;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 1;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x120;
    return 0;
  }
  return 2;
}


////>>0x08002f4c>>FUN_08002f4c>>////

undefined4 FUN_08002f4c(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffbf;
  *(undefined *)((int)param_1 + 0x39) = 0x20;
  FUN_08003f48();
  return 0;
}


////>>0x08002f66>>FUN_08002f66>>////

undefined4 FUN_08002f66(int *param_1)

{
  byte *pbVar1;
  short sVar2;
  undefined *puVar3;
  
  if (*(char *)((int)param_1 + 0x3a) != '\"') {
    return 2;
  }
  if (param_1[2] == 0x1000) {
    if (param_1[4] == 0) {
      *(ushort *)param_1[10] = (ushort)((uint)(*(int *)(*param_1 + 4) << 0x17) >> 0x17);
      param_1[10] = param_1[10] + 2;
    }
    else {
      *(ushort *)param_1[10] = (ushort)*(undefined4 *)(*param_1 + 4) & 0xff;
      param_1[10] = param_1[10] + 1;
    }
  }
  else if (param_1[4] == 0) {
    puVar3 = (undefined *)param_1[10];
    param_1[10] = (int)(puVar3 + 1);
    *puVar3 = (char)*(undefined4 *)(*param_1 + 4);
  }
  else {
    pbVar1 = (byte *)param_1[10];
    param_1[10] = (int)(pbVar1 + 1);
    *pbVar1 = (byte)*(undefined4 *)(*param_1 + 4) & 0x7f;
  }
  sVar2 = *(short *)((int)param_1 + 0x2e) + -1;
  *(short *)((int)param_1 + 0x2e) = sVar2;
  if (sVar2 != 0) {
    return 0;
  }
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffedf;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  FUN_08003f24();
  return 0;
}


////>>0x08002ffc>>FUN_08002ffc>>////

void FUN_08002ffc(uint **param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = *param_1;
  uVar5 = *puVar3;
  uVar2 = puVar3[3];
  if ((((uVar5 & 0xf) == 0) && ((uVar5 & 0x20) != 0)) && ((uVar2 & 0x20) != 0)) {
    FUN_08002f66(param_1);
    return;
  }
  if (((uVar5 & 0xf) == 0) || ((uVar4 = puVar3[5] & 1, uVar4 == 0 && ((uVar2 & 0x120) == 0)))) {
    if (((uVar5 & 0x80) != 0) && ((uVar2 & 0x80) != 0)) {
      FUN_0800295c(param_1);
      return;
    }
    if (((uVar5 & 0x40) != 0) && ((uVar2 & 0x40) != 0)) {
      FUN_08002f4c(param_1);
    }
  }
  else {
    if (((uVar5 & 1) != 0) && ((uVar2 & 0x100) != 0)) {
      param_1[0xf] = (uint *)((uint)param_1[0xf] | 1);
    }
    if (((uVar5 & 4) != 0) && (uVar4 != 0)) {
      param_1[0xf] = (uint *)((uint)param_1[0xf] | 2);
    }
    if (((uVar5 & 2) != 0) && (uVar4 != 0)) {
      param_1[0xf] = (uint *)((uint)param_1[0xf] | 4);
    }
    if (((uVar5 & 8) != 0) && (uVar4 != 0)) {
      param_1[0xf] = (uint *)((uint)param_1[0xf] | 8);
    }
    if (param_1[0xf] != (uint *)0x0) {
      if (((uVar5 & 0x20) != 0) && ((uVar2 & 0x20) != 0)) {
        FUN_08002f66(param_1);
      }
      if ((((uint)param_1[0xf] & 8) == 0) && (((*param_1)[5] & 0x40) == 0)) {
        FUN_08003f94(param_1);
        param_1[0xf] = (uint *)0x0;
        return;
      }
      FUN_08002940(param_1);
      puVar3 = *param_1;
      if ((puVar3[5] & 0x40) == 0) {
        FUN_08003f94(param_1);
        return;
      }
      puVar3[5] = puVar3[5] & 0xffffffbf;
      if (param_1[0xd] == (uint *)0x0) {
        FUN_08003f94(param_1);
        return;
      }
      param_1[0xd][0x14] = (uint)&LAB_0800311c_1;
      iVar1 = FUN_08000f8c(param_1[0xd]);
      if (iVar1 != 0) {
        (*(code *)param_1[0xd][0x14])();
        return;
      }
    }
  }
  return;
}


////>>0x0800312c>>FUN_0800312c>>////

byte FUN_0800312c(int param_1)

{
  return *(byte *)(param_1 + 0x3a) | *(byte *)(param_1 + 0x39);
}


////>>0x08003138>>FUN_08003138>>////

uint FUN_08003138(uint param_1,int param_2)

{
  return *(uint *)(param_2 + ((param_1 << 0x18) >> 0x1c) * 4) >> (param_1 & 0xf) & 1;
}


////>>0x0800314e>>FUN_0800314e>>////

void FUN_0800314e(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 0x18) >> 0x1c;
  *(uint *)(param_2 + uVar1 * 4) = *(uint *)(param_2 + uVar1 * 4) | 1 << (param_1 & 0xf);
  return;
}


////>>0x0800316c>>FUN_0800316c>>////

void FUN_0800316c(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 0x18) >> 0x1c;
  *(uint *)(param_2 + uVar1 * 4) = *(uint *)(param_2 + uVar1 * 4) & ~(1 << (param_1 & 0xf));
  return;
}


////>>0x0800318c>>FUN_0800318c>>////

undefined4 FUN_0800318c(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x40020000;
  case 1:
    return 0x40020400;
  case 2:
    return 0x40020800;
  case 3:
    return 0x40020c00;
  case 4:
    return 0x40021000;
  case 5:
    return 0x40021400;
  case 6:
    return 0x40021800;
  case 7:
    return 0x40021c00;
  case 8:
    return 0x40022000;
  case 9:
    return 0x40022400;
  case 10:
    return 0x40022800;
  default:
    return 0;
  }
}


////>>0x080031fc>>FUN_080031fc>>////



undefined4 FUN_080031fc(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    _DAT_40023830 = _DAT_40023830 | 1;
    uVar1 = 0x40020000;
    break;
  case 1:
    _DAT_40023830 = _DAT_40023830 | 2;
    uVar1 = 0x40020400;
    break;
  case 2:
    _DAT_40023830 = _DAT_40023830 | 4;
    uVar1 = 0x40020800;
    break;
  case 3:
    _DAT_40023830 = _DAT_40023830 | 8;
    uVar1 = 0x40020c00;
    break;
  case 4:
    _DAT_40023830 = _DAT_40023830 | 0x10;
    uVar1 = 0x40021000;
    break;
  case 5:
    _DAT_40023830 = _DAT_40023830 | 0x20;
    uVar1 = 0x40021400;
    break;
  case 6:
    _DAT_40023830 = _DAT_40023830 | 0x40;
    uVar1 = 0x40021800;
    break;
  case 7:
    _DAT_40023830 = _DAT_40023830 | 0x80;
    uVar1 = 0x40021c00;
    break;
  case 8:
    _DAT_40023830 = _DAT_40023830 | 0x100;
    uVar1 = 0x40022000;
    break;
  case 9:
    _DAT_40023830 = _DAT_40023830 | 0x200;
    uVar1 = 0x40022400;
    break;
  case 10:
    _DAT_40023830 = _DAT_40023830 | 0x400;
    uVar1 = 0x40022800;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08003380>>FUN_08003380>>////

undefined4 FUN_08003380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0800354a(param_1,&DAT_08005a18,param_3,param_4,param_4);
  if ((uint)(iVar1 << 0xc) >> 0x1b != 2) {
    return 0;
  }
  return 0x10;
}


////>>0x0800339c>>FUN_0800339c>>////

undefined4 FUN_0800339c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800354a(param_1,&DAT_08005a3c,param_3,param_4,param_4);
  uVar2 = (uint)(iVar1 << 0xc) >> 0x1b;
  if (uVar2 == 3) {
    return 8;
  }
  if (uVar2 != 4) {
    if (uVar2 != 2) {
      return 0;
    }
    return 4;
  }
  return 0xc;
}


////>>0x080033c8>>FUN_080033c8>>////



void FUN_080033c8(void)

{
  _DAT_40023840 = _DAT_40023840 & 0xdfffffff;
  return;
}


////>>0x080033d8>>FUN_080033d8>>////

void FUN_080033d8(undefined4 param_1)

{
  int iVar1;
  int local_1c [5];
  
  local_1c[0] = FUN_080034f4(param_1,&DAT_08005a18);
  if ((local_1c[0] != 0) && ((iVar1 = FUN_08003380(param_1), iVar1 == 0 || (iVar1 == 0x10)))) {
    FUN_08000f72(local_1c,iVar1);
    FUN_08000f56(local_1c);
  }
  return;
}


////>>0x0800340c>>FUN_0800340c>>////

void FUN_0800340c(void)

{
  FUN_080035fc();
  return;
}


////>>0x08003414>>FUN_08003414>>////

void FUN_08003414(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int local_4c [16];
  
  local_4c[0] = FUN_080034f4(param_1,&DAT_08005a3c);
  if ((local_4c[0] != 0) &&
     ((((iVar1 = FUN_0800339c(param_1), iVar1 == 0 || (iVar1 == 4)) || (iVar1 == 8)) ||
      ((iVar1 == 0xc || (iVar1 == 0x18)))))) {
    uVar2 = FUN_0800354a(param_1,&DAT_08005a3c);
    if ((uVar2 & 0x100000) == 0) {
      FUN_08002864(local_4c,iVar1);
    }
    else {
      FUN_080028f0(local_4c,iVar1);
    }
    FUN_0800268e(local_4c);
  }
  return;
}


////>>0x0800346c>>FUN_0800346c>>////

void FUN_0800346c(void)

{
  FUN_08000e30();
  return;
}


////>>0x08003474>>FUN_08003474>>////

void FUN_08003474(void)

{
  return;
}


////>>0x08003476>>FUN_08003476>>////

void FUN_08003476(void)

{
  FUN_08000e18();
  FUN_08000f4e();
  FUN_08003474();
  return;
}


////>>0x08003486>>FUN_08003486>>////

void FUN_08003486(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = FUN_080031fc((param_1 << 0x18) >> 0x1c);
  local_24 = 1 << (param_1 & 0xf) & 0xffff;
  local_18 = 2;
  local_20 = param_2;
  local_1c = param_3;
  FUN_08000fb4(uVar1,&local_24);
  return;
}


////>>0x080034b6>>FUN_080034b6>>////

void FUN_080034b6(undefined4 param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    FUN_08001198(param_1,param_2,0,param_4,param_4);
    return;
  }
  FUN_08001198(param_1,param_2,1,param_4,param_4);
  return;
}


////>>0x080034ce>>FUN_080034ce>>////

void FUN_080034ce(void)

{
  FUN_08000de4();
  FUN_08000c8c();
  return;
}


////>>0x080034da>>FUN_080034da>>////

undefined4 FUN_080034da(int param_1,short *param_2)

{
  while( true ) {
    if (*param_2 == -1) {
      return 0;
    }
    if (*param_2 == param_1) break;
    param_2 = param_2 + 6;
  }
  return *(undefined4 *)(param_2 + 2);
}


////>>0x080034f4>>FUN_080034f4>>////

undefined4 FUN_080034f4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != -1) {
    uVar1 = FUN_080034da();
    return uVar1;
  }
  return 0;
}


////>>0x08003506>>FUN_08003506>>////

int FUN_08003506(int param_1,short *param_2)

{
  while( true ) {
    if (*(int *)(param_2 + 2) == 0) {
      return -1;
    }
    if (*(int *)(param_2 + 2) == param_1) break;
    param_2 = param_2 + 6;
  }
  return (int)*param_2;
}


////>>0x0800351e>>FUN_0800351e>>////

undefined4 FUN_0800351e(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_08003506();
    return uVar1;
  }
  return 0xffffffff;
}


////>>0x0800352e>>FUN_0800352e>>////

undefined4 FUN_0800352e(int param_1,short *param_2)

{
  while( true ) {
    if (*param_2 == -1) {
      return 0xffffffff;
    }
    if (*param_2 == param_1) break;
    param_2 = param_2 + 6;
  }
  return *(undefined4 *)(param_2 + 4);
}


////>>0x0800354a>>FUN_0800354a>>////

undefined4 FUN_0800354a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  uVar1 = FUN_0800352e();
  return uVar1;
}


////>>0x0800355e>>FUN_0800355e>>////

undefined4 FUN_0800355e(int param_1,short *param_2)

{
  if (param_1 == -1) {
    return 0;
  }
  while( true ) {
    if (*param_2 == -1) {
      return 0;
    }
    if (param_1 == *param_2) break;
    param_2 = param_2 + 6;
  }
  return 1;
}


////>>0x08003582>>FUN_08003582>>////

int FUN_08003582(int param_1,int param_2)

{
  if (param_1 != param_2) {
    if (param_1 == 0) {
      return param_2;
    }
    if (param_2 == 0) {
      return param_1;
    }
    param_1 = 0;
  }
  return param_1;
}


////>>0x08003594>>FUN_08003594>>////

void FUN_08003594(void)

{
  if (DAT_20000188 != (code *)0x0) {
    (*DAT_20000188)(DAT_200001ac);
  }
  return;
}


////>>0x080035bc>>FUN_080035bc>>////



void FUN_080035bc(void)

{
  _DAT_40023808 = 0;
  _DAT_40023804 = 0x24003010;
  _DAT_40023800 = _DAT_40023800 & 0xfef2ffff | 1;
  _DAT_4002380c = 0;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x080035fc>>FUN_080035fc>>////



void FUN_080035fc(int *param_1)

{
  if (*param_1 == 0x40010000) {
    _DAT_40023844 = _DAT_40023844 & 0xfffffffe;
  }
  if (*param_1 == 0x40000000) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffffe;
  }
  if (*param_1 == 0x40000400) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffffd;
  }
  if (*param_1 == 0x40000800) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffffb;
  }
  if (*param_1 == 0x40000c00) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffff7;
  }
  if (*param_1 == 0x40001000) {
    _DAT_40023840 = _DAT_40023840 & 0xffffffef;
  }
  if (*param_1 == 0x40001400) {
    _DAT_40023840 = _DAT_40023840 & 0xffffffdf;
  }
  if (*param_1 == 0x40010400) {
    _DAT_40023844 = _DAT_40023844 & 0xfffffffd;
  }
  if (*param_1 == 0x40014000) {
    _DAT_40023844 = _DAT_40023844 & 0xfffeffff;
  }
  if (*param_1 == 0x40014400) {
    _DAT_40023844 = _DAT_40023844 & 0xfffdffff;
  }
  if (*param_1 == 0x40014800) {
    _DAT_40023844 = _DAT_40023844 & 0xfffbffff;
  }
  if (*param_1 == 0x40001800) {
    _DAT_40023840 = _DAT_40023840 & 0xffffffbf;
  }
  if (*param_1 == 0x40001c00) {
    _DAT_40023840 = _DAT_40023840 & 0xffffff7f;
  }
  if (*param_1 == 0x40002000) {
    _DAT_40023840 = _DAT_40023840 & 0xfffffeff;
  }
  return;
}


////>>0x08003750>>FUN_08003750>>////

int FUN_08003750(int param_1)

{
  return param_1 + -4;
}


////>>0x08003754>>FUN_08003754>>////

void FUN_08003754(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08003750();
  if ((*(code **)(iVar1 + 0x48) != (code *)0x0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    (**(code **)(iVar1 + 0x48))(iVar1,0);
  }
  return;
}


////>>0x0800376e>>FUN_0800376e>>////

void FUN_0800376e(void)

{
  int iVar1;
  
  iVar1 = FUN_08003750();
  if (*(code **)(iVar1 + 0x44) != (code *)0x0) {
    (**(code **)(iVar1 + 0x44))();
  }
  return;
}


////>>0x0800377c>>FUN_0800377c>>////

void FUN_0800377c(void)

{
  if (DAT_200001b0 != 0) {
    FUN_080026ce();
  }
  if (DAT_200001d4 != 0) {
    FUN_080026ce();
  }
  return;
}


////>>0x0800387c>>FUN_0800387c>>////

int FUN_0800387c(int param_1)

{
  return param_1 + -4;
}


////>>0x08003880>>FUN_08003880>>////

void FUN_08003880(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0800387c();
  if (param_3 == *(int *)(param_1 + 0xc)) {
    if (param_2 == 0) {
      *(undefined *)(iVar1 + 0x88) = 0;
      *(undefined *)(iVar1 + 0x5e) = 0;
      if (*(code **)(iVar1 + 100) != (code *)0x0) {
        (**(code **)(iVar1 + 100))();
      }
      FUN_08001460(param_1,iVar1 + 0x68,*(undefined *)(iVar1 + 0x88),8);
      return;
    }
    *(undefined *)(iVar1 + 0x5e) = 1;
    FUN_080014ec(param_1,iVar1 + 0x68,0x20,8,param_4);
  }
  return;
}


////>>0x080038d0>>FUN_080038d0>>////

void FUN_080038d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800387c();
  if (((*(code **)(iVar1 + 0x60) != (code *)0x0) && (*(char *)(iVar1 + 0x5e) == '\x01')) &&
     (*(char *)(iVar1 + 0x2c) != ' ')) {
    (**(code **)(iVar1 + 0x60))(iVar1 + 0x68);
  }
  FUN_08001578(param_1);
  return;
}


////>>0x08003900>>FUN_08003900>>////

void FUN_08003900(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0800387c();
  if (*(char *)(iVar1 + 0x5f) == '\0') {
    FUN_08001578(param_1);
  }
  return;
}


////>>0x08003978>>FUN_08003978>>////



void FUN_08003978(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_080034f4((int)*(short *)(param_1 + 0x16),&DAT_08005ca0);
    iVar2 = FUN_080034f4((int)*(short *)((int)param_1 + 0x5a),&DAT_08005c10);
    if ((iVar2 == 0) || (iVar1 == 0)) {
      FUN_08004fdc("ERROR: at least one UART pin has no peripheral\n",iVar2);
    }
    else {
      iVar1 = FUN_08003582(iVar1);
      *param_1 = iVar1;
      if (iVar1 == 0) {
        FUN_08004fdc("ERROR: U(S)ART pins mismatch\n");
      }
      else {
        if (iVar1 == 0x40011000) {
          _DAT_40023824 = _DAT_40023824 & 0xffffffef;
          _DAT_40023844 = _DAT_40023844 | 0x10;
          *(undefined *)(param_1 + 0x11) = 0;
          *(undefined *)(param_1 + 0x17) = 0x25;
        }
        else if (iVar1 == 0x40004400) {
          _DAT_40023820 = _DAT_40023820 & 0xfffdffff;
          _DAT_40023840 = _DAT_40023840 | 0x20000;
          *(undefined *)(param_1 + 0x11) = 1;
          *(undefined *)(param_1 + 0x17) = 0x26;
        }
        else if (iVar1 == 0x40004800) {
          _DAT_40023820 = _DAT_40023820 & 0xfffbffff;
          _DAT_40023840 = _DAT_40023840 | 0x40000;
          *(undefined *)(param_1 + 0x11) = 2;
          *(undefined *)(param_1 + 0x17) = 0x27;
        }
        else if (iVar1 == 0x40004c00) {
          _DAT_40023820 = _DAT_40023820 & 0xfff7ffff;
          _DAT_40023840 = _DAT_40023840 | 0x80000;
          *(undefined *)(param_1 + 0x11) = 3;
          *(undefined *)(param_1 + 0x17) = 0x34;
        }
        else if (iVar1 == 0x40005000) {
          _DAT_40023820 = _DAT_40023820 & 0xffefffff;
          _DAT_40023840 = _DAT_40023840 | 0x100000;
          *(undefined *)(param_1 + 0x11) = 4;
          *(undefined *)(param_1 + 0x17) = 0x35;
        }
        else if (iVar1 == 0x40011400) {
          _DAT_40023824 = _DAT_40023824 & 0xffffffdf;
          _DAT_40023844 = _DAT_40023844 | 0x20;
          *(undefined *)(param_1 + 0x11) = 5;
          *(undefined *)(param_1 + 0x17) = 0x47;
        }
        else if (iVar1 == 0x40007800) {
          _DAT_40023820 = _DAT_40023820 & 0xbfffffff;
          _DAT_40023840 = _DAT_40023840 | 0x40000000;
          *(undefined *)(param_1 + 0x11) = 6;
          *(undefined *)(param_1 + 0x17) = 0x52;
        }
        else if (iVar1 == 0x40007c00) {
          _DAT_40023820 = _DAT_40023820 & 0x7fffffff;
          _DAT_40023840 = _DAT_40023840 | 0x80000000;
          *(undefined *)(param_1 + 0x11) = 7;
          *(undefined *)(param_1 + 0x17) = 0x53;
        }
        uVar3 = FUN_080031fc((uint)((int)*(short *)((int)param_1 + 0x5a) << 0x18) >> 0x1c);
        uVar4 = FUN_0800354a((int)*(short *)((int)param_1 + 0x5a),&DAT_08005c10);
        local_2c = 1 << (*(ushort *)((int)param_1 + 0x5a) & 0xf) & 0xffff;
        local_28 = (uVar4 >> 3 & 1) << 4 | uVar4 & 7;
        local_24 = (uVar4 << 0x1a) >> 0x1e;
        local_1c = (uVar4 << 0x11) >> 0x19;
        local_20 = 3;
        FUN_08000fb4(uVar3,&local_2c);
        uVar3 = FUN_080031fc((uint)((int)*(short *)(param_1 + 0x16) << 0x18) >> 0x1c);
        uVar4 = FUN_0800354a((int)*(short *)(param_1 + 0x16),&DAT_08005ca0);
        local_2c = 1 << (*(ushort *)(param_1 + 0x16) & 0xf) & 0xffff;
        local_28 = (uVar4 >> 3 & 1) << 4 | uVar4 & 7;
        local_24 = (uVar4 << 0x1a) >> 0x1e;
        FUN_08000fb4(uVar3,&local_2c);
        (&DAT_200002b4)[*(byte *)(param_1 + 0x11)] = param_1 + 1;
        param_1[1] = *param_1;
        param_1[2] = param_1[0x12];
        param_1[3] = param_1[0x13];
        param_1[4] = param_1[0x14];
        param_1[5] = param_1[0x15];
        param_1[6] = 0xc;
        param_1[7] = 0;
        param_1[8] = 0;
        FUN_08002d72(param_1 + 1);
      }
    }
    return;
  }
  return;
}


////>>0x08003cc8>>FUN_08003cc8>>////

void FUN_08003cc8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_080034f4(0x38,&DAT_08005ca0);
  if (iVar1 != 0) {
    uVar2 = FUN_080034f4(0x38,&DAT_08005ca0);
    DAT_2000008a = FUN_0800351e(uVar2,&DAT_08005c10);
    DAT_20000088 = 0x38;
    DAT_20000078 = 0x2580;
    DAT_20000084 = 0;
    DAT_2000007c = 0;
    DAT_20000080 = 0;
    FUN_08003978(&DAT_20000030);
  }
  return;
}


////>>0x08003d18>>FUN_08003d18>>////

uint FUN_08003d18(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_08000e30();
  iVar2 = FUN_080034f4(0x38,&DAT_08005ca0);
  if (iVar2 == 0) {
    return 0;
  }
  for (uVar3 = 0;
      (uVar3 < 10 &&
      (((&DAT_200002b4)[uVar3] == 0 ||
       (iVar2 = FUN_080034f4(0x38,&DAT_08005ca0), *(int *)(&DAT_200002b4)[uVar3] != iVar2))));
      uVar3 = uVar3 + 1 & 0xff) {
  }
  if (9 < uVar3) {
    if ((9 < DAT_20000074) && (FUN_08003cc8(), 9 < DAT_20000074)) {
      return 0;
    }
    uVar3 = (uint)DAT_20000074;
  }
  do {
    iVar2 = FUN_08002dd0((&DAT_200002b4)[uVar3],param_1,param_2 & 0xffff,1000);
    if (iVar2 == 0) {
      return param_2;
    }
    iVar2 = FUN_08000e30();
  } while ((uint)(iVar2 - iVar1) < 1000);
  return 0;
}


////>>0x08003dd0>>FUN_08003dd0>>////

bool FUN_08003dd0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0800312c((&DAT_200002b4)[*(byte *)(param_1 + 0x44)]);
  return (uVar1 & 0x22) == 0x22;
}


////>>0x08003df4>>FUN_08003df4>>////

bool FUN_08003df4(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0800312c((&DAT_200002b4)[*(byte *)(param_1 + 0x44)]);
  return (uVar1 & 0x21) == 0x21;
}


////>>0x08003e18>>FUN_08003e18>>////

undefined4 FUN_08003e18(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_08003dd0();
  if (iVar1 == 0) {
    *param_2 = *(undefined *)(param_1 + 0x45);
    FUN_08002efa((&DAT_200002b4)[*(byte *)(param_1 + 0x44)],param_1 + 0x45,1,&DAT_200002b4,param_4);
    return 0;
  }
  return 0xffffffff;
}


////>>0x08003e54>>FUN_08003e54>>////

void FUN_08003e54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_08003dd0();
    if (iVar1 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + 0x44);
      *(undefined4 *)(&DAT_20000214 + uVar2 * 4) = param_2;
      *(int *)(&DAT_2000023c + uVar2 * 4) = param_1;
      FUN_08000e60((int)*(char *)(param_1 + 0x5c),0,1,uVar2,param_4);
      FUN_08000ec4((int)*(char *)(param_1 + 0x5c));
      FUN_08002efa((&DAT_200002b4)[*(byte *)(param_1 + 0x44)],param_1 + 0x45,1);
    }
    return;
  }
  return;
}


////>>0x08003eac>>FUN_08003eac>>////

void FUN_08003eac(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_1 + 0x44);
    *(undefined4 *)(&DAT_20000264 + (uint)bVar1 * 4) = param_2;
    *(int *)(&DAT_2000028c + (uint)bVar1 * 4) = param_1;
    FUN_08000e60((int)*(char *)(param_1 + 0x5c),0,2);
    FUN_08000ec4((int)*(char *)(param_1 + 0x5c));
    FUN_08002eb2((&DAT_200002b4)[*(byte *)(param_1 + 0x44)],
                 *(int *)(param_1 + 0x68) + (uint)*(ushort *)(param_1 + 0x6e),1);
    return;
  }
  return;
}


////>>0x08003f00>>FUN_08003f00>>////

uint FUN_08003f00(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 10;
  }
  else {
    uVar1 = 0;
    while( true ) {
      if (9 < uVar1) {
        return uVar1;
      }
      if (param_1 == (&DAT_200002b4)[uVar1]) break;
      uVar1 = uVar1 + 1 & 0xff;
    }
  }
  return uVar1;
}


////>>0x08003f24>>FUN_08003f24>>////

void FUN_08003f24(void)

{
  uint uVar1;
  
  uVar1 = FUN_08003f00();
  if (uVar1 < 10) {
    (**(code **)(&DAT_20000214 + uVar1 * 4))(*(undefined4 *)(&DAT_2000023c + uVar1 * 4));
  }
  return;
}


////>>0x08003f48>>FUN_08003f48>>////

void FUN_08003f48(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_08003f00();
  iVar3 = *(int *)(&DAT_2000028c + uVar1 * 4);
  if ((uVar1 < 10) && (iVar2 = (**(code **)(&DAT_20000264 + uVar1 * 4))(iVar3), iVar2 != -1)) {
    FUN_08002eb2((&DAT_200002b4)[*(byte *)(iVar3 + 0x44)],
                 *(int *)(iVar3 + 0x68) + (uint)*(ushort *)(iVar3 + 0x6e),1);
  }
  return;
}


////>>0x08003f94>>FUN_08003f94>>////

void FUN_08003f94(void)

{
  return;
}


////>>0x08004094>>FUN_08004094>>////

undefined * FUN_08004094(int param_1)

{
  undefined *puVar1;
  
  if (DAT_200002dc == (undefined *)0x0) {
    DAT_200002dc = &DAT_20000678;
  }
  puVar1 = DAT_200002dc;
  if (DAT_200002dc + param_1 <= &stack0x00000000) {
    DAT_200002dc = DAT_200002dc + param_1;
    return puVar1;
  }
  DAT_20000674 = 0xc;
  return (undefined *)0xffffffff;
}


////>>0x080040d0>>FUN_080040d0>>////

undefined4 FUN_080040d0(void)

{
  return 0xffffffff;
}


////>>0x080040d6>>FUN_080040d6>>////

undefined4 FUN_080040d6(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


////>>0x080040e0>>FUN_080040e0>>////

undefined4 FUN_080040e0(void)

{
  return 1;
}


////>>0x080040e4>>FUN_080040e4>>////

undefined4 FUN_080040e4(void)

{
  return 0;
}


////>>0x080040e8>>FUN_080040e8>>////

undefined4 FUN_080040e8(void)

{
  return 0;
}


////>>0x080040ec>>FUN_080040ec>>////

void FUN_080040ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08003d18(param_2,param_3,param_3,param_4,param_4);
  return;
}


////>>0x080040f8>>FUN_080040f8>>////

void FUN_080040f8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080040fc>>FUN_080040fc>>////

undefined4 FUN_080040fc(void)

{
  DAT_20000674 = 0x16;
  return 0xffffffff;
}


////>>0x0800410c>>FUN_0800410c>>////

undefined4 FUN_0800410c(void)

{
  return 1;
}


////>>0x08004110>>FUN_08004110>>////

void FUN_08004110(uint param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  if (param_1 < 0x60) {
    iVar3 = (int)*(short *)(&DAT_08005d3c + param_1 * 2);
    puVar2 = &DAT_08005d3c;
  }
  else {
    iVar3 = -1;
    puVar2 = param_4;
  }
  if (iVar3 != -1) {
    iVar1 = FUN_08003138(iVar3,&DAT_200002e0,param_3,puVar2,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_0800355e(iVar3,&DAT_08005a18);
      if (iVar1 == 0) {
        iVar1 = FUN_0800355e(iVar3,&DAT_08005a3c);
        if (iVar1 != 0) {
          FUN_08003414(iVar3);
        }
      }
      else {
        FUN_080033d8(iVar3);
      }
      FUN_0800316c(iVar3,&DAT_200002e0);
    }
    switch(param_2) {
    case 0:
      FUN_08003486(iVar3,0);
      break;
    case 1:
      FUN_08003486(iVar3,1,0);
      break;
    case 2:
      FUN_08003486(iVar3,0,1);
      break;
    case 3:
      FUN_08003486(iVar3,0,2);
    }
    FUN_0800314e(iVar3,&DAT_2000030c);
  }
  return;
}


////>>0x080041bc>>FUN_080041bc>>////

void FUN_080041bc(uint param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  
  if (param_1 < 0x60) {
    uVar4 = (uint)*(short *)(&DAT_08005d3c + param_1 * 2);
    puVar3 = &DAT_08005d3c;
  }
  else {
    uVar4 = 0xffffffff;
    puVar3 = param_4;
  }
  if ((uVar4 != 0xffffffff) &&
     (iVar1 = FUN_08003138(uVar4,&DAT_2000030c,param_3,puVar3,param_4), iVar1 != 0)) {
    uVar2 = FUN_0800318c((uVar4 << 0x18) >> 0x1c);
    FUN_080034b6(uVar2,1 << (uVar4 & 0xf) & 0xffff,param_2);
  }
  return;
}


////>>0x08004204>>FUN_08004204>>////

void FUN_08004204(void)

{
  FUN_0800346c();
  return;
}


////>>0x08004240>>FUN_08004240>>////

ushort FUN_08004240(int param_1)

{
  return (*(short *)(param_1 + 0x138) + 0x40) - *(short *)(param_1 + 0x13a) & 0x3f;
}


////>>0x080042ac>>FUN_080042ac>>////

void FUN_080042ac(int param_1)

{
  int iVar1;
  ushort uVar2;
  undefined local_9;
  
  iVar1 = FUN_08003e18(param_1,&local_9);
  if ((iVar1 == 0) &&
     (uVar2 = *(short *)(param_1 + 100) + 1U & 0x3f, uVar2 != *(ushort *)(param_1 + 0x66))) {
    *(undefined *)(*(int *)(param_1 + 0x60) + (uint)*(ushort *)(param_1 + 100)) = local_9;
    *(ushort *)(param_1 + 100) = uVar2;
  }
  return;
}


////>>0x080042e8>>FUN_080042e8>>////

undefined4 FUN_080042e8(int param_1,undefined param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  *(undefined *)(param_1 + 0x10) = 1;
  iVar3 = *(ushort *)(param_1 + 0x140) + 1;
  bVar1 = (byte)iVar3;
  bVar2 = bVar1 & 0x7f;
  if (iVar3 == 0) {
    bVar2 = -(-bVar1 & 0x7f);
  }
  do {
  } while (*(ushort *)(param_1 + 0x142) == (ushort)bVar2);
  *(undefined *)(*(int *)(param_1 + 0x13c) + (uint)*(ushort *)(param_1 + 0x140)) = param_2;
  *(ushort *)(param_1 + 0x140) = (ushort)bVar2;
  iVar3 = FUN_08003df4(param_1 + 0xd4);
  if (iVar3 == 0) {
    FUN_08003eac(param_1 + 0xd4,&LAB_0800420c_1);
  }
  return 1;
}


////>>0x08004338>>FUN_08004338>>////

/* WARNING: Removing unreachable block (ram,0x0800433e) */
/* WARNING: Removing unreachable block (ram,0x08004350) */
/* WARNING: Removing unreachable block (ram,0x08004346) */
/* WARNING: Removing unreachable block (ram,0x08004358) */

void FUN_08004338(void)

{
  return;
}


////>>0x08004364>>FUN_08004364>>////

void FUN_08004364(int param_1)

{
  *(int *)(param_1 + 0x134) = param_1 + 0x11;
  *(undefined2 *)(param_1 + 0x138) = 0;
  *(undefined2 *)(param_1 + 0x13a) = 0;
  *(int *)(param_1 + 0x13c) = param_1 + 0x51;
  *(undefined2 *)(param_1 + 0x140) = 0;
  *(undefined2 *)(param_1 + 0x142) = 0;
  return;
}


////>>0x08004388>>FUN_08004388>>////

void FUN_08004388(int param_1,undefined4 param_2,byte param_3)

{
  uint extraout_r1;
  byte bVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  *(byte *)(param_1 + 0x144) = param_3;
  bVar1 = param_3 & 7;
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
  if ((param_3 & 0x30) == 0x30) {
    *(undefined4 *)(param_1 + 0x128) = 0x600;
    iVar2 = iVar2 + 1;
  }
  else if ((param_3 & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0x400;
    iVar2 = iVar2 + 1;
  }
  if ((param_3 & 8) == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x124) = 0x2000;
  }
  if (iVar2 == 8) {
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  else if (iVar2 == 9) {
    *(undefined4 *)(param_1 + 0x120) = 0x1000;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    FUN_08003978(param_1 + 0xd4);
    FUN_08003e54(param_1 + 0xd4,0x80042ad);
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x8004432;
  FUN_08004808("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/cores/arduino/HardwareSerial.cpp"
               ,299,"void HardwareSerial::begin(long unsigned int, byte)");
  if (extraout_r1 < 0x60) {
    uRam0000012e = *(undefined2 *)(&DAT_08005d3c + extraout_r1 * 2);
  }
  else {
    uRam0000012e = 0xffff;
  }
                    /* WARNING: Could not recover jumptable at 0x08004452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08004444>>FUN_08004444>>////

void FUN_08004444(int param_1,uint param_2)

{
  undefined2 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 < 0x60) {
    uVar1 = *(undefined2 *)(&DAT_08005d3c + param_2 * 2);
  }
  else {
    uVar1 = 0xffff;
  }
  *(undefined2 *)(param_1 + 0x12e) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x08004452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08004460>>FUN_08004460>>////

void FUN_08004460(int param_1,uint param_2)

{
  undefined2 uVar1;
  
  if (param_2 < 0x60) {
    uVar1 = *(undefined2 *)(&DAT_08005d3c + param_2 * 2);
  }
  else {
    uVar1 = 0xffff;
  }
  *(undefined2 *)(param_1 + 300) = uVar1;
  return;
}


////>>0x0800447c>>FUN_0800447c>>////

undefined4 *
FUN_0800447c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 1000;
  *param_1 = &PTR_FUN_080042e8_1_08005ed4;
  if (param_1 == &DAT_20000338) {
    FUN_08004444(&DAT_20000338,0x4c,param_3,&DAT_20000338,param_4);
    FUN_08004460(&DAT_20000338,0x4d);
  }
  else {
    uVar1 = FUN_0800351e(param_2,&DAT_08005c10);
    *(undefined2 *)((int)param_1 + 0x12e) = uVar1;
    uVar1 = FUN_0800351e(param_2,&DAT_08005ca0);
    *(undefined2 *)(param_1 + 0x4b) = uVar1;
  }
  FUN_08004364(param_1);
  return param_1;
}


////>>0x080044d8>>FUN_080044d8>>////

void FUN_080044d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    FUN_0800447c(&DAT_20000338,0x40004800,param_3,0xffff,param_4);
  }
  return;
}


////>>0x08004544>>FUN_08004544>>////

void FUN_08004544(undefined4 *param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *param_1 = &DAT_08005f28;
  *(undefined *)(param_1 + 1) = param_2;
  *(undefined *)((int)param_1 + 5) = param_3;
  *(undefined *)((int)param_1 + 6) = param_4;
  *(undefined *)((int)param_1 + 7) = param_5;
  return;
}


////>>0x08004560>>FUN_08004560>>////

void FUN_08004560(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    FUN_08004544(&DAT_20000480,0,0,0,0);
    return;
  }
  return;
}


////>>0x08004640>>FUN_08004640>>////

uint FUN_08004640(int param_1,uint param_2)

{
  return param_2 | param_1 << 8;
}


////>>0x08004646>>FUN_08004646>>////

void FUN_08004646(void)

{
  return;
}


////>>0x08004648>>FUN_08004648>>////

void FUN_08004648(void)

{
  FUN_08000e3c(3);
  FUN_08000d8e();
  return;
}


////>>0x08004658>>FUN_08004658>>////

void FUN_08004658(void)

{
  FUN_08004646();
  FUN_08000c4c();
  do {
    FUN_08000c64();
    FUN_08004338();
  } while( true );
}


////>>0x08004678>>FUN_08004678>>////

char FUN_08004678(uint param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  for (; param_1 != 1; param_1 = param_1 >> 1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


////>>0x080046b4>>FUN_080046b4>>////

void FUN_080046b4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    DAT_20000488 = 6;
    DAT_20000494 = 0;
    DAT_2000049c = 7;
    DAT_200004a8 = 0;
    DAT_200004b0 = 8;
    DAT_200004bc = 0;
    DAT_200004c4 = 9;
    DAT_200004d0 = 0;
    DAT_200004d8 = 10;
    DAT_200004e4 = 0;
    DAT_200004ec = 0x17;
    DAT_200004f8 = 0;
    DAT_20000500 = 0x17;
    DAT_2000050c = 0;
    DAT_20000514 = 0x17;
    DAT_20000520 = 0;
    DAT_20000528 = 0x17;
    DAT_20000534 = 0;
    DAT_2000053c = 0x17;
    DAT_20000548 = 0;
    DAT_20000550 = 0x28;
    DAT_2000055c = 0;
    DAT_20000564 = 0x28;
    DAT_20000570 = 0;
    DAT_20000578 = 0x28;
    DAT_20000584 = 0;
    DAT_2000058c = 0x28;
    DAT_20000598 = 0;
    DAT_200005a0 = 0x28;
    DAT_200005ac = 0;
    DAT_200005b4 = 0x28;
    DAT_200005c0 = 0;
    FUN_080047fe(0,&LAB_0800468c_1,&DAT_20000000,&DAT_20000488,param_4);
  }
  return;
}


////>>0x080047c0>>FUN_080047c0>>////

void FUN_080047c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 0xc))();
    return;
  }
  FUN_08005760();
  iVar1 = FUN_08004678();
  if ((&DAT_20000494)[iVar1 * 5] != 0) {
    FUN_080047c0();
  }
  return;
}


////>>0x080047d0>>FUN_080047d0>>////

void FUN_080047d0(void)

{
  int iVar1;
  
  iVar1 = FUN_08004678();
  if ((&DAT_20000494)[iVar1 * 5] != 0) {
    FUN_080047c0();
  }
  return;
}


////>>0x080047fe>>FUN_080047fe>>////

void FUN_080047fe(undefined4 param_1,undefined4 param_2)

{
  FUN_08004844(param_2,param_1);
  return;
}


////>>0x08004808>>FUN_08004808>>////

void FUN_08004808(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(DAT_200000a0 + 0xc);
  uVar4 = param_4;
  if (param_3 == (char *)0x0) goto LAB_0800482c;
  pcVar2 = ", function: ";
  do {
    FUN_08004860(uVar1,"assertion \"%s\" failed: file \"%s\", line %d%s%s\n",param_4,param_1,param_2
                 ,pcVar2,param_3,uVar4);
    uVar3 = FUN_080051ac();
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = (undefined4)uVar3;
LAB_0800482c:
    param_3 = "";
    pcVar2 = param_3;
  } while( true );
}


////>>0x08004844>>FUN_08004844>>////

/* WARNING: Removing unreachable block (ram,0x0800484c) */

longlong FUN_08004844(undefined4 param_1,uint param_2)

{
  return (ulonglong)param_2 << 0x20;
}


////>>0x08004860>>FUN_08004860>>////

void FUN_08004860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_08004a84(DAT_200000a0,param_1,param_2,&uStack_8,param_1,&uStack_8);
  return;
}


////>>0x08004884>>FUN_08004884>>////

void FUN_08004884(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    (*(code *)(&DAT_08006008)[iVar1])();
  }
  FUN_080059f8();
  for (iVar1 = 0; iVar1 != 10; iVar1 = iVar1 + 1) {
    (*(code *)(&DAT_08006008)[iVar1])();
  }
  return;
}


////>>0x080048cc>>FUN_080048cc>>////

void FUN_080048cc(undefined *param_1,undefined param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


////>>0x080048dc>>FUN_080048dc>>////

void FUN_080048dc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0800557c();
  ppiVar3 = (int **)&DAT_200005c8;
  if (DAT_200005c8 == (int **)0x0) {
    ppiVar5[1] = (int *)0x0;
    ppiVar2 = extraout_r1;
    DAT_200005c8 = ppiVar5;
  }
  else {
    ppiVar3 = DAT_200005c8;
    if (ppiVar5 < DAT_200005c8) {
      ppiVar2 = (int **)*ppiVar5;
      ppiVar3 = (int **)((int)ppiVar5 + (int)ppiVar2);
      bVar6 = DAT_200005c8 == ppiVar3;
      if (bVar6) {
        ppiVar3 = (int **)*DAT_200005c8;
        DAT_200005c8 = (int **)DAT_200005c8[1];
      }
      ppiVar5[1] = (int *)DAT_200005c8;
      DAT_200005c8 = ppiVar5;
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
  FUN_0800557e(param_1,ppiVar2,ppiVar3,param_4);
  return;
}


////>>0x08004978>>FUN_08004978>>////

uint FUN_08004978(undefined4 *param_1,uint param_2)

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
    FUN_0800557c();
    puVar1 = DAT_200005c8;
    puVar5 = DAT_200005c8;
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
            puVar1 = DAT_200005c8;
          }
        }
        else {
          *puVar3 = uVar4;
          *(uint *)((int)puVar3 + uVar4) = uVar6;
          puVar5 = (uint *)((int)puVar3 + uVar4);
          puVar1 = DAT_200005c8;
        }
        goto LAB_080049dc;
      }
      puVar5 = puVar3;
      puVar1 = (uint *)puVar3[1];
    }
    if (DAT_200005cc == 0) {
      DAT_200005cc = FUN_0800500c(param_1);
    }
    puVar1 = (uint *)FUN_0800500c(param_1,uVar6);
    if ((puVar1 != (uint *)0xffffffff) &&
       ((puVar5 = (uint *)((int)puVar1 + 3U & 0xfffffffc), puVar1 == puVar5 ||
        (iVar2 = FUN_0800500c(param_1,(int)puVar5 - (int)puVar1), iVar2 != -1)))) {
      *puVar5 = uVar6;
      puVar1 = DAT_200005c8;
LAB_080049dc:
      DAT_200005c8 = puVar1;
      FUN_0800557e(param_1);
      uVar6 = (int)puVar5 + 0xbU & 0xfffffff8;
      iVar2 = uVar6 - (int)(puVar5 + 1);
      if (iVar2 != 0) {
        *(int *)((int)puVar5 + iVar2) = -iVar2;
        return uVar6;
      }
      return uVar6;
    }
    *param_1 = 0xc;
    FUN_0800557e(param_1);
  }
  return 0;
}


////>>0x08004a34>>FUN_08004a34>>////

uint FUN_08004a34(int param_1,byte param_2,byte **param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar2 = param_3[2] + -1;
  param_3[2] = pbVar2;
  if ((-1 < (int)pbVar2) ||
     (((int)param_3[6] <= (int)pbVar2 && (pbVar2 = (byte *)(uint)param_2, pbVar2 != (byte *)0xa))))
  {
    pbVar2 = *param_3;
    *param_3 = pbVar2 + 1;
    *pbVar2 = param_2;
    return (uint)param_2;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_080053a0();
  }
  if (param_3 == (byte **)&DAT_08005fc0) {
    param_3 = *(byte ***)(param_1 + 4);
  }
  else if (param_3 == (byte **)&DAT_08005fe0) {
    param_3 = *(byte ***)(param_1 + 8);
  }
  else if (param_3 == (byte **)&DAT_08005fa0) {
    param_3 = *(byte ***)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  pbVar3 = (byte *)(uint)*(ushort *)(param_3 + 3);
  iVar1 = (int)pbVar3 << 0x1c;
  if (((iVar1 < 0) && (pbVar3 = param_3[4], pbVar3 != (byte *)0x0)) ||
     (iVar1 = FUN_080050d0(param_1,param_3,iVar1,pbVar3,pbVar2), iVar1 == 0)) {
    iVar1 = (int)*param_3 - (int)param_3[4];
    uVar4 = (uint)param_2;
    if ((iVar1 < (int)param_3[5]) || (iVar1 = FUN_080052cc(param_1,param_3), iVar1 == 0)) {
      param_3[2] = param_3[2] + -1;
      pbVar2 = *param_3;
      *param_3 = pbVar2 + 1;
      *pbVar2 = param_2;
      if ((byte *)(iVar1 + 1) != param_3[5]) {
        if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x1f)) {
          return uVar4;
        }
        if (uVar4 != 10) {
          return uVar4;
        }
      }
      iVar1 = FUN_080052cc(param_1,param_3);
      if (iVar1 == 0) {
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}


////>>0x08004a60>>FUN_08004a60>>////

int FUN_08004a60(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

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
    iVar1 = FUN_08004a34(param_1,*param_3,param_2,param_4,iVar3);
    param_4 = iVar1 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return iVar1;
}


////>>0x08004a84>>FUN_08004a84>>////

/* WARNING: Removing unreachable block (ram,0x08004c58) */

int FUN_08004a84(int param_1,undefined4 *param_2,byte *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int unaff_r9;
  int iVar6;
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
    FUN_080053a0();
  }
  if (param_2 == &DAT_08005fc0) {
    param_2 = *(undefined4 **)(param_1 + 4);
  }
  else if (param_2 == (undefined4 *)&DAT_08005fe0) {
    param_2 = *(undefined4 **)(param_1 + 8);
  }
  else if (param_2 == (undefined4 *)&DAT_08005fa0) {
    param_2 = *(undefined4 **)(param_1 + 0xc);
  }
  if (((-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1c)) || (param_2[4] == 0)) &&
     (iVar6 = FUN_080050d0(param_1,param_2), iVar6 != 0)) {
    return -1;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar4 = param_3;
LAB_08004ac6:
  pbVar5 = pbVar4;
  if (*pbVar5 != 0) goto LAB_08004b7c;
  goto LAB_08004ad0;
LAB_08004b7c:
  pbVar4 = pbVar5 + 1;
  if (*pbVar5 != 0x25) goto LAB_08004ac6;
LAB_08004ad0:
  iVar6 = (int)pbVar5 - (int)param_3;
  if (iVar6 != 0) {
    iVar1 = FUN_08004a60(param_1,param_2,param_3,iVar6);
    if (iVar1 == -1) {
LAB_08004c70:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar6;
  }
  if (*pbVar5 == 0) goto LAB_08004c70;
  local_88 = 0;
  local_7c = 0;
  local_84 = -1;
  local_80 = 0;
  local_45 = 0;
  local_30 = 0;
  pbVar4 = pbVar5 + 1;
  while( true ) {
    iVar6 = FUN_08000230("#-0+ ",*pbVar4);
    param_3 = pbVar4 + 1;
    if (iVar6 == 0) break;
    local_88 = 1 << (iVar6 + 0xf7ffa094U & 0xff) | local_88;
    pbVar4 = param_3;
  }
  if ((int)(local_88 << 0x1b) < 0) {
    local_45 = 0x20;
  }
  if ((int)(local_88 << 0x1c) < 0) {
    local_45 = 0x2b;
  }
  if (*pbVar4 == 0x2a) {
    piVar2 = local_8c + 1;
    iVar6 = *local_8c;
    local_8c = piVar2;
    if (iVar6 < 0) {
      local_7c = -iVar6;
      local_88 = local_88 | 2;
      goto LAB_08004bae;
    }
  }
  else {
    bVar3 = false;
    iVar6 = local_7c;
    param_3 = pbVar4;
    while( true ) {
      if (9 < *param_3 - 0x30) break;
      iVar6 = iVar6 * 10 + (*param_3 - 0x30);
      bVar3 = true;
      param_3 = param_3 + 1;
    }
    if (!bVar3) goto LAB_08004bae;
  }
  local_7c = iVar6;
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
      bVar3 = false;
      local_84 = 0;
      iVar6 = 0;
      while( true ) {
        param_3 = param_3 + 1;
        if (9 < *param_3 - 0x30) break;
        iVar6 = iVar6 * 10 + (*param_3 - 0x30);
        bVar3 = true;
      }
      if (bVar3) {
        local_84 = iVar6;
      }
    }
  }
  iVar6 = FUN_08000230(&DAT_08005f72,*param_3,3);
  if (iVar6 != 0) {
    local_88 = local_88 | 0x40 << (iVar6 + 0xf7ffa08eU & 0xff);
    param_3 = param_3 + 1;
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  iVar6 = FUN_08000230("efgEFG",local_70,6);
  if (iVar6 == 0) {
    unaff_r9 = FUN_08004d9c(param_1,&local_88,param_2,0x8004a61,&local_8c);
    if (unaff_r9 == -1) goto LAB_08004c70;
  }
  else {
    local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
  }
  local_74 = local_74 + unaff_r9;
  pbVar4 = param_3;
  goto LAB_08004ac6;
}


////>>0x08004cb0>>FUN_08004cb0>>////

undefined4
FUN_08004cb0(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

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


////>>0x08004d9c>>FUN_08004d9c>>////

uint FUN_08004d9c(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint **ppuVar7;
  char **ppcVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  uint local_24 [2];
  
  bVar1 = *(byte *)(param_2 + 6);
  pcVar12 = (char *)((int)param_2 + 0x43);
  if (bVar1 != 0x6e) {
    if (bVar1 < 0x6f) {
      if (bVar1 != 99) {
        if (bVar1 < 100) {
          if (bVar1 == 0) goto LAB_08004f56;
          if (bVar1 != 0x58) goto LAB_08004dcc;
          *(undefined *)((int)param_2 + 0x45) = 0x58;
          pcVar5 = "0123456789ABCDEF";
LAB_08004ee6:
          uVar6 = *param_2;
          puVar3 = *param_5;
          *param_5 = puVar3 + 1;
          if (((uVar6 & 0x80) == 0) && ((int)(uVar6 << 0x19) < 0)) {
            uVar9 = (uint)*(ushort *)puVar3;
          }
          else {
            uVar9 = *puVar3;
          }
          if ((int)(uVar6 << 0x1f) < 0) {
            *param_2 = uVar6 | 0x20;
          }
          if (uVar9 == 0) {
            *param_2 = *param_2 & 0xffffffdf;
          }
          uVar6 = 0x10;
LAB_08004e7c:
          *(undefined *)((int)param_2 + 0x43) = 0;
        }
        else {
          if ((bVar1 != 100) && (bVar1 != 0x69)) goto LAB_08004dcc;
          uVar9 = *param_2;
          puVar3 = *param_5;
          if ((uVar9 & 0x80) == 0) {
            *param_5 = puVar3 + 1;
            if ((uVar9 & 0x40) == 0) goto LAB_08004dec;
            uVar9 = (uint)(short)*(ushort *)puVar3;
          }
          else {
            *param_5 = puVar3 + 1;
LAB_08004dec:
            uVar9 = *puVar3;
          }
          if ((int)uVar9 < 0) {
            uVar9 = -uVar9;
            *(undefined *)((int)param_2 + 0x43) = 0x2d;
          }
          pcVar5 = "0123456789ABCDEF";
          uVar6 = 10;
        }
        uVar10 = param_2[1];
        param_2[2] = uVar10;
        pcVar11 = pcVar12;
        if ((int)uVar10 < 0) {
          if (uVar9 != 0) goto LAB_08004f1a;
LAB_08004fc8:
          *(char *)((int)param_2 + 0x42) = *pcVar5;
          pcVar11 = (char *)((int)param_2 + 0x42);
        }
        else {
          *param_2 = *param_2 & 0xfffffffb;
          if (uVar9 == 0) {
            if (uVar10 != 0) goto LAB_08004fc8;
          }
          else {
LAB_08004f1a:
            do {
              uVar10 = uVar9 / uVar6;
              pcVar11 = pcVar11 + -1;
              *pcVar11 = pcVar5[uVar9 - uVar6 * uVar10];
              uVar9 = uVar10;
            } while (uVar10 != 0);
          }
        }
        if (((uVar6 == 8) && ((int)(*param_2 << 0x1f) < 0)) && ((int)param_2[1] <= (int)param_2[4]))
        {
          pcVar11[-1] = '0';
          pcVar11 = pcVar11 + -1;
        }
        param_2[4] = (int)pcVar12 - (int)pcVar11;
        pcVar12 = pcVar11;
        goto LAB_08004ec2;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      *(char *)((int)param_2 + 0x42) = (char)*puVar3;
LAB_08004e2c:
      pcVar12 = (char *)((int)param_2 + 0x42);
      uVar9 = 1;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 < 0x74) {
          if (bVar1 == 0x6f) {
LAB_08004e52:
            uVar9 = *param_2;
            puVar3 = *param_5;
            if ((uVar9 & 0x80) == 0) {
              *param_5 = puVar3 + 1;
              if ((uVar9 & 0x40) == 0) goto LAB_08004e60;
              uVar9 = (uint)*(ushort *)puVar3;
            }
            else {
              *param_5 = puVar3 + 1;
LAB_08004e60:
              uVar9 = *puVar3;
            }
            pcVar5 = "0123456789ABCDEF";
            if (bVar1 == 0x6f) {
              uVar6 = 8;
            }
            else {
              uVar6 = 10;
            }
            goto LAB_08004e7c;
          }
          if (bVar1 == 0x70) {
            *param_2 = *param_2 | 0x20;
LAB_08004e12:
            *(undefined *)((int)param_2 + 0x45) = 0x78;
            pcVar5 = "0123456789abcdef";
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
      ppcVar8 = (char **)*param_5;
      *param_5 = (uint *)(ppcVar8 + 1);
      pcVar12 = *ppcVar8;
      iVar2 = FUN_08000230(pcVar12,0,param_2[1]);
      if (iVar2 != 0) {
        param_2[1] = iVar2 - (int)pcVar12;
      }
      uVar9 = param_2[1];
    }
    param_2[4] = uVar9;
    *(undefined *)((int)param_2 + 0x43) = 0;
    goto LAB_08004ec2;
  }
  uVar9 = *param_2;
  ppuVar7 = (uint **)*param_5;
  uVar6 = param_2[5];
  if ((uVar9 & 0x80) == 0) {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
    if ((uVar9 & 0x40) == 0) goto LAB_08004f42;
    *(short *)puVar3 = (short)uVar6;
  }
  else {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
LAB_08004f42:
    *puVar3 = uVar6;
  }
LAB_08004f56:
  param_2[4] = 0;
LAB_08004ec2:
  iVar2 = FUN_08004cb0(param_1,param_2,local_24,param_3,param_4);
  if ((iVar2 == -1) || (iVar2 = (*param_4)(param_1,param_3,pcVar12,param_2[4]), iVar2 == -1)) {
LAB_08004ed6:
    uVar9 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar2 = 0; iVar2 < (int)(param_2[3] - local_24[0]); iVar2 = iVar2 + 1) {
        iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar4 == -1) goto LAB_08004ed6;
      }
    }
    uVar9 = param_2[3];
    if ((int)param_2[3] < (int)local_24[0]) {
      uVar9 = local_24[0];
    }
  }
  return uVar9;
}


////>>0x08004fdc>>FUN_08004fdc>>////

void FUN_08004fdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_200000a0;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((DAT_200000a0 != 0) && (*(int *)(DAT_200000a0 + 0x18) == 0)) {
    FUN_080053a0(DAT_200000a0);
  }
  FUN_08004a84(iVar1,*(undefined4 *)(iVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}


////>>0x0800500c>>FUN_0800500c>>////

void FUN_0800500c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_20000674 = 0;
  iVar1 = FUN_08004094(param_2);
  if ((iVar1 == -1) && (DAT_20000674 != 0)) {
    *param_1 = DAT_20000674;
  }
  return;
}


////>>0x080050d0>>FUN_080050d0>>////

uint FUN_080050d0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  iVar1 = DAT_200000a0;
  if ((DAT_200000a0 != 0) && (*(int *)(DAT_200000a0 + 0x18) == 0)) {
    FUN_080053a0(DAT_200000a0);
  }
  if (param_2 == &DAT_08005fc0) {
    param_2 = *(undefined4 **)(iVar1 + 4);
  }
  else if (param_2 == (undefined4 *)&DAT_08005fe0) {
    param_2 = *(undefined4 **)(iVar1 + 8);
  }
  else if (param_2 == (undefined4 *)&DAT_08005fa0) {
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
          FUN_080048dc(param_1);
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
    FUN_080054fc(param_1,param_2);
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


////>>0x080051ac>>FUN_080051ac>>////

void FUN_080051ac(void)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar11;
  undefined8 uVar12;
  
  FUN_080055d0(6);
  UNRECOVERED_JUMPTABLE_00 = (code *)0x80051bb;
  uVar12 = FUN_080040f8(1);
  piVar3 = (int *)((ulonglong)uVar12 >> 0x20);
  puVar1 = (uint *)uVar12;
  uVar6 = *(ushort *)(piVar3 + 3);
  uVar5 = (uint)uVar6;
  if ((int)(uVar5 << 0x1c) < 0) {
    iVar2 = piVar3[4];
    if (iVar2 != 0) {
      iVar7 = uVar5 << 0x1e;
      bVar11 = iVar7 == 0;
      iVar9 = *piVar3;
      if (bVar11) {
        iVar7 = piVar3[5];
      }
      *piVar3 = iVar2;
      if (!bVar11) {
        iVar7 = 0;
      }
      piVar3[2] = iVar7;
      for (iVar9 = iVar9 - iVar2; 0 < iVar9; iVar9 = iVar9 - iVar7) {
        iVar7 = (*(code *)piVar3[10])(puVar1,piVar3[8],iVar2,iVar9);
        if (iVar7 < 1) {
          uVar6 = *(ushort *)(piVar3 + 3);
          goto LAB_080052b2;
        }
        iVar2 = iVar2 + iVar7;
      }
    }
  }
  else if (((0 < piVar3[1]) || (0 < piVar3[0x10])) &&
          (pcVar8 = (code *)piVar3[0xb], pcVar8 != (code *)0x0)) {
    uVar10 = *puVar1;
    *puVar1 = 0;
    if ((uVar6 & 0x1000) == 0) {
      iVar2 = (*pcVar8)(puVar1,piVar3[8],uVar5 & 0x1000,1);
      if ((iVar2 == -1) && (uVar5 = *puVar1, uVar5 != 0)) {
        if ((uVar5 != 0x1d) && (uVar5 != 0x16)) {
          *(ushort *)(piVar3 + 3) = *(ushort *)(piVar3 + 3) | 0x40;
                    /* WARNING: Could not recover jumptable at 0x0800527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        *puVar1 = uVar10;
        goto LAB_080051d6;
      }
    }
    else {
      iVar2 = piVar3[0x15];
    }
    if (((int)((uint)*(ushort *)(piVar3 + 3) << 0x1d) < 0) &&
       (iVar2 = iVar2 - piVar3[1], piVar3[0xd] != 0)) {
      iVar2 = iVar2 - piVar3[0x10];
    }
    iVar2 = (*(code *)piVar3[0xb])(puVar1,piVar3[8],iVar2,0);
    uVar6 = *(ushort *)(piVar3 + 3);
    if ((iVar2 == -1) &&
       ((0x1d < *puVar1 || (-1 < (int)((0x20400001U >> (*puVar1 & 0xff)) << 0x1f))))) {
LAB_080052b2:
      *(ushort *)(piVar3 + 3) = uVar6 | 0x40;
                    /* WARNING: Could not recover jumptable at 0x080052bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
      return;
    }
    piVar3[1] = 0;
    *piVar3 = piVar3[4];
    if (((int)((uint)uVar6 << 0x13) < 0) && ((iVar2 != -1 || (*puVar1 == 0)))) {
      piVar3[0x15] = iVar2;
    }
    piVar4 = (int *)piVar3[0xd];
    *puVar1 = uVar10;
    if (piVar4 != (int *)0x0) {
      if (piVar4 != piVar3 + 0x11) {
        FUN_080048dc(puVar1);
      }
      piVar3[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x08005252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
LAB_080051d6:
                    /* WARNING: Could not recover jumptable at 0x080051d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(0);
  return;
}


////>>0x080052cc>>FUN_080052cc>>////

undefined4 FUN_080052cc(uint *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar10;
  
  if (param_2[4] != 0) {
    if ((param_1 != (uint *)0x0) && (param_1[6] == 0)) {
      FUN_080053a0();
    }
    if (param_2 == &DAT_08005fc0) {
      param_2 = (int *)param_1[1];
    }
    else if (param_2 == (int *)&DAT_08005fe0) {
      param_2 = (int *)param_1[2];
    }
    else if (param_2 == (int *)&DAT_08005fa0) {
      param_2 = (int *)param_1[3];
    }
    if (*(short *)(param_2 + 3) != 0) {
      uVar5 = *(ushort *)(param_2 + 3);
      uVar4 = (uint)uVar5;
      if ((int)(uVar4 << 0x1c) < 0) {
        iVar2 = param_2[4];
        if (iVar2 != 0) {
          iVar6 = uVar4 << 0x1e;
          bVar10 = iVar6 == 0;
          iVar8 = *param_2;
          if (bVar10) {
            iVar6 = param_2[5];
          }
          *param_2 = iVar2;
          if (!bVar10) {
            iVar6 = 0;
          }
          param_2[2] = iVar6;
          for (iVar8 = iVar8 - iVar2; 0 < iVar8; iVar8 = iVar8 - iVar6) {
            iVar6 = (*(code *)param_2[10])(param_1,param_2[8],iVar2,iVar8,unaff_r4,unaff_r5);
            if (iVar6 < 1) {
              uVar5 = *(ushort *)(param_2 + 3);
              goto LAB_080052b2;
            }
            iVar2 = iVar2 + iVar6;
          }
        }
      }
      else if (((0 < param_2[1]) || (0 < param_2[0x10])) &&
              (pcVar7 = (code *)param_2[0xb], pcVar7 != (code *)0x0)) {
        uVar9 = *param_1;
        *param_1 = 0;
        if ((uVar5 & 0x1000) == 0) {
          iVar2 = (*pcVar7)(param_1,param_2[8],uVar4 & 0x1000,1);
          if ((iVar2 == -1) && (uVar4 = *param_1, uVar4 != 0)) {
            if ((uVar4 != 0x1d) && (uVar4 != 0x16)) {
              *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
                    /* WARNING: Could not recover jumptable at 0x0800527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
              return uVar1;
            }
            *param_1 = uVar9;
            goto LAB_080051d6;
          }
        }
        else {
          iVar2 = param_2[0x15];
        }
        if (((int)((uint)*(ushort *)(param_2 + 3) << 0x1d) < 0) &&
           (iVar2 = iVar2 - param_2[1], param_2[0xd] != 0)) {
          iVar2 = iVar2 - param_2[0x10];
        }
        iVar2 = (*(code *)param_2[0xb])(param_1,param_2[8],iVar2,0);
        uVar5 = *(ushort *)(param_2 + 3);
        if ((iVar2 == -1) &&
           ((0x1d < *param_1 || (-1 < (int)((0x20400001U >> (*param_1 & 0xff)) << 0x1f))))) {
LAB_080052b2:
          *(ushort *)(param_2 + 3) = uVar5 | 0x40;
                    /* WARNING: Could not recover jumptable at 0x080052bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
          return uVar1;
        }
        param_2[1] = 0;
        *param_2 = param_2[4];
        if (((int)((uint)uVar5 << 0x13) < 0) && ((iVar2 != -1 || (*param_1 == 0)))) {
          param_2[0x15] = iVar2;
        }
        piVar3 = (int *)param_2[0xd];
        *param_1 = uVar9;
        if (piVar3 != (int *)0x0) {
          if (piVar3 != param_2 + 0x11) {
            FUN_080048dc(param_1);
          }
          param_2[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x08005252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
          return uVar1;
        }
      }
LAB_080051d6:
                    /* WARNING: Could not recover jumptable at 0x080051d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE_00)(0);
      return uVar1;
    }
  }
  return 0;
}


////>>0x0800532c>>FUN_0800532c>>////

void FUN_0800532c(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

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
  FUN_080048cc(param_1 + 0x17,0,8);
  param_1[9] = 0x8005609;
  param_1[10] = 0x800562b;
  param_1[0xb] = 0x8005663;
  param_1[8] = param_1;
  param_1[0xc] = &LAB_08005686_1;
  return;
}


////>>0x08005374>>FUN_08005374>>////

undefined4 * FUN_08005374(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 + -1) * 0x68;
  puVar1 = (undefined4 *)FUN_08004978(param_1,iVar2 + 0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = puVar1 + 3;
    FUN_080048cc(puVar1 + 3,0,iVar2 + 0x68);
  }
  return puVar1;
}


////>>0x080053a0>>FUN_080053a0>>////

void FUN_080053a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1[6] == 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    puVar2 = &DAT_200000a4;
    param_1[10] = &LAB_08005320_1;
    if (param_1 == &DAT_200000a4) {
      puVar2 = (undefined4 *)0x1;
    }
    if (param_1 == &DAT_200000a4) {
      param_1[6] = puVar2;
    }
    uVar1 = FUN_08005400();
    param_1[1] = uVar1;
    uVar1 = FUN_08005400(param_1);
    param_1[2] = uVar1;
    uVar1 = FUN_08005400(param_1);
    param_1[3] = uVar1;
    FUN_0800532c(param_1[1],4,0);
    FUN_0800532c(param_1[2],9,1);
    FUN_0800532c(param_1[3],0x12,2);
    param_1[6] = 1;
  }
  return;
}


////>>0x08005400>>FUN_08005400>>////

int * FUN_08005400(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  
  if (DAT_200000bc == 0) {
    FUN_080053a0(&DAT_200000a4);
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
        FUN_080048cc(piVar2 + 0x17,0,8,1,param_4);
        piVar2[0xd] = 0;
        piVar2[0xe] = 0;
        piVar2[0x12] = 0;
        piVar2[0x13] = 0;
        return piVar2;
      }
      piVar2 = piVar2 + 0x1a;
    }
    if (*ppiVar3 == (int *)0x0) {
      piVar1 = (int *)FUN_08005374(param_1,4);
      *ppiVar3 = piVar1;
      if (piVar1 == (int *)0x0) {
        *param_1 = 0xc;
        return (int *)0x0;
      }
    }
    ppiVar3 = (int **)*ppiVar3;
  } while( true );
}


////>>0x080054b4>>FUN_080054b4>>////

undefined4 FUN_080054b4(undefined4 param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_4c [4];
  uint local_48;
  
  if ((*(short *)(param_2 + 0xe) < 0) ||
     (iVar1 = FUN_080056d4(param_1,(int)*(short *)(param_2 + 0xe),auStack_4c), iVar1 < 0)) {
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


////>>0x080054fc>>FUN_080054fc>>////

void FUN_080054fc(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int local_18;
  int *local_14;
  
  if (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1e)) {
    local_18 = param_1;
    local_14 = param_2;
    uVar1 = FUN_080054b4(param_1,param_2,&local_18,&local_14);
    iVar2 = FUN_08004978(param_1,local_18);
    if (iVar2 != 0) {
      *(undefined **)(param_1 + 0x28) = &LAB_08005320_1;
      *param_2 = iVar2;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x80;
      param_2[5] = local_18;
      param_2[4] = iVar2;
      if ((local_14 != (int *)0x0) &&
         (iVar2 = FUN_080056f8(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0)) {
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


////>>0x0800557c>>FUN_0800557c>>////

void FUN_0800557c(void)

{
  return;
}


////>>0x0800557e>>FUN_0800557e>>////

void FUN_0800557e(void)

{
  return;
}


////>>0x080055d0>>FUN_080055d0>>////

int FUN_080055d0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  undefined4 *puVar5;
  
  piVar1 = DAT_200000a0;
  puVar5 = &DAT_200000a0;
  if (0x1f < param_1) {
    *DAT_200000a0 = 0x16;
    return -1;
  }
  iVar3 = DAT_200000a0[0x11];
  if ((iVar3 != 0) && (pcVar4 = *(code **)(iVar3 + param_1 * 4), pcVar4 != (code *)0x0)) {
    if (pcVar4 != (code *)0x1) {
      if (pcVar4 == (code *)0xffffffff) {
        *DAT_200000a0 = 0x16;
        return 1;
      }
      *(undefined4 *)(iVar3 + param_1 * 4) = 0;
      (*pcVar4)(param_1);
    }
    return 0;
  }
  uVar2 = thunk_FUN_0800410c(DAT_200000a0);
  DAT_20000674 = 0;
  iVar3 = FUN_080040fc(uVar2,param_1,param_1,0,puVar5,unaff_r4,unaff_r5,in_lr);
  if ((iVar3 == -1) && (DAT_20000674 != 0)) {
    *piVar1 = DAT_20000674;
  }
  return iVar3;
}


////>>0x08005604>>thunk_FUN_0800410c>>////

undefined4 thunk_FUN_0800410c(void)

{
  return 1;
}


////>>0x08005608>>FUN_08005608>>////

void FUN_08005608(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_0800573c(param_1,(int)*(short *)(param_2 + 0xe));
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


////>>0x0800562a>>FUN_0800562a>>////

void FUN_0800562a(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    FUN_08005718(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  DAT_20000674 = 0;
  iVar1 = FUN_080040ec((int)*(short *)(param_2 + 0xe),param_3,param_4,param_4,param_4,unaff_r4,
                       unaff_r5,in_lr);
  if ((iVar1 == -1) && (DAT_20000674 != 0)) {
    *param_1 = DAT_20000674;
  }
  return;
}


////>>0x08005662>>FUN_08005662>>////

void FUN_08005662(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  
  iVar1 = FUN_08005718(param_1,(int)*(short *)(param_2 + 0xe));
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


////>>0x080056d4>>FUN_080056d4>>////

void FUN_080056d4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_20000674 = 0;
  iVar1 = FUN_080040d6(param_2,param_3,param_3,0,param_4);
  if ((iVar1 == -1) && (DAT_20000674 != 0)) {
    *param_1 = DAT_20000674;
  }
  return;
}


////>>0x080056f8>>FUN_080056f8>>////

void FUN_080056f8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_20000674 = 0;
  iVar1 = FUN_080040e0(param_2);
  if ((iVar1 == -1) && (DAT_20000674 != 0)) {
    *param_1 = DAT_20000674;
  }
  return;
}


////>>0x08005718>>FUN_08005718>>////

void FUN_08005718(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_20000674 = 0;
  iVar1 = FUN_080040e4(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (DAT_20000674 != 0)) {
    *param_1 = DAT_20000674;
  }
  return;
}


////>>0x0800573c>>FUN_0800573c>>////

void FUN_0800573c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_20000674 = 0;
  iVar1 = FUN_080040e8(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (DAT_20000674 != 0)) {
    *param_1 = DAT_20000674;
  }
  return;
}


////>>0x08005760>>FUN_08005760>>////

void FUN_08005760(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = FUN_08005760;
  FUN_080051ac();
  if (-1 < DAT_200005fc << 0x1f) {
    DAT_200005fc = 1;
  }
  if (-1 < DAT_200005f8 << 0x1f) {
    DAT_200005f8 = 1;
  }
  if (-1 < DAT_200005f4 << 0x1f) {
    DAT_200005f4 = 1;
  }
  if (-1 < DAT_200005f0 << 0x1f) {
    DAT_200005f0 = 1;
  }
  if (-1 < DAT_200005ec << 0x1f) {
    DAT_200005ec = 1;
  }
  if (-1 < DAT_200005e8 << 0x1f) {
    DAT_200005e8 = 1;
  }
  if (-1 < DAT_200005e4 << 0x1f) {
    DAT_200005e4 = 1;
  }
  if (-1 < DAT_200005e0 << 0x1f) {
    DAT_200005e0 = 1;
  }
  if (-1 < DAT_200005dc << 0x1f) {
    DAT_200005dc = 1;
  }
  if (-1 < DAT_200005d8 << 0x1f) {
    DAT_200005d8 = 1;
  }
  if (-1 < DAT_200005d4 << 0x1f) {
    DAT_200005d4 = 1;
  }
  if (-1 < DAT_200005d0 << 0x1f) {
    DAT_200005d0 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x080057f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x080059f8>>FUN_080059f8>>////

void FUN_080059f8(void)

{
  return;
}


////>>0x08005a04>>FUN_08005a04>>////

void FUN_08005a04(void)

{
  return;
}


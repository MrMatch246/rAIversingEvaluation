java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x0800010c>>FUN_0800010c>>////

/* WARNING: Removing unreachable block (ram,0x08000118) */

undefined4 FUN_0800010c(undefined4 param_1)

{
  if ((char)DAT_20000160 == '\0') {
    DAT_20000160._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x08000178>>FUN_08000178>>////

char * FUN_08000178(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return pcVar2 + (-1 - (int)param_1);
}


////>>0x08000190>>FUN_08000190>>////

ulonglong FUN_08000190(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_080003d4:
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
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_080003d4;
    }
LAB_080002a0:
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
  if ((uVar11 & 0x100000) != 0) goto LAB_080002a0;
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
      goto LAB_08000318;
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
LAB_08000318:
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


////>>0x08000194>>FUN_08000194>>////

ulonglong FUN_08000194(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_080003d4:
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
      if (0xffbfffff < uVar7 * 0x200000) goto LAB_080003d4;
    }
LAB_080002a0:
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
  if ((uVar10 & 0x100000) != 0) goto LAB_080002a0;
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
      goto LAB_08000318;
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
LAB_08000318:
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


////>>0x0800040c>>FUN_0800040c>>////

ulonglong FUN_0800040c(uint param_1)

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
      goto LAB_08000318;
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
LAB_08000318:
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


////>>0x0800042c>>FUN_0800042c>>////

ulonglong FUN_0800042c(uint param_1)

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
      goto LAB_08000318;
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
LAB_08000318:
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


////>>0x080004f8>>FUN_080004f8>>////

ulonglong FUN_080004f8(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar12 = FUN_080006d4();
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


////>>0x080006d4>>FUN_080006d4>>////

ulonglong FUN_080006d4(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x0800074c>>FUN_0800074c>>////

ulonglong FUN_0800074c(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar17 = FUN_080008ba();
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
        if ((uVar7 & 0x100000) != 0) goto LAB_0800086a;
        uVar7 = uVar7 | uVar11;
        uVar11 = 0;
        uVar3 = 0x80000000;
      }
    }
    if ((uVar7 & 0x100000) == 0) {
      uVar7 = uVar7 | uVar11;
      uVar11 = 0;
    }
LAB_0800086a:
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


////>>0x080008ba>>FUN_080008ba>>////

ulonglong FUN_080008ba(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_0800072c:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar2 == in_r12) {
      param_1 = param_3;
      uVar3 = param_4;
      if ((param_3 | param_4 << 0xc) == 0) {
LAB_080006f0:
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
      if ((param_1 | param_2 << 1) != 0) goto LAB_0800072c;
      if ((param_3 | param_4 << 1) != 0) goto LAB_080006f0;
    }
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}


////>>0x0800092c>>FUN_0800092c>>////

uint FUN_0800092c(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x080009a8>>FUN_080009a8>>////

void FUN_080009a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_080009b8(param_3,param_4,param_1,param_2);
  return;
}


////>>0x080009b8>>FUN_080009b8>>////

undefined4 FUN_080009b8(undefined4 param_1)

{
  FUN_0800092c();
  return param_1;
}


////>>0x080009c8>>FUN_080009c8>>////

bool FUN_080009c8(void)

{
  char in_ZR;
  
  FUN_080009b8();
  return in_ZR != '\0';
}


////>>0x080009dc>>FUN_080009dc>>////

bool FUN_080009dc(void)

{
  char in_CY;
  
  FUN_080009b8();
  return in_CY == '\0';
}


////>>0x080009f0>>FUN_080009f0>>////

bool FUN_080009f0(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_080009b8();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08000a04>>FUN_08000a04>>////

bool FUN_08000a04(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_080009a8();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08000a18>>FUN_08000a18>>////

bool FUN_08000a18(void)

{
  char in_CY;
  
  FUN_080009a8();
  return in_CY == '\0';
}


////>>0x08000a2c>>FUN_08000a2c>>////

undefined4 FUN_08000a2c(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((((param_2 << 1) >> 0x15 != -1) || ((param_1 | param_2 << 0xc) == 0)) &&
     (((param_4 << 1) >> 0x15 != -1 || ((param_3 | param_4 << 0xc) == 0)))) {
    return 0;
  }
  return 1;
}


////>>0x08000a58>>FUN_08000a58>>////

uint FUN_08000a58(uint param_1,uint param_2)

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


////>>0x08000aa8>>FUN_08000aa8>>////

uint FUN_08000aa8(uint param_1,uint param_2)

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


////>>0x08000ae8>>FUN_08000ae8>>////

void FUN_08000ae8(void)

{
  software_interrupt(0x3f);
  return;
}


////>>0x08000aec>>FUN_08000aec>>////

undefined4 FUN_08000aec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_2000017c != 0) {
    return 0;
  }
  uVar1 = FUN_08000ae8(1,param_1,0,0,param_4);
  return uVar1;
}


////>>0x08000b08>>FUN_08000b08>>////

void FUN_08000b08(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    FUN_08001b18(&DAT_200001c0,&DAT_20000188,&DAT_200001b8,&DAT_20000240,DAT_20000020,DAT_20000024,
                 DAT_20000018,DAT_2000001c,DAT_20000010,DAT_20000014,0);
    FUN_08001510(&DAT_20000194,DAT_2000005c,DAT_20000038,DAT_20000028,DAT_2000002c,DAT_20000030,
                 DAT_20000034);
    FUN_0800157c(&DAT_2000024c,DAT_20000074,DAT_20000070,DAT_2000006c);
    return;
  }
  return;
}


////>>0x08000bcc>>FUN_08000bcc>>////

void FUN_08000bcc(void)

{
  FUN_08005848(DAT_20000064,0);
  FUN_080057b4(DAT_20000064,1);
  FUN_08005848(DAT_20000004,0);
  FUN_080057b4(DAT_20000004,1);
  FUN_08005848(DAT_20000060,0);
  FUN_080057b4(DAT_20000060,1);
  FUN_08005848(DAT_20000004,1);
  FUN_080013a4(&DAT_20000194,8,2,0);
  FUN_08001550(&DAT_20000194,0,&DAT_20000008);
  FUN_0800135a(&DAT_20000194);
  FUN_08005c96(&DAT_20000194,"Reflow");
  FUN_08001366(&DAT_20000194,0,1);
  FUN_08005c96(&DAT_20000194,"Oven 1.2");
  FUN_08005848(DAT_20000004,0);
  FUN_080058e8(0x9c4);
  FUN_0800135a(&DAT_20000194);
  FUN_08005a68(&DAT_2000036c,0xe100,6);
  FUN_08005848(DAT_20000060,1);
  DAT_20000258 = 2000;
  DAT_200001b0 = FUN_080058e0();
  DAT_200001b4 = FUN_080058e0();
  FUN_08000aec(0);
  return;
}


////>>0x08000cd0>>FUN_08000cd0>>////

void FUN_08000cd0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined8 uVar5;
  
  uVar1 = FUN_080058e0();
  if (DAT_200001b4 < uVar1) {
    DAT_200001b4 = DAT_200001b4 + 1000;
    uVar5 = FUN_080015f8(&DAT_2000024c,0);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    DAT_20000188 = uVar2;
    DAT_2000018c = uVar4;
    iVar3 = FUN_080009c8(uVar2,uVar4,0,0x40c38800);
    if (((iVar3 != 0) || (iVar3 = FUN_080009c8(uVar2,uVar4,0,0x40c38880), iVar3 != 0)) ||
       (iVar3 = FUN_080009c8(uVar2,uVar4,0,0x40c38900), iVar3 != 0)) {
      DAT_20000238 = 7;
      DAT_20000239 = '\0';
    }
  }
  uVar1 = FUN_080058e0();
  uVar2 = DAT_20000060;
  if (DAT_200001b0 < uVar1) {
    DAT_200001b0 = DAT_200001b0 + 1000;
    if (DAT_20000239 == '\x01') {
      iVar3 = FUN_08005890(DAT_20000060);
      FUN_08005848(uVar2,iVar3 == 0);
      DAT_20000250 = DAT_20000250 + 1;
      FUN_08005d82(&DAT_2000036c,DAT_20000250,10);
      FUN_08005c96(&DAT_2000036c,&DAT_08007368);
      FUN_08005f2c(&DAT_2000036c,extraout_r1,DAT_20000240,DAT_20000244,2);
      FUN_08005c96(&DAT_2000036c,&DAT_08007368);
      FUN_08005f2c(&DAT_2000036c,extraout_r1_00,DAT_20000188,DAT_2000018c,2);
      FUN_08005c96(&DAT_2000036c,&DAT_08007368);
      FUN_08005f40(&DAT_2000036c,extraout_r1_01,DAT_200001b8,DAT_200001bc,2);
    }
    else {
      FUN_08005848(DAT_20000060,1);
    }
    FUN_0800135a(&DAT_20000194);
    FUN_08005c96(&DAT_20000194,(&PTR_s_Ready_2000003c)[DAT_20000238]);
    FUN_08001366(&DAT_20000194,0,1);
    if (DAT_20000238 == 7) {
      FUN_08005c96(&DAT_20000194,"TC Error!");
    }
    else {
      FUN_08005f2c(&DAT_20000194,2,DAT_20000188,DAT_2000018c,2);
      FUN_0800134e(&DAT_20000194,0);
      FUN_08005c96(&DAT_20000194,&DAT_08007378);
    }
  }
  uVar4 = DAT_2000018c;
  uVar2 = DAT_20000188;
  switch(DAT_20000238) {
  case 0:
    iVar3 = FUN_08000a04(DAT_20000188,DAT_2000018c,0,0x40490000);
    if (iVar3 == 0) {
      if (DAT_20000248 == '\x01') {
        FUN_08005cd4(&DAT_2000036c,"Time Setpoint Input Output");
        DAT_20000250 = 0;
        DAT_2000025c = FUN_080058e0();
        DAT_20000240 = 0;
        DAT_20000244 = 0x4062c000;
        uVar5 = FUN_0800042c(DAT_20000258);
        FUN_08001960(&DAT_200001c0,(int)((ulonglong)uVar5 >> 0x20),0,0,uVar5);
        FUN_08001918(&DAT_200001c0,1000);
        FUN_08001a44(&DAT_200001c0,1);
        DAT_20000238 = 1;
      }
    }
    else {
      DAT_20000238 = 6;
    }
    break;
  case 1:
    DAT_20000239 = '\x01';
    iVar3 = FUN_08000a04(DAT_20000188,DAT_2000018c,0,0x4062c000);
    if (iVar3 != 0) {
      uVar5 = FUN_080058e0();
      DAT_20000254 = (int)uVar5 + 9000;
      FUN_080018f8(&DAT_200001c0,(int)((ulonglong)uVar5 >> 0x20),0,0x4072c000,0x9999999a,0x3fa99999,
                   0,0x406f4000);
      DAT_20000240 = 0;
      DAT_20000244 = 0x40636000;
      DAT_20000238 = 2;
    }
    break;
  case 2:
    uVar1 = FUN_080058e0();
    if (DAT_20000254 < uVar1) {
      iVar3 = FUN_080058e0();
      DAT_20000254 = iVar3 + 9000;
      uVar5 = FUN_08000194(DAT_20000240,DAT_20000244,0,0x40140000);
      DAT_20000244 = (undefined4)((ulonglong)uVar5 >> 0x20);
      DAT_20000240 = (undefined4)uVar5;
      uVar5 = FUN_08000a18(DAT_20000240,DAT_20000244,0,0x40690000);
      if ((int)uVar5 != 0) {
        FUN_080018f8(&DAT_200001c0,(int)((ulonglong)uVar5 >> 0x20),0,0x4072c000,0x9999999a,
                     0x3fa99999,0,0x4075e000);
        DAT_20000240 = 0;
        DAT_20000244 = 0x406f4000;
        DAT_20000238 = 3;
      }
    }
    break;
  case 3:
    uVar5 = FUN_08000a04(DAT_20000188,DAT_2000018c,0,0x406ea000);
    if ((int)uVar5 != 0) {
      FUN_080018f8(&DAT_200001c0,(int)((ulonglong)uVar5 >> 0x20),0,0x4072c000,0x9999999a,0x3fa99999,
                   0,0x4075e000);
      DAT_20000240 = 0;
      DAT_20000244 = 0x40590000;
      DAT_20000238 = 4;
    }
    break;
  case 4:
    iVar3 = FUN_080009f0(DAT_20000188,DAT_2000018c,0,0x40590000);
    if (iVar3 != 0) {
      iVar3 = FUN_080058e0();
      DAT_20000180 = iVar3 + 1000;
      FUN_08005848(DAT_20000004,1);
      DAT_20000239 = '\0';
      DAT_20000238 = 5;
    }
    break;
  case 5:
    uVar1 = FUN_080058e0();
    if (DAT_20000180 < uVar1) {
      FUN_08005848(DAT_20000004,0);
      DAT_20000238 = 0;
    }
    break;
  case 6:
    iVar3 = FUN_080009dc(DAT_20000188,DAT_2000018c,0,0x40490000);
    if (iVar3 != 0) {
      DAT_20000238 = 0;
    }
    break;
  case 7:
    iVar3 = FUN_080009c8(DAT_20000188,DAT_2000018c,0,0x40c38800);
    if (((iVar3 == 0) && (iVar3 = FUN_080009c8(uVar2,uVar4,0,0x40c38880), iVar3 == 0)) &&
       (iVar3 = FUN_080009c8(uVar2,uVar4,0,0x40c38900), iVar3 == 0)) {
      DAT_20000238 = 0;
    }
    else {
      DAT_20000238 = 7;
    }
  }
  if ((DAT_20000248 == '\x01') && (DAT_20000239 == '\x01')) {
    DAT_20000239 = '\0';
    DAT_20000238 = 0;
  }
  if (DAT_20000184 == '\x01') {
    iVar3 = FUN_08005754(DAT_20000068);
    if (iVar3 == 0) {
      iVar3 = FUN_080058e0();
      if (0x32 < (uint)(iVar3 - DAT_20000190)) {
        DAT_20000184 = '\x02';
      }
    }
    else {
      DAT_20000184 = '\0';
    }
  }
  else if (DAT_20000184 == '\0') {
    DAT_20000248 = '\0';
    iVar3 = FUN_08005754(DAT_20000068);
    if (iVar3 == 0) {
      DAT_20000190 = FUN_080058e0();
      DAT_20000184 = '\x01';
    }
  }
  else if ((DAT_20000184 == '\x02') && (iVar3 = FUN_08005754(DAT_20000068), iVar3 != 0)) {
    DAT_20000248 = '\x01';
    DAT_20000184 = '\0';
  }
  if (DAT_20000239 == '\x01') {
    iVar3 = FUN_080058e0();
    FUN_080016b4(&DAT_200001c0);
    if (DAT_20000258 < (uint)(iVar3 - DAT_2000025c)) {
      DAT_2000025c = DAT_2000025c + DAT_20000258;
    }
    uVar5 = FUN_0800040c(iVar3 - DAT_2000025c);
    iVar3 = FUN_080009dc((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_200001b8,DAT_200001bc);
    if (iVar3 == 0) {
      FUN_08005848(DAT_20000064,0);
    }
    else {
      FUN_08005848(DAT_20000064,1);
    }
  }
  else {
    FUN_08005848(DAT_20000064,0);
  }
  return;
}


////>>0x08001294>>FUN_08001294>>////

void FUN_08001294(int param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *(undefined *)(param_1 + 0x18) = param_2;
  *(undefined *)(param_1 + 0x19) = param_3;
  *(undefined *)(param_1 + 0x1a) = param_4;
  *(undefined *)(param_1 + 0x1b) = param_5;
  return;
}


////>>0x080012a2>>FUN_080012a2>>////

void FUN_080012a2(int param_1)

{
  FUN_08005848(*(undefined *)(param_1 + 10),0);
  FUN_08005848(*(undefined *)(param_1 + 10),1);
  FUN_08005848(*(undefined *)(param_1 + 10),0);
  return;
}


////>>0x080012c0>>FUN_080012c0>>////

void FUN_080012c0(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < 4; uVar1 = uVar1 + 1) {
    FUN_08005848(*(undefined *)(param_1 + uVar1 + 0xb),param_2 >> (uVar1 & 0xff) & 1);
  }
  FUN_080012a2(param_1);
  return;
}


////>>0x080012e8>>FUN_080012e8>>////

void FUN_080012e8(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < 8; uVar1 = uVar1 + 1) {
    FUN_08005848(*(undefined *)(param_1 + uVar1 + 0xb),param_2 >> (uVar1 & 0xff) & 1);
  }
  FUN_080012a2(param_1);
  return;
}


////>>0x08001310>>FUN_08001310>>////

void FUN_08001310(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08005848(*(undefined *)(param_1 + 8),param_3,param_3,param_4,param_4);
  if (*(char *)(param_1 + 9) != -1) {
    FUN_08005848(*(char *)(param_1 + 9),0);
  }
  if ((*(byte *)(param_1 + 0x13) & 0x10) == 0) {
    FUN_080012c0(param_1,param_2 >> 4);
    FUN_080012c0(param_1,param_2);
    return;
  }
  FUN_080012e8(param_1,param_2);
  return;
}


////>>0x0800134e>>FUN_0800134e>>////

undefined4 FUN_0800134e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08001310(param_1,param_2,1,param_4,param_4);
  return 1;
}


////>>0x0800135a>>FUN_0800135a>>////

void FUN_0800135a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08001310(param_1,1,0,param_4,param_4);
  return;
}


////>>0x08001366>>FUN_08001366>>////

void FUN_08001366(int param_1,char param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  
  if (3 < param_3) {
    param_3 = 3;
  }
  if ((int)(uint)*(byte *)(param_1 + 0x17) <= (int)param_3) {
    param_3 = *(byte *)(param_1 + 0x17) - 1 & 0xff;
  }
  cVar1 = *(char *)(param_3 + param_1 + 0x18);
  FUN_08001310(param_1,param_2 + cVar1 | 0x80,0,cVar1,param_4);
  return;
}


////>>0x0800138e>>FUN_0800138e>>////

void FUN_0800138e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x14);
  *(byte *)(param_1 + 0x14) = bVar1 | 4;
  FUN_08001310(param_1,bVar1 | 0xc,0,param_4,param_4);
  return;
}


////>>0x080013a4>>FUN_080013a4>>////

void FUN_080013a4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (1 < param_3) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 8;
  }
  *(char *)(param_1 + 0x17) = (char)param_3;
  FUN_08001294(param_1,0,0x40,param_2,param_2 + 0x40);
  if ((param_4 != 0) && (param_3 == 1)) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 4;
  }
  FUN_080057b4(*(undefined *)(param_1 + 8),1);
  if (*(char *)(param_1 + 9) != -1) {
    FUN_080057b4(*(char *)(param_1 + 9),1);
  }
  FUN_080057b4(*(undefined *)(param_1 + 10),1);
  iVar2 = 0;
  while( true ) {
    if ((*(byte *)(param_1 + 0x13) & 0x10) == 0) {
      iVar1 = 4;
    }
    else {
      iVar1 = 8;
    }
    if (iVar1 <= iVar2) break;
    FUN_080057b4(*(undefined *)(param_1 + iVar2 + 0xb),1);
    iVar2 = iVar2 + 1;
  }
  FUN_08005848(*(undefined *)(param_1 + 8),0);
  FUN_08005848(*(undefined *)(param_1 + 10),0);
  if (*(char *)(param_1 + 9) != -1) {
    FUN_08005848(*(char *)(param_1 + 9),0);
  }
  if ((*(byte *)(param_1 + 0x13) & 0x10) == 0) {
    FUN_080012c0(param_1,3);
    FUN_080012c0(param_1,3);
    FUN_080012c0(param_1,3);
    FUN_080012c0(param_1,2);
  }
  else {
    FUN_08001310(param_1,*(byte *)(param_1 + 0x13) | 0x20,0);
    FUN_08001310(param_1,*(byte *)(param_1 + 0x13) | 0x20,0);
    FUN_08001310(param_1,*(byte *)(param_1 + 0x13) | 0x20,0);
  }
  FUN_08001310(param_1,*(byte *)(param_1 + 0x13) | 0x20,0);
  *(undefined *)(param_1 + 0x14) = 4;
  FUN_0800138e(param_1);
  FUN_0800135a(param_1);
  *(undefined *)(param_1 + 0x15) = 2;
  FUN_08001310(param_1,6,0);
  return;
}


////>>0x080014ba>>FUN_080014ba>>////

void FUN_080014ba(int param_1,int param_2,undefined param_3,undefined4 param_4,undefined param_5,
                 undefined param_6,undefined param_7,undefined param_8,undefined param_9,
                 undefined param_10,undefined param_11,undefined param_12,undefined param_13)

{
  *(undefined *)(param_1 + 8) = param_3;
  *(char *)(param_1 + 9) = (char)param_4;
  *(undefined *)(param_1 + 10) = param_5;
  *(undefined *)(param_1 + 0xb) = param_6;
  *(undefined *)(param_1 + 0xc) = param_7;
  *(undefined *)(param_1 + 0xd) = param_8;
  *(undefined *)(param_1 + 0xe) = param_9;
  *(undefined *)(param_1 + 0xf) = param_10;
  *(undefined *)(param_1 + 0x10) = param_11;
  *(undefined *)(param_1 + 0x11) = param_12;
  *(undefined *)(param_1 + 0x12) = param_13;
  if (param_2 == 0) {
    *(undefined *)(param_1 + 0x13) = 0x10;
  }
  else {
    *(undefined *)(param_1 + 0x13) = 0;
  }
  FUN_080013a4(param_1,0x10,1,0,param_4);
  return;
}


////>>0x08001510>>FUN_08001510>>////

undefined4 *
FUN_08001510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined param_5,undefined param_6,undefined param_7)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_0800134e_1_080073f8;
  FUN_080014ba(param_1,1,param_2,0xff,param_3,param_4,param_5,param_6,param_7,0,0,0,0);
  return param_1;
}


////>>0x08001550>>FUN_08001550>>////

void FUN_08001550(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  FUN_08001310(param_1,(param_2 & 7) << 3 | 0x40,0);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    (**(code **)*param_1)(param_1,*(undefined *)(param_3 + iVar1));
  }
  return;
}


////>>0x0800157c>>FUN_0800157c>>////

undefined * FUN_0800157c(undefined *param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  *param_1 = (char)param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_080057b4(param_2,0);
  FUN_080057b4(param_1[1],1);
  FUN_080057b4(param_1[2],1);
  FUN_08005848(param_1[1],1);
  FUN_08005848(param_1[2],0);
  return param_1;
}


////>>0x080015b2>>FUN_080015b2>>////

uint FUN_080015b2(undefined *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_08005848(param_1[1],0);
  uVar3 = 0;
  for (uVar2 = 0x1f; -1 < (int)uVar2; uVar2 = uVar2 - 1) {
    FUN_08005848(param_1[2],1);
    iVar1 = FUN_08005890(*param_1);
    if (iVar1 != 0) {
      uVar3 = uVar3 | 1 << (uVar2 & 0xff);
    }
    FUN_08005848(param_1[2],0);
  }
  FUN_08005848(param_1[1],1);
  return uVar3;
}


////>>0x080015f8>>FUN_080015f8>>////

undefined8 FUN_080015f8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_080015b2();
  if ((uVar1 & 0x10000) == 0) {
    uVar1 = uVar1 >> 0x12;
    uVar2 = FUN_0800040c(uVar1 & 0x1fff);
    if ((uVar1 & 0x2000) != 0) {
      uVar2 = FUN_0800040c(~uVar1 & 0x1fff);
      uVar2 = FUN_08000194((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x3ff00000,param_4);
      uVar2 = CONCAT44((int)((ulonglong)uVar2 >> 0x20) + -0x80000000,(int)uVar2);
    }
    uVar2 = FUN_080004f8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x3fd00000);
    if (param_2 == 1) {
      uVar2 = FUN_080004f8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x40220000);
      uVar2 = FUN_0800074c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x40140000);
      uVar2 = FUN_08000194((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x40400000);
      return uVar2;
    }
  }
  else {
    uVar1 = uVar1 & 7;
    if (uVar1 == 2) {
      return 0x40c3888000000000;
    }
    if (uVar1 == 4) {
      return 0x40c3890000000000;
    }
    if (uVar1 != 1) {
      return 0;
    }
    uVar2 = 0x40c3880000000000;
  }
  return uVar2;
}


////>>0x080016b4>>FUN_080016b4>>////

char FUN_080016b4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_38;
  undefined4 uStack_34;
  
  cVar11 = *(char *)(param_1 + 0x70);
  if (cVar11 != '\0') {
    iVar2 = FUN_080058e0();
    if ((uint)(iVar2 - *(int *)(param_1 + 0x44)) < *(uint *)(param_1 + 0x58)) {
      cVar11 = '\0';
    }
    else {
      uVar5 = **(undefined4 **)(param_1 + 0x38);
      uVar8 = (*(undefined4 **)(param_1 + 0x38))[1];
      uVar15 = FUN_08000190(**(undefined4 **)(param_1 + 0x40),(*(undefined4 **)(param_1 + 0x40))[1])
      ;
      uVar14 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar16 = FUN_08000190(uVar5,uVar8,*(undefined4 *)(param_1 + 0x50),
                            *(undefined4 *)(param_1 + 0x54));
      uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
      uVar17 = FUN_080004f8((int)uVar15,uVar14,*(undefined4 *)(param_1 + 0x20),
                            *(undefined4 *)(param_1 + 0x24));
      uVar17 = FUN_08000194((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                            *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
      *(undefined8 *)(param_1 + 0x48) = uVar17;
      cVar1 = *(char *)(param_1 + 0x71);
      if (cVar1 == '\0') {
        uVar18 = FUN_080004f8((int)uVar16,uVar4,*(undefined4 *)(param_1 + 0x18),
                              *(undefined4 *)(param_1 + 0x1c));
        uVar17 = FUN_08000190((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                              (int)((ulonglong)uVar18 >> 0x20));
        *(undefined8 *)(param_1 + 0x48) = uVar17;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x48);
      uVar9 = *(undefined4 *)(param_1 + 0x4c);
      uVar12 = *(undefined4 *)(undefined8 *)(param_1 + 0x68);
      uVar13 = *(undefined4 *)(param_1 + 0x6c);
      uVar17 = *(undefined8 *)(param_1 + 0x68);
      iVar3 = FUN_08000a18(uVar6,uVar9,uVar12,uVar13);
      if (iVar3 == 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x60);
        uVar10 = *(undefined4 *)(param_1 + 100);
        iVar3 = FUN_080009dc(uVar6,uVar9);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x48) = uVar7;
          *(undefined4 *)(param_1 + 0x4c) = uVar10;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = uVar12;
        *(undefined4 *)(param_1 + 0x4c) = uVar13;
      }
      if (cVar1 == '\0') {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_080004f8((int)uVar15,uVar14,*(undefined4 *)(param_1 + 0x18),
                              *(undefined4 *)(param_1 + 0x1c));
      }
      uStack_34 = (undefined4)((ulonglong)uVar15 >> 0x20);
      local_38 = (undefined4)uVar15;
      uVar14 = *(undefined4 *)(param_1 + 0x48);
      uVar6 = *(undefined4 *)(param_1 + 0x4c);
      uVar15 = FUN_080004f8((int)uVar16,uVar4,*(undefined4 *)(param_1 + 0x28),
                            *(undefined4 *)(param_1 + 0x2c));
      uVar15 = FUN_08000190(uVar14,uVar6,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      uVar15 = FUN_08000194(local_38,uStack_34,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      uVar14 = (undefined4)((ulonglong)uVar15 >> 0x20);
      iVar3 = FUN_080009dc(uVar12,uVar13,(int)uVar15,uVar14);
      if (iVar3 == 0) {
        uVar17 = *(undefined8 *)(param_1 + 0x60);
        iVar3 = FUN_080009dc((int)uVar15,uVar14,*(undefined4 *)(undefined8 *)(param_1 + 0x60),
                             *(undefined4 *)(param_1 + 100));
        if (iVar3 == 0) {
          uVar17 = uVar15;
        }
      }
      **(undefined8 **)(param_1 + 0x3c) = uVar17;
      *(undefined4 *)(param_1 + 0x50) = uVar5;
      *(undefined4 *)(param_1 + 0x54) = uVar8;
      *(int *)(param_1 + 0x44) = iVar2;
    }
  }
  return cVar11;
}


////>>0x08001814>>FUN_08001814>>////

void FUN_08001814(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_080009dc(param_3,param_4,0,0);
  if (((iVar1 == 0) && (iVar1 = FUN_080009dc(param_5,param_6,0,0), iVar1 == 0)) &&
     (iVar1 = FUN_080009dc(param_7,param_8,0,0), iVar1 == 0)) {
    param_1[0xd] = param_9;
    bVar4 = param_9 != 1;
    if (bVar4) {
      param_9 = 0;
    }
    uVar3 = (undefined)param_9;
    if (!bVar4) {
      uVar3 = 1;
    }
    *(undefined *)((int)param_1 + 0x71) = uVar3;
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = param_5;
    param_1[3] = param_6;
    param_1[4] = param_7;
    param_1[5] = param_8;
    uVar5 = FUN_0800040c(param_1[0x16]);
    uVar5 = FUN_0800074c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x408f4000);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    param_1[6] = param_3;
    param_1[7] = param_4;
    uVar6 = FUN_080004f8(param_5,param_6,(int)uVar5,uVar2);
    *(undefined8 *)(param_1 + 8) = uVar6;
    uVar5 = FUN_0800074c(param_7,param_8,(int)uVar5,uVar2);
    *(undefined8 *)(param_1 + 10) = uVar5;
    if (param_1[0xc] == 1) {
      uVar7 = FUN_08000190(0,0,param_3,param_4);
      *(undefined8 *)(param_1 + 6) = uVar7;
      uVar6 = FUN_08000190(0,0,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      *(undefined8 *)(param_1 + 8) = uVar6;
      uVar5 = FUN_08000190(0,0,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      *(undefined8 *)(param_1 + 10) = uVar5;
    }
  }
  return;
}


////>>0x080018f8>>FUN_080018f8>>////

void FUN_080018f8(void)

{
  FUN_08001814();
  return;
}


////>>0x08001918>>FUN_08001918>>////

void FUN_08001918(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (0 < param_2) {
    uVar2 = FUN_0800042c(param_2);
    uVar3 = FUN_0800040c(*(undefined4 *)(param_1 + 0x58));
    uVar2 = FUN_0800074c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,
                         (int)((ulonglong)uVar3 >> 0x20),param_4);
    uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar3 = FUN_080004f8((int)uVar2,uVar1,*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x24));
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    uVar2 = FUN_0800074c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),(int)uVar2,
                         uVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(int *)(param_1 + 0x58) = param_2;
  }
  return;
}


////>>0x08001960>>FUN_08001960>>////

void FUN_08001960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_08000a04(param_3,param_4,param_5,param_6,param_4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x60) = param_3;
    *(undefined4 *)(param_1 + 100) = param_4;
    *(undefined4 *)(param_1 + 0x68) = param_5;
    *(undefined4 *)(param_1 + 0x6c) = param_6;
    if (*(char *)(param_1 + 0x70) != '\0') {
      puVar2 = *(undefined4 **)(param_1 + 0x3c);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      iVar1 = FUN_080009dc(param_5,param_6,uVar3,uVar5);
      if (iVar1 == 0) {
        iVar1 = FUN_08000a18(param_3,param_4,uVar3,uVar5);
        if (iVar1 != 0) {
          *puVar2 = param_3;
          puVar2[1] = param_4;
        }
      }
      else {
        *puVar2 = param_5;
        puVar2[1] = param_6;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x48);
      uVar5 = *(undefined4 *)(param_1 + 0x4c);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      uVar6 = *(undefined4 *)(param_1 + 0x6c);
      iVar1 = FUN_08000a18(uVar3,uVar5,uVar4,uVar6);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x48) = uVar4;
        *(undefined4 *)(param_1 + 0x4c) = uVar6;
        return;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x60);
      uVar6 = *(undefined4 *)(param_1 + 100);
      iVar1 = FUN_080009dc(uVar3,uVar5,uVar4,uVar6);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x48) = uVar4;
        *(undefined4 *)(param_1 + 0x4c) = uVar6;
      }
    }
  }
  return;
}


////>>0x080019f6>>FUN_080019f6>>////

void FUN_080019f6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = **(undefined4 **)(param_1 + 0x3c);
  uVar4 = (*(undefined4 **)(param_1 + 0x3c))[1];
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
  *(undefined4 *)(param_1 + 0x50) = **(undefined4 **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  uVar5 = *(undefined4 *)(param_1 + 0x6c);
  iVar1 = FUN_08000a18(uVar3,uVar4,uVar2,uVar5);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    uVar5 = *(undefined4 *)(param_1 + 100);
    iVar1 = FUN_080009dc(uVar3,uVar4,uVar2,uVar5);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      *(undefined4 *)(param_1 + 0x4c) = uVar5;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  return;
}


////>>0x08001a44>>FUN_08001a44>>////

void FUN_08001a44(int param_1,int param_2)

{
  undefined uVar1;
  
  if (param_2 == 1) {
    uVar1 = 1;
    if (*(char *)(param_1 + 0x70) == '\0') {
      FUN_080019f6();
    }
  }
  else {
    uVar1 = 0;
  }
  *(undefined *)(param_1 + 0x70) = uVar1;
  return;
}


////>>0x08001a66>>FUN_08001a66>>////

void FUN_08001a66(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x70) != '\0') && (*(int *)(param_1 + 0x30) != param_2)) {
    uVar1 = FUN_08000190(0,0,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_4
                        );
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = FUN_08000190(0,0,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = FUN_08000190(0,0,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  *(int *)(param_1 + 0x30) = param_2;
  return;
}


////>>0x08001ab0>>FUN_08001ab0>>////

int FUN_08001ab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 extraout_r1;
  
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(undefined *)(param_1 + 0x70) = 0;
  FUN_08001960(param_1,param_2,0,0,0,0x406fe000);
  *(undefined4 *)(param_1 + 0x58) = 100;
  FUN_08001a66(param_1,param_12);
  FUN_08001814(param_1,extraout_r1,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  iVar1 = FUN_080058e0();
  *(int *)(param_1 + 0x44) = iVar1 - *(int *)(param_1 + 0x58);
  return param_1;
}


////>>0x08001b18>>FUN_08001b18>>////

undefined4 FUN_08001b18(undefined4 param_1)

{
  FUN_08001ab0();
  return param_1;
}


////>>0x08001b48>>FUN_08001b48>>////

void FUN_08001b48(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_30[0] = 2;
  local_20 = 1;
  local_1c = 0x10;
  local_14 = 2;
  local_10 = 0;
  local_c = 0x380000;
  iVar1 = FUN_08003688(local_30);
  if (iVar1 != 0) {
    FUN_08004d40("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/variants/NUCLEO_F103RB/variant.cpp"
                 ,0x88);
  }
  local_44 = 0xf;
  local_40 = 2;
  local_3c = 0;
  local_38 = 0x400;
  local_34 = 0;
  iVar1 = FUN_08003ad4(&local_44);
  if (iVar1 != 0) {
    FUN_08004d40("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/variants/NUCLEO_F103RB/variant.cpp"
                 ,0x95);
  }
  local_54[0] = 2;
  local_4c = 0x8000;
  iVar1 = FUN_08003c90(local_54);
  if (iVar1 != 0) {
    FUN_08004d40("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/variants/NUCLEO_F103RB/variant.cpp"
                 ,0x9c);
  }
  uVar2 = FUN_08003c44();
  FUN_08002514(uVar2 / 1000);
  FUN_08002560(4);
  FUN_08002494(0xffffffff,0);
  return;
}


////>>0x08001be8>>entry>>////

void entry(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined *)(iVar1 + 0x20000000) < &DAT_2000015c; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(iVar1 + 0x8007970);
  }
  for (puVar2 = &DAT_20000160; puVar2 < &DAT_200006a8; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  FUN_08004d44();
  FUN_08006198();
  UNRECOVERED_JUMPTABLE = (code *)0x8001c1a;
  FUN_08005f6c();
                    /* WARNING: Could not recover jumptable at 0x08001c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08001c32>>FUN_08001c32>>////

void FUN_08001c32(void)

{
  FUN_08004c52();
  return;
}


////>>0x08001c3a>>FUN_08001c3a>>////

void FUN_08001c3a(void)

{
  return;
}


////>>0x08001c3c>>FUN_08001c3c>>////

undefined4 FUN_08001c3c(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_08002514(DAT_20000084 / (1000 / DAT_20000078));
  if (iVar1 != 0) {
    return 1;
  }
  if (0xf < param_1) {
    return 1;
  }
  FUN_08002494(0xffffffff,param_1,0);
  DAT_2000007c = param_1;
  return 0;
}


////>>0x08001c88>>FUN_08001c88>>////



undefined4 FUN_08001c88(void)

{
  _DAT_40022000 = _DAT_40022000 | 0x10;
  FUN_08002470(3);
  FUN_08001c3c(0xf);
  FUN_08001c3a();
  return 0;
}


////>>0x08001cac>>FUN_08001cac>>////

void FUN_08001cac(void)

{
  DAT_200006a0 = (uint)DAT_20000078 + DAT_200006a0;
  return;
}


////>>0x08001cc4>>FUN_08001cc4>>////

undefined4 FUN_08001cc4(void)

{
  return DAT_200006a0;
}


////>>0x08001cd0>>FUN_08001cd0>>////

undefined4 FUN_08001cd0(uint **param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = FUN_08001cc4();
  uVar6 = DAT_20000084;
  puVar5 = *param_1;
  if ((puVar5[2] & 0x100) == 0) {
    if (((puVar5[1] & 0x100) == 0) && ((puVar5[0xb] & 0xf00000) == 0)) {
      do {
        if ((**param_1 & 2) != 0) goto LAB_08001de2;
      } while ((param_2 == 0xffffffff) ||
              ((param_2 != 0 && (iVar3 = FUN_08001cc4(), (uint)(iVar3 - iVar1) <= param_2))));
      param_1[10] = (uint *)((uint)param_1[10] | 4);
      *(undefined *)(param_1 + 9) = 0;
      uVar4 = 3;
    }
    else {
      uVar2 = FUN_08003da4(2);
      puVar5 = *param_1;
      if (((puVar5[4] & 0x24924924) == 0) && ((puVar5[3] & 0x924924) == 0)) {
        if ((puVar5[4] & 0x12492492) == 0) {
          if ((puVar5[3] & 0x492492) == 0) {
            iVar3 = 0x14;
          }
          else {
            iVar3 = 0x29;
          }
        }
        else {
          iVar3 = 0x29;
        }
      }
      else if (((puVar5[4] & 0x12492492) == 0) && ((puVar5[3] & 0x492492) == 0)) {
        iVar3 = 0x54;
      }
      else if ((puVar5[4] & 0x249249) == 0) {
        if ((puVar5[3] & 0x249249) == 0) {
          iVar3 = 0x54;
        }
        else {
          iVar3 = 0xfc;
        }
      }
      else {
        iVar3 = 0xfc;
      }
      uVar6 = (uVar6 / uVar2) * iVar3;
      for (; local_1c <= uVar6 && uVar6 - local_1c != 0; local_1c = local_1c + 1) {
        if ((param_2 != 0xffffffff) &&
           ((param_2 == 0 || (iVar3 = FUN_08001cc4(), param_2 < (uint)(iVar3 - iVar1))))) {
          param_1[10] = (uint *)((uint)param_1[10] | 4);
          *(undefined *)(param_1 + 9) = 0;
          return 3;
        }
      }
LAB_08001de2:
      **param_1 = 0xffffffed;
      param_1[10] = (uint *)((uint)param_1[10] | 0x200);
      if (((*param_1)[2] & 0xe0000) == 0xe0000) {
        if (param_1[3] == (uint *)0x0) {
          param_1[10] = (uint *)((uint)param_1[10] & 0xfffffeff);
          if (((uint)param_1[10] & 0x1000) == 0) {
            param_1[10] = (uint *)((uint)param_1[10] | 1);
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    param_1[10] = (uint *)((uint)param_1[10] | 0x20);
    *(undefined *)(param_1 + 9) = 0;
    uVar4 = 1;
  }
  return uVar4;
}


////>>0x08001e40>>FUN_08001e40>>////

undefined4 FUN_08001e40(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x4c);
}


////>>0x08001e48>>FUN_08001e48>>////

undefined4 FUN_08001e48(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_c;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    uVar1 = 2;
  }
  else {
    *(undefined *)(param_1 + 9) = 1;
    uVar2 = param_2[1];
    if (uVar2 < 7) {
      uVar2 = uVar2 * 5 - 5;
      *(uint *)(*param_1 + 0x34) =
           *param_2 << (uVar2 & 0xff) | *(uint *)(*param_1 + 0x34) & ~(0x1f << (uVar2 & 0xff));
    }
    else if (uVar2 < 0xd) {
      uVar2 = uVar2 * 5 - 0x23;
      *(uint *)(*param_1 + 0x30) =
           *param_2 << (uVar2 & 0xff) | *(uint *)(*param_1 + 0x30) & ~(0x1f << (uVar2 & 0xff));
    }
    else {
      uVar2 = uVar2 * 5 - 0x41;
      *(uint *)(*param_1 + 0x2c) =
           *param_2 << (uVar2 & 0xff) | *(uint *)(*param_1 + 0x2c) & ~(0x1f << (uVar2 & 0xff));
    }
    uVar2 = *param_2;
    if (uVar2 < 10) {
      *(uint *)(*param_1 + 0x10) =
           param_2[2] << (uVar2 * 3 & 0xff) |
           *(uint *)(*param_1 + 0x10) & ~(7 << (uVar2 * 3 & 0xff));
    }
    else {
      uVar2 = uVar2 * 3 - 0x1e;
      *(uint *)(*param_1 + 0xc) =
           param_2[2] << (uVar2 & 0xff) | *(uint *)(*param_1 + 0xc) & ~(7 << (uVar2 & 0xff));
    }
    if (*param_2 - 0x10 < 2) {
      if (*param_1 == 0x40012400) {
        if ((uRam40012408 & 0x800000) == 0) {
          uRam40012408 = uRam40012408 | 0x800000;
          if (*param_2 == 0x10) {
            for (local_c = (DAT_20000084 / 1000000) * 10; local_c != 0; local_c = local_c + -1) {
            }
            uVar1 = 0;
          }
          else {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        param_1[10] = param_1[10] | 0x20;
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
    *(undefined *)(param_1 + 9) = 0;
  }
  return uVar1;
}


////>>0x08001f80>>FUN_08001f80>>////

undefined4 FUN_08001f80(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


////>>0x08001f84>>FUN_08001f84>>////

undefined4 FUN_08001f84(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_14;
  
  iVar3 = *param_1;
  if ((*(uint *)(iVar3 + 8) & 1) == 0) {
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 1;
    for (local_14 = DAT_20000084 / 1000000; local_14 != 0; local_14 = local_14 - 1) {
    }
    iVar3 = FUN_08001cc4(param_1,param_2,DAT_20000084 * 0x431bde83);
    do {
      if ((*(uint *)(*param_1 + 8) & 1) != 0) {
        return 0;
      }
      iVar1 = FUN_08001cc4();
    } while ((uint)(iVar1 - iVar3) < 3);
    param_1[10] = param_1[10] | 0x10;
    param_1[0xb] = param_1[0xb] | 1;
    *(undefined *)(param_1 + 9) = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x08002004>>FUN_08002004>>////



int FUN_08002004(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 9) != '\x01') {
    *(undefined *)(param_1 + 9) = 1;
    iVar1 = FUN_08001f84();
    if (iVar1 == 0) {
      param_1[10] = param_1[10] & 0xfffffcfeU | 0x100;
      puVar2 = (undefined4 *)*param_1;
      if ((puVar2 == (undefined4 *)0x40012800) && ((_DAT_40012404 & 0xf0000) != 0)) {
        param_1[10] = param_1[10] | 0x100000;
        if ((_DAT_40012404 & 0x400) != 0) {
          param_1[10] = param_1[10] & 0xffffcfffU | 0x1000;
        }
      }
      else {
        param_1[10] = param_1[10] & 0xffefffff;
        if ((puVar2[1] & 0x400) != 0) {
          param_1[10] = param_1[10] & 0xffffcfffU | 0x1000;
        }
      }
      if ((param_1[10] & 0x1000U) == 0) {
        param_1[0xb] = 0;
      }
      else {
        param_1[0xb] = param_1[0xb] & 0xfffffff9;
      }
      *(undefined *)(param_1 + 9) = 0;
      *puVar2 = 0xfffffffd;
      iVar3 = *param_1;
      if (((*(uint *)(iVar3 + 8) & 0xe0000) == 0xe0000) &&
         ((iVar3 != 0x40012800 || ((_DAT_40012404 & 0xf0000) == 0)))) {
        *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x500000;
      }
      else {
        *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x100000;
      }
    }
    else {
      *(undefined *)(param_1 + 9) = 0;
    }
    return iVar1;
  }
  return 2;
}


////>>0x080020f0>>FUN_080020f0>>////

undefined4 FUN_080020f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((*(uint *)(iVar2 + 8) & 1) == 0) {
    return 0;
  }
  *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffe;
  iVar2 = FUN_08001cc4();
  do {
    if ((*(uint *)(*param_1 + 8) & 1) == 0) {
      return 0;
    }
    iVar1 = FUN_08001cc4();
  } while ((uint)(iVar1 - iVar2) < 3);
  param_1[10] = param_1[10] | 0x10;
  param_1[0xb] = param_1[0xb] | 1;
  return 1;
}


////>>0x0800213c>>FUN_0800213c>>////

undefined4 FUN_0800213c(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (param_1[10] == 0) {
    param_1[0xb] = 0;
    *(undefined *)(param_1 + 9) = 0;
    FUN_08004974();
  }
  iVar1 = FUN_080020f0(param_1);
  if (((param_1[10] & 0x10U) == 0) && (iVar1 == 0)) {
    param_1[10] = param_1[10] & 0xffffeefdU | 2;
    uVar2 = param_1[1] | param_1[7] | param_1[3] << 1;
    if (param_1[2] == 0x100) {
      uVar3 = 0x100;
    }
    else {
      uVar3 = 0;
      if (param_1[2] == 1) {
        uVar3 = 0x100;
      }
    }
    if (param_1[5] == 1) {
      if (param_1[3] == 0) {
        uVar3 = uVar3 | (param_1[6] + -1) * 0x2000 | 0x800;
      }
      else {
        param_1[10] = param_1[10] | 0x20;
        param_1[0xb] = param_1[0xb] | 1;
      }
    }
    *(uint *)(*param_1 + 4) = uVar3 | *(uint *)(*param_1 + 4) & 0xffff16ff;
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffe1f7fd | uVar2;
    if ((param_1[2] == 0x100) || (param_1[2] == 1)) {
      uVar3 = (param_1[4] + -1) * 0x100000;
    }
    else {
      uVar3 = 0;
    }
    *(uint *)(*param_1 + 0x2c) = uVar3 | *(uint *)(*param_1 + 0x2c) & 0xff0fffff;
    if (uVar2 != (*(uint *)(*param_1 + 8) & 0xff1f0efe)) {
      param_1[10] = param_1[10] & 0xffffffedU | 0x10;
      param_1[0xb] = param_1[0xb] | 1;
      return 1;
    }
    param_1[0xb] = 0;
    param_1[10] = param_1[10] & 0xfffffffcU | 1;
    return 0;
  }
  param_1[10] = param_1[10] | 0x10;
  return 1;
}


////>>0x0800224c>>FUN_0800224c>>////

int FUN_0800224c(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 1;
  }
  else {
    param_1[10] = param_1[10] | 2;
    iVar1 = FUN_080020f0();
    if (iVar1 == 0) {
      *(undefined4 *)*param_1 = 0xffffffe0;
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xff3f0000;
      *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xff0106f0;
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xff000000;
      *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xc0000000;
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffff000;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffff000;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffff000;
      *(uint *)(*param_1 + 0x20) = *(uint *)(*param_1 + 0x20) & 0xfffff000;
      *(uint *)(*param_1 + 0x24) = *(uint *)(*param_1 + 0x24) & 0xfffff000;
      *(uint *)(*param_1 + 0x28) = *(uint *)(*param_1 + 0x28) & 0xfffff000;
      *(uint *)(*param_1 + 0x2c) = *(uint *)(*param_1 + 0x2c) & 0xff000000;
      *(uint *)(*param_1 + 0x2c) = *(uint *)(*param_1 + 0x2c) & 0xff000000;
      *(uint *)(*param_1 + 0x30) = *(uint *)(*param_1 + 0x30) & 0xc0000000;
      *(uint *)(*param_1 + 0x34) = *(uint *)(*param_1 + 0x34) & 0xc0000000;
      *(uint *)(*param_1 + 0x38) = *(uint *)(*param_1 + 0x38) & 0xffc00000;
      *(uint *)(*param_1 + 0x38) = *(uint *)(*param_1 + 0x38) & 0xffc00000;
      FUN_080049f0(param_1);
      param_1[0xb] = 0;
      param_1[10] = 0;
    }
    *(undefined *)(param_1 + 9) = 0;
  }
  return iVar1;
}


////>>0x08002348>>FUN_08002348>>////

int FUN_08002348(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x24) == '\x01') {
    return 2;
  }
  *(undefined *)(param_1 + 0x24) = 1;
  iVar1 = FUN_080020f0();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffeefe | 1;
  }
  *(undefined *)(param_1 + 0x24) = 0;
  return iVar1;
}


////>>0x08002384>>FUN_08002384>>////

int FUN_08002384(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  if (*(char *)(param_1 + 9) == '\x01') {
    return 2;
  }
  *(undefined *)(param_1 + 9) = 1;
  iVar2 = FUN_080020f0();
  if (iVar2 == 0) {
    param_1[10] = param_1[10] & 0xffffeefdU | 2;
    uVar1 = DAT_20000084;
    uVar3 = FUN_08003da4(2);
    for (local_14 = uVar1 / uVar3 << 1; local_14 != 0; local_14 = local_14 + -1) {
    }
    FUN_08001f84(param_1);
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 8;
    iVar4 = FUN_08001cc4();
    while (iVar5 = *param_1, (*(uint *)(iVar5 + 8) & 8) != 0) {
      iVar5 = FUN_08001cc4();
      if (10 < (uint)(iVar5 - iVar4)) {
        param_1[10] = param_1[10] & 0xffffffedU | 0x10;
        *(undefined *)(param_1 + 9) = 0;
        return 1;
      }
    }
    *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 4;
    iVar4 = FUN_08001cc4();
    while ((*(uint *)(*param_1 + 8) & 4) != 0) {
      iVar5 = FUN_08001cc4();
      if (10 < (uint)(iVar5 - iVar4)) {
        param_1[10] = param_1[10] & 0xffffffedU | 0x10;
        *(undefined *)(param_1 + 9) = 0;
        return 1;
      }
    }
    param_1[10] = param_1[10] & 0xfffffffcU | 1;
  }
  *(undefined *)(param_1 + 9) = 0;
  return iVar2;
}


////>>0x08002470>>FUN_08002470>>////



void FUN_08002470(uint param_1)

{
  _DAT_e000ed0c = (param_1 & 7) << 8 | _DAT_e000ed0c & 0xf8ff | 0x5fa0000;
  return;
}


////>>0x08002494>>FUN_08002494>>////



void FUN_08002494(uint param_1,uint param_2,uint param_3)

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


////>>0x080024f8>>FUN_080024f8>>////

void FUN_080024f8(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)((param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  }
  return;
}


////>>0x08002514>>FUN_08002514>>////



undefined4 FUN_08002514(int param_1)

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


////>>0x08002540>>FUN_08002540>>////

void FUN_08002540(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(((param_1 >> 5) + 0x60) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  }
  return;
}


////>>0x08002560>>FUN_08002560>>////



void FUN_08002560(int param_1)

{
  if (param_1 != 4) {
    _DAT_e000e010 = _DAT_e000e010 & 0xfffffffb;
    return;
  }
  _DAT_e000e010 = _DAT_e000e010 | 4;
  return;
}


////>>0x08002580>>FUN_08002580>>////

void FUN_08002580(void)

{
  return;
}


////>>0x08002582>>FUN_08002582>>////

void FUN_08002582(void)

{
  FUN_08002580();
  return;
}


////>>0x0800258c>>FUN_0800258c>>////



undefined4 FUN_0800258c(uint **param_1)

{
  uint *puVar1;
  
  if (*(char *)((int)param_1 + 0x21) != '\x02') {
    param_1[0xe] = (uint *)0x4;
    return 1;
  }
  **param_1 = **param_1 & 0xfffffff1;
  **param_1 = **param_1 & 0xfffffffe;
  puVar1 = *param_1;
  if (puVar1 == (uint *)0x40020008) {
    _DAT_40020004 = 1;
  }
  else if (puVar1 == (uint *)0x4002001c) {
    _DAT_40020004 = 0x10;
  }
  else if (puVar1 == (uint *)0x40020030) {
    _DAT_40020004 = 0x100;
  }
  else if (puVar1 == (uint *)0x40020044) {
    _DAT_40020004 = 0x1000;
  }
  else if (puVar1 == (uint *)0x40020058) {
    _DAT_40020004 = 0x10000;
  }
  else if (puVar1 == (uint *)0x4002006c) {
    _DAT_40020004 = 0x100000;
  }
  else {
    _DAT_40020004 = 0x1000000;
  }
  *(undefined *)((int)param_1 + 0x21) = 1;
  *(undefined *)(param_1 + 8) = 0;
  if (param_1[0xd] != (uint *)0x0) {
    (*(code *)param_1[0xd])();
    return 0;
  }
  return 0;
}


////>>0x08002624>>FUN_08002624>>////



void FUN_08002624(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  uVar4 = 0;
  do {
    if (0xf < uVar4) {
      return;
    }
    uVar2 = 1 << (uVar4 & 0xff);
    uVar3 = *param_2 & uVar2;
    if (uVar2 == uVar3) {
      uVar5 = param_2[1];
      if (uVar5 == 0x12) {
        uVar6 = param_2[3] + 0xc;
      }
      else if (uVar5 < 0x13) {
        if (uVar5 == 2) {
          uVar6 = param_2[3] + 8;
        }
        else if (uVar5 < 3) {
          if (uVar5 == 0) goto LAB_08002776;
          if (uVar5 == 1) {
            uVar6 = param_2[3];
          }
        }
        else if (uVar5 == 3) {
          uVar6 = 0;
        }
        else if (uVar5 == 0x11) {
          uVar6 = param_2[3] + 4;
        }
      }
      else if (uVar5 == 0x10210000) {
LAB_08002776:
        if (param_2[2] == 0) {
          uVar6 = 4;
        }
        else if (param_2[2] == 1) {
          param_1[4] = uVar2;
          uVar6 = 8;
        }
        else {
          param_1[5] = uVar2;
          uVar6 = 8;
        }
      }
      else if (uVar5 < 0x10210001) {
        if ((uVar5 == 0x10110000) || (uVar5 == 0x10120000)) goto LAB_08002776;
      }
      else if ((uVar5 == 0x10310000) || ((uVar5 == 0x10320000 || (uVar5 == 0x10220000))))
      goto LAB_08002776;
      uVar2 = uVar4;
      puVar1 = param_1;
      if (0xff < uVar3) {
        uVar2 = uVar4 - 8;
        puVar1 = param_1 + 1;
      }
      *puVar1 = *puVar1 & ~(0xf << (uVar2 << 2 & 0xff)) | uVar6 << (uVar2 << 2 & 0xff);
      if ((param_2[1] & 0x10000000) != 0) {
        _DAT_40021018 = _DAT_40021018 | 1;
        iVar7 = (uVar4 & 3) << 2;
        if (param_1 == (uint *)0x40010800) {
          iVar8 = 0;
        }
        else if (param_1 == (uint *)0x40010c00) {
          iVar8 = 1;
        }
        else if (param_1 == (uint *)0x40011000) {
          iVar8 = 2;
        }
        else if (param_1 == (uint *)0x40011400) {
          iVar8 = 3;
        }
        else {
          iVar8 = 4;
        }
        *(uint *)(((uVar4 >> 2) + 2) * 4 + 0x40010000) =
             *(uint *)(((uVar4 >> 2) + 2) * 4 + 0x40010000) & ~(0xf << iVar7) | iVar8 << iVar7;
        if ((param_2[1] & 0x10000) == 0) {
          _DAT_40010400 = _DAT_40010400 & ~uVar3;
        }
        else {
          _DAT_40010400 = _DAT_40010400 | uVar3;
        }
        if ((param_2[1] & 0x20000) == 0) {
          _DAT_40010404 = _DAT_40010404 & ~uVar3;
        }
        else {
          _DAT_40010404 = _DAT_40010404 | uVar3;
        }
        if ((param_2[1] & 0x100000) == 0) {
          _DAT_40010408 = _DAT_40010408 & ~uVar3;
        }
        else {
          _DAT_40010408 = _DAT_40010408 | uVar3;
        }
        if ((param_2[1] & 0x200000) == 0) {
          _DAT_4001040c = _DAT_4001040c & ~uVar3;
        }
        else {
          _DAT_4001040c = uVar3 | _DAT_4001040c;
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


////>>0x08002810>>FUN_08002810>>////

undefined4 FUN_08002810(int param_1,uint param_2)

{
  if ((param_2 & *(uint *)(param_1 + 8)) == 0) {
    return 0;
  }
  return 1;
}


////>>0x0800281e>>FUN_0800281e>>////

void FUN_0800281e(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    *(int *)(param_1 + 0x10) = param_2 << 0x10;
    return;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}


////>>0x0800282c>>FUN_0800282c>>////



void FUN_0800282c(uint param_1)

{
  if ((_DAT_40010414 & param_1) != 0) {
    _DAT_40010414 = param_1;
    FUN_080060e4();
  }
  return;
}


////>>0x08002848>>FUN_08002848>>////

undefined4 FUN_08002848(int *param_1)

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


////>>0x080028d2>>FUN_080028d2>>////

undefined4 FUN_080028d2(int *param_1)

{
  *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xff;
  return 0;
}


////>>0x080028de>>FUN_080028de>>////

undefined4 FUN_080028de(uint **param_1)

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
          **param_1 = **param_1 | 0x800;
          **param_1 = **param_1 & 0xfffffbff;
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


////>>0x08002ab8>>FUN_08002ab8>>////

undefined4 FUN_08002ab8(int *param_1)

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


////>>0x08002ad8>>FUN_08002ad8>>////

undefined4 FUN_08002ad8(int *param_1)

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


////>>0x08002af8>>FUN_08002af8>>////

undefined4 FUN_08002af8(uint **param_1,uint *param_2,int param_3,uint *param_4)

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


////>>0x08002b84>>FUN_08002b84>>////

undefined4 FUN_08002b84(uint **param_1,uint *param_2,int param_3,uint *param_4)

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


////>>0x08002c10>>FUN_08002c10>>////

undefined4 FUN_08002c10(uint **param_1)

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


////>>0x08002c4e>>FUN_08002c4e>>////

void FUN_08002c4e(void)

{
  return;
}


////>>0x08002c50>>FUN_08002c50>>////

void FUN_08002c50(void)

{
  return;
}


////>>0x08002c52>>FUN_08002c52>>////

void FUN_08002c52(void)

{
  return;
}


////>>0x08002c54>>FUN_08002c54>>////

undefined4 FUN_08002c54(int *param_1)

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
      FUN_08002c52();
    }
    return 0;
  }
  return 0;
}


////>>0x08002ca4>>FUN_08002ca4>>////

void FUN_08002ca4(void)

{
  return;
}


////>>0x08002ca6>>FUN_08002ca6>>////

undefined4 FUN_08002ca6(int *param_1)

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
      FUN_08002ca4();
    }
  }
  return 0;
}


////>>0x08002cf2>>FUN_08002cf2>>////

undefined4 FUN_08002cf2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_08004e74(param_1,(*(uint *)(*param_1 + 0x18) & 4) == 0,uVar1,uVar2,param_4);
  return 0;
}


////>>0x08002d1c>>FUN_08002d1c>>////

undefined4 FUN_08002d1c(uint **param_1)

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
    FUN_08004ec4();
  }
  else if (*(char *)((int)param_1 + 0x3d) == '!') {
    param_1[0xb] = (uint *)0xffff0000;
    param_1[0xc] = (uint *)0x21;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
    (*param_1)[5] = 0xfffffbff;
    **param_1 = **param_1 & 0xfffffbff;
    FUN_08002c52();
  }
  else {
    (*param_1)[5] = 0xfffffbff;
  }
  return 0;
}


////>>0x08002db0>>FUN_08002db0>>////

void FUN_08002db0(void)

{
  return;
}


////>>0x08002db2>>FUN_08002db2>>////

undefined4 FUN_08002db2(uint **param_1)

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
        FUN_08002db0();
      }
      else {
        *(undefined *)((int)param_1 + 0x3e) = 0;
        FUN_08002c4e();
      }
    }
    else {
      (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
      param_1[0xc] = (uint *)0x11;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      FUN_08002c4e();
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


////>>0x08002efc>>FUN_08002efc>>////

undefined4 FUN_08002efc(uint **param_1)

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
          FUN_08002db0();
        }
        else {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_08002c4e();
        }
      }
      else {
        (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
        param_1[0xc] = (uint *)0x11;
        *(undefined *)((int)param_1 + 0x3e) = 0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        FUN_08002c4e();
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


////>>0x08002f9a>>FUN_08002f9a>>////

void FUN_08002f9a(void)

{
  return;
}


////>>0x08002f9c>>FUN_08002f9c>>////

undefined4 FUN_08002f9c(uint **param_1)

{
  uint *puVar1;
  
  if (*(char *)((int)param_1 + 0x3d) == '\"') {
    if (*(ushort *)((int)param_1 + 0x2a) < 4) {
      if (*(ushort *)((int)param_1 + 0x2a) - 2 < 2) {
        if (param_1[0xb] == (uint *)0x2) {
          **param_1 = **param_1 | 0x400;
        }
        else {
          **param_1 = **param_1 & 0xfffffbff;
          **param_1 = **param_1 | 0x800;
        }
        (*param_1)[1] = (*param_1)[1] & 0xfffffbff;
      }
      else {
        if (param_1[0xb] == (uint *)0x2) {
          **param_1 = **param_1 | 0x400;
        }
        else {
          **param_1 = **param_1 & 0xfffffbff;
        }
        (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
        puVar1 = param_1[9];
        param_1[9] = (uint *)((int)puVar1 + 1);
        *(char *)puVar1 = (char)(*param_1)[4];
        *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        param_1[0xc] = (uint *)0x0;
        if (*(char *)((int)param_1 + 0x3e) == '@') {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_08002f9a();
        }
        else {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          FUN_08002c50();
        }
      }
    }
    else {
      puVar1 = param_1[9];
      param_1[9] = (uint *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)(*param_1)[4];
      *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    }
  }
  return 0;
}


////>>0x0800306c>>FUN_0800306c>>////

undefined4 FUN_0800306c(uint **param_1)

{
  uint *puVar1;
  
  puVar1 = param_1[0xb];
  if (*(short *)((int)param_1 + 0x2a) == 3) {
    if (((puVar1 == (uint *)0x4) || (puVar1 == (uint *)0x8)) || (puVar1 == (uint *)0xffff0000)) {
      **param_1 = **param_1 & 0xfffffbff;
    }
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
  }
  else if (*(short *)((int)param_1 + 0x2a) == 2) {
    if (((puVar1 == (uint *)0x4) || (puVar1 == (uint *)0x8)) || (puVar1 == (uint *)0xffff0000)) {
      (*param_1)[1] = (*param_1)[1] & 0xfffffcff;
      **param_1 = **param_1 | 0x200;
    }
    else {
      if (puVar1 == (uint *)0x2) {
        **param_1 = **param_1 | 0x400;
      }
      else {
        **param_1 = **param_1 & 0xfffffbff;
      }
      (*param_1)[1] = (*param_1)[1] & 0xfffffcff;
    }
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    puVar1 = param_1[9];
    param_1[9] = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)(*param_1)[4];
    *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    param_1[0xc] = (uint *)0x0;
    if (*(char *)((int)param_1 + 0x3e) == '@') {
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_08002f9a();
    }
    else {
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_08002c50();
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


////>>0x0800316a>>FUN_0800316a>>////

void FUN_0800316a(void)

{
  return;
}


////>>0x0800316c>>FUN_0800316c>>////

void FUN_0800316c(uint **param_1)

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
      FUN_0800316a(param_1);
    }
    else {
      if ((puVar3[5] & 0x40) != 0) {
        puVar2 = param_1[9];
        param_1[9] = (uint *)((int)puVar2 + 1);
        *(char *)puVar2 = (char)puVar3[4];
      }
      FUN_08004ef4(param_1);
    }
  }
  else {
    puVar3[1] = puVar3[1] & 0xfffff7ff;
    if (*(char *)((int)param_1[0xd] + 0x21) == '\x01') {
      param_1[0xe][0xd] = (uint)&LAB_080035fc_1;
      iVar1 = FUN_0800258c(param_1[0xe]);
      if (iVar1 != 0) {
        if (((*param_1)[5] & 0x40) != 0) {
          puVar3 = param_1[9];
          param_1[9] = (uint *)((int)puVar3 + 1);
          *(char *)puVar3 = (char)(*param_1)[4];
        }
        **param_1 = **param_1 & 0xfffffffe;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        (*(code *)param_1[0xe][0xd])();
      }
    }
    else {
      param_1[0xd][0xd] = (uint)&LAB_080035fc_1;
      iVar1 = FUN_0800258c(param_1[0xd]);
      if (iVar1 != 0) {
        **param_1 = **param_1 & 0xfffffffe;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        (*(code *)param_1[0xd][0xd])();
      }
    }
  }
  if ((*(char *)((int)param_1 + 0x3d) == '(') && (((uint)param_1[0x10] & 4) != 0)) {
    param_1[0xb] = (uint *)0xffff0000;
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    FUN_08004ec4(param_1);
  }
  return;
}


////>>0x080032b4>>FUN_080032b4>>////

undefined4 FUN_080032b4(uint **param_1)

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
      FUN_08004ec4();
    }
    else if ((param_1[0xc] == (uint *)0x22) || (cVar1 == '\"')) {
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      FUN_08002ca4();
    }
  }
  else {
    FUN_0800316c();
  }
  return 0;
}


////>>0x080033b8>>FUN_080033b8>>////

void FUN_080033b8(int *param_1)

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
          FUN_080028de(param_1);
        }
      }
      else {
        FUN_080028d2(param_1);
      }
    }
    else {
      FUN_08002848(param_1);
    }
    if ((uVar4 & 0x100004) == 0) {
      if ((((uVar2 & 0x10040) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        FUN_08002f9c(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_0800306c(param_1);
        return;
      }
    }
    else {
      if ((((uVar2 & 0x10080) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        FUN_08002db2(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_08002efc(param_1);
        return;
      }
    }
  }
  else {
    if (((uVar2 & 0x10002) != 0) && ((uVar3 & 0x200) != 0)) {
      FUN_08002cf2();
      return;
    }
    if (((uVar2 & 0x10010) != 0) && ((uVar3 & 0x200) != 0)) {
      FUN_080032b4(param_1);
      return;
    }
    if ((uVar4 & 0x100004) == 0) {
      if ((((uVar2 & 0x10040) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        FUN_08002ca6(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_08002ad8(param_1);
      }
    }
    else {
      if ((((uVar2 & 0x10080) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        FUN_08002c54(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        FUN_08002ab8(param_1);
        return;
      }
    }
  }
  return;
}


////>>0x08003520>>FUN_08003520>>////

void FUN_08003520(uint **param_1)

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
    **param_1 = **param_1 | 0x8000;
  }
  if (((uVar3 & 0x10200) != 0) && ((uVar4 & 0x100) != 0)) {
    param_1[0x10] = (uint *)((uint)param_1[0x10] | 2);
    (*param_1)[5] = 0xfffffdff;
  }
  if (((uVar3 & 0x10400) != 0) && ((uVar4 & 0x100) != 0)) {
    cVar1 = *(char *)((int)param_1 + 0x3d);
    if (((*(char *)((int)param_1 + 0x3e) == ' ') && (*(short *)((int)param_1 + 0x2a) == 0)) &&
       (((cVar1 == '!' || (cVar1 == ')')) || ((cVar1 == '(' && (param_1[0xc] == (uint *)0x21)))))) {
      FUN_08002d1c(param_1);
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
    FUN_0800316c(param_1);
  }
  return;
}


////>>0x0800365c>>FUN_0800365c>>////

void FUN_0800365c(int param_1)

{
  bool bVar1;
  int local_4;
  
  local_4 = param_1 * (DAT_20000084 / 8000);
  do {
    bVar1 = local_4 != 0;
    local_4 = local_4 + -1;
  } while (bVar1);
  return;
}


////>>0x08003688>>FUN_08003688>>////


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_08003688(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((*param_1 & 1) != 0) {
    if (((_DAT_40021004 & 0xc) == 4) ||
       (((_DAT_40021004 & 0xc) == 8 && ((_DAT_40021004 & 0x10000) != 0)))) {
      if (((_DAT_40021000 & 0x20000) != 0) && (param_1[1] == 0)) {
        return 1;
      }
    }
    else {
      uVar4 = param_1[1];
      if (uVar4 == 0x10000) {
        _DAT_40021000 = _DAT_40021000 | 0x10000;
      }
      else if (uVar4 == 0) {
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      else if (uVar4 == 0x50000) {
        _DAT_40021000 = _DAT_40021000 | 0x50000;
      }
      else {
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      if (param_1[1] == 0) {
        iVar1 = FUN_08001cc4();
        while ((_DAT_40021000 & 0x20000) != 0) {
          iVar2 = FUN_08001cc4();
          if (100 < (uint)(iVar2 - iVar1)) {
            return 3;
          }
        }
      }
      else {
        iVar1 = FUN_08001cc4();
        while ((_DAT_40021000 & 0x20000) == 0) {
          iVar2 = FUN_08001cc4();
          if (100 < (uint)(iVar2 - iVar1)) {
            return 3;
          }
        }
      }
    }
  }
  if ((*param_1 & 2) != 0) {
    if (((_DAT_40021004 & 0xc) == 0) ||
       (((_DAT_40021004 & 0xc) == 8 && ((_DAT_40021004 & 0x10000) == 0)))) {
      if (((_DAT_40021000 & 2) != 0) && (param_1[4] != 1)) {
        return 1;
      }
      _DAT_40021000 = _DAT_40021000 & 0xffffff07 | param_1[5] << 3;
    }
    else if (param_1[4] == 0) {
      _DAT_42420000 = 0;
      iVar1 = FUN_08001cc4();
      while ((_DAT_40021000 & 2) != 0) {
        iVar2 = FUN_08001cc4();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      _DAT_42420000 = 1;
      iVar1 = FUN_08001cc4();
      while ((_DAT_40021000 & 2) == 0) {
        iVar2 = FUN_08001cc4();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      _DAT_40021000 = _DAT_40021000 & 0xffffff07 | param_1[5] << 3;
    }
  }
  if ((*param_1 & 8) != 0) {
    if (param_1[6] == 0) {
      _DAT_42420480 = 0;
      iVar1 = FUN_08001cc4();
      while ((_DAT_40021024 & 2) != 0) {
        iVar2 = FUN_08001cc4();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      _DAT_42420480 = 1;
      iVar1 = FUN_08001cc4();
      while ((_DAT_40021024 & 2) == 0) {
        iVar2 = FUN_08001cc4();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      FUN_0800365c(1);
    }
  }
  if ((*param_1 & 4) != 0) {
    bVar5 = (_DAT_4002101c & 0x10000000) == 0;
    if (bVar5) {
      _DAT_4002101c = _DAT_4002101c | 0x10000000;
    }
    if ((_DAT_40007000 & 0x100) == 0) {
      _DAT_40007000 = _DAT_40007000 | 0x100;
      iVar1 = FUN_08001cc4();
      while ((_DAT_40007000 & 0x100) == 0) {
        iVar2 = FUN_08001cc4();
        if (100 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    uVar4 = param_1[3];
    if (uVar4 == 1) {
      _DAT_40021020 = _DAT_40021020 | 1;
    }
    else if (uVar4 == 0) {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
    }
    else if (uVar4 == 5) {
      _DAT_40021020 = _DAT_40021020 | 5;
    }
    else {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
    }
    if (param_1[3] == 0) {
      iVar1 = FUN_08001cc4();
      while ((_DAT_40021020 & 2) != 0) {
        iVar2 = FUN_08001cc4();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      iVar1 = FUN_08001cc4();
      while ((_DAT_40021020 & 2) == 0) {
        iVar2 = FUN_08001cc4();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    if (bVar5) {
      _DAT_4002101c = _DAT_4002101c & 0xefffffff;
    }
  }
  if (param_1[7] == 0) {
    uVar3 = 0;
  }
  else if ((_DAT_40021004 & 0xc) == 8) {
    uVar3 = 1;
  }
  else if (param_1[7] == 2) {
    _DAT_42420060 = 0;
    iVar1 = FUN_08001cc4();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) {
        if (param_1[8] == 0x10000) {
          _DAT_40021004 = _DAT_40021004 & 0xfffdffff | param_1[2];
        }
        _DAT_40021004 = _DAT_40021004 & 0xffc2ffff | param_1[8] | param_1[9];
        _DAT_42420060 = 1;
        iVar1 = FUN_08001cc4();
        do {
          if ((_DAT_40021000 & 0x2000000) != 0) {
            return 0;
          }
          iVar2 = FUN_08001cc4();
        } while ((uint)(iVar2 - iVar1) < 3);
        return 3;
      }
      iVar2 = FUN_08001cc4();
    } while ((uint)(iVar2 - iVar1) < 3);
    uVar3 = 3;
  }
  else {
    _DAT_42420060 = 0;
    iVar1 = FUN_08001cc4();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) {
        return 0;
      }
      iVar2 = FUN_08001cc4();
    } while ((uint)(iVar2 - iVar1) < 3);
    uVar3 = 3;
  }
  return uVar3;
}


////>>0x08003a68>>FUN_08003a68>>////



uint FUN_08003a68(void)

{
  uint uVar1;
  undefined2 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0x10100f0e;
  uStack_10 = 0xd0c0b0a;
  uStack_14 = 0x9080706;
  uStack_18 = 0x5040302;
  local_1c = 0x201;
  if ((_DAT_40021004 & 0xc) == 8) {
    uVar1 = (uint)*(byte *)((int)&uStack_18 + ((_DAT_40021004 << 10) >> 0x1c));
    if ((_DAT_40021004 & 0x10000) == 0) {
      uVar1 = uVar1 * 4000000;
    }
    else {
      uVar1 = (uVar1 * 8000000) /
              (uint)*(byte *)((int)&local_1c - ((int)(_DAT_40021004 << 0xe) >> 0x1f));
    }
  }
  else {
    uVar1 = 8000000;
  }
  return uVar1;
}


////>>0x08003ad4>>FUN_08003ad4>>////



undefined4 FUN_08003ad4(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((_DAT_40022000 & 7) < param_2) {
    _DAT_40022000 = _DAT_40022000 & 0xfffffff8 | param_2;
    if (param_2 != (param_2 & 7)) {
      return 1;
    }
  }
  if ((*param_1 & 2) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffffff0f | param_1[2];
  }
  if ((*param_1 & 1) != 0) {
    uVar3 = param_1[1];
    if (uVar3 == 1) {
      if ((_DAT_40021000 & 0x20000) == 0) {
        return 1;
      }
    }
    else if ((uVar3 != 2) && ((_DAT_40021000 & 2) == 0)) {
      return 1;
    }
    _DAT_40021004 = uVar3 | _DAT_40021004 & 0xfffffffc;
    iVar1 = FUN_08001cc4();
    if (param_1[1] == 1) {
      while ((_DAT_40021004 & 0xc) != 4) {
        iVar2 = FUN_08001cc4();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else if (param_1[1] == 2) {
      while ((_DAT_40021004 & 0xc) != 8) {
        iVar2 = FUN_08001cc4();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      while ((_DAT_40021004 & 0xc) != 0) {
        iVar2 = FUN_08001cc4();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
  }
  if (param_2 < (_DAT_40022000 & 7)) {
    _DAT_40022000 = _DAT_40022000 & 0xfffffff8 | param_2;
    if (param_2 != (param_2 & 7)) {
      return 1;
    }
  }
  if ((*param_1 & 4) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xfffff8ff | param_1[3];
  }
  if ((*param_1 & 8) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffffc7ff | param_1[4] << 3;
  }
  uVar3 = FUN_08003a68();
  DAT_20000084 = uVar3 >> (&DAT_0800772c)[(_DAT_40021004 << 0x18) >> 0x1c];
  FUN_08001c3c(0xf);
  return 0;
}


////>>0x08003afa>>FUN_08003afa>>////



undefined4 FUN_08003afa(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*param_1 & 2) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffffff0f | param_1[2];
  }
  if ((*param_1 & 1) != 0) {
    uVar3 = param_1[1];
    if (uVar3 == 1) {
      if ((_DAT_40021000 & 0x20000) == 0) {
        return 1;
      }
    }
    else if ((uVar3 != 2) && ((_DAT_40021000 & 2) == 0)) {
      return 1;
    }
    _DAT_40021004 = uVar3 | _DAT_40021004 & 0xfffffffc;
    iVar1 = FUN_08001cc4();
    if (param_1[1] == 1) {
      while ((_DAT_40021004 & 0xc) != 4) {
        iVar2 = FUN_08001cc4();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else if (param_1[1] == 2) {
      while ((_DAT_40021004 & 0xc) != 8) {
        iVar2 = FUN_08001cc4();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      while ((_DAT_40021004 & 0xc) != 0) {
        iVar2 = FUN_08001cc4();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
  }
  if (param_2 < (_DAT_40022000 & 7)) {
    _DAT_40022000 = _DAT_40022000 & 0xfffffff8 | param_2;
    if (param_2 != (param_2 & 7)) {
      return 1;
    }
  }
  if ((*param_1 & 4) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xfffff8ff | param_1[3];
  }
  if ((*param_1 & 8) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffffc7ff | param_1[4] << 3;
  }
  uVar3 = FUN_08003a68();
  DAT_20000084 = uVar3 >> (&DAT_0800772c)[(_DAT_40021004 << 0x18) >> 0x1c];
  FUN_08001c3c(0xf);
  return 0;
}


////>>0x08003c44>>FUN_08003c44>>////

undefined4 FUN_08003c44(void)

{
  return DAT_20000084;
}


////>>0x08003c50>>FUN_08003c50>>////



uint FUN_08003c50(void)

{
  uint uVar1;
  
  uVar1 = FUN_08003c44();
  return uVar1 >> (&DAT_0800773c)[(uint)(_DAT_40021004 << 0x15) >> 0x1d];
}


////>>0x08003c70>>FUN_08003c70>>////



uint FUN_08003c70(void)

{
  uint uVar1;
  
  uVar1 = FUN_08003c44();
  return uVar1 >> (&DAT_0800773c)[(uint)(_DAT_40021004 << 0x12) >> 0x1d];
}


////>>0x08003c90>>FUN_08003c90>>////



undefined4 FUN_08003c90(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if ((*param_1 & 1) != 0) {
    bVar5 = (_DAT_4002101c & 0x10000000) == 0;
    if (bVar5) {
      _DAT_4002101c = _DAT_4002101c | 0x10000000;
    }
    if ((_DAT_40007000 & 0x100) == 0) {
      _DAT_40007000 = _DAT_40007000 | 0x100;
      iVar3 = FUN_08001cc4();
      while ((_DAT_40007000 & 0x100) == 0) {
        iVar4 = FUN_08001cc4();
        if (100 < (uint)(iVar4 - iVar3)) {
          return 3;
        }
      }
    }
    if (((_DAT_40021020 & 0x300) != 0) && ((_DAT_40021020 & 0x300) != (param_1[1] & 0x300))) {
      uVar2 = _DAT_40021020 & 0xfffffcff;
      _DAT_42420440 = 0;
      uVar1 = _DAT_40021020 & 1;
      _DAT_40021020 = uVar2;
      if (uVar1 != 0) {
        iVar3 = FUN_08001cc4();
        while ((_DAT_40021020 & 2) == 0) {
          iVar4 = FUN_08001cc4();
          if (5000 < (uint)(iVar4 - iVar3)) {
            return 3;
          }
        }
      }
    }
    _DAT_40021020 = _DAT_40021020 & 0xfffffcff | param_1[1];
    if (bVar5) {
      _DAT_4002101c = _DAT_4002101c & 0xefffffff;
    }
  }
  if ((*param_1 & 2) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffff3fff | param_1[2];
  }
  if ((*param_1 & 0x10) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffbfffff | param_1[3];
  }
  return 0;
}


////>>0x08003da4>>FUN_08003da4>>////



uint FUN_08003da4(int param_1)

{
  uint uVar1;
  undefined2 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0x10100f0e;
  uStack_18 = 0xd0c0b0a;
  uStack_1c = 0x9080706;
  uStack_20 = 0x5040302;
  local_24 = 0x201;
  if (param_1 == 2) {
    uVar1 = FUN_08003c70();
    uVar1 = uVar1 / ((((_DAT_40021004 << 0x10) >> 0x1e) + 1) * 2);
  }
  else if (param_1 == 0x10) {
    if ((_DAT_40021000 & 0x1000000) == 0) {
      uVar1 = 0;
    }
    else {
      if ((_DAT_40021004 & 0x10000) == 0) {
        uVar1 = 4000000;
      }
      else {
        uVar1 = 8000000 / *(byte *)((int)&local_24 - ((int)(_DAT_40021004 << 0xe) >> 0x1f));
      }
      uVar1 = uVar1 * *(byte *)((int)&uStack_20 + ((_DAT_40021004 << 10) >> 0x1c));
      if ((_DAT_40021004 & 0x400000) == 0) {
        uVar1 = (uVar1 * 2) / 3;
      }
    }
  }
  else if (param_1 == 1) {
    if ((_DAT_40021020 & 0x302) == 0x102) {
      uVar1 = 0x8000;
    }
    else if (((_DAT_40021020 & 0x300) == 0x200) && ((_DAT_40021024 & 2) != 0)) {
      uVar1 = 32000;
    }
    else if ((_DAT_40021020 & 0x300) == 0x300) {
      if ((_DAT_40021000 & 0x20000) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0xf424;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08003ea0>>FUN_08003ea0>>////



void FUN_08003ea0(uint **param_1)

{
  if (((**param_1 & 2) != 0) && (((*param_1)[1] & 2) != 0)) {
    FUN_08004d18();
    (*param_1)[1] = 0xfffffffd;
  }
  _DAT_40010414 = 0x20000;
  *(undefined *)((int)param_1 + 0x11) = 1;
  return;
}


////>>0x08003ed8>>FUN_08003ed8>>////

void FUN_08003ed8(uint **param_1)

{
  uint *puVar1;
  
  *(undefined *)((int)param_1 + 0x3d) = 2;
  puVar1 = *param_1;
  if ((puVar1[8] & 0x1111) == 0) {
    if ((puVar1[8] & 0x444) == 0) {
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  FUN_08004b34(param_1);
  *(undefined *)((int)param_1 + 0x3d) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return;
}


////>>0x08003f12>>FUN_08003f12>>////

void FUN_08003f12(void)

{
  return;
}


////>>0x08003f14>>FUN_08003f14>>////

void FUN_08003f14(void)

{
  return;
}


////>>0x08003f16>>FUN_08003f16>>////

void FUN_08003f16(void)

{
  return;
}


////>>0x08003f18>>FUN_08003f18>>////

void FUN_08003f18(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 2) != 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffd;
    *(undefined *)(param_1 + 7) = 1;
    if ((*(uint *)(*param_1 + 0x18) & 3) == 0) {
      FUN_08004df8();
      FUN_08003f14(param_1);
    }
    else {
      FUN_08003f12();
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 4) != 0) && ((*(uint *)(iVar1 + 0xc) & 4) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffb;
    *(undefined *)(param_1 + 7) = 2;
    if ((*(uint *)(*param_1 + 0x18) & 0x300) == 0) {
      FUN_08004df8(param_1);
      FUN_08003f14(param_1);
    }
    else {
      FUN_08003f12(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 8) != 0) && ((*(uint *)(iVar1 + 0xc) & 8) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffff7;
    *(undefined *)(param_1 + 7) = 4;
    if ((*(uint *)(*param_1 + 0x1c) & 3) == 0) {
      FUN_08004df8(param_1);
      FUN_08003f14(param_1);
    }
    else {
      FUN_08003f12(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x10) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x10) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffef;
    *(undefined *)(param_1 + 7) = 8;
    if ((*(uint *)(*param_1 + 0x1c) & 0x300) == 0) {
      FUN_08004df8(param_1);
      FUN_08003f14(param_1);
    }
    else {
      FUN_08003f12(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 1) != 0) && ((*(uint *)(iVar1 + 0xc) & 1) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffe;
    FUN_08004e12(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x80) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x80) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffff7f;
    FUN_0800417a(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x40) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x40) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffbf;
    FUN_08003f16(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x20) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x20) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffdf;
    FUN_08004178(param_1);
  }
  return;
}


////>>0x08004092>>FUN_08004092>>////

void FUN_08004092(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_3 << (param_2 & 0xff);
  return;
}


////>>0x080040b0>>FUN_080040b0>>////

undefined4 FUN_080040b0(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  FUN_08004092(*param_1,param_2,0);
  if (((*param_1 == (uint *)0x40012c00) && ((uRam40012c20 & 0x1111) == 0)) &&
     ((uRam40012c20 & 0x444) == 0)) {
    uRam40012c44 = uRam40012c44 & 0xffff7fff;
  }
  puVar1 = *param_1;
  if (((puVar1[8] & 0x1111) == 0) && ((puVar1[8] & 0x444) == 0)) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(undefined *)((int)param_1 + 0x3d) = 1;
  return 0;
}


////>>0x08004110>>FUN_08004110>>////

void FUN_08004110(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(4 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_3 << (param_2 & 0xff);
  return;
}


////>>0x0800412c>>FUN_0800412c>>////

undefined4 FUN_0800412c(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  FUN_08004110(*param_1,param_2,0);
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


////>>0x08004178>>FUN_08004178>>////

void FUN_08004178(void)

{
  return;
}


////>>0x0800417a>>FUN_0800417a>>////

void FUN_0800417a(void)

{
  return;
}


////>>0x0800417c>>FUN_0800417c>>////

void FUN_0800417c(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffedf;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  return;
}


////>>0x08004198>>FUN_08004198>>////

undefined4 FUN_08004198(int *param_1)

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


////>>0x08004204>>FUN_08004204>>////

void FUN_08004204(int *param_1)

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
       param_1[2] | param_1[4] | param_1[5] | *(uint *)(*param_1 + 0xc) & 0xffffe9f3;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffcff | param_1[6];
  iVar10 = *param_1;
  if (iVar10 != 0x40013800) {
    iVar1 = FUN_08003c50();
    iVar6 = param_1[1];
    iVar2 = FUN_08003c50();
    iVar7 = param_1[1];
    iVar3 = FUN_08003c50();
    iVar8 = param_1[1];
    iVar4 = FUN_08003c50();
    iVar9 = param_1[1];
    iVar5 = FUN_08003c50();
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
  iVar10 = FUN_08003c70();
  iVar5 = param_1[1];
  iVar1 = FUN_08003c70();
  iVar6 = param_1[1];
  iVar2 = FUN_08003c70();
  iVar7 = param_1[1];
  iVar3 = FUN_08003c70();
  iVar8 = param_1[1];
  iVar4 = FUN_08003c70();
  iRam40013808 = ((uint)((int)((ulonglong)
                               (((uint)(iVar3 * 0x19) / (uint)(iVar8 << 2) +
                                (int)(((ulonglong)(uint)(iVar4 * 0x19) /
                                      (ulonglong)(uint)(param_1[1] << 2)) / 100) * -100) * 0x10 +
                               0x32) * 0x51eb851f >> 0x20) << 0x17) >> 0x1c) +
                 ((((uint)(iVar1 * 0x19) / (uint)(iVar6 << 2) +
                   (int)(((ulonglong)(uint)(iVar2 * 0x19) / (ulonglong)(uint)(iVar7 << 2)) / 100) *
                   -100) * 0x10 + 0x32) / 100 & 0xf0) +
                 (int)(((ulonglong)(uint)(iVar10 * 0x19) / (ulonglong)(uint)(iVar5 << 2)) / 100) *
                 0x10;
  return;
}


////>>0x080043b4>>FUN_080043b4>>////

undefined4 FUN_080043b4(uint **param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  
  do {
    if (((param_2 & ~**param_1) == 0) != param_3) {
      return 0;
    }
  } while ((param_5 == 0xffffffff) ||
          ((param_5 != 0 && (iVar1 = FUN_08001cc4(), (uint)(iVar1 - param_4) <= param_5))));
  (*param_1)[3] = (*param_1)[3] & 0xfffffe5f;
  (*param_1)[5] = (*param_1)[5] & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x39) = 0x20;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  *(undefined *)(param_1 + 0xe) = 0;
  return 3;
}


////>>0x08004418>>FUN_08004418>>////

void FUN_08004418(void)

{
  return;
}


////>>0x0800441a>>FUN_0800441a>>////

undefined4 FUN_0800441a(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*(char *)((int)param_1 + 0x39) == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      FUN_08004418();
    }
    *(undefined *)((int)param_1 + 0x39) = 0x24;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
    FUN_08004204(param_1);
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


////>>0x08004478>>FUN_08004478>>////

undefined4 FUN_08004478(int *param_1,ushort *param_2,int param_3,undefined4 param_4)

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
      uVar2 = FUN_08001cc4();
      *(short *)(param_1 + 9) = (short)param_3;
      *(short *)((int)param_1 + 0x26) = (short)param_3;
      while (*(short *)((int)param_1 + 0x26) != 0) {
        *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + -1;
        if (param_1[2] == 0x1000) {
          iVar1 = FUN_080043b4(param_1,0x80,0,uVar2,param_4);
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
          iVar1 = FUN_080043b4(param_1,0x80,0,uVar2,param_4);
          if (iVar1 != 0) {
            return 3;
          }
          *(uint *)(*param_1 + 4) = (uint)*(byte *)param_2;
          param_2 = (ushort *)((int)param_2 + 1);
        }
      }
      iVar1 = FUN_080043b4(param_1,0x40,0,uVar2,param_4);
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


////>>0x0800455a>>FUN_0800455a>>////

undefined4 FUN_0800455a(int *param_1,int param_2,int param_3)

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


////>>0x080045a2>>FUN_080045a2>>////

undefined4 FUN_080045a2(int *param_1,int param_2,int param_3)

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
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x100;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) | 1;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x20;
    return 0;
  }
  return 2;
}


////>>0x080045fe>>FUN_080045fe>>////

undefined4 FUN_080045fe(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffbf;
  *(undefined *)((int)param_1 + 0x39) = 0x20;
  FUN_08005604();
  return 0;
}


////>>0x08004618>>FUN_08004618>>////

undefined4 FUN_08004618(int *param_1)

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
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffdf;
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffeff;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  FUN_080055e0();
  return 0;
}


////>>0x080046b8>>FUN_080046b8>>////

void FUN_080046b8(uint **param_1)

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
    FUN_08004618(param_1);
    return;
  }
  if (((uVar5 & 0xf) == 0) || ((uVar4 = puVar3[5] & 1, uVar4 == 0 && ((uVar2 & 0x120) == 0)))) {
    if (((uVar5 & 0x80) != 0) && ((uVar2 & 0x80) != 0)) {
      FUN_08004198(param_1);
      return;
    }
    if (((uVar5 & 0x40) != 0) && ((uVar2 & 0x40) != 0)) {
      FUN_080045fe(param_1);
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
        FUN_08004618(param_1);
      }
      if ((((uint)param_1[0xf] & 8) == 0) && (((*param_1)[5] & 0x40) == 0)) {
        FUN_08005650(param_1);
        param_1[0xf] = (uint *)0x0;
        return;
      }
      FUN_0800417c(param_1);
      puVar3 = *param_1;
      if ((puVar3[5] & 0x40) == 0) {
        FUN_08005650(param_1);
        return;
      }
      puVar3[5] = puVar3[5] & 0xffffffbf;
      if (param_1[0xd] == (uint *)0x0) {
        FUN_08005650(param_1);
        return;
      }
      param_1[0xd][0xd] = (uint)&LAB_080047d8_1;
      iVar1 = FUN_0800258c(param_1[0xd]);
      if (iVar1 != 0) {
        (*(code *)param_1[0xd][0xd])();
        return;
      }
    }
  }
  return;
}


////>>0x080047e8>>FUN_080047e8>>////

byte FUN_080047e8(int param_1)

{
  return *(byte *)(param_1 + 0x3a) | *(byte *)(param_1 + 0x39);
}


////>>0x080047f4>>FUN_080047f4>>////

uint FUN_080047f4(uint param_1,int param_2)

{
  return *(uint *)(param_2 + ((param_1 << 0x18) >> 0x1c) * 4) >> (param_1 & 0xf) & 1;
}


////>>0x0800480a>>FUN_0800480a>>////

void FUN_0800480a(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 0x18) >> 0x1c;
  *(uint *)(param_2 + uVar1 * 4) = *(uint *)(param_2 + uVar1 * 4) | 1 << (param_1 & 0xf);
  return;
}


////>>0x08004828>>FUN_08004828>>////

void FUN_08004828(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 0x18) >> 0x1c;
  *(uint *)(param_2 + uVar1 * 4) = *(uint *)(param_2 + uVar1 * 4) & ~(1 << (param_1 & 0xf));
  return;
}


////>>0x08004848>>FUN_08004848>>////

undefined4 FUN_08004848(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x40010800;
  case 1:
    return 0x40010c00;
  case 2:
    return 0x40011000;
  case 3:
    return 0x40011400;
  case 4:
    return 0x40011800;
  default:
    return 0;
  }
}


////>>0x08004884>>FUN_08004884>>////



undefined4 FUN_08004884(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    _DAT_40021018 = _DAT_40021018 | 4;
    uVar1 = 0x40010800;
    break;
  case 1:
    _DAT_40021018 = _DAT_40021018 | 8;
    uVar1 = 0x40010c00;
    break;
  case 2:
    _DAT_40021018 = _DAT_40021018 | 0x10;
    uVar1 = 0x40011000;
    break;
  case 3:
    _DAT_40021018 = _DAT_40021018 | 0x20;
    uVar1 = 0x40011400;
    break;
  case 4:
    _DAT_40021018 = _DAT_40021018 | 0x40;
    uVar1 = 0x40011800;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x0800492c>>FUN_0800492c>>////

uint FUN_0800492c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08004cce(param_1,&DAT_08007400,param_3,param_4,param_4);
  uVar2 = (uint)(iVar1 << 0xc) >> 0x1b;
  if (0x10 < uVar2 - 1) {
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x08004948>>FUN_08004948>>////

undefined4 FUN_08004948(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08004cce(param_1,&DAT_080074b4,param_3,param_4,param_4);
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


////>>0x08004974>>FUN_08004974>>////



void FUN_08004974(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = *param_1;
  if (iVar3 == 0x40012400) {
    uVar2 = _DAT_40021018 | 0x200;
    iVar3 = 0x200;
    _DAT_40021018 = uVar2;
  }
  else {
    uVar2 = 0x40012800;
    if (iVar3 == 0x40012800) {
      uVar2 = _DAT_40021018 | 0x400;
      iVar3 = 0x400;
      _DAT_40021018 = uVar2;
    }
  }
  uVar1 = FUN_08004884((uint)((int)(char)DAT_20000080 << 0x18) >> 0x1c,param_2,uVar2,iVar3);
  local_18 = 1 << (DAT_20000080 & 0xf) & 0xffff;
  local_14 = 3;
  local_10 = 0;
  FUN_08002624(uVar1,&local_18);
  return;
}


////>>0x080049f0>>FUN_080049f0>>////



void FUN_080049f0(int *param_1)

{
  if (*param_1 != 0x40012400) {
    if (*param_1 == 0x40012800) {
      _DAT_4002100c = _DAT_4002100c & 0xfffffbff;
      _DAT_40021018 = _DAT_40021018 & 0xfffffbff;
    }
    return;
  }
  _DAT_4002100c = _DAT_4002100c & 0xfffffdff;
  _DAT_40021018 = _DAT_40021018 & 0xfffffdff;
  return;
}


////>>0x08004a4c>>FUN_08004a4c>>////

undefined2 FUN_08004a4c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 local_46;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  
  FUN_080061e0(&local_38,0,0x30);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_46 = 0;
  local_38 = FUN_08004c78(param_1,&DAT_08007400);
  if (local_38 == 0) {
    local_46 = 0;
  }
  else {
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0xe0000;
    local_10 = 0;
    local_28 = 1;
    local_20 = 0;
    DAT_20000080 = (undefined)param_1;
    iVar1 = FUN_0800213c(&local_38);
    if (iVar1 == 0) {
      local_44 = FUN_0800492c(param_1);
      if (local_44 < 0x12) {
        local_40 = 1;
        local_3c = 2;
        iVar1 = FUN_08001e48(&local_38,&local_44);
        if (iVar1 == 0) {
          iVar1 = FUN_08002384(&local_38);
          if (iVar1 == 0) {
            iVar1 = FUN_08002004(&local_38);
            if (iVar1 == 0) {
              iVar1 = FUN_08001cd0(&local_38,10);
              if (iVar1 == 0) {
                uVar2 = FUN_08001f80(&local_38);
                if ((uVar2 & 0x200) != 0) {
                  local_46 = FUN_08001e40(&local_38);
                }
                iVar1 = FUN_08002348(&local_38);
                if (iVar1 == 0) {
                  iVar1 = FUN_0800224c(&local_38);
                  if (iVar1 != 0) {
                    local_46 = 0;
                  }
                }
                else {
                  local_46 = 0;
                }
              }
              else {
                local_46 = 0;
              }
            }
            else {
              local_46 = 0;
            }
          }
          else {
            local_46 = 0;
          }
        }
        else {
          local_46 = 0;
        }
      }
      else {
        local_46 = 0;
      }
    }
    else {
      local_46 = 0;
    }
  }
  return local_46;
}


////>>0x08004b34>>FUN_08004b34>>////

void FUN_08004b34(void)

{
  FUN_08004d90();
  return;
}


////>>0x08004b3c>>FUN_08004b3c>>////

void FUN_08004b3c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int local_50 [17];
  
  local_50[0] = FUN_08004c78(param_1,&DAT_080074b4);
  if ((local_50[0] != 0) &&
     ((((iVar1 = FUN_08004948(param_1), iVar1 == 0 || (iVar1 == 4)) || (iVar1 == 8)) ||
      ((iVar1 == 0xc || (iVar1 == 0x18)))))) {
    uVar2 = FUN_08004cce(param_1,&DAT_080074b4);
    if ((uVar2 & 0x100000) == 0) {
      FUN_080040b0(local_50,iVar1);
    }
    else {
      FUN_0800412c(local_50,iVar1);
    }
    FUN_08003ed8(local_50);
  }
  return;
}


////>>0x08004b94>>FUN_08004b94>>////

void FUN_08004b94(void)

{
  FUN_08001cc4();
  return;
}


////>>0x08004b9c>>FUN_08004b9c>>////

void FUN_08004b9c(void)

{
  return;
}


////>>0x08004b9e>>FUN_08004b9e>>////

void FUN_08004b9e(void)

{
  FUN_08001cac();
  FUN_08002582();
  FUN_08004b9c();
  return;
}


////>>0x08004bb0>>FUN_08004bb0>>////



void FUN_08004bb0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = FUN_08004884((param_1 << 0x18) >> 0x1c);
  local_20 = 1 << (param_1 & 0xf) & 0xffff;
  local_14 = 3;
  _DAT_40021018 = _DAT_40021018 | 1;
  if ((param_1 - 0xd & 0xff) < 2) {
    _DAT_40010004 = _DAT_40010004 & 0xf8ffffff | 0x4000000;
  }
  if (((param_1 == 0xf) || (param_1 == 0x13)) || (param_1 == 0x14)) {
    _DAT_40010004 = _DAT_40010004 & 0xf8ffffff | 0x2000000;
  }
  local_1c = param_2;
  local_18 = param_3;
  FUN_08002624(uVar1,&local_20);
  return;
}


////>>0x08004c30>>FUN_08004c30>>////

void FUN_08004c30(undefined4 param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    FUN_0800281e(param_1,param_2,0,param_4,param_4);
    return;
  }
  FUN_0800281e(param_1,param_2,1,param_4,param_4);
  return;
}


////>>0x08004c48>>FUN_08004c48>>////

void FUN_08004c48(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08002810(param_1,param_2,param_3,param_4,param_4);
  return;
}


////>>0x08004c52>>FUN_08004c52>>////

void FUN_08004c52(void)

{
  FUN_08001c88();
  FUN_08001b48();
  return;
}


////>>0x08004c5e>>FUN_08004c5e>>////

undefined4 FUN_08004c5e(int param_1,char *param_2)

{
  while( true ) {
    if (*param_2 == -1) {
      return 0;
    }
    if (*param_2 == param_1) break;
    param_2 = param_2 + 0xc;
  }
  return *(undefined4 *)(param_2 + 4);
}


////>>0x08004c78>>FUN_08004c78>>////

undefined4 FUN_08004c78(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != -1) {
    uVar1 = FUN_08004c5e();
    return uVar1;
  }
  return 0;
}


////>>0x08004c8a>>FUN_08004c8a>>////

int FUN_08004c8a(int param_1,char *param_2)

{
  while( true ) {
    if (*(int *)(param_2 + 4) == 0) {
      return -1;
    }
    if (*(int *)(param_2 + 4) == param_1) break;
    param_2 = param_2 + 0xc;
  }
  return (int)*param_2;
}


////>>0x08004ca2>>FUN_08004ca2>>////

undefined4 FUN_08004ca2(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_08004c8a();
    return uVar1;
  }
  return 0xffffffff;
}


////>>0x08004cb2>>FUN_08004cb2>>////

undefined4 FUN_08004cb2(int param_1,char *param_2)

{
  while( true ) {
    if (*param_2 == -1) {
      return 0xffffffff;
    }
    if (*param_2 == param_1) break;
    param_2 = param_2 + 0xc;
  }
  return *(undefined4 *)(param_2 + 8);
}


////>>0x08004cce>>FUN_08004cce>>////

undefined4 FUN_08004cce(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  uVar1 = FUN_08004cb2();
  return uVar1;
}


////>>0x08004ce2>>FUN_08004ce2>>////

undefined4 FUN_08004ce2(int param_1,char *param_2)

{
  if (param_1 == -1) {
    return 0;
  }
  while( true ) {
    if (*param_2 == -1) {
      return 0;
    }
    if (param_1 == *param_2) break;
    param_2 = param_2 + 0xc;
  }
  return 1;
}


////>>0x08004d06>>FUN_08004d06>>////

int FUN_08004d06(int param_1,int param_2)

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


////>>0x08004d18>>FUN_08004d18>>////

void FUN_08004d18(void)

{
  if (DAT_20000260 != (code *)0x0) {
    (*DAT_20000260)(DAT_20000278);
  }
  return;
}


////>>0x08004d40>>FUN_08004d40>>////

void FUN_08004d40(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08004d44>>FUN_08004d44>>////



void FUN_08004d44(void)

{
  _DAT_40021000 = _DAT_40021000 & 0xfef2ffff | 1;
  _DAT_40021004 = _DAT_40021004 & 0xf8800000;
  _DAT_40021008 = 0x9f0000;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x08004d90>>FUN_08004d90>>////



void FUN_08004d90(int *param_1)

{
  if (*param_1 == 0x40012c00) {
    _DAT_40021018 = _DAT_40021018 & 0xfffff7ff;
  }
  if (*param_1 == 0x40000000) {
    _DAT_4002101c = _DAT_4002101c & 0xfffffffe;
  }
  if (*param_1 == 0x40000400) {
    _DAT_4002101c = _DAT_4002101c & 0xfffffffd;
  }
  if (*param_1 == 0x40000800) {
    _DAT_4002101c = _DAT_4002101c & 0xfffffffb;
  }
  return;
}


////>>0x08004df4>>FUN_08004df4>>////

int FUN_08004df4(int param_1)

{
  return param_1 + -4;
}


////>>0x08004df8>>FUN_08004df8>>////

void FUN_08004df8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08004df4();
  if ((*(code **)(iVar1 + 0x4c) != (code *)0x0) && (*(char *)(param_1 + 0x1c) == '\x01')) {
    (**(code **)(iVar1 + 0x4c))(iVar1,0);
  }
  return;
}


////>>0x08004e12>>FUN_08004e12>>////

void FUN_08004e12(void)

{
  int iVar1;
  
  iVar1 = FUN_08004df4();
  if (*(code **)(iVar1 + 0x48) != (code *)0x0) {
    (**(code **)(iVar1 + 0x48))();
  }
  return;
}


////>>0x08004e20>>FUN_08004e20>>////

void FUN_08004e20(void)

{
  if (DAT_2000027c != 0) {
    FUN_08003f18();
  }
  return;
}


////>>0x08004e70>>FUN_08004e70>>////

int FUN_08004e70(int param_1)

{
  return param_1 + -4;
}


////>>0x08004e74>>FUN_08004e74>>////

void FUN_08004e74(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_08004e70();
  if (param_3 == *(int *)(param_1 + 0xc)) {
    if (param_2 == 0) {
      *(undefined *)(iVar1 + 0x88) = 0;
      *(undefined *)(iVar1 + 0x5c) = 0;
      if (*(code **)(iVar1 + 100) != (code *)0x0) {
        (**(code **)(iVar1 + 100))();
      }
      FUN_08002af8(param_1,iVar1 + 0x68,*(undefined *)(iVar1 + 0x88),8);
      return;
    }
    *(undefined *)(iVar1 + 0x5c) = 1;
    FUN_08002b84(param_1,iVar1 + 0x68,0x20,8,param_4);
  }
  return;
}


////>>0x08004ec4>>FUN_08004ec4>>////

void FUN_08004ec4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08004e70();
  if (((*(code **)(iVar1 + 0x60) != (code *)0x0) && (*(char *)(iVar1 + 0x5c) == '\x01')) &&
     (*(char *)(iVar1 + 0x2c) != ' ')) {
    (**(code **)(iVar1 + 0x60))(iVar1 + 0x68);
  }
  FUN_08002c10(param_1);
  return;
}


////>>0x08004ef4>>FUN_08004ef4>>////

void FUN_08004ef4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_08004e70();
  if (*(char *)(iVar1 + 0x5d) == '\0') {
    FUN_08002c10(param_1);
  }
  return;
}


////>>0x08004f4c>>FUN_08004f4c>>////



void FUN_08004f4c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_08004c78((int)*(char *)(param_1 + 0x16),&DAT_0800764c);
    iVar2 = FUN_08004c78((int)*(char *)((int)param_1 + 0x59),&DAT_08007604);
    if ((iVar2 == 0) || (iVar1 == 0)) {
      FUN_080068f0("ERROR: at least one UART pin has no peripheral\n",iVar2);
    }
    else {
      iVar1 = FUN_08004d06(iVar1);
      *param_1 = iVar1;
      if (iVar1 == 0) {
        FUN_080068f0("ERROR: U(S)ART pins mismatch\n");
      }
      else {
        if (iVar1 == 0x40013800) {
          _DAT_4002100c = _DAT_4002100c & 0xffffbfff;
          _DAT_40021018 = _DAT_40021018 | 0x4000;
          *(undefined *)(param_1 + 0x11) = 0;
          *(undefined *)((int)param_1 + 0x5a) = 0x25;
        }
        else if (iVar1 == 0x40004400) {
          _DAT_40021010 = _DAT_40021010 & 0xfffdffff;
          _DAT_4002101c = _DAT_4002101c | 0x20000;
          *(undefined *)(param_1 + 0x11) = 1;
          *(undefined *)((int)param_1 + 0x5a) = 0x26;
        }
        else if (iVar1 == 0x40004800) {
          _DAT_40021010 = _DAT_40021010 & 0xfffbffff;
          _DAT_4002101c = _DAT_4002101c | 0x40000;
          *(undefined *)(param_1 + 0x11) = 2;
          *(undefined *)((int)param_1 + 0x5a) = 0x27;
        }
        uVar3 = FUN_08004884((uint)((int)*(char *)((int)param_1 + 0x59) << 0x18) >> 0x1c);
        uVar4 = FUN_08004cce((int)*(char *)((int)param_1 + 0x59),&DAT_08007604);
        local_20 = 1 << (*(byte *)((int)param_1 + 0x59) & 0xf) & 0xffff;
        local_1c = (uVar4 >> 3 & 1) << 4 | uVar4 & 7;
        local_18 = (uVar4 << 0x1a) >> 0x1e;
        _DAT_40021018 = _DAT_40021018 | 1;
        switch((uVar4 << 0x11) >> 0x19) {
        case 1:
          _DAT_40010004 = _DAT_40010004 | 0x7000001;
          break;
        case 2:
          _DAT_40010004 = _DAT_40010004 & 0xfffffffe | 0x7000000;
          break;
        case 3:
          _DAT_40010004 = _DAT_40010004 | 0x7000002;
          break;
        case 4:
          _DAT_40010004 = _DAT_40010004 & 0xfffffffd | 0x7000000;
          break;
        case 5:
          _DAT_40010004 = _DAT_40010004 | 0x7000004;
          break;
        case 6:
          _DAT_40010004 = _DAT_40010004 & 0xfffffffb | 0x7000000;
          break;
        case 7:
          _DAT_40010004 = _DAT_40010004 | 0x7000008;
          break;
        case 8:
          _DAT_40010004 = _DAT_40010004 & 0xfffffff7 | 0x7000000;
          break;
        case 9:
          _DAT_40010004 = _DAT_40010004 | 0x7000030;
          break;
        case 10:
          _DAT_40010004 = _DAT_40010004 & 0xffffffcf | 0x7000010;
          break;
        case 0xb:
          _DAT_40010004 = _DAT_40010004 & 0xffffffcf | 0x7000000;
          break;
        case 0xc:
          _DAT_40010004 = _DAT_40010004 | 0x70000c0;
          break;
        case 0xd:
          _DAT_40010004 = _DAT_40010004 & 0xffffff3f | 0x7000040;
          break;
        case 0xe:
          _DAT_40010004 = _DAT_40010004 & 0xffffff3f | 0x7000000;
          break;
        case 0xf:
          _DAT_40010004 = _DAT_40010004 | 0x7000300;
          break;
        case 0x10:
          _DAT_40010004 = _DAT_40010004 & 0xfffffcff | 0x7000200;
          break;
        case 0x11:
          _DAT_40010004 = _DAT_40010004 & 0xfffffcff | 0x7000100;
          break;
        case 0x12:
          _DAT_40010004 = _DAT_40010004 & 0xfffffcff | 0x7000000;
          break;
        case 0x13:
          _DAT_40010004 = _DAT_40010004 | 0x7000c00;
          break;
        case 0x14:
          _DAT_40010004 = _DAT_40010004 & 0xfffff3ff | 0x7000800;
          break;
        case 0x15:
          _DAT_40010004 = _DAT_40010004 & 0xfffff3ff | 0x7000000;
          break;
        case 0x16:
          _DAT_40010004 = _DAT_40010004 | 0x7001000;
          break;
        case 0x17:
          _DAT_40010004 = _DAT_40010004 & 0xffffefff | 0x7000000;
          break;
        case 0x1b:
          _DAT_40010004 = _DAT_40010004 | 0x7008000;
          break;
        case 0x1c:
          _DAT_40010004 = _DAT_40010004 & 0xffff7fff | 0x7000000;
          break;
        case 0x21:
          _DAT_40010004 = _DAT_40010004 & 0xf8ffffff;
          break;
        case 0x22:
          _DAT_40010004 = _DAT_40010004 & 0xf8ffffff | 0x1000000;
          break;
        case 0x23:
          _DAT_40010004 = _DAT_40010004 & 0xf8ffffff | 0x2000000;
          break;
        case 0x24:
          _DAT_40010004 = _DAT_40010004 & 0xf8ffffff | 0x4000000;
        }
        local_14 = 3;
        FUN_08002624(uVar3,&local_20);
        uVar3 = FUN_08004884((uint)((int)*(char *)(param_1 + 0x16) << 0x18) >> 0x1c);
        uVar4 = FUN_08004cce((int)*(char *)(param_1 + 0x16),&DAT_0800764c);
        local_20 = 1 << (*(byte *)(param_1 + 0x16) & 0xf) & 0xffff;
        local_1c = (uVar4 >> 3 & 1) << 4 | uVar4 & 7;
        local_18 = (uVar4 << 0x1a) >> 0x1e;
        FUN_08002624(uVar3,&local_20);
        (&DAT_2000032c)[*(byte *)(param_1 + 0x11)] = param_1 + 1;
        param_1[1] = *param_1;
        param_1[2] = param_1[0x12];
        param_1[3] = param_1[0x13];
        param_1[4] = param_1[0x14];
        param_1[5] = param_1[0x15];
        param_1[6] = 0xc;
        param_1[7] = 0;
        param_1[8] = 0;
        FUN_0800441a(param_1 + 1);
      }
    }
    return;
  }
  return;
}


////>>0x08005384>>FUN_08005384>>////

void FUN_08005384(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08004c78(2,&DAT_0800764c);
  if (iVar1 != 0) {
    uVar2 = FUN_08004c78(2,&DAT_0800764c);
    DAT_200000e1 = FUN_08004ca2(uVar2,&DAT_08007604);
    DAT_200000e0 = 2;
    DAT_200000d0 = 0x2580;
    DAT_200000dc = 0;
    DAT_200000d4 = 0;
    DAT_200000d8 = 0;
    FUN_08004f4c(&DAT_20000088);
  }
  return;
}


////>>0x080053d4>>FUN_080053d4>>////

uint FUN_080053d4(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_08001cc4();
  iVar2 = FUN_08004c78(2,&DAT_0800764c);
  if (iVar2 == 0) {
    return 0;
  }
  for (uVar3 = 0;
      (uVar3 < 5 &&
      (((&DAT_2000032c)[uVar3] == 0 ||
       (iVar2 = FUN_08004c78(2,&DAT_0800764c), *(int *)(&DAT_2000032c)[uVar3] != iVar2))));
      uVar3 = uVar3 + 1 & 0xff) {
  }
  if (4 < uVar3) {
    if ((4 < DAT_200000cc) && (FUN_08005384(), 4 < DAT_200000cc)) {
      return 0;
    }
    uVar3 = (uint)DAT_200000cc;
  }
  do {
    iVar2 = FUN_08004478((&DAT_2000032c)[uVar3],param_1,param_2 & 0xffff,1000);
    if (iVar2 == 0) {
      return param_2;
    }
    iVar2 = FUN_08001cc4();
  } while ((uint)(iVar2 - iVar1) < 1000);
  return 0;
}


////>>0x0800548c>>FUN_0800548c>>////

bool FUN_0800548c(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_080047e8((&DAT_2000032c)[*(byte *)(param_1 + 0x44)]);
  return (uVar1 & 0x22) == 0x22;
}


////>>0x080054b0>>FUN_080054b0>>////

bool FUN_080054b0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_080047e8((&DAT_2000032c)[*(byte *)(param_1 + 0x44)]);
  return (uVar1 & 0x21) == 0x21;
}


////>>0x080054d4>>FUN_080054d4>>////

undefined4 FUN_080054d4(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_0800548c();
  if (iVar1 == 0) {
    *param_2 = *(undefined *)(param_1 + 0x45);
    FUN_080045a2((&DAT_2000032c)[*(byte *)(param_1 + 0x44)],param_1 + 0x45,1,&DAT_2000032c,param_4);
    return 0;
  }
  return 0xffffffff;
}


////>>0x08005510>>FUN_08005510>>////

void FUN_08005510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_0800548c();
    if (iVar1 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + 0x44);
      *(undefined4 *)(&DAT_200002dc + uVar2 * 4) = param_2;
      *(int *)(&DAT_200002f0 + uVar2 * 4) = param_1;
      FUN_08002494((int)*(char *)(param_1 + 0x5a),0,1,uVar2,param_4);
      FUN_080024f8((int)*(char *)(param_1 + 0x5a));
      FUN_080045a2((&DAT_2000032c)[*(byte *)(param_1 + 0x44)],param_1 + 0x45,1);
    }
    return;
  }
  return;
}


////>>0x08005568>>FUN_08005568>>////

void FUN_08005568(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_1 + 0x44);
    *(undefined4 *)(&DAT_20000304 + (uint)bVar1 * 4) = param_2;
    *(int *)(&DAT_20000318 + (uint)bVar1 * 4) = param_1;
    FUN_08002494((int)*(char *)(param_1 + 0x5a),0,2);
    FUN_080024f8((int)*(char *)(param_1 + 0x5a));
    FUN_0800455a((&DAT_2000032c)[*(byte *)(param_1 + 0x44)],
                 *(int *)(param_1 + 100) + (uint)*(ushort *)(param_1 + 0x6a),1);
    return;
  }
  return;
}


////>>0x080055bc>>FUN_080055bc>>////

uint FUN_080055bc(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 5;
  }
  else {
    uVar1 = 0;
    while( true ) {
      if (4 < uVar1) {
        return uVar1;
      }
      if (param_1 == (&DAT_2000032c)[uVar1]) break;
      uVar1 = uVar1 + 1 & 0xff;
    }
  }
  return uVar1;
}


////>>0x080055e0>>FUN_080055e0>>////

void FUN_080055e0(void)

{
  uint uVar1;
  
  uVar1 = FUN_080055bc();
  if (uVar1 < 5) {
    (**(code **)(&DAT_200002dc + uVar1 * 4))(*(undefined4 *)(&DAT_200002f0 + uVar1 * 4));
  }
  return;
}


////>>0x08005604>>FUN_08005604>>////

void FUN_08005604(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_080055bc();
  iVar3 = *(int *)(&DAT_20000318 + uVar1 * 4);
  if ((uVar1 < 5) && (iVar2 = (**(code **)(&DAT_20000304 + uVar1 * 4))(iVar3), iVar2 != -1)) {
    FUN_0800455a((&DAT_2000032c)[*(byte *)(iVar3 + 0x44)],
                 *(int *)(iVar3 + 100) + (uint)*(ushort *)(iVar3 + 0x6a),1);
  }
  return;
}


////>>0x08005650>>FUN_08005650>>////

void FUN_08005650(void)

{
  return;
}


////>>0x080056d8>>FUN_080056d8>>////

undefined * FUN_080056d8(int param_1)

{
  undefined *puVar1;
  
  if (DAT_20000340 == (undefined *)0x0) {
    DAT_20000340 = &DAT_200006a8;
  }
  puVar1 = DAT_20000340;
  if (DAT_20000340 + param_1 <= &stack0x00000000) {
    DAT_20000340 = DAT_20000340 + param_1;
    return puVar1;
  }
  DAT_200006a4 = 0xc;
  return (undefined *)0xffffffff;
}


////>>0x08005714>>FUN_08005714>>////

undefined4 FUN_08005714(void)

{
  return 0xffffffff;
}


////>>0x0800571a>>FUN_0800571a>>////

undefined4 FUN_0800571a(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


////>>0x08005724>>FUN_08005724>>////

undefined4 FUN_08005724(void)

{
  return 1;
}


////>>0x08005728>>FUN_08005728>>////

undefined4 FUN_08005728(void)

{
  return 0;
}


////>>0x0800572c>>FUN_0800572c>>////

undefined4 FUN_0800572c(void)

{
  return 0;
}


////>>0x08005730>>FUN_08005730>>////

void FUN_08005730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_080053d4(param_2,param_3,param_3,param_4,param_4);
  return;
}


////>>0x0800573c>>FUN_0800573c>>////

void FUN_0800573c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08005740>>FUN_08005740>>////

undefined4 FUN_08005740(void)

{
  DAT_200006a4 = 0x16;
  return 0xffffffff;
}


////>>0x08005750>>FUN_08005750>>////

undefined4 FUN_08005750(void)

{
  return 1;
}


////>>0x08005754>>FUN_08005754>>////

uint FUN_08005754(uint param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  if (param_1 < 0xe) {
    if (param_1 + 0x2e < 0x3c) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = param_1 < 0x3c;
  }
  if (bVar1) {
    if (param_1 < 0xe) {
      param_1 = param_1 + 0x2e;
    }
    cVar2 = (&DAT_080076f0)[param_1];
  }
  else {
    cVar2 = -1;
  }
  if (cVar2 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_08004a4c();
    if (DAT_200000f4 != 0xc) {
      if (DAT_200000f4 < 0xc) {
        return uVar3 >> (0xc - DAT_200000f4 & 0xff);
      }
      return uVar3 << (DAT_200000f4 - 0xc & 0xff);
    }
  }
  return uVar3;
}


////>>0x080057b4>>FUN_080057b4>>////

void FUN_080057b4(uint param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  if (param_1 < 0x3c) {
    iVar3 = (int)(char)(&DAT_080076f0)[param_1];
    puVar2 = &DAT_080076f0;
  }
  else {
    iVar3 = -1;
    puVar2 = param_4;
  }
  if (iVar3 != -1) {
    iVar1 = FUN_080047f4(iVar3,&DAT_20000344,param_3,puVar2,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_08004ce2(iVar3,&DAT_080074b4);
      if (iVar1 != 0) {
        FUN_08004b3c(iVar3);
      }
      FUN_08004828(iVar3,&DAT_20000344);
    }
    switch(param_2) {
    case 0:
      FUN_08004bb0(iVar3,0);
      break;
    case 1:
      FUN_08004bb0(iVar3,1,0);
      break;
    case 2:
      FUN_08004bb0(iVar3,0,1);
      break;
    case 3:
      FUN_08004bb0(iVar3,0,2);
    }
    FUN_0800480a(iVar3,&DAT_20000358);
  }
  return;
}


////>>0x08005848>>FUN_08005848>>////

void FUN_08005848(uint param_1,undefined4 param_2,undefined4 param_3,undefined *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  
  if (param_1 < 0x3c) {
    uVar4 = (uint)(char)(&DAT_080076f0)[param_1];
    puVar3 = &DAT_080076f0;
  }
  else {
    uVar4 = 0xffffffff;
    puVar3 = param_4;
  }
  if ((uVar4 != 0xffffffff) &&
     (iVar1 = FUN_080047f4(uVar4,&DAT_20000358,param_3,puVar3,param_4), iVar1 != 0)) {
    uVar2 = FUN_08004848((uVar4 << 0x18) >> 0x1c);
    FUN_08004c30(uVar2,1 << (uVar4 & 0xf) & 0xffff,param_2);
  }
  return;
}


////>>0x08005890>>FUN_08005890>>////

char FUN_08005890(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 < 0x3c) {
    uVar4 = (uint)(char)(&DAT_080076f0)[param_1];
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (uVar4 == 0xffffffff) {
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_080047f4(uVar4,&DAT_20000358);
    if (iVar2 == 0) {
      cVar1 = '\0';
    }
    else {
      uVar3 = FUN_08004848((uVar4 << 0x18) >> 0x1c);
      cVar1 = FUN_08004c48(uVar3,1 << (uVar4 & 0xf) & 0xffff);
    }
  }
  if (cVar1 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}


////>>0x080058e0>>FUN_080058e0>>////

void FUN_080058e0(void)

{
  FUN_08004b94();
  return;
}


////>>0x080058e8>>FUN_080058e8>>////

void FUN_080058e8(void)

{
  return;
}


////>>0x0800591e>>FUN_0800591e>>////

ushort FUN_0800591e(int param_1)

{
  return (*(short *)(param_1 + 0x134) + 0x40) - *(short *)(param_1 + 0x136) & 0x3f;
}


////>>0x0800598a>>FUN_0800598a>>////

void FUN_0800598a(int param_1)

{
  int iVar1;
  ushort uVar2;
  undefined local_9;
  
  iVar1 = FUN_080054d4(param_1,&local_9);
  if ((iVar1 == 0) &&
     (uVar2 = *(short *)(param_1 + 0x60) + 1U & 0x3f, uVar2 != *(ushort *)(param_1 + 0x62))) {
    *(undefined *)(*(int *)(param_1 + 0x5c) + (uint)*(ushort *)(param_1 + 0x60)) = local_9;
    *(ushort *)(param_1 + 0x60) = uVar2;
  }
  return;
}


////>>0x08005a18>>FUN_08005a18>>////

/* WARNING: Removing unreachable block (ram,0x08005a1e) */
/* WARNING: Removing unreachable block (ram,0x08005a30) */
/* WARNING: Removing unreachable block (ram,0x08005a26) */
/* WARNING: Removing unreachable block (ram,0x08005a38) */

void FUN_08005a18(void)

{
  return;
}


////>>0x08005a44>>FUN_08005a44>>////

void FUN_08005a44(int param_1)

{
  *(int *)(param_1 + 0x130) = param_1 + 0x11;
  *(undefined2 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x136) = 0;
  *(int *)(param_1 + 0x138) = param_1 + 0x51;
  *(undefined2 *)(param_1 + 0x13c) = 0;
  *(undefined2 *)(param_1 + 0x13e) = 0;
  return;
}


////>>0x08005a68>>FUN_08005a68>>////

void FUN_08005a68(int param_1,undefined4 param_2,byte param_3)

{
  uint extraout_r1;
  char *pcVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  char unaff_r4;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  *(byte *)(param_1 + 0x140) = param_3;
  bVar2 = param_3 & 7;
  if (bVar2 == 4) {
    iVar3 = 7;
  }
  else if (bVar2 == 6) {
    iVar3 = 8;
  }
  else if (bVar2 == 2) {
    iVar3 = 6;
  }
  else {
    iVar3 = 0;
  }
  if ((param_3 & 0x30) == 0x30) {
    *(undefined4 *)(param_1 + 0x128) = 0x600;
    iVar3 = iVar3 + 1;
  }
  else if ((param_3 & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0x400;
    iVar3 = iVar3 + 1;
  }
  if ((param_3 & 8) == 0) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x124) = 0x2000;
  }
  if (iVar3 == 8) {
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  else if (iVar3 == 9) {
    *(undefined4 *)(param_1 + 0x120) = 0x1000;
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    FUN_08004f4c(param_1 + 0xd4);
    FUN_08005510(param_1 + 0xd4,0x800598b);
    return;
  }
  pcVar1 = "void HardwareSerial::begin(long unsigned int, byte)";
  UNRECOVERED_JUMPTABLE = (code *)0x8005b12;
  FUN_0800611c("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/cores/arduino/HardwareSerial.cpp"
               ,299,"void HardwareSerial::begin(long unsigned int, byte)","databits!=0");
  pbVar4 = *(byte **)(extraout_r1 + unaff_r6);
  pcVar1[0x1e] = unaff_r4;
  *(undefined *)(*pbVar4 + 0x1e) = 0;
  if (extraout_r1 < 0x3c) {
    uRam0000012d = (&DAT_080076f0)[extraout_r1];
  }
  else {
    uRam0000012d = 0xff;
  }
                    /* WARNING: Could not recover jumptable at 0x08005b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08005b24>>FUN_08005b24>>////

void FUN_08005b24(int param_1,uint param_2)

{
  undefined uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 < 0x3c) {
    uVar1 = (&DAT_080076f0)[param_2];
  }
  else {
    uVar1 = 0xff;
  }
  *(undefined *)(param_1 + 0x12d) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x08005b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08005b3c>>FUN_08005b3c>>////

void FUN_08005b3c(int param_1,uint param_2)

{
  undefined uVar1;
  
  if (param_2 < 0x3c) {
    uVar1 = (&DAT_080076f0)[param_2];
  }
  else {
    uVar1 = 0xff;
  }
  *(undefined *)(param_1 + 300) = uVar1;
  return;
}


////>>0x08005b54>>FUN_08005b54>>////

undefined4 *
FUN_08005b54(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  
  param_1[1] = 0;
  param_1[2] = 1000;
  *param_1 = &PTR_LAB_080059c8_1_08007804;
  if (param_1 == (undefined4 *)&DAT_2000036c) {
    FUN_08005b24(&DAT_2000036c,0,param_3,&DAT_2000036c,param_4);
    FUN_08005b3c(&DAT_2000036c,1);
  }
  else {
    uVar1 = FUN_08004ca2(param_2,&DAT_08007604);
    *(undefined *)((int)param_1 + 0x12d) = uVar1;
    uVar1 = FUN_08004ca2(param_2,&DAT_0800764c);
    *(undefined *)(param_1 + 0x4b) = uVar1;
  }
  FUN_08005a44(param_1);
  return param_1;
}


////>>0x08005bb0>>FUN_08005bb0>>////

void FUN_08005bb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    FUN_08005b54(&DAT_2000036c,0x40004400,param_3,0xffff,param_4);
  }
  return;
}


////>>0x08005c1c>>FUN_08005c1c>>////

void FUN_08005c1c(undefined4 *param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *param_1 = &DAT_08007858;
  *(undefined *)(param_1 + 1) = param_2;
  *(undefined *)((int)param_1 + 5) = param_3;
  *(undefined *)((int)param_1 + 6) = param_4;
  *(undefined *)((int)param_1 + 7) = param_5;
  return;
}


////>>0x08005c38>>FUN_08005c38>>////

void FUN_08005c38(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    FUN_08005c1c(&DAT_200004b0,0,0,0,0);
    return;
  }
  return;
}


////>>0x08005c96>>FUN_08005c96>>////

undefined4 FUN_08005c96(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_08000178(param_2);
    uVar1 = (**(code **)(*param_1 + 4))(param_1,param_2,uVar1,*(code **)(*param_1 + 4),param_4);
    return uVar1;
  }
  return 0;
}


////>>0x08005cb6>>FUN_08005cb6>>////

void FUN_08005cb6(undefined4 *param_1)

{
  (**(code **)*param_1)();
  return;
}


////>>0x08005cc0>>FUN_08005cc0>>////

void FUN_08005cc0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 4))(param_1,&DAT_0800786c,2,*(code **)(*param_1 + 4),param_4);
  return;
}


////>>0x08005cd4>>FUN_08005cd4>>////

int FUN_08005cd4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08005c96();
  iVar2 = FUN_08005cc0(param_1);
  return iVar2 + iVar1;
}


////>>0x08005ce8>>FUN_08005ce8>>////

undefined4 FUN_08005ce8(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_15 [9];
  
  local_15[1] = 0;
  if ((int)param_3 < 2) {
    param_3 = 10;
  }
  pcVar5 = local_15 + 1;
  do {
    uVar4 = param_2 / param_3;
    uVar3 = (param_2 & 0xff) - (uVar4 * param_3 & 0xff) & 0xff;
    pcVar5 = pcVar5 + -1;
    cVar1 = (char)uVar3;
    if (uVar3 < 10) {
      cVar1 = cVar1 + '0';
    }
    else {
      cVar1 = cVar1 + '7';
    }
    *pcVar5 = cVar1;
    param_2 = uVar4;
  } while (uVar4 != 0);
  if (pcVar5 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_08000178(pcVar5);
    uVar2 = (**(code **)(*param_1 + 4))(param_1,pcVar5,uVar2);
  }
  return uVar2;
}


////>>0x08005d42>>FUN_08005d42>>////

int FUN_08005d42(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar1 = (**(code **)*param_1)(param_1,param_2 & 0xff);
    return iVar1;
  }
  if (param_3 != 10) {
    iVar1 = FUN_08005ce8(param_1,param_2,param_3 & 0xff);
    return iVar1;
  }
  if (-1 < (int)param_2) {
    iVar1 = FUN_08005ce8(param_1,param_2,10);
    return iVar1;
  }
  iVar1 = FUN_08005cb6(param_1,0x2d);
  iVar2 = FUN_08005ce8(param_1,-param_2,10);
  return iVar2 + iVar1;
}


////>>0x08005d82>>FUN_08005d82>>////

void FUN_08005d82(void)

{
  FUN_08005d42();
  return;
}


////>>0x08005d8a>>FUN_08005d8a>>////

void FUN_08005d8a(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  if (param_3 != 0) {
    FUN_08005ce8(param_1,param_2,param_3 & 0xff);
    return;
  }
  (**(code **)*param_1)(param_1,param_2 & 0xff,0,*(code **)*param_1,param_4);
  return;
}


////>>0x08005da8>>FUN_08005da8>>////

int FUN_08005da8(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_08000a2c(param_3,param_4,param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = FUN_08000a2c(param_3,param_4 & 0x7fffffff,0xffffffff,0x7fefffff);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_080009f0(param_3,param_4 & 0x7fffffff,0xffffffff,0x7fefffff), iVar1 == 0)) {
      iVar1 = FUN_08005c96(param_1,&DAT_08007860);
    }
    else {
      iVar1 = FUN_08000a18(param_3,param_4,0xe0000000,0x41efffff);
      if (iVar1 == 0) {
        iVar1 = FUN_080009dc(param_3,param_4,0xe0000000,0xc1efffff);
        if (iVar1 == 0) {
          iVar1 = FUN_080009dc(param_3,param_4,0,0);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = FUN_08005cb6(param_1,0x2d);
            param_4 = param_4 + 0x80000000;
          }
          uVar5 = 0x3fe0000000000000;
          for (bVar4 = 0; uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20), bVar4 < param_5;
              bVar4 = bVar4 + 1) {
            uVar5 = FUN_0800074c((int)uVar5,uVar2,0,0x40240000);
          }
          uVar5 = FUN_08000194(param_3,param_4,(int)uVar5,uVar2);
          uVar2 = FUN_08000aa8();
          uVar6 = FUN_0800040c();
          uVar5 = FUN_08000190((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                               (int)((ulonglong)uVar6 >> 0x20));
          iVar3 = FUN_08005d8a(param_1,uVar2,10);
          iVar1 = iVar1 + iVar3;
          if (param_5 != 0) {
            iVar3 = FUN_08005c96(param_1,&DAT_08007868);
            iVar1 = iVar1 + iVar3;
          }
          while (param_5 != 0) {
            uVar5 = FUN_080004f8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x40240000);
            uVar2 = FUN_08000a58();
            iVar3 = FUN_08005d82(param_1,uVar2,10);
            iVar1 = iVar1 + iVar3;
            uVar6 = FUN_0800042c(uVar2);
            uVar5 = FUN_08000190((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                                 (int)((ulonglong)uVar6 >> 0x20));
            param_5 = param_5 - 1;
          }
        }
        else {
          iVar1 = FUN_08005c96(param_1,&DAT_08007864);
        }
      }
      else {
        iVar1 = FUN_08005c96(param_1,&DAT_08007864);
      }
    }
  }
  else {
    iVar1 = FUN_08005c96(param_1,&DAT_0800785c);
  }
  return iVar1;
}


////>>0x08005f2c>>FUN_08005f2c>>////

void FUN_08005f2c(void)

{
  FUN_08005da8();
  return;
}


////>>0x08005f40>>FUN_08005f40>>////

int FUN_08005f40(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08005f2c();
  iVar2 = FUN_08005cc0(param_1);
  return iVar2 + iVar1;
}


////>>0x08005f5c>>FUN_08005f5c>>////

void FUN_08005f5c(void)

{
  return;
}


////>>0x08005f5e>>FUN_08005f5e>>////

void FUN_08005f5e(void)

{
  FUN_08002470(3);
  FUN_08001c32();
  return;
}


////>>0x08005f6c>>FUN_08005f6c>>////

void FUN_08005f6c(void)

{
  FUN_08005f5c();
  FUN_08000bcc();
  do {
    FUN_08000cd0();
    FUN_08005a18();
  } while( true );
}


////>>0x08005f8c>>FUN_08005f8c>>////

char FUN_08005f8c(uint param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  for (; param_1 != 1; param_1 = param_1 >> 1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


////>>0x08005fc8>>FUN_08005fc8>>////

void FUN_08005fc8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    DAT_200004b8 = 6;
    DAT_200004c4 = 0;
    DAT_200004cc = 7;
    DAT_200004d8 = 0;
    DAT_200004e0 = 8;
    DAT_200004ec = 0;
    DAT_200004f4 = 9;
    DAT_20000500 = 0;
    DAT_20000508 = 10;
    DAT_20000514 = 0;
    DAT_2000051c = 0x17;
    DAT_20000528 = 0;
    DAT_20000530 = 0x17;
    DAT_2000053c = 0;
    DAT_20000544 = 0x17;
    DAT_20000550 = 0;
    DAT_20000558 = 0x17;
    DAT_20000564 = 0;
    DAT_2000056c = 0x17;
    DAT_20000578 = 0;
    DAT_20000580 = 0x28;
    DAT_2000058c = 0;
    DAT_20000594 = 0x28;
    DAT_200005a0 = 0;
    DAT_200005a8 = 0x28;
    DAT_200005b4 = 0;
    DAT_200005bc = 0x28;
    DAT_200005c8 = 0;
    DAT_200005d0 = 0x28;
    DAT_200005dc = 0;
    DAT_200005e4 = 0x28;
    DAT_200005f0 = 0;
    FUN_08006112(0,&LAB_08005fa0_1,&DAT_20000000,&DAT_200004b8,param_4);
  }
  return;
}


////>>0x080060d4>>FUN_080060d4>>////

void FUN_080060d4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 0xc))();
    return;
  }
  FUN_08007090();
  iVar1 = FUN_08005f8c();
  if ((&DAT_200004c4)[iVar1 * 5] != 0) {
    FUN_080060d4();
  }
  return;
}


////>>0x080060e4>>FUN_080060e4>>////

void FUN_080060e4(void)

{
  int iVar1;
  
  iVar1 = FUN_08005f8c();
  if ((&DAT_200004c4)[iVar1 * 5] != 0) {
    FUN_080060d4();
  }
  return;
}


////>>0x08006112>>FUN_08006112>>////

void FUN_08006112(undefined4 param_1,undefined4 param_2)

{
  FUN_08006158(param_2,param_1);
  return;
}


////>>0x0800611c>>FUN_0800611c>>////

void FUN_0800611c(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(DAT_200000f8 + 0xc);
  uVar4 = param_4;
  if (param_3 == (char *)0x0) goto LAB_08006140;
  pcVar2 = ", function: ";
  do {
    FUN_08006174(uVar1,"assertion \"%s\" failed: file \"%s\", line %d%s%s\n",param_4,param_1,param_2
                 ,pcVar2,param_3,uVar4);
    uVar3 = FUN_08006ac0();
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = (undefined4)uVar3;
LAB_08006140:
    param_3 = "";
    pcVar2 = param_3;
  } while( true );
}


////>>0x08006158>>FUN_08006158>>////

/* WARNING: Removing unreachable block (ram,0x08006160) */

longlong FUN_08006158(undefined4 param_1,uint param_2)

{
  return (ulonglong)param_2 << 0x20;
}


////>>0x08006174>>FUN_08006174>>////

void FUN_08006174(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_08006394(DAT_200000f8,param_1,param_2,&uStack_8,param_1,&uStack_8);
  return;
}


////>>0x08006198>>FUN_08006198>>////

void FUN_08006198(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    (*(code *)(&DAT_08007944)[iVar1])();
  }
  FUN_08007328();
  for (iVar1 = 0; iVar1 != 10; iVar1 = iVar1 + 1) {
    (*(code *)(&DAT_08007944)[iVar1])();
  }
  return;
}


////>>0x080061e0>>FUN_080061e0>>////

void FUN_080061e0(undefined *param_1,undefined param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


////>>0x080061f0>>FUN_080061f0>>////

void FUN_080061f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int **extraout_r1;
  int **ppiVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  if (param_2 == 0) {
    return;
  }
  ppiVar5 = (int **)(param_2 + -4);
  if (*(int *)(param_2 + -4) < 0) {
    ppiVar5 = (int **)((int)ppiVar5 + *(int *)(param_2 + -4));
  }
  FUN_08006eac();
  ppiVar2 = (int **)&DAT_200005f8;
  if (DAT_200005f8 == (int **)0x0) {
    ppiVar5[1] = (int *)0x0;
    ppiVar1 = extraout_r1;
    DAT_200005f8 = ppiVar5;
  }
  else {
    ppiVar2 = DAT_200005f8;
    if (ppiVar5 < DAT_200005f8) {
      ppiVar1 = (int **)*ppiVar5;
      ppiVar2 = (int **)((int)ppiVar5 + (int)ppiVar1);
      if (DAT_200005f8 == ppiVar2) {
        piVar3 = *DAT_200005f8;
        DAT_200005f8 = (int **)DAT_200005f8[1];
        ppiVar2 = (int **)((int)piVar3 + (int)ppiVar1);
        *ppiVar5 = (int *)ppiVar2;
      }
      ppiVar5[1] = (int *)DAT_200005f8;
      DAT_200005f8 = ppiVar5;
    }
    else {
      do {
        ppiVar4 = ppiVar2;
        ppiVar2 = (int **)ppiVar4[1];
        if (ppiVar2 == (int **)0x0) break;
      } while (ppiVar2 <= ppiVar5);
      ppiVar1 = (int **)*ppiVar4;
      if ((int **)((int)ppiVar4 + (int)ppiVar1) == ppiVar5) {
        ppiVar1 = (int **)((int)ppiVar1 + (int)*ppiVar5);
        *ppiVar4 = (int *)ppiVar1;
        if (ppiVar2 == (int **)((int)ppiVar4 + (int)ppiVar1)) {
          piVar3 = *ppiVar2;
          ppiVar2 = (int **)ppiVar2[1];
          ppiVar1 = (int **)((int)ppiVar1 + (int)piVar3);
          *ppiVar4 = (int *)ppiVar1;
          ppiVar4[1] = (int *)ppiVar2;
        }
      }
      else if (ppiVar5 < (int **)((int)ppiVar4 + (int)ppiVar1)) {
        *param_1 = 0xc;
      }
      else {
        ppiVar1 = (int **)((int)ppiVar5 + (int)*ppiVar5);
        if (ppiVar2 == ppiVar1) {
          piVar3 = *ppiVar2;
          ppiVar2 = (int **)ppiVar2[1];
          ppiVar1 = (int **)((int)piVar3 + (int)*ppiVar5);
          *ppiVar5 = (int *)ppiVar1;
        }
        ppiVar5[1] = (int *)ppiVar2;
        ppiVar4[1] = (int *)ppiVar5;
      }
    }
  }
  FUN_08006eae(param_1,ppiVar1,ppiVar2,param_4);
  return;
}


////>>0x08006288>>FUN_08006288>>////

uint FUN_08006288(undefined4 *param_1,uint param_2)

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
    FUN_08006eac();
    puVar1 = DAT_200005f8;
    puVar5 = DAT_200005f8;
    while (puVar3 = puVar1, puVar3 != (uint *)0x0) {
      uVar4 = *puVar3 - uVar6;
      if (-1 < (int)uVar4) {
        if (uVar4 < 0xc) {
          if (puVar5 == puVar3) {
            puVar1 = (uint *)puVar5[1];
            DAT_200005f8 = puVar1;
          }
          else {
            puVar1 = (uint *)puVar3[1];
          }
          if (puVar5 != puVar3) {
            puVar5[1] = (uint)puVar1;
            puVar5 = puVar3;
          }
        }
        else {
          *puVar3 = uVar4;
          *(uint *)((int)puVar3 + uVar4) = uVar6;
          puVar5 = (uint *)((int)puVar3 + uVar4);
        }
        goto LAB_080062ec;
      }
      puVar5 = puVar3;
      puVar1 = (uint *)puVar3[1];
    }
    if (DAT_200005fc == 0) {
      DAT_200005fc = FUN_08006920(param_1);
    }
    puVar1 = (uint *)FUN_08006920(param_1,uVar6);
    if ((puVar1 != (uint *)0xffffffff) &&
       ((puVar5 = (uint *)((int)puVar1 + 3U & 0xfffffffc), puVar1 == puVar5 ||
        (iVar2 = FUN_08006920(param_1,(int)puVar5 - (int)puVar1), iVar2 != -1)))) {
      *puVar5 = uVar6;
LAB_080062ec:
      FUN_08006eae(param_1);
      uVar6 = (int)puVar5 + 0xbU & 0xfffffff8;
      iVar2 = uVar6 - (int)(puVar5 + 1);
      if (iVar2 != 0) {
        *(int *)((int)puVar5 + iVar2) = -iVar2;
        return uVar6;
      }
      return uVar6;
    }
    *param_1 = 0xc;
    FUN_08006eae(param_1);
  }
  return 0;
}


////>>0x08006344>>FUN_08006344>>////

uint FUN_08006344(int param_1,byte param_2,byte **param_3)

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
    FUN_08006cb4();
  }
  if (param_3 == (byte **)&DAT_08007904) {
    param_3 = *(byte ***)(param_1 + 4);
  }
  else if (param_3 == (byte **)&DAT_08007924) {
    param_3 = *(byte ***)(param_1 + 8);
  }
  else if (param_3 == (byte **)&DAT_080078e4) {
    param_3 = *(byte ***)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  pbVar3 = (byte *)(uint)*(ushort *)(param_3 + 3);
  iVar1 = (int)pbVar3 << 0x1c;
  if (((iVar1 < 0) && (pbVar3 = param_3[4], pbVar3 != (byte *)0x0)) ||
     (iVar1 = FUN_080069e4(param_1,param_3,iVar1,pbVar3,pbVar2), iVar1 == 0)) {
    uVar4 = (uint)param_2;
    iVar1 = (int)*param_3 - (int)param_3[4];
    if ((iVar1 < (int)param_3[5]) || (iVar1 = FUN_08006be0(param_1,param_3), iVar1 == 0)) {
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
      iVar1 = FUN_08006be0(param_1,param_3);
      if (iVar1 == 0) {
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}


////>>0x08006370>>FUN_08006370>>////

int FUN_08006370(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

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
    iVar1 = FUN_08006344(param_1,*param_3,param_2,param_4,iVar3);
    param_4 = iVar1 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return iVar1;
}


////>>0x08006394>>FUN_08006394>>////

/* WARNING: Removing unreachable block (ram,0x08006568) */

int FUN_08006394(int param_1,undefined4 *param_2,byte *param_3,int *param_4)

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
    FUN_08006cb4();
  }
  if (param_2 == &DAT_08007904) {
    param_2 = *(undefined4 **)(param_1 + 4);
  }
  else if (param_2 == (undefined4 *)&DAT_08007924) {
    param_2 = *(undefined4 **)(param_1 + 8);
  }
  else if (param_2 == (undefined4 *)&DAT_080078e4) {
    param_2 = *(undefined4 **)(param_1 + 0xc);
  }
  if (((-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1c)) || (param_2[4] == 0)) &&
     (iVar6 = FUN_080069e4(param_1,param_2), iVar6 != 0)) {
    return -1;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar4 = param_3;
LAB_080063d6:
  pbVar5 = pbVar4;
  if (*pbVar5 != 0) goto LAB_0800648c;
  goto LAB_080063e0;
LAB_0800648c:
  pbVar4 = pbVar5 + 1;
  if (*pbVar5 != 0x25) goto LAB_080063d6;
LAB_080063e0:
  iVar6 = (int)pbVar5 - (int)param_3;
  if (iVar6 != 0) {
    iVar1 = FUN_08006370(param_1,param_2,param_3,iVar6);
    if (iVar1 == -1) {
LAB_08006580:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar6;
  }
  if (*pbVar5 == 0) goto LAB_08006580;
  local_88 = 0;
  local_7c = 0;
  local_84 = -1;
  local_80 = 0;
  local_45 = 0;
  local_30 = 0;
  pbVar4 = pbVar5 + 1;
  while( true ) {
    iVar6 = FUN_08006e90("#-0+ ",*pbVar4);
    param_3 = pbVar4 + 1;
    if (iVar6 == 0) break;
    local_88 = 1 << (iVar6 + 0xf7ff8750U & 0xff) | local_88;
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
      goto LAB_080064be;
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
    if (!bVar3) goto LAB_080064be;
  }
  local_7c = iVar6;
LAB_080064be:
  if (*param_3 == 0x2e) {
    if (param_3[1] == 0x2a) {
      param_3 = param_3 + 2;
      piVar2 = local_8c + 1;
      local_84 = *local_8c;
      local_8c = piVar2;
      if (local_84 < 0) {
        local_84 = -1;
      }
    }
    else {
      bVar3 = false;
      iVar6 = 0;
      local_84 = 0;
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
  iVar6 = FUN_08006e90(&DAT_080078b6,*param_3,3);
  if (iVar6 != 0) {
    param_3 = param_3 + 1;
    local_88 = local_88 | 0x40 << (iVar6 + 0xf7ff874aU & 0xff);
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  iVar6 = FUN_08006e90("efgEFG",local_70,6);
  if (iVar6 == 0) {
    unaff_r9 = FUN_080066b0(param_1,&local_88,param_2,0x8006371,&local_8c);
    if (unaff_r9 == -1) goto LAB_08006580;
  }
  else {
    local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
  }
  local_74 = local_74 + unaff_r9;
  pbVar4 = param_3;
  goto LAB_080063d6;
}


////>>0x080065c0>>FUN_080065c0>>////

undefined4
FUN_080065c0(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

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
  uVar4 = uVar3;
  if ((int)(*param_2 << 0x1a) < 0) {
    *(undefined *)((int)param_2 + uVar3 + 0x43) = 0x30;
    uVar4 = uVar3 + 2;
    *(undefined *)((int)param_2 + uVar3 + 0x44) = *(undefined *)((int)param_2 + 0x45);
  }
  iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x43,uVar4);
  if (iVar1 != -1) {
    uVar3 = param_2[3];
    bVar5 = (*param_2 & 6) != 4;
    if (bVar5) {
      uVar3 = 0;
    }
    uVar4 = 0;
    if (!bVar5) {
      uVar3 = uVar3 - *param_3;
    }
    if (!bVar5) {
      uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
    }
    if ((int)param_2[4] < (int)param_2[2]) {
      uVar3 = uVar3 + (param_2[2] - param_2[4]);
    }
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


////>>0x080066b0>>FUN_080066b0>>////

uint FUN_080066b0(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5)

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
          if (bVar1 == 0) goto LAB_0800686a;
          if (bVar1 != 0x58) goto LAB_080066e0;
          *(undefined *)((int)param_2 + 0x45) = 0x58;
          pcVar5 = "0123456789ABCDEF";
LAB_080067fa:
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
LAB_08006790:
          *(undefined *)((int)param_2 + 0x43) = 0;
        }
        else {
          if ((bVar1 != 100) && (bVar1 != 0x69)) goto LAB_080066e0;
          uVar9 = *param_2;
          puVar3 = *param_5;
          if ((uVar9 & 0x80) == 0) {
            *param_5 = puVar3 + 1;
            if ((uVar9 & 0x40) == 0) goto LAB_08006700;
            uVar9 = (uint)(short)*(ushort *)puVar3;
          }
          else {
            *param_5 = puVar3 + 1;
LAB_08006700:
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
          if (uVar9 != 0) goto LAB_0800682e;
LAB_080068dc:
          *(char *)((int)param_2 + 0x42) = *pcVar5;
          pcVar11 = (char *)((int)param_2 + 0x42);
        }
        else {
          *param_2 = *param_2 & 0xfffffffb;
          if (uVar9 == 0) {
            if (uVar10 != 0) goto LAB_080068dc;
          }
          else {
LAB_0800682e:
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
        goto LAB_080067d6;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      *(char *)((int)param_2 + 0x42) = (char)*puVar3;
LAB_08006740:
      pcVar12 = (char *)((int)param_2 + 0x42);
      uVar9 = 1;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 < 0x74) {
          if (bVar1 == 0x6f) {
LAB_08006766:
            uVar9 = *param_2;
            puVar3 = *param_5;
            if ((uVar9 & 0x80) == 0) {
              *param_5 = puVar3 + 1;
              if ((uVar9 & 0x40) == 0) goto LAB_08006774;
              uVar9 = (uint)*(ushort *)puVar3;
            }
            else {
              *param_5 = puVar3 + 1;
LAB_08006774:
              uVar9 = *puVar3;
            }
            if (bVar1 == 0x6f) {
              uVar6 = 8;
            }
            else {
              uVar6 = 10;
            }
            pcVar5 = "0123456789ABCDEF";
            goto LAB_08006790;
          }
          if (bVar1 == 0x70) {
            *param_2 = *param_2 | 0x20;
LAB_08006726:
            pcVar5 = "0123456789abcdef";
            *(undefined *)((int)param_2 + 0x45) = 0x78;
            goto LAB_080067fa;
          }
        }
        else {
          if (bVar1 == 0x75) goto LAB_08006766;
          if (bVar1 == 0x78) goto LAB_08006726;
        }
LAB_080066e0:
        *(byte *)((int)param_2 + 0x42) = bVar1;
        goto LAB_08006740;
      }
      ppcVar8 = (char **)*param_5;
      *param_5 = (uint *)(ppcVar8 + 1);
      pcVar12 = *ppcVar8;
      iVar2 = FUN_08006e90(pcVar12,0,param_2[1]);
      if (iVar2 != 0) {
        param_2[1] = iVar2 - (int)pcVar12;
      }
      uVar9 = param_2[1];
    }
    param_2[4] = uVar9;
    *(undefined *)((int)param_2 + 0x43) = 0;
    goto LAB_080067d6;
  }
  uVar9 = *param_2;
  ppuVar7 = (uint **)*param_5;
  uVar6 = param_2[5];
  if ((uVar9 & 0x80) == 0) {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
    if ((uVar9 & 0x40) == 0) goto LAB_08006856;
    *(short *)puVar3 = (short)uVar6;
  }
  else {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
LAB_08006856:
    *puVar3 = uVar6;
  }
LAB_0800686a:
  param_2[4] = 0;
LAB_080067d6:
  iVar2 = FUN_080065c0(param_1,param_2,local_24,param_3,param_4);
  if ((iVar2 == -1) || (iVar2 = (*param_4)(param_1,param_3,pcVar12,param_2[4]), iVar2 == -1)) {
LAB_080067ea:
    uVar9 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar2 = 0; iVar2 < (int)(param_2[3] - local_24[0]); iVar2 = iVar2 + 1) {
        iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar4 == -1) goto LAB_080067ea;
      }
    }
    uVar9 = param_2[3];
    if ((int)param_2[3] < (int)local_24[0]) {
      uVar9 = local_24[0];
    }
  }
  return uVar9;
}


////>>0x080068f0>>FUN_080068f0>>////

void FUN_080068f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_200000f8;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((DAT_200000f8 != 0) && (*(int *)(DAT_200000f8 + 0x18) == 0)) {
    FUN_08006cb4(DAT_200000f8);
  }
  FUN_08006394(iVar1,*(undefined4 *)(iVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}


////>>0x08006920>>FUN_08006920>>////

void FUN_08006920(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_200006a4 = 0;
  iVar1 = FUN_080056d8(param_2);
  if ((iVar1 == -1) && (DAT_200006a4 != 0)) {
    *param_1 = DAT_200006a4;
  }
  return;
}


////>>0x080069e4>>FUN_080069e4>>////

uint FUN_080069e4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  iVar1 = DAT_200000f8;
  if ((DAT_200000f8 != 0) && (*(int *)(DAT_200000f8 + 0x18) == 0)) {
    FUN_08006cb4(DAT_200000f8);
  }
  if (param_2 == &DAT_08007904) {
    param_2 = *(undefined4 **)(iVar1 + 4);
  }
  else if (param_2 == (undefined4 *)&DAT_08007924) {
    param_2 = *(undefined4 **)(iVar1 + 8);
  }
  else if (param_2 == (undefined4 *)&DAT_080078e4) {
    param_2 = *(undefined4 **)(iVar1 + 0xc);
  }
  uVar3 = *(ushort *)(param_2 + 3);
  uVar2 = (uint)uVar3;
  if (-1 < (int)(uVar2 << 0x1c)) {
    if (-1 < (int)(uVar2 << 0x1b)) {
      *param_1 = 9;
      goto LAB_08006a14;
    }
    if ((int)(uVar2 << 0x1d) < 0) {
      if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
        if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
          FUN_080061f0(param_1);
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
    FUN_08006e10(param_1,param_2);
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
LAB_08006a14:
      *(ushort *)(param_2 + 3) = uVar3 | 0x40;
      return 0xffffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x08006ac0>>FUN_08006ac0>>////

void FUN_08006ac0(void)

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
  
  FUN_08006f00(6);
  UNRECOVERED_JUMPTABLE_00 = (code *)0x8006acf;
  uVar12 = FUN_0800573c(1);
  piVar3 = (int *)((ulonglong)uVar12 >> 0x20);
  puVar1 = (uint *)uVar12;
  uVar6 = *(ushort *)(piVar3 + 3);
  uVar5 = (uint)uVar6;
  if ((int)(uVar5 << 0x1c) < 0) {
    iVar2 = piVar3[4];
    if (iVar2 != 0) {
      iVar7 = uVar5 << 0x1e;
      bVar11 = iVar7 != 0;
      if (bVar11) {
        iVar7 = 0;
      }
      iVar9 = *piVar3;
      if (!bVar11) {
        iVar7 = piVar3[5];
      }
      *piVar3 = iVar2;
      piVar3[2] = iVar7;
      for (iVar9 = iVar9 - iVar2; 0 < iVar9; iVar9 = iVar9 - iVar7) {
        iVar7 = (*(code *)piVar3[10])(puVar1,piVar3[8],iVar2,iVar9);
        if (iVar7 < 1) {
          uVar6 = *(ushort *)(piVar3 + 3);
          goto LAB_08006bc6;
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
                    /* WARNING: Could not recover jumptable at 0x08006b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        *puVar1 = uVar10;
        goto LAB_08006aea;
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
LAB_08006bc6:
      *(ushort *)(piVar3 + 3) = uVar6 | 0x40;
                    /* WARNING: Could not recover jumptable at 0x08006bd0. Too many branches */
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
        FUN_080061f0(puVar1);
      }
      piVar3[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x08006b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
LAB_08006aea:
                    /* WARNING: Could not recover jumptable at 0x08006aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(0);
  return;
}


////>>0x08006be0>>FUN_08006be0>>////

undefined4 FUN_08006be0(uint *param_1,int *param_2)

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
      FUN_08006cb4();
    }
    if (param_2 == &DAT_08007904) {
      param_2 = (int *)param_1[1];
    }
    else if (param_2 == (int *)&DAT_08007924) {
      param_2 = (int *)param_1[2];
    }
    else if (param_2 == (int *)&DAT_080078e4) {
      param_2 = (int *)param_1[3];
    }
    if (*(short *)(param_2 + 3) != 0) {
      uVar5 = *(ushort *)(param_2 + 3);
      uVar4 = (uint)uVar5;
      if ((int)(uVar4 << 0x1c) < 0) {
        iVar2 = param_2[4];
        if (iVar2 != 0) {
          iVar6 = uVar4 << 0x1e;
          bVar10 = iVar6 != 0;
          if (bVar10) {
            iVar6 = 0;
          }
          iVar8 = *param_2;
          if (!bVar10) {
            iVar6 = param_2[5];
          }
          *param_2 = iVar2;
          param_2[2] = iVar6;
          for (iVar8 = iVar8 - iVar2; 0 < iVar8; iVar8 = iVar8 - iVar6) {
            iVar6 = (*(code *)param_2[10])(param_1,param_2[8],iVar2,iVar8,unaff_r4,unaff_r5);
            if (iVar6 < 1) {
              uVar5 = *(ushort *)(param_2 + 3);
              goto LAB_08006bc6;
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
                    /* WARNING: Could not recover jumptable at 0x08006b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
              return uVar1;
            }
            *param_1 = uVar9;
            goto LAB_08006aea;
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
LAB_08006bc6:
          *(ushort *)(param_2 + 3) = uVar5 | 0x40;
                    /* WARNING: Could not recover jumptable at 0x08006bd0. Too many branches */
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
            FUN_080061f0(param_1);
          }
          param_2[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x08006b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
          return uVar1;
        }
      }
LAB_08006aea:
                    /* WARNING: Could not recover jumptable at 0x08006aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE_00)(0);
      return uVar1;
    }
  }
  return 0;
}


////>>0x08006c40>>FUN_08006c40>>////

void FUN_08006c40(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

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
  FUN_080061e0(param_1 + 0x17,0,8);
  param_1[8] = param_1;
  param_1[9] = 0x8006f39;
  param_1[10] = 0x8006f5b;
  param_1[0xb] = 0x8006f93;
  param_1[0xc] = &LAB_08006fb6_1;
  return;
}


////>>0x08006c88>>FUN_08006c88>>////

undefined4 * FUN_08006c88(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 + -1) * 0x68;
  puVar1 = (undefined4 *)FUN_08006288(param_1,iVar2 + 0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = puVar1 + 3;
    FUN_080061e0(puVar1 + 3,0,iVar2 + 0x68);
  }
  return puVar1;
}


////>>0x08006cb4>>FUN_08006cb4>>////

void FUN_08006cb4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1[6] == 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    puVar2 = &DAT_200000fc;
    param_1[10] = &LAB_08006c34_1;
    if (param_1 == &DAT_200000fc) {
      puVar2 = (undefined4 *)0x1;
    }
    if (param_1 == &DAT_200000fc) {
      param_1[6] = puVar2;
    }
    uVar1 = FUN_08006d14();
    param_1[1] = uVar1;
    uVar1 = FUN_08006d14(param_1);
    param_1[2] = uVar1;
    uVar1 = FUN_08006d14(param_1);
    param_1[3] = uVar1;
    FUN_08006c40(param_1[1],4,0);
    FUN_08006c40(param_1[2],9,1);
    FUN_08006c40(param_1[3],0x12,2);
    param_1[6] = 1;
  }
  return;
}


////>>0x08006d14>>FUN_08006d14>>////

int * FUN_08006d14(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  
  if (DAT_20000114 == 0) {
    FUN_08006cb4(&DAT_200000fc);
  }
  ppiVar3 = (int **)&DAT_20000144;
  do {
    piVar2 = ppiVar3[2];
    piVar1 = ppiVar3[1];
    while (piVar1 = (int *)((int)piVar1 + -1), -1 < (int)piVar1) {
      if (*(short *)(piVar2 + 3) == 0) {
        *(undefined2 *)((int)piVar2 + 0xe) = 0xffff;
        piVar2[0x19] = 0;
        *(undefined2 *)(piVar2 + 3) = 1;
        *piVar2 = 0;
        piVar2[2] = 0;
        piVar2[1] = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
        piVar2[6] = 0;
        FUN_080061e0(piVar2 + 0x17,0,8,1,param_4);
        piVar2[0xd] = 0;
        piVar2[0xe] = 0;
        piVar2[0x12] = 0;
        piVar2[0x13] = 0;
        return piVar2;
      }
      piVar2 = piVar2 + 0x1a;
    }
    if (*ppiVar3 == (int *)0x0) {
      piVar1 = (int *)FUN_08006c88(param_1,4);
      *ppiVar3 = piVar1;
      if (piVar1 == (int *)0x0) {
        *param_1 = 0xc;
        return (int *)0x0;
      }
    }
    ppiVar3 = (int **)*ppiVar3;
  } while( true );
}


////>>0x08006dc8>>FUN_08006dc8>>////

undefined4 FUN_08006dc8(undefined4 param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_4c [4];
  uint local_48;
  
  if ((*(short *)(param_2 + 0xe) < 0) ||
     (iVar1 = FUN_08007004(param_1,(int)*(short *)(param_2 + 0xe),auStack_4c), iVar1 < 0)) {
    *param_4 = 0;
    if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x18) < 0) {
      uVar2 = 0x40;
      goto LAB_08006e08;
    }
  }
  else {
    *param_4 = (uint)((local_48 & 0xf000) == 0x2000);
  }
  uVar2 = 0x400;
LAB_08006e08:
  *param_3 = uVar2;
  return 0;
}


////>>0x08006e10>>FUN_08006e10>>////

void FUN_08006e10(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int local_18;
  int *local_14;
  
  if (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1e)) {
    local_18 = param_1;
    local_14 = param_2;
    uVar1 = FUN_08006dc8(param_1,param_2,&local_18,&local_14);
    iVar2 = FUN_08006288(param_1,local_18);
    if (iVar2 != 0) {
      *(undefined **)(param_1 + 0x28) = &LAB_08006c34_1;
      *param_2 = iVar2;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x80;
      param_2[4] = iVar2;
      param_2[5] = local_18;
      if ((local_14 != (int *)0x0) &&
         (iVar2 = FUN_08007028(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0)) {
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


////>>0x08006e90>>FUN_08006e90>>////

char * FUN_08006e90(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  do {
    pcVar2 = pcVar1;
    if (pcVar2 == param_1 + param_3) {
      return (char *)0x0;
    }
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != param_2);
  return pcVar2;
}


////>>0x08006eac>>FUN_08006eac>>////

void FUN_08006eac(void)

{
  return;
}


////>>0x08006eae>>FUN_08006eae>>////

void FUN_08006eae(void)

{
  return;
}


////>>0x08006f00>>FUN_08006f00>>////

int FUN_08006f00(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  undefined4 *puVar5;
  
  piVar1 = DAT_200000f8;
  puVar5 = &DAT_200000f8;
  if (0x1f < param_1) {
    *DAT_200000f8 = 0x16;
    return -1;
  }
  iVar3 = DAT_200000f8[0x11];
  if ((iVar3 != 0) && (pcVar4 = *(code **)(iVar3 + param_1 * 4), pcVar4 != (code *)0x0)) {
    if (pcVar4 != (code *)0x1) {
      if (pcVar4 == (code *)0xffffffff) {
        *DAT_200000f8 = 0x16;
        return 1;
      }
      *(undefined4 *)(iVar3 + param_1 * 4) = 0;
      (*pcVar4)(param_1);
    }
    return 0;
  }
  uVar2 = thunk_FUN_08005750(DAT_200000f8);
  DAT_200006a4 = 0;
  iVar3 = FUN_08005740(uVar2,param_1,param_1,0,puVar5,unaff_r4,unaff_r5,in_lr);
  if ((iVar3 == -1) && (DAT_200006a4 != 0)) {
    *piVar1 = DAT_200006a4;
  }
  return iVar3;
}


////>>0x08006f34>>thunk_FUN_08005750>>////

undefined4 thunk_FUN_08005750(void)

{
  return 1;
}


////>>0x08006f38>>FUN_08006f38>>////

void FUN_08006f38(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_0800706c(param_1,(int)*(short *)(param_2 + 0xe));
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


////>>0x08006f5a>>FUN_08006f5a>>////

void FUN_08006f5a(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    FUN_08007048(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  DAT_200006a4 = 0;
  iVar1 = FUN_08005730((int)*(short *)(param_2 + 0xe),param_3,param_4,param_4,param_4,unaff_r4,
                       unaff_r5,in_lr);
  if ((iVar1 == -1) && (DAT_200006a4 != 0)) {
    *param_1 = DAT_200006a4;
  }
  return;
}


////>>0x08006f92>>FUN_08006f92>>////

void FUN_08006f92(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  
  iVar1 = FUN_08007048(param_1,(int)*(short *)(param_2 + 0xe));
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


////>>0x08007004>>FUN_08007004>>////

void FUN_08007004(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_200006a4 = 0;
  iVar1 = FUN_0800571a(param_2,param_3,param_3,0,param_4);
  if ((iVar1 == -1) && (DAT_200006a4 != 0)) {
    *param_1 = DAT_200006a4;
  }
  return;
}


////>>0x08007028>>FUN_08007028>>////

void FUN_08007028(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_200006a4 = 0;
  iVar1 = FUN_08005724(param_2);
  if ((iVar1 == -1) && (DAT_200006a4 != 0)) {
    *param_1 = DAT_200006a4;
  }
  return;
}


////>>0x08007048>>FUN_08007048>>////

void FUN_08007048(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_200006a4 = 0;
  iVar1 = FUN_08005728(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (DAT_200006a4 != 0)) {
    *param_1 = DAT_200006a4;
  }
  return;
}


////>>0x0800706c>>FUN_0800706c>>////

void FUN_0800706c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_200006a4 = 0;
  iVar1 = FUN_0800572c(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (DAT_200006a4 != 0)) {
    *param_1 = DAT_200006a4;
  }
  return;
}


////>>0x08007090>>FUN_08007090>>////

void FUN_08007090(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = FUN_08007090;
  FUN_08006ac0();
  if (-1 < DAT_2000062c << 0x1f) {
    DAT_2000062c = 1;
  }
  if (-1 < DAT_20000628 << 0x1f) {
    DAT_20000628 = 1;
  }
  if (-1 < DAT_20000624 << 0x1f) {
    DAT_20000624 = 1;
  }
  if (-1 < DAT_20000620 << 0x1f) {
    DAT_20000620 = 1;
  }
  if (-1 < DAT_2000061c << 0x1f) {
    DAT_2000061c = 1;
  }
  if (-1 < DAT_20000618 << 0x1f) {
    DAT_20000618 = 1;
  }
  if (-1 < DAT_20000614 << 0x1f) {
    DAT_20000614 = 1;
  }
  if (-1 < DAT_20000610 << 0x1f) {
    DAT_20000610 = 1;
  }
  if (-1 < DAT_2000060c << 0x1f) {
    DAT_2000060c = 1;
  }
  if (-1 < DAT_20000608 << 0x1f) {
    DAT_20000608 = 1;
  }
  if (-1 < DAT_20000604 << 0x1f) {
    DAT_20000604 = 1;
  }
  if (-1 < DAT_20000600 << 0x1f) {
    DAT_20000600 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x08007128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08007328>>FUN_08007328>>////

void FUN_08007328(void)

{
  return;
}


////>>0x08007334>>FUN_08007334>>////

void FUN_08007334(void)

{
  return;
}


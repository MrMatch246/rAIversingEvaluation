java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x08000110>>FUN_08000110>>////

/* WARNING: Removing unreachable block (ram,0x0800011c) */

undefined4 FUN_08000110(undefined4 param_1)

{
  if ((char)DAT_200009c8 == '\0') {
    DAT_200009c8._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x08000134>>FUN_08000134>>////

/* WARNING: Removing unreachable block (ram,0x0800013a) */

undefined8 FUN_08000134(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}


////>>0x08000158>>FUN_08000158>>////

ulonglong FUN_08000158(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_0800039c:
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
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_0800039c;
    }
LAB_08000268:
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
  if ((uVar11 & 0x100000) != 0) goto LAB_08000268;
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
      goto LAB_080002e0;
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
LAB_080002e0:
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


////>>0x0800015c>>FUN_0800015c>>////

ulonglong FUN_0800015c(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_0800039c:
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
      if (0xffbfffff < uVar7 * 0x200000) goto LAB_0800039c;
    }
LAB_08000268:
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
  if ((uVar10 & 0x100000) != 0) goto LAB_08000268;
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
      goto LAB_080002e0;
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
LAB_080002e0:
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


////>>0x080003d4>>FUN_080003d4>>////

ulonglong FUN_080003d4(uint param_1)

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
      goto LAB_080002e0;
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
LAB_080002e0:
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


////>>0x080003f4>>FUN_080003f4>>////

ulonglong FUN_080003f4(uint param_1)

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
      goto LAB_080002e0;
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
LAB_080002e0:
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


////>>0x08000418>>FUN_08000418>>////

ulonglong FUN_08000418(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
      goto LAB_080002e0;
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
LAB_080002e0:
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


////>>0x080004c8>>FUN_080004c8>>////

ulonglong FUN_080004c8(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar12 = FUN_080006a4();
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


////>>0x080006a4>>FUN_080006a4>>////

ulonglong FUN_080006a4(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x0800071c>>FUN_0800071c>>////

ulonglong FUN_0800071c(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar17 = FUN_0800088a();
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
        if ((uVar7 & 0x100000) != 0) goto LAB_0800083a;
        uVar7 = uVar7 | uVar11;
        uVar11 = 0;
        uVar3 = 0x80000000;
      }
    }
    if ((uVar7 & 0x100000) == 0) {
      uVar7 = uVar7 | uVar11;
      uVar11 = 0;
    }
LAB_0800083a:
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


////>>0x0800088a>>FUN_0800088a>>////

ulonglong FUN_0800088a(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_080006fc:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar2 == in_r12) {
      param_1 = param_3;
      uVar3 = param_4;
      if ((param_3 | param_4 << 0xc) == 0) {
LAB_080006c0:
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
      if ((param_1 | param_2 << 1) != 0) goto LAB_080006fc;
      if ((param_3 | param_4 << 1) != 0) goto LAB_080006c0;
    }
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}


////>>0x080008fc>>FUN_080008fc>>////

uint FUN_080008fc(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x08000978>>FUN_08000978>>////

void FUN_08000978(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __aeabi_cdcmpeq(param_3,param_4,param_1,param_2);
  return;
}


////>>0x08000988>>FUN_08000988>>////

undefined4 FUN_08000988(undefined4 param_1)

{
  __nedf2();
  return param_1;
}


////>>0x08000998>>FUN_08000998>>////

bool FUN_08000998(void)

{
  char in_ZR;
  
  __aeabi_cdcmpeq();
  return in_ZR != '\0';
}


////>>0x080009ac>>FUN_080009ac>>////

bool FUN_080009ac(void)

{
  char in_CY;
  
  __aeabi_cdcmpeq();
  return in_CY == '\0';
}


////>>0x080009c0>>FUN_080009c0>>////

bool FUN_080009c0(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x080009d4>>FUN_080009d4>>////

bool FUN_080009d4(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x080009e8>>FUN_080009e8>>////

bool FUN_080009e8(void)

{
  char in_CY;
  
  __aeabi_cdrcmple();
  return in_CY == '\0';
}


////>>0x080009fc>>FUN_080009fc>>////

uint FUN_080009fc(uint param_1,uint param_2)

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


////>>0x08000aa4>>FUN_08000aa4>>////

uint FUN_08000aa4(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_08000bde:
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
      if (0xfd < uVar6) goto LAB_08000bde;
    }
  }
  uVar5 = uVar5 + uVar3 * 0x800000 + (uint)(0x7fffffff < uVar4);
  if (uVar4 == 0x80000000) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5 | param_1;
}


////>>0x08000aa8>>FUN_08000aa8>>////

uint FUN_08000aa8(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_08000bde:
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
      if (0xfd < uVar5) goto LAB_08000bde;
    }
  }
  uVar4 = uVar4 + uVar6 * 0x800000 + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}


////>>0x08000c08>>FUN_08000c08>>////

uint FUN_08000c08(uint param_1)

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


////>>0x08000c10>>FUN_08000c10>>////

uint FUN_08000c10(uint param_1)

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


////>>0x08000cb8>>FUN_08000cb8>>////

uint FUN_08000cb8(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
      goto LAB_08000e08;
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
LAB_08000e08:
  return uVar2 & 0x80000000 | 0x7f800000;
}


////>>0x08000e20>>FUN_08000e20>>////

uint FUN_08000e20(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_08000e16:
        return uVar6 | 0x7fc00000;
      }
    }
    else {
      if (param_4 == 0xff) {
        uVar6 = param_2;
        if ((param_2 & 0x7fffff) == 0) {
LAB_08000dcc:
          return (param_1 ^ param_2) & 0x80000000;
        }
        goto LAB_08000e16;
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
        goto LAB_08000e38;
      }
      if ((param_1 & 0x7fffffff) == 0) {
        if ((param_2 & 0x7fffffff) != 0) goto LAB_08000dcc;
        goto LAB_08000e16;
      }
    }
    param_1 = param_1 ^ param_2;
  }
  else {
LAB_08000e38:
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


////>>0x08000f68>>FUN_08000f68>>////

uint FUN_08000f68(uint param_1,uint param_2)

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


////>>0x08000fc8>>FUN_08000fc8>>////

void FUN_08000fc8(undefined4 param_1,undefined4 param_2)

{
  __aeabi_cfcmpeq(param_2,param_1);
  return;
}


////>>0x08000fd0>>FUN_08000fd0>>////

undefined8 FUN_08000fd0(undefined4 param_1,undefined4 param_2)

{
  __cmpsf2();
  return CONCAT44(param_2,param_1);
}


////>>0x08000ff4>>FUN_08000ff4>>////

bool FUN_08000ff4(void)

{
  char in_CY;
  
  __aeabi_cfcmpeq();
  return in_CY == '\0';
}


////>>0x08001030>>FUN_08001030>>////

bool FUN_08001030(void)

{
  char in_CY;
  
  __aeabi_cfrcmple();
  return in_CY == '\0';
}


////>>0x08001044>>FUN_08001044>>////

uint FUN_08001044(uint param_1)

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


////>>0x08001084>>FUN_08001084>>////

undefined4 * FUN_08001084(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar2 = param_1;
  if ((((uint)param_2 | (uint)param_1) & 3) != 0) {
    if (param_3 < 8) {
      uVar5 = param_3 - 4;
      if (3 < param_3) {
        do {
          puVar1 = param_2;
          puVar3 = puVar2;
          bVar6 = uVar5 != 0;
          uVar5 = uVar5 - 1;
          *(undefined *)puVar3 = *(undefined *)puVar1;
          puVar2 = (undefined4 *)((int)puVar3 + 1);
          param_2 = (undefined4 *)((int)puVar1 + 1);
        } while (bVar6);
        *(undefined *)(undefined4 *)((int)puVar3 + 1) =
             *(undefined *)(undefined4 *)((int)puVar1 + 1);
        *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)puVar1 + 2);
        *(undefined *)((int)puVar3 + 3) = *(undefined *)((int)puVar1 + 3);
        return param_1;
      }
      goto LAB_08001108;
    }
    if ((((uint)param_2 & 3) != 0) && (((uint)param_1 & 3) != 0)) {
      uVar5 = 4 - ((uint)param_1 & 3);
      param_3 = param_3 - uVar5;
      puVar1 = param_1;
      puVar3 = param_2;
      if (((uint)param_1 & 1) != 0) {
        puVar3 = (undefined4 *)((int)param_2 + 1);
        puVar1 = (undefined4 *)((int)param_1 + 1);
        *(undefined *)param_1 = *(undefined *)param_2;
      }
      puVar2 = puVar1;
      param_2 = puVar3;
      if ((uVar5 & 2) != 0) {
        param_2 = (undefined4 *)((int)puVar3 + 2);
        puVar2 = (undefined4 *)((int)puVar1 + 2);
        *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
      }
    }
  }
  while (0x3f < param_3) {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    puVar2[4] = param_2[4];
    puVar2[5] = param_2[5];
    puVar2[6] = param_2[6];
    puVar2[7] = param_2[7];
    puVar2[8] = param_2[8];
    puVar2[9] = param_2[9];
    puVar2[10] = param_2[10];
    puVar2[0xb] = param_2[0xb];
    puVar2[0xc] = param_2[0xc];
    puVar2[0xd] = param_2[0xd];
    puVar2[0xe] = param_2[0xe];
    puVar2[0xf] = param_2[0xf];
    puVar2 = puVar2 + 0x10;
    param_2 = param_2 + 0x10;
    param_3 = param_3 - 0x40;
  }
  uVar4 = param_3 - 0x10;
  if (0xffffffcf < param_3 - 0x40) {
    do {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[3] = param_2[3];
      puVar2 = puVar2 + 4;
      param_2 = param_2 + 4;
      bVar6 = 0xf < uVar4;
      uVar4 = uVar4 - 0x10;
    } while (bVar6);
  }
  uVar5 = uVar4 + 0xc;
  puVar3 = puVar2;
  puVar1 = param_2;
  if (0xfffffff3 < uVar4) {
    do {
      param_2 = puVar1 + 1;
      *puVar3 = *puVar1;
      bVar6 = 3 < uVar5;
      uVar5 = uVar5 - 4;
      puVar2 = puVar3 + 1;
      puVar3 = puVar3 + 1;
      puVar1 = param_2;
    } while (bVar6);
  }
LAB_08001108:
  if (uVar5 + 4 != 0) {
    puVar1 = puVar2;
    puVar3 = param_2;
    if ((uVar5 & 1) != 0) {
      puVar3 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar2 + 1);
      *(undefined *)puVar2 = *(undefined *)param_2;
    }
    if ((uVar5 + 4 & 2) != 0) {
      *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
    }
  }
  return param_1;
}


////>>0x08001170>>FUN_08001170>>////

undefined4 FUN_08001170(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((((param_2 << 1) >> 0x15 != -1) || ((param_1 | param_2 << 0xc) == 0)) &&
     (((param_4 << 1) >> 0x15 != -1 || ((param_3 | param_4 << 0xc) == 0)))) {
    return 0;
  }
  return 1;
}


////>>0x0800119c>>FUN_0800119c>>////

uint FUN_0800119c(uint param_1,uint param_2)

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


////>>0x080011ec>>FUN_080011ec>>////

undefined8 FUN_080011ec(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_2 = -1;
      param_1 = -1;
    }
    return CONCAT44(param_2,param_1);
  }
  uVar1 = __udivmoddi4();
  return uVar1;
}


////>>0x0800121c>>FUN_0800121c>>////

/* WARNING: Removing unreachable block (ram,0x080014b2) */

undefined8 FUN_0800121c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar5 = LZCOUNT(param_3);
      uVar7 = param_3;
      if (iVar5 != 0) {
        uVar7 = param_3 << iVar5;
        param_2 = param_1 >> (0x20U - iVar5 & 0xff) | param_2 << iVar5;
        param_1 = param_1 << iVar5;
      }
      uVar11 = uVar7 >> 0x10;
      uVar8 = param_2 / uVar11;
      uVar10 = uVar8 * (uVar7 & 0xffff);
      uVar6 = param_1 >> 0x10 | (param_2 - uVar11 * uVar8) * 0x10000;
      uVar3 = uVar8;
      if (uVar6 <= uVar10 && uVar10 - uVar6 != 0) {
        bVar13 = CARRY4(uVar7,uVar6);
        uVar6 = uVar7 + uVar6;
        uVar3 = uVar8 - 1;
        if ((bVar13 == false) && (uVar6 <= uVar10 && uVar10 - uVar6 != 0)) {
          uVar3 = uVar8 - 2;
          uVar6 = uVar6 + uVar7;
        }
      }
      uVar2 = (uVar6 - uVar10) / uVar11;
      uVar4 = uVar2 * (uVar7 & 0xffff);
      uVar8 = param_1 & 0xffff | ((uVar6 - uVar10) - uVar11 * uVar2) * 0x10000;
      uVar6 = uVar2;
      if (uVar8 <= uVar4 && uVar4 - uVar8 != 0) {
        bVar13 = CARRY4(uVar7,uVar8);
        uVar8 = uVar7 + uVar8;
        uVar6 = uVar2 - 1;
        if ((bVar13 == false) && (uVar8 <= uVar4 && uVar4 - uVar8 != 0)) {
          uVar6 = uVar2 - 2;
          uVar8 = uVar8 + uVar7;
        }
      }
      uVar6 = uVar6 | uVar3 << 0x10;
      puVar9 = (uint *)0x0;
      uVar8 = uVar8 - uVar4;
    }
    else {
      if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE = (code *)software_udf(0xff,0x8001302);
        uVar14 = (*UNRECOVERED_JUMPTABLE)();
        return uVar14;
      }
      iVar5 = LZCOUNT(param_3);
      if (iVar5 == 0) {
        puVar9 = (uint *)0x1;
        param_2 = param_2 - param_3;
        uVar11 = param_3 >> 0x10;
        uVar2 = param_3 & 0xffff;
        uVar7 = param_3;
      }
      else {
        uVar7 = param_3 << iVar5;
        uVar6 = param_2 >> (0x20U - iVar5 & 0xff);
        uVar11 = uVar7 >> 0x10;
        uVar10 = uVar6 / uVar11;
        uVar2 = uVar7 & 0xffff;
        uVar4 = uVar10 * uVar2;
        uVar8 = param_1 >> (0x20U - iVar5 & 0xff) | param_2 << iVar5;
        uVar3 = uVar8 >> 0x10 | (uVar6 - uVar11 * uVar10) * 0x10000;
        param_1 = param_1 << iVar5;
        uVar6 = uVar10;
        if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
          bVar13 = CARRY4(uVar7,uVar3);
          uVar3 = uVar7 + uVar3;
          uVar6 = uVar10 - 1;
          if ((bVar13 == false) && (uVar3 <= uVar4 && uVar4 - uVar3 != 0)) {
            uVar6 = uVar10 - 2;
            uVar3 = uVar3 + uVar7;
          }
        }
        uVar10 = (uVar3 - uVar4) / uVar11;
        uVar12 = uVar10 * uVar2;
        param_2 = uVar8 & 0xffff | ((uVar3 - uVar4) - uVar11 * uVar10) * 0x10000;
        uVar3 = uVar10;
        if (param_2 <= uVar12 && uVar12 - param_2 != 0) {
          bVar13 = CARRY4(uVar7,param_2);
          param_2 = uVar7 + param_2;
          uVar3 = uVar10 - 1;
          if ((bVar13 == false) && (param_2 <= uVar12 && uVar12 - param_2 != 0)) {
            uVar3 = uVar10 - 2;
            param_2 = param_2 + uVar7;
          }
        }
        param_2 = param_2 - uVar12;
        puVar9 = (uint *)(uVar3 | uVar6 << 0x10);
      }
      uVar10 = param_2 / uVar11;
      uVar6 = uVar2 * uVar10;
      uVar8 = param_1 >> 0x10 | (param_2 - uVar11 * uVar10) * 0x10000;
      uVar3 = uVar10;
      if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
        bVar13 = CARRY4(uVar7,uVar8);
        uVar8 = uVar7 + uVar8;
        uVar3 = uVar10 - 1;
        if ((bVar13 == false) && (uVar8 <= uVar6 && uVar6 - uVar8 != 0)) {
          uVar3 = uVar10 - 2;
          uVar8 = uVar8 + uVar7;
        }
      }
      uVar10 = (uVar8 - uVar6) / uVar11;
      uVar2 = uVar2 * uVar10;
      uVar8 = param_1 & 0xffff | ((uVar8 - uVar6) - uVar11 * uVar10) * 0x10000;
      uVar6 = uVar10;
      if (uVar8 <= uVar2 && uVar2 - uVar8 != 0) {
        bVar13 = CARRY4(uVar7,uVar8);
        uVar8 = uVar7 + uVar8;
        uVar6 = uVar10 - 1;
        if ((bVar13 == false) && (uVar8 <= uVar2 && uVar2 - uVar8 != 0)) {
          uVar6 = uVar10 - 2;
          uVar8 = uVar8 + uVar7;
        }
      }
      uVar8 = uVar8 - uVar2;
      uVar6 = uVar6 | uVar3 << 0x10;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar8 >> LZCOUNT(param_3);
      param_5[1] = 0;
    }
  }
  else {
    puVar9 = param_5;
    if (param_2 < param_4) {
      if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
        return 0;
      }
      uVar6 = 0;
    }
    else {
      iVar5 = LZCOUNT(param_4);
      if (iVar5 == 0) {
        if ((param_4 < param_2) || (param_3 <= param_1)) {
          bVar13 = param_1 < param_3;
          param_1 = param_1 - param_3;
          param_2 = (param_2 - param_4) - (uint)bVar13;
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        puVar9 = (uint *)0x0;
        if (param_5 != (uint *)0x0) {
          *param_5 = param_1;
          param_5[1] = param_2;
        }
      }
      else {
        uVar8 = 0x20 - iVar5;
        uVar2 = param_3 >> (uVar8 & 0xff) | param_4 << iVar5;
        uVar7 = param_2 >> (uVar8 & 0xff);
        uVar4 = uVar2 >> 0x10;
        uVar10 = uVar7 / uVar4;
        uVar11 = uVar10 * (uVar2 & 0xffff);
        uVar6 = param_2 << iVar5 | param_1 >> (uVar8 & 0xff);
        uVar3 = uVar6 >> 0x10 | (uVar7 - uVar4 * uVar10) * 0x10000;
        param_1 = param_1 << iVar5;
        uVar7 = uVar10;
        if (uVar3 <= uVar11 && uVar11 - uVar3 != 0) {
          bVar13 = CARRY4(uVar2,uVar3);
          uVar3 = uVar2 + uVar3;
          uVar7 = uVar10 - 1;
          if ((bVar13 == false) && (uVar3 <= uVar11 && uVar11 - uVar3 != 0)) {
            uVar7 = uVar10 - 2;
            uVar3 = uVar3 + uVar2;
          }
        }
        uVar10 = (uVar3 - uVar11) / uVar4;
        uVar12 = uVar10 * (uVar2 & 0xffff);
        uVar3 = uVar6 & 0xffff | ((uVar3 - uVar11) - uVar4 * uVar10) * 0x10000;
        uVar6 = uVar10;
        if (uVar3 <= uVar12 && uVar12 - uVar3 != 0) {
          bVar13 = CARRY4(uVar2,uVar3);
          uVar3 = uVar2 + uVar3;
          uVar6 = uVar10 - 1;
          if ((bVar13 == false) && (uVar3 <= uVar12 && uVar12 - uVar3 != 0)) {
            uVar6 = uVar10 - 2;
            uVar3 = uVar3 + uVar2;
          }
        }
        uVar6 = uVar6 | uVar7 << 0x10;
        uVar1 = (ulonglong)uVar6 * (ulonglong)(param_3 << iVar5);
        if (CONCAT44(uVar3 - uVar12,param_1) < uVar1) {
          uVar6 = uVar6 - 1;
          uVar1 = uVar1 - CONCAT44(uVar2,param_3 << iVar5);
        }
        if (param_5 != (uint *)0x0) {
          uVar7 = ((uVar3 - uVar12) - (int)(uVar1 >> 0x20)) - (uint)(param_1 < (uint)uVar1);
          *param_5 = uVar7 << (uVar8 & 0xff) | param_1 - (uint)uVar1 >> iVar5;
          param_5[1] = uVar7 >> iVar5;
          puVar9 = (uint *)0x0;
        }
      }
    }
  }
  return CONCAT44(puVar9,uVar6);
}


////>>0x080014f0>>FUN_080014f0>>////



undefined4 FUN_080014f0(void)

{
  _DAT_40022000 = _DAT_40022000 | 0x10;
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_InitTick(0xf);
  HAL_MspInit();
  return 0;
}


////>>0x0800151c>>FUN_0800151c>>////

undefined4 FUN_0800151c(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = HAL_SYSTICK_Config((int)((ulonglong)DAT_20000018 / (1000 / (ulonglong)DAT_20000004)));
  if (iVar1 == 0) {
    if (param_1 < 0x10) {
      HAL_NVIC_SetPriority(0xffffffff,param_1,0);
      uVar2 = 0;
      DAT_20000000 = param_1;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


////>>0x0800157c>>FUN_0800157c>>////

void FUN_0800157c(void)

{
  DAT_20000a48 = DAT_20000a48 + (uint)DAT_20000004;
  return;
}


////>>0x080015a0>>FUN_080015a0>>////

undefined4 FUN_080015a0(void)

{
  return DAT_20000a48;
}


////>>0x080015b4>>FUN_080015b4>>////



void FUN_080015b4(uint param_1)

{
  _DAT_e000ed0c = _DAT_e000ed0c & 0xf8ff | (param_1 & 7) << 8 | 0x5fa0000;
  return;
}


////>>0x080015fc>>FUN_080015fc>>////



uint FUN_080015fc(void)

{
  return _DAT_e000ed0c >> 8 & 7;
}


////>>0x08001618>>FUN_08001618>>////

void FUN_08001618(byte param_1,uint param_2)

{
  if ((char)param_1 < '\0') {
    *(char *)((param_1 & 0xf) + 0xe000ed14) = (char)((param_2 & 0xff) << 4);
  }
  else {
    *(char *)((char)param_1 + -0x1fff1c00) = (char)((param_2 & 0xff) << 4);
  }
  return;
}


////>>0x0800166c>>FUN_0800166c>>////

uint FUN_0800166c(uint param_1,uint param_2,uint param_3)

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
  return param_3 & ~(-1 << (param_1 & 0xff)) |
         (~(-1 << (uVar1 & 0xff)) & param_2) << (param_1 & 0xff);
}


////>>0x080016d0>>FUN_080016d0>>////



bool FUN_080016d0(int param_1)

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


////>>0x08001714>>FUN_08001714>>////

void FUN_08001714(undefined4 param_1)

{
  NVIC_SetPriorityGrouping(param_1);
  return;
}


////>>0x0800172a>>FUN_0800172a>>////

void FUN_0800172a(char param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = NVIC_GetPriorityGrouping();
  uVar1 = NVIC_EncodePriority(uVar1,param_2,param_3);
  NVIC_SetPriority((int)param_1,uVar1);
  return;
}


////>>0x08001762>>FUN_08001762>>////

undefined4 FUN_08001762(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = SysTick_Config(param_1);
  return uVar1;
}


////>>0x0800177c>>FUN_0800177c>>////



void FUN_0800177c(int param_1)

{
  if (param_1 == 4) {
    _DAT_e000e010 = _DAT_e000e010 | 4;
  }
  else {
    _DAT_e000e010 = _DAT_e000e010 & 0xfffffffb;
  }
  return;
}


////>>0x080017b4>>FUN_080017b4>>////

void FUN_080017b4(void)

{
  HAL_TIM_PeriodElapsedCallback(0);
  return;
}


////>>0x080017c4>>FUN_080017c4>>////



void FUN_080017c4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 0;
  do {
    if (0xf < local_c) {
      return;
    }
    uVar1 = 1 << (local_c & 0xff);
    uVar2 = *param_2 & uVar1;
    if (uVar2 == uVar1) {
      uVar3 = param_2[1];
      if (uVar3 == 0x12) {
        local_10 = param_2[3] + 0xc;
      }
      else if (uVar3 < 0x13) {
        if (uVar3 == 2) {
          local_10 = param_2[3] + 8;
        }
        else if (uVar3 < 3) {
          if (uVar3 == 0) goto LAB_08001882;
          if (uVar3 == 1) {
            local_10 = param_2[3];
          }
        }
        else if (uVar3 == 3) {
          local_10 = 0;
        }
        else if (uVar3 == 0x11) {
          local_10 = param_2[3] + 4;
        }
      }
      else if (uVar3 == 0x10210000) {
LAB_08001882:
        if (param_2[2] == 0) {
          local_10 = 4;
        }
        else if (param_2[2] == 1) {
          local_10 = 8;
          param_1[4] = uVar1;
        }
        else {
          local_10 = 8;
          param_1[5] = uVar1;
        }
      }
      else if (uVar3 < 0x10210001) {
        if ((uVar3 == 0x10110000) || (uVar3 == 0x10120000)) goto LAB_08001882;
      }
      else if (((uVar3 == 0x10310000) || (uVar3 == 0x10320000)) || (uVar3 == 0x10220000))
      goto LAB_08001882;
      if (uVar2 < 0x100) {
        uVar1 = local_c << 2;
        puVar4 = param_1;
      }
      else {
        puVar4 = param_1 + 1;
        uVar1 = (local_c - 8) * 4;
      }
      *puVar4 = *puVar4 & ~(0xf << (uVar1 & 0xff)) | local_10 << (uVar1 & 0xff);
      if ((param_2[1] & 0x10000000) != 0) {
        _DAT_40021018 = _DAT_40021018 | 1;
        if (param_1 == (uint *)0x40010800) {
          iVar5 = 0;
        }
        else if (param_1 == (uint *)0x40010c00) {
          iVar5 = 1;
        }
        else if (param_1 == (uint *)0x40011000) {
          iVar5 = 2;
        }
        else if (param_1 == (uint *)0x40011400) {
          iVar5 = 3;
        }
        else {
          iVar5 = 4;
        }
        *(uint *)(((local_c >> 2) + 2) * 4 + 0x40010000) =
             iVar5 << ((local_c & 3) << 2) |
             ~(0xf << ((local_c & 3) << 2)) & *(uint *)(((local_c >> 2) + 2) * 4 + 0x40010000);
        if ((param_2[1] & 0x10000) == 0) {
          _DAT_40010400 = ~uVar2 & _DAT_40010400;
        }
        else {
          _DAT_40010400 = uVar2 | _DAT_40010400;
        }
        if ((param_2[1] & 0x20000) == 0) {
          _DAT_40010404 = ~uVar2 & _DAT_40010404;
        }
        else {
          _DAT_40010404 = uVar2 | _DAT_40010404;
        }
        if ((param_2[1] & 0x100000) == 0) {
          _DAT_40010408 = ~uVar2 & _DAT_40010408;
        }
        else {
          _DAT_40010408 = uVar2 | _DAT_40010408;
        }
        if ((param_2[1] & 0x200000) == 0) {
          _DAT_4001040c = ~uVar2 & _DAT_4001040c;
        }
        else {
          _DAT_4001040c = uVar2 | _DAT_4001040c;
        }
      }
    }
    local_c = local_c + 1;
  } while( true );
}


////>>0x08001a80>>FUN_08001a80>>////

void FUN_08001a80(int param_1,ushort param_2,char param_3)

{
  if (param_3 == '\0') {
    *(uint *)(param_1 + 0x10) = (uint)param_2 << 0x10;
  }
  else {
    *(uint *)(param_1 + 0x10) = (uint)param_2;
  }
  return;
}


////>>0x08001ab0>>FUN_08001ab0>>////

undefined4 FUN_08001ab0(uint **param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_1 == (uint **)0x0) {
    uVar3 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      *(undefined *)(param_1 + 0xf) = 0;
      HAL_I2C_MspInit(param_1);
    }
    *(undefined *)((int)param_1 + 0x3d) = 0x24;
    **param_1 = **param_1 & 0xfffffffe;
    uVar1 = HAL_RCC_GetPCLK1Freq();
    if (param_1[1] < (uint *)0x186a1) {
      uVar4 = uVar1;
      if (uVar1 < 2000000) {
        uVar4 = 1;
      }
      cVar2 = (char)uVar4;
      if (1999999 < uVar1) {
        cVar2 = '\0';
      }
    }
    else {
      uVar4 = uVar1;
      if (uVar1 < 4000000) {
        uVar4 = 1;
      }
      cVar2 = (char)uVar4;
      if (3999999 < uVar1) {
        cVar2 = '\0';
      }
    }
    if (cVar2 == '\0') {
      uVar4 = uVar1 / 1000000;
      (*param_1)[1] = uVar4;
      if ((uint *)0x186a0 < param_1[1]) {
        uVar4 = (uVar4 * 300) / 1000;
      }
      (*param_1)[8] = uVar4 + 1;
      if (param_1[1] < (uint *)0x186a1) {
        uVar1 = (uVar1 - 1) / (uint)((int)param_1[1] << 1) + 1 & 0xfff;
        if (uVar1 < 4) {
          uVar1 = 4;
        }
      }
      else {
        if (param_1[2] == (uint *)0x0) {
          uVar4 = (uVar1 - 1) / (uint)((int)param_1[1] * 3) + 1 & 0xfff;
          bVar5 = uVar4 == 0;
          if (bVar5) {
            uVar4 = 1;
          }
          cVar2 = (char)uVar4;
          if (!bVar5) {
            cVar2 = '\0';
          }
        }
        else {
          uVar4 = (uVar1 - 1) / (uint)((int)param_1[1] * 0x19) + 1 & 0xfff;
          bVar5 = uVar4 == 0;
          if (bVar5) {
            uVar4 = 1;
          }
          cVar2 = (char)uVar4;
          if (!bVar5) {
            cVar2 = '\0';
          }
        }
        if (cVar2 == '\0') {
          if (param_1[2] == (uint *)0x0) {
            uVar1 = (uVar1 - 1) / (uint)((int)param_1[1] * 3) + 1 & 0xfff | 0x8000;
          }
          else {
            uVar1 = (uVar1 - 1) / (uint)((int)param_1[1] * 0x19) + 1 & 0xfff | 0xc000;
          }
        }
        else {
          uVar1 = 1;
        }
      }
      (*param_1)[7] = uVar1;
      **param_1 = (uint)param_1[8] | (uint)param_1[7];
      (*param_1)[2] = (uint)param_1[3] | (uint)param_1[4];
      (*param_1)[3] = (uint)param_1[6] | (uint)param_1[5];
      **param_1 = **param_1 | 1;
      param_1[0x10] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


////>>0x08001cb8>>FUN_08001cb8>>////

void FUN_08001cb8(void)

{
  return;
}


////>>0x08001ccc>>FUN_08001ccc>>////

/* WARNING: Removing unreachable block (ram,0x08001d5e) */
/* WARNING: Removing unreachable block (ram,0x08001d70) */
/* WARNING: Removing unreachable block (ram,0x08001d72) */
/* WARNING: Removing unreachable block (ram,0x08001d74) */

undefined4
FUN_08001ccc(uint **param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,uint *param_5,
            undefined2 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  
  iVar1 = HAL_GetTick();
  if (*(char *)((int)param_1 + 0x3d) == ' ') {
    do {
      if ((~(*param_1)[6] & 2) != 0) {
        iVar2 = 0;
        goto LAB_08001d9c;
      }
      iVar2 = HAL_GetTick();
    } while ((uint)(iVar2 - iVar1) < 0x1a);
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar2 = 3;
LAB_08001d9c:
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xf) == '\x01') {
        uVar3 = 2;
      }
      else {
        *(undefined *)(param_1 + 0xf) = 1;
        if ((**param_1 & 1) != 1) {
          **param_1 = **param_1 | 1;
        }
        **param_1 = **param_1 & 0xfffff7ff;
        *(undefined *)((int)param_1 + 0x3d) = 0x21;
        *(undefined *)((int)param_1 + 0x3e) = 0x40;
        param_1[0x10] = (uint *)0x0;
        param_1[9] = param_5;
        *(undefined2 *)((int)param_1 + 0x2a) = param_6;
        param_1[0xb] = (uint *)0xffff0000;
        *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
        iVar2 = I2C_RequestMemoryWrite(param_1,param_2,param_3,param_4,param_7,iVar1);
        if (iVar2 == 0) {
          while (*(short *)(param_1 + 10) != 0) {
            iVar2 = I2C_WaitOnTXEFlagUntilTimeout(param_1,param_7,iVar1);
            if (iVar2 != 0) {
              if (param_1[0x10] == (uint *)0x4) {
                **param_1 = **param_1 | 0x200;
                return 1;
              }
              return 3;
            }
            puVar4 = param_1[9];
            param_1[9] = (uint *)((int)puVar4 + 1);
            (*param_1)[4] = (uint)*(byte *)puVar4;
            *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
            *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
            if ((((*param_1)[5] & 4) == 4) && (*(short *)(param_1 + 10) != 0)) {
              puVar4 = param_1[9];
              param_1[9] = (uint *)((int)puVar4 + 1);
              (*param_1)[4] = (uint)*(byte *)puVar4;
              *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
              *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
            }
          }
          iVar1 = I2C_WaitOnBTFFlagUntilTimeout(param_1,param_7,iVar1);
          if (iVar1 == 0) {
            **param_1 = **param_1 | 0x200;
            *(undefined *)((int)param_1 + 0x3d) = 0x20;
            *(undefined *)((int)param_1 + 0x3e) = 0;
            *(undefined *)(param_1 + 0xf) = 0;
            uVar3 = 0;
          }
          else if (param_1[0x10] == (uint *)0x4) {
            **param_1 = **param_1 | 0x200;
            uVar3 = 1;
          }
          else {
            uVar3 = 3;
          }
        }
        else if (param_1[0x10] == (uint *)0x4) {
          *(undefined *)(param_1 + 0xf) = 0;
          uVar3 = 1;
        }
        else {
          *(undefined *)(param_1 + 0xf) = 0;
          uVar3 = 3;
        }
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


////>>0x08001f6c>>FUN_08001f6c>>////

/* WARNING: Removing unreachable block (ram,0x080024e6) */
/* WARNING: Removing unreachable block (ram,0x080024f8) */
/* WARNING: Removing unreachable block (ram,0x080024fa) */
/* WARNING: Removing unreachable block (ram,0x080024fc) */
/* WARNING: Removing unreachable block (ram,0x08002000) */
/* WARNING: Removing unreachable block (ram,0x08002012) */
/* WARNING: Removing unreachable block (ram,0x08002014) */
/* WARNING: Removing unreachable block (ram,0x08002016) */
/* WARNING: Removing unreachable block (ram,0x080023f4) */
/* WARNING: Removing unreachable block (ram,0x08002406) */
/* WARNING: Removing unreachable block (ram,0x08002408) */
/* WARNING: Removing unreachable block (ram,0x0800240a) */
/* WARNING: Removing unreachable block (ram,0x080022d6) */
/* WARNING: Removing unreachable block (ram,0x080022e8) */
/* WARNING: Removing unreachable block (ram,0x080022ea) */
/* WARNING: Removing unreachable block (ram,0x080022ec) */

undefined4
FUN_08001f6c(uint **param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,uint *param_5,
            undefined2 param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  iVar1 = HAL_GetTick();
  if (*(char *)((int)param_1 + 0x3d) == ' ') {
    do {
      if ((~(*param_1)[6] & 2) != 0) {
        iVar3 = 0;
        goto LAB_08002040;
      }
      iVar3 = HAL_GetTick();
    } while ((uint)(iVar3 - iVar1) < 0x1a);
    param_1[0xc] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar3 = 3;
LAB_08002040:
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0xf) == '\x01') {
        uVar4 = 2;
      }
      else {
        *(undefined *)(param_1 + 0xf) = 1;
        if ((**param_1 & 1) != 1) {
          **param_1 = **param_1 | 1;
        }
        **param_1 = **param_1 & 0xfffff7ff;
        *(undefined *)((int)param_1 + 0x3d) = 0x22;
        *(undefined *)((int)param_1 + 0x3e) = 0x40;
        param_1[0x10] = (uint *)0x0;
        param_1[9] = param_5;
        *(undefined2 *)((int)param_1 + 0x2a) = param_6;
        param_1[0xb] = (uint *)0xffff0000;
        *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
        iVar3 = I2C_RequestMemoryRead(param_1,param_2,param_3,param_4,param_7,iVar1);
        if (iVar3 == 0) {
          if (*(short *)(param_1 + 10) == 0) {
            **param_1 = **param_1 | 0x200;
          }
          else if (*(short *)(param_1 + 10) == 1) {
            **param_1 = **param_1 & 0xfffffbff;
            disableIRQinterrupts();
            **param_1 = **param_1 | 0x200;
            enableIRQinterrupts();
          }
          else if (*(short *)(param_1 + 10) == 2) {
            **param_1 = **param_1 | 0x800;
            disableIRQinterrupts();
            **param_1 = **param_1 & 0xfffffbff;
            enableIRQinterrupts();
          }
          else {
            **param_1 = **param_1 | 0x400;
          }
          while (*(short *)(param_1 + 10) != 0) {
            if (*(ushort *)(param_1 + 10) < 4) {
              if (*(short *)(param_1 + 10) == 1) {
                iVar3 = I2C_WaitOnRXNEFlagUntilTimeout(param_1,param_7,iVar1);
                if (iVar3 != 0) {
                  if (param_1[0x10] == (uint *)0x20) {
                    return 3;
                  }
                  return 1;
                }
                uVar2 = (*param_1)[4];
                puVar5 = param_1[9];
                param_1[9] = (uint *)((int)puVar5 + 1);
                *(char *)puVar5 = (char)uVar2;
                *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
                *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
              }
              else if (*(short *)(param_1 + 10) == 2) {
                do {
                  if ((~(*param_1)[5] & 4) == 0) {
                    iVar3 = 0;
                    goto LAB_080022fa;
                  }
                } while ((param_7 == 0xffffffff) ||
                        ((param_7 != 0 && (iVar3 = HAL_GetTick(), (uint)(iVar3 - iVar1) <= param_7))
                        ));
                param_1[0xc] = (uint *)0x0;
                *(undefined *)((int)param_1 + 0x3d) = 0x20;
                *(undefined *)((int)param_1 + 0x3e) = 0;
                *(undefined *)(param_1 + 0xf) = 0;
                iVar3 = 3;
LAB_080022fa:
                if (iVar3 != 0) {
                  return 3;
                }
                disableIRQinterrupts();
                **param_1 = **param_1 | 0x200;
                uVar2 = (*param_1)[4];
                puVar5 = param_1[9];
                param_1[9] = (uint *)((int)puVar5 + 1);
                *(char *)puVar5 = (char)uVar2;
                *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
                *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
                enableIRQinterrupts();
                uVar2 = (*param_1)[4];
                puVar5 = param_1[9];
                param_1[9] = (uint *)((int)puVar5 + 1);
                *(char *)puVar5 = (char)uVar2;
                *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
                *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
              }
              else {
                do {
                  if ((~(*param_1)[5] & 4) == 0) {
                    iVar3 = 0;
                    goto LAB_08002418;
                  }
                } while ((param_7 == 0xffffffff) ||
                        ((param_7 != 0 && (iVar3 = HAL_GetTick(), (uint)(iVar3 - iVar1) <= param_7))
                        ));
                param_1[0xc] = (uint *)0x0;
                *(undefined *)((int)param_1 + 0x3d) = 0x20;
                *(undefined *)((int)param_1 + 0x3e) = 0;
                *(undefined *)(param_1 + 0xf) = 0;
                iVar3 = 3;
LAB_08002418:
                if (iVar3 != 0) {
                  return 3;
                }
                **param_1 = **param_1 & 0xfffffbff;
                disableIRQinterrupts();
                uVar2 = (*param_1)[4];
                puVar5 = param_1[9];
                param_1[9] = (uint *)((int)puVar5 + 1);
                *(char *)puVar5 = (char)uVar2;
                *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
                *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
                do {
                  if ((~(*param_1)[5] & 4) == 0) {
                    iVar3 = 0;
                    goto LAB_0800250a;
                  }
                } while ((param_7 == 0xffffffff) ||
                        ((param_7 != 0 && (iVar3 = HAL_GetTick(), (uint)(iVar3 - iVar1) <= param_7))
                        ));
                param_1[0xc] = (uint *)0x0;
                *(undefined *)((int)param_1 + 0x3d) = 0x20;
                *(undefined *)((int)param_1 + 0x3e) = 0;
                *(undefined *)(param_1 + 0xf) = 0;
                iVar3 = 3;
LAB_0800250a:
                if (iVar3 != 0) {
                  return 3;
                }
                **param_1 = **param_1 | 0x200;
                uVar2 = (*param_1)[4];
                puVar5 = param_1[9];
                param_1[9] = (uint *)((int)puVar5 + 1);
                *(char *)puVar5 = (char)uVar2;
                *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
                *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
                enableIRQinterrupts();
                uVar2 = (*param_1)[4];
                puVar5 = param_1[9];
                param_1[9] = (uint *)((int)puVar5 + 1);
                *(char *)puVar5 = (char)uVar2;
                *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
                *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
              }
            }
            else {
              iVar3 = I2C_WaitOnRXNEFlagUntilTimeout(param_1,param_7,iVar1);
              if (iVar3 != 0) {
                if (param_1[0x10] == (uint *)0x20) {
                  return 3;
                }
                return 1;
              }
              uVar2 = (*param_1)[4];
              puVar5 = param_1[9];
              param_1[9] = (uint *)((int)puVar5 + 1);
              *(char *)puVar5 = (char)uVar2;
              *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
              *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
              if (((*param_1)[5] & 4) == 4) {
                uVar2 = (*param_1)[4];
                puVar5 = param_1[9];
                param_1[9] = (uint *)((int)puVar5 + 1);
                *(char *)puVar5 = (char)uVar2;
                *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
                *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
              }
            }
          }
          *(undefined *)((int)param_1 + 0x3d) = 0x20;
          *(undefined *)((int)param_1 + 0x3e) = 0;
          *(undefined *)(param_1 + 0xf) = 0;
          uVar4 = 0;
        }
        else if (param_1[0x10] == (uint *)0x4) {
          *(undefined *)(param_1 + 0xf) = 0;
          uVar4 = 1;
        }
        else {
          *(undefined *)(param_1 + 0xf) = 0;
          uVar4 = 3;
        }
      }
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}


////>>0x08002640>>FUN_08002640>>////

/* WARNING: Removing unreachable block (ram,0x080026e8) */
/* WARNING: Removing unreachable block (ram,0x080026fa) */
/* WARNING: Removing unreachable block (ram,0x080026fc) */
/* WARNING: Removing unreachable block (ram,0x080026fe) */

undefined4
FUN_08002640(uint **param_1,byte param_2,undefined2 param_3,short param_4,uint param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  **param_1 = **param_1 | 0x100;
  do {
    if ((~(*param_1)[5] & 1) == 0) {
      iVar1 = 0;
      goto LAB_0800270a;
    }
  } while ((param_5 == 0xffffffff) ||
          ((param_5 != 0 && (iVar1 = HAL_GetTick(), (uint)(iVar1 - param_6) <= param_5))));
  param_1[0xc] = (uint *)0x0;
  *(undefined *)((int)param_1 + 0x3d) = 0x20;
  *(undefined *)((int)param_1 + 0x3e) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  iVar1 = 3;
LAB_0800270a:
  if (iVar1 == 0) {
    (*param_1)[4] = param_2 & 0xfe;
    iVar1 = I2C_WaitOnMasterAddressFlagUntilTimeout(param_1,0x10002,param_5,param_6);
    if (iVar1 == 0) {
      iVar1 = I2C_WaitOnTXEFlagUntilTimeout(param_1,param_5,param_6,(*param_1)[6]);
      if (iVar1 == 0) {
        if (param_4 == 1) {
          (*param_1)[4] = (uint)(byte)param_3;
        }
        else {
          (*param_1)[4] = (uint)(byte)((ushort)param_3 >> 8);
          iVar1 = I2C_WaitOnTXEFlagUntilTimeout(param_1,param_5,param_6);
          if (iVar1 != 0) {
            if (param_1[0x10] == (uint *)0x4) {
              **param_1 = **param_1 | 0x200;
              return 1;
            }
            return 3;
          }
          (*param_1)[4] = (uint)(byte)param_3;
        }
        uVar2 = 0;
      }
      else if (param_1[0x10] == (uint *)0x4) {
        **param_1 = **param_1 | 0x200;
        uVar2 = 1;
      }
      else {
        uVar2 = 3;
      }
    }
    else if (param_1[0x10] == (uint *)0x4) {
      uVar2 = 1;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}


////>>0x080027f4>>FUN_080027f4>>////

/* WARNING: Removing unreachable block (ram,0x080028ae) */
/* WARNING: Removing unreachable block (ram,0x080028c0) */
/* WARNING: Removing unreachable block (ram,0x080028c2) */
/* WARNING: Removing unreachable block (ram,0x080028c4) */
/* WARNING: Removing unreachable block (ram,0x08002a6c) */
/* WARNING: Removing unreachable block (ram,0x08002a7e) */
/* WARNING: Removing unreachable block (ram,0x08002a80) */
/* WARNING: Removing unreachable block (ram,0x08002a82) */

undefined4
FUN_080027f4(uint **param_1,byte param_2,undefined2 param_3,short param_4,uint param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  **param_1 = **param_1 | 0x400;
  **param_1 = **param_1 | 0x100;
  do {
    if ((~(*param_1)[5] & 1) == 0) {
      iVar1 = 0;
      goto LAB_080028d2;
    }
  } while ((param_5 == 0xffffffff) ||
          ((param_5 != 0 && (iVar1 = HAL_GetTick(), (uint)(iVar1 - param_6) <= param_5))));
  param_1[0xc] = (uint *)0x0;
  *(undefined *)((int)param_1 + 0x3d) = 0x20;
  *(undefined *)((int)param_1 + 0x3e) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  iVar1 = 3;
LAB_080028d2:
  if (iVar1 == 0) {
    (*param_1)[4] = param_2 & 0xfe;
    iVar1 = I2C_WaitOnMasterAddressFlagUntilTimeout(param_1,0x10002,param_5,param_6);
    if (iVar1 == 0) {
      iVar1 = I2C_WaitOnTXEFlagUntilTimeout(param_1,param_5,param_6,(*param_1)[6]);
      if (iVar1 == 0) {
        if (param_4 == 1) {
          (*param_1)[4] = (uint)(byte)param_3;
        }
        else {
          (*param_1)[4] = (uint)(byte)((ushort)param_3 >> 8);
          iVar1 = I2C_WaitOnTXEFlagUntilTimeout(param_1,param_5,param_6);
          if (iVar1 != 0) {
            if (param_1[0x10] == (uint *)0x4) {
              **param_1 = **param_1 | 0x200;
              return 1;
            }
            return 3;
          }
          (*param_1)[4] = (uint)(byte)param_3;
        }
        iVar1 = I2C_WaitOnTXEFlagUntilTimeout(param_1,param_5,param_6);
        if (iVar1 == 0) {
          **param_1 = **param_1 | 0x100;
          do {
            if ((~(*param_1)[5] & 1) == 0) {
              iVar1 = 0;
              goto LAB_08002a90;
            }
          } while ((param_5 == 0xffffffff) ||
                  ((param_5 != 0 && (iVar1 = HAL_GetTick(), (uint)(iVar1 - param_6) <= param_5))));
          param_1[0xc] = (uint *)0x0;
          *(undefined *)((int)param_1 + 0x3d) = 0x20;
          *(undefined *)((int)param_1 + 0x3e) = 0;
          *(undefined *)(param_1 + 0xf) = 0;
          iVar1 = 3;
LAB_08002a90:
          if (iVar1 == 0) {
            (*param_1)[4] = (uint)(param_2 | 1);
            iVar1 = I2C_WaitOnMasterAddressFlagUntilTimeout(param_1,0x10002,param_5,param_6);
            if (iVar1 == 0) {
              uVar2 = 0;
            }
            else if (param_1[0x10] == (uint *)0x4) {
              uVar2 = 1;
            }
            else {
              uVar2 = 3;
            }
          }
          else {
            uVar2 = 3;
          }
        }
        else if (param_1[0x10] == (uint *)0x4) {
          **param_1 = **param_1 | 0x200;
          uVar2 = 1;
        }
        else {
          uVar2 = 3;
        }
      }
      else if (param_1[0x10] == (uint *)0x4) {
        **param_1 = **param_1 | 0x200;
        uVar2 = 1;
      }
      else {
        uVar2 = 3;
      }
    }
    else if (param_1[0x10] == (uint *)0x4) {
      uVar2 = 1;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}


////>>0x08002ad8>>FUN_08002ad8>>////

undefined4 FUN_08002ad8(uint **param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  
  do {
    if ((param_2 >> 0x10 & 0xff) == 1) {
      uVar3 = param_2 & ~(*param_1)[5] & 0xffff;
      bVar4 = uVar3 != 0;
      if (bVar4) {
        uVar3 = 1;
      }
      cVar2 = (char)uVar3;
      if (!bVar4) {
        cVar2 = '\0';
      }
    }
    else {
      uVar3 = param_2 & ~(*param_1)[6] & 0xffff;
      bVar4 = uVar3 != 0;
      if (bVar4) {
        uVar3 = 1;
      }
      cVar2 = (char)uVar3;
      if (!bVar4) {
        cVar2 = '\0';
      }
    }
    if (cVar2 == '\0') {
      return 0;
    }
    if (((*param_1)[5] & 0x400) == 0x400) {
      **param_1 = **param_1 | 0x200;
      (*param_1)[5] = 0xfffffbff;
      param_1[0x10] = (uint *)0x4;
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)(param_1 + 0xf) = 0;
      return 1;
    }
  } while ((param_3 == 0xffffffff) ||
          ((param_3 != 0 && (iVar1 = HAL_GetTick(), (uint)(iVar1 - param_4) <= param_3))));
  param_1[0xc] = (uint *)0x0;
  *(undefined *)((int)param_1 + 0x3d) = 0x20;
  *(undefined *)(param_1 + 0xf) = 0;
  return 3;
}


////>>0x08002bb4>>FUN_08002bb4>>////

undefined4 FUN_08002bb4(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  while( true ) {
    if ((*(uint *)(*param_1 + 0x14) & 0x80) == 0x80) {
      return 0;
    }
    iVar1 = I2C_IsAcknowledgeFailed(param_1);
    if (iVar1 != 0) break;
    if ((param_2 != 0xffffffff) &&
       ((param_2 == 0 || (iVar1 = HAL_GetTick(), param_2 < (uint)(iVar1 - param_3))))) {
      param_1[0x10] = param_1[0x10] | 0x20;
      param_1[0xc] = 0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)(param_1 + 0xf) = 0;
      return 3;
    }
  }
  return 1;
}


////>>0x08002c2e>>FUN_08002c2e>>////

undefined4 FUN_08002c2e(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  while( true ) {
    if ((*(uint *)(*param_1 + 0x14) & 4) == 4) {
      return 0;
    }
    iVar1 = I2C_IsAcknowledgeFailed(param_1);
    if (iVar1 != 0) break;
    if ((param_2 != 0xffffffff) &&
       ((param_2 == 0 || (iVar1 = HAL_GetTick(), param_2 < (uint)(iVar1 - param_3))))) {
      param_1[0x10] = param_1[0x10] | 0x20;
      param_1[0xc] = 0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)(param_1 + 0xf) = 0;
      return 3;
    }
  }
  return 1;
}


////>>0x08002ca8>>FUN_08002ca8>>////

undefined4 FUN_08002ca8(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  while( true ) {
    if ((*(uint *)(*param_1 + 0x14) & 0x40) == 0x40) {
      return 0;
    }
    if ((*(uint *)(*param_1 + 0x14) & 0x10) == 0x10) break;
    if ((param_2 == 0) || (iVar1 = HAL_GetTick(), param_2 < (uint)(iVar1 - param_3))) {
      param_1[0x10] = param_1[0x10] | 0x20;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)(param_1 + 0xf) = 0;
      return 3;
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0xffffffef;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  *(undefined *)((int)param_1 + 0x3d) = 0x20;
  *(undefined *)(param_1 + 0xf) = 0;
  return 1;
}


////>>0x08002d3c>>FUN_08002d3c>>////

bool FUN_08002d3c(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(uint *)(*param_1 + 0x14) & 0x400) == 0x400;
  if (bVar1) {
    *(undefined4 *)(*param_1 + 0x14) = 0xfffffbff;
    param_1[0x10] = 4;
    param_1[0xc] = 0;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return bVar1;
}


////>>0x08002d8a>>FUN_08002d8a>>////

void FUN_08002d8a(void)

{
  return;
}


////>>0x08002d98>>FUN_08002d98>>////



undefined4 FUN_08002d98(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((*param_1 & 1) != 0) {
    if (((_DAT_40021004 & 0xc) == 4) ||
       (((_DAT_40021004 & 0xc) == 8 && ((_DAT_40021004 & 0x10000) == 0x10000)))) {
      if (((_DAT_40021000 & 0x20000) != 0) && (param_1[1] == 0)) {
        return 1;
      }
    }
    else {
      if (param_1[1] == 0x10000) {
        _DAT_40021000 = _DAT_40021000 | 0x10000;
      }
      else if (param_1[1] == 0) {
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      else if (param_1[1] == 0x50000) {
        _DAT_40021000 = _DAT_40021000 | 0x50000;
      }
      else {
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      if (param_1[1] == 0) {
        iVar1 = HAL_GetTick();
        while ((_DAT_40021000 & 0x20000) != 0) {
          iVar2 = HAL_GetTick();
          if (100 < (uint)(iVar2 - iVar1)) {
            return 3;
          }
        }
      }
      else {
        iVar1 = HAL_GetTick();
        while ((_DAT_40021000 & 0x20000) == 0) {
          iVar2 = HAL_GetTick();
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
      _DAT_40021000 = param_1[5] << 3 | _DAT_40021000 & 0xffffff07;
    }
    else if (param_1[4] == 0) {
      _DAT_42420000 = 0;
      iVar1 = HAL_GetTick();
      while ((_DAT_40021000 & 2) != 0) {
        iVar2 = HAL_GetTick();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      _DAT_42420000 = 1;
      iVar1 = HAL_GetTick();
      while ((_DAT_40021000 & 2) == 0) {
        iVar2 = HAL_GetTick();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      _DAT_40021000 = param_1[5] << 3 | _DAT_40021000 & 0xffffff07;
    }
  }
  if ((*param_1 & 8) != 0) {
    if (param_1[6] == 0) {
      _DAT_42420480 = 0;
      iVar1 = HAL_GetTick();
      while ((_DAT_40021024 & 2) != 0) {
        iVar2 = HAL_GetTick();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      _DAT_42420480 = 1;
      iVar1 = HAL_GetTick();
      while ((_DAT_40021024 & 2) == 0) {
        iVar2 = HAL_GetTick();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      RCC_Delay(1);
    }
  }
  if ((*param_1 & 4) != 0) {
    bVar4 = (_DAT_4002101c & 0x10000000) == 0;
    if (bVar4) {
      _DAT_4002101c = _DAT_4002101c | 0x10000000;
    }
    if ((_DAT_40007000 & 0x100) == 0) {
      _DAT_40007000 = _DAT_40007000 | 0x100;
      iVar1 = HAL_GetTick();
      while ((_DAT_40007000 & 0x100) == 0) {
        iVar2 = HAL_GetTick();
        if (100 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    if (param_1[3] == 1) {
      _DAT_40021020 = _DAT_40021020 | 1;
    }
    else if (param_1[3] == 0) {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
    }
    else if (param_1[3] == 5) {
      _DAT_40021020 = _DAT_40021020 | 5;
    }
    else {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
    }
    if (param_1[3] == 0) {
      iVar1 = HAL_GetTick();
      while ((_DAT_40021020 & 2) != 0) {
        iVar2 = HAL_GetTick();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      iVar1 = HAL_GetTick();
      while ((_DAT_40021020 & 2) == 0) {
        iVar2 = HAL_GetTick();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    if (bVar4) {
      _DAT_4002101c = _DAT_4002101c & 0xefffffff;
    }
  }
  if (param_1[7] == 0) {
LAB_0800324a:
    uVar3 = 0;
  }
  else if ((_DAT_40021004 & 0xc) == 8) {
    uVar3 = 1;
  }
  else if (param_1[7] == 2) {
    _DAT_42420060 = 0;
    iVar1 = HAL_GetTick();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) {
        if (param_1[8] == 0x10000) {
          _DAT_40021004 = param_1[2] | _DAT_40021004 & 0xfffdffff;
        }
        _DAT_40021004 = param_1[9] | param_1[8] | _DAT_40021004 & 0xffc2ffff;
        _DAT_42420060 = 1;
        iVar1 = HAL_GetTick();
        while ((_DAT_40021000 & 0x2000000) == 0) {
          iVar2 = HAL_GetTick();
          if (2 < (uint)(iVar2 - iVar1)) {
            return 3;
          }
        }
        goto LAB_0800324a;
      }
      iVar2 = HAL_GetTick();
    } while ((uint)(iVar2 - iVar1) < 3);
    uVar3 = 3;
  }
  else {
    _DAT_42420060 = 0;
    iVar1 = HAL_GetTick();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) goto LAB_0800324a;
      iVar2 = HAL_GetTick();
    } while ((uint)(iVar2 - iVar1) < 3);
    uVar3 = 3;
  }
  return uVar3;
}


////>>0x08003260>>FUN_08003260>>////



undefined4 FUN_08003260(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (((_DAT_40022000 & 7) < param_2) &&
     (_DAT_40022000 = param_2 | _DAT_40022000 & 0xfffffff8, param_2 != (param_2 & 7))) {
    uVar4 = 1;
  }
  else {
    if ((*param_1 & 2) != 0) {
      _DAT_40021004 = param_1[2] | _DAT_40021004 & 0xffffff0f;
    }
    if ((*param_1 & 1) == 0) {
LAB_08003394:
      if ((param_2 < (_DAT_40022000 & 7)) &&
         (_DAT_40022000 = param_2 | _DAT_40022000 & 0xfffffff8, param_2 != (param_2 & 7))) {
        uVar4 = 1;
      }
      else {
        if ((*param_1 & 4) != 0) {
          _DAT_40021004 = param_1[3] | _DAT_40021004 & 0xfffff8ff;
        }
        if ((*param_1 & 8) != 0) {
          _DAT_40021004 = param_1[4] << 3 | _DAT_40021004 & 0xffffc7ff;
        }
        uVar3 = HAL_RCC_GetSysClockFreq();
        DAT_20000018 = uVar3 >> (&DAT_08009eb0)[_DAT_40021004 >> 4 & 0xf];
        HAL_InitTick(0xf);
        uVar4 = 0;
      }
    }
    else {
      if (param_1[1] == 1) {
        if ((_DAT_40021000 & 0x20000) == 0) {
          return 1;
        }
      }
      else if ((param_1[1] != 2) && ((_DAT_40021000 & 2) == 0)) {
        return 1;
      }
      _DAT_40021004 = param_1[1] | _DAT_40021004 & 0xfffffffc;
      iVar1 = HAL_GetTick();
      if (param_1[1] == 1) {
        do {
          if ((_DAT_40021004 & 0xc) == 4) goto LAB_08003394;
          iVar2 = HAL_GetTick();
        } while ((uint)(iVar2 - iVar1) < 0x1389);
        uVar4 = 3;
      }
      else if (param_1[1] == 2) {
        do {
          if ((_DAT_40021004 & 0xc) == 8) goto LAB_08003394;
          iVar2 = HAL_GetTick();
        } while ((uint)(iVar2 - iVar1) < 0x1389);
        uVar4 = 3;
      }
      else {
        do {
          if ((_DAT_40021004 & 0xc) == 0) goto LAB_08003394;
          iVar2 = HAL_GetTick();
        } while ((uint)(iVar2 - iVar1) < 0x1389);
        uVar4 = 3;
      }
    }
  }
  return uVar4;
}


////>>0x08003440>>FUN_08003440>>////



uint FUN_08003440(void)

{
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_2c = 0x5040302;
  uStack_28 = 0x9080706;
  uStack_24 = 0xd0c0b0a;
  uStack_20 = 0x10100f0e;
  local_30 = 0x201;
  local_18 = 0;
  local_c = 0;
  local_1c = 0;
  local_10 = 0;
  local_14 = _DAT_40021004;
  if ((_DAT_40021004 & 0xc) == 4) {
    local_10 = 8000000;
  }
  else if ((_DAT_40021004 & 0xc) == 8) {
    local_1c = (uint)*(byte *)((int)&local_2c + (_DAT_40021004 >> 0x12 & 0xf));
    if ((_DAT_40021004 & 0x10000) == 0) {
      local_c = local_1c * 4000000;
    }
    else {
      local_c = (local_1c * 8000000) / (uint)*(byte *)((int)&local_30 + (_DAT_40021004 >> 0x11 & 1))
      ;
    }
    local_10 = local_c;
  }
  else {
    local_10 = 8000000;
  }
  return local_10;
}


////>>0x08003504>>FUN_08003504>>////

undefined4 FUN_08003504(void)

{
  return DAT_20000018;
}


////>>0x08003518>>FUN_08003518>>////



uint FUN_08003518(void)

{
  uint uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> *(sbyte *)((int)&DAT_08009ec0 + (_DAT_40021004 >> 8 & 7));
}


////>>0x08003540>>FUN_08003540>>////



uint FUN_08003540(void)

{
  uint uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> *(sbyte *)((int)&DAT_08009ec0 + (_DAT_40021004 >> 0xb & 7));
}


////>>0x08003568>>FUN_08003568>>////

void FUN_08003568(int param_1)

{
  bool bVar1;
  int local_c;
  
  local_c = param_1 * (DAT_20000018 / 8000);
  do {
    bVar1 = local_c != 0;
    local_c = local_c + -1;
  } while (bVar1);
  return;
}


////>>0x080035a4>>FUN_080035a4>>////

undefined4 FUN_080035a4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      *(undefined *)(param_1 + 0xf) = 0;
      HAL_TIM_Base_MspInit(param_1);
    }
    *(undefined *)((int)param_1 + 0x3d) = 2;
    TIM_Base_SetConfig(*param_1,param_1 + 1);
    *(undefined *)((int)param_1 + 0x3d) = 1;
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x080035fa>>FUN_080035fa>>////

void FUN_080035fa(void)

{
  return;
}


////>>0x0800360c>>FUN_0800360c>>////

undefined4 FUN_0800360c(uint **param_1)

{
  (*param_1)[3] = (*param_1)[3] | 1;
  **param_1 = **param_1 | 1;
  return 0;
}


////>>0x08003640>>FUN_08003640>>////

undefined4 FUN_08003640(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      *(undefined *)(param_1 + 0xf) = 0;
      HAL_TIM_PWM_MspInit(param_1);
    }
    *(undefined *)((int)param_1 + 0x3d) = 2;
    TIM_Base_SetConfig(*param_1,param_1 + 1);
    *(undefined *)((int)param_1 + 0x3d) = 1;
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08003696>>FUN_08003696>>////

void FUN_08003696(void)

{
  return;
}


////>>0x080036a8>>FUN_080036a8>>////

undefined4 FUN_080036a8(uint **param_1,undefined4 param_2)

{
  TIM_CCxChannelCmd(*param_1,param_2,1);
  if (*param_1 == (uint *)0x40012c00) {
    (*param_1)[0x11] = (*param_1)[0x11] | 0x8000;
  }
  **param_1 = **param_1 | 1;
  return 0;
}


////>>0x080036f8>>FUN_080036f8>>////

void FUN_080036f8(int *param_1)

{
  if (((*(uint *)(*param_1 + 0x10) & 2) == 2) && ((*(uint *)(*param_1 + 0xc) & 2) == 2)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xfffffffd;
    *(undefined *)(param_1 + 7) = 1;
    if ((*(uint *)(*param_1 + 0x18) & 3) == 0) {
      HAL_TIM_OC_DelayElapsedCallback(param_1);
      HAL_TIM_PWM_PulseFinishedCallback(param_1);
    }
    else {
      HAL_TIM_IC_CaptureCallback(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  if (((*(uint *)(*param_1 + 0x10) & 4) == 4) && ((*(uint *)(*param_1 + 0xc) & 4) == 4)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xfffffffb;
    *(undefined *)(param_1 + 7) = 2;
    if ((*(uint *)(*param_1 + 0x18) & 0x300) == 0) {
      HAL_TIM_OC_DelayElapsedCallback(param_1);
      HAL_TIM_PWM_PulseFinishedCallback(param_1);
    }
    else {
      HAL_TIM_IC_CaptureCallback(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  if (((*(uint *)(*param_1 + 0x10) & 8) == 8) && ((*(uint *)(*param_1 + 0xc) & 8) == 8)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xfffffff7;
    *(undefined *)(param_1 + 7) = 4;
    if ((*(uint *)(*param_1 + 0x1c) & 3) == 0) {
      HAL_TIM_OC_DelayElapsedCallback(param_1);
      HAL_TIM_PWM_PulseFinishedCallback(param_1);
    }
    else {
      HAL_TIM_IC_CaptureCallback(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  if (((*(uint *)(*param_1 + 0x10) & 0x10) == 0x10) && ((*(uint *)(*param_1 + 0xc) & 0x10) == 0x10))
  {
    *(undefined4 *)(*param_1 + 0x10) = 0xffffffef;
    *(undefined *)(param_1 + 7) = 8;
    if ((*(uint *)(*param_1 + 0x1c) & 0x300) == 0) {
      HAL_TIM_OC_DelayElapsedCallback(param_1);
      HAL_TIM_PWM_PulseFinishedCallback(param_1);
    }
    else {
      HAL_TIM_IC_CaptureCallback(param_1);
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  if (((*(uint *)(*param_1 + 0x10) & 1) == 1) && ((*(uint *)(*param_1 + 0xc) & 1) == 1)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xfffffffe;
    HAL_TIM_PeriodElapsedCallback(param_1);
  }
  if (((*(uint *)(*param_1 + 0x10) & 0x80) == 0x80) && ((*(uint *)(*param_1 + 0xc) & 0x80) == 0x80))
  {
    *(undefined4 *)(*param_1 + 0x10) = 0xffffff7f;
    HAL_TIMEx_BreakCallback(param_1);
  }
  if (((*(uint *)(*param_1 + 0x10) & 0x40) == 0x40) && ((*(uint *)(*param_1 + 0xc) & 0x40) == 0x40))
  {
    *(undefined4 *)(*param_1 + 0x10) = 0xffffffbf;
    HAL_TIM_TriggerCallback(param_1);
  }
  if (((*(uint *)(*param_1 + 0x10) & 0x20) == 0x20) && ((*(uint *)(*param_1 + 0xc) & 0x20) == 0x20))
  {
    *(undefined4 *)(*param_1 + 0x10) = 0xffffffdf;
    HAL_TIMEx_CommutationCallback(param_1);
  }
  return;
}


////>>0x08003908>>FUN_08003908>>////

undefined4 FUN_08003908(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xf) == '\x01') {
    uVar1 = 2;
  }
  else {
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)((int)param_1 + 0x3d) = 2;
    switch(param_3) {
    case 0:
      TIM_OC1_SetConfig(*param_1,param_2);
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 8;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffffb;
      *(uint *)(*param_1 + 0x18) = *(uint *)(param_2 + 0x10) | *(uint *)(*param_1 + 0x18);
      break;
    case 4:
      TIM_OC2_SetConfig(*param_1,param_2);
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x800;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffbff;
      *(uint *)(*param_1 + 0x18) = *(int *)(param_2 + 0x10) << 8 | *(uint *)(*param_1 + 0x18);
      break;
    case 8:
      TIM_OC3_SetConfig(*param_1,param_2);
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 8;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffffffb;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(param_2 + 0x10) | *(uint *)(*param_1 + 0x1c);
      break;
    case 0xc:
      TIM_OC4_SetConfig(*param_1,param_2);
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 0x800;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffffbff;
      *(uint *)(*param_1 + 0x1c) = *(int *)(param_2 + 0x10) << 8 | *(uint *)(*param_1 + 0x1c);
    }
    *(undefined *)((int)param_1 + 0x3d) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08003a94>>FUN_08003a94>>////

undefined4 FUN_08003a94(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xf) == '\x01') {
    uVar1 = 2;
  }
  else {
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)((int)param_1 + 0x3d) = 2;
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffff0088;
    uVar2 = *param_2;
    if (uVar2 == 0x40) {
      TIM_TI1_ConfigInputStage(*param_1,param_2[1],param_2[3]);
      TIM_ITRx_SetConfig(*param_1,0x40);
    }
    else if (uVar2 < 0x41) {
      if (uVar2 == 0x10) {
        TIM_ITRx_SetConfig(*param_1,0x10);
      }
      else if (uVar2 < 0x11) {
        if (uVar2 == 0) {
          TIM_ITRx_SetConfig(*param_1,0);
        }
      }
      else if (uVar2 == 0x20) {
        TIM_ITRx_SetConfig(*param_1,0x20);
      }
      else if (uVar2 == 0x30) {
        TIM_ITRx_SetConfig(*param_1,0x30);
      }
    }
    else if (uVar2 == 0x70) {
      TIM_ETR_SetConfig(*param_1,param_2[2],param_2[1],param_2[3]);
      *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffffff88 | 0x77;
    }
    else if (uVar2 < 0x71) {
      if (uVar2 == 0x50) {
        TIM_TI1_ConfigInputStage(*param_1,param_2[1],param_2[3]);
        TIM_ITRx_SetConfig(*param_1,0x50);
      }
      else if (uVar2 == 0x60) {
        TIM_TI2_ConfigInputStage(*param_1,param_2[1],param_2[3]);
        TIM_ITRx_SetConfig(*param_1,0x60);
      }
    }
    else if (uVar2 == 0x1000) {
      *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xfffffff8;
    }
    else if (uVar2 == 0x2000) {
      TIM_ETR_SetConfig(*param_1,param_2[2],param_2[1],param_2[3]);
      *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 0x4000;
    }
    *(undefined *)((int)param_1 + 0x3d) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08003c4a>>FUN_08003c4a>>////

void FUN_08003c4a(void)

{
  return;
}


////>>0x08003c5c>>FUN_08003c5c>>////

void FUN_08003c5c(void)

{
  return;
}


////>>0x08003c6e>>FUN_08003c6e>>////

void FUN_08003c6e(void)

{
  return;
}


////>>0x08003c80>>FUN_08003c80>>////

void FUN_08003c80(void)

{
  return;
}


////>>0x08003c94>>FUN_08003c94>>////

void FUN_08003c94(uint *param_1,uint *param_2)

{
  uint local_c;
  
  local_c = *param_1;
  if ((((param_1 == (uint *)0x40012c00) || (param_1 == (uint *)0x40000000)) ||
      (param_1 == (uint *)0x40000400)) || (param_1 == (uint *)0x40000800)) {
    local_c = param_2[1] | local_c & 0xffffff8f;
  }
  if (((param_1 == (uint *)0x40012c00) || (param_1 == (uint *)0x40000000)) ||
     ((param_1 == (uint *)0x40000400 || (param_1 == (uint *)0x40000800)))) {
    local_c = param_2[3] | local_c & 0xfffffcff;
  }
  *param_1 = param_2[5] | local_c & 0xffffff7f;
  param_1[0xb] = param_2[2];
  param_1[10] = *param_2;
  if (param_1 == (uint *)0x40012c00) {
    uRam40012c30 = param_2[4];
  }
  param_1[5] = 1;
  return;
}


////>>0x08003d60>>FUN_08003d60>>////

void FUN_08003d60(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_10;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  local_10 = *(uint *)(param_1 + 4);
  uVar1 = *param_2;
  uVar2 = param_2[2] | *(uint *)(param_1 + 0x20) & 0xfffffffd;
  if (param_1 == 0x40012c00) {
    uVar2 = (param_2[3] | uVar2 & 0xfffffff7) & 0xfffffffb;
    local_10 = param_2[6] | param_2[5] | local_10 & 0xfffffcff;
  }
  *(uint *)(param_1 + 4) = local_10;
  *(uint *)(param_1 + 0x18) = uVar1 | *(uint *)(param_1 + 0x18) & 0xffffff8c;
  *(uint *)(param_1 + 0x34) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar2;
  return;
}


////>>0x08003e38>>FUN_08003e38>>////

void FUN_08003e38(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
  local_10 = *(uint *)(param_1 + 4);
  iVar1 = *param_2;
  uVar2 = param_2[2] << 4 | *(uint *)(param_1 + 0x20) & 0xffffffdf;
  if (param_1 == 0x40012c00) {
    uVar2 = (param_2[3] << 4 | uVar2 & 0xffffff7f) & 0xffffffbf;
    local_10 = param_2[6] << 2 | param_2[5] << 2 | local_10 & 0xfffff3ff;
  }
  *(uint *)(param_1 + 4) = local_10;
  *(uint *)(param_1 + 0x18) = iVar1 << 8 | *(uint *)(param_1 + 0x18) & 0xffff8cff;
  *(int *)(param_1 + 0x38) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar2;
  return;
}


////>>0x08003f18>>FUN_08003f18>>////

void FUN_08003f18(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_10;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
  local_10 = *(uint *)(param_1 + 4);
  uVar1 = *param_2;
  uVar2 = param_2[2] << 8 | *(uint *)(param_1 + 0x20) & 0xfffffdff;
  if (param_1 == 0x40012c00) {
    uVar2 = (param_2[3] << 8 | uVar2 & 0xfffff7ff) & 0xfffffbff;
    local_10 = param_2[6] << 4 | param_2[5] << 4 | local_10 & 0xffffcfff;
  }
  *(uint *)(param_1 + 4) = local_10;
  *(uint *)(param_1 + 0x1c) = uVar1 | *(uint *)(param_1 + 0x1c) & 0xffffff8c;
  *(uint *)(param_1 + 0x3c) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar2;
  return;
}


////>>0x08003ff8>>FUN_08003ff8>>////

void FUN_08003ff8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint local_c;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffefff;
  local_c = *(uint *)(param_1 + 4);
  iVar1 = *param_2;
  iVar2 = param_2[2];
  if (param_1 == 0x40012c00) {
    local_c = param_2[5] << 6 | local_c & 0xffffbfff;
  }
  *(uint *)(param_1 + 4) = local_c;
  *(uint *)(param_1 + 0x1c) = iVar1 << 8 | *(uint *)(param_1 + 0x1c) & 0xffff8cff;
  *(int *)(param_1 + 0x40) = param_2[1];
  *(uint *)(param_1 + 0x20) = iVar2 << 0xc | *(uint *)(param_1 + 0x20) & 0xffffdfff;
  return;
}


////>>0x080040a0>>FUN_080040a0>>////

void FUN_080040a0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  *(uint *)(param_1 + 0x18) = param_3 << 4 | *(uint *)(param_1 + 0x18) & 0xffffff0f;
  *(uint *)(param_1 + 0x20) = param_2 | uVar1 & 0xfffffff5;
  return;
}


////>>0x08004104>>FUN_08004104>>////

void FUN_08004104(int param_1,int param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
  *(uint *)(param_1 + 0x18) = param_3 << 0xc | *(uint *)(param_1 + 0x18) & 0xffff0fff;
  *(uint *)(param_1 + 0x20) = param_2 << 4 | *(uint *)(param_1 + 0x20) & 0xffffff5f;
  return;
}


////>>0x0800416a>>FUN_0800416a>>////

void FUN_0800416a(int param_1,ushort param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff8f | (uint)(param_2 | 7);
  return;
}


////>>0x080041a8>>FUN_080041a8>>////

void FUN_080041a8(int param_1,uint param_2,uint param_3,int param_4)

{
  *(uint *)(param_1 + 8) = param_2 | param_4 << 8 | param_3 | *(uint *)(param_1 + 8) & 0xffff00ff;
  return;
}


////>>0x080041ea>>FUN_080041ea>>////

void FUN_080041ea(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_3 << (param_2 & 0xff);
  return;
}


////>>0x0800422e>>FUN_0800422e>>////

undefined4 FUN_0800422e(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xf) == '\x01') {
    uVar1 = 2;
  }
  else {
    *(undefined *)(param_1 + 0xf) = 1;
    *(uint *)(*param_1 + 0x44) =
         param_2[6] |
         (param_2[6] |
         (param_2[5] |
         (param_2[4] |
         (*param_2 | (param_2[1] | (param_2[2] | param_2[3] & 0xfffffcff) & 0xfffffbff) & 0xfffff7ff
         ) & 0xffffefff) & 0xffffdfff) & 0xffffbfff) & 0xffff7fff;
    *(undefined *)(param_1 + 0xf) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x080042de>>FUN_080042de>>////

undefined4 FUN_080042de(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xf) == '\x01') {
    uVar1 = 2;
  }
  else {
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)((int)param_1 + 0x3d) = 2;
    *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xffffff8f;
    *(uint *)(*param_1 + 4) = *param_2 | *(uint *)(*param_1 + 4);
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffffff7f;
    *(uint *)(*param_1 + 8) = param_2[1] | *(uint *)(*param_1 + 8);
    *(undefined *)((int)param_1 + 0x3d) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08004366>>FUN_08004366>>////

void FUN_08004366(void)

{
  return;
}


////>>0x08004378>>FUN_08004378>>////

void FUN_08004378(void)

{
  return;
}


////>>0x0800438a>>FUN_0800438a>>////

undefined4 FUN_0800438a(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x39) == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      HAL_UART_MspInit(param_1);
    }
    *(undefined *)((int)param_1 + 0x39) = 0x24;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
    UART_SetConfig(param_1);
    *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffb7ff;
    *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffffd5;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x2000;
    param_1[0xf] = 0;
    *(undefined *)((int)param_1 + 0x39) = 0x20;
    *(undefined *)((int)param_1 + 0x3a) = 0x20;
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08004424>>FUN_08004424>>////

void FUN_08004424(void)

{
  return;
}


////>>0x08004436>>FUN_08004436>>////

undefined4 FUN_08004436(uint **param_1,ushort *param_2,short param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *local_58;
  
  if (*(char *)((int)param_1 + 0x39) == ' ') {
    if ((param_2 == (ushort *)0x0) || (param_3 == 0)) {
      uVar3 = 1;
    }
    else if (*(char *)(param_1 + 0xe) == '\x01') {
      uVar3 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
      param_1[0xf] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x39) = 0x21;
      iVar1 = HAL_GetTick();
      *(short *)(param_1 + 9) = param_3;
      *(short *)((int)param_1 + 0x26) = param_3;
      local_58 = param_2;
      while (*(short *)((int)param_1 + 0x26) != 0) {
        *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + -1;
        if (param_1[2] == (uint *)0x1000) {
          do {
            if ((**param_1 & 0x80) == 0x80) {
              iVar2 = 0;
              goto LAB_0800454c;
            }
          } while ((param_4 == 0xffffffff) ||
                  ((param_4 != 0 && (iVar2 = HAL_GetTick(), (uint)(iVar2 - iVar1) <= param_4))));
          (*param_1)[3] = (*param_1)[3] & 0xfffffe5f;
          (*param_1)[5] = (*param_1)[5] & 0xfffffffe;
          *(undefined *)((int)param_1 + 0x39) = 0x20;
          *(undefined *)((int)param_1 + 0x3a) = 0x20;
          *(undefined *)(param_1 + 0xe) = 0;
          iVar2 = 3;
LAB_0800454c:
          if (iVar2 != 0) {
            return 3;
          }
          (*param_1)[1] = *local_58 & 0x1ff;
          if (param_1[4] == (uint *)0x0) {
            local_58 = local_58 + 1;
          }
          else {
            local_58 = (ushort *)((int)local_58 + 1);
          }
        }
        else {
          do {
            if ((**param_1 & 0x80) == 0x80) {
              iVar2 = 0;
              goto LAB_08004614;
            }
          } while ((param_4 == 0xffffffff) ||
                  ((param_4 != 0 && (iVar2 = HAL_GetTick(), (uint)(iVar2 - iVar1) <= param_4))));
          (*param_1)[3] = (*param_1)[3] & 0xfffffe5f;
          (*param_1)[5] = (*param_1)[5] & 0xfffffffe;
          *(undefined *)((int)param_1 + 0x39) = 0x20;
          *(undefined *)((int)param_1 + 0x3a) = 0x20;
          *(undefined *)(param_1 + 0xe) = 0;
          iVar2 = 3;
LAB_08004614:
          if (iVar2 != 0) {
            return 3;
          }
          (*param_1)[1] = (uint)*(byte *)local_58;
          local_58 = (ushort *)((int)local_58 + 1);
        }
      }
      do {
        if ((**param_1 & 0x40) == 0x40) {
          iVar1 = 0;
          goto LAB_080046c6;
        }
      } while ((param_4 == 0xffffffff) ||
              ((param_4 != 0 && (iVar2 = HAL_GetTick(), (uint)(iVar2 - iVar1) <= param_4))));
      (*param_1)[3] = (*param_1)[3] & 0xfffffe5f;
      (*param_1)[5] = (*param_1)[5] & 0xfffffffe;
      *(undefined *)((int)param_1 + 0x39) = 0x20;
      *(undefined *)((int)param_1 + 0x3a) = 0x20;
      *(undefined *)(param_1 + 0xe) = 0;
      iVar1 = 3;
LAB_080046c6:
      if (iVar1 == 0) {
        *(undefined *)((int)param_1 + 0x39) = 0x20;
        *(undefined *)(param_1 + 0xe) = 0;
        uVar3 = 0;
      }
      else {
        uVar3 = 3;
      }
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


////>>0x080046ec>>FUN_080046ec>>////

void FUN_080046ec(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  *(uint *)(*param_1 + 0x10) = param_1[3] | *(uint *)(*param_1 + 0x10) & 0xffffcfff;
  *(uint *)(*param_1 + 0xc) =
       *(uint *)(*param_1 + 0xc) & 0xffffe9f3 | param_1[5] | param_1[2] | param_1[4];
  *(uint *)(*param_1 + 0x14) = param_1[6] | *(uint *)(*param_1 + 0x14) & 0xfffffcff;
  if (*param_1 == 0x40013800) {
    uVar6 = HAL_RCC_GetPCLK2Freq();
    uVar1 = (ulonglong)(uint)((int)uVar6 * 0x19) / (ulonglong)(uint)(param_1[1] << 2);
    iVar2 = HAL_RCC_GetPCLK2Freq
                      ((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)(uVar1 * 0x51eb851f));
    iVar3 = param_1[1];
    uVar6 = HAL_RCC_GetPCLK2Freq();
    uVar4 = ((uint)(iVar2 * 0x19) / (uint)(iVar3 << 2) +
            (int)(((ulonglong)(uint)((int)uVar6 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) / 100)
            * -100) * 0x10 + 0x32;
    iVar2 = HAL_RCC_GetPCLK2Freq((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4 * 0x51eb851f);
    iVar5 = param_1[1];
    iVar3 = HAL_RCC_GetPCLK2Freq();
    *(uint *)(*param_1 + 8) =
         ((((uint)(iVar2 * 0x19) / (uint)(iVar5 << 2) +
           (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) / 100) *
           -100) * 0x10 + 0x32) / 100 & 0xf) + (int)(uVar1 / 100) * 0x10 + (uVar4 / 100 & 0xf0);
  }
  else {
    uVar6 = HAL_RCC_GetPCLK1Freq();
    uVar1 = (ulonglong)(uint)((int)uVar6 * 0x19) / (ulonglong)(uint)(param_1[1] << 2);
    iVar2 = HAL_RCC_GetPCLK1Freq
                      ((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)(uVar1 * 0x51eb851f));
    iVar3 = param_1[1];
    uVar6 = HAL_RCC_GetPCLK1Freq();
    uVar4 = ((uint)(iVar2 * 0x19) / (uint)(iVar3 << 2) +
            (int)(((ulonglong)(uint)((int)uVar6 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) / 100)
            * -100) * 0x10 + 0x32;
    iVar2 = HAL_RCC_GetPCLK1Freq((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4 * 0x51eb851f);
    iVar5 = param_1[1];
    iVar3 = HAL_RCC_GetPCLK1Freq();
    *(uint *)(*param_1 + 8) =
         ((((uint)(iVar2 * 0x19) / (uint)(iVar5 << 2) +
           (int)(((ulonglong)(uint)(iVar3 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) / 100) *
           -100) * 0x10 + 0x32) / 100 & 0xf) + (int)(uVar1 / 100) * 0x10 + (uVar4 / 100 & 0xf0);
  }
  return;
}


////>>0x0800491c>>FUN_0800491c>>////

void FUN_0800491c(undefined4 *param_1)

{
  undefined local_13;
  undefined local_12;
  undefined local_11 [5];
  
  local_13 = 0;
  (*DAT_20000a54)(0xd0,0x6b,&local_13,1);
  local_12 = 0x10;
  (*DAT_20000a54)(0xd0,0x1c,&local_12,1);
  local_11[0] = 8;
  (*DAT_20000a54)(0xd0,0x1b,local_11,1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  mpu6050_calibrate(param_1);
  return;
}


////>>0x080049cc>>FUN_080049cc>>////

void FUN_080049cc(int param_1)

{
  undefined4 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 1;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_24 = (*DAT_20000a50)();
  local_1c = 0;
  while( true ) {
    if (local_20 <= local_1c) break;
    local_28 = 0;
    local_2c = 0;
    mpu6050_update(param_1);
    mpu6050_calc_acc_pitch_roll(param_1,&local_28,&local_2c);
    local_14 = __addsf3(local_14,local_28);
    local_18 = __addsf3(local_18,local_2c);
    local_c = __addsf3(local_c,*(undefined4 *)(param_1 + 0x10));
    local_10 = __addsf3(local_10,*(undefined4 *)(param_1 + 0x14));
    local_24 = (*DAT_20000a50)();
    local_1c = local_1c + 1;
  }
  uVar1 = __floatsisf(local_20);
  uVar1 = __aeabi_fdiv(local_c,uVar1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = __floatsisf(local_20);
  uVar1 = __aeabi_fdiv(local_10,uVar1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = __floatsisf(local_20);
  uVar1 = __aeabi_fdiv(local_14,uVar1);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = __floatsisf(local_20);
  uVar1 = __aeabi_fdiv(local_18,uVar1);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


////>>0x08004ae0>>FUN_08004ae0>>////

void FUN_08004ae0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined local_25;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  
  (*DAT_20000a4c)(0xd0,0x3b,&local_2c,0xe);
  local_14 = CONCAT11(local_2a,local_29);
  local_16 = CONCAT11(local_28,local_27);
  local_18 = CONCAT11(local_26,local_25);
  local_1a = CONCAT11(local_24,local_23);
  local_1c = CONCAT11(local_22,local_21);
  local_1e = CONCAT11(local_20,local_1f);
  uVar1 = __floatsisf((int)CONCAT11(local_2c,local_2b));
  *param_1 = uVar1;
  uVar1 = __floatsisf((int)local_14);
  param_1[1] = uVar1;
  uVar1 = __floatsisf((int)local_16);
  param_1[2] = uVar1;
  uVar1 = __floatsisf((int)local_18);
  param_1[3] = uVar1;
  uVar1 = __floatsisf((int)local_1a);
  param_1[4] = uVar1;
  uVar1 = __floatsisf((int)local_1c);
  param_1[5] = uVar1;
  uVar1 = __floatsisf((int)local_1e);
  param_1[6] = uVar1;
  return;
}


////>>0x08004bd8>>FUN_08004bd8>>////

void FUN_08004bd8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = __aeabi_fsub(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
  uVar2 = __aeabi_f2d(DAT_200009e4);
  uVar3 = __aeabi_f2d(uVar1);
  uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x83f5c366,0x3f340215);
  uVar2 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,
                       (int)((ulonglong)uVar3 >> 0x20));
  DAT_200009e4 = __truncdfsf2((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  uVar2 = __aeabi_f2d(*(undefined4 *)(param_1 + 4));
  uVar2 = __divdf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x40b00000);
  uVar3 = __aeabi_f2d(*(undefined4 *)(param_1 + 8));
  uVar3 = __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0x40b00000);
  uVar2 = atan2((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,
                (int)((ulonglong)uVar3 >> 0x20));
  uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x40668000);
  uVar2 = __divdf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x54442d18,0x400921fb);
  uVar3 = __aeabi_f2d(*(undefined4 *)(param_1 + 0x24));
  uVar2 = __subdf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,
                   (int)((ulonglong)uVar3 >> 0x20));
  uVar2 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x40568000);
  uVar1 = __truncdfsf2((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  if (DAT_20000005 == '\0') {
    uVar2 = __aeabi_f2d(DAT_200009e4);
    uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x9999999a,0x3fe99999);
    uVar3 = __aeabi_f2d(uVar1);
    uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x9999999a,0x3fc99999);
    uVar2 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,
                         (int)((ulonglong)uVar3 >> 0x20));
    DAT_200009e4 = __truncdfsf2((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  }
  else {
    DAT_20000005 = '\0';
    DAT_200009e4 = uVar1;
  }
  *param_2 = DAT_200009e4;
  return;
}


////>>0x08004d78>>FUN_08004d78>>////

void FUN_08004d78(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = __aeabi_fdiv(*param_1,0x45800000);
  uVar2 = __aeabi_fdiv(param_1[1],0x45800000);
  uVar3 = __aeabi_fdiv(param_1[2],0x45800000);
  uVar4 = __aeabi_f2d(uVar2);
  uVar5 = __aeabi_f2d(uVar3);
  uVar4 = atan2((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                (int)((ulonglong)uVar5 >> 0x20));
  uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40668000);
  uVar4 = __divdf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x54442d18,0x400921fb);
  uVar2 = __truncdfsf2((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  uVar4 = __aeabi_f2d(uVar1);
  uVar5 = __aeabi_f2d(uVar3);
  uVar4 = atan2((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                (int)((ulonglong)uVar5 >> 0x20));
  uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40668000);
  uVar4 = __divdf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x54442d18,0x400921fb);
  uVar1 = __truncdfsf2((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  *param_2 = uVar2;
  *param_3 = uVar1;
  return;
}


////>>0x08004e6c>>FUN_08004e6c>>////

void FUN_08004e6c(void)

{
  software_interrupt(0x3f);
  return;
}


////>>0x08004e74>>FUN_08004e74>>////

undefined4 FUN_08004e74(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_200009f0 == 0) {
    uVar1 = aflCall(1,param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x08004ea4>>FUN_08004ea4>>////

void FUN_08004ea4(undefined param_1,undefined param_2,undefined4 param_3,undefined2 param_4)

{
  HAL_I2C_Mem_Write(&DAT_20000a88,param_1,param_2,1,param_3,param_4,DAT_20000008);
  return;
}


////>>0x08004ee8>>FUN_08004ee8>>////

void FUN_08004ee8(undefined param_1,undefined param_2,undefined4 param_3,undefined2 param_4)

{
  HAL_I2C_Mem_Read(&DAT_20000a88,param_1,param_2,1,param_3,param_4,DAT_20000008);
  return;
}


////>>0x08004f2c>>FUN_08004f2c>>////

undefined4 FUN_08004f2c(void)

{
  undefined4 uVar1;
  
  uVar1 = HAL_GetTick();
  return uVar1;
}


////>>0x08004f3c>>FUN_08004f3c>>////

void FUN_08004f3c(undefined4 param_1,undefined2 param_2)

{
  HAL_UART_Transmit(&DAT_20000adc,param_1,param_2,0x32);
  return;
}


////>>0x08004f60>>FUN_08004f60>>////

void FUN_08004f60(void)

{
  memset(&DAT_20000ba8,0,0x40);
  return;
}


////>>0x08004f78>>FUN_08004f78>>////

void FUN_08004f78(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  byte local_11;
  
  mpu6050_update(&DAT_20000a5c);
  mpu6050_calc_pitch(&DAT_20000a5c,&DAT_20000ba0);
  flush_strbuf();
  uVar5 = __aeabi_f2d(DAT_20000ba0);
  sprintf(&DAT_20000ba8,"Pitch: %f\n",(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  uVar1 = strlen(&DAT_20000ba8);
  uart_print(&DAT_20000ba8,uVar1);
  DAT_200009f8 = __aeabi_fsub(DAT_20000014,DAT_20000ba0);
  DAT_20000be8 = __aeabi_fmul(DAT_20000a00,DAT_200009f8);
  uVar1 = __aeabi_fmul(DAT_20000a04,DAT_200009f8);
  DAT_20000b5c = __addsf3(uVar1,DAT_20000b5c);
  uVar1 = __floatsisf(DAT_20000010);
  iVar2 = __aeabi_fcmplt(uVar1,DAT_20000b5c);
  if (iVar2 == 0) {
    uVar1 = __floatsisf(DAT_200009f4);
    iVar2 = __aeabi_fcmpgt(uVar1,DAT_20000b5c);
    if (iVar2 != 0) {
      DAT_20000b5c = __floatunsisf(DAT_200009f4);
    }
  }
  else {
    DAT_20000b5c = __floatunsisf(DAT_20000010);
  }
  uVar4 = DAT_20000a08 ^ 0x80000000;
  uVar1 = __aeabi_fsub(DAT_200009f8,DAT_200009fc);
  DAT_20000a58 = __aeabi_fmul(uVar4,uVar1);
  uVar1 = __addsf3(DAT_20000be8,DAT_20000b5c);
  uVar1 = __addsf3(uVar1,DAT_20000a58);
  uVar3 = __floatsisf(DAT_20000010);
  iVar2 = __aeabi_fcmpgt(uVar1,uVar3);
  if (iVar2 == 0) {
    uVar3 = __floatsisf(DAT_200009f4);
    iVar2 = __aeabi_fcmplt(uVar1,uVar3);
    if (iVar2 == 0) {
      local_11 = __fixunssfsi(uVar1);
    }
    else {
      local_11 = DAT_200009f4;
    }
  }
  else {
    local_11 = DAT_20000010;
  }
  DAT_200009fc = DAT_200009f8;
  iVar2 = __aeabi_fcmpgt(DAT_200009f8,0);
  HAL_GPIO_WritePin(0x40010800,2,iVar2 != 0);
  iVar2 = __aeabi_fcmpgt(DAT_200009f8,0);
  HAL_GPIO_WritePin(0x40010800,4,iVar2 == 0);
  iVar2 = __aeabi_fcmpgt(DAT_200009f8,0);
  HAL_GPIO_WritePin(0x40010800,8,iVar2 != 0);
  iVar2 = __aeabi_fcmpgt(DAT_200009f8,0);
  HAL_GPIO_WritePin(0x40010800,0x10,iVar2 == 0);
  *(uint *)(DAT_20000b1c + 0x34) = (uint)local_11;
  *(uint *)(DAT_20000b1c + 0x40) = (uint)local_11;
  return;
}


////>>0x08005224>>FUN_08005224>>////

void FUN_08005224(void)

{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  MX_I2C1_Init();
  MX_USART1_UART_Init();
  MX_TIM2_Init();
  MX_TIM1_Init();
  DAT_20000a54 = 0x8004ea5;
  DAT_20000a4c = 0x8004ee9;
  DAT_20000a50 = 0x8004f2d;
  HAL_TIM_PWM_Start(&DAT_20000b1c,0);
  HAL_TIM_PWM_Start(&DAT_20000b1c,0xc);
  mpu6050_init(&DAT_20000a5c);
  HAL_TIM_Base_Start_IT(&DAT_20000b60);
  startForkserver(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080052a0>>FUN_080052a0>>////

void FUN_080052a0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_30 = 1;
  local_2c = 0x10000;
  local_28 = 0;
  local_20 = 1;
  local_14 = 2;
  local_10 = 0x10000;
  local_c = 0x1c0000;
  iVar1 = HAL_RCC_OscConfig(&local_30);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x151);
  }
  local_44 = 0xf;
  local_40 = 2;
  local_3c = 0x80;
  local_38 = 0;
  local_34 = 0;
  iVar1 = HAL_RCC_ClockConfig(&local_44,2);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x15e);
  }
  uVar2 = HAL_RCC_GetHCLKFreq();
  HAL_SYSTICK_Config((uint)uVar2 / 1000,(int)((ulonglong)uVar2 >> 0x20),(uint)uVar2 * 0x10624dd3);
  HAL_SYSTICK_CLKSourceConfig(4);
  HAL_NVIC_SetPriority(0xffffffff,0,0);
  return;
}


////>>0x08005348>>FUN_08005348>>////

void FUN_08005348(void)

{
  int iVar1;
  
  DAT_20000a88 = 0x40005400;
  DAT_20000a8c = 400000;
  DAT_20000a90 = 0;
  DAT_20000a94 = 0;
  DAT_20000a98 = 0x4000;
  DAT_20000a9c = 0;
  DAT_20000aa0 = 0;
  DAT_20000aa4 = 0;
  DAT_20000aa8 = 0;
  iVar1 = HAL_I2C_Init(&DAT_20000a88);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x17a);
  }
  return;
}


////>>0x080053b0>>FUN_080053b0>>////

void FUN_080053b0(void)

{
  int iVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [4];
  
  DAT_20000b1c = 0x40012c00;
  DAT_20000b20 = 0x708;
  DAT_20000b24 = 0;
  DAT_20000b28 = 100;
  DAT_20000b2c = 0;
  DAT_20000b30 = 0;
  DAT_20000b34 = 0;
  iVar1 = HAL_TIM_Base_Init(&DAT_20000b1c);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",399);
  }
  local_18[0] = 0x1000;
  iVar1 = HAL_TIM_ConfigClockSource(&DAT_20000b1c,local_18);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x194);
  }
  iVar1 = HAL_TIM_PWM_Init(&DAT_20000b1c);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x198);
  }
  local_20 = 0;
  local_1c = 0;
  iVar1 = HAL_TIMEx_MasterConfigSynchronization(&DAT_20000b1c,&local_20);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x19f);
  }
  local_3c = 0x60;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar1 = HAL_TIM_PWM_ConfigChannel(&DAT_20000b1c,&local_3c,0);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x1ab);
  }
  iVar1 = HAL_TIM_PWM_ConfigChannel(&DAT_20000b1c,&local_3c,0xc);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x1b0);
  }
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x2000;
  local_40 = 0;
  iVar1 = HAL_TIMEx_ConfigBreakDeadTime(&DAT_20000b1c,&local_58);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x1bc);
  }
  HAL_TIM_MspPostInit(&DAT_20000b1c);
  return;
}


////>>0x08005500>>FUN_08005500>>////

void FUN_08005500(void)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [4];
  
  DAT_20000b60 = 0x40000000;
  DAT_20000b64 = 36000;
  DAT_20000b68 = 0;
  DAT_20000b6c = 0x14;
  DAT_20000b70 = 0;
  DAT_20000b78 = 0;
  iVar1 = HAL_TIM_Base_Init(&DAT_20000b60);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x1d0);
  }
  local_18[0] = 0x1000;
  iVar1 = HAL_TIM_ConfigClockSource(&DAT_20000b60,local_18);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x1d5);
  }
  local_20 = 0x20;
  local_1c = 0;
  iVar1 = HAL_TIMEx_MasterConfigSynchronization(&DAT_20000b60,&local_20);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x1dc);
  }
  return;
}


////>>0x08005598>>FUN_08005598>>////

void FUN_08005598(void)

{
  int iVar1;
  
  DAT_20000adc = 0x40013800;
  DAT_20000ae0 = 0x1c200;
  DAT_20000ae4 = 0;
  DAT_20000ae8 = 0;
  DAT_20000aec = 0;
  DAT_20000af0 = 0xc;
  DAT_20000af4 = 0;
  DAT_20000af8 = 0;
  iVar1 = HAL_UART_Init(&DAT_20000adc);
  if (iVar1 != 0) {
    _Error_Handler("../src/main.c",0x1ed);
  }
  return;
}


////>>0x080055f4>>FUN_080055f4>>////



void FUN_080055f4(void)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  _DAT_40021018 = _DAT_40021018 | 0x2c;
  HAL_GPIO_WritePin(0x40010800,0x1e,0,_DAT_40021018 & 8);
  local_18 = 0x1e;
  local_14 = 1;
  local_c = 2;
  HAL_GPIO_Init(0x40010800,&local_18);
  return;
}


////>>0x08005674>>FUN_08005674>>////

void FUN_08005674(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08005680>>FUN_08005680>>////

void FUN_08005680(int *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  if (*param_1 == 0x40012c00) {
    local_18 = 0x900;
    local_14 = 2;
    local_c = 2;
    HAL_GPIO_Init(0x40010800,&local_18);
  }
  return;
}


////>>0x08005704>>FUN_08005704>>////

void FUN_08005704(void)

{
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
  return;
}


////>>0x08005714>>FUN_08005714>>////

void FUN_08005714(void)

{
  HAL_TIM_IRQHandler(&DAT_20000b60);
  return;
}


////>>0x08005728>>FUN_08005728>>////

undefined * FUN_08005728(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined auStack_18 [4];
  int local_14;
  undefined *local_c;
  
  if (DAT_20000a10 == (undefined *)0x0) {
    DAT_20000a10 = &DAT_20000c18;
  }
  local_c = DAT_20000a10;
  if (auStack_18 < DAT_20000a10 + param_1) {
    local_14 = param_1;
    puVar1 = (undefined4 *)__errno();
    *puVar1 = 0xc;
    puVar2 = (undefined *)0xffffffff;
  }
  else {
    puVar2 = DAT_20000a10;
    DAT_20000a10 = DAT_20000a10 + param_1;
  }
  return puVar2;
}


////>>0x08005780>>FUN_08005780>>////



void FUN_08005780(void)

{
  _DAT_40021000 = _DAT_40021000 & 0xfef2ffff | 1;
  _DAT_40021004 = _DAT_40021004 & 0xf8800000;
  _DAT_40021008 = 0x9f0000;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x080057e8>>FUN_080057e8>>////

void FUN_080057e8(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &DAT_200009c8; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(iVar1 + 0x800a1a4);
  }
  for (puVar2 = &DAT_200009c8; puVar2 < &DAT_20000c14; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  SystemInit();
  __libc_init_array();
  UNRECOVERED_JUMPTABLE = (code *)0x800581a;
  main();
                    /* WARNING: Could not recover jumptable at 0x0800581a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08005834>>FUN_08005834>>////

uint __ieee754_atan2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = param_4 & 0x7fffffff;
  if ((0x7ff00000 < (uVar4 | (-param_3 | param_3) >> 0x1f)) ||
     (uVar5 = param_2 & 0x7fffffff, 0x7ff00000 < (uVar5 | (-param_1 | param_1) >> 0x1f))) {
    uVar4 = __aeabi_dadd(param_3,param_4,param_1,param_2);
    return uVar4;
  }
  if ((param_4 + 0xc0100000 | param_3) == 0) {
    uVar4 = atan();
    return uVar4;
  }
  uVar3 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
  if ((uVar5 | param_1) == 0) {
    if (uVar3 == 2) {
      return 0x54442d18;
    }
    if (uVar3 != 3) {
      return param_1;
    }
  }
  else if ((uVar4 | param_3) != 0) {
    if (uVar4 == 0x7ff00000) {
      if (uVar5 == 0x7ff00000) {
        if (uVar3 == 2) {
          return 0x7f3321d2;
        }
        if (uVar3 == 3) {
          return 0x7f3321d2;
        }
        if (uVar3 == 1) {
          return 0x54442d18;
        }
        return 0x54442d18;
      }
      if (uVar3 == 2) {
        return 0x54442d18;
      }
      if (uVar3 != 3) {
        if (uVar3 != 1) {
          return 0;
        }
        return 0;
      }
    }
    else if (uVar5 != 0x7ff00000) {
      iVar1 = (int)(uVar5 - uVar4) >> 0x14;
      if (iVar1 < 0x3d) {
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
      if (uVar3 != 0) {
        uVar6 = __subdf3(uVar4,uVar2,0x33145c07,0x3ca1a626);
        uVar4 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x54442d18,0x400921fb);
        return uVar4;
      }
      return uVar4;
    }
  }
  return 0x54442d18;
}


////>>0x08005838>>FUN_08005838>>////

uint FUN_08005838(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = param_4 & 0x7fffffff;
  if ((0x7ff00000 < (uVar4 | (-param_3 | param_3) >> 0x1f)) ||
     (uVar5 = param_2 & 0x7fffffff, 0x7ff00000 < (uVar5 | (-param_1 | param_1) >> 0x1f))) {
    uVar4 = __aeabi_dadd(param_3,param_4,param_1,param_2);
    return uVar4;
  }
  if ((param_4 + 0xc0100000 | param_3) == 0) {
    uVar4 = atan();
    return uVar4;
  }
  uVar3 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
  if ((uVar5 | param_1) == 0) {
    if (uVar3 == 2) {
      return 0x54442d18;
    }
    if (uVar3 != 3) {
      return param_1;
    }
  }
  else if ((uVar4 | param_3) != 0) {
    if (uVar4 == 0x7ff00000) {
      if (uVar5 == 0x7ff00000) {
        if (uVar3 == 2) {
          return 0x7f3321d2;
        }
        if (uVar3 == 3) {
          return 0x7f3321d2;
        }
        if (uVar3 == 1) {
          return 0x54442d18;
        }
        return 0x54442d18;
      }
      if (uVar3 == 2) {
        return 0x54442d18;
      }
      if (uVar3 != 3) {
        if (uVar3 != 1) {
          return 0;
        }
        return 0;
      }
    }
    else if (uVar5 != 0x7ff00000) {
      iVar1 = (int)(uVar5 - uVar4) >> 0x14;
      if (iVar1 < 0x3d) {
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
      if (uVar3 != 0) {
        uVar6 = __subdf3(uVar4,uVar2,0x33145c07,0x3ca1a626);
        uVar4 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x54442d18,0x400921fb);
        return uVar4;
      }
      return uVar4;
    }
  }
  return 0x54442d18;
}


////>>0x080059f0>>FUN_080059f0>>////

undefined8 FUN_080059f0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = CONCAT44(param_2,param_1);
  uVar7 = param_2 & 0x7fffffff;
  if (uVar7 < 0x44100000) {
    if (uVar7 < 0x3fdc0000) {
      if (uVar7 < 0x3e200000) {
        uVar9 = __aeabi_dadd(param_1,param_2,0x8800759c,0x7e37e43c,param_4);
        iVar8 = __aeabi_dcmpgt((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
        if (iVar8 != 0) {
          return CONCAT44(param_2,param_1);
        }
      }
      iVar8 = -1;
    }
    else {
      uVar10 = fabs();
      uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar1 = (undefined4)uVar10;
      if (uVar7 < 0x3ff30000) {
        if (uVar7 < 0x3fe60000) {
          uVar10 = __aeabi_dadd(uVar1,uVar4,uVar1,uVar4);
          uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3ff00000);
          uVar9 = __aeabi_dadd(uVar1,uVar4,0,0x40000000);
          uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                            (int)((ulonglong)uVar9 >> 0x20));
          iVar8 = 0;
        }
        else {
          uVar10 = __subdf3(uVar1,uVar4,0,0x3ff00000);
          uVar9 = __aeabi_dadd(uVar1,uVar4,0,0x3ff00000);
          uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                            (int)((ulonglong)uVar9 >> 0x20));
          iVar8 = 1;
        }
      }
      else if (uVar7 < 0x40038000) {
        uVar10 = __subdf3(uVar1,uVar4,0,0x3ff80000);
        uVar9 = __muldf3(uVar1,uVar4,0,0x3ff80000);
        uVar9 = __aeabi_dadd((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
        uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                          (int)((ulonglong)uVar9 >> 0x20));
        iVar8 = 2;
      }
      else {
        uVar10 = __divdf3(0,0xbff00000,uVar1,uVar4);
        iVar8 = 3;
      }
    }
    uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar5 = (undefined4)uVar10;
    uVar10 = __muldf3(uVar5,uVar6,uVar5,uVar6);
    uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar1 = (undefined4)uVar10;
    uVar10 = __muldf3(uVar1,uVar2,uVar1,uVar2);
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar4 = (undefined4)uVar10;
    uVar10 = __muldf3(uVar4,uVar3,0xe322da11,0x3f90ad3a);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x24760deb,0x3fa97b4b);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar4,uVar3);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xa0d03d51,0x3fb10d66);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar4,uVar3);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xc54c206e,0x3fb745cd);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar4,uVar3);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x920083ff,0x3fc24924);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar4,uVar3);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x5555550d,0x3fd55555);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar1,uVar2);
    uVar9 = __muldf3(uVar4,uVar3,0x2c6a6c2f,0xbfa2b444);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x52defd9a,0x3fadde2d);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar4,uVar3);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xaf749a6d,0x3fb3b0f2);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar4,uVar3);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xfe231671,0x3fbc71c6);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar4,uVar3);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x9998ebc4,0x3fc99999);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar4,uVar3);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                          (int)((ulonglong)uVar9 >> 0x20));
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar5,uVar6);
    uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (iVar8 == -1) {
      uVar10 = __subdf3(uVar5,uVar6,(int)uVar10,uVar1);
      return uVar10;
    }
    iVar8 = iVar8 * 8;
    uVar10 = __subdf3((int)uVar10,uVar1,*(undefined4 *)(&UNK_08009ee8 + iVar8),
                      *(undefined4 *)(&UNK_08009eec + iVar8));
    uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar5,uVar6);
    uVar10 = __subdf3(*(undefined4 *)(&UNK_08009ec8 + iVar8),*(undefined4 *)(&UNK_08009ecc + iVar8),
                      (int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    if ((int)param_2 < 0) {
      return CONCAT44((int)((ulonglong)uVar10 >> 0x20) + -0x80000000,(int)uVar10);
    }
  }
  else {
    if ((uVar7 < 0x7ff00001) && ((uVar7 != 0x7ff00000 || (param_1 == 0)))) {
      uVar1 = 0xbff921fb;
      if (0 < (int)param_2) {
        uVar1 = 0x3ff921fb;
      }
      return CONCAT44(uVar1,0x54442d18);
    }
    uVar10 = __aeabi_dadd(param_1,param_2,param_1,param_2,param_4);
  }
  return uVar10;
}


////>>0x08005d0c>>FUN_08005d0c>>////

void FUN_08005d0c(void)

{
  return;
}


////>>0x08005d14>>FUN_08005d14>>////

undefined4 FUN_08005d14(void)

{
  return DAT_2000001c;
}


////>>0x08005d20>>FUN_08005d20>>////

/* WARNING: Removing unreachable block (ram,0x08005d2c) */
/* WARNING: Removing unreachable block (ram,0x08005d2e) */

void FUN_08005d20(void)

{
  int iVar1;
  code **ppcVar2;
  
  _init();
  iVar1 = 0;
  ppcVar2 = (code **)&DAT_0800a198;
  do {
    iVar1 = iVar1 + 1;
    (**ppcVar2)();
    ppcVar2 = ppcVar2 + 1;
  } while (iVar1 != 2);
  return;
}


////>>0x08005d68>>FUN_08005d68>>////

void FUN_08005d68(undefined4 *param_1,undefined param_2,uint param_3)

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
    uVar3 = param_3;
    puVar1 = param_1;
    if (0xf < param_3) {
      uVar3 = param_3 - 0x10;
      puVar1 = param_1 + 4;
      do {
        puVar1[-4] = uVar4;
        puVar1[-3] = uVar4;
        puVar1[-2] = uVar4;
        puVar1[-1] = uVar4;
        puVar1 = puVar1 + 4;
      } while (puVar1 != (undefined4 *)((int)param_1 + (uVar3 & 0xfffffff0) + 0x20));
      param_3 = param_3 & 0xf;
      param_1 = param_1 + ((uVar3 >> 4) + 1) * 4;
      uVar3 = param_3;
      puVar1 = param_1;
      if (param_3 < 4) goto LAB_08005de4;
    }
    do {
      param_3 = param_3 - 4;
      *param_1 = uVar4;
      param_1 = param_1 + 1;
    } while (3 < param_3);
    param_1 = (undefined4 *)((int)puVar1 + (uVar3 - 4 & 0xfffffffc) + 4);
    param_3 = uVar3 & 3;
  }
LAB_08005de4:
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


////>>0x08005dfc>>FUN_08005dfc>>////

void FUN_08005dfc(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_80 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_6c = 0x7fffffff;
  local_78 = 0x7fffffff;
  uStack_74 = 0xffff0208;
  local_80[0] = param_1;
  local_70 = param_1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  _svfprintf_r(DAT_2000001c,local_80,param_2,&uStack_8);
  *local_80[0] = 0;
  return;
}


////>>0x08005e40>>FUN_08005e40>>////

int FUN_08005e40(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)(param_1 & 0xfffffffc);
  iVar1 = -(param_1 & 3);
  uVar3 = *puVar2;
  if ((param_1 & 3) != 0) {
    uVar3 = uVar3 | 0xffffffffU >> ((iVar1 + 4U & 0x1f) << 3);
  }
  while( true ) {
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 + 0xfefefeff & ~uVar3 & 0x80808080;
    if (uVar3 != 0) break;
    uVar3 = *puVar2;
    iVar1 = iVar1 + 4;
  }
  return iVar1 + (0x1fU - LZCOUNT(uVar3 & -uVar3) >> 3);
}


////>>0x08005e9c>>FUN_08005e9c>>////

/* WARNING: Type propagation algorithm not settling */

byte * FUN_08005e9c(undefined4 *param_1,int *param_2,int *param_3,int **param_4)

{
  byte bVar1;
  int **ppiVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int **ppiVar11;
  undefined uVar12;
  ushort uVar13;
  int **ppiVar14;
  byte **ppbVar15;
  int *piVar16;
  int **ppiVar17;
  char *pcVar18;
  uint uVar19;
  undefined *puVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  byte *pbVar26;
  int *piVar27;
  int *piVar28;
  undefined4 *puVar29;
  byte *pbVar30;
  bool bVar31;
  longlong lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 local_188;
  int *piStack_184;
  int **local_180;
  undefined *puStack_17c;
  int **local_178;
  undefined4 *local_16c;
  int *local_168;
  byte *local_164;
  int *local_160;
  int *local_15c;
  char *local_158;
  int **local_154;
  undefined8 local_150;
  int *local_148;
  int *local_144;
  int *local_140;
  int **local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  char *local_11c;
  int *local_118;
  int *local_114;
  int *local_110;
  int *local_10c;
  byte *local_108;
  int *local_104;
  int *local_100;
  int *local_fc;
  byte local_f5;
  undefined2 local_f4;
  int *local_f0;
  undefined auStack_ec [4];
  char local_e8;
  undefined local_e7;
  char local_e6 [6];
  int *local_e0;
  byte abStack_dc [4];
  int **local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc [16];
  undefined local_8c;
  byte bStack_2a;
  undefined local_29;
  int iStack_28;
  
  local_16c = param_1;
  local_160 = param_2;
  local_154 = param_4;
  ppiVar2 = (int **)_localeconv_r();
  local_114 = *ppiVar2;
  local_118 = (int *)strlen(local_114);
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar3 = _malloc_r(local_16c,0x40);
    *local_160 = iVar3;
    local_160[4] = iVar3;
    if (iVar3 == 0) {
      *local_16c = 0xc;
      return (byte *)0xffffffff;
    }
    local_160[5] = 0x40;
  }
  local_128 = 0;
  local_138 = (int *)0x0;
  local_12c = 0;
  local_d4 = (int *)0x0;
  local_d0 = (int *)0x0;
  local_11c = (char *)0x0;
  local_10c = (int *)0x0;
  local_108 = (byte *)0x0;
  local_104 = (int *)0x0;
  local_110 = (int *)0x0;
  local_164 = (byte *)0x0;
  local_124 = 0;
  local_120 = 0;
  ppiVar2 = local_cc;
  bVar1 = *(byte *)param_3;
  local_d8 = ppiVar2;
joined_r0x08005ef2:
  if (bVar1 != 0) {
    piVar28 = param_3;
    if (bVar1 != 0x25) {
      do {
        piVar28 = (int *)((int)piVar28 + 1);
        if (*(byte *)piVar28 == 0) break;
      } while (*(byte *)piVar28 != 0x25);
      piVar27 = (int *)((int)piVar28 - (int)param_3);
      if (piVar27 != (int *)0x0) {
        local_d4 = (int *)((int)local_d4 + 1);
        local_d0 = (int *)((int)local_d0 + (int)piVar27);
        *ppiVar2 = param_3;
        *(int **)((int)ppiVar2 + 4) = piVar27;
        if ((int)local_d4 < 8) {
          ppiVar2 = (int **)((int)ppiVar2 + 8);
        }
        else {
          iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
          if (iVar3 != 0) goto LAB_0800604a;
          ppiVar2 = local_cc;
        }
        local_164 = local_164 + (int)piVar27;
      }
      if (*(byte *)piVar28 == 0) goto LAB_08006216;
    }
    piVar27 = (int *)0xffffffff;
    piVar25 = (int *)0x0;
    piVar24 = (int *)(uint)*(byte *)((int)piVar28 + 1);
    local_15c = (int *)0x0;
    local_f5 = 0;
    piVar28 = (int *)((int)piVar28 + 1);
LAB_08005f4a:
    puVar29 = local_16c;
    piVar28 = (int *)((int)piVar28 + 1);
LAB_08005f4e:
    switch(piVar24) {
    case (int *)0x20:
      goto switchD_08005f58_caseD_20;
    default:
      if (piVar24 == (int *)0x0) goto LAB_08006216;
      piVar16 = (int *)0x0;
      local_168 = (int *)0x1;
      local_f5 = 0;
      local_148 = (int *)0x0;
      local_13c = (int **)0x0;
      local_134 = (int *)0x0;
      local_130 = (int *)0x0;
      local_158 = (char *)0x1;
      piVar23 = (int *)&local_8c;
      piVar22 = piVar16;
      local_8c = (char)piVar24;
      goto LAB_08006298;
    case (int *)0x23:
      piVar25 = (int *)((uint)piVar25 | 1);
      piVar24 = (int *)(uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case (int *)0x27:
      iVar3 = _localeconv_r(local_16c);
      local_110 = *(int **)(iVar3 + 4);
      piVar24 = (int *)strlen(local_110);
      local_104 = piVar24;
      iVar3 = _localeconv_r(puVar29);
      local_108 = *(byte **)(iVar3 + 8);
      if (piVar24 == (int *)0x0) goto switchD_08005f58_caseD_74;
      piVar24 = (int *)(uint)*(byte *)piVar28;
      if ((local_108 != (byte *)0x0) && (*local_108 != 0)) {
        piVar25 = (int *)((uint)piVar25 | 0x400);
      }
      goto LAB_08005f4a;
    case (int *)0x2a:
      piVar24 = (int *)(uint)*(byte *)piVar28;
      local_15c = *local_154;
      local_154 = local_154 + 1;
      if ((int)local_15c < 0) {
        local_15c = (int *)-(int)local_15c;
        goto LAB_08006602;
      }
      goto LAB_08005f4a;
    case (int *)0x2b:
      local_f5 = 0x2b;
      piVar24 = (int *)(uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case (int *)0x2d:
      piVar24 = (int *)(uint)*(byte *)piVar28;
LAB_08006602:
      piVar25 = (int *)((uint)piVar25 | 4);
      goto LAB_08005f4a;
    case (int *)0x2e:
      piVar24 = (int *)(uint)*(byte *)piVar28;
      if (piVar24 == (int *)0x2a) {
        piVar24 = (int *)(uint)*(byte *)((int)piVar28 + 1);
        piVar27 = (int *)((uint)*local_154 | (int)*local_154 >> 0x1f);
        local_154 = local_154 + 1;
        piVar28 = (int *)((int)piVar28 + 1);
        goto LAB_08005f4a;
      }
      piVar27 = (int *)0x0;
      piVar28 = (int *)((int)piVar28 + 1);
      while (piVar24 + -0xc < (int *)0xa) {
        piVar27 = (int *)((int)(piVar24 + -0xc) + (int)piVar27 * 10);
        piVar24 = (int *)(uint)*(byte *)piVar28;
        piVar28 = (int *)((int)piVar28 + 1);
      }
      goto LAB_08005f4e;
    case (int *)0x30:
      piVar25 = (int *)((uint)piVar25 | 0x80);
      piVar24 = (int *)(uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case (int *)0x31:
    case (int *)0x32:
    case (int *)0x33:
    case (int *)0x34:
    case (int *)0x35:
    case (int *)0x36:
    case (int *)0x37:
    case (int *)0x38:
    case (int *)0x39:
      goto switchD_08005f58_caseD_31;
    case (int *)0x41:
    case (int *)0x45:
    case (int *)0x46:
    case (int *)0x47:
    case (int *)0x61:
    case (int *)0x65:
    case (int *)0x66:
    case (int *)0x67:
      puVar29 = (undefined4 *)((int)local_154 + 7U & 0xfffffff8);
      uVar10 = *puVar29;
      local_12c = puVar29[1];
      local_168 = (int *)(local_12c & 0x7fffffff);
      local_154 = (int **)(puVar29 + 2);
      local_128 = uVar10;
      iVar3 = __unorddf2(uVar10,local_168,0xffffffff,0x7fefffff);
      if ((iVar3 == 0) &&
         (iVar3 = __aeabi_dcmple(uVar10,local_168,0xffffffff,0x7fefffff), iVar3 == 0)) {
        iVar3 = __aeabi_dcmplt(local_128,local_12c,local_124,local_120);
        if (iVar3 == 0) {
          piVar16 = (int *)(uint)local_f5;
        }
        else {
          piVar16 = (int *)0x2d;
          local_f5 = 0x2d;
        }
        piVar23 = (int *)&UNK_08009f10;
        piVar27 = (int *)&UNK_08009f0c;
LAB_08006524:
        local_148 = (int *)0x0;
        local_168 = (int *)0x3;
        if (piVar24 < (int *)0x48) {
          piVar23 = piVar27;
        }
        local_134 = (int *)0x0;
        local_130 = (int *)0x0;
        piVar25 = (int *)((uint)piVar25 & 0xffffff7f);
        local_158 = (char *)0x3;
        local_13c = (int **)0x0;
        piVar22 = (int *)0x0;
        goto LAB_08006538;
      }
      iVar3 = __unorddf2(local_128,local_12c,local_128,local_12c);
      if (iVar3 != 0) {
        if ((int)local_12c < 0) {
          piVar16 = (int *)0x2d;
          local_f5 = 0x2d;
        }
        else {
          piVar16 = (int *)(uint)local_f5;
        }
        piVar23 = (int *)&UNK_08009f18;
        piVar27 = (int *)&UNK_08009f14;
        goto LAB_08006524;
      }
      if (piVar24 == (int *)0x61) {
        uVar12 = 0x78;
LAB_08007224:
        local_f4 = CONCAT11(uVar12,0x30);
        if ((int)piVar27 < 100) {
          local_140 = (int *)((uint)piVar25 | 0x102);
          local_148 = (int *)0x0;
          param_3 = (int *)&local_8c;
          piVar25 = (int *)((uint)piVar25 | 2);
        }
        else {
          param_3 = (int *)_malloc_r(local_16c,(byte *)((int)piVar27 + 1));
          if (param_3 == (int *)0x0) {
            uVar13 = *(ushort *)(local_160 + 3) | 0x40;
            *(ushort *)(local_160 + 3) = uVar13;
            goto LAB_0800604e;
          }
          local_140 = (int *)((uint)piVar25 | 0x102);
          piVar25 = (int *)((uint)piVar25 | 2);
          local_148 = param_3;
        }
LAB_0800724a:
        if ((int)local_12c < 0) {
LAB_08007414:
          local_144 = (int *)0x2d;
          uVar19 = local_12c + 0x80000000;
        }
        else {
          local_144 = (int *)0x0;
          uVar19 = local_12c;
        }
        local_168 = (int *)((uint)piVar24 & 0xffffffdf);
        piVar22 = piVar27;
        local_158 = (char *)local_128;
        if (piVar24 == (int *)0x61) {
          uVar33 = frexp(local_128,uVar19,&local_f0);
          local_150 = __muldf3((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0,0x3fc00000);
          iVar3 = __aeabi_dcmpeq((int)local_150,(int)((ulonglong)local_150 >> 0x20),local_124,
                                 local_120);
          if (iVar3 != 0) {
            local_f0 = (int *)0x1;
          }
          local_158 = "0123456789abcdef";
          local_13c = ppiVar2;
          local_138 = piVar28;
          local_134 = piVar24;
          local_130 = piVar27;
          local_100 = piVar25;
          local_fc = param_3;
          pcVar18 = local_158;
          uVar33 = local_150;
          goto LAB_080072ba;
        }
        if (piVar24 == (int *)0x41) {
          uVar33 = frexp(local_128,uVar19,&local_f0);
          local_150 = __muldf3((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0,0x3fc00000);
          iVar3 = __aeabi_dcmpeq((int)local_150,(int)((ulonglong)local_150 >> 0x20),local_124,
                                 local_120);
          if (iVar3 == 0) {
            local_158 = "0123456789ABCDEF";
            local_13c = ppiVar2;
            local_138 = piVar28;
            local_134 = piVar24;
            local_130 = piVar27;
            local_100 = piVar25;
            local_fc = param_3;
            pcVar18 = local_158;
            uVar33 = local_150;
          }
          else {
            local_f0 = (int *)0x1;
            local_158 = "0123456789ABCDEF";
            local_13c = ppiVar2;
            local_138 = piVar28;
            local_134 = piVar24;
            local_130 = piVar27;
            local_100 = piVar25;
            local_fc = param_3;
            pcVar18 = local_158;
            uVar33 = local_150;
          }
          goto LAB_080072ba;
        }
      }
      else {
        if (piVar24 == (int *)0x41) {
          uVar12 = 0x58;
          goto LAB_08007224;
        }
        local_140 = (int *)((uint)piVar25 | 0x100);
        local_148 = (int *)0x0;
        if (piVar27 == (int *)0xffffffff) {
          piVar27 = (int *)0x6;
          goto LAB_0800724a;
        }
        if (((uint)piVar24 & 0xffffffdf) == 0x47) {
          if (piVar27 == (int *)0x0) {
            piVar27 = (int *)0x1;
            local_148 = (int *)0x0;
          }
          goto LAB_0800724a;
        }
        if ((int)local_12c < 0) goto LAB_08007414;
        local_144 = (int *)0x0;
        uVar19 = local_12c;
      }
      local_168 = (int *)((uint)piVar24 & 0xffffffdf);
      piStack_184 = piVar27;
      local_158 = (char *)local_128;
      if (piVar24 == (int *)0x66) {
        local_178 = &local_e0;
        local_188 = 3;
        puStack_17c = auStack_ec;
        local_180 = &local_f0;
        piVar23 = (int *)_dtoa_r(local_16c,local_180,local_128,uVar19);
        piVar22 = (int *)((int)piVar23 + (int)piVar27);
        local_150._0_4_ = piVar27;
LAB_0800764c:
        if ((*(byte *)piVar23 == 0x30) &&
           (iVar3 = __aeabi_dcmpeq(local_158,uVar19,local_124,local_120), iVar3 == 0)) {
          local_f0 = (int *)(1 - (int)(int *)local_150);
        }
        piVar22 = (int *)((int)piVar22 + (int)local_f0);
      }
      else if (piVar24 == (int *)0x46) {
        local_178 = &local_e0;
        local_188 = 3;
        puStack_17c = auStack_ec;
        local_180 = &local_f0;
        piVar23 = (int *)_dtoa_r(local_16c,local_180,local_128,uVar19);
        local_150._0_4_ = piVar27;
LAB_08007760:
        piVar22 = (int *)((int)piVar23 + (int)(int *)local_150);
        if (piVar24 == (int *)0x46) goto LAB_0800764c;
      }
      else {
        local_178 = &local_e0;
        local_150._0_4_ = piVar27;
        if (local_168 == (int *)0x45) {
          local_150._0_4_ = (int *)((int)piVar27 + 1);
        }
        local_188 = 2;
        piStack_184 = (int *)local_150;
        local_180 = &local_f0;
        puStack_17c = auStack_ec;
        piVar23 = (int *)_dtoa_r(local_16c,local_180,local_128,uVar19);
        piVar16 = local_e0;
        if (piVar24 == (int *)0x67) {
          if (((uint)piVar25 & 1) == 0) goto LAB_08006ca6;
        }
        else if (piVar24 == (int *)0x47) {
          if (((uint)piVar25 & 1) != 0) goto LAB_08007760;
          goto LAB_08006ca6;
        }
        piVar22 = (int *)((int)(int *)local_150 + (int)piVar23);
      }
      iVar3 = __aeabi_dcmpeq(local_158,uVar19,local_124,local_120);
      piVar16 = piVar22;
      if (iVar3 == 0) {
        for (; piVar16 = local_e0, local_e0 < piVar22; local_e0 = (int *)((int)local_e0 + 1)) {
          *(byte *)local_e0 = 0x30;
        }
      }
LAB_08006ca6:
      local_138 = (int *)((int)piVar16 - (int)piVar23);
      goto LAB_08006cb0;
    case (int *)0x43:
    case (int *)0x63:
      piVar16 = (int *)0x0;
      piVar27 = *local_154;
      local_f5 = 0;
      local_148 = (int *)0x0;
      piVar22 = (int *)0x0;
      local_13c = (int **)0x0;
      local_134 = (int *)0x0;
      local_130 = (int *)0x0;
      local_154 = local_154 + 1;
      local_168 = (int *)0x1;
      local_158 = (char *)0x1;
      local_8c = SUB41(piVar27,0);
      piVar23 = (int *)&local_8c;
      goto LAB_08006298;
    case (int *)0x44:
      piVar25 = (int *)((uint)piVar25 | 0x10);
      if (-1 < (int)piVar25 << 0x1a) goto LAB_080065a8;
LAB_080060ec:
      ppiVar14 = (int **)((int)local_154 + 7U & 0xfffffff8);
      piVar22 = *ppiVar14;
      piVar16 = ppiVar14[1];
      local_154 = ppiVar14 + 2;
      goto LAB_08006102;
    case (int *)0x4c:
      piVar25 = (int *)((uint)piVar25 | 8);
      piVar24 = (int *)(uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case (int *)0x4f:
      piVar25 = (int *)((uint)piVar25 | 0x10);
    case (int *)0x6f:
      if (((uint)piVar25 & 0x20) == 0) {
        ppiVar14 = local_154 + 1;
        if (((uint)piVar25 & 0x10) == 0) {
          if (((uint)piVar25 & 0x40) == 0) {
            if (((uint)piVar25 & 0x200) == 0) goto LAB_08006be2;
            piVar22 = (int *)(uint)*(byte *)local_154;
            piVar16 = (int *)0x0;
            local_154 = ppiVar14;
          }
          else {
            piVar22 = (int *)(uint)*(ushort *)local_154;
            piVar16 = (int *)0x0;
            local_154 = ppiVar14;
          }
        }
        else {
LAB_08006be2:
          piVar22 = *local_154;
          piVar16 = (int *)0x0;
          local_154 = ppiVar14;
        }
      }
      else {
        ppiVar14 = (int **)((int)local_154 + 7U & 0xfffffff8);
        piVar22 = *ppiVar14;
        piVar16 = ppiVar14[1];
        local_154 = ppiVar14 + 2;
      }
      iVar3 = 0;
      piVar25 = (int *)((uint)piVar25 & 0xfffffbff);
      break;
    case (int *)0x53:
    case (int *)0x73:
      local_f5 = 0;
      piVar23 = *local_154;
      ppiVar14 = local_154 + 1;
      if (piVar23 == (int *)0x0) {
        if ((int *)0x5 < piVar27) {
          piVar27 = (int *)0x6;
        }
        piVar23 = (int *)&UNK_08009f44;
        piVar16 = (int *)0x0;
        local_148 = (int *)0x0;
        local_13c = (int **)0x0;
        local_134 = (int *)0x0;
        local_130 = (int *)0x0;
        piVar22 = (int *)0x0;
        local_168 = piVar27;
        local_158 = (char *)piVar27;
        local_154 = ppiVar14;
      }
      else {
        if (piVar27 == (int *)0xffffffff) {
          local_158 = (char *)strlen(piVar23);
        }
        else {
          iVar3 = memchr(piVar23,0,piVar27);
          if (iVar3 == 0) {
            piVar16 = (int *)(uint)local_f5;
            local_148 = (int *)0x0;
            local_13c = (int **)0x0;
            local_134 = (int *)0x0;
            local_130 = (int *)0x0;
            piVar22 = (int *)0x0;
            local_168 = piVar27;
            local_158 = (char *)piVar27;
            local_154 = ppiVar14;
            goto LAB_08006538;
          }
          local_158 = (char *)(iVar3 - (int)piVar23);
        }
        local_148 = (int *)0x0;
        local_13c = (int **)0x0;
        local_134 = (int *)0x0;
        local_130 = (int *)0x0;
        piVar16 = (int *)(uint)local_f5;
        piVar22 = (int *)0x0;
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
        local_154 = ppiVar14;
      }
      goto LAB_08006538;
    case (int *)0x55:
      piVar25 = (int *)((uint)piVar25 | 0x10);
      if (-1 < (int)piVar25 << 0x1a) goto LAB_080066c0;
LAB_0800618a:
      ppiVar14 = (int **)((int)local_154 + 7U & 0xfffffff8);
      piVar22 = *ppiVar14;
      piVar16 = ppiVar14[1];
      iVar3 = 1;
      local_154 = ppiVar14 + 2;
      break;
    case (int *)0x58:
      local_11c = "0123456789ABCDEF";
      if (((uint)piVar25 & 0x20) == 0) goto LAB_08006696;
LAB_080061ac:
      ppiVar14 = (int **)((int)local_154 + 7U & 0xfffffff8);
      piVar22 = *ppiVar14;
      piVar16 = ppiVar14[1];
      local_154 = ppiVar14 + 2;
      goto LAB_080061be;
    case (int *)0x64:
    case (int *)0x69:
      if ((int)piVar25 << 0x1a < 0) goto LAB_080060ec;
LAB_080065a8:
      ppiVar14 = local_154 + 1;
      if ((int)piVar25 << 0x1b < 0) {
LAB_08006bcc:
        piVar22 = *local_154;
        piVar16 = (int *)((int)piVar22 >> 0x1f);
        local_154 = ppiVar14;
      }
      else if ((int)piVar25 << 0x19 < 0) {
        piVar22 = (int *)(int)*(short *)local_154;
        piVar16 = (int *)((int)piVar22 >> 0x1f);
        local_154 = ppiVar14;
      }
      else {
        if (-1 < (int)piVar25 << 0x16) goto LAB_08006bcc;
        piVar22 = (int *)(int)*(char *)local_154;
        piVar16 = (int *)((int)piVar22 >> 0x1f);
        local_154 = ppiVar14;
      }
LAB_08006102:
      if ((int)piVar16 < 0) {
        bVar31 = piVar22 != (int *)0x0;
        piVar22 = (int *)-(int)piVar22;
        piVar16 = (int *)(-(int)piVar16 - (uint)bVar31);
        local_f5 = 0x2d;
      }
      if (piVar27 != (int *)0xffffffff) {
        iVar3 = 1;
        iVar8 = 1;
        piVar21 = (int *)((uint)piVar25 & 0xffffff7f);
        if (((uint)piVar22 | (uint)piVar16) == 0) goto LAB_080060a4;
        goto LAB_08006130;
      }
      piVar21 = piVar25;
      if (piVar16 != (int *)0x0 || (int *)0x9 < piVar22) goto LAB_08006f16;
      goto LAB_0800698a;
    case (int *)0x68:
      piVar24 = (int *)(uint)*(byte *)piVar28;
      if (piVar24 == (int *)0x68) {
        piVar24 = (int *)(uint)*(byte *)((int)piVar28 + 1);
        piVar25 = (int *)((uint)piVar25 | 0x200);
        piVar28 = (int *)((int)piVar28 + 1);
      }
      else {
        piVar25 = (int *)((uint)piVar25 | 0x40);
      }
      goto LAB_08005f4a;
    case (int *)0x6a:
    case (int *)0x71:
      piVar25 = (int *)((uint)piVar25 | 0x20);
    case (int *)0x74:
    case (int *)0x7a:
switchD_08005f58_caseD_74:
      piVar24 = (int *)(uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case (int *)0x6c:
      goto switchD_08005f58_caseD_6c;
    case (int *)0x6e:
      ppiVar14 = local_154 + 1;
      ppbVar15 = (byte **)*local_154;
      local_154 = ppiVar14;
      if (((uint)piVar25 & 0x20) != 0) {
        *ppbVar15 = local_164;
        ppbVar15[1] = (byte *)((int)local_164 >> 0x1f);
        goto LAB_0800620e;
      }
      if (((uint)piVar25 & 0x10) == 0) {
        if (((uint)piVar25 & 0x40) != 0) {
          *(short *)ppbVar15 = (short)local_164;
          goto LAB_0800620e;
        }
        if (((uint)piVar25 & 0x200) != 0) {
          *(char *)ppbVar15 = (char)local_164;
          goto LAB_0800620e;
        }
      }
      *ppbVar15 = local_164;
      goto LAB_0800620e;
    case (int *)0x70:
      local_f4 = 0x7830;
      piVar22 = *local_154;
      local_11c = "0123456789abcdef";
      piVar25 = (int *)((uint)piVar25 | 2);
      piVar16 = (int *)0x0;
      iVar3 = 2;
      piVar24 = (int *)0x78;
      local_154 = local_154 + 1;
      break;
    case (int *)0x75:
      if ((int)piVar25 << 0x1a < 0) goto LAB_0800618a;
LAB_080066c0:
      ppiVar14 = local_154 + 1;
      if ((int)piVar25 << 0x1b < 0) {
LAB_08006bf2:
        piVar22 = *local_154;
        piVar16 = (int *)0x0;
        iVar3 = 1;
        local_154 = ppiVar14;
      }
      else if ((int)piVar25 << 0x19 < 0) {
        piVar22 = (int *)(uint)*(ushort *)local_154;
        piVar16 = (int *)0x0;
        iVar3 = 1;
        local_154 = ppiVar14;
      }
      else {
        if (-1 < (int)piVar25 << 0x16) goto LAB_08006bf2;
        piVar22 = (int *)(uint)*(byte *)local_154;
        piVar16 = (int *)0x0;
        iVar3 = 1;
        local_154 = ppiVar14;
      }
      break;
    case (int *)0x78:
      local_11c = "0123456789abcdef";
      if (((uint)piVar25 & 0x20) != 0) goto LAB_080061ac;
LAB_08006696:
      ppiVar14 = local_154 + 1;
      if (((uint)piVar25 & 0x10) == 0) {
        if (((uint)piVar25 & 0x40) == 0) {
          if (((uint)piVar25 & 0x200) == 0) goto LAB_08006bbc;
          piVar22 = (int *)(uint)*(byte *)local_154;
          piVar16 = (int *)0x0;
          local_154 = ppiVar14;
        }
        else {
          piVar22 = (int *)(uint)*(ushort *)local_154;
          piVar16 = (int *)0x0;
          local_154 = ppiVar14;
        }
      }
      else {
LAB_08006bbc:
        piVar22 = *local_154;
        piVar16 = (int *)0x0;
        local_154 = ppiVar14;
      }
LAB_080061be:
      if ((((uint)piVar25 & 1) != 0) && (((uint)piVar22 | (uint)piVar16) != 0)) {
        piVar25 = (int *)((uint)piVar25 | 2);
        local_f4 = CONCAT11((char)piVar24,0x30);
      }
      iVar3 = 2;
      piVar25 = (int *)((uint)piVar25 & 0xfffffbff);
    }
    local_f5 = 0;
    if (piVar27 == (int *)0xffffffff) {
      if (iVar3 != 1) goto LAB_08006136;
LAB_08006980:
      piVar21 = piVar25;
      if (piVar16 == (int *)0x0 && piVar22 < (int *)0xa) goto LAB_0800698a;
LAB_08006f16:
      lVar32 = CONCAT44(piVar16,piVar22);
      piVar23 = (int *)(&bStack_2a + 2);
      piVar22 = (int *)0x0;
      pbVar26 = local_108;
      local_168 = piVar23;
      local_158 = (char *)ppiVar2;
      local_150._0_4_ = piVar25;
      local_148 = piVar24;
      do {
        iVar3 = (int)((ulonglong)lVar32 >> 0x20);
        uVar19 = (uint)lVar32;
        cVar6 = '\n';
        __aeabi_uldivmod(uVar19,iVar3,10,0);
        *(byte *)((int)piVar23 + -1) = cVar6 + 0x30;
        piVar22 = (int *)((int)piVar22 + 1);
        piVar23 = (int *)((int)piVar23 + -1);
        if ((((((uint)piVar25 & 0x400) != 0) && (piVar22 == (int *)(uint)*pbVar26)) &&
            (piVar22 != (int *)0xff)) && (iVar3 != 0 || 9 < uVar19)) {
          piVar23 = (int *)((int)piVar23 - (int)local_104);
          strncpy(piVar23,local_110,local_104);
          if (pbVar26[1] == 0) {
            piVar22 = (int *)0x0;
          }
          else {
            pbVar26 = pbVar26 + 1;
            piVar22 = (int *)0x0;
          }
        }
        lVar32 = __aeabi_uldivmod(uVar19,iVar3,10,0);
      } while (lVar32 != 0);
      piVar24 = local_148;
      piVar25 = (int *)local_150;
      ppiVar2 = (int **)local_158;
      local_158 = (char *)((int)local_168 - (int)piVar23);
      local_138 = piVar22;
      local_108 = pbVar26;
    }
    else {
      piVar21 = (int *)((uint)piVar25 & 0xffffff7f);
      iVar8 = iVar3;
      if (((uint)piVar22 | (uint)piVar16) == 0) {
LAB_080060a4:
        if (piVar27 == (int *)0x0) {
          if (iVar3 == 0) {
            local_158 = (char *)((uint)piVar25 & 1);
            if ((int *)local_158 == (int *)0x0) {
              piVar23 = (int *)(&bStack_2a + 2);
              piVar25 = piVar21;
            }
            else {
              piVar23 = (int *)(&bStack_2a + 1);
              local_29 = '0';
              piVar25 = piVar21;
            }
          }
          else {
            piVar23 = (int *)(&bStack_2a + 2);
            piVar25 = piVar21;
            local_158 = (char *)piVar27;
          }
        }
        else {
          piVar25 = piVar21;
          if (iVar3 != 1) goto LAB_08006136;
LAB_0800698a:
          local_29 = (char)piVar22 + '0';
          piVar23 = (int *)(&bStack_2a + 1);
          local_158 = (char *)0x1;
          piVar25 = piVar21;
        }
      }
      else {
LAB_08006130:
        iVar3 = iVar8;
        piVar25 = piVar21;
        if (iVar8 == 1) goto LAB_08006980;
LAB_08006136:
        if (iVar3 == 2) {
          piVar23 = (int *)(&bStack_2a + 2);
          do {
            piVar21 = (int *)((uint)piVar22 >> 4 | (int)piVar16 << 0x1c);
            piVar16 = (int *)((uint)piVar16 >> 4);
            piVar23 = (int *)((int)piVar23 + -1);
            *(char *)piVar23 = local_11c[(uint)piVar22 & 0xf];
            piVar22 = piVar21;
          } while (((uint)piVar21 | (uint)piVar16) != 0);
        }
        else {
          piVar23 = (int *)(&bStack_2a + 2);
          do {
            piVar21 = piVar23;
            piVar9 = (int *)((uint)piVar22 >> 3 | (int)piVar16 << 0x1d);
            piVar16 = (int *)((uint)piVar16 >> 3);
            iVar3 = ((uint)piVar22 & 7) + 0x30;
            *(byte *)((int)piVar21 + -1) = (byte)iVar3;
            piVar23 = (int *)((int)piVar21 + -1);
            piVar22 = piVar9;
          } while (((uint)piVar9 | (uint)piVar16) != 0);
          if ((((uint)piVar25 & 1) != 0) && (iVar3 != 0x30)) {
            piVar23 = (int *)((int)piVar21 + -2);
            *(byte *)((int)piVar21 + -2) = 0x30;
            local_158 = (char *)(&bStack_2a + (2 - (int)piVar23));
            goto LAB_0800675a;
          }
        }
        local_158 = (char *)(&bStack_2a + (2 - (int)piVar23));
      }
    }
LAB_0800675a:
    local_148 = (int *)0x0;
    local_13c = (int **)0x0;
    local_134 = (int *)0x0;
    local_130 = (int *)0x0;
    piVar16 = (int *)(uint)local_f5;
    piVar22 = piVar27;
    local_168 = (int *)local_158;
    if ((int)local_158 < (int)piVar27) {
      local_168 = piVar27;
    }
    goto LAB_08006538;
  }
LAB_08006216:
  piVar28 = local_160;
  if (local_d0 == (int *)0x0) {
LAB_0800604a:
    uVar13 = *(ushort *)(local_160 + 3);
  }
  else {
    __ssprint_r(local_16c,local_160,&local_d8);
    uVar13 = *(ushort *)(piVar28 + 3);
  }
LAB_0800604e:
  if ((uVar13 & 0x40) != 0) {
    local_164 = (byte *)0xffffffff;
  }
  return local_164;
switchD_08005f58_caseD_6c:
  piVar24 = (int *)(uint)*(byte *)piVar28;
  if (piVar24 == (int *)0x6c) {
    piVar24 = (int *)(uint)*(byte *)((int)piVar28 + 1);
    piVar25 = (int *)((uint)piVar25 | 0x20);
    piVar28 = (int *)((int)piVar28 + 1);
  }
  else {
    piVar25 = (int *)((uint)piVar25 | 0x10);
  }
  goto LAB_08005f4a;
  while( true ) {
    iVar8 = __aeabi_dcmpeq((int)uVar33,uVar10,local_124,local_120);
    if (iVar8 != 0) break;
LAB_080072ba:
    piVar16 = param_3;
    piVar22 = (int *)((int)piVar22 + -1);
    uVar33 = __muldf3((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0,0x40300000);
    iVar3 = __aeabi_d2iz();
    uVar34 = __aeabi_i2d();
    uVar33 = __subdf3((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),(int)uVar34,
                      (int)((ulonglong)uVar34 >> 0x20));
    uVar10 = (undefined4)((ulonglong)uVar33 >> 0x20);
    param_3 = (int *)((int)piVar16 + 1);
    *(char *)piVar16 = pcVar18[iVar3];
    if (piVar22 == (int *)0xffffffff) break;
  }
  piVar23 = local_fc;
  piVar25 = local_100;
  piVar27 = local_130;
  piVar24 = local_134;
  piVar28 = local_138;
  ppiVar2 = local_13c;
  local_13c = (int **)piVar22;
  local_134 = piVar16;
  local_150 = uVar33;
  iVar8 = __aeabi_dcmpgt((int)uVar33,uVar10,0,0x3fe00000);
  if (iVar8 == 0) {
    iVar8 = __aeabi_dcmpeq((int *)local_150,local_150._4_4_,0,0x3fe00000);
    if ((iVar8 != 0) && (iVar3 << 0x1f < 0)) goto LAB_0800748a;
    if (-1 < (int)local_13c) {
      piVar16 = (int *)((byte *)((int)local_13c + 1) + (int)param_3);
      piVar22 = param_3;
      do {
        param_3 = (int *)((int)piVar22 + 1);
        *(byte *)piVar22 = 0x30;
        piVar22 = param_3;
      } while (piVar16 != param_3);
    }
  }
  else {
LAB_0800748a:
    bVar1 = local_158[0xf];
    bVar7 = *(byte *)piVar16;
    piVar22 = param_3;
    local_e0 = local_134;
    while (bVar1 == bVar7) {
      *(byte *)((int)piVar22 + -1) = 0x30;
      bVar7 = *(byte *)((int)local_e0 + -1);
      piVar22 = local_e0;
      local_e0 = (int *)((int)local_e0 + -1);
    }
    if (bVar7 == 0x39) {
      bVar7 = local_158[10];
    }
    else {
      bVar7 = bVar7 + 1;
    }
    *(byte *)((int)piVar22 + -1) = bVar7;
  }
  local_138 = (int *)((int)param_3 - (int)piVar23);
LAB_08006cb0:
  local_134 = local_f0;
  if (local_168 == (int *)0x47) {
    if (((int)((int)local_f0 + 3) < 0 == SCARRY4((int)local_f0,3)) &&
       ((int)local_f0 <= (int)piVar27)) {
      if ((int)local_f0 < (int)local_138) {
        local_158 = (char *)((int)local_138 + (int)local_118);
        if (0 < (int)local_f0) {
          piVar24 = (int *)0x67;
          goto LAB_080074f8;
        }
        local_158 = (char *)((int)local_158 + (1 - (int)local_f0));
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
        piVar24 = (int *)0x67;
      }
      else {
        if ((int)piVar25 << 0x1f < 0) {
          local_158 = (char *)((int)local_f0 + (int)local_118);
        }
        else {
          local_158 = (char *)local_f0;
        }
        if (-1 < (int)piVar25 << 0x15) {
          piVar24 = (int *)0x67;
          goto LAB_0800754a;
        }
        if (0 < (int)local_f0) {
          piVar24 = (int *)0x67;
          goto LAB_080074fc;
        }
        piVar24 = (int *)0x67;
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
      }
      goto LAB_080073d6;
    }
    piVar24 = (int *)((int)piVar24 + -2);
    local_168 = (int *)((uint)piVar24 & 0xffffffdf);
LAB_08006cc4:
    local_e8 = (char)piVar24;
    if (local_168 == (int *)0x41) {
      local_e8 = local_e8 + '\x0f';
    }
    piVar27 = (int *)((int)local_f0 + -1);
    if ((int)piVar27 < 0) {
      local_e7 = 0x2d;
      local_f0 = (int *)(1 - (int)local_f0);
    }
    else {
      local_e7 = 0x2b;
      local_f0 = piVar27;
    }
    if ((int)local_f0 < 10) {
      if (local_168 == (int *)0x41) {
        pcVar18 = (char *)((int)&local_e8 + 2);
      }
      else {
        local_e6[0] = 0x30;
        pcVar18 = (char *)((int)&local_e8 + 3);
      }
      *pcVar18 = (char)local_f0 + '0';
      pcVar18 = pcVar18 + 1;
    }
    else {
      pbVar30 = abStack_dc + 3;
      pbVar26 = pbVar30;
      do {
        pbVar5 = pbVar26;
        piVar22 = (int *)((uint)local_f0 / 10);
        pbVar5[-1] = (char)local_f0 + (char)piVar22 * -10 + 0x30;
        pbVar26 = pbVar5 + -1;
        local_f0 = piVar22;
      } while ((int *)0x9 < piVar22);
      uVar19 = (uint)(piVar22 + 0xc) & 0xff;
      pbVar5[-2] = (byte)uVar19;
      if (pbVar5 + -2 < pbVar30) {
        pbVar5 = pbVar26;
        puVar20 = (undefined *)((int)&local_e8 + 2);
        while( true ) {
          *puVar20 = (char)uVar19;
          if (pbVar30 == pbVar5) break;
          uVar19 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          puVar20 = puVar20 + 1;
        }
        pcVar18 = (char *)(((int)&local_188 * 2 - (int)pbVar26) + 0x152);
      }
      else {
        pcVar18 = (char *)((int)&local_e8 + 2);
      }
    }
    local_10c = (int *)(pcVar18 + -(int)&local_e8);
    local_158 = (char *)((int)local_10c + (int)local_138);
    if ((1 < (int)local_138) || ((int)piVar25 << 0x1f < 0)) {
      local_158 = (char *)((int)local_158 + (int)local_118);
    }
    local_13c = (int **)0x0;
    local_134 = (int *)0x0;
    local_130 = (int *)0x0;
    local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
    piVar25 = (int *)((uint)piVar25 & 0xfffffbff | 0x100);
    local_f0 = piVar27;
  }
  else {
    if (local_168 != (int *)0x46) goto LAB_08006cc4;
    if ((int)local_f0 < 1) {
      if ((piVar27 == (int *)0x0) && (-1 < (int)piVar25 << 0x1f)) {
        piVar24 = (int *)0x66;
        local_168 = (int *)0x1;
        local_158 = (char *)0x1;
      }
      else {
        piVar24 = (int *)0x66;
        local_158 = (char *)((byte *)((int)local_118 + 1) + (int)piVar27);
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
      }
LAB_080073d6:
      local_13c = (int **)0x0;
      local_130 = (int *)0x0;
      piVar25 = local_140;
    }
    else {
      if ((piVar27 == (int *)0x0) && (-1 < (int)piVar25 << 0x1f)) {
        piVar24 = (int *)0x66;
        local_158 = (char *)local_f0;
      }
      else {
        piVar24 = (int *)0x66;
        local_158 = (char *)((byte *)((int)local_f0 + (int)local_118) + (int)piVar27);
      }
LAB_080074f8:
      if (-1 < (int)piVar25 << 0x15) {
LAB_0800754a:
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
        goto LAB_080073d6;
      }
LAB_080074fc:
      local_13c = (int **)0x0;
      local_130 = (int *)0x0;
      uVar19 = (uint)*local_108;
      while (uVar19 != 0xff) {
        while( true ) {
          if ((int)local_134 <= (int)uVar19) goto LAB_08007524;
          uVar4 = (uint)local_108[1];
          local_134 = (int *)((int)local_134 - uVar19);
          if (uVar4 == 0) break;
          local_108 = local_108 + 1;
          local_130 = (int *)((int)local_130 + 1);
          uVar19 = uVar4;
          if (uVar4 == 0xff) goto LAB_08007524;
        }
        local_13c = (int **)((int)local_13c + 1);
      }
LAB_08007524:
      local_158 = (char *)((int)local_158 + (int)local_104 * ((int)local_130 + (int)local_13c));
      local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
      piVar25 = local_140;
    }
  }
  if (local_144 == (int *)0x0) {
    piVar16 = (int *)(uint)local_f5;
    piVar22 = (int *)0x0;
LAB_08006538:
    if (piVar16 != (int *)0x0) goto LAB_0800653e;
  }
  else {
    piVar16 = (int *)0x2d;
    piVar22 = (int *)0x0;
    local_f5 = 0x2d;
LAB_0800653e:
    local_168 = (int *)((int)local_168 + 1);
  }
LAB_08006298:
  piVar27 = local_160;
  puVar29 = local_16c;
  local_150._0_4_ = (int *)((uint)piVar25 & 2);
  if ((int *)local_150 != (int *)0x0) {
    local_168 = (int *)((int)local_168 + 2);
  }
  local_144 = (int *)((uint)piVar25 & 0x84);
  if ((local_144 == (int *)0x0) &&
     (piVar21 = (int *)((int)local_15c - (int)local_168), 0 < (int)piVar21)) {
    if (0x10 < (int)piVar21) {
      piVar16 = (int *)0x10;
      local_100 = piVar24;
      do {
        piVar9 = piVar21;
        local_d4 = (int *)((int)local_d4 + 1);
        local_d0 = local_d0 + 4;
        *ppiVar2 = (int *)"                0000000000000000Infinity";
        ppiVar2[1] = piVar16;
        if ((int)local_d4 < 8) {
          ppiVar2 = ppiVar2 + 2;
          piVar24 = local_100;
        }
        else {
          local_140 = piVar16;
          iVar3 = __ssprint_r(puVar29,piVar27,&local_d8);
          if (iVar3 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
          piVar16 = local_140;
          piVar24 = local_100;
        }
        piVar21 = piVar9 + -4;
        local_100 = piVar24;
      } while (0x10 < (int)piVar21);
      piVar21 = piVar9 + -4;
    }
    local_d4 = (int *)((int)local_d4 + 1);
    local_d0 = (int *)((int)local_d0 + (int)piVar21);
    *ppiVar2 = (int *)"                0000000000000000Infinity";
    ppiVar2[1] = piVar21;
    if ((int)local_d4 < 8) {
      piVar16 = (int *)(uint)local_f5;
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
      if (iVar3 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
      piVar16 = (int *)(uint)local_f5;
    }
  }
  if (piVar16 != (int *)0x0) {
    local_d0 = (int *)((int)local_d0 + 1);
    local_d4 = (int *)((int)local_d4 + 1);
    *ppiVar2 = (int *)&local_f5;
    ppiVar2[1] = (int *)0x1;
    if ((int)local_d4 < 8) {
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
      if (iVar3 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
    }
  }
  if ((int *)local_150 != (int *)0x0) {
    local_d0 = (int *)((int)local_d0 + 2);
    local_d4 = (int *)((int)local_d4 + 1);
    *ppiVar2 = (int *)&local_f4;
    ppiVar2[1] = (int *)0x2;
    if ((int)local_d4 < 8) {
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
      if (iVar3 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
    }
  }
  piVar27 = local_160;
  if ((local_144 == (int *)0x80) &&
     (piVar16 = (int *)((int)local_15c - (int)local_168), 0 < (int)piVar16)) {
    if (0x10 < (int)piVar16) {
      do {
        while( true ) {
          piVar21 = piVar16;
          local_d4 = (int *)((int)local_d4 + 1);
          local_d0 = local_d0 + 4;
          *ppiVar2 = (int *)0x8009f60;
          ppiVar2[1] = (int *)0x10;
          if ((int)local_d4 < 8) break;
          iVar3 = __ssprint_r(local_16c,piVar27,&local_d8);
          if (iVar3 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
          piVar16 = piVar21 + -4;
          if ((int)(piVar21 + -4) < 0x11) goto LAB_08006882;
        }
        ppiVar2 = ppiVar2 + 2;
        piVar16 = piVar21 + -4;
      } while (0x10 < (int)(piVar21 + -4));
LAB_08006882:
      piVar16 = piVar21 + -4;
    }
    local_d4 = (int *)((int)local_d4 + 1);
    local_d0 = (int *)((int)local_d0 + (int)piVar16);
    *ppiVar2 = (int *)0x8009f60;
    ppiVar2[1] = piVar16;
    if ((int)local_d4 < 8) {
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
      if (iVar3 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
    }
  }
  piVar27 = local_160;
  piVar22 = (int *)((int)piVar22 - (int)local_158);
  if (0 < (int)piVar22) {
    if (0x10 < (int)piVar22) {
      do {
        while( true ) {
          piVar16 = piVar22;
          local_d4 = (int *)((int)local_d4 + 1);
          local_d0 = local_d0 + 4;
          *ppiVar2 = (int *)0x8009f60;
          ppiVar2[1] = (int *)0x10;
          if ((int)local_d4 < 8) break;
          iVar3 = __ssprint_r(local_16c,piVar27,&local_d8);
          if (iVar3 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
          piVar22 = piVar16 + -4;
          if ((int)(piVar16 + -4) < 0x11) goto LAB_080063d2;
        }
        ppiVar2 = ppiVar2 + 2;
        piVar22 = piVar16 + -4;
      } while (0x10 < (int)(piVar16 + -4));
LAB_080063d2:
      piVar22 = piVar16 + -4;
    }
    local_d4 = (int *)((int)local_d4 + 1);
    local_d0 = (int *)((int)local_d0 + (int)piVar22);
    *ppiVar2 = (int *)0x8009f60;
    ppiVar2[1] = piVar22;
    if ((int)local_d4 < 8) {
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
      if (iVar3 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
    }
  }
  piVar27 = local_d0;
  if (((uint)piVar25 & 0x100) == 0) {
    local_d4 = (int *)((int)local_d4 + 1);
    local_d0 = (int *)((int)local_d0 + (int)local_158);
    *ppiVar2 = piVar23;
    ppiVar2[1] = (int *)local_158;
    if ((int)local_d4 < 8) {
LAB_0800640e:
      ppiVar2 = ppiVar2 + 2;
      piVar27 = local_d0;
    }
    else {
LAB_08006a20:
      iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
      if (iVar3 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
      piVar27 = local_d0;
    }
  }
  else if ((int)piVar24 < 0x66) {
    local_158 = (char *)((int)local_d0 + 1);
    piVar27 = (int *)((int)local_d4 + 1);
    ppiVar14 = ppiVar2 + 2;
    local_d0 = (int *)local_158;
    if (((int)local_138 < 2) && (((uint)piVar25 & 1) == 0)) {
      *ppiVar2 = piVar23;
      ppiVar2[1] = (int *)0x1;
      if ((int)piVar27 < 8) {
        local_150._0_4_ = (int *)((int)local_d4 + 2);
        ppiVar2 = ppiVar2 + 4;
      }
      else {
        local_d4 = piVar27;
        iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
        if (iVar3 != 0) goto LAB_0800603e;
        local_150._0_4_ = (int *)((int)local_d4 + 1);
        ppiVar14 = local_cc;
        local_158 = (char *)local_d0;
        ppiVar2 = local_cc + 2;
      }
    }
    else {
      *ppiVar2 = piVar23;
      ppiVar2[1] = (int *)0x1;
      local_d4 = piVar27;
      if (7 < (int)piVar27) {
        iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
        if (iVar3 != 0) goto LAB_0800603e;
        ppiVar14 = local_cc;
        local_158 = (char *)local_d0;
      }
      local_d4 = (int *)((int)local_d4 + 1);
      local_158 = (char *)((int)local_158 + (int)local_118);
      *ppiVar14 = local_114;
      ppiVar14[1] = local_118;
      local_d0 = (int *)local_158;
      if ((int)local_d4 < 8) {
        ppiVar17 = ppiVar14 + 2;
      }
      else {
        iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
        if (iVar3 != 0) goto LAB_0800603e;
        ppiVar17 = local_cc;
      }
      piVar24 = local_d4;
      local_150._0_4_ = (int *)((int)local_d4 + 1);
      piVar22 = (int *)((int)local_138 + -1);
      ppiVar11 = ppiVar17 + 2;
      local_158 = (char *)local_d0;
      local_144 = (int *)local_150;
      iVar3 = __aeabi_dcmpeq(local_128,local_12c,local_124,local_120);
      piVar27 = local_160;
      puVar29 = local_16c;
      if (iVar3 == 0) {
        local_158 = (char *)((int)local_158 + (int)piVar22);
        *ppiVar17 = (int *)((int)piVar23 + 1);
        ppiVar17[1] = piVar22;
        local_d0 = (int *)local_158;
        if ((int)(int *)local_150 < 8) {
          local_150._0_4_ = (int *)((int)piVar24 + 2);
          ppiVar14 = ppiVar11;
          ppiVar2 = ppiVar17 + 4;
        }
        else {
LAB_08006d9c:
          local_158 = (char *)local_d0;
          local_d4 = (int *)local_150;
          iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
          if (iVar3 != 0) goto LAB_0800603e;
          local_150._0_4_ = (int *)((int)local_d4 + 1);
          local_158 = (char *)local_d0;
          ppiVar14 = local_cc;
          ppiVar2 = local_cc + 2;
        }
      }
      else {
        ppiVar14 = ppiVar17;
        ppiVar2 = ppiVar11;
        if (0 < (int)piVar22) {
          local_d0 = (int *)local_158;
          local_d4 = local_144;
          if (0x10 < (int)piVar22) {
            while( true ) {
              local_d0 = local_d0 + 4;
              *ppiVar17 = (int *)0x8009f60;
              ppiVar17[1] = (int *)0x10;
              if ((int)local_d4 < 8) {
                ppiVar17 = ppiVar17 + 2;
              }
              else {
                iVar3 = __ssprint_r(puVar29,piVar27,&local_d8);
                if (iVar3 != 0) goto LAB_0800603e;
                ppiVar17 = local_cc;
              }
              piVar22 = piVar22 + -4;
              if ((int)piVar22 < 0x11) break;
              local_d4 = (int *)((int)local_d4 + 1);
            }
            local_150._0_4_ = (int *)((int)local_d4 + 1);
            ppiVar11 = ppiVar17 + 2;
            local_158 = (char *)local_d0;
          }
          *ppiVar17 = (int *)0x8009f60;
          ppiVar17[1] = piVar22;
          local_158 = (char *)((int)local_158 + (int)piVar22);
          local_d0 = (int *)local_158;
          if (7 < (int)(int *)local_150) goto LAB_08006d9c;
          local_150._0_4_ = (int *)((int)(int *)local_150 + 1);
          ppiVar2 = ppiVar11 + 2;
          ppiVar14 = ppiVar11;
        }
      }
    }
    ppiVar14[1] = local_10c;
    local_d0 = (int *)((int)local_158 + (int)local_10c);
    local_d4 = (int *)local_150;
    *ppiVar14 = (int *)&local_e8;
    piVar27 = local_d0;
    if (7 < (int)(int *)local_150) {
      iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
      if (iVar3 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
      piVar27 = local_d0;
    }
  }
  else {
    iVar3 = __aeabi_dcmpeq(local_128,local_12c,local_124,local_120);
    if (iVar3 == 0) {
      if ((int)local_f0 < 1) {
        local_d4 = (int *)((int)local_d4 + 1);
        local_d0 = (int *)((int)piVar27 + 1);
        *ppiVar2 = (int *)&DAT_08009f4c;
        ppiVar2[1] = (int *)0x1;
        if ((int)local_d4 < 8) {
          ppiVar2 = ppiVar2 + 2;
        }
        else {
          iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
          if (iVar3 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
        }
        if (((local_f0 != (int *)0x0) || (local_138 != (int *)0x0)) ||
           (piVar27 = local_d0, ((uint)piVar25 & 1) != 0)) {
          local_d4 = (int *)((int)local_d4 + 1);
          local_d0 = (int *)((int)local_d0 + (int)local_118);
          *ppiVar2 = local_114;
          ppiVar2[1] = local_118;
          if ((int)local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
          }
          else {
            iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
            if (iVar3 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
          }
          puVar29 = local_16c;
          if ((int)local_f0 < 0) {
            piVar27 = (int *)-(int)local_f0;
            if ((int)(local_f0 + 4) < 0 != SCARRY4((int)local_f0,0x10)) {
              do {
                local_d4 = (int *)((int)local_d4 + 1);
                local_d0 = local_d0 + 4;
                *ppiVar2 = (int *)0x8009f60;
                ppiVar2[1] = (int *)0x10;
                if ((int)local_d4 < 8) {
                  ppiVar2 = ppiVar2 + 2;
                }
                else {
                  iVar3 = __ssprint_r(puVar29,local_160,&local_d8);
                  if (iVar3 != 0) goto LAB_0800603e;
                  ppiVar2 = local_cc;
                }
                piVar27 = piVar27 + -4;
              } while (0x10 < (int)piVar27);
            }
            local_d4 = (int *)((int)local_d4 + 1);
            local_d0 = (int *)((int)local_d0 + (int)piVar27);
            *ppiVar2 = (int *)0x8009f60;
            ppiVar2[1] = piVar27;
            if ((int)local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
              if (iVar3 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
          }
          local_d0 = (int *)((int)local_d0 + (int)local_138);
          *ppiVar2 = piVar23;
          ppiVar2[1] = local_138;
          goto joined_r0x08006a1c;
        }
      }
      else {
        piVar24 = local_134;
        if ((int)local_138 <= (int)local_134) {
          piVar24 = local_138;
        }
        if (0 < (int)piVar24) {
          local_d0 = (int *)((int)piVar27 + (int)piVar24);
          local_d4 = (int *)((int)local_d4 + 1);
          *ppiVar2 = piVar23;
          ppiVar2[1] = piVar24;
          if ((int)local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
            piVar27 = local_d0;
          }
          else {
            iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
            if (iVar3 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
            piVar27 = local_d0;
          }
        }
        piVar16 = local_160;
        puVar29 = local_16c;
        piVar22 = local_134;
        if (-1 < (int)piVar24) {
          piVar22 = (int *)((int)local_134 - (int)piVar24);
        }
        if (0 < (int)piVar22) {
          for (; 0x10 < (int)piVar22; piVar22 = piVar22 + -4) {
            local_d4 = (int *)((int)local_d4 + 1);
            local_d0 = piVar27 + 4;
            *ppiVar2 = (int *)0x8009f60;
            ppiVar2[1] = (int *)0x10;
            if ((int)local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar3 = __ssprint_r(puVar29,piVar16,&local_d8);
              if (iVar3 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
            piVar27 = local_d0;
          }
          local_d4 = (int *)((int)local_d4 + 1);
          piVar27 = (int *)((int)piVar27 + (int)piVar22);
          *ppiVar2 = (int *)0x8009f60;
          ppiVar2[1] = piVar22;
          local_d0 = piVar27;
          if ((int)local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
          }
          else {
            iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
            if (iVar3 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
            piVar27 = local_d0;
          }
        }
        piVar22 = local_104;
        piVar24 = local_160;
        puVar29 = local_16c;
        piVar16 = (int *)((int)local_134 + (int)piVar23);
        if (((uint)piVar25 & 0x400) != 0) {
          local_158 = (char *)((int)piVar23 + (int)local_138);
          pbVar26 = local_108;
          local_150._0_4_ = piVar28;
          local_144 = piVar25;
          local_140 = piVar23;
          if (local_130 == (int *)0x0) goto LAB_08007176;
LAB_080070ba:
          if (local_13c != (int **)0x0) goto LAB_0800717e;
          pbVar26 = pbVar26 + -1;
          local_130 = (int *)((int)local_130 + -1);
          do {
            local_d4 = (int *)((int)local_d4 + 1);
            local_d0 = (int *)((int)piVar27 + (int)piVar22);
            *ppiVar2 = local_110;
            ppiVar2[1] = piVar22;
            if ((int)local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar3 = __ssprint_r(puVar29,piVar24,&local_d8);
              if (iVar3 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
            piVar27 = (int *)(uint)*pbVar26;
            piVar28 = (int *)((int)local_158 - (int)piVar16);
            if ((int)piVar27 <= (int)(int *)((int)local_158 - (int)piVar16)) {
              piVar28 = piVar27;
            }
            if (0 < (int)piVar28) {
              local_d0 = (int *)((int)local_d0 + (int)piVar28);
              local_d4 = (int *)((int)local_d4 + 1);
              *ppiVar2 = piVar16;
              ppiVar2[1] = piVar28;
              if ((int)local_d4 < 8) {
                piVar27 = (int *)(uint)*pbVar26;
                ppiVar2 = ppiVar2 + 2;
              }
              else {
                iVar3 = __ssprint_r(puVar29,piVar24,&local_d8);
                if (iVar3 != 0) goto LAB_0800603e;
                ppiVar2 = local_cc;
                piVar27 = (int *)(uint)*pbVar26;
              }
            }
            piVar25 = piVar27;
            if (-1 < (int)piVar28) {
              piVar25 = (int *)((int)piVar27 - (int)piVar28);
            }
            if (0 < (int)piVar25) {
              for (; 0x10 < (int)piVar25; piVar25 = piVar25 + -4) {
                while( true ) {
                  local_d4 = (int *)((int)local_d4 + 1);
                  local_d0 = local_d0 + 4;
                  *ppiVar2 = (int *)0x8009f60;
                  ppiVar2[1] = (int *)0x10;
                  if ((int)local_d4 < 8) break;
                  iVar3 = __ssprint_r(puVar29,piVar24,&local_d8);
                  if (iVar3 != 0) goto LAB_0800603e;
                  piVar25 = piVar25 + -4;
                  ppiVar2 = local_cc;
                  if ((int)piVar25 < 0x11) goto LAB_08007156;
                }
                ppiVar2 = ppiVar2 + 2;
              }
LAB_08007156:
              local_d4 = (int *)((int)local_d4 + 1);
              local_d0 = (int *)((int)local_d0 + (int)piVar25);
              *ppiVar2 = (int *)0x8009f60;
              ppiVar2[1] = piVar25;
              if ((int)local_d4 < 8) {
                piVar27 = (int *)(uint)*pbVar26;
                ppiVar2 = ppiVar2 + 2;
              }
              else {
                iVar3 = __ssprint_r(puVar29,piVar24,&local_d8);
                if (iVar3 != 0) goto LAB_0800603e;
                piVar27 = (int *)(uint)*pbVar26;
                ppiVar2 = local_cc;
              }
            }
            piVar16 = (int *)((int)piVar16 + (int)piVar27);
            piVar27 = local_d0;
            if (local_130 != (int *)0x0) goto LAB_080070ba;
LAB_08007176:
            if (local_13c == (int **)0x0) {
              piVar23 = local_140;
              piVar25 = local_144;
              piVar28 = (int *)local_150;
              local_108 = pbVar26;
              if ((int *)((int)local_140 + (int)local_138) <= piVar16) {
                piVar16 = (int *)((int)local_140 + (int)local_138);
              }
              break;
            }
LAB_0800717e:
            local_13c = (int **)((int)local_13c + -1);
          } while( true );
        }
        if (((int)local_f0 < (int)local_138) || (((uint)piVar25 & 1) != 0)) {
          local_d4 = (int *)((int)local_d4 + 1);
          local_d0 = (int *)((int)piVar27 + (int)local_118);
          *ppiVar2 = local_114;
          ppiVar2[1] = local_118;
          if ((int)local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
            piVar27 = local_d0;
          }
          else {
            iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
            if (iVar3 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
            piVar27 = local_d0;
          }
        }
        piVar24 = (int *)((int)local_138 - (int)local_f0);
        piVar22 = (int *)((byte *)((int)piVar23 + (int)local_138) + -(int)piVar16);
        if ((int)piVar24 <= (int)((byte *)((int)piVar23 + (int)local_138) + -(int)piVar16)) {
          piVar22 = piVar24;
        }
        if (0 < (int)piVar22) {
          local_d0 = (int *)((int)piVar27 + (int)piVar22);
          local_d4 = (int *)((int)local_d4 + 1);
          *ppiVar2 = piVar16;
          ppiVar2[1] = piVar22;
          if ((int)local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
            piVar27 = local_d0;
          }
          else {
            iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
            if (iVar3 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
            piVar24 = (int *)((int)local_138 - (int)local_f0);
            piVar27 = local_d0;
          }
        }
        piVar16 = local_160;
        puVar29 = local_16c;
        if (-1 < (int)piVar22) {
          piVar24 = (int *)((int)piVar24 - (int)piVar22);
        }
        if (0 < (int)piVar24) {
          for (; local_d0 = piVar27, 0x10 < (int)piVar24; piVar24 = piVar24 + -4) {
            local_d4 = (int *)((int)local_d4 + 1);
            local_d0 = local_d0 + 4;
            *ppiVar2 = (int *)0x8009f60;
            ppiVar2[1] = (int *)0x10;
            if ((int)local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar3 = __ssprint_r(puVar29,piVar16,&local_d8);
              if (iVar3 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
            piVar27 = local_d0;
          }
          goto LAB_08007014;
        }
      }
    }
    else {
      local_d4 = (int *)((int)local_d4 + 1);
      local_d0 = (int *)((int)piVar27 + 1);
      *ppiVar2 = (int *)&DAT_08009f4c;
      ppiVar2[1] = (int *)0x1;
      if ((int)local_d4 < 8) {
        ppiVar2 = ppiVar2 + 2;
      }
      else {
        iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
        if (iVar3 != 0) goto LAB_0800603e;
        ppiVar2 = local_cc;
      }
      if (((int)local_f0 < (int)local_138) || (piVar27 = local_d0, ((uint)piVar25 & 1) != 0)) {
        local_d4 = (int *)((int)local_d4 + 1);
        local_d0 = (int *)((int)local_d0 + (int)local_118);
        *ppiVar2 = local_114;
        ppiVar2[1] = local_118;
        if ((int)local_d4 < 8) {
          ppiVar2 = ppiVar2 + 2;
        }
        else {
          iVar3 = __ssprint_r(local_16c,local_160,&local_d8);
          if (iVar3 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
        }
        piVar22 = local_160;
        puVar29 = local_16c;
        piVar24 = (int *)((int)local_138 + -1);
        piVar27 = local_d0;
        if (0 < (int)piVar24) {
          for (; 0x10 < (int)piVar24; piVar24 = piVar24 + -4) {
            local_d4 = (int *)((int)local_d4 + 1);
            local_d0 = local_d0 + 4;
            *ppiVar2 = (int *)0x8009f60;
            ppiVar2[1] = (int *)0x10;
            if ((int)local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar3 = __ssprint_r(puVar29,piVar22,&local_d8);
              if (iVar3 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
          }
LAB_08007014:
          local_d0 = (int *)((int)local_d0 + (int)piVar24);
          *ppiVar2 = (int *)0x8009f60;
          ppiVar2[1] = piVar24;
joined_r0x08006a1c:
          local_d4 = (int *)((int)local_d4 + 1);
          if (7 < (int)local_d4) goto LAB_08006a20;
          goto LAB_0800640e;
        }
      }
    }
  }
  piVar24 = local_160;
  puVar29 = local_16c;
  if ((((uint)piVar25 & 4) != 0) &&
     (piVar25 = (int *)((int)local_15c - (int)local_168), 0 < (int)piVar25)) {
    for (; local_d0 = piVar27, 0x10 < (int)piVar25; piVar25 = piVar25 + -4) {
      while( true ) {
        local_d4 = (int *)((int)local_d4 + 1);
        local_d0 = local_d0 + 4;
        *ppiVar2 = (int *)"                0000000000000000Infinity";
        ppiVar2[1] = (int *)0x10;
        if ((int)local_d4 < 8) break;
        iVar3 = __ssprint_r(puVar29,piVar24,&local_d8);
        if (iVar3 != 0) goto LAB_0800603e;
        piVar25 = piVar25 + -4;
        ppiVar2 = local_cc;
        if ((int)piVar25 < 0x11) goto LAB_0800647a;
      }
      ppiVar2 = ppiVar2 + 2;
      piVar27 = local_d0;
    }
LAB_0800647a:
    local_d4 = (int *)((int)local_d4 + 1);
    local_d0 = (int *)((int)local_d0 + (int)piVar25);
    *ppiVar2 = (int *)"                0000000000000000Infinity";
    ppiVar2[1] = piVar25;
    piVar27 = local_d0;
    if ((7 < (int)local_d4) &&
       (iVar3 = __ssprint_r(local_16c,local_160,&local_d8), piVar27 = local_d0, iVar3 != 0))
    goto LAB_0800603e;
  }
  piVar24 = local_15c;
  if ((int)local_15c < (int)local_168) {
    piVar24 = local_168;
  }
  local_164 = local_164 + (int)piVar24;
  if ((piVar27 == (int *)0x0) || (iVar3 = __ssprint_r(local_16c,local_160,&local_d8), iVar3 == 0)) {
    local_d4 = (int *)0x0;
    if (local_148 != (int *)0x0) {
      _free_r(local_16c,local_148);
    }
    ppiVar2 = local_cc;
LAB_0800620e:
    bVar1 = *(byte *)piVar28;
    param_3 = piVar28;
    goto joined_r0x08005ef2;
  }
LAB_0800603e:
  if (local_148 != (int *)0x0) {
    _free_r(local_16c,local_148);
  }
  goto LAB_0800604a;
switchD_08005f58_caseD_31:
  local_15c = (int *)0x0;
  piVar16 = piVar24 + -0xc;
  piVar22 = piVar28;
  do {
    piVar28 = (int *)((int)piVar22 + 1);
    piVar24 = (int *)(uint)*(byte *)piVar22;
    local_15c = (int *)((int)piVar16 + (int)local_15c * 10);
    piVar16 = piVar24 + -0xc;
    piVar22 = piVar28;
  } while (piVar16 < (int *)0xa);
  goto LAB_08005f4e;
switchD_08005f58_caseD_20:
  piVar24 = (int *)(uint)*(byte *)piVar28;
  if (local_f5 == 0) {
    local_f5 = 0x20;
  }
  goto LAB_08005f4a;
}


////>>0x080078a0>>FUN_080078a0>>////

/* WARNING: Removing unreachable block (ram,0x080078a4) */

void FUN_080078a0(void)

{
  return;
}


////>>0x080078c0>>FUN_080078c0>>////

uint FUN_080078c0(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  
  iVar4 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) < iVar4) {
    return 0;
  }
  iVar5 = iVar4 + -1;
  puVar7 = (uint *)(param_2 + 0x14);
  puVar8 = (uint *)(param_1 + 0x14);
  uVar6 = puVar8[iVar5] / (puVar7[iVar5] + 1);
  puVar9 = puVar7 + iVar5;
  if (uVar6 != 0) {
    uVar1 = 0;
    iVar3 = 0;
    puVar2 = puVar8;
    puVar11 = puVar7;
    do {
      puVar12 = puVar11 + 1;
      uVar1 = uVar6 * (*puVar11 & 0xffff) + uVar1;
      uVar10 = uVar6 * (*puVar11 >> 0x10) + (uVar1 >> 0x10);
      uVar1 = (iVar3 - (uVar1 & 0xffff)) + (*puVar2 & 0xffff);
      iVar3 = ((*puVar2 >> 0x10) - (uVar10 & 0xffff)) + ((int)uVar1 >> 0x10);
      *puVar2 = uVar1 & 0xffff | iVar3 * 0x10000;
      iVar3 = iVar3 >> 0x10;
      uVar1 = uVar10 >> 0x10;
      puVar2 = puVar2 + 1;
      puVar11 = puVar12;
    } while (puVar12 <= puVar9);
    if (puVar8[iVar5] == 0) {
      if ((puVar8 < puVar8 + iVar4 + -2) && (puVar8[iVar4 + -2] == 0)) {
        puVar2 = puVar8 + iVar4 + -3;
        do {
          iVar5 = iVar5 + -1;
          if (puVar2 <= puVar8) break;
          uVar1 = *puVar2;
          puVar2 = puVar2 + -1;
        } while (uVar1 == 0);
      }
      *(int *)(param_1 + 0x10) = iVar5;
    }
  }
  iVar4 = __mcmp();
  if (-1 < iVar4) {
    iVar4 = 0;
    uVar6 = uVar6 + 1;
    puVar2 = puVar8;
    do {
      puVar11 = puVar7 + 1;
      uVar1 = (iVar4 - (*puVar7 & 0xffff)) + (*puVar2 & 0xffff);
      iVar4 = ((*puVar2 >> 0x10) - (*puVar7 >> 0x10)) + ((int)uVar1 >> 0x10);
      *puVar2 = uVar1 & 0xffff | iVar4 * 0x10000;
      iVar4 = iVar4 >> 0x10;
      puVar2 = puVar2 + 1;
      puVar7 = puVar11;
    } while (puVar11 <= puVar9);
    if (puVar8[iVar5] == 0) {
      if ((puVar8 < puVar8 + iVar5 + -1) && (puVar8[iVar5 + -1] == 0)) {
        puVar7 = puVar8 + iVar5 + -2;
        do {
          iVar5 = iVar5 + -1;
          if (puVar7 <= puVar8) break;
          uVar1 = *puVar7;
          puVar7 = puVar7 + -1;
        } while (uVar1 == 0);
      }
      *(int *)(param_1 + 0x10) = iVar5;
    }
  }
  return uVar6;
}


////>>0x080079e8>>FUN_080079e8>>////

char * FUN_080079e8(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                   uint param_6,int *param_7,uint *param_8,char **param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  char *pcVar20;
  char *pcVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  int iVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint local_80;
  uint local_7c;
  uint local_74;
  int local_70;
  uint local_68;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_48;
  uint uStack_44;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c [2];
  
  iVar14 = *(int *)(param_1 + 0x40);
  if (iVar14 != 0) {
    uVar18 = *(uint *)(param_1 + 0x44);
    *(uint *)(iVar14 + 4) = uVar18;
    *(int *)(iVar14 + 8) = 1 << (uVar18 & 0xff);
    _Bfree(param_1,iVar14);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  bVar25 = (int)param_4 < 0;
  uVar18 = param_4;
  if (bVar25) {
    uVar18 = param_4 & 0x7fffffff;
  }
  *param_8 = (uint)bVar25;
  local_7c = param_4;
  if (bVar25) {
    local_7c = uVar18;
  }
  uVar17 = local_7c;
  if ((~uVar18 & 0x7ff00000) == 0) {
    *param_7 = 9999;
    if ((param_3 == 0) && ((uVar18 & 0xfffff) == 0)) {
      pcVar10 = "Infinity";
      if (param_9 == (char **)0x0) {
        return pcVar10;
      }
      pcVar21 = "";
    }
    else {
      pcVar10 = "NaN";
      if (param_9 == (char **)0x0) {
        return pcVar10;
      }
      pcVar21 = "";
    }
    *param_9 = pcVar21;
    return pcVar10;
  }
  uVar26 = __aeabi_dcmpeq(param_3,local_7c,0,0);
  if ((int)uVar26 != 0) {
    *param_7 = 1;
    if (param_9 != (char **)0x0) {
      *param_9 = "";
      return "0";
    }
    return "0";
  }
  uVar6 = __d2b(param_1,(int)((ulonglong)uVar26 >> 0x20),param_3,local_7c,local_2c,&local_30);
  iVar14 = local_30;
  if (uVar18 >> 0x14 == 0) {
    iVar19 = local_2c[0] + local_30;
    iVar15 = iVar19 + 0x432;
    if (iVar15 < 0x21) {
      uVar18 = param_3 << (0x20U - iVar15 & 0xff);
    }
    else {
      uVar18 = param_3 >> (iVar19 + 0x412U & 0xff) | uVar18 << (0x40U - iVar15 & 0xff);
    }
    uVar26 = __floatunsidf(uVar18);
    iVar19 = iVar19 + -1;
    bVar25 = true;
    uVar11 = (int)((ulonglong)uVar26 >> 0x20) + 0xfe100000;
    uVar18 = (uint)uVar26;
  }
  else {
    iVar19 = (uVar18 >> 0x14) - 0x3ff;
    uVar11 = local_7c & 0xfffff | 0x3ff00000;
    bVar25 = false;
    uVar18 = param_3;
  }
  uVar26 = __subdf3(uVar18,uVar11,0,0x3ff80000);
  uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0x636f4361,0x3fd287a7);
  uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0x8b60c8b3,0x3fc68a28);
  uVar27 = __aeabi_i2d(iVar19);
  uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0x509f79fb,0x3fd34413);
  uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar27,
                        (int)((ulonglong)uVar27 >> 0x20));
  uVar13 = (undefined4)((ulonglong)uVar26 >> 0x20);
  local_74 = __aeabi_d2iz();
  iVar15 = __aeabi_dcmplt((int)uVar26,uVar13,0,0);
  if (iVar15 != 0) {
    uVar27 = __aeabi_i2d(local_74);
    iVar15 = __aeabi_dcmpeq((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar26,uVar13);
    if (iVar15 == 0) {
      local_74 = local_74 - 1;
    }
  }
  if (local_74 < 0x17) {
    iVar15 = __aeabi_dcmpgt(*(undefined4 *)(&DAT_08009fa8 + local_74 * 8),
                            *(undefined4 *)(&DAT_08009fac + local_74 * 8),param_3,local_7c);
    if (iVar15 == 0) {
      bVar2 = false;
    }
    else {
      local_74 = local_74 - 1;
      bVar2 = false;
    }
  }
  else {
    bVar2 = true;
  }
  iVar15 = (iVar14 - iVar19) + -1;
  if (iVar15 < 0) {
    local_70 = 1 - (iVar14 - iVar19);
    iVar15 = 0;
  }
  else {
    local_70 = 0;
  }
  if ((int)local_74 < 0) {
    local_58 = 0;
    local_70 = local_70 - local_74;
    local_5c = -local_74;
  }
  else {
    iVar15 = iVar15 + local_74;
    local_58 = local_74;
    local_5c = 0;
  }
  if (9 < param_5) {
    local_38 = 0xffffffff;
    bVar1 = true;
    local_68 = 0xffffffff;
    bVar3 = true;
    param_5 = 0;
    param_6 = 0;
    goto LAB_08007c24;
  }
  bVar1 = (int)param_5 < 6;
  if (!bVar1) {
    param_5 = param_5 - 4;
  }
  switch(param_5) {
  case 2:
    bVar3 = false;
    break;
  case 3:
    bVar3 = false;
    goto LAB_08008300;
  case 4:
    bVar3 = true;
    break;
  case 5:
    bVar3 = true;
LAB_08008300:
    local_38 = local_74 + param_6;
    local_68 = local_38 + 1;
    uVar18 = local_68;
    if ((int)local_68 < 1) {
      uVar18 = 1;
    }
    goto LAB_08008314;
  default:
    *(undefined4 *)(param_1 + 0x44) = 0;
    pcVar10 = (char *)_Balloc(param_1,0);
    local_38 = 0xffffffff;
    local_68 = 0xffffffff;
    param_6 = 0;
    *(char **)(param_1 + 0x40) = pcVar10;
    bVar3 = true;
    goto LAB_08007e36;
  }
  if ((int)param_6 < 1) {
    local_38 = 1;
    param_6 = 1;
    local_68 = 1;
LAB_08007c24:
    *(undefined4 *)(param_1 + 0x44) = 0;
    uVar11 = local_38;
  }
  else {
    local_38 = param_6;
    local_68 = param_6;
    uVar18 = param_6;
LAB_08008314:
    *(undefined4 *)(param_1 + 0x44) = 0;
    uVar11 = local_68;
    if (0x17 < (int)uVar18) {
      iVar19 = 4;
      iVar14 = 1;
      do {
        iVar7 = iVar14;
        iVar19 = iVar19 * 2;
        iVar14 = iVar7 + 1;
      } while (iVar19 + 0x14U <= uVar18);
      *(int *)(param_1 + 0x44) = iVar7;
    }
  }
  pcVar10 = (char *)_Balloc(param_1);
  *(char **)(param_1 + 0x40) = pcVar10;
  if ((uVar11 < 0xf) && (bVar1)) {
    if ((int)local_74 < 1) {
      if (local_74 == 0) {
        iVar14 = 2;
        local_80 = param_3;
      }
      else {
        iVar14 = (-local_74 & 0xf) * 8;
        uVar26 = __muldf3(param_3,local_7c,*(undefined4 *)(&DAT_08009fa8 + iVar14),
                          *(undefined4 *)(&DAT_08009fac + iVar14));
        local_7c = (uint)((ulonglong)uVar26 >> 0x20);
        local_80 = (uint)uVar26;
        iVar19 = (int)-local_74 >> 4;
        if (iVar19 == 0) {
          iVar14 = 2;
        }
        else {
          bVar1 = false;
          iVar14 = 2;
          puVar22 = &DAT_08009f80;
          do {
            if (iVar19 << 0x1f < 0) {
              uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),*puVar22,puVar22[1]);
              bVar1 = true;
              iVar14 = iVar14 + 1;
            }
            iVar19 = iVar19 >> 1;
            puVar22 = puVar22 + 2;
          } while (iVar19 != 0);
          if (bVar1) {
            local_80 = (uint)uVar26;
            local_7c = (uint)((ulonglong)uVar26 >> 0x20);
          }
        }
      }
    }
    else {
      uVar18 = (int)local_74 >> 4;
      uVar27 = *(undefined8 *)(&DAT_08009fa8 + (local_74 & 0xf) * 8);
      uVar26 = *(undefined8 *)(&DAT_08009fa8 + (local_74 & 0xf) * 8);
      if ((int)(uVar18 << 0x1b) < 0) {
        uVar28 = __divdf3(param_3,local_7c,0x7f73bf3c,0x75154fdd);
        uStack_44 = (uint)((ulonglong)uVar28 >> 0x20);
        local_48 = (uint)uVar28;
        iVar14 = 3;
        uVar18 = uVar18 & 0xf;
      }
      else {
        iVar14 = 2;
        uStack_44 = local_7c;
        local_48 = param_3;
      }
      if (uVar18 != 0) {
        puVar22 = &DAT_08009f80;
        do {
          if ((int)(uVar18 << 0x1f) < 0) {
            uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),*puVar22,puVar22[1]);
            iVar14 = iVar14 + 1;
          }
          uVar18 = (int)uVar18 >> 1;
          puVar22 = puVar22 + 2;
          uVar27 = uVar26;
        } while (uVar18 != 0);
      }
      local_7c = (uint)((ulonglong)uVar27 >> 0x20);
      local_80 = (uint)uVar27;
      uVar26 = __divdf3(local_48,uStack_44,local_80,local_7c);
      local_80 = (uint)uVar26;
      local_7c = (uint)((ulonglong)uVar26 >> 0x20);
    }
    uVar26 = CONCAT44(local_7c,local_80);
    if ((bVar2) && (iVar19 = __aeabi_dcmplt(local_80,local_7c,0,0x3ff00000), iVar19 != 0)) {
      if (local_68 == 0) {
        uVar26 = __aeabi_i2d(iVar14);
        uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),local_80,local_7c);
        uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x401c0000);
        uVar13 = (undefined4)uVar26;
        iVar14 = (int)((ulonglong)uVar26 >> 0x20) + -0x3400000;
        goto LAB_0800852e;
      }
      if (0 < (int)local_38) {
        uVar26 = __muldf3(local_80,local_7c,0,0x40240000);
        uVar27 = __aeabi_i2d(iVar14 + 1);
        uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar26,
                          (int)((ulonglong)uVar26 >> 0x20));
        uVar27 = __aeabi_dadd((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0,0x401c0000);
        uVar13 = (undefined4)uVar27;
        local_48 = local_38;
        local_34 = local_74 - 1;
        iVar14 = (int)((ulonglong)uVar27 >> 0x20) + -0x3400000;
        goto LAB_08007cfa;
      }
      goto LAB_08007e36;
    }
    uVar27 = __aeabi_i2d(iVar14);
    uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),local_80,local_7c);
    uVar27 = __aeabi_dadd((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0,0x401c0000);
    uVar13 = (undefined4)uVar27;
    iVar14 = (int)((ulonglong)uVar27 >> 0x20) + -0x3400000;
    if (local_68 != 0) {
      local_34 = local_74;
      local_48 = local_68;
LAB_08007cfa:
      local_7c = (uint)((ulonglong)uVar26 >> 0x20);
      local_80 = (uint)uVar26;
      cVar4 = __aeabi_d2iz(local_80,local_7c);
      cVar4 = cVar4 + '0';
      uVar16 = (&DAT_08009fa0)[local_48 * 2];
      uVar12 = (&DAT_08009fa4)[local_48 * 2];
      uVar26 = __aeabi_i2d();
      uVar26 = __subdf3(local_80,local_7c,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
      uVar23 = (undefined4)((ulonglong)uVar26 >> 0x20);
      pcVar21 = pcVar10 + 1;
      if (bVar3) {
        uVar27 = __divdf3(0,0x3fe00000,uVar16,uVar12);
        uVar27 = __subdf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar13,iVar14);
        uVar13 = (undefined4)((ulonglong)uVar27 >> 0x20);
        *pcVar10 = cVar4;
        iVar14 = __aeabi_dcmpgt((int)uVar27,uVar13,(int)uVar26,uVar23);
        if (iVar14 != 0) {
LAB_08008784:
          local_74 = local_34;
          goto LAB_08008294;
        }
        uVar28 = __subdf3(0,0x3ff00000,(int)uVar26,uVar23);
        iVar14 = __aeabi_dcmpgt((int)uVar27,uVar13,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
        if (iVar14 == 0) {
          if (local_48 != 1) {
            pcVar20 = pcVar21;
            do {
              uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0,0x40240000);
              uVar13 = (undefined4)((ulonglong)uVar27 >> 0x20);
              uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40240000);
              cVar4 = __aeabi_d2iz();
              uVar28 = __aeabi_i2d();
              uVar26 = __subdf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar28,
                                (int)((ulonglong)uVar28 >> 0x20));
              uVar16 = (undefined4)((ulonglong)uVar26 >> 0x20);
              cVar4 = cVar4 + '0';
              pcVar21 = pcVar20 + 1;
              *pcVar20 = cVar4;
              iVar14 = __aeabi_dcmplt((int)uVar26,uVar16,(int)uVar27,uVar13);
              if (iVar14 != 0) {
                local_74 = local_34;
                goto LAB_08008294;
              }
              uVar28 = __subdf3(0,0x3ff00000,(int)uVar26,uVar16);
              iVar14 = __aeabi_dcmplt((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar27,
                                      uVar13);
              if (iVar14 != 0) goto LAB_08008798;
              pcVar20 = pcVar21;
            } while (pcVar21 != pcVar10 + local_48);
          }
          goto LAB_08007e36;
        }
LAB_08008798:
        local_74 = local_34;
      }
      else {
        uVar27 = __muldf3(uVar13,iVar14,uVar16,uVar12);
        uVar13 = (undefined4)((ulonglong)uVar27 >> 0x20);
        *pcVar10 = cVar4;
        if (local_48 != 1) {
          pcVar20 = pcVar21;
          do {
            uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40240000);
            cVar4 = __aeabi_d2iz();
            uVar28 = __aeabi_i2d();
            uVar26 = __subdf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar28,
                              (int)((ulonglong)uVar28 >> 0x20));
            pcVar21 = pcVar20 + 1;
            *pcVar20 = cVar4 + '0';
            pcVar20 = pcVar21;
          } while (pcVar21 != pcVar10 + local_48);
        }
        uVar16 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar28 = __aeabi_dadd((int)uVar27,uVar13,0,0x3fe00000);
        iVar14 = __aeabi_dcmplt((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar26,uVar16);
        if (iVar14 == 0) {
          uVar27 = __subdf3(0,0x3fe00000,(int)uVar27,uVar13);
          iVar14 = __aeabi_dcmpgt((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar26,uVar16);
          pcVar20 = pcVar21;
          if (iVar14 == 0) goto LAB_08007e36;
          do {
            pcVar21 = pcVar20;
            pcVar20 = pcVar21 + -1;
          } while (pcVar21[-1] == '0');
          goto LAB_08008784;
        }
        local_74 = local_34;
        cVar4 = pcVar21[-1];
      }
      goto LAB_08007f7c;
    }
LAB_0800852e:
    uVar26 = __subdf3(local_80,local_7c,0,0x40140000);
    uVar16 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar19 = __aeabi_dcmpgt((int)uVar26,uVar16,uVar13,iVar14);
    if (iVar19 == 0) {
      iVar14 = __aeabi_dcmplt((int)uVar26,uVar16,uVar13,iVar14 + -0x80000000);
      if (iVar14 == 0) goto LAB_08007e36;
      iVar19 = 0;
      iVar14 = 0;
      pcVar21 = pcVar10;
      goto LAB_080084f0;
    }
    iVar15 = 0;
    iVar7 = 0;
LAB_08008406:
    *pcVar10 = '1';
    local_74 = local_74 + 1;
    pcVar21 = pcVar10 + 1;
    iVar19 = iVar7;
    iVar14 = iVar15;
LAB_08008416:
    _Bfree(param_1,iVar14);
    if (iVar19 == 0) goto LAB_08008294;
  }
  else {
LAB_08007e36:
    pcVar21 = pcVar10;
    if ((-1 < local_2c[0]) && ((int)local_74 < 0xf)) {
      uVar13 = *(undefined4 *)(&DAT_08009fa8 + local_74 * 8);
      uVar16 = *(undefined4 *)(&DAT_08009fac + local_74 * 8);
      if ((-1 < (int)param_6) || (0 < (int)local_68)) {
        __divdf3(param_3,uVar17,uVar13,uVar16);
        bVar5 = __aeabi_d2iz();
        uVar26 = __aeabi_i2d();
        uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar13,uVar16);
        uVar26 = __subdf3(param_3,uVar17,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
        *pcVar10 = bVar5 + 0x30;
        pcVar21 = pcVar10 + 1;
        if (local_68 != 1) {
          uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40240000);
          iVar14 = __aeabi_dcmpeq((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0);
          while (iVar14 == 0) {
            uVar23 = (undefined4)((ulonglong)uVar26 >> 0x20);
            __divdf3((int)uVar26,uVar23,uVar13,uVar16);
            bVar5 = __aeabi_d2iz();
            uVar27 = __aeabi_i2d();
            uVar27 = __muldf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),uVar13,uVar16);
            uVar26 = __subdf3((int)uVar26,uVar23,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
            pcVar20 = pcVar21 + 1;
            *pcVar21 = bVar5 + 0x30;
            pcVar21 = pcVar20;
            if (local_68 == (int)pcVar20 - (int)pcVar10) goto LAB_08007f3a;
            uVar26 = __muldf3((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0x40240000);
            iVar14 = __aeabi_dcmpeq((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0,0);
          }
          goto LAB_08008294;
        }
LAB_08007f3a:
        uVar26 = __aeabi_dadd((int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
        uVar23 = (undefined4)((ulonglong)uVar26 >> 0x20);
        iVar14 = __aeabi_dcmpgt((int)uVar26,uVar23,uVar13,uVar16);
        if ((iVar14 == 0) &&
           ((iVar14 = __aeabi_dcmpeq((int)uVar26,uVar23,uVar13,uVar16), iVar14 == 0 ||
            ((bVar5 & 1) == 0)))) goto LAB_08008294;
        cVar4 = pcVar21[-1];
LAB_08007f7c:
        while (pcVar20 = pcVar21 + -1, cVar4 == '9') {
          if (pcVar10 == pcVar20) {
            *pcVar10 = '0';
            cVar4 = pcVar21[-1];
            local_74 = local_74 + 1;
            pcVar20 = pcVar10;
            break;
          }
          cVar4 = pcVar21[-2];
          pcVar21 = pcVar20;
        }
        *pcVar20 = cVar4 + '\x01';
        goto LAB_08008294;
      }
      if (local_68 == 0) {
        uVar26 = __muldf3(uVar13,uVar16,0,0x40140000);
        iVar9 = __aeabi_dcmpge((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),param_3,uVar17);
        iVar19 = 0;
        iVar15 = 0;
        iVar7 = 0;
        iVar14 = 0;
        if (iVar9 == 0) goto LAB_08008406;
      }
      else {
        iVar19 = 0;
        iVar14 = 0;
      }
LAB_080084f0:
      local_74 = ~param_6;
      pcVar10 = pcVar21;
      goto LAB_08008416;
    }
    iVar14 = local_5c;
    if (bVar3) {
      if ((int)param_5 < 2) {
        if (bVar25) {
          local_60 = local_70;
          local_70 = local_70 + local_2c[0] + 0x433;
          iVar15 = iVar15 + local_2c[0] + 0x433;
        }
        else {
          local_60 = local_70;
          local_70 = local_70 + (0x36 - local_30);
          iVar15 = iVar15 + (0x36 - local_30);
        }
      }
      else {
        iVar19 = local_68 - 1;
        if (local_5c < iVar19) {
          local_58 = local_58 + (iVar19 - local_5c);
          iVar14 = 0;
          local_5c = iVar19;
        }
        else {
          iVar14 = local_5c - iVar19;
        }
        if ((int)local_68 < 0) {
          local_60 = local_70 - local_68;
        }
        else {
          iVar15 = iVar15 + local_68;
          local_60 = local_70;
          local_70 = local_70 + local_68;
        }
      }
      iVar19 = __i2b(param_1,1);
    }
    else {
      local_60 = local_70;
      iVar19 = 0;
    }
    if ((0 < local_60) && (0 < iVar15)) {
      iVar7 = local_60;
      if (iVar15 <= local_60) {
        iVar7 = iVar15;
      }
      iVar15 = iVar15 - iVar7;
      local_70 = local_70 - iVar7;
      local_60 = local_60 - iVar7;
    }
    if (local_5c != 0) {
      if (bVar3) {
        uVar13 = uVar6;
        if (iVar14 != 0) {
          iVar19 = __pow5mult(param_1,iVar19,iVar14);
          uVar13 = __multiply(param_1,iVar19,uVar6);
          _Bfree(param_1,uVar6);
          uVar6 = uVar13;
          if (local_5c - iVar14 == 0) goto LAB_08008062;
        }
        uVar6 = __pow5mult(param_1,uVar13,local_5c - iVar14);
      }
      else {
        uVar6 = __pow5mult(param_1,uVar6,local_5c);
      }
    }
LAB_08008062:
    iVar14 = __i2b(param_1,1);
    if (local_58 == 0) {
      if (((int)param_5 < 2) && (param_3 == 0)) {
LAB_0800835a:
        if ((uVar17 & 0xfffff) == 0) {
          uVar17 = uVar17 & 0x7ff00000;
          if (uVar17 != 0) {
            iVar15 = iVar15 + 1;
            local_70 = local_70 + 1;
            uVar17 = 1;
          }
        }
        else {
          uVar17 = 0;
        }
        bVar25 = local_58 != 0;
        uVar18 = param_3;
        local_58 = uVar17;
        if (bVar25) goto LAB_080082d4;
      }
      iVar7 = 1;
    }
    else {
      uVar26 = __pow5mult(param_1,iVar14);
      iVar14 = (int)uVar26;
      if (((int)param_5 < 2) && (param_3 == 0)) goto LAB_0800835a;
      local_58 = 0;
      uVar18 = (uint)((ulonglong)uVar26 >> 0x20);
LAB_080082d4:
      iVar7 = __hi0bits(*(undefined4 *)(iVar14 + *(int *)(iVar14 + 0x10) * 4 + 0x10),uVar18);
      iVar7 = 0x20 - iVar7;
    }
    uVar18 = iVar7 + iVar15 & 0x1f;
    if (uVar18 == 0) {
      iVar7 = 0x1c;
LAB_08008096:
      iVar15 = iVar15 + iVar7;
      local_70 = local_70 + iVar7;
      local_60 = local_60 + iVar7;
    }
    else {
      if (4 < (int)(0x20 - uVar18)) {
        iVar7 = 0x1c - uVar18;
        goto LAB_08008096;
      }
      if (0x20 - uVar18 != 4) {
        iVar7 = 0x3c - uVar18;
        goto LAB_08008096;
      }
    }
    if (0 < local_70) {
      uVar6 = __lshift(param_1,uVar6,local_70);
    }
    if (0 < iVar15) {
      iVar14 = __lshift(param_1,iVar14,iVar15);
    }
    pcVar20 = pcVar10;
    if ((bVar2) && (iVar15 = __mcmp(uVar6,iVar14), iVar15 < 0)) {
      local_74 = local_74 - 1;
      uVar6 = __multadd(param_1,uVar6,10,0);
      if (bVar3) {
        iVar19 = __multadd(param_1,iVar19,10,0);
        if ((0 < (int)local_38) || ((int)param_5 < 3)) {
          local_68 = local_38;
          goto LAB_080080de;
        }
      }
      else if ((0 < (int)local_38) || ((int)param_5 < 3)) {
        local_68 = local_38;
        goto LAB_0800820a;
      }
      local_68 = local_38;
LAB_080084e8:
      if (local_68 == 0) {
        iVar15 = __multadd(param_1,iVar14,5);
        iVar9 = __mcmp(uVar6,iVar15);
        iVar7 = iVar19;
        iVar14 = iVar15;
        if (0 < iVar9) goto LAB_08008406;
      }
      goto LAB_080084f0;
    }
    if (((int)local_68 < 1) && (2 < (int)param_5)) goto LAB_080084e8;
    if (bVar3) {
LAB_080080de:
      local_80 = iVar19;
      if (0 < local_60) {
        local_80 = __lshift(param_1,iVar19,local_60);
      }
      iVar19 = local_80;
      if (local_58 != 0) {
        iVar19 = _Balloc(param_1,*(undefined4 *)(local_80 + 4));
        memcpy(iVar19 + 0xc,local_80 + 0xc,(*(int *)(local_80 + 0x10) + 2) * 4);
        iVar19 = __lshift(param_1,iVar19,1);
      }
LAB_08008108:
      iVar15 = quorem(uVar6,iVar14);
      iVar7 = __mcmp(uVar6,local_80);
      iVar9 = __mdiff(param_1,iVar14,iVar19);
      iVar24 = iVar15 + 0x30;
      if (*(int *)(iVar9 + 0xc) == 0) {
        iVar8 = __mcmp(uVar6);
        _Bfree(param_1,iVar9);
        if ((iVar8 != 0) || (param_5 != 0)) goto LAB_0800815a;
        if ((param_3 & 1) != 0) {
          iVar8 = 0;
          goto LAB_0800815a;
        }
        if (iVar24 != 0x39) {
          if (0 < iVar7) goto LAB_0800874c;
          goto LAB_080085a4;
        }
LAB_08008752:
        pcVar21 = pcVar20 + 1;
        cVar4 = '9';
        *pcVar20 = '9';
        goto LAB_08008268;
      }
      _Bfree(param_1,iVar9);
      iVar8 = 1;
LAB_0800815a:
      if ((iVar7 < 0) || (((iVar7 == 0 && (param_5 == 0)) && ((param_3 & 1) == 0)))) {
        if (0 < iVar8) {
          uVar6 = __lshift(param_1,uVar6,1);
          iVar7 = __mcmp(uVar6,iVar14);
          if ((0 < iVar7) || ((iVar7 == 0 && (iVar15 << 0x1f < 0)))) {
            if (iVar24 == 0x39) goto LAB_08008752;
LAB_0800874c:
            iVar24 = iVar15 + 0x31;
          }
        }
LAB_080085a4:
        pcVar21 = pcVar20 + 1;
        *pcVar20 = (char)iVar24;
        goto LAB_08008274;
      }
      pcVar21 = pcVar20 + 1;
      if (0 < iVar8) {
        if (iVar24 == 0x39) goto LAB_08008752;
        *pcVar20 = (char)iVar15 + '1';
        goto LAB_08008274;
      }
      *pcVar20 = (char)iVar24;
      if (pcVar10 + (local_68 - 1) != pcVar20) {
        uVar6 = __multadd(param_1,uVar6,10,0);
        pcVar20 = pcVar21;
        if (local_80 == iVar19) {
          local_80 = __multadd(param_1,local_80,10,0);
          iVar19 = local_80;
        }
        else {
          local_80 = __multadd(param_1,local_80,10,0);
          iVar19 = __multadd(param_1,iVar19,10,0);
        }
        goto LAB_08008108;
      }
    }
    else {
LAB_0800820a:
      while( true ) {
        iVar24 = quorem(uVar6,iVar14);
        iVar24 = iVar24 + 0x30;
        pcVar21 = pcVar20 + 1;
        *pcVar20 = (char)iVar24;
        if ((int)local_68 <= (int)pcVar21 - (int)pcVar10) break;
        uVar6 = __multadd(param_1,uVar6,10,0);
        pcVar20 = pcVar21;
      }
      local_80 = 0;
    }
    uVar6 = __lshift(param_1,uVar6,1);
    iVar15 = __mcmp(uVar6,iVar14);
    cVar4 = pcVar21[-1];
    if ((0 < iVar15) || ((iVar15 == 0 && (iVar24 << 0x1f < 0)))) {
LAB_08008268:
      do {
        pcVar20 = pcVar21 + -1;
        if (cVar4 != '9') goto code_r0x08008270;
        if (pcVar10 == pcVar20) {
          *pcVar10 = '1';
          local_74 = local_74 + 1;
          goto LAB_08008274;
        }
        cVar4 = pcVar21[-2];
        pcVar21 = pcVar20;
      } while( true );
    }
    while (cVar4 == '0') {
      cVar4 = pcVar21[-2];
      pcVar21 = pcVar21 + -1;
    }
LAB_08008274:
    _Bfree(param_1,iVar14);
    if (iVar19 == 0) goto LAB_08008294;
    if ((local_80 != 0) && (local_80 != iVar19)) {
      _Bfree(param_1);
    }
  }
  _Bfree(param_1,iVar19);
LAB_08008294:
  _Bfree(param_1,uVar6);
  *pcVar21 = '\0';
  *param_7 = local_74 + 1;
  if (param_9 == (char **)0x0) {
    return pcVar10;
  }
  *param_9 = pcVar21;
  return pcVar10;
code_r0x08008270:
  *pcVar20 = cVar4 + '\x01';
  goto LAB_08008274;
}


////>>0x0800884c>>FUN_0800884c>>////

undefined4 FUN_0800884c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  __malloc_lock();
  uVar3 = *(uint *)(DAT_20000454 + 4) & 0xfffffffc;
  iVar2 = ((0xfef - param_2) + uVar3 & 0xfffff000) - 0x1000;
  if (0xfff < iVar2) {
    iVar1 = _sbrk_r(param_1,0);
    if (iVar1 == DAT_20000454 + uVar3) {
      iVar1 = _sbrk_r(param_1,-iVar2);
      if (iVar1 != -1) {
        DAT_20000a14 = DAT_20000a14 - iVar2;
        *(uint *)(DAT_20000454 + 4) = uVar3 - iVar2 | 1;
        __malloc_unlock(param_1);
        return 1;
      }
      iVar2 = _sbrk_r(param_1,0);
      if (0xf < iVar2 - DAT_20000454) {
        DAT_20000a14 = iVar2 - DAT_20000854;
        *(uint *)(DAT_20000454 + 4) = iVar2 - DAT_20000454 | 1;
      }
    }
  }
  __malloc_unlock(param_1);
  return 0;
}


////>>0x080088ec>>FUN_080088ec>>////

void FUN_080088ec(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_2 == 0) {
    return;
  }
  __malloc_lock();
  uVar11 = *(uint *)(param_2 + -4);
  puVar2 = (uint *)(param_2 + -8);
  uVar5 = uVar11 & 0xfffffffe;
  puVar3 = (uint *)((int)puVar2 + uVar5);
  uVar6 = puVar3[1] & 0xfffffffc;
  if (DAT_20000454 == puVar3) {
    uVar5 = uVar5 + uVar6;
    if ((uVar11 & 1) == 0) {
      puVar2 = (uint *)((int)puVar2 - *(int *)(param_2 + -8));
      uVar6 = puVar2[2];
      uVar11 = puVar2[3];
      uVar5 = uVar5 + *(int *)(param_2 + -8);
      *(uint *)(uVar6 + 0xc) = uVar11;
      *(uint *)(uVar11 + 8) = uVar6;
    }
    uVar6 = DAT_20000858;
    puVar2[1] = uVar5 | 1;
    DAT_20000454 = puVar2;
    if (uVar6 <= uVar5) {
      _malloc_trim_r(param_1,DAT_20000a44);
    }
LAB_080089f0:
    __malloc_unlock(param_1);
    return;
  }
  puVar3[1] = uVar6;
  if ((uVar11 & 1) == 0) {
    puVar2 = (uint *)((int)puVar2 - *(int *)(param_2 + -8));
    puVar9 = (undefined4 *)puVar2[2];
    uVar5 = uVar5 + *(int *)(param_2 + -8);
    uVar11 = *(uint *)((int)puVar3 + uVar6 + 4) & 1;
    if ((uint **)puVar9 == &DAT_20000454) {
      if (uVar11 == 0) {
        uVar11 = puVar3[2];
        uVar12 = puVar3[3];
        uVar5 = uVar5 + uVar6;
        *(uint *)(uVar11 + 0xc) = uVar12;
        *(uint *)(uVar12 + 8) = uVar11;
        puVar2[1] = uVar5 | 1;
        *(uint *)((int)puVar2 + uVar5) = uVar5;
      }
      else {
        puVar2[1] = uVar5 | 1;
        *puVar3 = uVar5;
      }
      goto LAB_080089f0;
    }
    uVar12 = puVar2[3];
    puVar9[3] = uVar12;
    *(undefined4 **)(uVar12 + 8) = puVar9;
  }
  else {
    uVar11 = *(uint *)((int)puVar3 + uVar6 + 4) & 1;
  }
  if (uVar11 == 0) {
    puVar9 = (undefined4 *)puVar3[2];
    uVar5 = uVar5 + uVar6;
    if ((uint **)puVar9 == &DAT_20000454) {
      DAT_2000045c = puVar2;
      DAT_20000460 = puVar2;
      puVar2[2] = (uint)&DAT_20000454;
      puVar2[3] = (uint)&DAT_20000454;
      puVar2[1] = uVar5 | 1;
      *(uint *)((int)puVar2 + uVar5) = uVar5;
      goto LAB_080089f0;
    }
    uVar6 = puVar3[3];
    puVar9[3] = uVar6;
    *(undefined4 **)(uVar6 + 8) = puVar9;
    puVar2[1] = uVar5 | 1;
    *(uint *)((int)puVar2 + uVar5) = uVar5;
  }
  else {
    puVar2[1] = uVar5 | 1;
    *(uint *)((int)puVar2 + uVar5) = uVar5;
  }
  if (uVar5 < 0x200) {
    iVar10 = (uVar5 >> 3) + 1;
    uVar5 = 1 << ((int)(uVar5 >> 3) >> 2 & 0xffU) | (uint)DAT_20000450;
    uVar6 = *(uint *)(&DAT_2000044c + iVar10 * 8);
    puVar2[2] = uVar6;
    puVar2[3] = (uint)(&DAT_20000444 + iVar10 * 8);
    DAT_20000450 = (undefined *)uVar5;
    *(uint **)(&DAT_2000044c + iVar10 * 8) = puVar2;
    *(uint **)(uVar6 + 0xc) = puVar2;
    __malloc_unlock(param_1,puVar2,uVar5,param_4);
    return;
  }
  uVar6 = uVar5 >> 9;
  if (uVar6 < 5) {
    iVar10 = ((uVar5 >> 6) + 0x39) * 8;
    iVar1 = (uVar5 >> 6) + 0x38;
  }
  else if (uVar6 < 0x15) {
    iVar10 = (uVar6 + 0x5c) * 8;
    iVar1 = uVar6 + 0x5b;
  }
  else if (uVar6 < 0x55) {
    iVar10 = ((uVar5 >> 0xc) + 0x6f) * 8;
    iVar1 = (uVar5 >> 0xc) + 0x6e;
  }
  else if (uVar6 < 0x155) {
    iVar10 = ((uVar5 >> 0xf) + 0x78) * 8;
    iVar1 = (uVar5 >> 0xf) + 0x77;
  }
  else if (uVar6 < 0x555) {
    iVar10 = ((uVar5 >> 0x12) + 0x7d) * 8;
    iVar1 = (uVar5 >> 0x12) + 0x7c;
  }
  else {
    iVar10 = 0x3f8;
    iVar1 = 0x7e;
  }
  puVar4 = *(undefined **)(&DAT_2000044c + iVar10);
  puVar7 = &DAT_20000444 + iVar10;
  if (puVar7 == puVar4) {
    puVar4 = (undefined *)(1 << (iVar1 >> 2 & 0xffU) | (uint)DAT_20000450);
    puVar8 = puVar7;
    DAT_20000450 = puVar4;
  }
  else {
    do {
      puVar8 = puVar4;
      if ((*(uint *)(puVar4 + 4) & 0xfffffffc) <= uVar5) break;
      puVar4 = *(undefined **)(puVar4 + 8);
      puVar8 = puVar7;
    } while (puVar7 != puVar4);
    puVar7 = *(undefined **)(puVar8 + 0xc);
  }
  puVar2[2] = (uint)puVar8;
  puVar2[3] = (uint)puVar7;
  *(uint **)(puVar7 + 8) = puVar2;
  *(uint **)(puVar8 + 0xc) = puVar2;
  __malloc_unlock(param_1,puVar2,puVar4,param_4);
  return;
}


////>>0x08008ad4>>FUN_08008ad4>>////

int FUN_08008ad4(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2000001c + 0x34);
  if (iVar1 == 0) {
    iVar1 = 0x2000085c;
  }
  return iVar1 + 0xf0;
}


////>>0x08008af0>>FUN_08008af0>>////

void FUN_08008af0(void)

{
  return;
}


////>>0x08008af4>>FUN_08008af4>>////

void FUN_08008af4(void)

{
  return;
}


////>>0x08008af8>>FUN_08008af8>>////

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int * FUN_08008af8(undefined4 *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  
  uVar12 = param_2 + 0xb;
  if (uVar12 < 0x17) {
    if (0x10 < param_2) goto LAB_08008c7a;
    __malloc_lock();
    uVar13 = 0x10;
    iVar4 = 0x18;
    uVar12 = 2;
LAB_08008b18:
    puVar10 = *(undefined **)((int)&DAT_20000450 + iVar4);
    if ((puVar10 != &DAT_20000444 + iVar4) ||
       (puVar10 = *(undefined **)((int)&DAT_20000458 + iVar4), &DAT_2000044c + iVar4 != puVar10)) {
      iVar4 = *(int *)(puVar10 + 0xc);
      puVar5 = puVar10 + (*(uint *)(puVar10 + 4) & 0xfffffffc);
      uVar12 = *(uint *)(puVar5 + 4);
LAB_08008b34:
      iVar14 = *(int *)(puVar10 + 8);
      *(int *)(iVar14 + 0xc) = iVar4;
      *(int *)(iVar4 + 8) = iVar14;
      *(uint *)(puVar5 + 4) = uVar12 | 1;
      __malloc_unlock(param_1);
      return (int *)(puVar10 + 8);
    }
    uVar12 = uVar12 + 2;
  }
  else {
    uVar13 = uVar12 & 0xfffffff8;
    if (((int)uVar13 < 0) || (uVar13 < param_2)) {
LAB_08008c7a:
      *param_1 = 0xc;
      return (int *)0x0;
    }
    __malloc_lock();
    if (uVar13 < 0x1f8) {
      uVar12 = uVar12 >> 3;
      iVar4 = uVar13 + 8;
      goto LAB_08008b18;
    }
    uVar2 = uVar12 >> 9;
    if (uVar2 == 0) {
      iVar4 = 0x200;
      uVar6 = 0x40;
      uVar2 = 0x3f;
    }
    else if (uVar2 < 5) {
      uVar6 = (uVar12 >> 6) + 0x39;
      uVar2 = (uVar12 >> 6) + 0x38;
      iVar4 = uVar6 * 8;
    }
    else if (uVar2 < 0x15) {
      uVar6 = uVar2 + 0x5c;
      uVar2 = uVar2 + 0x5b;
      iVar4 = uVar6 * 8;
    }
    else if (uVar2 < 0x55) {
      uVar6 = (uVar12 >> 0xc) + 0x6f;
      uVar2 = (uVar12 >> 0xc) + 0x6e;
      iVar4 = uVar6 * 8;
    }
    else if (uVar2 < 0x155) {
      uVar6 = (uVar12 >> 0xf) + 0x78;
      uVar2 = (uVar12 >> 0xf) + 0x77;
      iVar4 = uVar6 * 8;
    }
    else if (uVar2 < 0x555) {
      uVar6 = (uVar12 >> 0x12) + 0x7d;
      uVar2 = (uVar12 >> 0x12) + 0x7c;
      iVar4 = uVar6 * 8;
    }
    else {
      iVar4 = 0x3f8;
      uVar6 = 0x7f;
      uVar2 = 0x7e;
    }
    for (puVar10 = *(undefined **)((int)&DAT_20000450 + iVar4); uVar12 = uVar6,
        &DAT_20000444 + iVar4 != puVar10; puVar10 = *(undefined **)(puVar10 + 0xc)) {
      iVar14 = (*(uint *)(puVar10 + 4) & 0xfffffffc) - uVar13;
      uVar12 = uVar2;
      if (0xf < iVar14) break;
      if (-1 < iVar14) {
        puVar5 = puVar10 + (*(uint *)(puVar10 + 4) & 0xfffffffc);
        uVar12 = *(uint *)(puVar5 + 4);
        iVar4 = *(int *)(puVar10 + 0xc);
        goto LAB_08008b34;
      }
    }
  }
  puVar15 = DAT_2000045c;
  if ((undefined **)DAT_2000045c == &DAT_20000454) {
    uVar6 = 1 << ((int)uVar12 >> 2 & 0xffU);
    uVar2 = DAT_20000450;
    if (uVar6 <= DAT_20000450) goto LAB_08008c06;
  }
  else {
    uVar6 = DAT_2000045c[1];
    uVar7 = uVar6 & 0xfffffffc;
    uVar2 = uVar7 - uVar13;
    if (0xf < (int)uVar2) {
      puVar16 = (undefined4 *)(uVar13 + (int)DAT_2000045c);
      DAT_2000045c[1] = uVar13 | 1;
      DAT_2000045c = puVar16;
      DAT_20000460 = puVar16;
      puVar16[2] = &DAT_20000454;
      puVar16[3] = &DAT_20000454;
      puVar16[1] = uVar2 | 1;
      *(uint *)((int)puVar15 + uVar7) = uVar2;
      __malloc_unlock(param_1);
      return puVar15 + 2;
    }
    DAT_2000045c = &DAT_20000454;
    DAT_20000460 = &DAT_20000454;
    if (-1 < (int)uVar2) {
      *(uint *)((int)puVar15 + uVar7 + 4) = *(uint *)((int)puVar15 + uVar7 + 4) | 1;
      __malloc_unlock(param_1);
      return puVar15 + 2;
    }
    if (uVar7 < 0x200) {
      iVar4 = (uVar6 >> 3) + 1;
      iVar14 = *(int *)(&DAT_2000044c + iVar4 * 8);
      uVar2 = 1 << ((int)(uVar6 >> 3) >> 2 & 0xffU) | DAT_20000450;
      puVar15[2] = iVar14;
      puVar15[3] = &DAT_20000444 + iVar4 * 8;
      DAT_20000450 = uVar2;
      *(undefined4 **)(&DAT_2000044c + iVar4 * 8) = puVar15;
      *(undefined4 **)(iVar14 + 0xc) = puVar15;
    }
    else {
      uVar2 = uVar6 >> 9;
      if (uVar2 < 5) {
        iVar4 = ((uVar6 >> 6) + 0x39) * 8;
        iVar14 = (uVar6 >> 6) + 0x38;
      }
      else if (uVar2 < 0x15) {
        iVar4 = (uVar2 + 0x5c) * 8;
        iVar14 = uVar2 + 0x5b;
      }
      else if (uVar2 < 0x55) {
        iVar4 = ((uVar6 >> 0xc) + 0x6f) * 8;
        iVar14 = (uVar6 >> 0xc) + 0x6e;
      }
      else if (uVar2 < 0x155) {
        iVar4 = ((uVar6 >> 0xf) + 0x78) * 8;
        iVar14 = (uVar6 >> 0xf) + 0x77;
      }
      else if (uVar2 < 0x555) {
        iVar4 = ((uVar6 >> 0x12) + 0x7d) * 8;
        iVar14 = (uVar6 >> 0x12) + 0x7c;
      }
      else {
        iVar4 = 0x3f8;
        iVar14 = 0x7e;
      }
      puVar10 = *(undefined **)(&DAT_2000044c + iVar4);
      puVar5 = &DAT_20000444 + iVar4;
      if (puVar5 == puVar10) {
        DAT_20000450 = 1 << (iVar14 >> 2 & 0xffU) | DAT_20000450;
      }
      else {
        do {
          if ((*(uint *)(puVar10 + 4) & 0xfffffffc) <= uVar7) break;
          puVar10 = *(undefined **)(puVar10 + 8);
        } while (puVar5 != puVar10);
        puVar5 = *(undefined **)(puVar10 + 0xc);
      }
      uVar2 = DAT_20000450;
      puVar15[2] = puVar10;
      puVar15[3] = puVar5;
      *(undefined4 **)(puVar5 + 8) = puVar15;
      *(undefined4 **)(puVar10 + 0xc) = puVar15;
    }
    uVar6 = 1 << ((int)uVar12 >> 2 & 0xffU);
    if (uVar6 <= uVar2) {
LAB_08008c06:
      if ((uVar6 & uVar2) == 0) {
        uVar12 = uVar12 & 0xfffffffc;
        do {
          uVar6 = uVar6 << 1;
          uVar12 = uVar12 + 4;
        } while ((uVar6 & uVar2) == 0);
      }
      do {
        puVar16 = (undefined4 *)(&DAT_2000044c + uVar12 * 8);
        uVar2 = uVar12;
        puVar15 = puVar16;
        do {
          for (puVar8 = (undefined4 *)puVar15[3]; puVar15 != puVar8;
              puVar8 = (undefined4 *)puVar8[3]) {
            uVar7 = puVar8[1] & 0xfffffffc;
            uVar3 = uVar7 - uVar13;
            if (0xf < (int)uVar3) {
              iVar14 = puVar8[2];
              iVar4 = puVar8[3];
              puVar15 = (undefined4 *)(uVar13 + (int)puVar8);
              puVar8[1] = uVar13 | 1;
              *(int *)(iVar14 + 0xc) = iVar4;
              *(int *)(iVar4 + 8) = iVar14;
              DAT_2000045c = puVar15;
              DAT_20000460 = puVar15;
              puVar15[2] = &DAT_20000454;
              puVar15[3] = &DAT_20000454;
              puVar15[1] = uVar3 | 1;
              *(uint *)((int)puVar8 + uVar7) = uVar3;
              __malloc_unlock(param_1);
              return puVar8 + 2;
            }
            if (-1 < (int)uVar3) {
              iVar4 = puVar8[3];
              iVar14 = puVar8[2];
              *(uint *)((int)puVar8 + uVar7 + 4) = *(uint *)((int)puVar8 + uVar7 + 4) | 1;
              *(int *)(iVar14 + 0xc) = iVar4;
              *(int *)(iVar4 + 8) = iVar14;
              __malloc_unlock(param_1);
              return puVar8 + 2;
            }
          }
          uVar2 = uVar2 + 1;
          puVar15 = puVar15 + 2;
        } while ((uVar2 & 3) != 0);
        do {
          uVar7 = uVar12 & 3;
          puVar15 = puVar16 + -2;
          uVar12 = uVar12 - 1;
          if (uVar7 == 0) {
            DAT_20000450 = DAT_20000450 & ~uVar6;
            break;
          }
          puVar16 = (undefined4 *)*puVar16;
        } while (puVar16 == puVar15);
        uVar6 = uVar6 * 2;
        if ((DAT_20000450 <= uVar6 && uVar6 - DAT_20000450 != 0) || (uVar12 = uVar2, uVar6 == 0))
        break;
        for (; (uVar6 & DAT_20000450) == 0; uVar6 = uVar6 << 1) {
          uVar12 = uVar12 + 4;
        }
      } while( true );
    }
  }
  puVar10 = DAT_20000454;
  uVar12 = *(uint *)(DAT_20000454 + 4) & 0xfffffffc;
  if ((uVar13 <= uVar12) && (uVar2 = uVar12 - uVar13, 0xf < (int)uVar2)) goto LAB_08008dac;
  if (DAT_20000854 == (undefined *)0xffffffff) {
    uVar2 = uVar13 + DAT_20000a44 + 0x10;
  }
  else {
    uVar2 = uVar13 + DAT_20000a44 + 0x100f & 0xfffff000;
  }
  puVar5 = (undefined *)_sbrk_r(param_1,uVar2);
  if (puVar5 == (undefined *)0xffffffff) {
LAB_08008ed8:
    uVar12 = *(uint *)(DAT_20000454 + 4);
  }
  else {
    puVar1 = puVar10 + uVar12;
    if (puVar1 < puVar5 || puVar1 == puVar5) {
      puVar9 = DAT_20000a14 + uVar2;
      if ((puVar1 != puVar5) || (((uint)puVar1 & 0xfff) != 0)) goto LAB_08008d02;
      DAT_20000a14 = puVar9;
      *(uint *)(DAT_20000454 + 4) = uVar12 + uVar2 | 1;
    }
    else {
      if (puVar10 != &DAT_2000044c) goto LAB_08008ed8;
LAB_08008d02:
      DAT_20000a14 = DAT_20000a14 + uVar2;
      puVar9 = puVar5;
      if (DAT_20000854 != (undefined *)0xffffffff) {
        DAT_20000a14 = DAT_20000a14 + ((int)puVar5 - (int)puVar1);
        puVar9 = DAT_20000854;
      }
      DAT_20000854 = puVar9;
      uVar6 = (uint)puVar5 & 7;
      if (uVar6 == 0) {
        iVar4 = 0x1000;
      }
      else {
        puVar5 = puVar5 + (8 - uVar6);
        iVar4 = 0x1008 - uVar6;
      }
      iVar4 = iVar4 - ((uint)(puVar5 + uVar2) & 0xfff);
      iVar14 = _sbrk_r(param_1,iVar4);
      if (iVar14 == -1) {
        uVar2 = 1;
        iVar4 = 0;
      }
      else {
        uVar2 = (iVar14 - (int)puVar5) + iVar4 | 1;
      }
      puVar9 = DAT_20000a14 + iVar4;
      DAT_20000454 = puVar5;
      DAT_20000a14 = puVar9;
      *(uint *)(puVar5 + 4) = uVar2;
      if (puVar10 != &DAT_2000044c) {
        if (uVar12 < 0x10) {
          *(undefined4 *)(puVar5 + 4) = 1;
          goto LAB_08008eee;
        }
        uVar12 = uVar12 - 0xc & 0xfffffff8;
        *(uint *)(puVar10 + 4) = *(uint *)(puVar10 + 4) & 1 | uVar12;
        *(undefined4 *)(puVar10 + uVar12 + 4) = 5;
        *(undefined4 *)(puVar10 + uVar12 + 8) = 5;
        if (0xf < uVar12) {
          _free_r(param_1,puVar10 + 8);
          puVar9 = DAT_20000a14;
        }
      }
    }
    if (DAT_20000a3c < puVar9) {
      DAT_20000a3c = puVar9;
    }
    uVar12 = *(uint *)(DAT_20000454 + 4);
    if (DAT_20000a40 < puVar9) {
      DAT_20000a40 = puVar9;
    }
  }
  uVar2 = (uVar12 & 0xfffffffc) - uVar13;
  if ((uVar13 <= (uVar12 & 0xfffffffc)) && (0xf < (int)uVar2)) {
LAB_08008dac:
    puVar10 = DAT_20000454 + uVar13;
    *(uint *)(DAT_20000454 + 4) = uVar13 | 1;
    piVar11 = (int *)(DAT_20000454 + 8);
    DAT_20000454 = puVar10;
    *(uint *)(puVar10 + 4) = uVar2 | 1;
    __malloc_unlock(param_1);
    return piVar11;
  }
LAB_08008eee:
  __malloc_unlock(param_1);
  return (int *)0x0;
}


////>>0x0800901c>>FUN_0800901c>>////

uint * FUN_0800901c(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = param_2 & 0xff;
  if (((uint)param_1 & 3) == 0) {
LAB_0800904a:
    if (3 < param_3) {
      uVar2 = (param_2 & 0xff) << 8 | uVar4;
      puVar3 = param_1;
      do {
        uVar1 = *puVar3 ^ (uVar2 | uVar2 << 0x10);
        param_1 = puVar3 + 1;
        if ((uVar1 + 0xfefefeff & ~uVar1 & 0x80808080) != 0) goto LAB_08009050;
        param_3 = param_3 - 4;
        puVar3 = param_1;
      } while (3 < param_3);
    }
    puVar3 = param_1;
    if (param_3 == 0) {
      param_1 = (uint *)0x0;
    }
    else {
LAB_08009050:
      param_1 = puVar3;
      if (*(byte *)param_1 != uVar4) {
        puVar3 = (uint *)(param_3 + (int)param_1);
        do {
          param_1 = (uint *)((int)param_1 + 1);
          if (puVar3 == param_1) goto LAB_0800906c;
        } while (*(byte *)param_1 != uVar4);
      }
    }
  }
  else {
    uVar2 = param_3 - 1;
    if (param_3 == 0) {
LAB_0800906c:
      param_1 = (uint *)0x0;
    }
    else if (*(byte *)param_1 != uVar4) {
      puVar3 = (uint *)((int)param_1 + 1);
      do {
        param_1 = puVar3;
        param_3 = uVar2;
        if (((uint)param_1 & 3) == 0) goto LAB_0800904a;
        bVar5 = uVar2 == 0;
        uVar2 = uVar2 - 1;
        if (bVar5) goto LAB_0800906c;
        puVar3 = (uint *)((int)param_1 + 1);
      } while (*(byte *)param_1 != uVar4);
    }
  }
  return param_1;
}


////>>0x080090a8>>FUN_080090a8>>////

void FUN_080090a8(void)

{
  __retarget_lock_acquire_recursive(&DAT_20000bfc);
  return;
}


////>>0x080090b4>>FUN_080090b4>>////

void FUN_080090b4(void)

{
  __retarget_lock_release_recursive(&DAT_20000bfc);
  return;
}


////>>0x080090c0>>FUN_080090c0>>////

undefined4 * FUN_080090c0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 == 0) {
    iVar2 = _calloc_r(param_1,4,0x21);
    *(int *)(param_1 + 0x4c) = iVar2;
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  puVar1 = *(undefined4 **)(iVar2 + param_2 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 1 << (param_2 & 0xff);
    puVar1 = (undefined4 *)_calloc_r(param_1,1,(iVar2 + 5) * 4);
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar1[1] = param_2;
    puVar1[2] = iVar2;
  }
  else {
    *(undefined4 *)(iVar2 + param_2 * 4) = *puVar1;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  return puVar1;
}


////>>0x0800910c>>FUN_0800910c>>////

void FUN_0800910c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    *param_2 = *(undefined4 *)(iVar1 + param_2[1] * 4);
    *(undefined4 **)(iVar1 + param_2[1] * 4) = param_2;
  }
  return;
}


////>>0x08009120>>FUN_08009120>>////

undefined4 * FUN_08009120(int param_1,undefined4 *param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = param_2[4];
  puVar4 = param_2 + 5;
  do {
    iVar5 = iVar5 + 1;
    param_4 = param_3 * (*puVar4 & 0xffff) + param_4;
    uVar2 = param_3 * (*puVar4 >> 0x10) + (param_4 >> 0x10);
    *puVar4 = (param_4 & 0xffff) + uVar2 * 0x10000;
    param_4 = uVar2 >> 0x10;
    puVar4 = puVar4 + 1;
  } while (iVar5 < iVar3);
  puVar1 = param_2;
  if (param_4 != 0) {
    if ((int)param_2[2] <= iVar3) {
      puVar1 = (undefined4 *)_Balloc(param_1,param_2[1] + 1);
      memcpy(puVar1 + 3,param_2 + 3,(param_2[4] + 2) * 4);
      iVar5 = *(int *)(param_1 + 0x4c);
      *param_2 = *(undefined4 *)(iVar5 + param_2[1] * 4);
      *(undefined4 **)(iVar5 + param_2[1] * 4) = param_2;
    }
    puVar1[iVar3 + 5] = param_4;
    puVar1[4] = iVar3 + 1;
  }
  return puVar1;
}


////>>0x080091a4>>FUN_080091a4>>////

int FUN_080091a4(uint param_1)

{
  int iVar1;
  
  if ((param_1 & 0xffff0000) == 0) {
    param_1 = param_1 << 0x10;
    iVar1 = 0x10;
  }
  else {
    iVar1 = 0;
  }
  if ((param_1 & 0xff000000) == 0) {
    param_1 = param_1 << 8;
    iVar1 = iVar1 + 8;
  }
  if ((param_1 & 0xf0000000) == 0) {
    param_1 = param_1 << 4;
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 0xc0000000) == 0) {
    param_1 = param_1 << 2;
    iVar1 = iVar1 + 2;
  }
  if (-1 < (int)param_1) {
    if ((int)(param_1 << 1) < 0) {
      return iVar1 + 1;
    }
    iVar1 = 0x20;
  }
  return iVar1;
}


////>>0x080091e4>>FUN_080091e4>>////

int FUN_080091e4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 7) == 0) {
    if ((uVar2 & 0xffff) == 0) {
      uVar2 = uVar2 >> 0x10;
      iVar1 = 0x10;
    }
    else {
      iVar1 = 0;
    }
    if ((uVar2 & 0xff) == 0) {
      uVar2 = uVar2 >> 8;
      iVar1 = iVar1 + 8;
    }
    if ((uVar2 & 0xf) == 0) {
      uVar2 = uVar2 >> 4;
      iVar1 = iVar1 + 4;
    }
    if ((uVar2 & 3) == 0) {
      uVar2 = uVar2 >> 2;
      iVar1 = iVar1 + 2;
    }
    if (-1 < (int)(uVar2 << 0x1f)) {
      uVar2 = uVar2 >> 1;
      if (uVar2 == 0) {
        return 0x20;
      }
      iVar1 = iVar1 + 1;
    }
    *param_1 = uVar2;
    return iVar1;
  }
  if ((int)(uVar2 << 0x1f) < 0) {
    return 0;
  }
  if (-1 < (int)(uVar2 << 0x1e)) {
    *param_1 = uVar2 >> 2;
    return 2;
  }
  *param_1 = uVar2 >> 1;
  return 1;
}


////>>0x08009244>>FUN_08009244>>////

void FUN_08009244(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _Balloc(param_1,1);
  *(undefined4 *)(iVar1 + 0x10) = 1;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  return;
}


////>>0x08009258>>FUN_08009258>>////

void FUN_08009258(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  
  iVar12 = *(int *)(param_2 + 0x10);
  iVar9 = *(int *)(param_3 + 0x10);
  iVar10 = iVar9;
  iVar13 = param_2;
  if (iVar12 < iVar9) {
    iVar10 = iVar12;
    iVar12 = iVar9;
    iVar13 = param_3;
    param_3 = param_2;
  }
  iVar9 = iVar12 + iVar10;
  iVar3 = *(int *)(iVar13 + 4);
  if (*(int *)(iVar13 + 8) < iVar9) {
    iVar3 = iVar3 + 1;
  }
  iVar3 = _Balloc(param_1,iVar3);
  puVar18 = (uint *)(iVar3 + 0x14);
  puVar17 = puVar18 + iVar9;
  for (puVar5 = puVar18; puVar5 < puVar17; puVar5 = puVar5 + 1) {
    *puVar5 = 0;
  }
  uVar6 = param_3 + 0x14;
  uVar11 = uVar6 + iVar10 * 4;
  puVar5 = (uint *)(iVar13 + 0x14);
  if (uVar6 < uVar11) {
    puVar7 = (uint *)(uVar6 + ((uVar11 - param_3) - 0x15 & 0xfffffffc));
    puVar16 = (uint *)(param_3 + 0x10);
    do {
      while( true ) {
        puVar16 = puVar16 + 1;
        uVar6 = *puVar16 & 0xffff;
        if (uVar6 != 0) break;
        uVar6 = *puVar16 >> 0x10;
        if (uVar6 == 0) goto LAB_080092d2;
LAB_0800932c:
        uVar8 = *puVar18;
        uVar4 = 0;
        puVar1 = puVar5;
        puVar14 = puVar18;
        uVar11 = uVar8;
        do {
          puVar15 = puVar14;
          uVar4 = uVar4 + uVar6 * *(ushort *)puVar1 + (uVar11 >> 0x10);
          *puVar15 = uVar8 & 0xffff | uVar4 * 0x10000;
          puVar2 = puVar1 + 1;
          uVar11 = puVar15[1];
          uVar8 = uVar6 * (*puVar1 >> 0x10) + (uVar11 & 0xffff) + (uVar4 >> 0x10);
          uVar4 = uVar8 >> 0x10;
          puVar1 = puVar2;
          puVar14 = puVar15 + 1;
        } while (puVar2 < puVar5 + iVar12);
        puVar15[1] = uVar8;
        puVar18 = puVar18 + 1;
        if (puVar7 == puVar16) goto LAB_0800937a;
      }
      uVar11 = 0;
      puVar1 = puVar18;
      puVar14 = puVar5;
      do {
        puVar2 = puVar1;
        puVar15 = puVar14 + 1;
        uVar8 = uVar6 * (*puVar14 & 0xffff) + (*puVar2 & 0xffff) + uVar11;
        uVar4 = uVar6 * (*puVar14 >> 0x10) + (*puVar2 >> 0x10) + (uVar8 >> 0x10);
        uVar11 = uVar4 >> 0x10;
        *puVar2 = uVar8 & 0xffff | uVar4 * 0x10000;
        puVar1 = puVar2 + 1;
        puVar14 = puVar15;
      } while (puVar15 < puVar5 + iVar12);
      puVar2[1] = uVar11;
      uVar6 = *puVar16 >> 0x10;
      if (uVar6 != 0) goto LAB_0800932c;
LAB_080092d2:
      puVar18 = puVar18 + 1;
    } while (puVar7 != puVar16);
  }
LAB_0800937a:
  if (0 < iVar9) {
    uVar6 = puVar17[-1];
    puVar17 = puVar17 + -1;
    while ((uVar6 == 0 && (iVar9 = iVar9 + -1, iVar9 != 0))) {
      puVar17 = puVar17 + -1;
      uVar6 = *puVar17;
    }
  }
  *(int *)(iVar3 + 0x10) = iVar9;
  return;
}


////>>0x080093a4>>FUN_080093a4>>////

undefined4 * FUN_080093a4(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_3 & 3) != 0) {
    param_2 = (undefined4 *)
              __multadd(param_1,param_2,*(undefined4 *)(&DAT_0800a070 + ((param_3 & 3) - 1) * 4),0);
  }
  iVar2 = (int)param_3 >> 2;
  if (iVar2 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x48);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)_Balloc(param_1,1);
      puVar4[4] = 1;
      puVar4[5] = 0x271;
      *(undefined4 **)(param_1 + 0x48) = puVar4;
      *puVar4 = 0;
    }
    puVar3 = param_2;
    if (iVar2 << 0x1f < 0) goto LAB_080093d2;
LAB_080093c4:
    iVar2 = iVar2 >> 1;
    puVar3 = puVar4;
    if (iVar2 != 0) {
      while( true ) {
        puVar4 = (undefined4 *)*puVar3;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)__multiply(param_1,puVar3,puVar3);
          *puVar3 = puVar4;
          *puVar4 = 0;
        }
        puVar3 = param_2;
        if (-1 < iVar2 << 0x1f) break;
LAB_080093d2:
        param_2 = (undefined4 *)__multiply(param_1,puVar3,puVar4);
        if (puVar3 == (undefined4 *)0x0) break;
        iVar1 = *(int *)(param_1 + 0x4c);
        iVar2 = iVar2 >> 1;
        *puVar3 = *(undefined4 *)(iVar1 + puVar3[1] * 4);
        *(undefined4 **)(iVar1 + puVar3[1] * 4) = puVar3;
        puVar3 = puVar4;
        if (iVar2 == 0) {
          return param_2;
        }
      }
      goto LAB_080093c4;
    }
  }
  return param_2;
}


////>>0x08009444>>FUN_08009444>>////

void FUN_08009444(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar9;
  
  iVar5 = param_2[4];
  iVar12 = (int)param_3 >> 5;
  iVar13 = iVar12 + iVar5 + 1;
  iVar3 = param_2[1];
  iVar2 = param_2[2];
  if ((int)param_2[2] < iVar13) {
    do {
      iVar6 = iVar2 * 2;
      iVar1 = iVar2 * -2;
      iVar3 = iVar3 + 1;
      iVar2 = iVar6;
    } while (iVar13 != iVar6 && iVar13 + iVar1 < 0 == SBORROW4(iVar13,iVar6));
  }
  iVar2 = _Balloc(param_1,iVar3);
  puVar7 = (uint *)(iVar2 + 0x14);
  if (0 < iVar12) {
    puVar11 = puVar7 + iVar12;
    puVar8 = puVar7;
    do {
      puVar9 = puVar8 + 1;
      *puVar8 = 0;
      puVar7 = puVar11;
      puVar8 = puVar9;
    } while (puVar9 != puVar11);
  }
  iVar3 = param_2[4];
  puVar8 = param_2 + 5;
  param_3 = param_3 & 0x1f;
  if (param_3 == 0) {
    puVar7 = puVar7 + -1;
    puVar11 = puVar8;
    do {
      puVar9 = puVar11 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar11;
      puVar11 = puVar9;
    } while (puVar9 < puVar8 + iVar3);
  }
  else {
    uVar14 = 0;
    puVar11 = puVar8;
    do {
      puVar9 = puVar7;
      *puVar9 = *puVar11 << param_3 | uVar14;
      puVar10 = puVar11 + 1;
      uVar14 = *puVar11 >> (0x20 - param_3 & 0xff);
      puVar7 = puVar9 + 1;
      puVar11 = puVar10;
    } while (puVar10 < puVar8 + iVar3);
    puVar9[1] = uVar14;
    if (uVar14 != 0) {
      iVar13 = iVar12 + iVar5 + 2;
    }
  }
  iVar5 = *(int *)(param_1 + 0x4c);
  iVar3 = param_2[1];
  uVar4 = *(undefined4 *)(iVar5 + iVar3 * 4);
  *(int *)(iVar2 + 0x10) = iVar13 + -1;
  *param_2 = uVar4;
  *(undefined4 **)(iVar5 + iVar3 * 4) = param_2;
  return;
}


////>>0x080094f8>>FUN_080094f8>>////

int FUN_080094f8(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar1 = *(int *)(param_1 + 0x10) - iVar3;
  if (iVar1 == 0) {
    puVar2 = (uint *)(param_2 + 0x14 + iVar3 * 4);
    puVar4 = (uint *)(param_1 + 0x14) + iVar3;
    do {
      puVar4 = puVar4 + -1;
      puVar2 = puVar2 + -1;
      if (*puVar4 != *puVar2) {
        if (*puVar2 <= *puVar4) {
          return 1;
        }
        return -1;
      }
    } while ((uint *)(param_1 + 0x14) < puVar4);
  }
  return iVar1;
}


////>>0x08009530>>FUN_08009530>>////

void FUN_08009530(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar8;
  
  puVar2 = (uint *)param_3[4];
  puVar11 = param_2 + 5;
  puVar13 = param_3 + 5;
  puVar7 = puVar11;
  puVar9 = param_2;
  if ((uint *)param_2[4] == puVar2) {
    puVar6 = puVar11 + (int)puVar2;
    puVar2 = puVar13 + (int)puVar2;
    while( true ) {
      puVar6 = puVar6 + -1;
      puVar2 = puVar2 + -1;
      if (*puVar6 != *puVar2) break;
      if (puVar6 <= puVar11) {
        iVar12 = _Balloc(param_1,0,puVar6,puVar2,param_4);
        *(undefined4 *)(iVar12 + 0x10) = 1;
        *(undefined4 *)(iVar12 + 0x14) = 0;
        return;
      }
    }
    uVar5 = 0;
    if (*puVar2 <= *puVar6) goto LAB_08009578;
  }
  else if (-1 < (int)(uint *)param_2[4] - (int)puVar2) {
    uVar5 = 0;
    puVar6 = param_3;
    goto LAB_08009578;
  }
  uVar5 = 1;
  puVar6 = puVar11;
  puVar2 = param_2;
  puVar7 = puVar13;
  puVar9 = param_3;
  param_3 = param_2;
  puVar13 = puVar11;
LAB_08009578:
  iVar1 = _Balloc(param_1,puVar9[1],puVar6,puVar2,param_4);
  iVar12 = 0;
  uVar14 = puVar9[4];
  uVar3 = param_3[4];
  *(undefined4 *)(iVar1 + 0xc) = uVar5;
  puVar11 = puVar7 + uVar14;
  puVar2 = (uint *)(iVar1 + 0x14);
  puVar9 = puVar13;
  do {
    puVar8 = puVar7 + 1;
    puVar10 = puVar9 + 1;
    uVar4 = ((*puVar7 & 0xffff) + iVar12) - (*puVar9 & 0xffff);
    iVar12 = ((*puVar7 >> 0x10) - (*puVar9 >> 0x10)) + ((int)uVar4 >> 0x10);
    uVar4 = uVar4 & 0xffff | iVar12 * 0x10000;
    puVar6 = puVar2 + 1;
    *puVar2 = uVar4;
    iVar12 = iVar12 >> 0x10;
    puVar2 = puVar6;
    puVar7 = puVar8;
    puVar9 = puVar10;
  } while (puVar10 < puVar13 + uVar3);
  puVar2 = puVar8;
  puVar7 = puVar6;
  if (puVar8 < puVar11) {
    do {
      puVar9 = puVar2 + 1;
      uVar3 = (*puVar2 & 0xffff) + iVar12;
      iVar12 = ((int)uVar3 >> 0x10) + (*puVar2 >> 0x10);
      uVar4 = uVar3 & 0xffff | iVar12 * 0x10000;
      *puVar7 = uVar4;
      iVar12 = iVar12 >> 0x10;
      puVar2 = puVar9;
      puVar7 = puVar7 + 1;
    } while (puVar9 < puVar11);
    puVar6 = (uint *)((int)puVar6 + ((int)puVar11 + ~(uint)puVar8 & 0xfffffffc) + 4);
  }
  puVar6 = puVar6 + -1;
  while (uVar4 == 0) {
    puVar6 = puVar6 + -1;
    uVar14 = uVar14 - 1;
    uVar4 = *puVar6;
  }
  *(uint *)(iVar1 + 0x10) = uVar14;
  return;
}


////>>0x08009630>>FUN_08009630>>////

int FUN_08009630(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5,
                int *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_20;
  uint local_1c;
  
  iVar1 = _Balloc(param_1,1);
  uVar6 = (param_4 << 1) >> 0x15;
  local_1c = param_4 & 0xfffff;
  if (uVar6 != 0) {
    local_1c = local_1c | 0x100000;
  }
  if (param_3 == 0) {
    iVar3 = __lo0bits(&local_1c);
    iVar4 = 1;
    uVar2 = iVar3 + 0x20;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    *(uint *)(iVar1 + 0x14) = local_1c;
  }
  else {
    local_20 = param_3;
    uVar2 = __lo0bits(&local_20);
    if (uVar2 == 0) {
      *(uint *)(iVar1 + 0x14) = local_20;
    }
    else {
      uVar5 = local_1c << (0x20 - uVar2 & 0xff);
      local_1c = local_1c >> (uVar2 & 0xff);
      *(uint *)(iVar1 + 0x14) = uVar5 | local_20;
    }
    if (local_1c == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = 2;
    }
    *(uint *)(iVar1 + 0x18) = local_1c;
    *(int *)(iVar1 + 0x10) = iVar4;
  }
  if (uVar6 == 0) {
    *param_5 = uVar2 - 0x432;
    uVar7 = __hi0bits(*(undefined4 *)(iVar1 + iVar4 * 4 + 0x10));
    *param_6 = (int)((ulonglong)uVar7 >> 0x20) * 0x20 - (int)uVar7;
    return iVar1;
  }
  *param_5 = (uVar6 - 0x433) + uVar2;
  *param_6 = 0x35 - uVar2;
  return iVar1;
}


////>>0x080096e0>>FUN_080096e0>>////

undefined8 FUN_080096e0(uint param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  iVar1 = 0;
  uVar2 = param_2 & 0x7fffffff;
  *param_3 = 0;
  if ((uVar2 < 0x7ff00000) && ((uVar2 | param_1) != 0)) {
    if (uVar2 < 0x100000) {
      uVar3 = __muldf3(param_1,param_2,0,0x43500000,param_4);
      iVar1 = -0x36;
      uVar2 = (uint)((ulonglong)uVar3 >> 0x20) & 0x7fffffff;
    }
    param_1 = (uint)uVar3;
    param_2 = (uint)((ulonglong)uVar3 >> 0x20) & 0x800fffff | 0x3fe00000;
    *param_3 = ((int)uVar2 >> 0x14) + -0x3fe + iVar1;
  }
  return CONCAT44(param_2,param_1);
}


////>>0x08009744>>FUN_08009744>>////

void FUN_08009744(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_20000c10 = 0;
  iVar1 = _sbrk(param_2);
  if ((iVar1 == -1) && (DAT_20000c10 != 0)) {
    *param_1 = DAT_20000c10;
    return;
  }
  return;
}


////>>0x08009768>>FUN_08009768>>////

void FUN_08009768(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  if (((((uint)param_1 | (uint)param_2) & 3) == 0) &&
     (puVar3 = param_1, puVar2 = param_2, 3 < param_3)) {
    do {
      param_2 = puVar2 + 1;
      uVar4 = *puVar2;
      param_1 = puVar3;
      if ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) goto LAB_0800979c;
      param_3 = param_3 - 4;
      param_1 = puVar3 + 1;
      *puVar3 = uVar4;
      puVar3 = param_1;
      puVar2 = param_2;
    } while (3 < param_3);
  }
  puVar2 = param_2;
  if (param_3 != 0) {
LAB_0800979c:
    cVar1 = *(char *)puVar2;
    *(char *)param_1 = cVar1;
    while( true ) {
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
      if (cVar1 == '\0') break;
      if (param_3 == 0) {
        return;
      }
      puVar2 = (uint *)((int)puVar2 + 1);
      cVar1 = *(char *)puVar2;
      *(char *)param_1 = cVar1;
    }
    if (param_3 != 0) {
      puVar2 = param_1;
      do {
        puVar3 = (uint *)((int)puVar2 + 1);
        *(char *)puVar2 = '\0';
        puVar2 = puVar3;
      } while (puVar3 != (uint *)(param_3 + (int)param_1));
    }
  }
  return;
}


////>>0x080097cc>>FUN_080097cc>>////

undefined4 FUN_080097cc(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  if (param_3[2] != 0) {
    iVar1 = *param_2;
    uVar5 = param_2[2];
    puVar8 = (undefined4 *)*param_3;
    do {
      do {
        puVar7 = puVar8 + 2;
        uVar9 = *puVar8;
        uVar6 = puVar8[1];
        puVar8 = puVar7;
      } while (uVar6 == 0);
      uVar2 = uVar6;
      if ((uVar5 <= uVar6) && (uVar2 = uVar5, (*(ushort *)(param_2 + 3) & 0x480) != 0)) {
        iVar4 = iVar1 - param_2[4];
        uVar5 = (param_2[5] * 3) / 2;
        uVar2 = uVar6 + 1 + iVar4;
        if (uVar5 < uVar2) {
          uVar5 = uVar2;
        }
        if ((int)((uint)*(ushort *)(param_2 + 3) << 0x15) < 0) {
          iVar3 = _malloc_r(param_1,uVar5);
          if (iVar3 == 0) {
LAB_08009896:
            *param_1 = 0xc;
            *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
            param_3[1] = 0;
            param_3[2] = 0;
            return 0xffffffff;
          }
          memcpy(iVar3,param_2[4],iVar4);
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
        }
        else {
          iVar3 = _realloc_r(param_1);
          if (iVar3 == 0) {
            _free_r(param_1,param_2[4]);
            goto LAB_08009896;
          }
        }
        iVar1 = iVar3 + iVar4;
        param_2[5] = uVar5;
        param_2[4] = iVar3;
        *param_2 = iVar1;
        param_2[2] = uVar5 - iVar4;
        uVar2 = uVar6;
      }
      memmove(iVar1,uVar9,uVar2);
      iVar4 = param_3[2];
      uVar5 = param_2[2] - uVar2;
      iVar1 = *param_2 + uVar2;
      param_2[2] = uVar5;
      *param_2 = iVar1;
      param_3[2] = iVar4 - uVar6;
    } while (iVar4 - uVar6 != 0);
  }
  param_3[1] = 0;
  return 0;
}


////>>0x080098c0>>FUN_080098c0>>////

/* WARNING: Removing unreachable block (ram,0x08009906) */
/* WARNING: Removing unreachable block (ram,0x08009912) */

undefined4 FUN_080098c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    *(uint *)(puVar1 + 4) = uVar4 + 1;
    uVar2 = DAT_20000448;
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


////>>0x08009980>>FUN_08009980>>////

undefined4 * FUN_08009980(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)_malloc_r(param_1,param_3 * param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar2 = (puVar1[-1] & 0xfffffffc) - 4;
  if (uVar2 < 0x25) {
    puVar3 = puVar1;
    if (0x13 < uVar2) {
      *puVar1 = 0;
      puVar1[1] = 0;
      if (0x1b < uVar2) {
        puVar1[2] = 0;
        puVar1[3] = 0;
        if (uVar2 == 0x24) {
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar3 = puVar1 + 6;
        }
        else {
          puVar3 = puVar1 + 4;
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        return puVar1;
      }
      puVar3 = puVar1 + 2;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    return puVar1;
  }
  memset(puVar1,0);
  return puVar1;
}


////>>0x08009a18>>FUN_08009a18>>////

void FUN_08009a18(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_2 < param_1) && (puVar2 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar2)) {
    puVar4 = (undefined *)((int)param_1 + param_3);
    if (param_3 != 0) {
      do {
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined *)puVar2;
      } while (param_2 != puVar2);
    }
  }
  else {
    uVar7 = param_3;
    if (0xf < param_3) {
      if ((((uint)param_1 | (uint)param_2) & 3) != 0) goto LAB_08009abc;
      puVar2 = param_2 + 4;
      puVar1 = param_1 + 4;
      do {
        puVar5 = puVar2 + 4;
        puVar1[-4] = puVar2[-4];
        puVar1[-3] = puVar2[-3];
        puVar1[-2] = puVar2[-2];
        puVar1[-1] = puVar2[-1];
        puVar2 = puVar5;
        puVar1 = puVar1 + 4;
      } while (puVar5 != (undefined4 *)((int)param_2 + (param_3 - 0x10 & 0xfffffff0) + 0x20));
      iVar3 = (param_3 - 0x10 >> 4) + 1;
      uVar7 = param_3 & 0xf;
      param_2 = param_2 + iVar3 * 4;
      param_1 = param_1 + iVar3 * 4;
      if (3 < uVar7) {
        puVar2 = param_1 + -1;
        uVar6 = uVar7;
        puVar1 = param_2;
        do {
          uVar6 = uVar6 - 4;
          puVar2 = puVar2 + 1;
          *puVar2 = *puVar1;
          puVar1 = puVar1 + 1;
        } while (3 < uVar6);
        iVar3 = (uVar7 - 4 & 0xfffffffc) + 4;
        param_1 = (undefined4 *)((int)param_1 + iVar3);
        param_2 = (undefined4 *)((int)param_2 + iVar3);
        uVar7 = param_3 & 3;
      }
    }
    param_3 = uVar7;
    if (uVar7 != 0) {
LAB_08009abc:
      puVar4 = (undefined *)((int)param_1 + -1);
      puVar2 = param_2;
      do {
        puVar1 = (undefined4 *)((int)puVar2 + 1);
        puVar4 = puVar4 + 1;
        *puVar4 = *(undefined *)puVar2;
        puVar2 = puVar1;
      } while (puVar1 != (undefined4 *)(param_3 + (int)param_2));
      return;
    }
  }
  return;
}


////>>0x08009adc>>FUN_08009adc>>////

int * FUN_08009adc(undefined4 *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (param_2 == (int *)0x0) {
    piVar3 = (int *)_malloc_r(param_1,param_3);
    return piVar3;
  }
  __malloc_lock();
  uVar6 = param_2[-1];
  uVar9 = uVar6 & 0xfffffffc;
  piVar3 = param_2 + -2;
  if (param_3 + 0xb < 0x17) {
    uVar8 = 0x10;
  }
  else {
    uVar8 = param_3 + 0xb & 0xfffffff8;
    if ((int)uVar8 < 0) goto LAB_08009b8e;
  }
  if (uVar8 < param_3) {
LAB_08009b8e:
    *param_1 = 0xc;
    return (int *)0x0;
  }
  iVar11 = (int)piVar3 + uVar9;
  uVar10 = uVar9;
  if ((int)uVar9 < (int)uVar8) {
    if (DAT_20000454 == iVar11) {
      iVar11 = (*(uint *)(DAT_20000454 + 4) & 0xfffffffc) + uVar9;
      if ((int)(uVar8 + 0x10) <= iVar11) {
        DAT_20000454 = (int)piVar3 + uVar8;
        *(uint *)(DAT_20000454 + 4) = iVar11 - uVar8 | 1;
        param_2[-1] = uVar8 | param_2[-1] & 1U;
        __malloc_unlock(param_1);
        return param_2;
      }
      if (-1 < (int)(uVar6 << 0x1f)) {
        piVar1 = (int *)((int)piVar3 - param_2[-2]);
        uVar6 = piVar1[1] & 0xfffffffc;
        if ((int)(uVar8 + 0x10) <= (int)(iVar11 + uVar6)) {
          iVar5 = piVar1[3];
          piVar3 = piVar1 + 2;
          iVar2 = *piVar3;
          uVar9 = uVar9 - 4;
          *(int *)(iVar2 + 0xc) = iVar5;
          *(int *)(iVar5 + 8) = iVar2;
          if (uVar9 < 0x25) {
            iVar2 = *param_2;
            piVar7 = piVar3;
            if (0x13 < uVar9) {
              piVar1[2] = iVar2;
              piVar1[3] = param_2[1];
              iVar2 = param_2[2];
              if (uVar9 < 0x1c) {
                param_2 = param_2 + 2;
                piVar7 = piVar1 + 4;
              }
              else {
                piVar1[4] = iVar2;
                piVar1[5] = param_2[3];
                iVar2 = param_2[4];
                if (uVar9 == 0x24) {
                  piVar1[6] = iVar2;
                  piVar1[7] = param_2[5];
                  iVar2 = param_2[6];
                  param_2 = param_2 + 6;
                  piVar7 = piVar1 + 8;
                }
                else {
                  param_2 = param_2 + 4;
                  piVar7 = piVar1 + 6;
                }
              }
            }
            *piVar7 = iVar2;
            piVar7[1] = param_2[1];
            piVar7[2] = param_2[2];
          }
          else {
            memmove(piVar3,param_2);
          }
          DAT_20000454 = (int)piVar1 + uVar8;
          *(uint *)(DAT_20000454 + 4) = (iVar11 + uVar6) - uVar8 | 1;
          piVar1[1] = uVar8 | piVar1[1] & 1U;
          __malloc_unlock(param_1);
          return piVar3;
        }
LAB_08009bb0:
        uVar10 = uVar9 + uVar6;
        if ((int)uVar8 <= (int)uVar10) {
          iVar5 = piVar1[3];
          piVar7 = piVar1 + 2;
          iVar2 = *piVar7;
          *(int *)(iVar2 + 0xc) = iVar5;
          iVar11 = (int)piVar1 + uVar10;
          *(int *)(iVar5 + 8) = iVar2;
          piVar3 = piVar1;
          if (uVar9 - 4 < 0x25) goto LAB_08009bd0;
LAB_08009d4c:
          memmove(piVar7,param_2);
          param_2 = piVar7;
          goto LAB_08009c00;
        }
      }
    }
    else {
      if (-1 < *(int *)((*(uint *)(iVar11 + 4) & 0xfffffffe) + iVar11 + 4) << 0x1f) {
        uVar4 = *(uint *)(iVar11 + 4) & 0xfffffffc;
        uVar10 = uVar9 + uVar4;
        if ((int)uVar10 < (int)uVar8) {
          if ((int)(uVar6 << 0x1f) < 0) goto LAB_08009b36;
          piVar1 = (int *)((int)piVar3 - param_2[-2]);
          uVar6 = piVar1[1] & 0xfffffffc;
          uVar10 = uVar4 + uVar6 + uVar9;
          if ((int)uVar10 < (int)uVar8) goto LAB_08009bb0;
          iVar2 = *(int *)(iVar11 + 8);
          iVar11 = *(int *)(iVar11 + 0xc);
          *(int *)(iVar2 + 0xc) = iVar11;
          *(int *)(iVar11 + 8) = iVar2;
          piVar7 = piVar1 + 2;
          iVar2 = *piVar7;
          iVar5 = piVar1[3];
          *(int *)(iVar2 + 0xc) = iVar5;
          iVar11 = (int)piVar1 + uVar10;
          *(int *)(iVar5 + 8) = iVar2;
          piVar3 = piVar1;
          if (0x24 < uVar9 - 4) goto LAB_08009d4c;
LAB_08009bd0:
          uVar9 = uVar9 - 4;
          iVar2 = *param_2;
          piVar1 = piVar7;
          if (0x13 < uVar9) {
            piVar3[2] = iVar2;
            piVar3[3] = param_2[1];
            iVar2 = param_2[2];
            if (uVar9 < 0x1c) {
              param_2 = param_2 + 2;
              piVar1 = piVar3 + 4;
            }
            else {
              piVar3[4] = iVar2;
              piVar3[5] = param_2[3];
              iVar2 = param_2[4];
              if (uVar9 == 0x24) {
                piVar3[6] = iVar2;
                piVar3[7] = param_2[5];
                iVar2 = param_2[6];
                param_2 = param_2 + 6;
                piVar1 = piVar3 + 8;
              }
              else {
                param_2 = param_2 + 4;
                piVar1 = piVar3 + 6;
              }
            }
          }
          *piVar1 = iVar2;
          piVar1[1] = param_2[1];
          piVar1[2] = param_2[2];
          param_2 = piVar7;
        }
        else {
          iVar2 = *(int *)(iVar11 + 8);
          iVar5 = *(int *)(iVar11 + 0xc);
          *(int *)(iVar2 + 0xc) = iVar5;
          iVar11 = (int)piVar3 + uVar10;
          *(int *)(iVar5 + 8) = iVar2;
        }
        goto LAB_08009c00;
      }
      if (-1 < (int)(uVar6 << 0x1f)) {
        piVar1 = (int *)((int)piVar3 - param_2[-2]);
        uVar6 = piVar1[1] & 0xfffffffc;
        goto LAB_08009bb0;
      }
    }
LAB_08009b36:
    piVar1 = (int *)_malloc_r(param_1,param_3);
    if (piVar1 != (int *)0x0) {
      if ((int *)((param_2[-1] & 0xfffffffeU) + (int)piVar3) == piVar1 + -2) {
        uVar10 = uVar9 + (piVar1[-1] & 0xfffffffcU);
        iVar11 = (int)piVar3 + uVar10;
        goto LAB_08009c00;
      }
      uVar9 = uVar9 - 4;
      if (uVar9 < 0x25) {
        iVar11 = *param_2;
        piVar3 = param_2;
        piVar7 = piVar1;
        if (0x13 < uVar9) {
          *piVar1 = iVar11;
          piVar1[1] = param_2[1];
          if (uVar9 < 0x1c) {
            iVar11 = param_2[2];
            piVar3 = param_2 + 2;
            piVar7 = piVar1 + 2;
          }
          else {
            piVar1[2] = param_2[2];
            piVar1[3] = param_2[3];
            if (uVar9 == 0x24) {
              piVar1[4] = param_2[4];
              piVar1[5] = param_2[5];
              iVar11 = param_2[6];
              piVar3 = param_2 + 6;
              piVar7 = piVar1 + 6;
            }
            else {
              iVar11 = param_2[4];
              piVar3 = param_2 + 4;
              piVar7 = piVar1 + 4;
            }
          }
        }
        *piVar7 = iVar11;
        piVar7[1] = piVar3[1];
        piVar7[2] = piVar3[2];
      }
      else {
        memmove(piVar1,param_2);
      }
      _free_r(param_1,param_2);
    }
    __malloc_unlock(param_1);
    param_2 = piVar1;
  }
  else {
LAB_08009c00:
    if (uVar10 - uVar8 < 0x10) {
      piVar3[1] = piVar3[1] & 1U | uVar10;
      *(uint *)(iVar11 + 4) = *(uint *)(iVar11 + 4) | 1;
    }
    else {
      piVar3[1] = piVar3[1] & 1U | uVar8;
      *(uint *)((int)piVar3 + uVar8 + 4) = uVar10 - uVar8 | 1;
      *(uint *)(iVar11 + 4) = *(uint *)(iVar11 + 4) | 1;
      _free_r(param_1,(int)piVar3 + uVar8 + 8);
    }
    __malloc_unlock(param_1);
  }
  return param_2;
}


////>>0x08009e68>>FUN_08009e68>>////

void FUN_08009e68(void)

{
  return;
}


////>>0x08009e74>>FUN_08009e74>>////

void FUN_08009e74(void)

{
  return;
}


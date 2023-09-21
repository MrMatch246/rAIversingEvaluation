java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x08000110>>FUN_08000110>>////

/* WARNING: Removing unreachable block (ram,0x0800011c) */

undefined4 FUN_08000110(undefined4 param_1)

{
  if ((char)DAT_20000228 == '\0') {
    DAT_20000228._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x08000134>>FUN_08000134>>////

/* WARNING: Removing unreachable block (ram,0x0800013a) */

undefined8 FUN_08000134(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}


////>>0x08000150>>FUN_08000150>>////

char * FUN_08000150(char *param_1)

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


////>>0x08000168>>FUN_08000168>>////

ulonglong FUN_08000168(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_080003ac:
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
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_080003ac;
    }
LAB_08000278:
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
  if ((uVar11 & 0x100000) != 0) goto LAB_08000278;
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
      goto LAB_080002f0;
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
LAB_080002f0:
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


////>>0x0800016c>>FUN_0800016c>>////

ulonglong FUN_0800016c(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_080003ac:
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
      if (0xffbfffff < uVar7 * 0x200000) goto LAB_080003ac;
    }
LAB_08000278:
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
  if ((uVar10 & 0x100000) != 0) goto LAB_08000278;
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
      goto LAB_080002f0;
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
LAB_080002f0:
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


////>>0x08000404>>FUN_08000404>>////

ulonglong FUN_08000404(uint param_1)

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
      goto LAB_080002f0;
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
LAB_080002f0:
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


////>>0x08000428>>FUN_08000428>>////

ulonglong FUN_08000428(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
  if (uVar5 == 0 || param_4 == 0xff000000) {
    return CONCAT44(uVar3,param_1);
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
      goto LAB_080002f0;
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
LAB_080002f0:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar5 + (0x380 - uVar7) * 0x100000 | uVar1,uVar2);
  }
  uVar4 = ~(0x380 - uVar7);
  if ((int)uVar4 < 0x1f) {
    iVar6 = uVar4 - 0x13;
    if (iVar6 != 0 && iVar6 < 0 == SCARRY4(uVar4 - 0x1f,0xc)) {
      return CONCAT44(uVar3,uVar2 >> (0x20 - (0xcU - iVar6) & 0xff) | uVar5 << (0xcU - iVar6 & 0xff)
                     ) & 0x80000000ffffffff;
    }
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar1 | uVar5 >> (uVar4 & 0xff),
                    uVar2 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  return CONCAT44(uVar3,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


////>>0x080004d0>>FUN_080004d0>>////

ulonglong FUN_080004d0(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar12 = FUN_080006ac();
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


////>>0x080006ac>>FUN_080006ac>>////

ulonglong FUN_080006ac(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x08000724>>FUN_08000724>>////

ulonglong FUN_08000724(undefined4 param_1,uint param_2,uint param_3,uint param_4)

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
    uVar17 = FUN_08000892();
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
        if ((uVar7 & 0x100000) != 0) goto LAB_08000842;
        uVar7 = uVar7 | uVar11;
        uVar11 = 0;
        uVar3 = 0x80000000;
      }
    }
    if ((uVar7 & 0x100000) == 0) {
      uVar7 = uVar7 | uVar11;
      uVar11 = 0;
    }
LAB_08000842:
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


////>>0x08000892>>FUN_08000892>>////

ulonglong FUN_08000892(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_08000704:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar2 == in_r12) {
      param_1 = param_3;
      uVar3 = param_4;
      if ((param_3 | param_4 << 0xc) == 0) {
LAB_080006c8:
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
      if ((param_1 | param_2 << 1) != 0) goto LAB_08000704;
      if ((param_3 | param_4 << 1) != 0) goto LAB_080006c8;
    }
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}


////>>0x08000904>>FUN_08000904>>////

uint FUN_08000904(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x08000980>>FUN_08000980>>////

void FUN_08000980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08000990(param_3,param_4,param_1,param_2);
  return;
}


////>>0x08000990>>FUN_08000990>>////

undefined4 FUN_08000990(undefined4 param_1)

{
  FUN_08000904();
  return param_1;
}


////>>0x080009a0>>FUN_080009a0>>////

bool FUN_080009a0(void)

{
  char in_ZR;
  
  FUN_08000990();
  return in_ZR != '\0';
}


////>>0x080009b4>>FUN_080009b4>>////

bool FUN_080009b4(void)

{
  char in_CY;
  
  FUN_08000990();
  return in_CY == '\0';
}


////>>0x080009c8>>FUN_080009c8>>////

bool FUN_080009c8(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_08000990();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x080009f0>>FUN_080009f0>>////

bool FUN_080009f0(void)

{
  char in_CY;
  
  FUN_08000980();
  return in_CY == '\0';
}


////>>0x08000a04>>FUN_08000a04>>////

undefined4 FUN_08000a04(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((((param_2 << 1) >> 0x15 != -1) || ((param_1 | param_2 << 0xc) == 0)) &&
     (((param_4 << 1) >> 0x15 != -1 || ((param_3 | param_4 << 0xc) == 0)))) {
    return 0;
  }
  return 1;
}


////>>0x08000a30>>FUN_08000a30>>////

uint FUN_08000a30(uint param_1,uint param_2)

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


////>>0x08000ad8>>FUN_08000ad8>>////

uint FUN_08000ad8(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_08000c12:
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
      if (0xfd < uVar6) goto LAB_08000c12;
    }
  }
  uVar5 = uVar5 + uVar3 * 0x800000 + (uint)(0x7fffffff < uVar4);
  if (uVar4 == 0x80000000) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5 | param_1;
}


////>>0x08000adc>>FUN_08000adc>>////

uint FUN_08000adc(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_08000c12:
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
      if (0xfd < uVar5) goto LAB_08000c12;
    }
  }
  uVar4 = uVar4 + uVar6 * 0x800000 + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}


////>>0x08000c3c>>FUN_08000c3c>>////

uint FUN_08000c3c(uint param_1)

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


////>>0x08000c44>>FUN_08000c44>>////

uint FUN_08000c44(uint param_1)

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


////>>0x08000cec>>FUN_08000cec>>////

uint FUN_08000cec(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
      goto LAB_08000e3c;
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
LAB_08000e3c:
  return uVar2 & 0x80000000 | 0x7f800000;
}


////>>0x08000e54>>FUN_08000e54>>////

uint FUN_08000e54(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_08000e4a:
        return uVar6 | 0x7fc00000;
      }
    }
    else {
      if (param_4 == 0xff) {
        uVar6 = param_2;
        if ((param_2 & 0x7fffff) == 0) {
LAB_08000e00:
          return (param_1 ^ param_2) & 0x80000000;
        }
        goto LAB_08000e4a;
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
        goto LAB_08000e6c;
      }
      if ((param_1 & 0x7fffffff) == 0) {
        if ((param_2 & 0x7fffffff) != 0) goto LAB_08000e00;
        goto LAB_08000e4a;
      }
    }
    param_1 = param_1 ^ param_2;
  }
  else {
LAB_08000e6c:
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


////>>0x08000f9c>>FUN_08000f9c>>////

uint FUN_08000f9c(uint param_1,uint param_2)

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


////>>0x08000ffc>>FUN_08000ffc>>////

void FUN_08000ffc(undefined4 param_1,undefined4 param_2)

{
  FUN_08001004(param_2,param_1);
  return;
}


////>>0x08001004>>FUN_08001004>>////

undefined8 FUN_08001004(undefined4 param_1,undefined4 param_2)

{
  FUN_08000f9c();
  return CONCAT44(param_2,param_1);
}


////>>0x08001014>>FUN_08001014>>////

bool FUN_08001014(void)

{
  char in_ZR;
  
  FUN_08001004();
  return in_ZR != '\0';
}


////>>0x08001028>>FUN_08001028>>////

bool FUN_08001028(void)

{
  char in_CY;
  
  FUN_08001004();
  return in_CY == '\0';
}


////>>0x08001050>>FUN_08001050>>////

bool FUN_08001050(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_08000ffc();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08001064>>FUN_08001064>>////

bool FUN_08001064(void)

{
  char in_CY;
  
  FUN_08000ffc();
  return in_CY == '\0';
}


////>>0x08001078>>FUN_08001078>>////

uint FUN_08001078(uint param_1)

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


////>>0x080010c4>>FUN_080010c4>>////

uint FUN_080010c4(uint param_1)

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


////>>0x08001104>>FUN_08001104>>////

undefined4 FUN_08001104(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_08002214();
  FUN_08001214(uVar1 / 1000);
  FUN_08001194(0xffffffff,param_1,0);
  return 0;
}


////>>0x08001128>>FUN_08001128>>////



undefined4 FUN_08001128(void)

{
  _DAT_40022000 = _DAT_40022000 | 0x10;
  FUN_08001170(3);
  FUN_08001104(0);
  FUN_08004ccc();
  return 0;
}


////>>0x0800114c>>FUN_0800114c>>////

void FUN_0800114c(void)

{
  DAT_20000244 = DAT_20000244 + 1;
  return;
}


////>>0x0800115c>>FUN_0800115c>>////

undefined4 FUN_0800115c(void)

{
  return DAT_20000244;
}


////>>0x08001168>>FUN_08001168>>////

void FUN_08001168(void)

{
  return;
}


////>>0x08001170>>FUN_08001170>>////



void FUN_08001170(uint param_1)

{
  _DAT_e000ed0c = _DAT_e000ed0c & 0xf8ff | 0x5fa0000 | (param_1 & 7) << 8;
  return;
}


////>>0x08001194>>FUN_08001194>>////



void FUN_08001194(uint param_1,uint param_2,uint param_3)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(_DAT_e000ed0c << 0x15) >> 0x1d;
  uVar2 = 7 - uVar3;
  uVar4 = uVar3 + 4;
  if (3 < uVar2) {
    uVar2 = 4;
  }
  if (uVar4 < 7) {
    uVar3 = 0;
  }
  uVar2 = (1 << (uVar2 & 0xff)) - 1;
  if (6 < uVar4) {
    uVar3 = uVar3 - 3;
  }
  uVar1 = (undefined)
          ((param_3 & (1 << (uVar3 & 0xff)) - 1U | (param_2 & uVar2) << (uVar3 & 0xff)) << 4);
  if (-1 < (int)param_1) {
    uVar3 = param_1 + 0xe000e100;
  }
  else {
    uVar2 = 0xe000ed14;
    uVar3 = param_1 & 0xf;
  }
  if (-1 < (int)param_1) {
    *(undefined *)(uVar3 + 0x300) = uVar1;
  }
  else {
    *(undefined *)(uVar2 + uVar3) = uVar1;
  }
  return;
}


////>>0x080011fc>>FUN_080011fc>>////

void FUN_080011fc(uint param_1)

{
  *(int *)((param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x08001214>>FUN_08001214>>////



undefined4 FUN_08001214(int param_1)

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


////>>0x08001240>>FUN_08001240>>////



void FUN_08001240(int param_1)

{
  if (param_1 == 4) {
    _DAT_e000e010 = _DAT_e000e010 | 4;
  }
  else {
    _DAT_e000e010 = _DAT_e000e010 & 0xfffffffb;
  }
  return;
}


////>>0x08001258>>FUN_08001258>>////

void FUN_08001258(void)

{
  return;
}


////>>0x08001264>>FUN_08001264>>////



void FUN_08001264(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_r10;
  int iVar8;
  
  uVar1 = 0;
  uVar5 = 0;
  do {
    uVar6 = 1 << (uVar5 & 0xff);
    uVar2 = uVar6 & *param_2;
    if (uVar6 == uVar2) {
      uVar3 = param_2[1];
      if (uVar3 == 0x12) {
        uVar1 = param_2[3] + 0xc;
      }
      else if (uVar3 < 0x13) {
        if (uVar3 == 2) {
          uVar1 = param_2[3] + 8;
        }
        else if (uVar3 < 3) {
          if (uVar3 == 0) goto LAB_080013be;
          if (uVar3 == 1) {
            uVar1 = param_2[3];
          }
        }
        else if (uVar3 == 3) {
          uVar1 = 0;
        }
        else if (uVar3 == 0x11) {
          uVar1 = param_2[3] + 4;
        }
      }
      else {
        if (uVar3 != 0x10210000) {
          if (uVar3 < 0x10210001) {
            if (uVar3 != 0x10110000) {
              uVar7 = 0x10120000;
LAB_080013b8:
              if (uVar3 != uVar7) goto LAB_080012a8;
            }
          }
          else if ((uVar3 != 0x10310000) && (uVar3 != 0x10320000)) {
            uVar7 = 0x10220000;
            goto LAB_080013b8;
          }
        }
LAB_080013be:
        uVar1 = param_2[2];
        if (uVar1 == 0) {
          uVar1 = 4;
        }
        else {
          if (uVar1 == 1) {
            param_1[4] = uVar6;
          }
          if (uVar1 != 1) {
            param_1[5] = uVar6;
          }
          uVar1 = 8;
        }
      }
LAB_080012a8:
      if (uVar2 < 0x100) {
        uVar6 = *param_1;
        uVar3 = uVar5 << 2;
        unaff_r10 = param_1;
      }
      else {
        uVar6 = param_1[1];
        uVar3 = (uVar5 + 0x3ffffff8) * 4;
      }
      if (0xff < uVar2) {
        unaff_r10 = param_1 + 1;
      }
      *unaff_r10 = uVar6 & ~(0xf << (uVar3 & 0xff)) | uVar1 << (uVar3 & 0xff);
      unaff_r10 = (uint *)param_2[1];
      if (((uint)unaff_r10 & 0x10000000) != 0) {
        _DAT_40021018 = _DAT_40021018 | 1;
        iVar8 = (uVar5 & 3) << 2;
        if (param_1 == (uint *)0x40010800) {
          iVar4 = 0;
        }
        else if (param_1 == (uint *)0x40010c00) {
          iVar4 = 1;
        }
        else if (param_1 == (uint *)0x40011000) {
          iVar4 = 2;
        }
        else if (param_1 == (uint *)0x40011400) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
        }
        *(uint *)((uVar5 & 0xfffffffc) + 0x40010008) =
             iVar4 << iVar8 | *(uint *)((uVar5 & 0xfffffffc) + 0x40010008) & ~(0xf << iVar8);
        if (((uint)unaff_r10 & 0x10000) == 0) {
          _DAT_40010400 = _DAT_40010400 & ~uVar2;
        }
        else {
          _DAT_40010400 = _DAT_40010400 | uVar2;
        }
        if (((uint)unaff_r10 & 0x20000) == 0) {
          _DAT_40010404 = _DAT_40010404 & ~uVar2;
        }
        else {
          _DAT_40010404 = _DAT_40010404 | uVar2;
        }
        if (((uint)unaff_r10 & 0x100000) == 0) {
          _DAT_40010408 = _DAT_40010408 & ~uVar2;
        }
        else {
          _DAT_40010408 = _DAT_40010408 | uVar2;
        }
        if (((uint)unaff_r10 & 0x200000) == 0) {
          _DAT_4001040c = _DAT_4001040c & ~uVar2;
        }
        else {
          _DAT_4001040c = uVar2 | _DAT_4001040c;
        }
      }
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x10) {
      return;
    }
  } while( true );
}


////>>0x08001424>>FUN_08001424>>////

void FUN_08001424(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = param_2 << 0x10;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}


////>>0x0800142e>>FUN_0800142e>>////

void FUN_0800142e(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = param_2 ^ *(uint *)(param_1 + 0xc);
  return;
}


////>>0x08001436>>FUN_08001436>>////

undefined4 FUN_08001436(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((*(uint *)(iVar1 + 0x14) & 0x400) != 0) {
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xfffffbff;
    param_1[0xe] = 4;
    *(undefined *)((int)param_1 + 0x35) = 0x20;
    *(undefined *)(param_1 + 0xd) = 0;
    return 1;
  }
  return 0;
}


////>>0x08001460>>FUN_08001460>>////

undefined4 FUN_08001460(uint **param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar1 = FUN_0800115c();
  do {
    puVar4 = *param_1;
    if ((param_2 << 8) >> 0x18 == 1) {
      uVar3 = puVar4[5];
    }
    else {
      uVar3 = puVar4[6];
    }
    if ((param_2 & 0xffff & ~uVar3) == 0) {
      return 0;
    }
    if ((int)(puVar4[5] << 0x15) < 0) {
      *puVar4 = *puVar4 | 0x200;
      puVar4[5] = puVar4[5] & 0xfffffbff;
      param_1[0xe] = (uint *)0x4;
      *(undefined *)((int)param_1 + 0x35) = 0x20;
      *(undefined *)(param_1 + 0xd) = 0;
      return 1;
    }
  } while ((param_3 == 0xffffffff) ||
          ((param_3 != 0 && (iVar2 = FUN_0800115c(), (uint)(iVar2 - iVar1) <= param_3))));
  *(undefined *)((int)param_1 + 0x35) = 0x20;
  *(undefined *)(param_1 + 0xd) = 0;
  return 3;
}


////>>0x080014e2>>FUN_080014e2>>////

undefined4 FUN_080014e2(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0800115c();
  while( true ) {
    if (*(int *)(*param_1 + 0x14) << 0x18 < 0) {
      return 0;
    }
    iVar2 = FUN_08001436(param_1);
    if (iVar2 != 0) break;
    if ((param_2 != 0xffffffff) &&
       ((param_2 == 0 || (iVar2 = FUN_0800115c(), param_2 < (uint)(iVar2 - iVar1))))) {
      param_1[0xe] = param_1[0xe] | 0x20;
      *(undefined *)((int)param_1 + 0x35) = 0x20;
      *(undefined *)(param_1 + 0xd) = 0;
      return 3;
    }
  }
  return 1;
}


////>>0x08001530>>FUN_08001530>>////

undefined4 FUN_08001530(uint **param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint **ppuVar4;
  uint uVar5;
  uint uVar6;
  
  **param_1 = **param_1 | 0x100;
  ppuVar4 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  iVar1 = FUN_0800115c();
  do {
    puVar3 = *param_1;
    do {
      if ((int)(puVar3[5] << 0x1f) < 0) {
        puVar3[4] = param_2 & 0xfe;
        iVar1 = FUN_08001460(param_1,0x10002,param_5,puVar3,ppuVar4,uVar5,uVar6);
        if (iVar1 == 0) {
          iVar1 = FUN_080014e2(param_1,param_5,(*param_1)[5],(*param_1)[6]);
          if (iVar1 == 0) {
            puVar3 = *param_1;
            if (param_4 == 1) {
LAB_080015ca:
              puVar3[4] = param_3 & 0xff;
              return 0;
            }
            puVar3[4] = param_3 >> 8;
            iVar1 = FUN_080014e2(param_1,param_5);
            if (iVar1 == 0) {
              puVar3 = *param_1;
              goto LAB_080015ca;
            }
          }
          if (param_1[0xe] != (uint *)0x4) {
            return 3;
          }
          **param_1 = **param_1 | 0x200;
        }
        else if (param_1[0xe] != (uint *)0x4) {
          return 3;
        }
        return 1;
      }
    } while (param_5 == 0xffffffff);
    if ((param_5 == 0) || (iVar2 = FUN_0800115c(), param_5 < (uint)(iVar2 - iVar1))) {
      *(undefined *)((int)param_1 + 0x35) = 0x20;
      *(undefined *)(param_1 + 0xd) = 0;
      return 3;
    }
  } while( true );
}


////>>0x080015e8>>FUN_080015e8>>////

undefined4 FUN_080015e8(uint **param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint **ppuVar4;
  uint uVar5;
  uint uVar6;
  
  puVar3 = *param_1;
  *puVar3 = *puVar3 | 0x400;
  *puVar3 = *puVar3 | 0x100;
  ppuVar4 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  iVar1 = FUN_0800115c();
LAB_0800160e:
  puVar3 = *param_1;
  while (-1 < (int)(puVar3[5] << 0x1f)) {
    if (param_5 != 0xffffffff) goto code_r0x08001658;
  }
  puVar3[4] = param_2 & 0xfe;
  iVar1 = FUN_08001460(param_1,0x10002,param_5,puVar3,ppuVar4,uVar5,uVar6);
  if (iVar1 != 0) goto LAB_080016ba;
  iVar1 = FUN_080014e2(param_1,param_5,(*param_1)[5],(*param_1)[6]);
  if (iVar1 == 0) {
    puVar3 = *param_1;
    if (param_4 != 1) {
      puVar3[4] = param_3 >> 8;
      iVar1 = FUN_080014e2(param_1,param_5);
      if (iVar1 != 0) goto LAB_08001642;
      puVar3 = *param_1;
    }
    puVar3[4] = param_3 & 0xff;
    iVar1 = FUN_080014e2(param_1,param_5);
    if (iVar1 == 0) {
      **param_1 = **param_1 | 0x100;
      iVar1 = FUN_0800115c();
      do {
        do {
          if ((int)((*param_1)[5] << 0x1f) < 0) {
            (*param_1)[4] = param_2 & 0xff | 1;
            iVar1 = FUN_08001460(param_1,0x10002,param_5);
            if (iVar1 == 0) {
              return 0;
            }
LAB_080016ba:
            if (param_1[0xe] != (uint *)0x4) {
              return 3;
            }
            return 1;
          }
        } while (param_5 == 0xffffffff);
      } while ((param_5 != 0) && (iVar2 = FUN_0800115c(), (uint)(iVar2 - iVar1) <= param_5));
LAB_0800165a:
      *(undefined *)((int)param_1 + 0x35) = 0x20;
      *(undefined *)(param_1 + 0xd) = 0;
      return 3;
    }
  }
LAB_08001642:
  if (param_1[0xe] == (uint *)0x4) {
    **param_1 = **param_1 | 0x200;
    return 1;
  }
  return 3;
code_r0x08001658:
  if ((param_5 == 0) || (iVar2 = FUN_0800115c(), param_5 < (uint)(iVar2 - iVar1)))
  goto LAB_0800165a;
  goto LAB_0800160e;
}


////>>0x080016f4>>FUN_080016f4>>////

undefined4 FUN_080016f4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0800115c();
  while( true ) {
    iVar2 = *param_1;
    if ((*(uint *)(iVar2 + 0x14) & 0x40) != 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x14) << 0x1b < 0) break;
    if ((param_2 == 0) || (iVar2 = FUN_0800115c(), param_2 < (uint)(iVar2 - iVar1))) {
      param_1[0xe] = param_1[0xe] | 0x20;
      *(undefined *)((int)param_1 + 0x35) = 0x20;
      *(undefined *)(param_1 + 0xd) = 0;
      return 3;
    }
  }
  *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xffffffef;
  param_1[0xe] = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)((int)param_1 + 0x35) = 0x20;
  return 1;
}


////>>0x08001754>>FUN_08001754>>////

undefined4 FUN_08001754(uint **param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if (param_1 != (uint **)0x0) {
    if (*(char *)((int)param_1 + 0x35) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      FUN_08004d48();
    }
    *(undefined *)((int)param_1 + 0x35) = 0x24;
    **param_1 = **param_1 & 0xfffffffe;
    uVar7 = FUN_08002220();
    uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
    uVar1 = (uint)uVar7;
    puVar4 = param_1[1];
    uVar6 = uVar1 / 1000000;
    if ((uint *)0x186a0 < puVar4) {
      uVar2 = 300;
    }
    puVar3 = *param_1;
    if ((uint *)0x186a0 < puVar4) {
      uVar2 = uVar6 * uVar2;
    }
    puVar3[1] = uVar6;
    if ((uint *)0x186a0 < puVar4) {
      uVar6 = uVar2 / 1000;
    }
    puVar3[8] = uVar6 + 1;
    if (puVar4 < (uint *)0x186a1) {
      uVar1 = uVar1 / (uint)((int)puVar4 << 1);
      if ((uVar1 & 0xfff) < 4) {
        uVar1 = 4;
      }
    }
    else {
      if (param_1[2] == (uint *)0x0) {
        uVar1 = uVar1 / (uint)((int)puVar4 * 3) | 0x8000;
      }
      else {
        uVar1 = uVar1 / (uint)((int)puVar4 * 0x19) | 0xc000;
      }
      if ((uVar1 & 0xfff) == 0) {
        uVar1 = 1;
      }
    }
    puVar4 = param_1[8];
    puVar5 = param_1[7];
    puVar3[7] = uVar1;
    *puVar3 = (uint)puVar5 | (uint)puVar4;
    puVar3[2] = (uint)param_1[4] | (uint)param_1[3];
    puVar3[3] = (uint)param_1[5] | (uint)param_1[6];
    *puVar3 = *puVar3 | 1;
    param_1[0xe] = (uint *)0x0;
    *(undefined *)((int)param_1 + 0x35) = 0x20;
    *(undefined *)((int)param_1 + 0x36) = 0;
    return 0;
  }
  return 1;
}


////>>0x08001828>>FUN_08001828>>////

undefined4
FUN_08001828(uint **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
            short param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  if (*(char *)((int)param_1 + 0x35) == ' ') {
    if (param_5 == (byte *)0x0) {
      return 1;
    }
    if (param_6 == 0) {
      return 1;
    }
    iVar1 = FUN_0800115c();
    do {
      puVar3 = *param_1;
      if ((~puVar3[6] & 2) != 0) {
        if (*(char *)(param_1 + 0xd) == '\x01') {
          return 2;
        }
        uVar4 = *puVar3;
        *(undefined *)(param_1 + 0xd) = 1;
        *puVar3 = uVar4 & 0xfffff7ff;
        *(undefined *)((int)param_1 + 0x35) = 0x21;
        *(undefined *)((int)param_1 + 0x36) = 0x40;
        param_1[0xe] = (uint *)0x0;
        iVar1 = FUN_08001530(param_1,param_2,param_3,param_4,param_7);
        if (iVar1 != 0) {
          *(undefined *)(param_1 + 0xd) = 0;
          if (param_1[0xe] == (uint *)0x4) {
            return 1;
          }
          return 3;
        }
        goto LAB_080018e2;
      }
      iVar2 = FUN_0800115c();
    } while ((uint)(iVar2 - iVar1) < 0x2711);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)((int)param_1 + 0x35) = 0x20;
  }
  return 2;
  while (param_6 != 0) {
LAB_080018e2:
    iVar1 = FUN_080014e2(param_1,param_7);
    if (iVar1 != 0) goto LAB_080018ee;
    puVar3 = *param_1;
    puVar3[4] = (uint)*param_5;
    if ((int)(puVar3[5] << 0x1d) < 0) {
      if ((short)(param_6 + -1) == 0) break;
      param_6 = param_6 + -2;
      puVar3[4] = (uint)param_5[1];
      param_5 = param_5 + 2;
    }
    else {
      param_5 = param_5 + 1;
      param_6 = param_6 + -1;
    }
  }
  iVar1 = FUN_080014e2(param_1,param_7);
  if (iVar1 == 0) {
    **param_1 = **param_1 | 0x200;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)((int)param_1 + 0x35) = 0x20;
    *(undefined *)((int)param_1 + 0x36) = 0;
    return 0;
  }
LAB_080018ee:
  if (param_1[0xe] == (uint *)0x4) {
    **param_1 = **param_1 | 0x200;
    return 1;
  }
  return 3;
}


////>>0x08001938>>FUN_08001938>>////

undefined4
FUN_08001938(uint **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined *param_5,ushort param_6,uint param_7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  
  if (*(char *)((int)param_1 + 0x35) != ' ') {
    return 2;
  }
  if (param_5 == (undefined *)0x0) {
    return 1;
  }
  if (param_6 == 0) {
    return 1;
  }
  iVar2 = FUN_0800115c();
  while (puVar4 = *param_1, (~puVar4[6] & 2) == 0) {
    iVar3 = FUN_0800115c();
    if (10000 < (uint)(iVar3 - iVar2)) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)((int)param_1 + 0x35) = 0x20;
      return 2;
    }
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    return 2;
  }
  uVar5 = *puVar4;
  *(undefined *)(param_1 + 0xd) = 1;
  *puVar4 = uVar5 & 0xfffff7ff;
  *(undefined *)((int)param_1 + 0x35) = 0x22;
  *(undefined *)((int)param_1 + 0x36) = 0x40;
  param_1[0xe] = (uint *)0x0;
  iVar2 = FUN_080015e8(param_1,param_2,param_3,param_4,param_7);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    if (param_1[0xe] == (uint *)0x4) {
      return 1;
    }
    return 3;
  }
  puVar4 = *param_1;
  uVar5 = *puVar4;
  if (param_6 == 1) {
    *puVar4 = uVar5 & 0xfffffbff;
    disableIRQinterrupts();
    **param_1 = **param_1 | 0x200;
    enableIRQinterrupts();
    iVar2 = FUN_080016f4(param_1,param_7);
    if (iVar2 == 0) {
      *param_5 = (char)(*param_1)[4];
LAB_08001ab8:
      *(undefined *)((int)param_1 + 0x35) = 0x20;
      *(undefined *)((int)param_1 + 0x36) = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      return 0;
    }
LAB_08001a18:
    if (param_1[0xe] != (uint *)0x20) {
      return 1;
    }
    return 3;
  }
  if (param_6 == 2) {
    *puVar4 = uVar5 | 0x800;
    disableIRQinterrupts();
    **param_1 = **param_1 & 0xfffffbff;
    enableIRQinterrupts();
  }
  else {
    *puVar4 = uVar5 | 0x400;
    while (3 < param_6) {
      iVar2 = FUN_080016f4(param_1,param_7);
      if (iVar2 != 0) goto LAB_08001a18;
      *param_5 = (char)(*param_1)[4];
      puVar4 = *param_1;
      bVar7 = (int)(puVar4[5] << 0x1d) < 0;
      if (bVar7) {
        puVar4 = (uint *)puVar4[4];
        puVar6 = param_5 + 2;
        param_6 = param_6 - 2;
      }
      else {
        puVar6 = param_5 + 1;
        param_6 = param_6 - 1;
      }
      puVar1 = param_5 + 1;
      param_5 = puVar6;
      if (bVar7) {
        *puVar1 = (char)puVar4;
      }
    }
    if (param_6 != 2) {
      iVar2 = FUN_0800115c();
      do {
        puVar4 = *param_1;
        do {
          if ((int)(puVar4[5] << 0x1d) < 0) {
            *puVar4 = *puVar4 & 0xfffffbff;
            disableIRQinterrupts();
            *param_5 = (char)(*param_1)[4];
            iVar2 = FUN_0800115c();
            goto LAB_08001b3a;
          }
        } while (param_7 == 0xffffffff);
      } while ((param_7 != 0) && (iVar3 = FUN_0800115c(), (uint)(iVar3 - iVar2) <= param_7));
      goto LAB_08001afa;
    }
  }
  iVar2 = FUN_0800115c();
  do {
    do {
      if ((int)((*param_1)[5] << 0x1d) < 0) {
        disableIRQinterrupts();
        puVar4 = *param_1;
        *puVar4 = *puVar4 | 0x200;
        *param_5 = (char)puVar4[4];
        enableIRQinterrupts();
        param_5[1] = (char)(*param_1)[4];
        goto LAB_08001ab8;
      }
    } while (param_7 == 0xffffffff);
  } while ((param_7 != 0) && (iVar3 = FUN_0800115c(), (uint)(iVar3 - iVar2) <= param_7));
LAB_08001afa:
  *(undefined *)((int)param_1 + 0x35) = 0x20;
  *(undefined *)(param_1 + 0xd) = 0;
  return 3;
LAB_08001b3a:
  do {
    puVar4 = *param_1;
    do {
      if ((int)(puVar4[5] << 0x1d) < 0) {
        *puVar4 = *puVar4 | 0x200;
        param_5[1] = (char)puVar4[4];
        enableIRQinterrupts();
        param_5[2] = (char)(*param_1)[4];
        goto LAB_08001ab8;
      }
    } while (param_7 == 0xffffffff);
  } while ((param_7 != 0) && (iVar3 = FUN_0800115c(), (uint)(iVar3 - iVar2) <= param_7));
  goto LAB_08001afa;
}


////>>0x08001b58>>FUN_08001b58>>////

/* WARNING: Removing unreachable block (ram,0x08001eec) */
/* WARNING: Removing unreachable block (ram,0x08001ee8) */


undefined4 FUN_08001b58(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 << 0x1f < 0) {
    if (((_DAT_40021004 & 0xc) == 4) ||
       (((_DAT_40021004 & 0xc) == 8 && ((int)(_DAT_40021004 << 0xf) < 0)))) {
      if (((int)((_DAT_40021000 >> 0x11) << 0x1f) < 0) && (param_1[1] == 0)) {
        return 1;
      }
    }
    else {
      iVar1 = param_1[1];
      if (iVar1 == 0x10000) {
LAB_08001c1e:
        _DAT_40021000 = _DAT_40021000 | 0x10000;
      }
      else {
        if (iVar1 == 0) {
          _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
          iVar1 = FUN_0800115c();
          while ((int)((_DAT_40021000 >> 0x11) << 0x1f) < 0) {
            iVar2 = FUN_0800115c();
            if (100 < (uint)(iVar2 - iVar1)) {
              return 3;
            }
          }
          goto LAB_08001b64;
        }
        if (iVar1 == 0x50000) {
          _DAT_40021000 = _DAT_40021000 | 0x40000;
          goto LAB_08001c1e;
        }
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      iVar1 = FUN_0800115c();
      while (-1 < (int)((_DAT_40021000 >> 0x11) << 0x1f)) {
        iVar2 = FUN_0800115c();
        if (100 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
  }
LAB_08001b64:
  if (*param_1 << 0x1e < 0) {
    if (((_DAT_40021004 & 0xc) == 0) ||
       (((_DAT_40021004 & 0xc) == 8 && (-1 < (int)(_DAT_40021004 << 0xf))))) {
      if (((int)((_DAT_40021000 >> 1) << 0x1f) < 0) && (param_1[4] != 1)) {
        return 1;
      }
    }
    else {
      iRam42420000 = param_1[4];
      if (iRam42420000 == 0) {
        iVar1 = FUN_0800115c();
        while ((int)((_DAT_40021000 >> 1) << 0x1f) < 0) {
          iVar2 = FUN_0800115c();
          if (2 < (uint)(iVar2 - iVar1)) {
            return 3;
          }
        }
        goto LAB_08001b6c;
      }
      iRam42420000 = 1;
      iVar1 = FUN_0800115c();
      while (-1 < (int)((_DAT_40021000 >> 1) << 0x1f)) {
        iVar2 = FUN_0800115c();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    _DAT_40021000 = param_1[5] << 3 | _DAT_40021000 & 0xffffff07;
  }
LAB_08001b6c:
  if (*param_1 << 0x1c < 0) {
    iRam42420480 = param_1[6];
    if (iRam42420480 == 0) {
      iVar1 = FUN_0800115c();
      while ((int)((_DAT_40021024 >> 1) << 0x1f) < 0) {
        iVar2 = FUN_0800115c();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      iRam42420480 = 1;
      iVar1 = FUN_0800115c();
      while (-1 < (int)((_DAT_40021024 >> 1) << 0x1f)) {
        iVar2 = FUN_0800115c();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      FUN_08001168(1);
    }
  }
  if (-1 < *param_1 << 0x1d) goto LAB_08001bc2;
  _DAT_4002101c = _DAT_4002101c | 0x10000000;
  _DAT_40007000 = _DAT_40007000 | 0x100;
  iVar1 = FUN_0800115c();
  while (-1 < (int)(_DAT_40007000 << 0x17)) {
    iVar2 = FUN_0800115c();
    if (100 < (uint)(iVar2 - iVar1)) {
      return 3;
    }
  }
  iVar1 = param_1[3];
  if (iVar1 == 1) {
LAB_08001e1a:
    _DAT_40021020 = _DAT_40021020 | 1;
  }
  else {
    if (iVar1 == 0) {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
      iVar1 = FUN_0800115c();
      while ((int)((_DAT_40021020 >> 1) << 0x1f) < 0) {
        iVar2 = FUN_0800115c();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      goto LAB_08001bc2;
    }
    if (iVar1 == 5) {
      _DAT_40021020 = _DAT_40021020 | 4;
      goto LAB_08001e1a;
    }
    _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
  }
  iVar1 = FUN_0800115c();
  while (-1 < (int)((_DAT_40021020 >> 1) << 0x1f)) {
    iVar2 = FUN_0800115c();
    if (5000 < (uint)(iVar2 - iVar1)) {
      return 3;
    }
  }
LAB_08001bc2:
  if (param_1[7] == 0) {
    return 0;
  }
  if ((_DAT_40021004 & 0xc) != 8) {
    if (param_1[7] != 2) {
      uRam42420060 = 0;
      iVar1 = FUN_0800115c();
      do {
        if (-1 < (int)((_DAT_40021000 >> 0x19) << 0x1f)) {
          return 0;
        }
        iVar2 = FUN_0800115c();
      } while ((uint)(iVar2 - iVar1) < 3);
      return 3;
    }
    uRam42420060 = 0;
    iVar1 = FUN_0800115c();
    do {
      if (-1 < (int)((_DAT_40021000 >> 0x19) << 0x1f)) {
        if (param_1[8] == 0x10000) {
          _DAT_40021004 = _DAT_40021004 & 0xfffdffff | param_1[2];
        }
        _DAT_40021004 = param_1[8] | param_1[9] | _DAT_40021004 & 0xffc2ffff;
        uRam42420060 = 1;
        iVar1 = FUN_0800115c();
        do {
          if ((int)((_DAT_40021000 >> 0x19) << 0x1f) < 0) {
            return 0;
          }
          iVar2 = FUN_0800115c();
        } while ((uint)(iVar2 - iVar1) < 3);
        return 3;
      }
      iVar2 = FUN_0800115c();
    } while ((uint)(iVar2 - iVar1) < 3);
    return 3;
  }
  return 1;
}


////>>0x08002008>>FUN_08002008>>////



int FUN_08002008(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte local_24 [4];
  undefined4 local_20 [5];
  
  puVar4 = &DAT_080072f0;
  puVar6 = local_20;
  do {
    uVar1 = *puVar4;
    uVar3 = puVar4[1];
    puVar4 = puVar4 + 2;
    *puVar6 = uVar1;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
  } while (puVar4 != (undefined4 *)"../Src/MPU9250.c");
  local_24[0] = 1;
  local_24[1] = 2;
  if ((_DAT_40021004 & 0xc) == 8) {
    if ((int)(_DAT_40021004 << 0xf) < 0) {
      uVar5 = 8000000 / local_24[(_DAT_40021004 & 0x20000) >> 0x11];
    }
    else {
      uVar5 = 4000000;
    }
    iVar2 = uVar5 * *(byte *)((int)local_20 + ((_DAT_40021004 & 0x3c0000) >> 0x12));
  }
  else {
    iVar2 = 8000000;
  }
  return iVar2;
}


////>>0x0800209c>>FUN_0800209c>>////



undefined4 FUN_0800209c(uint *param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_2 <= (_DAT_40022000 & 7)) ||
     (_DAT_40022000 = _DAT_40022000 & 0xfffffff8 | param_2, param_2 == (param_2 & 7))) {
    if ((int)(*param_1 << 0x1e) < 0) {
      _DAT_40021004 = _DAT_40021004 & 0xffffff0f | param_1[2];
    }
    iVar3 = *param_1 << 0x1f;
    if (-1 < iVar3) {
LAB_080020ba:
      if ((param_2 < (_DAT_40022000 & 7)) &&
         (_DAT_40022000 = _DAT_40022000 & 0xfffffff8 | param_2, param_2 != (param_2 & 7))) {
        return 1;
      }
      if ((*param_1 & 4) != 0) {
        _DAT_40021004 = _DAT_40021004 & 0xfffff8ff | param_1[3];
      }
      if ((int)(*param_1 << 0x1c) < 0) {
        _DAT_40021004 = _DAT_40021004 & 0xffffc7ff | param_1[4] << 3;
      }
      uVar4 = FUN_08002008();
      DAT_200001bc = uVar4 >> (&DAT_08007361)[(_DAT_40021004 & 0xf0) >> 4];
      FUN_08001104(0);
      return 0;
    }
    uVar4 = param_1[1];
    if (uVar4 == 1) {
      cVar2 = '\x01';
      cVar1 = '\0';
    }
    else {
      uVar6 = _DAT_40021000;
      if (uVar4 == 2) goto LAB_08002176;
      cVar2 = '\0';
      cVar1 = '\x01';
    }
    uVar6 = (_DAT_40021000 >>
            (LZCOUNT((uint)(byte)(cVar1 << 6) << 0x18 | (uint)(byte)(cVar2 << 6) << 8) & 0x1fU)) <<
            0x1f;
    if ((int)uVar6 < 0) {
LAB_08002176:
      _DAT_40021004 = _DAT_40021004 & 0xfffffffc | uVar4;
      iVar3 = FUN_0800115c(iVar3,uVar6);
      if (param_1[1] == 1) {
        do {
          if ((_DAT_40021004 & 0xc) == 4) goto LAB_080020ba;
          iVar5 = FUN_0800115c();
        } while ((uint)(iVar5 - iVar3) < 0x1389);
      }
      else if (param_1[1] == 2) {
        do {
          if ((_DAT_40021004 & 0xc) == 8) goto LAB_080020ba;
          iVar5 = FUN_0800115c();
        } while ((uint)(iVar5 - iVar3) < 0x1389);
      }
      else {
        do {
          if ((_DAT_40021004 & 0xc) == 0) goto LAB_080020ba;
          iVar5 = FUN_0800115c();
        } while ((uint)(iVar5 - iVar3) < 0x1389);
      }
      return 3;
    }
  }
  return 1;
}


////>>0x08002214>>FUN_08002214>>////

undefined4 FUN_08002214(void)

{
  return DAT_200001bc;
}


////>>0x08002220>>FUN_08002220>>////



uint FUN_08002220(void)

{
  return DAT_200001bc >> (&DAT_08007371)[(_DAT_40021004 & 0x700) >> 8];
}


////>>0x08002250>>FUN_08002250>>////



uint FUN_08002250(void)

{
  return DAT_200001bc >> (&DAT_08007371)[(_DAT_40021004 & 0x3800) >> 0xb];
}


////>>0x08002280>>FUN_08002280>>////

void FUN_08002280(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x20) & 0xfffffffd | param_2[2];
  if (param_1 == 0x40012c00) {
    uVar1 = (uVar1 & 0xfffffff7 | param_2[3]) & 0xfffffffb;
    uVar2 = uVar2 & 0xfffffcff | param_2[5] | param_2[6];
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff8c | uVar3;
  *(uint *)(param_1 + 0x34) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar1;
  return;
}


////>>0x080022d0>>FUN_080022d0>>////

void FUN_080022d0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffeff;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x20) & 0xfffffdff | param_2[2] << 8;
  if (param_1 == 0x40012c00) {
    uVar1 = (uVar1 & 0xfffff7ff | param_2[3] << 8) & 0xfffffbff;
    uVar2 = uVar2 & 0xffffcfff | (param_2[5] | param_2[6]) << 4;
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffff8c | uVar3;
  *(uint *)(param_1 + 0x3c) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar1;
  return;
}


////>>0x08002324>>FUN_08002324>>////

void FUN_08002324(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffefff;
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *param_2;
  iVar3 = param_2[2];
  iVar4 = 0x40012c00;
  if (param_1 == 0x40012c00) {
    iVar4 = param_2[5];
    uVar1 = uVar1 & 0xffffbfff;
  }
  if (param_1 == 0x40012c00) {
    uVar1 = uVar1 | iVar4 << 6;
  }
  *(uint *)(param_1 + 4) = uVar1;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff8cff | iVar2 << 8;
  *(int *)(param_1 + 0x40) = param_2[1];
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffdfff | iVar3 << 0xc;
  return;
}


////>>0x08002368>>FUN_08002368>>////

void FUN_08002368(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((((param_1 == (uint *)0x40012c00) || (param_1 == (uint *)0x40000000)) ||
       (param_1 == (uint *)0x40000400)) || (param_1 == (uint *)0x40000800)) &&
     (((uVar1 = uVar1 & 0xffffff8f | param_2[1], param_1 == (uint *)0x40012c00 ||
       (param_1 == (uint *)0x40000000)) ||
      ((param_1 == (uint *)0x40000400 || (param_1 == (uint *)0x40000800)))))) {
    uVar1 = uVar1 & 0xfffffcff | param_2[3];
  }
  *param_1 = uVar1;
  param_1[0xb] = param_2[2];
  param_1[10] = *param_2;
  uVar1 = 0x40012c00;
  if (param_1 == (uint *)0x40012c00) {
    uVar1 = param_2[4];
  }
  if (param_1 == (uint *)0x40012c00) {
    param_1[0xc] = uVar1;
  }
  param_1[5] = 1;
  return;
}


////>>0x080023d0>>FUN_080023d0>>////

undefined4 FUN_080023d0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)((int)param_1 + 0x39) == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      FUN_08004d8c();
    }
    *(undefined *)((int)param_1 + 0x39) = 2;
    FUN_08002368(*param_1,param_1 + 1);
    *(undefined *)((int)param_1 + 0x39) = 1;
    return 0;
  }
  return 1;
}


////>>0x08002404>>FUN_08002404>>////

void FUN_08002404(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffef;
  uVar2 = *(uint *)(param_1 + 4);
  iVar3 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x20) & 0xffffffdf | param_2[2] << 4;
  if (param_1 == 0x40012c00) {
    uVar1 = (uVar1 & 0xffffff7f | param_2[3] << 4) & 0xffffffbf;
    uVar2 = uVar2 & 0xfffff3ff | (param_2[5] | param_2[6]) << 2;
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff8cff | iVar3 << 8;
  *(int *)(param_1 + 0x38) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar1;
  return;
}


////>>0x0800245c>>FUN_0800245c>>////

void FUN_0800245c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    return;
  }
  *(undefined *)((int)param_1 + 0x39) = 2;
  *(undefined *)(param_1 + 0xe) = 1;
  switch(param_3) {
  case 0:
    FUN_08002280(*param_1);
    iVar3 = *param_1;
    uVar2 = *(uint *)(extraout_r1 + 0x10);
    *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 8;
    *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) & 0xfffffffb;
    uVar2 = *(uint *)(iVar3 + 0x18) | uVar2;
    break;
  default:
    goto switchD_0800247a_caseD_1;
  case 4:
    FUN_08002404(*param_1);
    iVar3 = *param_1;
    iVar1 = *(int *)(extraout_r1_00 + 0x10);
    *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 0x800;
    *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) & 0xfffffbff;
    uVar2 = *(uint *)(iVar3 + 0x18) | iVar1 << 8;
    break;
  case 8:
    FUN_080022d0(*param_1);
    iVar3 = *param_1;
    uVar2 = *(uint *)(extraout_r1_01 + 0x10);
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 8;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffb;
    uVar2 = *(uint *)(iVar3 + 0x1c) | uVar2;
    goto LAB_080024fa;
  case 0xc:
    FUN_08002324(*param_1);
    iVar3 = *param_1;
    iVar1 = *(int *)(extraout_r1_02 + 0x10);
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x800;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffbff;
    uVar2 = *(uint *)(iVar3 + 0x1c) | iVar1 << 8;
LAB_080024fa:
    *(uint *)(iVar3 + 0x1c) = uVar2;
    goto switchD_0800247a_caseD_1;
  }
  *(uint *)(iVar3 + 0x18) = uVar2;
switchD_0800247a_caseD_1:
  *(undefined *)((int)param_1 + 0x39) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  return;
}


////>>0x08002520>>FUN_08002520>>////

void FUN_08002520(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = param_3 << (param_2 & 0xff) | *(uint *)(param_1 + 0x20);
  return;
}


////>>0x08002538>>FUN_08002538>>////

undefined4 FUN_08002538(uint **param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  
  FUN_08002520(*param_1,param_2,1);
  puVar2 = *param_1;
  uVar1 = 0x40012c00;
  if (puVar2 == (uint *)0x40012c00) {
    uVar1 = uRam40012c44 | 0x8000;
  }
  if (puVar2 == (uint *)0x40012c00) {
    puVar2[0x11] = uVar1;
  }
  *puVar2 = *puVar2 | 1;
  return 0;
}


////>>0x08002564>>FUN_08002564>>////

undefined4 FUN_08002564(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(char *)(param_1 + 0xe) != '\x01') {
    *(undefined *)((int)param_1 + 0x39) = 2;
    *(uint *)(*param_1 + 0x44) =
         *param_2 | param_2[1] | param_2[2] | param_2[3] | param_2[4] | param_2[5] | param_2[6];
    *(undefined *)((int)param_1 + 0x39) = 1;
    uVar1 = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return uVar1;
}


////>>0x080025a4>>FUN_080025a4>>////

undefined4 FUN_080025a4(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 2;
  if (*(char *)(param_1 + 0xe) != '\x01') {
    *(undefined *)((int)param_1 + 0x39) = 2;
    iVar3 = *param_1;
    uVar4 = *param_2;
    uVar1 = param_2[1];
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xffffff8f;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | uVar4;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffffff7f;
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | uVar1;
    *(undefined *)((int)param_1 + 0x39) = 1;
    uVar2 = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return uVar2;
}


////>>0x080025e8>>FUN_080025e8>>////

void FUN_080025e8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_1;
  uVar3 = param_1[4];
  *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) & 0xffffcfff | param_1[3];
  *(uint *)(iVar6 + 0xc) = param_1[2] | uVar3 | param_1[5] | *(uint *)(iVar6 + 0xc) & 0xffffe9f3;
  *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0xfffffcff | param_1[6];
  if (iVar6 == 0x40013800) {
    iVar1 = FUN_08002250();
    iVar4 = (int)(((ulonglong)(uint)(iVar1 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) / 100);
    iVar1 = FUN_08002250();
    iVar5 = param_1[1];
    iVar2 = FUN_08002250();
    iVar2 = (uint)(iVar1 * 0x19) / (uint)(iVar5 << 2) +
            (int)(((ulonglong)(uint)(iVar2 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) / 100) *
            -100;
    iVar1 = FUN_08002250();
    uVar3 = (uint)(iVar1 * 0x19) / (uint)(param_1[1] << 2);
    iVar1 = FUN_08002250();
  }
  else {
    iVar1 = FUN_08002220();
    iVar4 = (int)(((ulonglong)(uint)(iVar1 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) / 100);
    iVar1 = FUN_08002220();
    iVar5 = param_1[1];
    iVar2 = FUN_08002220();
    iVar2 = (uint)(iVar1 * 0x19) / (uint)(iVar5 << 2) +
            (int)(((ulonglong)(uint)(iVar2 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) / 100) *
            -100;
    iVar1 = FUN_08002220();
    uVar3 = (uint)(iVar1 * 0x19) / (uint)(param_1[1] << 2);
    iVar1 = FUN_08002220();
  }
  *(uint *)(iVar6 + 8) =
       (((uVar3 + (int)(((ulonglong)(uint)(iVar1 * 0x19) / (ulonglong)(uint)(param_1[1] << 2)) / 100
                       ) * -100) * 0x10 + 0x32) / 100 & 0xf | (iVar2 * 0x10 + 0x32U) / 100 & 0xf0) +
       iVar4 * 0x10;
  return;
}


////>>0x08002724>>FUN_08002724>>////

undefined4 FUN_08002724(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (*(char *)((int)param_1 + 0x39) == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      FUN_08004e7c();
    }
    *(undefined *)((int)param_1 + 0x39) = 2;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffdfff;
    FUN_080025e8(param_1);
    iVar1 = *param_1;
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffffb7ff;
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xffffffd5;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x2000;
    param_1[0xf] = 0;
    *(undefined *)((int)param_1 + 0x39) = 1;
    return 0;
  }
  return 1;
}


////>>0x0800290a>>FUN_0800290a>>////

void FUN_0800290a(void)

{
  return;
}


////>>0x0800290c>>FUN_0800290c>>////

undefined4 FUN_0800290c(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  ushort *puVar6;
  ushort *puVar7;
  bool bVar8;
  
  if ((*(byte *)((int)param_1 + 0x39) & 0xef) != 0x22) {
    return 2;
  }
  iVar2 = *param_1;
  puVar6 = (ushort *)param_1[10];
  if (param_1[2] == 0x1000) {
    if (param_1[4] == 0) {
      puVar7 = puVar6 + 1;
      *puVar6 = (ushort)((uint)(*(int *)(iVar2 + 4) << 0x17) >> 0x17);
    }
    else {
      puVar7 = (ushort *)((int)puVar6 + 1);
      *puVar6 = (ushort)*(int *)(iVar2 + 4) & 0xff;
    }
    param_1[10] = (int)puVar7;
  }
  else {
    if (param_1[4] == 0) {
      bVar1 = (byte)*(undefined4 *)(iVar2 + 4);
      param_1[10] = (int)puVar6 + 1;
    }
    else {
      uVar4 = *(undefined4 *)(iVar2 + 4);
      param_1[10] = (int)puVar6 + 1;
      bVar1 = (byte)uVar4 & 0x7f;
    }
    *(byte *)puVar6 = bVar1;
  }
  sVar5 = *(short *)((int)param_1 + 0x2e) + -1;
  *(short *)((int)param_1 + 0x2e) = sVar5;
  if (sVar5 == 0) {
    iVar2 = *param_1;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xffffffdf;
    bVar8 = *(char *)((int)param_1 + 0x39) != '2';
    if (bVar8) {
      uVar3 = *(uint *)(iVar2 + 0xc) & 0xfffffeff;
    }
    else {
      iVar2 = 0x12;
      uVar3 = 0x32;
    }
    if (bVar8) {
      *(uint *)(iVar2 + 0xc) = uVar3;
      uVar3 = *(uint *)(iVar2 + 0x14) & 0xfffffffe;
    }
    if (bVar8) {
      *(uint *)(iVar2 + 0x14) = uVar3;
      iVar2 = 1;
    }
    *(char *)((int)param_1 + 0x39) = (char)iVar2;
    FUN_08004c30();
  }
  return 0;
}


////>>0x08002998>>FUN_08002998>>////

void FUN_08002998(void)

{
  return;
}


////>>0x0800299a>>FUN_0800299a>>////

void FUN_0800299a(uint **param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  undefined uVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar6 = *param_1;
  uVar3 = *puVar6;
  uVar1 = puVar6[3];
  if ((uVar3 & 0xf) == 0) {
    if (((int)(uVar3 << 0x1a) < 0) && ((int)(uVar1 << 0x1a) < 0)) {
      FUN_0800290c();
      return;
    }
  }
  else {
    uVar7 = puVar6[5] & 1;
    if ((uVar7 != 0) || ((uVar1 & 0x120) != 0)) {
      puVar6 = (uint *)(uVar3 << 0x1f);
      if ((int)puVar6 < 0) {
        bVar8 = (int)(uVar1 << 0x17) < 0;
        if (bVar8) {
          puVar6 = (uint *)((uint)param_1[0xf] | 1);
        }
        if (bVar8) {
          param_1[0xf] = puVar6;
        }
      }
      if (((int)(uVar3 << 0x1d) < 0) && (uVar7 != 0)) {
        param_1[0xf] = (uint *)((uint)param_1[0xf] | 2);
      }
      if (((int)(uVar3 << 0x1e) < 0) && (uVar7 != 0)) {
        param_1[0xf] = (uint *)((uint)param_1[0xf] | 4);
      }
      if (((int)(uVar3 << 0x1c) < 0) && (uVar7 != 0)) {
        param_1[0xf] = (uint *)((uint)param_1[0xf] | 8);
      }
      if (param_1[0xf] == (uint *)0x0) {
        return;
      }
      if (((int)(uVar3 << 0x1a) < 0) && ((int)(uVar1 << 0x1a) < 0)) {
        FUN_0800290c(param_1);
      }
      puVar6 = *param_1;
      if ((-1 < (int)param_1[0xf] << 0x1c) && ((puVar6[5] & 0x40) == 0)) {
        FUN_08002998(param_1);
        param_1[0xf] = (uint *)0x0;
        return;
      }
      puVar6[3] = puVar6[3] & 0xfffffedf;
      puVar6[5] = puVar6[5] & 0xfffffffe;
      *(undefined *)((int)param_1 + 0x39) = 1;
      FUN_08002998(param_1);
      return;
    }
  }
  if (((int)(uVar3 << 0x18) < 0) && ((int)(uVar1 << 0x18) < 0)) {
    if ((*(byte *)((int)param_1 + 0x39) & 0xdf) == 0x12) {
      puVar4 = param_1[8];
      if (param_1[2] == (uint *)0x1000) {
        puVar6[1] = *(ushort *)puVar4 & 0x1ff;
        if (param_1[4] == (uint *)0x0) {
          puVar4 = (uint *)((int)puVar4 + 2);
        }
        else {
          puVar4 = (uint *)((int)puVar4 + 1);
        }
        param_1[8] = puVar4;
      }
      else {
        param_1[8] = (uint *)((int)puVar4 + 1);
        puVar6[1] = (uint)*(byte *)puVar4;
      }
      sVar2 = *(short *)((int)param_1 + 0x26) + -1;
      *(short *)((int)param_1 + 0x26) = sVar2;
      if (sVar2 == 0) {
        puVar6[3] = puVar6[3] & 0xffffff7f;
        puVar6[3] = puVar6[3] | 0x40;
        return;
      }
    }
  }
  else if (((int)(uVar3 << 0x19) < 0) && ((int)(uVar1 << 0x19) < 0)) {
    puVar6[3] = puVar6[3] & 0xffffffbf;
    if (*(char *)((int)param_1 + 0x39) == '2') {
      uVar5 = 0x22;
    }
    else {
      uVar5 = 1;
    }
    *(undefined *)((int)param_1 + 0x39) = uVar5;
    FUN_0800290a(param_1);
  }
  return;
}


////>>0x08002ad0>>FUN_08002ad0>>////

void FUN_08002ad0(void)

{
  FUN_0800407c(0xd0,0x75,"../Src/MPU9250.c",0x3b);
  FUN_0800403c(0xd0,0x6b,0x80,1);
  FUN_0800403c(0xd0,0x6b,1);
  FUN_0800403c(0xd0,0x6c,0,1);
  FUN_0800403c(0xd0,0x19,0,1);
  FUN_0800403c(0xd0,0x1d,3,1);
  FUN_0800403c(0xd0,0x1a,3,1);
  FUN_0800403c(0xd0,0x1b,0x10,1);
  FUN_0800403c(0xd0,0x1c,8,1);
  return;
}


////>>0x08002b48>>FUN_08002b48>>////

void FUN_08002b48(void)

{
  undefined4 uVar1;
  uint in_r3;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = in_r3 & 0xffff0000;
  FUN_080040e8(0xd0,0x3b,&local_18,6,"../Src/MPU9250.c",0x58);
  DAT_200002f6 = CONCAT11(local_18._2_1_,local_18._3_1_);
  DAT_200002f4 = CONCAT11((undefined)local_18,local_18._1_1_);
  DAT_200002f8 = CONCAT11((undefined)local_14,local_14._1_1_);
  iVar3 = (int)DAT_200002f6;
  iVar2 = (int)DAT_200002f8;
  uVar1 = FUN_08000c44();
  uVar1 = FUN_08000cec(uVar1,0x40800000);
  DAT_200002d0 = FUN_08000cec(uVar1,0x38000000);
  uVar1 = FUN_08000c44(iVar3);
  uVar1 = FUN_08000cec(uVar1,0x40800000);
  DAT_200002d4 = FUN_08000cec(uVar1,0x38000000);
  uVar1 = FUN_08000c44(iVar2);
  uVar1 = FUN_08000cec(uVar1,0x40800000);
  DAT_200002d8 = FUN_08000cec(uVar1,0x38000000);
  return;
}


////>>0x08002bf0>>FUN_08002bf0>>////

void FUN_08002bf0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined2 local_1c;
  
  local_20 = 0;
  local_1c = 0;
  FUN_080040e8(0xd0,0x43,&local_20,6,"../Src/MPU9250.c",0x7b);
  DAT_200002c0 = CONCAT11(local_20._2_1_,local_20._3_1_);
  DAT_200002be = CONCAT11((undefined)local_20,local_20._1_1_);
  DAT_200002c2 = CONCAT11((undefined)local_1c,local_1c._1_1_);
  iVar3 = (int)DAT_200002c0;
  iVar2 = (int)DAT_200002c2;
  uVar1 = FUN_08000c44();
  uVar1 = FUN_08000cec(uVar1,0x447a0000);
  uVar1 = FUN_08000cec(uVar1,0x38000000);
  DAT_200002c4 = FUN_08000ad8(uVar1,DAT_20000000);
  uVar1 = FUN_08000c44(iVar3);
  uVar1 = FUN_08000cec(uVar1,0x447a0000);
  uVar1 = FUN_08000cec(uVar1,0x38000000);
  DAT_200002c8 = FUN_08000ad8(uVar1,DAT_20000004);
  uVar1 = FUN_08000c44(iVar2);
  uVar1 = FUN_08000cec(uVar1,0x447a0000);
  uVar1 = FUN_08000cec(uVar1,0x38000000);
  DAT_200002cc = FUN_08000ad8(uVar1,DAT_20000008);
  return;
}


////>>0x08002cb0>>FUN_08002cb0>>////

void FUN_08002cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint local_c;
  
  local_c = param_4;
  FUN_0800403c(0xd0,0x37,0x22,1,param_1,param_2,param_3);
  FUN_0800403c(0xd0,0x6a,1);
  FUN_0800407c(0x18,0,"../Src/MPU9250.c",0xad);
  FUN_0800403c(0x18,0xb,1);
  FUN_0800403c(0x18,10,0,1);
  FUN_0800403c(0x18,10,0xf,1);
  FUN_080040e8(0x18,0x10,&local_c,3,"../Src/MPU9250.c",0xb6);
  uVar1 = FUN_08000c44((local_c & 0xff) - 0x80);
  uVar1 = FUN_08000cec(uVar1,0x3b800000);
  DAT_200002e8 = FUN_08000adc(uVar1,0x3f800000);
  uVar1 = FUN_08000c44((local_c >> 8 & 0xff) - 0x80);
  uVar1 = FUN_08000cec(uVar1,0x3b800000);
  DAT_200002ec = FUN_08000adc(uVar1,0x3f800000);
  uVar1 = FUN_08000c44((local_c >> 0x10 & 0xff) - 0x80);
  uVar1 = FUN_08000cec(uVar1,0x3b800000);
  DAT_200002f0 = FUN_08000adc(uVar1,0x3f800000);
  FUN_0800403c(0x18,10,0,1);
  FUN_0800403c(0x18,10,0x16,1);
  return;
}


////>>0x08002d88>>FUN_08002d88>>////

void FUN_08002d88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 local_28;
  undefined uStack_26;
  undefined uStack_25;
  undefined local_24;
  undefined local_23;
  byte local_22;
  undefined uStack_21;
  
  uStack_21 = (undefined)((uint)param_4 >> 0x18);
  local_28 = 0;
  uStack_26 = 0;
  uStack_25 = 0;
  local_24 = 0;
  local_23 = 0;
  local_22 = 0;
  iVar1 = FUN_0800407c(0x18,2,"../Src/MPU9250.c",0xd7,param_1,param_2);
  if (iVar1 << 0x1f < 0) {
    FUN_080040e8(0x18,3,&local_28,7,"../Src/MPU9250.c",0xda);
    uVar3 = DAT_2000001c;
    if ((int)((uint)local_22 << 0x1c) < 0) {
      DAT_200013b9._2_2_ = DAT_200013b9._2_2_ + 1;
    }
    else {
      DAT_200002ba = CONCAT11(uStack_25,uStack_26);
      DAT_200002bc = CONCAT11(local_23,local_24);
      iVar4 = (int)DAT_200002ba;
      iVar1 = (int)DAT_200002bc;
      DAT_200002b8 = local_28;
      uVar2 = FUN_08000c44();
      uVar2 = FUN_08000cec(uVar2,uVar3);
      uVar2 = FUN_08000cec(uVar2,DAT_200002e8);
      uVar2 = FUN_08000ad8(uVar2,DAT_20000020);
      DAT_200002dc = FUN_08000cec(uVar2,DAT_2000002c);
      uVar2 = FUN_08000c44(iVar4);
      uVar2 = FUN_08000cec(uVar2,uVar3);
      uVar2 = FUN_08000cec(uVar2,DAT_200002ec);
      uVar2 = FUN_08000ad8(uVar2,DAT_20000024);
      DAT_200002e0 = FUN_08000cec(uVar2,DAT_20000030);
      uVar2 = FUN_08000c44(iVar1);
      uVar3 = FUN_08000cec(uVar2,uVar3);
      uVar3 = FUN_08000cec(uVar3,DAT_200002f0);
      uVar3 = FUN_08000ad8(uVar3,DAT_20000028);
      DAT_200002e4 = FUN_08000cec(uVar3,DAT_20000034);
    }
  }
  return;
}


////>>0x08002ea0>>FUN_08002ea0>>////

void FUN_08002ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  
  FUN_08002ad0();
  FUN_08002cb0();
  FUN_08003314(0x3f19999a);
  FUN_08003320(0,extraout_r1,param_3,param_4);
  return;
}


////>>0x08002ec0>>FUN_08002ec0>>////

void FUN_08002ec0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_2000024c;
  uVar3 = DAT_20000010;
  uVar1 = FUN_08000ad8(0x3f800000,DAT_20000010);
  uVar2 = FUN_08000cec(uVar1,uVar2);
  uVar3 = FUN_08000cec(uVar3,DAT_2000000c);
  DAT_2000000c = FUN_08000adc(uVar3,uVar2);
  return;
}


////>>0x08002ed4>>FUN_08002ed4>>////

void FUN_08002ed4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_20000248;
  uVar3 = uRam20000018;
  uVar1 = FUN_08000ad8(0x3f800000,uRam20000018);
  uVar2 = FUN_08000cec(uVar1,uVar2);
  uVar3 = FUN_08000cec(uVar3,uRam20000014);
  uRam20000014 = FUN_08000adc(uVar3,uVar2);
  return;
}


////>>0x08002ee8>>FUN_08002ee8>>////

void FUN_08002ee8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_20000250;
  iVar2 = FUN_08001050(DAT_20000250,0xc3340000);
  if ((iVar2 != 0) && (iVar2 = FUN_08001028(uVar1,0x42b40000), iVar2 != 0)) {
    FUN_08000adc(uVar1,0x42b40000);
    return;
  }
  FUN_08000ad8(uVar1,0x43870000);
  return;
}


////>>0x08002f28>>FUN_08002f28>>////



void FUN_08002f28(void)

{
  undefined4 uVar1;
  
  FUN_08002b48();
  FUN_08002bf0();
  FUN_08002d88();
  DAT_20000258 = thunk_FUN_0800115c();
  uVar1 = FUN_08000c3c(DAT_20000258 - DAT_20000254);
  FUN_08000e54(uVar1,0x447a0000);
  FUN_08003320();
  DAT_20000254 = DAT_20000258;
  FUN_08003330(DAT_200002d4 + -0x80000000,DAT_200002d0 + -0x80000000,DAT_200002d8,DAT_200002c8,
               DAT_200002c4,DAT_200002cc + -0x80000000,DAT_200002dc,DAT_200002e0,DAT_200002e4,
               &DAT_20000248);
  _DAT_2000142a = (undefined2)((uint)(int)DAT_200002f4 / 100);
  _DAT_2000142e = (undefined2)((uint)(int)DAT_200002f8 / 100);
  DAT_2000142c = (undefined2)((uint)(int)DAT_200002f6 / 100);
  DAT_20001430 = DAT_200002be;
  _DAT_20001432 = DAT_200002c0;
  DAT_20001434 = DAT_200002c2;
  _DAT_20001436 = DAT_200002b8;
  DAT_20001438 = DAT_200002ba;
  DAT_2000143a = DAT_200002bc;
  uVar1 = FUN_08002ed4();
  FUN_08000cec(uVar1,0x41200000);
  DAT_20001395._0_2_ = FUN_08001078();
  uVar1 = FUN_08002ec0();
  FUN_08000cec(uVar1,0x41200000);
  DAT_20001395._2_2_ = FUN_08001078();
  FUN_08002ee8();
  DAT_20001399 = FUN_08001078();
  return;
}


////>>0x08003034>>FUN_08003034>>////

uint FUN_08003034(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = param_4;
  FUN_080040b8(0xee,0,&local_c,3,"../Src/MS5611.c",0x8c,param_3);
  return (uint)CONCAT12((undefined)local_c,CONCAT11(local_c._1_1_,local_c._2_1_));
}


////>>0x08003068>>FUN_08003068>>////

undefined4 FUN_08003068(void)

{
  return DAT_200002fc;
}


////>>0x08003298>>FUN_08003298>>////

void FUN_08003298(void)

{
  int iVar1;
  undefined local_1c;
  undefined local_1b;
  
  iVar1 = 0;
  FUN_0800403c(0xee,0x1e,1);
  thunk_FUN_08001168(10);
  DAT_20000038 = 8;
  do {
    local_1c = 0;
    local_1b = 0;
    FUN_080040e8(0xee,iVar1 + 0xa0U & 0xffff,&local_1c,2,"../Src/MS5611.c",0x7c);
    *(ushort *)((int)&DAT_2000025c + iVar1) = CONCAT11(local_1c,local_1b);
    iVar1 = iVar1 + 2;
  } while (iVar1 != 0x10);
  iVar1 = 0;
  do {
    (&DAT_20000300)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x14);
  return;
}


////>>0x08003314>>FUN_08003314>>////

void FUN_08003314(undefined4 param_1)

{
  DAT_2000035c = param_1;
  return;
}


////>>0x08003320>>FUN_08003320>>////

void FUN_08003320(undefined4 param_1)

{
  DAT_20000360 = param_1;
  return;
}


////>>0x08003330>>FUN_08003330>>////

void FUN_08003330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 *param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int iVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar29 = DAT_20000048;
  uVar28 = DAT_20000044;
  iVar30 = DAT_20000040;
  uVar27 = DAT_2000003c;
  uVar1 = FUN_08000cec(param_1,param_1);
  uVar2 = FUN_08000cec(param_2);
  uVar1 = FUN_08000adc(uVar1,uVar2);
  uVar2 = FUN_08000cec(param_3);
  FUN_08000adc(uVar1,uVar2);
  FUN_08000428();
  FUN_08005bc8();
  uVar1 = FUN_08000a30();
  iVar3 = FUN_08001014(uVar1,0);
  if (iVar3 == 0) {
    uVar2 = FUN_08000cec(param_7);
    uVar4 = FUN_08000cec(param_8);
    uVar2 = FUN_08000adc(uVar2,uVar4);
    uVar4 = FUN_08000cec(param_9);
    FUN_08000adc(uVar2,uVar4);
    FUN_08000428();
    FUN_08005bc8();
    uVar2 = FUN_08000a30();
    iVar3 = FUN_08001014(uVar2,0);
    if (iVar3 == 0) {
      uVar31 = FUN_08000428(param_4);
      FUN_080004d0((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),0xa2529d39,0x3f91df46);
      uVar4 = FUN_08000a30();
      uVar31 = FUN_08000428(param_5);
      FUN_080004d0((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),0xa2529d39,0x3f91df46);
      uVar5 = FUN_08000a30();
      uVar31 = FUN_08000428(param_6);
      FUN_080004d0((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),0xa2529d39,0x3f91df46);
      uVar6 = FUN_08000a30();
      iVar3 = FUN_08000adc(uVar27);
      uVar7 = FUN_08000adc(iVar30);
      iVar8 = FUN_08000adc(uVar28,uVar28);
      uVar9 = FUN_08000adc(uVar29,uVar29);
      uVar10 = FUN_08000cec(uVar27);
      uVar11 = FUN_08000cec(uVar27,iVar30);
      uVar12 = FUN_08000cec(uVar27,uVar28);
      uVar13 = FUN_08000cec(iVar30);
      uVar14 = FUN_08000cec(iVar30,uVar29);
      uVar15 = FUN_08000cec(uVar28,uVar28);
      uVar16 = FUN_08000cec(uVar29,uVar29);
      uVar1 = FUN_08000e54(0x3f800000,uVar1);
      uVar2 = FUN_08000e54(0x3f800000,uVar2);
      uVar17 = FUN_08000cec(param_7,uVar2);
      uVar18 = FUN_08000cec(param_8,uVar2);
      uVar2 = FUN_08000cec(param_9,uVar2);
      iVar19 = FUN_08000cec(iVar3,uVar17);
      uVar20 = FUN_08000cec(iVar3,uVar18);
      uVar21 = FUN_08000cec(iVar3,uVar2);
      uVar22 = FUN_08000cec(uVar7,uVar17);
      uVar23 = FUN_08000cec(uVar10,uVar17);
      uVar24 = FUN_08000cec(uVar29,uVar20);
      uVar23 = FUN_08000ad8(uVar23,uVar24);
      uVar24 = FUN_08000cec(uVar28,uVar21);
      uVar23 = FUN_08000adc(uVar23,uVar24);
      uVar24 = FUN_08000cec(uVar13,uVar17);
      uVar23 = FUN_08000adc(uVar23,uVar24);
      uVar24 = FUN_08000cec(uVar7,uVar18);
      uVar24 = FUN_08000cec(uVar24,uVar28);
      uVar23 = FUN_08000adc(uVar23,uVar24);
      uVar24 = FUN_08000cec(uVar7,uVar2);
      uVar24 = FUN_08000cec(uVar24,uVar29);
      uVar23 = FUN_08000adc(uVar23,uVar24);
      uVar24 = FUN_08000cec(uVar15,uVar17);
      uVar23 = FUN_08000ad8(uVar23,uVar24);
      uVar24 = FUN_08000cec(uVar16,uVar17);
      uVar23 = FUN_08000ad8(uVar23,uVar24);
      uVar24 = FUN_08000cec(uVar29,iVar19);
      uVar25 = FUN_08000cec(uVar10,uVar18);
      uVar24 = FUN_08000adc(uVar24,uVar25);
      uVar21 = FUN_08000cec(iVar30,uVar21);
      uVar21 = FUN_08000ad8(uVar24,uVar21);
      uVar24 = FUN_08000cec(uVar28,uVar22);
      uVar21 = FUN_08000adc(uVar21,uVar24);
      uVar24 = FUN_08000cec(uVar13,uVar18);
      uVar21 = FUN_08000ad8(uVar21,uVar24);
      uVar24 = FUN_08000cec(uVar15,uVar18);
      uVar21 = FUN_08000adc(uVar21,uVar24);
      uVar24 = FUN_08000cec(iVar8,uVar2);
      uVar24 = FUN_08000cec(uVar24,uVar29);
      uVar21 = FUN_08000adc(uVar21,uVar24);
      uVar24 = FUN_08000cec(uVar16,uVar18);
      uVar21 = FUN_08000ad8(uVar21,uVar24);
      uVar23 = FUN_08000cec(uVar23,uVar23);
      uVar21 = FUN_08000cec(uVar21,uVar21);
      FUN_08000adc(uVar23,uVar21);
      FUN_08000428();
      FUN_08005bc8();
      iVar26 = FUN_08000a30();
      uVar21 = FUN_08000cec(iVar19 + -0x80000000,uVar28);
      uVar20 = FUN_08000cec(iVar30,uVar20);
      uVar20 = FUN_08000adc(uVar21,uVar20);
      uVar10 = FUN_08000cec(uVar10,uVar2);
      uVar10 = FUN_08000adc(uVar20,uVar10);
      uVar20 = FUN_08000cec(uVar29,uVar22);
      uVar10 = FUN_08000adc(uVar10,uVar20);
      uVar20 = FUN_08000cec(uVar13,uVar2);
      uVar10 = FUN_08000ad8(uVar10,uVar20);
      uVar20 = FUN_08000cec(iVar8,uVar18);
      uVar20 = FUN_08000cec(uVar20,uVar29);
      uVar10 = FUN_08000adc(uVar10,uVar20);
      uVar20 = FUN_08000cec(uVar15,uVar2);
      uVar10 = FUN_08000ad8(uVar10,uVar20);
      uVar20 = FUN_08000cec(uVar16,uVar2);
      uVar10 = FUN_08000adc(uVar10,uVar20);
      uVar20 = FUN_08000adc(uVar10,uVar10);
      uVar21 = FUN_08000adc(uVar14);
      uVar22 = FUN_08000cec(uVar28,iVar3);
      uVar21 = FUN_08000ad8(uVar21,uVar22);
      uVar22 = FUN_08000cec(param_1,uVar1);
      uVar21 = FUN_08000ad8(uVar21,uVar22);
      uVar22 = FUN_08000cec(uVar29,iVar8);
      uVar23 = FUN_08000adc(uVar11);
      uVar22 = FUN_08000adc(uVar22,uVar23);
      uVar23 = FUN_08000cec(param_2,uVar1);
      uVar22 = FUN_08000ad8(uVar22,uVar23);
      uVar23 = FUN_08000cec(uVar28,uVar10);
      uVar24 = FUN_08000ad8(0x3f000000,uVar15);
      uVar16 = FUN_08000ad8(uVar24,uVar16);
      uVar16 = FUN_08000cec(uVar16,iVar26);
      uVar24 = FUN_08000ad8(uVar14,uVar12);
      uVar24 = FUN_08000cec(uVar24,uVar10);
      uVar16 = FUN_08000adc(uVar16,uVar24);
      uVar16 = FUN_08000ad8(uVar16,uVar17);
      uVar17 = FUN_08000cec(iVar30,uVar10);
      uVar24 = FUN_08000cec(iVar30,uVar28);
      uVar25 = FUN_08000cec(uVar27,uVar29);
      uVar24 = FUN_08000ad8(uVar24,uVar25);
      uVar24 = FUN_08000cec(uVar24,iVar26);
      uVar25 = FUN_08000cec(uVar28,uVar29);
      uVar11 = FUN_08000adc(uVar25,uVar11);
      uVar11 = FUN_08000cec(uVar11,uVar10);
      uVar11 = FUN_08000adc(uVar24,uVar11);
      uVar11 = FUN_08000ad8(uVar11,uVar18);
      uVar18 = FUN_08000cec(uVar28,iVar26);
      uVar24 = FUN_08000ad8(0x3f000000,uVar13);
      uVar24 = FUN_08000ad8(uVar24,uVar15);
      uVar24 = FUN_08000cec(uVar24,uVar10);
      uVar12 = FUN_08000adc(uVar12,uVar14);
      uVar12 = FUN_08000cec(uVar12,iVar26);
      uVar12 = FUN_08000adc(uVar24,uVar12);
      uVar2 = FUN_08000ad8(uVar12,uVar2);
      uVar12 = FUN_08000cec(iVar8 + -0x80000000,uVar21);
      uVar14 = FUN_08000cec(uVar7,uVar22);
      uVar12 = FUN_08000adc(uVar12,uVar14);
      uVar14 = FUN_08000cec(uVar23,uVar16);
      uVar12 = FUN_08000ad8(uVar12,uVar14);
      uVar14 = FUN_08000cec(uVar29,iVar26 + -0x80000000);
      uVar14 = FUN_08000adc(uVar14,uVar17);
      uVar14 = FUN_08000cec(uVar14,uVar11);
      uVar12 = FUN_08000adc(uVar12,uVar14);
      uVar14 = FUN_08000cec(uVar18,uVar2);
      uVar12 = FUN_08000adc(uVar12,uVar14);
      uVar13 = FUN_08000adc(uVar13);
      uVar13 = FUN_08000ad8(0x3f800000,uVar13);
      uVar14 = FUN_08000adc(uVar15);
      uVar13 = FUN_08000ad8(uVar13,uVar14);
      uVar1 = FUN_08000cec(param_3,uVar1);
      uVar1 = FUN_08000ad8(uVar13,uVar1);
      uVar13 = FUN_08000cec(uVar29,uVar10);
      uVar10 = FUN_08000cec(uVar27,uVar10);
      uVar14 = FUN_08000cec(uVar9,uVar21);
      uVar15 = FUN_08000cec(iVar3,uVar22);
      uVar14 = FUN_08000adc(uVar14,uVar15);
      uVar15 = FUN_08000cec(iVar30,0x40800000);
      uVar15 = FUN_08000cec(uVar15,uVar1);
      uVar14 = FUN_08000ad8(uVar14,uVar15);
      uVar15 = FUN_08000cec(uVar16,uVar13);
      uVar14 = FUN_08000adc(uVar14,uVar15);
      uVar15 = FUN_08000adc(uVar18,uVar10);
      uVar15 = FUN_08000cec(uVar15,uVar11);
      uVar14 = FUN_08000adc(uVar14,uVar15);
      uVar15 = FUN_08000cec(uVar29,iVar26);
      uVar18 = FUN_08000cec(iVar30,uVar20);
      uVar15 = FUN_08000ad8(uVar15,uVar18);
      uVar15 = FUN_08000cec(uVar15,uVar2);
      uVar14 = FUN_08000adc(uVar14,uVar15);
      iVar19 = FUN_08000adc(iVar26,iVar26);
      uVar15 = FUN_08000cec(iVar30,iVar26);
      uVar18 = FUN_08000cec(iVar3 + -0x80000000,uVar21);
      uVar9 = FUN_08000cec(uVar9,uVar22);
      uVar9 = FUN_08000adc(uVar18,uVar9);
      uVar18 = FUN_08000cec(uVar28,0x40800000);
      uVar1 = FUN_08000cec(uVar18,uVar1);
      uVar1 = FUN_08000ad8(uVar9,uVar1);
      uVar9 = FUN_08000cec(uVar28,iVar19 + -0x80000000);
      uVar9 = FUN_08000ad8(uVar9,uVar10);
      uVar9 = FUN_08000cec(uVar9,uVar16);
      uVar1 = FUN_08000adc(uVar1,uVar9);
      uVar9 = FUN_08000adc(uVar13,uVar15);
      uVar9 = FUN_08000cec(uVar9,uVar11);
      uVar1 = FUN_08000adc(uVar1,uVar9);
      uVar9 = FUN_08000cec(uVar27,iVar26);
      uVar10 = FUN_08000cec(uVar28,uVar20);
      uVar9 = FUN_08000ad8(uVar9,uVar10);
      uVar9 = FUN_08000cec(uVar9,uVar2);
      uVar9 = FUN_08000adc(uVar1,uVar9);
      uVar1 = FUN_08000cec(uVar7,uVar21);
      uVar7 = FUN_08000cec(iVar8,uVar22);
      uVar1 = FUN_08000adc(uVar1,uVar7);
      uVar7 = FUN_08000cec(uVar29,iVar19 + -0x80000000);
      uVar7 = FUN_08000adc(uVar7,uVar17);
      uVar7 = FUN_08000cec(uVar7,uVar16);
      uVar1 = FUN_08000adc(uVar1,uVar7);
      uVar7 = FUN_08000cec(uVar27,iVar26 + -0x80000000);
      uVar7 = FUN_08000adc(uVar7,uVar23);
      uVar7 = FUN_08000cec(uVar7,uVar11);
      uVar1 = FUN_08000adc(uVar1,uVar7);
      uVar2 = FUN_08000cec(uVar2,uVar15);
      uVar7 = FUN_08000adc(uVar1,uVar2);
      uVar1 = FUN_08000cec(uVar12);
      uVar2 = FUN_08000cec(uVar14);
      uVar1 = FUN_08000adc(uVar1,uVar2);
      uVar2 = FUN_08000cec(uVar9,uVar9);
      uVar1 = FUN_08000adc(uVar1,uVar2);
      uVar2 = FUN_08000cec(uVar7,uVar7);
      FUN_08000adc(uVar1,uVar2);
      FUN_08000428();
      FUN_08005bc8();
      uVar1 = FUN_08000a30();
      uVar10 = FUN_08000e54(0x3f800000,uVar1);
      uVar1 = DAT_2000035c;
      uVar2 = FUN_08000cec(iVar30 + -0x80000000,uVar4);
      uVar11 = FUN_08000cec(uVar28,uVar5);
      uVar2 = FUN_08000ad8(uVar2,uVar11);
      uVar11 = FUN_08000cec(uVar29,uVar6);
      uVar2 = FUN_08000ad8(uVar2,uVar11);
      uVar11 = FUN_08000cec(uVar2,0x3f000000);
      uVar12 = FUN_08000cec(uVar12,uVar10);
      uVar2 = DAT_20000360;
      uVar12 = FUN_08000cec(uVar12,uVar1);
      uVar11 = FUN_08000ad8(uVar11,uVar12);
      uVar2 = FUN_08000cec(uVar11,uVar2);
      uVar11 = FUN_08000adc(uVar2,uVar27);
      uVar12 = FUN_08000cec(uVar27,uVar4);
      uVar13 = FUN_08000cec(uVar28,uVar6);
      uVar2 = DAT_20000360;
      uVar12 = FUN_08000adc(uVar12,uVar13);
      uVar13 = FUN_08000cec(uVar29,uVar5);
      uVar12 = FUN_08000ad8(uVar12,uVar13);
      uVar12 = FUN_08000cec(uVar12,0x3f000000);
      uVar13 = FUN_08000cec(uVar14,uVar10);
      uVar13 = FUN_08000cec(uVar13,uVar1);
      uVar12 = FUN_08000ad8(uVar12,uVar13);
      uVar2 = FUN_08000cec(uVar12,uVar2);
      uVar12 = FUN_08000adc(uVar2,iVar30);
      uVar2 = DAT_20000360;
      uVar13 = FUN_08000cec(uVar27,uVar5);
      uVar14 = FUN_08000cec(iVar30,uVar6);
      uVar13 = FUN_08000ad8(uVar13,uVar14);
      uVar14 = FUN_08000cec(uVar29,uVar4);
      uVar13 = FUN_08000adc(uVar13,uVar14);
      uVar13 = FUN_08000cec(uVar13,0x3f000000);
      uVar9 = FUN_08000cec(uVar9,uVar10);
      uVar9 = FUN_08000cec(uVar9,uVar1);
      uVar9 = FUN_08000ad8(uVar13,uVar9);
      uVar2 = FUN_08000cec(uVar9,uVar2);
      uVar2 = FUN_08000adc(uVar2,uVar28);
      uVar27 = FUN_08000cec(uVar27,uVar6);
      uVar5 = FUN_08000cec(iVar30,uVar5);
      uVar27 = FUN_08000adc(uVar27,uVar5);
      uVar28 = FUN_08000cec(uVar28,uVar4);
      uVar27 = FUN_08000ad8(uVar27,uVar28);
      uVar28 = FUN_08000cec(uVar27,0x3f000000);
      uVar27 = FUN_08000cec(uVar7,uVar10);
      uVar1 = FUN_08000cec(uVar27,uVar1);
      uVar27 = DAT_20000360;
      uVar28 = FUN_08000ad8(uVar28,uVar1);
      uVar27 = FUN_08000cec(uVar28,uVar27);
      uVar27 = FUN_08000adc(uVar27,uVar29);
      uVar28 = FUN_08000cec(uVar11,uVar11);
      uVar29 = FUN_08000cec(uVar12,uVar12);
      uVar28 = FUN_08000adc(uVar28,uVar29);
      uVar29 = FUN_08000cec(uVar2,uVar2);
      uVar28 = FUN_08000adc(uVar28,uVar29);
      uVar29 = FUN_08000cec(uVar27,uVar27);
      FUN_08000adc(uVar28,uVar29);
      FUN_08000428();
      FUN_08005bc8();
      uVar28 = FUN_08000a30();
      uVar28 = FUN_08000e54(0x3f800000,uVar28);
      uVar29 = FUN_08000cec(uVar11,uVar28);
      DAT_2000003c = uVar29;
      iVar30 = FUN_08000cec(uVar12,uVar28);
      DAT_20000040 = iVar30;
      uVar1 = FUN_08000cec(uVar2,uVar28);
      DAT_20000044 = uVar1;
      DAT_20000048 = FUN_08000cec(uVar27,uVar28);
      uVar27 = FUN_08000cec(iVar30,DAT_20000048);
      uVar28 = FUN_08000cec(uVar29,uVar1);
      uVar27 = FUN_08000ad8(uVar27,uVar28);
      FUN_08000adc(uVar27,uVar27);
      FUN_08000428();
      uVar31 = FUN_08005854();
      uVar31 = FUN_080004d0((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),0,0x40668000);
      FUN_08000724((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),0x54442d18,0x400921fb);
      uVar27 = FUN_08000a30();
      *param_10 = uVar27;
      iVar30 = DAT_20000040;
      uVar27 = DAT_2000003c;
      uVar28 = FUN_08000cec(DAT_2000003c,DAT_2000003c);
      uVar29 = FUN_08000cec(iVar30,iVar30);
      uVar29 = FUN_08000ad8(uVar28,uVar29);
      uVar28 = DAT_20000044;
      uVar1 = FUN_08000cec(DAT_20000044,DAT_20000044);
      uVar1 = FUN_08000ad8(uVar29,uVar1);
      uVar29 = DAT_20000048;
      uVar2 = FUN_08000cec(DAT_20000048,DAT_20000048);
      FUN_08000adc(uVar1,uVar2);
      uVar31 = FUN_08000428();
      uVar27 = FUN_08000cec(uVar27,iVar30);
      uVar28 = FUN_08000cec(uVar28,uVar29);
      uVar27 = FUN_08000adc(uVar27,uVar28);
      FUN_08000adc(uVar27,uVar27);
      uVar32 = FUN_08000428();
      uVar31 = thunk_FUN_08006070((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),(int)uVar31,
                                  (int)((ulonglong)uVar31 >> 0x20));
      uVar31 = FUN_080004d0((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),0,0x40668000);
      FUN_08000724((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),0x54442d18,0x400921fb);
      uVar27 = FUN_08000a30();
      param_10[1] = uVar27;
      iVar30 = DAT_20000040;
      uVar27 = DAT_2000003c;
      uVar28 = FUN_08000cec(DAT_2000003c,DAT_2000003c);
      uVar29 = FUN_08000cec(iVar30,iVar30);
      uVar29 = FUN_08000adc(uVar28,uVar29);
      uVar28 = DAT_20000044;
      uVar1 = FUN_08000cec(DAT_20000044,DAT_20000044);
      uVar1 = FUN_08000ad8(uVar29,uVar1);
      uVar29 = DAT_20000048;
      uVar2 = FUN_08000cec(DAT_20000048,DAT_20000048);
      FUN_08000ad8(uVar1,uVar2);
      uVar31 = FUN_08000428();
      uVar28 = FUN_08000cec(iVar30,uVar28);
      uVar27 = FUN_08000cec(uVar27,uVar29);
      uVar27 = FUN_08000adc(uVar28,uVar27);
      FUN_08000adc(uVar27,uVar27);
      uVar32 = FUN_08000428();
      uVar31 = thunk_FUN_08006070((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),(int)uVar31,
                                  (int)((ulonglong)uVar31 >> 0x20));
      uVar31 = FUN_080004d0((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),0,0x40668000);
      FUN_08000724((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),0x54442d18,0x400921fb);
      uVar27 = FUN_08000a30();
      param_10[2] = uVar27;
    }
  }
  return;
}


////>>0x08003eb0>>FUN_08003eb0>>////

longlong FUN_08003eb0(uint param_1)

{
  if (DAT_20000280 == 0) {
    software_interrupt(0x3f);
    return CONCAT44(param_1,1);
  }
  return (ulonglong)param_1 << 0x20;
}


////>>0x08003ec8>>FUN_08003ec8>>////

undefined4 FUN_08003ec8(int param_1,undefined param_2)

{
  *(short *)(param_1 + 0x804) = *(short *)(param_1 + 0x804) + 1;
  *(undefined *)(param_1 + (uint)*(ushort *)(param_1 + 0x802)) = param_2;
  *(ushort *)(param_1 + 0x802) = *(short *)(param_1 + 0x802) + 1U & 0x7ff;
  return 1;
}


////>>0x08003f3c>>FUN_08003f3c>>////

void FUN_08003f3c(int param_1,int param_2,int param_3)

{
  FUN_08001424(0x40011000,0x8000,param_1 == 0);
  FUN_08001424(0x40011000,0x4000,param_2 == 0);
  FUN_08001424(0x40011000,0x2000,param_3 == 0);
  return;
}


////>>0x08003fc4>>FUN_08003fc4>>////

void FUN_08003fc4(undefined4 param_1)

{
  *(undefined4 *)(DAT_200014c8 + 0x40) = param_1;
  return;
}


////>>0x08003fd0>>FUN_08003fd0>>////

void FUN_08003fd0(undefined4 param_1)

{
  *(undefined4 *)(DAT_200014c8 + 0x3c) = param_1;
  return;
}


////>>0x08003fdc>>FUN_08003fdc>>////

void FUN_08003fdc(undefined4 param_1)

{
  *(undefined4 *)(DAT_200015f8 + 0x38) = param_1;
  return;
}


////>>0x08003fe8>>FUN_08003fe8>>////

void FUN_08003fe8(undefined4 param_1)

{
  *(undefined4 *)(DAT_20001540 + 0x3c) = param_1;
  return;
}


////>>0x08003ff4>>FUN_08003ff4>>////

void FUN_08003ff4(void)

{
  FUN_08002538(&DAT_200015f8,4);
  FUN_08002538(&DAT_20001540,8);
  FUN_08002538(&DAT_200014c8,8);
  FUN_08002538(&DAT_200014c8,0xc);
  return;
}


////>>0x08004028>>FUN_08004028>>////

void FUN_08004028(void)

{
  int iVar1;
  
  FUN_0800458c();
  FUN_08003ff4();
  iVar1 = 3;
  do {
    FUN_08003f3c(1,0);
    thunk_FUN_08001168(100);
    FUN_08003f3c(0,1);
    thunk_FUN_08001168(100);
    FUN_08003f3c(0,0,1);
    thunk_FUN_08001168(100);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_08003f3c(1,1);
  return;
}


////>>0x0800403c>>FUN_0800403c>>////

void FUN_0800403c(undefined4 param_1,undefined4 param_2,undefined param_3,int param_4)

{
  int iVar1;
  undefined local_14 [8];
  
  local_14[0] = param_3;
  iVar1 = FUN_08001828(&DAT_20001504,param_1,param_2,1,local_14,1,200);
  if (iVar1 != 0) {
    FUN_08004490("../Src/i2c.c",0x1b);
  }
  if (param_4 != 0) {
    thunk_FUN_08001168(0x32);
  }
  return;
}


////>>0x0800407c>>FUN_0800407c>>////

undefined FUN_0800407c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined local_14 [8];
  
  local_14[0] = 0;
  iVar1 = FUN_08001938(&DAT_20001504,param_1,param_2,1,local_14,1,200);
  if (iVar1 != 0) {
    FUN_08004490(param_3,param_4);
  }
  return local_14[0];
}


////>>0x080040b8>>FUN_080040b8>>////

void FUN_080040b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_08001938(&DAT_20001504,param_1,param_2,1,param_3,param_4,200,param_4);
  if (iVar1 != 0) {
    FUN_08004490(param_5,param_6);
    return;
  }
  return;
}


////>>0x080040e8>>FUN_080040e8>>////

void FUN_080040e8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = (undefined *)(param_3 + -1);
  iVar4 = param_4;
  for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
    uVar1 = FUN_0800407c(param_1,param_2 + iVar2 & 0xffff,"../Src/i2c.c",0x4c,iVar4);
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
  }
  return;
}


////>>0x0800411c>>FUN_0800411c>>////

void FUN_0800411c(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 unaff_r4;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined8 uVar17;
  
  iVar8 = thunk_FUN_0800115c();
  if (1 < (uint)(iVar8 - DAT_2000028c)) {
    DAT_2000028c = thunk_FUN_0800115c();
    FUN_08002f28();
  }
  iVar8 = thunk_FUN_0800115c();
  if (2 < (uint)(iVar8 - DAT_20000294)) {
    DAT_20000294 = thunk_FUN_0800115c();
    FUN_08004a84();
  }
  iVar8 = thunk_FUN_0800115c();
  if (3 < (uint)(iVar8 - DAT_20000290)) {
    DAT_20000290 = thunk_FUN_0800115c();
    FUN_08004348();
    FUN_08004384();
    FUN_080043f0();
    FUN_08004410();
    FUN_08004434();
    FUN_080043bc();
    FUN_08004458();
  }
  if ((DAT_20000275 != '\0') && (DAT_20000274 != '\0')) {
    iVar15 = DAT_20000270 + (uint)DAT_20000266 * -0x100;
    uVar9 = (uint)((longlong)(int)(uint)DAT_20000268 * (longlong)iVar15) >> 0x17 |
            (int)((ulonglong)((longlong)(int)(uint)DAT_20000268 * (longlong)iVar15) >> 0x20) << 9;
    uVar10 = (uint)((longlong)(int)(uint)DAT_20000264 * (longlong)iVar15 >> 7);
    uVar11 = uVar10 + (uint)DAT_20000260 * 0x10000;
    uVar4 = (uint)((ulonglong)((longlong)(int)(uint)DAT_20000262 * (longlong)iVar15) >> 8);
    iVar8 = uVar9 + 2000;
    uVar5 = uVar4 + (uint)DAT_2000025e * 0x8000;
    bVar16 = (int)uVar9 < 0;
    if (1999 < iVar8) {
      uVar9 = 0;
    }
    uVar3 = uVar9;
    if (bVar16 != SBORROW4(iVar8,2000)) {
      iVar14 = uVar9 * uVar9 * 5;
      uVar9 = iVar14 >> 2;
      uVar3 = iVar14 >> 1;
    }
    uVar12 = uVar11 - uVar3;
    lVar2 = (ulonglong)(uVar5 - uVar9) * (ulonglong)DAT_2000026c;
    iVar14 = DAT_2000026c *
             ((((int)((longlong)(int)(uint)DAT_20000262 * (longlong)iVar15 >> 0x28) +
               (uint)CARRY4(uVar4,(uint)DAT_2000025e * 0x8000)) - ((int)uVar9 >> 0x1f)) -
             (uint)(uVar5 < uVar9)) + (int)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2 >> 0x15 | iVar14 * 0x800;
    uVar6 = FUN_08000c44(uVar4 - uVar12 >> 0xf |
                         (((iVar14 >> 0x15) -
                          ((((int)((longlong)(int)(uint)DAT_20000264 * (longlong)iVar15 >> 0x27) +
                            (uint)CARRY4(uVar10,(uint)DAT_20000260 * 0x10000)) -
                           ((int)uVar3 >> 0x1f)) - (uint)(uVar11 < uVar3))) - (uint)(uVar4 < uVar12)
                         ) * 0x20000);
    uVar6 = FUN_08000e54(uVar6,0x42c80000);
    DAT_20000354 = uVar6;
    uVar7 = FUN_08000c44(iVar8);
    DAT_20000358 = FUN_08000e54(uVar7,0x42c80000);
    FUN_08000e54(uVar6,0x447d5000);
    uVar17 = FUN_08000428();
    uVar17 = FUN_08005900((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0x60000000,0x3fc85b95);
    uVar17 = FUN_08000168(0,0x3ff00000,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    FUN_080004d0((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),0,0x40e5a540);
    uVar6 = FUN_08000a30();
    uVar7 = 0;
    puVar13 = &DAT_20000300;
    DAT_20000350 = uVar6;
    do {
      puVar1 = puVar13 + 1;
      *puVar13 = *puVar1;
      uVar7 = FUN_08000adc(uVar7);
      puVar13 = puVar1;
    } while (puVar1 != &DAT_2000034c);
    DAT_2000034c = uVar6;
    uVar6 = FUN_08000adc(uVar7,uVar6);
    DAT_200002fc = FUN_08000e54(uVar6,0x41a00000);
    iVar8 = FUN_08001078();
    DAT_200014ab = iVar8 * 100;
    DAT_20000275 = '\0';
    DAT_20000274 = '\0';
    FUN_0800403c(0xee,DAT_20000038 + 0x50,1);
    DAT_2000027c = thunk_FUN_0800115c();
  }
  iVar8 = thunk_FUN_0800115c();
  if (((10 < (uint)(iVar8 - DAT_2000027c)) && (DAT_20000275 == '\0')) && (DAT_20000274 == '\0')) {
    DAT_20000270 = FUN_08003034();
    DAT_20000275 = '\x01';
    FUN_0800403c(0xee,DAT_20000038 + 0x40,1,0,unaff_r4);
    DAT_20000278 = thunk_FUN_0800115c();
  }
  iVar8 = thunk_FUN_0800115c();
  if (((10 < (uint)(iVar8 - DAT_20000278)) && (DAT_20000275 != '\0')) && (DAT_20000274 == '\0')) {
    DAT_2000026c = FUN_08003034();
    DAT_20000274 = '\x01';
  }
  return;
}


////>>0x08004194>>FUN_08004194>>////

void FUN_08004194(void)

{
  FUN_08004028();
  FUN_08004c70();
  FUN_08002ea0();
  FUN_08003298();
  DAT_200000f4 = 1;
  DAT_20000150 = 1;
  DAT_200001ac = 0xffffffff;
  DAT_20000098 = 1;
  DAT_200000c8 = 0x44bb8000;
  DAT_20000124 = 0x44b54000;
  DAT_20000180 = 0x44fa0000;
  DAT_2000006c = 0;
  DAT_200000ac = 0x408ccccd;
  DAT_200000b0 = 0x3ca3d70a;
  DAT_200000b4 = 0x438c0000;
  DAT_200000b8 = 0x40900000;
  DAT_200000bc = 0x3ca3d70a;
  DAT_200000c0 = 0x43b40000;
  DAT_20000108 = 0x40733333;
  DAT_2000010c = 0x3ca3d70a;
  DAT_20000110 = 0x43820000;
  DAT_20000114 = 0x40733333;
  DAT_20000118 = 0x3ca3d70a;
  DAT_2000011c = 0x43a00000;
  DAT_20000164 = 0x40400000;
  DAT_20000168 = 0x3c23d70a;
  DAT_2000016c = 0x438c0000;
  DAT_20000170 = 0;
  DAT_20000174 = 0;
  DAT_20000178 = 0;
  DAT_20000050 = 0x41200000;
  DAT_20000054 = 0;
  DAT_20000058 = 0;
  DAT_2000005c = 0;
  DAT_20000060 = 0;
  DAT_20000064 = 0;
  return;
}


////>>0x080041ae>>FUN_080041ae>>////

void FUN_080041ae(void)

{
  FUN_08003eb0(0);
  FUN_08004194();
  do {
    FUN_0800114c();
    FUN_0800411c();
  } while( true );
}


////>>0x080041c4>>FUN_080041c4>>////

void FUN_080041c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  
  FUN_08003fc4(0);
  FUN_08003fd0(0);
  FUN_08003fdc(0);
  FUN_08003fe8(0,extraout_r1,param_3,param_4);
  return;
}


////>>0x0800426c>>FUN_0800426c>>////



void FUN_0800426c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = FUN_08000ad8();
  uVar2 = FUN_08000adc(param_1,param_2);
  uVar3 = FUN_08000ad8(uVar1,param_3);
  uVar3 = FUN_08000adc(uVar3,param_4);
  FUN_08000ad8(uVar3,0x447a0000);
  uVar4 = FUN_08001078();
  uVar3 = FUN_08000ad8(uVar2,param_3);
  uVar3 = FUN_08000ad8(uVar3,param_4);
  FUN_08000ad8(uVar3,0x447a0000);
  uVar5 = FUN_08001078();
  uVar1 = FUN_08000adc(uVar1,param_3);
  uVar1 = FUN_08000ad8(uVar1,param_4);
  FUN_08000ad8(uVar1,0x447a0000);
  uVar6 = FUN_08001078();
  uVar1 = FUN_08000adc(param_3,uVar2);
  uVar1 = FUN_08000adc(uVar1,param_4);
  FUN_08000ad8(uVar1,0x447a0000);
  uVar7 = FUN_08001078();
  if (999 < (int)uVar7) {
    uVar7 = 1000;
  }
  if (999 < (int)uVar6) {
    uVar6 = 1000;
  }
  if (999 < (int)uVar5) {
    uVar5 = 1000;
  }
  if (999 < (int)uVar4) {
    uVar4 = 1000;
  }
  DAT_200002a0 = uVar5 & ~((int)uVar5 >> 0x1f);
  DAT_200002a4 = uVar4 & ~((int)uVar4 >> 0x1f);
  DAT_2000029c = uVar6 & ~((int)uVar6 >> 0x1f);
  DAT_20000298 = uVar7 & ~((int)uVar7 >> 0x1f);
  FUN_08003fc4();
  FUN_08003fd0(DAT_2000029c);
  FUN_08003fdc(DAT_200002a0);
  FUN_08003fe8(DAT_200002a4);
  _DAT_200013dd = (short)DAT_20000298 + 1000;
  DAT_200013df = (short)DAT_2000029c + 1000;
  _DAT_200013e1 = (short)DAT_200002a0 + 1000;
  DAT_200013e3 = (short)DAT_200002a4 + 1000;
  return;
}


////>>0x08004300>>FUN_08004300>>////

void FUN_08004300(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  FUN_08004c8c(&DAT_0800732e);
  FUN_08004c18(param_3 & 0xff);
  uVar1 = param_3 & 0xff ^ param_1;
  FUN_08004c18(param_1);
  for (pbVar2 = param_2; (int)pbVar2 - (int)param_2 < (int)param_3; pbVar2 = pbVar2 + 1) {
    FUN_08004c18(*pbVar2);
    uVar1 = uVar1 ^ *pbVar2;
  }
  FUN_08004c18(uVar1);
  return;
}


////>>0x08004348>>FUN_08004348>>////



void FUN_08004348(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 local_10;
  uint local_c;
  undefined4 uStack_8;
  
  _DAT_20001423 = 0x40003e9;
  _DAT_20001427 = 0;
  DAT_20001429 = 0;
  local_10 = 0x40003e9;
  local_c = param_2 & 0xff000000;
  uStack_8 = param_3;
  FUN_08004300(100,&local_10,7);
  return;
}


////>>0x08004384>>FUN_08004384>>////



void FUN_08004384(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 local_14;
  undefined4 uStack_10;
  uint local_c;
  
  _DAT_200013bd = 0x2a0007;
  local_14 = DAT_200013b9;
  uStack_10 = 0x2a0007;
  _DAT_200013c1 = 0;
  DAT_200013c3 = 0;
  local_c = param_4 & 0xff000000;
  FUN_08004300(0x65,&local_14,0xb,0,param_1);
  return;
}


////>>0x080043bc>>FUN_080043bc>>////

void FUN_080043bc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_24 [2];
  undefined2 local_1c [6];
  
  puVar4 = (undefined4 *)&DAT_2000142a;
  puVar3 = local_24;
  do {
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    puVar4 = puVar4 + 2;
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    puVar3 = puVar3 + 2;
  } while (puVar4 != (undefined4 *)&DAT_2000143a);
  *(undefined2 *)puVar3 = DAT_2000143a;
  FUN_08004300(0x66,local_24,0x12);
  return;
}


////>>0x080043f0>>FUN_080043f0>>////



void FUN_080043f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  local_10 = _DAT_200013dd;
  uStack_c = _DAT_200013e1;
  auStack_8[0] = param_3;
  FUN_08004300(0x68,&local_10,8,auStack_8);
  return;
}


////>>0x08004410>>FUN_08004410>>////

void FUN_08004410(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_10 = DAT_20001395;
  local_c = CONCAT22((short)((uint)param_2 >> 0x10),DAT_20001399);
  uStack_8 = param_3;
  FUN_08004300(0x6c,&local_10,6);
  return;
}


////>>0x08004434>>FUN_08004434>>////

void FUN_08004434(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_10 = DAT_200014ab;
  local_c = CONCAT22((short)((uint)param_2 >> 0x10),DAT_200014af);
  uStack_8 = param_3;
  FUN_08004300(0x6d,&local_10,6);
  return;
}


////>>0x08004458>>FUN_08004458>>////

void FUN_08004458(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_30 [3];
  undefined2 local_24 [10];
  
  puVar1 = local_30;
  puVar2 = &DAT_2000139b;
  do {
    puVar5 = puVar2;
    puVar4 = puVar1;
    uVar3 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar3;
    puVar1 = puVar4 + 2;
    puVar2 = puVar5 + 2;
  } while (puVar5 + 2 != (undefined4 *)0x200013b3);
  puVar4[2] = uRam200013b3;
  *(undefined2 *)(puVar4 + 3) = *(undefined2 *)(puVar5 + 3);
  FUN_08004300(0x70,local_30,0x1e);
  return;
}


////>>0x08004490>>FUN_08004490>>////

void FUN_08004490(undefined4 param_1,undefined4 param_2)

{
  FUN_08001424(0x40011000,0x4000,1);
  FUN_08001424(0x40011000,0x8000,0);
  FUN_08001424(0x40011000,0x2000,0);
  do {
    FUN_0800142e(0x40011000,0x4000);
    FUN_0800142e(0x40011000,0x8000);
    FUN_0800142e(0x40011000,0x2000);
    FUN_08004c8c("Error with ");
    FUN_08004c8c(param_1);
    FUN_08004c8c(" at line: ");
    FUN_08004cac(param_2);
    FUN_08004c18(10);
    thunk_FUN_08001168(500);
  } while( true );
}


////>>0x08004514>>FUN_08004514>>////

void FUN_08004514(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 1;
  local_1c = 0x10;
  iVar4 = 2;
  local_10 = 0;
  local_30[0] = 2;
  local_14 = 2;
  local_c = 0x380000;
  iVar1 = FUN_08001b58(local_30);
  if (iVar1 == 0) goto LAB_08004540;
  uVar3 = 0x3c;
  while( true ) {
    iVar1 = FUN_08004490("../Src/peripherals.c",uVar3);
LAB_08004540:
    local_44 = 0xf;
    local_38 = 0x400;
    local_40 = iVar4;
    local_3c = iVar1;
    local_34 = iVar1;
    iVar4 = FUN_0800209c(&local_44,iVar4);
    if (iVar4 == 0) break;
    uVar3 = 0x49;
  }
  uVar2 = FUN_08002214();
  FUN_08001214(uVar2 / 1000);
  FUN_08001240(4);
  FUN_08001194(0xffffffff,0,0);
  return;
}


////>>0x0800458c>>FUN_0800458c>>////



void FUN_0800458c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  FUN_08001128();
  FUN_08004514();
  iVar3 = 2;
  _DAT_40021018 = _DAT_40021018 | 0x1c;
  FUN_08001424(0x40011000,0xe000,0,_DAT_40021018 & 8);
  FUN_08001424(0x40010800,0x20,0);
  local_34 = 0xe000;
  local_30 = 1;
  local_28 = 2;
  FUN_08001264(0x40011000,&local_34);
  local_34 = 0x20;
  local_30 = 1;
  local_28 = 2;
  FUN_08001264(0x40010800,&local_34);
  DAT_20001504 = 0x40005400;
  DAT_20001508 = 400000;
  DAT_20001514 = 0x4000;
  DAT_2000150c = 0;
  DAT_20001510 = 0;
  DAT_20001518 = 0;
  DAT_2000151c = 0;
  DAT_20001520 = 0;
  DAT_20001524 = 0;
  iVar1 = FUN_08001754();
  if (iVar1 == 0) goto LAB_0800463a;
  uVar2 = 0x6b;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  iVar1 = FUN_08004490("../Src/peripherals.c",uVar2);
LAB_0800463a:
                                  DAT_2000157c = 0x40013800;
                                  DAT_20001580 = 0x1c200;
                                  DAT_20001590 = 0xc;
                                  DAT_20001584 = iVar1;
                                  DAT_20001588 = iVar1;
                                  DAT_2000158c = iVar1;
                                  DAT_20001594 = iVar1;
                                  DAT_20001598 = iVar1;
                                  iVar1 = FUN_08002724(&DAT_2000157c);
                                  if (iVar1 == 0) break;
                                  uVar2 = 0x151;
                                }
                                DAT_200015bc = 0x40012c00;
                                DAT_200015c8 = 1000;
                                DAT_200015c0 = iVar3;
                                DAT_200015c4 = iVar1;
                                DAT_200015cc = iVar1;
                                DAT_200015d0 = iVar1;
                                iVar1 = FUN_080023d0(&DAT_200015bc);
                                if (iVar1 == 0) break;
                                uVar2 = 0x88;
                              }
                              local_58 = iVar1;
                              local_54 = iVar1;
                              iVar1 = FUN_080025a4(&DAT_200015bc,&local_58);
                              if (iVar1 == 0) break;
                              uVar2 = 0x8f;
                            }
                            local_50 = 0x60;
                            local_4c = iVar1;
                            local_48 = iVar1;
                            local_40 = iVar1;
                            local_3c = iVar1;
                            local_38 = iVar1;
                            iVar1 = FUN_0800245c(&DAT_200015bc,&local_50,0xc);
                            if (iVar1 == 0) break;
                            uVar2 = 0x9a;
                          }
                          local_20 = 0x2000;
                          local_34 = iVar1;
                          local_30 = iVar1;
                          local_2c = iVar1;
                          local_28 = iVar1;
                          local_24 = iVar1;
                          local_1c = iVar1;
                          iVar1 = FUN_08002564(&DAT_200015bc,&local_34);
                          if (iVar1 == 0) break;
                          uVar2 = 0xa6;
                        }
                        FUN_08004e14(&DAT_200015bc);
                        DAT_200015f8 = 0x40000000;
                        DAT_20001604 = 1000;
                        DAT_200015fc = iVar3;
                        DAT_20001600 = iVar1;
                        DAT_20001608 = iVar1;
                        iVar1 = FUN_080023d0(&DAT_200015f8);
                        if (iVar1 == 0) break;
                        uVar2 = 0xc3;
                      }
                      local_50 = iVar1;
                      local_4c = iVar1;
                      iVar1 = FUN_080025a4(&DAT_200015f8,&local_50);
                      if (iVar1 == 0) break;
                      uVar2 = 0xca;
                    }
                    local_34 = 0x60;
                    local_30 = iVar1;
                    local_2c = iVar1;
                    local_24 = iVar1;
                    iVar1 = FUN_0800245c(&DAT_200015f8,&local_34,4);
                    if (iVar1 == 0) break;
                    uVar2 = 0xd3;
                  }
                  FUN_08004e14(&DAT_200015f8);
                  DAT_2000154c = 1000;
                  DAT_20001540 = 0x40000400;
                  DAT_20001544 = iVar3;
                  DAT_20001548 = iVar1;
                  DAT_20001550 = iVar1;
                  iVar1 = FUN_080023d0();
                  if (iVar1 == 0) break;
                  uVar2 = 0xf0;
                }
                local_50 = 0;
                local_4c = 0;
                iVar1 = FUN_080025a4(&DAT_20001540,&local_50);
                if (iVar1 == 0) break;
                uVar2 = 0xf7;
              }
              local_34 = 0x60;
              local_30 = iVar1;
              local_2c = iVar1;
              local_24 = iVar1;
              iVar1 = FUN_0800245c(&DAT_20001540,&local_34,8);
              if (iVar1 == 0) break;
              uVar2 = 0x100;
            }
            iVar3 = FUN_0800245c(&DAT_20001540,&local_34,0xc);
            if (iVar3 == 0) break;
            uVar2 = 0x105;
          }
          FUN_08004e14(&DAT_20001540);
          DAT_200014c8 = 0x40000800;
          DAT_200014cc = 2;
          DAT_200014d4 = 1000;
          DAT_200014d0 = iVar3;
          DAT_200014d8 = iVar3;
          iVar1 = FUN_080023d0(&DAT_200014c8);
          if (iVar1 == 0) break;
          uVar2 = 0x122;
        }
        local_50 = iVar1;
        local_4c = iVar1;
        iVar1 = FUN_080025a4(&DAT_200014c8,&local_50);
        if (iVar1 == 0) break;
        uVar2 = 0x129;
      }
      local_34 = 0x60;
      local_30 = iVar1;
      local_2c = iVar1;
      local_24 = iVar1;
      iVar1 = FUN_0800245c(&DAT_200014c8,&local_34,8);
      if (iVar1 == 0) break;
      uVar2 = 0x132;
    }
    iVar1 = FUN_0800245c(&DAT_200014c8,&local_34,0xc);
    if (iVar1 == 0) break;
    uVar2 = 0x137;
  }
  FUN_08004e14(&DAT_200014c8);
  return;
}


////>>0x0800483c>>FUN_0800483c>>////

void FUN_0800483c(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[0xc];
  uVar1 = FUN_08000adc(param_1[7],param_1[9]);
  iVar4 = FUN_08000ad8(uVar1,iVar4);
  param_1[10] = iVar4;
  if (*param_1 == 3) {
    iVar4 = FUN_08001064(param_1[10],0);
    if (iVar4 == 0) {
      iVar4 = FUN_08001028(param_1[10],0xc3340000);
    }
    else {
      iVar4 = FUN_08001064(param_1[10],0x43340000);
    }
    if (iVar4 != 0) {
      iVar5 = param_1[10];
      uVar1 = FUN_08000cec(param_1[10],0x43b40000);
      iVar4 = FUN_08001064(param_1[10],0);
      iVar3 = param_1[10];
      if (iVar4 == 0) {
        iVar3 = iVar3 + -0x80000000;
      }
      uVar1 = FUN_08000e54(uVar1,iVar3);
      iVar4 = FUN_08000ad8(iVar5,uVar1);
      param_1[10] = iVar4;
    }
  }
  iVar5 = param_1[2];
  iVar3 = param_1[3];
  iVar4 = FUN_08000cec(param_1[1],param_1[10]);
  param_1[0xe] = iVar4;
  iVar4 = FUN_08000adc(param_1[10],param_1[0xf]);
  param_1[0xf] = iVar4;
  iVar4 = FUN_08001028(param_1[0xf],0xc3fa0000);
  if (iVar4 == 0) {
    iVar4 = FUN_08001064(param_1[0xf],0x43fa0000);
    if (iVar4 == 0) {
      iVar4 = param_1[0xf];
    }
    else {
      iVar4 = 0x43fa0000;
    }
  }
  else {
    iVar4 = -0x3c060000;
  }
  param_1[0xf] = iVar4;
  iVar4 = FUN_08000ad8(param_1[0xc],param_1[0xd]);
  param_1[0x10] = iVar4;
  iVar4 = param_1[0xe];
  uVar1 = FUN_08000cec(iVar5,param_1[0xf]);
  uVar1 = FUN_08000adc(uVar1,iVar4);
  uVar2 = FUN_08000cec(iVar3,param_1[0x10]);
  iVar4 = FUN_08000ad8(uVar1,uVar2);
  param_1[0x12] = iVar4;
  uVar1 = FUN_08000c44(param_1[0x13]);
  iVar4 = FUN_08001028(param_1[0x12],0xc3fa0000);
  if (iVar4 == 0) {
    iVar4 = FUN_08001064(param_1[0x12],0x43fa0000);
    if (iVar4 == 0) {
      iVar4 = param_1[0x12];
    }
    else {
      iVar4 = 0x43fa0000;
    }
  }
  else {
    iVar4 = -0x3c060000;
  }
  iVar4 = FUN_08000cec(iVar4,uVar1);
  param_1[0x12] = iVar4;
  param_1[0xd] = param_1[0xc];
  param_1[0xb] = param_1[10];
  param_1[0x15] = param_1[0x14];
  return;
}


////>>0x08004a30>>FUN_08004a30>>////

void FUN_08004a30(void)

{
  undefined4 uVar1;
  
  if (DAT_20000285 != '\0') {
    if (DAT_200002a8 == '\0') {
      uVar1 = FUN_08003068();
      DAT_20000068 = FUN_08000cec(uVar1,0x42c80000);
      DAT_200002a8 = '\x01';
    }
    else {
      uVar1 = FUN_08003068();
      DAT_2000007c = FUN_08000cec(uVar1,0x42c80000);
    }
  }
  if (DAT_20000285 == '\0') {
    if (DAT_200002a8 != '\0') {
      DAT_200002a8 = DAT_20000285;
    }
    DAT_20000094 = DAT_20000288;
  }
  return;
}


////>>0x08004a84>>FUN_08004a84>>////

void FUN_08004a84(void)

{
  int iVar1;
  
  DAT_200000d8 = FUN_08002ec0();
  DAT_20000134 = FUN_08002ed4();
  DAT_20000190 = FUN_08002ee8();
  FUN_08004a30();
  iVar1 = FUN_08001064(DAT_200000d8,0);
  if (iVar1 == 0) {
    iVar1 = FUN_08001028(DAT_200000d8,0xc2a00000);
  }
  else {
    iVar1 = FUN_08001064(DAT_200000d8,0x42a00000);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_08001064(DAT_20000134,0);
    if (iVar1 == 0) {
      iVar1 = FUN_08001028(DAT_20000134,0xc2a00000);
    }
    else {
      iVar1 = FUN_08001064(DAT_20000134,0x42a00000);
    }
    if (iVar1 == 0) {
      FUN_08003f3c(1,1);
      FUN_0800483c(&DAT_200000a8);
      FUN_0800483c(&DAT_20000104);
      FUN_0800483c(&DAT_20000160);
      if (DAT_20000285 != '\0') {
        FUN_0800483c(&DAT_2000004c);
        FUN_08000adc(DAT_20000094,0x44bb8000);
      }
      DAT_20000094 = DAT_20000288;
      if (DAT_20000284 == '\0') {
        FUN_080041c4();
      }
      else {
        FUN_0800426c(DAT_20000288,DAT_200000f0,DAT_2000014c,DAT_200001a8);
      }
      FUN_08000cec(DAT_200000ac,0x437f0000);
      DAT_2000139b._3_1_ = FUN_080010c4();
      FUN_08000cec(DAT_200000b0,0x437f0000);
      DAT_2000139f._0_1_ = FUN_080010c4();
      FUN_08000cec(DAT_20000108,0x437f0000);
      DAT_2000139b._0_1_ = FUN_080010c4();
      FUN_08000cec(DAT_2000010c,0x437f0000);
      DAT_2000139b._1_1_ = FUN_080010c4();
      FUN_08000cec(DAT_20000110,0x437f0000);
      DAT_2000139b._2_1_ = FUN_080010c4();
      FUN_08000cec(DAT_20000164,0x437f0000);
      DAT_2000139f._2_1_ = FUN_080010c4();
      FUN_08000cec(DAT_20000168,0x437f0000);
      DAT_2000139f._3_1_ = FUN_080010c4();
      FUN_08000cec(DAT_2000016c,0x437f0000);
      DAT_200013a3._0_1_ = FUN_080010c4();
      FUN_08000cec(DAT_20000050,0x437f0000);
      DAT_200013a3._1_1_ = FUN_080010c4();
      FUN_08000cec(DAT_20000054,0x437f0000);
      DAT_200013a3._2_1_ = FUN_080010c4();
      FUN_08000cec(DAT_20000058,0x437f0000);
      DAT_200013a3._3_1_ = FUN_080010c4();
      return;
    }
  }
  FUN_080041c4();
  FUN_08003f3c(0,1);
  return;
}


////>>0x08004c18>>FUN_08004c18>>////

/* WARNING: Removing unreachable block (ram,0x0800289e) */

undefined4 FUN_08004c18(undefined param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  
  DAT_20001636._0_1_ = param_1;
  puVar4 = &DAT_20001636;
  if (((DAT_200015b5 != '\x01') && (DAT_200015b5 != '\"')) || (DAT_200015b4 == '\x01')) {
    return 2;
  }
  DAT_200015b4 = 1;
  DAT_200015b8 = 0;
  DAT_200015a0 = 1;
  if (DAT_200015b5 == '\"') {
    DAT_200015b5 = '2';
  }
  else {
    DAT_200015b5 = '\x12';
  }
  DAT_200015a2 = 1;
LAB_080027c4:
  do {
    if (DAT_200015a2 == 0) {
      iVar2 = FUN_0800115c();
      do {
        if (*DAT_2000157c << 0x19 < 0) {
          if (DAT_200015b5 == '2') {
            DAT_200015b5 = 0x22;
          }
          else {
            DAT_200015b5 = 1;
          }
          DAT_200015b4 = 0;
          return 0;
        }
        iVar3 = FUN_0800115c();
      } while ((uint)(iVar3 - iVar2) < 6);
LAB_0800281c:
      piVar1 = DAT_2000157c;
      DAT_2000157c[3] = DAT_2000157c[3] & 0xffffff7f;
      piVar1[3] = piVar1[3] & 0xffffffdf;
      piVar1[3] = piVar1[3] & 0xfffffeff;
      piVar1[5] = piVar1[5] & 0xfffffffe;
      DAT_200015b5 = 1;
      DAT_200015b4 = 0;
      return 3;
    }
    DAT_200015a2 = DAT_200015a2 + -1;
    if (DAT_20001584 == 0x1000) {
      iVar2 = FUN_0800115c();
      while (-1 < *DAT_2000157c << 0x18) {
        iVar3 = FUN_0800115c();
        if (5 < (uint)(iVar3 - iVar2)) goto LAB_0800281c;
      }
      DAT_2000157c[1] = *puVar4 & 0x1ff;
      if (DAT_2000158c == 0) {
        puVar4 = puVar4 + 1;
        goto LAB_080027c4;
      }
    }
    else {
      iVar2 = FUN_0800115c();
      while (-1 < *DAT_2000157c << 0x18) {
        iVar3 = FUN_0800115c();
        if (5 < (uint)(iVar3 - iVar2)) goto LAB_0800281c;
      }
      DAT_2000157c[1] = (uint)*(byte *)puVar4;
    }
    puVar4 = (ushort *)((int)puVar4 + 1);
  } while( true );
}


////>>0x08004c30>>FUN_08004c30>>////

/* WARNING: Removing unreachable block (ram,0x08002902) */

int * FUN_08004c30(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0x40013800) {
    return param_1;
  }
  FUN_08003ec8(&DAT_20000364,DAT_20001634);
  iVar1 = DAT_2000157c;
  if (((DAT_200015b5 == '\x01') || (DAT_200015b5 == '\x12')) && (DAT_200015b4 != '\x01')) {
    DAT_200015b8 = 0;
    DAT_200015a8 = 1;
    DAT_200015aa = 1;
    DAT_200015b4 = 0;
    if (DAT_200015b5 == '\x12') {
      DAT_200015b5 = 0x32;
    }
    else {
      DAT_200015b5 = 0x22;
    }
    DAT_200015a4 = &DAT_20001634;
    *(uint *)(DAT_2000157c + 0xc) = *(uint *)(DAT_2000157c + 0xc) | 0x100;
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 1;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x20;
    return (int *)0x0;
  }
  return (int *)0x2;
}


////>>0x08004c64>>FUN_08004c64>>////

void FUN_08004c64(void)

{
  int iVar1;
  
  iVar1 = 0;
  DAT_20000b64 = 0;
  DAT_20000b66 = 0;
  DAT_20000b68 = 0;
  do {
    (&DAT_20000364)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x800);
  return;
}


////>>0x08004c70>>FUN_08004c70>>////

/* WARNING: Removing unreachable block (ram,0x08002902) */

undefined4 FUN_08004c70(void)

{
  int iVar1;
  
  FUN_08004c64();
  iVar1 = DAT_2000157c;
  if (((DAT_200015b5 == '\x01') || (DAT_200015b5 == '\x12')) && (DAT_200015b4 != '\x01')) {
    DAT_200015b8 = 0;
    DAT_200015a8 = 1;
    DAT_200015aa = 1;
    DAT_200015b4 = 0;
    if (DAT_200015b5 == '\x12') {
      DAT_200015b5 = 0x32;
    }
    else {
      DAT_200015b5 = 0x22;
    }
    DAT_200015a4 = &DAT_20001634;
    *(uint *)(DAT_2000157c + 0xc) = *(uint *)(DAT_2000157c + 0xc) | 0x100;
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 1;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x20;
    return 0;
  }
  return 2;
}


////>>0x08004c8c>>FUN_08004c8c>>////

void FUN_08004c8c(undefined *param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  while( true ) {
    uVar1 = FUN_08000150(param_1);
    if (uVar1 <= (uint)((int)puVar2 - (int)param_1)) break;
    FUN_08004c18(*puVar2);
    puVar2 = puVar2 + 1;
  }
  return;
}


////>>0x08004cac>>FUN_08004cac>>////

void FUN_08004cac(undefined4 param_1)

{
  FUN_08004ffc(&DAT_20001636,&DAT_0800735e,param_1);
  FUN_08004c8c(&DAT_20001636);
  return;
}


////>>0x08004ccc>>FUN_08004ccc>>////



void FUN_08004ccc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_40021018 = _DAT_40021018 | 1;
  FUN_08001170(3,param_2,_DAT_40021018,1,param_1,1,param_3);
  FUN_08001194(0xfffffff4,0);
  FUN_08001194(0xfffffff5,0);
  FUN_08001194(0xfffffff6,0);
  FUN_08001194(0xfffffffb,0);
  FUN_08001194(0xfffffffc,0);
  FUN_08001194(0xfffffffe,0);
  FUN_08001194(0xffffffff,0);
  return;
}


////>>0x08004d48>>FUN_08004d48>>////



void FUN_08004d48(int *param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (*param_1 == 0x40005400) {
    local_18 = 0xc0;
    local_14 = 0x12;
    FUN_08001264(0x40010c00,&local_18,0x40005400,3,param_1,param_2);
    _DAT_4002101c = _DAT_4002101c | 0x200000;
  }
  return;
}


////>>0x08004d8c>>FUN_08004d8c>>////


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_08004d8c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0x40012c00) {
    _DAT_40021018 = _DAT_40021018 | 0x800;
  }
  else if (iVar1 == 0x40000000) {
    _DAT_4002101c = _DAT_4002101c | 1;
  }
  else if (iVar1 == 0x40000400) {
    _DAT_4002101c = _DAT_4002101c | 2;
  }
  else if (iVar1 == 0x40000800) {
    _DAT_4002101c = _DAT_4002101c | 4;
  }
  return;
}


////>>0x08004e14>>FUN_08004e14>>////

void FUN_08004e14(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  iVar2 = *param_1;
  if (iVar2 == 0x40012c00) {
    local_18 = 0x800;
  }
  else {
    if (iVar2 != 0x40000000) {
      if (iVar2 == 0x40000400) {
        local_18 = 3;
      }
      else {
        if (iVar2 != 0x40000800) {
          return;
        }
        local_18 = 0x300;
      }
      uVar1 = 0x40010c00;
      goto LAB_08004e2e;
    }
    local_18 = 2;
  }
  uVar1 = 0x40010800;
LAB_08004e2e:
  local_c = 2;
  local_14 = 2;
  uStack_10 = param_3;
  FUN_08001264(uVar1,&local_18);
  return;
}


////>>0x08004e7c>>FUN_08004e7c>>////



void FUN_08004e7c(int *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*param_1 == 0x40013800) {
    _DAT_40021018 = _DAT_40021018 | 0x4000;
    local_18 = 0x200;
    local_14 = 2;
    local_c = 3;
    FUN_08001264(0x40010800,&local_18);
    local_18 = 0x400;
    local_14 = 0;
    local_10 = 0;
    FUN_08001264(0x40010800,&local_18);
    FUN_08001194(0x25,0,0);
    FUN_080011fc(0x25);
  }
  return;
}


////>>0x08004f10>>FUN_08004f10>>////



void FUN_08004f10(void)

{
  _DAT_40021000 = _DAT_40021000 & 0xfef2ffff | 1;
  _DAT_40021004 = _DAT_40021004 & 0xf8800000;
  _DAT_40021008 = 0x9f0000;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x08004f5c>>thunk_FUN_0800115c>>////

undefined4 thunk_FUN_0800115c(void)

{
  return DAT_20000244;
}


////>>0x08004f60>>thunk_FUN_0800115c>>////

undefined4 thunk_FUN_0800115c(void)

{
  return DAT_20000244;
}


////>>0x08004f64>>thunk_FUN_08001168>>////

void thunk_FUN_08001168(void)

{
  return;
}


////>>0x08004f68>>entry>>////

void entry(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &DAT_20000228; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(iVar1 + 0x8007448);
  }
  for (puVar2 = &DAT_20000228; puVar2 < &DAT_200016a0; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  FUN_08004f10();
  FUN_08004fb4();
  UNRECOVERED_JUMPTABLE = (code *)0x8004f9a;
  FUN_080041ae();
                    /* WARNING: Could not recover jumptable at 0x08004f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08004fb4>>FUN_08004fb4>>////

void FUN_08004fb4(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    (*(code *)(&DAT_08007440)[iVar1])();
  }
  FUN_080072d4();
  for (iVar1 = 0; iVar1 != 1; iVar1 = iVar1 + 1) {
    (*(code *)(&DAT_08007440)[iVar1])();
  }
  return;
}


////>>0x08004ffc>>FUN_08004ffc>>////

void FUN_08004ffc(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_78 [2];
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined *local_68;
  undefined4 local_64;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_6c = 0x208;
  local_70 = 0x7fffffff;
  local_64 = 0x7fffffff;
  local_6a = 0xffff;
  local_78[0] = param_1;
  local_68 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_080050fc(DAT_200001c0,local_78,param_2);
  *local_78[0] = 0;
  return;
}


////>>0x08005044>>FUN_08005044>>////

undefined4 FUN_08005044(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_2[2];
  if ((uVar3 <= param_4) && ((*(ushort *)(param_2 + 3) & 0x480) != 0)) {
    iVar4 = *param_2 - param_2[4];
    uVar3 = (uint)(param_2[5] * 3) / 2;
    uVar2 = param_4 + 1 + iVar4;
    if (uVar3 < uVar2) {
      uVar3 = uVar2;
    }
    if ((int)((uint)*(ushort *)(param_2 + 3) << 0x15) < 0) {
      iVar1 = FUN_08005714(param_1,uVar3);
      if (iVar1 == 0) {
LAB_0800508a:
        *param_1 = 0xc;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
        return 0xffffffff;
      }
      FUN_08005630(iVar1,param_2[4],iVar4);
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
    }
    else {
      iVar1 = FUN_080057d0(param_1,param_2[4],uVar3);
      if (iVar1 == 0) {
        FUN_0800567c(param_1,param_2[4]);
        goto LAB_0800508a;
      }
    }
    param_2[4] = iVar1;
    *param_2 = iVar1 + iVar4;
    param_2[5] = uVar3;
    param_2[2] = uVar3 - iVar4;
    uVar3 = param_4;
  }
  if (param_4 <= uVar3) {
    uVar3 = param_4;
  }
  FUN_08005646(*param_2,param_3,uVar3);
  param_2[2] = param_2[2] - uVar3;
  *param_2 = uVar3 + *param_2;
  return 0;
}


////>>0x080050fc>>FUN_080050fc>>////

/* WARNING: Removing unreachable block (ram,0x08005294) */

int FUN_080050fc(undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int unaff_r9;
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
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar1 = FUN_08005714(param_1,0x40);
    *param_2 = iVar1;
    param_2[4] = iVar1;
    if (iVar1 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar5 = param_3;
LAB_08005146:
  pbVar6 = pbVar5;
  if (*pbVar6 != 0) goto LAB_080051ca;
  goto LAB_08005150;
LAB_080051ca:
  pbVar5 = pbVar6 + 1;
  if (*pbVar6 != 0x25) goto LAB_08005146;
LAB_08005150:
  iVar1 = (int)pbVar6 - (int)param_3;
  if (iVar1 != 0) {
    iVar2 = FUN_08005044(param_1,param_2,param_3,iVar1);
    if (iVar2 == -1) {
LAB_080052ac:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar1;
  }
  if (*pbVar6 == 0) goto LAB_080052ac;
  local_88 = 0;
  local_7c = 0;
  local_84 = -1;
  local_80 = 0;
  local_45 = 0;
  local_30 = 0;
  pbVar5 = pbVar6 + 1;
  while( true ) {
    iVar1 = FUN_08005614(&DAT_08007379,*pbVar5);
    param_3 = pbVar5 + 1;
    if (iVar1 == 0) break;
    local_88 = 1 << (iVar1 + 0xf7ff8c87U & 0xff) | local_88;
    pbVar5 = param_3;
  }
  if ((int)(local_88 << 0x1b) < 0) {
    local_45 = 0x20;
  }
  if ((int)(local_88 << 0x1c) < 0) {
    local_45 = 0x2b;
  }
  if (*pbVar5 == 0x2a) {
    piVar3 = local_8c + 1;
    iVar1 = *local_8c;
    local_8c = piVar3;
    if (iVar1 < 0) {
      local_7c = -iVar1;
      local_88 = local_88 | 2;
      goto LAB_080051fc;
    }
  }
  else {
    bVar4 = false;
    iVar1 = local_7c;
    param_3 = pbVar5;
    while( true ) {
      if (9 < *param_3 - 0x30) break;
      iVar1 = iVar1 * 10 + (*param_3 - 0x30);
      bVar4 = true;
      param_3 = param_3 + 1;
    }
    if (!bVar4) goto LAB_080051fc;
  }
  local_7c = iVar1;
LAB_080051fc:
  if (*param_3 == 0x2e) {
    if (param_3[1] == 0x2a) {
      param_3 = param_3 + 2;
      piVar3 = local_8c + 1;
      local_84 = *local_8c;
      local_8c = piVar3;
      if (local_84 < 0) {
        local_84 = -1;
      }
    }
    else {
      bVar4 = false;
      iVar1 = 0;
      local_84 = 0;
      while( true ) {
        param_3 = param_3 + 1;
        if (9 < *param_3 - 0x30) break;
        iVar1 = iVar1 * 10 + (*param_3 - 0x30);
        bVar4 = true;
      }
      if (bVar4) {
        local_84 = iVar1;
      }
    }
  }
  iVar1 = FUN_08005614(&DAT_0800737f,*param_3,3);
  if (iVar1 != 0) {
    param_3 = param_3 + 1;
    local_88 = local_88 | 0x40 << (iVar1 + 0xf7ff8c81U & 0xff);
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  iVar1 = FUN_08005614("efgEFG",local_70,6);
  if (iVar1 == 0) {
    unaff_r9 = FUN_080053d4(param_1,&local_88,param_2,0x8005045,&local_8c);
    if (unaff_r9 == -1) goto LAB_080052ac;
  }
  else {
    local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
  }
  local_74 = local_74 + unaff_r9;
  pbVar5 = param_3;
  goto LAB_08005146;
}


////>>0x080052e4>>FUN_080052e4>>////

undefined4
FUN_080052e4(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

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


////>>0x080053d4>>FUN_080053d4>>////

uint FUN_080053d4(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5)

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
          if (bVar1 == 0) goto LAB_0800558e;
          if (bVar1 != 0x58) goto LAB_08005404;
          *(undefined *)((int)param_2 + 0x45) = 0x58;
          pcVar5 = "0123456789ABCDEF";
LAB_0800551e:
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
LAB_080054b4:
          *(undefined *)((int)param_2 + 0x43) = 0;
        }
        else {
          if ((bVar1 != 100) && (bVar1 != 0x69)) goto LAB_08005404;
          uVar9 = *param_2;
          puVar3 = *param_5;
          if ((uVar9 & 0x80) == 0) {
            *param_5 = puVar3 + 1;
            if ((uVar9 & 0x40) == 0) goto LAB_08005424;
            uVar9 = (uint)(short)*(ushort *)puVar3;
          }
          else {
            *param_5 = puVar3 + 1;
LAB_08005424:
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
          if (uVar9 != 0) goto LAB_08005552;
LAB_08005600:
          *(char *)((int)param_2 + 0x42) = *pcVar5;
          pcVar11 = (char *)((int)param_2 + 0x42);
        }
        else {
          *param_2 = *param_2 & 0xfffffffb;
          if (uVar9 == 0) {
            if (uVar10 != 0) goto LAB_08005600;
          }
          else {
LAB_08005552:
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
        goto LAB_080054fa;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      *(char *)((int)param_2 + 0x42) = (char)*puVar3;
LAB_08005464:
      pcVar12 = (char *)((int)param_2 + 0x42);
      uVar9 = 1;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 < 0x74) {
          if (bVar1 == 0x6f) {
LAB_0800548a:
            uVar9 = *param_2;
            puVar3 = *param_5;
            if ((uVar9 & 0x80) == 0) {
              *param_5 = puVar3 + 1;
              if ((uVar9 & 0x40) == 0) goto LAB_08005498;
              uVar9 = (uint)*(ushort *)puVar3;
            }
            else {
              *param_5 = puVar3 + 1;
LAB_08005498:
              uVar9 = *puVar3;
            }
            if (bVar1 == 0x6f) {
              uVar6 = 8;
            }
            else {
              uVar6 = 10;
            }
            pcVar5 = "0123456789ABCDEF";
            goto LAB_080054b4;
          }
          if (bVar1 == 0x70) {
            *param_2 = *param_2 | 0x20;
LAB_0800544a:
            pcVar5 = "0123456789abcdef";
            *(undefined *)((int)param_2 + 0x45) = 0x78;
            goto LAB_0800551e;
          }
        }
        else {
          if (bVar1 == 0x75) goto LAB_0800548a;
          if (bVar1 == 0x78) goto LAB_0800544a;
        }
LAB_08005404:
        *(byte *)((int)param_2 + 0x42) = bVar1;
        goto LAB_08005464;
      }
      ppcVar8 = (char **)*param_5;
      *param_5 = (uint *)(ppcVar8 + 1);
      pcVar12 = *ppcVar8;
      iVar2 = FUN_08005614(pcVar12,0,param_2[1]);
      if (iVar2 != 0) {
        param_2[1] = iVar2 - (int)pcVar12;
      }
      uVar9 = param_2[1];
    }
    param_2[4] = uVar9;
    *(undefined *)((int)param_2 + 0x43) = 0;
    goto LAB_080054fa;
  }
  uVar9 = *param_2;
  ppuVar7 = (uint **)*param_5;
  uVar6 = param_2[5];
  if ((uVar9 & 0x80) == 0) {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
    if ((uVar9 & 0x40) == 0) goto LAB_0800557a;
    *(short *)puVar3 = (short)uVar6;
  }
  else {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
LAB_0800557a:
    *puVar3 = uVar6;
  }
LAB_0800558e:
  param_2[4] = 0;
LAB_080054fa:
  iVar2 = FUN_080052e4(param_1,param_2,local_24,param_3,param_4);
  if ((iVar2 == -1) || (iVar2 = (*param_4)(param_1,param_3,pcVar12,param_2[4]), iVar2 == -1)) {
LAB_0800550e:
    uVar9 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar2 = 0; iVar2 < (int)(param_2[3] - local_24[0]); iVar2 = iVar2 + 1) {
        iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar4 == -1) goto LAB_0800550e;
      }
    }
    uVar9 = param_2[3];
    if ((int)param_2[3] < (int)local_24[0]) {
      uVar9 = local_24[0];
    }
  }
  return uVar9;
}


////>>0x08005614>>FUN_08005614>>////

char * FUN_08005614(char *param_1,char param_2,int param_3)

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


////>>0x08005630>>FUN_08005630>>////

void FUN_08005630(int param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)(param_1 + -1);
  puVar1 = param_2 + param_3;
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    puVar2 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  return;
}


////>>0x08005646>>FUN_08005646>>////

void FUN_08005646(undefined *param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = param_2 + param_3;
  if ((param_2 < param_1) && (param_1 < puVar1)) {
    param_1 = param_1 + param_3;
    param_3 = param_3 - (int)puVar1;
    while (puVar1 + param_3 != (undefined *)0x0) {
      puVar1 = puVar1 + -1;
      param_1 = param_1 + -1;
      *param_1 = *puVar1;
    }
    return;
  }
  param_1 = param_1 + -1;
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    param_1 = param_1 + 1;
    *param_1 = *param_2;
  }
  return;
}


////>>0x0800567c>>FUN_0800567c>>////

void FUN_0800567c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0800583c();
  ppiVar2 = (int **)&DAT_200002ac;
  if (DAT_200002ac == (int **)0x0) {
    ppiVar5[1] = (int *)0x0;
    ppiVar1 = extraout_r1;
    DAT_200002ac = ppiVar5;
  }
  else {
    ppiVar2 = DAT_200002ac;
    if (ppiVar5 < DAT_200002ac) {
      ppiVar1 = (int **)*ppiVar5;
      ppiVar2 = (int **)((int)ppiVar5 + (int)ppiVar1);
      if (DAT_200002ac == ppiVar2) {
        piVar3 = *DAT_200002ac;
        DAT_200002ac = (int **)DAT_200002ac[1];
        ppiVar2 = (int **)((int)piVar3 + (int)ppiVar1);
        *ppiVar5 = (int *)ppiVar2;
      }
      ppiVar5[1] = (int *)DAT_200002ac;
      DAT_200002ac = ppiVar5;
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
  FUN_0800583e(param_1,ppiVar1,ppiVar2,param_4);
  return;
}


////>>0x08005714>>FUN_08005714>>////

uint FUN_08005714(undefined4 *param_1,uint param_2)

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
    FUN_0800583c();
    puVar1 = DAT_200002ac;
    puVar5 = DAT_200002ac;
    while (puVar3 = puVar1, puVar3 != (uint *)0x0) {
      uVar4 = *puVar3 - uVar6;
      if (-1 < (int)uVar4) {
        if (uVar4 < 0xc) {
          if (puVar5 == puVar3) {
            puVar1 = (uint *)puVar5[1];
            DAT_200002ac = puVar1;
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
        goto LAB_08005778;
      }
      puVar5 = puVar3;
      puVar1 = (uint *)puVar3[1];
    }
    if (DAT_200002b0 == 0) {
      DAT_200002b0 = FUN_0800581c(param_1);
    }
    puVar1 = (uint *)FUN_0800581c(param_1,uVar6);
    if ((puVar1 != (uint *)0xffffffff) &&
       ((puVar5 = (uint *)((int)puVar1 + 3U & 0xfffffffc), puVar1 == puVar5 ||
        (iVar2 = FUN_0800581c(param_1,(int)puVar5 - (int)puVar1), iVar2 != -1)))) {
      *puVar5 = uVar6;
LAB_08005778:
      FUN_0800583e(param_1);
      uVar6 = (int)puVar5 + 0xbU & 0xfffffff8;
      iVar2 = uVar6 - (int)(puVar5 + 1);
      if (iVar2 != 0) {
        *(int *)((int)puVar5 + iVar2) = -iVar2;
        return uVar6;
      }
      return uVar6;
    }
    *param_1 = 0xc;
    FUN_0800583e(param_1);
  }
  return 0;
}


////>>0x080057d0>>FUN_080057d0>>////

int FUN_080057d0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      FUN_0800567c();
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_08005840();
      iVar1 = param_2;
      if ((uVar2 < param_3) && (iVar1 = FUN_08005714(param_1,param_3), iVar1 != 0)) {
        FUN_08005630(iVar1,param_2,param_3);
        FUN_0800567c(param_1,param_2);
      }
    }
    return iVar1;
  }
  iVar1 = FUN_08005714(param_1,param_3,param_3,param_4);
  return iVar1;
}


////>>0x0800581c>>FUN_0800581c>>////

void FUN_0800581c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_2000169c = 0;
  iVar1 = FUN_080072b8(param_2);
  if ((iVar1 == -1) && (DAT_2000169c != 0)) {
    *param_1 = DAT_2000169c;
  }
  return;
}


////>>0x0800583c>>FUN_0800583c>>////

void FUN_0800583c(void)

{
  return;
}


////>>0x0800583e>>FUN_0800583e>>////

void FUN_0800583e(void)

{
  return;
}


////>>0x08005840>>FUN_08005840>>////

int FUN_08005840(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


////>>0x08005854>>FUN_08005854>>////

undefined8 FUN_08005854(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_28;
  
  uVar4 = FUN_08005c70();
  if (DAT_20000224 == -1) {
    return uVar4;
  }
  local_28 = FUN_08000a04(param_1,param_2,param_1,param_2);
  if (local_28 != 0) {
    return uVar4;
  }
  uVar5 = FUN_0800708c(param_1,param_2);
  iVar1 = FUN_080009f0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x3ff00000);
  if (iVar1 == 0) {
    return uVar4;
  }
  local_48 = 1;
  local_44 = &DAT_080073ac;
  local_40 = param_1;
  uStack_3c = param_2;
  local_38 = param_1;
  uStack_34 = param_2;
  local_30 = FUN_080070a4(&DAT_0800737e);
  if (DAT_20000224 != '\x02') {
    iVar1 = FUN_0800709e(&local_48);
    if (iVar1 != 0) goto LAB_080058d0;
  }
  puVar2 = (undefined4 *)FUN_080072ac();
  *puVar2 = 0x21;
LAB_080058d0:
  if (local_28 != 0) {
    piVar3 = (int *)FUN_080072ac();
    *piVar3 = local_28;
  }
  return local_30;
}


////>>0x080058fc>>thunk_FUN_08006070>>////

undefined8 thunk_FUN_08006070(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_4 & 0x7fffffff;
  if ((0x7ff00000 < (uVar5 | (-param_3 | param_3) >> 0x1f)) ||
     (uVar3 = param_2 & 0x7fffffff, 0x7ff00000 < (uVar3 | (-param_1 | param_1) >> 0x1f))) {
    uVar6 = FUN_0800016c(param_1,param_2,param_3,param_4,param_4);
    return uVar6;
  }
  if ((param_4 + 0xc0100000 | param_3) == 0) {
    uVar6 = FUN_08006d68();
    return uVar6;
  }
  uVar2 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
  if ((param_1 | uVar3) == 0) {
    if (uVar2 == 2) {
      return 0x400921fb54442d18;
    }
    if (uVar2 != 3) {
      return CONCAT44(param_2,param_1);
    }
LAB_0800613e:
    uVar6 = 0xc00921fb54442d18;
  }
  else {
    if ((param_3 | uVar5) != 0) {
      if (uVar5 == 0x7ff00000) {
        if (uVar3 == 0x7ff00000) {
          if (uVar2 == 2) {
            return 0x4002d97c7f3321d2;
          }
          if (uVar2 == 3) {
            return 0xc002d97c7f3321d2;
          }
          if (uVar2 != 1) {
            return 0x3fe921fb54442d18;
          }
          return 0xbfe921fb54442d18;
        }
        if (uVar2 == 2) {
          return 0x400921fb54442d18;
        }
        if (uVar2 != 3) {
          if (uVar2 != 1) {
            return 0;
          }
          return 0x8000000000000000;
        }
        goto LAB_0800613e;
      }
      if (uVar3 != 0x7ff00000) {
        iVar4 = (int)(uVar3 - uVar5) >> 0x14;
        if (iVar4 < 0x3d) {
          if (((int)param_4 < 0) && (iVar4 + 0x3c < 0 != SCARRY4(iVar4,0x3c))) {
            uVar6 = 0;
          }
          else {
            FUN_08000724(param_1,param_2);
            FUN_0800708c();
            uVar6 = FUN_08006d68();
          }
        }
        else {
          uVar6 = 0x3ff921fb54442d18;
        }
        iVar4 = (int)((ulonglong)uVar6 >> 0x20);
        uVar1 = (undefined4)uVar6;
        if (uVar2 == 1) {
          return CONCAT44(iVar4 + -0x80000000,uVar1);
        }
        if (uVar2 == 2) {
          uVar7 = FUN_08000168(uVar1,iVar4,0x33145c07,0x3ca1a626);
          uVar6 = 0x400921fb54442d18;
        }
        else {
          if (uVar2 == 0) {
            return uVar6;
          }
          uVar6 = FUN_08000168(uVar1,iVar4,0x33145c07,0x3ca1a626);
          uVar7 = 0x400921fb54442d18;
        }
        uVar6 = FUN_08000168((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                             (int)((ulonglong)uVar7 >> 0x20));
        return uVar6;
      }
    }
    if ((int)param_2 < 0) {
      uVar6 = 0xbff921fb54442d18;
    }
    else {
      uVar6 = 0x3ff921fb54442d18;
    }
  }
  return uVar6;
}


////>>0x08005900>>FUN_08005900>>////

undefined8 FUN_08005900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_30;
  
  uVar8 = FUN_08006228();
  cVar1 = DAT_20000224;
  uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar7 = (undefined4)uVar8;
  if (DAT_20000224 == -1) {
    return uVar8;
  }
  iVar2 = FUN_08000a04(param_3,param_4,param_3,param_4);
  if (iVar2 != 0) {
    return uVar8;
  }
  iVar2 = FUN_08000a04(param_1,param_2,param_1,param_2);
  local_48 = param_1;
  uStack_44 = param_2;
  local_40 = param_3;
  uStack_3c = param_4;
  if (iVar2 == 0) {
    iVar2 = FUN_080009a0(param_1,param_2,0,0);
    if (iVar2 != 0) {
      iVar2 = FUN_080009a0(param_3,param_4,0,0);
      if (iVar2 != 0) {
        local_50 = 1;
        local_4c = &DAT_080073b1;
        local_38 = 0;
        local_30 = 0;
        if (cVar1 != '\0') {
          local_38 = 0x3ff0000000000000;
          goto LAB_080059d0;
        }
        goto LAB_08005978;
      }
      iVar2 = FUN_08007092(param_3,param_4);
      if (iVar2 == 0) {
        return uVar8;
      }
      iVar2 = FUN_080009b4(param_3,param_4,0,0);
      if (iVar2 == 0) {
        return uVar8;
      }
      local_50 = 1;
      local_4c = &DAT_080073b1;
      local_30 = 0;
      if (DAT_20000224 == '\0') goto LAB_08005a22;
      local_38 = 0xfff0000000000000;
      local_30 = 0;
      cVar1 = DAT_20000224;
LAB_08005a32:
      if (cVar1 != '\x02') goto LAB_08005978;
      goto LAB_08005a34;
    }
    iVar2 = FUN_08007092(uVar7,uVar6);
    if (((iVar2 != 0) || (iVar5 = FUN_08007092(param_1,param_2), iVar5 == 0)) ||
       (iVar5 = FUN_08007092(param_3,param_4), iVar5 == 0)) {
      iVar2 = FUN_080009a0(uVar7,uVar6,0,0);
      if (iVar2 == 0) {
        return uVar8;
      }
      iVar2 = FUN_08007092(param_1,param_2);
      if (iVar2 == 0) {
        return uVar8;
      }
      iVar2 = FUN_08007092(param_3,param_4);
      if (iVar2 == 0) {
        return uVar8;
      }
      local_50 = 4;
      local_4c = &DAT_080073b1;
      local_30 = 0;
      local_38._0_4_ = 0;
      local_38._4_4_ = 0;
      goto LAB_08005afa;
    }
    local_30 = FUN_08000a04(uVar7,uVar6);
    cVar1 = DAT_20000224;
    if (local_30 != 0) {
      local_4c = &DAT_080073b1;
      local_50 = 1;
      local_30 = iVar2;
      if (DAT_20000224 != '\0') {
        local_38 = FUN_08000724(0,0,0,0);
        goto LAB_08005a32;
      }
LAB_08005a22:
      local_4c = &DAT_080073b1;
      local_50 = 1;
      local_38 = 0;
      goto LAB_08005978;
    }
    local_4c = &DAT_080073b1;
    local_50 = 3;
    if (DAT_20000224 == '\0') {
      local_38._0_4_ = 0xe0000000;
      local_38._4_4_ = 0x47efffff;
      iVar2 = FUN_080009b4(param_1,param_2,0,0);
      if (iVar2 != 0) {
        uVar8 = FUN_080004d0(param_3,param_4,0,0x3fe00000);
        uVar9 = FUN_080070b0();
        iVar2 = FUN_080009a0((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                             (int)((ulonglong)uVar9 >> 0x20));
        if (iVar2 == 0) {
          local_38._0_4_ = 0xe0000000;
          local_38._4_4_ = 0xc7efffff;
        }
        goto LAB_08005afa;
      }
LAB_08005b98:
      iVar2 = FUN_0800709e(&local_50);
      if (iVar2 != 0) goto LAB_080059d0;
    }
    else {
      local_38._0_4_ = 0;
      local_38._4_4_ = 0x7ff00000;
      iVar2 = FUN_080009b4(param_1,param_2,0,0);
      if (iVar2 != 0) {
        uVar8 = FUN_080004d0(param_3,param_4,0,0x3fe00000);
        uVar9 = FUN_080070b0();
        iVar2 = FUN_080009a0((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                             (int)((ulonglong)uVar9 >> 0x20));
        if (iVar2 == 0) {
          local_38._0_4_ = 0;
          local_38._4_4_ = 0xfff00000;
        }
      }
LAB_08005afa:
      if (DAT_20000224 != '\x02') goto LAB_08005b98;
    }
    puVar4 = (undefined4 *)FUN_080072ac();
    uVar7 = 0x22;
  }
  else {
    iVar2 = FUN_080009a0(param_3,param_4,0,0);
    if (iVar2 == 0) {
      return uVar8;
    }
    local_50 = 1;
    local_4c = &DAT_080073b1;
    local_38 = 0x3ff0000000000000;
    local_30 = 0;
    if (cVar1 == '\x02') {
      return 0x3ff0000000000000;
    }
LAB_08005978:
    iVar2 = FUN_0800709e(&local_50);
    if (iVar2 != 0) goto LAB_080059d0;
LAB_08005a34:
    puVar4 = (undefined4 *)FUN_080072ac();
    uVar7 = 0x21;
  }
  *puVar4 = uVar7;
LAB_080059d0:
  if (local_30 != 0) {
    piVar3 = (int *)FUN_080072ac();
    *piVar3 = local_30;
  }
  return local_38;
}


////>>0x08005bc8>>FUN_08005bc8>>////

undefined8 FUN_08005bc8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_30;
  
  uVar5 = FUN_08006c0c();
  cVar1 = DAT_20000224;
  if (DAT_20000224 == -1) {
    return uVar5;
  }
  local_30 = FUN_08000a04(param_1,param_2,param_1,param_2);
  if (local_30 != 0) {
    return uVar5;
  }
  iVar2 = FUN_080009b4(param_1,param_2,0,0);
  if (iVar2 == 0) {
    return uVar5;
  }
  local_50 = 1;
  local_4c = &DAT_080073b5;
  local_48 = param_1;
  uStack_44 = param_2;
  local_40 = param_1;
  uStack_3c = param_2;
  if (cVar1 == '\0') {
    local_38 = 0;
LAB_08005c26:
    iVar2 = FUN_0800709e(&local_50);
    if (iVar2 != 0) goto LAB_08005c2e;
  }
  else {
    local_38 = FUN_08000724(0,0,0,0);
    if (cVar1 != '\x02') goto LAB_08005c26;
  }
  puVar4 = (undefined4 *)FUN_080072ac();
  *puVar4 = 0x21;
LAB_08005c2e:
  if (local_30 != 0) {
    piVar3 = (int *)FUN_080072ac();
    *piVar3 = local_30;
  }
  return local_38;
}


////>>0x08005c70>>FUN_08005c70>>////

undefined8 FUN_08005c70(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = CONCAT44(param_2,param_1);
  uVar8 = param_2 & 0x7fffffff;
  if (uVar8 < 0x3ff00000) {
    if (uVar8 < 0x3fe00000) {
      if (0x3e3fffff < uVar8) {
        uVar10 = FUN_080004d0(param_1,param_2,param_1,param_2);
        uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar6 = (undefined4)uVar10;
        uVar10 = FUN_080004d0(uVar6,uVar7,0xdfdf709,0x3f023de1);
        uVar10 = FUN_0800016c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x7501b288,0x3f49efe0);
        uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar10 = FUN_08000168((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xb5688f3b,0x3fa48228);
        uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar10 = FUN_0800016c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xe884455,0x3fc9c155);
        uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar10 = FUN_08000168((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x3eb6f7d,0x3fd4d612);
        uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar10 = FUN_0800016c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x55555555,0x3fc55555);
        uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar11 = FUN_080004d0(uVar6,uVar7,0xb12e9282,0x3fb3b8c5);
        uVar11 = FUN_08000168((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x1b8d0159,0x3fe6066c);
        uVar11 = FUN_080004d0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar6,uVar7);
        uVar11 = FUN_0800016c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x9c598ac8,0x40002ae5);
        uVar11 = FUN_080004d0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar6,uVar7);
        uVar11 = FUN_08000168((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x1c8a2d4b,0x40033a27);
        uVar11 = FUN_080004d0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar6,uVar7);
        uVar11 = FUN_0800016c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x3ff00000);
        uVar10 = FUN_08000724((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                              (int)((ulonglong)uVar11 >> 0x20));
        uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_1,param_2);
        goto LAB_08005cba;
      }
      uVar10 = FUN_0800016c(param_1,param_2,0x8800759c,0x7e37e43c);
      iVar1 = FUN_080009f0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3ff00000);
      if (iVar1 != 0) {
        return uVar9;
      }
    }
    uVar9 = FUN_0800708c(param_1,param_2);
    uVar9 = FUN_08000168(0,0x3ff00000,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3fe00000);
    uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = (undefined4)uVar9;
    uVar9 = FUN_080004d0(uVar6,uVar2,0xdfdf709,0x3f023de1);
    uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x7501b288,0x3f49efe0);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar9 = FUN_08000168((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xb5688f3b,0x3fa48228);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xe884455,0x3fc9c155);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar9 = FUN_08000168((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x3eb6f7d,0x3fd4d612);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x55555555,0x3fc55555);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar10 = FUN_080004d0(uVar6,uVar2,0xb12e9282,0x3fb3b8c5);
    uVar10 = FUN_08000168((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x1b8d0159,0x3fe6066c);
    uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar2);
    uVar10 = FUN_0800016c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x9c598ac8,0x40002ae5);
    uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar2);
    uVar10 = FUN_08000168((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x1c8a2d4b,0x40033a27);
    uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar2);
    uVar10 = FUN_0800016c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3ff00000);
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar11 = FUN_08006c0c(uVar6,uVar2);
    uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar7 = (undefined4)uVar11;
    if (uVar8 < 0x3fef3333) {
      uVar9 = FUN_08000724((int)uVar9,uVar3,(int)uVar10,uVar4);
      uVar10 = FUN_0800016c(uVar7,uVar5,uVar7,uVar5);
      uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                           (int)((ulonglong)uVar10 >> 0x20));
      uVar10 = FUN_080004d0(0,uVar5,0,uVar5);
      uVar10 = FUN_08000168(uVar6,uVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      uVar11 = FUN_0800016c(uVar7,uVar5,0,uVar5);
      uVar10 = FUN_08000724((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                            (int)((ulonglong)uVar11 >> 0x20));
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar10 = FUN_0800016c((int)uVar10,uVar6,(int)uVar10,uVar6);
      uVar10 = FUN_08000168(0x33145c07,0x3c91a626,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      uVar9 = FUN_08000168((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                           (int)((ulonglong)uVar10 >> 0x20));
      uVar10 = FUN_0800016c(0,uVar5,0,uVar5);
      uVar10 = FUN_08000168(0x54442d18,0x3fe921fb,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      uVar9 = FUN_08000168((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                           (int)((ulonglong)uVar10 >> 0x20));
      uVar6 = 0x3fe921fb;
    }
    else {
      uVar9 = FUN_08000724((int)uVar9,uVar3,(int)uVar10,uVar4);
      uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,uVar5);
      uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,uVar5);
      uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar9 = FUN_0800016c((int)uVar9,uVar6,(int)uVar9,uVar6);
      uVar9 = FUN_08000168((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x33145c07,0x3c91a626);
      uVar6 = 0x3ff921fb;
    }
    uVar9 = FUN_08000168(0x54442d18,uVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    if ((int)param_2 < 1) {
      uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20) + -0x80000000,(int)uVar9);
    }
  }
  else {
    if ((uVar8 + 0xc0100000 | param_1) != 0) {
      uVar9 = FUN_08000168(param_1,param_2,param_1,param_2);
      uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar9 = FUN_08000724((int)uVar9,uVar6,(int)uVar9,uVar6);
      return uVar9;
    }
    uVar9 = FUN_080004d0(param_1,param_2,0x54442d18,0x3ff921fb);
    uVar10 = FUN_080004d0(param_1,param_2,0x33145c07,0x3c91a626);
LAB_08005cba:
    uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                         (int)((ulonglong)uVar10 >> 0x20));
  }
  return uVar9;
}


////>>0x08006070>>FUN_08006070>>////

undefined8 FUN_08006070(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_4 & 0x7fffffff;
  if ((0x7ff00000 < (uVar5 | (-param_3 | param_3) >> 0x1f)) ||
     (uVar3 = param_2 & 0x7fffffff, 0x7ff00000 < (uVar3 | (-param_1 | param_1) >> 0x1f))) {
    uVar6 = FUN_0800016c(param_1,param_2,param_3,param_4,param_4);
    return uVar6;
  }
  if ((param_4 + 0xc0100000 | param_3) == 0) {
    uVar6 = FUN_08006d68();
    return uVar6;
  }
  uVar2 = (int)param_4 >> 0x1e & 2U | param_2 >> 0x1f;
  if ((param_1 | uVar3) == 0) {
    if (uVar2 == 2) {
      return 0x400921fb54442d18;
    }
    if (uVar2 != 3) {
      return CONCAT44(param_2,param_1);
    }
LAB_0800613e:
    uVar6 = 0xc00921fb54442d18;
  }
  else {
    if ((param_3 | uVar5) != 0) {
      if (uVar5 == 0x7ff00000) {
        if (uVar3 == 0x7ff00000) {
          if (uVar2 == 2) {
            return 0x4002d97c7f3321d2;
          }
          if (uVar2 == 3) {
            return 0xc002d97c7f3321d2;
          }
          if (uVar2 != 1) {
            return 0x3fe921fb54442d18;
          }
          return 0xbfe921fb54442d18;
        }
        if (uVar2 == 2) {
          return 0x400921fb54442d18;
        }
        if (uVar2 != 3) {
          if (uVar2 != 1) {
            return 0;
          }
          return 0x8000000000000000;
        }
        goto LAB_0800613e;
      }
      if (uVar3 != 0x7ff00000) {
        iVar4 = (int)(uVar3 - uVar5) >> 0x14;
        if (iVar4 < 0x3d) {
          if (((int)param_4 < 0) && (iVar4 + 0x3c < 0 != SCARRY4(iVar4,0x3c))) {
            uVar6 = 0;
          }
          else {
            FUN_08000724(param_1,param_2);
            FUN_0800708c();
            uVar6 = FUN_08006d68();
          }
        }
        else {
          uVar6 = 0x3ff921fb54442d18;
        }
        iVar4 = (int)((ulonglong)uVar6 >> 0x20);
        uVar1 = (undefined4)uVar6;
        if (uVar2 == 1) {
          return CONCAT44(iVar4 + -0x80000000,uVar1);
        }
        if (uVar2 == 2) {
          uVar7 = FUN_08000168(uVar1,iVar4,0x33145c07,0x3ca1a626);
          uVar6 = 0x400921fb54442d18;
        }
        else {
          if (uVar2 == 0) {
            return uVar6;
          }
          uVar6 = FUN_08000168(uVar1,iVar4,0x33145c07,0x3ca1a626);
          uVar7 = 0x400921fb54442d18;
        }
        uVar6 = FUN_08000168((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                             (int)((ulonglong)uVar7 >> 0x20));
        return uVar6;
      }
    }
    if ((int)param_2 < 0) {
      uVar6 = 0xbff921fb54442d18;
    }
    else {
      uVar6 = 0x3ff921fb54442d18;
    }
  }
  return uVar6;
}


////>>0x08006228>>FUN_08006228>>////

uint FUN_08006228(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint extraout_r1_02;
  undefined4 extraout_r1_03;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  uint local_70;
  undefined4 local_68;
  undefined4 local_64;
  int local_54;
  
  uVar15 = CONCAT44(param_2,param_1);
  uVar11 = param_4 & 0x7fffffff;
  if ((uVar11 | param_3) == 0) {
    return 0;
  }
  uVar8 = param_2 & 0x7fffffff;
  if (uVar8 < 0x7ff00001) {
    if (uVar8 == 0x7ff00000) {
      if (param_1 == 0) {
        if (0x7ff00000 < uVar11) goto LAB_08006278;
LAB_08006262:
        if ((uVar11 != 0x7ff00000) || (param_3 == 0)) {
          if (-1 < (int)param_2) goto LAB_0800632a;
          if (uVar11 < 0x43400000) {
            if (uVar11 < 0x3ff00000) {
LAB_0800632a:
              local_70 = 0;
              goto LAB_080062ba;
            }
            iVar5 = ((int)uVar11 >> 0x14) + -0x3ff;
            if (0x14 < iVar5) {
              uVar2 = param_3 >> (0x34U - iVar5 & 0xff);
              if (param_3 == uVar2 << (0x34U - iVar5 & 0xff)) {
                local_70 = 2 - (uVar2 & 1);
                goto LAB_080062ba;
              }
              goto LAB_0800632a;
            }
            if (param_3 == 0) {
              uVar2 = (int)uVar11 >> (0x14U - iVar5 & 0xff);
              if (uVar11 == uVar2 << (0x14U - iVar5 & 0xff)) {
                local_70 = 2 - (uVar2 & 1);
              }
              else {
                local_70 = 0;
              }
              goto LAB_0800630c;
            }
            local_70 = 0;
          }
          else {
            local_70 = 2;
LAB_080062ba:
            if (param_3 == 0) {
              if (uVar11 == 0x7ff00000) {
                if ((uVar8 + 0xc0100000 | param_1) == 0) {
                  return 0;
                }
                if (0x3fefffff < uVar8) {
                  if ((int)param_4 < 0) {
                    return 0;
                  }
                  return 0;
                }
                if (-1 < (int)param_4) {
                  return 0;
                }
                return 0;
              }
LAB_0800630c:
              if (uVar11 == 0x3ff00000) {
                if (-1 < (int)param_4) {
                  return param_1;
                }
                uVar14 = 0x3ff0000000000000;
                goto LAB_08006320;
              }
              if (param_4 == 0x40000000) goto LAB_0800634a;
              if ((param_4 == 0x3fe00000) && (-1 < (int)param_2)) {
                uVar11 = FUN_08006c0c(param_1,param_2);
                return uVar11;
              }
            }
          }
          uVar14 = FUN_0800708c(param_1,param_2);
          uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
          uVar1 = (undefined4)uVar14;
          uVar19 = CONCAT44(param_2,uVar1) & 0x7fffffffffffffff;
          if ((param_1 == 0) && ((uVar8 == 0 || ((param_2 & 0x3fffffff) == 0x3ff00000)))) {
            if ((int)param_4 < 0) {
              uVar14 = FUN_08000724(0,0x3ff00000,uVar1,uVar12);
            }
            if (-1 < (int)param_2) {
              return (uint)uVar14;
            }
            if ((local_70 | uVar8 + 0xc0100000) != 0) {
              return (uint)uVar14;
            }
          }
          else {
            uVar2 = 0xffffffff - ((int)param_2 >> 0x1f);
            uVar14 = uVar15;
            if ((local_70 | uVar2) != 0) {
              if (uVar11 < 0x41e00001) {
                local_54 = 0;
                if (uVar8 < 0x100000) {
                  uVar19 = FUN_080004d0();
                  local_54 = -0x35;
                }
                uVar11 = (uint)(uVar19 >> 0x20);
                uVar1 = (undefined4)uVar19;
                local_54 = ((int)uVar11 >> 0x14) + -0x3ff + local_54;
                uVar11 = uVar11 & 0xfffff;
                uVar8 = uVar11 | 0x3ff00000;
                if (uVar11 < 0x3988f) {
LAB_08006628:
                  iVar5 = 0;
                }
                else {
                  if (0xbb679 < uVar11) {
                    uVar8 = uVar8 - 0x100000;
                    local_54 = local_54 + 1;
                    goto LAB_08006628;
                  }
                  iVar5 = 1;
                }
                iVar6 = iVar5 * 8;
                uVar7 = (&DAT_080073c0)[iVar5 * 2];
                uVar9 = (&DAT_080073c4)[iVar5 * 2];
                uVar15 = FUN_08000168(uVar1,uVar8,uVar7,uVar9);
                uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar14 = FUN_0800016c(uVar1,uVar8,uVar7,uVar9);
                uVar14 = FUN_08000724(0,0x3ff00000,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
                uVar3 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar16 = FUN_080004d0((int)uVar15,uVar13,(int)uVar14,uVar3);
                uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
                uVar12 = (undefined4)uVar16;
                uVar16 = FUN_080004d0(0,uVar4);
                uVar15 = FUN_08000168((int)uVar15,uVar13,(int)uVar16,
                                      (int)((ulonglong)uVar16 >> 0x20));
                uVar16 = FUN_08000168(0,((int)uVar8 >> 1 | 0x20000000U) + 0x80000 + iVar5 * 0x40000,
                                      uVar7,uVar9);
                uVar16 = FUN_08000168(uVar1,uVar8,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
                uVar16 = FUN_080004d0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0,uVar4);
                uVar15 = FUN_08000168((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                                      (int)((ulonglong)uVar16 >> 0x20));
                uVar15 = FUN_080004d0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,uVar3
                                     );
                uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar14 = FUN_080004d0(uVar12,uVar4);
                uVar3 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar1 = (undefined4)uVar14;
                uVar14 = FUN_080004d0(uVar1,uVar3,0x4a454eef,0x3fca7e28);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x93c9db65,
                                      0x3fcd864a);
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar1,uVar3);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xa91d4101,
                                      0x3fd17460);
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar1,uVar3);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x518f264d,
                                      0x3fd55555);
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar1,uVar3);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xdb6fabff,
                                      0x3fdb6db6);
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar1,uVar3);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x33333303,
                                      0x3fe33333);
                uVar16 = FUN_080004d0(uVar1,uVar3,uVar1,uVar3);
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar16,
                                      (int)((ulonglong)uVar16 >> 0x20));
                uVar16 = FUN_0800016c(uVar12,uVar4,0,uVar4);
                uVar16 = FUN_080004d0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                                      uVar13);
                uVar14 = FUN_0800016c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar14,
                                      (int)((ulonglong)uVar14 >> 0x20));
                uVar1 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar16 = FUN_080004d0(0,uVar4,0,uVar4);
                uVar3 = (undefined4)((ulonglong)uVar16 >> 0x20);
                uVar17 = FUN_0800016c((int)uVar16,uVar3,0,0x40080000);
                FUN_0800016c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar14,uVar1);
                uVar17 = FUN_080004d0(0,uVar4,0,extraout_r1_00);
                uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
                uVar20 = FUN_08000168(0,extraout_r1_00,0,0x40080000);
                uVar16 = FUN_08000168((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar16,uVar3
                                     );
                uVar14 = FUN_08000168((int)uVar14,uVar1,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20)
                                     );
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar4);
                uVar15 = FUN_080004d0((int)uVar15,uVar13,0,extraout_r1_00);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                      (int)((ulonglong)uVar15 >> 0x20));
                uVar1 = (undefined4)((ulonglong)uVar14 >> 0x20);
                FUN_0800016c((int)uVar17,uVar7,(int)uVar14,uVar1);
                uVar15 = FUN_080004d0(0,extraout_r1_01,0xe0000000,0x3feec709);
                uVar16 = FUN_08000168(0,extraout_r1_01,(int)uVar17,uVar7);
                uVar14 = FUN_08000168((int)uVar14,uVar1,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20)
                                     );
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xdc3a03fd,
                                      0x3feec709);
                uVar16 = FUN_080004d0(0,extraout_r1_01,0x145b01f5,0xbe3e2fe0);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar16,
                                      (int)((ulonglong)uVar16 >> 0x20));
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                                      *(undefined4 *)(&DAT_080073e0 + iVar6),
                                      *(undefined4 *)(&DAT_080073e4 + iVar6));
                uVar16 = FUN_08000404(local_54);
                uVar1 = (undefined4)((ulonglong)uVar16 >> 0x20);
                uVar12 = *(undefined4 *)(&DAT_080073d0 + iVar6);
                uVar13 = *(undefined4 *)(&DAT_080073d4 + iVar6);
                uVar17 = FUN_0800016c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                                      (int)((ulonglong)uVar14 >> 0x20));
                uVar17 = FUN_0800016c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar12,uVar13);
                FUN_0800016c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,uVar1);
                uVar16 = FUN_08000168(0,extraout_r1_02,(int)uVar16,uVar1);
                lVar18 = FUN_08000168((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar12,uVar13);
                uVar11 = extraout_r1_02;
              }
              else {
                if (0x43f00000 < uVar11) {
                  if (uVar8 < 0x3ff00000) goto LAB_080063fa;
LAB_08006418:
                  if ((int)param_4 < 1) {
                    return 0;
                  }
LAB_08006400:
                  param_1 = 0x8800759c;
                  param_2 = 0x7e37e43c;
                  uVar15 = 0x7e37e43c8800759c;
                  goto LAB_0800634a;
                }
                if (uVar8 < 0x3fefffff) {
LAB_080063fa:
                  if (-1 < (int)param_4) {
                    return 0;
                  }
                  goto LAB_08006400;
                }
                if (0x3ff00000 < uVar8) goto LAB_08006418;
                uVar15 = FUN_08000168(uVar1,uVar12,0,0x3ff00000);
                uVar12 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar1 = (undefined4)uVar15;
                uVar15 = FUN_080004d0(uVar1,uVar12,0x60000000,0x3ff71547);
                uVar14 = FUN_080004d0(uVar1,uVar12,0xf85ddf44,0x3e54ae0b);
                uVar16 = FUN_080004d0(uVar1,uVar12,0,0x3fd00000);
                uVar16 = FUN_08000168(0x55555555,0x3fd55555,(int)uVar16,
                                      (int)((ulonglong)uVar16 >> 0x20));
                uVar16 = FUN_080004d0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar1,uVar12);
                uVar16 = FUN_08000168(0,0x3fe00000,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
                uVar17 = FUN_080004d0(uVar1,uVar12,uVar1,uVar12);
                uVar16 = FUN_080004d0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                                      (int)((ulonglong)uVar17 >> 0x20));
                uVar16 = FUN_080004d0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0x652b82fe,
                                      0x3ff71547);
                uVar14 = FUN_08000168((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar16,
                                      (int)((ulonglong)uVar16 >> 0x20));
                FUN_0800016c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                             (int)((ulonglong)uVar14 >> 0x20));
                lVar18 = (ulonglong)extraout_r1 << 0x20;
                uVar11 = extraout_r1;
              }
              uVar15 = FUN_08000168((int)lVar18,(int)((ulonglong)lVar18 >> 0x20),(int)uVar15,
                                    (int)((ulonglong)uVar15 >> 0x20));
              uVar15 = FUN_08000168((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                    (int)((ulonglong)uVar15 >> 0x20));
              if ((local_70 - 1 | uVar2) == 0) {
                param_2 = 0xbff00000;
              }
              else {
                param_2 = 0x3ff00000;
              }
              local_70 = 0;
              uVar14 = FUN_08000168(param_3,param_4,0,param_4);
              uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,uVar11);
              uVar15 = FUN_080004d0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),param_3,param_4);
              uVar15 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                    (int)((ulonglong)uVar15 >> 0x20));
              uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
              uVar1 = (undefined4)uVar15;
              uVar15 = FUN_080004d0(0,uVar11,0,param_4);
              uVar3 = (undefined4)((ulonglong)uVar15 >> 0x20);
              uVar12 = (undefined4)uVar15;
              lVar18 = FUN_0800016c(uVar1,uVar13,uVar12,uVar3);
              uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
              uVar11 = (uint)lVar18;
              if (0x408fffffffffffff < lVar18) {
                if ((uVar8 + 0xbf700000 | uVar11) == 0) {
                  uVar14 = FUN_0800016c(uVar1,uVar13,0x652b82fe,0x3c971547);
                  uVar16 = FUN_08000168(uVar11,uVar8,uVar12,uVar3);
                  iVar5 = FUN_080009f0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar16,
                                       (int)((ulonglong)uVar16 >> 0x20));
                  if (iVar5 == 0) goto LAB_08006968;
                }
                uVar15 = FUN_080004d0(0,param_2,0x8800759c,0x7e37e43c);
                param_1 = 0x8800759c;
                param_2 = 0x7e37e43c;
                goto LAB_0800634a;
              }
              if ((uVar8 & 0x7fffffff) < 0x4090cc00) {
LAB_08006968:
                if ((uVar8 & 0x7fffffff) < 0x3fe00001) {
                  iVar5 = 0;
                }
                else {
                  uVar8 = (0x100000 >> (((int)(uVar8 & 0x7fffffff) >> 0x14) - 0x3feU & 0xff)) +
                          uVar8;
                  uVar11 = (uVar8 * 2 >> 0x15) - 0x3ff;
                  iVar5 = (int)(uVar8 & 0xfffff | 0x100000) >> (0x14 - uVar11 & 0xff);
                  if (lVar18 < 0) {
                    iVar5 = -iVar5;
                  }
                  uVar15 = FUN_08000168(uVar12,uVar3,0,uVar8 & ~(0xfffff >> (uVar11 & 0xff)));
                }
                local_64 = (undefined4)((ulonglong)uVar15 >> 0x20);
                local_68 = (undefined4)uVar15;
                FUN_0800016c(local_68,local_64,uVar1,uVar13);
                uVar15 = FUN_080004d0(0,extraout_r1_03,0,0x3fe62e43);
                uVar12 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar14 = FUN_08000168(0,extraout_r1_03,local_68,local_64);
                uVar14 = FUN_08000168(uVar1,uVar13,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xfefa39ef,
                                      0x3fe62e42);
                uVar16 = FUN_080004d0(0,extraout_r1_03,0xca86c39,0xbe205c61);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar16,
                                      (int)((ulonglong)uVar16 >> 0x20));
                uVar13 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar16 = FUN_0800016c((int)uVar15,uVar12,(int)uVar14,uVar13);
                uVar3 = (undefined4)((ulonglong)uVar16 >> 0x20);
                uVar1 = (undefined4)uVar16;
                uVar15 = FUN_08000168(uVar1,uVar3,(int)uVar15,uVar12);
                uVar15 = FUN_08000168((int)uVar14,uVar13,(int)uVar15,
                                      (int)((ulonglong)uVar15 >> 0x20));
                uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar14 = FUN_080004d0(uVar1,uVar3,uVar1,uVar3);
                uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar12 = (undefined4)uVar14;
                uVar14 = FUN_080004d0(uVar12,uVar4,0x72bea4d0,0x3e663769);
                uVar14 = FUN_08000168((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xc5d26bf1,
                                      0x3ebbbd41);
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar4);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xaf25de2c,
                                      0x3f11566a);
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar4);
                uVar14 = FUN_08000168((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x16bebd93,
                                      0x3f66c16c);
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar4);
                uVar14 = FUN_0800016c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x5555553e,
                                      0x3fc55555);
                uVar14 = FUN_080004d0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar4);
                uVar14 = FUN_08000168(uVar1,uVar3,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
                uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar16 = FUN_080004d0(uVar1,uVar3,(int)uVar14,uVar12);
                uVar14 = FUN_08000168((int)uVar14,uVar12,0,0x40000000);
                uVar14 = FUN_08000724((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar14,
                                      (int)((ulonglong)uVar14 >> 0x20));
                uVar16 = FUN_080004d0(uVar1,uVar3,(int)uVar15,uVar13);
                uVar15 = FUN_0800016c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                                      uVar13);
                uVar15 = FUN_08000168((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                      (int)((ulonglong)uVar15 >> 0x20));
                uVar15 = FUN_08000168((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar1,uVar3);
                uVar14 = FUN_08000168(0,0x3ff00000,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
                iVar6 = (int)((ulonglong)uVar14 >> 0x20);
                iVar10 = iVar6 + iVar5 * 0x100000;
                uVar15 = CONCAT44(iVar10,(int)uVar14);
                param_1 = local_70;
                if (iVar10 < 0x100000) {
                  uVar15 = FUN_080071c0((int)uVar14,iVar6,iVar5);
                }
              }
              else {
                if ((uVar8 + 0x3f6f3400 | uVar11) == 0) {
                  uVar14 = FUN_08000168(uVar11,uVar8,uVar12,uVar3);
                  iVar5 = FUN_080009c8(uVar1,uVar13,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
                  if (iVar5 == 0) goto LAB_08006968;
                }
                uVar15 = FUN_080004d0(0,param_2,0xc2f8f359,0x1a56e1f);
                param_1 = 0xc2f8f359;
                param_2 = 0x1a56e1f;
              }
LAB_0800634a:
              uVar11 = FUN_080004d0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),param_1,param_2);
              return uVar11;
            }
          }
          uVar1 = (undefined4)((ulonglong)uVar14 >> 0x20);
          uVar14 = FUN_08000168((int)uVar14,uVar1,(int)uVar14,uVar1);
          uVar15 = uVar14;
LAB_08006320:
          uVar11 = FUN_08000724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                (int)((ulonglong)uVar15 >> 0x20));
          return uVar11;
        }
      }
    }
    else if (uVar11 < 0x7ff00001) goto LAB_08006262;
  }
  if ((uVar8 + 0xc0100000 | param_1) == 0) {
    return 0;
  }
LAB_08006278:
  uVar11 = FUN_080070a4(&DAT_0800737e);
  return uVar11;
}


////>>0x08006c0c>>FUN_08006c0c>>////

undefined8 FUN_08006c0c(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  
  if ((~param_2 & 0x7ff00000) == 0) {
    uVar12 = FUN_080004d0(param_1,param_2,param_1,param_2);
    uVar12 = FUN_0800016c(param_1,param_2,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    return uVar12;
  }
  if ((int)param_2 < 1) {
    if ((param_2 & 0x7fffffff | param_1) == 0) {
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != 0) {
      uVar12 = FUN_08000168(param_1,param_2,param_1,param_2);
      uVar1 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar12 = FUN_08000724((int)uVar12,uVar1,(int)uVar12,uVar1);
      return uVar12;
    }
  }
  iVar3 = (int)param_2 >> 0x14;
  if (iVar3 == 0) {
    while (param_2 == 0) {
      iVar3 = iVar3 + -0x15;
      param_2 = param_1 >> 0xb;
      param_1 = param_1 << 0x15;
    }
    uVar2 = 0;
    for (; -1 < (int)(param_2 << 0xb); param_2 = param_2 << 1) {
      uVar2 = uVar2 + 1;
    }
    iVar3 = iVar3 - (uVar2 - 1);
    param_2 = param_2 | param_1 >> (0x20 - uVar2 & 0xff);
    param_1 = param_1 << (uVar2 & 0xff);
  }
  iVar7 = 0;
  uVar2 = param_2 & 0xfffff | 0x100000;
  if ((iVar3 + -0x3ff) * -0x80000000 < 0) {
    uVar2 = uVar2 * 2 - ((int)param_1 >> 0x1f);
    param_1 = param_1 << 1;
  }
  uVar2 = uVar2 * 2 - ((int)param_1 >> 0x1f);
  iVar4 = 0x16;
  uVar5 = 0;
  uVar8 = 0x200000;
  param_1 = param_1 << 1;
  do {
    iVar10 = uVar5 + uVar8;
    if (iVar10 <= (int)uVar2) {
      uVar2 = uVar2 - iVar10;
      uVar5 = iVar10 + uVar8;
      iVar7 = iVar7 + uVar8;
    }
    iVar4 = iVar4 + -1;
    uVar2 = uVar2 * 2 - ((int)param_1 >> 0x1f);
    uVar8 = uVar8 >> 1;
    param_1 = param_1 << 1;
  } while (iVar4 != 0);
  iVar10 = 0x20;
  uVar9 = 0x80000000;
  uVar8 = 0;
  iVar4 = 0;
  do {
    uVar11 = uVar9 + iVar4;
    uVar6 = uVar5;
    if (((int)uVar5 < (int)uVar2) || ((uVar2 == uVar5 && (uVar11 <= param_1)))) {
      iVar4 = uVar11 + uVar9;
      if (((int)uVar11 < 0) && (-1 < iVar4)) {
        uVar6 = uVar5 + 1;
      }
      uVar2 = uVar2 - uVar5;
      if (param_1 < uVar11) {
        uVar2 = uVar2 - 1;
      }
      param_1 = param_1 - uVar11;
      uVar8 = uVar8 + uVar9;
    }
    uVar2 = uVar2 * 2 - ((int)param_1 >> 0x1f);
    iVar10 = iVar10 + -1;
    param_1 = param_1 << 1;
    uVar9 = uVar9 >> 1;
    uVar5 = uVar6;
  } while (iVar10 != 0);
  if ((param_1 | uVar2) != 0) {
    if (uVar8 == 0xffffffff) {
      iVar7 = iVar7 + 1;
      uVar8 = 0;
    }
    else {
      uVar8 = uVar8 + 1 & 0xfffffffe;
    }
  }
  uVar8 = uVar8 >> 1;
  if (iVar7 << 0x1f < 0) {
    uVar8 = uVar8 | 0x80000000;
  }
  return CONCAT44((iVar7 >> 1) + 0x3fe00000 + (iVar3 + -0x3ff >> 1) * 0x100000,uVar8);
}


////>>0x08006d68>>FUN_08006d68>>////

undefined8 FUN_08006d68(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = CONCAT44(param_2,param_1);
  uVar8 = param_2 & 0x7fffffff;
  if (uVar8 < 0x44100000) {
    if (uVar8 < 0x3fdc0000) {
      if (uVar8 < 0x3e200000) {
        uVar10 = FUN_0800016c(param_1,param_2,0x8800759c,0x7e37e43c,param_4);
        iVar1 = FUN_080009f0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3ff00000);
        if (iVar1 != 0) {
          return uVar9;
        }
      }
      iVar1 = -1;
    }
    else {
      uVar9 = FUN_0800708c();
      uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar2 = (undefined4)uVar9;
      if (uVar8 < 0x3ff30000) {
        if (uVar8 < 0x3fe60000) {
          uVar9 = FUN_0800016c(uVar2,uVar3,uVar2,uVar3);
          uVar9 = FUN_08000168((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
          uVar10 = FUN_0800016c(uVar2,uVar3,0,0x40000000);
          uVar9 = FUN_08000724((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                               (int)((ulonglong)uVar10 >> 0x20));
          iVar1 = 0;
        }
        else {
          uVar9 = FUN_08000168(uVar2,uVar3,0,0x3ff00000);
          uVar10 = FUN_0800016c(uVar2,uVar3,0,0x3ff00000);
          uVar9 = FUN_08000724((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                               (int)((ulonglong)uVar10 >> 0x20));
          iVar1 = 1;
        }
      }
      else if (uVar8 < 0x40038000) {
        uVar9 = FUN_08000168(uVar2,uVar3,0,0x3ff80000);
        uVar10 = FUN_080004d0(uVar2,uVar3,0,0x3ff80000);
        uVar10 = FUN_0800016c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3ff00000);
        uVar9 = FUN_08000724((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                             (int)((ulonglong)uVar10 >> 0x20));
        iVar1 = 2;
      }
      else {
        uVar9 = FUN_08000724(0,0xbff00000,uVar2,uVar3);
        iVar1 = 3;
      }
    }
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = (undefined4)uVar9;
    uVar9 = FUN_080004d0(uVar6,uVar7,uVar6,uVar7);
    uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar2 = (undefined4)uVar9;
    uVar9 = FUN_080004d0(uVar2,uVar4,uVar2,uVar4);
    uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar3 = (undefined4)uVar9;
    uVar9 = FUN_080004d0(uVar3,uVar5,0xe322da11,0x3f90ad3a);
    uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x24760deb,0x3fa97b4b);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar5);
    uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xa0d03d51,0x3fb10d66);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar5);
    uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xc54c206e,0x3fb745cd);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar5);
    uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x920083ff,0x3fc24924);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar5);
    uVar9 = FUN_0800016c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x5555550d,0x3fd55555);
    uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar4);
    uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar10 = FUN_080004d0(uVar3,uVar5,0x2c6a6c2f,0xbfa2b444);
    uVar10 = FUN_08000168((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x52defd9a,0x3fadde2d);
    uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar3,uVar5);
    uVar10 = FUN_08000168((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xaf749a6d,0x3fb3b0f2);
    uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar3,uVar5);
    uVar10 = FUN_08000168((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xfe231671,0x3fbc71c6);
    uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar3,uVar5);
    uVar10 = FUN_08000168((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x9998ebc4,0x3fc99999);
    uVar10 = FUN_080004d0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar3,uVar5);
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (iVar1 == -1) {
      uVar9 = FUN_0800016c((int)uVar9,uVar2,(int)uVar10,uVar3);
      uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar7);
      uVar9 = FUN_08000168(uVar6,uVar7,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    }
    else {
      uVar9 = FUN_0800016c((int)uVar9,uVar2,(int)uVar10,uVar3);
      uVar9 = FUN_080004d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar7);
      iVar1 = iVar1 * 8;
      uVar9 = FUN_08000168((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),
                           *(undefined4 *)(&UNK_08007410 + iVar1),
                           *(undefined4 *)(&UNK_08007414 + iVar1));
      uVar9 = FUN_08000168((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar7);
      uVar9 = FUN_08000168(*(undefined4 *)(&UNK_080073f0 + iVar1),
                           *(undefined4 *)(&UNK_080073f4 + iVar1),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      if ((int)param_2 < 0) {
        uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20) + -0x80000000,(int)uVar9);
      }
    }
  }
  else if ((uVar8 < 0x7ff00001) && ((uVar8 != 0x7ff00000 || (param_1 == 0)))) {
    if ((int)param_2 < 1) {
      uVar9 = 0xbff921fb54442d18;
    }
    else {
      uVar9 = 0x3ff921fb54442d18;
    }
  }
  else {
    uVar9 = FUN_0800016c(param_1,param_2,param_1,param_2,param_4);
  }
  return uVar9;
}


////>>0x0800708c>>FUN_0800708c>>////

void FUN_0800708c(void)

{
  return;
}


////>>0x08007092>>FUN_08007092>>////

uint FUN_08007092(undefined4 param_1,uint param_2)

{
  return (param_2 | 0x80000000) + 0x100000 >> 0x1f;
}


////>>0x0800709e>>FUN_0800709e>>////

undefined4 FUN_0800709e(void)

{
  return 0;
}


////>>0x080070a4>>FUN_080070a4>>////

undefined8 FUN_080070a4(void)

{
  return 0x7ff8000000000000;
}


////>>0x080070b0>>FUN_080070b0>>////

undefined8 FUN_080070b0(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar7 = (param_2 << 1) >> 0x15;
  uVar6 = uVar7 - 0x3ff;
  uVar3 = param_2;
  if ((int)uVar6 < 0x14) {
    if ((int)uVar6 < 0) {
      if ((param_2 & 0x7fffffff | param_1) == 0) {
        return CONCAT44(param_2,param_1);
      }
      uVar3 = param_2 & 0xfffff | param_1;
      iVar1 = ((int)param_2 >> 0x1f) * -8;
      uVar2 = *(undefined4 *)(&DAT_08007430 + iVar1);
      uVar4 = *(undefined4 *)(&DAT_08007434 + iVar1);
      uVar8 = FUN_0800016c(param_1,(-uVar3 | uVar3) >> 0xc & 0x80000 | param_2 & 0xfffe0000,uVar2,
                           uVar4,param_1,param_2,param_3);
      uVar8 = FUN_08000168((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar2,uVar4);
      return CONCAT44((uint)((ulonglong)uVar8 >> 0x20) & 0x7fffffff | param_2 & 0x80000000,
                      (int)uVar8);
    }
    uVar7 = 0xfffff >> (uVar6 & 0xff);
    if ((param_2 & uVar7 | param_1) == 0) {
      return CONCAT44(param_2,param_1);
    }
    uVar7 = uVar7 >> 1;
    uVar5 = param_2 & uVar7 | param_1;
    if (uVar5 != 0) {
      if (uVar6 == 0x13) {
        uVar5 = 0x80000000;
      }
      else {
        uVar5 = 0;
      }
      uVar3 = 0x40000 >> (uVar6 & 0xff) | param_2 & ~uVar7;
    }
  }
  else {
    if (0x33 < (int)uVar6) {
      if (uVar6 != 0x400) {
        return CONCAT44(param_2,param_1);
      }
      uVar8 = FUN_0800016c();
      return uVar8;
    }
    uVar7 = uVar7 - 0x413;
    uVar6 = 0xffffffff >> (uVar7 & 0xff);
    if ((param_1 & uVar6) == 0) {
      return CONCAT44(param_2,param_1);
    }
    uVar6 = uVar6 >> 1;
    uVar5 = param_1;
    if ((param_1 & uVar6) != 0) {
      uVar5 = 0x40000000 >> (uVar7 & 0xff) | param_1 & ~uVar6;
    }
  }
  iVar1 = ((int)param_2 >> 0x1f) * -8;
  uVar2 = *(undefined4 *)(&DAT_08007430 + iVar1);
  uVar4 = *(undefined4 *)(&DAT_08007434 + iVar1);
  uVar8 = FUN_0800016c(uVar5,uVar3,uVar2,uVar4,param_1,param_2,param_3);
  uVar8 = FUN_08000168((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar2,uVar4);
  return uVar8;
}


////>>0x080071c0>>FUN_080071c0>>////

undefined8 FUN_080071c0(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  uVar1 = (param_2 << 1) >> 0x15;
  if (uVar1 == 0) {
    if ((param_2 & 0x7fffffff | param_1) == 0) {
      return uVar6;
    }
    uVar6 = FUN_080004d0(param_1,param_2,0,0x43500000);
    if (-0xc351 < param_3) {
      uVar1 = ((uint)((int)((ulonglong)uVar6 >> 0x20) << 1) >> 0x15) - 0x36;
      goto LAB_08007210;
    }
LAB_080071ec:
    uVar2 = 0xc2f8f359;
    uVar4 = 0x1a56e1f;
  }
  else {
    if (uVar1 == 0x7ff) {
      uVar6 = FUN_0800016c(param_1,param_2,param_1,param_2,param_4);
      return uVar6;
    }
LAB_08007210:
    uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
    uVar2 = (undefined4)uVar6;
    iVar3 = uVar1 + param_3;
    if (iVar3 < 0x7ff) {
      if (0 < iVar3) {
        return CONCAT44(uVar5 & 0x800fffff | iVar3 * 0x100000,uVar2);
      }
      if (iVar3 + 0x35 < 0 == SCARRY4(iVar3,0x35)) {
        uVar6 = CONCAT44(uVar5 & 0x800fffff | (iVar3 + 0x36) * 0x100000,uVar2);
        uVar2 = 0;
        uVar4 = 0x3c900000;
        goto LAB_0800722e;
      }
      if (param_3 < 0xc351) {
        uVar6 = FUN_0800729c(0xc2f8f359,0x1a56e1f,uVar2,uVar5);
        goto LAB_080071ec;
      }
    }
    uVar6 = FUN_0800729c(0x8800759c,0x7e37e43c,uVar2,uVar5);
    uVar2 = 0x8800759c;
    uVar4 = 0x7e37e43c;
  }
LAB_0800722e:
  uVar6 = FUN_080004d0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar2,uVar4);
  return uVar6;
}


////>>0x0800729c>>FUN_0800729c>>////

void FUN_0800729c(void)

{
  return;
}


////>>0x080072ac>>FUN_080072ac>>////

undefined4 FUN_080072ac(void)

{
  return DAT_200001c0;
}


////>>0x080072b8>>FUN_080072b8>>////

void FUN_080072b8(int param_1)

{
  if (DAT_200002b4 == (undefined *)0x0) {
    DAT_200002b4 = &DAT_200016a0;
  }
  DAT_200002b4 = DAT_200002b4 + param_1;
  return;
}


////>>0x080072d4>>FUN_080072d4>>////

void FUN_080072d4(void)

{
  return;
}


////>>0x080072e0>>FUN_080072e0>>////

void FUN_080072e0(void)

{
  return;
}


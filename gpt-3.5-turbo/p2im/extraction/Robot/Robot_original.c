java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x08000110>>__do_global_dtors_aux>>////

/* WARNING: Removing unreachable block (ram,0x0800011c) */

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  if ((char)completed_8655 == '\0') {
    completed_8655._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x08000134>>frame_dummy>>////

/* WARNING: Removing unreachable block (ram,0x0800013a) */

undefined8 frame_dummy(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}


////>>0x08000150>>__aeabi_drsub>>////

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __aeabi_dadd(param_1,param_2 ^ 0x80000000);
  return;
}


////>>0x08000158>>__subdf3>>////

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


////>>0x0800015c>>__aeabi_dadd>>////

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


////>>0x080003d4>>__floatunsidf>>////

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


////>>0x080003f4>>__aeabi_i2d>>////

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


////>>0x08000418>>__aeabi_f2d>>////

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


////>>0x0800045c>>__floatundidf>>////

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
LAB_08000268:
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
  iVar7 = iVar7 + -1;
  if ((param_2 & 0x100000) != 0) goto LAB_08000268;
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
      goto LAB_080002e0;
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
LAB_080002e0:
  if ((int)uVar6 <= iVar7) {
    return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000,uVar2);
  }
  uVar8 = ~(iVar7 - uVar6);
  if (0x1e < (int)uVar8) {
    return (ulonglong)(uVar4 >> (uVar8 - 0x1f & 0xff));
  }
  iVar7 = uVar8 - 0x13;
  if (iVar7 == 0 || iVar7 < 0 != SCARRY4(uVar8 - 0x1f,0xc)) {
    uVar8 = uVar8 + 1;
    return CONCAT44(uVar4 >> (uVar8 & 0xff),uVar2 >> (uVar8 & 0xff) | uVar4 << (0x20 - uVar8 & 0xff)
                   );
  }
  return (ulonglong)(uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) | uVar4 << (0xcU - iVar7 & 0xff));
}


////>>0x0800046c>>__aeabi_l2d>>////

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
LAB_08000268:
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
  iVar7 = iVar7 + -1;
  if ((uVar3 & 0x100000) != 0) goto LAB_08000268;
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
      goto LAB_080002e0;
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
LAB_080002e0:
  if ((int)uVar6 <= iVar7) {
    return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000 | uVar8,uVar2);
  }
  uVar3 = ~(iVar7 - uVar6);
  if (0x1e < (int)uVar3) {
    return CONCAT44(param_2,uVar4 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  iVar7 = uVar3 - 0x13;
  if (iVar7 == 0 || iVar7 < 0 != SCARRY4(uVar3 - 0x1f,0xc)) {
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar8 | uVar4 >> (uVar3 & 0xff),
                    uVar2 >> (uVar3 & 0xff) | uVar4 << (0x20 - uVar3 & 0xff));
  }
  return CONCAT44(param_2,uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) | uVar4 << (0xcU - iVar7 & 0xff))
         & 0x80000000ffffffff;
}


////>>0x080004c8>>__muldf3>>////

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


////>>0x0800071c>>__divdf3>>////

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


////>>0x080008ec>>__gedf2>>////

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


////>>0x080008f4>>__ledf2>>////

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


////>>0x080008fc>>__nedf2>>////

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


////>>0x08000978>>__aeabi_cdrcmple>>////

void __aeabi_cdrcmple(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __aeabi_cdcmpeq(param_3,param_4,param_1,param_2);
  return;
}


////>>0x08000988>>__aeabi_cdcmpeq>>////

undefined4 __aeabi_cdcmpeq(undefined4 param_1)

{
  __nedf2();
  return param_1;
}


////>>0x08000998>>__aeabi_dcmpeq>>////

bool __aeabi_dcmpeq(void)

{
  char in_ZR;
  
  __aeabi_cdcmpeq();
  return in_ZR != '\0';
}


////>>0x080009ac>>__aeabi_dcmplt>>////

bool __aeabi_dcmplt(void)

{
  char in_CY;
  
  __aeabi_cdcmpeq();
  return in_CY == '\0';
}


////>>0x080009c0>>__aeabi_dcmple>>////

bool __aeabi_dcmple(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x080009d4>>__aeabi_dcmpge>>////

bool __aeabi_dcmpge(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x080009e8>>__aeabi_dcmpgt>>////

bool __aeabi_dcmpgt(void)

{
  char in_CY;
  
  __aeabi_cdrcmple();
  return in_CY == '\0';
}


////>>0x080009fc>>__truncdfsf2>>////

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


////>>0x08000a9c>>__aeabi_frsub>>////

void __aeabi_frsub(uint param_1)

{
  __addsf3(param_1 ^ 0x80000000);
  return;
}


////>>0x08000aa4>>__aeabi_fsub>>////

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


////>>0x08000aa8>>__addsf3>>////

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


////>>0x08000c08>>__floatunsisf>>////

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


////>>0x08000c10>>__floatsisf>>////

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


////>>0x08000c2c>>__aeabi_ul2f>>////

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


////>>0x08000c3c>>__aeabi_l2f>>////

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


////>>0x08000cb8>>__aeabi_fmul>>////

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


////>>0x08000e20>>__aeabi_fdiv>>////

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


////>>0x08000f58>>__gesf2>>////

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


////>>0x08000f60>>__ltsf2>>////

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


////>>0x08000f68>>__cmpsf2>>////

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


////>>0x08000fc8>>__aeabi_cfrcmple>>////

void __aeabi_cfrcmple(undefined4 param_1,undefined4 param_2)

{
  __aeabi_cfcmpeq(param_2,param_1);
  return;
}


////>>0x08000fd0>>__aeabi_cfcmpeq>>////

undefined8 __aeabi_cfcmpeq(undefined4 param_1,undefined4 param_2)

{
  __cmpsf2();
  return CONCAT44(param_2,param_1);
}


////>>0x08000fe0>>__aeabi_fcmpeq>>////

bool __aeabi_fcmpeq(void)

{
  char in_ZR;
  
  __aeabi_cfcmpeq();
  return in_ZR != '\0';
}


////>>0x08000ff4>>__aeabi_fcmplt>>////

bool __aeabi_fcmplt(void)

{
  char in_CY;
  
  __aeabi_cfcmpeq();
  return in_CY == '\0';
}


////>>0x08001008>>__aeabi_fcmple>>////

bool __aeabi_fcmple(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x0800101c>>__aeabi_fcmpge>>////

bool __aeabi_fcmpge(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08001030>>__aeabi_fcmpgt>>////

bool __aeabi_fcmpgt(void)

{
  char in_CY;
  
  __aeabi_cfrcmple();
  return in_CY == '\0';
}


////>>0x08001044>>__fixunssfsi>>////

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


////>>0x08001084>>memcpy>>////

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
      goto LAB_08001108;
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
LAB_08001108:
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


////>>0x08001170>>__unorddf2>>////

undefined4 __unorddf2(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((((param_2 << 1) >> 0x15 != -1) || ((param_1 | param_2 << 0xc) == 0)) &&
     (((param_4 << 1) >> 0x15 != -1 || ((param_3 | param_4 << 0xc) == 0)))) {
    return 0;
  }
  return 1;
}


////>>0x0800119c>>__aeabi_d2iz>>////

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


////>>0x080011ec>>__aeabi_uldivmod>>////

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


////>>0x0800121c>>__udivmoddi4>>////

/* WARNING: Removing unreachable block (ram,0x080014b2) */

undefined8 __udivmoddi4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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


////>>0x080014ec>>__aeabi_idiv0>>////

void __aeabi_idiv0(void)

{
  return;
}


////>>0x080014f0>>HAL_Init>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_Init(void)

{
  _DAT_40022000 = _DAT_40022000 | 0x10;
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_InitTick(0xf);
  HAL_MspInit();
  return HAL_OK;
}


////>>0x0800151c>>HAL_InitTick>>////

HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)

{
  uint32_t uVar1;
  HAL_StatusTypeDef HVar2;
  uint32_t TickPriority_local;
  
  uVar1 = HAL_SYSTICK_Config((uint32_t)((ulonglong)SystemCoreClock / (1000 / (ulonglong)uwTickFreq))
                            );
  if (uVar1 == 0) {
    if (TickPriority < 0x10) {
      HAL_NVIC_SetPriority(SysTick_IRQn,TickPriority,0);
      HVar2 = HAL_OK;
      uwTickPrio = TickPriority;
    }
    else {
      HVar2 = HAL_ERROR;
    }
  }
  else {
    HVar2 = HAL_ERROR;
  }
  return HVar2;
}


////>>0x0800157c>>HAL_IncTick>>////

/* WARNING: Unknown calling convention */

void HAL_IncTick(void)

{
  uwTick = uwTick + uwTickFreq;
  return;
}


////>>0x080015a0>>HAL_GetTick>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_GetTick(void)

{
  return uwTick;
}


////>>0x080015b4>>NVIC_SetPriorityGrouping>>////



void NVIC_SetPriorityGrouping(uint32_t PriorityGroup)

{
  uint32_t PriorityGroup_local;
  uint32_t reg_value;
  uint32_t PriorityGroupTmp;
  
  _DAT_e000ed0c = _DAT_e000ed0c & 0xf8ff | (PriorityGroup & 7) << 8 | 0x5fa0000;
  return;
}


////>>0x080015fc>>NVIC_GetPriorityGrouping>>////


/* WARNING: Unknown calling convention */

uint32_t NVIC_GetPriorityGrouping(void)

{
  return _DAT_e000ed0c >> 8 & 7;
}


////>>0x08001618>>NVIC_SetPriority>>////

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


////>>0x0800166c>>NVIC_EncodePriority>>////

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
  return SubPriority & ~(-1 << (uVar1 & 0xff)) |
         (~(-1 << (uVar2 & 0xff)) & PreemptPriority) << (uVar1 & 0xff);
}


////>>0x080016d0>>SysTick_Config>>////



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


////>>0x08001714>>HAL_NVIC_SetPriorityGrouping>>////

void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup)

{
  uint32_t PriorityGroup_local;
  
  NVIC_SetPriorityGrouping(PriorityGroup);
  return;
}


////>>0x0800172a>>HAL_NVIC_SetPriority>>////

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


////>>0x08001762>>HAL_SYSTICK_Config>>////

uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb)

{
  uint32_t uVar1;
  uint32_t TicksNumb_local;
  
  uVar1 = SysTick_Config(TicksNumb);
  return uVar1;
}


////>>0x0800177c>>HAL_SYSTICK_CLKSourceConfig>>////



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


////>>0x080017b4>>HAL_SYSTICK_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_IRQHandler(void)

{
  HAL_TIM_PeriodElapsedCallback((TIM_HandleTypeDef *)0x0);
  return;
}


////>>0x080017c4>>HAL_GPIO_Init>>////



void HAL_GPIO_Init(GPIO_TypeDef *GPIOx,GPIO_InitTypeDef *GPIO_Init)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  GPIO_TypeDef *pGVar4;
  int iVar5;
  GPIO_InitTypeDef *GPIO_Init_local;
  GPIO_TypeDef *GPIOx_local;
  uint32_t tmpreg;
  uint32_t *configregister;
  uint32_t registeroffset;
  uint32_t temp;
  uint32_t iocurrent;
  uint32_t ioposition;
  uint32_t config;
  uint32_t position;
  
  config = 0;
  position = 0;
  do {
    if (0xf < position) {
      return;
    }
    uVar1 = 1 << (position & 0xff);
    uVar2 = GPIO_Init->Pin & uVar1;
    if (uVar2 == uVar1) {
      uVar3 = GPIO_Init->Mode;
      if (uVar3 == 0x12) {
        config = GPIO_Init->Speed + 0xc;
      }
      else if (uVar3 < 0x13) {
        if (uVar3 == 2) {
          config = GPIO_Init->Speed + 8;
        }
        else if (uVar3 < 3) {
          if (uVar3 == 0) goto LAB_08001882;
          if (uVar3 == 1) {
            config = GPIO_Init->Speed;
          }
        }
        else if (uVar3 == 3) {
          config = 0;
        }
        else if (uVar3 == 0x11) {
          config = GPIO_Init->Speed + 4;
        }
      }
      else if (uVar3 == 0x10210000) {
LAB_08001882:
        if (GPIO_Init->Pull == 0) {
          config = 4;
        }
        else if (GPIO_Init->Pull == 1) {
          config = 8;
          GPIOx->BSRR = uVar1;
        }
        else {
          config = 8;
          GPIOx->BRR = uVar1;
        }
      }
      else if (uVar3 < 0x10210001) {
        if ((uVar3 == 0x10110000) || (uVar3 == 0x10120000)) goto LAB_08001882;
      }
      else if (((uVar3 == 0x10310000) || (uVar3 == 0x10320000)) || (uVar3 == 0x10220000))
      goto LAB_08001882;
      if (uVar2 < 0x100) {
        uVar1 = position << 2;
        pGVar4 = GPIOx;
      }
      else {
        pGVar4 = (GPIO_TypeDef *)&GPIOx->CRH;
        uVar1 = (position - 8) * 4;
      }
      pGVar4->CRL = pGVar4->CRL & ~(0xf << (uVar1 & 0xff)) | config << (uVar1 & 0xff);
      if ((GPIO_Init->Mode & 0x10000000) != 0) {
        _DAT_40021018 = _DAT_40021018 | 1;
        if (GPIOx == (GPIO_TypeDef *)0x40010800) {
          iVar5 = 0;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40010c00) {
          iVar5 = 1;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40011000) {
          iVar5 = 2;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40011400) {
          iVar5 = 3;
        }
        else {
          iVar5 = 4;
        }
        *(uint *)(((position >> 2) + 2) * 4 + 0x40010000) =
             iVar5 << ((position & 3) << 2) |
             ~(0xf << ((position & 3) << 2)) & *(uint *)(((position >> 2) + 2) * 4 + 0x40010000);
        if ((GPIO_Init->Mode & 0x10000) == 0) {
          _DAT_40010400 = ~uVar2 & _DAT_40010400;
        }
        else {
          _DAT_40010400 = uVar2 | _DAT_40010400;
        }
        if ((GPIO_Init->Mode & 0x20000) == 0) {
          _DAT_40010404 = ~uVar2 & _DAT_40010404;
        }
        else {
          _DAT_40010404 = uVar2 | _DAT_40010404;
        }
        if ((GPIO_Init->Mode & 0x100000) == 0) {
          _DAT_40010408 = ~uVar2 & _DAT_40010408;
        }
        else {
          _DAT_40010408 = uVar2 | _DAT_40010408;
        }
        if ((GPIO_Init->Mode & 0x200000) == 0) {
          _DAT_4001040c = ~uVar2 & _DAT_4001040c;
        }
        else {
          _DAT_4001040c = uVar2 | _DAT_4001040c;
        }
      }
    }
    position = position + 1;
  } while( true );
}


////>>0x08001a80>>HAL_GPIO_WritePin>>////

void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin,GPIO_PinState PinState)

{
  GPIO_PinState PinState_local;
  uint16_t GPIO_Pin_local;
  GPIO_TypeDef *GPIOx_local;
  
  if (PinState == GPIO_PIN_RESET) {
    GPIOx->BSRR = (uint)GPIO_Pin << 0x10;
  }
  else {
    GPIOx->BSRR = (uint)GPIO_Pin;
  }
  return;
}


////>>0x08001ab0>>HAL_I2C_Init>>////

HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef *hi2c)

{
  uint32_t uVar1;
  char cVar2;
  HAL_StatusTypeDef HVar3;
  uint32_t uVar4;
  uint uVar5;
  bool bVar6;
  I2C_HandleTypeDef *hi2c_local;
  uint32_t pclk1;
  uint32_t freqrange;
  
  if (hi2c == (I2C_HandleTypeDef *)0x0) {
    HVar3 = HAL_ERROR;
  }
  else {
    if (hi2c->State == HAL_I2C_STATE_RESET) {
      hi2c->Lock = HAL_UNLOCKED;
      HAL_I2C_MspInit(hi2c);
    }
    hi2c->State = HAL_I2C_STATE_BUSY;
    hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffffe;
    uVar1 = HAL_RCC_GetPCLK1Freq();
    if ((hi2c->Init).ClockSpeed < 0x186a1) {
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
      uVar5 = uVar1 / 1000000;
      hi2c->Instance->CR2 = uVar5;
      if (100000 < (hi2c->Init).ClockSpeed) {
        uVar5 = (uVar5 * 300) / 1000;
      }
      hi2c->Instance->TRISE = uVar5 + 1;
      if ((hi2c->Init).ClockSpeed < 0x186a1) {
        uVar1 = (uVar1 - 1) / ((hi2c->Init).ClockSpeed << 1) + 1 & 0xfff;
        if (uVar1 < 4) {
          uVar1 = 4;
        }
      }
      else {
        if ((hi2c->Init).DutyCycle == 0) {
          uVar5 = (uVar1 - 1) / ((hi2c->Init).ClockSpeed * 3) + 1 & 0xfff;
          bVar6 = uVar5 == 0;
          if (bVar6) {
            uVar5 = 1;
          }
          cVar2 = (char)uVar5;
          if (!bVar6) {
            cVar2 = '\0';
          }
        }
        else {
          uVar5 = (uVar1 - 1) / ((hi2c->Init).ClockSpeed * 0x19) + 1 & 0xfff;
          bVar6 = uVar5 == 0;
          if (bVar6) {
            uVar5 = 1;
          }
          cVar2 = (char)uVar5;
          if (!bVar6) {
            cVar2 = '\0';
          }
        }
        if (cVar2 == '\0') {
          if ((hi2c->Init).DutyCycle == 0) {
            uVar1 = (uVar1 - 1) / ((hi2c->Init).ClockSpeed * 3) + 1 & 0xfff | 0x8000;
          }
          else {
            uVar1 = (uVar1 - 1) / ((hi2c->Init).ClockSpeed * 0x19) + 1 & 0xfff | 0xc000;
          }
        }
        else {
          uVar1 = 1;
        }
      }
      hi2c->Instance->CCR = uVar1;
      hi2c->Instance->CR1 = (hi2c->Init).NoStretchMode | (hi2c->Init).GeneralCallMode;
      hi2c->Instance->OAR1 = (hi2c->Init).OwnAddress1 | (hi2c->Init).AddressingMode;
      hi2c->Instance->OAR2 = (hi2c->Init).OwnAddress2 | (hi2c->Init).DualAddressMode;
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 1;
      hi2c->ErrorCode = 0;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->PreviousState = 0;
      hi2c->Mode = HAL_I2C_MODE_NONE;
      HVar3 = HAL_OK;
    }
    else {
      HVar3 = HAL_ERROR;
    }
  }
  return HVar3;
}


////>>0x08001cb8>>HAL_I2C_MspInit>>////

void HAL_I2C_MspInit(I2C_HandleTypeDef *hi2c)

{
  I2C_HandleTypeDef *hi2c_local;
  
  return;
}


////>>0x08001ccc>>HAL_I2C_Mem_Write>>////

/* WARNING: Removing unreachable block (ram,0x08001d5e) */
/* WARNING: Removing unreachable block (ram,0x08001d70) */
/* WARNING: Removing unreachable block (ram,0x08001d72) */
/* WARNING: Removing unreachable block (ram,0x08001d74) */

HAL_StatusTypeDef
HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress,
                 uint16_t MemAddSize,uint8_t *pData,uint16_t Size,uint32_t Timeout)

{
  HAL_StatusTypeDef HVar1;
  uint32_t Tickstart;
  uint32_t uVar2;
  int iVar3;
  byte *pbVar4;
  uint16_t MemAddSize_local;
  uint16_t MemAddress_local;
  uint16_t DevAddress_local;
  I2C_HandleTypeDef *hi2c_local;
  uint32_t tickstart;
  
  Tickstart = HAL_GetTick();
  if (hi2c->State == HAL_I2C_STATE_READY) {
    do {
      if ((~hi2c->Instance->SR2 & 2) != 0) {
        iVar3 = 0;
        goto LAB_08001d9c;
      }
      uVar2 = HAL_GetTick();
    } while (uVar2 - Tickstart < 0x1a);
    hi2c->PreviousState = 0;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->Mode = HAL_I2C_MODE_NONE;
    hi2c->Lock = HAL_UNLOCKED;
    iVar3 = 3;
LAB_08001d9c:
    if (iVar3 == 0) {
      if (hi2c->Lock == HAL_LOCKED) {
        HVar1 = HAL_BUSY;
      }
      else {
        hi2c->Lock = HAL_LOCKED;
        if ((hi2c->Instance->CR1 & 1) != 1) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 1;
        }
        hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffff7ff;
        hi2c->State = HAL_I2C_STATE_BUSY_TX;
        hi2c->Mode = HAL_I2C_MODE_MEM;
        hi2c->ErrorCode = 0;
        hi2c->pBuffPtr = pData;
        hi2c->XferCount = Size;
        hi2c->XferOptions = 0xffff0000;
        hi2c->XferSize = hi2c->XferCount;
        HVar1 = I2C_RequestMemoryWrite(hi2c,DevAddress,MemAddress,MemAddSize,Timeout,Tickstart);
        if (HVar1 == HAL_OK) {
          while (hi2c->XferSize != 0) {
            HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout,Tickstart);
            if (HVar1 != HAL_OK) {
              if (hi2c->ErrorCode == 4) {
                hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
                return HAL_ERROR;
              }
              return HAL_TIMEOUT;
            }
            pbVar4 = hi2c->pBuffPtr;
            hi2c->pBuffPtr = pbVar4 + 1;
            hi2c->Instance->DR = (uint)*pbVar4;
            hi2c->XferSize = hi2c->XferSize - 1;
            hi2c->XferCount = hi2c->XferCount - 1;
            if (((hi2c->Instance->SR1 & 4) == 4) && (hi2c->XferSize != 0)) {
              pbVar4 = hi2c->pBuffPtr;
              hi2c->pBuffPtr = pbVar4 + 1;
              hi2c->Instance->DR = (uint)*pbVar4;
              hi2c->XferSize = hi2c->XferSize - 1;
              hi2c->XferCount = hi2c->XferCount - 1;
            }
          }
          HVar1 = I2C_WaitOnBTFFlagUntilTimeout(hi2c,Timeout,Tickstart);
          if (HVar1 == HAL_OK) {
            hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
            hi2c->State = HAL_I2C_STATE_READY;
            hi2c->Mode = HAL_I2C_MODE_NONE;
            hi2c->Lock = HAL_UNLOCKED;
            HVar1 = HAL_OK;
          }
          else if (hi2c->ErrorCode == 4) {
            hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
            HVar1 = HAL_ERROR;
          }
          else {
            HVar1 = HAL_TIMEOUT;
          }
        }
        else if (hi2c->ErrorCode == 4) {
          hi2c->Lock = HAL_UNLOCKED;
          HVar1 = HAL_ERROR;
        }
        else {
          hi2c->Lock = HAL_UNLOCKED;
          HVar1 = HAL_TIMEOUT;
        }
      }
    }
    else {
      HVar1 = HAL_BUSY;
    }
  }
  else {
    HVar1 = HAL_BUSY;
  }
  return HVar1;
}


////>>0x08001f6c>>HAL_I2C_Mem_Read>>////

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

HAL_StatusTypeDef
HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress,uint16_t MemAddSize
                ,uint8_t *pData,uint16_t Size,uint32_t Timeout)

{
  HAL_StatusTypeDef HVar1;
  uint32_t Tickstart;
  uint32_t uVar2;
  int iVar3;
  uint8_t *puVar4;
  uint16_t MemAddSize_local;
  uint16_t MemAddress_local;
  uint16_t DevAddress_local;
  I2C_HandleTypeDef *hi2c_local;
  uint32_t tmpreg_3;
  uint32_t tmpreg_2;
  uint32_t tmpreg_1;
  uint32_t tmpreg;
  uint32_t tickstart;
  
  Tickstart = HAL_GetTick();
  if (hi2c->State == HAL_I2C_STATE_READY) {
    do {
      if ((~hi2c->Instance->SR2 & 2) != 0) {
        iVar3 = 0;
        goto LAB_08002040;
      }
      uVar2 = HAL_GetTick();
    } while (uVar2 - Tickstart < 0x1a);
    hi2c->PreviousState = 0;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->Mode = HAL_I2C_MODE_NONE;
    hi2c->Lock = HAL_UNLOCKED;
    iVar3 = 3;
LAB_08002040:
    if (iVar3 == 0) {
      if (hi2c->Lock == HAL_LOCKED) {
        HVar1 = HAL_BUSY;
      }
      else {
        hi2c->Lock = HAL_LOCKED;
        if ((hi2c->Instance->CR1 & 1) != 1) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 1;
        }
        hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffff7ff;
        hi2c->State = HAL_I2C_STATE_BUSY_RX;
        hi2c->Mode = HAL_I2C_MODE_MEM;
        hi2c->ErrorCode = 0;
        hi2c->pBuffPtr = pData;
        hi2c->XferCount = Size;
        hi2c->XferOptions = 0xffff0000;
        hi2c->XferSize = hi2c->XferCount;
        HVar1 = I2C_RequestMemoryRead(hi2c,DevAddress,MemAddress,MemAddSize,Timeout,Tickstart);
        if (HVar1 == HAL_OK) {
          if (hi2c->XferSize == 0) {
            hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
          }
          else if (hi2c->XferSize == 1) {
            hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
            disableIRQinterrupts();
            hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
            enableIRQinterrupts();
          }
          else if (hi2c->XferSize == 2) {
            hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x800;
            disableIRQinterrupts();
            hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
            enableIRQinterrupts();
          }
          else {
            hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
          }
          while (hi2c->XferSize != 0) {
            if (hi2c->XferSize < 4) {
              if (hi2c->XferSize == 1) {
                HVar1 = I2C_WaitOnRXNEFlagUntilTimeout(hi2c,Timeout,Tickstart);
                if (HVar1 != HAL_OK) {
                  if (hi2c->ErrorCode == 0x20) {
                    return HAL_TIMEOUT;
                  }
                  return HAL_ERROR;
                }
                uVar2 = hi2c->Instance->DR;
                puVar4 = hi2c->pBuffPtr;
                hi2c->pBuffPtr = puVar4 + 1;
                *puVar4 = (uint8_t)uVar2;
                hi2c->XferSize = hi2c->XferSize - 1;
                hi2c->XferCount = hi2c->XferCount - 1;
              }
              else if (hi2c->XferSize == 2) {
                do {
                  if ((~hi2c->Instance->SR1 & 4) == 0) {
                    iVar3 = 0;
                    goto LAB_080022fa;
                  }
                } while ((Timeout == 0xffffffff) ||
                        ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - Tickstart <= Timeout))));
                hi2c->PreviousState = 0;
                hi2c->State = HAL_I2C_STATE_READY;
                hi2c->Mode = HAL_I2C_MODE_NONE;
                hi2c->Lock = HAL_UNLOCKED;
                iVar3 = 3;
LAB_080022fa:
                if (iVar3 != 0) {
                  return HAL_TIMEOUT;
                }
                disableIRQinterrupts();
                hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
                uVar2 = hi2c->Instance->DR;
                puVar4 = hi2c->pBuffPtr;
                hi2c->pBuffPtr = puVar4 + 1;
                *puVar4 = (uint8_t)uVar2;
                hi2c->XferSize = hi2c->XferSize - 1;
                hi2c->XferCount = hi2c->XferCount - 1;
                enableIRQinterrupts();
                uVar2 = hi2c->Instance->DR;
                puVar4 = hi2c->pBuffPtr;
                hi2c->pBuffPtr = puVar4 + 1;
                *puVar4 = (uint8_t)uVar2;
                hi2c->XferSize = hi2c->XferSize - 1;
                hi2c->XferCount = hi2c->XferCount - 1;
              }
              else {
                do {
                  if ((~hi2c->Instance->SR1 & 4) == 0) {
                    iVar3 = 0;
                    goto LAB_08002418;
                  }
                } while ((Timeout == 0xffffffff) ||
                        ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - Tickstart <= Timeout))));
                hi2c->PreviousState = 0;
                hi2c->State = HAL_I2C_STATE_READY;
                hi2c->Mode = HAL_I2C_MODE_NONE;
                hi2c->Lock = HAL_UNLOCKED;
                iVar3 = 3;
LAB_08002418:
                if (iVar3 != 0) {
                  return HAL_TIMEOUT;
                }
                hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
                disableIRQinterrupts();
                uVar2 = hi2c->Instance->DR;
                puVar4 = hi2c->pBuffPtr;
                hi2c->pBuffPtr = puVar4 + 1;
                *puVar4 = (uint8_t)uVar2;
                hi2c->XferSize = hi2c->XferSize - 1;
                hi2c->XferCount = hi2c->XferCount - 1;
                do {
                  if ((~hi2c->Instance->SR1 & 4) == 0) {
                    iVar3 = 0;
                    goto LAB_0800250a;
                  }
                } while ((Timeout == 0xffffffff) ||
                        ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - Tickstart <= Timeout))));
                hi2c->PreviousState = 0;
                hi2c->State = HAL_I2C_STATE_READY;
                hi2c->Mode = HAL_I2C_MODE_NONE;
                hi2c->Lock = HAL_UNLOCKED;
                iVar3 = 3;
LAB_0800250a:
                if (iVar3 != 0) {
                  return HAL_TIMEOUT;
                }
                hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
                uVar2 = hi2c->Instance->DR;
                puVar4 = hi2c->pBuffPtr;
                hi2c->pBuffPtr = puVar4 + 1;
                *puVar4 = (uint8_t)uVar2;
                hi2c->XferSize = hi2c->XferSize - 1;
                hi2c->XferCount = hi2c->XferCount - 1;
                enableIRQinterrupts();
                uVar2 = hi2c->Instance->DR;
                puVar4 = hi2c->pBuffPtr;
                hi2c->pBuffPtr = puVar4 + 1;
                *puVar4 = (uint8_t)uVar2;
                hi2c->XferSize = hi2c->XferSize - 1;
                hi2c->XferCount = hi2c->XferCount - 1;
              }
            }
            else {
              HVar1 = I2C_WaitOnRXNEFlagUntilTimeout(hi2c,Timeout,Tickstart);
              if (HVar1 != HAL_OK) {
                if (hi2c->ErrorCode == 0x20) {
                  return HAL_TIMEOUT;
                }
                return HAL_ERROR;
              }
              uVar2 = hi2c->Instance->DR;
              puVar4 = hi2c->pBuffPtr;
              hi2c->pBuffPtr = puVar4 + 1;
              *puVar4 = (uint8_t)uVar2;
              hi2c->XferSize = hi2c->XferSize - 1;
              hi2c->XferCount = hi2c->XferCount - 1;
              if ((hi2c->Instance->SR1 & 4) == 4) {
                uVar2 = hi2c->Instance->DR;
                puVar4 = hi2c->pBuffPtr;
                hi2c->pBuffPtr = puVar4 + 1;
                *puVar4 = (uint8_t)uVar2;
                hi2c->XferSize = hi2c->XferSize - 1;
                hi2c->XferCount = hi2c->XferCount - 1;
              }
            }
          }
          hi2c->State = HAL_I2C_STATE_READY;
          hi2c->Mode = HAL_I2C_MODE_NONE;
          hi2c->Lock = HAL_UNLOCKED;
          HVar1 = HAL_OK;
        }
        else if (hi2c->ErrorCode == 4) {
          hi2c->Lock = HAL_UNLOCKED;
          HVar1 = HAL_ERROR;
        }
        else {
          hi2c->Lock = HAL_UNLOCKED;
          HVar1 = HAL_TIMEOUT;
        }
      }
    }
    else {
      HVar1 = HAL_BUSY;
    }
  }
  else {
    HVar1 = HAL_BUSY;
  }
  return HVar1;
}


////>>0x08002640>>I2C_RequestMemoryWrite>>////

/* WARNING: Removing unreachable block (ram,0x080026e8) */
/* WARNING: Removing unreachable block (ram,0x080026fa) */
/* WARNING: Removing unreachable block (ram,0x080026fc) */
/* WARNING: Removing unreachable block (ram,0x080026fe) */

HAL_StatusTypeDef
I2C_RequestMemoryWrite
          (I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress,uint16_t MemAddSize,
          uint32_t Timeout,uint32_t Tickstart)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  int iVar3;
  uint16_t MemAddSize_local;
  uint16_t MemAddress_local;
  uint16_t DevAddress_local;
  I2C_HandleTypeDef *hi2c_local;
  uint32_t tmpreg;
  
  hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
  do {
    if ((~hi2c->Instance->SR1 & 1) == 0) {
      iVar3 = 0;
      goto LAB_0800270a;
    }
  } while ((Timeout == 0xffffffff) ||
          ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - Tickstart <= Timeout))));
  hi2c->PreviousState = 0;
  hi2c->State = HAL_I2C_STATE_READY;
  hi2c->Mode = HAL_I2C_MODE_NONE;
  hi2c->Lock = HAL_UNLOCKED;
  iVar3 = 3;
LAB_0800270a:
  if (iVar3 == 0) {
    hi2c->Instance->DR = (byte)DevAddress & 0xfe;
    HVar1 = I2C_WaitOnMasterAddressFlagUntilTimeout(hi2c,0x10002,Timeout,Tickstart);
    if (HVar1 == HAL_OK) {
      HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout,Tickstart);
      if (HVar1 == HAL_OK) {
        if (MemAddSize == 1) {
          hi2c->Instance->DR = (uint)(byte)MemAddress;
        }
        else {
          hi2c->Instance->DR = (uint)(byte)(MemAddress >> 8);
          HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout,Tickstart);
          if (HVar1 != HAL_OK) {
            if (hi2c->ErrorCode == 4) {
              hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
              return HAL_ERROR;
            }
            return HAL_TIMEOUT;
          }
          hi2c->Instance->DR = (uint)(byte)MemAddress;
        }
        HVar1 = HAL_OK;
      }
      else if (hi2c->ErrorCode == 4) {
        hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
        HVar1 = HAL_ERROR;
      }
      else {
        HVar1 = HAL_TIMEOUT;
      }
    }
    else if (hi2c->ErrorCode == 4) {
      HVar1 = HAL_ERROR;
    }
    else {
      HVar1 = HAL_TIMEOUT;
    }
  }
  else {
    HVar1 = HAL_TIMEOUT;
  }
  return HVar1;
}


////>>0x080027f4>>I2C_RequestMemoryRead>>////

/* WARNING: Removing unreachable block (ram,0x080028ae) */
/* WARNING: Removing unreachable block (ram,0x080028c0) */
/* WARNING: Removing unreachable block (ram,0x080028c2) */
/* WARNING: Removing unreachable block (ram,0x080028c4) */
/* WARNING: Removing unreachable block (ram,0x08002a6c) */
/* WARNING: Removing unreachable block (ram,0x08002a7e) */
/* WARNING: Removing unreachable block (ram,0x08002a80) */
/* WARNING: Removing unreachable block (ram,0x08002a82) */

HAL_StatusTypeDef
I2C_RequestMemoryRead
          (I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress,uint16_t MemAddSize,
          uint32_t Timeout,uint32_t Tickstart)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  int iVar3;
  uint16_t MemAddSize_local;
  uint16_t MemAddress_local;
  uint16_t DevAddress_local;
  I2C_HandleTypeDef *hi2c_local;
  uint32_t tmpreg;
  
  hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
  hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
  do {
    if ((~hi2c->Instance->SR1 & 1) == 0) {
      iVar3 = 0;
      goto LAB_080028d2;
    }
  } while ((Timeout == 0xffffffff) ||
          ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - Tickstart <= Timeout))));
  hi2c->PreviousState = 0;
  hi2c->State = HAL_I2C_STATE_READY;
  hi2c->Mode = HAL_I2C_MODE_NONE;
  hi2c->Lock = HAL_UNLOCKED;
  iVar3 = 3;
LAB_080028d2:
  if (iVar3 == 0) {
    hi2c->Instance->DR = (byte)DevAddress & 0xfe;
    HVar1 = I2C_WaitOnMasterAddressFlagUntilTimeout(hi2c,0x10002,Timeout,Tickstart);
    if (HVar1 == HAL_OK) {
      HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout,Tickstart);
      if (HVar1 == HAL_OK) {
        if (MemAddSize == 1) {
          hi2c->Instance->DR = (uint)(byte)MemAddress;
        }
        else {
          hi2c->Instance->DR = (uint)(byte)(MemAddress >> 8);
          HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout,Tickstart);
          if (HVar1 != HAL_OK) {
            if (hi2c->ErrorCode == 4) {
              hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
              return HAL_ERROR;
            }
            return HAL_TIMEOUT;
          }
          hi2c->Instance->DR = (uint)(byte)MemAddress;
        }
        HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout,Tickstart);
        if (HVar1 == HAL_OK) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
          do {
            if ((~hi2c->Instance->SR1 & 1) == 0) {
              iVar3 = 0;
              goto LAB_08002a90;
            }
          } while ((Timeout == 0xffffffff) ||
                  ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - Tickstart <= Timeout))));
          hi2c->PreviousState = 0;
          hi2c->State = HAL_I2C_STATE_READY;
          hi2c->Mode = HAL_I2C_MODE_NONE;
          hi2c->Lock = HAL_UNLOCKED;
          iVar3 = 3;
LAB_08002a90:
          if (iVar3 == 0) {
            hi2c->Instance->DR = (uint)(byte)((byte)DevAddress | 1);
            HVar1 = I2C_WaitOnMasterAddressFlagUntilTimeout(hi2c,0x10002,Timeout,Tickstart);
            if (HVar1 == HAL_OK) {
              HVar1 = HAL_OK;
            }
            else if (hi2c->ErrorCode == 4) {
              HVar1 = HAL_ERROR;
            }
            else {
              HVar1 = HAL_TIMEOUT;
            }
          }
          else {
            HVar1 = HAL_TIMEOUT;
          }
        }
        else if (hi2c->ErrorCode == 4) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
          HVar1 = HAL_ERROR;
        }
        else {
          HVar1 = HAL_TIMEOUT;
        }
      }
      else if (hi2c->ErrorCode == 4) {
        hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
        HVar1 = HAL_ERROR;
      }
      else {
        HVar1 = HAL_TIMEOUT;
      }
    }
    else if (hi2c->ErrorCode == 4) {
      HVar1 = HAL_ERROR;
    }
    else {
      HVar1 = HAL_TIMEOUT;
    }
  }
  else {
    HVar1 = HAL_TIMEOUT;
  }
  return HVar1;
}


////>>0x08002ad8>>I2C_WaitOnMasterAddressFlagUntilTimeout>>////

HAL_StatusTypeDef
I2C_WaitOnMasterAddressFlagUntilTimeout
          (I2C_HandleTypeDef *hi2c,uint32_t Flag,uint32_t Timeout,uint32_t Tickstart)

{
  uint32_t uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  uint32_t Tickstart_local;
  uint32_t Timeout_local;
  uint32_t Flag_local;
  I2C_HandleTypeDef *hi2c_local;
  
  do {
    if ((Flag >> 0x10 & 0xff) == 1) {
      uVar3 = Flag & ~hi2c->Instance->SR1 & 0xffff;
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
      uVar3 = Flag & ~hi2c->Instance->SR2 & 0xffff;
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
      return HAL_OK;
    }
    if ((hi2c->Instance->SR1 & 0x400) == 0x400) {
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
      hi2c->Instance->SR1 = 0xfffffbff;
      hi2c->ErrorCode = 4;
      hi2c->PreviousState = 0;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_ERROR;
    }
  } while ((Timeout == 0xffffffff) ||
          ((Timeout != 0 && (uVar1 = HAL_GetTick(), uVar1 - Tickstart <= Timeout))));
  hi2c->PreviousState = 0;
  hi2c->State = HAL_I2C_STATE_READY;
  hi2c->Lock = HAL_UNLOCKED;
  return HAL_TIMEOUT;
}


////>>0x08002bb4>>I2C_WaitOnTXEFlagUntilTimeout>>////

HAL_StatusTypeDef
I2C_WaitOnTXEFlagUntilTimeout(I2C_HandleTypeDef *hi2c,uint32_t Timeout,uint32_t Tickstart)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  uint32_t Tickstart_local;
  uint32_t Timeout_local;
  I2C_HandleTypeDef *hi2c_local;
  
  while( true ) {
    if ((hi2c->Instance->SR1 & 0x80) == 0x80) {
      return HAL_OK;
    }
    HVar1 = I2C_IsAcknowledgeFailed(hi2c);
    if (HVar1 != HAL_OK) break;
    if ((Timeout != 0xffffffff) &&
       ((Timeout == 0 || (uVar2 = HAL_GetTick(), Timeout < uVar2 - Tickstart)))) {
      hi2c->ErrorCode = hi2c->ErrorCode | 0x20;
      hi2c->PreviousState = 0;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_TIMEOUT;
    }
  }
  return HAL_ERROR;
}


////>>0x08002c2e>>I2C_WaitOnBTFFlagUntilTimeout>>////

HAL_StatusTypeDef
I2C_WaitOnBTFFlagUntilTimeout(I2C_HandleTypeDef *hi2c,uint32_t Timeout,uint32_t Tickstart)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  uint32_t Tickstart_local;
  uint32_t Timeout_local;
  I2C_HandleTypeDef *hi2c_local;
  
  while( true ) {
    if ((hi2c->Instance->SR1 & 4) == 4) {
      return HAL_OK;
    }
    HVar1 = I2C_IsAcknowledgeFailed(hi2c);
    if (HVar1 != HAL_OK) break;
    if ((Timeout != 0xffffffff) &&
       ((Timeout == 0 || (uVar2 = HAL_GetTick(), Timeout < uVar2 - Tickstart)))) {
      hi2c->ErrorCode = hi2c->ErrorCode | 0x20;
      hi2c->PreviousState = 0;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_TIMEOUT;
    }
  }
  return HAL_ERROR;
}


////>>0x08002ca8>>I2C_WaitOnRXNEFlagUntilTimeout>>////

HAL_StatusTypeDef
I2C_WaitOnRXNEFlagUntilTimeout(I2C_HandleTypeDef *hi2c,uint32_t Timeout,uint32_t Tickstart)

{
  uint32_t uVar1;
  uint32_t Tickstart_local;
  uint32_t Timeout_local;
  I2C_HandleTypeDef *hi2c_local;
  
  while( true ) {
    if ((hi2c->Instance->SR1 & 0x40) == 0x40) {
      return HAL_OK;
    }
    if ((hi2c->Instance->SR1 & 0x10) == 0x10) break;
    if ((Timeout == 0) || (uVar1 = HAL_GetTick(), Timeout < uVar1 - Tickstart)) {
      hi2c->ErrorCode = hi2c->ErrorCode | 0x20;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_TIMEOUT;
    }
  }
  hi2c->Instance->SR1 = 0xffffffef;
  hi2c->ErrorCode = 0;
  hi2c->PreviousState = 0;
  hi2c->State = HAL_I2C_STATE_READY;
  hi2c->Lock = HAL_UNLOCKED;
  return HAL_ERROR;
}


////>>0x08002d3c>>I2C_IsAcknowledgeFailed>>////

HAL_StatusTypeDef I2C_IsAcknowledgeFailed(I2C_HandleTypeDef *hi2c)

{
  bool bVar1;
  I2C_HandleTypeDef *hi2c_local;
  
  bVar1 = (hi2c->Instance->SR1 & 0x400) == 0x400;
  if (bVar1) {
    hi2c->Instance->SR1 = 0xfffffbff;
    hi2c->ErrorCode = 4;
    hi2c->PreviousState = 0;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->Lock = HAL_UNLOCKED;
  }
  return bVar1;
}


////>>0x08002d8a>>HAL_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_MspInit(void)

{
  return;
}


////>>0x08002d98>>HAL_RCC_OscConfig>>////



HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct)

{
  uint32_t uVar1;
  uint32_t uVar2;
  HAL_StatusTypeDef HVar3;
  bool bVar4;
  RCC_OscInitTypeDef *RCC_OscInitStruct_local;
  uint32_t tmpreg;
  uint32_t tickstart;
  FlagStatus pwrclkchanged;
  
  if ((RCC_OscInitStruct->OscillatorType & 1) != 0) {
    if (((_DAT_40021004 & 0xc) == 4) ||
       (((_DAT_40021004 & 0xc) == 8 && ((_DAT_40021004 & 0x10000) == 0x10000)))) {
      if (((_DAT_40021000 & 0x20000) != 0) && (RCC_OscInitStruct->HSEState == 0)) {
        return HAL_ERROR;
      }
    }
    else {
      if (RCC_OscInitStruct->HSEState == 0x10000) {
        _DAT_40021000 = _DAT_40021000 | 0x10000;
      }
      else if (RCC_OscInitStruct->HSEState == 0) {
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      else if (RCC_OscInitStruct->HSEState == 0x50000) {
        _DAT_40021000 = _DAT_40021000 | 0x50000;
      }
      else {
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      if (RCC_OscInitStruct->HSEState == 0) {
        uVar1 = HAL_GetTick();
        while ((_DAT_40021000 & 0x20000) != 0) {
          uVar2 = HAL_GetTick();
          if (100 < uVar2 - uVar1) {
            return HAL_TIMEOUT;
          }
        }
      }
      else {
        uVar1 = HAL_GetTick();
        while ((_DAT_40021000 & 0x20000) == 0) {
          uVar2 = HAL_GetTick();
          if (100 < uVar2 - uVar1) {
            return HAL_TIMEOUT;
          }
        }
      }
    }
  }
  if ((RCC_OscInitStruct->OscillatorType & 2) != 0) {
    if (((_DAT_40021004 & 0xc) == 0) ||
       (((_DAT_40021004 & 0xc) == 8 && ((_DAT_40021004 & 0x10000) == 0)))) {
      if (((_DAT_40021000 & 2) != 0) && (RCC_OscInitStruct->HSIState != 1)) {
        return HAL_ERROR;
      }
      _DAT_40021000 = RCC_OscInitStruct->HSICalibrationValue << 3 | _DAT_40021000 & 0xffffff07;
    }
    else if (RCC_OscInitStruct->HSIState == 0) {
      _DAT_42420000 = 0;
      uVar1 = HAL_GetTick();
      while ((_DAT_40021000 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      _DAT_42420000 = 1;
      uVar1 = HAL_GetTick();
      while ((_DAT_40021000 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
      _DAT_40021000 = RCC_OscInitStruct->HSICalibrationValue << 3 | _DAT_40021000 & 0xffffff07;
    }
  }
  if ((RCC_OscInitStruct->OscillatorType & 8) != 0) {
    if (RCC_OscInitStruct->LSIState == 0) {
      _DAT_42420480 = 0;
      uVar1 = HAL_GetTick();
      while ((_DAT_40021024 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      _DAT_42420480 = 1;
      uVar1 = HAL_GetTick();
      while ((_DAT_40021024 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
      RCC_Delay(1);
    }
  }
  if ((RCC_OscInitStruct->OscillatorType & 4) != 0) {
    bVar4 = (_DAT_4002101c & 0x10000000) == 0;
    if (bVar4) {
      _DAT_4002101c = _DAT_4002101c | 0x10000000;
    }
    if ((_DAT_40007000 & 0x100) == 0) {
      _DAT_40007000 = _DAT_40007000 | 0x100;
      uVar1 = HAL_GetTick();
      while ((_DAT_40007000 & 0x100) == 0) {
        uVar2 = HAL_GetTick();
        if (100 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
    if (RCC_OscInitStruct->LSEState == 1) {
      _DAT_40021020 = _DAT_40021020 | 1;
    }
    else if (RCC_OscInitStruct->LSEState == 0) {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
    }
    else if (RCC_OscInitStruct->LSEState == 5) {
      _DAT_40021020 = _DAT_40021020 | 5;
    }
    else {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
    }
    if (RCC_OscInitStruct->LSEState == 0) {
      uVar1 = HAL_GetTick();
      while ((_DAT_40021020 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (5000 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      uVar1 = HAL_GetTick();
      while ((_DAT_40021020 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (5000 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
    if (bVar4) {
      _DAT_4002101c = _DAT_4002101c & 0xefffffff;
    }
  }
  if ((RCC_OscInitStruct->PLL).PLLState == 0) {
LAB_0800324a:
    HVar3 = HAL_OK;
  }
  else if ((_DAT_40021004 & 0xc) == 8) {
    HVar3 = HAL_ERROR;
  }
  else if ((RCC_OscInitStruct->PLL).PLLState == 2) {
    _DAT_42420060 = 0;
    uVar1 = HAL_GetTick();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) {
        if ((RCC_OscInitStruct->PLL).PLLSource == 0x10000) {
          _DAT_40021004 = RCC_OscInitStruct->HSEPredivValue | _DAT_40021004 & 0xfffdffff;
        }
        _DAT_40021004 =
             (RCC_OscInitStruct->PLL).PLLMUL | (RCC_OscInitStruct->PLL).PLLSource |
             _DAT_40021004 & 0xffc2ffff;
        _DAT_42420060 = 1;
        uVar1 = HAL_GetTick();
        while ((_DAT_40021000 & 0x2000000) == 0) {
          uVar2 = HAL_GetTick();
          if (2 < uVar2 - uVar1) {
            return HAL_TIMEOUT;
          }
        }
        goto LAB_0800324a;
      }
      uVar2 = HAL_GetTick();
    } while (uVar2 - uVar1 < 3);
    HVar3 = HAL_TIMEOUT;
  }
  else {
    _DAT_42420060 = 0;
    uVar1 = HAL_GetTick();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) goto LAB_0800324a;
      uVar2 = HAL_GetTick();
    } while (uVar2 - uVar1 < 3);
    HVar3 = HAL_TIMEOUT;
  }
  return HVar3;
}


////>>0x08003260>>HAL_RCC_ClockConfig>>////



HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct,uint32_t FLatency)

{
  uint32_t uVar1;
  uint32_t uVar2;
  HAL_StatusTypeDef HVar3;
  uint32_t FLatency_local;
  RCC_ClkInitTypeDef *RCC_ClkInitStruct_local;
  uint32_t tickstart;
  
  if (((_DAT_40022000 & 7) < FLatency) &&
     (_DAT_40022000 = FLatency | _DAT_40022000 & 0xfffffff8, FLatency != (FLatency & 7))) {
    HVar3 = HAL_ERROR;
  }
  else {
    if ((RCC_ClkInitStruct->ClockType & 2) != 0) {
      _DAT_40021004 = RCC_ClkInitStruct->AHBCLKDivider | _DAT_40021004 & 0xffffff0f;
    }
    if ((RCC_ClkInitStruct->ClockType & 1) == 0) {
LAB_08003394:
      if ((FLatency < (_DAT_40022000 & 7)) &&
         (_DAT_40022000 = FLatency | _DAT_40022000 & 0xfffffff8, FLatency != (FLatency & 7))) {
        HVar3 = HAL_ERROR;
      }
      else {
        if ((RCC_ClkInitStruct->ClockType & 4) != 0) {
          _DAT_40021004 = RCC_ClkInitStruct->APB1CLKDivider | _DAT_40021004 & 0xfffff8ff;
        }
        if ((RCC_ClkInitStruct->ClockType & 8) != 0) {
          _DAT_40021004 = RCC_ClkInitStruct->APB2CLKDivider << 3 | _DAT_40021004 & 0xffffc7ff;
        }
        uVar1 = HAL_RCC_GetSysClockFreq();
        SystemCoreClock = uVar1 >> ""[_DAT_40021004 >> 4 & 0xf];
        HAL_InitTick(0xf);
        HVar3 = HAL_OK;
      }
    }
    else {
      if (RCC_ClkInitStruct->SYSCLKSource == 1) {
        if ((_DAT_40021000 & 0x20000) == 0) {
          return HAL_ERROR;
        }
      }
      else if ((RCC_ClkInitStruct->SYSCLKSource != 2) && ((_DAT_40021000 & 2) == 0)) {
        return HAL_ERROR;
      }
      _DAT_40021004 = RCC_ClkInitStruct->SYSCLKSource | _DAT_40021004 & 0xfffffffc;
      uVar1 = HAL_GetTick();
      if (RCC_ClkInitStruct->SYSCLKSource == 1) {
        do {
          if ((_DAT_40021004 & 0xc) == 4) goto LAB_08003394;
          uVar2 = HAL_GetTick();
        } while (uVar2 - uVar1 < 0x1389);
        HVar3 = HAL_TIMEOUT;
      }
      else if (RCC_ClkInitStruct->SYSCLKSource == 2) {
        do {
          if ((_DAT_40021004 & 0xc) == 8) goto LAB_08003394;
          uVar2 = HAL_GetTick();
        } while (uVar2 - uVar1 < 0x1389);
        HVar3 = HAL_TIMEOUT;
      }
      else {
        do {
          if ((_DAT_40021004 & 0xc) == 0) goto LAB_08003394;
          uVar2 = HAL_GetTick();
        } while (uVar2 - uVar1 < 0x1389);
        HVar3 = HAL_TIMEOUT;
      }
    }
  }
  return HVar3;
}


////>>0x08003440>>HAL_RCC_GetSysClockFreq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetSysClockFreq(void)

{
  uint8_t aPredivFactorTable [2];
  uint8_t aPLLMULFactorTable [16];
  uint32_t pllmul;
  uint32_t prediv;
  uint32_t tmpreg;
  uint32_t sysclockfreq;
  uint32_t pllclk;
  
  aPLLMULFactorTable[0] = '\x02';
  aPLLMULFactorTable[1] = '\x03';
  aPLLMULFactorTable[2] = '\x04';
  aPLLMULFactorTable[3] = '\x05';
  aPLLMULFactorTable[4] = '\x06';
  aPLLMULFactorTable[5] = '\a';
  aPLLMULFactorTable[6] = '\b';
  aPLLMULFactorTable[7] = '\t';
  aPLLMULFactorTable[8] = '\n';
  aPLLMULFactorTable[9] = '\v';
  aPLLMULFactorTable[10] = '\f';
  aPLLMULFactorTable[11] = '\r';
  aPLLMULFactorTable[12] = '\x0e';
  aPLLMULFactorTable[13] = '\x0f';
  aPLLMULFactorTable[14] = '\x10';
  aPLLMULFactorTable[15] = '\x10';
  aPredivFactorTable[0] = '\x01';
  aPredivFactorTable[1] = '\x02';
  if ((_DAT_40021004 & 0xc) == 4) {
    sysclockfreq = 8000000;
  }
  else if ((_DAT_40021004 & 0xc) == 8) {
    if ((_DAT_40021004 & 0x10000) == 0) {
      pllclk = (uint)aPLLMULFactorTable[_DAT_40021004 >> 0x12 & 0xf] * 4000000;
    }
    else {
      pllclk = ((uint)aPLLMULFactorTable[_DAT_40021004 >> 0x12 & 0xf] * 8000000) /
               (uint)aPredivFactorTable[_DAT_40021004 >> 0x11 & 1];
    }
    sysclockfreq = pllclk;
  }
  else {
    sysclockfreq = 8000000;
  }
  return sysclockfreq;
}


////>>0x08003504>>HAL_RCC_GetHCLKFreq>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetHCLKFreq(void)

{
  return SystemCoreClock;
}


////>>0x08003518>>HAL_RCC_GetPCLK1Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK1Freq(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[_DAT_40021004 >> 8 & 7];
}


////>>0x08003540>>HAL_RCC_GetPCLK2Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK2Freq(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[_DAT_40021004 >> 0xb & 7];
}


////>>0x08003568>>RCC_Delay>>////

void RCC_Delay(uint32_t mdelay)

{
  bool bVar1;
  uint32_t mdelay_local;
  uint32_t Delay;
  
  Delay = mdelay * (SystemCoreClock / 8000);
  do {
    bVar1 = Delay != 0;
    Delay = Delay - 1;
  } while (bVar1);
  return;
}


////>>0x080035a4>>HAL_TIM_Base_Init>>////

HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim)

{
  HAL_StatusTypeDef HVar1;
  TIM_HandleTypeDef *htim_local;
  
  if (htim == (TIM_HandleTypeDef *)0x0) {
    HVar1 = HAL_ERROR;
  }
  else {
    if (htim->State == HAL_TIM_STATE_RESET) {
      htim->Lock = HAL_UNLOCKED;
      HAL_TIM_Base_MspInit(htim);
    }
    htim->State = HAL_TIM_STATE_BUSY;
    TIM_Base_SetConfig(htim->Instance,&htim->Init);
    htim->State = HAL_TIM_STATE_READY;
    HVar1 = HAL_OK;
  }
  return HVar1;
}


////>>0x080035fa>>HAL_TIM_Base_MspInit>>////

void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  return;
}


////>>0x0800360c>>HAL_TIM_Base_Start_IT>>////

HAL_StatusTypeDef HAL_TIM_Base_Start_IT(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  htim->Instance->DIER = htim->Instance->DIER | 1;
  htim->Instance->CR1 = htim->Instance->CR1 | 1;
  return HAL_OK;
}


////>>0x08003640>>HAL_TIM_PWM_Init>>////

HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim)

{
  HAL_StatusTypeDef HVar1;
  TIM_HandleTypeDef *htim_local;
  
  if (htim == (TIM_HandleTypeDef *)0x0) {
    HVar1 = HAL_ERROR;
  }
  else {
    if (htim->State == HAL_TIM_STATE_RESET) {
      htim->Lock = HAL_UNLOCKED;
      HAL_TIM_PWM_MspInit(htim);
    }
    htim->State = HAL_TIM_STATE_BUSY;
    TIM_Base_SetConfig(htim->Instance,&htim->Init);
    htim->State = HAL_TIM_STATE_READY;
    HVar1 = HAL_OK;
  }
  return HVar1;
}


////>>0x08003696>>HAL_TIM_PWM_MspInit>>////

void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  return;
}


////>>0x080036a8>>HAL_TIM_PWM_Start>>////

HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim,uint32_t Channel)

{
  uint32_t Channel_local;
  TIM_HandleTypeDef *htim_local;
  
  TIM_CCxChannelCmd(htim->Instance,Channel,1);
  if (htim->Instance == (TIM_TypeDef *)0x40012c00) {
    htim->Instance->BDTR = htim->Instance->BDTR | 0x8000;
  }
  htim->Instance->CR1 = htim->Instance->CR1 | 1;
  return HAL_OK;
}


////>>0x080036f8>>HAL_TIM_IRQHandler>>////

void HAL_TIM_IRQHandler(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  if (((htim->Instance->SR & 2) == 2) && ((htim->Instance->DIER & 2) == 2)) {
    htim->Instance->SR = 0xfffffffd;
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
  if (((htim->Instance->SR & 4) == 4) && ((htim->Instance->DIER & 4) == 4)) {
    htim->Instance->SR = 0xfffffffb;
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
  if (((htim->Instance->SR & 8) == 8) && ((htim->Instance->DIER & 8) == 8)) {
    htim->Instance->SR = 0xfffffff7;
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
  if (((htim->Instance->SR & 0x10) == 0x10) && ((htim->Instance->DIER & 0x10) == 0x10)) {
    htim->Instance->SR = 0xffffffef;
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
  if (((htim->Instance->SR & 1) == 1) && ((htim->Instance->DIER & 1) == 1)) {
    htim->Instance->SR = 0xfffffffe;
    HAL_TIM_PeriodElapsedCallback(htim);
  }
  if (((htim->Instance->SR & 0x80) == 0x80) && ((htim->Instance->DIER & 0x80) == 0x80)) {
    htim->Instance->SR = 0xffffff7f;
    HAL_TIMEx_BreakCallback(htim);
  }
  if (((htim->Instance->SR & 0x40) == 0x40) && ((htim->Instance->DIER & 0x40) == 0x40)) {
    htim->Instance->SR = 0xffffffbf;
    HAL_TIM_TriggerCallback(htim);
  }
  if (((htim->Instance->SR & 0x20) == 0x20) && ((htim->Instance->DIER & 0x20) == 0x20)) {
    htim->Instance->SR = 0xffffffdf;
    HAL_TIMEx_CommutationCallback(htim);
  }
  return;
}


////>>0x08003908>>HAL_TIM_PWM_ConfigChannel>>////

HAL_StatusTypeDef
HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim,TIM_OC_InitTypeDef *sConfig,uint32_t Channel)

{
  HAL_StatusTypeDef HVar1;
  uint32_t Channel_local;
  TIM_OC_InitTypeDef *sConfig_local;
  TIM_HandleTypeDef *htim_local;
  
  if (htim->Lock == HAL_LOCKED) {
    HVar1 = HAL_BUSY;
  }
  else {
    htim->Lock = HAL_LOCKED;
    htim->State = HAL_TIM_STATE_BUSY;
    switch(Channel) {
    case 0:
      TIM_OC1_SetConfig(htim->Instance,sConfig);
      htim->Instance->CCMR1 = htim->Instance->CCMR1 | 8;
      htim->Instance->CCMR1 = htim->Instance->CCMR1 & 0xfffffffb;
      htim->Instance->CCMR1 = sConfig->OCFastMode | htim->Instance->CCMR1;
      break;
    case 4:
      TIM_OC2_SetConfig(htim->Instance,sConfig);
      htim->Instance->CCMR1 = htim->Instance->CCMR1 | 0x800;
      htim->Instance->CCMR1 = htim->Instance->CCMR1 & 0xfffffbff;
      htim->Instance->CCMR1 = sConfig->OCFastMode << 8 | htim->Instance->CCMR1;
      break;
    case 8:
      TIM_OC3_SetConfig(htim->Instance,sConfig);
      htim->Instance->CCMR2 = htim->Instance->CCMR2 | 8;
      htim->Instance->CCMR2 = htim->Instance->CCMR2 & 0xfffffffb;
      htim->Instance->CCMR2 = sConfig->OCFastMode | htim->Instance->CCMR2;
      break;
    case 0xc:
      TIM_OC4_SetConfig(htim->Instance,sConfig);
      htim->Instance->CCMR2 = htim->Instance->CCMR2 | 0x800;
      htim->Instance->CCMR2 = htim->Instance->CCMR2 & 0xfffffbff;
      htim->Instance->CCMR2 = sConfig->OCFastMode << 8 | htim->Instance->CCMR2;
    }
    htim->State = HAL_TIM_STATE_READY;
    htim->Lock = HAL_UNLOCKED;
    HVar1 = HAL_OK;
  }
  return HVar1;
}


////>>0x08003a94>>HAL_TIM_ConfigClockSource>>////

HAL_StatusTypeDef
HAL_TIM_ConfigClockSource(TIM_HandleTypeDef *htim,TIM_ClockConfigTypeDef *sClockSourceConfig)

{
  HAL_StatusTypeDef HVar1;
  uint uVar2;
  TIM_ClockConfigTypeDef *sClockSourceConfig_local;
  TIM_HandleTypeDef *htim_local;
  uint32_t tmpsmcr;
  
  if (htim->Lock == HAL_LOCKED) {
    HVar1 = HAL_BUSY;
  }
  else {
    htim->Lock = HAL_LOCKED;
    htim->State = HAL_TIM_STATE_BUSY;
    htim->Instance->SMCR = htim->Instance->SMCR & 0xffff0088;
    uVar2 = sClockSourceConfig->ClockSource;
    if (uVar2 == 0x40) {
      TIM_TI1_ConfigInputStage
                (htim->Instance,sClockSourceConfig->ClockPolarity,sClockSourceConfig->ClockFilter);
      TIM_ITRx_SetConfig(htim->Instance,0x40);
    }
    else if (uVar2 < 0x41) {
      if (uVar2 == 0x10) {
        TIM_ITRx_SetConfig(htim->Instance,0x10);
      }
      else if (uVar2 < 0x11) {
        if (uVar2 == 0) {
          TIM_ITRx_SetConfig(htim->Instance,0);
        }
      }
      else if (uVar2 == 0x20) {
        TIM_ITRx_SetConfig(htim->Instance,0x20);
      }
      else if (uVar2 == 0x30) {
        TIM_ITRx_SetConfig(htim->Instance,0x30);
      }
    }
    else if (uVar2 == 0x70) {
      TIM_ETR_SetConfig(htim->Instance,sClockSourceConfig->ClockPrescaler,
                        sClockSourceConfig->ClockPolarity,sClockSourceConfig->ClockFilter);
      htim->Instance->SMCR = htim->Instance->SMCR & 0xffffff88 | 0x77;
    }
    else if (uVar2 < 0x71) {
      if (uVar2 == 0x50) {
        TIM_TI1_ConfigInputStage
                  (htim->Instance,sClockSourceConfig->ClockPolarity,sClockSourceConfig->ClockFilter)
        ;
        TIM_ITRx_SetConfig(htim->Instance,0x50);
      }
      else if (uVar2 == 0x60) {
        TIM_TI2_ConfigInputStage
                  (htim->Instance,sClockSourceConfig->ClockPolarity,sClockSourceConfig->ClockFilter)
        ;
        TIM_ITRx_SetConfig(htim->Instance,0x60);
      }
    }
    else if (uVar2 == 0x1000) {
      htim->Instance->SMCR = htim->Instance->SMCR & 0xfffffff8;
    }
    else if (uVar2 == 0x2000) {
      TIM_ETR_SetConfig(htim->Instance,sClockSourceConfig->ClockPrescaler,
                        sClockSourceConfig->ClockPolarity,sClockSourceConfig->ClockFilter);
      htim->Instance->SMCR = htim->Instance->SMCR | 0x4000;
    }
    htim->State = HAL_TIM_STATE_READY;
    htim->Lock = HAL_UNLOCKED;
    HVar1 = HAL_OK;
  }
  return HVar1;
}


////>>0x08003c4a>>HAL_TIM_OC_DelayElapsedCallback>>////

void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  return;
}


////>>0x08003c5c>>HAL_TIM_IC_CaptureCallback>>////

void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  return;
}


////>>0x08003c6e>>HAL_TIM_PWM_PulseFinishedCallback>>////

void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  return;
}


////>>0x08003c80>>HAL_TIM_TriggerCallback>>////

void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  return;
}


////>>0x08003c94>>TIM_Base_SetConfig>>////

void TIM_Base_SetConfig(TIM_TypeDef *TIMx,TIM_Base_InitTypeDef *Structure)

{
  TIM_Base_InitTypeDef *Structure_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmpcr1;
  
  tmpcr1 = TIMx->CR1;
  if ((((TIMx == (TIM_TypeDef *)0x40012c00) || (TIMx == (TIM_TypeDef *)0x40000000)) ||
      (TIMx == (TIM_TypeDef *)0x40000400)) || (TIMx == (TIM_TypeDef *)0x40000800)) {
    tmpcr1 = Structure->CounterMode | tmpcr1 & 0xffffff8f;
  }
  if (((TIMx == (TIM_TypeDef *)0x40012c00) || (TIMx == (TIM_TypeDef *)0x40000000)) ||
     ((TIMx == (TIM_TypeDef *)0x40000400 || (TIMx == (TIM_TypeDef *)0x40000800)))) {
    tmpcr1 = Structure->ClockDivision | tmpcr1 & 0xfffffcff;
  }
  TIMx->CR1 = Structure->AutoReloadPreload | tmpcr1 & 0xffffff7f;
  TIMx->ARR = Structure->Period;
  TIMx->PSC = Structure->Prescaler;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uRam40012c30 = Structure->RepetitionCounter;
  }
  TIMx->EGR = 1;
  return;
}


////>>0x08003d60>>TIM_OC1_SetConfig>>////

void TIM_OC1_SetConfig(TIM_TypeDef *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint uVar1;
  uint32_t uVar2;
  TIM_OC_InitTypeDef *OC_Config_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmpccmrx;
  uint32_t tmpcr2;
  uint32_t tmpccer;
  
  TIMx->CCER = TIMx->CCER & 0xfffffffe;
  tmpcr2 = TIMx->CR2;
  uVar1 = OC_Config->OCMode;
  uVar2 = OC_Config->OCPolarity | TIMx->CCER & 0xfffffffd;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uVar2 = (OC_Config->OCNPolarity | uVar2 & 0xfffffff7) & 0xfffffffb;
    tmpcr2 = OC_Config->OCNIdleState | OC_Config->OCIdleState | tmpcr2 & 0xfffffcff;
  }
  TIMx->CR2 = tmpcr2;
  TIMx->CCMR1 = uVar1 | TIMx->CCMR1 & 0xffffff8c;
  TIMx->CCR1 = OC_Config->Pulse;
  TIMx->CCER = uVar2;
  return;
}


////>>0x08003e38>>TIM_OC2_SetConfig>>////

void TIM_OC2_SetConfig(TIM_TypeDef *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  TIM_OC_InitTypeDef *OC_Config_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmpccmrx;
  uint32_t tmpcr2;
  uint32_t tmpccer;
  
  TIMx->CCER = TIMx->CCER & 0xffffffef;
  tmpcr2 = TIMx->CR2;
  uVar1 = OC_Config->OCMode;
  uVar2 = OC_Config->OCPolarity << 4 | TIMx->CCER & 0xffffffdf;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uVar2 = (OC_Config->OCNPolarity << 4 | uVar2 & 0xffffff7f) & 0xffffffbf;
    tmpcr2 = OC_Config->OCNIdleState << 2 | OC_Config->OCIdleState << 2 | tmpcr2 & 0xfffff3ff;
  }
  TIMx->CR2 = tmpcr2;
  TIMx->CCMR1 = uVar1 << 8 | TIMx->CCMR1 & 0xffff8cff;
  TIMx->CCR2 = OC_Config->Pulse;
  TIMx->CCER = uVar2;
  return;
}


////>>0x08003f18>>TIM_OC3_SetConfig>>////

void TIM_OC3_SetConfig(TIM_TypeDef *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint uVar1;
  uint32_t uVar2;
  TIM_OC_InitTypeDef *OC_Config_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmpccmrx;
  uint32_t tmpcr2;
  uint32_t tmpccer;
  
  TIMx->CCER = TIMx->CCER & 0xfffffeff;
  tmpcr2 = TIMx->CR2;
  uVar1 = OC_Config->OCMode;
  uVar2 = OC_Config->OCPolarity << 8 | TIMx->CCER & 0xfffffdff;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uVar2 = (OC_Config->OCNPolarity << 8 | uVar2 & 0xfffff7ff) & 0xfffffbff;
    tmpcr2 = OC_Config->OCNIdleState << 4 | OC_Config->OCIdleState << 4 | tmpcr2 & 0xffffcfff;
  }
  TIMx->CR2 = tmpcr2;
  TIMx->CCMR2 = uVar1 | TIMx->CCMR2 & 0xffffff8c;
  TIMx->CCR3 = OC_Config->Pulse;
  TIMx->CCER = uVar2;
  return;
}


////>>0x08003ff8>>TIM_OC4_SetConfig>>////

void TIM_OC4_SetConfig(TIM_TypeDef *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  TIM_OC_InitTypeDef *OC_Config_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmpccer;
  uint32_t tmpccmrx;
  uint32_t tmpcr2;
  
  TIMx->CCER = TIMx->CCER & 0xffffefff;
  tmpcr2 = TIMx->CR2;
  uVar1 = OC_Config->OCMode;
  uVar2 = OC_Config->OCPolarity;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    tmpcr2 = OC_Config->OCIdleState << 6 | tmpcr2 & 0xffffbfff;
  }
  TIMx->CR2 = tmpcr2;
  TIMx->CCMR2 = uVar1 << 8 | TIMx->CCMR2 & 0xffff8cff;
  TIMx->CCR4 = OC_Config->Pulse;
  TIMx->CCER = uVar2 << 0xc | TIMx->CCER & 0xffffdfff;
  return;
}


////>>0x080040a0>>TIM_TI1_ConfigInputStage>>////

void TIM_TI1_ConfigInputStage(TIM_TypeDef *TIMx,uint32_t TIM_ICPolarity,uint32_t TIM_ICFilter)

{
  uint uVar1;
  uint32_t TIM_ICFilter_local;
  uint32_t TIM_ICPolarity_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmpccer;
  uint32_t tmpccmr1;
  
  uVar1 = TIMx->CCER;
  TIMx->CCER = TIMx->CCER & 0xfffffffe;
  TIMx->CCMR1 = TIM_ICFilter << 4 | TIMx->CCMR1 & 0xffffff0f;
  TIMx->CCER = TIM_ICPolarity | uVar1 & 0xfffffff5;
  return;
}


////>>0x08004104>>TIM_TI2_ConfigInputStage>>////

void TIM_TI2_ConfigInputStage(TIM_TypeDef *TIMx,uint32_t TIM_ICPolarity,uint32_t TIM_ICFilter)

{
  uint32_t TIM_ICFilter_local;
  uint32_t TIM_ICPolarity_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmpccer;
  uint32_t tmpccmr1;
  
  TIMx->CCER = TIMx->CCER & 0xffffffef;
  TIMx->CCMR1 = TIM_ICFilter << 0xc | TIMx->CCMR1 & 0xffff0fff;
  TIMx->CCER = TIM_ICPolarity << 4 | TIMx->CCER & 0xffffff5f;
  return;
}


////>>0x0800416a>>TIM_ITRx_SetConfig>>////

void TIM_ITRx_SetConfig(TIM_TypeDef *TIMx,uint16_t InputTriggerSource)

{
  uint16_t InputTriggerSource_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmpsmcr;
  
  TIMx->SMCR = TIMx->SMCR & 0xffffff8f | (uint)(InputTriggerSource | 7);
  return;
}


////>>0x080041a8>>TIM_ETR_SetConfig>>////

void TIM_ETR_SetConfig(TIM_TypeDef *TIMx,uint32_t TIM_ExtTRGPrescaler,uint32_t TIM_ExtTRGPolarity,
                      uint32_t ExtTRGFilter)

{
  uint32_t ExtTRGFilter_local;
  uint32_t TIM_ExtTRGPolarity_local;
  uint32_t TIM_ExtTRGPrescaler_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmpsmcr;
  
  TIMx->SMCR = TIM_ExtTRGPrescaler | ExtTRGFilter << 8 | TIM_ExtTRGPolarity |
               TIMx->SMCR & 0xffff00ff;
  return;
}


////>>0x080041ea>>TIM_CCxChannelCmd>>////

void TIM_CCxChannelCmd(TIM_TypeDef *TIMx,uint32_t Channel,uint32_t ChannelState)

{
  uint32_t ChannelState_local;
  uint32_t Channel_local;
  TIM_TypeDef *TIMx_local;
  uint32_t tmp;
  
  TIMx->CCER = TIMx->CCER & ~(1 << (Channel & 0xff));
  TIMx->CCER = TIMx->CCER | ChannelState << (Channel & 0xff);
  return;
}


////>>0x0800422e>>HAL_TIMEx_ConfigBreakDeadTime>>////

HAL_StatusTypeDef
HAL_TIMEx_ConfigBreakDeadTime
          (TIM_HandleTypeDef *htim,TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig)

{
  HAL_StatusTypeDef HVar1;
  TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig_local;
  TIM_HandleTypeDef *htim_local;
  uint32_t tmpbdtr;
  
  if (htim->Lock == HAL_LOCKED) {
    HVar1 = HAL_BUSY;
  }
  else {
    htim->Lock = HAL_LOCKED;
    htim->Instance->BDTR =
         sBreakDeadTimeConfig->AutomaticOutput |
         (sBreakDeadTimeConfig->AutomaticOutput |
         (sBreakDeadTimeConfig->BreakPolarity |
         (sBreakDeadTimeConfig->BreakState |
         (sBreakDeadTimeConfig->OffStateRunMode |
         (sBreakDeadTimeConfig->OffStateIDLEMode |
         (sBreakDeadTimeConfig->LockLevel | sBreakDeadTimeConfig->DeadTime & 0xfffffcff) &
         0xfffffbff) & 0xfffff7ff) & 0xffffefff) & 0xffffdfff) & 0xffffbfff) & 0xffff7fff;
    htim->Lock = HAL_UNLOCKED;
    HVar1 = HAL_OK;
  }
  return HVar1;
}


////>>0x080042de>>HAL_TIMEx_MasterConfigSynchronization>>////

HAL_StatusTypeDef
HAL_TIMEx_MasterConfigSynchronization
          (TIM_HandleTypeDef *htim,TIM_MasterConfigTypeDef *sMasterConfig)

{
  HAL_StatusTypeDef HVar1;
  TIM_MasterConfigTypeDef *sMasterConfig_local;
  TIM_HandleTypeDef *htim_local;
  
  if (htim->Lock == HAL_LOCKED) {
    HVar1 = HAL_BUSY;
  }
  else {
    htim->Lock = HAL_LOCKED;
    htim->State = HAL_TIM_STATE_BUSY;
    htim->Instance->CR2 = htim->Instance->CR2 & 0xffffff8f;
    htim->Instance->CR2 = sMasterConfig->MasterOutputTrigger | htim->Instance->CR2;
    htim->Instance->SMCR = htim->Instance->SMCR & 0xffffff7f;
    htim->Instance->SMCR = sMasterConfig->MasterSlaveMode | htim->Instance->SMCR;
    htim->State = HAL_TIM_STATE_READY;
    htim->Lock = HAL_UNLOCKED;
    HVar1 = HAL_OK;
  }
  return HVar1;
}


////>>0x08004366>>HAL_TIMEx_CommutationCallback>>////

void HAL_TIMEx_CommutationCallback(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  return;
}


////>>0x08004378>>HAL_TIMEx_BreakCallback>>////

void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  
  return;
}


////>>0x0800438a>>HAL_UART_Init>>////

HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart)

{
  HAL_StatusTypeDef HVar1;
  UART_HandleTypeDef *huart_local;
  
  if (huart == (UART_HandleTypeDef *)0x0) {
    HVar1 = HAL_ERROR;
  }
  else {
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
    HVar1 = HAL_OK;
  }
  return HVar1;
}


////>>0x08004424>>HAL_UART_MspInit>>////

void HAL_UART_MspInit(UART_HandleTypeDef *huart)

{
  UART_HandleTypeDef *huart_local;
  
  return;
}


////>>0x08004436>>HAL_UART_Transmit>>////

HAL_StatusTypeDef
HAL_UART_Transmit(UART_HandleTypeDef *huart,uint8_t *pData,uint16_t Size,uint32_t Timeout)

{
  uint32_t uVar1;
  uint32_t uVar2;
  HAL_StatusTypeDef HVar3;
  int iVar4;
  uint32_t Timeout_local;
  uint16_t Size_local;
  uint8_t *pData_local;
  UART_HandleTypeDef *huart_local;
  uint16_t *tmp;
  uint32_t tickstart;
  
  if (huart->gState == HAL_UART_STATE_READY) {
    if ((pData == (uint8_t *)0x0) || (Size == 0)) {
      HVar3 = HAL_ERROR;
    }
    else if (huart->Lock == HAL_LOCKED) {
      HVar3 = HAL_BUSY;
    }
    else {
      huart->Lock = HAL_LOCKED;
      huart->ErrorCode = 0;
      huart->gState = HAL_UART_STATE_BUSY_TX;
      uVar1 = HAL_GetTick();
      huart->TxXferSize = Size;
      huart->TxXferCount = Size;
      pData_local = pData;
      while (huart->TxXferCount != 0) {
        huart->TxXferCount = huart->TxXferCount - 1;
        if ((huart->Init).WordLength == 0x1000) {
          do {
            if ((huart->Instance->SR & 0x80) == 0x80) {
              iVar4 = 0;
              goto LAB_0800454c;
            }
          } while ((Timeout == 0xffffffff) ||
                  ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - uVar1 <= Timeout))));
          huart->Instance->CR1 = huart->Instance->CR1 & 0xfffffe5f;
          huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffffe;
          huart->gState = HAL_UART_STATE_READY;
          huart->RxState = HAL_UART_STATE_READY;
          huart->Lock = HAL_UNLOCKED;
          iVar4 = 3;
LAB_0800454c:
          if (iVar4 != 0) {
            return HAL_TIMEOUT;
          }
          huart->Instance->DR = *(ushort *)pData_local & 0x1ff;
          if ((huart->Init).Parity == 0) {
            pData_local = pData_local + 2;
          }
          else {
            pData_local = pData_local + 1;
          }
        }
        else {
          do {
            if ((huart->Instance->SR & 0x80) == 0x80) {
              iVar4 = 0;
              goto LAB_08004614;
            }
          } while ((Timeout == 0xffffffff) ||
                  ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - uVar1 <= Timeout))));
          huart->Instance->CR1 = huart->Instance->CR1 & 0xfffffe5f;
          huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffffe;
          huart->gState = HAL_UART_STATE_READY;
          huart->RxState = HAL_UART_STATE_READY;
          huart->Lock = HAL_UNLOCKED;
          iVar4 = 3;
LAB_08004614:
          if (iVar4 != 0) {
            return HAL_TIMEOUT;
          }
          huart->Instance->DR = (uint)*pData_local;
          pData_local = pData_local + 1;
        }
      }
      do {
        if ((huart->Instance->SR & 0x40) == 0x40) {
          iVar4 = 0;
          goto LAB_080046c6;
        }
      } while ((Timeout == 0xffffffff) ||
              ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - uVar1 <= Timeout))));
      huart->Instance->CR1 = huart->Instance->CR1 & 0xfffffe5f;
      huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffffe;
      huart->gState = HAL_UART_STATE_READY;
      huart->RxState = HAL_UART_STATE_READY;
      huart->Lock = HAL_UNLOCKED;
      iVar4 = 3;
LAB_080046c6:
      if (iVar4 == 0) {
        huart->gState = HAL_UART_STATE_READY;
        huart->Lock = HAL_UNLOCKED;
        HVar3 = HAL_OK;
      }
      else {
        HVar3 = HAL_TIMEOUT;
      }
    }
  }
  else {
    HVar3 = HAL_BUSY;
  }
  return HVar3;
}


////>>0x080046ec>>UART_SetConfig>>////

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
  UART_HandleTypeDef *huart_local;
  uint32_t tmpreg;
  
  huart->Instance->CR2 = (huart->Init).StopBits | huart->Instance->CR2 & 0xffffcfff;
  huart->Instance->CR1 =
       huart->Instance->CR1 & 0xffffe9f3 |
       (huart->Init).Mode | (huart->Init).WordLength | (huart->Init).Parity;
  huart->Instance->CR3 = (huart->Init).HwFlowCtl | huart->Instance->CR3 & 0xfffffcff;
  if (huart->Instance == (USART_TypeDef *)0x40013800) {
    uVar1 = HAL_RCC_GetPCLK2Freq();
    uVar6 = (huart->Init).BaudRate;
    uVar2 = HAL_RCC_GetPCLK2Freq();
    uVar7 = (huart->Init).BaudRate;
    uVar3 = HAL_RCC_GetPCLK2Freq();
    uVar8 = (huart->Init).BaudRate;
    uVar4 = HAL_RCC_GetPCLK2Freq();
    uVar9 = (huart->Init).BaudRate;
    uVar5 = HAL_RCC_GetPCLK2Freq();
    huart->Instance->BRR =
         ((((uVar4 * 0x19) / (uVar9 << 2) +
           (int)(((ulonglong)(uVar5 * 0x19) / (ulonglong)((huart->Init).BaudRate << 2)) / 100) *
           -100) * 0x10 + 0x32) / 100 & 0xf) +
         (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uVar6 << 2)) / 100) * 0x10 +
         ((((uVar2 * 0x19) / (uVar7 << 2) +
           (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uVar8 << 2)) / 100) * -100) * 0x10 + 0x32)
          / 100 & 0xf0);
  }
  else {
    uVar1 = HAL_RCC_GetPCLK1Freq();
    uVar6 = (huart->Init).BaudRate;
    uVar2 = HAL_RCC_GetPCLK1Freq();
    uVar7 = (huart->Init).BaudRate;
    uVar3 = HAL_RCC_GetPCLK1Freq();
    uVar8 = (huart->Init).BaudRate;
    uVar4 = HAL_RCC_GetPCLK1Freq();
    uVar9 = (huart->Init).BaudRate;
    uVar5 = HAL_RCC_GetPCLK1Freq();
    huart->Instance->BRR =
         ((((uVar4 * 0x19) / (uVar9 << 2) +
           (int)(((ulonglong)(uVar5 * 0x19) / (ulonglong)((huart->Init).BaudRate << 2)) / 100) *
           -100) * 0x10 + 0x32) / 100 & 0xf) +
         (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)(uVar6 << 2)) / 100) * 0x10 +
         ((((uVar2 * 0x19) / (uVar7 << 2) +
           (int)(((ulonglong)(uVar3 * 0x19) / (ulonglong)(uVar8 << 2)) / 100) * -100) * 0x10 + 0x32)
          / 100 & 0xf0);
  }
  return;
}


////>>0x0800491c>>mpu6050_init>>////

void mpu6050_init(Mpu6050 *mpu6050)

{
  Mpu6050 *mpu6050_local;
  uint8_t local_13;
  uint8_t local_12;
  uint8_t local_11 [5];
  
  local_13 = '\0';
  (*I2C_Write_Reg)(0xd0,'k',&local_13,1);
  local_12 = '\x10';
  (*I2C_Write_Reg)(0xd0,'\x1c',&local_12,1);
  local_11[0] = '\b';
  (*I2C_Write_Reg)(0xd0,'\x1b',local_11,1);
  mpu6050->accX = 0.0;
  mpu6050->accY = 0.0;
  mpu6050->accZ = 0.0;
  mpu6050->temp = 0.0;
  mpu6050->gyroX = 0.0;
  mpu6050->gyroY = 0.0;
  mpu6050->gyroZ = 0.0;
  mpu6050->offset_gyroX = 0.0;
  mpu6050->offset_gyroY = 0.0;
  mpu6050->offset_acc_pitch = 0.0;
  mpu6050->offset_acc_roll = 0.0;
  mpu6050_calibrate(mpu6050);
  return;
}


////>>0x080049cc>>mpu6050_calibrate>>////

void mpu6050_calibrate(Mpu6050 *mpu6050)

{
  undefined4 uVar1;
  float fVar2;
  Mpu6050 *mpu6050_local;
  float acc_roll;
  float acc_pitch;
  uint32_t now;
  int num_samples;
  int i;
  float offset_accRoll;
  float offset_accPitch;
  float offset_gyroY;
  float offset_gyroX;
  
  num_samples = 1;
  offset_gyroX = 0.0;
  offset_gyroY = 0.0;
  offset_accPitch = 0.0;
  offset_accRoll = 0.0;
  now = (*Get_ms_tick)();
  i = 0;
  while( true ) {
    if (num_samples <= i) break;
    acc_pitch = 0.0;
    acc_roll = 0.0;
    mpu6050_update(mpu6050);
    mpu6050_calc_acc_pitch_roll(mpu6050,&acc_pitch,&acc_roll);
    offset_accPitch = (float)__addsf3(offset_accPitch,acc_pitch);
    offset_accRoll = (float)__addsf3(offset_accRoll,acc_roll);
    offset_gyroX = (float)__addsf3(offset_gyroX,mpu6050->gyroX);
    offset_gyroY = (float)__addsf3(offset_gyroY,mpu6050->gyroY);
    now = (*Get_ms_tick)();
    i = i + 1;
  }
  uVar1 = __floatsisf(num_samples);
  fVar2 = (float)__aeabi_fdiv(offset_gyroX,uVar1);
  mpu6050->offset_gyroX = fVar2;
  uVar1 = __floatsisf(num_samples);
  fVar2 = (float)__aeabi_fdiv(offset_gyroY,uVar1);
  mpu6050->offset_gyroY = fVar2;
  uVar1 = __floatsisf(num_samples);
  fVar2 = (float)__aeabi_fdiv(offset_accPitch,uVar1);
  mpu6050->offset_acc_pitch = fVar2;
  uVar1 = __floatsisf(num_samples);
  fVar2 = (float)__aeabi_fdiv(offset_accRoll,uVar1);
  mpu6050->offset_acc_roll = fVar2;
  return;
}


////>>0x08004ae0>>mpu6050_update>>////

void mpu6050_update(Mpu6050 *mpu6050)

{
  float fVar1;
  Mpu6050 *mpu6050_local;
  uint8_t raw [14];
  int16_t gz;
  int16_t gy;
  int16_t gx;
  int16_t t;
  int16_t az;
  int16_t ay;
  int16_t ax;
  
  (*I2C_Read_Reg)(0xd0,';',raw,0xe);
  fVar1 = (float)__floatsisf((int)CONCAT11(raw[0],raw[1]));
  mpu6050->accX = fVar1;
  fVar1 = (float)__floatsisf((int)CONCAT11(raw[2],raw[3]));
  mpu6050->accY = fVar1;
  fVar1 = (float)__floatsisf((int)CONCAT11(raw[4],raw[5]));
  mpu6050->accZ = fVar1;
  fVar1 = (float)__floatsisf((int)CONCAT11(raw[6],raw[7]));
  mpu6050->temp = fVar1;
  fVar1 = (float)__floatsisf((int)CONCAT11(raw[8],raw[9]));
  mpu6050->gyroX = fVar1;
  fVar1 = (float)__floatsisf((int)CONCAT11(raw[10],raw[11]));
  mpu6050->gyroY = fVar1;
  fVar1 = (float)__floatsisf((int)CONCAT11(raw[12],raw[13]));
  mpu6050->gyroZ = fVar1;
  return;
}


////>>0x08004bd8>>mpu6050_calc_pitch>>////

void mpu6050_calc_pitch(Mpu6050 *mpu6050,float *pitch)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pitch_local;
  Mpu6050 *mpu6050_local;
  float acc_pitch;
  float gyro_x;
  
  uVar1 = __aeabi_fsub(mpu6050->gyroX,mpu6050->offset_gyroX);
  uVar3 = __aeabi_f2d(mpu6050_calc_pitch::total_pitch);
  uVar4 = __aeabi_f2d(uVar1);
  uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x83f5c366,0x3f340215);
  uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
  mpu6050_calc_pitch::total_pitch = (float)__truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar3 = __aeabi_f2d(mpu6050->accY);
  uVar3 = __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0x40b00000);
  uVar4 = __aeabi_f2d(mpu6050->accZ);
  uVar4 = __divdf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40b00000);
  uVar3 = atan2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                (int)((ulonglong)uVar4 >> 0x20));
  uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0x40668000);
  uVar3 = __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x54442d18,0x400921fb);
  uVar4 = __aeabi_f2d(mpu6050->offset_acc_pitch);
  uVar3 = __subdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                   (int)((ulonglong)uVar4 >> 0x20));
  uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,0x40568000);
  fVar2 = (float)__truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  if (mpu6050_calc_pitch::first_run == false) {
    uVar3 = __aeabi_f2d(mpu6050_calc_pitch::total_pitch);
    uVar3 = __muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x9999999a,0x3fe99999);
    uVar4 = __aeabi_f2d(fVar2);
    uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x9999999a,0x3fc99999);
    uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                         (int)((ulonglong)uVar4 >> 0x20));
    mpu6050_calc_pitch::total_pitch =
         (float)__truncdfsf2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  else {
    mpu6050_calc_pitch::first_run = false;
    mpu6050_calc_pitch::total_pitch = fVar2;
  }
  *pitch = mpu6050_calc_pitch::total_pitch;
  return;
}


////>>0x08004d78>>mpu6050_calc_acc_pitch_roll>>////

void mpu6050_calc_acc_pitch_roll(Mpu6050 *mpu6050,float *pitch,float *roll)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *roll_local;
  float *pitch_local;
  Mpu6050 *mpu6050_local;
  float acc_roll;
  float acc_pitch;
  float acc_z;
  float acc_y;
  float acc_x;
  
  uVar1 = __aeabi_fdiv(mpu6050->accX,0x45800000);
  uVar2 = __aeabi_fdiv(mpu6050->accY,0x45800000);
  uVar3 = __aeabi_fdiv(mpu6050->accZ,0x45800000);
  uVar6 = __aeabi_f2d(uVar2);
  uVar7 = __aeabi_f2d(uVar3);
  uVar6 = atan2((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                (int)((ulonglong)uVar7 >> 0x20));
  uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0x40668000);
  uVar6 = __divdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x54442d18,0x400921fb);
  fVar4 = (float)__truncdfsf2((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = __aeabi_f2d(uVar1);
  uVar7 = __aeabi_f2d(uVar3);
  uVar6 = atan2((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                (int)((ulonglong)uVar7 >> 0x20));
  uVar6 = __muldf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0x40668000);
  uVar6 = __divdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x54442d18,0x400921fb);
  fVar5 = (float)__truncdfsf2((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  *pitch = fVar4;
  *roll = fVar5;
  return;
}


////>>0x08004e6c>>aflCall>>////

/* WARNING: Unknown calling convention */

uint32_t aflCall(uint32_t a0,uint32_t a1,int32_t a2)

{
  software_interrupt(0x3f);
  return a0;
}


////>>0x08004e74>>startForkserver>>////

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


////>>0x08004ea4>>_i2c_write_reg>>////

void _i2c_write_reg(uint8_t addr,uint8_t reg,uint8_t *data,uint16_t len)

{
  uint8_t *data_local;
  uint16_t len_local;
  uint8_t reg_local;
  uint8_t addr_local;
  
  HAL_I2C_Mem_Write(&hi2c1,(ushort)addr,(ushort)reg,1,data,len,I2C_TIMEOUT);
  return;
}


////>>0x08004ee8>>_i2c_read_reg>>////

void _i2c_read_reg(uint8_t addr,uint8_t reg,uint8_t *data,uint16_t len)

{
  uint8_t *data_local;
  uint16_t len_local;
  uint8_t reg_local;
  uint8_t addr_local;
  
  HAL_I2C_Mem_Read(&hi2c1,(ushort)addr,(ushort)reg,1,data,len,I2C_TIMEOUT);
  return;
}


////>>0x08004f2c>>_get_ms_tick>>////

/* WARNING: Unknown calling convention */

uint32_t _get_ms_tick(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_GetTick();
  return uVar1;
}


////>>0x08004f3c>>uart_print>>////

void uart_print(char *str,uint32_t len)

{
  uint32_t len_local;
  char *str_local;
  
  HAL_UART_Transmit(&huart1,(uint8_t *)str,(uint16_t)len,0x32);
  return;
}


////>>0x08004f60>>flush_strbuf>>////

/* WARNING: Unknown calling convention */

void flush_strbuf(void)

{
  memset(strbuf,0,0x40);
  return;
}


////>>0x08004f78>>HAL_TIM_PeriodElapsedCallback>>////

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)

{
  size_t len;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  TIM_HandleTypeDef *htim_local;
  float pid_pwm;
  uint8_t out_pwm;
  
  mpu6050_update(&mpu6050);
  mpu6050_calc_pitch(&mpu6050,&pitch);
  flush_strbuf();
  uVar5 = __aeabi_f2d(pitch);
  sprintf(strbuf,"Pitch: %f\n",(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  len = strlen(strbuf);
  uart_print(strbuf,len);
  error = (float)__aeabi_fsub(setpoint,pitch);
  P = (float)__aeabi_fmul(Kp,error);
  uVar1 = __aeabi_fmul(Ki,error);
  I = (float)__addsf3(uVar1,I);
  uVar1 = __floatsisf(maxPwm);
  iVar2 = __aeabi_fcmplt(uVar1,I);
  if (iVar2 == 0) {
    uVar1 = __floatsisf(minPwm);
    iVar2 = __aeabi_fcmpgt(uVar1,I);
    if (iVar2 != 0) {
      I = (float)__floatunsisf(minPwm);
    }
  }
  else {
    I = (float)__floatunsisf(maxPwm);
  }
  uVar4 = (uint)Kd ^ 0x80000000;
  uVar1 = __aeabi_fsub(error,lastError);
  D = (float)__aeabi_fmul(uVar4,uVar1);
  uVar1 = __addsf3(P,I);
  uVar1 = __addsf3(uVar1,D);
  uVar3 = __floatsisf(maxPwm);
  iVar2 = __aeabi_fcmpgt(uVar1,uVar3);
  if (iVar2 == 0) {
    uVar3 = __floatsisf(minPwm);
    iVar2 = __aeabi_fcmplt(uVar1,uVar3);
    if (iVar2 == 0) {
      out_pwm = __fixunssfsi(uVar1);
    }
    else {
      out_pwm = minPwm;
    }
  }
  else {
    out_pwm = maxPwm;
  }
  lastError = error;
  iVar2 = __aeabi_fcmpgt(error,0);
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40010800,2,iVar2 != 0);
  iVar2 = __aeabi_fcmpgt(error,0);
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40010800,4,iVar2 == 0);
  iVar2 = __aeabi_fcmpgt(error,0);
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40010800,8,iVar2 != 0);
  iVar2 = __aeabi_fcmpgt(error,0);
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40010800,0x10,iVar2 == 0);
  (htim1.Instance)->CCR1 = (uint)out_pwm;
  (htim1.Instance)->CCR4 = (uint)out_pwm;
  return;
}


////>>0x08005224>>main>>////

/* WARNING: Unknown calling convention */

int main(void)

{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  MX_I2C1_Init();
  MX_USART1_UART_Init();
  MX_TIM2_Init();
  MX_TIM1_Init();
  I2C_Write_Reg = _i2c_write_reg + 1;
  I2C_Read_Reg = _i2c_read_reg + 1;
  Get_ms_tick = _get_ms_tick + 1;
  HAL_TIM_PWM_Start(&htim1,0);
  HAL_TIM_PWM_Start(&htim1,0xc);
  mpu6050_init(&mpu6050);
  HAL_TIM_Base_Start_IT(&htim2);
  startForkserver(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080052a0>>SystemClock_Config>>////

/* WARNING: Unknown calling convention */

void SystemClock_Config(void)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_OscInitTypeDef RCC_OscInitStruct;
  
  RCC_OscInitStruct.OscillatorType = 1;
  RCC_OscInitStruct.HSEState = 0x10000;
  RCC_OscInitStruct.HSEPredivValue = 0;
  RCC_OscInitStruct.HSIState = 1;
  RCC_OscInitStruct.PLL.PLLState = 2;
  RCC_OscInitStruct.PLL.PLLSource = 0x10000;
  RCC_OscInitStruct.PLL.PLLMUL = 0x1c0000;
  HVar1 = HAL_RCC_OscConfig(&RCC_OscInitStruct);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x151);
  }
  RCC_ClkInitStruct.ClockType = 0xf;
  RCC_ClkInitStruct.SYSCLKSource = 2;
  RCC_ClkInitStruct.AHBCLKDivider = 0x80;
  RCC_ClkInitStruct.APB1CLKDivider = 0;
  RCC_ClkInitStruct.APB2CLKDivider = 0;
  HVar1 = HAL_RCC_ClockConfig(&RCC_ClkInitStruct,2);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x15e);
  }
  uVar2 = HAL_RCC_GetHCLKFreq();
  HAL_SYSTICK_Config(uVar2 / 1000);
  HAL_SYSTICK_CLKSourceConfig(4);
  HAL_NVIC_SetPriority(SysTick_IRQn,0,0);
  return;
}


////>>0x08005348>>MX_I2C1_Init>>////

/* WARNING: Unknown calling convention */

void MX_I2C1_Init(void)

{
  HAL_StatusTypeDef HVar1;
  
  hi2c1.Instance = (I2C_TypeDef *)0x40005400;
  hi2c1.Init.ClockSpeed = 400000;
  hi2c1.Init.DutyCycle = 0;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = 0x4000;
  hi2c1.Init.DualAddressMode = 0;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = 0;
  hi2c1.Init.NoStretchMode = 0;
  HVar1 = HAL_I2C_Init(&hi2c1);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x17a);
  }
  return;
}


////>>0x080053b0>>MX_TIM1_Init>>////

/* WARNING: Unknown calling convention */

void MX_TIM1_Init(void)

{
  HAL_StatusTypeDef HVar1;
  TIM_BreakDeadTimeConfigTypeDef sBreakDeadTimeConfig;
  TIM_OC_InitTypeDef sConfigOC;
  TIM_MasterConfigTypeDef sMasterConfig;
  TIM_ClockConfigTypeDef sClockSourceConfig;
  
  htim1.Instance = (TIM_TypeDef *)0x40012c00;
  htim1.Init.Prescaler = 0x708;
  htim1.Init.CounterMode = 0;
  htim1.Init.Period = 100;
  htim1.Init.ClockDivision = 0;
  htim1.Init.RepetitionCounter = 0;
  htim1.Init.AutoReloadPreload = 0;
  HVar1 = HAL_TIM_Base_Init(&htim1);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",399);
  }
  sClockSourceConfig.ClockSource = 0x1000;
  HVar1 = HAL_TIM_ConfigClockSource(&htim1,&sClockSourceConfig);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x194);
  }
  HVar1 = HAL_TIM_PWM_Init(&htim1);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x198);
  }
  sMasterConfig.MasterOutputTrigger = 0;
  sMasterConfig.MasterSlaveMode = 0;
  HVar1 = HAL_TIMEx_MasterConfigSynchronization(&htim1,&sMasterConfig);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x19f);
  }
  sConfigOC.OCMode = 0x60;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = 0;
  sConfigOC.OCNPolarity = 0;
  sConfigOC.OCFastMode = 0;
  sConfigOC.OCIdleState = 0;
  sConfigOC.OCNIdleState = 0;
  HVar1 = HAL_TIM_PWM_ConfigChannel(&htim1,&sConfigOC,0);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x1ab);
  }
  HVar1 = HAL_TIM_PWM_ConfigChannel(&htim1,&sConfigOC,0xc);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x1b0);
  }
  sBreakDeadTimeConfig.OffStateRunMode = 0;
  sBreakDeadTimeConfig.OffStateIDLEMode = 0;
  sBreakDeadTimeConfig.LockLevel = 0;
  sBreakDeadTimeConfig.DeadTime = 0;
  sBreakDeadTimeConfig.BreakState = 0;
  sBreakDeadTimeConfig.BreakPolarity = 0x2000;
  sBreakDeadTimeConfig.AutomaticOutput = 0;
  HVar1 = HAL_TIMEx_ConfigBreakDeadTime(&htim1,&sBreakDeadTimeConfig);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x1bc);
  }
  HAL_TIM_MspPostInit(&htim1);
  return;
}


////>>0x08005500>>MX_TIM2_Init>>////

/* WARNING: Unknown calling convention */

void MX_TIM2_Init(void)

{
  HAL_StatusTypeDef HVar1;
  TIM_MasterConfigTypeDef sMasterConfig;
  TIM_ClockConfigTypeDef sClockSourceConfig;
  
  htim2.Instance = (TIM_TypeDef *)0x40000000;
  htim2.Init.Prescaler = 36000;
  htim2.Init.CounterMode = 0;
  htim2.Init.Period = 0x14;
  htim2.Init.ClockDivision = 0;
  htim2.Init.AutoReloadPreload = 0;
  HVar1 = HAL_TIM_Base_Init(&htim2);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x1d0);
  }
  sClockSourceConfig.ClockSource = 0x1000;
  HVar1 = HAL_TIM_ConfigClockSource(&htim2,&sClockSourceConfig);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x1d5);
  }
  sMasterConfig.MasterOutputTrigger = 0x20;
  sMasterConfig.MasterSlaveMode = 0;
  HVar1 = HAL_TIMEx_MasterConfigSynchronization(&htim2,&sMasterConfig);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x1dc);
  }
  return;
}


////>>0x08005598>>MX_USART1_UART_Init>>////

/* WARNING: Unknown calling convention */

void MX_USART1_UART_Init(void)

{
  HAL_StatusTypeDef HVar1;
  
  huart1.Instance = (USART_TypeDef *)0x40013800;
  huart1.Init.BaudRate = 0x1c200;
  huart1.Init.WordLength = 0;
  huart1.Init.StopBits = 0;
  huart1.Init.Parity = 0;
  huart1.Init.Mode = 0xc;
  huart1.Init.HwFlowCtl = 0;
  huart1.Init.OverSampling = 0;
  HVar1 = HAL_UART_Init(&huart1);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../src/main.c",0x1ed);
  }
  return;
}


////>>0x080055f4>>MX_GPIO_Init>>////


/* WARNING: Unknown calling convention */

void MX_GPIO_Init(void)

{
  uint32_t tmpreg_2;
  uint32_t tmpreg_1;
  uint32_t tmpreg;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  _DAT_40021018 = _DAT_40021018 | 0x2c;
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40010800,0x1e,GPIO_PIN_RESET);
  GPIO_InitStruct.Pin = 0x1e;
  GPIO_InitStruct.Mode = 1;
  GPIO_InitStruct.Speed = 2;
  HAL_GPIO_Init((GPIO_TypeDef *)0x40010800,&GPIO_InitStruct);
  return;
}


////>>0x08005674>>_Error_Handler>>////

void _Error_Handler(char *file,int line)

{
  int line_local;
  char *file_local;
  
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08005680>>HAL_TIM_MspPostInit>>////

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim)

{
  TIM_HandleTypeDef *htim_local;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  if (htim->Instance == (TIM_TypeDef *)0x40012c00) {
    GPIO_InitStruct.Pin = 0x900;
    GPIO_InitStruct.Mode = 2;
    GPIO_InitStruct.Speed = 2;
    HAL_GPIO_Init((GPIO_TypeDef *)0x40010800,&GPIO_InitStruct);
  }
  return;
}


////>>0x080056bc>>NMI_Handler>>////

/* WARNING: Unknown calling convention */

void NMI_Handler(void)

{
  return;
}


////>>0x080056c8>>HardFault_Handler>>////

/* WARNING: Unknown calling convention */

void HardFault_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080056ce>>MemManage_Handler>>////

/* WARNING: Unknown calling convention */

void MemManage_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080056d4>>BusFault_Handler>>////

/* WARNING: Unknown calling convention */

void BusFault_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080056da>>UsageFault_Handler>>////

/* WARNING: Unknown calling convention */

void UsageFault_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080056e0>>SVC_Handler>>////

/* WARNING: Unknown calling convention */

void SVC_Handler(void)

{
  return;
}


////>>0x080056ec>>DebugMon_Handler>>////

/* WARNING: Unknown calling convention */

void DebugMon_Handler(void)

{
  return;
}


////>>0x080056f8>>PendSV_Handler>>////

/* WARNING: Unknown calling convention */

void PendSV_Handler(void)

{
  return;
}


////>>0x08005704>>SysTick_Handler>>////

/* WARNING: Unknown calling convention */

void SysTick_Handler(void)

{
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
  return;
}


////>>0x08005714>>TIM2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM2_IRQHandler(void)

{
  HAL_TIM_IRQHandler(&htim2);
  return;
}


////>>0x08005728>>_sbrk>>////

void * _sbrk(intptr_t __delta)

{
  undefined4 *puVar1;
  char *pcVar2;
  char acStack_18 [4];
  int incr_local;
  char *prev_heap_end;
  
  if (_sbrk::heap_end == (char *)0x0) {
    _sbrk::heap_end = &end;
  }
  prev_heap_end = _sbrk::heap_end;
  if (acStack_18 < _sbrk::heap_end + __delta) {
    incr_local = __delta;
    puVar1 = (undefined4 *)__errno();
    *puVar1 = 0xc;
    pcVar2 = (char *)0xffffffff;
  }
  else {
    pcVar2 = _sbrk::heap_end;
    _sbrk::heap_end = _sbrk::heap_end + __delta;
  }
  return pcVar2;
}


////>>0x08005780>>SystemInit>>////


/* WARNING: Unknown calling convention */

void SystemInit(void)

{
  _DAT_40021000 = _DAT_40021000 & 0xfef2ffff | 1;
  _DAT_40021004 = _DAT_40021004 & 0xf8800000;
  _DAT_40021008 = 0x9f0000;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x080057e8>>Reset_Handler>>////

void Reset_Handler(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &completed_8655; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(&__fini_array_end + iVar1);
  }
  for (puVar2 = &completed_8655; puVar2 < &_ebss; puVar2 = puVar2 + 1) {
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


////>>0x08005830>>USBWakeUp_IRQHandler>>////

void USBWakeUp_IRQHandler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08005834>>atan2>>////

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
      if ((iVar1 < 0x3d) && ((-1 < (int)param_4 || (iVar1 + 0x3c < 0 == SCARRY4(iVar1,0x3c))))) {
        __divdf3(param_1,param_2);
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


////>>0x08005838>>__ieee754_atan2>>////

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
      if ((iVar1 < 0x3d) && ((-1 < (int)param_4 || (iVar1 + 0x3c < 0 == SCARRY4(iVar1,0x3c))))) {
        __divdf3(param_1,param_2);
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


////>>0x080059f0>>atan>>////

double atan(double __x)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  double in_d0;
  double dVar9;
  double extraout_d0;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = CONCAT44(in_r1,in_r0);
  uVar7 = in_r1 & 0x7fffffff;
  if (uVar7 < 0x44100000) {
    if (uVar7 < 0x3fdc0000) {
      if (uVar7 < 0x3e200000) {
        uVar11 = __aeabi_dadd(in_r0,in_r1,0x8800759c,0x7e37e43c);
        iVar8 = __aeabi_dcmpgt((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x3ff00000);
        if (iVar8 != 0) {
          return extraout_d0;
        }
      }
      iVar8 = -1;
    }
    else {
      fabs((double)CONCAT44(unaff_r4,in_r3));
      if (uVar7 < 0x3ff30000) {
        if (uVar7 < 0x3fe60000) {
          uVar10 = __aeabi_dadd();
          uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3ff00000);
          uVar11 = __aeabi_dadd(in_r0,extraout_r1,0,0x40000000);
          uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                            (int)((ulonglong)uVar11 >> 0x20));
          iVar8 = 0;
        }
        else {
          uVar10 = __subdf3();
          uVar11 = __aeabi_dadd(in_r0,extraout_r1,0,0x3ff00000);
          uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                            (int)((ulonglong)uVar11 >> 0x20));
          iVar8 = 1;
        }
      }
      else if (uVar7 < 0x40038000) {
        uVar10 = __subdf3();
        uVar11 = __muldf3(in_r0,extraout_r1,0,0x3ff80000);
        uVar11 = __aeabi_dadd((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x3ff00000);
        uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
        iVar8 = 2;
      }
      else {
        uVar10 = __divdf3(0,0xbff00000,in_r0,extraout_r1);
        iVar8 = 3;
      }
    }
    uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar5 = (undefined4)uVar10;
    uVar10 = __muldf3(uVar5,uVar6,uVar5,uVar6);
    uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar1 = (undefined4)uVar10;
    uVar10 = __muldf3(uVar1,uVar3,uVar1,uVar3);
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar2 = (undefined4)uVar10;
    uVar10 = __muldf3(uVar2,uVar4,0xe322da11,0x3f90ad3a);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x24760deb,0x3fa97b4b);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar4);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xa0d03d51,0x3fb10d66);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar4);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xc54c206e,0x3fb745cd);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar4);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x920083ff,0x3fc24924);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar4);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x5555550d,0x3fd55555);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar1,uVar3);
    uVar11 = __muldf3(uVar2,uVar4,0x2c6a6c2f,0xbfa2b444);
    uVar11 = __subdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x52defd9a,0x3fadde2d);
    uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar2,uVar4);
    uVar11 = __subdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xaf749a6d,0x3fb3b0f2);
    uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar2,uVar4);
    uVar11 = __subdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xfe231671,0x3fbc71c6);
    uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar2,uVar4);
    uVar11 = __subdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x9998ebc4,0x3fc99999);
    uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar2,uVar4);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar5,uVar6);
    uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (iVar8 == -1) {
      dVar9 = (double)__subdf3(uVar5,uVar6,(int)uVar10,uVar1);
      return dVar9;
    }
    iVar8 = iVar8 * 8;
    uVar10 = __subdf3((int)uVar10,uVar1,*(undefined4 *)(&atanlo + iVar8),
                      *(undefined4 *)(&UNK_08009eec + iVar8));
    uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar5,uVar6);
    dVar9 = (double)__subdf3(*(undefined4 *)(&atanhi + iVar8),*(undefined4 *)(&UNK_08009ecc + iVar8)
                             ,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    if ((int)in_r1 < 0) {
      return dVar9;
    }
  }
  else {
    if ((uVar7 < 0x7ff00001) && ((uVar7 != 0x7ff00000 || (in_r0 == 0)))) {
      return in_d0;
    }
    dVar9 = (double)__aeabi_dadd();
  }
  return dVar9;
}


////>>0x08005d0c>>fabs>>////

double fabs(double __x)

{
  double in_d0;
  
  return in_d0;
}


////>>0x08005d14>>__errno>>////

undefined4 __errno(void)

{
  return _impure_ptr;
}


////>>0x08005d20>>__libc_init_array>>////

/* WARNING: Removing unreachable block (ram,0x08005d2c) */
/* WARNING: Removing unreachable block (ram,0x08005d2e) */

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


////>>0x08005d68>>memset>>////

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
    uVar4 = __n - 1;
    puVar1 = (uint *)__s;
    if (__n == 0) {
      return __s;
    }
    while( true ) {
      puVar2 = (uint *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)__c;
      __n = uVar4;
      if (((uint)puVar2 & 3) == 0) break;
      bVar6 = uVar4 == 0;
      uVar4 = uVar4 - 1;
      puVar1 = puVar2;
      if (bVar6) {
        return __s;
      }
    }
  }
  if (3 < __n) {
    uVar5 = __c & 0xffU | (__c & 0xffU) << 8;
    uVar5 = uVar5 | uVar5 << 0x10;
    uVar4 = __n;
    puVar1 = puVar2;
    if (0xf < __n) {
      uVar4 = __n - 0x10;
      puVar1 = puVar2 + 4;
      do {
        puVar1[-4] = uVar5;
        puVar1[-3] = uVar5;
        puVar1[-2] = uVar5;
        puVar1[-1] = uVar5;
        puVar1 = puVar1 + 4;
      } while (puVar1 != (uint *)((int)puVar2 + (uVar4 & 0xfffffff0) + 0x20));
      __n = __n & 0xf;
      puVar2 = puVar2 + ((uVar4 >> 4) + 1) * 4;
      uVar4 = __n;
      puVar1 = puVar2;
      if (__n < 4) goto LAB_08005de4;
    }
    do {
      __n = __n - 4;
      *puVar2 = uVar5;
      puVar2 = puVar2 + 1;
    } while (3 < __n);
    puVar2 = (uint *)((int)puVar1 + (uVar4 - 4 & 0xfffffffc) + 4);
    __n = uVar4 & 3;
  }
LAB_08005de4:
  if (__n != 0) {
    puVar1 = puVar2;
    do {
      puVar3 = (uint *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)__c;
      puVar1 = puVar3;
    } while ((uint *)(__n + (int)puVar2) != puVar3);
  }
  return __s;
}


////>>0x08005dfc>>sprintf>>////

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  char *local_80 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  char *local_70;
  undefined4 local_6c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_6c = 0x7fffffff;
  local_78 = 0x7fffffff;
  uStack_74 = 0xffff0208;
  local_80[0] = __s;
  local_70 = __s;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  iVar1 = _svfprintf_r(_impure_ptr,local_80,__format,&uStack_8);
  *local_80[0] = '\0';
  return iVar1;
}


////>>0x08005e40>>strlen>>////

size_t strlen(char *__s)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)((uint)__s & 0xfffffffc);
  iVar1 = -((uint)__s & 3);
  uVar3 = *puVar2;
  if (((uint)__s & 3) != 0) {
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


////>>0x08005e9c>>_svfprintf_r>>////

/* WARNING: Type propagation algorithm not settling */

byte * _svfprintf_r(undefined4 *param_1,int *param_2,int *param_3,int **param_4)

{
  byte bVar1;
  int **ppiVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  char cVar10;
  byte bVar11;
  int *piVar12;
  int **ppiVar13;
  undefined uVar14;
  ushort uVar15;
  int *__s;
  int **ppiVar16;
  byte **ppbVar17;
  int *piVar18;
  int *piVar19;
  int **ppiVar20;
  char *pcVar21;
  uint uVar22;
  byte *pbVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  int *piVar28;
  byte *pbVar29;
  bool bVar30;
  longlong lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 in_stack_fffffe78;
  int *in_stack_fffffe7c;
  int *local_168;
  byte *local_164;
  int *local_15c;
  char *local_158;
  int **local_154;
  int *local_150;
  int *local_148;
  int local_144;
  uint local_140;
  int local_13c;
  int *local_138;
  int *local_134;
  int local_130;
  int *local_12c;
  int *local_128;
  char *local_11c;
  int *local_110;
  int *local_10c;
  byte *local_108;
  int *local_104;
  byte local_f5;
  undefined2 local_f4;
  int *local_f0 [2];
  undefined4 local_e8;
  int *local_e0;
  byte abStack_dc [4];
  int **local_d8;
  int local_d4;
  byte *local_d0;
  int *local_cc [16];
  undefined local_8c;
  byte bStack_2a;
  undefined local_29;
  int iStack_28;
  
  ppiVar2 = (int **)_localeconv_r();
  __s = *ppiVar2;
  piVar3 = (int *)strlen((char *)__s);
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar4 = _malloc_r(param_1,0x40);
    *param_2 = iVar4;
    param_2[4] = iVar4;
    if (iVar4 == 0) {
      *param_1 = 0xc;
      return (byte *)0xffffffff;
    }
    param_2[5] = 0x40;
  }
  local_128 = (int *)0x0;
  local_138 = (int *)0x0;
  local_12c = (int *)0x0;
  local_d4 = 0;
  local_d0 = (byte *)0x0;
  local_11c = (char *)0x0;
  local_10c = (int *)0x0;
  local_108 = (byte *)0x0;
  local_104 = (int *)0x0;
  local_110 = (int *)0x0;
  local_164 = (byte *)0x0;
  ppiVar2 = local_cc;
  bVar1 = *(byte *)param_3;
  local_d8 = ppiVar2;
  local_154 = param_4;
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
        local_d4 = local_d4 + 1;
        local_d0 = (byte *)((int)local_d0 + (int)piVar27);
        *ppiVar2 = param_3;
        *(int **)((int)ppiVar2 + 4) = piVar27;
        if (local_d4 < 8) {
          ppiVar2 = (int **)((int)ppiVar2 + 8);
        }
        else {
          iVar4 = __ssprint_r(param_1,param_2,&local_d8);
          if (iVar4 != 0) goto LAB_0800604a;
          ppiVar2 = local_cc;
        }
        local_164 = (byte *)((int)local_164 + (int)piVar27);
      }
      if (*(byte *)piVar28 == 0) goto LAB_08006216;
    }
    piVar27 = (int *)0xffffffff;
    uVar26 = 0;
    uVar25 = (uint)*(byte *)((int)piVar28 + 1);
    local_15c = (int *)0x0;
    local_f5 = 0;
    piVar28 = (int *)((int)piVar28 + 1);
LAB_08005f4a:
    piVar28 = (int *)((int)piVar28 + 1);
LAB_08005f4e:
    local_158 = (char *)piVar27;
    switch(uVar25) {
    case 0x20:
      goto switchD_08005f58_caseD_20;
    default:
      if (uVar25 == 0) goto LAB_08006216;
      piVar18 = (int *)0x0;
      local_168 = (int *)0x1;
      local_f5 = 0;
      local_148 = (int *)0x0;
      local_13c = 0;
      local_134 = (int *)0x0;
      local_130 = 0;
      local_158 = (char *)0x1;
      param_3 = (int *)&local_8c;
      piVar24 = piVar18;
      local_8c = (char)uVar25;
      goto LAB_08006298;
    case 0x23:
      uVar26 = uVar26 | 1;
      uVar25 = (uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case 0x27:
      iVar4 = _localeconv_r(param_1);
      local_110 = *(int **)(iVar4 + 4);
      local_104 = (int *)strlen((char *)local_110);
      iVar4 = _localeconv_r(param_1);
      local_108 = *(byte **)(iVar4 + 8);
      if (local_104 == (int *)0x0) goto switchD_08005f58_caseD_74;
      uVar25 = (uint)*(byte *)piVar28;
      if ((local_108 != (byte *)0x0) && (*local_108 != 0)) {
        uVar26 = uVar26 | 0x400;
      }
      goto LAB_08005f4a;
    case 0x2a:
      uVar25 = (uint)*(byte *)piVar28;
      local_15c = *local_154;
      local_154 = local_154 + 1;
      if ((int)local_15c < 0) {
        local_15c = (int *)-(int)local_15c;
        goto LAB_08006602;
      }
      goto LAB_08005f4a;
    case 0x2b:
      local_f5 = 0x2b;
      uVar25 = (uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case 0x2d:
      uVar25 = (uint)*(byte *)piVar28;
LAB_08006602:
      uVar26 = uVar26 | 4;
      goto LAB_08005f4a;
    case 0x2e:
      uVar25 = (uint)*(byte *)piVar28;
      if (uVar25 == 0x2a) {
        uVar25 = (uint)*(byte *)((int)piVar28 + 1);
        piVar27 = (int *)((uint)*local_154 | (int)*local_154 >> 0x1f);
        local_154 = local_154 + 1;
        piVar28 = (int *)((int)piVar28 + 1);
        goto LAB_08005f4a;
      }
      piVar27 = (int *)0x0;
      piVar28 = (int *)((int)piVar28 + 1);
      while (uVar25 - 0x30 < 10) {
        piVar27 = (int *)((uVar25 - 0x30) + (int)piVar27 * 10);
        uVar25 = (uint)*(byte *)piVar28;
        piVar28 = (int *)((int)piVar28 + 1);
      }
      goto LAB_08005f4e;
    case 0x30:
      uVar26 = uVar26 | 0x80;
      uVar25 = (uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_08005f58_caseD_31;
    case 0x41:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x61:
    case 0x65:
    case 0x66:
    case 0x67:
      local_154 = (int **)((int)local_154 + 7U & 0xfffffff8);
      local_128 = *local_154;
      local_12c = local_154[1];
      local_154 = local_154 + 2;
      iVar4 = __unorddf2(local_128,(uint)local_12c & 0x7fffffff,0xffffffff,0x7fefffff);
      if ((iVar4 == 0) &&
         (iVar4 = __aeabi_dcmple(local_128,(uint)local_12c & 0x7fffffff,0xffffffff,0x7fefffff),
         iVar4 == 0)) {
        iVar4 = __aeabi_dcmplt(local_128,local_12c,0,0);
        if (iVar4 == 0) {
          piVar18 = (int *)(uint)local_f5;
        }
        else {
          piVar18 = (int *)0x2d;
          local_f5 = 0x2d;
        }
        param_3 = (int *)&UNK_08009f10;
        piVar27 = (int *)&UNK_08009f0c;
LAB_08006524:
        local_148 = (int *)0x0;
        local_168 = (int *)0x3;
        if (uVar25 < 0x48) {
          param_3 = piVar27;
        }
        local_134 = (int *)0x0;
        local_130 = 0;
        local_140 = uVar26 & 0xffffff7f;
        local_158 = (char *)0x3;
        local_13c = 0;
        piVar24 = (int *)0x0;
        goto LAB_08006538;
      }
      iVar4 = __unorddf2(local_128,local_12c,local_128,local_12c);
      if (iVar4 != 0) {
        if ((int)local_12c < 0) {
          piVar18 = (int *)0x2d;
          local_f5 = 0x2d;
        }
        else {
          piVar18 = (int *)(uint)local_f5;
        }
        param_3 = (int *)&UNK_08009f18;
        piVar27 = (int *)&UNK_08009f14;
        goto LAB_08006524;
      }
      piVar24 = local_12c;
      if (uVar25 == 0x61) {
        uVar14 = 0x78;
LAB_08007224:
        local_f4 = CONCAT11(uVar14,0x30);
        if ((int)piVar27 < 100) {
          local_140 = uVar26 | 0x102;
          local_148 = (int *)0x0;
          param_3 = (int *)&local_8c;
          uVar26 = uVar26 | 2;
        }
        else {
          param_3 = (int *)_malloc_r(param_1,(byte *)((int)piVar27 + 1));
          if (param_3 == (int *)0x0) {
            uVar15 = *(ushort *)(param_2 + 3) | 0x40;
            *(ushort *)(param_2 + 3) = uVar15;
            goto LAB_0800604e;
          }
          local_140 = uVar26 | 0x102;
          uVar26 = uVar26 | 2;
          local_148 = param_3;
        }
LAB_0800724a:
        if ((int)local_12c < 0) {
LAB_08007414:
          local_144 = 0x2d;
          piVar24 = local_12c + -0x20000000;
        }
        else {
          local_144 = 0;
        }
        if (uVar25 == 0x61) {
          frexp((double)CONCAT44(in_stack_fffffe7c,in_stack_fffffe78),local_128);
          uVar32 = __muldf3();
          iVar4 = __aeabi_dcmpeq((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0,0);
          if (iVar4 != 0) {
            local_f0[0] = (int *)0x1;
          }
          local_158 = "0123456789abcdef";
          local_138 = param_3;
          piVar24 = piVar27;
          goto LAB_080072ba;
        }
        if (uVar25 == 0x41) {
          frexp((double)CONCAT44(in_stack_fffffe7c,in_stack_fffffe78),local_128);
          uVar32 = __muldf3();
          iVar4 = __aeabi_dcmpeq((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0,0);
          if (iVar4 == 0) {
            local_158 = "0123456789ABCDEF";
            local_138 = param_3;
            piVar24 = piVar27;
          }
          else {
            local_f0[0] = (int *)0x1;
            local_158 = "0123456789ABCDEF";
            local_138 = param_3;
            piVar24 = piVar27;
          }
          goto LAB_080072ba;
        }
      }
      else {
        if (uVar25 == 0x41) {
          uVar14 = 0x58;
          goto LAB_08007224;
        }
        local_140 = uVar26 | 0x100;
        local_148 = (int *)0x0;
        if (piVar27 == (int *)0xffffffff) {
          piVar27 = (int *)0x6;
          goto LAB_0800724a;
        }
        if ((uVar25 & 0xffffffdf) == 0x47) {
          if (piVar27 == (int *)0x0) {
            piVar27 = (int *)0x1;
            local_148 = (int *)0x0;
          }
          goto LAB_0800724a;
        }
        if ((int)local_12c < 0) goto LAB_08007414;
        local_144 = 0;
      }
      local_168 = (int *)(uVar25 & 0xffffffdf);
      in_stack_fffffe7c = piVar27;
      local_150 = piVar27;
      if (uVar25 == 0x66) {
        in_stack_fffffe78 = 3;
        param_3 = (int *)_dtoa_r(param_1,local_f0,local_128,piVar24);
        piVar18 = (int *)((int)param_3 + (int)piVar27);
LAB_0800764c:
        if ((*(byte *)param_3 == 0x30) &&
           (iVar4 = __aeabi_dcmpeq(local_128,piVar24,0,0), iVar4 == 0)) {
          local_f0[0] = (int *)(1 - (int)local_150);
        }
        piVar18 = (int *)((int)piVar18 + (int)local_f0[0]);
      }
      else if (uVar25 == 0x46) {
        in_stack_fffffe78 = 3;
        param_3 = (int *)_dtoa_r(param_1,local_f0,local_128,piVar24);
LAB_08007760:
        piVar18 = (int *)((int)param_3 + (int)local_150);
        if (uVar25 == 0x46) goto LAB_0800764c;
      }
      else {
        if (local_168 == (int *)0x45) {
          local_150 = (int *)((int)piVar27 + 1);
        }
        in_stack_fffffe78 = 2;
        in_stack_fffffe7c = local_150;
        param_3 = (int *)_dtoa_r(param_1,local_f0,local_128,piVar24);
        local_138 = local_e0;
        if (uVar25 == 0x67) {
          if ((uVar26 & 1) == 0) goto LAB_08006ca6;
        }
        else if (uVar25 == 0x47) {
          if ((uVar26 & 1) != 0) goto LAB_08007760;
          goto LAB_08006ca6;
        }
        piVar18 = (int *)((int)local_150 + (int)param_3);
      }
      iVar4 = __aeabi_dcmpeq(local_128,piVar24,0,0);
      local_138 = piVar18;
      if (iVar4 == 0) {
        for (; local_138 = local_e0, local_e0 < piVar18; local_e0 = (int *)((int)local_e0 + 1)) {
          *(byte *)local_e0 = 0x30;
        }
      }
LAB_08006ca6:
      local_138 = (int *)((int)local_138 - (int)param_3);
      goto LAB_08006cb0;
    case 0x43:
    case 99:
      piVar18 = (int *)0x0;
      piVar27 = *local_154;
      local_f5 = 0;
      local_148 = (int *)0x0;
      piVar24 = (int *)0x0;
      local_13c = 0;
      local_134 = (int *)0x0;
      local_130 = 0;
      local_154 = local_154 + 1;
      local_168 = (int *)0x1;
      local_158 = (char *)0x1;
      local_8c = SUB41(piVar27,0);
      param_3 = (int *)&local_8c;
      goto LAB_08006298;
    case 0x44:
      uVar26 = uVar26 | 0x10;
      if ((int)(uVar26 << 0x1a) < 0) goto LAB_080060ec;
LAB_080065a8:
      ppiVar16 = local_154 + 1;
      if ((int)(uVar26 << 0x1b) < 0) {
LAB_08006bcc:
        piVar24 = *local_154;
        piVar18 = (int *)((int)piVar24 >> 0x1f);
        local_154 = ppiVar16;
      }
      else if ((int)(uVar26 << 0x19) < 0) {
        piVar24 = (int *)(int)*(short *)local_154;
        piVar18 = (int *)((int)piVar24 >> 0x1f);
        local_154 = ppiVar16;
      }
      else {
        if (-1 < (int)(uVar26 << 0x16)) goto LAB_08006bcc;
        piVar24 = (int *)(int)*(char *)local_154;
        piVar18 = (int *)((int)piVar24 >> 0x1f);
        local_154 = ppiVar16;
      }
      goto LAB_08006102;
    case 0x4c:
      uVar26 = uVar26 | 8;
      uVar25 = (uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case 0x4f:
      uVar26 = uVar26 | 0x10;
    case 0x6f:
      if ((uVar26 & 0x20) == 0) {
        ppiVar16 = local_154 + 1;
        if ((uVar26 & 0x10) == 0) {
          if ((uVar26 & 0x40) == 0) {
            if ((uVar26 & 0x200) == 0) goto LAB_08006be2;
            piVar24 = (int *)(uint)*(byte *)local_154;
            piVar18 = (int *)0x0;
            local_154 = ppiVar16;
          }
          else {
            piVar24 = (int *)(uint)*(ushort *)local_154;
            piVar18 = (int *)0x0;
            local_154 = ppiVar16;
          }
        }
        else {
LAB_08006be2:
          piVar24 = *local_154;
          piVar18 = (int *)0x0;
          local_154 = ppiVar16;
        }
      }
      else {
        ppiVar16 = (int **)((int)local_154 + 7U & 0xfffffff8);
        piVar24 = *ppiVar16;
        piVar18 = ppiVar16[1];
        local_154 = ppiVar16 + 2;
      }
      iVar4 = 0;
      uVar26 = uVar26 & 0xfffffbff;
      break;
    case 0x53:
    case 0x73:
      local_f5 = 0;
      param_3 = *local_154;
      local_154 = local_154 + 1;
      local_140 = uVar26;
      if (param_3 == (int *)0x0) {
        if ((int *)0x5 < piVar27) {
          piVar27 = (int *)0x6;
        }
        param_3 = (int *)&UNK_08009f44;
        piVar18 = (int *)0x0;
        local_148 = (int *)0x0;
        local_13c = 0;
        local_134 = (int *)0x0;
        local_130 = 0;
        piVar24 = (int *)0x0;
        local_168 = piVar27;
        local_158 = (char *)piVar27;
      }
      else {
        if (piVar27 == (int *)0xffffffff) {
          local_158 = (char *)strlen((char *)param_3);
        }
        else {
          pvVar5 = memchr(param_3,0,(size_t)piVar27);
          if (pvVar5 == (void *)0x0) {
            piVar18 = (int *)(uint)local_f5;
            local_148 = (int *)0x0;
            local_13c = 0;
            local_134 = (int *)0x0;
            local_130 = 0;
            piVar24 = (int *)0x0;
            local_168 = piVar27;
            goto LAB_08006538;
          }
          local_158 = (char *)((int)pvVar5 - (int)param_3);
        }
        local_148 = (int *)0x0;
        local_13c = 0;
        local_134 = (int *)0x0;
        local_130 = 0;
        piVar18 = (int *)(uint)local_f5;
        piVar24 = (int *)0x0;
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
      }
      goto LAB_08006538;
    case 0x55:
      uVar26 = uVar26 | 0x10;
      if ((int)(uVar26 << 0x1a) < 0) goto LAB_0800618a;
LAB_080066c0:
      ppiVar16 = local_154 + 1;
      if ((int)(uVar26 << 0x1b) < 0) {
LAB_08006bf2:
        piVar24 = *local_154;
        piVar18 = (int *)0x0;
        iVar4 = 1;
        local_154 = ppiVar16;
      }
      else if ((int)(uVar26 << 0x19) < 0) {
        piVar24 = (int *)(uint)*(ushort *)local_154;
        piVar18 = (int *)0x0;
        iVar4 = 1;
        local_154 = ppiVar16;
      }
      else {
        if (-1 < (int)(uVar26 << 0x16)) goto LAB_08006bf2;
        piVar24 = (int *)(uint)*(byte *)local_154;
        piVar18 = (int *)0x0;
        iVar4 = 1;
        local_154 = ppiVar16;
      }
      break;
    case 0x58:
      local_11c = "0123456789ABCDEF";
      if ((uVar26 & 0x20) != 0) goto LAB_080061ac;
LAB_08006696:
      ppiVar16 = local_154 + 1;
      if ((uVar26 & 0x10) == 0) {
        if ((uVar26 & 0x40) == 0) {
          if ((uVar26 & 0x200) == 0) goto LAB_08006bbc;
          piVar24 = (int *)(uint)*(byte *)local_154;
          piVar18 = (int *)0x0;
          local_154 = ppiVar16;
        }
        else {
          piVar24 = (int *)(uint)*(ushort *)local_154;
          piVar18 = (int *)0x0;
          local_154 = ppiVar16;
        }
      }
      else {
LAB_08006bbc:
        piVar24 = *local_154;
        piVar18 = (int *)0x0;
        local_154 = ppiVar16;
      }
      goto LAB_080061be;
    case 100:
    case 0x69:
      if (-1 < (int)(uVar26 << 0x1a)) goto LAB_080065a8;
LAB_080060ec:
      ppiVar16 = (int **)((int)local_154 + 7U & 0xfffffff8);
      piVar24 = *ppiVar16;
      piVar18 = ppiVar16[1];
      local_154 = ppiVar16 + 2;
LAB_08006102:
      if ((int)piVar18 < 0) {
        bVar30 = piVar24 != (int *)0x0;
        piVar24 = (int *)-(int)piVar24;
        piVar18 = (int *)(-(int)piVar18 - (uint)bVar30);
        local_f5 = 0x2d;
      }
      if (piVar27 != (int *)0xffffffff) {
        iVar4 = 1;
        iVar6 = 1;
        local_140 = uVar26 & 0xffffff7f;
        if (((uint)piVar24 | (uint)piVar18) == 0) goto LAB_080060a4;
        goto LAB_08006130;
      }
      local_140 = uVar26;
      if (piVar18 != (int *)0x0 || (int *)0x9 < piVar24) goto LAB_08006f16;
      goto LAB_0800698a;
    case 0x68:
      uVar25 = (uint)*(byte *)piVar28;
      if (uVar25 == 0x68) {
        uVar25 = (uint)*(byte *)((int)piVar28 + 1);
        uVar26 = uVar26 | 0x200;
        piVar28 = (int *)((int)piVar28 + 1);
      }
      else {
        uVar26 = uVar26 | 0x40;
      }
      goto LAB_08005f4a;
    case 0x6a:
    case 0x71:
      uVar26 = uVar26 | 0x20;
    case 0x74:
    case 0x7a:
switchD_08005f58_caseD_74:
      uVar25 = (uint)*(byte *)piVar28;
      goto LAB_08005f4a;
    case 0x6c:
      goto switchD_08005f58_caseD_6c;
    case 0x6e:
      ppiVar16 = local_154 + 1;
      ppbVar17 = (byte **)*local_154;
      local_154 = ppiVar16;
      if ((uVar26 & 0x20) != 0) {
        *ppbVar17 = local_164;
        ppbVar17[1] = (byte *)((int)local_164 >> 0x1f);
        goto LAB_0800620e;
      }
      if ((uVar26 & 0x10) == 0) {
        if ((uVar26 & 0x40) != 0) {
          *(short *)ppbVar17 = (short)local_164;
          goto LAB_0800620e;
        }
        if ((uVar26 & 0x200) != 0) {
          *(char *)ppbVar17 = (char)local_164;
          goto LAB_0800620e;
        }
      }
      *ppbVar17 = local_164;
      goto LAB_0800620e;
    case 0x70:
      local_f4 = 0x7830;
      piVar24 = *local_154;
      local_11c = "0123456789abcdef";
      uVar26 = uVar26 | 2;
      piVar18 = (int *)0x0;
      iVar4 = 2;
      uVar25 = 0x78;
      local_154 = local_154 + 1;
      break;
    case 0x75:
      if (-1 < (int)(uVar26 << 0x1a)) goto LAB_080066c0;
LAB_0800618a:
      ppiVar16 = (int **)((int)local_154 + 7U & 0xfffffff8);
      piVar24 = *ppiVar16;
      piVar18 = ppiVar16[1];
      iVar4 = 1;
      local_154 = ppiVar16 + 2;
      break;
    case 0x78:
      local_11c = "0123456789abcdef";
      if ((uVar26 & 0x20) == 0) goto LAB_08006696;
LAB_080061ac:
      ppiVar16 = (int **)((int)local_154 + 7U & 0xfffffff8);
      piVar24 = *ppiVar16;
      piVar18 = ppiVar16[1];
      local_154 = ppiVar16 + 2;
LAB_080061be:
      if (((uVar26 & 1) != 0) && (((uint)piVar24 | (uint)piVar18) != 0)) {
        uVar26 = uVar26 | 2;
        local_f4 = CONCAT11((char)uVar25,0x30);
      }
      iVar4 = 2;
      uVar26 = uVar26 & 0xfffffbff;
    }
    local_f5 = 0;
    if (piVar27 == (int *)0xffffffff) {
      local_140 = uVar26;
      if (iVar4 != 1) goto LAB_08006136;
LAB_08006980:
      local_140 = uVar26;
      if (piVar18 == (int *)0x0 && piVar24 < (int *)0xa) goto LAB_0800698a;
LAB_08006f16:
      lVar31 = CONCAT44(piVar18,piVar24);
      local_138 = (int *)0x0;
      param_3 = (int *)(&bStack_2a + 2);
      do {
        iVar4 = (int)((ulonglong)lVar31 >> 0x20);
        uVar26 = (uint)lVar31;
        cVar10 = '\n';
        __aeabi_uldivmod(uVar26,iVar4,10,0);
        *(byte *)((int)param_3 + -1) = cVar10 + 0x30;
        local_138 = (int *)((int)local_138 + 1);
        param_3 = (int *)((int)param_3 + -1);
        if (((((local_140 & 0x400) != 0) && (local_138 == (int *)(uint)*local_108)) &&
            (local_138 != (int *)0xff)) && (iVar4 != 0 || 9 < uVar26)) {
          param_3 = (int *)((int)param_3 - (int)local_104);
          strncpy((char *)param_3,(char *)local_110,(size_t)local_104);
          if (local_108[1] == 0) {
            local_138 = (int *)0x0;
          }
          else {
            local_108 = local_108 + 1;
            local_138 = (int *)0x0;
          }
        }
        lVar31 = __aeabi_uldivmod(uVar26,iVar4,10,0);
      } while (lVar31 != 0);
      local_158 = (char *)((int)(&bStack_2a + 2) - (int)param_3);
    }
    else {
      local_140 = uVar26 & 0xffffff7f;
      iVar6 = iVar4;
      if (((uint)piVar24 | (uint)piVar18) == 0) {
LAB_080060a4:
        if (piVar27 == (int *)0x0) {
          if (iVar4 == 0) {
            local_158 = (char *)(uVar26 & 1);
            if ((int *)local_158 == (int *)0x0) {
              param_3 = (int *)(&bStack_2a + 2);
            }
            else {
              param_3 = (int *)(&bStack_2a + 1);
              local_29 = '0';
            }
          }
          else {
            param_3 = (int *)(&bStack_2a + 2);
          }
        }
        else {
          if (iVar4 != 1) goto LAB_08006136;
LAB_0800698a:
          local_29 = (char)piVar24 + '0';
          param_3 = (int *)(&bStack_2a + 1);
          local_158 = (char *)0x1;
        }
      }
      else {
LAB_08006130:
        iVar4 = iVar6;
        uVar26 = local_140;
        if (iVar6 == 1) goto LAB_08006980;
LAB_08006136:
        if (iVar4 == 2) {
          param_3 = (int *)(&bStack_2a + 2);
          do {
            piVar19 = (int *)((uint)piVar24 >> 4 | (int)piVar18 << 0x1c);
            piVar18 = (int *)((uint)piVar18 >> 4);
            param_3 = (int *)((int)param_3 + -1);
            *(char *)param_3 = local_11c[(uint)piVar24 & 0xf];
            piVar24 = piVar19;
          } while (((uint)piVar19 | (uint)piVar18) != 0);
        }
        else {
          param_3 = (int *)(&bStack_2a + 2);
          do {
            piVar19 = param_3;
            piVar12 = (int *)((uint)piVar24 >> 3 | (int)piVar18 << 0x1d);
            piVar18 = (int *)((uint)piVar18 >> 3);
            iVar4 = ((uint)piVar24 & 7) + 0x30;
            *(byte *)((int)piVar19 + -1) = (byte)iVar4;
            param_3 = (int *)((int)piVar19 + -1);
            piVar24 = piVar12;
          } while (((uint)piVar12 | (uint)piVar18) != 0);
          if (((local_140 & 1) != 0) && (iVar4 != 0x30)) {
            param_3 = (int *)((int)piVar19 + -2);
            local_158 = (char *)(&bStack_2a + (2 - (int)param_3));
            *(byte *)((int)piVar19 + -2) = 0x30;
            goto LAB_0800675a;
          }
        }
        local_158 = (char *)(&bStack_2a + (2 - (int)param_3));
      }
    }
LAB_0800675a:
    local_148 = (int *)0x0;
    local_13c = 0;
    local_134 = (int *)0x0;
    local_130 = 0;
    piVar18 = (int *)(uint)local_f5;
    piVar24 = piVar27;
    local_168 = (int *)local_158;
    if ((int)local_158 < (int)piVar27) {
      local_168 = piVar27;
    }
    goto LAB_08006538;
  }
LAB_08006216:
  if (local_d0 == (byte *)0x0) {
LAB_0800604a:
    uVar15 = *(ushort *)(param_2 + 3);
  }
  else {
    __ssprint_r(param_1,param_2,&local_d8);
    uVar15 = *(ushort *)(param_2 + 3);
  }
LAB_0800604e:
  if ((uVar15 & 0x40) != 0) {
    local_164 = (byte *)0xffffffff;
  }
  return local_164;
switchD_08005f58_caseD_6c:
  uVar25 = (uint)*(byte *)piVar28;
  if (uVar25 == 0x6c) {
    uVar25 = (uint)*(byte *)((int)piVar28 + 1);
    uVar26 = uVar26 | 0x20;
    piVar28 = (int *)((int)piVar28 + 1);
  }
  else {
    uVar26 = uVar26 | 0x10;
  }
  goto LAB_08005f4a;
  while (iVar6 = __aeabi_dcmpeq(uVar7,uVar8,0,0), iVar6 == 0) {
LAB_080072ba:
    piVar18 = piVar24;
    piVar19 = local_138;
    piVar24 = (int *)((int)piVar18 + -1);
    uVar32 = __muldf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0,0x40300000);
    iVar4 = __aeabi_d2iz();
    uVar33 = __aeabi_i2d();
    uVar32 = __subdf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),(int)uVar33,
                      (int)((ulonglong)uVar33 >> 0x20));
    uVar8 = (undefined4)((ulonglong)uVar32 >> 0x20);
    uVar7 = (undefined4)uVar32;
    local_138 = (int *)((int)piVar19 + 1);
    *(char *)piVar19 = local_158[iVar4];
    if (piVar24 == (int *)0xffffffff) break;
  }
  iVar6 = __aeabi_dcmpgt(uVar7,uVar8,0,0x3fe00000);
  if ((iVar6 == 0) &&
     ((iVar6 = __aeabi_dcmpeq(uVar7,uVar8,0,0x3fe00000), iVar6 == 0 || (-1 < iVar4 << 0x1f)))) {
    if (-1 < (int)piVar24) {
      piVar18 = (int *)((int)piVar18 + (int)local_138);
      piVar24 = local_138;
      do {
        local_138 = (int *)((int)piVar24 + 1);
        *(byte *)piVar24 = 0x30;
        piVar24 = local_138;
      } while (piVar18 != local_138);
    }
  }
  else {
    bVar1 = local_158[0xf];
    bVar11 = *(byte *)piVar19;
    piVar24 = local_138;
    local_e0 = piVar19;
    while (bVar1 == bVar11) {
      *(byte *)((int)piVar24 + -1) = 0x30;
      bVar11 = *(byte *)((int)local_e0 + -1);
      piVar24 = local_e0;
      local_e0 = (int *)((int)local_e0 + -1);
    }
    if (bVar11 == 0x39) {
      bVar11 = local_158[10];
    }
    else {
      bVar11 = bVar11 + 1;
    }
    *(byte *)((int)piVar24 + -1) = bVar11;
  }
  local_138 = (int *)((int)local_138 - (int)param_3);
LAB_08006cb0:
  local_168 = (int *)(uVar25 & 0xffffffdf);
  local_134 = local_f0[0];
  if (local_168 == (int *)0x47) {
    if (((int)((int)local_f0[0] + 3) < 0 == SCARRY4((int)local_f0[0],3)) &&
       ((int)local_f0[0] <= (int)piVar27)) {
      if ((int)local_f0[0] < (int)local_138) {
        local_158 = (char *)((int)local_138 + (int)piVar3);
        if (0 < (int)local_f0[0]) {
          uVar25 = 0x67;
          goto LAB_080074f8;
        }
        local_158 = (char *)((int)local_158 + (1 - (int)local_f0[0]));
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
        uVar25 = 0x67;
      }
      else {
        if ((int)(uVar26 << 0x1f) < 0) {
          local_158 = (char *)((int)local_f0[0] + (int)piVar3);
        }
        else {
          local_158 = (char *)local_f0[0];
        }
        if (-1 < (int)(uVar26 << 0x15)) {
          uVar25 = 0x67;
          goto LAB_0800754a;
        }
        if (0 < (int)local_f0[0]) {
          uVar25 = 0x67;
          goto LAB_080074fc;
        }
        uVar25 = 0x67;
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
      }
      goto LAB_080073d6;
    }
    uVar25 = uVar25 - 2;
    local_168 = (int *)(uVar25 & 0xffffffdf);
LAB_08006cc4:
    local_e8._0_1_ = (char)uVar25;
    if (local_168 == (int *)0x41) {
      local_e8._0_1_ = (char)local_e8 + '\x0f';
    }
    piVar27 = (int *)((int)local_f0[0] + -1);
    if ((int)piVar27 < 0) {
      local_e8._1_1_ = 0x2d;
      local_f0[0] = (int *)(1 - (int)local_f0[0]);
    }
    else {
      local_e8._1_1_ = 0x2b;
      local_f0[0] = piVar27;
    }
    if ((int)local_f0[0] < 10) {
      if (local_168 == (int *)0x41) {
        pcVar21 = (char *)((int)&local_e8 + 2);
      }
      else {
        local_e8._2_1_ = 0x30;
        pcVar21 = (char *)((int)&local_e8 + 3);
      }
      *pcVar21 = (char)local_f0[0] + '0';
      pcVar21 = pcVar21 + 1;
    }
    else {
      pbVar29 = abStack_dc + 3;
      pbVar23 = pbVar29;
      do {
        pbVar9 = pbVar23;
        piVar24 = (int *)((uint)local_f0[0] / 10);
        pbVar9[-1] = (char)local_f0[0] + (char)piVar24 * -10 + 0x30;
        pbVar23 = pbVar9 + -1;
        local_f0[0] = piVar24;
      } while ((int *)0x9 < piVar24);
      uVar22 = (uint)(piVar24 + 0xc) & 0xff;
      pbVar9[-2] = (byte)uVar22;
      if (pbVar9 + -2 < pbVar29) {
        pbVar9 = pbVar23;
        pcVar21 = (char *)((int)&local_e8 + 2);
        while( true ) {
          *pcVar21 = (char)uVar22;
          if (pbVar29 == pbVar9) break;
          uVar22 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
          pcVar21 = pcVar21 + 1;
        }
        pcVar21 = (char *)(((int)&stack0xfffffe78 * 2 - (int)pbVar23) + 0x152);
      }
      else {
        pcVar21 = (char *)((int)&local_e8 + 2);
      }
    }
    local_10c = (int *)(pcVar21 + -(int)&local_e8);
    local_158 = (char *)((int)local_10c + (int)local_138);
    if ((1 < (int)local_138) || ((int)(uVar26 << 0x1f) < 0)) {
      local_158 = (char *)((int)local_158 + (int)piVar3);
    }
    local_13c = 0;
    local_134 = (int *)0x0;
    local_130 = 0;
    local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
    local_140 = uVar26 & 0xfffffbff | 0x100;
    local_f0[0] = piVar27;
  }
  else {
    if (local_168 != (int *)0x46) goto LAB_08006cc4;
    if ((int)local_f0[0] < 1) {
      if ((piVar27 == (int *)0x0) && (-1 < (int)(uVar26 << 0x1f))) {
        uVar25 = 0x66;
        local_168 = (int *)0x1;
        local_158 = (char *)0x1;
      }
      else {
        uVar25 = 0x66;
        local_158 = (char *)((byte *)((int)piVar3 + 1) + (int)piVar27);
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
      }
LAB_080073d6:
      local_13c = 0;
      local_130 = 0;
    }
    else {
      if ((piVar27 == (int *)0x0) && (-1 < (int)(uVar26 << 0x1f))) {
        uVar25 = 0x66;
        local_158 = (char *)local_f0[0];
      }
      else {
        uVar25 = 0x66;
        local_158 = (char *)((byte *)((int)local_f0[0] + (int)piVar3) + (int)piVar27);
      }
LAB_080074f8:
      if (-1 < (int)(uVar26 << 0x15)) {
LAB_0800754a:
        local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
        goto LAB_080073d6;
      }
LAB_080074fc:
      local_13c = 0;
      local_130 = 0;
      uVar26 = (uint)*local_108;
      while (uVar26 != 0xff) {
        while( true ) {
          if ((int)local_134 <= (int)uVar26) goto LAB_08007524;
          uVar22 = (uint)local_108[1];
          local_134 = (int *)((int)local_134 - uVar26);
          if (uVar22 == 0) break;
          local_108 = local_108 + 1;
          local_130 = local_130 + 1;
          uVar26 = uVar22;
          if (uVar22 == 0xff) goto LAB_08007524;
        }
        local_13c = local_13c + 1;
      }
LAB_08007524:
      local_158 = (char *)((int)local_104 * (local_130 + local_13c) + (int)local_158);
      local_168 = (int *)((uint)local_158 & ~((int)local_158 >> 0x1f));
    }
  }
  if (local_144 == 0) {
    piVar18 = (int *)(uint)local_f5;
    piVar24 = (int *)0x0;
LAB_08006538:
    uVar26 = local_140;
    if (piVar18 != (int *)0x0) goto LAB_0800653e;
  }
  else {
    piVar18 = (int *)0x2d;
    piVar24 = (int *)0x0;
    local_f5 = 0x2d;
LAB_0800653e:
    local_168 = (int *)((int)local_168 + 1);
    uVar26 = local_140;
  }
LAB_08006298:
  if ((uVar26 & 2) != 0) {
    local_168 = (int *)((int)local_168 + 2);
  }
  if (((uVar26 & 0x84) == 0) &&
     (piVar27 = (int *)((int)local_15c - (int)local_168), 0 < (int)piVar27)) {
    if (0x10 < (int)piVar27) {
      do {
        piVar18 = piVar27;
        local_d4 = local_d4 + 1;
        local_d0 = local_d0 + 0x10;
        *ppiVar2 = (int *)"                0000000000000000Infinity";
        ppiVar2[1] = (int *)0x10;
        if (local_d4 < 8) {
          ppiVar2 = ppiVar2 + 2;
        }
        else {
          iVar4 = __ssprint_r(param_1,param_2,&local_d8);
          if (iVar4 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
        }
        piVar27 = piVar18 + -4;
      } while (0x10 < (int)piVar27);
      piVar27 = piVar18 + -4;
    }
    local_d4 = local_d4 + 1;
    local_d0 = local_d0 + (int)piVar27;
    *ppiVar2 = (int *)"                0000000000000000Infinity";
    ppiVar2[1] = piVar27;
    if (local_d4 < 8) {
      piVar18 = (int *)(uint)local_f5;
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar4 = __ssprint_r(param_1,param_2,&local_d8);
      if (iVar4 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
      piVar18 = (int *)(uint)local_f5;
    }
  }
  if (piVar18 != (int *)0x0) {
    local_d0 = local_d0 + 1;
    local_d4 = local_d4 + 1;
    *ppiVar2 = (int *)&local_f5;
    ppiVar2[1] = (int *)0x1;
    if (local_d4 < 8) {
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar4 = __ssprint_r(param_1,param_2,&local_d8);
      if (iVar4 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
    }
  }
  if ((uVar26 & 2) != 0) {
    local_d0 = local_d0 + 2;
    local_d4 = local_d4 + 1;
    *ppiVar2 = (int *)&local_f4;
    ppiVar2[1] = (int *)0x2;
    if (local_d4 < 8) {
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar4 = __ssprint_r(param_1,param_2,&local_d8);
      if (iVar4 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
    }
  }
  if (((uVar26 & 0x84) == 0x80) &&
     (piVar27 = (int *)((int)local_15c - (int)local_168), 0 < (int)piVar27)) {
    if (0x10 < (int)piVar27) {
      do {
        while( true ) {
          piVar18 = piVar27;
          local_d4 = local_d4 + 1;
          local_d0 = local_d0 + 0x10;
          *ppiVar2 = (int *)0x8009f60;
          ppiVar2[1] = (int *)0x10;
          if (local_d4 < 8) break;
          iVar4 = __ssprint_r(param_1,param_2,&local_d8);
          if (iVar4 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
          piVar27 = piVar18 + -4;
          if ((int)(piVar18 + -4) < 0x11) goto LAB_08006882;
        }
        ppiVar2 = ppiVar2 + 2;
        piVar27 = piVar18 + -4;
      } while (0x10 < (int)(piVar18 + -4));
LAB_08006882:
      piVar27 = piVar18 + -4;
    }
    local_d4 = local_d4 + 1;
    local_d0 = local_d0 + (int)piVar27;
    *ppiVar2 = (int *)0x8009f60;
    ppiVar2[1] = piVar27;
    if (local_d4 < 8) {
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar4 = __ssprint_r(param_1,param_2,&local_d8);
      if (iVar4 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
    }
  }
  piVar24 = (int *)((int)piVar24 - (int)local_158);
  if (0 < (int)piVar24) {
    if (0x10 < (int)piVar24) {
      do {
        while( true ) {
          piVar27 = piVar24;
          local_d4 = local_d4 + 1;
          local_d0 = local_d0 + 0x10;
          *ppiVar2 = (int *)0x8009f60;
          ppiVar2[1] = (int *)0x10;
          if (local_d4 < 8) break;
          iVar4 = __ssprint_r(param_1,param_2,&local_d8);
          if (iVar4 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
          piVar24 = piVar27 + -4;
          if ((int)(piVar27 + -4) < 0x11) goto LAB_080063d2;
        }
        ppiVar2 = ppiVar2 + 2;
        piVar24 = piVar27 + -4;
      } while (0x10 < (int)(piVar27 + -4));
LAB_080063d2:
      piVar24 = piVar27 + -4;
    }
    local_d4 = local_d4 + 1;
    local_d0 = local_d0 + (int)piVar24;
    *ppiVar2 = (int *)0x8009f60;
    ppiVar2[1] = piVar24;
    if (local_d4 < 8) {
      ppiVar2 = ppiVar2 + 2;
    }
    else {
      iVar4 = __ssprint_r(param_1,param_2,&local_d8);
      if (iVar4 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
    }
  }
  pbVar23 = local_d0;
  if ((uVar26 & 0x100) == 0) {
    local_d4 = local_d4 + 1;
    local_d0 = local_d0 + (int)local_158;
    *ppiVar2 = param_3;
    ppiVar2[1] = (int *)local_158;
    if (local_d4 < 8) {
LAB_0800640e:
      ppiVar2 = ppiVar2 + 2;
      pbVar23 = local_d0;
    }
    else {
LAB_08006a20:
      iVar4 = __ssprint_r(param_1,param_2,&local_d8);
      if (iVar4 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
      pbVar23 = local_d0;
    }
  }
  else if ((int)uVar25 < 0x66) {
    local_158 = (char *)(local_d0 + 1);
    iVar4 = local_d4 + 1;
    ppiVar16 = ppiVar2 + 2;
    local_d0 = (byte *)local_158;
    if (((int)local_138 < 2) && ((uVar26 & 1) == 0)) {
      *ppiVar2 = param_3;
      ppiVar2[1] = (int *)0x1;
      if (iVar4 < 8) {
        local_150 = (int *)(local_d4 + 2);
        ppiVar2 = ppiVar2 + 4;
      }
      else {
        local_d4 = iVar4;
        iVar4 = __ssprint_r(param_1,param_2,&local_d8);
        if (iVar4 != 0) goto LAB_0800603e;
        local_150 = (int *)(local_d4 + 1);
        ppiVar16 = local_cc;
        local_158 = (char *)local_d0;
        ppiVar2 = local_cc + 2;
      }
    }
    else {
      *ppiVar2 = param_3;
      ppiVar2[1] = (int *)0x1;
      local_d4 = iVar4;
      if (7 < iVar4) {
        iVar4 = __ssprint_r(param_1,param_2,&local_d8);
        if (iVar4 != 0) goto LAB_0800603e;
        ppiVar16 = local_cc;
        local_158 = (char *)local_d0;
      }
      local_d4 = local_d4 + 1;
      local_d0 = (byte *)(local_158 + (int)piVar3);
      *ppiVar16 = __s;
      ppiVar16[1] = piVar3;
      if (local_d4 < 8) {
        ppiVar20 = ppiVar16 + 2;
      }
      else {
        iVar4 = __ssprint_r(param_1,param_2,&local_d8);
        if (iVar4 != 0) goto LAB_0800603e;
        ppiVar20 = local_cc;
      }
      local_158 = (char *)local_d0;
      iVar4 = local_d4;
      local_150 = (int *)(local_d4 + 1);
      piVar27 = (int *)((int)local_138 + -1);
      ppiVar13 = ppiVar20 + 2;
      iVar6 = __aeabi_dcmpeq(local_128,local_12c,0,0);
      local_d4 = (int)local_150;
      if (iVar6 == 0) {
        local_158 = (char *)((byte *)local_158 + (int)piVar27);
        *ppiVar20 = (int *)((int)param_3 + 1);
        ppiVar20[1] = piVar27;
        local_d0 = (byte *)local_158;
        if ((int)local_150 < 8) {
          local_150 = (int *)(iVar4 + 2);
          ppiVar16 = ppiVar13;
          ppiVar2 = ppiVar20 + 4;
        }
        else {
LAB_08006d9c:
          iVar4 = __ssprint_r(param_1,param_2,&local_d8);
          if (iVar4 != 0) goto LAB_0800603e;
          local_150 = (int *)(local_d4 + 1);
          local_158 = (char *)local_d0;
          ppiVar16 = local_cc;
          ppiVar2 = local_cc + 2;
        }
      }
      else {
        ppiVar16 = ppiVar20;
        ppiVar2 = ppiVar13;
        if (0 < (int)piVar27) {
          if (0x10 < (int)piVar27) {
            while( true ) {
              local_d0 = (byte *)local_158 + 0x10;
              *ppiVar20 = (int *)0x8009f60;
              ppiVar20[1] = (int *)0x10;
              if (local_d4 < 8) {
                ppiVar20 = ppiVar20 + 2;
              }
              else {
                iVar4 = __ssprint_r(param_1,param_2,&local_d8);
                if (iVar4 != 0) goto LAB_0800603e;
                ppiVar20 = local_cc;
              }
              piVar27 = piVar27 + -4;
              local_158 = (char *)local_d0;
              if ((int)piVar27 < 0x11) break;
              local_d4 = local_d4 + 1;
            }
            local_150 = (int *)(local_d4 + 1);
            ppiVar13 = ppiVar20 + 2;
          }
          *ppiVar20 = (int *)0x8009f60;
          ppiVar20[1] = piVar27;
          local_158 = local_158 + (int)piVar27;
          local_d4 = (int)local_150;
          local_d0 = (byte *)local_158;
          if (7 < (int)local_150) goto LAB_08006d9c;
          local_150 = (int *)((int)local_150 + 1);
          ppiVar2 = ppiVar13 + 2;
          ppiVar16 = ppiVar13;
        }
      }
    }
    ppiVar16[1] = local_10c;
    local_d0 = (byte *)(local_158 + (int)local_10c);
    local_d4 = (int)local_150;
    *ppiVar16 = &local_e8;
    pbVar23 = local_d0;
    if (7 < (int)local_150) {
      iVar4 = __ssprint_r(param_1,param_2,&local_d8);
      if (iVar4 != 0) goto LAB_0800603e;
      ppiVar2 = local_cc;
      pbVar23 = local_d0;
    }
  }
  else {
    iVar4 = __aeabi_dcmpeq(local_128,local_12c,0,0);
    if (iVar4 == 0) {
      if ((int)local_f0[0] < 1) {
        local_d4 = local_d4 + 1;
        local_d0 = pbVar23 + 1;
        *ppiVar2 = (int *)&DAT_08009f4c;
        ppiVar2[1] = (int *)0x1;
        if (local_d4 < 8) {
          ppiVar2 = ppiVar2 + 2;
        }
        else {
          iVar4 = __ssprint_r(param_1,param_2,&local_d8);
          if (iVar4 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
        }
        if (((local_f0[0] != (int *)0x0) || (local_138 != (int *)0x0)) ||
           (pbVar23 = local_d0, (uVar26 & 1) != 0)) {
          local_d4 = local_d4 + 1;
          local_d0 = local_d0 + (int)piVar3;
          *ppiVar2 = __s;
          ppiVar2[1] = piVar3;
          if (local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
          }
          else {
            iVar4 = __ssprint_r(param_1,param_2,&local_d8);
            if (iVar4 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
          }
          if ((int)local_f0[0] < 0) {
            piVar27 = (int *)-(int)local_f0[0];
            if ((int)(local_f0[0] + 4) < 0 != SCARRY4((int)local_f0[0],0x10)) {
              do {
                local_d4 = local_d4 + 1;
                local_d0 = local_d0 + 0x10;
                *ppiVar2 = (int *)0x8009f60;
                ppiVar2[1] = (int *)0x10;
                if (local_d4 < 8) {
                  ppiVar2 = ppiVar2 + 2;
                }
                else {
                  iVar4 = __ssprint_r(param_1,param_2,&local_d8);
                  if (iVar4 != 0) goto LAB_0800603e;
                  ppiVar2 = local_cc;
                }
                piVar27 = piVar27 + -4;
              } while (0x10 < (int)piVar27);
            }
            local_d4 = local_d4 + 1;
            local_d0 = local_d0 + (int)piVar27;
            *ppiVar2 = (int *)0x8009f60;
            ppiVar2[1] = piVar27;
            if (local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar4 = __ssprint_r(param_1,param_2,&local_d8);
              if (iVar4 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
          }
          local_d0 = local_d0 + (int)local_138;
          *ppiVar2 = param_3;
          ppiVar2[1] = local_138;
          goto joined_r0x08006a1c;
        }
      }
      else {
        piVar27 = local_134;
        if ((int)local_138 <= (int)local_134) {
          piVar27 = local_138;
        }
        if (0 < (int)piVar27) {
          local_d0 = pbVar23 + (int)piVar27;
          local_d4 = local_d4 + 1;
          *ppiVar2 = param_3;
          ppiVar2[1] = piVar27;
          if (local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
            pbVar23 = local_d0;
          }
          else {
            iVar4 = __ssprint_r(param_1,param_2,&local_d8);
            if (iVar4 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
            pbVar23 = local_d0;
          }
        }
        piVar24 = local_134;
        if (-1 < (int)piVar27) {
          piVar24 = (int *)((int)local_134 - (int)piVar27);
        }
        if (0 < (int)piVar24) {
          for (; 0x10 < (int)piVar24; piVar24 = piVar24 + -4) {
            local_d4 = local_d4 + 1;
            local_d0 = pbVar23 + 0x10;
            *ppiVar2 = (int *)0x8009f60;
            ppiVar2[1] = (int *)0x10;
            if (local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar4 = __ssprint_r(param_1,param_2,&local_d8);
              if (iVar4 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
            pbVar23 = local_d0;
          }
          local_d4 = local_d4 + 1;
          pbVar23 = pbVar23 + (int)piVar24;
          *ppiVar2 = (int *)0x8009f60;
          ppiVar2[1] = piVar24;
          local_d0 = pbVar23;
          if (local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
          }
          else {
            iVar4 = __ssprint_r(param_1,param_2,&local_d8);
            if (iVar4 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
            pbVar23 = local_d0;
          }
        }
        local_134 = (int *)((int)local_134 + (int)param_3);
        if ((uVar26 & 0x400) != 0) {
          if (local_130 == 0) goto LAB_08007176;
LAB_080070ba:
          if (local_13c != 0) goto LAB_0800717e;
          local_108 = local_108 + -1;
          local_130 = local_130 + -1;
          do {
            local_d4 = local_d4 + 1;
            local_d0 = pbVar23 + (int)local_104;
            *ppiVar2 = local_110;
            ppiVar2[1] = local_104;
            if (local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar4 = __ssprint_r(param_1,param_2,&local_d8);
              if (iVar4 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
            piVar24 = (int *)(uint)*local_108;
            piVar27 = (int *)((byte *)((int)param_3 + (int)local_138) + -(int)local_134);
            if ((int)piVar24 <= (int)((byte *)((int)param_3 + (int)local_138) + -(int)local_134)) {
              piVar27 = piVar24;
            }
            if (0 < (int)piVar27) {
              local_d0 = local_d0 + (int)piVar27;
              local_d4 = local_d4 + 1;
              *ppiVar2 = local_134;
              ppiVar2[1] = piVar27;
              if (local_d4 < 8) {
                piVar24 = (int *)(uint)*local_108;
                ppiVar2 = ppiVar2 + 2;
              }
              else {
                iVar4 = __ssprint_r(param_1,param_2,&local_d8);
                if (iVar4 != 0) goto LAB_0800603e;
                ppiVar2 = local_cc;
                piVar24 = (int *)(uint)*local_108;
              }
            }
            piVar18 = piVar24;
            if (-1 < (int)piVar27) {
              piVar18 = (int *)((int)piVar24 - (int)piVar27);
            }
            if (0 < (int)piVar18) {
              for (; 0x10 < (int)piVar18; piVar18 = piVar18 + -4) {
                while( true ) {
                  local_d4 = local_d4 + 1;
                  local_d0 = local_d0 + 0x10;
                  *ppiVar2 = (int *)0x8009f60;
                  ppiVar2[1] = (int *)0x10;
                  if (local_d4 < 8) break;
                  iVar4 = __ssprint_r(param_1,param_2,&local_d8);
                  if (iVar4 != 0) goto LAB_0800603e;
                  piVar18 = piVar18 + -4;
                  ppiVar2 = local_cc;
                  if ((int)piVar18 < 0x11) goto LAB_08007156;
                }
                ppiVar2 = ppiVar2 + 2;
              }
LAB_08007156:
              local_d4 = local_d4 + 1;
              local_d0 = local_d0 + (int)piVar18;
              *ppiVar2 = (int *)0x8009f60;
              ppiVar2[1] = piVar18;
              if (local_d4 < 8) {
                piVar24 = (int *)(uint)*local_108;
                ppiVar2 = ppiVar2 + 2;
              }
              else {
                iVar4 = __ssprint_r(param_1,param_2,&local_d8);
                if (iVar4 != 0) goto LAB_0800603e;
                piVar24 = (int *)(uint)*local_108;
                ppiVar2 = local_cc;
              }
            }
            local_134 = (int *)((int)local_134 + (int)piVar24);
            pbVar23 = local_d0;
            if (local_130 != 0) goto LAB_080070ba;
LAB_08007176:
            if (local_13c == 0) {
              if ((int *)((int)param_3 + (int)local_138) <= local_134) {
                local_134 = (int *)((int)param_3 + (int)local_138);
              }
              break;
            }
LAB_0800717e:
            local_13c = local_13c + -1;
          } while( true );
        }
        if (((int)local_f0[0] < (int)local_138) || ((uVar26 & 1) != 0)) {
          local_d4 = local_d4 + 1;
          local_d0 = pbVar23 + (int)piVar3;
          *ppiVar2 = __s;
          ppiVar2[1] = piVar3;
          if (local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
            pbVar23 = local_d0;
          }
          else {
            iVar4 = __ssprint_r(param_1,param_2,&local_d8);
            if (iVar4 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
            pbVar23 = local_d0;
          }
        }
        piVar27 = (int *)((int)local_138 - (int)local_f0[0]);
        piVar24 = (int *)((byte *)((int)param_3 + (int)local_138) + -(int)local_134);
        if ((int)piVar27 <= (int)((byte *)((int)param_3 + (int)local_138) + -(int)local_134)) {
          piVar24 = piVar27;
        }
        if (0 < (int)piVar24) {
          local_d0 = pbVar23 + (int)piVar24;
          local_d4 = local_d4 + 1;
          *ppiVar2 = local_134;
          ppiVar2[1] = piVar24;
          if (local_d4 < 8) {
            ppiVar2 = ppiVar2 + 2;
            pbVar23 = local_d0;
          }
          else {
            iVar4 = __ssprint_r(param_1,param_2,&local_d8);
            if (iVar4 != 0) goto LAB_0800603e;
            ppiVar2 = local_cc;
            piVar27 = (int *)((int)local_138 - (int)local_f0[0]);
            pbVar23 = local_d0;
          }
        }
        if (-1 < (int)piVar24) {
          piVar27 = (int *)((int)piVar27 - (int)piVar24);
        }
        if (0 < (int)piVar27) {
          for (; 0x10 < (int)piVar27; piVar27 = piVar27 + -4) {
            local_d4 = local_d4 + 1;
            local_d0 = pbVar23 + 0x10;
            *ppiVar2 = (int *)0x8009f60;
            ppiVar2[1] = (int *)0x10;
            if (local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar4 = __ssprint_r(param_1,param_2,&local_d8);
              if (iVar4 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
            pbVar23 = local_d0;
          }
          goto LAB_08007014;
        }
      }
    }
    else {
      local_d4 = local_d4 + 1;
      local_d0 = pbVar23 + 1;
      *ppiVar2 = (int *)&DAT_08009f4c;
      ppiVar2[1] = (int *)0x1;
      if (local_d4 < 8) {
        ppiVar2 = ppiVar2 + 2;
      }
      else {
        iVar4 = __ssprint_r(param_1,param_2,&local_d8);
        if (iVar4 != 0) goto LAB_0800603e;
        ppiVar2 = local_cc;
      }
      if (((int)local_f0[0] < (int)local_138) || (pbVar23 = local_d0, (uVar26 & 1) != 0)) {
        local_d4 = local_d4 + 1;
        local_d0 = local_d0 + (int)piVar3;
        *ppiVar2 = __s;
        ppiVar2[1] = piVar3;
        if (local_d4 < 8) {
          ppiVar2 = ppiVar2 + 2;
        }
        else {
          iVar4 = __ssprint_r(param_1,param_2,&local_d8);
          if (iVar4 != 0) goto LAB_0800603e;
          ppiVar2 = local_cc;
        }
        piVar27 = (int *)((int)local_138 + -1);
        pbVar23 = local_d0;
        if (0 < (int)piVar27) {
          for (; 0x10 < (int)piVar27; piVar27 = piVar27 + -4) {
            local_d4 = local_d4 + 1;
            local_d0 = pbVar23 + 0x10;
            *ppiVar2 = (int *)0x8009f60;
            ppiVar2[1] = (int *)0x10;
            if (local_d4 < 8) {
              ppiVar2 = ppiVar2 + 2;
            }
            else {
              iVar4 = __ssprint_r(param_1,param_2,&local_d8);
              if (iVar4 != 0) goto LAB_0800603e;
              ppiVar2 = local_cc;
            }
            pbVar23 = local_d0;
          }
LAB_08007014:
          local_d0 = pbVar23 + (int)piVar27;
          *ppiVar2 = (int *)0x8009f60;
          ppiVar2[1] = piVar27;
joined_r0x08006a1c:
          local_d4 = local_d4 + 1;
          if (7 < local_d4) goto LAB_08006a20;
          goto LAB_0800640e;
        }
      }
    }
  }
  if (((uVar26 & 4) != 0) && (piVar27 = (int *)((int)local_15c - (int)local_168), 0 < (int)piVar27))
  {
    for (; local_d0 = pbVar23, 0x10 < (int)piVar27; piVar27 = piVar27 + -4) {
      while( true ) {
        local_d4 = local_d4 + 1;
        local_d0 = local_d0 + 0x10;
        *ppiVar2 = (int *)"                0000000000000000Infinity";
        ppiVar2[1] = (int *)0x10;
        if (local_d4 < 8) break;
        iVar4 = __ssprint_r(param_1,param_2,&local_d8);
        if (iVar4 != 0) goto LAB_0800603e;
        piVar27 = piVar27 + -4;
        ppiVar2 = local_cc;
        if ((int)piVar27 < 0x11) goto LAB_0800647a;
      }
      ppiVar2 = ppiVar2 + 2;
      pbVar23 = local_d0;
    }
LAB_0800647a:
    local_d4 = local_d4 + 1;
    local_d0 = local_d0 + (int)piVar27;
    *ppiVar2 = (int *)"                0000000000000000Infinity";
    ppiVar2[1] = piVar27;
    pbVar23 = local_d0;
    if ((7 < local_d4) &&
       (iVar4 = __ssprint_r(param_1,param_2,&local_d8), pbVar23 = local_d0, iVar4 != 0))
    goto LAB_0800603e;
  }
  if ((int)local_15c < (int)local_168) {
    local_15c = local_168;
  }
  local_164 = local_164 + (int)local_15c;
  if ((pbVar23 == (byte *)0x0) || (iVar4 = __ssprint_r(param_1,param_2,&local_d8), iVar4 == 0)) {
    local_d4 = 0;
    if (local_148 != (int *)0x0) {
      _free_r(param_1,local_148);
    }
    ppiVar2 = local_cc;
LAB_0800620e:
    bVar1 = *(byte *)piVar28;
    param_3 = piVar28;
    goto joined_r0x08005ef2;
  }
LAB_0800603e:
  if (local_148 != (int *)0x0) {
    _free_r(param_1,local_148);
  }
  goto LAB_0800604a;
switchD_08005f58_caseD_31:
  local_15c = (int *)0x0;
  uVar22 = uVar25 - 0x30;
  piVar24 = piVar28;
  do {
    piVar28 = (int *)((int)piVar24 + 1);
    uVar25 = (uint)*(byte *)piVar24;
    local_15c = (int *)(uVar22 + (int)local_15c * 10);
    uVar22 = uVar25 - 0x30;
    piVar24 = piVar28;
  } while (uVar22 < 10);
  goto LAB_08005f4e;
switchD_08005f58_caseD_20:
  uVar25 = (uint)*(byte *)piVar28;
  if (local_f5 == 0) {
    local_f5 = 0x20;
  }
  goto LAB_08005f4a;
}


////>>0x080078a0>>register_fini>>////

/* WARNING: Removing unreachable block (ram,0x080078a4) */

void register_fini(void)

{
  return;
}


////>>0x080078b4>>atexit>>////

int atexit(__func *__func)

{
  int iVar1;
  
  iVar1 = __register_exitproc(0,__func,0);
  return iVar1;
}


////>>0x080078c0>>quorem>>////

uint quorem(int param_1,int param_2)

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


////>>0x080079e8>>_dtoa_r>>////

char * _dtoa_r(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
              int *param_7,uint *param_8,char **param_9)

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
    iVar15 = __aeabi_dcmpgt(*(undefined4 *)(&__mprec_tens + local_74 * 8),
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
        uVar26 = __muldf3(param_3,local_7c,*(undefined4 *)(&__mprec_tens + iVar14),
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
          puVar22 = &__mprec_bigtens;
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
      uVar27 = *(undefined8 *)(&__mprec_tens + (local_74 & 0xf) * 8);
      uVar26 = *(undefined8 *)(&__mprec_tens + (local_74 & 0xf) * 8);
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
        puVar22 = &__mprec_bigtens;
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
      uVar13 = *(undefined4 *)(&__mprec_tens + local_74 * 8);
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
        memcpy((void *)(iVar19 + 0xc),(void *)(local_80 + 0xc),(*(int *)(local_80 + 0x10) + 2) * 4);
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


////>>0x08008818>>__libc_fini_array>>////

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


////>>0x0800884c>>_malloc_trim_r>>////

undefined4 _malloc_trim_r(undefined4 param_1,int param_2)

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
        __malloc_current_mallinfo = __malloc_current_mallinfo - iVar2;
        *(uint *)(DAT_20000454 + 4) = uVar3 - iVar2 | 1;
        __malloc_unlock(param_1);
        return 1;
      }
      iVar2 = _sbrk_r(param_1,0);
      if (0xf < iVar2 - DAT_20000454) {
        __malloc_current_mallinfo = iVar2 - __malloc_sbrk_base;
        *(uint *)(DAT_20000454 + 4) = iVar2 - DAT_20000454 | 1;
      }
    }
  }
  __malloc_unlock(param_1);
  return 0;
}


////>>0x080088ec>>_free_r>>////

void _free_r(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
    uVar6 = __malloc_trim_threshold;
    puVar2[1] = uVar5 | 1;
    DAT_20000454 = puVar2;
    if (uVar6 <= uVar5) {
      _malloc_trim_r(param_1,__malloc_top_pad);
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
    uVar6 = *(uint *)(&__malloc_av_ + iVar10 * 8);
    puVar2[2] = uVar6;
    puVar2[3] = (uint)(&DAT_20000444 + iVar10 * 8);
    DAT_20000450 = (undefined *)uVar5;
    *(uint **)(&__malloc_av_ + iVar10 * 8) = puVar2;
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
  puVar4 = *(undefined **)(&__malloc_av_ + iVar10);
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


////>>0x08008ad4>>_localeconv_r>>////

undefined1 * _localeconv_r(void)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(_impure_ptr + 0x34);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &__global_locale;
  }
  return puVar1 + 0xf0;
}


////>>0x08008af0>>__retarget_lock_acquire_recursive>>////

void __retarget_lock_acquire_recursive(void)

{
  return;
}


////>>0x08008af4>>__retarget_lock_release_recursive>>////

void __retarget_lock_release_recursive(void)

{
  return;
}


////>>0x08008af8>>_malloc_r>>////

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int * _malloc_r(undefined4 *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  
  uVar13 = param_2 + 0xb;
  if (uVar13 < 0x17) {
    if (0x10 < param_2) goto LAB_08008c7a;
    __malloc_lock();
    uVar14 = 0x10;
    iVar5 = 0x18;
    uVar13 = 2;
LAB_08008b18:
    puVar11 = *(undefined **)((int)&DAT_20000450 + iVar5);
    if ((puVar11 != &DAT_20000444 + iVar5) ||
       (puVar11 = *(undefined **)((int)&DAT_20000458 + iVar5), &__malloc_av_ + iVar5 != puVar11)) {
      iVar5 = *(int *)(puVar11 + 0xc);
      puVar6 = puVar11 + (*(uint *)(puVar11 + 4) & 0xfffffffc);
      uVar13 = *(uint *)(puVar6 + 4);
LAB_08008b34:
      iVar15 = *(int *)(puVar11 + 8);
      *(int *)(iVar15 + 0xc) = iVar5;
      *(int *)(iVar5 + 8) = iVar15;
      *(uint *)(puVar6 + 4) = uVar13 | 1;
      __malloc_unlock(param_1);
      return (int *)(puVar11 + 8);
    }
    uVar13 = uVar13 + 2;
  }
  else {
    uVar14 = uVar13 & 0xfffffff8;
    if (((int)uVar14 < 0) || (uVar14 < param_2)) {
LAB_08008c7a:
      *param_1 = 0xc;
      return (int *)0x0;
    }
    __malloc_lock();
    if (uVar14 < 0x1f8) {
      uVar13 = uVar13 >> 3;
      iVar5 = uVar14 + 8;
      goto LAB_08008b18;
    }
    uVar3 = uVar13 >> 9;
    if (uVar3 == 0) {
      iVar5 = 0x200;
      uVar7 = 0x40;
      uVar3 = 0x3f;
    }
    else if (uVar3 < 5) {
      uVar7 = (uVar13 >> 6) + 0x39;
      uVar3 = (uVar13 >> 6) + 0x38;
      iVar5 = uVar7 * 8;
    }
    else if (uVar3 < 0x15) {
      uVar7 = uVar3 + 0x5c;
      uVar3 = uVar3 + 0x5b;
      iVar5 = uVar7 * 8;
    }
    else if (uVar3 < 0x55) {
      uVar7 = (uVar13 >> 0xc) + 0x6f;
      uVar3 = (uVar13 >> 0xc) + 0x6e;
      iVar5 = uVar7 * 8;
    }
    else if (uVar3 < 0x155) {
      uVar7 = (uVar13 >> 0xf) + 0x78;
      uVar3 = (uVar13 >> 0xf) + 0x77;
      iVar5 = uVar7 * 8;
    }
    else if (uVar3 < 0x555) {
      uVar7 = (uVar13 >> 0x12) + 0x7d;
      uVar3 = (uVar13 >> 0x12) + 0x7c;
      iVar5 = uVar7 * 8;
    }
    else {
      iVar5 = 0x3f8;
      uVar7 = 0x7f;
      uVar3 = 0x7e;
    }
    for (puVar11 = *(undefined **)((int)&DAT_20000450 + iVar5); uVar13 = uVar7,
        &DAT_20000444 + iVar5 != puVar11; puVar11 = *(undefined **)(puVar11 + 0xc)) {
      iVar15 = (*(uint *)(puVar11 + 4) & 0xfffffffc) - uVar14;
      uVar13 = uVar3;
      if (0xf < iVar15) break;
      if (-1 < iVar15) {
        puVar6 = puVar11 + (*(uint *)(puVar11 + 4) & 0xfffffffc);
        uVar13 = *(uint *)(puVar6 + 4);
        iVar5 = *(int *)(puVar11 + 0xc);
        goto LAB_08008b34;
      }
    }
  }
  puVar16 = DAT_2000045c;
  if ((undefined1 **)DAT_2000045c == &DAT_20000454) {
    uVar7 = 1 << ((int)uVar13 >> 2 & 0xffU);
    uVar3 = DAT_20000450;
    if (uVar7 <= DAT_20000450) goto LAB_08008c06;
  }
  else {
    uVar7 = DAT_2000045c[1];
    uVar8 = uVar7 & 0xfffffffc;
    uVar3 = uVar8 - uVar14;
    if (0xf < (int)uVar3) {
      puVar18 = (undefined4 *)(uVar14 + (int)DAT_2000045c);
      DAT_2000045c[1] = uVar14 | 1;
      DAT_2000045c = puVar18;
      DAT_20000460 = puVar18;
      puVar18[2] = &DAT_20000454;
      puVar18[3] = &DAT_20000454;
      puVar18[1] = uVar3 | 1;
      *(uint *)((int)puVar16 + uVar8) = uVar3;
      __malloc_unlock(param_1);
      return puVar16 + 2;
    }
    DAT_2000045c = &DAT_20000454;
    DAT_20000460 = &DAT_20000454;
    if (-1 < (int)uVar3) {
      *(uint *)((int)puVar16 + uVar8 + 4) = *(uint *)((int)puVar16 + uVar8 + 4) | 1;
      __malloc_unlock(param_1);
      return puVar16 + 2;
    }
    if (uVar8 < 0x200) {
      iVar5 = (uVar7 >> 3) + 1;
      iVar15 = *(int *)(&__malloc_av_ + iVar5 * 8);
      uVar3 = 1 << ((int)(uVar7 >> 3) >> 2 & 0xffU) | DAT_20000450;
      puVar16[2] = iVar15;
      puVar16[3] = &DAT_20000444 + iVar5 * 8;
      DAT_20000450 = uVar3;
      *(undefined4 **)(&__malloc_av_ + iVar5 * 8) = puVar16;
      *(undefined4 **)(iVar15 + 0xc) = puVar16;
    }
    else {
      uVar3 = uVar7 >> 9;
      if (uVar3 < 5) {
        iVar5 = ((uVar7 >> 6) + 0x39) * 8;
        iVar15 = (uVar7 >> 6) + 0x38;
      }
      else if (uVar3 < 0x15) {
        iVar5 = (uVar3 + 0x5c) * 8;
        iVar15 = uVar3 + 0x5b;
      }
      else if (uVar3 < 0x55) {
        iVar5 = ((uVar7 >> 0xc) + 0x6f) * 8;
        iVar15 = (uVar7 >> 0xc) + 0x6e;
      }
      else if (uVar3 < 0x155) {
        iVar5 = ((uVar7 >> 0xf) + 0x78) * 8;
        iVar15 = (uVar7 >> 0xf) + 0x77;
      }
      else if (uVar3 < 0x555) {
        iVar5 = ((uVar7 >> 0x12) + 0x7d) * 8;
        iVar15 = (uVar7 >> 0x12) + 0x7c;
      }
      else {
        iVar5 = 0x3f8;
        iVar15 = 0x7e;
      }
      puVar11 = *(undefined **)(&__malloc_av_ + iVar5);
      puVar6 = &DAT_20000444 + iVar5;
      if (puVar6 == puVar11) {
        DAT_20000450 = 1 << (iVar15 >> 2 & 0xffU) | DAT_20000450;
      }
      else {
        do {
          if ((*(uint *)(puVar11 + 4) & 0xfffffffc) <= uVar8) break;
          puVar11 = *(undefined **)(puVar11 + 8);
        } while (puVar6 != puVar11);
        puVar6 = *(undefined **)(puVar11 + 0xc);
      }
      uVar3 = DAT_20000450;
      puVar16[2] = puVar11;
      puVar16[3] = puVar6;
      *(undefined4 **)(puVar6 + 8) = puVar16;
      *(undefined4 **)(puVar11 + 0xc) = puVar16;
    }
    uVar7 = 1 << ((int)uVar13 >> 2 & 0xffU);
    if (uVar7 <= uVar3) {
LAB_08008c06:
      if ((uVar7 & uVar3) == 0) {
        uVar13 = uVar13 & 0xfffffffc;
        do {
          uVar7 = uVar7 << 1;
          uVar13 = uVar13 + 4;
        } while ((uVar7 & uVar3) == 0);
      }
      do {
        puVar18 = (undefined4 *)(&__malloc_av_ + uVar13 * 8);
        uVar3 = uVar13;
        puVar16 = puVar18;
        do {
          for (puVar9 = (undefined4 *)puVar16[3]; puVar16 != puVar9;
              puVar9 = (undefined4 *)puVar9[3]) {
            uVar8 = puVar9[1] & 0xfffffffc;
            uVar4 = uVar8 - uVar14;
            if (0xf < (int)uVar4) {
              iVar15 = puVar9[2];
              iVar5 = puVar9[3];
              puVar16 = (undefined4 *)(uVar14 + (int)puVar9);
              puVar9[1] = uVar14 | 1;
              *(int *)(iVar15 + 0xc) = iVar5;
              *(int *)(iVar5 + 8) = iVar15;
              DAT_2000045c = puVar16;
              DAT_20000460 = puVar16;
              puVar16[2] = &DAT_20000454;
              puVar16[3] = &DAT_20000454;
              puVar16[1] = uVar4 | 1;
              *(uint *)((int)puVar9 + uVar8) = uVar4;
              __malloc_unlock(param_1);
              return puVar9 + 2;
            }
            if (-1 < (int)uVar4) {
              iVar5 = puVar9[3];
              iVar15 = puVar9[2];
              *(uint *)((int)puVar9 + uVar8 + 4) = *(uint *)((int)puVar9 + uVar8 + 4) | 1;
              *(int *)(iVar15 + 0xc) = iVar5;
              *(int *)(iVar5 + 8) = iVar15;
              __malloc_unlock(param_1);
              return puVar9 + 2;
            }
          }
          uVar3 = uVar3 + 1;
          puVar16 = puVar16 + 2;
        } while ((uVar3 & 3) != 0);
        do {
          uVar8 = uVar13 & 3;
          puVar16 = puVar18 + -2;
          uVar13 = uVar13 - 1;
          if (uVar8 == 0) {
            DAT_20000450 = DAT_20000450 & ~uVar7;
            break;
          }
          puVar18 = (undefined4 *)*puVar18;
        } while (puVar18 == puVar16);
        uVar7 = uVar7 * 2;
        if ((DAT_20000450 <= uVar7 && uVar7 - DAT_20000450 != 0) || (uVar13 = uVar3, uVar7 == 0))
        break;
        for (; (uVar7 & DAT_20000450) == 0; uVar7 = uVar7 << 1) {
          uVar13 = uVar13 + 4;
        }
      } while( true );
    }
  }
  puVar17 = DAT_20000454;
  uVar13 = *(uint *)(DAT_20000454 + 4) & 0xfffffffc;
  if ((uVar14 <= uVar13) && (uVar3 = uVar13 - uVar14, 0xf < (int)uVar3)) goto LAB_08008dac;
  if (__malloc_sbrk_base == (undefined1 *)0xffffffff) {
    uVar3 = uVar14 + __malloc_top_pad + 0x10;
  }
  else {
    uVar3 = uVar14 + __malloc_top_pad + 0x100f & 0xfffff000;
  }
  puVar1 = (undefined1 *)_sbrk_r(param_1,uVar3);
  if (puVar1 == (undefined1 *)0xffffffff) {
LAB_08008ed8:
    uVar13 = *(uint *)(DAT_20000454 + 4);
  }
  else {
    puVar2 = puVar17 + uVar13;
    if (puVar2 < puVar1 || puVar2 == puVar1) {
      puVar10 = __malloc_current_mallinfo + uVar3;
      if ((puVar2 != puVar1) || (((uint)puVar2 & 0xfff) != 0)) goto LAB_08008d02;
      __malloc_current_mallinfo = puVar10;
      *(uint *)(DAT_20000454 + 4) = uVar13 + uVar3 | 1;
    }
    else {
      if (puVar17 != &__malloc_av_) goto LAB_08008ed8;
LAB_08008d02:
      __malloc_current_mallinfo = __malloc_current_mallinfo + uVar3;
      puVar10 = puVar1;
      if (__malloc_sbrk_base != (undefined1 *)0xffffffff) {
        __malloc_current_mallinfo = __malloc_current_mallinfo + ((int)puVar1 - (int)puVar2);
        puVar10 = __malloc_sbrk_base;
      }
      __malloc_sbrk_base = puVar10;
      uVar7 = (uint)puVar1 & 7;
      if (uVar7 == 0) {
        iVar5 = 0x1000;
      }
      else {
        puVar1 = puVar1 + (8 - uVar7);
        iVar5 = 0x1008 - uVar7;
      }
      iVar5 = iVar5 - ((uint)(puVar1 + uVar3) & 0xfff);
      iVar15 = _sbrk_r(param_1,iVar5);
      if (iVar15 == -1) {
        uVar3 = 1;
        iVar5 = 0;
      }
      else {
        uVar3 = (iVar15 - (int)puVar1) + iVar5 | 1;
      }
      puVar10 = __malloc_current_mallinfo + iVar5;
      DAT_20000454 = puVar1;
      __malloc_current_mallinfo = puVar10;
      *(uint *)(puVar1 + 4) = uVar3;
      if (puVar17 != &__malloc_av_) {
        if (uVar13 < 0x10) {
          *(undefined4 *)(puVar1 + 4) = 1;
          goto LAB_08008eee;
        }
        uVar13 = uVar13 - 0xc & 0xfffffff8;
        *(uint *)(puVar17 + 4) = *(uint *)(puVar17 + 4) & 1 | uVar13;
        *(undefined4 *)(puVar17 + uVar13 + 4) = 5;
        *(undefined4 *)(puVar17 + uVar13 + 8) = 5;
        if (0xf < uVar13) {
          _free_r(param_1,puVar17 + 8);
          puVar10 = __malloc_current_mallinfo;
        }
      }
    }
    if (__malloc_max_sbrked_mem < puVar10) {
      __malloc_max_sbrked_mem = puVar10;
    }
    uVar13 = *(uint *)(DAT_20000454 + 4);
    if (__malloc_max_total_mem < puVar10) {
      __malloc_max_total_mem = puVar10;
    }
  }
  uVar3 = (uVar13 & 0xfffffffc) - uVar14;
  if ((uVar14 <= (uVar13 & 0xfffffffc)) && (0xf < (int)uVar3)) {
LAB_08008dac:
    puVar17 = DAT_20000454 + uVar14;
    *(uint *)(DAT_20000454 + 4) = uVar14 | 1;
    piVar12 = (int *)(DAT_20000454 + 8);
    DAT_20000454 = puVar17;
    *(uint *)(puVar17 + 4) = uVar3 | 1;
    __malloc_unlock(param_1);
    return piVar12;
  }
LAB_08008eee:
  __malloc_unlock(param_1);
  return (int *)0x0;
}


////>>0x0800901c>>memchr>>////

void * memchr(void *__s,int __c,size_t __n)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = __c & 0xff;
  if (((uint)__s & 3) == 0) {
LAB_0800904a:
    if (3 < __n) {
      uVar2 = (__c & 0xffU) << 8 | uVar4;
      puVar3 = (uint *)__s;
      do {
        uVar1 = *puVar3 ^ (uVar2 | uVar2 << 0x10);
        __s = puVar3 + 1;
        if ((uVar1 + 0xfefefeff & ~uVar1 & 0x80808080) != 0) goto LAB_08009050;
        __n = __n - 4;
        puVar3 = (uint *)__s;
      } while (3 < __n);
    }
    puVar3 = (uint *)__s;
    if (__n == 0) {
      __s = (uint *)0x0;
    }
    else {
LAB_08009050:
      __s = puVar3;
                    /* WARNING: Load size is inaccurate */
      if (*__s != uVar4) {
        puVar3 = (uint *)(__n + (int)__s);
        do {
          __s = (void *)((int)__s + 1);
          if (puVar3 == (uint *)__s) goto LAB_0800906c;
                    /* WARNING: Load size is inaccurate */
        } while (*__s != uVar4);
      }
    }
  }
  else {
    uVar2 = __n - 1;
    if (__n == 0) {
LAB_0800906c:
      __s = (uint *)0x0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      if (*__s != uVar4) {
        puVar3 = (uint *)((int)__s + 1);
        do {
          __s = puVar3;
          __n = uVar2;
          if (((uint)__s & 3) == 0) goto LAB_0800904a;
          bVar5 = uVar2 == 0;
          uVar2 = uVar2 - 1;
          if (bVar5) goto LAB_0800906c;
                    /* WARNING: Load size is inaccurate */
          puVar3 = (uint *)((int)__s + 1);
        } while (*__s != uVar4);
      }
    }
  }
  return __s;
}


////>>0x080090a8>>__malloc_lock>>////

void __malloc_lock(void)

{
  __retarget_lock_acquire_recursive(&__lock___malloc_recursive_mutex);
  return;
}


////>>0x080090b4>>__malloc_unlock>>////

void __malloc_unlock(void)

{
  __retarget_lock_release_recursive(&__lock___malloc_recursive_mutex);
  return;
}


////>>0x080090c0>>_Balloc>>////

undefined4 * _Balloc(int param_1,uint param_2)

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


////>>0x0800910c>>_Bfree>>////

void _Bfree(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    *param_2 = *(undefined4 *)(iVar1 + param_2[1] * 4);
    *(undefined4 **)(iVar1 + param_2[1] * 4) = param_2;
  }
  return;
}


////>>0x08009120>>__multadd>>////

undefined4 * __multadd(int param_1,undefined4 *param_2,int param_3,uint param_4)

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


////>>0x080091a4>>__hi0bits>>////

int __hi0bits(uint param_1)

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


////>>0x080091e4>>__lo0bits>>////

int __lo0bits(uint *param_1)

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


////>>0x08009244>>__i2b>>////

void __i2b(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _Balloc(param_1,1);
  *(undefined4 *)(iVar1 + 0x10) = 1;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  return;
}


////>>0x08009258>>__multiply>>////

void __multiply(undefined4 param_1,int param_2,int param_3)

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


////>>0x080093a4>>__pow5mult>>////

undefined4 * __pow5mult(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_3 & 3) != 0) {
    param_2 = (undefined4 *)
              __multadd(param_1,param_2,*(undefined4 *)(&p05_6092 + ((param_3 & 3) - 1) * 4),0);
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


////>>0x08009444>>__lshift>>////

void __lshift(int param_1,undefined4 *param_2,uint param_3)

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


////>>0x080094f8>>__mcmp>>////

int __mcmp(int param_1,int param_2)

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


////>>0x08009530>>__mdiff>>////

void __mdiff(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4)

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


////>>0x08009630>>__d2b>>////

int __d2b(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5,int *param_6)

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


////>>0x080096e0>>frexp>>////

double frexp(double __x,int *__exponent)

{
  uint in_r1;
  uint extraout_r1;
  int *in_r2;
  int iVar1;
  uint uVar2;
  double in_d0;
  
  iVar1 = 0;
  uVar2 = in_r1 & 0x7fffffff;
  *in_r2 = 0;
  if ((uVar2 < 0x7ff00000) && ((uVar2 | (uint)__exponent) != 0)) {
    if (uVar2 < 0x100000) {
      in_d0 = (double)__muldf3(__exponent,in_r1,0,0x43500000);
      iVar1 = -0x36;
      uVar2 = extraout_r1 & 0x7fffffff;
    }
    *in_r2 = ((int)uVar2 >> 0x14) + -0x3fe + iVar1;
  }
  return in_d0;
}


////>>0x08009744>>_sbrk_r>>////

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


////>>0x08009768>>strncpy>>////

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar3 = (uint *)__dest;
  if (((((uint)__dest | (uint)__src) & 3) == 0) && (puVar2 = (uint *)__src, 3 < __n)) {
    do {
      __src = (char *)(puVar2 + 1);
      uVar5 = *puVar2;
      if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) goto LAB_0800979c;
      __n = __n - 4;
      puVar2 = puVar3 + 1;
      *puVar3 = uVar5;
      puVar3 = puVar2;
      puVar2 = (uint *)__src;
    } while (3 < __n);
  }
  puVar2 = (uint *)__src;
  if (__n != 0) {
LAB_0800979c:
    cVar1 = *(char *)puVar2;
    *(char *)puVar3 = cVar1;
    while( true ) {
      puVar3 = (uint *)((int)puVar3 + 1);
      __n = __n - 1;
      if (cVar1 == '\0') break;
      if (__n == 0) {
        return __dest;
      }
      puVar2 = (uint *)((int)puVar2 + 1);
      cVar1 = *(char *)puVar2;
      *(char *)puVar3 = cVar1;
    }
    if (__n != 0) {
      puVar2 = puVar3;
      do {
        puVar4 = (uint *)((int)puVar2 + 1);
        *(char *)puVar2 = '\0';
        puVar2 = puVar4;
      } while (puVar4 != (uint *)(__n + (int)puVar3));
    }
  }
  return __dest;
}


////>>0x080097cc>>__ssprint_r>>////

undefined4 __ssprint_r(undefined4 *param_1,void **param_2,int *param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  void **ppvVar6;
  void **ppvVar7;
  void *__src;
  size_t __n;
  
  if (param_3[2] != 0) {
    pvVar1 = *param_2;
    pvVar4 = param_2[2];
    ppvVar7 = (void **)*param_3;
    do {
      do {
        ppvVar6 = ppvVar7 + 2;
        __src = *ppvVar7;
        pvVar5 = ppvVar7[1];
        ppvVar7 = ppvVar6;
      } while (pvVar5 == (void *)0x0);
      pvVar2 = pvVar5;
      if ((pvVar4 <= pvVar5) && (pvVar2 = pvVar4, (*(ushort *)(param_2 + 3) & 0x480) != 0)) {
        __n = (int)pvVar1 - (int)param_2[4];
        pvVar4 = (void *)(((int)param_2[5] * 3) / 2);
        pvVar1 = (void *)((int)pvVar5 + __n + 1);
        if (pvVar4 < pvVar1) {
          pvVar4 = pvVar1;
        }
        if ((int)((uint)*(ushort *)(param_2 + 3) << 0x15) < 0) {
          pvVar2 = (void *)_malloc_r(param_1,pvVar4);
          if (pvVar2 == (void *)0x0) {
LAB_08009896:
            *param_1 = 0xc;
            *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
            param_3[1] = 0;
            param_3[2] = 0;
            return 0xffffffff;
          }
          memcpy(pvVar2,param_2[4],__n);
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
        }
        else {
          pvVar2 = (void *)_realloc_r(param_1);
          if (pvVar2 == (void *)0x0) {
            _free_r(param_1,param_2[4]);
            goto LAB_08009896;
          }
        }
        pvVar1 = (void *)((int)pvVar2 + __n);
        param_2[5] = pvVar4;
        param_2[4] = pvVar2;
        *param_2 = pvVar1;
        param_2[2] = (void *)((int)pvVar4 - __n);
        pvVar2 = pvVar5;
      }
      memmove(pvVar1,__src,(size_t)pvVar2);
      iVar3 = param_3[2];
      pvVar4 = (void *)((int)param_2[2] - (int)pvVar2);
      pvVar1 = (void *)((int)*param_2 + (int)pvVar2);
      param_2[2] = pvVar4;
      *param_2 = pvVar1;
      param_3[2] = iVar3 - (int)pvVar5;
    } while (iVar3 - (int)pvVar5 != 0);
  }
  param_3[1] = 0;
  return 0;
}


////>>0x080098c0>>__register_exitproc>>////

/* WARNING: Removing unreachable block (ram,0x08009906) */
/* WARNING: Removing unreachable block (ram,0x08009912) */

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
    *(uint *)(puVar1 + 4) = uVar4 + 1;
    uVar2 = __atexit_recursive_mutex;
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


////>>0x08009980>>_calloc_r>>////

undefined4 * _calloc_r(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *__s;
  size_t __n;
  undefined4 *puVar1;
  
  __s = (undefined4 *)_malloc_r(param_1,param_3 * param_2);
  if (__s == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  __n = (__s[-1] & 0xfffffffc) - 4;
  if (__n < 0x25) {
    puVar1 = __s;
    if (0x13 < __n) {
      *__s = 0;
      __s[1] = 0;
      if (0x1b < __n) {
        __s[2] = 0;
        __s[3] = 0;
        if (__n == 0x24) {
          __s[4] = 0;
          __s[5] = 0;
          puVar1 = __s + 6;
        }
        else {
          puVar1 = __s + 4;
        }
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        return __s;
      }
      puVar1 = __s + 2;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    return __s;
  }
  memset(__s,0,__n);
  return __s;
}


////>>0x080099ec>>__ascii_mbtowc>>////

uint __ascii_mbtowc(undefined4 param_1,uint *param_2,byte *param_3,int param_4)

{
  uint uVar1;
  uint uStack_4;
  
  if (param_2 == (uint *)0x0) {
    param_2 = &uStack_4;
  }
  if (param_3 == (byte *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    *param_2 = (uint)*param_3;
    uVar1 = (uint)*param_3;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


////>>0x08009a18>>memmove>>////

void * memmove(void *__dest,void *__src,size_t __n)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  if ((__src < __dest) && (puVar2 = (undefined *)((int)__src + __n), __dest < puVar2)) {
    puVar5 = (undefined *)((int)__dest + __n);
    if (__n != 0) {
      do {
        puVar2 = puVar2 + -1;
        puVar5 = puVar5 + -1;
        *puVar5 = *puVar2;
      } while ((undefined *)__src != puVar2);
    }
  }
  else {
    uVar9 = __n;
    pvVar4 = __dest;
    if (0xf < __n) {
      if ((((uint)__dest | (uint)__src) & 3) != 0) goto LAB_08009abc;
      iVar3 = (int)__src + 0x10;
      iVar8 = (int)__dest + 0x10;
      do {
        iVar6 = iVar3 + 0x10;
        *(undefined4 *)(iVar8 + -0x10) = *(undefined4 *)(iVar3 + -0x10);
        *(undefined4 *)(iVar8 + -0xc) = *(undefined4 *)(iVar3 + -0xc);
        *(undefined4 *)(iVar8 + -8) = *(undefined4 *)(iVar3 + -8);
        *(undefined4 *)(iVar8 + -4) = *(undefined4 *)(iVar3 + -4);
        iVar3 = iVar6;
        iVar8 = iVar8 + 0x10;
      } while (iVar6 != (int)__src + (__n - 0x10 & 0xfffffff0) + 0x20);
      uVar9 = __n & 0xf;
      iVar3 = ((__n - 0x10 >> 4) + 1) * 0x10;
      __src = (void *)((int)__src + iVar3);
      pvVar4 = (void *)(iVar3 + (int)__dest);
      if (3 < uVar9) {
        puVar10 = (undefined4 *)((int)pvVar4 + -4);
        uVar7 = uVar9;
        puVar1 = (undefined4 *)__src;
        do {
          uVar7 = uVar7 - 4;
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar1;
          puVar1 = puVar1 + 1;
        } while (3 < uVar7);
        iVar3 = (uVar9 - 4 & 0xfffffffc) + 4;
        __src = (void *)((int)__src + iVar3);
        uVar9 = __n & 3;
        pvVar4 = (void *)((int)pvVar4 + iVar3);
      }
    }
    __n = uVar9;
    if (uVar9 != 0) {
LAB_08009abc:
      puVar2 = (undefined *)((int)pvVar4 + -1);
      puVar10 = (undefined4 *)__src;
      do {
        puVar1 = (undefined4 *)((int)puVar10 + 1);
        puVar2 = puVar2 + 1;
        *puVar2 = *(undefined *)puVar10;
        puVar10 = puVar1;
      } while (puVar1 != (undefined4 *)(__n + (int)__src));
      return __dest;
    }
  }
  return __dest;
}


////>>0x08009adc>>_realloc_r>>////

int * _realloc_r(undefined4 *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  if (param_2 == (int *)0x0) {
    piVar3 = (int *)_malloc_r(param_1,param_3);
    return piVar3;
  }
  __malloc_lock();
  uVar6 = param_2[-1];
  uVar10 = uVar6 & 0xfffffffc;
  piVar3 = param_2 + -2;
  if (param_3 + 0xb < 0x17) {
    uVar9 = 0x10;
  }
  else {
    uVar9 = param_3 + 0xb & 0xfffffff8;
    if ((int)uVar9 < 0) goto LAB_08009b8e;
  }
  if (uVar9 < param_3) {
LAB_08009b8e:
    *param_1 = 0xc;
    return (int *)0x0;
  }
  iVar12 = (int)piVar3 + uVar10;
  uVar11 = uVar10;
  if ((int)uVar10 < (int)uVar9) {
    if (DAT_20000454 == iVar12) {
      iVar12 = (*(uint *)(DAT_20000454 + 4) & 0xfffffffc) + uVar10;
      if ((int)(uVar9 + 0x10) <= iVar12) {
        DAT_20000454 = (int)piVar3 + uVar9;
        *(uint *)(DAT_20000454 + 4) = iVar12 - uVar9 | 1;
        param_2[-1] = uVar9 | param_2[-1] & 1U;
        __malloc_unlock(param_1);
        return param_2;
      }
      if (-1 < (int)(uVar6 << 0x1f)) {
        piVar1 = (int *)((int)piVar3 - param_2[-2]);
        uVar6 = piVar1[1] & 0xfffffffc;
        if ((int)(uVar9 + 0x10) <= (int)(iVar12 + uVar6)) {
          iVar5 = piVar1[3];
          piVar3 = piVar1 + 2;
          iVar2 = *piVar3;
          sVar7 = uVar10 - 4;
          *(int *)(iVar2 + 0xc) = iVar5;
          *(int *)(iVar5 + 8) = iVar2;
          if (sVar7 < 0x25) {
            iVar2 = *param_2;
            piVar8 = piVar3;
            if (0x13 < sVar7) {
              piVar1[2] = iVar2;
              piVar1[3] = param_2[1];
              iVar2 = param_2[2];
              if (sVar7 < 0x1c) {
                param_2 = param_2 + 2;
                piVar8 = piVar1 + 4;
              }
              else {
                piVar1[4] = iVar2;
                piVar1[5] = param_2[3];
                iVar2 = param_2[4];
                if (sVar7 == 0x24) {
                  piVar1[6] = iVar2;
                  piVar1[7] = param_2[5];
                  iVar2 = param_2[6];
                  param_2 = param_2 + 6;
                  piVar8 = piVar1 + 8;
                }
                else {
                  param_2 = param_2 + 4;
                  piVar8 = piVar1 + 6;
                }
              }
            }
            *piVar8 = iVar2;
            piVar8[1] = param_2[1];
            piVar8[2] = param_2[2];
          }
          else {
            memmove(piVar3,param_2,sVar7);
          }
          DAT_20000454 = (int)piVar1 + uVar9;
          *(uint *)(DAT_20000454 + 4) = (iVar12 + uVar6) - uVar9 | 1;
          piVar1[1] = uVar9 | piVar1[1] & 1U;
          __malloc_unlock(param_1);
          return piVar3;
        }
LAB_08009bb0:
        uVar11 = uVar10 + uVar6;
        if ((int)uVar9 <= (int)uVar11) {
          iVar5 = piVar1[3];
          piVar8 = piVar1 + 2;
          iVar2 = *piVar8;
          *(int *)(iVar2 + 0xc) = iVar5;
          iVar12 = (int)piVar1 + uVar11;
          *(int *)(iVar5 + 8) = iVar2;
          piVar3 = piVar1;
          if (uVar10 - 4 < 0x25) goto LAB_08009bd0;
LAB_08009d4c:
          memmove(piVar8,param_2,uVar10 - 4);
          param_2 = piVar8;
          goto LAB_08009c00;
        }
      }
    }
    else {
      if (-1 < *(int *)((*(uint *)(iVar12 + 4) & 0xfffffffe) + iVar12 + 4) << 0x1f) {
        uVar4 = *(uint *)(iVar12 + 4) & 0xfffffffc;
        uVar11 = uVar10 + uVar4;
        if ((int)uVar11 < (int)uVar9) {
          if ((int)(uVar6 << 0x1f) < 0) goto LAB_08009b36;
          piVar1 = (int *)((int)piVar3 - param_2[-2]);
          uVar6 = piVar1[1] & 0xfffffffc;
          uVar11 = uVar4 + uVar6 + uVar10;
          if ((int)uVar11 < (int)uVar9) goto LAB_08009bb0;
          iVar2 = *(int *)(iVar12 + 8);
          iVar12 = *(int *)(iVar12 + 0xc);
          *(int *)(iVar2 + 0xc) = iVar12;
          *(int *)(iVar12 + 8) = iVar2;
          piVar8 = piVar1 + 2;
          iVar2 = *piVar8;
          iVar5 = piVar1[3];
          *(int *)(iVar2 + 0xc) = iVar5;
          iVar12 = (int)piVar1 + uVar11;
          *(int *)(iVar5 + 8) = iVar2;
          piVar3 = piVar1;
          if (0x24 < uVar10 - 4) goto LAB_08009d4c;
LAB_08009bd0:
          uVar10 = uVar10 - 4;
          iVar2 = *param_2;
          piVar1 = piVar8;
          if (0x13 < uVar10) {
            piVar3[2] = iVar2;
            piVar3[3] = param_2[1];
            iVar2 = param_2[2];
            if (uVar10 < 0x1c) {
              param_2 = param_2 + 2;
              piVar1 = piVar3 + 4;
            }
            else {
              piVar3[4] = iVar2;
              piVar3[5] = param_2[3];
              iVar2 = param_2[4];
              if (uVar10 == 0x24) {
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
          param_2 = piVar8;
        }
        else {
          iVar2 = *(int *)(iVar12 + 8);
          iVar5 = *(int *)(iVar12 + 0xc);
          *(int *)(iVar2 + 0xc) = iVar5;
          iVar12 = (int)piVar3 + uVar11;
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
        uVar11 = uVar10 + (piVar1[-1] & 0xfffffffcU);
        iVar12 = (int)piVar3 + uVar11;
        goto LAB_08009c00;
      }
      sVar7 = uVar10 - 4;
      if (sVar7 < 0x25) {
        iVar12 = *param_2;
        piVar3 = param_2;
        piVar8 = piVar1;
        if (0x13 < sVar7) {
          *piVar1 = iVar12;
          piVar1[1] = param_2[1];
          if (sVar7 < 0x1c) {
            iVar12 = param_2[2];
            piVar3 = param_2 + 2;
            piVar8 = piVar1 + 2;
          }
          else {
            piVar1[2] = param_2[2];
            piVar1[3] = param_2[3];
            if (sVar7 == 0x24) {
              piVar1[4] = param_2[4];
              piVar1[5] = param_2[5];
              iVar12 = param_2[6];
              piVar3 = param_2 + 6;
              piVar8 = piVar1 + 6;
            }
            else {
              iVar12 = param_2[4];
              piVar3 = param_2 + 4;
              piVar8 = piVar1 + 4;
            }
          }
        }
        *piVar8 = iVar12;
        piVar8[1] = piVar3[1];
        piVar8[2] = piVar3[2];
      }
      else {
        memmove(piVar1,param_2,sVar7);
      }
      _free_r(param_1,param_2);
    }
    __malloc_unlock(param_1);
    param_2 = piVar1;
  }
  else {
LAB_08009c00:
    if (uVar11 - uVar9 < 0x10) {
      piVar3[1] = piVar3[1] & 1U | uVar11;
      *(uint *)(iVar12 + 4) = *(uint *)(iVar12 + 4) | 1;
    }
    else {
      piVar3[1] = piVar3[1] & 1U | uVar9;
      *(uint *)((int)piVar3 + uVar9 + 4) = uVar11 - uVar9 | 1;
      *(uint *)(iVar12 + 4) = *(uint *)(iVar12 + 4) | 1;
      _free_r(param_1,(int)piVar3 + uVar9 + 8);
    }
    __malloc_unlock(param_1);
  }
  return param_2;
}


////>>0x08009e50>>__ascii_wctomb>>////

undefined * __ascii_wctomb(undefined4 *param_1,undefined *param_2,uint param_3)

{
  if (param_2 != (undefined *)0x0) {
    if (param_3 < 0x100) {
      *param_2 = (char)param_3;
      param_2 = (undefined *)0x1;
    }
    else {
      param_2 = (undefined *)0xffffffff;
      *param_1 = 0x8a;
    }
  }
  return param_2;
}


////>>0x08009e68>>_init>>////

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}


////>>0x08009e74>>_fini>>////

void _fini(void)

{
  return;
}


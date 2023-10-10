java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x08000110>>__do_global_dtors_aux>>////

/* WARNING: Removing unreachable block (ram,0x0800011c) */

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  if ((char)completed_8672 == '\0') {
    completed_8672._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x08000134>>frame_dummy>>////

/* WARNING: Removing unreachable block (ram,0x0800013a) */

undefined8 frame_dummy(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}


////>>0x08000150>>strlen>>////

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


////>>0x08000160>>__aeabi_drsub>>////

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __aeabi_dadd(param_1,param_2 ^ 0x80000000);
  return;
}


////>>0x08000168>>__subdf3>>////

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


////>>0x0800016c>>__aeabi_dadd>>////

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


////>>0x080003e4>>__floatunsidf>>////

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
      goto LAB_080002f0;
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
LAB_080002f0:
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


////>>0x08000404>>__aeabi_i2d>>////

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


////>>0x08000428>>__aeabi_f2d>>////

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


////>>0x08000464>>__floatundidf>>////

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
LAB_08000278:
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
  if ((param_2 & 0x100000) != 0) goto LAB_08000278;
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
      goto LAB_080002f0;
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
LAB_080002f0:
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


////>>0x08000474>>__aeabi_l2d>>////

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
LAB_08000278:
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
  if ((uVar3 & 0x100000) != 0) goto LAB_08000278;
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
      goto LAB_080002f0;
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
LAB_080002f0:
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


////>>0x080004d0>>__muldf3>>////

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


////>>0x08000724>>__divdf3>>////

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


////>>0x080008f4>>__gedf2>>////

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


////>>0x080008fc>>__ledf2>>////

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


////>>0x08000904>>__nedf2>>////

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


////>>0x08000980>>__aeabi_cdrcmple>>////

void __aeabi_cdrcmple(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __aeabi_cdcmpeq(param_3,param_4,param_1,param_2);
  return;
}


////>>0x08000990>>__aeabi_cdcmpeq>>////

undefined4 __aeabi_cdcmpeq(undefined4 param_1)

{
  __nedf2();
  return param_1;
}


////>>0x080009a0>>__aeabi_dcmpeq>>////

bool __aeabi_dcmpeq(void)

{
  char in_ZR;
  
  __aeabi_cdcmpeq();
  return in_ZR != '\0';
}


////>>0x080009b4>>__aeabi_dcmplt>>////

bool __aeabi_dcmplt(void)

{
  char in_CY;
  
  __aeabi_cdcmpeq();
  return in_CY == '\0';
}


////>>0x080009c8>>__aeabi_dcmple>>////

bool __aeabi_dcmple(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x080009dc>>__aeabi_dcmpge>>////

bool __aeabi_dcmpge(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x080009f0>>__aeabi_dcmpgt>>////

bool __aeabi_dcmpgt(void)

{
  char in_CY;
  
  __aeabi_cdrcmple();
  return in_CY == '\0';
}


////>>0x08000a04>>__unorddf2>>////

undefined4 __unorddf2(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((((param_2 << 1) >> 0x15 != -1) || ((param_1 | param_2 << 0xc) == 0)) &&
     (((param_4 << 1) >> 0x15 != -1 || ((param_3 | param_4 << 0xc) == 0)))) {
    return 0;
  }
  return 1;
}


////>>0x08000a30>>__truncdfsf2>>////

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


////>>0x08000ad0>>__aeabi_frsub>>////

void __aeabi_frsub(uint param_1)

{
  __addsf3(param_1 ^ 0x80000000);
  return;
}


////>>0x08000ad8>>__aeabi_fsub>>////

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


////>>0x08000adc>>__addsf3>>////

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


////>>0x08000c3c>>__floatunsisf>>////

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


////>>0x08000c44>>__floatsisf>>////

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


////>>0x08000c60>>__aeabi_ul2f>>////

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


////>>0x08000c70>>__aeabi_l2f>>////

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


////>>0x08000cec>>__aeabi_fmul>>////

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


////>>0x08000e54>>__aeabi_fdiv>>////

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


////>>0x08000f8c>>__gesf2>>////

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


////>>0x08000f94>>__ltsf2>>////

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


////>>0x08000f9c>>__cmpsf2>>////

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


////>>0x08000ffc>>__aeabi_cfrcmple>>////

void __aeabi_cfrcmple(undefined4 param_1,undefined4 param_2)

{
  __aeabi_cfcmpeq(param_2,param_1);
  return;
}


////>>0x08001004>>__aeabi_cfcmpeq>>////

undefined8 __aeabi_cfcmpeq(undefined4 param_1,undefined4 param_2)

{
  __cmpsf2();
  return CONCAT44(param_2,param_1);
}


////>>0x08001014>>__aeabi_fcmpeq>>////

bool __aeabi_fcmpeq(void)

{
  char in_ZR;
  
  __aeabi_cfcmpeq();
  return in_ZR != '\0';
}


////>>0x08001028>>__aeabi_fcmplt>>////

bool __aeabi_fcmplt(void)

{
  char in_CY;
  
  __aeabi_cfcmpeq();
  return in_CY == '\0';
}


////>>0x0800103c>>__aeabi_fcmple>>////

bool __aeabi_fcmple(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08001050>>__aeabi_fcmpge>>////

bool __aeabi_fcmpge(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08001064>>__aeabi_fcmpgt>>////

bool __aeabi_fcmpgt(void)

{
  char in_CY;
  
  __aeabi_cfrcmple();
  return in_CY == '\0';
}


////>>0x08001078>>__aeabi_f2iz>>////

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


////>>0x080010c4>>__fixunssfsi>>////

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


////>>0x08001104>>HAL_InitTick>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)

{
  uint32_t uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  HAL_SYSTICK_Config(uVar1 / 1000);
  HAL_NVIC_SetPriority(SysTick_IRQn,TickPriority,0);
  return HAL_OK;
}


////>>0x08001128>>HAL_Init>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_Init(void)

{
  _DAT_40022000 = _DAT_40022000 | 0x10;
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_InitTick(0);
  HAL_MspInit();
  return HAL_OK;
}


////>>0x0800114c>>HAL_IncTick>>////

/* WARNING: Unknown calling convention */

void HAL_IncTick(void)

{
  uwTick = uwTick + 1;
  return;
}


////>>0x0800115c>>HAL_GetTick>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_GetTick(void)

{
  return uwTick;
}


////>>0x08001168>>HAL_Delay>>////

/* WARNING: Unknown calling convention */

void HAL_Delay(uint32_t Delay)

{
  return;
}


////>>0x08001170>>HAL_NVIC_SetPriorityGrouping>>////


/* WARNING: Unknown calling convention */

void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup)

{
  _DAT_e000ed0c = _DAT_e000ed0c & 0xf8ff | 0x5fa0000 | (PriorityGroup & 7) << 8;
  return;
}


////>>0x08001194>>HAL_NVIC_SetPriority>>////


/* WARNING: Unknown calling convention */

void HAL_NVIC_SetPriority(IRQn_Type IRQn,uint32_t PreemptPriority,uint32_t SubPriority)

{
  uint uVar1;
  undefined uVar2;
  uint32_t PreemptPriorityBits;
  uint uVar3;
  uint32_t PriorityGroupTmp;
  uint32_t SubPriorityBits;
  uint uVar4;
  
  uVar1 = (uint)IRQn;
  SubPriorityBits = (uint)(_DAT_e000ed0c << 0x15) >> 0x1d;
  PreemptPriorityBits = 7 - SubPriorityBits;
  uVar4 = SubPriorityBits + 4;
  if (3 < PreemptPriorityBits) {
    PreemptPriorityBits = 4;
  }
  if (uVar4 < 7) {
    SubPriorityBits = 0;
  }
  uVar3 = (1 << (PreemptPriorityBits & 0xff)) - 1;
  if (6 < uVar4) {
    SubPriorityBits = SubPriorityBits - 3;
  }
  uVar2 = (undefined)
          ((SubPriority & (1 << (SubPriorityBits & 0xff)) - 1U |
           (PreemptPriority & uVar3) << (SubPriorityBits & 0xff)) << 4);
  if (-1 < (int)uVar1) {
    uVar4 = uVar1 + 0xe000e100;
  }
  else {
    uVar3 = 0xe000ed14;
    uVar4 = uVar1 & 0xf;
  }
  if (-1 < (int)uVar1) {
    *(undefined *)(uVar4 + 0x300) = uVar2;
  }
  else {
    *(undefined *)(uVar3 + uVar4) = uVar2;
  }
  return;
}


////>>0x080011fc>>HAL_NVIC_EnableIRQ>>////

/* WARNING: Unknown calling convention */

void HAL_NVIC_EnableIRQ(IRQn_Type IRQn)

{
  *(int *)(((uint)(int)IRQn >> 5) * 4 + -0x1fff1f00) = 1 << ((int)IRQn & 0x1fU);
  return;
}


////>>0x08001214>>HAL_SYSTICK_Config>>////


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


////>>0x08001240>>HAL_SYSTICK_CLKSourceConfig>>////


/* WARNING: Unknown calling convention */

void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource)

{
  if (CLKSource == 4) {
    _DAT_e000e010 = _DAT_e000e010 | 4;
  }
  else {
    _DAT_e000e010 = _DAT_e000e010 & 0xfffffffb;
  }
  return;
}


////>>0x08001258>>HAL_SYSTICK_Callback>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_Callback(void)

{
  return;
}


////>>0x0800125a>>HAL_SYSTICK_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_IRQHandler(void)

{
  HAL_SYSTICK_Callback();
  return;
}


////>>0x08001264>>HAL_GPIO_Init>>////


/* WARNING: Unknown calling convention */

void HAL_GPIO_Init(GPIO_TypeDef *GPIOx,GPIO_InitTypeDef *GPIO_Init)

{
  uint32_t *configregister;
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  GPIO_TypeDef *unaff_r10;
  int iVar8;
  uint32_t tmpreg;
  
  uVar1 = 0;
  uVar5 = 0;
  do {
    uVar6 = 1 << (uVar5 & 0xff);
    uVar2 = uVar6 & GPIO_Init->Pin;
    if (uVar6 == uVar2) {
      uVar3 = GPIO_Init->Mode;
      if (uVar3 == 0x12) {
        uVar1 = GPIO_Init->Speed + 0xc;
      }
      else if (uVar3 < 0x13) {
        if (uVar3 == 2) {
          uVar1 = GPIO_Init->Speed + 8;
        }
        else if (uVar3 < 3) {
          if (uVar3 == 0) goto LAB_080013be;
          if (uVar3 == 1) {
            uVar1 = GPIO_Init->Speed;
          }
        }
        else if (uVar3 == 3) {
          uVar1 = 0;
        }
        else if (uVar3 == 0x11) {
          uVar1 = GPIO_Init->Speed + 4;
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
        uVar1 = GPIO_Init->Pull;
        if (uVar1 == 0) {
          uVar1 = 4;
        }
        else {
          if (uVar1 == 1) {
            GPIOx->BSRR = uVar6;
          }
          if (uVar1 != 1) {
            GPIOx->BRR = uVar6;
          }
          uVar1 = 8;
        }
      }
LAB_080012a8:
      if (uVar2 < 0x100) {
        uVar6 = GPIOx->CRL;
        uVar3 = uVar5 << 2;
        unaff_r10 = GPIOx;
      }
      else {
        uVar6 = GPIOx->CRH;
        uVar3 = (uVar5 + 0x3ffffff8) * 4;
      }
      if (0xff < uVar2) {
        unaff_r10 = (GPIO_TypeDef *)&GPIOx->CRH;
      }
      unaff_r10->CRL = uVar6 & ~(0xf << (uVar3 & 0xff)) | uVar1 << (uVar3 & 0xff);
      unaff_r10 = (GPIO_TypeDef *)GPIO_Init->Mode;
      if (((uint)unaff_r10 & 0x10000000) != 0) {
        _DAT_40021018 = _DAT_40021018 | 1;
        iVar8 = (uVar5 & 3) << 2;
        if (GPIOx == (GPIO_TypeDef *)0x40010800) {
          iVar4 = 0;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40010c00) {
          iVar4 = 1;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40011000) {
          iVar4 = 2;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40011400) {
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


////>>0x08001424>>HAL_GPIO_WritePin>>////

/* WARNING: Unknown calling convention */

void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin,GPIO_PinState PinState)

{
  uint32_t uVar1;
  
  uVar1 = (uint32_t)GPIO_Pin;
  if (PinState == GPIO_PIN_RESET) {
    uVar1 = uVar1 << 0x10;
  }
  GPIOx->BSRR = uVar1;
  return;
}


////>>0x0800142e>>HAL_GPIO_TogglePin>>////

/* WARNING: Unknown calling convention */

void HAL_GPIO_TogglePin(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)

{
  GPIOx->ODR = (uint)GPIO_Pin ^ GPIOx->ODR;
  return;
}


////>>0x08001436>>I2C_IsAcknowledgeFailed>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_IsAcknowledgeFailed(I2C_HandleTypeDef *hi2c)

{
  I2C_TypeDef *pIVar1;
  
  pIVar1 = hi2c->Instance;
  if ((pIVar1->SR1 & 0x400) != 0) {
    pIVar1->SR1 = pIVar1->SR1 & 0xfffffbff;
    hi2c->ErrorCode = 4;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->Lock = HAL_UNLOCKED;
    return HAL_ERROR;
  }
  return HAL_OK;
}


////>>0x08001460>>I2C_WaitOnMasterAddressFlagUntilTimeout>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
I2C_WaitOnMasterAddressFlagUntilTimeout(I2C_HandleTypeDef *hi2c,uint32_t Flag,uint32_t Timeout)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  I2C_TypeDef *pIVar4;
  
  uVar1 = HAL_GetTick();
  do {
    pIVar4 = hi2c->Instance;
    if ((Flag << 8) >> 0x18 == 1) {
      uVar3 = pIVar4->SR1;
    }
    else {
      uVar3 = pIVar4->SR2;
    }
    if ((Flag & 0xffff & ~uVar3) == 0) {
      return HAL_OK;
    }
    if ((int)(pIVar4->SR1 << 0x15) < 0) {
      pIVar4->CR1 = pIVar4->CR1 | 0x200;
      pIVar4->SR1 = pIVar4->SR1 & 0xfffffbff;
      hi2c->ErrorCode = 4;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_ERROR;
    }
  } while ((Timeout == 0xffffffff) ||
          ((Timeout != 0 && (uVar2 = HAL_GetTick(), uVar2 - uVar1 <= Timeout))));
  hi2c->State = HAL_I2C_STATE_READY;
  hi2c->Lock = HAL_UNLOCKED;
  return HAL_TIMEOUT;
}


////>>0x080014e2>>I2C_WaitOnTXEFlagUntilTimeout>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_WaitOnTXEFlagUntilTimeout(I2C_HandleTypeDef *hi2c,uint32_t Timeout)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t tickstart;
  
  uVar2 = HAL_GetTick();
  while( true ) {
    if ((int)(hi2c->Instance->SR1 << 0x18) < 0) {
      return HAL_OK;
    }
    HVar1 = I2C_IsAcknowledgeFailed(hi2c);
    if (HVar1 != HAL_OK) break;
    if ((Timeout != 0xffffffff) &&
       ((Timeout == 0 || (uVar3 = HAL_GetTick(), Timeout < uVar3 - uVar2)))) {
      hi2c->ErrorCode = hi2c->ErrorCode | 0x20;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_TIMEOUT;
    }
  }
  return HAL_ERROR;
}


////>>0x08001530>>I2C_RequestMemoryWrite>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
I2C_RequestMemoryWrite
          (I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress,uint16_t MemAddSize,
          uint32_t Timeout)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  I2C_TypeDef *pIVar4;
  uint32_t tmpreg;
  
  hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
  uVar2 = HAL_GetTick();
  do {
    do {
      if ((int)(hi2c->Instance->SR1 << 0x1f) < 0) {
        hi2c->Instance->DR = DevAddress & 0xfe;
        HVar1 = I2C_WaitOnMasterAddressFlagUntilTimeout(hi2c,0x10002,Timeout);
        if (HVar1 == HAL_OK) {
          HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout);
          if (HVar1 == HAL_OK) {
            pIVar4 = hi2c->Instance;
            if (MemAddSize == 1) {
LAB_080015ca:
              pIVar4->DR = (uint)(byte)MemAddress;
              return HAL_OK;
            }
            pIVar4->DR = (uint)(MemAddress >> 8);
            HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout);
            if (HVar1 == HAL_OK) {
              pIVar4 = hi2c->Instance;
              goto LAB_080015ca;
            }
          }
          if (hi2c->ErrorCode != 4) {
            return HAL_TIMEOUT;
          }
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
        }
        else if (hi2c->ErrorCode != 4) {
          return HAL_TIMEOUT;
        }
        return HAL_ERROR;
      }
    } while (Timeout == 0xffffffff);
    if ((Timeout == 0) || (uVar3 = HAL_GetTick(), Timeout < uVar3 - uVar2)) {
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_TIMEOUT;
    }
  } while( true );
}


////>>0x080015e8>>I2C_RequestMemoryRead>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
I2C_RequestMemoryRead
          (I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress,uint16_t MemAddSize,
          uint32_t Timeout)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  I2C_TypeDef *pIVar4;
  uint32_t tmpreg;
  
  pIVar4 = hi2c->Instance;
  pIVar4->CR1 = pIVar4->CR1 | 0x400;
  pIVar4->CR1 = pIVar4->CR1 | 0x100;
  uVar2 = HAL_GetTick();
LAB_0800160e:
  while (-1 < (int)(hi2c->Instance->SR1 << 0x1f)) {
    if (Timeout != 0xffffffff) goto code_r0x08001658;
  }
  hi2c->Instance->DR = (byte)DevAddress & 0xfe;
  HVar1 = I2C_WaitOnMasterAddressFlagUntilTimeout(hi2c,0x10002,Timeout);
  if (HVar1 != HAL_OK) goto LAB_080016ba;
  HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout);
  if (HVar1 == HAL_OK) {
    pIVar4 = hi2c->Instance;
    if (MemAddSize != 1) {
      pIVar4->DR = (uint)(MemAddress >> 8);
      HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout);
      if (HVar1 != HAL_OK) goto LAB_08001642;
      pIVar4 = hi2c->Instance;
    }
    pIVar4->DR = (uint)(byte)MemAddress;
    HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout);
    if (HVar1 == HAL_OK) {
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
      uVar2 = HAL_GetTick();
      do {
        do {
          if ((int)(hi2c->Instance->SR1 << 0x1f) < 0) {
            hi2c->Instance->DR = (byte)DevAddress | 1;
            HVar1 = I2C_WaitOnMasterAddressFlagUntilTimeout(hi2c,0x10002,Timeout);
            if (HVar1 == HAL_OK) {
              return HAL_OK;
            }
LAB_080016ba:
            if (hi2c->ErrorCode != 4) {
              return HAL_TIMEOUT;
            }
            return HAL_ERROR;
          }
        } while (Timeout == 0xffffffff);
      } while ((Timeout != 0) && (uVar3 = HAL_GetTick(), uVar3 - uVar2 <= Timeout));
LAB_0800165a:
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_TIMEOUT;
    }
  }
LAB_08001642:
  if (hi2c->ErrorCode == 4) {
    hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
    return HAL_ERROR;
  }
  return HAL_TIMEOUT;
code_r0x08001658:
  if ((Timeout == 0) || (uVar3 = HAL_GetTick(), Timeout < uVar3 - uVar2)) goto LAB_0800165a;
  goto LAB_0800160e;
}


////>>0x080016f4>>I2C_WaitOnRXNEFlagUntilTimeout>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef I2C_WaitOnRXNEFlagUntilTimeout(I2C_HandleTypeDef *hi2c,uint32_t Timeout)

{
  uint32_t uVar1;
  uint32_t uVar2;
  I2C_TypeDef *pIVar3;
  
  uVar1 = HAL_GetTick();
  while( true ) {
    pIVar3 = hi2c->Instance;
    if ((pIVar3->SR1 & 0x40) != 0) {
      return HAL_OK;
    }
    if ((int)(pIVar3->SR1 << 0x1b) < 0) break;
    if ((Timeout == 0) || (uVar2 = HAL_GetTick(), Timeout < uVar2 - uVar1)) {
      hi2c->ErrorCode = hi2c->ErrorCode | 0x20;
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_TIMEOUT;
    }
  }
  pIVar3->SR1 = pIVar3->SR1 & 0xffffffef;
  hi2c->ErrorCode = 0;
  hi2c->Lock = HAL_UNLOCKED;
  hi2c->State = HAL_I2C_STATE_READY;
  return HAL_ERROR;
}


////>>0x08001754>>HAL_I2C_Init>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef *hi2c)

{
  uint32_t uVar1;
  uint extraout_r1;
  uint uVar2;
  I2C_TypeDef *pIVar3;
  uint uVar4;
  uint uVar5;
  
  if (hi2c != (I2C_HandleTypeDef *)0x0) {
    if (hi2c->State == HAL_I2C_STATE_RESET) {
      hi2c->Lock = HAL_UNLOCKED;
      HAL_I2C_MspInit(hi2c);
    }
    hi2c->State = HAL_I2C_STATE_BUSY;
    hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffffe;
    uVar1 = HAL_RCC_GetPCLK1Freq();
    uVar4 = (hi2c->Init).ClockSpeed;
    uVar5 = uVar1 / 1000000;
    uVar2 = extraout_r1;
    if (100000 < uVar4) {
      uVar2 = 300;
    }
    pIVar3 = hi2c->Instance;
    if (100000 < uVar4) {
      uVar2 = uVar5 * uVar2;
    }
    pIVar3->CR2 = uVar5;
    if (100000 < uVar4) {
      uVar5 = uVar2 / 1000;
    }
    pIVar3->TRISE = uVar5 + 1;
    if (uVar4 < 0x186a1) {
      uVar1 = uVar1 / (uVar4 << 1);
      if ((uVar1 & 0xfff) < 4) {
        uVar1 = 4;
      }
    }
    else {
      if ((hi2c->Init).DutyCycle == 0) {
        uVar1 = uVar1 / (uVar4 * 3) | 0x8000;
      }
      else {
        uVar1 = uVar1 / (uVar4 * 0x19) | 0xc000;
      }
      if ((uVar1 & 0xfff) == 0) {
        uVar1 = 1;
      }
    }
    uVar5 = (hi2c->Init).NoStretchMode;
    uVar2 = (hi2c->Init).GeneralCallMode;
    pIVar3->CCR = uVar1;
    pIVar3->CR1 = uVar2 | uVar5;
    pIVar3->OAR1 = (hi2c->Init).AddressingMode | (hi2c->Init).OwnAddress1;
    pIVar3->OAR2 = (hi2c->Init).DualAddressMode | (hi2c->Init).OwnAddress2;
    pIVar3->CR1 = pIVar3->CR1 | 1;
    hi2c->ErrorCode = 0;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->Mode = HAL_I2C_MODE_NONE;
    return HAL_OK;
  }
  return HAL_ERROR;
}


////>>0x08001828>>HAL_I2C_Mem_Write>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress,
                 uint16_t MemAddSize,uint8_t *pData,uint16_t Size,uint32_t Timeout)

{
  HAL_StatusTypeDef HVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  I2C_TypeDef *pIVar4;
  uint uVar5;
  
  if (hi2c->State == HAL_I2C_STATE_READY) {
    if (pData == (uint8_t *)0x0) {
      return HAL_ERROR;
    }
    if (Size == 0) {
      return HAL_ERROR;
    }
    uVar2 = HAL_GetTick();
    do {
      pIVar4 = hi2c->Instance;
      if ((~pIVar4->SR2 & 2) != 0) {
        if (hi2c->Lock == HAL_LOCKED) {
          return HAL_BUSY;
        }
        uVar5 = pIVar4->CR1;
        hi2c->Lock = HAL_LOCKED;
        pIVar4->CR1 = uVar5 & 0xfffff7ff;
        hi2c->State = HAL_I2C_STATE_BUSY_TX;
        hi2c->Mode = HAL_I2C_MODE_MEM;
        hi2c->ErrorCode = 0;
        HVar1 = I2C_RequestMemoryWrite(hi2c,DevAddress,MemAddress,MemAddSize,Timeout);
        if (HVar1 != HAL_OK) {
          hi2c->Lock = HAL_UNLOCKED;
          if (hi2c->ErrorCode == 4) {
            return HAL_ERROR;
          }
          return HAL_TIMEOUT;
        }
        goto LAB_080018e2;
      }
      uVar3 = HAL_GetTick();
    } while (uVar3 - uVar2 < 0x2711);
    hi2c->Lock = HAL_UNLOCKED;
    hi2c->State = HAL_I2C_STATE_READY;
  }
  return HAL_BUSY;
  while (Size != 0) {
LAB_080018e2:
    HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout);
    if (HVar1 != HAL_OK) goto LAB_080018ee;
    pIVar4 = hi2c->Instance;
    pIVar4->DR = (uint)*pData;
    if ((int)(pIVar4->SR1 << 0x1d) < 0) {
      if ((uint16_t)(Size - 1) == 0) break;
      Size = Size - 2;
      pIVar4->DR = (uint)pData[1];
      pData = pData + 2;
    }
    else {
      pData = pData + 1;
      Size = Size - 1;
    }
  }
  HVar1 = I2C_WaitOnTXEFlagUntilTimeout(hi2c,Timeout);
  if (HVar1 == HAL_OK) {
    hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
    hi2c->Lock = HAL_UNLOCKED;
    hi2c->State = HAL_I2C_STATE_READY;
    hi2c->Mode = HAL_I2C_MODE_NONE;
    return HAL_OK;
  }
LAB_080018ee:
  if (hi2c->ErrorCode == 4) {
    hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
    return HAL_ERROR;
  }
  return HAL_TIMEOUT;
}


////>>0x08001938>>HAL_I2C_Mem_Read>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c,uint16_t DevAddress,uint16_t MemAddress,uint16_t MemAddSize
                ,uint8_t *pData,uint16_t Size,uint32_t Timeout)

{
  uint8_t *puVar1;
  HAL_StatusTypeDef HVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  I2C_TypeDef *pIVar5;
  uint uVar6;
  uint8_t *puVar7;
  bool bVar8;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_2;
  
  if (hi2c->State != HAL_I2C_STATE_READY) {
    return HAL_BUSY;
  }
  if (pData == (uint8_t *)0x0) {
    return HAL_ERROR;
  }
  if (Size == 0) {
    return HAL_ERROR;
  }
  uVar3 = HAL_GetTick();
  while (pIVar5 = hi2c->Instance, (~pIVar5->SR2 & 2) == 0) {
    uVar4 = HAL_GetTick();
    if (10000 < uVar4 - uVar3) {
      hi2c->Lock = HAL_UNLOCKED;
      hi2c->State = HAL_I2C_STATE_READY;
      return HAL_BUSY;
    }
  }
  if (hi2c->Lock == HAL_LOCKED) {
    return HAL_BUSY;
  }
  uVar6 = pIVar5->CR1;
  hi2c->Lock = HAL_LOCKED;
  pIVar5->CR1 = uVar6 & 0xfffff7ff;
  hi2c->State = HAL_I2C_STATE_BUSY_RX;
  hi2c->Mode = HAL_I2C_MODE_MEM;
  hi2c->ErrorCode = 0;
  HVar2 = I2C_RequestMemoryRead(hi2c,DevAddress,MemAddress,MemAddSize,Timeout);
  if (HVar2 != HAL_OK) {
    hi2c->Lock = HAL_UNLOCKED;
    if (hi2c->ErrorCode == 4) {
      return HAL_ERROR;
    }
    return HAL_TIMEOUT;
  }
  pIVar5 = hi2c->Instance;
  uVar6 = pIVar5->CR1;
  if (Size == 1) {
    pIVar5->CR1 = uVar6 & 0xfffffbff;
    disableIRQinterrupts();
    hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
    enableIRQinterrupts();
    HVar2 = I2C_WaitOnRXNEFlagUntilTimeout(hi2c,Timeout);
    if (HVar2 == HAL_OK) {
      *pData = (uint8_t)hi2c->Instance->DR;
LAB_08001ab8:
      hi2c->State = HAL_I2C_STATE_READY;
      hi2c->Mode = HAL_I2C_MODE_NONE;
      hi2c->Lock = HAL_UNLOCKED;
      return HAL_OK;
    }
LAB_08001a18:
    if (hi2c->ErrorCode != 0x20) {
      return HAL_ERROR;
    }
    return HAL_TIMEOUT;
  }
  if (Size == 2) {
    pIVar5->CR1 = uVar6 | 0x800;
    disableIRQinterrupts();
    hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
    enableIRQinterrupts();
  }
  else {
    pIVar5->CR1 = uVar6 | 0x400;
    while (3 < Size) {
      HVar2 = I2C_WaitOnRXNEFlagUntilTimeout(hi2c,Timeout);
      if (HVar2 != HAL_OK) goto LAB_08001a18;
      *pData = (uint8_t)hi2c->Instance->DR;
      pIVar5 = hi2c->Instance;
      bVar8 = (int)(pIVar5->SR1 << 0x1d) < 0;
      if (bVar8) {
        pIVar5 = (I2C_TypeDef *)pIVar5->DR;
        puVar7 = pData + 2;
        Size = Size - 2;
      }
      else {
        puVar7 = pData + 1;
        Size = Size - 1;
      }
      puVar1 = pData + 1;
      pData = puVar7;
      if (bVar8) {
        *puVar1 = (uint8_t)pIVar5;
      }
    }
    if (Size != 2) {
      uVar3 = HAL_GetTick();
      do {
        pIVar5 = hi2c->Instance;
        do {
          if ((int)(pIVar5->SR1 << 0x1d) < 0) {
            pIVar5->CR1 = pIVar5->CR1 & 0xfffffbff;
            disableIRQinterrupts();
            *pData = (uint8_t)hi2c->Instance->DR;
            uVar3 = HAL_GetTick();
            goto LAB_08001b3a;
          }
        } while (Timeout == 0xffffffff);
      } while ((Timeout != 0) && (uVar4 = HAL_GetTick(), uVar4 - uVar3 <= Timeout));
      goto LAB_08001afa;
    }
  }
  uVar3 = HAL_GetTick();
  do {
    do {
      if ((int)(hi2c->Instance->SR1 << 0x1d) < 0) {
        disableIRQinterrupts();
        pIVar5 = hi2c->Instance;
        pIVar5->CR1 = pIVar5->CR1 | 0x200;
        *pData = (uint8_t)pIVar5->DR;
        enableIRQinterrupts();
        pData[1] = (uint8_t)hi2c->Instance->DR;
        goto LAB_08001ab8;
      }
    } while (Timeout == 0xffffffff);
  } while ((Timeout != 0) && (uVar4 = HAL_GetTick(), uVar4 - uVar3 <= Timeout));
LAB_08001afa:
  hi2c->State = HAL_I2C_STATE_READY;
  hi2c->Lock = HAL_UNLOCKED;
  return HAL_TIMEOUT;
LAB_08001b3a:
  do {
    pIVar5 = hi2c->Instance;
    do {
      if ((int)(pIVar5->SR1 << 0x1d) < 0) {
        pIVar5->CR1 = pIVar5->CR1 | 0x200;
        pData[1] = (uint8_t)pIVar5->DR;
        enableIRQinterrupts();
        pData[2] = (uint8_t)hi2c->Instance->DR;
        goto LAB_08001ab8;
      }
    } while (Timeout == 0xffffffff);
  } while ((Timeout != 0) && (uVar4 = HAL_GetTick(), uVar4 - uVar3 <= Timeout));
  goto LAB_08001afa;
}


////>>0x08001b58>>HAL_RCC_OscConfig>>////

/* WARNING: Removing unreachable block (ram,0x08001eec) */
/* WARNING: Removing unreachable block (ram,0x08001ee8) */

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  uint32_t tmpreg;
  
  if ((int)(RCC_OscInitStruct->OscillatorType << 0x1f) < 0) {
    if (((_DAT_40021004 & 0xc) == 4) ||
       (((_DAT_40021004 & 0xc) == 8 && ((int)(_DAT_40021004 << 0xf) < 0)))) {
      if (((int)((_DAT_40021000 >> 0x11) << 0x1f) < 0) && (RCC_OscInitStruct->HSEState == 0)) {
        return HAL_ERROR;
      }
    }
    else {
      uVar1 = RCC_OscInitStruct->HSEState;
      if (uVar1 == 0x10000) {
LAB_08001c1e:
        _DAT_40021000 = _DAT_40021000 | 0x10000;
      }
      else {
        if (uVar1 == 0) {
          _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
          uVar1 = HAL_GetTick();
          while ((int)((_DAT_40021000 >> 0x11) << 0x1f) < 0) {
            uVar2 = HAL_GetTick();
            if (100 < uVar2 - uVar1) {
              return HAL_TIMEOUT;
            }
          }
          goto LAB_08001b64;
        }
        if (uVar1 == 0x50000) {
          _DAT_40021000 = _DAT_40021000 | 0x40000;
          goto LAB_08001c1e;
        }
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      uVar1 = HAL_GetTick();
      while (-1 < (int)((_DAT_40021000 >> 0x11) << 0x1f)) {
        uVar2 = HAL_GetTick();
        if (100 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
  }
LAB_08001b64:
  if ((int)(RCC_OscInitStruct->OscillatorType << 0x1e) < 0) {
    if (((_DAT_40021004 & 0xc) == 0) ||
       (((_DAT_40021004 & 0xc) == 8 && (-1 < (int)(_DAT_40021004 << 0xf))))) {
      if (((int)((_DAT_40021000 >> 1) << 0x1f) < 0) && (RCC_OscInitStruct->HSIState != 1)) {
        return HAL_ERROR;
      }
    }
    else {
      uRam42420000 = RCC_OscInitStruct->HSIState;
      if (uRam42420000 == 0) {
        uVar1 = HAL_GetTick();
        while ((int)((_DAT_40021000 >> 1) << 0x1f) < 0) {
          uVar2 = HAL_GetTick();
          if (2 < uVar2 - uVar1) {
            return HAL_TIMEOUT;
          }
        }
        goto LAB_08001b6c;
      }
      uRam42420000 = 1;
      uVar1 = HAL_GetTick();
      while (-1 < (int)((_DAT_40021000 >> 1) << 0x1f)) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
    _DAT_40021000 = RCC_OscInitStruct->HSICalibrationValue << 3 | _DAT_40021000 & 0xffffff07;
  }
LAB_08001b6c:
  if ((int)(RCC_OscInitStruct->OscillatorType << 0x1c) < 0) {
    uRam42420480 = RCC_OscInitStruct->LSIState;
    if (uRam42420480 == 0) {
      uVar1 = HAL_GetTick();
      while ((int)((_DAT_40021024 >> 1) << 0x1f) < 0) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      uRam42420480 = 1;
      uVar1 = HAL_GetTick();
      while (-1 < (int)((_DAT_40021024 >> 1) << 0x1f)) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
      HAL_Delay(1);
    }
  }
  if (-1 < (int)(RCC_OscInitStruct->OscillatorType << 0x1d)) goto LAB_08001bc2;
  _DAT_4002101c = _DAT_4002101c | 0x10000000;
  _DAT_40007000 = _DAT_40007000 | 0x100;
  uVar1 = HAL_GetTick();
  while (-1 < (int)(_DAT_40007000 << 0x17)) {
    uVar2 = HAL_GetTick();
    if (100 < uVar2 - uVar1) {
      return HAL_TIMEOUT;
    }
  }
  uVar1 = RCC_OscInitStruct->LSEState;
  if (uVar1 == 1) {
LAB_08001e1a:
    _DAT_40021020 = _DAT_40021020 | 1;
  }
  else {
    if (uVar1 == 0) {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
      uVar1 = HAL_GetTick();
      while ((int)((_DAT_40021020 >> 1) << 0x1f) < 0) {
        uVar2 = HAL_GetTick();
        if (5000 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
      goto LAB_08001bc2;
    }
    if (uVar1 == 5) {
      _DAT_40021020 = _DAT_40021020 | 4;
      goto LAB_08001e1a;
    }
    _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
  }
  uVar1 = HAL_GetTick();
  while (-1 < (int)((_DAT_40021020 >> 1) << 0x1f)) {
    uVar2 = HAL_GetTick();
    if (5000 < uVar2 - uVar1) {
      return HAL_TIMEOUT;
    }
  }
LAB_08001bc2:
  uVar1 = (RCC_OscInitStruct->PLL).PLLState;
  if (uVar1 == 0) {
    return HAL_OK;
  }
  if ((_DAT_40021004 & 0xc) != 8) {
    if (uVar1 != 2) {
      uRam42420060 = 0;
      uVar1 = HAL_GetTick();
      do {
        if (-1 < (int)((_DAT_40021000 >> 0x19) << 0x1f)) {
          return HAL_OK;
        }
        uVar2 = HAL_GetTick();
      } while (uVar2 - uVar1 < 3);
      return HAL_TIMEOUT;
    }
    uRam42420060 = 0;
    uVar1 = HAL_GetTick();
    do {
      if (-1 < (int)((_DAT_40021000 >> 0x19) << 0x1f)) {
        uVar3 = (RCC_OscInitStruct->PLL).PLLSource;
        if (uVar3 == 0x10000) {
          _DAT_40021004 = _DAT_40021004 & 0xfffdffff | RCC_OscInitStruct->HSEPredivValue;
        }
        _DAT_40021004 = uVar3 | (RCC_OscInitStruct->PLL).PLLMUL | _DAT_40021004 & 0xffc2ffff;
        uRam42420060 = 1;
        uVar1 = HAL_GetTick();
        do {
          if ((int)((_DAT_40021000 >> 0x19) << 0x1f) < 0) {
            return HAL_OK;
          }
          uVar2 = HAL_GetTick();
        } while (uVar2 - uVar1 < 3);
        return HAL_TIMEOUT;
      }
      uVar2 = HAL_GetTick();
    } while (uVar2 - uVar1 < 3);
    return HAL_TIMEOUT;
  }
  return HAL_ERROR;
}


////>>0x08002008>>HAL_RCC_GetSysClockFreq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetSysClockFreq(void)

{
  undefined4 uVar1;
  uint32_t uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint8_t aPredivFactorTable [2];
  uint8_t aPLLMULFactorTable [16];
  
  puVar4 = &DAT_080072f0;
  puVar6 = (undefined4 *)aPLLMULFactorTable;
  do {
    uVar1 = *puVar4;
    uVar3 = puVar4[1];
    puVar4 = puVar4 + 2;
    *puVar6 = uVar1;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
  } while (puVar4 != (undefined4 *)"../Src/MPU9250.c");
  aPredivFactorTable[0] = '\x01';
  aPredivFactorTable[1] = '\x02';
  if ((_DAT_40021004 & 0xc) == 8) {
    if ((int)(_DAT_40021004 << 0xf) < 0) {
      uVar5 = 8000000 / aPredivFactorTable[(_DAT_40021004 & 0x20000) >> 0x11];
    }
    else {
      uVar5 = 4000000;
    }
    uVar2 = uVar5 * aPLLMULFactorTable[(_DAT_40021004 & 0x3c0000) >> 0x12];
  }
  else {
    uVar2 = 8000000;
  }
  return uVar2;
}


////>>0x0800209c>>HAL_RCC_ClockConfig>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct,uint32_t FLatency)

{
  char cVar1;
  char cVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint uVar5;
  
  if ((FLatency <= (_DAT_40022000 & 7)) ||
     (_DAT_40022000 = _DAT_40022000 & 0xfffffff8 | FLatency, FLatency == (FLatency & 7))) {
    if ((int)(RCC_ClkInitStruct->ClockType << 0x1e) < 0) {
      _DAT_40021004 = _DAT_40021004 & 0xffffff0f | RCC_ClkInitStruct->AHBCLKDivider;
    }
    if (-1 < (int)(RCC_ClkInitStruct->ClockType << 0x1f)) {
LAB_080020ba:
      if ((FLatency < (_DAT_40022000 & 7)) &&
         (_DAT_40022000 = _DAT_40022000 & 0xfffffff8 | FLatency, FLatency != (FLatency & 7))) {
        return HAL_ERROR;
      }
      if ((RCC_ClkInitStruct->ClockType & 4) != 0) {
        _DAT_40021004 = _DAT_40021004 & 0xfffff8ff | RCC_ClkInitStruct->APB1CLKDivider;
      }
      if ((int)(RCC_ClkInitStruct->ClockType << 0x1c) < 0) {
        _DAT_40021004 = _DAT_40021004 & 0xffffc7ff | RCC_ClkInitStruct->APB2CLKDivider << 3;
      }
      uVar3 = HAL_RCC_GetSysClockFreq();
      SystemCoreClock = uVar3 >> ""[(_DAT_40021004 & 0xf0) >> 4];
      HAL_InitTick(0);
      return HAL_OK;
    }
    uVar5 = RCC_ClkInitStruct->SYSCLKSource;
    if (uVar5 == 1) {
      cVar2 = '\x01';
      cVar1 = '\0';
    }
    else {
      if (uVar5 == 2) goto LAB_08002176;
      cVar2 = '\0';
      cVar1 = '\x01';
    }
    if ((int)((_DAT_40021000 >>
              (LZCOUNT((uint)(byte)(cVar1 << 6) << 0x18 | (uint)(byte)(cVar2 << 6) << 8) & 0x1fU))
             << 0x1f) < 0) {
LAB_08002176:
      _DAT_40021004 = _DAT_40021004 & 0xfffffffc | uVar5;
      uVar3 = HAL_GetTick();
      if (RCC_ClkInitStruct->SYSCLKSource == 1) {
        do {
          if ((_DAT_40021004 & 0xc) == 4) goto LAB_080020ba;
          uVar4 = HAL_GetTick();
        } while (uVar4 - uVar3 < 0x1389);
      }
      else if (RCC_ClkInitStruct->SYSCLKSource == 2) {
        do {
          if ((_DAT_40021004 & 0xc) == 8) goto LAB_080020ba;
          uVar4 = HAL_GetTick();
        } while (uVar4 - uVar3 < 0x1389);
      }
      else {
        do {
          if ((_DAT_40021004 & 0xc) == 0) goto LAB_080020ba;
          uVar4 = HAL_GetTick();
        } while (uVar4 - uVar3 < 0x1389);
      }
      return HAL_TIMEOUT;
    }
  }
  return HAL_ERROR;
}


////>>0x08002214>>HAL_RCC_GetHCLKFreq>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetHCLKFreq(void)

{
  return SystemCoreClock;
}


////>>0x08002220>>HAL_RCC_GetPCLK1Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK1Freq(void)

{
  return SystemCoreClock >> ""[(_DAT_40021004 & 0x700) >> 8];
}


////>>0x08002250>>HAL_RCC_GetPCLK2Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK2Freq(void)

{
  return SystemCoreClock >> ""[(_DAT_40021004 & 0x3800) >> 0xb];
}


////>>0x08002280>>TIM_OC1_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_OC1_SetConfig(TIM_TypeDef *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  
  TIMx->CCER = TIMx->CCER & 0xfffffffe;
  uVar2 = TIMx->CR2;
  uVar3 = OC_Config->OCMode;
  uVar1 = TIMx->CCER & 0xfffffffd | OC_Config->OCPolarity;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uVar1 = (uVar1 & 0xfffffff7 | OC_Config->OCNPolarity) & 0xfffffffb;
    uVar2 = uVar2 & 0xfffffcff | OC_Config->OCIdleState | OC_Config->OCNIdleState;
  }
  TIMx->CR2 = uVar2;
  TIMx->CCMR1 = TIMx->CCMR1 & 0xffffff8c | uVar3;
  TIMx->CCR1 = OC_Config->Pulse;
  TIMx->CCER = uVar1;
  return;
}


////>>0x080022d0>>TIM_OC3_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_OC3_SetConfig(TIM_TypeDef *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  
  TIMx->CCER = TIMx->CCER & 0xfffffeff;
  uVar2 = TIMx->CR2;
  uVar3 = OC_Config->OCMode;
  uVar1 = TIMx->CCER & 0xfffffdff | OC_Config->OCPolarity << 8;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uVar1 = (uVar1 & 0xfffff7ff | OC_Config->OCNPolarity << 8) & 0xfffffbff;
    uVar2 = uVar2 & 0xffffcfff | (OC_Config->OCIdleState | OC_Config->OCNIdleState) << 4;
  }
  TIMx->CR2 = uVar2;
  TIMx->CCMR2 = TIMx->CCMR2 & 0xffffff8c | uVar3;
  TIMx->CCR3 = OC_Config->Pulse;
  TIMx->CCER = uVar1;
  return;
}


////>>0x08002324>>TIM_OC4_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_OC4_SetConfig(TIM_TypeDef *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  TIMx->CCER = TIMx->CCER & 0xffffefff;
  uVar1 = TIMx->CR2;
  uVar2 = OC_Config->OCMode;
  uVar3 = OC_Config->OCPolarity;
  uVar4 = 0x40012c00;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uVar4 = OC_Config->OCIdleState;
    uVar1 = uVar1 & 0xffffbfff;
  }
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uVar1 = uVar1 | uVar4 << 6;
  }
  TIMx->CR2 = uVar1;
  TIMx->CCMR2 = TIMx->CCMR2 & 0xffff8cff | uVar2 << 8;
  TIMx->CCR4 = OC_Config->Pulse;
  TIMx->CCER = TIMx->CCER & 0xffffdfff | uVar3 << 0xc;
  return;
}


////>>0x08002368>>TIM_Base_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_Base_SetConfig(TIM_TypeDef *TIMx,TIM_Base_InitTypeDef *Structure)

{
  uint32_t uVar1;
  
  uVar1 = TIMx->CR1;
  if (((((TIMx == (TIM_TypeDef *)0x40012c00) || (TIMx == (TIM_TypeDef *)0x40000000)) ||
       (TIMx == (TIM_TypeDef *)0x40000400)) || (TIMx == (TIM_TypeDef *)0x40000800)) &&
     (((uVar1 = uVar1 & 0xffffff8f | Structure->CounterMode, TIMx == (TIM_TypeDef *)0x40012c00 ||
       (TIMx == (TIM_TypeDef *)0x40000000)) ||
      ((TIMx == (TIM_TypeDef *)0x40000400 || (TIMx == (TIM_TypeDef *)0x40000800)))))) {
    uVar1 = uVar1 & 0xfffffcff | Structure->ClockDivision;
  }
  TIMx->CR1 = uVar1;
  TIMx->ARR = Structure->Period;
  TIMx->PSC = Structure->Prescaler;
  uVar1 = 0x40012c00;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uVar1 = Structure->RepetitionCounter;
  }
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    TIMx->RCR = uVar1;
  }
  TIMx->EGR = 1;
  return;
}


////>>0x080023d0>>HAL_TIM_PWM_Init>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim)

{
  if (htim != (TIM_HandleTypeDef *)0x0) {
    if (htim->State == HAL_TIM_STATE_RESET) {
      htim->Lock = HAL_UNLOCKED;
      HAL_TIM_PWM_MspInit(htim);
    }
    htim->State = HAL_TIM_STATE_BUSY;
    TIM_Base_SetConfig(htim->Instance,&htim->Init);
    htim->State = HAL_TIM_STATE_READY;
    return HAL_OK;
  }
  return HAL_ERROR;
}


////>>0x08002404>>TIM_OC2_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_OC2_SetConfig(TIM_TypeDef *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  TIMx->CCER = TIMx->CCER & 0xffffffef;
  uVar2 = TIMx->CR2;
  uVar3 = OC_Config->OCMode;
  uVar1 = TIMx->CCER & 0xffffffdf | OC_Config->OCPolarity << 4;
  if (TIMx == (TIM_TypeDef *)0x40012c00) {
    uVar1 = (uVar1 & 0xffffff7f | OC_Config->OCNPolarity << 4) & 0xffffffbf;
    uVar2 = uVar2 & 0xfffff3ff | (OC_Config->OCIdleState | OC_Config->OCNIdleState) << 2;
  }
  TIMx->CR2 = uVar2;
  TIMx->CCMR1 = TIMx->CCMR1 & 0xffff8cff | uVar3 << 8;
  TIMx->CCR2 = OC_Config->Pulse;
  TIMx->CCER = uVar1;
  return;
}


////>>0x0800245c>>HAL_TIM_PWM_ConfigChannel>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_TIM_PWM_ConfigChannel(TIM_HandleTypeDef *htim,TIM_OC_InitTypeDef *sConfig,uint32_t Channel)

{
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar1;
  int extraout_r1_02;
  int iVar2;
  uint32_t uVar3;
  TIM_TypeDef *pTVar4;
  
  if (htim->Lock == HAL_LOCKED) {
    return HAL_BUSY;
  }
  htim->State = HAL_TIM_STATE_BUSY;
  htim->Lock = HAL_LOCKED;
  switch(Channel) {
  case 0:
    TIM_OC1_SetConfig(htim->Instance,sConfig);
    pTVar4 = htim->Instance;
    uVar1 = *(uint *)(extraout_r1 + 0x10);
    pTVar4->CCMR1 = pTVar4->CCMR1 | 8;
    pTVar4->CCMR1 = pTVar4->CCMR1 & 0xfffffffb;
    uVar3 = pTVar4->CCMR1 | uVar1;
    break;
  default:
    goto switchD_0800247a_caseD_1;
  case 4:
    TIM_OC2_SetConfig(htim->Instance,sConfig);
    pTVar4 = htim->Instance;
    iVar2 = *(int *)(extraout_r1_00 + 0x10);
    pTVar4->CCMR1 = pTVar4->CCMR1 | 0x800;
    pTVar4->CCMR1 = pTVar4->CCMR1 & 0xfffffbff;
    uVar3 = pTVar4->CCMR1 | iVar2 << 8;
    break;
  case 8:
    TIM_OC3_SetConfig(htim->Instance,sConfig);
    pTVar4 = htim->Instance;
    uVar1 = *(uint *)(extraout_r1_01 + 0x10);
    pTVar4->CCMR2 = pTVar4->CCMR2 | 8;
    pTVar4->CCMR2 = pTVar4->CCMR2 & 0xfffffffb;
    uVar3 = pTVar4->CCMR2 | uVar1;
    goto LAB_080024fa;
  case 0xc:
    TIM_OC4_SetConfig(htim->Instance,sConfig);
    pTVar4 = htim->Instance;
    iVar2 = *(int *)(extraout_r1_02 + 0x10);
    pTVar4->CCMR2 = pTVar4->CCMR2 | 0x800;
    pTVar4->CCMR2 = pTVar4->CCMR2 & 0xfffffbff;
    uVar3 = pTVar4->CCMR2 | iVar2 << 8;
LAB_080024fa:
    pTVar4->CCMR2 = uVar3;
    goto switchD_0800247a_caseD_1;
  }
  pTVar4->CCMR1 = uVar3;
switchD_0800247a_caseD_1:
  htim->State = HAL_TIM_STATE_READY;
  htim->Lock = HAL_UNLOCKED;
  return HAL_OK;
}


////>>0x08002520>>TIM_CCxChannelCmd>>////

/* WARNING: Unknown calling convention */

void TIM_CCxChannelCmd(TIM_TypeDef *TIMx,uint32_t Channel,uint32_t ChannelState)

{
  TIMx->CCER = TIMx->CCER & ~(1 << (Channel & 0xff));
  TIMx->CCER = ChannelState << (Channel & 0xff) | TIMx->CCER;
  return;
}


////>>0x08002538>>HAL_TIM_PWM_Start>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim,uint32_t Channel)

{
  uint32_t uVar1;
  TIM_TypeDef *pTVar2;
  
  TIM_CCxChannelCmd(htim->Instance,Channel,1);
  pTVar2 = htim->Instance;
  uVar1 = 0x40012c00;
  if (pTVar2 == (TIM_TypeDef *)0x40012c00) {
    uVar1 = uRam40012c44 | 0x8000;
  }
  if (pTVar2 == (TIM_TypeDef *)0x40012c00) {
    pTVar2->BDTR = uVar1;
  }
  pTVar2->CR1 = pTVar2->CR1 | 1;
  return HAL_OK;
}


////>>0x08002564>>HAL_TIMEx_ConfigBreakDeadTime>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_TIMEx_ConfigBreakDeadTime
          (TIM_HandleTypeDef *htim,TIM_BreakDeadTimeConfigTypeDef *sBreakDeadTimeConfig)

{
  HAL_StatusTypeDef HVar1;
  
  HVar1 = HAL_BUSY;
  if (htim->Lock != HAL_LOCKED) {
    htim->State = HAL_TIM_STATE_BUSY;
    htim->Instance->BDTR =
         sBreakDeadTimeConfig->OffStateRunMode | sBreakDeadTimeConfig->OffStateIDLEMode |
         sBreakDeadTimeConfig->LockLevel | sBreakDeadTimeConfig->DeadTime |
         sBreakDeadTimeConfig->BreakState | sBreakDeadTimeConfig->BreakPolarity |
         sBreakDeadTimeConfig->AutomaticOutput;
    htim->State = HAL_TIM_STATE_READY;
    HVar1 = HAL_OK;
    htim->Lock = HAL_UNLOCKED;
  }
  return HVar1;
}


////>>0x080025a4>>HAL_TIMEx_MasterConfigSynchronization>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_TIMEx_MasterConfigSynchronization
          (TIM_HandleTypeDef *htim,TIM_MasterConfigTypeDef *sMasterConfig)

{
  uint uVar1;
  HAL_StatusTypeDef HVar2;
  TIM_TypeDef *pTVar3;
  uint uVar4;
  
  HVar2 = HAL_BUSY;
  if (htim->Lock != HAL_LOCKED) {
    htim->State = HAL_TIM_STATE_BUSY;
    pTVar3 = htim->Instance;
    uVar4 = sMasterConfig->MasterOutputTrigger;
    uVar1 = sMasterConfig->MasterSlaveMode;
    pTVar3->CR2 = pTVar3->CR2 & 0xffffff8f;
    pTVar3->CR2 = pTVar3->CR2 | uVar4;
    pTVar3->SMCR = pTVar3->SMCR & 0xffffff7f;
    pTVar3->SMCR = pTVar3->SMCR | uVar1;
    htim->State = HAL_TIM_STATE_READY;
    HVar2 = HAL_OK;
    htim->Lock = HAL_UNLOCKED;
  }
  return HVar2;
}


////>>0x080025e8>>UART_SetConfig>>////

/* WARNING: Unknown calling convention */

void UART_SetConfig(UART_HandleTypeDef *huart)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  USART_TypeDef *pUVar7;
  
  pUVar7 = huart->Instance;
  uVar3 = (huart->Init).Parity;
  pUVar7->CR2 = pUVar7->CR2 & 0xffffcfff | (huart->Init).StopBits;
  pUVar7->CR1 = (huart->Init).WordLength | uVar3 | (huart->Init).Mode | pUVar7->CR1 & 0xffffe9f3;
  pUVar7->CR3 = pUVar7->CR3 & 0xfffffcff | (huart->Init).HwFlowCtl;
  if (pUVar7 == (USART_TypeDef *)0x40013800) {
    uVar1 = HAL_RCC_GetPCLK2Freq();
    iVar4 = (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)((huart->Init).BaudRate << 2)) / 100);
    uVar1 = HAL_RCC_GetPCLK2Freq();
    uVar5 = (huart->Init).BaudRate;
    uVar2 = HAL_RCC_GetPCLK2Freq();
    iVar6 = (uVar1 * 0x19) / (uVar5 << 2) +
            (int)(((ulonglong)(uVar2 * 0x19) / (ulonglong)((huart->Init).BaudRate << 2)) / 100) *
            -100;
    uVar1 = HAL_RCC_GetPCLK2Freq();
    uVar3 = (uVar1 * 0x19) / ((huart->Init).BaudRate << 2);
    uVar1 = HAL_RCC_GetPCLK2Freq();
  }
  else {
    uVar1 = HAL_RCC_GetPCLK1Freq();
    iVar4 = (int)(((ulonglong)(uVar1 * 0x19) / (ulonglong)((huart->Init).BaudRate << 2)) / 100);
    uVar1 = HAL_RCC_GetPCLK1Freq();
    uVar5 = (huart->Init).BaudRate;
    uVar2 = HAL_RCC_GetPCLK1Freq();
    iVar6 = (uVar1 * 0x19) / (uVar5 << 2) +
            (int)(((ulonglong)(uVar2 * 0x19) / (ulonglong)((huart->Init).BaudRate << 2)) / 100) *
            -100;
    uVar1 = HAL_RCC_GetPCLK1Freq();
    uVar3 = (uVar1 * 0x19) / ((huart->Init).BaudRate << 2);
    uVar1 = HAL_RCC_GetPCLK1Freq();
  }
  pUVar7->BRR = (((uVar3 + (int)(((ulonglong)(uVar1 * 0x19) /
                                 (ulonglong)((huart->Init).BaudRate << 2)) / 100) * -100) * 0x10 +
                 0x32) / 100 & 0xf | (iVar6 * 0x10 + 0x32U) / 100 & 0xf0) + iVar4 * 0x10;
  return;
}


////>>0x08002724>>HAL_UART_Init>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart)

{
  USART_TypeDef *pUVar1;
  
  if (huart != (UART_HandleTypeDef *)0x0) {
    if (huart->State == HAL_UART_STATE_RESET) {
      huart->Lock = HAL_UNLOCKED;
      HAL_UART_MspInit(huart);
    }
    huart->State = HAL_UART_STATE_BUSY;
    huart->Instance->CR1 = huart->Instance->CR1 & 0xffffdfff;
    UART_SetConfig(huart);
    pUVar1 = huart->Instance;
    pUVar1->CR2 = pUVar1->CR2 & 0xffffb7ff;
    pUVar1->CR3 = pUVar1->CR3 & 0xffffffd5;
    pUVar1->CR1 = pUVar1->CR1 | 0x2000;
    huart->ErrorCode = 0;
    huart->State = HAL_UART_STATE_READY;
    return HAL_OK;
  }
  return HAL_ERROR;
}


////>>0x0800277c>>HAL_UART_Transmit>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef
HAL_UART_Transmit(UART_HandleTypeDef *huart,uint8_t *pData,uint16_t Size,uint32_t Timeout)

{
  uint32_t uVar1;
  uint32_t uVar2;
  HAL_UART_StateTypeDef HVar3;
  USART_TypeDef *pUVar4;
  uint16_t *tmp;
  
  if ((huart->State == HAL_UART_STATE_READY) || (huart->State == HAL_UART_STATE_BUSY_RX)) {
    if ((pData == (uint8_t *)0x0) || (Size == 0)) {
      return HAL_ERROR;
    }
    if (huart->Lock != HAL_LOCKED) {
      huart->Lock = HAL_LOCKED;
      huart->ErrorCode = 0;
      huart->TxXferSize = Size;
      if (huart->State == HAL_UART_STATE_BUSY_RX) {
        HVar3 = HAL_UART_STATE_BUSY_TX_RX;
      }
      else {
        HVar3 = HAL_UART_STATE_BUSY_TX;
      }
      huart->TxXferCount = Size;
      huart->State = HVar3;
LAB_080027c4:
      if (huart->TxXferCount == 0) {
        uVar1 = HAL_GetTick();
        do {
          do {
            if ((int)(huart->Instance->SR << 0x19) < 0) {
              if (huart->State == HAL_UART_STATE_BUSY_TX_RX) {
                HVar3 = HAL_UART_STATE_BUSY_RX;
              }
              else {
                HVar3 = HAL_UART_STATE_READY;
              }
              huart->State = HVar3;
              huart->Lock = HAL_UNLOCKED;
              return HAL_OK;
            }
          } while (Timeout == 0xffffffff);
        } while ((Timeout != 0) && (uVar2 = HAL_GetTick(), uVar2 - uVar1 <= Timeout));
      }
      else {
        huart->TxXferCount = huart->TxXferCount - 1;
        if ((huart->Init).WordLength == 0x1000) {
          uVar1 = HAL_GetTick();
          do {
            do {
              if ((int)(huart->Instance->SR << 0x18) < 0) {
                huart->Instance->DR = *(ushort *)pData & 0x1ff;
                if ((huart->Init).Parity == 0) {
                  pData = (uint8_t *)((int)pData + 2);
                }
                else {
LAB_08002812:
                  pData = (uint8_t *)((int)pData + 1);
                }
                goto LAB_080027c4;
              }
            } while (Timeout == 0xffffffff);
          } while ((Timeout != 0) && (uVar2 = HAL_GetTick(), uVar2 - uVar1 <= Timeout));
        }
        else {
          uVar1 = HAL_GetTick();
          do {
            do {
              if ((int)(huart->Instance->SR << 0x18) < 0) {
                huart->Instance->DR = (uint)*pData;
                goto LAB_08002812;
              }
            } while (Timeout == 0xffffffff);
          } while ((Timeout != 0) && (uVar2 = HAL_GetTick(), uVar2 - uVar1 <= Timeout));
        }
      }
      pUVar4 = huart->Instance;
      pUVar4->CR1 = pUVar4->CR1 & 0xffffff7f;
      pUVar4->CR1 = pUVar4->CR1 & 0xffffffdf;
      pUVar4->CR1 = pUVar4->CR1 & 0xfffffeff;
      pUVar4->CR3 = pUVar4->CR3 & 0xfffffffe;
      huart->State = HAL_UART_STATE_READY;
      huart->Lock = HAL_UNLOCKED;
      return HAL_TIMEOUT;
    }
  }
  return HAL_BUSY;
}


////>>0x080028a6>>HAL_UART_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart,uint8_t *pData,uint16_t Size)

{
  HAL_UART_StateTypeDef HVar1;
  uint uVar2;
  USART_TypeDef *pUVar3;
  
  if ((huart->State == HAL_UART_STATE_READY) || (huart->State == HAL_UART_STATE_BUSY_TX)) {
    if ((pData == (uint8_t *)0x0) || (Size == 0)) {
      return HAL_ERROR;
    }
    if (huart->Lock != HAL_LOCKED) {
      huart->Lock = HAL_LOCKED;
      huart->ErrorCode = 0;
      huart->RxXferSize = Size;
      huart->RxXferCount = Size;
      huart->Lock = HAL_UNLOCKED;
      if (huart->State == HAL_UART_STATE_BUSY_TX) {
        HVar1 = HAL_UART_STATE_BUSY_TX_RX;
      }
      else {
        HVar1 = HAL_UART_STATE_BUSY_RX;
      }
      pUVar3 = huart->Instance;
      huart->State = HVar1;
      uVar2 = pUVar3->CR1;
      huart->pRxBuffPtr = pData;
      pUVar3->CR1 = uVar2 | 0x100;
      pUVar3->CR3 = pUVar3->CR3 | 1;
      pUVar3->CR1 = pUVar3->CR1 | 0x20;
      return HAL_OK;
    }
  }
  return HAL_BUSY;
}


////>>0x0800290a>>HAL_UART_TxCpltCallback>>////

void HAL_UART_TxCpltCallback(void)

{
  return;
}


////>>0x0800290c>>UART_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef UART_Receive_IT(UART_HandleTypeDef *huart)

{
  uint32_t uVar1;
  byte bVar2;
  USART_TypeDef *pUVar3;
  uint16_t uVar4;
  ushort *puVar5;
  uint16_t *tmp;
  ushort *puVar6;
  bool bVar7;
  
  if ((huart->State & 0xef) != 0x22) {
    return HAL_BUSY;
  }
  uVar1 = (huart->Init).Parity;
  pUVar3 = huart->Instance;
  puVar5 = (ushort *)huart->pRxBuffPtr;
  if ((huart->Init).WordLength == 0x1000) {
    if (uVar1 == 0) {
      puVar6 = puVar5 + 1;
      *puVar5 = (ushort)((pUVar3->DR << 0x17) >> 0x17);
    }
    else {
      puVar6 = (ushort *)((int)puVar5 + 1);
      *puVar5 = (ushort)pUVar3->DR & 0xff;
    }
    huart->pRxBuffPtr = (uint8_t *)puVar6;
  }
  else {
    if (uVar1 == 0) {
      bVar2 = (byte)pUVar3->DR;
      huart->pRxBuffPtr = (uint8_t *)((int)puVar5 + 1);
    }
    else {
      uVar1 = pUVar3->DR;
      huart->pRxBuffPtr = (uint8_t *)((int)puVar5 + 1);
      bVar2 = (byte)uVar1 & 0x7f;
    }
    *(byte *)puVar5 = bVar2;
  }
  uVar4 = huart->RxXferCount - 1;
  huart->RxXferCount = uVar4;
  if (uVar4 == 0) {
    pUVar3 = huart->Instance;
    pUVar3->CR1 = pUVar3->CR1 & 0xffffffdf;
    bVar7 = huart->State != HAL_UART_STATE_BUSY_TX_RX;
    if (bVar7) {
      uVar1 = pUVar3->CR1 & 0xfffffeff;
    }
    else {
      pUVar3 = (USART_TypeDef *)0x12;
      uVar1 = 0x32;
    }
    if (bVar7) {
      pUVar3->CR1 = uVar1;
      uVar1 = pUVar3->CR3 & 0xfffffffe;
    }
    if (bVar7) {
      pUVar3->CR3 = uVar1;
      pUVar3 = (USART_TypeDef *)0x1;
    }
    huart->State = (HAL_UART_StateTypeDef)pUVar3;
    HAL_UART_RxCpltCallback(huart);
  }
  return HAL_OK;
}


////>>0x08002998>>HAL_UART_ErrorCallback>>////

/* WARNING: Unknown calling convention */

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)

{
  return;
}


////>>0x0800299a>>HAL_UART_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_UART_IRQHandler(UART_HandleTypeDef *huart)

{
  uint uVar1;
  uint32_t cr1its;
  uint16_t uVar2;
  uint uVar3;
  uint32_t isrflags;
  ushort *puVar4;
  uint16_t *tmp;
  HAL_UART_StateTypeDef HVar5;
  USART_TypeDef *pUVar6;
  uint32_t uVar7;
  uint32_t cr3its;
  uint uVar8;
  bool bVar9;
  
  pUVar6 = huart->Instance;
  uVar3 = pUVar6->SR;
  uVar1 = pUVar6->CR1;
  if ((uVar3 & 0xf) == 0) {
    if (((int)(uVar3 << 0x1a) < 0) && ((int)(uVar1 << 0x1a) < 0)) {
      UART_Receive_IT(huart);
      return;
    }
  }
  else {
    uVar8 = pUVar6->CR3 & 1;
    if ((uVar8 != 0) || ((uVar1 & 0x120) != 0)) {
      uVar7 = uVar3 << 0x1f;
      if ((int)uVar7 < 0) {
        bVar9 = (int)(uVar1 << 0x17) < 0;
        if (bVar9) {
          uVar7 = huart->ErrorCode | 1;
        }
        if (bVar9) {
          huart->ErrorCode = uVar7;
        }
      }
      if (((int)(uVar3 << 0x1d) < 0) && (uVar8 != 0)) {
        huart->ErrorCode = huart->ErrorCode | 2;
      }
      if (((int)(uVar3 << 0x1e) < 0) && (uVar8 != 0)) {
        huart->ErrorCode = huart->ErrorCode | 4;
      }
      if (((int)(uVar3 << 0x1c) < 0) && (uVar8 != 0)) {
        huart->ErrorCode = huart->ErrorCode | 8;
      }
      if (huart->ErrorCode == 0) {
        return;
      }
      if (((int)(uVar3 << 0x1a) < 0) && ((int)(uVar1 << 0x1a) < 0)) {
        UART_Receive_IT(huart);
      }
      pUVar6 = huart->Instance;
      if ((-1 < (int)(huart->ErrorCode << 0x1c)) && ((pUVar6->CR3 & 0x40) == 0)) {
        HAL_UART_ErrorCallback(huart);
        huart->ErrorCode = 0;
        return;
      }
      pUVar6->CR1 = pUVar6->CR1 & 0xfffffedf;
      pUVar6->CR3 = pUVar6->CR3 & 0xfffffffe;
      huart->State = HAL_UART_STATE_READY;
      HAL_UART_ErrorCallback(huart);
      return;
    }
  }
  if (((int)(uVar3 << 0x18) < 0) && ((int)(uVar1 << 0x18) < 0)) {
    if ((huart->State & 0xdf) == 0x12) {
      puVar4 = (ushort *)huart->pTxBuffPtr;
      if ((huart->Init).WordLength == 0x1000) {
        pUVar6->DR = *puVar4 & 0x1ff;
        if ((huart->Init).Parity == 0) {
          puVar4 = puVar4 + 1;
        }
        else {
          puVar4 = (ushort *)((int)puVar4 + 1);
        }
        huart->pTxBuffPtr = (uint8_t *)puVar4;
      }
      else {
        huart->pTxBuffPtr = (byte *)((int)puVar4 + 1);
        pUVar6->DR = (uint)*(byte *)puVar4;
      }
      uVar2 = huart->TxXferCount - 1;
      huart->TxXferCount = uVar2;
      if (uVar2 == 0) {
        pUVar6->CR1 = pUVar6->CR1 & 0xffffff7f;
        pUVar6->CR1 = pUVar6->CR1 | 0x40;
        return;
      }
    }
  }
  else if (((int)(uVar3 << 0x19) < 0) && ((int)(uVar1 << 0x19) < 0)) {
    pUVar6->CR1 = pUVar6->CR1 & 0xffffffbf;
    if (huart->State == HAL_UART_STATE_BUSY_TX_RX) {
      HVar5 = HAL_UART_STATE_BUSY_RX;
    }
    else {
      HVar5 = HAL_UART_STATE_READY;
    }
    huart->State = HVar5;
    HAL_UART_TxCpltCallback(huart);
  }
  return;
}


////>>0x08002ad0>>MPU9250_Init>>////

/* WARNING: Unknown calling convention */

void MPU9250_Init(void)

{
  I2C_ReadByte(0xd0,0x75,"../Src/MPU9250.c",0x3b);
  I2C_WriteByte(0xd0,0x6b,0x80,'\x01');
  I2C_WriteByte(0xd0,0x6b,'\x01','\x01');
  I2C_WriteByte(0xd0,0x6c,'\0','\x01');
  I2C_WriteByte(0xd0,0x19,'\0','\x01');
  I2C_WriteByte(0xd0,0x1d,'\x03','\x01');
  I2C_WriteByte(0xd0,0x1a,'\x03','\x01');
  I2C_WriteByte(0xd0,0x1b,'\x10','\x01');
  I2C_WriteByte(0xd0,0x1c,'\b','\x01');
  return;
}


////>>0x08002b48>>MPU9250_ReadAccelData>>////

/* WARNING: Unknown calling convention */

void MPU9250_ReadAccelData(void)

{
  undefined4 uVar1;
  uint in_r3;
  int iVar2;
  int iVar3;
  uint8_t raw_data [6];
  
  raw_data[0] = '\0';
  raw_data[1] = '\0';
  raw_data[2] = '\0';
  raw_data[3] = '\0';
  stack0xffffffec = in_r3 & 0xffff0000;
  I2C_ReadByteArray(0xd0,0x3b,raw_data,6,"../Src/MPU9250.c",0x58);
  accelRaw.y = CONCAT11(raw_data[2],raw_data[3]);
  accelRaw.x = CONCAT11(raw_data[0],raw_data[1]);
  accelRaw.z = CONCAT11(raw_data[4],raw_data[5]);
  iVar3 = (int)accelRaw.y;
  iVar2 = (int)accelRaw.z;
  uVar1 = __floatsisf();
  uVar1 = __aeabi_fmul(uVar1,0x40800000);
  accelData.x = (float)__aeabi_fmul(uVar1,0x38000000);
  uVar1 = __floatsisf(iVar3);
  uVar1 = __aeabi_fmul(uVar1,0x40800000);
  accelData.y = (float)__aeabi_fmul(uVar1,0x38000000);
  uVar1 = __floatsisf(iVar2);
  uVar1 = __aeabi_fmul(uVar1,0x40800000);
  accelData.z = (float)__aeabi_fmul(uVar1,0x38000000);
  return;
}


////>>0x08002bf0>>MPU9250_ReadGyroData>>////

/* WARNING: Unknown calling convention */

void MPU9250_ReadGyroData(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint8_t raw_data [6];
  
  raw_data[0] = '\0';
  raw_data[1] = '\0';
  raw_data[2] = '\0';
  raw_data[3] = '\0';
  raw_data[4] = '\0';
  raw_data[5] = '\0';
  I2C_ReadByteArray(0xd0,0x43,raw_data,6,"../Src/MPU9250.c",0x7b);
  gyroRaw.y = CONCAT11(raw_data[2],raw_data[3]);
  gyroRaw.x = CONCAT11(raw_data[0],raw_data[1]);
  gyroRaw.z = CONCAT11(raw_data[4],raw_data[5]);
  iVar3 = (int)gyroRaw.y;
  iVar2 = (int)gyroRaw.z;
  uVar1 = __floatsisf();
  uVar1 = __aeabi_fmul(uVar1,0x447a0000);
  uVar1 = __aeabi_fmul(uVar1,0x38000000);
  gyroData.x = (float)__aeabi_fsub(uVar1,gyroBias.x);
  uVar1 = __floatsisf(iVar3);
  uVar1 = __aeabi_fmul(uVar1,0x447a0000);
  uVar1 = __aeabi_fmul(uVar1,0x38000000);
  gyroData.y = (float)__aeabi_fsub(uVar1,gyroBias.y);
  uVar1 = __floatsisf(iVar2);
  uVar1 = __aeabi_fmul(uVar1,0x447a0000);
  uVar1 = __aeabi_fmul(uVar1,0x38000000);
  gyroData.z = (float)__aeabi_fsub(uVar1,gyroBias.z);
  return;
}


////>>0x08002cb0>>AK8963_Init>>////

/* WARNING: Unknown calling convention */

void AK8963_Init(void)

{
  undefined4 uVar1;
  uint in_r3;
  uint8_t rawData [3];
  
  _rawData = in_r3;
  I2C_WriteByte(0xd0,0x37,'\"','\x01');
  I2C_WriteByte(0xd0,0x6a,'\x01','\x01');
  I2C_ReadByte(0x18,0,"../Src/MPU9250.c",0xad);
  I2C_WriteByte(0x18,0xb,'\x01','\x01');
  I2C_WriteByte(0x18,10,'\0','\x01');
  I2C_WriteByte(0x18,10,'\x0f','\x01');
  I2C_ReadByteArray(0x18,0x10,rawData,3,"../Src/MPU9250.c",0xb6);
  uVar1 = __floatsisf((_rawData & 0xff) - 0x80);
  uVar1 = __aeabi_fmul(uVar1,0x3b800000);
  magCalib.x = (float)__addsf3(uVar1,0x3f800000);
  uVar1 = __floatsisf((_rawData >> 8 & 0xff) - 0x80);
  uVar1 = __aeabi_fmul(uVar1,0x3b800000);
  magCalib.y = (float)__addsf3(uVar1,0x3f800000);
  uVar1 = __floatsisf(rawData[2] - 0x80);
  uVar1 = __aeabi_fmul(uVar1,0x3b800000);
  magCalib.z = (float)__addsf3(uVar1,0x3f800000);
  I2C_WriteByte(0x18,10,'\0','\x01');
  I2C_WriteByte(0x18,10,'\x16','\x01');
  return;
}


////>>0x08002d88>>AK8963_ReadData>>////

/* WARNING: Unknown calling convention */

void AK8963_ReadData(void)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  int iVar4;
  int iVar5;
  int16_t local_28;
  undefined uStack_26;
  undefined uStack_25;
  undefined local_24;
  undefined local_23;
  uint8_t OVF;
  undefined uStack_21;
  
  uStack_21 = (undefined)((uint)in_r3 >> 0x18);
  local_28 = 0;
  uStack_26 = 0;
  uStack_25 = 0;
  local_24 = 0;
  local_23 = 0;
  OVF = '\0';
  bVar2 = I2C_ReadByte(0x18,2,"../Src/MPU9250.c",0xd7);
  if ((int)((uint)bVar2 << 0x1f) < 0) {
    I2C_ReadByteArray(0x18,3,(uint8_t *)&local_28,7,"../Src/MPU9250.c",0xda);
    fVar1 = mRes;
    if ((int)((uint)OVF << 0x1c) < 0) {
      msp_txf_status.i2c_errors_count = msp_txf_status.i2c_errors_count + 1;
    }
    else {
      magRaw.y = CONCAT11(uStack_25,uStack_26);
      magRaw.z = CONCAT11(local_23,local_24);
      iVar5 = (int)magRaw.y;
      iVar4 = (int)magRaw.z;
      magRaw.x = local_28;
      uVar3 = __floatsisf();
      uVar3 = __aeabi_fmul(uVar3,fVar1);
      uVar3 = __aeabi_fmul(uVar3,magCalib.x);
      uVar3 = __aeabi_fsub(uVar3,magBias.x);
      magData.x = (float)__aeabi_fmul(uVar3,magScale.x);
      uVar3 = __floatsisf(iVar5);
      uVar3 = __aeabi_fmul(uVar3,fVar1);
      uVar3 = __aeabi_fmul(uVar3,magCalib.y);
      uVar3 = __aeabi_fsub(uVar3,magBias.y);
      magData.y = (float)__aeabi_fmul(uVar3,magScale.y);
      uVar3 = __floatsisf(iVar4);
      uVar3 = __aeabi_fmul(uVar3,fVar1);
      uVar3 = __aeabi_fmul(uVar3,magCalib.z);
      uVar3 = __aeabi_fsub(uVar3,magBias.z);
      magData.z = (float)__aeabi_fmul(uVar3,magScale.z);
    }
  }
  return;
}


////>>0x08002ea0>>IMU_Init>>////

/* WARNING: Unknown calling convention */

void IMU_Init(void)

{
  MPU9250_Init();
  AK8963_Init();
  MadgwickSetBeta(0.6);
  MadgwickSetDelta(0.0);
  return;
}


////>>0x08002ec0>>AHRS_GetPitch>>////

/* WARNING: Unknown calling convention */

float AHRS_GetPitch(void)

{
  float fVar1;
  
  fVar1 = lowPassFilter(&lpf_pitch,AHRS_Angle[1]);
  return fVar1;
}


////>>0x08002ed4>>AHRS_GetRoll>>////

/* WARNING: Unknown calling convention */

float AHRS_GetRoll(void)

{
  float fVar1;
  
  fVar1 = lowPassFilter(&lpf_roll,AHRS_Angle[0]);
  return fVar1;
}


////>>0x08002ee8>>AHRS_GetYaw>>////

/* WARNING: Unknown calling convention */

float AHRS_GetYaw(void)

{
  int iVar1;
  float angle;
  float fVar2;
  
  fVar2 = AHRS_Angle[2];
  iVar1 = __aeabi_fcmpge(AHRS_Angle[2],0xc3340000);
  if ((iVar1 != 0) && (iVar1 = __aeabi_fcmplt(fVar2,0x42b40000), iVar1 != 0)) {
    fVar2 = (float)__addsf3(fVar2,0x42b40000);
    return fVar2;
  }
  fVar2 = (float)__aeabi_fsub(fVar2,0x43870000);
  return fVar2;
}


////>>0x08002f28>>AHRS_ComputeAngles>>////

/* WARNING: Unknown calling convention */

void AHRS_ComputeAngles(void)

{
  undefined4 uVar1;
  float _deltat;
  
  MPU9250_ReadAccelData();
  MPU9250_ReadGyroData();
  AK8963_ReadData();
  AHRS_timeNow = micros();
  uVar1 = __floatunsisf(AHRS_timeNow - AHRS_lastUpdate);
  _deltat = (float)__aeabi_fdiv(uVar1,0x447a0000);
  MadgwickSetDelta(_deltat);
  AHRS_lastUpdate = AHRS_timeNow;
  MadgwickQuaternionUpdate
            ((float)((int)accelData.y + -0x80000000),(float)((int)accelData.x + -0x80000000),
             accelData.z,gyroData.y,gyroData.x,(float)((int)gyroData.z + -0x80000000),magData.x,
             magData.y,magData.z,AHRS_Angle);
  msp_txf_raw_imu.accx = (int16_t)((uint)(int)accelRaw.x / 100);
  msp_txf_raw_imu.accz = (int16_t)((uint)(int)accelRaw.z / 100);
  msp_txf_raw_imu.accy = (int16_t)((uint)(int)accelRaw.y / 100);
  msp_txf_raw_imu.gyrx = gyroRaw.x;
  msp_txf_raw_imu.gyry = gyroRaw.y;
  msp_txf_raw_imu.gyrz = gyroRaw.z;
  msp_txf_raw_imu.magx = magRaw.x;
  msp_txf_raw_imu.magy = magRaw.y;
  msp_txf_raw_imu.magz = magRaw.z;
  AHRS_GetRoll();
  __aeabi_fmul();
  msp_txf_attitude.angx = __aeabi_f2iz();
  AHRS_GetPitch();
  __aeabi_fmul();
  msp_txf_attitude.angy = __aeabi_f2iz();
  AHRS_GetYaw();
  msp_txf_attitude.heading = __aeabi_f2iz();
  return;
}


////>>0x08003034>>MS5611_ReadADC>>////

/* WARNING: Unknown calling convention */

uint32_t MS5611_ReadADC(void)

{
  undefined4 in_r3;
  uint8_t rxbuf [3];
  
  _rxbuf = in_r3;
  I2C_ReadBytes(0xee,0,rxbuf,3,"../Src/MS5611.c",0x8c);
  return (uint)CONCAT12(rxbuf[0],CONCAT11(rxbuf[1],rxbuf[2]));
}


////>>0x08003068>>MS5611_GetFilteredAltitude>>////

/* WARNING: Unknown calling convention */

float MS5611_GetFilteredAltitude(void)

{
  float in_s0;
  
  return in_s0;
}


////>>0x08003078>>MS5611_Update>>////

/* WARNING: Unknown calling convention */

void MS5611_Update(void)

{
  float *pfVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  uint32_t uVar8;
  undefined4 extraout_r1;
  uint uVar9;
  undefined4 unaff_r4;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int iVar14;
  int32_t TEMP;
  int iVar15;
  int iVar16;
  int32_t dT;
  bool bVar17;
  undefined8 uVar18;
  
  if ((TEMP_READY != '\0') && (PRESSURE_READY != '\0')) {
    iVar16 = MS5611_RawTemperature + (uint)MS5611_Coefficients[5] * -0x100;
    uVar9 = (uint)((longlong)(int)(uint)MS5611_Coefficients[6] * (longlong)iVar16) >> 0x17 |
            (int)((ulonglong)((longlong)(int)(uint)MS5611_Coefficients[6] * (longlong)iVar16) >>
                 0x20) << 9;
    uVar10 = (uint)((longlong)(int)(uint)MS5611_Coefficients[4] * (longlong)iVar16 >> 7);
    uVar11 = uVar10 + (uint)MS5611_Coefficients[2] * 0x10000;
    uVar4 = (uint)((ulonglong)((longlong)(int)(uint)MS5611_Coefficients[3] * (longlong)iVar16) >> 8)
    ;
    iVar14 = uVar9 + 2000;
    uVar5 = uVar4 + (uint)MS5611_Coefficients[1] * 0x8000;
    bVar17 = (int)uVar9 < 0;
    if (1999 < iVar14) {
      uVar9 = 0;
    }
    uVar3 = uVar9;
    if (bVar17 != SBORROW4(iVar14,2000)) {
      iVar15 = uVar9 * uVar9 * 5;
      uVar9 = iVar15 >> 2;
      uVar3 = iVar15 >> 1;
    }
    uVar12 = uVar11 - uVar3;
    lVar2 = (ulonglong)(uVar5 - uVar9) * (ulonglong)MS5611_RawPressure;
    iVar15 = MS5611_RawPressure *
             ((((int)((longlong)(int)(uint)MS5611_Coefficients[3] * (longlong)iVar16 >> 0x28) +
               (uint)CARRY4(uVar4,(uint)MS5611_Coefficients[1] * 0x8000)) - ((int)uVar9 >> 0x1f)) -
             (uint)(uVar5 < uVar9)) + (int)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2 >> 0x15 | iVar15 * 0x800;
    uVar6 = __floatsisf(uVar4 - uVar12 >> 0xf |
                        (((iVar15 >> 0x15) -
                         ((((int)((longlong)(int)(uint)MS5611_Coefficients[4] * (longlong)iVar16 >>
                                 0x27) + (uint)CARRY4(uVar10,(uint)MS5611_Coefficients[2] * 0x10000)
                           ) - ((int)uVar3 >> 0x1f)) - (uint)(uVar11 < uVar3))) -
                        (uint)(uVar4 < uVar12)) * 0x20000);
    fVar7 = (float)__aeabi_fdiv(uVar6,0x42c80000);
    MS5611_CompensatedPressure = fVar7;
    uVar6 = __floatsisf(iVar14);
    MS5611_CompensatedTemperature = (float)__aeabi_fdiv(uVar6,0x42c80000);
    __aeabi_fdiv(fVar7,0x447d5000);
    uVar6 = __aeabi_f2d();
    pow((double)CONCAT44(unaff_r5,unaff_r4),(double)CONCAT44(unaff_r7,unaff_r6));
    uVar18 = __subdf3(0,0x3ff00000,uVar6,extraout_r1);
    __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0,0x40e5a540);
    fVar7 = (float)__truncdfsf2();
    uVar6 = 0;
    pfVar13 = alt_filter;
    MS5611_Altitude = fVar7;
    do {
      pfVar1 = pfVar13 + 1;
      *pfVar13 = *pfVar1;
      uVar6 = __addsf3(uVar6);
      pfVar13 = pfVar1;
    } while (pfVar1 != alt_filter + 0x13);
    alt_filter[19] = fVar7;
    uVar6 = __addsf3(uVar6,fVar7);
    MS5611_FilteredAltitude = (float)__aeabi_fdiv(uVar6,0x41a00000);
    iVar14 = __aeabi_f2iz();
    msp_txf_altitude.est_alt = iVar14 * 100;
    TEMP_READY = '\0';
    PRESSURE_READY = '\0';
    I2C_WriteByte(0xee,MS5611_OSR + 0x50,'\x01','\0');
    temp_time = millis();
  }
  uVar8 = millis();
  if (((10 < uVar8 - temp_time) && (TEMP_READY == '\0')) && (PRESSURE_READY == '\0')) {
    MS5611_RawTemperature = MS5611_ReadADC();
    TEMP_READY = '\x01';
    I2C_WriteByte(0xee,MS5611_OSR + 0x40,'\x01','\0');
    pressure_time = millis();
  }
  uVar8 = millis();
  if (((10 < uVar8 - pressure_time) && (TEMP_READY != '\0')) && (PRESSURE_READY == '\0')) {
    MS5611_RawPressure = MS5611_ReadADC();
    PRESSURE_READY = '\x01';
  }
  return;
}


////>>0x08003298>>MS5611_Init>>////

/* WARNING: Unknown calling convention */

void MS5611_Init(void)

{
  int i;
  int iVar1;
  uint8_t rxbuf [2];
  
  iVar1 = 0;
  I2C_WriteByte(0xee,0x1e,'\x01','\x01');
  delay_ms(10);
  MS5611_OSR = '\b';
  do {
    rxbuf[0] = '\0';
    rxbuf[1] = '\0';
    I2C_ReadByteArray(0xee,(short)iVar1 + 0xa0,rxbuf,2,"../Src/MS5611.c",0x7c);
    *(ushort *)((int)MS5611_Coefficients + iVar1) = CONCAT11(rxbuf[0],rxbuf[1]);
    iVar1 = iVar1 + 2;
  } while (iVar1 != 0x10);
  iVar1 = 0;
  do {
    alt_filter[iVar1] = 0.0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x14);
  return;
}


////>>0x08003314>>MadgwickSetBeta>>////

/* WARNING: Unknown calling convention */

void MadgwickSetBeta(float _beta)

{
  beta = _beta;
  return;
}


////>>0x08003320>>MadgwickSetDelta>>////

/* WARNING: Unknown calling convention */

void MadgwickSetDelta(float _deltat)

{
  deltat = _deltat;
  return;
}


////>>0x08003330>>MadgwickQuaternionUpdate>>////

/* WARNING: Unknown calling convention */

void MadgwickQuaternionUpdate
               (float ax,float ay,float az,float gx,float gy,float gz,float mx,float my,float mz,
               float *angle)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float norm;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  float _2q1mx;
  undefined4 uVar22;
  float _2q1my;
  undefined4 uVar23;
  float _2q1mz;
  undefined4 uVar24;
  float _2q2mx;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iVar28;
  float _2bx;
  float _2bz;
  float _4bz;
  float s1;
  float s2;
  float s3;
  float s4;
  float fVar29;
  float fVar30;
  float fVar31;
  float q1;
  float q2;
  float q4;
  float q3;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 in_stack_ffffff78;
  float fVar34;
  float hy;
  float hx;
  
  fVar31 = q[3];
  fVar30 = q[2];
  fVar29 = q[0];
  fVar34 = q[1];
  uVar3 = __aeabi_fmul(ax,ax);
  uVar4 = __aeabi_fmul(ay);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __aeabi_fmul(az);
  __addsf3(uVar3,uVar4);
  __aeabi_f2d();
  sqrt((double)CONCAT44(fVar34,in_stack_ffffff78));
  uVar3 = __truncdfsf2();
  norm = (float)__aeabi_fcmpeq(uVar3,0);
  if (norm == 0.0) {
    uVar4 = __aeabi_fmul(mx);
    uVar5 = __aeabi_fmul(my);
    uVar4 = __addsf3(uVar4,uVar5);
    uVar5 = __aeabi_fmul(mz);
    __addsf3(uVar4,uVar5);
    __aeabi_f2d();
    sqrt((double)CONCAT44(fVar34,in_stack_ffffff78));
    uVar4 = __truncdfsf2();
    iVar6 = __aeabi_fcmpeq(uVar4,0);
    if (iVar6 == 0) {
      uVar32 = __aeabi_f2d(gx);
      __muldf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0xa2529d39,0x3f91df46);
      uVar5 = __truncdfsf2();
      uVar32 = __aeabi_f2d(gy);
      __muldf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0xa2529d39,0x3f91df46);
      uVar7 = __truncdfsf2();
      uVar32 = __aeabi_f2d(gz);
      __muldf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0xa2529d39,0x3f91df46);
      uVar8 = __truncdfsf2();
      iVar6 = __addsf3(fVar29);
      uVar9 = __addsf3(fVar34);
      iVar10 = __addsf3(fVar30,fVar30);
      uVar11 = __addsf3(fVar31,fVar31);
      uVar12 = __aeabi_fmul(fVar29);
      uVar13 = __aeabi_fmul(fVar29,fVar34);
      uVar14 = __aeabi_fmul(fVar29,fVar30);
      uVar15 = __aeabi_fmul(fVar34);
      uVar16 = __aeabi_fmul(fVar34,fVar31);
      uVar17 = __aeabi_fmul(fVar30,fVar30);
      uVar18 = __aeabi_fmul(fVar31,fVar31);
      uVar3 = __aeabi_fdiv(0x3f800000,uVar3);
      uVar4 = __aeabi_fdiv(0x3f800000,uVar4);
      uVar19 = __aeabi_fmul(mx,uVar4);
      uVar20 = __aeabi_fmul(my,uVar4);
      uVar4 = __aeabi_fmul(mz,uVar4);
      iVar21 = __aeabi_fmul(iVar6,uVar19);
      uVar22 = __aeabi_fmul(iVar6,uVar20);
      uVar23 = __aeabi_fmul(iVar6,uVar4);
      uVar24 = __aeabi_fmul(uVar9,uVar19);
      uVar25 = __aeabi_fmul(uVar12,uVar19);
      uVar26 = __aeabi_fmul(fVar31,uVar22);
      uVar25 = __aeabi_fsub(uVar25,uVar26);
      uVar26 = __aeabi_fmul(fVar30,uVar23);
      uVar25 = __addsf3(uVar25,uVar26);
      uVar26 = __aeabi_fmul(uVar15,uVar19);
      uVar25 = __addsf3(uVar25,uVar26);
      uVar26 = __aeabi_fmul(uVar9,uVar20);
      uVar26 = __aeabi_fmul(uVar26,fVar30);
      uVar25 = __addsf3(uVar25,uVar26);
      uVar26 = __aeabi_fmul(uVar9,uVar4);
      uVar26 = __aeabi_fmul(uVar26,fVar31);
      uVar25 = __addsf3(uVar25,uVar26);
      uVar26 = __aeabi_fmul(uVar17,uVar19);
      uVar25 = __aeabi_fsub(uVar25,uVar26);
      uVar26 = __aeabi_fmul(uVar18,uVar19);
      uVar25 = __aeabi_fsub(uVar25,uVar26);
      uVar26 = __aeabi_fmul(fVar31,iVar21);
      uVar27 = __aeabi_fmul(uVar12,uVar20);
      uVar26 = __addsf3(uVar26,uVar27);
      uVar23 = __aeabi_fmul(fVar34,uVar23);
      uVar23 = __aeabi_fsub(uVar26,uVar23);
      uVar26 = __aeabi_fmul(fVar30,uVar24);
      uVar23 = __addsf3(uVar23,uVar26);
      uVar26 = __aeabi_fmul(uVar15,uVar20);
      uVar23 = __aeabi_fsub(uVar23,uVar26);
      uVar26 = __aeabi_fmul(uVar17,uVar20);
      uVar23 = __addsf3(uVar23,uVar26);
      uVar26 = __aeabi_fmul(iVar10,uVar4);
      uVar26 = __aeabi_fmul(uVar26,fVar31);
      uVar23 = __addsf3(uVar23,uVar26);
      uVar26 = __aeabi_fmul(uVar18,uVar20);
      uVar23 = __aeabi_fsub(uVar23,uVar26);
      uVar25 = __aeabi_fmul(uVar25,uVar25);
      uVar23 = __aeabi_fmul(uVar23,uVar23);
      __addsf3(uVar25,uVar23);
      __aeabi_f2d();
      sqrt((double)CONCAT44(fVar34,in_stack_ffffff78));
      iVar28 = __truncdfsf2();
      uVar23 = __aeabi_fmul(iVar21 + -0x80000000,fVar30);
      uVar22 = __aeabi_fmul(fVar34,uVar22);
      uVar22 = __addsf3(uVar23,uVar22);
      uVar12 = __aeabi_fmul(uVar12,uVar4);
      uVar12 = __addsf3(uVar22,uVar12);
      uVar22 = __aeabi_fmul(fVar31,uVar24);
      uVar12 = __addsf3(uVar12,uVar22);
      uVar22 = __aeabi_fmul(uVar15,uVar4);
      uVar12 = __aeabi_fsub(uVar12,uVar22);
      uVar22 = __aeabi_fmul(iVar10,uVar20);
      uVar22 = __aeabi_fmul(uVar22,fVar31);
      uVar12 = __addsf3(uVar12,uVar22);
      uVar22 = __aeabi_fmul(uVar17,uVar4);
      uVar12 = __aeabi_fsub(uVar12,uVar22);
      uVar22 = __aeabi_fmul(uVar18,uVar4);
      uVar12 = __addsf3(uVar12,uVar22);
      _2bz = (float)__addsf3(uVar12,uVar12);
      uVar22 = __addsf3(uVar16);
      uVar23 = __aeabi_fmul(fVar30,iVar6);
      uVar22 = __aeabi_fsub(uVar22,uVar23);
      uVar23 = __aeabi_fmul(ax,uVar3);
      uVar22 = __aeabi_fsub(uVar22,uVar23);
      uVar23 = __aeabi_fmul(fVar31,iVar10);
      uVar24 = __addsf3(uVar13);
      uVar23 = __addsf3(uVar23,uVar24);
      uVar24 = __aeabi_fmul(ay,uVar3);
      uVar23 = __aeabi_fsub(uVar23,uVar24);
      uVar24 = __aeabi_fmul(fVar30,uVar12);
      uVar25 = __aeabi_fsub(0x3f000000,uVar17);
      uVar18 = __aeabi_fsub(uVar25,uVar18);
      uVar18 = __aeabi_fmul(uVar18,iVar28);
      uVar25 = __aeabi_fsub(uVar16,uVar14);
      uVar25 = __aeabi_fmul(uVar25,uVar12);
      uVar18 = __addsf3(uVar18,uVar25);
      uVar18 = __aeabi_fsub(uVar18,uVar19);
      uVar19 = __aeabi_fmul(fVar34,uVar12);
      uVar25 = __aeabi_fmul(fVar34,fVar30);
      uVar26 = __aeabi_fmul(fVar29,fVar31);
      uVar25 = __aeabi_fsub(uVar25,uVar26);
      uVar25 = __aeabi_fmul(uVar25,iVar28);
      uVar26 = __aeabi_fmul(fVar30,fVar31);
      uVar13 = __addsf3(uVar26,uVar13);
      uVar13 = __aeabi_fmul(uVar13,uVar12);
      uVar13 = __addsf3(uVar25,uVar13);
      uVar13 = __aeabi_fsub(uVar13,uVar20);
      uVar20 = __aeabi_fmul(fVar30,iVar28);
      uVar25 = __aeabi_fsub(0x3f000000,uVar15);
      uVar25 = __aeabi_fsub(uVar25,uVar17);
      uVar25 = __aeabi_fmul(uVar25,uVar12);
      uVar14 = __addsf3(uVar14,uVar16);
      uVar14 = __aeabi_fmul(uVar14,iVar28);
      uVar14 = __addsf3(uVar25,uVar14);
      uVar4 = __aeabi_fsub(uVar14,uVar4);
      uVar14 = __aeabi_fmul(iVar10 + -0x80000000,uVar22);
      uVar16 = __aeabi_fmul(uVar9,uVar23);
      uVar14 = __addsf3(uVar14,uVar16);
      uVar16 = __aeabi_fmul(uVar24,uVar18);
      uVar14 = __aeabi_fsub(uVar14,uVar16);
      uVar16 = __aeabi_fmul(fVar31,iVar28 + -0x80000000);
      uVar16 = __addsf3(uVar16,uVar19);
      uVar16 = __aeabi_fmul(uVar16,uVar13);
      uVar14 = __addsf3(uVar14,uVar16);
      uVar16 = __aeabi_fmul(uVar20,uVar4);
      uVar14 = __addsf3(uVar14,uVar16);
      uVar15 = __addsf3(uVar15);
      uVar15 = __aeabi_fsub(0x3f800000,uVar15);
      uVar16 = __addsf3(uVar17);
      uVar15 = __aeabi_fsub(uVar15,uVar16);
      uVar3 = __aeabi_fmul(az,uVar3);
      uVar3 = __aeabi_fsub(uVar15,uVar3);
      uVar15 = __aeabi_fmul(fVar31,uVar12);
      uVar12 = __aeabi_fmul(fVar29,uVar12);
      uVar16 = __aeabi_fmul(uVar11,uVar22);
      uVar17 = __aeabi_fmul(iVar6,uVar23);
      uVar16 = __addsf3(uVar16,uVar17);
      uVar17 = __aeabi_fmul(fVar34,0x40800000);
      uVar17 = __aeabi_fmul(uVar17,uVar3);
      uVar16 = __aeabi_fsub(uVar16,uVar17);
      uVar17 = __aeabi_fmul(uVar18,uVar15);
      uVar16 = __addsf3(uVar16,uVar17);
      uVar17 = __addsf3(uVar20,uVar12);
      uVar17 = __aeabi_fmul(uVar17,uVar13);
      uVar16 = __addsf3(uVar16,uVar17);
      uVar17 = __aeabi_fmul(fVar31,iVar28);
      uVar20 = __aeabi_fmul(fVar34,_2bz);
      uVar17 = __aeabi_fsub(uVar17,uVar20);
      uVar17 = __aeabi_fmul(uVar17,uVar4);
      uVar16 = __addsf3(uVar16,uVar17);
      iVar21 = __addsf3(iVar28,iVar28);
      uVar17 = __aeabi_fmul(fVar34,iVar28);
      uVar20 = __aeabi_fmul(iVar6 + -0x80000000,uVar22);
      uVar11 = __aeabi_fmul(uVar11,uVar23);
      uVar11 = __addsf3(uVar20,uVar11);
      uVar20 = __aeabi_fmul(fVar30,0x40800000);
      uVar3 = __aeabi_fmul(uVar20,uVar3);
      uVar3 = __aeabi_fsub(uVar11,uVar3);
      uVar11 = __aeabi_fmul(fVar30,iVar21 + -0x80000000);
      uVar11 = __aeabi_fsub(uVar11,uVar12);
      uVar11 = __aeabi_fmul(uVar11,uVar18);
      uVar3 = __addsf3(uVar3,uVar11);
      uVar11 = __addsf3(uVar15,uVar17);
      uVar11 = __aeabi_fmul(uVar11,uVar13);
      uVar3 = __addsf3(uVar3,uVar11);
      uVar11 = __aeabi_fmul(fVar29,iVar28);
      uVar12 = __aeabi_fmul(fVar30,_2bz);
      uVar11 = __aeabi_fsub(uVar11,uVar12);
      uVar11 = __aeabi_fmul(uVar11,uVar4);
      uVar3 = __addsf3(uVar3,uVar11);
      uVar9 = __aeabi_fmul(uVar9,uVar22);
      uVar11 = __aeabi_fmul(iVar10,uVar23);
      uVar9 = __addsf3(uVar9,uVar11);
      uVar11 = __aeabi_fmul(fVar31,iVar21 + -0x80000000);
      uVar11 = __addsf3(uVar11,uVar19);
      uVar11 = __aeabi_fmul(uVar11,uVar18);
      uVar9 = __addsf3(uVar9,uVar11);
      uVar11 = __aeabi_fmul(fVar29,iVar28 + -0x80000000);
      uVar11 = __addsf3(uVar11,uVar24);
      uVar11 = __aeabi_fmul(uVar11,uVar13);
      uVar9 = __addsf3(uVar9,uVar11);
      uVar4 = __aeabi_fmul(uVar4,uVar17);
      uVar4 = __addsf3(uVar9,uVar4);
      uVar9 = __aeabi_fmul(uVar14);
      uVar11 = __aeabi_fmul(uVar16);
      uVar9 = __addsf3(uVar9,uVar11);
      uVar11 = __aeabi_fmul(uVar3,uVar3);
      uVar9 = __addsf3(uVar9,uVar11);
      uVar11 = __aeabi_fmul(uVar4,uVar4);
      __addsf3(uVar9,uVar11);
      __aeabi_f2d();
      sqrt((double)CONCAT44(fVar34,in_stack_ffffff78));
      uVar9 = __truncdfsf2();
      uVar9 = __aeabi_fdiv(0x3f800000,uVar9);
      fVar1 = beta;
      uVar11 = __aeabi_fmul((int)fVar34 + -0x80000000,uVar5);
      uVar12 = __aeabi_fmul(fVar30,uVar7);
      uVar11 = __aeabi_fsub(uVar11,uVar12);
      uVar12 = __aeabi_fmul(fVar31,uVar8);
      uVar11 = __aeabi_fsub(uVar11,uVar12);
      uVar11 = __aeabi_fmul(uVar11,0x3f000000);
      uVar12 = __aeabi_fmul(uVar14,uVar9);
      fVar2 = deltat;
      uVar12 = __aeabi_fmul(uVar12,fVar1);
      uVar11 = __aeabi_fsub(uVar11,uVar12);
      uVar11 = __aeabi_fmul(uVar11,fVar2);
      uVar11 = __addsf3(uVar11,fVar29);
      uVar12 = __aeabi_fmul(fVar29,uVar5);
      uVar13 = __aeabi_fmul(fVar30,uVar8);
      fVar2 = deltat;
      uVar12 = __addsf3(uVar12,uVar13);
      uVar13 = __aeabi_fmul(fVar31,uVar7);
      uVar12 = __aeabi_fsub(uVar12,uVar13);
      uVar12 = __aeabi_fmul(uVar12,0x3f000000);
      uVar13 = __aeabi_fmul(uVar16,uVar9);
      uVar13 = __aeabi_fmul(uVar13,fVar1);
      uVar12 = __aeabi_fsub(uVar12,uVar13);
      uVar12 = __aeabi_fmul(uVar12,fVar2);
      uVar12 = __addsf3(uVar12,fVar34);
      fVar2 = deltat;
      uVar13 = __aeabi_fmul(fVar29,uVar7);
      uVar14 = __aeabi_fmul(fVar34,uVar8);
      uVar13 = __aeabi_fsub(uVar13,uVar14);
      uVar14 = __aeabi_fmul(fVar31,uVar5);
      uVar13 = __addsf3(uVar13,uVar14);
      uVar13 = __aeabi_fmul(uVar13,0x3f000000);
      uVar3 = __aeabi_fmul(uVar3,uVar9);
      uVar3 = __aeabi_fmul(uVar3,fVar1);
      uVar3 = __aeabi_fsub(uVar13,uVar3);
      uVar3 = __aeabi_fmul(uVar3,fVar2);
      uVar3 = __addsf3(uVar3,fVar30);
      uVar8 = __aeabi_fmul(fVar29,uVar8);
      uVar7 = __aeabi_fmul(fVar34,uVar7);
      uVar7 = __addsf3(uVar8,uVar7);
      uVar5 = __aeabi_fmul(fVar30,uVar5);
      uVar5 = __aeabi_fsub(uVar7,uVar5);
      uVar5 = __aeabi_fmul(uVar5,0x3f000000);
      uVar4 = __aeabi_fmul(uVar4,uVar9);
      uVar4 = __aeabi_fmul(uVar4,fVar1);
      fVar29 = deltat;
      uVar4 = __aeabi_fsub(uVar5,uVar4);
      uVar4 = __aeabi_fmul(uVar4,fVar29);
      uVar4 = __addsf3(uVar4,fVar31);
      uVar5 = __aeabi_fmul(uVar11,uVar11);
      uVar8 = __aeabi_fmul(uVar12,uVar12);
      uVar5 = __addsf3(uVar5,uVar8);
      uVar8 = __aeabi_fmul(uVar3,uVar3);
      uVar5 = __addsf3(uVar5,uVar8);
      uVar8 = __aeabi_fmul(uVar4,uVar4);
      __addsf3(uVar5,uVar8);
      __aeabi_f2d();
      sqrt((double)CONCAT44(uVar7,in_stack_ffffff78));
      uVar5 = __truncdfsf2();
      uVar5 = __aeabi_fdiv(0x3f800000,uVar5);
      fVar29 = (float)__aeabi_fmul(uVar11,uVar5);
      q[0] = fVar29;
      fVar30 = (float)__aeabi_fmul(uVar12,uVar5);
      q[1] = fVar30;
      fVar31 = (float)__aeabi_fmul(uVar3,uVar5);
      q[2] = fVar31;
      q[3] = (float)__aeabi_fmul(uVar4,uVar5);
      uVar3 = __aeabi_fmul(fVar30,q[3]);
      uVar4 = __aeabi_fmul(fVar29,fVar31);
      uVar3 = __aeabi_fsub(uVar3,uVar4);
      __addsf3(uVar3,uVar3);
      __aeabi_f2d();
      asin((double)CONCAT44(uVar7,in_stack_ffffff78));
      uVar32 = __muldf3();
      __divdf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0x54442d18,0x400921fb);
      fVar29 = (float)__truncdfsf2();
      *angle = fVar29;
      fVar30 = q[1];
      fVar29 = q[0];
      uVar3 = __aeabi_fmul(q[0],q[0]);
      uVar4 = __aeabi_fmul(fVar30,fVar30);
      uVar3 = __aeabi_fsub(uVar3,uVar4);
      fVar31 = q[2];
      uVar4 = __aeabi_fmul(q[2],q[2]);
      uVar3 = __aeabi_fsub(uVar3,uVar4);
      fVar34 = q[3];
      uVar4 = __aeabi_fmul(q[3],q[3]);
      __addsf3(uVar3,uVar4);
      uVar32 = __aeabi_f2d();
      uVar3 = __aeabi_fmul(fVar29,fVar30);
      uVar4 = __aeabi_fmul(fVar31,fVar34);
      uVar3 = __addsf3(uVar3,uVar4);
      __addsf3(uVar3,uVar3);
      uVar33 = __aeabi_f2d();
      uVar32 = atan2((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),(int)uVar32,
                     (int)((ulonglong)uVar32 >> 0x20));
      uVar32 = __muldf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0,0x40668000);
      __divdf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0x54442d18,0x400921fb);
      fVar29 = (float)__truncdfsf2();
      angle[1] = fVar29;
      fVar30 = q[1];
      fVar29 = q[0];
      uVar3 = __aeabi_fmul(q[0],q[0]);
      uVar4 = __aeabi_fmul(fVar30,fVar30);
      uVar3 = __addsf3(uVar3,uVar4);
      fVar31 = q[2];
      uVar4 = __aeabi_fmul(q[2],q[2]);
      uVar3 = __aeabi_fsub(uVar3,uVar4);
      fVar34 = q[3];
      uVar4 = __aeabi_fmul(q[3],q[3]);
      __aeabi_fsub(uVar3,uVar4);
      uVar32 = __aeabi_f2d();
      uVar3 = __aeabi_fmul(fVar30,fVar31);
      uVar4 = __aeabi_fmul(fVar29,fVar34);
      uVar3 = __addsf3(uVar3,uVar4);
      __addsf3(uVar3,uVar3);
      uVar33 = __aeabi_f2d();
      uVar32 = atan2((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),(int)uVar32,
                     (int)((ulonglong)uVar32 >> 0x20));
      uVar32 = __muldf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0,0x40668000);
      __divdf3((int)uVar32,(int)((ulonglong)uVar32 >> 0x20),0x54442d18,0x400921fb);
      fVar29 = (float)__truncdfsf2();
      angle[2] = fVar29;
    }
  }
  return;
}


////>>0x08003eac>>aflCall>>////

/* WARNING: Unknown calling convention */

uint32_t aflCall(uint32_t a0,uint32_t a1,int32_t a2)

{
  software_interrupt(0x3f);
  return a0;
}


////>>0x08003eb0>>startForkserver>>////

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


////>>0x08003ec8>>CB_Write>>////

/* WARNING: Unknown calling convention */

int CB_Write(CircularBuffer *cb,uint8_t data)

{
  cb->size = cb->size + 1;
  cb->buffer[cb->tail] = data;
  cb->tail = cb->tail + 1 & 0x7ff;
  return 1;
}


////>>0x08003ef2>>CB_Init>>////

/* WARNING: Unknown calling convention */

void CB_Init(CircularBuffer *cb)

{
  int i;
  
  i = 0;
  cb->head = 0;
  cb->tail = 0;
  cb->size = 0;
  do {
    cb->buffer[i] = '\0';
    i = i + 1;
  } while (i != 0x800);
  return;
}


////>>0x08003f0e>>lowPassFilter>>////

/* WARNING: Unknown calling convention */

float lowPassFilter(LPF *var,float current)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float extraout_s0;
  
  fVar3 = var->beta;
  uVar1 = __aeabi_fsub(0x3f800000,fVar3);
  uVar1 = __aeabi_fmul(uVar1,current);
  uVar2 = __aeabi_fmul(fVar3,var->last);
  fVar3 = (float)__addsf3(uVar2,uVar1);
  var->last = fVar3;
  return extraout_s0;
}


////>>0x08003f3c>>toggleLED>>////

/* WARNING: Unknown calling convention */

void toggleLED(int led_white,int led_red,int led_blue)

{
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40011000,0x8000,led_white == 0);
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40011000,0x4000,led_red == 0);
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40011000,0x2000,led_blue == 0);
  return;
}


////>>0x08003f7c>>LED_StartupSequence>>////

/* WARNING: Unknown calling convention */

void LED_StartupSequence(void)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    toggleLED(1,0,0);
    delay_ms(100);
    toggleLED(0,1,0);
    delay_ms(100);
    toggleLED(0,0,1);
    delay_ms(100);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  toggleLED(1,1,1);
  return;
}


////>>0x08003fc4>>Motor1_SetPWM>>////

/* WARNING: Unknown calling convention */

void Motor1_SetPWM(int pwm)

{
  (htim4.Instance)->CCR4 = pwm;
  return;
}


////>>0x08003fd0>>Motor2_SetPWM>>////

/* WARNING: Unknown calling convention */

void Motor2_SetPWM(int pwm)

{
  (htim4.Instance)->CCR3 = pwm;
  return;
}


////>>0x08003fdc>>Motor3_SetPWM>>////

/* WARNING: Unknown calling convention */

void Motor3_SetPWM(int pwm)

{
  (htim2.Instance)->CCR2 = pwm;
  return;
}


////>>0x08003fe8>>Motor4_SetPWM>>////

/* WARNING: Unknown calling convention */

void Motor4_SetPWM(int pwm)

{
  (htim3.Instance)->CCR3 = pwm;
  return;
}


////>>0x08003ff4>>PWM_Init>>////

/* WARNING: Unknown calling convention */

void PWM_Init(void)

{
  HAL_TIM_PWM_Start(&htim2,4);
  HAL_TIM_PWM_Start(&htim3,8);
  HAL_TIM_PWM_Start(&htim4,8);
  HAL_TIM_PWM_Start(&htim4,0xc);
  return;
}


////>>0x08004028>>Devices_Init>>////

/* WARNING: Unknown calling convention */

void Devices_Init(void)

{
  Peripherals_Init();
  PWM_Init();
  LED_StartupSequence();
  return;
}


////>>0x0800403c>>I2C_WriteByte>>////

/* WARNING: Unknown calling convention */

void I2C_WriteByte(uint16_t device_add,uint16_t register_add,uint8_t register_val,uint8_t delay_mode
                  )

{
  HAL_StatusTypeDef HVar1;
  uint8_t ret;
  uint8_t byte [1];
  
  byte[0] = register_val;
  HVar1 = HAL_I2C_Mem_Write(&hi2c1,device_add,register_add,1,byte,1,200);
  if (HVar1 != HAL_OK) {
    _Error_Handler("../Src/i2c.c",0x1b);
  }
  if (delay_mode != '\0') {
    delay_ms(0x32);
  }
  return;
}


////>>0x0800407c>>I2C_ReadByte>>////

/* WARNING: Unknown calling convention */

uint8_t I2C_ReadByte(uint16_t device_add,uint16_t register_add,char *file,int line)

{
  HAL_StatusTypeDef HVar1;
  uint8_t ret;
  uint8_t byte [1];
  
  byte[0] = '\0';
  HVar1 = HAL_I2C_Mem_Read(&hi2c1,device_add,register_add,1,byte,1,200);
  if (HVar1 != HAL_OK) {
    _Error_Handler(file,line);
  }
  return byte[0];
}


////>>0x080040b8>>I2C_ReadBytes>>////

/* WARNING: Unknown calling convention */

void I2C_ReadBytes(uint16_t device_add,uint16_t register_add,uint8_t *bytes,uint16_t size,char *file
                  ,int line)

{
  HAL_StatusTypeDef HVar1;
  uint8_t ret;
  
  HVar1 = HAL_I2C_Mem_Read(&hi2c1,device_add,register_add,1,bytes,size,200);
  if (HVar1 != HAL_OK) {
    _Error_Handler(file,line);
    return;
  }
  return;
}


////>>0x080040e8>>I2C_ReadByteArray>>////

/* WARNING: Unknown calling convention */

void I2C_ReadByteArray(uint16_t device_add,uint16_t register_add,uint8_t *byte_array,uint16_t size,
                      char *file,int line)

{
  uint8_t uVar1;
  int iVar2;
  uint8_t *puVar3;
  
  puVar3 = byte_array + -1;
  for (iVar2 = 0; iVar2 < (int)(uint)size; iVar2 = iVar2 + 1) {
    uVar1 = I2C_ReadByte(device_add,register_add + (short)iVar2,"../Src/i2c.c",0x4c);
    puVar3 = puVar3 + 1;
    *puVar3 = uVar1;
  }
  return;
}


////>>0x0800411c>>taskScheduler>>////

/* WARNING: Unknown calling convention */

void taskScheduler(void)

{
  uint32_t uVar1;
  
  uVar1 = millis();
  if (1 < uVar1 - last_tick1) {
    last_tick1 = millis();
    AHRS_ComputeAngles();
  }
  uVar1 = millis();
  if (2 < uVar1 - last_tick3) {
    last_tick3 = millis();
    PID_Update();
  }
  uVar1 = millis();
  if (3 < uVar1 - last_tick2) {
    last_tick2 = millis();
    MSP_SendIdent();
    MSP_SendStatus();
    MSP_SendMotor();
    MSP_SendAttitude();
    MSP_SendAltitude();
    MSP_SendRawIMU();
    MSP_SendPID();
  }
  MS5611_Update();
  return;
}


////>>0x08004194>>setup>>////

/* WARNING: Unknown calling convention */

void setup(void)

{
  Devices_Init();
  serialBegin();
  IMU_Init();
  MS5611_Init();
  PID_Init();
  return;
}


////>>0x080041ae>>main>>////

/* WARNING: Unknown calling convention */

int main(void)

{
  startForkserver(0);
  setup();
  do {
    HAL_IncTick();
    taskScheduler();
  } while( true );
}


////>>0x080041c4>>Motor_StopAll>>////

/* WARNING: Unknown calling convention */

void Motor_StopAll(void)

{
  Motor1_SetPWM(0);
  Motor2_SetPWM(0);
  Motor3_SetPWM(0);
  Motor4_SetPWM(0);
  return;
}


////>>0x080041e4>>Motor_SetSpeed>>////

/* WARNING: Unknown calling convention */

void Motor_SetSpeed(int m1,int m2,int m3,int m4)

{
  if (999 < m1) {
    m1 = 1000;
  }
  if (999 < m2) {
    m2 = 1000;
  }
  if (999 < m3) {
    m3 = 1000;
  }
  if (999 < m4) {
    m4 = 1000;
  }
  motor_pwm[2] = m3 & ~(m3 >> 0x1f);
  motor_pwm[3] = m4 & ~(m4 >> 0x1f);
  motor_pwm[1] = m2 & ~(m2 >> 0x1f);
  motor_pwm[0] = m1 & ~(m1 >> 0x1f);
  Motor1_SetPWM(motor_pwm[0]);
  Motor2_SetPWM(motor_pwm[1]);
  Motor3_SetPWM(motor_pwm[2]);
  Motor4_SetPWM(motor_pwm[3]);
  msp_txf_motor.motor[0] = (short)motor_pwm[0] + 1000;
  msp_txf_motor.motor[1] = (short)motor_pwm[1] + 1000;
  msp_txf_motor.motor[2] = (short)motor_pwm[2] + 1000;
  msp_txf_motor.motor[3] = (short)motor_pwm[3] + 1000;
  return;
}


////>>0x0800426c>>Motor_DistributeSpeed>>////

/* WARNING: Unknown calling convention */

void Motor_DistributeSpeed(float throttle,float pitch,float roll,float yaw)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int m4;
  int m3;
  int m2;
  int m1;
  
  uVar1 = __aeabi_fsub();
  uVar2 = __addsf3(throttle,pitch);
  uVar3 = __aeabi_fsub(uVar1,roll);
  uVar3 = __addsf3(uVar3,yaw);
  __aeabi_fsub(uVar3,0x447a0000);
  m4 = __aeabi_f2iz();
  uVar3 = __aeabi_fsub(uVar2,roll);
  uVar3 = __aeabi_fsub(uVar3,yaw);
  __aeabi_fsub(uVar3,0x447a0000);
  m3 = __aeabi_f2iz();
  uVar1 = __addsf3(uVar1,roll);
  uVar1 = __aeabi_fsub(uVar1,yaw);
  __aeabi_fsub(uVar1,0x447a0000);
  m2 = __aeabi_f2iz();
  uVar1 = __addsf3(roll,uVar2);
  uVar1 = __addsf3(uVar1,yaw);
  __aeabi_fsub(uVar1,0x447a0000);
  m1 = __aeabi_f2iz();
  Motor_SetSpeed(m1,m2,m3,m4);
  return;
}


////>>0x08004300>>MSP_SendFrame>>////

/* WARNING: Unknown calling convention */

void MSP_SendFrame(uint8_t code,uint8_t *data,uint16_t data_length)

{
  byte ch;
  byte *pbVar1;
  
  serialPrint("$M>");
  serialWrite((byte)data_length);
  ch = (byte)data_length ^ code;
  serialWrite(code);
  for (pbVar1 = data; (int)pbVar1 - (int)data < (int)(uint)data_length; pbVar1 = pbVar1 + 1) {
    serialWrite(*pbVar1);
    ch = ch ^ *pbVar1;
  }
  serialWrite(ch);
  return;
}


////>>0x08004348>>MSP_SendIdent>>////

/* WARNING: Unknown calling convention */

void MSP_SendIdent(void)

{
  uint in_r1;
  uint8_t buff [7];
  undefined4 local_10;
  uint local_c;
  
  msp_txf_ident._0_4_ = 0x40003e9;
  msp_txf_ident.capability._1_2_ = 0;
  msp_txf_ident.capability._3_1_ = 0;
  local_10 = 0x40003e9;
  local_c = in_r1 & 0xff000000;
  MSP_SendFrame('d',(uint8_t *)&local_10,7);
  return;
}


////>>0x08004384>>MSP_SendStatus>>////

/* WARNING: Unknown calling convention */

void MSP_SendStatus(void)

{
  uint in_r3;
  undefined4 local_14;
  undefined4 uStack_10;
  uint local_c;
  
  msp_txf_status._4_4_ = 0x2a0007;
  local_14 = msp_txf_status._0_4_;
  uStack_10 = 0x2a0007;
  msp_txf_status.flag._2_2_ = 0;
  msp_txf_status.current_set = '\0';
  local_c = in_r3 & 0xff000000;
  MSP_SendFrame('e',(uint8_t *)&local_14,0xb);
  return;
}


////>>0x080043bc>>MSP_SendRawIMU>>////

/* WARNING: Unknown calling convention */

void MSP_SendRawIMU(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  msp_raw_imu *pmVar4;
  uint8_t buff [18];
  
  pmVar4 = &msp_txf_raw_imu;
  puVar3 = (undefined4 *)buff;
  do {
    uVar1 = *(undefined4 *)pmVar4;
    uVar2 = *(undefined4 *)&pmVar4->accz;
    pmVar4 = (msp_raw_imu *)&pmVar4->gyry;
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    puVar3 = puVar3 + 2;
  } while (pmVar4 != (msp_raw_imu *)&msp_txf_raw_imu.magz);
  *(int16_t *)puVar3 = msp_txf_raw_imu.magz;
  MSP_SendFrame('f',buff,0x12);
  return;
}


////>>0x080043f0>>MSP_SendMotor>>////

/* WARNING: Unknown calling convention */

void MSP_SendMotor(void)

{
  uint8_t buff [8];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = msp_txf_motor.motor._0_4_;
  uStack_c = msp_txf_motor.motor._4_4_;
  MSP_SendFrame('h',(uint8_t *)&local_10,8);
  return;
}


////>>0x08004410>>MSP_SendAttitude>>////

/* WARNING: Unknown calling convention */

void MSP_SendAttitude(void)

{
  undefined4 in_r1;
  uint8_t buff [6];
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = msp_txf_attitude._0_4_;
  local_c = CONCAT22((short)((uint)in_r1 >> 0x10),msp_txf_attitude.heading);
  MSP_SendFrame('l',(uint8_t *)&local_10,6);
  return;
}


////>>0x08004434>>MSP_SendAltitude>>////

/* WARNING: Unknown calling convention */

void MSP_SendAltitude(void)

{
  undefined4 in_r1;
  uint8_t buff [6];
  int32_t local_10;
  undefined4 local_c;
  
  local_10 = msp_txf_altitude.est_alt;
  local_c = CONCAT22((short)((uint)in_r1 >> 0x10),msp_txf_altitude.vario);
  MSP_SendFrame('m',(uint8_t *)&local_10,6);
  return;
}


////>>0x08004458>>MSP_SendPID>>////

/* WARNING: Unknown calling convention */

void MSP_SendPID(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  msp_pid *pmVar4;
  msp_pid *pmVar5;
  uint8_t buff [30];
  undefined4 local_30 [3];
  undefined2 local_24 [10];
  
  puVar1 = local_30;
  pmVar5 = &msp_txf_pid;
  do {
    pmVar4 = pmVar5;
    puVar3 = puVar1;
    uVar2 = *(undefined4 *)&(pmVar4->pitch).i;
    pmVar5 = (msp_pid *)&(pmVar4->yaw).d;
    *puVar3 = *(undefined4 *)pmVar4;
    puVar3[1] = uVar2;
    puVar1 = puVar3 + 2;
  } while (pmVar5 != (msp_pid *)&msp_txf_pid.mag);
  puVar3[2] = msp_txf_pid._24_4_;
  *(undefined2 *)(puVar3 + 3) = *(undefined2 *)&pmVar4->pos;
  MSP_SendFrame('p',(uint8_t *)local_30,0x1e);
  return;
}


////>>0x08004490>>_Error_Handler>>////

/* WARNING: Unknown calling convention */

void _Error_Handler(char *file,int line)

{
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40011000,0x4000,GPIO_PIN_SET);
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40011000,0x8000,GPIO_PIN_RESET);
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40011000,0x2000,GPIO_PIN_RESET);
  do {
    HAL_GPIO_TogglePin((GPIO_TypeDef *)0x40011000,0x4000);
    HAL_GPIO_TogglePin((GPIO_TypeDef *)0x40011000,0x8000);
    HAL_GPIO_TogglePin((GPIO_TypeDef *)0x40011000,0x2000);
    serialPrint("Error with ");
    serialPrint(file);
    serialPrint(" at line: ");
    serialInt(line);
    serialWrite('\n');
    delay_ms(500);
  } while( true );
}


////>>0x08004514>>SystemClock_Config>>////

/* WARNING: Unknown calling convention */

void SystemClock_Config(void)

{
  HAL_StatusTypeDef HVar1;
  char *pcVar2;
  uint32_t uVar3;
  int line;
  uint FLatency;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_OscInitTypeDef RCC_OscInitStruct;
  
  RCC_OscInitStruct.HSIState = 1;
  RCC_OscInitStruct.HSICalibrationValue = 0x10;
  FLatency = 2;
  RCC_OscInitStruct.PLL.PLLSource = 0;
  RCC_OscInitStruct.OscillatorType = 2;
  RCC_OscInitStruct.PLL.PLLState = 2;
  RCC_OscInitStruct.PLL.PLLMUL = 0x380000;
  HVar1 = HAL_RCC_OscConfig(&RCC_OscInitStruct);
  pcVar2 = (char *)(uint)HVar1;
  if (pcVar2 == (char *)0x0) goto LAB_08004540;
  line = 0x3c;
  while( true ) {
    pcVar2 = "../Src/peripherals.c";
    _Error_Handler("../Src/peripherals.c",line);
LAB_08004540:
    RCC_ClkInitStruct.ClockType = 0xf;
    RCC_ClkInitStruct.APB1CLKDivider = 0x400;
    RCC_ClkInitStruct.SYSCLKSource = FLatency;
    RCC_ClkInitStruct.AHBCLKDivider = (uint32_t)pcVar2;
    RCC_ClkInitStruct.APB2CLKDivider = (uint32_t)pcVar2;
    HVar1 = HAL_RCC_ClockConfig(&RCC_ClkInitStruct,FLatency);
    FLatency = (uint)HVar1;
    if (FLatency == 0) break;
    line = 0x49;
  }
  uVar3 = HAL_RCC_GetHCLKFreq();
  HAL_SYSTICK_Config(uVar3 / 1000);
  HAL_SYSTICK_CLKSourceConfig(4);
  HAL_NVIC_SetPriority(SysTick_IRQn,0,0);
  return;
}


////>>0x0800458c>>Peripherals_Init>>////


/* WARNING: Unknown calling convention */

void Peripherals_Init(void)

{
  HAL_StatusTypeDef HVar1;
  char *pcVar2;
  uint uVar3;
  int line;
  uint uVar4;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_2;
  TIM_MasterConfigTypeDef sMasterConfig;
  TIM_OC_InitTypeDef sConfigOC;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  HAL_Init();
  SystemClock_Config();
  uVar4 = 2;
  _DAT_40021018 = _DAT_40021018 | 0x1c;
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40011000,0xe000,GPIO_PIN_RESET);
  HAL_GPIO_WritePin((GPIO_TypeDef *)0x40010800,0x20,GPIO_PIN_RESET);
  GPIO_InitStruct.Pin = 0xe000;
  GPIO_InitStruct.Mode = 1;
  GPIO_InitStruct.Speed = 2;
  HAL_GPIO_Init((GPIO_TypeDef *)0x40011000,&GPIO_InitStruct);
  GPIO_InitStruct.Pin = 0x20;
  GPIO_InitStruct.Mode = 1;
  GPIO_InitStruct.Speed = 2;
  HAL_GPIO_Init((GPIO_TypeDef *)0x40010800,&GPIO_InitStruct);
  hi2c1.Instance = (I2C_TypeDef *)0x40005400;
  hi2c1.Init.ClockSpeed = 400000;
  hi2c1.Init.AddressingMode = 0x4000;
  hi2c1.Init.DutyCycle = 0;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.DualAddressMode = 0;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = 0;
  hi2c1.Init.NoStretchMode = 0;
  HVar1 = HAL_I2C_Init(&hi2c1);
  pcVar2 = (char *)(uint)HVar1;
  if (pcVar2 == (char *)0x0) goto LAB_0800463a;
  line = 0x6b;
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
                                  pcVar2 = "../Src/peripherals.c";
                                  _Error_Handler("../Src/peripherals.c",line);
LAB_0800463a:
                                  huart1.Instance = (USART_TypeDef *)0x40013800;
                                  huart1.Init.BaudRate = 0x1c200;
                                  huart1.Init.Mode = 0xc;
                                  huart1.Init.WordLength = (uint32_t)pcVar2;
                                  huart1.Init.StopBits = (uint32_t)pcVar2;
                                  huart1.Init.Parity = (uint32_t)pcVar2;
                                  huart1.Init.HwFlowCtl = (uint32_t)pcVar2;
                                  huart1.Init.OverSampling = (uint32_t)pcVar2;
                                  HVar1 = HAL_UART_Init(&huart1);
                                  uVar3 = (uint)HVar1;
                                  if (uVar3 == 0) break;
                                  line = 0x151;
                                }
                                htim1.Instance = (TIM_TypeDef *)0x40012c00;
                                htim1.Init.Period = 1000;
                                htim1.Init.Prescaler = uVar4;
                                htim1.Init.CounterMode = uVar3;
                                htim1.Init.ClockDivision = uVar3;
                                htim1.Init.RepetitionCounter = uVar3;
                                HVar1 = HAL_TIM_PWM_Init(&htim1);
                                uVar3 = (uint)HVar1;
                                if (uVar3 == 0) break;
                                line = 0x88;
                              }
                              sMasterConfig.MasterOutputTrigger = uVar3;
                              sMasterConfig.MasterSlaveMode = uVar3;
                              HVar1 = HAL_TIMEx_MasterConfigSynchronization(&htim1,&sMasterConfig);
                              uVar3 = (uint)HVar1;
                              if (uVar3 == 0) break;
                              line = 0x8f;
                            }
                            sConfigOC.OCMode = 0x60;
                            sConfigOC.Pulse = uVar3;
                            sConfigOC.OCPolarity = uVar3;
                            sConfigOC.OCFastMode = uVar3;
                            sConfigOC.OCIdleState = uVar3;
                            sConfigOC.OCNIdleState = uVar3;
                            HVar1 = HAL_TIM_PWM_ConfigChannel(&htim1,&sConfigOC,0xc);
                            uVar3 = (uint)HVar1;
                            if (uVar3 == 0) break;
                            line = 0x9a;
                          }
                          GPIO_InitStruct.Pin = uVar3;
                          GPIO_InitStruct.Mode = uVar3;
                          GPIO_InitStruct.Pull = uVar3;
                          GPIO_InitStruct.Speed = uVar3;
                          HVar1 = HAL_TIMEx_ConfigBreakDeadTime
                                            (&htim1,(TIM_BreakDeadTimeConfigTypeDef *)
                                                    &GPIO_InitStruct);
                          uVar3 = (uint)HVar1;
                          if (uVar3 == 0) break;
                          line = 0xa6;
                        }
                        HAL_TIM_MspPostInit(&htim1);
                        htim2.Instance = (TIM_TypeDef *)0x40000000;
                        htim2.Init.Period = 1000;
                        htim2.Init.Prescaler = uVar4;
                        htim2.Init.CounterMode = uVar3;
                        htim2.Init.ClockDivision = uVar3;
                        HVar1 = HAL_TIM_PWM_Init(&htim2);
                        uVar3 = (uint)HVar1;
                        if (uVar3 == 0) break;
                        line = 0xc3;
                      }
                      sConfigOC.OCMode = uVar3;
                      sConfigOC.Pulse = uVar3;
                      HVar1 = HAL_TIMEx_MasterConfigSynchronization
                                        (&htim2,(TIM_MasterConfigTypeDef *)&sConfigOC);
                      uVar3 = (uint)HVar1;
                      if (uVar3 == 0) break;
                      line = 0xca;
                    }
                    GPIO_InitStruct.Pin = 0x60;
                    GPIO_InitStruct.Mode = uVar3;
                    GPIO_InitStruct.Pull = uVar3;
                    HVar1 = HAL_TIM_PWM_ConfigChannel
                                      (&htim2,(TIM_OC_InitTypeDef *)&GPIO_InitStruct,4);
                    uVar3 = (uint)HVar1;
                    if (uVar3 == 0) break;
                    line = 0xd3;
                  }
                  HAL_TIM_MspPostInit(&htim2);
                  htim3.Init.Period = 1000;
                  htim3.Instance = (TIM_TypeDef *)0x40000400;
                  htim3.Init.Prescaler = uVar4;
                  htim3.Init.CounterMode = uVar3;
                  htim3.Init.ClockDivision = uVar3;
                  HVar1 = HAL_TIM_PWM_Init(&htim3);
                  if (HVar1 == HAL_OK) break;
                  line = 0xf0;
                }
                sConfigOC.OCMode = 0;
                sConfigOC.Pulse = 0;
                HVar1 = HAL_TIMEx_MasterConfigSynchronization
                                  (&htim3,(TIM_MasterConfigTypeDef *)&sConfigOC);
                uVar3 = (uint)HVar1;
                if (uVar3 == 0) break;
                line = 0xf7;
              }
              GPIO_InitStruct.Pin = 0x60;
              GPIO_InitStruct.Mode = uVar3;
              GPIO_InitStruct.Pull = uVar3;
              HVar1 = HAL_TIM_PWM_ConfigChannel(&htim3,(TIM_OC_InitTypeDef *)&GPIO_InitStruct,8);
              if (HVar1 == HAL_OK) break;
              line = 0x100;
            }
            HVar1 = HAL_TIM_PWM_ConfigChannel(&htim3,(TIM_OC_InitTypeDef *)&GPIO_InitStruct,0xc);
            uVar4 = (uint)HVar1;
            if (uVar4 == 0) break;
            line = 0x105;
          }
          HAL_TIM_MspPostInit(&htim3);
          htim4.Instance = (TIM_TypeDef *)0x40000800;
          htim4.Init.Prescaler = 2;
          htim4.Init.Period = 1000;
          htim4.Init.CounterMode = uVar4;
          htim4.Init.ClockDivision = uVar4;
          HVar1 = HAL_TIM_PWM_Init(&htim4);
          uVar3 = (uint)HVar1;
          if (uVar3 == 0) break;
          line = 0x122;
        }
        sConfigOC.OCMode = uVar3;
        sConfigOC.Pulse = uVar3;
        HVar1 = HAL_TIMEx_MasterConfigSynchronization(&htim4,(TIM_MasterConfigTypeDef *)&sConfigOC);
        uVar3 = (uint)HVar1;
        if (uVar3 == 0) break;
        line = 0x129;
      }
      GPIO_InitStruct.Pin = 0x60;
      GPIO_InitStruct.Mode = uVar3;
      GPIO_InitStruct.Pull = uVar3;
      HVar1 = HAL_TIM_PWM_ConfigChannel(&htim4,(TIM_OC_InitTypeDef *)&GPIO_InitStruct,8);
      if (HVar1 == HAL_OK) break;
      line = 0x132;
    }
    HVar1 = HAL_TIM_PWM_ConfigChannel(&htim4,(TIM_OC_InitTypeDef *)&GPIO_InitStruct,0xc);
    if (HVar1 == HAL_OK) break;
    line = 0x137;
  }
  HAL_TIM_MspPostInit(&htim4);
  return;
}


////>>0x0800483c>>PID_Compute>>////

/* WARNING: Unknown calling convention */

void PID_Compute(PID_TypeDef *pid)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = pid->input;
  uVar1 = __addsf3(pid->set_point,pid->offset);
  fVar4 = (float)__aeabi_fsub(uVar1,fVar4);
  pid->error = fVar4;
  if (pid->instance == 3) {
    iVar2 = __aeabi_fcmpgt(pid->error,0);
    if (iVar2 == 0) {
      iVar2 = __aeabi_fcmplt(pid->error,0xc3340000);
    }
    else {
      iVar2 = __aeabi_fcmpgt(pid->error,0x43340000);
    }
    if (iVar2 != 0) {
      fVar5 = pid->error;
      uVar1 = __aeabi_fmul(pid->error,0x43b40000);
      iVar2 = __aeabi_fcmpgt(pid->error,0);
      fVar4 = pid->error;
      if (iVar2 == 0) {
        fVar4 = (float)((int)fVar4 + -0x80000000);
      }
      uVar1 = __aeabi_fdiv(uVar1,fVar4);
      fVar4 = (float)__aeabi_fsub(fVar5,uVar1);
      pid->error = fVar4;
    }
  }
  fVar6 = pid->con_KI;
  fVar5 = pid->con_KD;
  fVar4 = (float)__aeabi_fmul(pid->con_KP,pid->error);
  pid->proportional = fVar4;
  fVar4 = (float)__addsf3(pid->error,pid->integral);
  pid->integral = fVar4;
  iVar2 = __aeabi_fcmplt(pid->integral,0xc3fa0000);
  if (iVar2 == 0) {
    iVar2 = __aeabi_fcmpgt(pid->integral,0x43fa0000);
    if (iVar2 == 0) {
      fVar4 = pid->integral;
    }
    else {
      fVar4 = 500.0;
    }
  }
  else {
    fVar4 = -500.0;
  }
  pid->integral = fVar4;
  fVar4 = (float)__aeabi_fsub(pid->input,pid->last_input);
  pid->derivative = fVar4;
  fVar4 = pid->proportional;
  uVar1 = __aeabi_fmul(fVar6,pid->integral);
  uVar1 = __addsf3(uVar1,fVar4);
  uVar3 = __aeabi_fmul(fVar5,pid->derivative);
  fVar4 = (float)__aeabi_fsub(uVar1,uVar3);
  pid->output = fVar4;
  uVar1 = __floatsisf(pid->direction);
  iVar2 = __aeabi_fcmplt(pid->output,0xc3fa0000);
  if (iVar2 == 0) {
    iVar2 = __aeabi_fcmpgt(pid->output,0x43fa0000);
    if (iVar2 == 0) {
      fVar4 = pid->output;
    }
    else {
      fVar4 = 500.0;
    }
  }
  else {
    fVar4 = -500.0;
  }
  fVar4 = (float)__aeabi_fmul(fVar4,uVar1);
  pid->output = fVar4;
  pid->last_input = pid->input;
  pid->last_error = pid->error;
  pid->last_time = pid->time;
  return;
}


////>>0x08004978>>PID_Init>>////

/* WARNING: Unknown calling convention */

void PID_Init(void)

{
  pid_pitch.direction = 1;
  pid_roll.direction = 1;
  pid_yaw.direction = -1;
  pid_altitude.direction = 1;
  pid_pitch.breakpoint = 1500.0;
  pid_roll.breakpoint = 1450.0;
  pid_yaw.breakpoint = 2000.0;
  pid_altitude.breakpoint = 0.0;
  pid_pitch.con_KP = 4.4;
  pid_pitch.con_KI = 0.02;
  pid_pitch.con_KD = 280.0;
  pid_pitch.agr_KP = 4.5;
  pid_pitch.agr_KI = 0.02;
  pid_pitch.agr_KD = 360.0;
  pid_roll.con_KP = 3.8;
  pid_roll.con_KI = 0.02;
  pid_roll.con_KD = 260.0;
  pid_roll.agr_KP = 3.8;
  pid_roll.agr_KI = 0.02;
  pid_roll.agr_KD = 320.0;
  pid_yaw.con_KP = 3.0;
  pid_yaw.con_KI = 0.01;
  pid_yaw.con_KD = 280.0;
  pid_yaw.agr_KP = 0.0;
  pid_yaw.agr_KI = 0.0;
  pid_yaw.agr_KD = 0.0;
  pid_altitude.con_KP = 10.0;
  pid_altitude.con_KI = 0.0;
  pid_altitude.con_KD = 0.0;
  pid_altitude.agr_KP = 0.0;
  pid_altitude.agr_KI = 0.0;
  pid_altitude.agr_KD = 0.0;
  return;
}


////>>0x08004a30>>PID_UpdateAltitude>>////

/* WARNING: Unknown calling convention */

void PID_UpdateAltitude(void)

{
  if (joystick.ALT_HOLD != '\0') {
    if (ALT_FLAG == '\0') {
      MS5611_GetFilteredAltitude();
      pid_altitude.set_point = (float)__aeabi_fmul();
      ALT_FLAG = '\x01';
    }
    else {
      MS5611_GetFilteredAltitude();
      pid_altitude.input = (float)__aeabi_fmul();
    }
  }
  if (joystick.ALT_HOLD == '\0') {
    if (ALT_FLAG != '\0') {
      ALT_FLAG = joystick.ALT_HOLD;
    }
    pid_altitude.output = joystick.throttle;
  }
  return;
}


////>>0x08004a84>>PID_Update>>////

/* WARNING: Unknown calling convention */

void PID_Update(void)

{
  float in_r0;
  int iVar1;
  
  AHRS_GetPitch();
  pid_pitch.input = in_r0;
  AHRS_GetRoll();
  pid_roll.input = in_r0;
  AHRS_GetYaw();
  pid_yaw.input = in_r0;
  PID_UpdateAltitude();
  iVar1 = __aeabi_fcmpgt(pid_pitch.input,0);
  if (iVar1 == 0) {
    iVar1 = __aeabi_fcmplt(pid_pitch.input,0xc2a00000);
  }
  else {
    iVar1 = __aeabi_fcmpgt(pid_pitch.input,0x42a00000);
  }
  if (iVar1 == 0) {
    iVar1 = __aeabi_fcmpgt(pid_roll.input,0);
    if (iVar1 == 0) {
      iVar1 = __aeabi_fcmplt(pid_roll.input,0xc2a00000);
    }
    else {
      iVar1 = __aeabi_fcmpgt(pid_roll.input,0x42a00000);
    }
    if (iVar1 == 0) {
      toggleLED(1,1,1);
      PID_Compute(&pid_pitch);
      PID_Compute(&pid_roll);
      PID_Compute(&pid_yaw);
      if (joystick.ALT_HOLD != '\0') {
        PID_Compute(&pid_altitude);
        __addsf3(pid_altitude.output,0x44bb8000);
      }
      pid_altitude.output = joystick.throttle;
      if (joystick.MOTOR_ARM == '\0') {
        Motor_StopAll();
      }
      else {
        Motor_DistributeSpeed(joystick.throttle,pid_pitch.output,pid_roll.output,pid_yaw.output);
      }
      __aeabi_fmul(pid_pitch.con_KP,0x437f0000);
      msp_txf_pid.pitch.p = __fixunssfsi();
      __aeabi_fmul(pid_pitch.con_KI,0x437f0000);
      msp_txf_pid.pitch.i = __fixunssfsi();
      __aeabi_fmul(pid_roll.con_KP,0x437f0000);
      msp_txf_pid.roll.p = __fixunssfsi();
      __aeabi_fmul(pid_roll.con_KI,0x437f0000);
      msp_txf_pid.roll.i = __fixunssfsi();
      __aeabi_fmul(pid_roll.con_KD,0x437f0000);
      msp_txf_pid.roll.d = __fixunssfsi();
      __aeabi_fmul(pid_yaw.con_KP,0x437f0000);
      msp_txf_pid.yaw.p = __fixunssfsi();
      __aeabi_fmul(pid_yaw.con_KI,0x437f0000);
      msp_txf_pid.yaw.i = __fixunssfsi();
      __aeabi_fmul(pid_yaw.con_KD,0x437f0000);
      msp_txf_pid.yaw.d = __fixunssfsi();
      __aeabi_fmul(pid_altitude.con_KP,0x437f0000);
      msp_txf_pid.alt.p = __fixunssfsi();
      __aeabi_fmul(pid_altitude.con_KI,0x437f0000);
      msp_txf_pid.alt.i = __fixunssfsi();
      __aeabi_fmul(pid_altitude.con_KD,0x437f0000);
      msp_txf_pid.alt.d = __fixunssfsi();
      return;
    }
  }
  Motor_StopAll();
  toggleLED(0,1,0);
  return;
}


////>>0x08004c18>>serialWrite>>////

/* WARNING: Unknown calling convention */

void serialWrite(uchar ch)

{
  tx_buffer[0] = ch;
  HAL_UART_Transmit(&huart1,(uint8_t *)tx_buffer,1,5);
  return;
}


////>>0x08004c30>>HAL_UART_RxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)

{
  if (huart->Instance == (USART_TypeDef *)0x40013800) {
    CB_Write(&rxc,rx_buffer[0]);
    HAL_UART_Receive_IT(&huart1,rx_buffer,1);
    return;
  }
  return;
}


////>>0x08004c64>>serialFlush>>////

/* WARNING: Unknown calling convention */

void serialFlush(void)

{
  CB_Init(&rxc);
  return;
}


////>>0x08004c70>>serialBegin>>////

/* WARNING: Unknown calling convention */

void serialBegin(void)

{
  serialFlush();
  HAL_UART_Receive_IT(&huart1,rx_buffer,1);
  return;
}


////>>0x08004c8c>>serialPrint>>////

/* WARNING: Unknown calling convention */

void serialPrint(char *data)

{
  size_t sVar1;
  uchar *puVar2;
  
  for (puVar2 = (uchar *)data; sVar1 = strlen(data), (uint)((int)puVar2 - (int)data) < sVar1;
      puVar2 = puVar2 + 1) {
    serialWrite(*puVar2);
  }
  return;
}


////>>0x08004cac>>serialInt>>////

/* WARNING: Unknown calling convention */

void serialInt(int val)

{
  siprintf(tx_buffer,"%i",val);
  serialPrint(tx_buffer);
  return;
}


////>>0x08004ccc>>HAL_MspInit>>////


/* WARNING: Unknown calling convention */

void HAL_MspInit(void)

{
  uint32_t tmpreg;
  
  _DAT_40021018 = _DAT_40021018 | 1;
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_NVIC_SetPriority(MemoryManagement_IRQn,0,0);
  HAL_NVIC_SetPriority(BusFault_IRQn,0,0);
  HAL_NVIC_SetPriority(UsageFault_IRQn,0,0);
  HAL_NVIC_SetPriority(SVCall_IRQn,0,0);
  HAL_NVIC_SetPriority(DebugMonitor_IRQn,0,0);
  HAL_NVIC_SetPriority(PendSV_IRQn,0,0);
  HAL_NVIC_SetPriority(SysTick_IRQn,0,0);
  return;
}


////>>0x08004d48>>HAL_I2C_MspInit>>////

/* WARNING: Variable defined which should be unmapped: GPIO_InitStruct */

/* WARNING: Unknown calling convention */

void HAL_I2C_MspInit(I2C_HandleTypeDef *hi2c)

{
  uint32_t tmpreg;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  if (hi2c->Instance == (I2C_TypeDef *)0x40005400) {
    GPIO_InitStruct.Pin = 0xc0;
    GPIO_InitStruct.Mode = 0x12;
    GPIO_InitStruct.Speed = 3;
    HAL_GPIO_Init((GPIO_TypeDef *)0x40010c00,&GPIO_InitStruct);
    _DAT_4002101c = _DAT_4002101c | 0x200000;
  }
  return;
}


////>>0x08004d8c>>HAL_TIM_PWM_MspInit>>////


/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef *htim_pwm)

{
  TIM_TypeDef *pTVar1;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_2;
  uint32_t tmpreg_3;
  
  pTVar1 = htim_pwm->Instance;
  if (pTVar1 == (TIM_TypeDef *)0x40012c00) {
    _DAT_40021018 = _DAT_40021018 | 0x800;
  }
  else if (pTVar1 == (TIM_TypeDef *)0x40000000) {
    _DAT_4002101c = _DAT_4002101c | 1;
  }
  else if (pTVar1 == (TIM_TypeDef *)0x40000400) {
    _DAT_4002101c = _DAT_4002101c | 2;
  }
  else if (pTVar1 == (TIM_TypeDef *)0x40000800) {
    _DAT_4002101c = _DAT_4002101c | 4;
  }
  return;
}


////>>0x08004e14>>HAL_TIM_MspPostInit>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim)

{
  GPIO_TypeDef *GPIOx;
  TIM_TypeDef *pTVar1;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  pTVar1 = htim->Instance;
  if (pTVar1 == (TIM_TypeDef *)0x40012c00) {
    GPIO_InitStruct.Pin = 0x800;
  }
  else {
    if (pTVar1 != (TIM_TypeDef *)0x40000000) {
      if (pTVar1 == (TIM_TypeDef *)0x40000400) {
        GPIO_InitStruct.Pin = 3;
      }
      else {
        if (pTVar1 != (TIM_TypeDef *)0x40000800) {
          return;
        }
        GPIO_InitStruct.Pin = 0x300;
      }
      GPIOx = (GPIO_TypeDef *)0x40010c00;
      goto LAB_08004e2e;
    }
    GPIO_InitStruct.Pin = 2;
  }
  GPIOx = (GPIO_TypeDef *)0x40010800;
LAB_08004e2e:
  GPIO_InitStruct.Speed = 2;
  GPIO_InitStruct.Mode = 2;
  HAL_GPIO_Init(GPIOx,&GPIO_InitStruct);
  return;
}


////>>0x08004e7c>>HAL_UART_MspInit>>////


/* WARNING: Unknown calling convention */

void HAL_UART_MspInit(UART_HandleTypeDef *huart)

{
  uint32_t tmpreg;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  if (huart->Instance == (USART_TypeDef *)0x40013800) {
    _DAT_40021018 = _DAT_40021018 | 0x4000;
    GPIO_InitStruct.Pin = 0x200;
    GPIO_InitStruct.Mode = 2;
    GPIO_InitStruct.Speed = 3;
    HAL_GPIO_Init((GPIO_TypeDef *)0x40010800,&GPIO_InitStruct);
    GPIO_InitStruct.Pin = 0x400;
    GPIO_InitStruct.Mode = 0;
    GPIO_InitStruct.Pull = 0;
    HAL_GPIO_Init((GPIO_TypeDef *)0x40010800,&GPIO_InitStruct);
    HAL_NVIC_SetPriority(USART1_IRQn,0,0);
    HAL_NVIC_EnableIRQ(USART1_IRQn);
  }
  return;
}


////>>0x08004ee4>>NMI_Handler>>////

void NMI_Handler(void)

{
  return;
}


////>>0x08004ee6>>HardFault_Handler>>////

/* WARNING: Unknown calling convention */

void HardFault_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08004ee8>>MemManage_Handler>>////

/* WARNING: Unknown calling convention */

void MemManage_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08004eea>>BusFault_Handler>>////

/* WARNING: Unknown calling convention */

void BusFault_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08004eec>>UsageFault_Handler>>////

/* WARNING: Unknown calling convention */

void UsageFault_Handler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08004eee>>SVC_Handler>>////

void SVC_Handler(void)

{
  return;
}


////>>0x08004ef0>>DebugMon_Handler>>////

void DebugMon_Handler(void)

{
  return;
}


////>>0x08004ef2>>PendSV_Handler>>////

/* WARNING: Unknown calling convention */

void PendSV_Handler(void)

{
  return;
}


////>>0x08004ef4>>SysTick_Handler>>////

/* WARNING: Unknown calling convention */

void SysTick_Handler(void)

{
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
  return;
}


////>>0x08004f04>>USART1_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART1_IRQHandler(void)

{
  HAL_UART_IRQHandler(&huart1);
  return;
}


////>>0x08004f10>>SystemInit>>////


/* WARNING: Unknown calling convention */

void SystemInit(void)

{
  _DAT_40021000 = _DAT_40021000 & 0xfef2ffff | 1;
  _DAT_40021004 = _DAT_40021004 & 0xf8800000;
  _DAT_40021008 = 0x9f0000;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x08004f5c>>millis>>////

/* WARNING: Unknown calling convention */

uint32_t millis(void)

{
  return uwTick;
}


////>>0x08004f60>>micros>>////

/* WARNING: Unknown calling convention */

uint32_t micros(void)

{
  return uwTick;
}


////>>0x08004f64>>delay_ms>>////

/* WARNING: Unknown calling convention */

void delay_ms(uint32_t Delay)

{
  return;
}


////>>0x08004f68>>Reset_Handler>>////

void Reset_Handler(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &completed_8672; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(&_sidata + iVar1);
  }
  for (puVar2 = &completed_8672; puVar2 < &_ebss; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  SystemInit();
  __libc_init_array();
  UNRECOVERED_JUMPTABLE = (code *)0x8004f9a;
  main();
                    /* WARNING: Could not recover jumptable at 0x08004f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08004fb0>>USBWakeUp_IRQHandler>>////

void USBWakeUp_IRQHandler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08004fb4>>__libc_init_array>>////

void __libc_init_array(EVP_PKEY_CTX *param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    param_1 = (EVP_PKEY_CTX *)(*(code *)(&__frame_dummy_init_array_entry)[iVar1])();
  }
  _init(param_1);
  for (iVar1 = 0; iVar1 != 1; iVar1 = iVar1 + 1) {
    (*(code *)(&__frame_dummy_init_array_entry)[iVar1])();
  }
  return;
}


////>>0x08004ffc>>siprintf>>////

int siprintf(char *__s,char *__format,...)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  char *local_78 [2];
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  char *local_68;
  undefined4 local_64;
  char *pcStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_6c = 0x208;
  local_70 = 0x7fffffff;
  local_64 = 0x7fffffff;
  local_6a = 0xffff;
  local_78[0] = __s;
  local_68 = __s;
  pcStack_c = __format;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  iVar1 = _svfiprintf_r(_impure_ptr,local_78,__format);
  *local_78[0] = '\0';
  return iVar1;
}


////>>0x08005044>>__ssputs_r>>////

undefined4 __ssputs_r(undefined4 *param_1,void **param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  
  pvVar2 = param_2[2];
  if ((pvVar2 <= param_4) && ((*(ushort *)(param_2 + 3) & 0x480) != 0)) {
    __n = (int)*param_2 - (int)param_2[4];
    pvVar2 = (void *)((uint)((int)param_2[5] * 3) / 2);
    pvVar1 = (void *)((int)param_4 + __n + 1);
    if (pvVar2 < pvVar1) {
      pvVar2 = pvVar1;
    }
    if ((int)((uint)*(ushort *)(param_2 + 3) << 0x15) < 0) {
      pvVar1 = (void *)_malloc_r(param_1,pvVar2);
      if (pvVar1 == (void *)0x0) {
LAB_0800508a:
        *param_1 = 0xc;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
        return 0xffffffff;
      }
      memcpy(pvVar1,param_2[4],__n);
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
    }
    else {
      pvVar1 = (void *)_realloc_r(param_1,param_2[4],pvVar2);
      if (pvVar1 == (void *)0x0) {
        _free_r(param_1,param_2[4]);
        goto LAB_0800508a;
      }
    }
    param_2[4] = pvVar1;
    *param_2 = (void *)((int)pvVar1 + __n);
    param_2[5] = pvVar2;
    param_2[2] = (void *)((int)pvVar2 - __n);
    pvVar2 = param_4;
  }
  if (param_4 <= pvVar2) {
    pvVar2 = param_4;
  }
  memmove(*param_2,param_3,(size_t)pvVar2);
  param_2[2] = (void *)((int)param_2[2] - (int)pvVar2);
  *param_2 = (void *)((int)pvVar2 + (int)*param_2);
  return 0;
}


////>>0x080050fc>>_svfiprintf_r>>////

/* WARNING: Removing unreachable block (ram,0x08005294) */

int _svfiprintf_r(undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
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
    iVar2 = _malloc_r(param_1,0x40);
    *param_2 = iVar2;
    param_2[4] = iVar2;
    if (iVar2 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar6 = param_3;
LAB_08005146:
  pbVar7 = pbVar6;
  if (*pbVar7 != 0) goto LAB_080051ca;
  goto LAB_08005150;
LAB_080051ca:
  pbVar6 = pbVar7 + 1;
  if (*pbVar7 != 0x25) goto LAB_08005146;
LAB_08005150:
  iVar2 = (int)pbVar7 - (int)param_3;
  if (iVar2 != 0) {
    iVar3 = __ssputs_r(param_1,param_2,param_3,iVar2);
    if (iVar3 == -1) {
LAB_080052ac:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar2;
  }
  if (*pbVar7 == 0) goto LAB_080052ac;
  local_88 = 0;
  local_7c = 0;
  local_84 = -1;
  local_80 = 0;
  local_45 = 0;
  local_30 = 0;
  pbVar6 = pbVar7 + 1;
  while( true ) {
    pvVar4 = memchr(&DAT_08007379,(uint)*pbVar6,5);
    param_3 = pbVar6 + 1;
    if (pvVar4 == (void *)0x0) break;
    local_88 = 1 << ((int)pvVar4 + 0xf7ff8c87U & 0xff) | local_88;
    pbVar6 = param_3;
  }
  if ((int)(local_88 << 0x1b) < 0) {
    local_45 = 0x20;
  }
  if ((int)(local_88 << 0x1c) < 0) {
    local_45 = 0x2b;
  }
  if (*pbVar6 == 0x2a) {
    piVar5 = local_8c + 1;
    iVar2 = *local_8c;
    local_8c = piVar5;
    if (iVar2 < 0) {
      local_7c = -iVar2;
      local_88 = local_88 | 2;
      goto LAB_080051fc;
    }
  }
  else {
    bVar1 = false;
    iVar2 = local_7c;
    param_3 = pbVar6;
    while( true ) {
      if (9 < *param_3 - 0x30) break;
      iVar2 = iVar2 * 10 + (*param_3 - 0x30);
      bVar1 = true;
      param_3 = param_3 + 1;
    }
    if (!bVar1) goto LAB_080051fc;
  }
  local_7c = iVar2;
LAB_080051fc:
  if (*param_3 == 0x2e) {
    if (param_3[1] == 0x2a) {
      param_3 = param_3 + 2;
      piVar5 = local_8c + 1;
      local_84 = *local_8c;
      local_8c = piVar5;
      if (local_84 < 0) {
        local_84 = -1;
      }
    }
    else {
      bVar1 = false;
      iVar2 = 0;
      local_84 = 0;
      while( true ) {
        param_3 = param_3 + 1;
        if (9 < *param_3 - 0x30) break;
        iVar2 = iVar2 * 10 + (*param_3 - 0x30);
        bVar1 = true;
      }
      if (bVar1) {
        local_84 = iVar2;
      }
    }
  }
  pvVar4 = memchr(&DAT_0800737f,(uint)*param_3,3);
  if (pvVar4 != (void *)0x0) {
    param_3 = param_3 + 1;
    local_88 = local_88 | 0x40 << ((int)pvVar4 + 0xf7ff8c81U & 0xff);
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  pvVar4 = memchr("efgEFG",(uint)local_70,6);
  if (pvVar4 == (void *)0x0) {
    unaff_r9 = _printf_i(param_1,&local_88,param_2,0x8005045,&local_8c);
    if (unaff_r9 == -1) goto LAB_080052ac;
  }
  else {
    local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
  }
  local_74 = local_74 + unaff_r9;
  pbVar6 = param_3;
  goto LAB_08005146;
}


////>>0x080052e4>>_printf_common>>////

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


////>>0x080053d4>>_printf_i>>////

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
          if (bVar1 == 0) goto LAB_0800558e;
          if (bVar1 != 0x58) goto LAB_08005404;
          *(undefined *)((int)param_2 + 0x45) = 0x58;
          pcVar6 = "0123456789ABCDEF";
LAB_0800551e:
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
LAB_080054b4:
          *(undefined *)((int)param_2 + 0x43) = 0;
        }
        else {
          if ((bVar1 != 100) && (bVar1 != 0x69)) goto LAB_08005404;
          uVar10 = *param_2;
          puVar3 = *param_5;
          if ((uVar10 & 0x80) == 0) {
            *param_5 = puVar3 + 1;
            if ((uVar10 & 0x40) == 0) goto LAB_08005424;
            uVar10 = (uint)(short)*(ushort *)puVar3;
          }
          else {
            *param_5 = puVar3 + 1;
LAB_08005424:
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
          if (uVar10 != 0) goto LAB_08005552;
LAB_08005600:
          *(char *)((int)param_2 + 0x42) = *pcVar6;
          pcVar12 = (char *)((int)param_2 + 0x42);
        }
        else {
          *param_2 = *param_2 & 0xfffffffb;
          if (uVar10 == 0) {
            if (uVar11 != 0) goto LAB_08005600;
          }
          else {
LAB_08005552:
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
        goto LAB_080054fa;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      *(char *)((int)param_2 + 0x42) = (char)*puVar3;
LAB_08005464:
      __s = (char *)((int)param_2 + 0x42);
      uVar10 = 1;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 < 0x74) {
          if (bVar1 == 0x6f) {
LAB_0800548a:
            uVar10 = *param_2;
            puVar3 = *param_5;
            if ((uVar10 & 0x80) == 0) {
              *param_5 = puVar3 + 1;
              if ((uVar10 & 0x40) == 0) goto LAB_08005498;
              uVar10 = (uint)*(ushort *)puVar3;
            }
            else {
              *param_5 = puVar3 + 1;
LAB_08005498:
              uVar10 = *puVar3;
            }
            if (bVar1 == 0x6f) {
              uVar7 = 8;
            }
            else {
              uVar7 = 10;
            }
            pcVar6 = "0123456789ABCDEF";
            goto LAB_080054b4;
          }
          if (bVar1 == 0x70) {
            *param_2 = *param_2 | 0x20;
LAB_0800544a:
            pcVar6 = "0123456789abcdef";
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
    goto LAB_080054fa;
  }
  uVar10 = *param_2;
  ppuVar8 = (uint **)*param_5;
  uVar7 = param_2[5];
  if ((uVar10 & 0x80) == 0) {
    *param_5 = (uint *)(ppuVar8 + 1);
    puVar3 = *ppuVar8;
    if ((uVar10 & 0x40) == 0) goto LAB_0800557a;
    *(short *)puVar3 = (short)uVar7;
  }
  else {
    *param_5 = (uint *)(ppuVar8 + 1);
    puVar3 = *ppuVar8;
LAB_0800557a:
    *puVar3 = uVar7;
  }
LAB_0800558e:
  param_2[4] = 0;
LAB_080054fa:
  iVar2 = _printf_common(param_1,param_2,local_24,param_3,param_4);
  if ((iVar2 == -1) || (iVar2 = (*param_4)(param_1,param_3,__s,param_2[4]), iVar2 == -1)) {
LAB_0800550e:
    uVar10 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar2 = 0; iVar2 < (int)(param_2[3] - local_24[0]); iVar2 = iVar2 + 1) {
        iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar5 == -1) goto LAB_0800550e;
      }
    }
    uVar10 = param_2[3];
    if ((int)param_2[3] < (int)local_24[0]) {
      uVar10 = local_24[0];
    }
  }
  return uVar10;
}


////>>0x08005614>>memchr>>////

void * memchr(void *__s,int __c,size_t __n)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)__s;
  do {
    pbVar2 = pbVar1;
    if (pbVar2 == (byte *)(__n + (int)__s)) {
      return (void *)0x0;
    }
    pbVar1 = pbVar2 + 1;
  } while ((uint)*pbVar2 != (__c & 0xffU));
  return pbVar2;
}


////>>0x08005630>>memcpy>>////

void * memcpy(void *__dest,void *__src,size_t __n)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)((int)__dest + -1);
  puVar1 = (undefined *)(__n + (int)__src);
  for (; (undefined *)__src != puVar1; __src = (void *)((int)__src + 1)) {
    puVar2 = puVar2 + 1;
    *puVar2 = *__src;
                    /* WARNING: Load size is inaccurate */
  }
  return __dest;
}


////>>0x08005646>>memmove>>////

void * memmove(void *__dest,void *__src,size_t __n)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)((int)__src + __n);
  if ((__src < __dest) && (__dest < puVar3)) {
    puVar1 = (undefined *)((int)__dest + __n);
    iVar2 = __n - (int)puVar3;
    while (puVar3 + iVar2 != (undefined *)0x0) {
      puVar3 = puVar3 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar3;
    }
    return __dest;
  }
  puVar1 = (undefined *)((int)__dest + -1);
  for (; (undefined *)__src != puVar3; __src = (void *)((int)__src + 1)) {
    puVar1 = puVar1 + 1;
    *puVar1 = *__src;
                    /* WARNING: Load size is inaccurate */
  }
  return __dest;
}


////>>0x0800567c>>_free_r>>////

void _free_r(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  __malloc_lock();
  ppiVar2 = (int **)&__malloc_free_list;
  if (__malloc_free_list == (int **)0x0) {
    ppiVar5[1] = (int *)0x0;
    ppiVar1 = extraout_r1;
    __malloc_free_list = ppiVar5;
  }
  else {
    ppiVar2 = __malloc_free_list;
    if (ppiVar5 < __malloc_free_list) {
      ppiVar1 = (int **)*ppiVar5;
      ppiVar2 = (int **)((int)ppiVar5 + (int)ppiVar1);
      if (__malloc_free_list == ppiVar2) {
        piVar3 = *__malloc_free_list;
        __malloc_free_list = (int **)__malloc_free_list[1];
        ppiVar2 = (int **)((int)piVar3 + (int)ppiVar1);
        *ppiVar5 = (int *)ppiVar2;
      }
      ppiVar5[1] = (int *)__malloc_free_list;
      __malloc_free_list = ppiVar5;
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
  __malloc_unlock(param_1,ppiVar1,ppiVar2,param_4);
  return;
}


////>>0x08005714>>_malloc_r>>////

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
            __malloc_free_list = puVar1;
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
    if (__malloc_sbrk_start == 0) {
      __malloc_sbrk_start = _sbrk_r(param_1);
    }
    puVar1 = (uint *)_sbrk_r(param_1,uVar6);
    if ((puVar1 != (uint *)0xffffffff) &&
       ((puVar5 = (uint *)((int)puVar1 + 3U & 0xfffffffc), puVar1 == puVar5 ||
        (iVar2 = _sbrk_r(param_1,(int)puVar5 - (int)puVar1), iVar2 != -1)))) {
      *puVar5 = uVar6;
LAB_08005778:
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


////>>0x080057d0>>_realloc_r>>////

void * _realloc_r(undefined4 param_1,void *param_2,uint param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  
  if (param_2 != (void *)0x0) {
    if (param_3 == 0) {
      _free_r();
      pvVar1 = (void *)0x0;
    }
    else {
      uVar2 = _malloc_usable_size_r();
      pvVar1 = param_2;
      if ((uVar2 < param_3) && (pvVar1 = (void *)_malloc_r(param_1,param_3), pvVar1 != (void *)0x0))
      {
        memcpy(pvVar1,param_2,param_3);
        _free_r(param_1,param_2);
      }
    }
    return pvVar1;
  }
  pvVar1 = (void *)_malloc_r(param_1,param_3,param_3,param_4);
  return pvVar1;
}


////>>0x0800581c>>_sbrk_r>>////

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


////>>0x0800583c>>__malloc_lock>>////

void __malloc_lock(void)

{
  return;
}


////>>0x0800583e>>__malloc_unlock>>////

void __malloc_unlock(void)

{
  return;
}


////>>0x08005840>>_malloc_usable_size_r>>////

int _malloc_usable_size_r(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


////>>0x08005854>>asin>>////

/* WARNING: Removing unreachable block (ram,0x080058d4) */

double asin(double __x)

{
  int iVar1;
  undefined4 *puVar2;
  double dVar3;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  int in_stack_ffffffb8;
  char *in_stack_ffffffbc;
  
  dVar3 = (double)__ieee754_asin();
  if ((__fdlib_version != -1) && (iVar1 = __unorddf2(), dVar3 = extraout_d0, iVar1 == 0)) {
    fabs((double)CONCAT44(in_stack_ffffffbc,in_stack_ffffffb8));
    iVar1 = __aeabi_dcmpgt();
    dVar3 = extraout_d0_00;
    if ((iVar1 != 0) &&
       ((nan(""), __fdlib_version == '\x02' ||
        (iVar1 = matherr((exception *)&stack0xffffffb8), dVar3 = extraout_d0_02, iVar1 == 0)))) {
      puVar2 = (undefined4 *)__errno();
      *puVar2 = 0x21;
      dVar3 = extraout_d0_01;
    }
  }
  return dVar3;
}


////>>0x080058fc>>atan2>>////

undefined8 atan2(uint param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int extraout_r1_00;
  undefined4 unaff_r4;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_4 & 0x7fffffff;
  if ((0x7ff00000 < (uVar5 | (-param_3 | param_3) >> 0x1f)) ||
     (uVar3 = param_2 & 0x7fffffff, 0x7ff00000 < (uVar3 | (-param_1 | param_1) >> 0x1f))) {
    uVar6 = __aeabi_dadd(param_1,param_2);
    return uVar6;
  }
  if ((param_4 + 0xc0100000 | param_3) == 0) {
    atan(param_5);
    return CONCAT44(extraout_r1,param_1);
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
            uVar1 = 0;
            iVar4 = 0;
          }
          else {
            uVar1 = __divdf3(param_1,param_2);
            fabs((double)CONCAT44(unaff_r4,param_4));
            atan((double)CONCAT44(unaff_r4,param_4));
            iVar4 = extraout_r1_00;
          }
        }
        else {
          uVar1 = 0x54442d18;
          iVar4 = 0x3ff921fb;
        }
        if (uVar2 == 1) {
          return CONCAT44(iVar4 + -0x80000000,uVar1);
        }
        if (uVar2 == 2) {
          uVar7 = __subdf3(uVar1,iVar4,0x33145c07,0x3ca1a626);
          uVar6 = 0x400921fb54442d18;
        }
        else {
          if (uVar2 == 0) {
            return CONCAT44(iVar4,uVar1);
          }
          uVar6 = __subdf3(uVar1,iVar4,0x33145c07,0x3ca1a626);
          uVar7 = 0x400921fb54442d18;
        }
        uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
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


////>>0x08005900>>pow>>////

double pow(double __x,double __y)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar6;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double extraout_d0_06;
  double extraout_d0_07;
  double extraout_d0_08;
  double extraout_d0_09;
  double extraout_d0_10;
  double extraout_d0_11;
  double extraout_d0_12;
  double dVar7;
  undefined8 uVar8;
  undefined local_50 [24];
  undefined8 local_38;
  int local_30;
  
  dVar7 = (double)__ieee754_pow();
  cVar1 = __fdlib_version;
  if (__fdlib_version == -1) {
    return extraout_d0;
  }
  iVar2 = __unorddf2();
  if (iVar2 != 0) {
    return extraout_d0_00;
  }
  iVar2 = __unorddf2();
  if (iVar2 != 0) {
    iVar2 = __aeabi_dcmpeq();
    if (iVar2 == 0) {
      return extraout_d0_01;
    }
    local_50._0_4_ = 1;
    local_50._4_4_ = "pow";
    local_38 = 1.0;
    local_30 = 0;
    if (cVar1 == '\x02') {
      return extraout_d0_01;
    }
    goto LAB_08005978;
  }
  iVar2 = __aeabi_dcmpeq();
  if (iVar2 == 0) {
    iVar2 = finite(dVar7);
    if ((iVar2 == 0) && (iVar5 = finite(dVar7), iVar5 != 0)) {
      iVar5 = finite(dVar7);
      if (iVar5 == 0) goto LAB_08005b4c;
      local_30 = __unorddf2(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
      cVar1 = __fdlib_version;
      if (local_30 != 0) {
        local_50._4_4_ = "pow";
        local_50._0_4_ = 1;
        local_30 = iVar2;
        if (__fdlib_version == '\0') goto LAB_08005a22;
        local_38 = (double)__divdf3(0,0,0,0);
        goto LAB_08005a32;
      }
      local_50._4_4_ = "pow";
      local_50._0_4_ = 3;
      if (__fdlib_version != '\0') {
        local_38._0_4_ = 0;
        local_38._4_4_ = 0x7ff00000;
        iVar2 = __aeabi_dcmplt();
        if (iVar2 != 0) {
          uVar8 = __muldf3();
          uVar6 = (int)uVar8;
          rint(dVar7);
          iVar2 = __aeabi_dcmpeq((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar6,extraout_r1_00);
          if (iVar2 == 0) {
            local_38._0_4_ = 0;
            local_38._4_4_ = 0xfff00000;
          }
        }
        goto LAB_08005afa;
      }
      local_38._0_4_ = 0xe0000000;
      local_38._4_4_ = 0x47efffff;
      iVar2 = __aeabi_dcmplt();
      if (iVar2 != 0) {
        uVar8 = __muldf3();
        uVar6 = (int)uVar8;
        rint(dVar7);
        iVar2 = __aeabi_dcmpeq((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar6,extraout_r1);
        if (iVar2 == 0) {
          local_38._0_4_ = 0xe0000000;
          local_38._4_4_ = 0xc7efffff;
        }
        goto LAB_08005afa;
      }
LAB_08005b98:
      iVar2 = matherr((exception *)local_50);
      dVar7 = extraout_d0_12;
      if (iVar2 != 0) goto LAB_080059d0;
    }
    else {
LAB_08005b4c:
      iVar2 = __aeabi_dcmpeq(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),0,0);
      if (iVar2 == 0) {
        return extraout_d0_09;
      }
      iVar2 = finite(dVar7);
      if (iVar2 == 0) {
        return extraout_d0_10;
      }
      iVar2 = finite(dVar7);
      if (iVar2 == 0) {
        return extraout_d0_11;
      }
      local_50._0_4_ = 4;
      local_50._4_4_ = "pow";
      local_30 = 0;
      local_38._0_4_ = 0;
      local_38._4_4_ = 0;
LAB_08005afa:
      if (__fdlib_version != '\x02') goto LAB_08005b98;
    }
    puVar4 = (undefined4 *)__errno();
    uVar6 = 0x22;
    dVar7 = extraout_d0_08;
  }
  else {
    iVar2 = __aeabi_dcmpeq();
    if (iVar2 == 0) {
      iVar2 = finite(dVar7);
      if (iVar2 == 0) {
        return extraout_d0_05;
      }
      iVar2 = __aeabi_dcmplt();
      if (iVar2 == 0) {
        return extraout_d0_06;
      }
      local_50._0_4_ = 1;
      local_50._4_4_ = "pow";
      local_30 = 0;
      if (__fdlib_version == '\0') {
LAB_08005a22:
        local_50._4_4_ = "pow";
        local_50._0_4_ = 1;
        local_38 = 0.0;
        goto LAB_08005978;
      }
      local_38 = -INFINITY;
      local_30 = 0;
      cVar1 = __fdlib_version;
LAB_08005a32:
      if (cVar1 != '\x02') goto LAB_08005978;
    }
    else {
      local_50._0_4_ = 1;
      local_50._4_4_ = "pow";
      local_38 = 0.0;
      local_30 = 0;
      if (cVar1 != '\0') {
        local_38 = 1.0;
        dVar7 = extraout_d0_03;
        goto LAB_080059d0;
      }
LAB_08005978:
      iVar2 = matherr((exception *)local_50);
      dVar7 = extraout_d0_02;
      if (iVar2 != 0) goto LAB_080059d0;
    }
    puVar4 = (undefined4 *)__errno();
    uVar6 = 0x21;
    dVar7 = extraout_d0_07;
  }
  *puVar4 = uVar6;
LAB_080059d0:
  if (local_30 != 0) {
    piVar3 = (int *)__errno();
    *piVar3 = local_30;
    dVar7 = extraout_d0_04;
  }
  return dVar7;
}


////>>0x08005bc8>>sqrt>>////

double sqrt(double __x)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
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
  if (__fdlib_version == -1) {
    return dVar5;
  }
  local_30 = __unorddf2();
  if (local_30 != 0) {
    return extraout_d0;
  }
  iVar2 = __aeabi_dcmplt();
  if (iVar2 == 0) {
    return extraout_d0_00;
  }
  local_50._0_4_ = 1;
  local_50._4_4_ = "sqrt";
  if (cVar1 == '\0') {
    local_38 = 0.0;
LAB_08005c26:
    iVar2 = matherr((exception *)local_50);
    dVar5 = extraout_d0_01;
    if (iVar2 != 0) goto LAB_08005c2e;
  }
  else {
    local_38 = (double)__divdf3(0,0,0,0);
    if (cVar1 != '\x02') goto LAB_08005c26;
  }
  puVar4 = (undefined4 *)__errno();
  *puVar4 = 0x21;
  dVar5 = extraout_d0_03;
LAB_08005c2e:
  if (local_30 != 0) {
    piVar3 = (int *)__errno();
    *piVar3 = local_30;
    dVar5 = extraout_d0_02;
  }
  return dVar5;
}


////>>0x08005c70>>__ieee754_asin>>////

undefined8 __ieee754_asin(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 extraout_r1;
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
  undefined4 in_stack_ffffffc8;
  
  uVar9 = CONCAT44(param_2,param_1);
  uVar8 = param_2 & 0x7fffffff;
  if (uVar8 < 0x3ff00000) {
    if (uVar8 < 0x3fe00000) {
      if (0x3e3fffff < uVar8) {
        uVar10 = __muldf3(param_1,param_2,param_1,param_2);
        uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar6 = (undefined4)uVar10;
        uVar10 = __muldf3(uVar6,uVar7,0xdfdf709,0x3f023de1);
        uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x7501b288,0x3f49efe0);
        uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xb5688f3b,0x3fa48228);
        uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xe884455,0x3fc9c155);
        uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x3eb6f7d,0x3fd4d612);
        uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x55555555,0x3fc55555);
        uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
        uVar11 = __muldf3(uVar6,uVar7,0xb12e9282,0x3fb3b8c5);
        uVar11 = __subdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x1b8d0159,0x3fe6066c);
        uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar6,uVar7);
        uVar11 = __aeabi_dadd((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x9c598ac8,0x40002ae5);
        uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar6,uVar7);
        uVar11 = __subdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x1c8a2d4b,0x40033a27);
        uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar6,uVar7);
        uVar11 = __aeabi_dadd((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x3ff00000);
        uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
        uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_1,param_2);
        goto LAB_08005cba;
      }
      uVar10 = __aeabi_dadd(param_1,param_2,0x8800759c,0x7e37e43c);
      iVar1 = __aeabi_dcmpgt((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3ff00000);
      if (iVar1 != 0) {
        return uVar9;
      }
    }
    fabs((double)CONCAT44(param_2,in_stack_ffffffc8));
    uVar9 = __subdf3(0,0x3ff00000,param_1,extraout_r1);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3fe00000);
    uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar6 = (undefined4)uVar9;
    uVar9 = __muldf3(uVar6,uVar2,0xdfdf709,0x3f023de1);
    uVar9 = __aeabi_dadd((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x7501b288,0x3f49efe0);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xb5688f3b,0x3fa48228);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar9 = __aeabi_dadd((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xe884455,0x3fc9c155);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x3eb6f7d,0x3fd4d612);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar9 = __aeabi_dadd((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x55555555,0x3fc55555);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar2);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar10 = __muldf3(uVar6,uVar2,0xb12e9282,0x3fb3b8c5);
    uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x1b8d0159,0x3fe6066c);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar2);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x9c598ac8,0x40002ae5);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar2);
    uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x1c8a2d4b,0x40033a27);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar2);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3ff00000);
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar11 = __ieee754_sqrt(uVar6,uVar2);
    uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar7 = (undefined4)uVar11;
    if (uVar8 < 0x3fef3333) {
      uVar9 = __divdf3((int)uVar9,uVar3,(int)uVar10,uVar4);
      uVar10 = __aeabi_dadd(uVar7,uVar5,uVar7,uVar5);
      uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                       (int)((ulonglong)uVar10 >> 0x20));
      uVar10 = __muldf3(0,uVar5,0,uVar5);
      uVar10 = __subdf3(uVar6,uVar2,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      uVar11 = __aeabi_dadd(uVar7,uVar5,0,uVar5);
      uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
                        (int)((ulonglong)uVar11 >> 0x20));
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar10 = __aeabi_dadd((int)uVar10,uVar6,(int)uVar10,uVar6);
      uVar10 = __subdf3(0x33145c07,0x3c91a626,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                       (int)((ulonglong)uVar10 >> 0x20));
      uVar10 = __aeabi_dadd(0,uVar5,0,uVar5);
      uVar10 = __subdf3(0x54442d18,0x3fe921fb,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                       (int)((ulonglong)uVar10 >> 0x20));
      uVar6 = 0x3fe921fb;
    }
    else {
      uVar9 = __divdf3((int)uVar9,uVar3,(int)uVar10,uVar4);
      uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,uVar5);
      uVar9 = __aeabi_dadd((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar7,uVar5);
      uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar9 = __aeabi_dadd((int)uVar9,uVar6,(int)uVar9,uVar6);
      uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x33145c07,0x3c91a626);
      uVar6 = 0x3ff921fb;
    }
    uVar9 = __subdf3(0x54442d18,uVar6,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    if ((int)param_2 < 1) {
      uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20) + -0x80000000,(int)uVar9);
    }
  }
  else {
    if ((uVar8 + 0xc0100000 | param_1) != 0) {
      uVar9 = __subdf3(param_1,param_2,param_1,param_2);
      uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar9 = __divdf3((int)uVar9,uVar6,(int)uVar9,uVar6);
      return uVar9;
    }
    uVar9 = __muldf3(param_1,param_2,0x54442d18,0x3ff921fb);
    uVar10 = __muldf3(param_1,param_2,0x33145c07,0x3c91a626);
LAB_08005cba:
    uVar9 = __aeabi_dadd((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                         (int)((ulonglong)uVar10 >> 0x20));
  }
  return uVar9;
}


////>>0x08006070>>__ieee754_atan2>>////

undefined8 __ieee754_atan2(uint param_1,uint param_2,uint param_3,uint param_4,double param_5)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int extraout_r1_00;
  undefined4 unaff_r4;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_4 & 0x7fffffff;
  if ((0x7ff00000 < (uVar5 | (-param_3 | param_3) >> 0x1f)) ||
     (uVar3 = param_2 & 0x7fffffff, 0x7ff00000 < (uVar3 | (-param_1 | param_1) >> 0x1f))) {
    uVar6 = __aeabi_dadd(param_1,param_2);
    return uVar6;
  }
  if ((param_4 + 0xc0100000 | param_3) == 0) {
    atan(param_5);
    return CONCAT44(extraout_r1,param_1);
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
            uVar1 = 0;
            iVar4 = 0;
          }
          else {
            uVar1 = __divdf3(param_1,param_2);
            fabs((double)CONCAT44(unaff_r4,param_4));
            atan((double)CONCAT44(unaff_r4,param_4));
            iVar4 = extraout_r1_00;
          }
        }
        else {
          uVar1 = 0x54442d18;
          iVar4 = 0x3ff921fb;
        }
        if (uVar2 == 1) {
          return CONCAT44(iVar4 + -0x80000000,uVar1);
        }
        if (uVar2 == 2) {
          uVar7 = __subdf3(uVar1,iVar4,0x33145c07,0x3ca1a626);
          uVar6 = 0x400921fb54442d18;
        }
        else {
          if (uVar2 == 0) {
            return CONCAT44(iVar4,uVar1);
          }
          uVar6 = __subdf3(uVar1,iVar4,0x33145c07,0x3ca1a626);
          uVar7 = 0x400921fb54442d18;
        }
        uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
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


////>>0x08006228>>__ieee754_pow>>////

void __ieee754_pow(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  undefined4 uVar2;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 in_stack_ffffff94;
  undefined4 local_68;
  undefined4 local_64;
  int local_54;
  
  uVar10 = param_4 & 0x7fffffff;
  if ((uVar10 | param_3) == 0) {
    return;
  }
  uVar8 = param_2 & 0x7fffffff;
  if (uVar8 < 0x7ff00001) {
    if (uVar8 == 0x7ff00000) {
      if (param_1 == 0) {
        if (0x7ff00000 < uVar10) goto LAB_08006278;
LAB_08006262:
        if ((uVar10 != 0x7ff00000) || (param_3 == 0)) {
          if (-1 < (int)param_2) goto LAB_0800632a;
          if (uVar10 < 0x43400000) {
            if (uVar10 < 0x3ff00000) {
LAB_0800632a:
              uVar1 = 0;
              goto LAB_080062ba;
            }
            iVar4 = ((int)uVar10 >> 0x14) + -0x3ff;
            if (0x14 < iVar4) {
              uVar1 = param_3 >> (0x34U - iVar4 & 0xff);
              if (param_3 == uVar1 << (0x34U - iVar4 & 0xff)) {
                uVar1 = 2 - (uVar1 & 1);
                goto LAB_080062ba;
              }
              goto LAB_0800632a;
            }
            if (param_3 == 0) {
              uVar1 = (int)uVar10 >> (0x14U - iVar4 & 0xff);
              if (uVar10 == uVar1 << (0x14U - iVar4 & 0xff)) {
                uVar1 = 2 - (uVar1 & 1);
              }
              else {
                uVar1 = 0;
              }
              goto LAB_0800630c;
            }
            uVar1 = 0;
          }
          else {
            uVar1 = 2;
LAB_080062ba:
            if (param_3 == 0) {
              if (uVar10 == 0x7ff00000) {
                return;
              }
LAB_0800630c:
              if (uVar10 == 0x3ff00000) {
                if (-1 < (int)param_4) {
                  return;
                }
                uVar13 = 0x3ff0000000000000;
                uVar14 = CONCAT44(param_2,param_1);
                goto LAB_08006320;
              }
              if (param_4 == 0x40000000) goto LAB_0800634a;
              if ((param_4 == 0x3fe00000) && (-1 < (int)param_2)) {
                __ieee754_sqrt(param_1,param_2);
                return;
              }
            }
          }
          uVar5 = param_1;
          fabs((double)CONCAT44(in_stack_ffffff94,uVar1));
          uVar18 = CONCAT44(param_2,uVar5) & 0x7fffffffffffffff;
          if ((param_1 == 0) && ((uVar8 == 0 || ((param_2 & 0x3fffffff) == 0x3ff00000)))) {
            if ((int)param_4 < 0) {
              __divdf3(0,0x3ff00000,uVar5,extraout_r1);
            }
            if (-1 < (int)param_2) {
              return;
            }
            if ((uVar1 | uVar8 + 0xc0100000) != 0) {
              return;
            }
          }
          else {
            uVar5 = 0xffffffff - ((int)param_2 >> 0x1f);
            if ((uVar1 | uVar5) != 0) {
              if (uVar10 < 0x41e00001) {
                local_54 = 0;
                if (uVar8 < 0x100000) {
                  uVar18 = __muldf3();
                  local_54 = -0x35;
                }
                uVar10 = (uint)(uVar18 >> 0x20);
                local_54 = ((int)uVar10 >> 0x14) + -0x3ff + local_54;
                uVar10 = uVar10 & 0xfffff;
                uVar8 = uVar10 | 0x3ff00000;
                if (uVar10 < 0x3988f) {
LAB_08006628:
                  iVar4 = 0;
                }
                else {
                  if (0xbb679 < uVar10) {
                    uVar8 = uVar8 - 0x100000;
                    local_54 = local_54 + 1;
                    goto LAB_08006628;
                  }
                  iVar4 = 1;
                }
                iVar6 = iVar4 * 8;
                uVar7 = (&bp)[iVar4 * 2];
                uVar20 = (&DAT_080073c4)[iVar4 * 2];
                uVar13 = __subdf3();
                uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
                uVar14 = __aeabi_dadd((int)uVar18,uVar8,uVar7,uVar20);
                uVar14 = __divdf3(0,0x3ff00000,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
                uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar15 = __muldf3((int)uVar13,uVar11,(int)uVar14,uVar12);
                uVar2 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar9 = (undefined4)uVar15;
                uVar15 = __muldf3(0,uVar2);
                uVar13 = __subdf3((int)uVar13,uVar11,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
                uVar15 = __subdf3(0,((int)uVar8 >> 1 | 0x20000000U) + 0x80000 + iVar4 * 0x40000,
                                  uVar7,uVar20);
                uVar15 = __subdf3((int)uVar18,uVar8,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
                uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0,uVar2);
                uVar13 = __subdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar15,
                                  (int)((ulonglong)uVar15 >> 0x20));
                uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,uVar12);
                uVar12 = (undefined4)((ulonglong)uVar13 >> 0x20);
                uVar14 = __muldf3(uVar9,uVar2);
                uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar11 = (undefined4)uVar14;
                uVar14 = __muldf3(uVar11,uVar7,0x4a454eef,0x3fca7e28);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x93c9db65,
                                      0x3fcd864a);
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar11,uVar7);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xa91d4101,
                                      0x3fd17460);
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar11,uVar7);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x518f264d,
                                      0x3fd55555);
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar11,uVar7);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xdb6fabff,
                                      0x3fdb6db6);
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar11,uVar7);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x33333303,
                                      0x3fe33333);
                uVar15 = __muldf3(uVar11,uVar7,uVar11,uVar7);
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                  (int)((ulonglong)uVar15 >> 0x20));
                uVar15 = __aeabi_dadd(uVar9,uVar2,0,uVar2);
                uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar13,uVar12);
                uVar14 = __aeabi_dadd((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                                      (int)((ulonglong)uVar14 >> 0x20));
                uVar11 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar15 = __muldf3(0,uVar2,0,uVar2);
                uVar7 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar16 = __aeabi_dadd((int)uVar15,uVar7,0,0x40080000);
                __aeabi_dadd((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar14,uVar11);
                uVar16 = __muldf3(0,uVar2,0,extraout_r1_01);
                uVar20 = (undefined4)((ulonglong)uVar16 >> 0x20);
                uVar19 = __subdf3(0,extraout_r1_01,0,0x40080000);
                uVar15 = __subdf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar15,uVar7);
                uVar14 = __subdf3((int)uVar14,uVar11,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar9,uVar2);
                uVar13 = __muldf3((int)uVar13,uVar12,0,extraout_r1_01);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                                      (int)((ulonglong)uVar13 >> 0x20));
                uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
                __aeabi_dadd((int)uVar16,uVar20,(int)uVar14,uVar9);
                uVar13 = __muldf3(0,extraout_r1_02,0xe0000000,0x3feec709);
                uVar15 = __subdf3(0,extraout_r1_02,(int)uVar16,uVar20);
                uVar14 = __subdf3((int)uVar14,uVar9,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xdc3a03fd,0x3feec709
                                 );
                uVar15 = __muldf3(0,extraout_r1_02,0x145b01f5,0xbe3e2fe0);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                      (int)((ulonglong)uVar15 >> 0x20));
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                                      *(undefined4 *)(&dp_l + iVar6),
                                      *(undefined4 *)(&DAT_080073e4 + iVar6));
                uVar15 = __aeabi_i2d(local_54);
                uVar9 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar11 = *(undefined4 *)(&dp_h + iVar6);
                uVar12 = *(undefined4 *)(&DAT_080073d4 + iVar6);
                uVar16 = __aeabi_dadd((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                                      (int)((ulonglong)uVar14 >> 0x20));
                uVar16 = __aeabi_dadd((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar11,uVar12);
                __aeabi_dadd((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,uVar9);
                uVar15 = __subdf3(0,extraout_r1_03,(int)uVar15,uVar9);
                lVar17 = __subdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar11,uVar12);
                uVar10 = extraout_r1_03;
              }
              else {
                if (0x43f00000 < uVar10) {
                  if (0x3fefffff < uVar8) {
LAB_08006418:
                    if ((int)param_4 < 1) {
                      return;
                    }
                    goto LAB_0800634a;
                  }
LAB_080063fa:
                  if (-1 < (int)param_4) {
                    return;
                  }
                  goto LAB_0800634a;
                }
                if (uVar8 < 0x3fefffff) goto LAB_080063fa;
                if (0x3ff00000 < uVar8) goto LAB_08006418;
                uVar13 = __subdf3();
                uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
                uVar9 = (undefined4)uVar13;
                uVar13 = __muldf3(uVar9,uVar11,0x60000000,0x3ff71547);
                uVar14 = __muldf3(uVar9,uVar11,0xf85ddf44,0x3e54ae0b);
                uVar15 = __muldf3(uVar9,uVar11,0,0x3fd00000);
                uVar15 = __subdf3(0x55555555,0x3fd55555,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20)
                                 );
                uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar9,uVar11);
                uVar15 = __subdf3(0,0x3fe00000,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
                uVar16 = __muldf3(uVar9,uVar11,uVar9,uVar11);
                uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                                  (int)((ulonglong)uVar16 >> 0x20));
                uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0x652b82fe,0x3ff71547
                                 );
                uVar14 = __subdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                  (int)((ulonglong)uVar15 >> 0x20));
                __aeabi_dadd((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                             (int)((ulonglong)uVar14 >> 0x20));
                lVar17 = (ulonglong)extraout_r1_00 << 0x20;
                uVar10 = extraout_r1_00;
              }
              uVar13 = __subdf3((int)lVar17,(int)((ulonglong)lVar17 >> 0x20),(int)uVar13,
                                (int)((ulonglong)uVar13 >> 0x20));
              uVar13 = __subdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                                (int)((ulonglong)uVar13 >> 0x20));
              if ((uVar1 - 1 | uVar5) == 0) {
                uVar9 = 0xbff00000;
              }
              else {
                uVar9 = 0x3ff00000;
              }
              uVar20 = 0;
              uVar14 = __subdf3(param_3,param_4,0,param_4);
              uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0,uVar10);
              uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),param_3,param_4);
              uVar13 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                                    (int)((ulonglong)uVar13 >> 0x20));
              uVar2 = (undefined4)((ulonglong)uVar13 >> 0x20);
              uVar11 = (undefined4)uVar13;
              uVar13 = __muldf3(0,uVar10,0,param_4);
              uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
              uVar12 = (undefined4)uVar13;
              lVar17 = __aeabi_dadd(uVar11,uVar2,uVar12,uVar7);
              uVar8 = (uint)((ulonglong)lVar17 >> 0x20);
              uVar10 = (uint)lVar17;
              if (0x408fffffffffffff < lVar17) {
                if ((uVar8 + 0xbf700000 | uVar10) == 0) {
                  uVar14 = __aeabi_dadd(uVar11,uVar2,0x652b82fe,0x3c971547);
                  uVar15 = __subdf3(uVar10,uVar8,uVar12,uVar7);
                  iVar4 = __aeabi_dcmpgt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                         (int)((ulonglong)uVar15 >> 0x20));
                  if (iVar4 == 0) goto LAB_08006968;
                }
                __muldf3(uVar20,uVar9,0x8800759c,0x7e37e43c);
                goto LAB_0800634a;
              }
              if ((uVar8 & 0x7fffffff) < 0x4090cc00) {
LAB_08006968:
                if ((uVar8 & 0x7fffffff) < 0x3fe00001) {
                  iVar4 = 0;
                }
                else {
                  uVar8 = (0x100000 >> (((int)(uVar8 & 0x7fffffff) >> 0x14) - 0x3feU & 0xff)) +
                          uVar8;
                  uVar10 = (uVar8 * 2 >> 0x15) - 0x3ff;
                  iVar4 = (int)(uVar8 & 0xfffff | 0x100000) >> (0x14 - uVar10 & 0xff);
                  if (lVar17 < 0) {
                    iVar4 = -iVar4;
                  }
                  uVar13 = __subdf3(uVar12,uVar7,0,uVar8 & ~(0xfffff >> (uVar10 & 0xff)));
                }
                local_64 = (undefined4)((ulonglong)uVar13 >> 0x20);
                local_68 = (undefined4)uVar13;
                __aeabi_dadd(local_68,local_64,uVar11,uVar2);
                uVar13 = __muldf3(0,extraout_r1_04,0,0x3fe62e43);
                uVar12 = (undefined4)((ulonglong)uVar13 >> 0x20);
                uVar14 = __subdf3(0,extraout_r1_04,local_68,local_64);
                uVar14 = __subdf3(uVar11,uVar2,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xfefa39ef,0x3fe62e42
                                 );
                uVar15 = __muldf3(0,extraout_r1_04,0xca86c39,0xbe205c61);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,
                                      (int)((ulonglong)uVar15 >> 0x20));
                uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar15 = __aeabi_dadd((int)uVar13,uVar12,(int)uVar14,uVar2);
                uVar7 = (undefined4)((ulonglong)uVar15 >> 0x20);
                uVar11 = (undefined4)uVar15;
                uVar13 = __subdf3(uVar11,uVar7,(int)uVar13,uVar12);
                uVar13 = __subdf3((int)uVar14,uVar2,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
                uVar2 = (undefined4)((ulonglong)uVar13 >> 0x20);
                uVar14 = __muldf3(uVar11,uVar7,uVar11,uVar7);
                uVar3 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar12 = (undefined4)uVar14;
                uVar14 = __muldf3(uVar12,uVar3,0x72bea4d0,0x3e663769);
                uVar14 = __subdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xc5d26bf1,0x3ebbbd41
                                 );
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar3);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0xaf25de2c,
                                      0x3f11566a);
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar3);
                uVar14 = __subdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x16bebd93,0x3f66c16c
                                 );
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar3);
                uVar14 = __aeabi_dadd((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x5555553e,
                                      0x3fc55555);
                uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar12,uVar3);
                uVar14 = __subdf3(uVar11,uVar7,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
                uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar15 = __muldf3(uVar11,uVar7,(int)uVar14,uVar12);
                uVar14 = __subdf3((int)uVar14,uVar12,0,0x40000000);
                uVar14 = __divdf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                                  (int)((ulonglong)uVar14 >> 0x20));
                uVar15 = __muldf3(uVar11,uVar7,(int)uVar13,uVar2);
                uVar13 = __aeabi_dadd((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar13,uVar2
                                     );
                uVar13 = __subdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                                  (int)((ulonglong)uVar13 >> 0x20));
                uVar13 = __subdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar11,uVar7);
                uVar13 = __subdf3(0,0x3ff00000,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
                if ((int)((ulonglong)uVar13 >> 0x20) + iVar4 * 0x100000 < 0x100000) {
                  scalbn((double)CONCAT44(uVar9,uVar20),(int)uVar13);
                }
              }
              else {
                if ((uVar8 + 0x3f6f3400 | uVar10) == 0) {
                  uVar14 = __subdf3(uVar10,uVar8,uVar12,uVar7);
                  iVar4 = __aeabi_dcmple(uVar11,uVar2,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
                  if (iVar4 == 0) goto LAB_08006968;
                }
                __muldf3(uVar20,uVar9,0xc2f8f359,0x1a56e1f);
              }
LAB_0800634a:
              __muldf3();
              return;
            }
          }
          uVar13 = __subdf3();
          uVar14 = uVar13;
LAB_08006320:
          __divdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                   (int)((ulonglong)uVar14 >> 0x20));
          return;
        }
      }
    }
    else if (uVar10 < 0x7ff00001) goto LAB_08006262;
  }
  if ((uVar8 + 0xc0100000 | param_1) == 0) {
    return;
  }
LAB_08006278:
  nan("");
  return;
}


////>>0x08006c0c>>__ieee754_sqrt>>////

undefined8 __ieee754_sqrt(uint param_1,uint param_2)

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
    uVar12 = __muldf3(param_1,param_2,param_1,param_2);
    uVar12 = __aeabi_dadd(param_1,param_2,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    return uVar12;
  }
  if ((int)param_2 < 1) {
    if ((param_2 & 0x7fffffff | param_1) == 0) {
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != 0) {
      uVar12 = __subdf3(param_1,param_2,param_1,param_2);
      uVar1 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uVar12 = __divdf3((int)uVar12,uVar1,(int)uVar12,uVar1);
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


////>>0x08006d68>>atan>>////

double atan(double __x)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_r1;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  double in_d0;
  double extraout_d0;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = CONCAT44(in_r1,in_r0);
  uVar8 = in_r1 & 0x7fffffff;
  if (uVar8 < 0x44100000) {
    if (uVar8 < 0x3fdc0000) {
      if (uVar8 < 0x3e200000) {
        uVar9 = __aeabi_dadd(in_r0,in_r1,0x8800759c,0x7e37e43c);
        iVar1 = __aeabi_dcmpgt((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
        if (iVar1 != 0) {
          return extraout_d0;
        }
      }
      iVar1 = -1;
    }
    else {
      fabs((double)CONCAT44(unaff_r4,in_r3));
      if (uVar8 < 0x3ff30000) {
        if (uVar8 < 0x3fe60000) {
          uVar10 = __aeabi_dadd();
          uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0x3ff00000);
          uVar9 = __aeabi_dadd(in_r0,extraout_r1,0,0x40000000);
          uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                            (int)((ulonglong)uVar9 >> 0x20));
          iVar1 = 0;
        }
        else {
          uVar10 = __subdf3();
          uVar9 = __aeabi_dadd(in_r0,extraout_r1,0,0x3ff00000);
          uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                            (int)((ulonglong)uVar9 >> 0x20));
          iVar1 = 1;
        }
      }
      else if (uVar8 < 0x40038000) {
        uVar10 = __subdf3();
        uVar9 = __muldf3(in_r0,extraout_r1,0,0x3ff80000);
        uVar9 = __aeabi_dadd((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
        uVar10 = __divdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                          (int)((ulonglong)uVar9 >> 0x20));
        iVar1 = 2;
      }
      else {
        uVar10 = __divdf3(0,0xbff00000,in_r0,extraout_r1);
        iVar1 = 3;
      }
    }
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar6 = (undefined4)uVar10;
    uVar10 = __muldf3(uVar6,uVar7,uVar6,uVar7);
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar2 = (undefined4)uVar10;
    uVar10 = __muldf3(uVar2,uVar4,uVar2,uVar4);
    uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar3 = (undefined4)uVar10;
    uVar10 = __muldf3(uVar3,uVar5,0xe322da11,0x3f90ad3a);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x24760deb,0x3fa97b4b);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar3,uVar5);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xa0d03d51,0x3fb10d66);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar3,uVar5);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0xc54c206e,0x3fb745cd);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar3,uVar5);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x920083ff,0x3fc24924);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar3,uVar5);
    uVar10 = __aeabi_dadd((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0x5555550d,0x3fd55555);
    uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar2,uVar4);
    uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar9 = __muldf3(uVar3,uVar5,0x2c6a6c2f,0xbfa2b444);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x52defd9a,0x3fadde2d);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar5);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xaf749a6d,0x3fb3b0f2);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar5);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0xfe231671,0x3fbc71c6);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar5);
    uVar9 = __subdf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x9998ebc4,0x3fc99999);
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar3,uVar5);
    uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (iVar1 == -1) {
      uVar10 = __aeabi_dadd((int)uVar10,uVar2,(int)uVar9,uVar3);
      uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
      in_d0 = (double)__subdf3(uVar6,uVar7,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    }
    else {
      uVar10 = __aeabi_dadd((int)uVar10,uVar2,(int)uVar9,uVar3);
      uVar10 = __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
      iVar1 = iVar1 * 8;
      uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),
                        *(undefined4 *)(&atanlo + iVar1),*(undefined4 *)(&UNK_08007414 + iVar1));
      uVar10 = __subdf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar6,uVar7);
      in_d0 = (double)__subdf3(*(undefined4 *)(&atanhi + iVar1),
                               *(undefined4 *)(&UNK_080073f4 + iVar1),(int)uVar10,
                               (int)((ulonglong)uVar10 >> 0x20));
    }
  }
  else if ((0x7ff00000 < uVar8) || ((uVar8 == 0x7ff00000 && (in_r0 != 0)))) {
    in_d0 = (double)__aeabi_dadd();
  }
  return in_d0;
}


////>>0x0800708c>>fabs>>////

double fabs(double __x)

{
  double in_d0;
  
  return in_d0;
}


////>>0x08007092>>finite>>////

int finite(double __value)

{
  uint in_r1;
  
  return (in_r1 | 0x80000000) + 0x100000 >> 0x1f;
}


////>>0x0800709e>>matherr>>////

int matherr(exception *__exc)

{
  return 0;
}


////>>0x080070a4>>nan>>////

double nan(char *__tagb)

{
  double in_d0;
  
  return in_d0;
}


////>>0x080070b0>>rint>>////

double rint(double __x)

{
  int iVar1;
  uint in_r0;
  uint in_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  double in_d0;
  double dVar6;
  undefined8 uVar7;
  
  uVar5 = (in_r1 << 1) >> 0x15;
  uVar4 = uVar5 - 0x3ff;
  iVar1 = (int)in_r1 >> 0x1f;
  if ((int)uVar4 < 0x14) {
    if ((int)uVar4 < 0) {
      if ((in_r1 & 0x7fffffff | in_r0) == 0) {
        return in_d0;
      }
      uVar4 = in_r1 & 0xfffff | in_r0;
      iVar1 = iVar1 * -8;
      uVar2 = *(undefined4 *)(&TWO52 + iVar1);
      uVar3 = *(undefined4 *)(&DAT_08007434 + iVar1);
      uVar7 = __aeabi_dadd(in_r0,(-uVar4 | uVar4) >> 0xc & 0x80000 | in_r1 & 0xfffe0000,uVar2,uVar3)
      ;
      dVar6 = (double)__subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar2,uVar3);
      return dVar6;
    }
    uVar5 = 0xfffff >> (uVar4 & 0xff);
    if ((in_r1 & uVar5 | in_r0) == 0) {
      return in_d0;
    }
    uVar5 = uVar5 >> 1;
    in_r0 = in_r1 & uVar5 | in_r0;
    if (in_r0 != 0) {
      if (uVar4 == 0x13) {
        in_r0 = 0x80000000;
      }
      else {
        in_r0 = 0;
      }
      in_r1 = 0x40000 >> (uVar4 & 0xff) | in_r1 & ~uVar5;
    }
  }
  else {
    if (0x33 < (int)uVar4) {
      if (uVar4 != 0x400) {
        return in_d0;
      }
      dVar6 = (double)__aeabi_dadd();
      return dVar6;
    }
    uVar5 = uVar5 - 0x413;
    uVar4 = 0xffffffff >> (uVar5 & 0xff);
    if ((in_r0 & uVar4) == 0) {
      return in_d0;
    }
    uVar4 = uVar4 >> 1;
    if ((in_r0 & uVar4) != 0) {
      in_r0 = 0x40000000 >> (uVar5 & 0xff) | in_r0 & ~uVar4;
    }
  }
  iVar1 = iVar1 * -8;
  uVar2 = *(undefined4 *)(&TWO52 + iVar1);
  uVar3 = *(undefined4 *)(&DAT_08007434 + iVar1);
  uVar7 = __aeabi_dadd(in_r0,in_r1,uVar2,uVar3);
  dVar6 = (double)__subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar2,uVar3);
  return dVar6;
}


////>>0x080071c0>>scalbn>>////

double scalbn(double __x,int __n)

{
  uint in_r1;
  int extraout_r1;
  int in_r2;
  uint uVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  double in_d0;
  double dVar3;
  
  uVar1 = (in_r1 << 1) >> 0x15;
  if (uVar1 == 0) {
    if ((in_r1 & 0x7fffffff | __n) == 0) {
      return in_d0;
    }
    in_d0 = (double)__muldf3(__n,in_r1,0,0x43500000);
    if (in_r2 < -50000) goto LAB_0800722e;
    uVar1 = ((uint)(extraout_r1 << 1) >> 0x15) - 0x36;
  }
  else if (uVar1 == 0x7ff) {
    dVar3 = (double)__aeabi_dadd(__n,in_r1,__n);
    return dVar3;
  }
  iVar2 = uVar1 + in_r2;
  if (iVar2 < 0x7ff) {
    if (0 < iVar2) {
      return in_d0;
    }
    if (iVar2 + 0x35 < 0 == SCARRY4(iVar2,0x35)) goto LAB_0800722e;
    if (in_r2 < 0xc351) {
      copysign((double)CONCAT44(unaff_r4,in_r3),(double)CONCAT44(unaff_r6,unaff_r5));
      goto LAB_0800722e;
    }
  }
  copysign((double)CONCAT44(unaff_r4,in_r3),(double)CONCAT44(unaff_r6,unaff_r5));
LAB_0800722e:
  dVar3 = (double)__muldf3();
  return dVar3;
}


////>>0x0800729c>>copysign>>////

double copysign(double __x,double __y)

{
  double in_d0;
  
  return in_d0;
}


////>>0x080072ac>>__errno>>////

undefined4 __errno(void)

{
  return _impure_ptr;
}


////>>0x080072b8>>_sbrk>>////

void * _sbrk(intptr_t __delta)

{
  undefined *puVar1;
  
  if (heap_end_4116 == (undefined *)0x0) {
    heap_end_4116 = &_ebss;
  }
  puVar1 = heap_end_4116;
  heap_end_4116 = heap_end_4116 + __delta;
  return puVar1;
}


////>>0x080072d4>>_init>>////

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}


////>>0x080072e0>>_fini>>////

void _fini(void)

{
  return;
}


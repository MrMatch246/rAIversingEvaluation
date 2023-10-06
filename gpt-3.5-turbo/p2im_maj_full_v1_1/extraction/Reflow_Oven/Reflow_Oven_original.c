java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x0800010c>>__do_global_dtors_aux>>////

/* WARNING: Removing unreachable block (ram,0x08000118) */

undefined4 __do_global_dtors_aux(undefined4 param_1)

{
  if ((char)completed_8667 == '\0') {
    completed_8667._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x08000130>>frame_dummy>>////

/* WARNING: Removing unreachable block (ram,0x08000134) */
/* WARNING: Removing unreachable block (ram,0x0800014e) */
/* WARNING: Removing unreachable block (ram,0x08000144) */
/* WARNING: Removing unreachable block (ram,0x08000160) */
/* WARNING: Removing unreachable block (ram,0x08000154) */


void frame_dummy(void)

{
  return;
}


////>>0x08000178>>strlen>>////

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


////>>0x08000188>>__aeabi_drsub>>////

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __aeabi_dadd(param_1,param_2 ^ 0x80000000);
  return;
}


////>>0x08000190>>__subdf3>>////

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


////>>0x08000194>>__aeabi_dadd>>////

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


////>>0x0800040c>>__floatunsidf>>////

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


////>>0x0800042c>>__floatsidf>>////

ulonglong __floatsidf(uint param_1)

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


////>>0x08000450>>__aeabi_f2d>>////

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
      goto LAB_08000318;
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
LAB_08000318:
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


////>>0x0800048c>>__floatundidf>>////

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
LAB_080002a0:
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
  if ((param_2 & 0x100000) != 0) goto LAB_080002a0;
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
      goto LAB_08000318;
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
LAB_08000318:
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


////>>0x0800049c>>__aeabi_l2d>>////

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
LAB_080002a0:
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
  if ((uVar3 & 0x100000) != 0) goto LAB_080002a0;
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
      goto LAB_08000318;
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
LAB_08000318:
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


////>>0x080004f8>>__muldf3>>////

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


////>>0x0800074c>>__divdf3>>////

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


////>>0x0800091c>>__gedf2>>////

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


////>>0x08000924>>__ledf2>>////

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


////>>0x0800092c>>__eqdf2>>////

uint __eqdf2(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x080009a8>>__aeabi_cdrcmple>>////

void __aeabi_cdrcmple(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __aeabi_cdcmpeq(param_3,param_4,param_1,param_2);
  return;
}


////>>0x080009b8>>__aeabi_cdcmpeq>>////

undefined4 __aeabi_cdcmpeq(undefined4 param_1)

{
  __eqdf2();
  return param_1;
}


////>>0x080009c8>>__aeabi_dcmpeq>>////

bool __aeabi_dcmpeq(void)

{
  char in_ZR;
  
  __aeabi_cdcmpeq();
  return in_ZR != '\0';
}


////>>0x080009dc>>__aeabi_dcmplt>>////

bool __aeabi_dcmplt(void)

{
  char in_CY;
  
  __aeabi_cdcmpeq();
  return in_CY == '\0';
}


////>>0x080009f0>>__aeabi_dcmple>>////

bool __aeabi_dcmple(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdcmpeq();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08000a04>>__aeabi_dcmpge>>////

bool __aeabi_dcmpge(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cdrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x08000a18>>__aeabi_dcmpgt>>////

bool __aeabi_dcmpgt(void)

{
  char in_CY;
  
  __aeabi_cdrcmple();
  return in_CY == '\0';
}


////>>0x08000a2c>>__unorddf2>>////

undefined4 __unorddf2(uint param_1,int param_2,uint param_3,int param_4)

{
  if ((((param_2 << 1) >> 0x15 != -1) || ((param_1 | param_2 << 0xc) == 0)) &&
     (((param_4 << 1) >> 0x15 != -1 || ((param_3 | param_4 << 0xc) == 0)))) {
    return 0;
  }
  return 1;
}


////>>0x08000a58>>__fixdfsi>>////

uint __fixdfsi(uint param_1,uint param_2)

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


////>>0x08000aa8>>__fixunsdfsi>>////

uint __fixunsdfsi(uint param_1,uint param_2)

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


////>>0x08000ae8>>aflCall>>////

/* WARNING: Unknown calling convention */

uint32_t aflCall(uint32_t a0,uint32_t a1,int32_t a2)

{
  software_interrupt(0x3f);
  return a0;
}


////>>0x08000aec>>startForkserver>>////

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


////>>0x08000b08>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if ((__initialize_p == 1) && (__priority == 0xffff)) {
    PID::PID(&reflowOvenPID,&input,&output,&setpoint,(double)CONCAT44(kp._4_4_,kp._0_4_),
             (double)CONCAT44(ki._4_4_,ki._0_4_),(double)CONCAT44(kd._4_4_,kd._0_4_),0);
    LiquidCrystal::LiquidCrystal
              (&lcd,(uint8_t)lcdRsPin,(uint8_t)lcdEPin,(uint8_t)lcdD4Pin,(uint8_t)lcdD5Pin,
               (uint8_t)lcdD6Pin,(uint8_t)lcdD7Pin);
    MAX31855::MAX31855(&thermocouple,(uchar)thermocoupleSOPin,(uchar)thermocoupleCSPin,
                       (uchar)thermocoupleCLKPin);
    return;
  }
  return;
}


////>>0x08000bcc>>setup>>////

/* WARNING: Unknown calling convention */

void setup(void)

{
  digitalWrite(ssrPin,0);
  pinMode(ssrPin,1);
  digitalWrite(buzzerPin,0);
  pinMode(buzzerPin,1);
  digitalWrite(ledRedPin,0);
  pinMode(ledRedPin,1);
  digitalWrite(buzzerPin,1);
  LiquidCrystal::begin(&lcd,'\b','\x02','\0');
  LiquidCrystal::createChar(&lcd,'\0',degree);
  LiquidCrystal::clear(&lcd);
  Print::print(&lcd.super_Print,"Reflow");
  LiquidCrystal::setCursor(&lcd,'\0','\x01');
  Print::print(&lcd.super_Print,"Oven 1.2");
  digitalWrite(buzzerPin,0);
  delay(0x9c4);
  LiquidCrystal::clear(&lcd);
  HardwareSerial::begin(&Serial2,0xe100,'\x06');
  digitalWrite(ledRedPin,1);
  windowSize = 2000;
  nextCheck = millis();
  nextRead = millis();
  startForkserver(0);
  return;
}


////>>0x08000cbc>>_GLOBAL__sub_I_lcdMessagesReflowStatus>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I_lcdMessagesReflowStatus(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x08000cd0>>loop>>////

/* WARNING: Unknown calling convention */

void loop(void)

{
  double dVar1;
  uint32_t uVar2;
  MAX31855 *pMVar3;
  int iVar4;
  ulong now;
  int iVar5;
  size_t extraout_r1;
  int digits;
  int digits_00;
  int digits_01;
  size_t sVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined8 uVar7;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  uVar2 = millis();
  if (nextRead < uVar2) {
    nextRead = nextRead + 1000;
    pMVar3 = &thermocouple;
    MAX31855::readThermocouple(&thermocouple,CELSIUS);
    input._0_4_ = pMVar3;
    input._4_4_ = extraout_r1;
    iVar5 = __aeabi_dcmpeq();
    if (((iVar5 != 0) || (iVar5 = __aeabi_dcmpeq(pMVar3,extraout_r1,0,0x40c38880), iVar5 != 0)) ||
       (iVar5 = __aeabi_dcmpeq(pMVar3,extraout_r1,0,0x40c38900), iVar5 != 0)) {
      reflowState = REFLOW_STATE_ERROR;
      reflowStatus = REFLOW_STATUS_OFF;
    }
  }
  uVar2 = millis();
  iVar5 = ledRedPin;
  if (nextCheck < uVar2) {
    nextCheck = nextCheck + 1000;
    if (reflowStatus == REFLOW_STATUS_ON) {
      iVar4 = digitalRead(ledRedPin);
      digitalWrite(iVar5,(uint)(iVar4 == 0));
      timerSeconds = timerSeconds + 1;
      Print::print((Print *)&Serial2,timerSeconds,10);
      Print::print((Print *)&Serial2," ");
      Print::print((Print *)&Serial2,(double)CONCAT44(in_stack_ffffffe4,2),digits);
      Print::print((Print *)&Serial2," ");
      Print::print((Print *)&Serial2,(double)CONCAT44(in_stack_ffffffe4,2),digits_00);
      Print::print((Print *)&Serial2," ");
      Print::println((Print *)&Serial2,(double)CONCAT44(in_stack_ffffffe4,2),digits_01);
    }
    else {
      digitalWrite(ledRedPin,1);
    }
    LiquidCrystal::clear(&lcd);
    Print::print(&lcd.super_Print,lcdMessagesReflowStatus[reflowState]);
    LiquidCrystal::setCursor(&lcd,'\0','\x01');
    if (reflowState == REFLOW_STATE_ERROR) {
      Print::print(&lcd.super_Print,"TC Error!");
    }
    else {
      pMVar3 = input._0_4_;
      sVar6 = input._4_4_;
      Print::print(&lcd.super_Print,(double)CONCAT44(in_stack_ffffffe4,2),2);
      LiquidCrystal::write(&lcd,0,pMVar3,sVar6);
      Print::print(&lcd.super_Print,"C ");
    }
  }
  sVar6 = input._4_4_;
  pMVar3 = input._0_4_;
  setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
  switch(reflowState) {
  case REFLOW_STATE_IDLE:
    iVar5 = __aeabi_dcmpge(input._0_4_,input._4_4_,0,0x40490000);
    if (iVar5 == 0) {
      if (switchStatus == SWITCH_1) {
        Print::println((Print *)&Serial2,"Time Setpoint Input Output");
        timerSeconds = 0;
        windowStartTime = millis();
        setpoint._0_4_ = 0;
        setpoint._4_4_ = 0x4062c000;
        dVar1 = (double)__floatsidf(windowSize);
        PID::SetOutputLimits
                  (&reflowOvenPID,dVar1,(double)CONCAT44(in_stack_ffffffec,in_stack_ffffffe8));
        PID::SetSampleTime(&reflowOvenPID,1000);
        PID::SetMode(&reflowOvenPID,1);
        reflowState = REFLOW_STATE_PREHEAT;
      }
    }
    else {
      reflowState = REFLOW_STATE_TOO_HOT;
      setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    }
    break;
  case REFLOW_STATE_PREHEAT:
    reflowStatus = REFLOW_STATUS_ON;
    iVar5 = __aeabi_dcmpge(input._0_4_,input._4_4_,0,0x4062c000);
    setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    if (iVar5 != 0) {
      uVar2 = millis();
      timerSoak = uVar2 + 9000;
      PID::SetTunings(&reflowOvenPID,0.05,250.0,(double)CONCAT44(unaff_r5,unaff_r4));
      reflowState = REFLOW_STATE_SOAK;
      setpoint = 155.0;
    }
    break;
  case REFLOW_STATE_SOAK:
    uVar2 = millis();
    setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    if (timerSoak < uVar2) {
      uVar2 = millis();
      timerSoak = uVar2 + 9000;
      setpoint = (double)__aeabi_dadd(setpoint._0_4_,setpoint._4_4_,0,0x40140000);
      iVar5 = __aeabi_dcmpgt(SUB84(setpoint,0),(int)((ulonglong)setpoint >> 0x20),0,0x40690000);
      if (iVar5 != 0) {
        PID::SetTunings(&reflowOvenPID,0.05,350.0,(double)CONCAT44(unaff_r5,unaff_r4));
        reflowState = REFLOW_STATE_REFLOW;
        setpoint = 250.0;
      }
    }
    break;
  case REFLOW_STATE_REFLOW:
    iVar5 = __aeabi_dcmpge(input._0_4_,input._4_4_,0,0x406ea000);
    setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    if (iVar5 != 0) {
      PID::SetTunings(&reflowOvenPID,0.05,350.0,(double)CONCAT44(unaff_r5,unaff_r4));
      reflowState = REFLOW_STATE_COOL;
      setpoint = 100.0;
    }
    break;
  case REFLOW_STATE_COOL:
    iVar5 = __aeabi_dcmple(input._0_4_,input._4_4_,0,0x40590000);
    setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    if (iVar5 != 0) {
      uVar2 = millis();
      buzzerPeriod = uVar2 + 1000;
      digitalWrite(buzzerPin,1);
      reflowStatus = REFLOW_STATUS_OFF;
      reflowState = REFLOW_STATE_COMPLETE;
      setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    }
    break;
  case REFLOW_STATE_COMPLETE:
    uVar2 = millis();
    setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    if (buzzerPeriod < uVar2) {
      digitalWrite(buzzerPin,0);
      reflowState = REFLOW_STATE_IDLE;
      setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    }
    break;
  case REFLOW_STATE_TOO_HOT:
    iVar5 = __aeabi_dcmplt(input._0_4_,input._4_4_,0,0x40490000);
    setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    if (iVar5 != 0) {
      reflowState = REFLOW_STATE_IDLE;
      setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
    }
    break;
  case REFLOW_STATE_ERROR:
    iVar5 = __aeabi_dcmpeq(input._0_4_,input._4_4_,0,0x40c38800);
    if ((iVar5 == 0) && (iVar5 = __aeabi_dcmpeq(pMVar3,sVar6,0,0x40c38880), iVar5 == 0)) {
      iVar5 = __aeabi_dcmpeq(pMVar3,sVar6,0,0x40c38900);
      if (iVar5 == 0) {
        reflowState = REFLOW_STATE_IDLE;
        setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
        break;
      }
    }
    reflowState = REFLOW_STATE_ERROR;
    setpoint = (double)CONCAT44(setpoint._4_4_,setpoint._0_4_);
  }
  if ((switchStatus == SWITCH_1) && (reflowStatus == REFLOW_STATUS_ON)) {
    reflowStatus = REFLOW_STATUS_OFF;
    reflowState = REFLOW_STATE_IDLE;
  }
  if (debounceState == DEBOUNCE_STATE_CHECK) {
    uVar2 = analogRead(switchPin);
    if (uVar2 == 0) {
      uVar2 = millis();
      if (0x32 < uVar2 - lastDebounceTime) {
        debounceState = DEBOUNCE_STATE_RELEASE;
      }
    }
    else {
      debounceState = DEBOUNCE_STATE_IDLE;
    }
  }
  else if (debounceState == DEBOUNCE_STATE_IDLE) {
    switchStatus = SWITCH_NONE;
    uVar2 = analogRead(switchPin);
    if (uVar2 == 0) {
      lastDebounceTime = millis();
      debounceState = DEBOUNCE_STATE_CHECK;
    }
  }
  else if (debounceState == DEBOUNCE_STATE_RELEASE) {
    uVar2 = analogRead(switchPin);
    if (uVar2 != 0) {
      switchStatus = SWITCH_1;
      debounceState = DEBOUNCE_STATE_IDLE;
    }
  }
  if (reflowStatus == REFLOW_STATUS_ON) {
    uVar2 = millis();
    PID::Compute(&reflowOvenPID);
    if ((uint)windowSize < uVar2 - windowStartTime) {
      windowStartTime = windowStartTime + windowSize;
    }
    uVar7 = __floatunsidf(uVar2 - windowStartTime);
    iVar5 = __aeabi_dcmplt((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),output._0_4_,output._4_4_);
    if (iVar5 == 0) {
      digitalWrite(ssrPin,0);
      dVar1 = setpoint;
    }
    else {
      digitalWrite(ssrPin,1);
      dVar1 = setpoint;
    }
  }
  else {
    digitalWrite(ssrPin,0);
    dVar1 = setpoint;
  }
  setpoint._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
  setpoint._0_4_ = SUB84(dVar1,0);
  return;
}


////>>0x08001294>>setRowOffsets>>////

/* DWARF original prototype: void  setRowOffsets(LiquidCrystal * this, int row0, int row1, int row2,
   int row3) */

void __thiscall
LiquidCrystal::setRowOffsets(LiquidCrystal *this,int row0,int row1,int row2,int row3)

{
  this->_row_offsets[0] = (uint8_t)row0;
  this->_row_offsets[1] = (uint8_t)row1;
  this->_row_offsets[2] = (uint8_t)row2;
  this->_row_offsets[3] = (uint8_t)row3;
  return;
}


////>>0x080012a2>>pulseEnable>>////

/* DWARF original prototype: void  pulseEnable(LiquidCrystal * this) */

void __thiscall LiquidCrystal::pulseEnable(LiquidCrystal *this)

{
  digitalWrite((uint)this->_enable_pin,0);
  digitalWrite((uint)this->_enable_pin,1);
  digitalWrite((uint)this->_enable_pin,0);
  return;
}


////>>0x080012c0>>write4bits>>////

/* DWARF original prototype: void  write4bits(LiquidCrystal * this, uint8_t value) */

void __thiscall LiquidCrystal::write4bits(LiquidCrystal *this,uint8_t value)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < 4; uVar1 = uVar1 + 1) {
    digitalWrite((uint)this->_data_pins[uVar1],(int)(uint)value >> (uVar1 & 0xff) & 1);
  }
  pulseEnable(this);
  return;
}


////>>0x080012e8>>write8bits>>////

/* DWARF original prototype: void  write8bits(LiquidCrystal * this, uint8_t value) */

void __thiscall LiquidCrystal::write8bits(LiquidCrystal *this,uint8_t value)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < 8; uVar1 = uVar1 + 1) {
    digitalWrite((uint)this->_data_pins[uVar1],(int)(uint)value >> (uVar1 & 0xff) & 1);
  }
  pulseEnable(this);
  return;
}


////>>0x08001310>>send>>////

/* DWARF original prototype: void  send(LiquidCrystal * this, uint8_t value, uint8_t mode) */

ssize_t __thiscall
LiquidCrystal::send(LiquidCrystal *this,int __fd,void *__buf,size_t __n,int __flags)

{
  digitalWrite((uint)this->_rs_pin,(uint32_t)__buf);
  if (this->_rw_pin != 0xff) {
    digitalWrite((uint)this->_rw_pin,0);
  }
  if ((this->_displayfunction & 0x10) == 0) {
    write4bits(this,(uint8_t)((uint)__fd >> 4));
    write4bits(this,(uint8_t)__fd);
    return (ssize_t)this;
  }
  write8bits(this,(uint8_t)__fd);
  return (ssize_t)this;
}


////>>0x0800134e>>write>>////

/* DWARF original prototype: size_t  write(LiquidCrystal * this, uint8_t value) */

ssize_t __thiscall LiquidCrystal::write(LiquidCrystal *this,int __fd,void *__buf,size_t __n)

{
  send(this,__fd,(void *)0x1,__n,__n);
  return 1;
}


////>>0x0800135a>>clear>>////

/* DWARF original prototype: void  clear(LiquidCrystal * this) */

void __thiscall LiquidCrystal::clear(LiquidCrystal *this)

{
  size_t in_r3;
  
  send(this,1,(void *)0x0,in_r3,in_r3);
  return;
}


////>>0x08001366>>setCursor>>////

/* DWARF original prototype: void  setCursor(LiquidCrystal * this, uint8_t col, uint8_t row) */

void __thiscall LiquidCrystal::setCursor(LiquidCrystal *this,uint8_t col,uint8_t row)

{
  uint uVar1;
  int in_r3;
  
  uVar1 = (uint)row;
  if (3 < uVar1) {
    uVar1 = 3;
  }
  if (this->_numlines <= uVar1) {
    uVar1 = this->_numlines - 1 & 0xff;
  }
  send(this,(uint)(byte)(col + this->_row_offsets[uVar1] | 0x80),(void *)0x0,
       (uint)this->_row_offsets[uVar1],in_r3);
  return;
}


////>>0x0800138e>>display>>////

/* DWARF original prototype: void  display(LiquidCrystal * this) */

void __thiscall LiquidCrystal::display(LiquidCrystal *this)

{
  byte bVar1;
  size_t in_r3;
  
  bVar1 = this->_displaycontrol;
  this->_displaycontrol = bVar1 | 4;
  send(this,bVar1 | 0xc,(void *)0x0,in_r3,in_r3);
  return;
}


////>>0x080013a4>>begin>>////

/* DWARF original prototype: void  begin(LiquidCrystal * this, uint8_t cols, uint8_t lines, uint8_t
   dotsize) */

void __thiscall LiquidCrystal::begin(LiquidCrystal *this,uint8_t cols,uint8_t lines,uint8_t dotsize)

{
  int row3;
  size_t __n;
  int iVar1;
  
  if (1 < lines) {
    this->_displayfunction = this->_displayfunction | 8;
  }
  this->_numlines = lines;
  row3 = cols + 0x40;
  setRowOffsets(this,0,0x40,(uint)cols,row3);
  if ((dotsize != '\0') && (lines == '\x01')) {
    this->_displayfunction = this->_displayfunction | 4;
  }
  pinMode((uint)this->_rs_pin,1);
  if (this->_rw_pin != 0xff) {
    pinMode((uint)this->_rw_pin,1);
  }
  pinMode((uint)this->_enable_pin,1);
  iVar1 = 0;
  while( true ) {
    if ((this->_displayfunction & 0x10) == 0) {
      __n = 4;
    }
    else {
      __n = 8;
    }
    if ((int)__n <= iVar1) break;
    pinMode((uint)this->_data_pins[iVar1],1);
    iVar1 = iVar1 + 1;
  }
  digitalWrite((uint)this->_rs_pin,0);
  digitalWrite((uint)this->_enable_pin,0);
  if (this->_rw_pin != 0xff) {
    digitalWrite((uint)this->_rw_pin,0);
  }
  if ((this->_displayfunction & 0x10) == 0) {
    write4bits(this,'\x03');
    write4bits(this,'\x03');
    write4bits(this,'\x03');
    write4bits(this,'\x02');
  }
  else {
    send(this,this->_displayfunction | 0x20,(void *)0x0,__n,row3);
    send(this,this->_displayfunction | 0x20,(void *)0x0,__n,row3);
    send(this,this->_displayfunction | 0x20,(void *)0x0,__n,row3);
  }
  send(this,this->_displayfunction | 0x20,(void *)0x0,__n,row3);
  this->_displaycontrol = '\x04';
  display(this);
  clear(this);
  this->_displaymode = '\x02';
  send(this,6,(void *)0x0,2,row3);
  return;
}


////>>0x080014ba>>init>>////

/* DWARF original prototype: void  init(LiquidCrystal * this, uint8_t fourbitmode, uint8_t rs,
   uint8_t rw, uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t
   d5, uint8_t d6, uint8_t d7) */

int __thiscall LiquidCrystal::init(LiquidCrystal *this,EVP_PKEY_CTX *ctx)

{
  uint8_t in_r2;
  uint8_t in_r3;
  uint8_t in_stack_00000000;
  uint8_t in_stack_00000004;
  uint8_t in_stack_00000008;
  uint8_t in_stack_0000000c;
  uint8_t in_stack_00000010;
  uint8_t in_stack_00000014;
  uint8_t in_stack_00000018;
  uint8_t in_stack_0000001c;
  uint8_t in_stack_00000020;
  
  this->_rs_pin = in_r2;
  this->_rw_pin = in_r3;
  this->_enable_pin = in_stack_00000000;
  this->_data_pins[0] = in_stack_00000004;
  this->_data_pins[1] = in_stack_00000008;
  this->_data_pins[2] = in_stack_0000000c;
  this->_data_pins[3] = in_stack_00000010;
  this->_data_pins[4] = in_stack_00000014;
  this->_data_pins[5] = in_stack_00000018;
  this->_data_pins[6] = in_stack_0000001c;
  this->_data_pins[7] = in_stack_00000020;
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    this->_displayfunction = '\x10';
  }
  else {
    this->_displayfunction = '\0';
  }
  begin(this,'\x10','\x01','\0');
  return (int)this;
}


////>>0x08001510>>LiquidCrystal>>////

/* DWARF original prototype: LiquidCrystal *  LiquidCrystal(LiquidCrystal * this, uint8_t rs,
   uint8_t enable, uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3) */

LiquidCrystal * __thiscall
LiquidCrystal::LiquidCrystal
          (LiquidCrystal *this,uint8_t rs,uint8_t enable,uint8_t d0,uint8_t d1,uint8_t d2,uint8_t d3
          )

{
  (this->super_Print).write_error = 0;
  (this->super_Print)._vptr_Print = (_func_int_varargs **)&PTR_write_1_080073f8;
  init(this,(EVP_PKEY_CTX *)0x1);
  return this;
}


////>>0x08001550>>createChar>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08001574 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void  createChar(LiquidCrystal * this, uint8_t location, uint8_t *
   charmap) */

void __thiscall LiquidCrystal::createChar(LiquidCrystal *this,uint8_t location,uint8_t *charmap)

{
  size_t in_r3;
  int unaff_r4;
  int iVar1;
  
  send(this,(location & 7) << 3 | 0x40,(void *)0x0,in_r3,unaff_r4);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    (**(this->super_Print)._vptr_Print)(this,(uint)charmap[iVar1]);
  }
  return;
}


////>>0x0800157c>>MAX31855>>////

/* DWARF original prototype: MAX31855 *  MAX31855(MAX31855 * this, uchar SO, uchar CS, uchar SCK) */

MAX31855 * __thiscall MAX31855::MAX31855(MAX31855 *this,uchar SO,uchar CS,uchar SCK)

{
  this->so = SO;
  this->cs = CS;
  this->sck = SCK;
  pinMode((uint)SO,0);
  pinMode((uint)this->cs,1);
  pinMode((uint)this->sck,1);
  digitalWrite((uint)this->cs,1);
  digitalWrite((uint)this->sck,0);
  return this;
}


////>>0x080015b2>>readData>>////

/* DWARF original prototype: ulong  readData(MAX31855 * this) */

ulong __thiscall MAX31855::readData(MAX31855 *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  digitalWrite((uint)this->cs,0);
  uVar3 = 0;
  for (uVar2 = 0x1f; -1 < (int)uVar2; uVar2 = uVar2 - 1) {
    digitalWrite((uint)this->sck,1);
    iVar1 = digitalRead((uint)this->so);
    if (iVar1 != 0) {
      uVar3 = uVar3 | 1 << (uVar2 & 0xff);
    }
    digitalWrite((uint)this->sck,0);
  }
  digitalWrite((uint)this->cs,1);
  return uVar3;
}


////>>0x080015f8>>readThermocouple>>////

/* DWARF original prototype: double  readThermocouple(MAX31855 * this, unit_t unit) */

double __thiscall MAX31855::readThermocouple(MAX31855 *this,unit_t unit)

{
  ulong uVar1;
  ulong data;
  uint uVar2;
  double extraout_d0;
  double extraout_d0_00;
  double dVar3;
  undefined8 uVar4;
  
  uVar1 = readData(this);
  if ((uVar1 & 0x10000) == 0) {
    uVar2 = uVar1 >> 0x12;
    uVar4 = __floatunsidf(uVar2 & 0x1fff);
    if ((uVar2 & 0x2000) != 0) {
      uVar4 = __floatunsidf(~uVar2 & 0x1fff);
      uVar4 = __aeabi_dadd((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x3ff00000);
      uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20) + -0x80000000,(int)uVar4);
    }
    uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x3fd00000);
    dVar3 = extraout_d0_00;
    if (unit == FAHRENHEIT) {
      uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40220000);
      uVar4 = __divdf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40140000);
      dVar3 = (double)__aeabi_dadd((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40400000);
      return dVar3;
    }
  }
  else {
    uVar2 = uVar1 & 7;
    if (uVar2 == 2) {
      return extraout_d0;
    }
    if (uVar2 == 4) {
      return extraout_d0;
    }
    dVar3 = extraout_d0;
    if (uVar2 != 1) {
      return extraout_d0;
    }
  }
  return dVar3;
}


////>>0x080016b4>>Compute>>////

/* DWARF original prototype: bool  Compute(PID * this) */

bool __thiscall PID::Compute(PID *this)

{
  bool bVar1;
  uint32_t uVar2;
  ulong now;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong timeChange;
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
  double dVar18;
  double dVar19;
  double output;
  
  cVar11 = this->inAuto;
  if ((bool)cVar11 != false) {
    uVar2 = millis();
    if (uVar2 - this->lastTime < this->SampleTime) {
      cVar11 = '\0';
    }
    else {
      uVar5 = *(undefined4 *)this->myInput;
      uVar8 = *(undefined4 *)((int)this->myInput + 4);
      uVar15 = __subdf3(*(undefined4 *)this->mySetpoint,*(undefined4 *)((int)this->mySetpoint + 4));
      uVar14 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar16 = __subdf3(uVar5,uVar8,*(undefined4 *)&this->lastInput,
                        *(undefined4 *)((int)&this->lastInput + 4));
      uVar4 = (undefined4)((ulonglong)uVar16 >> 0x20);
      uVar17 = __muldf3((int)uVar15,uVar14,*(undefined4 *)&this->ki,
                        *(undefined4 *)((int)&this->ki + 4));
      dVar18 = (double)__aeabi_dadd((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),
                                    *(undefined4 *)&this->outputSum,
                                    *(undefined4 *)((int)&this->outputSum + 4));
      this->outputSum = dVar18;
      bVar1 = this->pOnE;
      if (bVar1 == false) {
        uVar17 = __muldf3((int)uVar16,uVar4,*(undefined4 *)&this->kp,
                          *(undefined4 *)((int)&this->kp + 4));
        dVar18 = (double)__subdf3(SUB84(dVar18,0),(int)((ulonglong)dVar18 >> 0x20),(int)uVar17,
                                  (int)((ulonglong)uVar17 >> 0x20));
        this->outputSum = dVar18;
      }
      uVar6 = *(undefined4 *)&this->outputSum;
      uVar9 = *(undefined4 *)((int)&this->outputSum + 4);
      uVar12 = *(undefined4 *)&this->outMax;
      uVar13 = *(undefined4 *)((int)&this->outMax + 4);
      dVar18 = this->outMax;
      iVar3 = __aeabi_dcmpgt(uVar6,uVar9,uVar12,uVar13);
      if (iVar3 == 0) {
        uVar7 = *(undefined4 *)&this->outMin;
        uVar10 = *(undefined4 *)((int)&this->outMin + 4);
        iVar3 = __aeabi_dcmplt(uVar6,uVar9);
        if (iVar3 != 0) {
          *(undefined4 *)&this->outputSum = uVar7;
          *(undefined4 *)((int)&this->outputSum + 4) = uVar10;
        }
      }
      else {
        *(undefined4 *)&this->outputSum = uVar12;
        *(undefined4 *)((int)&this->outputSum + 4) = uVar13;
      }
      if (bVar1 == false) {
        uVar15 = 0;
      }
      else {
        uVar15 = __muldf3((int)uVar15,uVar14,*(undefined4 *)&this->kp,
                          *(undefined4 *)((int)&this->kp + 4));
      }
      output._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
      output._0_4_ = (undefined4)uVar15;
      uVar14 = *(undefined4 *)&this->outputSum;
      uVar6 = *(undefined4 *)((int)&this->outputSum + 4);
      uVar15 = __muldf3((int)uVar16,uVar4,*(undefined4 *)&this->kd,
                        *(undefined4 *)((int)&this->kd + 4));
      uVar15 = __subdf3(uVar14,uVar6,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      dVar19 = (double)__aeabi_dadd(output._0_4_,output._4_4_,(int)uVar15,
                                    (int)((ulonglong)uVar15 >> 0x20));
      uVar14 = (undefined4)((ulonglong)dVar19 >> 0x20);
      iVar3 = __aeabi_dcmplt(uVar12,uVar13,SUB84(dVar19,0),uVar14);
      if (iVar3 == 0) {
        dVar18 = this->outMin;
        iVar3 = __aeabi_dcmplt(SUB84(dVar19,0),uVar14,*(undefined4 *)&this->outMin,
                               *(undefined4 *)((int)&this->outMin + 4));
        if (iVar3 == 0) {
          dVar18 = dVar19;
        }
      }
      *this->myOutput = dVar18;
      *(undefined4 *)&this->lastInput = uVar5;
      *(undefined4 *)((int)&this->lastInput + 4) = uVar8;
      this->lastTime = uVar2;
    }
  }
  return (bool)cVar11;
}


////>>0x08001814>>SetTunings>>////

/* DWARF original prototype: void  SetTunings(PID * this, double Kp, double Ki, double Kd, int POn)
    */

void __thiscall PID::SetTunings(PID *this,double Kp,double Ki,double Kd,int POn)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined uVar3;
  bool bVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = __aeabi_dcmplt();
  if (((iVar1 == 0) && (iVar1 = __aeabi_dcmplt(Kp._0_4_,Kp._4_4_,0,0), iVar1 == 0)) &&
     (iVar1 = __aeabi_dcmplt(Ki._0_4_,Ki._4_4_,0,0), iVar1 == 0)) {
    this->pOn = Kd._0_4_;
    bVar4 = Kd._0_4_ != 1;
    if (bVar4) {
      Kd._0_4_ = 0;
    }
    uVar3 = (undefined)Kd._0_4_;
    if (!bVar4) {
      uVar3 = true;
    }
    this->pOnE = (bool)uVar3;
    *(undefined4 *)&this->dispKp = in_r2;
    *(undefined4 *)((int)&this->dispKp + 4) = in_r3;
    this->dispKi = Kp;
    this->dispKd = Ki;
    uVar5 = __floatunsidf(this->SampleTime);
    uVar5 = __divdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x408f4000);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    *(undefined4 *)&this->kp = in_r2;
    *(undefined4 *)((int)&this->kp + 4) = in_r3;
    dVar6 = (double)__muldf3(Kp._0_4_,Kp._4_4_,(int)uVar5,uVar2);
    this->ki = dVar6;
    dVar7 = (double)__divdf3(Ki._0_4_,Ki._4_4_,(int)uVar5,uVar2);
    this->kd = dVar7;
    if (this->controllerDirection == 1) {
      dVar8 = (double)__subdf3(0,0);
      this->kp = dVar8;
      dVar6 = (double)__subdf3(0,0,SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
      this->ki = dVar6;
      dVar6 = (double)__subdf3(0,0,SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
      this->kd = dVar6;
    }
  }
  return;
}


////>>0x080018f8>>SetTunings>>////

/* DWARF original prototype: void  SetTunings(PID * this, double Kp, double Ki, double Kd) */

void __thiscall PID::SetTunings(PID *this,double Kp,double Ki,double Kd)

{
  undefined4 in_stack_ffffffec;
  
  SetTunings(this,Kp,Ki,(double)CONCAT44(in_stack_ffffffec,this->pOn),this->pOn);
  return;
}


////>>0x08001918>>SetSampleTime>>////

/* DWARF original prototype: void  SetSampleTime(PID * this, int NewSampleTime) */

void __thiscall PID::SetSampleTime(PID *this,int NewSampleTime)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  if (0 < NewSampleTime) {
    uVar2 = __floatsidf(NewSampleTime);
    uVar3 = __floatunsidf(this->SampleTime);
    uVar2 = __divdf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,
                     (int)((ulonglong)uVar3 >> 0x20));
    uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
    dVar4 = (double)__muldf3((int)uVar2,uVar1,*(undefined4 *)&this->ki,
                             *(undefined4 *)((int)&this->ki + 4));
    this->ki = dVar4;
    dVar4 = (double)__divdf3(*(undefined4 *)&this->kd,*(undefined4 *)((int)&this->kd + 4),(int)uVar2
                             ,uVar1);
    this->kd = dVar4;
    this->SampleTime = NewSampleTime;
  }
  return;
}


////>>0x08001960>>SetOutputLimits>>////

/* DWARF original prototype: void  SetOutputLimits(PID * this, double Min, double Max) */

void __thiscall PID::SetOutputLimits(PID *this,double Min,double Max)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  double *pdVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = __aeabi_dcmpge();
  if (iVar1 == 0) {
    *(undefined4 *)&this->outMin = in_r2;
    *(undefined4 *)((int)&this->outMin + 4) = in_r3;
    this->outMax = Min;
    if (this->inAuto != false) {
      pdVar2 = this->myOutput;
      iVar1 = __aeabi_dcmplt(Min._0_4_,Min._4_4_,*(undefined4 *)pdVar2,
                             *(undefined4 *)((int)pdVar2 + 4));
      if (iVar1 == 0) {
        iVar1 = __aeabi_dcmpgt();
        if (iVar1 != 0) {
          *(undefined4 *)pdVar2 = in_r2;
          *(undefined4 *)((int)pdVar2 + 4) = in_r3;
        }
      }
      else {
        *pdVar2 = Min;
      }
      uVar3 = *(undefined4 *)&this->outputSum;
      uVar4 = *(undefined4 *)((int)&this->outputSum + 4);
      uVar5 = *(undefined4 *)&this->outMax;
      uVar6 = *(undefined4 *)((int)&this->outMax + 4);
      iVar1 = __aeabi_dcmpgt(uVar3,uVar4,uVar5,uVar6);
      if (iVar1 != 0) {
        *(undefined4 *)&this->outputSum = uVar5;
        *(undefined4 *)((int)&this->outputSum + 4) = uVar6;
        return;
      }
      uVar5 = *(undefined4 *)&this->outMin;
      uVar6 = *(undefined4 *)((int)&this->outMin + 4);
      iVar1 = __aeabi_dcmplt(uVar3,uVar4,uVar5,uVar6);
      if (iVar1 != 0) {
        *(undefined4 *)&this->outputSum = uVar5;
        *(undefined4 *)((int)&this->outputSum + 4) = uVar6;
      }
    }
  }
  return;
}


////>>0x080019f6>>Initialize>>////

/* DWARF original prototype: void  Initialize(PID * this) */

void __thiscall PID::Initialize(PID *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = *(undefined4 *)this->myOutput;
  uVar4 = *(undefined4 *)((int)this->myOutput + 4);
  *(undefined4 *)&this->outputSum = uVar3;
  *(undefined4 *)((int)&this->outputSum + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)this->myInput + 4);
  *(undefined4 *)&this->lastInput = *(undefined4 *)this->myInput;
  *(undefined4 *)((int)&this->lastInput + 4) = uVar2;
  uVar2 = *(undefined4 *)&this->outMax;
  uVar5 = *(undefined4 *)((int)&this->outMax + 4);
  iVar1 = __aeabi_dcmpgt(uVar3,uVar4,uVar2,uVar5);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)&this->outMin;
    uVar5 = *(undefined4 *)((int)&this->outMin + 4);
    iVar1 = __aeabi_dcmplt(uVar3,uVar4,uVar2,uVar5);
    if (iVar1 != 0) {
      *(undefined4 *)&this->outputSum = uVar2;
      *(undefined4 *)((int)&this->outputSum + 4) = uVar5;
    }
    return;
  }
  *(undefined4 *)&this->outputSum = uVar2;
  *(undefined4 *)((int)&this->outputSum + 4) = uVar5;
  return;
}


////>>0x08001a44>>SetMode>>////

/* DWARF original prototype: void  SetMode(PID * this, int Mode) */

void __thiscall PID::SetMode(PID *this,int Mode)

{
  bool newAuto;
  bool bVar1;
  
  if (Mode == 1) {
    bVar1 = true;
    if (this->inAuto == false) {
      Initialize(this);
    }
  }
  else {
    bVar1 = false;
  }
  this->inAuto = bVar1;
  return;
}


////>>0x08001a66>>SetControllerDirection>>////

/* DWARF original prototype: void  SetControllerDirection(PID * this, int Direction) */

void __thiscall PID::SetControllerDirection(PID *this,int Direction)

{
  double dVar1;
  
  if ((this->inAuto != false) && (this->controllerDirection != Direction)) {
    dVar1 = (double)__subdf3(0,0,*(undefined4 *)&this->kp,*(undefined4 *)((int)&this->kp + 4));
    this->kp = dVar1;
    dVar1 = (double)__subdf3(0,0,*(undefined4 *)&this->ki,*(undefined4 *)((int)&this->ki + 4));
    this->ki = dVar1;
    dVar1 = (double)__subdf3(0,0,*(undefined4 *)&this->kd,*(undefined4 *)((int)&this->kd + 4));
    this->kd = dVar1;
  }
  this->controllerDirection = Direction;
  return;
}


////>>0x08001ab0>>PID>>////

/* DWARF original prototype: PID *  PID(PID * this, double * Input, double * Output, double *
   Setpoint, double Kp, double Ki, double Kd, int POn, int ControllerDirection) */

PID * __thiscall
PID::PID(PID *this,double *Input,double *Output,double *Setpoint,double Kp,double Ki,double Kd,
        int POn,int ControllerDirection)

{
  uint32_t uVar1;
  int POn_00;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  undefined4 in_stack_fffffff4;
  
  this->myOutput = Output;
  this->myInput = Input;
  this->mySetpoint = Setpoint;
  this->inAuto = false;
  SetOutputLimits(this,255.0,(double)CONCAT44(in_stack_ffffffec,in_stack_ffffffe8));
  this->SampleTime = 100;
  SetControllerDirection(this,ControllerDirection);
  SetTunings(this,Ki,Kd,(double)CONCAT44(in_stack_fffffff4,POn),POn_00);
  uVar1 = millis();
  this->lastTime = uVar1 - this->SampleTime;
  return this;
}


////>>0x08001b18>>PID>>////

/* DWARF original prototype: PID *  PID(PID * this, double * Input, double * Output, double *
   Setpoint, double Kp, double Ki, double Kd, int ControllerDirection) */

PID * __thiscall
PID::PID(PID *this,double *Input,double *Output,double *Setpoint,double Kp,double Ki,double Kd,
        int ControllerDirection)

{
  PID(this,Input,Output,Setpoint,Kp,Ki,Kd,1,ControllerDirection);
  return this;
}


////>>0x08001b48>>SystemClock_Config>>////

/* WARNING: Unknown calling convention */

void SystemClock_Config(void)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  RCC_PeriphCLKInitTypeDef PeriphClkInit;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_OscInitTypeDef RCC_OscInitStruct;
  
  RCC_OscInitStruct.OscillatorType = 2;
  RCC_OscInitStruct.HSIState = 1;
  RCC_OscInitStruct.HSICalibrationValue = 0x10;
  RCC_OscInitStruct.PLL.PLLState = 2;
  RCC_OscInitStruct.PLL.PLLSource = 0;
  RCC_OscInitStruct.PLL.PLLMUL = 0x380000;
  HVar1 = HAL_RCC_OscConfig((RCC_OscInitTypeDef_conflict *)&RCC_OscInitStruct);
  if (HVar1 != HAL_OK) {
    _Error_Handler("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/variants/NUCLEO_F103RB/variant.cpp"
                   ,0x88);
  }
  RCC_ClkInitStruct.ClockType = 0xf;
  RCC_ClkInitStruct.SYSCLKSource = 2;
  RCC_ClkInitStruct.AHBCLKDivider = 0;
  RCC_ClkInitStruct.APB1CLKDivider = 0x400;
  RCC_ClkInitStruct.APB2CLKDivider = 0;
  HVar1 = HAL_RCC_ClockConfig((RCC_ClkInitTypeDef_conflict *)&RCC_ClkInitStruct,2);
  if (HVar1 != HAL_OK) {
    _Error_Handler("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/variants/NUCLEO_F103RB/variant.cpp"
                   ,0x95);
  }
  PeriphClkInit.PeriphClockSelection = 2;
  PeriphClkInit.AdcClockSelection = 0x8000;
  HVar1 = HAL_RCCEx_PeriphCLKConfig((RCC_PeriphCLKInitTypeDef_conflict *)&PeriphClkInit);
  if (HVar1 != HAL_OK) {
    _Error_Handler("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/variants/NUCLEO_F103RB/variant.cpp"
                   ,0x9c);
  }
  uVar2 = HAL_RCC_GetHCLKFreq();
  HAL_SYSTICK_Config(uVar2 / 1000);
  HAL_SYSTICK_CLKSourceConfig(4);
  HAL_NVIC_SetPriority(SysTick_IRQn,0,0);
  return;
}


////>>0x08001be8>>Reset_Handler>>////

void Reset_Handler(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined *)(iVar1 + 0x20000000) < &_edata; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(&_sidata + iVar1);
  }
  for (puVar2 = &completed_8667; puVar2 < &_ebss; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  SystemInit();
  __libc_init_array();
  UNRECOVERED_JUMPTABLE = (code *)0x8001c1a;
  main();
                    /* WARNING: Could not recover jumptable at 0x08001c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08001c30>>USB_HP_CAN1_TX_IRQHandler>>////

void USB_HP_CAN1_TX_IRQHandler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08001c32>>init>>////

int init(EVP_PKEY_CTX *ctx)

{
  hw_config_init();
  return (int)ctx;
}


////>>0x08001c3a>>HAL_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_MspInit(void)

{
  return;
}


////>>0x08001c3c>>HAL_InitTick>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_InitTick(uint32_t TickPriority)

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


////>>0x08001c88>>HAL_Init>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_Init(void)

{
  _DAT_40022000 = _DAT_40022000 | 0x10;
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_InitTick(0xf);
  HAL_MspInit();
  return HAL_OK;
}


////>>0x08001cac>>HAL_IncTick>>////

/* WARNING: Unknown calling convention */

void HAL_IncTick(void)

{
  uwTick = uwTickFreq + uwTick;
  return;
}


////>>0x08001cc4>>HAL_GetTick>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_GetTick(void)

{
  return uwTick;
}


////>>0x08001cd0>>HAL_ADC_PollForConversion>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_ADC_PollForConversion(ADC_HandleTypeDef *hadc,uint32_t Timeout)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  uint32_t uVar5;
  ADC_TypeDef *pAVar6;
  uint uVar7;
  uint32_t Conversion_Timeout_CPU_cycles;
  
  Conversion_Timeout_CPU_cycles = 0;
  uVar2 = HAL_GetTick();
  uVar5 = SystemCoreClock;
  pAVar6 = hadc->Instance;
  if ((pAVar6->CR2 & 0x100) == 0) {
    if (((pAVar6->CR1 & 0x100) == 0) && ((pAVar6->SQR1 & 0xf00000) == 0)) {
      do {
        if ((hadc->Instance->SR & 2) != 0) goto LAB_08001de2;
      } while ((Timeout == 0xffffffff) ||
              ((Timeout != 0 && (uVar5 = HAL_GetTick(), uVar5 - uVar2 <= Timeout))));
      hadc->State = hadc->State | 4;
      hadc->Lock = HAL_UNLOCKED;
      HVar1 = HAL_TIMEOUT;
    }
    else {
      uVar3 = HAL_RCCEx_GetPeriphCLKFreq(2);
      pAVar6 = hadc->Instance;
      if (((pAVar6->SMPR2 & 0x24924924) == 0) && ((pAVar6->SMPR1 & 0x924924) == 0)) {
        if ((pAVar6->SMPR2 & 0x12492492) == 0) {
          if ((pAVar6->SMPR1 & 0x492492) == 0) {
            iVar4 = 0x14;
          }
          else {
            iVar4 = 0x29;
          }
        }
        else {
          iVar4 = 0x29;
        }
      }
      else if (((pAVar6->SMPR2 & 0x12492492) == 0) && ((pAVar6->SMPR1 & 0x492492) == 0)) {
        iVar4 = 0x54;
      }
      else if ((pAVar6->SMPR2 & 0x249249) == 0) {
        if ((pAVar6->SMPR1 & 0x249249) == 0) {
          iVar4 = 0x54;
        }
        else {
          iVar4 = 0xfc;
        }
      }
      else {
        iVar4 = 0xfc;
      }
      uVar7 = (uVar5 / uVar3) * iVar4;
      for (; Conversion_Timeout_CPU_cycles <= uVar7 && uVar7 - Conversion_Timeout_CPU_cycles != 0;
          Conversion_Timeout_CPU_cycles = Conversion_Timeout_CPU_cycles + 1) {
        if ((Timeout != 0xffffffff) &&
           ((Timeout == 0 || (uVar5 = HAL_GetTick(), Timeout < uVar5 - uVar2)))) {
          hadc->State = hadc->State | 4;
          hadc->Lock = HAL_UNLOCKED;
          return HAL_TIMEOUT;
        }
      }
LAB_08001de2:
      hadc->Instance->SR = 0xffffffed;
      hadc->State = hadc->State | 0x200;
      if ((hadc->Instance->CR2 & 0xe0000) == 0xe0000) {
        if ((hadc->Init).ContinuousConvMode == 0) {
          hadc->State = hadc->State & 0xfffffeff;
          if ((hadc->State & 0x1000) == 0) {
            hadc->State = hadc->State | 1;
            HVar1 = HAL_OK;
          }
          else {
            HVar1 = HAL_OK;
          }
        }
        else {
          HVar1 = HAL_OK;
        }
      }
      else {
        HVar1 = HAL_OK;
      }
    }
  }
  else {
    hadc->State = hadc->State | 0x20;
    hadc->Lock = HAL_UNLOCKED;
    HVar1 = HAL_ERROR;
  }
  return HVar1;
}


////>>0x08001e40>>HAL_ADC_GetValue>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef *hadc)

{
  return hadc->Instance->DR;
}


////>>0x08001e48>>HAL_ADC_ConfigChannel>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_ADC_ConfigChannel(ADC_HandleTypeDef *hadc,ADC_ChannelConfTypeDef *sConfig)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint uVar2;
  uint32_t wait_loop_index;
  
  if (hadc->Lock == HAL_LOCKED) {
    HVar1 = HAL_BUSY;
  }
  else {
    hadc->Lock = HAL_LOCKED;
    uVar2 = sConfig->Rank;
    if (uVar2 < 7) {
      uVar2 = uVar2 * 5 - 5;
      hadc->Instance->SQR3 =
           sConfig->Channel << (uVar2 & 0xff) | hadc->Instance->SQR3 & ~(0x1f << (uVar2 & 0xff));
    }
    else if (uVar2 < 0xd) {
      uVar2 = uVar2 * 5 - 0x23;
      hadc->Instance->SQR2 =
           sConfig->Channel << (uVar2 & 0xff) | hadc->Instance->SQR2 & ~(0x1f << (uVar2 & 0xff));
    }
    else {
      uVar2 = uVar2 * 5 - 0x41;
      hadc->Instance->SQR1 =
           sConfig->Channel << (uVar2 & 0xff) | hadc->Instance->SQR1 & ~(0x1f << (uVar2 & 0xff));
    }
    uVar2 = sConfig->Channel;
    if (uVar2 < 10) {
      hadc->Instance->SMPR2 =
           sConfig->SamplingTime << (uVar2 * 3 & 0xff) |
           hadc->Instance->SMPR2 & ~(7 << (uVar2 * 3 & 0xff));
    }
    else {
      uVar2 = uVar2 * 3 - 0x1e;
      hadc->Instance->SMPR1 =
           sConfig->SamplingTime << (uVar2 & 0xff) | hadc->Instance->SMPR1 & ~(7 << (uVar2 & 0xff));
    }
    if (sConfig->Channel - 0x10 < 2) {
      if (hadc->Instance == (ADC_TypeDef *)0x40012400) {
        if ((uRam40012408 & 0x800000) == 0) {
          uRam40012408 = uRam40012408 | 0x800000;
          if (sConfig->Channel == 0x10) {
            for (wait_loop_index = (SystemCoreClock / 1000000) * 10; wait_loop_index != 0;
                wait_loop_index = wait_loop_index - 1) {
            }
            HVar1 = HAL_OK;
          }
          else {
            HVar1 = HAL_OK;
          }
        }
        else {
          HVar1 = HAL_OK;
        }
      }
      else {
        hadc->State = hadc->State | 0x20;
        HVar1 = HAL_ERROR;
      }
    }
    else {
      HVar1 = HAL_OK;
    }
    hadc->Lock = HAL_UNLOCKED;
  }
  return HVar1;
}


////>>0x08001f80>>HAL_ADC_GetState>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_ADC_GetState(ADC_HandleTypeDef *hadc)

{
  return hadc->State;
}


////>>0x08001f84>>ADC_Enable>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict ADC_Enable(ADC_HandleTypeDef *hadc)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  ADC_TypeDef *pAVar4;
  uint32_t wait_loop_index;
  
  pAVar4 = hadc->Instance;
  if ((pAVar4->CR2 & 1) == 0) {
    pAVar4->CR2 = pAVar4->CR2 | 1;
    for (wait_loop_index = SystemCoreClock / 1000000; wait_loop_index != 0;
        wait_loop_index = wait_loop_index - 1) {
    }
    uVar2 = HAL_GetTick();
    do {
      if ((hadc->Instance->CR2 & 1) != 0) {
        return HAL_OK;
      }
      uVar3 = HAL_GetTick();
    } while (uVar3 - uVar2 < 3);
    hadc->State = hadc->State | 0x10;
    hadc->ErrorCode = hadc->ErrorCode | 1;
    hadc->Lock = HAL_UNLOCKED;
    HVar1 = HAL_ERROR;
  }
  else {
    HVar1 = HAL_OK;
  }
  return HVar1;
}


////>>0x08002004>>HAL_ADC_Start>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_ADC_Start(ADC_HandleTypeDef *hadc)

{
  HAL_StatusTypeDef_conflict HVar1;
  ADC_TypeDef *pAVar2;
  
  if (hadc->Lock != HAL_LOCKED) {
    hadc->Lock = HAL_LOCKED;
    HVar1 = ADC_Enable(hadc);
    if (HVar1 == HAL_OK) {
      hadc->State = hadc->State & 0xfffffcfe | 0x100;
      pAVar2 = hadc->Instance;
      if ((pAVar2 == (ADC_TypeDef *)0x40012800) && ((_DAT_40012404 & 0xf0000) != 0)) {
        hadc->State = hadc->State | 0x100000;
        if ((_DAT_40012404 & 0x400) != 0) {
          hadc->State = hadc->State & 0xffffcfff | 0x1000;
        }
      }
      else {
        hadc->State = hadc->State & 0xffefffff;
        if ((pAVar2->CR1 & 0x400) != 0) {
          hadc->State = hadc->State & 0xffffcfff | 0x1000;
        }
      }
      if ((hadc->State & 0x1000) == 0) {
        hadc->ErrorCode = 0;
      }
      else {
        hadc->ErrorCode = hadc->ErrorCode & 0xfffffff9;
      }
      hadc->Lock = HAL_UNLOCKED;
      pAVar2->SR = 0xfffffffd;
      pAVar2 = hadc->Instance;
      if (((pAVar2->CR2 & 0xe0000) == 0xe0000) &&
         ((pAVar2 != (ADC_TypeDef *)0x40012800 || ((_DAT_40012404 & 0xf0000) == 0)))) {
        pAVar2->CR2 = pAVar2->CR2 | 0x500000;
      }
      else {
        pAVar2->CR2 = pAVar2->CR2 | 0x100000;
      }
    }
    else {
      hadc->Lock = HAL_UNLOCKED;
    }
    return HVar1;
  }
  return HAL_BUSY;
}


////>>0x080020f0>>ADC_ConversionStop_Disable>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict ADC_ConversionStop_Disable(ADC_HandleTypeDef *hadc)

{
  uint32_t uVar1;
  uint32_t uVar2;
  ADC_TypeDef *pAVar3;
  
  pAVar3 = hadc->Instance;
  if ((pAVar3->CR2 & 1) == 0) {
    return HAL_OK;
  }
  pAVar3->CR2 = pAVar3->CR2 & 0xfffffffe;
  uVar1 = HAL_GetTick();
  do {
    if ((hadc->Instance->CR2 & 1) == 0) {
      return HAL_OK;
    }
    uVar2 = HAL_GetTick();
  } while (uVar2 - uVar1 < 3);
  hadc->State = hadc->State | 0x10;
  hadc->ErrorCode = hadc->ErrorCode | 1;
  return HAL_ERROR;
}


////>>0x0800213c>>HAL_ADC_Init>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_ADC_Init(ADC_HandleTypeDef *hadc)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  
  if (hadc == (ADC_HandleTypeDef *)0x0) {
    return HAL_ERROR;
  }
  if (hadc->State == 0) {
    hadc->ErrorCode = 0;
    hadc->Lock = HAL_UNLOCKED;
    HAL_ADC_MspInit(hadc);
  }
  HVar1 = ADC_ConversionStop_Disable(hadc);
  if (((hadc->State & 0x10) == 0) && (HVar1 == HAL_OK)) {
    hadc->State = hadc->State & 0xffffeefd | 2;
    uVar5 = (hadc->Init).ContinuousConvMode;
    uVar3 = (hadc->Init).DataAlign | (hadc->Init).ExternalTrigConv | uVar5 << 1;
    uVar2 = (hadc->Init).ScanConvMode;
    if (uVar2 == 0x100) {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0;
      if (uVar2 == 1) {
        uVar4 = 0x100;
      }
    }
    if ((hadc->Init).DiscontinuousConvMode == 1) {
      if (uVar5 == 0) {
        uVar4 = uVar4 | ((hadc->Init).NbrOfDiscConversion - 1) * 0x2000 | 0x800;
      }
      else {
        hadc->State = hadc->State | 0x20;
        hadc->ErrorCode = hadc->ErrorCode | 1;
      }
    }
    hadc->Instance->CR1 = uVar4 | hadc->Instance->CR1 & 0xffff16ff;
    hadc->Instance->CR2 = hadc->Instance->CR2 & 0xffe1f7fd | uVar3;
    uVar2 = (hadc->Init).ScanConvMode;
    if ((uVar2 == 0x100) || (uVar2 == 1)) {
      uVar4 = ((hadc->Init).NbrOfConversion - 1) * 0x100000;
    }
    else {
      uVar4 = 0;
    }
    hadc->Instance->SQR1 = uVar4 | hadc->Instance->SQR1 & 0xff0fffff;
    if (uVar3 != (hadc->Instance->CR2 & 0xff1f0efe)) {
      hadc->State = hadc->State & 0xffffffed | 0x10;
      hadc->ErrorCode = hadc->ErrorCode | 1;
      return HAL_ERROR;
    }
    hadc->ErrorCode = 0;
    hadc->State = hadc->State & 0xfffffffc | 1;
    return HAL_OK;
  }
  hadc->State = hadc->State | 0x10;
  return HAL_ERROR;
}


////>>0x0800224c>>HAL_ADC_DeInit>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_ADC_DeInit(ADC_HandleTypeDef *hadc)

{
  HAL_StatusTypeDef_conflict HVar1;
  
  if (hadc == (ADC_HandleTypeDef *)0x0) {
    HVar1 = HAL_ERROR;
  }
  else {
    hadc->State = hadc->State | 2;
    HVar1 = ADC_ConversionStop_Disable(hadc);
    if (HVar1 == HAL_OK) {
      hadc->Instance->SR = 0xffffffe0;
      hadc->Instance->CR1 = hadc->Instance->CR1 & 0xff3f0000;
      hadc->Instance->CR2 = hadc->Instance->CR2 & 0xff0106f0;
      hadc->Instance->SMPR1 = hadc->Instance->SMPR1 & 0xff000000;
      hadc->Instance->SMPR2 = hadc->Instance->SMPR2 & 0xc0000000;
      hadc->Instance->JOFR1 = hadc->Instance->JOFR1 & 0xfffff000;
      hadc->Instance->JOFR2 = hadc->Instance->JOFR2 & 0xfffff000;
      hadc->Instance->JOFR3 = hadc->Instance->JOFR3 & 0xfffff000;
      hadc->Instance->JOFR4 = hadc->Instance->JOFR4 & 0xfffff000;
      hadc->Instance->HTR = hadc->Instance->HTR & 0xfffff000;
      hadc->Instance->LTR = hadc->Instance->LTR & 0xfffff000;
      hadc->Instance->SQR1 = hadc->Instance->SQR1 & 0xff000000;
      hadc->Instance->SQR1 = hadc->Instance->SQR1 & 0xff000000;
      hadc->Instance->SQR2 = hadc->Instance->SQR2 & 0xc0000000;
      hadc->Instance->SQR3 = hadc->Instance->SQR3 & 0xc0000000;
      hadc->Instance->JSQR = hadc->Instance->JSQR & 0xffc00000;
      hadc->Instance->JSQR = hadc->Instance->JSQR & 0xffc00000;
      HAL_ADC_MspDeInit(hadc);
      hadc->ErrorCode = 0;
      hadc->State = 0;
    }
    hadc->Lock = HAL_UNLOCKED;
  }
  return HVar1;
}


////>>0x08002348>>HAL_ADC_Stop>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_ADC_Stop(ADC_HandleTypeDef *hadc)

{
  HAL_StatusTypeDef_conflict HVar1;
  
  if (hadc->Lock == HAL_LOCKED) {
    return HAL_BUSY;
  }
  hadc->Lock = HAL_LOCKED;
  HVar1 = ADC_ConversionStop_Disable(hadc);
  if (HVar1 == HAL_OK) {
    hadc->State = hadc->State & 0xffffeefe | 1;
  }
  hadc->Lock = HAL_UNLOCKED;
  return HVar1;
}


////>>0x08002384>>HAL_ADCEx_Calibration_Start>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_ADCEx_Calibration_Start(ADC_HandleTypeDef *hadc)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  ADC_TypeDef *pAVar4;
  uint32_t tickstart;
  uint32_t wait_loop_index;
  
  if (hadc->Lock == HAL_LOCKED) {
    return HAL_BUSY;
  }
  hadc->Lock = HAL_LOCKED;
  HVar1 = ADC_ConversionStop_Disable(hadc);
  if (HVar1 == HAL_OK) {
    hadc->State = hadc->State & 0xffffeefd | 2;
    uVar3 = SystemCoreClock;
    uVar2 = HAL_RCCEx_GetPeriphCLKFreq(2);
    for (wait_loop_index = uVar3 / uVar2 << 1; wait_loop_index != 0;
        wait_loop_index = wait_loop_index - 1) {
    }
    ADC_Enable(hadc);
    hadc->Instance->CR2 = hadc->Instance->CR2 | 8;
    uVar3 = HAL_GetTick();
    while (pAVar4 = hadc->Instance, (pAVar4->CR2 & 8) != 0) {
      uVar2 = HAL_GetTick();
      if (10 < uVar2 - uVar3) {
        hadc->State = hadc->State & 0xffffffed | 0x10;
        hadc->Lock = HAL_UNLOCKED;
        return HAL_ERROR;
      }
    }
    pAVar4->CR2 = pAVar4->CR2 | 4;
    uVar3 = HAL_GetTick();
    while ((hadc->Instance->CR2 & 4) != 0) {
      uVar2 = HAL_GetTick();
      if (10 < uVar2 - uVar3) {
        hadc->State = hadc->State & 0xffffffed | 0x10;
        hadc->Lock = HAL_UNLOCKED;
        return HAL_ERROR;
      }
    }
    hadc->State = hadc->State & 0xfffffffc | 1;
  }
  hadc->Lock = HAL_UNLOCKED;
  return HVar1;
}


////>>0x08002470>>HAL_NVIC_SetPriorityGrouping>>////


/* WARNING: Unknown calling convention */

void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup)

{
  uint32_t reg_value;
  
  _DAT_e000ed0c = (PriorityGroup & 7) << 8 | _DAT_e000ed0c & 0xf8ff | 0x5fa0000;
  return;
}


////>>0x08002494>>HAL_NVIC_SetPriority>>////


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


////>>0x080024f8>>HAL_NVIC_EnableIRQ>>////

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


////>>0x08002514>>HAL_SYSTICK_Config>>////


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


////>>0x08002540>>HAL_NVIC_ClearPendingIRQ>>////

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


////>>0x08002560>>HAL_SYSTICK_CLKSourceConfig>>////


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


////>>0x08002580>>HAL_SYSTICK_Callback>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_Callback(void)

{
  return;
}


////>>0x08002582>>HAL_SYSTICK_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_IRQHandler(void)

{
  HAL_SYSTICK_Callback();
  return;
}


////>>0x0800258c>>HAL_DMA_Abort_IT>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_DMA_Abort_IT(DMA_HandleTypeDef *hdma)

{
  DMA_Channel_TypeDef *pDVar1;
  
  if (hdma->State != HAL_DMA_STATE_BUSY) {
    hdma->ErrorCode = 4;
    return HAL_ERROR;
  }
  hdma->Instance->CCR = hdma->Instance->CCR & 0xfffffff1;
  hdma->Instance->CCR = hdma->Instance->CCR & 0xfffffffe;
  pDVar1 = hdma->Instance;
  if (pDVar1 == (DMA_Channel_TypeDef *)0x40020008) {
    _DAT_40020004 = 1;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef *)0x4002001c) {
    _DAT_40020004 = 0x10;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef *)0x40020030) {
    _DAT_40020004 = 0x100;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef *)0x40020044) {
    _DAT_40020004 = 0x1000;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef *)0x40020058) {
    _DAT_40020004 = 0x10000;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef *)0x4002006c) {
    _DAT_40020004 = 0x100000;
  }
  else {
    _DAT_40020004 = 0x1000000;
  }
  hdma->State = HAL_DMA_STATE_READY;
  hdma->Lock = HAL_UNLOCKED;
  if (hdma->XferAbortCallback != (_func_void___DMA_HandleTypeDef_ptr *)0x0) {
    (*hdma->XferAbortCallback)(hdma);
    return HAL_OK;
  }
  return HAL_OK;
}


////>>0x08002624>>HAL_GPIO_Init>>////


/* WARNING: Unknown calling convention */

void HAL_GPIO_Init(GPIO_TypeDef *GPIOx,GPIO_InitTypeDef *GPIO_Init)

{
  GPIO_TypeDef *pGVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  int iVar7;
  uint32_t *configregister;
  int iVar8;
  uint32_t tmpreg;
  
  uVar6 = 0;
  uVar4 = 0;
  do {
    if (0xf < uVar4) {
      return;
    }
    uVar2 = 1 << (uVar4 & 0xff);
    uVar3 = GPIO_Init->Pin & uVar2;
    if (uVar2 == uVar3) {
      uVar5 = GPIO_Init->Mode;
      if (uVar5 == 0x12) {
        uVar6 = GPIO_Init->Speed + 0xc;
      }
      else if (uVar5 < 0x13) {
        if (uVar5 == 2) {
          uVar6 = GPIO_Init->Speed + 8;
        }
        else if (uVar5 < 3) {
          if (uVar5 == 0) goto LAB_08002776;
          if (uVar5 == 1) {
            uVar6 = GPIO_Init->Speed;
          }
        }
        else if (uVar5 == 3) {
          uVar6 = 0;
        }
        else if (uVar5 == 0x11) {
          uVar6 = GPIO_Init->Speed + 4;
        }
      }
      else if (uVar5 == 0x10210000) {
LAB_08002776:
        if (GPIO_Init->Pull == 0) {
          uVar6 = 4;
        }
        else if (GPIO_Init->Pull == 1) {
          GPIOx->BSRR = uVar2;
          uVar6 = 8;
        }
        else {
          GPIOx->BRR = uVar2;
          uVar6 = 8;
        }
      }
      else if (uVar5 < 0x10210001) {
        if ((uVar5 == 0x10110000) || (uVar5 == 0x10120000)) goto LAB_08002776;
      }
      else if ((uVar5 == 0x10310000) || ((uVar5 == 0x10320000 || (uVar5 == 0x10220000))))
      goto LAB_08002776;
      uVar2 = uVar4;
      pGVar1 = GPIOx;
      if (0xff < uVar3) {
        uVar2 = uVar4 - 8;
        pGVar1 = (GPIO_TypeDef *)&GPIOx->CRH;
      }
      pGVar1->CRL = pGVar1->CRL & ~(0xf << (uVar2 << 2 & 0xff)) | uVar6 << (uVar2 << 2 & 0xff);
      if ((GPIO_Init->Mode & 0x10000000) != 0) {
        _DAT_40021018 = _DAT_40021018 | 1;
        iVar7 = (uVar4 & 3) << 2;
        if (GPIOx == (GPIO_TypeDef *)0x40010800) {
          iVar8 = 0;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40010c00) {
          iVar8 = 1;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40011000) {
          iVar8 = 2;
        }
        else if (GPIOx == (GPIO_TypeDef *)0x40011400) {
          iVar8 = 3;
        }
        else {
          iVar8 = 4;
        }
        *(uint *)(((uVar4 >> 2) + 2) * 4 + 0x40010000) =
             *(uint *)(((uVar4 >> 2) + 2) * 4 + 0x40010000) & ~(0xf << iVar7) | iVar8 << iVar7;
        if ((GPIO_Init->Mode & 0x10000) == 0) {
          _DAT_40010400 = _DAT_40010400 & ~uVar3;
        }
        else {
          _DAT_40010400 = _DAT_40010400 | uVar3;
        }
        if ((GPIO_Init->Mode & 0x20000) == 0) {
          _DAT_40010404 = _DAT_40010404 & ~uVar3;
        }
        else {
          _DAT_40010404 = _DAT_40010404 | uVar3;
        }
        if ((GPIO_Init->Mode & 0x100000) == 0) {
          _DAT_40010408 = _DAT_40010408 & ~uVar3;
        }
        else {
          _DAT_40010408 = _DAT_40010408 | uVar3;
        }
        if ((GPIO_Init->Mode & 0x200000) == 0) {
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


////>>0x08002810>>HAL_GPIO_ReadPin>>////

/* WARNING: Unknown calling convention */

GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)

{
  GPIO_PinState bitstatus;
  
  if (((uint)GPIO_Pin & GPIOx->IDR) == 0) {
    bitstatus = GPIO_PIN_RESET;
    return bitstatus;
  }
  return GPIO_PIN_SET;
}


////>>0x0800281e>>HAL_GPIO_WritePin>>////

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


////>>0x0800282c>>HAL_GPIO_EXTI_IRQHandler>>////


/* WARNING: Unknown calling convention */

void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin)

{
  if ((_DAT_40010414 & GPIO_Pin) != 0) {
    _DAT_40010414 = (uint)GPIO_Pin;
    HAL_GPIO_EXTI_Callback(GPIO_Pin);
  }
  return;
}


////>>0x08002848>>I2C_Master_SB>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Master_SB(I2C_HandleTypeDef *hi2c)

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


////>>0x080028d2>>I2C_Master_ADD10>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Master_ADD10(I2C_HandleTypeDef *hi2c)

{
  hi2c->Instance->DR = hi2c->Devaddress & 0xff;
  return HAL_OK;
}


////>>0x080028de>>I2C_Master_ADDR>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Master_ADDR(I2C_HandleTypeDef *hi2c)

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
  uint32_t tmpreg_10;
  
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
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x800;
          hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
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


////>>0x08002ab8>>I2C_SlaveTransmit_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_SlaveTransmit_BTF(I2C_HandleTypeDef *hi2c)

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


////>>0x08002ad8>>I2C_SlaveReceive_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_SlaveReceive_BTF(I2C_HandleTypeDef *hi2c)

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


////>>0x08002af8>>HAL_I2C_Slave_Sequential_Transmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_I2C_Slave_Sequential_Transmit_IT
          (I2C_HandleTypeDef *hi2c,uint8_t *pData,uint16_t Size,uint32_t XferOptions)

{
  HAL_StatusTypeDef_conflict HVar1;
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


////>>0x08002b84>>HAL_I2C_Slave_Sequential_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_I2C_Slave_Sequential_Receive_IT
          (I2C_HandleTypeDef *hi2c,uint8_t *pData,uint16_t Size,uint32_t XferOptions)

{
  HAL_StatusTypeDef_conflict HVar1;
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


////>>0x08002c10>>HAL_I2C_EnableListen_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_I2C_EnableListen_IT(I2C_HandleTypeDef *hi2c)

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


////>>0x08002c4e>>HAL_I2C_MasterTxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x08002c50>>HAL_I2C_MasterRxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x08002c52>>HAL_I2C_SlaveTxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x08002c54>>I2C_SlaveTransmit_TXE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_SlaveTransmit_TXE(I2C_HandleTypeDef *hi2c)

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


////>>0x08002ca4>>HAL_I2C_SlaveRxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x08002ca6>>I2C_SlaveReceive_RXNE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_SlaveReceive_RXNE(I2C_HandleTypeDef *hi2c)

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


////>>0x08002cf2>>I2C_Slave_ADDR>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Slave_ADDR(I2C_HandleTypeDef *hi2c)

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


////>>0x08002d1c>>I2C_Slave_AF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Slave_AF(I2C_HandleTypeDef *hi2c)

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


////>>0x08002db0>>HAL_I2C_MemTxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x08002db2>>I2C_MasterTransmit_TXE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_MasterTransmit_TXE(I2C_HandleTypeDef *hi2c)

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


////>>0x08002efc>>I2C_MasterTransmit_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_MasterTransmit_BTF(I2C_HandleTypeDef *hi2c)

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


////>>0x08002f9a>>HAL_I2C_MemRxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x08002f9c>>I2C_MasterReceive_RXNE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_MasterReceive_RXNE(I2C_HandleTypeDef *hi2c)

{
  uint8_t *puVar1;
  
  if (hi2c->State == HAL_I2C_STATE_BUSY_RX) {
    if (hi2c->XferCount < 4) {
      if (hi2c->XferCount - 2 < 2) {
        if (hi2c->XferOptions == 2) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
        }
        else {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x800;
        }
        hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffbff;
      }
      else {
        if (hi2c->XferOptions == 2) {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
        }
        else {
          hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
        }
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
    }
  }
  return HAL_OK;
}


////>>0x0800306c>>I2C_MasterReceive_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_MasterReceive_BTF(I2C_HandleTypeDef *hi2c)

{
  uint32_t uVar1;
  uint32_t CurrentXferOptions;
  uint8_t *puVar2;
  
  uVar1 = hi2c->XferOptions;
  if (hi2c->XferCount == 3) {
    if (((uVar1 == 4) || (uVar1 == 8)) || (uVar1 == 0xffff0000)) {
      hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
    }
    puVar2 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar2 + 1;
    *puVar2 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
  }
  else if (hi2c->XferCount == 2) {
    if (((uVar1 == 4) || (uVar1 == 8)) || (uVar1 == 0xffff0000)) {
      hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffcff;
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x200;
    }
    else {
      if (uVar1 == 2) {
        hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
      }
      else {
        hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffbff;
      }
      hi2c->Instance->CR2 = hi2c->Instance->CR2 & 0xfffffcff;
    }
    puVar2 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar2 + 1;
    *puVar2 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
    puVar2 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar2 + 1;
    *puVar2 = (uint8_t)hi2c->Instance->DR;
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
  else {
    puVar2 = hi2c->pBuffPtr;
    hi2c->pBuffPtr = puVar2 + 1;
    *puVar2 = (uint8_t)hi2c->Instance->DR;
    hi2c->XferCount = hi2c->XferCount - 1;
  }
  return HAL_OK;
}


////>>0x0800316a>>HAL_I2C_AbortCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef *hi2c)

{
  return;
}


////>>0x0800316c>>I2C_ITError>>////

/* WARNING: Unknown calling convention */

void I2C_ITError(I2C_HandleTypeDef *hi2c)

{
  HAL_StatusTypeDef_conflict HVar1;
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


////>>0x080032b4>>I2C_Slave_STOPF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Slave_STOPF(I2C_HandleTypeDef *hi2c)

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
      hi2c->XferCount = (uint16_t)hi2c->hdmarx->Instance->CNDTR;
    }
    else {
      hi2c->XferCount = (uint16_t)hi2c->hdmatx->Instance->CNDTR;
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


////>>0x080033b8>>HAL_I2C_EV_IRQHandler>>////

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


////>>0x08003520>>HAL_I2C_ER_IRQHandler>>////

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
    hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x8000;
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


////>>0x080035fc>>I2C_DMAAbort>>////

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


////>>0x0800365c>>RCC_Delay>>////

/* WARNING: Unknown calling convention */

void RCC_Delay(uint32_t mdelay)

{
  bool bVar1;
  uint32_t Delay;
  
  Delay = mdelay * (SystemCoreClock / 8000);
  do {
    bVar1 = Delay != 0;
    Delay = Delay - 1;
  } while (bVar1);
  return;
}


////>>0x08003688>>HAL_RCC_OscConfig>>////


/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_RCC_OscConfig(RCC_OscInitTypeDef_conflict *RCC_OscInitStruct)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  bool bVar4;
  uint32_t tmpreg;
  
  if ((RCC_OscInitStruct->OscillatorType & 1) != 0) {
    if (((_DAT_40021004 & 0xc) == 4) ||
       (((_DAT_40021004 & 0xc) == 8 && ((_DAT_40021004 & 0x10000) != 0)))) {
      if (((_DAT_40021000 & 0x20000) != 0) && (RCC_OscInitStruct->HSEState == 0)) {
        return HAL_ERROR;
      }
    }
    else {
      uVar3 = RCC_OscInitStruct->HSEState;
      if (uVar3 == 0x10000) {
        _DAT_40021000 = _DAT_40021000 | 0x10000;
      }
      else if (uVar3 == 0) {
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      else if (uVar3 == 0x50000) {
        _DAT_40021000 = _DAT_40021000 | 0x50000;
      }
      else {
        _DAT_40021000 = _DAT_40021000 & 0xfffaffff;
      }
      if (RCC_OscInitStruct->HSEState == 0) {
        uVar3 = HAL_GetTick();
        while ((_DAT_40021000 & 0x20000) != 0) {
          uVar2 = HAL_GetTick();
          if (100 < uVar2 - uVar3) {
            return HAL_TIMEOUT;
          }
        }
      }
      else {
        uVar3 = HAL_GetTick();
        while ((_DAT_40021000 & 0x20000) == 0) {
          uVar2 = HAL_GetTick();
          if (100 < uVar2 - uVar3) {
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
      _DAT_40021000 = _DAT_40021000 & 0xffffff07 | RCC_OscInitStruct->HSICalibrationValue << 3;
    }
    else if (RCC_OscInitStruct->HSIState == 0) {
      _DAT_42420000 = 0;
      uVar3 = HAL_GetTick();
      while ((_DAT_40021000 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar3) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      _DAT_42420000 = 1;
      uVar3 = HAL_GetTick();
      while ((_DAT_40021000 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar3) {
          return HAL_TIMEOUT;
        }
      }
      _DAT_40021000 = _DAT_40021000 & 0xffffff07 | RCC_OscInitStruct->HSICalibrationValue << 3;
    }
  }
  if ((RCC_OscInitStruct->OscillatorType & 8) != 0) {
    if (RCC_OscInitStruct->LSIState == 0) {
      _DAT_42420480 = 0;
      uVar3 = HAL_GetTick();
      while ((_DAT_40021024 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar3) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      _DAT_42420480 = 1;
      uVar3 = HAL_GetTick();
      while ((_DAT_40021024 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (2 < uVar2 - uVar3) {
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
      uVar3 = HAL_GetTick();
      while ((_DAT_40007000 & 0x100) == 0) {
        uVar2 = HAL_GetTick();
        if (100 < uVar2 - uVar3) {
          return HAL_TIMEOUT;
        }
      }
    }
    uVar3 = RCC_OscInitStruct->LSEState;
    if (uVar3 == 1) {
      _DAT_40021020 = _DAT_40021020 | 1;
    }
    else if (uVar3 == 0) {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
    }
    else if (uVar3 == 5) {
      _DAT_40021020 = _DAT_40021020 | 5;
    }
    else {
      _DAT_40021020 = _DAT_40021020 & 0xfffffffa;
    }
    if (RCC_OscInitStruct->LSEState == 0) {
      uVar3 = HAL_GetTick();
      while ((_DAT_40021020 & 2) != 0) {
        uVar2 = HAL_GetTick();
        if (5000 < uVar2 - uVar3) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      uVar3 = HAL_GetTick();
      while ((_DAT_40021020 & 2) == 0) {
        uVar2 = HAL_GetTick();
        if (5000 < uVar2 - uVar3) {
          return HAL_TIMEOUT;
        }
      }
    }
    if (bVar4) {
      _DAT_4002101c = _DAT_4002101c & 0xefffffff;
    }
  }
  uVar3 = (RCC_OscInitStruct->PLL).PLLState;
  if (uVar3 == 0) {
    HVar1 = HAL_OK;
  }
  else if ((_DAT_40021004 & 0xc) == 8) {
    HVar1 = HAL_ERROR;
  }
  else if (uVar3 == 2) {
    _DAT_42420060 = 0;
    uVar3 = HAL_GetTick();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) {
        if ((RCC_OscInitStruct->PLL).PLLSource == 0x10000) {
          _DAT_40021004 = _DAT_40021004 & 0xfffdffff | RCC_OscInitStruct->HSEPredivValue;
        }
        _DAT_40021004 =
             _DAT_40021004 & 0xffc2ffff |
             (RCC_OscInitStruct->PLL).PLLSource | (RCC_OscInitStruct->PLL).PLLMUL;
        _DAT_42420060 = 1;
        uVar3 = HAL_GetTick();
        do {
          if ((_DAT_40021000 & 0x2000000) != 0) {
            return HAL_OK;
          }
          uVar2 = HAL_GetTick();
        } while (uVar2 - uVar3 < 3);
        return HAL_TIMEOUT;
      }
      uVar2 = HAL_GetTick();
    } while (uVar2 - uVar3 < 3);
    HVar1 = HAL_TIMEOUT;
  }
  else {
    _DAT_42420060 = 0;
    uVar3 = HAL_GetTick();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) {
        return HAL_OK;
      }
      uVar2 = HAL_GetTick();
    } while (uVar2 - uVar3 < 3);
    HVar1 = HAL_TIMEOUT;
  }
  return HVar1;
}


////>>0x08003a68>>HAL_RCC_GetSysClockFreq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetSysClockFreq(void)

{
  uint32_t uVar1;
  uint8_t aPredivFactorTable [2];
  uint8_t aPLLMULFactorTable [16];
  
  aPLLMULFactorTable[12] = '\x0e';
  aPLLMULFactorTable[13] = '\x0f';
  aPLLMULFactorTable[14] = '\x10';
  aPLLMULFactorTable[15] = '\x10';
  aPLLMULFactorTable[8] = '\n';
  aPLLMULFactorTable[9] = '\v';
  aPLLMULFactorTable[10] = '\f';
  aPLLMULFactorTable[11] = '\r';
  aPLLMULFactorTable[4] = '\x06';
  aPLLMULFactorTable[5] = '\a';
  aPLLMULFactorTable[6] = '\b';
  aPLLMULFactorTable[7] = '\t';
  aPLLMULFactorTable[0] = '\x02';
  aPLLMULFactorTable[1] = '\x03';
  aPLLMULFactorTable[2] = '\x04';
  aPLLMULFactorTable[3] = '\x05';
  aPredivFactorTable[0] = '\x01';
  aPredivFactorTable[1] = '\x02';
  if ((_DAT_40021004 & 0xc) == 8) {
    if ((_DAT_40021004 & 0x10000) == 0) {
      uVar1 = (uint)aPLLMULFactorTable[(_DAT_40021004 << 10) >> 0x1c] * 4000000;
    }
    else {
      uVar1 = ((uint)aPLLMULFactorTable[(_DAT_40021004 << 10) >> 0x1c] * 8000000) /
              (uint)aPredivFactorTable[-((int)(_DAT_40021004 << 0xe) >> 0x1f)];
    }
  }
  else {
    uVar1 = 8000000;
  }
  return uVar1;
}


////>>0x08003ad4>>HAL_RCC_ClockConfig>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_RCC_ClockConfig(RCC_ClkInitTypeDef_conflict *RCC_ClkInitStruct,uint32_t FLatency)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  
  if ((_DAT_40022000 & 7) < FLatency) {
    _DAT_40022000 = _DAT_40022000 & 0xfffffff8 | FLatency;
    if (FLatency != (FLatency & 7)) {
      return HAL_ERROR;
    }
  }
  if ((RCC_ClkInitStruct->ClockType & 2) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffffff0f | RCC_ClkInitStruct->AHBCLKDivider;
  }
  if ((RCC_ClkInitStruct->ClockType & 1) != 0) {
    uVar3 = RCC_ClkInitStruct->SYSCLKSource;
    if (uVar3 == 1) {
      if ((_DAT_40021000 & 0x20000) == 0) {
        return HAL_ERROR;
      }
    }
    else if ((uVar3 != 2) && ((_DAT_40021000 & 2) == 0)) {
      return HAL_ERROR;
    }
    _DAT_40021004 = uVar3 | _DAT_40021004 & 0xfffffffc;
    uVar1 = HAL_GetTick();
    if (RCC_ClkInitStruct->SYSCLKSource == 1) {
      while ((_DAT_40021004 & 0xc) != 4) {
        uVar2 = HAL_GetTick();
        if (5000 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
    else if (RCC_ClkInitStruct->SYSCLKSource == 2) {
      while ((_DAT_40021004 & 0xc) != 8) {
        uVar2 = HAL_GetTick();
        if (5000 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
    else {
      while ((_DAT_40021004 & 0xc) != 0) {
        uVar2 = HAL_GetTick();
        if (5000 < uVar2 - uVar1) {
          return HAL_TIMEOUT;
        }
      }
    }
  }
  if (FLatency < (_DAT_40022000 & 7)) {
    _DAT_40022000 = _DAT_40022000 & 0xfffffff8 | FLatency;
    if (FLatency != (FLatency & 7)) {
      return HAL_ERROR;
    }
  }
  if ((RCC_ClkInitStruct->ClockType & 4) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xfffff8ff | RCC_ClkInitStruct->APB1CLKDivider;
  }
  if ((RCC_ClkInitStruct->ClockType & 8) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffffc7ff | RCC_ClkInitStruct->APB2CLKDivider << 3;
  }
  uVar1 = HAL_RCC_GetSysClockFreq();
  SystemCoreClock = uVar1 >> ""[(_DAT_40021004 << 0x18) >> 0x1c];
  HAL_InitTick(0xf);
  return HAL_OK;
}


////>>0x08003c44>>HAL_RCC_GetHCLKFreq>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetHCLKFreq(void)

{
  return SystemCoreClock;
}


////>>0x08003c50>>HAL_RCC_GetPCLK1Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK1Freq(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[(uint)(_DAT_40021004 << 0x15) >> 0x1d];
}


////>>0x08003c70>>HAL_RCC_GetPCLK2Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK2Freq(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[(uint)(_DAT_40021004 << 0x12) >> 0x1d];
}


////>>0x08003c90>>HAL_RCCEx_PeriphCLKConfig>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_RCCEx_PeriphCLKConfig(RCC_PeriphCLKInitTypeDef_conflict *PeriphClkInit)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  bool bVar5;
  uint32_t tmpreg;
  
  if ((PeriphClkInit->PeriphClockSelection & 1) != 0) {
    bVar5 = (_DAT_4002101c & 0x10000000) == 0;
    if (bVar5) {
      _DAT_4002101c = _DAT_4002101c | 0x10000000;
    }
    if ((_DAT_40007000 & 0x100) == 0) {
      _DAT_40007000 = _DAT_40007000 | 0x100;
      uVar3 = HAL_GetTick();
      while ((_DAT_40007000 & 0x100) == 0) {
        uVar4 = HAL_GetTick();
        if (100 < uVar4 - uVar3) {
          return HAL_TIMEOUT;
        }
      }
    }
    if (((_DAT_40021020 & 0x300) != 0) &&
       ((_DAT_40021020 & 0x300) != (PeriphClkInit->RTCClockSelection & 0x300))) {
      uVar2 = _DAT_40021020 & 0xfffffcff;
      _DAT_42420440 = 0;
      uVar1 = _DAT_40021020 & 1;
      _DAT_40021020 = uVar2;
      if (uVar1 != 0) {
        uVar3 = HAL_GetTick();
        while ((_DAT_40021020 & 2) == 0) {
          uVar4 = HAL_GetTick();
          if (5000 < uVar4 - uVar3) {
            return HAL_TIMEOUT;
          }
        }
      }
    }
    _DAT_40021020 = _DAT_40021020 & 0xfffffcff | PeriphClkInit->RTCClockSelection;
    if (bVar5) {
      _DAT_4002101c = _DAT_4002101c & 0xefffffff;
    }
  }
  if ((PeriphClkInit->PeriphClockSelection & 2) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffff3fff | PeriphClkInit->AdcClockSelection;
  }
  if ((PeriphClkInit->PeriphClockSelection & 0x10) != 0) {
    _DAT_40021004 = _DAT_40021004 & 0xffbfffff | PeriphClkInit->UsbClockSelection;
  }
  return HAL_OK;
}


////>>0x08003da4>>HAL_RCCEx_GetPeriphCLKFreq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCCEx_GetPeriphCLKFreq(uint32_t PeriphClk)

{
  uint32_t uVar1;
  uint uVar2;
  uint8_t aPredivFactorTable [2];
  uint8_t aPLLMULFactorTable [16];
  
  aPLLMULFactorTable[12] = '\x0e';
  aPLLMULFactorTable[13] = '\x0f';
  aPLLMULFactorTable[14] = '\x10';
  aPLLMULFactorTable[15] = '\x10';
  aPLLMULFactorTable[8] = '\n';
  aPLLMULFactorTable[9] = '\v';
  aPLLMULFactorTable[10] = '\f';
  aPLLMULFactorTable[11] = '\r';
  aPLLMULFactorTable[4] = '\x06';
  aPLLMULFactorTable[5] = '\a';
  aPLLMULFactorTable[6] = '\b';
  aPLLMULFactorTable[7] = '\t';
  aPLLMULFactorTable[0] = '\x02';
  aPLLMULFactorTable[1] = '\x03';
  aPLLMULFactorTable[2] = '\x04';
  aPLLMULFactorTable[3] = '\x05';
  aPredivFactorTable[0] = '\x01';
  aPredivFactorTable[1] = '\x02';
  if (PeriphClk == 2) {
    uVar1 = HAL_RCC_GetPCLK2Freq();
    uVar1 = uVar1 / ((((_DAT_40021004 << 0x10) >> 0x1e) + 1) * 2);
  }
  else if (PeriphClk == 0x10) {
    if ((_DAT_40021000 & 0x1000000) == 0) {
      uVar1 = 0;
    }
    else {
      if ((_DAT_40021004 & 0x10000) == 0) {
        uVar2 = 4000000;
      }
      else {
        uVar2 = 8000000 / aPredivFactorTable[-((int)(_DAT_40021004 << 0xe) >> 0x1f)];
      }
      uVar1 = uVar2 * aPLLMULFactorTable[(_DAT_40021004 << 10) >> 0x1c];
      if ((_DAT_40021004 & 0x400000) == 0) {
        uVar1 = (uVar1 * 2) / 3;
      }
    }
  }
  else if (PeriphClk == 1) {
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


////>>0x08003ea0>>HAL_RTC_AlarmIRQHandler>>////


/* WARNING: Unknown calling convention */

void HAL_RTC_AlarmIRQHandler(RTC_HandleTypeDef *hrtc)

{
  if (((hrtc->Instance->CRH & 2) != 0) && ((hrtc->Instance->CRL & 2) != 0)) {
    HAL_RTC_AlarmAEventCallback(hrtc);
    hrtc->Instance->CRL = 0xfffffffd;
  }
  _DAT_40010414 = 0x20000;
  hrtc->State = HAL_RTC_STATE_READY;
  return;
}


////>>0x08003ed8>>HAL_TIM_PWM_DeInit>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_PWM_DeInit(TIM_HandleTypeDef *htim)

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


////>>0x08003f12>>HAL_TIM_IC_CaptureCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x08003f14>>HAL_TIM_PWM_PulseFinishedCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x08003f16>>HAL_TIM_TriggerCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_TriggerCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x08003f18>>HAL_TIM_IRQHandler>>////

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


////>>0x08004092>>TIM_CCxChannelCmd>>////

/* WARNING: Unknown calling convention */

void TIM_CCxChannelCmd(TIM_TypeDef *TIMx,uint32_t Channel,uint32_t ChannelState)

{
  TIMx->CCER = TIMx->CCER & ~(1 << (Channel & 0xff));
  TIMx->CCER = TIMx->CCER | ChannelState << (Channel & 0xff);
  return;
}


////>>0x080040b0>>HAL_TIM_PWM_Stop>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim,uint32_t Channel)

{
  TIM_TypeDef *pTVar1;
  
  TIM_CCxChannelCmd(htim->Instance,Channel,0);
  if (((htim->Instance == (TIM_TypeDef *)0x40012c00) && ((uRam40012c20 & 0x1111) == 0)) &&
     ((uRam40012c20 & 0x444) == 0)) {
    uRam40012c44 = uRam40012c44 & 0xffff7fff;
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->CCER & 0x1111) == 0) && ((pTVar1->CCER & 0x444) == 0)) {
    pTVar1->CR1 = pTVar1->CR1 & 0xfffffffe;
  }
  htim->State = HAL_TIM_STATE_READY;
  return HAL_OK;
}


////>>0x08004110>>TIM_CCxNChannelCmd>>////

/* WARNING: Unknown calling convention */

void TIM_CCxNChannelCmd(TIM_TypeDef *TIMx,uint32_t Channel,uint32_t ChannelNState)

{
  TIMx->CCER = TIMx->CCER & ~(4 << (Channel & 0xff));
  TIMx->CCER = TIMx->CCER | ChannelNState << (Channel & 0xff);
  return;
}


////>>0x0800412c>>HAL_TIMEx_PWMN_Stop>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIMEx_PWMN_Stop(TIM_HandleTypeDef *htim,uint32_t Channel)

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


////>>0x08004178>>HAL_TIMEx_CommutationCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIMEx_CommutationCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x0800417a>>HAL_TIMEx_BreakCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef *htim)

{
  return;
}


////>>0x0800417c>>UART_EndRxTransfer>>////

/* WARNING: Unknown calling convention */

void UART_EndRxTransfer(UART_HandleTypeDef *huart)

{
  huart->Instance->CR1 = huart->Instance->CR1 & 0xfffffedf;
  huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffffe;
  huart->RxState = HAL_UART_STATE_READY;
  return;
}


////>>0x08004198>>UART_Transmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict UART_Transmit_IT(UART_HandleTypeDef *huart)

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


////>>0x08004204>>UART_SetConfig>>////

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
       (huart->Init).WordLength | (huart->Init).Parity | (huart->Init).Mode |
       huart->Instance->CR1 & 0xffffe9f3;
  huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffcff | (huart->Init).HwFlowCtl;
  pUVar10 = huart->Instance;
  if (pUVar10 != (USART_TypeDef *)0x40013800) {
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
  iRam40013808 = ((uint)((int)((ulonglong)
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


////>>0x080043b4>>UART_WaitOnFlagUntilTimeout>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
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


////>>0x08004418>>HAL_UART_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_UART_MspInit(UART_HandleTypeDef *huart)

{
  return;
}


////>>0x0800441a>>HAL_UART_Init>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_UART_Init(UART_HandleTypeDef *huart)

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


////>>0x08004478>>HAL_UART_Transmit>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_UART_Transmit(UART_HandleTypeDef *huart,uint8_t *pData,uint16_t Size,uint32_t Timeout)

{
  HAL_StatusTypeDef_conflict HVar1;
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


////>>0x0800455a>>HAL_UART_Transmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_UART_Transmit_IT(UART_HandleTypeDef *huart,uint8_t *pData,uint16_t Size)

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


////>>0x080045a2>>HAL_UART_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_UART_Receive_IT(UART_HandleTypeDef *huart,uint8_t *pData,uint16_t Size)

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
    huart->Instance->CR1 = huart->Instance->CR1 | 0x100;
    huart->Instance->CR3 = huart->Instance->CR3 | 1;
    huart->Instance->CR1 = huart->Instance->CR1 | 0x20;
    return HAL_OK;
  }
  return HAL_BUSY;
}


////>>0x080045fe>>UART_EndTransmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict UART_EndTransmit_IT(UART_HandleTypeDef *huart)

{
  huart->Instance->CR1 = huart->Instance->CR1 & 0xffffffbf;
  huart->gState = HAL_UART_STATE_READY;
  HAL_UART_TxCpltCallback(huart);
  return HAL_OK;
}


////>>0x08004618>>UART_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict UART_Receive_IT(UART_HandleTypeDef *huart)

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
  huart->Instance->CR1 = huart->Instance->CR1 & 0xffffffdf;
  huart->Instance->CR1 = huart->Instance->CR1 & 0xfffffeff;
  huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffffe;
  huart->RxState = HAL_UART_STATE_READY;
  HAL_UART_RxCpltCallback(huart);
  return HAL_OK;
}


////>>0x080046b8>>HAL_UART_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_UART_IRQHandler(UART_HandleTypeDef *huart)

{
  HAL_StatusTypeDef_conflict HVar1;
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


////>>0x080047d8>>UART_DMAAbortOnError>>////

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


////>>0x080047e8>>HAL_UART_GetState>>////

/* WARNING: Unknown calling convention */

HAL_UART_StateTypeDef HAL_UART_GetState(UART_HandleTypeDef *huart)

{
  return huart->RxState | huart->gState;
}


////>>0x080047f4>>is_pin_configured>>////

/* WARNING: Unknown calling convention */

_Bool is_pin_configured(PinName_conflict pin,uint32_t *map)

{
  uint32_t index;
  
  index = map[(uint)((int)pin << 0x18) >> 0x1c];
  return (_Bool)((byte)(index >> ((int)pin & 0xfU)) & 1);
}


////>>0x0800480a>>set_pin_configured>>////

/* WARNING: Unknown calling convention */

void set_pin_configured(PinName_conflict pin,uint32_t *map)

{
  uint uVar1;
  uint32_t index;
  
  uVar1 = (uint)((int)pin << 0x18) >> 0x1c;
  map[uVar1] = map[uVar1] | 1 << ((int)pin & 0xfU);
  return;
}


////>>0x08004828>>reset_pin_configured>>////

/* WARNING: Unknown calling convention */

void reset_pin_configured(PinName_conflict pin,uint32_t *map)

{
  uint uVar1;
  uint32_t index;
  
  uVar1 = (uint)((int)pin << 0x18) >> 0x1c;
  map[uVar1] = map[uVar1] & ~(1 << ((int)pin & 0xfU));
  return;
}


////>>0x08004848>>get_GPIO_Port>>////

/* WARNING: Unknown calling convention */

GPIO_TypeDef * get_GPIO_Port(uint32_t port_idx)

{
  switch(port_idx) {
  case 0:
    return (GPIO_TypeDef *)0x40010800;
  case 1:
    return (GPIO_TypeDef *)0x40010c00;
  case 2:
    return (GPIO_TypeDef *)0x40011000;
  case 3:
    return (GPIO_TypeDef *)0x40011400;
  case 4:
    return (GPIO_TypeDef *)0x40011800;
  default:
    return (GPIO_TypeDef *)0x0;
  }
}


////>>0x08004884>>set_GPIO_Port_Clock>>////


/* WARNING: Unknown calling convention */

GPIO_TypeDef * set_GPIO_Port_Clock(uint32_t port_idx)

{
  GPIO_TypeDef *pGVar1;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_2;
  uint32_t tmpreg_3;
  uint32_t tmpreg_4;
  
  switch(port_idx) {
  case 0:
    _DAT_40021018 = _DAT_40021018 | 4;
    pGVar1 = (GPIO_TypeDef *)0x40010800;
    break;
  case 1:
    _DAT_40021018 = _DAT_40021018 | 8;
    pGVar1 = (GPIO_TypeDef *)0x40010c00;
    break;
  case 2:
    _DAT_40021018 = _DAT_40021018 | 0x10;
    pGVar1 = (GPIO_TypeDef *)0x40011000;
    break;
  case 3:
    _DAT_40021018 = _DAT_40021018 | 0x20;
    pGVar1 = (GPIO_TypeDef *)0x40011400;
    break;
  case 4:
    _DAT_40021018 = _DAT_40021018 | 0x40;
    pGVar1 = (GPIO_TypeDef *)0x40011800;
    break;
  default:
    pGVar1 = (GPIO_TypeDef *)0x0;
  }
  return pGVar1;
}


////>>0x0800492c>>get_adc_channel>>////

/* WARNING: Unknown calling convention */

uint32_t get_adc_channel(PinName_conflict pin)

{
  uint32_t uVar1;
  uint32_t function;
  
  uVar1 = pinmap_function(pin,(PinMap_conflict *)&PinMap_ADC);
  function = uVar1 << 0xc;
  function = function >> 0x1b;
  if (0x10 < function - 1) {
    function = 0;
  }
  return function;
}


////>>0x08004948>>get_pwm_channel>>////

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


////>>0x08004974>>HAL_ADC_MspInit>>////


/* WARNING: Unknown calling convention */

void HAL_ADC_MspInit(ADC_HandleTypeDef *hadc)

{
  GPIO_TypeDef *GPIOx;
  GPIO_TypeDef *port;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  if (hadc->Instance == (ADC_TypeDef *)0x40012400) {
    _DAT_40021018 = _DAT_40021018 | 0x200;
  }
  else if (hadc->Instance == (ADC_TypeDef *)0x40012800) {
    _DAT_40021018 = _DAT_40021018 | 0x400;
  }
  GPIOx = set_GPIO_Port_Clock((uint)((int)g_current_pin << 0x18) >> 0x1c);
  GPIO_InitStruct.Pin = 1 << (g_current_pin & 0xfU) & 0xffff;
  GPIO_InitStruct.Mode = 3;
  GPIO_InitStruct.Pull = 0;
  HAL_GPIO_Init(GPIOx,&GPIO_InitStruct);
  return;
}


////>>0x080049f0>>HAL_ADC_MspDeInit>>////


/* WARNING: Unknown calling convention */

void HAL_ADC_MspDeInit(ADC_HandleTypeDef *hadc)

{
  if (hadc->Instance != (ADC_TypeDef *)0x40012400) {
    if (hadc->Instance == (ADC_TypeDef *)0x40012800) {
      _DAT_4002100c = _DAT_4002100c & 0xfffffbff;
      _DAT_40021018 = _DAT_40021018 & 0xfffffbff;
    }
    return;
  }
  _DAT_4002100c = _DAT_4002100c & 0xfffffdff;
  _DAT_40021018 = _DAT_40021018 & 0xfffffdff;
  return;
}


////>>0x08004a4c>>adc_read_value>>////

/* WARNING: Unknown calling convention */

uint16_t adc_read_value(PinName_conflict pin)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  uint16_t uhADCxConvertedValue;
  ADC_ChannelConfTypeDef AdcChannelConf;
  ADC_HandleTypeDef AdcHandle;
  
  memset(&AdcHandle,0,0x30);
  AdcChannelConf.Channel = 0;
  AdcChannelConf.Rank = 0;
  AdcChannelConf.SamplingTime = 0;
  uhADCxConvertedValue = 0;
  AdcHandle.Instance = (ADC_TypeDef *)pinmap_peripheral(pin,(PinMap_conflict *)&PinMap_ADC);
  if (AdcHandle.Instance == (ADC_TypeDef *)0x0) {
    uhADCxConvertedValue = 0;
  }
  else {
    AdcHandle.Init.DataAlign = 0;
    AdcHandle.Init.ScanConvMode = 0;
    AdcHandle.Init.ContinuousConvMode = 0;
    AdcHandle.Init.DiscontinuousConvMode = 0;
    AdcHandle.Init.ExternalTrigConv = 0xe0000;
    AdcHandle.State = 0;
    AdcHandle.Init.NbrOfConversion = 1;
    AdcHandle.Init.NbrOfDiscConversion = 0;
    g_current_pin = pin;
    HVar1 = HAL_ADC_Init(&AdcHandle);
    if (HVar1 == HAL_OK) {
      AdcChannelConf.Channel = get_adc_channel(pin);
      if (AdcChannelConf.Channel < 0x12) {
        AdcChannelConf.Rank = 1;
        AdcChannelConf.SamplingTime = 2;
        HVar1 = HAL_ADC_ConfigChannel(&AdcHandle,&AdcChannelConf);
        if (HVar1 == HAL_OK) {
          HVar1 = HAL_ADCEx_Calibration_Start(&AdcHandle);
          if (HVar1 == HAL_OK) {
            HVar1 = HAL_ADC_Start(&AdcHandle);
            if (HVar1 == HAL_OK) {
              HVar1 = HAL_ADC_PollForConversion(&AdcHandle,10);
              if (HVar1 == HAL_OK) {
                uVar2 = HAL_ADC_GetState(&AdcHandle);
                if ((uVar2 & 0x200) != 0) {
                  uVar2 = HAL_ADC_GetValue(&AdcHandle);
                  uhADCxConvertedValue = (uint16_t)uVar2;
                }
                HVar1 = HAL_ADC_Stop(&AdcHandle);
                if (HVar1 == HAL_OK) {
                  HVar1 = HAL_ADC_DeInit(&AdcHandle);
                  if (HVar1 != HAL_OK) {
                    uhADCxConvertedValue = 0;
                  }
                }
                else {
                  uhADCxConvertedValue = 0;
                }
              }
              else {
                uhADCxConvertedValue = 0;
              }
            }
            else {
              uhADCxConvertedValue = 0;
            }
          }
          else {
            uhADCxConvertedValue = 0;
          }
        }
        else {
          uhADCxConvertedValue = 0;
        }
      }
      else {
        uhADCxConvertedValue = 0;
      }
    }
    else {
      uhADCxConvertedValue = 0;
    }
  }
  return uhADCxConvertedValue;
}


////>>0x08004b34>>HAL_TIM_PWM_MspDeInit>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef *htim)

{
  timer_disable_clock(htim);
  return;
}


////>>0x08004b3c>>pwm_stop>>////

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


////>>0x08004b94>>GetCurrentMilli>>////

/* WARNING: Unknown calling convention */

uint32_t GetCurrentMilli(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_GetTick();
  return uVar1;
}


////>>0x08004b9c>>noOsSystickHandler>>////

/* WARNING: Unknown calling convention */

void noOsSystickHandler(void)

{
  return;
}


////>>0x08004b9e>>SysTick_Handler>>////

/* WARNING: Unknown calling convention */

void SysTick_Handler(void)

{
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
  noOsSystickHandler();
  return;
}


////>>0x08004bb0>>digital_io_init>>////


/* WARNING: Unknown calling convention */

void digital_io_init(PinName_conflict pin,uint32_t mode,uint32_t pull)

{
  uint uVar1;
  GPIO_TypeDef *GPIOx;
  GPIO_TypeDef *port;
  uint32_t tmpreg_2;
  uint32_t tmpreg_1;
  uint32_t tmpreg;
  GPIO_InitTypeDef GPIO_InitStructure;
  
  uVar1 = (uint)pin;
  GPIOx = set_GPIO_Port_Clock((uVar1 << 0x18) >> 0x1c);
  GPIO_InitStructure.Pin = 1 << (uVar1 & 0xf) & 0xffff;
  GPIO_InitStructure.Speed = 3;
  _DAT_40021018 = _DAT_40021018 | 1;
  if ((uVar1 - 0xd & 0xff) < 2) {
    _DAT_40010004 = _DAT_40010004 & 0xf8ffffff | 0x4000000;
  }
  if (((uVar1 == 0xf) || (uVar1 == 0x13)) || (uVar1 == 0x14)) {
    tmpreg_1 = _DAT_40010004 & 0xf8ffffff;
    _DAT_40010004 = tmpreg_1 | 0x2000000;
  }
  GPIO_InitStructure.Mode = mode;
  GPIO_InitStructure.Pull = pull;
  HAL_GPIO_Init(GPIOx,&GPIO_InitStructure);
  return;
}


////>>0x08004c30>>digital_io_write>>////

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


////>>0x08004c48>>digital_io_read>>////

/* WARNING: Unknown calling convention */

uint32_t digital_io_read(GPIO_TypeDef *port,uint32_t pin)

{
  GPIO_PinState GVar1;
  
  GVar1 = HAL_GPIO_ReadPin(port,(uint16_t)pin);
  return (uint)GVar1;
}


////>>0x08004c52>>hw_config_init>>////

/* WARNING: Unknown calling convention */

void hw_config_init(void)

{
  HAL_Init();
  SystemClock_Config();
  return;
}


////>>0x08004c5e>>pinmap_find_peripheral>>////

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


////>>0x08004c78>>pinmap_peripheral>>////

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


////>>0x08004c8a>>pinmap_find_pin>>////

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


////>>0x08004ca2>>pinmap_pin>>////

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


////>>0x08004cb2>>pinmap_find_function>>////

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


////>>0x08004cce>>pinmap_function>>////

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


////>>0x08004ce2>>pin_in_pinmap>>////

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


////>>0x08004d06>>pinmap_merge_peripheral>>////

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


////>>0x08004d18>>HAL_RTC_AlarmAEventCallback>>////

/* WARNING: Unknown calling convention */

void HAL_RTC_AlarmAEventCallback(RTC_HandleTypeDef *hrtc)

{
  if (RTCUserCallback != (voidCallbackPtr)0x0) {
    (*RTCUserCallback)(callbackUserData);
  }
  return;
}


////>>0x08004d30>>RTC_Alarm_IRQHandler>>////

/* WARNING: Unknown calling convention */

void RTC_Alarm_IRQHandler(void)

{
  HAL_RTC_AlarmIRQHandler(&RtcHandle);
  return;
}


////>>0x08004d40>>_Error_Handler>>////

/* WARNING: Unknown calling convention */

void _Error_Handler(char *msg,int val)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08004d44>>SystemInit>>////


/* WARNING: Unknown calling convention */

void SystemInit(void)

{
  _DAT_40021000 = _DAT_40021000 & 0xfef2ffff | 1;
  _DAT_40021004 = _DAT_40021004 & 0xf8800000;
  _DAT_40021008 = 0x9f0000;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x08004d90>>timer_disable_clock>>////


/* WARNING: Unknown calling convention */

void timer_disable_clock(TIM_HandleTypeDef *htim)

{
  if (htim->Instance == (TIM_TypeDef *)0x40012c00) {
    _DAT_40021018 = _DAT_40021018 & 0xfffff7ff;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40000000) {
    _DAT_4002101c = _DAT_4002101c & 0xfffffffe;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40000400) {
    _DAT_4002101c = _DAT_4002101c & 0xfffffffd;
  }
  if (htim->Instance == (TIM_TypeDef *)0x40000800) {
    _DAT_4002101c = _DAT_4002101c & 0xfffffffb;
  }
  return;
}


////>>0x08004df4>>get_timer_obj>>////

/* WARNING: Unknown calling convention */

stimer_t * get_timer_obj(TIM_HandleTypeDef *htim)

{
  return (stimer_t *)&htim[-1].Lock;
}


////>>0x08004df8>>HAL_TIM_OC_DelayElapsedCallback>>////

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


////>>0x08004e12>>HAL_TIM_PeriodElapsedCallback>>////

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


////>>0x08004e20>>TIM1_UP_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM1_UP_IRQHandler(void)

{
  if (timer_handles[0] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[0]);
  }
  return;
}


////>>0x08004e34>>TIM2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM2_IRQHandler(void)

{
  if (timer_handles[1] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[1]);
  }
  return;
}


////>>0x08004e48>>TIM3_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM3_IRQHandler(void)

{
  if (timer_handles[2] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[2]);
  }
  return;
}


////>>0x08004e5c>>TIM4_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM4_IRQHandler(void)

{
  if (timer_handles[3] != (TIM_HandleTypeDef *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[3]);
  }
  return;
}


////>>0x08004e70>>get_i2c_obj>>////

/* WARNING: Unknown calling convention */

i2c_t * get_i2c_obj(I2C_HandleTypeDef *hi2c)

{
  return (i2c_t *)&hi2c[-1].EventCount;
}


////>>0x08004e74>>HAL_I2C_AddrCallback>>////

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


////>>0x08004ec4>>HAL_I2C_ListenCpltCallback>>////

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


////>>0x08004ef4>>HAL_I2C_ErrorCallback>>////

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


////>>0x08004f0c>>I2C1_EV_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C1_EV_IRQHandler(void)

{
  HAL_I2C_EV_IRQHandler(i2c_handles);
  return;
}


////>>0x08004f1c>>I2C1_ER_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C1_ER_IRQHandler(void)

{
  HAL_I2C_ER_IRQHandler(i2c_handles);
  return;
}


////>>0x08004f2c>>I2C2_EV_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C2_EV_IRQHandler(void)

{
  HAL_I2C_EV_IRQHandler(I2C2_ER_IRQHandler::handle);
  return;
}


////>>0x08004f3c>>I2C2_ER_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C2_ER_IRQHandler(void)

{
  HAL_I2C_ER_IRQHandler(I2C2_ER_IRQHandler::handle);
  return;
}


////>>0x08004f4c>>uart_init>>////


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
  uint32_t tmpreg_4;
  uint32_t tmpreg_5;
  uint32_t tmpreg_6;
  uint32_t tmpreg_7;
  uint32_t tmpreg_8;
  uint32_t tmpreg_9;
  uint32_t tmpreg_10;
  uint32_t tmpreg_11;
  uint32_t tmpreg_12;
  uint32_t tmpreg_13;
  uint32_t tmpreg_14;
  uint32_t tmpreg_15;
  uint32_t tmpreg_16;
  UART_HandleTypeDef *huart;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_2;
  uint32_t tmpreg_3;
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
        if (pUVar1 == (USART_TypeDef *)0x40013800) {
          _DAT_4002100c = _DAT_4002100c & 0xffffbfff;
          _DAT_40021018 = _DAT_40021018 | 0x4000;
          obj->index = '\0';
          obj->irq = USART1_IRQn;
        }
        else if (pUVar1 == (USART_TypeDef *)0x40004400) {
          _DAT_40021010 = _DAT_40021010 & 0xfffdffff;
          _DAT_4002101c = _DAT_4002101c | 0x20000;
          obj->index = '\x01';
          obj->irq = USART2_IRQn;
        }
        else if (pUVar1 == (USART_TypeDef *)0x40004800) {
          _DAT_40021010 = _DAT_40021010 & 0xfffbffff;
          _DAT_4002101c = _DAT_4002101c | 0x40000;
          obj->index = '\x02';
          obj->irq = USART3_IRQn;
        }
        pGVar2 = set_GPIO_Port_Clock((uint)((int)obj->pin_rx << 0x18) >> 0x1c);
        uVar3 = pinmap_function(obj->pin_rx,(PinMap_conflict *)&PinMap_UART_RX);
        GPIO_InitStruct.Pin = 1 << (obj->pin_rx & 0xfU) & 0xffff;
        GPIO_InitStruct.Mode = (uVar3 >> 3 & 1) << 4 | uVar3 & 7;
        GPIO_InitStruct.Pull = (uVar3 << 0x1a) >> 0x1e;
        _DAT_40021018 = _DAT_40021018 | 1;
        switch((uVar3 << 0x11) >> 0x19) {
        case 1:
          tmpreg_13 = tmpreg_13 | 0x7000001;
          break;
        case 2:
          tmpreg_13 = tmpreg_13 & 0xfffffffe | 0x7000000;
          break;
        case 3:
          tmpreg_13 = tmpreg_13 | 0x7000002;
          break;
        case 4:
          tmpreg_13 = tmpreg_13 & 0xfffffffd | 0x7000000;
          break;
        case 5:
          tmpreg_13 = tmpreg_13 | 0x7000004;
          break;
        case 6:
          tmpreg_13 = tmpreg_13 & 0xfffffffb | 0x7000000;
          break;
        case 7:
          tmpreg_13 = tmpreg_13 | 0x7000008;
          break;
        case 8:
          tmpreg_13 = tmpreg_13 & 0xfffffff7 | 0x7000000;
          break;
        case 9:
          tmpreg_13 = tmpreg_13 | 0x7000030;
          break;
        case 10:
          tmpreg_4 = tmpreg_13 & 0xffffffcf;
          tmpreg_13 = tmpreg_4 | 0x7000010;
          break;
        case 0xb:
          tmpreg_5 = tmpreg_13 & 0xffffffcf;
          tmpreg_13 = tmpreg_5 | 0x7000000;
          break;
        case 0xc:
          tmpreg_13 = tmpreg_13 | 0x70000c0;
          break;
        case 0xd:
          tmpreg_6 = tmpreg_13 & 0xffffff3f;
          tmpreg_13 = tmpreg_6 | 0x7000040;
          break;
        case 0xe:
          tmpreg_7 = tmpreg_13 & 0xffffff3f;
          tmpreg_13 = tmpreg_7 | 0x7000000;
          break;
        case 0xf:
          tmpreg_13 = tmpreg_13 | 0x7000300;
          break;
        case 0x10:
          tmpreg_8 = tmpreg_13 & 0xfffffcff;
          tmpreg_13 = tmpreg_8 | 0x7000200;
          break;
        case 0x11:
          tmpreg_9 = tmpreg_13 & 0xfffffcff;
          tmpreg_13 = tmpreg_9 | 0x7000100;
          break;
        case 0x12:
          tmpreg_10 = tmpreg_13 & 0xfffffcff;
          tmpreg_13 = tmpreg_10 | 0x7000000;
          break;
        case 0x13:
          tmpreg_13 = tmpreg_13 | 0x7000c00;
          break;
        case 0x14:
          tmpreg_11 = tmpreg_13 & 0xfffff3ff;
          tmpreg_13 = tmpreg_11 | 0x7000800;
          break;
        case 0x15:
          tmpreg_12 = tmpreg_13 & 0xfffff3ff;
          tmpreg_13 = tmpreg_12 | 0x7000000;
          break;
        case 0x16:
          tmpreg_13 = tmpreg_13 | 0x7001000;
          break;
        case 0x17:
          tmpreg_13 = tmpreg_13 & 0xffffefff | 0x7000000;
          break;
        case 0x1b:
          tmpreg_13 = tmpreg_13 | 0x7008000;
          break;
        case 0x1c:
          tmpreg_13 = tmpreg_13 & 0xffff7fff | 0x7000000;
          break;
        case 0x21:
          tmpreg_13 = tmpreg_13 & 0xf8ffffff;
          break;
        case 0x22:
          tmpreg_14 = tmpreg_13 & 0xf8ffffff;
          tmpreg_13 = tmpreg_14 | 0x1000000;
          break;
        case 0x23:
          tmpreg_15 = tmpreg_13 & 0xf8ffffff;
          tmpreg_13 = tmpreg_15 | 0x2000000;
          break;
        case 0x24:
          tmpreg_16 = tmpreg_13 & 0xf8ffffff;
          tmpreg_13 = tmpreg_16 | 0x4000000;
        }
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


////>>0x08005384>>uart_debug_init>>////

/* WARNING: Unknown calling convention */

void uart_debug_init(void)

{
  void *pvVar1;
  
  pvVar1 = pinmap_peripheral(PA_2,(PinMap_conflict *)&PinMap_UART_TX);
  if (pvVar1 != (void *)0x0) {
    pvVar1 = pinmap_peripheral(PA_2,(PinMap_conflict *)&PinMap_UART_TX);
    serial_debug.pin_rx = pinmap_pin(pvVar1,(PinMap_conflict *)&PinMap_UART_RX);
    serial_debug.pin_tx = PA_2;
    serial_debug.baudrate = 0x2580;
    serial_debug.parity = 0;
    serial_debug.databits = 0;
    serial_debug.stopbits = 0;
    uart_init(&serial_debug);
  }
  return;
}


////>>0x080053d4>>uart_debug_write>>////

/* WARNING: Unknown calling convention */

size_t uart_debug_write(uint8_t *data,uint32_t size)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  uint32_t tickstart;
  void *pvVar3;
  USART_TypeDef *pUVar4;
  uint32_t uVar5;
  uint uVar6;
  
  uVar2 = HAL_GetTick();
  pvVar3 = pinmap_peripheral(PA_2,(PinMap_conflict *)&PinMap_UART_TX);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  uVar6 = 0;
  while ((uVar6 < 5 &&
         ((uart_handlers[uVar6] == (UART_HandleTypeDef *)0x0 ||
          (pUVar4 = (USART_TypeDef *)pinmap_peripheral(PA_2,(PinMap_conflict *)&PinMap_UART_TX),
          uart_handlers[uVar6]->Instance != pUVar4))))) {
    uVar6 = uVar6 + 1 & 0xff;
  }
  if (4 < uVar6) {
    if ((4 < serial_debug.index) && (uart_debug_init(), 4 < serial_debug.index)) {
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


////>>0x0800548c>>serial_rx_active>>////

/* WARNING: Unknown calling convention */

uint8_t serial_rx_active(serial_t *obj)

{
  HAL_UART_StateTypeDef HVar1;
  
  HVar1 = HAL_UART_GetState(uart_handlers[obj->index]);
  return (HVar1 & 0x22) == 0x22;
}


////>>0x080054b0>>serial_tx_active>>////

/* WARNING: Unknown calling convention */

uint8_t serial_tx_active(serial_t *obj)

{
  HAL_UART_StateTypeDef HVar1;
  
  HVar1 = HAL_UART_GetState(uart_handlers[obj->index]);
  return (HVar1 & 0x21) == 0x21;
}


////>>0x080054d4>>uart_getc>>////

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


////>>0x08005510>>uart_attach_rx_callback>>////

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


////>>0x08005568>>uart_attach_tx_callback>>////

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


////>>0x080055bc>>uart_index>>////

/* WARNING: Unknown calling convention */

uint8_t uart_index(UART_HandleTypeDef *huart)

{
  uint uVar1;
  
  if (huart == (UART_HandleTypeDef *)0x0) {
    uVar1 = 5;
  }
  else {
    uVar1 = 0;
    while( true ) {
      if (4 < uVar1) {
        return (uint8_t)uVar1;
      }
      if (huart == uart_handlers[uVar1]) break;
      uVar1 = uVar1 + 1 & 0xff;
    }
  }
  return (uint8_t)uVar1;
}


////>>0x080055e0>>HAL_UART_RxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)

{
  byte bVar1;
  uint8_t index;
  uint uVar2;
  
  bVar1 = uart_index(huart);
  uVar2 = (uint)bVar1;
  if (uVar2 < 5) {
    (*rx_callback[uVar2])(rx_callback_obj[uVar2]);
  }
  return;
}


////>>0x08005604>>HAL_UART_TxCpltCallback>>////

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
  if ((uVar2 < 5) && (iVar3 = (*tx_callback[uVar2])(psVar4), iVar3 != -1)) {
    HAL_UART_Transmit_IT(uart_handlers[psVar4->index],psVar4->tx_buff + psVar4->tx_tail,1);
  }
  return;
}


////>>0x08005650>>HAL_UART_ErrorCallback>>////

/* WARNING: Unknown calling convention */

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)

{
  uint32_t tmpval;
  
  return;
}


////>>0x08005690>>USART1_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART1_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART1_IRQn);
  HAL_UART_IRQHandler(uart_handlers[0]);
  return;
}


////>>0x080056a8>>USART2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART2_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART2_IRQn);
  HAL_UART_IRQHandler(uart_handlers[1]);
  return;
}


////>>0x080056c0>>USART3_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART3_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART3_IRQn);
  if (uart_handlers[2] != (UART_HandleTypeDef *)0x0) {
    HAL_UART_IRQHandler(uart_handlers[2]);
  }
  return;
}


////>>0x080056d8>>_sbrk>>////

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


////>>0x08005714>>_close>>////

int _close(int __fd)

{
  return -1;
}


////>>0x0800571a>>_fstat>>////

int _fstat(int __fd,stat *__buf)

{
  *(undefined4 *)((int)&__buf->st_dev + 4) = 0x2000;
  return 0;
}


////>>0x08005724>>_isatty>>////

int _isatty(int __fd)

{
  return 1;
}


////>>0x08005728>>_lseek>>////

__off_t _lseek(int __fd,__off_t __offset,int __whence)

{
  return 0;
}


////>>0x0800572c>>_read>>////

/* WARNING: Unknown calling convention */

int _read(int file_UNUSED,char *ptr_UNUSED,int len_UNUSED)

{
  return 0;
}


////>>0x08005730>>_write>>////

/* WARNING: Unknown calling convention */

int _write(int file_UNUSED,char *ptr,int len)

{
  size_t sVar1;
  
  sVar1 = uart_debug_write((uint8_t *)ptr,len);
  return sVar1;
}


////>>0x0800573c>>_exit>>////

void _exit(int __status)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x08005740>>_kill>>////

int _kill(__pid_t __pid,int __sig)

{
  errno = 0x16;
  return -1;
}


////>>0x08005750>>_getpid>>////



__pid_t _getpid(void)

{
  return 1;
}


////>>0x08005754>>analogRead>>////

/* WARNING: Unknown calling convention */

uint32_t analogRead(uint32_t ulPin)

{
  bool bVar1;
  PinName_conflict p;
  uint16_t uVar2;
  uint32_t uVar3;
  
  if (ulPin < 0xe) {
    if (ulPin + 0x2e < 0x3c) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = ulPin < 0x3c;
  }
  if (bVar1) {
    if (ulPin < 0xe) {
      ulPin = ulPin + 0x2e;
    }
    p = (&digitalPin)[ulPin];
  }
  else {
    p = NC;
  }
  if (p == NC) {
    uVar3 = 0;
  }
  else {
    uVar2 = adc_read_value(p);
    uVar3 = (uint32_t)uVar2;
    if (_readResolution != 0xc) {
      if ((uint)_readResolution < 0xc) {
        return (uint)(uVar2 >> (0xcU - _readResolution & 0xff));
      }
      return uVar3 << (_readResolution - 0xcU & 0xff);
    }
  }
  return uVar3;
}


////>>0x080057b4>>pinMode>>////

/* WARNING: Unknown calling convention */

void pinMode(uint32_t ulPin,uint32_t ulMode)

{
  _Bool _Var1;
  PinName_conflict p;
  
  if (ulPin < 0x3c) {
    p = (&digitalPin)[ulPin];
  }
  else {
    p = NC;
  }
  if (p != NC) {
    _Var1 = is_pin_configured(p,g_anOutputPinConfigured);
    if (_Var1) {
      _Var1 = pin_in_pinmap(p,(PinMap_conflict *)&PinMap_PWM);
      if (_Var1) {
        pwm_stop(p);
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


////>>0x08005848>>digitalWrite>>////

/* WARNING: Unknown calling convention */

void digitalWrite(uint32_t ulPin,uint32_t ulVal)

{
  _Bool _Var1;
  GPIO_TypeDef *port;
  PinName_conflict p;
  uint uVar2;
  
  if (ulPin < 0x3c) {
    uVar2 = (uint)(char)(&digitalPin)[ulPin];
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


////>>0x08005890>>digitalRead>>////

/* WARNING: Unknown calling convention */

int digitalRead(uint32_t ulPin)

{
  _Bool _Var1;
  GPIO_TypeDef *port;
  uint32_t uVar2;
  PinName_conflict p;
  uint uVar3;
  
  if (ulPin < 0x3c) {
    uVar3 = (uint)(char)(&digitalPin)[ulPin];
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (uVar3 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    _Var1 = is_pin_configured((PinName_conflict)uVar3,g_digPinConfigured);
    if (_Var1) {
      port = get_GPIO_Port((uVar3 << 0x18) >> 0x1c);
      uVar2 = digital_io_read(port,1 << (uVar3 & 0xf) & 0xffff);
      uVar3 = uVar2 & 0xff;
    }
    else {
      uVar3 = 0;
    }
  }
  if (uVar3 != 0) {
    uVar3 = 1;
  }
  return uVar3;
}


////>>0x080058e0>>millis>>////

/* WARNING: Unknown calling convention */

uint32_t millis(void)

{
  uint32_t uVar1;
  
  uVar1 = GetCurrentMilli();
  return uVar1;
}


////>>0x080058e8>>delay>>////

/* WARNING: Unknown calling convention */

void delay(uint32_t ms)

{
  return;
}


////>>0x080058ea>>_tx_complete_irq>>////

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


////>>0x0800591e>>available>>////

/* DWARF original prototype: int  available(HardwareSerial * this) */

int __thiscall HardwareSerial::available(HardwareSerial *this)

{
  return ((this->_serial).rx_head + 0x40) - (uint)(this->_serial).rx_tail & 0x3f;
}


////>>0x08005932>>peek>>////

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


////>>0x0800594e>>read>>////

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


////>>0x08005976>>flush>>////

/* DWARF original prototype: void  flush(HardwareSerial * this) */

void __thiscall HardwareSerial::flush(HardwareSerial *this)

{
  if (this->_written != false) {
    do {
    } while ((this->_serial).tx_head != (this->_serial).tx_tail);
  }
  return;
}


////>>0x0800598a>>_rx_complete_irq>>////

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


////>>0x080059c8>>write>>////

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


////>>0x08005a18>>serialEventRun>>////

/* WARNING: Removing unreachable block (ram,0x08005a1e) */
/* WARNING: Removing unreachable block (ram,0x08005a30) */
/* WARNING: Removing unreachable block (ram,0x08005a26) */
/* WARNING: Removing unreachable block (ram,0x08005a38) */
/* WARNING: Unknown calling convention */

void serialEventRun(void)

{
  return;
}


////>>0x08005a44>>init>>////

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


////>>0x08005a68>>begin>>////

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


////>>0x08005b24>>setRx>>////

/* DWARF original prototype: void  setRx(HardwareSerial * this, uint32_t _rx) */

void __thiscall HardwareSerial::setRx(HardwareSerial *this,uint32_t _rx)

{
  PinName PVar1;
  
  if (_rx < 0x3c) {
    PVar1 = (&digitalPin)[_rx];
  }
  else {
    PVar1 = NC;
  }
  (this->_serial).pin_rx = PVar1;
  return;
}


////>>0x08005b3c>>setTx>>////

/* DWARF original prototype: void  setTx(HardwareSerial * this, uint32_t _tx) */

void __thiscall HardwareSerial::setTx(HardwareSerial *this,uint32_t _tx)

{
  PinName PVar1;
  
  if (_tx < 0x3c) {
    PVar1 = (&digitalPin)[_tx];
  }
  else {
    PVar1 = NC;
  }
  (this->_serial).pin_tx = PVar1;
  return;
}


////>>0x08005b54>>HardwareSerial>>////

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
  (this->super_Stream).super_Print._vptr_Print = (_func_int_varargs **)&PTR_write_1_08007804;
  if (this == &Serial2) {
    setRx(&Serial2,0);
    setTx(&Serial2,1);
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


////>>0x08005bb0>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if (__initialize_p != 1) {
    return;
  }
  if (__priority == 0xffff) {
    HardwareSerial::HardwareSerial(&Serial2,(void *)0x40004400);
  }
  return;
}


////>>0x08005bd4>>_GLOBAL__sub_I_Serial2>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I_Serial2(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x08005be2>>printTo>>////

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


////>>0x08005c1c>>IPAddress>>////

/* DWARF original prototype: IPAddress *  IPAddress(IPAddress * this, uint8_t first_octet, uint8_t
   second_octet, uint8_t third_octet, uint8_t fourth_octet) */

IPAddress * __thiscall
IPAddress::IPAddress
          (IPAddress *this,uint8_t first_octet,uint8_t second_octet,uint8_t third_octet,
          uint8_t fourth_octet)

{
  (this->super_Printable)._vptr_Printable = (_func_int_varargs **)&DAT_08007858;
  (this->_address).bytes[0] = first_octet;
  (this->_address).bytes[1] = second_octet;
  (this->_address).bytes[2] = third_octet;
  (this->_address).bytes[3] = fourth_octet;
  return this;
}


////>>0x08005c38>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if ((__initialize_p == 1) && (__priority == 0xffff)) {
    IPAddress::IPAddress(&INADDR_NONE,'\0','\0','\0','\0');
    return;
  }
  return;
}


////>>0x08005c64>>_GLOBAL__sub_I__ZN9IPAddressC2Ev>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__ZN9IPAddressC2Ev(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x08005c72>>write>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08005c86 */
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


////>>0x08005c96>>print>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08005cae */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  print(Print * this, char * str) */

size_t __thiscall Print::print(Print *this,char *str)

{
  size_t sVar1;
  size_t sVar2;
  
  if (str != (char *)0x0) {
    sVar1 = strlen(str);
    sVar2 = (*this->_vptr_Print[1])(sVar1,str,sVar1);
    return sVar2;
  }
  return 0;
}


////>>0x08005cb6>>print>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08005cbc */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  print(Print * this, char c) */

size_t __thiscall Print::print(Print *this,char c)

{
  size_t sVar1;
  
  sVar1 = (**this->_vptr_Print)(this,(int)c);
  return sVar1;
}


////>>0x08005cc0>>println>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08005cca */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  println(Print * this) */

size_t __thiscall Print::println(Print *this)

{
  size_t sVar1;
  
  sVar1 = (*this->_vptr_Print[1])(this,&DAT_0800786c,2);
  return sVar1;
}


////>>0x08005cd4>>println>>////

/* DWARF original prototype: size_t  println(Print * this, char * c) */

size_t __thiscall Print::println(Print *this,char *c)

{
  size_t sVar1;
  size_t n;
  size_t sVar2;
  
  sVar1 = print(this,c);
  sVar2 = println(this);
  return sVar2 + sVar1;
}


////>>0x08005ce8>>printNumber>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08005d38 */
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
    uVar4 = (m & 0xff) - (uVar6 * uVar5 & 0xff) & 0xff;
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


////>>0x08005d42>>print>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08005d5c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  print(Print * this, long n, int base) */

size_t __thiscall Print::print(Print *this,long n,int base)

{
  size_t sVar1;
  int t;
  size_t sVar2;
  
  if (base == 0) {
    sVar1 = (**this->_vptr_Print)(this,n & 0xff);
    return sVar1;
  }
  if (base != 10) {
    sVar1 = printNumber(this,n,(uint8_t)base);
    return sVar1;
  }
  if (-1 < n) {
    sVar1 = printNumber(this,n,'\n');
    return sVar1;
  }
  sVar1 = print(this,'-');
  sVar2 = printNumber(this,-n,'\n');
  return sVar2 + sVar1;
}


////>>0x08005d82>>print>>////

/* DWARF original prototype: size_t  print(Print * this, int n, int base) */

size_t __thiscall Print::print(Print *this,int n,int base)

{
  size_t sVar1;
  
  sVar1 = print(this,n,base);
  return sVar1;
}


////>>0x08005d8a>>print>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08005d9c */
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


////>>0x08005da0>>print>>////

/* DWARF original prototype: size_t  print(Print * this, uchar b, int base) */

size_t __thiscall Print::print(Print *this,uchar b,int base)

{
  size_t sVar1;
  
  sVar1 = print(this,(uint)b,base);
  return sVar1;
}


////>>0x08005da8>>printFloat>>////

/* DWARF original prototype: size_t  printFloat(Print * this, double number, uint8_t digits) */

size_t __thiscall Print::printFloat(Print *this,double number,uint8_t digits)

{
  int iVar1;
  ulong n;
  ulong int_part;
  size_t sVar2;
  int toPrint;
  size_t sVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = __unorddf2();
  if (iVar1 == 0) {
    iVar1 = __unorddf2();
    if ((iVar1 == 0) && (iVar1 = __aeabi_dcmple(), iVar1 == 0)) {
      sVar3 = print(this,"inf");
    }
    else {
      iVar1 = __aeabi_dcmpgt();
      if (iVar1 == 0) {
        iVar1 = __aeabi_dcmplt();
        if (iVar1 == 0) {
          iVar1 = __aeabi_dcmplt();
          if (iVar1 == 0) {
            sVar3 = 0;
          }
          else {
            sVar3 = print(this,'-');
          }
          uVar5 = 0x3fe0000000000000;
          for (bVar4 = 0; bVar4 < number._0_1_; bVar4 = bVar4 + 1) {
            uVar5 = __divdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x40240000);
          }
          uVar5 = __aeabi_dadd();
          n = __fixunsdfsi();
          uVar6 = __floatunsidf();
          int_part = (ulong)uVar6;
          uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),int_part,
                           (int)((ulonglong)uVar6 >> 0x20));
          sVar2 = print(this,n,10);
          sVar3 = sVar3 + sVar2;
          if (number._0_1_ != 0) {
            sVar2 = print(this,".");
            sVar3 = sVar3 + sVar2;
          }
          while( true ) {
            if (number._0_1_ == 0) break;
            uVar5 = __muldf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x40240000);
            iVar1 = __fixdfsi();
            sVar2 = print(this,iVar1,10);
            sVar3 = sVar3 + sVar2;
            uVar6 = __floatsidf(iVar1);
            uVar5 = __subdf3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                             (int)((ulonglong)uVar6 >> 0x20));
            number._0_1_ = number._0_1_ - 1;
          }
        }
        else {
          sVar3 = print(this,"ovf");
        }
      }
      else {
        sVar3 = print(this,"ovf");
      }
    }
  }
  else {
    sVar3 = print(this,"nan");
  }
  return sVar3;
}


////>>0x08005f2c>>print>>////

/* DWARF original prototype: size_t  print(Print * this, double n, int digits) */

size_t __thiscall Print::print(Print *this,double n,int digits)

{
  size_t sVar1;
  undefined4 in_stack_fffffff4;
  
  sVar1 = printFloat(this,(double)CONCAT44(in_stack_fffffff4,(uint)n._0_1_),n._0_1_);
  return sVar1;
}


////>>0x08005f40>>println>>////

/* DWARF original prototype: size_t  println(Print * this, double num, int digits) */

size_t __thiscall Print::println(Print *this,double num,int digits)

{
  size_t sVar1;
  size_t n;
  size_t sVar2;
  undefined4 in_stack_ffffffec;
  
  sVar1 = print(this,(double)CONCAT44(in_stack_ffffffec,num._0_4_),num._0_4_);
  sVar2 = println(this);
  return sVar2 + sVar1;
}


////>>0x08005f5c>>initVariant>>////

/* WARNING: Unknown calling convention */

void initVariant(void)

{
  return;
}


////>>0x08005f5e>>premain>>////

/* WARNING: Unknown calling convention */

void premain(void)

{
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)0x3;
  HAL_NVIC_SetPriorityGrouping(3);
  init(ctx);
  return;
}


////>>0x08005f6c>>main>>////

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


////>>0x08005f8c>>get_pin_id>>////

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


////>>0x08005fa0>>__tcf_0>>////

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


////>>0x08005fc8>>__static_initialization_and_destruction_0>>////

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
    __aeabi_atexit(0,0x8005fa1,0x20000000);
  }
  return;
}


////>>0x08006074>>EXTI0_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI0_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(1);
  return;
}


////>>0x0800607e>>EXTI1_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI1_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(2);
  return;
}


////>>0x08006088>>EXTI2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI2_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(4);
  return;
}


////>>0x08006092>>EXTI3_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI3_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(8);
  return;
}


////>>0x0800609c>>EXTI4_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI4_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(0x10);
  return;
}


////>>0x080060a6>>EXTI9_5_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI9_5_IRQHandler(void)

{
  uint uVar1;
  
  for (uVar1 = 0x20; uVar1 < 0x201; uVar1 = uVar1 << 1) {
    HAL_GPIO_EXTI_IRQHandler((uint16_t)uVar1);
  }
  return;
}


////>>0x080060bc>>EXTI15_10_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI15_10_IRQHandler(void)

{
  uint uVar1;
  
  for (uVar1 = 0x400; uVar1 < 0x8001; uVar1 = uVar1 << 1) {
    HAL_GPIO_EXTI_IRQHandler((uint16_t)uVar1);
  }
  return;
}


////>>0x080060d4>>operator()>>////

/* DWARF original prototype: void  operator()(function<void()> * this) */

void __thiscall std::function<void()>::operator()(function<void()> *this)

{
  if ((this->super__Function_base)._M_manager != (_Manager_type)0x0) {
    (*this->_M_invoker)((_Any_data *)this);
    return;
  }
                    
  __throw_bad_function_call();
}


////>>0x080060e4>>HAL_GPIO_EXTI_Callback>>////

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


////>>0x08006104>>_GLOBAL__sub_I__Z22stm32_interrupt_enableP12GPIO_TypeDeftSt8functionIFvvEEm>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__Z22stm32_interrupt_enableP12GPIO_TypeDeftSt8functionIFvvEEm(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x08006112>>__aeabi_atexit>>////

void __aeabi_atexit(undefined4 param_1,undefined4 param_2)

{
  __cxa_atexit(param_2,param_1);
  return;
}


////>>0x0800611c>>__assert_func>>////

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


////>>0x08006158>>__cxa_atexit>>////

/* WARNING: Removing unreachable block (ram,0x08006160) */

longlong __cxa_atexit(undefined4 param_1,uint param_2)

{
  return (ulonglong)param_2 << 0x20;
}


////>>0x08006174>>fiprintf>>////

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


////>>0x08006198>>__libc_init_array>>////

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


////>>0x080061e0>>memset>>////

void * memset(void *__s,int __c,size_t __n)

{
  undefined *puVar1;
  
  for (puVar1 = (undefined *)__s; puVar1 != (undefined *)(__n + (int)__s); puVar1 = puVar1 + 1) {
    *puVar1 = (char)__c;
  }
  return __s;
}


////>>0x080061f0>>_free_r>>////

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


////>>0x08006288>>_malloc_r>>////

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
        goto LAB_080062ec;
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
LAB_080062ec:
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


////>>0x08006344>>__sfputc_r>>////

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


////>>0x08006370>>__sfputs_r>>////

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


////>>0x08006394>>_vfiprintf_r>>////

/* WARNING: Removing unreachable block (ram,0x08006568) */

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
LAB_080063d6:
  pbVar6 = pbVar5;
  if (*pbVar6 != 0) goto LAB_0800648c;
  goto LAB_080063e0;
LAB_0800648c:
  pbVar5 = pbVar6 + 1;
  if (*pbVar6 != 0x25) goto LAB_080063d6;
LAB_080063e0:
  iVar7 = (int)pbVar6 - (int)param_3;
  if (iVar7 != 0) {
    iVar2 = __sfputs_r(param_1,param_2,param_3,iVar7);
    if (iVar2 == -1) {
LAB_08006580:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar7;
  }
  if (*pbVar6 == 0) goto LAB_08006580;
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
    local_88 = 1 << ((int)pvVar3 + 0xf7ff8750U & 0xff) | local_88;
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
      goto LAB_080064be;
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
    if (!bVar1) goto LAB_080064be;
  }
  local_7c = iVar7;
LAB_080064be:
  if (*param_3 == 0x2e) {
    if (param_3[1] == 0x2a) {
      param_3 = param_3 + 2;
      piVar4 = local_8c + 1;
      local_84 = *local_8c;
      local_8c = piVar4;
      if (local_84 < 0) {
        local_84 = -1;
      }
    }
    else {
      bVar1 = false;
      iVar7 = 0;
      local_84 = 0;
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
  pvVar3 = memchr(&DAT_080078b6,(uint)*param_3,3);
  if (pvVar3 != (void *)0x0) {
    param_3 = param_3 + 1;
    local_88 = local_88 | 0x40 << ((int)pvVar3 + 0xf7ff874aU & 0xff);
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  pvVar3 = memchr("efgEFG",(uint)local_70,6);
  if (pvVar3 == (void *)0x0) {
    unaff_r9 = _printf_i(param_1,&local_88,param_2,0x8006371,&local_8c);
    if (unaff_r9 == -1) goto LAB_08006580;
  }
  else {
    local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
  }
  local_74 = local_74 + unaff_r9;
  pbVar5 = param_3;
  goto LAB_080063d6;
}


////>>0x080065c0>>_printf_common>>////

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


////>>0x080066b0>>_printf_i>>////

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
          if (bVar1 == 0) goto LAB_0800686a;
          if (bVar1 != 0x58) goto LAB_080066e0;
          *(undefined *)((int)param_2 + 0x45) = 0x58;
          pcVar6 = "0123456789ABCDEF";
LAB_080067fa:
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
LAB_08006790:
          *(undefined *)((int)param_2 + 0x43) = 0;
        }
        else {
          if ((bVar1 != 100) && (bVar1 != 0x69)) goto LAB_080066e0;
          uVar10 = *param_2;
          puVar3 = *param_5;
          if ((uVar10 & 0x80) == 0) {
            *param_5 = puVar3 + 1;
            if ((uVar10 & 0x40) == 0) goto LAB_08006700;
            uVar10 = (uint)(short)*(ushort *)puVar3;
          }
          else {
            *param_5 = puVar3 + 1;
LAB_08006700:
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
          if (uVar10 != 0) goto LAB_0800682e;
LAB_080068dc:
          *(char *)((int)param_2 + 0x42) = *pcVar6;
          pcVar12 = (char *)((int)param_2 + 0x42);
        }
        else {
          *param_2 = *param_2 & 0xfffffffb;
          if (uVar10 == 0) {
            if (uVar11 != 0) goto LAB_080068dc;
          }
          else {
LAB_0800682e:
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
        goto LAB_080067d6;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      *(char *)((int)param_2 + 0x42) = (char)*puVar3;
LAB_08006740:
      __s = (char *)((int)param_2 + 0x42);
      uVar10 = 1;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 < 0x74) {
          if (bVar1 == 0x6f) {
LAB_08006766:
            uVar10 = *param_2;
            puVar3 = *param_5;
            if ((uVar10 & 0x80) == 0) {
              *param_5 = puVar3 + 1;
              if ((uVar10 & 0x40) == 0) goto LAB_08006774;
              uVar10 = (uint)*(ushort *)puVar3;
            }
            else {
              *param_5 = puVar3 + 1;
LAB_08006774:
              uVar10 = *puVar3;
            }
            if (bVar1 == 0x6f) {
              uVar7 = 8;
            }
            else {
              uVar7 = 10;
            }
            pcVar6 = "0123456789ABCDEF";
            goto LAB_08006790;
          }
          if (bVar1 == 0x70) {
            *param_2 = *param_2 | 0x20;
LAB_08006726:
            pcVar6 = "0123456789abcdef";
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
    goto LAB_080067d6;
  }
  uVar10 = *param_2;
  ppuVar8 = (uint **)*param_5;
  uVar7 = param_2[5];
  if ((uVar10 & 0x80) == 0) {
    *param_5 = (uint *)(ppuVar8 + 1);
    puVar3 = *ppuVar8;
    if ((uVar10 & 0x40) == 0) goto LAB_08006856;
    *(short *)puVar3 = (short)uVar7;
  }
  else {
    *param_5 = (uint *)(ppuVar8 + 1);
    puVar3 = *ppuVar8;
LAB_08006856:
    *puVar3 = uVar7;
  }
LAB_0800686a:
  param_2[4] = 0;
LAB_080067d6:
  iVar2 = _printf_common(param_1,param_2,local_24,param_3,param_4);
  if ((iVar2 == -1) || (iVar2 = (*param_4)(param_1,param_3,__s,param_2[4]), iVar2 == -1)) {
LAB_080067ea:
    uVar10 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar2 = 0; iVar2 < (int)(param_2[3] - local_24[0]); iVar2 = iVar2 + 1) {
        iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar5 == -1) goto LAB_080067ea;
      }
    }
    uVar10 = param_2[3];
    if ((int)param_2[3] < (int)local_24[0]) {
      uVar10 = local_24[0];
    }
  }
  return uVar10;
}


////>>0x080068f0>>iprintf>>////

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


////>>0x08006920>>_sbrk_r>>////

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


////>>0x08006940>>__swbuf_r>>////

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
    param_2 = param_2 & 0xff;
    iVar1 = *param_3 - param_3[4];
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


////>>0x080069e4>>__swsetup_r>>////

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
      goto LAB_08006a14;
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


////>>0x08006ac0>>abort>>////



void abort(void)

{
  raise(6);
                    
  _exit(1);
}


////>>0x08006ad0>>__sflush_r>>////

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
      bVar9 = iVar5 != 0;
      if (bVar9) {
        iVar5 = 0;
      }
      iVar7 = *param_2;
      if (!bVar9) {
        iVar5 = param_2[5];
      }
      *param_2 = iVar1;
      param_2[2] = iVar5;
      for (iVar7 = iVar7 - iVar1; 0 < iVar7; iVar7 = iVar7 - iVar5) {
        iVar5 = (*(code *)param_2[10])(param_1,param_2[8],iVar1,iVar7);
        if (iVar5 < 1) {
          uVar4 = *(ushort *)(param_2 + 3);
          goto LAB_08006bc6;
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
LAB_08006bc6:
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


////>>0x08006be0>>_fflush_r>>////

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


////>>0x08006c34>>_cleanup_r>>////

void _cleanup_r(undefined4 param_1)

{
  _fwalk_reent(param_1,0x8006be1);
  return;
}


////>>0x08006c40>>std.isra.0>>////

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
  param_1[8] = param_1;
  param_1[9] = 0x8006f39;
  param_1[10] = 0x8006f5b;
  param_1[0xb] = 0x8006f93;
  param_1[0xc] = 0x8006fb7;
  return;
}


////>>0x08006c88>>__sfmoreglue>>////

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


////>>0x08006cb4>>__sinit>>////

void __sinit(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar2 = &impure_data;
    *(undefined4 *)(param_1 + 0x28) = 0x8006c35;
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


////>>0x08006d14>>__sfp>>////

int * __sfp(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  
  if (DAT_20000114 == 0) {
    __sinit(&impure_data);
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


////>>0x08006d8c>>_fwalk_reent>>////

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


////>>0x08006dc8>>__swhatbuf_r>>////

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


////>>0x08006e10>>__smakebuf_r>>////

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
      *(undefined4 *)(param_1 + 0x28) = 0x8006c35;
      *param_2 = iVar2;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x80;
      param_2[4] = iVar2;
      param_2[5] = local_18;
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


////>>0x08006e90>>memchr>>////

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


////>>0x08006eac>>__malloc_lock>>////

void __malloc_lock(void)

{
  return;
}


////>>0x08006eae>>__malloc_unlock>>////

void __malloc_unlock(void)

{
  return;
}


////>>0x08006eb0>>_raise_r>>////

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


////>>0x08006f00>>raise>>////

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = _raise_r(_impure_ptr,__sig);
  return iVar1;
}


////>>0x08006f10>>_kill_r>>////

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


////>>0x08006f34>>_getpid_r>>////



__pid_t _getpid_r(void)

{
  return 1;
}


////>>0x08006f38>>__sread>>////

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


////>>0x08006f5a>>__swrite>>////

void __swrite(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    _lseek_r(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  _write_r(param_1,(int)*(short *)(param_2 + 0xe),param_3,param_4);
  return;
}


////>>0x08006f92>>__sseek>>////

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


////>>0x08006fb6>>__sclose>>////

void __sclose(undefined4 param_1,int param_2)

{
  _close_r(param_1,(int)*(short *)(param_2 + 0xe));
  return;
}


////>>0x08006fc0>>_write_r>>////

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


////>>0x08006fe4>>_close_r>>////

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


////>>0x08007004>>_fstat_r>>////

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


////>>0x08007028>>_isatty_r>>////

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


////>>0x08007048>>_lseek_r>>////

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


////>>0x0800706c>>_read_r>>////

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


////>>0x08007090>>__throw_bad_function_call>>////


/* std::__throw_bad_function_call() */

void std::__throw_bad_function_call(void)

{
                    
  abort();
}


////>>0x08007098>>_GLOBAL__sub_I_ctype_byname>>////

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


////>>0x0800715c>>_GLOBAL__sub_I_ctype_byname>>////

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


////>>0x08007220>>_GLOBAL__sub_I_ctype_byname>>////

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


////>>0x080072a4>>_GLOBAL__sub_I_ctype_byname>>////

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


////>>0x08007328>>_init>>////

void _init(void)

{
  return;
}


////>>0x08007334>>_fini>>////

void _fini(void)

{
  return;
}


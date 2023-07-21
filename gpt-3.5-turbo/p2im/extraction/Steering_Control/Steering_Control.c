java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x000800f4>>FUN_000800f4>>////

/* WARNING: Removing unreachable block (ram,0x00080100) */

undefined4 FUN_000800f4(undefined4 param_1)

{
  if ((char)DAT_200708a0 == '\0') {
    DAT_200708a0._0_1_ = '\x01';
  }
  return param_1;
}


////>>0x00080118>>FUN_00080118>>////

/* WARNING: Removing unreachable block (ram,0x0008011e) */
/* WARNING: Removing unreachable block (ram,0x00080130) */


void FUN_00080118(void)

{
  return;
}


////>>0x00080164>>FUN_00080164>>////

void FUN_00080164(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000806f8(&DAT_200708e8,0x5a);
  FUN_000806f8(&DAT_200708d4,0x5a,param_3,param_4);
  return;
}


////>>0x000801e0>>FUN_000801e0>>////

undefined8 FUN_000801e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000813dc(&DAT_20070be8,0xe100,param_3,param_4,param_4);
  FUN_00080f0c(0xd,1);
  FUN_00080f0c(6,1);
  FUN_00080f0c(0x39,0);
  FUN_00080f0c(4,0);
  FUN_00080f0c(3,0);
  FUN_00080f0c(2,0);
  FUN_000806a0(&DAT_200708d4,5);
  FUN_000806a0(&DAT_200708e8,6);
  FUN_00080164();
  FUN_00080f08(1000);
  if (DAT_200708bc == 0) {
    software_interrupt(0x3f);
    return 1;
  }
  return 0;
}


////>>0x00080250>>FUN_00080250>>////

void FUN_00080250(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined auStack_1c [12];
  
  DAT_200708c0 = FUN_00081624(4,1,20000);
  FUN_00080f08(10);
  DAT_200708c4 = DAT_200708c4 ^ 1;
  FUN_00081014(0xd);
  if (DAT_200708c0 < 0x641) {
    if (DAT_200708c0 - 0x385U < 299) {
      if (DAT_200708eb != '\0') {
        FUN_00080164();
        FUN_000810e8(&DAT_20070be8,"Entered manual control mode.");
        DAT_200708eb = '\0';
      }
      FUN_00080f08(10);
      uVar1 = FUN_00081624(3,1,20000);
      DAT_200708d8 = FUN_0008145c(0,1000,2000,0x28,0x96);
      DAT_200708ec = FUN_0008145c(uVar1,1000,2000,0x28,0x96);
      while (iVar2 = FUN_00081248(&DAT_20070be8), 0 < iVar2) {
        FUN_00081276(&DAT_20070be8);
        thunk_FUN_0008113a(&DAT_20070be8,DAT_200708d8,10);
        FUN_000810c4(&DAT_20070be8,&DAT_00084b13);
        FUN_0008117a(&DAT_20070be8,DAT_200708ec,10);
      }
      FUN_000806f8(&DAT_200708e8,DAT_200708ec);
      FUN_000806f8(&DAT_200708d4,DAT_200708d8);
    }
    else {
      if (DAT_200708eb == '\0') {
        FUN_00080164();
        FUN_000810e8(&DAT_20070be8,"Entered autonomous control mode.");
      }
      DAT_200708eb = '\x01';
LAB_00080346:
      iVar2 = FUN_00081248(&DAT_20070be8);
      if (0 < iVar2) {
        FUN_00081214(auStack_1c,&DAT_20070be8,0x2c);
        FUN_00081560(&DAT_200708dc,auStack_1c);
        FUN_00081472(auStack_1c);
        FUN_00081214(auStack_1c,&DAT_20070be8,10);
        FUN_00081560(&DAT_200708c8,auStack_1c);
        FUN_00081472(auStack_1c);
        FUN_00081276(&DAT_20070be8);
        iVar2 = FUN_000815b8(&DAT_200708dc,"steer");
        if (iVar2 == 0) goto LAB_0008039c;
        uVar1 = FUN_000815de(&DAT_200708c8);
        puVar3 = &DAT_200708d4;
        goto LAB_000803b2;
      }
    }
  }
  else {
    FUN_00080164();
    FUN_000810e8(&DAT_20070be8,"error");
  }
  return;
LAB_0008039c:
  iVar2 = FUN_000815b8(&DAT_200708dc,"motor");
  if (iVar2 != 0) {
    uVar1 = FUN_000815de(&DAT_200708c8);
    puVar3 = &DAT_200708e8;
LAB_000803b2:
    FUN_000806f8(puVar3,uVar1);
  }
  goto LAB_00080346;
}


////>>0x000803fc>>FUN_000803fc>>////

void FUN_000803fc(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  FUN_00080aa8(param_3);
  FUN_00080b2c(param_1,param_2,0xc002);
  FUN_00080b90(param_1,param_2,0xa41);
  *(int *)((param_4 >> 5) * 4 + -0x1fff1f00) = 1 << (param_4 & 0x1f);
  *(undefined4 *)(param_1 + param_2 * 0x40 + 0x24) = 4;
  if (2 < param_2) {
    uVar1 = FUN_000816f8("../source/tc.c",0x5c,"TC_Start",
                         "dwChannel < (sizeof( pTc->TC_CHANNEL )/sizeof( pTc->TC_CHANNEL[0] ))",
                         unaff_r4,in_lr);
  }
  *(undefined4 *)((int)uVar1 + (int)((ulonglong)uVar1 >> 0x20) * 0x40) = 5;
  return;
}


////>>0x0008044c>>FUN_0008044c>>////

void FUN_0008044c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  param_3 = param_3 * 0x40;
  if (((&DAT_200708f1)[param_1] & 0x80) == 0) {
    iVar2 = param_1 * 0xc;
    if (((char)(&DAT_200708f1)[param_1] + iVar2 < (int)(uint)DAT_200708f0) &&
       ((int)((uint)(byte)(&DAT_200708f8)[((char)(&DAT_200708f1)[param_1] + iVar2) * 8] << 0x19) < 0
       )) {
      FUN_00081014((&DAT_200708f8)[(iVar2 + (char)(&DAT_200708f1)[param_1]) * 8] & 0x3f,0);
    }
  }
  else {
    *(uint *)(param_2 + param_3) = *(uint *)(param_2 + param_3) | 4;
  }
  uVar1 = (uint)DAT_200708f0;
  (&DAT_200708f1)[param_1] = (&DAT_200708f1)[param_1] + '\x01';
  iVar2 = param_1 * 0xc;
  if (((char)(&DAT_200708f1)[param_1] + iVar2 < (int)uVar1) &&
     ((char)(&DAT_200708f1)[param_1] < '\f')) {
    *(int *)(param_2 + param_3 + 0x14) =
         *(int *)(param_2 + param_3 + 0x10) +
         *(int *)(&DAT_200708fc + ((char)(&DAT_200708f1)[param_1] + iVar2) * 8);
    if (-1 < (int)((uint)(byte)(&DAT_200708f8)[((char)(&DAT_200708f1)[param_1] + iVar2) * 8] << 0x19
                  )) {
      return;
    }
    FUN_00081014((&DAT_200708f8)[(iVar2 + (char)(&DAT_200708f1)[param_1]) * 8] & 0x3f,1);
    return;
  }
  param_2 = param_2 + param_3;
  uVar1 = (Elf32_Rel_ARRAY_20070000[6].r_offset / 1000000) * 20000 >> 5;
  if (uVar1 <= *(int *)(param_2 + 0x10) + 4U) {
    uVar1 = *(int *)(param_2 + 0x10) + 4;
  }
  *(uint *)(param_2 + 0x14) = uVar1;
  (&DAT_200708f1)[param_1] = 0xff;
  return;
}


////>>0x000805a8>>FUN_000805a8>>////

void FUN_000805a8(byte *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_200708f0;
  if (uVar2 < 0x3c) {
    cVar1 = DAT_200708f0 + 1;
    *param_1 = DAT_200708f0;
    DAT_200708f0 = cVar1;
    *(uint *)(&DAT_200708fc + uVar2 * 8) =
         (Elf32_Rel_ARRAY_20070000[6].r_offset / 1000000) * 0x5dc >> 5;
    return;
  }
  *param_1 = 0xff;
  return;
}


////>>0x000806a0>>FUN_000806a0>>////

byte FUN_000806a0(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if (0x3b < *param_1) goto LAB_00080660;
  FUN_00080f0c(param_2,1,0x220,*param_1,0x960);
  uVar6 = (uint)*param_1;
  bVar1 = (&DAT_200708f8)[uVar6 * 8];
  param_1[2] = 0;
  uVar3 = uVar6 / 0xc;
  (&DAT_200708f8)[uVar6 * 8] = bVar1 & 0xc0 | (byte)param_2 & 0x3f;
  param_1[1] = 0;
  iVar5 = 0;
  do {
    if ((int)((uint)(byte)(&DAT_200708f8)[(iVar5 + uVar3 * 0xc) * 8] << 0x19) < 0)
    goto LAB_00080652;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xc);
  if (uVar3 == 0) {
    uVar2 = 0x40084000;
    uVar4 = 0x1e;
LAB_0008064c:
    FUN_000803fc(uVar2,uVar3,uVar4,uVar4);
  }
  else {
    if (uVar3 == 1) {
      uVar2 = 0x40084000;
      uVar4 = 0x1f;
      goto LAB_0008064c;
    }
    if (uVar3 == 2) {
      uVar2 = 0x40084000;
      uVar4 = 0x20;
      goto LAB_0008064c;
    }
    if (uVar3 == 3) {
      uVar2 = 0x40080000;
      uVar3 = 2;
      uVar4 = 0x1d;
      goto LAB_0008064c;
    }
    if (uVar3 == 4) {
      uVar2 = 0x40080000;
      uVar3 = 0;
      uVar4 = 0x1b;
      goto LAB_0008064c;
    }
  }
LAB_00080652:
  (&DAT_200708f8)[(uint)*param_1 * 8] = (&DAT_200708f8)[(uint)*param_1 * 8] | 0x40;
LAB_00080660:
  return *param_1;
}


////>>0x000806f8>>FUN_000806f8>>////

void FUN_000806f8(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if ((int)param_2 < 0x220) {
    uVar1 = param_2;
    if (0xb3 < (int)param_2) {
      uVar1 = 0xb4;
    }
    param_2 = FUN_0008145c(uVar1 & ~((int)uVar1 >> 0x1f),0,0xb4,(0x88 - (char)param_1[1]) * 4,
                           (600 - (char)param_1[2]) * 4,param_2);
  }
  if (*param_1 < 0x3c) {
    uVar1 = (0x88 - (char)param_1[1]) * 4;
    if (((int)(param_2 + (0x88 - (char)param_1[1]) * -4) < 0 == SBORROW4(param_2,uVar1)) &&
       (uVar1 = (600 - (char)param_1[2]) * 4, (int)param_2 <= (int)uVar1)) {
      uVar1 = param_2;
    }
    *(uint *)(&DAT_200708fc + (uint)*param_1 * 8) =
         (Elf32_Rel_ARRAY_20070000[6].r_offset / 1000000) * (uVar1 - 2) >> 5;
  }
  return;
}


////>>0x0008073a>>FUN_0008073a>>////

void FUN_0008073a(void)

{
  return;
}


////>>0x00080748>>FUN_00080748>>////

void FUN_00080748(void)

{
  return;
}


////>>0x0008074a>>FUN_0008074a>>////

void FUN_0008074a(void)

{
  return;
}


////>>0x0008074c>>FUN_0008074c>>////

void FUN_0008074c(void)

{
  return;
}


////>>0x00080774>>FUN_00080774>>////



void FUN_00080774(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00080b98();
  _DAT_e000e014 = Elf32_Rel_ARRAY_20070000[6].r_offset / 1000 - 1;
  DAT_e000ed23 = 0xf0;
  _DAT_e000e018 = 0;
  _DAT_e000e010 = 7;
  FUN_00081778();
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    FUN_00081014(iVar1,0);
    iVar1 = iVar2;
  } while (iVar2 != 0x4f);
  _DAT_400e0ea0 = 0xffffffff;
  _DAT_400e10a0 = 0xffffffff;
  _DAT_400e12a0 = 0xffffffff;
  _DAT_400e14a0 = 0xffffffff;
  FUN_00080a30(0x400e0e00,1,0x300,0);
  FUN_00081014(0,1);
  FUN_00080a30(0x400e0e00,1,0xc00,0);
  FUN_00080a30(0x400e0e00,1,0x3000,0);
  FUN_00080a30(0x400e1400,2,0x30,0);
  FUN_00080a30(0x400e1000,1,0xc00,0);
  FUN_00080a30(0x400e0e00,1,3,0);
  FUN_00080a30(0x400e1000,1,0xc000,0);
  FUN_00080aa8(0x25);
  FUN_00080c98(0x400c0000,Elf32_Rel_ARRAY_20070000[6].r_offset,20000000,0xc);
  FUN_00080d3e(0x400c0000,0,0x300000,1);
  FUN_00080d30(0x400c0000,0,0);
  FUN_00080d6a(0x400c0000,0xffffffff);
  FUN_00080d62(0x400c0000);
  return;
}


////>>0x0008089c>>FUN_0008089c>>////

void FUN_0008089c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000811b0(&DAT_20070c0c);
  FUN_000811b0(&DAT_20070b60);
  FUN_00081348(&DAT_20070be8,0x400e0800,8,8,&DAT_20070c0c,&DAT_20070b60,param_3);
  FUN_000811b0(&DAT_20070e6c);
  FUN_000811b0(&DAT_20070ef4);
  FUN_000811b0(&DAT_20070f7c);
  FUN_000811b0(&DAT_20070ad8);
  FUN_000811b0(&DAT_20070d0c);
  FUN_000811b0(&DAT_20070d94);
  FUN_00081438(&DAT_20070c94,0x40098000,0x11,0x11,&DAT_20070e6c,&DAT_20070ad8);
  FUN_00081438(&DAT_20070cbc,0x4009c000,0x12,0x12,&DAT_20070ef4,&DAT_20070d0c);
  FUN_00081438(&DAT_20070ce4,0x400a4000,0x14,0x14,&DAT_20070f7c,&DAT_20070d94);
  return;
}


////>>0x00080970>>FUN_00080970>>////

void FUN_00080970(void)

{
  int iVar1;
  
  iVar1 = FUN_00081248(&DAT_20070be8);
  if (iVar1 != 0) {
    FUN_0008073a();
  }
  iVar1 = FUN_00081248(&DAT_20070c94);
  if (iVar1 != 0) {
    FUN_00080748();
  }
  iVar1 = FUN_00081248(&DAT_20070cbc);
  if (iVar1 != 0) {
    FUN_0008074a();
  }
  iVar1 = FUN_00081248(&DAT_20070ce4);
  if (iVar1 != 0) {
    FUN_0008074c();
  }
  return;
}


////>>0x000809be>>FUN_000809be>>////

void FUN_000809be(int param_1,undefined4 param_2,uint param_3)

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
    goto switchD_000809c4_caseD_6;
  }
  *(uint *)(param_1 + 0x70) = uVar1;
switchD_000809c4_caseD_6:
  *(uint *)(param_1 + 4) = param_3;
  return;
}


////>>0x000809e4>>FUN_000809e4>>////

void FUN_000809e4(undefined4 *param_1,undefined4 param_2,uint param_3)

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


////>>0x00080a0a>>FUN_00080a0a>>////

void FUN_00080a0a(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

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


////>>0x00080a30>>FUN_00080a30>>////

undefined4 FUN_00080a30(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  
  switch(param_2) {
  case 1:
  case 2:
    FUN_000809be(param_1,param_2,param_3);
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
    FUN_000809e4(param_1,param_3,param_4,0x809e5,param_1);
    break;
  case 4:
  case 5:
    FUN_00080a0a(param_1,param_3,param_2 == 5,(param_4 << 0x1d) >> 0x1f,param_4 & 1,param_2,param_3)
    ;
    break;
  default:
    return 0;
  }
  return 1;
}


////>>0x00080a94>>FUN_00080a94>>////

uint FUN_00080a94(int param_1,uint param_2)

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


////>>0x00080aa8>>FUN_00080aa8>>////



undefined4 FUN_00080aa8(uint param_1)

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


////>>0x00080b2c>>FUN_00080b2c>>////

void FUN_00080b2c(undefined4 param_1,uint param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (2 < param_2) {
    param_3 = "TC_Configure";
    uVar3 = FUN_000816f8("../source/tc.c",0x40,"TC_Configure",
                         "dwChannel < (sizeof( pTc->TC_CHANNEL )/sizeof( pTc->TC_CHANNEL[0] ))");
  }
  iVar1 = (int)((ulonglong)uVar3 >> 0x20) * 0x40;
  iVar2 = (int)uVar3 + iVar1;
  *(undefined4 *)((int)uVar3 + iVar1) = 2;
  *(undefined4 *)(iVar2 + 0x28) = 0xffffffff;
  *(char **)(iVar2 + 4) = param_3;
  return;
}


////>>0x00080b90>>FUN_00080b90>>////

void FUN_00080b90(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x40 + 0x14) = param_3;
  return;
}


////>>0x00080b98>>FUN_00080b98>>////



void FUN_00080b98(void)

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
  Elf32_Rel_ARRAY_20070000[6].r_offset = 84000000;
  return;
}


////>>0x00080c20>>entry>>////

/* WARNING: Removing unreachable block (ram,0x00080c6a) */


void entry(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (iVar1 = 0; (undefined4 *)((int)&Elf32_Rel_ARRAY_20070000[0].r_offset + iVar1) < &DAT_200708a0
      ; iVar1 = iVar1 + 4) {
    *(undefined4 *)((int)&Elf32_Rel_ARRAY_20070000[0].r_offset + iVar1) =
         *(undefined4 *)(&DAT_00085878 + iVar1);
  }
  for (puVar2 = &DAT_200708a0; puVar2 < (undefined4 *)0x20071248; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  _DAT_e000ed08 = 0x80000;
  FUN_000815ec();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00080c98>>FUN_00080c98>>////

undefined4 FUN_00080c98(undefined4 *param_1,uint param_2,int param_3,int param_4)

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


////>>0x00080d30>>FUN_00080d30>>////

void FUN_00080d30(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 4) = param_2 | *(uint *)(param_1 + 4) | (param_3 & 1) << 7;
  return;
}


////>>0x00080d3e>>FUN_00080d3e>>////

void FUN_00080d3e(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 4) =
       param_3 | *(uint *)(param_1 + 4) | (param_2 & 0xf) << 0x18 | (param_4 & 3) << 0x1c;
  return;
}


////>>0x00080d58>>FUN_00080d58>>////

void FUN_00080d58(int param_1,uint param_2)

{
  *(int *)(param_1 + 0x14) = 1 << (param_2 & 0xff);
  return;
}


////>>0x00080d62>>FUN_00080d62>>////

void FUN_00080d62(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xffff;
  return;
}


////>>0x00080d6a>>FUN_00080d6a>>////

void FUN_00080d6a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


////>>0x00080e80>>FUN_00080e80>>////

undefined4 FUN_00080e80(void)

{
  return 0;
}


////>>0x00080e88>>FUN_00080e88>>////

int FUN_00080e88(int param_1)

{
  int iVar1;
  
  if (DAT_20071208 == 0) {
    DAT_20071208 = 0x20071248;
  }
  iVar1 = DAT_20071208;
  DAT_20071208 = param_1 + DAT_20071208;
  return iVar1;
}


////>>0x00080eaa>>FUN_00080eaa>>////

undefined4 FUN_00080eaa(void)

{
  return 0xffffffff;
}


////>>0x00080eb0>>FUN_00080eb0>>////

undefined4 FUN_00080eb0(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


////>>0x00080eba>>FUN_00080eba>>////

undefined4 FUN_00080eba(void)

{
  return 1;
}


////>>0x00080ebe>>FUN_00080ebe>>////

undefined4 FUN_00080ebe(void)

{
  return 0;
}


////>>0x00080ec2>>FUN_00080ec2>>////

undefined4 FUN_00080ec2(void)

{
  return 0;
}


////>>0x00080ec8>>FUN_00080ec8>>////



uint FUN_00080ec8(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < (int)param_3; iVar1 = iVar1 + 1) {
    do {
    } while (-1 < _DAT_400e0814 << 0x1e);
    _DAT_400e081c = (uint)*(byte *)(param_2 + iVar1);
  }
  return param_3 & ~((int)param_3 >> 0x1f);
}


////>>0x00080eec>>FUN_00080eec>>////

void FUN_00080eec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000817c8("Exiting with status %d.\n",param_1,param_3,param_4,param_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00080efc>>FUN_00080efc>>////

void FUN_00080efc(void)

{
  return;
}


////>>0x00080efe>>FUN_00080efe>>////

undefined4 FUN_00080efe(void)

{
  return 0xffffffff;
}


////>>0x00080f04>>thunk_FUN_000816d8>>////

undefined4 thunk_FUN_000816d8(void)

{
  return DAT_2007120c;
}


////>>0x00080f08>>FUN_00080f08>>////

void FUN_00080f08(void)

{
  return;
}


////>>0x00080f0c>>FUN_00080f0c>>////



int FUN_00080f0c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = param_1;
  if ((&DAT_00084b50)[param_1 * 0x1c] != '\0') {
    if (((&DAT_20070e1c)[param_1] & 0xf) == 4) {
      iVar1 = FUN_00080d58(0x400c0000,(&DAT_00084b5d)[param_1 * 0x1c]);
    }
    bVar6 = (&DAT_20070e1c)[param_1];
    bVar5 = bVar6 & 0xf;
    if ((bVar5 < 3) && (bVar6 != 0)) {
      if (bVar5 == 2) {
        if (param_2 == 0) {
          return iVar1;
        }
      }
      else if (bVar5 == 1) {
        if (param_2 == 2) {
          return iVar1;
        }
      }
      else if (bVar5 == 3) {
        if (param_2 == 1) {
          return iVar1;
        }
        goto LAB_00080f68;
      }
    }
    if (param_2 != 1) {
LAB_00080f68:
      if (param_2 == 0) {
        iVar1 = param_1 * 0x1c;
        FUN_00080aa8(*(undefined4 *)(&DAT_00084b4c + iVar1));
        iVar1 = FUN_00080a30(*(undefined4 *)(&DAT_00084b44 + iVar1),3,
                             *(undefined4 *)(&DAT_00084b48 + iVar1),0);
        bVar6 = (&DAT_20070e1c)[param_1] & 0xf0 | 2;
      }
      else {
        if (param_2 != 2) {
          return iVar1;
        }
        iVar1 = param_1 * 0x1c;
        FUN_00080aa8(*(undefined4 *)(&DAT_00084b4c + iVar1));
        iVar1 = FUN_00080a30(*(undefined4 *)(&DAT_00084b44 + iVar1),3,
                             *(undefined4 *)(&DAT_00084b48 + iVar1),1);
        bVar6 = (&DAT_20070e1c)[param_1] & 0xf0 | 1;
      }
      (&DAT_20070e1c)[param_1] = bVar6;
      return iVar1;
    }
    iVar7 = param_1 * 0x1c;
    iVar8 = *(int *)(&DAT_00084b44 + iVar7);
    if (bVar6 >> 4 == 0) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
    }
    iVar1 = FUN_00080a30(iVar8,uVar3,*(undefined4 *)(&DAT_00084b48 + iVar7),
                         *(undefined4 *)(&DAT_00084b54 + iVar7));
    (&DAT_20070e1c)[param_1] = (&DAT_20070e1c)[param_1] & 0xf0 | 3;
    if (*(int *)(iVar8 + 0x18) == -1) {
      uVar2 = *(uint *)(&DAT_00084b4c + iVar7);
      if (0x2c < uVar2) {
        return 1;
      }
      if (uVar2 < 0x20) {
        uVar2 = 1 << (uVar2 & 0xff);
        uVar4 = _DAT_400e0618 & uVar2;
        if (uVar4 == uVar2) {
          _DAT_400e0614 = uVar4;
        }
      }
      else {
        uVar2 = 1 << (uVar2 - 0x20 & 0xff);
        uVar4 = _DAT_400e0708 & uVar2;
        if (uVar4 == uVar2) {
          _DAT_400e0704 = uVar4;
        }
      }
      return 0;
    }
  }
  return iVar1;
}


////>>0x00081014>>FUN_00081014>>////

void FUN_00081014(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((&DAT_00084b50)[param_1 * 0x1c] != '\0') {
    if (((&DAT_20070e1c)[param_1] & 0xf) == 5) {
      FUN_00080f0c(param_1,1,param_3,5,param_1,param_2,param_3);
    }
    (&DAT_20070e1c)[param_1] = (&DAT_20070e1c)[param_1] & 0xf | (byte)(param_2 << 4);
    iVar3 = *(int *)(&DAT_00084b44 + param_1 * 0x1c);
    uVar2 = *(undefined4 *)(&DAT_00084b48 + param_1 * 0x1c);
    iVar1 = FUN_00080a94(iVar3,uVar2);
    if (iVar1 == 0) {
      if (param_2 != 0) {
        *(undefined4 *)(iVar3 + 100) = uVar2;
        return;
      }
      *(undefined4 *)(iVar3 + 0x60) = uVar2;
      return;
    }
    FUN_00080a0a(iVar3,uVar2,param_2,0,1);
  }
  return;
}


////>>0x000810a6>>FUN_000810a6>>////

void FUN_000810a6(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00082688(param_2);
    (**(code **)(*param_1 + 4))(param_1,param_2,uVar1,*(code **)(*param_1 + 4),param_4);
    return;
  }
  return;
}


////>>0x000810c4>>FUN_000810c4>>////

void FUN_000810c4(void)

{
  FUN_000810a6();
  return;
}


////>>0x000810cc>>FUN_000810cc>>////

void FUN_000810cc(undefined4 *param_1)

{
  (**(code **)*param_1)();
  return;
}


////>>0x000810d8>>FUN_000810d8>>////

void FUN_000810d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000810a6(param_1,&DAT_00085635,param_3,param_4,param_4);
  return;
}


////>>0x000810e8>>FUN_000810e8>>////

int FUN_000810e8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000810a6();
  iVar2 = FUN_000810d8(param_1);
  return iVar2 + iVar1;
}


////>>0x000810fc>>FUN_000810fc>>////

void FUN_000810fc(undefined4 param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  char local_15 [5];
  
  local_15[1] = 0;
  if (param_3 < 2) {
    param_3 = 10;
  }
  pcVar1 = local_15;
  do {
    pcVar3 = pcVar1;
    uVar2 = param_2 / param_3;
    uVar5 = param_2 - param_3 * uVar2 & 0xff;
    cVar4 = (char)uVar5;
    if (uVar5 < 10) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + '7';
    }
    *pcVar3 = cVar4;
    param_2 = uVar2;
    pcVar1 = pcVar3 + -1;
  } while (uVar2 != 0);
  FUN_000810a6(param_1,pcVar3);
  return;
}


////>>0x0008113a>>FUN_0008113a>>////

int FUN_0008113a(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar1 = (**(code **)*param_1)(param_1,param_2 & 0xff);
    return iVar1;
  }
  if (param_3 == 10) {
    param_3 = 10;
    if ((int)param_2 < 0) {
      iVar1 = FUN_000810cc(param_1,0x2d);
      iVar2 = FUN_000810fc(param_1,-param_2,10);
      return iVar2 + iVar1;
    }
  }
  else {
    param_3 = param_3 & 0xff;
  }
  iVar1 = FUN_000810fc(param_1,param_2,param_3,param_4);
  return iVar1;
}


////>>0x00081176>>thunk_FUN_0008113a>>////

int thunk_FUN_0008113a(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar1 = (**(code **)*param_1)(param_1,param_2 & 0xff);
    return iVar1;
  }
  if (param_3 == 10) {
    param_3 = 10;
    if ((int)param_2 < 0) {
      iVar1 = FUN_000810cc(param_1,0x2d);
      iVar2 = FUN_000810fc(param_1,-param_2,10);
      return iVar2 + iVar1;
    }
  }
  else {
    param_3 = param_3 & 0xff;
  }
  iVar1 = FUN_000810fc(param_1,param_2,param_3,param_4);
  return iVar1;
}


////>>0x0008117a>>FUN_0008117a>>////

int FUN_0008117a(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0008113a();
  iVar2 = FUN_000810d8(param_1);
  return iVar2 + iVar1;
}


////>>0x00081190>>FUN_00081190>>////

void FUN_00081190(void)

{
  if ((Elf32_Rel_ARRAY_20070000[6].r_info != 0xffffffff) &&
     (Elf32_Rel_ARRAY_20070000[6].r_info = Elf32_Rel_ARRAY_20070000[6].r_info - 1,
     Elf32_Rel_ARRAY_20070000[6].r_info == 0)) {
    (*(code *)((int)&Elf32_Rel_ARRAY_20070000[0].r_offset + 1))();
  }
  return;
}


////>>0x000811b0>>FUN_000811b0>>////

int FUN_000811b0(int param_1)

{
  FUN_00081f00(param_1,0,0x80);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return param_1;
}


////>>0x000811ca>>FUN_000811ca>>////

void FUN_000811ca(int param_1,undefined param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x80) + 1U & 0x7f;
  if (uVar1 != *(uint *)(param_1 + 0x84)) {
    *(undefined *)(param_1 + *(int *)(param_1 + 0x80)) = param_2;
    *(uint *)(param_1 + 0x80) = uVar1;
  }
  return;
}


////>>0x000811e8>>FUN_000811e8>>////

int FUN_000811e8(int *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_000816d8();
  param_1[3] = iVar1;
  do {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
    if (-1 < iVar1) {
      return iVar1;
    }
    iVar1 = thunk_FUN_000816d8();
  } while ((uint)(iVar1 - param_1[3]) < (uint)param_1[2]);
  return -1;
}


////>>0x00081214>>FUN_00081214>>////

void FUN_00081214(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  FUN_000814f6(param_1,&DAT_00085637);
  while ((uVar1 = FUN_000811e8(param_2), -1 < (int)uVar1 && (uVar1 != param_3))) {
    FUN_0008159e(param_1,uVar1 & 0xff);
  }
  return;
}


////>>0x00081248>>FUN_00081248>>////

uint FUN_00081248(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0x80) - *(int *)(*(int *)(param_1 + 0x10) + 0x84) &
         0x7f;
}


////>>0x00081276>>FUN_00081276>>////

uint FUN_00081276(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar2 + 0x80) != *(int *)(iVar2 + 0x84)) {
    bVar1 = *(byte *)(iVar2 + *(int *)(iVar2 + 0x84));
    *(uint *)(iVar2 + 0x84) = *(int *)(iVar2 + 0x84) + 1U & 0x7f;
    return (uint)bVar1;
  }
  return 0xffffffff;
}


////>>0x000812b8>>FUN_000812b8>>////

undefined4 FUN_000812b8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(int *)(*(int *)(param_1 + 0x18) + 0x14) << 0x1e < 0) &&
     (*(int *)(iVar1 + 0x84) == *(int *)(iVar1 + 0x80))) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = param_2;
  }
  else {
    uVar2 = *(int *)(iVar1 + 0x80) + 1U & 0x8000007f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffff80) + 1;
    }
    do {
    } while (*(uint *)(iVar1 + 0x84) == uVar2);
    *(char *)(iVar1 + *(int *)(iVar1 + 0x80)) = (char)param_2;
    *(uint *)(*(int *)(param_1 + 0x14) + 0x80) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 2;
  }
  return 1;
}


////>>0x00081348>>FUN_00081348>>////

void FUN_00081348(undefined4 *param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  param_1[1] = 0;
  param_1[2] = 1000;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_000812b8_1_00085650;
  *(undefined *)(param_1 + 7) = param_3;
  param_1[4] = param_5;
  param_1[8] = param_4;
  param_1[5] = param_6;
  return;
}


////>>0x000813dc>>FUN_000813dc>>////

void FUN_000813dc(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00080aa8(*(undefined4 *)(param_1 + 0x20));
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  puVar2[0x48] = 0x202;
  *puVar2 = 0xac;
  puVar2[1] = 0x800;
  puVar2[8] = Elf32_Rel_ARRAY_20070000[6].r_offset / param_2 >> 4;
  puVar2[3] = 0xffffffff;
  puVar2[2] = 0x61;
  *(int *)(((uint)(int)(char)*(byte *)(param_1 + 0x1c) >> 5) * 4 + -0x1fff1f00) =
       1 << (uint)(*(byte *)(param_1 + 0x1c) & 0x1f);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *puVar2 = 0x50;
  return;
}


////>>0x00081438>>FUN_00081438>>////

undefined4 * FUN_00081438(undefined4 *param_1,undefined4 param_2)

{
  FUN_00081348();
  *param_1 = &PTR_FUN_000812b8_1_00085680;
  param_1[9] = param_2;
  return param_1;
}


////>>0x0008145c>>FUN_0008145c>>////

int FUN_0008145c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return (uint)((param_1 - param_2) * (param_5 - param_4)) / (uint)(param_3 - param_2) + param_4;
}


////>>0x00081472>>FUN_00081472>>////

undefined4 * FUN_00081472(undefined4 *param_1)

{
  FUN_00081800(*param_1);
  return param_1;
}


////>>0x00081480>>FUN_00081480>>////

void FUN_00081480(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00081800();
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


////>>0x00081496>>FUN_00081496>>////

int FUN_00081496(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00081f9c(*param_1,param_2 + 1,param_3,param_4,param_4);
  if (iVar1 != 0) {
    *param_1 = iVar1;
    param_1[1] = param_2;
    iVar1 = 1;
  }
  return iVar1;
}


////>>0x000814ae>>FUN_000814ae>>////

undefined4 FUN_000814ae(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((*param_1 == 0) || ((uint)param_1[1] < param_2)) {
    iVar1 = FUN_00081496(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1[2] == 0) {
      *(undefined *)*param_1 = 0;
    }
  }
  return 1;
}


////>>0x000814d0>>FUN_000814d0>>////

undefined4 * FUN_000814d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_000814ae(param_1,param_3);
  if (iVar1 == 0) {
    FUN_00081480(param_1);
  }
  else {
    param_1[2] = param_3;
    FUN_000825cc(*param_1,param_2);
  }
  return param_1;
}


////>>0x000814f6>>FUN_000814f6>>////

undefined4 * FUN_000814f6(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    uVar1 = FUN_00082688(param_2);
    FUN_000814d0(param_1,param_2,uVar1);
  }
  return param_1;
}


////>>0x0008151c>>FUN_0008151c>>////

void FUN_0008151c(int *param_1,int *param_2)

{
  if (*param_1 != 0) {
    if ((*param_2 != 0) && ((uint)param_2[2] <= (uint)param_1[1])) {
      FUN_000825cc();
      param_1[2] = param_2[2];
      goto LAB_00081558;
    }
    FUN_00081800();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
LAB_00081558:
  param_2[2] = 0;
  return;
}


////>>0x00081560>>FUN_00081560>>////

int FUN_00081560(int param_1,int param_2)

{
  if (param_1 != param_2) {
    FUN_0008151c();
  }
  return param_1;
}


////>>0x00081570>>FUN_00081570>>////

undefined4 FUN_00081570(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    iVar1 = FUN_000814ae(param_1,iVar2 + param_3);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_000825cc(*param_1 + param_1[2],param_2);
    param_1[2] = iVar2 + param_3;
  }
  return 1;
}


////>>0x0008159e>>FUN_0008159e>>////

void FUN_0008159e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  FUN_00081570(param_1,&local_c,1,0,param_1);
  return;
}


////>>0x000815b8>>FUN_000815b8>>////

int FUN_000815b8(byte **param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[2] == (byte *)0x0) {
    if (param_2 == (byte *)0x0) {
      return 1;
    }
  }
  else {
    if (param_2 != (byte *)0x0) {
      uVar1 = FUN_00082390(*param_1);
      goto LAB_000815d4;
    }
    param_2 = *param_1;
  }
  uVar1 = (uint)*param_2;
LAB_000815d4:
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}


////>>0x000815de>>FUN_000815de>>////

/* WARNING: Removing unreachable block (ram,0x000827e8) */
/* WARNING: Removing unreachable block (ram,0x000827a8) */
/* WARNING: Removing unreachable block (ram,0x000827a0) */
/* WARNING: Removing unreachable block (ram,0x000827da) */
/* WARNING: Removing unreachable block (ram,0x000827ec) */
/* WARNING: Removing unreachable block (ram,0x000827e4) */
/* WARNING: Removing unreachable block (ram,0x000827a4) */
/* WARNING: Removing unreachable block (ram,0x0008278a) */
/* WARNING: Removing unreachable block (ram,0x000827c8) */
/* WARNING: Removing unreachable block (ram,0x0008278c) */

uint FUN_000815de(byte **param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  pbVar4 = *param_1;
  if (*param_1 == (byte *)0x0) {
    return 0;
  }
  do {
    pbVar6 = pbVar4;
    pbVar4 = pbVar6 + 1;
    uVar5 = (uint)*pbVar6;
    bVar1 = *(byte *)(Elf32_Rel_ARRAY_20070000[270].r_info + uVar5 + 1);
    bVar2 = bVar1 & 8;
  } while ((bVar1 & 8) != 0);
  if (uVar5 == 0x2d) {
    pbVar4 = pbVar6 + 2;
    uVar5 = (uint)pbVar6[1];
    bVar2 = 1;
  }
  else if (uVar5 == 0x2b) {
    uVar5 = (uint)pbVar6[1];
    pbVar4 = pbVar6 + 2;
  }
  if (bVar2 == 0) {
    uVar10 = 0x7fffffff;
  }
  else {
    uVar10 = 0x80000000;
  }
  uVar9 = uVar10 / 10;
  iVar8 = 0;
  uVar3 = 0;
  do {
    bVar1 = *(byte *)(Elf32_Rel_ARRAY_20070000[270].r_info + uVar5 + 1);
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 3) == 0) {
LAB_0008277e:
        if (iVar8 == -1) {
          if (bVar2 == 0) {
            uVar3 = 0x7fffffff;
          }
          else {
            uVar3 = 0x80000000;
          }
          *(undefined4 *)Elf32_Rel_ARRAY_20070000[140].r_offset = 0x22;
        }
        else if (bVar2 != 0) {
          uVar3 = -uVar3;
        }
        return uVar3;
      }
      if ((bVar1 & 3) == 1) {
        iVar7 = 0x37;
      }
      else {
        iVar7 = 0x57;
      }
      iVar7 = uVar5 - iVar7;
    }
    else {
      iVar7 = uVar5 - 0x30;
    }
    if (9 < iVar7) goto LAB_0008277e;
    if (iVar8 != -1) {
      if ((uVar9 <= uVar3 && uVar3 != uVar9) || ((uVar3 == uVar9 && ((int)(uVar10 % 10) < iVar7))))
      {
        iVar8 = -1;
      }
      else {
        uVar3 = uVar3 * 10 + iVar7;
        iVar8 = 1;
      }
    }
    uVar5 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  } while( true );
}


////>>0x000815e8>>FUN_000815e8>>////

void FUN_000815e8(void)

{
  return;
}


////>>0x000815ec>>FUN_000815ec>>////

void FUN_000815ec(void)

{
  FUN_00081618();
  FUN_00080774();
  FUN_000815e8();
  FUN_00080f08(1);
  FUN_000801e0();
  do {
    FUN_00080250();
    FUN_00080970();
  } while( true );
}


////>>0x00081618>>FUN_00081618>>////



void FUN_00081618(void)

{
  _DAT_400e1a54 = 0x8000;
  return;
}


////>>0x00081624>>FUN_00081624>>////

int FUN_00081624(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(&DAT_00084b48 + param_1 * 0x1c);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  iVar1 = FUN_00081684(*(int *)(&DAT_00084b44 + param_1 * 0x1c) + 0x3c,
                       *(undefined4 *)(&DAT_00084b48 + param_1 * 0x1c),uVar2,
                       ((Elf32_Rel_ARRAY_20070000[6].r_offset / 1000000) * param_3) / 0x12,param_4);
  if (iVar1 != 0) {
    iVar1 = (int)((ulonglong)(iVar1 * 18000 + 16000) /
                 ((ulonglong)Elf32_Rel_ARRAY_20070000[6].r_offset / 1000));
  }
  return iVar1;
}


////>>0x00081684>>FUN_00081684>>////

int FUN_00081684(uint *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  
  do {
    if ((*param_1 & param_2) != param_3) {
      do {
        if ((*param_1 & param_2) == param_3) {
          iVar1 = 0;
          do {
            if ((*param_1 & param_2) != param_3) {
              return iVar1;
            }
            iVar1 = iVar1 + 1;
          } while (param_4 != iVar1);
          return 0;
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return 0;
}


////>>0x000816d8>>FUN_000816d8>>////

undefined4 FUN_000816d8(void)

{
  return DAT_2007120c;
}


////>>0x000816ec>>FUN_000816ec>>////

void FUN_000816ec(dword param_1,dword param_2,dword param_3)

{
  dword *pdVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (Elf32_Rel_ARRAY_20070000[48].r_offset == 0) {
    Elf32_Rel_ARRAY_20070000[48].r_offset = 0x20070184;
  }
  uVar2 = *(uint *)(Elf32_Rel_ARRAY_20070000[48].r_offset + 4);
  pdVar1 = (dword *)Elf32_Rel_ARRAY_20070000[48].r_offset;
  if (0x1f < (int)uVar2) {
    pdVar1 = (dword *)FUN_000817f0(400);
    if (pdVar1 == (dword *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00083652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
      return;
    }
    *pdVar1 = Elf32_Rel_ARRAY_20070000[48].r_offset;
    pdVar1[1] = 0;
    uVar2 = 0;
    Elf32_Rel_ARRAY_20070000[48].r_offset = (dword)pdVar1;
    pdVar1[0x62] = 0;
    pdVar1[99] = 0;
  }
  uVar3 = 1 << (uVar2 & 0xff);
  pdVar1[uVar2 + 0x22] = param_1;
  pdVar1[0x62] = pdVar1[0x62] | uVar3;
  pdVar1[uVar2 + 0x42] = param_3;
  pdVar1[99] = uVar3 | pdVar1[99];
  pdVar1[1] = uVar2 + 1;
  pdVar1[uVar2 + 2] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00083696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(0);
  return;
}


////>>0x000816f8>>FUN_000816f8>>////

void FUN_000816f8(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(Elf32_Rel_ARRAY_20070000[140].r_offset + 0xc);
  if (param_3 == (char *)0x0) goto LAB_0008171c;
  uVar2 = param_4;
  pcVar3 = ", function: ";
  do {
    param_4 = param_1;
    FUN_00081750(uVar1,"assertion \"%s\" failed: file \"%s\", line %d%s%s\n",uVar2,param_1,param_2,
                 pcVar3,param_3);
    uVar4 = FUN_000836ec();
    param_2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar1 = (undefined4)uVar4;
LAB_0008171c:
    param_3 = "";
    uVar2 = param_4;
    pcVar3 = param_3;
  } while( true );
}


////>>0x00081750>>FUN_00081750>>////

void FUN_00081750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0008289c(Elf32_Rel_ARRAY_20070000[140].r_offset,param_1,param_2,&uStack_8);
  return;
}


////>>0x00081778>>FUN_00081778>>////

/* WARNING: Removing unreachable block (ram,0x00081784) */
/* WARNING: Removing unreachable block (ram,0x00081788) */
/* WARNING: Removing unreachable block (ram,0x000817b4) */

void FUN_00081778(void)

{
  int iVar1;
  code **ppcVar2;
  
  FUN_00085844();
  ppcVar2 = (code **)0x8584c;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    ppcVar2 = ppcVar2 + 1;
    (**ppcVar2)();
  } while (iVar1 != 4);
  return;
}


////>>0x000817c8>>FUN_000817c8>>////

void FUN_000817c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0008289c(Elf32_Rel_ARRAY_20070000[140].r_offset,
               *(undefined4 *)(Elf32_Rel_ARRAY_20070000[140].r_offset + 8),param_1,&uStack_c);
  return;
}


////>>0x000817f0>>FUN_000817f0>>////

void FUN_000817f0(undefined4 param_1)

{
  FUN_00081810(Elf32_Rel_ARRAY_20070000[140].r_offset,param_1);
  return;
}


////>>0x00081800>>FUN_00081800>>////

void FUN_00081800(undefined4 param_1)

{
  FUN_00083b10(Elf32_Rel_ARRAY_20070000[140].r_offset,param_1);
  return;
}


////>>0x00081810>>FUN_00081810>>////

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int * FUN_00081810(undefined4 *param_1,uint param_2)

{
  dword dVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  dword dVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  dword dVar11;
  dword dVar12;
  int iVar13;
  dword *pdVar14;
  uint uVar15;
  undefined *puVar16;
  dword *pdVar17;
  uint uVar18;
  
  if (param_2 + 0xb < 0x17) {
    uVar15 = 0x10;
    if (0x10 < param_2) goto LAB_00081876;
  }
  else {
    uVar15 = param_2 + 0xb & 0xfffffff8;
    if (((int)uVar15 < 0) || (uVar15 < param_2)) {
LAB_00081876:
      *param_1 = 0xc;
      return (int *)0x0;
    }
  }
  FUN_00081f94(param_1);
  dVar1 = Elf32_Rel_ARRAY_20070000[142].r_info;
  if (uVar15 < 0x1f8) {
    iVar13 = *(int *)((int)&Elf32_Rel_ARRAY_20070000[0x8e].r_offset + uVar15);
    if ((iVar13 != uVar15 + 0x20070464) ||
       (iVar2 = iVar13 + 8, iVar13 = *(int *)(iVar13 + 0x14), iVar2 != iVar13)) {
      iVar5 = *(int *)(iVar13 + 0xc);
      iVar9 = (*(uint *)(iVar13 + 4) & 0xfffffffc) + iVar13;
      uVar15 = *(uint *)(iVar9 + 4);
      iVar2 = *(int *)(iVar13 + 8);
      *(int *)(iVar2 + 0xc) = iVar5;
      *(int *)(iVar5 + 8) = iVar2;
      *(uint *)(iVar9 + 4) = uVar15 | 1;
      FUN_00081f98(param_1);
      return (int *)(iVar13 + 8);
    }
    uVar18 = (uVar15 >> 3) + 2;
  }
  else {
    uVar18 = uVar15 >> 9;
    if (uVar18 == 0) {
      iVar2 = 0x7e;
      iVar13 = 0x3f;
    }
    else if (uVar18 < 5) {
      iVar13 = (uVar15 >> 6) + 0x38;
      iVar2 = iVar13 * 2;
    }
    else if (uVar18 < 0x15) {
      iVar13 = uVar18 + 0x5b;
      iVar2 = iVar13 * 2;
    }
    else if (uVar18 < 0x55) {
      iVar13 = (uVar15 >> 0xc) + 0x6e;
      iVar2 = iVar13 * 2;
    }
    else if (uVar18 < 0x155) {
      iVar13 = (uVar15 >> 0xf) + 0x77;
      iVar2 = iVar13 * 2;
    }
    else if (uVar18 < 0x555) {
      iVar13 = (uVar15 >> 0x12) + 0x7c;
      iVar2 = iVar13 * 2;
    }
    else {
      iVar2 = 0xfc;
      iVar13 = 0x7e;
    }
    for (dVar7 = (&Elf32_Rel_ARRAY_20070000[0x8e].r_offset)[iVar2]; iVar2 * 4 + 0x20070464U != dVar7
        ; dVar7 = *(dword *)(dVar7 + 0xc)) {
      uVar18 = *(uint *)(dVar7 + 4) & 0xfffffffc;
      iVar5 = uVar18 - uVar15;
      if (0xf < iVar5) {
        iVar13 = iVar13 + -1;
        break;
      }
      if (-1 < iVar5) {
        iVar2 = uVar18 + dVar7;
        uVar15 = *(uint *)(iVar2 + 4);
        iVar5 = *(int *)(dVar7 + 0xc);
        iVar13 = *(int *)(dVar7 + 8);
        *(int *)(iVar13 + 0xc) = iVar5;
        *(int *)(iVar5 + 8) = iVar13;
        *(uint *)(iVar2 + 4) = uVar15 | 1;
        FUN_00081f98(param_1);
        return (int *)(dVar7 + 8);
      }
    }
    uVar18 = iVar13 + 1;
  }
  dVar7 = Elf32_Rel_ARRAY_20070000[141].r_offset;
  if (Elf32_Rel_ARRAY_20070000[142].r_info != 0x2007046c) {
    uVar3 = *(uint *)(Elf32_Rel_ARRAY_20070000[142].r_info + 4);
    uVar4 = uVar3 & 0xfffffffc;
    uVar6 = uVar4 - uVar15;
    if (0xf < (int)uVar6) {
      dVar7 = uVar15 + Elf32_Rel_ARRAY_20070000[142].r_info;
      *(uint *)(Elf32_Rel_ARRAY_20070000[142].r_info + 4) = uVar15 | 1;
      Elf32_Rel_ARRAY_20070000[142].r_info = dVar7;
      Elf32_Rel_ARRAY_20070000[143].r_offset = dVar7;
      *(undefined4 *)(dVar7 + 0xc) = 0x2007046c;
      *(undefined4 *)(dVar7 + 8) = 0x2007046c;
      *(uint *)(dVar7 + 4) = uVar6 | 1;
      *(uint *)(dVar7 + uVar6) = uVar6;
      FUN_00081f98(param_1);
      return (int *)(dVar1 + 8);
    }
    Elf32_Rel_ARRAY_20070000[143].r_offset = 0x2007046c;
    Elf32_Rel_ARRAY_20070000[142].r_info = 0x2007046c;
    if (-1 < (int)uVar6) {
      *(uint *)(uVar4 + dVar1 + 4) = *(uint *)(uVar4 + dVar1 + 4) | 1;
      FUN_00081f98(param_1);
      return (int *)(dVar1 + 8);
    }
    if (uVar4 < 0x200) {
      uVar4 = uVar3 & 0xfffffff8;
      iVar13 = *(int *)((int)&Elf32_Rel_ARRAY_20070000[0x8d].r_info + uVar4);
      dVar7 = 1 << ((int)(uVar3 >> 3) >> 2 & 0xffU) | Elf32_Rel_ARRAY_20070000[141].r_offset;
      *(int *)(dVar1 + 8) = iVar13;
      *(uint *)(dVar1 + 0xc) = uVar4 + 0x20070464;
      Elf32_Rel_ARRAY_20070000[141].r_offset = dVar7;
      *(dword *)((int)&Elf32_Rel_ARRAY_20070000[0x8d].r_info + uVar4) = dVar1;
      *(dword *)(iVar13 + 0xc) = dVar1;
    }
    else {
      uVar6 = uVar3 >> 9;
      if (uVar6 < 5) {
        iVar2 = (uVar3 >> 6) + 0x38;
        iVar13 = iVar2 * 2;
      }
      else if (uVar6 < 0x15) {
        iVar2 = uVar6 + 0x5b;
        iVar13 = iVar2 * 2;
      }
      else if (uVar6 < 0x55) {
        iVar2 = (uVar3 >> 0xc) + 0x6e;
        iVar13 = iVar2 * 2;
      }
      else if (uVar6 < 0x155) {
        iVar2 = (uVar3 >> 0xf) + 0x77;
        iVar13 = iVar2 * 2;
      }
      else if (uVar6 < 0x555) {
        iVar2 = (uVar3 >> 0x12) + 0x7c;
        iVar13 = iVar2 * 2;
      }
      else {
        iVar13 = 0xfc;
        iVar2 = 0x7e;
      }
      dVar7 = iVar13 * 4 + 0x20070464;
      dVar11 = (&Elf32_Rel_ARRAY_20070000[0x8d].r_info)[iVar13];
      if (dVar11 == dVar7) {
        Elf32_Rel_ARRAY_20070000[141].r_offset =
             Elf32_Rel_ARRAY_20070000[141].r_offset | 1 << (iVar2 >> 2 & 0xffU);
        dVar12 = dVar11;
      }
      else {
        do {
          dVar12 = dVar11;
          if ((*(uint *)(dVar11 + 4) & 0xfffffffc) <= uVar4) break;
          dVar11 = *(dword *)(dVar11 + 8);
          dVar12 = dVar11;
        } while (dVar7 != dVar11);
        dVar11 = *(dword *)(dVar12 + 0xc);
      }
      dVar7 = Elf32_Rel_ARRAY_20070000[141].r_offset;
      *(dword *)(dVar1 + 0xc) = dVar11;
      *(dword *)(dVar1 + 8) = dVar12;
      *(dword *)(dVar11 + 8) = dVar1;
      *(dword *)(dVar12 + 0xc) = dVar1;
    }
  }
  dVar1 = Elf32_Rel_ARRAY_20070000[141].r_info;
  uVar3 = 1 << ((int)uVar18 >> 2 & 0xffU);
  if (uVar3 <= dVar7) {
    if ((dVar7 & uVar3) == 0) {
      uVar18 = uVar18 & 0xfffffffc;
      do {
        uVar3 = uVar3 << 1;
        uVar18 = uVar18 + 4;
      } while ((dVar7 & uVar3) == 0);
    }
    do {
      pdVar17 = &Elf32_Rel_ARRAY_20070000[uVar18 + 0x8c].r_info;
      pdVar14 = pdVar17;
      uVar4 = uVar18;
      do {
        for (puVar10 = (undefined *)pdVar14[3]; pdVar14 != (dword *)puVar10;
            puVar10 = *(undefined **)(puVar10 + 0xc)) {
          uVar6 = *(uint *)(puVar10 + 4) & 0xfffffffc;
          uVar8 = uVar6 - uVar15;
          if (0xf < (int)uVar8) {
            iVar2 = *(int *)(puVar10 + 8);
            iVar13 = *(int *)(puVar10 + 0xc);
            puVar16 = puVar10 + uVar15;
            *(uint *)(puVar10 + 4) = uVar15 | 1;
            *(int *)(iVar2 + 0xc) = iVar13;
            *(int *)(iVar13 + 8) = iVar2;
            Elf32_Rel_ARRAY_20070000[142].r_info = (dword)puVar16;
            Elf32_Rel_ARRAY_20070000[143].r_offset = (dword)puVar16;
            *(undefined4 *)(puVar16 + 0xc) = 0x2007046c;
            *(undefined4 *)(puVar16 + 8) = 0x2007046c;
            *(uint *)(puVar16 + 4) = uVar8 | 1;
            *(uint *)(puVar16 + uVar8) = uVar8;
            FUN_00081f98(param_1);
            return (int *)(puVar10 + 8);
          }
          if (-1 < (int)uVar8) {
            iVar13 = *(int *)(puVar10 + 8);
            iVar2 = *(int *)(puVar10 + 0xc);
            *(uint *)(puVar10 + uVar6 + 4) = *(uint *)(puVar10 + uVar6 + 4) | 1;
            *(int *)(iVar13 + 0xc) = iVar2;
            *(int *)(iVar2 + 8) = iVar13;
            FUN_00081f98(param_1);
            return (int *)(puVar10 + 8);
          }
        }
        uVar4 = uVar4 + 1;
        pdVar14 = pdVar14 + 2;
      } while ((uVar4 & 3) != 0);
      do {
        uVar6 = uVar18 & 3;
        puVar10 = (undefined *)(pdVar17 + -2);
        uVar18 = uVar18 - 1;
        if (uVar6 == 0) {
          Elf32_Rel_ARRAY_20070000[141].r_offset = Elf32_Rel_ARRAY_20070000[141].r_offset & ~uVar3;
          break;
        }
        pdVar17 = (dword *)*pdVar17;
      } while (pdVar17 == (dword *)puVar10);
      uVar3 = uVar3 * 2;
      if ((Elf32_Rel_ARRAY_20070000[141].r_offset <= uVar3 &&
           uVar3 - Elf32_Rel_ARRAY_20070000[141].r_offset != 0) || (uVar18 = uVar4, uVar3 == 0))
      break;
      for (; (Elf32_Rel_ARRAY_20070000[141].r_offset & uVar3) == 0; uVar3 = uVar3 << 1) {
        uVar18 = uVar18 + 4;
      }
    } while( true );
  }
  uVar18 = *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) & 0xfffffffc;
  if ((uVar15 <= uVar18) &&
     (uVar3 = uVar18 - uVar15, dVar7 = Elf32_Rel_ARRAY_20070000[141].r_info, 0xf < (int)uVar3))
  goto LAB_00081b1a;
  uVar3 = Elf32_Rel_ARRAY_20070000[141].r_info + uVar18;
  if (Elf32_Rel_ARRAY_20070000[270].r_offset == 0xffffffff) {
    uVar4 = uVar15 + DAT_20071218 + 0x10;
  }
  else {
    uVar4 = uVar15 + DAT_20071218 + 0x100f & 0xfffff000;
  }
  dVar7 = FUN_0008236c(param_1,uVar4);
  if ((dVar7 == 0xffffffff) || ((dVar7 < uVar3 && (dVar1 != 0x20070464)))) {
    uVar18 = *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) & 0xfffffffc;
    dVar7 = Elf32_Rel_ARRAY_20070000[141].r_info;
  }
  else {
    uVar6 = DAT_2007121c + uVar4;
    DAT_2007121c = uVar6;
    if ((uVar3 == dVar7) && ((uVar3 & 0xfff) == 0)) {
      *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) = uVar4 + uVar18 | 1;
    }
    else {
      dVar11 = dVar7;
      if (Elf32_Rel_ARRAY_20070000[270].r_offset != 0xffffffff) {
        dVar11 = Elf32_Rel_ARRAY_20070000[270].r_offset;
        DAT_2007121c = uVar6 + (dVar7 - uVar3);
      }
      Elf32_Rel_ARRAY_20070000[270].r_offset = dVar11;
      uVar3 = dVar7 & 7;
      if (uVar3 == 0) {
        iVar13 = 0x1000;
      }
      else {
        dVar7 = dVar7 + (8 - uVar3);
        iVar13 = 0x1008 - uVar3;
      }
      iVar13 = iVar13 - (uVar4 + dVar7 & 0xfff);
      iVar2 = FUN_0008236c(param_1,iVar13);
      if (iVar2 == -1) {
        uVar3 = 1;
        iVar13 = 0;
      }
      else {
        uVar3 = (iVar2 - dVar7) + iVar13 | 1;
      }
      uVar6 = DAT_2007121c + iVar13;
      Elf32_Rel_ARRAY_20070000[141].r_info = dVar7;
      DAT_2007121c = uVar6;
      *(uint *)(dVar7 + 4) = uVar3;
      if (dVar1 != 0x20070464) {
        if (uVar18 < 0x10) {
          *(undefined4 *)(dVar7 + 4) = 1;
          uVar18 = 0;
          goto LAB_00081b04;
        }
        uVar18 = uVar18 - 0xc & 0xfffffff8;
        *(uint *)(dVar1 + 4) = uVar18 | *(uint *)(dVar1 + 4) & 1;
        *(undefined4 *)(dVar1 + uVar18 + 4) = 5;
        *(undefined4 *)(dVar1 + uVar18 + 8) = 5;
        if (0xf < uVar18) {
          FUN_00083b10(param_1,dVar1 + 8);
          uVar6 = DAT_2007121c;
        }
      }
    }
    if (DAT_20071214 < uVar6) {
      DAT_20071214 = uVar6;
    }
    if (DAT_20071210 < uVar6) {
      DAT_20071210 = uVar6;
    }
    uVar18 = *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) & 0xfffffffc;
    dVar7 = Elf32_Rel_ARRAY_20070000[141].r_info;
  }
LAB_00081b04:
  uVar3 = uVar18 - uVar15;
  if ((uVar18 < uVar15) || ((int)uVar3 < 0x10)) {
    FUN_00081f98(param_1);
    return (int *)0x0;
  }
LAB_00081b1a:
  Elf32_Rel_ARRAY_20070000[141].r_info = uVar15 + dVar7;
  *(uint *)(dVar7 + 4) = uVar15 | 1;
  *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) = uVar3 | 1;
  FUN_00081f98(param_1);
  return (int *)(dVar7 + 8);
}


////>>0x00081d48>>FUN_00081d48>>////

undefined4 * FUN_00081d48(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_00081dcc;
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
LAB_00081dcc:
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


////>>0x00081e34>>FUN_00081e34>>////

void FUN_00081e34(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  
  if ((param_2 < param_1) && (puVar4 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar4)) {
    puVar6 = (undefined *)((int)param_1 + param_3);
    iVar1 = param_3 - 1;
    if (param_3 != 0) {
      do {
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        iVar1 = iVar1 + -1;
        puVar6 = puVar6 + -1;
        *puVar6 = *(undefined *)puVar4;
      } while (iVar1 != -1);
    }
    return;
  }
  if (param_3 < 0x10) {
    if (param_3 == 0) {
      return;
    }
  }
  else if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    puVar4 = param_1;
    puVar3 = param_2;
    do {
      puVar2 = puVar4 + 4;
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      puVar4 = puVar2;
      puVar3 = puVar3 + 4;
    } while (puVar2 != (undefined4 *)((int)param_1 + (param_3 - 0x10 & 0xfffffff0) + 0x10));
    iVar1 = (param_3 - 0x10 >> 4) + 1;
    uVar7 = param_3 & 0xf;
    param_2 = param_2 + iVar1 * 4;
    param_1 = param_1 + iVar1 * 4;
    uVar5 = uVar7;
    puVar4 = param_1;
    puVar3 = param_2;
    if (3 < uVar7) {
      do {
        uVar5 = uVar5 - 4;
        *puVar4 = *puVar3;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (3 < uVar5);
      iVar1 = (uVar7 - 4 & 0xfffffffc) + 4;
      param_1 = (undefined4 *)((int)param_1 + iVar1);
      param_2 = (undefined4 *)((int)param_2 + iVar1);
      uVar7 = param_3 & 3;
    }
    param_3 = uVar7;
    if (param_3 == 0) {
      return;
    }
  }
  puVar4 = param_1;
  do {
    puVar3 = (undefined4 *)((int)puVar4 + 1);
    *(undefined *)puVar4 = *(undefined *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar4 = puVar3;
  } while (puVar3 != (undefined4 *)(param_3 + (int)param_1));
  return;
}


////>>0x00081f00>>FUN_00081f00>>////

void FUN_00081f00(undefined4 *param_1,undefined param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  if (((uint)param_1 & 3) != 0) {
    bVar5 = param_3 == 0;
    puVar1 = param_1;
    param_3 = param_3 - 1;
    if (bVar5) {
      return;
    }
    while( true ) {
      param_1 = (undefined4 *)((int)puVar1 + 1);
      *(undefined *)puVar1 = param_2;
      if (((uint)param_1 & 3) == 0) break;
      bVar5 = param_3 == 0;
      puVar1 = param_1;
      param_3 = param_3 - 1;
      if (bVar5) {
        return;
      }
    }
  }
  if (3 < param_3) {
    uVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    uVar4 = param_3;
    puVar1 = param_1;
    if (0xf < param_3) {
      uVar4 = param_3 - 0x10;
      do {
        *puVar1 = uVar3;
        puVar1[1] = uVar3;
        puVar1[2] = uVar3;
        puVar1[3] = uVar3;
        puVar1 = puVar1 + 4;
      } while (puVar1 != (undefined4 *)((int)param_1 + (uVar4 & 0xfffffff0) + 0x10));
      param_3 = param_3 & 0xf;
      param_1 = param_1 + ((uVar4 >> 4) + 1) * 4;
      uVar4 = param_3;
      puVar1 = param_1;
      if (param_3 < 4) goto LAB_00081f7c;
    }
    do {
      param_3 = param_3 - 4;
      *param_1 = uVar3;
      param_1 = param_1 + 1;
    } while (3 < param_3);
    param_1 = (undefined4 *)((int)puVar1 + (uVar4 - 4 & 0xfffffffc) + 4);
    param_3 = uVar4 & 3;
  }
LAB_00081f7c:
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(undefined *)puVar1 = param_2;
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)(param_3 + (int)param_1));
  }
  return;
}


////>>0x00081f94>>FUN_00081f94>>////

void FUN_00081f94(void)

{
  return;
}


////>>0x00081f98>>FUN_00081f98>>////

void FUN_00081f98(void)

{
  return;
}


////>>0x00081f9c>>FUN_00081f9c>>////

void FUN_00081f9c(undefined4 param_1,undefined4 param_2)

{
  FUN_00081fac(Elf32_Rel_ARRAY_20070000[140].r_offset,param_1,param_2);
  return;
}


////>>0x00081fac>>FUN_00081fac>>////

int * FUN_00081fac(undefined4 *param_1,int *param_2,uint param_3)

{
  dword dVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_00081810(param_1,param_3);
    return piVar2;
  }
  FUN_00081f94();
  uVar5 = param_2[-1];
  uVar8 = uVar5 & 0xfffffffc;
  piVar2 = param_2 + -2;
  if (param_3 + 0xb < 0x17) {
    uVar9 = 0x10;
  }
  else {
    uVar9 = param_3 + 0xb & 0xfffffff8;
    if ((int)uVar9 < 0) goto LAB_00082078;
  }
  if (uVar9 < param_3) {
LAB_00082078:
    *param_1 = 0xc;
    return (int *)0x0;
  }
  if ((int)uVar8 < (int)uVar9) {
    dVar1 = (int)piVar2 + uVar8;
    if (Elf32_Rel_ARRAY_20070000[141].r_info == dVar1) {
      uVar3 = *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) & 0xfffffffc;
      dVar1 = Elf32_Rel_ARRAY_20070000[141].r_info;
      if ((int)(uVar9 + 0x10) <= (int)(uVar3 + uVar8)) {
        Elf32_Rel_ARRAY_20070000[141].r_info = (int)piVar2 + uVar9;
        *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) = (uVar3 + uVar8) - uVar9 | 1;
        param_2[-1] = uVar9 | param_2[-1] & 1U;
        FUN_00081f98(param_1);
        return param_2;
      }
    }
    else if ((*(uint *)((*(uint *)(dVar1 + 4) & 0xfffffffe) + dVar1 + 4) & 1) == 0) {
      uVar3 = *(uint *)(dVar1 + 4) & 0xfffffffc;
      if ((int)uVar9 <= (int)(uVar3 + uVar8)) {
        iVar6 = *(int *)(dVar1 + 0xc);
        iVar4 = *(int *)(dVar1 + 8);
        *(int *)(iVar4 + 0xc) = iVar6;
        *(int *)(iVar6 + 8) = iVar4;
        uVar8 = uVar3 + uVar8;
        goto LAB_00082088;
      }
    }
    else {
      uVar3 = 0;
      dVar1 = 0;
    }
    if (-1 < (int)(uVar5 << 0x1f)) {
      piVar10 = (int *)((int)piVar2 - param_2[-2]);
      uVar5 = (piVar10[1] & 0xfffffffcU) + uVar8;
      if (dVar1 != 0) {
        if (dVar1 == Elf32_Rel_ARRAY_20070000[141].r_info) {
          if ((int)(uVar9 + 0x10) <= (int)(uVar3 + uVar5)) {
            piVar2 = piVar10 + 2;
            iVar4 = *piVar2;
            iVar6 = piVar10[3];
            uVar8 = uVar8 - 4;
            *(int *)(iVar4 + 0xc) = iVar6;
            *(int *)(iVar6 + 8) = iVar4;
            if (uVar8 < 0x25) {
              piVar7 = piVar2;
              if (0x13 < uVar8) {
                piVar10[2] = *param_2;
                piVar10[3] = param_2[1];
                if (uVar8 < 0x1c) {
                  param_2 = param_2 + 2;
                  piVar7 = piVar10 + 4;
                }
                else {
                  piVar10[4] = param_2[2];
                  piVar10[5] = param_2[3];
                  if (uVar8 == 0x24) {
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
              FUN_00081e34(piVar2,param_2);
            }
            Elf32_Rel_ARRAY_20070000[141].r_info = (int)piVar10 + uVar9;
            *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) = (uVar3 + uVar5) - uVar9 | 1;
            piVar10[1] = uVar9 | piVar10[1] & 1U;
            FUN_00081f98(param_1);
            return piVar2;
          }
        }
        else {
          uVar3 = uVar3 + uVar5;
          if ((int)uVar9 <= (int)uVar3) {
            iVar6 = *(int *)(dVar1 + 0xc);
            iVar4 = *(int *)(dVar1 + 8);
            *(int *)(iVar4 + 0xc) = iVar6;
            *(int *)(iVar6 + 8) = iVar4;
            piVar7 = piVar10 + 2;
            iVar4 = *piVar7;
            iVar6 = piVar10[3];
            uVar5 = uVar8 - 4;
            *(int *)(iVar4 + 0xc) = iVar6;
            *(int *)(iVar6 + 8) = iVar4;
            uVar8 = uVar3;
            if (uVar5 < 0x25) {
              piVar2 = piVar7;
              if (0x13 < uVar5) {
                piVar10[2] = *param_2;
                piVar10[3] = param_2[1];
                if (uVar5 < 0x1c) {
                  param_2 = param_2 + 2;
                  piVar2 = piVar10 + 4;
                }
                else {
                  piVar10[4] = param_2[2];
                  piVar10[5] = param_2[3];
                  if (uVar5 == 0x24) {
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
              FUN_00081e34(piVar7,param_2);
              uVar5 = piVar10[1];
              piVar2 = piVar10;
              param_2 = piVar7;
            }
            goto LAB_00082088;
          }
        }
      }
      if ((int)uVar9 <= (int)uVar5) {
        piVar7 = piVar10 + 2;
        iVar4 = *piVar7;
        iVar6 = piVar10[3];
        uVar3 = uVar8 - 4;
        *(int *)(iVar4 + 0xc) = iVar6;
        *(int *)(iVar6 + 8) = iVar4;
        uVar8 = uVar5;
        if (uVar3 < 0x25) {
          piVar2 = piVar7;
          if (0x13 < uVar3) {
            piVar10[2] = *param_2;
            piVar10[3] = param_2[1];
            if (uVar3 < 0x1c) {
              param_2 = param_2 + 2;
              piVar2 = piVar10 + 4;
            }
            else {
              piVar10[4] = param_2[2];
              piVar10[5] = param_2[3];
              if (uVar3 == 0x24) {
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
          FUN_00081e34(piVar7,param_2);
          uVar5 = piVar10[1];
          piVar2 = piVar10;
          param_2 = piVar7;
        }
        goto LAB_00082088;
      }
    }
    piVar10 = (int *)FUN_00081810(param_1,param_3);
    if (piVar10 == (int *)0x0) goto LAB_000820a0;
    uVar5 = param_2[-1];
    if (piVar10 + -2 != (int *)((uVar5 & 0xfffffffe) + (int)piVar2)) {
      uVar8 = uVar8 - 4;
      if (uVar8 < 0x25) {
        piVar2 = param_2;
        piVar7 = piVar10;
        if (0x13 < uVar8) {
          *piVar10 = *param_2;
          piVar10[1] = param_2[1];
          if (uVar8 < 0x1c) {
            piVar2 = param_2 + 2;
            piVar7 = piVar10 + 2;
          }
          else {
            piVar10[2] = param_2[2];
            piVar10[3] = param_2[3];
            if (uVar8 == 0x24) {
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
        FUN_00081e34(piVar10,param_2);
      }
      FUN_00083b10(param_1,param_2);
      goto LAB_000820a0;
    }
    uVar8 = uVar8 + (piVar10[-1] & 0xfffffffcU);
  }
LAB_00082088:
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
    FUN_00083b10(param_1,(int)piVar2 + uVar9 + 8);
  }
LAB_000820a0:
  FUN_00081f98(param_1);
  return piVar10;
}


////>>0x0008236c>>FUN_0008236c>>////

void FUN_0008236c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_20071244 = 0;
  iVar1 = FUN_00080e88(param_2);
  if ((iVar1 == -1) && (DAT_20071244 != 0)) {
    *param_1 = DAT_20071244;
    return;
  }
  return;
}


////>>0x00082390>>FUN_00082390>>////

int FUN_00082390(uint *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((((uint)param_1 | (uint)param_2) & 7) != 0) {
    puVar1 = param_1;
    if (((uint)param_1 & 3) != 0) {
      puVar1 = (uint *)((uint)param_1 & 0xfffffffc) + 1;
      uVar5 = *(uint *)((uint)param_1 & 0xfffffffc);
      puVar3 = param_2;
      if (((uint)param_1 & 1) == 0) {
LAB_00082410:
        puVar4 = (uint *)((int)puVar3 + 1);
        uVar6 = uVar5 >> 0x10 & 0xff;
        iVar2 = uVar6 - *(byte *)puVar3;
        if (iVar2 != 0) {
          return iVar2;
        }
        if (uVar6 == 0) {
          return 0;
        }
      }
      else {
        puVar4 = param_2;
        if (((uint)param_1 & 2) == 0) {
          puVar3 = (uint *)((int)param_2 + 1);
          uVar6 = uVar5 >> 8 & 0xff;
          iVar2 = uVar6 - *(byte *)param_2;
          if (iVar2 != 0) {
            return iVar2;
          }
          if (uVar6 == 0) {
            return 0;
          }
          goto LAB_00082410;
        }
      }
      param_2 = (uint *)((int)puVar4 + 1);
      iVar2 = (uVar5 >> 0x18) - (uint)*(byte *)puVar4;
      if ((iVar2 != 0) || (uVar5 >> 0x18 == 0)) {
        return iVar2;
      }
    }
    uVar5 = (uint)param_2 & 3;
    if (uVar5 != 0) {
      param_2 = (uint *)((uint)param_2 & 0xfffffffc);
      if (uVar5 == 2) {
        uVar5 = *param_2;
        do {
          param_2 = param_2 + 1;
          uVar7 = *puVar1;
          uVar5 = uVar5 >> 0x10;
          uVar8 = uVar7 + 0xfefefeff & ~uVar7;
          uVar9 = uVar8 & 0x80808080;
          uVar6 = uVar7 & 0xffff;
          if ((uVar8 & 0x8080) != 0 || uVar6 != uVar5) goto LAB_0008258e;
          uVar5 = *param_2;
          uVar6 = uVar6 ^ uVar7;
          uVar7 = uVar5 * 0x10000;
          puVar1 = puVar1 + 1;
        } while (uVar9 == 0 && uVar6 == uVar7);
      }
      else if (uVar5 < 2) {
        uVar5 = *param_2;
        do {
          param_2 = param_2 + 1;
          uVar7 = *puVar1;
          uVar5 = uVar5 >> 8;
          uVar8 = uVar7 + 0xfefefeff & ~uVar7;
          uVar9 = uVar8 & 0x80808080;
          uVar6 = uVar7 & 0xffffff;
          if ((uVar8 & 0x808080) != 0 || uVar6 != uVar5) goto LAB_0008258e;
          uVar5 = *param_2;
          uVar6 = uVar6 ^ uVar7;
          uVar7 = uVar5 * 0x1000000;
          puVar1 = puVar1 + 1;
        } while (uVar9 == 0 && uVar6 == uVar7);
      }
      else {
        uVar5 = *param_2;
        do {
          param_2 = param_2 + 1;
          uVar7 = *puVar1;
          uVar5 = uVar5 >> 0x18;
          uVar8 = uVar7 + 0xfefefeff & ~uVar7;
          uVar9 = uVar8 & 0x80808080;
          uVar6 = uVar7 & 0xff;
          if ((uVar8 & 0x80) != 0 || uVar6 != uVar5) goto LAB_0008258e;
          uVar5 = *param_2;
          uVar6 = uVar6 ^ uVar7;
          uVar7 = uVar5 * 0x100;
          puVar1 = puVar1 + 1;
        } while (uVar9 == 0 && uVar6 == uVar7);
      }
      uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
      uVar5 = (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
      goto LAB_0008259e;
    }
    param_1 = puVar1;
    puVar3 = param_2;
    if (((uint)puVar1 & 4) != 0) {
      param_1 = puVar1 + 1;
      uVar5 = *puVar1;
      puVar3 = param_2 + 1;
      uVar7 = *param_2;
      uVar9 = uVar5 + 0xfefefeff & ~uVar5 & 0x80808080;
      if (uVar5 != uVar7 || uVar9 != 0) {
LAB_0008259a:
        uVar6 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                uVar5 >> 0x18;
        uVar5 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                uVar7 >> 0x18;
        goto LAB_0008259e;
      }
    }
    param_2 = puVar3;
    if (((uint)puVar3 & 4) != 0) {
      uVar5 = *puVar3;
      puVar1 = puVar3 + 1;
      do {
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar9 = uVar6 + 0xfefefeff & ~uVar6 & 0x80808080;
        if (uVar6 != uVar5 || uVar9 != 0) goto LAB_0008258e;
        uVar8 = *puVar1;
        uVar5 = puVar1[1];
        uVar9 = uVar7 + 0xfefefeff & ~uVar7 & 0x80808080;
        param_1 = param_1 + 2;
        puVar1 = puVar1 + 2;
      } while (uVar7 == uVar8 && uVar9 == 0);
      uVar6 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
              uVar7 >> 0x18;
      uVar5 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18;
      goto LAB_0008259e;
    }
  }
  do {
    uVar5 = *param_1;
    uVar6 = param_1[1];
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uVar9 = uVar5 + 0xfefefeff & ~uVar5 & 0x80808080;
    if (uVar5 != uVar7 || uVar9 != 0) goto LAB_0008259a;
    uVar9 = uVar6 + 0xfefefeff & ~uVar6 & 0x80808080;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  } while (uVar6 == uVar8 && uVar9 == 0);
  uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  uVar5 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
LAB_0008259e:
  uVar7 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
  if (uVar7 != 0) {
    uVar7 = 0x18 - LZCOUNT(uVar7);
    uVar6 = uVar6 >> (uVar7 & 0xff);
    uVar5 = uVar5 >> (uVar7 & 0xff);
  }
  iVar2 = 1;
  if (uVar6 <= uVar5) {
    iVar2 = -(uint)(uVar6 < uVar5);
  }
  return iVar2;
LAB_0008258e:
  uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  goto LAB_0008259e;
}


////>>0x000825cc>>FUN_000825cc>>////

void FUN_000825cc(uint *param_1,uint *param_2)

{
  char cVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  
  if ((((uint)param_1 ^ (uint)param_2) & 3) != 0) {
    do {
      cVar1 = *(char *)param_2;
      *(char *)param_1 = cVar1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    } while (cVar1 != '\0');
    return;
  }
  if (((uint)param_2 & 3) != 0) {
    puVar4 = param_2;
    if (((uint)param_2 & 1) != 0) {
      puVar4 = (uint *)((int)param_2 + 1);
      cVar1 = *(char *)param_2;
      *(char *)param_1 = cVar1;
      param_1 = (uint *)((int)param_1 + 1);
      if (cVar1 == '\0') {
        return;
      }
    }
    param_2 = puVar4;
    if (((uint)puVar4 & 2) != 0) {
      param_2 = (uint *)((int)puVar4 + 2);
      uVar2 = *(ushort *)puVar4;
      bVar8 = (uVar2 & 0xff) == 0;
      if (bVar8) {
        *(char *)param_1 = (char)uVar2;
      }
      else {
        *(ushort *)param_1 = uVar2;
        bVar8 = (uVar2 & 0xff00) == 0;
        param_1 = (uint *)((int)param_1 + 2);
      }
      if (bVar8) {
        return;
      }
    }
  }
  uVar5 = *param_2;
  puVar4 = param_2 + 1;
  puVar7 = param_1;
  if (((uint)param_2 & 4) != 0) {
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) goto LAB_00082630;
    puVar7 = param_1 + 1;
    *param_1 = uVar5;
    puVar4 = param_2 + 2;
    uVar5 = param_2[1];
  }
  while( true ) {
    puVar3 = puVar4 + 1;
    uVar6 = *puVar4;
    param_1 = puVar7;
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) break;
    param_1 = puVar7 + 1;
    *puVar7 = uVar5;
    uVar5 = uVar6;
    if ((uVar6 + 0xfefefeff & ~uVar6 & 0x80808080) != 0) break;
    puVar4 = puVar4 + 2;
    uVar5 = *puVar3;
    puVar7 = puVar7 + 2;
    *param_1 = uVar6;
  }
LAB_00082630:
  do {
    *(char *)param_1 = (char)uVar5;
    uVar6 = uVar5 & 0xff;
    uVar5 = uVar5 >> 8 | uVar5 << 0x18;
    param_1 = (uint *)((int)param_1 + 1);
  } while (uVar6 != 0);
  return;
}


////>>0x00082688>>FUN_00082688>>////

int FUN_00082688(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = (uint *)(param_1 & 0xfffffffc);
  iVar1 = -(param_1 & 3);
  uVar3 = *puVar2;
  if ((param_1 & 3) != 0) {
    uVar3 = uVar3 | 0xffffffffU >> ((iVar1 + 4U & 0x1f) << 3);
  }
  while (puVar2 = puVar2 + 1, (uVar3 + 0xfefefeff & ~uVar3 & 0x80808080) == 0) {
    iVar1 = iVar1 + 4;
    uVar3 = *puVar2;
  }
  bVar4 = (uVar3 & 0xff) == 0;
  if (!bVar4) {
    iVar1 = iVar1 + 1;
    bVar4 = (uVar3 & 0xff00) == 0;
  }
  if (!bVar4) {
    iVar1 = iVar1 + 1;
    bVar4 = (uVar3 & 0xff0000) == 0;
  }
  if (!bVar4) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


////>>0x00082824>>FUN_00082824>>////

int FUN_00082824(undefined4 param_1,int param_2,int **param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (-1 < *(int *)(param_2 + 100) << 0x12) {
    iVar2 = FUN_00083ca8();
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
        iVar2 = FUN_000839b4(param_1,*puVar5,param_2);
        uVar4 = uVar4 + 1;
        if (iVar2 == -1) goto LAB_00082864;
      } while (uVar7 != uVar4);
      piVar3 = param_3[2];
    }
    piVar3 = (int *)((int)piVar3 - (uVar6 & 0xfffffffc));
    param_3[2] = piVar3;
    piVar1 = piVar1 + 2;
  }
  iVar2 = 0;
LAB_00082864:
  param_3[2] = (int *)0x0;
  param_3[1] = (int *)0x0;
  return iVar2;
}


////>>0x0008289c>>FUN_0008289c>>////

/* WARNING: Type propagation algorithm not settling */

int FUN_0008289c(int param_1,int param_2,int *******param_3,int **param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int ********ppppppppiVar6;
  int *piVar7;
  int iVar8;
  char cVar9;
  int *******pppppppiVar10;
  uint uVar11;
  int **ppiVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int ********ppppppppiVar16;
  int iVar17;
  int *******pppppppiVar18;
  int *piVar19;
  int *******pppppppiVar20;
  uint uVar21;
  int *piVar22;
  int *******pppppppiVar23;
  undefined4 uVar24;
  int ********ppppppppiVar25;
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
    FUN_00083888();
  }
  uVar13 = (uint)*(ushort *)(param_2 + 0xc);
  if (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x12)) {
    uVar13 = uVar13 | 0x2000;
    *(short *)(param_2 + 0xc) = (short)uVar13;
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xffffdfff;
  }
  if (((int)(uVar13 << 0x1c) < 0) && (*(int *)(param_2 + 0x10) != 0)) {
    if ((uVar13 & 0x1a) != 10) goto LAB_000828ee;
  }
  else {
    iVar8 = FUN_0008356c(param_1,param_2);
    if (iVar8 != 0) {
      return -1;
    }
    if ((*(ushort *)(param_2 + 0xc) & 0x1a) != 10) goto LAB_000828ee;
  }
  if (-1 < *(short *)(param_2 + 0xe)) {
    iVar8 = FUN_000834f0(param_1,param_2,param_3,param_4);
    return iVar8;
  }
LAB_000828ee:
  local_c0 = (char *)0x0;
  local_94 = (int *******)0x0;
  local_98 = 0;
  local_c4 = 0;
  ppppppppiVar6 = (int ********)local_68;
  local_c8 = param_4;
  local_9c = (int ********)local_68;
LAB_00082902:
  pppppppiVar10 = param_3;
  if ((*(char *)param_3 != '\0') && (*(char *)param_3 != '%')) {
    do {
      pppppppiVar10 = (int *******)((int)pppppppiVar10 + 1);
      if (*(char *)pppppppiVar10 == '\0') break;
    } while (*(char *)pppppppiVar10 != '%');
    pppppppiVar20 = (int *******)((int)pppppppiVar10 - (int)param_3);
    if (pppppppiVar20 != (int *******)0x0) {
      local_98 = local_98 + 1;
      local_94 = (int *******)((int)local_94 + (int)pppppppiVar20);
      *ppppppppiVar6 = param_3;
      ppppppppiVar6[1] = pppppppiVar20;
      if (local_98 < 8) {
        ppppppppiVar6 = ppppppppiVar6 + 2;
      }
      else {
        if (local_94 == (int *******)0x0) {
          local_c4 = local_c4 + (int)pppppppiVar20;
          local_98 = 0;
          ppppppppiVar6 = (int ********)local_68;
          goto LAB_00082952;
        }
        iVar8 = FUN_00082824(param_1,param_2,&local_9c);
        ppppppppiVar6 = (int ********)local_68;
        if (iVar8 != 0) goto LAB_00083142;
      }
      local_c4 = local_c4 + (int)pppppppiVar20;
    }
  }
LAB_00082952:
  if (*(char *)pppppppiVar10 != '\0') {
    local_a1 = '\0';
    uVar14 = (uint)*(byte *)((int)pppppppiVar10 + 1);
    uVar13 = 0;
    bVar5 = false;
    bVar2 = false;
    bVar1 = false;
    bVar3 = false;
    bVar26 = false;
    pppppppiVar20 = (int *******)0x0;
    local_d4 = (int *******)0xffffffff;
    param_3 = (int *******)((int)pppppppiVar10 + 1);
LAB_00082976:
    param_3 = (int *******)((int)param_3 + 1);
LAB_0008297a:
    switch(uVar14) {
    case 0x20:
      goto switchD_00082984_caseD_20;
    default:
      if (uVar14 != 0) {
        local_dc = (int *******)0x1;
        local_d4 = (int *******)0x1;
        ppppppppiVar25 = (int ********)&local_90;
        local_90 = (char)uVar14;
        goto LAB_00082d76;
      }
      goto LAB_00083134;
    case 0x23:
      bVar3 = true;
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082976;
    case 0x2a:
      pppppppiVar20 = (int *******)*local_c8;
      local_c8 = local_c8 + 1;
      if ((int)pppppppiVar20 < 0) {
        pppppppiVar20 = (int *******)-(int)pppppppiVar20;
        goto switchD_00082984_caseD_2d;
      }
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082976;
    case 0x2b:
      uVar14 = (uint)*(byte *)param_3;
      local_a1 = '+';
      goto LAB_00082976;
    case 0x2d:
switchD_00082984_caseD_2d:
      uVar13 = uVar13 | 4;
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082976;
    case 0x2e:
      uVar14 = (uint)*(byte *)param_3;
      pppppppiVar10 = (int *******)((int)param_3 + 1);
      if (uVar14 == 0x2a) {
        uVar14 = (uint)*(byte *)((int)param_3 + 1);
        local_d4 = (int *******)*local_c8;
        local_c8 = local_c8 + 1;
        param_3 = pppppppiVar10;
        if ((int)local_d4 < 0) {
          local_d4 = (int *******)0xffffffff;
        }
        goto LAB_00082976;
      }
      uVar11 = uVar14 - 0x30;
      if (uVar11 < 10) {
        uVar21 = 0;
        do {
          param_3 = (int *******)((int)pppppppiVar10 + 1);
          uVar14 = (uint)*(byte *)pppppppiVar10;
          uVar21 = uVar11 + uVar21 * 10;
          uVar11 = uVar14 - 0x30;
          pppppppiVar10 = param_3;
        } while (uVar11 < 10);
        local_d4 = (int *******)(uVar21 | (int)uVar21 >> 0x1f);
      }
      else {
        local_d4 = (int *******)0x0;
        param_3 = pppppppiVar10;
      }
      goto LAB_0008297a;
    case 0x30:
      uVar13 = uVar13 | 0x80;
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082976;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_00082984_caseD_31;
    case 0x44:
      bVar2 = true;
      if (bVar1 == false) goto LAB_00082d8c;
LAB_00082bfc:
      local_c8 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      piVar19 = *local_c8;
      piVar22 = local_c8[1];
      local_c8 = local_c8 + 2;
      goto LAB_00082c10;
    case 0x4f:
      bVar2 = true;
      if (bVar1 != false) goto LAB_00082aa6;
LAB_00082c8e:
      iVar8 = (uint)bVar2 << 4;
      iVar15 = (uint)bVar1 << 5;
      if ((bVar2 == 0) && (iVar15 = (uint)bVar26 << 6, bVar26 != 0)) {
        piVar19 = (int *)(uint)*(ushort *)local_c8;
        local_c8 = local_c8 + 1;
        piVar22 = (int *)0x0;
      }
      else {
        iVar8 = iVar15;
        piVar19 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar22 = (int *)0x0;
      }
      break;
    case 0x55:
      bVar2 = true;
      if (bVar1 != false) goto LAB_00082bc6;
LAB_00082ce0:
      if ((bVar2) || (bVar26 == false)) {
        iVar8 = 1;
        piVar19 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar22 = (int *)0x0;
      }
      else {
        piVar22 = (int *)0x0;
        piVar19 = (int *)(uint)*(ushort *)local_c8;
        local_c8 = local_c8 + 1;
        iVar8 = 1;
      }
      break;
    case 0x58:
      local_c0 = "0123456789ABCDEF";
      if (bVar1 == false) goto LAB_00082efa;
LAB_00082d1a:
      ppiVar12 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar12 + 2;
      piVar19 = *ppiVar12;
      piVar22 = ppiVar12[1];
      goto LAB_00082d2e;
    case 99:
      piVar19 = *local_c8;
      local_c8 = local_c8 + 1;
      local_dc = (int *******)0x1;
      local_90 = SUB41(piVar19,0);
      local_d4 = (int *******)0x1;
      ppppppppiVar25 = (int ********)&local_90;
      goto LAB_00082d76;
    case 100:
    case 0x69:
      if (bVar1 != false) goto LAB_00082bfc;
LAB_00082d8c:
      if ((bVar2 == false) && (bVar26 != false)) {
        piVar19 = (int *)(int)*(short *)local_c8;
        local_c8 = local_c8 + 1;
        piVar22 = (int *)((int)piVar19 >> 0x1f);
      }
      else {
        piVar19 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar22 = (int *)((int)piVar19 >> 0x1f);
      }
LAB_00082c10:
      if ((int)piVar22 < 0) {
        bVar26 = piVar19 != (int *)0x0;
        piVar19 = (int *)-(int)piVar19;
        piVar22 = (int *)(-(int)piVar22 - (uint)bVar26);
        local_a1 = '-';
        cVar4 = '-';
        iVar8 = 1;
        goto LAB_00082ace;
      }
      if (-1 < (int)local_d4) {
        uVar13 = uVar13 & 0xffffff7f;
      }
      bVar5 = false;
      uVar14 = (uint)piVar19 | (uint)piVar22;
      iVar8 = 1;
      cVar4 = local_a1;
      goto joined_r0x00082adc;
    case 0x68:
      bVar26 = true;
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082976;
    case 0x6c:
      uVar14 = (uint)*(byte *)param_3;
      if (uVar14 == 0x6c) {
        bVar1 = true;
        uVar14 = (uint)*(byte *)((int)param_3 + 1);
        param_3 = (int *******)((int)param_3 + 1);
      }
      else {
        bVar2 = true;
      }
      goto LAB_00082976;
    case 0x6e:
      if (bVar1 == false) {
        if (bVar2 == false) {
          if (bVar26) {
            piVar19 = *local_c8;
            local_c8 = local_c8 + 1;
            *(short *)piVar19 = (short)local_c4;
          }
          else {
            piVar19 = *local_c8;
            local_c8 = local_c8 + 1;
            *piVar19 = local_c4;
          }
        }
        else {
          piVar19 = *local_c8;
          local_c8 = local_c8 + 1;
          *piVar19 = local_c4;
        }
      }
      else {
        piVar19 = *local_c8;
        local_c8 = local_c8 + 1;
        *piVar19 = local_c4;
        piVar19[1] = local_c4 >> 0x1f;
      }
      goto LAB_00082902;
    case 0x6f:
      if (bVar1 == false) goto LAB_00082c8e;
LAB_00082aa6:
      ppiVar12 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar12 + 2;
      piVar19 = *ppiVar12;
      piVar22 = ppiVar12[1];
      iVar8 = 0;
      break;
    case 0x70:
      piVar19 = *local_c8;
      local_c8 = local_c8 + 1;
      local_9f = 0x78;
      bVar5 = true;
      piVar22 = (int *)0x0;
      local_a0 = 0x30;
      local_c0 = "0123456789abcdef";
      iVar8 = 2;
      break;
    case 0x71:
      bVar1 = true;
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082976;
    case 0x73:
      ppppppppiVar25 = (int ********)*local_c8;
      local_a1 = '\0';
      local_c8 = local_c8 + 1;
      if (ppppppppiVar25 != (int ********)0x0) {
        if ((int)local_d4 < 0) {
          local_d4 = (int *******)FUN_00082688(ppppppppiVar25);
          pppppppiVar10 = (int *******)0x0;
          cVar4 = local_a1;
        }
        else {
          iVar8 = FUN_000840f8(ppppppppiVar25,0,local_d4);
          cVar4 = local_a1;
          if (iVar8 == 0) {
            pppppppiVar10 = (int *******)0x0;
          }
          else {
            pppppppiVar18 = (int *******)(iVar8 - (int)ppppppppiVar25);
            if ((int)local_d4 <= (int)(int *******)(iVar8 - (int)ppppppppiVar25)) {
              pppppppiVar18 = local_d4;
            }
            pppppppiVar10 = (int *******)0x0;
            local_d4 = pppppppiVar18;
          }
        }
        goto LAB_00082b04;
      }
      if ((int *******)0x5 < local_d4) {
        local_d4 = (int *******)0x6;
      }
      local_dc = (int *******)((uint)local_d4 & ~((int)local_d4 >> 0x1f));
      ppppppppiVar25 = (int ********)&UNK_00085728;
LAB_00082d76:
      local_a1 = '\0';
      pppppppiVar10 = (int *******)0x0;
      goto LAB_00082b1e;
    case 0x75:
      if (!bVar1) goto LAB_00082ce0;
LAB_00082bc6:
      ppiVar12 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar12 + 2;
      piVar19 = *ppiVar12;
      piVar22 = ppiVar12[1];
      iVar8 = 1;
      break;
    case 0x78:
      local_c0 = "0123456789abcdef";
      if (bVar1 != false) goto LAB_00082d1a;
LAB_00082efa:
      if ((bVar2 == false) && (bVar26 != false)) {
        piVar22 = (int *)0x0;
        piVar19 = (int *)(uint)*(ushort *)local_c8;
        local_c8 = local_c8 + 1;
      }
      else {
        piVar19 = *local_c8;
        local_c8 = local_c8 + 1;
        piVar22 = (int *)0x0;
      }
LAB_00082d2e:
      if ((bVar3) && (((uint)piVar19 | (uint)piVar22) != 0)) {
        bVar5 = true;
        local_a0 = 0x30;
        iVar8 = 2;
        local_9f = (char)uVar14;
      }
      else {
        iVar8 = 2;
      }
    }
    local_a1 = '\0';
    cVar4 = '\0';
LAB_00082ace:
    if (-1 < (int)local_d4) {
      uVar13 = uVar13 & 0xffffff7f;
    }
    uVar14 = (uint)piVar19 | (uint)piVar22;
joined_r0x00082adc:
    lVar27 = CONCAT44(piVar22,piVar19);
    pppppppiVar10 = local_d4;
    if ((uVar14 == 0) && (local_d4 == (int *******)0x0)) {
      ppppppppiVar25 = (int ********)local_68;
      if ((iVar8 != 0) || (!bVar3)) goto LAB_00082b04;
      ppppppppiVar25 = (int ********)(&cStack_6a + 1);
      local_69 = '0';
      goto LAB_00082afe;
    }
    if (iVar8 == 1) {
      if (piVar22 != (int *)0x0 || (int *)0x9 < piVar19) {
        ppppppppiVar16 = (int ********)(&cStack_6a + 1);
        do {
          ppppppppiVar25 = ppppppppiVar16;
          uVar24 = (undefined4)((ulonglong)lVar27 >> 0x20);
          cVar9 = '\n';
          FUN_00084530((int)lVar27,uVar24,10,0);
          *(char *)ppppppppiVar25 = cVar9 + '0';
          lVar27 = FUN_00084530((int)lVar27,uVar24,10,0);
          ppppppppiVar16 = (int ********)((int)ppppppppiVar25 + -1);
        } while (lVar27 != 0);
        local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar25);
        goto LAB_00082b04;
      }
      local_69 = (char)piVar19 + '0';
      ppppppppiVar25 = (int ********)(&cStack_6a + 1);
      goto LAB_00083282;
    }
    ppppppppiVar16 = (int ********)(&cStack_6a + 1);
    if (iVar8 != 2) goto LAB_000830e2;
    do {
      ppppppppiVar25 = ppppppppiVar16;
      uVar14 = (uint)piVar19 & 0xf;
      piVar19 = (int *)((uint)piVar19 >> 4 | (int)piVar22 << 0x1c);
      piVar22 = (int *)((uint)piVar22 >> 4);
      *(char *)ppppppppiVar25 = local_c0[uVar14];
      ppppppppiVar16 = (int ********)((int)ppppppppiVar25 + -1);
    } while (((uint)piVar19 | (uint)piVar22) != 0);
    local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar25);
    goto LAB_00082b04;
  }
LAB_00083134:
  if (local_94 != (int *******)0x0) {
    FUN_00082824(param_1,param_2,&local_9c);
  }
LAB_00083142:
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x19) < 0) {
    return -1;
  }
  return local_c4;
LAB_000830e2:
  do {
    ppppppppiVar25 = ppppppppiVar16;
    piVar7 = (int *)((uint)piVar19 >> 3 | (int)piVar22 << 0x1d);
    piVar22 = (int *)((uint)piVar22 >> 3);
    iVar8 = ((uint)piVar19 & 7) + 0x30;
    *(char *)ppppppppiVar25 = (char)iVar8;
    ppppppppiVar16 = (int ********)((int)ppppppppiVar25 + -1);
    piVar19 = piVar7;
  } while (((uint)piVar7 | (uint)piVar22) != 0);
  if (bVar3) {
    if (iVar8 == 0x30) {
LAB_00082afe:
      local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar25);
    }
    else {
      *(undefined *)((int)ppppppppiVar25 + -1) = 0x30;
      ppppppppiVar25 = ppppppppiVar16;
      local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar16);
    }
  }
  else {
LAB_00083282:
    local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar25);
  }
LAB_00082b04:
  local_dc = local_d4;
  if ((int)local_d4 < (int)pppppppiVar10) {
    local_dc = pppppppiVar10;
  }
  if (cVar4 != '\0') {
    local_dc = (int *******)((int)local_dc + 1);
  }
LAB_00082b1e:
  if (bVar5) {
    local_dc = (int *******)((int)local_dc + 2);
  }
  if ((uVar13 == 0) &&
     (pppppppiVar18 = (int *******)((int)pppppppiVar20 - (int)local_dc), 0 < (int)pppppppiVar18)) {
    if ((int)pppppppiVar18 < 0x11) {
      local_98 = local_98 + 1;
    }
    else {
      do {
        pppppppiVar23 = pppppppiVar18;
        iVar8 = local_98 + 1;
        local_94 = local_94 + 4;
        *ppppppppiVar6 = (int *******)0x856f0;
        ppppppppiVar6[1] = (int *******)0x10;
        if (iVar8 < 8) {
          iVar15 = local_98 + 2;
          ppppppppiVar6 = ppppppppiVar6 + 2;
          local_98 = iVar8;
        }
        else if (local_94 == (int *******)0x0) {
          iVar15 = 1;
          ppppppppiVar6 = (int ********)local_68;
          local_98 = 0;
        }
        else {
          local_98 = iVar8;
          iVar8 = FUN_00082824(param_1,param_2,&local_9c);
          if (iVar8 != 0) goto LAB_00083142;
          iVar15 = local_98 + 1;
          ppppppppiVar6 = (int ********)local_68;
        }
        pppppppiVar18 = pppppppiVar23 + -4;
      } while (0x10 < (int)pppppppiVar18);
      pppppppiVar18 = pppppppiVar23 + -4;
      local_98 = iVar15;
    }
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar18);
    *ppppppppiVar6 = (int *******)0x856f0;
    ppppppppiVar6[1] = pppppppiVar18;
    if (local_98 < 8) {
      iVar8 = local_98 + 1;
      ppppppppiVar6 = ppppppppiVar6 + 2;
    }
    else if (local_94 == (int *******)0x0) {
      iVar8 = 1;
      local_98 = 0;
      ppppppppiVar6 = (int ********)local_68;
    }
    else {
      iVar8 = FUN_00082824(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_00083142;
      iVar8 = local_98 + 1;
      ppppppppiVar6 = (int ********)local_68;
    }
  }
  else {
    iVar8 = local_98 + 1;
  }
  iVar15 = iVar8;
  if (local_a1 != '\0') {
    local_94 = (int *******)((int)local_94 + 1);
    iVar15 = 1;
    *ppppppppiVar6 = (int *******)&local_a1;
    ppppppppiVar6[1] = (int *******)0x1;
    local_98 = iVar8;
    if (iVar8 < 8) {
      iVar15 = iVar8 + 1;
      ppppppppiVar6 = ppppppppiVar6 + 2;
    }
    else if (local_94 == (int *******)0x0) {
      local_98 = 0;
      ppppppppiVar6 = (int ********)local_68;
    }
    else {
      iVar8 = FUN_00082824(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_00083142;
      iVar15 = local_98 + 1;
      ppppppppiVar6 = (int ********)local_68;
    }
  }
  iVar8 = iVar15;
  iVar17 = local_98;
  if (bVar5) {
    local_94 = (int *******)((int)local_94 + 2);
    *ppppppppiVar6 = (int *******)&local_a0;
    ppppppppiVar6[1] = (int *******)0x2;
    if (iVar15 < 8) {
      iVar8 = iVar15 + 1;
      iVar17 = iVar15;
      ppppppppiVar6 = ppppppppiVar6 + 2;
    }
    else if (local_94 == (int *******)0x0) {
      iVar8 = 1;
      iVar17 = 0;
      ppppppppiVar6 = (int ********)local_68;
    }
    else {
      local_98 = iVar15;
      iVar8 = FUN_00082824(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_00083142;
      iVar8 = local_98 + 1;
      iVar17 = local_98;
      ppppppppiVar6 = (int ********)local_68;
    }
  }
  local_98 = iVar17;
  if ((uVar13 == 0x80) &&
     (pppppppiVar18 = (int *******)((int)pppppppiVar20 - (int)local_dc), 0 < (int)pppppppiVar18)) {
    if (0x10 < (int)pppppppiVar18) {
      do {
        while( true ) {
          pppppppiVar23 = pppppppiVar18;
          local_98 = iVar17 + 1;
          local_94 = local_94 + 4;
          *ppppppppiVar6 = (int *******)"0000000000000000";
          ppppppppiVar6[1] = (int *******)0x10;
          if (7 < local_98) break;
          iVar8 = iVar17 + 2;
          ppppppppiVar6 = ppppppppiVar6 + 2;
LAB_000831f2:
          iVar17 = local_98;
          pppppppiVar18 = pppppppiVar23 + -4;
          if ((int)(pppppppiVar23 + -4) < 0x11) goto LAB_00083218;
        }
        if (local_94 != (int *******)0x0) {
          iVar8 = FUN_00082824(param_1,param_2,&local_9c);
          if (iVar8 == 0) {
            iVar8 = local_98 + 1;
            ppppppppiVar6 = (int ********)local_68;
            goto LAB_000831f2;
          }
          goto LAB_00083142;
        }
        iVar8 = 1;
        iVar17 = 0;
        pppppppiVar18 = pppppppiVar23 + -4;
        ppppppppiVar6 = (int ********)local_68;
      } while (0x10 < (int)(pppppppiVar23 + -4));
LAB_00083218:
      pppppppiVar18 = pppppppiVar23 + -4;
    }
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar18);
    *ppppppppiVar6 = (int *******)"0000000000000000";
    ppppppppiVar6[1] = pppppppiVar18;
    local_98 = iVar8;
    if (iVar8 < 8) {
      iVar8 = iVar8 + 1;
      ppppppppiVar6 = ppppppppiVar6 + 2;
    }
    else if (local_94 == (int *******)0x0) {
      iVar8 = 1;
      local_98 = 0;
      ppppppppiVar6 = (int ********)local_68;
    }
    else {
      iVar8 = FUN_00082824(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_00083142;
      iVar8 = local_98 + 1;
      ppppppppiVar6 = (int ********)local_68;
    }
  }
  pppppppiVar10 = (int *******)((int)pppppppiVar10 - (int)local_d4);
  ppppppppiVar16 = (int ********)local_68;
  if ((int)pppppppiVar10 < 1) {
LAB_0008302a:
    local_94 = (int *******)((int)local_94 + (int)local_d4);
    *ppppppppiVar6 = (int *******)ppppppppiVar25;
    ppppppppiVar6[1] = local_d4;
    local_d4 = local_94;
    local_98 = iVar8;
    if (iVar8 < 8) goto LAB_000831be;
    if (local_94 == (int *******)0x0) {
      local_98 = 0;
    }
    else {
      iVar8 = FUN_00082824(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_00083142;
    }
  }
  else {
    iVar15 = local_98;
    if (0x10 < (int)pppppppiVar10) {
      do {
        while( true ) {
          pppppppiVar18 = pppppppiVar10;
          local_98 = iVar15 + 1;
          local_94 = local_94 + 4;
          *ppppppppiVar6 = (int *******)"0000000000000000";
          ppppppppiVar6[1] = (int *******)0x10;
          if (7 < local_98) break;
          iVar8 = iVar15 + 2;
          ppppppppiVar6 = ppppppppiVar6 + 2;
LAB_00082fe6:
          iVar15 = local_98;
          pppppppiVar10 = pppppppiVar18 + -4;
          if ((int)(pppppppiVar18 + -4) < 0x11) goto LAB_0008300e;
        }
        if (local_94 != (int *******)0x0) {
          iVar8 = FUN_00082824(param_1,param_2,&local_9c);
          if (iVar8 == 0) {
            iVar8 = local_98 + 1;
            ppppppppiVar6 = (int ********)local_68;
            goto LAB_00082fe6;
          }
          goto LAB_00083142;
        }
        iVar8 = 1;
        ppppppppiVar6 = (int ********)local_68;
        iVar15 = 0;
        pppppppiVar10 = pppppppiVar18 + -4;
      } while (0x10 < (int)(pppppppiVar18 + -4));
LAB_0008300e:
      pppppppiVar10 = pppppppiVar18 + -4;
    }
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar10);
    *ppppppppiVar6 = (int *******)"0000000000000000";
    ppppppppiVar6[1] = pppppppiVar10;
    if (iVar8 < 8) {
      iVar8 = iVar8 + 1;
      ppppppppiVar6 = ppppppppiVar6 + 2;
      goto LAB_0008302a;
    }
    if (local_94 != (int *******)0x0) {
      local_98 = iVar8;
      iVar8 = FUN_00082824(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_00083142;
      iVar8 = local_98 + 1;
      ppppppppiVar6 = (int ********)local_68;
      goto LAB_0008302a;
    }
    local_64[0] = local_d4;
    local_98 = 1;
    ppppppppiVar6 = (int ********)local_68;
    local_68 = (undefined  [4])ppppppppiVar25;
LAB_000831be:
    ppppppppiVar16 = ppppppppiVar6 + 2;
    local_94 = local_d4;
  }
  if (((uVar13 & 4) != 0) &&
     (pppppppiVar10 = (int *******)((int)pppppppiVar20 - (int)local_dc), 0 < (int)pppppppiVar10)) {
    iVar8 = local_98;
    if ((int)pppppppiVar10 < 0x11) {
      iVar15 = local_98 + 1;
    }
    else {
      do {
        while( true ) {
          local_98 = iVar8 + 1;
          local_94 = local_94 + 4;
          *ppppppppiVar16 = (int *******)0x856f0;
          ppppppppiVar16[1] = (int *******)0x10;
          if (7 < local_98) break;
          iVar15 = iVar8 + 2;
          ppppppppiVar16 = ppppppppiVar16 + 2;
LAB_0008307a:
          pppppppiVar10 = pppppppiVar10 + -4;
          iVar8 = local_98;
          if ((int)pppppppiVar10 < 0x11) goto LAB_000830a2;
        }
        if (local_94 != (int *******)0x0) {
          iVar8 = FUN_00082824(param_1,param_2,&local_9c);
          if (iVar8 == 0) {
            iVar15 = local_98 + 1;
            ppppppppiVar16 = (int ********)local_68;
            goto LAB_0008307a;
          }
          goto LAB_00083142;
        }
        pppppppiVar10 = pppppppiVar10 + -4;
        iVar15 = 1;
        iVar8 = 0;
        ppppppppiVar16 = (int ********)local_68;
      } while (0x10 < (int)pppppppiVar10);
    }
LAB_000830a2:
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar10);
    *ppppppppiVar16 = (int *******)0x856f0;
    ppppppppiVar16[1] = pppppppiVar10;
    local_98 = iVar15;
    if (7 < iVar15) {
      if (local_94 == (int *******)0x0) {
        if ((int)local_dc < (int)pppppppiVar20) {
          local_dc = pppppppiVar20;
        }
        local_c4 = local_c4 + (int)local_dc;
        goto LAB_00083186;
      }
      iVar8 = FUN_00082824(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_00083142;
    }
  }
  if ((int)local_dc < (int)pppppppiVar20) {
    local_dc = pppppppiVar20;
  }
  local_c4 = local_c4 + (int)local_dc;
  if ((local_94 != (int *******)0x0) &&
     (iVar8 = FUN_00082824(param_1,param_2,&local_9c), iVar8 != 0)) goto LAB_00083142;
LAB_00083186:
  local_98 = 0;
  ppppppppiVar6 = (int ********)local_68;
  goto LAB_00082902;
switchD_00082984_caseD_31:
  uVar11 = uVar14 - 0x30;
  pppppppiVar20 = (int *******)0x0;
  pppppppiVar10 = param_3;
  do {
    param_3 = (int *******)((int)pppppppiVar10 + 1);
    uVar14 = (uint)*(byte *)pppppppiVar10;
    pppppppiVar20 = (int *******)(uVar11 + (int)pppppppiVar20 * 10);
    uVar11 = uVar14 - 0x30;
    pppppppiVar10 = param_3;
  } while (uVar11 < 10);
  goto LAB_0008297a;
switchD_00082984_caseD_20:
  uVar14 = (uint)*(byte *)param_3;
  if (local_a1 == '\0') {
    local_a1 = ' ';
  }
  goto LAB_00082976;
}


////>>0x000834f0>>FUN_000834f0>>////

int FUN_000834f0(undefined4 param_1,int param_2)

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
  iVar1 = FUN_0008289c(param_1,local_488);
  if ((-1 < iVar1) && (iVar2 = FUN_00083850(param_1,local_488), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((int)((uint)local_47c << 0x19) < 0) {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x40;
  }
  return iVar1;
}


////>>0x0008356c>>FUN_0008356c>>////

undefined4 FUN_0008356c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  if ((Elf32_Rel_ARRAY_20070000[140].r_offset != 0) &&
     (*(int *)(Elf32_Rel_ARRAY_20070000[140].r_offset + 0x38) == 0)) {
    FUN_00083888();
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
          FUN_00083b10(param_1);
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
    FUN_00084018(param_1,param_2);
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


////>>0x000836d8>>FUN_000836d8>>////

/* WARNING: Removing unreachable block (ram,0x00083698) */
/* WARNING: Removing unreachable block (ram,0x00083630) */
/* WARNING: Removing unreachable block (ram,0x000836c4) */
/* WARNING: Removing unreachable block (ram,0x00083642) */
/* WARNING: Removing unreachable block (ram,0x00083648) */
/* WARNING: Removing unreachable block (ram,0x00083654) */
/* WARNING: Removing unreachable block (ram,0x0008366e) */
/* WARNING: Removing unreachable block (ram,0x0008364c) */
/* WARNING: Removing unreachable block (ram,0x00083686) */
/* WARNING: Removing unreachable block (ram,0x000836b8) */
/* WARNING: Removing unreachable block (ram,0x00083688) */

void FUN_000836d8(void)

{
  return;
}


////>>0x000836ec>>FUN_000836ec>>////

/* WARNING: Removing unreachable block (ram,0x00083698) */
/* WARNING: Removing unreachable block (ram,0x000836b8) */

void FUN_000836ec(void)

{
  dword *pdVar1;
  dword dVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  FUN_000841e4(6);
  UNRECOVERED_JUMPTABLE_00 = (code *)0x836fb;
  dVar2 = FUN_00080eec(1);
  if (Elf32_Rel_ARRAY_20070000[48].r_offset == 0) {
    Elf32_Rel_ARRAY_20070000[48].r_offset = 0x20070184;
  }
  iVar3 = *(int *)(Elf32_Rel_ARRAY_20070000[48].r_offset + 4);
  pdVar1 = (dword *)Elf32_Rel_ARRAY_20070000[48].r_offset;
  if (0x1f < iVar3) {
    pdVar1 = (dword *)FUN_000817f0(400);
    if (pdVar1 == (dword *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00083652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
      return;
    }
    *pdVar1 = Elf32_Rel_ARRAY_20070000[48].r_offset;
    pdVar1[1] = 0;
    iVar3 = 0;
    Elf32_Rel_ARRAY_20070000[48].r_offset = (dword)pdVar1;
    pdVar1[0x62] = 0;
    pdVar1[99] = 0;
  }
  pdVar1[1] = iVar3 + 1;
  pdVar1[iVar3 + 2] = dVar2;
                    /* WARNING: Could not recover jumptable at 0x00083696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(0);
  return;
}


////>>0x00083850>>FUN_00083850>>////

undefined4 FUN_00083850(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 unaff_r4;
  int iVar7;
  
  if ((param_1 != (int *)0x0) && (param_1[0xe] == 0)) {
    FUN_00083888();
  }
  if (*(short *)(param_2 + 3) == 0) {
    return 0;
  }
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
      iVar5 = (*(code *)param_2[9])(param_1,param_2[7],iVar7,iVar2,unaff_r4);
      iVar2 = iVar2 - iVar5;
      iVar7 = iVar7 + iVar5;
    } while (0 < iVar5);
LAB_000837c8:
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
      goto LAB_000837c8;
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
      goto LAB_00083774;
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
LAB_00083774:
  piVar1 = (int *)param_2[0xc];
  *param_1 = iVar7;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1 != param_2 + 0x10) {
    FUN_00083b10(param_1);
  }
  param_2[0xc] = 0;
  return 0;
}


////>>0x00083888>>FUN_00083888>>////

void FUN_00083888(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    *(undefined **)(param_1 + 0x3c) = &LAB_0008387c_1;
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
    FUN_00081f00(puVar1 + 0x17,0,8);
    puVar2 = *(undefined4 **)(param_1 + 8);
    puVar1[7] = puVar1;
    puVar1[8] = 0x84221;
    puVar1[9] = 0x84245;
    puVar1[10] = 0x8427d;
    puVar1[0xb] = &LAB_0008429c_1;
    *(undefined2 *)((int)puVar2 + 0xe) = 1;
    *(undefined2 *)(puVar2 + 3) = 9;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[0x19] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    FUN_00081f00(puVar2 + 0x17,0,8);
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    puVar2[7] = puVar2;
    puVar2[8] = 0x84221;
    puVar2[9] = 0x84245;
    puVar2[10] = 0x8427d;
    puVar2[0xb] = &LAB_0008429c_1;
    *(undefined2 *)(puVar1 + 3) = 0x12;
    *(undefined2 *)((int)puVar1 + 0xe) = 2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0x19] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    FUN_00081f00(puVar1 + 0x17,0,8);
    puVar1[7] = puVar1;
    puVar1[8] = 0x84221;
    puVar1[9] = 0x84245;
    puVar1[10] = 0x8427d;
    puVar1[0xb] = &LAB_0008429c_1;
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}


////>>0x0008397c>>FUN_0008397c>>////

void FUN_0008397c(void)

{
  return;
}


////>>0x00083980>>FUN_00083980>>////

void FUN_00083980(void)

{
  return;
}


////>>0x000839b4>>FUN_000839b4>>////

uint FUN_000839b4(undefined4 param_1,uint param_2,byte **param_3)

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
  iVar1 = FUN_0008400c();
  if ((iVar1 == 1) && (param_2 - 1 < 0xff)) {
    uVar3 = param_2 & 0xff;
    local_1c = (byte)uVar3;
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_0008434c(param_1,&local_1c,param_2,param_3 + 0x17);
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
        if (uVar3 != 10) goto LAB_00083a04;
      }
      iVar1 = FUN_000842a4(param_1,uVar3,param_3);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
    }
    else {
      **param_3 = (byte)uVar3;
      pbVar4 = *param_3;
LAB_00083a04:
      *param_3 = pbVar4 + 1;
    }
    if (uVar2 <= uVar5 + 1) {
      return param_2;
    }
    uVar3 = (uint)abStack_1b[uVar5];
    uVar5 = uVar5 + 1;
  } while( true );
}


////>>0x00083a74>>FUN_00083a74>>////

undefined4 FUN_00083a74(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00081f94();
  uVar2 = *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) & 0xfffffffc;
  iVar3 = ((uVar2 - param_2) + 0xfef & 0xfffff000) - 0x1000;
  if (0xfff < iVar3) {
    iVar1 = FUN_0008236c(param_1,0);
    if (iVar1 == Elf32_Rel_ARRAY_20070000[141].r_info + uVar2) {
      iVar1 = FUN_0008236c(param_1,-iVar3);
      if (iVar1 != -1) {
        DAT_2007121c = DAT_2007121c - iVar3;
        *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) = uVar2 - iVar3 | 1;
        FUN_00081f98(param_1);
        return 1;
      }
      iVar3 = FUN_0008236c(param_1,0);
      if (0xf < (int)(iVar3 - Elf32_Rel_ARRAY_20070000[141].r_info)) {
        DAT_2007121c = iVar3 - Elf32_Rel_ARRAY_20070000[270].r_offset;
        *(dword *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) =
             iVar3 - Elf32_Rel_ARRAY_20070000[141].r_info | 1;
      }
    }
  }
  FUN_00081f98(param_1);
  return 0;
}


////>>0x00083b10>>FUN_00083b10>>////

void FUN_00083b10(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  dword dVar4;
  int iVar5;
  uint uVar6;
  dword dVar7;
  uint uVar8;
  dword dVar9;
  
  if (param_2 == 0) {
    return;
  }
  FUN_00081f94();
  uVar3 = *(uint *)(param_2 + -4);
  dVar7 = param_2 - 8;
  uVar6 = uVar3 & 0xfffffffe;
  dVar4 = dVar7 + uVar6;
  uVar8 = *(uint *)(dVar4 + 4) & 0xfffffffc;
  if (Elf32_Rel_ARRAY_20070000[141].r_info == dVar4) {
    uVar8 = uVar8 + uVar6;
    if (-1 < (int)(uVar3 << 0x1f)) {
      dVar7 = dVar7 - *(int *)(param_2 + -8);
      iVar5 = *(int *)(dVar7 + 0xc);
      iVar1 = *(int *)(dVar7 + 8);
      uVar8 = uVar8 + *(int *)(param_2 + -8);
      *(int *)(iVar1 + 0xc) = iVar5;
      *(int *)(iVar5 + 8) = iVar1;
    }
    dVar4 = Elf32_Rel_ARRAY_20070000[269].r_info;
    *(uint *)(dVar7 + 4) = uVar8 | 1;
    Elf32_Rel_ARRAY_20070000[141].r_info = dVar7;
    if (dVar4 <= uVar8) {
      FUN_00083a74(param_1,DAT_20071218);
    }
  }
  else {
    *(uint *)(dVar4 + 4) = uVar8;
    if ((uVar3 & 1) == 0) {
      dVar7 = dVar7 - *(int *)(param_2 + -8);
      iVar1 = *(int *)(dVar7 + 8);
      uVar6 = uVar6 + *(int *)(param_2 + -8);
      if (iVar1 == 0x2007046c) {
        bVar2 = true;
      }
      else {
        iVar5 = *(int *)(dVar7 + 0xc);
        *(int *)(iVar1 + 0xc) = iVar5;
        *(int *)(iVar5 + 8) = iVar1;
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
    if (-1 < *(int *)(dVar4 + uVar8 + 4) << 0x1f) {
      uVar6 = uVar6 + uVar8;
      iVar1 = *(int *)(dVar4 + 8);
      if ((!bVar2) && (iVar1 == 0x2007046c)) {
        Elf32_Rel_ARRAY_20070000[142].r_info = dVar7;
        Elf32_Rel_ARRAY_20070000[143].r_offset = dVar7;
        *(undefined4 *)(dVar7 + 0xc) = 0x2007046c;
        *(undefined4 *)(dVar7 + 8) = 0x2007046c;
        *(uint *)(dVar7 + 4) = uVar6 | 1;
        *(uint *)(dVar7 + uVar6) = uVar6;
        goto LAB_00083ba4;
      }
      iVar5 = *(int *)(dVar4 + 0xc);
      *(int *)(iVar1 + 0xc) = iVar5;
      *(int *)(iVar5 + 8) = iVar1;
    }
    *(uint *)(dVar7 + 4) = uVar6 | 1;
    *(uint *)(dVar7 + uVar6) = uVar6;
    if (!bVar2) {
      if (uVar6 < 0x200) {
        uVar3 = uVar6 & 0xfffffff8;
        iVar1 = *(int *)((int)&Elf32_Rel_ARRAY_20070000[0x8d].r_info + uVar3);
        Elf32_Rel_ARRAY_20070000[141].r_offset =
             Elf32_Rel_ARRAY_20070000[141].r_offset | 1 << ((int)(uVar6 >> 3) >> 2 & 0xffU);
        *(int *)(dVar7 + 8) = iVar1;
        *(uint *)(dVar7 + 0xc) = uVar3 + 0x20070464;
        *(dword *)((int)&Elf32_Rel_ARRAY_20070000[0x8d].r_info + uVar3) = dVar7;
        *(dword *)(iVar1 + 0xc) = dVar7;
        FUN_00081f98(param_1);
        return;
      }
      uVar3 = uVar6 >> 9;
      if (uVar3 < 5) {
        iVar1 = (uVar6 >> 6) + 0x38;
        iVar5 = iVar1 * 2;
      }
      else if (uVar3 < 0x15) {
        iVar1 = uVar3 + 0x5b;
        iVar5 = iVar1 * 2;
      }
      else if (uVar3 < 0x55) {
        iVar1 = (uVar6 >> 0xc) + 0x6e;
        iVar5 = iVar1 * 2;
      }
      else if (uVar3 < 0x155) {
        iVar1 = (uVar6 >> 0xf) + 0x77;
        iVar5 = iVar1 * 2;
      }
      else if (uVar3 < 0x555) {
        iVar1 = (uVar6 >> 0x12) + 0x7c;
        iVar5 = iVar1 * 2;
      }
      else {
        iVar5 = 0xfc;
        iVar1 = 0x7e;
      }
      dVar9 = iVar5 * 4 + 0x20070464;
      dVar4 = (&Elf32_Rel_ARRAY_20070000[0x8d].r_info)[iVar5];
      if (dVar4 == dVar9) {
        Elf32_Rel_ARRAY_20070000[141].r_offset =
             Elf32_Rel_ARRAY_20070000[141].r_offset | 1 << (iVar1 >> 2 & 0xffU);
        dVar9 = dVar4;
      }
      else {
        do {
          if ((*(uint *)(dVar4 + 4) & 0xfffffffc) <= uVar6) break;
          dVar4 = *(dword *)(dVar4 + 8);
        } while (dVar9 != dVar4);
        dVar9 = *(dword *)(dVar4 + 0xc);
      }
      *(dword *)(dVar7 + 0xc) = dVar9;
      *(dword *)(dVar7 + 8) = dVar4;
      *(dword *)(dVar9 + 8) = dVar7;
      *(dword *)(dVar4 + 0xc) = dVar7;
    }
  }
LAB_00083ba4:
  FUN_00081f98(param_1);
  return;
}


////>>0x00083ca8>>FUN_00083ca8>>////

undefined4 FUN_00083ca8(undefined4 *param_1,uint *param_2,uint **param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_2c;
  
  if (param_3[2] != (uint *)0x0) {
    uVar4 = *(ushort *)(param_2 + 3);
    uVar5 = (uint)uVar4;
    if (((int)(uVar5 << 0x1c) < 0) && (param_2[4] != 0)) {
      puVar7 = *param_3;
    }
    else {
      iVar1 = FUN_0008356c(param_1,param_2);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      uVar4 = *(ushort *)(param_2 + 3);
      uVar5 = (uint)uVar4;
      puVar7 = *param_3;
    }
    if ((uVar4 & 2) == 0) {
      uVar2 = uVar5 & 2;
      uVar10 = uVar2;
      uVar8 = uVar2;
      local_2c = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
        uVar10 = 0;
        while( true ) {
          while (uVar2 == 0) {
            uVar10 = *puVar7;
            puVar6 = puVar7 + 1;
            puVar7 = puVar7 + 2;
            uVar2 = *puVar6;
          }
          uVar8 = param_2[2];
          if ((int)(uVar5 << 0x16) < 0) {
            if (uVar2 < uVar8) {
              uVar5 = *param_2;
              uVar8 = uVar2;
            }
            else if ((uVar5 & 0x480) == 0) {
              uVar5 = *param_2;
            }
            else {
              iVar1 = *param_2 - param_2[4];
              uVar8 = iVar1 + 1 + uVar2;
              uVar9 = (int)(param_2[5] * 3) / 2;
              if (uVar8 <= uVar9) {
                uVar8 = uVar9;
              }
              if ((int)(uVar5 << 0x15) < 0) {
                uVar9 = FUN_00081810(param_1,uVar8);
                if (uVar9 == 0) {
                  *param_1 = 0xc;
                  uVar4 = *(ushort *)(param_2 + 3);
                  goto LAB_00083da4;
                }
                FUN_00081d48(uVar9,param_2[4],iVar1);
                *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
              }
              else {
                uVar9 = FUN_00081fac(param_1);
                if (uVar9 == 0) {
                  FUN_00083b10(param_1,param_2[4]);
                  uVar4 = *(ushort *)(param_2 + 3) & 0xff7f;
                  *param_1 = 0xc;
                  goto LAB_00083da4;
                }
              }
              uVar5 = uVar9 + iVar1;
              param_2[4] = uVar9;
              param_2[5] = uVar8;
              *param_2 = uVar5;
              param_2[2] = uVar8 - iVar1;
              uVar8 = uVar2;
            }
            FUN_00081e34(uVar5,uVar10,uVar8);
            param_2[2] = param_2[2] - uVar8;
            *param_2 = *param_2 + uVar8;
            uVar8 = uVar2;
          }
          else if ((param_2[4] < *param_2) || (uVar5 = param_2[5], uVar2 < uVar5)) {
            if (uVar2 < uVar8) {
              uVar8 = uVar2;
            }
            FUN_00081e34(*param_2,uVar10,uVar8);
            uVar5 = param_2[2];
            param_2[2] = uVar5 - uVar8;
            *param_2 = *param_2 + uVar8;
            if ((uVar5 - uVar8 == 0) && (iVar1 = FUN_00083850(param_1,param_2), iVar1 != 0))
            goto LAB_00083da2;
          }
          else {
            uVar8 = 0x7fffffff;
            if (uVar2 < 0x7fffffff) {
              uVar8 = uVar2;
            }
            uVar8 = (*(code *)param_2[9])(param_1,param_2[7],uVar10,(uVar8 / uVar5) * uVar5);
            if ((int)uVar8 < 1) goto LAB_00083da2;
          }
          puVar6 = param_3[2];
          uVar10 = uVar10 + uVar8;
          uVar2 = uVar2 - uVar8;
          param_3[2] = (uint *)((int)puVar6 - uVar8);
          if ((uint *)((int)puVar6 - uVar8) == (uint *)0x0) break;
          uVar5 = (uint)*(ushort *)(param_2 + 3);
        }
      }
      else {
        do {
          while (uVar2 == 0) {
            uVar8 = *puVar7;
            uVar2 = puVar7[1];
            local_2c = 0;
            puVar7 = puVar7 + 2;
          }
          if (local_2c == 0) {
            iVar1 = FUN_000840f8(uVar8,10,uVar2);
            if (iVar1 == 0) {
              uVar10 = uVar2 + 1;
              local_2c = 1;
            }
            else {
              uVar10 = (iVar1 + 1) - uVar8;
              local_2c = 1;
            }
          }
          uVar9 = *param_2;
          uVar5 = uVar10;
          if (uVar2 <= uVar10) {
            uVar5 = uVar2;
          }
          uVar3 = param_2[5];
          if ((param_2[4] < uVar9) && (uVar11 = param_2[2] + uVar3, (int)uVar11 < (int)uVar5)) {
            FUN_00081e34(uVar9,uVar8,uVar11);
            *param_2 = *param_2 + uVar11;
            iVar1 = FUN_00083850(param_1,param_2);
            if (iVar1 != 0) goto LAB_00083da2;
          }
          else if ((int)uVar5 < (int)uVar3) {
            FUN_00081e34(uVar9,uVar8,uVar5);
            param_2[2] = param_2[2] - uVar5;
            *param_2 = uVar5 + *param_2;
            uVar11 = uVar5;
          }
          else {
            uVar11 = (*(code *)param_2[9])(param_1,param_2[7],uVar8,uVar3);
            if ((int)uVar11 < 1) goto LAB_00083da2;
          }
          uVar10 = uVar10 - uVar11;
          if (uVar10 == 0) {
            iVar1 = FUN_00083850(param_1,param_2);
            if (iVar1 != 0) goto LAB_00083da2;
            local_2c = 0;
          }
          puVar6 = param_3[2];
          uVar8 = uVar8 + uVar11;
          uVar2 = uVar2 - uVar11;
          param_3[2] = (uint *)((int)puVar6 - uVar11);
        } while ((uint *)((int)puVar6 - uVar11) != (uint *)0x0);
      }
    }
    else {
      uVar2 = 0;
      uVar5 = 0;
      do {
        while( true ) {
          uVar10 = uVar5;
          if (0x7ffffbff < uVar5) {
            uVar10 = 0x7ffffc00;
          }
          if (uVar5 != 0) break;
          uVar2 = *puVar7;
          uVar5 = puVar7[1];
          puVar7 = puVar7 + 2;
        }
        iVar1 = (*(code *)param_2[9])(param_1,param_2[7],uVar2,uVar10);
        if (iVar1 < 1) {
LAB_00083da2:
          uVar4 = *(ushort *)(param_2 + 3);
LAB_00083da4:
          *(ushort *)(param_2 + 3) = uVar4 | 0x40;
          return 0xffffffff;
        }
        puVar6 = param_3[2];
        uVar2 = uVar2 + iVar1;
        uVar5 = uVar5 - iVar1;
        param_3[2] = (uint *)((int)puVar6 - iVar1);
      } while ((uint *)((int)puVar6 - iVar1) != (uint *)0x0);
    }
  }
  return 0;
}


////>>0x00084004>>FUN_00084004>>////

undefined4 FUN_00084004(void)

{
  return 0x20070878;
}


////>>0x0008400c>>FUN_0008400c>>////

dword FUN_0008400c(void)

{
  return Elf32_Rel_ARRAY_20070000[275].r_offset;
}


////>>0x00084018>>FUN_00084018>>////

void FUN_00084018(int param_1,int *param_2)

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
    iVar2 = FUN_00084494(param_1,(int)*(short *)((int)param_2 + 0xe),auStack_54);
    if (-1 < iVar2) {
      bVar5 = (local_50 & 0xf000) == 0x2000;
      if (((local_50 & 0xf000) == 0x8000) && (param_2[10] == 0x8427d)) {
        iVar2 = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x400;
        param_2[0x13] = 0x400;
      }
      else {
        iVar2 = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x800;
      }
      goto LAB_00084074;
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
LAB_00084074:
  iVar3 = FUN_00081810(param_1,iVar2);
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
    *(undefined **)(param_1 + 0x3c) = &LAB_0008387c_1;
    *(ushort *)(param_2 + 3) = uVar1 | 0x80;
    *param_2 = iVar3;
    param_2[4] = iVar3;
    param_2[5] = iVar2;
    if ((bVar5) && (iVar2 = FUN_000844bc(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0))
    {
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 1;
    }
  }
  return;
}


////>>0x000840f8>>FUN_000840f8>>////

uint * FUN_000840f8(uint *param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  
  if (((uint)param_1 & 3) == 0) {
LAB_00084128:
    if (3 < param_3) {
      puVar3 = param_1;
      do {
        uVar1 = *puVar3 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
        param_1 = puVar3;
        if ((uVar1 + 0xfefefeff & ~uVar1 & 0x80808080) != 0) break;
        param_3 = param_3 - 4;
        param_1 = puVar3 + 1;
        puVar3 = puVar3 + 1;
      } while (3 < param_3);
    }
    if (param_3 == 0) {
      param_1 = (uint *)0x0;
    }
    else if (*(char *)param_1 != param_2) {
      iVar2 = 0;
      do {
        param_1 = (uint *)((int)param_1 + 1);
        bVar4 = iVar2 == param_3 - 1;
        iVar2 = iVar2 + 1;
        if (bVar4) goto LAB_00084150;
      } while (*(char *)param_1 != param_2);
    }
  }
  else if (param_3 == 0) {
LAB_00084150:
    param_1 = (uint *)0x0;
  }
  else if (*(char *)param_1 != param_2) {
    puVar3 = (uint *)((int)param_1 + 1);
    param_3 = param_3 - 1;
    do {
      param_1 = puVar3;
      if (((uint)param_1 & 3) == 0) goto LAB_00084128;
      if (param_3 == 0) goto LAB_00084150;
      puVar3 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    } while (*(char *)param_1 != param_2);
  }
  return param_1;
}


////>>0x000841e4>>FUN_000841e4>>////

int FUN_000841e4(uint param_1)

{
  dword dVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  undefined4 uVar5;
  
  dVar1 = Elf32_Rel_ARRAY_20070000[140].r_offset;
  uVar5 = 0x20070460;
  if (0x1f < param_1) {
    *(undefined4 *)Elf32_Rel_ARRAY_20070000[140].r_offset = 0x16;
    return -1;
  }
  iVar3 = *(int *)(Elf32_Rel_ARRAY_20070000[140].r_offset + 0x2dc);
  if ((iVar3 == 0) || (pcVar4 = *(code **)(iVar3 + param_1 * 4), pcVar4 == (code *)0x0)) {
    uVar2 = thunk_FUN_00080efe(Elf32_Rel_ARRAY_20070000[140].r_offset);
    DAT_20071244 = 0;
    iVar3 = FUN_00080efc(uVar2,param_1,param_1,0,uVar5,unaff_r4,unaff_r5,in_lr);
    if ((iVar3 == -1) && (DAT_20071244 != 0)) {
      *(int *)dVar1 = DAT_20071244;
      return -1;
    }
    return iVar3;
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 != (code *)0xffffffff) {
    *(undefined4 *)(iVar3 + param_1 * 4) = 0;
    (*pcVar4)(param_1);
    return 0;
  }
  *(undefined4 *)Elf32_Rel_ARRAY_20070000[140].r_offset = 0x16;
  return 1;
}


////>>0x0008421c>>thunk_FUN_00080efe>>////

undefined4 thunk_FUN_00080efe(void)

{
  return 0xffffffff;
}


////>>0x00084220>>FUN_00084220>>////

void FUN_00084220(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00084508(param_1,(int)*(short *)(param_2 + 0xe));
  if (-1 < iVar1) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + iVar1;
    return;
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  return;
}


////>>0x00084244>>FUN_00084244>>////

void FUN_00084244(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  uVar2 = *(ushort *)(param_2 + 0xc);
  if ((int)((uint)uVar2 << 0x17) < 0) {
    FUN_000844e0(param_1,(int)*(short *)(param_2 + 0xe),0,2);
    uVar2 = *(ushort *)(param_2 + 0xc);
  }
  *(ushort *)(param_2 + 0xc) = uVar2 & 0xefff;
  DAT_20071244 = 0;
  iVar1 = FUN_00080ec8((int)*(short *)(param_2 + 0xe),param_3,param_4,param_4,unaff_r4,unaff_r5,
                       unaff_r6,in_lr);
  if ((iVar1 == -1) && (DAT_20071244 != 0)) {
    *param_1 = DAT_20071244;
    return;
  }
  return;
}


////>>0x0008427c>>FUN_0008427c>>////

void FUN_0008427c(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_000844e0(param_1,(int)*(short *)(param_2 + 0xe));
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


////>>0x000842a4>>FUN_000842a4>>////

uint FUN_000842a4(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    FUN_00083888();
  }
  uVar1 = *(ushort *)(param_3 + 3);
  uVar2 = (uint)uVar1;
  param_3[2] = param_3[6];
  if ((-1 < (int)(uVar2 << 0x1c)) || (iVar4 = param_3[4], iVar4 == 0)) {
    iVar4 = FUN_0008356c(param_1,param_3,uVar1,uVar2,param_4);
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
LAB_000842d6:
      iVar4 = iVar4 + 1;
      goto LAB_000842d8;
    }
  }
  else {
    param_3[0x19] = param_3[0x19] & 0xffffdfff;
    puVar3 = (undefined *)*param_3;
    *(ushort *)(param_3 + 3) = uVar1 | 0x2000;
    iVar4 = (int)puVar3 - iVar4;
    if (iVar4 < (int)param_3[5]) goto LAB_000842d6;
  }
  iVar4 = FUN_00083850(param_1,param_3);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  puVar3 = (undefined *)*param_3;
  iVar4 = 1;
LAB_000842d8:
  param_3[2] = param_3[2] + -1;
  *param_3 = puVar3 + 1;
  *puVar3 = (char)param_2;
  if (((param_3[5] == iVar4) ||
      (((int)((uint)*(ushort *)(param_3 + 3) << 0x1f) < 0 && (param_2 == 10)))) &&
     (iVar4 = FUN_00083850(param_1,param_3), iVar4 != 0)) {
    return 0xffffffff;
  }
  return param_2;
}


////>>0x0008434c>>FUN_0008434c>>////

void FUN_0008434c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  dword dVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_24 [12];
  
  dVar1 = Elf32_Rel_ARRAY_20070000[275].r_info;
  if (param_2 == 0) {
    uVar2 = FUN_00084004();
    iVar3 = (*(code *)dVar1)(param_1,auStack_24,0,uVar2,param_4);
  }
  else {
    uVar2 = FUN_00084004();
    iVar3 = (*(code *)dVar1)(param_1,param_2,param_3,uVar2,param_4);
  }
  if (iVar3 == -1) {
    *param_4 = 0;
    *param_1 = 0x8a;
  }
  return;
}


////>>0x0008439c>>FUN_0008439c>>////

undefined4 FUN_0008439c(undefined4 *param_1,undefined *param_2,uint param_3)

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


////>>0x00084484>>FUN_00084484>>////

undefined4 FUN_00084484(int param_1)

{
  dword dVar1;
  undefined4 uVar2;
  int iVar3;
  
  dVar1 = Elf32_Rel_ARRAY_20070000[140].r_offset;
  if (param_1 != 0) {
    if ((Elf32_Rel_ARRAY_20070000[140].r_offset != 0) &&
       (*(int *)(Elf32_Rel_ARRAY_20070000[140].r_offset + 0x38) == 0)) {
      FUN_00083888();
    }
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar2 = FUN_00083850(dVar1,param_1);
      if ((*(code **)(param_1 + 0x2c) != (code *)0x0) &&
         (iVar3 = (**(code **)(param_1 + 0x2c))(dVar1,*(undefined4 *)(param_1 + 0x1c)), iVar3 < 0))
      {
        uVar2 = 0xffffffff;
      }
      if ((int)((uint)*(ushort *)(param_1 + 0xc) << 0x18) < 0) {
        FUN_00083b10(dVar1,*(undefined4 *)(param_1 + 0x10));
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        if (*(int *)(param_1 + 0x30) != param_1 + 0x40) {
          FUN_00083b10(dVar1);
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      if (*(int *)(param_1 + 0x44) != 0) {
        FUN_00083b10(dVar1);
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      FUN_0008397c();
      *(undefined2 *)(param_1 + 0xc) = 0;
      FUN_00083980();
      return uVar2;
    }
  }
  return 0;
}


////>>0x00084494>>FUN_00084494>>////

void FUN_00084494(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_20071244 = 0;
  iVar1 = FUN_00080eb0(param_2,param_3,param_3,0,param_4);
  if ((iVar1 == -1) && (DAT_20071244 != 0)) {
    *param_1 = DAT_20071244;
    return;
  }
  return;
}


////>>0x000844bc>>FUN_000844bc>>////

void FUN_000844bc(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_20071244 = 0;
  iVar1 = FUN_00080eba(param_2);
  if ((iVar1 == -1) && (DAT_20071244 != 0)) {
    *param_1 = DAT_20071244;
    return;
  }
  return;
}


////>>0x000844e0>>FUN_000844e0>>////

void FUN_000844e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_20071244 = 0;
  iVar1 = FUN_00080ebe(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_20071244 != 0)) {
    *param_1 = DAT_20071244;
    return;
  }
  return;
}


////>>0x00084508>>FUN_00084508>>////

void FUN_00084508(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_20071244 = 0;
  iVar1 = FUN_00080ec2(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_20071244 != 0)) {
    *param_1 = DAT_20071244;
    return;
  }
  return;
}


////>>0x00084530>>FUN_00084530>>////

int FUN_00084530(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_1 = -1;
    }
    return param_1;
  }
  iVar1 = FUN_0008458c();
  return iVar1;
}


////>>0x0008455c>>FUN_0008455c>>////

void FUN_0008455c(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_000845c0();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = (param_2 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar1);
  return;
}


////>>0x0008458c>>FUN_0008458c>>////

void FUN_0008458c(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00084860();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = (param_2 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar1);
  return;
}


////>>0x000845c0>>FUN_000845c0>>////

undefined8 FUN_000845c0(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x00084860>>FUN_00084860>>////

ulonglong FUN_00084860(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x00085844>>FUN_00085844>>////

void FUN_00085844(void)

{
  return;
}


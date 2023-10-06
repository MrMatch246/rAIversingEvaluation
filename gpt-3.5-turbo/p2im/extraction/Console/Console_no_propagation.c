java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x00000410>>FUN_00000410>>////

void FUN_00000410(void)

{
  FUN_00000df4();
  return;
}


////>>0x00000428>>FUN_00000428>>////

dword FUN_00000428(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  dword local_c;
  
  uVar1 = FUN_00000cd0();
  local_c = Elf32_Rel_ARRAY_1fff0200[0].r_offset;
  if ((param_2 + Elf32_Rel_ARRAY_1fff0200[0].r_offset < 0x20030001) &&
     (0x1fff0def < param_2 + Elf32_Rel_ARRAY_1fff0200[0].r_offset)) {
    Elf32_Rel_ARRAY_1fff0200[0].r_offset = param_2 + Elf32_Rel_ARRAY_1fff0200[0].r_offset;
  }
  else {
    *param_1 = 0xc;
    local_c = 0xffffffff;
  }
  FUN_00000d0c(uVar1);
  return local_c;
}


////>>0x00000490>>FUN_00000490>>////

undefined4 FUN_00000490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00000e14(param_3,param_4);
  return uVar1;
}


////>>0x000004f2>>FUN_000004f2>>////

undefined4 FUN_000004f2(undefined4 *param_1)

{
  *param_1 = 0x13;
  return 0xffffffff;
}


////>>0x00000514>>FUN_00000514>>////

undefined4 FUN_00000514(undefined4 *param_1)

{
  *param_1 = 0x13;
  return 0xffffffff;
}


////>>0x00000534>>FUN_00000534>>////

undefined4 FUN_00000534(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x00000566>>FUN_00000566>>////

int FUN_00000566(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  
  bVar2 = (byte)param_1;
  bVar3 = (byte)((uint)param_1 >> 8);
  bVar4 = (byte)((uint)param_1 >> 0x10);
  bVar1 = (byte)((uint)param_1 >> 0x18);
  iVar5 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1
                                  | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) <<
                                1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                  (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1
                                  | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) <<
                                1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                  (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1
                                  | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) <<
                                1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                  (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1
                                  | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) <<
                                1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
  if (param_1 == 0) {
    iVar5 = -1;
  }
  return iVar5;
}


////>>0x0000058e>>FUN_0000058e>>////

void FUN_0000058e(int *param_1,undefined4 *param_2)

{
  if (*param_1 == 0) {
    *param_2 = param_2;
  }
  else {
    *param_2 = *(undefined4 *)*param_1;
    *(undefined4 **)*param_1 = param_2;
  }
  *param_1 = (int)param_2;
  return;
}


////>>0x000005ca>>FUN_000005ca>>////

undefined4 * FUN_000005ca(int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = *(undefined4 **)*param_1;
    if (puVar1 == (undefined4 *)*param_1) {
      *param_1 = 0;
    }
    else {
      *(undefined4 *)*param_1 = *puVar1;
    }
  }
  return puVar1;
}


////>>0x00000610>>FUN_00000610>>////

undefined4 FUN_00000610(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1fff03dc;
  DAT_1fff0354 = 0;
  iVar2 = FUN_00000566(DAT_1fff0424);
  iVar2 = **(int **)(&DAT_1fff03e4 + iVar2 * 4);
  if (iVar1 == iVar2 + -8) {
    uVar3 = 0;
  }
  else {
    if ((iVar1 != 0) && (*(char *)(iVar1 + 4) == '\t')) {
      *(undefined *)(iVar1 + 4) = 10;
    }
    *(undefined *)(iVar2 + -4) = 9;
    DAT_1fff03e0 = *(undefined2 *)(iVar2 + -2);
    uVar3 = 1;
    DAT_1fff03dc = iVar2 + -8;
  }
  return uVar3;
}


////>>0x00000698>>FUN_00000698>>////

void FUN_00000698(int param_1,uint param_2)

{
  if (param_2 < 9) {
    if ((8 < *(byte *)(param_1 + 4)) &&
       (FUN_000005ca(&DAT_1fff03e4 + (uint)*(byte *)(param_1 + 5) * 4),
       *(int *)(&DAT_1fff03e4 + (uint)*(byte *)(param_1 + 5) * 4) == 0)) {
      DAT_1fff0424 = DAT_1fff0424 & ~(1 << *(sbyte *)(param_1 + 5));
    }
  }
  else if (*(byte *)(param_1 + 4) < 9) {
    FUN_0000058e(&DAT_1fff03e4 + (uint)*(byte *)(param_1 + 5) * 4,param_1 + 8);
    DAT_1fff0424 = DAT_1fff0424 | 1 << *(sbyte *)(param_1 + 5);
  }
  *(char *)(param_1 + 4) = (char)param_2;
  return;
}


////>>0x00000738>>FUN_00000738>>////

void FUN_00000738(ushort param_1)

{
  int iVar1;
  
  if ((*(byte *)(DAT_1fff03dc + 4) < 9) || (param_1 < *(byte *)(DAT_1fff03dc + 5))) {
    iVar1 = FUN_00000d2a();
    if (iVar1 == 0) {
      FUN_0000093c();
    }
    else {
      DAT_1fff0354 = 1;
    }
  }
  return;
}


////>>0x00000794>>FUN_00000794>>////

int * FUN_00000794(void)

{
  int extraout_r1;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  
  FUN_00000cd0();
  *(undefined4 *)(&DAT_1fff0358 + DAT_1fff03e0 * 4) = 0;
  DAT_1fff0350 = DAT_1fff0350 + -1;
  FUN_00000698(DAT_1fff03dc,0);
  puVar2 = &DAT_1fff03dc;
  iVar1 = 0;
  DAT_1fff03dc = 0;
  FUN_00000930();
  uVar3 = (int)puVar2 + iVar1 & 0xfffffffc;
  piStack_14 = (int *)(uVar3 - 4);
  *piStack_14 = 0x77777777;
  if (((uint)piStack_14 & 7) != 0) {
    piStack_14 = (int *)(uVar3 - 8);
    *piStack_14 = 0x88888888;
  }
  piStack_14[-1] = 0x1000000;
  piStack_14[-2] = iVar1 << 0xd;
  piStack_14[-3] = 0x795;
  piStack_14 = piStack_14 + -4;
  *piStack_14 = 0;
  for (iStack_18 = 3; 0 < iStack_18; iStack_18 = iStack_18 + -1) {
    piStack_14 = piStack_14 + -1;
    *piStack_14 = iStack_18;
  }
  piStack_14 = piStack_14 + -1;
  *piStack_14 = extraout_r1;
  for (iStack_1c = 0xb; 3 < iStack_1c; iStack_1c = iStack_1c + -1) {
    piStack_14 = piStack_14 + -1;
    *piStack_14 = iStack_1c;
  }
  piStack_14[-1] = -3;
  return piStack_14 + -1;
}


////>>0x000007dc>>FUN_000007dc>>////

int * FUN_000007dc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int local_14;
  int local_10;
  int *local_c;
  
  uVar1 = param_4 + param_3 & 0xfffffffc;
  local_c = (int *)(uVar1 - 4);
  *local_c = 0x77777777;
  if (((uint)local_c & 7) != 0) {
    local_c = (int *)(uVar1 - 8);
    *local_c = 0x88888888;
  }
  local_c[-1] = 0x1000000;
  local_c[-2] = param_1;
  local_c[-3] = 0x795;
  local_c = local_c + -4;
  *local_c = 0;
  for (local_10 = 3; 0 < local_10; local_10 = local_10 + -1) {
    local_c = local_c + -1;
    *local_c = local_10;
  }
  local_c = local_c + -1;
  *local_c = param_2;
  for (local_14 = 0xb; 3 < local_14; local_14 = local_14 + -1) {
    local_c = local_c + -1;
    *local_c = local_14;
  }
  local_c[-1] = -3;
  return local_c + -1;
}


////>>0x000008b8>>FUN_000008b8>>////

int FUN_000008b8(void)

{
  Elf32_Rel *local_c;
  
  for (local_c = (Elf32_Rel *)&DAT_1fff0000;
      (local_c->r_offset == 0xe7fee7fe && (local_c < Elf32_Rel_ARRAY_1fff0200));
      local_c = (Elf32_Rel *)&local_c->r_info) {
  }
  return ((int)Elf32_Rel_ARRAY_1fff0200 - (int)local_c >> 2) << 2;
}


////>>0x00000900>>FUN_00000900>>////

undefined4 FUN_00000900(void)

{
  undefined4 uVar1;
  
  uVar1 = getMainStackPointer();
  return uVar1;
}


////>>0x0000091c>>FUN_0000091c>>////

undefined4 FUN_0000091c(void)

{
  return 0x1fff0000;
}


////>>0x00000930>>FUN_00000930>>////

void FUN_00000930(void)

{
  FUN_00000cf0();
  software_interrupt(1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x0000093c>>FUN_0000093c>>////



void FUN_0000093c(void)

{
  _DAT_e000ed04 = _DAT_e000ed04 | 0x10000000;
  return;
}


////>>0x00000990>>FUN_00000990>>////

void FUN_00000990(void)

{
  return;
}


////>>0x0000099c>>entry>>////

void entry(void)

{
  undefined4 uStack_18;
  undefined4 *local_14;
  dword *local_10;
  Elf32_Rel *local_c;
  
  local_14 = &uStack_18;
  local_10 = (dword *)&DAT_00007c60;
  FUN_00000db0();
  local_c = (Elf32_Rel *)&DAT_1fff0000;
  while (local_c < &uStack_18) {
    local_c->r_offset = 0xe7fee7fe;
    local_c = (Elf32_Rel *)((int)local_c + 4);
  }
  local_c = Elf32_Rel_ARRAY_1fff0200;
  while (local_c < (Elf32_Rel *)&DAT_1fff0350) {
    local_c->r_offset = *local_10;
    local_10 = local_10 + 1;
    local_c = (Elf32_Rel *)&local_c->r_info;
  }
  local_c = (Elf32_Rel *)&DAT_1fff0350;
  while (local_c < (undefined4 *)0x1fff0df0) {
    local_c->r_offset = 0;
    local_c = (Elf32_Rel *)((int)local_c + 4);
  }
  FUN_00000990();
  FUN_00000e64();
  FUN_0000459c();
  FUN_00000f8c();
  return;
}


////>>0x00000a30>>FUN_00000a30>>////

undefined * FUN_00000a30(void)

{
  int in_r3;
  
  FUN_00000f04(4,"NMI HANDLER");
  return &stack0xe000ffe0 + -*(int *)(in_r3 + 0x4c);
}


////>>0x00000cc0>>FUN_00000cc0>>////

undefined4 FUN_00000cc0(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  FUN_00000f04(10,"DUMMY HANDLER");
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  return uVar2;
}


////>>0x00000cd0>>FUN_00000cd0>>////

undefined4 FUN_00000cd0(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  return uVar2;
}


////>>0x00000cf0>>FUN_00000cf0>>////

undefined4 FUN_00000cf0(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  enableIRQinterrupts();
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  return uVar2;
}


////>>0x00000d0c>>FUN_00000d0c>>////

void FUN_00000d0c(uint param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((param_1 & 1) == 1);
  }
  return;
}


////>>0x00000d2a>>FUN_00000d2a>>////

uint FUN_00000d2a(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1f;
  }
  return uVar2;
}


////>>0x00000d44>>FUN_00000d44>>////

int FUN_00000d44(uint param_1,int param_2)

{
  return param_2 * 4 + (param_1 & 0xf0000000 | (param_1 & 0xfffff) << 5) + 0x2000000;
}


////>>0x00000d76>>FUN_00000d76>>////

void FUN_00000d76(undefined4 param_1,undefined param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00000d44(param_1,param_2);
  *puVar1 = 0;
  return;
}


////>>0x00000d9c>>FUN_00000d9c>>////

void FUN_00000d9c(void)

{
  FUN_00000d76(0x40048040,0);
  return;
}


////>>0x00000db0>>FUN_00000db0>>////

void FUN_00000db0(void)

{
  FUN_00000dcc();
  FUN_00000d9c();
  return;
}


////>>0x00000dc0>>FUN_00000dc0>>////

void FUN_00000dc0(void)

{
  FUN_00000cc0();
  return;
}


////>>0x00000dcc>>FUN_00000dcc>>////



void FUN_00000dcc(void)

{
  _DAT_4005200e = 0xd928;
  _DAT_40052000 = 0xd2;
  return;
}


////>>0x00000df4>>FUN_00000df4>>////

void FUN_00000df4(void)

{
  FUN_000013b8(0,0x1c200,0x12b5,0x1fff0204);
  return;
}


////>>0x00000e14>>FUN_00000e14>>////

undefined4 FUN_00000e14(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000012e2(0x1fff0204,param_1,param_2);
  return uVar1;
}


////>>0x00000e38>>FUN_00000e38>>////

undefined4 FUN_00000e38(undefined4 param_1,undefined4 param_2)

{
  FUN_000015d0(0,param_1,param_2);
  return param_2;
}


////>>0x00000e58>>FUN_00000e58>>////

void FUN_00000e58(void)

{
  FUN_00000cd0();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00000e64>>FUN_00000e64>>////



void FUN_00000e64(void)

{
  _DAT_40048038 = _DAT_40048038 | 0x200;
  _DAT_40049048 = _DAT_40049048 & 0xfefff8ff;
  FUN_00001274();
  FUN_00001eea(0x2056,0x80);
  FUN_00001eea(0x511a,0x80);
  FUN_00001eea(0x2055,0x80);
  FUN_00001ff6(0x2056);
  FUN_00001ff6(0x511a);
  FUN_00001ff6(0x2055);
  return;
}


////>>0x00000ed8>>FUN_00000ed8>>////

void FUN_00000ed8(void)

{
  undefined4 in_lr;
  
  FUN_00004c84(&DAT_00006f58,in_lr);
  return;
}


////>>0x00000ef8>>FUN_00000ef8>>////

void FUN_00000ef8(void)

{
  return;
}


////>>0x00000f04>>FUN_00000f04>>////

void FUN_00000f04(char param_1,undefined4 param_2)

{
  undefined4 uStack_18;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_10;
  char local_9;
  
  local_10 = param_2;
  local_9 = param_1;
  if (DAT_1fff0468 == 0) {
    DAT_1fff0468 = 1;
    if (param_1 == '\x03') {
      FUN_00000ed8();
    }
    FUN_00004c84("*** RIOT kernel panic:\n%s\n\n",local_10);
    FUN_0000211c();
    FUN_00004c84(&DAT_00006f78);
    FUN_00004c84("*** halted.\n\n");
  }
  FUN_00000cd0();
  FUN_00000ef8();
  UNRECOVERED_JUMPTABLE = (code *)0xf4d;
  FUN_00000e58();
  uStack_18 = (int)&uStack_18 + 1;
  FUN_00002400();
  FUN_00004c84("main(): This is RIOT! (Version: 2018.04-vm-HEAD)\n");
  FUN_000023a4();
                    /* WARNING: Could not recover jumptable at 0x00000f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}


////>>0x00000f8c>>FUN_00000f8c>>////

void FUN_00000f8c(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  dword local_10;
  
  FUN_00000cd0();
  local_10 = Elf32_Rel_ARRAY_1fff0200[3].r_info;
  local_14 = 0;
  local_18 = 0xf81;
  FUN_000010d4(&DAT_1fff0a6c,0x100,0xf,0xc);
  local_10 = Elf32_Rel_ARRAY_1fff0200[3].r_offset;
  local_14 = 0;
  local_18 = 0xf5d;
  uVar3 = 0xc;
  FUN_000010d4(&DAT_1fff046c,0x600,7);
  uStack_1c = 0xfd3;
  uVar1 = FUN_00000930();
  uVar1 = uVar1 >> 0x1e;
  puVar2 = (undefined4 *)(uVar3 * 0x100);
  iStack_24 = (uVar3 >> 0x1d) << 0x11;
  piStack_20 = &iStack_24;
  if ((uVar1 & uVar1 - 1) != 0) {
    FUN_00000f04(3,"FAILED ASSERTION.");
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = uVar1 - 1;
  return;
}


////>>0x00000fec>>FUN_00000fec>>////

void FUN_00000fec(undefined4 *param_1,uint param_2)

{
  if ((param_2 & param_2 - 1) != 0) {
    FUN_00000f04(3,"FAILED ASSERTION.");
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2 - 1;
  return;
}


////>>0x00001034>>FUN_00001034>>////

void FUN_00001034(int **param_1,int param_2)

{
  int **local_1c;
  
  if (8 < *(byte *)(param_2 + 4)) {
    FUN_00000f04(3,"FAILED ASSERTION.");
  }
  for (local_1c = param_1;
      (*local_1c != (int *)0x0 && (*(byte *)((int)*local_1c + -3) <= *(byte *)(param_2 + 5)));
      local_1c = (int **)*local_1c) {
  }
  *(int **)(param_2 + 8) = *local_1c;
  *local_1c = (int *)(int **)(param_2 + 8);
  return;
}


////>>0x000010a0>>FUN_000010a0>>////

int FUN_000010a0(int *param_1)

{
  int *local_c;
  
  for (local_c = param_1; (int *)*local_c == local_c; local_c = local_c + 1) {
  }
  return (int)local_c - (int)param_1;
}


////>>0x000010d4>>FUN_000010d4>>////

int FUN_000010d4(uint param_1,int param_2,byte param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_30;
  uint local_2c;
  uint local_10;
  short local_c;
  short local_a;
  
  if (param_3 < 0x10) {
    local_30 = param_2;
    local_2c = param_1;
    if ((param_1 & 3) != 0) {
      local_30 = 4 - (param_1 & 3);
      local_2c = local_30 + param_1;
      local_30 = param_2 - local_30;
    }
    uVar4 = local_30 - 0x30U & 0xfffffffc;
    puVar5 = (undefined4 *)(uVar4 + local_2c);
    if ((param_4 & 8) == 0) {
      *(uint *)local_2c = local_2c;
    }
    else {
      for (local_10 = local_2c; local_10 < uVar4 + local_2c; local_10 = local_10 + 4) {
        *(uint *)local_10 = local_10;
      }
    }
    uVar1 = FUN_00000cd0();
    local_a = 0;
    for (local_c = 1; local_c < 0x21; local_c = local_c + 1) {
      if (*(int *)(&DAT_1fff0358 + local_c * 4) == 0) {
        local_a = local_c;
        break;
      }
    }
    if (local_a == 0) {
      FUN_00000d0c(uVar1);
      iVar3 = -0x8b;
    }
    else {
      *(undefined4 **)(&DAT_1fff0358 + local_a * 4) = puVar5;
      *(short *)((int)puVar5 + 6) = local_a;
      uVar2 = FUN_000007dc(param_5,param_6,local_2c,uVar4);
      *puVar5 = uVar2;
      puVar5[9] = local_2c;
      puVar5[0xb] = param_2;
      puVar5[10] = param_7;
      *(byte *)((int)puVar5 + 5) = param_3;
      *(undefined *)(puVar5 + 1) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      FUN_00000fec(puVar5 + 5,0);
      puVar5[8] = 0;
      DAT_1fff0350 = DAT_1fff0350 + 1;
      if ((param_4 & 1) == 0) {
        FUN_00000698(puVar5,10);
        if ((param_4 & 4) == 0) {
          FUN_00000d0c(uVar1);
          FUN_00000738(param_3);
          return (int)local_a;
        }
      }
      else {
        FUN_00000698(puVar5,1);
      }
      FUN_00000d0c(uVar1);
      iVar3 = (int)local_a;
    }
  }
  else {
    iVar3 = -0x16;
  }
  return iVar3;
}


////>>0x00001274>>FUN_00001274>>////

void FUN_00001274(void)

{
  FUN_0000258c();
  DAT_4007e000 = DAT_4007e000 | 0x28;
  FUN_00001c84();
  FUN_00002396();
  return;
}


////>>0x0000129c>>FUN_0000129c>>////

void FUN_0000129c(undefined4 param_1)

{
  FUN_00002434(param_1,1);
  return;
}


////>>0x000012b4>>FUN_000012b4>>////

undefined4 FUN_000012b4(int param_1,undefined param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00002364(param_1 + 4,param_2);
  FUN_000024bc(param_1);
  return uVar1;
}


////>>0x000012e2>>FUN_000012e2>>////

int FUN_000012e2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_0000231c(param_1 + 4,param_2,param_3);
    if (iVar1 != 0) break;
    FUN_0000129c(param_1);
  }
  return iVar1;
}


////>>0x00001318>>FUN_00001318>>////

void FUN_00001318(byte param_1)

{
  *(int *)(((uint)(int)(char)param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x00001348>>FUN_00001348>>////

void FUN_00001348(void)

{
  if (DAT_1fff0354 != 0) {
    FUN_0000093c();
  }
  return;
}


////>>0x00001360>>FUN_00001360>>////

int FUN_00001360(uint param_1,int param_2)

{
  return param_2 * 4 + (param_1 & 0xf0000000 | (param_1 & 0xfffff) << 5) + 0x2000000;
}


////>>0x00001392>>FUN_00001392>>////

void FUN_00001392(undefined4 param_1,undefined param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00001360(param_1,param_2);
  *puVar1 = 1;
  return;
}


////>>0x000013b8>>FUN_000013b8>>////

undefined4 FUN_000013b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    FUN_00000f04(3,"FAILED ASSERTION.");
  }
  *(undefined4 *)(&DAT_1fff0b6c + param_1 * 8) = param_3;
  *(undefined4 *)(&DAT_1fff0b70 + param_1 * 8) = param_4;
  FUN_00001448(param_1);
  FUN_00001392(*(undefined4 *)(&DAT_00006ffc + param_1 * 0x20),
               *(undefined *)(param_1 * 0x20 + 0x7000));
  if ((&DAT_00007002)[param_1 * 0x20] == '\0') {
    FUN_000014c4(param_1,param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


////>>0x00001448>>FUN_00001448>>////

void FUN_00001448(int param_1)

{
  if (*(short *)(&DAT_00006fec + param_1 * 0x20) != -1) {
    FUN_00001f80(*(undefined2 *)(&DAT_00006fec + param_1 * 0x20),
                 *(undefined4 *)(&DAT_00006ff0 + param_1 * 0x20));
  }
  if (*(short *)(&DAT_00006fee + param_1 * 0x20) != -1) {
    FUN_00001f80(*(undefined2 *)(&DAT_00006fee + param_1 * 0x20),
                 *(undefined4 *)(&DAT_00006ff4 + param_1 * 0x20));
  }
  return;
}


////>>0x000014c4>>FUN_000014c4>>////

void FUN_000014c4(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  pbVar1 = *(byte **)(&DAT_00006fe4 + param_1 * 0x20);
  uVar2 = *(uint *)(&DAT_00006fe8 + param_1 * 0x20);
  pbVar1[3] = pbVar1[3] & 0xf3;
  pbVar1[2] = (&DAT_00007001)[param_1 * 0x20];
  uVar3 = uVar2 / (param_2 << 4);
  *pbVar1 = (byte)(uVar3 >> 8) & 0x1f;
  pbVar1[1] = (byte)uVar3;
  pbVar1[10] = (byte)((uVar2 << 2) / param_2 + 1 >> 1) & 0x1f;
  pbVar1[0x10] = pbVar1[0x10] | 0x88;
  if ((pbVar1[0x10] & 0x70) == 0) {
    pbVar1[0x13] = 0;
  }
  else {
    pbVar1[0x13] = (char)(2 << (pbVar1[0x10] >> 4 & 7)) - 1;
  }
  pbVar1[0x15] = 1;
  pbVar1[0x11] = 0xc0;
  pbVar1[3] = pbVar1[3] | 0x2c;
  FUN_00001318((int)(char)(&DAT_00006ff8)[param_1 * 0x20]);
  return;
}


////>>0x000015d0>>FUN_000015d0>>////

void FUN_000015d0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint local_c;
  
  iVar1 = *(int *)(&DAT_00006fe4 + param_1 * 0x20);
  for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
    do {
    } while (-1 < *(char *)(iVar1 + 4));
    *(undefined *)(iVar1 + 7) = *(undefined *)(local_c + param_2);
  }
  return;
}


////>>0x00001628>>FUN_00001628>>////

void FUN_00001628(int param_1)

{
  if (((*(byte *)(*(int *)(&DAT_00006fe4 + param_1 * 0x20) + 4) & 0x20) != 0) &&
     (*(int *)(&DAT_1fff0b6c + param_1 * 8) != 0)) {
    (**(code **)(&DAT_1fff0b6c + param_1 * 8))
              (*(undefined4 *)(&DAT_1fff0b70 + param_1 * 8),
               *(undefined *)(*(int *)(&DAT_00006fe4 + param_1 * 0x20) + 7));
  }
  FUN_00001348();
  return;
}


////>>0x00001688>>FUN_00001688>>////

void FUN_00001688(void)

{
  FUN_00001628(0);
  return;
}


////>>0x00001696>>FUN_00001696>>////

int FUN_00001696(uint param_1,int param_2)

{
  return param_2 * 4 + (param_1 & 0xf0000000 | (param_1 & 0xfffff) << 5) + 0x2000000;
}


////>>0x000016c8>>FUN_000016c8>>////

void FUN_000016c8(undefined4 param_1,undefined param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00001696(param_1,param_2);
  *puVar1 = 1;
  return;
}


////>>0x000016ec>>FUN_000016ec>>////

void FUN_000016ec(undefined4 param_1,undefined param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_00001696(param_1,param_2);
  *puVar1 = 1;
  return;
}


////>>0x00001710>>FUN_00001710>>////

void FUN_00001710(undefined4 param_1,undefined param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_00001696(param_1,param_2);
  *puVar1 = 0;
  return;
}


////>>0x00001734>>FUN_00001734>>////

void FUN_00001734(void)

{
  FUN_00001710(&DAT_40064005,6);
  return;
}


////>>0x00001748>>FUN_00001748>>////

void FUN_00001748(byte param_1)

{
  DAT_40064003 = param_1 | DAT_40064003 & 0x1f;
  return;
}


////>>0x00001778>>FUN_00001778>>////

/* WARNING: Removing unreachable block (ram,0x0000179c) */
/* WARNING: Removing unreachable block (ram,0x000017b2) */
/* WARNING: Removing unreachable block (ram,0x000017c0) */

void FUN_00001778(void)

{
  DAT_40064001 = DAT_40064001 & 0xcf | 0x20;
  FUN_00001710(&DAT_40064001,2);
  return;
}


////>>0x000017dc>>FUN_000017dc>>////



void FUN_000017dc(void)

{
  FUN_000016c8(&DAT_4004803c,0x1d);
  if ((_DAT_4003d010 & 0x100) == 0) {
    _DAT_4003d010 = 0x104;
  }
  _DAT_40047000 = _DAT_40047000 & 0xfff3ffff | 0x80000;
  return;
}


////>>0x0000182c>>FUN_0000182c>>////

/* WARNING: Removing unreachable block (ram,0x0000187c) */
/* WARNING: Removing unreachable block (ram,0x0000186a) */
/* WARNING: Removing unreachable block (ram,0x00001898) */

void FUN_0000182c(void)

{
  DAT_40064008 = DAT_40064008 & 0xd0;
  FUN_000016ec(&DAT_40064001,0);
  FUN_00001710(&DAT_40064000,1);
  FUN_00001710(&DAT_40064000,0);
  return;
}


////>>0x000018bc>>FUN_000018bc>>////

void FUN_000018bc(void)

{
  FUN_00001748(0xa0);
  DAT_40064000 = DAT_40064000 & 0x3b | 4;
  FUN_00001710(&DAT_40064001,1);
  do {
  } while ((DAT_40064006 & 0x10) == 0);
  do {
  } while ((DAT_40064006 & 0xc) != 0);
  DAT_1fff0b74 = 0;
  return;
}


////>>0x0000191c>>FUN_0000191c>>////

void FUN_0000191c(void)

{
  FUN_00001778();
  FUN_00001748(0x40);
  DAT_40064000 = DAT_40064000 & 0x3b;
  do {
  } while ((DAT_40064006 & 0xc) != 0);
  DAT_1fff0b74 = 1;
  return;
}


////>>0x00001960>>FUN_00001960>>////

void FUN_00001960(void)

{
  FUN_00001748(0xa0);
  FUN_00001710(&DAT_40064001,1);
  DAT_40064000 = DAT_40064000 & 0x3b | 0x44;
  do {
  } while ((DAT_40064006 & 0xc) != 4);
  do {
  } while ((DAT_40064006 & 0x10) == 0);
  DAT_1fff0b74 = 2;
  return;
}


////>>0x000019c0>>FUN_000019c0>>////

void FUN_000019c0(void)

{
  FUN_00001778();
  FUN_00001748(0x40);
  FUN_00001710(&DAT_40064001,1);
  DAT_40064000 = DAT_40064000 & 0x3b | 0x80;
  do {
  } while ((DAT_40064006 & 0xc) != 8);
  FUN_00001734();
  DAT_1fff0b74 = 3;
  return;
}


////>>0x00001a18>>FUN_00001a18>>////

void FUN_00001a18(void)

{
  FUN_000016ec(&DAT_40064001,1);
  FUN_00001734();
  DAT_1fff0b74 = 4;
  return;
}


////>>0x00001a3c>>FUN_00001a3c>>////

void FUN_00001a3c(void)

{
  FUN_000016ec(&DAT_40064001,1);
  FUN_00001734();
  DAT_1fff0b74 = 5;
  return;
}


////>>0x00001a60>>FUN_00001a60>>////

void FUN_00001a60(void)

{
  FUN_00001710(&DAT_40064001,1);
  DAT_40064000 = DAT_40064000 & 0x3f | 0x80;
  do {
  } while ((DAT_40064006 & 0xc) != 8);
  FUN_000016ec(&DAT_40064005,6);
  do {
  } while ((DAT_40064006 & 0x20) == 0);
  do {
  } while ((DAT_40064006 & 0x40) == 0);
  DAT_1fff0b74 = 6;
  return;
}


////>>0x00001ad4>>FUN_00001ad4>>////

void FUN_00001ad4(void)

{
  DAT_40064000 = DAT_40064000 & 0x3f;
  do {
  } while ((DAT_40064006 & 0xc) != 0xc);
  DAT_1fff0b74 = 7;
  return;
}


////>>0x00001b10>>FUN_00001b10>>////

undefined4 FUN_00001b10(byte param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    do {
      switch((&DAT_00007004)[(uint)param_1 + (uint)DAT_1fff0b74 * 8]) {
      case 0:
        FUN_000018bc();
        break;
      case 1:
        FUN_0000191c();
        break;
      case 2:
        FUN_00001960();
        break;
      case 3:
        FUN_000019c0();
        break;
      case 4:
        FUN_00001a18();
        break;
      case 5:
        FUN_00001a3c();
        break;
      case 6:
        FUN_00001a60();
        break;
      case 7:
        FUN_00001ad4();
        break;
      default:
        return 0xffffffff;
      }
    } while (param_1 != DAT_1fff0b74);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


////>>0x00001bb8>>FUN_00001bb8>>////

void FUN_00001bb8(void)

{
  if ((DAT_40064001 & 2) != 0) {
    FUN_00001710(&DAT_40064001,1);
  }
  if ((DAT_40064005 & 0x40) != 0) {
    if ((DAT_40064000 & 0xc0) == 0) {
      DAT_40064000 = DAT_40064000 & 0x3f | 0x80;
      do {
      } while ((DAT_40064006 & 0xc) != 8);
    }
    FUN_00001710(&DAT_40064005,6);
    do {
    } while ((DAT_40064006 & 0x20) != 0);
  }
  FUN_00001748(0);
  DAT_40064000 = DAT_40064000 & 0x3b | 4;
  do {
  } while ((DAT_40064006 & 0x10) == 0);
  do {
  } while ((DAT_40064006 & 0xc) != 0);
  DAT_1fff0b74 = 0;
  return;
}


////>>0x00001c84>>FUN_00001c84>>////



void FUN_00001c84(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00000cd0();
  FUN_00001bb8();
  _DAT_40048044 = 0x220000;
  DAT_4006400c = 0;
  DAT_40064000 = DAT_40064000 & 199 | 0x38;
  DAT_40064004 = 0x13;
  DAT_40064005 = 0;
  FUN_0000182c();
  FUN_000017dc();
  FUN_00001b10(7);
  FUN_00000d0c(uVar1);
  return;
}


////>>0x00001cf0>>FUN_00001cf0>>////

void FUN_00001cf0(void)

{
  if (DAT_1fff0354 != 0) {
    FUN_0000093c();
  }
  return;
}


////>>0x00001d08>>FUN_00001d08>>////

int FUN_00001d08(uint param_1,int param_2)

{
  return param_2 * 4 + (param_1 & 0xf0000000 | (param_1 & 0xfffff) << 5) + 0x2000000;
}


////>>0x00001d3a>>FUN_00001d3a>>////

void FUN_00001d3a(undefined4 param_1,undefined param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00001d08(param_1,param_2);
  *puVar1 = 1;
  return;
}


////>>0x00001d5e>>FUN_00001d5e>>////

uint FUN_00001d5e(ushort param_1)

{
  return param_1 & 0x7000 | 0x40048000;
}


////>>0x00001d80>>FUN_00001d80>>////

uint FUN_00001d80(ushort param_1)

{
  return param_1 & 0x1c0 | 0x400ff000;
}


////>>0x00001da2>>FUN_00001da2>>////

ushort FUN_00001da2(ushort param_1)

{
  return param_1 >> 6 & 7;
}


////>>0x00001dc0>>FUN_00001dc0>>////

ushort FUN_00001dc0(ushort param_1)

{
  return param_1 & 0x3f;
}


////>>0x00001ddc>>FUN_00001ddc>>////

void FUN_00001ddc(undefined2 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00001da2(param_1);
  FUN_00001d3a(&DAT_40048038,cVar1 + '\t');
  return;
}


////>>0x00001e0c>>FUN_00001e0c>>////

uint FUN_00001e0c(int param_1,uint param_2)

{
  return *(uint *)(&DAT_1fff0bd8 + (((int)param_2 >> 3) + param_1 * 4) * 4) >> ((param_2 & 7) << 2)
         & 0xf;
}


////>>0x00001e44>>FUN_00001e44>>////

void FUN_00001e44(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2 >> 3;
  *(uint *)(&DAT_1fff0bd8 + (iVar1 + param_1 * 4) * 4) =
       *(uint *)(&DAT_1fff0bd8 + (iVar1 + param_1 * 4) * 4) & ~(0xf << ((param_2 & 7) << 2));
  *(uint *)(&DAT_1fff0bd8 + (iVar1 + param_1 * 4) * 4) =
       *(uint *)(&DAT_1fff0bd8 + (iVar1 + param_1 * 4) * 4) | param_3 << ((param_2 & 7) << 2);
  return;
}


////>>0x00001ec4>>FUN_00001ec4>>////

void FUN_00001ec4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001e0c(param_1,param_2);
  FUN_00001e44(param_1,param_2,uVar1);
  return;
}


////>>0x00001eea>>FUN_00001eea>>////

undefined4 FUN_00001eea(undefined2 param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00001f80(param_1,0);
  if ((char)param_2 < '\0') {
    uVar1 = FUN_00001dc0(param_1);
    iVar2 = FUN_00001d80(param_1);
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 1 << (uVar1 & 0xff);
  }
  else {
    uVar1 = FUN_00001dc0(param_1);
    iVar2 = FUN_00001d80(param_1);
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & ~(1 << (uVar1 & 0xff));
  }
  iVar2 = FUN_00001d5e(param_1);
  iVar3 = FUN_00001dc0(param_1);
  *(uint *)(iVar2 + iVar3 * 4) = param_2 & 0x23 | 0x100;
  return 0;
}


////>>0x00001f80>>FUN_00001f80>>////

void FUN_00001f80(undefined2 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  FUN_00001ddc(param_1);
  iVar1 = FUN_00001d5e(param_1);
  iVar2 = FUN_00001dc0(param_1);
  uVar5 = *(uint *)(iVar1 + iVar2 * 4);
  iVar1 = FUN_00001d5e(param_1);
  iVar2 = FUN_00001dc0(param_1);
  *(undefined4 *)(iVar1 + iVar2 * 4) = param_2;
  if ((uVar5 & 0xf0000) != 0) {
    uVar3 = FUN_00001da2(param_1);
    uVar4 = FUN_00001dc0(param_1);
    FUN_00001ec4(uVar3,uVar4);
  }
  return;
}


////>>0x00001ff6>>FUN_00001ff6>>////

void FUN_00001ff6(undefined2 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00001dc0(param_1);
  iVar2 = FUN_00001d80(param_1);
  *(int *)(iVar2 + 4) = 1 << (uVar1 & 0xff);
  return;
}


////>>0x00002028>>FUN_00002028>>////

void FUN_00002028(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  
  uVar2 = *(uint *)(param_1 + 0xa0);
  for (local_c = 0; (int)local_c < 0x20; local_c = local_c + 1) {
    if (((uVar2 & 1 << (local_c & 0xff)) != 0) &&
       ((*(uint *)(param_1 + local_c * 4) & 0xf0000) != 0)) {
      *(int *)(param_1 + 0xa0) = 1 << (local_c & 0xff);
      iVar1 = FUN_00001e0c(param_2,local_c);
      (**(code **)(&DAT_1fff0b78 + iVar1 * 0xc))(*(undefined4 *)(&DAT_1fff0b7c + iVar1 * 0xc));
    }
  }
  FUN_00001cf0();
  return;
}


////>>0x000020b8>>FUN_000020b8>>////

void FUN_000020b8(void)

{
  FUN_00002028(0x40049000,0);
  return;
}


////>>0x000020cc>>FUN_000020cc>>////

void FUN_000020cc(void)

{
  FUN_00002028(0x4004a000,1);
  return;
}


////>>0x000020e0>>FUN_000020e0>>////

void FUN_000020e0(void)

{
  FUN_00002028(0x4004b000,2);
  return;
}


////>>0x000020f4>>FUN_000020f4>>////

void FUN_000020f4(void)

{
  FUN_00002028(0x4004c000,3);
  return;
}


////>>0x00002108>>FUN_00002108>>////

void FUN_00002108(void)

{
  FUN_00002028(0x4004d000,4);
  return;
}


////>>0x0000211c>>FUN_0000211c>>////

void FUN_0000211c(void)

{
  int iVar1;
  undefined2 local_40;
  int local_3c;
  int local_38;
  dword local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  short local_1a;
  int local_18;
  int local_14;
  
  local_40 = 0x515f;
  local_14 = 0;
  local_18 = 0;
  FUN_00004c84("\tpid | %-21s| %-9sQ | pri | stack  ( used) | base addr  | current     \n",
               &DAT_000070b8,"state");
  local_20 = FUN_000008b8();
  local_24 = FUN_0000091c();
  local_28 = FUN_00000900();
  FUN_00004c84("\t  - | isr_stack            | -        - |   - | %6i (%5i) | %10p | %10p\n",0x200,
               local_20,local_24,local_28);
  local_14 = local_14 + 0x200;
  if (0 < local_20) {
    local_18 = local_20 + local_18;
  }
  for (local_1a = 1; local_1a < 0x21; local_1a = local_1a + 1) {
    local_2c = *(undefined4 **)(&DAT_1fff0358 + local_1a * 4);
    if (local_2c != (undefined4 *)0x0) {
      local_30 = (uint)*(byte *)(local_2c + 1);
      local_34 = (&Elf32_Rel_ARRAY_1fff0200[4].r_offset)[local_30];
      local_38 = (int)&local_40 + (uint)(8 < local_30);
      local_3c = local_2c[0xb];
      local_14 = local_3c + local_14;
      iVar1 = FUN_000010a0(local_2c[9]);
      local_3c = local_3c - iVar1;
      local_18 = local_3c + local_18;
      FUN_00004c84("\t%3hi | %-20s | %-8s %.1s | %3i | %6i (%5i) | %10p | %10p \n",
                   (int)*(short *)((int)local_2c + 6),local_2c[10],local_34,local_38,
                   *(undefined *)((int)local_2c + 5),local_2c[0xb],local_3c,local_2c[9],*local_2c);
    }
  }
  FUN_00004c84("\t%5s %-21s|%13s%6s %6i (%5i)\n",&DAT_00007190,&DAT_00007194,&DAT_00007190,
               &DAT_00007190,local_14,local_18);
  return;
}


////>>0x00002270>>FUN_00002270>>////

undefined FUN_00002270(int param_1)

{
  undefined uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar3 = *(int *)(param_1 + 8) == iVar2;
  if (bVar3) {
    iVar2 = 1;
  }
  uVar1 = (undefined)iVar2;
  if (!bVar3) {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x00002294>>FUN_00002294>>////

undefined FUN_00002294(int param_1)

{
  undefined uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  bVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) == iVar2;
  if (bVar3) {
    iVar2 = 1;
  }
  uVar1 = (undefined)iVar2;
  if (!bVar3) {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x000022be>>FUN_000022be>>////

void FUN_000022be(int *param_1,undefined param_2)

{
  uint uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = uVar1 + 1;
  *(undefined *)((uVar1 & param_1[1] - 1U) + *param_1) = param_2;
  return;
}


////>>0x000022f0>>FUN_000022f0>>////

undefined FUN_000022f0(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[2] = uVar1 + 1;
  return *(undefined *)((uVar1 & param_1[1] - 1U) + *param_1);
}


////>>0x0000231c>>FUN_0000231c>>////

int FUN_0000231c(undefined4 param_1,undefined *param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  undefined *local_20;
  int local_14;
  
  local_20 = param_2;
  local_14 = param_3;
  while ((local_14 != 0 && (iVar2 = FUN_00002270(param_1), iVar2 == 0))) {
    uVar1 = FUN_000022f0(param_1);
    *local_20 = uVar1;
    local_14 = local_14 + -1;
    local_20 = local_20 + 1;
  }
  return param_3 - local_14;
}


////>>0x00002364>>FUN_00002364>>////

undefined4 FUN_00002364(undefined4 param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00002294(param_1);
  if (iVar1 == 0) {
    FUN_000022be(param_1,param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


////>>0x00002396>>FUN_00002396>>////

void FUN_00002396(void)

{
  FUN_000025f4();
  return;
}


////>>0x000023a4>>FUN_000023a4>>////

undefined4 FUN_000023a4(void)

{
  undefined4 uVar1;
  undefined auStack_88 [128];
  
  FUN_000023d0(0);
  FUN_00004db8("Welcome to RIOT!");
  uVar1 = FUN_00002e6c(0,auStack_88,0x80);
  software_interrupt(0x3f);
  return uVar1;
}


////>>0x000023c8>>FUN_000023c8>>////

void FUN_000023c8(void)

{
  software_interrupt(0x3f);
  return;
}


////>>0x000023d0>>FUN_000023d0>>////

undefined4 FUN_000023d0(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_1fff0d98 == 0) {
    uVar1 = FUN_000023c8(1,param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x00002400>>FUN_00002400>>////

void FUN_00002400(void)

{
  return;
}


////>>0x0000240c>>FUN_0000240c>>////

undefined4 * FUN_0000240c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = *puVar1;
  }
  return puVar1;
}


////>>0x00002434>>FUN_00002434>>////

undefined4 FUN_00002434(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00000cd0();
  iVar1 = DAT_1fff03dc;
  if (*param_1 == 0) {
    *param_1 = -1;
    FUN_00000d0c(uVar2);
    uVar2 = 1;
  }
  else if (param_2 == 0) {
    FUN_00000d0c(uVar2);
    uVar2 = 0;
  }
  else {
    FUN_00000698(DAT_1fff03dc,2);
    if (*param_1 == -1) {
      *param_1 = iVar1 + 8;
      *(undefined4 *)*param_1 = 0;
    }
    else {
      FUN_00001034(param_1,iVar1);
    }
    FUN_00000d0c(uVar2);
    FUN_0000093c();
    uVar2 = 1;
  }
  return uVar2;
}


////>>0x000024bc>>FUN_000024bc>>////

void FUN_000024bc(int *param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00000cd0();
  if (*param_1 == 0) {
    FUN_00000d0c(uVar2);
  }
  else if (*param_1 == -1) {
    *param_1 = 0;
    FUN_00000d0c(uVar2);
  }
  else {
    iVar3 = FUN_0000240c(param_1);
    FUN_00000698(iVar3 + -8,10);
    if (*param_1 == 0) {
      *param_1 = -1;
    }
    uVar1 = *(undefined *)(iVar3 + -3);
    FUN_00000d0c(uVar2);
    FUN_00000738(uVar1);
  }
  return;
}


////>>0x00002538>>FUN_00002538>>////

void FUN_00002538(byte param_1,uint param_2)

{
  if ((char)param_1 < '\0') {
    (&DAT_e000ed14)[param_1 & 0xf] = (char)((param_2 & 0xff) << 4);
  }
  else {
    *(char *)((char)param_1 + -0x1fff1c00) = (char)((param_2 & 0xff) << 4);
  }
  return;
}


////>>0x0000258c>>FUN_0000258c>>////



void FUN_0000258c(void)

{
  uint local_c;
  
  _DAT_e000ed08 = 0;
  FUN_00002538(0xfffffffe,1);
  FUN_00002538(0xfffffffb,1);
  for (local_c = 0; local_c < 0x66; local_c = local_c + 1) {
    FUN_00002538((int)(char)local_c,1);
  }
  _DAT_e000ed10 = _DAT_e000ed10 | 0x10;
  _DAT_e000ed14 = _DAT_e000ed14 | 0x200;
  return;
}


////>>0x000025f4>>FUN_000025f4>>////

void FUN_000025f4(void)

{
  FUN_000027b0();
  return;
}


////>>0x00002600>>FUN_00002600>>////

undefined4 FUN_00002600(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000047e4(param_1);
  FUN_0000285c(uVar1);
  return 0;
}


////>>0x00002624>>FUN_00002624>>////

undefined4 FUN_00002624(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = FUN_0000281c();
  uStack_c = 0;
  FUN_0000443c(&local_10,param_1);
  return 0;
}


////>>0x00002654>>FUN_00002654>>////

undefined4 FUN_00002654(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000047e4(param_1);
  DAT_1fff0d9c = param_2;
  FUN_00002894(uVar1,0x26f1,param_3);
  return 0;
}


////>>0x00002690>>FUN_00002690>>////

undefined4 FUN_00002690(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = FUN_000028f0();
  uStack_c = 0;
  FUN_0000443c(&local_10,param_1);
  return 0;
}


////>>0x000026c0>>FUN_000026c0>>////

void FUN_000026c0(void)

{
  FUN_00002910();
  DAT_1fff0d9c = 0;
  return;
}


////>>0x000026d8>>FUN_000026d8>>////

void FUN_000026d8(void)

{
  FUN_0000294c();
  return;
}


////>>0x000026e4>>FUN_000026e4>>////

void FUN_000026e4(void)

{
  FUN_00002970();
  return;
}


////>>0x000026f0>>FUN_000026f0>>////

void FUN_000026f0(undefined4 param_1)

{
  if (DAT_1fff0d9c != (code *)0x0) {
    (*DAT_1fff0d9c)(param_1);
  }
  return;
}


////>>0x00002714>>FUN_00002714>>////

void FUN_00002714(byte param_1)

{
  *(int *)(((uint)(int)(char)param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  return;
}


////>>0x00002744>>FUN_00002744>>////

void FUN_00002744(byte param_1,uint param_2)

{
  if ((char)param_1 < '\0') {
    (&DAT_e000ed14)[param_1 & 0xf] = (char)((param_2 & 0xff) << 4);
  }
  else {
    *(char *)((char)param_1 + -0x1fff1c00) = (char)((param_2 & 0xff) << 4);
  }
  return;
}


////>>0x00002798>>FUN_00002798>>////

void FUN_00002798(void)

{
  if (DAT_1fff0354 != 0) {
    FUN_0000093c();
  }
  return;
}


////>>0x000027b0>>FUN_000027b0>>////



void FUN_000027b0(void)

{
  _DAT_4004803c = _DAT_4004803c | 0x20000000;
  if ((_DAT_4003d014 & 1) != 0) {
    _DAT_4003d000 = 0;
  }
  _DAT_4003d010 = 0x104;
  _DAT_4003d008 = 0xffffff42;
  _DAT_4003d01c = 0;
  FUN_0000294c();
  return;
}


////>>0x0000281c>>FUN_0000281c>>////

/* WARNING: Removing unreachable block (ram,0x00002840) */
/* WARNING: Removing unreachable block (ram,0x0000284c) */


undefined4 FUN_0000281c(void)

{
  return _DAT_4003d000;
}


////>>0x0000285c>>FUN_0000285c>>////



void FUN_0000285c(undefined4 param_1)

{
  _DAT_4003d000 = param_1;
  _DAT_4003d014 = _DAT_4003d014 & 0xffffffef | 0x10;
  return;
}


////>>0x00002894>>FUN_00002894>>////



void FUN_00002894(int param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_4003d008 = param_1 + -1;
  _DAT_4003d01c = _DAT_4003d01c & 0xfffffffb | 4;
  DAT_1fff0da0 = param_2;
  DAT_1fff0da4 = param_3;
  FUN_00002744(0x2e,10);
  FUN_00002714(0x2e);
  return;
}


////>>0x000028f0>>FUN_000028f0>>////



int FUN_000028f0(void)

{
  return _DAT_4003d008 + 1;
}


////>>0x00002910>>FUN_00002910>>////



void FUN_00002910(void)

{
  _DAT_4003d01c = _DAT_4003d01c & 0xfffffffb;
  _DAT_4003d008 = 0;
  DAT_1fff0da0 = 0;
  DAT_1fff0da4 = 0;
  return;
}


////>>0x0000294c>>FUN_0000294c>>////



void FUN_0000294c(void)

{
  _DAT_4003d014 = _DAT_4003d014 | 0x10;
  return;
}


////>>0x00002970>>FUN_00002970>>////



void FUN_00002970(void)

{
  _DAT_4003d014 = _DAT_4003d014 & 0xffffffef;
  return;
}


////>>0x00002994>>FUN_00002994>>////



void FUN_00002994(void)

{
  if (((_DAT_4003d014 & 4) != 0) && (DAT_1fff0da0 != (code *)0x0)) {
    _DAT_4003d01c = _DAT_4003d01c & 0xfffffffb;
    (*DAT_1fff0da0)(DAT_1fff0da4);
  }
  if (((_DAT_4003d014 & 2) != 0) && (DAT_1fff0da8 != (code *)0x0)) {
    (*DAT_1fff0da8)(DAT_1fff0dac);
  }
  FUN_00002798();
  return;
}


////>>0x00002a00>>FUN_00002a00>>////

void FUN_00002a00(undefined4 param_1)

{
  FUN_00004cb4(param_1);
  return;
}


////>>0x00002a18>>FUN_00002a18>>////

int FUN_00002a18(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *local_18;
  undefined **local_14;
  uint local_10;
  int *local_c;
  
  local_18 = param_1;
  local_14 = &PTR_s_reboot_00007300;
  local_10 = 0;
  do {
    if (1 < local_10) {
      return 0;
    }
    local_c = (&local_18)[local_10];
    if (local_c != (int *)0x0) {
      for (; *local_c != 0; local_c = local_c + 3) {
        iVar1 = FUN_00004e52(*local_c,param_2);
        if (iVar1 == 0) {
          return local_c[2];
        }
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}


////>>0x00002a88>>FUN_00002a88>>////

void FUN_00002a88(int *param_1)

{
  int *local_18;
  undefined **local_14;
  uint local_10;
  int *local_c;
  
  FUN_00004c84("%-20s %s\n","Command","Description");
  FUN_00004db8("---------------------------------------");
  local_18 = param_1;
  local_14 = &PTR_s_reboot_00007300;
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    local_c = (&local_18)[local_10];
    if (local_c != (int *)0x0) {
      for (; *local_c != 0; local_c = local_c + 3) {
        FUN_00004c84("%-20s %s\n",*local_c,local_c[1]);
      }
    }
  }
  return;
}


////>>0x00002b10>>FUN_00002b10>>////

void FUN_00002b10(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *local_48 [3];
  code *local_3c;
  char **local_38;
  uint local_34;
  byte local_2d;
  char *local_2c;
  char *local_28;
  char **local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  byte *local_14;
  
  local_18 = 0;
  local_1c = 0;
  local_14 = param_2;
  while( true ) {
    local_48[0] = param_2;
    local_48[1] = (byte *)param_1;
    if (0x20 < *local_14) {
      if ((*local_14 == 0x22) || (*local_14 == 0x27)) {
        local_2d = *local_14;
        do {
          pbVar2 = local_14 + 1;
          if (*pbVar2 == 0) {
            local_14 = pbVar2;
            FUN_00004db8(Elf32_Rel_ARRAY_1fff0200[9].r_info);
            return;
          }
          if (*pbVar2 == 0x5c) {
            local_1c = local_1c + 1;
            local_14 = local_14 + 2;
            pbVar2 = local_14;
            if (*local_14 == 0) {
              FUN_00004db8(Elf32_Rel_ARRAY_1fff0200[9].r_info);
              return;
            }
          }
          local_14 = pbVar2;
        } while (local_2d != *local_14);
        if (0x20 < local_14[1]) {
          FUN_00004db8(Elf32_Rel_ARRAY_1fff0200[9].r_info);
          return;
        }
      }
      else {
        do {
          if (*local_14 == 0x5c) {
            local_1c = local_1c + 1;
            local_14 = local_14 + 1;
            if (*local_14 == 0) {
              FUN_00004db8(Elf32_Rel_ARRAY_1fff0200[9].r_info);
              return;
            }
          }
          local_14 = local_14 + 1;
          if (*local_14 == 0x22) {
            FUN_00004db8(Elf32_Rel_ARRAY_1fff0200[9].r_info);
            return;
          }
        } while (0x20 < *local_14);
      }
      local_18 = local_18 + 1;
    }
    if (*local_14 == 0) break;
    *local_14 = 0;
    local_14 = local_14 + 1;
  }
  if (local_18 != 0) {
    local_34 = local_18;
    local_38 = (char **)((int)local_48 - ((local_18 + 1) * 4 + 7 & 0xfffffff8));
    local_38[local_18] = (char *)0x0;
    local_14 = param_2;
    for (local_20 = 0; local_24 = local_38, local_20 < local_18; local_20 = local_20 + 1) {
      for (; *local_14 == 0; local_14 = local_14 + 1) {
      }
      if ((*local_14 == 0x22) || (*local_14 == 0x27)) {
        local_14 = local_14 + 1;
      }
      local_38[local_20] = (char *)local_14;
      for (; *local_14 != 0; local_14 = local_14 + 1) {
      }
    }
    for (; (local_1c != 0 && (*local_24 != (char *)0x0)); local_24 = local_24 + 1) {
      for (local_28 = *local_24; *local_28 != '\0'; local_28 = local_28 + 1) {
        if (*local_28 == '\\') {
          for (local_2c = local_28; *local_2c != '\0'; local_2c = local_2c + 1) {
            *local_2c = local_2c[1];
          }
          local_1c = local_1c + -1;
          if (local_1c == 0) break;
        }
      }
    }
    local_3c = (code *)FUN_00002a18(param_1,*local_38);
    if (local_3c == (code *)0x0) {
      iVar1 = FUN_00004e52(&DAT_00007214,*local_38);
      if (iVar1 == 0) {
        FUN_00002a88(local_48[1]);
      }
      else {
        FUN_00004c84("shell: command not found: %s\n",*local_38);
      }
    }
    else {
      (*local_3c)(local_18,local_38);
    }
  }
  return;
}


////>>0x00002d94>>FUN_00002d94>>////

uint FUN_00002d94(undefined *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined *local_c;
  
  local_c = param_1;
  while( true ) {
    if (param_2 + -1 <= (int)local_c - (int)param_1) {
      return 0xffffffff;
    }
    iVar1 = FUN_00004418();
    if (iVar1 < 0) break;
    if ((iVar1 == 0xd) || (iVar1 == 10)) {
      *local_c = 0;
      FUN_00002a00(0xd);
      FUN_00002a00(10);
      bVar3 = local_c == param_1;
      if (bVar3) {
        param_1 = (undefined *)0x1;
      }
      bVar2 = (byte)param_1;
      if (!bVar3) {
        bVar2 = 0;
      }
      return (uint)bVar2;
    }
    if ((iVar1 == 8) || (iVar1 == 0x7f)) {
      if (local_c != param_1) {
        local_c = local_c + -1;
        *local_c = 0;
        FUN_00002a00(8);
        FUN_00002a00(0x20);
        FUN_00002a00(8);
      }
    }
    else {
      *local_c = (char)iVar1;
      FUN_00002a00(iVar1);
      local_c = local_c + 1;
    }
  }
  return 1;
}


////>>0x00002e48>>FUN_00002e48>>////

void FUN_00002e48(void)

{
  FUN_00002a00(0x3e);
  FUN_00002a00(0x20);
  FUN_000041d0(*(undefined4 *)(Elf32_Rel_ARRAY_1fff0200[16].r_offset + 8));
  return;
}


////>>0x00002e6c>>FUN_00002e6c>>////

void FUN_00002e6c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00002e48();
  do {
    iVar1 = FUN_00002d94(param_2,param_3);
    if (iVar1 == 0) {
      FUN_00002b10(param_1,param_2);
    }
    FUN_00002e48();
  } while( true );
}


////>>0x00002e9c>>FUN_00002e9c>>////

undefined4 FUN_00002e9c(void)

{
  FUN_00003688();
  return 0;
}


////>>0x00002eb4>>FUN_00002eb4>>////

undefined4 FUN_00002eb4(void)

{
  FUN_0000211c();
  return 0;
}


////>>0x00002ecc>>FUN_00002ecc>>////

void FUN_00002ecc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined auStack_1c [8];
  uint local_14;
  
  local_14 = FUN_00003d64(param_2,auStack_1c);
  if ((int)local_14 < 1) {
    FUN_00004c84("error: failed to read from device #%i\n",param_1);
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar1 = FUN_000039e8(*(undefined *)(*(int *)(param_2 + 0xc) + 8));
    FUN_00004c84("Reading from #%i (%s|%s)\n",param_1,uVar2,uVar1);
    FUN_00003694(auStack_1c,local_14 & 0xff);
  }
  return;
}


////>>0x00002f30>>FUN_00002f30>>////

void FUN_00002f30(void)

{
  int local_10;
  undefined4 *local_c;
  
  local_10 = 0;
  for (local_c = DAT_1fff0db0; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
    FUN_00002ecc(local_10,local_c);
    FUN_00004db8(&DAT_00007380);
    local_10 = local_10 + 1;
  }
  return;
}


////>>0x00002f74>>FUN_00002f74>>////

void FUN_00002f74(void)

{
  undefined4 uVar1;
  int local_18;
  undefined4 *local_14;
  
  local_14 = DAT_1fff0db0;
  local_18 = 0;
  if (DAT_1fff0db0 == (undefined4 *)0x0) {
    FUN_00004db8("No devices found");
  }
  else {
    FUN_00004db8("ID\tClass\t\tName");
  }
  for (; local_14 != (undefined4 *)0x0; local_14 = (undefined4 *)*local_14) {
    uVar1 = FUN_000039e8(*(undefined *)(local_14[3] + 8));
    FUN_00004c84("#%i\t%s\t%s\n",local_18,uVar1,local_14[2]);
    local_18 = local_18 + 1;
  }
  return;
}


////>>0x00002fe0>>FUN_00002fe0>>////

void FUN_00002fe0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 3) {
    FUN_00004c84("usage: %s %s <device id>|all\n",*param_2,param_2[1]);
  }
  else {
    iVar1 = FUN_00004e52(param_2[2],&DAT_000073d4);
    if (iVar1 == 0) {
      FUN_00002f30();
    }
    else {
      uVar2 = FUN_00004042(param_2[2]);
      iVar1 = FUN_00003d24(uVar2);
      if (iVar1 == 0) {
        FUN_00004db8("error: undefined device id given");
      }
      else {
        FUN_00002ecc(uVar2,iVar1);
      }
    }
  }
  return;
}


////>>0x0000305c>>FUN_0000305c>>////

void FUN_0000305c(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 auStack_20 [4];
  uint local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  if (param_1 < 4) {
    FUN_00004c84("usage: %s %s <device id> <value 0> [<value 1> [<value 2]]\n",*param_2,param_2[1]);
  }
  else {
    local_10 = FUN_00004042(param_2[2]);
    local_14 = FUN_00003d24(local_10);
    if (local_14 == 0) {
      FUN_00004db8("error: undefined device given");
    }
    else {
      FUN_00004622(auStack_20,0,8);
      if (5 < param_1) {
        param_1 = 6;
      }
      local_18 = param_1 - 3;
      for (local_c = 0; local_c < (int)local_18; local_c = local_c + 1) {
        uVar1 = FUN_00004042(param_2[local_c + 3]);
        auStack_20[local_c] = uVar1;
      }
      FUN_00004c84("Writing to device #%i - %s\n",local_10,*(undefined4 *)(local_14 + 8));
      FUN_00003694(auStack_20,local_18 & 0xff);
      local_18 = FUN_00003d94(local_14,auStack_20);
      if ((int)local_18 < 1) {
        if (local_18 == -0x86) {
          FUN_00004c84("error: device #%i is not writable\n",local_10);
        }
        else {
          FUN_00004c84("error: failure to write to device #%i\n",local_10);
        }
      }
      else {
        FUN_00004c84("data successfully written to device #%i\n",local_10);
      }
    }
  }
  return;
}


////>>0x0000316c>>FUN_0000316c>>////

undefined4 FUN_0000316c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 < 2) {
    FUN_00002f74();
  }
  else {
    iVar1 = FUN_00004e52(param_2[1],&DAT_000074ec);
    if (iVar1 == 0) {
      FUN_00002fe0(param_1,param_2);
    }
    else {
      iVar1 = FUN_00004e52(param_2[1],"write");
      if (iVar1 == 0) {
        FUN_0000305c(param_1,param_2);
      }
      else {
        FUN_00004c84("usage: %s read|write\n",*param_2);
      }
    }
  }
  return 0;
}


////>>0x000031e0>>FUN_000031e0>>////

void FUN_000031e0(void)

{
  FUN_00004db8("The alarm rang");
  return;
}


////>>0x000031fc>>FUN_000031fc>>////

int FUN_000031fc(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 < 3) {
    iVar2 = 1;
  }
  bVar1 = (byte)iVar2;
  if (2 < param_2) {
    bVar1 = 0;
  }
  param_1 = param_1 - (uint)bVar1;
  iVar2 = param_1;
  if (param_1 < 0) {
    iVar2 = param_1 + 3;
  }
  return ((((iVar2 >> 2) + param_1) - param_1 / 100) + param_1 / 400 +
          *(int *)((int)Elf32_Rel_ARRAY_1fff0200 + (param_2 + -1) * 4 + 0x50) + param_3) % 7;
}


////>>0x0000328c>>FUN_0000328c>>////

undefined4 FUN_0000328c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int local_10;
  short local_a;
  
  local_a = FUN_00004f84(*param_1,&local_10,10);
  param_2[5] = local_a + -0x76c;
  local_a = FUN_00004f84(local_10 + 1,&local_10,10);
  param_2[4] = local_a + -1;
  local_a = FUN_00004f84(local_10 + 1,&local_10,10);
  param_2[3] = (int)local_a;
  local_a = FUN_00004f84(param_1[1],&local_10,10);
  param_2[2] = (int)local_a;
  local_a = FUN_00004f84(local_10 + 1,&local_10,10);
  param_2[1] = (int)local_a;
  local_a = FUN_00004f84(local_10 + 1,&local_10,10);
  *param_2 = (int)local_a;
  iVar1 = FUN_000031fc(param_2[5] + 0x76c,param_2[4] + 1,param_2[3]);
  param_2[6] = iVar1;
  param_2[8] = -1;
  return 0;
}


////>>0x00003378>>FUN_00003378>>////

undefined4 FUN_00003378(undefined4 *param_1)

{
  FUN_00004c84("%04i-%02i-%02i %02i:%02i:%02i\n",param_1[5] + 0x76c,param_1[4] + 1,param_1[3],
               param_1[2],param_1[1],*param_1);
  return 0;
}


////>>0x000033c0>>FUN_000033c0>>////

bool FUN_000033c0(void)

{
  int iVar1;
  undefined auStack_2c [36];
  
  iVar1 = FUN_00002690(auStack_2c);
  if (iVar1 != 0) {
    FUN_00004db8("rtc: error getting alarm");
  }
  else {
    FUN_00003378(auStack_2c);
  }
  return iVar1 != 0;
}


////>>0x000033f4>>FUN_000033f4>>////

undefined4 FUN_000033f4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_2c [36];
  
  iVar1 = FUN_0000328c(param_1,auStack_2c);
  if (iVar1 == 0) {
    iVar1 = FUN_00002654(auStack_2c,0x31e1,0);
    if (iVar1 == -1) {
      FUN_00004db8("rtc: error setting alarm");
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


////>>0x00003444>>FUN_00003444>>////

bool FUN_00003444(void)

{
  int iVar1;
  undefined auStack_2c [36];
  
  iVar1 = FUN_00002624(auStack_2c);
  if (iVar1 != 0) {
    FUN_00004db8("rtc: error getting time");
  }
  else {
    FUN_00003378(auStack_2c);
  }
  return iVar1 != 0;
}


////>>0x00003478>>FUN_00003478>>////

undefined4 FUN_00003478(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_2c [36];
  
  iVar1 = FUN_0000328c(param_1,auStack_2c);
  if (iVar1 == 0) {
    iVar1 = FUN_00002600(auStack_2c);
    if (iVar1 == -1) {
      FUN_00004db8("rtc: error setting time");
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


////>>0x000034c0>>FUN_000034c0>>////

undefined4 FUN_000034c0(void)

{
  FUN_00004db8("usage: rtc <command> [arguments]");
  FUN_00004db8("commands:");
  FUN_00004db8("\tpoweron\t\tpower the interface on");
  FUN_00004db8("\tpoweroff\tpower the interface off");
  FUN_00004db8("\tclearalarm\tdeactivate the current alarm");
  FUN_00004db8("\tgetalarm\tprint the currently alarm time");
  FUN_00004db8("\tsetalarm YYYY-MM-DD HH:MM:SS\n\t\t\tset an alarm for the specified time");
  FUN_00004db8("\tgettime\t\tprint the current time");
  FUN_00004db8("\tsettime YYYY-MM-DD HH:MM:SS\n\t\t\tset the current time");
  return 0;
}


////>>0x00003524>>FUN_00003524>>////

undefined4 FUN_00003524(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < 2) {
    FUN_000034c0();
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00004e66(*(undefined4 *)(param_2 + 4),"poweron",7);
    if (iVar1 == 0) {
      FUN_000026d8();
    }
    else {
      iVar1 = FUN_00004e66(*(undefined4 *)(param_2 + 4),"poweroff",8);
      if (iVar1 == 0) {
        FUN_000026e4();
      }
      else {
        iVar1 = FUN_00004e66(*(undefined4 *)(param_2 + 4),"clearalarm",8);
        if (iVar1 == 0) {
          FUN_000026c0();
        }
        else {
          iVar1 = FUN_00004e66(*(undefined4 *)(param_2 + 4),"getalarm",8);
          if (iVar1 == 0) {
            FUN_000033c0();
          }
          else {
            iVar1 = FUN_00004e66(*(undefined4 *)(param_2 + 4),"setalarm",8);
            if ((iVar1 == 0) && (param_1 == 4)) {
              FUN_000033f4(param_2 + 8);
            }
            else {
              iVar1 = FUN_00004e66(*(undefined4 *)(param_2 + 4),"gettime",7);
              if (iVar1 == 0) {
                FUN_00003444();
              }
              else {
                iVar1 = FUN_00004e66(*(undefined4 *)(param_2 + 4),"settime",7);
                if ((iVar1 != 0) || (param_1 != 4)) {
                  FUN_00004c84("unknown command or missing parameters: %s\n\n",
                               *(undefined4 *)(param_2 + 4));
                  FUN_000034c0();
                  return 1;
                }
                FUN_00003478(param_2 + 8);
              }
            }
          }
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x00003658>>FUN_00003658>>////

void FUN_00003658(void)

{
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00003688>>FUN_00003688>>////

void FUN_00003688(void)

{
  FUN_00003658();
  return;
}


////>>0x00003694>>FUN_00003694>>////

void FUN_00003694(int param_1,byte param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined auStack_18 [8];
  int local_10;
  char local_a;
  byte local_9;
  
  if ((param_1 == 0) || (3 < param_2)) {
    FUN_00004db8("Unable to display data object");
  }
  else {
    FUN_00004c84("Data:");
    for (local_9 = 0; local_9 < param_2; local_9 = local_9 + 1) {
      if (*(byte *)(param_1 + 6) < 0x14) {
        uVar3 = 1 << (uint)*(byte *)(param_1 + 6) & 0x8018f;
        bVar4 = uVar3 != 0;
        if (bVar4) {
          uVar3 = 1;
        }
        cVar2 = (char)uVar3;
        if (!bVar4) {
          cVar2 = '\0';
        }
        if (cVar2 == '\0') goto LAB_000036ee;
        local_a = '\0';
      }
      else {
LAB_000036ee:
        local_a = FUN_00003918((int)*(char *)(param_1 + 7));
      }
      FUN_00004c84(&DAT_000077bc);
      if (param_2 < 2) {
        FUN_00004c84("     ");
      }
      else {
        FUN_00004c84("[%u] ",local_9);
      }
      if (local_a == '\0') {
        if (*(char *)(param_1 + 7) == '\0') {
          FUN_00004c84(&DAT_000077d8,(int)*(short *)(param_1 + (uint)local_9 * 2));
        }
        else if ((*(char *)(param_1 + 7) + 4 < 0 == SCARRY4((int)*(char *)(param_1 + 7),4)) &&
                (*(char *)(param_1 + 7) < '\0')) {
          local_10 = FUN_00003e9e(auStack_18,(int)*(short *)(param_1 + (uint)local_9 * 2),
                                  (int)*(char *)(param_1 + 7));
          auStack_18[local_10] = 0;
          FUN_00004c84(&DAT_000077dc,auStack_18);
        }
        else {
          FUN_00004c84("%iE%i",(int)*(short *)(param_1 + (uint)local_9 * 2),
                       (int)*(char *)(param_1 + 7));
        }
      }
      else {
        FUN_00004c84("%6d %c",(int)*(short *)(param_1 + (uint)local_9 * 2),local_a);
      }
      uVar1 = FUN_00003810(*(undefined *)(param_1 + 6));
      FUN_00004c84(&DAT_000077e8,uVar1);
    }
  }
  return;
}


////>>0x00003810>>FUN_00003810>>////

undefined * FUN_00003810(undefined param_1)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 2:
    puVar1 = &DAT_000077ec;
    break;
  case 3:
    puVar1 = &DAT_000077f0;
    break;
  case 4:
    puVar1 = &DAT_000077f4;
    break;
  case 5:
    puVar1 = &DAT_000077f8;
    break;
  case 6:
    puVar1 = &DAT_000077fc;
    break;
  case 7:
    puVar1 = (undefined *)0x7800;
    break;
  case 8:
    puVar1 = &DAT_00007804;
    break;
  case 9:
    puVar1 = &DAT_00007808;
    break;
  case 10:
    puVar1 = &DAT_0000780c;
    break;
  case 0xb:
    puVar1 = &DAT_00007810;
    break;
  case 0xc:
    puVar1 = &DAT_00007814;
    break;
  case 0xd:
    puVar1 = &DAT_00007818;
    break;
  case 0xe:
    puVar1 = &DAT_0000781c;
    break;
  case 0xf:
    puVar1 = &DAT_00007820;
    break;
  case 0x10:
    puVar1 = &DAT_00007824;
    break;
  case 0x11:
    puVar1 = &DAT_0000782c;
    break;
  default:
    puVar1 = &DAT_00007834;
    break;
  case 0x13:
    puVar1 = &DAT_00007830;
    break;
  case 0x15:
    puVar1 = &DAT_00007828;
  }
  return puVar1;
}


////>>0x00003918>>FUN_00003918>>////

undefined4 FUN_00003918(undefined param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 2:
    uVar1 = 0x68;
    break;
  case 3:
    uVar1 = 0x6b;
    break;
  case 6:
    uVar1 = 0x4d;
    break;
  case 9:
    uVar1 = 0x47;
    break;
  case 0xc:
    uVar1 = 0x54;
    break;
  case 0xf:
    uVar1 = 0x50;
    break;
  case 0xf1:
    uVar1 = 0x66;
    break;
  default:
    uVar1 = 0;
    break;
  case 0xf4:
    uVar1 = 0x70;
    break;
  case 0xf7:
    uVar1 = 0x6e;
    break;
  case 0xfa:
    uVar1 = 0x75;
    break;
  case 0xfd:
    uVar1 = 0x6d;
  }
  return uVar1;
}


////>>0x000039e8>>FUN_000039e8>>////

char * FUN_000039e8(char param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case '\0':
    pcVar1 = "CLASS_UNDEF";
    break;
  case '@':
    pcVar1 = "ACT_ANY";
    break;
  case 'B':
    pcVar1 = "ACT_LED_RGB";
    break;
  case 'C':
    pcVar1 = "ACT_SERVO";
    break;
  case 'D':
    pcVar1 = "ACT_MOTOR";
    break;
  case 'E':
    pcVar1 = "ACT_SWITCH";
    break;
  case 'F':
    pcVar1 = "ACT_DIMMER";
    break;
  case -0x80:
    pcVar1 = "SENSE_ANY";
    break;
  case -0x7f:
    pcVar1 = "SENSE_BTN";
    break;
  case -0x7e:
    pcVar1 = "SENSE_TEMP";
    break;
  case -0x7d:
    pcVar1 = "SENSE_HUM";
    break;
  case -0x7c:
    pcVar1 = "SENSE_LIGHT";
    break;
  case -0x7b:
    pcVar1 = "SENSE_ACCEL";
    break;
  case -0x7a:
    pcVar1 = "SENSE_MAG";
    break;
  case -0x79:
    pcVar1 = "SENSE_GYRO";
    break;
  case -0x78:
    pcVar1 = "SENSE_COLOR";
    break;
  case -0x77:
    pcVar1 = "SENSE_PRESS";
    break;
  case -0x76:
    pcVar1 = "SENSE_ANALOG";
    break;
  case -0x75:
    pcVar1 = "SENSE_UV";
    break;
  case -0x74:
    pcVar1 = "SENSE_OBJTEMP";
    break;
  case -0x73:
    pcVar1 = "SENSE_PULSE_COUNT";
    break;
  case -0x72:
    pcVar1 = "SENSE_DISTANCE";
    break;
  case -0x71:
    pcVar1 = "SENSE_CO2";
    break;
  default:
    if (param_1 == -1) {
      return "CLASS_ANY";
    }
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '>':
  case '?':
  case 'A':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'n':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 't':
  case 'u':
  case 'v':
  case 'w':
  case 'x':
  case 'y':
  case 'z':
  case '{':
  case '|':
  case '}':
  case '~':
  case '\x7f':
    pcVar1 = "CLASS_UNKNOWN";
  }
  return pcVar1;
}


////>>0x00003d24>>FUN_00003d24>>////

undefined4 * FUN_00003d24(int param_1)

{
  int local_10;
  undefined4 *local_c;
  
  local_10 = 0;
  for (local_c = DAT_1fff0db0; (local_10 < param_1 && (local_c != (undefined4 *)0x0));
      local_c = (undefined4 *)*local_c) {
    local_10 = local_10 + 1;
  }
  return local_c;
}


////>>0x00003d64>>FUN_00003d64>>////

undefined4 FUN_00003d64(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffed;
  }
  else {
    uVar1 = (***(code ***)(param_1 + 0xc))(*(undefined4 *)(param_1 + 4),param_2);
  }
  return uVar1;
}


////>>0x00003d94>>FUN_00003d94>>////

undefined4 FUN_00003d94(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffed;
  }
  else {
    uVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 4))(*(undefined4 *)(param_1 + 4),param_2);
  }
  return uVar1;
}


////>>0x00003dc4>>FUN_00003dc4>>////

int FUN_00003dc4(int param_1,uint param_2)

{
  uint local_20;
  char *local_14;
  uint local_10;
  int local_c;
  
  local_c = 1;
  if (param_2 < 1000000000) {
    for (local_10 = 10; local_10 <= param_2; local_10 = local_10 * 10) {
      local_c = local_c + 1;
    }
  }
  else {
    local_c = 10;
  }
  if (param_1 != 0) {
    local_14 = (char *)(local_c + param_1);
    local_20 = param_2;
    do {
      local_14 = local_14 + -1;
      *local_14 = (char)(local_20 % 10) + '0';
      local_20 = local_20 / 10;
    } while (local_20 != 0);
  }
  return local_c;
}


////>>0x00003e58>>FUN_00003e58>>////

int FUN_00003e58(undefined *param_1,int param_2)

{
  int iVar1;
  int local_18;
  undefined *local_14;
  
  local_18 = param_2;
  local_14 = param_1;
  if (-(param_2 >> 0x1f) != 0) {
    if (param_1 != (undefined *)0x0) {
      local_14 = param_1 + 1;
      *param_1 = 0x2d;
    }
    local_18 = -param_2;
  }
  iVar1 = FUN_00003dc4(local_14,local_18);
  return -(param_2 >> 0x1f) + iVar1;
}


////>>0x00003e9e>>FUN_00003e9e>>////

undefined4 FUN_00003e9e(undefined4 param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00003ec4(param_1,(int)param_2,param_3);
  return uVar1;
}


////>>0x00003ec4>>FUN_00003ec4>>////

int FUN_00003ec4(undefined *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_10;
  int local_c;
  
  if (param_3 + 7 < 0 != SCARRY4(param_3,7)) {
    FUN_00000f04(3,"FAILED ASSERTION.");
  }
  local_c = 0;
  if (param_3 == 0) {
    local_c = FUN_00003e58(param_1,param_2);
  }
  else if (param_3 < 1) {
    uVar3 = param_2 / *(uint *)(&DAT_00007978 + param_3 * -4);
    local_10 = param_2 - *(uint *)(&DAT_00007978 + param_3 * -4) * uVar3;
    if (local_10 < 0) {
      local_10 = -local_10;
    }
    if ((uVar3 == 0) && ((int)param_2 < 0)) {
      if (param_1 != (undefined *)0x0) {
        *param_1 = 0x2d;
      }
      local_c = 1;
    }
    if (param_1 == (undefined *)0x0) {
      iVar1 = FUN_00003e58(0,uVar3);
      local_c = iVar1 + 1 + local_c;
    }
    else {
      iVar1 = FUN_00003e58(param_1 + local_c,uVar3);
      iVar1 = local_c + iVar1;
      local_c = iVar1 + 1;
      param_1[iVar1] = 0x2e;
      uVar2 = FUN_00003e58(param_1 + local_c,local_10);
      FUN_00003ff4(param_1 + local_c,uVar2,-param_3,0x30);
    }
    local_c = -param_3 + local_c;
  }
  else {
    local_c = FUN_00003e58(param_1,param_2);
    if (param_1 != (undefined *)0x0) {
      FUN_00004622(param_1 + local_c,0x30,param_3);
    }
    local_c = param_3 + local_c;
  }
  return local_c;
}


////>>0x00003ff4>>FUN_00003ff4>>////

uint FUN_00003ff4(int param_1,uint param_2,uint param_3,undefined param_4)

{
  uint uVar1;
  
  uVar1 = param_2;
  if ((param_2 < param_3) && (uVar1 = param_3, param_1 != 0)) {
    FUN_000045ee((param_3 - param_2) + param_1,param_1,param_2);
    FUN_00004622(param_1,param_4,param_3 - param_2);
  }
  return uVar1;
}


////>>0x00004042>>FUN_00004042>>////

void FUN_00004042(undefined4 param_1)

{
  FUN_00004f84(param_1,0,10);
  return;
}


////>>0x0000404c>>FUN_0000404c>>////

undefined4 FUN_0000404c(uint *param_1,int *param_2)

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
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
          return 0xffffffff;
        }
        iVar1 = iVar1 + iVar5;
      }
    }
  }
  else {
    if ((param_2[1] < 1) && (param_2[0x10] < 1)) {
      return 0;
    }
    pcVar6 = (code *)param_2[0xb];
    if (pcVar6 == (code *)0x0) {
      return 0;
    }
    uVar8 = *param_1;
    *param_1 = 0;
    if ((uVar4 & 0x1000) == 0) {
      iVar1 = (*pcVar6)(param_1,param_2[8],uVar3 & 0x1000,1);
      if ((iVar1 == -1) && (uVar3 = *param_1, uVar3 != 0)) {
        if ((uVar3 == 0x1d) || (uVar3 == 0x16)) {
          *param_1 = uVar8;
          return 0;
        }
        uVar4 = *(ushort *)(param_2 + 3);
        goto LAB_00004104;
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
LAB_00004104:
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
        FUN_00004b34(param_1);
      }
      param_2[0xd] = 0;
      return 0;
    }
  }
  return 0;
}


////>>0x00004158>>FUN_00004158>>////

undefined4 FUN_00004158(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2[4] != 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      FUN_000042a4();
    }
    if (param_2 == &DAT_000079b8) {
      param_2 = *(undefined4 **)(param_1 + 4);
    }
    else if (param_2 == (undefined4 *)&DAT_000079d8) {
      param_2 = *(undefined4 **)(param_1 + 8);
    }
    else if (param_2 == (undefined4 *)&DAT_00007998) {
      param_2 = *(undefined4 **)(param_1 + 0xc);
    }
    if (*(short *)(param_2 + 3) != 0) {
      if ((-1 < (int)(param_2[0x19] << 0x1f)) && (-1 < (int)*(short *)(param_2 + 3) << 0x16)) {
        FUN_000045e8(param_2[0x16]);
      }
      uVar1 = FUN_0000404c(param_1,param_2);
      if ((int)(param_2[0x19] << 0x1f) < 0) {
        return uVar1;
      }
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x16) < 0) {
        return uVar1;
      }
      FUN_000045ec(param_2[0x16]);
      return uVar1;
    }
  }
  return 0;
}


////>>0x000041d0>>FUN_000041d0>>////

uint FUN_000041d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  dword *pdVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_1 == 0) {
    puVar7 = &DAT_000079f8;
    pdVar3 = &Elf32_Rel_ARRAY_1fff0200[0x19].r_info;
    uVar5 = 0;
    do {
      iVar6 = pdVar3[1];
      iVar4 = pdVar3[2];
      while (iVar6 = iVar6 + -1, -1 < iVar6) {
        if ((1 < *(ushort *)(iVar4 + 0xc)) && (iVar2 = *(short *)(iVar4 + 0xe) + 1, iVar2 != 0)) {
          uVar1 = FUN_00004158(0x1fff0284,iVar4,param_3,iVar2,puVar7);
          uVar5 = uVar5 | uVar1;
        }
        iVar4 = iVar4 + 0x68;
      }
      pdVar3 = (dword *)*pdVar3;
    } while (pdVar3 != (dword *)0x0);
    return uVar5;
  }
  uVar5 = FUN_00004158(Elf32_Rel_ARRAY_1fff0200[16].r_offset,param_1);
  return uVar5;
}


////>>0x000041f4>>FUN_000041f4>>////

void FUN_000041f4(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[6] = 0;
  FUN_00004622(param_1 + 0x17,0,8);
  param_1[9] = 0x4dc9;
  param_1[10] = 0x4def;
  param_1[0xb] = 0x4e27;
  param_1[8] = param_1;
  param_1[0xc] = &LAB_00004e4a_1;
  return;
}


////>>0x00004248>>FUN_00004248>>////

undefined4 * FUN_00004248(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 + -1) * 0x68;
  puVar1 = (undefined4 *)FUN_00004bd0(param_1,iVar2 + 0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = puVar1 + 3;
    FUN_00004622(puVar1 + 3,0,iVar2 + 0x68);
  }
  return puVar1;
}


////>>0x00004274>>FUN_00004274>>////

void FUN_00004274(void)

{
  FUN_000045e8(&DAT_1fff0dec);
  return;
}


////>>0x00004280>>FUN_00004280>>////

void FUN_00004280(void)

{
  FUN_000045ec(&DAT_1fff0dec);
  return;
}


////>>0x0000428c>>FUN_0000428c>>////

void FUN_0000428c(void)

{
  FUN_000045e8(0x1fff0de7);
  return;
}


////>>0x000042a4>>FUN_000042a4>>////

void FUN_000042a4(int param_1)

{
  undefined4 uVar1;
  
  FUN_0000428c();
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar1 = 0x1fff0284;
    *(undefined **)(param_1 + 0x28) = &DAT_0000423d;
    if (param_1 == 0x1fff0284) {
      uVar1 = 1;
    }
    if (param_1 == 0x1fff0284) {
      *(undefined4 *)(param_1 + 0x18) = uVar1;
    }
    uVar1 = FUN_00004314(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = FUN_00004314(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = FUN_00004314(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    FUN_000041f4(*(undefined4 *)(param_1 + 4),4,0);
    FUN_000041f4(*(undefined4 *)(param_1 + 8),9,1);
    FUN_000041f4(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  FUN_000045ec(0x1fff0de7);
  return;
}


////>>0x00004314>>FUN_00004314>>////

undefined4 * FUN_00004314(undefined4 *param_1)

{
  dword dVar1;
  int iVar2;
  undefined4 *puVar3;
  dword *pdVar4;
  
  FUN_00004274();
  if (Elf32_Rel_ARRAY_1fff0200[19].r_info == 0) {
    FUN_000042a4(0x1fff0284);
  }
  pdVar4 = &Elf32_Rel_ARRAY_1fff0200[0x19].r_info;
  do {
    iVar2 = pdVar4[1];
    puVar3 = (undefined4 *)pdVar4[2];
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      if (*(short *)(puVar3 + 3) == 0) {
        puVar3[3] = 0xffff0001;
        puVar3[0x19] = 0;
        FUN_000045e4(puVar3 + 0x16);
        FUN_00004280();
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *puVar3 = 0;
        puVar3[6] = 0;
        FUN_00004622(puVar3 + 0x17,0,8);
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        return puVar3;
      }
      puVar3 = puVar3 + 0x1a;
    }
    if (*pdVar4 == 0) {
      dVar1 = FUN_00004248(param_1,4);
      *pdVar4 = dVar1;
      if (dVar1 == 0) {
        FUN_00004280();
        *param_1 = 0xc;
        return (undefined4 *)0x0;
      }
    }
    pdVar4 = (dword *)*pdVar4;
  } while( true );
}


////>>0x000043a0>>FUN_000043a0>>////

uint FUN_000043a0(int param_1,code *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = (int *)(param_1 + 0x48);
  uVar4 = 0;
  do {
    iVar5 = piVar2[1];
    iVar3 = piVar2[2];
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      if ((1 < *(ushort *)(iVar3 + 0xc)) && (*(short *)(iVar3 + 0xe) != -1)) {
        uVar1 = (*param_2)(iVar3);
        uVar4 = uVar4 | uVar1;
      }
      iVar3 = iVar3 + 0x68;
    }
    piVar2 = (int *)*piVar2;
  } while (piVar2 != (int *)0x0);
  return uVar4;
}


////>>0x00004418>>FUN_00004418>>////

uint FUN_00004418(void)

{
  dword dVar1;
  uint uVar2;
  byte **ppbVar3;
  byte *pbVar4;
  
  dVar1 = Elf32_Rel_ARRAY_1fff0200[16].r_offset;
  if ((Elf32_Rel_ARRAY_1fff0200[16].r_offset != 0) &&
     (*(int *)(Elf32_Rel_ARRAY_1fff0200[16].r_offset + 0x18) == 0)) {
    FUN_000042a4(Elf32_Rel_ARRAY_1fff0200[16].r_offset);
  }
  ppbVar3 = *(byte ***)(dVar1 + 4);
  if ((dVar1 != 0) && (*(int *)(dVar1 + 0x18) == 0)) {
    FUN_000042a4();
  }
  if (ppbVar3 == (byte **)&DAT_000079b8) {
    ppbVar3 = *(byte ***)(dVar1 + 4);
  }
  else if (ppbVar3 == (byte **)&DAT_000079d8) {
    ppbVar3 = *(byte ***)(dVar1 + 8);
  }
  else if (ppbVar3 == (byte **)&DAT_00007998) {
    ppbVar3 = *(byte ***)(dVar1 + 0xc);
  }
  if ((-1 < (int)ppbVar3[0x19] << 0x1f) && (-1 < (int)((uint)*(ushort *)(ppbVar3 + 3) << 0x16))) {
    FUN_000045e8(ppbVar3[0x16]);
  }
  pbVar4 = ppbVar3[1];
  ppbVar3[1] = pbVar4 + -1;
  if ((int)(pbVar4 + -1) < 0) {
    uVar2 = FUN_00005e10(dVar1,ppbVar3);
  }
  else {
    pbVar4 = *ppbVar3;
    *ppbVar3 = pbVar4 + 1;
    uVar2 = (uint)*pbVar4;
  }
  if ((-1 < (int)ppbVar3[0x19] << 0x1f) && (-1 < (int)((uint)*(ushort *)(ppbVar3 + 3) << 0x16))) {
    FUN_000045ec(ppbVar3[0x16]);
  }
  return uVar2;
}


////>>0x0000443c>>FUN_0000443c>>////

/* WARNING: Removing unreachable block (ram,0x000044a8) */

uint * FUN_0000443c(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  iVar1 = FUN_00006974(uVar6,uVar7,0x15180,0);
  uVar3 = 0x15180;
  FUN_00006974(uVar6,uVar7,0x15180,0);
  bVar9 = (int)uVar3 < 0;
  if (bVar9) {
    uVar3 = uVar3 + 0x15180;
  }
  if (bVar9) {
    uVar2 = iVar1 + 0xafa6b;
  }
  else {
    uVar2 = iVar1 + 0xafa6c;
  }
  param_2[2] = uVar3 / 0xe10;
  param_2[1] = (uVar3 % 0xe10) / 0x3c;
  *param_2 = (uVar3 % 0xe10) % 0x3c;
  param_2[6] = (uVar2 + 3) % 7;
  uVar3 = uVar2;
  if ((int)uVar2 < 0) {
    uVar3 = uVar2 - 0x23ab0;
  }
  uVar2 = (uVar3 / 0x23ab1) * -0x23ab1 + uVar2;
  uVar4 = ((uVar2 / 0x8eac + uVar2) - uVar2 / 0x5b4) - uVar2 / 0x23ab0;
  uVar5 = uVar4 / 0x16d;
  uVar2 = (uVar5 / 100 - uVar4 / 0x5b4) + uVar2 + uVar5 * -0x16d;
  uVar8 = uVar2 * 5 + 2;
  uVar4 = uVar8 / 0x99;
  if (uVar8 < 0x5fa) {
    iVar1 = 2;
  }
  else {
    iVar1 = -10;
  }
  uVar8 = uVar4 + iVar1;
  iVar1 = (uVar3 / 0x23ab1) * 400 + uVar5;
  if (uVar8 < 2) {
    iVar1 = iVar1 + 1;
  }
  if (uVar2 < 0x132) {
    if (((uVar5 & 3) == 0) && (uVar5 != (uVar5 / 100) * 100)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (uint)(uVar5 % 400 == 0);
    }
    uVar3 = uVar2 + 0x3b + uVar3;
  }
  else {
    uVar3 = uVar2 - 0x132;
  }
  param_2[7] = uVar3;
  param_2[3] = (uVar2 + 1) - (uVar4 * 0x99 + 2) / 5;
  param_2[4] = uVar8;
  param_2[5] = iVar1 - 0x76c;
  param_2[8] = 0;
  return param_2;
}


////>>0x0000459c>>FUN_0000459c>>////

void FUN_0000459c(void)

{
  code **ppcVar1;
  int iVar2;
  
  ppcVar1 = (code **)&DAT_00007c58;
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + 1) {
    (**ppcVar1)();
    ppcVar1 = ppcVar1 + 1;
  }
  FUN_00000410();
  ppcVar1 = (code **)&DAT_00007c58;
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + 1) {
    (**ppcVar1)();
    ppcVar1 = ppcVar1 + 1;
  }
  return;
}


////>>0x000045e4>>FUN_000045e4>>////

void FUN_000045e4(void)

{
  return;
}


////>>0x000045e8>>FUN_000045e8>>////

void FUN_000045e8(void)

{
  return;
}


////>>0x000045ec>>FUN_000045ec>>////

void FUN_000045ec(void)

{
  return;
}


////>>0x000045ee>>FUN_000045ee>>////

void FUN_000045ee(undefined *param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = param_2 + param_3;
  if ((param_2 < param_1) && (param_1 < puVar2)) {
    puVar1 = param_1 + param_3;
    while (puVar1 != param_1) {
      puVar2 = puVar2 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar2;
    }
  }
  else {
    param_1 = param_1 + -1;
    for (; param_2 != puVar2; param_2 = param_2 + 1) {
      param_1 = param_1 + 1;
      *param_1 = *param_2;
    }
  }
  return;
}


////>>0x00004622>>FUN_00004622>>////

void FUN_00004622(undefined *param_1,undefined param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


////>>0x00004634>>FUN_00004634>>////

void FUN_00004634(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint *local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  if (0x3b < *param_1) {
    FUN_00005584(&local_20,*param_1,0x3c);
    uVar2 = param_1[1] + (int)local_20;
    param_1[1] = uVar2;
    if ((int)local_1c < 0) {
      uVar2 = uVar2 - 1;
      *param_1 = local_1c + 0x3c;
    }
    else {
      *param_1 = local_1c;
    }
    if ((int)local_1c < 0) {
      param_1[1] = uVar2;
    }
  }
  if (0x3b < param_1[1]) {
    FUN_00005584(&local_20,param_1[1],0x3c);
    bVar5 = (int)local_1c < 0;
    uVar3 = param_1[2] + (int)local_20;
    param_1[2] = uVar3;
    uVar2 = local_1c;
    if (bVar5) {
      uVar2 = local_1c + 0x3c;
      uVar3 = uVar3 - 1;
    }
    if (!bVar5) {
      param_1[1] = uVar2;
    }
    if (bVar5) {
      param_1[1] = uVar2;
    }
    if (bVar5) {
      param_1[2] = uVar3;
    }
  }
  if (0x17 < param_1[2]) {
    FUN_00005584(&local_20,param_1[2],0x18);
    bVar5 = (int)local_1c < 0;
    uVar3 = param_1[3] + (int)local_20;
    param_1[3] = uVar3;
    uVar2 = local_1c;
    if (bVar5) {
      uVar2 = local_1c + 0x18;
      uVar3 = uVar3 - 1;
    }
    if (!bVar5) {
      param_1[2] = uVar2;
    }
    if (bVar5) {
      param_1[2] = uVar2;
    }
    if (bVar5) {
      param_1[3] = uVar3;
    }
  }
  if (0xb < param_1[4]) {
    FUN_00005584(&local_20,param_1[4],0xc);
    bVar5 = (int)local_1c < 0;
    uVar2 = param_1[5] + (int)local_20;
    param_1[5] = uVar2;
    if (bVar5) {
      local_1c = local_1c + 0xc;
      uVar2 = uVar2 - 1;
    }
    if (!bVar5) {
      param_1[4] = local_1c;
    }
    if (bVar5) {
      param_1[4] = local_1c;
    }
    if (bVar5) {
      param_1[5] = uVar2;
    }
  }
  uVar2 = param_1[5];
  if ((uVar2 & 3) == 0) {
    if (uVar2 == (uVar2 / 100) * 100) {
      if ((uVar2 + 0x76c) % 400 == 0) {
        iVar4 = 0x1d;
      }
      else {
        iVar4 = 0x1c;
      }
    }
    else {
      iVar4 = 0x1d;
    }
  }
  else {
    iVar4 = 0x1c;
  }
  if ((int)param_1[3] < 1) {
    while ((int)param_1[3] < 1) {
      uVar2 = param_1[4];
      param_1[4] = uVar2 - 1;
      if (uVar2 - 1 == 0xffffffff) {
        uVar3 = param_1[5];
        uVar2 = uVar3 - 1;
        param_1[4] = 0xb;
        param_1[5] = uVar2;
        if ((uVar2 & 3) == 0) {
          if (uVar2 == (uVar2 / 100) * 100) {
            if ((uVar3 + 0x76b) % 400 == 0) {
              iVar4 = 0x1d;
            }
            else {
              iVar4 = 0x1c;
            }
          }
          else {
            iVar4 = 0x1d;
          }
        }
        else {
          iVar4 = 0x1c;
        }
      }
      iVar1 = iVar4;
      if (param_1[4] != 1) {
        iVar1 = (&DAT_000079fc)[param_1[4]];
      }
      param_1[3] = iVar1 + param_1[3];
    }
  }
  else {
    while( true ) {
      uVar2 = param_1[4];
      iVar1 = iVar4;
      if (uVar2 != 1) {
        iVar1 = (&DAT_000079fc)[uVar2];
      }
      if ((int)param_1[3] <= iVar1) break;
      param_1[3] = param_1[3] - iVar1;
      param_1[4] = uVar2 + 1;
      if (uVar2 + 1 == 0xc) {
        uVar3 = param_1[5];
        uVar2 = uVar3 + 1;
        param_1[4] = 0;
        param_1[5] = uVar2;
        if ((uVar2 & 3) == 0) {
          if (uVar2 % 100 == 0) {
            if ((uVar3 + 0x76d) % 400 == 0) {
              iVar4 = 0x1d;
            }
            else {
              iVar4 = 0x1c;
            }
          }
          else {
            iVar4 = 0x1d;
          }
        }
        else {
          iVar4 = 0x1c;
        }
      }
    }
  }
  return;
}


////>>0x000047e4>>FUN_000047e4>>////

/* WARNING: Removing unreachable block (ram,0x00004ab2) */

undefined8 FUN_000047e4(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  piVar3 = (int *)FUN_000056b0();
  FUN_00004634(param_1);
  uVar12 = param_1[5];
  iVar11 = param_1[3] + -1 + *(int *)(&DAT_00007a2c + param_1[4] * 4);
  if (((1 < param_1[4]) && ((uVar12 & 3) == 0)) &&
     ((uVar12 != (uVar12 / 100) * 100 || (uVar12 + 0x76c == ((uVar12 + 0x76c) / 400) * 400)))) {
    iVar11 = iVar11 + 1;
  }
  param_1[7] = iVar11;
  if (20000 < (int)&DAT_00002710 + uVar12) {
    iVar7 = -1;
    iVar5 = -1;
    goto LAB_00004aba;
  }
  if ((int)uVar12 < 0x47) {
    if (uVar12 != 0x46) {
      for (uVar9 = 0x45; (int)uVar12 < (int)uVar9; uVar9 = uVar9 - 1) {
        if ((uVar9 & 3) == 0) {
          if (uVar9 == (uVar9 / 100) * 100) {
            if ((uVar9 + 0x76c) % 400 == 0) {
              iVar7 = 0x16e;
            }
            else {
              iVar7 = 0x16d;
            }
          }
          else {
            iVar7 = 0x16e;
          }
        }
        else {
          iVar7 = 0x16d;
        }
        iVar11 = iVar11 - iVar7;
      }
      if ((uVar9 & 3) == 0) {
        if (uVar12 == (uVar12 / 100) * 100) {
          iVar7 = 0x16d;
          if ((uVar12 + 0x76c) % 400 == 0) {
            iVar7 = 0x16e;
          }
        }
        else {
          iVar7 = 0x16e;
        }
      }
      else {
        iVar7 = 0x16d;
      }
      iVar11 = iVar11 - iVar7;
    }
  }
  else {
    uVar9 = 0x46;
    do {
      if ((uVar9 & 3) == 0) {
        if (uVar9 % 100 == 0) {
          if ((uVar9 + 0x76c) % 400 == 0) {
            iVar7 = 0x16e;
          }
          else {
            iVar7 = 0x16d;
          }
        }
        else {
          iVar7 = 0x16e;
        }
      }
      else {
        iVar7 = 0x16d;
      }
      uVar9 = uVar9 + 1;
      iVar11 = iVar11 + iVar7;
    } while (uVar12 != uVar9);
  }
  lVar1 = (longlong)iVar11 * 0x15180 + (longlong)(param_1[2] * 0xe10 + param_1[1] * 0x3c + *param_1)
  ;
  uVar15 = (uint)lVar1;
  iVar7 = (int)((ulonglong)lVar1 >> 0x20);
  FUN_000050e8();
  FUN_00005100();
  uVar9 = DAT_1fff0dd8;
  if (DAT_1fff0dd8 == 0) {
LAB_00004934:
    uVar12 = piVar3[10];
    iVar7 = (uint)lVar1 + uVar12;
    iVar5 = (int)((ulonglong)lVar1 >> 0x20) +
            ((int)uVar12 >> 0x1f) + (uint)CARRY4((uint)lVar1,uVar12);
  }
  else {
    uVar14 = param_1[8];
    uVar13 = uVar14;
    if (0 < (int)uVar14) {
      uVar13 = 1;
    }
    if ((piVar3[1] == param_1[5] + 0x76c) || (iVar5 = FUN_00004f98(), iVar5 != 0)) {
      uVar10 = piVar3[0x14];
      uVar4 = piVar3[0x12];
      uVar8 = piVar3[10];
      uVar9 = uVar4 - uVar8;
      iVar5 = (piVar3[0x13] - ((int)uVar8 >> 0x1f)) - (uint)(uVar4 < uVar8);
      if (((int)((iVar7 - iVar5) - (uint)(uVar15 < uVar9)) < 0 ==
           (SBORROW4(iVar7,iVar5) != SBORROW4(iVar7 - iVar5,(uint)(uVar15 < uVar9)))) &&
         (iVar6 = (piVar3[0x13] - ((int)uVar10 >> 0x1f)) - (uint)(uVar4 < uVar10),
         bVar16 = uVar15 < uVar4 - uVar10,
         (int)((iVar7 - iVar6) - (uint)bVar16) < 0 !=
         (SBORROW4(iVar7,iVar6) != SBORROW4(iVar7 - iVar6,(uint)bVar16)))) goto LAB_00004a88;
      uVar4 = piVar3[8] - uVar10;
      iVar6 = (piVar3[9] - ((int)uVar10 >> 0x1f)) - (uint)((uint)piVar3[8] < uVar10);
      if (*piVar3 != 0) {
        if ((int)((iVar7 - iVar6) - (uint)(uVar15 < uVar4)) < 0 ==
            (SBORROW4(iVar7,iVar6) != SBORROW4(iVar7 - iVar6,(uint)(uVar15 < uVar4))))
        goto LAB_0000491e;
LAB_0000492a:
        uVar9 = 0;
        if ((int)uVar14 < 0) goto LAB_00004934;
LAB_00004a14:
        uVar15 = uVar13 ^ uVar9;
        uVar13 = uVar9;
        if (uVar15 == 1) {
          if (uVar9 == 0) {
            iVar7 = uVar10 - uVar8;
          }
          else {
            iVar7 = uVar8 - uVar10;
          }
          iVar5 = param_1[3];
          *param_1 = *param_1 + iVar7;
          lVar2 = lVar1 + iVar7;
          FUN_00004634(param_1);
          iVar5 = param_1[3] - iVar5;
          lVar1 = lVar1 + iVar7;
          if (iVar5 != 0) {
            if (iVar5 < 2) {
              if (iVar5 == -2 || iVar5 + 2 < 0 != SCARRY4(iVar5,2)) {
                iVar5 = 1;
              }
            }
            else {
              iVar5 = -1;
            }
            iVar7 = iVar5 + param_1[7];
            iVar11 = iVar11 + iVar5;
            if (iVar7 < 0) {
              uVar9 = uVar12 - 1;
              if ((uVar9 & 3) == 0) {
                if (uVar9 == (uVar9 / 100) * 100) {
                  iVar7 = 0x16d;
                  if ((uVar12 + 0x76b) % 400 != 0) {
                    iVar7 = 0x16c;
                  }
                }
                else {
                  iVar7 = 0x16d;
                }
              }
              else {
                iVar7 = 0x16c;
              }
            }
            else {
              if ((uVar12 & 3) == 0) {
                if (uVar12 == (uVar12 / 100) * 100) {
                  iVar5 = 0x16d;
                  if ((uVar12 + 0x76c) % 400 == 0) {
                    iVar5 = 0x16e;
                  }
                }
                else {
                  iVar5 = 0x16e;
                }
              }
              else {
                iVar5 = 0x16d;
              }
              if (iVar5 <= iVar7) {
                iVar7 = iVar7 - iVar5;
              }
            }
            param_1[7] = iVar7;
            lVar1 = lVar2;
          }
        }
        goto LAB_00004a88;
      }
      if ((int)((iVar7 - iVar6) - (uint)(uVar15 < uVar4)) < 0 !=
          (SBORROW4(iVar7,iVar6) != SBORROW4(iVar7 - iVar6,(uint)(uVar15 < uVar4)))) {
LAB_0000491e:
        if ((int)((iVar7 - iVar5) - (uint)(uVar15 < uVar9)) < 0 ==
            (SBORROW4(iVar7,iVar5) != SBORROW4(iVar7 - iVar5,(uint)(uVar15 < uVar9))))
        goto LAB_0000492a;
      }
      if (-1 < (int)uVar14) {
        uVar9 = 1;
        goto LAB_00004a14;
      }
    }
    else {
LAB_00004a88:
      uVar9 = uVar13;
      if (uVar13 != 1) goto LAB_00004934;
    }
    uVar12 = piVar3[0x14];
    iVar7 = (uint)lVar1 + uVar12;
    iVar5 = (int)((ulonglong)lVar1 >> 0x20) +
            ((int)uVar12 >> 0x1f) + (uint)CARRY4((uint)lVar1,uVar12);
    uVar9 = 1;
  }
  FUN_000050f4();
  param_1[8] = uVar9;
  param_1[6] = (iVar11 + 4U) % 7;
LAB_00004aba:
  return CONCAT44(iVar5,iVar7);
}


////>>0x00004b34>>FUN_00004b34>>////

void FUN_00004b34(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_00005790();
  ppiVar3 = (int **)&DAT_1fff0db4;
  if (DAT_1fff0db4 == (int **)0x0) {
    ppiVar5[1] = (int *)0x0;
    ppiVar2 = extraout_r1;
    DAT_1fff0db4 = ppiVar5;
  }
  else {
    ppiVar4 = DAT_1fff0db4;
    if (ppiVar5 < DAT_1fff0db4) {
      ppiVar2 = (int **)*ppiVar5;
      ppiVar3 = (int **)((int)ppiVar5 + (int)ppiVar2);
      bVar6 = DAT_1fff0db4 == ppiVar3;
      if (bVar6) {
        ppiVar3 = (int **)*DAT_1fff0db4;
        DAT_1fff0db4 = (int **)DAT_1fff0db4[1];
      }
      ppiVar5[1] = (int *)DAT_1fff0db4;
      DAT_1fff0db4 = ppiVar5;
      if (bVar6) {
        ppiVar3 = (int **)((int)ppiVar3 + (int)ppiVar2);
        *ppiVar5 = (int *)ppiVar3;
      }
    }
    else {
      do {
        ppiVar3 = ppiVar4;
        ppiVar4 = (int **)ppiVar3[1];
        if (ppiVar4 == (int **)0x0) break;
      } while (ppiVar4 <= ppiVar5);
      ppiVar2 = (int **)*ppiVar3;
      if ((int **)((int)ppiVar3 + (int)ppiVar2) == ppiVar5) {
        ppiVar2 = (int **)((int)ppiVar2 + (int)*ppiVar5);
        *ppiVar3 = (int *)ppiVar2;
        if (ppiVar4 == (int **)((int)ppiVar3 + (int)ppiVar2)) {
          piVar1 = *ppiVar4;
          ppiVar3[1] = ppiVar4[1];
          ppiVar2 = (int **)((int)ppiVar2 + (int)piVar1);
          *ppiVar3 = (int *)ppiVar2;
        }
      }
      else if (ppiVar5 < (int **)((int)ppiVar3 + (int)ppiVar2)) {
        *param_1 = 0xc;
      }
      else {
        ppiVar2 = (int **)((int)ppiVar5 + (int)*ppiVar5);
        bVar6 = ppiVar4 == ppiVar2;
        if (bVar6) {
          ppiVar2 = (int **)*ppiVar4;
          ppiVar4 = (int **)ppiVar4[1];
        }
        ppiVar5[1] = (int *)ppiVar4;
        if (bVar6) {
          ppiVar2 = (int **)((int)ppiVar2 + (int)*ppiVar5);
          *ppiVar5 = (int *)ppiVar2;
        }
        ppiVar3[1] = (int *)ppiVar5;
      }
    }
  }
  FUN_0000579c(param_1,ppiVar2,ppiVar3,param_4);
  return;
}


////>>0x00004bd0>>FUN_00004bd0>>////

uint FUN_00004bd0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = (param_2 + 3 & 0xfffffffc) + 8;
  if (uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  if (((int)uVar5 < 0) || (uVar5 < param_2)) {
    *param_1 = 0xc;
  }
  else {
    FUN_00005790();
    puVar1 = DAT_1fff0db4;
    for (puVar4 = DAT_1fff0db4; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
      uVar3 = *puVar4 - uVar5;
      if (-1 < (int)uVar3) {
        if (0xb < uVar3) {
          *puVar4 = uVar3;
          puVar4 = (uint *)((int)puVar4 + uVar3);
          goto LAB_00004c34;
        }
        if (puVar1 == puVar4) {
          DAT_1fff0db4 = (uint *)puVar4[1];
        }
        if (puVar1 != puVar4) {
          puVar1[1] = (uint)(uint *)puVar4[1];
        }
        goto LAB_00004c42;
      }
      puVar1 = puVar4;
    }
    if (DAT_1fff0db8 == 0) {
      DAT_1fff0db8 = FUN_00000428(param_1,0,puVar1,0,param_4);
    }
    puVar1 = (uint *)FUN_00000428(param_1,uVar5);
    if ((puVar1 != (uint *)0xffffffff) &&
       ((puVar4 = (uint *)((int)puVar1 + 3U & 0xfffffffc), puVar1 == puVar4 ||
        (iVar2 = FUN_00000428(param_1,(int)puVar4 - (int)puVar1), iVar2 != -1)))) {
LAB_00004c34:
      *puVar4 = uVar5;
LAB_00004c42:
      FUN_0000579c(param_1);
      uVar5 = (int)puVar4 + 0xbU & 0xfffffff8;
      iVar2 = uVar5 - (int)(puVar4 + 1);
      if (iVar2 == 0) {
        return uVar5;
      }
      *(uint *)((int)puVar4 + iVar2) = (int)(puVar4 + 1) - uVar5;
      return uVar5;
    }
    *param_1 = 0xc;
    FUN_0000579c(param_1);
  }
  return 0;
}


////>>0x00004c84>>FUN_00004c84>>////

void FUN_00004c84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  dword dVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  dVar1 = Elf32_Rel_ARRAY_1fff0200[16].r_offset;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((Elf32_Rel_ARRAY_1fff0200[16].r_offset != 0) &&
     (*(int *)(Elf32_Rel_ARRAY_1fff0200[16].r_offset + 0x18) == 0)) {
    FUN_000042a4(Elf32_Rel_ARRAY_1fff0200[16].r_offset);
  }
  FUN_000057f8(dVar1,*(undefined4 *)(dVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}


////>>0x00004cb4>>FUN_00004cb4>>////

uint FUN_00004cb4(uint param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  dVar1 = Elf32_Rel_ARRAY_1fff0200[16].r_offset;
  if ((Elf32_Rel_ARRAY_1fff0200[16].r_offset != 0) &&
     (*(int *)(Elf32_Rel_ARRAY_1fff0200[16].r_offset + 0x18) == 0)) {
    FUN_000042a4(Elf32_Rel_ARRAY_1fff0200[16].r_offset);
  }
  puVar2 = *(undefined4 **)(dVar1 + 8);
  if ((dVar1 != 0) && (*(int *)(dVar1 + 0x18) == 0)) {
    FUN_000042a4();
  }
  if (puVar2 == &DAT_000079b8) {
    puVar2 = *(undefined4 **)(dVar1 + 4);
  }
  else if (puVar2 == (undefined4 *)&DAT_000079d8) {
    puVar2 = *(undefined4 **)(dVar1 + 8);
  }
  else if (puVar2 == (undefined4 *)&DAT_00007998) {
    puVar2 = *(undefined4 **)(dVar1 + 0xc);
  }
  if ((-1 < (int)(puVar2[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(puVar2 + 3) << 0x16))) {
    FUN_000045e8(puVar2[0x16]);
  }
  uVar3 = puVar2[2] - 1;
  puVar2[2] = uVar3;
  if (((int)uVar3 < 0) && (((int)uVar3 < (int)puVar2[6] || (uVar3 = param_1 & 0xff, uVar3 == 10))))
  {
    param_1 = FUN_00005404(dVar1,param_1,puVar2,uVar3,unaff_r4,unaff_r5);
  }
  else {
    puVar4 = (undefined *)*puVar2;
    *puVar2 = puVar4 + 1;
    *puVar4 = (char)param_1;
    param_1 = param_1 & 0xff;
  }
  if ((-1 < (int)(puVar2[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(puVar2 + 3) << 0x16))) {
    FUN_000045ec(puVar2[0x16]);
  }
  return param_1;
}


////>>0x00004db8>>FUN_00004db8>>////

undefined4 FUN_00004db8(int param_1)

{
  char cVar1;
  dword dVar2;
  int iVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  dVar2 = Elf32_Rel_ARRAY_1fff0200[16].r_offset;
  if ((Elf32_Rel_ARRAY_1fff0200[16].r_offset != 0) &&
     (*(int *)(Elf32_Rel_ARRAY_1fff0200[16].r_offset + 0x18) == 0)) {
    FUN_000042a4();
  }
  ppcVar5 = *(char ***)(dVar2 + 8);
  if (*(int *)(dVar2 + 0x18) == 0) {
    FUN_000042a4(dVar2);
  }
  if (ppcVar5 == (char **)&DAT_000079b8) {
    ppcVar5 = *(char ***)(dVar2 + 4);
  }
  else if (ppcVar5 == (char **)&DAT_000079d8) {
    ppcVar5 = *(char ***)(dVar2 + 8);
  }
  else if (ppcVar5 == (char **)&DAT_00007998) {
    ppcVar5 = *(char ***)(dVar2 + 0xc);
  }
  if ((-1 < (int)ppcVar5[0x19] << 0x1f) && (-1 < (int)((uint)*(ushort *)(ppcVar5 + 3) << 0x16))) {
    FUN_000045e8(ppcVar5[0x16]);
  }
  if ((((int)((uint)*(ushort *)(ppcVar5 + 3) << 0x1c) < 0) && (ppcVar5[4] != (char *)0x0)) ||
     (iVar3 = FUN_000054a8(dVar2,ppcVar5), iVar3 == 0)) {
    pcVar7 = (char *)(param_1 + -1);
    do {
      while( true ) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar4 = ppcVar5[2] + -1;
        ppcVar5[2] = pcVar4;
        if (cVar1 == '\0') {
          if (-1 < (int)pcVar4) {
            pcVar7 = *ppcVar5;
            uVar6 = 10;
            *ppcVar5 = pcVar7 + 1;
            *pcVar7 = '\n';
            goto LAB_00004d64;
          }
          iVar3 = FUN_00005404(dVar2,10,ppcVar5);
          if (iVar3 != -1) {
            uVar6 = 10;
            goto LAB_00004d64;
          }
          goto LAB_00004d60;
        }
        if (((int)pcVar4 < 0) && (((int)pcVar4 < (int)ppcVar5[6] || (cVar1 == '\n')))) break;
        pcVar4 = *ppcVar5;
        *ppcVar5 = pcVar4 + 1;
        *pcVar4 = cVar1;
      }
      iVar3 = FUN_00005404(dVar2,cVar1,ppcVar5);
    } while (iVar3 != -1);
  }
LAB_00004d60:
  uVar6 = 0xffffffff;
LAB_00004d64:
  if ((-1 < (int)ppcVar5[0x19] << 0x1f) && (-1 < (int)((uint)*(ushort *)(ppcVar5 + 3) << 0x16))) {
    FUN_000045ec(ppcVar5[0x16]);
  }
  return uVar6;
}


////>>0x00004dc8>>FUN_00004dc8>>////

void FUN_00004dc8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_00000490(param_1,(int)*(short *)(param_2 + 0xe));
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


////>>0x00004dee>>FUN_00004dee>>////

undefined4 FUN_00004dee(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    FUN_000004f2(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  uVar1 = FUN_00000e38(param_3,param_4);
  return uVar1;
}


////>>0x00004e26>>FUN_00004e26>>////

void FUN_00004e26(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  
  iVar1 = FUN_000004f2(param_1,(int)*(short *)(param_2 + 0xe));
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


////>>0x00004e52>>FUN_00004e52>>////

int FUN_00004e52(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  do {
    uVar2 = (uint)*param_1;
    bVar1 = *param_2;
    bVar3 = uVar2 == 1;
    if (uVar2 != 0) {
      bVar3 = uVar2 == bVar1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar3);
  return uVar2 - bVar1;
}


////>>0x00004e66>>FUN_00004e66>>////

int FUN_00004e66(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    pbVar3 = (byte *)(param_2 + -1);
    pbVar1 = param_1;
    do {
      uVar4 = (uint)*pbVar1;
      pbVar3 = pbVar3 + 1;
      if ((uVar4 != *pbVar3) || (pbVar1 + 1 == param_1 + param_3)) break;
      pbVar1 = pbVar1 + 1;
    } while (uVar4 != 0);
    iVar2 = uVar4 - *pbVar3;
  }
  return iVar2;
}


////>>0x00004f84>>FUN_00004f84>>////

uint FUN_00004f84(byte *param_1,byte **param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar9 = param_1;
  do {
    pbVar8 = pbVar9;
    pbVar9 = pbVar8 + 1;
    uVar2 = (uint)*pbVar8;
    uVar3 = (byte)(&DAT_00007a99)[uVar2] & 8;
  } while (((&DAT_00007a99)[uVar2] & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar9;
    uVar3 = 1;
    pbVar9 = pbVar8 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar9;
    pbVar9 = pbVar8 + 2;
  }
  if (param_3 == 0) {
    if (uVar2 != 0x30) {
      param_3 = 10;
      goto LAB_00004ed6;
    }
  }
  else if ((param_3 != 0x10) || (uVar2 != 0x30)) goto LAB_00004ed6;
  if ((*pbVar9 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar9[1];
    param_3 = 0x10;
    pbVar9 = pbVar9 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_3 == 0) {
      param_3 = 8;
    }
  }
LAB_00004ed6:
  uVar6 = uVar3 + 0x7fffffff;
  iVar5 = 0;
  uVar7 = uVar6 / param_3;
  uVar1 = 0;
  do {
    uVar4 = uVar2 - 0x30;
    if (9 < uVar4) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar4 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar4 = uVar2 - 0x57;
      }
    }
    if ((int)param_3 <= (int)uVar4) break;
    if (iVar5 != -1) {
      if ((uVar7 < uVar1) || ((uVar7 == uVar1 && ((int)(uVar6 - param_3 * uVar7) < (int)uVar4)))) {
        iVar5 = -1;
      }
      else {
        uVar1 = uVar1 * param_3 + uVar4;
        iVar5 = 1;
      }
    }
    uVar2 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
  if (iVar5 == -1) {
    *(undefined4 *)Elf32_Rel_ARRAY_1fff0200[16].r_offset = 0x22;
    uVar1 = uVar6;
    if (param_2 == (byte **)0x0) {
      return uVar6;
    }
  }
  else {
    if (uVar3 != 0) {
      uVar1 = -uVar1;
    }
    if (param_2 == (byte **)0x0) {
      return uVar1;
    }
    if (iVar5 == 0) goto LAB_00004f64;
  }
  param_1 = pbVar9 + -1;
LAB_00004f64:
  *param_2 = param_1;
  return uVar1;
}


////>>0x00004f98>>FUN_00004f98>>////

undefined4 FUN_00004f98(uint param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  puVar1 = (uint *)FUN_000056b0();
  if ((int)param_1 < 0x7b2) {
    uVar2 = 0;
  }
  else {
    iVar6 = (param_1 - 0x7b2) * 0x16d + ((int)(param_1 - 0x7b1) >> 2) +
            (param_1 - 0x76d) / 0xffffff9c + (param_1 - 0x641) / 400;
    puVar1[1] = param_1;
    uVar10 = (uint)(param_1 % 400 == 0);
    puVar5 = puVar1;
    do {
      uVar3 = puVar5[5];
      if (*(char *)(puVar5 + 2) == 'J') {
        if ((((param_1 & 3) == 0) && (param_1 % 100 != 0)) || (param_1 % 400 == 0)) {
          if ((int)uVar3 < 0x3c) {
            iVar4 = 0;
          }
          else {
            iVar4 = 1;
          }
        }
        else {
          iVar4 = 0;
        }
        iVar4 = iVar4 + iVar6 + uVar3 + -1;
      }
      else if (*(char *)(puVar5 + 2) == 'D') {
        iVar4 = iVar6 + uVar3;
      }
      else {
        uVar7 = uVar10;
        if (((param_1 & 3) == 0) && (param_1 % 100 != 0)) {
          uVar7 = 1;
        }
        iVar8 = 0;
        iVar4 = iVar6;
        while( true ) {
          iVar8 = iVar8 + 1;
          if ((int)puVar5[3] <= iVar8) break;
          iVar4 = iVar4 + *(int *)(&UNK_00007b98 + iVar8 * 4 + uVar7 * 0x30);
        }
        iVar9 = uVar3 - (iVar4 + 4U) % 7;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 7;
        }
        for (iVar9 = (puVar5[4] - 1) * 7 + iVar9;
            *(int *)(&UNK_00007b98 + iVar8 * 4 + uVar7 * 0x30) <= iVar9; iVar9 = iVar9 + -7) {
        }
        iVar4 = iVar4 + iVar9;
      }
      uVar3 = puVar5[10] + iVar4 * 0x15180 + puVar5[6];
      puVar5[8] = uVar3;
      puVar5[9] = (int)uVar3 >> 0x1f;
      puVar5 = puVar5 + 10;
    } while (puVar1 + 0x14 != puVar5);
    uVar3 = puVar1[9];
    uVar10 = puVar1[0x13];
    *puVar1 = (uint)((int)((uVar3 - uVar10) - (uint)(puVar1[8] < puVar1[0x12])) < 0 !=
                    (SBORROW4(uVar3,uVar10) !=
                    SBORROW4(uVar3 - uVar10,(uint)(puVar1[8] < puVar1[0x12]))));
    uVar2 = 1;
  }
  return uVar2;
}


////>>0x000050e8>>FUN_000050e8>>////

undefined * FUN_000050e8(void)

{
  return &DAT_1fff0deb;
}


////>>0x000050f4>>FUN_000050f4>>////

undefined * FUN_000050f4(void)

{
  return &DAT_1fff0deb;
}


////>>0x00005100>>FUN_00005100>>////

void FUN_00005100(void)

{
  dword dVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined uVar6;
  char *pcVar7;
  bool bVar8;
  ushort *puVar9;
  int *piVar10;
  ushort *puVar11;
  int *piVar12;
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  int local_30;
  char *local_2c [2];
  
  dVar1 = Elf32_Rel_ARRAY_1fff0200[16].r_offset;
  iVar2 = FUN_000056b0();
  pcVar3 = (char *)FUN_000056a0(dVar1,&DAT_00007a5c);
  if (pcVar3 == (char *)0x0) {
    Elf32_Rel_ARRAY_1fff0200[28].r_info = (dword)&DAT_00007a5f;
    Elf32_Rel_ARRAY_1fff0200[29].r_offset = (dword)&DAT_00007a5f;
    DAT_1fff0dd8 = pcVar3;
    DAT_1fff0ddc = pcVar3;
    FUN_00005780(DAT_1fff0dd4);
    DAT_1fff0dd4 = 0;
  }
  else if ((DAT_1fff0dd4 == 0) || (iVar4 = FUN_00004e52(), iVar4 != 0)) {
    FUN_00005780(DAT_1fff0dd4);
    iVar4 = FUN_00005ecc(pcVar3);
    DAT_1fff0dd4 = FUN_00004bd0(dVar1,iVar4 + 1);
    if (DAT_1fff0dd4 != 0) {
      FUN_00005ebc(DAT_1fff0dd4,pcVar3);
    }
    if (*pcVar3 == ':') {
      pcVar3 = pcVar3 + 1;
    }
    iVar4 = FUN_00005e68(pcVar3,"%10[^0-9,+-]%n",&DAT_1fff0dc7,&local_30);
    if (0 < iVar4) {
      pcVar7 = pcVar3 + local_30;
      if (pcVar3[local_30] == '-') {
        pcVar7 = pcVar7 + 1;
        iVar4 = -1;
      }
      else {
        if (pcVar3[local_30] == '+') {
          pcVar7 = pcVar7 + 1;
        }
        iVar4 = 1;
      }
      local_3a = 0;
      local_38 = 0;
      puVar9 = &local_3a;
      piVar10 = &local_30;
      puVar11 = &local_38;
      piVar12 = &local_30;
      iVar5 = FUN_00005e68(pcVar7,"%hu%n:%hu%n:%hu%n",&local_3c,&local_30,&local_3a,&local_30,
                           &local_38,&local_30);
      if (0 < iVar5) {
        *(uint *)(iVar2 + 0x28) =
             ((uint)local_3c * 0xe10 + (uint)local_3a * 0x3c + (uint)local_38) * iVar4;
        Elf32_Rel_ARRAY_1fff0200[28].r_info = (dword)&DAT_1fff0dc7;
        pcVar7 = pcVar7 + local_30;
        iVar4 = FUN_00005e68(pcVar7,"%10[^0-9,+-]%n",&DAT_1fff0dbc,&local_30,puVar9,piVar10,puVar11,
                             piVar12);
        if (iVar4 < 1) {
          Elf32_Rel_ARRAY_1fff0200[29].r_offset = Elf32_Rel_ARRAY_1fff0200[28].r_info;
          DAT_1fff0ddc = *(char **)(iVar2 + 0x28);
          DAT_1fff0dd8 = (char *)0x0;
        }
        else {
          Elf32_Rel_ARRAY_1fff0200[29].r_offset = (dword)&DAT_1fff0dbc;
          pcVar3 = pcVar7 + local_30;
          if (pcVar7[local_30] == '-') {
            pcVar3 = pcVar3 + 1;
            iVar4 = -1;
          }
          else {
            if (pcVar7[local_30] == '+') {
              pcVar3 = pcVar3 + 1;
            }
            iVar4 = 1;
          }
          local_3c = 0;
          local_3a = 0;
          local_38 = 0;
          local_30 = 0;
          iVar5 = FUN_00005e68(pcVar3,"%hu%n:%hu%n:%hu%n",&local_3c,&local_30,&local_3a,&local_30,
                               &local_38,&local_30);
          if (iVar5 < 1) {
            iVar4 = *(int *)(iVar2 + 0x28) + -0xe10;
          }
          else {
            iVar4 = ((uint)local_3c * 0xe10 + (uint)local_3a * 0x3c + (uint)local_38) * iVar4;
          }
          *(int *)(iVar2 + 0x50) = iVar4;
          pcVar3 = pcVar3 + local_30;
          bVar8 = false;
          iVar4 = iVar2;
          while( true ) {
            if (*pcVar3 == ',') {
              pcVar3 = pcVar3 + 1;
            }
            if (*pcVar3 == 'M') {
              iVar5 = FUN_00005e68(pcVar3,"M%hu%n.%hu%n.%hu%n",&local_36,&local_30,&local_34,
                                   &local_30,&local_32,&local_30);
              if (iVar5 != 3) {
                return;
              }
              if (0xb < local_36 - 1) {
                return;
              }
              if (4 < local_34 - 1) {
                return;
              }
              if (6 < local_32) {
                return;
              }
              *(uint *)(iVar4 + 0xc) = (uint)local_36;
              *(uint *)(iVar4 + 0x10) = (uint)local_34;
              *(undefined *)(iVar4 + 8) = 0x4d;
              *(uint *)(iVar4 + 0x14) = (uint)local_32;
              pcVar7 = pcVar3 + local_30;
            }
            else {
              if (*pcVar3 == 'J') {
                pcVar3 = pcVar3 + 1;
                uVar6 = 0x4a;
              }
              else {
                uVar6 = 0x44;
              }
              local_32 = FUN_00005fd8(pcVar3,local_2c,10);
              pcVar7 = local_2c[0];
              if (local_2c[0] == pcVar3) {
                if (bVar8) {
                  *(undefined *)(iVar2 + 0x30) = 0x4d;
                  *(undefined4 *)(iVar2 + 0x34) = 0xb;
                  *(undefined4 *)(iVar2 + 0x38) = 1;
                  *(undefined4 *)(iVar2 + 0x3c) = 0;
                }
                else {
                  *(undefined *)(iVar2 + 8) = 0x4d;
                  *(undefined4 *)(iVar2 + 0xc) = 3;
                  *(undefined4 *)(iVar2 + 0x10) = 2;
                  *(undefined4 *)(iVar2 + 0x14) = 0;
                }
              }
              else {
                *(undefined *)(iVar4 + 8) = uVar6;
                *(uint *)(iVar4 + 0x14) = (uint)local_32;
              }
            }
            local_3c = 2;
            local_3a = 0;
            local_38 = 0;
            local_30 = 0;
            if (*pcVar7 == '/') {
              FUN_00005e68(pcVar7,&DAT_00007a85,&local_3c,&local_30,&local_3a,&local_30,&local_38,
                           &local_30);
            }
            *(uint *)(iVar4 + 0x18) =
                 (uint)local_3c * 0xe10 + (uint)local_3a * 0x3c + (uint)local_38;
            iVar4 = iVar4 + 0x28;
            pcVar3 = pcVar7 + local_30;
            if (bVar8) break;
            bVar8 = true;
          }
          FUN_00004f98(*(undefined4 *)(iVar2 + 4));
          DAT_1fff0ddc = *(char **)(iVar2 + 0x28);
          DAT_1fff0dd8 = (char *)(*(int *)(iVar2 + 0x50) - (int)DAT_1fff0ddc);
          if (DAT_1fff0dd8 != (char *)0x0) {
            DAT_1fff0dd8 = (char *)0x1;
          }
        }
      }
    }
  }
  return;
}


////>>0x00005404>>FUN_00005404>>////

uint FUN_00005404(int param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_000042a4();
  }
  if (param_3 == &DAT_000079b8) {
    param_3 = *(int **)(param_1 + 4);
  }
  else if (param_3 == (int *)&DAT_000079d8) {
    param_3 = *(int **)(param_1 + 8);
  }
  else if (param_3 == (int *)&DAT_00007998) {
    param_3 = *(int **)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  uVar2 = (uint)*(ushort *)(param_3 + 3);
  iVar1 = uVar2 << 0x1c;
  if (((iVar1 < 0) && (uVar2 = param_3[4], uVar2 != 0)) ||
     (iVar1 = FUN_000054a8(param_1,param_3,iVar1,uVar2,param_4), iVar1 == 0)) {
    iVar1 = *param_3 - param_3[4];
    param_2 = param_2 & 0xff;
    if ((iVar1 < param_3[5]) || (iVar1 = FUN_00004158(param_1,param_3), iVar1 == 0)) {
      param_3[2] = param_3[2] + -1;
      puVar3 = (undefined *)*param_3;
      *param_3 = (int)(puVar3 + 1);
      *puVar3 = (char)param_2;
      if (param_3[5] != iVar1 + 1) {
        if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x1f)) {
          return param_2;
        }
        if (param_2 != 10) {
          return param_2;
        }
      }
      iVar1 = FUN_00004158(param_1,param_3);
      if (iVar1 == 0) {
        return param_2;
      }
    }
  }
  return 0xffffffff;
}


////>>0x000054a8>>FUN_000054a8>>////

uint FUN_000054a8(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  dword dVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  dVar2 = Elf32_Rel_ARRAY_1fff0200[16].r_offset;
  if ((Elf32_Rel_ARRAY_1fff0200[16].r_offset != 0) &&
     (*(int *)(Elf32_Rel_ARRAY_1fff0200[16].r_offset + 0x18) == 0)) {
    FUN_000042a4(Elf32_Rel_ARRAY_1fff0200[16].r_offset);
  }
  if (param_2 == &DAT_000079b8) {
    param_2 = *(undefined4 **)(dVar2 + 4);
  }
  else if (param_2 == (undefined4 *)&DAT_000079d8) {
    param_2 = *(undefined4 **)(dVar2 + 8);
  }
  else if (param_2 == (undefined4 *)&DAT_00007998) {
    param_2 = *(undefined4 **)(dVar2 + 0xc);
  }
  uVar4 = (uint)*(ushort *)(param_2 + 3);
  uVar3 = *(ushort *)(param_2 + 3);
  if (-1 < (int)(uVar4 << 0x1c)) {
    if (-1 < (int)(uVar4 << 0x1b)) {
      *param_1 = 9;
      goto LAB_000054d8;
    }
    if ((int)(uVar4 << 0x1d) < 0) {
      if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
        if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
          FUN_00004b34(param_1);
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
    FUN_00005700(param_1,param_2);
  }
  uVar1 = *(ushort *)(param_2 + 3);
  uVar4 = (uint)uVar1;
  uVar3 = *(ushort *)(param_2 + 3);
  uVar5 = uVar4 & 1;
  if ((uVar1 & 1) == 0) {
    if (-1 < (int)(uVar4 << 0x1e)) {
      uVar5 = param_2[5];
    }
    param_2[2] = uVar5;
  }
  else {
    param_2[2] = 0;
    param_2[6] = -param_2[5];
  }
  if (param_2[4] != 0) {
    return 0;
  }
  if ((uVar1 & 0x80) == 0) {
    return uVar4 & 0x80;
  }
LAB_000054d8:
  *(ushort *)(param_2 + 3) = uVar3 | 0x40;
  return 0xffffffff;
}


////>>0x00005584>>FUN_00005584>>////

void FUN_00005584(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 / param_3;
  uVar1 = param_2 - param_3 * uVar2;
  if ((int)param_2 < 0) {
    if (0 < (int)uVar1) {
      uVar2 = uVar2 - 1;
      uVar1 = uVar1 + param_3;
    }
  }
  else if ((int)uVar1 < 0) {
    uVar2 = uVar2 + 1;
    uVar1 = uVar1 - param_3;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}


////>>0x0000562c>>FUN_0000562c>>////

int FUN_0000562c(undefined4 param_1,char *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  
  FUN_00005fec();
  pcVar4 = param_2;
  if (Elf32_Rel_ARRAY_1fff0200[41].r_offset != 0) {
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '\0') {
        iVar6 = (int)pcVar4 - (int)param_2;
        piVar2 = (int *)Elf32_Rel_ARRAY_1fff0200[41].r_offset;
        while( true ) {
          piVar5 = piVar2;
          if (*piVar5 == 0) break;
          iVar3 = FUN_00004e66(*piVar5,param_2,iVar6);
          piVar2 = piVar5 + 1;
          if ((iVar3 == 0) && (iVar3 = *piVar5, *(char *)(iVar3 + iVar6) == '=')) {
            *param_3 = (int)((int)piVar5 - Elf32_Rel_ARRAY_1fff0200[41].r_offset) >> 2;
            FUN_00005ff8(param_1);
            return iVar3 + iVar6 + 1;
          }
        }
        break;
      }
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '=');
  }
  FUN_00005ff8(param_1);
  return 0;
}


////>>0x000056a0>>FUN_000056a0>>////

void FUN_000056a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  FUN_0000562c(param_1,param_2,&uStack_c,param_4,param_1);
  return;
}


////>>0x000056b0>>FUN_000056b0>>////

undefined4 FUN_000056b0(void)

{
  return 0x1fff02f0;
}


////>>0x000056b8>>FUN_000056b8>>////

undefined4 FUN_000056b8(undefined4 param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_68 [4];
  uint local_64;
  
  if ((*(short *)(param_2 + 0xe) < 0) ||
     (iVar1 = FUN_00000514(param_1,(int)*(short *)(param_2 + 0xe),auStack_68), iVar1 < 0)) {
    *param_4 = 0;
    if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x18) < 0) {
      uVar2 = 0x40;
      goto LAB_000056f8;
    }
  }
  else {
    *param_4 = (uint)((local_64 & 0xf000) == 0x2000);
  }
  uVar2 = 0x400;
LAB_000056f8:
  *param_3 = uVar2;
  return 0;
}


////>>0x00005700>>FUN_00005700>>////

void FUN_00005700(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int local_18;
  int *local_14;
  
  if (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1e)) {
    local_18 = param_1;
    local_14 = param_2;
    uVar1 = FUN_000056b8(param_1,param_2,&local_18,&local_14);
    iVar2 = FUN_00004bd0(param_1,local_18);
    if (iVar2 != 0) {
      *(undefined **)(param_1 + 0x28) = &DAT_0000423d;
      *param_2 = iVar2;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x80;
      param_2[5] = local_18;
      param_2[4] = iVar2;
      if ((local_14 != (int *)0x0) &&
         (iVar2 = FUN_00000534(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0)) {
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


////>>0x00005780>>FUN_00005780>>////

void FUN_00005780(undefined4 param_1)

{
  FUN_00004b34(Elf32_Rel_ARRAY_1fff0200[16].r_offset,param_1);
  return;
}


////>>0x00005790>>FUN_00005790>>////

void FUN_00005790(void)

{
  FUN_000045e8(&DAT_1fff0de8);
  return;
}


////>>0x0000579c>>FUN_0000579c>>////

void FUN_0000579c(void)

{
  FUN_000045ec(&DAT_1fff0de8);
  return;
}


////>>0x000057a8>>FUN_000057a8>>////

int FUN_000057a8(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = param_3[2] + -1;
  param_3[2] = iVar1;
  if ((iVar1 < 0) && ((iVar1 < (int)param_3[6] || (param_2 == 10)))) {
    iVar1 = FUN_00005404();
    return iVar1;
  }
  puVar2 = (undefined *)*param_3;
  *param_3 = puVar2 + 1;
  *puVar2 = (char)param_2;
  return param_2;
}


////>>0x000057d2>>FUN_000057d2>>////

int FUN_000057d2(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

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
    iVar1 = FUN_000057a8(param_1,*param_3,param_2,param_4,iVar3);
    param_4 = iVar1 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return iVar1;
}


////>>0x000057f8>>FUN_000057f8>>////

/* WARNING: Removing unreachable block (ram,0x000059f0) */

int FUN_000057f8(int param_1,undefined4 *param_2,byte *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  byte *pbVar5;
  int unaff_r7;
  byte *pbVar6;
  int *local_8c;
  uint local_88;
  int local_84;
  undefined4 uStack_80;
  int local_7c;
  int local_74;
  byte local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_45;
  undefined4 local_30;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_000042a4();
  }
  if (param_2 == &DAT_000079b8) {
    param_2 = *(undefined4 **)(param_1 + 4);
  }
  else if (param_2 == (undefined4 *)&DAT_000079d8) {
    param_2 = *(undefined4 **)(param_1 + 8);
  }
  else if (param_2 == (undefined4 *)&DAT_00007998) {
    param_2 = *(undefined4 **)(param_1 + 0xc);
  }
  if ((-1 < (int)(param_2[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16))) {
    FUN_000045e8(param_2[0x16]);
  }
  if (((-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1c)) || (param_2[4] == 0)) &&
     (iVar1 = FUN_000054a8(param_1,param_2), iVar1 != 0)) {
    if ((-1 < (int)(param_2[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16)))
    {
      FUN_000045ec(param_2[0x16]);
    }
    return -1;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar6 = param_3;
  local_8c = param_4;
LAB_0000588e:
  pbVar5 = pbVar6;
  if (*pbVar5 != 0) goto code_r0x00005896;
  goto LAB_0000589a;
code_r0x00005896:
  pbVar6 = pbVar5 + 1;
  if (*pbVar5 == 0x25) {
LAB_0000589a:
    iVar1 = (int)pbVar5 - (int)param_3;
    if (iVar1 != 0) {
      iVar2 = FUN_000057d2(param_1,param_2,param_3,iVar1);
      if (iVar2 == -1) {
LAB_00005a06:
        if ((-1 < (int)(param_2[0x19] << 0x1f)) &&
           (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16))) {
          FUN_000045ec(param_2[0x16]);
        }
        if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
          return -1;
        }
        return local_74;
      }
      local_74 = local_74 + iVar1;
    }
    if (*pbVar5 == 0) goto LAB_00005a06;
    local_84 = -1;
    uStack_80 = 0;
    local_88 = 0;
    local_7c = 0;
    local_45 = 0;
    local_30 = 0;
    pbVar6 = pbVar5 + 1;
    while( true ) {
      pbVar5 = pbVar6 + 1;
      iVar1 = FUN_00006010("#-0+ ",*pbVar6,5);
      if (iVar1 == 0) break;
      local_88 = 1 << (iVar1 - 0x7bfcU & 0xff) | local_88;
      pbVar6 = pbVar5;
    }
    if ((int)(local_88 << 0x1b) < 0) {
      local_45 = 0x20;
    }
    if ((int)(local_88 << 0x1c) < 0) {
      local_45 = 0x2b;
    }
    if (*pbVar6 == 0x2a) {
      piVar3 = local_8c + 1;
      local_7c = *local_8c;
      local_8c = piVar3;
      if (local_7c < 0) {
        local_7c = -local_7c;
        local_88 = local_88 | 2;
      }
    }
    else {
      bVar4 = false;
      iVar1 = local_7c;
      pbVar5 = pbVar6;
      while( true ) {
        if (9 < *pbVar5 - 0x30) break;
        iVar1 = iVar1 * 10 + (*pbVar5 - 0x30);
        bVar4 = true;
        pbVar5 = pbVar5 + 1;
      }
      if (bVar4) {
        local_7c = iVar1;
      }
    }
    if (*pbVar5 == 0x2e) {
      if (pbVar5[1] == 0x2a) {
        local_84 = *local_8c;
        if (local_84 < 0) {
          local_84 = -1;
        }
        pbVar5 = pbVar5 + 2;
        local_8c = local_8c + 1;
      }
      else {
        bVar4 = false;
        local_84 = 0;
        iVar1 = 0;
        while( true ) {
          pbVar5 = pbVar5 + 1;
          if (9 < *pbVar5 - 0x30) break;
          iVar1 = iVar1 * 10 + (*pbVar5 - 0x30);
          bVar4 = true;
        }
        if (bVar4) {
          local_84 = iVar1;
        }
      }
    }
    iVar1 = FUN_00006010(&DAT_00007c02,*pbVar5,3);
    if (iVar1 != 0) {
      local_88 = local_88 | 0x40 << (iVar1 - 0x7c02U & 0xff);
      pbVar5 = pbVar5 + 1;
    }
    param_3 = pbVar5 + 1;
    local_70 = *pbVar5;
    iVar1 = FUN_00006010("efgEFG",local_70,6);
    if (iVar1 == 0) {
      unaff_r7 = FUN_00005b34(param_1,&local_88,param_2,0x57d3,&local_8c);
      if (unaff_r7 == -1) goto LAB_00005a06;
    }
    else {
      local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
    }
    local_74 = local_74 + unaff_r7;
    pbVar6 = param_3;
  }
  goto LAB_0000588e;
}


////>>0x00005a58>>FUN_00005a58>>////

undefined4
FUN_00005a58(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = param_2[4];
  if ((int)param_2[4] < (int)param_2[2]) {
    uVar4 = param_2[2];
  }
  *param_3 = uVar4;
  if (*(char *)((int)param_2 + 0x43) != '\0') {
    *param_3 = uVar4 + 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *param_3 = *param_3 + 2;
  }
  if ((*param_2 & 6) == 0) {
    for (iVar1 = 0; iVar1 < (int)(param_2[3] - *param_3); iVar1 = iVar1 + 1) {
      iVar3 = (*param_5)(param_1,param_4,(int)param_2 + 0x19,1);
      if (iVar3 == -1) goto LAB_00005afc;
    }
  }
  uVar4 = (uint)*(byte *)((int)param_2 + 0x43);
  if (uVar4 != 0) {
    uVar4 = 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *(undefined *)((int)param_2 + uVar4 + 0x43) = 0x30;
    *(undefined *)((int)param_2 + uVar4 + 0x44) = *(undefined *)((int)param_2 + 0x45);
    uVar4 = uVar4 + 2;
  }
  iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x43,uVar4);
  if (iVar1 == -1) {
LAB_00005afc:
    uVar2 = 0xffffffff;
  }
  else {
    uVar4 = param_2[3];
    bVar6 = (*param_2 & 6) == 4;
    if (bVar6) {
      uVar4 = uVar4 - *param_3;
    }
    if (bVar6) {
      uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
    }
    else {
      uVar4 = 0;
    }
    if ((int)param_2[4] < (int)param_2[2]) {
      uVar4 = uVar4 + (param_2[2] - param_2[4]);
    }
    for (uVar5 = 0; uVar4 != uVar5; uVar5 = uVar5 + 1) {
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x1a,1);
      if (iVar1 == -1) goto LAB_00005afc;
    }
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x00005b34>>FUN_00005b34>>////

code * FUN_00005b34(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5
                   )

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint **ppuVar11;
  char **ppcVar12;
  uint uVar13;
  char *pcVar14;
  code *local_24;
  
  bVar2 = *(byte *)(param_2 + 6);
  pcVar7 = (char *)((int)param_2 + 0x43);
  local_24 = param_4;
  if (0x78 < bVar2) {
switchD_00005b70_caseD_65:
    *(byte *)((int)param_2 + 0x42) = bVar2;
LAB_00005bdc:
    pcVar7 = (char *)((int)param_2 + 0x42);
    uVar8 = 1;
LAB_00005d28:
    param_2[4] = uVar8;
    *(undefined *)((int)param_2 + 0x43) = 0;
    goto LAB_00005c84;
  }
  if (bVar2 < 99) {
    if (bVar2 == 0) goto LAB_00005d06;
    if (bVar2 == 0x58) {
      pcVar5 = "0123456789ABCDEF";
      *(undefined *)((int)param_2 + 0x45) = 0x58;
      goto LAB_00005ca8;
    }
    goto switchD_00005b70_caseD_65;
  }
  switch(bVar2) {
  case 99:
    uVar8 = **param_5;
    *param_5 = *param_5 + 1;
    *(char *)((int)param_2 + 0x42) = (char)uVar8;
    goto LAB_00005bdc;
  case 100:
  case 0x69:
    uVar10 = *param_2;
    puVar9 = *param_5;
    if ((int)(uVar10 << 0x18) < 0) {
      uVar8 = *puVar9;
      *param_5 = puVar9 + 1;
    }
    else {
      uVar8 = *puVar9;
      *param_5 = puVar9 + 1;
      if ((uVar10 & 0x40) != 0) {
        uVar8 = (uint)(short)uVar8;
      }
    }
    if ((int)uVar8 < 0) {
      uVar8 = -uVar8;
      *(undefined *)((int)param_2 + 0x43) = 0x2d;
    }
    pcVar5 = "0123456789ABCDEF";
    uVar10 = 10;
    goto LAB_00005c36;
  default:
    goto switchD_00005b70_caseD_65;
  case 0x6e:
    ppuVar11 = (uint **)*param_5;
    uVar10 = *param_2;
    uVar8 = param_2[5];
    *param_5 = (uint *)(ppuVar11 + 1);
    puVar9 = *ppuVar11;
    if (((int)(uVar10 << 0x18) < 0) || (-1 < (int)(uVar10 << 0x19))) {
      *puVar9 = uVar8;
    }
    else {
      *(short *)puVar9 = (short)uVar8;
    }
LAB_00005d06:
    param_2[4] = 0;
    goto LAB_00005c84;
  case 0x6f:
  case 0x75:
    puVar9 = *param_5;
    uVar8 = *param_2;
    *param_5 = puVar9 + 1;
    if (((int)(uVar8 << 0x18) < 0) || (-1 < (int)(uVar8 << 0x19))) {
      uVar8 = *puVar9;
    }
    else {
      uVar8 = (uint)*(ushort *)puVar9;
    }
    pcVar5 = "0123456789ABCDEF";
    if (bVar2 == 0x6f) {
      uVar10 = 8;
    }
    else {
      uVar10 = 10;
    }
    break;
  case 0x70:
    *param_2 = *param_2 | 0x20;
  case 0x78:
    pcVar5 = "0123456789abcdef";
    *(undefined *)((int)param_2 + 0x45) = 0x78;
LAB_00005ca8:
    uVar10 = *param_2;
    uVar8 = **param_5;
    *param_5 = *param_5 + 1;
    if ((-1 < (int)(uVar10 << 0x18)) && ((int)(uVar10 << 0x19) < 0)) {
      uVar8 = uVar8 & 0xffff;
    }
    if ((int)(uVar10 << 0x1f) < 0) {
      *param_2 = uVar10 | 0x20;
    }
    if (uVar8 == 0) {
      *param_2 = *param_2 & 0xffffffdf;
    }
    uVar10 = 0x10;
    break;
  case 0x73:
    ppcVar12 = (char **)*param_5;
    *param_5 = (uint *)(ppcVar12 + 1);
    pcVar7 = *ppcVar12;
    iVar3 = FUN_00006010(pcVar7,0,param_2[1],ppcVar12,param_1,param_2,param_3);
    if (iVar3 != 0) {
      param_2[1] = iVar3 - (int)pcVar7;
    }
    uVar8 = param_2[1];
    goto LAB_00005d28;
  }
  *(undefined *)((int)param_2 + 0x43) = 0;
LAB_00005c36:
  uVar13 = param_2[1];
  param_2[2] = uVar13;
  if (-1 < (int)uVar13) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  pcVar14 = pcVar7;
  if ((uVar8 != 0) || (uVar13 != 0)) {
    do {
      pcVar14 = pcVar14 + -1;
      *pcVar14 = pcVar5[uVar8 - uVar10 * (uVar8 / uVar10)];
      bVar1 = uVar10 <= uVar8;
      uVar8 = uVar8 / uVar10;
    } while (bVar1);
  }
  if (((uVar10 == 8) && ((int)(*param_2 << 0x1f) < 0)) && ((int)param_2[1] <= (int)param_2[4])) {
    pcVar14[-1] = '0';
    pcVar14 = pcVar14 + -1;
  }
  param_2[4] = (int)pcVar7 - (int)pcVar14;
  pcVar7 = pcVar14;
LAB_00005c84:
  iVar3 = FUN_00005a58(param_1,param_2,&local_24,param_3,param_4);
  if ((iVar3 == -1) || (iVar3 = (*param_4)(param_1,param_3,pcVar7,param_2[4]), iVar3 == -1)) {
LAB_00005c98:
    pcVar4 = (code *)0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar3 = 0; iVar3 < (int)(param_2[3] - (int)local_24); iVar3 = iVar3 + 1) {
        iVar6 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar6 == -1) goto LAB_00005c98;
      }
    }
    pcVar4 = (code *)param_2[3];
    if ((int)(code *)param_2[3] < (int)local_24) {
      pcVar4 = local_24;
    }
  }
  return pcVar4;
}


////>>0x00005e10>>FUN_00005e10>>////

uint FUN_00005e10(int param_1,byte **param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    FUN_000042a4();
  }
  if (param_2 == (byte **)&DAT_000079b8) {
    param_2 = *(byte ***)(param_1 + 4);
  }
  else if (param_2 == (byte **)&DAT_000079d8) {
    param_2 = *(byte ***)(param_1 + 8);
  }
  else if (param_2 == (byte **)&DAT_00007998) {
    param_2 = *(byte ***)(param_1 + 0xc);
  }
  iVar1 = FUN_00006768(param_1,param_2);
  if (iVar1 == 0) {
    param_2[1] = param_2[1] + -1;
    pbVar3 = *param_2;
    *param_2 = pbVar3 + 1;
    uVar2 = (uint)*pbVar3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


////>>0x00005e68>>FUN_00005e68>>////

void FUN_00005e68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_5c;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_74 = 0x204;
  local_80 = param_1;
  local_70 = param_1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  local_7c = FUN_00005ecc();
  local_5c = &LAB_00004dea_1;
  local_4c = 0;
  local_38 = 0;
  local_72 = 0xffff;
  local_6c = local_7c;
  FUN_000061cc(Elf32_Rel_ARRAY_1fff0200[16].r_offset,&local_80,param_2,&uStack_8);
  return;
}


////>>0x00005ebc>>FUN_00005ebc>>////

void FUN_00005ebc(char *param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}


////>>0x00005ecc>>FUN_00005ecc>>////

char * FUN_00005ecc(char *param_1)

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


////>>0x00005edc>>FUN_00005edc>>////

uint FUN_00005edc(undefined4 *param_1,byte *param_2,byte **param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar8 = param_2;
  do {
    pbVar7 = pbVar8;
    pbVar8 = pbVar7 + 1;
    uVar2 = (uint)*pbVar7;
    bVar3 = (&DAT_00007a99)[uVar2] & 8;
  } while (((&DAT_00007a99)[uVar2] & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar8;
    bVar3 = 1;
    pbVar8 = pbVar7 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  if (param_4 == 0) {
    if (uVar2 != 0x30) {
      param_4 = 10;
      goto LAB_00005f26;
    }
  }
  else if ((param_4 != 0x10) || (uVar2 != 0x30)) goto LAB_00005f26;
  if ((*pbVar8 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar8[1];
    param_4 = 0x10;
    pbVar8 = pbVar8 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_4 == 0) {
      param_4 = 8;
    }
  }
LAB_00005f26:
  iVar4 = 0;
  uVar6 = 0xffffffff / param_4;
  uVar1 = 0;
  do {
    uVar5 = uVar2 - 0x30;
    if (9 < uVar5) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar5 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar5 = uVar2 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar5) break;
    if (((iVar4 < 0) || (uVar6 < uVar1)) ||
       ((uVar6 == uVar1 && ((int)~(param_4 * uVar6) < (int)uVar5)))) {
      iVar4 = -1;
    }
    else {
      uVar1 = uVar1 * param_4 + uVar5;
      iVar4 = 1;
    }
    uVar2 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
  } while( true );
  if (iVar4 < 0) {
    *param_1 = 0x22;
    uVar1 = 0xffffffff;
    if (param_3 == (byte **)0x0) {
      return 0xffffffff;
    }
  }
  else {
    if (bVar3 != 0) {
      uVar1 = -uVar1;
    }
    if (param_3 == (byte **)0x0) {
      return uVar1;
    }
    if (iVar4 == 0) goto LAB_00005fb8;
  }
  param_2 = pbVar8 + -1;
LAB_00005fb8:
  *param_3 = param_2;
  return uVar1;
}


////>>0x00005fd8>>FUN_00005fd8>>////

void FUN_00005fd8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00005edc(Elf32_Rel_ARRAY_1fff0200[16].r_offset,param_1,param_2,param_3);
  return;
}


////>>0x00005fec>>FUN_00005fec>>////

void FUN_00005fec(void)

{
  FUN_000045e8(0x1fff0de6);
  return;
}


////>>0x00005ff8>>FUN_00005ff8>>////

void FUN_00005ff8(void)

{
  FUN_000045ec(0x1fff0de6);
  return;
}


////>>0x00006010>>FUN_00006010>>////

byte * FUN_00006010(uint *param_1,uint param_2,uint param_3)

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
joined_r0x00006070:
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
        goto joined_r0x00006070;
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


////>>0x000060b0>>FUN_000060b0>>////

void FUN_000060b0(int param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = param_2 + param_3;
  puVar3 = (undefined *)(param_1 + -1);
  if (param_2 != puVar2) {
    do {
      puVar1 = param_2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *param_2;
      param_2 = puVar1;
    } while (puVar1 != puVar2);
    return;
  }
  return;
}


////>>0x000060cc>>FUN_000060cc>>////

int FUN_000060cc(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      FUN_00004b34();
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_00006964();
      iVar1 = param_2;
      if ((uVar2 < param_3) && (iVar1 = FUN_00004bd0(param_1,param_3), iVar1 != 0)) {
        FUN_000060b0(iVar1,param_2,param_3);
        FUN_00004b34(param_1,param_2);
      }
    }
    return iVar1;
  }
  iVar1 = FUN_00004bd0(param_1,param_3,param_3,param_4);
  return iVar1;
}


////>>0x00006192>>FUN_00006192>>////

undefined4 FUN_00006192(undefined4 param_1,undefined4 *param_2)

{
  if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
    if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
      FUN_00004b34();
    }
    param_2[1] = param_2[0x10];
    param_2[0xd] = 0;
    if (param_2[0x10] != 0) {
      *param_2 = param_2[0xf];
      return 0;
    }
  }
  *param_2 = param_2[4];
  param_2[1] = 0;
  *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x20;
  return 0xffffffff;
}


////>>0x000061cc>>FUN_000061cc>>////

/* WARNING: Removing unreachable block (ram,0x00006482) */

int FUN_000061cc(undefined4 param_1,byte **param_2,byte *param_3,int **param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int **local_2b0;
  undefined auStack_2ac [256];
  uint local_1ac;
  undefined4 local_1a8;
  uint local_1a4;
  int local_1a0;
  int local_19c;
  undefined *local_198;
  int local_194;
  undefined *local_30;
  code *local_2c;
  
  local_1a0 = 0;
  local_19c = 0;
  local_30 = &LAB_00006118_1;
  local_2c = FUN_00006192 + 1;
  local_2b0 = param_4;
  local_198 = auStack_2ac;
LAB_000061f6:
  while( true ) {
    while( true ) {
      uVar4 = (uint)*param_3;
      if (uVar4 == 0) {
        return local_1a0;
      }
      uVar2 = (byte)(&DAT_00007a99)[uVar4] & 8;
      pbVar3 = param_3 + 1;
      if (((&DAT_00007a99)[uVar4] & 8) == 0) break;
      while (((param_3 = pbVar3, 0 < (int)param_2[1] ||
              (iVar1 = (*local_2c)(param_1,param_2), iVar1 == 0)) &&
             ((int)((uint)(byte)(&DAT_00007a99)[**param_2] << 0x1c) < 0))) {
        local_19c = local_19c + 1;
        param_2[1] = param_2[1] + -1;
        *param_2 = *param_2 + 1;
      }
    }
    if (uVar4 == 0x25) break;
LAB_00006352:
    if (((int)param_2[1] < 1) && (iVar1 = (*local_2c)(param_1,param_2), iVar1 != 0))
    goto LAB_00006380;
    if (**param_2 != uVar4) {
      return local_1a0;
    }
    *param_2 = *param_2 + 1;
    local_19c = local_19c + 1;
    param_2[1] = param_2[1] + -1;
    param_3 = pbVar3;
  }
  local_1a4 = uVar2;
  local_1ac = uVar2;
  if (param_3[1] == 0x2a) {
    pbVar3 = param_3 + 2;
    local_1ac = 0x10;
  }
  while( true ) {
    uVar2 = (uint)*pbVar3;
    if (9 < uVar2 - 0x30) break;
    pbVar3 = pbVar3 + 1;
    local_1a4 = (local_1a4 * 10 + uVar2) - 0x30;
  }
  iVar1 = FUN_00006010(&DAT_00007c02,uVar2,3);
  if (iVar1 != 0) {
    local_1ac = 1 << (iVar1 - 0x7c02U & 0xff) | local_1ac;
    pbVar3 = pbVar3 + 1;
  }
  param_3 = pbVar3 + 1;
  uVar2 = (uint)*pbVar3;
  if (uVar2 < 0x79) {
    if (0x57 < uVar2) {
      switch(uVar2) {
      default:
        goto switchD_000062c0_caseD_59;
      case 0x5b:
        param_3 = (byte *)FUN_0000687c(auStack_2ac,param_3);
        local_1ac = local_1ac | 0x40;
        local_194 = 1;
        break;
      case 99:
        local_1ac = local_1ac | 0x40;
        local_194 = 0;
        break;
      case 100:
      case 0x75:
        local_1a8 = 10;
LAB_000063a0:
        if (uVar2 < 0x6f) {
          local_194 = 3;
        }
        else {
          local_194 = 4;
        }
        break;
      case 0x65:
      case 0x66:
      case 0x67:
switchD_000062c0_caseD_65:
        local_194 = 5;
        break;
      case 0x69:
        local_1a8 = 0;
        local_194 = 3;
        break;
      case 0x6e:
        if (-1 < (int)(local_1ac << 0x1b)) {
          if ((int)(local_1ac << 0x1f) < 0) {
            *(short *)*local_2b0 = (short)local_19c;
            local_2b0 = local_2b0 + 1;
          }
          else {
            **local_2b0 = local_19c;
            local_2b0 = local_2b0 + 1;
          }
        }
        goto LAB_000061f6;
      case 0x6f:
        local_1a8 = 8;
        local_194 = 4;
        break;
      case 0x70:
        local_1ac = local_1ac | 0x20;
      case 0x58:
      case 0x78:
        local_1ac = local_1ac | 0x200;
        local_1a8 = 0x10;
        goto LAB_000063a0;
      case 0x73:
        local_194 = 2;
      }
LAB_000063ac:
      if (((int)param_2[1] < 1) && (iVar1 = (*local_2c)(param_1,param_2), iVar1 != 0))
      goto LAB_00006380;
      if (-1 < (int)(local_1ac << 0x19)) {
        while ((int)((uint)(byte)(&DAT_00007a99)[**param_2] << 0x1c) < 0) {
          local_19c = local_19c + 1;
          pbVar3 = param_2[1];
          param_2[1] = pbVar3 + -1;
          if ((int)(pbVar3 + -1) < 1) {
            iVar1 = (*local_2c)(param_1,param_2);
            if (iVar1 != 0) goto LAB_00006380;
          }
          else {
            *param_2 = *param_2 + 1;
          }
        }
      }
      if (local_194 < 3) {
        iVar1 = FUN_000064bc(param_1,&local_1ac,param_2,&local_2b0);
      }
      else {
        if (4 < local_194) goto LAB_000061f6;
        iVar1 = FUN_0000656c(param_1,&local_1ac,param_2,&local_2b0);
      }
      if (iVar1 == 1) {
        return local_1a0;
      }
      if (iVar1 == 2) {
LAB_00006380:
        if (local_1a0 == 0) {
LAB_00006388:
          local_1a0 = -1;
        }
        else if ((*(ushort *)(param_2 + 3) & 0x40) != 0) {
          local_1a0 = -1;
        }
        return local_1a0;
      }
      goto LAB_000061f6;
    }
    pbVar3 = param_3;
    if (uVar2 == 0x25) goto LAB_00006352;
    if (uVar2 < 0x26) {
      if (uVar2 != 0) goto switchD_000062c0_caseD_59;
      goto LAB_00006388;
    }
    if (uVar2 - 0x45 < 3) goto switchD_000062c0_caseD_65;
  }
switchD_000062c0_caseD_59:
  local_194 = 3;
  local_1a8 = 10;
  goto LAB_000063ac;
}


////>>0x000064bc>>FUN_000064bc>>////

undefined4 FUN_000064bc(undefined4 param_1,uint *param_2,byte **param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  byte **ppbVar3;
  byte *pbVar4;
  byte *unaff_r6;
  byte *pbVar5;
  int iVar6;
  
  if (param_2[2] == 0) {
    if (param_2[6] == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
    param_2[2] = uVar2;
  }
  if (-1 < (int)(*param_2 << 0x1b)) {
    ppbVar3 = (byte **)*param_4;
    *param_4 = ppbVar3 + 1;
    unaff_r6 = *ppbVar3;
  }
  iVar6 = 0;
  do {
    uVar2 = param_2[6];
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        if (*(char *)(param_2[5] + (uint)**param_3) == '\0') {
          if (iVar6 == 0) {
            return 1;
          }
LAB_0000654a:
          if (((*param_2 & 0x10) == 0) && (param_2[3] = param_2[3] + 1, param_2[6] != 0)) {
            *unaff_r6 = 0;
          }
          param_2[4] = iVar6 + param_2[4];
          return 0;
        }
      }
      else if ((uVar2 != 2) || ((int)((uint)(byte)(&DAT_00007a99)[**param_3] << 0x1c) < 0))
      goto LAB_0000654a;
    }
    pbVar5 = unaff_r6;
    if (-1 < (int)(*param_2 << 0x1b)) {
      pbVar5 = unaff_r6 + 1;
      *unaff_r6 = **param_3;
    }
    pbVar4 = param_3[1];
    *param_3 = *param_3 + 1;
    uVar2 = param_2[2] - 1;
    param_3[1] = pbVar4 + -1;
    iVar6 = iVar6 + 1;
    param_2[2] = uVar2;
    unaff_r6 = pbVar5;
    if ((uVar2 == 0) ||
       (((int)(pbVar4 + -1) < 1 &&
        (iVar1 = (*(code *)param_2[0x60])(param_1,param_3,uVar2,(code *)param_2[0x60],param_4),
        iVar1 != 0)))) goto LAB_0000654a;
  } while( true );
}


////>>0x0000656c>>FUN_0000656c>>////

undefined4 FUN_0000656c(undefined4 param_1,uint *param_2,byte **param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int unaff_r9;
  int iVar11;
  undefined *local_34 [4];
  
  local_34[0] = &DAT_00007c2f;
  local_34[1] = &DAT_00007c32;
  local_34[2] = &DAT_00007c35;
  pcVar3 = (code *)&UNK_00004f81;
  if (param_2[6] != 3) {
    pcVar3 = (code *)&UNK_00005fd5;
  }
  uVar6 = param_2[2];
  uVar4 = uVar6 - 1;
  if (0x15c < uVar4) {
    unaff_r9 = uVar6 - 0x15d;
    uVar6 = 0x15d;
  }
  if (0x15c < uVar4) {
    param_2[2] = uVar6;
  }
  puVar10 = param_2 + 7;
  if (uVar4 < 0x15d) {
    unaff_r9 = 0;
  }
  *param_2 = *param_2 | 0xd00;
  iVar11 = 0;
  puVar9 = puVar10;
  do {
    iVar1 = FUN_00006010(local_34[iVar11],**param_3,2);
    if (iVar1 != 0) {
      if (iVar11 == 1) {
        if (param_2[1] == 0) {
          param_2[1] = 8;
          *param_2 = *param_2 | 0x200;
        }
        uVar4 = *param_2 & 0xfffffaff;
LAB_000065f4:
        *param_2 = uVar4;
      }
      else if (iVar11 == 2) {
        if ((*param_2 & 0x600) != 0x200) goto LAB_00006624;
        param_2[1] = 0x10;
        uVar4 = *param_2 | 0x100;
        goto LAB_000065f4;
      }
      uVar4 = param_2[2];
      param_2[2] = uVar4 - 1;
      if (uVar4 != 0) {
        pbVar5 = *param_3;
        *param_3 = pbVar5 + 1;
        puVar8 = (uint *)((int)puVar9 + 1);
        *(byte *)puVar9 = *pbVar5;
        pbVar5 = param_3[1];
        param_3[1] = pbVar5 + -1;
        puVar9 = puVar8;
        if (((int)(pbVar5 + -1) < 1) &&
           (iVar1 = (*(code *)param_2[0x60])(param_1,param_3), iVar1 != 0)) {
          iVar11 = 0;
          goto LAB_000066ca;
        }
      }
    }
LAB_00006624:
    iVar11 = iVar11 + 1;
  } while (iVar11 != 3);
  if (param_2[1] == 0) {
    param_2[1] = 10;
  }
  FUN_0000687c(param_2[5],"01234567]" + (8 - param_2[1]));
  iVar11 = 0;
  while( true ) {
    puVar8 = puVar9;
    if (param_2[2] == 0) break;
    pbVar5 = *param_3;
    uVar4 = (uint)*pbVar5;
    if (*(char *)(param_2[5] + uVar4) == '\0') break;
    if ((uVar4 == 0x30) && ((int)(*param_2 << 0x14) < 0)) {
      iVar11 = iVar11 + 1;
      if (unaff_r9 != 0) {
        unaff_r9 = unaff_r9 + -1;
        param_2[2] = param_2[2] + 1;
      }
    }
    else {
      *param_2 = *param_2 & 0xfffff6ff;
      puVar8 = (uint *)((int)puVar9 + 1);
      *(byte *)puVar9 = *pbVar5;
    }
    pbVar5 = param_3[1];
    param_3[1] = pbVar5 + -1;
    if ((int)(pbVar5 + -1) < 1) {
      iVar1 = (*(code *)param_2[0x60])(param_1,param_3);
      if (iVar1 != 0) break;
    }
    else {
      *param_3 = *param_3 + 1;
    }
    param_2[2] = param_2[2] - 1;
    puVar9 = puVar8;
  }
LAB_000066ca:
  if ((int)(*param_2 << 0x17) < 0) {
    if (puVar10 < puVar8) {
      (*(code *)param_2[0x5f])(param_1,*(byte *)((int)puVar8 + -1),param_3);
      puVar8 = (uint *)((int)puVar8 + -1);
    }
    if (puVar8 == puVar10) {
      return 1;
    }
  }
  if ((*param_2 & 0x10) == 0) {
    *(byte *)puVar8 = 0;
    uVar2 = (*pcVar3)(param_1,puVar10,0,param_2[1]);
    puVar7 = (undefined4 *)*param_4;
    uVar4 = *param_2;
    *param_4 = puVar7 + 1;
    puVar7 = (undefined4 *)*puVar7;
    if ((uVar4 & 0x20) == 0) {
      if ((int)(uVar4 << 0x1f) < 0) {
        *(short *)puVar7 = (short)uVar2;
      }
      else {
        *puVar7 = uVar2;
      }
    }
    else {
      *puVar7 = uVar2;
    }
    param_2[3] = param_2[3] + 1;
  }
  param_2[4] = (uint)((int)puVar8 + param_2[4] + (iVar11 - (int)puVar10));
  return 0;
}


////>>0x00006768>>FUN_00006768>>////

undefined4
FUN_00006768(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[6] == 0)) {
    FUN_000042a4();
  }
  if (param_2 == &DAT_000079b8) {
    param_2 = (undefined4 *)param_1[1];
  }
  else if (param_2 == (undefined4 *)&DAT_000079d8) {
    param_2 = (undefined4 *)param_1[2];
  }
  else if (param_2 == (undefined4 *)&DAT_00007998) {
    param_2 = (undefined4 *)param_1[3];
  }
  uVar4 = *(ushort *)(param_2 + 3);
  param_2[1] = 0;
  uVar5 = (uint)*(ushort *)(param_2 + 3);
  if ((int)(uVar5 << 0x1a) < 0) {
    return 0xffffffff;
  }
  if ((int)(uVar5 << 0x1d) < 0) {
    if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
      if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
        FUN_00004b34(param_1);
      }
      param_2[1] = param_2[0x10];
      param_2[0xd] = 0;
      if (param_2[0x10] != 0) {
        *param_2 = param_2[0xf];
        return 0;
      }
    }
  }
  else {
    if (-1 < (int)(uVar5 << 0x1b)) {
      *param_1 = 9;
      uVar4 = uVar4 | 0x40;
      goto LAB_000067b8;
    }
    if ((int)(uVar5 << 0x1c) < 0) {
      iVar2 = FUN_00004158(param_1,param_2,uVar5 << 0x1c,uVar5,param_4);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      param_2[2] = 0;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfff7;
      param_2[6] = 0;
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 4;
  }
  if (param_2[4] == 0) {
    FUN_00005700(param_1,param_2);
  }
  uVar4 = *(ushort *)(param_2 + 3);
  uVar1 = *(undefined2 *)(param_2 + 3);
  if ((uVar4 & 3) != 0) {
    *(undefined2 *)(param_2 + 3) = 1;
    FUN_000043a0(0x1fff0284,&LAB_00006754_1);
    *(undefined2 *)(param_2 + 3) = uVar1;
    if ((uVar4 & 9) == 9) {
      FUN_0000404c(param_1,param_2);
    }
  }
  uVar3 = param_2[4];
  *param_2 = uVar3;
  iVar2 = (*(code *)param_2[9])(param_1,param_2[8],uVar3,param_2[5]);
  param_2[1] = iVar2;
  if (0 < iVar2) {
    return 0;
  }
  uVar4 = *(ushort *)(param_2 + 3);
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = uVar4 | 0x20;
  }
  if (iVar2 != 0) {
    param_2[1] = uVar3;
    uVar4 = uVar4 | 0x40;
  }
LAB_000067b8:
  *(ushort *)(param_2 + 3) = uVar4;
  return 0xffffffff;
}


////>>0x0000687c>>FUN_0000687c>>////

byte * FUN_0000687c(int param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = (uint)*param_2;
  bVar7 = uVar4 == 0x5e;
  if (bVar7) {
    uVar4 = (uint)param_2[1];
    param_2 = param_2 + 2;
  }
  else {
    param_2 = param_2 + 1;
  }
  iVar3 = param_1 + -1;
  do {
    iVar3 = iVar3 + 1;
    *(bool *)iVar3 = bVar7;
  } while (iVar3 != param_1 + 0xff);
  if (uVar4 == 0) {
    pbVar1 = param_2 + -1;
  }
  else {
LAB_000068aa:
    do {
      uVar5 = uVar4;
      *(bool *)(param_1 + uVar5) = !bVar7;
      param_2 = param_2 + 1;
      while( true ) {
        uVar4 = (uint)param_2[-1];
        if (uVar4 != 0x2d) break;
        uVar6 = (uint)*param_2;
        if ((uVar6 == 0x5d) || (uVar2 = uVar5, (int)uVar6 < (int)uVar5)) goto LAB_000068aa;
        do {
          uVar2 = uVar2 + 1;
          *(bool *)(param_1 + uVar2) = !bVar7;
        } while ((int)uVar2 < (int)uVar6);
        iVar3 = ~uVar5 + uVar6;
        if ((int)uVar6 <= (int)uVar5) {
          iVar3 = 0;
        }
        uVar5 = uVar5 + 1 + iVar3;
        param_2 = param_2 + 2;
      }
      pbVar1 = param_2;
    } while ((uVar4 != 0x5d) && (pbVar1 = param_2 + -1, uVar4 != 0));
  }
  return pbVar1;
}


////>>0x000068f0>>FUN_000068f0>>////

undefined4 FUN_000068f0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((int *)param_2[0xd] == param_2 + 0x11) {
    iVar1 = FUN_00004bd0(param_1,0x400);
    if (iVar1 != 0) {
      param_2[0xe] = 0x400;
      param_2[0xd] = iVar1;
      *(undefined *)(iVar1 + 0x3ff) = *(undefined *)((int)param_2 + 0x46);
      *(undefined *)(iVar1 + 0x3fe) = *(undefined *)((int)param_2 + 0x45);
      *(undefined *)(iVar1 + 0x3fd) = *(undefined *)(param_2 + 0x11);
      *param_2 = iVar1 + 0x3fd;
      return 0;
    }
  }
  else {
    iVar2 = param_2[0xe];
    iVar1 = FUN_000060cc(param_1,(int *)param_2[0xd],iVar2 << 1);
    if (iVar1 != 0) {
      FUN_000060b0(iVar1 + iVar2,iVar1,iVar2);
      param_2[0xd] = iVar1;
      param_2[0xe] = iVar2 << 1;
      *param_2 = iVar1 + iVar2;
      return 0;
    }
  }
  return 0xffffffff;
}


////>>0x00006964>>FUN_00006964>>////

int FUN_00006964(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


////>>0x00006974>>FUN_00006974>>////

undefined8 FUN_00006974(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_8 [8];
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 < 0) {
      param_1 = 0;
      param_2 = -0x80000000;
    }
    else if (param_2 != 0 || param_1 != 0) {
      param_2 = 0x7fffffff;
      param_1 = -1;
    }
    return CONCAT44(param_2,param_1);
  }
  if (param_2 < 0) {
    iVar1 = -param_2 - (uint)(param_1 != 0);
    if (param_4 < 0) {
      uVar2 = FUN_00006a14(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),local_8);
      return uVar2;
    }
    uVar2 = FUN_00006a14(-param_1,iVar1,param_3,param_4,local_8);
    return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
  }
  if (param_4 < 0) {
    uVar2 = FUN_00006a14(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),local_8);
    return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
  }
  uVar2 = FUN_00006a14();
  return uVar2;
}


////>>0x00006a14>>FUN_00006a14>>////

/* WARNING: Removing unreachable block (ram,0x00006ca0) */

ulonglong FUN_00006a14(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar2 = LZCOUNT(param_3);
      uVar5 = param_3;
      if (iVar2 != 0) {
        uVar5 = param_3 << iVar2;
        param_2 = param_1 >> (0x20U - iVar2 & 0xff) | param_2 << iVar2;
        param_1 = param_1 << iVar2;
      }
      uVar6 = uVar5 >> 0x10;
      uVar8 = param_2 / uVar6;
      uVar3 = param_1 >> 0x10 | (param_2 - uVar6 * uVar8) * 0x10000;
      uVar1 = uVar8 * (uVar5 & 0xffff);
      uVar4 = uVar8;
      if (uVar3 <= uVar1 && uVar1 - uVar3 != 0) {
        bVar10 = CARRY4(uVar5,uVar3);
        uVar3 = uVar5 + uVar3;
        uVar4 = uVar8 - 1;
        if ((bVar10 == false) && (uVar3 <= uVar1 && uVar1 - uVar3 != 0)) {
          uVar4 = uVar8 - 2;
          uVar3 = uVar3 + uVar5;
        }
      }
      uVar8 = (uVar3 - uVar1) / uVar6;
      uVar6 = param_1 & 0xffff | ((uVar3 - uVar1) - uVar6 * uVar8) * 0x10000;
      uVar3 = uVar8 * (uVar5 & 0xffff);
      uVar1 = uVar8;
      if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
        bVar10 = CARRY4(uVar5,uVar6);
        uVar6 = uVar5 + uVar6;
        uVar1 = uVar8 - 1;
        if ((bVar10 == false) && (uVar6 <= uVar3 && uVar3 - uVar6 != 0)) {
          uVar1 = uVar8 - 2;
          uVar6 = uVar6 + uVar5;
        }
      }
      uVar6 = uVar6 - uVar3;
      uVar1 = uVar1 | uVar4 << 0x10;
      uVar5 = 0;
    }
    else {
      if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE = (code *)software_udf(0xff,0x6abc);
        uVar11 = (*UNRECOVERED_JUMPTABLE)();
        return uVar11;
      }
      iVar2 = LZCOUNT(param_3);
      if (iVar2 == 0) {
        param_2 = param_2 - param_3;
        uVar9 = param_3 >> 0x10;
        uVar7 = param_3 & 0xffff;
        uVar5 = 1;
        uVar4 = param_3;
      }
      else {
        uVar4 = param_3 << iVar2;
        uVar9 = uVar4 >> 0x10;
        uVar1 = param_2 >> (0x20U - iVar2 & 0xff);
        uVar5 = param_1 >> (0x20U - iVar2 & 0xff) | param_2 << iVar2;
        uVar3 = uVar1 / uVar9;
        uVar7 = uVar4 & 0xffff;
        uVar8 = uVar5 >> 0x10 | (uVar1 - uVar9 * uVar3) * 0x10000;
        uVar6 = uVar3 * uVar7;
        param_1 = param_1 << iVar2;
        uVar1 = uVar3;
        if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
          bVar10 = CARRY4(uVar4,uVar8);
          uVar8 = uVar4 + uVar8;
          uVar1 = uVar3 - 1;
          if ((bVar10 == false) && (uVar8 <= uVar6 && uVar6 - uVar8 != 0)) {
            uVar1 = uVar3 - 2;
            uVar8 = uVar8 + uVar4;
          }
        }
        uVar3 = (uVar8 - uVar6) / uVar9;
        param_2 = uVar5 & 0xffff | ((uVar8 - uVar6) - uVar9 * uVar3) * 0x10000;
        uVar6 = uVar3 * uVar7;
        uVar5 = uVar3;
        if (param_2 <= uVar6 && uVar6 - param_2 != 0) {
          bVar10 = CARRY4(uVar4,param_2);
          param_2 = uVar4 + param_2;
          uVar5 = uVar3 - 1;
          if ((bVar10 == false) && (param_2 <= uVar6 && uVar6 - param_2 != 0)) {
            uVar5 = uVar3 - 2;
            param_2 = param_2 + uVar4;
          }
        }
        param_2 = param_2 - uVar6;
        uVar5 = uVar5 | uVar1 << 0x10;
      }
      uVar8 = param_2 / uVar9;
      uVar6 = param_1 >> 0x10 | (param_2 - uVar9 * uVar8) * 0x10000;
      uVar1 = uVar7 * uVar8;
      uVar3 = uVar8;
      if (uVar6 <= uVar1 && uVar1 - uVar6 != 0) {
        bVar10 = CARRY4(uVar4,uVar6);
        uVar6 = uVar4 + uVar6;
        uVar3 = uVar8 - 1;
        if ((bVar10 == false) && (uVar6 <= uVar1 && uVar1 - uVar6 != 0)) {
          uVar3 = uVar8 - 2;
          uVar6 = uVar6 + uVar4;
        }
      }
      uVar8 = (uVar6 - uVar1) / uVar9;
      uVar6 = param_1 & 0xffff | ((uVar6 - uVar1) - uVar9 * uVar8) * 0x10000;
      uVar7 = uVar7 * uVar8;
      uVar1 = uVar8;
      if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
        bVar10 = CARRY4(uVar4,uVar6);
        uVar6 = uVar4 + uVar6;
        uVar1 = uVar8 - 1;
        if ((bVar10 == false) && (uVar6 <= uVar7 && uVar7 - uVar6 != 0)) {
          uVar1 = uVar8 - 2;
          uVar6 = uVar6 + uVar4;
        }
      }
      uVar6 = uVar6 - uVar7;
      uVar1 = uVar1 | uVar3 << 0x10;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar6 >> LZCOUNT(param_3);
      param_5[1] = 0;
    }
  }
  else if (param_2 < param_4) {
    if (param_5 != (uint *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
      return 0;
    }
    uVar1 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = LZCOUNT(param_4);
    if (iVar2 != 0) {
      uVar7 = 0x20 - iVar2;
      uVar3 = param_3 >> (uVar7 & 0xff) | param_4 << iVar2;
      uVar9 = uVar3 >> 0x10;
      uVar1 = param_2 >> (uVar7 & 0xff);
      uVar5 = param_1 >> (uVar7 & 0xff) | param_2 << iVar2;
      uVar6 = uVar1 / uVar9;
      uVar4 = uVar5 >> 0x10 | (uVar1 - uVar9 * uVar6) * 0x10000;
      uVar8 = uVar6 * (uVar3 & 0xffff);
      param_1 = param_1 << iVar2;
      uVar1 = uVar6;
      if (uVar4 <= uVar8 && uVar8 - uVar4 != 0) {
        bVar10 = CARRY4(uVar3,uVar4);
        uVar4 = uVar3 + uVar4;
        uVar1 = uVar6 - 1;
        if ((bVar10 == false) && (uVar4 <= uVar8 && uVar8 - uVar4 != 0)) {
          uVar1 = uVar6 - 2;
          uVar4 = uVar4 + uVar3;
        }
      }
      uVar6 = (uVar4 - uVar8) / uVar9;
      uVar4 = uVar5 & 0xffff | ((uVar4 - uVar8) - uVar9 * uVar6) * 0x10000;
      uVar8 = uVar6 * (uVar3 & 0xffff);
      uVar5 = uVar6;
      if (uVar4 <= uVar8 && uVar8 - uVar4 != 0) {
        bVar10 = CARRY4(uVar3,uVar4);
        uVar4 = uVar3 + uVar4;
        uVar5 = uVar6 - 1;
        if ((bVar10 == false) && (uVar4 <= uVar8 && uVar8 - uVar4 != 0)) {
          uVar5 = uVar6 - 2;
          uVar4 = uVar4 + uVar3;
        }
      }
      uVar5 = uVar5 | uVar1 << 0x10;
      uVar11 = (ulonglong)uVar5 * (ulonglong)(param_3 << iVar2);
      if (CONCAT44(uVar4 - uVar8,param_1) < uVar11) {
        uVar11 = uVar11 - CONCAT44(uVar3,param_3 << iVar2);
        uVar5 = uVar5 - 1;
      }
      if (param_5 != (uint *)0x0) {
        uVar1 = ((uVar4 - uVar8) - (int)(uVar11 >> 0x20)) - (uint)(param_1 < (uint)uVar11);
        *param_5 = uVar1 << (uVar7 & 0xff) | param_1 - (uint)uVar11 >> iVar2;
        param_5[1] = uVar1 >> iVar2;
      }
      return (ulonglong)uVar5;
    }
    if ((param_4 < param_2) || (param_3 <= param_1)) {
      bVar10 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = (param_2 - param_4) - (uint)bVar10;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    uVar5 = 0;
    if (param_5 != (uint *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
    }
  }
  return CONCAT44(uVar5,uVar1);
}


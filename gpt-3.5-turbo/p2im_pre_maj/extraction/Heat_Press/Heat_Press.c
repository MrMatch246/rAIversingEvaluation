java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x000800f4>>FUN_000800f4>>////

/* WARNING: Removing unreachable block (ram,0x00080100) */

undefined4 FUN_000800f4(undefined4 param_1)

{
  if ((char)DAT_2007089c == '\0') {
    DAT_2007089c._0_1_ = '\x01';
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

void FUN_00080164(int **param_1)

{
  int iVar1;
  
  *param_1 = &DAT_20070b60;
  (**(code **)(DAT_20070b60 + 0x18))(&DAT_20070b60);
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_00081210(*(byte *)((int)param_1 + 6),1);
    FUN_00081318(*(undefined *)((int)param_1 + 6),0);
  }
  do {
    iVar1 = (**(code **)(**param_1 + 0xc))();
  } while (-1 < iVar1);
  *(undefined *)((int)param_1 + 0x49) = 0;
  *(undefined *)((int)param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((int)param_1 + 0x52) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  return;
}


////>>0x000801b0>>FUN_000801b0>>////

int FUN_000801b0(int **param_1)

{
  bool bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_00081318(*(byte *)((int)param_1 + 6),0);
  }
  bVar1 = false;
  *(undefined *)((int)param_1 + 0x49) = 0;
  if (*(byte *)((int)param_1 + 5) < 4) {
    while (iVar4 = (**(code **)(**param_1 + 8))(), iVar4 != 0) {
      bVar5 = *(byte *)((int)param_1 + 0x49);
      uVar2 = (**(code **)(**param_1 + 0xc))();
      cVar3 = *(char *)((int)param_1 + 0x49);
      *(undefined *)((int)param_1 + bVar5 + 9) = uVar2;
      bVar5 = cVar3 + 1;
      *(byte *)((int)param_1 + 0x49) = bVar5;
      if (0x3f < bVar5) {
        bVar1 = true;
      }
    }
  }
  *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + 1;
  if (bVar1) {
    cVar3 = -3;
    *(short *)(param_1 + 0x15) = *(short *)(param_1 + 0x15) + 1;
  }
  else {
    cVar3 = *(char *)((int)param_1 + 0x49);
  }
  return (int)cVar3;
}


////>>0x0008021c>>FUN_0008021c>>////

uint FUN_0008021c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  uVar2 = 0xffff;
  for (iVar1 = param_1; (iVar1 - param_1 & 0xffU) < param_2; iVar1 = iVar1 + 1) {
    uVar2 = uVar2 ^ *(byte *)(iVar1 + 9);
    cVar3 = '\b';
    do {
      uVar4 = uVar2 & 1;
      uVar2 = uVar2 >> 1;
      if (uVar4 != 0) {
        uVar2 = uVar2 ^ 0xa001;
      }
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  return (uVar2 & 0xff) << 8 | uVar2 >> 8;
}


////>>0x00080258>>FUN_00080258>>////

void FUN_00080258(int **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)((int)param_1 + 0x49);
  uVar4 = (uint)bVar1;
  uVar2 = FUN_0008021c(param_1,uVar4,param_3,param_4,param_4);
  *(char *)((int)param_1 + uVar4 + 9) = (char)((ushort)uVar2 >> 8);
  *(char *)((int)param_1 + (uVar4 + 1 & 0xff) + 9) = (char)uVar2;
  *(byte *)((int)param_1 + 0x49) = bVar1 + 2;
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_00081318(*(byte *)((int)param_1 + 6),1);
  }
  if (*(byte *)((int)param_1 + 5) < 4) {
    (**(code **)(**param_1 + 4))(*param_1,(int)param_1 + 9,*(undefined *)((int)param_1 + 0x49));
  }
  if (1 < *(byte *)((int)param_1 + 6)) {
    FUN_00081318(*(byte *)((int)param_1 + 6),0);
  }
  if (*(byte *)((int)param_1 + 5) < 4) {
    do {
      iVar3 = (**(code **)(**param_1 + 0xc))();
    } while (-1 < iVar3);
  }
  *(undefined *)((int)param_1 + 0x49) = 0;
  iVar3 = thunk_FUN_00081714();
  param_1[0x17] = (int *)(iVar3 + (uint)*(ushort *)((int)param_1 + 0x56));
  *(short *)((int)param_1 + 0x52) = *(short *)((int)param_1 + 0x52) + 1;
  return;
}


////>>0x000802da>>FUN_000802da>>////

int FUN_000802da(int param_1,uint param_2,uint param_3,ushort *param_4)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined local_1c;
  undefined local_1b;
  ushort local_18;
  
  local_1c = (undefined)param_2;
  local_1b = (undefined)(param_2 >> 8);
  local_18 = (ushort)param_3;
  uVar5 = param_3 & 0xffff;
  if (*(char *)(param_1 + 4) != '\0') {
    cVar1 = -2;
    goto LAB_000803cc;
  }
  if (*(char *)(param_1 + 7) != '\0') {
    cVar1 = -1;
    goto LAB_000803cc;
  }
  if (0xf6 < ((param_2 & 0xff) - 1 & 0xff)) {
    cVar1 = -3;
    goto LAB_000803cc;
  }
  *(undefined *)(param_1 + 9) = local_1c;
  *(undefined *)(param_1 + 10) = local_1b;
  *(ushort **)(param_1 + 0x4c) = param_4;
  *(char *)(param_1 + 0xb) = (char)(param_2 >> 0x18);
  *(char *)(param_1 + 0xc) = (char)(param_2 >> 0x10);
  uVar3 = (undefined)(param_3 >> 8);
  switch(local_1b) {
  case 1:
  case 2:
  case 3:
  case 4:
    *(undefined *)(param_1 + 0xd) = uVar3;
    break;
  case 5:
    uVar4 = *param_4;
    if (uVar4 != 0) {
      uVar4 = 1;
    }
    *(char *)(param_1 + 0xd) = -(char)uVar4;
    uVar5 = 0;
    break;
  case 6:
    *(char *)(param_1 + 0xd) = (char)(*param_4 >> 8);
    uVar5 = (uint)*param_4;
    break;
  default:
    goto switchD_0008031e_caseD_7;
  case 0xf:
    bVar2 = (byte)(local_18 >> 3) & 0xfe;
    if ((param_3 & 0xf) != 0) {
      bVar2 = bVar2 + 1;
    }
    *(char *)(param_1 + 0xe) = (char)param_3;
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(byte *)(param_1 + 0xf) = bVar2;
    uVar3 = 7;
    goto LAB_0008034a;
  case 0x10:
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(char *)(param_1 + 0xe) = (char)param_3;
    param_4 = param_4 + -1;
    *(char *)(param_1 + 0xf) = (char)uVar5 * '\x02';
    *(undefined *)(param_1 + 0x49) = 7;
    puVar6 = param_4 + uVar5;
    while (param_4 != puVar6) {
      bVar2 = *(byte *)(param_1 + 0x49);
      *(char *)(param_1 + (uint)bVar2 + 9) = (char)(param_4[1] >> 8);
      uVar5 = bVar2 + 1 & 0xff;
      *(char *)(param_1 + 0x49) = (char)uVar5;
      param_4 = param_4 + 1;
      *(char *)(uVar5 + param_1 + 9) = (char)*param_4;
      *(byte *)(param_1 + 0x49) = bVar2 + 2;
    }
    goto switchD_0008031e_caseD_7;
  }
  *(char *)(param_1 + 0xe) = (char)uVar5;
  uVar3 = 6;
LAB_0008034a:
  *(undefined *)(param_1 + 0x49) = uVar3;
switchD_0008031e_caseD_7:
  FUN_00080258(param_1);
  *(undefined *)(param_1 + 7) = 1;
  cVar1 = '\0';
LAB_000803cc:
  return (int)cVar1;
}


////>>0x000803d4>>FUN_000803d4>>////

undefined4 FUN_000803d4(int param_1)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 10) << 0x18) < 0) {
    *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1;
    return 0xfb;
  }
  iVar1 = 0;
  do {
    if ((&DAT_00084d10)[iVar1] == *(byte *)(param_1 + 10)) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1;
  return 1;
}


////>>0x00080410>>FUN_00080410>>////

void FUN_00080410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  bVar3 = 0;
  while( true ) {
    uVar4 = (uint)bVar3;
    bVar3 = bVar3 + 1;
    if (*(byte *)(param_1 + 0xb) >> 1 <= uVar4) break;
    iVar2 = (uVar4 * 2 + 3 & 0xff) + param_1;
    iVar5 = *(int *)(param_1 + 0x4c);
    uVar1 = FUN_000815f8(*(undefined *)(iVar2 + 9),*(undefined *)(iVar2 + 10),iVar2,
                         *(byte *)(param_1 + 0xb),param_4);
    *(undefined2 *)(iVar5 + uVar4 * 2) = uVar1;
  }
  return;
}


////>>0x0008043e>>FUN_0008043e>>////

int FUN_0008043e(int **param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint unaff_r6;
  
  if (*(byte *)((int)param_1 + 5) < 4) {
    uVar2 = (**(code **)(**param_1 + 8))();
    unaff_r6 = uVar2 & 0xff;
  }
  piVar3 = (int *)thunk_FUN_00081714();
  if (param_1[0x17] < piVar3) {
    *(undefined *)(param_1 + 2) = 0xff;
    *(undefined *)((int)param_1 + 7) = 0;
    *(short *)(param_1 + 0x15) = *(short *)(param_1 + 0x15) + 1;
  }
  else if (7 < unaff_r6) {
    FUN_000801b0(param_1);
    iVar4 = FUN_000803d4(param_1);
    if (iVar4 == 0) {
      if (*(byte *)((int)param_1 + 10) - 3 < 2) {
        FUN_00080410(param_1);
      }
      *(undefined *)((int)param_1 + 7) = 0;
      cVar1 = *(char *)((int)param_1 + 0x49);
    }
    else {
      *(undefined *)((int)param_1 + 7) = 0;
      cVar1 = (char)iVar4;
    }
    goto LAB_000804a2;
  }
  cVar1 = '\0';
LAB_000804a2:
  return (int)cVar1;
}


////>>0x000804a8>>FUN_000804a8>>////

undefined8 FUN_000804a8(void)

{
  int iVar1;
  
  FUN_00081210(1,0);
  FUN_00081210(6,1);
  FUN_00081210(0,1);
  FUN_00081210(1,1);
  FUN_00081318(0,0);
  FUN_00081318(1,0);
  DAT_2007098a = 0x13;
  DAT_2007098c._0_2_ = 10;
  DAT_20070990 = &DAT_200708f2;
  DAT_2007097d = 3;
  DAT_20070995 = 3;
  DAT_20070996 = 0x14;
  DAT_200709a4._0_2_ = 3;
  DAT_20070980._0_2_ = 0x10;
  DAT_20070984 = &DAT_200708cc;
  DAT_20070989 = 0x10;
  DAT_20070998._0_2_ = 0xc;
  DAT_200709a1 = 0x10;
  DAT_200709b0._0_2_ = 8;
  DAT_200709a2 = 0x1c;
  DAT_200709a8 = &DAT_20070904;
  DAT_200709ac = 2;
  DAT_200709ad = 2;
  DAT_200709b4 = &DAT_200709cc;
  DAT_200709b8 = 2;
  DAT_2007097c = 1;
  DAT_20070988 = 1;
  DAT_20070994 = 1;
  DAT_200709a0 = 1;
  DAT_200709ba = 1;
  DAT_200709bc = 1;
  DAT_2007097e = 0;
  DAT_2007099c = &DAT_200708f4;
  DAT_200709ae = 0;
  DAT_200709b9 = 5;
  DAT_200709c0 = &DAT_200709ce;
  FUN_00080164(&DAT_200709e4,0x4b00);
  DAT_20070a3a = 2000;
  DAT_200708c8 = thunk_FUN_00081714();
  iVar1 = thunk_FUN_00081714();
  DAT_200709e0 = iVar1 + 1000;
  iVar1 = thunk_FUN_00081714();
  DAT_20070a48 = iVar1 + 1000;
  iVar1 = thunk_FUN_00081714();
  DAT_20070934 = iVar1 + 1000;
  iVar1 = thunk_FUN_00081714();
  DAT_200708c0 = iVar1 + 1000;
  DAT_20070948 = 0;
  if (DAT_200708b8 == 0) {
    software_interrupt(0x3f);
    return 1;
  }
  return 0;
}


////>>0x000805d0>>FUN_000805d0>>////



void FUN_000805d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  
  switch(DAT_20070948) {
  case '\0':
    uVar1 = thunk_FUN_00081714();
    if (DAT_200708c8 < uVar1) goto LAB_000806ca;
    break;
  case '\x01':
    FUN_0008043e(&DAT_200709e4);
    if (DAT_200709eb == '\0') {
      FUN_000802da(&DAT_200709e4,_DAT_2007097c,DAT_20070980,DAT_20070984);
      DAT_20070948 = DAT_20070948 + '\x01';
      DAT_200708c8 = thunk_FUN_00081714();
      DAT_20070940 = (uint)DAT_200708ce;
      DAT_20070944 = (uint)DAT_200708d0;
      DAT_20070a4c = FUN_00081894(DAT_200708d8);
      DAT_2007094c = FUN_0008189c(DAT_200708da / 10);
      DAT_200709c4 = FUN_00081894(DAT_200708dc);
      DAT_20070974 = (uint)DAT_200708e4;
      DAT_20070970 = (uint)DAT_200708de;
      DAT_20070924 = (uint)DAT_200708e8;
      DAT_20070928 = (uint)DAT_200708ea;
    }
    break;
  case '\x02':
  case '\x04':
  case '\x06':
  case '\b':
    FUN_0008043e(&DAT_200709e4);
    if (DAT_200709eb == '\0') {
      DAT_20070948 = DAT_20070948 + '\x01';
      DAT_200708c8 = thunk_FUN_00081714();
    }
    break;
  case '\x03':
    FUN_0008043e(&DAT_200709e4);
    if (DAT_200709eb == '\0') {
      FUN_000802da(&DAT_200709e4,_DAT_20070994,DAT_20070998,DAT_2007099c);
      DAT_20070948 = DAT_20070948 + '\x01';
      DAT_200708c8 = thunk_FUN_00081714();
      DAT_20070938 = (uint)DAT_20070908;
      DAT_20070920 = (uint)DAT_20070906;
    }
    break;
  case '\x05':
    FUN_0008043e(&DAT_200709e4);
    if (DAT_200709eb == '\0') {
      puVar8 = (undefined4 *)&DAT_20070988;
LAB_000806c4:
      FUN_000802da(&DAT_200709e4,*puVar8,puVar8[1],puVar8[2]);
      goto LAB_000806ca;
    }
    break;
  case '\a':
    FUN_0008043e(&DAT_200709e4);
    if ((DAT_20070918 == 1) && (DAT_200709eb == '\0')) {
      DAT_20070906 = 0;
      puVar8 = (undefined4 *)&DAT_200709a0;
      DAT_20070918 = 0;
      goto LAB_000806c4;
    }
LAB_000806ca:
    DAT_20070948 = DAT_20070948 + '\x01';
    break;
  case '\t':
    FUN_0008043e(&DAT_200709e4);
    if (DAT_200709eb == '\0') {
      FUN_000802da(&DAT_200709e4,_DAT_200709ac,DAT_200709b0,DAT_200709b4);
      DAT_200708c8 = thunk_FUN_00081714();
    }
    DAT_20070948 = '\0';
  }
  DAT_20070978 = DAT_20070924 - DAT_20070950;
  if (DAT_20070978 < 0) {
    DAT_20070978 = DAT_20070978 + 0x3c;
  }
  DAT_200708bc = DAT_20070928 - DAT_2007090c;
  if ((int)DAT_200708bc < 0) {
    DAT_20070978 = DAT_20070978 + -1;
    DAT_200708bc = DAT_200708bc + 0x3c;
  }
  DAT_20070902 = (undefined2)DAT_20070978;
  DAT_20070904 = (undefined2)DAT_200708bc;
  if ((DAT_20070978 == 0) && (DAT_200708bc == 0)) {
    DAT_20070918 = 1;
    DAT_20070950 = DAT_200708bc;
    DAT_2007090c = DAT_200708bc;
  }
  if (DAT_20070964 == DAT_20070924) {
    DAT_20070968 = 1 - DAT_20070928;
    if (1 < DAT_20070928) {
      DAT_20070968 = 0;
    }
    if (DAT_20070968 != 0) goto LAB_00080a08;
  }
  else {
LAB_00080a08:
    DAT_20070968 = DAT_20070928;
    DAT_20070950 = 0;
    DAT_2007090c = 0;
    DAT_20070960 = 0;
    DAT_20070964 = DAT_20070924;
  }
  if (DAT_20070920 == 0) {
    DAT_20070950 = DAT_20070920;
    DAT_2007090c = DAT_20070920;
    puVar7 = (uint *)&DAT_20070960;
LAB_000808f2:
    *puVar7 = DAT_2007090c;
  }
  else {
    if (DAT_20070920 != 1) goto LAB_000808f4;
    if ((DAT_20070960 < (int)DAT_20070938) && (uVar1 = thunk_FUN_00081714(), DAT_200708c0 < uVar1))
    {
      DAT_20070960 = DAT_20070960 + 1;
      iVar6 = thunk_FUN_00081714();
      DAT_200708c0 = iVar6 + 1000;
    }
    if (DAT_20070960 < (int)DAT_20070938) goto LAB_000808f4;
    DAT_20070960 = DAT_20070938 + 1;
    if ((int)DAT_20070950 < (int)DAT_20070924) {
      uVar1 = thunk_FUN_00081714();
      if (DAT_200708c0 < uVar1) {
        DAT_2007090c = DAT_2007090c + 1;
        iVar6 = thunk_FUN_00081714();
        DAT_200708c0 = iVar6 + 1000;
      }
    }
    else {
      if (DAT_20070950 != DAT_20070924) goto LAB_000808f4;
      if ((int)DAT_20070928 < (int)DAT_2007090c) {
        puVar7 = &DAT_20070950;
        DAT_2007090c = 0;
        goto LAB_000808f2;
      }
      uVar1 = thunk_FUN_00081714();
      if (DAT_200708c0 < uVar1) {
        DAT_2007090c = DAT_2007090c + 1;
        iVar6 = thunk_FUN_00081714();
        DAT_200708c0 = iVar6 + 1000;
      }
    }
    if (0x3b < (int)DAT_2007090c) {
      DAT_2007090c = 0;
      DAT_20070950 = DAT_20070950 + 1;
    }
  }
LAB_000808f4:
  uVar1 = thunk_FUN_00081714();
  if (DAT_200709e0 < uVar1) {
    uVar2 = FUN_0008189c(DAT_20070940);
    uVar3 = FUN_00081730(uVar2,DAT_200709c8);
    uVar2 = DAT_200708c4;
    DAT_20070930 = uVar3;
    uVar4 = FUN_00081734(uVar3,DAT_200708c4);
    uVar4 = FUN_00081944(uVar4,DAT_2007094c);
    uVar4 = FUN_00081734(uVar4,DAT_20070914);
    DAT_2007094c = uVar4;
    uVar2 = FUN_00081730(uVar3,uVar2);
    uVar2 = FUN_00081944(uVar2,DAT_200709c4);
    uVar2 = FUN_00081730(uVar2,DAT_2007096c);
    DAT_200709c4 = uVar2;
    uVar5 = FUN_00081944(uVar3,DAT_20070a4c);
    uVar5 = FUN_00081734(uVar5,uVar4);
    FUN_00081734(uVar5,uVar2);
    DAT_20070910 = FUN_00081cd0();
    DAT_2007091c = FUN_0008189c();
    DAT_2007092c = 0;
    DAT_200708c4 = uVar3;
    DAT_20070914 = uVar4;
    DAT_2007096c = uVar2;
    iVar6 = thunk_FUN_00081714();
    DAT_200709e0 = iVar6 + DAT_20070970;
  }
  uVar2 = FUN_0008189c(DAT_20070970);
  iVar6 = FUN_00081ca8(DAT_2007091c,uVar2);
  if (iVar6 != 0) {
    DAT_2007091c = uVar2;
  }
  iVar6 = FUN_00081c94(DAT_2007091c,0);
  if (iVar6 != 0) {
    DAT_2007091c = 0;
  }
  DAT_200708f6 = FUN_00081d1c(DAT_2007091c);
  DAT_2007092c = DAT_2007092c + 1;
  DAT_2007093c = DAT_200709cc & 1 ^ 1;
  return;
}


////>>0x00080a68>>FUN_00080a68>>////

void FUN_00080a68(void)

{
  FUN_00081682(&DAT_20070954,"");
  FUN_00081d5c(&DAT_20070954,0x815ff,0x2007002c);
  DAT_200709e8 = 0;
  DAT_200709e9 = 0;
  DAT_200709ea = 6;
  DAT_20070a3a = 1000;
  return;
}


////>>0x00080aa8>>FUN_00080aa8>>////

void FUN_00080aa8(void)

{
  return;
}


////>>0x00080ab8>>FUN_00080ab8>>////

void FUN_00080ab8(void)

{
  return;
}


////>>0x00080aba>>FUN_00080aba>>////

void FUN_00080aba(void)

{
  return;
}


////>>0x00080abc>>FUN_00080abc>>////

void FUN_00080abc(void)

{
  return;
}


////>>0x00080ae4>>FUN_00080ae4>>////



void FUN_00080ae4(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00080e9c();
  _DAT_e000e014 = Elf32_Rel_ARRAY_20070000[6].r_offset / 1000 - 1;
  DAT_e000ed23 = 0xf0;
  _DAT_e000e018 = 0;
  _DAT_e000e010 = 7;
  FUN_00081d7c();
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    FUN_00081318(iVar1,0);
    iVar1 = iVar2;
  } while (iVar2 != 0x4f);
  _DAT_400e0ea0 = 0xffffffff;
  _DAT_400e10a0 = 0xffffffff;
  _DAT_400e12a0 = 0xffffffff;
  _DAT_400e14a0 = 0xffffffff;
  FUN_00080da0(0x400e0e00,1,0x300,0);
  FUN_00081318(0,1);
  FUN_00080da0(0x400e0e00,1,0xc00,0);
  FUN_00080da0(0x400e0e00,1,0x3000,0);
  FUN_00080da0(0x400e1400,2,0x30,0);
  FUN_00080da0(0x400e1000,1,0xc00,0);
  FUN_00080da0(0x400e0e00,1,3,0);
  FUN_00080da0(0x400e1000,1,0xc000,0);
  FUN_00080e18(0x25);
  FUN_00080f9c(0x400c0000,Elf32_Rel_ARRAY_20070000[6].r_offset,20000000,0xc);
  FUN_00081042(0x400c0000,0,0x300000,1);
  FUN_00081034(0x400c0000,0,0);
  FUN_0008106e(0x400c0000,0xffffffff);
  FUN_00081066(0x400c0000);
  return;
}


////>>0x00080c0c>>FUN_00080c0c>>////

void FUN_00080c0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000813a8(&DAT_20070b84);
  FUN_000813a8(&DAT_20070ad8);
  FUN_000814e4(&DAT_20070b60,0x400e0800,8,8,&DAT_20070b84,&DAT_20070ad8,param_3);
  FUN_000813a8(&DAT_20070de4);
  FUN_000813a8(&DAT_20070e6c);
  FUN_000813a8(&DAT_20070ef4);
  FUN_000813a8(&DAT_20070a50);
  FUN_000813a8(&DAT_20070c84);
  FUN_000813a8(&DAT_20070d0c);
  FUN_000815d4(&DAT_20070c0c,0x40098000,0x11,0x11,&DAT_20070de4,&DAT_20070a50);
  FUN_000815d4(&DAT_20070c34,0x4009c000,0x12,0x12,&DAT_20070e6c,&DAT_20070c84);
  FUN_000815d4(&DAT_20070c5c,0x400a4000,0x14,0x14,&DAT_20070ef4,&DAT_20070d0c);
  return;
}


////>>0x00080ce0>>FUN_00080ce0>>////

void FUN_00080ce0(void)

{
  int iVar1;
  
  iVar1 = FUN_000813e4(&DAT_20070b60);
  if (iVar1 != 0) {
    FUN_00080aa8();
  }
  iVar1 = FUN_000813e4(&DAT_20070c0c);
  if (iVar1 != 0) {
    FUN_00080ab8();
  }
  iVar1 = FUN_000813e4(&DAT_20070c34);
  if (iVar1 != 0) {
    FUN_00080aba();
  }
  iVar1 = FUN_000813e4(&DAT_20070c5c);
  if (iVar1 != 0) {
    FUN_00080abc();
  }
  return;
}


////>>0x00080d2e>>FUN_00080d2e>>////

void FUN_00080d2e(int param_1,undefined4 param_2,uint param_3)

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
    goto switchD_00080d34_caseD_6;
  }
  *(uint *)(param_1 + 0x70) = uVar1;
switchD_00080d34_caseD_6:
  *(uint *)(param_1 + 4) = param_3;
  return;
}


////>>0x00080d54>>FUN_00080d54>>////

void FUN_00080d54(undefined4 *param_1,undefined4 param_2,uint param_3)

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


////>>0x00080d7a>>FUN_00080d7a>>////

void FUN_00080d7a(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

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


////>>0x00080da0>>FUN_00080da0>>////

undefined4 FUN_00080da0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  
  switch(param_2) {
  case 1:
  case 2:
    FUN_00080d2e(param_1,param_2,param_3);
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
    FUN_00080d54(param_1,param_3,param_4,0x80d55,param_1);
    break;
  case 4:
  case 5:
    FUN_00080d7a(param_1,param_3,param_2 == 5,(param_4 << 0x1d) >> 0x1f,param_4 & 1,param_2,param_3)
    ;
    break;
  default:
    return 0;
  }
  return 1;
}


////>>0x00080e04>>FUN_00080e04>>////

uint FUN_00080e04(int param_1,uint param_2)

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


////>>0x00080e18>>FUN_00080e18>>////



undefined4 FUN_00080e18(uint param_1)

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


////>>0x00080e9c>>FUN_00080e9c>>////



void FUN_00080e9c(void)

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


////>>0x00080f24>>entry>>////

/* WARNING: Removing unreachable block (ram,0x00080f6e) */


void entry(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (iVar1 = 0; (undefined4 *)((int)&Elf32_Rel_ARRAY_20070000[0].r_offset + iVar1) < &DAT_2007089c
      ; iVar1 = iVar1 + 4) {
    *(undefined4 *)((int)&Elf32_Rel_ARRAY_20070000[0].r_offset + iVar1) =
         *(undefined4 *)(&DAT_0008588c + iVar1);
  }
  for (puVar2 = &DAT_2007089c; puVar2 < (undefined4 *)0x200711c0; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  _DAT_e000ed08 = 0x80000;
  FUN_000816a8();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00080f9c>>FUN_00080f9c>>////

undefined4 FUN_00080f9c(undefined4 *param_1,uint param_2,int param_3,int param_4)

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


////>>0x00081034>>FUN_00081034>>////

void FUN_00081034(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 4) = param_2 | *(uint *)(param_1 + 4) | (param_3 & 1) << 7;
  return;
}


////>>0x00081042>>FUN_00081042>>////

void FUN_00081042(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 4) =
       param_3 | *(uint *)(param_1 + 4) | (param_2 & 0xf) << 0x18 | (param_4 & 3) << 0x1c;
  return;
}


////>>0x0008105c>>FUN_0008105c>>////

void FUN_0008105c(int param_1,uint param_2)

{
  *(int *)(param_1 + 0x14) = 1 << (param_2 & 0xff);
  return;
}


////>>0x00081066>>FUN_00081066>>////

void FUN_00081066(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xffff;
  return;
}


////>>0x0008106e>>FUN_0008106e>>////

void FUN_0008106e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


////>>0x00081184>>FUN_00081184>>////

undefined4 FUN_00081184(void)

{
  return 0;
}


////>>0x0008118c>>FUN_0008118c>>////

int FUN_0008118c(int param_1)

{
  int iVar1;
  
  if (DAT_20071180 == 0) {
    DAT_20071180 = 0x200711c0;
  }
  iVar1 = DAT_20071180;
  DAT_20071180 = param_1 + DAT_20071180;
  return iVar1;
}


////>>0x000811ae>>FUN_000811ae>>////

undefined4 FUN_000811ae(void)

{
  return 0xffffffff;
}


////>>0x000811b4>>FUN_000811b4>>////

undefined4 FUN_000811b4(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


////>>0x000811be>>FUN_000811be>>////

undefined4 FUN_000811be(void)

{
  return 1;
}


////>>0x000811c2>>FUN_000811c2>>////

undefined4 FUN_000811c2(void)

{
  return 0;
}


////>>0x000811c6>>FUN_000811c6>>////

undefined4 FUN_000811c6(void)

{
  return 0;
}


////>>0x000811cc>>FUN_000811cc>>////



uint FUN_000811cc(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < (int)param_3; iVar1 = iVar1 + 1) {
    do {
    } while (-1 < _DAT_400e0814 << 0x1e);
    _DAT_400e081c = (uint)*(byte *)(param_2 + iVar1);
  }
  return param_3 & ~((int)param_3 >> 0x1f);
}


////>>0x00081208>>thunk_FUN_00081714>>////

undefined4 thunk_FUN_00081714(void)

{
  return DAT_20071184;
}


////>>0x0008120c>>FUN_0008120c>>////

void FUN_0008120c(void)

{
  return;
}


////>>0x00081210>>FUN_00081210>>////



int FUN_00081210(int param_1,int param_2)

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
  if ((&DAT_00084d24)[param_1 * 0x1c] != '\0') {
    if (((&DAT_20070d94)[param_1] & 0xf) == 4) {
      iVar1 = FUN_0008105c(0x400c0000,(&DAT_00084d31)[param_1 * 0x1c]);
    }
    bVar6 = (&DAT_20070d94)[param_1];
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
        goto LAB_0008126c;
      }
    }
    if (param_2 != 1) {
LAB_0008126c:
      if (param_2 == 0) {
        iVar1 = param_1 * 0x1c;
        FUN_00080e18(*(undefined4 *)(&DAT_00084d20 + iVar1));
        iVar1 = FUN_00080da0(*(undefined4 *)(&DAT_00084d18 + iVar1),3,
                             *(undefined4 *)(&DAT_00084d1c + iVar1),0);
        bVar6 = (&DAT_20070d94)[param_1] & 0xf0 | 2;
      }
      else {
        if (param_2 != 2) {
          return iVar1;
        }
        iVar1 = param_1 * 0x1c;
        FUN_00080e18(*(undefined4 *)(&DAT_00084d20 + iVar1));
        iVar1 = FUN_00080da0(*(undefined4 *)(&DAT_00084d18 + iVar1),3,
                             *(undefined4 *)(&DAT_00084d1c + iVar1),1);
        bVar6 = (&DAT_20070d94)[param_1] & 0xf0 | 1;
      }
      (&DAT_20070d94)[param_1] = bVar6;
      return iVar1;
    }
    iVar7 = param_1 * 0x1c;
    iVar8 = *(int *)(&DAT_00084d18 + iVar7);
    if (bVar6 >> 4 == 0) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
    }
    iVar1 = FUN_00080da0(iVar8,uVar3,*(undefined4 *)(&DAT_00084d1c + iVar7),
                         *(undefined4 *)(&DAT_00084d28 + iVar7));
    (&DAT_20070d94)[param_1] = (&DAT_20070d94)[param_1] & 0xf0 | 3;
    if (*(int *)(iVar8 + 0x18) == -1) {
      uVar2 = *(uint *)(&DAT_00084d20 + iVar7);
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


////>>0x00081318>>FUN_00081318>>////

void FUN_00081318(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((&DAT_00084d24)[param_1 * 0x1c] != '\0') {
    if (((&DAT_20070d94)[param_1] & 0xf) == 5) {
      FUN_00081210(param_1,1,param_3,5,param_1,param_2,param_3);
    }
    (&DAT_20070d94)[param_1] = (&DAT_20070d94)[param_1] & 0xf | (byte)(param_2 << 4);
    iVar3 = *(int *)(&DAT_00084d18 + param_1 * 0x1c);
    uVar2 = *(undefined4 *)(&DAT_00084d1c + param_1 * 0x1c);
    iVar1 = FUN_00080e04(iVar3,uVar2);
    if (iVar1 == 0) {
      if (param_2 != 0) {
        *(undefined4 *)(iVar3 + 100) = uVar2;
        return;
      }
      *(undefined4 *)(iVar3 + 0x60) = uVar2;
      return;
    }
    FUN_00080d7a(iVar3,uVar2,param_2,0,1);
  }
  return;
}


////>>0x00081388>>FUN_00081388>>////

void FUN_00081388(void)

{
  if ((Elf32_Rel_ARRAY_20070000[6].r_info != 0xffffffff) &&
     (Elf32_Rel_ARRAY_20070000[6].r_info = Elf32_Rel_ARRAY_20070000[6].r_info - 1,
     Elf32_Rel_ARRAY_20070000[6].r_info == 0)) {
    (*(code *)((int)&Elf32_Rel_ARRAY_20070000[0].r_offset + 1))();
  }
  return;
}


////>>0x000813a8>>FUN_000813a8>>////

int FUN_000813a8(int param_1)

{
  FUN_00082504(param_1,0,0x80);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return param_1;
}


////>>0x000813c2>>FUN_000813c2>>////

void FUN_000813c2(int param_1,undefined param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x80) + 1U & 0x7f;
  if (uVar1 != *(uint *)(param_1 + 0x84)) {
    *(undefined *)(param_1 + *(int *)(param_1 + 0x80)) = param_2;
    *(uint *)(param_1 + 0x80) = uVar1;
  }
  return;
}


////>>0x000813e4>>FUN_000813e4>>////

uint FUN_000813e4(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0x80) - *(int *)(*(int *)(param_1 + 0x10) + 0x84) &
         0x7f;
}


////>>0x00081454>>FUN_00081454>>////

undefined4 FUN_00081454(int param_1,undefined4 param_2)

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


////>>0x000814e4>>FUN_000814e4>>////

void FUN_000814e4(undefined4 *param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  param_1[1] = 0;
  param_1[2] = 1000;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_00081454_1_000857a8;
  *(undefined *)(param_1 + 7) = param_3;
  param_1[4] = param_5;
  param_1[8] = param_4;
  param_1[5] = param_6;
  return;
}


////>>0x00081508>>FUN_00081508>>////

void FUN_00081508(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00080e18(*(undefined4 *)(param_1 + 0x20));
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  puVar2[0x48] = 0x202;
  *puVar2 = 0xac;
  puVar2[1] = param_3;
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


////>>0x000815d4>>FUN_000815d4>>////

undefined4 * FUN_000815d4(undefined4 *param_1,undefined4 param_2)

{
  FUN_000814e4();
  *param_1 = &PTR_FUN_00081454_1_000857d8;
  param_1[9] = param_2;
  return param_1;
}


////>>0x000815f8>>FUN_000815f8>>////

uint FUN_000815f8(int param_1,uint param_2)

{
  return param_2 | param_1 << 8;
}


////>>0x000815fe>>FUN_000815fe>>////

undefined4 * FUN_000815fe(undefined4 *param_1)

{
  FUN_00081e04(*param_1);
  return param_1;
}


////>>0x0008160c>>FUN_0008160c>>////

void FUN_0008160c(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00081e04();
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


////>>0x00081622>>FUN_00081622>>////

int FUN_00081622(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000825a0(*param_1,param_2 + 1,param_3,param_4,param_4);
  if (iVar1 != 0) {
    *param_1 = iVar1;
    param_1[1] = param_2;
    iVar1 = 1;
  }
  return iVar1;
}


////>>0x0008163a>>FUN_0008163a>>////

undefined4 FUN_0008163a(int *param_1,uint param_2)

{
  int iVar1;
  
  if ((*param_1 == 0) || ((uint)param_1[1] < param_2)) {
    iVar1 = FUN_00081622(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1[2] == 0) {
      *(undefined *)*param_1 = 0;
    }
  }
  return 1;
}


////>>0x0008165c>>FUN_0008165c>>////

undefined4 * FUN_0008165c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0008163a(param_1,param_3);
  if (iVar1 == 0) {
    FUN_0008160c(param_1);
  }
  else {
    param_1[2] = param_3;
    FUN_00082994(*param_1,param_2);
  }
  return param_1;
}


////>>0x00081682>>FUN_00081682>>////

undefined4 * FUN_00081682(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    uVar1 = FUN_00082a50(param_2);
    FUN_0008165c(param_1,param_2,uVar1);
  }
  return param_1;
}


////>>0x000816a6>>FUN_000816a6>>////

void FUN_000816a6(void)

{
  return;
}


////>>0x000816a8>>FUN_000816a8>>////

void FUN_000816a8(void)

{
  FUN_000816d4();
  FUN_00080ae4();
  FUN_000816a6();
  FUN_0008120c(1);
  FUN_000804a8();
  do {
    FUN_000805d0();
    FUN_00080ce0();
  } while( true );
}


////>>0x000816d4>>FUN_000816d4>>////



void FUN_000816d4(void)

{
  _DAT_400e1a54 = 0x8000;
  return;
}


////>>0x00081714>>FUN_00081714>>////

undefined4 FUN_00081714(void)

{
  return DAT_20071184;
}


////>>0x00081730>>FUN_00081730>>////

uint FUN_00081730(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_0008186a:
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
      if (0xfd < uVar6) goto LAB_0008186a;
    }
  }
  uVar5 = uVar5 + uVar3 * 0x800000 + (uint)(0x7fffffff < uVar4);
  if (uVar4 == 0x80000000) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5 | param_1;
}


////>>0x00081734>>FUN_00081734>>////

uint FUN_00081734(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
LAB_0008186a:
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
      if (0xfd < uVar5) goto LAB_0008186a;
    }
  }
  uVar4 = uVar4 + uVar6 * 0x800000 + (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}


////>>0x00081894>>FUN_00081894>>////

uint FUN_00081894(uint param_1)

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


////>>0x0008189c>>FUN_0008189c>>////

uint FUN_0008189c(uint param_1)

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


////>>0x00081944>>FUN_00081944>>////

uint FUN_00081944(uint param_1,uint param_2,undefined4 param_3,uint param_4)

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
      goto LAB_00081a94;
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
LAB_00081a94:
  return uVar2 & 0x80000000 | 0x7f800000;
}


////>>0x00081bf4>>FUN_00081bf4>>////

uint FUN_00081bf4(uint param_1,uint param_2)

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


////>>0x00081c54>>FUN_00081c54>>////

void FUN_00081c54(undefined4 param_1,undefined4 param_2)

{
  FUN_00081c5c(param_2,param_1);
  return;
}


////>>0x00081c5c>>FUN_00081c5c>>////

undefined8 FUN_00081c5c(undefined4 param_1,undefined4 param_2)

{
  FUN_00081bf4();
  return CONCAT44(param_2,param_1);
}


////>>0x00081c94>>FUN_00081c94>>////

bool FUN_00081c94(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_00081c5c();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x00081ca8>>FUN_00081ca8>>////

bool FUN_00081ca8(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  FUN_00081c54();
  return !(bool)in_CY || (bool)in_ZR;
}


////>>0x00081cd0>>FUN_00081cd0>>////

uint FUN_00081cd0(uint param_1)

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


////>>0x00081d1c>>FUN_00081d1c>>////

uint FUN_00081d1c(uint param_1)

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


////>>0x00081d5c>>FUN_00081d5c>>////

undefined4 FUN_00081d5c(dword param_1,dword param_2,dword param_3)

{
  dword *pdVar1;
  uint uVar2;
  uint uVar3;
  
  if (Elf32_Rel_ARRAY_20070000[48].r_offset == 0) {
    Elf32_Rel_ARRAY_20070000[48].r_offset = 0x20070184;
  }
  uVar2 = *(uint *)(Elf32_Rel_ARRAY_20070000[48].r_offset + 4);
  pdVar1 = (dword *)Elf32_Rel_ARRAY_20070000[48].r_offset;
  if (0x1f < (int)uVar2) {
    pdVar1 = (dword *)FUN_00081df4(400);
    if (pdVar1 == (dword *)0x0) {
      return 0xffffffff;
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
  return 0;
}


////>>0x00081d7c>>FUN_00081d7c>>////

/* WARNING: Removing unreachable block (ram,0x00081d88) */
/* WARNING: Removing unreachable block (ram,0x00081d8c) */
/* WARNING: Removing unreachable block (ram,0x00081db8) */

void FUN_00081d7c(void)

{
  int iVar1;
  code **ppcVar2;
  
  FUN_00085858();
  ppcVar2 = (code **)0x85860;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    ppcVar2 = ppcVar2 + 1;
    (**ppcVar2)();
  } while (iVar1 != 4);
  return;
}


////>>0x00081df4>>FUN_00081df4>>////

void FUN_00081df4(undefined4 param_1)

{
  FUN_00081e14(Elf32_Rel_ARRAY_20070000[140].r_offset,param_1);
  return;
}


////>>0x00081e04>>FUN_00081e04>>////

void FUN_00081e04(undefined4 param_1)

{
  FUN_00083d9c(Elf32_Rel_ARRAY_20070000[140].r_offset,param_1);
  return;
}


////>>0x00081e14>>FUN_00081e14>>////

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int * FUN_00081e14(undefined4 *param_1,uint param_2)

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
    if (0x10 < param_2) goto LAB_00081e7a;
  }
  else {
    uVar15 = param_2 + 0xb & 0xfffffff8;
    if (((int)uVar15 < 0) || (uVar15 < param_2)) {
LAB_00081e7a:
      *param_1 = 0xc;
      return (int *)0x0;
    }
  }
  FUN_00082598(param_1);
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
      FUN_0008259c(param_1);
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
        FUN_0008259c(param_1);
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
      FUN_0008259c(param_1);
      return (int *)(dVar1 + 8);
    }
    Elf32_Rel_ARRAY_20070000[143].r_offset = 0x2007046c;
    Elf32_Rel_ARRAY_20070000[142].r_info = 0x2007046c;
    if (-1 < (int)uVar6) {
      *(uint *)(uVar4 + dVar1 + 4) = *(uint *)(uVar4 + dVar1 + 4) | 1;
      FUN_0008259c(param_1);
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
            FUN_0008259c(param_1);
            return (int *)(puVar10 + 8);
          }
          if (-1 < (int)uVar8) {
            iVar13 = *(int *)(puVar10 + 8);
            iVar2 = *(int *)(puVar10 + 0xc);
            *(uint *)(puVar10 + uVar6 + 4) = *(uint *)(puVar10 + uVar6 + 4) | 1;
            *(int *)(iVar13 + 0xc) = iVar2;
            *(int *)(iVar2 + 8) = iVar13;
            FUN_0008259c(param_1);
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
  goto LAB_0008211e;
  uVar3 = Elf32_Rel_ARRAY_20070000[141].r_info + uVar18;
  if (Elf32_Rel_ARRAY_20070000[270].r_offset == 0xffffffff) {
    uVar4 = uVar15 + DAT_20071190 + 0x10;
  }
  else {
    uVar4 = uVar15 + DAT_20071190 + 0x100f & 0xfffff000;
  }
  dVar7 = FUN_00082970(param_1,uVar4);
  if ((dVar7 == 0xffffffff) || ((dVar7 < uVar3 && (dVar1 != 0x20070464)))) {
    uVar18 = *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) & 0xfffffffc;
    dVar7 = Elf32_Rel_ARRAY_20070000[141].r_info;
  }
  else {
    uVar6 = DAT_20071194 + uVar4;
    DAT_20071194 = uVar6;
    if ((uVar3 == dVar7) && ((uVar3 & 0xfff) == 0)) {
      *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) = uVar4 + uVar18 | 1;
    }
    else {
      dVar11 = dVar7;
      if (Elf32_Rel_ARRAY_20070000[270].r_offset != 0xffffffff) {
        dVar11 = Elf32_Rel_ARRAY_20070000[270].r_offset;
        DAT_20071194 = uVar6 + (dVar7 - uVar3);
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
      iVar2 = FUN_00082970(param_1,iVar13);
      if (iVar2 == -1) {
        uVar3 = 1;
        iVar13 = 0;
      }
      else {
        uVar3 = (iVar2 - dVar7) + iVar13 | 1;
      }
      uVar6 = DAT_20071194 + iVar13;
      Elf32_Rel_ARRAY_20070000[141].r_info = dVar7;
      DAT_20071194 = uVar6;
      *(uint *)(dVar7 + 4) = uVar3;
      if (dVar1 != 0x20070464) {
        if (uVar18 < 0x10) {
          *(undefined4 *)(dVar7 + 4) = 1;
          uVar18 = 0;
          goto LAB_00082108;
        }
        uVar18 = uVar18 - 0xc & 0xfffffff8;
        *(uint *)(dVar1 + 4) = uVar18 | *(uint *)(dVar1 + 4) & 1;
        *(undefined4 *)(dVar1 + uVar18 + 4) = 5;
        *(undefined4 *)(dVar1 + uVar18 + 8) = 5;
        if (0xf < uVar18) {
          FUN_00083d9c(param_1,dVar1 + 8);
          uVar6 = DAT_20071194;
        }
      }
    }
    if (DAT_2007118c < uVar6) {
      DAT_2007118c = uVar6;
    }
    if (DAT_20071188 < uVar6) {
      DAT_20071188 = uVar6;
    }
    uVar18 = *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) & 0xfffffffc;
    dVar7 = Elf32_Rel_ARRAY_20070000[141].r_info;
  }
LAB_00082108:
  uVar3 = uVar18 - uVar15;
  if ((uVar18 < uVar15) || ((int)uVar3 < 0x10)) {
    FUN_0008259c(param_1);
    return (int *)0x0;
  }
LAB_0008211e:
  Elf32_Rel_ARRAY_20070000[141].r_info = uVar15 + dVar7;
  *(uint *)(dVar7 + 4) = uVar15 | 1;
  *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) = uVar3 | 1;
  FUN_0008259c(param_1);
  return (int *)(dVar7 + 8);
}


////>>0x0008234c>>FUN_0008234c>>////

undefined4 * FUN_0008234c(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
      goto LAB_000823d0;
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
LAB_000823d0:
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


////>>0x00082438>>FUN_00082438>>////

void FUN_00082438(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


////>>0x00082504>>FUN_00082504>>////

void FUN_00082504(undefined4 *param_1,undefined param_2,uint param_3)

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
      if (param_3 < 4) goto LAB_00082580;
    }
    do {
      param_3 = param_3 - 4;
      *param_1 = uVar3;
      param_1 = param_1 + 1;
    } while (3 < param_3);
    param_1 = (undefined4 *)((int)puVar1 + (uVar4 - 4 & 0xfffffffc) + 4);
    param_3 = uVar4 & 3;
  }
LAB_00082580:
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


////>>0x00082598>>FUN_00082598>>////

void FUN_00082598(void)

{
  return;
}


////>>0x0008259c>>FUN_0008259c>>////

void FUN_0008259c(void)

{
  return;
}


////>>0x000825a0>>FUN_000825a0>>////

void FUN_000825a0(undefined4 param_1,undefined4 param_2)

{
  FUN_000825b0(Elf32_Rel_ARRAY_20070000[140].r_offset,param_1,param_2);
  return;
}


////>>0x000825b0>>FUN_000825b0>>////

int * FUN_000825b0(undefined4 *param_1,int *param_2,uint param_3)

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
    piVar2 = (int *)FUN_00081e14(param_1,param_3);
    return piVar2;
  }
  FUN_00082598();
  uVar5 = param_2[-1];
  uVar8 = uVar5 & 0xfffffffc;
  piVar2 = param_2 + -2;
  if (param_3 + 0xb < 0x17) {
    uVar9 = 0x10;
  }
  else {
    uVar9 = param_3 + 0xb & 0xfffffff8;
    if ((int)uVar9 < 0) goto LAB_0008267c;
  }
  if (uVar9 < param_3) {
LAB_0008267c:
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
        FUN_0008259c(param_1);
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
        goto LAB_0008268c;
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
              FUN_00082438(piVar2,param_2);
            }
            Elf32_Rel_ARRAY_20070000[141].r_info = (int)piVar10 + uVar9;
            *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) = (uVar3 + uVar5) - uVar9 | 1;
            piVar10[1] = uVar9 | piVar10[1] & 1U;
            FUN_0008259c(param_1);
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
              FUN_00082438(piVar7,param_2);
              uVar5 = piVar10[1];
              piVar2 = piVar10;
              param_2 = piVar7;
            }
            goto LAB_0008268c;
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
          FUN_00082438(piVar7,param_2);
          uVar5 = piVar10[1];
          piVar2 = piVar10;
          param_2 = piVar7;
        }
        goto LAB_0008268c;
      }
    }
    piVar10 = (int *)FUN_00081e14(param_1,param_3);
    if (piVar10 == (int *)0x0) goto LAB_000826a4;
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
        FUN_00082438(piVar10,param_2);
      }
      FUN_00083d9c(param_1,param_2);
      goto LAB_000826a4;
    }
    uVar8 = uVar8 + (piVar10[-1] & 0xfffffffcU);
  }
LAB_0008268c:
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
    FUN_00083d9c(param_1,(int)piVar2 + uVar9 + 8);
  }
LAB_000826a4:
  FUN_0008259c(param_1);
  return piVar10;
}


////>>0x00082970>>FUN_00082970>>////

void FUN_00082970(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_200711bc = 0;
  iVar1 = FUN_0008118c(param_2);
  if ((iVar1 == -1) && (DAT_200711bc != 0)) {
    *param_1 = DAT_200711bc;
    return;
  }
  return;
}


////>>0x00082994>>FUN_00082994>>////

void FUN_00082994(uint *param_1,uint *param_2)

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
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) goto LAB_000829f8;
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
LAB_000829f8:
  do {
    *(char *)param_1 = (char)uVar5;
    uVar6 = uVar5 & 0xff;
    uVar5 = uVar5 >> 8 | uVar5 << 0x18;
    param_1 = (uint *)((int)param_1 + 1);
  } while (uVar6 != 0);
  return;
}


////>>0x00082a50>>FUN_00082a50>>////

int FUN_00082a50(uint param_1)

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


////>>0x00082ac0>>FUN_00082ac0>>////

int FUN_00082ac0(undefined4 param_1,int param_2,int **param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (-1 < *(int *)(param_2 + 100) << 0x12) {
    iVar2 = FUN_00083f34();
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
        iVar2 = FUN_00083c40(param_1,*puVar5,param_2);
        uVar4 = uVar4 + 1;
        if (iVar2 == -1) goto LAB_00082b00;
      } while (uVar7 != uVar4);
      piVar3 = param_3[2];
    }
    piVar3 = (int *)((int)piVar3 - (uVar6 & 0xfffffffc));
    param_3[2] = piVar3;
    piVar1 = piVar1 + 2;
  }
  iVar2 = 0;
LAB_00082b00:
  param_3[2] = (int *)0x0;
  param_3[1] = (int *)0x0;
  return iVar2;
}


////>>0x00082b38>>FUN_00082b38>>////

/* WARNING: Type propagation algorithm not settling */

int FUN_00082b38(int param_1,int param_2,int *******param_3,int **param_4)

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
    FUN_00083b14();
  }
  uVar13 = (uint)*(ushort *)(param_2 + 0xc);
  if (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x12)) {
    uVar13 = uVar13 | 0x2000;
    *(short *)(param_2 + 0xc) = (short)uVar13;
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xffffdfff;
  }
  if (((int)(uVar13 << 0x1c) < 0) && (*(int *)(param_2 + 0x10) != 0)) {
    if ((uVar13 & 0x1a) != 10) goto LAB_00082b8a;
  }
  else {
    iVar8 = FUN_00083808(param_1,param_2);
    if (iVar8 != 0) {
      return -1;
    }
    if ((*(ushort *)(param_2 + 0xc) & 0x1a) != 10) goto LAB_00082b8a;
  }
  if (-1 < *(short *)(param_2 + 0xe)) {
    iVar8 = FUN_0008378c(param_1,param_2,param_3,param_4);
    return iVar8;
  }
LAB_00082b8a:
  local_c0 = (char *)0x0;
  local_94 = (int *******)0x0;
  local_98 = 0;
  local_c4 = 0;
  ppppppppiVar6 = (int ********)local_68;
  local_c8 = param_4;
  local_9c = (int ********)local_68;
LAB_00082b9e:
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
          goto LAB_00082bee;
        }
        iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
        ppppppppiVar6 = (int ********)local_68;
        if (iVar8 != 0) goto LAB_000833de;
      }
      local_c4 = local_c4 + (int)pppppppiVar20;
    }
  }
LAB_00082bee:
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
LAB_00082c12:
    param_3 = (int *******)((int)param_3 + 1);
LAB_00082c16:
    switch(uVar14) {
    case 0x20:
      goto switchD_00082c20_caseD_20;
    default:
      if (uVar14 != 0) {
        local_dc = (int *******)0x1;
        local_d4 = (int *******)0x1;
        ppppppppiVar25 = (int ********)&local_90;
        local_90 = (char)uVar14;
        goto LAB_00083012;
      }
      goto LAB_000833d0;
    case 0x23:
      bVar3 = true;
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x2a:
      pppppppiVar20 = (int *******)*local_c8;
      local_c8 = local_c8 + 1;
      if ((int)pppppppiVar20 < 0) {
        pppppppiVar20 = (int *******)-(int)pppppppiVar20;
        goto switchD_00082c20_caseD_2d;
      }
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x2b:
      uVar14 = (uint)*(byte *)param_3;
      local_a1 = '+';
      goto LAB_00082c12;
    case 0x2d:
switchD_00082c20_caseD_2d:
      uVar13 = uVar13 | 4;
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
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
        goto LAB_00082c12;
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
      goto LAB_00082c16;
    case 0x30:
      uVar13 = uVar13 | 0x80;
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      goto switchD_00082c20_caseD_31;
    case 0x44:
      bVar2 = true;
      if (bVar1 == false) goto LAB_00083028;
LAB_00082e98:
      local_c8 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      piVar19 = *local_c8;
      piVar22 = local_c8[1];
      local_c8 = local_c8 + 2;
      goto LAB_00082eac;
    case 0x4f:
      bVar2 = true;
      if (bVar1 != false) goto LAB_00082d42;
LAB_00082f2a:
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
      if (bVar1 != false) goto LAB_00082e62;
LAB_00082f7c:
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
      if (bVar1 == false) goto LAB_00083196;
LAB_00082fb6:
      ppiVar12 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar12 + 2;
      piVar19 = *ppiVar12;
      piVar22 = ppiVar12[1];
      goto LAB_00082fca;
    case 99:
      piVar19 = *local_c8;
      local_c8 = local_c8 + 1;
      local_dc = (int *******)0x1;
      local_90 = SUB41(piVar19,0);
      local_d4 = (int *******)0x1;
      ppppppppiVar25 = (int ********)&local_90;
      goto LAB_00083012;
    case 100:
    case 0x69:
      if (bVar1 != false) goto LAB_00082e98;
LAB_00083028:
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
LAB_00082eac:
      if ((int)piVar22 < 0) {
        bVar26 = piVar19 != (int *)0x0;
        piVar19 = (int *)-(int)piVar19;
        piVar22 = (int *)(-(int)piVar22 - (uint)bVar26);
        local_a1 = '-';
        cVar4 = '-';
        iVar8 = 1;
        goto LAB_00082d6a;
      }
      if (-1 < (int)local_d4) {
        uVar13 = uVar13 & 0xffffff7f;
      }
      bVar5 = false;
      uVar14 = (uint)piVar19 | (uint)piVar22;
      iVar8 = 1;
      cVar4 = local_a1;
      goto joined_r0x00082d78;
    case 0x68:
      bVar26 = true;
      uVar14 = (uint)*(byte *)param_3;
      goto LAB_00082c12;
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
      goto LAB_00082c12;
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
      goto LAB_00082b9e;
    case 0x6f:
      if (bVar1 == false) goto LAB_00082f2a;
LAB_00082d42:
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
      goto LAB_00082c12;
    case 0x73:
      ppppppppiVar25 = (int ********)*local_c8;
      local_a1 = '\0';
      local_c8 = local_c8 + 1;
      if (ppppppppiVar25 != (int ********)0x0) {
        if ((int)local_d4 < 0) {
          local_d4 = (int *******)FUN_00082a50(ppppppppiVar25);
          pppppppiVar10 = (int *******)0x0;
          cVar4 = local_a1;
        }
        else {
          iVar8 = FUN_00084384(ppppppppiVar25,0,local_d4);
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
        goto LAB_00082da0;
      }
      if ((int *******)0x5 < local_d4) {
        local_d4 = (int *******)0x6;
      }
      local_dc = (int *******)((uint)local_d4 & ~((int)local_d4 >> 0x1f));
      ppppppppiVar25 = (int ********)&UNK_00085840;
LAB_00083012:
      local_a1 = '\0';
      pppppppiVar10 = (int *******)0x0;
      goto LAB_00082dba;
    case 0x75:
      if (!bVar1) goto LAB_00082f7c;
LAB_00082e62:
      ppiVar12 = (int **)((int)local_c8 + 7U & 0xfffffff8);
      local_c8 = ppiVar12 + 2;
      piVar19 = *ppiVar12;
      piVar22 = ppiVar12[1];
      iVar8 = 1;
      break;
    case 0x78:
      local_c0 = "0123456789abcdef";
      if (bVar1 != false) goto LAB_00082fb6;
LAB_00083196:
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
LAB_00082fca:
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
LAB_00082d6a:
    if (-1 < (int)local_d4) {
      uVar13 = uVar13 & 0xffffff7f;
    }
    uVar14 = (uint)piVar19 | (uint)piVar22;
joined_r0x00082d78:
    lVar27 = CONCAT44(piVar22,piVar19);
    pppppppiVar10 = local_d4;
    if ((uVar14 == 0) && (local_d4 == (int *******)0x0)) {
      ppppppppiVar25 = (int ********)local_68;
      if ((iVar8 != 0) || (!bVar3)) goto LAB_00082da0;
      ppppppppiVar25 = (int ********)(&cStack_6a + 1);
      local_69 = '0';
      goto LAB_00082d9a;
    }
    if (iVar8 == 1) {
      if (piVar22 != (int *)0x0 || (int *)0x9 < piVar19) {
        ppppppppiVar16 = (int ********)(&cStack_6a + 1);
        do {
          ppppppppiVar25 = ppppppppiVar16;
          uVar24 = (undefined4)((ulonglong)lVar27 >> 0x20);
          cVar9 = '\n';
          FUN_00084750((int)lVar27,uVar24,10,0);
          *(char *)ppppppppiVar25 = cVar9 + '0';
          lVar27 = FUN_00084750((int)lVar27,uVar24,10,0);
          ppppppppiVar16 = (int ********)((int)ppppppppiVar25 + -1);
        } while (lVar27 != 0);
        local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar25);
        goto LAB_00082da0;
      }
      local_69 = (char)piVar19 + '0';
      ppppppppiVar25 = (int ********)(&cStack_6a + 1);
      goto LAB_0008351e;
    }
    ppppppppiVar16 = (int ********)(&cStack_6a + 1);
    if (iVar8 != 2) goto LAB_0008337e;
    do {
      ppppppppiVar25 = ppppppppiVar16;
      uVar14 = (uint)piVar19 & 0xf;
      piVar19 = (int *)((uint)piVar19 >> 4 | (int)piVar22 << 0x1c);
      piVar22 = (int *)((uint)piVar22 >> 4);
      *(char *)ppppppppiVar25 = local_c0[uVar14];
      ppppppppiVar16 = (int ********)((int)ppppppppiVar25 + -1);
    } while (((uint)piVar19 | (uint)piVar22) != 0);
    local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar25);
    goto LAB_00082da0;
  }
LAB_000833d0:
  if (local_94 != (int *******)0x0) {
    FUN_00082ac0(param_1,param_2,&local_9c);
  }
LAB_000833de:
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x19) < 0) {
    return -1;
  }
  return local_c4;
LAB_0008337e:
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
LAB_00082d9a:
      local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar25);
    }
    else {
      *(undefined *)((int)ppppppppiVar25 + -1) = 0x30;
      ppppppppiVar25 = ppppppppiVar16;
      local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar16);
    }
  }
  else {
LAB_0008351e:
    local_d4 = (int *******)((int)local_68 - (int)ppppppppiVar25);
  }
LAB_00082da0:
  local_dc = local_d4;
  if ((int)local_d4 < (int)pppppppiVar10) {
    local_dc = pppppppiVar10;
  }
  if (cVar4 != '\0') {
    local_dc = (int *******)((int)local_dc + 1);
  }
LAB_00082dba:
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
        *ppppppppiVar6 = (int *******)0x85808;
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
          iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
          if (iVar8 != 0) goto LAB_000833de;
          iVar15 = local_98 + 1;
          ppppppppiVar6 = (int ********)local_68;
        }
        pppppppiVar18 = pppppppiVar23 + -4;
      } while (0x10 < (int)pppppppiVar18);
      pppppppiVar18 = pppppppiVar23 + -4;
      local_98 = iVar15;
    }
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar18);
    *ppppppppiVar6 = (int *******)0x85808;
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
      iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_000833de;
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
      iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_000833de;
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
      iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_000833de;
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
          *ppppppppiVar6 = (int *******)&DAT_00085848;
          ppppppppiVar6[1] = (int *******)0x10;
          if (7 < local_98) break;
          iVar8 = iVar17 + 2;
          ppppppppiVar6 = ppppppppiVar6 + 2;
LAB_0008348e:
          iVar17 = local_98;
          pppppppiVar18 = pppppppiVar23 + -4;
          if ((int)(pppppppiVar23 + -4) < 0x11) goto LAB_000834b4;
        }
        if (local_94 != (int *******)0x0) {
          iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
          if (iVar8 == 0) {
            iVar8 = local_98 + 1;
            ppppppppiVar6 = (int ********)local_68;
            goto LAB_0008348e;
          }
          goto LAB_000833de;
        }
        iVar8 = 1;
        iVar17 = 0;
        pppppppiVar18 = pppppppiVar23 + -4;
        ppppppppiVar6 = (int ********)local_68;
      } while (0x10 < (int)(pppppppiVar23 + -4));
LAB_000834b4:
      pppppppiVar18 = pppppppiVar23 + -4;
    }
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar18);
    *ppppppppiVar6 = (int *******)&DAT_00085848;
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
      iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_000833de;
      iVar8 = local_98 + 1;
      ppppppppiVar6 = (int ********)local_68;
    }
  }
  pppppppiVar10 = (int *******)((int)pppppppiVar10 - (int)local_d4);
  ppppppppiVar16 = (int ********)local_68;
  if ((int)pppppppiVar10 < 1) {
LAB_000832c6:
    local_94 = (int *******)((int)local_94 + (int)local_d4);
    *ppppppppiVar6 = (int *******)ppppppppiVar25;
    ppppppppiVar6[1] = local_d4;
    local_d4 = local_94;
    local_98 = iVar8;
    if (iVar8 < 8) goto LAB_0008345a;
    if (local_94 == (int *******)0x0) {
      local_98 = 0;
    }
    else {
      iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_000833de;
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
          *ppppppppiVar6 = (int *******)&DAT_00085848;
          ppppppppiVar6[1] = (int *******)0x10;
          if (7 < local_98) break;
          iVar8 = iVar15 + 2;
          ppppppppiVar6 = ppppppppiVar6 + 2;
LAB_00083282:
          iVar15 = local_98;
          pppppppiVar10 = pppppppiVar18 + -4;
          if ((int)(pppppppiVar18 + -4) < 0x11) goto LAB_000832aa;
        }
        if (local_94 != (int *******)0x0) {
          iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
          if (iVar8 == 0) {
            iVar8 = local_98 + 1;
            ppppppppiVar6 = (int ********)local_68;
            goto LAB_00083282;
          }
          goto LAB_000833de;
        }
        iVar8 = 1;
        ppppppppiVar6 = (int ********)local_68;
        iVar15 = 0;
        pppppppiVar10 = pppppppiVar18 + -4;
      } while (0x10 < (int)(pppppppiVar18 + -4));
LAB_000832aa:
      pppppppiVar10 = pppppppiVar18 + -4;
    }
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar10);
    *ppppppppiVar6 = (int *******)&DAT_00085848;
    ppppppppiVar6[1] = pppppppiVar10;
    if (iVar8 < 8) {
      iVar8 = iVar8 + 1;
      ppppppppiVar6 = ppppppppiVar6 + 2;
      goto LAB_000832c6;
    }
    if (local_94 != (int *******)0x0) {
      local_98 = iVar8;
      iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_000833de;
      iVar8 = local_98 + 1;
      ppppppppiVar6 = (int ********)local_68;
      goto LAB_000832c6;
    }
    local_64[0] = local_d4;
    local_98 = 1;
    ppppppppiVar6 = (int ********)local_68;
    local_68 = (undefined  [4])ppppppppiVar25;
LAB_0008345a:
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
          *ppppppppiVar16 = (int *******)0x85808;
          ppppppppiVar16[1] = (int *******)0x10;
          if (7 < local_98) break;
          iVar15 = iVar8 + 2;
          ppppppppiVar16 = ppppppppiVar16 + 2;
LAB_00083316:
          pppppppiVar10 = pppppppiVar10 + -4;
          iVar8 = local_98;
          if ((int)pppppppiVar10 < 0x11) goto LAB_0008333e;
        }
        if (local_94 != (int *******)0x0) {
          iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
          if (iVar8 == 0) {
            iVar15 = local_98 + 1;
            ppppppppiVar16 = (int ********)local_68;
            goto LAB_00083316;
          }
          goto LAB_000833de;
        }
        pppppppiVar10 = pppppppiVar10 + -4;
        iVar15 = 1;
        iVar8 = 0;
        ppppppppiVar16 = (int ********)local_68;
      } while (0x10 < (int)pppppppiVar10);
    }
LAB_0008333e:
    local_94 = (int *******)((int)local_94 + (int)pppppppiVar10);
    *ppppppppiVar16 = (int *******)0x85808;
    ppppppppiVar16[1] = pppppppiVar10;
    local_98 = iVar15;
    if (7 < iVar15) {
      if (local_94 == (int *******)0x0) {
        if ((int)local_dc < (int)pppppppiVar20) {
          local_dc = pppppppiVar20;
        }
        local_c4 = local_c4 + (int)local_dc;
        goto LAB_00083422;
      }
      iVar8 = FUN_00082ac0(param_1,param_2,&local_9c);
      if (iVar8 != 0) goto LAB_000833de;
    }
  }
  if ((int)local_dc < (int)pppppppiVar20) {
    local_dc = pppppppiVar20;
  }
  local_c4 = local_c4 + (int)local_dc;
  if ((local_94 != (int *******)0x0) &&
     (iVar8 = FUN_00082ac0(param_1,param_2,&local_9c), iVar8 != 0)) goto LAB_000833de;
LAB_00083422:
  local_98 = 0;
  ppppppppiVar6 = (int ********)local_68;
  goto LAB_00082b9e;
switchD_00082c20_caseD_31:
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
  goto LAB_00082c16;
switchD_00082c20_caseD_20:
  uVar14 = (uint)*(byte *)param_3;
  if (local_a1 == '\0') {
    local_a1 = ' ';
  }
  goto LAB_00082c12;
}


////>>0x0008378c>>FUN_0008378c>>////

int FUN_0008378c(undefined4 param_1,int param_2)

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
  iVar1 = FUN_00082b38(param_1,local_488);
  if ((-1 < iVar1) && (iVar2 = FUN_00083adc(param_1,local_488), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((int)((uint)local_47c << 0x19) < 0) {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x40;
  }
  return iVar1;
}


////>>0x00083808>>FUN_00083808>>////

undefined4 FUN_00083808(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  if ((Elf32_Rel_ARRAY_20070000[140].r_offset != 0) &&
     (*(int *)(Elf32_Rel_ARRAY_20070000[140].r_offset + 0x38) == 0)) {
    FUN_00083b14();
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
          FUN_00083d9c(param_1);
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
    FUN_000842a4(param_1,param_2);
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


////>>0x00083974>>FUN_00083974>>////

/* WARNING: Removing unreachable block (ram,0x00083934) */
/* WARNING: Removing unreachable block (ram,0x000838cc) */
/* WARNING: Removing unreachable block (ram,0x00083960) */
/* WARNING: Removing unreachable block (ram,0x000838de) */
/* WARNING: Removing unreachable block (ram,0x000838e4) */
/* WARNING: Removing unreachable block (ram,0x000838f0) */
/* WARNING: Removing unreachable block (ram,0x0008390a) */
/* WARNING: Removing unreachable block (ram,0x000838e8) */
/* WARNING: Removing unreachable block (ram,0x00083922) */
/* WARNING: Removing unreachable block (ram,0x00083954) */
/* WARNING: Removing unreachable block (ram,0x00083924) */

undefined4 FUN_00083974(undefined4 param_1)

{
  return param_1;
}


////>>0x00083adc>>FUN_00083adc>>////

undefined4 FUN_00083adc(int *param_1,int *param_2)

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
    FUN_00083b14();
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
LAB_00083a54:
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
      goto LAB_00083a54;
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
      goto LAB_00083a00;
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
LAB_00083a00:
  piVar1 = (int *)param_2[0xc];
  *param_1 = iVar7;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1 != param_2 + 0x10) {
    FUN_00083d9c(param_1);
  }
  param_2[0xc] = 0;
  return 0;
}


////>>0x00083b14>>FUN_00083b14>>////

void FUN_00083b14(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    *(undefined **)(param_1 + 0x3c) = &LAB_00083b08_1;
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
    FUN_00082504(puVar1 + 0x17,0,8);
    puVar2 = *(undefined4 **)(param_1 + 8);
    puVar1[7] = puVar1;
    puVar1[8] = &LAB_00084440_1;
    puVar1[9] = 0x84465;
    puVar1[10] = 0x8449d;
    puVar1[0xb] = &LAB_000844bc_1;
    *(undefined2 *)((int)puVar2 + 0xe) = 1;
    *(undefined2 *)(puVar2 + 3) = 9;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[0x19] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    FUN_00082504(puVar2 + 0x17,0,8);
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    puVar2[7] = puVar2;
    puVar2[8] = &LAB_00084440_1;
    puVar2[9] = 0x84465;
    puVar2[10] = 0x8449d;
    puVar2[0xb] = &LAB_000844bc_1;
    *(undefined2 *)(puVar1 + 3) = 0x12;
    *(undefined2 *)((int)puVar1 + 0xe) = 2;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[0x19] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    FUN_00082504(puVar1 + 0x17,0,8);
    puVar1[7] = puVar1;
    puVar1[8] = &LAB_00084440_1;
    puVar1[9] = 0x84465;
    puVar1[10] = 0x8449d;
    puVar1[0xb] = &LAB_000844bc_1;
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}


////>>0x00083c08>>FUN_00083c08>>////

void FUN_00083c08(void)

{
  return;
}


////>>0x00083c0c>>FUN_00083c0c>>////

void FUN_00083c0c(void)

{
  return;
}


////>>0x00083c40>>FUN_00083c40>>////

uint FUN_00083c40(undefined4 param_1,uint param_2,byte **param_3)

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
  iVar1 = FUN_00084298();
  if ((iVar1 == 1) && (param_2 - 1 < 0xff)) {
    uVar3 = param_2 & 0xff;
    local_1c = (byte)uVar3;
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_0008456c(param_1,&local_1c,param_2,param_3 + 0x17);
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
        if (uVar3 != 10) goto LAB_00083c90;
      }
      iVar1 = FUN_000844c4(param_1,uVar3,param_3);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
    }
    else {
      **param_3 = (byte)uVar3;
      pbVar4 = *param_3;
LAB_00083c90:
      *param_3 = pbVar4 + 1;
    }
    if (uVar2 <= uVar5 + 1) {
      return param_2;
    }
    uVar3 = (uint)abStack_1b[uVar5];
    uVar5 = uVar5 + 1;
  } while( true );
}


////>>0x00083d00>>FUN_00083d00>>////

undefined4 FUN_00083d00(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00082598();
  uVar2 = *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) & 0xfffffffc;
  iVar3 = ((uVar2 - param_2) + 0xfef & 0xfffff000) - 0x1000;
  if (0xfff < iVar3) {
    iVar1 = FUN_00082970(param_1,0);
    if (iVar1 == Elf32_Rel_ARRAY_20070000[141].r_info + uVar2) {
      iVar1 = FUN_00082970(param_1,-iVar3);
      if (iVar1 != -1) {
        DAT_20071194 = DAT_20071194 - iVar3;
        *(uint *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) = uVar2 - iVar3 | 1;
        FUN_0008259c(param_1);
        return 1;
      }
      iVar3 = FUN_00082970(param_1,0);
      if (0xf < (int)(iVar3 - Elf32_Rel_ARRAY_20070000[141].r_info)) {
        DAT_20071194 = iVar3 - Elf32_Rel_ARRAY_20070000[270].r_offset;
        *(dword *)(Elf32_Rel_ARRAY_20070000[141].r_info + 4) =
             iVar3 - Elf32_Rel_ARRAY_20070000[141].r_info | 1;
      }
    }
  }
  FUN_0008259c(param_1);
  return 0;
}


////>>0x00083d9c>>FUN_00083d9c>>////

void FUN_00083d9c(undefined4 param_1,int param_2)

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
  FUN_00082598();
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
      FUN_00083d00(param_1,DAT_20071190);
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
        goto LAB_00083e30;
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
        FUN_0008259c(param_1);
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
LAB_00083e30:
  FUN_0008259c(param_1);
  return;
}


////>>0x00083f34>>FUN_00083f34>>////

undefined4 FUN_00083f34(undefined4 *param_1,uint *param_2,uint **param_3)

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
      iVar1 = FUN_00083808(param_1,param_2);
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
                uVar9 = FUN_00081e14(param_1,uVar8);
                if (uVar9 == 0) {
                  *param_1 = 0xc;
                  uVar4 = *(ushort *)(param_2 + 3);
                  goto LAB_00084030;
                }
                FUN_0008234c(uVar9,param_2[4],iVar1);
                *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
              }
              else {
                uVar9 = FUN_000825b0(param_1);
                if (uVar9 == 0) {
                  FUN_00083d9c(param_1,param_2[4]);
                  uVar4 = *(ushort *)(param_2 + 3) & 0xff7f;
                  *param_1 = 0xc;
                  goto LAB_00084030;
                }
              }
              uVar5 = uVar9 + iVar1;
              param_2[4] = uVar9;
              param_2[5] = uVar8;
              *param_2 = uVar5;
              param_2[2] = uVar8 - iVar1;
              uVar8 = uVar2;
            }
            FUN_00082438(uVar5,uVar10,uVar8);
            param_2[2] = param_2[2] - uVar8;
            *param_2 = *param_2 + uVar8;
            uVar8 = uVar2;
          }
          else if ((param_2[4] < *param_2) || (uVar5 = param_2[5], uVar2 < uVar5)) {
            if (uVar2 < uVar8) {
              uVar8 = uVar2;
            }
            FUN_00082438(*param_2,uVar10,uVar8);
            uVar5 = param_2[2];
            param_2[2] = uVar5 - uVar8;
            *param_2 = *param_2 + uVar8;
            if ((uVar5 - uVar8 == 0) && (iVar1 = FUN_00083adc(param_1,param_2), iVar1 != 0))
            goto LAB_0008402e;
          }
          else {
            uVar8 = 0x7fffffff;
            if (uVar2 < 0x7fffffff) {
              uVar8 = uVar2;
            }
            uVar8 = (*(code *)param_2[9])(param_1,param_2[7],uVar10,(uVar8 / uVar5) * uVar5);
            if ((int)uVar8 < 1) goto LAB_0008402e;
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
            iVar1 = FUN_00084384(uVar8,10,uVar2);
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
            FUN_00082438(uVar9,uVar8,uVar11);
            *param_2 = *param_2 + uVar11;
            iVar1 = FUN_00083adc(param_1,param_2);
            if (iVar1 != 0) goto LAB_0008402e;
          }
          else if ((int)uVar5 < (int)uVar3) {
            FUN_00082438(uVar9,uVar8,uVar5);
            param_2[2] = param_2[2] - uVar5;
            *param_2 = uVar5 + *param_2;
            uVar11 = uVar5;
          }
          else {
            uVar11 = (*(code *)param_2[9])(param_1,param_2[7],uVar8,uVar3);
            if ((int)uVar11 < 1) goto LAB_0008402e;
          }
          uVar10 = uVar10 - uVar11;
          if (uVar10 == 0) {
            iVar1 = FUN_00083adc(param_1,param_2);
            if (iVar1 != 0) goto LAB_0008402e;
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
LAB_0008402e:
          uVar4 = *(ushort *)(param_2 + 3);
LAB_00084030:
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


////>>0x00084290>>FUN_00084290>>////

undefined4 FUN_00084290(void)

{
  return 0x20070874;
}


////>>0x00084298>>FUN_00084298>>////

dword FUN_00084298(void)

{
  return Elf32_Rel_ARRAY_20070000[274].r_info;
}


////>>0x000842a4>>FUN_000842a4>>////

void FUN_000842a4(int param_1,int *param_2)

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
    iVar2 = FUN_000846b4(param_1,(int)*(short *)((int)param_2 + 0xe),auStack_54);
    if (-1 < iVar2) {
      bVar5 = (local_50 & 0xf000) == 0x2000;
      if (((local_50 & 0xf000) == 0x8000) && (param_2[10] == 0x8449d)) {
        iVar2 = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x400;
        param_2[0x13] = 0x400;
      }
      else {
        iVar2 = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x800;
      }
      goto LAB_00084300;
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
LAB_00084300:
  iVar3 = FUN_00081e14(param_1,iVar2);
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
    *(undefined **)(param_1 + 0x3c) = &LAB_00083b08_1;
    *(ushort *)(param_2 + 3) = uVar1 | 0x80;
    *param_2 = iVar3;
    param_2[4] = iVar3;
    param_2[5] = iVar2;
    if ((bVar5) && (iVar2 = FUN_000846dc(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0))
    {
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 1;
    }
  }
  return;
}


////>>0x00084384>>FUN_00084384>>////

uint * FUN_00084384(uint *param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  
  if (((uint)param_1 & 3) == 0) {
LAB_000843b4:
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
        if (bVar4) goto LAB_000843dc;
      } while (*(char *)param_1 != param_2);
    }
  }
  else if (param_3 == 0) {
LAB_000843dc:
    param_1 = (uint *)0x0;
  }
  else if (*(char *)param_1 != param_2) {
    puVar3 = (uint *)((int)param_1 + 1);
    param_3 = param_3 - 1;
    do {
      param_1 = puVar3;
      if (((uint)param_1 & 3) == 0) goto LAB_000843b4;
      if (param_3 == 0) goto LAB_000843dc;
      puVar3 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    } while (*(char *)param_1 != param_2);
  }
  return param_1;
}


////>>0x00084464>>FUN_00084464>>////

void FUN_00084464(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  uVar2 = *(ushort *)(param_2 + 0xc);
  if ((int)((uint)uVar2 << 0x17) < 0) {
    FUN_00084700(param_1,(int)*(short *)(param_2 + 0xe),0,2);
    uVar2 = *(ushort *)(param_2 + 0xc);
  }
  *(ushort *)(param_2 + 0xc) = uVar2 & 0xefff;
  DAT_200711bc = 0;
  iVar1 = FUN_000811cc((int)*(short *)(param_2 + 0xe),param_3,param_4,param_4,unaff_r4,unaff_r5,
                       unaff_r6,in_lr);
  if ((iVar1 == -1) && (DAT_200711bc != 0)) {
    *param_1 = DAT_200711bc;
    return;
  }
  return;
}


////>>0x0008449c>>FUN_0008449c>>////

void FUN_0008449c(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_00084700(param_1,(int)*(short *)(param_2 + 0xe));
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


////>>0x000844c4>>FUN_000844c4>>////

uint FUN_000844c4(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    FUN_00083b14();
  }
  uVar1 = *(ushort *)(param_3 + 3);
  uVar2 = (uint)uVar1;
  param_3[2] = param_3[6];
  if ((-1 < (int)(uVar2 << 0x1c)) || (iVar4 = param_3[4], iVar4 == 0)) {
    iVar4 = FUN_00083808(param_1,param_3,uVar1,uVar2,param_4);
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
LAB_000844f6:
      iVar4 = iVar4 + 1;
      goto LAB_000844f8;
    }
  }
  else {
    param_3[0x19] = param_3[0x19] & 0xffffdfff;
    puVar3 = (undefined *)*param_3;
    *(ushort *)(param_3 + 3) = uVar1 | 0x2000;
    iVar4 = (int)puVar3 - iVar4;
    if (iVar4 < (int)param_3[5]) goto LAB_000844f6;
  }
  iVar4 = FUN_00083adc(param_1,param_3);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  puVar3 = (undefined *)*param_3;
  iVar4 = 1;
LAB_000844f8:
  param_3[2] = param_3[2] + -1;
  *param_3 = puVar3 + 1;
  *puVar3 = (char)param_2;
  if (((param_3[5] == iVar4) ||
      (((int)((uint)*(ushort *)(param_3 + 3) << 0x1f) < 0 && (param_2 == 10)))) &&
     (iVar4 = FUN_00083adc(param_1,param_3), iVar4 != 0)) {
    return 0xffffffff;
  }
  return param_2;
}


////>>0x0008456c>>FUN_0008456c>>////

void FUN_0008456c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_24 [12];
  
  pcVar1 = DAT_20070898;
  if (param_2 == 0) {
    uVar2 = FUN_00084290();
    iVar3 = (*pcVar1)(param_1,auStack_24,0,uVar2,param_4);
  }
  else {
    uVar2 = FUN_00084290();
    iVar3 = (*pcVar1)(param_1,param_2,param_3,uVar2,param_4);
  }
  if (iVar3 == -1) {
    *param_4 = 0;
    *param_1 = 0x8a;
  }
  return;
}


////>>0x000845bc>>FUN_000845bc>>////

undefined4 FUN_000845bc(undefined4 *param_1,undefined *param_2,uint param_3)

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


////>>0x000846a4>>FUN_000846a4>>////

undefined4 FUN_000846a4(int param_1)

{
  dword dVar1;
  undefined4 uVar2;
  int iVar3;
  
  dVar1 = Elf32_Rel_ARRAY_20070000[140].r_offset;
  if (param_1 != 0) {
    if ((Elf32_Rel_ARRAY_20070000[140].r_offset != 0) &&
       (*(int *)(Elf32_Rel_ARRAY_20070000[140].r_offset + 0x38) == 0)) {
      FUN_00083b14();
    }
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar2 = FUN_00083adc(dVar1,param_1);
      if ((*(code **)(param_1 + 0x2c) != (code *)0x0) &&
         (iVar3 = (**(code **)(param_1 + 0x2c))(dVar1,*(undefined4 *)(param_1 + 0x1c)), iVar3 < 0))
      {
        uVar2 = 0xffffffff;
      }
      if ((int)((uint)*(ushort *)(param_1 + 0xc) << 0x18) < 0) {
        FUN_00083d9c(dVar1,*(undefined4 *)(param_1 + 0x10));
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        if (*(int *)(param_1 + 0x30) != param_1 + 0x40) {
          FUN_00083d9c(dVar1);
        }
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      if (*(int *)(param_1 + 0x44) != 0) {
        FUN_00083d9c(dVar1);
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      FUN_00083c08();
      *(undefined2 *)(param_1 + 0xc) = 0;
      FUN_00083c0c();
      return uVar2;
    }
  }
  return 0;
}


////>>0x000846b4>>FUN_000846b4>>////

void FUN_000846b4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_200711bc = 0;
  iVar1 = FUN_000811b4(param_2,param_3,param_3,0,param_4);
  if ((iVar1 == -1) && (DAT_200711bc != 0)) {
    *param_1 = DAT_200711bc;
    return;
  }
  return;
}


////>>0x000846dc>>FUN_000846dc>>////

void FUN_000846dc(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_200711bc = 0;
  iVar1 = FUN_000811be(param_2);
  if ((iVar1 == -1) && (DAT_200711bc != 0)) {
    *param_1 = DAT_200711bc;
    return;
  }
  return;
}


////>>0x00084700>>FUN_00084700>>////

void FUN_00084700(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_200711bc = 0;
  iVar1 = FUN_000811c2(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_200711bc != 0)) {
    *param_1 = DAT_200711bc;
    return;
  }
  return;
}


////>>0x00084728>>FUN_00084728>>////

void FUN_00084728(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_200711bc = 0;
  iVar1 = FUN_000811c6(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_200711bc != 0)) {
    *param_1 = DAT_200711bc;
    return;
  }
  return;
}


////>>0x00084750>>FUN_00084750>>////

int FUN_00084750(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_1 = -1;
    }
    return param_1;
  }
  iVar1 = FUN_000847ac();
  return iVar1;
}


////>>0x0008477c>>FUN_0008477c>>////

void FUN_0008477c(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_000847e0();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = (param_2 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar1);
  return;
}


////>>0x000847ac>>FUN_000847ac>>////

void FUN_000847ac(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00084a80();
  lVar2 = lVar2 * CONCAT44(param_4,param_3);
  uVar1 = (uint)lVar2;
  *param_5 = param_1 - uVar1;
  param_5[1] = (param_2 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar1);
  return;
}


////>>0x000847e0>>FUN_000847e0>>////

undefined8 FUN_000847e0(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x00084a80>>FUN_00084a80>>////

ulonglong FUN_00084a80(uint param_1,uint param_2,uint param_3,uint param_4)

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


////>>0x00085858>>FUN_00085858>>////

void FUN_00085858(void)

{
  return;
}


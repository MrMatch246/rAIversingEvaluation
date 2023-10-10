java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x0800010c>>FUN_0800010c>>////

/* WARNING: Removing unreachable block (ram,0x08000118) */

undefined4 FUN_0800010c(undefined4 param_1)

{
  if ((char)DAT_200000f4 == '\0') {
    DAT_200000f4._0_1_ = '\x01';
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


////>>0x08000188>>FUN_08000188>>////

void FUN_08000188(void)

{
  software_interrupt(0x3f);
  return;
}


////>>0x0800018c>>FUN_0800018c>>////

undefined4 FUN_0800018c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (DAT_20000110 != 0) {
    return 0;
  }
  uVar1 = aflCall(1,param_1,0,0,param_4);
  return uVar1;
}


////>>0x08000214>>FUN_08000214>>////

void FUN_08000214(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  if (0x3b < (int)param_1) {
    return;
  }
  iVar2 = getPinMode(&DAT_200003d4,param_1,param_3,param_4,param_4);
  if (iVar2 == 3) {
    if (param_1 < 0x3c) {
      if ((&DAT_0800a908)[param_1] == -1) {
        iVar2 = 0;
      }
      else {
        iVar2 = pinNametoDigitalPin();
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
          if (iVar2 == 1) {
            iVar2 = 0;
          }
          else {
            iVar2 = pin_in_pinmap((int)(char)(&DAT_0800a908)[param_1],&DAT_0800a6cc);
          }
        }
      }
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      analogWrite(param_1,param_2);
    }
    setPinState(&DAT_200003d4,param_1,param_2);
  }
  else if (iVar2 == 4) {
    if (param_1 < 0x3c) {
      if ((&DAT_0800a908)[param_1] == -1) {
        bVar1 = false;
      }
      else {
        iVar2 = pinNametoDigitalPin();
        if (iVar2 == 0) {
          bVar1 = false;
        }
        else {
          iVar2 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
          if (iVar2 == 1) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_080026b0(&DAT_2000022c + (uint)(byte)(&DAT_200001f0)[param_1] * 3,param_2);
    }
    setPinState(&DAT_200003d4,param_1,param_2);
    return;
  }
  return;
}


////>>0x0800021a>>FUN_0800021a>>////

void FUN_0800021a(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = getPinMode(&DAT_200003d4,param_1,param_3,param_4,param_4);
  if (iVar2 == 3) {
    if (param_1 < 0x3c) {
      if ((&DAT_0800a908)[param_1] == -1) {
        iVar2 = 0;
      }
      else {
        iVar2 = pinNametoDigitalPin();
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
          if (iVar2 == 1) {
            iVar2 = 0;
          }
          else {
            iVar2 = pin_in_pinmap((int)(char)(&DAT_0800a908)[param_1],&DAT_0800a6cc);
          }
        }
      }
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      analogWrite(param_1,param_2);
    }
    setPinState(&DAT_200003d4,param_1,param_2);
  }
  else if (iVar2 == 4) {
    if (param_1 < 0x3c) {
      if ((&DAT_0800a908)[param_1] == -1) {
        bVar1 = false;
      }
      else {
        iVar2 = pinNametoDigitalPin();
        if (iVar2 == 0) {
          bVar1 = false;
        }
        else {
          iVar2 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
          if (iVar2 == 1) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_080026b0(&DAT_2000022c + (uint)(byte)(&DAT_200001f0)[param_1] * 3,param_2);
    }
    setPinState(&DAT_200003d4,param_1,param_2);
    return;
  }
  return;
}


////>>0x08000488>>FUN_08000488>>////

void FUN_08000488(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)param_1 < 0xe) {
    if (param_2 == 0) {
      DAT_20000114 = DAT_20000114 & ~(1 << (param_1 & 0xff));
      return;
    }
    DAT_20000114 = 1 << (param_1 & 0xff) | DAT_20000114;
    if (DAT_20000171 == '\0') {
      uVar1 = analogRead();
      FUN_08002ef2(&DAT_200003d4,param_1,uVar1);
      return;
    }
  }
  return;
}


////>>0x080004d4>>FUN_080004d4>>////

void FUN_080004d4(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    puVar2 = &DAT_2000022c;
    for (iVar1 = 0xb; -1 < iVar1; iVar1 = iVar1 + -1) {
      Servo(puVar2);
      puVar2 = puVar2 + 3;
    }
  }
  return;
}


////>>0x08000500>>FUN_08000500>>////

void FUN_08000500(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if (0xb < DAT_200001ed) {
    FUN_08002f14(&DAT_200003d4,"Max servos attached",param_3,param_4,param_4);
    return;
  }
  if (DAT_2000011c == 0) {
    (&DAT_200001f0)[param_1] = DAT_200001ed;
    DAT_200001ed = DAT_200001ed + 1;
  }
  else {
    (&DAT_200001f0)[param_1] = (&DAT_2000011f)[DAT_2000011c];
    DAT_2000011c = DAT_2000011c - 1;
  }
  if ((0 < param_2) && (0 < param_3)) {
    FUN_080025ac(&DAT_2000022c + (uint)(byte)(&DAT_200001f0)[param_1] * 3,param_1,param_2,param_3);
    return;
  }
  FUN_08002634(&DAT_2000022c + (uint)(byte)(&DAT_200001f0)[param_1] * 3,param_1);
  return;
}


////>>0x08000588>>FUN_08000588>>////

void FUN_08000588(int param_1)

{
  detach(&DAT_2000022c + (uint)(byte)(&DAT_200001f0)[param_1] * 3);
  if (((&DAT_200001f0)[param_1] == DAT_200001ed) && (DAT_200001ed != '\0')) {
    DAT_200001ed = DAT_200001ed + -1;
  }
  else if (DAT_200001ed != '\0') {
    DAT_2000011c = DAT_2000011c + 1;
    (&DAT_2000011f)[DAT_2000011c] = (&DAT_200001f0)[param_1];
  }
  (&DAT_200001f0)[param_1] = 0xff;
  return;
}


////>>0x080005e0>>FUN_080005e0>>////

void FUN_080005e0(void)

{
  DAT_20000170 = 0;
  DAT_20000004 = 0xff;
  return;
}


////>>0x080005f8>>FUN_080005f8>>////

void FUN_080005f8(uint param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = getPinMode(&DAT_200003d4,param_1);
  if (iVar1 != 0x7f) {
    iVar1 = getPinMode(&DAT_200003d4,param_1);
    if (iVar1 == 6) {
      if (DAT_20000170 == '\0') {
        cVar2 = '\0';
      }
      else {
        cVar2 = DAT_20000170;
        if (param_2 == 6) {
          cVar2 = '\0';
        }
      }
    }
    else {
      cVar2 = '\0';
    }
    if (cVar2 != '\0') {
      disableI2CPins();
    }
    if (param_1 < 0x3c) {
      if ((&DAT_0800a908)[param_1] == -1) {
        bVar3 = false;
      }
      else {
        iVar1 = pinNametoDigitalPin();
        if (iVar1 == 0) {
          bVar3 = false;
        }
        else {
          iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
          if (iVar1 == 1) {
            bVar3 = false;
          }
          else if (param_2 == 4) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if ((byte)(&DAT_200001f0)[param_1] < 0xc) {
        iVar1 = attached(&DAT_2000022c + (uint)(byte)(&DAT_200001f0)[param_1] * 3);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        detachServo(param_1);
      }
    }
    uVar4 = param_1 - 0x2e & 0xff;
    if (uVar4 < 0xe) {
      if (param_1 < 0x3c) {
        iVar1 = (int)(char)(&DAT_0800a908)[param_1];
      }
      else {
        iVar1 = -1;
      }
      iVar1 = pinNametoDigitalPin(iVar1);
      if (iVar1 == 0) {
        bVar3 = false;
      }
      else {
        if (param_1 < 0x3c) {
          iVar1 = (int)(char)(&DAT_0800a908)[param_1];
        }
        else {
          iVar1 = -1;
        }
        iVar1 = pinNametoDigitalPin(iVar1);
        if (iVar1 == 1) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      reportAnalogCallback(uVar4,param_2 == 2);
    }
    if (param_1 < 0x3c) {
      if ((&DAT_0800a908)[param_1] == -1) {
        bVar3 = false;
      }
      else {
        iVar1 = pinNametoDigitalPin();
        if (iVar1 == 0) {
          bVar3 = false;
        }
        else {
          iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
          if (iVar1 == 1) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if ((param_2 == 0) || (param_2 == 0xb)) {
        (&DAT_20000174)[param_1 >> 3] = (&DAT_20000174)[param_1 >> 3] | (byte)(1 << (param_1 & 7));
      }
      else {
        (&DAT_20000174)[param_1 >> 3] = (&DAT_20000174)[param_1 >> 3] & ~(byte)(1 << (param_1 & 7));
      }
    }
    setPinState(&DAT_200003d4,param_1,0);
    switch(param_2) {
    case 0:
      if (param_1 < 0x3c) {
        if ((&DAT_0800a908)[param_1] == -1) {
          bVar3 = false;
        }
        else {
          iVar1 = pinNametoDigitalPin();
          if (iVar1 == 0) {
            bVar3 = false;
          }
          else {
            iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
            if (iVar1 == 1) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
        }
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        pinMode(param_1,0);
        setPinMode(&DAT_200003d4,param_1,0);
        return;
      }
      break;
    case 1:
      if (param_1 < 0x3c) {
        if ((&DAT_0800a908)[param_1] == -1) {
          bVar3 = false;
        }
        else {
          iVar1 = pinNametoDigitalPin();
          if (iVar1 == 0) {
            bVar3 = false;
          }
          else {
            iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
            if (iVar1 == 1) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
        }
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        iVar1 = getPinMode(&DAT_200003d4,param_1);
        if (iVar1 == 3) {
          digitalWrite(param_1,0);
        }
        pinMode(param_1,1);
        setPinMode(&DAT_200003d4,param_1,1);
        return;
      }
      break;
    case 2:
      if (uVar4 < 0xe) {
        if (param_1 < 0x3c) {
          iVar1 = (int)(char)(&DAT_0800a908)[param_1];
        }
        else {
          iVar1 = -1;
        }
        iVar1 = pinNametoDigitalPin(iVar1);
        if (iVar1 == 0) {
          bVar3 = false;
        }
        else {
          if (param_1 < 0x3c) {
            iVar1 = (int)(char)(&DAT_0800a908)[param_1];
          }
          else {
            iVar1 = -1;
          }
          iVar1 = pinNametoDigitalPin(iVar1);
          if (iVar1 == 1) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if (param_1 < 0x3c) {
          if ((&DAT_0800a908)[param_1] == -1) {
            bVar3 = false;
          }
          else {
            iVar1 = pinNametoDigitalPin();
            if (iVar1 == 0) {
              bVar3 = false;
            }
            else {
              iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
              if (iVar1 == 1) {
                bVar3 = false;
              }
            }
          }
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          pinMode(param_1,0);
        }
        setPinMode(&DAT_200003d4,param_1,2);
        return;
      }
      break;
    case 3:
      if (param_1 < 0x3c) {
        if ((&DAT_0800a908)[param_1] == -1) {
          iVar1 = 0;
        }
        else {
          iVar1 = pinNametoDigitalPin();
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
            if (iVar1 == 1) {
              iVar1 = 0;
            }
            else {
              iVar1 = pin_in_pinmap((int)(char)(&DAT_0800a908)[param_1],&DAT_0800a6cc);
            }
          }
        }
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        pinMode(param_1,1);
        analogWrite(param_1,0);
        setPinMode(&DAT_200003d4,param_1,3);
        return;
      }
      break;
    case 4:
      if (param_1 < 0x3c) {
        if ((&DAT_0800a908)[param_1] == -1) {
          bVar3 = false;
        }
        else {
          iVar1 = pinNametoDigitalPin();
          if (iVar1 == 0) {
            bVar3 = false;
          }
          else {
            iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
            if (iVar1 == 1) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
        }
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        setPinMode(&DAT_200003d4,param_1,4);
        if (((byte)(&DAT_200001f0)[param_1] != 0xff) &&
           (iVar1 = attached(&DAT_2000022c + (uint)(byte)(&DAT_200001f0)[param_1] * 3), iVar1 != 0))
        {
          bVar3 = false;
        }
        if (bVar3) {
          attachServo(param_1,0xffffffff);
          return;
        }
      }
      break;
    default:
      FUN_08002f14(&DAT_200003d4,"Unknown pin mode");
      break;
    case 6:
      if (param_1 < 0x3c) {
        if ((&DAT_0800a908)[param_1] == -1) {
          iVar1 = 0;
        }
        else {
          iVar1 = pinNametoDigitalPin();
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
            if (iVar1 == 1) {
              iVar1 = 0;
            }
            else {
              iVar1 = pin_in_pinmap((int)(char)(&DAT_0800a908)[param_1],&DAT_0800a69c);
              if (iVar1 == 0) {
                iVar1 = pin_in_pinmap((int)(char)(&DAT_0800a908)[param_1],&DAT_0800a66c);
              }
            }
          }
        }
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        setPinMode(&DAT_200003d4,param_1,6);
        return;
      }
      break;
    case 10:
      break;
    case 0xb:
      if (param_1 < 0x3c) {
        if ((&DAT_0800a908)[param_1] == -1) {
          bVar3 = false;
        }
        else {
          iVar1 = pinNametoDigitalPin();
          if (iVar1 == 0) {
            bVar3 = false;
          }
          else {
            iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[param_1]);
            if (iVar1 == 1) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
        }
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        pinMode(param_1,2);
        setPinMode(&DAT_200003d4,param_1,0xb);
        setPinState(&DAT_200003d4,param_1,1);
        return;
      }
    }
  }
  return;
}


////>>0x08000a64>>FUN_08000a64>>////

void FUN_08000a64(void)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < 0x3c; uVar2 = uVar2 + 1 & 0xff) {
    if (uVar2 < 0x3c) {
      if ((&DAT_0800a908)[uVar2] == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = pinNametoDigitalPin();
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[uVar2]);
          if (iVar1 == 1) {
            iVar1 = 0;
          }
          else {
            iVar1 = pin_in_pinmap((int)(char)(&DAT_0800a908)[uVar2],&DAT_0800a69c);
            if (iVar1 == 0) {
              iVar1 = pin_in_pinmap((int)(char)(&DAT_0800a908)[uVar2],&DAT_0800a66c);
            }
          }
        }
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 != 0) {
      setPinModeCallback(uVar2,6);
    }
  }
  DAT_20000170 = 1;
  FUN_08002a26(&DAT_20000314);
  return;
}


////>>0x08000aec>>FUN_08000aec>>////

void FUN_08000aec(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  DAT_20000171 = 1;
  if (DAT_20000170 != '\0') {
    disableI2CPins();
  }
  for (uVar3 = 0; uVar3 < 5; uVar3 = uVar3 + 1 & 0xff) {
    (&DAT_200001e8)[uVar3] = 0;
    (&DAT_20000174)[uVar3] = 0;
    (&DAT_20000180)[uVar3] = 0;
  }
  for (uVar3 = 0; uVar3 < 0x3c; uVar3 = uVar3 + 1 & 0xff) {
    if ((uVar3 - 0x2e & 0xff) < 0xe) {
      if (uVar3 < 0x3c) {
        iVar2 = (int)(char)(&DAT_0800a908)[uVar3];
      }
      else {
        iVar2 = -1;
      }
      iVar2 = pinNametoDigitalPin(iVar2);
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        if (uVar3 < 0x3c) {
          iVar2 = (int)(char)(&DAT_0800a908)[uVar3];
        }
        else {
          iVar2 = -1;
        }
        iVar2 = pinNametoDigitalPin(iVar2);
        if (iVar2 == 1) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      setPinModeCallback(uVar3,2);
    }
    else {
      if ((((uVar3 < 0x3c) && ((&DAT_0800a908)[uVar3] != -1)) &&
          (iVar2 = pinNametoDigitalPin(), iVar2 != 0)) &&
         (iVar2 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[uVar3]), iVar2 != 1)) {
        bVar1 = true;
      }
      if (bVar1) {
        setPinModeCallback(uVar3,1);
      }
    }
    (&DAT_200001f0)[uVar3] = 0xff;
  }
  DAT_20000114 = 0;
  DAT_2000011c = 0;
  DAT_200001ed = 0;
  DAT_20000171 = 0;
  return;
}


////>>0x08000be8>>FUN_08000be8>>////

void FUN_08000be8(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = &DAT_20000174;
  puVar2 = (undefined1 *)((byte)(&DAT_20000174)[param_1] & param_2);
  if ((param_3 != 0) ||
     (puVar1 = (undefined1 *)(uint)(byte)(&DAT_20000180)[param_1], puVar2 != puVar1)) {
    FUN_08002efe(&DAT_200003d4,param_1,puVar2,puVar1,param_4);
    (&DAT_20000180)[param_1] = (char)puVar2;
  }
  return;
}


////>>0x08000ef8>>FUN_08000ef8>>////

/* WARNING: Removing unreachable block (ram,0x08001ade) */
/* WARNING: Removing unreachable block (ram,0x08001a4a) */
/* WARNING: Removing unreachable block (ram,0x080019b6) */
/* WARNING: Removing unreachable block (ram,0x08001912) */
/* WARNING: Removing unreachable block (ram,0x08001866) */
/* WARNING: Removing unreachable block (ram,0x080017d2) */
/* WARNING: Removing unreachable block (ram,0x0800173e) */
/* WARNING: Removing unreachable block (ram,0x0800169a) */
/* WARNING: Removing unreachable block (ram,0x080015ee) */
/* WARNING: Removing unreachable block (ram,0x0800155a) */
/* WARNING: Removing unreachable block (ram,0x08001490) */
/* WARNING: Removing unreachable block (ram,0x080014a2) */
/* WARNING: Removing unreachable block (ram,0x080014e4) */
/* WARNING: Removing unreachable block (ram,0x080014b0) */
/* WARNING: Removing unreachable block (ram,0x080014ba) */
/* WARNING: Removing unreachable block (ram,0x080014e8) */
/* WARNING: Removing unreachable block (ram,0x080014c2) */
/* WARNING: Removing unreachable block (ram,0x080014b6) */
/* WARNING: Removing unreachable block (ram,0x08001496) */
/* WARNING: Removing unreachable block (ram,0x08001430) */
/* WARNING: Removing unreachable block (ram,0x08001376) */
/* WARNING: Removing unreachable block (ram,0x080012e2) */
/* WARNING: Removing unreachable block (ram,0x0800124e) */
/* WARNING: Removing unreachable block (ram,0x080011b8) */
/* WARNING: Removing unreachable block (ram,0x08001100) */
/* WARNING: Removing unreachable block (ram,0x0800106c) */
/* WARNING: Removing unreachable block (ram,0x08000fd8) */
/* WARNING: Removing unreachable block (ram,0x08000f42) */
/* WARNING: Removing unreachable block (ram,0x08000f8e) */
/* WARNING: Removing unreachable block (ram,0x08001022) */
/* WARNING: Removing unreachable block (ram,0x080010b6) */
/* WARNING: Removing unreachable block (ram,0x0800114a) */
/* WARNING: Removing unreachable block (ram,0x08001204) */
/* WARNING: Removing unreachable block (ram,0x08001298) */
/* WARNING: Removing unreachable block (ram,0x0800132c) */
/* WARNING: Removing unreachable block (ram,0x080013c0) */
/* WARNING: Removing unreachable block (ram,0x0800147c) */
/* WARNING: Removing unreachable block (ram,0x08001510) */
/* WARNING: Removing unreachable block (ram,0x080015a4) */
/* WARNING: Removing unreachable block (ram,0x08001638) */
/* WARNING: Removing unreachable block (ram,0x080016f4) */
/* WARNING: Removing unreachable block (ram,0x08001788) */
/* WARNING: Removing unreachable block (ram,0x0800181c) */
/* WARNING: Removing unreachable block (ram,0x080018b0) */
/* WARNING: Removing unreachable block (ram,0x0800196c) */
/* WARNING: Removing unreachable block (ram,0x08001a00) */
/* WARNING: Removing unreachable block (ram,0x08001a94) */
/* WARNING: Removing unreachable block (ram,0x08001b28) */
/* WARNING: Removing unreachable block (ram,0x080014ca) */

void FUN_08000ef8(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  
  bVar1 = DAT_20000174;
  if (DAT_200001e8 != '\0') {
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar4 = 0;
    }
    else {
      iVar2 = pinNametoDigitalPin(3);
      if (iVar2 == 1) {
        bVar4 = 0;
      }
      else if ((bVar1 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = digitalRead(0);
        if (iVar2 == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
      }
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(2);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 2) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(1);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(10);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 4) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(2);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 4;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x13);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 8) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(3);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x15);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x10) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(4);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x14);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x20) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(5);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x1a);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x40) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(6);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(8);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x80) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(7);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    outputPort(0,bVar4);
  }
  bVar1 = DAT_20000175;
  if (DAT_200001e9 != '\0') {
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar4 = 0;
    }
    else {
      iVar2 = pinNametoDigitalPin(9);
      if (iVar2 == 1) {
        bVar4 = 0;
      }
      else if ((bVar1 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = digitalRead(8);
        if (iVar2 == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
      }
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x27);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 2) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(9);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x16);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 4) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(10);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 4;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(7);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 8) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0xb);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(6);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x10) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0xc);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(5);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x20) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0xd);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x19);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x40) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0xe);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x18);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x80) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0xf);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    outputPort(1,bVar4,0);
  }
  bVar1 = DAT_20000176;
  if (DAT_200001ea != '\0') {
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar4 = 0;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x2a);
      if (iVar2 == 1) {
        bVar4 = 0;
      }
      else if ((bVar1 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = digitalRead(0x10);
        if (iVar2 == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
      }
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x2c);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 2) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x11);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0xd);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 8) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x13);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0xe);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x10) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x14);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0xf);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x20) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x15);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x17);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x40) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x16);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x2d);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x80) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x17);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    outputPort(2,bVar4,0);
  }
  bVar1 = DAT_20000177;
  if (DAT_200001eb != '\0') {
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar4 = 0;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x2e);
      if (iVar2 == 1) {
        bVar4 = 0;
      }
      else if ((bVar1 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = digitalRead(0x18);
        if (iVar2 == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
      }
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x2f);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 2) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x19);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x30);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 4) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x1a);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 4;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x31);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 8) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x1b);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x22);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x10) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x1c);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x23);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x20) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x1d);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x2b);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x40) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x1e);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x32);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x80) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x1f);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    outputPort(3,bVar4,0);
  }
  bVar1 = DAT_20000178;
  if (DAT_200001ec != '\0') {
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar4 = 0;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x29);
      if (iVar2 == 1) {
        bVar4 = 0;
      }
      else if ((bVar1 & 1) == 0) {
        bVar4 = 0;
      }
      else {
        iVar2 = digitalRead(0x20);
        if (iVar2 == 0) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
      }
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x28);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 2) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x21);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 2;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x26);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 4) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x22);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 4;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x25);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 8) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x23);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 8;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0xc);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x10) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x24);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x10;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0xb);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x20) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x25);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x20;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x1c);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x40) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x26);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x40;
    }
    iVar2 = pinNametoDigitalPin();
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar2 = pinNametoDigitalPin(0x1b);
      if (iVar2 == 1) {
        bVar3 = false;
      }
      else if ((bVar1 & 0x80) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = digitalRead(0x27);
        if (iVar2 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (bVar3) {
      bVar4 = bVar4 | 0x80;
    }
    outputPort(4,bVar4,0);
  }
  return;
}


////>>0x08001b48>>FUN_08001b48>>////

void FUN_08001b48(void)

{
  setFirmwareNameAndVersion
            (&DAT_200003d4,"/home/bo/p2im/p2im-real_firmware_scratch/Gateway/StandardFirmata.ino",2,
             5);
  FUN_08002f2c(&DAT_200003d4,0xe0,0x8000215);
  FUN_08002f2c(&DAT_200003d4,0x90,&LAB_080002ec_1);
  FUN_08002f2c(&DAT_200003d4,0xc0,0x8000489);
  FUN_08002f2c(&DAT_200003d4,0xd0,&LAB_08000c18_1);
  FUN_08002f2c(&DAT_200003d4,0xf4,0x80005f9);
  FUN_08002f2c(&DAT_200003d4,0xf5,&LAB_080001a8_1);
  FUN_08002f94(&DAT_200003d4,0xf0,0x8001cd1);
  FUN_08002f84(&DAT_200003d4,0xff,0x8000aed);
  FUN_08003048(&DAT_200003d4,0xe100);
  systemResetCallback();
  startForkserver(0);
  return;
}


////>>0x08001bf8>>FUN_08001bf8>>////

void FUN_08001bf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0800288c(&DAT_20000314,param_1,param_3,param_4,param_4);
  return;
}


////>>0x08001c08>>FUN_08001c08>>////

undefined FUN_08001c08(void)

{
  undefined uVar1;
  
  uVar1 = FUN_08002720(&DAT_20000314);
  return uVar1;
}


////>>0x08001c18>>FUN_08001c18>>////

void FUN_08001c18(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
  }
  else {
    beginTransmission(&DAT_20000314,param_1);
    wireWrite(param_2 & 0xff);
    FUN_08002a58(&DAT_20000314,param_4);
  }
  requestFrom(&DAT_20000314,param_1,param_3);
  iVar2 = FUN_0800270c(&DAT_20000314);
  if (param_3 < iVar2) {
    FUN_08002f14(&DAT_200003d4,"I2C: Too many bytes received");
  }
  else {
    iVar2 = FUN_0800270c(&DAT_20000314);
    if (iVar2 < param_3) {
      FUN_08002f14(&DAT_200003d4,"I2C: Too few bytes received");
    }
  }
  DAT_20000130 = (undefined)param_1;
  DAT_20000131 = (undefined)param_2;
  iVar2 = 0;
  while( true ) {
    if (iVar2 < param_3) {
      iVar3 = FUN_0800270c(&DAT_20000314);
      if (iVar3 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    uVar1 = wireRead();
    (&DAT_20000132)[iVar2] = uVar1;
    iVar2 = iVar2 + 1;
  }
  FUN_08002f0a(&DAT_200003d4,0x77,param_3 + 2U & 0xff,&DAT_20000130);
  return;
}


////>>0x08001cd0>>FUN_08001cd0>>////

void FUN_08001cd0(undefined4 param_1,int param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  switch(param_1) {
  case 0x69:
    FUN_08002f1e(&DAT_200003d4,0xf0);
    FUN_08002f1e(&DAT_200003d4,0x6a);
    for (uVar9 = 0; uVar9 < 0x3c; uVar9 = uVar9 + 1 & 0xff) {
      uVar10 = uVar9 - 0x2e & 0xff;
      if (uVar10 < 0xe) {
        if (uVar9 < 0x3c) {
          iVar7 = (int)(char)(&DAT_0800a908)[uVar9];
        }
        else {
          iVar7 = -1;
        }
        iVar7 = pinNametoDigitalPin(iVar7);
        if (iVar7 == 0) {
          uVar10 = 0x7f;
        }
        else {
          if (uVar9 < 0x3c) {
            iVar7 = (int)(char)(&DAT_0800a908)[uVar9];
          }
          else {
            iVar7 = -1;
          }
          iVar7 = pinNametoDigitalPin(iVar7);
          if (iVar7 == 1) {
            uVar10 = 0x7f;
          }
        }
      }
      else {
        uVar10 = 0x7f;
      }
      FUN_08002f1e(&DAT_200003d4,uVar10);
    }
    FUN_08002f1e(&DAT_200003d4,0xf7);
    break;
  case 0x6b:
    FUN_08002f1e(&DAT_200003d4,0xf0);
    FUN_08002f1e(&DAT_200003d4,0x6c);
    for (uVar9 = 0; uVar9 < 0x3c; uVar9 = uVar9 + 1 & 0xff) {
      if (uVar9 < 0x3c) {
        if ((&DAT_0800a908)[uVar9] == -1) {
          bVar12 = false;
        }
        else {
          iVar7 = pinNametoDigitalPin();
          if (iVar7 == 0) {
            bVar12 = false;
          }
          else {
            iVar7 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[uVar9]);
            if (iVar7 == 1) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
          }
        }
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        FUN_08002f1e(&DAT_200003d4,0);
        FUN_08002f1e(&DAT_200003d4,1);
        FUN_08002f1e(&DAT_200003d4,0xb);
        FUN_08002f1e(&DAT_200003d4,1);
        FUN_08002f1e(&DAT_200003d4,1);
        FUN_08002f1e(&DAT_200003d4,1);
      }
      if ((uVar9 - 0x2e & 0xff) < 0xe) {
        if (uVar9 < 0x3c) {
          iVar7 = (int)(char)(&DAT_0800a908)[uVar9];
        }
        else {
          iVar7 = -1;
        }
        iVar7 = pinNametoDigitalPin(iVar7);
        if (iVar7 == 0) {
          bVar12 = false;
        }
        else {
          if (uVar9 < 0x3c) {
            iVar7 = (int)(char)(&DAT_0800a908)[uVar9];
          }
          else {
            iVar7 = -1;
          }
          iVar7 = pinNametoDigitalPin(iVar7);
          if (iVar7 == 1) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
        }
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        FUN_08002f1e(&DAT_200003d4,2);
        FUN_08002f1e(&DAT_200003d4,10);
      }
      if (uVar9 < 0x3c) {
        if ((&DAT_0800a908)[uVar9] == -1) {
          iVar7 = 0;
        }
        else {
          iVar7 = pinNametoDigitalPin();
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[uVar9]);
            if (iVar7 == 1) {
              iVar7 = 0;
            }
            else {
              iVar7 = pin_in_pinmap((int)(char)(&DAT_0800a908)[uVar9],&DAT_0800a6cc);
            }
          }
        }
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        FUN_08002f1e(&DAT_200003d4,3);
        FUN_08002f1e(&DAT_200003d4,8);
      }
      if (uVar9 < 0x3c) {
        if ((&DAT_0800a908)[uVar9] == -1) {
          bVar12 = false;
        }
        else {
          iVar7 = pinNametoDigitalPin();
          if (iVar7 == 0) {
            bVar12 = false;
          }
          else {
            iVar7 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[uVar9]);
            if (iVar7 == 1) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
          }
        }
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        FUN_08002f1e(&DAT_200003d4,4);
        FUN_08002f1e(&DAT_200003d4,0xe);
      }
      if (uVar9 < 0x3c) {
        if ((&DAT_0800a908)[uVar9] == -1) {
          iVar7 = 0;
        }
        else {
          iVar7 = pinNametoDigitalPin();
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[uVar9]);
            if (iVar7 == 1) {
              iVar7 = 0;
            }
            else {
              iVar7 = pin_in_pinmap((int)(char)(&DAT_0800a908)[uVar9],&DAT_0800a69c);
              if (iVar7 == 0) {
                iVar7 = pin_in_pinmap((int)(char)(&DAT_0800a908)[uVar9],&DAT_0800a66c);
              }
            }
          }
        }
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        FUN_08002f1e(&DAT_200003d4,6);
        FUN_08002f1e(&DAT_200003d4,1);
      }
      FUN_08002f1e(&DAT_200003d4,0x7f);
    }
    FUN_08002f1e(&DAT_200003d4,0xf7);
    return;
  case 0x6d:
    if (param_2 != 0) {
      bVar1 = *param_3;
      FUN_08002f1e(&DAT_200003d4,0xf0);
      FUN_08002f1e(&DAT_200003d4,0x6e);
      FUN_08002f1e(&DAT_200003d4,bVar1);
      if (bVar1 < 0x3c) {
        uVar4 = getPinMode(&DAT_200003d4,bVar1);
        FUN_08002f1e(&DAT_200003d4,uVar4);
        uVar9 = getPinState(&DAT_200003d4,bVar1);
        FUN_08002f1e(&DAT_200003d4,uVar9 & 0x7f);
        uVar9 = getPinState(&DAT_200003d4,bVar1);
        if ((uVar9 & 0xff80) != 0) {
          iVar7 = getPinState(&DAT_200003d4,bVar1);
          FUN_08002f1e(&DAT_200003d4,(uint)(iVar7 << 0x12) >> 0x19);
        }
        uVar9 = getPinState(&DAT_200003d4,bVar1);
        if ((uVar9 & 0xc000) != 0) {
          iVar7 = getPinState(&DAT_200003d4,bVar1);
          FUN_08002f1e(&DAT_200003d4,(uint)(iVar7 << 0xb) >> 0x19);
        }
      }
      FUN_08002f1e(&DAT_200003d4,0xf7);
      return;
    }
    break;
  case 0x6f:
    if (1 < param_2) {
      uVar9 = (uint)param_3[1];
      if (2 < param_2) {
        uVar9 = uVar9 | (uint)param_3[2] << 7;
      }
      if (3 < param_2) {
        uVar9 = uVar9 | (uint)param_3[3] << 0xe;
      }
      analogWriteCallback(*param_3,uVar9);
      return;
    }
    break;
  case 0x70:
    if (4 < param_2) {
      uVar9 = (uint)*param_3;
      bVar1 = param_3[1];
      bVar5 = param_3[2];
      bVar2 = param_3[3];
      bVar3 = param_3[4];
      if (uVar9 < 0x3c) {
        if ((&DAT_0800a908)[uVar9] == -1) {
          bVar12 = false;
        }
        else {
          iVar7 = pinNametoDigitalPin();
          if (iVar7 == 0) {
            bVar12 = false;
          }
          else {
            iVar7 = pinNametoDigitalPin((int)(char)(&DAT_0800a908)[uVar9]);
            if (iVar7 == 1) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
          }
        }
      }
      else {
        bVar12 = false;
      }
      if (bVar12) {
        if ((byte)(&DAT_200001f0)[uVar9] < 0xc) {
          iVar7 = attached(&DAT_2000022c + (uint)(byte)(&DAT_200001f0)[uVar9] * 3);
        }
        else {
          iVar7 = 0;
        }
        if (iVar7 != 0) {
          detachServo(uVar9);
        }
        attachServo(uVar9,(uint)bVar1 + (uint)bVar5 * 0x80,(uint)bVar2 + (uint)bVar3 * 0x80);
        setPinModeCallback(uVar9,4);
        return;
      }
    }
    break;
  case 0x76:
    bVar1 = param_3[1];
    bVar5 = bVar1 & 0x18;
    if ((bVar1 & 0x20) != 0) {
      FUN_08002f14(&DAT_200003d4,"10-bit addressing not supported",bVar5,bVar1,param_4);
      return;
    }
    bVar2 = *param_3;
    bVar12 = (bVar1 & 0x40) == 0;
    if (bVar5 < 0x19) {
      switch(bVar5) {
      case 0:
        beginTransmission(&DAT_20000314,bVar2);
        for (uVar9 = 2; (int)uVar9 < param_2; uVar9 = uVar9 + 2 & 0xff) {
          wireWrite(param_3[uVar9 + 1] * -0x80 + param_3[uVar9]);
        }
        endTransmission(&DAT_20000314);
        return;
      case 8:
        if (param_2 == 6) {
          iVar7 = (uint)param_3[2] + (uint)param_3[3] * 0x80;
          cVar6 = param_3[4] + param_3[5] * -0x80;
        }
        else {
          cVar6 = param_3[2] + param_3[3] * -0x80;
          iVar7 = -1;
        }
        readAndReportData(bVar2,iVar7,cVar6);
        return;
      case 0x10:
        if (DAT_20000004 + 1 < 8) {
          if (param_2 == 6) {
            iVar7 = (uint)param_3[2] + (uint)param_3[3] * 0x80;
            cVar6 = param_3[4] + param_3[5] * -0x80;
          }
          else {
            cVar6 = param_3[2] + param_3[3] * -0x80;
            iVar7 = -1;
          }
          DAT_20000004 = DAT_20000004 + '\x01';
          iVar8 = (int)DAT_20000004;
          iVar11 = iVar8 * 0xc;
          (&DAT_20000188)[iVar11] = bVar2;
          (&DAT_2000018c)[iVar8 * 3] = iVar7;
          (&DAT_20000190)[iVar11] = cVar6;
          (&DAT_20000191)[iVar11] = bVar12;
          return;
        }
        FUN_08002f14(&DAT_200003d4,"too many queries",(int)DAT_20000004,bVar12,param_4);
        return;
      case 0x18:
        if (DAT_20000004 < 1) {
          DAT_20000004 = 0xff;
          return;
        }
      }
      for (uVar9 = 0; iVar7 = DAT_20000004 + 1, (int)uVar9 < iVar7; uVar9 = uVar9 + 1 & 0xff) {
        if (bVar2 == (&DAT_20000188)[uVar9 * 0xc]) goto LAB_08001e66;
      }
      uVar9 = 0;
LAB_08001e66:
      for (; (int)uVar9 < iVar7; uVar9 = uVar9 + 1 & 0xff) {
        if (uVar9 < 8) {
          iVar8 = (uVar9 + 1) * 0xc;
          iVar11 = uVar9 * 0xc;
          (&DAT_20000188)[iVar11] = (&DAT_20000188)[iVar8];
          (&DAT_2000018c)[uVar9 * 3] = (&DAT_2000018c)[(uVar9 + 1) * 3];
          (&DAT_20000190)[iVar11] = (&DAT_20000190)[iVar8];
          (&DAT_20000191)[iVar11] = (&DAT_20000191)[iVar8];
        }
      }
      DAT_20000004 = DAT_20000004 + -1;
      return;
    }
    break;
  case 0x78:
    iVar7 = (uint)*param_3 + (uint)param_3[1] * 0x80;
    if ((1 < param_2) && (iVar7 != 0)) {
      DAT_2000012c = iVar7;
    }
    if (DAT_20000170 == '\0') {
      enableI2CPins();
      return;
    }
    break;
  case 0x7a:
    if ((1 < param_2) &&
       (DAT_20000008 = (uint)*param_3 + (uint)param_3[1] * 0x80, DAT_20000008 == 0)) {
      DAT_20000008 = 1;
      return;
    }
  }
  return;
}


////>>0x080022f8>>FUN_080022f8>>////

void FUN_080022f8(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  checkDigitalInputs();
  while (iVar2 = FUN_08002ec4(&DAT_200003d4), iVar2 != 0) {
    processInput(&DAT_200003d4);
  }
  DAT_20000118 = millis();
  if (DAT_20000008 < (uint)(DAT_20000118 - DAT_2000017c)) {
    DAT_2000017c = DAT_2000017c + DAT_20000008;
    for (uVar4 = 0; uVar4 < 0x3c; uVar4 = uVar4 + 1 & 0xff) {
      uVar5 = uVar4 - 0x2e & 0xff;
      if (uVar5 < 0xe) {
        if (uVar4 < 0x3c) {
          iVar2 = (int)(char)(&DAT_0800a908)[uVar4];
        }
        else {
          iVar2 = -1;
        }
        iVar2 = pinNametoDigitalPin(iVar2);
        if (iVar2 == 0) {
          bVar1 = false;
        }
        else {
          if (uVar4 < 0x3c) {
            iVar2 = (int)(char)(&DAT_0800a908)[uVar4];
          }
          else {
            iVar2 = -1;
          }
          iVar2 = pinNametoDigitalPin(iVar2);
          if (iVar2 == 1) {
            bVar1 = false;
          }
          else {
            iVar2 = getPinMode(&DAT_200003d4,uVar4);
            if (iVar2 == 2) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
        }
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && ((DAT_20000114 >> uVar5 & 1U) != 0)) {
        uVar3 = analogRead(uVar5);
        FUN_08002ef2(&DAT_200003d4,uVar5,uVar3);
      }
    }
    if (-1 < DAT_20000004) {
      for (uVar4 = 0; (int)uVar4 < DAT_20000004 + 1; uVar4 = uVar4 + 1 & 0xff) {
        iVar2 = uVar4 * 0xc;
        readAndReportData((&DAT_20000188)[iVar2],(&DAT_2000018c)[uVar4 * 3],(&DAT_20000190)[iVar2],
                          (&DAT_20000191)[iVar2]);
      }
    }
  }
  return;
}


////>>0x08002400>>FUN_08002400>>////

undefined4 FUN_08002400(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (0xb < uVar1) {
      return 0;
    }
    if (((&DAT_20000258)[(param_1 * 0xc + uVar1) * 8] & 0x40) != 0) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return 1;
}


////>>0x0800242c>>FUN_0800242c>>////

void FUN_0800242c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  TimerPulseInit(param_1,60000,0x5dc,&LAB_08002444_1,param_4);
  return;
}


////>>0x08002578>>FUN_08002578>>////

void FUN_08002578(void)

{
  TimerPulseDeinit();
  return;
}


////>>0x08002580>>FUN_08002580>>////

void FUN_08002580(byte *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_20000250;
  if (0xb < uVar2) {
    *param_1 = 0xff;
    return;
  }
  cVar1 = DAT_20000250 + 1;
  *param_1 = DAT_20000250;
  DAT_20000250 = cVar1;
  *(undefined4 *)(&DAT_2000025c + uVar2 * 8) = 0x5dc;
  return;
}


////>>0x080025ac>>FUN_080025ac>>////

byte FUN_080025ac(byte *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 < 0xc) {
    pinMode(param_2,1,param_3,*param_1,param_4);
    uVar2 = (uint)*param_1;
    uVar1 = (byte)(&DAT_20000258)[uVar2 * 8] & 0xffffffc0 | param_2 & 0x3f;
    (&DAT_20000258)[uVar2 * 8] = (char)uVar1;
    iVar4 = -param_3 + 0x220;
    if (iVar4 < 0) {
      iVar4 = -param_3 + 0x223;
    }
    param_1[1] = (byte)((uint)(iVar4 << 0x16) >> 0x18);
    iVar4 = -param_4 + 0x960;
    if (iVar4 < 0) {
      iVar4 = -param_4 + 0x963;
    }
    param_1[2] = (byte)((uint)(iVar4 << 0x16) >> 0x18);
    uVar3 = *param_1 / 0xc;
    iVar4 = isTimerActive(uVar3,uVar1,uVar2,(uint)*param_1 * -0x55555555);
    if (iVar4 == 0) {
      DAT_200002fc = (undefined)uVar3;
      initISR();
    }
    (&DAT_20000258)[(uint)*param_1 * 8] = (&DAT_20000258)[(uint)*param_1 * 8] | 0x40;
  }
  return *param_1;
}


////>>0x08002634>>FUN_08002634>>////

void FUN_08002634(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_080025ac(param_1,param_2,0x220,0x960,param_4);
  return;
}


////>>0x08002644>>FUN_08002644>>////

void FUN_08002644(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*param_1;
  bVar1 = (&DAT_20000258)[uVar2 * 8];
  (&DAT_20000258)[uVar2 * 8] = bVar1 & 0xbf;
  iVar3 = isTimerActive(uVar2 / 0xc,param_2,bVar1 & 0xbf,uVar2 * -0x55555555,param_4);
  if (iVar3 == 0) {
    finISR(&DAT_200002b8);
  }
  return;
}


////>>0x0800267c>>FUN_0800267c>>////

void FUN_0800267c(byte *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 < 0xc) {
    iVar1 = (0x88 - (char)param_1[1]) * 4;
    if ((iVar1 - param_2 == 0 || iVar1 < param_2) &&
       (iVar1 = (600 - (char)param_1[2]) * 4,
       param_2 == iVar1 || param_2 + (600 - (char)param_1[2]) * -4 < 0 != SBORROW4(param_2,iVar1)))
    {
      iVar1 = param_2;
    }
    *(int *)(&DAT_2000025c + (uint)*param_1 * 8) = iVar1;
  }
  return;
}


////>>0x080026b0>>FUN_080026b0>>////

void FUN_080026b0(int param_1,int param_2)

{
  if (param_2 < 0x220) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (0xb4 < param_2) {
      param_2 = 0xb4;
    }
    param_2 = map(param_2,0,0xb4,(0x88 - *(char *)(param_1 + 1)) * 4,
                  (600 - *(char *)(param_1 + 2)) * 4);
  }
  writeMicroseconds(param_1,param_2);
  return;
}


////>>0x080026f8>>FUN_080026f8>>////

uint FUN_080026f8(byte *param_1)

{
  return ((uint)(byte)(&DAT_20000258)[(uint)*param_1 * 8] << 0x19) >> 0x1f;
}


////>>0x0800270c>>FUN_0800270c>>////

int FUN_0800270c(void)

{
  return (uint)DAT_200003b7 - (uint)DAT_200003b5;
}


////>>0x08002720>>FUN_08002720>>////

uint FUN_08002720(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_200003b5;
  if (uVar1 < DAT_200003b7) {
    DAT_200003b5 = DAT_200003b5 + 1;
    return (uint)*(byte *)(DAT_200003c8 + uVar1);
  }
  return 0xffffffff;
}


////>>0x080027f0>>FUN_080027f0>>////

uint FUN_080027f0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_200003b4 == '\0') {
    iVar1 = i2c_slave_write_IT(param_1 + 0x14,param_2,param_3 & 0xffff);
    if (iVar1 == 0) {
      return param_3;
    }
    return 0;
  }
  uVar2 = DAT_200003b8 + param_3;
  if (DAT_200003c5 < uVar2) {
    if (uVar2 < 0x20) {
      uVar2 = 0x20;
    }
    DAT_200003cc = realloc(DAT_200003cc,uVar2);
    if (DAT_200003cc == 0) {
      DAT_200003c5 = 0;
    }
    else {
      DAT_200003c5 = (byte)uVar2;
    }
  }
  if (DAT_200003cc == 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    return 0;
  }
  memcpy((uint)DAT_200003b6 + DAT_200003cc,param_2,param_3);
  DAT_200003b6 = DAT_200003b6 + (char)param_3;
  DAT_200003b8 = DAT_200003b6;
  return param_3;
}


////>>0x0800288c>>FUN_0800288c>>////

undefined4 FUN_0800288c(int param_1,undefined param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined local_11;
  
  local_11 = param_2;
  if (DAT_200003b4 == '\0') {
    iVar2 = i2c_slave_write_IT(param_1 + 0x14,&local_11,1);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar3 = DAT_200003b8 + 1;
    if (DAT_200003c5 < uVar3) {
      if (uVar3 < 0x20) {
        uVar3 = 0x20;
      }
      DAT_200003cc = realloc(DAT_200003cc,uVar3);
      if (DAT_200003cc == 0) {
        DAT_200003c5 = 0;
      }
      else {
        DAT_200003c5 = (byte)uVar3;
      }
    }
    if (DAT_200003cc == 0) {
      *(undefined4 *)(param_1 + 4) = 1;
      uVar1 = 0;
    }
    else {
      *(undefined *)(DAT_200003cc + (uint)DAT_200003b6) = local_11;
      DAT_200003b6 = DAT_200003b6 + 1;
      uVar1 = 1;
      DAT_200003b8 = DAT_200003b6;
    }
  }
  return uVar1;
}


////>>0x0800291c>>FUN_0800291c>>////

void FUN_0800291c(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 1000;
  *param_1 = &PTR_FUN_0800288c_1_0800a5a0;
  *(undefined *)(param_1 + 0x1b) = 0x19;
  *(undefined *)((int)param_1 + 0x6d) = 0x18;
  return;
}


////>>0x08002948>>FUN_08002948>>////

void FUN_08002948(int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    TwoWire(&DAT_20000314);
  }
  return;
}


////>>0x08002968>>FUN_08002968>>////

void FUN_08002968(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  DAT_200003b5 = 0;
  DAT_200003b7 = 0;
  if (DAT_200003c8 != 0) {
    memset(DAT_200003c8,0,DAT_200003c4);
  }
  DAT_200003b6 = 0;
  DAT_200003b8 = 0;
  if (DAT_200003cc != 0) {
    memset(DAT_200003cc,0,DAT_200003c5);
  }
  DAT_200003b4 = 0;
  iVar1 = (param_2 & 0x7f) << 1;
  *(char *)(param_1 + 0x10) = (char)iVar1;
  if (param_2 == 0x33) {
    *(undefined *)(param_1 + 0x11) = 1;
  }
  else {
    *(undefined *)(param_1 + 0x11) = 0;
  }
  iVar2 = param_1 + 0x14;
  i2c_custom_init(iVar2,100000,0x4000,iVar1,*(undefined *)(param_1 + 0x11));
  if (*(char *)(param_1 + 0x11) == '\0') {
    i2c_attachSlaveTxEvent(iVar2,&LAB_08002774_1);
    i2c_attachSlaveRxEvent(iVar2,&LAB_08002b00_1);
  }
  return;
}


////>>0x08002a1c>>FUN_08002a1c>>////

void FUN_08002a1c(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08002968(param_1,param_2,param_3,param_4,param_4);
  return;
}


////>>0x08002a26>>FUN_08002a26>>////

void FUN_08002a26(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08002a1c(param_1,0x33,param_3,param_4,param_4);
  return;
}


////>>0x08002a30>>FUN_08002a30>>////

void FUN_08002a30(undefined4 param_1,int param_2)

{
  DAT_200003b4 = 1;
  DAT_200003d0 = (char)(param_2 << 1);
  DAT_200003b6 = 0;
  DAT_200003b8 = 0;
  return;
}


////>>0x08002a58>>FUN_08002a58>>////

undefined4 FUN_08002a58(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar2 = 4;
  }
  else {
    iVar1 = i2c_master_write(param_1 + 0x14,DAT_200003d0,DAT_200003cc,DAT_200003b8);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      uVar2 = 4;
    }
    if (DAT_200003cc != 0) {
      memset(DAT_200003cc,0,DAT_200003c5);
    }
    DAT_200003b6 = 0;
    DAT_200003b8 = 0;
    DAT_200003b4 = 0;
  }
  return uVar2;
}


////>>0x08002ac0>>FUN_08002ac0>>////

void FUN_08002ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08002a58(param_1,1,param_3,param_4,param_4);
  return;
}


////>>0x08002acc>>FUN_08002acc>>////

void FUN_08002acc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_200003c4 < param_1) {
    if (param_1 < 0x20) {
      param_1 = 0x20;
    }
    DAT_200003c8 = realloc(DAT_200003c8,param_1,param_3,(uint)DAT_200003c4,param_4);
    if (DAT_200003c8 == 0) {
      DAT_200003c4 = 0;
    }
    else {
      DAT_200003c4 = (byte)param_1;
    }
  }
  return;
}


////>>0x08002b68>>FUN_08002b68>>////

undefined4
FUN_08002b68(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_5;
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    return 0;
  }
  uVar3 = param_4;
  allocateRxBuffer(param_3);
  if (DAT_200003c8 != 0) {
    if (uVar2 != 0) {
      beginTransmission(param_1,param_2);
      if (3 < uVar2) {
        uVar2 = 3;
      }
      while( true ) {
        if (uVar2 == 0) break;
        (**(code **)*param_1)(param_1,param_4 >> ((uVar2 - 1 & 0x1f) << 3) & 0xff);
        uVar2 = uVar2 - 1 & 0xff;
      }
      FUN_08002a58(param_1,0);
    }
    iVar1 = i2c_master_read(param_1 + 5,(param_2 & 0x7f) << 1,DAT_200003c8,param_3,uVar3);
    if (iVar1 != 0) {
      param_3 = 0;
    }
    DAT_200003b5 = 0;
    DAT_200003b7 = (char)param_3;
    return param_3;
  }
  param_1[1] = 1;
  return 0;
}


////>>0x08002c00>>FUN_08002c00>>////

void FUN_08002c00(void)

{
  FUN_08002b68();
  return;
}


////>>0x08002c14>>FUN_08002c14>>////

void FUN_08002c14(void)

{
  FUN_08002c00();
  return;
}


////>>0x08002c1e>>FUN_08002c1e>>////

void FUN_08002c1e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_08002948(1,0xffff,param_3,param_4,param_4);
  return;
}


////>>0x08002c2c>>FUN_08002c2c>>////

void FUN_08002c2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_200005d4 != (code *)0x0) {
    (*DAT_200005d4)(param_2,param_3,param_3,DAT_200005d4,param_4);
  }
  return;
}


////>>0x08002ce0>>FUN_08002ce0>>////

int FUN_08002ce0(int param_1)

{
  int iVar1;
  
  FirmataMarshaller(param_1 + 0x40);
  iVar1 = param_1 + 0x44;
  FirmataParser(iVar1,param_1,0x40);
  *(undefined *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined *)(param_1 + 0x1f8) = 0;
  FUN_08003306(iVar1,0xe0,staticAnalogCallback + 1,0);
  FUN_08003306(iVar1,0x90,&LAB_08002c40_1,0);
  FUN_08003306(iVar1,0xc0,&LAB_08002c7c_1,0);
  FUN_08003306(iVar1,0xd0,&LAB_08002c90_1,0);
  FUN_08003306(iVar1,0xf4,&LAB_08002c54_1,0);
  FUN_08003306(iVar1,0xf5,&LAB_08002c68_1,0);
  FUN_08003366(iVar1,0x71,&LAB_08002ca4_1,0);
  attach(iVar1,0xf0,&LAB_08002cb8_1,0);
  FUN_08003346(iVar1,0x79,&LAB_08002e1a_1,param_1);
  FUN_08003350(iVar1,0xf9,&LAB_08002dea_1,param_1);
  FUN_08003350(iVar1,0xff,&LAB_08002cd0_1,0);
  return param_1;
}


////>>0x08002dbc>>FUN_08002dbc>>////

void FUN_08002dbc(int param_1,int param_2)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    FirmataClass(&DAT_200003d4);
  }
  return;
}


////>>0x08002ddc>>FUN_08002ddc>>////

void FUN_08002ddc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  sendVersion(param_1 + 0x40,2,5,param_4,param_4);
  return;
}


////>>0x08002df6>>FUN_08002df6>>////

void FUN_08002df6(int param_1)

{
  undefined *puVar1;
  
  if (*(byte *)(param_1 + 0xc4) == 0) {
    return;
  }
  puVar1 = *(undefined **)(param_1 + 200);
  sendFirmwareVersion(param_1 + 0x40,*puVar1,puVar1[1],*(byte *)(param_1 + 0xc4) - 2,puVar1 + 2);
  return;
}


////>>0x08002e26>>FUN_08002e26>>////

void FUN_08002e26(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_08003154(param_1 + 0x40);
  printVersion(param_1);
  printFirmwareVersion(param_1);
  return;
}


////>>0x08002e44>>FUN_08002e44>>////

void FUN_08002e44(int param_1,int param_2,undefined param_3,undefined param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar3 = strstr(param_2,".cpp");
  iVar4 = strrchr(param_2,0x2f);
  if (iVar4 == 0) {
    iVar4 = strrchr(param_2,0x5c);
  }
  if (iVar4 != 0) {
    param_2 = iVar4 + 1;
  }
  if (iVar3 == 0) {
    cVar2 = strlen(param_2);
    *(char *)(param_1 + 0xc4) = cVar2 + '\x02';
  }
  else {
    *(char *)(param_1 + 0xc4) = ((char)iVar3 - (char)param_2) + '\x02';
  }
  free(*(undefined4 *)(param_1 + 200));
  bVar1 = *(byte *)(param_1 + 0xc4);
  puVar5 = (undefined *)malloc(bVar1 + 1);
  *(undefined **)(param_1 + 200) = puVar5;
  puVar5[bVar1] = 0;
  *puVar5 = param_3;
  puVar5[1] = param_4;
  strncpy(puVar5 + 2,param_2,*(byte *)(param_1 + 0xc4) - 2);
  return;
}


////>>0x08002ec4>>FUN_08002ec4>>////

void FUN_08002ec4(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc0) + 8))();
  return;
}


////>>0x08002ed2>>FUN_08002ed2>>////

void FUN_08002ed2(int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc0) + 0xc))();
  if (uVar1 != 0xffffffff) {
    parse(param_1 + 0x44,uVar1 & 0xff);
  }
  return;
}


////>>0x08002ef2>>FUN_08002ef2>>////

void FUN_08002ef2(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  sendAnalog(param_1 + 0x40,param_2,param_3,param_4,param_4);
  return;
}


////>>0x08002efe>>FUN_08002efe>>////

void FUN_08002efe(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  sendDigitalPort(param_1 + 0x40,param_2,param_3,param_4,param_4);
  return;
}


////>>0x08002f0a>>FUN_08002f0a>>////

void FUN_08002f0a(int param_1)

{
  sendSysex(param_1 + 0x40);
  return;
}


////>>0x08002f14>>FUN_08002f14>>////

void FUN_08002f14(int param_1)

{
  sendString(param_1 + 0x40);
  return;
}


////>>0x08002f1e>>FUN_08002f1e>>////

void FUN_08002f1e(int param_1)

{
  (**(code **)**(undefined4 **)(param_1 + 0xc0))();
  return;
}


////>>0x08002f2c>>FUN_08002f2c>>////

void FUN_08002f2c(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0xd0) {
    DAT_200005f0 = param_3;
    return;
  }
  if (0xd0 < param_2) {
    if (param_2 == 0xf4) {
      DAT_200005e0 = param_3;
      return;
    }
    uVar1 = param_3;
    if ((param_2 != 0xf5) && (uVar1 = DAT_200005e4, param_2 == 0xe0)) {
      DAT_200005d4 = param_3;
      return;
    }
    DAT_200005e4 = uVar1;
    return;
  }
  if (param_2 == 0x90) {
    DAT_200005dc = param_3;
    return;
  }
  if (param_2 != 0xc0) {
    return;
  }
  DAT_200005ec = param_3;
  return;
}


////>>0x08002f84>>FUN_08002f84>>////

void FUN_08002f84(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0xff) {
    DAT_200005e8 = param_3;
  }
  return;
}


////>>0x08002f94>>FUN_08002f94>>////

void FUN_08002f94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_200005d0 = param_3;
  return;
}


////>>0x08002fa0>>FUN_08002fa0>>////

undefined FUN_08002fa0(int param_1,int param_2)

{
  return *(undefined *)(param_2 + param_1 + 0xcc);
}


////>>0x08002fa8>>FUN_08002fa8>>////

void FUN_08002fa8(int param_1,int param_2,undefined param_3)

{
  if (*(char *)(param_1 + param_2 + 0xcc) != '\x7f') {
    *(undefined *)(param_1 + param_2 + 0xcc) = param_3;
  }
  return;
}


////>>0x08002fba>>FUN_08002fba>>////

undefined4 FUN_08002fba(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + (param_2 + 0x42) * 4);
}


////>>0x08002fc2>>FUN_08002fc2>>////

void FUN_08002fc2(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + (param_2 + 0x42) * 4) = param_3;
  return;
}


////>>0x08002fca>>FUN_08002fca>>////

void FUN_08002fca(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < param_3; uVar1 = uVar1 + 1 & 0xff) {
    delay(param_5);
    digitalWrite(param_2,1);
    delay(param_4);
    digitalWrite(param_2,0);
  }
  return;
}


////>>0x08003002>>FUN_08003002>>////

void FUN_08003002(int param_1)

{
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    return;
  }
  pinMode(0xd,1);
  strobeBlinkPin(param_1,0xd,2,0x28,0xd2);
  delay(0xfa);
  strobeBlinkPin(param_1,0xd,5,0x28,0xd2);
  delay(0x7d);
  return;
}


////>>0x08003048>>FUN_08003048>>////

void FUN_08003048(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  begin(&DAT_20000700,param_2,6,param_4,param_4);
  blinkVersion(param_1);
  FUN_08002e26(param_1,&DAT_20000700);
  return;
}


////>>0x0800307a>>FUN_0800307a>>////

void FUN_0800307a(undefined4 *param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)*param_3;
  if (param_4 == 0) {
    param_4 = 0xffffffff;
  }
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 0;
  while ((uVar4 < param_2 && (uVar3 < param_4))) {
    (***(code ***)(undefined4 *)*param_1)
              ((undefined4 *)*param_1,((uint)param_3[uVar4] << (uVar2 & 0xff) | uVar1) & 0x7f);
    uVar1 = (int)(uint)param_3[uVar4] >> (7 - uVar2 & 0xff) & 0xff;
    uVar2 = uVar2 + 1;
    while ((uVar3 = uVar3 + 1, 6 < uVar2 && (uVar3 < param_4))) {
      (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,uVar1 & 0x7f);
      uVar1 = uVar1 >> 7;
      uVar2 = uVar2 - 7;
    }
    uVar4 = uVar4 + 1;
  }
  if ((uVar2 != 0) && (uVar3 < param_4)) {
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,(1 << (uVar2 & 0xff)) - 1U & uVar1)
    ;
  }
  return;
}


////>>0x08003106>>FUN_08003106>>////

void FUN_08003106(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xf0);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0x6f);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_2);
    encodeByteStream(param_1,param_3,param_4,param_3);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0xf7);
  }
  return;
}


////>>0x0800314e>>FUN_0800314e>>////

void FUN_0800314e(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


////>>0x08003154>>FUN_08003154>>////

void FUN_08003154(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


////>>0x08003158>>FUN_08003158>>////

void FUN_08003158(undefined4 *param_1,uint param_2,ushort param_3)

{
  undefined4 *puVar1;
  ushort local_a;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    local_a = param_3;
    if (((int)param_2 < 0x10) && (param_3 < 0x4000)) {
      (**(code **)*puVar1)(puVar1,param_2 | 0xe0);
      encodeByteStream(param_1,2,&local_a);
    }
    else {
      sendExtendedAnalog(param_1,param_2,2,&local_a);
    }
  }
  return;
}


////>>0x0800319e>>FUN_0800319e>>////

void FUN_0800319e(undefined4 *param_1,uint param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  undefined2 local_a;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    local_a = param_3;
    (**(code **)*puVar1)(puVar1,param_2 & 0xf | 0x90);
    encodeByteStream(param_1,2,&local_a);
  }
  return;
}


////>>0x080031ce>>FUN_080031ce>>////

void FUN_080031ce(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5
                 )

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xf0,param_3,*(code **)*puVar1,param_4);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0x79);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_2);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_3);
    for (uVar2 = 0; uVar2 < param_4; uVar2 = uVar2 + 1) {
      encodeByteStream(param_1,1,param_5 + uVar2,0);
    }
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0xf7);
  }
  return;
}


////>>0x0800322c>>FUN_0800322c>>////

void FUN_0800322c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xf9);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_2);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_3);
    return;
  }
  return;
}


////>>0x0800325a>>FUN_0800325a>>////

void FUN_0800325a(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xf0);
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,param_2);
    for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
      encodeByteStream(param_1,1,param_4 + uVar2,0);
    }
    (***(code ***)(undefined4 *)*param_1)((undefined4 *)*param_1,0xf7);
  }
  return;
}


////>>0x080032a2>>FUN_080032a2>>////

void FUN_080032a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = strlen(param_2);
  sendSysex(param_1,0x71,uVar1,param_2,param_4);
  return;
}


////>>0x080032bc>>FUN_080032bc>>////

void FUN_080032bc(int param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined *)(param_1 + 0xc) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(bool *)param_1 = param_2 == 0;
  return;
}


////>>0x08003306>>FUN_08003306>>////

void FUN_08003306(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0xd0) {
    *(undefined4 *)(param_1 + 0x58) = param_3;
    *(undefined4 *)(param_1 + 0x28) = param_4;
    return;
  }
  if (0xd0 < param_2) {
    if (param_2 == 0xf4) {
      *(undefined4 *)(param_1 + 0x5c) = param_3;
      *(undefined4 *)(param_1 + 0x2c) = param_4;
      return;
    }
    if (param_2 == 0xf5) {
      *(undefined4 *)(param_1 + 0x60) = param_3;
      *(undefined4 *)(param_1 + 0x30) = param_4;
    }
    else if (param_2 == 0xe0) {
      *(undefined4 *)(param_1 + 0x4c) = param_3;
      *(undefined4 *)(param_1 + 0x1c) = param_4;
      return;
    }
    return;
  }
  if (param_2 == 0x90) {
    *(undefined4 *)(param_1 + 0x50) = param_3;
    *(undefined4 *)(param_1 + 0x20) = param_4;
    return;
  }
  if (param_2 == 0xc0) {
    *(undefined4 *)(param_1 + 0x54) = param_3;
    *(undefined4 *)(param_1 + 0x24) = param_4;
    return;
  }
  return;
}


////>>0x08003346>>FUN_08003346>>////

void FUN_08003346(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x79) {
    *(undefined4 *)(param_1 + 0x70) = param_3;
    *(undefined4 *)(param_1 + 0x34) = param_4;
  }
  return;
}


////>>0x08003350>>FUN_08003350>>////

void FUN_08003350(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0xf9) {
    *(undefined4 *)(param_1 + 0x74) = param_3;
    *(undefined4 *)(param_1 + 0x38) = param_4;
    return;
  }
  if (param_2 != 0xff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  return;
}


////>>0x08003366>>FUN_08003366>>////

void FUN_08003366(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x71) {
    *(undefined4 *)(param_1 + 0x68) = param_3;
    *(undefined4 *)(param_1 + 0x40) = param_4;
  }
  return;
}


////>>0x08003370>>FUN_08003370>>////

void FUN_08003370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return;
}


////>>0x08003376>>FUN_08003376>>////

void FUN_08003376(undefined *param_1,undefined param_2,uint param_3)

{
  bool bVar1;
  
  if (param_3 < *(uint *)(param_1 + 8)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (*(code **)(param_1 + 100) != (code *)0x0) {
      *param_1 = 1;
      (**(code **)(param_1 + 100))(*(undefined4 *)(param_1 + 0x3c));
      if (param_3 < *(uint *)(param_1 + 8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    *(undefined *)(*(int *)(param_1 + 4) + param_3) = param_2;
  }
  return;
}


////>>0x080033a8>>FUN_080033a8>>////

void FUN_080033a8(undefined4 param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 2) {
    bVar1 = *(byte *)(param_3 + uVar3);
    *(byte *)(param_3 + iVar2) = bVar1;
    *(byte *)(param_3 + iVar2) = *(char *)(param_3 + uVar3 + 1) << 7 | bVar1;
    iVar2 = iVar2 + 1;
  }
  return;
}


////>>0x080033cc>>FUN_080033cc>>////

void FUN_080033cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 4);
  cVar1 = *pcVar3;
  if (cVar1 == 'q') {
    if (*(int *)(param_1 + 0x68) != 0) {
      iVar2 = decodeByteStream(param_1,*(int *)(param_1 + 0x18) + -1,pcVar3 + 1,pcVar3,param_4);
      bufferDataAtPosition(param_1,0,iVar2 + 1);
      (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 0x40),*(int *)(param_1 + 4) + 1);
      return;
    }
  }
  else if (cVar1 == 'y') {
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
      if (*(uint *)(param_1 + 0x18) < 3) {
        (**(code **)(param_1 + 0x70))(*(undefined4 *)(param_1 + 0x34),0,0);
        return;
      }
      iVar2 = decodeByteStream(param_1,*(uint *)(param_1 + 0x18) - 3,pcVar3 + 3,pcVar3,param_4);
      bufferDataAtPosition(param_1,0,iVar2 + 3);
      iVar2 = *(int *)(param_1 + 4);
      (**(code **)(param_1 + 0x70))
                (*(undefined4 *)(param_1 + 0x34),*(undefined *)(iVar2 + 1),*(undefined *)(iVar2 + 2)
                 ,iVar2 + 3);
      return;
    }
  }
  else if (*(code **)(param_1 + 0x6c) != (code *)0x0) {
    (**(code **)(param_1 + 0x6c))
              (*(undefined4 *)(param_1 + 0x44),cVar1,*(int *)(param_1 + 0x18) + -1,pcVar3 + 1);
  }
  return;
}


////>>0x0800344a>>FUN_0800344a>>////

void FUN_0800344a(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0xc) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 8); uVar1 = uVar1 + 1) {
    *(undefined *)(*(int *)(param_1 + 4) + uVar1) = 0;
  }
  *(undefined *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 0x48));
  }
  return;
}


////>>0x08003474>>FUN_08003474>>////

void FUN_08003474(int param_1,uint param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (param_2 != 0xf7) {
      bufferDataAtPosition(param_1,param_2,*(undefined4 *)(param_1 + 0x18));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      return;
    }
    *(undefined *)(param_1 + 0x14) = 0;
    processSysexMessage();
    return;
  }
  if ((*(int *)(param_1 + 0x10) == 0) || (0x7f < (int)param_2)) {
    if ((int)param_2 < 0xf0) {
      *(byte *)(param_1 + 0xd) = (byte)param_2 & 0xf;
      param_2 = param_2 & 0xf0;
    }
    if (param_2 == 0xf0) {
      *(undefined *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
    if (param_2 < 0xf1) {
      if (param_2 != 0xc0) {
        if (param_2 < 0xc1) {
          if (param_2 != 0x90) {
            return;
          }
        }
        else {
          if (param_2 == 0xd0) goto LAB_0800359c;
          if (param_2 != 0xe0) {
            return;
          }
        }
LAB_08003586:
        *(undefined4 *)(param_1 + 0x10) = 2;
        *(char *)(param_1 + 0xc) = (char)param_2;
        return;
      }
LAB_0800359c:
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(char *)(param_1 + 0xc) = (char)param_2;
      return;
    }
    if (param_2 != 0xf9) {
      if (0xf9 < param_2) {
        if (param_2 == 0xff) {
          systemReset(param_1);
          return;
        }
        return;
      }
      if (1 < param_2 - 0xf4) {
        return;
      }
      goto LAB_08003586;
    }
    if (*(code **)(param_1 + 0x74) != (code *)0x0) {
      (**(code **)(param_1 + 0x74))(*(undefined4 *)(param_1 + 0x38));
    }
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    bufferDataAtPosition();
    if ((*(int *)(param_1 + 0x10) == 0) && (bVar1 = *(byte *)(param_1 + 0xc), bVar1 != 0)) {
      if (bVar1 == 0xd0) {
        if (*(code **)(param_1 + 0x58) != (code *)0x0) {
          (**(code **)(param_1 + 0x58))
                    (*(undefined4 *)(param_1 + 0x28),*(undefined *)(param_1 + 0xd),
                     **(undefined **)(param_1 + 4));
        }
      }
      else if (bVar1 < 0xd1) {
        if (bVar1 == 0x90) {
          if (*(code **)(param_1 + 0x50) != (code *)0x0) {
            (**(code **)(param_1 + 0x50))
                      (*(undefined4 *)(param_1 + 0x20),*(undefined *)(param_1 + 0xd),
                       (uint)(*(byte **)(param_1 + 4))[1] + (uint)**(byte **)(param_1 + 4) * 0x80);
          }
        }
        else if ((bVar1 == 0xc0) && (*(code **)(param_1 + 0x54) != (code *)0x0)) {
          (**(code **)(param_1 + 0x54))
                    (*(undefined4 *)(param_1 + 0x24),*(undefined *)(param_1 + 0xd),
                     **(undefined **)(param_1 + 4));
        }
      }
      else if (bVar1 == 0xf4) {
        if (*(code **)(param_1 + 0x5c) != (code *)0x0) {
          (**(code **)(param_1 + 0x5c))
                    (*(undefined4 *)(param_1 + 0x2c),(*(undefined **)(param_1 + 4))[1],
                     **(undefined **)(param_1 + 4));
        }
      }
      else if (bVar1 == 0xf5) {
        if (*(code **)(param_1 + 0x60) != (code *)0x0) {
          (**(code **)(param_1 + 0x60))
                    (*(undefined4 *)(param_1 + 0x30),(*(undefined **)(param_1 + 4))[1],
                     **(undefined **)(param_1 + 4));
        }
      }
      else if ((bVar1 == 0xe0) && (*(code **)(param_1 + 0x4c) != (code *)0x0)) {
        (**(code **)(param_1 + 0x4c))
                  (*(undefined4 *)(param_1 + 0x1c),*(undefined *)(param_1 + 0xd),
                   (uint)(*(byte **)(param_1 + 4))[1] + (uint)**(byte **)(param_1 + 4) * 0x80);
      }
      *(undefined *)(param_1 + 0xc) = 0;
      return;
    }
  }
  return;
}


////>>0x080035b8>>FUN_080035b8>>////

void FUN_080035b8(void)

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
  iVar1 = HAL_RCC_OscConfig(local_30);
  if (iVar1 != 0) {
    _Error_Handler("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/variants/NUCLEO_F103RB/variant.cpp"
                   ,0x88);
  }
  local_44 = 0xf;
  local_40 = 2;
  local_3c = 0;
  local_38 = 0x400;
  local_34 = 0;
  iVar1 = HAL_RCC_ClockConfig(&local_44);
  if (iVar1 != 0) {
    _Error_Handler("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/variants/NUCLEO_F103RB/variant.cpp"
                   ,0x95);
  }
  local_54[0] = 2;
  local_4c = 0x8000;
  iVar1 = HAL_RCCEx_PeriphCLKConfig(local_54);
  if (iVar1 != 0) {
    _Error_Handler("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/variants/NUCLEO_F103RB/variant.cpp"
                   ,0x9c);
  }
  uVar2 = HAL_RCC_GetHCLKFreq();
  HAL_SYSTICK_Config(uVar2 / 1000);
  HAL_SYSTICK_CLKSourceConfig(4);
  HAL_NVIC_SetPriority(0xffffffff,0);
  return;
}


////>>0x08003658>>FUN_08003658>>////

void FUN_08003658(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &DAT_200000f4; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(iVar1 + 0x800ac18);
  }
  for (puVar2 = &DAT_200000f4; puVar2 < &DAT_20000a3c; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  SystemInit();
  __libc_init_array();
  UNRECOVERED_JUMPTABLE = (code *)0x800368a;
  main();
                    /* WARNING: Could not recover jumptable at 0x0800368a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x080036a2>>FUN_080036a2>>////

void FUN_080036a2(void)

{
  hw_config_init();
  return;
}


////>>0x080036ac>>FUN_080036ac>>////

uint FUN_080036ac(int param_1)

{
  uint uVar1;
  
  if ((uint)(param_1 << 0x18) >> 0x1c < 5) {
    for (uVar1 = 0; (uVar1 < 0x3c && (param_1 != (char)(&DAT_0800a908)[uVar1])); uVar1 = uVar1 + 1)
    {
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


////>>0x080036d4>>FUN_080036d4>>////

void FUN_080036d4(void)

{
  return;
}


////>>0x080036d8>>FUN_080036d8>>////

undefined4 FUN_080036d8(uint param_1)

{
  int iVar1;
  
  iVar1 = HAL_SYSTICK_Config(DAT_20000018 / (1000 / DAT_2000000c));
  if (iVar1 != 0) {
    return 1;
  }
  if (0xf < param_1) {
    return 1;
  }
  HAL_NVIC_SetPriority(0xffffffff,param_1,0);
  DAT_20000010 = param_1;
  return 0;
}


////>>0x08003724>>FUN_08003724>>////



undefined4 FUN_08003724(void)

{
  _DAT_40022000 = _DAT_40022000 | 0x10;
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_InitTick(0xf);
  HAL_MspInit();
  return 0;
}


////>>0x08003748>>FUN_08003748>>////

void FUN_08003748(void)

{
  DAT_20000a34 = (uint)DAT_2000000c + DAT_20000a34;
  return;
}


////>>0x08003760>>FUN_08003760>>////

undefined4 FUN_08003760(void)

{
  return DAT_20000a34;
}


////>>0x0800376c>>FUN_0800376c>>////

undefined4 FUN_0800376c(uint **param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = HAL_GetTick();
  uVar6 = DAT_20000018;
  puVar5 = *param_1;
  if ((puVar5[2] & 0x100) == 0) {
    if (((puVar5[1] & 0x100) == 0) && ((puVar5[0xb] & 0xf00000) == 0)) {
      do {
        if ((**param_1 & 2) != 0) goto LAB_0800387e;
      } while ((param_2 == 0xffffffff) ||
              ((param_2 != 0 && (iVar3 = HAL_GetTick(), (uint)(iVar3 - iVar1) <= param_2))));
      param_1[10] = (uint *)((uint)param_1[10] | 4);
      *(undefined *)(param_1 + 9) = 0;
      uVar4 = 3;
    }
    else {
      uVar2 = HAL_RCCEx_GetPeriphCLKFreq(2);
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
           ((param_2 == 0 || (iVar3 = HAL_GetTick(), param_2 < (uint)(iVar3 - iVar1))))) {
          param_1[10] = (uint *)((uint)param_1[10] | 4);
          *(undefined *)(param_1 + 9) = 0;
          return 3;
        }
      }
LAB_0800387e:
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


////>>0x080038dc>>FUN_080038dc>>////

undefined4 FUN_080038dc(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0x4c);
}


////>>0x080038e4>>FUN_080038e4>>////

undefined4 FUN_080038e4(int *param_1,uint *param_2)

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
            for (local_c = (DAT_20000018 / 1000000) * 10; local_c != 0; local_c = local_c + -1) {
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


////>>0x08003a1c>>FUN_08003a1c>>////

undefined4 FUN_08003a1c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


////>>0x08003a20>>FUN_08003a20>>////

undefined4 FUN_08003a20(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_14;
  
  iVar3 = *param_1;
  if ((*(uint *)(iVar3 + 8) & 1) == 0) {
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 1;
    for (local_14 = DAT_20000018 / 1000000; local_14 != 0; local_14 = local_14 - 1) {
    }
    iVar3 = HAL_GetTick(param_1,param_2,DAT_20000018 * 0x431bde83);
    do {
      if ((*(uint *)(*param_1 + 8) & 1) != 0) {
        return 0;
      }
      iVar1 = HAL_GetTick();
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


////>>0x08003aa0>>FUN_08003aa0>>////



int FUN_08003aa0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 9) != '\x01') {
    *(undefined *)(param_1 + 9) = 1;
    iVar1 = ADC_Enable();
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


////>>0x08003b8c>>FUN_08003b8c>>////

undefined4 FUN_08003b8c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((*(uint *)(iVar2 + 8) & 1) == 0) {
    return 0;
  }
  *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffe;
  iVar2 = HAL_GetTick();
  do {
    if ((*(uint *)(*param_1 + 8) & 1) == 0) {
      return 0;
    }
    iVar1 = HAL_GetTick();
  } while ((uint)(iVar1 - iVar2) < 3);
  param_1[10] = param_1[10] | 0x10;
  param_1[0xb] = param_1[0xb] | 1;
  return 1;
}


////>>0x08003bd8>>FUN_08003bd8>>////

undefined4 FUN_08003bd8(int *param_1)

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
    HAL_ADC_MspInit();
  }
  iVar1 = ADC_ConversionStop_Disable(param_1);
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


////>>0x08003ce8>>FUN_08003ce8>>////

int FUN_08003ce8(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 1;
  }
  else {
    param_1[10] = param_1[10] | 2;
    iVar1 = ADC_ConversionStop_Disable();
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
      HAL_ADC_MspDeInit(param_1);
      param_1[0xb] = 0;
      param_1[10] = 0;
    }
    *(undefined *)(param_1 + 9) = 0;
  }
  return iVar1;
}


////>>0x08003de4>>FUN_08003de4>>////

int FUN_08003de4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x24) == '\x01') {
    return 2;
  }
  *(undefined *)(param_1 + 0x24) = 1;
  iVar1 = ADC_ConversionStop_Disable();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffeefe | 1;
  }
  *(undefined *)(param_1 + 0x24) = 0;
  return iVar1;
}


////>>0x08003e20>>FUN_08003e20>>////

int FUN_08003e20(int *param_1)

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
  iVar2 = ADC_ConversionStop_Disable();
  if (iVar2 == 0) {
    param_1[10] = param_1[10] & 0xffffeefdU | 2;
    uVar1 = DAT_20000018;
    uVar3 = HAL_RCCEx_GetPeriphCLKFreq(2);
    for (local_14 = uVar1 / uVar3 << 1; local_14 != 0; local_14 = local_14 + -1) {
    }
    ADC_Enable(param_1);
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 8;
    iVar4 = HAL_GetTick();
    while (iVar5 = *param_1, (*(uint *)(iVar5 + 8) & 8) != 0) {
      iVar5 = HAL_GetTick();
      if (10 < (uint)(iVar5 - iVar4)) {
        param_1[10] = param_1[10] & 0xffffffedU | 0x10;
        *(undefined *)(param_1 + 9) = 0;
        return 1;
      }
    }
    *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | 4;
    iVar4 = HAL_GetTick();
    while ((*(uint *)(*param_1 + 8) & 4) != 0) {
      iVar5 = HAL_GetTick();
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


////>>0x08003f0c>>FUN_08003f0c>>////



void FUN_08003f0c(uint param_1)

{
  _DAT_e000ed0c = (param_1 & 7) << 8 | _DAT_e000ed0c & 0xf8ff | 0x5fa0000;
  return;
}


////>>0x08003f30>>FUN_08003f30>>////



void FUN_08003f30(uint param_1,uint param_2,uint param_3)

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


////>>0x08003f94>>FUN_08003f94>>////

void FUN_08003f94(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)((param_1 >> 5) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  }
  return;
}


////>>0x08003fb0>>FUN_08003fb0>>////

void FUN_08003fb0(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(((param_1 >> 5) + 0x20) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


////>>0x08003fd8>>FUN_08003fd8>>////



undefined4 FUN_08003fd8(int param_1)

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


////>>0x08004004>>FUN_08004004>>////

void FUN_08004004(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(((param_1 >> 5) + 0x60) * 4 + -0x1fff1f00) = 1 << (param_1 & 0x1f);
  }
  return;
}


////>>0x08004024>>FUN_08004024>>////



void FUN_08004024(int param_1)

{
  if (param_1 != 4) {
    _DAT_e000e010 = _DAT_e000e010 & 0xfffffffb;
    return;
  }
  _DAT_e000e010 = _DAT_e000e010 | 4;
  return;
}


////>>0x08004044>>FUN_08004044>>////

void FUN_08004044(void)

{
  return;
}


////>>0x08004046>>FUN_08004046>>////

void FUN_08004046(void)

{
  HAL_SYSTICK_Callback();
  return;
}


////>>0x08004050>>FUN_08004050>>////



undefined4 FUN_08004050(uint **param_1)

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


////>>0x080040e8>>FUN_080040e8>>////



void FUN_080040e8(uint *param_1,uint *param_2)

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
          if (uVar5 == 0) goto LAB_0800423a;
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
LAB_0800423a:
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
        if ((uVar5 == 0x10110000) || (uVar5 == 0x10120000)) goto LAB_0800423a;
      }
      else if ((uVar5 == 0x10310000) || ((uVar5 == 0x10320000 || (uVar5 == 0x10220000))))
      goto LAB_0800423a;
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


////>>0x080042d4>>FUN_080042d4>>////

undefined4 FUN_080042d4(int param_1,uint param_2)

{
  if ((param_2 & *(uint *)(param_1 + 8)) == 0) {
    return 0;
  }
  return 1;
}


////>>0x080042e2>>FUN_080042e2>>////

void FUN_080042e2(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    *(int *)(param_1 + 0x10) = param_2 << 0x10;
    return;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}


////>>0x080042f0>>FUN_080042f0>>////



void FUN_080042f0(uint param_1)

{
  if ((_DAT_40010414 & param_1) != 0) {
    _DAT_40010414 = param_1;
    HAL_GPIO_EXTI_Callback();
  }
  return;
}


////>>0x0800430c>>FUN_0800430c>>////

undefined4 FUN_0800430c(int *param_1)

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


////>>0x08004396>>FUN_08004396>>////

undefined4 FUN_08004396(int *param_1)

{
  *(uint *)(*param_1 + 0x10) = param_1[0x11] & 0xff;
  return 0;
}


////>>0x080043a2>>FUN_080043a2>>////

undefined4 FUN_080043a2(uint **param_1)

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


////>>0x0800457c>>FUN_0800457c>>////

undefined4 FUN_0800457c(int *param_1)

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


////>>0x0800459c>>FUN_0800459c>>////

undefined4 FUN_0800459c(int *param_1)

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


////>>0x080045bc>>FUN_080045bc>>////

void FUN_080045bc(void)

{
  return;
}


////>>0x080045c0>>FUN_080045c0>>////

undefined4 FUN_080045c0(uint **param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  if (param_1 == (uint **)0x0) {
    return 1;
  }
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
    HAL_I2C_MspInit();
  }
  *(undefined *)((int)param_1 + 0x3d) = 0x24;
  **param_1 = **param_1 & 0xfffffffe;
  uVar2 = HAL_RCC_GetPCLK1Freq();
  if (param_1[1] < (uint *)0x186a1) {
    if (uVar2 < 2000000) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = uVar2 < 4000000;
  }
  if (bVar1) {
    return 1;
  }
  uVar4 = uVar2 / 1000000;
  (*param_1)[1] = uVar4;
  if ((uint *)0x186a0 < param_1[1]) {
    uVar4 = (uVar4 * 300) / 1000;
  }
  (*param_1)[8] = uVar4 + 1;
  puVar3 = param_1[1];
  if (puVar3 < (uint *)0x186a1) {
    uVar2 = (uVar2 - 1) / (uint)((int)puVar3 << 1) + 1 & 0xfff;
    if (uVar2 < 4) {
      uVar2 = 4;
    }
  }
  else {
    if (param_1[2] == (uint *)0x0) {
      uVar4 = (uVar2 - 1) / (uint)((int)puVar3 * 3);
    }
    else {
      uVar4 = (uVar2 - 1) / (uint)((int)puVar3 * 0x19);
    }
    if ((uVar4 + 1 & 0xfff) == 0) {
      uVar2 = 1;
    }
    else if (param_1[2] == (uint *)0x0) {
      uVar2 = (uVar2 - 1) / (uint)((int)puVar3 * 3) + 1 & 0xfff | 0x8000;
    }
    else {
      uVar2 = (uVar2 - 1) / (uint)((int)puVar3 * 0x19) + 1 & 0xfff | 0xc000;
    }
  }
  (*param_1)[7] = uVar2;
  **param_1 = (uint)param_1[7] | (uint)param_1[8];
  (*param_1)[2] = (uint)param_1[4] | (uint)param_1[3];
  (*param_1)[3] = (uint)param_1[5] | (uint)param_1[6];
  **param_1 = **param_1 | 1;
  param_1[0x10] = (uint *)0x0;
  *(undefined *)((int)param_1 + 0x3d) = 0x20;
  param_1[0xc] = (uint *)0x0;
  *(undefined *)((int)param_1 + 0x3e) = 0;
  return 0;
}


////>>0x08004728>>FUN_08004728>>////

undefined4 FUN_08004728(uint **param_1,uint *param_2,uint *param_3,undefined2 param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  int local_c;
  
  if (*(char *)((int)param_1 + 0x3d) == ' ') {
    local_c = (DAT_20000018 / 25000) * 0x19;
    do {
      if (local_c == 0) {
        param_1[0xc] = (uint *)0x0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        *(undefined *)(param_1 + 0xf) = 0;
        return 3;
      }
      puVar2 = *param_1;
      local_c = local_c + -1;
    } while ((puVar2[6] & 2) != 0);
    if (*(char *)(param_1 + 0xf) == '\x01') {
      uVar1 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
      if ((*puVar2 & 1) == 0) {
        *puVar2 = *puVar2 | 1;
      }
      **param_1 = **param_1 & 0xfffff7ff;
      *(undefined *)((int)param_1 + 0x3d) = 0x21;
      *(undefined *)((int)param_1 + 0x3e) = 0x10;
      uVar1 = 0;
      param_1[0x10] = (uint *)0x0;
      param_1[9] = param_3;
      *(undefined2 *)((int)param_1 + 0x2a) = param_4;
      param_1[0xb] = (uint *)0xffff0000;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
      param_1[0x11] = param_2;
      **param_1 = **param_1 | 0x100;
      *(undefined *)(param_1 + 0xf) = 0;
      (*param_1)[1] = (*param_1)[1] | 0x700;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


////>>0x080047f4>>FUN_080047f4>>////

undefined4 FUN_080047f4(uint **param_1,uint *param_2,uint *param_3,undefined2 param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  int local_c;
  
  if (*(char *)((int)param_1 + 0x3d) == ' ') {
    local_c = (DAT_20000018 / 25000) * 0x19;
    do {
      if (local_c == 0) {
        param_1[0xc] = (uint *)0x0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        *(undefined *)(param_1 + 0xf) = 0;
        return 3;
      }
      puVar2 = *param_1;
      local_c = local_c + -1;
    } while ((puVar2[6] & 2) != 0);
    if (*(char *)(param_1 + 0xf) == '\x01') {
      uVar1 = 2;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 1;
      if ((*puVar2 & 1) == 0) {
        *puVar2 = *puVar2 | 1;
      }
      **param_1 = **param_1 & 0xfffff7ff;
      *(undefined *)((int)param_1 + 0x3d) = 0x22;
      *(undefined *)((int)param_1 + 0x3e) = 0x10;
      uVar1 = 0;
      param_1[0x10] = (uint *)0x0;
      param_1[9] = param_3;
      *(undefined2 *)((int)param_1 + 0x2a) = param_4;
      param_1[0xb] = (uint *)0xffff0000;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
      param_1[0x11] = param_2;
      **param_1 = **param_1 | 0x400;
      **param_1 = **param_1 | 0x100;
      *(undefined *)(param_1 + 0xf) = 0;
      (*param_1)[1] = (*param_1)[1] | 0x700;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


////>>0x080048c8>>FUN_080048c8>>////

undefined4 FUN_080048c8(uint **param_1,uint *param_2,int param_3,uint *param_4)

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


////>>0x08004954>>FUN_08004954>>////

undefined4 FUN_08004954(uint **param_1,uint *param_2,int param_3,uint *param_4)

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


////>>0x080049e0>>FUN_080049e0>>////

undefined4 FUN_080049e0(uint **param_1)

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


////>>0x08004a1e>>FUN_08004a1e>>////

void FUN_08004a1e(void)

{
  return;
}


////>>0x08004a20>>FUN_08004a20>>////

void FUN_08004a20(void)

{
  return;
}


////>>0x08004a22>>FUN_08004a22>>////

void FUN_08004a22(void)

{
  return;
}


////>>0x08004a24>>FUN_08004a24>>////

undefined4 FUN_08004a24(int *param_1)

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
      HAL_I2C_SlaveTxCpltCallback();
    }
    return 0;
  }
  return 0;
}


////>>0x08004a74>>FUN_08004a74>>////

void FUN_08004a74(void)

{
  return;
}


////>>0x08004a76>>FUN_08004a76>>////

undefined4 FUN_08004a76(int *param_1)

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
      HAL_I2C_SlaveRxCpltCallback();
    }
  }
  return 0;
}


////>>0x08004ac2>>FUN_08004ac2>>////

undefined4 FUN_08004ac2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  HAL_I2C_AddrCallback(param_1,(*(uint *)(*param_1 + 0x18) & 4) == 0,uVar1,uVar2,param_4);
  return 0;
}


////>>0x08004aec>>FUN_08004aec>>////

undefined4 FUN_08004aec(uint **param_1)

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
    HAL_I2C_ListenCpltCallback();
  }
  else if (*(char *)((int)param_1 + 0x3d) == '!') {
    param_1[0xb] = (uint *)0xffff0000;
    param_1[0xc] = (uint *)0x21;
    *(undefined *)((int)param_1 + 0x3d) = 0x20;
    *(undefined *)((int)param_1 + 0x3e) = 0;
    (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
    (*param_1)[5] = 0xfffffbff;
    **param_1 = **param_1 & 0xfffffbff;
    HAL_I2C_SlaveTxCpltCallback();
  }
  else {
    (*param_1)[5] = 0xfffffbff;
  }
  return 0;
}


////>>0x08004b80>>FUN_08004b80>>////

void FUN_08004b80(void)

{
  return;
}


////>>0x08004b82>>FUN_08004b82>>////

undefined4 FUN_08004b82(uint **param_1)

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
        HAL_I2C_MemTxCpltCallback();
      }
      else {
        *(undefined *)((int)param_1 + 0x3e) = 0;
        HAL_I2C_MasterTxCpltCallback();
      }
    }
    else {
      (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
      param_1[0xc] = (uint *)0x11;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      HAL_I2C_MasterTxCpltCallback();
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


////>>0x08004ccc>>FUN_08004ccc>>////

undefined4 FUN_08004ccc(uint **param_1)

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
          HAL_I2C_MemTxCpltCallback();
        }
        else {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          HAL_I2C_MasterTxCpltCallback();
        }
      }
      else {
        (*param_1)[1] = (*param_1)[1] & 0xfffff8ff;
        param_1[0xc] = (uint *)0x11;
        *(undefined *)((int)param_1 + 0x3e) = 0;
        *(undefined *)((int)param_1 + 0x3d) = 0x20;
        HAL_I2C_MasterTxCpltCallback();
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


////>>0x08004d6a>>FUN_08004d6a>>////

void FUN_08004d6a(void)

{
  return;
}


////>>0x08004d6c>>FUN_08004d6c>>////

undefined4 FUN_08004d6c(uint **param_1)

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
          HAL_I2C_MemRxCpltCallback();
        }
        else {
          *(undefined *)((int)param_1 + 0x3e) = 0;
          HAL_I2C_MasterRxCpltCallback();
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


////>>0x08004e3c>>FUN_08004e3c>>////

undefined4 FUN_08004e3c(uint **param_1)

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
      HAL_I2C_MemRxCpltCallback();
    }
    else {
      *(undefined *)((int)param_1 + 0x3e) = 0;
      HAL_I2C_MasterRxCpltCallback();
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


////>>0x08004f3a>>FUN_08004f3a>>////

void FUN_08004f3a(void)

{
  return;
}


////>>0x08004f3c>>FUN_08004f3c>>////

void FUN_08004f3c(uint **param_1)

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
      HAL_I2C_AbortCpltCallback(param_1);
    }
    else {
      if ((puVar3[5] & 0x40) != 0) {
        puVar2 = param_1[9];
        param_1[9] = (uint *)((int)puVar2 + 1);
        *(char *)puVar2 = (char)puVar3[4];
      }
      HAL_I2C_ErrorCallback(param_1);
    }
  }
  else {
    puVar3[1] = puVar3[1] & 0xfffff7ff;
    if (*(char *)((int)param_1[0xd] + 0x21) == '\x01') {
      param_1[0xe][0xd] = (uint)&LAB_080053cc_1;
      iVar1 = HAL_DMA_Abort_IT(param_1[0xe]);
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
      param_1[0xd][0xd] = (uint)&LAB_080053cc_1;
      iVar1 = HAL_DMA_Abort_IT(param_1[0xd]);
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
    HAL_I2C_ListenCpltCallback(param_1);
  }
  return;
}


////>>0x08005084>>FUN_08005084>>////

undefined4 FUN_08005084(uint **param_1)

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
      HAL_I2C_ListenCpltCallback();
    }
    else if ((param_1[0xc] == (uint *)0x22) || (cVar1 == '\"')) {
      param_1[0xc] = (uint *)0x0;
      *(undefined *)((int)param_1 + 0x3d) = 0x20;
      *(undefined *)((int)param_1 + 0x3e) = 0;
      HAL_I2C_SlaveRxCpltCallback();
    }
  }
  else {
    I2C_ITError();
  }
  return 0;
}


////>>0x08005188>>FUN_08005188>>////

void FUN_08005188(int *param_1)

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
          I2C_Master_ADDR(param_1);
        }
      }
      else {
        I2C_Master_ADD10(param_1);
      }
    }
    else {
      I2C_Master_SB(param_1);
    }
    if ((uVar4 & 0x100004) == 0) {
      if ((((uVar2 & 0x10040) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        I2C_MasterReceive_RXNE(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        I2C_MasterReceive_BTF(param_1);
        return;
      }
    }
    else {
      if ((((uVar2 & 0x10080) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        I2C_MasterTransmit_TXE(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        I2C_MasterTransmit_BTF(param_1);
        return;
      }
    }
  }
  else {
    if (((uVar2 & 0x10002) != 0) && ((uVar3 & 0x200) != 0)) {
      I2C_Slave_ADDR();
      return;
    }
    if (((uVar2 & 0x10010) != 0) && ((uVar3 & 0x200) != 0)) {
      I2C_Slave_STOPF(param_1);
      return;
    }
    if ((uVar4 & 0x100004) == 0) {
      if ((((uVar2 & 0x10040) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        I2C_SlaveReceive_RXNE(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        I2C_SlaveReceive_BTF(param_1);
      }
    }
    else {
      if ((((uVar2 & 0x10080) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar2 & 0x10004) == 0)) {
        I2C_SlaveTransmit_TXE(param_1);
        return;
      }
      if (((uVar2 & 0x10004) != 0) && ((uVar3 & 0x200) != 0)) {
        I2C_SlaveTransmit_BTF(param_1);
        return;
      }
    }
  }
  return;
}


////>>0x080052f0>>FUN_080052f0>>////

void FUN_080052f0(uint **param_1)

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
      I2C_Slave_AF(param_1);
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
    I2C_ITError(param_1);
  }
  return;
}


////>>0x0800542a>>FUN_0800542a>>////

undefined FUN_0800542a(int param_1)

{
  return *(undefined *)(param_1 + 0x3d);
}


////>>0x08005430>>FUN_08005430>>////

undefined4 FUN_08005430(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


////>>0x08005434>>FUN_08005434>>////

void FUN_08005434(int param_1)

{
  bool bVar1;
  int local_4;
  
  local_4 = param_1 * (DAT_20000018 / 8000);
  do {
    bVar1 = local_4 != 0;
    local_4 = local_4 + -1;
  } while (bVar1);
  return;
}


////>>0x08005460>>FUN_08005460>>////


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_08005460(uint *param_1)

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
      _DAT_40021000 = _DAT_40021000 & 0xffffff07 | param_1[5] << 3;
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
      _DAT_40021000 = _DAT_40021000 & 0xffffff07 | param_1[5] << 3;
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
    bVar5 = (_DAT_4002101c & 0x10000000) == 0;
    if (bVar5) {
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
    iVar1 = HAL_GetTick();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) {
        if (param_1[8] == 0x10000) {
          _DAT_40021004 = _DAT_40021004 & 0xfffdffff | param_1[2];
        }
        _DAT_40021004 = _DAT_40021004 & 0xffc2ffff | param_1[8] | param_1[9];
        _DAT_42420060 = 1;
        iVar1 = HAL_GetTick();
        do {
          if ((_DAT_40021000 & 0x2000000) != 0) {
            return 0;
          }
          iVar2 = HAL_GetTick();
        } while ((uint)(iVar2 - iVar1) < 3);
        return 3;
      }
      iVar2 = HAL_GetTick();
    } while ((uint)(iVar2 - iVar1) < 3);
    uVar3 = 3;
  }
  else {
    _DAT_42420060 = 0;
    iVar1 = HAL_GetTick();
    do {
      if ((_DAT_40021000 & 0x2000000) == 0) {
        return 0;
      }
      iVar2 = HAL_GetTick();
    } while ((uint)(iVar2 - iVar1) < 3);
    uVar3 = 3;
  }
  return uVar3;
}


////>>0x08005840>>FUN_08005840>>////



uint FUN_08005840(void)

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


////>>0x080058ac>>FUN_080058ac>>////



undefined4 FUN_080058ac(uint *param_1,uint param_2)

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
    iVar1 = HAL_GetTick();
    if (param_1[1] == 1) {
      while ((_DAT_40021004 & 0xc) != 4) {
        iVar2 = HAL_GetTick();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else if (param_1[1] == 2) {
      while ((_DAT_40021004 & 0xc) != 8) {
        iVar2 = HAL_GetTick();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      while ((_DAT_40021004 & 0xc) != 0) {
        iVar2 = HAL_GetTick();
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
  uVar3 = HAL_RCC_GetSysClockFreq();
  DAT_20000018 = uVar3 >> (&DAT_0800a944)[(_DAT_40021004 << 0x18) >> 0x1c];
  HAL_InitTick(0xf);
  return 0;
}


////>>0x080058d2>>FUN_080058d2>>////



undefined4 FUN_080058d2(uint *param_1,uint param_2)

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
    iVar1 = HAL_GetTick();
    if (param_1[1] == 1) {
      while ((_DAT_40021004 & 0xc) != 4) {
        iVar2 = HAL_GetTick();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else if (param_1[1] == 2) {
      while ((_DAT_40021004 & 0xc) != 8) {
        iVar2 = HAL_GetTick();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      while ((_DAT_40021004 & 0xc) != 0) {
        iVar2 = HAL_GetTick();
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
  uVar3 = HAL_RCC_GetSysClockFreq();
  DAT_20000018 = uVar3 >> (&DAT_0800a944)[(_DAT_40021004 << 0x18) >> 0x1c];
  HAL_InitTick(0xf);
  return 0;
}


////>>0x08005a1c>>FUN_08005a1c>>////

undefined4 FUN_08005a1c(void)

{
  return DAT_20000018;
}


////>>0x08005a28>>FUN_08005a28>>////



uint FUN_08005a28(void)

{
  uint uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> (&DAT_0800a954)[(uint)(_DAT_40021004 << 0x15) >> 0x1d];
}


////>>0x08005a48>>FUN_08005a48>>////



uint FUN_08005a48(void)

{
  uint uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> (&DAT_0800a954)[(uint)(_DAT_40021004 << 0x12) >> 0x1d];
}


////>>0x08005a68>>FUN_08005a68>>////



void FUN_08005a68(undefined4 *param_1,uint *param_2)

{
  *param_1 = 0xf;
  param_1[1] = _DAT_40021004 & 3;
  param_1[2] = _DAT_40021004 & 0xf0;
  param_1[3] = _DAT_40021004 & 0x700;
  param_1[4] = _DAT_40021004 >> 3 & 0x700;
  *param_2 = _DAT_40022000 & 7;
  return;
}


////>>0x08005aa4>>FUN_08005aa4>>////



undefined4 FUN_08005aa4(uint *param_1)

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
      iVar3 = HAL_GetTick();
      while ((_DAT_40007000 & 0x100) == 0) {
        iVar4 = HAL_GetTick();
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
        iVar3 = HAL_GetTick();
        while ((_DAT_40021020 & 2) == 0) {
          iVar4 = HAL_GetTick();
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


////>>0x08005bb8>>FUN_08005bb8>>////



uint FUN_08005bb8(int param_1)

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
    uVar1 = HAL_RCC_GetPCLK2Freq();
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


////>>0x08005cb4>>FUN_08005cb4>>////



void FUN_08005cb4(uint **param_1)

{
  if (((**param_1 & 2) != 0) && (((*param_1)[1] & 2) != 0)) {
    HAL_RTC_AlarmAEventCallback();
    (*param_1)[1] = 0xfffffffd;
  }
  _DAT_40010414 = 0x20000;
  *(undefined *)((int)param_1 + 0x11) = 1;
  return;
}


////>>0x08005cec>>FUN_08005cec>>////

void FUN_08005cec(int param_1,uint *param_2)

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


////>>0x08005d48>>FUN_08005d48>>////

void FUN_08005d48(int param_1,uint *param_2)

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
    uVar2 = uVar2 & 0xffffcfff | param_2[5] << 4 | param_2[6] << 4;
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffff8c | uVar3;
  *(uint *)(param_1 + 0x3c) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar1;
  return;
}


////>>0x08005dac>>FUN_08005dac>>////

void FUN_08005dac(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffefff;
  uVar1 = *(uint *)(param_1 + 4);
  iVar2 = *param_2;
  iVar3 = param_2[2];
  if (param_1 == 0x40012c00) {
    uVar1 = uVar1 & 0xffffbfff | param_2[5] << 6;
  }
  *(uint *)(param_1 + 4) = uVar1;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff8cff | iVar2 << 8;
  *(int *)(param_1 + 0x40) = param_2[1];
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffdfff | iVar3 << 0xc;
  return;
}


////>>0x08005df4>>FUN_08005df4>>////

void FUN_08005df4(uint **param_1)

{
  uint *puVar1;
  
  *(undefined *)((int)param_1 + 0x3d) = 2;
  puVar1 = *param_1;
  if ((puVar1[8] & 0x1111) == 0) {
    if ((puVar1[8] & 0x444) == 0) {
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  HAL_TIM_OC_MspDeInit(param_1);
  *(undefined *)((int)param_1 + 0x3d) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return;
}


////>>0x08005e2e>>FUN_08005e2e>>////

void FUN_08005e2e(uint **param_1)

{
  uint *puVar1;
  
  *(undefined *)((int)param_1 + 0x3d) = 2;
  puVar1 = *param_1;
  if ((puVar1[8] & 0x1111) == 0) {
    if ((puVar1[8] & 0x444) == 0) {
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  HAL_TIM_PWM_MspDeInit(param_1);
  *(undefined *)((int)param_1 + 0x3d) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return;
}


////>>0x08005e68>>FUN_08005e68>>////

void FUN_08005e68(void)

{
  return;
}


////>>0x08005e6a>>FUN_08005e6a>>////

void FUN_08005e6a(void)

{
  return;
}


////>>0x08005e6c>>FUN_08005e6c>>////

void FUN_08005e6c(void)

{
  return;
}


////>>0x08005e6e>>FUN_08005e6e>>////

void FUN_08005e6e(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 2) != 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffd;
    *(undefined *)(param_1 + 7) = 1;
    if ((*(uint *)(*param_1 + 0x18) & 3) == 0) {
      HAL_TIM_OC_DelayElapsedCallback();
      HAL_TIM_PWM_PulseFinishedCallback(param_1);
    }
    else {
      HAL_TIM_IC_CaptureCallback();
    }
    *(undefined *)(param_1 + 7) = 0;
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 4) != 0) && ((*(uint *)(iVar1 + 0xc) & 4) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffb;
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
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 8) != 0) && ((*(uint *)(iVar1 + 0xc) & 8) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffff7;
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
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x10) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x10) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffef;
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
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 1) != 0) && ((*(uint *)(iVar1 + 0xc) & 1) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xfffffffe;
    HAL_TIM_PeriodElapsedCallback(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x80) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x80) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffff7f;
    HAL_TIMEx_BreakCallback(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x40) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x40) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffbf;
    HAL_TIM_TriggerCallback(param_1);
  }
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x10) & 0x20) != 0) && ((*(uint *)(iVar1 + 0xc) & 0x20) != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffdf;
    HAL_TIMEx_CommutationCallback(param_1);
  }
  return;
}


////>>0x08005fe8>>FUN_08005fe8>>////

void FUN_08005fe8(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((param_1 == (uint *)0x40012c00) || (param_1 == (uint *)0x40000000)) ||
      (param_1 == (uint *)0x40000400)) || (param_1 == (uint *)0x40000800)) {
    uVar1 = uVar1 & 0xffffff8f | param_2[1];
  }
  if (((param_1 == (uint *)0x40012c00) || (param_1 == (uint *)0x40000000)) ||
     ((param_1 == (uint *)0x40000400 || (param_1 == (uint *)0x40000800)))) {
    uVar1 = uVar1 & 0xfffffcff | param_2[3];
  }
  *param_1 = uVar1 & 0xffffff7f | param_2[5];
  param_1[0xb] = param_2[2];
  param_1[10] = *param_2;
  if (param_1 == (uint *)0x40012c00) {
    uRam40012c30 = param_2[4];
  }
  param_1[5] = 1;
  return;
}


////>>0x08006060>>FUN_08006060>>////

undefined4 FUN_08006060(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      *(undefined *)(param_1 + 0xf) = 0;
      HAL_TIM_OC_MspInit();
    }
    *(undefined *)((int)param_1 + 0x3d) = 2;
    TIM_Base_SetConfig(*param_1,param_1 + 1);
    *(undefined *)((int)param_1 + 0x3d) = 1;
    return 0;
  }
  return 1;
}


////>>0x08006092>>FUN_08006092>>////

undefined4 FUN_08006092(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      *(undefined *)(param_1 + 0xf) = 0;
      HAL_TIM_PWM_MspInit();
    }
    *(undefined *)((int)param_1 + 0x3d) = 2;
    TIM_Base_SetConfig(*param_1,param_1 + 1);
    *(undefined *)((int)param_1 + 0x3d) = 1;
    return 0;
  }
  return 1;
}


////>>0x080060c4>>FUN_080060c4>>////

void FUN_080060c4(int param_1,int *param_2)

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
    uVar2 = uVar2 & 0xfffff3ff | param_2[5] << 2 | param_2[6] << 2;
  }
  *(uint *)(param_1 + 4) = uVar2;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff8cff | iVar3 << 8;
  *(int *)(param_1 + 0x38) = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar1;
  return;
}


////>>0x08006128>>FUN_08006128>>////

undefined4 FUN_08006128(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0xf) != '\x01') {
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)((int)param_1 + 0x3d) = 2;
    switch(param_3) {
    case 0:
      TIM_OC1_SetConfig(*param_1);
      break;
    case 4:
      TIM_OC2_SetConfig(*param_1);
      break;
    case 8:
      TIM_OC3_SetConfig(*param_1);
      break;
    case 0xc:
      TIM_OC4_SetConfig(*param_1);
    }
    *(undefined *)((int)param_1 + 0x3d) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    return 0;
  }
  return 2;
}


////>>0x08006186>>FUN_08006186>>////

undefined4 FUN_08006186(int *param_1,int param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0xf) != '\x01') {
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)((int)param_1 + 0x3d) = 2;
    switch(param_3) {
    case 0:
      TIM_OC1_SetConfig(*param_1);
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 8;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffffb;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | *(uint *)(param_2 + 0x10);
      break;
    case 4:
      TIM_OC2_SetConfig(*param_1);
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x800;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffbff;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | *(int *)(param_2 + 0x10) << 8;
      break;
    case 8:
      TIM_OC3_SetConfig(*param_1);
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 8;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffffffb;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | *(uint *)(param_2 + 0x10);
      break;
    case 0xc:
      TIM_OC4_SetConfig(*param_1);
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | 0x800;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) & 0xfffffbff;
      *(uint *)(*param_1 + 0x1c) = *(uint *)(*param_1 + 0x1c) | *(int *)(param_2 + 0x10) << 8;
    }
    *(undefined *)((int)param_1 + 0x3d) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    return 0;
  }
  return 2;
}


////>>0x08006262>>FUN_08006262>>////

void FUN_08006262(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(1 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_3 << (param_2 & 0xff);
  return;
}


////>>0x08006280>>FUN_08006280>>////

undefined4 FUN_08006280(uint **param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    (*param_1)[3] = (*param_1)[3] | 2;
    break;
  case 4:
    (*param_1)[3] = (*param_1)[3] | 4;
    break;
  case 8:
    (*param_1)[3] = (*param_1)[3] | 8;
    break;
  case 0xc:
    (*param_1)[3] = (*param_1)[3] | 0x10;
  }
  TIM_CCxChannelCmd(*param_1,param_2,1);
  if (*param_1 == (uint *)0x40012c00) {
    uRam40012c44 = uRam40012c44 | 0x8000;
  }
  **param_1 = **param_1 | 1;
  return 0;
}


////>>0x080062f4>>FUN_080062f4>>////

undefined4 FUN_080062f4(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  switch(param_2) {
  case 0:
    (*param_1)[3] = (*param_1)[3] & 0xfffffffd;
    break;
  case 4:
    (*param_1)[3] = (*param_1)[3] & 0xfffffffb;
    break;
  case 8:
    (*param_1)[3] = (*param_1)[3] & 0xfffffff7;
    break;
  case 0xc:
    (*param_1)[3] = (*param_1)[3] & 0xffffffef;
  }
  TIM_CCxChannelCmd(*param_1,param_2,0);
  if (((*param_1 == (uint *)0x40012c00) && ((uRam40012c20 & 0x1111) == 0)) &&
     ((uRam40012c20 & 0x444) == 0)) {
    uRam40012c44 = uRam40012c44 & 0xffff7fff;
  }
  puVar1 = *param_1;
  if (((puVar1[8] & 0x1111) == 0) && ((puVar1[8] & 0x444) == 0)) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return 0;
}


////>>0x08006390>>FUN_08006390>>////

undefined4 FUN_08006390(uint **param_1,undefined4 param_2)

{
  TIM_CCxChannelCmd(*param_1,param_2,1);
  if (*param_1 == (uint *)0x40012c00) {
    uRam40012c44 = uRam40012c44 | 0x8000;
  }
  **param_1 = **param_1 | 1;
  return 0;
}


////>>0x080063c0>>FUN_080063c0>>////

undefined4 FUN_080063c0(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  TIM_CCxChannelCmd(*param_1,param_2,0);
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


////>>0x08006420>>FUN_08006420>>////

void FUN_08006420(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~(4 << (param_2 & 0xff));
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_3 << (param_2 & 0xff);
  return;
}


////>>0x0800643c>>FUN_0800643c>>////

undefined4 FUN_0800643c(uint **param_1,undefined4 param_2)

{
  TIM_CCxNChannelCmd(*param_1,param_2,4);
  (*param_1)[0x11] = (*param_1)[0x11] | 0x8000;
  **param_1 = **param_1 | 1;
  return 0;
}


////>>0x08006460>>FUN_08006460>>////

undefined4 FUN_08006460(uint **param_1,undefined4 param_2)

{
  uint *puVar1;
  
  TIM_CCxNChannelCmd(*param_1,param_2,0);
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


////>>0x080064ac>>FUN_080064ac>>////

void FUN_080064ac(void)

{
  return;
}


////>>0x080064ae>>FUN_080064ae>>////

void FUN_080064ae(void)

{
  return;
}


////>>0x080064b0>>FUN_080064b0>>////

void FUN_080064b0(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfffffedf;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  return;
}


////>>0x080064cc>>FUN_080064cc>>////

undefined4 FUN_080064cc(int *param_1)

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


////>>0x08006538>>FUN_08006538>>////

void FUN_08006538(int *param_1)

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
    iVar1 = HAL_RCC_GetPCLK1Freq();
    iVar6 = param_1[1];
    iVar2 = HAL_RCC_GetPCLK1Freq();
    iVar7 = param_1[1];
    iVar3 = HAL_RCC_GetPCLK1Freq();
    iVar8 = param_1[1];
    iVar4 = HAL_RCC_GetPCLK1Freq();
    iVar9 = param_1[1];
    iVar5 = HAL_RCC_GetPCLK1Freq();
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
  iVar10 = HAL_RCC_GetPCLK2Freq();
  iVar5 = param_1[1];
  iVar1 = HAL_RCC_GetPCLK2Freq();
  iVar6 = param_1[1];
  iVar2 = HAL_RCC_GetPCLK2Freq();
  iVar7 = param_1[1];
  iVar3 = HAL_RCC_GetPCLK2Freq();
  iVar8 = param_1[1];
  iVar4 = HAL_RCC_GetPCLK2Freq();
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


////>>0x080066e8>>FUN_080066e8>>////

undefined4 FUN_080066e8(uint **param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  
  do {
    if (((param_2 & ~**param_1) == 0) != param_3) {
      return 0;
    }
  } while ((param_5 == 0xffffffff) ||
          ((param_5 != 0 && (iVar1 = HAL_GetTick(), (uint)(iVar1 - param_4) <= param_5))));
  (*param_1)[3] = (*param_1)[3] & 0xfffffe5f;
  (*param_1)[5] = (*param_1)[5] & 0xfffffffe;
  *(undefined *)((int)param_1 + 0x39) = 0x20;
  *(undefined *)((int)param_1 + 0x3a) = 0x20;
  *(undefined *)(param_1 + 0xe) = 0;
  return 3;
}


////>>0x0800674c>>FUN_0800674c>>////

void FUN_0800674c(void)

{
  return;
}


////>>0x0800674e>>FUN_0800674e>>////

undefined4 FUN_0800674e(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*(char *)((int)param_1 + 0x39) == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      HAL_UART_MspInit();
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
    return 0;
  }
  return 1;
}


////>>0x080067ac>>FUN_080067ac>>////

undefined4 FUN_080067ac(int *param_1,ushort *param_2,int param_3,undefined4 param_4)

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
      uVar2 = HAL_GetTick();
      *(short *)(param_1 + 9) = (short)param_3;
      *(short *)((int)param_1 + 0x26) = (short)param_3;
      while (*(short *)((int)param_1 + 0x26) != 0) {
        *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + -1;
        if (param_1[2] == 0x1000) {
          iVar1 = UART_WaitOnFlagUntilTimeout(param_1,0x80,0,uVar2,param_4);
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
          iVar1 = UART_WaitOnFlagUntilTimeout(param_1,0x80,0,uVar2,param_4);
          if (iVar1 != 0) {
            return 3;
          }
          *(uint *)(*param_1 + 4) = (uint)*(byte *)param_2;
          param_2 = (ushort *)((int)param_2 + 1);
        }
      }
      iVar1 = UART_WaitOnFlagUntilTimeout(param_1,0x40,0,uVar2,param_4);
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


////>>0x0800688e>>FUN_0800688e>>////

undefined4 FUN_0800688e(int *param_1,int param_2,int param_3)

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


////>>0x080068d6>>FUN_080068d6>>////

undefined4 FUN_080068d6(int *param_1,int param_2,int param_3)

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


////>>0x08006932>>FUN_08006932>>////

undefined4 FUN_08006932(int *param_1)

{
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffffffbf;
  *(undefined *)((int)param_1 + 0x39) = 0x20;
  HAL_UART_TxCpltCallback();
  return 0;
}


////>>0x0800694c>>FUN_0800694c>>////

undefined4 FUN_0800694c(int *param_1)

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
  HAL_UART_RxCpltCallback();
  return 0;
}


////>>0x080069ec>>FUN_080069ec>>////

void FUN_080069ec(uint **param_1)

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
    UART_Receive_IT(param_1);
    return;
  }
  if (((uVar5 & 0xf) == 0) || ((uVar4 = puVar3[5] & 1, uVar4 == 0 && ((uVar2 & 0x120) == 0)))) {
    if (((uVar5 & 0x80) != 0) && ((uVar2 & 0x80) != 0)) {
      UART_Transmit_IT(param_1);
      return;
    }
    if (((uVar5 & 0x40) != 0) && ((uVar2 & 0x40) != 0)) {
      UART_EndTransmit_IT(param_1);
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
        UART_Receive_IT(param_1);
      }
      if ((((uint)param_1[0xf] & 8) == 0) && (((*param_1)[5] & 0x40) == 0)) {
        HAL_UART_ErrorCallback(param_1);
        param_1[0xf] = (uint *)0x0;
        return;
      }
      UART_EndRxTransfer(param_1);
      puVar3 = *param_1;
      if ((puVar3[5] & 0x40) == 0) {
        HAL_UART_ErrorCallback(param_1);
        return;
      }
      puVar3[5] = puVar3[5] & 0xffffffbf;
      if (param_1[0xd] == (uint *)0x0) {
        HAL_UART_ErrorCallback(param_1);
        return;
      }
      param_1[0xd][0xd] = (uint)&LAB_08006b0c_1;
      iVar1 = HAL_DMA_Abort_IT(param_1[0xd]);
      if (iVar1 != 0) {
        (*(code *)param_1[0xd][0xd])();
        return;
      }
    }
  }
  return;
}


////>>0x08006b1c>>FUN_08006b1c>>////

byte FUN_08006b1c(int param_1)

{
  return *(byte *)(param_1 + 0x3a) | *(byte *)(param_1 + 0x39);
}


////>>0x08006b28>>FUN_08006b28>>////

uint FUN_08006b28(uint param_1,int param_2)

{
  return *(uint *)(param_2 + ((param_1 << 0x18) >> 0x1c) * 4) >> (param_1 & 0xf) & 1;
}


////>>0x08006b3e>>FUN_08006b3e>>////

void FUN_08006b3e(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 0x18) >> 0x1c;
  *(uint *)(param_2 + uVar1 * 4) = *(uint *)(param_2 + uVar1 * 4) | 1 << (param_1 & 0xf);
  return;
}


////>>0x08006b5c>>FUN_08006b5c>>////

void FUN_08006b5c(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 << 0x18) >> 0x1c;
  *(uint *)(param_2 + uVar1 * 4) = *(uint *)(param_2 + uVar1 * 4) & ~(1 << (param_1 & 0xf));
  return;
}


////>>0x08006b7c>>FUN_08006b7c>>////

undefined4 FUN_08006b7c(undefined4 param_1)

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


////>>0x08006bb8>>FUN_08006bb8>>////



undefined4 FUN_08006bb8(undefined4 param_1)

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


////>>0x08006c60>>FUN_08006c60>>////

uint FUN_08006c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = pinmap_function(param_1,&DAT_0800a5b8,param_3,param_4,param_4);
  uVar2 = (uint)(iVar1 << 0xc) >> 0x1b;
  if (0x10 < uVar2 - 1) {
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x08006c7c>>FUN_08006c7c>>////

undefined4 FUN_08006c7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = pinmap_function(param_1,&DAT_0800a6cc,param_3,param_4,param_4);
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


////>>0x08006ca8>>FUN_08006ca8>>////



void FUN_08006ca8(int *param_1,undefined4 param_2)

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
  uVar1 = set_GPIO_Port_Clock((uint)((int)(char)DAT_20000014 << 0x18) >> 0x1c,param_2,uVar2,iVar3);
  local_18 = 1 << (DAT_20000014 & 0xf) & 0xffff;
  local_14 = 3;
  local_10 = 0;
  HAL_GPIO_Init(uVar1,&local_18);
  return;
}


////>>0x08006d24>>FUN_08006d24>>////



void FUN_08006d24(int *param_1)

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


////>>0x08006d80>>FUN_08006d80>>////

undefined2 FUN_08006d80(undefined4 param_1)

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
  
  memset(&local_38,0,0x30);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_46 = 0;
  local_38 = pinmap_peripheral(param_1,&DAT_0800a5b8);
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
    DAT_20000014 = (undefined)param_1;
    iVar1 = HAL_ADC_Init(&local_38);
    if (iVar1 == 0) {
      local_44 = get_adc_channel(param_1);
      if (local_44 < 0x12) {
        local_40 = 1;
        local_3c = 2;
        iVar1 = HAL_ADC_ConfigChannel(&local_38,&local_44);
        if (iVar1 == 0) {
          iVar1 = HAL_ADCEx_Calibration_Start(&local_38);
          if (iVar1 == 0) {
            iVar1 = HAL_ADC_Start(&local_38);
            if (iVar1 == 0) {
              iVar1 = HAL_ADC_PollForConversion(&local_38,10);
              if (iVar1 == 0) {
                uVar2 = HAL_ADC_GetState(&local_38);
                if ((uVar2 & 0x200) != 0) {
                  local_46 = HAL_ADC_GetValue(&local_38);
                }
                iVar1 = HAL_ADC_Stop(&local_38);
                if (iVar1 == 0) {
                  iVar1 = HAL_ADC_DeInit(&local_38);
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


////>>0x08006e68>>FUN_08006e68>>////



void FUN_08006e68(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = pinmap_function((int)(char)DAT_20000014,&DAT_0800a6cc);
  timer_enable_clock(param_1);
  uVar2 = set_GPIO_Port_Clock((uint)((int)(char)DAT_20000014 << 0x18) >> 0x1c);
  local_1c = 2;
  local_18 = 0;
  local_14 = 3;
  _DAT_40021018 = _DAT_40021018 | 1;
  switch((uint)(iVar1 << 0x11) >> 0x19) {
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
  local_20 = 1 << (DAT_20000014 & 0xf) & 0xffff;
  HAL_GPIO_Init(uVar2,&local_20);
  return;
}


////>>0x08007110>>FUN_08007110>>////

void FUN_08007110(void)

{
  timer_disable_clock();
  return;
}


////>>0x08007118>>FUN_08007118>>////

void FUN_08007118(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_1b;
  
  memset(&local_58,0,0x40);
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = pinmap_peripheral(param_1,&DAT_0800a6cc);
  if (local_58 != 0) {
    uVar1 = getTimerClkFreq();
    local_54 = uVar1 / param_2 - 1;
    local_4c = param_3 + -1;
    local_48 = 0;
    local_50 = 0;
    local_44 = 0;
    local_1b = 0;
    if (param_5 == '\x01') {
      DAT_20000014 = (undefined)param_1;
      iVar2 = HAL_TIM_PWM_Init(&local_58);
      if (iVar2 != 0) {
        return;
      }
    }
    iVar2 = get_pwm_channel(param_1);
    if ((((iVar2 == 0) || (iVar2 == 4)) || (iVar2 == 8)) || ((iVar2 == 0xc || (iVar2 == 0x18)))) {
      local_74 = 0x60;
      local_6c = 0;
      local_64 = 0;
      local_68 = 0;
      local_5c = 0;
      local_60 = 0;
      local_70 = param_4;
      iVar3 = HAL_TIM_PWM_ConfigChannel(&local_58,&local_74,iVar2);
      if (iVar3 == 0) {
        uVar1 = pinmap_function(param_1,&DAT_0800a6cc);
        if ((uVar1 & 0x100000) == 0) {
          HAL_TIM_PWM_Start(&local_58,iVar2);
        }
        else {
          HAL_TIMEx_PWMN_Start(&local_58,iVar2);
        }
      }
    }
  }
  return;
}


////>>0x080071e4>>FUN_080071e4>>////

void FUN_080071e4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int local_50 [17];
  
  local_50[0] = pinmap_peripheral(param_1,&DAT_0800a6cc);
  if ((local_50[0] != 0) &&
     ((((iVar1 = get_pwm_channel(param_1), iVar1 == 0 || (iVar1 == 4)) || (iVar1 == 8)) ||
      ((iVar1 == 0xc || (iVar1 == 0x18)))))) {
    uVar2 = pinmap_function(param_1,&DAT_0800a6cc);
    if ((uVar2 & 0x100000) == 0) {
      HAL_TIM_PWM_Stop(local_50,iVar1);
    }
    else {
      HAL_TIMEx_PWMN_Stop(local_50,iVar1);
    }
    HAL_TIM_PWM_DeInit(local_50);
  }
  return;
}


////>>0x0800723c>>FUN_0800723c>>////

void FUN_0800723c(void)

{
  HAL_GetTick();
  return;
}


////>>0x08007244>>FUN_08007244>>////

void FUN_08007244(void)

{
  return;
}


////>>0x08007246>>FUN_08007246>>////

void FUN_08007246(void)

{
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
  noOsSystickHandler();
  return;
}


////>>0x08007258>>FUN_08007258>>////



void FUN_08007258(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = set_GPIO_Port_Clock((param_1 << 0x18) >> 0x1c);
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
  HAL_GPIO_Init(uVar1,&local_20);
  return;
}


////>>0x080072d8>>FUN_080072d8>>////

void FUN_080072d8(undefined4 param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    HAL_GPIO_WritePin(param_1,param_2,0,param_4,param_4);
    return;
  }
  HAL_GPIO_WritePin(param_1,param_2,1,param_4,param_4);
  return;
}


////>>0x080072f0>>FUN_080072f0>>////

void FUN_080072f0(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  HAL_GPIO_ReadPin(param_1,param_2,param_3,param_4,param_4);
  return;
}


////>>0x080072fa>>FUN_080072fa>>////

void FUN_080072fa(void)

{
  HAL_Init();
  SystemClock_Config();
  return;
}


////>>0x08007306>>FUN_08007306>>////

undefined4 FUN_08007306(int param_1,char *param_2)

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


////>>0x08007320>>FUN_08007320>>////

undefined4 FUN_08007320(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != -1) {
    uVar1 = pinmap_find_peripheral();
    return uVar1;
  }
  return 0;
}


////>>0x08007332>>FUN_08007332>>////

int FUN_08007332(int param_1,char *param_2)

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


////>>0x0800734a>>FUN_0800734a>>////

undefined4 FUN_0800734a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = pinmap_find_pin();
    return uVar1;
  }
  return 0xffffffff;
}


////>>0x0800735a>>FUN_0800735a>>////

undefined4 FUN_0800735a(int param_1,char *param_2)

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


////>>0x08007376>>FUN_08007376>>////

undefined4 FUN_08007376(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  uVar1 = pinmap_find_function();
  return uVar1;
}


////>>0x0800738a>>FUN_0800738a>>////

undefined4 FUN_0800738a(int param_1,char *param_2)

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


////>>0x080073ae>>FUN_080073ae>>////

int FUN_080073ae(int param_1,int param_2)

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


////>>0x080073c0>>FUN_080073c0>>////

void FUN_080073c0(void)

{
  if (DAT_200005f4 != (code *)0x0) {
    (*DAT_200005f4)(DAT_2000060c);
  }
  return;
}


////>>0x080073e8>>FUN_080073e8>>////

void FUN_080073e8(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080073ec>>FUN_080073ec>>////



void FUN_080073ec(void)

{
  _DAT_40021000 = _DAT_40021000 & 0xfef2ffff | 1;
  _DAT_40021004 = _DAT_40021004 & 0xf8800000;
  _DAT_40021008 = 0x9f0000;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x08007438>>FUN_08007438>>////


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_08007438(int *param_1)

{
  if (*param_1 == 0x40012c00) {
    _DAT_40021018 = _DAT_40021018 | 0x800;
    DAT_20000610 = param_1;
  }
  if (*param_1 == 0x40000000) {
    _DAT_4002101c = _DAT_4002101c | 1;
    DAT_20000614 = param_1;
  }
  if (*param_1 == 0x40000400) {
    _DAT_4002101c = _DAT_4002101c | 2;
    DAT_20000618 = param_1;
  }
  if (*param_1 == 0x40000800) {
    _DAT_4002101c = _DAT_4002101c | 4;
    DAT_2000061c = param_1;
  }
  return;
}


////>>0x080074e0>>FUN_080074e0>>////



void FUN_080074e0(int *param_1)

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


////>>0x08007544>>FUN_08007544>>////

undefined4 FUN_08007544(uint param_1)

{
  if (param_1 == 0xffffffff) {
    return 0;
  }
  if (param_1 == 0x40000400) {
    return 0x1d;
  }
  if (param_1 < 0x40000401) {
    if (param_1 == 0x40000000) {
      return 0x1c;
    }
  }
  else {
    if (param_1 == 0x40000800) {
      return 0x1e;
    }
    if (param_1 == 0x40012c00) {
      return 0x19;
    }
  }
  iprintf("TIM: Unknown timer IRQn");
  return 0;
}


////>>0x08007594>>FUN_08007594>>////

undefined4 FUN_08007594(uint param_1)

{
  if (param_1 == 0xffffffff) {
    return 0;
  }
  if (param_1 == 0x40000400) {
    return 1;
  }
  if (param_1 < 0x40000401) {
    if (param_1 == 0x40000000) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x40000800) {
      return 1;
    }
    if (param_1 == 0x40012c00) {
      return 2;
    }
  }
  iprintf("TIM: Unknown timer instance");
  return 0;
}


////>>0x080075dc>>FUN_080075dc>>////

int FUN_080075dc(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_20 = 0;
  HAL_RCC_GetClockConfig(&local_1c,&local_20);
  iVar2 = getTimerClkSrc(param_1);
  uVar1 = local_c;
  uVar3 = local_10;
  if (iVar2 == 1) {
    iVar2 = HAL_RCC_GetPCLK1Freq();
  }
  else if (iVar2 == 2) {
    iVar2 = HAL_RCC_GetPCLK2Freq();
    uVar3 = uVar1;
  }
  else {
    iprintf("TIM: Unknown clock source");
    iVar2 = 0;
    uVar3 = 0;
  }
  if (uVar3 != 0x500) {
    if (uVar3 < 0x501) {
      if (uVar3 != 0x400) {
        return iVar2;
      }
    }
    else if ((uVar3 != 0x600) && (uVar3 != 0x700)) {
      return iVar2;
    }
  }
  return iVar2 << 1;
}


////>>0x08007648>>FUN_08007648>>////

void FUN_08007648(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  puVar4 = param_1 + 1;
  *param_1 = 0x40000000;
  param_1[1] = 0x40000000;
  param_1[4] = param_2;
  uVar2 = getTimerClkFreq();
  param_1[2] = uVar2 / 1000000 - 1;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[0x13] = param_4;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_30 = param_3;
  cVar1 = getTimerIrq(*param_1);
  HAL_NVIC_SetPriority((int)cVar1,0xe,0);
  cVar1 = getTimerIrq(*param_1);
  HAL_NVIC_EnableIRQ((int)cVar1);
  iVar3 = HAL_TIM_OC_Init(puVar4);
  if ((iVar3 == 0) && (iVar3 = HAL_TIM_OC_ConfigChannel(puVar4,&local_34,0), iVar3 == 0)) {
    HAL_TIM_OC_Start_IT(puVar4,0);
  }
  return;
}


////>>0x080076e0>>FUN_080076e0>>////

void FUN_080076e0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  param_1[0x13] = 0;
  cVar1 = getTimerIrq(*param_1);
  HAL_NVIC_DisableIRQ((int)cVar1);
  iVar2 = HAL_TIM_OC_DeInit(param_1 + 1);
  if (iVar2 == 0) {
    HAL_TIM_OC_Stop_IT(param_1 + 1,0);
  }
  return;
}


////>>0x08007708>>FUN_08007708>>////

void FUN_08007708(void)

{
  timer_enable_clock();
  return;
}


////>>0x08007710>>FUN_08007710>>////

void FUN_08007710(void)

{
  timer_disable_clock();
  return;
}


////>>0x08007718>>FUN_08007718>>////

int FUN_08007718(int param_1)

{
  return param_1 + -4;
}


////>>0x0800771c>>FUN_0800771c>>////

void FUN_0800771c(int param_1)

{
  int iVar1;
  
  iVar1 = get_timer_obj();
  if ((*(code **)(iVar1 + 0x4c) != (code *)0x0) && (*(char *)(param_1 + 0x1c) == '\x01')) {
    (**(code **)(iVar1 + 0x4c))(iVar1,0);
  }
  return;
}


////>>0x08007736>>FUN_08007736>>////

void FUN_08007736(void)

{
  int iVar1;
  
  iVar1 = get_timer_obj();
  if (*(code **)(iVar1 + 0x48) != (code *)0x0) {
    (**(code **)(iVar1 + 0x48))();
  }
  return;
}


////>>0x08007744>>FUN_08007744>>////

undefined4 FUN_08007744(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + 0x24);
}


////>>0x0800774a>>FUN_0800774a>>////

void FUN_0800774a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x24) = param_2;
  return;
}


////>>0x08007750>>FUN_08007750>>////

void FUN_08007750(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x34 + param_2 * 4) = param_3;
  return;
}


////>>0x080077b0>>FUN_080077b0>>////



void FUN_080077b0(int *param_1,int param_2,int param_3,int param_4,undefined param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  if (param_1 != (int *)0x0) {
    piVar6 = param_1 + 1;
    iVar1 = pinmap_peripheral((int)*(char *)(param_1 + 0x16),&DAT_0800a69c);
    iVar2 = pinmap_peripheral((int)*(char *)((int)param_1 + 0x59),&DAT_0800a66c);
    if ((iVar1 == 0) || (iVar2 == 0)) {
      iprintf("ERROR: at least one I2C pin has no peripheral\n");
    }
    else {
      iVar1 = pinmap_merge_peripheral(iVar1,iVar2);
      *param_1 = iVar1;
      if (iVar1 == 0) {
        iprintf("ERROR: I2C pins mismatch\n");
      }
      else {
        if (iVar1 == 0x40005400) {
          _DAT_4002101c = _DAT_4002101c | 0x200000;
          _DAT_40021010 = _DAT_40021010 & 0xffdfffff;
          *(undefined *)((int)param_1 + 0x5a) = 0x1f;
          *(undefined *)((int)param_1 + 0x5b) = 0x20;
          DAT_20000668 = piVar6;
        }
        if (*param_1 == 0x40005800) {
          _DAT_4002101c = _DAT_4002101c | 0x400000;
          _DAT_40021010 = _DAT_40021010 & 0xffbfffff;
          *(undefined *)((int)param_1 + 0x5a) = 0x21;
          *(undefined *)((int)param_1 + 0x5b) = 0x22;
          DAT_2000066c = piVar6;
        }
        uVar3 = set_GPIO_Port_Clock((uint)((int)*(char *)((int)param_1 + 0x59) << 0x18) >> 0x1c);
        local_38 = 1 << ((int)*(char *)((int)param_1 + 0x59) & 0xfU) & 0xffff;
        uVar4 = pinmap_function((int)*(char *)((int)param_1 + 0x59),&DAT_0800a66c);
        uVar5 = pinmap_function((int)*(char *)((int)param_1 + 0x59),&DAT_0800a66c);
        local_34 = (uVar4 >> 3 & 1) << 4 | uVar5 & 7;
        local_2c = 3;
        iVar1 = pinmap_function((int)*(char *)((int)param_1 + 0x59),&DAT_0800a66c);
        local_30 = (uint)(iVar1 << 0x1a) >> 0x1e;
        iVar1 = pinmap_function((int)*(char *)((int)param_1 + 0x59),&DAT_0800a66c);
        _DAT_40021018 = _DAT_40021018 | 1;
        uVar5 = 1;
        uVar4 = _DAT_40021018;
        switch((uint)(iVar1 << 0x11) >> 0x19) {
        case 1:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000001;
          _DAT_40010004 = uVar5;
          break;
        case 2:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffffe | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 3:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000002;
          _DAT_40010004 = uVar5;
          break;
        case 4:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffffd | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 5:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000004;
          _DAT_40010004 = uVar5;
          break;
        case 6:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffffb | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 7:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000008;
          _DAT_40010004 = uVar5;
          break;
        case 8:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffff7 | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 9:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000030;
          _DAT_40010004 = uVar5;
          break;
        case 10:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffffcf | 0x7000010;
          _DAT_40010004 = uVar5;
          break;
        case 0xb:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffffcf | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0xc:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x70000c0;
          _DAT_40010004 = uVar5;
          break;
        case 0xd:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffff3f | 0x7000040;
          _DAT_40010004 = uVar5;
          break;
        case 0xe:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffff3f | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0xf:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000300;
          _DAT_40010004 = uVar5;
          break;
        case 0x10:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffcff | 0x7000200;
          _DAT_40010004 = uVar5;
          break;
        case 0x11:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffcff | 0x7000100;
          _DAT_40010004 = uVar5;
          break;
        case 0x12:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffcff | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x13:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000c00;
          _DAT_40010004 = uVar5;
          break;
        case 0x14:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffff3ff | 0x7000800;
          _DAT_40010004 = uVar5;
          break;
        case 0x15:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffff3ff | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x16:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7001000;
          _DAT_40010004 = uVar5;
          break;
        case 0x17:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffefff | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x1b:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7008000;
          _DAT_40010004 = uVar5;
          break;
        case 0x1c:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffff7fff | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x21:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xf8ffffff;
          _DAT_40010004 = uVar5;
          break;
        case 0x22:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xf8ffffff | 0x1000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x23:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xf8ffffff | 0x2000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x24:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xf8ffffff | 0x4000000;
          _DAT_40010004 = uVar5;
        }
        HAL_GPIO_Init(uVar3,&local_38,uVar4,uVar5);
        uVar3 = set_GPIO_Port_Clock((uint)((int)*(char *)(param_1 + 0x16) << 0x18) >> 0x1c);
        local_38 = 1 << ((int)*(char *)(param_1 + 0x16) & 0xfU) & 0xffff;
        uVar4 = pinmap_function((int)*(char *)(param_1 + 0x16),&DAT_0800a69c);
        uVar5 = pinmap_function((int)*(char *)(param_1 + 0x16),&DAT_0800a69c);
        local_34 = (uVar4 >> 3 & 1) << 4 | uVar5 & 7;
        local_2c = 3;
        iVar1 = pinmap_function((int)*(char *)(param_1 + 0x16),&DAT_0800a69c);
        local_30 = (uint)(iVar1 << 0x1a) >> 0x1e;
        iVar1 = pinmap_function((int)*(char *)(param_1 + 0x16),&DAT_0800a69c);
        _DAT_40021018 = _DAT_40021018 | 1;
        uVar5 = 1;
        uVar4 = _DAT_40021018;
        switch((uint)(iVar1 << 0x11) >> 0x19) {
        case 1:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000001;
          _DAT_40010004 = uVar5;
          break;
        case 2:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffffe | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 3:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000002;
          _DAT_40010004 = uVar5;
          break;
        case 4:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffffd | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 5:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000004;
          _DAT_40010004 = uVar5;
          break;
        case 6:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffffb | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 7:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000008;
          _DAT_40010004 = uVar5;
          break;
        case 8:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffff7 | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 9:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000030;
          _DAT_40010004 = uVar5;
          break;
        case 10:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffffcf | 0x7000010;
          _DAT_40010004 = uVar5;
          break;
        case 0xb:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffffcf | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0xc:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x70000c0;
          _DAT_40010004 = uVar5;
          break;
        case 0xd:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffff3f | 0x7000040;
          _DAT_40010004 = uVar5;
          break;
        case 0xe:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffff3f | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0xf:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000300;
          _DAT_40010004 = uVar5;
          break;
        case 0x10:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffcff | 0x7000200;
          _DAT_40010004 = uVar5;
          break;
        case 0x11:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffcff | 0x7000100;
          _DAT_40010004 = uVar5;
          break;
        case 0x12:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffffcff | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x13:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7000c00;
          _DAT_40010004 = uVar5;
          break;
        case 0x14:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffff3ff | 0x7000800;
          _DAT_40010004 = uVar5;
          break;
        case 0x15:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xfffff3ff | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x16:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7001000;
          _DAT_40010004 = uVar5;
          break;
        case 0x17:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffffefff | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x1b:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 | 0x7008000;
          _DAT_40010004 = uVar5;
          break;
        case 0x1c:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xffff7fff | 0x7000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x21:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xf8ffffff;
          _DAT_40010004 = uVar5;
          break;
        case 0x22:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xf8ffffff | 0x1000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x23:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xf8ffffff | 0x2000000;
          _DAT_40010004 = uVar5;
          break;
        case 0x24:
          uVar4 = 0x40010000;
          uVar5 = _DAT_40010004 & 0xf8ffffff | 0x4000000;
          _DAT_40010004 = uVar5;
        }
        HAL_GPIO_Init(uVar3,&local_38,uVar4,uVar5);
        param_1[1] = *param_1;
        param_1[2] = param_2;
        param_1[3] = 0;
        param_1[4] = param_4;
        param_1[7] = 0xff;
        param_1[5] = param_3;
        param_1[6] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        *(undefined *)((int)param_1 + 0x41) = 0;
        HAL_NVIC_SetPriority((int)*(char *)((int)param_1 + 0x5a),0,1);
        HAL_NVIC_EnableIRQ((int)*(char *)((int)param_1 + 0x5a));
        HAL_NVIC_SetPriority((int)*(char *)((int)param_1 + 0x5b),0,1);
        HAL_NVIC_EnableIRQ((int)*(char *)((int)param_1 + 0x5b));
        HAL_I2C_Init(piVar6);
        *(undefined *)((int)param_1 + 0x5d) = param_5;
      }
    }
    return;
  }
  return;
}


////>>0x08007e74>>FUN_08007e74>>////

int FUN_08007e74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = param_4;
  iVar1 = HAL_GetTick();
  uVar3 = 0;
  iVar4 = 2;
  do {
    iVar5 = param_1 + 4;
    iVar2 = HAL_I2C_Master_Transmit_IT(iVar5,param_2,param_3,param_4,uVar6);
    if (iVar2 == 0) {
      iVar4 = 0;
      while ((iVar2 = HAL_I2C_GetState(iVar5), iVar2 != 0x20 && (iVar4 == 0))) {
        iVar2 = HAL_GetTick();
        uVar3 = iVar2 - iVar1;
        if (uVar3 < 0x65) {
          iVar2 = HAL_I2C_GetError(iVar5);
          if (iVar2 != 0) {
            iVar4 = 2;
          }
        }
        else {
          iVar4 = 1;
        }
      }
    }
    iVar2 = HAL_I2C_GetError(iVar5);
  } while ((iVar2 == 4) && (uVar3 < 100));
  return iVar4;
}


////>>0x08007ede>>FUN_08007ede>>////

undefined4 FUN_08007ede(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (0x20 < param_3) {
    return 2;
  }
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xff) {
    *(undefined *)(param_1 + uVar1 + 0x68) = *(undefined *)(param_2 + uVar1);
    *(char *)(param_1 + 0x88) = *(char *)(param_1 + 0x88) + '\x01';
  }
  return 0;
}


////>>0x08007f0e>>FUN_08007f0e>>////

int FUN_08007f0e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = param_4;
  iVar1 = HAL_GetTick();
  uVar3 = 0;
  iVar4 = 2;
  do {
    iVar5 = param_1 + 4;
    iVar2 = HAL_I2C_Master_Receive_IT(iVar5,param_2,param_3,param_4,uVar6);
    if (iVar2 == 0) {
      iVar4 = 0;
      while ((iVar2 = HAL_I2C_GetState(iVar5), iVar2 != 0x20 && (iVar4 == 0))) {
        iVar2 = HAL_GetTick();
        uVar3 = iVar2 - iVar1;
        if (uVar3 < 0x65) {
          iVar2 = HAL_I2C_GetError(iVar5);
          if (iVar2 != 0) {
            iVar4 = 2;
          }
        }
        else {
          iVar4 = 1;
        }
      }
    }
    iVar2 = HAL_I2C_GetError(iVar5);
  } while ((iVar2 == 4) && (uVar3 < 100));
  return iVar4;
}


////>>0x08007f78>>FUN_08007f78>>////

int FUN_08007f78(int param_1)

{
  return param_1 + -4;
}


////>>0x08007f7c>>FUN_08007f7c>>////

void FUN_08007f7c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(int *)(param_1 + 0x60) = param_2;
      HAL_I2C_EnableListen_IT(param_1 + 4);
    }
    return;
  }
  return;
}


////>>0x08007f8e>>FUN_08007f8e>>////

void FUN_08007f8e(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(int *)(param_1 + 100) = param_2;
      HAL_I2C_EnableListen_IT(param_1 + 4);
    }
    return;
  }
  return;
}


////>>0x08007fa0>>FUN_08007fa0>>////

void FUN_08007fa0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = get_i2c_obj();
  if (param_3 == *(int *)(param_1 + 0xc)) {
    if (param_2 == 0) {
      *(undefined *)(iVar1 + 0x88) = 0;
      *(undefined *)(iVar1 + 0x5c) = 0;
      if (*(code **)(iVar1 + 100) != (code *)0x0) {
        (**(code **)(iVar1 + 100))();
      }
      HAL_I2C_Slave_Sequential_Transmit_IT(param_1,iVar1 + 0x68,*(undefined *)(iVar1 + 0x88),8);
      return;
    }
    *(undefined *)(iVar1 + 0x5c) = 1;
    HAL_I2C_Slave_Sequential_Receive_IT(param_1,iVar1 + 0x68,0x20,8,param_4);
  }
  return;
}


////>>0x08007ff0>>FUN_08007ff0>>////

void FUN_08007ff0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = get_i2c_obj();
  if (((*(code **)(iVar1 + 0x60) != (code *)0x0) && (*(char *)(iVar1 + 0x5c) == '\x01')) &&
     (*(char *)(iVar1 + 0x2c) != ' ')) {
    (**(code **)(iVar1 + 0x60))(iVar1 + 0x68);
  }
  HAL_I2C_EnableListen_IT(param_1);
  return;
}


////>>0x08008020>>FUN_08008020>>////

void FUN_08008020(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = get_i2c_obj();
  if (*(char *)(iVar1 + 0x5d) == '\0') {
    HAL_I2C_EnableListen_IT(param_1);
  }
  return;
}


////>>0x08008078>>FUN_08008078>>////



void FUN_08008078(int *param_1)

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
    iVar1 = pinmap_peripheral((int)*(char *)(param_1 + 0x16),&DAT_0800a864);
    iVar2 = pinmap_peripheral((int)*(char *)((int)param_1 + 0x59),&DAT_0800a81c);
    if ((iVar2 == 0) || (iVar1 == 0)) {
      iprintf("ERROR: at least one UART pin has no peripheral\n",iVar2);
    }
    else {
      iVar1 = pinmap_merge_peripheral(iVar1);
      *param_1 = iVar1;
      if (iVar1 == 0) {
        iprintf("ERROR: U(S)ART pins mismatch\n");
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
        uVar3 = set_GPIO_Port_Clock((uint)((int)*(char *)((int)param_1 + 0x59) << 0x18) >> 0x1c);
        uVar4 = pinmap_function((int)*(char *)((int)param_1 + 0x59),&DAT_0800a81c);
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
        HAL_GPIO_Init(uVar3,&local_20);
        uVar3 = set_GPIO_Port_Clock((uint)((int)*(char *)(param_1 + 0x16) << 0x18) >> 0x1c);
        uVar4 = pinmap_function((int)*(char *)(param_1 + 0x16),&DAT_0800a864);
        local_20 = 1 << (*(byte *)(param_1 + 0x16) & 0xf) & 0xffff;
        local_1c = (uVar4 >> 3 & 1) << 4 | uVar4 & 7;
        local_18 = (uVar4 << 0x1a) >> 0x1e;
        HAL_GPIO_Init(uVar3,&local_20);
        (&DAT_200006c0)[*(byte *)(param_1 + 0x11)] = param_1 + 1;
        param_1[1] = *param_1;
        param_1[2] = param_1[0x12];
        param_1[3] = param_1[0x13];
        param_1[4] = param_1[0x14];
        param_1[5] = param_1[0x15];
        param_1[6] = 0xc;
        param_1[7] = 0;
        param_1[8] = 0;
        HAL_UART_Init(param_1 + 1);
      }
    }
    return;
  }
  return;
}


////>>0x080084b0>>FUN_080084b0>>////

void FUN_080084b0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pinmap_peripheral(2,&DAT_0800a864);
  if (iVar1 != 0) {
    uVar2 = pinmap_peripheral(2,&DAT_0800a864);
    DAT_20000075 = pinmap_pin(uVar2,&DAT_0800a81c);
    DAT_20000074 = 2;
    DAT_20000064 = 0x2580;
    DAT_20000070 = 0;
    DAT_20000068 = 0;
    DAT_2000006c = 0;
    uart_init(&DAT_2000001c);
  }
  return;
}


////>>0x08008500>>FUN_08008500>>////

uint FUN_08008500(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = HAL_GetTick();
  iVar2 = pinmap_peripheral(2,&DAT_0800a864);
  if (iVar2 == 0) {
    return 0;
  }
  for (uVar3 = 0;
      (uVar3 < 5 &&
      (((&DAT_200006c0)[uVar3] == 0 ||
       (iVar2 = pinmap_peripheral(2,&DAT_0800a864), *(int *)(&DAT_200006c0)[uVar3] != iVar2))));
      uVar3 = uVar3 + 1 & 0xff) {
  }
  if (4 < uVar3) {
    if ((4 < DAT_20000060) && (uart_debug_init(), 4 < DAT_20000060)) {
      return 0;
    }
    uVar3 = (uint)DAT_20000060;
  }
  do {
    iVar2 = HAL_UART_Transmit((&DAT_200006c0)[uVar3],param_1,param_2 & 0xffff,1000);
    if (iVar2 == 0) {
      return param_2;
    }
    iVar2 = HAL_GetTick();
  } while ((uint)(iVar2 - iVar1) < 1000);
  return 0;
}


////>>0x080085b8>>FUN_080085b8>>////

bool FUN_080085b8(int param_1)

{
  uint uVar1;
  
  uVar1 = HAL_UART_GetState((&DAT_200006c0)[*(byte *)(param_1 + 0x44)]);
  return (uVar1 & 0x22) == 0x22;
}


////>>0x080085dc>>FUN_080085dc>>////

bool FUN_080085dc(int param_1)

{
  uint uVar1;
  
  uVar1 = HAL_UART_GetState((&DAT_200006c0)[*(byte *)(param_1 + 0x44)]);
  return (uVar1 & 0x21) == 0x21;
}


////>>0x08008600>>FUN_08008600>>////

undefined4 FUN_08008600(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar1 = serial_rx_active();
  if (iVar1 == 0) {
    *param_2 = *(undefined *)(param_1 + 0x45);
    HAL_UART_Receive_IT((&DAT_200006c0)[*(byte *)(param_1 + 0x44)],param_1 + 0x45,1,&DAT_200006c0,
                        param_4);
    return 0;
  }
  return 0xffffffff;
}


////>>0x0800863c>>FUN_0800863c>>////

void FUN_0800863c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = serial_rx_active();
    if (iVar1 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + 0x44);
      *(undefined4 *)(&DAT_20000670 + uVar2 * 4) = param_2;
      *(int *)(&DAT_20000684 + uVar2 * 4) = param_1;
      HAL_NVIC_SetPriority((int)*(char *)(param_1 + 0x5a),0,1,uVar2,param_4);
      HAL_NVIC_EnableIRQ((int)*(char *)(param_1 + 0x5a));
      HAL_UART_Receive_IT((&DAT_200006c0)[*(byte *)(param_1 + 0x44)],param_1 + 0x45,1);
    }
    return;
  }
  return;
}


////>>0x08008694>>FUN_08008694>>////

void FUN_08008694(int param_1,undefined4 param_2)

{
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = *(byte *)(param_1 + 0x44);
    *(undefined4 *)(&DAT_20000698 + (uint)bVar1 * 4) = param_2;
    *(int *)(&DAT_200006ac + (uint)bVar1 * 4) = param_1;
    HAL_NVIC_SetPriority((int)*(char *)(param_1 + 0x5a),0,2);
    HAL_NVIC_EnableIRQ((int)*(char *)(param_1 + 0x5a));
    HAL_UART_Transmit_IT
              ((&DAT_200006c0)[*(byte *)(param_1 + 0x44)],
               *(int *)(param_1 + 100) + (uint)*(ushort *)(param_1 + 0x6a),1);
    return;
  }
  return;
}


////>>0x080086e8>>FUN_080086e8>>////

uint FUN_080086e8(int param_1)

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
      if (param_1 == (&DAT_200006c0)[uVar1]) break;
      uVar1 = uVar1 + 1 & 0xff;
    }
  }
  return uVar1;
}


////>>0x0800870c>>FUN_0800870c>>////

void FUN_0800870c(void)

{
  uint uVar1;
  
  uVar1 = uart_index();
  if (uVar1 < 5) {
    (**(code **)(&DAT_20000670 + uVar1 * 4))(*(undefined4 *)(&DAT_20000684 + uVar1 * 4));
  }
  return;
}


////>>0x08008730>>FUN_08008730>>////

void FUN_08008730(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = uart_index();
  iVar3 = *(int *)(&DAT_200006ac + uVar1 * 4);
  if ((uVar1 < 5) && (iVar2 = (**(code **)(&DAT_20000698 + uVar1 * 4))(iVar3), iVar2 != -1)) {
    HAL_UART_Transmit_IT
              ((&DAT_200006c0)[*(byte *)(iVar3 + 0x44)],
               *(int *)(iVar3 + 100) + (uint)*(ushort *)(iVar3 + 0x6a),1);
  }
  return;
}


////>>0x0800877c>>FUN_0800877c>>////

void FUN_0800877c(void)

{
  return;
}


////>>0x08008804>>FUN_08008804>>////

undefined * FUN_08008804(int param_1)

{
  undefined *puVar1;
  
  if (DAT_200006d4 == (undefined *)0x0) {
    DAT_200006d4 = &DAT_20000a3c;
  }
  puVar1 = DAT_200006d4;
  if (DAT_200006d4 + param_1 <= &stack0x00000000) {
    DAT_200006d4 = DAT_200006d4 + param_1;
    return puVar1;
  }
  DAT_20000a38 = 0xc;
  return (undefined *)0xffffffff;
}


////>>0x08008840>>FUN_08008840>>////

undefined4 FUN_08008840(void)

{
  return 0xffffffff;
}


////>>0x08008846>>FUN_08008846>>////

undefined4 FUN_08008846(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}


////>>0x08008850>>FUN_08008850>>////

undefined4 FUN_08008850(void)

{
  return 1;
}


////>>0x08008854>>FUN_08008854>>////

undefined4 FUN_08008854(void)

{
  return 0;
}


////>>0x08008858>>FUN_08008858>>////

undefined4 FUN_08008858(void)

{
  return 0;
}


////>>0x0800885c>>FUN_0800885c>>////

void FUN_0800885c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uart_debug_write(param_2,param_3,param_3,param_4,param_4);
  return;
}


////>>0x08008868>>FUN_08008868>>////

void FUN_08008868(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x0800886c>>FUN_0800886c>>////

undefined4 FUN_0800886c(void)

{
  DAT_20000a38 = 0x16;
  return 0xffffffff;
}


////>>0x0800887c>>FUN_0800887c>>////

undefined4 FUN_0800887c(void)

{
  return 1;
}


////>>0x08008880>>FUN_08008880>>////

uint FUN_08008880(uint param_1)

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
    cVar2 = (&DAT_0800a908)[param_1];
  }
  else {
    cVar2 = -1;
  }
  if (cVar2 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = adc_read_value();
    if (DAT_20000088 != 0xc) {
      if (DAT_20000088 < 0xc) {
        return uVar3 >> (0xc - DAT_20000088 & 0xff);
      }
      return uVar3 << (DAT_20000088 - 0xc & 0xff);
    }
  }
  return uVar3;
}


////>>0x080088e0>>FUN_080088e0>>////

void FUN_080088e0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0x3c) {
    iVar2 = (int)(char)(&DAT_0800a908)[param_1];
  }
  else {
    iVar2 = -1;
  }
  if (iVar2 != -1) {
    iVar1 = pin_in_pinmap(iVar2,&DAT_0800a6cc);
    if (iVar1 == 0) {
      pinMode(param_1,1);
      if (DAT_2000008c != 8) {
        if (DAT_2000008c < 9) {
          param_2 = param_2 << (8 - DAT_2000008c & 0xff);
        }
        else {
          param_2 = param_2 >> (DAT_2000008c - 8 & 0xff);
        }
      }
      if (param_2 < 0x80) {
        digitalWrite(param_1,0);
      }
      else {
        digitalWrite(param_1,1);
      }
    }
    else {
      iVar1 = is_pin_configured(iVar2,&DAT_200006d8);
      if (iVar1 == 0) {
        set_pin_configured(iVar2,&DAT_200006d8);
      }
      if (DAT_2000008c != 8) {
        if (DAT_2000008c < 9) {
          param_2 = param_2 << (8 - DAT_2000008c & 0xff);
        }
        else {
          param_2 = param_2 >> (DAT_2000008c - 8 & 0xff);
        }
      }
      pwm_start(iVar2,0x3e418,0xff,param_2,iVar1 == 0);
    }
  }
  return;
}


////>>0x08008990>>FUN_08008990>>////

void FUN_08008990(uint param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_1 < 0x3c) {
    iVar3 = (int)(char)(&DAT_0800a908)[param_1];
    puVar2 = &DAT_0800a908;
  }
  else {
    iVar3 = -1;
    puVar2 = param_4;
  }
  if (iVar3 != -1) {
    iVar1 = is_pin_configured(iVar3,&DAT_200006d8,param_3,puVar2,param_4);
    if (iVar1 != 0) {
      iVar1 = pin_in_pinmap(iVar3,&DAT_0800a6cc);
      if (iVar1 != 0) {
        pwm_stop(iVar3);
      }
      reset_pin_configured(iVar3,&DAT_200006d8);
    }
    switch(param_2) {
    case 0:
      digital_io_init(iVar3,0);
      break;
    case 1:
      digital_io_init(iVar3,1,0);
      break;
    case 2:
      digital_io_init(iVar3,0,1);
      break;
    case 3:
      digital_io_init(iVar3,0,2);
    }
    set_pin_configured(iVar3,&DAT_200006ec);
  }
  return;
}


////>>0x08008a24>>FUN_08008a24>>////

void FUN_08008a24(uint param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  if (param_1 < 0x3c) {
    uVar4 = (uint)(char)(&DAT_0800a908)[param_1];
    puVar3 = &DAT_0800a908;
  }
  else {
    uVar4 = 0xffffffff;
    puVar3 = param_4;
  }
  if ((uVar4 != 0xffffffff) &&
     (iVar1 = is_pin_configured(uVar4,&DAT_200006ec,param_3,puVar3,param_4), iVar1 != 0)) {
    uVar2 = get_GPIO_Port((uVar4 << 0x18) >> 0x1c);
    digital_io_write(uVar2,1 << (uVar4 & 0xf) & 0xffff,param_2);
  }
  return;
}


////>>0x08008a6c>>FUN_08008a6c>>////

char FUN_08008a6c(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 < 0x3c) {
    uVar4 = (uint)(char)(&DAT_0800a908)[param_1];
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (uVar4 == 0xffffffff) {
    cVar1 = '\0';
  }
  else {
    iVar2 = is_pin_configured(uVar4,&DAT_200006ec);
    if (iVar2 == 0) {
      cVar1 = '\0';
    }
    else {
      uVar3 = get_GPIO_Port((uVar4 << 0x18) >> 0x1c);
      cVar1 = digital_io_read(uVar3,1 << (uVar4 & 0xf) & 0xffff);
    }
  }
  if (cVar1 != '\0') {
    cVar1 = '\x01';
  }
  return cVar1;
}


////>>0x08008abc>>FUN_08008abc>>////

void FUN_08008abc(void)

{
  GetCurrentMilli();
  return;
}


////>>0x08008ac4>>FUN_08008ac4>>////

void FUN_08008ac4(void)

{
  return;
}


////>>0x08008afa>>FUN_08008afa>>////

ushort FUN_08008afa(int param_1)

{
  return (*(short *)(param_1 + 0x134) + 0x40) - *(short *)(param_1 + 0x136) & 0x3f;
}


////>>0x08008b66>>FUN_08008b66>>////

void FUN_08008b66(int param_1)

{
  int iVar1;
  ushort uVar2;
  undefined local_9;
  
  iVar1 = uart_getc(param_1,&local_9);
  if ((iVar1 == 0) &&
     (uVar2 = *(short *)(param_1 + 0x60) + 1U & 0x3f, uVar2 != *(ushort *)(param_1 + 0x62))) {
    *(undefined *)(*(int *)(param_1 + 0x5c) + (uint)*(ushort *)(param_1 + 0x60)) = local_9;
    *(ushort *)(param_1 + 0x60) = uVar2;
  }
  return;
}


////>>0x08008bf4>>FUN_08008bf4>>////

/* WARNING: Removing unreachable block (ram,0x08008bfa) */
/* WARNING: Removing unreachable block (ram,0x08008c0c) */
/* WARNING: Removing unreachable block (ram,0x08008c02) */
/* WARNING: Removing unreachable block (ram,0x08008c14) */

void FUN_08008bf4(void)

{
  return;
}


////>>0x08008c20>>FUN_08008c20>>////

void FUN_08008c20(int param_1)

{
  *(int *)(param_1 + 0x130) = param_1 + 0x11;
  *(undefined2 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x136) = 0;
  *(int *)(param_1 + 0x138) = param_1 + 0x51;
  *(undefined2 *)(param_1 + 0x13c) = 0;
  *(undefined2 *)(param_1 + 0x13e) = 0;
  return;
}


////>>0x08008c44>>FUN_08008c44>>////

void FUN_08008c44(int param_1,undefined4 param_2,byte param_3)

{
  uint extraout_r1;
  byte bVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  *(byte *)(param_1 + 0x140) = param_3;
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
    uart_init(param_1 + 0xd4);
    uart_attach_rx_callback(param_1 + 0xd4,0x8008b67);
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x8008cee;
  __assert_func("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/cores/arduino/HardwareSerial.cpp"
                ,299,"void HardwareSerial::begin(long unsigned int, byte)","databits!=0");
  if (extraout_r1 < 0x3c) {
    uRam0000012d = (&DAT_0800a908)[extraout_r1];
  }
  else {
    uRam0000012d = 0xff;
  }
                    /* WARNING: Could not recover jumptable at 0x08008d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,extraout_r1,&stack0x00000148);
  return;
}


////>>0x08008d00>>FUN_08008d00>>////

void FUN_08008d00(int param_1,uint param_2)

{
  undefined uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 < 0x3c) {
    uVar1 = (&DAT_0800a908)[param_2];
  }
  else {
    uVar1 = 0xff;
  }
  *(undefined *)(param_1 + 0x12d) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x08008d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x08008d18>>FUN_08008d18>>////

void FUN_08008d18(int param_1,uint param_2)

{
  undefined uVar1;
  
  if (param_2 < 0x3c) {
    uVar1 = (&DAT_0800a908)[param_2];
  }
  else {
    uVar1 = 0xff;
  }
  *(undefined *)(param_1 + 300) = uVar1;
  return;
}


////>>0x08008d30>>FUN_08008d30>>////

undefined4 *
FUN_08008d30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  
  param_1[1] = 0;
  param_1[2] = 1000;
  *param_1 = &PTR_LAB_08008ba4_1_0800aab8;
  if (param_1 == (undefined4 *)&DAT_20000700) {
    setRx(&DAT_20000700,0,param_3,&DAT_20000700,param_4);
    setTx(&DAT_20000700,1);
  }
  else {
    uVar1 = pinmap_pin(param_2,&DAT_0800a81c);
    *(undefined *)((int)param_1 + 0x12d) = uVar1;
    uVar1 = pinmap_pin(param_2,&DAT_0800a864);
    *(undefined *)(param_1 + 0x4b) = uVar1;
  }
  init(param_1);
  return param_1;
}


////>>0x08008d8c>>FUN_08008d8c>>////

void FUN_08008d8c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    HardwareSerial(&DAT_20000700,0x40004400,param_3,0xffff,param_4);
  }
  return;
}


////>>0x08008df8>>FUN_08008df8>>////

void FUN_08008df8(undefined4 *param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  *param_1 = &DAT_0800ab0c;
  *(undefined *)(param_1 + 1) = param_2;
  *(undefined *)((int)param_1 + 5) = param_3;
  *(undefined *)((int)param_1 + 6) = param_4;
  *(undefined *)((int)param_1 + 7) = param_5;
  return;
}


////>>0x08008e14>>FUN_08008e14>>////

void FUN_08008e14(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    IPAddress(&DAT_20000844,0,0,0,0);
    return;
  }
  return;
}


////>>0x08008ef4>>FUN_08008ef4>>////

int FUN_08008ef4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return (uint)((param_5 - param_4) * (param_1 - param_2)) / (uint)(param_3 - param_2) + param_4;
}


////>>0x08008f0c>>FUN_08008f0c>>////

void FUN_08008f0c(void)

{
  return;
}


////>>0x08008f0e>>FUN_08008f0e>>////

void FUN_08008f0e(void)

{
  HAL_NVIC_SetPriorityGrouping(3);
  FUN_080036a2();
  return;
}


////>>0x08008f1c>>FUN_08008f1c>>////

void FUN_08008f1c(void)

{
  initVariant();
  setup();
  do {
    loop();
    serialEventRun();
  } while( true );
}


////>>0x08008f3c>>FUN_08008f3c>>////

char FUN_08008f3c(uint param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  for (; param_1 != 1; param_1 = param_1 >> 1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


////>>0x08008f78>>FUN_08008f78>>////

void FUN_08008f78(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 1) {
    return;
  }
  if (param_2 == 0xffff) {
    DAT_2000084c = 6;
    DAT_20000858 = 0;
    DAT_20000860 = 7;
    DAT_2000086c = 0;
    DAT_20000874 = 8;
    DAT_20000880 = 0;
    DAT_20000888 = 9;
    DAT_20000894 = 0;
    DAT_2000089c = 10;
    DAT_200008a8 = 0;
    DAT_200008b0 = 0x17;
    DAT_200008bc = 0;
    DAT_200008c4 = 0x17;
    DAT_200008d0 = 0;
    DAT_200008d8 = 0x17;
    DAT_200008e4 = 0;
    DAT_200008ec = 0x17;
    DAT_200008f8 = 0;
    DAT_20000900 = 0x17;
    DAT_2000090c = 0;
    DAT_20000914 = 0x28;
    DAT_20000920 = 0;
    DAT_20000928 = 0x28;
    DAT_20000934 = 0;
    DAT_2000093c = 0x28;
    DAT_20000948 = 0;
    DAT_20000950 = 0x28;
    DAT_2000095c = 0;
    DAT_20000964 = 0x28;
    DAT_20000970 = 0;
    DAT_20000978 = 0x28;
    DAT_20000984 = 0;
    __aeabi_atexit(0,&LAB_08008f50_1,&DAT_20000000,&DAT_2000084c,param_4);
  }
  return;
}


////>>0x08009084>>FUN_08009084>>////

void FUN_08009084(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(param_1 + 0xc))();
    return;
  }
  __throw_bad_function_call();
  iVar1 = get_pin_id();
  if ((&DAT_20000858)[iVar1 * 5] != 0) {
    FUN_08009084();
  }
  return;
}


////>>0x08009094>>FUN_08009094>>////

void FUN_08009094(void)

{
  int iVar1;
  
  iVar1 = get_pin_id();
  if ((&DAT_20000858)[iVar1 * 5] != 0) {
    operator()();
  }
  return;
}


////>>0x080090c2>>FUN_080090c2>>////

void FUN_080090c2(undefined4 param_1,undefined4 param_2)

{
  __cxa_atexit(param_2,param_1);
  return;
}


////>>0x080090cc>>FUN_080090cc>>////

void FUN_080090cc(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(DAT_20000090 + 0xc);
  uVar4 = param_4;
  if (param_3 == (char *)0x0) goto LAB_080090f0;
  pcVar2 = ", function: ";
  do {
    fiprintf(uVar1,"assertion \"%s\" failed: file \"%s\", line %d%s%s\n",param_4,param_1,param_2,
             pcVar2,param_3,uVar4);
    uVar3 = abort();
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = (undefined4)uVar3;
LAB_080090f0:
    param_3 = "";
    pcVar2 = param_3;
  } while( true );
}


////>>0x08009108>>FUN_08009108>>////

/* WARNING: Removing unreachable block (ram,0x08009110) */

longlong FUN_08009108(undefined4 param_1,uint param_2)

{
  return (ulonglong)param_2 << 0x20;
}


////>>0x08009124>>FUN_08009124>>////

void FUN_08009124(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  _vfiprintf_r(DAT_20000090,param_1,param_2,&uStack_8,param_1,&uStack_8);
  return;
}


////>>0x08009148>>FUN_08009148>>////

void FUN_08009148(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    (*(code *)(&DAT_0800abe4)[iVar1])();
  }
  _init();
  for (iVar1 = 0; iVar1 != 0xc; iVar1 = iVar1 + 1) {
    (*(code *)(&DAT_0800abe4)[iVar1])();
  }
  return;
}


////>>0x08009190>>FUN_08009190>>////

void FUN_08009190(undefined4 param_1)

{
  _malloc_r(DAT_20000090,param_1);
  return;
}


////>>0x080091a0>>FUN_080091a0>>////

void FUN_080091a0(undefined4 param_1)

{
  _free_r(DAT_20000090,param_1);
  return;
}


////>>0x080091b0>>FUN_080091b0>>////

void FUN_080091b0(int param_1,undefined *param_2,int param_3)

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


////>>0x080091c6>>FUN_080091c6>>////

void FUN_080091c6(undefined *param_1,undefined param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = param_1 + param_3;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    *param_1 = param_2;
  }
  return;
}


////>>0x080091d8>>FUN_080091d8>>////

void FUN_080091d8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  ppiVar2 = (int **)&DAT_2000098c;
  if (DAT_2000098c == (int **)0x0) {
    ppiVar5[1] = (int *)0x0;
    ppiVar1 = extraout_r1;
    DAT_2000098c = ppiVar5;
  }
  else {
    ppiVar2 = DAT_2000098c;
    if (ppiVar5 < DAT_2000098c) {
      ppiVar1 = (int **)*ppiVar5;
      ppiVar2 = (int **)((int)ppiVar5 + (int)ppiVar1);
      if (DAT_2000098c == ppiVar2) {
        piVar3 = *DAT_2000098c;
        DAT_2000098c = (int **)DAT_2000098c[1];
        ppiVar2 = (int **)((int)piVar3 + (int)ppiVar1);
        *ppiVar5 = (int *)ppiVar2;
      }
      ppiVar5[1] = (int *)DAT_2000098c;
      DAT_2000098c = ppiVar5;
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


////>>0x08009270>>FUN_08009270>>////

uint FUN_08009270(undefined4 *param_1,uint param_2)

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
    puVar1 = DAT_2000098c;
    puVar5 = DAT_2000098c;
    while (puVar3 = puVar1, puVar3 != (uint *)0x0) {
      uVar4 = *puVar3 - uVar6;
      if (-1 < (int)uVar4) {
        if (uVar4 < 0xc) {
          if (puVar5 == puVar3) {
            puVar1 = (uint *)puVar5[1];
            DAT_2000098c = puVar1;
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
        goto LAB_080092d4;
      }
      puVar5 = puVar3;
      puVar1 = (uint *)puVar3[1];
    }
    if (DAT_20000990 == 0) {
      DAT_20000990 = _sbrk_r(param_1);
    }
    puVar1 = (uint *)_sbrk_r(param_1,uVar6);
    if ((puVar1 != (uint *)0xffffffff) &&
       ((puVar5 = (uint *)((int)puVar1 + 3U & 0xfffffffc), puVar1 == puVar5 ||
        (iVar2 = _sbrk_r(param_1,(int)puVar5 - (int)puVar1), iVar2 != -1)))) {
      *puVar5 = uVar6;
LAB_080092d4:
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


////>>0x0800932c>>FUN_0800932c>>////

uint FUN_0800932c(int param_1,byte param_2,byte **param_3)

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
    __sinit();
  }
  if (param_3 == (byte **)&DAT_0800aba4) {
    param_3 = *(byte ***)(param_1 + 4);
  }
  else if (param_3 == (byte **)&DAT_0800abc4) {
    param_3 = *(byte ***)(param_1 + 8);
  }
  else if (param_3 == (byte **)&DAT_0800ab84) {
    param_3 = *(byte ***)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  pbVar3 = (byte *)(uint)*(ushort *)(param_3 + 3);
  iVar1 = (int)pbVar3 << 0x1c;
  if (((iVar1 < 0) && (pbVar3 = param_3[4], pbVar3 != (byte *)0x0)) ||
     (iVar1 = __swsetup_r(param_1,param_3,iVar1,pbVar3,pbVar2), iVar1 == 0)) {
    uVar4 = (uint)param_2;
    iVar1 = (int)*param_3 - (int)param_3[4];
    if ((iVar1 < (int)param_3[5]) || (iVar1 = _fflush_r(param_1,param_3), iVar1 == 0)) {
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
      iVar1 = _fflush_r(param_1,param_3);
      if (iVar1 == 0) {
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}


////>>0x08009358>>FUN_08009358>>////

int FUN_08009358(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

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


////>>0x0800937c>>FUN_0800937c>>////

/* WARNING: Removing unreachable block (ram,0x08009550) */

int FUN_0800937c(int param_1,undefined4 *param_2,byte *param_3,int *param_4)

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
    __sinit();
  }
  if (param_2 == &DAT_0800aba4) {
    param_2 = *(undefined4 **)(param_1 + 4);
  }
  else if (param_2 == (undefined4 *)&DAT_0800abc4) {
    param_2 = *(undefined4 **)(param_1 + 8);
  }
  else if (param_2 == (undefined4 *)&DAT_0800ab84) {
    param_2 = *(undefined4 **)(param_1 + 0xc);
  }
  if (((-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1c)) || (param_2[4] == 0)) &&
     (iVar6 = __swsetup_r(param_1,param_2), iVar6 != 0)) {
    return -1;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar4 = param_3;
LAB_080093be:
  pbVar5 = pbVar4;
  if (*pbVar5 != 0) goto LAB_08009474;
  goto LAB_080093c8;
LAB_08009474:
  pbVar4 = pbVar5 + 1;
  if (*pbVar5 != 0x25) goto LAB_080093be;
LAB_080093c8:
  iVar6 = (int)pbVar5 - (int)param_3;
  if (iVar6 != 0) {
    iVar1 = __sfputs_r(param_1,param_2,param_3,iVar6);
    if (iVar1 == -1) {
LAB_08009568:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar6;
  }
  if (*pbVar5 == 0) goto LAB_08009568;
  local_88 = 0;
  local_7c = 0;
  local_84 = -1;
  local_80 = 0;
  local_45 = 0;
  local_30 = 0;
  pbVar4 = pbVar5 + 1;
  while( true ) {
    iVar6 = memchr("#-0+ ",*pbVar4);
    param_3 = pbVar4 + 1;
    if (iVar6 == 0) break;
    local_88 = 1 << (iVar6 + 0xf7ff54b0U & 0xff) | local_88;
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
      goto LAB_080094a6;
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
    if (!bVar3) goto LAB_080094a6;
  }
  local_7c = iVar6;
LAB_080094a6:
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
  iVar6 = memchr(&DAT_0800ab56,*param_3,3);
  if (iVar6 != 0) {
    param_3 = param_3 + 1;
    local_88 = local_88 | 0x40 << (iVar6 + 0xf7ff54aaU & 0xff);
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  iVar6 = memchr("efgEFG",local_70,6);
  if (iVar6 == 0) {
    unaff_r9 = _printf_i(param_1,&local_88,param_2,0x8009359,&local_8c);
    if (unaff_r9 == -1) goto LAB_08009568;
  }
  else {
    local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
  }
  local_74 = local_74 + unaff_r9;
  pbVar4 = param_3;
  goto LAB_080093be;
}


////>>0x080095a8>>FUN_080095a8>>////

undefined4
FUN_080095a8(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

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


////>>0x08009698>>FUN_08009698>>////

uint FUN_08009698(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5)

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
          if (bVar1 == 0) goto LAB_08009852;
          if (bVar1 != 0x58) goto LAB_080096c8;
          *(undefined *)((int)param_2 + 0x45) = 0x58;
          pcVar5 = "0123456789ABCDEF";
LAB_080097e2:
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
LAB_08009778:
          *(undefined *)((int)param_2 + 0x43) = 0;
        }
        else {
          if ((bVar1 != 100) && (bVar1 != 0x69)) goto LAB_080096c8;
          uVar9 = *param_2;
          puVar3 = *param_5;
          if ((uVar9 & 0x80) == 0) {
            *param_5 = puVar3 + 1;
            if ((uVar9 & 0x40) == 0) goto LAB_080096e8;
            uVar9 = (uint)(short)*(ushort *)puVar3;
          }
          else {
            *param_5 = puVar3 + 1;
LAB_080096e8:
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
          if (uVar9 != 0) goto LAB_08009816;
LAB_080098c4:
          *(char *)((int)param_2 + 0x42) = *pcVar5;
          pcVar11 = (char *)((int)param_2 + 0x42);
        }
        else {
          *param_2 = *param_2 & 0xfffffffb;
          if (uVar9 == 0) {
            if (uVar10 != 0) goto LAB_080098c4;
          }
          else {
LAB_08009816:
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
        goto LAB_080097be;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      *(char *)((int)param_2 + 0x42) = (char)*puVar3;
LAB_08009728:
      pcVar12 = (char *)((int)param_2 + 0x42);
      uVar9 = 1;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 < 0x74) {
          if (bVar1 == 0x6f) {
LAB_0800974e:
            uVar9 = *param_2;
            puVar3 = *param_5;
            if ((uVar9 & 0x80) == 0) {
              *param_5 = puVar3 + 1;
              if ((uVar9 & 0x40) == 0) goto LAB_0800975c;
              uVar9 = (uint)*(ushort *)puVar3;
            }
            else {
              *param_5 = puVar3 + 1;
LAB_0800975c:
              uVar9 = *puVar3;
            }
            if (bVar1 == 0x6f) {
              uVar6 = 8;
            }
            else {
              uVar6 = 10;
            }
            pcVar5 = "0123456789ABCDEF";
            goto LAB_08009778;
          }
          if (bVar1 == 0x70) {
            *param_2 = *param_2 | 0x20;
LAB_0800970e:
            pcVar5 = "0123456789abcdef";
            *(undefined *)((int)param_2 + 0x45) = 0x78;
            goto LAB_080097e2;
          }
        }
        else {
          if (bVar1 == 0x75) goto LAB_0800974e;
          if (bVar1 == 0x78) goto LAB_0800970e;
        }
LAB_080096c8:
        *(byte *)((int)param_2 + 0x42) = bVar1;
        goto LAB_08009728;
      }
      ppcVar8 = (char **)*param_5;
      *param_5 = (uint *)(ppcVar8 + 1);
      pcVar12 = *ppcVar8;
      iVar2 = memchr(pcVar12,0,param_2[1]);
      if (iVar2 != 0) {
        param_2[1] = iVar2 - (int)pcVar12;
      }
      uVar9 = param_2[1];
    }
    param_2[4] = uVar9;
    *(undefined *)((int)param_2 + 0x43) = 0;
    goto LAB_080097be;
  }
  uVar9 = *param_2;
  ppuVar7 = (uint **)*param_5;
  uVar6 = param_2[5];
  if ((uVar9 & 0x80) == 0) {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
    if ((uVar9 & 0x40) == 0) goto LAB_0800983e;
    *(short *)puVar3 = (short)uVar6;
  }
  else {
    *param_5 = (uint *)(ppuVar7 + 1);
    puVar3 = *ppuVar7;
LAB_0800983e:
    *puVar3 = uVar6;
  }
LAB_08009852:
  param_2[4] = 0;
LAB_080097be:
  iVar2 = _printf_common(param_1,param_2,local_24,param_3,param_4);
  if ((iVar2 == -1) || (iVar2 = (*param_4)(param_1,param_3,pcVar12,param_2[4]), iVar2 == -1)) {
LAB_080097d2:
    uVar9 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar2 = 0; iVar2 < (int)(param_2[3] - local_24[0]); iVar2 = iVar2 + 1) {
        iVar4 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar4 == -1) goto LAB_080097d2;
      }
    }
    uVar9 = param_2[3];
    if ((int)param_2[3] < (int)local_24[0]) {
      uVar9 = local_24[0];
    }
  }
  return uVar9;
}


////>>0x080098d8>>FUN_080098d8>>////

void FUN_080098d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_20000090;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((DAT_20000090 != 0) && (*(int *)(DAT_20000090 + 0x18) == 0)) {
    __sinit(DAT_20000090);
  }
  _vfiprintf_r(iVar1,*(undefined4 *)(iVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}


////>>0x08009908>>FUN_08009908>>////

int FUN_08009908(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_20000090;
  if (param_1 != 0) {
    if (param_2 == 0) {
      _free_r();
      iVar2 = 0;
    }
    else {
      uVar3 = _malloc_usable_size_r();
      iVar2 = param_1;
      if ((uVar3 < param_2) && (iVar2 = _malloc_r(uVar1,param_2), iVar2 != 0)) {
        memcpy(iVar2,param_1,param_2);
        _free_r(uVar1,param_1);
      }
    }
    return iVar2;
  }
  iVar2 = _malloc_r(DAT_20000090,param_2,param_2,&DAT_20000090);
  return iVar2;
}


////>>0x08009918>>FUN_08009918>>////

void FUN_08009918(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_20000a38 = 0;
  iVar1 = _sbrk(param_2);
  if ((iVar1 == -1) && (DAT_20000a38 != 0)) {
    *param_1 = DAT_20000a38;
  }
  return;
}


////>>0x08009938>>FUN_08009938>>////

char * FUN_08009938(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    pcVar1 = param_1;
    if (*pcVar1 == '\0') {
      if (param_2 != '\0') {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
    param_1 = pcVar1 + 1;
  } while (param_2 != *pcVar1);
  return pcVar1;
}


////>>0x08009954>>FUN_08009954>>////

void FUN_08009954(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  do {
    pcVar3 = param_1;
    iVar2 = param_3;
    if (iVar2 == 0) {
      return;
    }
    cVar1 = *param_2;
    param_1 = pcVar3 + 1;
    *pcVar3 = cVar1;
    param_2 = param_2 + 1;
    param_3 = iVar2 + -1;
  } while (cVar1 != '\0');
  for (; param_1 != pcVar3 + iVar2; param_1 = param_1 + 1) {
    *param_1 = '\0';
  }
  return;
}


////>>0x0800997e>>FUN_0800997e>>////

int FUN_0800997e(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    while (iVar1 = strchr(param_1,param_2,param_3,param_1,param_4), iVar1 != 0) {
      param_1 = iVar1 + 1;
      iVar2 = iVar1;
    }
    return iVar2;
  }
  iVar2 = strchr();
  return iVar2;
}


////>>0x080099a4>>FUN_080099a4>>////

char * FUN_080099a4(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      param_1 = (char *)0x0;
    }
    return param_1;
  }
  do {
    pcVar1 = param_1;
    if (*pcVar1 == '\0') {
      return (char *)0x0;
    }
    pcVar3 = param_2 + -1;
    pcVar2 = pcVar1 + -1;
    do {
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') {
        return pcVar1;
      }
      pcVar2 = pcVar2 + 1;
      param_1 = pcVar1 + 1;
    } while (*pcVar2 == *pcVar3);
  } while( true );
}


////>>0x08009a80>>FUN_08009a80>>////

uint FUN_08009a80(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  iVar1 = DAT_20000090;
  if ((DAT_20000090 != 0) && (*(int *)(DAT_20000090 + 0x18) == 0)) {
    __sinit(DAT_20000090);
  }
  if (param_2 == &DAT_0800aba4) {
    param_2 = *(undefined4 **)(iVar1 + 4);
  }
  else if (param_2 == (undefined4 *)&DAT_0800abc4) {
    param_2 = *(undefined4 **)(iVar1 + 8);
  }
  else if (param_2 == (undefined4 *)&DAT_0800ab84) {
    param_2 = *(undefined4 **)(iVar1 + 0xc);
  }
  uVar3 = *(ushort *)(param_2 + 3);
  uVar2 = (uint)uVar3;
  if (-1 < (int)(uVar2 << 0x1c)) {
    if (-1 < (int)(uVar2 << 0x1b)) {
      *param_1 = 9;
      goto LAB_08009ab0;
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
LAB_08009ab0:
      *(ushort *)(param_2 + 3) = uVar3 | 0x40;
      return 0xffffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x08009b5c>>FUN_08009b5c>>////

void FUN_08009b5c(void)

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
  
  raise(6);
  UNRECOVERED_JUMPTABLE_00 = (code *)0x8009b6b;
  uVar12 = _exit(1);
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
          goto LAB_08009c62;
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
                    /* WARNING: Could not recover jumptable at 0x08009c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        *puVar1 = uVar10;
        goto LAB_08009b86;
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
LAB_08009c62:
      *(ushort *)(piVar3 + 3) = uVar6 | 0x40;
                    /* WARNING: Could not recover jumptable at 0x08009c6c. Too many branches */
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
        _free_r(puVar1);
      }
      piVar3[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x08009c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
LAB_08009b86:
                    /* WARNING: Could not recover jumptable at 0x08009b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(0);
  return;
}


////>>0x08009c7c>>FUN_08009c7c>>////

undefined4 FUN_08009c7c(uint *param_1,int *param_2)

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
      __sinit();
    }
    if (param_2 == &DAT_0800aba4) {
      param_2 = (int *)param_1[1];
    }
    else if (param_2 == (int *)&DAT_0800abc4) {
      param_2 = (int *)param_1[2];
    }
    else if (param_2 == (int *)&DAT_0800ab84) {
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
              goto LAB_08009c62;
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
                    /* WARNING: Could not recover jumptable at 0x08009c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
              return uVar1;
            }
            *param_1 = uVar9;
            goto LAB_08009b86;
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
LAB_08009c62:
          *(ushort *)(param_2 + 3) = uVar5 | 0x40;
                    /* WARNING: Could not recover jumptable at 0x08009c6c. Too many branches */
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
            _free_r(param_1);
          }
          param_2[0xd] = 0;
                    /* WARNING: Could not recover jumptable at 0x08009c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
          return uVar1;
        }
      }
LAB_08009b86:
                    /* WARNING: Could not recover jumptable at 0x08009b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE_00)(0);
      return uVar1;
    }
  }
  return 0;
}


////>>0x08009cdc>>FUN_08009cdc>>////

void FUN_08009cdc(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

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
  param_1[9] = 0x800a021;
  param_1[10] = 0x800a043;
  param_1[0xb] = 0x800a07b;
  param_1[0xc] = &LAB_0800a09e_1;
  return;
}


////>>0x08009d24>>FUN_08009d24>>////

undefined4 * FUN_08009d24(undefined4 param_1,int param_2)

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


////>>0x08009d50>>FUN_08009d50>>////

void FUN_08009d50(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1[6] == 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    puVar2 = &DAT_20000094;
    param_1[10] = &LAB_08009cd0_1;
    if (param_1 == &DAT_20000094) {
      puVar2 = (undefined4 *)0x1;
    }
    if (param_1 == &DAT_20000094) {
      param_1[6] = puVar2;
    }
    uVar1 = __sfp();
    param_1[1] = uVar1;
    uVar1 = __sfp(param_1);
    param_1[2] = uVar1;
    uVar1 = __sfp(param_1);
    param_1[3] = uVar1;
    std_isra_0(param_1[1],4,0);
    std_isra_0(param_1[2],9,1);
    std_isra_0(param_1[3],0x12,2);
    param_1[6] = 1;
  }
  return;
}


////>>0x08009db0>>FUN_08009db0>>////

int * FUN_08009db0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  
  if (DAT_200000ac == 0) {
    __sinit(&DAT_20000094);
  }
  ppiVar3 = (int **)&DAT_200000dc;
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
        memset(piVar2 + 0x17,0,8,1,param_4);
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


////>>0x08009e64>>FUN_08009e64>>////

undefined4 FUN_08009e64(undefined4 param_1,int param_2,undefined4 *param_3,uint *param_4)

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
      goto LAB_08009ea4;
    }
  }
  else {
    *param_4 = (uint)((local_48 & 0xf000) == 0x2000);
  }
  uVar2 = 0x400;
LAB_08009ea4:
  *param_3 = uVar2;
  return 0;
}


////>>0x08009eac>>FUN_08009eac>>////

void FUN_08009eac(int param_1,int *param_2)

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
      *(undefined **)(param_1 + 0x28) = &LAB_08009cd0_1;
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


////>>0x08009f2c>>FUN_08009f2c>>////

char * FUN_08009f2c(char *param_1,char param_2,int param_3)

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


////>>0x08009f48>>FUN_08009f48>>////

void FUN_08009f48(void)

{
  return;
}


////>>0x08009f4a>>FUN_08009f4a>>////

void FUN_08009f4a(void)

{
  return;
}


////>>0x08009fe8>>FUN_08009fe8>>////

int FUN_08009fe8(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  undefined4 *puVar5;
  
  piVar1 = DAT_20000090;
  puVar5 = &DAT_20000090;
  if (0x1f < param_1) {
    *DAT_20000090 = 0x16;
    return -1;
  }
  iVar3 = DAT_20000090[0x11];
  if ((iVar3 != 0) && (pcVar4 = *(code **)(iVar3 + param_1 * 4), pcVar4 != (code *)0x0)) {
    if (pcVar4 != (code *)0x1) {
      if (pcVar4 == (code *)0xffffffff) {
        *DAT_20000090 = 0x16;
        return 1;
      }
      *(undefined4 *)(iVar3 + param_1 * 4) = 0;
      (*pcVar4)(param_1);
    }
    return 0;
  }
  uVar2 = _getpid_r(DAT_20000090);
  DAT_20000a38 = 0;
  iVar3 = _kill(uVar2,param_1,param_1,0,puVar5,unaff_r4,unaff_r5,in_lr);
  if ((iVar3 == -1) && (DAT_20000a38 != 0)) {
    *piVar1 = DAT_20000a38;
  }
  return iVar3;
}


////>>0x0800a01c>>FUN_0800a01c>>////

undefined4 _getpid(void)

{
  return 1;
}


////>>0x0800a020>>FUN_0800a020>>////

void FUN_0800a020(undefined4 param_1,int param_2)

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


////>>0x0800a042>>FUN_0800a042>>////

void FUN_0800a042(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    _lseek_r(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  DAT_20000a38 = 0;
  iVar1 = _write((int)*(short *)(param_2 + 0xe),param_3,param_4,param_4,param_4,unaff_r4,unaff_r5,
                 in_lr);
  if ((iVar1 == -1) && (DAT_20000a38 != 0)) {
    *param_1 = DAT_20000a38;
  }
  return;
}


////>>0x0800a07a>>FUN_0800a07a>>////

void FUN_0800a07a(undefined4 param_1,int param_2)

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


////>>0x0800a0ec>>FUN_0800a0ec>>////

void FUN_0800a0ec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_20000a38 = 0;
  iVar1 = _fstat(param_2,param_3,param_3,0,param_4);
  if ((iVar1 == -1) && (DAT_20000a38 != 0)) {
    *param_1 = DAT_20000a38;
  }
  return;
}


////>>0x0800a110>>FUN_0800a110>>////

void FUN_0800a110(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_20000a38 = 0;
  iVar1 = _isatty(param_2);
  if ((iVar1 == -1) && (DAT_20000a38 != 0)) {
    *param_1 = DAT_20000a38;
  }
  return;
}


////>>0x0800a130>>FUN_0800a130>>////

void FUN_0800a130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_20000a38 = 0;
  iVar1 = _lseek(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (DAT_20000a38 != 0)) {
    *param_1 = DAT_20000a38;
  }
  return;
}


////>>0x0800a154>>FUN_0800a154>>////

int FUN_0800a154(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


////>>0x0800a168>>FUN_0800a168>>////

void FUN_0800a168(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_20000a38 = 0;
  iVar1 = _read(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (DAT_20000a38 != 0)) {
    *param_1 = DAT_20000a38;
  }
  return;
}


////>>0x0800a18c>>FUN_0800a18c>>////

void FUN_0800a18c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = FUN_0800a18c;
  abort();
  if (-1 < DAT_200009c0 << 0x1f) {
    DAT_200009c0 = 1;
  }
  if (-1 < DAT_200009bc << 0x1f) {
    DAT_200009bc = 1;
  }
  if (-1 < DAT_200009b8 << 0x1f) {
    DAT_200009b8 = 1;
  }
  if (-1 < DAT_200009b4 << 0x1f) {
    DAT_200009b4 = 1;
  }
  if (-1 < DAT_200009b0 << 0x1f) {
    DAT_200009b0 = 1;
  }
  if (-1 < DAT_200009ac << 0x1f) {
    DAT_200009ac = 1;
  }
  if (-1 < DAT_200009a8 << 0x1f) {
    DAT_200009a8 = 1;
  }
  if (-1 < DAT_200009a4 << 0x1f) {
    DAT_200009a4 = 1;
  }
  if (-1 < DAT_200009a0 << 0x1f) {
    DAT_200009a0 = 1;
  }
  if (-1 < DAT_2000099c << 0x1f) {
    DAT_2000099c = 1;
  }
  if (-1 < DAT_20000998 << 0x1f) {
    DAT_20000998 = 1;
  }
  if (-1 < DAT_20000994 << 0x1f) {
    DAT_20000994 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0800a224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


////>>0x0800a424>>FUN_0800a424>>////

void FUN_0800a424(void)

{
  return;
}


////>>0x0800a430>>FUN_0800a430>>////

void FUN_0800a430(void)

{
  return;
}


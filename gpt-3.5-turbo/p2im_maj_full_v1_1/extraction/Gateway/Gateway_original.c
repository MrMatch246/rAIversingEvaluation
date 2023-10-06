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


////>>0x08000188>>aflCall>>////

/* WARNING: Unknown calling convention */

uint32_t aflCall(uint32_t a0,uint32_t a1,int32_t a2)

{
  software_interrupt(0x3f);
  return a0;
}


////>>0x0800018c>>startForkserver>>////

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


////>>0x080001a8>>setPinValueCallback>>////

/* WARNING: Unknown calling convention */

void setPinValueCallback(byte pin,int value)

{
  bool bVar1;
  byte bVar2;
  uint ulPin;
  uint32_t uVar3;
  
  ulPin = (uint)pin;
  if (ulPin < 0x3c) {
    if (ulPin < 0x3c) {
      if ((&digitalPin)[ulPin] == NC) {
        bVar1 = false;
      }
      else {
        uVar3 = pinNametoDigitalPin((&digitalPin)[ulPin]);
        if (uVar3 == 0) {
          bVar1 = false;
        }
        else {
          uVar3 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar3 == 1) {
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
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (bVar2 = firmata::FirmataClass::getPinMode(&Firmata,pin), bVar2 == '\x01')) {
    firmata::FirmataClass::setPinState(&Firmata,pin,value);
    digitalWrite(ulPin,value);
  }
  return;
}


////>>0x08000214>>analogWriteCallback>>////

/* WARNING: Unknown calling convention */

void analogWriteCallback(byte pin,int value)

{
  bool bVar1;
  byte bVar2;
  _Bool _Var3;
  uint ulPin;
  uint32_t uVar4;
  void *in_r2;
  
  ulPin = (uint)pin;
  if (0x3b < ulPin) {
    return;
  }
  bVar2 = firmata::FirmataClass::getPinMode(&Firmata,pin);
  if (bVar2 == '\x03') {
    if (ulPin < 0x3c) {
      if ((&digitalPin)[ulPin] == NC) {
        _Var3 = false;
      }
      else {
        uVar4 = pinNametoDigitalPin((&digitalPin)[ulPin]);
        if (uVar4 == 0) {
          _Var3 = false;
        }
        else {
          uVar4 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar4 == 1) {
            _Var3 = false;
          }
          else {
            _Var3 = pin_in_pinmap((&digitalPin)[ulPin],(PinMap_conflict *)&PinMap_PWM);
          }
        }
      }
    }
    else {
      _Var3 = false;
    }
    if (_Var3 != false) {
      analogWrite(ulPin,value);
    }
    firmata::FirmataClass::setPinState(&Firmata,pin,value);
  }
  else if (bVar2 == '\x04') {
    if (ulPin < 0x3c) {
      if ((&digitalPin)[ulPin] == NC) {
        bVar1 = false;
      }
      else {
        uVar4 = pinNametoDigitalPin((&digitalPin)[ulPin]);
        if (uVar4 == 0) {
          bVar1 = false;
        }
        else {
          uVar4 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar4 == 1) {
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
      Servo::write(servos + servoPinMap[ulPin],value,in_r2,(size_t)servos);
    }
    firmata::FirmataClass::setPinState(&Firmata,pin,value);
    return;
  }
  return;
}


////>>0x080002ec>>digitalWriteCallback>>////

/* WARNING: Unknown calling convention */

void digitalWriteCallback(byte port,int value)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint32_t uVar4;
  int iVar5;
  byte pin_00;
  uint32_t ulPin;
  uint uVar6;
  byte lastPin;
  uint uVar7;
  byte pin;
  byte pin_1;
  uint32_t ulPin_00;
  uint uVar8;
  byte pinValue;
  
  uVar3 = (uint)port;
  if (uVar3 < 5) {
    uVar7 = (uVar3 + 1 & 0x1f) * 8;
    if (0x3c < uVar7) {
      uVar7 = 0x3c;
    }
    uVar8 = 0;
    uVar6 = 1;
    ulPin_00 = (uVar3 & 0x1f) * 8;
    for (ulPin = ulPin_00; ulPin < uVar7; ulPin = ulPin + 1 & 0xff) {
      if (ulPin < 0x3c) {
        if ((&digitalPin)[ulPin] == NC) {
          bVar1 = false;
        }
        else {
          uVar4 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar4 == 0) {
            bVar1 = false;
          }
          else {
            uVar4 = pinNametoDigitalPin((&digitalPin)[ulPin]);
            if (uVar4 == 1) {
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
        pin_00 = (byte)ulPin;
        bVar2 = firmata::FirmataClass::getPinMode(&Firmata,pin_00);
        if ((bVar2 != '\x01') &&
           (bVar2 = firmata::FirmataClass::getPinMode(&Firmata,pin_00), bVar2 != '\0')) {
          bVar1 = false;
        }
        if (bVar1) {
          uVar3 = (uint)((uVar6 & value) != 0);
          bVar2 = firmata::FirmataClass::getPinMode(&Firmata,pin_00);
          if (bVar2 == '\x01') {
            uVar8 = uVar6 | uVar8;
          }
          else {
            bVar2 = firmata::FirmataClass::getPinMode(&Firmata,pin_00);
            if (bVar2 == '\0') {
              if (uVar3 == 0) {
                bVar1 = false;
              }
              else {
                iVar5 = firmata::FirmataClass::getPinState(&Firmata,pin_00);
                if (iVar5 == 1) {
                  bVar1 = false;
                }
              }
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              pinMode(ulPin,2);
            }
          }
          firmata::FirmataClass::setPinState(&Firmata,pin_00,uVar3);
        }
      }
      uVar6 = (uVar6 & 0x7f) << 1;
    }
    if ((uVar8 & 1) != 0) {
      digitalWrite(ulPin_00,value & 1);
    }
    if ((uVar8 & 2) != 0) {
      digitalWrite(ulPin_00 + 1,value & 2);
    }
    if ((uVar8 & 4) != 0) {
      digitalWrite(ulPin_00 + 2,value & 4);
    }
    if ((uVar8 & 8) != 0) {
      digitalWrite(ulPin_00 + 3,value & 8);
    }
    if ((uVar8 & 0x10) != 0) {
      digitalWrite(ulPin_00 + 4,value & 0x10);
    }
    if ((uVar8 & 0x20) != 0) {
      digitalWrite(ulPin_00 + 5,value & 0x20);
    }
    if ((uVar8 & 0x40) != 0) {
      digitalWrite(ulPin_00 + 6,value & 0x40);
    }
    if ((uVar8 & 0x80) != 0) {
      digitalWrite(ulPin_00 + 7,value & 0x80);
    }
    return;
  }
  return;
}


////>>0x08000488>>reportAnalogCallback>>////

/* WARNING: Unknown calling convention */

void reportAnalogCallback(byte analogPin,int value)

{
  uint ulPin;
  uint32_t value_00;
  
  ulPin = (uint)analogPin;
  if (ulPin < 0xe) {
    if (value == 0) {
      analogInputsToReport = analogInputsToReport & ~(1 << ulPin);
      return;
    }
    analogInputsToReport = 1 << ulPin | analogInputsToReport;
    if (!isResetting) {
      value_00 = analogRead(ulPin);
      firmata::FirmataClass::sendAnalog(&Firmata,analogPin,value_00);
      return;
    }
  }
  return;
}


////>>0x080004d4>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  int iVar1;
  Servo *this;
  
  if (__initialize_p != 1) {
    return;
  }
  if (__priority == 0xffff) {
    this = servos;
    for (iVar1 = 0xb; -1 < iVar1; iVar1 = iVar1 + -1) {
      Servo::Servo(this);
      this = this + 1;
    }
  }
  return;
}


////>>0x08000500>>attachServo>>////

/* WARNING: Unknown calling convention */

void attachServo(byte pin,int minPulse,int maxPulse)

{
  uint pin_00;
  
  pin_00 = (uint)pin;
  if (0xb < servoCount) {
    firmata::FirmataClass::sendString(&Firmata,"Max servos attached");
    return;
  }
  if (detachedServoCount == 0) {
    servoPinMap[pin_00] = servoCount;
    servoCount = servoCount + '\x01';
  }
  else {
    servoPinMap[pin_00] = (&DAT_2000011f)[detachedServoCount];
    detachedServoCount = detachedServoCount + 0xff;
  }
  if ((0 < minPulse) && (0 < maxPulse)) {
    Servo::attach(servos + servoPinMap[pin_00],pin_00,minPulse,maxPulse);
    return;
  }
  Servo::attach(servos + servoPinMap[pin_00],pin_00);
  return;
}


////>>0x08000588>>detachServo>>////

/* WARNING: Unknown calling convention */

void detachServo(byte pin)

{
  Servo::detach(servos + servoPinMap[pin]);
  if ((servoPinMap[pin] == servoCount) && (servoCount != '\0')) {
    servoCount = servoCount + 0xff;
  }
  else if (servoCount != '\0') {
    detachedServoCount = detachedServoCount + 1;
    (&DAT_2000011f)[detachedServoCount] = servoPinMap[pin];
  }
  servoPinMap[pin] = 0xff;
  return;
}


////>>0x080005e0>>disableI2CPins>>////

/* WARNING: Unknown calling convention */

void disableI2CPins(void)

{
  isI2CEnabled = false;
  queryIndex = -1;
  return;
}


////>>0x080005f8>>setPinModeCallback>>////

/* WARNING: Unknown calling convention */

void setPinModeCallback(byte pin,int mode)

{
  byte bVar1;
  PinName_conflict PVar2;
  bool bVar3;
  bool bVar4;
  _Bool _Var5;
  uint ulPin;
  uint32_t uVar6;
  char cVar7;
  uint uVar8;
  
  ulPin = (uint)pin;
  bVar1 = firmata::FirmataClass::getPinMode(&Firmata,pin);
  if (bVar1 != '\x7f') {
    bVar1 = firmata::FirmataClass::getPinMode(&Firmata,pin);
    if (bVar1 == '\x06') {
      if (isI2CEnabled == false) {
        cVar7 = '\0';
      }
      else {
        cVar7 = isI2CEnabled;
        if (mode == 6) {
          cVar7 = '\0';
        }
      }
    }
    else {
      cVar7 = '\0';
    }
    if (cVar7 != '\0') {
      disableI2CPins();
    }
    if (ulPin < 0x3c) {
      if ((&digitalPin)[ulPin] == NC) {
        bVar3 = false;
      }
      else {
        uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
        if (uVar6 == 0) {
          bVar3 = false;
        }
        else {
          uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar6 == 1) {
            bVar3 = false;
          }
          else if (mode == 4) {
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
      if (servoPinMap[ulPin] < 0xc) {
        bVar3 = Servo::attached(servos + servoPinMap[ulPin]);
      }
      else {
        bVar3 = false;
      }
      if (bVar3 != false) {
        detachServo(pin);
      }
    }
    uVar8 = ulPin - 0x2e & 0xff;
    if (uVar8 < 0xe) {
      if (ulPin < 0x3c) {
        PVar2 = (&digitalPin)[ulPin];
      }
      else {
        PVar2 = NC;
      }
      uVar6 = pinNametoDigitalPin(PVar2);
      if (uVar6 == 0) {
        bVar3 = false;
      }
      else {
        if (ulPin < 0x3c) {
          PVar2 = (&digitalPin)[ulPin];
        }
        else {
          PVar2 = NC;
        }
        uVar6 = pinNametoDigitalPin(PVar2);
        if (uVar6 == 1) {
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
      reportAnalogCallback((byte)uVar8,(uint)(mode == 2));
    }
    if (ulPin < 0x3c) {
      if ((&digitalPin)[ulPin] == NC) {
        bVar3 = false;
      }
      else {
        uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
        if (uVar6 == 0) {
          bVar3 = false;
        }
        else {
          uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar6 == 1) {
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
      if ((mode == 0) || (mode == 0xb)) {
        portConfigInputs[pin >> 3] = portConfigInputs[pin >> 3] | (byte)(1 << (ulPin & 7));
      }
      else {
        portConfigInputs[pin >> 3] = portConfigInputs[pin >> 3] & ~(byte)(1 << (ulPin & 7));
      }
    }
    firmata::FirmataClass::setPinState(&Firmata,pin,0);
    switch(mode) {
    case 0:
      if (ulPin < 0x3c) {
        if ((&digitalPin)[ulPin] == NC) {
          bVar3 = false;
        }
        else {
          uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar6 == 0) {
            bVar3 = false;
          }
          else {
            uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
            if (uVar6 == 1) {
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
        pinMode(ulPin,0);
        firmata::FirmataClass::setPinMode(&Firmata,pin,'\0');
        return;
      }
      break;
    case 1:
      if (ulPin < 0x3c) {
        if ((&digitalPin)[ulPin] == NC) {
          bVar3 = false;
        }
        else {
          uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar6 == 0) {
            bVar3 = false;
          }
          else {
            uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
            if (uVar6 == 1) {
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
        bVar1 = firmata::FirmataClass::getPinMode(&Firmata,pin);
        if (bVar1 == '\x03') {
          digitalWrite(ulPin,0);
        }
        pinMode(ulPin,1);
        firmata::FirmataClass::setPinMode(&Firmata,pin,'\x01');
        return;
      }
      break;
    case 2:
      if (uVar8 < 0xe) {
        if (ulPin < 0x3c) {
          PVar2 = (&digitalPin)[ulPin];
        }
        else {
          PVar2 = NC;
        }
        uVar6 = pinNametoDigitalPin(PVar2);
        if (uVar6 == 0) {
          bVar3 = false;
        }
        else {
          if (ulPin < 0x3c) {
            PVar2 = (&digitalPin)[ulPin];
          }
          else {
            PVar2 = NC;
          }
          uVar6 = pinNametoDigitalPin(PVar2);
          if (uVar6 == 1) {
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
        if (ulPin < 0x3c) {
          if ((&digitalPin)[ulPin] == NC) {
            bVar3 = false;
          }
          else {
            uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
            if (uVar6 == 0) {
              bVar3 = false;
            }
            else {
              uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
              if (uVar6 == 1) {
                bVar3 = false;
              }
            }
          }
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          pinMode(ulPin,0);
        }
        firmata::FirmataClass::setPinMode(&Firmata,pin,'\x02');
        return;
      }
      break;
    case 3:
      if (ulPin < 0x3c) {
        if ((&digitalPin)[ulPin] == NC) {
          _Var5 = false;
        }
        else {
          uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar6 == 0) {
            _Var5 = false;
          }
          else {
            uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
            if (uVar6 == 1) {
              _Var5 = false;
            }
            else {
              _Var5 = pin_in_pinmap((&digitalPin)[ulPin],(PinMap_conflict *)&PinMap_PWM);
            }
          }
        }
      }
      else {
        _Var5 = false;
      }
      if (_Var5 != false) {
        pinMode(ulPin,1);
        analogWrite(ulPin,0);
        firmata::FirmataClass::setPinMode(&Firmata,pin,'\x03');
        return;
      }
      break;
    case 4:
      if (ulPin < 0x3c) {
        if ((&digitalPin)[ulPin] == NC) {
          bVar3 = false;
        }
        else {
          uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar6 == 0) {
            bVar3 = false;
          }
          else {
            uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
            if (uVar6 == 1) {
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
        firmata::FirmataClass::setPinMode(&Firmata,pin,'\x04');
        if ((servoPinMap[ulPin] != 0xff) &&
           (bVar4 = Servo::attached(servos + servoPinMap[ulPin]), bVar4)) {
          bVar3 = false;
        }
        if (bVar3) {
          attachServo(pin,-1,-1);
          return;
        }
      }
      break;
    default:
      firmata::FirmataClass::sendString(&Firmata,"Unknown pin mode");
      break;
    case 6:
      if (ulPin < 0x3c) {
        if ((&digitalPin)[ulPin] == NC) {
          _Var5 = false;
        }
        else {
          uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar6 == 0) {
            _Var5 = false;
          }
          else {
            uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
            if (uVar6 == 1) {
              _Var5 = false;
            }
            else {
              _Var5 = pin_in_pinmap((&digitalPin)[ulPin],(PinMap_conflict *)&PinMap_I2C_SDA);
              if (!_Var5) {
                _Var5 = pin_in_pinmap((&digitalPin)[ulPin],(PinMap_conflict *)&PinMap_I2C_SCL);
              }
            }
          }
        }
      }
      else {
        _Var5 = false;
      }
      if (_Var5 != false) {
        firmata::FirmataClass::setPinMode(&Firmata,pin,'\x06');
        return;
      }
      break;
    case 10:
      break;
    case 0xb:
      if (ulPin < 0x3c) {
        if ((&digitalPin)[ulPin] == NC) {
          bVar3 = false;
        }
        else {
          uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
          if (uVar6 == 0) {
            bVar3 = false;
          }
          else {
            uVar6 = pinNametoDigitalPin((&digitalPin)[ulPin]);
            if (uVar6 == 1) {
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
        pinMode(ulPin,2);
        firmata::FirmataClass::setPinMode(&Firmata,pin,'\v');
        firmata::FirmataClass::setPinState(&Firmata,pin,1);
        return;
      }
    }
  }
  return;
}


////>>0x08000a64>>enableI2CPins>>////

/* WARNING: Unknown calling convention */

void enableI2CPins(void)

{
  _Bool _Var1;
  uint32_t uVar2;
  uint uVar3;
  
  for (uVar3 = 0; uVar3 < 0x3c; uVar3 = uVar3 + 1 & 0xff) {
    if (uVar3 < 0x3c) {
      if ((&digitalPin)[uVar3] == NC) {
        _Var1 = false;
      }
      else {
        uVar2 = pinNametoDigitalPin((&digitalPin)[uVar3]);
        if (uVar2 == 0) {
          _Var1 = false;
        }
        else {
          uVar2 = pinNametoDigitalPin((&digitalPin)[uVar3]);
          if (uVar2 == 1) {
            _Var1 = false;
          }
          else {
            _Var1 = pin_in_pinmap((&digitalPin)[uVar3],(PinMap_conflict *)&PinMap_I2C_SDA);
            if (!_Var1) {
              _Var1 = pin_in_pinmap((&digitalPin)[uVar3],(PinMap_conflict *)&PinMap_I2C_SCL);
            }
          }
        }
      }
    }
    else {
      _Var1 = false;
    }
    if (_Var1 != false) {
      setPinModeCallback((byte)uVar3,6);
    }
  }
  isI2CEnabled = true;
  TwoWire::begin(&Wire);
  return;
}


////>>0x08000aec>>systemResetCallback>>////

/* WARNING: Unknown calling convention */

void systemResetCallback(void)

{
  bool bVar1;
  PinName_conflict PVar2;
  uint32_t uVar3;
  byte i;
  uint uVar4;
  byte i_1;
  
  isResetting = true;
  if (isI2CEnabled) {
    disableI2CPins();
  }
  for (uVar4 = 0; uVar4 < 5; uVar4 = uVar4 + 1 & 0xff) {
    reportPINs[uVar4] = '\0';
    portConfigInputs[uVar4] = '\0';
    previousPINs[uVar4] = '\0';
  }
  for (uVar4 = 0; uVar4 < 0x3c; uVar4 = uVar4 + 1 & 0xff) {
    if ((uVar4 - 0x2e & 0xff) < 0xe) {
      if (uVar4 < 0x3c) {
        PVar2 = (&digitalPin)[uVar4];
      }
      else {
        PVar2 = NC;
      }
      uVar3 = pinNametoDigitalPin(PVar2);
      if (uVar3 == 0) {
        bVar1 = false;
      }
      else {
        if (uVar4 < 0x3c) {
          PVar2 = (&digitalPin)[uVar4];
        }
        else {
          PVar2 = NC;
        }
        uVar3 = pinNametoDigitalPin(PVar2);
        if (uVar3 == 1) {
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
      setPinModeCallback((byte)uVar4,2);
    }
    else {
      if ((((uVar4 < 0x3c) && ((&digitalPin)[uVar4] != NC)) &&
          (uVar3 = pinNametoDigitalPin((&digitalPin)[uVar4]), uVar3 != 0)) &&
         (uVar3 = pinNametoDigitalPin((&digitalPin)[uVar4]), uVar3 != 1)) {
        bVar1 = true;
      }
      if (bVar1) {
        setPinModeCallback((byte)uVar4,1);
      }
    }
    servoPinMap[uVar4] = 0xff;
  }
  analogInputsToReport = 0;
  detachedServoCount = '\0';
  servoCount = '\0';
  isResetting = false;
  return;
}


////>>0x08000be8>>outputPort>>////

/* WARNING: Unknown calling convention */

void outputPort(byte portNumber,byte portValue,byte forceSend)

{
  byte bVar1;
  
  bVar1 = portConfigInputs[portNumber] & portValue;
  if ((forceSend != '\0') || ((uint)bVar1 != (uint)previousPINs[portNumber])) {
    firmata::FirmataClass::sendDigitalPort(&Firmata,portNumber,(uint)bVar1);
    previousPINs[portNumber] = bVar1;
  }
  return;
}


////>>0x08000c18>>reportDigitalCallback>>////

/* WARNING: Unknown calling convention */

void reportDigitalCallback(byte port,int value)

{
  byte bVar1;
  bool bVar2;
  uint32_t uVar3;
  int iVar4;
  uchar pin;
  uint uVar5;
  byte portValue;
  
  uVar5 = (uint)port;
  if ((uVar5 < 5) && (reportPINs[uVar5] = (byte)value, value != 0)) {
    bVar1 = portConfigInputs[uVar5];
    uVar5 = (uVar5 & 0x1f) * 8;
    if (uVar5 < 0x3c) {
      if ((&digitalPin)[uVar5] == NC) {
        portValue = 0;
      }
      else {
        uVar3 = pinNametoDigitalPin((&digitalPin)[uVar5]);
        if (uVar3 == 0) {
          portValue = 0;
        }
        else {
          uVar3 = pinNametoDigitalPin((&digitalPin)[uVar5]);
          if (uVar3 == 1) {
            portValue = 0;
          }
          else if ((bVar1 & 1) == 0) {
            portValue = 0;
          }
          else {
            iVar4 = digitalRead(uVar5);
            if (iVar4 == 0) {
              portValue = 0;
            }
            else {
              portValue = 1;
            }
          }
        }
      }
    }
    else {
      portValue = 0;
    }
    if (uVar5 + 1 < 0x3c) {
      if ((&DAT_0800a909)[uVar5] == NC) {
        bVar2 = false;
      }
      else {
        uVar3 = pinNametoDigitalPin((&DAT_0800a909)[uVar5]);
        if (uVar3 == 0) {
          bVar2 = false;
        }
        else {
          uVar3 = pinNametoDigitalPin((&DAT_0800a909)[uVar5]);
          if (uVar3 == 1) {
            bVar2 = false;
          }
          else if ((bVar1 & 2) == 0) {
            bVar2 = false;
          }
          else {
            iVar4 = digitalRead(uVar5 + 1);
            if (iVar4 == 0) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
      }
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      portValue = portValue | 2;
    }
    if (uVar5 + 2 < 0x3c) {
      if ((&DAT_0800a90a)[uVar5] == NC) {
        bVar2 = false;
      }
      else {
        uVar3 = pinNametoDigitalPin((&DAT_0800a90a)[uVar5]);
        if (uVar3 == 0) {
          bVar2 = false;
        }
        else {
          uVar3 = pinNametoDigitalPin((&DAT_0800a90a)[uVar5]);
          if (uVar3 == 1) {
            bVar2 = false;
          }
          else if ((bVar1 & 4) == 0) {
            bVar2 = false;
          }
          else {
            iVar4 = digitalRead(uVar5 + 2);
            if (iVar4 == 0) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
      }
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      portValue = portValue | 4;
    }
    if (uVar5 + 3 < 0x3c) {
      if ((&DAT_0800a90b)[uVar5] == NC) {
        bVar2 = false;
      }
      else {
        uVar3 = pinNametoDigitalPin((&DAT_0800a90b)[uVar5]);
        if (uVar3 == 0) {
          bVar2 = false;
        }
        else {
          uVar3 = pinNametoDigitalPin((&DAT_0800a90b)[uVar5]);
          if (uVar3 == 1) {
            bVar2 = false;
          }
          else if ((bVar1 & 8) == 0) {
            bVar2 = false;
          }
          else {
            iVar4 = digitalRead(uVar5 + 3);
            if (iVar4 == 0) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
      }
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      portValue = portValue | 8;
    }
    if (uVar5 + 4 < 0x3c) {
      if ((&DAT_0800a90c)[uVar5] == NC) {
        bVar2 = false;
      }
      else {
        uVar3 = pinNametoDigitalPin((&DAT_0800a90c)[uVar5]);
        if (uVar3 == 0) {
          bVar2 = false;
        }
        else {
          uVar3 = pinNametoDigitalPin((&DAT_0800a90c)[uVar5]);
          if (uVar3 == 1) {
            bVar2 = false;
          }
          else if ((bVar1 & 0x10) == 0) {
            bVar2 = false;
          }
          else {
            iVar4 = digitalRead(uVar5 + 4);
            if (iVar4 == 0) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
      }
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      portValue = portValue | 0x10;
    }
    if (uVar5 + 5 < 0x3c) {
      if ((&DAT_0800a90d)[uVar5] == NC) {
        bVar2 = false;
      }
      else {
        uVar3 = pinNametoDigitalPin((&DAT_0800a90d)[uVar5]);
        if (uVar3 == 0) {
          bVar2 = false;
        }
        else {
          uVar3 = pinNametoDigitalPin((&DAT_0800a90d)[uVar5]);
          if (uVar3 == 1) {
            bVar2 = false;
          }
          else if ((bVar1 & 0x20) == 0) {
            bVar2 = false;
          }
          else {
            iVar4 = digitalRead(uVar5 + 5);
            if (iVar4 == 0) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
      }
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      portValue = portValue | 0x20;
    }
    if (uVar5 + 6 < 0x3c) {
      if ((&DAT_0800a90e)[uVar5] == NC) {
        bVar2 = false;
      }
      else {
        uVar3 = pinNametoDigitalPin((&DAT_0800a90e)[uVar5]);
        if (uVar3 == 0) {
          bVar2 = false;
        }
        else {
          uVar3 = pinNametoDigitalPin((&DAT_0800a90e)[uVar5]);
          if (uVar3 == 1) {
            bVar2 = false;
          }
          else if ((bVar1 & 0x40) == 0) {
            bVar2 = false;
          }
          else {
            iVar4 = digitalRead(uVar5 + 6);
            if (iVar4 == 0) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
      }
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      portValue = portValue | 0x40;
    }
    if (uVar5 + 7 < 0x3c) {
      if ((&DAT_0800a90f)[uVar5] == NC) {
        bVar2 = false;
      }
      else {
        uVar3 = pinNametoDigitalPin((&DAT_0800a90f)[uVar5]);
        if (uVar3 == 0) {
          bVar2 = false;
        }
        else {
          uVar3 = pinNametoDigitalPin((&DAT_0800a90f)[uVar5]);
          if (uVar3 == 1) {
            bVar2 = false;
          }
          else if ((bVar1 & 0x80) == 0) {
            bVar2 = false;
          }
          else {
            iVar4 = digitalRead(uVar5 + 7);
            if (iVar4 == 0) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
          }
        }
      }
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      portValue = portValue | 0x80;
    }
    outputPort(port,portValue,'\x01');
    return;
  }
  return;
}


////>>0x08000ef8>>checkDigitalInputs>>////

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
/* WARNING: Unknown calling convention */

void checkDigitalInputs(void)

{
  bool bVar1;
  byte bVar2;
  uint32_t uVar3;
  int iVar4;
  byte bVar5;
  
  bVar2 = portConfigInputs[0];
  if (reportPINs[0] != '\0') {
    uVar3 = pinNametoDigitalPin(PA_3);
    if (uVar3 == 0) {
      bVar5 = 0;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_3);
      if (uVar3 == 1) {
        bVar5 = 0;
      }
      else if ((bVar2 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        iVar4 = digitalRead(0);
        if (iVar4 == 0) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
      }
    }
    uVar3 = pinNametoDigitalPin(PA_2);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_2);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 2) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(1);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 2;
    }
    uVar3 = pinNametoDigitalPin(PA_10);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_10);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 4) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(2);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 4;
    }
    uVar3 = pinNametoDigitalPin(PB_3);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_3);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 8) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(3);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 8;
    }
    uVar3 = pinNametoDigitalPin(PB_5);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_5);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x10) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(4);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x10;
    }
    uVar3 = pinNametoDigitalPin(PB_4);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_4);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x20) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(5);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x20;
    }
    uVar3 = pinNametoDigitalPin(PB_10);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_10);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x40) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(6);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x40;
    }
    uVar3 = pinNametoDigitalPin(PA_8);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_8);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x80) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(7);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x80;
    }
    outputPort('\0',bVar5,'\0');
  }
  bVar2 = portConfigInputs[1];
  if (reportPINs[1] != '\0') {
    uVar3 = pinNametoDigitalPin(PA_9);
    if (uVar3 == 0) {
      bVar5 = 0;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_9);
      if (uVar3 == 1) {
        bVar5 = 0;
      }
      else if ((bVar2 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        iVar4 = digitalRead(8);
        if (iVar4 == 0) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
      }
    }
    uVar3 = pinNametoDigitalPin(PC_7);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_7);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 2) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(9);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 2;
    }
    uVar3 = pinNametoDigitalPin(PB_6);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_6);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 4) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(10);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 4;
    }
    uVar3 = pinNametoDigitalPin(PA_7);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_7);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 8) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0xb);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 8;
    }
    uVar3 = pinNametoDigitalPin(PA_6);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_6);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x10) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0xc);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x10;
    }
    uVar3 = pinNametoDigitalPin(PA_5);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_5);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x20) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0xd);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x20;
    }
    uVar3 = pinNametoDigitalPin(PB_9);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_9);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x40) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0xe);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x40;
    }
    uVar3 = pinNametoDigitalPin(PB_8);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_8);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x80) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0xf);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x80;
    }
    outputPort('\x01',bVar5,'\0');
  }
  bVar2 = portConfigInputs[2];
  if (reportPINs[2] != '\0') {
    uVar3 = pinNametoDigitalPin(PC_10);
    if (uVar3 == 0) {
      bVar5 = 0;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_10);
      if (uVar3 == 1) {
        bVar5 = 0;
      }
      else if ((bVar2 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        iVar4 = digitalRead(0x10);
        if (iVar4 == 0) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
      }
    }
    uVar3 = pinNametoDigitalPin(PC_12);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_12);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 2) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x11);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 2;
    }
    uVar3 = pinNametoDigitalPin(PA_13);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_13);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 8) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x13);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 8;
    }
    uVar3 = pinNametoDigitalPin(PA_14);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_14);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x10) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x14);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x10;
    }
    uVar3 = pinNametoDigitalPin(PA_15);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_15);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x20) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x15);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x20;
    }
    uVar3 = pinNametoDigitalPin(PB_7);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_7);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x40) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x16);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x40;
    }
    uVar3 = pinNametoDigitalPin(PC_13);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_13);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x80) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x17);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x80;
    }
    outputPort('\x02',bVar5,'\0');
  }
  bVar2 = portConfigInputs[3];
  if (reportPINs[3] != '\0') {
    uVar3 = pinNametoDigitalPin(PC_14);
    if (uVar3 == 0) {
      bVar5 = 0;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_14);
      if (uVar3 == 1) {
        bVar5 = 0;
      }
      else if ((bVar2 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        iVar4 = digitalRead(0x18);
        if (iVar4 == 0) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
      }
    }
    uVar3 = pinNametoDigitalPin(PC_15);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_15);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 2) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x19);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 2;
    }
    uVar3 = pinNametoDigitalPin(PD_0);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PD_0);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 4) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x1a);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 4;
    }
    uVar3 = pinNametoDigitalPin(PD_1);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PD_1);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 8) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x1b);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 8;
    }
    uVar3 = pinNametoDigitalPin(PC_2);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_2);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x10) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x1c);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x10;
    }
    uVar3 = pinNametoDigitalPin(PC_3);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_3);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x20) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x1d);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x20;
    }
    uVar3 = pinNametoDigitalPin(PC_11);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_11);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x40) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x1e);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x40;
    }
    uVar3 = pinNametoDigitalPin(PD_2);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PD_2);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x80) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x1f);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x80;
    }
    outputPort('\x03',bVar5,'\0');
  }
  bVar2 = portConfigInputs[4];
  if (reportPINs[4] != '\0') {
    uVar3 = pinNametoDigitalPin(PC_9);
    if (uVar3 == 0) {
      bVar5 = 0;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_9);
      if (uVar3 == 1) {
        bVar5 = 0;
      }
      else if ((bVar2 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        iVar4 = digitalRead(0x20);
        if (iVar4 == 0) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
      }
    }
    uVar3 = pinNametoDigitalPin(PC_8);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_8);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 2) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x21);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 2;
    }
    uVar3 = pinNametoDigitalPin(PC_6);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_6);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 4) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x22);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 4;
    }
    uVar3 = pinNametoDigitalPin(PC_5);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PC_5);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 8) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x23);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 8;
    }
    uVar3 = pinNametoDigitalPin(PA_12);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_12);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x10) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x24);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x10;
    }
    uVar3 = pinNametoDigitalPin(PA_11);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PA_11);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x20) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x25);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x20;
    }
    uVar3 = pinNametoDigitalPin(PB_12);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_12);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x40) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x26);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x40;
    }
    uVar3 = pinNametoDigitalPin(PB_11);
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = pinNametoDigitalPin(PB_11);
      if (uVar3 == 1) {
        bVar1 = false;
      }
      else if ((bVar2 & 0x80) == 0) {
        bVar1 = false;
      }
      else {
        iVar4 = digitalRead(0x27);
        if (iVar4 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
    }
    if (bVar1) {
      bVar5 = bVar5 | 0x80;
    }
    outputPort('\x04',bVar5,'\0');
  }
  return;
}


////>>0x08001b48>>setup>>////

/* WARNING: Unknown calling convention */

void setup(void)

{
  firmata::FirmataClass::setFirmwareNameAndVersion
            (&Firmata,"/home/bo/p2im/p2im-real_firmware_scratch/Gateway/StandardFirmata.ino",'\x02',
             '\x05');
  firmata::FirmataClass::attach(&Firmata,0xe0,analogWriteCallback + 1);
  firmata::FirmataClass::attach(&Firmata,0x90,digitalWriteCallback + 1);
  firmata::FirmataClass::attach(&Firmata,0xc0,reportAnalogCallback + 1);
  firmata::FirmataClass::attach(&Firmata,0xd0,reportDigitalCallback + 1);
  firmata::FirmataClass::attach(&Firmata,0xf4,setPinModeCallback + 1);
  firmata::FirmataClass::attach(&Firmata,0xf5,setPinValueCallback + 1);
  firmata::FirmataClass::attach(&Firmata,0xf0,sysexCallback + 1);
  firmata::FirmataClass::attach(&Firmata,0xff,systemResetCallback);
  firmata::FirmataClass::begin(&Firmata,0xe100);
  systemResetCallback();
  startForkserver(0);
  return;
}


////>>0x08001be8>>_GLOBAL__sub_I_analogInputsToReport>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I_analogInputsToReport(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x08001bf8>>wireWrite>>////

/* WARNING: Unknown calling convention */

void wireWrite(byte data)

{
  void *in_r2;
  size_t in_r3;
  
  TwoWire::write(&Wire,(uint)data,in_r2,in_r3);
  return;
}


////>>0x08001c08>>wireRead>>////

/* WARNING: Unknown calling convention */

byte wireRead(void)

{
  ssize_t sVar1;
  int in_r1;
  void *in_r2;
  size_t in_r3;
  
  sVar1 = TwoWire::read(&Wire,in_r1,in_r2,in_r3);
  return (byte)sVar1;
}


////>>0x08001c18>>readAndReportData>>////

/* WARNING: Unknown calling convention */

void readAndReportData(byte address,int theRegister,byte numBytes,byte stopTX)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)numBytes;
  if (theRegister == -1) {
    theRegister = 0;
  }
  else {
    TwoWire::beginTransmission(&Wire,address);
    wireWrite((byte)theRegister);
    TwoWire::endTransmission(&Wire,stopTX);
  }
  TwoWire::requestFrom(&Wire,address,numBytes);
  iVar3 = TwoWire::available(&Wire);
  if ((int)uVar5 < iVar3) {
    firmata::FirmataClass::sendString(&Firmata,"I2C: Too many bytes received");
  }
  else {
    iVar3 = TwoWire::available(&Wire);
    if (iVar3 < (int)uVar5) {
      firmata::FirmataClass::sendString(&Firmata,"I2C: Too few bytes received");
    }
  }
  i2cRxData[1] = (byte)theRegister;
  iVar3 = 0;
  i2cRxData[0] = address;
  while( true ) {
    if (iVar3 < (int)uVar5) {
      iVar4 = TwoWire::available(&Wire);
      if (iVar4 == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    bVar2 = wireRead();
    i2cRxData[iVar3 + 2] = bVar2;
    iVar3 = iVar3 + 1;
  }
  firmata::FirmataClass::sendSysex(&Firmata,'w',numBytes + '\x02',i2cRxData);
  return;
}


////>>0x08001cd0>>sysexCallback>>////

/* WARNING: Unknown calling convention */

void sysexCallback(byte command,byte argc,byte *argv)

{
  byte bVar1;
  uint8_t address;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte slaveAddress;
  byte data;
  PinName_conflict PVar5;
  _Bool _Var6;
  byte bVar7;
  uint32_t uVar8;
  int iVar9;
  int val;
  byte mode;
  byte bVar10;
  byte stopTX;
  byte i;
  byte i_1;
  undefined1 *in_r3;
  uint uVar11;
  uint delayTime;
  byte pin_1;
  undefined1 *__n;
  size_t sVar12;
  int maxPulse;
  byte pin;
  uint uVar13;
  int minPulse;
  int iVar14;
  bool bVar15;
  
  uVar13 = (uint)argc;
  switch(command) {
  case 'i':
    firmata::FirmataClass::write(&Firmata,0xf0,argv,(size_t)in_r3);
    firmata::FirmataClass::write(&Firmata,0x6a,argv,(size_t)in_r3);
    for (uVar13 = 0; uVar13 < 0x3c; uVar13 = uVar13 + 1 & 0xff) {
      uVar11 = uVar13 - 0x2e & 0xff;
      if (uVar11 < 0xe) {
        if (uVar13 < 0x3c) {
          in_r3 = &digitalPin;
          PVar5 = (&digitalPin)[uVar13];
        }
        else {
          PVar5 = NC;
        }
        uVar8 = pinNametoDigitalPin(PVar5);
        if (uVar8 == 0) {
          uVar11 = 0x7f;
        }
        else {
          if (uVar13 < 0x3c) {
            in_r3 = &digitalPin;
            PVar5 = (&digitalPin)[uVar13];
          }
          else {
            PVar5 = NC;
          }
          uVar8 = pinNametoDigitalPin(PVar5);
          if (uVar8 == 1) {
            uVar11 = 0x7f;
          }
        }
      }
      else {
        uVar11 = 0x7f;
      }
      firmata::FirmataClass::write(&Firmata,uVar11,argv,(size_t)in_r3);
    }
    firmata::FirmataClass::write(&Firmata,0xf7,argv,(size_t)in_r3);
    break;
  case 'k':
    firmata::FirmataClass::write(&Firmata,0xf0,argv,(size_t)in_r3);
    firmata::FirmataClass::write(&Firmata,0x6c,argv,(size_t)in_r3);
    for (uVar13 = 0; uVar13 < 0x3c; uVar13 = uVar13 + 1 & 0xff) {
      if (uVar13 < 0x3c) {
        if ((&digitalPin)[uVar13] == NC) {
          sVar12 = 0;
        }
        else {
          uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
          if (uVar8 == 0) {
            sVar12 = 0;
          }
          else {
            uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
            if (uVar8 == 1) {
              sVar12 = 0;
            }
            else {
              sVar12 = 1;
            }
          }
        }
      }
      else {
        sVar12 = 0;
      }
      if (sVar12 != 0) {
        firmata::FirmataClass::write(&Firmata,0,argv,sVar12);
        firmata::FirmataClass::write(&Firmata,1,argv,sVar12);
        firmata::FirmataClass::write(&Firmata,0xb,argv,sVar12);
        firmata::FirmataClass::write(&Firmata,1,argv,sVar12);
        firmata::FirmataClass::write(&Firmata,1,argv,sVar12);
        firmata::FirmataClass::write(&Firmata,1,argv,sVar12);
      }
      if ((uVar13 - 0x2e & 0xff) < 0xe) {
        if (uVar13 < 0x3c) {
          PVar5 = (&digitalPin)[uVar13];
        }
        else {
          PVar5 = NC;
        }
        uVar8 = pinNametoDigitalPin(PVar5);
        if (uVar8 == 0) {
          __n = (undefined1 *)0x0;
        }
        else {
          if (uVar13 < 0x3c) {
            PVar5 = (&digitalPin)[uVar13];
          }
          else {
            PVar5 = NC;
          }
          uVar8 = pinNametoDigitalPin(PVar5);
          if (uVar8 == 1) {
            __n = (undefined1 *)0x0;
          }
          else {
            __n = (undefined1 *)0x1;
          }
        }
      }
      else {
        __n = (undefined1 *)0x0;
      }
      if (__n != (undefined1 *)0x0) {
        firmata::FirmataClass::write(&Firmata,2,argv,(size_t)__n);
        firmata::FirmataClass::write(&Firmata,10,argv,(size_t)__n);
      }
      if (uVar13 < 0x3c) {
        __n = &digitalPin;
        if ((&digitalPin)[uVar13] == NC) {
          _Var6 = false;
        }
        else {
          uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
          if (uVar8 == 0) {
            _Var6 = false;
          }
          else {
            __n = &digitalPin;
            uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
            if (uVar8 == 1) {
              _Var6 = false;
            }
            else {
              __n = &digitalPin;
              _Var6 = pin_in_pinmap((&digitalPin)[uVar13],(PinMap_conflict *)&PinMap_PWM);
            }
          }
        }
      }
      else {
        _Var6 = false;
      }
      if (_Var6 != false) {
        firmata::FirmataClass::write(&Firmata,3,argv,(size_t)__n);
        firmata::FirmataClass::write(&Firmata,8,argv,(size_t)__n);
      }
      if (uVar13 < 0x3c) {
        if ((&digitalPin)[uVar13] == NC) {
          sVar12 = 0;
        }
        else {
          uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
          if (uVar8 == 0) {
            sVar12 = 0;
          }
          else {
            uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
            if (uVar8 == 1) {
              sVar12 = 0;
            }
            else {
              sVar12 = 1;
            }
          }
        }
      }
      else {
        sVar12 = 0;
      }
      if (sVar12 != 0) {
        firmata::FirmataClass::write(&Firmata,4,argv,sVar12);
        firmata::FirmataClass::write(&Firmata,0xe,argv,sVar12);
      }
      if (uVar13 < 0x3c) {
        if ((&digitalPin)[uVar13] == NC) {
          in_r3 = (undefined1 *)0x0;
        }
        else {
          uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
          if (uVar8 == 0) {
            in_r3 = (undefined1 *)0x0;
          }
          else {
            uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
            if (uVar8 == 1) {
              in_r3 = (undefined1 *)0x0;
            }
            else {
              _Var6 = pin_in_pinmap((&digitalPin)[uVar13],(PinMap_conflict *)&PinMap_I2C_SDA);
              in_r3 = (undefined1 *)(uint)_Var6;
              if (in_r3 == (undefined1 *)0x0) {
                _Var6 = pin_in_pinmap((&digitalPin)[uVar13],(PinMap_conflict *)&PinMap_I2C_SCL);
                in_r3 = (undefined1 *)(uint)_Var6;
              }
            }
          }
        }
      }
      else {
        in_r3 = (undefined1 *)0x0;
      }
      if (in_r3 != (undefined1 *)0x0) {
        firmata::FirmataClass::write(&Firmata,6,argv,(size_t)in_r3);
        firmata::FirmataClass::write(&Firmata,1,argv,(size_t)in_r3);
      }
      firmata::FirmataClass::write(&Firmata,0x7f,argv,(size_t)in_r3);
    }
    firmata::FirmataClass::write(&Firmata,0xf7,argv,(size_t)in_r3);
    return;
  case 'm':
    if (uVar13 != 0) {
      bVar1 = *argv;
      firmata::FirmataClass::write(&Firmata,0xf0,argv,(size_t)in_r3);
      firmata::FirmataClass::write(&Firmata,0x6e,argv,(size_t)in_r3);
      firmata::FirmataClass::write(&Firmata,(uint)bVar1,argv,(size_t)in_r3);
      if (bVar1 < 0x3c) {
        bVar7 = firmata::FirmataClass::getPinMode(&Firmata,bVar1);
        firmata::FirmataClass::write(&Firmata,(uint)bVar7,argv,(size_t)in_r3);
        uVar13 = firmata::FirmataClass::getPinState(&Firmata,bVar1);
        firmata::FirmataClass::write(&Firmata,uVar13 & 0x7f,argv,(size_t)in_r3);
        uVar13 = firmata::FirmataClass::getPinState(&Firmata,bVar1);
        in_r3 = (undefined1 *)0xff80;
        if ((uVar13 & 0xff80) != 0) {
          iVar9 = firmata::FirmataClass::getPinState(&Firmata,bVar1);
          firmata::FirmataClass::write(&Firmata,(uint)(iVar9 << 0x12) >> 0x19,argv,(size_t)in_r3);
        }
        uVar13 = firmata::FirmataClass::getPinState(&Firmata,bVar1);
        if ((uVar13 & 0xc000) != 0) {
          iVar9 = firmata::FirmataClass::getPinState(&Firmata,bVar1);
          firmata::FirmataClass::write(&Firmata,(uint)(iVar9 << 0xb) >> 0x19,argv,(size_t)in_r3);
        }
      }
      firmata::FirmataClass::write(&Firmata,0xf7,argv,(size_t)in_r3);
      return;
    }
    break;
  case 'o':
    if (1 < uVar13) {
      uVar11 = (uint)argv[1];
      if (2 < uVar13) {
        uVar11 = uVar11 | (uint)argv[2] << 7;
      }
      if (3 < uVar13) {
        uVar11 = uVar11 | (uint)argv[3] << 0xe;
      }
      analogWriteCallback(*argv,uVar11);
      return;
    }
    break;
  case 'p':
    if (4 < uVar13) {
      bVar1 = *argv;
      uVar13 = (uint)bVar1;
      bVar7 = argv[1];
      bVar2 = argv[2];
      bVar3 = argv[3];
      bVar4 = argv[4];
      if (uVar13 < 0x3c) {
        if ((&digitalPin)[uVar13] == NC) {
          bVar15 = false;
        }
        else {
          uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
          if (uVar8 == 0) {
            bVar15 = false;
          }
          else {
            uVar8 = pinNametoDigitalPin((&digitalPin)[uVar13]);
            if (uVar8 == 1) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
          }
        }
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        if (servoPinMap[uVar13] < 0xc) {
          bVar15 = Servo::attached(servos + servoPinMap[uVar13]);
        }
        else {
          bVar15 = false;
        }
        if (bVar15 != false) {
          detachServo(bVar1);
        }
        attachServo(bVar1,(uint)bVar7 + (uint)bVar2 * 0x80,(uint)bVar3 + (uint)bVar4 * 0x80);
        setPinModeCallback(bVar1,4);
        return;
      }
    }
    break;
  case 'v':
    bVar1 = argv[1];
    if ((bVar1 & 0x20) != 0) {
      firmata::FirmataClass::sendString(&Firmata,"10-bit addressing not supported");
      return;
    }
    address = *argv;
    bVar15 = (bVar1 & 0x40) == 0;
    if ((bVar1 & 0x18) < 0x19) {
      switch(bVar1 & 0x18) {
      case 0:
        TwoWire::beginTransmission(&Wire,address);
        for (uVar11 = 2; uVar11 < uVar13; uVar11 = uVar11 + 2 & 0xff) {
          wireWrite(argv[uVar11 + 1] * -0x80 + argv[uVar11]);
        }
        TwoWire::endTransmission(&Wire);
        return;
      case 8:
        if (uVar13 == 6) {
          iVar9 = (uint)argv[2] + (uint)argv[3] * 0x80;
          bVar10 = argv[4] + argv[5] * -0x80;
        }
        else {
          bVar10 = argv[2] + argv[3] * -0x80;
          iVar9 = -1;
        }
        readAndReportData(address,iVar9,bVar10,bVar15);
        return;
      case 0x10:
        if (queryIndex + 1 < 8) {
          if (uVar13 == 6) {
            iVar9 = (uint)argv[2] + (uint)argv[3] * 0x80;
            bVar10 = argv[4] + argv[5] * -0x80;
          }
          else {
            bVar10 = argv[2] + argv[3] * -0x80;
            iVar9 = -1;
          }
          queryIndex = queryIndex + '\x01';
          iVar14 = (int)queryIndex;
          query[iVar14].addr = address;
          query[iVar14].reg = iVar9;
          query[iVar14].bytes = bVar10;
          *(bool *)(iVar14 * 0xc + 0x20000191) = bVar15;
          return;
        }
        firmata::FirmataClass::sendString(&Firmata,"too many queries");
        return;
      case 0x18:
        if (queryIndex < 1) {
          queryIndex = -1;
          return;
        }
      }
      for (uVar13 = 0; iVar9 = queryIndex + 1, (int)uVar13 < iVar9; uVar13 = uVar13 + 1 & 0xff) {
        if (address == query[uVar13].addr) goto LAB_08001e66;
      }
      uVar13 = 0;
LAB_08001e66:
      for (; (int)uVar13 < iVar9; uVar13 = uVar13 + 1 & 0xff) {
        if (uVar13 < 8) {
          iVar14 = uVar13 + 1;
          query[uVar13].addr = query[iVar14].addr;
          query[uVar13].reg = query[iVar14].reg;
          query[uVar13].bytes = query[iVar14].bytes;
          query[uVar13].stopTX = query[iVar14].stopTX;
        }
      }
      queryIndex = queryIndex + -1;
      return;
    }
    break;
  case 'x':
    uVar11 = (uint)*argv + (uint)argv[1] * 0x80;
    if ((1 < uVar13) && (uVar11 != 0)) {
      i2cReadDelayTime = uVar11;
    }
    if (!isI2CEnabled) {
      enableI2CPins();
      return;
    }
    break;
  case 'z':
    if ((1 < uVar13) &&
       (samplingInterval = (uint)*argv + (uint)argv[1] * 0x80, samplingInterval == 0)) {
      samplingInterval = 1;
      return;
    }
  }
  return;
}


////>>0x080022f8>>loop>>////

/* WARNING: Unknown calling convention */

void loop(void)

{
  bool bVar1;
  PinName_conflict PVar2;
  byte bVar3;
  int iVar4;
  uint32_t uVar5;
  byte i;
  uint uVar6;
  byte analogPin;
  uint ulPin;
  
  checkDigitalInputs();
  while (iVar4 = firmata::FirmataClass::available(&Firmata), iVar4 != 0) {
    firmata::FirmataClass::processInput(&Firmata);
  }
  currentMillis = millis();
  if (samplingInterval < currentMillis - previousMillis) {
    previousMillis = previousMillis + samplingInterval;
    for (uVar6 = 0; uVar6 < 0x3c; uVar6 = uVar6 + 1 & 0xff) {
      ulPin = uVar6 - 0x2e & 0xff;
      if (ulPin < 0xe) {
        if (uVar6 < 0x3c) {
          PVar2 = (&digitalPin)[uVar6];
        }
        else {
          PVar2 = NC;
        }
        uVar5 = pinNametoDigitalPin(PVar2);
        if (uVar5 == 0) {
          bVar1 = false;
        }
        else {
          if (uVar6 < 0x3c) {
            PVar2 = (&digitalPin)[uVar6];
          }
          else {
            PVar2 = NC;
          }
          uVar5 = pinNametoDigitalPin(PVar2);
          if (uVar5 == 1) {
            bVar1 = false;
          }
          else {
            bVar3 = firmata::FirmataClass::getPinMode(&Firmata,(byte)uVar6);
            if (bVar3 == '\x02') {
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
      if ((bVar1) && ((analogInputsToReport >> ulPin & 1U) != 0)) {
        uVar5 = analogRead(ulPin);
        firmata::FirmataClass::sendAnalog(&Firmata,(byte)ulPin,uVar5);
      }
    }
    if (-1 < queryIndex) {
      for (uVar6 = 0; (int)uVar6 < queryIndex + 1; uVar6 = uVar6 + 1 & 0xff) {
        readAndReportData(query[uVar6].addr,query[uVar6].reg,query[uVar6].bytes,query[uVar6].stopTX)
        ;
      }
    }
  }
  return;
}


////>>0x08002400>>isTimerActive>>////

/* WARNING: Unknown calling convention */

boolean isTimerActive(timer16_Sequence_t timer)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (0xb < uVar1) {
      return false;
    }
    if (((byte)servos[(uint)timer * 0xc + uVar1].Pin & 0x40) != 0) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return true;
}


////>>0x0800242c>>initISR>>////

/* WARNING: Unknown calling convention */

void initISR(stimer_t *obj)

{
  TimerPulseInit((stimer_t_conflict *)obj,60000,0x5dc,ServoIrqHandle + 1);
  return;
}


////>>0x08002444>>ServoIrqHandle>>////

/* WARNING: Unknown calling convention */

void ServoIrqHandle(stimer_t *obj,uint32_t channel)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)obj->idx;
  if ((timerChannel[uVar4] & 0x80U) == 0) {
    iVar3 = uVar4 * 0xc;
    if (timerChannel[uVar4] + iVar3 < (int)(uint)ServoCount) {
      if (((byte)servos[timerChannel[uVar4] + iVar3].Pin & 0x40) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      digitalWrite((byte)servos[iVar3 + timerChannel[uVar4]].Pin & 0x3f,0);
    }
  }
  else {
    setTimerCounter((stimer_t_conflict *)obj,0);
  }
  timerChannel[uVar4] = timerChannel[uVar4] + '\x01';
  iVar3 = uVar4 * 0xc;
  if (timerChannel[uVar4] + iVar3 < (int)(uint)ServoCount) {
    if (timerChannel[uVar4] < '\f') {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if (((byte)servos[timerChannel[uVar4] + iVar3].Pin & 0x40) != 0) {
      digitalWrite((byte)servos[timerChannel[uVar4] + iVar3].Pin & 0x3f,1);
    }
    uVar2 = getTimerCounter((stimer_t_conflict *)obj);
    setCCRRegister((stimer_t_conflict *)obj,channel,
                   servos[iVar3 + timerChannel[uVar4]].ticks + uVar2);
    return;
  }
  uVar2 = getTimerCounter((stimer_t_conflict *)obj);
  if (uVar2 + 4 < 20000) {
    setCCRRegister((stimer_t_conflict *)obj,channel,20000);
  }
  else {
    uVar2 = getTimerCounter((stimer_t_conflict *)obj);
    setCCRRegister((stimer_t_conflict *)obj,channel,uVar2 + 4);
  }
  timerChannel[uVar4] = -1;
  return;
}


////>>0x08002578>>finISR>>////

/* WARNING: Unknown calling convention */

void finISR(stimer_t *obj)

{
  TimerPulseDeinit((stimer_t_conflict *)obj);
  return;
}


////>>0x08002580>>Servo>>////

/* DWARF original prototype: Servo *  Servo(Servo * this) */

Servo * __thiscall Servo::Servo(Servo *this)

{
  uint8_t uVar1;
  uint uVar2;
  
  uVar2 = (uint)ServoCount;
  if (0xb < uVar2) {
    this->servoIndex = 0xff;
    return this;
  }
  uVar1 = ServoCount + '\x01';
  this->servoIndex = ServoCount;
  ServoCount = uVar1;
  servos[uVar2].ticks = 0x5dc;
  return this;
}


////>>0x080025ac>>attach>>////

/* DWARF original prototype: uint8_t  attach(Servo * this, int pin, int min, int max) */

uint8_t __thiscall Servo::attach(Servo *this,int pin,int min,int max)

{
  timer16_Sequence_t timer_00;
  boolean bVar1;
  timer16_Sequence_t timer;
  int iVar2;
  
  if (this->servoIndex < 0xc) {
    pinMode(pin,1);
    servos[this->servoIndex].Pin =
         (ServoPin_t)((byte)servos[this->servoIndex].Pin & 0xc0 | (byte)pin & 0x3f);
    iVar2 = -min + 0x220;
    if (iVar2 < 0) {
      iVar2 = -min + 0x223;
    }
    this->min = (int8_t)((uint)(iVar2 << 0x16) >> 0x18);
    iVar2 = -max + 0x960;
    if (iVar2 < 0) {
      iVar2 = -max + 0x963;
    }
    this->max = (int8_t)((uint)(iVar2 << 0x16) >> 0x18);
    timer_00 = this->servoIndex / 0xc;
    bVar1 = isTimerActive(timer_00);
    if (!bVar1) {
      _timer.idx = timer_00;
      initISR(&_timer);
    }
    servos[this->servoIndex].Pin = (ServoPin_t)((byte)servos[this->servoIndex].Pin | 0x40);
  }
  return this->servoIndex;
}


////>>0x08002634>>attach>>////

/* DWARF original prototype: uint8_t  attach(Servo * this, int pin) */

uint8_t __thiscall Servo::attach(Servo *this,int pin)

{
  uint8_t uVar1;
  
  uVar1 = attach(this,pin,0x220,0x960);
  return uVar1;
}


////>>0x08002644>>detach>>////

/* DWARF original prototype: void  detach(Servo * this) */

void __thiscall Servo::detach(Servo *this)

{
  byte bVar1;
  boolean bVar2;
  
  bVar1 = this->servoIndex;
  servos[bVar1].Pin = (ServoPin_t)((byte)servos[bVar1].Pin & 0xbf);
  bVar2 = isTimerActive(bVar1 / 0xc);
  if (!bVar2) {
    finISR(&_timer);
  }
  return;
}


////>>0x0800267c>>writeMicroseconds>>////

/* DWARF original prototype: void  writeMicroseconds(Servo * this, int value) */

void __thiscall Servo::writeMicroseconds(Servo *this,int value)

{
  uint uVar1;
  int iVar2;
  
  if (this->servoIndex < 0xc) {
    uVar1 = (0x88 - this->min) * 4;
    if ((uVar1 - value == 0 || (int)uVar1 < value) &&
       (iVar2 = 600 - this->max, uVar1 = iVar2 * 4,
       value == uVar1 || value + iVar2 * -4 < 0 != SBORROW4(value,uVar1))) {
      uVar1 = value;
    }
    servos[this->servoIndex].ticks = uVar1;
  }
  return;
}


////>>0x080026b0>>write>>////

/* DWARF original prototype: void  write(Servo * this, int value) */

ssize_t __thiscall Servo::write(Servo *this,int __fd,void *__buf,size_t __n)

{
  if (__fd < 0x220) {
    if (__fd < 0) {
      __fd = 0;
    }
    else if (0xb4 < __fd) {
      __fd = 0xb4;
    }
    __fd = map(__fd,0,0xb4,(0x88 - this->min) * 4,(600 - this->max) * 4);
  }
  writeMicroseconds(this,__fd);
  return (ssize_t)this;
}


////>>0x080026f8>>attached>>////

/* DWARF original prototype: bool  attached(Servo * this) */

bool __thiscall Servo::attached(Servo *this)

{
  return SUB41(((uint)(byte)servos[this->servoIndex].Pin << 0x19) >> 0x1f,0);
}


////>>0x0800270c>>available>>////

/* DWARF original prototype: int  available(TwoWire * this) */

int __thiscall TwoWire::available(TwoWire *this)

{
  return (uint)rxBufferLength - (uint)rxBufferIndex;
}


////>>0x08002720>>read>>////

/* DWARF original prototype: int  read(TwoWire * this) */

ssize_t __thiscall TwoWire::read(TwoWire *this,int __fd,void *__buf,size_t __nbytes)

{
  uint uVar1;
  
  uVar1 = (uint)rxBufferIndex;
  if (uVar1 < rxBufferLength) {
    rxBufferIndex = rxBufferIndex + '\x01';
    return (uint)rxBuffer[uVar1];
  }
  return -1;
}


////>>0x0800274c>>peek>>////

/* DWARF original prototype: int  peek(TwoWire * this) */

int __thiscall TwoWire::peek(TwoWire *this)

{
  if ((uint)rxBufferIndex < (uint)rxBufferLength) {
    return (uint)rxBuffer[rxBufferIndex];
  }
  return -1;
}


////>>0x08002774>>onRequestService>>////

/* WARNING: Unknown calling convention */

void TwoWire::onRequestService(void)

{
  if (user_onRequest != (_func_void *)0x0) {
    txBufferIndex = '\0';
    txBufferLength = '\0';
    (*user_onRequest)();
  }
  return;
}


////>>0x08002798>>flush>>////

/* DWARF original prototype: void  flush(TwoWire * this) */

void __thiscall TwoWire::flush(TwoWire *this)

{
  rxBufferIndex = '\0';
  rxBufferLength = '\0';
  if (rxBuffer != (uint8_t *)0x0) {
    memset(rxBuffer,0,(uint)rxBufferAllocated);
  }
  txBufferIndex = '\0';
  txBufferLength = '\0';
  if (txBuffer != (uint8_t *)0x0) {
    memset(txBuffer,0,(uint)txBufferAllocated);
  }
  return;
}


////>>0x080027f0>>write>>////

/* DWARF original prototype: size_t  write(TwoWire * this, uint8_t * data, size_t quantity) */

ssize_t __thiscall TwoWire::write(TwoWire *this,int __fd,void *__buf,size_t __n)

{
  i2c_status_e_conflict iVar1;
  size_t __size;
  
  if (transmitting == '\0') {
    iVar1 = i2c_slave_write_IT((i2c_t_conflict *)&this->_i2c,(uint8_t *)__fd,(uint16_t)__buf);
    if (iVar1 == I2C_OK) {
      return (ssize_t)__buf;
    }
    return 0;
  }
  __size = (uint)txBufferLength + (int)__buf;
  if (txBufferAllocated < __size) {
    if (__size < 0x20) {
      __size = 0x20;
    }
    txBuffer = (uint8_t *)realloc(txBuffer,__size);
    if (txBuffer == (uint8_t *)0x0) {
      txBufferAllocated = '\0';
    }
    else {
      txBufferAllocated = (uint8_t)__size;
    }
  }
  if (txBuffer == (uint8_t *)0x0) {
    (this->super_Stream).super_Print.write_error = 1;
    return 0;
  }
  memcpy(txBuffer + txBufferIndex,(void *)__fd,(size_t)__buf);
  txBufferIndex = txBufferIndex + (char)__buf;
  txBufferLength = txBufferIndex;
  return (ssize_t)__buf;
}


////>>0x0800288c>>write>>////

/* DWARF original prototype: size_t  write(TwoWire * this, uint8_t data) */

ssize_t __thiscall TwoWire::write(TwoWire *this,int __fd,void *__buf,size_t __n)

{
  i2c_status_e_conflict iVar1;
  ssize_t sVar2;
  size_t __size;
  uint8_t local_11;
  
  local_11 = (uint8_t)__fd;
  if (transmitting == '\0') {
    iVar1 = i2c_slave_write_IT((i2c_t_conflict *)&this->_i2c,&local_11,1);
    if (iVar1 == I2C_OK) {
      sVar2 = 1;
    }
    else {
      sVar2 = 0;
    }
  }
  else {
    __size = txBufferLength + 1;
    if (txBufferAllocated < __size) {
      if (__size < 0x20) {
        __size = 0x20;
      }
      txBuffer = (uint8_t *)realloc(txBuffer,__size);
      if (txBuffer == (uint8_t *)0x0) {
        txBufferAllocated = '\0';
      }
      else {
        txBufferAllocated = (uint8_t)__size;
      }
    }
    if (txBuffer == (uint8_t *)0x0) {
      (this->super_Stream).super_Print.write_error = 1;
      sVar2 = 0;
    }
    else {
      txBuffer[txBufferIndex] = local_11;
      txBufferIndex = txBufferIndex + '\x01';
      sVar2 = 1;
      txBufferLength = txBufferIndex;
    }
  }
  return sVar2;
}


////>>0x0800291c>>TwoWire>>////

/* DWARF original prototype: TwoWire *  TwoWire(TwoWire * this) */

TwoWire * __thiscall TwoWire::TwoWire(TwoWire *this)

{
  (this->super_Stream).super_Print.write_error = 0;
  (this->super_Stream)._timeout = 1000;
  (this->super_Stream).super_Print._vptr_Print = (_func_int_varargs **)&PTR_write_1_0800a5a0;
  (this->_i2c).sda = PB_9;
  (this->_i2c).scl = PB_8;
  return this;
}


////>>0x08002948>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if (__initialize_p != 1) {
    return;
  }
  if (__priority == 0xffff) {
    TwoWire::TwoWire(&Wire);
  }
  return;
}


////>>0x08002968>>begin>>////

/* DWARF original prototype: void  begin(TwoWire * this, uint8_t address) */

void __thiscall TwoWire::begin(TwoWire *this,uint8_t address)

{
  uint32_t ownAddress;
  i2c_t *obj;
  
  rxBufferIndex = '\0';
  rxBufferLength = '\0';
  if (rxBuffer != (uint8_t *)0x0) {
    memset(rxBuffer,0,(uint)rxBufferAllocated);
  }
  txBufferIndex = '\0';
  txBufferLength = '\0';
  if (txBuffer != (uint8_t *)0x0) {
    memset(txBuffer,0,(uint)txBufferAllocated);
  }
  transmitting = '\0';
  ownAddress = (address & 0x7f) << 1;
  this->ownAddress = (uint8_t)ownAddress;
  if (address == 0x33) {
    this->master = true;
  }
  else {
    this->master = false;
  }
  obj = &this->_i2c;
  i2c_custom_init((i2c_t_conflict *)obj,I2C_100KHz,0x4000,ownAddress,this->master);
  if (this->master == false) {
    i2c_attachSlaveTxEvent((i2c_t_conflict *)obj,onRequestService + 1);
    i2c_attachSlaveRxEvent((i2c_t_conflict *)obj,onReceiveService + 1);
  }
  return;
}


////>>0x08002a1c>>begin>>////

/* DWARF original prototype: void  begin(TwoWire * this, int address) */

void __thiscall TwoWire::begin(TwoWire *this,int address)

{
  begin(this,(uint8_t)address);
  return;
}


////>>0x08002a26>>begin>>////

/* DWARF original prototype: void  begin(TwoWire * this) */

void __thiscall TwoWire::begin(TwoWire *this)

{
  begin(this,0x33);
  return;
}


////>>0x08002a30>>beginTransmission>>////

/* DWARF original prototype: void  beginTransmission(TwoWire * this, uint8_t address) */

void __thiscall TwoWire::beginTransmission(TwoWire *this,uint8_t address)

{
  transmitting = '\x01';
  txAddress = address << 1;
  txBufferIndex = '\0';
  txBufferLength = '\0';
  return;
}


////>>0x08002a58>>endTransmission>>////

/* DWARF original prototype: uint8_t  endTransmission(TwoWire * this, uint8_t sendStop) */

uint8_t __thiscall TwoWire::endTransmission(TwoWire *this,uint8_t sendStop)

{
  i2c_status_e_conflict iVar1;
  uint8_t uVar2;
  
  if (this->master == false) {
    uVar2 = '\x04';
  }
  else {
    iVar1 = i2c_master_write((i2c_t_conflict *)&this->_i2c,txAddress,txBuffer,(ushort)txBufferLength
                            );
    if (iVar1 == I2C_OK) {
      uVar2 = '\0';
    }
    else if (iVar1 == I2C_TIMEOUT) {
      uVar2 = '\x01';
    }
    else {
      uVar2 = '\x04';
    }
    if (txBuffer != (uint8_t *)0x0) {
      memset(txBuffer,0,(uint)txBufferAllocated);
    }
    txBufferIndex = '\0';
    txBufferLength = '\0';
    transmitting = '\0';
  }
  return uVar2;
}


////>>0x08002ac0>>endTransmission>>////

/* DWARF original prototype: uint8_t  endTransmission(TwoWire * this) */

uint8_t __thiscall TwoWire::endTransmission(TwoWire *this)

{
  uint8_t uVar1;
  
  uVar1 = endTransmission(this,'\x01');
  return uVar1;
}


////>>0x08002acc>>allocateRxBuffer>>////

/* WARNING: Unknown calling convention */

void TwoWire::allocateRxBuffer(size_t length)

{
  if (rxBufferAllocated < length) {
    if (length < 0x20) {
      length = 0x20;
    }
    rxBuffer = (uint8_t *)realloc(rxBuffer,length);
    if (rxBuffer == (uint8_t *)0x0) {
      rxBufferAllocated = '\0';
    }
    else {
      rxBufferAllocated = (uint8_t)length;
    }
  }
  return;
}


////>>0x08002b00>>onReceiveService>>////

/* WARNING: Unknown calling convention */

void TwoWire::onReceiveService(uint8_t *inBytes,int numBytes)

{
  if ((user_onReceive != (_func_void_int *)0x0) && (rxBufferLength <= rxBufferIndex)) {
    allocateRxBuffer(numBytes);
    if (rxBuffer == (uint8_t *)0x0) {
      _Error_Handler("/home/bo/.arduino15/packages/STM32/hardware/stm32/1.3.0/libraries/Wire/src/Wire.cpp"
                     ,0x183);
    }
    memcpy(rxBuffer,inBytes,numBytes);
    rxBufferIndex = '\0';
    rxBufferLength = (uint8_t)numBytes;
    (*user_onReceive)(numBytes);
  }
  return;
}


////>>0x08002b68>>requestFrom>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08002bb2 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: uint8_t  requestFrom(TwoWire * this, uint8_t address, uint8_t quantity,
   uint32_t iaddress, uint8_t isize, uint8_t sendStop) */

uint8_t __thiscall
TwoWire::requestFrom
          (TwoWire *this,uint8_t address,uint8_t quantity,uint32_t iaddress,uint8_t isize,
          uint8_t sendStop)

{
  i2c_status_e_conflict iVar1;
  uint uVar2;
  
  uVar2 = (uint)isize;
  if (this->master == false) {
    return '\0';
  }
  allocateRxBuffer((uint)quantity);
  if (rxBuffer != (uint8_t *)0x0) {
    if (uVar2 != 0) {
      beginTransmission(this,address);
      if (3 < uVar2) {
        uVar2 = 3;
      }
      while( true ) {
        if (uVar2 == 0) break;
        (**(this->super_Stream).super_Print._vptr_Print)
                  (this,iaddress >> ((uVar2 - 1 & 0x1f) << 3) & 0xff);
        uVar2 = uVar2 - 1 & 0xff;
      }
      endTransmission(this,'\0');
    }
    iVar1 = i2c_master_read((i2c_t_conflict *)&this->_i2c,address << 1,rxBuffer,(ushort)quantity);
    if (iVar1 != I2C_OK) {
      quantity = '\0';
    }
    rxBufferIndex = '\0';
    rxBufferLength = quantity;
    return quantity;
  }
  (this->super_Stream).super_Print.write_error = 1;
  return '\0';
}


////>>0x08002c00>>requestFrom>>////

/* DWARF original prototype: uint8_t  requestFrom(TwoWire * this, uint8_t address, uint8_t quantity,
   uint8_t sendStop) */

uint8_t __thiscall
TwoWire::requestFrom(TwoWire *this,uint8_t address,uint8_t quantity,uint8_t sendStop)

{
  uint8_t uVar1;
  
  uVar1 = requestFrom(this,address,quantity,0,'\0',sendStop);
  return uVar1;
}


////>>0x08002c14>>requestFrom>>////

/* DWARF original prototype: uint8_t  requestFrom(TwoWire * this, uint8_t address, uint8_t quantity)
    */

uint8_t __thiscall TwoWire::requestFrom(TwoWire *this,uint8_t address,uint8_t quantity)

{
  uint8_t uVar1;
  
  uVar1 = requestFrom(this,address,quantity,'\x01');
  return uVar1;
}


////>>0x08002c1e>>_GLOBAL__sub_I__ZN7TwoWire8rxBufferE>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__ZN7TwoWire8rxBufferE(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x08002c2c>>staticAnalogCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticAnalogCallback(void *param_1,uint8_t command,uint16_t value)

{
  if (currentAnalogCallback != (callbackFunction)0x0) {
    (*currentAnalogCallback)(command,(int)value);
  }
  return;
}


////>>0x08002c40>>staticDigitalCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticDigitalCallback(void *param_1,uint8_t command,uint16_t value)

{
  if (currentDigitalCallback != (callbackFunction)0x0) {
    (*currentDigitalCallback)(command,(int)value);
  }
  return;
}


////>>0x08002c54>>staticPinModeCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticPinModeCallback(void *param_1,uint8_t command,uint16_t value)

{
  if (currentPinModeCallback != (callbackFunction)0x0) {
    (*currentPinModeCallback)(command,(int)value);
  }
  return;
}


////>>0x08002c68>>staticPinValueCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticPinValueCallback(void *param_1,uint8_t command,uint16_t value)

{
  if (currentPinValueCallback != (callbackFunction)0x0) {
    (*currentPinValueCallback)(command,(int)value);
  }
  return;
}


////>>0x08002c7c>>staticReportAnalogCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticReportAnalogCallback(void *param_1,uint8_t command,uint16_t value)

{
  if (currentReportAnalogCallback != (callbackFunction)0x0) {
    (*currentReportAnalogCallback)(command,(int)value);
  }
  return;
}


////>>0x08002c90>>staticReportDigitalCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticReportDigitalCallback
               (void *param_1,uint8_t command,uint16_t value)

{
  if (currentReportDigitalCallback != (callbackFunction)0x0) {
    (*currentReportDigitalCallback)(command,(int)value);
  }
  return;
}


////>>0x08002ca4>>staticStringCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticStringCallback(void *param_1,char *c_str)

{
  if (currentStringCallback != (stringCallbackFunction)0x0) {
    (*currentStringCallback)(c_str);
  }
  return;
}


////>>0x08002cb8>>staticSysexCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticSysexCallback
               (void *param_1,uint8_t command,size_t argc,uint8_t *argv)

{
  if (currentSysexCallback != (sysexCallbackFunction)0x0) {
    (*currentSysexCallback)(command,(uint8_t)argc,argv);
  }
  return;
}


////>>0x08002cd0>>staticSystemResetCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticSystemResetCallback(void *param_1)

{
  if (currentSystemResetCallback != (systemCallbackFunction)0x0) {
    (*currentSystemResetCallback)();
  }
  return;
}


////>>0x08002ce0>>FirmataClass>>////

/* DWARF original prototype: FirmataClass *  FirmataClass(FirmataClass * this) */

FirmataClass * __thiscall firmata::FirmataClass::FirmataClass(FirmataClass *this)

{
  FirmataParser *this_00;
  
  FirmataMarshaller::FirmataMarshaller(&this->marshaller);
  this_00 = &this->parser;
  FirmataParser::FirmataParser(this_00,this->parserBuffer,0x40);
  this->firmwareVersionCount = '\0';
  this->firmwareVersionVector = (byte *)0x0;
  this->blinkVersionDisabled = false;
  FirmataParser::attach(this_00,0xe0,staticAnalogCallback + 1,(void *)0x0);
  FirmataParser::attach(this_00,0x90,staticDigitalCallback + 1,(void *)0x0);
  FirmataParser::attach(this_00,0xc0,staticReportAnalogCallback + 1,(void *)0x0);
  FirmataParser::attach(this_00,0xd0,staticReportDigitalCallback + 1,(void *)0x0);
  FirmataParser::attach(this_00,0xf4,staticPinModeCallback + 1,(void *)0x0);
  FirmataParser::attach(this_00,0xf5,staticPinValueCallback + 1,(void *)0x0);
  FirmataParser::attach(this_00,'q',staticStringCallback + 1,(void *)0x0);
  FirmataParser::attach(this_00,0xf0,staticSysexCallback + 1,(void *)0x0);
  FirmataParser::attach(this_00,'y',staticReportFirmwareCallback + 1,this);
  FirmataParser::attach(this_00,0xf9,staticReportVersionCallback + 1,this);
  FirmataParser::attach(this_00,0xff,staticSystemResetCallback + 1,(void *)0x0);
  return this;
}


////>>0x08002dbc>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if (__initialize_p != 1) {
    return;
  }
  if (__priority == 0xffff) {
    firmata::FirmataClass::FirmataClass(&Firmata);
  }
  return;
}


////>>0x08002ddc>>printVersion>>////

/* DWARF original prototype: void  printVersion(FirmataClass * this) */

void __thiscall firmata::FirmataClass::printVersion(FirmataClass *this)

{
  FirmataMarshaller::sendVersion(&this->marshaller,'\x02','\x05');
  return;
}


////>>0x08002dea>>staticReportVersionCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticReportVersionCallback(void *context)

{
  if (context != (void *)0x0) {
    printVersion((FirmataClass *)context);
    return;
  }
  return;
}


////>>0x08002df6>>printFirmwareVersion>>////

/* DWARF original prototype: void  printFirmwareVersion(FirmataClass * this) */

void __thiscall firmata::FirmataClass::printFirmwareVersion(FirmataClass *this)

{
  uint8_t *puVar1;
  
  if (this->firmwareVersionCount == 0) {
    return;
  }
  puVar1 = this->firmwareVersionVector;
  FirmataMarshaller::sendFirmwareVersion
            (&this->marshaller,*puVar1,puVar1[1],this->firmwareVersionCount - 2,puVar1 + 2);
  return;
}


////>>0x08002e1a>>staticReportFirmwareCallback>>////

/* WARNING: Unknown calling convention */

void firmata::FirmataClass::staticReportFirmwareCallback
               (void *context,size_t param_2,size_t param_3,char *param_4)

{
  if (context != (void *)0x0) {
    printFirmwareVersion((FirmataClass *)context);
    return;
  }
  return;
}


////>>0x08002e26>>begin>>////

/* DWARF original prototype: void  begin(FirmataClass * this, Stream * s) */

void __thiscall firmata::FirmataClass::begin(FirmataClass *this,Stream *s)

{
  this->FirmataStream = s;
  FirmataMarshaller::begin(&this->marshaller,s);
  printVersion(this);
  printFirmwareVersion(this);
  return;
}


////>>0x08002e44>>setFirmwareNameAndVersion>>////

/* DWARF original prototype: void  setFirmwareNameAndVersion(FirmataClass * this, char * name, byte
   major, byte minor) */

void __thiscall
firmata::FirmataClass::setFirmwareNameAndVersion
          (FirmataClass *this,char *name,byte major,byte minor)

{
  byte bVar1;
  char *pcVar2;
  char *extension;
  char *pcVar3;
  char *firmwareName;
  byte *pbVar4;
  size_t sVar5;
  
  pcVar2 = strstr(name,".cpp");
  pcVar3 = strrchr(name,0x2f);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = strrchr(name,0x5c);
  }
  if (pcVar3 != (char *)0x0) {
    name = pcVar3 + 1;
  }
  if (pcVar2 == (char *)0x0) {
    sVar5 = strlen(name);
    this->firmwareVersionCount = (char)sVar5 + '\x02';
  }
  else {
    this->firmwareVersionCount = ((char)pcVar2 - (char)name) + '\x02';
  }
  free(this->firmwareVersionVector);
  bVar1 = this->firmwareVersionCount;
  pbVar4 = (byte *)malloc(bVar1 + 1);
  this->firmwareVersionVector = pbVar4;
  pbVar4[bVar1] = '\0';
  *pbVar4 = major;
  pbVar4[1] = minor;
  strncpy((char *)(pbVar4 + 2),name,this->firmwareVersionCount - 2);
  return;
}


////>>0x08002ec4>>available>>////

/* DWARF original prototype: int  available(FirmataClass * this) */

int __thiscall firmata::FirmataClass::available(FirmataClass *this)

{
  int iVar1;
  
  iVar1 = (*(this->FirmataStream->super_Print)._vptr_Print[2])();
  return iVar1;
}


////>>0x08002ed2>>processInput>>////

/* DWARF original prototype: void  processInput(FirmataClass * this) */

void __thiscall firmata::FirmataClass::processInput(FirmataClass *this)

{
  int iVar1;
  int inputData;
  
  iVar1 = (*(this->FirmataStream->super_Print)._vptr_Print[3])();
  if (iVar1 != -1) {
    FirmataParser::parse(&this->parser,(uint8_t)iVar1);
  }
  return;
}


////>>0x08002ef2>>sendAnalog>>////

/* DWARF original prototype: void  sendAnalog(FirmataClass * this, byte pin, int value) */

void __thiscall firmata::FirmataClass::sendAnalog(FirmataClass *this,byte pin,int value)

{
  FirmataMarshaller::sendAnalog(&this->marshaller,pin,(uint16_t)value);
  return;
}


////>>0x08002efe>>sendDigitalPort>>////

/* DWARF original prototype: void  sendDigitalPort(FirmataClass * this, byte portNumber, int
   portData) */

void __thiscall
firmata::FirmataClass::sendDigitalPort(FirmataClass *this,byte portNumber,int portData)

{
  FirmataMarshaller::sendDigitalPort(&this->marshaller,portNumber,(uint16_t)portData);
  return;
}


////>>0x08002f0a>>sendSysex>>////

/* DWARF original prototype: void  sendSysex(FirmataClass * this, byte command, byte bytec, byte *
   bytev) */

void __thiscall
firmata::FirmataClass::sendSysex(FirmataClass *this,byte command,byte bytec,byte *bytev)

{
  FirmataMarshaller::sendSysex(&this->marshaller,command,(uint)bytec,bytev);
  return;
}


////>>0x08002f14>>sendString>>////

/* DWARF original prototype: void  sendString(FirmataClass * this, char * string) */

void __thiscall firmata::FirmataClass::sendString(FirmataClass *this,char *string)

{
  FirmataMarshaller::sendString(&this->marshaller,string);
  return;
}


////>>0x08002f1e>>write>>////

/* DWARF original prototype: void  write(FirmataClass * this, byte c) */

ssize_t __thiscall firmata::FirmataClass::write(FirmataClass *this,int __fd,void *__buf,size_t __n)

{
  int iVar1;
  
  iVar1 = (**(this->FirmataStream->super_Print)._vptr_Print)();
  return iVar1;
}


////>>0x08002f2c>>attach>>////

/* DWARF original prototype: void  attach(FirmataClass * this, uint8_t command, callbackFunction
   newFunction) */

void __thiscall
firmata::FirmataClass::attach(FirmataClass *this,uint8_t command,callbackFunction newFunction)

{
  callbackFunction p_Var1;
  
  if (command == 0xd0) {
    currentReportDigitalCallback = newFunction;
    return;
  }
  if (0xd0 < command) {
    if (command == 0xf4) {
      currentPinModeCallback = newFunction;
      return;
    }
    p_Var1 = newFunction;
    if ((command != 0xf5) && (p_Var1 = currentPinValueCallback, command == 0xe0)) {
      currentAnalogCallback = newFunction;
      return;
    }
    currentPinValueCallback = p_Var1;
    return;
  }
  if (command == 0x90) {
    currentDigitalCallback = newFunction;
    return;
  }
  if (command != 0xc0) {
    return;
  }
  currentReportAnalogCallback = newFunction;
  return;
}


////>>0x08002f84>>attach>>////

/* DWARF original prototype: void  attach(FirmataClass * this, uint8_t command,
   systemCallbackFunction newFunction) */

void __thiscall
firmata::FirmataClass::attach(FirmataClass *this,uint8_t command,systemCallbackFunction newFunction)

{
  if (command == 0xff) {
    currentSystemResetCallback = newFunction;
  }
  return;
}


////>>0x08002f94>>attach>>////

/* DWARF original prototype: void  attach(FirmataClass * this, uint8_t command,
   sysexCallbackFunction newFunction) */

void __thiscall
firmata::FirmataClass::attach(FirmataClass *this,uint8_t command,sysexCallbackFunction newFunction)

{
  currentSysexCallback = newFunction;
  return;
}


////>>0x08002fa0>>getPinMode>>////

/* DWARF original prototype: byte  getPinMode(FirmataClass * this, byte pin) */

byte __thiscall firmata::FirmataClass::getPinMode(FirmataClass *this,byte pin)

{
  return this->pinConfig[pin];
}


////>>0x08002fa8>>setPinMode>>////

/* DWARF original prototype: void  setPinMode(FirmataClass * this, byte pin, byte config) */

void __thiscall firmata::FirmataClass::setPinMode(FirmataClass *this,byte pin,byte config)

{
  if (this->pinConfig[pin] != '\x7f') {
    this->pinConfig[pin] = config;
  }
  return;
}


////>>0x08002fba>>getPinState>>////

/* DWARF original prototype: int  getPinState(FirmataClass * this, byte pin) */

int __thiscall firmata::FirmataClass::getPinState(FirmataClass *this,byte pin)

{
  return this->pinState[pin];
}


////>>0x08002fc2>>setPinState>>////

/* DWARF original prototype: void  setPinState(FirmataClass * this, byte pin, int state) */

void __thiscall firmata::FirmataClass::setPinState(FirmataClass *this,byte pin,int state)

{
  this->pinState[pin] = state;
  return;
}


////>>0x08002fca>>strobeBlinkPin>>////

/* DWARF original prototype: void  strobeBlinkPin(FirmataClass * this, byte pin, int count, int
   onInterval, int offInterval) */

void __thiscall
firmata::FirmataClass::strobeBlinkPin
          (FirmataClass *this,byte pin,int count,int onInterval,int offInterval)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < count; uVar1 = uVar1 + 1 & 0xff) {
    delay(offInterval);
    digitalWrite((uint)pin,1);
    delay(onInterval);
    digitalWrite((uint)pin,0);
  }
  return;
}


////>>0x08003002>>blinkVersion>>////

/* DWARF original prototype: void  blinkVersion(FirmataClass * this) */

void __thiscall firmata::FirmataClass::blinkVersion(FirmataClass *this)

{
  if (this->blinkVersionDisabled != false) {
    return;
  }
  pinMode(0xd,1);
  strobeBlinkPin(this,'\r',2,0x28,0xd2);
  delay(0xfa);
  strobeBlinkPin(this,'\r',5,0x28,0xd2);
  delay(0x7d);
  return;
}


////>>0x08003048>>begin>>////

/* DWARF original prototype: void  begin(FirmataClass * this, long speed) */

void __thiscall firmata::FirmataClass::begin(FirmataClass *this,long speed)

{
  HardwareSerial::begin(&Serial2,speed,'\x06');
  blinkVersion(this);
  begin(this,&Serial2.super_Stream);
  return;
}


////>>0x0800306c>>_GLOBAL__sub_I_Firmata>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I_Firmata(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x0800307a>>encodeByteStream>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08003102 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void  encodeByteStream(FirmataMarshaller * this, size_t bytec, uint8_t
   * bytev, size_t max_bytes) */

void __thiscall
firmata::FirmataMarshaller::encodeByteStream
          (FirmataMarshaller *this,size_t bytec,uint8_t *bytev,size_t max_bytes)

{
  uint8_t transmit_byte;
  uint8_t outstanding_bit_cache;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)*bytev;
  if (max_bytes == 0) {
    max_bytes = 0xffffffff;
  }
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 0;
  while ((uVar4 < bytec && (uVar3 < max_bytes))) {
    (**(this->FirmataStream->super_Print)._vptr_Print)
              (this->FirmataStream,((uint)bytev[uVar4] << (uVar2 & 0xff) | uVar1) & 0x7f);
    uVar1 = (int)(uint)bytev[uVar4] >> (7 - uVar2 & 0xff) & 0xff;
    uVar2 = uVar2 + 1;
    while ((uVar3 = uVar3 + 1, 6 < uVar2 && (uVar3 < max_bytes))) {
      (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,uVar1 & 0x7f);
      uVar1 = uVar1 >> 7;
      uVar2 = uVar2 - 7;
    }
    uVar4 = uVar4 + 1;
  }
  if ((uVar2 != 0) && (uVar3 < max_bytes)) {
    (**(this->FirmataStream->super_Print)._vptr_Print)
              (this->FirmataStream,(1 << (uVar2 & 0xff)) - 1U & uVar1);
  }
  return;
}


////>>0x08003106>>sendExtendedAnalog>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x0800311e */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void  sendExtendedAnalog(FirmataMarshaller * this, uint8_t pin, size_t
   bytec, uint8_t * bytev) */

void __thiscall
firmata::FirmataMarshaller::sendExtendedAnalog
          (FirmataMarshaller *this,uint8_t pin,size_t bytec,uint8_t *bytev)

{
  if (this->FirmataStream != (Stream *)0x0) {
    (**(this->FirmataStream->super_Print)._vptr_Print)(this,0xf0);
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,0x6f);
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,(uint)pin);
    encodeByteStream(this,bytec,bytev,bytec);
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,0xf7);
  }
  return;
}


////>>0x0800314e>>FirmataMarshaller>>////

/* DWARF original prototype: FirmataMarshaller *  FirmataMarshaller(FirmataMarshaller * this) */

FirmataMarshaller * __thiscall
firmata::FirmataMarshaller::FirmataMarshaller(FirmataMarshaller *this)

{
  this->FirmataStream = (Stream *)0x0;
  return this;
}


////>>0x08003154>>begin>>////

/* DWARF original prototype: void  begin(FirmataMarshaller * this, Stream * s) */

void __thiscall firmata::FirmataMarshaller::begin(FirmataMarshaller *this,Stream *s)

{
  this->FirmataStream = s;
  return;
}


////>>0x08003158>>sendAnalog>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x0800318c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void  sendAnalog(FirmataMarshaller * this, uint8_t pin, uint16_t value)
    */

void __thiscall
firmata::FirmataMarshaller::sendAnalog(FirmataMarshaller *this,uint8_t pin,uint16_t value)

{
  uint16_t local_a;
  
  if (this->FirmataStream != (Stream *)0x0) {
    local_a = value;
    if ((pin < 0x10) && (value < 0x4000)) {
      (**(this->FirmataStream->super_Print)._vptr_Print)(this,pin | 0xe0);
      encodeByteStream(this,2,(uint8_t *)&local_a,2);
    }
    else {
      sendExtendedAnalog(this,pin,2,(uint8_t *)&local_a);
    }
  }
  return;
}


////>>0x0800319e>>sendDigitalPort>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080031ba */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void  sendDigitalPort(FirmataMarshaller * this, uint8_t portNumber,
   uint16_t portData) */

void __thiscall
firmata::FirmataMarshaller::sendDigitalPort
          (FirmataMarshaller *this,uint8_t portNumber,uint16_t portData)

{
  uint16_t local_a;
  
  if (this->FirmataStream != (Stream *)0x0) {
    local_a = portData;
    (**(this->FirmataStream->super_Print)._vptr_Print)(this,portNumber & 0xf | 0x90);
    encodeByteStream(this,2,(uint8_t *)&local_a,2);
  }
  return;
}


////>>0x080031ce>>sendFirmwareVersion>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080031e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void  sendFirmwareVersion(FirmataMarshaller * this, uint8_t major,
   uint8_t minor, size_t bytec, uint8_t * bytev) */

void __thiscall
firmata::FirmataMarshaller::sendFirmwareVersion
          (FirmataMarshaller *this,uint8_t major,uint8_t minor,size_t bytec,uint8_t *bytev)

{
  _func_int_varargs *p_Var1;
  uint uVar2;
  
  if (this->FirmataStream != (Stream *)0x0) {
    p_Var1 = *(this->FirmataStream->super_Print)._vptr_Print;
    (*p_Var1)(this,0xf0,(uint)minor,p_Var1,bytec);
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,0x79);
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,(uint)major);
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,(uint)minor);
    for (uVar2 = 0; uVar2 < bytec; uVar2 = uVar2 + 1) {
      encodeByteStream(this,1,bytev + uVar2,0);
    }
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,0xf7);
  }
  return;
}


////>>0x0800322c>>sendVersion>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08003240 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void  sendVersion(FirmataMarshaller * this, uint8_t major, uint8_t
   minor) */

void __thiscall
firmata::FirmataMarshaller::sendVersion(FirmataMarshaller *this,uint8_t major,uint8_t minor)

{
  if (this->FirmataStream != (Stream *)0x0) {
    (**(this->FirmataStream->super_Print)._vptr_Print)(this,0xf9);
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,(uint)major);
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,(uint)minor);
    return;
  }
  return;
}


////>>0x0800325a>>sendSysex>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08003272 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: void  sendSysex(FirmataMarshaller * this, uint8_t command, size_t
   bytec, uint8_t * bytev) */

void __thiscall
firmata::FirmataMarshaller::sendSysex
          (FirmataMarshaller *this,uint8_t command,size_t bytec,uint8_t *bytev)

{
  uint uVar1;
  
  if (this->FirmataStream != (Stream *)0x0) {
    (**(this->FirmataStream->super_Print)._vptr_Print)(this,0xf0);
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,(uint)command);
    for (uVar1 = 0; uVar1 < bytec; uVar1 = uVar1 + 1) {
      encodeByteStream(this,1,bytev + uVar1,0);
    }
    (**(this->FirmataStream->super_Print)._vptr_Print)(this->FirmataStream,0xf7);
  }
  return;
}


////>>0x080032a2>>sendString>>////

/* DWARF original prototype: void  sendString(FirmataMarshaller * this, char * string) */

void __thiscall firmata::FirmataMarshaller::sendString(FirmataMarshaller *this,char *string)

{
  size_t bytec;
  
  bytec = strlen(string);
  sendSysex(this,'q',bytec,(uint8_t *)string);
  return;
}


////>>0x080032bc>>FirmataParser>>////

/* DWARF original prototype: FirmataParser *  FirmataParser(FirmataParser * this, uint8_t *
   dataBuffer, size_t dataBufferSize) */

FirmataParser * __thiscall
firmata::FirmataParser::FirmataParser(FirmataParser *this,uint8_t *dataBuffer,size_t dataBufferSize)

{
  this->dataBuffer = dataBuffer;
  this->dataBufferSize = dataBufferSize;
  this->executeMultiByteCommand = '\0';
  this->multiByteChannel = '\0';
  this->waitForData = 0;
  this->parsingSysex = false;
  this->sysexBytesRead = 0;
  this->currentAnalogCallbackContext = (void *)0x0;
  this->currentDigitalCallbackContext = (void *)0x0;
  this->currentReportAnalogCallbackContext = (void *)0x0;
  this->currentReportDigitalCallbackContext = (void *)0x0;
  this->currentPinModeCallbackContext = (void *)0x0;
  this->currentPinValueCallbackContext = (void *)0x0;
  this->currentReportFirmwareCallbackContext = (void *)0x0;
  this->currentReportVersionCallbackContext = (void *)0x0;
  this->currentDataBufferOverflowCallbackContext = (void *)0x0;
  this->currentStringCallbackContext = (void *)0x0;
  this->currentSysexCallbackContext = (void *)0x0;
  this->currentSystemResetCallbackContext = (void *)0x0;
  this->currentAnalogCallback = (callbackFunction)0x0;
  this->currentDigitalCallback = (callbackFunction)0x0;
  this->currentReportAnalogCallback = (callbackFunction)0x0;
  this->currentReportDigitalCallback = (callbackFunction)0x0;
  this->currentPinModeCallback = (callbackFunction)0x0;
  this->currentPinValueCallback = (callbackFunction)0x0;
  this->currentDataBufferOverflowCallback = (dataBufferOverflowCallbackFunction)0x0;
  this->currentStringCallback = (stringCallbackFunction)0x0;
  this->currentSysexCallback = (sysexCallbackFunction)0x0;
  this->currentReportFirmwareCallback = (versionCallbackFunction)0x0;
  this->currentReportVersionCallback = (systemCallbackFunction)0x0;
  this->currentSystemResetCallback = (systemCallbackFunction)0x0;
  this->allowBufferUpdate = dataBuffer == (uint8_t *)0x0;
  return this;
}


////>>0x08003306>>attach>>////

/* DWARF original prototype: void  attach(FirmataParser * this, uint8_t command, callbackFunction
   newFunction, void * context) */

void __thiscall
firmata::FirmataParser::attach
          (FirmataParser *this,uint8_t command,callbackFunction newFunction,void *context)

{
  if (command == 0xd0) {
    this->currentReportDigitalCallback = newFunction;
    this->currentReportDigitalCallbackContext = context;
    return;
  }
  if (0xd0 < command) {
    if (command == 0xf4) {
      this->currentPinModeCallback = newFunction;
      this->currentPinModeCallbackContext = context;
      return;
    }
    if (command == 0xf5) {
      this->currentPinValueCallback = newFunction;
      this->currentPinValueCallbackContext = context;
    }
    else if (command == 0xe0) {
      this->currentAnalogCallback = newFunction;
      this->currentAnalogCallbackContext = context;
      return;
    }
    return;
  }
  if (command == 0x90) {
    this->currentDigitalCallback = newFunction;
    this->currentDigitalCallbackContext = context;
    return;
  }
  if (command == 0xc0) {
    this->currentReportAnalogCallback = newFunction;
    this->currentReportAnalogCallbackContext = context;
    return;
  }
  return;
}


////>>0x08003346>>attach>>////

/* DWARF original prototype: void  attach(FirmataParser * this, uint8_t command,
   versionCallbackFunction newFunction, void * context) */

void __thiscall
firmata::FirmataParser::attach
          (FirmataParser *this,uint8_t command,versionCallbackFunction newFunction,void *context)

{
  if (command == 'y') {
    this->currentReportFirmwareCallback = newFunction;
    this->currentReportFirmwareCallbackContext = context;
  }
  return;
}


////>>0x08003350>>attach>>////

/* DWARF original prototype: void  attach(FirmataParser * this, uint8_t command,
   systemCallbackFunction newFunction, void * context) */

void __thiscall
firmata::FirmataParser::attach
          (FirmataParser *this,uint8_t command,systemCallbackFunction newFunction,void *context)

{
  if (command == 0xf9) {
    this->currentReportVersionCallback = newFunction;
    this->currentReportVersionCallbackContext = context;
    return;
  }
  if (command != 0xff) {
    return;
  }
  this->currentSystemResetCallback = newFunction;
  this->currentSystemResetCallbackContext = context;
  return;
}


////>>0x08003366>>attach>>////

/* DWARF original prototype: void  attach(FirmataParser * this, uint8_t command,
   stringCallbackFunction newFunction, void * context) */

void __thiscall
firmata::FirmataParser::attach
          (FirmataParser *this,uint8_t command,stringCallbackFunction newFunction,void *context)

{
  if (command == 'q') {
    this->currentStringCallback = newFunction;
    this->currentStringCallbackContext = context;
  }
  return;
}


////>>0x08003370>>attach>>////

/* DWARF original prototype: void  attach(FirmataParser * this, uint8_t command,
   sysexCallbackFunction newFunction, void * context) */

void __thiscall
firmata::FirmataParser::attach
          (FirmataParser *this,uint8_t command,sysexCallbackFunction newFunction,void *context)

{
  this->currentSysexCallback = newFunction;
  this->currentSysexCallbackContext = context;
  return;
}


////>>0x08003376>>bufferDataAtPosition>>////

/* DWARF original prototype: bool  bufferDataAtPosition(FirmataParser * this, uint8_t data, size_t
   pos) */

bool __thiscall
firmata::FirmataParser::bufferDataAtPosition(FirmataParser *this,uint8_t data,size_t pos)

{
  bool bVar1;
  bool bufferOverflow;
  
  if (pos < this->dataBufferSize) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (this->currentDataBufferOverflowCallback != (dataBufferOverflowCallbackFunction)0x0) {
      this->allowBufferUpdate = true;
      (*this->currentDataBufferOverflowCallback)(this->currentDataBufferOverflowCallbackContext);
      if (pos < this->dataBufferSize) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    this->dataBuffer[pos] = data;
  }
  return bVar1;
}


////>>0x080033a8>>decodeByteStream>>////

/* DWARF original prototype: size_t  decodeByteStream(FirmataParser * this, size_t bytec, uint8_t *
   bytev) */

size_t __thiscall
firmata::FirmataParser::decodeByteStream(FirmataParser *this,size_t bytec,uint8_t *bytev)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  
  sVar2 = 0;
  for (uVar3 = 0; uVar3 < bytec; uVar3 = uVar3 + 2) {
    bVar1 = bytev[uVar3];
    bytev[sVar2] = bVar1;
    bytev[sVar2] = bytev[uVar3 + 1] << 7 | bVar1;
    sVar2 = sVar2 + 1;
  }
  return sVar2;
}


////>>0x080033cc>>processSysexMessage>>////

/* DWARF original prototype: void  processSysexMessage(FirmataParser * this) */

void __thiscall firmata::FirmataParser::processSysexMessage(FirmataParser *this)

{
  uint8_t uVar1;
  size_t sVar2;
  uint8_t *puVar3;
  
  puVar3 = this->dataBuffer;
  uVar1 = *puVar3;
  if (uVar1 == 'q') {
    if (this->currentStringCallback != (stringCallbackFunction)0x0) {
      sVar2 = decodeByteStream(this,this->sysexBytesRead - 1,puVar3 + 1);
      bufferDataAtPosition(this,'\0',sVar2 + 1);
      (*this->currentStringCallback)
                (this->currentStringCallbackContext,(char *)(this->dataBuffer + 1));
      return;
    }
  }
  else if (uVar1 == 'y') {
    if (this->currentReportFirmwareCallback != (versionCallbackFunction)0x0) {
      if (this->sysexBytesRead < 3) {
        (*this->currentReportFirmwareCallback)
                  (this->currentReportFirmwareCallbackContext,0,0,(char *)0x0);
        return;
      }
      sVar2 = decodeByteStream(this,this->sysexBytesRead - 3,puVar3 + 3);
      bufferDataAtPosition(this,'\0',sVar2 + 3);
      puVar3 = this->dataBuffer;
      (*this->currentReportFirmwareCallback)
                (this->currentReportFirmwareCallbackContext,(uint)puVar3[1],(uint)puVar3[2],
                 (char *)(puVar3 + 3));
      return;
    }
  }
  else if (this->currentSysexCallback != (sysexCallbackFunction)0x0) {
    (*this->currentSysexCallback)
              (this->currentSysexCallbackContext,uVar1,this->sysexBytesRead - 1,puVar3 + 1);
  }
  return;
}


////>>0x0800344a>>systemReset>>////

/* DWARF original prototype: void  systemReset(FirmataParser * this) */

void __thiscall firmata::FirmataParser::systemReset(FirmataParser *this)

{
  size_t i;
  
  this->waitForData = 0;
  this->executeMultiByteCommand = '\0';
  this->multiByteChannel = '\0';
  for (i = 0; i < this->dataBufferSize; i = i + 1) {
    this->dataBuffer[i] = '\0';
  }
  this->parsingSysex = false;
  this->sysexBytesRead = 0;
  if (this->currentSystemResetCallback != (systemCallbackFunction)0x0) {
    (*this->currentSystemResetCallback)(this->currentSystemResetCallbackContext);
  }
  return;
}


////>>0x08003474>>parse>>////

/* DWARF original prototype: void  parse(FirmataParser * this, uint8_t inputData) */

void __thiscall firmata::FirmataParser::parse(FirmataParser *this,uint8_t inputData)

{
  byte bVar1;
  uint uVar2;
  size_t pos;
  
  uVar2 = (uint)inputData;
  if (this->parsingSysex != false) {
    if (uVar2 != 0xf7) {
      bufferDataAtPosition(this,inputData,this->sysexBytesRead);
      this->sysexBytesRead = this->sysexBytesRead + 1;
      return;
    }
    this->parsingSysex = false;
    processSysexMessage(this);
    return;
  }
  if ((this->waitForData == 0) || (0x7f < uVar2)) {
    if (uVar2 < 0xf0) {
      this->multiByteChannel = inputData & 0xf;
      uVar2 = uVar2 & 0xf0;
    }
    if (uVar2 == 0xf0) {
      this->parsingSysex = true;
      this->sysexBytesRead = 0;
      return;
    }
    if (uVar2 < 0xf1) {
      if (uVar2 != 0xc0) {
        if (uVar2 < 0xc1) {
          if (uVar2 != 0x90) {
            return;
          }
        }
        else {
          if (uVar2 == 0xd0) goto LAB_0800359c;
          if (uVar2 != 0xe0) {
            return;
          }
        }
LAB_08003586:
        this->waitForData = 2;
        this->executeMultiByteCommand = (uint8_t)uVar2;
        return;
      }
LAB_0800359c:
      this->waitForData = 1;
      this->executeMultiByteCommand = (uint8_t)uVar2;
      return;
    }
    if (uVar2 != 0xf9) {
      if (0xf9 < uVar2) {
        if (uVar2 == 0xff) {
          systemReset(this);
          return;
        }
        return;
      }
      if (1 < uVar2 - 0xf4) {
        return;
      }
      goto LAB_08003586;
    }
    if (this->currentReportVersionCallback != (systemCallbackFunction)0x0) {
      (*this->currentReportVersionCallback)(this->currentReportVersionCallbackContext);
    }
  }
  else {
    pos = this->waitForData - 1;
    this->waitForData = pos;
    bufferDataAtPosition(this,inputData,pos);
    if ((this->waitForData == 0) && (bVar1 = this->executeMultiByteCommand, bVar1 != 0)) {
      if (bVar1 == 0xd0) {
        if (this->currentReportDigitalCallback != (callbackFunction)0x0) {
          (*this->currentReportDigitalCallback)
                    (this->currentReportDigitalCallbackContext,this->multiByteChannel,
                     (uint16_t)*this->dataBuffer);
        }
      }
      else if (bVar1 < 0xd1) {
        if (bVar1 == 0x90) {
          if (this->currentDigitalCallback != (callbackFunction)0x0) {
            (*this->currentDigitalCallback)
                      (this->currentDigitalCallbackContext,this->multiByteChannel,
                       (ushort)this->dataBuffer[1] + (ushort)*this->dataBuffer * 0x80);
          }
        }
        else if ((bVar1 == 0xc0) && (this->currentReportAnalogCallback != (callbackFunction)0x0)) {
          (*this->currentReportAnalogCallback)
                    (this->currentReportAnalogCallbackContext,this->multiByteChannel,
                     (uint16_t)*this->dataBuffer);
        }
      }
      else if (bVar1 == 0xf4) {
        if (this->currentPinModeCallback != (callbackFunction)0x0) {
          (*this->currentPinModeCallback)
                    (this->currentPinModeCallbackContext,this->dataBuffer[1],
                     (uint16_t)*this->dataBuffer);
        }
      }
      else if (bVar1 == 0xf5) {
        if (this->currentPinValueCallback != (callbackFunction)0x0) {
          (*this->currentPinValueCallback)
                    (this->currentPinValueCallbackContext,this->dataBuffer[1],
                     (uint16_t)*this->dataBuffer);
        }
      }
      else if ((bVar1 == 0xe0) && (this->currentAnalogCallback != (callbackFunction)0x0)) {
        (*this->currentAnalogCallback)
                  (this->currentAnalogCallbackContext,this->multiByteChannel,
                   (ushort)this->dataBuffer[1] + (ushort)*this->dataBuffer * 0x80);
      }
      this->executeMultiByteCommand = '\0';
      return;
    }
  }
  return;
}


////>>0x080035b8>>SystemClock_Config>>////

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


////>>0x08003658>>Reset_Handler>>////

void Reset_Handler(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  for (iVar1 = 0; (undefined4 *)(iVar1 + 0x20000000) < &completed_8667; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x20000000) = *(undefined4 *)(&_sidata + iVar1);
  }
  for (puVar2 = &completed_8667; puVar2 < &_ebss; puVar2 = puVar2 + 1) {
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


////>>0x080036a0>>USB_HP_CAN1_TX_IRQHandler>>////

void USB_HP_CAN1_TX_IRQHandler(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080036a2>>init>>////

int init(EVP_PKEY_CTX *ctx)

{
  hw_config_init();
  return (int)ctx;
}


////>>0x080036ac>>pinNametoDigitalPin>>////

/* WARNING: Unknown calling convention */

uint32_t pinNametoDigitalPin(PinName_conflict p)

{
  uint32_t uVar1;
  
  if ((uint)((int)p << 0x18) >> 0x1c < 5) {
    for (uVar1 = 0; (uVar1 < 0x3c && ((int)p != (int)(char)(&digitalPin)[uVar1])); uVar1 = uVar1 + 1
        ) {
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


////>>0x080036d4>>HAL_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_MspInit(void)

{
  return;
}


////>>0x080036d8>>HAL_InitTick>>////

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


////>>0x08003724>>HAL_Init>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_Init(void)

{
  _DAT_40022000 = _DAT_40022000 | 0x10;
  HAL_NVIC_SetPriorityGrouping(3);
  HAL_InitTick(0xf);
  HAL_MspInit();
  return HAL_OK;
}


////>>0x08003748>>HAL_IncTick>>////

/* WARNING: Unknown calling convention */

void HAL_IncTick(void)

{
  uwTick = uwTickFreq + uwTick;
  return;
}


////>>0x08003760>>HAL_GetTick>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_GetTick(void)

{
  return uwTick;
}


////>>0x0800376c>>HAL_ADC_PollForConversion>>////

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
        if ((hadc->Instance->SR & 2) != 0) goto LAB_0800387e;
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
LAB_0800387e:
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


////>>0x080038dc>>HAL_ADC_GetValue>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef *hadc)

{
  return hadc->Instance->DR;
}


////>>0x080038e4>>HAL_ADC_ConfigChannel>>////

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


////>>0x08003a1c>>HAL_ADC_GetState>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_ADC_GetState(ADC_HandleTypeDef *hadc)

{
  return hadc->State;
}


////>>0x08003a20>>ADC_Enable>>////

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


////>>0x08003aa0>>HAL_ADC_Start>>////


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


////>>0x08003b8c>>ADC_ConversionStop_Disable>>////

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


////>>0x08003bd8>>HAL_ADC_Init>>////

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


////>>0x08003ce8>>HAL_ADC_DeInit>>////

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


////>>0x08003de4>>HAL_ADC_Stop>>////

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


////>>0x08003e20>>HAL_ADCEx_Calibration_Start>>////

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


////>>0x08003f0c>>HAL_NVIC_SetPriorityGrouping>>////


/* WARNING: Unknown calling convention */

void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup)

{
  uint32_t reg_value;
  
  _DAT_e000ed0c = (PriorityGroup & 7) << 8 | _DAT_e000ed0c & 0xf8ff | 0x5fa0000;
  return;
}


////>>0x08003f30>>HAL_NVIC_SetPriority>>////


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


////>>0x08003f94>>HAL_NVIC_EnableIRQ>>////

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


////>>0x08003fb0>>HAL_NVIC_DisableIRQ>>////

/* WARNING: Unknown calling convention */

void HAL_NVIC_DisableIRQ(IRQn_Type_conflict IRQn)

{
  uint uVar1;
  
  uVar1 = (uint)IRQn;
  if (-1 < (int)uVar1) {
    *(int *)(((uVar1 >> 5) + 0x20) * 4 + -0x1fff1f00) = 1 << (uVar1 & 0x1f);
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


////>>0x08003fd8>>HAL_SYSTICK_Config>>////


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


////>>0x08004004>>HAL_NVIC_ClearPendingIRQ>>////

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


////>>0x08004024>>HAL_SYSTICK_CLKSourceConfig>>////


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


////>>0x08004044>>HAL_SYSTICK_Callback>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_Callback(void)

{
  return;
}


////>>0x08004046>>HAL_SYSTICK_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_SYSTICK_IRQHandler(void)

{
  HAL_SYSTICK_Callback();
  return;
}


////>>0x08004050>>HAL_DMA_Abort_IT>>////


/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_DMA_Abort_IT(DMA_HandleTypeDef_conflict *hdma)

{
  DMA_Channel_TypeDef_conflict *pDVar1;
  
  if (hdma->State != HAL_DMA_STATE_BUSY) {
    hdma->ErrorCode = 4;
    return HAL_ERROR;
  }
  hdma->Instance->CCR = hdma->Instance->CCR & 0xfffffff1;
  hdma->Instance->CCR = hdma->Instance->CCR & 0xfffffffe;
  pDVar1 = hdma->Instance;
  if (pDVar1 == (DMA_Channel_TypeDef_conflict *)0x40020008) {
    _DAT_40020004 = 1;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef_conflict *)0x4002001c) {
    _DAT_40020004 = 0x10;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef_conflict *)0x40020030) {
    _DAT_40020004 = 0x100;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef_conflict *)0x40020044) {
    _DAT_40020004 = 0x1000;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef_conflict *)0x40020058) {
    _DAT_40020004 = 0x10000;
  }
  else if (pDVar1 == (DMA_Channel_TypeDef_conflict *)0x4002006c) {
    _DAT_40020004 = 0x100000;
  }
  else {
    _DAT_40020004 = 0x1000000;
  }
  hdma->State = HAL_DMA_STATE_READY;
  hdma->Lock = HAL_UNLOCKED;
  if (hdma->XferAbortCallback != (_func_void___DMA_HandleTypeDef_ptr_conflict *)0x0) {
    (*hdma->XferAbortCallback)(hdma);
    return HAL_OK;
  }
  return HAL_OK;
}


////>>0x080040e8>>HAL_GPIO_Init>>////


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
          if (uVar5 == 0) goto LAB_0800423a;
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
LAB_0800423a:
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
        if ((uVar5 == 0x10110000) || (uVar5 == 0x10120000)) goto LAB_0800423a;
      }
      else if ((uVar5 == 0x10310000) || ((uVar5 == 0x10320000 || (uVar5 == 0x10220000))))
      goto LAB_0800423a;
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


////>>0x080042d4>>HAL_GPIO_ReadPin>>////

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


////>>0x080042e2>>HAL_GPIO_WritePin>>////

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


////>>0x080042f0>>HAL_GPIO_EXTI_IRQHandler>>////


/* WARNING: Unknown calling convention */

void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin)

{
  if ((_DAT_40010414 & GPIO_Pin) != 0) {
    _DAT_40010414 = (uint)GPIO_Pin;
    HAL_GPIO_EXTI_Callback(GPIO_Pin);
  }
  return;
}


////>>0x0800430c>>I2C_Master_SB>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Master_SB(I2C_HandleTypeDef_conflict *hi2c)

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


////>>0x08004396>>I2C_Master_ADD10>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Master_ADD10(I2C_HandleTypeDef_conflict *hi2c)

{
  hi2c->Instance->DR = hi2c->Devaddress & 0xff;
  return HAL_OK;
}


////>>0x080043a2>>I2C_Master_ADDR>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Master_ADDR(I2C_HandleTypeDef_conflict *hi2c)

{
  uint32_t CurrentXferOptions;
  uint32_t uVar1;
  I2C_TypeDef_conflict *pIVar2;
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


////>>0x0800457c>>I2C_SlaveTransmit_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_SlaveTransmit_BTF(I2C_HandleTypeDef_conflict *hi2c)

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


////>>0x0800459c>>I2C_SlaveReceive_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_SlaveReceive_BTF(I2C_HandleTypeDef_conflict *hi2c)

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


////>>0x080045bc>>HAL_I2C_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MspInit(I2C_HandleTypeDef_conflict *hi2c)

{
  return;
}


////>>0x080045c0>>HAL_I2C_Init>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_I2C_Init(I2C_HandleTypeDef_conflict *hi2c)

{
  bool bVar1;
  uint32_t uVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  
  if (hi2c == (I2C_HandleTypeDef_conflict *)0x0) {
    return HAL_ERROR;
  }
  if (hi2c->State == HAL_I2C_STATE_RESET) {
    hi2c->Lock = HAL_UNLOCKED;
    HAL_I2C_MspInit(hi2c);
  }
  hi2c->State = HAL_I2C_STATE_BUSY;
  hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffffffe;
  uVar2 = HAL_RCC_GetPCLK1Freq();
  if ((hi2c->Init).ClockSpeed < 0x186a1) {
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
    return HAL_ERROR;
  }
  uVar3 = uVar2 / 1000000;
  hi2c->Instance->CR2 = uVar3;
  if (100000 < (hi2c->Init).ClockSpeed) {
    uVar3 = (uVar3 * 300) / 1000;
  }
  hi2c->Instance->TRISE = uVar3 + 1;
  uVar3 = (hi2c->Init).ClockSpeed;
  if (uVar3 < 0x186a1) {
    uVar2 = (uVar2 - 1) / (uVar3 << 1) + 1 & 0xfff;
    if (uVar2 < 4) {
      uVar2 = 4;
    }
  }
  else {
    uVar5 = (hi2c->Init).DutyCycle;
    if (uVar5 == 0) {
      uVar4 = (uVar2 - 1) / (uVar3 * 3);
    }
    else {
      uVar4 = (uVar2 - 1) / (uVar3 * 0x19);
    }
    if ((uVar4 + 1 & 0xfff) == 0) {
      uVar2 = 1;
    }
    else if (uVar5 == 0) {
      uVar2 = (uVar2 - 1) / (uVar3 * 3) + 1 & 0xfff | 0x8000;
    }
    else {
      uVar2 = (uVar2 - 1) / (uVar3 * 0x19) + 1 & 0xfff | 0xc000;
    }
  }
  hi2c->Instance->CCR = uVar2;
  hi2c->Instance->CR1 = (hi2c->Init).GeneralCallMode | (hi2c->Init).NoStretchMode;
  hi2c->Instance->OAR1 = (hi2c->Init).AddressingMode | (hi2c->Init).OwnAddress1;
  hi2c->Instance->OAR2 = (hi2c->Init).DualAddressMode | (hi2c->Init).OwnAddress2;
  hi2c->Instance->CR1 = hi2c->Instance->CR1 | 1;
  hi2c->ErrorCode = 0;
  hi2c->State = HAL_I2C_STATE_READY;
  hi2c->PreviousState = 0;
  hi2c->Mode = HAL_I2C_MODE_NONE;
  return HAL_OK;
}


////>>0x08004728>>HAL_I2C_Master_Transmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_I2C_Master_Transmit_IT
          (I2C_HandleTypeDef_conflict *hi2c,uint16_t DevAddress,uint8_t *pData,uint16_t Size)

{
  HAL_StatusTypeDef_conflict HVar1;
  I2C_TypeDef_conflict *pIVar2;
  uint32_t count;
  
  if (hi2c->State == HAL_I2C_STATE_READY) {
    count = (SystemCoreClock / 25000) * 0x19;
    do {
      if (count == 0) {
        hi2c->PreviousState = 0;
        hi2c->State = HAL_I2C_STATE_READY;
        hi2c->Lock = HAL_UNLOCKED;
        return HAL_TIMEOUT;
      }
      pIVar2 = hi2c->Instance;
      count = count - 1;
    } while ((pIVar2->SR2 & 2) != 0);
    if (hi2c->Lock == HAL_LOCKED) {
      HVar1 = HAL_BUSY;
    }
    else {
      hi2c->Lock = HAL_LOCKED;
      if ((pIVar2->CR1 & 1) == 0) {
        pIVar2->CR1 = pIVar2->CR1 | 1;
      }
      hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffff7ff;
      hi2c->State = HAL_I2C_STATE_BUSY_TX;
      hi2c->Mode = HAL_I2C_MODE_MASTER;
      HVar1 = HAL_OK;
      hi2c->ErrorCode = 0;
      hi2c->pBuffPtr = pData;
      hi2c->XferCount = Size;
      hi2c->XferOptions = 0xffff0000;
      hi2c->XferSize = hi2c->XferCount;
      hi2c->Devaddress = (uint)DevAddress;
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
      hi2c->Lock = HAL_UNLOCKED;
      hi2c->Instance->CR2 = hi2c->Instance->CR2 | 0x700;
    }
  }
  else {
    HVar1 = HAL_BUSY;
  }
  return HVar1;
}


////>>0x080047f4>>HAL_I2C_Master_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_I2C_Master_Receive_IT
          (I2C_HandleTypeDef_conflict *hi2c,uint16_t DevAddress,uint8_t *pData,uint16_t Size)

{
  HAL_StatusTypeDef_conflict HVar1;
  I2C_TypeDef_conflict *pIVar2;
  uint32_t count;
  
  if (hi2c->State == HAL_I2C_STATE_READY) {
    count = (SystemCoreClock / 25000) * 0x19;
    do {
      if (count == 0) {
        hi2c->PreviousState = 0;
        hi2c->State = HAL_I2C_STATE_READY;
        hi2c->Lock = HAL_UNLOCKED;
        return HAL_TIMEOUT;
      }
      pIVar2 = hi2c->Instance;
      count = count - 1;
    } while ((pIVar2->SR2 & 2) != 0);
    if (hi2c->Lock == HAL_LOCKED) {
      HVar1 = HAL_BUSY;
    }
    else {
      hi2c->Lock = HAL_LOCKED;
      if ((pIVar2->CR1 & 1) == 0) {
        pIVar2->CR1 = pIVar2->CR1 | 1;
      }
      hi2c->Instance->CR1 = hi2c->Instance->CR1 & 0xfffff7ff;
      hi2c->State = HAL_I2C_STATE_BUSY_RX;
      hi2c->Mode = HAL_I2C_MODE_MASTER;
      HVar1 = HAL_OK;
      hi2c->ErrorCode = 0;
      hi2c->pBuffPtr = pData;
      hi2c->XferCount = Size;
      hi2c->XferOptions = 0xffff0000;
      hi2c->XferSize = hi2c->XferCount;
      hi2c->Devaddress = (uint)DevAddress;
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x400;
      hi2c->Instance->CR1 = hi2c->Instance->CR1 | 0x100;
      hi2c->Lock = HAL_UNLOCKED;
      hi2c->Instance->CR2 = hi2c->Instance->CR2 | 0x700;
    }
  }
  else {
    HVar1 = HAL_BUSY;
  }
  return HVar1;
}


////>>0x080048c8>>HAL_I2C_Slave_Sequential_Transmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_I2C_Slave_Sequential_Transmit_IT
          (I2C_HandleTypeDef_conflict *hi2c,uint8_t *pData,uint16_t Size,uint32_t XferOptions)

{
  HAL_StatusTypeDef_conflict HVar1;
  I2C_TypeDef_conflict *pIVar2;
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


////>>0x08004954>>HAL_I2C_Slave_Sequential_Receive_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_I2C_Slave_Sequential_Receive_IT
          (I2C_HandleTypeDef_conflict *hi2c,uint8_t *pData,uint16_t Size,uint32_t XferOptions)

{
  HAL_StatusTypeDef_conflict HVar1;
  I2C_TypeDef_conflict *pIVar2;
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


////>>0x080049e0>>HAL_I2C_EnableListen_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_I2C_EnableListen_IT(I2C_HandleTypeDef_conflict *hi2c)

{
  I2C_TypeDef_conflict *pIVar1;
  
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


////>>0x08004a1e>>HAL_I2C_MasterTxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef_conflict *hi2c)

{
  return;
}


////>>0x08004a20>>HAL_I2C_MasterRxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef_conflict *hi2c)

{
  return;
}


////>>0x08004a22>>HAL_I2C_SlaveTxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_SlaveTxCpltCallback(I2C_HandleTypeDef_conflict *hi2c)

{
  return;
}


////>>0x08004a24>>I2C_SlaveTransmit_TXE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_SlaveTransmit_TXE(I2C_HandleTypeDef_conflict *hi2c)

{
  HAL_I2C_StateTypeDef_conflict HVar1;
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


////>>0x08004a74>>HAL_I2C_SlaveRxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef_conflict *hi2c)

{
  return;
}


////>>0x08004a76>>I2C_SlaveReceive_RXNE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_SlaveReceive_RXNE(I2C_HandleTypeDef_conflict *hi2c)

{
  HAL_I2C_StateTypeDef_conflict HVar1;
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


////>>0x08004ac2>>I2C_Slave_ADDR>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Slave_ADDR(I2C_HandleTypeDef_conflict *hi2c)

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


////>>0x08004aec>>I2C_Slave_AF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Slave_AF(I2C_HandleTypeDef_conflict *hi2c)

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


////>>0x08004b80>>HAL_I2C_MemTxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MemTxCpltCallback(I2C_HandleTypeDef_conflict *hi2c)

{
  return;
}


////>>0x08004b82>>I2C_MasterTransmit_TXE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_MasterTransmit_TXE(I2C_HandleTypeDef_conflict *hi2c)

{
  HAL_I2C_StateTypeDef_conflict HVar1;
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


////>>0x08004ccc>>I2C_MasterTransmit_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_MasterTransmit_BTF(I2C_HandleTypeDef_conflict *hi2c)

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


////>>0x08004d6a>>HAL_I2C_MemRxCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_MemRxCpltCallback(I2C_HandleTypeDef_conflict *hi2c)

{
  return;
}


////>>0x08004d6c>>I2C_MasterReceive_RXNE>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_MasterReceive_RXNE(I2C_HandleTypeDef_conflict *hi2c)

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


////>>0x08004e3c>>I2C_MasterReceive_BTF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_MasterReceive_BTF(I2C_HandleTypeDef_conflict *hi2c)

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


////>>0x08004f3a>>HAL_I2C_AbortCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef_conflict *hi2c)

{
  return;
}


////>>0x08004f3c>>I2C_ITError>>////

/* WARNING: Unknown calling convention */

void I2C_ITError(I2C_HandleTypeDef_conflict *hi2c)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint8_t *puVar2;
  I2C_TypeDef_conflict *pIVar3;
  
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


////>>0x08005084>>I2C_Slave_STOPF>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict I2C_Slave_STOPF(I2C_HandleTypeDef_conflict *hi2c)

{
  HAL_I2C_StateTypeDef_conflict HVar1;
  I2C_TypeDef_conflict *pIVar2;
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


////>>0x08005188>>HAL_I2C_EV_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_EV_IRQHandler(I2C_HandleTypeDef_conflict *hi2c)

{
  I2C_TypeDef_conflict *pIVar1;
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


////>>0x080052f0>>HAL_I2C_ER_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_ER_IRQHandler(I2C_HandleTypeDef_conflict *hi2c)

{
  HAL_I2C_StateTypeDef_conflict HVar1;
  I2C_TypeDef_conflict *pIVar2;
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


////>>0x080053cc>>I2C_DMAAbort>>////

/* WARNING: Unknown calling convention */

void I2C_DMAAbort(DMA_HandleTypeDef_conflict *hdma)

{
  I2C_HandleTypeDef_conflict *hi2c_00;
  I2C_HandleTypeDef_conflict *hi2c;
  
  hi2c_00 = (I2C_HandleTypeDef_conflict *)hdma->Parent;
  hi2c_00->Instance->CR1 = hi2c_00->Instance->CR1 & 0xfffffbff;
  hi2c_00->XferCount = 0;
  hi2c_00->hdmatx->XferAbortCallback = (_func_void___DMA_HandleTypeDef_ptr_conflict *)0x0;
  hi2c_00->hdmarx->XferAbortCallback = (_func_void___DMA_HandleTypeDef_ptr_conflict *)0x0;
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


////>>0x0800542a>>HAL_I2C_GetState>>////

/* WARNING: Unknown calling convention */

HAL_I2C_StateTypeDef_conflict HAL_I2C_GetState(I2C_HandleTypeDef_conflict *hi2c)

{
  return hi2c->State;
}


////>>0x08005430>>HAL_I2C_GetError>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_I2C_GetError(I2C_HandleTypeDef_conflict *hi2c)

{
  return hi2c->ErrorCode;
}


////>>0x08005434>>RCC_Delay>>////

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


////>>0x08005460>>HAL_RCC_OscConfig>>////


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


////>>0x08005840>>HAL_RCC_GetSysClockFreq>>////


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


////>>0x080058ac>>HAL_RCC_ClockConfig>>////


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


////>>0x08005a1c>>HAL_RCC_GetHCLKFreq>>////

/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetHCLKFreq(void)

{
  return SystemCoreClock;
}


////>>0x08005a28>>HAL_RCC_GetPCLK1Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK1Freq(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[(uint)(_DAT_40021004 << 0x15) >> 0x1d];
}


////>>0x08005a48>>HAL_RCC_GetPCLK2Freq>>////


/* WARNING: Unknown calling convention */

uint32_t HAL_RCC_GetPCLK2Freq(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_RCC_GetHCLKFreq();
  return uVar1 >> ""[(uint)(_DAT_40021004 << 0x12) >> 0x1d];
}


////>>0x08005a68>>HAL_RCC_GetClockConfig>>////


/* WARNING: Unknown calling convention */

void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef_conflict *RCC_ClkInitStruct,uint32_t *pFLatency)

{
  RCC_ClkInitStruct->ClockType = 0xf;
  RCC_ClkInitStruct->SYSCLKSource = _DAT_40021004 & 3;
  RCC_ClkInitStruct->AHBCLKDivider = _DAT_40021004 & 0xf0;
  RCC_ClkInitStruct->APB1CLKDivider = _DAT_40021004 & 0x700;
  RCC_ClkInitStruct->APB2CLKDivider = _DAT_40021004 >> 3 & 0x700;
  *pFLatency = _DAT_40022000 & 7;
  return;
}


////>>0x08005aa4>>HAL_RCCEx_PeriphCLKConfig>>////


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


////>>0x08005bb8>>HAL_RCCEx_GetPeriphCLKFreq>>////


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


////>>0x08005cb4>>HAL_RTC_AlarmIRQHandler>>////


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


////>>0x08005cec>>TIM_OC1_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_OC1_SetConfig(TIM_TypeDef_conflict *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  
  TIMx->CCER = TIMx->CCER & 0xfffffffe;
  uVar2 = TIMx->CR2;
  uVar3 = OC_Config->OCMode;
  uVar1 = TIMx->CCER & 0xfffffffd | OC_Config->OCPolarity;
  if (TIMx == (TIM_TypeDef_conflict *)0x40012c00) {
    uVar1 = (uVar1 & 0xfffffff7 | OC_Config->OCNPolarity) & 0xfffffffb;
    uVar2 = uVar2 & 0xfffffcff | OC_Config->OCIdleState | OC_Config->OCNIdleState;
  }
  TIMx->CR2 = uVar2;
  TIMx->CCMR1 = TIMx->CCMR1 & 0xffffff8c | uVar3;
  TIMx->CCR1 = OC_Config->Pulse;
  TIMx->CCER = uVar1;
  return;
}


////>>0x08005d48>>TIM_OC3_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_OC3_SetConfig(TIM_TypeDef_conflict *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  
  TIMx->CCER = TIMx->CCER & 0xfffffeff;
  uVar2 = TIMx->CR2;
  uVar3 = OC_Config->OCMode;
  uVar1 = TIMx->CCER & 0xfffffdff | OC_Config->OCPolarity << 8;
  if (TIMx == (TIM_TypeDef_conflict *)0x40012c00) {
    uVar1 = (uVar1 & 0xfffff7ff | OC_Config->OCNPolarity << 8) & 0xfffffbff;
    uVar2 = uVar2 & 0xffffcfff | OC_Config->OCIdleState << 4 | OC_Config->OCNIdleState << 4;
  }
  TIMx->CR2 = uVar2;
  TIMx->CCMR2 = TIMx->CCMR2 & 0xffffff8c | uVar3;
  TIMx->CCR3 = OC_Config->Pulse;
  TIMx->CCER = uVar1;
  return;
}


////>>0x08005dac>>TIM_OC4_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_OC4_SetConfig(TIM_TypeDef_conflict *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  TIMx->CCER = TIMx->CCER & 0xffffefff;
  uVar1 = TIMx->CR2;
  uVar2 = OC_Config->OCMode;
  uVar3 = OC_Config->OCPolarity;
  if (TIMx == (TIM_TypeDef_conflict *)0x40012c00) {
    uVar1 = uVar1 & 0xffffbfff | OC_Config->OCIdleState << 6;
  }
  TIMx->CR2 = uVar1;
  TIMx->CCMR2 = TIMx->CCMR2 & 0xffff8cff | uVar2 << 8;
  TIMx->CCR4 = OC_Config->Pulse;
  TIMx->CCER = TIMx->CCER & 0xffffdfff | uVar3 << 0xc;
  return;
}


////>>0x08005df4>>HAL_TIM_OC_DeInit>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_OC_DeInit(TIM_HandleTypeDef_conflict *htim)

{
  TIM_TypeDef_conflict *pTVar1;
  
  htim->State = HAL_TIM_STATE_BUSY;
  pTVar1 = htim->Instance;
  if (((pTVar1->CCER & 0x1111) == 0) && ((pTVar1->CCER & 0x444) == 0)) {
    pTVar1->CR1 = pTVar1->CR1 & 0xfffffffe;
  }
  HAL_TIM_OC_MspDeInit(htim);
  htim->State = HAL_TIM_STATE_RESET;
  htim->Lock = HAL_UNLOCKED;
  return HAL_OK;
}


////>>0x08005e2e>>HAL_TIM_PWM_DeInit>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_PWM_DeInit(TIM_HandleTypeDef_conflict *htim)

{
  TIM_TypeDef_conflict *pTVar1;
  
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


////>>0x08005e68>>HAL_TIM_IC_CaptureCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef_conflict *htim)

{
  return;
}


////>>0x08005e6a>>HAL_TIM_PWM_PulseFinishedCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef_conflict *htim)

{
  return;
}


////>>0x08005e6c>>HAL_TIM_TriggerCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_TriggerCallback(TIM_HandleTypeDef_conflict *htim)

{
  return;
}


////>>0x08005e6e>>HAL_TIM_IRQHandler>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_IRQHandler(TIM_HandleTypeDef_conflict *htim)

{
  TIM_TypeDef_conflict *pTVar1;
  
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


////>>0x08005fe8>>TIM_Base_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_Base_SetConfig(TIM_TypeDef_conflict *TIMx,TIM_Base_InitTypeDef_conflict *Structure)

{
  uint uVar1;
  
  uVar1 = TIMx->CR1;
  if ((((TIMx == (TIM_TypeDef_conflict *)0x40012c00) || (TIMx == (TIM_TypeDef_conflict *)0x40000000)
       ) || (TIMx == (TIM_TypeDef_conflict *)0x40000400)) ||
     (TIMx == (TIM_TypeDef_conflict *)0x40000800)) {
    uVar1 = uVar1 & 0xffffff8f | Structure->CounterMode;
  }
  if (((TIMx == (TIM_TypeDef_conflict *)0x40012c00) || (TIMx == (TIM_TypeDef_conflict *)0x40000000))
     || ((TIMx == (TIM_TypeDef_conflict *)0x40000400 || (TIMx == (TIM_TypeDef_conflict *)0x40000800)
         ))) {
    uVar1 = uVar1 & 0xfffffcff | Structure->ClockDivision;
  }
  TIMx->CR1 = uVar1 & 0xffffff7f | Structure->AutoReloadPreload;
  TIMx->ARR = Structure->Period;
  TIMx->PSC = Structure->Prescaler;
  if (TIMx == (TIM_TypeDef_conflict *)0x40012c00) {
    uRam40012c30 = Structure->RepetitionCounter;
  }
  TIMx->EGR = 1;
  return;
}


////>>0x08006060>>HAL_TIM_OC_Init>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_OC_Init(TIM_HandleTypeDef_conflict *htim)

{
  if (htim != (TIM_HandleTypeDef_conflict *)0x0) {
    if (htim->State == HAL_TIM_STATE_RESET) {
      htim->Lock = HAL_UNLOCKED;
      HAL_TIM_OC_MspInit(htim);
    }
    htim->State = HAL_TIM_STATE_BUSY;
    TIM_Base_SetConfig(htim->Instance,&htim->Init);
    htim->State = HAL_TIM_STATE_READY;
    return HAL_OK;
  }
  return HAL_ERROR;
}


////>>0x08006092>>HAL_TIM_PWM_Init>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_PWM_Init(TIM_HandleTypeDef_conflict *htim)

{
  if (htim != (TIM_HandleTypeDef_conflict *)0x0) {
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


////>>0x080060c4>>TIM_OC2_SetConfig>>////

/* WARNING: Unknown calling convention */

void TIM_OC2_SetConfig(TIM_TypeDef_conflict *TIMx,TIM_OC_InitTypeDef *OC_Config)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  TIMx->CCER = TIMx->CCER & 0xffffffef;
  uVar2 = TIMx->CR2;
  uVar3 = OC_Config->OCMode;
  uVar1 = TIMx->CCER & 0xffffffdf | OC_Config->OCPolarity << 4;
  if (TIMx == (TIM_TypeDef_conflict *)0x40012c00) {
    uVar1 = (uVar1 & 0xffffff7f | OC_Config->OCNPolarity << 4) & 0xffffffbf;
    uVar2 = uVar2 & 0xfffff3ff | OC_Config->OCIdleState << 2 | OC_Config->OCNIdleState << 2;
  }
  TIMx->CR2 = uVar2;
  TIMx->CCMR1 = TIMx->CCMR1 & 0xffff8cff | uVar3 << 8;
  TIMx->CCR2 = OC_Config->Pulse;
  TIMx->CCER = uVar1;
  return;
}


////>>0x08006128>>HAL_TIM_OC_ConfigChannel>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_TIM_OC_ConfigChannel
          (TIM_HandleTypeDef_conflict *htim,TIM_OC_InitTypeDef *sConfig,uint32_t Channel)

{
  if (htim->Lock != HAL_LOCKED) {
    htim->Lock = HAL_LOCKED;
    htim->State = HAL_TIM_STATE_BUSY;
    switch(Channel) {
    case 0:
      TIM_OC1_SetConfig(htim->Instance,sConfig);
      break;
    case 4:
      TIM_OC2_SetConfig(htim->Instance,sConfig);
      break;
    case 8:
      TIM_OC3_SetConfig(htim->Instance,sConfig);
      break;
    case 0xc:
      TIM_OC4_SetConfig(htim->Instance,sConfig);
    }
    htim->State = HAL_TIM_STATE_READY;
    htim->Lock = HAL_UNLOCKED;
    return HAL_OK;
  }
  return HAL_BUSY;
}


////>>0x08006186>>HAL_TIM_PWM_ConfigChannel>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict
HAL_TIM_PWM_ConfigChannel
          (TIM_HandleTypeDef_conflict *htim,TIM_OC_InitTypeDef *sConfig,uint32_t Channel)

{
  if (htim->Lock != HAL_LOCKED) {
    htim->Lock = HAL_LOCKED;
    htim->State = HAL_TIM_STATE_BUSY;
    switch(Channel) {
    case 0:
      TIM_OC1_SetConfig(htim->Instance,sConfig);
      htim->Instance->CCMR1 = htim->Instance->CCMR1 | 8;
      htim->Instance->CCMR1 = htim->Instance->CCMR1 & 0xfffffffb;
      htim->Instance->CCMR1 = htim->Instance->CCMR1 | sConfig->OCFastMode;
      break;
    case 4:
      TIM_OC2_SetConfig(htim->Instance,sConfig);
      htim->Instance->CCMR1 = htim->Instance->CCMR1 | 0x800;
      htim->Instance->CCMR1 = htim->Instance->CCMR1 & 0xfffffbff;
      htim->Instance->CCMR1 = htim->Instance->CCMR1 | sConfig->OCFastMode << 8;
      break;
    case 8:
      TIM_OC3_SetConfig(htim->Instance,sConfig);
      htim->Instance->CCMR2 = htim->Instance->CCMR2 | 8;
      htim->Instance->CCMR2 = htim->Instance->CCMR2 & 0xfffffffb;
      htim->Instance->CCMR2 = htim->Instance->CCMR2 | sConfig->OCFastMode;
      break;
    case 0xc:
      TIM_OC4_SetConfig(htim->Instance,sConfig);
      htim->Instance->CCMR2 = htim->Instance->CCMR2 | 0x800;
      htim->Instance->CCMR2 = htim->Instance->CCMR2 & 0xfffffbff;
      htim->Instance->CCMR2 = htim->Instance->CCMR2 | sConfig->OCFastMode << 8;
    }
    htim->State = HAL_TIM_STATE_READY;
    htim->Lock = HAL_UNLOCKED;
    return HAL_OK;
  }
  return HAL_BUSY;
}


////>>0x08006262>>TIM_CCxChannelCmd>>////

/* WARNING: Unknown calling convention */

void TIM_CCxChannelCmd(TIM_TypeDef_conflict *TIMx,uint32_t Channel,uint32_t ChannelState)

{
  TIMx->CCER = TIMx->CCER & ~(1 << (Channel & 0xff));
  TIMx->CCER = TIMx->CCER | ChannelState << (Channel & 0xff);
  return;
}


////>>0x08006280>>HAL_TIM_OC_Start_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_OC_Start_IT(TIM_HandleTypeDef_conflict *htim,uint32_t Channel)

{
  switch(Channel) {
  case 0:
    htim->Instance->DIER = htim->Instance->DIER | 2;
    break;
  case 4:
    htim->Instance->DIER = htim->Instance->DIER | 4;
    break;
  case 8:
    htim->Instance->DIER = htim->Instance->DIER | 8;
    break;
  case 0xc:
    htim->Instance->DIER = htim->Instance->DIER | 0x10;
  }
  TIM_CCxChannelCmd(htim->Instance,Channel,1);
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40012c00) {
    uRam40012c44 = uRam40012c44 | 0x8000;
  }
  htim->Instance->CR1 = htim->Instance->CR1 | 1;
  return HAL_OK;
}


////>>0x080062f4>>HAL_TIM_OC_Stop_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_OC_Stop_IT(TIM_HandleTypeDef_conflict *htim,uint32_t Channel)

{
  TIM_TypeDef_conflict *pTVar1;
  
  switch(Channel) {
  case 0:
    htim->Instance->DIER = htim->Instance->DIER & 0xfffffffd;
    break;
  case 4:
    htim->Instance->DIER = htim->Instance->DIER & 0xfffffffb;
    break;
  case 8:
    htim->Instance->DIER = htim->Instance->DIER & 0xfffffff7;
    break;
  case 0xc:
    htim->Instance->DIER = htim->Instance->DIER & 0xffffffef;
  }
  TIM_CCxChannelCmd(htim->Instance,Channel,0);
  if (((htim->Instance == (TIM_TypeDef_conflict *)0x40012c00) && ((uRam40012c20 & 0x1111) == 0)) &&
     ((uRam40012c20 & 0x444) == 0)) {
    uRam40012c44 = uRam40012c44 & 0xffff7fff;
  }
  pTVar1 = htim->Instance;
  if (((pTVar1->CCER & 0x1111) == 0) && ((pTVar1->CCER & 0x444) == 0)) {
    pTVar1->CR1 = pTVar1->CR1 & 0xfffffffe;
  }
  return HAL_OK;
}


////>>0x08006390>>HAL_TIM_PWM_Start>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_PWM_Start(TIM_HandleTypeDef_conflict *htim,uint32_t Channel)

{
  TIM_CCxChannelCmd(htim->Instance,Channel,1);
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40012c00) {
    uRam40012c44 = uRam40012c44 | 0x8000;
  }
  htim->Instance->CR1 = htim->Instance->CR1 | 1;
  return HAL_OK;
}


////>>0x080063c0>>HAL_TIM_PWM_Stop>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIM_PWM_Stop(TIM_HandleTypeDef_conflict *htim,uint32_t Channel)

{
  TIM_TypeDef_conflict *pTVar1;
  
  TIM_CCxChannelCmd(htim->Instance,Channel,0);
  if (((htim->Instance == (TIM_TypeDef_conflict *)0x40012c00) && ((uRam40012c20 & 0x1111) == 0)) &&
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


////>>0x08006420>>TIM_CCxNChannelCmd>>////

/* WARNING: Unknown calling convention */

void TIM_CCxNChannelCmd(TIM_TypeDef_conflict *TIMx,uint32_t Channel,uint32_t ChannelNState)

{
  TIMx->CCER = TIMx->CCER & ~(4 << (Channel & 0xff));
  TIMx->CCER = TIMx->CCER | ChannelNState << (Channel & 0xff);
  return;
}


////>>0x0800643c>>HAL_TIMEx_PWMN_Start>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIMEx_PWMN_Start(TIM_HandleTypeDef_conflict *htim,uint32_t Channel)

{
  TIM_CCxNChannelCmd(htim->Instance,Channel,4);
  htim->Instance->BDTR = htim->Instance->BDTR | 0x8000;
  htim->Instance->CR1 = htim->Instance->CR1 | 1;
  return HAL_OK;
}


////>>0x08006460>>HAL_TIMEx_PWMN_Stop>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict HAL_TIMEx_PWMN_Stop(TIM_HandleTypeDef_conflict *htim,uint32_t Channel)

{
  TIM_TypeDef_conflict *pTVar1;
  
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


////>>0x080064ac>>HAL_TIMEx_CommutationCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIMEx_CommutationCallback(TIM_HandleTypeDef_conflict *htim)

{
  return;
}


////>>0x080064ae>>HAL_TIMEx_BreakCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIMEx_BreakCallback(TIM_HandleTypeDef_conflict *htim)

{
  return;
}


////>>0x080064b0>>UART_EndRxTransfer>>////

/* WARNING: Unknown calling convention */

void UART_EndRxTransfer(UART_HandleTypeDef *huart)

{
  huart->Instance->CR1 = huart->Instance->CR1 & 0xfffffedf;
  huart->Instance->CR3 = huart->Instance->CR3 & 0xfffffffe;
  huart->RxState = HAL_UART_STATE_READY;
  return;
}


////>>0x080064cc>>UART_Transmit_IT>>////

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


////>>0x08006538>>UART_SetConfig>>////

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


////>>0x080066e8>>UART_WaitOnFlagUntilTimeout>>////

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


////>>0x0800674c>>HAL_UART_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_UART_MspInit(UART_HandleTypeDef *huart)

{
  return;
}


////>>0x0800674e>>HAL_UART_Init>>////

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


////>>0x080067ac>>HAL_UART_Transmit>>////

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


////>>0x0800688e>>HAL_UART_Transmit_IT>>////

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


////>>0x080068d6>>HAL_UART_Receive_IT>>////

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


////>>0x08006932>>UART_EndTransmit_IT>>////

/* WARNING: Unknown calling convention */

HAL_StatusTypeDef_conflict UART_EndTransmit_IT(UART_HandleTypeDef *huart)

{
  huart->Instance->CR1 = huart->Instance->CR1 & 0xffffffbf;
  huart->gState = HAL_UART_STATE_READY;
  HAL_UART_TxCpltCallback(huart);
  return HAL_OK;
}


////>>0x0800694c>>UART_Receive_IT>>////

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


////>>0x080069ec>>HAL_UART_IRQHandler>>////

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
      if (huart->hdmarx == (DMA_HandleTypeDef_conflict *)0x0) {
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


////>>0x08006b0c>>UART_DMAAbortOnError>>////

/* WARNING: Unknown calling convention */

void UART_DMAAbortOnError(DMA_HandleTypeDef_conflict *hdma)

{
  UART_HandleTypeDef *huart_00;
  UART_HandleTypeDef *huart;
  
  huart_00 = (UART_HandleTypeDef *)hdma->Parent;
  huart_00->RxXferCount = 0;
  huart_00->TxXferCount = 0;
  HAL_UART_ErrorCallback(huart_00);
  return;
}


////>>0x08006b1c>>HAL_UART_GetState>>////

/* WARNING: Unknown calling convention */

HAL_UART_StateTypeDef HAL_UART_GetState(UART_HandleTypeDef *huart)

{
  return huart->RxState | huart->gState;
}


////>>0x08006b28>>is_pin_configured>>////

/* WARNING: Unknown calling convention */

_Bool is_pin_configured(PinName_conflict pin,uint32_t *map)

{
  uint32_t index;
  
  index = map[(uint)((int)pin << 0x18) >> 0x1c];
  return (_Bool)((byte)(index >> ((int)pin & 0xfU)) & 1);
}


////>>0x08006b3e>>set_pin_configured>>////

/* WARNING: Unknown calling convention */

void set_pin_configured(PinName_conflict pin,uint32_t *map)

{
  uint uVar1;
  uint32_t index;
  
  uVar1 = (uint)((int)pin << 0x18) >> 0x1c;
  map[uVar1] = map[uVar1] | 1 << ((int)pin & 0xfU);
  return;
}


////>>0x08006b5c>>reset_pin_configured>>////

/* WARNING: Unknown calling convention */

void reset_pin_configured(PinName_conflict pin,uint32_t *map)

{
  uint uVar1;
  uint32_t index;
  
  uVar1 = (uint)((int)pin << 0x18) >> 0x1c;
  map[uVar1] = map[uVar1] & ~(1 << ((int)pin & 0xfU));
  return;
}


////>>0x08006b7c>>get_GPIO_Port>>////

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


////>>0x08006bb8>>set_GPIO_Port_Clock>>////


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


////>>0x08006c60>>get_adc_channel>>////

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


////>>0x08006c7c>>get_pwm_channel>>////

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


////>>0x08006ca8>>HAL_ADC_MspInit>>////


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


////>>0x08006d24>>HAL_ADC_MspDeInit>>////


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


////>>0x08006d80>>adc_read_value>>////

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


////>>0x08006e68>>HAL_TIM_PWM_MspInit>>////


/* WARNING: Unknown calling convention */

void HAL_TIM_PWM_MspInit(TIM_HandleTypeDef_conflict *htim)

{
  uint32_t uVar1;
  uint32_t function;
  GPIO_TypeDef *GPIOx;
  GPIO_TypeDef *port;
  uint32_t tmpreg_13;
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
  uint32_t tmpreg_11;
  uint32_t tmpreg_12;
  uint32_t tmpreg;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  uVar1 = pinmap_function(g_current_pin,(PinMap_conflict *)&PinMap_PWM);
  timer_enable_clock(htim);
  GPIOx = set_GPIO_Port_Clock((uint)((int)g_current_pin << 0x18) >> 0x1c);
  GPIO_InitStruct.Mode = 2;
  GPIO_InitStruct.Pull = 0;
  GPIO_InitStruct.Speed = 3;
  _DAT_40021018 = _DAT_40021018 | 1;
  switch((uVar1 << 0x11) >> 0x19) {
  case 1:
    tmpreg_10 = tmpreg_10 | 0x7000001;
    break;
  case 2:
    tmpreg_10 = tmpreg_10 & 0xfffffffe | 0x7000000;
    break;
  case 3:
    tmpreg_10 = tmpreg_10 | 0x7000002;
    break;
  case 4:
    tmpreg_10 = tmpreg_10 & 0xfffffffd | 0x7000000;
    break;
  case 5:
    tmpreg_10 = tmpreg_10 | 0x7000004;
    break;
  case 6:
    tmpreg_10 = tmpreg_10 & 0xfffffffb | 0x7000000;
    break;
  case 7:
    tmpreg_10 = tmpreg_10 | 0x7000008;
    break;
  case 8:
    tmpreg_10 = tmpreg_10 & 0xfffffff7 | 0x7000000;
    break;
  case 9:
    tmpreg_10 = tmpreg_10 | 0x7000030;
    break;
  case 10:
    tmpreg_1 = tmpreg_10 & 0xffffffcf;
    tmpreg_10 = tmpreg_1 | 0x7000010;
    break;
  case 0xb:
    tmpreg_2 = tmpreg_10 & 0xffffffcf;
    tmpreg_10 = tmpreg_2 | 0x7000000;
    break;
  case 0xc:
    tmpreg_10 = tmpreg_10 | 0x70000c0;
    break;
  case 0xd:
    tmpreg_3 = tmpreg_10 & 0xffffff3f;
    tmpreg_10 = tmpreg_3 | 0x7000040;
    break;
  case 0xe:
    tmpreg_4 = tmpreg_10 & 0xffffff3f;
    tmpreg_10 = tmpreg_4 | 0x7000000;
    break;
  case 0xf:
    tmpreg_10 = tmpreg_10 | 0x7000300;
    break;
  case 0x10:
    tmpreg_5 = tmpreg_10 & 0xfffffcff;
    tmpreg_10 = tmpreg_5 | 0x7000200;
    break;
  case 0x11:
    tmpreg_6 = tmpreg_10 & 0xfffffcff;
    tmpreg_10 = tmpreg_6 | 0x7000100;
    break;
  case 0x12:
    tmpreg_7 = tmpreg_10 & 0xfffffcff;
    tmpreg_10 = tmpreg_7 | 0x7000000;
    break;
  case 0x13:
    tmpreg_10 = tmpreg_10 | 0x7000c00;
    break;
  case 0x14:
    tmpreg_8 = tmpreg_10 & 0xfffff3ff;
    tmpreg_10 = tmpreg_8 | 0x7000800;
    break;
  case 0x15:
    tmpreg_9 = tmpreg_10 & 0xfffff3ff;
    tmpreg_10 = tmpreg_9 | 0x7000000;
    break;
  case 0x16:
    tmpreg_10 = tmpreg_10 | 0x7001000;
    break;
  case 0x17:
    tmpreg_10 = tmpreg_10 & 0xffffefff | 0x7000000;
    break;
  case 0x1b:
    tmpreg_10 = tmpreg_10 | 0x7008000;
    break;
  case 0x1c:
    tmpreg_10 = tmpreg_10 & 0xffff7fff | 0x7000000;
    break;
  case 0x21:
    tmpreg_10 = tmpreg_10 & 0xf8ffffff;
    break;
  case 0x22:
    tmpreg_11 = tmpreg_10 & 0xf8ffffff;
    tmpreg_10 = tmpreg_11 | 0x1000000;
    break;
  case 0x23:
    tmpreg_12 = tmpreg_10 & 0xf8ffffff;
    tmpreg_10 = tmpreg_12 | 0x2000000;
    break;
  case 0x24:
    tmpreg_10 = tmpreg_10 & 0xf8ffffff | 0x4000000;
  }
  GPIO_InitStruct.Pin = 1 << (g_current_pin & 0xfU) & 0xffff;
  HAL_GPIO_Init(GPIOx,&GPIO_InitStruct);
  return;
}


////>>0x08007110>>HAL_TIM_PWM_MspDeInit>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_PWM_MspDeInit(TIM_HandleTypeDef_conflict *htim)

{
  timer_disable_clock(htim);
  return;
}


////>>0x08007118>>pwm_start>>////

/* WARNING: Unknown calling convention */

void pwm_start(PinName_conflict pin,uint32_t clock_freq,uint32_t period,uint32_t value,
              uint8_t do_init)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  uint32_t timChannel;
  uint32_t uVar3;
  TIM_OC_InitTypeDef timConfig;
  TIM_HandleTypeDef_conflict timHandle;
  
  memset(&timHandle,0,0x40);
  timConfig.OCMode = 0;
  timConfig.Pulse = 0;
  timConfig.OCPolarity = 0;
  timConfig.OCNPolarity = 0;
  timConfig.OCFastMode = 0;
  timConfig.OCIdleState = 0;
  timConfig.OCNIdleState = 0;
  timHandle.Instance = (TIM_TypeDef_conflict *)pinmap_peripheral(pin,(PinMap_conflict *)&PinMap_PWM)
  ;
  if (timHandle.Instance != (TIM_TypeDef_conflict *)0x0) {
    uVar2 = getTimerClkFreq(timHandle.Instance);
    timHandle.Init.Prescaler = uVar2 / clock_freq - 1;
    timHandle.Init.Period = period - 1;
    timHandle.Init.ClockDivision = 0;
    timHandle.Init.CounterMode = 0;
    timHandle.Init.RepetitionCounter = 0;
    timHandle.State = HAL_TIM_STATE_RESET;
    if (((do_init != '\x01') ||
        (g_current_pin = pin, HVar1 = HAL_TIM_PWM_Init(&timHandle), HVar1 == HAL_OK)) &&
       (((uVar2 = get_pwm_channel(pin), uVar2 == 0 ||
         (((uVar2 == 4 || (uVar2 == 8)) || (uVar2 == 0xc)))) || (uVar2 == 0x18)))) {
      timConfig.OCMode = 0x60;
      timConfig.OCPolarity = 0;
      timConfig.OCFastMode = 0;
      timConfig.OCNPolarity = 0;
      timConfig.OCNIdleState = 0;
      timConfig.OCIdleState = 0;
      timConfig.Pulse = value;
      HVar1 = HAL_TIM_PWM_ConfigChannel(&timHandle,&timConfig,uVar2);
      if (HVar1 == HAL_OK) {
        uVar3 = pinmap_function(pin,(PinMap_conflict *)&PinMap_PWM);
        if ((uVar3 & 0x100000) == 0) {
          HAL_TIM_PWM_Start(&timHandle,uVar2);
        }
        else {
          HAL_TIMEx_PWMN_Start(&timHandle,uVar2);
        }
      }
    }
  }
  return;
}


////>>0x080071e4>>pwm_stop>>////

/* WARNING: Unknown calling convention */

void pwm_stop(PinName_conflict pin)

{
  uint32_t Channel;
  uint32_t timChannel;
  uint32_t uVar1;
  TIM_HandleTypeDef_conflict timHandle;
  
  timHandle.Instance = (TIM_TypeDef_conflict *)pinmap_peripheral(pin,(PinMap_conflict *)&PinMap_PWM)
  ;
  if ((timHandle.Instance != (TIM_TypeDef_conflict *)0x0) &&
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


////>>0x0800723c>>GetCurrentMilli>>////

/* WARNING: Unknown calling convention */

uint32_t GetCurrentMilli(void)

{
  uint32_t uVar1;
  
  uVar1 = HAL_GetTick();
  return uVar1;
}


////>>0x08007244>>noOsSystickHandler>>////

/* WARNING: Unknown calling convention */

void noOsSystickHandler(void)

{
  return;
}


////>>0x08007246>>SysTick_Handler>>////

/* WARNING: Unknown calling convention */

void SysTick_Handler(void)

{
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
  noOsSystickHandler();
  return;
}


////>>0x08007258>>digital_io_init>>////


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


////>>0x080072d8>>digital_io_write>>////

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


////>>0x080072f0>>digital_io_read>>////

/* WARNING: Unknown calling convention */

uint32_t digital_io_read(GPIO_TypeDef *port,uint32_t pin)

{
  GPIO_PinState GVar1;
  
  GVar1 = HAL_GPIO_ReadPin(port,(uint16_t)pin);
  return (uint)GVar1;
}


////>>0x080072fa>>hw_config_init>>////

/* WARNING: Unknown calling convention */

void hw_config_init(void)

{
  HAL_Init();
  SystemClock_Config();
  return;
}


////>>0x08007306>>pinmap_find_peripheral>>////

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


////>>0x08007320>>pinmap_peripheral>>////

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


////>>0x08007332>>pinmap_find_pin>>////

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


////>>0x0800734a>>pinmap_pin>>////

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


////>>0x0800735a>>pinmap_find_function>>////

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


////>>0x08007376>>pinmap_function>>////

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


////>>0x0800738a>>pin_in_pinmap>>////

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


////>>0x080073ae>>pinmap_merge_peripheral>>////

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


////>>0x080073c0>>HAL_RTC_AlarmAEventCallback>>////

/* WARNING: Unknown calling convention */

void HAL_RTC_AlarmAEventCallback(RTC_HandleTypeDef *hrtc)

{
  if (RTCUserCallback != (voidCallbackPtr)0x0) {
    (*RTCUserCallback)(callbackUserData);
  }
  return;
}


////>>0x080073d8>>RTC_Alarm_IRQHandler>>////

/* WARNING: Unknown calling convention */

void RTC_Alarm_IRQHandler(void)

{
  HAL_RTC_AlarmIRQHandler(&RtcHandle);
  return;
}


////>>0x080073e8>>_Error_Handler>>////

/* WARNING: Unknown calling convention */

void _Error_Handler(char *msg,int val)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x080073ec>>SystemInit>>////


/* WARNING: Unknown calling convention */

void SystemInit(void)

{
  _DAT_40021000 = _DAT_40021000 & 0xfef2ffff | 1;
  _DAT_40021004 = _DAT_40021004 & 0xf8800000;
  _DAT_40021008 = 0x9f0000;
  _DAT_e000ed08 = 0x8000000;
  return;
}


////>>0x08007438>>timer_enable_clock>>////


/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Unknown calling convention */

void timer_enable_clock(TIM_HandleTypeDef_conflict *htim)

{
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_2;
  uint32_t tmpreg_3;
  
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40012c00) {
    _DAT_40021018 = _DAT_40021018 | 0x800;
    timer_handles[0] = htim;
  }
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40000000) {
    _DAT_4002101c = _DAT_4002101c | 1;
    timer_handles[1] = htim;
  }
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40000400) {
    _DAT_4002101c = _DAT_4002101c | 2;
    timer_handles[2] = htim;
  }
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40000800) {
    _DAT_4002101c = _DAT_4002101c | 4;
    timer_handles[3] = htim;
  }
  return;
}


////>>0x080074e0>>timer_disable_clock>>////


/* WARNING: Unknown calling convention */

void timer_disable_clock(TIM_HandleTypeDef_conflict *htim)

{
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40012c00) {
    _DAT_40021018 = _DAT_40021018 & 0xfffff7ff;
  }
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40000000) {
    _DAT_4002101c = _DAT_4002101c & 0xfffffffe;
  }
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40000400) {
    _DAT_4002101c = _DAT_4002101c & 0xfffffffd;
  }
  if (htim->Instance == (TIM_TypeDef_conflict *)0x40000800) {
    _DAT_4002101c = _DAT_4002101c & 0xfffffffb;
  }
  return;
}


////>>0x08007544>>getTimerIrq>>////

/* WARNING: Unknown calling convention */

uint32_t getTimerIrq(TIM_TypeDef_conflict *tim)

{
  if (tim == (TIM_TypeDef_conflict *)0xffffffff) {
    return 0;
  }
  if (tim == (TIM_TypeDef_conflict *)0x40000400) {
    return 0x1d;
  }
  if (tim < (TIM_TypeDef_conflict *)0x40000401) {
    if (tim == (TIM_TypeDef_conflict *)0x40000000) {
      return 0x1c;
    }
  }
  else {
    if (tim == (TIM_TypeDef_conflict *)0x40000800) {
      return 0x1e;
    }
    if (tim == (TIM_TypeDef_conflict *)0x40012c00) {
      return 0x19;
    }
  }
  iprintf("TIM: Unknown timer IRQn");
  return 0;
}


////>>0x08007594>>getTimerClkSrc>>////

/* WARNING: Unknown calling convention */

uint8_t getTimerClkSrc(TIM_TypeDef_conflict *tim)

{
  if (tim == (TIM_TypeDef_conflict *)0xffffffff) {
    return '\0';
  }
  if (tim == (TIM_TypeDef_conflict *)0x40000400) {
    return '\x01';
  }
  if (tim < (TIM_TypeDef_conflict *)0x40000401) {
    if (tim == (TIM_TypeDef_conflict *)0x40000000) {
      return '\x01';
    }
  }
  else {
    if (tim == (TIM_TypeDef_conflict *)0x40000800) {
      return '\x01';
    }
    if (tim == (TIM_TypeDef_conflict *)0x40012c00) {
      return '\x02';
    }
  }
  iprintf("TIM: Unknown timer instance");
  return '\0';
}


////>>0x080075dc>>getTimerClkFreq>>////

/* WARNING: Unknown calling convention */

uint32_t getTimerClkFreq(TIM_TypeDef_conflict *tim)

{
  uint32_t uVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t pFLatency;
  RCC_ClkInitTypeDef_conflict clkconfig;
  
  clkconfig.ClockType = 0;
  clkconfig.SYSCLKSource = 0;
  clkconfig.AHBCLKDivider = 0;
  clkconfig.APB1CLKDivider = 0;
  clkconfig.APB2CLKDivider = 0;
  pFLatency = 0;
  HAL_RCC_GetClockConfig(&clkconfig,&pFLatency);
  uVar2 = getTimerClkSrc(tim);
  uVar1 = clkconfig.APB2CLKDivider;
  uVar4 = clkconfig.APB1CLKDivider;
  if (uVar2 == '\x01') {
    uVar3 = HAL_RCC_GetPCLK1Freq();
  }
  else if (uVar2 == '\x02') {
    uVar3 = HAL_RCC_GetPCLK2Freq();
    uVar4 = uVar1;
  }
  else {
    iprintf("TIM: Unknown clock source");
    uVar3 = 0;
    uVar4 = 0;
  }
  if (uVar4 != 0x500) {
    if (uVar4 < 0x501) {
      if (uVar4 != 0x400) {
        return uVar3;
      }
    }
    else if ((uVar4 != 0x600) && (uVar4 != 0x700)) {
      return uVar3;
    }
  }
  return uVar3 << 1;
}


////>>0x08007648>>TimerPulseInit>>////

/* WARNING: Unknown calling convention */

void TimerPulseInit(stimer_t_conflict *obj,uint16_t period,uint16_t pulseWidth,
                   _func_void_stimer_t_ptr_uint32_t_conflict *irqHandle)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  TIM_HandleTypeDef_conflict *handle;
  TIM_HandleTypeDef_conflict *htim;
  TIM_OC_InitTypeDef sConfig;
  
  sConfig.OCMode = 0;
  sConfig.Pulse = 0;
  sConfig.OCPolarity = 0;
  sConfig.OCNPolarity = 0;
  sConfig.OCFastMode = 0;
  sConfig.OCIdleState = 0;
  sConfig.OCNIdleState = 0;
  htim = &obj->handle;
  obj->timer = (TIM_TypeDef_conflict *)0x40000000;
  (obj->handle).Instance = (TIM_TypeDef_conflict *)0x40000000;
  (obj->handle).Init.Period = (uint)period;
  uVar2 = getTimerClkFreq((TIM_TypeDef_conflict *)0x40000000);
  (obj->handle).Init.Prescaler = uVar2 / 1000000 - 1;
  (obj->handle).Init.ClockDivision = 0;
  (obj->handle).Init.CounterMode = 0;
  (obj->handle).Init.RepetitionCounter = 0;
  obj->irqHandleOC = irqHandle;
  sConfig.OCMode = 0;
  sConfig.OCPolarity = 0;
  sConfig.OCFastMode = 0;
  sConfig.OCNPolarity = 0;
  sConfig.OCIdleState = 0;
  sConfig.OCNIdleState = 0;
  sConfig.Pulse = (uint)pulseWidth;
  uVar2 = getTimerIrq(obj->timer);
  HAL_NVIC_SetPriority((IRQn_Type_conflict)uVar2,0xe,0);
  uVar2 = getTimerIrq(obj->timer);
  HAL_NVIC_EnableIRQ((IRQn_Type_conflict)uVar2);
  HVar1 = HAL_TIM_OC_Init(htim);
  if ((HVar1 == HAL_OK) && (HVar1 = HAL_TIM_OC_ConfigChannel(htim,&sConfig,0), HVar1 == HAL_OK)) {
    HAL_TIM_OC_Start_IT(htim,0);
  }
  return;
}


////>>0x080076e0>>TimerPulseDeinit>>////

/* WARNING: Unknown calling convention */

void TimerPulseDeinit(stimer_t_conflict *obj)

{
  HAL_StatusTypeDef_conflict HVar1;
  uint32_t uVar2;
  TIM_HandleTypeDef_conflict *handle;
  
  obj->irqHandleOC = (_func_void_stimer_t_ptr_uint32_t_conflict *)0x0;
  uVar2 = getTimerIrq(obj->timer);
  HAL_NVIC_DisableIRQ((IRQn_Type_conflict)uVar2);
  HVar1 = HAL_TIM_OC_DeInit(&obj->handle);
  if (HVar1 == HAL_OK) {
    HAL_TIM_OC_Stop_IT(&obj->handle,0);
  }
  return;
}


////>>0x08007708>>HAL_TIM_OC_MspInit>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_OC_MspInit(TIM_HandleTypeDef_conflict *htim)

{
  timer_enable_clock(htim);
  return;
}


////>>0x08007710>>HAL_TIM_OC_MspDeInit>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_OC_MspDeInit(TIM_HandleTypeDef_conflict *htim)

{
  timer_disable_clock(htim);
  return;
}


////>>0x08007718>>get_timer_obj>>////

/* WARNING: Unknown calling convention */

stimer_t_conflict * get_timer_obj(TIM_HandleTypeDef_conflict *htim)

{
  return (stimer_t_conflict *)&htim[-1].Lock;
}


////>>0x0800771c>>HAL_TIM_OC_DelayElapsedCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef_conflict *htim)

{
  stimer_t_conflict *psVar1;
  stimer_t_conflict *obj;
  
  psVar1 = get_timer_obj(htim);
  if ((psVar1->irqHandleOC != (_func_void_stimer_t_ptr_uint32_t_conflict *)0x0) &&
     (htim->Channel == HAL_TIM_ACTIVE_CHANNEL_1)) {
    (*psVar1->irqHandleOC)(psVar1,0);
  }
  return;
}


////>>0x08007736>>HAL_TIM_PeriodElapsedCallback>>////

/* WARNING: Unknown calling convention */

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef_conflict *htim)

{
  stimer_t_conflict *psVar1;
  stimer_t_conflict *obj;
  
  psVar1 = get_timer_obj(htim);
  if (psVar1->irqHandle != (_func_void_stimer_t_ptr_conflict *)0x0) {
    (*psVar1->irqHandle)(psVar1);
  }
  return;
}


////>>0x08007744>>getTimerCounter>>////

/* WARNING: Unknown calling convention */

uint32_t getTimerCounter(stimer_t_conflict *obj)

{
  return ((obj->handle).Instance)->CNT;
}


////>>0x0800774a>>setTimerCounter>>////

/* WARNING: Unknown calling convention */

void setTimerCounter(stimer_t_conflict *obj,uint32_t value)

{
  ((obj->handle).Instance)->CNT = value;
  return;
}


////>>0x08007750>>setCCRRegister>>////

/* WARNING: Unknown calling convention */

void setCCRRegister(stimer_t_conflict *obj,uint32_t channel,uint32_t value)

{
  (&((obj->handle).Instance)->CCR1)[channel] = value;
  return;
}


////>>0x08007760>>TIM1_UP_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM1_UP_IRQHandler(void)

{
  if (timer_handles[0] != (TIM_HandleTypeDef_conflict *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[0]);
  }
  return;
}


////>>0x08007774>>TIM2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM2_IRQHandler(void)

{
  if (timer_handles[1] != (TIM_HandleTypeDef_conflict *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[1]);
  }
  return;
}


////>>0x08007788>>TIM3_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM3_IRQHandler(void)

{
  if (timer_handles[2] != (TIM_HandleTypeDef_conflict *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[2]);
  }
  return;
}


////>>0x0800779c>>TIM4_IRQHandler>>////

/* WARNING: Unknown calling convention */

void TIM4_IRQHandler(void)

{
  if (timer_handles[3] != (TIM_HandleTypeDef_conflict *)0x0) {
    HAL_TIM_IRQHandler(timer_handles[3]);
  }
  return;
}


////>>0x080077b0>>i2c_custom_init>>////


/* WARNING: Unknown calling convention */

void i2c_custom_init(i2c_t_conflict *obj,i2c_timing_e_conflict timing,uint32_t addressingMode,
                    uint32_t ownAddress,uint8_t master)

{
  void *a;
  I2C_TypeDef_conflict *i2c_sda;
  void *b;
  I2C_TypeDef_conflict *i2c_scl;
  I2C_TypeDef_conflict *pIVar1;
  GPIO_TypeDef *pGVar2;
  GPIO_TypeDef *port;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t tmpreg_3;
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
  uint32_t tmpreg_17;
  uint32_t tmpreg_18;
  uint32_t tmpreg_19;
  uint32_t tmpreg_20;
  uint32_t tmpreg_21;
  uint32_t tmpreg_22;
  uint32_t tmpreg_23;
  uint32_t tmpreg_24;
  uint32_t tmpreg_25;
  uint32_t tmpreg_26;
  uint32_t tmpreg_27;
  uint32_t tmpreg_28;
  uint32_t tmpreg_29;
  I2C_HandleTypeDef_conflict *hi2c;
  I2C_HandleTypeDef_conflict *handle;
  uint32_t tmpreg;
  uint32_t tmpreg_1;
  uint32_t tmpreg_16;
  uint32_t tmpreg_2;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  if (obj != (i2c_t_conflict *)0x0) {
    hi2c = &obj->handle;
    a = pinmap_peripheral(obj->sda,(PinMap_conflict *)&PinMap_I2C_SDA);
    b = pinmap_peripheral(obj->scl,(PinMap_conflict *)&PinMap_I2C_SCL);
    if ((a == (void *)0x0) || (b == (void *)0x0)) {
      iprintf("ERROR: at least one I2C pin has no peripheral\n");
    }
    else {
      pIVar1 = (I2C_TypeDef_conflict *)pinmap_merge_peripheral(a,b);
      obj->i2c = pIVar1;
      if (pIVar1 == (I2C_TypeDef_conflict *)0x0) {
        iprintf("ERROR: I2C pins mismatch\n");
      }
      else {
        if (pIVar1 == (I2C_TypeDef_conflict *)0x40005400) {
          _DAT_4002101c = _DAT_4002101c | 0x200000;
          _DAT_40021010 = _DAT_40021010 & 0xffdfffff;
          obj->irq = I2C1_EV_IRQn;
          obj->irqER = I2C1_ER_IRQn;
          i2c_handles = hi2c;
        }
        if (obj->i2c == (I2C_TypeDef_conflict *)0x40005800) {
          _DAT_4002101c = _DAT_4002101c | 0x400000;
          _DAT_40021010 = _DAT_40021010 & 0xffbfffff;
          obj->irq = I2C2_EV_IRQn;
          obj->irqER = I2C2_ER_IRQn;
          I2C2_ER_IRQHandler::handle = hi2c;
        }
        pGVar2 = set_GPIO_Port_Clock((uint)((int)obj->scl << 0x18) >> 0x1c);
        port = (GPIO_TypeDef *)(int)obj->scl;
        GPIO_InitStruct.Pin = 1 << ((uint)port & 0xf) & 0xffff;
        uVar3 = pinmap_function(obj->scl,(PinMap_conflict *)&PinMap_I2C_SCL);
        uVar4 = pinmap_function(obj->scl,(PinMap_conflict *)&PinMap_I2C_SCL);
        GPIO_InitStruct.Mode = (uVar3 >> 3 & 1) << 4 | uVar4 & 7;
        GPIO_InitStruct.Speed = 3;
        uVar3 = pinmap_function(obj->scl,(PinMap_conflict *)&PinMap_I2C_SCL);
        GPIO_InitStruct.Pull = (uVar3 << 0x1a) >> 0x1e;
        uVar3 = pinmap_function(obj->scl,(PinMap_conflict *)&PinMap_I2C_SCL);
        _DAT_40021018 = _DAT_40021018 | 1;
        switch((uVar3 << 0x11) >> 0x19) {
        case 1:
          tmpreg_26 = tmpreg_26 | 0x7000001;
          break;
        case 2:
          tmpreg_26 = tmpreg_26 & 0xfffffffe | 0x7000000;
          break;
        case 3:
          tmpreg_26 = tmpreg_26 | 0x7000002;
          break;
        case 4:
          tmpreg_26 = tmpreg_26 & 0xfffffffd | 0x7000000;
          break;
        case 5:
          tmpreg_26 = tmpreg_26 | 0x7000004;
          break;
        case 6:
          tmpreg_26 = tmpreg_26 & 0xfffffffb | 0x7000000;
          break;
        case 7:
          tmpreg_26 = tmpreg_26 | 0x7000008;
          break;
        case 8:
          tmpreg_26 = tmpreg_26 & 0xfffffff7 | 0x7000000;
          break;
        case 9:
          tmpreg_26 = tmpreg_26 | 0x7000030;
          break;
        case 10:
          tmpreg_3 = tmpreg_26 & 0xffffffcf;
          tmpreg_26 = tmpreg_3 | 0x7000010;
          break;
        case 0xb:
          tmpreg_4 = tmpreg_26 & 0xffffffcf;
          tmpreg_26 = tmpreg_4 | 0x7000000;
          break;
        case 0xc:
          tmpreg_26 = tmpreg_26 | 0x70000c0;
          break;
        case 0xd:
          tmpreg_5 = tmpreg_26 & 0xffffff3f;
          tmpreg_26 = tmpreg_5 | 0x7000040;
          break;
        case 0xe:
          tmpreg_6 = tmpreg_26 & 0xffffff3f;
          tmpreg_26 = tmpreg_6 | 0x7000000;
          break;
        case 0xf:
          tmpreg_26 = tmpreg_26 | 0x7000300;
          break;
        case 0x10:
          tmpreg_7 = tmpreg_26 & 0xfffffcff;
          tmpreg_26 = tmpreg_7 | 0x7000200;
          break;
        case 0x11:
          tmpreg_8 = tmpreg_26 & 0xfffffcff;
          tmpreg_26 = tmpreg_8 | 0x7000100;
          break;
        case 0x12:
          tmpreg_9 = tmpreg_26 & 0xfffffcff;
          tmpreg_26 = tmpreg_9 | 0x7000000;
          break;
        case 0x13:
          tmpreg_26 = tmpreg_26 | 0x7000c00;
          break;
        case 0x14:
          tmpreg_10 = tmpreg_26 & 0xfffff3ff;
          tmpreg_26 = tmpreg_10 | 0x7000800;
          break;
        case 0x15:
          tmpreg_11 = tmpreg_26 & 0xfffff3ff;
          tmpreg_26 = tmpreg_11 | 0x7000000;
          break;
        case 0x16:
          tmpreg_26 = tmpreg_26 | 0x7001000;
          break;
        case 0x17:
          tmpreg_26 = tmpreg_26 & 0xffffefff | 0x7000000;
          break;
        case 0x1b:
          tmpreg_26 = tmpreg_26 | 0x7008000;
          break;
        case 0x1c:
          tmpreg_26 = tmpreg_26 & 0xffff7fff | 0x7000000;
          break;
        case 0x21:
          tmpreg_12 = tmpreg_26 & 0xf8ffffff;
          tmpreg_26 = tmpreg_12;
          break;
        case 0x22:
          tmpreg_13 = tmpreg_26 & 0xf8ffffff;
          tmpreg_26 = tmpreg_13 | 0x1000000;
          break;
        case 0x23:
          tmpreg_14 = tmpreg_26 & 0xf8ffffff;
          tmpreg_26 = tmpreg_14 | 0x2000000;
          break;
        case 0x24:
          tmpreg_15 = tmpreg_26 & 0xf8ffffff;
          tmpreg_26 = tmpreg_15 | 0x4000000;
        }
        HAL_GPIO_Init(pGVar2,&GPIO_InitStruct);
        pGVar2 = set_GPIO_Port_Clock((uint)((int)obj->sda << 0x18) >> 0x1c);
        GPIO_InitStruct.Pin = 1 << ((int)obj->sda & 0xfU) & 0xffff;
        uVar3 = pinmap_function(obj->sda,(PinMap_conflict *)&PinMap_I2C_SDA);
        uVar4 = pinmap_function(obj->sda,(PinMap_conflict *)&PinMap_I2C_SDA);
        GPIO_InitStruct.Mode = (uVar3 >> 3 & 1) << 4 | uVar4 & 7;
        GPIO_InitStruct.Speed = 3;
        uVar3 = pinmap_function(obj->sda,(PinMap_conflict *)&PinMap_I2C_SDA);
        GPIO_InitStruct.Pull = (uVar3 << 0x1a) >> 0x1e;
        uVar3 = pinmap_function(obj->sda,(PinMap_conflict *)&PinMap_I2C_SDA);
        _DAT_40021018 = _DAT_40021018 | 1;
        switch((uVar3 << 0x11) >> 0x19) {
        case 1:
          tmpreg_26 = tmpreg_26 | 0x7000001;
          break;
        case 2:
          tmpreg_26 = tmpreg_26 & 0xfffffffe | 0x7000000;
          break;
        case 3:
          tmpreg_26 = tmpreg_26 | 0x7000002;
          break;
        case 4:
          tmpreg_26 = tmpreg_26 & 0xfffffffd | 0x7000000;
          break;
        case 5:
          tmpreg_26 = tmpreg_26 | 0x7000004;
          break;
        case 6:
          tmpreg_26 = tmpreg_26 & 0xfffffffb | 0x7000000;
          break;
        case 7:
          tmpreg_26 = tmpreg_26 | 0x7000008;
          break;
        case 8:
          tmpreg_26 = tmpreg_26 & 0xfffffff7 | 0x7000000;
          break;
        case 9:
          tmpreg_26 = tmpreg_26 | 0x7000030;
          break;
        case 10:
          tmpreg_17 = tmpreg_26 & 0xffffffcf;
          tmpreg_26 = tmpreg_17 | 0x7000010;
          break;
        case 0xb:
          tmpreg_18 = tmpreg_26 & 0xffffffcf;
          tmpreg_26 = tmpreg_18 | 0x7000000;
          break;
        case 0xc:
          tmpreg_26 = tmpreg_26 | 0x70000c0;
          break;
        case 0xd:
          tmpreg_19 = tmpreg_26 & 0xffffff3f;
          tmpreg_26 = tmpreg_19 | 0x7000040;
          break;
        case 0xe:
          tmpreg_20 = tmpreg_26 & 0xffffff3f;
          tmpreg_26 = tmpreg_20 | 0x7000000;
          break;
        case 0xf:
          tmpreg_26 = tmpreg_26 | 0x7000300;
          break;
        case 0x10:
          tmpreg_21 = tmpreg_26 & 0xfffffcff;
          tmpreg_26 = tmpreg_21 | 0x7000200;
          break;
        case 0x11:
          tmpreg_22 = tmpreg_26 & 0xfffffcff;
          tmpreg_26 = tmpreg_22 | 0x7000100;
          break;
        case 0x12:
          tmpreg_23 = tmpreg_26 & 0xfffffcff;
          tmpreg_26 = tmpreg_23 | 0x7000000;
          break;
        case 0x13:
          tmpreg_26 = tmpreg_26 | 0x7000c00;
          break;
        case 0x14:
          tmpreg_24 = tmpreg_26 & 0xfffff3ff;
          tmpreg_26 = tmpreg_24 | 0x7000800;
          break;
        case 0x15:
          tmpreg_25 = tmpreg_26 & 0xfffff3ff;
          tmpreg_26 = tmpreg_25 | 0x7000000;
          break;
        case 0x16:
          tmpreg_26 = tmpreg_26 | 0x7001000;
          break;
        case 0x17:
          tmpreg_26 = tmpreg_26 & 0xffffefff | 0x7000000;
          break;
        case 0x1b:
          tmpreg_26 = tmpreg_26 | 0x7008000;
          break;
        case 0x1c:
          tmpreg_26 = tmpreg_26 & 0xffff7fff | 0x7000000;
          break;
        case 0x21:
          tmpreg_26 = tmpreg_26 & 0xf8ffffff;
          break;
        case 0x22:
          tmpreg_27 = tmpreg_26 & 0xf8ffffff;
          tmpreg_26 = tmpreg_27 | 0x1000000;
          break;
        case 0x23:
          tmpreg_28 = tmpreg_26 & 0xf8ffffff;
          tmpreg_26 = tmpreg_28 | 0x2000000;
          break;
        case 0x24:
          tmpreg_29 = tmpreg_26 & 0xf8ffffff;
          tmpreg_26 = tmpreg_29 | 0x4000000;
        }
        HAL_GPIO_Init(pGVar2,&GPIO_InitStruct);
        (obj->handle).Instance = obj->i2c;
        (obj->handle).Init.ClockSpeed = timing;
        (obj->handle).Init.DutyCycle = 0;
        (obj->handle).Init.OwnAddress1 = ownAddress;
        (obj->handle).Init.OwnAddress2 = 0xff;
        (obj->handle).Init.AddressingMode = addressingMode;
        (obj->handle).Init.DualAddressMode = 0;
        (obj->handle).Init.GeneralCallMode = 0;
        (obj->handle).Init.NoStretchMode = 0;
        (obj->handle).State = HAL_I2C_STATE_RESET;
        HAL_NVIC_SetPriority(obj->irq,0,1);
        HAL_NVIC_EnableIRQ(obj->irq);
        HAL_NVIC_SetPriority(obj->irqER,0,1);
        HAL_NVIC_EnableIRQ(obj->irqER);
        HAL_I2C_Init(hi2c);
        obj->isMaster = master;
      }
    }
    return;
  }
  return;
}


////>>0x08007e74>>i2c_master_write>>////

/* WARNING: Unknown calling convention */

i2c_status_e_conflict
i2c_master_write(i2c_t_conflict *obj,uint8_t dev_address,uint8_t *data,uint16_t size)

{
  HAL_I2C_StateTypeDef_conflict HVar1;
  HAL_StatusTypeDef_conflict HVar2;
  uint32_t uVar3;
  uint32_t tickstart;
  uint32_t uVar4;
  uint uVar5;
  i2c_status_e_conflict iVar6;
  I2C_HandleTypeDef_conflict *hi2c;
  
  uVar3 = HAL_GetTick();
  uVar5 = 0;
  iVar6 = I2C_ERROR;
  do {
    hi2c = &obj->handle;
    HVar2 = HAL_I2C_Master_Transmit_IT(hi2c,(ushort)dev_address,data,size);
    if (HVar2 == HAL_OK) {
      iVar6 = I2C_OK;
      while ((HVar1 = HAL_I2C_GetState(hi2c), HVar1 != HAL_I2C_STATE_READY && (iVar6 == I2C_OK))) {
        uVar4 = HAL_GetTick();
        uVar5 = uVar4 - uVar3;
        if (uVar5 < 0x65) {
          uVar4 = HAL_I2C_GetError(hi2c);
          if (uVar4 != 0) {
            iVar6 = I2C_ERROR;
          }
        }
        else {
          iVar6 = I2C_TIMEOUT;
        }
      }
    }
    uVar4 = HAL_I2C_GetError(hi2c);
  } while ((uVar4 == 4) && (uVar5 < 100));
  return iVar6;
}


////>>0x08007ede>>i2c_slave_write_IT>>////

/* WARNING: Unknown calling convention */

i2c_status_e_conflict i2c_slave_write_IT(i2c_t_conflict *obj,uint8_t *data,uint16_t size)

{
  uint uVar1;
  
  if (0x20 < size) {
    return I2C_ERROR;
  }
  for (uVar1 = 0; uVar1 < size; uVar1 = uVar1 + 1 & 0xff) {
    obj->i2cTxRxBuffer[uVar1] = data[uVar1];
    obj->i2cTxRxBufferSize = obj->i2cTxRxBufferSize + '\x01';
  }
  return I2C_OK;
}


////>>0x08007f0e>>i2c_master_read>>////

/* WARNING: Unknown calling convention */

i2c_status_e_conflict
i2c_master_read(i2c_t_conflict *obj,uint8_t dev_address,uint8_t *data,uint16_t size)

{
  HAL_I2C_StateTypeDef_conflict HVar1;
  HAL_StatusTypeDef_conflict HVar2;
  uint32_t uVar3;
  uint32_t tickstart;
  uint32_t uVar4;
  uint uVar5;
  i2c_status_e_conflict iVar6;
  I2C_HandleTypeDef_conflict *hi2c;
  
  uVar3 = HAL_GetTick();
  uVar5 = 0;
  iVar6 = I2C_ERROR;
  do {
    hi2c = &obj->handle;
    HVar2 = HAL_I2C_Master_Receive_IT(hi2c,(ushort)dev_address,data,size);
    if (HVar2 == HAL_OK) {
      iVar6 = I2C_OK;
      while ((HVar1 = HAL_I2C_GetState(hi2c), HVar1 != HAL_I2C_STATE_READY && (iVar6 == I2C_OK))) {
        uVar4 = HAL_GetTick();
        uVar5 = uVar4 - uVar3;
        if (uVar5 < 0x65) {
          uVar4 = HAL_I2C_GetError(hi2c);
          if (uVar4 != 0) {
            iVar6 = I2C_ERROR;
          }
        }
        else {
          iVar6 = I2C_TIMEOUT;
        }
      }
    }
    uVar4 = HAL_I2C_GetError(hi2c);
  } while ((uVar4 == 4) && (uVar5 < 100));
  return iVar6;
}


////>>0x08007f78>>get_i2c_obj>>////

/* WARNING: Unknown calling convention */

i2c_t_conflict * get_i2c_obj(I2C_HandleTypeDef_conflict *hi2c)

{
  return (i2c_t_conflict *)&hi2c[-1].EventCount;
}


////>>0x08007f7c>>i2c_attachSlaveRxEvent>>////

/* WARNING: Unknown calling convention */

void i2c_attachSlaveRxEvent(i2c_t_conflict *obj,_func_void_uint8_t_ptr_int *function)

{
  if (obj != (i2c_t_conflict *)0x0) {
    if (function != (_func_void_uint8_t_ptr_int *)0x0) {
      obj->i2c_onSlaveReceive = function;
      HAL_I2C_EnableListen_IT(&obj->handle);
    }
    return;
  }
  return;
}


////>>0x08007f8e>>i2c_attachSlaveTxEvent>>////

/* WARNING: Unknown calling convention */

void i2c_attachSlaveTxEvent(i2c_t_conflict *obj,_func_void *function)

{
  if (obj != (i2c_t_conflict *)0x0) {
    if (function != (_func_void *)0x0) {
      obj->i2c_onSlaveTransmit = function;
      HAL_I2C_EnableListen_IT(&obj->handle);
    }
    return;
  }
  return;
}


////>>0x08007fa0>>HAL_I2C_AddrCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_AddrCallback
               (I2C_HandleTypeDef_conflict *hi2c,uint8_t TransferDirection,uint16_t AddrMatchCode)

{
  i2c_t_conflict *piVar1;
  i2c_t_conflict *obj;
  
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


////>>0x08007ff0>>HAL_I2C_ListenCpltCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef_conflict *hi2c)

{
  i2c_t_conflict *piVar1;
  i2c_t_conflict *obj;
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


////>>0x08008020>>HAL_I2C_ErrorCallback>>////

/* WARNING: Unknown calling convention */

void HAL_I2C_ErrorCallback(I2C_HandleTypeDef_conflict *hi2c)

{
  i2c_t_conflict *piVar1;
  i2c_t_conflict *obj;
  
  piVar1 = get_i2c_obj(hi2c);
  if (piVar1->isMaster == '\0') {
    HAL_I2C_EnableListen_IT(hi2c);
  }
  return;
}


////>>0x08008038>>I2C1_EV_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C1_EV_IRQHandler(void)

{
  HAL_I2C_EV_IRQHandler(i2c_handles);
  return;
}


////>>0x08008048>>I2C1_ER_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C1_ER_IRQHandler(void)

{
  HAL_I2C_ER_IRQHandler(i2c_handles);
  return;
}


////>>0x08008058>>I2C2_EV_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C2_EV_IRQHandler(void)

{
  HAL_I2C_EV_IRQHandler(I2C2_ER_IRQHandler::handle);
  return;
}


////>>0x08008068>>I2C2_ER_IRQHandler>>////

/* WARNING: Unknown calling convention */

void I2C2_ER_IRQHandler(void)

{
  HAL_I2C_ER_IRQHandler(I2C2_ER_IRQHandler::handle);
  return;
}


////>>0x08008078>>uart_init>>////


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


////>>0x080084b0>>uart_debug_init>>////

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


////>>0x08008500>>uart_debug_write>>////

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


////>>0x080085b8>>serial_rx_active>>////

/* WARNING: Unknown calling convention */

uint8_t serial_rx_active(serial_t *obj)

{
  HAL_UART_StateTypeDef HVar1;
  
  HVar1 = HAL_UART_GetState(uart_handlers[obj->index]);
  return (HVar1 & 0x22) == 0x22;
}


////>>0x080085dc>>serial_tx_active>>////

/* WARNING: Unknown calling convention */

uint8_t serial_tx_active(serial_t *obj)

{
  HAL_UART_StateTypeDef HVar1;
  
  HVar1 = HAL_UART_GetState(uart_handlers[obj->index]);
  return (HVar1 & 0x21) == 0x21;
}


////>>0x08008600>>uart_getc>>////

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


////>>0x0800863c>>uart_attach_rx_callback>>////

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


////>>0x08008694>>uart_attach_tx_callback>>////

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


////>>0x080086e8>>uart_index>>////

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


////>>0x0800870c>>HAL_UART_RxCpltCallback>>////

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


////>>0x08008730>>HAL_UART_TxCpltCallback>>////

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


////>>0x0800877c>>HAL_UART_ErrorCallback>>////

/* WARNING: Unknown calling convention */

void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart)

{
  uint32_t tmpval;
  
  return;
}


////>>0x080087bc>>USART1_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART1_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART1_IRQn);
  HAL_UART_IRQHandler(uart_handlers[0]);
  return;
}


////>>0x080087d4>>USART2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART2_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART2_IRQn);
  HAL_UART_IRQHandler(uart_handlers[1]);
  return;
}


////>>0x080087ec>>USART3_IRQHandler>>////

/* WARNING: Unknown calling convention */

void USART3_IRQHandler(void)

{
  HAL_NVIC_ClearPendingIRQ(USART3_IRQn);
  if (uart_handlers[2] != (UART_HandleTypeDef *)0x0) {
    HAL_UART_IRQHandler(uart_handlers[2]);
  }
  return;
}


////>>0x08008804>>_sbrk>>////

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


////>>0x08008840>>_close>>////

int _close(int __fd)

{
  return -1;
}


////>>0x08008846>>_fstat>>////

int _fstat(int __fd,stat *__buf)

{
  *(undefined4 *)((int)&__buf->st_dev + 4) = 0x2000;
  return 0;
}


////>>0x08008850>>_isatty>>////

int _isatty(int __fd)

{
  return 1;
}


////>>0x08008854>>_lseek>>////

__off_t _lseek(int __fd,__off_t __offset,int __whence)

{
  return 0;
}


////>>0x08008858>>_read>>////

/* WARNING: Unknown calling convention */

int _read(int file_UNUSED,char *ptr_UNUSED,int len_UNUSED)

{
  return 0;
}


////>>0x0800885c>>_write>>////

/* WARNING: Unknown calling convention */

int _write(int file_UNUSED,char *ptr,int len)

{
  size_t sVar1;
  
  sVar1 = uart_debug_write((uint8_t *)ptr,len);
  return sVar1;
}


////>>0x08008868>>_exit>>////

void _exit(int __status)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x0800886c>>_kill>>////

int _kill(__pid_t __pid,int __sig)

{
  errno = 0x16;
  return -1;
}


////>>0x0800887c>>_getpid>>////



__pid_t _getpid(void)

{
  return 1;
}


////>>0x08008880>>analogRead>>////

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


////>>0x080088e0>>analogWrite>>////

/* WARNING: Unknown calling convention */

void analogWrite(uint32_t ulPin,uint32_t ulValue)

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
    _Var1 = pin_in_pinmap(p,(PinMap_conflict *)&PinMap_PWM);
    if (_Var1) {
      _Var1 = is_pin_configured(p,g_anOutputPinConfigured);
      if (!_Var1) {
        set_pin_configured(p,g_anOutputPinConfigured);
      }
      if (_writeResolution != 8) {
        if ((uint)_writeResolution < 9) {
          ulValue = ulValue << (8U - _writeResolution & 0xff);
        }
        else {
          ulValue = ulValue >> (_writeResolution - 8U & 0xff);
        }
      }
      pwm_start(p,0x3e418,0xff,ulValue,!_Var1);
    }
    else {
      pinMode(ulPin,1);
      if (_writeResolution != 8) {
        if ((uint)_writeResolution < 9) {
          ulValue = ulValue << (8U - _writeResolution & 0xff);
        }
        else {
          ulValue = ulValue >> (_writeResolution - 8U & 0xff);
        }
      }
      if (ulValue < 0x80) {
        digitalWrite(ulPin,0);
      }
      else {
        digitalWrite(ulPin,1);
      }
    }
  }
  return;
}


////>>0x08008990>>pinMode>>////

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


////>>0x08008a24>>digitalWrite>>////

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


////>>0x08008a6c>>digitalRead>>////

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


////>>0x08008abc>>millis>>////

/* WARNING: Unknown calling convention */

uint32_t millis(void)

{
  uint32_t uVar1;
  
  uVar1 = GetCurrentMilli();
  return uVar1;
}


////>>0x08008ac4>>delay>>////

/* WARNING: Unknown calling convention */

void delay(uint32_t ms)

{
  return;
}


////>>0x08008ac6>>_tx_complete_irq>>////

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


////>>0x08008afa>>available>>////

/* DWARF original prototype: int  available(HardwareSerial * this) */

int __thiscall HardwareSerial::available(HardwareSerial *this)

{
  return ((this->_serial).rx_head + 0x40) - (uint)(this->_serial).rx_tail & 0x3f;
}


////>>0x08008b0e>>peek>>////

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


////>>0x08008b2a>>read>>////

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


////>>0x08008b52>>flush>>////

/* DWARF original prototype: void  flush(HardwareSerial * this) */

void __thiscall HardwareSerial::flush(HardwareSerial *this)

{
  if (this->_written != false) {
    do {
    } while ((this->_serial).tx_head != (this->_serial).tx_tail);
  }
  return;
}


////>>0x08008b66>>_rx_complete_irq>>////

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


////>>0x08008ba4>>write>>////

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


////>>0x08008bf4>>serialEventRun>>////

/* WARNING: Removing unreachable block (ram,0x08008bfa) */
/* WARNING: Removing unreachable block (ram,0x08008c0c) */
/* WARNING: Removing unreachable block (ram,0x08008c02) */
/* WARNING: Removing unreachable block (ram,0x08008c14) */
/* WARNING: Unknown calling convention */

void serialEventRun(void)

{
  return;
}


////>>0x08008c20>>init>>////

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


////>>0x08008c44>>begin>>////

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


////>>0x08008d00>>setRx>>////

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


////>>0x08008d18>>setTx>>////

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


////>>0x08008d30>>HardwareSerial>>////

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
  (this->super_Stream).super_Print._vptr_Print = (_func_int_varargs **)&PTR_write_1_0800aab8;
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


////>>0x08008d8c>>__static_initialization_and_destruction_0>>////

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


////>>0x08008db0>>_GLOBAL__sub_I_Serial2>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I_Serial2(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x08008dbe>>printTo>>////

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


////>>0x08008df8>>IPAddress>>////

/* DWARF original prototype: IPAddress *  IPAddress(IPAddress * this, uint8_t first_octet, uint8_t
   second_octet, uint8_t third_octet, uint8_t fourth_octet) */

IPAddress * __thiscall
IPAddress::IPAddress
          (IPAddress *this,uint8_t first_octet,uint8_t second_octet,uint8_t third_octet,
          uint8_t fourth_octet)

{
  (this->super_Printable)._vptr_Printable = (_func_int_varargs **)&DAT_0800ab0c;
  (this->_address).bytes[0] = first_octet;
  (this->_address).bytes[1] = second_octet;
  (this->_address).bytes[2] = third_octet;
  (this->_address).bytes[3] = fourth_octet;
  return this;
}


////>>0x08008e14>>__static_initialization_and_destruction_0>>////

/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if ((__initialize_p == 1) && (__priority == 0xffff)) {
    IPAddress::IPAddress(&INADDR_NONE,'\0','\0','\0','\0');
    return;
  }
  return;
}


////>>0x08008e40>>_GLOBAL__sub_I__ZN9IPAddressC2Ev>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__ZN9IPAddressC2Ev(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x08008e4e>>write>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08008e62 */
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


////>>0x08008e72>>print>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08008e78 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t  print(Print * this, char c) */

size_t __thiscall Print::print(Print *this,char c)

{
  size_t sVar1;
  
  sVar1 = (**this->_vptr_Print)(this,(int)c);
  return sVar1;
}


////>>0x08008e7c>>printNumber>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08008ecc */
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


////>>0x08008ed6>>print>>////

/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x08008ee8 */
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


////>>0x08008eec>>print>>////

/* DWARF original prototype: size_t  print(Print * this, uchar b, int base) */

size_t __thiscall Print::print(Print *this,uchar b,int base)

{
  size_t sVar1;
  
  sVar1 = print(this,(uint)b,base);
  return sVar1;
}


////>>0x08008ef4>>map>>////

/* WARNING: Unknown calling convention */

long map(long x,long in_min,long in_max,long out_min,long out_max)

{
  return (uint)((out_max - out_min) * (x - in_min)) / (uint)(in_max - in_min) + out_min;
}


////>>0x08008f0c>>initVariant>>////

/* WARNING: Unknown calling convention */

void initVariant(void)

{
  return;
}


////>>0x08008f0e>>premain>>////

/* WARNING: Unknown calling convention */

void premain(void)

{
  EVP_PKEY_CTX *ctx;
  
  ctx = (EVP_PKEY_CTX *)0x3;
  HAL_NVIC_SetPriorityGrouping(3);
  init(ctx);
  return;
}


////>>0x08008f1c>>main>>////

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


////>>0x08008f3c>>get_pin_id>>////

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


////>>0x08008f50>>__tcf_0>>////

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


////>>0x08008f78>>__static_initialization_and_destruction_0>>////

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
    __aeabi_atexit(0,0x8008f51,0x20000000);
  }
  return;
}


////>>0x08009024>>EXTI0_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI0_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(1);
  return;
}


////>>0x0800902e>>EXTI1_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI1_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(2);
  return;
}


////>>0x08009038>>EXTI2_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI2_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(4);
  return;
}


////>>0x08009042>>EXTI3_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI3_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(8);
  return;
}


////>>0x0800904c>>EXTI4_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI4_IRQHandler(void)

{
  HAL_GPIO_EXTI_IRQHandler(0x10);
  return;
}


////>>0x08009056>>EXTI9_5_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI9_5_IRQHandler(void)

{
  uint uVar1;
  
  for (uVar1 = 0x20; uVar1 < 0x201; uVar1 = uVar1 << 1) {
    HAL_GPIO_EXTI_IRQHandler((uint16_t)uVar1);
  }
  return;
}


////>>0x0800906c>>EXTI15_10_IRQHandler>>////

/* WARNING: Unknown calling convention */

void EXTI15_10_IRQHandler(void)

{
  uint uVar1;
  
  for (uVar1 = 0x400; uVar1 < 0x8001; uVar1 = uVar1 << 1) {
    HAL_GPIO_EXTI_IRQHandler((uint16_t)uVar1);
  }
  return;
}


////>>0x08009084>>operator()>>////

/* DWARF original prototype: void  operator()(function<void()> * this) */

void __thiscall std::function<void()>::operator()(function<void()> *this)

{
  if ((this->super__Function_base)._M_manager != (_Manager_type)0x0) {
    (*this->_M_invoker)((_Any_data *)this);
    return;
  }
                    
  __throw_bad_function_call();
}


////>>0x08009094>>HAL_GPIO_EXTI_Callback>>////

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


////>>0x080090b4>>_GLOBAL__sub_I__Z22stm32_interrupt_enableP12GPIO_TypeDeftSt8functionIFvvEEm>>////

/* WARNING: Unknown calling convention */

void _GLOBAL__sub_I__Z22stm32_interrupt_enableP12GPIO_TypeDeftSt8functionIFvvEEm(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}


////>>0x080090c2>>__aeabi_atexit>>////

void __aeabi_atexit(undefined4 param_1,undefined4 param_2)

{
  __cxa_atexit(param_2,param_1);
  return;
}


////>>0x080090cc>>__assert_func>>////

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


////>>0x08009108>>__cxa_atexit>>////

/* WARNING: Removing unreachable block (ram,0x08009110) */

longlong __cxa_atexit(undefined4 param_1,uint param_2)

{
  return (ulonglong)param_2 << 0x20;
}


////>>0x08009124>>fiprintf>>////

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


////>>0x08009148>>__libc_init_array>>////

void __libc_init_array(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    (*(code *)(&__preinit_array_end)[iVar1])();
  }
  _init();
  for (iVar1 = 0; iVar1 != 0xc; iVar1 = iVar1 + 1) {
    (*(code *)(&__preinit_array_end)[iVar1])();
  }
  return;
}


////>>0x08009190>>malloc>>////

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)_malloc_r(_impure_ptr,__size);
  return pvVar1;
}


////>>0x080091a0>>free>>////

void free(void *__ptr)

{
  _free_r(_impure_ptr,__ptr);
  return;
}


////>>0x080091b0>>memcpy>>////

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


////>>0x080091c6>>memset>>////

void * memset(void *__s,int __c,size_t __n)

{
  undefined *puVar1;
  
  for (puVar1 = (undefined *)__s; puVar1 != (undefined *)(__n + (int)__s); puVar1 = puVar1 + 1) {
    *puVar1 = (char)__c;
  }
  return __s;
}


////>>0x080091d8>>_free_r>>////

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


////>>0x08009270>>_malloc_r>>////

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
        goto LAB_080092d4;
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


////>>0x0800932c>>__sfputc_r>>////

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


////>>0x08009358>>__sfputs_r>>////

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


////>>0x0800937c>>_vfiprintf_r>>////

/* WARNING: Removing unreachable block (ram,0x08009550) */

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
LAB_080093be:
  pbVar6 = pbVar5;
  if (*pbVar6 != 0) goto LAB_08009474;
  goto LAB_080093c8;
LAB_08009474:
  pbVar5 = pbVar6 + 1;
  if (*pbVar6 != 0x25) goto LAB_080093be;
LAB_080093c8:
  iVar7 = (int)pbVar6 - (int)param_3;
  if (iVar7 != 0) {
    iVar2 = __sfputs_r(param_1,param_2,param_3,iVar7);
    if (iVar2 == -1) {
LAB_08009568:
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
        return -1;
      }
      return local_74;
    }
    local_74 = local_74 + iVar7;
  }
  if (*pbVar6 == 0) goto LAB_08009568;
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
    local_88 = 1 << ((int)pvVar3 + 0xf7ff54b0U & 0xff) | local_88;
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
      goto LAB_080094a6;
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
    if (!bVar1) goto LAB_080094a6;
  }
  local_7c = iVar7;
LAB_080094a6:
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
  pvVar3 = memchr(&DAT_0800ab56,(uint)*param_3,3);
  if (pvVar3 != (void *)0x0) {
    param_3 = param_3 + 1;
    local_88 = local_88 | 0x40 << ((int)pvVar3 + 0xf7ff54aaU & 0xff);
  }
  local_70 = *param_3;
  param_3 = param_3 + 1;
  pvVar3 = memchr("efgEFG",(uint)local_70,6);
  if (pvVar3 == (void *)0x0) {
    unaff_r9 = _printf_i(param_1,&local_88,param_2,0x8009359,&local_8c);
    if (unaff_r9 == -1) goto LAB_08009568;
  }
  else {
    local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
  }
  local_74 = local_74 + unaff_r9;
  pbVar5 = param_3;
  goto LAB_080093be;
}


////>>0x080095a8>>_printf_common>>////

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


////>>0x08009698>>_printf_i>>////

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
          if (bVar1 == 0) goto LAB_08009852;
          if (bVar1 != 0x58) goto LAB_080096c8;
          *(undefined *)((int)param_2 + 0x45) = 0x58;
          pcVar6 = "0123456789ABCDEF";
LAB_080097e2:
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
LAB_08009778:
          *(undefined *)((int)param_2 + 0x43) = 0;
        }
        else {
          if ((bVar1 != 100) && (bVar1 != 0x69)) goto LAB_080096c8;
          uVar10 = *param_2;
          puVar3 = *param_5;
          if ((uVar10 & 0x80) == 0) {
            *param_5 = puVar3 + 1;
            if ((uVar10 & 0x40) == 0) goto LAB_080096e8;
            uVar10 = (uint)(short)*(ushort *)puVar3;
          }
          else {
            *param_5 = puVar3 + 1;
LAB_080096e8:
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
          if (uVar10 != 0) goto LAB_08009816;
LAB_080098c4:
          *(char *)((int)param_2 + 0x42) = *pcVar6;
          pcVar12 = (char *)((int)param_2 + 0x42);
        }
        else {
          *param_2 = *param_2 & 0xfffffffb;
          if (uVar10 == 0) {
            if (uVar11 != 0) goto LAB_080098c4;
          }
          else {
LAB_08009816:
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
        goto LAB_080097be;
      }
      puVar3 = *param_5;
      *param_5 = puVar3 + 1;
      *(char *)((int)param_2 + 0x42) = (char)*puVar3;
LAB_08009728:
      __s = (char *)((int)param_2 + 0x42);
      uVar10 = 1;
    }
    else {
      if (bVar1 != 0x73) {
        if (bVar1 < 0x74) {
          if (bVar1 == 0x6f) {
LAB_0800974e:
            uVar10 = *param_2;
            puVar3 = *param_5;
            if ((uVar10 & 0x80) == 0) {
              *param_5 = puVar3 + 1;
              if ((uVar10 & 0x40) == 0) goto LAB_0800975c;
              uVar10 = (uint)*(ushort *)puVar3;
            }
            else {
              *param_5 = puVar3 + 1;
LAB_0800975c:
              uVar10 = *puVar3;
            }
            if (bVar1 == 0x6f) {
              uVar7 = 8;
            }
            else {
              uVar7 = 10;
            }
            pcVar6 = "0123456789ABCDEF";
            goto LAB_08009778;
          }
          if (bVar1 == 0x70) {
            *param_2 = *param_2 | 0x20;
LAB_0800970e:
            pcVar6 = "0123456789abcdef";
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
    goto LAB_080097be;
  }
  uVar10 = *param_2;
  ppuVar8 = (uint **)*param_5;
  uVar7 = param_2[5];
  if ((uVar10 & 0x80) == 0) {
    *param_5 = (uint *)(ppuVar8 + 1);
    puVar3 = *ppuVar8;
    if ((uVar10 & 0x40) == 0) goto LAB_0800983e;
    *(short *)puVar3 = (short)uVar7;
  }
  else {
    *param_5 = (uint *)(ppuVar8 + 1);
    puVar3 = *ppuVar8;
LAB_0800983e:
    *puVar3 = uVar7;
  }
LAB_08009852:
  param_2[4] = 0;
LAB_080097be:
  iVar2 = _printf_common(param_1,param_2,local_24,param_3,param_4);
  if ((iVar2 == -1) || (iVar2 = (*param_4)(param_1,param_3,__s,param_2[4]), iVar2 == -1)) {
LAB_080097d2:
    uVar10 = 0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar2 = 0; iVar2 < (int)(param_2[3] - local_24[0]); iVar2 = iVar2 + 1) {
        iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar5 == -1) goto LAB_080097d2;
      }
    }
    uVar10 = param_2[3];
    if ((int)param_2[3] < (int)local_24[0]) {
      uVar10 = local_24[0];
    }
  }
  return uVar10;
}


////>>0x080098d8>>iprintf>>////

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


////>>0x08009908>>realloc>>////

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)_realloc_r(_impure_ptr,__ptr,__size);
  return pvVar1;
}


////>>0x08009918>>_sbrk_r>>////

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


////>>0x08009938>>strchr>>////

char * strchr(char *__s,int __c)

{
  byte *pbVar1;
  
  do {
    pbVar1 = (byte *)__s;
    if (*pbVar1 == 0) {
      if ((__c & 0xffU) != 0) {
        pbVar1 = (byte *)0x0;
      }
      return (char *)pbVar1;
    }
    __s = (char *)(pbVar1 + 1);
  } while ((__c & 0xffU) != (uint)*pbVar1);
  return (char *)pbVar1;
}


////>>0x08009954>>strncpy>>////

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = __dest;
  do {
    pcVar4 = pcVar3;
    sVar2 = __n;
    if (sVar2 == 0) {
      return __dest;
    }
    cVar1 = *__src;
    pcVar3 = pcVar4 + 1;
    *pcVar4 = cVar1;
    __src = __src + 1;
    __n = sVar2 - 1;
  } while (cVar1 != '\0');
  for (; pcVar3 != pcVar4 + sVar2; pcVar3 = pcVar3 + 1) {
    *pcVar3 = '\0';
  }
  return __dest;
}


////>>0x0800997e>>strrchr>>////

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  char *pcVar2;
  
  if (__c != 0) {
    pcVar2 = (char *)0x0;
    while (pcVar1 = strchr(__s,__c), pcVar1 != (char *)0x0) {
      __s = pcVar1 + 1;
      pcVar2 = pcVar1;
    }
    return pcVar2;
  }
  pcVar2 = strchr(__s,0);
  return pcVar2;
}


////>>0x080099a4>>strstr>>////

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*__haystack == '\0') {
    if (*__needle != '\0') {
      __haystack = (char *)0x0;
    }
    return __haystack;
  }
  do {
    pcVar1 = __haystack;
    if (*pcVar1 == '\0') {
      return (char *)0x0;
    }
    pcVar3 = __needle + -1;
    pcVar2 = pcVar1 + -1;
    do {
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') {
        return pcVar1;
      }
      pcVar2 = pcVar2 + 1;
      __haystack = pcVar1 + 1;
    } while (*pcVar2 == *pcVar3);
  } while( true );
}


////>>0x080099dc>>__swbuf_r>>////

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


////>>0x08009a80>>__swsetup_r>>////

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


////>>0x08009b5c>>abort>>////



void abort(void)

{
  raise(6);
                    
  _exit(1);
}


////>>0x08009b6c>>__sflush_r>>////

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
          goto LAB_08009c62;
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
LAB_08009c62:
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


////>>0x08009c7c>>_fflush_r>>////

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


////>>0x08009cd0>>_cleanup_r>>////

void _cleanup_r(undefined4 param_1)

{
  _fwalk_reent(param_1,0x8009c7d);
  return;
}


////>>0x08009cdc>>std.isra.0>>////

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
  param_1[9] = 0x800a021;
  param_1[10] = 0x800a043;
  param_1[0xb] = 0x800a07b;
  param_1[0xc] = 0x800a09f;
  return;
}


////>>0x08009d24>>__sfmoreglue>>////

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


////>>0x08009d50>>__sinit>>////

void __sinit(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar2 = &impure_data;
    *(undefined4 *)(param_1 + 0x28) = 0x8009cd1;
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


////>>0x08009db0>>__sfp>>////

int * __sfp(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  
  if (DAT_200000ac == 0) {
    __sinit(&impure_data);
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


////>>0x08009e28>>_fwalk_reent>>////

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


////>>0x08009e64>>__swhatbuf_r>>////

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


////>>0x08009eac>>__smakebuf_r>>////

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
      *(undefined4 *)(param_1 + 0x28) = 0x8009cd1;
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


////>>0x08009f2c>>memchr>>////

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


////>>0x08009f48>>__malloc_lock>>////

void __malloc_lock(void)

{
  return;
}


////>>0x08009f4a>>__malloc_unlock>>////

void __malloc_unlock(void)

{
  return;
}


////>>0x08009f4c>>_realloc_r>>////

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


////>>0x08009f98>>_raise_r>>////

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


////>>0x08009fe8>>raise>>////

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = _raise_r(_impure_ptr,__sig);
  return iVar1;
}


////>>0x08009ff8>>_kill_r>>////

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


////>>0x0800a01c>>_getpid_r>>////



__pid_t _getpid_r(void)

{
  return 1;
}


////>>0x0800a020>>__sread>>////

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


////>>0x0800a042>>__swrite>>////

void __swrite(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    _lseek_r(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  _write_r(param_1,(int)*(short *)(param_2 + 0xe),param_3,param_4);
  return;
}


////>>0x0800a07a>>__sseek>>////

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


////>>0x0800a09e>>__sclose>>////

void __sclose(undefined4 param_1,int param_2)

{
  _close_r(param_1,(int)*(short *)(param_2 + 0xe));
  return;
}


////>>0x0800a0a8>>_write_r>>////

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


////>>0x0800a0cc>>_close_r>>////

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


////>>0x0800a0ec>>_fstat_r>>////

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


////>>0x0800a110>>_isatty_r>>////

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


////>>0x0800a130>>_lseek_r>>////

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


////>>0x0800a154>>_malloc_usable_size_r>>////

int _malloc_usable_size_r(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


////>>0x0800a168>>_read_r>>////

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


////>>0x0800a18c>>__throw_bad_function_call>>////


/* std::__throw_bad_function_call() */

void std::__throw_bad_function_call(void)

{
                    
  abort();
}


////>>0x0800a194>>_GLOBAL__sub_I_ctype_byname>>////

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


////>>0x0800a258>>_GLOBAL__sub_I_ctype_byname>>////

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


////>>0x0800a31c>>_GLOBAL__sub_I_ctype_byname>>////

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


////>>0x0800a3a0>>_GLOBAL__sub_I_ctype_byname>>////

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


////>>0x0800a424>>_init>>////

void _init(void)

{
  return;
}


////>>0x0800a430>>_fini>>////

void _fini(void)

{
  return;
}



int FUN_00755180(AnonShape_00755180_CB9F7747 *param_1,LPCSTR param_2,undefined4 *param_3,int param_4
                )

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 **value;
  InternalExceptionFrame local_4c;
  int local_8;

  local_8 = 0;
  puVar1 = FUN_006b04d0(0x54);
  param_1->field_0008 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -2;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_4 == 1) {
      Library::DKW::FMM::FUN_006d4380(param_1->field_0008,param_2,0);
    }
    else if (param_4 == 2) {
      Library::DKW::FMM::FUN_006d4220(param_1->field_0008,param_2,0x100000,0x100000);
    }
    else {
      Library::DKW::FMM::FUN_006d4510(param_1->field_0008,param_2,0x100000);
    }
    value = &param_1->field_0008;
    g_currentExceptionFrame = local_4c.previous;
    if ((uint)(*value)[0xe] < 0x20) {
      FUN_006d46a0(*value,0);
      FreeAndNull(value);
      return -5;
    }
    puVar1 = FUN_006b04d0(0x80);
    (*value)[0x13] = puVar1;
    (*value)[0x14] = (*value)[0x13];
    puVar1 = *value;
    if (puVar1[0x14] == 0) {
      FUN_006d46a0(puVar1,0);
      FreeAndNull(value);
      return -2;
    }
    FUN_007550c0((AnonShape_007550C0_25940DF4 *)puVar1[0x13],param_3);
    param_1->field_0014 = 0x12;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  FreeAndNull(&param_1->field_0008);
  return iVar2;
}



int FUN_00755180(AnonShape_00755180_CB9F7747 *param_1,LPCSTR param_2,undefined4 *param_3,int param_4
                )

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 **ppuVar3;
  void *unaff_EDI;
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
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
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
    ppuVar3 = &param_1->field_0008;
    g_currentExceptionFrame = local_4c.previous;
    if ((uint)(*ppuVar3)[0xe] < 0x20) {
      FUN_006d46a0(*ppuVar3,0);
      FUN_006ab060(ppuVar3);
      return -5;
    }
    puVar1 = FUN_006b04d0(0x80);
    (*ppuVar3)[0x13] = puVar1;
    (*ppuVar3)[0x14] = (*ppuVar3)[0x13];
    puVar1 = *ppuVar3;
    if (puVar1[0x14] == 0) {
      FUN_006d46a0(puVar1,0);
      FUN_006ab060(ppuVar3);
      return -2;
    }
    FUN_007550c0((AnonShape_007550C0_25940DF4 *)puVar1[0x13],param_3);
    param_1->field_0014 = 0x12;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  FUN_006ab060(&param_1->field_0008);
  return iVar2;
}


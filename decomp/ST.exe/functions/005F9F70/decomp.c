
void __fastcall FUN_005f9f70(AnonShape_005F9F70_43CA4DAC *param_1)

{
  STT3DSprC *pSVar1;
  uint uVar2;
  
  if ((undefined4 *)param_1->field_02E6 != (undefined4 *)0x0) {
    pSVar1 = *(STT3DSprC **)param_1->field_02E6;
    if (pSVar1 != (STT3DSprC *)0x0) {
      thunk_FUN_004ad310(pSVar1);
      Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)param_1->field_02E6);
      *(undefined4 *)param_1->field_02E6 = 0;
    }
    uVar2 = *(uint *)(param_1->field_02E6 + 4);
    if (-1 < (int)uVar2) {
      FUN_006e8ba0(param_1->field_0211,uVar2);
      *(undefined4 *)(param_1->field_02E6 + 4) = 0xffffffff;
    }
  }
  return;
}


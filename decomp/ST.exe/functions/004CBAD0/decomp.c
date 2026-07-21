
undefined4 __fastcall FUN_004cbad0(AnonShape_004CBAD0_DCDD6BA9 *param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar2 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
    FUN_006eabf0(param_1->field_0211,uVar2,iVar1);
    if (param_1->field_05FF != 0) {
      iVar1 = 0;
      uVar2 = thunk_FUN_004ad650(param_1->field_05FF);
      FUN_006eabf0(param_1->field_0211,uVar2,iVar1);
    }
    if (param_1->field_0603 != 0) {
      iVar1 = 0;
      uVar2 = thunk_FUN_004ad650(param_1->field_0603);
      FUN_006eabf0(param_1->field_0211,uVar2,iVar1);
    }
    iVar1 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    if ((param_1->field_046C != 4) || (param_1->field_0490 == 0)) {
      iVar1 = 1;
      uVar2 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
      FUN_006eabf0(param_1->field_0211,uVar2,iVar1);
      if (param_1->field_05FF != 0) {
        iVar1 = 1;
        uVar2 = thunk_FUN_004ad650(param_1->field_05FF);
        FUN_006eabf0(param_1->field_0211,uVar2,iVar1);
      }
      if (param_1->field_0603 != 0) {
        iVar1 = 1;
        uVar2 = thunk_FUN_004ad650(param_1->field_0603);
        FUN_006eabf0(param_1->field_0211,uVar2,iVar1);
      }
    }
    uVar2 = 1;
  }
  iVar1 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
  FUN_006e6870(param_1->field_0211,iVar1,uVar2);
  return 0;
}


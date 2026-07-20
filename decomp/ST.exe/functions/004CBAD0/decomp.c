
undefined4 __fastcall FUN_004cbad0(AnonShape_004CBAD0_DCDD6BA9 *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  
  iVar2 = thunk_FUN_0041c710((int)param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
    FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
    if (param_1->field_05FF != 0) {
      iVar2 = 0;
      uVar3 = thunk_FUN_004ad650(param_1->field_05FF);
      FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
    }
    if (param_1->field_0603 != 0) {
      iVar2 = 0;
      uVar3 = thunk_FUN_004ad650(param_1->field_0603);
      FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
    }
    bVar1 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    uVar3 = (uint)(CONCAT31(extraout_var,bVar1) != 0);
  }
  else {
    if ((param_1->field_046C != 4) || (param_1->field_0490 == 0)) {
      iVar2 = 1;
      uVar3 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
      FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
      if (param_1->field_05FF != 0) {
        iVar2 = 1;
        uVar3 = thunk_FUN_004ad650(param_1->field_05FF);
        FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
      }
      if (param_1->field_0603 != 0) {
        iVar2 = 1;
        uVar3 = thunk_FUN_004ad650(param_1->field_0603);
        FUN_006eabf0(param_1->field_0211,uVar3,iVar2);
      }
    }
    uVar3 = 1;
  }
  iVar2 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
  FUN_006e6870(param_1->field_0211,iVar2,uVar3);
  return 0;
}


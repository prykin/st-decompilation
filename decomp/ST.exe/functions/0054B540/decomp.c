
void __fastcall FUN_0054b540(CursorClassTy *param_1)

{
  uint uVar1;

  *(undefined4 *)&param_1->field_0xcd = 0;
  param_1->field_00D3 = 0;
  param_1->field_00D4 = 0;
  param_1->field_00D5 = 0;
  param_1->field_0xd6 = 0;
  *(undefined4 *)&param_1->field_0xd7 = 0;
  *(undefined2 *)&param_1->field_0xdb = 0;
  param_1->field_0xdd = 0;
  uVar1 = *(uint *)&param_1->field_0x10b;
  if (-1 < (int)uVar1) {
    if (param_1->field_00DE == CASE_5) {
      if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
        FUN_006e8ba0(PTR_00807598,uVar1);
      }
      if (param_1->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8a60((byte *)param_1->field_00AD);
      }
      else if (param_1->field_001C != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)param_1->field_0060,param_1->field_001C,0xfffffffe,param_1->field_0034,
                   param_1->field_0038);
      }
      CursorClassTy::DrawSprite(param_1,param_1->field_00C5,param_1->field_00C9);
    }
    else {
      FUN_006b3bb0(DAT_008075a8,uVar1);
    }
    *(undefined4 *)&param_1->field_0x10b = 0xffffffff;
  }
  param_1->field_00DE = CASE_0;
  param_1->field_0496 = 0;
  param_1->field_049A = (STFishC *)0x0;
  *(undefined4 *)&param_1->field_0x4ae = 0;
  return;
}


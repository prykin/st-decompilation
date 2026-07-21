
void __fastcall FUN_0054a8d0(CursorClassTy *param_1)

{
  if ((g_tLOBldMark_007FB2AC != (AnonShape_GLOBAL_007FB2AC_70073F41 *)0x0) &&
     (g_tLOBldMark_007FB2AC->field_0018 == 0)) {
    thunk_FUN_004c63f0((AnonShape_004C63F0_0B060A14 *)g_tLOBldMark_007FB2AC);
  }
  if ((param_1->field_00DE == CASE_5) && (-1 < param_1->field_010B)) {
    if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
      FUN_006e8ba0(PTR_00807598,param_1->field_010B);
    }
    param_1->field_010B = -1;
    if (param_1->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)param_1->field_00AD);
    }
    else if (param_1->field_001C != (cLoadingTy *)0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)param_1->field_0060,(uint)param_1->field_001C,0xfffffffe,
                 param_1->field_0034,param_1->field_0038);
    }
    CursorClassTy::DrawSprite(param_1,param_1->field_00C5,param_1->field_00C9);
    param_1->field_00DE = CASE_0;
  }
  param_1->field_04A2 = 0;
  param_1->field_04AA = 0;
  param_1->field_04A6 = 0;
  return;
}


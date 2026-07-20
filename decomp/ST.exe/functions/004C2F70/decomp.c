
undefined4 __fastcall FUN_004c2f70(AnonShape_004C2F70_6CAAACC0 *param_1)

{
  int iVar1;
  AnonShape_0060A470_93FA2EC1 *local_8;
  
  local_8 = (AnonShape_0060A470_93FA2EC1 *)0x0;
  if ((*(int *)(&DAT_007951b4 + param_1->field_0235 * 4) != 0) && (param_1->field_0408 != 0)) {
    iVar1 = FUN_006e62d0(PTR_00802a38,param_1->field_040C,(int *)&local_8);
    if (iVar1 == 0) {
      if (param_1->field_021D != 0) {
        thunk_FUN_0060a430(local_8,1);
        return 0;
      }
      thunk_FUN_0060a470(local_8);
    }
  }
  return 0;
}


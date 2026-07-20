
undefined4 __fastcall FUN_004dcbf0(AnonShape_004DCBF0_C6A0E7DA *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  if ((uint)param_1->field_04F0 <= (uint)PTR_00802a38->field_00E4) {
    iVar1 = FUN_006e62d0(PTR_00802a38,param_1->field_04EC,&local_8);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_00617eb0(local_8);
      param_1->field_02CD = uVar2;
    }
    param_1->field_04F0 = PTR_00802a38->field_00E4 + 0x19;
  }
  return 0;
}


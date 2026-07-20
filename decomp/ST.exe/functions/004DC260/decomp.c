
undefined4 __fastcall FUN_004dc260(TLOBaseTy *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
  if (iVar2 == *(int *)(param_1->field_01F5 + 0x20c)) {
    if (param_1->field_04D0 == 2) {
      param_1->field_04D0 = 1;
      *(undefined4 *)&param_1->field_0x261 = 1;
      TLOBaseTy::RotateSpr(param_1,0);
    }
    else if (param_1->field_04D0 == 3) {
      param_1->field_04D0 = 0;
      *(undefined4 *)&param_1->field_0x261 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
    }
  }
  if (param_1->field_04D0 == 0) {
    if ((*(int *)&param_1->field_0x4d8 + 0xfU <= (uint)PTR_00802a38->field_00E4) &&
       (*(int *)&param_1->field_0x4d4 < 200)) {
      *(undefined4 *)&param_1->field_0x4d8 = PTR_00802a38->field_00E4;
      iVar2 = *(int *)&param_1->field_0x4d4 + 2;
      *(int *)&param_1->field_0x4d4 = iVar2;
      if (199 < iVar2) {
        *(undefined4 *)&param_1->field_0x4d4 = 200;
      }
    }
    uVar1 = PTR_00802a38->field_00E4;
    iVar2 = thunk_FUN_004e8230(*(int *)&param_1->field_0x24,param_1->field_0235,0);
    if (((uint)(iVar2 + param_1->field_0271) <= uVar1) && (199 < *(int *)&param_1->field_0x4d4)) {
      param_1->field_0271 = uVar1;
      TLOBaseTy::fireFindCheckTarget(param_1,0,0);
      if (param_1->field_028D != 0) {
        param_1->field_04D0 = 2;
        TLOBaseTy::RotateSpr(param_1,0);
        return 0;
      }
    }
  }
  else if (param_1->field_04D0 == 1) {
    if (*(int *)&param_1->field_0x4d4 < 1) {
      param_1->field_04D0 = 3;
      *(undefined4 *)&param_1->field_0x4d4 = 0;
      *(undefined4 *)&param_1->field_0x261 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
    if (*(int *)&param_1->field_0x295 + 0x465U <= (uint)PTR_00802a38->field_00E4) {
      param_1->field_04D0 = 3;
      *(undefined4 *)&param_1->field_0x261 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
    }
  }
  return 0;
}


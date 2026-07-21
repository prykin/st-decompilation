
undefined4 __fastcall FUN_004df3b0(TLOBaseTy *param_1)

{
  TLOBaseTy_field_04D0State TVar1;
  undefined4 uVar2;
  int iVar3;
  dword dVar4;
  int iVar5;

  TVar1 = param_1->field_04D0;
  if (TVar1 == CASE_0) {
    if ((param_1->field_04E0 != 0) || (param_1->field_04D4 == 1)) {
      param_1->field_04D0 = CASE_1;
      param_1->field_04D4 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
    }
  }
  else if (TVar1 == CASE_1) {
    if ((param_1->field_04D8 == 0) || (param_1->field_04D4 == 2)) {
      iVar3 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
      if (iVar3 == param_1->field_01F5->field_020C) {
        param_1->field_04D0 = CASE_2;
        uVar2 = PTR_00802a38->field_00E4;
        param_1->field_04D4 = 0;
        param_1->field_04DC = uVar2;
        TLOBaseTy::RotateSpr(param_1,0);
        dVar4 = (*param_1->vtable->slot_2C)(param_1);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_004b76d0(CONCAT31((int3)(dVar4 >> 8),*(undefined1 *)&param_1->field_0024),dVar4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (param_1->field_0024 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
          thunk_FUN_004d8b70((char)param_1->field_0024);
        }
        thunk_FUN_004c2d40((AnonShape_004C2D40_7C578146 *)param_1);
        (*param_1->vtable->vfunc_90)(3,0x26c);
        return 0;
      }
    }
    else {
      if (param_1->field_0408 == 0) {
        thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
        (*param_1->vtable->vfunc_90)(3,0x26b);
      }
      if (param_1->field_04DC + 7 <= (uint)PTR_00802a38->field_00E4) {
        param_1->field_04DC = PTR_00802a38->field_00E4;
        thunk_FUN_004df370(param_1,param_1->field_04D8 + -100);
        return 0;
      }
    }
  }
  else if (TVar1 == CASE_2) {
    iVar5 = 0xf;
    iVar3 = thunk_FUN_004b79c0(*(char *)&param_1->field_0024,param_1->field_0018);
    if (iVar3 == 0) {
      iVar5 = 0x3c;
    }
    if ((uint)(param_1->field_04DC + iVar5) <= (uint)PTR_00802a38->field_00E4) {
      iVar3 = param_1->field_04D8 + 100;
      param_1->field_04D8 = iVar3;
      if (9999 < iVar3) {
        param_1->field_04D8 = 10000;
        param_1->field_04D0 = CASE_0;
        TLOBaseTy::RotateSpr(param_1,0);
        dVar4 = (*param_1->vtable->slot_2C)(param_1);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_004b7710(CONCAT31((int3)(dVar4 >> 8),*(undefined1 *)&param_1->field_0024),dVar4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (param_1->field_0024 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
          thunk_FUN_004d8b70((char)param_1->field_0024);
        }
      }
      param_1->field_04DC = PTR_00802a38->field_00E4;
    }
    if (param_1->field_04D4 == 1) {
      param_1->field_04D0 = CASE_1;
      param_1->field_04D4 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
      (*param_1->vtable->vfunc_90)(3,0x26b);
      dVar4 = (*param_1->vtable->slot_2C)(param_1);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004b7710(CONCAT31((int3)(dVar4 >> 8),*(undefined1 *)&param_1->field_0024),dVar4);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (param_1->field_0024 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
        thunk_FUN_004d8b70((char)param_1->field_0024);
        return 0;
      }
    }
  }
  return 0;
}


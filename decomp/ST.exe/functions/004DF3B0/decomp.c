
undefined4 __fastcall FUN_004df3b0(TLOBaseTy *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = param_1->field_04D0;
  if (iVar2 == 0) {
    if ((*(int *)&param_1->field_0x4e0 != 0) || (*(int *)&param_1->field_0x4d4 == 1)) {
      param_1->field_04D0 = 1;
      *(undefined4 *)&param_1->field_0x4d4 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
    }
  }
  else if (iVar2 == 1) {
    if ((*(int *)&param_1->field_0x4d8 == 0) || (*(int *)&param_1->field_0x4d4 == 2)) {
      iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar2 == *(int *)(param_1->field_01F5 + 0x20c)) {
        param_1->field_04D0 = 2;
        uVar1 = PTR_00802a38->field_00E4;
        *(undefined4 *)&param_1->field_0x4d4 = 0;
        *(undefined4 *)&param_1->field_0x4dc = uVar1;
        TLOBaseTy::RotateSpr(param_1,0);
        iVar2 = (*param_1->vtable->vfunc_2C)();
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar2 >> 8),param_1->field_0x24),iVar2);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
          thunk_FUN_004d8b70((char)*(uint *)&param_1->field_0x24);
        }
        thunk_FUN_004c2d40((AnonShape_004C2D40_7C578146 *)param_1);
        (*param_1->vtable->vfunc_90)(3,0x26c);
        return 0;
      }
    }
    else {
      if (*(int *)&param_1->field_0x408 == 0) {
        thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
        (*param_1->vtable->vfunc_90)(3,0x26b);
      }
      if (*(int *)&param_1->field_0x4dc + 7U <= (uint)PTR_00802a38->field_00E4) {
        *(undefined4 *)&param_1->field_0x4dc = PTR_00802a38->field_00E4;
        thunk_FUN_004df370(param_1,*(int *)&param_1->field_0x4d8 + -100);
        return 0;
      }
    }
  }
  else if (iVar2 == 2) {
    iVar3 = 0xf;
    iVar2 = thunk_FUN_004b79c0(param_1->field_0x24,*(int *)&param_1->field_0x18);
    if (iVar2 == 0) {
      iVar3 = 0x3c;
    }
    if ((uint)(*(int *)&param_1->field_0x4dc + iVar3) <= (uint)PTR_00802a38->field_00E4) {
      iVar2 = *(int *)&param_1->field_0x4d8 + 100;
      *(int *)&param_1->field_0x4d8 = iVar2;
      if (9999 < iVar2) {
        *(undefined4 *)&param_1->field_0x4d8 = 10000;
        param_1->field_04D0 = 0;
        TLOBaseTy::RotateSpr(param_1,0);
        iVar2 = (*param_1->vtable->vfunc_2C)();
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar2 >> 8),param_1->field_0x24),iVar2);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
          thunk_FUN_004d8b70((char)*(uint *)&param_1->field_0x24);
        }
      }
      *(undefined4 *)&param_1->field_0x4dc = PTR_00802a38->field_00E4;
    }
    if (*(int *)&param_1->field_0x4d4 == 1) {
      param_1->field_04D0 = 1;
      *(undefined4 *)&param_1->field_0x4d4 = 0;
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
      (*param_1->vtable->vfunc_90)(3,0x26b);
      iVar2 = (*param_1->vtable->vfunc_2C)();
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar2 >> 8),param_1->field_0x24),iVar2);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
        thunk_FUN_004d8b70((char)*(uint *)&param_1->field_0x24);
        return 0;
      }
    }
  }
  return 0;
}


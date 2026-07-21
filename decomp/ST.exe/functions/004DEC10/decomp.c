
/* [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

undefined4 __fastcall FUN_004dec10(TLOBaseTy *param_1)

{
  int iVar1;
  int iVar2;

  switch(param_1->field_04D0) {
  case CASE_0:
    iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar1 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_1;
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
      (*param_1->vtable->vfunc_90)(4,0x340);
      return 0;
    }
    break;
  case CASE_1:
    if ((*(int *)&param_1->field_0x4d4 == 0) &&
       (iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e'),
       iVar1 == param_1->field_01F5->field_020C)) {
      param_1->field_04D0 = CASE_3;
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2d40((AnonShape_004C2D40_7C578146 *)param_1);
      (*param_1->vtable->vfunc_90)(4,0x341);
      return 0;
    }
    break;
  case CASE_2:
    iVar2 = 0x2d;
    iVar1 = thunk_FUN_004b79c0(param_1->field_0x24,*(int *)&param_1->field_0x18);
    if (iVar1 == 0) {
      iVar2 = 0xb4;
    }
    if ((uint)(*(int *)&param_1->field_0x4d8 + iVar2) <= (uint)PTR_00802a38->field_00E4) {
      iVar1 = *(int *)&param_1->field_0x4d4 + 0x32;
      *(int *)&param_1->field_0x4d4 = iVar1;
      if (4999 < iVar1) {
        *(undefined4 *)&param_1->field_0x4d4 = 5000;
        param_1->field_04D0 = CASE_0;
        TLOBaseTy::RotateSpr(param_1,0);
        iVar1 = (*param_1->vtable->vfunc_2C)();
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar1 >> 8),param_1->field_0x24),iVar1);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
          thunk_FUN_004d8b70((char)*(uint *)&param_1->field_0x24);
        }
      }
      *(undefined4 *)&param_1->field_0x4d8 = PTR_00802a38->field_00E4;
      return 0;
    }
    break;
  case CASE_3:
    iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar1 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_2;
      TLOBaseTy::RotateSpr(param_1,0);
      *(undefined4 *)&param_1->field_0x4d8 = PTR_00802a38->field_00E4;
      iVar1 = (*param_1->vtable->vfunc_2C)();
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar1 >> 8),param_1->field_0x24),iVar1);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(uint *)&param_1->field_0x24 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
        thunk_FUN_004d8b70((char)*(uint *)&param_1->field_0x24);
      }
    }
  }
  return 0;
}


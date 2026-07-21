
undefined4 __fastcall FUN_004dd570(TLOBaseTy *param_1)

{
  int iVar1;

  iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (iVar1 == *(int *)(param_1->field_01F5 + 0x20c)) {
    if (param_1->field_04D0 == 1) {
      param_1->field_04D0 = 2;
    }
    else {
      if (param_1->field_04D0 != 3) goto LAB_004dd5bb;
      param_1->field_04D0 = 0;
    }
    TLOBaseTy::RotateSpr(param_1,0);
  }
LAB_004dd5bb:
  if ((DAT_008117a4 != (void *)0x0) && (param_1->field_04D0 == 0)) {
    iVar1 = thunk_FUN_0062e640(DAT_008117a4,*(int *)&param_1->field_0x24,
                               *(int *)&param_1->field_0x18);
    if (iVar1 == 0) {
      if (*(int *)&param_1->field_0x4d8 == 0) {
        *(undefined4 *)&param_1->field_0x4d8 = 1;
        *(undefined4 *)&param_1->field_0x4dc = PTR_00802a38->field_00E4;
        return 0;
      }
      if (*(int *)&param_1->field_0x4dc + 0x2eeU <= (uint)PTR_00802a38->field_00E4) {
        iVar1 = thunk_FUN_0062e6b0(DAT_008117a4,*(int *)&param_1->field_0x24,
                                   *(int *)&param_1->field_0x18);
        *(uint *)&param_1->field_0x4d8 = (uint)(iVar1 == 0);
      }
    }
  }
  return 0;
}


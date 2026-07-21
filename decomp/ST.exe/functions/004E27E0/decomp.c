
undefined4 __fastcall FUN_004e27e0(TLOBaseTy *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  TLOBaseTy *local_8;

  local_8 = param_1;
  if ((uint)PTR_00802a38->field_00E4 % 0x4b == 0) {
    piVar3 = &param_1->field_04D0;
    iVar2 = 2;
    do {
      if ((*piVar3 != 0) &&
         ((iVar1 = FUN_006e62d0(PTR_00802a38,*piVar3,(int *)&local_8), iVar1 != 0 ||
          (iVar1 = thunk_FUN_0045ff10((int)local_8), iVar1 != 4)))) {
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((*(int *)&param_1->field_0x520 != 0) &&
       (iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\f'),
       iVar2 == *(int *)(param_1->field_01F5 + 0x1c4))) && (param_1->field_04D0 == 0)) &&
     (*(int *)&param_1->field_0x4f8 == 0)) {
    *(undefined4 *)&param_1->field_0x520 = 0;
    TLOBaseTy::RotateSpr(param_1,0);
  }
  return 0;
}


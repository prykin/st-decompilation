
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d9350(TLOBaseTy *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = param_1->field_04D0;
  if ((iVar1 == 3) || (iVar1 == 5)) {
    iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\f');
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (iVar1 != *(int *)(param_1->field_01F5 + 0x1c4)) {
      return 0;
    }
    thunk_FUN_004d9000((AnonShape_004D9000_7AA66E43 *)param_1);
  }
  else {
    if (iVar1 != 4) {
      return 0;
    }
    if (DAT_00798de0 < 2) {
      return 0;
    }
    if (DAT_00798de0 <= *(int *)&param_1->field_0x4d4) {
      return 0;
    }
    if ((uint)PTR_00802a38->field_00E4 <
        (uint)(*(int *)&param_1->field_0x4dc + *(int *)&param_1->field_0x4d8)) {
      return 0;
    }
    iVar3 = *(int *)&param_1->field_0x4d4 + 1;
    *(undefined4 *)&param_1->field_0x4d8 = PTR_00802a38->field_00E4;
    *(int *)&param_1->field_0x4d4 = iVar3;
    iVar1 = ((_UNK_00798e58 - _UNK_00798e4c) * iVar3) / DAT_00798de0 + _UNK_00798e4c;
    iVar2 = ((_UNK_00798e5c - _UNK_00798e50) * iVar3) / DAT_00798de0 + _UNK_00798e50;
    *(int *)&param_1->field_0x4e0 =
         (short)param_1->field_0041 + 100 +
         _UNK_00798e48 + ((_UNK_00798e54 - _UNK_00798e48) * iVar3) / DAT_00798de0;
    iVar1 = (short)param_1->field_0043 + 100 + iVar1;
    *(int *)&param_1->field_0x4e4 = iVar1;
    iVar2 = iVar2 + (short)param_1->field_0045;
    *(int *)&param_1->field_0x4e8 = iVar2;
    thunk_FUN_004ad3c0((void *)param_1->field_05FF,
                       (float)*(int *)&param_1->field_0x4e0 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar1 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar2 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (*(int *)&param_1->field_0x4d4 < *(int *)(&DAT_00798dd0 + param_1->field_04D0 * 4)) {
      return 0;
    }
    if (param_1->field_04D0 == 4) {
      thunk_FUN_004c4550(param_1,(int *)0x0);
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
  }
  TLOBaseTy::RotateSpr(param_1,0);
  return 0;
}


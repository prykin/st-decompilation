
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ed210(TLOBaseTy *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1->field_04D0;
  if ((iVar1 == 3) || (iVar1 == 5)) {
    iVar1 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar1 != *(int *)(param_1->field_01F5 + 0x20c)) {
      return 0;
    }
  }
  else {
    if (iVar1 != 4) {
      return 0;
    }
    if (DAT_0079aab8 < 2) {
      return 0;
    }
    if (DAT_0079aab8 <= *(int *)&param_1->field_0x4d4) {
      return 0;
    }
    if ((uint)PTR_00802a38->field_00E4 <
        (uint)(*(int *)&param_1->field_0x4dc + *(int *)&param_1->field_0x4d8)) {
      return 0;
    }
    iVar3 = *(int *)&param_1->field_0x4d4 + 1;
    *(undefined4 *)&param_1->field_0x4d8 = PTR_00802a38->field_00E4;
    *(int *)&param_1->field_0x4d4 = iVar3;
    iVar1 = ((_UNK_0079ab34 - _UNK_0079ab28) * iVar3) / DAT_0079aab8 + _UNK_0079ab28;
    iVar2 = ((_UNK_0079ab30 - _UNK_0079ab24) * iVar3) / DAT_0079aab8 + _UNK_0079ab24 +
            (int)(short)param_1->field_0043;
    *(int *)&param_1->field_0x4e0 =
         (int)(short)param_1->field_0041 +
         _UNK_0079ab20 + ((_UNK_0079ab2c - _UNK_0079ab20) * iVar3) / DAT_0079aab8;
    *(int *)&param_1->field_0x4e4 = iVar2;
    iVar1 = (short)param_1->field_0045 + iVar1;
    *(int *)&param_1->field_0x4e8 = iVar1;
    thunk_FUN_004ad3c0((void *)param_1->field_05FF,
                       (float)*(int *)&param_1->field_0x4e0 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar2 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (*(int *)&param_1->field_0x4d4 < *(int *)(&DAT_0079aaa8 + param_1->field_04D0 * 4)) {
      return 0;
    }
    thunk_FUN_004c4550(param_1,(int *)0x0);
  }
  thunk_FUN_004ecea0((AnonShape_004ECEA0_52E8E272 *)param_1);
  TLOBaseTy::RotateSpr(param_1,0);
  return 0;
}


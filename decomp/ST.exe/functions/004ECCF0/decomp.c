
undefined4 __fastcall FUN_004eccf0(AnonShape_004ECC70_4D35D723 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_1->field_04D4 + 0x19 <= (uint)PTR_00802a38->field_00E4) &&
     (param_1->field_04D4 = PTR_00802a38->field_00E4, (int)param_1->field_04D0 < 5000)) {
    lVar2 = FUN_006b12cc(0x19);
    iVar1 = (int)lVar2;
    lVar2 = FUN_006b12cc(0x1194);
    iVar1 = FUN_006b12a8((int)lVar2,iVar1);
    lVar2 = FUN_006b12cc(5000);
    iVar1 = FUN_006b12a8((int)lVar2,iVar1);
    iVar1 = FUN_006b1280(iVar1);
    iVar1 = param_1->field_04D0 + iVar1;
    param_1->field_04D0 = iVar1;
    if ((4999 < iVar1) && (param_1->field_04D0 = 5000, param_1->field_05AC == 0x73)) {
      thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
    }
  }
  return 0;
}


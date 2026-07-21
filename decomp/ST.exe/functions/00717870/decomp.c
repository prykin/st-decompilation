
void __fastcall FUN_00717870(AnonShape_00717870_6CEBD31A *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  param_1->field_04BA = 0;
  param_1->field_04A2 = 0;
  do {
    FUN_006a5e90(*(short **)((int)param_1->field_0472 + iVar1));
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x140);
  FreeAndNull(&param_1->field_0472);
  FreeAndNull((void **)&param_1->field_0x46e);
  param_1->field_0466 = 0;
  return;
}


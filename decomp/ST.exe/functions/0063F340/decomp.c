
void __fastcall FUN_0063f340(AnonShape_0063F340_151E9E14 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;

  puVar3 = param_1->field_0347;
  if (puVar3 == (ushort *)0x0) {
    puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806774,CASE_1D,"expl_nb0",0xffffffff,0,1,0,(undefined4 *)0x0)
    ;
    param_1->field_0347 = puVar3;
    param_1->field_033E = *(int *)puVar3 + -7;
    if (puVar3 == (ushort *)0x0) {
      return;
    }
  }
  iVar1 = param_1->field_033E;
  if (iVar1 < 1) {
    param_1->field_0342 = **(undefined4 **)(*(int *)((int)puVar3 + 0x21) + iVar1 * 4);
    return;
  }
  uVar2 = **(undefined4 **)(*(int *)((int)puVar3 + 0x21) + 4 + (iVar1 + -1) * 4);
  param_1->field_033E = iVar1 + -1;
  param_1->field_0342 = uVar2;
  return;
}


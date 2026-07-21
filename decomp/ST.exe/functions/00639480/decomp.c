
undefined4 * __fastcall FUN_00639480(AnonShape_00639480_B53D0B0F *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGameObjC::STGameObjC((STGameObjC *)param_1);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&param_1->field_01D5);
  param_1->field_01D5 = &VTable_0079D338;
  *(VTable_0079D1D8 **)param_1 = &VTable_0079D1D8;
  puVar2 = (undefined4 *)&param_1->field_0x231;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)&param_1->field_0x272;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  param_1->field_0x270 = 1;
  param_1->field_026F = 0;
  param_1->field_0271 = 0;
  return (undefined4 *)param_1;
}



undefined4 * __fastcall FUN_004d0fc0(STGroupBoatC *param_1)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  int iVar2;
  undefined4 *puVar3;
  
  STGameObjC::STGameObjC((STGameObjC *)param_1);
  pAVar1 = (AnonShape_004AB810_8E5693D5 *)((int)&param_1->field_01D2 + 3);
  thunk_FUN_004ab810(pAVar1);
  param_1->vtable = (STGroupBoatCVTable *)&VTable_00798C70;
  *(VTable_00798C6C **)pAVar1 = &VTable_00798C6C;
  *(undefined4 *)&param_1->field_0x2a8 = 0;
  *(undefined4 *)&param_1->field_0x2dc = 0;
  *(undefined4 *)((int)&param_1[1].field_003D + 1) = 0;
  *(undefined4 *)((int)&param_1[1].field_0041 + 1) = 0;
  *(undefined4 *)((int)&param_1[1].field_0045 + 1) = 0;
  puVar3 = &param_1->field_0308;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)&param_1[1].field_0049 + 1) = 0;
  *(undefined4 *)&param_1->field_0x2c8 = 1;
  *(undefined4 *)&param_1->field_02C4 = 1;
  *(undefined4 *)((int)&param_1->field_02BF + 1) = 1;
  *(undefined4 *)&param_1->field_0x2bc = 1;
  *(undefined4 *)&param_1->field_0x2b8 = 1;
  *(undefined4 *)&param_1->field_0x2b4 = 1;
  *(undefined4 *)&param_1->field_0x2e0 = 0;
  *(undefined4 *)((int)&param_1->field_029F + 1) = 0;
  *(undefined4 *)&param_1->field_0x2e4 = 0;
  *(undefined4 *)&param_1->field_0x2e8 = 0;
  *(undefined4 *)((int)&param_1[1].field_0039 + 1) = 0xff;
  *(undefined4 *)&param_1->field_0x2a4 = 0;
  return &param_1->vtable;
}



undefined4 * __fastcall FUN_00510c80(STGroupBoatC *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  STGroupBoatC::sub_006E5FB0(param_1);
  *(undefined4 *)((int)&param_1->field_0059 + 3) = 0;
  *(undefined4 *)((int)&param_1->field_0041 + 3) = 0;
  *(undefined4 *)((int)&param_1->field_0039 + 3) = 0;
  *(undefined4 *)((int)&param_1->field_005D + 3) = 0xffffffff;
  *(undefined4 *)((int)&param_1->field_0061 + 3) = 3;
  *(undefined4 *)((int)&param_1->field_0065 + 3) = 0;
  param_1->field_0172 = 2;
  param_1->field_0178 = 0;
  param_1->vtable = (STGroupBoatCVTable *)&VTable_0079AC48;
  *(undefined4 *)((int)&param_1->field_003D + 3) = 500;
  *(undefined4 *)((int)&param_1->field_0045 + 3) = 400;
  *(undefined1 *)((int)&param_1->field_019D + 3) = 0;
  *(undefined1 *)((int)&param_1->field_01A1 + 1) = 0;
  *(undefined1 *)&param_1->field_01A1 = 0;
  param_1->field_01A7 = 0;
  param_1->field_01A3 = 0;
  *(undefined4 *)((int)&param_1->field_01DA + 2) = 0;
  *(undefined4 *)((int)&param_1->field_01E6 + 2) = 0;
  *(undefined4 *)&param_1->field_0x1e4 = 0;
  *(undefined4 *)((int)&param_1->field_01DE + 2) = 0;
  *(undefined4 *)((int)&param_1->field_0216 + 2) = 0;
  *(undefined4 *)&param_1->field_0x1ec = 0;
  puVar3 = (undefined4 *)&param_1->field_0x1f0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1->field_017C = 0;
  param_1->field_017E = 0;
  puVar3 = (undefined4 *)&param_1->field_0180;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)&param_1->field_0199 + 3) = 0;
  *(undefined4 *)((int)&param_1->field_01CA + 1) = 0;
  param_1->field_01BB = 0;
  param_1->field_01BD = 0;
  param_1->field_01B3 = 0;
  uVar1 = *(undefined4 *)structHelp_exref;
  *(undefined4 *)((int)&param_1->field_01CE + 1) = 0xffffffff;
  *(undefined4 *)((int)&param_1->field_01C5 + 2) = uVar1;
  *(undefined4 *)&param_1->field_0x1bf = 0;
  *(undefined4 *)&param_1->field_01B7 = 0;
  *(undefined4 *)((int)&param_1->field_01D6 + 1) = 0;
  *(undefined1 *)((int)&param_1->field_01DA + 1) = 0;
  *(undefined4 *)((int)&param_1->field_024A + 2) = 0;
  *(undefined4 *)((int)&param_1->field_021A + 2) = 0;
  *(undefined4 *)((int)&param_1->field_0236 + 2) = 0;
  *(undefined4 *)((int)&param_1->field_0246 + 2) = 0;
  *(undefined4 *)((int)&param_1->field_022A + 2) = 0;
  *(undefined4 *)((int)&param_1->field_0226 + 2) = 0;
  *(undefined4 *)((int)&param_1->field_0232 + 2) = 0;
  *(undefined4 *)((int)&param_1->field_022E + 2) = 0;
  *(undefined4 *)((int)&param_1->field_021E + 2) = 0;
  *(undefined4 *)((int)&param_1->field_0222 + 2) = 0;
  *(undefined4 *)((int)&param_1->field_0242 + 2) = 0;
  *(undefined4 *)((int)&param_1->field_023E + 2) = 0;
  *(undefined4 *)((int)&param_1->field_023A + 2) = 0;
  *(undefined4 *)((int)&param_1->field_01D2 + 1) = 0;
  return &param_1->vtable;
}


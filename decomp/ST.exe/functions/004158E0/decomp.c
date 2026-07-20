
undefined4 * __fastcall FUN_004158e0(STGroupBoatC *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0(param_1);
  param_1->vtable = (STGroupBoatCVTable *)&PTR_GetMessage_007900a0;
  param_1->field_0020 = 0;
  *(undefined4 *)&param_1->field_0024 = 0xff;
  *(undefined4 *)((int)&param_1->field_0027 + 1) = 1;
  *(undefined4 *)((int)&param_1->field_0029 + 3) = 0;
  *(undefined2 *)((int)&param_1->field_002D + 3) = 0xffff;
  *(undefined2 *)((int)&param_1->field_0031 + 1) = 0xffff;
  puVar2 = (undefined4 *)((int)&param_1->field_0031 + 3);
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  *(undefined2 *)((int)&param_1->field_005D + 2) = 0xffff;
  *(undefined2 *)&param_1->field_005D = 0xffff;
  *(undefined2 *)((int)&param_1->field_0059 + 2) = 0xffff;
  *(undefined2 *)&param_1->field_0x6e = 0x2f;
  *(undefined1 *)((int)&param_1->field_0061 + 1) = 1;
  *(undefined1 *)&param_1->field_0061 = 1;
  puVar2 = (undefined4 *)&param_1->field_0x93;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)&param_1->field_00FD = 1;
  *(undefined4 *)&param_1->field_0xcf = 0xffffffff;
  *(undefined4 *)&param_1->field_0xcb = 0xffffffff;
  *(undefined4 *)&param_1->field_0xc7 = 0xffffffff;
  *(undefined4 *)((int)&param_1->field_010F + 2) = 0xffffffff;
  *(undefined4 *)((int)&param_1->field_010B + 2) = 0xffffffff;
  *(undefined4 *)((int)&param_1->field_0107 + 2) = 0xffffffff;
  *(undefined4 *)((int)&param_1->field_0103 + 2) = 0xffffffff;
  *(undefined4 *)((int)&param_1->field_00FF + 2) = 0xffffffff;
  *(undefined4 *)((int)&param_1->field_011F + 2) = 0;
  *(undefined4 *)&param_1->field_011D = 0;
  *(undefined4 *)((int)&param_1->field_0127 + 2) = 0;
  *(undefined4 *)((int)&param_1->field_0123 + 2) = 0;
  param_1->field_012D = 0;
  param_1->field_012F = 0;
  param_1->field_0131 = 0;
  param_1->field_0133 = 0;
  param_1->field_0135 = 0;
  param_1->field_0137 = 0;
  param_1->field_0139 = 0;
  param_1->field_013B = 0;
  param_1->field_013D = 0;
  param_1->field_0141 = 0;
  *(undefined4 *)&param_1->field_0x145 = 0;
  *(undefined4 *)&param_1->field_0x149 = 0;
  *(undefined4 *)&param_1->field_0x14d = 0;
  *(undefined4 *)&param_1->field_0x151 = 0;
  *(undefined4 *)((int)&param_1->field_0154 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0158 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_015C + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0160 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0164 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0168 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_016C + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0170 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0174 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0178 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_017C + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0180 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_0186 + 3) = 0;
  *(undefined4 *)((int)&param_1->field_0182 + 3) = 0;
  *(undefined4 *)((int)&param_1->field_0190 + 1) = 0;
  *(undefined4 *)((int)&param_1->field_018C + 1) = 0;
  param_1->field_0199 = 0;
  *(undefined4 *)&param_1->field_0x195 = 0;
  *(undefined4 *)&param_1->field_01A1 = 0;
  param_1->field_019D = 0;
  *(undefined4 *)((int)&param_1->field_01A7 + 2) = 0;
  *(undefined4 *)((int)&param_1->field_01A3 + 2) = 0;
  *(undefined4 *)((int)&param_1->field_01AF + 2) = 0;
  *(undefined4 *)((int)&param_1->field_01AB + 2) = 0;
  *(undefined4 *)&param_1->field_0x1b9 = 0;
  *(undefined4 *)((int)&param_1->field_01B3 + 2) = 0;
  param_1->field_01C1 = 0;
  param_1->field_01C3 = 0;
  *(undefined4 *)&param_1->field_01BD = 0;
  *(undefined4 *)&param_1->field_01C9 = 0;
  param_1->field_01C5 = 0;
  *(undefined4 *)((int)&param_1->field_01CA + 3) = 0;
  *(undefined4 *)((int)&param_1->field_01CE + 3) = 0;
  return &param_1->vtable;
}


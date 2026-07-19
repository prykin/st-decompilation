
undefined4 * __fastcall FUN_004d0fc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(param_1);
  thunk_FUN_004ab810((undefined4 *)((int)param_1 + 0x1d5));
  *param_1 = &PTR_GetMessage_00798c70;
  *(undefined4 *)((int)param_1 + 0x1d5) = &PTR_LAB_00798c6c;
  param_1[0xaa] = 0;
  param_1[0xb7] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  puVar2 = param_1 + 0xc2;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xd7] = 0;
  param_1[0xb2] = 1;
  param_1[0xb1] = 1;
  param_1[0xb0] = 1;
  param_1[0xaf] = 1;
  param_1[0xae] = 1;
  param_1[0xad] = 1;
  param_1[0xb8] = 0;
  param_1[0xa8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xd3] = 0xff;
  param_1[0xa9] = 0;
  return param_1;
}


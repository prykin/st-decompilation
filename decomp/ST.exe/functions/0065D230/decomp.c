
undefined4 * __fastcall FUN_0065d230(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_006e60e0(param_1);
  *param_1 = &PTR_LAB_0079d6bc;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 8;
  }
  for (iVar1 = 0x98; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xa1] = 0;
  param_1[8] = 900;
  *(undefined2 *)((int)param_1 + 0x7d) = 0xfffe;
  *(undefined4 *)((int)param_1 + 0x97) = 0xff;
  return param_1;
}


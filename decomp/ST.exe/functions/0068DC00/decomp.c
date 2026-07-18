
undefined4 * __fastcall FUN_0068dc00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_006e60e0(param_1);
  *param_1 = &PTR_LAB_0079d76c;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 8;
  }
  for (iVar1 = 0x43; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[8] = 0x38e;
  *(undefined4 *)((int)param_1 + 0x9d) = 0xff;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  return param_1;
}


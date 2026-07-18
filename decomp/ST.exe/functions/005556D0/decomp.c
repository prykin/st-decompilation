
undefined4 * __fastcall FUN_005556d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_006e60e0(param_1);
  *param_1 = &PTR_LAB_0079aec0;
  DAT_00802a7c = param_1;
  param_1[9] = 0;
  param_1[0x20a] = 0xffffffff;
  puVar2 = param_1 + 10;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


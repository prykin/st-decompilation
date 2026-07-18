
undefined4 * __fastcall FUN_00617840(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_006e60e0(param_1);
  *param_1 = &PTR_LAB_0079cebc;
  puVar2 = param_1 + 7;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  return param_1;
}


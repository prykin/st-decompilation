
undefined4 __fastcall thunk_FUN_004e1e30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x4d0);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  return 0;
}


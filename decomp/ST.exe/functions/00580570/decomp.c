
void __fastcall FUN_00580570(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x25d) = 0;
  *(undefined4 *)(param_1 + 0x269) = 0;
  uVar1 = *(uint *)(param_1 + 0x255);
  if ((0xdb < uVar1) && ((uVar1 < 0xdf || (uVar1 == 0xe0)))) {
    thunk_FUN_00581060();
    thunk_FUN_005803e0(param_1);
  }
  return;
}


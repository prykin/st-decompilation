
void __fastcall FUN_00640130(int param_1)

{
  uint uVar1;
  
  if (*(uint **)(param_1 + 0x37f) != (uint *)0x0) {
    uVar1 = **(uint **)(param_1 + 0x37f);
    if (-1 < (int)uVar1) {
      FUN_006e8ba0(*(void **)(param_1 + 0x211),uVar1);
    }
    FUN_006ab060((LPVOID *)(param_1 + 0x37f));
  }
  return;
}



void __fastcall FUN_0074e2c1(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[1];
    Library::MSVCRT::FUN_0072e2b0(puVar2);
    puVar2 = puVar1;
  }
  return;
}


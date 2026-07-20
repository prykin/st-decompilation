
void __fastcall FUN_00567490(int param_1)

{
  int iVar1;
  cMf32 *extraout_ECX;
  cMf32 *this;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xf8b) != 0) {
    FUN_006c1e20();
    puVar2 = (undefined4 *)(param_1 + 0xe0b);
    for (iVar1 = 0x60; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  this = (cMf32 *)0x0;
  if (*(int *)(param_1 + 0xdf3) != 0) {
    FUN_0071a8d0((int *)(param_1 + 0xdf3));
    this = extraout_ECX;
  }
  if (*(cMf32 **)(param_1 + 0xdef) != (cMf32 *)0x0) {
    cMf32::delete(this,*(cMf32 **)(param_1 + 0xdef));
    *(undefined4 *)(param_1 + 0xdef) = 0;
  }
  return;
}



void __fastcall FUN_0062cf50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)(param_1 + 0x30);
  iVar2 = 8;
  do {
    if ((DArrayTy *)*puVar1 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


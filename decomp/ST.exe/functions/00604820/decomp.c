
void __fastcall FUN_00604820(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x269)) {
    puVar1 = (undefined4 *)(param_1 + 0x219);
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        thunk_FUN_00629e60((void *)*puVar1,1);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x269));
  }
  return;
}


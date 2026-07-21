
void __fastcall FUN_00489950(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)(param_1 + 0x281) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x282);
    do {
      if ((DArrayTy *)*puVar1 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x281));
  }
  return;
}



void __cdecl FUN_00668670(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x1eb);
    iVar2 = 7;
    do {
      if ((byte *)*puVar1 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar1);
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


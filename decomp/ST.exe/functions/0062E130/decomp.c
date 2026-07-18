
void __fastcall FUN_0062e130(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x70);
  iVar2 = 8;
  do {
    if ((byte *)*puVar1 != (byte *)0x0) {
      FUN_006ae110((byte *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


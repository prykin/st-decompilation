
void __fastcall FUN_004f0a60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x292) != 0) {
    FUN_006e56b0(*(void **)(param_1 + 0xc),*(uint *)(param_1 + 0x292));
  }
  *(undefined4 *)(param_1 + 0x292) = 0;
  if (*(int *)(param_1 + 0x27a) != 0) {
    cMf32::RecMemFree(DAT_00806790,(uint *)(param_1 + 0x27a));
  }
  puVar1 = (undefined4 *)(param_1 + 0x27e);
  iVar2 = 5;
  do {
    if ((byte *)*puVar1 != (byte *)0x0) {
      FUN_006ae110((byte *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  DAT_00801684 = 0;
  return;
}


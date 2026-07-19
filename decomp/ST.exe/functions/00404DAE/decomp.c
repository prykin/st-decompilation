
void __fastcall thunk_FUN_004eef20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(uint **)(param_1 + 0x28a) != (uint *)0x0) {
    ccFntTy::operator((ccFntTy *)param_1,*(uint **)(param_1 + 0x28a));
    *(undefined4 *)(param_1 + 0x28a) = 0;
  }
  if (*(uint *)(param_1 + 0x292) != 0) {
    FUN_006e56b0(*(void **)(param_1 + 0xc),*(uint *)(param_1 + 0x292));
  }
  *(undefined4 *)(param_1 + 0x292) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x27a);
  iVar2 = 4;
  do {
    if ((byte *)*puVar1 != (byte *)0x0) {
      FUN_006ae110((byte *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  DAT_0080167c = 0;
  return;
}


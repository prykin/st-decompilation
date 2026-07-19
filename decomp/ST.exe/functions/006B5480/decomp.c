
undefined4 FUN_006b5480(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = Library::DKW::LIB::FUN_006acf50
                    (*(undefined4 **)(param_1 + 0x14),
                     (*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10)) * 4);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  puVar4 = (undefined4 *)(iVar1 + *(int *)(param_1 + 0xc) * 4);
  for (uVar2 = *(uint *)(param_1 + 0x10) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  return 0;
}


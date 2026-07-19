
uint FUN_00754fd0(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x50);
  *(int *)(param_1 + 0xc) = iVar2;
  *(undefined4 *)(iVar2 + 0x18) = param_2;
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x2a) = 1;
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x2e) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x44) = 0xffffffff;
  Library::MSVCRT::FUN_00730c40((undefined1 *)(*(int *)(param_1 + 0xc) + 0x36),0x7f2ce8);
  iVar2 = FUN_00753b40(param_1);
  *(int *)(*(int *)(param_1 + 0xc) + 0x24) = iVar2;
  uVar3 = *(uint *)(*(int *)(param_1 + 0xc) + 0x24);
  if (0 < (int)uVar3) {
    uVar3 = Library::DKW::FMM::FUN_006d4c50
                      (*(int *)(param_1 + 8),uVar3,(int)*(short *)(*(int *)(param_1 + 8) + 0x16));
    if (uVar3 == 0) {
      iVar2 = *(int *)(param_1 + 8);
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 0x10;
      puVar5 = (undefined4 *)(*(int *)(iVar2 + 0x34) + iVar1);
      uVar4 = (uint)*(short *)(*(int *)(param_1 + 8) + 0x16);
      puVar6 = puVar5;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *puVar5 = 0xffffffff;
      puVar5[1] = 0xffffffff;
      *(undefined2 *)(puVar5 + 2) = 0;
      uVar3 = FUN_00757360(param_1,*(int *)(param_1 + 0xc));
    }
    else if (0 < (int)uVar3) {
      return uVar3 | 0xffff0000;
    }
  }
  return uVar3;
}


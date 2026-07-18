
undefined4 * __thiscall thunk_FUN_006012d0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  
  iStack_10 = 0;
  puStack_c = (undefined4 *)FUN_006aac70(0x3d);
  *(undefined4 *)((int)this + 0x212) = 2;
  puVar7 = (undefined4 *)((int)this + 0x206);
  puVar9 = puStack_c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
  iVar4 = *(int *)((int)this + 0x233);
  iVar3 = 0;
  iStack_8 = 0;
  if ((iVar4 != 0) && (iVar2 = 0, 0 < *(int *)((int)this + 0x226))) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar8 + 0x4e + iVar4) == 0) {
        *(undefined4 *)(iVar8 + 0x46 + iVar4) = 0;
      }
      iVar4 = *(int *)((int)this + 0x233);
      iVar2 = iVar2 + 1;
      iVar1 = iVar8 + 0x46;
      iVar8 = iVar8 + 0x52;
      iVar3 = iVar3 + 0x56 + *(int *)(iVar1 + iVar4) * 6;
      iStack_8 = iVar3;
    } while (iVar2 < *(int *)((int)this + 0x226));
  }
  if (*(int *)((int)this + 0x237) != 0) {
    iStack_10 = *(int *)((int)this + 0x237) * 0x1c + 4;
  }
  if (iStack_8 + iStack_10 != 0) {
    puStack_c = (undefined4 *)FUN_006acf50(puStack_c,iStack_8 + 0x3d + iStack_10);
    iVar3 = 0;
    iStack_14 = 0;
    iStack_18 = 0;
    if (0 < *(int *)((int)this + 0x226)) {
      do {
        iVar4 = *(int *)(*(int *)((int)this + 0x233) + 0x46 + iVar3) * 6 + 0x56;
        *(int *)((int)puStack_c + iStack_14 + 0x3d) = iVar4;
        puVar7 = (undefined4 *)((int)puStack_c + iStack_14 + 0x41);
        puVar9 = (undefined4 *)(*(int *)((int)this + 0x233) + iVar3);
        puVar10 = puVar7;
        for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
        iVar2 = *(int *)((int)this + 0x233) + iVar3;
        puVar9 = *(undefined4 **)(iVar2 + 0x4e);
        if (puVar9 != (undefined4 *)0x0) {
          uVar5 = *(int *)(iVar2 + 0x46) * 6;
          puVar7 = (undefined4 *)((int)puVar7 + 0x52);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar7 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        iStack_14 = iStack_14 + iVar4;
        iStack_18 = iStack_18 + 1;
        iVar3 = iVar3 + 0x52;
      } while (iStack_18 < *(int *)((int)this + 0x226));
    }
    if (iStack_10 != 0) {
      *(int *)(iStack_8 + 0x3d + (int)puStack_c) = iStack_10;
      puVar7 = (undefined4 *)(iStack_8 + 0x41 + (int)puStack_c);
      puVar9 = *(undefined4 **)((int)this + 0x23b);
      puVar10 = puVar7;
      for (iVar3 = (*(int *)((int)this + 0x237) * 3 & 0x1fffffffU) << 1; iVar3 != 0;
          iVar3 = iVar3 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar3 = *(int *)((int)this + 0x237);
      puVar9 = *(undefined4 **)((int)this + 0x23f);
      puVar7 = puVar7 + iVar3 * 6;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  *param_1 = iStack_8 + 0x3d + iStack_10;
  return puStack_c;
}


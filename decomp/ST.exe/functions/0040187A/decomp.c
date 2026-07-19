
undefined4 * __thiscall thunk_FUN_0061d710(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piStack_14;
  uint uStack_10;
  int *piStack_c;
  int iStack_8;
  
  iVar4 = 0;
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0xac);
  iVar7 = *(int *)((int)this + 0x93);
  iVar10 = 0x90;
  *(undefined4 *)((int)this + 0x28) = 2;
  if (iVar7 != 0) {
    iVar10 = iVar7 * 0x14;
    if (0 < iVar7) {
      piVar3 = *(int **)((int)this + 0x9b);
      do {
        iVar1 = *piVar3;
        piVar3 = piVar3 + 1;
        iVar7 = iVar7 + -1;
        iVar4 = iVar4 + iVar1 * 0x14;
      } while (iVar7 != 0);
    }
    iVar10 = iVar10 + 0x94 + iVar4;
  }
  iVar4 = iVar10 + 0x20 +
          *(int *)(*(int *)((int)this + 0xa3) + 0xc) * *(int *)(*(int *)((int)this + 0xa3) + 8);
  puVar2 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar4);
  if (this == (void *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)((int)this + 0x1c);
  }
  puVar11 = puVar2;
  for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar6 = *(uint *)((int)this + 0x93);
  puVar8 = *(undefined4 **)((int)this + 0x9b);
  puVar11 = puVar2 + 0x24;
  for (uVar5 = uVar6 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  piVar3 = puVar2 + 0x24 + uVar6;
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  piStack_c = (int *)0x0;
  if (0 < *(int *)((int)this + 0x93)) {
    do {
      iVar7 = *(int *)(*(int *)((int)this + 0x9b) + (int)piStack_c * 4);
      piVar9 = *(int **)(*(int *)((int)this + 0x9f) + (int)piStack_c * 4);
      piVar12 = piVar3;
      for (uVar6 = iVar7 * 5 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar12 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar12 = piVar12 + 1;
      }
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(char *)piVar12 = (char)*piVar9;
        piVar9 = (int *)((int)piVar9 + 1);
        piVar12 = (int *)((int)piVar12 + 1);
      }
      piVar3 = piVar3 + iVar7 * 5;
      piStack_c = (int *)((int)piStack_c + 1);
    } while ((int)piStack_c < *(int *)((int)this + 0x93));
  }
  uVar6 = *(uint *)((int)this + 0x93);
  iStack_8 = uVar6 * 0x10;
  *piVar3 = iStack_8;
  piStack_c = piVar3 + 1 + uVar6 * 4;
  piVar9 = *(int **)((int)this + 0x57);
  piVar3 = piVar3 + 1;
  for (iVar7 = (uVar6 & 0xfffffff) << 2; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar3 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar3 = piVar3 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(char *)piVar3 = (char)*piVar9;
    piVar9 = (int *)((int)piVar9 + 1);
    piVar3 = (int *)((int)piVar3 + 1);
  }
  piStack_14 = (int *)FUN_006b0020(*(uint **)((int)this + 0xa3),(int *)&uStack_10);
  *piStack_c = uStack_10 + 4;
  piVar9 = piStack_14;
  piVar3 = piStack_c;
  for (uVar6 = uStack_10 >> 2; piVar3 = piVar3 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
    *piVar3 = *piVar9;
    piVar9 = piVar9 + 1;
  }
  for (uStack_10 = uStack_10 & 3; uStack_10 != 0; uStack_10 = uStack_10 - 1) {
    *(char *)piVar3 = (char)*piVar9;
    piVar9 = (int *)((int)piVar9 + 1);
    piVar3 = (int *)((int)piVar3 + 1);
  }
  FUN_006ab060(&piStack_14);
  *param_1 = iVar4;
  return puVar2;
}


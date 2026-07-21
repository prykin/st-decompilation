
undefined4 * __thiscall FUN_006012d0(void *this,int *param_1)

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
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_10 = 0;
  local_c = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x3d);
  *(undefined4 *)((int)this + 0x212) = 2;
  puVar7 = (undefined4 *)((int)this + 0x206);
  puVar9 = local_c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
  iVar4 = *(int *)((int)this + 0x233);
  iVar3 = 0;
  local_8 = 0;
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
      local_8 = iVar3;
    } while (iVar2 < *(int *)((int)this + 0x226));
  }
  if (*(int *)((int)this + 0x237) != 0) {
    local_10 = *(int *)((int)this + 0x237) * 0x1c + 4;
  }
  if (local_8 + local_10 != 0) {
    local_c = (undefined4 *)Library::DKW::LIB::FUN_006acf50((int)local_c,local_8 + 0x3d + local_10);
    iVar3 = 0;
    local_14 = 0;
    local_18 = 0;
    if (0 < *(int *)((int)this + 0x226)) {
      do {
        iVar4 = *(int *)(*(int *)((int)this + 0x233) + 0x46 + iVar3) * 6 + 0x56;
        *(int *)((int)local_c + local_14 + 0x3d) = iVar4;
        puVar7 = (undefined4 *)((int)local_c + local_14 + 0x41);
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
        local_14 = local_14 + iVar4;
        local_18 = local_18 + 1;
        iVar3 = iVar3 + 0x52;
      } while (local_18 < *(int *)((int)this + 0x226));
    }
    if (local_10 != 0) {
      *(int *)(local_8 + 0x3d + (int)local_c) = local_10;
      puVar7 = (undefined4 *)(local_8 + 0x41 + (int)local_c);
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
  *param_1 = local_8 + 0x3d + local_10;
  return local_c;
}


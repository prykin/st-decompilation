
int __thiscall FUN_006010a0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_10;
  int local_c;
  int local_8;
  
  puVar8 = param_1;
  puVar2 = (undefined4 *)((int)this + 0x206);
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = *(undefined1 *)puVar8;
  local_8 = 0;
  if (((*(int *)((int)this + 0x233) != 0) && (iVar4 = thunk_FUN_005fd850((int)this), -1 < iVar4)) &&
     (local_10 = 0, 0 < *(int *)((int)this + 0x226))) {
    local_c = 0;
    do {
      iVar4 = *(int *)((int)param_1 + local_8 + 0x3d);
      puVar8 = (undefined4 *)((int)param_1 + local_8 + 0x41);
      uVar1 = *(undefined4 *)(local_c + 0x42 + *(int *)((int)this + 0x233));
      puVar2 = puVar8;
      puVar9 = (undefined4 *)(local_c + *(int *)((int)this + 0x233));
      for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = *(undefined2 *)puVar2;
      *(undefined4 *)(local_c + 0x42 + *(int *)((int)this + 0x233)) = uVar1;
      iVar3 = *(int *)(local_c + 0x39 + *(int *)((int)this + 0x233));
      iVar5 = local_c + *(int *)((int)this + 0x233);
      if ((iVar3 == 3) || (iVar3 == 4)) {
        *(undefined4 *)(iVar5 + 0x4e) = 0;
        *(undefined4 *)(local_c + 0x46 + *(int *)((int)this + 0x233)) = 0;
        *(undefined4 *)(local_c + 0x39 + *(int *)((int)this + 0x233)) = 5;
        *(undefined4 *)(local_c + 0x42 + *(int *)((int)this + 0x233)) = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 0x46);
        if (iVar5 != 0) {
          iVar5 = Library::DKW::LIB::FUN_006aac70(iVar5 * 6);
          *(int *)(local_c + 0x4e + *(int *)((int)this + 0x233)) = iVar5;
          iVar5 = *(int *)((int)this + 0x233) + local_c;
          uVar6 = *(int *)(iVar5 + 0x46) * 6;
          puVar8 = (undefined4 *)((int)puVar8 + 0x52);
          puVar2 = *(undefined4 **)(iVar5 + 0x4e);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar2 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar2 = puVar2 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar2 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar2 = (undefined4 *)((int)puVar2 + 1);
          }
        }
      }
      local_8 = local_8 + iVar4;
      local_10 = local_10 + 1;
      local_c = local_c + 0x52;
    } while (local_10 < *(int *)((int)this + 0x226));
  }
  if (*(int *)((int)this + 0x237) == 0) {
    return local_8 + 0x41;
  }
  iVar4 = *(int *)((int)this + 0x237) * 0x18;
  puVar2 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar4);
  *(undefined4 **)((int)this + 0x23b) = puVar2;
  puVar8 = (undefined4 *)(local_8 + 0x41 + (int)param_1);
  for (iVar5 = (*(int *)((int)this + 0x237) * 3 & 0x1fffffffU) << 1; iVar5 != 0; iVar5 = iVar5 + -1)
  {
    *puVar2 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar2 = puVar2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  iVar5 = *(int *)((int)this + 0x237) * 4;
  iVar3 = Library::DKW::LIB::FUN_006aac70(iVar5);
  *(int *)((int)this + 0x23f) = iVar3;
  return local_8 + 0x41 + iVar4 + iVar5;
}


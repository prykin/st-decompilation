
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0061DB80 -> 0061D9C0 @ 0061DBE3 */

int __thiscall FUN_0061d9c0(void *this,ushort *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  if (param_3 == 0) {
    param_3 = 0x10;
    *(undefined4 *)((int)this + 0x93) = *(undefined4 *)param_1;
    *(undefined4 *)((int)this + 0x97) = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)((int)this + 0x9b) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)this + 0x9f) = *(undefined4 *)(param_1 + 6);
    param_1 = param_1 + 8;
  }
  else {
    param_3 = 0;
  }
  uVar5 = *(uint *)((int)this + 0x93);
  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar5 * 4);
  *(undefined4 **)((int)this + 0x9b) = puVar1;
  puVar7 = param_1;
  for (uVar2 = uVar5 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *(undefined4 *)puVar7;
    puVar7 = puVar7 + 2;
    puVar1 = puVar1 + 1;
  }
  param_3 = param_3 + uVar5 * 4;
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(char *)puVar1 = (char)*puVar7;
    puVar7 = (ushort *)((int)puVar7 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  param_1 = param_1 + uVar5 * 2;
  iVar3 = *(int *)((int)this + 0x93);
  if (0 < iVar3) {
    piVar4 = *(int **)((int)this + 0x9b);
    do {
      iVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      local_c = local_c + 8 + iVar6 * 0x14;
      local_8 = local_8 + iVar6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *param_2 = local_8;
  iVar3 = Library::DKW::LIB::FUN_006aac70(local_c);
  *(int *)((int)this + 0x9f) = iVar3;
  param_2 = (int *)(iVar3 + *(int *)((int)this + 0x93) * 4);
  local_c = 0;
  if (0 < *(int *)((int)this + 0x93)) {
    do {
      *(int **)(*(int *)((int)this + 0x9f) + local_c * 4) = param_2;
      iVar3 = *(int *)(*(int *)((int)this + 0x9b) + local_c * 4);
      puVar7 = param_1;
      puVar1 = *(undefined4 **)(*(int *)((int)this + 0x9f) + local_c * 4);
      for (uVar5 = iVar3 * 5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = *(undefined4 *)puVar7;
        puVar7 = puVar7 + 2;
        puVar1 = puVar1 + 1;
      }
      param_3 = param_3 + iVar3 * 0x14;
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)puVar1 = (char)*puVar7;
        puVar7 = (ushort *)((int)puVar7 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      param_1 = param_1 + iVar3 * 10;
      param_2 = param_2 + iVar3 * 5;
      local_c = local_c + 1;
    } while (local_c < *(int *)((int)this + 0x93));
  }
  return param_3;
}



uint __thiscall thunk_FUN_00555d90(void *this,undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  iVar4 = *(int *)((int)this + 0x828);
  if (-1 < iVar4) {
    uVar2 = (uint)*(short *)((int)this + iVar4 * 2 + 0x28);
    *(int *)((int)this + 0x828) = iVar4 + -1;
    if (-1 < (int)uVar2) {
      iVar4 = *(int *)((int)this + 0x24);
      if (uVar2 < *(uint *)(iVar4 + 0xc)) {
        puVar6 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar2 + *(int *)(iVar4 + 0x1c));
        for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *param_1;
          param_1 = param_1 + 1;
          puVar6 = puVar6 + 1;
        }
        return 0;
      }
LAB_00555e34:
      puVar6 = (undefined4 *)0x0;
      for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *param_1;
        param_1 = param_1 + 1;
        puVar6 = puVar6 + 1;
      }
      return 0;
    }
  }
  puVar1 = *(uint **)((int)this + 0x24);
  uVar5 = 0;
  uVar2 = puVar1[3];
  if (0 < (int)uVar2) {
    bVar7 = uVar2 != 0;
    do {
      if (bVar7) {
        iVar4 = puVar1[2] * uVar5 + puVar1[7];
      }
      else {
        iVar4 = 0;
      }
      if (*(int *)(iVar4 + 0x32) < 0) {
        if (-1 < (int)uVar5) {
          if (uVar5 < uVar2) {
            puVar6 = (undefined4 *)(puVar1[2] * uVar5 + puVar1[7]);
            for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *param_1;
              param_1 = param_1 + 1;
              puVar6 = puVar6 + 1;
            }
            return 0;
          }
          goto LAB_00555e34;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      bVar7 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  uVar2 = FUN_006ae1c0(puVar1,param_1);
  return uVar2;
}



int __thiscall thunk_FUN_005f5b80(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar5 = param_1;
  puVar7 = (undefined4 *)((int)this + 0x4d);
  for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar3 = 0x128;
  if (*(int *)((int)this + 0x169) != 0) {
    uVar2 = FUN_006b0060((uint *)0x0,param_1 + 0x4b);
    *(undefined4 *)((int)this + 0x169) = uVar2;
    iVar3 = param_1[0x4a] + 300;
  }
  *(undefined4 *)((int)this + 0x8f) = 0xffffffff;
  if (*(int *)((int)this + 0x169) != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x169) + 0xc);
    uVar6 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = *(int *)((int)this + 0x169);
        if ((uVar6 < *(uint *)(iVar4 + 0xc)) &&
           (iVar4 = *(int *)(iVar4 + 8) * uVar6 + *(int *)(iVar4 + 0x1c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x1f) = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar1);
    }
  }
  return iVar3;
}


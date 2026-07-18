
undefined4 __thiscall FUN_00664540(void *this,undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar1 = *(int *)((int)this + 0x217);
  uVar5 = 0;
  uVar6 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar7 = uVar2 != 0;
      do {
        if (bVar7) {
          iVar3 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (uVar6 < *(uint *)(iVar3 + 4)) {
          uVar5 = uVar4;
          uVar6 = *(uint *)(iVar3 + 4);
        }
        uVar4 = uVar4 + 1;
        bVar7 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar5;
    }
    FUN_006acc70(*(int *)((int)this + 0x217),uVar5,param_1);
    FUN_006b0c70(*(int *)((int)this + 0x217),uVar5);
    return *(undefined4 *)(*(int *)((int)this + 0x217) + 0xc);
  }
  return 0xffffffff;
}


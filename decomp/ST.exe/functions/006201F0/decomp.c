
undefined4 __thiscall FUN_006201f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  *param_1 = 0xffffffff;
  uVar3 = 0;
  uVar7 = 0;
  *param_2 = 0xffffffff;
  iVar5 = *(int *)((int)this + 0xc5);
  uVar8 = 0xffffffff;
  if (((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 0xc), -1 < iVar1)) && (uVar6 = 0, 0 < iVar1)) {
    bVar9 = iVar1 != 0;
    do {
      if (bVar9) {
        puVar4 = (uint *)(*(int *)(iVar5 + 8) * uVar6 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar4 = (uint *)0x0;
      }
      uVar2 = *puVar4;
      if ((uVar2 != 0) && (uVar7 < uVar2)) {
        uVar3 = 1;
        uVar7 = uVar2;
        uVar8 = uVar6;
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      uVar6 = uVar6 + 1;
      bVar9 = uVar6 < uVar2;
    } while ((int)uVar6 < (int)uVar2);
    if (-1 < (int)uVar8) {
      if (uVar8 < uVar2) {
        iVar5 = *(int *)(iVar5 + 8) * uVar8 + *(int *)(iVar5 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      *param_1 = *(undefined4 *)(iVar5 + 8);
      *param_2 = *(undefined4 *)(iVar5 + 0xc);
    }
  }
  return uVar3;
}



int __thiscall FUN_00696c40(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  int local_8;
  
  iVar1 = *(int *)((int)this + 0x5853);
  iVar2 = 0;
  local_8 = 0;
  if (param_1 < *(uint *)(iVar1 + 0xc)) {
    iVar3 = *(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c);
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x19), iVar3 != 0)) {
      uVar6 = 0;
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar7 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (bVar7) {
            puVar4 = (uint *)(*(int *)(iVar3 + 8) * uVar6 + *(int *)(iVar3 + 0x1c));
          }
          else {
            puVar4 = (uint *)0x0;
          }
          if ((((*puVar4 < *(uint *)(iVar1 + 0xc)) &&
               (piVar5 = (int *)(*puVar4 * *(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x1c)),
               piVar5 != (int *)0x0)) && (*piVar5 == param_2)) && (uVar6 != param_3)) {
            local_8 = local_8 + 1;
          }
          uVar6 = uVar6 + 1;
          bVar7 = uVar6 < *(uint *)(iVar3 + 0xc);
          iVar2 = local_8;
        } while ((int)uVar6 < (int)*(uint *)(iVar3 + 0xc));
      }
    }
  }
  return iVar2;
}



int __fastcall FUN_006048e0(AnonShape_006048E0_C1705B76 *param_1)

{
  uint uVar1;
  DArrayTy *pDVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((param_1->field_0215 != (DArrayTy *)0x0) &&
     (uVar1 = param_1->field_0215->count, 0 < (int)uVar1)) {
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      pDVar2 = param_1->field_0215;
      if (uVar1 < pDVar2->count) {
        pvVar3 = (void *)(pDVar2->elementSize * uVar1 + (int)pDVar2->data);
      }
      else {
        pvVar3 = (void *)0x0;
      }
      if ((*(int *)((int)pvVar3 + 0x10) == 10) &&
         (iVar4 = thunk_FUN_00604a00(param_1,*(int *)((int)pvVar3 + 0x14)), iVar4 != 0)) {
        iVar5 = iVar5 + 1;
      }
      FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_1->field_0215,uVar1);
    }
  }
  return iVar5;
}


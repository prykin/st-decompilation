
int FUN_004dfb90(uint param_1,int param_2,int param_3)

{
  int iVar1;
  STPlayerRuntimeRecord *pSVar2;
  int iVar3;
  int iVar4;
  DArrayTy *pDVar5;
  int iVar6;
  
  iVar3 = param_3;
  iVar6 = 0;
  pSVar2 = g_playerRuntime + param_1;
  pDVar5 = pSVar2->field2165_0x9d2;
  if ((pDVar5 != (DArrayTy *)0x0) && (param_1 = 0, 0 < (int)pDVar5->count)) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar5,param_1,&param_3);
      iVar1 = *(int *)(param_3 + 0x4d0);
      if (iVar1 != 0) {
        if ((param_2 - iVar6) * iVar3 <= iVar1) {
          *(int *)(param_3 + 0x4d0) = *(int *)(param_3 + 0x4d0) - (param_2 - iVar6) * iVar3;
          return param_2;
        }
        iVar4 = (iVar1 / iVar3) * iVar3;
        if (iVar4 != 0) {
          iVar6 = iVar6 + iVar1;
          *(int *)(param_3 + 0x4d0) = iVar1 - iVar4;
        }
      }
      param_1 = param_1 + 1;
      pDVar5 = pSVar2->field2165_0x9d2;
    } while ((int)param_1 < (int)pDVar5->count);
  }
  return iVar6;
}


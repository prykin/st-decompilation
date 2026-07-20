
int FUN_004de410(void *param_1,int param_2,int param_3)

{
  STPlayerRuntimeRecord *pSVar1;
  int iVar2;
  int iVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  int local_8;
  
  iVar2 = param_2;
  local_8 = 0;
  pSVar1 = g_playerRuntime + (int)param_1;
  pDVar4 = pSVar1->field2282_0x9ce;
  if ((pDVar4 != (DArrayTy *)0x0) && (uVar5 = 0, 0 < (int)pDVar4->count)) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar4,uVar5,&param_1);
      iVar3 = thunk_FUN_004ddb30(param_1,iVar2);
      if (iVar3 != 0) {
        if (param_3 - local_8 <= iVar3) {
          thunk_FUN_004ddc30(param_1,iVar2,param_3 - local_8);
          return param_3;
        }
        thunk_FUN_004ddc30(param_1,iVar2,iVar3);
        local_8 = local_8 + iVar3;
      }
      uVar5 = uVar5 + 1;
      pDVar4 = pSVar1->field2282_0x9ce;
    } while ((int)uVar5 < (int)pDVar4->count);
    return local_8;
  }
  return 0;
}



int FUN_0062d7d0(int *param_1,int *param_2)

{
  int iVar1;
  DArrayTy *pDVar2;
  int iVar3;
  int *piVar4;

  piVar4 = param_2;
  iVar3 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = (int *)0x8;
  do {
    if (*param_1 != 0) {
      pDVar2 = FUN_006b0060(nullptr,(uint *)(piVar4 + 1));
      *param_1 = (int)pDVar2;
      iVar1 = *piVar4;
      piVar4 = (int *)((int)(piVar4 + 1) + iVar1);
      iVar3 = iVar3 + 4 + iVar1;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (int *)((int)param_2 + -1);
  } while (param_2 != nullptr);
  return iVar3;
}


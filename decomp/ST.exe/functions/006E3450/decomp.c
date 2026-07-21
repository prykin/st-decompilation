
undefined4 __cdecl FUN_006e3450(DArrayTy *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;

  iVar3 = 0;
  if (param_2 == 0) {
    return 0xfffffffc;
  }
  param_1->iteratorIndex = 0;
  while( true ) {
    uVar1 = param_1->iteratorIndex;
    if (param_1->count <= uVar1) {
      return 0xfffffffc;
    }
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar1) (runtime stride) */
    pvVar2 = (void *)(param_1->elementSize * uVar1 + (int)param_1->data);
    param_1->iteratorIndex = uVar1 + 1;
    if (pvVar2 == (void *)0x0) break;
    if (*(int *)(*(int *)((int)pvVar2 + 4) + 8) == param_2) {
      if (param_3 != (int *)0x0) {
        *param_3 = iVar3;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)pvVar2 + 4);
      }
      return 0;
    }
    iVar3 = iVar3 + 1;
  }
  return 0xfffffffc;
}


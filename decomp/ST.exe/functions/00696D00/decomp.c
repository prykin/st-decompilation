
int __thiscall FUN_00696d00(void *this,AnonShape_00696D00_CB3CB395 *param_1,uint param_2)

{
  DArrayTy *pDVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;

  if ((param_1 != (AnonShape_00696D00_CB3CB395 *)0x0) &&
     (pDVar1 = param_1->field_0019, pDVar1 != (DArrayTy *)0x0)) {
    uVar4 = 0;
    if (0 < (int)pDVar1->count) {
      bVar5 = pDVar1->count != 0;
      while( true ) {
        if (bVar5) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar4) (runtime stride) */
          puVar3 = (uint *)(pDVar1->elementSize * uVar4 + (int)pDVar1->data);
        }
        else {
          puVar3 = (uint *)0x0;
        }
        iVar2 = thunk_FUN_00696c40(this,*puVar3,*(int *)param_1,param_2);
        if (iVar2 == 0) break;
        pDVar1 = param_1->field_0019;
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < pDVar1->count;
        if ((int)pDVar1->count <= (int)uVar4) {
          return 0;
        }
      }
      if ((int)*puVar3 < 0) {
        return 0;
      }
      iVar2 = thunk_FUN_006961b0(this,param_2,*puVar3,0,0);
      return iVar2;
    }
  }
  return 0;
}


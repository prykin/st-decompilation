
void __fastcall FUN_005557b0(AnonShape_005557B0_28260162 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  void *pvVar3;

  if (param_1->field_0024 != (DArrayTy *)0x0) {
    param_1->field_0024->iteratorIndex = 0;
    while( true ) {
      pDVar1 = param_1->field_0024;
      uVar2 = pDVar1->iteratorIndex;
      if (pDVar1->count <= uVar2) break;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar2) (runtime stride) */
      pvVar3 = (void *)(pDVar1->elementSize * uVar2 + (int)pDVar1->data);
      pDVar1->iteratorIndex = uVar2 + 1;
      if (pvVar3 == (void *)0x0) break;
      if (-1 < (int)*(uint *)((int)pvVar3 + 0x32)) {
        FUN_006e8ba0(PTR_00807598,*(uint *)((int)pvVar3 + 0x32));
        *(undefined4 *)((int)pvVar3 + 0x32) = 0xffffffff;
      }
    }
    DArrayDestroy(param_1->field_0024);
    param_1->field_0024 = (DArrayTy *)0x0;
  }
  return;
}


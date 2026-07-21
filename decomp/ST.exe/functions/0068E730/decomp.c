
undefined4 __thiscall AiTactClassTy::FUN_0068e730(AiTactClassTy *this,int param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  undefined4 *puVar3;

  if (param_1 == 0) {
    return 0xfffffffc;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = thunk_FUN_0068e140(this,*(int *)(param_1 + 0x18));
  if ((int)uVar2 < 0) {
    return 0xfffffffc;
  }
  pDVar1 = this->field_00A5;
  if (uVar2 < pDVar1->count) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar2) (runtime stride) */
    puVar3 = (undefined4 *)(pDVar1->elementSize * uVar2 + (int)pDVar1->data);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  puVar3[1] = 0;
  *puVar3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  BackFromRepair(this,*(short *)(param_1 + 0x7d));
  thunk_FUN_0065d590(param_1);
  return 0;
}



undefined4 __thiscall
STManRuinC::FUN_00631190
          (STManRuinC *this,uint param_1,short param_2,short param_3,short param_4,int param_5,
          undefined4 param_6,int param_7)

{
  DArrayTy *pDVar1;
  ushort *puVar2;
  void *pvVar3;

  pDVar1 = this->field_0038;
  if (param_1 < pDVar1->count) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, param_1) (runtime stride) */
    pvVar3 = (void *)(pDVar1->elementSize * param_1 + (int)pDVar1->data);
  }
  else {
    pvVar3 = (void *)0x0;
  }
  sub_00630BB0(this,param_2,param_3,param_4,param_6,param_5,param_7);
  puVar2 = sub_00630C50(this,param_6,param_5,0,1,param_7);
  *(ushort **)((int)pvVar3 + 0x10) = puVar2;
  if (puVar2 != (ushort *)0x0) {
    return 1;
  }
  return 0;
}


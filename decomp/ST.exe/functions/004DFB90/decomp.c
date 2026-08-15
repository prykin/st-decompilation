
int FUN_004dfb90(uint param_1,int param_2,int param_3)

{
  int iVar1;
  PackedRecord_A62x8 *pPVar2;
  int iVar3;
  int iVar4;
  DArrayTy *array;
  int iVar5;

  iVar3 = param_3;
  iVar5 = 0;
  pPVar2 = g_packedRecords_A62x8 + param_1;
  array = pPVar2->field1967_0x9d2;
  if ((array != nullptr) && (param_1 = 0, 0 < (int)array->count)) {
    do {
      DArrayGetElement(array,param_1,&param_3);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(param_3 + 0x4d0);
      if (iVar1 != 0) {
        if ((param_2 - iVar5) * iVar3 <= iVar1) {
          *(int *)(param_3 + 0x4d0) = *(int *)(param_3 + 0x4d0) - (param_2 - iVar5) * iVar3;
          return param_2;
        }
        iVar4 = (iVar1 / iVar3) * iVar3;
        if (iVar4 != 0) {
          iVar5 = iVar5 + iVar1;
          *(int *)(param_3 + 0x4d0) = iVar1 - iVar4;
        }
      }
      param_1 = param_1 + 1;
      array = pPVar2->field1967_0x9d2;
    } while ((int)param_1 < (int)array->count);
  }
  return iVar5;
}


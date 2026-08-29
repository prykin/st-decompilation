
int FUN_004dfb90(uint param_1,int param_2,RecoveredRecord_004DFB90_1056A84E *param_3)

{
  int iVar1;
  PackedRecord_A62x8 *pPVar2;
  RecoveredRecord_004DFB90_1056A84E *pRVar3;
  int iVar4;
  DArrayTy *array;
  int iVar5;

  pRVar3 = param_3;
  iVar5 = 0;
  pPVar2 = g_packedRecords_A62x8 + param_1;
  array = pPVar2->field1967_0x9d2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((array != nullptr) && (param_1 = 0, 0 < (int)array->count)) {
    do {

      DArrayGetElement(array,param_1,&param_3);
      iVar1 = param_3->field_04D0;
      if (iVar1 != 0) {
        if ((param_2 - iVar5) * (int)pRVar3 <= iVar1) {
          param_3->field_04D0 = param_3->field_04D0 - (param_2 - iVar5) * (int)pRVar3;
          return param_2;
        }
        iVar4 = (iVar1 / (int)pRVar3) * (int)pRVar3;
        if (iVar4 != 0) {
          iVar5 = iVar5 + iVar1;
          param_3->field_04D0 = iVar1 - iVar4;
        }
      }
      param_1 = param_1 + 1;
      array = pPVar2->field1967_0x9d2;
    } while ((int)param_1 < (int)array->count);
  }
  return iVar5;
}


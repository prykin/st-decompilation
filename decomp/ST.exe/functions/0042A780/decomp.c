
void __cdecl FUN_0042a780(int *param_1)

{
  uint uVar1;
  DArrayTy *array;
  int iVar2;
  int *piVar3;
  int iVar4;

  array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,100,4,100);
  iVar4 = 0;
  iVar2 = *param_1;
  if (0 < *(int *)(iVar2 + 0x455)) {
    do {
      iVar2 = *(int *)(iVar2 + 0x459 + iVar4 * 4);
      if (iVar2 != 0) {
        FUN_006a5e90(*(short **)(iVar2 + 0x3c));
        array->iteratorIndex = 0;
        do {
          uVar1 = array->iteratorIndex;
          if (array->count <= uVar1) goto LAB_0042a7e7;
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar1) (runtime stride) */
          piVar3 = (int *)(array->elementSize * uVar1 + (int)array->data);
          array->iteratorIndex = uVar1 + 1;
          if (piVar3 == (int *)0x0) goto LAB_0042a7e7;
        } while (*(int *)(iVar2 + 0x40) != *piVar3);
        if (piVar3 == (int *)0x0) {
LAB_0042a7e7:
          Library::DKW::TBL::FUN_006ae1c0(&array->flags,(void **)(iVar2 + 0x40));
          FreeAndNull((void **)(iVar2 + 0x40));
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = *param_1;
    } while (iVar4 < *(int *)(iVar2 + 0x455));
  }
  DArrayDestroy(array);
  thunk_FUN_00575460((AnonShape_00575460_06C413C6 *)*param_1);
  Library::Ourlib::MFSTMAP::mfTMapErase(param_1);
  return;
}


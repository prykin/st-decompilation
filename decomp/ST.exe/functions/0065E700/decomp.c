
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065ED90 -> 0065E700 @ 0065EDAD */

undefined4 __fastcall
FUN_0065e700(AnonReceiver_0065ED90 *param_1,undefined4 param_2,int *param_3,int *param_4,
            int *param_5)

{
  DArrayTy *array;
  undefined2 *puVar1;
  STGameObjC *this;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_00;
  int iVar2;
  uint uVar3;
  bool bVar4;
  short local_a;
  short local_8;
  short local_6;

  array = (DArrayTy *)AiFltClassTy::sub_0065DA10((AiFltClassTy *)param_1,param_2);
  if ((array == (DArrayTy *)0x0) || (array->count == 0)) {
    return 0xffffffff;
  }
  uVar3 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if (0 < (int)array->count) {
    bVar4 = array->count != 0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar2 = extraout_EDX;
    do {
      if (bVar4) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar3) (runtime stride) */
        puVar1 = (undefined2 *)(array->elementSize * uVar3 + (int)array->data);
      }
      else {
        puVar1 = (undefined2 *)0x0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this = STAllPlayersC::GetObjPtr
                       (g_allPlayers_007FA174,param_1[1].field_0x4,
                        CONCAT22((short)((uint)iVar2 >> 0x10),*puVar1),CASE_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar2 = extraout_EDX_00;
      if (this != (STGameObjC *)0x0) {
        STFishC::sub_004162B0((STFishC *)this,&local_6,&local_8,&local_a);
        *param_3 = *param_3 + (int)local_6;
        iVar2 = (int)local_8;
        *param_4 = *param_4 + iVar2;
        *param_5 = *param_5 + (int)local_a;
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < array->count;
    } while ((int)uVar3 < (int)array->count);
  }
  DArrayDestroy(array);
  if (0 < (int)uVar3) {
    *param_3 = *param_3 / (int)uVar3;
    *param_4 = *param_4 / (int)uVar3;
    *param_5 = *param_5 / (int)uVar3;
    return 0;
  }
  return 0xffffffff;
}



void __fastcall FUN_0067be20(int param_1,undefined4 param_2,DArrayTy *param_3)

{
  uint index;
  STGameObjC *objPtr;
  ushort *puVar1;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  int local_8;

  index = param_3->count;
  local_8 = param_1;
  while (index = index - 1, -1 < (int)index) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_3, index) (runtime stride) */
    if ((index < param_3->count) &&
       (puVar1 = (ushort *)(param_3->elementSize * index + (int)param_3->data),
       puVar1 != (ushort *)0x0)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      objPtr = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)(local_8 + 0x640),*puVar1,CASE_1);
      if (objPtr == (STGameObjC *)0x0) {
        DArrayRemoveAt(param_3,index);
      }
      else {
        thunk_FUN_0067bda0((short *)&local_14,(STFishC *)objPtr);
        puVar1[2] = local_14;
        puVar1[3] = local_12;
        puVar1[4] = local_10;
        puVar1[5] = local_e;
        puVar1[6] = local_c;
        puVar1[7] = local_a;
      }
    }
  }
  return;
}


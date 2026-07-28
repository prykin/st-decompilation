
void __fastcall FUN_0067be20(int param_1,undefined4 param_2,DArrayTy *param_3)

{
  uint uVar1;
  STGameObjC *objPtr;
  ushort *puVar2;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  int local_8;

  uVar1 = param_3->count;
  local_8 = param_1;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_3, uVar1) (runtime stride) */
    if ((uVar1 < param_3->count) &&
       (puVar2 = (ushort *)(param_3->elementSize * uVar1 + (int)param_3->data),
       puVar2 != (ushort *)0x0)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      objPtr = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)(local_8 + 0x640),*puVar2,CASE_1);
      if (objPtr == (STGameObjC *)0x0) {
        FUN_006b0c70(param_3,uVar1);
      }
      else {
        thunk_FUN_0067bda0((short *)&local_14,(STFishC *)objPtr);
        puVar2[2] = local_14;
        puVar2[3] = local_12;
        puVar2[4] = local_10;
        puVar2[5] = local_e;
        puVar2[6] = local_c;
        puVar2[7] = local_a;
      }
    }
  }
  return;
}


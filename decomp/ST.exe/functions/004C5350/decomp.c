
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004C5350 -> 006ACF90 @ 004C552D | 0065E450 -> 004C5350 @ 0065E520; FUN_0065e450
   parameter param_4 | 00664960 -> 004C5350 @ 00666F3E; MOVSX at 00666F2E establishes signed source
   width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004C5350 -> 006ACF90 @ 004C552D | 0065E450 -> 004C5350 @ 0065E520; FUN_0065e450
   parameter param_5 | 00664960 -> 004C5350 @ 00666F3E; MOVSX at 00666F27 establishes signed source
   width 2 */

uint __thiscall
FUN_004c5350(void *this,int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_1c;
  int local_18;
  int local_14;
  byte local_10;
  undefined3 uStack_f;
  uint local_c;
  short local_8;
  short local_6;

  this_00 = param_2;
  local_c = 0;
  if (*(int *)(&DAT_00792778 + *(int *)((int)this + 0x235) * 4) == 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 0x80 + 0x261) == 0) && (*(int *)((int)this + 0x245) != 5)) {
    return 0;
  }
  if (param_2 == nullptr) {
    local_18 = param_3;
    local_14 = param_4;
    local_1c = param_5;
  }
  else {
    STFishC::sub_004162B0
              ((STFishC *)param_2,(short *)&local_18,(undefined2 *)&local_14,(undefined2 *)&local_1c
              );
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(&DAT_00792a90 + (param_1 + *(int *)((int)this + 0x235) * 2) * 4) == 1) {
    if (this_00 == nullptr) {
      return local_c;
    }
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(&DAT_00792a90 + (param_1 + *(int *)((int)this + 0x235) * 2) * 4) != 2) {
      return local_c;
    }
    if (this_00 == nullptr) goto LAB_004c5515;
  }
  if (this_00[10] != 1) {
    return local_c;
  }
  if (7 < (uint)this_00[9]) {
    return local_c;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[this_00[9]].field_0022)) {
    return local_c;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*this_00 + 0xf4))(*(undefined4 *)((int)this + 0x24));
  if (iVar4 == 0) {
    return local_c;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_7 == 0) goto LAB_004c5515;
  bVar1 = *(byte *)(this_00 + 9);
  bVar2 = *(byte *)((int)this + 0x24);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_7 = STReplaceLowByte((uint32_t)(param_7), (uint8_t)(bVar1));
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT31(uStack_f,bVar2);
  if (DAT_00808a8f == '\0') {
    if (bVar1 == bVar2) {
LAB_004c5502:
      iVar4 = 0;
    }
    else {
      bVar3 = g_playerRelationMatrix[bVar1][bVar2];
      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_004c5502;
        iVar4 = 2;
      }
    }
    bVar7 = iVar4 < 0;
  }
  else {
    bVar7 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
            g_bulkInitializedRecords_008087C7[bVar1].field_0023;
  }
  if (!bVar7) {
    return local_c;
  }
LAB_004c5515:
  iVar4 = FUN_006acf90((int)(short)local_18,(int)(short)local_14,*(int *)((int)this + 0x5b0),
                       *(int *)((int)this + 0x5b4));
  iVar5 = thunk_FUN_004e81b0(*(int *)((int)this + 0x24),*(int *)((int)this + 0x235),param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((iVar4 <= iVar5) || (uVar6 = local_c, param_6 == 0)) &&
      (uVar6 = 1, *(int *)(&DAT_00792a90 + (param_1 + *(int *)((int)this + 0x235) * 2) * 4) == 1))
     && (param_6 != 0)) {
    thunk_FUN_00416270(this_00,&local_8,(int *)&local_6,(int *)((int)&param_3 + 2));
    thunk_FUN_00416270(this,(undefined2 *)((int)&param_5 + 2),(int *)((int)&param_4 + 2),
                       (int *)((int)&param_2 + 2));
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar4 = FUN_006acf0d((int)local_8,(int)local_6,(int)param_3._2_2_,(int)param_5._2_2_,
                         (int)param_4._2_2_,(int)param_2._2_2_);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar6 = (int)param_3._2_2_ - (int)param_2._2_2_ >> 0x1f;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar6 = (uint)((int)((((int)param_3._2_2_ - (int)param_2._2_2_ ^ uVar6) - uVar6) * 10) / iVar4
                  <= *(int *)((int)this + param_1 * 0x80 + 0x281));
  }
  local_c = uVar6;
  return local_c;
}


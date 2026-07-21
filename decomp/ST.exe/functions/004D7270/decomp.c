
undefined4 __fastcall FUN_004d7270(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x245) == 0) {
    iVar1 = thunk_FUN_004e4140(param_1[9]);
    if (iVar1 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 0xc4))();
      thunk_FUN_004d6f70(param_1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*param_1 + 0xc4))();
      if (iVar1 < iVar2) {
        iVar1 = 0;
        uVar4 = (uint)(param_1[0xb] == 1);
        uVar3 = thunk_FUN_004ad650((int)param_1 + 0x1d5);
        thunk_FUN_00637c50(uVar3,uVar4,iVar1);
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = GetPlayerRaceId(*(char *)((int)param_1 + 0x23d));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(&DAT_00796230 + ((uVar3 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4) != 0)
      {
        iVar1 = *param_1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        uVar3 = GetPlayerRaceId(*(char *)((int)param_1 + 0x23d));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))
                  (3,*(undefined4 *)
                      (&DAT_00796230 + ((uVar3 & 0xff) + *(int *)((int)param_1 + 0x235) * 3) * 4));
      }
    }
  }
  return 0;
}


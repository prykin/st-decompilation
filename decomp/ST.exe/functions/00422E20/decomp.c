
void __thiscall FUN_00422e20(void *this,byte param_1)

{
  STGameObjC *objPtr;
  int iVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
  undefined4 uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_03;
  Global_sub_0043FC50_param_1Enum GVar3;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  objPtr = (STGameObjC *)(**(code **)(*(int *)this + 4))();
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar2 = extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((*(int *)((int)this + 0x20) != 0x14) ||
      (iVar1 = thunk_FUN_0045ff10(objPtr), uVar2 = extraout_ECX_00, iVar1 != 0x14)) ||
     (objPtr->field_05C0 != 3)) {
    if (((param_1 & 1) != 0) && ((*(byte *)((int)this + 0x1d1) & 1) == 0)) {
      STColl3C::sub_0041C5A0(this);
      *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 1;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar2 = extraout_ECX_01;
    }
    if (((param_1 & 2) != 0) && ((*(uint *)((int)this + 0x1d1) & 2) == 0)) {
      *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 2;
      if (*(int *)((int)this + 0x20) == 0x14) {
        iVar1 = 0;
        do {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          thunk_FUN_0042c300(DAT_0080874d,0,iVar1,*(char *)((int)this + 0x24),
                             CONCAT22((short)((uint)uVar2 >> 0x10),*(undefined2 *)((int)this + 0x32)
                                     ));
          iVar1 = iVar1 + 1;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar2 = extraout_ECX_02;
        } while (iVar1 < 5);
      }
      else {
        iVar1 = 0;
        do {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          thunk_FUN_0042c300(DAT_0080874d,1,iVar1,*(char *)((int)this + 0x24),
                             CONCAT22((short)((uint)uVar2 >> 0x10),*(undefined2 *)((int)this + 0x32)
                                     ));
          iVar1 = iVar1 + 1;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar2 = extraout_ECX_03;
        } while (iVar1 < 5);
      }
      STAllPlayersC::DelObjFromSaveTmps
                (g_allPlayers_007FA174,*(int *)((int)this + 0x20),*(char *)((int)this + 0x24),
                 *(short *)((int)this + 0x32));
    }
    if ((((param_1 & 4) != 0) && ((*(uint *)((int)this + 0x1d1) & 4) == 0)) &&
       (*(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 4,
       *(int *)((int)this + 0x21d) == 1)) {
      if (*(int *)((int)this + 0x20) == 0x14) {
        thunk_FUN_0043fc50(CASE_1,0);
        GVar3 = CASE_2;
      }
      else {
        thunk_FUN_0043fc50(CASE_4,0);
        GVar3 = CASE_5;
      }
      thunk_FUN_0043fc50(GVar3,0);
    }
    if (((param_1 & 8) != 0) && ((*(uint *)((int)this + 0x1d1) & 8) == 0)) {
      *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 8;
    }
    if (((param_1 & 0x10) != 0) && ((*(uint *)((int)this + 0x1d1) & 0x10) == 0)) {
      *(uint *)((int)this + 0x1d1) = *(uint *)((int)this + 0x1d1) | 0x10;
    }
  }
  return;
}


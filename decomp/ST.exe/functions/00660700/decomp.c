
undefined4 __thiscall
FUN_00660700(void *this,short param_1,short param_2,short param_3,int param_4,int param_5,
            int param_6)

{
  STWorldObject *this_00;
  short sVar1;
  int iVar2;
  STGroupBoatC *this_01;
  short sVar3;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  short sStack_a;
  short local_8;
  short sStack_6;

  local_14 = 0;
  *(undefined4 *)((int)this + 0xa7) = 0;
  sVar1 = (short)param_4;
  sVar3 = (short)param_5;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_10 = CONCAT22(sVar3,sVar1);
  local_c = (short)param_6;
  sStack_a = param_1;
  sStack_a = param_1;
  local_8 = param_2;
  local_8 = param_2;
  sStack_6 = param_3;
  if (((param_4 < 0) || (param_5 < 0)) || (param_6 < 0)) {
    local_14 = 2;
  }
  else {
    if (sVar1 < 0) {
      return 0xffffffff;
    }
    if (g_worldGrid.sizeX <= sVar1) {
      return 0xffffffff;
    }
    if (sVar3 < 0) {
      return 0xffffffff;
    }
    if (g_worldGrid.sizeY <= sVar3) {
      return 0xffffffff;
    }
    if (local_c < 0) {
      return 0xffffffff;
    }
    if (g_worldGrid.sizeZ <= local_c) {
      return 0xffffffff;
    }
    this_00 = g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)local_c + (int)g_worldGrid.sizeX * (int)sVar3 +
               (int)sVar1].objects[0];
    if (this_00 == nullptr) {
      return 0xffffffff;
    }
    iVar2 = this_00->GetObjectTypeId();
    if (iVar2 == 0x37) {
      local_14 = 0;
      *(int *)&this_00[0x1d].field_0x1c = (int)sStack_a;
      this_00[0x1d].value_20 = (int)local_8;
      this_00[0x1e].vtable = (STWorldObjectVTable *)(int)sStack_6;
      *(undefined4 *)&this_00[0x1d].field_0x18 = 1;
    }
    else {
      iVar2 = this_00->GetObjectTypeId();
      if (iVar2 != 0x6c) {
        return 0xffffffff;
      }
      local_14 = 1;
      thunk_FUN_004e9960(this_00,(undefined4 *)&param_1,(undefined4 *)&param_2,
                         (undefined4 *)&param_3);
      sStack_a = param_1;
      local_8 = param_2;
      sStack_6 = param_3;
    }
  }
  if (((*(ushort *)((int)this + 0x7d) != 0xfffe) && (g_allPlayers_007FA174 != nullptr))
     && (this_01 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),*(ushort *)((int)this + 0x7d)),
        this_01 != nullptr)) {
    this_01->sub_00498D20(0x10,(short)&local_14);
    return 0;
  }
  return 0xffffffff;
}


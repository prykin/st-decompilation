
/* [STMethodOwnerApplier] Structural method owner recovered as STJellyGunC.
   Evidence: this_call_owners=[STJellyGunC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0 */

undefined4 __thiscall
STJellyGunC::sub_00584060(STJellyGunC *this,int *param_1,int *param_2,int *param_3)

{
  STGameObjC *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;
  short local_8;
  short local_6;

  if (this->field_023D != 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this_00 = STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,*(char *)&this->field_0241,
                         CONCAT22((short)((uint)this->field_023D >> 0x10),
                                  *(undefined2 *)&this->field_0x245),CASE_1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((this_00 != (STGameObjC *)0x0) &&
       (iVar1 = (**(code **)&this_00->vtable[1].field_0x28)(), iVar1 != 0)) {
      thunk_FUN_004162f0(this_00,&local_6,&local_8,&local_a);
      *param_1 = (int)local_6;
      *param_2 = (int)local_8;
      *param_3 = (int)local_a;
      return 1;
    }
    this->field_023D = 0;
  }
  STFishC::sub_004162B0((STFishC *)this,&local_10,&local_e,&local_c);
  iVar1 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = iVar1;
  local_14 = (int)(short)(((ushort)((uint)iVar1 >> 0x10) & 1) + 1);
  uVar2 = this->field_001C * 0x41c64e6d + 0x3039;
  this->field_001C = uVar2;
  if ((uVar2 >> 0x10) % 3 == 0) {
    local_14 = -local_14;
  }
  local_14 = this->field_004B - local_14;
  if (local_14 < 0) {
    local_14 = -local_14;
  }
  local_18 = this->field_0276;
  local_14 = local_14 % 5;
  if (local_18 < 0) {
    iVar1 = this->field_001C;
  }
  else {
    iVar1 = this->field_001C;
  }
  uVar2 = iVar1 * 0x41c64e6d + 0x3039;
  this->field_001C = uVar2;
  iVar1 = this->field_027A;
  local_18 = (uVar2 >> 0x10) % (uint)(this->field_027E - local_18) + local_18;
  if (iVar1 < 0) {
    iVar3 = this->field_001C;
  }
  else {
    iVar3 = this->field_001C;
  }
  uVar2 = iVar3 * 0x41c64e6d + 0x3039;
  this->field_001C = uVar2;
  local_1c = 0;
  iVar1 = (uVar2 >> 0x10) % (uint)(this->field_0282 - iVar1) + iVar1;
LAB_005841dc:
  do {
    while( true ) {
      while (iVar3 = thunk_FUN_004961b0((short)local_18,(short)iVar1,(short)local_14), iVar3 != 0) {
        if (((local_18 != this->field_0047) || (iVar1 != this->field_0049)) ||
           (local_14 != this->field_004B)) {
          *param_1 = local_18;
          *param_2 = iVar1;
          *param_3 = local_14;
          return 1;
        }
        uVar2 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar2;
        if ((uVar2 >> 0x10) % 3 == 0) {
          local_14 = local_14 + 1;
          if (4 < local_14) {
            local_14 = 3;
          }
        }
        else {
          local_14 = local_14 + -1;
          if (local_14 < 0) {
            local_14 = 1;
          }
        }
        local_1c = local_1c + 1;
        if (local_1c == 5) {
          return 0;
        }
      }
      iVar3 = local_18 - this->field_0047;
      if (iVar3 < 1) break;
      local_18 = local_18 + -1;
      iVar3 = local_18;
joined_r0x00584297:
      if (iVar3 < 0) {
        return 0;
      }
    }
    if (-1 < iVar3) {
      iVar3 = iVar1 - this->field_0049;
      if (0 < iVar3) {
        iVar1 = iVar1 + -1;
        iVar3 = iVar1;
        goto joined_r0x00584297;
      }
      if (-1 < iVar3) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      goto LAB_005841dc;
    }
    local_18 = local_18 + 1;
  } while( true );
}


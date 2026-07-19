
undefined4 __thiscall FUN_00584060(void *this,int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int *this_00;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if (*(int *)((int)this + 0x23d) != 0) {
    this_00 = (int *)STAllPlayersC::GetObjPtr
                               (DAT_007fa174,
                                CONCAT31((int3)((uint)this >> 8),*(undefined1 *)((int)this + 0x241))
                                ,CONCAT22((short)((uint)*(int *)((int)this + 0x23d) >> 0x10),
                                          *(undefined2 *)((int)this + 0x245)),CASE_1);
    if ((this_00 != (int *)0x0) && (iVar2 = (**(code **)(*this_00 + 0xf8))(), iVar2 != 0)) {
      thunk_FUN_004162f0(this_00,&local_6,&local_8,&local_a);
      *param_1 = (int)local_6;
      *param_2 = (int)local_8;
      *param_3 = (int)local_a;
      return 1;
    }
    *(undefined4 *)((int)this + 0x23d) = 0;
  }
  thunk_FUN_004162b0(this,&local_10,&local_e,&local_c);
  iVar2 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(int *)((int)this + 0x1c) = iVar2;
  local_14 = (int)(short)(((ushort)((uint)iVar2 >> 0x10) & 1) + 1);
  uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  if ((uVar3 >> 0x10) % 3 == 0) {
    local_14 = -local_14;
  }
  local_14 = *(short *)((int)this + 0x4b) - local_14;
  if (local_14 < 0) {
    local_14 = -local_14;
  }
  local_18 = *(int *)((int)this + 0x276);
  local_14 = local_14 % 5;
  if (local_18 < 0) {
    iVar2 = *(int *)((int)this + 0x1c);
  }
  else {
    iVar2 = *(int *)((int)this + 0x1c);
  }
  uVar3 = iVar2 * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  iVar2 = *(int *)((int)this + 0x27a);
  local_18 = (uVar3 >> 0x10) % (uint)(*(int *)((int)this + 0x27e) - local_18) + local_18;
  if (iVar2 < 0) {
    iVar4 = *(int *)((int)this + 0x1c);
  }
  else {
    iVar4 = *(int *)((int)this + 0x1c);
  }
  uVar3 = iVar4 * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar3;
  local_1c = 0;
  iVar2 = (uVar3 >> 0x10) % (uint)(*(int *)((int)this + 0x282) - iVar2) + iVar2;
LAB_005841dc:
  do {
    while( true ) {
      while (bVar1 = thunk_FUN_004961b0((short)local_18,(short)iVar2,(short)local_14),
            CONCAT31(extraout_var,bVar1) != 0) {
        if (((local_18 != *(short *)((int)this + 0x47)) || (iVar2 != *(short *)((int)this + 0x49)))
           || (local_14 != *(short *)((int)this + 0x4b))) {
          *param_1 = local_18;
          *param_2 = iVar2;
          *param_3 = local_14;
          return 1;
        }
        uVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar3;
        if ((uVar3 >> 0x10) % 3 == 0) {
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
      iVar4 = local_18 - *(short *)((int)this + 0x47);
      if (iVar4 < 1) break;
      local_18 = local_18 + -1;
      iVar4 = local_18;
joined_r0x00584297:
      if (iVar4 < 0) {
        return 0;
      }
    }
    if (-1 < iVar4) {
      iVar4 = iVar2 - *(short *)((int)this + 0x49);
      if (0 < iVar4) {
        iVar2 = iVar2 + -1;
        iVar4 = iVar2;
        goto joined_r0x00584297;
      }
      if (-1 < iVar4) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      goto LAB_005841dc;
    }
    local_18 = local_18 + 1;
  } while( true );
}



int __thiscall FUN_0062a370(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_8;
  short local_6;

  local_2c = 0;
  iVar4 = param_1 - *(int *)((int)this + 0xae);
  iVar5 = *(int *)((int)this + 0x8e) * *(int *)((int)this + 0x9a) * iVar4;
  local_14 = 1;
  param_1 = *(int *)((int)this + 0xa6) * 20000;
  iVar6 = *(int *)((int)this + 0x8a) * *(int *)((int)this + 0x9a) * iVar4;
  local_c = iVar5 / 10000 - (iVar5 * iVar4) / param_1;
  iVar5 = iVar6 / 10000 +
          ((iVar6 * iVar4) / param_1 - (iVar4 * iVar4) / (*(int *)((int)this + 0xa2) << 1)) +
          *(int *)((int)this + 0x82);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar4 = (*(int *)((int)this + 0x92) * local_c) / 10000 + *(int *)((int)this + 0x7e);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = (*(int *)((int)this + 0x96) * local_c) / 10000 + *(int *)((int)this + 0x7a);
  if ((*(uint *)((int)this + 0x14) & 0xff00) == 0x400) {
    if (local_10 < 0) {
      iVar6 = (short)(local_10 / 0xc9) + -1;
    }
    else {
      iVar6 = (int)(short)(local_10 / 0xc9);
    }
    if (iVar6 == *(int *)((int)this + 0x5e)) {
      if (iVar4 < 0) {
        iVar6 = (short)(iVar4 / 0xc9) + -1;
      }
      else {
        iVar6 = (int)(short)(iVar4 / 0xc9);
      }
      if (iVar6 == *(int *)((int)this + 0x5e)) {
        if (iVar4 < 0) {
          iVar6 = (short)(iVar4 / 200) + -1;
        }
        else {
          iVar6 = (int)(short)(iVar4 / 200);
        }
        if (iVar6 == *(int *)((int)this + 0x66)) {
          local_14 = 0;
        }
      }
    }
  }
  uVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                    ((AnonReceiver_00601500 *)((int)this + 0xd7),local_10,iVar4,iVar5,
                     *(int *)((int)this + 0x46),*(int *)((int)this + 0x4a),
                     *(int *)((int)this + 0x4e),0xff,
                     *(int *)(&DAT_007d0a1c + (uint)*(byte *)((int)this + 0x14) * 4),0,0xffff,0x14e,
                     0,0);
  if ((uVar3 == 0) || (local_14 == 0)) {
    uVar2 = *(undefined4 *)((int)this + 0x4e);
    *(int *)((int)this + 0x86) = *(int *)((int)this + 0x86) + local_c;
    *(int *)((int)this + 0x4e) = iVar5;
    *(undefined4 *)((int)this + 0x52) = *(undefined4 *)((int)this + 0x46);
    *(undefined4 *)((int)this + 0x56) = *(undefined4 *)((int)this + 0x4a);
    *(undefined4 *)((int)this + 0x5a) = uVar2;
    *(int *)((int)this + 0x46) = local_10;
    *(int *)((int)this + 0x4a) = iVar4;
    return 1;
  }
  if (uVar3 == 2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((*(int **)((int)this + 0xeb) != (int *)0x0) &&
       (iVar4 = (**(code **)(**(int **)((int)this + 0xeb) + 0xe0))
                          (*(undefined4 *)((int)this + 0xef),(int)&param_1 + 2,&local_6,&local_8,
                           &local_24), iVar4 == 0)) {
      *(undefined4 *)((int)this + 0x52) = *(undefined4 *)((int)this + 0x46);
      *(undefined4 *)((int)this + 0x56) = *(undefined4 *)((int)this + 0x4a);
      *(undefined4 *)((int)this + 0x5a) = *(undefined4 *)((int)this + 0x4e);
      *(int *)((int)this + 0x46) = (int)param_1._2_2_;
      *(int *)((int)this + 0x4a) = (int)local_6;
      *(int *)((int)this + 0x4e) = (int)local_8;
      *(undefined4 *)((int)this + 0x76) = 2;
      *(undefined4 *)((int)this + 0xf3) = local_24;
      return 0;
    }
  }
  else if (uVar3 == 1) {
    iVar6 = *(int *)((int)this + 0x46);
    *(int *)((int)this + 0x46) = local_10;
    iVar6 = local_10 - iVar6;
    iVar1 = *(int *)((int)this + 0x4a);
    local_14 = iVar5 - *(int *)((int)this + 0x4e);
    *(int *)((int)this + 0x4e) = iVar5;
    *(int *)((int)this + 0x4a) = iVar4;
    if (*(char *)((int)this + 0xc0) == '\0') {
      return -1;
    }
    local_2c = thunk_FUN_0062a8b0(&local_20,&local_1c,&local_18,local_10,iVar4,
                                  iVar5 - (uint)*(byte *)((int)this + 0xbe));
    if ((local_2c < 1) && (local_14 < 1)) {
      if (-1 < local_2c) {
        return 0;
      }
      uVar2 = *(undefined4 *)((int)this + 0x4e);
      *(int *)((int)this + 0x86) = *(int *)((int)this + 0x86) + local_c;
      *(undefined4 *)((int)this + 0x52) = *(undefined4 *)((int)this + 0x46);
      *(int *)((int)this + 0x4e) = iVar5;
      *(undefined4 *)((int)this + 0x56) = *(undefined4 *)((int)this + 0x4a);
      *(undefined4 *)((int)this + 0x5a) = uVar2;
      *(int *)((int)this + 0x46) = local_10;
      *(int *)((int)this + 0x4a) = iVar4;
      return 1;
    }
    if (-1 < local_2c) {
      if ((local_2c == 0) && (0 < local_14)) {
        local_20 = 0;
        local_1c = 0;
        local_18 = -10000;
      }
      local_2c = thunk_FUN_0062ab10(this,local_20,local_1c,local_18,iVar6,iVar4 - iVar1,local_14);
      if (0 < local_2c) {
        *(int *)((int)this + 0x86) = *(int *)((int)this + 0x86) + local_c;
        *(undefined4 *)((int)this + 0x52) = *(undefined4 *)((int)this + 0x46);
        uVar2 = *(undefined4 *)((int)this + 0x4e);
        *(undefined4 *)((int)this + 0x56) = *(undefined4 *)((int)this + 0x4a);
        *(int *)((int)this + 0x4e) = iVar5;
        *(undefined4 *)((int)this + 0x5a) = uVar2;
        *(int *)((int)this + 0x46) = local_10;
        *(int *)((int)this + 0x4a) = iVar4;
        return 1;
      }
    }
  }
  return local_2c;
}



undefined4 __thiscall FUN_004e96c0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  if (*(int **)((int)this + 0x4d8) != param_1) {
    return 0;
  }
  if (*(int *)((int)this + 0x4e0) == 0) {
    return 0;
  }
  thunk_FUN_004d0a80(DAT_00800bcc,*(int *)((int)this + 0x4e4),*(int *)((int)this + 0x4e8),
                     *(int *)((int)this + 0x4ec));
  *(undefined4 *)((int)this + 0x4e0) = 0;
  iVar1 = FUN_006e62d0(g_playSystem_00802A38,*(int *)((int)this + 0x4d8),(int *)&param_1);
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((iVar1 < 1) || (iVar1 = (**(code **)(*param_1 + 0x2c))(), 0x28 < iVar1)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 0x2c))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((iVar1 < 0x32) || (iVar1 = (**(code **)(*param_1 + 0x2c))(), 0x73 < iVar1)) {
        iVar1 = 100;
      }
      else {
        uVar2 = GetPlayerRaceId((char)param_1[9]);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar1 = (**(code **)(*param_1 + 0x2c))();
        iVar1 = *(int *)(&DAT_007e37b0 + ((uVar2 & 0xff) + iVar1 * 3) * 4);
      }
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 0x2c))();
      iVar1 = *(int *)(&DAT_007e0d9c + iVar1 * 4);
    }
    iVar1 = *(int *)((int)this + 0x4d0) + (iVar1 * -100) / 100;
    *(int *)((int)this + 0x4d0) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)((int)this + 0x4d0) = 0;
    }
  }
  if (*(int *)((int)this + 0x4f0) != 0) {
    if (DAT_00811798 == (void *)0x0) {
      if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
        uVar2 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
        uVar2 = uVar2 & 0xff;
        if (uVar2 == 1) {
          iVar1 = *(int *)this;
          uVar3 = 0x218;
        }
        else {
          if (uVar2 == 2) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x2de);
            goto cf_common_exit_004E987A;
          }
          if (uVar2 != 3) goto cf_common_exit_004E987A;
          iVar1 = *(int *)this;
          uVar3 = 0x405;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(4,uVar3);
      }
    }
    else {
      thunk_FUN_00620670(DAT_00811798,*(int *)((int)this + 0x5b0),*(int *)((int)this + 0x5b4),
                         *(uint *)((int)this + 0x24));
    }
  }
cf_common_exit_004E987A:
  thunk_FUN_004ea6e0(*(uint *)((int)this + 0x24),*(int *)((int)this + 0x4e4),
                     *(int *)((int)this + 0x4e8),*(undefined4 *)((int)this + 0x4ec));
  return 0;
}


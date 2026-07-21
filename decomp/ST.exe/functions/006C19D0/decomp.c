
undefined4 FUN_006c19d0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;

  uVar2 = param_2;
  uVar3 = 0;
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  if (param_1 != 0) {
    iVar4 = param_2 * 0xc4;
    if ((((&DAT_00854ff8)[iVar4] & 2) == 0) &&
       (piVar1 = (int *)(&DAT_00855004)[param_2 * 0x31], piVar1 != (int *)0x0)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (**(code **)(*piVar1 + 0x48))(piVar1);
    }
    *(uint *)(&DAT_00854ff8 + iVar4) = *(uint *)(&DAT_00854ff8 + iVar4) | 2;
    return uVar3;
  }
  iVar4 = param_2 * 0xc4;
  if ((((&DAT_00854ff8)[iVar4] & 2) != 0) &&
     (piVar1 = (int *)(&DAT_00855004)[param_2 * 0x31], piVar1 != (int *)0x0)) {
    if ((*(int *)(&DAT_008550b8 + iVar4) < 1) &&
       ((*(byte *)(&DAT_00854ffc + param_2 * 0x31) & 1) == 0)) {
      uVar5 = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 0x10))(piVar1,&param_2,&param_1);
      if (*(uint *)(&DAT_0085500c + iVar4) >> 1 < param_2) {
        (&DAT_00854ffc)[uVar2 * 0x31] = (&DAT_00854ffc)[uVar2 * 0x31] | 0x8000;
      }
    }
    else {
      uVar5 = (uint)~(&DAT_00854ffc)[param_2 * 0x31] >> 0xe & 1;
      if (((&DAT_00854ffc)[param_2 * 0x31] & 1) != 0) {
        uVar5 = 1;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 0x30))
                      ((int *)(&DAT_00855004)[uVar2 * 0x31],0,0,uVar5);
  }
  *(uint *)(&DAT_00854ff8 + iVar4) = *(uint *)(&DAT_00854ff8 + iVar4) & 0xfffffffd;
  return uVar3;
}



int __thiscall FUN_004658d0(void *this,int param_1)

{
  int iVar1;
  STGroupBoatC *pSVar2;
  uint uVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  undefined4 *puVar4;

  if ((param_1 == 0) || (param_1 == 1)) {
    puVar4 = (undefined4 *)((int)this + 0x2cc);
    for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)((int)this + 0x48f) = *(undefined4 *)((int)this + 0x34b);
    *(undefined4 *)((int)this + 0x2c4) = 0;
    *(undefined4 *)((int)this + 0x497) = 0;
    STBoatC::sub_00481520
              (this,*(undefined4 *)((int)this + 199),*(undefined4 *)((int)this + 0xcb),
               *(undefined4 *)((int)this + 0xcf));
    thunk_FUN_004601f0(this,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar1 != 0) & 0xfffffffd) + 2;
  }
  if (*(int *)((int)this + 0x497) == 0) {
    iVar1 = thunk_FUN_004601f0(this,2);
    switch(iVar1 + 1) {
    case 0:
      return -1;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    case 1:
      pSVar2 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                  CONCAT22(extraout_var_00,*(undefined2 *)((int)this + 0x30)));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar3 = STGroupBoatC::GetPatrolTask
                        (pSVar2,0,CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x32)),
                         *(uint *)((int)this + 0x48f));
      if (uVar3 == 0) {
        iVar1 = STBoatC::Defence(this,0);
        if (iVar1 == -1) {
          return -1;
        }
        if ((*(int *)((int)this + 0x82e) == 0) && (*(int *)((int)this + 0x48b) == 0xffff)) {
          STBoatC::sub_00481520
                    (this,*(undefined4 *)((int)this + 199),*(undefined4 *)((int)this + 0xcb),
                     *(undefined4 *)((int)this + 0xcf));
          thunk_FUN_004601f0(this,0);
          return 2;
        }
        *(undefined4 *)((int)this + 0x497) = 1;
        *(undefined4 *)((int)this + 0x493) = 1;
        return 2;
      }
LAB_0046597c:
      *(undefined4 *)((int)this + 0x497) = 1;
      *(undefined4 *)((int)this + 0x493) = 0;
      iVar1 = STBoatC::Defence(this,0);
      return (-(uint)(iVar1 != -1) & 3) - 1;
    default:
      goto switchD_0046590f_caseD_2;
    case 3:
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 4:
      pSVar2 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                  CONCAT22((short)((uint)(iVar1 + 1) >> 0x10),
                                           *(undefined2 *)((int)this + 0x30)));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar3 = STGroupBoatC::GetPatrolTask
                        (pSVar2,1,CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x32)),
                         *(uint *)((int)this + 0x48f));
      if (uVar3 != 0) goto LAB_0046597c;
      STBoatC::sub_00481520
                (this,*(undefined4 *)((int)this + 199),*(undefined4 *)((int)this + 0xcb),
                 *(undefined4 *)((int)this + 0xcf));
      thunk_FUN_004601f0(this,0);
    }
  }
  else {
switchD_0046590f_caseD_2:
    if (*(int *)((int)this + 0x497) == 1) {
      iVar1 = STBoatC::Defence(this,2);
      if (iVar1 == -1) {
        return -1;
      }
      if (((*(int *)((int)this + 0x82e) == 0) && (*(int *)((int)this + 0x48b) == 0xffff)) &&
         (*(int *)((int)this + 0x493) == 1)) {
        *(undefined4 *)((int)this + 0x497) = 0;
        STBoatC::sub_00481520
                  (this,*(undefined4 *)((int)this + 199),*(undefined4 *)((int)this + 0xcb),
                   *(undefined4 *)((int)this + 0xcf));
        thunk_FUN_004601f0(this,0);
        return 2;
      }
    }
  }
  return 2;
}


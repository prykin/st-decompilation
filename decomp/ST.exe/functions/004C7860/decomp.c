
int __thiscall FUN_004c7860(void *this,int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  bool bVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int iVar3;
  int iVar4;

  iVar3 = 0;
  switch(param_1 + -1) {
  case 0:
    iVar4 = thunk_FUN_004e6a80(*(int *)((int)this + 0x24),param_2);
    if ((iVar4 != 0) && (*(int *)((int)this + 0x5b8) < g_worldGrid.sizeZ + -1))
    goto switchD_004c787f_caseD_2;
    break;
  case 1:
    iVar4 = thunk_FUN_004e5910(*(int *)((int)this + 0x24),param_2);
    if (iVar4 == 0) {
      iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_2);
      iVar4 = thunk_FUN_004e7f20(*(int *)((int)this + 0x24),param_2,iVar4 + 1);
      if (iVar4 == 0) break;
    }
    uVar1 = thunk_FUN_004e6140(*(int *)((int)this + 0x24),param_2);
    iVar4 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_2);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (iVar4 < CONCAT31(extraout_var,uVar1)) {
      iVar3 = 1;
      goto LAB_004c796d;
    }
    break;
  case 2:
  case 4:
  case 6:
switchD_004c787f_caseD_2:
    iVar3 = 1;
    goto LAB_004c796d;
  case 3:
    iVar3 = *(int *)((int)this + 0x24);
    iVar4 = 0x31;
    goto LAB_004c795c;
  case 5:
    iVar3 = thunk_FUN_004de7d0(this,param_1,param_2,param_3);
    goto LAB_004c7967;
  case 7:
    iVar3 = *(int *)((int)this + 0x24);
    iVar4 = 0x75;
LAB_004c795c:
    iVar3 = thunk_FUN_004e60d0(iVar3,iVar4);
LAB_004c7967:
    if (iVar3 != 0) {
LAB_004c796d:
      if (param_5 != 0) {
        iVar4 = thunk_FUN_004c9370(this,param_1,param_2,-1);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)((int)this + 0x361) == param_1) && (*(uint *)((int)this + 0x369) == param_2)) {
          iVar4 = iVar4 + *(int *)((int)this + 0x36d);
        }
        if (99 < iVar4 + param_3) {
          iVar3 = 0;
        }
      }
    }
  }
  if (param_4 == 0) {
    return iVar3;
  }
  if (iVar3 == 0) {
    return 0;
  }
  iVar4 = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (**(code **)(*(int *)this + 0xf8))();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x245) == 6) {
    return 0;
  }
  switch(param_1 + -1) {
  case 0:
    goto cf_common_exit_004C7B08;
  case 1:
    if (*(int *)((int)this + 0x361) != 0) {
      return 0;
    }
    iVar3 = thunk_FUN_004e5f90(*(int *)((int)this + 0x24),param_2);
    if (iVar3 != 0) {
      return 0;
    }
    if ((&PTR_DAT_007bfc04)[*(int *)((int)this + 0x239)][param_2] != '\0') {
      bVar2 = thunk_FUN_004e5c40(*(int *)((int)this + 0x24),param_2);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var_00,bVar2) == 0) {
        return 0;
      }
      return 1;
    }
    goto cf_common_exit_004C7B08;
  case 2:
  case 3:
    if (*(int *)((int)this + 0x4d0) == 0) {
      return 1;
    }
    break;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  case 4:
    iVar3 = (**(code **)(*(int *)this + 0x7c))();
    if (iVar3 == 100) {
      return 0;
    }
  case 5:
    if (*(int *)((int)this + 0x361) == 0) {
      return 1;
    }
    break;
  case 6:
    iVar3 = thunk_FUN_004e1490((int)this);
    if (iVar3 != 0) {
      if (param_2 == 0xdd) {
        iVar3 = thunk_FUN_004d89b0(*(char *)((int)this + 0x24));
        if (param_3 <= iVar3) {
          return 1;
        }
      }
      else if ((param_2 == 0xde) &&
              (iVar3 = thunk_FUN_004d8af0(*(char *)((int)this + 0x24)), param_3 <= iVar3)) {
        return 1;
      }
    }
    break;
  case 7:
    if (*(int *)((int)this + 0x4d0) != 0) {
      return 0;
    }
cf_common_exit_004C7B08:
    iVar4 = 1;
  }
  return iVar4;
}


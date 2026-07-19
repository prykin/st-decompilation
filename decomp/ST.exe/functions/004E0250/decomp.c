
void __fastcall FUN_004e0250(int param_1)

{
  int *this;
  int iVar1;
  undefined2 extraout_var;
  
  if (*(int *)(param_1 + 0x4d4) != 0) {
    return;
  }
  this = thunk_FUN_004d85e0(*(int *)(param_1 + 0x5b0),*(int *)(param_1 + 0x5b4),
                            *(int *)(param_1 + 0x5b8));
  if (this == (int *)0x0) {
    return;
  }
  iVar1 = (**(code **)(*this + 0x2c))();
  *(int *)(param_1 + 0x4dc) = iVar1;
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x38:
    if (iVar1 != 0xdc) goto cf_common_exit_004E02E4;
    break;
  case 0x39:
  case 0x5e:
    if (iVar1 != 0xdd) goto cf_common_exit_004E02E4;
    break;
  default:
    goto cf_common_exit_004E02E4;
  case 0x4f:
    goto joined_r0x004e02dc;
  case 0x61:
joined_r0x004e02dc:
    if (iVar1 != 0xde) goto cf_common_exit_004E02E4;
  }
  *(undefined4 *)(param_1 + 0x4d4) = 1;
cf_common_exit_004E02E4:
  if (*(int *)(param_1 + 0x4d4) != 0) {
    *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)((int)this + 0x259);
    thunk_FUN_005804f0(this,*(undefined4 *)(param_1 + 0x18),(short)*(undefined4 *)(param_1 + 0x24),
                       *(undefined2 *)(param_1 + 0x32));
    if (*(int *)(param_1 + 0x5ac) == 0x61) {
      *(int *)(param_1 + 0x520) = *(int *)(param_1 + 0x4e0);
      if (*(int *)(param_1 + 0x4e0) != 0) {
        *(undefined4 *)(param_1 + 0x528) = 6;
        return;
      }
    }
    else {
      STAllPlayersC::_ChangeMD
                (DAT_007fa174,1,*(int **)(param_1 + 0x24),
                 CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x32)));
    }
  }
  return;
}


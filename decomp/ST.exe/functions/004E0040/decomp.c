
undefined4 __fastcall FUN_004e0040(int param_1)

{
  int *this;
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  this = thunk_FUN_004d85e0(*(int *)(param_1 + 0x5b0),*(int *)(param_1 + 0x5b4),
                            *(int *)(param_1 + 0x5b8));
  if (this == (int *)0x0) goto LAB_004e0119;
  iVar1 = (**(code **)(*this + 0x2c))();
  *(int *)(param_1 + 0x4dc) = iVar1;
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x38:
    if (iVar1 != 0xdc) break;
    goto LAB_004e00e5;
  case 0x39:
  case 0x5e:
    if (iVar1 == 0xdd) goto LAB_004e00e5;
    break;
  case 0x4f:
    goto joined_r0x004e00e3;
  case 0x61:
joined_r0x004e00e3:
    if (iVar1 == 0xde) {
LAB_004e00e5:
      *(undefined4 *)(param_1 + 0x4d4) = 1;
    }
  }
  if (*(int *)(param_1 + 0x4d4) != 0) {
    *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)((int)this + 0x259);
    thunk_FUN_005804f0(this,*(undefined4 *)(param_1 + 0x18),(short)*(undefined4 *)(param_1 + 0x24),
                       *(undefined2 *)(param_1 + 0x32));
  }
LAB_004e0119:
  if (*(int *)(param_1 + 0x5ac) == 0x61) {
    *(undefined4 *)(param_1 + 0x518) = 0;
    *(int *)(param_1 + 0x520) = *(int *)(param_1 + 0x4e0);
    *(undefined4 *)(param_1 + 0x51c) = 0;
    *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (*(int *)(param_1 + 0x4e0) != 0) {
      *(undefined4 *)(param_1 + 0x528) = 6;
    }
    thunk_FUN_004e40c0(*(int *)(param_1 + 0x24));
  }
  return 0;
}


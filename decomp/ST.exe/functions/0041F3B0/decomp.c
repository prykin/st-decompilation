
void __fastcall FUN_0041f3b0(int *param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x221);
  if (iVar1 == -1) {
    return;
  }
  if (iVar1 == 1) {
    *(undefined4 *)((int)param_1 + 0x221) = 0;
    return;
  }
  if (iVar1 == 2) {
    if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) {
      return;
    }
    if (*(int *)((int)param_1 + 0x225) == 0) {
      thunk_FUN_00420ae0(param_1);
      iVar1 = thunk_FUN_004acd30((void *)((int)param_1 + 0x1d5),'\x01');
      *(int *)((int)param_1 + 0x225) = iVar1 + -1;
    }
    iVar1 = (**(code **)(*param_1 + 0x7c))();
    if (1 < iVar1) {
      iVar1 = (iVar1 * *(int *)((int)param_1 + 0x225)) / 100;
    }
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    this = (void *)((int)param_1 + 0x1d5);
    iVar2 = thunk_FUN_004ac910(this,'\x01');
    if (iVar1 != iVar2) {
      thunk_FUN_004abe40(this,'\x01',iVar1);
      thunk_FUN_004ac040('\x01');
    }
    iVar1 = param_1[8];
    if ((((iVar1 == 0x14) || (iVar1 == 1000)) || (iVar1 == 0x172)) || (iVar1 == 0x1a4)) {
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    }
    else {
      if (iVar1 != 0x3e9) goto LAB_0041f51a;
      iVar1 = *(int *)((int)param_1 + 0x259);
    }
    if (((iVar1 != -1) && (iVar1 = (**(code **)(*param_1 + 0xc))(), iVar1 == 3)) &&
       ((param_1[8] != 0x172 && (param_1[8] != 0x1a4)))) {
      iVar1 = (**(code **)(*param_1 + 0xc4))();
      if (1 < iVar1) {
        iVar1 = (iVar1 * *(int *)((int)param_1 + 0x225)) / 100;
      }
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      iVar2 = thunk_FUN_004ac910(this,'\x02');
      if (iVar1 != iVar2) {
        thunk_FUN_004abe40(this,'\x02',iVar1);
        thunk_FUN_004ac040('\x02');
      }
    }
LAB_0041f51a:
    *(int *)((int)param_1 + 0x221) = *(int *)((int)param_1 + 0x221) + -1;
    return;
  }
  if (iVar1 != 0) {
    return;
  }
  thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\x01',0);
  thunk_FUN_004ac040('\x01');
  iVar1 = param_1[8];
  if (((iVar1 == 0x14) || (iVar1 == 1000)) || ((iVar1 == 0x172 || (iVar1 == 0x1a4)))) {
    iVar1 = (**(code **)(*param_1 + 0x2c))();
  }
  else {
    if (iVar1 != 0x3e9) goto LAB_0041f5a0;
    iVar1 = *(int *)((int)param_1 + 0x259);
  }
  if ((iVar1 != -1) && (iVar1 = (**(code **)(*param_1 + 0xc))(), iVar1 == 3)) {
    thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\x02',0);
    thunk_FUN_004ac040('\x02');
  }
LAB_0041f5a0:
  *(int *)((int)param_1 + 0x221) = *(int *)((int)param_1 + 0x221) + -1;
  return;
}



int __fastcall thunk_FUN_0047fad0(int *param_1,undefined4 param_2,void *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  
  *(undefined4 *)((int)param_1 + 0xb7) = 0;
  switch(*(undefined4 *)((int)param_1 + 0x6c3)) {
  case 0:
  case 1:
  case 2:
  case 6:
    break;
  case 3:
    *(undefined4 *)((int)param_1 + 0x6c3) = 5;
    *(undefined4 *)((int)param_1 + 0x6c7) = 0;
    iVar5 = (**(code **)(*param_1 + 0xd8))();
    return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
  case 4:
    sVar1 = *(short *)((int)param_1 + 0x6a9);
    sVar2 = *(short *)((int)param_1 + 0x6ad);
    sVar3 = *(short *)((int)param_1 + 0x6ab);
    if (((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
        ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))) || (DAT_007fb244 <= sVar2)) {
      param_3 = (void *)0x0;
    }
    else {
      param_3 = *(void **)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                          (int)sVar1) * 8);
    }
    if (((param_3 == (void *)0x0) ||
        (*(int *)((int)param_3 + 0x18) != *(int *)((int)param_1 + 0x6af))) ||
       ((*(int *)((int)param_3 + 0x24) != param_1[9] ||
        (iVar5 = thunk_FUN_004b9d90((int)param_3), iVar5 == 0)))) {
      FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x6af),(int *)&param_3);
    }
    if (param_3 != (void *)0x0) {
      thunk_FUN_004b9d20(param_3,(int)param_1);
    }
    if (*(int *)((int)param_1 + 0x6b9) == 1) {
      *(undefined4 *)((int)param_1 + 0x6c3) = 5;
      *(undefined4 *)((int)param_1 + 0x6c7) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x6c3) = 6;
    }
    iVar5 = (**(code **)(*param_1 + 0xd8))();
    return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
  case 5:
    iVar5 = thunk_FUN_0047df00(param_1,param_2,(int *)0x2);
    return iVar5;
  default:
    iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3b30,0,0,&DAT_007a4ccc,
                               s_STBoatC__BackDismant_incorrect_e_007ab830);
    if (iVar5 == 0) {
      return -1;
    }
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  iVar5 = thunk_FUN_00460360(param_1);
  if (iVar5 == 0) {
    sVar1 = *(short *)((int)param_1 + 0x6a9);
    sVar2 = *(short *)((int)param_1 + 0x6ad);
    sVar3 = *(short *)((int)param_1 + 0x6ab);
    if (((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
        ((DAT_007fb242 <= sVar3 || (sVar2 < 0)))) || (DAT_007fb244 <= sVar2)) {
      param_3 = (void *)0x0;
    }
    else {
      param_3 = *(void **)(DAT_007fb248 +
                          ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                          (int)sVar1) * 8);
    }
    if (((param_3 == (void *)0x0) ||
        (*(int *)((int)param_3 + 0x18) != *(int *)((int)param_1 + 0x6af))) ||
       ((*(int *)((int)param_3 + 0x24) != param_1[9] ||
        (iVar5 = thunk_FUN_004b9d90((int)param_3), iVar5 == 0)))) {
      FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x6af),(int *)&param_3);
    }
    if ((param_3 != (void *)0x0) && (*(int *)((int)param_3 + 0x4b0) == param_1[6])) {
      *(undefined4 *)((int)param_3 + 0x4b0) = 0;
    }
    return 0;
  }
  return 2;
}


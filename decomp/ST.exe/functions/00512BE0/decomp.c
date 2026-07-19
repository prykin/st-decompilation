
void FUN_00512be0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  int *piVar5;
  int local_8c4 [4];
  undefined4 local_8b4;
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  int local_8a4;
  int local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  int local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6e4;
  int local_6e0;
  undefined4 local_68c;
  int local_688 [26];
  undefined4 local_620;
  undefined4 local_564;
  int local_560;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  int local_4fc;
  int local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_5c;
  undefined4 local_58;
  InternalExceptionFrame local_4c;
  void *local_8;
  
  piVar4 = local_8c4;
  for (iVar2 = 0x21e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8c4[0] = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (local_8c4[0] == 0) {
    local_8c4[1] = 2;
    local_8a4 = *(int *)((int)local_8 + 0x3c) + 0x21;
    if (*(int *)((int)local_8 + 0x5c) == 0) {
      local_8a0 = -*(int *)((int)local_8 + 0x48);
    }
    else {
      local_8a0 = *(int *)((int)local_8 + 0x44);
    }
    iVar2 = *(int *)((int)local_8 + 0x1e4);
    local_8a0 = local_8a0 + 0x16;
    local_8c4[2] = 1;
    local_8c4[3] = *(undefined4 *)(param_1 + 8);
    local_8b4 = 0x19c;
    if (*(int *)(iVar2 + 0xa0) != 0) {
      FUN_00710790(iVar2);
    }
    local_8b0 = *(int *)(iVar2 + 0x8a);
    local_8a8 = (undefined4)(0x118 / (longlong)local_8b0);
    local_808[2] = *(int *)((int)local_8 + 0x3c) + 0x1c3;
    local_8ac = 1;
    local_888 = 2;
    local_884 = 0x6332;
    local_814 = 4;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_88c = *(undefined4 *)((int)local_8 + 8);
    if (*(int *)((int)local_8 + 0x5c) == 0) {
      local_808[3] = -*(int *)((int)local_8 + 0x48);
    }
    else {
      local_808[3] = *(int *)((int)local_8 + 0x44);
    }
    local_808[3] = local_808[3] + 0x109;
    local_7f8 = 0x11;
    local_7f4 = 0x24;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a4 = 2;
    local_7a0 = 0x8165;
    local_7a8 = local_88c;
    local_6e4 = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    local_6e0 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    iVar2 = *(int *)((int)local_8 + 0x5c);
    local_700 = 1;
    local_6fc = 1;
    local_68c = 2;
    piVar4 = local_808;
    piVar5 = local_688;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (iVar2 == 0) {
      local_688[3] = -*(int *)((int)local_8 + 0x48);
    }
    else {
      local_688[3] = *(int *)((int)local_8 + 0x44);
    }
    local_688[3] = local_688[3] + 0x16;
    local_620 = 0x8164;
    local_564 = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_560 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_4fc = *(int *)((int)local_8 + 0x3c) + 0x1c3;
    local_50c = 3;
    local_508 = 1;
    local_500 = 0;
    if (*(int *)((int)local_8 + 0x5c) == 0) {
      local_4f8 = -*(int *)((int)local_8 + 0x48);
    }
    else {
      local_4f8 = *(int *)((int)local_8 + 0x44);
    }
    local_4b8 = *(undefined4 *)((int)local_8 + 8);
    local_4f8 = local_4f8 + 0x3d;
    local_4f4 = 0x11;
    local_4f0 = 0xc9;
    local_4ec = 0x15;
    local_4b4 = 2;
    local_4b0 = 0x8166;
    local_478 = 1;
    local_474 = 1;
    local_58 = 1;
    local_5c = 1;
    (**(code **)(**(int **)((int)local_8 + 0xc) + 8))(8,(int *)((int)local_8 + 0x19c),0,local_8c4,0)
    ;
    iVar2 = *(int *)((int)local_8 + 0x19c);
    if (iVar2 != 0) {
      *(undefined4 *)((int)local_8 + 0x28) = 0x20;
      *(undefined4 *)((int)local_8 + 0x2c) = 1;
      FUN_006e6080(local_8,2,iVar2,(undefined4 *)((int)local_8 + 0x18));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x220,0,local_8c4[0],
                             &DAT_007a4ccc,s_HelpPanelTy___CreateVText_007c3a0c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(local_8c4[0],0,s_E____titans_Andrey_helppan_cpp_007c383c,0x220);
  return;
}



void thunk_FUN_00682850(void)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  char acStack_8c [128];
  undefined4 auStack_c [2];
  
  iVar2 = DAT_007d2d18;
  pcVar6 = acStack_8c;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  Library::MSVCRT::_strncpy(acStack_8c,DAT_00857528,0x7f);
  pfVar3 = (float *)thunk_FUN_006686f0(iVar2);
  pfVar5 = (float *)0x0;
  thunk_FUN_006827a0();
  thunk_FUN_00682810(0x29);
  while (DAT_007d2d18 != 0x39) {
    thunk_FUN_00683600();
    pfVar5 = (float *)((int)pfVar5 + 1);
    if (DAT_007d2d18 == 0x10) {
      thunk_FUN_006827a0();
    }
    else if (DAT_007d2d18 != 0x39) {
      RaiseInternalException(-0x71,DAT_007ed77c,s_E____titans_ai_ai_script_cpp_007d5604,0x1d0);
    }
  }
  pfVar1 = pfVar5;
  if (((int)pfVar3 < (int)pfVar5) && (iVar4 = thunk_FUN_00668a30(iVar2), iVar4 == 0)) {
    thunk_FUN_006802a0(-0x79,acStack_8c);
  }
  for (; (int)pfVar5 < (int)pfVar3; pfVar5 = (float *)((int)pfVar5 + 1)) {
    iVar4 = thunk_FUN_00668aa0(iVar2,(int)pfVar5,(undefined1 *)auStack_c);
    if (iVar4 == 0) {
      thunk_FUN_006802a0(-0x7a,acStack_8c);
    }
    else {
      thunk_FUN_00682370(auStack_c);
    }
    pfVar1 = pfVar3;
  }
  thunk_FUN_006823e0(iVar2,pfVar1);
  thunk_FUN_006827a0();
  return;
}


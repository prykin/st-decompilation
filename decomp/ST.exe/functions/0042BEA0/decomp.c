
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjToTmp2 */

undefined4 __thiscall
STAllPlayersC::AddObjToTmp2
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4,uint param_5,
          uint param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  undefined1 uVar5;
  InternalExceptionFrame local_58;
  int local_14;
  undefined4 local_10;
  STAllPlayersC *local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar2 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    if (iVar2 == -0x5001fff7) {
      return local_10;
    }
    local_10 = 0xaffe0001;
    if (iVar2 == -0x5001ffff) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x251,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__AddObjToTmp2_coin_007a61e0);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x252,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__AddObjToTmp2_007a61bc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    return 0xaffe0001;
  }
  if (param_2 == 0) {
    local_14 = (int)&DAT_007f4f83 + param_1 * 0xa62;
    if (param_3 == 0) {
      thunk_FUN_0043fc50(1,0);
      uVar5 = 2;
LAB_0042bf8b:
      thunk_FUN_0043fc50(uVar5,param_3);
    }
  }
  else if (param_2 == 1) {
    local_14 = (int)&DAT_007f4fd3 + param_1 * 0xa62;
    if (param_3 == 0) {
      thunk_FUN_0043fc50(4,0);
      uVar5 = 5;
      goto LAB_0042bf8b;
    }
  }
  else {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x23b,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__AddObjToTmp2_inva_007a624c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x23c);
  }
  piVar4 = (int *)(param_3 * 0x10 + local_14);
  if (((*piVar4 == param_4) && (piVar4[1] == (int)(char)param_5)) &&
     ((short)piVar4[2] == (short)param_6)) {
    RaiseInternalException(-0x5001ffff,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x23f);
  }
  *piVar4 = param_4;
  piVar4[1] = (int)(char)param_5;
  *(short *)(piVar4 + 2) = (short)param_6;
  if (param_4 < 0x1a5) {
    if (param_4 == 0x1a4) {
      local_8 = 5;
      goto LAB_0042c072;
    }
    if (param_4 == 0x5a) {
      local_8 = 4;
      goto LAB_0042c072;
    }
    if (param_4 == 0x172) {
      local_8 = 2;
      goto LAB_0042c072;
    }
  }
  else {
    if (param_4 == 0x1ae) {
      local_8 = 3;
      goto LAB_0042c072;
    }
    if (param_4 == 0x1b8) {
      local_8 = 6;
      goto LAB_0042c072;
    }
  }
  iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x249,0,0,&DAT_007a4ccc,
                             s_STAllPlayersC__AddObjToTmp2_inva_007a6214);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  RaiseInternalException(-0x5001ffff,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x24a);
LAB_0042c072:
  piVar4 = (int *)thunk_FUN_0042b620(param_5,param_6,local_8);
  (**(code **)(*piVar4 + 0xe8))(1);
  g_currentExceptionFrame = local_58.previous;
  return local_10;
}


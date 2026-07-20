
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CreateBoat */

uint __thiscall STAllPlayersC::CreateBoat(STAllPlayersC *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int extraout_EAX;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  undefined4 extraout_EDX_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  undefined4 local_14;
  STAllPlayersC *local_10;
  int local_c;
  STGroupC *local_8;
  
  local_14 = 0xffffffff;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x27df,0,iVar2,&DAT_007a4ccc
                               ,s_STAllPlayersC__CreateBoat_007a8254);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x27e0);
    return CONCAT22(extraout_var,(undefined2)local_14);
  }
  uVar6 = extraout_EDX;
  uVar5 = extraout_var_00;
  if (7 < (uint)param_1[1]) {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x27b5,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__CreateBoat___inco_007a82ec);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    RaiseInternalException
              (-0x5001fffe,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x27b6);
    uVar6 = extraout_EDX_00;
    uVar5 = extraout_var_01;
  }
  if ((7 < (uint)param_1[5]) && (param_1[5] != 0xffffffff)) {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x27c2,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__CreateBoat___inco_007a82ac);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    RaiseInternalException
              (-0x5001fffe,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x27c3);
    uVar6 = extraout_EDX_01;
    uVar5 = extraout_var_02;
  }
  if ((((*(short *)(param_1 + 7) < 0) || (SHORT_007fb240 <= *(short *)(param_1 + 7))) ||
      (*(short *)((int)param_1 + 0x1e) < 0)) ||
     (((SHORT_007fb242 <= *(short *)((int)param_1 + 0x1e) || (*(short *)(param_1 + 8) < 0)) ||
      (SHORT_007fb244 <= *(short *)(param_1 + 8))))) {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x27c8,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__CreateBoat___inco_007a8274);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    RaiseInternalException
              (-0x5001fff5,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x27c9);
    uVar6 = extraout_EDX_02;
    uVar5 = extraout_var_03;
  }
  *param_1 = 0x14;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_1[5] == -1) {
    param_1[5] = param_1[1];
  }
  local_8 = (STGroupC *)
            thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(param_1 + 1)),
                               CONCAT22(uVar5,*(undefined2 *)(param_1 + 9)));
  if ((STGroupBoatC *)local_8 == (STGroupBoatC *)0x0) {
    uVar3 = thunk_FUN_00435850(CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(param_1 + 1)
                                       ),0,(int *)&local_8);
    *(short *)(param_1 + 9) = (short)uVar3;
    if (local_8 == (STGroupC *)0x0) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x27d8);
    }
  }
  STPlaySystemC::CreateGameObject(PTR_00802a38,0x14,0,&local_c,param_1,0);
  iVar2 = local_c;
  if (local_c == 0) {
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x27db);
    iVar2 = extraout_EAX;
  }
  uVar3 = STGroupC::AddObj(local_8,CONCAT22((short)((uint)iVar2 >> 0x10),
                                            *(undefined2 *)(local_c + 0x32)),0);
  g_currentExceptionFrame = local_58.previous;
  return CONCAT22((short)(uVar3 >> 0x10),*(undefined2 *)(local_c + 0x32));
}


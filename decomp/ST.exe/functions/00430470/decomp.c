
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterTorpedo */

undefined4 __thiscall STAllPlayersC::RegisterTorpedo(STAllPlayersC *this,int param_1,short param_2)

{
  code *pcVar1;
  uint uVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  int local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (param_2 == -1) {
      if (param_1 == 0) {
        RaiseInternalException
                  (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x7e2);
      }
      uVar5 = DAT_007fa130[3];
      uVar2 = uVar5;
      if (uVar5 != 0) {
        while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
          FUN_006acc70((int)DAT_007fa130,uVar2,&local_8);
          if (local_8 == 0) {
            uVar5 = uVar2;
          }
        }
      }
    }
    else {
      uVar5 = (uint)param_2;
      if ((uVar5 < DAT_007fa130[3]) &&
         (FUN_006acc70((int)DAT_007fa130,uVar5,&local_8), local_8 != 0)) {
        RaiseInternalException
                  (-0x5001fffa,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x7f0);
      }
    }
    Library::DKW::TBL::FUN_006ae140(DAT_007fa130,uVar5,&param_1);
    DAT_007fa134 = DAT_007fa134 + 1;
    g_currentExceptionFrame = local_4c.previous;
    return CONCAT22((short)((uint)DAT_007fa134 >> 0x10),(short)uVar5);
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x7f6,0,errorCode,
                             &DAT_007a4ccc,s_STAllPlayersC__RegisterTorpedo_007a6718);
  if (iVar3 == 0) {
    RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x7f7);
    return CONCAT22(extraout_var,0xffff);
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::AddObjsToTmp */

undefined4 __thiscall
STAllPlayersC::AddObjsToTmp
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,DArrayTy *param_4)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint index;
  InternalExceptionFrame local_54;
  dword local_10;
  STAllPlayersC *local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if (param_4 == (DArrayTy *)0x0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x266);
    }
    local_10 = param_4->count;
    index = 0;
    if (0 < (int)local_10) {
      do {
        DArrayGetElement(param_4,index,&local_8);
        if ((short)local_8 != -1) {
          AddObjToTmp(local_c,(char)param_1,param_2,param_3,param_1,local_8);
        }
        index = index + 1;
      } while ((int)index < (int)local_10);
    }
    g_currentExceptionFrame = local_54.previous;
  }
  else {
    g_currentExceptionFrame = local_54.previous;
    if (errorCode != -0x5001fff7) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x26e,0,errorCode,
                                 &DAT_007a4ccc,s_STAllPlayersC__AddObjsToTmp_007a6288);
      if (iVar2 == 0) {
        RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x26f);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return 0;
}


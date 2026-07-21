
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DeletePGPairs */

void __thiscall STAllPlayersC::DeletePGPairs(STAllPlayersC *this,char param_1)

{
  dword dVar1;
  code *pcVar2;
  DArrayTy *array;
  int exceptionCode;
  int iVar3;
  undefined4 unaff_ESI;
  uint index;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  DArrayTy *local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  local_8 = g_playerRuntime[param_1].pgPairs;
  g_currentExceptionFrame = &local_58;
  exceptionCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  array = local_8;
  if (exceptionCode == 0) {
    if (local_8 != (DArrayTy *)0x0) {
      dVar1 = local_8->count;
      if ((dVar1 != 0) && (index = 0, 0 < (int)dVar1)) {
        do {
          DArrayGetElement(array,index,&local_14);
          DArrayDestroy(local_14);
          DArrayDestroy(local_10);
          DArrayDestroy(local_c);
          index = index + 1;
        } while ((int)index < (int)dVar1);
      }
      DArrayDestroy(array);
      g_playerRuntime[param_1].pgPairs = (DArrayTy *)0x0;
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  if (exceptionCode != -0x5001fff7) {
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x29b3,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__DeletePGPairs_007a840c);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(exceptionCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x29b4);
  }
  return;
}


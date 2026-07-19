
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::NoneMTest */

void __thiscall MTestTy::NoneMTest(MTestTy *this)

{
  code *pcVar1;
  MTestTy *pMVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_48 [16];
  MTestTy *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar5);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8[0xb3] == (MTestTy)0x1) {
      if (DAT_00811778 != (HoloTy *)0x0) {
        iVar3 = HoloTy::NextFas(DAT_00811778);
        if (iVar3 == 0) {
          pMVar2[0xb3] = (MTestTy)0x4;
        }
      }
    }
    else if ((local_8[0xb3] == (MTestTy)0x5) && (DAT_00811778 != (HoloTy *)0x0)) {
      iVar3 = HoloTy::NextFas(DAT_00811778);
      if (iVar3 == 0) {
        pMVar2[0xb3] = (MTestTy)0x0;
        if (-1 < (int)*(uint *)(DAT_00811778 + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_00811778 + 3));
        }
      }
    }
    _DAT_00811774 = *(undefined4 *)(pMVar2 + 0xa1);
    g_currentExceptionFrame = pIVar5;
    return;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E____titans_Start_test_obj_cpp_007cdcbc,0x6c,0,iVar3,&DAT_007a4ccc,
                             s_MTestTy__NoneMTest_007cdd2c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_test_obj_cpp_007cdcbc,0x6c);
  return;
}


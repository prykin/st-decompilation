
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   ChooseMapTy::OutListProc */

void __thiscall
ChooseMapTy::OutListProc
          (ChooseMapTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          DWORD param_6,DWORD param_7,int param_8)

{
  code *pcVar1;
  byte bVar2;
  int errorCode;
  int iVar3;
  byte bVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int local_c;
  uint local_8;
  
  local_c = param_8;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x1c,0,errorCode,
                               &DAT_007a4ccc,s_ChooseMapTy__OutListProc_007cc750);
    if (iVar3 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x1c);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((local_c != 0) && (*(BITMAPINFO **)(local_c + 0x1aec) != (BITMAPINFO *)0x0)) {
    bVar2 = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      bVar4 = bVar2;
      if (*(int *)(local_c + 0x1a94 + (local_8 & 0xff) * 4) == param_2) break;
      bVar2 = bVar2 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar2);
      bVar4 = 0xff;
    } while (bVar2 < 0x16);
    if (bVar4 != 0xff) {
      Library::DKW::DDX::FUN_006b4680
                (param_1,param_4,param_5,*(BITMAPINFO **)(local_c + 0x1aec),(uint *)0x0,0,
                 param_5 + -0x3f,param_6,param_7,0);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}


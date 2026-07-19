
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::OutProc */

void __thiscall
PopUpTy::OutProc(PopUpTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  byte bVar2;
  int errorCode;
  int iVar3;
  byte bVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int local_10;
  uint local_c;
  uint local_8;
  
  if (DAT_00807342 != 0) {
    local_10 = param_8;
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    errorCode = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (errorCode == 0) {
      if ((local_10 != 0) && (*(BITMAPINFO **)(local_10 + 0x90) != (BITMAPINFO *)0x0)) {
        bVar4 = 0xff;
        bVar2 = 0;
        local_c = CONCAT31(local_c._1_3_,0xff);
        local_8 = local_8 & 0xffffff00;
        do {
          if (*(int *)(local_10 + 0x18 + (local_8 & 0xff) * 4) == param_2) {
            local_c = CONCAT31(local_c._1_3_,bVar2);
            bVar4 = bVar2;
            break;
          }
          bVar2 = bVar2 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < 0xf);
        if (bVar4 != 0xff) {
          FUN_006b4680(param_1,param_4,param_5,*(BITMAPINFO **)(local_10 + 0x90),(uint *)0x0,0,
                       (local_c & 0xff) * 0x13,*(DWORD *)(local_10 + 0x54 + (local_c & 0xff) * 4),
                       0x13,0x1000089);
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x22,0,errorCode,
                               &DAT_007a4ccc,s_PopUpTy__OutProc_007c6fa8);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x22);
  }
  return;
}


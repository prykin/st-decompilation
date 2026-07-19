
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::WrSarr */

int __thiscall
ccFntTy::WrSarr(ccFntTy *this,int param_1,int param_2,int param_3,int param_4,int param_5,
               undefined4 param_6)

{
  code *pcVar1;
  ccFntTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar5;
  undefined4 uVar6;
  InternalExceptionFrame local_60;
  int local_1c;
  ccFntTy *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (param_3 == -1) {
      param_3 = iVar2;
    }
    if ((param_2 < iVar2) && (param_3 != 0)) {
      if (iVar2 < param_3 + param_2) {
        param_3 = iVar2 - param_2;
      }
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      local_18 = this;
      iVar2 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_00 = local_18;
      if (iVar2 != 0) {
        g_currentExceptionFrame = local_60.previous;
        iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x752,0,iVar2,&DAT_007a4ccc,
                                   s_ccFntTy__WrSarr_007f02c8);
        if (iVar4 == 0) {
          *(undefined4 *)(local_18 + 0x4c) = 1;
          RaiseInternalException(iVar2,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x756);
          return iVar2;
        }
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      local_c = FUN_00711670(local_18,param_1,param_2,param_3);
      iVar2 = FUN_007115e0(this_00,param_1,param_2,param_3);
      if ((((param_4 < 0) && (param_4 != -3)) && (param_4 != -2)) &&
         (*(int *)(this_00 + 0x68) < local_c)) {
        param_4 = 0;
      }
      if ((param_5 < 0) && (*(int *)(this_00 + 0x6c) < iVar2)) {
        param_5 = 0;
      }
      local_14 = param_4;
      if (((param_4 < 0) && (param_4 != -3)) && ((param_4 != -2 && (param_4 != -4)))) {
        local_14 = (*(int *)(this_00 + 0x68) - local_c) / 2;
      }
      if (param_5 < 0) {
        param_5 = (*(int *)(this_00 + 0x6c) - iVar2) / 2;
      }
      iVar2 = 0;
      *(undefined4 *)(this_00 + 0x44) = param_6;
      *(undefined4 *)(this_00 + 0x48) = param_6;
      *(undefined4 *)(this_00 + 0x4c) = 0;
      local_1c = param_3 + param_2;
      local_10 = param_2;
      local_8 = param_5;
      if (param_2 < local_1c) {
        do {
          if (local_10 < *(int *)(param_1 + 8)) {
            puVar5 = *(uint **)(*(int *)(param_1 + 0x14) + local_10 * 4);
          }
          else {
            puVar5 = (uint *)0x0;
          }
          if (param_4 == -4) {
            uVar6 = *(undefined4 *)(this_00 + 0x44);
            iVar3 = local_8 + iVar2;
            iVar4 = FUN_00711110(this_00,puVar5);
            iVar4 = (*(int *)(this_00 + 0x68) + local_c) / 2 - iVar4;
          }
          else if (param_4 == -2) {
            uVar6 = *(undefined4 *)(this_00 + 0x44);
            iVar3 = local_8 + iVar2;
            iVar4 = -1;
          }
          else {
            uVar6 = *(undefined4 *)(this_00 + 0x44);
            iVar3 = local_8 + iVar2;
            iVar4 = local_14;
          }
          WrStr(this_00,puVar5,iVar4,iVar3,uVar6);
          iVar4 = FUN_007111c0(this_00,puVar5);
          iVar2 = iVar2 + iVar4 + *(int *)(this_00 + 0x5c);
          local_10 = local_10 + 1;
        } while (local_10 < local_1c);
      }
      *(undefined4 *)(this_00 + 0x4c) = 1;
      g_currentExceptionFrame = local_60.previous;
    }
  }
  return 0;
}



/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::WrTxt */

int __thiscall
ccFntTy::WrTxt(ccFntTy *this,uint *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
              int param_6)

{
  char cVar1;
  code *pcVar2;
  ccFntTy *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar6;
  InternalExceptionFrame local_64;
  uint *local_20;
  int local_1c;
  ccFntTy *local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x6ec,0,iVar3,&DAT_007a4ccc,
                               s_ccFntTy__WrTxt_007f02a8);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    *(undefined4 *)(local_18 + 0x4c) = 1;
    RaiseInternalException(iVar3,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x6f0);
    return iVar3;
  }
  local_10 = FUN_00711370(local_18,param_1);
  if (param_6 < 0) {
    param_6 = local_10;
  }
  iVar3 = FUN_007113e0(this_00,param_1);
  local_1c = FUN_00711470(param_1);
  if ((((param_2 < 0) && (param_2 != -3)) && (param_2 != -2)) &&
     (*(int *)(this_00 + 0x68) < local_10)) {
    param_2 = 0;
  }
  if ((param_3 < 0) && (*(int *)(this_00 + 0x6c) < iVar3)) {
    param_3 = 0;
  }
  local_14 = param_2;
  if (((param_2 < 0) && (param_2 != -3)) && ((param_2 != -2 && (param_2 != -4)))) {
    local_14 = (*(int *)(this_00 + 0x68) - local_10) / 2;
  }
  local_c = param_3;
  if (param_3 < 0) {
    local_c = (*(int *)(this_00 + 0x6c) - iVar3) / 2;
  }
  iVar3 = 0;
  *(undefined4 *)(this_00 + 0x44) = param_4;
  *(undefined4 *)(this_00 + 0x48) = param_4;
  *(undefined4 *)(this_00 + 0x4c) = 0;
  local_10 = 0;
  cVar1 = (char)*param_1;
  while (cVar1 != '\0') {
    local_20 = Library::MSVCRT::FUN_00730590(param_1,&DAT_007c8ff4);
    if (local_20 != (uint *)0x0) {
      local_5 = (undefined1)*local_20;
      *(undefined1 *)local_20 = 0;
    }
    if ((param_5 < 0) || (local_10 != local_1c + -1)) {
      if (param_2 == -4) {
        uVar6 = *(undefined4 *)(this_00 + 0x44);
        iVar5 = local_c + iVar3;
        iVar4 = FUN_00711110(this_00,param_1);
        iVar4 = (*(int *)(this_00 + 0x68) + param_6) / 2 - iVar4;
      }
      else {
        uVar6 = *(undefined4 *)(this_00 + 0x44);
        if (param_2 == -2) {
          iVar5 = local_c + iVar3;
          iVar4 = -1;
        }
        else {
          iVar5 = local_c + iVar3;
          iVar4 = local_14;
        }
      }
    }
    else {
      uVar6 = *(undefined4 *)(this_00 + 0x44);
      iVar5 = local_c + iVar3;
      iVar4 = param_5;
    }
    WrStr(this_00,param_1,iVar4,iVar5,uVar6);
    iVar4 = FUN_007111c0(this_00,param_1);
    iVar3 = iVar3 + iVar4 + *(int *)(this_00 + 0x5c);
    local_10 = local_10 + 1;
    if (local_20 == (uint *)0x0) break;
    *(undefined1 *)local_20 = local_5;
    param_1 = (uint *)((int)local_20 + 1);
    cVar1 = *(char *)((int)local_20 + 1);
  }
  *(undefined4 *)(this_00 + 0x4c) = 1;
  g_currentExceptionFrame = local_64.previous;
  return 0;
}



/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::WrStr */

int __thiscall
ccFntTy::WrStr(ccFntTy *this,uint *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  ccFntTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int local_10;
  ccFntTy *local_c;
  int local_8;
  
  local_8 = 0;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x6b3,0,iVar3,&DAT_007a4ccc,
                               s_ccFntTy__WrStr_007f0298);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x6b5);
    return iVar3;
  }
  iVar3 = FUN_00711110(local_c,param_1);
  local_10 = FUN_007111c0(this_00,param_1);
  if ((param_2 < 0) && (*(int *)(this_00 + 0x68) < iVar3)) {
    param_2 = 0;
  }
  if ((param_3 < 0) && (*(int *)(this_00 + 0x6c) < local_10)) {
    param_3 = 0;
  }
  if (param_2 < 0) {
    if (param_2 == -3) {
      param_2 = *(int *)(this_00 + 0x68) - iVar3;
    }
    else {
      param_2 = (*(int *)(this_00 + 0x68) - iVar3) / 2;
    }
  }
  if (param_3 < 0) {
    param_3 = (*(int *)(this_00 + 0x6c) - local_10) / 2;
  }
  *(int *)(this_00 + 0x54) = param_3;
  *(int *)(this_00 + 0x50) = param_2;
  if (*(int *)(this_00 + 0x4c) != 0) {
    *(undefined4 *)(this_00 + 0x44) = param_4;
    *(undefined4 *)(this_00 + 0x48) = param_4;
  }
  cVar1 = (char)*param_1;
  iVar3 = local_8;
  do {
    if (cVar1 == '\0') {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (iVar3 == 0) {
      iVar3 = FUN_0070cd90((char *)(this_00 + 0x9e),param_1);
      if ((iVar3 != 0) || (*(int *)(this_00 + 0x7e) == 0)) goto LAB_00711afb;
      iVar3 = 1;
      local_8 = 1;
    }
    else {
      iVar3 = 0;
      local_8 = 0;
      iVar4 = FUN_0070cdc0((byte *)param_1);
      if (iVar4 < 0) {
LAB_00711afb:
        iVar3 = 0;
        WrCh(this_00,(byte *)param_1,*(uint *)(this_00 + 0x44));
      }
      else if (*(int *)(this_00 + 0x82) < 0) {
        if (iVar4 < 0xf) {
          *(int *)(this_00 + 0x44) = iVar4;
        }
        else {
          *(undefined4 *)(this_00 + 0x44) = *(undefined4 *)(this_00 + 0x48);
        }
      }
      else {
        *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x82);
      }
    }
    cVar1 = *(char *)((int)param_1 + 1);
    param_1 = (uint *)((int)param_1 + 1);
  } while( true );
}


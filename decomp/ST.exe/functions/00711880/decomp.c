
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::WrChXY */

int __thiscall ccFntTy::WrChXY(ccFntTy *this,byte *param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  ccFntTy *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  ccFntTy *local_8;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (param_2 < 0) {
      if (param_2 == -3) {
        uVar3 = FUN_00710fb0(local_8,param_1);
        param_2 = *(int *)(this_00 + 0x68) -
                  (int)*(short *)(*(int *)(this_00 + 0x9a) + 0x6a + (uVar3 & 0xffff) * 10);
      }
      else {
        uVar3 = FUN_00710fb0(local_8,param_1);
        param_2 = (*(int *)(this_00 + 0x68) -
                  (int)*(short *)(*(int *)(this_00 + 0x9a) + 0x6a + (uVar3 & 0xffff) * 10)) / 2;
      }
    }
    if (param_3 < 0) {
      uVar3 = FUN_00710fb0(this_00,param_1);
      param_3 = (*(int *)(this_00 + 0x6c) -
                (int)*(short *)(*(int *)(this_00 + 0x9a) + 0x6c + (uVar3 & 0xffff) * 10)) / 2;
    }
    *(int *)(this_00 + 0x54) = param_3;
    *(int *)(this_00 + 0x50) = param_2;
    WrCh(this_00,param_1,param_4);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x67f,0,iVar2,&DAT_007a4ccc,
                             s_ccFntTy__WrChXY_007f0288);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x681);
  return iVar2;
}


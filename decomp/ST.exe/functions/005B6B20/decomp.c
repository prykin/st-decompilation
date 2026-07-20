
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::InitMMsg */

void __thiscall MMsgTy::InitMMsg(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *this_00;
  int errorCode;
  int iVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  MMsgTy *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  this_00 = local_8;
  if (errorCode == 0) {
    *(MMsgTy **)(DAT_0081176c + 0x2e6) = local_8;
    local_8->field_009A = 8;
    MMObjTy::InitSprBut((MMObjTy *)local_8,(undefined4 *)&local_8->field_0x9b,s_MM_MBUT12_007ccc10,
                        0x194,0x213,0x24,0x12,0x12,7,0xa0,0x31,0x14,(char *)0x0,0,0,0,0,0x4b,0,
                        (ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(undefined4 *)&this_00->field_0x296,s_MM_MBUT08_007ccc04,
                        0x25c,0x213,0xf,0x14,2,8,0xa0,0x34,0x14,(char *)0x0,0,0,0,0,0x4b,0,
                        (ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(undefined4 *)&this_00->field_0x491,s_MM_MBUT09_007ccbf8,
                        0x261,0x1da,0x10,0x12,1,7,0xa0,0x34,0xf,(char *)0x0,0,0,0,0,0x4b,0,
                        (ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(undefined4 *)&this_00->field_0x68c,s_MM_MBUT10_007ccbec,
                        0x264,0x1a3,0x10,0x10,2,6,0x9e,0x33,10,(char *)0x0,0,0,0,0,0x4b,0,
                        (ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(undefined4 *)&this_00->field_0x887,s_MM_MBUT07_007ccbe0,
                        0,0x1a3,0x2f,0x10,0x1c,6,0x9d,0x31,10,(char *)0x0,0,0,0,0,0x4b,0,
                        (ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(undefined4 *)&this_00->field_0xa82,s_MM_MBUT06_007ccbd4,
                        0,0x1da,0x32,0x12,0x1d,7,0xa0,0x32,0xf,(char *)0x0,0,0,0,0,0x4b,0,
                        (ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(undefined4 *)&this_00->field_0xc7d,s_MM_MBUT05_007ccbc8,
                        0,0x213,0x34,0x13,0x21,9,0xa0,0x33,0x14,(char *)0x0,0,0,0,0,0x4b,0,
                        (ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(undefined4 *)&this_00->field_0xe78,s_MM_MBUT11_007ccbbc,
                        0xb4,0x213,0x37,0x12,0x26,8,0xa0,0x30,0x14,(char *)0x0,0,0,0,0,0x4b,0,
                        (ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(undefined4 *)&this_00->field_0x1caf,s_MM_TABLO_007ccbb0,
                        0x30,0x203,0xb5,0x11,0,0,0,0,0x14,(char *)0x0,0,0,0,0,0x4b,0,(ccFntTy *)0x0,
                        0,0,0,-1,-1);
    HideSprites(this_00);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  iVar2 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x22,0,errorCode,
                             &DAT_007a4ccc,s_MMsgTy__InitMMsg_007ccb9c);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x22);
  return;
}


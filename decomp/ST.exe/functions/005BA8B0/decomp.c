#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::PaintPrivider */

void __thiscall PrividerTy::PaintPrivider(PrividerTy *this,char param_1)

{
  PrividerTy *pPVar2;
  int errorCode;
  char *pcVar3;
  int iVar4;
  MMMObjTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0xec,0,errorCode,
                               "%s","PrividerTy::PaintPrivider");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0xec);
    return;
  }
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  /* ST_CALLSITE[005BA90C]: CALL 0x00403738; direct=00403738 PutDDX */
  PutDDX(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
  pPVar2 = local_8;
  if ((local_8->field_1C96 == nullptr) && (param_1 == '\0')) {
    /* ST_CALLSITE[005BA942]: CALL 0x00403c74; direct=00403C74 MMMObjTy::OutLstProc */
    MMMObjTy::OutLstProc
              (this_00,g_dDXContext_0080759C,nullptr,nullptr,0x79,0x51,0x22e,0x145,
               (int)local_8);
  }
  uVar8 = 0;
  pcVar7 = (ccFntTy *)g_startSystem_0081176C->field_0030;
  uVar6 = 0xffffffff;
  uVar5 = 0xfffffffe;
  if (pPVar2->array_00BC[0xc].field_01DF == '\x01') {
    pcVar3 = LoadResourceString(0x26b4,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005BA982]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,pcVar3,uVar5,uVar6,pcVar7,uVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  pcVar3 = LoadResourceString(0x26b3,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005BA9B6]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
  StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,pcVar3,uVar5,uVar6,pcVar7,uVar8);
  if ((pPVar2->field_1C9A == nullptr) && (param_1 == '\0')) {
    /* ST_CALLSITE[005BA9F1]: CALL 0x00402f13; direct=00402F13 MMMObjTy::OutEdProc */
    MMMObjTy::OutEdProc((MMMObjTy *)g_dDXContext_0080759C,
                        (RecoveredGlobalRecordView_00854EB8 *)g_dDXContext_0080759C,0,0,0x79,0x197,
                        0x22e,0x2e,&(pPVar2->array_00BC[0xc].field_01DB)->field_0140);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}


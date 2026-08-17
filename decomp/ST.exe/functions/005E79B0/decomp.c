#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::PaintWait */

void __thiscall WaitTy::PaintWait(WaitTy *this,char param_1)

{
  WaitTy *pWVar2;
  int errorCode;
  char *resourceString;
  int iVar3;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX;
  MMMObjTy *this_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *this_01;
  StartServTy *this_02;
  uint uVar4;
  uint uVar5;
  ccFntTy *pcVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pWVar2 = local_8;
    /* ST_CALLSITE[005E7A0C]: CALL 0x00403738; direct=00403738 PutDDX */
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    this_01 = extraout_ECX;
    if ((pWVar2->field_1AF8 == nullptr) && (param_1 == '\0')) {
      this_00 = (MMMObjTy *)(pWVar2->array_00BC[0xc].field_01DB + 0x140);
      /* ST_CALLSITE[005E7A4E]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      MMMObjTy::OutRGlProc
                (this_00,(int)g_dDXContext_0080759C,nullptr,nullptr,0x112,0x38,0x204
                 ,0x19d,(undefined4 *)this_00);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      this_01 = extraout_ECX_00;
    }
    if (((pWVar2->field_1B00 == nullptr) && (param_1 == '\0')) ||
       ((param_1 != '\0' &&
        ((pWVar2->array_00BC[0xc].field_01E4 != 0 && (pWVar2->array_00BC[0xc].field_01E8 == 0))))))
    {
      /* ST_CALLSITE[005E7AA1]: CALL 0x004042d2; direct=004042D2 MMMObjTy::OutBSlProc */
      MMMObjTy::OutBSlProc
                ((MMMObjTy *)g_dDXContext_0080759C,g_dDXContext_0080759C,nullptr,
                 nullptr,10,0xb4,0xf9,0x121,
                 (undefined4 *)(pWVar2->array_00BC[0xc].field_01DB + 0x140));
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      this_01 = extraout_ECX_01;
    }
    if (((pWVar2->field_1AFC == nullptr) && (param_1 == '\0')) ||
       ((param_1 != '\0' && (pWVar2->array_00BC[0xc].field_01E4 != 0)))) {
      /* ST_CALLSITE[005E7AEA]: CALL 0x00403b61; direct=00403B61 ChatGlassTy::OutChGlProc */
      ChatGlassTy::OutChGlProc
                (this_01,(AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,200,0x1f1,
                 400,0x62,(undefined4 *)(pWVar2->array_00BC[0xc].field_01DB + 0x140));
    }
    uVar7 = 0;
    pcVar6 = g_startSystem_0081176C->field_0030;
    uVar5 = 0xffffffff;
    uVar4 = 0xfffffffe;
    resourceString = LoadResourceString(0x26ae,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005E7B20]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,resourceString,uVar4,uVar5,pcVar6,uVar7);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0xeb,0,errorCode,
                             "%s","WaitTy::PaintWait");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\wait_obj.cpp",0xeb);
  return;
}


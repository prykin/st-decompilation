#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::PaintSettMap

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall SettMapTy::PaintSettMap(SettMapTy *this,char param_1)

{
  SettMapTy_field_1E26State SVar1;
  SettMapTy *pSVar3;
  int errorCode;
  char *resourceString;
  int iVar4;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX;
  MMMObjTy *pMVar5;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *pCVar6;
  StartServTy *this_00;
  uint uVar7;
  uint uVar8;
  ccFntTy *pcVar9;
  uint uVar10;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pSVar3 = local_8;
    /* ST_CALLSITE[005C4E7C]: CALL 0x00403738; direct=00403738 PutDDX */
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    SVar1 = pSVar3->field_1E26;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    pCVar6 = extraout_ECX;
    if (((SVar1 == CASE_6) || (SVar1 == CASE_7)) || (SVar1 == CASE_E)) {
      if ((pSVar3->field_21F0 == nullptr) && (param_1 == '\0')) {
        /* ST_CALLSITE[005C4F1B]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
        MMMObjTy::OutRGlProc
                  ((MMMObjTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
                   nullptr,10,0xb4,0xf9,0x123,
                   (undefined4 *)(pSVar3->array_00BC[0xc].field_01DB + 0x140));
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        pCVar6 = extraout_ECX_01;
      }
    }
    else if (((pSVar3->field_21EC == nullptr) && (param_1 == '\0')) ||
            ((param_1 != '\0' && (pSVar3->field_21E2 == '\0')))) {
      pMVar5 = pSVar3->array_00BC[0xc].field_01DB + 0x140;
      /* ST_CALLSITE[005C4EDE]: CALL 0x004042d2; direct=004042D2 MMMObjTy::OutBSlProc */
      MMMObjTy::OutBSlProc
                (pMVar5,g_dDXContext_0080759C,nullptr,nullptr,10,0xb4,0xf9,0x121,
                 (undefined4 *)pMVar5);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      pCVar6 = extraout_ECX_00;
    }
    SVar1 = pSVar3->field_1E26;
    if ((((SVar1 != CASE_6) && (SVar1 != CASE_1)) && (SVar1 != CASE_2)) &&
       (((pSVar3->field_21F8 == nullptr && (param_1 == '\0')) ||
        ((param_1 != '\0' && (pSVar3->field_21E6 == '\0')))))) {
      /* ST_CALLSITE[005C4F76]: CALL 0x00403b61; direct=00403B61 ChatGlassTy::OutChGlProc */
      ChatGlassTy::OutChGlProc
                (pCVar6,(AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,200,0x1f1,
                 400,0x62,(undefined4 *)(pSVar3->array_00BC[0xc].field_01DB + 0x140));
    }
    if ((pSVar3->field_21E8 == nullptr) && (param_1 == '\0')) {
      pMVar5 = pSVar3->array_00BC[0xc].field_01DB + 0x140;
      /* ST_CALLSITE[005C4FB2]: CALL 0x004042d2; direct=004042D2 MMMObjTy::OutBSlProc */
      MMMObjTy::OutBSlProc
                (pMVar5,g_dDXContext_0080759C,nullptr,nullptr,0x112,0x38,0x205,0x104
                 ,(undefined4 *)pMVar5);
    }
    if ((pSVar3->field_21F4 == nullptr) && (param_1 == '\0')) {
      /* ST_CALLSITE[005C4FF0]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      MMMObjTy::OutRGlProc
                ((MMMObjTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
                 nullptr,0x112,0x149,0x205,0x8c,
                 (undefined4 *)(pSVar3->array_00BC[0xc].field_01DB + 0x140));
    }
    uVar10 = 0;
    pcVar9 = (ccFntTy *)g_startSystem_0081176C->field_0030;
    uVar8 = 0xffffffff;
    uVar7 = 0xfffffffe;
    resourceString = LoadResourceString(0x26b2,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005C5027]: CALL 0x00404c2d; direct=00404C2D StartServTy::WrTextDDX */
    StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,resourceString,uVar7,uVar8,pcVar9,uVar10);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x1ee,0,errorCode,
                             "%s","SettMapTy::PaintSettMap");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\sett_obj.cpp",0x1ee);
  return;
}


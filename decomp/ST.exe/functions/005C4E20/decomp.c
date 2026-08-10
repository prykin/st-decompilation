#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::PaintSettMap */

void __thiscall SettMapTy::PaintSettMap(SettMapTy *this,char param_1)

{
  SettMapTy_field_1E26State SVar1;
  SettMapTy *pSVar3;
  int errorCode;
  char *resourceString;
  int iVar4;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *pCVar5;
  StartServTy *this_00;
  uint uVar6;
  uint uVar7;
  ccFntTy *pcVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pSVar3 = local_8;
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    SVar1 = pSVar3->field_1E26;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    pCVar5 = extraout_ECX;
    if (((SVar1 == CASE_6) || (SVar1 == CASE_7)) || (SVar1 == CASE_E)) {
      if ((pSVar3->field_21F0 == nullptr) && (param_1 == '\0')) {
        MMMObjTy::OutRGlProc
                  ((MMMObjTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
                   nullptr,10,0xb4,0xf9,0x123,(undefined4 *)(pSVar3->field_1A5B + 0x140));
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        pCVar5 = extraout_ECX_01;
      }
    }
    else if (((pSVar3->field_21EC == nullptr) && (param_1 == '\0')) ||
            ((param_1 != '\0' && (pSVar3->field_0x21e2 == '\0')))) {
      MMMObjTy::OutBSlProc
                (pSVar3->field_1A5B + 0x140,g_dDXContext_0080759C,nullptr,nullptr,10
                 ,0xb4,0xf9,0x121,(undefined4 *)(pSVar3->field_1A5B + 0x140));
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      pCVar5 = extraout_ECX_00;
    }
    SVar1 = pSVar3->field_1E26;
    if ((((SVar1 != CASE_6) && (SVar1 != CASE_1)) && (SVar1 != CASE_2)) &&
       (((pSVar3->field_21F8 == nullptr && (param_1 == '\0')) ||
        ((param_1 != '\0' && (pSVar3->field_0x21e6 == '\0')))))) {
      ChatGlassTy::OutChGlProc
                (pCVar5,(AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,200,0x1f1,
                 400,0x62,(undefined4 *)(pSVar3->field_1A5B + 0x140));
    }
    if ((pSVar3->field_21E8 == nullptr) && (param_1 == '\0')) {
      MMMObjTy::OutBSlProc
                (pSVar3->field_1A5B + 0x140,g_dDXContext_0080759C,nullptr,nullptr,
                 0x112,0x38,0x205,0x104,(undefined4 *)(pSVar3->field_1A5B + 0x140));
    }
    if ((pSVar3->field_21F4 == nullptr) && (param_1 == '\0')) {
      MMMObjTy::OutRGlProc
                ((MMMObjTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
                 nullptr,0x112,0x149,0x205,0x8c,(undefined4 *)(pSVar3->field_1A5B + 0x140));
    }
    uVar9 = 0;
    pcVar8 = g_startSystem_0081176C->field_0030;
    uVar7 = 0xffffffff;
    uVar6 = 0xfffffffe;
    resourceString = LoadResourceString(0x26b2,g_hINSTANCE_00807618);
    StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,resourceString,uVar6,uVar7,pcVar8,uVar9);
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


#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::PaintSettMap */

void __thiscall SettMapTy::PaintSettMap(SettMapTy *this,char param_1)

{
  SettMapTy_field_1E26State SVar1;
  code *pcVar2;
  SettMapTy *pSVar3;
  int errorCode;
  uint *puVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *pCVar6;
  StartServTy *this_00;
  uint uVar7;
  uint uVar8;
  ccFntTy *pcVar9;
  undefined4 uVar10;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
    pSVar3 = local_8;
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    SVar1 = pSVar3->field_1E26;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pCVar6 = extraout_ECX;
    if (((SVar1 == 6) || (SVar1 == CASE_7)) || (SVar1 == 0xe)) {
      if ((pSVar3->field_21F0 == (HoloTy *)0x0) && (param_1 == '\0')) {
        MMMObjTy::OutRGlProc
                  (DAT_0080759c,(int)DAT_0080759c,0,0,10,0xb4,0xf9,0x123,
                   (undefined4 *)(pSVar3->field_1A5B + 0x140));
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pCVar6 = extraout_ECX_01;
      }
    }
    else if (((pSVar3->field_21EC == (HoloTy *)0x0) && (param_1 == '\0')) ||
            ((param_1 != '\0' && (pSVar3->field_0x21e2 == '\0')))) {
      MMMObjTy::OutBSlProc
                (pSVar3->field_1A5B + 0x140,(int)DAT_0080759c,(MMMObjTy *)0x0,0,10,0xb4,0xf9,0x121,
                 (undefined4 *)(pSVar3->field_1A5B + 0x140));
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pCVar6 = extraout_ECX_00;
    }
    SVar1 = pSVar3->field_1E26;
    if ((((SVar1 != 6) && (SVar1 != 1)) && (SVar1 != 2)) &&
       (((pSVar3->field_21F8 == (HoloTy *)0x0 && (param_1 == '\0')) ||
        ((param_1 != '\0' && (pSVar3->field_0x21e6 == '\0')))))) {
      ChatGlassTy::OutChGlProc
                (pCVar6,(int)DAT_0080759c,0,0,200,0x1f1,400,0x62,
                 (undefined4 *)(pSVar3->field_1A5B + 0x140));
    }
    if ((pSVar3->field_21E8 == (HoloTy *)0x0) && (param_1 == '\0')) {
      MMMObjTy::OutBSlProc
                (pSVar3->field_1A5B + 0x140,(int)DAT_0080759c,(MMMObjTy *)0x0,0,0x112,0x38,0x205,
                 0x104,(undefined4 *)(pSVar3->field_1A5B + 0x140));
    }
    if ((pSVar3->field_21F4 == (HoloTy *)0x0) && (param_1 == '\0')) {
      MMMObjTy::OutRGlProc
                (DAT_0080759c,(int)DAT_0080759c,0,0,0x112,0x149,0x205,0x8c,
                 (undefined4 *)(pSVar3->field_1A5B + 0x140));
    }
    uVar10 = 0;
    pcVar9 = PTR_0081176c->field_0030;
    uVar8 = 0xffffffff;
    uVar7 = 0xfffffffe;
    puVar4 = (uint *)LoadResourceString(0x26b2,HINSTANCE_00807618);
    StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar4,uVar7,uVar8,pcVar9,uVar10);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x1ee,0,errorCode,
                             "%s","SettMapTy::PaintSettMap");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\sett_obj.cpp",0x1ee);
  return;
}


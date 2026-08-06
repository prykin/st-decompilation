#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::CreateSlider

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0052FB00 -> 0052EB50 @ 00530A59; zero-filled partial register load at 00530A30 */

undefined4 __thiscall
OptPanelTy::CreateSlider
          (OptPanelTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6,uint param_7,int param_8)

{
  OptPanelTy *pOVar2;
  int iVar3;
  LPSTR pCVar3;
  int iVar10;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar11;
  uint local_42c [6];
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_2a8;
  uint local_2a4 [26];
  undefined4 local_23c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  uint local_68;
  InternalExceptionFrame local_54;
  OptPanelTy *local_10;
  ushort *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pOVar2 = local_10;
  if (iVar3 == 0) {
    memset(local_42c, 0, 0x3d8); /* compiler bulk-zero initialization */
    iVar11 = 1;
    piVar9 = nullptr;
    uVar8 = 0;
    local_6c = param_6;
    local_84 = pOVar2->field_0008;
    local_68 = param_7;
    iVar4 = 1;
    local_42c[0] = (uint)(param_8 != 0);
    local_80 = 2;
    local_7c = param_5;
    local_2a8 = 2;
    local_42c[1] = 2;
    local_318 = 1;
    local_31c = 1;
    local_42c[3] = 2;
    local_42c[2] = local_42c[0];
    pCVar3 = thunk_FUN_00571240("BUT_MINUS",0);
    pCVar3 = FUN_006f2c00(pCVar3,iVar4,uVar8);
    local_c = cMf32::RecGet(g_cMf32_00806790,1,pCVar3,piVar9,iVar11);
    local_414 = *(undefined4 *)(local_c + 2);
    local_410 = *(undefined4 *)(local_c + 4);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_c);
    iVar4 = pOVar2->field_003C;
    local_42c[4] = iVar4 + param_3;
    iVar11 = pOVar2->field_005C;
    if (iVar11 == 0) {
      iVar5 = -pOVar2->field_0048;
    }
    else {
      iVar5 = pOVar2->field_0044;
    }
    local_3c0 = 2;
    local_42c[5] = iVar5 + param_4;
    local_3c4 = pOVar2->field_0008;
    local_3bc = 0xc005;
    local_314 = 500;
    local_310 = 0x32;
    puVar6 = local_42c + 2;
    puVar7 = local_2a4;
    memmove(puVar7, puVar6, 0x17c); /* compiler REP MOVS byte copy */
    local_2a4[2] = iVar4 + param_1;
    if (iVar11 == 0) {
      iVar4 = -pOVar2->field_0048;
    }
    else {
      iVar4 = pOVar2->field_0044;
    }
    local_2a4[3] = iVar4 + param_2;
    local_23c = 0xc006;
    (*pOVar2->field_000C->vtable->CreateObject)
              ((SystemClassTy *)pOVar2->field_000C,4,&local_8,nullptr,local_42c,0);
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar10 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0xa0,0,iVar3,"%s",
                              "OptPanelTy::CreateSlider");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\optpanel.cpp",0xa0);
  return 0xffffffff;
}


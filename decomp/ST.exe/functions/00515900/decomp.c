#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawWeapon
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00515A93 MOV EDX,dword ptr [EBP + 0x18];
   first-use mask */

undefined4 __thiscall
HelpPanelTy::DrawWeapon
          (HelpPanelTy *this,int param_1,int *param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar3;
  uint uVar4;
  BITMAPINFO *pBVar5;
  UINT UVar6;
  char *pcVar7;
  int iVar7;
  undefined4 uVar8;
  Global_sub_005259B0_param_1Enum GVar9;
  HINSTANCE pHVar10;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  LONG local_20;
  LONG local_1c;
  undefined1 local_18;
  int local_17;
  uint local_13;
  undefined4 local_c;
  HelpPanelTy *local_8;

  local_c = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x412,0,iVar3,"%s"
                               ,"HelpPanelTy::DrawWeapon");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x412);
    return 0;
  }
  if (param_3 != 0) {
    GVar9 = (Global_sub_005259B0_param_1Enum)param_3;
    uVar4 = thunk_FUN_005259b0(GVar9,0,'\x01');
    pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_8->field_0244,uVar4);
    if (pBVar5 != nullptr) {
      iVar3 = (pBVar5->bmiHeader).biHeight + -0xf;
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 / 2;
      }
      iVar1 = *param_2;
      *param_2 = iVar1 + iVar3;
      ccFntTy::SetSurf(local_8->field_01E0,(int)local_8->field_0218,0,param_1,iVar1 + iVar3,
                       0x19c - param_1,0xf);
      if (param_4 == 0) {
        pHVar10 = g_hINSTANCE_00807618;
        UVar6 = thunk_FUN_00524fe0(GVar9);
        pcVar7 = LoadResourceString(UVar6,pHVar10);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s",pcVar7);
      }
      else {
        pHVar10 = g_hINSTANCE_00807618;
        UVar6 = thunk_FUN_00524fe0(GVar9);
        pcVar7 = LoadResourceString(UVar6,pHVar10);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s (%d)",pcVar7,param_4);
      }
      ccFntTy::WrStr(local_8->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      DibPut((RecoveredSourceFamily_dibcopy *)local_8->field_0218,
             (param_1 - (pBVar5->bmiHeader).biWidth) + -5,
             (0xf - (pBVar5->bmiHeader).biHeight) / 2 + *param_2,'\x06',(byte *)pBVar5);
      local_28 = (param_1 - (pBVar5->bmiHeader).biWidth) + -5;
      local_20 = (pBVar5->bmiHeader).biWidth;
      local_24 = (0xf - (pBVar5->bmiHeader).biHeight) / 2 + *param_2;
      local_1c = (pBVar5->bmiHeader).biHeight;
      local_17 = param_3;
      local_13 = (uint)param_5;
      local_18 = 4;
      Library::DKW::TBL::DArrayAppend(local_8->field_01D7,&local_28);
      iVar3 = (pBVar5->bmiHeader).biHeight;
      if (iVar3 < 0x10) {
        iVar3 = 0xf;
      }
      *param_2 = *param_2 + iVar3;
      g_currentExceptionFrame = local_6c.previous;
      return 1;
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_c;
}


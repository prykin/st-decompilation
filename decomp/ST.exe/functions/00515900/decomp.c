#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawWeapon */

undefined4 __thiscall
HelpPanelTy::DrawWeapon
          (HelpPanelTy *this,int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  UINT UVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  Global_sub_005259B0_param_1Enum GVar9;
  HINSTANCE pHVar10;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_17;
  uint local_13;
  undefined4 local_c;
  HelpPanelTy *local_8;

  local_c = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x412,0,iVar2,"%s"
                               ,"HelpPanelTy::DrawWeapon");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\helppan.cpp",0x412);
    return 0;
  }
  if (param_3 != 0) {
    GVar9 = (Global_sub_005259B0_param_1Enum)param_3;
    uVar3 = thunk_FUN_005259b0(GVar9,0,'\x01');
    pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_8->field_0244,uVar3);
    if (pbVar4 != (byte *)0x0) {
      if (*(int *)(pbVar4 + 8) + -0xf < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(pbVar4 + 8) + -0xf) / 2;
      }
      iVar7 = *param_2;
      *param_2 = iVar7 + iVar2;
      ccFntTy::SetSurf(local_8->field_01E0,(int)local_8->field_0218,0,param_1,iVar7 + iVar2,
                       0x19c - param_1,0xf);
      if (param_4 == 0) {
        pHVar10 = HINSTANCE_00807618;
        UVar5 = thunk_FUN_00524fe0(GVar9);
        pcVar6 = LoadResourceString(UVar5,pHVar10);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s",pcVar6);
      }
      else {
        pHVar10 = HINSTANCE_00807618;
        UVar5 = thunk_FUN_00524fe0(GVar9);
        pcVar6 = LoadResourceString(UVar5,pHVar10);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s (%d)",pcVar6,param_4);
      }
      ccFntTy::WrStr(local_8->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0218,
             (param_1 - *(int *)(pbVar4 + 4)) + -5,(0xf - *(int *)(pbVar4 + 8)) / 2 + *param_2,
             '\x06',pbVar4);
      local_28 = (param_1 - *(int *)(pbVar4 + 4)) + -5;
      local_20 = *(undefined4 *)(pbVar4 + 4);
      local_24 = (0xf - *(int *)(pbVar4 + 8)) / 2 + *param_2;
      local_1c = *(undefined4 *)(pbVar4 + 8);
      local_17 = param_3;
      local_13 = param_5 & 0xff;
      local_18 = 4;
      Library::DKW::TBL::FUN_006ae1c0((uint *)local_8->field_01D7,&local_28);
      iVar2 = *(int *)(pbVar4 + 8);
      if (iVar2 < 0x10) {
        iVar2 = 0xf;
      }
      *param_2 = *param_2 + iVar2;
      g_currentExceptionFrame = local_6c.previous;
      return 1;
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_c;
}


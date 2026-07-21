#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::Update */

void __thiscall UpgPanelTy::Update(UpgPanelTy *this)

{
  code *pcVar1;
  UpgPanelTy *pUVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar10;
  uint local_298 [144];
  InternalExceptionFrame local_58;
  UpgPanelTy *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pUVar2 = local_14;
  if (iVar3 == 0) {
    puVar8 = &local_14->field_01AB;
    puVar7 = puVar8;
    puVar9 = local_298;
    for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,0x10,(AnonShape_0043BEB0_1C00EC12 *)puVar8);
    iVar3 = 0x19;
    puVar8 = &pUVar2->field_01AB;
    local_8 = 3;
    do {
      uVar4 = thunk_FUN_005276e0((Global_sub_005276E0_param_1Enum)*puVar8,(byte)(*puVar8 >> 0x10));
      if (*(Global_sub_005276E0_param_1Enum *)(puVar8 + 2) == ~(CASE_80|CASE_7F)) {
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EF;
      }
      else {
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EB;
      }
      pbVar5 = (byte *)FUN_0070b3a0(pAVar10,uVar4);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)pUVar2->field_0068,0x24,iVar3,'\x01',pbVar5);
      puVar8 = puVar8 + 0xc;
      iVar3 = iVar3 + 0x1b;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_8 = 0x5e;
    puVar8 = &pUVar2->field_023B;
    local_c = 2;
    do {
      iVar3 = 0x19;
      local_10 = 3;
      do {
        uVar4 = thunk_FUN_005276e0((Global_sub_005276E0_param_1Enum)*puVar8,(byte)(*puVar8 >> 0x10))
        ;
        if (*(Global_sub_005276E0_param_1Enum *)(puVar8 + 2) == ~(CASE_80|CASE_7F)) {
          pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EF;
        }
        else {
          pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EB;
        }
        pbVar5 = (byte *)FUN_0070b3a0(pAVar10,uVar4);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pUVar2->field_0068,local_8,iVar3,'\x01',pbVar5);
        puVar8 = puVar8 + 0xc;
        iVar3 = iVar3 + 0x1b;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_8 = local_8 + 0x33;
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar3 = 0x19;
    puVar8 = &pUVar2->field_035B;
    local_c = 3;
    local_10 = 0;
    do {
      uVar4 = thunk_FUN_005276e0((Global_sub_005276E0_param_1Enum)*puVar8,(byte)(*puVar8 >> 0x10));
      if (*(Global_sub_005276E0_param_1Enum *)(puVar8 + 2) == ~(CASE_80|CASE_7F)) {
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EF;
      }
      else {
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EB;
      }
      pbVar5 = (byte *)FUN_0070b3a0(pAVar10,uVar4);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)pUVar2->field_0068,0xd3,iVar3,'\x01',pbVar5);
      puVar8 = puVar8 + 0xc;
      iVar3 = iVar3 + 0x1b;
      local_c = local_c + -1;
    } while (local_c != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\upginfo.cpp",0x54,0,iVar3,"%s",
                             "UpgPanelTy::Update");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\upginfo.cpp",0x54);
  return;
}


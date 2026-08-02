#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawObj

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00515650 -> 0044C130 @ 005156B3 | 00515650 -> 00526BA0 @ 0051578E */

void __thiscall
HelpPanelTy::DrawObj
          (HelpPanelTy *this,int *param_1,STAllPlayersC_GetTOBJImage_param_2Enum *param_2,
          byte param_3,int param_4)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  InternalExceptionFrame local_58;
  int local_14;
  HelpPanelTy *local_10;
  int local_c;
  AnonShape_00515650_BBDC7053 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pHVar2 = local_10;
  if (iVar3 == 0) {
    if (g_allPlayers_007FA174 != nullptr) {
      *param_1 = *param_1 + 2;
      local_8 = (AnonShape_00515650_BBDC7053 *)
                STAllPlayersC::GetTOBJImage
                          (g_allPlayers_007FA174,(uint)param_3,
                           (STAllPlayersC_GetTOBJImage_param_2Enum)param_2);
      if (local_8 != nullptr) {
        local_14 = local_8->field_0004;
        local_c = local_8->field_0008;
        iVar3 = (0x19c - local_14) / 2;
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)pHVar2->field_0218,0,iVar3,*param_1,
                   (byte *)pHVar2->field_021C,0,(*(int *)(pHVar2->field_021C + 2) - local_14) / 2,
                   (*(int *)(pHVar2->field_021C + 4) - local_c) / 2,local_14,local_c);
        FUN_006b5440((ushort *)pHVar2->field_0218,0,iVar3,*param_1,(uint)local_8,0,0xff);
        FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pHVar2->field_0218,0,iVar3 + -2,*param_1 + -2,
                     local_14 + 4,local_c + 4,0x6f,0xd);
        *param_1 = *param_1 + local_c + 10;
        FreeAndNull(&local_8);
      }
    }
    if (param_4 != 0) {
      uVar4 = thunk_FUN_00526ba0((Global_sub_00526BA0_param_1Enum)param_2,param_3);
      local_8 = (AnonShape_00515650_BBDC7053 *)
                FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)param_4,uVar4);
      if (local_8 != nullptr) {
        iVar3 = (0x19c - local_8->field_0004) / 2;
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pHVar2->field_0218,iVar3,*param_1,'\x01',
               (byte *)local_8);
        pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pHVar2->field_0248,4);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pHVar2->field_0218,iVar3 + -2,*param_1 + -2,'\x06',
               pbVar5);
        iVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pHVar2->field_0248,4);
        *param_1 = *param_1 + *(int *)(iVar3 + 8);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x3f3,0,iVar3,"%s",
                             "HelpPanelTy::DrawObj");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x3f3);
  return;
}


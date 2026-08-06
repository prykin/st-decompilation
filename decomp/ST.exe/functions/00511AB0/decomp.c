#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CheckBkView
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=00511ACA MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

void __thiscall HelpPanelTy::CheckBkView(HelpPanelTy *this,int param_1,ushort param_2)

{
  AnonPointee_HelpPanelTy_0218 **slotStorage;
  AnonPointee_HelpPanelTy_0218 *pAVar1;
  HelpPanelTy *pHVar3;
  int iVar4;
  int uVar5;
  AnonPointee_HelpPanelTy_0218 *pAVar4;
  undefined4 *puVar5;
  int iVar8;
  uint uVar6;
  ushort *puVar7;
  int iVar9;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;

  if ((this->field_0218 != nullptr) &&
     ((int)this->field_0218->field_0008 < (int)((uint)param_2 + param_1))) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    pHVar3 = local_c;
    if (iVar4 == 0) {
      iVar9 = 1;
      pAVar4 = local_c->field_0218;
      slotStorage = &local_c->field_0218;
      puVar7 = local_c->field_01DC + 0x14;
      uVar5 = FUN_006b4fe0((int)local_c->field_01DC);
      pAVar4 = (AnonPointee_HelpPanelTy_0218 *)
               FUN_006b50c0(pAVar4->field_0004,pAVar4->field_0008 + 0x32,(uint)pHVar3->field_01DC[7]
                            ,uVar5,(undefined4 *)puVar7,iVar9);
      local_8 = pAVar4->field_0014;
      if (local_8 == 0) {
        local_8 = ((uint)(ushort)pAVar4->field_000E * pAVar4->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  pAVar4->field_0008;
      }
      puVar5 = (undefined4 *)FUN_006b4fa0((int *)pAVar4);
      for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      pAVar1 = *slotStorage;
      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)pAVar4,0,0,0,(byte *)pAVar1,0,0,0,
                 pAVar1->field_0004,pAVar1->field_0008);
      FreeAndNull(slotStorage);
      *slotStorage = pAVar4;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0xdc,0,iVar4,"%s",
                               "HelpPanelTy::CheckBkView");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0xdc);
  }
  return;
}


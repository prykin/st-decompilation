#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CheckBkView
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=00511ACA MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

void __thiscall HelpPanelTy::CheckBkView(HelpPanelTy *this,int param_1,ushort param_2)

{
  AnonPointee_HelpPanelTy_0218 **value;
  AnonPointee_HelpPanelTy_0218 *pAVar1;
  code *pcVar2;
  HelpPanelTy *pHVar3;
  int iVar4;
  int uVar5;
  AnonPointee_HelpPanelTy_0218 *pAVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;

  if ((this->field_0218 != (AnonPointee_HelpPanelTy_0218 *)0x0) &&
     ((int)this->field_0218->field_0008 < (int)((uint)param_2 + param_1))) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    pHVar3 = local_c;
    if (iVar4 == 0) {
      iVar4 = 1;
      pAVar5 = local_c->field_0218;
      value = &local_c->field_0218;
      puVar9 = local_c->field_01DC + 0x14;
      uVar5 = FUN_006b4fe0((int)local_c->field_01DC);
      pAVar5 = (AnonPointee_HelpPanelTy_0218 *)
               FUN_006b50c0(pAVar5->field_0004,pAVar5->field_0008 + 0x32,(uint)pHVar3->field_01DC[7]
                            ,uVar5,(undefined4 *)puVar9,iVar4);
      local_8 = pAVar5->field_0014;
      if (local_8 == 0) {
        local_8 = ((uint)(ushort)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  pAVar5->field_0008;
      }
      puVar6 = (undefined4 *)FUN_006b4fa0((int *)pAVar5);
      for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      pAVar1 = *value;
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,(byte *)pAVar1,0,0,0,pAVar1->field_0004
                 ,pAVar1->field_0008);
      FreeAndNull(value);
      *value = pAVar5;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0xdc,0,iVar4,"%s",
                               "HelpPanelTy::CheckBkView");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0xdc);
  }
  return;
}


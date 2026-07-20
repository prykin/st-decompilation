
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CheckBkView */

void __thiscall HelpPanelTy::CheckBkView(HelpPanelTy *this,int param_1,uint param_2)

{
  AnonPointee_HelpPanelTy_0218 **ppAVar1;
  AnonPointee_HelpPanelTy_0218 *pAVar2;
  code *pcVar3;
  HelpPanelTy *pHVar4;
  int iVar5;
  uint uVar6;
  AnonPointee_HelpPanelTy_0218 *pAVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ushort *puVar10;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;
  
  if ((this->field_0218 != (AnonPointee_HelpPanelTy_0218 *)0x0) &&
     ((int)this->field_0218->field_0008 < (int)((param_2 & 0xffff) + param_1))) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pHVar4 = local_c;
    if (iVar5 == 0) {
      iVar5 = 1;
      pAVar7 = local_c->field_0218;
      ppAVar1 = &local_c->field_0218;
      puVar10 = local_c->field_01DC + 0x14;
      uVar6 = FUN_006b4fe0((int)local_c->field_01DC);
      pAVar7 = (AnonPointee_HelpPanelTy_0218 *)
               FUN_006b50c0(pAVar7->field_0004,pAVar7->field_0008 + 0x32,(uint)pHVar4->field_01DC[7]
                            ,uVar6,(undefined4 *)puVar10,iVar5);
      local_8 = pAVar7->field_0014;
      if (local_8 == 0) {
        local_8 = ((uint)(ushort)pAVar7->field_000E * pAVar7->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  pAVar7->field_0008;
      }
      puVar8 = (undefined4 *)FUN_006b4fa0((int)pAVar7);
      for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pAVar2 = *ppAVar1;
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)pAVar7,0,0,0,(byte *)pAVar2,0,0,0,pAVar2->field_0004,
                 pAVar2->field_0008);
      FUN_006ab060(ppAVar1);
      *ppAVar1 = pAVar7;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xdc,0,iVar5,&DAT_007a4ccc,
                               s_HelpPanelTy__CheckBkView_007c3938);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xdc);
  }
  return;
}


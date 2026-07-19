
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CheckBkView */

void __thiscall HelpPanelTy::CheckBkView(HelpPanelTy *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  HelpPanelTy *pHVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;
  
  if ((this->field_0218 != 0) &&
     (*(int *)(this->field_0218 + 8) < (int)((param_2 & 0xffff) + param_1))) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pHVar3 = local_c;
    if (iVar4 == 0) {
      iVar8 = 1;
      iVar4 = local_c->field_0218;
      puVar1 = &local_c->field_0218;
      puVar6 = (undefined4 *)(local_c->field_01DC + 0x28);
      uVar5 = FUN_006b4fe0(local_c->field_01DC);
      puVar6 = (undefined4 *)
               FUN_006b50c0(*(int *)(iVar4 + 4),*(int *)(iVar4 + 8) + 0x32,
                            (uint)*(ushort *)(pHVar3->field_01DC + 0xe),uVar5,puVar6,iVar8);
      local_8 = puVar6[5];
      if (local_8 == 0) {
        local_8 = ((uint)*(ushort *)((int)puVar6 + 0xe) * puVar6[1] + 0x1f >> 3 & 0x1ffffffc) *
                  puVar6[2];
      }
      puVar7 = (undefined4 *)FUN_006b4fa0((int)puVar6);
      for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = 0xff;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      iVar4 = *puVar1;
      Library::DKW::WGR::FUN_006b55f0
                (puVar6,0,0,0,iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8));
      FUN_006ab060(puVar1);
      *puVar1 = puVar6;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xdc,0,iVar4,&DAT_007a4ccc,
                               s_HelpPanelTy__CheckBkView_007c3938);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xdc);
  }
  return;
}


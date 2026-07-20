
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CheckBkView */

void __thiscall HelpPanelTy::CheckBkView(HelpPanelTy *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  code *pcVar3;
  HelpPanelTy *pHVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ushort *puVar9;
  int iVar10;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;
  
  if ((this->field_0218 != 0) &&
     (*(int *)(this->field_0218 + 8) < (int)((param_2 & 0xffff) + param_1))) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pHVar4 = local_c;
    if (iVar5 == 0) {
      iVar10 = 1;
      iVar5 = local_c->field_0218;
      puVar1 = &local_c->field_0218;
      puVar9 = local_c->field_01DC + 0x14;
      uVar6 = FUN_006b4fe0((int)local_c->field_01DC);
      puVar7 = (undefined4 *)
               FUN_006b50c0(*(int *)(iVar5 + 4),*(int *)(iVar5 + 8) + 0x32,
                            (uint)pHVar4->field_01DC[7],uVar6,(undefined4 *)puVar9,iVar10);
      local_8 = puVar7[5];
      if (local_8 == 0) {
        local_8 = ((uint)*(ushort *)((int)puVar7 + 0xe) * puVar7[1] + 0x1f >> 3 & 0x1ffffffc) *
                  puVar7[2];
      }
      puVar8 = (undefined4 *)FUN_006b4fa0((int)puVar7);
      for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pbVar2 = (byte *)*puVar1;
      Library::DKW::WGR::FUN_006b55f0
                (puVar7,0,0,0,pbVar2,0,0,0,*(int *)(pbVar2 + 4),*(int *)(pbVar2 + 8));
      FUN_006ab060((LPVOID *)puVar1);
      *puVar1 = puVar7;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xdc,0,iVar5,&DAT_007a4ccc
                                ,s_HelpPanelTy__CheckBkView_007c3938);
    if (iVar10 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xdc);
  }
  return;
}


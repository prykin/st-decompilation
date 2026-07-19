
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::GetMessage */

undefined4 __thiscall ResearchPanelTy::GetMessage(ResearchPanelTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  ProdPanelTy *this_00;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ProdPanelTy *pPVar7;
  InternalExceptionFrame local_58;
  uint local_14;
  undefined1 local_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  ProdPanelTy *local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = (ProdPanelTy *)this;
  iVar3 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_research_cpp_007c76c8,200,0,iVar3,&DAT_007a4ccc,
                               s_ResearchPanelTy__GetMessage_007c7774);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_research_cpp_007c76c8,200);
    return 0xffff;
  }
  iVar3 = 2;
  if (*(int *)(param_1 + 0x10) == 2) {
    ProdPanelTy::PreInitProdPanel(local_8);
  }
  ProdPanelTy::GetMessage(this_00,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc0a4) {
    if (uVar1 < 0xc09f) {
      if (uVar1 == 2) {
        InitResearchPanel((ResearchPanelTy *)this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (uVar1 == 3) {
        pPVar7 = this_00 + 0x27a;
        do {
          if (*(byte **)pPVar7 != (byte *)0x0) {
            FUN_006ae110(*(byte **)pPVar7);
            *(undefined4 *)pPVar7 = 0;
          }
          pPVar7 = pPVar7 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (*(uint *)(this_00 + 0x282) != 0) {
          FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x282));
        }
        *(undefined4 *)(this_00 + 0x282) = 0;
        DAT_008016e8 = 0;
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (uVar1 == 0xb207) {
        this_00[0x279] = this_00[0x278];
        this_00[0x278] = (ProdPanelTy)(**(char **)(param_1 + 0x14) + -1);
        thunk_FUN_005252c0(0xae);
        (**(code **)(*(int *)this_00 + 0x1c))();
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else {
      iVar3 = *(int *)(this_00 + (uint)(byte)this_00[0x278] * 4 + 0x27a);
      if ((iVar3 == 0) || (*(uint *)(iVar3 + 0xc) <= (uVar1 + *(int *)(this_00 + 0x199)) - 0xc09f))
      {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)
                 ((uVar1 + *(int *)(this_00 + 0x199) + -0xc09f) * *(int *)(iVar3 + 8) +
                 *(int *)(iVar3 + 0x1c));
      }
      if ((puVar4 != (undefined1 *)0x0) && (puVar4[8] != '\0')) {
        uStack_d = 0;
        local_c = 0;
        local_a = 0;
        local_14 = (uint)CONCAT11(*puVar4,2);
        local_10 = 0;
        uStack_f = 1;
        thunk_FUN_0054edf0((undefined4 *)0x1e,&local_14,0,0xffffffff);
        ProdPanelTy::SetPanel(this_00,'\0');
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else {
    switch(uVar1) {
    case 0xc0a4:
      *(undefined4 *)(this_00 + 0x199) = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_0053c620(this_00);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case 0xc0af:
    case 0xc0b0:
    case 0xc0b1:
    case 0xc0b2:
    case 0xc0b3:
      PaintUpdBut((ResearchPanelTy *)this_00,param_1);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case 0xc0b4:
      ProdPanelTy::PaintTab(this_00,param_1,thunk_FUN_0052a7b0);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}


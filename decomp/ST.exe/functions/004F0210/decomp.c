
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::GetMessage */

undefined4 __thiscall BldLabPanelTy::GetMessage(BldLabPanelTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  BldLabPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  BldLabPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_bldlab_cpp_007c18b4,0x9a,0,iVar3,&DAT_007a4ccc,
                               s_BldLabPanelTy__GetMessage_007c1964);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_bldlab_cpp_007c18b4,0x9a);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    ProdPanelTy::PreInitProdPanel((ProdPanelTy *)local_8);
  }
  ProdPanelTy::GetMessage((ProdPanelTy *)this_00,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc0a4) {
    if (uVar1 < 0xc09f) {
      if (uVar1 == 2) {
        InitBldLabPanel(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (uVar1 != 3) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if ((byte *)this_00->field_027A != (byte *)0x0) {
        FUN_006ae110((byte *)this_00->field_027A);
      }
      this_00->field_027A = 0;
      g_prodPanel_00801680 = (ProdPanelTy *)0x0;
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    iVar3 = this_00->field_027A;
    if ((iVar3 == 0) ||
       (iVar4 = uVar1 + this_00->field_0199, *(uint *)(iVar3 + 0xc) <= iVar4 - 0xc09fU)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)((iVar4 + -0xc09f) * *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c));
    }
    if (puVar5 == (undefined4 *)0x0) {
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (*(char *)(puVar5 + 2) == '\0') {
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    thunk_FUN_0054b630(DAT_00802a30,0xe,*puVar5);
    ProdPanelTy::SetPanel((ProdPanelTy *)this_00,'\0');
  }
  else {
    if (uVar1 != 0xc0a4) {
      if (uVar1 < 0xc0af) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (0xc0b3 < uVar1) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      PaintUpdBut(this_00,param_1);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    this_00->field_0199 = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_004efe20(this_00);
  }
  thunk_FUN_005252c0(0xae);
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}


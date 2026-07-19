
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::GetMessage */

undefined4 __thiscall BldObjPanelTy::GetMessage(BldObjPanelTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  BldObjPanelTy *this_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  BldObjPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_bldobj_cpp_007c1984,0xca,0,iVar3,&DAT_007a4ccc,
                               s_BldObjPanelTy__GetMessage_007c1a2c);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_bldobj_cpp_007c1984,0xca);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    ProdPanelTy::PreInitProdPanel((ProdPanelTy *)local_8);
  }
  ProdPanelTy::GetMessage((ProdPanelTy *)this_00,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xb207) {
    if (uVar1 == 0xb206) {
      ProdPanelTy::PaintTab((ProdPanelTy *)this_00,param_1,thunk_FUN_0052a7b0);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (uVar1 == 2) {
      InitBldObjPanel(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (uVar1 == 3) {
      thunk_FUN_004f0a60((int)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (uVar1 == 0xb205) {
      this_00->field_0279 = this_00->field_0278;
      this_00->field_0278 = **(char **)(param_1 + 0x14) + -1;
      thunk_FUN_005252c0(0xae);
      (**(code **)(this_00->field_0000 + 0x1c))();
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else {
    switch(uVar1) {
    case 0xc09f:
    case 0xc0a0:
    case 0xc0a1:
    case 0xc0a2:
    case 0xc0a3:
      iVar3 = (&this_00->field_027E)[(byte)this_00->field_0278];
      if ((iVar3 == 0) ||
         (iVar5 = uVar1 + this_00->field_0199, *(uint *)(iVar3 + 0xc) <= iVar5 - 0xc09fU)) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)((iVar5 + -0xc09f) * *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c));
      }
      if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar4 + 2) != '\0')) {
        thunk_FUN_0054b630(DAT_00802a30,0xe,*puVar4);
        ProdPanelTy::SetPanel((ProdPanelTy *)this_00,'\0');
        thunk_FUN_005252c0(0xae);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      break;
    case 0xc0a4:
      this_00->field_0199 = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_004f0c80(this_00);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case 0xc0af:
    case 0xc0b0:
    case 0xc0b1:
    case 0xc0b2:
    case 0xc0b3:
      PaintBldBut(this_00,param_1);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}


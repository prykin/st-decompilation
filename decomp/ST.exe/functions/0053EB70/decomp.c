
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::GetMessage */

undefined4 __thiscall SpecPanelTy::GetMessage(SpecPanelTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  PanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (PanelTy *)this;
  iVar3 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x168,0,iVar3,&DAT_007a4ccc
                               ,s_SpecPanelTy__GetMessage_007c79c0);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x168);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)(local_8 + 0x4c));
    *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x50) + *(int *)(this_00 + 0x58);
    *(int *)(this_00 + 0x174) =
         (*(int *)(this_00 + 0x48) - (*(int *)(this_00 + 0x50) + *(int *)(this_00 + 0x58))) +
         DAT_00806734;
  }
  PanelTy::GetMessage(this_00,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc000) {
    if (uVar1 == 0xbfff) {
      (**(code **)(*(int *)this_00 + 0x1c))(0);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (uVar1 == 0) {
      if (*(short *)(this_00 + 0x172) == 3) {
        iVar3 = *(int *)(this_00 + 0x50) + (*(int *)(this_00 + 0x58) - *(int *)(this_00 + 0x48));
        if (iVar3 < *(int *)(this_00 + 0x44)) {
          *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x44) + -0xf;
        }
        if (*(int *)(this_00 + 0x44) <= iVar3) {
          *(int *)(this_00 + 0x44) = iVar3;
          *(undefined2 *)(this_00 + 0x172) = 1;
          (**(code **)(*(int *)this_00 + 0x18))(1);
        }
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                     *(uint *)(this_00 + 0x44));
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (*(short *)(this_00 + 0x172) == 4) {
        iVar3 = *(int *)(this_00 + 0x50) + *(int *)(this_00 + 0x58);
        if (*(int *)(this_00 + 0x44) < iVar3) {
          *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x44) + 0xf;
        }
        if (iVar3 <= *(int *)(this_00 + 0x44)) {
          *(int *)(this_00 + 0x44) = iVar3;
          *(undefined2 *)(this_00 + 0x172) = 2;
        }
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                     *(uint *)(this_00 + 0x44));
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else if (uVar1 == 3) {
      DonePanel((SpecPanelTy *)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else if (uVar1 == 0xc000) {
    iVar3 = *(int *)this_00;
    uVar8 = 1;
    uVar7 = 0;
    uVar6 = 0x274e;
    pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    (**(code **)(iVar3 + 0x10))(param_1,pCVar4,uVar6,uVar7,uVar8);
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}


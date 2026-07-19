
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::PaintUpdBut */

void __thiscall ResearchPanelTy::PaintUpdBut(ResearchPanelTy *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  ResearchPanelTy *pRVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  ResearchPanelTy *local_10;
  uint local_c;
  undefined4 *local_8;
  
  piVar2 = *(int **)(param_1 + 0x18);
  local_18 = *piVar2 - *(int *)(this + 0x3c);
  if (*(int *)(this + 0x5c) == 0) {
    local_14 = piVar2[1] - DAT_00806734;
  }
  else {
    local_14 = piVar2[1] - *(int *)(this + 0x44);
  }
  uVar1 = *(int *)(this + 0x199) + -0xc0af + *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(this + (uint)(byte)this[0x278] * 4 + 0x27a);
  if ((iVar5 == 0) || (*(uint *)(iVar5 + 0xc) <= uVar1)) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_8 = (undefined4 *)(*(int *)(iVar5 + 8) * uVar1 + *(int *)(iVar5 + 0x1c));
  }
  local_10 = this;
  if ((*(short *)(param_1 + 0x14) == 0) || (local_8 == (undefined4 *)0x0)) {
    local_c = (int)*(short *)(*(int *)(this + 0x188) + 0x23) - ((DAT_0080874e != '\x03') + 1);
  }
  else {
    local_c = thunk_FUN_005276e0(*(undefined1 *)local_8,(byte)((uint)*local_8 >> 0x10));
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pRVar4 = local_10;
  if (iVar5 == 0) {
    if ((local_8 == (undefined4 *)0x0) || (*(char *)(local_8 + 2) == '\0')) {
      iVar5 = *(int *)(local_10 + 0x18c);
    }
    else {
      iVar5 = *(int *)(local_10 + 0x188);
    }
    pbVar6 = (byte *)FUN_0070b3a0(iVar5,local_c);
    iVar7 = local_14;
    iVar5 = local_18;
    thunk_FUN_00540760(*(undefined4 **)(pRVar4 + 0x68),local_18,local_14,'\x01',pbVar6);
    if ((*(short *)(param_1 + 0x14) == 3) && (local_8 != (undefined4 *)0x0)) {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(pRVar4 + 400),
                                    7 - (uint)(*(char *)(local_8 + 2) != '\0'));
      thunk_FUN_00540760(*(undefined4 **)(pRVar4 + 0x68),iVar5,iVar7,'\x06',pbVar6);
    }
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)(pRVar4 + 0x60),0xffffffff,*(uint *)(pRVar4 + 0x3c),
               *(uint *)(pRVar4 + 0x44));
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_research_cpp_007c76c8,0x88,0,iVar5,&DAT_007a4ccc,
                             s_ResearchPanelTy__PaintUpdBut_007c7750);
  if (iVar7 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Andrey_research_cpp_007c76c8,0x88);
  return;
}


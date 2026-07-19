
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::ShiftControls */

void __thiscall CPanelTy::ShiftControls(CPanelTy *this,int param_1,int param_2)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar5;
  CPanelTy *pCVar6;
  uint uVar7;
  InternalExceptionFrame local_50;
  uint local_c;
  CPanelTy *local_8;
  
  local_c = CONCAT31(local_c._1_3_,param_1 == 0);
  if (param_1 == 0) {
    if (param_2 == *(int *)(this + 0x138)) {
      return;
    }
    *(int *)(this + 0x138) = param_2;
  }
  else {
    if (param_2 == *(int *)(this + 0x134)) {
      return;
    }
    *(int *)(this + 0x134) = param_2;
  }
  pCVar5 = this + 0x18;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar5 = 0;
    pCVar5 = pCVar5 + 4;
  }
  *(undefined4 *)(this + 0x28) = 0x24;
  if (param_2 == 0) {
    sVar2 = *(short *)(this + 0x241);
  }
  else {
    sVar2 = -*(short *)(this + 0x241);
  }
  *(short *)(this + 0x2e) = sVar2;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pCVar5 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x452,0,iVar4,&DAT_007a4ccc,
                               s_CPanelTy__ShiftControls_007c22a0);
    if (iVar3 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x452);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == 0) {
    if (*(int *)(local_8 + 0x9d0) != 0) {
      FUN_006e6080(local_8,2,*(int *)(local_8 + 0x9d0),(undefined4 *)(local_8 + 0x18));
    }
    pCVar6 = pCVar5 + 0xa15;
    iVar4 = 6;
    do {
      if (*(int *)pCVar6 != 0) {
        FUN_006e6080(pCVar5,2,*(int *)pCVar6,(undefined4 *)(pCVar5 + 0x18));
      }
      pCVar6 = pCVar6 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pCVar6 = pCVar5 + 0xb1f;
    iVar4 = 6;
    do {
      if (*(int *)pCVar6 != 0) {
        FUN_006e6080(pCVar5,2,*(int *)pCVar6,(undefined4 *)(pCVar5 + 0x18));
      }
      pCVar6 = pCVar6 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)(pCVar5 + 0xb37);
  }
  else {
    if (*(int *)(local_8 + 0x95c) != 0) {
      FUN_006e6080(local_8,2,*(int *)(local_8 + 0x95c),(undefined4 *)(local_8 + 0x18));
    }
    pCVar6 = pCVar5 + 0x960;
    iVar4 = 4;
    do {
      if (*(int *)pCVar6 != 0) {
        FUN_006e6080(pCVar5,2,*(int *)pCVar6,(undefined4 *)(pCVar5 + 0x18));
      }
      pCVar6 = pCVar6 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)(pCVar5 + 0x970);
  }
  if (iVar4 != 0) {
    FUN_006e6080(pCVar5,2,iVar4,(undefined4 *)(pCVar5 + 0x18));
  }
  uVar7 = local_c & 0xff;
  if (*(int *)(pCVar5 + uVar7 * 4 + 0x9c0) != 0) {
    FUN_006e6080(pCVar5,2,*(int *)(pCVar5 + uVar7 * 4 + 0x9c0),(undefined4 *)(pCVar5 + 0x18));
  }
  if (*(int *)(pCVar5 + uVar7 * 4 + 0x2fe) != 0) {
    FUN_006e6080(pCVar5,2,*(int *)(pCVar5 + uVar7 * 4 + 0x2fe),(undefined4 *)(pCVar5 + 0x18));
  }
  if (*(int *)(pCVar5 + uVar7 * 4 + 0x308) != 0) {
    FUN_006e6080(pCVar5,2,*(int *)(pCVar5 + uVar7 * 4 + 0x308),(undefined4 *)(pCVar5 + 0x18));
  }
  if (*(int *)(pCVar5 + uVar7 * 4 + 0x310) != 0) {
    FUN_006e6080(pCVar5,2,*(int *)(pCVar5 + uVar7 * 4 + 0x310),(undefined4 *)(pCVar5 + 0x18));
  }
  if (((char)local_c != '\0') && (*(int *)(pCVar5 + uVar7 * 4 + 0x314) != 0)) {
    FUN_006e6080(pCVar5,2,*(int *)(pCVar5 + uVar7 * 4 + 0x314),(undefined4 *)(pCVar5 + 0x18));
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}


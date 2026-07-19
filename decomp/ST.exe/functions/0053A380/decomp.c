
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::DonePlayPanel */

void __thiscall PlayPanelTy::DonePlayPanel(PlayPanelTy *this)

{
  code *pcVar1;
  PlayPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *extraout_ECX_03;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  PlayPanelTy *pPVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  PlayPanelTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar2 = local_c;
  if (iVar3 == 0) {
    this_00 = extraout_ECX;
    if (*(uint *)(local_c + 0x17c) != 0) {
      FUN_006e56b0(*(void **)(local_c + 0xc),*(uint *)(local_c + 0x17c));
      this_00 = extraout_ECX_00;
    }
    *(undefined4 *)(pPVar2 + 0x17c) = 0;
    if (*(uint *)(pPVar2 + 0x1c5) != 0) {
      FUN_006e56b0(*(void **)(pPVar2 + 0xc),*(uint *)(pPVar2 + 0x1c5));
      this_00 = extraout_ECX_01;
    }
    *(undefined4 *)(pPVar2 + 0x1c5) = 0;
    if (*(uint *)(pPVar2 + 0x1c1) != 0) {
      FUN_006e56b0(*(void **)(pPVar2 + 0xc),*(uint *)(pPVar2 + 0x1c1));
      this_00 = extraout_ECX_02;
    }
    *(undefined4 *)(pPVar2 + 0x1c1) = 0;
    pPVar5 = pPVar2 + 0x181;
    local_8 = 2;
    do {
      iVar3 = 8;
      do {
        if (*(uint *)pPVar5 != 0) {
          FUN_006e56b0(*(void **)(pPVar2 + 0xc),*(uint *)pPVar5);
          *(uint *)pPVar5 = 0;
          this_00 = extraout_ECX_03;
        }
        pPVar5 = pPVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(uint **)(pPVar2 + 0x1dd) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pPVar2 + 0x1dd));
      *(undefined4 *)(pPVar2 + 0x1dd) = 0;
    }
    if (*(int *)(pPVar2 + 0x1cd) != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)(pPVar2 + 0x1cd));
    }
    *(undefined4 *)(pPVar2 + 0x1d9) = 0;
    *(undefined4 *)(pPVar2 + 0x1d5) = 0;
    *(undefined4 *)(pPVar2 + 0x1d1) = 0;
    DAT_008016e4 = 0;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,0x97,0,iVar3,&DAT_007a4ccc,
                             s_PlayPanelTy__DonePlayPanel_007c7608);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_playpan_cpp_007c7574,0x97);
  return;
}



/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::DonePlayPanel */

void __thiscall PlayPanelTy::DonePlayPanel(PlayPanelTy *this)

{
  uint uVar1;
  code *pcVar2;
  PlayPanelTy *pPVar3;
  int iVar4;
  int iVar5;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *extraout_ECX_03;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  PlayPanelTy *pPVar6;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  PlayPanelTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar3 = local_c;
  if (iVar4 == 0) {
    this_00 = extraout_ECX;
    if (*(uint *)&local_c->field_0x17c != 0) {
      FUN_006e56b0(*(void **)&local_c->field_0xc,*(uint *)&local_c->field_0x17c);
      this_00 = extraout_ECX_00;
    }
    uVar1 = *(uint *)&pPVar3[1].field_0x44;
    *(undefined4 *)&pPVar3->field_0x17c = 0;
    if (uVar1 != 0) {
      FUN_006e56b0(*(void **)&pPVar3->field_0xc,uVar1);
      this_00 = extraout_ECX_01;
    }
    *(undefined4 *)&pPVar3[1].field_0x44 = 0;
    if (*(uint *)&pPVar3[1].field_0x40 != 0) {
      FUN_006e56b0(*(void **)&pPVar3->field_0xc,*(uint *)&pPVar3[1].field_0x40);
      this_00 = extraout_ECX_02;
    }
    *(undefined4 *)&pPVar3[1].field_0x40 = 0;
    pPVar6 = pPVar3 + 1;
    local_8 = 2;
    do {
      iVar4 = 8;
      do {
        if (*(uint *)pPVar6 != 0) {
          FUN_006e56b0(*(void **)&pPVar3->field_0xc,*(uint *)pPVar6);
          *(uint *)pPVar6 = 0;
          this_00 = extraout_ECX_03;
        }
        pPVar6 = (PlayPanelTy *)&pPVar6->field_0x4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if ((uint *)pPVar3[1].field_005C != (uint *)0x0) {
      ccFntTy::operator(this_00,(uint *)pPVar3[1].field_005C);
      pPVar3[1].field_005C = 0;
    }
    if (*(int *)&pPVar3[1].field_0x4c != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pPVar3[1].field_0x4c);
    }
    *(undefined4 *)&pPVar3[1].field_0x58 = 0;
    *(undefined4 *)&pPVar3[1].field_0x54 = 0;
    *(undefined4 *)&pPVar3[1].field_0x50 = 0;
    DAT_008016e4 = 0;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,0x97,0,iVar4,&DAT_007a4ccc,
                             s_PlayPanelTy__DonePlayPanel_007c7608);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_playpan_cpp_007c7574,0x97);
  return;
}


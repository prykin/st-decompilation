
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::ShiftControls */

void __thiscall PlayPanelTy::ShiftControls(PlayPanelTy *this,int param_1)

{
  code *pcVar1;
  PlayPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  PlayPanelTy *pPVar6;
  InternalExceptionFrame local_54;
  PlayPanelTy *local_10;
  int local_c;
  PlayPanelTy *local_8;
  
  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    puVar5 = (undefined4 *)&this->field_0x18;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_10;
    if (iVar4 == 0) {
      if (*(int *)&local_10->field_0x17c != 0) {
        FUN_006e6080(local_10,2,*(int *)&local_10->field_0x17c,(undefined4 *)&local_10->field_0x18);
      }
      pPVar6 = this_00 + 1;
      local_c = 8;
      do {
        iVar4 = 2;
        local_8 = pPVar6;
        do {
          if (*(int *)pPVar6 != 0) {
            FUN_006e6080(this_00,2,*(int *)pPVar6,(undefined4 *)&this_00->field_0x18);
          }
          pPVar6 = (PlayPanelTy *)&pPVar6->field_0x20;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pPVar6 = (PlayPanelTy *)&local_8->field_0x4;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_8 = pPVar6;
      if (*(int *)&this_00[1].field_0x44 != 0) {
        FUN_006e6080(this_00,2,*(int *)&this_00[1].field_0x44,(undefined4 *)&this_00->field_0x18);
      }
      if (*(int *)&this_00[1].field_0x40 != 0) {
        FUN_006e6080(this_00,2,*(int *)&this_00[1].field_0x40,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,0xfe,0,iVar4,&DAT_007a4ccc,
                               s_PlayPanelTy__ShiftControls_007c7668);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_playpan_cpp_007c7574,0xfe);
  }
  return;
}


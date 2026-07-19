
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::ShiftControls */

void __thiscall ProdPanelTy::ShiftControls(ProdPanelTy *this,int param_1)

{
  code *pcVar1;
  ProdPanelTy *this_00;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;
  
  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    puVar6 = (undefined4 *)&this->field_0x18;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar5 == 0) {
      if (*(int *)&local_8->field_0x180 != 0) {
        FUN_006e6080(local_8,2,*(int *)&local_8->field_0x180,(undefined4 *)&local_8->field_0x18);
      }
      if (*(int *)&this_00[1].field_0x8 != 0) {
        FUN_006e6080(this_00,2,*(int *)&this_00[1].field_0x8,(undefined4 *)&this_00->field_0x18);
      }
      piVar7 = (int *)&this_00[1].field_0xc;
      iVar5 = 5;
      do {
        if (*piVar7 != 0) {
          FUN_006e6080(this_00,2,*piVar7,(undefined4 *)&this_00->field_0x18);
        }
        piVar7 = piVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if ((param_1 == 0) || (uVar3 = 0x55, DAT_0080734c == '\0')) {
        uVar3 = 0x56;
      }
      this_00->field_0028 = uVar3;
      if (*(int *)&this_00[1].field_0x8 != 0) {
        FUN_006e6080(this_00,2,*(int *)&this_00[1].field_0x8,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x1ff,0,iVar5,&DAT_007a4ccc
                               ,s_ProdPanelTy__ShiftControls_007c7a7c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x1ff);
  }
  return;
}


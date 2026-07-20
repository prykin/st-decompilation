
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::BackBut */

void __thiscall HelpPanelTy::BackBut(HelpPanelTy *this,void *param_1)

{
  char cVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  undefined4 local_8;
  
  if (this->field_01A1 != this->field_01A2) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_c;
    if (iVar3 == 0) {
      if (local_c->field_0178 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        local_c->field_002E = 2;
        *(undefined4 *)&local_c->field_0x30 = local_c->field_0178;
        if (DAT_00802a30 != (undefined4 *)0x0) {
          (**(code **)*DAT_00802a30)(&local_c->field_0x18);
        }
      }
      cVar1 = this_00->field_01A2;
      if (cVar1 != '\0') {
        if (cVar1 == '\x06') {
          TTreeProc(this_00,this_00->field_01AB,'\0');
          PutToSHlp(this_00,(int)unaff_EDI);
          g_currentExceptionFrame = local_50.previous;
          return;
        }
        if (cVar1 != '\n') {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      }
      this_00->field_01A1 = cVar1;
      this_00->field_01A3 = local_8;
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)this_00->field_0068,0,0x21,0x16,(byte *)this_00->field_01DC,0,0x21,
                 0x16,0x1b8,0x118);
      CreateList(this_00);
      if (this_00->field_01A2 == '\0') {
        local_8 = this_00->field_01B7;
      }
      else {
        local_8 = *(undefined4 *)&this_00->field_0x1bf;
      }
      if (this_00->field_019C != 0) {
        puVar5 = (undefined4 *)&this_00->field_0x18;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        this_00->field_0028 = 0x22;
        *(short *)&this_00->field_0x2c = (short)local_8;
        *(undefined2 *)&this_00->field_0x30 = 1;
        this_00->field_0032 = 1;
        FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x2b3,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__BackBut_007c3a80);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x2b3);
  }
  return;
}


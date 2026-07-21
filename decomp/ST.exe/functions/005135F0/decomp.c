
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::HomeBut */

void __thiscall HelpPanelTy::HomeBut(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  HelpPanelTy *local_c;
  uint local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 == 0) {
    HVar1 = local_c->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == (CASE_8|CASE_2))) {
      local_c->field_01A2 = HVar1;
      local_c->field_01AB = local_c->field_01A3;
    }
    else {
      local_c->field_01A2 = 0;
      local_c->field_01AB = 0;
    }
    local_c->field_01A1 = 0;
    local_c->field_01A3 = 0;
    if (local_c->field_0178 != 0) {
      local_c->field_0028 = 0x4202;
      *(undefined2 *)&local_c->field_0x2c = 0;
      local_c->field_002E = 2;
      *(undefined4 *)&local_c->field_0x30 = local_c->field_0178;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        (*(code *)**(undefined4 **)PTR_00802a30)(&local_c->field_0x18);
      }
    }
    this_00->field_01CF = 0xffffffff;
    this_00->field_01CB->count = 0;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0,0x21,0x16,
               (byte *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
    local_8 = 0;
    *(undefined4 *)&this_00->field_01B3->field_0xc = 0;
    this_00->field_01B7 = 0;
    if (*(int *)sizeHelp_exref != 0) {
      iVar3 = 0;
      do {
        puVar4 = (undefined4 *)(this_00->field_01C7 + iVar3);
        if (puVar4[1] == 0) {
          local_20 = *puVar4;
          local_1c = puVar4[1];
          local_18 = puVar4[2];
          local_14 = puVar4[3];
          local_10 = *(undefined1 *)(puVar4 + 4);
          local_f = 0;
          local_e = 0;
          local_d = 0;
          Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_01B3,&local_20);
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 0x11;
      } while (local_8 < *(uint *)sizeHelp_exref);
    }
    CreateList(this_00);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x295,0,iVar3,&DAT_007a4ccc,
                             s_HelpPanelTy__HomeBut_007c3a64);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x295);
  return;
}



/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PrepMissObj */

void __thiscall HelpPanelTy::PrepMissObj(HelpPanelTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x39b,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__PrepMissObj_007c3b3c);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x39b);
    return;
  }
  if ((AnonShape_006B5570_4D68B99C *)local_8->field_01D3 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_8->field_01D3);
  }
  puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  this_00->field_01D3 = puVar4;
  iVar3 = 0;
  if (0 < PTR_0080c4cb->field_0008) {
    if (PTR_0080c4cb->field_0008 < 1) {
      pcVar5 = (char *)0x0;
      goto LAB_00514f85;
    }
    do {
      pcVar5 = *(char **)(PTR_0080c4cb->field_0014 + iVar3 * 4);
LAB_00514f85:
      thunk_FUN_005411a0(this_00->field_01D3,pcVar5,&DAT_007c3b60);
      iVar3 = iVar3 + 1;
    } while (iVar3 < PTR_0080c4cb->field_0008);
  }
  puVar4 = ccFntTy::FormIndentSarr
                     (this_00->field_01E4,this_00->field_01D3,s________________007c21d8,
                      (uint *)&DAT_007c21ec,0x19c,0,0xffffffff,(char *)0x0,1);
  if ((AnonShape_006B5570_4D68B99C *)this_00->field_01D3 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_00->field_01D3);
  }
  this_00->field_01D3 = puVar4;
  if (puVar4 == (uint *)0x0) {
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    this_00->field_01D3 = puVar4;
    Library::DKW::TBL::FUN_006b5aa0(puVar4,&DAT_007c3b5c);
  }
  puVar4 = this_00->field_01D3;
  if (puVar4[2] != 0) {
    ccFntTy::SepColorStrInSarr(this_00->field_01E4,puVar4,puVar4);
  }
  if ((this_00->field_01A1 == (CASE_6|CASE_1)) && (this_00->field_019C != 0)) {
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = 1;
    this_00->field_002E = (short)this_00->field_01D3[2];
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_002E = 0;
    *(undefined2 *)&this_00->field_0x2c = 0;
    this_00->field_0028 = 0x22;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    FUN_006e6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}


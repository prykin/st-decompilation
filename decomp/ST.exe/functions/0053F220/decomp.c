
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::DoneProdPanel */

void __thiscall ProdPanelTy::DoneProdPanel(ProdPanelTy *this)

{
  uint uVar1;
  code *pcVar2;
  ProdPanelTy *pPVar3;
  int iVar4;
  int iVar5;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar3 = local_8;
  if (iVar4 == 0) {
    this_00 = extraout_ECX;
    if (*(uint *)&local_8->field_0x180 != 0) {
      FUN_006e56b0(*(void **)&local_8->field_0xc,*(uint *)&local_8->field_0x180);
      this_00 = extraout_ECX_00;
    }
    uVar1 = *(uint *)&pPVar3[1].field_0x8;
    *(undefined4 *)&pPVar3->field_0x180 = 0;
    if (uVar1 != 0) {
      FUN_006e56b0(*(void **)&pPVar3->field_0xc,uVar1);
      this_00 = extraout_ECX_01;
    }
    *(undefined4 *)&pPVar3[1].field_0x8 = 0;
    puVar6 = (uint *)&pPVar3[1].field_0xc;
    iVar4 = 5;
    do {
      if (*puVar6 != 0) {
        FUN_006e56b0(*(void **)&pPVar3->field_0xc,*puVar6);
        *puVar6 = 0;
        this_00 = extraout_ECX_02;
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(uint **)&pPVar3->field_0x17c != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)&pPVar3->field_0x17c);
      *(undefined4 *)&pPVar3->field_0x17c = 0;
    }
    if (*(int *)&pPVar3->field_0x184 != 0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pPVar3->field_0x184);
    }
    *(undefined4 *)&pPVar3->field_0x190 = 0;
    *(undefined4 *)&pPVar3->field_0x188 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x1a6,0,iVar4,&DAT_007a4ccc,
                             s_ProdPanelTy__DoneProdPanel_007c7a20);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x1a6);
  return;
}


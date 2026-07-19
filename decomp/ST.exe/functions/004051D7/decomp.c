
int __thiscall TLOBldMark::Create(TLOBldMark *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 auStack_48 [16];
  TLOBldMark *pTStack_8;
  
  pTStack_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(auStack_48,0,unaff_ESI,g_currentExceptionFrame);
  if (iVar2 == 0) {
    DAT_007fb2ac = pTStack_8;
    return 0;
  }
  iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x2a,0,iVar2,&DAT_007a4ccc,
                             s_TLOBldMark__Create_error_007ad31c);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x2b);
  return iVar2;
}


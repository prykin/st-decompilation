
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_BldMark.cpp
   TLOBldMark::Create */

int __thiscall TLOBldMark::Create(TLOBldMark *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 local_48 [16];
  AnonShape_GLOBAL_007FB2AC_70073F41 *local_8;
  
  local_8 = (AnonShape_GLOBAL_007FB2AC_70073F41 *)this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,g_currentExceptionFrame);
  if (iVar2 == 0) {
    PTR_007fb2ac = local_8;
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



/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::AddSprInit
   
   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115
   
   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114
    */

int __thiscall TLOBaseTy::AddSprInit(TLOBaseTy *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  TLOBaseTy *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    switch(local_8->field_05AC) {
    case CASE_32:
    case CASE_40:
    case CASE_49:
    case CASE_5C:
      thunk_FUN_004d01f0(local_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case CASE_45:
      thunk_FUN_004eaa20((AnonShape_004D9C80_80F657D3 *)local_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case CASE_4E:
      thunk_FUN_004d9c80((AnonShape_004D9C80_80F657D3 *)local_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case CASE_52:
    case CASE_5F:
      thunk_FUN_004ec050((int)local_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case CASE_69:
      thunk_FUN_004dce00((int *)local_8);
      break;
    case CASE_70:
      thunk_FUN_004d9000((AnonShape_004D9000_7AA66E43 *)local_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    case CASE_72:
      thunk_FUN_004ecea0((AnonShape_004D9C80_80F657D3 *)local_8);
      g_currentExceptionFrame = pIVar4;
      return 0;
    }
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x2c5,0,iVar2,&DAT_007a4ccc,
                             s_TLOBaseTy__AddSprInit_error_007ad540);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x2c6);
  return iVar2;
}


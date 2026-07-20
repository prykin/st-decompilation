
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::RotateSpr
   
   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115
   
   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114
    */

int __thiscall TLOBaseTy::RotateSpr(TLOBaseTy *this,int param_1)

{
  undefined4 *puVar1;
  AnonPointee_TLOBaseTy_01F5 *pAVar2;
  code *pcVar3;
  TLOBaseTy *this_00;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int local_c;
  TLOBaseTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x1a7,0,iVar4,&DAT_007a4ccc
                               ,s_TLOBaseTy__RotateSpr_error_007ad520);
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x1a8);
      return iVar4;
    }
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  if (((local_8->field_0245 == CASE_1) && (local_8->field_05DF != 5)) &&
     (iVar4 = thunk_FUN_004ac910(&local_8->field_01D5,'\x04'),
     *(int *)(&DAT_007cdf52 + *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32) < iVar4)) {
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  if (this_00->field_05EF != 0) {
    thunk_FUN_004ca7b0(this_00,0xe,param_1);
  }
  if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
    thunk_FUN_004ca7b0(this_00,9,param_1);
    thunk_FUN_004ca7b0(this_00,8,param_1);
    if (this_00->field_05AC == CASE_4E) {
      thunk_FUN_004ca7b0(this_00,7,param_1);
      if (this_00->field_04D0 == CASE_1) {
        thunk_FUN_004ac660(&this_00->field_01D5,'\a');
      }
      else {
        STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
    if (this_00->field_05AC == CASE_72) {
      thunk_FUN_004ca7b0(this_00,7,param_1);
      if (this_00->field_04D0 == CASE_1) {
        thunk_FUN_004ac660(&this_00->field_01D5,'\a');
      }
      else {
        STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
    if (this_00->field_05AC == CASE_70) {
      thunk_FUN_004ca7b0(this_00,7,param_1);
      if (this_00->field_04D0 == CASE_1) {
        thunk_FUN_004ac660(&this_00->field_01D5,'\a');
      }
      else {
        STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
  }
  if (this_00->field_05F3 != 0) {
    puVar1 = &this_00->field_01D5;
    iVar4 = thunk_FUN_004acd30(puVar1,'\x0e');
    iVar5 = thunk_FUN_004acd30(puVar1,'\r');
    if (((iVar5 < iVar4) && (iVar4 = thunk_FUN_004acd30(puVar1,'\r'), 1 < iVar4)) &&
       (iVar4 = thunk_FUN_004cba10(), iVar4 == 2)) {
      pAVar2 = this_00->field_01F5;
      iVar4 = pAVar2->field_0208;
      if (iVar4 < (int)pAVar2->field_020C) {
        iVar4 = pAVar2->field_0210 - iVar4;
      }
      else {
        iVar4 = iVar4 - pAVar2->field_0210;
      }
      local_c = thunk_FUN_004acd30(puVar1,'\x0e');
      iVar5 = thunk_FUN_004acd30(puVar1,'\r');
      if ((iVar4 < (local_c - iVar5) + -1) || ((this_00->field_01F1 & 0x2000) != 0))
      goto LAB_004cadb1;
    }
    thunk_FUN_004ca7b0(this_00,0xd,param_1);
  }
LAB_004cadb1:
  if (this_00->field_05F7 != 0) {
    thunk_FUN_004ca7b0(this_00,0xc,param_1);
  }
  if (this_00->field_05FF != 0) {
    thunk_FUN_004cbfb0((int)this_00);
  }
  switch(this_00->field_05AC) {
  case CASE_40:
  case CASE_49:
    if (this_00->field_04D0 == CASE_1) {
      thunk_FUN_004ac6b0(&this_00->field_01D5,'\x0e');
      thunk_FUN_004ac6b0(&this_00->field_01D5,'\t');
      break;
    }
  default:
    thunk_FUN_004ac660(&this_00->field_01D5,'\x0e');
    thunk_FUN_004ac660(&this_00->field_01D5,'\t');
    break;
  case CASE_52:
  case CASE_5F:
    puVar1 = &this_00->field_01D5;
    thunk_FUN_004ac6b0(puVar1,'\x0e');
    thunk_FUN_004ac6b0(puVar1,'\r');
    thunk_FUN_004ac6b0(puVar1,'\t');
    thunk_FUN_004ac6b0(puVar1,'\b');
  }
  thunk_FUN_004cba30((int)this_00);
  g_currentExceptionFrame = local_50.previous;
  return 0;
}


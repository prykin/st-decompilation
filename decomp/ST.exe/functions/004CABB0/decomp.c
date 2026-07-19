
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bspr.cpp
   TLOBaseTy::RotateSpr */

int __thiscall TLOBaseTy::RotateSpr(TLOBaseTy *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  TLOBaseTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int local_c;
  TLOBaseTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x1a7,0,iVar3,&DAT_007a4ccc
                               ,s_TLOBaseTy__RotateSpr_error_007ad520);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x1a8);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  if (((local_8->field_0245 == 1) && (local_8->field_05DF != 5)) &&
     (iVar3 = thunk_FUN_004ac910(&local_8->field_01D5,'\x04'),
     *(int *)(&DAT_007cdf52 + *(int *)(&DAT_0079125c + this_00->field_0235 * 4) * 0x32) < iVar3)) {
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  if (this_00->field_05EF != 0) {
    thunk_FUN_004ca7b0(this_00,0xe,param_1);
  }
  if (*(int *)(&DAT_00791a10 + this_00->field_0235 * 4) != 0) {
    thunk_FUN_004ca7b0(this_00,9,param_1);
    thunk_FUN_004ca7b0(this_00,8,param_1);
    if (this_00->field_05AC == 0x4e) {
      thunk_FUN_004ca7b0(this_00,7,param_1);
      if (this_00->field_04D0 == 1) {
        thunk_FUN_004ac660(&this_00->field_01D5,'\a');
      }
      else {
        STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
    if (this_00->field_05AC == 0x72) {
      thunk_FUN_004ca7b0(this_00,7,param_1);
      if (this_00->field_04D0 == 1) {
        thunk_FUN_004ac660(&this_00->field_01D5,'\a');
      }
      else {
        STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
    if (this_00->field_05AC == 0x70) {
      thunk_FUN_004ca7b0(this_00,7,param_1);
      if (this_00->field_04D0 == 1) {
        thunk_FUN_004ac660(&this_00->field_01D5,'\a');
      }
      else {
        STT3DSprC::StopShow((STT3DSprC *)&this_00->field_01D5,7);
      }
    }
  }
  if (this_00->field_05F3 != 0) {
    puVar1 = &this_00->field_01D5;
    iVar3 = thunk_FUN_004acd30(puVar1,'\x0e');
    iVar4 = thunk_FUN_004acd30(puVar1,'\r');
    if (((iVar4 < iVar3) && (iVar3 = thunk_FUN_004acd30(puVar1,'\r'), 1 < iVar3)) &&
       (iVar3 = thunk_FUN_004cba10(), iVar3 == 2)) {
      iVar3 = this_00->field_01F5;
      iVar4 = *(int *)(iVar3 + 0x208);
      if (iVar4 < *(int *)(iVar3 + 0x20c)) {
        iVar4 = *(int *)(iVar3 + 0x210) - iVar4;
      }
      else {
        iVar4 = iVar4 - *(int *)(iVar3 + 0x210);
      }
      local_c = thunk_FUN_004acd30(puVar1,'\x0e');
      iVar3 = thunk_FUN_004acd30(puVar1,'\r');
      if ((iVar4 < (local_c - iVar3) + -1) || ((this_00->field_01F1 & 0x2000) != 0))
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
  case 0x40:
  case 0x49:
    if (this_00->field_04D0 == 1) {
      thunk_FUN_004ac6b0(&this_00->field_01D5,'\x0e');
      thunk_FUN_004ac6b0(&this_00->field_01D5,'\t');
      break;
    }
  default:
    thunk_FUN_004ac660(&this_00->field_01D5,'\x0e');
    thunk_FUN_004ac660(&this_00->field_01D5,'\t');
    break;
  case 0x52:
  case 0x5f:
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


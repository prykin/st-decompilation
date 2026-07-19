
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sedit.cpp
   EditorClassTy::SendToSliders */

int __thiscall EditorClassTy::SendToSliders(EditorClassTy *this,int *param_1)

{
  code *pcVar1;
  EditorClassTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar4;
  InternalExceptionFrame local_6c;
  int local_28 [8];
  EditorClassTy *local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1[3] & 0xffffffU) == 2) {
      piVar4 = local_28;
      for (iVar2 = 8; this_00 = local_8, iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *param_1;
        param_1 = param_1 + 1;
        piVar4 = piVar4 + 1;
      }
      local_28[2] = local_8->field_01FC;
      if (local_28[2] != 0) {
        FUN_006e6060(local_8,local_28);
      }
      local_28[2] = this_00->field_0200;
      if (local_28[2] != 0) {
        FUN_006e6060(this_00,local_28);
      }
    }
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar3 = ReportDebugMessage(s_E__Ourlib__sedit_cpp_007f0b08,0x193,0,iVar2,&DAT_007a4ccc,
                             s_EditorClassTy__SendToSliders_err_007f0b40);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib__sedit_cpp_007f0b08,0x194);
  return iVar2;
}



/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::DecodeMessage */

int __thiscall
AppClassTy::DecodeMessage(AppClassTy *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  AppClassTy *this_00;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_6c;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  AppClassTy *local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_0014 != 0) {
      *(undefined4 *)(local_8->field_0014 + 4) = 0;
      while( true ) {
        iVar3 = this_00->field_0014;
        uVar1 = *(uint *)(iVar3 + 4);
        if (uVar1 < *(uint *)(iVar3 + 0xc)) {
          piVar4 = (int *)(*(int *)(iVar3 + 8) * uVar1 + *(int *)(iVar3 + 0x1c));
          *(uint *)(iVar3 + 4) = uVar1 + 1;
        }
        else {
          piVar4 = (int *)0x0;
        }
        if (piVar4 == (int *)0x0) break;
        if (*piVar4 == param_1) {
          local_24 = 1;
          local_28 = DAT_00856d6c;
          local_18 = piVar4[1];
          local_14 = param_2;
          local_10 = param_3;
          SendMessage(this_00,piVar4[2],piVar4[3],(int)&local_28);
        }
      }
    }
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x178,0,iVar3,&DAT_007a4ccc,
                             s_AppClassTy__DecodeMessage_Error___007ee94c);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x179);
  return iVar3;
}


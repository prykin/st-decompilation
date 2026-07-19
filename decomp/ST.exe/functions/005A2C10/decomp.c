
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChangePlayerPing */

void __thiscall
FSGSTy::ChangePlayerPing(FSGSTy *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  if (((this->field_1A5F == '\x06') && (this->field_1A60 == '\0')) && (this->field_1EA6 != 0)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar5 = 0;
      iVar3 = local_8->field_1EA6;
      uVar1 = *(uint *)(iVar3 + 0xc);
      if (uVar1 != 0) {
        if (uVar1 == 0) {
          iVar4 = 0;
          goto LAB_005a2c91;
        }
        do {
          iVar4 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
LAB_005a2c91:
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x21) == param_2)) {
            *(undefined4 *)(iVar4 + 0x29) = param_3;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      *(undefined4 *)&local_8->field_0x2d = 5;
      FUN_006e6080(local_8,2,*(undefined4 *)&local_8->field_0x1b20,
                   (undefined4 *)&local_8->field_0x1d);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa60,0,iVar3,&DAT_007a4ccc
                               ,s_FSGSTy__ChangePlayerPing_007cc500);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa60);
  }
  return;
}


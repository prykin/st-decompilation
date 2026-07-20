
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChangePlayerPing */

void __thiscall
FSGSTy::ChangePlayerPing(FSGSTy *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  code *pcVar3;
  int errorCode;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  if (((this->field_1A5F == CASE_6) && (this->field_1A60 == '\0')) &&
     (this->field_1EA6 != (DArrayTy *)0x0)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (errorCode == 0) {
      uVar6 = 0;
      pDVar1 = local_8->field_1EA6;
      uVar2 = pDVar1->count;
      if (uVar2 != 0) {
        if (uVar2 == 0) {
          pvVar4 = (void *)0x0;
          goto LAB_005a2c91;
        }
        do {
          pvVar4 = (void *)(pDVar1->elementSize * uVar6 + (int)pDVar1->data);
LAB_005a2c91:
          if ((pvVar4 != (void *)0x0) && (*(int *)((int)pvVar4 + 0x21) == param_2)) {
            *(undefined4 *)((int)pvVar4 + 0x29) = param_3;
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      local_8->field_002D = 5;
      FUN_006e6080(local_8,2,local_8->field_1B20,(undefined4 *)&local_8->field_0x1d);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa60,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__ChangePlayerPing_007cc500);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa60);
  }
  return;
}


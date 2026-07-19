
/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::GetMessage */

undefined4 __thiscall MAdvTy::GetMessage(MAdvTy *this,int param_1)

{
  code *pcVar1;
  MAdvTy *pMVar2;
  undefined4 uVar3;
  int errorCode;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;
  
  local_8 = this;
  uVar3 = FUN_006e51b0(this->field_0010);
  this->field_0058 = uVar3;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar2 = local_8;
  if (errorCode == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      NoneMAdv(local_8);
      break;
    case 2:
      local_8->field_005D = *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14);
      InitMAdv(local_8);
      break;
    case 3:
      DoneMAdv(local_8);
      break;
    case 5:
      PaintMAdv(local_8);
      break;
    case 0x62:
    case 100:
      thunk_FUN_00590860(local_8);
      if (pMVar2->field_005D == '\0') {
        pMVar2->field_0040 = 0x200;
        pMVar2->field_0044 = 0;
        pMVar2->field_0048 = 0x6102;
      }
      else {
        pMVar2->field_0044 = 1;
        pMVar2->field_0048 = 0x7102;
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    uVar3 = FUN_006e5fd0();
    return uVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_adv_obj_cpp_007cbc24,0x87,0,errorCode,&DAT_007a4ccc
                             ,s_MAdvTy__GetMessage_007cbca0);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_adv_obj_cpp_007cbc24,0x87);
  return 0xffff;
}


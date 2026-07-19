
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   SystemClassTy::GetToAllObjects */

int __thiscall SystemClassTy::GetToAllObjects(SystemClassTy *this,undefined4 param_1)

{
  void **ppvVar1;
  code *pcVar2;
  SystemClassTy *pSVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  int local_10;
  uint local_c;
  SystemClassTy *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    FUN_006b98c0((int *)&local_8->objectLock,&local_10);
    iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x473,0,iVar4,&DAT_007a4ccc,
                               s_SystemClassTy__GetToAllObjects_E_007eeb90);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x474);
    return iVar4;
  }
  ppvVar1 = &local_8->objectLock;
  FUN_006b9910(ppvVar1,&local_10);
  pvVar6 = pSVar3->objects;
  local_c = 0;
  if (*(int *)((int)pvVar6 + 0xc) != 0) {
    if (*(int *)((int)pvVar6 + 0xc) == 0) {
      iVar4 = 0;
      goto LAB_006e5cd8;
    }
    do {
      iVar4 = *(int *)((int)pvVar6 + 8) * local_c + *(int *)((int)pvVar6 + 0x1c);
LAB_006e5cd8:
      iVar4 = (**(code **)**(undefined4 **)(iVar4 + 4))(param_1);
      if (iVar4 == 0xffff) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x46b);
      }
      pvVar6 = pSVar3->objects;
      local_c = local_c + 1;
    } while (local_c < *(uint *)((int)pvVar6 + 0xc));
  }
  FUN_006b98c0((int *)ppvVar1,&local_10);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}


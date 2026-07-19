
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   SystemClassTy::FindFirstObject */

int __thiscall SystemClassTy::FindFirstObject(SystemClassTy *this,int param_1,int *param_2)

{
  void **ppvVar1;
  void *pvVar2;
  code *pcVar3;
  SystemClassTy *pSVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  int local_14;
  uint local_10;
  SystemClassTy *local_c;
  int local_8;
  
  local_8 = -4;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;
    FUN_006b98c0((int *)&local_c->objectLock,&local_14);
    iVar6 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x3a2,0,iVar5,&DAT_007a4ccc,
                               s_SystemClassTy__FindFirstObject_E_007eeaa0);
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x3a3);
      return iVar5;
    }
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  ppvVar1 = &local_c->objectLock;
  FUN_006b9910(ppvVar1,&local_14);
  pvVar2 = pSVar4->objects;
  local_10 = 0;
  if (*(int *)((int)pvVar2 + 0xc) != 0) {
    if (*(int *)((int)pvVar2 + 0xc) == 0) {
      iVar5 = 0;
      goto LAB_006e540d;
    }
    do {
      iVar5 = *(int *)((int)pvVar2 + 8) * local_10 + *(int *)((int)pvVar2 + 0x1c);
LAB_006e540d:
      if (*(int *)(*(int *)(iVar5 + 4) + 4) == param_1) {
        if (param_2 != (int *)0x0) {
          *param_2 = *(int *)(iVar5 + 4);
        }
        local_8 = 0;
        break;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(uint *)((int)pvVar2 + 0xc));
  }
  FUN_006b98c0((int *)ppvVar1,&local_14);
  g_currentExceptionFrame = local_58.previous;
  return local_8;
}


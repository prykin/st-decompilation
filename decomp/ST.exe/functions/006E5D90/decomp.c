
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   SystemClassTy::Life */

int __thiscall SystemClassTy::Life(SystemClassTy *this)

{
  code *pcVar1;
  SystemClassTy *this_00;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  bool bVar7;
  InternalExceptionFrame local_70;
  undefined4 local_2c [4];
  undefined4 local_1c;
  SystemClassTy *local_c;
  int local_8;
  
  local_8 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x495,0,iVar2,&DAT_007a4ccc,
                               s_SystemClassTy__Life_Error___007eebb8);
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x496);
      return iVar2;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pvVar3 = local_c->nextMessages;
  bVar7 = false;
  iVar2 = local_8;
  if (*(int *)((int)pvVar3 + 0xc) != 0) {
    do {
      if (bVar7) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)((int)pvVar3 + 0x1c);
      }
      iVar2 = (*this_00->vtable[6])(uVar5);
      local_8 = iVar2;
      if (iVar2 == 0xffff) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x484);
      }
      FUN_006b0c70((int)this_00->nextMessages,0);
      pvVar3 = this_00->nextMessages;
      bVar7 = *(int *)((int)pvVar3 + 0xc) == 0;
    } while (!bVar7);
  }
  puVar6 = local_2c;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_1c = 0;
  iVar4 = GetToAllObjects(this_00,local_2c);
  if (iVar4 == 0xffff) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x48a);
  }
  if (iVar2 == 0) {
    pvVar3 = this_00->messages;
    iVar4 = *(int *)((int)pvVar3 + 0xc);
    while (iVar4 != 0) {
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)((int)pvVar3 + 0x1c);
      }
      iVar2 = (*this_00->vtable[6])(uVar5);
      if (iVar2 == 0xffff) {
        g_currentExceptionFrame = local_70.previous;
        return 0xffff;
      }
      local_8 = iVar2;
      FUN_006b0c70((int)this_00->messages,0);
      pvVar3 = this_00->messages;
      iVar4 = *(int *)((int)pvVar3 + 0xc);
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return iVar2;
}


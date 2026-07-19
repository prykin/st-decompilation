
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   SystemClassTy::SendMessage */

int __thiscall SystemClassTy::SendMessage(SystemClassTy *this,uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  SystemClassTy *pSVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  byte *pbVar6;
  void **ppvVar7;
  undefined4 unaff_ESI;
  uint uVar8;
  void *unaff_EDI;
  InternalExceptionFrame local_a8;
  InternalExceptionFrame local_64;
  void **local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  SystemClassTy *local_c;
  int local_8;
  
  local_8 = -1;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x45c,0,iVar3,&DAT_007a4ccc,
                               s_SystemClassTy__SendMessage_Error_007eeb6c);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x45d);
    return iVar3;
  }
  *(uint *)(param_3 + 0xc) = param_1;
  *(int *)(param_3 + 8) = param_2;
  switch(param_1 & 0xffffff) {
  case 0:
    iVar3 = (*local_c->vtable[8])(param_3);
    break;
  case 1:
    iVar3 = (**(code **)(*(int *)local_c->app + 0x18))(param_3);
    break;
  case 2:
    iVar3 = FUN_006e5360(local_c,param_2,(int *)0x0,&local_10);
    if ((iVar3 != 0) ||
       (((*(uint *)(param_3 + 0xc) & 0x80000000) == 0 &&
        (iVar3 = FUN_006e4d40(pSVar2->app,(int)pSVar2), iVar3 != 1))))
    goto switchD_006e59d5_caseD_4;
    iVar3 = (**(code **)*local_10)(param_3);
    break;
  case 3:
    local_8 = 0;
    iVar3 = FUN_006e4d40(local_c->app,(int)local_c);
    if (((*(uint *)(param_3 + 0xc) & 0x80000000) != 0) || (local_1c = 0, iVar3 == 1)) {
      local_1c = 1;
    }
    local_a8.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a8;
    iVar3 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar2 = local_c;
    if (iVar3 == 0) {
      ppvVar7 = &local_c->objectLock;
      local_20 = ppvVar7;
      FUN_006b9910(ppvVar7,&local_18);
      pvVar4 = pSVar2->objects;
      local_14 = 0;
      uVar8 = *(uint *)((int)pvVar4 + 0xc);
      if (uVar8 != 0) {
        if (uVar8 == 0) {
          iVar3 = 0;
          goto LAB_006e5ace;
        }
        do {
          iVar3 = *(int *)((int)pvVar4 + 8) * local_14 + *(int *)((int)pvVar4 + 0x1c);
LAB_006e5ace:
          if ((*(int *)(*(int *)(iVar3 + 4) + 4) == param_2) && (local_1c != 0)) {
            if (local_14 < uVar8) {
              iVar3 = *(int *)((int)pvVar4 + 8) * local_14 + *(int *)((int)pvVar4 + 0x1c);
            }
            else {
              iVar3 = 0;
            }
            iVar3 = (**(code **)**(undefined4 **)(iVar3 + 4))(param_3);
            if (iVar3 == 0xffff) {
              RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x441);
            }
            pvVar4 = pSVar2->objects;
            if (local_14 < *(uint *)((int)pvVar4 + 0xc)) {
              pbVar6 = (byte *)(*(int *)((int)pvVar4 + 8) * local_14 + *(int *)((int)pvVar4 + 0x1c))
              ;
            }
            else {
              pbVar6 = (byte *)0x0;
            }
            ppvVar7 = local_20;
            if ((*pbVar6 & 1) != 0) break;
          }
          local_14 = local_14 + 1;
          uVar8 = *(uint *)((int)pvVar4 + 0xc);
          ppvVar7 = local_20;
        } while (local_14 < uVar8);
      }
      FUN_006b98c0((int *)ppvVar7,&local_18);
      g_currentExceptionFrame = local_a8.previous;
    }
    else {
      g_currentExceptionFrame = local_a8.previous;
      FUN_006b98c0((int *)&local_c->objectLock,&local_18);
      RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,1099);
    }
  default:
    goto switchD_006e59d5_caseD_4;
  case 0xf:
    local_8 = 0;
    iVar3 = (*local_c->vtable[8])(param_3);
    if (iVar3 != 0) {
      local_8 = iVar3;
    }
    iVar3 = AppClassTy::SendMessageToAllChild(pSVar2->app,pSVar2->systemId,param_3);
    if (iVar3 != 0) {
      local_8 = iVar3;
    }
    iVar3 = GetToAllObjects(pSVar2,param_3);
    if (iVar3 == 0) goto switchD_006e59d5_caseD_4;
  }
  local_8 = iVar3;
switchD_006e59d5_caseD_4:
  iVar3 = local_8;
  if (local_8 == 0xffff) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x45a);
  }
  g_currentExceptionFrame = local_64.previous;
  return iVar3;
}



/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::SendMessageToAllSystemsInArr */

int __thiscall AppClassTy::SendMessageToAllSystemsInArr(AppClassTy *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  AppClassTy *local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0xdf,0,iVar4,&DAT_007a4ccc,
                               s_AppClassTy__SendMessageToAllSyst_007ee8a4);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib_Sapp_cpp_007ee78c,0xe0);
    return iVar4;
  }
  local_c = *(uint *)(param_1 + 0xc);
  uVar7 = 0;
  if (0 < (int)local_c) {
    do {
      if ((*(uint *)(param_2 + 0xc) & 0x80000000) == 0) {
        if (uVar7 < local_c) {
          piVar5 = (int *)(*(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c));
        }
        else {
          piVar5 = (int *)0x0;
        }
        if (*piVar5 == 1) goto LAB_006e3c65;
      }
      else {
LAB_006e3c65:
        if (uVar7 < local_c) {
          iVar4 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        iVar4 = (**(code **)(**(int **)(iVar4 + 4) + 0x20))(param_2);
        local_8 = iVar4;
        if (iVar4 != 0) {
          RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0xca);
        }
        uVar1 = *(uint *)(param_1 + 0xc);
        if ((uVar1 < local_c) && (uVar7 = uVar7 + (uVar1 - local_c), (int)uVar7 < 0)) {
          g_currentExceptionFrame = local_54.previous;
          return iVar4;
        }
        if (uVar7 < uVar1) {
          iVar4 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        SystemClassTy::GetToAllObjects(*(SystemClassTy **)(iVar4 + 4),param_2);
        uVar2 = *(uint *)(param_1 + 0xc);
        if ((uVar2 < uVar1) && (uVar7 = uVar7 + (uVar2 - uVar1), (int)uVar7 < 0)) {
          g_currentExceptionFrame = local_54.previous;
          return local_8;
        }
        if (uVar7 < uVar2) {
          iVar4 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        if (*(int *)(iVar4 + 8) != 0) {
          if (uVar7 < uVar2) {
            iVar4 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
          }
          else {
            iVar4 = 0;
          }
          local_8 = SendMessageToAllSystemsInArr(local_10,*(int *)(iVar4 + 8),param_2);
          if (local_8 != 0) {
            RaiseInternalException(local_8,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0xd9);
          }
        }
      }
      local_c = *(uint *)(param_1 + 0xc);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return local_8;
}


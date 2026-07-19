
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::LifeToAllSystem */

int __thiscall AppClassTy::LifeToAllSystem(AppClassTy *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  AppClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x297,0,iVar3,&DAT_007a4ccc,
                               s_AppClassTy__LifeToAllSystem_Erro_007eea3c);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x298);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar7 = 0;
  if (0 < (int)uVar6) {
    do {
      if (uVar7 < uVar6) {
        piVar4 = (int *)(*(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c));
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (*piVar4 == 1) {
        if (uVar7 < uVar6) {
          iVar3 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x1c))();
        if (iVar3 != 0) {
          RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x28d);
        }
        uVar1 = *(uint *)(param_1 + 0xc);
        if (((int)uVar1 < (int)uVar6) && (uVar7 = uVar7 + (uVar1 - uVar6), (int)uVar7 < 0)) {
          g_currentExceptionFrame = local_4c.previous;
          return 0;
        }
        if (uVar7 < uVar1) {
          iVar3 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (*(int *)(iVar3 + 8) != 0) {
          if (uVar7 < uVar1) {
            iVar3 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          iVar3 = LifeToAllSystem(local_8,*(int *)(iVar3 + 8));
          if (iVar3 != 0) {
            RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x293);
          }
        }
      }
      uVar6 = *(uint *)(param_1 + 0xc);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar6);
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}


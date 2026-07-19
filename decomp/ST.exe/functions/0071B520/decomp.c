
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sinput.cpp
   InputClassTy::Done */

int __thiscall InputClassTy::Done(InputClassTy *this)

{
  int *piVar1;
  code *pcVar2;
  InputClassTy *pIVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  InputClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pIVar3 = local_8;
  if (iVar4 == 0) {
    if (*(byte **)(local_8 + 0x28) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_8 + 0x28));
      *(undefined4 *)(pIVar3 + 0x28) = 0;
    }
    FUN_006e4340(*(void **)(pIVar3 + 0x10),6,4,2,*(undefined4 *)(pIVar3 + 8));
    if (*(int *)(pIVar3 + 0x60) != 0) {
      (**(code **)(**(int **)(pIVar3 + 0x1c) + 0x20))(*(int **)(pIVar3 + 0x1c));
    }
    piVar1 = *(int **)(pIVar3 + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(pIVar3 + 0x1c) = 0;
    }
    if (*(int *)(pIVar3 + 100) != 0) {
      (**(code **)(**(int **)(pIVar3 + 0x20) + 0x20))(*(int **)(pIVar3 + 0x20));
    }
    piVar1 = *(int **)(pIVar3 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(pIVar3 + 0x20) = 0;
    }
    piVar1 = *(int **)(pIVar3 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(pIVar3 + 0x18) = 0;
    }
    if (*(byte **)(pIVar3 + 0x24) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pIVar3 + 0x24));
      *(undefined4 *)(pIVar3 + 0x24) = 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E__Ourlib_Sinput_cpp_007f092c,0x69,0,iVar4,&DAT_007a4ccc,
                             s_InputClassTy__Done_007f0944);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  RaiseInternalException(iVar4,0,s_E__Ourlib_Sinput_cpp_007f092c,0x6a);
  return iVar4;
}


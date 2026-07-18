
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
  undefined4 local_4c;
  undefined4 local_48 [16];
  InputClassTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
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
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar5 = FUN_006ad4d0(s_E__Ourlib_Sinput_cpp_007f092c,0x69,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  FUN_006a5e40(iVar4,0,0x7f092c,0x6a);
  return iVar4;
}


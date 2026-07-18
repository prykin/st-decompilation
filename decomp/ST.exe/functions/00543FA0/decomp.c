
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::CursDrawInit */

void __thiscall
CursorClassTy::CursDrawInit(CursorClassTy *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  CursorClassTy *local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xd8,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c7d60,0xd9);
    return;
  }
  if (*(int *)(local_8 + 0xa9) != 0) {
    FUN_006b5f80(DAT_008075a8,param_1,param_2,param_3,param_4);
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  FUN_006b8d50(*(int **)(local_8 + 0xad),param_1,param_2,param_3,param_4);
  DAT_00858df8 = (undefined1 *)uVar4;
  return;
}


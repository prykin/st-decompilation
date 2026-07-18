
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::OutProc */

void __thiscall
CPanelTy::OutProc(CPanelTy *this,uint param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,BITMAPINFO *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_44 [16];
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar2 = __setjmp3(local_44,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    FUN_006b4640(param_1,param_4,param_5,param_8,(uint *)0x0);
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0xf,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c1a4c,0xf);
  return;
}


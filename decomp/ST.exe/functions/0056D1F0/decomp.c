
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::CommonFunction */

undefined4 __thiscall STAppC::CommonFunction(STAppC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined4 local_48 [16];
  STAppC *local_8;
  
  uVar4 = DAT_00858df8;
  if (*(int *)(this + 0x4efa) != 0) {
    return 0;
  }
  DAT_00858df8 = &stack0xffffffb4;
  local_8 = this;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    if (DAT_0080674c == 0) {
      FUN_006bd740(DAT_008075a8);
      DAT_00858df8 = (undefined1 *)uVar4;
      return 0;
    }
    if ((*(int *)(local_8 + 0x4ef6) != 0) && (DAT_0080673c = DAT_0080673c + -1, DAT_0080673c < 1)) {
      DAT_0080673c = *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10);
      if ((DAT_00802a30 != 0) && (*(int *)(DAT_00802a30 + 0xa9) == 0)) {
        FUN_006b8d50(*(int **)(DAT_00802a30 + 0xad),0,0,0,0);
      }
      FUN_006ed100(DAT_00807598);
      FUN_006bd740(DAT_008075a8);
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x3e6,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7ca0c8,999);
  return 0xffffffff;
}


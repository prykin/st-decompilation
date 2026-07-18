
void __thiscall FUN_004d67b0(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  void *local_8;
  
  local_8 = this;
  iVar2 = (**(code **)(*(int *)this + 0xf8))();
  uVar4 = DAT_00858df8;
  if (iVar2 != 0) {
    DAT_00858df8 = &stack0xffffffb4;
    iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
    if (iVar2 == 0) {
      thunk_FUN_0041dd00(local_8,param_1);
      DAT_00858df8 = (undefined1 *)uVar4;
      return;
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x52d,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7bf4bc,0x52e);
  }
  return;
}


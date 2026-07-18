
undefined4 __thiscall thunk_FUN_0053e920(void *this,char param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  uVar4 = DAT_00858df8;
  if (*(char *)((int)this + 0x184) == param_1) {
    return 0;
  }
  DAT_00858df8 = &stack0xffffffb4;
  piStack_8 = this;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    *(char *)(piStack_8 + 0x61) = param_1;
    if (param_1 == '\0') {
      if ((DAT_00801688 != (void *)0x0) && (*(short *)((int)DAT_00801688 + 0x23f) == 1)) {
        thunk_FUN_004fa570(DAT_00801688,piStack_8[0x60],1);
      }
      iVar2 = 0;
    }
    else {
      (**(code **)(*piStack_8 + 0x20))();
      iVar2 = 1;
    }
    thunk_FUN_0053e760(iVar2);
    DAT_00858df8 = (undefined1 *)uVar4;
    return 1;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x124,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_006a5e40(iVar2,0,0x7c7870,0x124);
  return 1;
}


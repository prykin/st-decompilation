
void thunk_FUN_005a0ff0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  void *this;
  int iVar4;
  int iVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 auStack_58 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  int *piStack_8;
  
  uVar6 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffa4;
  iVar4 = __setjmp3(auStack_58,0,unaff_ESI,uVar6);
  this = DAT_00802a30;
  if (iVar4 == 0) {
    if (DAT_00802a30 != (void *)0x0) {
      uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
      uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
      *(undefined2 *)((int)this + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,uVar2,uVar1);
      thunk_FUN_00543c90(this,*(int *)((int)this + 0xc5),*(int *)((int)this + 0xc9));
      *(undefined1 *)((int)this + 0xd2) = 0;
      *(undefined4 *)((int)this + 0x4df) = 0xffffffff;
    }
    (**(code **)(*piStack_8 + 8))();
    *(undefined1 *)((int)piStack_8 + 0x1a61) = 2;
    if (*(int *)(*(int *)((int)piStack_8 + 0x1a5b) + 0x2e6) != 0) {
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      thunk_FUN_005b8f40(*(void **)(*(int *)((int)piStack_8 + 0x1a5b) + 0x2e6),&uStack_18);
    }
    DAT_00858df8 = (undefined1 *)uVar6;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x918,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7cbf70,0x918);
  return;
}


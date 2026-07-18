
void thunk_FUN_005a32f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  void *unaff_ESI;
  undefined4 uVar8;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  uVar8 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar6 = __setjmp3(auStack_48,0,unaff_ESI,uVar8);
  pvVar4 = DAT_00802a30;
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined1 *)uVar8;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xab9,0,iVar6,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar6,0,0x7cbf70,0xab9);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (DAT_00802a30 != (void *)0x0) {
    uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
    uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
    *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
    *(undefined2 *)((int)pvVar4 + 0x494) = 0xffff;
    thunk_FUN_0054bf40(0,uVar2,uVar1);
    thunk_FUN_00543c90(pvVar4,*(int *)((int)pvVar4 + 0xc5),*(int *)((int)pvVar4 + 0xc9));
    *(undefined1 *)((int)pvVar4 + 0xd2) = 0;
    *(undefined4 *)((int)pvVar4 + 0x4df) = 0xffffffff;
  }
  if (param_1 != 0) {
    pvVar4 = *(void **)(*(int *)((int)piStack_8 + 0x1a5b) + 0x2e6);
    if (pvVar4 == (void *)0x0) {
      DAT_00858df8 = (undefined1 *)uVar8;
      return;
    }
    thunk_FUN_005b7ef0(pvVar4,0x2594,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0)
    ;
    DAT_00858df8 = (undefined1 *)uVar8;
    return;
  }
  DAT_0080877f = *(undefined4 *)(DAT_00811764 + 0x38);
  DAT_0080877e = 1;
  *(undefined1 *)((int)piStack_8 + 0x1a61) = 0;
  DAT_008067a0 = 1;
  uVar3 = *(uint *)((int)piStack_8 + 0x1ec2);
  if (uVar3 < 0x502) {
    if (uVar3 == 0x501) {
      DAT_00803400 = 5;
      goto LAB_005a33fb;
    }
    if (uVar3 == 0x200) {
      DAT_00803400 = 0x14;
      goto LAB_005a33fb;
    }
    if (uVar3 == 0x400) {
      DAT_00803400 = 0x15;
      goto LAB_005a33fb;
    }
  }
  else if (uVar3 == 0x502) {
    DAT_00803400 = 0xc;
    goto LAB_005a33fb;
  }
  DAT_00803400 = 4;
LAB_005a33fb:
  thunk_FUN_005b6350(piStack_8,0x611f,0x13,0);
  (**(code **)(*piStack_8 + 8))();
  pvVar4 = *(void **)(*(int *)((int)piStack_8 + 0x1a5b) + 0x2e6);
  if (pvVar4 == (void *)0x0) {
    DAT_00858df8 = (undefined1 *)uVar8;
    return;
  }
  thunk_FUN_005b8c70(pvVar4,1,0,1);
  DAT_00858df8 = (undefined1 *)uVar8;
  return;
}


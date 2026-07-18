
void thunk_FUN_005ba560(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  void *this;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint *puVar6;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    thunk_FUN_005b6220();
    this = DAT_00802a30;
    if (DAT_00802a30 != (void *)0x0) {
      uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
      uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
      *(undefined2 *)((int)this + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,uVar2,uVar1);
      thunk_FUN_00543c90(this,*(int *)((int)this + 0xc5),*(int *)((int)this + 0xc9));
      *(undefined1 *)((int)this + 0xd2) = 0;
      *(undefined4 *)((int)this + 0x4df) = 0xffffffff;
      if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
      }
      else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
      }
    }
    if (*(int *)(iStack_8 + 0x4d) == 0x6102) {
      thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    }
    if (*(int *)(DAT_0081176c + 0x2c) != 0) {
      FUN_006f20e0((uint *)(DAT_0081176c + 0x2c));
    }
    FUN_00715ab0();
    FUN_00715ab0();
    FUN_00715ab0();
    puVar6 = (uint *)(iStack_8 + 0x1c2a);
    iVar4 = 0x16;
    do {
      if (*puVar6 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,*puVar6);
        *puVar6 = 0xffffffff;
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(uint *)(iStack_8 + 0x1c8a) != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(iStack_8 + 0x1c8a));
    }
    *(undefined4 *)(iStack_8 + 0x1c8a) = 0xffffffff;
    if (*(int *)(iStack_8 + 0x1c82) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0x1c82));
    }
    if (*(int *)(iStack_8 + 0x1c8e) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0x1c8e));
    }
    if (*(int *)(iStack_8 + 0x1c96) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1c96));
      *(undefined4 *)(iStack_8 + 0x1c96) = 0;
    }
    if (*(int *)(iStack_8 + 0x1c9a) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(iStack_8 + 0x1c9a));
      *(undefined4 *)(iStack_8 + 0x1c9a) = 0;
    }
    if ((*(int *)(iStack_8 + 0x4d) == 0x6102) &&
       (*(int *)(*(int *)(iStack_8 + 0x1a5b) + 0x2e6) != 0)) {
      thunk_FUN_005b6ff0();
      *(undefined4 *)(*(int *)(*(int *)(iStack_8 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    if (*(int *)(iStack_8 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(iStack_8 + 0x3d));
    }
    thunk_FUN_005dab30(DAT_0081176c);
    if (*(byte **)(iStack_8 + 0x1c92) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(iStack_8 + 0x1c92));
    }
    *(undefined4 *)(iStack_8 + 0x1c92) = 0;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_prov_obj_cpp_007ccd28,0xd3,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7ccd28,0xd3);
  return;
}



void thunk_FUN_005d7f80(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    thunk_FUN_005b6220();
    if (*(byte **)(iStack_8 + 0x1cd0) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(iStack_8 + 0x1cd0));
    }
    *(undefined4 *)(iStack_8 + 0x1cd0) = 0;
    if (*(byte **)(iStack_8 + 0x1ccc) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(iStack_8 + 0x1ccc));
    }
    *(undefined4 *)(iStack_8 + 0x1ccc) = 0;
    FUN_00715ab0();
    FUN_00715ab0();
    FUN_00715ab0();
    FUN_00715ab0();
    if (*(uint *)(iStack_8 + 0x1cb4) != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(iStack_8 + 0x1cb4));
    }
    *(undefined4 *)(iStack_8 + 0x1cb4) = 0xffffffff;
    if (*(int *)(iStack_8 + 0x1cb8) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0x1cb8));
    }
    if (*(int *)(iStack_8 + 0x1cc8) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0x1cc8));
    }
    if (*(int *)(iStack_8 + 0x1cbc) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0x1cbc));
    }
    if (*(int *)(iStack_8 + 0x1cc0) != 0) {
      FUN_006ab060((undefined4 *)(iStack_8 + 0x1cc0));
    }
    if (*(int *)(iStack_8 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(iStack_8 + 0x3d));
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x62,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd5c4,0x62);
  return;
}


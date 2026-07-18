
void thunk_FUN_0068ea40(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  if (iVar2 == 0) {
    if ((*(int *)(iStack_8 + 0x130) != 0) && (*(byte **)(iStack_8 + 0xbd) != (byte *)0x0)) {
      FUN_006ae110(*(byte **)(iStack_8 + 0xbd));
      uVar3 = FUN_006b0060((uint *)0x0,*(uint **)(iStack_8 + 0x130));
      *(undefined4 *)(iStack_8 + 0xbd) = uVar3;
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x17b,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7d56e0,0x17c);
  return;
}


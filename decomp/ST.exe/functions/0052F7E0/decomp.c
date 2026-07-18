
void FUN_0052f7e0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_48 [16];
  void *local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    if ((*(short *)((int)local_8 + 0x172) == 1) || (*(short *)((int)local_8 + 0x172) == 3)) {
      *(undefined1 *)((int)local_8 + 0x1aa) = 0;
      *(undefined1 *)((int)local_8 + 0x1a9) = 0;
      *(undefined1 *)((int)local_8 + 0x1a4) = 1;
      thunk_FUN_0052fb00();
      if (*(short *)((int)local_8 + 0x172) == 1) {
        thunk_FUN_0052f900(local_8,0);
      }
      *(undefined2 *)((int)local_8 + 0x172) = 4;
      thunk_FUN_005252c0(0xb0);
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x139,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c70a0,0x139);
  return;
}


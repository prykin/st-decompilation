
undefined4 thunk_FUN_004ac410(byte param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x10e,0,iVar2,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return 0xffffffff;
  }
  if (*(int *)(iStack_8 + 0x18) == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xff);
  }
  if (((char)param_1 < '\0') || (*(int *)(iStack_8 + 0x14) + -1 < (int)(char)param_1)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x100);
  }
  uVar4 = 1 << (param_1 & 0x1f);
  if ((uVar4 & *(uint *)(iStack_8 + 0x1c)) == 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return 0;
  }
  FUN_006e9d40(*(void **)(iStack_8 + 0x3c),*(uint **)(iStack_8 + 0x18),(int)(char)param_1);
  *(uint *)(iStack_8 + 0x1c) = *(uint *)(iStack_8 + 0x1c) & ~uVar4;
  if (param_1 == 0xe) {
    if (*(char *)(iStack_8 + 0x11) == '\x01') {
      thunk_FUN_004ad5e0(iStack_8);
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return 0;
    }
    thunk_FUN_004ad5e0(iStack_8);
    *(undefined1 *)(iStack_8 + 0x11) = 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return 0;
}


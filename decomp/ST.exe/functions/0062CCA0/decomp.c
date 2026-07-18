
undefined4 FUN_0062cca0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined4 local_54 [16];
  byte *local_14;
  uint local_10;
  void *local_c;
  ushort *local_8;
  
  uVar4 = DAT_00858df8;
  local_8 = (ushort *)0x0;
  DAT_00858df8 = &stack0xffffffa8;
  iVar2 = __setjmp3(local_54,0,unaff_ESI,uVar4);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_nick_to_rab3m_cpp_007d13ec,0x4e,0,iVar2,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_006a5e40(iVar2,0,0x7d13ec,0x50);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 2) {
    if (DAT_00806754 != 0) {
      local_8 = FUN_006f2d90(DAT_00806754,PTR_s_RUBBISH_3_0079d080,0,0);
    }
    if ((local_8 == (ushort *)0x0) || (*(int *)(local_8 + 6) != 2)) {
      *(undefined4 *)((int)local_c + 0x1c) = 0;
      *(undefined4 *)((int)local_c + 0x28) = 1;
      *(undefined4 *)((int)local_c + 0x24) = 1;
      *(undefined4 *)((int)local_c + 0x20) = 0xff;
      *(undefined4 *)((int)local_c + 0xb4) = DAT_00808754;
    }
    else {
      thunk_FUN_0062d840(local_c,(undefined4 *)local_8);
    }
    if ((local_8 != (ushort *)0x0) && (DAT_00806754 != 0)) {
      FUN_006f20e0((uint *)&local_8);
    }
  }
  else {
    if (iVar2 == 3) {
      thunk_FUN_0062cf50((int)local_c);
      thunk_FUN_0062dd40((int)local_c);
      thunk_FUN_0062e130((int)local_c);
      DAT_008117a4 = 0;
      DAT_00858df8 = (undefined1 *)uVar4;
      return 0;
    }
    if (iVar2 == 0x10f) {
      local_14 = (byte *)thunk_FUN_0062d670(local_c,&local_10);
      thunk_FUN_0054d550(DAT_00802a38,PTR_s_RUBBISH_3_0079d080,local_14,local_10,0xc);
      FUN_006ab060(&local_14);
      DAT_00858df8 = (undefined1 *)uVar4;
      return 0;
    }
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  return 0;
}


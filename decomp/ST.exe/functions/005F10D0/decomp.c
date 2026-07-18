
undefined4 FUN_005f10d0(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  undefined4 local_54 [16];
  byte *local_14;
  uint local_10;
  void *local_c;
  ushort *local_8;
  
  uVar5 = DAT_00858df8;
  local_8 = (ushort *)0x0;
  DAT_00858df8 = &stack0xffffffa8;
  iVar3 = __setjmp3(local_54,0,unaff_ESI,uVar5);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined1 *)uVar5;
    iVar4 = FUN_006ad4d0(s_E____titans_nick_to_basis_cpp_007ce560,0x5b,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7ce560,0x5d);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      thunk_FUN_005f2330((int)local_c);
      DAT_00858df8 = (undefined1 *)uVar5;
      return 0;
    }
    if (uVar1 == 0) {
      thunk_FUN_005f19a0(local_c);
      DAT_00858df8 = (undefined1 *)uVar5;
      return 0;
    }
    if (uVar1 == 2) {
      *(int *)((int)local_c + 0x1c) = *(int *)((int)local_c + 0x18) * DAT_00808754;
      if (DAT_00806754 != 0) {
        local_8 = FUN_006f2d90(DAT_00806754,PTR_s_BASIS_MAN_0079c57c,0,0);
      }
      if (local_8 == (ushort *)0x0) {
        *(undefined4 *)((int)local_c + 0x20) = 0;
        *(undefined4 *)((int)local_c + 0x24) = 0xff;
        *(undefined4 *)((int)local_c + 0x28) = 1;
        *(undefined4 *)((int)local_c + 0x2c) = 1;
      }
      else if (*(int *)(local_8 + 6) == 2) {
        thunk_FUN_005f2110(local_c,(undefined4 *)local_8);
        *(undefined4 *)((int)local_c + 0x1c) = *(undefined4 *)((int)local_c + 0x44);
        thunk_FUN_005f21d0((int)local_c);
      }
      else {
        thunk_FUN_005f1380(local_c);
      }
      if ((local_8 != (ushort *)0x0) && (DAT_00806754 != 0)) {
        FUN_006f20e0((uint *)&local_8);
        DAT_00858df8 = (undefined1 *)uVar5;
        return 0;
      }
    }
  }
  else if (uVar1 == 0x10f) {
    local_14 = (byte *)thunk_FUN_005f1fa0(local_c,(int *)&local_10);
    thunk_FUN_0054d550(DAT_00802a38,PTR_s_BASIS_MAN_0079c57c,local_14,local_10,0xc);
    FUN_006ab060(&local_14);
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  return 0;
}


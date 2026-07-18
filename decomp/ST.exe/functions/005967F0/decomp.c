
void FUN_005967f0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    CFsgsConnection::StopBanners((CFsgsConnection *)&DAT_00802a90);
    thunk_FUN_005b6220();
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      FUN_006f20e0((uint *)(DAT_0081176c + 0x2c));
    }
    thunk_FUN_005a0590(local_8);
    thunk_FUN_005a07f0(local_8);
    thunk_FUN_005a0a50(local_8);
    thunk_FUN_005a0af0(local_8);
    thunk_FUN_005a0c80(local_8);
    if (*(byte **)(local_8 + 0x1b08) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_8 + 0x1b08));
    }
    *(undefined4 *)(local_8 + 0x1b08) = 0;
    if (*(byte **)(local_8 + 0x1e9e) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_8 + 0x1e9e));
    }
    *(undefined4 *)(local_8 + 0x1e9e) = 0;
    if (*(int *)(local_8 + 0x1b0c) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1b0c));
    }
    if (*(int *)(local_8 + 0x1f23) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(local_8 + 0x1f23));
      *(undefined4 *)(local_8 + 0x1f23) = 0;
    }
    if (*(int *)(local_8 + 0x1f27) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(local_8 + 0x1f27));
      *(undefined4 *)(local_8 + 0x1f27) = 0;
    }
    if (*(int *)(local_8 + 0x1f2b) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(local_8 + 0x1f2b));
      *(undefined4 *)(local_8 + 0x1f2b) = 0;
    }
    if (*(int *)(local_8 + 0x1f2f) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)(local_8 + 0x1f2f));
      *(undefined4 *)(local_8 + 0x1f2f) = 0;
    }
    if (*(int *)(local_8 + 0x1e8e) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1e8e));
    }
    if (*(int *)(local_8 + 0x1e92) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1e92));
    }
    if (*(int *)(local_8 + 0x1e96) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1e96));
    }
    if (*(int *)(local_8 + 0x1e9a) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1e9a));
    }
    if (-1 < (int)*(uint *)(local_8 + 0x1abc)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(local_8 + 0x1abc));
    }
    *(undefined4 *)(local_8 + 0x1abc) = 0xffffffff;
    if (*(int *)(local_8 + 0x1ac0) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1ac0));
    }
    if (*(uint *)(local_8 + 0x1ab3) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x1ab3));
    }
    *(undefined4 *)(local_8 + 0x1ab3) = 0;
    if (*(int *)(local_8 + 0x1aab) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1aab));
    }
    if (*(undefined4 **)(local_8 + 0x1a9f) != (undefined4 *)0x0) {
      FUN_006c6fc0(*(undefined4 **)(local_8 + 0x1a9f));
    }
    *(undefined4 *)(local_8 + 0x1a9f) = 0;
    if (*(int *)(local_8 + 0x1a9b) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1a9b));
    }
    if (-1 < (int)*(uint *)(local_8 + 0x1a8f)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(local_8 + 0x1a8f));
    }
    *(undefined4 *)(local_8 + 0x1a8f) = 0xffffffff;
    if (*(int *)(local_8 + 0x1a97) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x1a97));
    }
    if (*(uint **)(local_8 + 0x1a77) != (uint *)0x0) {
      FUN_00710560(*(uint **)(local_8 + 0x1a77));
      *(undefined4 *)(local_8 + 0x1a77) = 0;
    }
    if (*(uint **)(local_8 + 0x1a7b) != (uint *)0x0) {
      FUN_00710560(*(uint **)(local_8 + 0x1a7b));
      *(undefined4 *)(local_8 + 0x1a7b) = 0;
    }
    if (*(uint **)(local_8 + 0x1a7f) != (uint *)0x0) {
      FUN_00710560(*(uint **)(local_8 + 0x1a7f));
      *(undefined4 *)(local_8 + 0x1a7f) = 0;
    }
    if (*(HGDIOBJ *)(local_8 + 0x1a67) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(local_8 + 0x1a67));
    }
    *(undefined4 *)(local_8 + 0x1a67) = 0;
    if (*(byte **)(local_8 + 0x1fb3) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(local_8 + 0x1fb3));
    }
    *(undefined4 *)(local_8 + 0x1fb3) = 0;
    if (*(int *)(local_8 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)(local_8 + 0x3d));
    }
    if (*(int *)(*(int *)(local_8 + 0x1a5b) + 0x2e6) != 0) {
      thunk_FUN_005b6ff0();
      *(undefined4 *)(*(int *)(*(int *)(local_8 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    DAT_0081174c = 0;
    DAT_00858df8 = local_4c;
    return;
  }
  DAT_00858df8 = local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x197,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cbf70,0x197);
  return;
}


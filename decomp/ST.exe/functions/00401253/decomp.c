
void thunk_FUN_00568c50(void)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  uint uStack_c;
  int iStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar2 = FUN_006ad4d0(s_E____titans_sound_cpp_007c97fc,0x205,0,iVar2,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if (*(int *)(iStack_8 + 0xdfb) == 0) {
    if (-1 < *(int *)(iStack_8 + 0xe03)) {
      FUN_006c1ba0(*(int *)(iStack_8 + 0xe03));
    }
    *(undefined4 *)(iStack_8 + 0xe03) = 0xffffffff;
  }
  if (-1 < *(int *)(iStack_8 + 0xe03)) {
    FUN_006c1f00(*(int *)(iStack_8 + 0xe03),&uStack_c,(uint *)0x0);
    if (uStack_c == 1) {
      DVar3 = timeGetTime();
      uVar4 = DVar3 - *(int *)(iStack_8 + 0xdff);
      if (*(uint *)(iStack_8 + 0xdfb) < uVar4) {
        FUN_006c1ba0(*(int *)(iStack_8 + 0xe03));
        DAT_00858df8 = (undefined4 *)uStack_50;
        return;
      }
      FUN_006c1ce0(*(int *)(iStack_8 + 0xe03),
                   DAT_0080730a -
                   (int)((DAT_0080730a + 4000) * uVar4) / (int)*(uint *)(iStack_8 + 0xdfb));
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    *(undefined4 *)(iStack_8 + 0xe03) = 0xffffffff;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_005e5e30(void)

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
    if (*(char *)(iStack_8 + 0xb3) == '\x01') {
      if (DAT_00811778 != 0) {
        iVar2 = thunk_FUN_005ab0a0();
        if (iVar2 == 0) {
          *(undefined1 *)(iStack_8 + 0xb3) = 4;
        }
      }
    }
    else if ((*(char *)(iStack_8 + 0xb3) == '\x05') && (DAT_00811778 != 0)) {
      iVar2 = thunk_FUN_005ab0a0();
      if (iVar2 == 0) {
        *(undefined1 *)(iStack_8 + 0xb3) = 0;
        if (-1 < (int)*(uint *)(DAT_00811778 + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_00811778 + 3));
        }
      }
    }
    _DAT_00811774 = *(undefined4 *)(iStack_8 + 0xa1);
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_test_obj_cpp_007cdcbc,0x6c,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cdcbc,0x6c);
  return;
}


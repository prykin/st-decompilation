
void thunk_FUN_005204d0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(uint *)(iStack_8 + 0x3d0) != 0) {
      FUN_006e56b0(*(void **)(iStack_8 + 0xc),*(uint *)(iStack_8 + 0x3d0));
    }
    *(undefined4 *)(iStack_8 + 0x3d0) = 0;
    if (*(uint **)(iStack_8 + 0x3d5) != (uint *)0x0) {
      FUN_00710560(*(uint **)(iStack_8 + 0x3d5));
      *(undefined4 *)(iStack_8 + 0x3d5) = 0;
    }
    *(undefined4 *)(iStack_8 + 0x3cc) = 0;
    *(undefined4 *)(iStack_8 + 0x3c8) = 0;
    *(undefined4 *)(iStack_8 + 0x3c4) = 0;
    DAT_00801698 = 0;
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x4f,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c3eb0,0x4f);
  return;
}



undefined4 FUN_004ac040(char param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(int *)(local_8 + 0x18) == -1) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xba);
    }
    if ((param_1 < '\0') || (*(int *)(local_8 + 0x14) + -1 < (int)param_1)) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xbb);
    }
    iVar2 = param_1 * 0x24;
    if (*(int *)(*(int *)(local_8 + 0x20) + iVar2) == 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xbc);
    }
    FUN_006ea270(*(void **)(local_8 + 0x3c),*(uint *)(local_8 + 0x18),(int)param_1,
                 *(uint *)(*(int *)(local_8 + 0x20) + 0x18 + iVar2));
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar2 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0xbf,0,iVar2,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0xffffffff;
}


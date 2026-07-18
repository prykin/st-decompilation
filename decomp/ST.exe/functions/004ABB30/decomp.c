
undefined4 FUN_004abb30(byte param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x58,0,iVar3,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    return 0xffffffff;
  }
  if (*(int *)(local_8 + 0x18) == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x49);
  }
  if (((char)param_1 < '\0') || (*(int *)(local_8 + 0x14) + -1 < (int)(char)param_1)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x4a);
  }
  if (*(int *)(local_8 + 0x20) != 0) {
    iVar3 = (char)param_1 * 0x24;
    if (*(int *)(iVar3 + *(int *)(local_8 + 0x20)) != 0) {
      FUN_006e98e0(*(void **)(local_8 + 0x3c),*(uint *)(local_8 + 0x18),(int)(char)param_1,0,0,1);
      piVar1 = (int *)(*(int *)(local_8 + 0x20) + 4 + iVar3);
      *(uint *)(local_8 + 0x1c) = *(uint *)(local_8 + 0x1c) & ~(1 << (param_1 & 0x1f));
      if (*piVar1 != 0) {
        FUN_006ab060(piVar1);
      }
      if (*(int *)(*(int *)(local_8 + 0x20) + 8 + iVar3) != 0) {
        FUN_006ab060((undefined4 *)(*(int *)(local_8 + 0x20) + 8 + iVar3));
      }
      *(undefined4 *)(*(int *)(local_8 + 0x20) + iVar3) = 0;
      *(undefined1 *)(*(int *)(local_8 + 0x20) + 0xc + iVar3) = 0;
      DAT_00858df8 = (undefined4 *)local_4c;
      return 0;
    }
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0xffffffff;
}


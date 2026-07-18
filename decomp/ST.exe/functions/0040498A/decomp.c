
undefined4 __thiscall STT3DSprC::UnLoadSequence(STT3DSprC *this,byte param_1)

{
  int *piVar1;
  code *pcVar2;
  STT3DSprC *pSVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  STT3DSprC *pSStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pSStack_8 = this;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  pSVar3 = pSStack_8;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x58,0,iVar4,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    return 0xffffffff;
  }
  if (*(int *)(pSStack_8 + 0x18) == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x49);
  }
  if (((char)param_1 < '\0') || (*(int *)(pSVar3 + 0x14) + -1 < (int)(char)param_1)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0x4a);
  }
  if (*(int *)(pSVar3 + 0x20) != 0) {
    iVar4 = (char)param_1 * 0x24;
    if (*(int *)(iVar4 + *(int *)(pSVar3 + 0x20)) != 0) {
      FUN_006e98e0(*(void **)(pSVar3 + 0x3c),*(uint *)(pSVar3 + 0x18),(int)(char)param_1,0,0,1);
      piVar1 = (int *)(*(int *)(pSVar3 + 0x20) + 4 + iVar4);
      *(uint *)(pSVar3 + 0x1c) = *(uint *)(pSVar3 + 0x1c) & ~(1 << (param_1 & 0x1f));
      if (*piVar1 != 0) {
        FUN_006ab060(piVar1);
      }
      if (*(int *)(*(int *)(pSVar3 + 0x20) + 8 + iVar4) != 0) {
        FUN_006ab060((undefined4 *)(*(int *)(pSVar3 + 0x20) + 8 + iVar4));
      }
      *(undefined4 *)(*(int *)(pSVar3 + 0x20) + iVar4) = 0;
      *(undefined1 *)(*(int *)(pSVar3 + 0x20) + 0xc + iVar4) = 0;
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return 0;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return 0xffffffff;
}


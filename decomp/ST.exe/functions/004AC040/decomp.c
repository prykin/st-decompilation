
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::ShowCurFase */

undefined4 __thiscall STT3DSprC::ShowCurFase(STT3DSprC *this,char param_1)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  STT3DSprC *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    if (*(int *)(local_8 + 0x18) == -1) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xba);
    }
    if ((param_1 < '\0') || (*(int *)(pSVar2 + 0x14) + -1 < (int)param_1)) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xbb);
    }
    iVar3 = param_1 * 0x24;
    if (*(int *)(*(int *)(pSVar2 + 0x20) + iVar3) == 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xbc);
    }
    FUN_006ea270(*(void **)(pSVar2 + 0x3c),*(uint *)(pSVar2 + 0x18),(int)param_1,
                 *(uint *)(*(int *)(pSVar2 + 0x20) + 0x18 + iVar3));
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0xbf,0,iVar3,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  return 0xffffffff;
}


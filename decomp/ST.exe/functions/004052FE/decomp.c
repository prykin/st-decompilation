
undefined4 __thiscall STT3DSprC::SetCurShad(STT3DSprC *this,char param_1,undefined4 param_2)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 auStack_48 [16];
  STT3DSprC *pSStack_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  pSStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  pSVar2 = pSStack_8;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined1 *)uVar4;
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0xac,0,iVar3,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    return 0xffffffff;
  }
  if (*(int *)(pSStack_8 + 0x18) == -1) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7ac638,0xa5);
  }
  if (*(int *)(*(int *)(*(int *)(pSVar2 + 0x20) + param_1 * 0x24) + 0x29) != 0) {
    pSVar2[0x13] = (STT3DSprC)param_1;
    *(undefined4 *)(pSVar2 + 0x30) = param_2;
    if (pSVar2[0x11] == (STT3DSprC)0x0) {
      if (pSVar2[0x10] == (STT3DSprC)0x0) {
        uVar6 = *(uint *)(pSVar2 + 0x34);
        uVar5 = *(uint *)(pSVar2 + 0x18);
        puVar7 = &LAB_00404999;
      }
      else {
        uVar6 = *(uint *)(pSVar2 + 0x34);
        uVar5 = *(uint *)(pSVar2 + 0x18);
        puVar7 = &LAB_00405b64;
      }
      FUN_006e9520(*(void **)(pSVar2 + 0x3c),uVar5,uVar6,(uint)puVar7,(uint)pSVar2);
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  return 0;
}


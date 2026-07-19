
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
  InternalExceptionFrame *pIVar8;
  undefined4 auStack_48 [16];
  STT3DSprC *pSStack_8;
  
  pIVar8 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  pSStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,pIVar8);
  pSVar2 = pSStack_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = pIVar8;
    iVar3 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0xac,0,iVar3,&DAT_007a4ccc,
                               s_STT3DSprC__SetCurShad_007ac6a4);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    return 0xffffffff;
  }
  if (*(int *)(pSStack_8 + 0x18) == -1) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xa5);
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
    g_currentExceptionFrame = pIVar8;
    return 0;
  }
  g_currentExceptionFrame = pIVar8;
  return 0;
}


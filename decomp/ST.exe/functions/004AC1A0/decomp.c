
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::StartShow */

undefined4 __thiscall STT3DSprC::StartShow(STT3DSprC *this,byte param_1,undefined4 param_2)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  undefined1 *puVar6;
  InternalExceptionFrame local_50;
  uint local_c;
  STT3DSprC *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0xf1,0,iVar3,&DAT_007a4ccc,
                               s_STT3DSprC__StartShow_007ac6dc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    return 0xffffffff;
  }
  if (*(int *)(local_8 + 0x18) == -1) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xce);
  }
  if (((char)param_1 < '\0') || (*(int *)(pSVar2 + 0x14) + -1 < (int)(char)param_1)) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xcf);
  }
  uVar5 = (uint)(char)param_1;
  iVar3 = uVar5 * 0x24;
  if (*(int *)(*(int *)(pSVar2 + 0x20) + iVar3) == 0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xd0);
  }
  local_c = 1 << (param_1 & 0x1f);
  if ((*(uint *)(pSVar2 + 0x1c) & local_c) != 0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xd1);
  }
  FUN_006e9cb0(*(void **)(pSVar2 + 0x3c),*(uint **)(pSVar2 + 0x18),uVar5);
  *(uint *)(pSVar2 + 0x1c) = *(uint *)(pSVar2 + 0x1c) | local_c;
  if (*(int *)(*(int *)(pSVar2 + 0x20) + iVar3 + 0x20) == 0) {
    FUN_006ea270(*(void **)(pSVar2 + 0x3c),*(uint *)(pSVar2 + 0x18),uVar5,
                 *(uint *)(*(int *)(pSVar2 + 0x20) + iVar3 + 0x18));
  }
  else {
    FUN_006e9d40(*(void **)(pSVar2 + 0x3c),*(uint **)(pSVar2 + 0x18),uVar5);
  }
  if (pSVar2[0x12] == (STT3DSprC)0x0) {
    FUN_006eaaa0(*(void **)(pSVar2 + 0x3c),*(uint *)(pSVar2 + 0x18),0);
  }
  if (pSVar2[0x11] == (STT3DSprC)0x0) {
    if (pSVar2[0x10] == (STT3DSprC)0x0) {
      if (*(int *)(*(int *)(*(int *)(pSVar2 + 0x20) + iVar3) + 0x29) == 0) goto LAB_004ac330;
      pSVar2[0x13] = (STT3DSprC)param_1;
      *(undefined4 *)(pSVar2 + 0x30) = *(undefined4 *)(*(int *)(pSVar2 + 0x20) + iVar3 + 0x18);
      puVar6 = &LAB_00404999;
    }
    else {
      if ((*(int *)(pSVar2 + 0x38) == 0) ||
         (*(int *)(*(int *)(*(int *)(pSVar2 + 0x20) + iVar3) + 0x29) == 0)) goto LAB_004ac330;
      pSVar2[0x13] = (STT3DSprC)param_1;
      *(int *)(pSVar2 + 0x30) = ((int *)(*(int *)(pSVar2 + 0x20) + iVar3))[6];
      puVar6 = &LAB_00405b64;
    }
    FUN_006e9520(*(void **)(pSVar2 + 0x3c),*(uint *)(pSVar2 + 0x18),*(uint *)(pSVar2 + 0x34),
                 (uint)puVar6,(uint)pSVar2);
  }
LAB_004ac330:
  *(undefined4 *)(*(int *)(pSVar2 + 0x20) + 0x1c + iVar3) = param_2;
  g_currentExceptionFrame = local_50.previous;
  return 0;
}


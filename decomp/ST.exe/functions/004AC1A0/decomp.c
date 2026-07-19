
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::StartShow */

undefined4 __thiscall STT3DSprC::StartShow(STT3DSprC *this,byte param_1,undefined4 param_2)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  undefined1 *puVar8;
  InternalExceptionFrame local_50;
  uint local_c;
  STT3DSprC *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0xf1,0,iVar3,&DAT_007a4ccc,
                               s_STT3DSprC__StartShow_007ac6dc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == -1) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xce);
  }
  if (((char)param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)(char)param_1)) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xcf);
  }
  uVar7 = (uint)(char)param_1;
  iVar3 = uVar7 * 0x24;
  if (*(int *)(pSVar2->field_0020 + iVar3) == 0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xd0);
  }
  local_c = 1 << (param_1 & 0x1f);
  if ((pSVar2->field_001C & local_c) != 0) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xd1);
  }
  FUN_006e9cb0((void *)pSVar2->field_003C,(uint *)pSVar2->field_0018,uVar7);
  pSVar2->field_001C = pSVar2->field_001C | local_c;
  iVar4 = pSVar2->field_0020 + iVar3;
  if (*(int *)(iVar4 + 0x20) == 0) {
    FUN_006ea270((void *)pSVar2->field_003C,pSVar2->field_0018,uVar7,*(uint *)(iVar4 + 0x18));
  }
  else {
    FUN_006e9d40((void *)pSVar2->field_003C,(uint *)pSVar2->field_0018,uVar7);
  }
  if (pSVar2->field_0012 == '\0') {
    FUN_006eaaa0((void *)pSVar2->field_003C,pSVar2->field_0018,0);
  }
  if (pSVar2->field_0011 == '\0') {
    if (pSVar2->field_0010 == '\0') {
      if (*(int *)(*(int *)(pSVar2->field_0020 + iVar3) + 0x29) == 0) goto cf_common_exit_004AC330;
      pSVar2->field_0013 = param_1;
      pSVar2->field_0030 = *(undefined4 *)(pSVar2->field_0020 + iVar3 + 0x18);
      puVar8 = &LAB_00404999;
    }
    else {
      if ((pSVar2->field_0038 == 0) ||
         (piVar5 = (int *)(pSVar2->field_0020 + iVar3), *(int *)(*piVar5 + 0x29) == 0))
      goto cf_common_exit_004AC330;
      pSVar2->field_0013 = param_1;
      pSVar2->field_0030 = piVar5[6];
      puVar8 = &LAB_00405b64;
    }
    FUN_006e9520((void *)pSVar2->field_003C,pSVar2->field_0018,pSVar2->field_0034,(uint)puVar8,
                 (uint)pSVar2);
  }
cf_common_exit_004AC330:
  *(undefined4 *)(pSVar2->field_0020 + 0x1c + iVar3) = param_2;
  g_currentExceptionFrame = local_50.previous;
  return 0;
}


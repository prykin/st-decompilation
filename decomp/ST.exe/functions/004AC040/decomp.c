
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
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_0018 == -1) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xba);
    }
    if ((param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)param_1)) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xbb);
    }
    iVar3 = param_1 * 0x24;
    if (*(int *)(pSVar2->field_0020 + iVar3) == 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xbc);
    }
    FUN_006ea270((void *)pSVar2->field_003C,pSVar2->field_0018,(int)param_1,
                 *(uint *)(pSVar2->field_0020 + 0x18 + iVar3));
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0xbf,0,iVar3,&DAT_007a4ccc,
                             s_STT3DSprC__ShowCurFase_007ac6c0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  return 0xffffffff;
}


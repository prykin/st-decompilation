
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SetCurShad */

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
  undefined4 local_48 [16];
  STT3DSprC *local_8;
  
  pIVar8 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar8);
  pSVar2 = local_8;
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
  if (local_8->field_0018 == -1) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xa5);
  }
  if (*(int *)(*(int *)(pSVar2->field_0020 + param_1 * 0x24) + 0x29) != 0) {
    pSVar2->field_0013 = param_1;
    pSVar2->field_0030 = param_2;
    if (pSVar2->field_0011 == '\0') {
      if (pSVar2->field_0010 == '\0') {
        uVar6 = pSVar2->field_0034;
        uVar5 = pSVar2->field_0018;
        puVar7 = &LAB_00404999;
      }
      else {
        uVar6 = pSVar2->field_0034;
        uVar5 = pSVar2->field_0018;
        puVar7 = &LAB_00405b64;
      }
      FUN_006e9520((void *)pSVar2->field_003C,uVar5,uVar6,(uint)puVar7,(uint)pSVar2);
    }
    g_currentExceptionFrame = pIVar8;
    return 0;
  }
  g_currentExceptionFrame = pIVar8;
  return 0;
}


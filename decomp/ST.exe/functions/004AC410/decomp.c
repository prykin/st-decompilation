
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::StopShow */

undefined4 __thiscall STT3DSprC::StopShow(STT3DSprC *this,byte param_1)

{
  code *pcVar1;
  STT3DSprC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x10e,0,iVar3,&DAT_007a4ccc,
                               s_STT3DSprC__StopShow_007ac6f8);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == -1) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0xff);
  }
  if (((char)param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)(char)param_1)) {
    RaiseInternalException(-1,DAT_007ed77c,s_E____titans_wlad_Tspr3d_cpp_007ac638,0x100);
  }
  uVar5 = 1 << (param_1 & 0x1f);
  if ((uVar5 & pSVar2->field_001C) == 0) {
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  FUN_006e9d40((void *)pSVar2->field_003C,(uint *)pSVar2->field_0018,(int)(char)param_1);
  pSVar2->field_001C = pSVar2->field_001C & ~uVar5;
  if (param_1 == 0xe) {
    if (pSVar2->field_0011 == '\x01') {
      thunk_FUN_004ad5e0((int)pSVar2);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    thunk_FUN_004ad5e0((int)pSVar2);
    pSVar2->field_0011 = 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}



/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintFSGS */

void __thiscall FSGSTy::PaintFSGS(FSGSTy *this,char param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  FSGSTy *this_00;
  FSGSTy *pFVar3;
  FSGSTy *pFVar4;
  FSGSTy *extraout_ECX;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  UINT local_8;
  
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar2 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1c8,0,errorCode,
                               &DAT_007a4ccc,s_FSGSTy__PaintFSGS_007cc0bc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1c8);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  pFVar4 = local_c;
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)&local_c->field_0x5d);
  switch(pFVar4->field_1A5F) {
  case 1:
    if (local_8 == 0) {
      local_8 = 0x2563;
      goto LAB_00596d58;
    }
    break;
  case 2:
LAB_00596d58:
    if (local_8 == 0) {
      local_8 = 0x2553;
      goto LAB_00596d69;
    }
    break;
  case 3:
    if (*(int *)&pFVar4[1].field_0x44 != 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    MMMObjTy::OutBSlProc
              ((MMMObjTy *)DAT_0080759c,(int)DAT_0080759c,0,0,0x22,0x72,0x2e1,0x14c,
               (undefined4 *)(*(int *)&pFVar4->field_0x1a5b + 0x140));
    g_currentExceptionFrame = local_50.previous;
    return;
  case 4:
LAB_00596d69:
    if (local_8 == 0) {
      local_8 = 0x2552;
      goto LAB_00596d7a;
    }
    break;
  case 5:
LAB_00596d7a:
    if (local_8 == 0) {
      local_8 = 0x2562;
      goto LAB_00596d8b;
    }
    break;
  case 6:
    if ((*(int *)&pFVar4[1].field_0x48 == 0) && (param_1 == '\0')) {
      OutChSlProc(this_00,(int)DAT_0080759c,0,0,0x13,0x5e,0x1bf,0x175,
                  (undefined4 *)(*(int *)&pFVar4->field_0x1a5b + 0x140));
    }
    if (*(int *)&pFVar4[1].field_0x4c != 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    pFVar4 = (FSGSTy *)(*(int *)&pFVar4->field_0x1a5b + 0x140);
    OutTRGlProc(pFVar4,(int)DAT_0080759c,0,0,0x1e9,0x5e,0x124,0x175,(int)pFVar4);
    g_currentExceptionFrame = local_50.previous;
    return;
  case 7:
LAB_00596d8b:
    if (local_8 == 0) {
      local_8 = 0x255b;
      goto LAB_00596d9c;
    }
    break;
  case 8:
    pFVar3 = this_00;
    if ((*(int *)&pFVar4[1].field_0x50 == 0) && (param_1 == '\0')) {
      OutSGlProc(DAT_0080759c,(int)DAT_0080759c,0,0,0x199,0x5e,0x174,0x175,
                 *(int *)&pFVar4->field_0x1a5b + 0x140);
      pFVar3 = extraout_ECX;
    }
    if (*(int *)&pFVar4[1].field_0x4c != 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    MMMObjTy::OutBSlProc
              ((MMMObjTy *)pFVar3,(int)DAT_0080759c,0,0,0x13,0x5e,0x174,0x175,
               (undefined4 *)(*(int *)&pFVar4->field_0x1a5b + 0x140));
    g_currentExceptionFrame = local_50.previous;
    return;
  case 9:
    if (*(int *)&pFVar4[1].field_0x44 != 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    OutLadProc(DAT_0080759c,(int)DAT_0080759c,0,0,0x22,0x5e,0x2e1,0x175);
    PaintLadder(pFVar4,(int)unaff_ESI);
    g_currentExceptionFrame = local_50.previous;
    return;
  case 10:
LAB_00596d9c:
    if (local_8 == 0) {
      local_8 = 0x259c;
    }
    break;
  default:
    goto switchD_00596d3d_default;
  }
  if ((*(int *)&pFVar4[1].field_0x44 == 0) && (param_1 == '\0')) {
    pFVar3 = (FSGSTy *)((-(uint)(pFVar4->field_0x1abb != '\0') & 0x74) + 0x106);
    OutTRGlProc(pFVar3,(int)DAT_0080759c,0,0,0xb4,
                (-(uint)(pFVar4->field_0x1abb != '\0') & 0xffffffb4) + 0xaa,0x1b8,(int)pFVar3,
                local_8);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
switchD_00596d3d_default:
  g_currentExceptionFrame = local_50.previous;
  return;
}


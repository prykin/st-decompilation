
void __thiscall FSGSTy::PaintFSGS(FSGSTy *this,char param_1)

{
  code *pcVar1;
  FSGSTy *this_00;
  int errorCode;
  int iVar2;
  FSGSTy *this_01;
  FSGSTy *pFVar3;
  MMMObjTy *extraout_ECX;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame IStack_50;
  FSGSTy *pFStack_c;
  UINT UStack_8;
  
  UStack_8 = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pFStack_c = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode != 0) {
    g_currentExceptionFrame = IStack_50.previous;
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
  this_00 = pFStack_c;
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(pFStack_c + 0x5d));
  switch(this_00[0x1a5f]) {
  case (FSGSTy)0x1:
    if (UStack_8 == 0) {
      UStack_8 = 0x2563;
      goto LAB_00596d58;
    }
    break;
  case (FSGSTy)0x2:
LAB_00596d58:
    if (UStack_8 == 0) {
      UStack_8 = 0x2553;
      goto LAB_00596d69;
    }
    break;
  case (FSGSTy)0x3:
    if (*(int *)(this_00 + 0x1f23) != 0) {
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    MMMObjTy::OutBSlProc
              (DAT_0080759c,(int)DAT_0080759c,0,0,0x22,0x72,0x2e1,0x14c,
               (undefined4 *)(*(int *)(this_00 + 0x1a5b) + 0x140));
    g_currentExceptionFrame = IStack_50.previous;
    return;
  case (FSGSTy)0x4:
LAB_00596d69:
    if (UStack_8 == 0) {
      UStack_8 = 0x2552;
      goto LAB_00596d7a;
    }
    break;
  case (FSGSTy)0x5:
LAB_00596d7a:
    if (UStack_8 == 0) {
      UStack_8 = 0x2562;
      goto LAB_00596d8b;
    }
    break;
  case (FSGSTy)0x6:
    if ((*(int *)(this_00 + 0x1f27) == 0) && (param_1 == '\0')) {
      OutChSlProc(this_01,(int)DAT_0080759c,0,0,0x13,0x5e,0x1bf,0x175,
                  (undefined4 *)(*(int *)(this_00 + 0x1a5b) + 0x140));
    }
    if (*(int *)(this_00 + 0x1f2b) != 0) {
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    OutTRGlProc((FSGSTy *)(*(int *)(this_00 + 0x1a5b) + 0x140),(int)DAT_0080759c,0,0,0x1e9,0x5e,
                0x124,0x175,*(int *)(this_00 + 0x1a5b) + 0x140);
    g_currentExceptionFrame = IStack_50.previous;
    return;
  case (FSGSTy)0x7:
LAB_00596d8b:
    if (UStack_8 == 0) {
      UStack_8 = 0x255b;
      goto LAB_00596d9c;
    }
    break;
  case (FSGSTy)0x8:
    pFVar3 = this_01;
    if ((*(int *)(this_00 + 0x1f2f) == 0) && (param_1 == '\0')) {
      OutSGlProc((FSGSTy *)DAT_0080759c,(int)DAT_0080759c,0,0,0x199,0x5e,0x174,0x175,
                 *(int *)(this_00 + 0x1a5b) + 0x140);
      pFVar3 = (FSGSTy *)extraout_ECX;
    }
    if (*(int *)(this_00 + 0x1f2b) != 0) {
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    MMMObjTy::OutBSlProc
              ((MMMObjTy *)pFVar3,(int)DAT_0080759c,0,0,0x13,0x5e,0x174,0x175,
               (undefined4 *)(*(int *)(this_00 + 0x1a5b) + 0x140));
    g_currentExceptionFrame = IStack_50.previous;
    return;
  case (FSGSTy)0x9:
    if (*(int *)(this_00 + 0x1f23) != 0) {
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    OutLadProc((FSGSTy *)DAT_0080759c,(int)DAT_0080759c,0,0,0x22,0x5e,0x2e1,0x175);
    PaintLadder(this_00,(int)unaff_ESI);
    g_currentExceptionFrame = IStack_50.previous;
    return;
  case (FSGSTy)0xa:
LAB_00596d9c:
    if (UStack_8 == 0) {
      UStack_8 = 0x259c;
    }
    break;
  default:
    goto switchD_00596d3d_default;
  }
  if ((*(int *)(this_00 + 0x1f23) == 0) && (param_1 == '\0')) {
    pFVar3 = (FSGSTy *)((-(uint)(this_00[0x1abb] != (FSGSTy)0x0) & 0x74) + 0x106);
    OutTRGlProc(pFVar3,(int)DAT_0080759c,0,0,0xb4,
                (-(uint)(this_00[0x1abb] != (FSGSTy)0x0) & 0xffffffb4) + 0xaa,0x1b8,(int)pFVar3,
                UStack_8);
    g_currentExceptionFrame = IStack_50.previous;
    return;
  }
switchD_00596d3d_default:
  g_currentExceptionFrame = IStack_50.previous;
  return;
}


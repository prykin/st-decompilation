
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintFSGS
   
   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall FSGSTy::PaintFSGS(FSGSTy *this,char param_1)

{
  code *pcVar1;
  FSGSTy *this_00;
  int errorCode;
  int iVar2;
  FSGSTy *this_01;
  FSGSTy *pFVar3;
  undefined1 *this_02;
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
  FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  this_00 = local_c;
  PutDDX(0,0,'\x01',(BITMAPINFO *)local_c->field_005D);
  switch(this_00->field_1A5F) {
  case CASE_1:
    if (local_8 == 0) {
      local_8 = 0x2563;
      goto LAB_00596d58;
    }
    break;
  case CASE_2:
LAB_00596d58:
    if (local_8 == 0) {
      local_8 = 0x2553;
      goto LAB_00596d69;
    }
    break;
  case CASE_3:
    if (this_00->field_1F23 != (HoloTy *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    MMMObjTy::OutBSlProc
              ((MMMObjTy *)DAT_0080759c,(int)DAT_0080759c,(MMMObjTy *)0x0,0,0x22,0x72,0x2e1,0x14c,
               (undefined4 *)&this_00->field_1A5B->field_0x140);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_4:
LAB_00596d69:
    if (local_8 == 0) {
      local_8 = 0x2552;
      goto LAB_00596d7a;
    }
    break;
  case CASE_5:
LAB_00596d7a:
    if (local_8 == 0) {
      local_8 = 0x2562;
      goto LAB_00596d8b;
    }
    break;
  case CASE_6:
    if ((this_00->field_1F27 == (HoloTy *)0x0) && (param_1 == '\0')) {
      OutChSlProc(this_01,(int)DAT_0080759c,0,0,0x13,0x5e,0x1bf,0x175,
                  (undefined4 *)&this_00->field_1A5B->field_0x140);
    }
    if (this_00->field_1F2B != (HoloTy *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    this_02 = &this_00->field_1A5B->field_0x140;
    OutTRGlProc((FSGSTy *)this_02,(int)DAT_0080759c,(MMMObjTy *)0x0,(MMMObjTy *)0x0,
                (StartServTy *)0x1e9,0x5e,0x124,0x175,(int)this_02);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_7:
LAB_00596d8b:
    if (local_8 == 0) {
      local_8 = 0x255b;
      goto LAB_00596d9c;
    }
    break;
  case CASE_8:
    pFVar3 = this_01;
    if ((this_00->field_1F2F == (HoloTy *)0x0) && (param_1 == '\0')) {
      OutSGlProc(DAT_0080759c,(int)DAT_0080759c,(MMMObjTy *)0x0,0,0x199,0x5e,0x174,0x175,
                 (int)&this_00->field_1A5B->field_0x140);
      pFVar3 = extraout_ECX;
    }
    if (this_00->field_1F2B != (HoloTy *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    MMMObjTy::OutBSlProc
              ((MMMObjTy *)pFVar3,(int)DAT_0080759c,(MMMObjTy *)0x0,0,0x13,0x5e,0x174,0x175,
               (undefined4 *)&this_00->field_1A5B->field_0x140);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_9:
    if (this_00->field_1F23 != (HoloTy *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (param_1 != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    OutLadProc(DAT_0080759c,(int)DAT_0080759c,(MMMObjTy *)0x0,(MMMObjTy *)0x0,0x22,0x5e,
               (FSGSTy *)0x2e1,0x175);
    PaintLadder(this_00,(int)unaff_ESI);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_A:
LAB_00596d9c:
    if (local_8 == 0) {
      local_8 = 0x259c;
    }
    break;
  default:
    goto switchD_00596d3d_default;
  }
  if ((this_00->field_1F23 == (HoloTy *)0x0) && (param_1 == '\0')) {
    pFVar3 = (FSGSTy *)((-(uint)(this_00->field_1ABB != '\0') & 0x74) + 0x106);
    OutTRGlProc(pFVar3,(int)DAT_0080759c,(MMMObjTy *)0x0,(MMMObjTy *)0x0,0xb4,
                (-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa,0x1b8,(int)pFVar3,local_8
               );
    g_currentExceptionFrame = local_50.previous;
    return;
  }
switchD_00596d3d_default:
  g_currentExceptionFrame = local_50.previous;
  return;
}


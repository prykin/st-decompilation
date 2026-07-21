
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::PaintPrivider */

void __thiscall PrividerTy::PaintPrivider(PrividerTy *this,char param_1)

{
  code *pcVar1;
  PrividerTy *pPVar2;
  int errorCode;
  uint *extraout_EAX;
  uint *extraout_EAX_00;
  int iVar3;
  MMMObjTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar4;
  uint uVar5;
  ccFntTy *pcVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0xec,0,errorCode,
                               &DAT_007a4ccc,s_PrividerTy__PaintPrivider_007ccde0);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0xec);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  PutDDX(0,0,'\x01',(BITMAPINFO *)PTR_0081176c->field_002C);
  pPVar2 = local_8;
  if ((local_8->field_1C96 == (HoloTy *)0x0) && (param_1 == '\0')) {
    MMMObjTy::OutLstProc
              (this_00,(int)DAT_0080759c,(MMMObjTy *)0x0,0,0x79,0x51,0x22e,0x145,(int)local_8);
  }
  uVar7 = 0;
  pcVar6 = (ccFntTy *)PTR_0081176c->field_0030;
  uVar5 = 0xffffffff;
  uVar4 = 0xfffffffe;
  if (pPVar2->field_1A5F == '\x01') {
    LoadResourceString(0x26b4,HINSTANCE_00807618);
    StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,extraout_EAX,uVar4,uVar5,pcVar6,uVar7);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  LoadResourceString(0x26b3,HINSTANCE_00807618);
  StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,extraout_EAX_00,uVar4,uVar5,pcVar6,uVar7);
  if ((pPVar2->field_1C9A == (HoloTy *)0x0) && (param_1 == '\0')) {
    MMMObjTy::OutEdProc(DAT_0080759c,(int)DAT_0080759c,0,0,0x79,0x197,0x22e,0x2e,
                        (undefined4 *)&pPVar2->field_1A5B->field_0x140);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}


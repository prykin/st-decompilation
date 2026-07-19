
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::PaintPrivider */

void __thiscall PrividerTy::PaintPrivider(PrividerTy *this,char param_1)

{
  code *pcVar1;
  PrividerTy *pPVar2;
  int errorCode;
  uint *puVar3;
  int iVar4;
  MMMObjTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = __setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0xec,0,errorCode,
                               &DAT_007a4ccc,s_PrividerTy__PaintPrivider_007ccde0);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0xec);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
  pPVar2 = local_8;
  if ((*(int *)(local_8 + 0x1c96) == 0) && (param_1 == '\0')) {
    MMMObjTy::OutLstProc(this_00,(int)DAT_0080759c,0,0,0x79,0x51,0x22e,0x145,(int)local_8);
  }
  uVar8 = 0;
  pvVar7 = *(void **)(DAT_0081176c + 0x30);
  uVar6 = 0xffffffff;
  uVar5 = 0xfffffffe;
  if (pPVar2[0x1a5f] == (PrividerTy)0x1) {
    puVar3 = (uint *)FUN_006b0140(0x26b4,DAT_00807618);
    StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pvVar7,uVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  puVar3 = (uint *)FUN_006b0140(0x26b3,DAT_00807618);
  StartServTy::WrTextDDX(this_02,0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pvVar7,uVar8);
  if ((*(int *)(pPVar2 + 0x1c9a) == 0) && (param_1 == '\0')) {
    MMMObjTy::OutEdProc(DAT_0080759c,(int)DAT_0080759c,0,0,0x79,0x197,0x22e,0x2e,
                        (undefined4 *)(*(int *)(pPVar2 + 0x1a5b) + 0x140));
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}


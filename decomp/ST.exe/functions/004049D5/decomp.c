
void __thiscall SettMapTy::PaintSettMap(SettMapTy *this,char param_1)

{
  SettMapTy SVar1;
  code *pcVar2;
  SettMapTy *pSVar3;
  int errorCode;
  uint *puVar4;
  int iVar5;
  ChatGlassTy *extraout_ECX;
  ChatGlassTy *extraout_ECX_00;
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *pCVar6;
  StartServTy *this_00;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 uVar10;
  InternalExceptionFrame IStack_4c;
  SettMapTy *pSStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pSStack_8 = this;
  errorCode = __setjmp3(IStack_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    pSVar3 = pSStack_8;
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(pSStack_8 + 0x5d));
    SVar1 = pSVar3[0x1e26];
    pCVar6 = extraout_ECX;
    if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x7)) || (SVar1 == (SettMapTy)0xe)) {
      if ((*(int *)(pSVar3 + 0x21f0) == 0) && (param_1 == '\0')) {
        MMMObjTy::OutRGlProc
                  (DAT_0080759c,(int)DAT_0080759c,0,0,10,0xb4,0xf9,0x123,
                   (undefined4 *)(*(int *)(pSVar3 + 0x1a5b) + 0x140));
        pCVar6 = extraout_ECX_01;
      }
    }
    else if (((*(int *)(pSVar3 + 0x21ec) == 0) && (param_1 == '\0')) ||
            ((param_1 != '\0' && (pSVar3[0x21e2] == (SettMapTy)0x0)))) {
      MMMObjTy::OutBSlProc
                ((MMMObjTy *)(*(int *)(pSVar3 + 0x1a5b) + 0x140),(int)DAT_0080759c,0,0,10,0xb4,0xf9,
                 0x121,(undefined4 *)(*(int *)(pSVar3 + 0x1a5b) + 0x140));
      pCVar6 = extraout_ECX_00;
    }
    SVar1 = pSVar3[0x1e26];
    if ((((SVar1 != (SettMapTy)0x6) && (SVar1 != (SettMapTy)0x1)) && (SVar1 != (SettMapTy)0x2)) &&
       (((*(int *)(pSVar3 + 0x21f8) == 0 && (param_1 == '\0')) ||
        ((param_1 != '\0' && (pSVar3[0x21e6] == (SettMapTy)0x0)))))) {
      ChatGlassTy::OutChGlProc
                (pCVar6,(int)DAT_0080759c,0,0,200,0x1f1,400,0x62,
                 (undefined4 *)(*(int *)(pSVar3 + 0x1a5b) + 0x140));
    }
    if ((*(int *)(pSVar3 + 0x21e8) == 0) && (param_1 == '\0')) {
      MMMObjTy::OutBSlProc
                ((MMMObjTy *)(*(int *)(pSVar3 + 0x1a5b) + 0x140),(int)DAT_0080759c,0,0,0x112,0x38,
                 0x205,0x104,(undefined4 *)(*(int *)(pSVar3 + 0x1a5b) + 0x140));
    }
    if ((*(int *)(pSVar3 + 0x21f4) == 0) && (param_1 == '\0')) {
      MMMObjTy::OutRGlProc
                (DAT_0080759c,(int)DAT_0080759c,0,0,0x112,0x149,0x205,0x8c,
                 (undefined4 *)(*(int *)(pSVar3 + 0x1a5b) + 0x140));
    }
    uVar10 = 0;
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    uVar8 = 0xffffffff;
    uVar7 = 0xfffffffe;
    puVar4 = (uint *)FUN_006b0140(0x26b2,DAT_00807618);
    StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar4,uVar7,uVar8,pvVar9,uVar10);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x1ee,0,errorCode,
                             &DAT_007a4ccc,s_SettMapTy__PaintSettMap_007cd18c);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x1ee);
  return;
}


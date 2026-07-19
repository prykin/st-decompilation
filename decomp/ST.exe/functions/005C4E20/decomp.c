
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::PaintSettMap */

void __thiscall SettMapTy::PaintSettMap(SettMapTy *this,char param_1)

{
  char cVar1;
  code *pcVar2;
  SettMapTy *pSVar3;
  int errorCode;
  uint *puVar4;
  int iVar5;
  ChatGlassTy *extraout_ECX;
  MMMObjTy *pMVar6;
  ChatGlassTy *extraout_ECX_00;
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *pCVar7;
  StartServTy *this_00;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  undefined4 uVar11;
  InternalExceptionFrame local_4c;
  SettMapTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (errorCode == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    pSVar3 = local_8;
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)&local_8->field_0x5d);
    cVar1 = pSVar3[0x4c].field_0x2a;
    pCVar7 = extraout_ECX;
    if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) {
      if ((*(int *)&pSVar3[0x56].field_0x2 == 0) && (param_1 == '\0')) {
        MMMObjTy::OutRGlProc
                  (DAT_0080759c,(int)DAT_0080759c,0,0,10,0xb4,0xf9,0x123,
                   (undefined4 *)(*(int *)&pSVar3[0x42].field_0x51 + 0x140));
        pCVar7 = extraout_ECX_01;
      }
    }
    else if (((*(int *)((int)&pSVar3[0x55].field_0061 + 2) == 0) && (param_1 == '\0')) ||
            ((param_1 != '\0' && (pSVar3[0x55].field_0x59 == '\0')))) {
      pMVar6 = (MMMObjTy *)(*(int *)&pSVar3[0x42].field_0x51 + 0x140);
      MMMObjTy::OutBSlProc(pMVar6,(int)DAT_0080759c,0,0,10,0xb4,0xf9,0x121,(undefined4 *)pMVar6);
      pCVar7 = extraout_ECX_00;
    }
    cVar1 = pSVar3[0x4c].field_0x2a;
    if ((((cVar1 != '\x06') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
       (((*(int *)&pSVar3[0x56].field_0xa == 0 && (param_1 == '\0')) ||
        ((param_1 != '\0' && (pSVar3[0x55].field_0x5d == '\0')))))) {
      ChatGlassTy::OutChGlProc
                (pCVar7,(int)DAT_0080759c,0,0,200,0x1f1,400,0x62,
                 (undefined4 *)(*(int *)&pSVar3[0x42].field_0x51 + 0x140));
    }
    if ((*(int *)&pSVar3[0x55].field_0x5f == 0) && (param_1 == '\0')) {
      pMVar6 = (MMMObjTy *)(*(int *)&pSVar3[0x42].field_0x51 + 0x140);
      MMMObjTy::OutBSlProc(pMVar6,(int)DAT_0080759c,0,0,0x112,0x38,0x205,0x104,(undefined4 *)pMVar6)
      ;
    }
    if ((*(int *)&pSVar3[0x56].field_0x6 == 0) && (param_1 == '\0')) {
      MMMObjTy::OutRGlProc
                (DAT_0080759c,(int)DAT_0080759c,0,0,0x112,0x149,0x205,0x8c,
                 (undefined4 *)(*(int *)&pSVar3[0x42].field_0x51 + 0x140));
    }
    uVar11 = 0;
    pvVar10 = *(void **)(DAT_0081176c + 0x30);
    uVar9 = 0xffffffff;
    uVar8 = 0xfffffffe;
    puVar4 = (uint *)FUN_006b0140(0x26b2,DAT_00807618);
    StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar4,uVar8,uVar9,pvVar10,uVar11);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
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


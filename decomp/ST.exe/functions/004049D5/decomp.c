
void __thiscall SettMapTy::PaintSettMap(SettMapTy *this,char param_1)

{
  SettMapTy SVar1;
  code *pcVar2;
  SettMapTy *pSVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  ChatGlassTy *extraout_ECX;
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
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  SettMapTy *pSStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pSStack_8 = this;
  iVar4 = __setjmp3(auStack_48,0,unaff_ESI,unaff_EBX);
  if (iVar4 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    pSVar3 = pSStack_8;
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(pSStack_8 + 0x5d));
    SVar1 = pSVar3[0x1e26];
    pCVar7 = extraout_ECX;
    if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x7)) || (SVar1 == (SettMapTy)0xe)) {
      if ((*(int *)(pSVar3 + 0x21f0) == 0) && (param_1 == '\0')) {
        MMMObjTy::OutRGlProc
                  (DAT_0080759c,(int)DAT_0080759c,0,0,10,0xb4,0xf9,0x123,
                   (undefined4 *)(*(int *)(pSVar3 + 0x1a5b) + 0x140));
        pCVar7 = extraout_ECX_01;
      }
    }
    else if (((*(int *)(pSVar3 + 0x21ec) == 0) && (param_1 == '\0')) ||
            ((param_1 != '\0' && (pSVar3[0x21e2] == (SettMapTy)0x0)))) {
      MMMObjTy::OutBSlProc
                ((MMMObjTy *)(*(int *)(pSVar3 + 0x1a5b) + 0x140),(int)DAT_0080759c,0,0,10,0xb4,0xf9,
                 0x121,(undefined4 *)(*(int *)(pSVar3 + 0x1a5b) + 0x140));
      pCVar7 = extraout_ECX_00;
    }
    SVar1 = pSVar3[0x1e26];
    if ((((SVar1 != (SettMapTy)0x6) && (SVar1 != (SettMapTy)0x1)) && (SVar1 != (SettMapTy)0x2)) &&
       (((*(int *)(pSVar3 + 0x21f8) == 0 && (param_1 == '\0')) ||
        ((param_1 != '\0' && (pSVar3[0x21e6] == (SettMapTy)0x0)))))) {
      ChatGlassTy::OutChGlProc
                (pCVar7,(int)DAT_0080759c,0,0,200,0x1f1,400,0x62,
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
    uVar11 = 0;
    pvVar10 = *(void **)(DAT_0081176c + 0x30);
    uVar9 = 0xffffffff;
    uVar8 = 0xfffffffe;
    puVar5 = (uint *)FUN_006b0140(0x26b2,DAT_00807618);
    StartServTy::WrTextDDX(this_00,0,0xe9,0x14,0x14c,0x18,puVar5,uVar8,uVar9,pvVar10,uVar11);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar6 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x1ee,0,iVar4,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7cd0e8,0x1ee);
  return;
}


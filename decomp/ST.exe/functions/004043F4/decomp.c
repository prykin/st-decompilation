
void __thiscall WaitTy::PaintWait(WaitTy *this,char param_1)

{
  code *pcVar1;
  WaitTy *pWVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  ChatGlassTy *extraout_ECX;
  ChatGlassTy *extraout_ECX_00;
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *this_00;
  StartServTy *this_01;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  WaitTy *pWStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pWStack_8 = this;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,unaff_EBX);
  if (iVar3 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    pWVar2 = pWStack_8;
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(pWStack_8 + 0x5d));
    this_00 = extraout_ECX;
    if ((*(int *)(pWVar2 + 0x1af8) == 0) && (param_1 == '\0')) {
      MMMObjTy::OutRGlProc
                ((MMMObjTy *)(*(int *)(pWVar2 + 0x1a5b) + 0x140),(int)DAT_0080759c,0,0,0x112,0x38,
                 0x204,0x19d,(undefined4 *)(*(int *)(pWVar2 + 0x1a5b) + 0x140));
      this_00 = extraout_ECX_00;
    }
    if (((*(int *)(pWVar2 + 0x1b00) == 0) && (param_1 == '\0')) ||
       ((param_1 != '\0' && ((*(int *)(pWVar2 + 0x1a64) != 0 && (*(int *)(pWVar2 + 0x1a68) == 0)))))
       ) {
      MMMObjTy::OutBSlProc
                (DAT_0080759c,(int)DAT_0080759c,0,0,10,0xb4,0xf9,0x121,
                 (undefined4 *)(*(int *)(pWVar2 + 0x1a5b) + 0x140));
      this_00 = extraout_ECX_01;
    }
    if (((*(int *)(pWVar2 + 0x1afc) == 0) && (param_1 == '\0')) ||
       ((param_1 != '\0' && (*(int *)(pWVar2 + 0x1a64) != 0)))) {
      ChatGlassTy::OutChGlProc
                (this_00,(int)DAT_0080759c,0,0,200,0x1f1,400,0x62,
                 (undefined4 *)(*(int *)(pWVar2 + 0x1a5b) + 0x140));
    }
    uVar9 = 0;
    pvVar8 = *(void **)(DAT_0081176c + 0x30);
    uVar7 = 0xffffffff;
    uVar6 = 0xfffffffe;
    puVar4 = (uint *)FUN_006b0140(0x26ae,DAT_00807618);
    StartServTy::WrTextDDX(this_01,0,0xe9,0x14,0x14c,0x18,puVar4,uVar6,uVar7,pvVar8,uVar9);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_wait_obj_cpp_007cdd5c,0xeb,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cdd5c,0xeb);
  return;
}


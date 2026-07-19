
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::InitProdPanel */

void __thiscall
ProdPanelTy::InitProdPanel
          (ProdPanelTy *this,UINT param_1,undefined4 param_2,undefined4 param_3,int param_4,
          int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
          int param_12,int param_13,undefined4 param_14)

{
  code *pcVar1;
  ProdPanelTy *this_00;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint *puVar6;
  LPSTR pCVar7;
  uint uVar8;
  PanelTy *pPVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar10;
  byte bVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  InternalExceptionFrame local_58;
  ProdPanelTy *local_14;
  int local_10;
  PanelTy *local_c;
  int local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x28));
    this_00 = local_14;
    puVar13 = (undefined4 *)0x0;
    iVar12 = 0;
    iVar2 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    *(undefined4 **)(local_14 + 0x17c) = puVar3;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    pbVar4 = (byte *)thunk_FUN_00571240(s_FRAMES_007c205c,0);
    puVar5 = FUN_00709af0(DAT_00806794,0xb,pbVar4,uVar10,bVar11,iVar2,iVar12,puVar13);
    *(ushort **)(this_00 + 400) = puVar5;
    iVar2 = *(int *)(this_00 + 0x68);
    uVar10 = *(uint *)(iVar2 + 0x14);
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar2 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0,0,'\x01',*(byte **)(this_00 + 0x184));
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x17c),*(int *)(this_00 + 0x68),0,param_2,param_3,
                     param_4,param_5);
    uVar14 = 0;
    iVar12 = -1;
    iVar2 = -2;
    puVar6 = (uint *)FUN_006b0140(param_1,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x17c),puVar6,iVar2,iVar12,uVar14);
    pCVar7 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar14 = PanelTy::CreateBut((PanelTy *)this_00,0,1,param_6,param_7,0,1,1,pCVar7,0xbfff,0xc000,0,
                                0,0,(char *)0x0,0);
    *(undefined4 *)(this_00 + 0x180) = uVar14;
    iVar2 = CreateSlider(this_00,param_8,param_10,param_9,param_10,0xc0a4,0,0,0);
    local_c = (PanelTy *)(this_00 + 0x1a1);
    *(int *)(this_00 + 0x19d) = iVar2;
    iVar2 = 0xc09f;
    local_8 = param_11;
    pPVar9 = (PanelTy *)(this_00 + 0x1b5);
    local_10 = 5;
    do {
      uVar14 = PanelTy::CreateBut((PanelTy *)this_00,1,0,local_8,param_12,0,1,1,param_14,iVar2,
                                  iVar2 + 0x10,1,0,pPVar9,(char *)0x0,0);
      pPVar9 = pPVar9 + 0x27;
      iVar2 = iVar2 + 1;
      *(undefined4 *)local_c = uVar14;
      local_8 = local_8 + param_13;
      local_c = local_c + 4;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar12 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0x193,0,iVar2,&DAT_007a4ccc,
                              s_ProdPanelTy__InitProdPanel_007c7a00);
  if (iVar12 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_specpan_cpp_007c7870,0x193);
  return;
}


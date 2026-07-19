
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
  ccFntTy *pcVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint *puVar6;
  LPSTR pCVar7;
  uint uVar8;
  undefined1 *puVar9;
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
  undefined4 *local_c;
  int local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    pcVar3 = (ccFntTy *)
             ccFntTy::operator(*(ccFntTy **)(DAT_00802a28 + 0x28),0x19d,
                               (int)*(ccFntTy **)(DAT_00802a28 + 0x28));
    this_00 = local_14;
    puVar13 = (undefined4 *)0x0;
    iVar12 = 0;
    iVar2 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    local_14->field_017C = pcVar3;
    pcVar3->field_0058 = 0;
    pcVar3->field_005C = 0;
    pbVar4 = (byte *)thunk_FUN_00571240(s_FRAMES_007c205c,0);
    puVar5 = mfRLoad(DAT_00806794,CASE_B,pbVar4,uVar10,bVar11,iVar2,iVar12,puVar13);
    this_00->field_0190 = puVar5;
    iVar2 = this_00->field_0068;
    uVar10 = *(uint *)(iVar2 + 0x14);
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar2 + 8);
    }
    puVar13 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar13 = 0xff;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    DibPut((undefined4 *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,param_2,param_3,param_4,param_5);
    uVar14 = 0;
    iVar12 = -1;
    iVar2 = -2;
    puVar6 = (uint *)FUN_006b0140(param_1,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar6,iVar2,iVar12,uVar14);
    pCVar7 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar14 = PanelTy::CreateBut((PanelTy *)this_00,0,1,param_6,param_7,0,1,1,pCVar7,0xbfff,0xc000,0,
                                0,0,(char *)0x0,0);
    this_00->field_0180 = uVar14;
    iVar2 = CreateSlider(this_00,param_8,param_10,param_9,param_10,0xc0a4,0,0,0);
    local_c = &this_00->field_01A1;
    this_00->field_019D = iVar2;
    iVar2 = 0xc09f;
    local_8 = param_11;
    puVar9 = &this_00[1].field_0x10;
    local_10 = 5;
    do {
      uVar14 = PanelTy::CreateBut((PanelTy *)this_00,1,0,local_8,param_12,0,1,1,param_14,iVar2,
                                  iVar2 + 0x10,1,0,puVar9,(char *)0x0,0);
      puVar9 = puVar9 + 0x27;
      iVar2 = iVar2 + 1;
      *local_c = uVar14;
      local_8 = local_8 + param_13;
      local_c = local_c + 1;
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



/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::InitPanel
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0053CEF0 -> 0053E3F0 @ 0053CF4C */

void __thiscall
SpecPanelTy::InitPanel
          (SpecPanelTy *this,char *text,int param_2,uint param_3,int param_4,int param_5,
          UINT param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  SpecPanelTy *pSVar2;
  int iVar3;
  ushort *puVar4;
  ccFntTy *pcVar5;
  undefined4 *puVar6;
  uint *puVar7;
  LPSTR pCVar8;
  ccFntTy *this_00;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    local_8->field_003C = local_8->field_003C + (g_nWidth_00806730 + -800) / 2;
    puVar4 = cMf32::RecGet(DAT_00806790,1,text,(int *)0x0,1);
    pSVar2->field_0185 = puVar4;
    pcVar5 = (ccFntTy *)ccFntTy::operator(this_00,0x19d,*(int *)(DAT_00802a28 + 0x28));
    pSVar2->field_0189 = pcVar5;
    pcVar5->field_0058 = 0;
    pcVar5->field_005C = 0;
    iVar3 = pSVar2->field_0068;
    uVar10 = *(uint *)(iVar3 + 0x14);
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar3 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    DibPut((undefined4 *)pSVar2->field_0068,0,0,'\x01',(byte *)pSVar2->field_0185);
    ccFntTy::SetSurf(pSVar2->field_0189,pSVar2->field_0068,0,param_2,param_3,param_4,param_5);
    uVar17 = 0;
    iVar15 = -1;
    iVar3 = -2;
    puVar7 = (uint *)FUN_006b0140(param_6,HINSTANCE_00807618);
    ccFntTy::WrStr(pSVar2->field_0189,puVar7,iVar3,iVar15,uVar17);
    uVar18 = 1;
    iVar3 = pSVar2->field_0000;
    uVar16 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0xc000;
    uVar17 = 0xbfff;
    pCVar8 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar17 = (**(code **)(iVar3 + 4))
                       (0,1,param_7,param_8,0,1,1,pCVar8,uVar17,uVar11,uVar12,uVar13,uVar14,uVar16,
                        uVar18);
    pSVar2->field_017C = uVar17;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar15 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0xeb,0,iVar3,&DAT_007a4ccc,
                              s_SpecPanelTy__InitPanel_007c792c);
  if (iVar15 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_specpan_cpp_007c7870,0xeb);
  return;
}


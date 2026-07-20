
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
  AnonPointee_SpecPanelTy_0068 *pAVar1;
  code *pcVar2;
  SpecPanelTy *pSVar3;
  int iVar4;
  ushort *puVar5;
  ccFntTy *pcVar6;
  undefined4 *puVar7;
  uint *puVar8;
  LPSTR pCVar9;
  ccFntTy *this_00;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    local_8->field_003C = local_8->field_003C + (g_nWidth_00806730 + -800) / 2;
    puVar5 = cMf32::RecGet(DAT_00806790,1,text,(int *)0x0,1);
    pSVar3->field_0185 = puVar5;
    pcVar6 = (ccFntTy *)ccFntTy::operator(this_00,0x19d,*(int *)&PTR_00802a28->field_0x28);
    pSVar3->field_0189 = pcVar6;
    pcVar6->field_0058 = 0;
    pcVar6->field_005C = 0;
    pAVar1 = pSVar3->field_0068;
    uVar11 = pAVar1->field_0014;
    if (uVar11 == 0) {
      uVar11 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pAVar1->field_0008;
    }
    puVar7 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    DibPut((AnonShape_006B84D0_7C7D97C6 *)pSVar3->field_0068,0,0,'\x01',(byte *)pSVar3->field_0185);
    ccFntTy::SetSurf(pSVar3->field_0189,(int)pSVar3->field_0068,0,param_2,param_3,param_4,param_5);
    uVar18 = 0;
    iVar16 = -1;
    iVar4 = -2;
    puVar8 = (uint *)FUN_006b0140(param_6,HINSTANCE_00807618);
    ccFntTy::WrStr(pSVar3->field_0189,puVar8,iVar4,iVar16,uVar18);
    uVar19 = 1;
    iVar4 = pSVar3->field_0000;
    uVar17 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0xc000;
    uVar18 = 0xbfff;
    pCVar9 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar18 = (**(code **)(iVar4 + 4))
                       (0,1,param_7,param_8,0,1,1,pCVar9,uVar18,uVar12,uVar13,uVar14,uVar15,uVar17,
                        uVar19);
    pSVar3->field_017C = uVar18;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar16 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0xeb,0,iVar4,&DAT_007a4ccc,
                              s_SpecPanelTy__InitPanel_007c792c);
  if (iVar16 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Andrey_specpan_cpp_007c7870,0xeb);
  return;
}


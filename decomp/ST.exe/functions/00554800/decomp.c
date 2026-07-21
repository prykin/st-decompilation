
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::InitParam */

void __thiscall
cLoadingTy::InitParam
          (cLoadingTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6,int param_7,int param_8,int param_9)

{
  AnonPointee_cLoadingTy_0004 *pAVar1;
  ccFntTy *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  cLoadingTy *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *extraout_EAX;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pcVar7 = local_8;
  if (iVar8 == 0) {
    local_8->field_0014 = param_1;
    local_8->field_0018 = param_2;
    if (param_3 < 1) {
      param_3 = *(int *)(local_8->field_0000 + 4);
    }
    local_8->field_001C = param_3;
    if (param_4 < 1) {
      param_4 = *(int *)(local_8->field_0000 + 8);
    }
    local_8->field_0020 = param_4;
    pAVar1 = local_8->field_0004;
    local_8->field_000C = 0;
    local_8->field_0010 = 0;
    local_8->field_0038 = 0;
    uVar12 = pAVar1->field_0014;
    if (uVar12 == 0) {
      uVar12 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pAVar1->field_0008;
    }
    puVar9 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    pcVar2 = pcVar7->field_0008;
    uVar3 = pcVar7->field_0020;
    uVar4 = pcVar7->field_001C;
    uVar5 = pcVar7->field_0014;
    pcVar2->field_0064 = pcVar7->field_0018;
    pcVar2->field_0060 = uVar5;
    pcVar2->field_0068 = uVar4;
    pcVar2->field_006C = uVar3;
    pcVar2->field_0050 = 0;
    pcVar2->field_0054 = 0;
    pcVar2 = pcVar7->field_0008;
    pcVar7->field_0028 = param_6;
    pcVar7->field_002C = param_7;
    pcVar2->field_0058 = param_6;
    pcVar2->field_005C = param_7;
    LoadResourceString(0x267a,HINSTANCE_00807618);
    iVar8 = FUN_007111c0(pcVar7->field_0008,extraout_EAX);
    iVar8 = pcVar7->field_002C + iVar8;
    iVar10 = (int)pcVar7->field_0020 / iVar8;
    pcVar7->field_0034 = iVar8;
    pcVar7->field_0030 = iVar10;
    if (iVar10 < 1) {
      RaiseInternalException
                (-6,g_overwriteContext_007ED77C,s_E____titans_grig_loading_cpp_007c8f0c,0xa3);
    }
    pcVar7->field_0058 = param_8;
    pcVar7->field_0054 = param_9;
    FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
    FUN_006b4640(DAT_0080759c,0,0,(BITMAPINFO *)pcVar7->field_0000,(uint *)0x0);
    Library::DKW::DDX::FUN_006bb370(DAT_0080759c,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar10 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0xac,0,iVar8,&DAT_007a4ccc,
                              s_cLoadingTy__InitParam_007c8f60);
  if (iVar10 != 0) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  RaiseInternalException(iVar8,0,s_E____titans_grig_loading_cpp_007c8f0c,0xad);
  return;
}


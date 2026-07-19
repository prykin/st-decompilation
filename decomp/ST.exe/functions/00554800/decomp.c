
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::InitParam */

void __thiscall
cLoadingTy::InitParam
          (cLoadingTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6,int param_7,int param_8,int param_9)

{
  ccFntTy *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  cLoadingTy *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pcVar6 = local_8;
  if (iVar7 == 0) {
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
    iVar7 = local_8->field_0004;
    local_8->field_000C = 0;
    local_8->field_0010 = 0;
    local_8->field_0038 = 0;
    uVar12 = *(uint *)(iVar7 + 0x14);
    if (uVar12 == 0) {
      uVar12 = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar7 + 8);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar7);
    for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    pcVar1 = pcVar6->field_0008;
    uVar2 = pcVar6->field_0020;
    uVar3 = pcVar6->field_001C;
    uVar4 = pcVar6->field_0014;
    pcVar1->field_0064 = pcVar6->field_0018;
    pcVar1->field_0060 = uVar4;
    pcVar1->field_0068 = uVar3;
    pcVar1->field_006C = uVar2;
    pcVar1->field_0050 = 0;
    pcVar1->field_0054 = 0;
    pcVar1 = pcVar6->field_0008;
    pcVar6->field_0028 = param_6;
    pcVar6->field_002C = param_7;
    pcVar1->field_0058 = param_6;
    pcVar1->field_005C = param_7;
    puVar9 = (uint *)FUN_006b0140(0x267a,DAT_00807618);
    iVar7 = FUN_007111c0(pcVar6->field_0008,puVar9);
    iVar7 = pcVar6->field_002C + iVar7;
    iVar10 = (int)pcVar6->field_0020 / iVar7;
    pcVar6->field_0034 = iVar7;
    pcVar6->field_0030 = iVar10;
    if (iVar10 < 1) {
      RaiseInternalException(-6,DAT_007ed77c,s_E____titans_grig_loading_cpp_007c8f0c,0xa3);
    }
    pcVar6->field_0058 = param_8;
    pcVar6->field_0054 = param_9;
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    FUN_006b4640(DAT_0080759c,0,0,(BITMAPINFO *)pcVar6->field_0000,(uint *)0x0);
    Library::DKW::DDX::FUN_006bb370(DAT_0080759c,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar10 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0xac,0,iVar7,&DAT_007a4ccc,
                              s_cLoadingTy__InitParam_007c8f60);
  if (iVar10 != 0) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  RaiseInternalException(iVar7,0,s_E____titans_grig_loading_cpp_007c8f0c,0xad);
  return;
}


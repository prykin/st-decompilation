
void __thiscall
PanelTy::PaintIBut(PanelTy *this,int param_1,char *param_2,UINT param_3,int param_4,int param_5)

{
  code *pcVar1;
  PanelTy *pPVar2;
  undefined4 *errorCode;
  undefined4 uVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  byte bVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  InternalExceptionFrame IStack_58;
  int *piStack_14;
  PanelTy *pPStack_10;
  int iStack_c;
  int iStack_8;
  
  piStack_14 = *(int **)(param_1 + 0x18);
  if (param_4 == 0) {
    iStack_8 = *piStack_14;
  }
  else {
    iStack_8 = *piStack_14;
    iVar9 = DAT_00806730;
    if (*(int *)(this + 0x5c) == 0) goto LAB_00538de2;
  }
  iVar9 = *(int *)(this + 0x3c);
LAB_00538de2:
  iStack_8 = iStack_8 - iVar9;
  if (param_5 == 0) {
    iStack_c = piStack_14[1] - *(int *)(this + 0x44);
  }
  else if (*(int *)(this + 0x5c) == 0) {
    iStack_c = piStack_14[1] - DAT_00806734;
  }
  else {
    iStack_c = piStack_14[1] - *(int *)(this + 0x44);
  }
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  pPStack_10 = this;
  errorCode = (undefined4 *)__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar2 = pPStack_10;
  if (errorCode != (undefined4 *)0x0) {
    g_currentExceptionFrame = IStack_58.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_panel_cpp_007c7390,0xdf,0,(int)errorCode,
                               &DAT_007a4ccc,s_PanelTy__PaintIBut_007c7460);
    if (iVar9 == 0) {
      RaiseInternalException((int)errorCode,0,s_E____titans_Andrey_panel_cpp_007c7390,0xdf);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar9 = 1;
  uVar7 = 0xffffffff;
  puVar10 = errorCode;
  puVar12 = errorCode;
  uVar3 = thunk_FUN_00529fe0(param_1);
  bVar8 = (byte)errorCode;
  pbVar4 = (byte *)FUN_006f2c00(param_2,1,uVar3);
  puVar5 = FUN_00709af0(DAT_00806794,1,pbVar4,uVar7,bVar8,iVar9,(int)puVar10,puVar12);
  iVar9 = iStack_c;
  thunk_FUN_00540760(*(undefined4 **)(pPVar2 + 0x68),iStack_8,iStack_c,'\x01',(byte *)puVar5);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_00802a28 + 0x24),*(int *)(pPVar2 + 0x68),0,iStack_8,iVar9,
                   piStack_14[2],piStack_14[3]);
  uVar3 = thunk_FUN_00529fe0(param_1);
  iVar11 = -1;
  iVar9 = -2;
  puVar6 = (uint *)FUN_006b0140(param_3,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_00802a28 + 0x24),puVar6,iVar9,iVar11,uVar3);
  FUN_006b3640(DAT_008075a8,*(uint *)(pPVar2 + 0x60),0xffffffff,*(uint *)(pPVar2 + 0x3c),
               *(uint *)(pPVar2 + 0x44));
  g_currentExceptionFrame = IStack_58.previous;
  return;
}


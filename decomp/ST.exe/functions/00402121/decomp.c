
void __thiscall
PanelTy::PaintIBut(PanelTy *this,int param_1,char *param_2,UINT param_3,int param_4,int param_5)

{
  code *pcVar1;
  PanelTy *pPVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte *pbVar5;
  ushort *puVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
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
    iVar10 = DAT_00806730;
    if (*(int *)(this + 0x5c) == 0) goto LAB_00538de2;
  }
  iVar10 = *(int *)(this + 0x3c);
LAB_00538de2:
  iStack_8 = iStack_8 - iVar10;
  if (param_5 == 0) {
    iStack_c = piStack_14[1] - *(int *)(this + 0x44);
  }
  else if (*(int *)(this + 0x5c) == 0) {
    iStack_c = piStack_14[1] - DAT_00806734;
  }
  else {
    iStack_c = piStack_14[1] - *(int *)(this + 0x44);
  }
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  pPStack_10 = this;
  puVar3 = (undefined4 *)__setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  pPVar2 = pPStack_10;
  if (puVar3 != (undefined4 *)0x0) {
    DAT_00858df8 = (undefined4 *)uStack_58;
    iVar10 = FUN_006ad4d0(s_E____titans_Andrey_panel_cpp_007c7390,0xdf,0,(int)puVar3,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40((int)puVar3,0,0x7c7390,0xdf);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar10 = 1;
  uVar8 = 0xffffffff;
  puVar11 = puVar3;
  puVar13 = puVar3;
  uVar4 = thunk_FUN_00529fe0(param_1);
  bVar9 = (byte)puVar3;
  pbVar5 = (byte *)FUN_006f2c00(param_2,1,uVar4);
  puVar6 = FUN_00709af0(DAT_00806794,1,pbVar5,uVar8,bVar9,iVar10,(int)puVar11,puVar13);
  iVar10 = iStack_c;
  thunk_FUN_00540760(*(undefined4 **)(pPVar2 + 0x68),iStack_8,iStack_c,'\x01',(byte *)puVar6);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_00802a28 + 0x24),*(int *)(pPVar2 + 0x68),0,iStack_8,iVar10,
                   piStack_14[2],piStack_14[3]);
  uVar4 = thunk_FUN_00529fe0(param_1);
  iVar12 = -1;
  iVar10 = -2;
  puVar7 = (uint *)FUN_006b0140(param_3,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_00802a28 + 0x24),puVar7,iVar10,iVar12,uVar4);
  FUN_006b3640(DAT_008075a8,*(uint *)(pPVar2 + 0x60),0xffffffff,*(uint *)(pPVar2 + 0x3c),
               *(uint *)(pPVar2 + 0x44));
  DAT_00858df8 = (undefined4 *)uStack_58;
  return;
}


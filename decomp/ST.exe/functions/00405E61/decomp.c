
void __thiscall HelpPanelTy::TTreeProc(HelpPanelTy *this,uint param_1,char param_2)

{
  HelpPanelTy HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar10;
  undefined3 extraout_var_01;
  uint uVar11;
  UINT UVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar13;
  int iVar14;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  HelpPanelTy *pHStack_14;
  undefined4 *puStack_10;
  uint uStack_c;
  byte *pbStack_8;
  
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  pHStack_14 = this;
  iVar5 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  this_00 = pHStack_14;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_58;
    iVar13 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x4aa,0,iVar5,&DAT_007a4ccc);
    if (iVar13 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c383c,0x4aa);
    return;
  }
  if (param_2 == '\0') {
    HVar1 = pHStack_14[0x1a1];
    if (((HVar1 == (HelpPanelTy)0x0) || (HVar1 == (HelpPanelTy)0x6)) || (HVar1 == (HelpPanelTy)0xa))
    {
      pHStack_14[0x1a2] = HVar1;
      *(undefined4 *)(pHStack_14 + 0x1ab) = *(undefined4 *)(pHStack_14 + 0x1a3);
    }
    else {
      pHStack_14[0x1a2] = (HelpPanelTy)0x0;
      *(undefined4 *)(pHStack_14 + 0x1ab) = 0;
    }
    pHStack_14[0x1a1] = (HelpPanelTy)0x6;
    *(uint *)(pHStack_14 + 0x1a3) = param_1;
    *(undefined2 *)(pHStack_14 + 0x1af) = 0x23;
    *(undefined2 *)(pHStack_14 + 0x1b1) = 10;
    if (*(int *)(pHStack_14 + 0x178) != 0) {
      *(undefined4 *)(pHStack_14 + 0x28) = 0x4202;
      *(undefined2 *)(pHStack_14 + 0x2c) = 0;
      *(undefined2 *)(pHStack_14 + 0x2e) = 2;
      *(int *)(pHStack_14 + 0x30) = *(int *)(pHStack_14 + 0x178);
      if (DAT_00802a30 != (undefined4 *)0x0) {
        (**(code **)*DAT_00802a30)(pHStack_14 + 0x18);
      }
    }
  }
  if (*(uint *)(this_00 + 0x19c) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x19c));
  }
  FUN_006b55f0(*(undefined4 **)(this_00 + 0x68),0,0x21,0x16,*(int *)(this_00 + 0x1dc),0,0x21,0x16,
               0x1b8,0x118);
  if (param_1 == 1) {
    pbStack_8 = (byte *)((uint)pbStack_8._1_3_ << 8);
    UVar12 = 0x5604;
    puStack_10 = (undefined4 *)&DAT_007c2b58;
    uStack_c = 0x33;
  }
  else if (param_1 == 2) {
    pbStack_8 = (byte *)CONCAT31(pbStack_8._1_3_,1);
    UVar12 = 0x5605;
    puStack_10 = (undefined4 *)&DAT_007c2df0;
    uStack_c = 0x39;
  }
  else {
    pbStack_8 = (byte *)CONCAT31(pbStack_8._1_3_,2);
    UVar12 = 0x5606;
    puStack_10 = &DAT_007c30d8;
    uStack_c = 0x46;
  }
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e4),*(int *)(this_00 + 0x68),0,0x21,0x16,0x19c,0x14);
  if (DAT_0080874e == 3) {
    iVar5 = 5;
  }
  else {
    iVar5 = (-(uint)(DAT_0080874e != 1) & 6) + 1;
  }
  iVar14 = -1;
  iVar13 = -1;
  puVar6 = (uint *)FUN_006b0140(0x55f4,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e4),puVar6,iVar13,iVar14,iVar5);
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x68),0,0x21,0x2a,0x19c,0xf);
  uVar7 = (DAT_0080874e != 3) - 1 & 5;
  iVar13 = -1;
  iVar5 = -1;
  puVar6 = (uint *)FUN_006b0140(UVar12,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar6,iVar5,iVar13,uVar7);
  iVar5 = *(int *)(this_00 + 0x218);
  uVar7 = *(uint *)(iVar5 + 0x14);
  if (uVar7 == 0) {
    uVar7 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(iVar5 + 8);
  }
  puVar8 = (undefined4 *)FUN_006b4fa0(iVar5);
  for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar8 = 0xff;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x224),(uint)pbStack_8 & 0xff);
  pbStack_8 = pbVar9;
  thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),0,0,'\x06',pbVar9);
  if ((param_1 == DAT_0080874e) && ((short)uStack_c != 0)) {
    pbVar9 = (byte *)(puStack_10 + 1);
    puStack_10 = (undefined4 *)(uStack_c & 0xffff);
    do {
      bVar3 = thunk_FUN_004e5910((uint)DAT_0080874d,*(uint *)(pbVar9 + -4));
      if (CONCAT31(extraout_var,bVar3) == 0) {
LAB_00516776:
        iVar5 = *(int *)(this_00 + 0x22c);
      }
      else {
        uVar4 = thunk_FUN_004e6140((uint)DAT_0080874d,*(int *)(pbVar9 + -4));
        if (CONCAT31(extraout_var_00,uVar4) < (int)(uint)*pbVar9) goto LAB_00516776;
        iVar5 = thunk_FUN_004e60d0((uint)DAT_0080874d,*(int *)(pbVar9 + -4));
        if (iVar5 < (int)(uint)*pbVar9) goto LAB_00516776;
        iVar5 = *(int *)(this_00 + 0x228);
      }
      uVar7 = thunk_FUN_005276e0(pbVar9[-4],*pbVar9);
      pbVar10 = (byte *)FUN_0070b3a0(iVar5,uVar7);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),*(int *)(pbVar9 + 1),*(int *)(pbVar9 + 5)
                         ,'\x01',pbVar10);
      bVar3 = thunk_FUN_004e5910((uint)DAT_0080874d,*(uint *)(pbVar9 + -4));
      if (CONCAT31(extraout_var_01,bVar3) != 0) {
        iVar5 = thunk_FUN_004e5cc0((uint)DAT_0080874d,*(uint *)(pbVar9 + -4),(uint)*pbVar9);
        if (iVar5 != 0) {
          pbVar10 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x248),0);
          thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x218),*(int *)(pbVar9 + 1),
                             *(int *)(pbVar9 + 5),'\x06',pbVar10);
        }
      }
      pbVar9 = pbVar9 + 0xd;
      puStack_10 = (undefined4 *)((int)puStack_10 - 1);
    } while (puStack_10 != (undefined4 *)0x0);
    puStack_10 = (undefined4 *)0x0;
    pbVar9 = pbStack_8;
  }
  iVar5 = *(int *)(pbVar9 + 8) + -0x118 + (uint)*(ushort *)(this_00 + 0x1af);
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uint)(iVar5 % (int)(uint)*(ushort *)(this_00 + 0x1b1) != 0) +
            iVar5 / (int)(uint)*(ushort *)(this_00 + 0x1b1);
  }
  CreateSlider(this_00,iVar5);
  FUN_006b5110(*(int *)(this_00 + 0x68),0,0x21,*(ushort *)(this_00 + 0x1af) + 0x16,
               *(int *)(this_00 + 0x218),0,0,0,0x19c,0x117 - (uint)*(ushort *)(this_00 + 0x1af),0xff
              );
  FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
               *(uint *)(this_00 + 0x44));
  DAT_00858df8 = (undefined4 *)uStack_58;
  return;
}


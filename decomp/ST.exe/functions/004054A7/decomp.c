
void __thiscall BldBoatPanelTy::InitBldBoatPanel(BldBoatPanelTy *this)

{
  code *pcVar1;
  BldBoatPanelTy *this_00;
  byte bVar2;
  uint *puVar3;
  undefined4 *puVar4;
  LPSTR pCVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ProdPanelTy *pPVar11;
  bool bVar12;
  int *piVar13;
  int aiStack_2e8 [11];
  undefined4 auStack_2bc [3];
  undefined4 auStack_2b0 [4];
  undefined4 auStack_2a0 [4];
  undefined4 auStack_290 [3];
  undefined4 auStack_284 [115];
  undefined4 *puStack_b8;
  undefined4 auStack_b4 [16];
  undefined4 auStack_74 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  BldBoatPanelTy *pBStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  puVar4 = auStack_74;
  pBStack_1c = this;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  piVar13 = aiStack_2e8;
  for (iVar8 = 0x8c; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar13 = 0;
    piVar13 = piVar13 + 1;
  }
  puStack_b8 = DAT_00858df8;
  DAT_00858df8 = &puStack_b8;
  iVar8 = __setjmp3(auStack_b4,0,unaff_EDI,unaff_ESI);
  this_00 = pBStack_1c;
  if (iVar8 != 0) {
    DAT_00858df8 = puStack_b8;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_bldboat_cpp_007c17b4,0x3f,0,iVar8,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar8,0,0x7c17b4,0x3f);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar8 = 4;
  DAT_0080167c = (ProdPanelTy *)pBStack_1c;
  pPVar11 = (ProdPanelTy *)(pBStack_1c + 0x27a);
  do {
    puVar3 = FUN_006ae290((uint *)0x0,10,0x30,5);
    *(uint **)pPVar11 = puVar3;
    pPVar11 = pPVar11 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *(int *)(this_00 + 0x3c) = *(int *)(this_00 + 0x3c) + (DAT_00806730 + -800) / 2;
  puVar4 = FUN_0070ceb0(0x19d,DAT_00806790,s_HOLD_FONT_007c1844,0);
  *(undefined4 **)(this_00 + 0x28a) = puVar4;
  puVar4[0x16] = 1;
  puVar4[0x17] = 0;
  iVar8 = 1;
  piVar13 = (int *)0x0;
  pCVar5 = thunk_FUN_00571240(s_BKG_BLDBOATW_007c1834,0);
  puVar6 = FUN_006f1ce0(1,pCVar5,piVar13,iVar8);
  *(ushort **)(this_00 + 0x184) = puVar6;
  pPVar11 = (ProdPanelTy *)(this_00 + 0x6c);
  pCVar5 = thunk_FUN_00571240(s_BKG_BLDBOATBUT_007c1820,0);
  wsprintfA((LPSTR)pPVar11,&DAT_007c181c,pCVar5);
  puVar6 = FUN_006f1ce0(1,(char *)pPVar11,(int *)0x0,1);
  *(ushort **)(this_00 + 0x28e) = puVar6;
  if (DAT_0080874d == 0xff) {
    iVar8 = 1;
  }
  else {
    iVar8 = DAT_0080874d + 1;
  }
  wsprintfA((LPSTR)pPVar11,s_BOATS__d_007c1810,iVar8);
  puVar6 = FUN_00709af0(DAT_00806794,0xb,(byte *)pPVar11,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(this_00 + 0x188) = puVar6;
  puVar6 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BOATS_D_007c1804,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_00 + 0x18c) = puVar6;
  pCVar5 = thunk_FUN_00571240(s_BKG_BLDBOATBUT_007c1820,0);
  ProdPanelTy::InitProdPanel
            ((ProdPanelTy *)this_00,0x2723,0x3f,2,0xc1,0xc,0x85,99,0x68,0xc4,99,0x20,0x13,0x33,
             pCVar5);
  uStack_8 = uStack_8 & 0xffffff00;
  iStack_10 = (DAT_0080874e != '\x03') + 3;
  if (iStack_10 != 0) {
    iStack_18 = *(int *)(this_00 + 0x3c);
    iStack_14 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffea) + 0x5e;
    uVar9 = 0;
    iStack_c = *(int *)(this_00 + 0x5c);
    do {
      iVar8 = iStack_14;
      aiStack_2e8[uVar9 * 0x1c] = uVar9 + 1;
      aiStack_2e8[uVar9 * 0x1c + 1] = 0;
      aiStack_2e8[uVar9 * 0x1c + 3] = iVar8 + uVar9 * 0x2c + iStack_18;
      bVar12 = iStack_c != 0;
      aiStack_2e8[uVar9 * 0x1c + 5] = 0x2b;
      iVar8 = DAT_00806734;
      if (bVar12) {
        iVar8 = *(int *)(this_00 + 0x44);
      }
      aiStack_2e8[uVar9 * 0x1c + 4] = iVar8 + 0x3d;
      aiStack_2e8[uVar9 * 0x1c + 6] = 0x1b;
      auStack_2a0[uVar9 * 0x1c] = 0;
      auStack_290[uVar9 * 0x1c] = 0x101;
      auStack_2bc[uVar9 * 0x1c] = 0x101;
      auStack_290[uVar9 * 0x1c + 1] = 3;
      auStack_2bc[uVar9 * 0x1c + 1] = 3;
      auStack_2bc[uVar9 * 0x1c + 2] = 0x4201;
      auStack_290[uVar9 * 0x1c + 2] = 0x4202;
      *(undefined2 *)(auStack_284 + uVar9 * 0x1c) = 0;
      *(undefined2 *)(auStack_2b0 + uVar9 * 0x1c) = 0;
      *(undefined2 *)((int)auStack_284 + (uVar9 * 0x38 + 1) * 2) = 2;
      *(undefined2 *)((int)auStack_2b0 + (uVar9 * 0x38 + 1) * 2) = 2;
      switch(uVar9) {
      case 0:
        uVar10 = 0x3a9f;
        break;
      case 1:
        uVar10 = 0x3aa0;
        break;
      case 2:
        uVar10 = 0x3aa2;
        break;
      case 3:
        uVar10 = 0x3aa1;
        break;
      default:
        goto switchD_004eed0b_default;
      }
      auStack_284[uVar9 * 0x1c + 1] = uVar10;
      auStack_2b0[uVar9 * 0x1c + 1] = uVar10;
switchD_004eed0b_default:
      bVar2 = (char)uStack_8 + 1;
      uStack_8 = CONCAT31(uStack_8._1_3_,bVar2);
      uVar9 = (uint)bVar2;
    } while ((int)uVar9 < iStack_10);
  }
  piStack_2c = aiStack_2e8;
  iStack_28 = (byte)*(ProdPanelTy *)(this_00 + 0x278) + 1;
  uStack_64 = *(undefined4 *)(this_00 + 8);
  uStack_60 = 2;
  uStack_40 = 2;
  auStack_74[0] = 1;
  auStack_74[1] = 1;
  uStack_5c = 0xb201;
  uStack_3c = 0xb202;
  uStack_24 = 1;
  uStack_20 = 1;
  uStack_44 = uStack_64;
  (**(code **)(**(int **)(this_00 + 0xc) + 8))(5,(ProdPanelTy *)(this_00 + 0x292),0,auStack_74,0);
  DAT_00858df8 = puStack_b8;
  return;
}


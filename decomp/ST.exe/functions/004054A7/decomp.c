
void thunk_FUN_004eea40(void)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  uint *puVar4;
  undefined4 *puVar5;
  LPSTR pCVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
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
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  puVar5 = auStack_74;
  for (iVar9 = 0x16; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  piVar13 = aiStack_2e8;
  for (iVar9 = 0x8c; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar13 = 0;
    piVar13 = piVar13 + 1;
  }
  puStack_b8 = DAT_00858df8;
  DAT_00858df8 = &puStack_b8;
  iVar9 = __setjmp3(auStack_b4,0,unaff_EDI,unaff_ESI);
  if (iVar9 != 0) {
    DAT_00858df8 = puStack_b8;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_bldboat_cpp_007c17b4,0x3f,0,iVar9,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar9,0,0x7c17b4,0x3f);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = 4;
  DAT_0080167c = iStack_1c;
  puVar5 = (undefined4 *)(iStack_1c + 0x27a);
  do {
    puVar4 = FUN_006ae290((uint *)0x0,10,0x30,5);
    *puVar5 = puVar4;
    puVar5 = puVar5 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(int *)(iStack_1c + 0x3c) = *(int *)(iStack_1c + 0x3c) + (DAT_00806730 + -800) / 2;
  puVar5 = FUN_0070ceb0(0x19d,DAT_00806790,s_HOLD_FONT_007c1844,0);
  *(undefined4 **)(iStack_1c + 0x28a) = puVar5;
  puVar5[0x16] = 1;
  puVar5[0x17] = 0;
  iVar9 = 1;
  piVar13 = (int *)0x0;
  pCVar6 = thunk_FUN_00571240(s_BKG_BLDBOATW_007c1834,0);
  puVar7 = FUN_006f1ce0(1,pCVar6,piVar13,iVar9);
  *(ushort **)(iStack_1c + 0x184) = puVar7;
  pbVar1 = (byte *)(iStack_1c + 0x6c);
  pCVar6 = thunk_FUN_00571240(s_BKG_BLDBOATBUT_007c1820,0);
  wsprintfA((LPSTR)pbVar1,&DAT_007c181c,pCVar6);
  puVar7 = FUN_006f1ce0(1,(char *)pbVar1,(int *)0x0,1);
  *(ushort **)(iStack_1c + 0x28e) = puVar7;
  if (DAT_0080874d == 0xff) {
    iVar9 = 1;
  }
  else {
    iVar9 = DAT_0080874d + 1;
  }
  wsprintfA((LPSTR)pbVar1,s_BOATS__d_007c1810,iVar9);
  puVar7 = FUN_00709af0(DAT_00806794,0xb,pbVar1,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(iStack_1c + 0x188) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BOATS_D_007c1804,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(iStack_1c + 0x18c) = puVar7;
  pCVar6 = thunk_FUN_00571240(s_BKG_BLDBOATBUT_007c1820,0);
  thunk_FUN_0053ef20(0x2723,0x3f,2,0xc1,0xc,0x85,99,0x68,0xc4,99,0x20,0x13,0x33,pCVar6);
  uStack_8 = uStack_8 & 0xffffff00;
  iStack_10 = (DAT_0080874e != '\x03') + 3;
  if (iStack_10 != 0) {
    iStack_18 = *(int *)(iStack_1c + 0x3c);
    iStack_14 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffea) + 0x5e;
    uVar10 = 0;
    iStack_c = *(int *)(iStack_1c + 0x5c);
    do {
      iVar9 = iStack_14;
      aiStack_2e8[uVar10 * 0x1c] = uVar10 + 1;
      aiStack_2e8[uVar10 * 0x1c + 1] = 0;
      aiStack_2e8[uVar10 * 0x1c + 3] = iVar9 + uVar10 * 0x2c + iStack_18;
      bVar12 = iStack_c != 0;
      aiStack_2e8[uVar10 * 0x1c + 5] = 0x2b;
      iVar9 = DAT_00806734;
      if (bVar12) {
        iVar9 = *(int *)(iStack_1c + 0x44);
      }
      aiStack_2e8[uVar10 * 0x1c + 4] = iVar9 + 0x3d;
      aiStack_2e8[uVar10 * 0x1c + 6] = 0x1b;
      auStack_2a0[uVar10 * 0x1c] = 0;
      auStack_290[uVar10 * 0x1c] = 0x101;
      auStack_2bc[uVar10 * 0x1c] = 0x101;
      auStack_290[uVar10 * 0x1c + 1] = 3;
      auStack_2bc[uVar10 * 0x1c + 1] = 3;
      auStack_2bc[uVar10 * 0x1c + 2] = 0x4201;
      auStack_290[uVar10 * 0x1c + 2] = 0x4202;
      *(undefined2 *)(auStack_284 + uVar10 * 0x1c) = 0;
      *(undefined2 *)(auStack_2b0 + uVar10 * 0x1c) = 0;
      *(undefined2 *)((int)auStack_284 + (uVar10 * 0x38 + 1) * 2) = 2;
      *(undefined2 *)((int)auStack_2b0 + (uVar10 * 0x38 + 1) * 2) = 2;
      switch(uVar10) {
      case 0:
        uVar11 = 0x3a9f;
        break;
      case 1:
        uVar11 = 0x3aa0;
        break;
      case 2:
        uVar11 = 0x3aa2;
        break;
      case 3:
        uVar11 = 0x3aa1;
        break;
      default:
        goto switchD_004eed0b_default;
      }
      auStack_284[uVar10 * 0x1c + 1] = uVar11;
      auStack_2b0[uVar10 * 0x1c + 1] = uVar11;
switchD_004eed0b_default:
      bVar3 = (char)uStack_8 + 1;
      uStack_8 = CONCAT31(uStack_8._1_3_,bVar3);
      uVar10 = (uint)bVar3;
    } while ((int)uVar10 < iStack_10);
  }
  piStack_2c = aiStack_2e8;
  iStack_28 = *(byte *)(iStack_1c + 0x278) + 1;
  uStack_64 = *(undefined4 *)(iStack_1c + 8);
  uStack_60 = 2;
  uStack_40 = 2;
  auStack_74[0] = 1;
  auStack_74[1] = 1;
  uStack_5c = 0xb201;
  uStack_3c = 0xb202;
  uStack_24 = 1;
  uStack_20 = 1;
  uStack_44 = uStack_64;
  (**(code **)(**(int **)(iStack_1c + 0xc) + 8))(5,iStack_1c + 0x292,0,auStack_74,0);
  DAT_00858df8 = puStack_b8;
  return;
}


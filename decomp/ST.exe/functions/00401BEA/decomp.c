
void thunk_FUN_004f05c0(void)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  bool bVar11;
  int *piVar12;
  int aiStack_358 [11];
  undefined4 auStack_32c [3];
  undefined4 auStack_320 [4];
  undefined4 auStack_310 [4];
  undefined4 auStack_300 [3];
  undefined4 auStack_2f4 [143];
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
  
  puVar10 = auStack_74;
  for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  piVar12 = aiStack_358;
  for (iVar7 = 0xa8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  puStack_b8 = DAT_00858df8;
  DAT_00858df8 = &puStack_b8;
  iVar7 = __setjmp3(auStack_b4,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = puStack_b8;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_bldobj_cpp_007c1984,0x3d,0,iVar7,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar7,0,0x7c1984,0x3d);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar7 = 5;
  DAT_00801684 = iStack_1c;
  puVar10 = (undefined4 *)(iStack_1c + 0x27e);
  do {
    puVar3 = FUN_006ae290((uint *)0x0,10,0x30,5);
    *puVar10 = puVar3;
    puVar10 = puVar10 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 1;
  *(int *)(iStack_1c + 0x3c) = *(int *)(iStack_1c + 0x3c) + (DAT_00806730 + -800) / 2;
  piVar12 = (int *)0x0;
  pCVar4 = thunk_FUN_00571240(s_BKG_BLDOBJW_007c19e0,0);
  puVar5 = FUN_006f1ce0(1,pCVar4,piVar12,iVar7);
  *(ushort **)(iStack_1c + 0x184) = puVar5;
  pCVar4 = thunk_FUN_00571240(s_BKG_BLDOBJBUT_007c19d0,0);
  wsprintfA((LPSTR)(iStack_1c + 0x6c),&DAT_007c181c,pCVar4);
  puVar5 = FUN_006f1ce0(1,(LPSTR)(iStack_1c + 0x6c),(int *)0x0,1);
  *(ushort **)(iStack_1c + 0x27a) = puVar5;
  puVar5 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(iStack_1c + 0x188) = puVar5;
  puVar5 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_OBJSD_007c1908,0xffffffff,0,1,0,(undefined4 *)0x0
                       );
  *(ushort **)(iStack_1c + 0x18c) = puVar5;
  pCVar4 = thunk_FUN_00571240(s_BKG_BLDOBJBUT_007c19d0,0);
  thunk_FUN_0053ef20(0x2724,0x36,2,0xc1,0xc,0x79,99,0x5b,0xb7,99,0x1c,
                     (DAT_0080874e == '\x03') + 0x13,0x31,pCVar4);
  uStack_8 = uStack_8 & 0xffffff00;
  iStack_10 = (DAT_0080874e != '\x03') + 4;
  if (iStack_10 != 0) {
    iStack_18 = *(int *)(iStack_1c + 0x3c);
    iStack_c = *(int *)(iStack_1c + 0x5c);
    iStack_14 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffeb) + 0x3d;
    uVar8 = 0;
    do {
      iVar7 = iStack_14;
      aiStack_358[uVar8 * 0x1c] = uVar8 + 1;
      aiStack_358[uVar8 * 0x1c + 1] = 0;
      aiStack_358[uVar8 * 0x1c + 3] = iVar7 + uVar8 * 0x2c + iStack_18;
      bVar11 = iStack_c != 0;
      aiStack_358[uVar8 * 0x1c + 5] = 0x2b;
      iVar7 = DAT_00806734;
      if (bVar11) {
        iVar7 = *(int *)(iStack_1c + 0x44);
      }
      aiStack_358[uVar8 * 0x1c + 4] = iVar7 + 0x3d;
      aiStack_358[uVar8 * 0x1c + 6] = 0x1b;
      auStack_310[uVar8 * 0x1c] = 0;
      auStack_300[uVar8 * 0x1c] = 0x101;
      auStack_32c[uVar8 * 0x1c] = 0x101;
      auStack_300[uVar8 * 0x1c + 1] = 3;
      auStack_32c[uVar8 * 0x1c + 1] = 3;
      auStack_32c[uVar8 * 0x1c + 2] = 0x4201;
      auStack_300[uVar8 * 0x1c + 2] = 0x4202;
      *(undefined2 *)(auStack_2f4 + uVar8 * 0x1c) = 0;
      *(undefined2 *)(auStack_320 + uVar8 * 0x1c) = 0;
      *(undefined2 *)((int)auStack_2f4 + (uVar8 * 0x38 + 1) * 2) = 2;
      *(undefined2 *)((int)auStack_320 + (uVar8 * 0x38 + 1) * 2) = 2;
      switch(uVar8) {
      case 0:
        uVar9 = 0x3a9b;
        break;
      case 1:
        uVar9 = 0x3a9c;
        break;
      case 2:
        uVar9 = 0x3a9d;
        break;
      case 3:
        uVar9 = 0x3aa8;
        break;
      case 4:
        uVar9 = 0x3a9e;
        break;
      default:
        goto switchD_004f0850_default;
      }
      auStack_2f4[uVar8 * 0x1c + 1] = uVar9;
      auStack_320[uVar8 * 0x1c + 1] = uVar9;
switchD_004f0850_default:
      bVar2 = (char)uStack_8 + 1;
      uStack_8 = CONCAT31(uStack_8._1_3_,bVar2);
      uVar8 = (uint)bVar2;
    } while ((int)uVar8 < iStack_10);
  }
  piStack_2c = aiStack_358;
  iStack_28 = *(byte *)(iStack_1c + 0x278) + 1;
  uStack_64 = *(undefined4 *)(iStack_1c + 8);
  auStack_74[0] = 1;
  auStack_74[1] = 1;
  uStack_60 = 2;
  uStack_5c = 0xb205;
  uStack_40 = 2;
  uStack_3c = 0xb206;
  uStack_24 = 1;
  uStack_20 = 1;
  uStack_44 = uStack_64;
  (**(code **)(**(int **)(iStack_1c + 0xc) + 8))(5,iStack_1c + 0x292,0,auStack_74,0);
  DAT_00858df8 = puStack_b8;
  return;
}


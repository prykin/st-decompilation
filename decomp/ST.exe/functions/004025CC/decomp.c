
void thunk_FUN_004ffe90(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  byte *pbVar10;
  char *pcVar11;
  void *unaff_EDI;
  int *piVar12;
  byte *pbVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 uStack_88;
  undefined4 auStack_84 [16];
  undefined1 auStack_44 [7];
  char cStack_3d;
  int iStack_3c;
  byte abStack_38 [15];
  char cStack_29;
  char cStack_28;
  char cStack_27;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  char acStack_1a [14];
  void *pvStack_c;
  byte bStack_8;
  undefined3 uStack_7;
  
  uStack_88 = DAT_00858df8;
  DAT_00858df8 = &uStack_88;
  iVar7 = __setjmp3(auStack_84,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_88;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1c2,0,iVar7,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_006a5e40(iVar7,0,0x7c23cc,0x1c2);
    return;
  }
  piVar1 = (int *)((int)pvStack_c + 0xc51);
  piVar9 = piVar1;
  piVar12 = (int *)auStack_44;
  for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar12 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar12 = piVar12 + 1;
  }
  *(short *)piVar12 = (short)*piVar9;
  piVar9 = piVar1;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  *(undefined2 *)piVar9 = 0;
  thunk_FUN_0043beb0(DAT_007fa174,5,piVar1);
  if (auStack_44[0] != *(char *)((int)pvStack_c + 0xc51)) {
    if (DAT_008016e8 != (void *)0x0) {
      thunk_FUN_0053f650(DAT_008016e8,'\0');
    }
    if (DAT_0080167c != (void *)0x0) {
      thunk_FUN_0053f650(DAT_0080167c,'\0');
    }
    if (DAT_00801698 != (int *)0x0) {
      (**(code **)(*DAT_00801698 + 0x1c))(0);
    }
    if (DAT_00802a44 != (void *)0x0) {
      thunk_FUN_00552160(DAT_00802a44,'\0','\0');
    }
    if (DAT_00801680 != (void *)0x0) {
      thunk_FUN_0053f650(DAT_00801680,'\0');
    }
    thunk_FUN_004ff110(pvStack_c,0);
    thunk_FUN_004fee10();
    DAT_00858df8 = (undefined4 *)uStack_88;
    return;
  }
  if (*(char *)((int)pvStack_c + 0xc6e) != cStack_27) {
    if (DAT_008016e8 != (void *)0x0) {
      thunk_FUN_0053f650(DAT_008016e8,'\0');
    }
    if (DAT_0080167c != (void *)0x0) {
      thunk_FUN_0053f650(DAT_0080167c,'\0');
    }
    if (DAT_00801698 != (int *)0x0) {
      (**(code **)(*DAT_00801698 + 0x1c))(0);
    }
    if (DAT_00802a44 != (void *)0x0) {
      thunk_FUN_00552160(DAT_00802a44,'\0','\0');
    }
    if (DAT_00801680 != (void *)0x0) {
      thunk_FUN_0053f650(DAT_00801680,'\0');
    }
  }
  cVar2 = *(char *)((int)pvStack_c + 0xc51);
  if (((cVar2 == '\x01') || (cVar2 == '\x04')) || (cVar2 == '\x03')) {
    if (((iStack_3c != *(int *)((int)pvStack_c + 0xc59)) ||
        (auStack_44[1] != *(char *)((int)pvStack_c + 0xc52))) ||
       (auStack_44[2] != *(char *)((int)pvStack_c + 0xc53))) {
      if (DAT_008016e8 != (void *)0x0) {
        thunk_FUN_0053f650(DAT_008016e8,'\0');
      }
      if (DAT_0080167c != (void *)0x0) {
        thunk_FUN_0053f650(DAT_0080167c,'\0');
      }
      if (DAT_00801698 != (int *)0x0) {
        (**(code **)(*DAT_00801698 + 0x1c))(0);
      }
      if (DAT_00802a44 != (void *)0x0) {
        thunk_FUN_00552160(DAT_00802a44,'\0','\0');
      }
      if (DAT_00801680 != (void *)0x0) {
        thunk_FUN_0053f650(DAT_00801680,'\0');
      }
      thunk_FUN_004ff110(pvStack_c,0);
    }
    if ((auStack_44._3_4_ != *(int *)((int)pvStack_c + 0xc54)) ||
       (cStack_3d != *(char *)((int)pvStack_c + 0xc58))) {
      FUN_006b55f0(*(undefined4 **)((int)pvStack_c + 0x19c),0,1,0,*(int *)((int)pvStack_c + 0xb47),0
                   ,1,0,0x4e,0x20);
      thunk_FUN_004fe370(0);
      if (-1 < (int)*(uint *)((int)pvStack_c + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_c + 0x164),0xffffffff,
                     *(uint *)((int)pvStack_c + 0x58),*(uint *)((int)pvStack_c + 0xb0));
      }
    }
    pbVar13 = (byte *)((int)pvStack_c + 0xc5d);
    pbVar10 = abStack_38;
    do {
      bVar6 = *pbVar10;
      bVar15 = bVar6 < *pbVar13;
      if (bVar6 != *pbVar13) {
LAB_00500121:
        iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00500126;
      }
      if (bVar6 == 0) break;
      bVar6 = pbVar10[1];
      bVar15 = bVar6 < pbVar13[1];
      if (bVar6 != pbVar13[1]) goto LAB_00500121;
      pbVar10 = pbVar10 + 2;
      pbVar13 = pbVar13 + 2;
    } while (bVar6 != 0);
    iVar7 = 0;
LAB_00500126:
    if (iVar7 != 0) {
      FUN_006b55f0(*(undefined4 **)((int)pvStack_c + 0x19c),0,1,0,*(int *)((int)pvStack_c + 0xb47),0
                   ,1,0,0x4e,0x20);
      thunk_FUN_004fe370(0);
      if (-1 < (int)*(uint *)((int)pvStack_c + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_c + 0x164),0xffffffff,
                     *(uint *)((int)pvStack_c + 0x58),*(uint *)((int)pvStack_c + 0xb0));
      }
    }
    if ((((cStack_29 != *(char *)((int)pvStack_c + 0xc6c)) ||
         (auStack_44[2] != *(char *)((int)pvStack_c + 0xc53))) &&
        (iVar7 = *(int *)((int)pvStack_c + 0xc54), iVar7 != 0xdd)) &&
       ((iVar7 != 0xde && (iVar7 != 0xe0)))) {
      FUN_006b55f0(*(undefined4 **)((int)pvStack_c + 0x19c),0,1,0x1f,
                   *(int *)((int)pvStack_c + 0xb47),0,1,0x1f,0x4e,0x11);
      thunk_FUN_004fe4f0(pvStack_c,0);
      if (-1 < (int)*(uint *)((int)pvStack_c + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_c + 0x164),0xffffffff,
                     *(uint *)((int)pvStack_c + 0x58),*(uint *)((int)pvStack_c + 0xb0));
      }
    }
    if (((DAT_0080874e == '\x03') && (*(char *)((int)pvStack_c + 0xc58) == '\x03')) &&
       ((cStack_28 != *(char *)((int)pvStack_c + 0xc6d) &&
        (((iVar7 = *(int *)((int)pvStack_c + 0xc54), iVar7 != 0xdd && (iVar7 != 0xde)) &&
         (iVar7 != 0xe0)))))) {
      thunk_FUN_004fe6c0(pvStack_c,0);
    }
    if (((((sStack_26 != *(short *)((int)pvStack_c + 0xc6f)) ||
          (sStack_22 != *(short *)((int)pvStack_c + 0xc73))) ||
         ((sStack_1e != *(short *)((int)pvStack_c + 0xc77) ||
          ((sStack_24 != *(short *)((int)pvStack_c + 0xc71) ||
           (sStack_20 != *(short *)((int)pvStack_c + 0xc75))))))) ||
        (sStack_1c != *(short *)((int)pvStack_c + 0xc79))) &&
       (((iVar7 = *(int *)((int)pvStack_c + 0xc54), iVar7 != 0xdd && (iVar7 != 0xde)) &&
        (iVar7 != 0xe0)))) {
      FUN_006b55f0(*(undefined4 **)((int)pvStack_c + 0x19c),0,1,0x2f,
                   *(int *)((int)pvStack_c + 0xb47),0,1,0x2f,0x4e,0x24);
      thunk_FUN_004f2560(pvStack_c,0);
      if (-1 < (int)*(uint *)((int)pvStack_c + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)pvStack_c + 0x164),0xffffffff,
                     *(uint *)((int)pvStack_c + 0x58),*(uint *)((int)pvStack_c + 0xb0));
      }
    }
    iVar7 = 5;
    bVar15 = true;
    pcVar11 = acStack_1a;
    pcVar14 = (char *)((int)pvStack_c + 0xc7b);
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar15 = *pcVar11 == *pcVar14;
      pcVar11 = pcVar11 + 1;
      pcVar14 = pcVar14 + 1;
    } while (bVar15);
    if ((!bVar15) || (auStack_44[2] != *(char *)((int)pvStack_c + 0xc53))) {
      thunk_FUN_00500520(pvStack_c,0);
      bVar6 = (DAT_0080874e != '\x03') + 5;
      _bStack_8 = CONCAT31(uStack_7,bVar6);
      if (bVar6 < 0xb) {
        uVar5 = (uint)bVar6;
        uVar3 = *(uint *)((int)pvStack_c + uVar5 * 4 + 0x148);
        if (-1 < (int)uVar3) {
          FUN_006b3640(DAT_008075a8,uVar3,0xffffffff,*(uint *)((int)pvStack_c + uVar5 * 4 + 0x3c),
                       *(uint *)((int)pvStack_c + uVar5 * 4 + 0x94));
        }
      }
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_88;
  return;
}


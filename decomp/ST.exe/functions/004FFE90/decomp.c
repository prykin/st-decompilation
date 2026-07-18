
void FUN_004ffe90(void)

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
  undefined4 local_88;
  undefined4 local_84 [16];
  undefined1 local_44 [7];
  char local_3d;
  int local_3c;
  byte local_38 [15];
  char local_29;
  char local_28;
  char local_27;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  char local_1a [14];
  void *local_c;
  byte local_8;
  undefined3 uStack_7;
  
  local_88 = DAT_00858df8;
  DAT_00858df8 = &local_88;
  iVar7 = __setjmp3(local_84,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_88;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1c2,0,iVar7,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_006a5e40(iVar7,0,0x7c23cc,0x1c2);
    return;
  }
  piVar1 = (int *)((int)local_c + 0xc51);
  piVar9 = piVar1;
  piVar12 = (int *)local_44;
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
  if (local_44[0] != *(char *)((int)local_c + 0xc51)) {
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
    thunk_FUN_004ff110(local_c,0);
    thunk_FUN_004fee10();
    DAT_00858df8 = (undefined4 *)local_88;
    return;
  }
  if (*(char *)((int)local_c + 0xc6e) != local_27) {
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
  cVar2 = *(char *)((int)local_c + 0xc51);
  if (((cVar2 == '\x01') || (cVar2 == '\x04')) || (cVar2 == '\x03')) {
    if (((local_3c != *(int *)((int)local_c + 0xc59)) ||
        (local_44[1] != *(char *)((int)local_c + 0xc52))) ||
       (local_44[2] != *(char *)((int)local_c + 0xc53))) {
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
      thunk_FUN_004ff110(local_c,0);
    }
    if ((local_44._3_4_ != *(int *)((int)local_c + 0xc54)) ||
       (local_3d != *(char *)((int)local_c + 0xc58))) {
      FUN_006b55f0(*(undefined4 **)((int)local_c + 0x19c),0,1,0,*(int *)((int)local_c + 0xb47),0,1,0
                   ,0x4e,0x20);
      thunk_FUN_004fe370(0);
      if (-1 < (int)*(uint *)((int)local_c + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_c + 0x164),0xffffffff,
                     *(uint *)((int)local_c + 0x58),*(uint *)((int)local_c + 0xb0));
      }
    }
    pbVar13 = (byte *)((int)local_c + 0xc5d);
    pbVar10 = local_38;
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
      FUN_006b55f0(*(undefined4 **)((int)local_c + 0x19c),0,1,0,*(int *)((int)local_c + 0xb47),0,1,0
                   ,0x4e,0x20);
      thunk_FUN_004fe370(0);
      if (-1 < (int)*(uint *)((int)local_c + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_c + 0x164),0xffffffff,
                     *(uint *)((int)local_c + 0x58),*(uint *)((int)local_c + 0xb0));
      }
    }
    if ((((local_29 != *(char *)((int)local_c + 0xc6c)) ||
         (local_44[2] != *(char *)((int)local_c + 0xc53))) &&
        (iVar7 = *(int *)((int)local_c + 0xc54), iVar7 != 0xdd)) &&
       ((iVar7 != 0xde && (iVar7 != 0xe0)))) {
      FUN_006b55f0(*(undefined4 **)((int)local_c + 0x19c),0,1,0x1f,*(int *)((int)local_c + 0xb47),0,
                   1,0x1f,0x4e,0x11);
      thunk_FUN_004fe4f0(local_c,0);
      if (-1 < (int)*(uint *)((int)local_c + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_c + 0x164),0xffffffff,
                     *(uint *)((int)local_c + 0x58),*(uint *)((int)local_c + 0xb0));
      }
    }
    if (((DAT_0080874e == '\x03') && (*(char *)((int)local_c + 0xc58) == '\x03')) &&
       ((local_28 != *(char *)((int)local_c + 0xc6d) &&
        (((iVar7 = *(int *)((int)local_c + 0xc54), iVar7 != 0xdd && (iVar7 != 0xde)) &&
         (iVar7 != 0xe0)))))) {
      thunk_FUN_004fe6c0(local_c,0);
    }
    if (((((local_26 != *(short *)((int)local_c + 0xc6f)) ||
          (local_22 != *(short *)((int)local_c + 0xc73))) ||
         ((local_1e != *(short *)((int)local_c + 0xc77) ||
          ((local_24 != *(short *)((int)local_c + 0xc71) ||
           (local_20 != *(short *)((int)local_c + 0xc75))))))) ||
        (local_1c != *(short *)((int)local_c + 0xc79))) &&
       (((iVar7 = *(int *)((int)local_c + 0xc54), iVar7 != 0xdd && (iVar7 != 0xde)) &&
        (iVar7 != 0xe0)))) {
      FUN_006b55f0(*(undefined4 **)((int)local_c + 0x19c),0,1,0x2f,*(int *)((int)local_c + 0xb47),0,
                   1,0x2f,0x4e,0x24);
      thunk_FUN_004f2560(local_c,0);
      if (-1 < (int)*(uint *)((int)local_c + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_c + 0x164),0xffffffff,
                     *(uint *)((int)local_c + 0x58),*(uint *)((int)local_c + 0xb0));
      }
    }
    iVar7 = 5;
    bVar15 = true;
    pcVar11 = local_1a;
    pcVar14 = (char *)((int)local_c + 0xc7b);
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar15 = *pcVar11 == *pcVar14;
      pcVar11 = pcVar11 + 1;
      pcVar14 = pcVar14 + 1;
    } while (bVar15);
    if ((!bVar15) || (local_44[2] != *(char *)((int)local_c + 0xc53))) {
      thunk_FUN_00500520(local_c,0);
      bVar6 = (DAT_0080874e != '\x03') + 5;
      _local_8 = CONCAT31(uStack_7,bVar6);
      if (bVar6 < 0xb) {
        uVar5 = (uint)bVar6;
        uVar3 = *(uint *)((int)local_c + uVar5 * 4 + 0x148);
        if (-1 < (int)uVar3) {
          FUN_006b3640(DAT_008075a8,uVar3,0xffffffff,*(uint *)((int)local_c + uVar5 * 4 + 0x3c),
                       *(uint *)((int)local_c + uVar5 * 4 + 0x94));
        }
      }
    }
  }
  DAT_00858df8 = (undefined4 *)local_88;
  return;
}


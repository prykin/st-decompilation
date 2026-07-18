
void FUN_004f80a0(void)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *pbVar7;
  ushort *puVar8;
  undefined3 extraout_var;
  short *psVar9;
  char *pcVar10;
  int iVar11;
  byte bVar12;
  char cVar13;
  int *piVar14;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar15;
  byte *pbVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 local_74;
  undefined4 local_70 [16];
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  void *local_24;
  undefined1 *local_20;
  int *local_1c;
  byte *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  byte local_5;
  
  local_74 = DAT_00858df8;
  DAT_00858df8 = &local_74;
  iVar4 = __setjmp3(local_70,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_74;
    iVar11 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2c9,0,iVar4,&DAT_007a4ccc);
    if (iVar11 == 0) {
      FUN_006a5e40(iVar4,0,0x7c1bd8,0x2c9);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar12 = 0;
  local_c = local_c & 0xffffff00;
  do {
    uVar15 = local_c & 0xff;
    local_10 = (undefined1 *)(uVar15 + 0x2ec + (int)local_24);
    switch(*(undefined1 *)(uVar15 + 0x2ec + (int)local_24)) {
    case 1:
      if ((DAT_0080731a != 0) &&
         (0x41 < (uint)(*(int *)((int)local_24 + 0x38) -
                       *(int *)((int)local_24 + uVar15 * 4 + 0x2ee)))) {
        *(int *)((int)local_24 + uVar15 * 4 + 0x2ee) = *(int *)((int)local_24 + 0x38);
        pbVar16 = (byte *)(uVar15 + 0x2ea + (int)local_24);
        bVar12 = *(char *)(uVar15 + 0x2ea + (int)local_24) + 1;
        *pbVar16 = bVar12;
        if (**(short **)((int)local_24 + uVar15 * 4 + 0x2e2) <= (short)(ushort)bVar12) {
          *pbVar16 = 0;
        }
        thunk_FUN_004f1890(local_24,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        local_28 = CONCAT31(local_28._1_3_,bVar12) & 0xffffff08;
        if ((bVar12 & 8) < 0xb) {
          uVar6 = bVar12 & 8;
          uVar15 = *(uint *)((int)local_24 + uVar6 * 4 + 0x148);
joined_r0x004f81d1:
          if (-1 < (int)uVar15) {
            FUN_006b3640(DAT_008075a8,uVar15,0xffffffff,*(uint *)((int)local_24 + uVar6 * 4 + 0x3c),
                         *(uint *)((int)local_24 + uVar6 * 4 + 0x94));
          }
        }
      }
      break;
    case 3:
      if (0x31 < (uint)(*(int *)((int)local_24 + 0x38) -
                       *(int *)((int)local_24 + uVar15 * 4 + 0x2ee))) {
        pcVar10 = (char *)(uVar15 + 0x2ea + (int)local_24);
        *(int *)((int)local_24 + uVar15 * 4 + 0x2ee) = *(int *)((int)local_24 + 0x38);
        if (*pcVar10 == '\0') {
          puVar5 = (undefined1 *)((int)local_24 + 0xb63);
          if (bVar12 != 0) {
            puVar5 = (undefined1 *)((int)local_24 + 0xc51);
          }
          puVar18 = (undefined4 *)0x0;
          iVar11 = 0;
          iVar4 = 1;
          bVar12 = 0;
          uVar6 = 6;
          pbVar16 = (byte *)thunk_FUN_00526100(puVar5,0);
          puVar8 = FUN_00709af0(DAT_00806794,0x1f,pbVar16,uVar6,bVar12,iVar4,iVar11,puVar18);
          *(ushort **)((int)local_24 + uVar15 * 4 + 0x2e2) = puVar8;
          *local_10 = 1;
          *pcVar10 = '\0';
          if (*(short *)((int)local_24 + 0x23f) == 5) {
            if ((char)local_c == '\0') {
              cVar13 = *(char *)((int)local_24 + 0x2ed);
            }
            else {
              cVar13 = *(char *)((int)local_24 + 0x2ec);
            }
            if (cVar13 != '\0') {
              *(undefined2 *)((int)local_24 + 0x23f) = 1;
              thunk_FUN_004fa400(local_24,1);
            }
          }
        }
        else {
          *pcVar10 = *pcVar10 + -1;
        }
        thunk_FUN_004f1890(local_24,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        local_1c = (int *)(CONCAT31(local_1c._1_3_,bVar12) & 0xffffff08);
        if ((bVar12 & 8) < 0xb) {
          uVar6 = bVar12 & 8;
          uVar15 = *(uint *)((int)local_24 + uVar6 * 4 + 0x148);
          if (-1 < (int)uVar15) {
            FUN_006b3640(DAT_008075a8,uVar15,0xffffffff,*(uint *)((int)local_24 + uVar6 * 4 + 0x3c),
                         *(uint *)((int)local_24 + uVar6 * 4 + 0x94));
          }
        }
        if (*(char *)((int)local_24 + 0x2ea) == '\x05') {
          thunk_FUN_005252c0(0xb1);
        }
      }
      break;
    case 4:
      if (0x31 < (uint)(*(int *)((int)local_24 + 0x38) -
                       *(int *)((int)local_24 + uVar15 * 4 + 0x2ee))) {
        pbVar16 = (byte *)(uVar15 + 0x2ea + (int)local_24);
        *(int *)((int)local_24 + uVar15 * 4 + 0x2ee) = *(int *)((int)local_24 + 0x38);
        bVar12 = *pbVar16;
        *pbVar16 = bVar12 + 1;
        if ((byte)(bVar12 + 1) == 5) {
          thunk_FUN_005252c0(0xb2);
        }
        if (**(short **)((int)local_24 + uVar15 * 4 + 0x2e2) <= (short)(ushort)*pbVar16) {
          *pbVar16 = *pbVar16 - 1;
          *local_10 = 2;
          if (*(short *)((int)local_24 + 0x23f) == 6) {
            if ((char)local_c == '\0') {
              cVar13 = *(char *)((int)local_24 + 0x2ed);
            }
            else {
              cVar13 = *(char *)((int)local_24 + 0x2ec);
            }
            if (cVar13 != '\0') {
              *(undefined2 *)((int)local_24 + 0x23f) = 4;
              thunk_FUN_005252c0(0xb0);
            }
          }
        }
        thunk_FUN_004f1890(local_24,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        local_20 = (undefined1 *)(CONCAT31(local_20._1_3_,bVar12) & 0xffffff08);
        if ((bVar12 & 8) < 0xb) {
          uVar6 = bVar12 & 8;
          uVar15 = *(uint *)((int)local_24 + uVar6 * 4 + 0x148);
          goto joined_r0x004f81d1;
        }
      }
      break;
    case 5:
      if (0x41 < (uint)(*(int *)((int)local_24 + 0x38) -
                       *(int *)((int)local_24 + uVar15 * 4 + 0x2ee))) {
        pbVar16 = (byte *)(uVar15 + 0x2ea + (int)local_24);
        *(int *)((int)local_24 + uVar15 * 4 + 0x2ee) = *(int *)((int)local_24 + 0x38);
        bVar12 = *pbVar16;
        *pbVar16 = bVar12 + 1;
        local_18 = (byte *)((int)local_24 + uVar15 * 4 + 0x2e2);
        if (**(short **)local_18 <= (short)(ushort)(byte)(bVar12 + 1)) {
          puVar8 = FUN_00709af0(DAT_00806794,0x1f,*(byte **)((int)local_24 + uVar15 * 4 + 0x2f6),6,0
                                ,1,0,(undefined4 *)0x0);
          *(ushort **)local_18 = puVar8;
          *local_10 = 1;
          *pbVar16 = 0;
        }
        thunk_FUN_004f1890(local_24,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        local_14 = (undefined1 *)(CONCAT31(local_14._1_3_,bVar12) & 0xffffff08);
        if ((bVar12 & 8) < 0xb) {
          uVar6 = bVar12 & 8;
          uVar15 = *(uint *)((int)local_24 + uVar6 * 4 + 0x148);
          goto joined_r0x004f81d1;
        }
      }
    }
    bVar12 = (char)local_c + 1;
    local_c = CONCAT31(local_c._1_3_,bVar12);
  } while (bVar12 < 2);
  local_5 = 0;
  if (DAT_00806730 == 0x400) {
    local_5 = 2;
  }
  else if (DAT_00806730 == 0x500) {
    local_5 = 6;
  }
  local_10 = (undefined1 *)((uint)local_10 & 0xffffff00);
  if (local_5 != 0) {
    local_18 = (byte *)((int)local_24 + 0xd3b);
    local_20 = (undefined1 *)((int)local_24 + 0xc87);
    local_1c = (int *)((int)local_24 + 0xd53);
    do {
      local_c = local_c & 0xffffff00;
      local_14 = local_20;
      piVar14 = local_1c;
      pbVar16 = local_18;
      do {
        bVar12 = pbVar16[0xc];
        if (bVar12 == 1) {
          if ((DAT_0080731a != 0) && (0x41 < (uint)(*(int *)((int)local_24 + 0x38) - *piVar14))) {
            *piVar14 = *(int *)((int)local_24 + 0x38);
            bVar12 = *pbVar16;
            *pbVar16 = bVar12 + 1;
            if (*(short *)piVar14[-0x12] <= (short)(ushort)(byte)(bVar12 + 1)) {
              *pbVar16 = 0;
            }
            thunk_FUN_004f1c80(local_24,local_c,(uint)local_10);
            bVar12 = ((char)local_c == '\0') + 9;
            local_30 = CONCAT31(local_30._1_3_,bVar12);
            if (bVar12 < 0xb) {
              uVar6 = (uint)bVar12;
              uVar15 = *(uint *)((int)local_24 + uVar6 * 4 + 0x148);
              goto joined_r0x004f861b;
            }
          }
        }
        else if (bVar12 == 3) {
          if (0x31 < (uint)(*(int *)((int)local_24 + 0x38) - *piVar14)) {
            *piVar14 = *(int *)((int)local_24 + 0x38);
            if (*pbVar16 == 0) {
              puVar18 = (undefined4 *)0x0;
              iVar11 = 0;
              iVar4 = 1;
              bVar12 = 0;
              uVar15 = 6;
              pbVar7 = (byte *)thunk_FUN_004f1d20(local_14);
              puVar8 = FUN_00709af0(DAT_00806794,0x1f,pbVar7,uVar15,bVar12,iVar4,iVar11,puVar18);
              piVar14[-0x12] = (int)puVar8;
              pbVar16[0xc] = 1;
              *pbVar16 = 0;
            }
            else {
              *pbVar16 = *pbVar16 - 1;
            }
            thunk_FUN_004f1c80(local_24,local_c,(uint)local_10);
            bVar12 = ((char)local_c == '\0') + 9;
            local_2c = CONCAT31(local_2c._1_3_,bVar12);
            if (bVar12 < 0xb) {
              uVar6 = (uint)bVar12;
              uVar15 = *(uint *)((int)local_24 + uVar6 * 4 + 0x148);
              goto joined_r0x004f861b;
            }
          }
        }
        else if ((bVar12 == 4) && (0x31 < (uint)(*(int *)((int)local_24 + 0x38) - *piVar14))) {
          *piVar14 = *(int *)((int)local_24 + 0x38);
          bVar12 = *pbVar16;
          bVar2 = bVar12 + 1;
          *pbVar16 = bVar2;
          if (*(short *)piVar14[-0x12] <= (short)(ushort)bVar2) {
            *pbVar16 = bVar12;
            pbVar16[0xc] = 2;
          }
          thunk_FUN_004f1c80(local_24,local_c,(uint)local_10);
          bVar12 = ((char)local_c == '\0') + 9;
          local_28 = CONCAT31(local_28._1_3_,bVar12);
          if (bVar12 < 0xb) {
            uVar6 = (uint)bVar12;
            uVar15 = *(uint *)((int)local_24 + uVar6 * 4 + 0x148);
joined_r0x004f861b:
            if (-1 < (int)uVar15) {
              FUN_006b3640(DAT_008075a8,uVar15,0xffffffff,
                           *(uint *)((int)local_24 + uVar6 * 4 + 0x3c),
                           *(uint *)((int)local_24 + uVar6 * 4 + 0x94));
            }
          }
        }
        bVar12 = (char)local_c + 1;
        local_14 = local_14 + 0x42;
        piVar14 = piVar14 + 6;
        pbVar16 = pbVar16 + 6;
        local_c = CONCAT31(local_c._1_3_,bVar12);
      } while (bVar12 < 2);
      bVar12 = (char)local_10 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 0xb;
      local_10 = (undefined1 *)CONCAT31(local_10._1_3_,bVar12);
    } while (bVar12 < local_5);
  }
  bVar3 = FUN_006b33f0((int)DAT_008075a8,*(uint *)((int)local_24 + 0x17c));
  if (CONCAT31(extraout_var,bVar3) == 0) {
    DAT_00858df8 = (undefined4 *)local_74;
    return;
  }
  switch(*(undefined1 *)((int)local_24 + 0x260)) {
  case 1:
    if ((DAT_0080731a == 0) ||
       ((uint)(*(int *)((int)local_24 + 0x38) - *(int *)((int)local_24 + 0x261)) < 0x42))
    goto switchD_004f86b0_caseD_2;
    *(int *)((int)local_24 + 0x261) = *(int *)((int)local_24 + 0x38);
    bVar12 = *(char *)((int)local_24 + 0x25f) + 1;
    *(byte *)((int)local_24 + 0x25f) = bVar12;
    if ((short)(ushort)bVar12 < **(short **)((int)local_24 + 0x25b)) goto LAB_004f88e6;
    break;
  default:
    goto switchD_004f86b0_caseD_2;
  case 3:
    if (0x31 < (uint)(*(int *)((int)local_24 + 0x38) - *(int *)((int)local_24 + 0x261))) {
      *(int *)((int)local_24 + 0x261) = *(int *)((int)local_24 + 0x38);
      if (*(char *)((int)local_24 + 0x25f) == '\0') {
        if (*(int *)((int)local_24 + 0x25b) != 0) {
          FUN_0070b600((int *)((int)local_24 + 0x25b));
        }
        iVar4 = 1;
        bVar2 = 0;
        bVar12 = 6;
        pcVar10 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar9 = FUN_0070b430(DAT_00806790,pcVar10,bVar12,bVar2,iVar4);
        *(int *)((int)local_24 + 0x25b) = (int)psVar9;
        *(undefined1 *)((int)local_24 + 0x260) = 1;
        *(undefined1 *)((int)local_24 + 0x25f) = 0;
      }
      else {
        *(char *)((int)local_24 + 0x25f) = *(char *)((int)local_24 + 0x25f) + -1;
      }
      thunk_FUN_004f1950((int)local_24);
      if (*(char *)((int)local_24 + 0x25f) == '\x05') {
        thunk_FUN_005252c0(0xb1);
      }
    }
    goto switchD_004f86b0_caseD_2;
  case 4:
    if ((uint)(*(int *)((int)local_24 + 0x38) - *(int *)((int)local_24 + 0x261)) < 0x32)
    goto switchD_004f86b0_caseD_2;
    *(int *)((int)local_24 + 0x261) = *(int *)((int)local_24 + 0x38);
    cVar13 = *(char *)((int)local_24 + 0x25f) + '\x01';
    *(char *)((int)local_24 + 0x25f) = cVar13;
    if (cVar13 == '\x05') {
      thunk_FUN_005252c0(0xb2);
    }
    if (**(short **)((int)local_24 + 0x25b) <= (short)(ushort)*(byte *)((int)local_24 + 0x25f)) {
      *(undefined1 *)((int)local_24 + 0x260) = 2;
      *(byte *)((int)local_24 + 0x25f) = *(byte *)((int)local_24 + 0x25f) - 1;
    }
    goto LAB_004f88e6;
  case 5:
    if ((uint)(*(int *)((int)local_24 + 0x38) - *(int *)((int)local_24 + 0x261)) < 0x42)
    goto switchD_004f86b0_caseD_2;
    piVar14 = (int *)((int)local_24 + 0x25b);
    bVar12 = *(char *)((int)local_24 + 0x25f) + 1;
    *(int *)((int)local_24 + 0x261) = *(int *)((int)local_24 + 0x38);
    *(byte *)((int)local_24 + 0x25f) = bVar12;
    if ((short)(ushort)bVar12 < *(short *)*piVar14) goto LAB_004f88e6;
    if ((short *)*piVar14 != (short *)0x0) {
      FUN_0070b600(piVar14);
    }
    uVar17 = DAT_00806790;
    if (*(char *)((int)local_24 + 0x285) == '\0') {
      psVar9 = FUN_0070b430(DAT_00806758,(char *)((int)local_24 + 0x265),6,0,0);
      *piVar14 = (int)psVar9;
      uVar17 = DAT_00806798;
      if (psVar9 == (short *)0x0) goto LAB_004f8860;
    }
    else {
LAB_004f8860:
      psVar9 = FUN_0070b430(uVar17,(char *)((int)local_24 + 0x265),6,0,0);
      *piVar14 = (int)psVar9;
    }
    if (*piVar14 == 0) {
      iVar4 = 1;
      bVar2 = 0;
      bVar12 = 6;
      pcVar10 = (char *)thunk_FUN_005260b0(0,0,0);
      psVar9 = FUN_0070b430(DAT_00806790,pcVar10,bVar12,bVar2,iVar4);
      *piVar14 = (int)psVar9;
    }
    *(undefined1 *)((int)local_24 + 0x260) = 1;
  }
  *(undefined1 *)((int)local_24 + 0x25f) = 0;
LAB_004f88e6:
  thunk_FUN_004f1950((int)local_24);
switchD_004f86b0_caseD_2:
  if (((*(int *)((int)local_24 + 0x1d8) != 0) && ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0)) &&
     (iVar4 = *(int *)(*(int *)((int)local_24 + 0x1d8) + 4),
     iVar4 < *(int *)((int)local_24 + 0x1dc) + -2)) {
    FUN_006b4170(*(int *)((int)local_24 + 0x1b4),0,100,5,0x226,0x55,0);
    iVar11 = FUN_007140e0(*(void **)((int)local_24 + 0x1d8),1,'\0');
    if (iVar11 != 0) {
      FUN_006b5440(*(int *)((int)local_24 + 0x1b4),0,100,5,iVar11,0,0xff);
    }
    FUN_006b35d0(DAT_008075a8,*(uint *)((int)local_24 + 0x17c));
    if (*(char *)((int)local_24 + 0x1e0) != '\0') {
      uVar15 = iVar4 + 1U & 0x80000001;
      bVar3 = uVar15 == 0;
      if ((int)uVar15 < 0) {
        bVar3 = (uVar15 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar3) {
        thunk_FUN_005252c0(0x1e);
      }
    }
  }
  DAT_00858df8 = (undefined4 *)local_74;
  return;
}


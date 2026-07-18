
void FUN_004ff380(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  byte *pbVar12;
  char *pcVar13;
  void *unaff_EDI;
  byte *pbVar14;
  char *pcVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 *local_90;
  undefined4 local_8c [16];
  void *local_4c;
  char local_48;
  char local_47;
  char local_46;
  int local_45;
  char local_41;
  int local_40;
  byte local_3c [15];
  char local_2d;
  char local_2c;
  char local_2b;
  undefined4 local_2a;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  char local_1e [8];
  int local_16;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_90 = DAT_00858df8;
  DAT_00858df8 = &local_90;
  iVar3 = __setjmp3(local_8c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = local_90;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x167,0,iVar3,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar3,0,0x7c23cc,0x167);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar11 = (undefined4 *)((int)local_4c + 0xb63);
  pcVar13 = &local_48;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    pcVar13 = pcVar13 + 4;
  }
  *(undefined2 *)pcVar13 = *(undefined2 *)puVar11;
  puVar11 = (undefined4 *)((int)local_4c + 0xb63);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = 0;
  local_16 = *(int *)((int)local_4c + 0xb4b);
  FUN_006afe40(&local_16,*(uint **)((int)local_4c + 0xb95));
  *(undefined4 *)(*(int *)((int)local_4c + 0xb95) + 0xc) = 0;
  *(int *)((int)local_4c + 0xb4b) = local_16;
  thunk_FUN_0043beb0(DAT_007fa174,1,(int *)((int)local_4c + 0xb63));
  if (local_48 != *(char *)((int)local_4c + 0xb63)) {
    if (DAT_00801684 != (void *)0x0) {
      thunk_FUN_0053f650(DAT_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    thunk_FUN_004ff110(local_4c,1);
    thunk_FUN_004fe960();
    DAT_00858df8 = local_90;
    return;
  }
  if (*(char *)((int)local_4c + 0xb80) != local_2b) {
    if (DAT_00801684 != (void *)0x0) {
      thunk_FUN_0053f650(DAT_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
  }
  if (*(char *)((int)local_4c + 0xb63) == '\x02') {
    if ((*(int *)(*(int *)((int)local_4c + 0xb95) + 0xc) != *(int *)(local_16 + 0xc)) ||
       (local_47 != *(char *)((int)local_4c + 0xb64))) {
      thunk_FUN_004ff110(local_4c,1);
    }
    iVar3 = 5;
    bVar16 = true;
    pcVar13 = local_1e;
    pcVar15 = (char *)((int)local_4c + 0xb8d);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar16 = *pcVar13 == *pcVar15;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    } while (bVar16);
    if (!bVar16) {
      thunk_FUN_00500520(local_4c,1);
      bVar2 = (DAT_0080874e == '\x03') + 2;
      local_8 = CONCAT31(local_8._1_3_,bVar2);
      if (bVar2 < 0xb) {
        uVar9 = (uint)bVar2;
        uVar4 = *(uint *)((int)local_4c + uVar9 * 4 + 0x148);
        if (-1 < (int)uVar4) {
          FUN_006b3640(DAT_008075a8,uVar4,0xffffffff,*(uint *)((int)local_4c + uVar9 * 4 + 0x3c),
                       *(uint *)((int)local_4c + uVar9 * 4 + 0x94));
        }
      }
    }
    uVar4 = FUN_006b5a50(local_16,*(int *)((int)local_4c + 0xb95));
    if (uVar4 != 0) {
      FUN_006b55f0(*(undefined4 **)((int)local_4c + 0x184),0,0,0,*(int *)((int)local_4c + 0x958),0,0
                   ,0,*(int *)(*(int *)((int)local_4c + 0x958) + 4),0x3c);
      uVar17 = *(undefined4 *)(*(int *)((int)local_4c + 0xb95) + 0xc);
      uVar5 = FUN_006b0140(0x36b9,DAT_00807618);
      wsprintfA(*(LPSTR *)((int)local_4c + 0x213),s__1_s_0_d_007c245c,uVar5,uVar17);
      FUN_00710a90(*(int *)((int)local_4c + 0x184),0,2,0xf,
                   *(int *)(*(int *)((int)local_4c + 0x958) + 4) + -4,0x2d);
      FUN_00711b70(*(uint **)((int)local_4c + 0x213),-2,-1,0,-1,-1);
      if (-1 < (int)*(uint *)((int)local_4c + 0x14c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_4c + 0x14c),0xffffffff,
                     *(uint *)((int)local_4c + 0x40),*(uint *)((int)local_4c + 0x98));
      }
      if ((DAT_0080874e == '\x03') && (local_2c != *(char *)((int)local_4c + 0xb7f))) {
        thunk_FUN_004fe6c0(local_4c,1);
      }
      local_10 = 1;
      local_c = 0;
      local_8 = *(uint *)(local_16 + 0xc);
      if (local_8 != 0) {
        iVar3 = *(int *)((int)local_4c + 0xb95);
        uVar4 = *(uint *)(iVar3 + 0xc);
        do {
          if (local_c < local_8) {
            piVar6 = (int *)(*(int *)(local_16 + 8) * local_c + *(int *)(local_16 + 0x1c));
          }
          else {
            piVar6 = (int *)0x0;
          }
          uVar9 = 0;
          if (uVar4 != 0) {
            if (uVar4 == 0) {
              piVar7 = (int *)0x0;
              goto LAB_004ff6e4;
            }
            do {
              piVar7 = (int *)(*(int *)(iVar3 + 8) * uVar9 + *(int *)(iVar3 + 0x1c));
LAB_004ff6e4:
              if (*piVar7 == *piVar6) {
                local_10 = 0;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar4);
          }
          if (local_10 == 0) goto LAB_004ff723;
          local_c = local_c + 1;
        } while (local_c < local_8);
      }
      if ((local_10 != 0) && (DAT_00801678 != (int *)0x0)) {
        (**(code **)(*DAT_00801678 + 0x1c))(0);
      }
    }
  }
LAB_004ff723:
  cVar10 = *(char *)((int)local_4c + 0xb63);
  if (((cVar10 != '\x01') && (cVar10 != '\x04')) && (cVar10 != '\x03')) {
    DAT_00858df8 = local_90;
    return;
  }
  if (((local_40 != *(int *)((int)local_4c + 0xb6b)) ||
      (local_47 != *(char *)((int)local_4c + 0xb64))) ||
     (local_46 != *(char *)((int)local_4c + 0xb65))) {
    if (DAT_00801684 != (void *)0x0) {
      thunk_FUN_0053f650(DAT_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    thunk_FUN_004ff110(local_4c,1);
  }
  iVar3 = *(int *)((int)local_4c + 0xb66);
  if ((local_45 != iVar3) || (local_41 != *(char *)((int)local_4c + 0xb6a))) {
    if ((local_45 == 7) || (((local_45 == 0x13 || (iVar3 == 7)) || (iVar3 == 0x13)))) {
      thunk_FUN_004fe960();
    }
    else {
      FUN_006b55f0(*(undefined4 **)((int)local_4c + 0x184),0,1,0,*(int *)((int)local_4c + 0x958),0,1
                   ,0,0x4e,0x20);
      thunk_FUN_004fe370(1);
      if (-1 < (int)*(uint *)((int)local_4c + 0x14c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_4c + 0x14c),0xffffffff,
                     *(uint *)((int)local_4c + 0x40),*(uint *)((int)local_4c + 0x98));
      }
    }
  }
  pbVar14 = (byte *)((int)local_4c + 0xb6f);
  pbVar12 = local_3c;
  do {
    bVar2 = *pbVar12;
    bVar16 = bVar2 < *pbVar14;
    if (bVar2 != *pbVar14) {
LAB_004ff875:
      iVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_004ff87a;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar12[1];
    bVar16 = bVar2 < pbVar14[1];
    if (bVar2 != pbVar14[1]) goto LAB_004ff875;
    pbVar12 = pbVar12 + 2;
    pbVar14 = pbVar14 + 2;
  } while (bVar2 != 0);
  iVar3 = 0;
LAB_004ff87a:
  if (iVar3 != 0) {
    FUN_006b55f0(*(undefined4 **)((int)local_4c + 0x184),0,1,0,*(int *)((int)local_4c + 0x958),0,1,0
                 ,0x4e,0x20);
    thunk_FUN_004fe370(1);
    if (-1 < (int)*(uint *)((int)local_4c + 0x14c)) {
      FUN_006b3640(DAT_008075a8,*(uint *)((int)local_4c + 0x14c),0xffffffff,
                   *(uint *)((int)local_4c + 0x40),*(uint *)((int)local_4c + 0x98));
    }
  }
  if (local_2d != *(char *)((int)local_4c + 0xb7e)) {
    FUN_006b55f0(*(undefined4 **)((int)local_4c + 0x184),0,1,0x1f,*(int *)((int)local_4c + 0x958),0,
                 1,0x1f,0x4e,0x11);
    thunk_FUN_004fe4f0(local_4c,1);
    if (-1 < (int)*(uint *)((int)local_4c + 0x14c)) {
      FUN_006b3640(DAT_008075a8,*(uint *)((int)local_4c + 0x14c),0xffffffff,
                   *(uint *)((int)local_4c + 0x40),*(uint *)((int)local_4c + 0x98));
    }
  }
  if (((DAT_0080874e == '\x03') && (*(char *)((int)local_4c + 0xb6a) == '\x03')) &&
     (local_2c != *(char *)((int)local_4c + 0xb7f))) {
    thunk_FUN_004fe6c0(local_4c,1);
  }
  iVar3 = *(int *)((int)local_4c + 0xb66);
  if (((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) {
    if (*(int *)((int)local_4c + 0xb81) != local_2a) {
      FUN_006b55f0(*(undefined4 **)((int)local_4c + 0x184),0,1,0x2f,*(int *)((int)local_4c + 0x958),
                   0,1,0x2f,0x4e,0x24);
      if (-1 < (int)*(uint *)((int)local_4c + 0x14c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_4c + 0x14c),0xffffffff,
                     *(uint *)((int)local_4c + 0x40),*(uint *)((int)local_4c + 0x98));
      }
    }
    iVar3 = *(int *)((int)local_4c + 0xb81);
    if (iVar3 == 0) goto LAB_004ffb91;
    if (iVar3 != local_2a) {
      uVar4 = thunk_FUN_00526ba0(iVar3,*(char *)((int)local_4c + 0xb85));
      pbVar12 = (byte *)FUN_0070b3a0(*(int *)((int)local_4c + 0x2be),uVar4);
      thunk_FUN_00540760(*(undefined4 **)((int)local_4c + 0x184),0xb,0x31,'\x01',pbVar12);
      pbVar12 = (byte *)FUN_0070b3a0(*(int *)((int)local_4c + 0x2ca),1);
      thunk_FUN_00540760(*(undefined4 **)((int)local_4c + 0x184),10,0x30,'\x06',pbVar12);
      if (-1 < (int)*(uint *)((int)local_4c + 0x14c)) {
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_4c + 0x14c),0xffffffff,
                     *(uint *)((int)local_4c + 0x40),*(uint *)((int)local_4c + 0x98));
      }
    }
    FUN_006b4170(*(int *)((int)local_4c + 0x184),0,0x3b,0x31,7,0x21,0);
    bVar2 = *(byte *)((int)local_4c + 0xb86);
    cVar10 = (char)(((uint)bVar2 * 0x21) / 100);
    local_8 = CONCAT31(local_8._1_3_,cVar10);
    if ((bVar2 != 0) && (cVar10 == '\0')) {
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    if (bVar2 < 0x46) {
      iVar3 = (-(uint)(bVar2 < 0x14) & 5) + 5;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = local_8 & 0xff;
    FUN_006b55f0(*(undefined4 **)((int)local_4c + 0x184),0,0x3c,0x52 - uVar4,
                 *(int *)((int)local_4c + 0x28a),0,iVar3,
                 *(int *)(*(int *)((int)local_4c + 0x28a) + 8) - uVar4,5,uVar4);
    uVar4 = *(uint *)((int)local_4c + 0x14c);
  }
  else {
    if ((((((short)local_2a == *(short *)((int)local_4c + 0xb81)) &&
          (local_26 == *(short *)((int)local_4c + 0xb85))) &&
         (local_22 == *(short *)((int)local_4c + 0xb89))) &&
        ((local_2a._2_2_ == *(short *)((int)local_4c + 0xb83) &&
         (local_24 == *(short *)((int)local_4c + 0xb87))))) &&
       (local_20 == *(short *)((int)local_4c + 0xb8b))) goto LAB_004ffb91;
    FUN_006b55f0(*(undefined4 **)((int)local_4c + 0x184),0,1,0x2f,*(int *)((int)local_4c + 0x958),0,
                 1,0x2f,0x4e,0x24);
    thunk_FUN_004f2560(local_4c,1);
    uVar4 = *(uint *)((int)local_4c + 0x14c);
  }
  if (-1 < (int)uVar4) {
    FUN_006b3640(DAT_008075a8,uVar4,0xffffffff,*(uint *)((int)local_4c + 0x40),
                 *(uint *)((int)local_4c + 0x98));
  }
LAB_004ffb91:
  iVar3 = 5;
  bVar16 = true;
  pcVar13 = local_1e;
  pcVar15 = (char *)((int)local_4c + 0xb8d);
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar16 = *pcVar13 == *pcVar15;
    pcVar13 = pcVar13 + 1;
    pcVar15 = pcVar15 + 1;
  } while (bVar16);
  if (!bVar16) {
    thunk_FUN_00500520(local_4c,1);
    bVar2 = (DAT_0080874e == '\x03') + 2;
    local_8 = CONCAT31(local_8._1_3_,bVar2);
    if (bVar2 < 0xb) {
      uVar9 = (uint)bVar2;
      uVar4 = *(uint *)((int)local_4c + uVar9 * 4 + 0x148);
      if (-1 < (int)uVar4) {
        FUN_006b3640(DAT_008075a8,uVar4,0xffffffff,*(uint *)((int)local_4c + uVar9 * 4 + 0x3c),
                     *(uint *)((int)local_4c + uVar9 * 4 + 0x94));
      }
    }
  }
  DAT_00858df8 = local_90;
  return;
}


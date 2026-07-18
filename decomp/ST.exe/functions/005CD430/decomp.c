
void __fastcall FUN_005cd430(int *param_1)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined4 unaff_ESI;
  uint uVar11;
  byte *pbVar12;
  void *unaff_EDI;
  undefined4 *puVar13;
  char *pcVar14;
  bool bVar15;
  undefined4 local_b8;
  undefined4 local_b4 [16];
  undefined4 local_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  int local_6e;
  char local_2a;
  undefined4 local_29;
  undefined1 local_25;
  uint *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  byte *local_14;
  int *local_10;
  char *local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x847) = DAT_008087c4._2_1_;
  local_b8 = DAT_00858df8;
  DAT_00858df8 = &local_b8;
  local_10 = param_1;
  iVar4 = __setjmp3(local_b4,0,unaff_EDI,unaff_ESI);
  piVar10 = local_10;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_b8;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x1cb,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cd258,0x1cb);
    return;
  }
  cVar1 = *(char *)((int)local_10 + 0x1e26);
  if ((((cVar1 == '\x05') || (cVar1 == '\x0f')) || (cVar1 == '\f')) || (cVar1 == '\x10')) {
    local_8 = *(int *)((int)local_10 + 7999);
  }
  else {
    local_8 = *(int *)((int)local_10 + 0x1f43);
  }
  iVar4 = local_10[0x7e1];
  if (iVar4 != 0) {
    uVar11 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      bVar15 = *(int *)(iVar4 + 0xc) != 0;
      do {
        if (bVar15) {
          iVar4 = *(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        if ((iVar4 != 0) && (*(byte **)(iVar4 + 0x50) != (byte *)0x0)) {
          FUN_006ae110(*(byte **)(iVar4 + 0x50));
        }
        iVar4 = piVar10[0x7e1];
        uVar11 = uVar11 + 1;
        bVar15 = uVar11 < *(uint *)(iVar4 + 0xc);
      } while ((int)uVar11 < (int)*(uint *)(iVar4 + 0xc));
    }
    FUN_006ae110((byte *)piVar10[0x7e1]);
  }
  puVar5 = FUN_006ae290((uint *)0x0,8,0x60,8);
  piVar10[0x7e1] = (int)puVar5;
  if ((*(char *)((int)piVar10 + 0x1e26) != '\f') && (*(char *)((int)piVar10 + 0x1e26) != '\x10')) {
    DAT_0080874d = -1;
    DAT_0080874e = '\0';
  }
  if (DAT_0080877e != '\0') {
    local_c = &DAT_008087e8;
    do {
      pcVar7 = local_c;
      cVar1 = local_c[1];
      if (cVar1 != -1) {
        puVar13 = &local_74;
        for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_74._0_1_ = 1;
        local_74._1_1_ = 1;
        if (((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (*pcVar7 == '\x03')) {
          local_74._3_1_ = '\x01';
        }
        else {
          local_74._3_1_ = *pcVar7;
        }
        local_74._2_1_ = cVar1;
        switch(*(undefined1 *)((int)piVar10 + 0x1e26)) {
        case 5:
        case 0xf:
          local_24 = thunk_FUN_0067e0e0(local_8,CONCAT12(uStack_70,CONCAT11(local_74._3_1_,cVar1)) &
                                                0xff,0xffffffff);
          break;
        default:
          local_24 = thunk_FUN_0067dfd0(local_8,CONCAT12(uStack_6f,
                                                         CONCAT11(uStack_70,local_74._3_1_)) & 0xff,
                                        DAT_0080995c);
          break;
        case 0xc:
        case 0x10:
          local_24 = thunk_FUN_0067e200(local_8,CONCAT12(uStack_70,CONCAT11(local_74._3_1_,cVar1)) &
                                                0xff,0xffffffff);
        }
        if (pcVar7[-0x21] == '\x01') {
          cVar1 = *(char *)((int)piVar10 + 0x1e26);
          if (((cVar1 == '\x05') || (cVar1 == '\f')) || (cVar1 == '\x10')) {
            uStack_70 = 4;
            uVar11 = 0;
            if (0 < (int)local_24[3]) {
              local_14 = (byte *)(pcVar7 + -0x20);
              bVar15 = local_24[3] != 0;
              do {
                if (bVar15) {
                  iVar4 = local_24[2] * uVar11 + local_24[7];
                }
                else {
                  iVar4 = 0;
                }
                pbVar8 = (byte *)(iVar4 + 0x4c);
                pbVar12 = local_14;
                do {
                  bVar2 = *pbVar8;
                  bVar15 = bVar2 < *pbVar12;
                  if (bVar2 != *pbVar12) {
LAB_005cd670:
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_005cd675;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar15 = bVar2 < pbVar12[1];
                  if (bVar2 != pbVar12[1]) goto LAB_005cd670;
                  pbVar8 = pbVar8 + 2;
                  pbVar12 = pbVar12 + 2;
                } while (bVar2 != 0);
                iVar4 = 0;
LAB_005cd675:
                piVar10 = local_10;
                pcVar7 = local_c;
                if (iVar4 == 0) {
                  uStack_6f = (undefined1)uVar11;
                  break;
                }
                uVar11 = uVar11 + 1;
                bVar15 = uVar11 < local_24[3];
              } while ((int)uVar11 < (int)local_24[3]);
            }
          }
          else {
            uStack_70 = 1;
          }
        }
        else {
          uStack_70 = 1;
        }
        local_20 = *(undefined4 *)(pcVar7 + 3);
        local_2a = pcVar7[2];
        local_6e = DAT_0080877f;
        local_1c = *(undefined4 *)(pcVar7 + 7);
        local_18 = *(undefined4 *)(pcVar7 + 0xb);
        local_29 = 0;
        local_25 = 1;
        FUN_006ae1c0((uint *)piVar10[0x7e1],&local_74);
      }
      local_c = pcVar7 + 0x51;
    } while ((int)local_c < 0x808a70);
    if (*(char *)((int)piVar10 + 0x1e26) == '\f') {
      iVar4 = piVar10[0x7e1];
      uVar9 = 0;
      uVar11 = *(uint *)(iVar4 + 0xc);
      if (0 < (int)uVar11) {
        bVar15 = uVar11 != 0;
        do {
          if (bVar15) {
            iVar6 = *(int *)(iVar4 + 8) * uVar9 + *(int *)(iVar4 + 0x1c);
          }
          else {
            iVar6 = 0;
          }
          if (((iVar6 != 0) && (*(char *)(iVar6 + 4) == '\x01')) &&
             ((DAT_0080874d == *(char *)(iVar6 + 2) && (DAT_0080874e == *(char *)(iVar6 + 3))))) {
            pcVar7 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar7 = (char *)&DAT_00807ddd;
            }
            thunk_FUN_005d1100(piVar10,DAT_0080877f,uVar9,(DAT_0080874f != '\0') + 2,pcVar7);
            break;
          }
          uVar9 = uVar9 + 1;
          bVar15 = uVar9 < uVar11;
        } while ((int)uVar9 < (int)uVar11);
      }
    }
    else {
      iVar4 = piVar10[0x7e1];
      uVar9 = 0;
      uVar11 = *(uint *)(iVar4 + 0xc);
      if (0 < (int)uVar11) {
        bVar15 = uVar11 != 0;
        do {
          if (bVar15) {
            iVar6 = *(int *)(iVar4 + 8) * uVar9 + *(int *)(iVar4 + 0x1c);
          }
          else {
            iVar6 = 0;
          }
          if (((iVar6 != 0) && (*(char *)(iVar6 + 4) == '\x01')) && (*(char *)(iVar6 + 2) != -1)) {
            DAT_0080874d = *(char *)(iVar6 + 2);
            *(undefined1 *)(iVar6 + 4) = 2;
            DAT_0080874e = *(char *)(iVar6 + 3);
            pcVar7 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar7 = (char *)&DAT_00807ddd;
            }
            uVar11 = 0xffffffff;
            goto code_r0x005cd7da;
          }
          uVar9 = uVar9 + 1;
          bVar15 = uVar9 < uVar11;
        } while ((int)uVar9 < (int)uVar11);
      }
    }
  }
LAB_005cd7f2:
  thunk_FUN_005c87c0();
  (**(code **)(*piVar10 + 0x20))();
  DAT_00858df8 = (undefined4 *)local_b8;
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    pcVar14 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar14;
    if (cVar1 == '\0') break;
code_r0x005cd7da:
    pcVar14 = pcVar7;
    if (uVar11 == 0) break;
  }
  uVar11 = ~uVar11;
  pcVar7 = pcVar14 + -uVar11;
  pcVar14 = (char *)(iVar6 + 10);
  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar14 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar14 = pcVar14 + 1;
  }
  goto LAB_005cd7f2;
}


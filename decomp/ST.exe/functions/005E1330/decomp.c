
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e1330(void)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  LPSTR pCVar5;
  undefined4 uVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  void *extraout_ECX;
  uint uVar11;
  int *piVar12;
  void *this;
  undefined4 unaff_ESI;
  undefined1 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  int *piVar17;
  void *unaff_EDI;
  byte *pbVar18;
  char *pcVar19;
  uint uVar20;
  bool bVar21;
  undefined4 local_1268 [256];
  int local_e68 [140];
  uint local_c38 [65];
  undefined4 local_b34 [4];
  int local_b24;
  int local_b20;
  undefined4 local_b1c;
  int local_b18;
  int local_b14;
  int local_b10;
  undefined4 local_afc;
  undefined4 local_af8;
  undefined4 local_af4;
  undefined4 local_a84;
  undefined4 local_a80;
  undefined4 local_a7c;
  int local_a78 [4];
  undefined4 local_a68;
  int local_a64;
  undefined4 local_a18;
  undefined4 local_a14;
  undefined4 local_a10;
  undefined4 local_968;
  undefined4 local_964;
  undefined4 local_8fc;
  int local_8f8 [4];
  int local_8e8;
  int local_8e4;
  undefined4 local_890;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_770;
  int local_76c;
  int local_768;
  int local_764;
  int local_760;
  undefined4 local_75c;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  undefined4 **local_2bc;
  undefined4 local_2b8 [16];
  undefined4 **local_278;
  undefined4 local_274 [16];
  undefined4 local_234 [4];
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  int *local_1ec;
  int local_1e8;
  undefined4 local_1dc;
  uint local_1d8 [6];
  uint local_1c0;
  uint local_1bc;
  undefined4 local_19c;
  undefined4 local_198;
  uint *local_194;
  undefined1 local_190;
  undefined4 local_18f;
  undefined4 local_18b;
  undefined4 local_187;
  undefined4 local_183;
  undefined4 local_17f;
  undefined4 local_17b;
  undefined1 local_177 [32];
  undefined4 local_157;
  undefined4 local_153;
  undefined4 local_14f;
  char local_14b;
  undefined4 local_14a;
  int local_146;
  int *local_142;
  uint local_13c [5];
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  int local_110;
  undefined1 local_10c;
  int local_10b;
  undefined1 local_107;
  undefined4 local_106;
  uint *local_102;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  undefined4 local_e4 [2];
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined4 local_d6;
  undefined4 uStackY_d2;
  int iStackY_ce;
  undefined4 uStackY_ca;
  uint uStackY_c6;
  undefined4 local_c2;
  undefined4 local_be;
  int local_94;
  undefined4 local_90;
  void *local_8c;
  int *local_88;
  uint local_84;
  uint *local_80;
  uint local_7c;
  undefined1 local_78 [5];
  undefined4 local_73;
  undefined1 local_6f;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined4 local_6a;
  char local_66 [30];
  undefined2 uStackY_48;
  undefined2 local_46;
  uint *in_stack_ffffffdc;
  UINT UVar22;
  HINSTANCE pHVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  
  FUN_0072da40();
  local_278 = DAT_00858df8;
  DAT_00858df8 = &local_278;
  local_8c = extraout_ECX;
  iVar4 = __setjmp3(local_274,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = local_278;
    iVar10 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,0x45f,0,iVar4,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar4,0,0x7cd994,0x45f);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar20 = *(uint *)(*(int *)((int)local_8c + 0x74) + 0xc);
  this = local_8c;
  if (*(int *)((int)local_8c + 0x7c) < (int)uVar20) {
    do {
      uVar11 = *(uint *)((int)this + 0x7c);
      if (uVar11 < uVar20) {
        puVar13 = (undefined1 *)
                  (*(int *)(*(int *)((int)this + 0x74) + 8) * uVar11 +
                  *(int *)(*(int *)((int)this + 0x74) + 0x1c));
      }
      else {
        puVar13 = (undefined1 *)0x0;
      }
      if (((uint)(*(int *)((int)this + 0x69) - *(int *)((int)this + 0x61)) < *(uint *)(puVar13 + 1))
         && (*(char *)((int)this + 0x6d) != '\x05')) break;
      switch(*puVar13) {
      case 1:
        if ((*(char *)((int)this + 0x6e) != '\x01') ||
           ((puVar13[0xd] != '\0' && (puVar13[0xd] != '\x01')))) {
          switch(puVar13[0xd]) {
          case 0:
            in_stack_ffffffdc = (uint *)0x0;
            break;
          case 1:
            in_stack_ffffffdc = (uint *)0x1;
            break;
          case 2:
            in_stack_ffffffdc = (uint *)0x2;
            break;
          case 3:
            in_stack_ffffffdc = (uint *)0x3;
            break;
          case 4:
            in_stack_ffffffdc = (uint *)0x4;
          }
          uVar20 = (uint)in_stack_ffffffdc & 0xff;
          if (*(int *)((int)this + uVar20 * 4 + 0x291) != 0) {
            FUN_006b3af0((int *)DAT_008075a8,*(uint *)((int)this + uVar20 * 4 + 0x2a5));
            FUN_006e56b0(*(void **)((int)this + 0xc),*(uint *)((int)this + uVar20 * 4 + 0x291));
            *(undefined4 *)((int)this + uVar20 * 4 + 0x291) = 0;
          }
          FUN_006ab060((undefined4 *)((int)this + uVar20 * 0xc + 0x653));
          if (puVar13[0xe] == '\x01') {
            local_84 = *(uint *)(puVar13 + 0x1b);
            if ((int)local_84 < 0x28) {
              local_84 = 0x28;
            }
            iVar10 = 1;
            iVar4 = *(int *)((int)this + 0x5d) + 0x28;
            uVar11 = FUN_006b4fe0(*(int *)((int)this + 0x5d));
            uVar6 = FUN_006b50c0(iVar4,local_84,(uint)*(ushort *)(*(int *)((int)this + 0x5d) + 0xe),
                                 uVar11,(undefined4 *)iVar4,iVar10);
            *(undefined4 *)((int)this + uVar20 * 0xc + 0x653) = uVar6;
            *(uint *)((int)this + uVar20 * 0xc + 0x657) =
                 (uint)(puVar13[10] == '\x01') * 0x100 + 0x91 + (int)this;
            *(undefined4 *)((int)this + uVar20 * 0xc + 0x65b) = *(undefined4 *)(puVar13 + 9);
            uVar6 = thunk_FUN_005e4180(1,1,*(undefined4 *)(puVar13 + 0xf),
                                       *(undefined4 *)(puVar13 + 0x13),iVar4,local_84,
                                       uVar20 + 0x6200,uVar20 + 0x6212);
            *(undefined4 *)((int)this + uVar20 * 4 + 0x291) = uVar6;
            uVar11 = *(uint *)(puVar13 + 0xf);
            puVar7 = (uint *)((int)this + uVar20 * 4 + 0x2a5);
            FUN_006b3640((int *)DAT_008075a8,*(uint *)((int)this + uVar20 * 4 + 0x2a5),0xffffffff,
                         uVar11,*(uint *)(puVar13 + 0x13));
            in_stack_ffffffdc = (uint *)0x5e1e40;
            FUN_006b2800((int)DAT_008075a8,*puVar7,uVar11,local_84);
            FUN_006b3020((int)DAT_008075a8,*puVar7,*(uint *)(puVar13 + 5));
            FUN_006b3430((int *)DAT_008075a8,*puVar7);
          }
        }
        break;
      case 2:
        if (*(char *)((int)this + 0x6e) != '\x01') {
          if (*(int *)((int)this + 0x2b9) != 0) {
            puVar7 = (uint *)((int)this + 0x2bd);
            iVar4 = 4;
            do {
              FUN_006b3af0((int *)DAT_008075a8,*puVar7);
              puVar7 = puVar7 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            FUN_006e56b0(*(void **)((int)this + 0xc),*(uint *)((int)this + 0x2b9));
            *(undefined4 *)((int)this + 0x2b9) = 0;
          }
          puVar25 = (undefined4 *)((int)this + 0x68f);
          iVar4 = 4;
          do {
            FUN_006ab060(puVar25);
            puVar25 = puVar25 + 3;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          if (puVar13[0xd] == '\x01') {
            puVar25 = local_234;
            for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar25 = 0;
              puVar25 = puVar25 + 1;
            }
            piVar16 = local_e68;
            for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar16 = 0;
              piVar16 = piVar16 + 1;
            }
            bVar3 = 2;
            piVar16 = (int *)(puVar13 + 0x16);
            iVar4 = 2;
            do {
              if (-1 < *piVar16) {
                bVar3 = bVar3 + 1;
              }
              piVar16 = piVar16 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            local_90 = CONCAT31((int3)((uint)local_90 >> 8),bVar3);
            local_80 = (uint *)(uint)bVar3;
            if (local_80 == (uint *)0x2) {
              if ((DAT_00807340 == '\x01') || (DAT_00807340 == '\x03')) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((local_80 == (uint *)0x3) && (DAT_00807340 == '\x03')) {
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            unaff_EDI = (void *)((uint)unaff_EDI & 0xffffff);
            if (bVar3 != 0) {
              local_88 = (int *)(puVar13 + 9);
              iVar4 = 0;
              piVar16 = local_e68;
              piVar17 = (int *)(puVar13 + 0x1e);
              piVar12 = (int *)((int)this + 0x693);
              do {
                UVar22 = 0x1f52;
                if (local_80 == (uint *)0x2) {
                  if (iVar4 == 0) {
                    UVar22 = 0x1f47;
                    *piVar16 = 1;
                  }
                  else if (iVar4 == 1) {
                    UVar22 = 0x1f49;
                    *piVar16 = 3;
                  }
                }
                else if (local_80 == (uint *)0x3) {
                  if (iVar4 == 0) {
                    UVar22 = 0x1f47;
LAB_005e200a:
                    *piVar16 = iVar4 + 1;
                  }
                  else if (iVar4 == 1) {
                    UVar22 = 0x1f48;
                    *piVar16 = 2;
                  }
                  else {
                    if (iVar4 != 2) goto LAB_005e200a;
                    UVar22 = 0x1f49;
                    *piVar16 = 3;
                  }
                }
                else {
                  switch(iVar4) {
                  case 0:
                    UVar22 = 0x1f47;
                    *piVar16 = iVar4 + 1;
                    break;
                  case 1:
                    UVar22 = 0x1f48;
                    *piVar16 = iVar4 + 1;
                    break;
                  case 2:
                    UVar22 = 0x1f49;
                    *piVar16 = iVar4 + 1;
                    break;
                  case 3:
                  default:
                    UVar22 = 0x1f52;
                    *piVar16 = iVar4 + 1;
                  }
                }
                piVar16[1] = (uint)((char)((uint)unaff_EDI >> 0x18) == DAT_00807340);
                pHVar23 = DAT_00807618;
                piVar16[3] = piVar17[-4];
                puVar7 = (uint *)FUN_006b0140(UVar22,pHVar23);
                iVar10 = FUN_00711110(*(void **)((int)this + 0x8d),puVar7);
                iVar24 = 1;
                piVar16[5] = iVar10 + 0x1b;
                iVar10 = *(int *)((int)this + 0x5d);
                piVar16[4] = *piVar17;
                piVar16[6] = 0x14;
                local_e8 = piVar16[5];
                puVar25 = (undefined4 *)(iVar10 + 0x28);
                uVar20 = FUN_006b4fe0(iVar10);
                iVar10 = FUN_006b50c0(local_e8,0x14,
                                      (uint)*(ushort *)(*(int *)((int)this + 0x5d) + 0xe),uVar20,
                                      puVar25,iVar24);
                piVar12[-1] = iVar10;
                piVar17 = piVar17 + 1;
                *piVar12 = (uint)(*(char *)(iVar24 + 10) != '\0') * 0x100 + 0x91 + (int)this;
                piVar16 = piVar16 + 0x1c;
                piVar12[1] = *local_88;
                bVar3 = (char)((uint)unaff_EDI >> 0x18) + 1;
                iVar4 = iVar4 + 1;
                unaff_EDI = (void *)CONCAT13(bVar3,(int3)unaff_EDI);
                piVar12 = piVar12 + 3;
              } while (bVar3 < (byte)local_90);
            }
            local_234[0] = 1;
            local_1ec = local_e68;
            local_234[1] = 1;
            local_224 = *(undefined4 *)((int)this + 8);
            local_220 = 2;
            local_200 = 2;
            local_1e8 = (_DAT_00807340 & 0xff) + 1;
            local_21c = 0x6205;
            local_1fc = 0x6217;
            local_204 = local_224;
            (**(code **)(**(int **)((int)this + 0xc) + 8))();
            puVar7 = (uint *)(local_e68 + 3);
            puVar9 = (uint *)((int)this + 0x2bd);
            iVar4 = 4;
            do {
              FUN_006b3640((int *)DAT_008075a8,*puVar9,0xffffffff,*puVar7,puVar7[1]);
              uVar20 = puVar7[3];
              in_stack_ffffffdc = (uint *)0x5e21c3;
              FUN_006b2800((int)DAT_008075a8,*puVar9,puVar7[2],uVar20);
              FUN_006b3020((int)DAT_008075a8,*puVar9,*(uint *)(uVar20 + 5));
              FUN_006b3430((int *)DAT_008075a8,*puVar9);
              puVar7 = puVar7 + 0x1c;
              puVar9 = puVar9 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        break;
      case 3:
        if (*(char *)((int)this + 0x6e) != '\x01') {
          if (*(uint *)((int)this + 0x2cd) != 0) {
            FUN_006e56b0(*(void **)((int)this + 0xc),*(uint *)((int)this + 0x2cd));
            *(undefined4 *)((int)this + 0x2cd) = 0;
            FUN_006b3af0((int *)DAT_008075a8,*(uint *)((int)this + 0x484));
            if (*(uint *)((int)this + 0x2d5) != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)this + 0x319),*(uint *)((int)this + 0x2d5));
            }
            if (*(uint *)((int)this + 0x366) != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)this + 0x3aa),*(uint *)((int)this + 0x366));
            }
            if (*(uint *)((int)this + 0x3f7) != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)this + 0x43b),*(uint *)((int)this + 0x3f7));
            }
          }
          FUN_006ab060((undefined4 *)((int)this + 0x6bf));
          if (puVar13[0xd] == '\x01') {
            puVar25 = local_b34;
            for (iVar4 = 0x21e; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar25 = 0;
              puVar25 = puVar25 + 1;
            }
            if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
              FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
            }
            puVar7 = FUN_006b54f0((uint *)0x0,10,10);
            *(uint **)(DAT_0081176c + 0x548) = puVar7;
            iVar4 = *(int *)(DAT_0080c4cb + 8);
            if (iVar4 != 0) {
              iVar10 = 0;
              if (0 < iVar4) {
                if (iVar4 < 1) {
                  pcVar8 = (char *)0x0;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar8 = *(char **)(*(int *)(DAT_0080c4cb + 0x14) + iVar10 * 4);
LAB_005e22f4:
                  thunk_FUN_005411a0(*(int *)(DAT_0081176c + 0x548),pcVar8,s______s_007cdb20);
                  iVar10 = iVar10 + 1;
                } while (iVar10 < *(int *)(DAT_0080c4cb + 8));
              }
              FUN_007126e0(*(int *)(DAT_0081176c + 0x548),(uint *)s________________007c21d8,
                           (uint *)&DAT_007c21ec,
                           (*(int *)(puVar13 + 0x16) - *(int *)((int)this + 0x2f5)) + -0x2d,0,
                           0xffffffff,(char *)0x0,1);
              if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
                FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
              }
              puVar7 = FUN_006b54f0((uint *)0x0,10,10);
              *(uint **)(DAT_0081176c + 0x548) = puVar7;
              local_ec = CONCAT31(local_ec._1_3_,(*(char *)((int)this + 0x6c7) != '\x01') + -1) &
                         0xffffff02;
              FUN_006b0140(0x2347,DAT_00807618);
              wsprintfA((LPSTR)local_c38,s___1d__s__007cdb14);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),(char *)local_c38);
              wsprintfA((LPSTR)local_c38,s___1d__s_007cdb08);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),(char *)local_c38);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),&DAT_007c3b5c);
              FUN_006b0140(0x2346,DAT_00807618);
              puVar7 = local_c38;
              wsprintfA((LPSTR)puVar7,s___1d__s__007cdb14);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),(char *)local_c38);
              FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),&DAT_007c3b5c);
              if (puVar7 != (uint *)0x0) {
                if (puVar7[2] != 0) {
                  FUN_007129d0(puVar7,puVar7);
                }
                iVar4 = 0;
                if (0 < (int)puVar7[2]) {
                  if ((int)puVar7[2] < 1) {
                    pcVar8 = (char *)0x0;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar8 = *(char **)(puVar7[5] + iVar4 * 4);
LAB_005e24c5:
                    FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),pcVar8);
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < (int)puVar7[2]);
                }
                FUN_006b5570((byte *)puVar7);
              }
              local_f0 = *(int *)(puVar13 + 0x16);
              iVar4 = *(int *)(puVar13 + 0x1a);
              iVar10 = 1;
              puVar25 = (undefined4 *)(*(int *)((int)this + 0x5d) + 0x28);
              uVar20 = FUN_006b4fe0(*(int *)((int)this + 0x5d));
              uVar6 = FUN_006b50c0(local_f0,iVar4,
                                   (uint)*(ushort *)(*(int *)((int)this + 0x5d) + 0xe),uVar20,
                                   puVar25,iVar10);
              *(undefined4 *)((int)this + 0x6bf) = uVar6;
              *(uint *)((int)this + 0x6c3) = (uint)(puVar13[10] != '\0') * 0x100 + 0x91 + (int)this;
              *(undefined4 *)((int)this + 0x6c7) = *(undefined4 *)(puVar13 + 9);
              local_b34[0] = 0;
              local_b34[1] = 2;
              local_b14 = *(int *)(puVar13 + 0xe) + 0xf;
              local_b34[2] = 1;
              local_b10 = *(int *)(puVar13 + 0x12) + 0xf;
              iVar4 = *(int *)((int)this + 0x8d);
              local_b34[3] = *(undefined4 *)(*(int *)(DAT_0081176c + 0x548) + 8);
              local_b24 = (*(int *)(puVar13 + 0x16) - *(int *)((int)this + 0x2f5)) + -0x2d;
              if (*(int *)(iVar4 + 0xa0) != 0) {
                iVar10 = iVar4;
                FUN_00710790(iVar4);
              }
              local_b20 = *(int *)(iVar4 + 0x8a);
              local_b1c = 1;
              local_af4 = 0x6332;
              local_a84 = 4;
              local_a80 = 0;
              local_a78[0] = 0;
              local_afc = *(undefined4 *)((int)this + 8);
              local_b18 = (*(int *)(iVar10 + 0x1a) + -0x1e) / *(int *)(iVar4 + 0x8a);
              local_af8 = 2;
              local_a7c = 2;
              local_a78[1] = 2;
              local_a78[2] = local_b24 + 0xf + local_b14;
              *(int *)((int)this + 0x37e) = local_a78[2];
              local_a18 = *(undefined4 *)((int)this + 8);
              local_a78[3] = (*(int *)(iVar10 + 0x12) - *(int *)((int)this + 0x38a)) + -0x10 +
                             *(int *)(iVar10 + 0x1a);
              *(int *)((int)this + 0x382) = local_a78[3];
              local_a68 = *(undefined4 *)((int)this + 0x386);
              local_a64 = *(int *)((int)this + 0x38a);
              local_968 = 500;
              local_964 = 0x32;
              local_a14 = 2;
              local_a10 = 0x6334;
              local_8fc = 2;
              piVar16 = local_a78;
              piVar12 = local_8f8;
              for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar12 = *piVar16;
                piVar16 = piVar16 + 1;
                piVar12 = piVar12 + 1;
              }
              local_764 = *(int *)((int)this + 0x417);
              local_8f8[2] = local_b24 + 0xf + local_b14;
              local_8e4 = *(int *)((int)this + 0x2f9);
              *(int *)((int)this + 0x2ed) = local_8f8[2];
              local_8f8[3] = *(int *)(iVar10 + 0x12) + 0xf;
              local_890 = 0x6333;
              *(int *)((int)this + 0x2f1) = local_8f8[3];
              local_8e8 = *(int *)((int)this + 0x2f5);
              local_77c = 3;
              local_778 = 1;
              local_770 = 0;
              local_76c = (local_8e8 - local_764) / 2 + local_b24 + 0xf + local_b14;
              *(int *)((int)this + 0x40f) = local_76c;
              local_768 = *(int *)(iVar10 + 0x12) + 0x1e + local_8e4;
              *(int *)((int)this + 0x413) = local_768;
              local_728 = *(undefined4 *)((int)this + 8);
              local_760 = ((*(int *)(iVar10 + 0x1a) - local_8e4) - *(int *)((int)this + 0x38a)) +
                          -0x3c;
              local_75c = 0xe;
              local_724 = 2;
              local_720 = 0x6335;
              (**(code **)(**(int **)((int)this + 0xc) + 8))();
              *(undefined4 *)((int)this + 0x2d) = 0x20;
              *(undefined4 *)((int)this + 0x31) = 1;
              FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x2cd),
                           (undefined4 *)((int)this + 0x1d));
              FUN_006b3640((int *)DAT_008075a8,*(uint *)((int)this + 0x484),0xffffffff,
                           *(uint *)(iVar10 + 0xe),*(uint *)(iVar10 + 0x12));
              in_stack_ffffffdc = (uint *)0x5e2823;
              FUN_006b2800((int)DAT_008075a8,*(uint *)((int)this + 0x484),*(uint *)(iVar10 + 0x16),
                           *(uint *)(iVar10 + 0x1a));
              FUN_006b3020((int)DAT_008075a8,*(uint *)((int)this + 0x484),*(uint *)(iVar10 + 5));
              uVar20 = *(uint *)((int)this + 0x484);
              FUN_006b3430((int *)DAT_008075a8,uVar20);
              if (*(int *)(iVar10 + 5) < 1) {
                uVar11 = 0;
              }
              else {
                uVar11 = *(int *)(iVar10 + 5) - 1;
              }
              if (*(uint *)((int)this + 0x2d5) != 0xffffffff) {
                uVar20 = uVar11;
                FUN_006b3020(*(int *)((int)this + 0x319),*(uint *)((int)this + 0x2d5),uVar11);
              }
              *(uint *)((int)this + 0x32e) = uVar11;
              if (*(int *)(uVar20 + 5) < 1) {
                uVar11 = 0;
              }
              else {
                uVar11 = *(int *)(uVar20 + 5) - 1;
              }
              if (*(uint *)((int)this + 0x366) != 0xffffffff) {
                FUN_006b3020(*(int *)((int)this + 0x3aa),*(uint *)((int)this + 0x366),uVar11);
              }
              *(uint *)((int)this + 0x3bf) = uVar11;
              if (*(int *)(uVar20 + 5) < 1) {
                uVar20 = 0;
              }
              else {
                uVar20 = *(int *)(uVar20 + 5) - 1;
              }
              if (*(uint *)((int)this + 0x3f7) != 0xffffffff) {
                FUN_006b3020(*(int *)((int)this + 0x43b),*(uint *)((int)this + 0x3f7),uVar20);
              }
              *(uint *)((int)this + 0x450) = uVar20;
              *(uint *)((int)this + 0x3fb) = (uint)(*(char *)((int)this + 0x6ca) == '\x01');
              if (*(uint *)((int)this + 0x2d5) != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)((int)this + 0x319);
                FUN_006b34d0(in_stack_ffffffdc,*(uint *)((int)this + 0x2d5),0xfffffffe,
                             *(uint *)((int)this + 0x2ed),*(uint *)((int)this + 0x2f1));
              }
              if (*(uint *)((int)this + 0x366) != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)((int)this + 0x3aa);
                FUN_006b34d0(in_stack_ffffffdc,*(uint *)((int)this + 0x366),0xfffffffe,
                             *(uint *)((int)this + 0x37e),*(uint *)((int)this + 0x382));
              }
              if (*(uint *)((int)this + 0x3f7) != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)((int)this + 0x43b);
                FUN_006b34d0(in_stack_ffffffdc,*(uint *)((int)this + 0x3f7),0xfffffffe,
                             *(uint *)((int)this + 0x40f),*(uint *)((int)this + 0x413));
              }
              if (*(uint *)((int)this + 0x3f7) != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)((int)this + 0x43b);
                FUN_006b3730(in_stack_ffffffdc,*(uint *)((int)this + 0x3f7),
                             *(uint *)((int)this + 0x3fb),*(uint *)((int)this + 0x40f),
                             *(uint *)((int)this + 0x413));
              }
            }
          }
        }
        break;
      case 5:
        cVar1 = puVar13[0xe];
        if (cVar1 == '\0') {
          iVar4 = *(int *)((int)this + 0x64f);
        }
        else {
          iVar4 = *(int *)((int)this + 0x647);
        }
        uVar20 = *(uint *)(puVar13 + 0xf);
        if (uVar20 < *(uint *)(iVar4 + 0xc)) {
          if (cVar1 == '\0') {
            puVar7 = (uint *)(*(int *)(*(int *)((int)this + 0x64f) + 8) * uVar20 +
                             *(int *)(*(int *)((int)this + 0x64f) + 0x1c));
          }
          else {
            puVar7 = (uint *)(*(int *)(*(int *)((int)this + 0x647) + 8) * uVar20 +
                             *(int *)(*(int *)((int)this + 0x647) + 0x1c));
          }
        }
        else {
          puVar7 = (uint *)0x0;
        }
        if (puVar13[0xd] == '\x01') {
          if (((puVar7 == (uint *)0x0) || ((int)*puVar7 < 0)) ||
             (puVar7[8] != *(uint *)(puVar13 + 0x14))) {
            thunk_FUN_005e10a0(puVar7);
            if (*(int *)(puVar13 + 0x14) < *(int *)(DAT_0080c4c7 + 8)) {
              pcVar8 = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + *(int *)(puVar13 + 0x14) * 4);
            }
            else {
              pcVar8 = (char *)0x0;
            }
            if (pcVar8 != (char *)0x0) {
              puVar7 = local_13c;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              *(undefined2 *)puVar7 = 0;
              if (puVar13[0xe] == '\0') {
                local_7c = local_7c & 0xffffff00;
                local_88 = (int *)((-(uint)(puVar13[9] != '\x01') & 0xfffffffe) + 2);
                do {
                  local_fc = *(int *)(puVar13 + 0x22);
                  iVar4 = *(int *)(puVar13 + 0x26);
                  iVar10 = 1;
                  puVar25 = (undefined4 *)(*(int *)((int)this + 0x5d) + 0x28);
                  uVar20 = FUN_006b4fe0(*(int *)((int)this + 0x5d));
                  uVar11 = FUN_006b50c0(local_fc,iVar4,
                                        (uint)*(ushort *)(*(int *)((int)this + 0x5d) + 0xe),uVar20,
                                        puVar25,iVar10);
                  local_13c[(local_7c & 0xff) + 1] = uVar11;
                  uVar20 = *(uint *)(uVar11 + 0x14);
                  if (uVar20 == 0) {
                    uVar20 = ((uint)*(ushort *)(uVar11 + 0xe) * *(int *)(uVar11 + 4) + 0x1f >> 3 &
                             0x1ffffffc) * *(int *)(uVar11 + 8);
                  }
                  piVar16 = (int *)0x5e2d28;
                  puVar25 = (undefined4 *)FUN_006b4fa0(uVar11);
                  for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                    *puVar25 = 0xffffffff;
                    puVar25 = puVar25 + 1;
                  }
                  for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                    *(undefined1 *)puVar25 = 0xff;
                    puVar25 = (undefined4 *)((int)puVar25 + 1);
                  }
                  piVar12 = (int *)(uint)(byte)puVar13[0x19];
                  thunk_FUN_005e11d0(*piVar16,puVar13[0x19],puVar13[0xb]);
                  if (puVar13[0x19] != '\0') {
                    local_110 = (uint)(puVar13[10] == '\x01') * 0x100 + 0x91 + (int)this;
                  }
                  FUN_00710a90(*piVar12,0,0,0,0,0);
                  puVar7 = FUN_006b54f0((uint *)0x0,1,1);
                  FUN_006b5aa0((int)puVar7,pcVar8);
                  local_80 = FUN_007126e0((int)puVar7,(uint *)s________________007c21d8,
                                          (uint *)&DAT_007c21ec,
                                          *(int *)(puVar13 + 0x22) + *(int *)(puVar13 + 0x2a) * -2,0
                                          ,0xffffffff,(char *)0x0,1);
                  FUN_006b5570((byte *)puVar7);
                  puVar7 = local_80;
                  if (local_80 != (uint *)0x0) {
                    piVar16 = local_88;
                    if ((char)local_7c != '\0') {
                      if ((char)local_7c == '\x01') {
                        piVar16 = (int *)((int)local_88 + 1);
                      }
                      else {
                        piVar16 = (int *)0x4;
                      }
                    }
                    FUN_00711f70((int)local_80,0,-1,*(int *)(puVar13 + 0x2a),
                                 *(int *)(puVar13 + 0x2e),piVar16);
                    FUN_006b5570((byte *)puVar7);
                  }
                  bVar3 = (char)local_7c + 1;
                  local_7c = CONCAT31(local_7c._1_3_,bVar3);
                } while (bVar3 < 3);
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar13 + 5),0x403db4,
                             *(uint *)(puVar13 + 0x22),*(uint *)(puVar13 + 0x26),
                             *(uint *)((int)this + 0x64f));
                uVar20 = *(uint *)(puVar13 + 0xf);
                puVar7 = *(uint **)((int)this + 0x64f);
              }
              else {
                local_106 = *(undefined4 *)(puVar13 + 9);
                iVar10 = 1;
                local_107 = puVar13[0x19];
                local_10c = puVar13[0x18];
                local_f8 = *(int *)(puVar13 + 0x22);
                iVar4 = *(int *)(puVar13 + 0x26);
                puVar25 = (undefined4 *)(*(int *)((int)this + 0x5d) + 0x28);
                local_f4 = (-(uint)(puVar13[9] != '\x01') & 0xfffffffe) + 2;
                uVar20 = FUN_006b4fe0(*(int *)((int)this + 0x5d));
                local_13c[1] = FUN_006b50c0(local_f8,iVar4,
                                            (uint)*(ushort *)(*(int *)((int)this + 0x5d) + 0xe),
                                            uVar20,puVar25,iVar10);
                uVar11 = 0x5e2b09;
                puVar25 = (undefined4 *)FUN_006b4fa0(local_13c[1]);
                for (uVar20 = uVar11 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *puVar25 = 0xffffffff;
                  puVar25 = puVar25 + 1;
                }
                for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined1 *)puVar25 = 0xff;
                  puVar25 = (undefined4 *)((int)puVar25 + 1);
                }
                if (puVar13[0x19] != '\0') {
                  local_110 = (uint)(local_106._1_1_ == '\x01') * 0x100 + 0x91 + (int)this;
                }
                FUN_00710a90(local_13c[1],0,0,0,0,0);
                puVar7 = FUN_006b54f0((uint *)0x0,1,1);
                FUN_006b5aa0((int)puVar7,pcVar8);
                puVar9 = FUN_007126e0((int)puVar7,(uint *)s________________007c21d8,
                                      (uint *)&DAT_007c21ec,
                                      *(int *)(puVar13 + 0x22) + *(int *)(puVar13 + 0x2a) * -2,0,
                                      0xffffffff,(char *)0x0,1);
                FUN_006b5570((byte *)puVar7);
                if (puVar9 != (uint *)0x0) {
                  local_102 = (uint *)FUN_00713080((char *)0x0,(int)puVar9);
                  if (local_102 != (uint *)0x0) {
                    local_10b = FUN_0072e530(0xb4);
                    if (local_10b == 0) {
                      local_10b = 0;
                    }
                    else {
                      *(undefined4 *)(local_10b + 0x58) = 0;
                      *(undefined4 *)(local_10b + 0x88) = 0;
                    }
                    local_128 = *(undefined4 *)(puVar13 + 0x2a);
                    local_124 = *(undefined4 *)(puVar13 + 0x2e);
                    uStackY_48 = 0x2c51;
                    local_46 = 0x5e;
                    local_120 = FUN_00713b00(local_102,*(void **)((int)this + 0x89),0,0,0,
                                             *(int *)(puVar13 + 0x22) +
                                             *(int *)(puVar13 + 0x2a) * -2,
                                             *(int *)(puVar13 + 0x26) +
                                             *(int *)(puVar13 + 0x2e) * -2,0,0,local_f4,local_f4 + 1
                                             ,4,0xff);
                    local_120 = local_120 + 1;
                  }
                  FUN_006b5570((byte *)puVar9);
                }
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar13 + 5),0x4041b0,
                             *(uint *)(puVar13 + 0x22),*(uint *)(puVar13 + 0x26),
                             *(uint *)((int)this + 0x647));
                uVar20 = *(uint *)(puVar13 + 0xf);
                puVar7 = *(uint **)((int)this + 0x647);
              }
              FUN_006ae140(puVar7,uVar20,local_13c);
              in_stack_ffffffdc = DAT_008075a8;
              FUN_006b3640((int *)DAT_008075a8,local_13c[0],0,*(uint *)(puVar13 + 0x1a),
                           *(uint *)(puVar13 + 0x1e));
            }
          }
          else {
            if (cVar1 == '\0') {
              uVar20 = puVar7[4];
            }
            else {
              uVar20 = 0;
            }
            in_stack_ffffffdc = DAT_008075a8;
            FUN_006b3730(DAT_008075a8,*puVar7,uVar20,*(uint *)(puVar13 + 0x1a),
                         *(uint *)(puVar13 + 0x1e));
          }
        }
        else if ((puVar7 != (uint *)0x0) && (-1 < (int)*puVar7)) {
          if (*(char *)((int)this + 0x6d) == '\x05') {
            thunk_FUN_005e10a0(puVar7);
          }
          else {
            if (cVar1 == '\0') {
              uVar20 = 1;
            }
            else {
              uVar20 = puVar7[7] - 2;
            }
            puVar7[4] = uVar20;
            puVar7[10] = 2;
            puVar7[9] = *(uint *)((int)this + 0x69);
            FUN_006b35d0((int *)DAT_008075a8,*puVar7);
          }
        }
        break;
      case 6:
        if (*(char *)((int)this + 0x6d) != '\x05') {
          puVar7 = (uint *)FUN_00719d00(*(undefined4 *)((int)this + 0x70),puVar13 + 0xd,0,0);
          if (puVar7 == (uint *)0x0) {
            in_stack_ffffffdc = (uint *)0x5e2f3a;
            puVar7 = (uint *)FUN_00719d00(DAT_00806798,puVar13 + 0xd,0,0);
            if (puVar7 == (uint *)0x0) break;
          }
          in_stack_ffffffdc = (uint *)0x5e2f24;
          thunk_FUN_0056a130(&DAT_00807658,0,'\x03',-1,puVar7);
        }
        break;
      case 7:
        iVar4 = *(int *)((int)this + 0x64b);
        if (*(uint *)(puVar13 + 0xe) < *(uint *)(iVar4 + 0xc)) {
          iVar4 = *(int *)(iVar4 + 8) * *(uint *)(puVar13 + 0xe) + *(int *)(iVar4 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        if (puVar13[0xd] == '\x01') {
          FUN_00715820(&local_1dc);
          puVar25 = (undefined4 *)0x0;
          local_142 = (int *)0x0;
          local_94 = 1;
          local_2bc = DAT_00858df8;
          DAT_00858df8 = &local_2bc;
          iVar10 = __setjmp3(local_2b8,0,unaff_EDI,iVar4);
          if (iVar10 == 0) {
            puVar26 = puVar25;
            if (iVar4 != 0) {
              pbVar15 = (byte *)(iVar4 + 0x65);
              if (pbVar15 != (byte *)0x0) {
                pbVar14 = (byte *)((int)puVar25 + 0x12);
                do {
                  bVar3 = *pbVar15;
                  bVar21 = bVar3 < *pbVar14;
                  if (bVar3 != *pbVar14) {
LAB_005e2ffb:
                    iVar10 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                    goto LAB_005e3000;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar15[1];
                  bVar21 = bVar3 < pbVar14[1];
                  if (bVar3 != pbVar14[1]) goto LAB_005e2ffb;
                  pbVar15 = pbVar15 + 2;
                  pbVar14 = pbVar14 + 2;
                } while (bVar3 != 0);
                iVar10 = 0;
LAB_005e3000:
                if (iVar10 != 0) {
                  puVar26 = (undefined4 *)0x5e300e;
                  iVar10 = iVar4;
                  FUN_00715ab0();
                  piVar16 = (int *)(iVar4 + 0x9a);
                  puVar27 = (undefined4 *)(iVar4 + 0x9a);
                  iVar4 = iVar10;
                  if (*piVar16 != 0) {
                    FUN_006ab060(puVar27);
                    puVar26 = puVar27;
                    iVar4 = iVar10;
                  }
                  goto LAB_005e3030;
                }
              }
              local_94 = 0;
            }
LAB_005e3030:
            this = local_8c;
            if (local_94 == 0) {
              if (iVar4 == 0) {
                puVar7 = (uint *)0x0;
              }
              else {
                puVar7 = (uint *)(iVar4 + 4);
              }
              puVar9 = local_1d8;
              puVar25 = puVar26;
              for (iVar10 = 0x11; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              local_194 = *(uint **)(iVar4 + 0x48);
              local_190 = *(undefined1 *)(iVar4 + 0x4c);
              local_18f = *(undefined4 *)(iVar4 + 0x4d);
              local_18b = *(undefined4 *)(iVar4 + 0x51);
              local_187 = *(undefined4 *)(iVar4 + 0x55);
              local_183 = *(undefined4 *)(iVar4 + 0x59);
              local_17f = *(undefined4 *)(iVar4 + 0x5d);
              local_17b = *(undefined4 *)(iVar4 + 0x61);
              puVar13 = local_177;
              iVar10 = 0x20;
              do {
                *puVar13 = puVar13[iVar4 - (int)&local_1dc];
                puVar13 = puVar13 + 1;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              local_157 = *(undefined4 *)(iVar4 + 0x85);
              local_153 = *(undefined4 *)(iVar4 + 0x89);
              local_14f = *(undefined4 *)(iVar4 + 0x8d);
            }
            else {
              FUN_007158a0((int *)DAT_008075a8,*(uint *)((int)puVar25 + 5),'\x1e',(undefined4 *)0x0,
                           0,0);
              in_stack_ffffffdc = (uint *)0x1e;
              iVar4 = FUN_00716040(&local_1dc,*(undefined4 *)((int)this + 0x70),0x1e,0,
                                   (char *)((int)puVar25 + 0x12),0xffffffff,0);
              if (iVar4 != 0) {
                in_stack_ffffffdc = (uint *)0x1e;
                FUN_00716040(&local_1dc,DAT_00806798,0x1e,0,(char *)((int)puVar25 + 0x12),0xffffffff
                             ,1);
              }
            }
            local_1c0 = *(uint *)((int)puVar25 + 0x32);
            local_1bc = *(uint *)((int)puVar25 + 0x36);
            cVar1 = *(char *)((int)puVar25 + 0x4f);
            if (cVar1 == '\0') {
              local_14b = '\0';
              local_1d8[1] = *(uint *)((int)puVar25 + 0x4a);
            }
            else if (cVar1 == '\x01') {
              local_198 = *(undefined4 *)((int)this + 0x69);
              local_14b = (*(char *)((int)puVar25 + 0x4e) != '\0') + '\x01';
              local_1d8[1] = *(uint *)((int)puVar25 + 0x4a);
              local_19c = *(undefined4 *)((int)puVar25 + 0x46);
            }
            else if (cVar1 == '\x02') {
              local_198 = *(undefined4 *)((int)this + 0x69);
              local_14b = (*(char *)((int)puVar25 + 0x4e) != '\0') + '\x03';
              local_1d8[1] = *(uint *)((int)puVar25 + 0x4a);
              local_19c = *(undefined4 *)((int)puVar25 + 0x46);
              local_14a = 0;
              local_146 = *(int *)((int)puVar25 + 0x42);
              in_stack_ffffffdc = *(uint **)((int)puVar25 + 0x32);
              local_142 = FUN_006c81c0((int)in_stack_ffffffdc,*(int *)((int)puVar25 + 0x36),
                                       *(int *)((int)puVar25 + 0x3a),*(int *)((int)puVar25 + 0x3e),
                                       local_146);
              if (local_142 == (int *)0x0) {
                local_14b = (*(char *)((int)puVar25 + 0x4e) != '\0') + '\x01';
              }
            }
            if (local_1d8[0] != 0xffffffff) {
              in_stack_ffffffdc = local_194;
              FUN_006b3730(local_194,local_1d8[0],local_1d8[1],local_1c0,local_1bc);
            }
            FUN_006ae140(*(uint **)((int)this + 0x64b),*(uint *)((int)puVar25 + 0xe),&local_1dc);
            DAT_00858df8 = local_2bc;
          }
          else {
            DAT_00858df8 = local_2bc;
            FUN_00715ab0();
            this = local_8c;
            if (local_142 != (int *)0x0) {
              FUN_006ab060(&local_142);
              this = local_8c;
            }
          }
        }
        else if (iVar4 != 0) {
          FUN_00715ab0();
          if (*(int *)(iVar4 + 0x9a) != 0) {
            FUN_006ab060((undefined4 *)(iVar4 + 0x9a));
          }
        }
        break;
      case 8:
        puVar25 = local_e4;
        for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar25 = 0;
          puVar25 = puVar25 + 1;
        }
        local_da = 0;
        local_d9 = 1;
        local_d8 = 1;
        local_db = 1;
        local_e4[0]._0_1_ = 1;
        local_d7 = 2;
        local_d6 = 0x26201;
        uStackY_d2 = 0x22600;
        iStackY_ce._1_3_ = 0x91;
        iStackY_ce._0_1_ = 0;
        uStackY_ca = 0x2800;
        uStackY_c6 = uStackY_c6 & 0xffffff00;
        FUN_006b11d0(*(uint **)((int)this + 0x74),uVar11 + 1,local_e4);
        local_d7 = 1;
        local_d6 = CONCAT31(0x2d,(undefined1)local_d6);
        uStackY_d2 = 0x22600;
        iStackY_ce._0_1_ = 0;
        FUN_006b11d0(*(uint **)((int)this + 0x74),*(int *)((int)this + 0x7c) + 1,local_e4);
        local_d7 = 0;
        local_d6 = CONCAT31(0x23,(undefined1)local_d6);
        uStackY_d2 = 0x1f400;
        iStackY_ce = (uint)iStackY_ce._1_3_ << 8;
        FUN_006b11d0(*(uint **)((int)this + 0x74),*(int *)((int)this + 0x7c) + 1,local_e4);
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        local_e4[0]._0_1_ = 2;
        local_d7 = 1;
        local_d6 = 0x104;
        uStackY_c6 = 0x226;
        uStackY_d2 = 0x122;
        local_c2 = 0x23f;
        iStackY_ce = 0x1a4;
        local_be = 0x226;
        FUN_006b11d0(*(uint **)((int)this + 0x74),*(int *)((int)this + 0x7c) + 1,local_e4);
        uStackY_d2 = 200;
        uStackY_ca = 200;
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        local_e4[0]._0_1_ = 3;
        local_d7 = 1;
        local_d6 = 0x96;
        iStackY_ce = 500;
        FUN_006b11d0(*(uint **)((int)this + 0x74),*(int *)((int)this + 0x7c) + 1,local_e4);
        break;
      case 9:
        puVar7 = (uint *)((int)this + 0x5d);
        if (*(int *)((int)this + 0x5d) != 0) {
          FUN_006f20e0(puVar7);
        }
        pbVar15 = puVar13 + 0xd;
        *(undefined1 *)((int)this + 0x80) = 0;
        uVar20 = FUN_0070a9f0(*(undefined4 *)((int)this + 0x70),(char *)pbVar15,0,0);
        *puVar7 = uVar20;
        if (uVar20 == 0) {
          uVar20 = FUN_0070a9f0(DAT_00806798,(char *)pbVar15,0,0);
          *puVar7 = uVar20;
          if (uVar20 == 0) {
            iVar4 = 1;
            bVar3 = 0;
            pCVar5 = FUN_006f2c00(s_TASK_BKG_007cda64,1,(uint)DAT_0080874e);
            uVar20 = FUN_0070a9f0(DAT_00806780,pCVar5,bVar3,iVar4);
            *puVar7 = uVar20;
            *(undefined1 *)((int)this + 0x80) = 1;
          }
          else {
            puVar25 = (undefined4 *)local_78;
            for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar25 = 0;
              puVar25 = puVar25 + 1;
            }
            local_6d = 1;
            local_6c = 1;
            local_6f = 1;
            local_78._1_4_ = *(undefined4 *)(puVar13 + 1);
            local_73 = 0x7ffffff0;
            local_78[0] = 7;
            local_6b = 1;
            pbVar14 = pbVar15;
            pbVar18 = PTR_s_DEFAULT_WS_ANIMATED_0079c224;
            do {
              bVar3 = *pbVar14;
              bVar21 = bVar3 < *pbVar18;
              if (bVar3 != *pbVar18) {
LAB_005e14be:
                iVar4 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                goto LAB_005e14c3;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar14[1];
              bVar21 = bVar3 < pbVar18[1];
              if (bVar3 != pbVar18[1]) goto LAB_005e14be;
              pbVar14 = pbVar14 + 2;
              pbVar18 = pbVar18 + 2;
            } while (bVar3 != 0);
            iVar4 = 0;
LAB_005e14c3:
            pbVar14 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            pbVar18 = pbVar15;
            if (iVar4 == 0) {
              uVar20 = 0xffffffff;
              pcVar8 = &DAT_007cdc48;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf0;
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              iVar4 = *(int *)((int)this + 0x7c);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0;
              FUN_006b11d0(*(uint **)((int)this + 0x74),iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_WS_ANI2_007cdc38;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf1;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_WS_ANI3_007cdc28;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf2;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x40;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar20 = 0xffffffff;
              pcVar8 = &DAT_007cdc18;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x208;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = &DAT_007cdc08;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf4;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x208;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = &DAT_007cdbf8;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf5;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x2df;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              pbVar14 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
              pbVar18 = pbVar15;
            }
            do {
              bVar3 = *pbVar15;
              bVar21 = bVar3 < *pbVar14;
              if (bVar3 != *pbVar14) {
LAB_005e16bc:
                iVar4 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                goto LAB_005e16c1;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar15[1];
              bVar21 = bVar3 < pbVar14[1];
              if (bVar3 != pbVar14[1]) goto LAB_005e16bc;
              pbVar15 = pbVar15 + 2;
              pbVar14 = pbVar14 + 2;
            } while (bVar3 != 0);
            iVar4 = 0;
LAB_005e16c1:
            pbVar15 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar4 == 0) {
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_BO_ANI1_007cdbe8;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf0;
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              iVar4 = *(int *)((int)this + 0x7c);
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0xb0;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_BO_ANI2_007cdbd8;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf1;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_BO_ANI3_007cdbc8;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf2;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0xb0;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_BO_ANI4_007cdbb8;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0xdc;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = &DAT_007cdba8;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf4;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x1ce;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = &DAT_007cdb98;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf5;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x2a9;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              local_6a = 0xf6;
              pcVar8 = &DAT_007cdb88;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x78;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_BO_ANI8_007cdb78;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf7;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x78;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              pbVar15 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar3 = *pbVar18;
              bVar21 = bVar3 < *pbVar15;
              if (bVar3 != *pbVar15) {
LAB_005e1958:
                iVar4 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                goto LAB_005e195d;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar18[1];
              bVar21 = bVar3 < pbVar15[1];
              if (bVar3 != pbVar15[1]) goto LAB_005e1958;
              pbVar18 = pbVar18 + 2;
              pbVar15 = pbVar15 + 2;
            } while (bVar3 != 0);
            iVar4 = 0;
LAB_005e195d:
            if (iVar4 == 0) {
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_SI_ANI1_007cdb68;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf0;
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              iVar4 = *(int *)((int)this + 0x7c);
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x8e;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_SI_ANI2_007cdb58;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf1;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x103;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_SI_ANI3_007cdb48;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf2;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x103;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_SI_ANI4_007cdb38;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0xd7;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
              uVar20 = 0xffffffff;
              pcVar8 = s_DEF_SI_ANI5_007cdb28;
              do {
                pcVar19 = pcVar8;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar19 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar1 != '\0');
              uVar20 = ~uVar20;
              local_6a = 0xf4;
              iVar4 = *(int *)((int)this + 0x7c);
              pcVar8 = pcVar19 + -uVar20;
              pcVar19 = local_66;
              for (uVar11 = uVar20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar19 = pcVar19 + 4;
              }
              puVar7 = *(uint **)((int)this + 0x74);
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar19 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar19 = pcVar19 + 1;
              }
              local_46 = 0x27c;
              FUN_006b11d0(puVar7,iVar4 + 1,(undefined4 *)local_78);
            }
            *(undefined1 *)((int)this + 0x80) = 2;
          }
        }
        iVar4 = *(int *)((int)this + 0x74);
        if (*(uint *)((int)this + 0x7c) < *(uint *)(iVar4 + 0xc)) {
          piVar16 = (int *)(*(int *)(iVar4 + 8) * *(uint *)((int)this + 0x7c) +
                           *(int *)(iVar4 + 0x1c));
        }
        else {
          piVar16 = (int *)0x0;
        }
        FUN_006bc360(*(int *)((int)this + 0x5d),local_1268,piVar16);
        in_stack_ffffffdc = (uint *)0x0;
        FUN_00718780((int)local_1268,0,0x100,0x1a,0x10,(undefined4 *)((int)this + 0x91));
        FUN_00718780((int)local_1268,0,0x100,0x2e,0x10,(undefined4 *)((int)this + 0x191));
        if (*(int *)((int)this + 0x7c) != 0) {
          thunk_FUN_0055dbf0(DAT_0080759c,1,0);
          thunk_FUN_005e09e0();
          in_stack_ffffffdc = DAT_008075a8;
          thunk_FUN_0055ddf0(DAT_0080759c,(int *)DAT_008075a8,*(int *)((int)this + 0x5d),10,2);
        }
        if (*(uint **)((int)this + 0x89) != (uint *)0x0) {
          FUN_00710560(*(uint **)((int)this + 0x89));
        }
        iVar4 = thunk_FUN_005defe0(*(int *)((int)this + 0x5d),(undefined *)0x0,DAT_00807dd9);
        *(int *)((int)this + 0x89) = iVar4;
        *(undefined4 *)(iVar4 + 0x58) = 1;
        *(undefined4 *)(iVar4 + 0x5c) = 0;
        if (*(uint **)((int)this + 0x8d) != (uint *)0x0) {
          FUN_00710560(*(uint **)((int)this + 0x8d));
        }
        uVar6 = thunk_FUN_005df290(*(int *)((int)this + 0x5d),(undefined *)0x0,DAT_00807dd9);
        *(undefined4 *)((int)this + 0x8d) = uVar6;
        thunk_FUN_00568bc0(&DAT_00807658,0);
        if ((DAT_00807300._1_1_ & 8) != 0) {
          puVar7 = (uint *)FUN_00719d00(*(undefined4 *)((int)this + 0x70),
                                        (char *)((int)piVar16 + 0x2d),0,0);
          *(uint **)((int)this + 0x85) = puVar7;
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)FUN_00719d00(DAT_00806798,(char *)((int)piVar16 + 0x2d),0,0);
            *(uint **)((int)this + 0x85) = puVar7;
            if (puVar7 == (uint *)0x0) {
              in_stack_ffffffdc = (uint *)0x5e1cab;
              thunk_FUN_0056a130(&DAT_00807658,0x14,'\x02',0,(uint *)0x0);
              break;
            }
          }
          in_stack_ffffffdc = (uint *)0x5e1c94;
          thunk_FUN_0056a130(&DAT_00807658,0,'\x02',0,puVar7);
        }
      }
      iVar4 = *(int *)((int)this + 0x7c) + 1;
      *(int *)((int)this + 0x7c) = iVar4;
      uVar20 = *(uint *)(*(int *)((int)this + 0x74) + 0xc);
    } while (iVar4 < (int)uVar20);
  }
  if (*(int *)((int)this + 0x7c) == *(int *)(*(int *)((int)this + 0x74) + 0xc)) {
    if ((*(char *)((int)this + 0x6d) == '\x05') && (iVar4 = *(int *)((int)this + 0x64b), iVar4 != 0)
       ) {
      uVar20 = 0;
      if (*(int *)(iVar4 + 0xc) != 0) {
        if (*(int *)(iVar4 + 0xc) == 0) {
          iVar4 = 0;
          goto LAB_005e34e0;
        }
        do {
          iVar4 = *(int *)(iVar4 + 8) * uVar20 + *(int *)(iVar4 + 0x1c);
LAB_005e34e0:
          if ((*(int *)(iVar4 + 4) != -1) &&
             ((*(char *)(iVar4 + 0x91) == '\x01' || (*(char *)(iVar4 + 0x91) == '\x03')))) {
            FUN_00715ab0();
            if (*(int *)(iVar4 + 0x9a) != 0) {
              FUN_006ab060((undefined4 *)(iVar4 + 0x9a));
            }
          }
          iVar4 = *(int *)((int)this + 0x64b);
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(uint *)(iVar4 + 0xc));
      }
    }
    *(undefined1 *)((int)this + 0x6d) = 1;
  }
  DAT_00858df8 = local_278;
  return;
}


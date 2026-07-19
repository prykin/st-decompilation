
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PlayScript */

void __thiscall MTaskTy::PlayScript(MTaskTy *this)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  SpriteClassTy *pSVar5;
  byte bVar6;
  int iVar7;
  LPSTR pCVar8;
  undefined4 uVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  MTaskTy *extraout_ECX;
  cMf32 *this_00;
  uint uVar14;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_01;
  ccFntTy *this_02;
  int *piVar15;
  MTaskTy *this_03;
  undefined4 unaff_ESI;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  int *piVar19;
  int *piVar20;
  undefined4 *puVar21;
  SpriteClassTy *pSVar22;
  undefined4 *unaff_EDI;
  byte *pbVar23;
  char *pcVar24;
  undefined4 *puVar25;
  uint uVar26;
  bool bVar27;
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
  InternalExceptionFrame local_2bc;
  InternalExceptionFrame local_278;
  undefined4 local_234 [4];
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  int *local_1ec;
  int local_1e8;
  SpriteClassTy local_1dc;
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
  cTypingTy *local_10b;
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
  MTaskTy *local_8c;
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
  UINT UVar28;
  HINSTANCE pHVar29;
  int iVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  SpriteClassTy *pSVar33;
  
  Library::MSVCRT::FUN_0072da40();
  local_278.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_278;
  local_8c = extraout_ECX;
  iVar7 = Library::MSVCRT::__setjmp3(local_278.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_278.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x45f,0,iVar7,
                                &DAT_007a4ccc);
    if (iVar13 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Start_task_obj_cpp_007cd994,0x45f);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar26 = *(uint *)(*(int *)&local_8c[1].field_0x7 + 0xc);
  this_03 = local_8c;
  if (*(int *)&local_8c[1].field_0xf < (int)uVar26) {
    do {
      uVar14 = *(uint *)&this_03[1].field_0xf;
      if (uVar14 < uVar26) {
        puVar16 = (undefined1 *)
                  (*(int *)(*(int *)&this_03[1].field_0x7 + 8) * uVar14 +
                  *(int *)(*(int *)&this_03[1].field_0x7 + 0x1c));
      }
      else {
        puVar16 = (undefined1 *)0x0;
      }
      if (((uint)(this_03->field_0069 - this_03->field_0061) < *(uint *)(puVar16 + 1)) &&
         (*(char *)(this_03 + 1) != '\x05')) break;
      switch(*puVar16) {
      case 1:
        if ((this_03[1].field_0x1 != '\x01') || ((puVar16[0xd] != '\0' && (puVar16[0xd] != '\x01')))
           ) {
          switch(puVar16[0xd]) {
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
          uVar26 = (uint)in_stack_ffffffdc & 0xff;
          if (*(int *)(&this_03[6].field_0x3 + uVar26 * 4) != 0) {
            FUN_006b3af0((int *)DAT_008075a8,*(uint *)(&this_03[6].field_0x17 + uVar26 * 4));
            FUN_006e56b0(*(void **)&this_03->field_0xc,*(uint *)(&this_03[6].field_0x3 + uVar26 * 4)
                        );
            *(undefined4 *)(&this_03[6].field_0x3 + uVar26 * 4) = 0;
          }
          FUN_006ab060((undefined4 *)(&this_03[0xe].field_0x5d + uVar26 * 0xc));
          if (puVar16[0xe] == '\x01') {
            local_84 = *(uint *)(puVar16 + 0x1b);
            if ((int)local_84 < 0x28) {
              local_84 = 0x28;
            }
            iVar13 = 1;
            iVar7 = *(int *)&this_03->field_0x5d + 0x28;
            uVar14 = FUN_006b4fe0(*(int *)&this_03->field_0x5d);
            uVar9 = FUN_006b50c0(iVar7,local_84,
                                 (uint)*(ushort *)(*(int *)&this_03->field_0x5d + 0xe),uVar14,
                                 (undefined4 *)iVar7,iVar13);
            *(undefined4 *)(&this_03[0xe].field_0x5d + uVar26 * 0xc) = uVar9;
            (&this_03[0xe].field_0061)[uVar26 * 3] =
                 (uint)(puVar16[10] == '\x01') * 0x100 + 0x91 + (int)this_03;
            (&this_03[0xe].field_0065)[uVar26 * 3] = *(undefined4 *)(puVar16 + 9);
            uVar9 = CreateBut(this_03,1,1,*(undefined4 *)(puVar16 + 0xf),
                              *(undefined4 *)(puVar16 + 0x13),iVar7,local_84,uVar26 + 0x6200,
                              uVar26 + 0x6212);
            *(undefined4 *)(&this_03[6].field_0x3 + uVar26 * 4) = uVar9;
            uVar14 = *(uint *)(puVar16 + 0xf);
            puVar10 = (uint *)(&this_03[6].field_0x17 + uVar26 * 4);
            Library::DKW::DDX::FUN_006b3640
                      ((int *)DAT_008075a8,*(uint *)(&this_03[6].field_0x17 + uVar26 * 4),0xffffffff
                       ,uVar14,*(uint *)(puVar16 + 0x13));
            in_stack_ffffffdc = (uint *)0x5e1e40;
            FUN_006b2800((int)DAT_008075a8,*puVar10,uVar14,local_84);
            FUN_006b3020((int)DAT_008075a8,*puVar10,*(uint *)(puVar16 + 5));
            Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,*puVar10);
          }
        }
        break;
      case 2:
        if (this_03[1].field_0x1 != '\x01') {
          if (*(int *)&this_03[6].field_0x2b != 0) {
            puVar10 = (uint *)&this_03[6].field_0x2f;
            iVar7 = 4;
            do {
              FUN_006b3af0((int *)DAT_008075a8,*puVar10);
              puVar10 = puVar10 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            FUN_006e56b0(*(void **)&this_03->field_0xc,*(uint *)&this_03[6].field_0x2b);
            *(undefined4 *)&this_03[6].field_0x2b = 0;
          }
          puVar31 = (undefined4 *)&this_03[0xf].field_0x2c;
          iVar7 = 4;
          do {
            FUN_006ab060(puVar31);
            puVar31 = puVar31 + 3;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          if (puVar16[0xd] == '\x01') {
            puVar31 = local_234;
            for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar31 = 0;
              puVar31 = puVar31 + 1;
            }
            piVar19 = local_e68;
            for (iVar7 = 0x8c; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar19 = 0;
              piVar19 = piVar19 + 1;
            }
            bVar6 = 2;
            piVar19 = (int *)(puVar16 + 0x16);
            iVar7 = 2;
            do {
              if (-1 < *piVar19) {
                bVar6 = bVar6 + 1;
              }
              piVar19 = piVar19 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            local_90 = CONCAT31((int3)((uint)local_90 >> 8),bVar6);
            local_80 = (uint *)(uint)bVar6;
            if (local_80 == (uint *)0x2) {
              if ((DAT_00807340 == '\x01') || (DAT_00807340 == '\x03')) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((local_80 == (uint *)0x3) && (DAT_00807340 == '\x03')) {
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            unaff_EDI = (undefined4 *)((uint)unaff_EDI & 0xffffff);
            if (bVar6 != 0) {
              local_88 = (int *)(puVar16 + 9);
              iVar7 = 0;
              piVar19 = local_e68;
              piVar20 = (int *)(puVar16 + 0x1e);
              piVar15 = (int *)&this_03[0xf].field_0x30;
              do {
                UVar28 = 0x1f52;
                if (local_80 == (uint *)0x2) {
                  if (iVar7 == 0) {
                    UVar28 = 0x1f47;
                    *piVar19 = 1;
                  }
                  else if (iVar7 == 1) {
                    UVar28 = 0x1f49;
                    *piVar19 = 3;
                  }
                }
                else if (local_80 == (uint *)0x3) {
                  if (iVar7 == 0) {
                    UVar28 = 0x1f47;
LAB_005e200a:
                    *piVar19 = iVar7 + 1;
                  }
                  else if (iVar7 == 1) {
                    UVar28 = 0x1f48;
                    *piVar19 = 2;
                  }
                  else {
                    if (iVar7 != 2) goto LAB_005e200a;
                    UVar28 = 0x1f49;
                    *piVar19 = 3;
                  }
                }
                else {
                  switch(iVar7) {
                  case 0:
                    UVar28 = 0x1f47;
                    *piVar19 = iVar7 + 1;
                    break;
                  case 1:
                    UVar28 = 0x1f48;
                    *piVar19 = iVar7 + 1;
                    break;
                  case 2:
                    UVar28 = 0x1f49;
                    *piVar19 = iVar7 + 1;
                    break;
                  case 3:
                  default:
                    UVar28 = 0x1f52;
                    *piVar19 = iVar7 + 1;
                  }
                }
                piVar19[1] = (uint)((char)((uint)unaff_EDI >> 0x18) == DAT_00807340);
                pHVar29 = DAT_00807618;
                piVar19[3] = piVar20[-4];
                puVar10 = (uint *)FUN_006b0140(UVar28,pHVar29);
                iVar13 = FUN_00711110(*(void **)&this_03[1].field_0x20,puVar10);
                iVar30 = 1;
                piVar19[5] = iVar13 + 0x1b;
                iVar13 = *(int *)&this_03->field_0x5d;
                piVar19[4] = *piVar20;
                piVar19[6] = 0x14;
                local_e8 = piVar19[5];
                puVar31 = (undefined4 *)(iVar13 + 0x28);
                uVar26 = FUN_006b4fe0(iVar13);
                iVar13 = FUN_006b50c0(local_e8,0x14,
                                      (uint)*(ushort *)(*(int *)&this_03->field_0x5d + 0xe),uVar26,
                                      puVar31,iVar30);
                piVar15[-1] = iVar13;
                piVar20 = piVar20 + 1;
                *piVar15 = (uint)(*(char *)(iVar30 + 10) != '\0') * 0x100 + 0x91 + (int)this_03;
                piVar19 = piVar19 + 0x1c;
                piVar15[1] = *local_88;
                bVar6 = (char)((uint)unaff_EDI >> 0x18) + 1;
                iVar7 = iVar7 + 1;
                unaff_EDI = (undefined4 *)CONCAT13(bVar6,(int3)unaff_EDI);
                piVar15 = piVar15 + 3;
              } while (bVar6 < (byte)local_90);
            }
            local_234[0] = 1;
            local_1ec = local_e68;
            local_234[1] = 1;
            local_224 = *(undefined4 *)&this_03->field_0x8;
            local_220 = 2;
            local_200 = 2;
            local_1e8 = (_DAT_00807340 & 0xff) + 1;
            local_21c = 0x6205;
            local_1fc = 0x6217;
            local_204 = local_224;
            (**(code **)(**(int **)&this_03->field_0xc + 8))();
            puVar10 = (uint *)(local_e68 + 3);
            puVar12 = (uint *)&this_03[6].field_0x2f;
            iVar7 = 4;
            do {
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,*puVar12,0xffffffff,*puVar10,puVar10[1]);
              uVar26 = puVar10[3];
              in_stack_ffffffdc = (uint *)0x5e21c3;
              FUN_006b2800((int)DAT_008075a8,*puVar12,puVar10[2],uVar26);
              FUN_006b3020((int)DAT_008075a8,*puVar12,*(uint *)(uVar26 + 5));
              Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,*puVar12);
              puVar10 = puVar10 + 0x1c;
              puVar12 = puVar12 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        break;
      case 3:
        if (this_03[1].field_0x1 != '\x01') {
          if (*(uint *)&this_03[6].field_0x3f != 0) {
            FUN_006e56b0(*(void **)&this_03->field_0xc,*(uint *)&this_03[6].field_0x3f);
            uVar26 = *(uint *)&this_03[10].field_0x42;
            *(undefined4 *)&this_03[6].field_0x3f = 0;
            FUN_006b3af0((int *)DAT_008075a8,uVar26);
            if (*(uint *)&this_03[6].field_0x47 != 0xffffffff) {
              FUN_006b3af0(*(int **)&this_03[7].field_0x1e,*(uint *)&this_03[6].field_0x47);
            }
            uVar26 = *(uint *)((int)&this_03[7].field_0069 + 2);
            if (uVar26 != 0xffffffff) {
              FUN_006b3af0(*(int **)&this_03[8].field_0x42,uVar26);
            }
            if (*(uint *)&this_03[9].field_0x22 != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)&this_03[9].field_0065 + 1),
                           *(uint *)&this_03[9].field_0x22);
            }
          }
          FUN_006ab060((undefined4 *)&this_03[0xf].field_0x5c);
          if (puVar16[0xd] == '\x01') {
            puVar31 = local_b34;
            for (iVar7 = 0x21e; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar31 = 0;
              puVar31 = puVar31 + 1;
            }
            if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
              FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
            }
            puVar10 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
            *(uint **)(DAT_0081176c + 0x548) = puVar10;
            iVar7 = *(int *)(DAT_0080c4cb + 8);
            if (iVar7 != 0) {
              iVar13 = 0;
              if (0 < iVar7) {
                if (iVar7 < 1) {
                  pcVar11 = (char *)0x0;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar11 = *(char **)(*(int *)(DAT_0080c4cb + 0x14) + iVar13 * 4);
LAB_005e22f4:
                  thunk_FUN_005411a0(*(int *)(DAT_0081176c + 0x548),pcVar11,s______s_007cdb20);
                  iVar13 = iVar13 + 1;
                } while (iVar13 < *(int *)(DAT_0080c4cb + 8));
              }
              ccFntTy::FormIndentSarr
                        (*(ccFntTy **)&this_03[1].field_0x20,*(int *)(DAT_0081176c + 0x548),
                         (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                         (*(int *)(puVar16 + 0x16) - *(int *)((int)&this_03[6].field_0065 + 2)) +
                         -0x2d,0,0xffffffff,(char *)0x0,1);
              if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
                FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
              }
              puVar10 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
              *(uint **)(DAT_0081176c + 0x548) = puVar10;
              local_ec = CONCAT31(local_ec._1_3_,
                                  (*(char *)((int)&this_03[0xf].field_0061 + 3) != '\x01') + -1) &
                         0xffffff02;
              FUN_006b0140(0x2347,DAT_00807618);
              wsprintfA((LPSTR)local_c38,s___1d__s__007cdb14);
              Library::DKW::TBL::FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),(char *)local_c38);
              wsprintfA((LPSTR)local_c38,s___1d__s_007cdb08);
              Library::DKW::TBL::FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),&DAT_007c3b5c);
              FUN_006b0140(0x2346,DAT_00807618);
              puVar10 = local_c38;
              wsprintfA((LPSTR)puVar10,s___1d__s__007cdb14);
              Library::DKW::TBL::FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),&DAT_007c3b5c);
              if (puVar10 != (uint *)0x0) {
                if (puVar10[2] != 0) {
                  ccFntTy::SepColorStrInSarr(*(ccFntTy **)&this_03[1].field_0x20,puVar10,puVar10);
                }
                iVar7 = 0;
                if (0 < (int)puVar10[2]) {
                  if ((int)puVar10[2] < 1) {
                    pcVar11 = (char *)0x0;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar11 = *(char **)(puVar10[5] + iVar7 * 4);
LAB_005e24c5:
                    Library::DKW::TBL::FUN_006b5aa0(*(int *)(DAT_0081176c + 0x548),pcVar11);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < (int)puVar10[2]);
                }
                FUN_006b5570((byte *)puVar10);
              }
              local_f0 = *(int *)(puVar16 + 0x16);
              iVar7 = *(int *)(puVar16 + 0x1a);
              iVar13 = 1;
              puVar31 = (undefined4 *)(*(int *)&this_03->field_0x5d + 0x28);
              uVar26 = FUN_006b4fe0(*(int *)&this_03->field_0x5d);
              uVar9 = FUN_006b50c0(local_f0,iVar7,
                                   (uint)*(ushort *)(*(int *)&this_03->field_0x5d + 0xe),uVar26,
                                   puVar31,iVar13);
              *(undefined4 *)&this_03[0xf].field_0x5c = uVar9;
              *(uint *)&this_03[0xf].field_0x60 =
                   (uint)(puVar16[10] != '\0') * 0x100 + 0x91 + (int)this_03;
              *(undefined4 *)((int)&this_03[0xf].field_0061 + 3) = *(undefined4 *)(puVar16 + 9);
              local_b34[0] = 0;
              local_b34[1] = 2;
              local_b14 = *(int *)(puVar16 + 0xe) + 0xf;
              local_b34[2] = 1;
              local_b10 = *(int *)(puVar16 + 0x12) + 0xf;
              iVar7 = *(int *)&this_03[1].field_0x20;
              local_b34[3] = *(undefined4 *)(*(int *)(DAT_0081176c + 0x548) + 8);
              local_b24 = (*(int *)(puVar16 + 0x16) - *(int *)((int)&this_03[6].field_0065 + 2)) +
                          -0x2d;
              if (*(int *)(iVar7 + 0xa0) != 0) {
                iVar13 = iVar7;
                FUN_00710790(iVar7);
              }
              local_b20 = *(int *)(iVar7 + 0x8a);
              local_b1c = 1;
              local_af4 = 0x6332;
              local_a84 = 4;
              local_afc = *(undefined4 *)&this_03->field_0x8;
              local_a80 = 0;
              local_a78[0] = 0;
              local_b18 = (*(int *)(iVar13 + 0x1a) + -0x1e) / *(int *)(iVar7 + 0x8a);
              local_af8 = 2;
              local_a7c = 2;
              local_a78[1] = 2;
              local_a78[2] = local_b24 + 0xf + local_b14;
              *(int *)&this_03[8].field_0x16 = local_a78[2];
              local_a18 = local_afc;
              local_a78[3] = (*(int *)(iVar13 + 0x12) - *(int *)&this_03[8].field_0x22) + -0x10 +
                             *(int *)(iVar13 + 0x1a);
              *(int *)&this_03[8].field_0x1a = local_a78[3];
              local_a68 = *(undefined4 *)&this_03[8].field_0x1e;
              local_a64 = *(int *)&this_03[8].field_0x22;
              local_968 = 500;
              local_964 = 0x32;
              local_a14 = 2;
              local_a10 = 0x6334;
              local_8fc = 2;
              piVar19 = local_a78;
              piVar15 = local_8f8;
              for (iVar7 = 0x5f; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar15 = *piVar19;
                piVar19 = piVar19 + 1;
                piVar15 = piVar15 + 1;
              }
              local_764 = *(int *)&this_03[9].field_0x42;
              local_8f8[2] = local_b24 + 0xf + local_b14;
              local_8e4 = *(int *)((int)&this_03[6].field_0069 + 2);
              *(int *)&this_03[6].field_0x5f = local_8f8[2];
              local_8f8[3] = *(int *)(iVar13 + 0x12) + 0xf;
              local_890 = 0x6333;
              *(int *)((int)&this_03[6].field_0061 + 2) = local_8f8[3];
              local_8e8 = *(int *)((int)&this_03[6].field_0065 + 2);
              local_77c = 3;
              local_778 = 1;
              local_770 = 0;
              local_76c = (local_8e8 - local_764) / 2 + local_b24 + 0xf + local_b14;
              *(int *)&this_03[9].field_0x3a = local_76c;
              local_768 = *(int *)(iVar13 + 0x12) + 0x1e + local_8e4;
              *(int *)&this_03[9].field_0x3e = local_768;
              local_728 = *(undefined4 *)&this_03->field_0x8;
              local_760 = ((*(int *)(iVar13 + 0x1a) - local_8e4) - *(int *)&this_03[8].field_0x22) +
                          -0x3c;
              local_75c = 0xe;
              local_724 = 2;
              local_720 = 0x6335;
              (**(code **)(**(int **)&this_03->field_0xc + 8))();
              uVar9 = *(undefined4 *)&this_03[6].field_0x3f;
              *(undefined4 *)&this_03->field_0x2d = 0x20;
              *(undefined4 *)&this_03->field_0x31 = 1;
              FUN_006e6080(this_03,2,uVar9,(undefined4 *)&this_03->field_0x1d);
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,*(uint *)&this_03[10].field_0x42,0xffffffff,
                         *(uint *)(iVar13 + 0xe),*(uint *)(iVar13 + 0x12));
              in_stack_ffffffdc = (uint *)0x5e2823;
              FUN_006b2800((int)DAT_008075a8,*(uint *)&this_03[10].field_0x42,
                           *(uint *)(iVar13 + 0x16),*(uint *)(iVar13 + 0x1a));
              FUN_006b3020((int)DAT_008075a8,*(uint *)&this_03[10].field_0x42,*(uint *)(iVar13 + 5))
              ;
              uVar26 = *(uint *)&this_03[10].field_0x42;
              Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,uVar26);
              if (*(int *)(iVar13 + 5) < 1) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(int *)(iVar13 + 5) - 1;
              }
              if (*(uint *)&this_03[6].field_0x47 != 0xffffffff) {
                uVar26 = uVar14;
                FUN_006b3020(*(int *)&this_03[7].field_0x1e,*(uint *)&this_03[6].field_0x47,uVar14);
              }
              *(uint *)&this_03[7].field_0x33 = uVar14;
              if (*(int *)(uVar26 + 5) < 1) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(int *)(uVar26 + 5) - 1;
              }
              uVar3 = *(uint *)((int)&this_03[7].field_0069 + 2);
              if (uVar3 != 0xffffffff) {
                FUN_006b3020(*(int *)&this_03[8].field_0x42,uVar3,uVar14);
              }
              *(uint *)&this_03[8].field_0x57 = uVar14;
              if (*(int *)(uVar26 + 5) < 1) {
                uVar26 = 0;
              }
              else {
                uVar26 = *(int *)(uVar26 + 5) - 1;
              }
              if (*(uint *)&this_03[9].field_0x22 != 0xffffffff) {
                FUN_006b3020(*(int *)((int)&this_03[9].field_0065 + 1),
                             *(uint *)&this_03[9].field_0x22,uVar26);
              }
              *(uint *)&this_03[10].field_0xe = uVar26;
              *(uint *)&this_03[9].field_0x26 =
                   (uint)(*(char *)((int)&this_03[0xf].field_0065 + 2) == '\x01');
              if (*(uint *)&this_03[6].field_0x47 != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)&this_03[7].field_0x1e;
                Library::DKW::DDX::FUN_006b34d0
                          (in_stack_ffffffdc,*(uint *)&this_03[6].field_0x47,0xfffffffe,
                           *(uint *)&this_03[6].field_0x5f,
                           *(uint *)((int)&this_03[6].field_0061 + 2));
              }
              uVar26 = *(uint *)((int)&this_03[7].field_0069 + 2);
              if (uVar26 != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)&this_03[8].field_0x42;
                Library::DKW::DDX::FUN_006b34d0
                          (in_stack_ffffffdc,uVar26,0xfffffffe,*(uint *)&this_03[8].field_0x16,
                           *(uint *)&this_03[8].field_0x1a);
              }
              if (*(uint *)&this_03[9].field_0x22 != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)((int)&this_03[9].field_0065 + 1);
                Library::DKW::DDX::FUN_006b34d0
                          (in_stack_ffffffdc,*(uint *)&this_03[9].field_0x22,0xfffffffe,
                           *(uint *)&this_03[9].field_0x3a,*(uint *)&this_03[9].field_0x3e);
              }
              if (*(uint *)&this_03[9].field_0x22 != 0xffffffff) {
                in_stack_ffffffdc = *(uint **)((int)&this_03[9].field_0065 + 1);
                Library::DKW::DDX::FUN_006b3730
                          (in_stack_ffffffdc,*(uint *)&this_03[9].field_0x22,
                           *(uint *)&this_03[9].field_0x26,*(uint *)&this_03[9].field_0x3a,
                           *(uint *)&this_03[9].field_0x3e);
              }
            }
          }
        }
        break;
      case 5:
        cVar2 = puVar16[0xe];
        if (cVar2 == '\0') {
          iVar7 = *(int *)&this_03[0xe].field_0x59;
        }
        else {
          iVar7 = *(int *)&this_03[0xe].field_0x51;
        }
        uVar26 = *(uint *)(puVar16 + 0xf);
        if (uVar26 < *(uint *)(iVar7 + 0xc)) {
          if (cVar2 == '\0') {
            puVar10 = (uint *)(*(int *)(*(int *)&this_03[0xe].field_0x59 + 8) * uVar26 +
                              *(int *)(*(int *)&this_03[0xe].field_0x59 + 0x1c));
          }
          else {
            puVar10 = (uint *)(*(int *)(*(int *)&this_03[0xe].field_0x51 + 8) * uVar26 +
                              *(int *)(*(int *)&this_03[0xe].field_0x51 + 0x1c));
          }
        }
        else {
          puVar10 = (uint *)0x0;
        }
        if (puVar16[0xd] == '\x01') {
          if (((puVar10 == (uint *)0x0) || ((int)*puVar10 < 0)) ||
             (puVar10[8] != *(uint *)(puVar16 + 0x14))) {
            TTaskItemClose(this_03,puVar10);
            if (*(int *)(puVar16 + 0x14) < *(int *)(DAT_0080c4c7 + 8)) {
              pcVar11 = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + *(int *)(puVar16 + 0x14) * 4);
            }
            else {
              pcVar11 = (char *)0x0;
            }
            if (pcVar11 != (char *)0x0) {
              puVar10 = local_13c;
              for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              *(undefined2 *)puVar10 = 0;
              if (puVar16[0xe] == '\0') {
                local_7c = local_7c & 0xffffff00;
                local_88 = (int *)((-(uint)(puVar16[9] != '\x01') & 0xfffffffe) + 2);
                do {
                  local_fc = *(int *)(puVar16 + 0x22);
                  iVar7 = *(int *)(puVar16 + 0x26);
                  iVar13 = 1;
                  puVar31 = (undefined4 *)(*(int *)&this_03->field_0x5d + 0x28);
                  uVar26 = FUN_006b4fe0(*(int *)&this_03->field_0x5d);
                  uVar14 = FUN_006b50c0(local_fc,iVar7,
                                        (uint)*(ushort *)(*(int *)&this_03->field_0x5d + 0xe),uVar26
                                        ,puVar31,iVar13);
                  local_13c[(local_7c & 0xff) + 1] = uVar14;
                  uVar26 = *(uint *)(uVar14 + 0x14);
                  if (uVar26 == 0) {
                    uVar26 = ((uint)*(ushort *)(uVar14 + 0xe) * *(int *)(uVar14 + 4) + 0x1f >> 3 &
                             0x1ffffffc) * *(int *)(uVar14 + 8);
                  }
                  piVar19 = (int *)0x5e2d28;
                  puVar31 = (undefined4 *)FUN_006b4fa0(uVar14);
                  for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                    *puVar31 = 0xffffffff;
                    puVar31 = puVar31 + 1;
                  }
                  for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                    *(undefined1 *)puVar31 = 0xff;
                    puVar31 = (undefined4 *)((int)puVar31 + 1);
                  }
                  piVar15 = (int *)(uint)(byte)puVar16[0x19];
                  PrepareTSurf(this_03,*piVar19,puVar16[0x19],puVar16[0xb]);
                  if (puVar16[0x19] != '\0') {
                    local_110 = (uint)(puVar16[10] == '\x01') * 0x100 + 0x91 + (int)this_03;
                  }
                  ccFntTy::SetSurf(*(ccFntTy **)&this_03[1].field_0x1c,*piVar15,0,0,0,0,0);
                  puVar10 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
                  Library::DKW::TBL::FUN_006b5aa0((int)puVar10,pcVar11);
                  local_80 = ccFntTy::FormIndentSarr
                                       (*(ccFntTy **)&this_03[1].field_0x1c,(int)puVar10,
                                        (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                                        *(int *)(puVar16 + 0x22) + *(int *)(puVar16 + 0x2a) * -2,0,
                                        0xffffffff,(char *)0x0,1);
                  FUN_006b5570((byte *)puVar10);
                  puVar10 = local_80;
                  if (local_80 != (uint *)0x0) {
                    piVar19 = local_88;
                    if ((char)local_7c != '\0') {
                      if ((char)local_7c == '\x01') {
                        piVar19 = (int *)((int)local_88 + 1);
                      }
                      else {
                        piVar19 = (int *)0x4;
                      }
                    }
                    ccFntTy::WrSarr(*(ccFntTy **)&this_03[1].field_0x1c,(int)local_80,0,-1,
                                    *(int *)(puVar16 + 0x2a),*(int *)(puVar16 + 0x2e),piVar19);
                    FUN_006b5570((byte *)puVar10);
                  }
                  bVar6 = (char)local_7c + 1;
                  local_7c = CONCAT31(local_7c._1_3_,bVar6);
                } while (bVar6 < 3);
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar16 + 5),0x403db4,
                             *(uint *)(puVar16 + 0x22),*(uint *)(puVar16 + 0x26),
                             *(uint *)&this_03[0xe].field_0x59);
                uVar26 = *(uint *)(puVar16 + 0xf);
                puVar10 = *(uint **)&this_03[0xe].field_0x59;
              }
              else {
                local_106 = *(undefined4 *)(puVar16 + 9);
                iVar13 = 1;
                local_107 = puVar16[0x19];
                local_10c = puVar16[0x18];
                local_f8 = *(int *)(puVar16 + 0x22);
                iVar7 = *(int *)(puVar16 + 0x26);
                puVar31 = (undefined4 *)(*(int *)&this_03->field_0x5d + 0x28);
                local_f4 = (-(uint)(puVar16[9] != '\x01') & 0xfffffffe) + 2;
                uVar26 = FUN_006b4fe0(*(int *)&this_03->field_0x5d);
                local_13c[1] = FUN_006b50c0(local_f8,iVar7,
                                            (uint)*(ushort *)(*(int *)&this_03->field_0x5d + 0xe),
                                            uVar26,puVar31,iVar13);
                uVar14 = 0x5e2b09;
                puVar31 = (undefined4 *)FUN_006b4fa0(local_13c[1]);
                for (uVar26 = uVar14 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
                  *puVar31 = 0xffffffff;
                  puVar31 = puVar31 + 1;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(undefined1 *)puVar31 = 0xff;
                  puVar31 = (undefined4 *)((int)puVar31 + 1);
                }
                if (puVar16[0x19] != '\0') {
                  local_110 = (uint)(local_106._1_1_ == '\x01') * 0x100 + 0x91 + (int)this_03;
                }
                ccFntTy::SetSurf(*(ccFntTy **)&this_03[1].field_0x1c,local_13c[1],0,0,0,0,0);
                puVar10 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
                Library::DKW::TBL::FUN_006b5aa0((int)puVar10,pcVar11);
                puVar12 = ccFntTy::FormIndentSarr
                                    (*(ccFntTy **)&this_03[1].field_0x1c,(int)puVar10,
                                     (uint *)s________________007c21d8,(uint *)&DAT_007c21ec,
                                     *(int *)(puVar16 + 0x22) + *(int *)(puVar16 + 0x2a) * -2,0,
                                     0xffffffff,(char *)0x0,1);
                FUN_006b5570((byte *)puVar10);
                if (puVar12 != (uint *)0x0) {
                  local_102 = (uint *)ccFntTy::_SarrToTxt(*(ccFntTy **)&this_03[1].field_0x1c,
                                                          (char *)0x0,(int)puVar12);
                  if (local_102 != (uint *)0x0) {
                    local_10b = (cTypingTy *)Library::MSVCRT::FUN_0072e530(0xb4);
                    if (local_10b == (cTypingTy *)0x0) {
                      local_10b = (cTypingTy *)0x0;
                    }
                    else {
                      *(undefined4 *)(local_10b + 0x58) = 0;
                      *(undefined4 *)(local_10b + 0x88) = 0;
                    }
                    local_128 = *(undefined4 *)(puVar16 + 0x2a);
                    local_124 = *(undefined4 *)(puVar16 + 0x2e);
                    uStackY_48 = 0x2c51;
                    local_46 = 0x5e;
                    local_120 = cTypingTy::TypingInit
                                          (local_10b,local_102,*(void **)&this_03[1].field_0x1c,0,0,
                                           0,*(int *)(puVar16 + 0x22) +
                                             *(int *)(puVar16 + 0x2a) * -2,
                                           *(int *)(puVar16 + 0x26) + *(int *)(puVar16 + 0x2e) * -2,
                                           0,0,local_f4,local_f4 + 1,4,0xff);
                    local_120 = local_120 + 1;
                  }
                  FUN_006b5570((byte *)puVar12);
                }
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar16 + 5),0x4041b0,
                             *(uint *)(puVar16 + 0x22),*(uint *)(puVar16 + 0x26),
                             *(uint *)&this_03[0xe].field_0x51);
                uVar26 = *(uint *)(puVar16 + 0xf);
                puVar10 = *(uint **)&this_03[0xe].field_0x51;
              }
              Library::DKW::TBL::FUN_006ae140(puVar10,uVar26,local_13c);
              in_stack_ffffffdc = DAT_008075a8;
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,local_13c[0],0,*(uint *)(puVar16 + 0x1a),
                         *(uint *)(puVar16 + 0x1e));
            }
          }
          else {
            if (cVar2 == '\0') {
              uVar26 = puVar10[4];
            }
            else {
              uVar26 = 0;
            }
            in_stack_ffffffdc = DAT_008075a8;
            Library::DKW::DDX::FUN_006b3730
                      (DAT_008075a8,*puVar10,uVar26,*(uint *)(puVar16 + 0x1a),
                       *(uint *)(puVar16 + 0x1e));
          }
        }
        else if ((puVar10 != (uint *)0x0) && (-1 < (int)*puVar10)) {
          if (*(char *)(this_03 + 1) == '\x05') {
            TTaskItemClose(this_03,puVar10);
          }
          else {
            if (cVar2 == '\0') {
              uVar26 = 1;
            }
            else {
              uVar26 = puVar10[7] - 2;
            }
            puVar10[4] = uVar26;
            puVar10[10] = 2;
            puVar10[9] = this_03->field_0069;
            FUN_006b35d0((int *)DAT_008075a8,*puVar10);
          }
        }
        break;
      case 6:
        if (*(char *)(this_03 + 1) != '\x05') {
          puVar10 = (uint *)FUN_00719d00(*(undefined4 *)&this_03[1].field_0x3,puVar16 + 0xd,0,0);
          if (puVar10 == (uint *)0x0) {
            in_stack_ffffffdc = (uint *)0x5e2f3a;
            puVar10 = (uint *)FUN_00719d00(DAT_00806798,puVar16 + 0xd,0,0);
            if (puVar10 == (uint *)0x0) break;
          }
          in_stack_ffffffdc = (uint *)0x5e2f24;
          thunk_FUN_0056a130(&g_sound,0,'\x03',-1,puVar10);
        }
        break;
      case 7:
        iVar7 = *(int *)&this_03[0xe].field_0x55;
        if (*(uint *)(puVar16 + 0xe) < *(uint *)(iVar7 + 0xc)) {
          pSVar22 = (SpriteClassTy *)
                    (*(int *)(iVar7 + 8) * *(uint *)(puVar16 + 0xe) + *(int *)(iVar7 + 0x1c));
        }
        else {
          pSVar22 = (SpriteClassTy *)0x0;
        }
        if (puVar16[0xd] == '\x01') {
          SpriteClassTy::SpriteClassTy(&local_1dc,unaff_EDI);
          puVar31 = (undefined4 *)0x0;
          local_142 = (int *)0x0;
          local_94 = 1;
          local_2bc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2bc;
          iVar7 = Library::MSVCRT::__setjmp3(local_2bc.jumpBuffer,0,unaff_EDI,pSVar22);
          if (iVar7 == 0) {
            puVar32 = puVar31;
            if (pSVar22 != (SpriteClassTy *)0x0) {
              pbVar18 = &pSVar22->field_0065;
              if (pbVar18 != (undefined1 *)0x0) {
                pbVar17 = (byte *)((int)puVar31 + 0x12);
                do {
                  bVar6 = *pbVar18;
                  bVar27 = bVar6 < *pbVar17;
                  if (bVar6 != *pbVar17) {
LAB_005e2ffb:
                    iVar7 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                    goto LAB_005e3000;
                  }
                  if (bVar6 == 0) break;
                  bVar6 = pbVar18[1];
                  bVar27 = bVar6 < pbVar17[1];
                  if (bVar6 != pbVar17[1]) goto LAB_005e2ffb;
                  pbVar18 = pbVar18 + 2;
                  pbVar17 = pbVar17 + 2;
                } while (bVar6 != 0);
                iVar7 = 0;
LAB_005e3000:
                if (iVar7 != 0) {
                  puVar32 = (undefined4 *)0x5e300e;
                  pSVar33 = pSVar22;
                  SpriteClassTy::CloseSprite(pSVar22);
                  pSVar5 = pSVar22 + 1;
                  puVar21 = (undefined4 *)((int)&pSVar22[1].field_0008 + 1);
                  pSVar22 = pSVar33;
                  if (*(int *)((int)&pSVar5->field_0008 + 1) != 0) {
                    FUN_006ab060(puVar21);
                    puVar32 = puVar21;
                    pSVar22 = pSVar33;
                  }
                  goto LAB_005e3030;
                }
              }
              local_94 = 0;
            }
LAB_005e3030:
            this_03 = local_8c;
            if (local_94 == 0) {
              if (pSVar22 == (SpriteClassTy *)0x0) {
                puVar21 = (undefined4 *)0x0;
              }
              else {
                puVar21 = &pSVar22->field_0004;
              }
              puVar25 = &local_1dc.field_0004;
              puVar31 = puVar32;
              for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar25 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar25 = puVar25 + 1;
              }
              local_1dc.field_0048 = (uint *)pSVar22->field_0048;
              local_1dc.field_004C = pSVar22->field_004C;
              local_1dc.field_004D = pSVar22->field_004D;
              local_1dc.field_0051 = pSVar22->field_0051;
              local_1dc.field_0055 = pSVar22->field_0055;
              local_1dc.field_0059 = pSVar22->field_0059;
              local_1dc.field_005D = pSVar22->field_005D;
              local_1dc.field_0061 = pSVar22->field_0061;
              puVar16 = &local_1dc.field_0065;
              iVar7 = 0x20;
              do {
                *puVar16 = puVar16[(int)pSVar22 - (int)&local_1dc];
                puVar16 = puVar16 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              local_1dc.field_0085 = pSVar22->field_0085;
              local_1dc.field_0089 = pSVar22->field_0089;
              local_1dc.field_008D = pSVar22->field_008D;
            }
            else {
              SpriteClassTy::InitSprite
                        (&local_1dc,(int *)DAT_008075a8,*(uint *)((int)puVar31 + 5),'\x1e',
                         (undefined4 *)0x0,0,0);
              in_stack_ffffffdc = (uint *)0x1e;
              iVar7 = SpriteClassTy::SetImages
                                (&local_1dc,*(undefined4 *)&this_03[1].field_0x3,CASE_1E,0,
                                 (char *)((int)puVar31 + 0x12),0xffffffff,0);
              if (iVar7 != 0) {
                in_stack_ffffffdc = (uint *)0x1e;
                SpriteClassTy::SetImages
                          (&local_1dc,DAT_00806798,CASE_1E,0,(char *)((int)puVar31 + 0x12),
                           0xffffffff,1);
              }
            }
            local_1dc.field_001C = *(uint *)((int)puVar31 + 0x32);
            local_1dc.field_0020 = *(uint *)((int)puVar31 + 0x36);
            cVar2 = *(char *)((int)puVar31 + 0x4f);
            if (cVar2 == '\0') {
              local_14b = '\0';
              local_1dc.field_0008 = *(uint *)((int)puVar31 + 0x4a);
            }
            else if (cVar2 == '\x01') {
              local_1dc.field_0044 = this_03->field_0069;
              local_14b = (*(char *)((int)puVar31 + 0x4e) != '\0') + '\x01';
              local_1dc.field_0008 = *(uint *)((int)puVar31 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)puVar31 + 0x46);
            }
            else if (cVar2 == '\x02') {
              local_1dc.field_0044 = this_03->field_0069;
              local_14b = (*(char *)((int)puVar31 + 0x4e) != '\0') + '\x03';
              local_1dc.field_0008 = *(uint *)((int)puVar31 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)puVar31 + 0x46);
              local_14a = 0;
              local_146 = *(int *)((int)puVar31 + 0x42);
              in_stack_ffffffdc = *(uint **)((int)puVar31 + 0x32);
              local_142 = FUN_006c81c0((int)in_stack_ffffffdc,*(int *)((int)puVar31 + 0x36),
                                       *(int *)((int)puVar31 + 0x3a),*(int *)((int)puVar31 + 0x3e),
                                       local_146);
              if (local_142 == (int *)0x0) {
                local_14b = (*(char *)((int)puVar31 + 0x4e) != '\0') + '\x01';
              }
            }
            if (local_1dc.field_0004 != 0xffffffff) {
              in_stack_ffffffdc = local_1dc.field_0048;
              Library::DKW::DDX::FUN_006b3730
                        (local_1dc.field_0048,local_1dc.field_0004,local_1dc.field_0008,
                         local_1dc.field_001C,local_1dc.field_0020);
            }
            Library::DKW::TBL::FUN_006ae140
                      (*(uint **)&this_03[0xe].field_0x55,*(uint *)((int)puVar31 + 0xe),
                       &local_1dc.vtable);
            g_currentExceptionFrame = local_2bc.previous;
          }
          else {
            g_currentExceptionFrame = local_2bc.previous;
            SpriteClassTy::CloseSprite(&local_1dc);
            this_03 = local_8c;
            if (local_142 != (int *)0x0) {
              FUN_006ab060(&local_142);
              this_03 = local_8c;
            }
          }
        }
        else if (pSVar22 != (SpriteClassTy *)0x0) {
          SpriteClassTy::CloseSprite(pSVar22);
          if (*(int *)((int)&pSVar22[1].field_0008 + 1) != 0) {
            FUN_006ab060((undefined4 *)((int)&pSVar22[1].field_0008 + 1));
          }
        }
        break;
      case 8:
        puVar31 = local_e4;
        for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar31 = 0;
          puVar31 = puVar31 + 1;
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
        Library::DKW::TBL::FUN_006b11d0(*(uint **)&this_03[1].field_0x7,uVar14 + 1,local_e4);
        local_d7 = 1;
        local_d6 = CONCAT31(0x2d,(undefined1)local_d6);
        uStackY_d2 = 0x22600;
        iStackY_ce._0_1_ = 0;
        Library::DKW::TBL::FUN_006b11d0
                  (*(uint **)&this_03[1].field_0x7,*(int *)&this_03[1].field_0xf + 1,local_e4);
        local_d7 = 0;
        local_d6 = CONCAT31(0x23,(undefined1)local_d6);
        uStackY_d2 = 0x1f400;
        iStackY_ce = (uint)iStackY_ce._1_3_ << 8;
        Library::DKW::TBL::FUN_006b11d0
                  (*(uint **)&this_03[1].field_0x7,*(int *)&this_03[1].field_0xf + 1,local_e4);
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
        Library::DKW::TBL::FUN_006b11d0
                  (*(uint **)&this_03[1].field_0x7,*(int *)&this_03[1].field_0xf + 1,local_e4);
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
        Library::DKW::TBL::FUN_006b11d0
                  (*(uint **)&this_03[1].field_0x7,*(int *)&this_03[1].field_0xf + 1,local_e4);
        break;
      case 9:
        puVar1 = &this_03->field_0x5d;
        if (*(int *)&this_03->field_0x5d != 0) {
          cVar2 = *(char *)((int)&this_03[1].field_0010 + 3);
          this_00 = DAT_00806780;
          if ((cVar2 != '\x01') && (this_00 = DAT_00806798, cVar2 != '\x02')) {
            this_00 = *(cMf32 **)&this_03[1].field_0x3;
          }
          cMf32::RecMemFree(this_00,(uint *)puVar1);
        }
        uVar9 = *(undefined4 *)&this_03[1].field_0x3;
        pbVar18 = puVar16 + 0xd;
        *(undefined1 *)((int)&this_03[1].field_0010 + 3) = 0;
        iVar7 = FUN_0070a9f0(uVar9,(char *)pbVar18,0,0);
        *(int *)puVar1 = iVar7;
        if (iVar7 == 0) {
          iVar7 = FUN_0070a9f0(DAT_00806798,(char *)pbVar18,0,0);
          *(int *)puVar1 = iVar7;
          if (iVar7 == 0) {
            iVar7 = 1;
            bVar6 = 0;
            pCVar8 = FUN_006f2c00(s_TASK_BKG_007cda64,1,(uint)DAT_0080874e);
            uVar9 = FUN_0070a9f0(DAT_00806780,pCVar8,bVar6,iVar7);
            *(undefined4 *)puVar1 = uVar9;
            *(undefined1 *)((int)&this_03[1].field_0010 + 3) = 1;
          }
          else {
            puVar31 = (undefined4 *)local_78;
            for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar31 = 0;
              puVar31 = puVar31 + 1;
            }
            local_6d = 1;
            local_6c = 1;
            local_6f = 1;
            local_78._1_4_ = *(undefined4 *)(puVar16 + 1);
            local_73 = 0x7ffffff0;
            local_78[0] = 7;
            local_6b = 1;
            pbVar17 = pbVar18;
            pbVar23 = PTR_s_DEFAULT_WS_ANIMATED_0079c224;
            do {
              bVar6 = *pbVar17;
              bVar27 = bVar6 < *pbVar23;
              if (bVar6 != *pbVar23) {
LAB_005e14be:
                iVar7 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005e14c3;
              }
              if (bVar6 == 0) break;
              bVar6 = pbVar17[1];
              bVar27 = bVar6 < pbVar23[1];
              if (bVar6 != pbVar23[1]) goto LAB_005e14be;
              pbVar17 = pbVar17 + 2;
              pbVar23 = pbVar23 + 2;
            } while (bVar6 != 0);
            iVar7 = 0;
LAB_005e14c3:
            pbVar17 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            pbVar23 = pbVar18;
            if (iVar7 == 0) {
              uVar26 = 0xffffffff;
              pcVar11 = &DAT_007cdc48;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf0;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              iVar7 = *(int *)&this_03[1].field_0xf;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0
                        (*(uint **)&this_03[1].field_0x7,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_WS_ANI2_007cdc38;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf1;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_WS_ANI3_007cdc28;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf2;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x40;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar26 = 0xffffffff;
              pcVar11 = &DAT_007cdc18;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = &DAT_007cdc08;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf4;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = &DAT_007cdbf8;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf5;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x2df;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              pbVar17 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
              pbVar23 = pbVar18;
            }
            do {
              bVar6 = *pbVar18;
              bVar27 = bVar6 < *pbVar17;
              if (bVar6 != *pbVar17) {
LAB_005e16bc:
                iVar7 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005e16c1;
              }
              if (bVar6 == 0) break;
              bVar6 = pbVar18[1];
              bVar27 = bVar6 < pbVar17[1];
              if (bVar6 != pbVar17[1]) goto LAB_005e16bc;
              pbVar18 = pbVar18 + 2;
              pbVar17 = pbVar17 + 2;
            } while (bVar6 != 0);
            iVar7 = 0;
LAB_005e16c1:
            pbVar18 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar7 == 0) {
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_BO_ANI1_007cdbe8;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf0;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              iVar7 = *(int *)&this_03[1].field_0xf;
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_BO_ANI2_007cdbd8;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf1;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_BO_ANI3_007cdbc8;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf2;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_BO_ANI4_007cdbb8;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0xdc;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = &DAT_007cdba8;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf4;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x1ce;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = &DAT_007cdb98;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf5;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x2a9;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              local_6a = 0xf6;
              pcVar11 = &DAT_007cdb88;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_BO_ANI8_007cdb78;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf7;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              pbVar18 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar6 = *pbVar23;
              bVar27 = bVar6 < *pbVar18;
              if (bVar6 != *pbVar18) {
LAB_005e1958:
                iVar7 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005e195d;
              }
              if (bVar6 == 0) break;
              bVar6 = pbVar23[1];
              bVar27 = bVar6 < pbVar18[1];
              if (bVar6 != pbVar18[1]) goto LAB_005e1958;
              pbVar23 = pbVar23 + 2;
              pbVar18 = pbVar18 + 2;
            } while (bVar6 != 0);
            iVar7 = 0;
LAB_005e195d:
            if (iVar7 == 0) {
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_SI_ANI1_007cdb68;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf0;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              iVar7 = *(int *)&this_03[1].field_0xf;
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x8e;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_SI_ANI2_007cdb58;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf1;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_SI_ANI3_007cdb48;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf2;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_SI_ANI4_007cdb38;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0xd7;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar11 = s_DEF_SI_ANI5_007cdb28;
              do {
                pcVar24 = pcVar11;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar24 = pcVar11 + 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar24;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf4;
              iVar7 = *(int *)&this_03[1].field_0xf;
              pcVar11 = pcVar24 + -uVar26;
              pcVar24 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar10 = *(uint **)&this_03[1].field_0x7;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar24 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x27c;
              Library::DKW::TBL::FUN_006b11d0(puVar10,iVar7 + 1,(undefined4 *)local_78);
            }
            *(undefined1 *)((int)&this_03[1].field_0010 + 3) = 2;
          }
        }
        iVar7 = *(int *)&this_03[1].field_0x7;
        if (*(uint *)&this_03[1].field_0xf < *(uint *)(iVar7 + 0xc)) {
          piVar19 = (int *)(*(int *)(iVar7 + 8) * *(uint *)&this_03[1].field_0xf +
                           *(int *)(iVar7 + 0x1c));
        }
        else {
          piVar19 = (int *)0x0;
        }
        FUN_006bc360(*(int *)&this_03->field_0x5d,local_1268,piVar19);
        in_stack_ffffffdc = (uint *)0x0;
        FUN_00718780((int)local_1268,0,0x100,0x1a,0x10,(undefined4 *)&this_03[1].field_0x24);
        FUN_00718780((int)local_1268,0,0x100,0x2e,0x10,(undefined4 *)&this_03[3].field_0x4a);
        this_01 = extraout_ECX_00;
        if (*(int *)&this_03[1].field_0xf != 0) {
          thunk_FUN_0055dbf0(DAT_0080759c,1,0);
          PaintMTask(this_03);
          in_stack_ffffffdc = DAT_008075a8;
          thunk_FUN_0055ddf0(DAT_0080759c,(int *)DAT_008075a8,*(int *)&this_03->field_0x5d,10,2);
          this_01 = extraout_ECX_01;
        }
        if (*(uint **)&this_03[1].field_0x1c != (uint *)0x0) {
          ccFntTy::operator(this_01,*(uint **)&this_03[1].field_0x1c);
        }
        iVar7 = thunk_FUN_005defe0(*(int *)&this_03->field_0x5d,(undefined *)0x0,DAT_00807dd9);
        *(int *)&this_03[1].field_0x1c = iVar7;
        *(undefined4 *)(iVar7 + 0x58) = 1;
        *(undefined4 *)(iVar7 + 0x5c) = 0;
        if (*(uint **)&this_03[1].field_0x20 != (uint *)0x0) {
          ccFntTy::operator(this_02,*(uint **)&this_03[1].field_0x20);
        }
        uVar9 = thunk_FUN_005df290(*(int *)&this_03->field_0x5d,(undefined *)0x0,DAT_00807dd9);
        *(undefined4 *)&this_03[1].field_0x20 = uVar9;
        thunk_FUN_00568bc0(&g_sound,0);
        if ((DAT_00807300._1_1_ & 8) != 0) {
          puVar10 = (uint *)FUN_00719d00(*(undefined4 *)&this_03[1].field_0x3,
                                         (char *)((int)piVar19 + 0x2d),0,0);
          *(uint **)&this_03[1].field_0x18 = puVar10;
          if (puVar10 == (uint *)0x0) {
            puVar10 = (uint *)FUN_00719d00(DAT_00806798,(char *)((int)piVar19 + 0x2d),0,0);
            *(uint **)&this_03[1].field_0x18 = puVar10;
            if (puVar10 == (uint *)0x0) {
              in_stack_ffffffdc = (uint *)0x5e1cab;
              thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
              break;
            }
          }
          in_stack_ffffffdc = (uint *)0x5e1c94;
          thunk_FUN_0056a130(&g_sound,0,'\x02',0,puVar10);
        }
      }
      iVar7 = *(int *)&this_03[1].field_0xf + 1;
      *(int *)&this_03[1].field_0xf = iVar7;
      uVar26 = *(uint *)(*(int *)&this_03[1].field_0x7 + 0xc);
    } while (iVar7 < (int)uVar26);
  }
  if (*(int *)&this_03[1].field_0xf == *(int *)(*(int *)&this_03[1].field_0x7 + 0xc)) {
    if ((*(char *)(this_03 + 1) == '\x05') && (iVar7 = *(int *)&this_03[0xe].field_0x55, iVar7 != 0)
       ) {
      uVar26 = 0;
      if (*(int *)(iVar7 + 0xc) != 0) {
        if (*(int *)(iVar7 + 0xc) == 0) {
          pSVar22 = (SpriteClassTy *)0x0;
          goto LAB_005e34e0;
        }
        do {
          pSVar22 = (SpriteClassTy *)(*(int *)(iVar7 + 8) * uVar26 + *(int *)(iVar7 + 0x1c));
LAB_005e34e0:
          if ((pSVar22->field_0004 != -1) &&
             ((*(char *)&pSVar22[1].vtable == '\x01' || (*(char *)&pSVar22[1].vtable == '\x03')))) {
            SpriteClassTy::CloseSprite(pSVar22);
            if (*(int *)((int)&pSVar22[1].field_0008 + 1) != 0) {
              FUN_006ab060((undefined4 *)((int)&pSVar22[1].field_0008 + 1));
            }
          }
          iVar7 = *(int *)&this_03[0xe].field_0x55;
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(uint *)(iVar7 + 0xc));
      }
    }
    *(undefined1 *)(this_03 + 1) = 1;
  }
  g_currentExceptionFrame = local_278.previous;
  return;
}


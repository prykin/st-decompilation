
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PlayScript */

void __thiscall MTaskTy::PlayScript(MTaskTy *this)

{
  char cVar1;
  code *pcVar2;
  SpriteClassTy *pSVar3;
  byte bVar4;
  int iVar5;
  LPSTR text;
  undefined4 uVar6;
  ccFntTy *pcVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  MTaskTy *extraout_ECX;
  cMf32 *this_00;
  uint uVar12;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_01;
  int *piVar13;
  MTaskTy *this_02;
  undefined4 unaff_ESI;
  undefined1 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  SpriteClassTy *pSVar20;
  void *unaff_EDI;
  byte *pbVar21;
  char *pcVar22;
  undefined4 *puVar23;
  uint uVar24;
  bool bVar25;
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
  undefined1 *local_110;
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
  UINT uID;
  HINSTANCE pHVar26;
  int iVar27;
  ccFntTy *pcVar28;
  LPVOID *ppvVar29;
  LPVOID *ppvVar30;
  LPVOID *ppvVar31;
  SpriteClassTy *pSVar32;
  
  Library::MSVCRT::FUN_0072da40();
  local_278.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_278;
  local_8c = extraout_ECX;
  iVar5 = Library::MSVCRT::__setjmp3(local_278.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_278.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x45f,0,iVar5,
                                &DAT_007a4ccc);
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_task_obj_cpp_007cd994,0x45f);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar24 = *(uint *)(local_8c->field_0074 + 0xc);
  this_02 = local_8c;
  if ((int)local_8c->field_007C < (int)uVar24) {
    do {
      uVar12 = this_02->field_007C;
      if (uVar12 < uVar24) {
        puVar14 = (undefined1 *)
                  (*(int *)(this_02->field_0074 + 8) * uVar12 + *(int *)(this_02->field_0074 + 0x1c)
                  );
      }
      else {
        puVar14 = (undefined1 *)0x0;
      }
      if (((uint)(this_02->field_0069 - this_02->field_0061) < *(uint *)(puVar14 + 1)) &&
         (this_02->field_006D != '\x05')) break;
      switch(*puVar14) {
      case 1:
        if ((this_02->field_006E != '\x01') || ((puVar14[0xd] != '\0' && (puVar14[0xd] != '\x01'))))
        {
          switch(puVar14[0xd]) {
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
          uVar24 = (uint)in_stack_ffffffdc & 0xff;
          if ((&this_02->field_0291)[uVar24] != 0) {
            FUN_006b3af0((int *)DAT_008075a8,(&this_02->field_02A5)[uVar24]);
            StartSystemTy::sub_006E56B0(this_02->field_000C,(&this_02->field_0291)[uVar24]);
            (&this_02->field_0291)[uVar24] = 0;
          }
          FUN_006ab060((LPVOID *)(&this_02->field_0653 + uVar24 * 3));
          if (puVar14[0xe] == '\x01') {
            local_84 = *(uint *)(puVar14 + 0x1b);
            if ((int)local_84 < 0x28) {
              local_84 = 0x28;
            }
            iVar11 = 1;
            iVar5 = this_02->field_005D + 0x28;
            uVar12 = FUN_006b4fe0(this_02->field_005D);
            uVar6 = FUN_006b50c0(iVar5,local_84,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar12,
                                 (undefined4 *)iVar5,iVar11);
            (&this_02->field_0653)[uVar24 * 3] = uVar6;
            *(undefined1 **)(&this_02->field_0x657 + uVar24 * 0xc) =
                 &this_02->field_0x91 + (uint)(puVar14[10] == '\x01') * 0x100;
            *(undefined4 *)(&this_02->field_0x65b + uVar24 * 0xc) = *(undefined4 *)(puVar14 + 9);
            uVar6 = CreateBut(this_02,1,1,*(undefined4 *)(puVar14 + 0xf),
                              *(undefined4 *)(puVar14 + 0x13),iVar5,local_84,uVar24 + 0x6200,
                              uVar24 + 0x6212);
            (&this_02->field_0291)[uVar24] = uVar6;
            uVar12 = *(uint *)(puVar14 + 0xf);
            puVar8 = &this_02->field_02A5 + uVar24;
            Library::DKW::DDX::FUN_006b3640
                      ((int *)DAT_008075a8,(&this_02->field_02A5)[uVar24],0xffffffff,uVar12,
                       *(uint *)(puVar14 + 0x13));
            in_stack_ffffffdc = (uint *)0x5e1e40;
            FUN_006b2800((int)DAT_008075a8,*puVar8,uVar12,local_84);
            FUN_006b3020((int)DAT_008075a8,*puVar8,*(uint *)(puVar14 + 5));
            Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,*puVar8);
          }
        }
        break;
      case 2:
        if (this_02->field_006E != '\x01') {
          if (this_02->field_02B9 != 0) {
            puVar8 = &this_02->field_02BD;
            iVar5 = 4;
            do {
              FUN_006b3af0((int *)DAT_008075a8,*puVar8);
              puVar8 = puVar8 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            StartSystemTy::sub_006E56B0(this_02->field_000C,this_02->field_02B9);
            this_02->field_02B9 = 0;
          }
          ppvVar29 = (LPVOID *)&this_02->field_0x68f;
          iVar5 = 4;
          do {
            FUN_006ab060(ppvVar29);
            ppvVar29 = ppvVar29 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          if (puVar14[0xd] == '\x01') {
            puVar19 = local_234;
            for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
            }
            piVar17 = local_e68;
            for (iVar5 = 0x8c; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar17 = 0;
              piVar17 = piVar17 + 1;
            }
            bVar4 = 2;
            piVar17 = (int *)(puVar14 + 0x16);
            iVar5 = 2;
            do {
              if (-1 < *piVar17) {
                bVar4 = bVar4 + 1;
              }
              piVar17 = piVar17 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            local_90 = CONCAT31((int3)((uint)local_90 >> 8),bVar4);
            local_80 = (uint *)(uint)bVar4;
            if (local_80 == (uint *)0x2) {
              if ((DAT_00807340 == '\x01') || (DAT_00807340 == '\x03')) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((local_80 == (uint *)0x3) && (DAT_00807340 == '\x03')) {
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            unaff_EDI = (void *)((uint)unaff_EDI & 0xffffff);
            if (bVar4 != 0) {
              local_88 = (int *)(puVar14 + 9);
              iVar5 = 0;
              piVar17 = local_e68;
              piVar18 = (int *)(puVar14 + 0x1e);
              piVar13 = (int *)&this_02->field_0x693;
              do {
                uID = 0x1f52;
                if (local_80 == (uint *)0x2) {
                  if (iVar5 == 0) {
                    uID = 0x1f47;
                    *piVar17 = 1;
                  }
                  else if (iVar5 == 1) {
                    uID = 0x1f49;
                    *piVar17 = 3;
                  }
                }
                else if (local_80 == (uint *)0x3) {
                  if (iVar5 == 0) {
                    uID = 0x1f47;
LAB_005e200a:
                    *piVar17 = iVar5 + 1;
                  }
                  else if (iVar5 == 1) {
                    uID = 0x1f48;
                    *piVar17 = 2;
                  }
                  else {
                    if (iVar5 != 2) goto LAB_005e200a;
                    uID = 0x1f49;
                    *piVar17 = 3;
                  }
                }
                else {
                  switch(iVar5) {
                  case 0:
                    uID = 0x1f47;
                    *piVar17 = iVar5 + 1;
                    break;
                  case 1:
                    uID = 0x1f48;
                    *piVar17 = iVar5 + 1;
                    break;
                  case 2:
                    uID = 0x1f49;
                    *piVar17 = iVar5 + 1;
                    break;
                  case 3:
                  default:
                    uID = 0x1f52;
                    *piVar17 = iVar5 + 1;
                  }
                }
                piVar17[1] = (uint)((char)((uint)unaff_EDI >> 0x18) == DAT_00807340);
                pHVar26 = HINSTANCE_00807618;
                piVar17[3] = piVar18[-4];
                puVar8 = (uint *)FUN_006b0140(uID,pHVar26);
                iVar11 = FUN_00711110(this_02->field_008D,puVar8);
                iVar27 = 1;
                piVar17[5] = iVar11 + 0x1b;
                iVar11 = this_02->field_005D;
                piVar17[4] = *piVar18;
                piVar17[6] = 0x14;
                local_e8 = piVar17[5];
                puVar19 = (undefined4 *)(iVar11 + 0x28);
                uVar24 = FUN_006b4fe0(iVar11);
                iVar11 = FUN_006b50c0(local_e8,0x14,(uint)*(ushort *)(this_02->field_005D + 0xe),
                                      uVar24,puVar19,iVar27);
                piVar13[-1] = iVar11;
                piVar18 = piVar18 + 1;
                *piVar13 = (int)(&this_02->field_0x91 +
                                (uint)(*(char *)(iVar27 + 10) != '\0') * 0x100);
                piVar17 = piVar17 + 0x1c;
                piVar13[1] = *local_88;
                bVar4 = (char)((uint)unaff_EDI >> 0x18) + 1;
                iVar5 = iVar5 + 1;
                unaff_EDI = (void *)CONCAT13(bVar4,(int3)unaff_EDI);
                piVar13 = piVar13 + 3;
              } while (bVar4 < (byte)local_90);
            }
            local_234[0] = 1;
            local_1ec = local_e68;
            local_234[1] = 1;
            local_224 = this_02->field_0008;
            local_220 = 2;
            local_200 = 2;
            local_1e8 = (_DAT_00807340 & 0xff) + 1;
            local_21c = 0x6205;
            local_1fc = 0x6217;
            local_204 = local_224;
            (*this_02->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_02->field_000C,5,&this_02->field_02B9,(int *)0x0,
                       local_234,0);
            puVar8 = (uint *)(local_e68 + 3);
            puVar10 = &this_02->field_02BD;
            iVar5 = 4;
            do {
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,*puVar10,0xffffffff,*puVar8,puVar8[1]);
              uVar24 = puVar8[3];
              in_stack_ffffffdc = (uint *)0x5e21c3;
              FUN_006b2800((int)DAT_008075a8,*puVar10,puVar8[2],uVar24);
              FUN_006b3020((int)DAT_008075a8,*puVar10,*(uint *)(uVar24 + 5));
              Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,*puVar10);
              puVar8 = puVar8 + 0x1c;
              puVar10 = puVar10 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        break;
      case 3:
        if (this_02->field_006E != '\x01') {
          if (this_02->field_02CD != 0) {
            StartSystemTy::sub_006E56B0(this_02->field_000C,this_02->field_02CD);
            this_02->field_02CD = 0;
            FUN_006b3af0((int *)DAT_008075a8,this_02->field_0484);
            if (this_02->field_02D5 != 0xffffffff) {
              FUN_006b3af0((int *)this_02->field_0319,this_02->field_02D5);
            }
            if (this_02->field_0366 != 0xffffffff) {
              FUN_006b3af0((int *)this_02->field_03AA,this_02->field_0366);
            }
            if (this_02->field_03F7 != 0xffffffff) {
              FUN_006b3af0((int *)this_02->field_043B,this_02->field_03F7);
            }
          }
          FUN_006ab060((LPVOID *)&this_02->field_06BF);
          if (puVar14[0xd] == '\x01') {
            puVar19 = local_b34;
            for (iVar5 = 0x21e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
            }
            if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
              FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
            }
            puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
            *(uint **)(DAT_0081176c + 0x548) = puVar8;
            iVar5 = *(int *)(DAT_0080c4cb + 8);
            if (iVar5 != 0) {
              iVar11 = 0;
              if (0 < iVar5) {
                if (iVar5 < 1) {
                  pcVar9 = (char *)0x0;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar9 = *(char **)(*(int *)(DAT_0080c4cb + 0x14) + iVar11 * 4);
LAB_005e22f4:
                  thunk_FUN_005411a0(*(uint **)(DAT_0081176c + 0x548),pcVar9,s______s_007cdb20);
                  iVar11 = iVar11 + 1;
                } while (iVar11 < *(int *)(DAT_0080c4cb + 8));
              }
              ccFntTy::FormIndentSarr
                        (this_02->field_008D,*(uint **)(DAT_0081176c + 0x548),
                         s________________007c21d8,(uint *)&DAT_007c21ec,
                         (*(int *)(puVar14 + 0x16) - *(int *)&this_02->field_0x2f5) + -0x2d,0,
                         0xffffffff,(char *)0x0,1);
              if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
                FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
              }
              puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
              *(uint **)(DAT_0081176c + 0x548) = puVar8;
              local_ec = CONCAT31(local_ec._1_3_,(this_02->field_06C7 != '\x01') + -1) & 0xffffff02;
              FUN_006b0140(0x2347,HINSTANCE_00807618);
              wsprintfA((LPSTR)local_c38,s___1d__s__007cdb14);
              Library::DKW::TBL::FUN_006b5aa0(*(uint **)(DAT_0081176c + 0x548),(char *)local_c38);
              wsprintfA((LPSTR)local_c38,s___1d__s_007cdb08);
              Library::DKW::TBL::FUN_006b5aa0(*(uint **)(DAT_0081176c + 0x548),(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0(*(uint **)(DAT_0081176c + 0x548),&DAT_007c3b5c);
              FUN_006b0140(0x2346,HINSTANCE_00807618);
              puVar8 = local_c38;
              wsprintfA((LPSTR)puVar8,s___1d__s__007cdb14);
              Library::DKW::TBL::FUN_006b5aa0(*(uint **)(DAT_0081176c + 0x548),(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0(*(uint **)(DAT_0081176c + 0x548),&DAT_007c3b5c);
              if (puVar8 != (uint *)0x0) {
                if (puVar8[2] != 0) {
                  ccFntTy::SepColorStrInSarr(this_02->field_008D,puVar8,puVar8);
                }
                iVar5 = 0;
                if (0 < (int)puVar8[2]) {
                  if ((int)puVar8[2] < 1) {
                    pcVar9 = (char *)0x0;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar9 = *(char **)(puVar8[5] + iVar5 * 4);
LAB_005e24c5:
                    Library::DKW::TBL::FUN_006b5aa0(*(uint **)(DAT_0081176c + 0x548),pcVar9);
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)puVar8[2]);
                }
                FUN_006b5570((byte *)puVar8);
              }
              local_f0 = *(int *)(puVar14 + 0x16);
              iVar5 = *(int *)(puVar14 + 0x1a);
              pcVar28 = (ccFntTy *)0x1;
              puVar19 = (undefined4 *)(this_02->field_005D + 0x28);
              uVar24 = FUN_006b4fe0(this_02->field_005D);
              uVar6 = FUN_006b50c0(local_f0,iVar5,(uint)*(ushort *)(this_02->field_005D + 0xe),
                                   uVar24,puVar19,(int)pcVar28);
              this_02->field_06BF = uVar6;
              *(undefined1 **)&this_02->field_0x6c3 =
                   &this_02->field_0x91 + (uint)(puVar14[10] != '\0') * 0x100;
              uVar6 = *(undefined4 *)(puVar14 + 9);
              this_02->field_06C7 = (char)uVar6;
              this_02->field_0x6c8 = (char)((uint)uVar6 >> 8);
              this_02->field_06C9 = (char)((uint)uVar6 >> 0x10);
              this_02->field_06CA = (char)((uint)uVar6 >> 0x18);
              local_b34[0] = 0;
              local_b34[1] = 2;
              local_b14 = *(int *)(puVar14 + 0xe) + 0xf;
              local_b34[2] = 1;
              local_b10 = *(int *)(puVar14 + 0x12) + 0xf;
              pcVar7 = this_02->field_008D;
              local_b34[3] = *(undefined4 *)(*(int *)(DAT_0081176c + 0x548) + 8);
              local_b24 = (*(int *)(puVar14 + 0x16) - *(int *)&this_02->field_0x2f5) + -0x2d;
              if (pcVar7->field_00A0 != 0) {
                pcVar28 = pcVar7;
                FUN_00710790((uint *)pcVar7);
              }
              local_b20 = *(int *)&pcVar7->field_0x8a;
              local_b1c = 1;
              local_af4 = 0x6332;
              local_a84 = 4;
              local_a80 = 0;
              local_a78[0] = 0;
              local_afc = this_02->field_0008;
              local_b18 = (*(int *)&pcVar28->field_0x1a + -0x1e) / *(int *)&pcVar7->field_0x8a;
              local_af8 = 2;
              local_a7c = 2;
              local_a78[1] = 2;
              local_a78[2] = local_b24 + 0xf + local_b14;
              this_02->field_037E = local_a78[2];
              local_a18 = this_02->field_0008;
              local_a78[3] = (*(int *)&pcVar28->field_0x12 - *(int *)&this_02->field_0x38a) + -0x10
                             + *(int *)&pcVar28->field_0x1a;
              this_02->field_0382 = local_a78[3];
              local_a68 = *(undefined4 *)&this_02->field_0x386;
              local_a64 = *(int *)&this_02->field_0x38a;
              local_968 = 500;
              local_964 = 0x32;
              local_a14 = 2;
              local_a10 = 0x6334;
              local_8fc = 2;
              piVar17 = local_a78;
              piVar13 = local_8f8;
              for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar13 = *piVar17;
                piVar17 = piVar17 + 1;
                piVar13 = piVar13 + 1;
              }
              local_764 = *(int *)&this_02->field_0x417;
              local_8f8[2] = local_b24 + 0xf + local_b14;
              local_8e4 = *(int *)&this_02->field_0x2f9;
              this_02->field_02ED = local_8f8[2];
              local_8f8[3] = *(int *)&pcVar28->field_0x12 + 0xf;
              local_890 = 0x6333;
              this_02->field_02F1 = local_8f8[3];
              local_8e8 = *(int *)&this_02->field_0x2f5;
              local_77c = 3;
              local_778 = 1;
              local_770 = 0;
              local_76c = (local_8e8 - local_764) / 2 + local_b24 + 0xf + local_b14;
              this_02->field_040F = local_76c;
              local_768 = *(int *)&pcVar28->field_0x12 + 0x1e + local_8e4;
              this_02->field_0413 = local_768;
              local_728 = this_02->field_0008;
              local_760 = ((*(int *)&pcVar28->field_0x1a - local_8e4) -
                          *(int *)&this_02->field_0x38a) + -0x3c;
              local_75c = 0xe;
              local_724 = 2;
              local_720 = 0x6335;
              (*this_02->field_000C->vtable->CreateObject)
                        ((SystemClassTy *)this_02->field_000C,8,&this_02->field_02CD,(int *)0x0,
                         local_b34,0);
              *(undefined4 *)&this_02->field_0x2d = 0x20;
              *(undefined4 *)&this_02->field_0x31 = 1;
              FUN_006e6080(this_02,2,this_02->field_02CD,(undefined4 *)&this_02->field_0x1d);
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,this_02->field_0484,0xffffffff,
                         *(uint *)&pcVar28->field_0xe,*(uint *)&pcVar28->field_0x12);
              in_stack_ffffffdc = (uint *)0x5e2823;
              FUN_006b2800((int)DAT_008075a8,this_02->field_0484,*(uint *)&pcVar28->field_0x16,
                           *(uint *)&pcVar28->field_0x1a);
              FUN_006b3020((int)DAT_008075a8,this_02->field_0484,
                           *(uint *)((int)&pcVar28->field_0004 + 1));
              uVar24 = this_02->field_0484;
              Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,uVar24);
              iVar5 = *(int *)((int)&pcVar28->field_0004 + 1);
              if (iVar5 < 1) {
                uVar12 = 0;
              }
              else {
                uVar12 = iVar5 - 1;
              }
              if (this_02->field_02D5 != 0xffffffff) {
                uVar24 = uVar12;
                FUN_006b3020(this_02->field_0319,this_02->field_02D5,uVar12);
              }
              *(uint *)&this_02->field_0x32e = uVar12;
              if (*(int *)(uVar24 + 5) < 1) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(int *)(uVar24 + 5) - 1;
              }
              if (this_02->field_0366 != 0xffffffff) {
                FUN_006b3020(this_02->field_03AA,this_02->field_0366,uVar12);
              }
              *(uint *)&this_02->field_0x3bf = uVar12;
              if (*(int *)(uVar24 + 5) < 1) {
                uVar24 = 0;
              }
              else {
                uVar24 = *(int *)(uVar24 + 5) - 1;
              }
              if (this_02->field_03F7 != 0xffffffff) {
                FUN_006b3020(this_02->field_043B,this_02->field_03F7,uVar24);
              }
              *(uint *)&this_02->field_0x450 = uVar24;
              this_02->field_03FB = (uint)(this_02->field_06CA == '\x01');
              if (this_02->field_02D5 != 0xffffffff) {
                in_stack_ffffffdc = (uint *)this_02->field_0319;
                Library::DKW::DDX::FUN_006b34d0
                          (in_stack_ffffffdc,this_02->field_02D5,0xfffffffe,this_02->field_02ED,
                           this_02->field_02F1);
              }
              if (this_02->field_0366 != 0xffffffff) {
                in_stack_ffffffdc = (uint *)this_02->field_03AA;
                Library::DKW::DDX::FUN_006b34d0
                          (in_stack_ffffffdc,this_02->field_0366,0xfffffffe,this_02->field_037E,
                           this_02->field_0382);
              }
              if (this_02->field_03F7 != 0xffffffff) {
                in_stack_ffffffdc = (uint *)this_02->field_043B;
                Library::DKW::DDX::FUN_006b34d0
                          (in_stack_ffffffdc,this_02->field_03F7,0xfffffffe,this_02->field_040F,
                           this_02->field_0413);
              }
              if (this_02->field_03F7 != 0xffffffff) {
                in_stack_ffffffdc = (uint *)this_02->field_043B;
                Library::DKW::DDX::FUN_006b3730
                          (in_stack_ffffffdc,this_02->field_03F7,this_02->field_03FB,
                           this_02->field_040F,this_02->field_0413);
              }
            }
          }
        }
        break;
      case 5:
        cVar1 = puVar14[0xe];
        if (cVar1 == '\0') {
          iVar5 = this_02->field_064F;
        }
        else {
          iVar5 = this_02->field_0647;
        }
        uVar24 = *(uint *)(puVar14 + 0xf);
        if (uVar24 < *(uint *)(iVar5 + 0xc)) {
          if (cVar1 == '\0') {
            puVar8 = (uint *)(*(int *)(this_02->field_064F + 8) * uVar24 +
                             *(int *)(this_02->field_064F + 0x1c));
          }
          else {
            puVar8 = (uint *)(*(int *)(this_02->field_0647 + 8) * uVar24 +
                             *(int *)(this_02->field_0647 + 0x1c));
          }
        }
        else {
          puVar8 = (uint *)0x0;
        }
        if (puVar14[0xd] == '\x01') {
          if (((puVar8 == (uint *)0x0) || ((int)*puVar8 < 0)) ||
             (puVar8[8] != *(uint *)(puVar14 + 0x14))) {
            TTaskItemClose(this_02,puVar8);
            if (*(int *)(puVar14 + 0x14) < *(int *)(DAT_0080c4c7 + 8)) {
              pcVar9 = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + *(int *)(puVar14 + 0x14) * 4);
            }
            else {
              pcVar9 = (char *)0x0;
            }
            if (pcVar9 != (char *)0x0) {
              puVar8 = local_13c;
              for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              }
              *(undefined2 *)puVar8 = 0;
              if (puVar14[0xe] == '\0') {
                local_7c = local_7c & 0xffffff00;
                local_88 = (int *)((-(uint)(puVar14[9] != '\x01') & 0xfffffffe) + 2);
                do {
                  local_fc = *(int *)(puVar14 + 0x22);
                  iVar5 = *(int *)(puVar14 + 0x26);
                  iVar11 = 1;
                  puVar19 = (undefined4 *)(this_02->field_005D + 0x28);
                  uVar24 = FUN_006b4fe0(this_02->field_005D);
                  uVar12 = FUN_006b50c0(local_fc,iVar5,(uint)*(ushort *)(this_02->field_005D + 0xe),
                                        uVar24,puVar19,iVar11);
                  local_13c[(local_7c & 0xff) + 1] = uVar12;
                  uVar24 = *(uint *)(uVar12 + 0x14);
                  if (uVar24 == 0) {
                    uVar24 = ((uint)*(ushort *)(uVar12 + 0xe) * *(int *)(uVar12 + 4) + 0x1f >> 3 &
                             0x1ffffffc) * *(int *)(uVar12 + 8);
                  }
                  piVar17 = (int *)0x5e2d28;
                  puVar19 = (undefined4 *)FUN_006b4fa0(uVar12);
                  for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *puVar19 = 0xffffffff;
                    puVar19 = puVar19 + 1;
                  }
                  for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                    *(undefined1 *)puVar19 = 0xff;
                    puVar19 = (undefined4 *)((int)puVar19 + 1);
                  }
                  piVar13 = (int *)(uint)(byte)puVar14[0x19];
                  PrepareTSurf(this_02,*piVar17,puVar14[0x19],puVar14[0xb]);
                  if (puVar14[0x19] != '\0') {
                    local_110 = &this_02->field_0x91 + (uint)(puVar14[10] == '\x01') * 0x100;
                  }
                  ccFntTy::SetSurf(this_02->field_0089,*piVar13,0,0,0,0,0);
                  puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
                  Library::DKW::TBL::FUN_006b5aa0(puVar8,pcVar9);
                  local_80 = ccFntTy::FormIndentSarr
                                       (this_02->field_0089,puVar8,s________________007c21d8,
                                        (uint *)&DAT_007c21ec,
                                        *(int *)(puVar14 + 0x22) + *(int *)(puVar14 + 0x2a) * -2,0,
                                        0xffffffff,(char *)0x0,1);
                  FUN_006b5570((byte *)puVar8);
                  puVar8 = local_80;
                  if (local_80 != (uint *)0x0) {
                    piVar17 = local_88;
                    if ((char)local_7c != '\0') {
                      if ((char)local_7c == '\x01') {
                        piVar17 = (int *)((int)local_88 + 1);
                      }
                      else {
                        piVar17 = (int *)0x4;
                      }
                    }
                    ccFntTy::WrSarr(this_02->field_0089,(int)local_80,0,-1,*(int *)(puVar14 + 0x2a),
                                    *(int *)(puVar14 + 0x2e),piVar17);
                    FUN_006b5570((byte *)puVar8);
                  }
                  bVar4 = (char)local_7c + 1;
                  local_7c = CONCAT31(local_7c._1_3_,bVar4);
                } while (bVar4 < 3);
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar14 + 5),0x403db4,
                             *(uint *)(puVar14 + 0x22),*(uint *)(puVar14 + 0x26),this_02->field_064F
                            );
                uVar24 = *(uint *)(puVar14 + 0xf);
                puVar8 = (uint *)this_02->field_064F;
              }
              else {
                local_106 = *(undefined4 *)(puVar14 + 9);
                iVar11 = 1;
                local_107 = puVar14[0x19];
                local_10c = puVar14[0x18];
                local_f8 = *(int *)(puVar14 + 0x22);
                iVar5 = *(int *)(puVar14 + 0x26);
                puVar19 = (undefined4 *)(this_02->field_005D + 0x28);
                local_f4 = (-(uint)(puVar14[9] != '\x01') & 0xfffffffe) + 2;
                uVar24 = FUN_006b4fe0(this_02->field_005D);
                local_13c[1] = FUN_006b50c0(local_f8,iVar5,
                                            (uint)*(ushort *)(this_02->field_005D + 0xe),uVar24,
                                            puVar19,iVar11);
                uVar12 = 0x5e2b09;
                puVar19 = (undefined4 *)FUN_006b4fa0(local_13c[1]);
                for (uVar24 = uVar12 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
                  *puVar19 = 0xffffffff;
                  puVar19 = puVar19 + 1;
                }
                for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined1 *)puVar19 = 0xff;
                  puVar19 = (undefined4 *)((int)puVar19 + 1);
                }
                if (puVar14[0x19] != '\0') {
                  local_110 = &this_02->field_0x91 + (uint)(local_106._1_1_ == '\x01') * 0x100;
                }
                ccFntTy::SetSurf(this_02->field_0089,local_13c[1],0,0,0,0,0);
                puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
                Library::DKW::TBL::FUN_006b5aa0(puVar8,pcVar9);
                puVar10 = ccFntTy::FormIndentSarr
                                    (this_02->field_0089,puVar8,s________________007c21d8,
                                     (uint *)&DAT_007c21ec,
                                     *(int *)(puVar14 + 0x22) + *(int *)(puVar14 + 0x2a) * -2,0,
                                     0xffffffff,(char *)0x0,1);
                FUN_006b5570((byte *)puVar8);
                if (puVar10 != (uint *)0x0) {
                  local_102 = (uint *)ccFntTy::_SarrToTxt(this_02->field_0089,(char *)0x0,
                                                          (int)puVar10);
                  if (local_102 != (uint *)0x0) {
                    local_10b = (cTypingTy *)Library::MSVCRT::FUN_0072e530(0xb4);
                    if (local_10b == (cTypingTy *)0x0) {
                      local_10b = (cTypingTy *)0x0;
                    }
                    else {
                      local_10b->field_0058 = 0;
                      local_10b->field_0088 = 0;
                    }
                    local_128 = *(undefined4 *)(puVar14 + 0x2a);
                    local_124 = *(undefined4 *)(puVar14 + 0x2e);
                    uStackY_48 = 0x2c51;
                    local_46 = 0x5e;
                    local_120 = cTypingTy::TypingInit
                                          (local_10b,local_102,this_02->field_0089,0,0,0,
                                           *(int *)(puVar14 + 0x22) + *(int *)(puVar14 + 0x2a) * -2,
                                           *(int *)(puVar14 + 0x26) + *(int *)(puVar14 + 0x2e) * -2,
                                           0,0,local_f4,local_f4 + 1,4,0xff);
                    local_120 = local_120 + 1;
                  }
                  FUN_006b5570((byte *)puVar10);
                }
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar14 + 5),0x4041b0,
                             *(uint *)(puVar14 + 0x22),*(uint *)(puVar14 + 0x26),this_02->field_0647
                            );
                uVar24 = *(uint *)(puVar14 + 0xf);
                puVar8 = (uint *)this_02->field_0647;
              }
              Library::DKW::TBL::FUN_006ae140(puVar8,uVar24,local_13c);
              in_stack_ffffffdc = DAT_008075a8;
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,local_13c[0],0,*(uint *)(puVar14 + 0x1a),
                         *(uint *)(puVar14 + 0x1e));
            }
          }
          else {
            if (cVar1 == '\0') {
              uVar24 = puVar8[4];
            }
            else {
              uVar24 = 0;
            }
            in_stack_ffffffdc = DAT_008075a8;
            Library::DKW::DDX::FUN_006b3730
                      (DAT_008075a8,*puVar8,uVar24,*(uint *)(puVar14 + 0x1a),
                       *(uint *)(puVar14 + 0x1e));
          }
        }
        else if ((puVar8 != (uint *)0x0) && (-1 < (int)*puVar8)) {
          if (this_02->field_006D == '\x05') {
            TTaskItemClose(this_02,puVar8);
          }
          else {
            if (cVar1 == '\0') {
              uVar24 = 1;
            }
            else {
              uVar24 = puVar8[7] - 2;
            }
            puVar8[4] = uVar24;
            puVar8[10] = 2;
            puVar8[9] = this_02->field_0069;
            FUN_006b35d0((int *)DAT_008075a8,*puVar8);
          }
        }
        break;
      case 6:
        if (this_02->field_006D != '\x05') {
          puVar8 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                     (this_02->field_0070,puVar14 + 0xd,0,(ushort *)0x0);
          if (puVar8 == (uint *)0x0) {
            in_stack_ffffffdc = (uint *)0x5e2f3a;
            puVar8 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                       (g_cMf32_00806798,puVar14 + 0xd,0,(ushort *)0x0);
            if (puVar8 == (uint *)0x0) break;
          }
          in_stack_ffffffdc = (uint *)0x5e2f24;
          thunk_FUN_0056a130(&g_sound,0,'\x03',-1,puVar8);
        }
        break;
      case 7:
        iVar5 = this_02->field_064B;
        if (*(uint *)(puVar14 + 0xe) < *(uint *)(iVar5 + 0xc)) {
          pSVar20 = (SpriteClassTy *)
                    (*(int *)(iVar5 + 8) * *(uint *)(puVar14 + 0xe) + *(int *)(iVar5 + 0x1c));
        }
        else {
          pSVar20 = (SpriteClassTy *)0x0;
        }
        if (puVar14[0xd] == '\x01') {
          SpriteClassTy::SpriteClassTy(&local_1dc);
          ppvVar29 = (LPVOID *)0x0;
          local_142 = (int *)0x0;
          local_94 = 1;
          local_2bc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2bc;
          iVar5 = Library::MSVCRT::__setjmp3(local_2bc.jumpBuffer,0,unaff_EDI,pSVar20);
          if (iVar5 == 0) {
            ppvVar30 = ppvVar29;
            if (pSVar20 != (SpriteClassTy *)0x0) {
              pbVar16 = &pSVar20->field_0065;
              if (pbVar16 != (undefined1 *)0x0) {
                pbVar15 = (byte *)((int)ppvVar29 + 0x12);
                do {
                  bVar4 = *pbVar16;
                  bVar25 = bVar4 < *pbVar15;
                  if (bVar4 != *pbVar15) {
LAB_005e2ffb:
                    iVar5 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                    goto LAB_005e3000;
                  }
                  if (bVar4 == 0) break;
                  bVar4 = pbVar16[1];
                  bVar25 = bVar4 < pbVar15[1];
                  if (bVar4 != pbVar15[1]) goto LAB_005e2ffb;
                  pbVar16 = pbVar16 + 2;
                  pbVar15 = pbVar15 + 2;
                } while (bVar4 != 0);
                iVar5 = 0;
LAB_005e3000:
                if (iVar5 != 0) {
                  ppvVar30 = (LPVOID *)0x5e300e;
                  pSVar32 = pSVar20;
                  SpriteClassTy::CloseSprite(pSVar20);
                  pSVar3 = pSVar20 + 1;
                  ppvVar31 = (LPVOID *)((int)&pSVar20[1].field_0008 + 1);
                  pSVar20 = pSVar32;
                  if (*(int *)((int)&pSVar3->field_0008 + 1) != 0) {
                    FUN_006ab060(ppvVar31);
                    ppvVar30 = ppvVar31;
                    pSVar20 = pSVar32;
                  }
                  goto LAB_005e3030;
                }
              }
              local_94 = 0;
            }
LAB_005e3030:
            this_02 = local_8c;
            if (local_94 == 0) {
              if (pSVar20 == (SpriteClassTy *)0x0) {
                puVar19 = (undefined4 *)0x0;
              }
              else {
                puVar19 = &pSVar20->field_0004;
              }
              puVar23 = &local_1dc.field_0004;
              ppvVar29 = ppvVar30;
              for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar23 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar23 = puVar23 + 1;
              }
              local_1dc.field_0048 = (uint *)pSVar20->field_0048;
              local_1dc.field_004C = pSVar20->field_004C;
              local_1dc.field_004D = pSVar20->field_004D;
              local_1dc.field_0051 = pSVar20->field_0051;
              local_1dc.field_0055 = pSVar20->field_0055;
              local_1dc.field_0059 = pSVar20->field_0059;
              local_1dc.field_005D = pSVar20->field_005D;
              local_1dc.field_0061 = pSVar20->field_0061;
              puVar14 = &local_1dc.field_0065;
              iVar5 = 0x20;
              do {
                *puVar14 = puVar14[(int)pSVar20 - (int)&local_1dc];
                puVar14 = puVar14 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              local_1dc.field_0085 = pSVar20->field_0085;
              local_1dc.field_0089 = pSVar20->field_0089;
              local_1dc.field_008D = pSVar20->field_008D;
            }
            else {
              SpriteClassTy::InitSprite
                        (&local_1dc,(int *)DAT_008075a8,*(uint *)((int)ppvVar29 + 5),'\x1e',
                         (undefined4 *)0x0,0,0);
              in_stack_ffffffdc = (uint *)0x1e;
              iVar5 = SpriteClassTy::SetImages
                                (&local_1dc,this_02->field_0070,CASE_1E,0,
                                 (char *)((int)ppvVar29 + 0x12),0xffffffff,0);
              if (iVar5 != 0) {
                in_stack_ffffffdc = (uint *)0x1e;
                SpriteClassTy::SetImages
                          (&local_1dc,g_cMf32_00806798,CASE_1E,0,(char *)((int)ppvVar29 + 0x12),
                           0xffffffff,1);
              }
            }
            local_1dc.field_001C = *(uint *)((int)ppvVar29 + 0x32);
            local_1dc.field_0020 = *(uint *)((int)ppvVar29 + 0x36);
            cVar1 = *(char *)((int)ppvVar29 + 0x4f);
            if (cVar1 == '\0') {
              local_14b = '\0';
              local_1dc.field_0008 = *(uint *)((int)ppvVar29 + 0x4a);
            }
            else if (cVar1 == '\x01') {
              local_1dc.field_0044 = this_02->field_0069;
              local_14b = (*(char *)((int)ppvVar29 + 0x4e) != '\0') + '\x01';
              local_1dc.field_0008 = *(uint *)((int)ppvVar29 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)ppvVar29 + 0x46);
            }
            else if (cVar1 == '\x02') {
              local_1dc.field_0044 = this_02->field_0069;
              local_14b = (*(char *)((int)ppvVar29 + 0x4e) != '\0') + '\x03';
              local_1dc.field_0008 = *(uint *)((int)ppvVar29 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)ppvVar29 + 0x46);
              local_14a = 0;
              local_146 = *(int *)((int)ppvVar29 + 0x42);
              in_stack_ffffffdc = *(uint **)((int)ppvVar29 + 0x32);
              local_142 = FUN_006c81c0((int)in_stack_ffffffdc,*(int *)((int)ppvVar29 + 0x36),
                                       *(int *)((int)ppvVar29 + 0x3a),*(int *)((int)ppvVar29 + 0x3e)
                                       ,local_146);
              if (local_142 == (int *)0x0) {
                local_14b = (*(char *)((int)ppvVar29 + 0x4e) != '\0') + '\x01';
              }
            }
            if (local_1dc.field_0004 != 0xffffffff) {
              in_stack_ffffffdc = local_1dc.field_0048;
              Library::DKW::DDX::FUN_006b3730
                        (local_1dc.field_0048,local_1dc.field_0004,local_1dc.field_0008,
                         local_1dc.field_001C,local_1dc.field_0020);
            }
            Library::DKW::TBL::FUN_006ae140
                      ((uint *)this_02->field_064B,*(uint *)((int)ppvVar29 + 0xe),&local_1dc.vtable)
            ;
            g_currentExceptionFrame = local_2bc.previous;
          }
          else {
            g_currentExceptionFrame = local_2bc.previous;
            SpriteClassTy::CloseSprite(&local_1dc);
            this_02 = local_8c;
            if (local_142 != (int *)0x0) {
              FUN_006ab060(&local_142);
              this_02 = local_8c;
            }
          }
        }
        else if (pSVar20 != (SpriteClassTy *)0x0) {
          SpriteClassTy::CloseSprite(pSVar20);
          if (*(int *)((int)&pSVar20[1].field_0008 + 1) != 0) {
            FUN_006ab060((LPVOID *)((int)&pSVar20[1].field_0008 + 1));
          }
        }
        break;
      case 8:
        puVar19 = local_e4;
        for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar19 = 0;
          puVar19 = puVar19 + 1;
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
        Library::DKW::TBL::FUN_006b11d0((uint *)this_02->field_0074,uVar12 + 1,local_e4);
        local_d7 = 1;
        local_d6 = CONCAT31(0x2d,(undefined1)local_d6);
        uStackY_d2 = 0x22600;
        iStackY_ce._0_1_ = 0;
        Library::DKW::TBL::FUN_006b11d0
                  ((uint *)this_02->field_0074,this_02->field_007C + 1,local_e4);
        local_d7 = 0;
        local_d6 = CONCAT31(0x23,(undefined1)local_d6);
        uStackY_d2 = 0x1f400;
        iStackY_ce = (uint)iStackY_ce._1_3_ << 8;
        Library::DKW::TBL::FUN_006b11d0
                  ((uint *)this_02->field_0074,this_02->field_007C + 1,local_e4);
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
                  ((uint *)this_02->field_0074,this_02->field_007C + 1,local_e4);
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
                  ((uint *)this_02->field_0074,this_02->field_007C + 1,local_e4);
        break;
      case 9:
        puVar19 = &this_02->field_005D;
        if (this_02->field_005D != 0) {
          this_00 = g_cMf32_00806780;
          if ((this_02->field_0080 != '\x01') &&
             (this_00 = g_cMf32_00806798, this_02->field_0080 != '\x02')) {
            this_00 = this_02->field_0070;
          }
          cMf32::RecMemFree(this_00,puVar19);
        }
        pbVar16 = puVar14 + 0xd;
        this_02->field_0080 = 0;
        iVar5 = FUN_0070a9f0(this_02->field_0070,(char *)pbVar16,0,0);
        *puVar19 = iVar5;
        if (iVar5 == 0) {
          iVar5 = FUN_0070a9f0(g_cMf32_00806798,(char *)pbVar16,0,0);
          *puVar19 = iVar5;
          if (iVar5 == 0) {
            iVar5 = 1;
            bVar4 = 0;
            text = FUN_006f2c00(s_TASK_BKG_007cda64,1,(uint)DAT_0080874e);
            uVar6 = FUN_0070a9f0(g_cMf32_00806780,text,bVar4,iVar5);
            *puVar19 = uVar6;
            this_02->field_0080 = 1;
          }
          else {
            puVar19 = (undefined4 *)local_78;
            for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
            }
            local_6d = 1;
            local_6c = 1;
            local_6f = 1;
            local_78._1_4_ = *(undefined4 *)(puVar14 + 1);
            local_73 = 0x7ffffff0;
            local_78[0] = 7;
            local_6b = 1;
            pbVar15 = pbVar16;
            pbVar21 = PTR_s_DEFAULT_WS_ANIMATED_0079c224;
            do {
              bVar4 = *pbVar15;
              bVar25 = bVar4 < *pbVar21;
              if (bVar4 != *pbVar21) {
LAB_005e14be:
                iVar5 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                goto LAB_005e14c3;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar15[1];
              bVar25 = bVar4 < pbVar21[1];
              if (bVar4 != pbVar21[1]) goto LAB_005e14be;
              pbVar15 = pbVar15 + 2;
              pbVar21 = pbVar21 + 2;
            } while (bVar4 != 0);
            iVar5 = 0;
LAB_005e14c3:
            pbVar15 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            pbVar21 = pbVar16;
            if (iVar5 == 0) {
              uVar24 = 0xffffffff;
              pcVar9 = &DAT_007cdc48;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf0;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              iVar5 = this_02->field_007C;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0
                        ((uint *)this_02->field_0074,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_WS_ANI2_007cdc38;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf1;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_WS_ANI3_007cdc28;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf2;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x40;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar24 = 0xffffffff;
              pcVar9 = &DAT_007cdc18;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = &DAT_007cdc08;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf4;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = &DAT_007cdbf8;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf5;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x2df;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              pbVar15 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
              pbVar21 = pbVar16;
            }
            do {
              bVar4 = *pbVar16;
              bVar25 = bVar4 < *pbVar15;
              if (bVar4 != *pbVar15) {
LAB_005e16bc:
                iVar5 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                goto LAB_005e16c1;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar16[1];
              bVar25 = bVar4 < pbVar15[1];
              if (bVar4 != pbVar15[1]) goto LAB_005e16bc;
              pbVar16 = pbVar16 + 2;
              pbVar15 = pbVar15 + 2;
            } while (bVar4 != 0);
            iVar5 = 0;
LAB_005e16c1:
            pbVar16 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar5 == 0) {
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI1_007cdbe8;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf0;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              iVar5 = this_02->field_007C;
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI2_007cdbd8;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf1;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI3_007cdbc8;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf2;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI4_007cdbb8;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0xdc;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = &DAT_007cdba8;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf4;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x1ce;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = &DAT_007cdb98;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf5;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x2a9;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              local_6a = 0xf6;
              pcVar9 = &DAT_007cdb88;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_BO_ANI8_007cdb78;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf7;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              pbVar16 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar4 = *pbVar21;
              bVar25 = bVar4 < *pbVar16;
              if (bVar4 != *pbVar16) {
LAB_005e1958:
                iVar5 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                goto LAB_005e195d;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar21[1];
              bVar25 = bVar4 < pbVar16[1];
              if (bVar4 != pbVar16[1]) goto LAB_005e1958;
              pbVar21 = pbVar21 + 2;
              pbVar16 = pbVar16 + 2;
            } while (bVar4 != 0);
            iVar5 = 0;
LAB_005e195d:
            if (iVar5 == 0) {
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI1_007cdb68;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf0;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              iVar5 = this_02->field_007C;
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x8e;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI2_007cdb58;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf1;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI3_007cdb48;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf2;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI4_007cdb38;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0xd7;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar24 = 0xffffffff;
              pcVar9 = s_DEF_SI_ANI5_007cdb28;
              do {
                pcVar22 = pcVar9;
                if (uVar24 == 0) break;
                uVar24 = uVar24 - 1;
                pcVar22 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar22;
              } while (cVar1 != '\0');
              uVar24 = ~uVar24;
              local_6a = 0xf4;
              iVar5 = this_02->field_007C;
              pcVar9 = pcVar22 + -uVar24;
              pcVar22 = local_66;
              for (uVar12 = uVar24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar22 = pcVar22 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
                *pcVar22 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar22 = pcVar22 + 1;
              }
              local_46 = 0x27c;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
            }
            this_02->field_0080 = 2;
          }
        }
        iVar5 = this_02->field_0074;
        if ((uint)this_02->field_007C < *(uint *)(iVar5 + 0xc)) {
          piVar17 = (int *)(*(int *)(iVar5 + 8) * this_02->field_007C + *(int *)(iVar5 + 0x1c));
        }
        else {
          piVar17 = (int *)0x0;
        }
        FUN_006bc360((ushort *)this_02->field_005D,local_1268,piVar17);
        in_stack_ffffffdc = (uint *)0x0;
        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x1a,0x10,(undefined4 *)&this_02->field_0x91);
        Library::Ourlib::PALETTE::FUN_00718780
                  ((int)local_1268,0,0x100,0x2e,0x10,(undefined4 *)&this_02->field_0x191);
        pcVar7 = extraout_ECX_00;
        if (this_02->field_007C != 0) {
          DarkScreen(DAT_0080759c,1,0);
          PaintMTask(this_02);
          in_stack_ffffffdc = DAT_008075a8;
          thunk_FUN_0055ddf0(DAT_0080759c,(int *)DAT_008075a8,this_02->field_005D,10,2);
          pcVar7 = extraout_ECX_01;
        }
        if (this_02->field_0089 != (ccFntTy *)0x0) {
          ccFntTy::operator(pcVar7,(uint *)this_02->field_0089);
        }
        pcVar7 = (ccFntTy *)thunk_FUN_005defe0(this_02->field_005D,(undefined *)0x0,DAT_00807dd9);
        this_02->field_0089 = pcVar7;
        pcVar7->field_0058 = 1;
        pcVar7->field_005C = 0;
        if (this_02->field_008D != (ccFntTy *)0x0) {
          ccFntTy::operator(this_01,(uint *)this_02->field_008D);
        }
        pcVar7 = (ccFntTy *)thunk_FUN_005df290(this_02->field_005D,(undefined *)0x0,DAT_00807dd9);
        this_02->field_008D = pcVar7;
        thunk_FUN_00568bc0(&g_sound,0);
        if ((DAT_00807300._1_1_ & 8) != 0) {
          puVar8 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                     (this_02->field_0070,(char *)((int)piVar17 + 0x2d),0,
                                      (ushort *)0x0);
          *(uint **)&this_02->field_0x85 = puVar8;
          if (puVar8 == (uint *)0x0) {
            puVar8 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                       (g_cMf32_00806798,(char *)((int)piVar17 + 0x2d),0,
                                        (ushort *)0x0);
            *(uint **)&this_02->field_0x85 = puVar8;
            if (puVar8 == (uint *)0x0) {
              in_stack_ffffffdc = (uint *)0x5e1cab;
              thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
              break;
            }
          }
          in_stack_ffffffdc = (uint *)0x5e1c94;
          thunk_FUN_0056a130(&g_sound,0,'\x02',0,puVar8);
        }
      }
      iVar5 = this_02->field_007C + 1;
      this_02->field_007C = iVar5;
      uVar24 = *(uint *)(this_02->field_0074 + 0xc);
    } while (iVar5 < (int)uVar24);
  }
  if (this_02->field_007C == *(int *)(this_02->field_0074 + 0xc)) {
    if ((this_02->field_006D == '\x05') && (iVar5 = this_02->field_064B, iVar5 != 0)) {
      uVar24 = 0;
      if (*(int *)(iVar5 + 0xc) != 0) {
        if (*(int *)(iVar5 + 0xc) == 0) {
          pSVar20 = (SpriteClassTy *)0x0;
          goto LAB_005e34e0;
        }
        do {
          pSVar20 = (SpriteClassTy *)(*(int *)(iVar5 + 8) * uVar24 + *(int *)(iVar5 + 0x1c));
LAB_005e34e0:
          if ((pSVar20->field_0004 != -1) &&
             ((*(char *)&pSVar20[1].vtable == '\x01' || (*(char *)&pSVar20[1].vtable == '\x03')))) {
            SpriteClassTy::CloseSprite(pSVar20);
            if (*(int *)((int)&pSVar20[1].field_0008 + 1) != 0) {
              FUN_006ab060((LPVOID *)((int)&pSVar20[1].field_0008 + 1));
            }
          }
          iVar5 = this_02->field_064B;
          uVar24 = uVar24 + 1;
        } while (uVar24 < *(uint *)(iVar5 + 0xc));
      }
    }
    this_02->field_006D = 1;
  }
  g_currentExceptionFrame = local_278.previous;
  return;
}


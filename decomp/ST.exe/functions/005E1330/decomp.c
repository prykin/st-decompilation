
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
  AnonShape_005E10A0_819783CC *pAVar9;
  char *pcVar10;
  AnonShape_006B5570_4D68B99C *pAVar11;
  AnonShape_006B5570_4D68B99C *pAVar12;
  int iVar13;
  MTaskTy *extraout_ECX;
  cMf32 *this_00;
  uint uVar14;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_01;
  int *piVar15;
  MTaskTy *this_02;
  undefined4 unaff_ESI;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  int *piVar19;
  int *piVar20;
  undefined4 *puVar21;
  SpriteClassTy *pSVar22;
  void *unaff_EDI;
  byte *pbVar23;
  char *pcVar24;
  uint *puVar25;
  undefined4 *puVar26;
  uint uVar27;
  bool bVar28;
  undefined4 local_1268 [256];
  int local_e68 [140];
  AnonShape_006B5570_4D68B99C local_c38 [10];
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
  AnonShape_006B5570_4D68B99C *local_80;
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
  HINSTANCE pHVar29;
  int iVar30;
  ccFntTy *pcVar31;
  LPVOID *ppvVar32;
  LPVOID *ppvVar33;
  LPVOID *ppvVar34;
  SpriteClassTy *pSVar35;
  
  Library::MSVCRT::FUN_0072da40();
  local_278.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_278;
  local_8c = extraout_ECX;
  iVar5 = Library::MSVCRT::__setjmp3(local_278.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_278.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x45f,0,iVar5,
                                &DAT_007a4ccc);
    if (iVar13 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_task_obj_cpp_007cd994,0x45f);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar27 = *(uint *)(local_8c->field_0074 + 0xc);
  this_02 = local_8c;
  if ((int)local_8c->field_007C < (int)uVar27) {
    do {
      uVar14 = this_02->field_007C;
      if (uVar14 < uVar27) {
        puVar16 = (undefined1 *)
                  (*(int *)(this_02->field_0074 + 8) * uVar14 + *(int *)(this_02->field_0074 + 0x1c)
                  );
      }
      else {
        puVar16 = (undefined1 *)0x0;
      }
      if (((uint)(this_02->field_0069 - this_02->field_0061) < *(uint *)(puVar16 + 1)) &&
         (this_02->field_006D != '\x05')) break;
      switch(*puVar16) {
      case 1:
        if ((this_02->field_006E != '\x01') || ((puVar16[0xd] != '\0' && (puVar16[0xd] != '\x01'))))
        {
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
          uVar27 = (uint)in_stack_ffffffdc & 0xff;
          if ((&this_02->field_0291)[uVar27] != 0) {
            FUN_006b3af0((int *)DAT_008075a8,(&this_02->field_02A5)[uVar27]);
            StartSystemTy::sub_006E56B0(this_02->field_000C,(&this_02->field_0291)[uVar27]);
            (&this_02->field_0291)[uVar27] = 0;
          }
          FUN_006ab060((LPVOID *)(&this_02->field_0653 + uVar27 * 3));
          if (puVar16[0xe] == '\x01') {
            local_84 = *(uint *)(puVar16 + 0x1b);
            if ((int)local_84 < 0x28) {
              local_84 = 0x28;
            }
            iVar13 = 1;
            iVar5 = this_02->field_005D + 0x28;
            uVar14 = FUN_006b4fe0(this_02->field_005D);
            uVar6 = FUN_006b50c0(iVar5,local_84,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar14,
                                 (undefined4 *)iVar5,iVar13);
            (&this_02->field_0653)[uVar27 * 3] = uVar6;
            *(undefined1 **)(&this_02->field_0x657 + uVar27 * 0xc) =
                 &this_02->field_0x91 + (uint)(puVar16[10] == '\x01') * 0x100;
            *(undefined4 *)(&this_02->field_0x65b + uVar27 * 0xc) = *(undefined4 *)(puVar16 + 9);
            uVar6 = CreateBut(this_02,1,1,*(undefined4 *)(puVar16 + 0xf),
                              *(undefined4 *)(puVar16 + 0x13),iVar5,local_84,uVar27 + 0x6200,
                              uVar27 + 0x6212);
            (&this_02->field_0291)[uVar27] = uVar6;
            uVar14 = *(uint *)(puVar16 + 0xf);
            puVar8 = &this_02->field_02A5 + uVar27;
            Library::DKW::DDX::FUN_006b3640
                      ((int *)DAT_008075a8,(&this_02->field_02A5)[uVar27],0xffffffff,uVar14,
                       *(uint *)(puVar16 + 0x13));
            in_stack_ffffffdc = (uint *)0x5e1e40;
            FUN_006b2800((int)DAT_008075a8,*puVar8,uVar14,local_84);
            FUN_006b3020((int)DAT_008075a8,*puVar8,*(uint *)(puVar16 + 5));
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
          ppvVar32 = (LPVOID *)&this_02->field_0x68f;
          iVar5 = 4;
          do {
            FUN_006ab060(ppvVar32);
            ppvVar32 = ppvVar32 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          if (puVar16[0xd] == '\x01') {
            puVar21 = local_234;
            for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            piVar19 = local_e68;
            for (iVar5 = 0x8c; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar19 = 0;
              piVar19 = piVar19 + 1;
            }
            bVar4 = 2;
            piVar19 = (int *)(puVar16 + 0x16);
            iVar5 = 2;
            do {
              if (-1 < *piVar19) {
                bVar4 = bVar4 + 1;
              }
              piVar19 = piVar19 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            local_90 = CONCAT31((int3)((uint)local_90 >> 8),bVar4);
            local_80 = (AnonShape_006B5570_4D68B99C *)(uint)bVar4;
            if (local_80 == (AnonShape_006B5570_4D68B99C *)0x2) {
              if ((DAT_00807340 == '\x01') || (DAT_00807340 == '\x03')) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((local_80 == (AnonShape_006B5570_4D68B99C *)0x3) && (DAT_00807340 == '\x03')) {
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            unaff_EDI = (void *)((uint)unaff_EDI & 0xffffff);
            if (bVar4 != 0) {
              local_88 = (int *)(puVar16 + 9);
              iVar5 = 0;
              piVar19 = local_e68;
              piVar20 = (int *)(puVar16 + 0x1e);
              piVar15 = (int *)&this_02->field_0x693;
              do {
                uID = 0x1f52;
                if (local_80 == (AnonShape_006B5570_4D68B99C *)0x2) {
                  if (iVar5 == 0) {
                    uID = 0x1f47;
                    *piVar19 = 1;
                  }
                  else if (iVar5 == 1) {
                    uID = 0x1f49;
                    *piVar19 = 3;
                  }
                }
                else if (local_80 == (AnonShape_006B5570_4D68B99C *)0x3) {
                  if (iVar5 == 0) {
                    uID = 0x1f47;
LAB_005e200a:
                    *piVar19 = iVar5 + 1;
                  }
                  else if (iVar5 == 1) {
                    uID = 0x1f48;
                    *piVar19 = 2;
                  }
                  else {
                    if (iVar5 != 2) goto LAB_005e200a;
                    uID = 0x1f49;
                    *piVar19 = 3;
                  }
                }
                else {
                  switch(iVar5) {
                  case 0:
                    uID = 0x1f47;
                    *piVar19 = iVar5 + 1;
                    break;
                  case 1:
                    uID = 0x1f48;
                    *piVar19 = iVar5 + 1;
                    break;
                  case 2:
                    uID = 0x1f49;
                    *piVar19 = iVar5 + 1;
                    break;
                  case 3:
                  default:
                    uID = 0x1f52;
                    *piVar19 = iVar5 + 1;
                  }
                }
                piVar19[1] = (uint)((char)((uint)unaff_EDI >> 0x18) == DAT_00807340);
                pHVar29 = HINSTANCE_00807618;
                piVar19[3] = piVar20[-4];
                puVar8 = (uint *)FUN_006b0140(uID,pHVar29);
                iVar13 = FUN_00711110(this_02->field_008D,puVar8);
                iVar30 = 1;
                piVar19[5] = iVar13 + 0x1b;
                iVar13 = this_02->field_005D;
                piVar19[4] = *piVar20;
                piVar19[6] = 0x14;
                local_e8 = piVar19[5];
                puVar21 = (undefined4 *)(iVar13 + 0x28);
                uVar27 = FUN_006b4fe0(iVar13);
                iVar13 = FUN_006b50c0(local_e8,0x14,(uint)*(ushort *)(this_02->field_005D + 0xe),
                                      uVar27,puVar21,iVar30);
                piVar15[-1] = iVar13;
                piVar20 = piVar20 + 1;
                *piVar15 = (int)(&this_02->field_0x91 +
                                (uint)(*(char *)(iVar30 + 10) != '\0') * 0x100);
                piVar19 = piVar19 + 0x1c;
                piVar15[1] = *local_88;
                bVar4 = (char)((uint)unaff_EDI >> 0x18) + 1;
                iVar5 = iVar5 + 1;
                unaff_EDI = (void *)CONCAT13(bVar4,(int3)unaff_EDI);
                piVar15 = piVar15 + 3;
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
            puVar25 = &this_02->field_02BD;
            iVar5 = 4;
            do {
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,*puVar25,0xffffffff,*puVar8,puVar8[1]);
              uVar27 = puVar8[3];
              in_stack_ffffffdc = (uint *)0x5e21c3;
              FUN_006b2800((int)DAT_008075a8,*puVar25,puVar8[2],uVar27);
              FUN_006b3020((int)DAT_008075a8,*puVar25,*(uint *)(uVar27 + 5));
              Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,*puVar25);
              puVar8 = puVar8 + 0x1c;
              puVar25 = puVar25 + 1;
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
          if (puVar16[0xd] == '\x01') {
            puVar21 = local_b34;
            for (iVar5 = 0x21e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
                (AnonShape_006B5570_4D68B99C *)0x0) {
              FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
            }
            puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
            PTR_0081176c->field_0548 = puVar8;
            iVar5 = PTR_0080c4cb->field_0008;
            if (iVar5 != 0) {
              iVar13 = 0;
              if (0 < iVar5) {
                if (iVar5 < 1) {
                  pcVar10 = (char *)0x0;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar10 = *(char **)(PTR_0080c4cb->field_0014 + iVar13 * 4);
LAB_005e22f4:
                  thunk_FUN_005411a0((uint *)PTR_0081176c->field_0548,pcVar10,s______s_007cdb20);
                  iVar13 = iVar13 + 1;
                } while (iVar13 < PTR_0080c4cb->field_0008);
              }
              ccFntTy::FormIndentSarr
                        (this_02->field_008D,(uint *)PTR_0081176c->field_0548,
                         s________________007c21d8,(uint *)&DAT_007c21ec,
                         (*(int *)(puVar16 + 0x16) - *(int *)&this_02->field_0x2f5) + -0x2d,0,
                         0xffffffff,(char *)0x0,1);
              if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
                  (AnonShape_006B5570_4D68B99C *)0x0) {
                FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
              }
              puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
              PTR_0081176c->field_0548 = puVar8;
              local_ec = CONCAT31(local_ec._1_3_,(this_02->field_06C7 != '\x01') + -1) & 0xffffff02;
              FUN_006b0140(0x2347,HINSTANCE_00807618);
              wsprintfA((LPSTR)local_c38,s___1d__s__007cdb14);
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,(char *)local_c38);
              wsprintfA((LPSTR)local_c38,s___1d__s_007cdb08);
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,&DAT_007c3b5c);
              FUN_006b0140(0x2346,HINSTANCE_00807618);
              pAVar11 = local_c38;
              wsprintfA((LPSTR)pAVar11,s___1d__s__007cdb14);
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,(char *)local_c38);
              Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,&DAT_007c3b5c);
              if (pAVar11 != (AnonShape_006B5570_4D68B99C *)0x0) {
                if (pAVar11->field_0008 != 0) {
                  ccFntTy::SepColorStrInSarr(this_02->field_008D,(uint *)pAVar11,(uint *)pAVar11);
                }
                iVar5 = 0;
                if (0 < (int)pAVar11->field_0008) {
                  if ((int)pAVar11->field_0008 < 1) {
                    pcVar10 = (char *)0x0;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar10 = *(char **)(pAVar11->field_0014 + iVar5 * 4);
LAB_005e24c5:
                    Library::DKW::TBL::FUN_006b5aa0((uint *)PTR_0081176c->field_0548,pcVar10);
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)pAVar11->field_0008);
                }
                FUN_006b5570(pAVar11);
              }
              local_f0 = *(int *)(puVar16 + 0x16);
              iVar5 = *(int *)(puVar16 + 0x1a);
              pcVar31 = (ccFntTy *)0x1;
              puVar21 = (undefined4 *)(this_02->field_005D + 0x28);
              uVar27 = FUN_006b4fe0(this_02->field_005D);
              uVar6 = FUN_006b50c0(local_f0,iVar5,(uint)*(ushort *)(this_02->field_005D + 0xe),
                                   uVar27,puVar21,(int)pcVar31);
              this_02->field_06BF = uVar6;
              *(undefined1 **)&this_02->field_0x6c3 =
                   &this_02->field_0x91 + (uint)(puVar16[10] != '\0') * 0x100;
              uVar6 = *(undefined4 *)(puVar16 + 9);
              this_02->field_06C7 = (char)uVar6;
              this_02->field_0x6c8 = (char)((uint)uVar6 >> 8);
              this_02->field_06C9 = (char)((uint)uVar6 >> 0x10);
              this_02->field_06CA = (char)((uint)uVar6 >> 0x18);
              local_b34[0] = 0;
              local_b34[1] = 2;
              local_b14 = *(int *)(puVar16 + 0xe) + 0xf;
              local_b34[2] = 1;
              local_b10 = *(int *)(puVar16 + 0x12) + 0xf;
              pcVar7 = this_02->field_008D;
              local_b34[3] = *(undefined4 *)(PTR_0081176c->field_0548 + 8);
              local_b24 = (*(int *)(puVar16 + 0x16) - *(int *)&this_02->field_0x2f5) + -0x2d;
              if (pcVar7->field_00A0 != 0) {
                pcVar31 = pcVar7;
                FUN_00710790((uint *)pcVar7);
              }
              local_b20 = *(int *)&pcVar7->field_0x8a;
              local_b1c = 1;
              local_af4 = 0x6332;
              local_a84 = 4;
              local_a80 = 0;
              local_a78[0] = 0;
              local_afc = this_02->field_0008;
              local_b18 = (*(int *)&pcVar31->field_0x1a + -0x1e) / *(int *)&pcVar7->field_0x8a;
              local_af8 = 2;
              local_a7c = 2;
              local_a78[1] = 2;
              local_a78[2] = local_b24 + 0xf + local_b14;
              this_02->field_037E = local_a78[2];
              local_a18 = this_02->field_0008;
              local_a78[3] = (*(int *)&pcVar31->field_0x12 - *(int *)&this_02->field_0x38a) + -0x10
                             + *(int *)&pcVar31->field_0x1a;
              this_02->field_0382 = local_a78[3];
              local_a68 = *(undefined4 *)&this_02->field_0x386;
              local_a64 = *(int *)&this_02->field_0x38a;
              local_968 = 500;
              local_964 = 0x32;
              local_a14 = 2;
              local_a10 = 0x6334;
              local_8fc = 2;
              piVar19 = local_a78;
              piVar15 = local_8f8;
              for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar15 = *piVar19;
                piVar19 = piVar19 + 1;
                piVar15 = piVar15 + 1;
              }
              local_764 = *(int *)&this_02->field_0x417;
              local_8f8[2] = local_b24 + 0xf + local_b14;
              local_8e4 = *(int *)&this_02->field_0x2f9;
              this_02->field_02ED = local_8f8[2];
              local_8f8[3] = *(int *)&pcVar31->field_0x12 + 0xf;
              local_890 = 0x6333;
              this_02->field_02F1 = local_8f8[3];
              local_8e8 = *(int *)&this_02->field_0x2f5;
              local_77c = 3;
              local_778 = 1;
              local_770 = 0;
              local_76c = (local_8e8 - local_764) / 2 + local_b24 + 0xf + local_b14;
              this_02->field_040F = local_76c;
              local_768 = *(int *)&pcVar31->field_0x12 + 0x1e + local_8e4;
              this_02->field_0413 = local_768;
              local_728 = this_02->field_0008;
              local_760 = ((*(int *)&pcVar31->field_0x1a - local_8e4) -
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
                         *(uint *)&pcVar31->field_0xe,*(uint *)&pcVar31->field_0x12);
              in_stack_ffffffdc = (uint *)0x5e2823;
              FUN_006b2800((int)DAT_008075a8,this_02->field_0484,*(uint *)&pcVar31->field_0x16,
                           *(uint *)&pcVar31->field_0x1a);
              FUN_006b3020((int)DAT_008075a8,this_02->field_0484,
                           *(uint *)((int)&pcVar31->field_0004 + 1));
              uVar27 = this_02->field_0484;
              Library::DKW::DDX::FUN_006b3430((int *)DAT_008075a8,uVar27);
              iVar5 = *(int *)((int)&pcVar31->field_0004 + 1);
              if (iVar5 < 1) {
                uVar14 = 0;
              }
              else {
                uVar14 = iVar5 - 1;
              }
              if (this_02->field_02D5 != 0xffffffff) {
                uVar27 = uVar14;
                FUN_006b3020(this_02->field_0319,this_02->field_02D5,uVar14);
              }
              *(uint *)&this_02->field_0x32e = uVar14;
              if (*(int *)(uVar27 + 5) < 1) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(int *)(uVar27 + 5) - 1;
              }
              if (this_02->field_0366 != 0xffffffff) {
                FUN_006b3020(this_02->field_03AA,this_02->field_0366,uVar14);
              }
              *(uint *)&this_02->field_0x3bf = uVar14;
              if (*(int *)(uVar27 + 5) < 1) {
                uVar27 = 0;
              }
              else {
                uVar27 = *(int *)(uVar27 + 5) - 1;
              }
              if (this_02->field_03F7 != 0xffffffff) {
                FUN_006b3020(this_02->field_043B,this_02->field_03F7,uVar27);
              }
              *(uint *)&this_02->field_0x450 = uVar27;
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
        cVar1 = puVar16[0xe];
        if (cVar1 == '\0') {
          iVar5 = this_02->field_064F;
        }
        else {
          iVar5 = this_02->field_0647;
        }
        uVar27 = *(uint *)(puVar16 + 0xf);
        if (uVar27 < *(uint *)(iVar5 + 0xc)) {
          if (cVar1 == '\0') {
            pAVar9 = (AnonShape_005E10A0_819783CC *)
                     (*(int *)(this_02->field_064F + 8) * uVar27 +
                     *(int *)(this_02->field_064F + 0x1c));
          }
          else {
            pAVar9 = (AnonShape_005E10A0_819783CC *)
                     (*(int *)(this_02->field_0647 + 8) * uVar27 +
                     *(int *)(this_02->field_0647 + 0x1c));
          }
        }
        else {
          pAVar9 = (AnonShape_005E10A0_819783CC *)0x0;
        }
        if (puVar16[0xd] == '\x01') {
          if (((pAVar9 == (AnonShape_005E10A0_819783CC *)0x0) || ((int)*(uint *)pAVar9 < 0)) ||
             (*(int *)&pAVar9->field_0x20 != *(int *)(puVar16 + 0x14))) {
            TTaskItemClose(this_02,pAVar9);
            if (*(int *)(puVar16 + 0x14) < (int)PTR_0080c4c7->field_0008) {
              pcVar10 = *(char **)(PTR_0080c4c7->field_0014 + *(int *)(puVar16 + 0x14) * 4);
            }
            else {
              pcVar10 = (char *)0x0;
            }
            if (pcVar10 != (char *)0x0) {
              puVar8 = local_13c;
              for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
              }
              *(undefined2 *)puVar8 = 0;
              if (puVar16[0xe] == '\0') {
                local_7c = local_7c & 0xffffff00;
                local_88 = (int *)((-(uint)(puVar16[9] != '\x01') & 0xfffffffe) + 2);
                do {
                  local_fc = *(int *)(puVar16 + 0x22);
                  iVar5 = *(int *)(puVar16 + 0x26);
                  iVar13 = 1;
                  puVar21 = (undefined4 *)(this_02->field_005D + 0x28);
                  uVar27 = FUN_006b4fe0(this_02->field_005D);
                  uVar14 = FUN_006b50c0(local_fc,iVar5,(uint)*(ushort *)(this_02->field_005D + 0xe),
                                        uVar27,puVar21,iVar13);
                  local_13c[(local_7c & 0xff) + 1] = uVar14;
                  uVar27 = *(uint *)(uVar14 + 0x14);
                  if (uVar27 == 0) {
                    uVar27 = ((uint)*(ushort *)(uVar14 + 0xe) * *(int *)(uVar14 + 4) + 0x1f >> 3 &
                             0x1ffffffc) * *(int *)(uVar14 + 8);
                  }
                  piVar19 = (int *)0x5e2d28;
                  puVar21 = (undefined4 *)FUN_006b4fa0(uVar14);
                  for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                    *puVar21 = 0xffffffff;
                    puVar21 = puVar21 + 1;
                  }
                  for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                    *(undefined1 *)puVar21 = 0xff;
                    puVar21 = (undefined4 *)((int)puVar21 + 1);
                  }
                  piVar15 = (int *)(uint)(byte)puVar16[0x19];
                  PrepareTSurf(this_02,*piVar19,puVar16[0x19],puVar16[0xb]);
                  if (puVar16[0x19] != '\0') {
                    local_110 = &this_02->field_0x91 + (uint)(puVar16[10] == '\x01') * 0x100;
                  }
                  ccFntTy::SetSurf(this_02->field_0089,*piVar15,0,0,0,0,0);
                  pAVar11 = (AnonShape_006B5570_4D68B99C *)
                            Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
                  Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar11,pcVar10);
                  local_80 = (AnonShape_006B5570_4D68B99C *)
                             ccFntTy::FormIndentSarr
                                       (this_02->field_0089,(uint *)pAVar11,
                                        s________________007c21d8,(uint *)&DAT_007c21ec,
                                        *(int *)(puVar16 + 0x22) + *(int *)(puVar16 + 0x2a) * -2,0,
                                        0xffffffff,(char *)0x0,1);
                  FUN_006b5570(pAVar11);
                  pAVar11 = local_80;
                  if (local_80 != (AnonShape_006B5570_4D68B99C *)0x0) {
                    piVar19 = local_88;
                    if ((char)local_7c != '\0') {
                      if ((char)local_7c == '\x01') {
                        piVar19 = (int *)((int)local_88 + 1);
                      }
                      else {
                        piVar19 = (int *)0x4;
                      }
                    }
                    ccFntTy::WrSarr(this_02->field_0089,(int)local_80,0,-1,*(int *)(puVar16 + 0x2a),
                                    *(int *)(puVar16 + 0x2e),piVar19);
                    FUN_006b5570(pAVar11);
                  }
                  bVar4 = (char)local_7c + 1;
                  local_7c = CONCAT31(local_7c._1_3_,bVar4);
                } while (bVar4 < 3);
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar16 + 5),0x403db4,
                             *(uint *)(puVar16 + 0x22),*(uint *)(puVar16 + 0x26),this_02->field_064F
                            );
                uVar27 = *(uint *)(puVar16 + 0xf);
                puVar8 = (uint *)this_02->field_064F;
              }
              else {
                local_106 = *(undefined4 *)(puVar16 + 9);
                iVar13 = 1;
                local_107 = puVar16[0x19];
                local_10c = puVar16[0x18];
                local_f8 = *(int *)(puVar16 + 0x22);
                iVar5 = *(int *)(puVar16 + 0x26);
                puVar21 = (undefined4 *)(this_02->field_005D + 0x28);
                local_f4 = (-(uint)(puVar16[9] != '\x01') & 0xfffffffe) + 2;
                uVar27 = FUN_006b4fe0(this_02->field_005D);
                local_13c[1] = FUN_006b50c0(local_f8,iVar5,
                                            (uint)*(ushort *)(this_02->field_005D + 0xe),uVar27,
                                            puVar21,iVar13);
                uVar14 = 0x5e2b09;
                puVar21 = (undefined4 *)FUN_006b4fa0(local_13c[1]);
                for (uVar27 = uVar14 >> 2; uVar27 != 0; uVar27 = uVar27 - 1) {
                  *puVar21 = 0xffffffff;
                  puVar21 = puVar21 + 1;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(undefined1 *)puVar21 = 0xff;
                  puVar21 = (undefined4 *)((int)puVar21 + 1);
                }
                if (puVar16[0x19] != '\0') {
                  local_110 = &this_02->field_0x91 + (uint)(local_106._1_1_ == '\x01') * 0x100;
                }
                ccFntTy::SetSurf(this_02->field_0089,local_13c[1],0,0,0,0,0);
                pAVar11 = (AnonShape_006B5570_4D68B99C *)
                          Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
                Library::DKW::TBL::FUN_006b5aa0((uint *)pAVar11,pcVar10);
                pAVar12 = (AnonShape_006B5570_4D68B99C *)
                          ccFntTy::FormIndentSarr
                                    (this_02->field_0089,(uint *)pAVar11,s________________007c21d8,
                                     (uint *)&DAT_007c21ec,
                                     *(int *)(puVar16 + 0x22) + *(int *)(puVar16 + 0x2a) * -2,0,
                                     0xffffffff,(char *)0x0,1);
                FUN_006b5570(pAVar11);
                if (pAVar12 != (AnonShape_006B5570_4D68B99C *)0x0) {
                  local_102 = (uint *)ccFntTy::_SarrToTxt(this_02->field_0089,(char *)0x0,
                                                          (int)pAVar12);
                  if (local_102 != (uint *)0x0) {
                    local_10b = (cTypingTy *)Library::MSVCRT::FUN_0072e530(0xb4);
                    if (local_10b == (cTypingTy *)0x0) {
                      local_10b = (cTypingTy *)0x0;
                    }
                    else {
                      local_10b->field_0058 = 0;
                      local_10b->field_0088 = 0;
                    }
                    local_128 = *(undefined4 *)(puVar16 + 0x2a);
                    local_124 = *(undefined4 *)(puVar16 + 0x2e);
                    uStackY_48 = 0x2c51;
                    local_46 = 0x5e;
                    local_120 = cTypingTy::TypingInit
                                          (local_10b,local_102,this_02->field_0089,0,0,0,
                                           *(int *)(puVar16 + 0x22) + *(int *)(puVar16 + 0x2a) * -2,
                                           *(int *)(puVar16 + 0x26) + *(int *)(puVar16 + 0x2e) * -2,
                                           0,0,local_f4,local_f4 + 1,4,0xff);
                    local_120 = local_120 + 1;
                  }
                  FUN_006b5570(pAVar12);
                }
                FUN_006b2330((uint)DAT_008075a8,local_13c,*(uint *)(puVar16 + 5),0x4041b0,
                             *(uint *)(puVar16 + 0x22),*(uint *)(puVar16 + 0x26),this_02->field_0647
                            );
                uVar27 = *(uint *)(puVar16 + 0xf);
                puVar8 = (uint *)this_02->field_0647;
              }
              Library::DKW::TBL::FUN_006ae140(puVar8,uVar27,local_13c);
              in_stack_ffffffdc = DAT_008075a8;
              Library::DKW::DDX::FUN_006b3640
                        ((int *)DAT_008075a8,local_13c[0],0,*(uint *)(puVar16 + 0x1a),
                         *(uint *)(puVar16 + 0x1e));
            }
          }
          else {
            if (cVar1 == '\0') {
              uVar27 = *(uint *)&pAVar9->field_0x10;
            }
            else {
              uVar27 = 0;
            }
            in_stack_ffffffdc = DAT_008075a8;
            Library::DKW::DDX::FUN_006b3730
                      (DAT_008075a8,*(uint *)pAVar9,uVar27,*(uint *)(puVar16 + 0x1a),
                       *(uint *)(puVar16 + 0x1e));
          }
        }
        else if ((pAVar9 != (AnonShape_005E10A0_819783CC *)0x0) && (-1 < *(int *)pAVar9)) {
          if (this_02->field_006D == '\x05') {
            TTaskItemClose(this_02,pAVar9);
          }
          else {
            if (cVar1 == '\0') {
              iVar5 = 1;
            }
            else {
              iVar5 = *(int *)&pAVar9->field_0x1c + -2;
            }
            *(int *)&pAVar9->field_0x10 = iVar5;
            *(undefined4 *)&pAVar9->field_0x28 = 2;
            *(undefined4 *)&pAVar9->field_0x24 = this_02->field_0069;
            FUN_006b35d0((int *)DAT_008075a8,*(uint *)pAVar9);
          }
        }
        break;
      case 6:
        if (this_02->field_006D != '\x05') {
          puVar8 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                     (this_02->field_0070,puVar16 + 0xd,0,(ushort *)0x0);
          if (puVar8 == (uint *)0x0) {
            in_stack_ffffffdc = (uint *)0x5e2f3a;
            puVar8 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                       (g_cMf32_00806798,puVar16 + 0xd,0,(ushort *)0x0);
            if (puVar8 == (uint *)0x0) break;
          }
          in_stack_ffffffdc = (uint *)0x5e2f24;
          thunk_FUN_0056a130(&g_sound,0,'\x03',-1,puVar8);
        }
        break;
      case 7:
        iVar5 = this_02->field_064B;
        if (*(uint *)(puVar16 + 0xe) < *(uint *)(iVar5 + 0xc)) {
          pSVar22 = (SpriteClassTy *)
                    (*(int *)(iVar5 + 8) * *(uint *)(puVar16 + 0xe) + *(int *)(iVar5 + 0x1c));
        }
        else {
          pSVar22 = (SpriteClassTy *)0x0;
        }
        if (puVar16[0xd] == '\x01') {
          SpriteClassTy::SpriteClassTy(&local_1dc);
          ppvVar32 = (LPVOID *)0x0;
          local_142 = (int *)0x0;
          local_94 = 1;
          local_2bc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2bc;
          iVar5 = Library::MSVCRT::__setjmp3(local_2bc.jumpBuffer,0,unaff_EDI,pSVar22);
          if (iVar5 == 0) {
            ppvVar33 = ppvVar32;
            if (pSVar22 != (SpriteClassTy *)0x0) {
              pbVar18 = &pSVar22->field_0065;
              if (pbVar18 != (undefined1 *)0x0) {
                pbVar17 = (byte *)((int)ppvVar32 + 0x12);
                do {
                  bVar4 = *pbVar18;
                  bVar28 = bVar4 < *pbVar17;
                  if (bVar4 != *pbVar17) {
LAB_005e2ffb:
                    iVar5 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
                    goto LAB_005e3000;
                  }
                  if (bVar4 == 0) break;
                  bVar4 = pbVar18[1];
                  bVar28 = bVar4 < pbVar17[1];
                  if (bVar4 != pbVar17[1]) goto LAB_005e2ffb;
                  pbVar18 = pbVar18 + 2;
                  pbVar17 = pbVar17 + 2;
                } while (bVar4 != 0);
                iVar5 = 0;
LAB_005e3000:
                if (iVar5 != 0) {
                  ppvVar33 = (LPVOID *)0x5e300e;
                  pSVar35 = pSVar22;
                  SpriteClassTy::CloseSprite(pSVar22);
                  pSVar3 = pSVar22 + 1;
                  ppvVar34 = (LPVOID *)((int)&pSVar22[1].field_0008 + 1);
                  pSVar22 = pSVar35;
                  if (*(int *)((int)&pSVar3->field_0008 + 1) != 0) {
                    FUN_006ab060(ppvVar34);
                    ppvVar33 = ppvVar34;
                    pSVar22 = pSVar35;
                  }
                  goto LAB_005e3030;
                }
              }
              local_94 = 0;
            }
LAB_005e3030:
            this_02 = local_8c;
            if (local_94 == 0) {
              if (pSVar22 == (SpriteClassTy *)0x0) {
                puVar21 = (undefined4 *)0x0;
              }
              else {
                puVar21 = &pSVar22->field_0004;
              }
              puVar26 = &local_1dc.field_0004;
              ppvVar32 = ppvVar33;
              for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar26 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar26 = puVar26 + 1;
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
              iVar5 = 0x20;
              do {
                *puVar16 = puVar16[(int)pSVar22 - (int)&local_1dc];
                puVar16 = puVar16 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              local_1dc.field_0085 = pSVar22->field_0085;
              local_1dc.field_0089 = pSVar22->field_0089;
              local_1dc.field_008D = pSVar22->field_008D;
            }
            else {
              SpriteClassTy::InitSprite
                        (&local_1dc,(int *)DAT_008075a8,*(uint *)((int)ppvVar32 + 5),'\x1e',
                         (undefined4 *)0x0,0,0);
              in_stack_ffffffdc = (uint *)0x1e;
              iVar5 = SpriteClassTy::SetImages
                                (&local_1dc,this_02->field_0070,CASE_1E,0,
                                 (char *)((int)ppvVar32 + 0x12),0xffffffff,0);
              if (iVar5 != 0) {
                in_stack_ffffffdc = (uint *)0x1e;
                SpriteClassTy::SetImages
                          (&local_1dc,g_cMf32_00806798,CASE_1E,0,(char *)((int)ppvVar32 + 0x12),
                           0xffffffff,1);
              }
            }
            local_1dc.field_001C = *(uint *)((int)ppvVar32 + 0x32);
            local_1dc.field_0020 = *(uint *)((int)ppvVar32 + 0x36);
            cVar1 = *(char *)((int)ppvVar32 + 0x4f);
            if (cVar1 == '\0') {
              local_14b = '\0';
              local_1dc.field_0008 = *(uint *)((int)ppvVar32 + 0x4a);
            }
            else if (cVar1 == '\x01') {
              local_1dc.field_0044 = this_02->field_0069;
              local_14b = (*(char *)((int)ppvVar32 + 0x4e) != '\0') + '\x01';
              local_1dc.field_0008 = *(uint *)((int)ppvVar32 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)ppvVar32 + 0x46);
            }
            else if (cVar1 == '\x02') {
              local_1dc.field_0044 = this_02->field_0069;
              local_14b = (*(char *)((int)ppvVar32 + 0x4e) != '\0') + '\x03';
              local_1dc.field_0008 = *(uint *)((int)ppvVar32 + 0x4a);
              local_1dc.field_0040 = *(undefined4 *)((int)ppvVar32 + 0x46);
              local_14a = 0;
              local_146 = *(int *)((int)ppvVar32 + 0x42);
              in_stack_ffffffdc = *(uint **)((int)ppvVar32 + 0x32);
              local_142 = FUN_006c81c0((int)in_stack_ffffffdc,*(int *)((int)ppvVar32 + 0x36),
                                       *(int *)((int)ppvVar32 + 0x3a),*(int *)((int)ppvVar32 + 0x3e)
                                       ,local_146);
              if (local_142 == (int *)0x0) {
                local_14b = (*(char *)((int)ppvVar32 + 0x4e) != '\0') + '\x01';
              }
            }
            if (local_1dc.field_0004 != 0xffffffff) {
              in_stack_ffffffdc = local_1dc.field_0048;
              Library::DKW::DDX::FUN_006b3730
                        (local_1dc.field_0048,local_1dc.field_0004,local_1dc.field_0008,
                         local_1dc.field_001C,local_1dc.field_0020);
            }
            Library::DKW::TBL::FUN_006ae140
                      ((uint *)this_02->field_064B,*(uint *)((int)ppvVar32 + 0xe),&local_1dc.vtable)
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
        else if (pSVar22 != (SpriteClassTy *)0x0) {
          SpriteClassTy::CloseSprite(pSVar22);
          if (*(int *)((int)&pSVar22[1].field_0008 + 1) != 0) {
            FUN_006ab060((LPVOID *)((int)&pSVar22[1].field_0008 + 1));
          }
        }
        break;
      case 8:
        puVar21 = local_e4;
        for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar21 = 0;
          puVar21 = puVar21 + 1;
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
        Library::DKW::TBL::FUN_006b11d0((uint *)this_02->field_0074,uVar14 + 1,local_e4);
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
        puVar21 = &this_02->field_005D;
        if (this_02->field_005D != 0) {
          this_00 = g_cMf32_00806780;
          if ((this_02->field_0080 != '\x01') &&
             (this_00 = g_cMf32_00806798, this_02->field_0080 != '\x02')) {
            this_00 = this_02->field_0070;
          }
          cMf32::RecMemFree(this_00,puVar21);
        }
        pbVar18 = puVar16 + 0xd;
        this_02->field_0080 = 0;
        iVar5 = FUN_0070a9f0(this_02->field_0070,(char *)pbVar18,0,0);
        *puVar21 = iVar5;
        if (iVar5 == 0) {
          iVar5 = FUN_0070a9f0(g_cMf32_00806798,(char *)pbVar18,0,0);
          *puVar21 = iVar5;
          if (iVar5 == 0) {
            iVar5 = 1;
            bVar4 = 0;
            text = FUN_006f2c00(s_TASK_BKG_007cda64,1,(uint)DAT_0080874e);
            uVar6 = FUN_0070a9f0(g_cMf32_00806780,text,bVar4,iVar5);
            *puVar21 = uVar6;
            this_02->field_0080 = 1;
          }
          else {
            puVar21 = (undefined4 *)local_78;
            for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
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
              bVar4 = *pbVar17;
              bVar28 = bVar4 < *pbVar23;
              if (bVar4 != *pbVar23) {
LAB_005e14be:
                iVar5 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
                goto LAB_005e14c3;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar17[1];
              bVar28 = bVar4 < pbVar23[1];
              if (bVar4 != pbVar23[1]) goto LAB_005e14be;
              pbVar17 = pbVar17 + 2;
              pbVar23 = pbVar23 + 2;
            } while (bVar4 != 0);
            iVar5 = 0;
LAB_005e14c3:
            pbVar17 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            pbVar23 = pbVar18;
            if (iVar5 == 0) {
              uVar27 = 0xffffffff;
              pcVar10 = &DAT_007cdc48;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf0;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              iVar5 = this_02->field_007C;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0
                        ((uint *)this_02->field_0074,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_WS_ANI2_007cdc38;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf1;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_WS_ANI3_007cdc28;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf2;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x40;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar27 = 0xffffffff;
              pcVar10 = &DAT_007cdc18;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = &DAT_007cdc08;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf4;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x208;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = &DAT_007cdbf8;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf5;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x2df;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              pbVar17 = PTR_s_DEFAULT_BO_ANIMATED_0079c228;
              pbVar23 = pbVar18;
            }
            do {
              bVar4 = *pbVar18;
              bVar28 = bVar4 < *pbVar17;
              if (bVar4 != *pbVar17) {
LAB_005e16bc:
                iVar5 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
                goto LAB_005e16c1;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar18[1];
              bVar28 = bVar4 < pbVar17[1];
              if (bVar4 != pbVar17[1]) goto LAB_005e16bc;
              pbVar18 = pbVar18 + 2;
              pbVar17 = pbVar17 + 2;
            } while (bVar4 != 0);
            iVar5 = 0;
LAB_005e16c1:
            pbVar18 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar5 == 0) {
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_BO_ANI1_007cdbe8;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf0;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              iVar5 = this_02->field_007C;
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_BO_ANI2_007cdbd8;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf1;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_BO_ANI3_007cdbc8;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf2;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0xb0;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_BO_ANI4_007cdbb8;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0xdc;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = &DAT_007cdba8;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf4;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x1ce;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = &DAT_007cdb98;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf5;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x2a9;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              local_6a = 0xf6;
              pcVar10 = &DAT_007cdb88;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_BO_ANI8_007cdb78;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf7;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x78;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              pbVar18 = PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar4 = *pbVar23;
              bVar28 = bVar4 < *pbVar18;
              if (bVar4 != *pbVar18) {
LAB_005e1958:
                iVar5 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
                goto LAB_005e195d;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar23[1];
              bVar28 = bVar4 < pbVar18[1];
              if (bVar4 != pbVar18[1]) goto LAB_005e1958;
              pbVar23 = pbVar23 + 2;
              pbVar18 = pbVar18 + 2;
            } while (bVar4 != 0);
            iVar5 = 0;
LAB_005e195d:
            if (iVar5 == 0) {
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_SI_ANI1_007cdb68;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf0;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              iVar5 = this_02->field_007C;
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x8e;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_SI_ANI2_007cdb58;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf1;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_SI_ANI3_007cdb48;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf2;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x103;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_SI_ANI4_007cdb38;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0xd7;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
              uVar27 = 0xffffffff;
              pcVar10 = s_DEF_SI_ANI5_007cdb28;
              do {
                pcVar24 = pcVar10;
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                pcVar24 = pcVar10 + 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar24;
              } while (cVar1 != '\0');
              uVar27 = ~uVar27;
              local_6a = 0xf4;
              iVar5 = this_02->field_007C;
              pcVar10 = pcVar24 + -uVar27;
              pcVar24 = local_66;
              for (uVar14 = uVar27 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar24 = pcVar24 + 4;
              }
              puVar8 = (uint *)this_02->field_0074;
              for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                *pcVar24 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar24 = pcVar24 + 1;
              }
              local_46 = 0x27c;
              Library::DKW::TBL::FUN_006b11d0(puVar8,iVar5 + 1,(undefined4 *)local_78);
            }
            this_02->field_0080 = 2;
          }
        }
        iVar5 = this_02->field_0074;
        if ((uint)this_02->field_007C < *(uint *)(iVar5 + 0xc)) {
          piVar19 = (int *)(*(int *)(iVar5 + 8) * this_02->field_007C + *(int *)(iVar5 + 0x1c));
        }
        else {
          piVar19 = (int *)0x0;
        }
        FUN_006bc360((ushort *)this_02->field_005D,local_1268,piVar19);
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
                                     (this_02->field_0070,(char *)((int)piVar19 + 0x2d),0,
                                      (ushort *)0x0);
          *(uint **)&this_02->field_0x85 = puVar8;
          if (puVar8 == (uint *)0x0) {
            puVar8 = (uint *)Library::Ourlib::MFWAV::mfWavLoad
                                       (g_cMf32_00806798,(char *)((int)piVar19 + 0x2d),0,
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
      uVar27 = *(uint *)(this_02->field_0074 + 0xc);
    } while (iVar5 < (int)uVar27);
  }
  if (this_02->field_007C == *(int *)(this_02->field_0074 + 0xc)) {
    if ((this_02->field_006D == '\x05') && (iVar5 = this_02->field_064B, iVar5 != 0)) {
      uVar27 = 0;
      if (*(int *)(iVar5 + 0xc) != 0) {
        if (*(int *)(iVar5 + 0xc) == 0) {
          pSVar22 = (SpriteClassTy *)0x0;
          goto LAB_005e34e0;
        }
        do {
          pSVar22 = (SpriteClassTy *)(*(int *)(iVar5 + 8) * uVar27 + *(int *)(iVar5 + 0x1c));
LAB_005e34e0:
          if ((pSVar22->field_0004 != -1) &&
             ((*(char *)&pSVar22[1].vtable == '\x01' || (*(char *)&pSVar22[1].vtable == '\x03')))) {
            SpriteClassTy::CloseSprite(pSVar22);
            if (*(int *)((int)&pSVar22[1].field_0008 + 1) != 0) {
              FUN_006ab060((LPVOID *)((int)&pSVar22[1].field_0008 + 1));
            }
          }
          iVar5 = this_02->field_064B;
          uVar27 = uVar27 + 1;
        } while (uVar27 < *(uint *)(iVar5 + 0xc));
      }
    }
    this_02->field_006D = 1;
  }
  g_currentExceptionFrame = local_278.previous;
  return;
}


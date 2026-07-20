
/* WARNING: Removing unreachable block (ram,0x005a58e7) */
/* WARNING: Removing unreachable block (ram,0x005a5b40) */
/* WARNING: Removing unreachable block (ram,0x005a5f43) */
/* WARNING: Removing unreachable block (ram,0x005a5d46) */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::GetMessage */

undefined4 __thiscall FSGSTy::GetMessage(FSGSTy *this,int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  FSGSTy_field_1A5FState FVar3;
  ushort uVar4;
  ccFntTy *pcVar5;
  StartSystemTy *pSVar6;
  LPCSTR pCVar7;
  LPCSTR pCVar8;
  LPCSTR pCVar9;
  int *piVar10;
  code *pcVar11;
  DWORD DVar12;
  int iVar13;
  UINT UVar14;
  undefined4 *puVar15;
  uint *puVar16;
  char *pcVar17;
  undefined4 uVar18;
  ulong uVar19;
  LPCSTR pCVar20;
  HINSTANCE pHVar21;
  undefined3 extraout_var;
  undefined4 uVar22;
  uint uVar23;
  MMsgTy *pMVar24;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar25;
  byte bVar26;
  FSGSTy *this_00;
  undefined4 unaff_ESI;
  uint uVar27;
  byte *pbVar28;
  CursorClassTy *pCVar29;
  byte *pbVar30;
  void *unaff_EDI;
  char *pcVar31;
  uint *puVar32;
  LPCSTR pCVar33;
  char *pcVar34;
  AnonShape_005A4350_59BACD18 *pAVar35;
  bool bVar36;
  BITMAPINFO *pBVar37;
  int iVar38;
  DWORD DVar39;
  int iVar40;
  int iVar41;
  char local_6b8 [32];
  undefined1 local_698;
  CHAR local_4b8 [260];
  InternalExceptionFrame local_3b4;
  undefined4 local_370 [7];
  undefined4 local_354 [7];
  undefined4 local_338 [7];
  undefined4 local_31c [7];
  undefined4 local_300 [7];
  undefined4 local_2e4 [7];
  undefined4 local_2c8 [7];
  undefined4 local_2ac [7];
  InternalExceptionFrame local_290;
  undefined4 local_24c [4];
  undefined4 local_23c;
  uint local_238;
  undefined4 local_22c [4];
  InternalExceptionFrame local_21c;
  undefined4 local_1d8 [2];
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined4 local_1bc [4];
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_19c [8];
  undefined4 local_17c [2];
  undefined2 local_172;
  undefined2 local_170;
  undefined4 local_160 [8];
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  char *local_130;
  undefined *local_12c;
  undefined *local_128;
  undefined4 local_124;
  char *local_120;
  char *local_11c;
  char *local_118;
  char *local_114;
  char *local_110;
  char *local_10c;
  char *local_108;
  char *local_104;
  char *local_100;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  undefined *local_ec;
  undefined *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  FSGSTy *local_20;
  AnonShape_005A4350_59BACD18 *local_1c;
  char local_15;
  tagBITMAPINFO *local_14;
  uint *local_10;
  AnonShape_005A4350_59BACD18 *local_c;
  uint *local_8;
  
  local_20 = this;
  DVar12 = FUN_006e51b0(this->field_0010);
  pcVar31 = (char *)0x0;
  this->field_0061 = DVar12;
  local_21c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_21c;
  iVar13 = Library::MSVCRT::__setjmp3(local_21c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar13 != 0) {
    g_currentExceptionFrame = local_21c.previous;
    iVar38 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048,0,iVar13,
                                &DAT_007a4ccc,s_FSGSTy__GetMessage_007cc5d8);
    if (iVar38 != 0) {
      pcVar11 = (code *)swi(3);
      uVar22 = (*pcVar11)();
      return uVar22;
    }
    RaiseInternalException(iVar13,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_20,(int)param_1);
  pCVar29 = PTR_00802a30;
  uVar27 = param_1[4];
  if (0x6949 < uVar27) {
    if (uVar27 < 0x6980) {
      if (uVar27 == 0x697f) {
        iVar13 = param_1[7];
        local_60 = *(int *)(iVar13 + 0x24) + -0xb4;
        local_58 = *(int *)(iVar13 + 0x2c);
        local_54 = *(int *)(iVar13 + 0x30);
        uVar27 = *(int *)(iVar13 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
        local_5c = uVar27;
        FUN_006b4170(this_00->field_1AC0,0,*(int *)(iVar13 + 0x24) + -0xb5,uVar27,local_58 + 2,
                     local_54,0xff);
        ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,local_60,uVar27,local_58,local_54
                        );
        if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)param_1[5],0,-1,0);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar13 = (uint)*(ushort *)(param_1 + 6) + local_60;
          FUN_006b5b10(this_00->field_1AC0,0,iVar13,uVar27 + 1,iVar13,local_54 + -2 + uVar27,9,0xd);
        }
        FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
        goto cf_common_exit_005A8CA7;
      }
      switch(uVar27) {
      case 0x694a:
      case 0x694e:
        (**(code **)(this_00->field_0000 + 8))();
        this_00->field_1A61 = (param_1[4] != 0x694a) + '\a';
        pSVar6 = this_00->field_1A5B;
        if (pSVar6->field_02E6 == (MMsgTy *)0x0) break;
        puVar15 = local_31c;
        for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar15 = 0xffffffff;
          puVar15 = puVar15 + 1;
        }
        *(undefined2 *)puVar15 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        MMsgTy::StatePanel(pSVar6->field_02E6,(int)local_31c);
        puVar15 = &local_a0;
        goto cf_common_exit_005A7F3B;
      case 0x694b:
        if (this_00->field_1A5F == CASE_2) {
          (**(code **)(this_00->field_0000 + 8))();
          this_00->field_1A61 = 5;
          if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_90 = 0x10101;
            thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_90);
          }
        }
        else if (this_00->field_1A5F == CASE_5) {
          if (0 < *(int *)(this_00->field_1AF4 + 8)) {
            pcVar31 = (char *)**(undefined4 **)(this_00->field_1AF4 + 0x14);
          }
          iVar13 = -1;
          do {
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar31 + 1;
          } while (cVar2 != '\0');
          if (iVar13 == -2) {
            pMVar24 = this_00->field_1A5B->field_02E6;
            if (pMVar24 != (MMsgTy *)0x0) {
              MMsgTy::SetMessage(pMVar24,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                 (undefined4 *)0x0,0,0);
            }
          }
          else {
            puVar15 = local_1d8;
            for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar15 = 0xffffffff;
              puVar15 = puVar15 + 1;
            }
            *(undefined2 *)puVar15 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            pMVar24 = this_00->field_1A5B->field_02E6;
            if (pMVar24 != (MMsgTy *)0x0) {
              MMsgTy::StatePanel(pMVar24,(int)local_1d8);
            }
            pCVar29 = PTR_00802a30;
            if (PTR_00802a30 != (CursorClassTy *)0x0) {
              uVar22 = PTR_00802a30->field_00C9;
              uVar18 = PTR_00802a30->field_00C5;
              PTR_00802a30->field_0493 = 5;
              pCVar29->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
              CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
              pCVar29->field_0xd2 = 0;
              *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
            }
            if (*(int *)(this_00->field_1AF4 + 8) < 1) {
              pcVar31 = (char *)0x0;
            }
            else {
              pcVar31 = (char *)**(undefined4 **)(this_00->field_1AF4 + 0x14);
            }
            if (*(int *)(this_00->field_1AEC + 8) < 1) {
              pcVar17 = (char *)0x0;
            }
            else {
              pcVar17 = (char *)**(undefined4 **)(this_00->field_1AEC + 0x14);
            }
            if (*(int *)(this_00->field_1AE8 + 8) < 1) {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,(char *)0x0,pcVar17,pcVar31);
            }
            else {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,
                         (char *)**(undefined4 **)(this_00->field_1AE8 + 0x14),pcVar17,pcVar31);
            }
          }
        }
        break;
      case 0x694c:
        if ((this_00->field_1AAB != (LPCSTR)0x0) &&
           (pHVar21 = ShellExecuteA(HWND_00856d78,&DAT_007cc624,this_00->field_1AAB,(LPCSTR)0x0,
                                    (LPCSTR)0x0,1), 0x20 < (int)pHVar21)) {
          CFsgsConnection::BannerClick((CFsgsConnection *)&DAT_00802a90,this_00->field_1AAF);
        }
        break;
      case 0x6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(this_00->field_1A5F) {
        case CASE_6:
          local_30 = 0x10000;
        case CASE_3:
          local_30 = CONCAT31(local_30._1_3_,1);
        case CASE_5:
          local_30._0_2_ = CONCAT11(1,(undefined1)local_30);
        case CASE_4:
          local_2c = 0x10100;
          this_00->field_1A61 = 2;
          break;
        case CASE_7:
        case CASE_8:
          local_30 = 0x100;
        case CASE_9:
          this_00->field_1A61 = 6;
          break;
        case CASE_A:
          pbVar28 = (byte *)this_00->field_1B0C;
          if (pbVar28 != (byte *)0x0) {
            pbVar30 = &DAT_00807e1d;
            do {
              bVar26 = *pbVar28;
              bVar36 = bVar26 < *pbVar30;
              if (bVar26 != *pbVar30) {
LAB_005a63e7:
                iVar13 = (1 - (uint)bVar36) - (uint)(bVar36 != 0);
                goto LAB_005a63ec;
              }
              if (bVar26 == 0) break;
              bVar26 = pbVar28[1];
              bVar36 = bVar26 < pbVar30[1];
              if (bVar26 != pbVar30[1]) goto LAB_005a63e7;
              pbVar28 = pbVar28 + 2;
              pbVar30 = pbVar30 + 2;
            } while (bVar26 != 0);
            iVar13 = 0;
LAB_005a63ec:
            if (iVar13 == 0) {
              if (*(int *)(this_00->field_1B00 + 8) < 1) {
                pcVar31 = (char *)0x0;
              }
              else {
                pcVar31 = (char *)**(undefined4 **)(this_00->field_1B00 + 0x14);
              }
              if (*(int *)(this_00->field_1AFC + 8) < 1) {
                pcVar17 = (char *)0x0;
              }
              else {
                pcVar17 = (char *)**(undefined4 **)(this_00->field_1AFC + 0x14);
              }
              if (*(int *)(this_00->field_1AF8 + 8) < 1) {
                pbVar28 = (byte *)0x0;
              }
              else {
                pbVar28 = (byte *)**(undefined4 **)(this_00->field_1AF8 + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar28,pcVar17,pcVar31,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              local_e4 = DAT_008030d4;
              local_110 = s_Profile_Age_007cc1a8;
              local_f0 = &DAT_00802ad4;
              local_10c = s_Profile_Sex_007cc198;
              local_ec = &DAT_00802cd4;
              local_108 = s_Profile_Location_007cc184;
              local_e8 = &DAT_00802ed4;
              local_104 = s_Profile_Description_007cc16c;
              CFsgsConnection::UpdateInfo((CFsgsConnection *)&DAT_00802a90,4,&local_110,&local_f0);
            }
          }
          this_00->field_1A61 = this_00->field_1ED2;
        }
        (**(code **)(this_00->field_0000 + 8))();
        pSVar6 = this_00->field_1A5B;
        if (pSVar6->field_02E6 != (MMsgTy *)0x0) {
          puVar15 = local_2e4;
          for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
            *puVar15 = 0xffffffff;
            puVar15 = puVar15 + 1;
          }
          *(undefined2 *)puVar15 = 0xffff;
          MMsgTy::StatePanel(pSVar6->field_02E6,(int)local_2e4);
          thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_30);
        }
        break;
      case 0x6953:
        puVar15 = local_17c;
        for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar15 = 0xffffffff;
          puVar15 = puVar15 + 1;
        }
        *(undefined2 *)puVar15 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if (*(int *)(this_00->field_1AE8 + 8) < 1) {
          pcVar31 = (char *)0x0;
        }
        else {
          pcVar31 = (char *)**(undefined4 **)(this_00->field_1AE8 + 0x14);
        }
        Library::MSVCRT::_strncpy(&DAT_00807e1d,pcVar31,0x40);
        DAT_00807e5c = 0;
        if (*(int *)(this_00->field_1AEC + 8) < 1) {
          pcVar31 = (char *)0x0;
        }
        else {
          pcVar31 = (char *)**(undefined4 **)(this_00->field_1AEC + 0x14);
        }
        uVar27 = 0xffffffff;
        do {
          pcVar17 = pcVar31;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar17 = pcVar31 + 1;
          cVar2 = *pcVar31;
          pcVar31 = pcVar17;
        } while (cVar2 != '\0');
        uVar27 = ~uVar27;
        pcVar31 = pcVar17 + -uVar27;
        pcVar17 = (char *)&DAT_00807e5d;
        for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
          pcVar31 = pcVar31 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
          *pcVar17 = *pcVar31;
          pcVar31 = pcVar31 + 1;
          pcVar17 = pcVar17 + 1;
        }
        iVar13 = -1;
        pcVar31 = (char *)&DAT_00807e5d;
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          cVar2 = *pcVar31;
          pcVar31 = pcVar31 + 1;
        } while (cVar2 != '\0');
        if (iVar13 == -2) {
          pMVar24 = this_00->field_1A5B->field_02E6;
          if (pMVar24 != (MMsgTy *)0x0) {
            MMsgTy::SetMessage(pMVar24,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                               (undefined4 *)0x0,0,0);
          }
          break;
        }
        if (this_00->field_1A5F != CASE_2) {
          if (this_00->field_1A5F == CASE_4) {
            if (*(int *)(this_00->field_1AF0 + 8) < 1) {
              pbVar28 = (byte *)0x0;
            }
            else {
              pbVar28 = (byte *)**(undefined4 **)(this_00->field_1AF0 + 0x14);
            }
            pbVar30 = (byte *)&DAT_00807e5d;
            do {
              bVar26 = *pbVar30;
              bVar36 = bVar26 < *pbVar28;
              if (bVar26 != *pbVar28) {
LAB_005a6653:
                iVar13 = (1 - (uint)bVar36) - (uint)(bVar36 != 0);
                goto LAB_005a6658;
              }
              if (bVar26 == 0) break;
              bVar26 = pbVar30[1];
              bVar36 = bVar26 < pbVar28[1];
              if (bVar26 != pbVar28[1]) goto LAB_005a6653;
              pbVar30 = pbVar30 + 2;
              pbVar28 = pbVar28 + 2;
            } while (bVar26 != 0);
            iVar13 = 0;
LAB_005a6658:
            if (iVar13 == 0) {
              pMVar24 = this_00->field_1A5B->field_02E6;
              if (pMVar24 != (MMsgTy *)0x0) {
                MMsgTy::StatePanel(pMVar24,(int)local_17c);
              }
              pCVar29 = PTR_00802a30;
              if (PTR_00802a30 != (CursorClassTy *)0x0) {
                uVar22 = PTR_00802a30->field_00C9;
                uVar18 = PTR_00802a30->field_00C5;
                PTR_00802a30->field_0493 = 5;
                pCVar29->field_0494 = 0xffff;
                CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
                CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
                pCVar29->field_0xd2 = 0;
                *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
              }
              if (*(int *)(this_00->field_1B00 + 8) < 1) {
                pcVar31 = (char *)0x0;
              }
              else {
                pcVar31 = (char *)**(undefined4 **)(this_00->field_1B00 + 0x14);
              }
              if (*(int *)(this_00->field_1AFC + 8) < 1) {
                pcVar17 = (char *)0x0;
              }
              else {
                pcVar17 = (char *)**(undefined4 **)(this_00->field_1AFC + 0x14);
              }
              if (*(int *)(this_00->field_1AF8 + 8) < 1) {
                pbVar28 = (byte *)0x0;
              }
              else {
                pbVar28 = (byte *)**(undefined4 **)(this_00->field_1AF8 + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar28,pcVar17,pcVar31,
                                 (AnonShape_0055C320_953077EC *)this_00->field_1B04);
              CFsgsConnection::CreateNewAccount
                        ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
            }
            else {
              pMVar24 = this_00->field_1A5B->field_02E6;
              if (pMVar24 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar24,0x258a,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
          }
          break;
        }
        pMVar24 = this_00->field_1A5B->field_02E6;
        if (pMVar24 != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(pMVar24,(int)local_17c);
        }
        pCVar29 = PTR_00802a30;
        if (PTR_00802a30 != (CursorClassTy *)0x0) {
          uVar22 = PTR_00802a30->field_00C9;
          uVar18 = PTR_00802a30->field_00C5;
          PTR_00802a30->field_0493 = 5;
          pCVar29->field_0494 = 0xffff;
          CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
          CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
          pCVar29->field_0xd2 = 0;
          *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
        }
LAB_005a67e1:
        uVar19 = CFsgsConnection::Login
                           ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
        if (uVar19 == 0) {
          DVar12 = GetLastError();
          thunk_FUN_0055beb0(&DAT_00802a90,DVar12);
        }
        DAT_00802a9a = 0;
        break;
      case 0x6954:
        (**(code **)(this_00->field_0000 + 8))();
        this_00->field_1A61 = 4;
        if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_c0 = 0x10101;
          thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_c0);
        }
        break;
      case 0x6955:
        pCVar7 = (LPCSTR)this_00->field_1AB7;
        pCVar20 = (LPCSTR)0x0;
        pCVar33 = (LPCSTR)0x0;
        if (pCVar7 != (LPCSTR)0x0) {
          if (param_1[5] == 0) {
            switch(this_00->field_1A5F) {
            case CASE_2:
            case CASE_6:
            case CASE_7:
              goto switchD_005a6a92_caseD_2;
            case CASE_4:
              pCVar33 = (LPCSTR)this_00->field_1AC4;
              if (pCVar7 == pCVar33) {
                pCVar20 = pCVar33;
                pCVar33 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar7 == (LPCSTR)this_00->field_1AC8) {
                pCVar20 = (LPCSTR)this_00->field_1AC8;
                pCVar33 = (LPCSTR)this_00->field_1ACC;
              }
              else if (pCVar7 == (LPCSTR)this_00->field_1ACC) {
                pCVar20 = (LPCSTR)this_00->field_1ACC;
                pCVar33 = (LPCSTR)this_00->field_1AD8;
              }
              else if (pCVar7 == (LPCSTR)this_00->field_1AD8) {
                pCVar20 = (LPCSTR)this_00->field_1AD8;
                pCVar33 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar7 == (LPCSTR)this_00->field_1ADC) {
                pCVar20 = (LPCSTR)this_00->field_1ADC;
                pCVar33 = (LPCSTR)this_00->field_1AE0;
              }
              else {
                if (pCVar7 != (LPCSTR)this_00->field_1AE0) goto LAB_005a6cc4;
                pCVar20 = (LPCSTR)this_00->field_1AE0;
                pCVar33 = this_00->field_1AE4;
              }
              break;
            case CASE_5:
              pCVar33 = (LPCSTR)this_00->field_1AC4;
              if (pCVar7 == pCVar33) {
                pCVar20 = pCVar33;
                pCVar33 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar7 == (LPCSTR)this_00->field_1AC8) {
                pCVar20 = (LPCSTR)this_00->field_1AC8;
                pCVar33 = (LPCSTR)this_00->field_1AD4;
              }
              else if (pCVar7 == (LPCSTR)this_00->field_1AD4) {
                pCVar20 = (LPCSTR)this_00->field_1AD4;
                pCVar33 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar20 = (LPCSTR)this_00->field_1ACC;
              }
              break;
            case CASE_A:
              pCVar33 = (LPCSTR)this_00->field_1AD8;
              if (pCVar7 == pCVar33) {
                pCVar20 = pCVar33;
                pCVar33 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar7 == (LPCSTR)this_00->field_1ADC) {
                pCVar20 = (LPCSTR)this_00->field_1ADC;
                pCVar33 = (LPCSTR)this_00->field_1AE0;
              }
              else if (pCVar7 == (LPCSTR)this_00->field_1AE0) {
                pCVar20 = (LPCSTR)this_00->field_1AE0;
                pCVar33 = this_00->field_1AE4;
              }
              else {
LAB_005a6cc4:
                pCVar20 = this_00->field_1AE4;
              }
            }
          }
          else {
            switch(this_00->field_1A5F) {
            case CASE_2:
            case CASE_6:
            case CASE_7:
switchD_005a6a92_caseD_2:
              pCVar33 = (LPCSTR)this_00->field_1AC4;
              if (pCVar7 == pCVar33) {
                pCVar20 = pCVar33;
                pCVar33 = (LPCSTR)this_00->field_1AC8;
              }
              else {
                pCVar20 = (LPCSTR)this_00->field_1AC8;
              }
              break;
            case CASE_4:
              pCVar33 = (LPCSTR)this_00->field_1AC4;
              if (pCVar7 == pCVar33) {
                pCVar20 = pCVar33;
                pCVar33 = this_00->field_1AE4;
              }
              else {
                pCVar8 = (LPCSTR)this_00->field_1AC8;
                pCVar20 = pCVar8;
                if (((pCVar7 != pCVar8) &&
                    (pCVar9 = (LPCSTR)this_00->field_1ACC, pCVar20 = pCVar9, pCVar33 = pCVar8,
                    pCVar7 != pCVar9)) &&
                   (pCVar8 = (LPCSTR)this_00->field_1AD8, pCVar20 = pCVar8, pCVar33 = pCVar9,
                   pCVar7 != pCVar8)) {
                  pCVar9 = (LPCSTR)this_00->field_1ADC;
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case CASE_5:
              pCVar33 = (LPCSTR)this_00->field_1AC4;
              if (pCVar7 == pCVar33) {
                pCVar20 = pCVar33;
                pCVar33 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar8 = (LPCSTR)this_00->field_1AC8;
                pCVar20 = pCVar8;
                if ((pCVar7 != pCVar8) &&
                   (pCVar9 = (LPCSTR)this_00->field_1AD4, pCVar20 = pCVar9, pCVar33 = pCVar8,
                   pCVar7 != pCVar9)) {
                  pCVar20 = (LPCSTR)this_00->field_1ACC;
                  pCVar33 = pCVar9;
                }
              }
              break;
            case CASE_A:
              pCVar8 = (LPCSTR)this_00->field_1AD8;
              if (pCVar7 == pCVar8) {
                pCVar20 = pCVar8;
                pCVar33 = this_00->field_1AE4;
              }
              else {
                pCVar9 = (LPCSTR)this_00->field_1ADC;
joined_r0x005a6ba3:
                pCVar20 = pCVar9;
                pCVar33 = pCVar8;
                if ((pCVar7 != pCVar9) &&
                   (pCVar8 = (LPCSTR)this_00->field_1AE0, pCVar20 = pCVar8, pCVar33 = pCVar9,
                   pCVar7 != pCVar8)) {
                  pCVar20 = this_00->field_1AE4;
                  pCVar33 = pCVar8;
                }
              }
            }
          }
        }
        this_00->field_002D = 0x20;
        if (pCVar20 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 0;
          FUN_006e6080(this_00,2,pCVar20,(undefined4 *)&this_00->field_0x1d);
        }
        if (pCVar33 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 1;
          FUN_006e6080(this_00,2,pCVar33,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x6956:
        this_00->field_1ED2 = 1;
LAB_005a6d57:
        DoLogon(this_00);
        break;
      case 0x6957:
        iVar13 = this_00->field_1AC0;
        uVar27 = *(uint *)(iVar13 + 0x14);
        if (uVar27 == 0) {
          uVar27 = ((uint)*(ushort *)(iVar13 + 0xe) * *(int *)(iVar13 + 4) + 0x1f >> 3 & 0x1ffffffc)
                   * *(int *)(iVar13 + 8);
        }
        puVar15 = (undefined4 *)FUN_006b4fa0(iVar13);
        for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
          *puVar15 = 0xffffffff;
          puVar15 = puVar15 + 1;
        }
        for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
          *(undefined1 *)puVar15 = 0xff;
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
        iVar41 = -1;
        iVar40 = -1;
        uVar27 = 2;
        iVar38 = -1;
        iVar13 = -2;
        puVar16 = (uint *)FUN_006b0140(0x25be,HINSTANCE_00807618);
        ccFntTy::WrTxt(this_00->field_1A73,puVar16,iVar13,iVar38,uVar27,iVar40,iVar41);
        FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        wsprintfA(local_4b8,s_subtitans__s_007cc614,&DAT_0080f126);
        CFsgsConnection::DownloadFile
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar29 = PTR_00802a30;
        if (PTR_00802a30 != (CursorClassTy *)0x0) {
          PTR_00802a30->field_0493 = 5;
          pCVar29->field_0494 = 0xffff;
          CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
          CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
          pCVar29->field_0xd2 = 0;
          *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (0x8160 < uVar27) {
      if (uVar27 < 0xc0a2) {
        if (uVar27 == 0xc0a1) {
          if ((this_00->field_1A6B != 0) && (this_00->field_1B10 != 0)) {
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 1;
            FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
          }
          goto cf_common_exit_005A8CA7;
        }
        switch(uVar27) {
        case 0x8161:
          if ((this_00->field_1E8E == 0) || (this_00->field_1E9A == 0)) break;
          pAVar35 = (AnonShape_005A4350_59BACD18 *)param_1[7];
          local_1c = pAVar35;
          FUN_006b5f80(DAT_008075a8,*(int *)&pAVar35->field_0x24,
                       (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)&pAVar35->field_0x28,
                       pAVar35->field_002C,0x11);
          if (this_00->field_1A5F == CASE_6) {
            iVar13 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)&pAVar35->field_0x28;
            PutDDXClip(*(int *)&pAVar35->field_0x24,iVar13,*(int *)&pAVar35->field_0x24 + -0x1e9,
                       iVar13 + -0x5e,pAVar35->field_002C,(byte *)0x11,'\x01',
                       (BITMAPINFO *)this_00->field_1E9A);
            FUN_006b4170(this_00->field_1E8E,0,0,0,pAVar35->field_002C,0x11,0xff);
            if (this_00->field_1A60 == '\0') {
              iVar13 = this_00->field_1EA6;
              if (iVar13 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar13 + 0xc)) {
                  local_8 = (uint *)(*(int *)(iVar13 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar13 + 0x1c));
                }
                else {
                  local_8 = (uint *)0x0;
                }
                if (local_8 != (uint *)0x0) {
                  ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                   pAVar35->field_002C + -0x46,0x11);
                  if (*(char *)((int)local_8 + 0x2d) == '\0') {
                    local_c = (AnonShape_005A4350_59BACD18 *)
                              thunk_FUN_0055c050(&DAT_00802a90,(int)local_8);
                    DibPut((undefined4 *)this_00->field_1E8E,3,1,'\x01',(byte *)local_c);
                    if (local_c != (AnonShape_005A4350_59BACD18 *)0x0) {
                      FUN_006ab060(&local_c);
                    }
                    ccFntTy::WrStr(this_00->field_1A73,local_8,0,-1,
                                   (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2)
                    ;
                    if ((*(byte *)((int)local_8 + 0x25) & 0x10) != 0) {
                      iVar13 = FUN_0070b3a0(this_00->field_1A8B,3);
                      FUN_006b5440(this_00->field_1E8E,0,pAVar35->field_002C + -0x1d,
                                   (0x11 - *(int *)(iVar13 + 8)) / 2,iVar13,0,0xff);
                    }
                  }
                  else {
                    pbVar28 = (byte *)FUN_0070b3a0(this_00->field_1A87,1);
                    DibPut((undefined4 *)this_00->field_1E8E,3,(0x11 - *(int *)(pbVar28 + 8)) / 2,
                           '\x06',pbVar28);
                    iVar13 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                    iVar40 = -1;
                    iVar38 = 0;
                    puVar16 = (uint *)FUN_006b0140(0x2567,HINSTANCE_00807618);
                    ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar38,iVar40,iVar13);
                  }
                }
              }
            }
            else {
              iVar13 = this_00->field_1EAA;
              if (iVar13 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar13 + 0xc)) {
                  local_c = (AnonShape_005A4350_59BACD18 *)
                            (*(int *)(iVar13 + 8) * (uint)*(ushort *)(param_1 + 5) +
                            *(int *)(iVar13 + 0x1c));
                }
                else {
                  local_c = (AnonShape_005A4350_59BACD18 *)0x0;
                }
                if (local_c != (AnonShape_005A4350_59BACD18 *)0x0) {
                  uVar27 = *(uint *)(local_c + 2);
                  if ((uVar27 & 0x40) == 0) {
                    if ((uVar27 & 0x18) == 0) {
                      local_10 = (uint *)(CONCAT31(local_10._1_3_,-((uVar27 & 2) != 0)) & 0xffffff05
                                         );
                    }
                    else {
                      local_10 = (uint *)CONCAT31(local_10._1_3_,3);
                    }
                  }
                  else {
                    local_10 = (uint *)CONCAT31(local_10._1_3_,4);
                  }
                  pbVar28 = (byte *)FUN_0070b3a0(this_00->field_1A87,(uint)local_10 & 0xff);
                  DibPut((undefined4 *)this_00->field_1E8E,3,(0x11 - *(int *)(pbVar28 + 8)) / 2,
                         '\x06',pbVar28);
                  ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                   pAVar35->field_002C + -0x46,0x11);
                  iVar13 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                  wsprintfA((LPSTR)&DAT_0080f33a,s___d_s___0_d__d__007cc5f8,iVar13,local_c,
                            *(undefined4 *)&local_c[2].field_0x4,iVar13);
                  ccFntTy::WrStr(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar13 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)&pAVar35->field_0x28;
            PutDDXClip(*(int *)&pAVar35->field_0x24,iVar13,*(int *)&pAVar35->field_0x24 + -0x13,
                       iVar13 + -0x5e,pAVar35->field_002C,(byte *)0x11,'\x01',
                       (BITMAPINFO *)this_00->field_1E9A);
            FUN_006b4170(this_00->field_1E8E,0,0,0,pAVar35->field_002C,0x11,0xff);
            iVar13 = this_00->field_1EBE;
            if (iVar13 != 0) {
              if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar13 + 0xc)) {
                local_10 = (uint *)(*(int *)(iVar13 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                   *(int *)(iVar13 + 0x1c));
              }
              else {
                local_10 = (uint *)0x0;
              }
              if (local_10 != (uint *)0x0) {
                iVar13 = -1;
                puVar16 = local_10 + 0x13;
                do {
                  if (iVar13 == 0) break;
                  iVar13 = iVar13 + -1;
                  uVar27 = *puVar16;
                  puVar16 = (uint *)((int)puVar16 + 1);
                } while ((char)uVar27 != '\0');
                pbVar28 = (byte *)FUN_0070b3a0(this_00->field_1A87,-(uint)(iVar13 != -2) & 4);
                DibPut((undefined4 *)this_00->field_1E8E,3,(0x11 - *(int *)(pbVar28 + 8)) / 2,'\x06'
                       ,pbVar28);
                ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                 local_1c->field_002C + -0x40,0x11);
                ccFntTy::WrStr(this_00->field_1A73,local_10 + 0xb,0,-1,
                               (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2);
                pAVar35 = local_1c;
              }
            }
          }
          DVar39 = pAVar35->field_002C;
          pBVar37 = (BITMAPINFO *)this_00->field_1E8E;
          DVar12 = 0x11;
          iVar13 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)&pAVar35->field_0x28;
          goto LAB_005a89f6;
        case 0x8162:
          if ((PTR_00802a30 != (CursorClassTy *)0x0) && (PTR_00802a30->field_0493 == '\x05')) break;
          if (this_00->field_1A60 != '\0') {
            iVar13 = this_00->field_1EAA;
            if (iVar13 != 0) {
              if ((uint)param_1[5] < *(uint *)(iVar13 + 0xc)) {
                pcVar31 = (char *)(*(int *)(iVar13 + 8) * param_1[5] + *(int *)(iVar13 + 0x1c));
              }
              else {
                pcVar31 = (char *)0x0;
              }
              if (pcVar31 != (char *)0x0) {
                if (PTR_00802a30 != (CursorClassTy *)0x0) {
                  uVar22 = PTR_00802a30->field_00C9;
                  uVar18 = PTR_00802a30->field_00C5;
                  PTR_00802a30->field_0493 = 5;
                  pCVar29->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
                  CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
                  pCVar29->field_0xd2 = 0;
                  *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
                }
                iVar13 = -1;
                pcVar17 = pcVar31 + 0x40;
                do {
                  if (iVar13 == 0) break;
                  iVar13 = iVar13 + -1;
                  cVar2 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                } while (cVar2 != '\0');
                if (iVar13 == -2) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar31,pcVar31 + 0x40,1);
                }
                else if (*(int *)(this_00->field_1AEC + 8) < 1) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar31,(char *)0x0,1);
                }
                else {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar31,
                                     (char *)**(undefined4 **)(this_00->field_1AEC + 0x14),1);
                }
              }
            }
            break;
          }
          uVar27 = param_1[5];
          if (uVar27 == 0) {
            if (PTR_00802a30 != (CursorClassTy *)0x0) {
              uVar22 = PTR_00802a30->field_00C9;
              uVar18 = PTR_00802a30->field_00C5;
              PTR_00802a30->field_0493 = 5;
              pCVar29->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
              CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
              pCVar29->field_0xd2 = 0;
              *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
            }
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_00->field_1A60 = 1;
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 0;
            if (this_00->field_1B18 != 0) {
              FUN_006e6080(this_00,2,this_00->field_1B18,(undefined4 *)&this_00->field_0x1d);
            }
            *(undefined4 *)&this_00->field_0x31 = 1;
            if (this_00->field_1B24 != 0) {
              FUN_006e6080(this_00,2,this_00->field_1B24,(undefined4 *)&this_00->field_0x1d);
            }
            break;
          }
          iVar13 = this_00->field_1EA6;
          if (uVar27 < *(uint *)(iVar13 + 0xc)) {
            pcVar31 = (char *)(*(int *)(iVar13 + 8) * uVar27 + *(int *)(iVar13 + 0x1c));
          }
          else {
            pcVar31 = (char *)0x0;
          }
          if (pcVar31 == (char *)0x0) break;
          if (this_00->field_1B0C != 0) {
            FUN_006ab060((LPVOID *)&this_00->field_1B0C);
          }
          uVar27 = 0xffffffff;
          pcVar17 = pcVar31;
          do {
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
          pcVar17 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar27);
          uVar27 = 0xffffffff;
          this_00->field_1B0C = pcVar17;
          do {
            pcVar34 = pcVar31;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar34 = pcVar31 + 1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar34;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar31 = pcVar34 + -uVar27;
          for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
            pcVar31 = pcVar31 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar17 = *pcVar31;
            pcVar31 = pcVar31 + 1;
            pcVar17 = pcVar17 + 1;
          }
          (**(code **)(this_00->field_0000 + 8))();
          this_00->field_1A61 = 10;
          this_00->field_1ED2 = 6;
          pSVar6 = this_00->field_1A5B;
          if (pSVar6->field_02E6 == (MMsgTy *)0x0) break;
          puVar15 = local_370;
          for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
            *puVar15 = 0xffffffff;
            puVar15 = puVar15 + 1;
          }
          *(undefined2 *)puVar15 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          MMsgTy::StatePanel(pSVar6->field_02E6,(int)local_370);
          puVar15 = &local_80;
          goto cf_common_exit_005A7F3B;
        case 0x8163:
          if (this_00->field_1A5F == CASE_6) {
            if (this_00->field_1A60 == '\0') {
              local_1ac = 0x20;
              if (param_1[5] == 0) {
                local_1a8 = 0;
                if (this_00->field_1B18 != 0) {
                  FUN_006e6080(this_00,2,this_00->field_1B18,local_1bc);
                }
              }
              else {
                local_1a8 = 1;
                if (this_00->field_1B18 != 0) {
                  FUN_006e6080(this_00,2,this_00->field_1B18,local_1bc);
                }
              }
            }
          }
          else if (this_00->field_1A5F == CASE_8) {
            iVar13 = this_00->field_1EBE;
            bVar36 = true;
            if (((iVar13 != 0) && ((uint)param_1[5] < *(uint *)(iVar13 + 0xc))) &&
               (iVar13 = *(int *)(iVar13 + 8) * param_1[5] + *(int *)(iVar13 + 0x1c), iVar13 != 0))
            {
              bVar36 = false;
              Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_1AE8,0,(char *)(iVar13 + 0x2c))
              ;
              this_00->field_002D = 0x33;
              *(undefined4 *)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                         (BITMAPINFO *)this_00->field_1E92);
              FUN_006b4170(this_00->field_1E8E,0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,0x15e,0x11);
              uVar22 = 2;
              iVar40 = -1;
              iVar38 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2572,HINSTANCE_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar38,iVar40,uVar22);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x11,0x14a,0x11);
              ccFntTy::WrStr(this_00->field_1A73,(uint *)(iVar13 + 0x1c),0,-1,0);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x22,0x15e,0x11);
              uVar22 = 2;
              iVar40 = -1;
              iVar38 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2347,HINSTANCE_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar38,iVar40,uVar22);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x33,0x14a,0x11);
              uVar22 = 0;
              iVar40 = -1;
              iVar38 = 0;
              if (*(char *)(iVar13 + 0x7c) == '\0') {
                puVar16 = (uint *)FUN_006b0140(0x2573,HINSTANCE_00807618);
              }
              else {
                puVar16 = (uint *)(iVar13 + 0x83);
              }
              ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar38,iVar40,uVar22);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x44,0x15e,0x11);
              uVar22 = 2;
              iVar40 = -1;
              iVar38 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2344,HINSTANCE_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar38,iVar40,uVar22);
              if (*(char *)(iVar13 + 0x7c) != '\0') {
                ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x55,0x14a,0x11);
                iVar38 = (int)*(char *)(iVar13 + 0x7e) << 1;
                wsprintfA((LPSTR)&DAT_0080f33a,s__dx_d_007cc60c,iVar38,iVar38);
                ccFntTy::WrStr(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
              }
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x66,0x15e,0x11);
              uVar22 = 2;
              iVar40 = -1;
              iVar38 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2345,HINSTANCE_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar38,iVar40,uVar22);
              if (*(char *)(iVar13 + 0x7c) != '\0') {
                ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x77,0x14a,0x11);
                uVar22 = FUN_006b0140(0x2574,HINSTANCE_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(int)*(char *)(iVar13 + 0x7d),uVar22
                         );
                ccFntTy::WrStr(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
              }
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
            if (bVar36) {
              Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_1AE8,0,&DAT_008016a0);
              this_00->field_002D = 0x33;
              *(undefined4 *)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                         (BITMAPINFO *)this_00->field_1E92);
              FUN_006b4170(this_00->field_1E8E,0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,0x15e,0x11);
              uVar22 = 2;
              iVar38 = -1;
              iVar13 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2572,HINSTANCE_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar13,iVar38,uVar22);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x22,0x15e,0x11);
              uVar22 = 2;
              iVar38 = -1;
              iVar13 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2347,HINSTANCE_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar13,iVar38,uVar22);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x44,0x15e,0x11);
              uVar22 = 2;
              iVar38 = -1;
              iVar13 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2344,HINSTANCE_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar13,iVar38,uVar22);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x66,0x15e,0x11);
              uVar22 = 2;
              iVar38 = -1;
              iVar13 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2345,HINSTANCE_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar13,iVar38,uVar22);
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case 0x8164:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_1CDB,
                     (int)param_1,0);
          break;
        case 0x8165:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_1D6C,
                     (int)param_1,0);
          break;
        case 0x8166:
          uVar27 = *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
          this_00->field_1E1D = uVar27;
          if (this_00->field_1E01 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1E45,this_00->field_1E01,this_00->field_1E05,
                       this_00->field_1E19,uVar27);
          }
        }
        goto cf_common_exit_005A8CA7;
      }
      switch(uVar27) {
      case 0xc0a2:
        if (*(int *)(this_00->field_1EA2 + 8) < 1) {
          pcVar31 = (char *)0x0;
        }
        else {
          pcVar31 = (char *)**(undefined4 **)(this_00->field_1EA2 + 0x14);
        }
        bVar36 = thunk_FUN_00571810(pcVar31);
        if (CONCAT31(extraout_var,bVar36) == 0) {
          if (*(int *)(this_00->field_1EA2 + 8) < 1) {
            pcVar31 = (char *)0x0;
          }
          else {
            pcVar31 = (char *)**(undefined4 **)(this_00->field_1EA2 + 0x14);
          }
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,pcVar31);
        }
        else {
          iVar38 = 0;
          iVar13 = this_00->field_1A5B->field_0696;
          if (0 < *(int *)(iVar13 + 8)) {
            if (*(int *)(iVar13 + 8) < 1) {
              pcVar31 = (char *)0x0;
              goto LAB_005a8b12;
            }
            do {
              pcVar31 = *(char **)(*(int *)(iVar13 + 0x14) + iVar38 * 4);
LAB_005a8b12:
              AddMessage(this_00,8,&DAT_008016a0,pcVar31,8);
              iVar38 = iVar38 + 1;
              iVar13 = this_00->field_1A5B->field_0696;
            } while (iVar38 < *(int *)(iVar13 + 8));
          }
        }
        Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_1EA2,0,&DAT_008016a0);
        this_00->field_002D = 0x33;
        *(undefined4 *)&this_00->field_0x31 = this_00->field_1EA2;
        goto LAB_005a8c85;
      case 0xc0a3:
        iVar13 = this_00->field_1AE8;
        iVar38 = *(int *)(iVar13 + 8);
joined_r0x005a8b8f:
        if (0 < iVar38) {
          pcVar31 = (char *)**(undefined4 **)(iVar13 + 0x14);
        }
        iVar40 = -1;
        do {
          if (iVar40 == 0) break;
          iVar40 = iVar40 + -1;
          cVar2 = *pcVar31;
          pcVar31 = pcVar31 + 1;
        } while (cVar2 != '\0');
        if (iVar40 != -2) {
          if (*(int *)(this_00->field_1AEC + 8) < 1) {
            pcVar31 = (char *)0x0;
          }
          else {
            pcVar31 = (char *)**(undefined4 **)(this_00->field_1AEC + 0x14);
          }
          if (iVar38 < 1) {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)0x0,pcVar31,1);
          }
          else {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)**(undefined4 **)(iVar13 + 0x14),pcVar31,1);
          }
        }
        break;
      case 0xc0a4:
        if (this_00->field_1A60 != '\0') break;
        this_00->field_002D = 0x26;
        FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
        uVar27 = *(uint *)&this_00->field_0x31;
        if (uVar27 == 0) break;
        iVar13 = this_00->field_1EA6;
        if (uVar27 < *(uint *)(iVar13 + 0xc)) {
          iVar13 = *(int *)(iVar13 + 8) * uVar27 + *(int *)(iVar13 + 0x1c);
        }
        else {
          iVar13 = 0;
        }
        if (*(int *)(this_00->field_1EA2 + 8) < 1) {
          uVar22 = 0;
        }
        else {
          uVar22 = **(undefined4 **)(this_00->field_1EA2 + 0x14);
        }
        wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007cc5f0,uVar22,iVar13);
        Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_1EA2,0,(char *)&DAT_0080f33a);
        this_00->field_002D = 0x33;
        *(undefined4 *)&this_00->field_0x31 = this_00->field_1EA2;
LAB_005a8c85:
        FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
        break;
      case 0xc0a5:
        DAT_00807360 = DAT_00807360 == '\0';
      }
      goto cf_common_exit_005A8CA7;
    }
    if (uVar27 == 0x8160) {
      param_1[6] = 0x11;
      goto cf_common_exit_005A8CA7;
    }
    switch(uVar27) {
    case 0x6980:
      piVar10 = (int *)param_1[6];
      iVar13 = *piVar10;
      local_140 = iVar13 + -0xb4;
      iVar38 = piVar10[1];
      local_13c = iVar38 + -0xaa;
      local_138 = piVar10[2];
      local_134 = piVar10[3];
      FUN_006b4170(this_00->field_1AC0,0,iVar13 + -0xb3,iVar38 + -0xa9,local_138 + -2,local_134 + -2
                   ,0xff);
      if (DAT_0080735f != '\0') {
        pbVar28 = (byte *)FUN_0070b3a0(this_00->field_1A83,0);
        DibPut((undefined4 *)this_00->field_1AC0,iVar13 + -0xb2,iVar38 + -0xa8,'\x06',pbVar28);
      }
      break;
    case 0x6981:
      pcVar5 = this_00->field_1A73;
      local_14 = (tagBITMAPINFO *)0x0;
      if (pcVar5->field_00A0 != 0) {
        FUN_00710790((uint *)pcVar5);
      }
      iVar13 = param_1[7];
      iVar38 = *(int *)&pcVar5->field_0x8a;
      local_50 = *(int *)(iVar13 + 0x24) + -0xb4;
      local_48 = *(int *)(iVar13 + 0x2c);
      local_44 = *(int *)(iVar13 + 0x30);
      local_4c = *(int *)(iVar13 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
      FUN_006b4170(this_00->field_1AC0,0,*(int *)(iVar13 + 0x24) + -0xb5,local_4c,local_48 + 2,
                   local_44,0xff);
      iVar13 = param_1[5];
      if (iVar13 != 0) {
        local_8 = (uint *)0x0;
        do {
          if (*(uint **)(iVar13 + (int)local_8) == (uint *)0x0) break;
          iVar38 = FUN_007111c0(this_00->field_1A73,*(uint **)(iVar13 + (int)local_8));
          ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,local_50,
                           (int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize
                           + local_4c,local_48,iVar38);
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)(param_1[5] + (int)local_8),0,-1,0);
          local_14 = (tagBITMAPINFO *)
                     ((int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     this_00->field_1A73->field_005C + iVar38);
          iVar13 = param_1[5];
          local_8 = local_8 + 1;
        } while (iVar13 != 0);
      }
      if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
        iVar40 = (uint)*(ushort *)((int)param_1 + 0x1a) + local_4c;
        iVar13 = (uint)*(ushort *)(param_1 + 6) + local_50;
        FUN_006b5b10(this_00->field_1AC0,0,iVar13,iVar40,iVar13,iVar40 + iVar38,9,0xd);
      }
      goto LAB_005a7c92;
    case 0x6982:
      if (((this_00->field_1E8E != 0) && (this_00->field_1E92 != 0)) &&
         (local_8 = (uint *)param_1[7], local_8 != (uint *)0x0)) {
        if (this_00->field_1A5F == CASE_3) {
          pcVar5 = this_00->field_1A73;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1B08;
        }
        else {
          pcVar5 = this_00->field_1A77;
          local_1c = (AnonShape_005A4350_59BACD18 *)this_00->field_1E9E;
        }
        FUN_006b5f80(DAT_008075a8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        PutDDXClip(local_8[9],local_8[10],6,1,local_8[0xb],(byte *)local_8[0xc],'\x01',
                   (BITMAPINFO *)this_00->field_1E92);
        FUN_006b4170(this_00->field_1E8E,0,0,0,local_8[0xb],local_8[0xc],0xff);
        local_14 = (tagBITMAPINFO *)(uint)*(ushort *)((int)param_1 + 0x16);
        if ((int)local_14 <
            (int)((int)&(((tagBITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                 local_8[0x78])) {
          do {
            if ((int)local_14 < local_1c->field_0008) {
              local_10 = *(uint **)(local_1c->field_0014 + (int)local_14 * 4);
            }
            else {
              local_10 = (uint *)0x0;
            }
            if (local_10 != (uint *)0x0) {
              if (pcVar5->field_00A0 != 0) {
                FUN_00710790((uint *)pcVar5);
              }
              local_c = *(AnonShape_005A4350_59BACD18 **)&pcVar5->field_0x8a;
              if (pcVar5->field_00A0 != 0) {
                FUN_00710790((uint *)pcVar5);
              }
              ccFntTy::SetSurf(pcVar5,this_00->field_1E8E,0,0,
                               ((int)local_14 - (uint)*(ushort *)((int)param_1 + 0x16)) *
                               *(int *)&pcVar5->field_0x8a,*(int *)(this_00->field_1E8E + 4),
                               (int)local_c);
              ccFntTy::WrStr(pcVar5,local_10,0,-1,2);
            }
            local_14 = (tagBITMAPINFO *)((int)&(local_14->bmiHeader).biSize + 1);
          } while ((int)local_14 < (int)((uint)*(ushort *)((int)param_1 + 0x16) + local_8[0x78]));
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,local_8[9],local_8[10],(BITMAPINFO *)this_00->field_1E8E,(uint *)0x0
                   ,0,0,local_8[0xb],local_8[0xc],0x10000ff);
      }
      break;
    case 0x6983:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != 0)) {
        iVar13 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                     *(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30));
        PutDDXClip(*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),6,0x15f,*(uint *)(iVar13 + 0x2c),
                   *(byte **)(iVar13 + 0x30),'\x01',(BITMAPINFO *)this_00->field_1E92);
        FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30),0xff)
        ;
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(this_00->field_1A77,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x14);
          ccFntTy::WrStr(this_00->field_1A77,*(uint **)param_1[5],0,-1,5);
        }
        uVar4 = *(ushort *)(param_1 + 6);
        if ((uVar4 != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          FUN_006b5b10(this_00->field_1E8E,0,(uint)uVar4,2,(uint)uVar4,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(iVar13 + 0x2c),
                   *(DWORD *)(iVar13 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((this_00->field_1E8E == 0) || (this_00->field_1E92 == 0)) break;
      pAVar35 = (AnonShape_005A4350_59BACD18 *)param_1[7];
      FUN_006b5f80(DAT_008075a8,*(int *)&pAVar35->field_0x24,*(int *)&pAVar35->field_0x28,
                   pAVar35->field_002C,*(int *)(pAVar35 + 1));
      PutDDXClip(*(int *)&pAVar35->field_0x24,*(int *)&pAVar35->field_0x28,
                 *(int *)&pAVar35->field_0x24 + -0x13,0x160,pAVar35->field_002C,
                 *(byte **)(pAVar35 + 1),'\x01',(BITMAPINFO *)this_00->field_1E92);
      FUN_006b4170(this_00->field_1E8E,0,0,0,pAVar35->field_002C,*(int *)(pAVar35 + 1),0xff);
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,pAVar35->field_002C,
                       *(int *)(pAVar35 + 1));
      if ((short)param_1[5] == 1) {
        iVar13 = 2;
      }
      else {
        iVar13 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar40 = -1;
      iVar38 = -1;
      puVar16 = (uint *)FUN_006b0140(0x2565,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar38,iVar40,iVar13);
      goto LAB_005a754e;
    case 0x6985:
    case 0x6986:
    case 0x6989:
    case 0x698a:
    case 0x698d:
    case 0x698e:
    case 0x698f:
    case 0x6990:
    case 0x6991:
    case 0x6992:
      if (this_00->field_1E8E == 0) break;
      local_14 = (tagBITMAPINFO *)0x0;
      switch(uVar27) {
      case 0x6985:
      case 0x6986:
        local_14 = (tagBITMAPINFO *)this_00->field_1E9A;
        local_10 = (uint *)0x1e9;
        break;
      default:
        goto switchD_005a7593_caseD_6987;
      case 0x6989:
      case 0x698a:
      case 0x698d:
        local_14 = (tagBITMAPINFO *)this_00->field_1E92;
        local_10 = (uint *)0x199;
        break;
      case 0x698e:
      case 0x698f:
      case 0x6990:
      case 0x6991:
      case 0x6992:
        local_14 = (tagBITMAPINFO *)this_00->field_1E92;
        local_10 = (uint *)0x22;
      }
      local_1c = (AnonShape_005A4350_59BACD18 *)0x5e;
switchD_005a7593_caseD_6987:
      if (local_14 == (tagBITMAPINFO *)0x0) break;
      local_c = (AnonShape_005A4350_59BACD18 *)param_1[7];
      switch(uVar27 - 0x6985) {
      case 0:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case 8:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar27 = this_00->field_1EC2;
        if (uVar27 < 0x401) {
          if (uVar27 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar27 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar27 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar27 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar27 == 0x502) {
          local_8 = (uint *)0x235d;
        }
        else {
LAB_005a7656:
          local_8 = (uint *)0x235c;
        }
        break;
      case 5:
        if (this_00->field_1EC6 == -1) {
          pcVar31 = (char *)FUN_006b0140(0x235c,HINSTANCE_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar17 = pcVar31;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar17 = pcVar31 + 1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar17;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar31 = pcVar17 + -uVar27;
          pcVar17 = (char *)&DAT_0080f33a;
          for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
            pcVar31 = pcVar31 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar17 = *pcVar31;
            pcVar31 = pcVar31 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
        else {
          if ((uint)this_00->field_1ECA < (uint)PTR_0080c502->field_000C) {
            pcVar31 = (char *)(PTR_0080c502->field_0008 * this_00->field_1ECA +
                              PTR_0080c502->field_001C);
          }
          else {
            pcVar31 = (char *)0x0;
          }
          if (pcVar31 == (char *)0x0) {
            pcVar31 = &DAT_008016a0;
          }
          uVar27 = 0xffffffff;
          do {
            pcVar17 = pcVar31;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar17 = pcVar31 + 1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar17;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar31 = pcVar17 + -uVar27;
          pcVar17 = (char *)&DAT_0080f33a;
          for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
            pcVar31 = pcVar31 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar17 = *pcVar31;
            pcVar31 = pcVar31 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
        break;
      case 9:
        if (DAT_00803140 == 2) {
          local_8 = (uint *)0x25b5;
        }
        else {
          local_8 = (uint *)0x25b4;
        }
        break;
      case 10:
        if (DAT_00803144 == 1) {
          local_8 = (uint *)0x25c0;
        }
        else if (DAT_00803144 == 2) {
          local_8 = (uint *)0x25c1;
        }
        else {
          local_8 = (uint *)0x25bf;
        }
        break;
      case 0xb:
        local_8 = (uint *)0x25b2;
        break;
      case 0xc:
        local_8 = (uint *)0x25b3;
        break;
      case 0xd:
        local_8 = (uint *)0x25b1;
      }
      pAVar35 = local_c;
      FUN_006b5f80(DAT_008075a8,*(int *)&local_c->field_0x24,*(int *)&local_c->field_0x28,
                   local_c->field_002C,*(int *)(local_c + 1));
      PutDDXClip(*(int *)&pAVar35->field_0x24,*(int *)&pAVar35->field_0x28,
                 *(int *)&pAVar35->field_0x24 - (int)local_10,
                 *(int *)&pAVar35->field_0x28 - (int)local_1c,pAVar35->field_002C,
                 *(byte **)(pAVar35 + 1),'\x01',local_14);
      FUN_006b4170(this_00->field_1E8E,0,0,0,pAVar35->field_002C,*(int *)(pAVar35 + 1),0xff);
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,pAVar35->field_002C,
                       *(int *)(pAVar35 + 1));
      if ((short)param_1[5] == 1) {
        local_c = (AnonShape_005A4350_59BACD18 *)0x2;
      }
      else {
        local_c = (AnonShape_005A4350_59BACD18 *)((-(uint)((short)param_1[5] != 0) & 2) + 1);
      }
      if (param_1[4] == 0x698a) {
        puVar16 = &DAT_0080f33a;
      }
      else {
        puVar16 = (uint *)FUN_006b0140((UINT)local_8,HINSTANCE_00807618);
      }
      ccFntTy::WrStr(this_00->field_1A73,puVar16,-1,-1,local_c);
      if ((short)param_1[5] == 0) {
        bVar26 = 0xd;
      }
      else {
        bVar26 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_00->field_1E8E,0,0,0,(undefined4 *)pAVar35->field_002C,*(int *)(pAVar35 + 1)
                   ,4,bVar26);
      if ((short)param_1[5] == 0) {
        bVar26 = 0xd;
      }
      else {
        bVar26 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_00->field_1E8E,0,2,2,(undefined4 *)(pAVar35->field_002C + -4),
                   *(int *)(pAVar35 + 1) + -4,4,bVar26);
LAB_005a754e:
      DVar12 = *(DWORD *)(pAVar35 + 1);
      DVar39 = pAVar35->field_002C;
      pBVar37 = (BITMAPINFO *)this_00->field_1E8E;
      iVar13 = *(int *)&pAVar35->field_0x28;
LAB_005a89f6:
      Library::DKW::DDX::FUN_006b4680
                (DAT_0080759c,*(int *)&pAVar35->field_0x24,iVar13,pBVar37,(uint *)0x0,0,0,DVar39,
                 DVar12,0x10000ff);
      break;
    case 0x6987:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E9A != 0)) {
        iVar13 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                     *(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30));
        PutDDXClip(*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),*(int *)(iVar13 + 0x24) + -0x1e9,
                   *(int *)(iVar13 + 0x28) + -0x5e,*(uint *)(iVar13 + 0x2c),
                   *(byte **)(iVar13 + 0x30),'\x01',(BITMAPINFO *)this_00->field_1E9A);
        FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30),0xff)
        ;
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar38 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(this_00->field_1E8E,0,iVar38,4,iVar38,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(iVar13 + 0x2c),
                   *(DWORD *)(iVar13 + 0x30),0x10000ff);
      }
      break;
    case 0x6988:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != 0)) {
        iVar13 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                     *(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30));
        PutDDXClip(*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                   *(int *)(iVar13 + 0x24) -
                   ((-(uint)(this_00->field_1A5F != CASE_9) & 0x177) + 0x22),
                   *(int *)(iVar13 + 0x28) + -0x5e,*(uint *)(iVar13 + 0x2c),
                   *(byte **)(iVar13 + 0x30),'\x01',(BITMAPINFO *)this_00->field_1E92);
        FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30),0xff)
        ;
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar38 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(this_00->field_1E8E,0,iVar38,3,iVar38,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(iVar13 + 0x2c),
                   *(DWORD *)(iVar13 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar10 = (int *)param_1[6];
      iVar13 = *piVar10;
      iVar38 = iVar13 + -0xb4;
      local_3c = piVar10[1] - 0xaa;
      local_38 = (undefined4 *)piVar10[2];
      local_34 = piVar10[3];
      local_40 = iVar38;
      FUN_006b4170(this_00->field_1AC0,0,iVar38,local_3c,(int)local_38,local_34,0xff);
      if ((short)param_1[5] == 0) {
        bVar26 = 0xd;
      }
      else {
        bVar26 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_00->field_1AC0,0,iVar38,local_3c,local_38,local_34,4,bVar26);
      if ((short)param_1[5] == 0) {
        bVar26 = 0xd;
      }
      else {
        bVar26 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_00->field_1AC0,0,iVar13 + -0xb2,local_3c + 2,local_38 + -1,local_34 + -4,4,
                   bVar26);
      uVar27 = this_00->field_1EC2;
      if (uVar27 < 0x502) {
        if (uVar27 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar27 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar27 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar27 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,iVar38,local_3c,(int)local_38,
                       local_34);
      if ((short)param_1[5] == 1) {
        iVar13 = 2;
      }
      else {
        iVar13 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar40 = -1;
      iVar38 = -1;
      puVar16 = (uint *)FUN_006b0140((UINT)local_8,HINSTANCE_00807618);
      ccFntTy::WrStr(this_00->field_1A73,puVar16,iVar38,iVar40,iVar13);
LAB_005a7c92:
      FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
      break;
    case 0x698c:
      ccFntTy::SetSurf(this_00->field_1A73,param_1[6],0,0,0,0,0);
      iVar13 = this_00->field_1FB3;
      if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar13 + 0xc)) {
        puVar16 = (uint *)(*(int *)(iVar13 + 8) * (uint)*(ushort *)(param_1 + 5) +
                          *(int *)(iVar13 + 0x1c));
      }
      else {
        puVar16 = (uint *)0x0;
      }
      ccFntTy::WrStr(this_00->field_1A73,puVar16,-1,-1,
                     3 - (uint)(*(short *)((int)param_1 + 0x16) != 1));
      if (*(short *)((int)param_1 + 0x16) == 1) {
        iVar13 = param_1[6];
        FUN_006b5ee0(iVar13,0,0,0,*(int *)(iVar13 + 4),*(int *)(iVar13 + 8),0xf,0xd);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (uVar27 == 0x6949) {
    (**(code **)(this_00->field_0000 + 8))();
    this_00->field_1A61 = 9;
    pSVar6 = this_00->field_1A5B;
    if (pSVar6->field_02E6 == (MMsgTy *)0x0) goto cf_common_exit_005A8CA7;
    puVar15 = local_2ac;
    for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar15 = 0xffffffff;
      puVar15 = puVar15 + 1;
    }
    *(undefined2 *)puVar15 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    MMsgTy::StatePanel(pSVar6->field_02E6,(int)local_2ac);
    puVar15 = &local_d0;
cf_common_exit_005A7F3B:
    thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,puVar15);
    goto cf_common_exit_005A8CA7;
  }
  if (0x63ff < uVar27) {
    if (uVar27 < 0x6907) {
      if (uVar27 == 0x6906) {
        if (PTR_00802a30->field_0493 == '\x05') goto cf_common_exit_005A8CA7;
        local_c = (AnonShape_005A4350_59BACD18 *)param_1[7];
        this_00->field_1F43 = 0x6506;
        iVar13 = local_c->field_0008;
        this_00->field_1F63 = 0x698c;
        this_00->field_1F4B = iVar13;
        *(undefined4 *)(this_00->field_1FB3 + 0xc) = 0;
        this_00->field_20BB = 1;
        pcVar31 = (char *)FUN_006b0140(0x25b4,HINSTANCE_00807618);
        uVar27 = 0xffffffff;
        do {
          pcVar17 = pcVar31;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar17 = pcVar31 + 1;
          cVar2 = *pcVar31;
          pcVar31 = pcVar17;
        } while (cVar2 != '\0');
        uVar27 = ~uVar27;
        pcVar31 = pcVar17 + -uVar27;
        pcVar17 = &this_00->field_0x1fb7;
        for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
          pcVar31 = pcVar31 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
          *pcVar17 = *pcVar31;
          pcVar31 = pcVar31 + 1;
          pcVar17 = pcVar17 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
        this_00->field_20BB = 2;
        pcVar31 = (char *)FUN_006b0140(0x25b5,HINSTANCE_00807618);
        uVar27 = 0xffffffff;
        do {
          pcVar17 = pcVar31;
          if (uVar27 == 0) break;
          uVar27 = uVar27 - 1;
          pcVar17 = pcVar31 + 1;
          cVar2 = *pcVar31;
          pcVar31 = pcVar17;
        } while (cVar2 != '\0');
        uVar27 = ~uVar27;
        pcVar31 = pcVar17 + -uVar27;
        pcVar17 = &this_00->field_0x1fb7;
        for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
          pcVar31 = pcVar31 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
          *pcVar17 = *pcVar31;
          pcVar31 = pcVar31 + 1;
          pcVar17 = pcVar17 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
        iVar13 = this_00->field_1FB3;
        this_00->field_1F7B = *(undefined4 *)(iVar13 + 0xc);
        uVar27 = 0;
        this_00->field_1F73 = 0;
        if (*(uint *)(iVar13 + 0xc) != 0) {
          do {
            if (DAT_00803140 ==
                *(int *)(*(int *)(iVar13 + 8) * uVar27 + *(int *)(iVar13 + 0x1c) + 0x104)) {
              this_00->field_1F73 = uVar27;
              break;
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 < *(uint *)(iVar13 + 0xc));
        }
      }
      else {
        if (uVar27 < 0x6903) {
          if (uVar27 == 0x6902) {
            iVar13 = this_00->field_1AE8;
            iVar38 = *(int *)(iVar13 + 8);
            goto joined_r0x005a8b8f;
          }
          if (0x6900 < uVar27) {
            if ((uVar27 == 0x6901) && (this_00->field_1A60 == '\0')) {
              this_00->field_002D = 0x26;
              puVar1 = &this_00->field_0x1d;
              FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)puVar1);
              iVar13 = this_00->field_1EA6;
              if ((uint)*(ushort *)&this_00->field_0x31 < *(uint *)(iVar13 + 0xc)) {
                iVar13 = *(int *)(iVar13 + 8) * (uint)*(ushort *)&this_00->field_0x31 +
                         *(int *)(iVar13 + 0x1c);
              }
              else {
                iVar13 = 0;
              }
              if (iVar13 != 0) {
                this_00->field_002D = 0x32;
                FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                iVar38 = *(int *)&this_00->field_0x31;
                if (iVar38 != 0) {
                  if (*(int *)(iVar38 + 8) < 1) {
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = **(undefined4 **)(iVar38 + 0x14);
                  }
                  uVar18 = FUN_006b0140(0x2568,HINSTANCE_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,s__s__s__s_007cc62c,uVar18,iVar13,uVar22);
                  CFsgsConnection::SendChatMessage
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_1EA2,0,&DAT_008016a0);
                  this_00->field_002D = 0x33;
                  *(undefined4 *)&this_00->field_0x31 = this_00->field_1EA2;
                  FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                }
              }
            }
            goto cf_common_exit_005A8CA7;
          }
          if (uVar27 == 0x6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_1AD0,(undefined4 *)&this_00->field_0x1d);
            goto cf_common_exit_005A8CA7;
          }
          if (uVar27 != 0x6506) {
            if (uVar27 == 0x68ff) {
              if (param_1[5] == 0) {
                if (this_00->field_1AB7 == *param_1) {
                  this_00->field_1AB7 = 0;
                }
              }
              else if (param_1[5] == 1) {
                this_00->field_1AB7 = *param_1;
              }
            }
            goto cf_common_exit_005A8CA7;
          }
          iVar13 = this_00->field_1FB3;
          uVar27 = param_1[5];
          if (*(uint *)(iVar13 + 0xc) <= uVar27) goto cf_common_exit_005A8CA7;
          if (this_00->field_1A5F == CASE_9) {
            if (param_1[6] == this_00->field_1EB6) {
              DAT_00803140 = *(ulong *)(*(int *)(iVar13 + 8) * uVar27 + 0x104 +
                                       *(int *)(iVar13 + 0x1c));
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar29 = PTR_00802a30;
joined_r0x005a55e5:
              PTR_00802a30 = pCVar29;
              if (pCVar29 == (CursorClassTy *)0x0) goto cf_common_exit_005A5634;
              pCVar29->field_0493 = 5;
              pCVar29->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
              iVar13 = pCVar29->field_00C9;
              iVar38 = pCVar29->field_00C5;
            }
            else {
              DAT_00803144 = *(int *)(*(int *)(iVar13 + 8) * uVar27 + 0x104 +
                                     *(int *)(iVar13 + 0x1c));
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar29 = PTR_00802a30;
              if (PTR_00802a30 == (CursorClassTy *)0x0) goto cf_common_exit_005A5634;
              uVar22 = PTR_00802a30->field_00C9;
              uVar18 = PTR_00802a30->field_00C5;
              PTR_00802a30->field_0493 = 5;
              pCVar29->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
              iVar13 = pCVar29->field_00C9;
              iVar38 = pCVar29->field_00C5;
            }
LAB_005a561c:
            CursorClassTy::DrawSprite(pCVar29,iVar38,iVar13);
            pCVar29->field_0xd2 = 0;
            *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
          }
          else {
            if (param_1[6] != this_00->field_1EB6) {
              iVar13 = *(int *)(iVar13 + 8) * uVar27 + *(int *)(iVar13 + 0x1c);
              this_00->field_1EC6 = *(undefined4 *)(iVar13 + 0x104);
              this_00->field_1ECA = *(undefined4 *)(iVar13 + 0x108);
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,(char *)0x0);
              DVar12 = timeGetTime();
              this_00->field_1A63 = DVar12;
              pCVar29 = PTR_00802a30;
              goto joined_r0x005a55e5;
            }
            this_00->field_1EC2 =
                 *(undefined4 *)(*(int *)(iVar13 + 8) * uVar27 + 0x104 + *(int *)(iVar13 + 0x1c));
            if (this_00->field_1A5F == CASE_8) {
              iVar13 = this_00->field_1EC2;
              puVar15 = local_24c;
              for (iVar38 = 8; iVar38 != 0; iVar38 = iVar38 + -1) {
                *puVar15 = 0;
                puVar15 = puVar15 + 1;
              }
              this_00->field_1EC6 = 0xffffffff;
              local_238 = (uint)(iVar13 == 0x100);
              this_00->field_1ECA = 0;
              local_23c = 0x20;
              if (this_00->field_1EBA != 0) {
                FUN_006e6080(this_00,2,this_00->field_1EBA,local_24c);
              }
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,(char *)0x0);
              DVar12 = timeGetTime();
              this_00->field_1A63 = DVar12;
              pCVar29 = PTR_00802a30;
              if (PTR_00802a30 != (CursorClassTy *)0x0) {
                uVar22 = PTR_00802a30->field_00C9;
                uVar18 = PTR_00802a30->field_00C5;
                PTR_00802a30->field_0493 = 5;
                pCVar29->field_0494 = 0xffff;
                CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
                iVar13 = pCVar29->field_00C9;
                iVar38 = pCVar29->field_00C5;
                goto LAB_005a561c;
              }
            }
          }
cf_common_exit_005A5634:
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,param_1[6],(undefined4 *)&this_00->field_0x1d);
          goto cf_common_exit_005A8CA7;
        }
        if (uVar27 == 0x6903) {
          if (PTR_00802a30 != (CursorClassTy *)0x0) {
            uVar22 = PTR_00802a30->field_00C9;
            uVar18 = PTR_00802a30->field_00C5;
            PTR_00802a30->field_0493 = 5;
            pCVar29->field_0494 = 0xffff;
            CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
            CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
            pCVar29->field_0xd2 = 0;
            *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
          }
          if (this_00->field_1A5F == CASE_6) {
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_00->field_1A60 = 1;
          }
          if (this_00->field_1A5F == CASE_8) {
            CFsgsConnection::RequestGameList
                      ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,(char *)0x0);
            DVar12 = timeGetTime();
            this_00->field_1A63 = DVar12;
          }
          goto cf_common_exit_005A8CA7;
        }
        if (uVar27 == 0x6904) {
          local_c = (AnonShape_005A4350_59BACD18 *)param_1[7];
          this_00->field_1F43 = 0x6506;
          iVar13 = local_c->field_0008;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = iVar13;
          *(undefined4 *)(this_00->field_1FB3 + 0xc) = 0;
          if (this_00->field_1A5F == CASE_8) {
            this_00->field_20BB = 0;
            pcVar31 = (char *)FUN_006b0140(0x235c,HINSTANCE_00807618);
            uVar27 = 0xffffffff;
            do {
              pcVar17 = pcVar31;
              if (uVar27 == 0) break;
              uVar27 = uVar27 - 1;
              pcVar17 = pcVar31 + 1;
              cVar2 = *pcVar31;
              pcVar31 = pcVar17;
            } while (cVar2 != '\0');
            uVar27 = ~uVar27;
            pcVar31 = pcVar17 + -uVar27;
            pcVar17 = &this_00->field_0x1fb7;
            for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
              pcVar31 = pcVar31 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
              *pcVar17 = *pcVar31;
              pcVar31 = pcVar31 + 1;
              pcVar17 = pcVar17 + 1;
            }
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          }
          this_00->field_20BB = 0x100;
          pcVar31 = (char *)FUN_006b0140(0x2341,HINSTANCE_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar17 = pcVar31;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar17 = pcVar31 + 1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar17;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar31 = pcVar17 + -uVar27;
          pcVar17 = &this_00->field_0x1fb7;
          for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
            pcVar31 = pcVar31 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar17 = *pcVar31;
            pcVar31 = pcVar31 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          this_00->field_20BB = 0x501;
          pcVar31 = (char *)FUN_006b0140(0x2342,HINSTANCE_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar17 = pcVar31;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar17 = pcVar31 + 1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar17;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar31 = pcVar17 + -uVar27;
          pcVar17 = &this_00->field_0x1fb7;
          for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
            pcVar31 = pcVar31 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar17 = *pcVar31;
            pcVar31 = pcVar31 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          this_00->field_20BB = 0x200;
          pcVar31 = (char *)FUN_006b0140(0x235a,HINSTANCE_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar17 = pcVar31;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar17 = pcVar31 + 1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar17;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar31 = pcVar17 + -uVar27;
          pcVar17 = &this_00->field_0x1fb7;
          for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
            pcVar31 = pcVar31 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar17 = *pcVar31;
            pcVar31 = pcVar31 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          this_00->field_20BB = 0x400;
          pcVar31 = (char *)FUN_006b0140(0x235b,HINSTANCE_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar17 = pcVar31;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar17 = pcVar31 + 1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar17;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar31 = pcVar17 + -uVar27;
          pcVar17 = &this_00->field_0x1fb7;
          for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
            pcVar31 = pcVar31 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar17 = *pcVar31;
            pcVar31 = pcVar31 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          this_00->field_20BB = 0x502;
          pcVar31 = (char *)FUN_006b0140(0x235d,HINSTANCE_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar17 = pcVar31;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar17 = pcVar31 + 1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar17;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar31 = pcVar17 + -uVar27;
          pcVar17 = &this_00->field_0x1fb7;
          for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
            pcVar31 = pcVar31 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar17 = *pcVar31;
            pcVar31 = pcVar31 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          iVar13 = this_00->field_1FB3;
          this_00->field_1F7B = *(undefined4 *)(iVar13 + 0xc);
          uVar27 = 0;
          this_00->field_1F73 = 0;
          if (*(uint *)(iVar13 + 0xc) != 0) {
            do {
              if (this_00->field_1EC2 ==
                  *(int *)(*(int *)(iVar13 + 8) * uVar27 + *(int *)(iVar13 + 0x1c) + 0x104)) {
                this_00->field_1F73 = uVar27;
                break;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < *(uint *)(iVar13 + 0xc));
          }
        }
        else {
          if (uVar27 != 0x6905) goto cf_common_exit_005A8CA7;
          local_c = (AnonShape_005A4350_59BACD18 *)param_1[7];
          this_00->field_1F43 = 0x6506;
          iVar13 = local_c->field_0008;
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = iVar13;
          *(undefined4 *)(this_00->field_1FB3 + 0xc) = 0;
          this_00->field_20BB = 0xffffffff;
          pcVar31 = (char *)FUN_006b0140(0x235c,HINSTANCE_00807618);
          uVar27 = 0xffffffff;
          do {
            pcVar17 = pcVar31;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1;
            pcVar17 = pcVar31 + 1;
            cVar2 = *pcVar31;
            pcVar31 = pcVar17;
          } while (cVar2 != '\0');
          uVar27 = ~uVar27;
          pcVar31 = pcVar17 + -uVar27;
          pcVar17 = &this_00->field_0x1fb7;
          for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
            pcVar31 = pcVar31 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
            *pcVar17 = *pcVar31;
            pcVar31 = pcVar31 + 1;
            pcVar17 = pcVar17 + 1;
          }
          this_00->field_20BF = 0;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          local_8 = (uint *)0x0;
          if (PTR_0080c502->field_000C != 0) {
            pAVar25 = PTR_0080c502;
            if (PTR_0080c502->field_000C == 0) {
              pcVar31 = (char *)0x0;
              goto LAB_005a5859;
            }
            do {
              pcVar31 = (char *)(pAVar25->field_0008 * (int)local_8 + pAVar25->field_001C);
LAB_005a5859:
              if (pcVar31 != (char *)0x0) {
                this_00->field_20BB = *(undefined4 *)(pcVar31 + 0x90);
                uVar27 = 0xffffffff;
                do {
                  pcVar17 = pcVar31;
                  if (uVar27 == 0) break;
                  uVar27 = uVar27 - 1;
                  pcVar17 = pcVar31 + 1;
                  cVar2 = *pcVar31;
                  pcVar31 = pcVar17;
                } while (cVar2 != '\0');
                uVar27 = ~uVar27;
                pcVar31 = pcVar17 + -uVar27;
                pcVar17 = &this_00->field_0x1fb7;
                for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
                  *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
                  pcVar31 = pcVar31 + 4;
                  pcVar17 = pcVar17 + 4;
                }
                for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
                  *pcVar17 = *pcVar31;
                  pcVar31 = pcVar31 + 1;
                  pcVar17 = pcVar17 + 1;
                }
                this_00->field_20BF = local_8;
                Library::DKW::TBL::FUN_006ae1c0
                          ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
                pAVar25 = PTR_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < (uint *)pAVar25->field_000C);
          }
          iVar13 = this_00->field_1FB3;
          uVar27 = 0;
          uVar22 = *(undefined4 *)(iVar13 + 0xc);
          this_00->field_1F73 = 0;
          this_00->field_1F7B = uVar22;
          if (*(uint *)(iVar13 + 0xc) != 0) {
            do {
              if (this_00->field_1EC6 ==
                  *(int *)(*(int *)(iVar13 + 8) * uVar27 + *(int *)(iVar13 + 0x1c) + 0x104)) {
                this_00->field_1F73 = uVar27;
                break;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < *(uint *)(iVar13 + 0xc));
          }
        }
      }
      pcVar5 = this_00->field_1A73;
      this_00->field_1F97 = *(undefined4 *)&local_c->field_0x24;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = *(int *)(local_c + 1) + *(int *)&local_c->field_0x28;
      iVar13 = pcVar5->field_00A0;
joined_r0x005a5b89:
      if (iVar13 != 0) {
        FUN_00710790((uint *)pcVar5);
      }
      this_00->field_1F77 = *(undefined4 *)&pcVar5->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &this_00->field_0x1f33,0);
      goto cf_common_exit_005A8CA7;
    }
    switch(uVar27) {
    case 0x6907:
      if (PTR_00802a30->field_0493 == '\x05') break;
      local_c = (AnonShape_005A4350_59BACD18 *)param_1[7];
      this_00->field_1F43 = 0x6506;
      iVar13 = local_c->field_0008;
      this_00->field_1F63 = 0x698c;
      this_00->field_1F4B = iVar13;
      *(undefined4 *)(this_00->field_1FB3 + 0xc) = 0;
      this_00->field_20BB = 0;
      pcVar31 = (char *)FUN_006b0140(0x25bf,HINSTANCE_00807618);
      uVar27 = 0xffffffff;
      do {
        pcVar17 = pcVar31;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar17 = pcVar31 + 1;
        cVar2 = *pcVar31;
        pcVar31 = pcVar17;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      pcVar31 = pcVar17 + -uVar27;
      pcVar17 = &this_00->field_0x1fb7;
      for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
        pcVar31 = pcVar31 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
        *pcVar17 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar17 = pcVar17 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
      this_00->field_20BB = 1;
      pcVar31 = (char *)FUN_006b0140(0x25c0,HINSTANCE_00807618);
      uVar27 = 0xffffffff;
      do {
        pcVar17 = pcVar31;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar17 = pcVar31 + 1;
        cVar2 = *pcVar31;
        pcVar31 = pcVar17;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      pcVar31 = pcVar17 + -uVar27;
      pcVar17 = &this_00->field_0x1fb7;
      for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
        pcVar31 = pcVar31 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
        *pcVar17 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar17 = pcVar17 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
      this_00->field_20BB = 2;
      pcVar31 = (char *)FUN_006b0140(0x25c1,HINSTANCE_00807618);
      uVar27 = 0xffffffff;
      do {
        pcVar17 = pcVar31;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar17 = pcVar31 + 1;
        cVar2 = *pcVar31;
        pcVar31 = pcVar17;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      pcVar31 = pcVar17 + -uVar27;
      pcVar17 = &this_00->field_0x1fb7;
      for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar31;
        pcVar31 = pcVar31 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
        *pcVar17 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar17 = pcVar17 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
      iVar13 = this_00->field_1FB3;
      this_00->field_1F7B = *(undefined4 *)(iVar13 + 0xc);
      uVar27 = 0;
      this_00->field_1F73 = 0;
      if (*(uint *)(iVar13 + 0xc) != 0) {
        do {
          if (DAT_00803144 ==
              *(int *)(*(int *)(iVar13 + 8) * uVar27 + *(int *)(iVar13 + 0x1c) + 0x104)) {
            this_00->field_1F73 = uVar27;
            break;
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 < *(uint *)(iVar13 + 0xc));
      }
      pcVar5 = this_00->field_1A73;
      this_00->field_1F97 = *(undefined4 *)&local_c->field_0x24;
      this_00->field_1F9F = local_c->field_002C + 10;
      this_00->field_1F9B = *(int *)(local_c + 1) + *(int *)&local_c->field_0x28;
      iVar13 = pcVar5->field_00A0;
      goto joined_r0x005a5b89;
    case 0x6908:
      if (PTR_00802a30->field_0493 == '\x05') break;
      bVar36 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar36 = true;
      }
      if ((!bVar36) ||
         (CFsgsConnection::RequestLadderList
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar29 = PTR_00802a30, PTR_00802a30 == (CursorClassTy *)0x0)) break;
      uVar22 = PTR_00802a30->field_00C9;
      uVar18 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 5;
      pCVar29->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
      iVar13 = pCVar29->field_00C9;
      iVar38 = pCVar29->field_00C5;
      goto cf_common_exit_005A52AA;
    case 0x6909:
      if ((PTR_00802a30->field_0493 == '\x05') || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar29 = PTR_00802a30;
      if (PTR_00802a30 == (CursorClassTy *)0x0) break;
      uVar22 = PTR_00802a30->field_00C9;
      uVar18 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 5;
      pCVar29->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
      iVar13 = pCVar29->field_00C9;
      iVar38 = pCVar29->field_00C5;
cf_common_exit_005A52AA:
      CursorClassTy::DrawSprite(pCVar29,iVar38,iVar13);
      pCVar29->field_0xd2 = 0;
      *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
      break;
    case 0x690a:
      if ((PTR_00802a30->field_0493 == '\x05') || (iVar13 = this_00->field_1AE8, iVar13 == 0))
      break;
      if (0 < *(int *)(iVar13 + 8)) {
        pcVar31 = (char *)**(undefined4 **)(iVar13 + 0x14);
      }
      iVar38 = -1;
      do {
        if (iVar38 == 0) break;
        iVar38 = iVar38 + -1;
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
      } while (cVar2 != '\0');
      if (iVar38 == -2) break;
      if (*(int *)(iVar13 + 8) < 1) {
        pcVar31 = (char *)0x0;
      }
      else {
        pcVar31 = (char *)**(undefined4 **)(iVar13 + 0x14);
      }
      CFsgsConnection::RequestLadderListByName
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,pcVar31,0xf);
      goto LAB_005a6e50;
    case 0x6913:
    case 0x6914:
    case 0x6915:
    case 0x6916:
    case 0x6917:
    case 0x6918:
    case 0x6919:
    case 0x691a:
    case 0x691b:
    case 0x691c:
    case 0x691d:
    case 0x691e:
    case 0x691f:
    case 0x6920:
    case 0x6921:
      bVar26 = (char)param_1[4] - 0x13;
      local_c = (AnonShape_005A4350_59BACD18 *)CONCAT31(local_c._1_3_,bVar26);
      if (((uint)this_00->field_1EE3 <= (uint)bVar26) || (this_00->field_1EDB == 0)) break;
      iVar38 = (uint)bVar26 * 0x24;
      iVar13 = -1;
      pcVar31 = (char *)(iVar38 + 0x14 + this_00->field_1EDB);
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
      } while (cVar2 != '\0');
      if (iVar13 == -2) break;
      if (this_00->field_1B0C != 0) {
        FUN_006ab060((LPVOID *)&this_00->field_1B0C);
      }
      uVar27 = 0xffffffff;
      pcVar31 = (char *)(iVar38 + 0x14 + this_00->field_1EDB);
      do {
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
      } while (cVar2 != '\0');
      pcVar31 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar27);
      this_00->field_1B0C = pcVar31;
      uVar27 = 0xffffffff;
      pcVar17 = (char *)(iVar38 + 0x14 + this_00->field_1EDB);
      do {
        pcVar34 = pcVar17;
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        pcVar34 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar34;
      } while (cVar2 != '\0');
      uVar27 = ~uVar27;
      pcVar17 = pcVar34 + -uVar27;
      for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)pcVar31 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar31 = pcVar31 + 4;
      }
      for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
        *pcVar31 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar31 = pcVar31 + 1;
      }
      (**(code **)(this_00->field_0000 + 8))();
      this_00->field_1A61 = 10;
      this_00->field_1ED2 = 9;
      pSVar6 = this_00->field_1A5B;
      if (pSVar6->field_02E6 == (MMsgTy *)0x0) break;
      puVar15 = local_338;
      for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar15 = 0xffffffff;
        puVar15 = puVar15 + 1;
      }
      *(undefined2 *)puVar15 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      MMsgTy::StatePanel(pSVar6->field_02E6,(int)local_338);
      puVar15 = &local_70;
      goto cf_common_exit_005A7F3B;
    case 0x693f:
      thunk_FUN_0059b820((AnonShape_0059B820_F1E7AB4B *)this_00);
      break;
    case 0x6940:
      thunk_FUN_0059be50((AnonShape_0059BE50_7219C6AE *)this_00);
      break;
    case 0x6941:
      thunk_FUN_005b6350(this_00,0x6105,0,1);
      this_00->field_1A61 = 0;
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      (**(code **)(this_00->field_0000 + 8))();
      pMVar24 = this_00->field_1A5B->field_02E6;
      if (pMVar24 != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(pMVar24,1,0,1);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (uVar27 == 0x63ff) {
    FVar3 = this_00->field_1A5F;
    if (FVar3 == CASE_3) {
      (**(code **)(this_00->field_0000 + 8))();
      this_00->field_1A61 = 4;
      if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
        local_dc = 0;
        local_d8 = 0;
        local_e0 = 0x101;
        local_d4 = 0;
        thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_e0);
      }
      goto cf_common_exit_005A8CA7;
    }
    if (FVar3 == CASE_7) {
      if ((PTR_00802a30 != (CursorClassTy *)0x0) && (PTR_00802a30->field_0493 == '\x05'))
      goto cf_common_exit_005A8CA7;
      thunk_FUN_005daa60();
      local_290.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_290;
      iVar13 = Library::MSVCRT::__setjmp3(local_290.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_00 = local_20;
      if (iVar13 == 0) {
        FUN_006b6150((uint)DAT_00807362);
        if (*(int *)(this_00->field_1AE8 + 8) < 1) {
          uVar22 = 0;
        }
        else {
          uVar22 = **(undefined4 **)(this_00->field_1AE8 + 0x14);
        }
        Library::DKW::DDX::FUN_006b69b0((int *)&g_int_00811764,(int *)&DAT_007cd6f0,0,uVar22,0x20);
        g_currentExceptionFrame = local_290.previous;
      }
      else {
        g_currentExceptionFrame = local_290.previous;
        iVar13 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xc08,0,iVar13,
                                    &DAT_007a4ccc,s_FSGSTy__GetMessage_MESS_ID_MSGOK_007cc638);
        if (iVar13 != 0) {
          pcVar11 = (code *)swi(3);
          uVar22 = (*pcVar11)();
          return uVar22;
        }
      }
      if (g_int_00811764 == (int *)0x0) {
        pMVar24 = this_00->field_1A5B->field_02E6;
        if (pMVar24 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar24,0x2594,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
        goto cf_common_exit_005A8CA7;
      }
      FUN_006b6160(local_6b8,(int)(g_int_00811764 + 6));
      local_698 = 0;
      if (*(int *)(this_00->field_1AEC + 8) < 1) {
        pcVar31 = (char *)0x0;
      }
      else {
        pcVar31 = (char *)**(undefined4 **)(this_00->field_1AEC + 0x14);
      }
      if (*(int *)(this_00->field_1AE8 + 8) < 1) {
        pcVar17 = (char *)0x0;
      }
      else {
        pcVar17 = (char *)**(undefined4 **)(this_00->field_1AE8 + 0x14);
      }
      CFsgsConnection::CreateGame
                ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,0x17e0,pcVar17,pcVar31,
                 local_6b8);
      pCVar29 = PTR_00802a30;
      if (PTR_00802a30 == (CursorClassTy *)0x0) goto cf_common_exit_005A8CA7;
      uVar22 = PTR_00802a30->field_00C9;
      uVar18 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 5;
      pCVar29->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
      iVar13 = pCVar29->field_00C9;
      iVar38 = pCVar29->field_00C5;
      goto cf_common_exit_005A52AA;
    }
    if ((FVar3 != CASE_8) ||
       (((PTR_00802a30 != (CursorClassTy *)0x0 && (PTR_00802a30->field_0493 == '\x05')) ||
        (this_00->field_1EBE == 0)))) goto cf_common_exit_005A8CA7;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      PTR_00802a30->field_0493 = 5;
      pCVar29->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
      CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
      pCVar29->field_0xd2 = 0;
      *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
    }
    this_00->field_002D = 0x26;
    FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
    pCVar29 = PTR_00802a30;
    iVar13 = this_00->field_1EBE;
    if (*(uint *)(iVar13 + 0xc) <= *(uint *)&this_00->field_0x31) goto cf_common_exit_005A8CA7;
    local_15 = '\x01';
    local_8 = (uint *)(*(int *)(iVar13 + 8) * *(uint *)&this_00->field_0x31 +
                      *(int *)(iVar13 + 0x1c));
    if (local_8 == (uint *)0x0) goto cf_common_exit_005A8CA7;
    puVar16 = local_8 + 0x13;
    iVar13 = -1;
    puVar32 = puVar16;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      uVar27 = *puVar32;
      puVar32 = (uint *)((int)puVar32 + 1);
    } while ((byte)uVar27 != 0);
    if (iVar13 != -2) {
      if (*(int *)(this_00->field_1AEC + 8) < 1) {
        pbVar28 = (byte *)0x0;
      }
      else {
        pbVar28 = (byte *)**(undefined4 **)(this_00->field_1AEC + 0x14);
      }
      do {
        bVar26 = (byte)*puVar16;
        bVar36 = bVar26 < *pbVar28;
        if (bVar26 != *pbVar28) {
LAB_005a4eca:
          iVar13 = (1 - (uint)bVar36) - (uint)(bVar36 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar26 == 0) break;
        bVar26 = *(byte *)((int)puVar16 + 1);
        bVar36 = bVar26 < pbVar28[1];
        if (bVar26 != pbVar28[1]) goto LAB_005a4eca;
        puVar16 = (uint *)((int)puVar16 + 2);
        pbVar28 = pbVar28 + 2;
      } while (bVar26 != 0);
      iVar13 = 0;
LAB_005a4ecf:
      if (iVar13 != 0) {
        local_15 = '\0';
        PTR_00802a30->field_0493 = 1;
        pCVar29->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
        CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
        pCVar29->field_0xd2 = 0;
        *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
        pMVar24 = this_00->field_1A5B->field_02E6;
        if (pMVar24 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar24,0x258b,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
      }
    }
    puVar16 = local_8;
    if (local_15 == '\0') goto cf_common_exit_005A8CA7;
    thunk_FUN_005daa60();
    FUN_006b61a0(local_22c,(byte *)(puVar16 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    iVar13 = Library::MSVCRT::__setjmp3(local_3b4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar16 = local_8;
    if (iVar13 == 0) {
      Library::DKW::DDX::FUN_006b6a50
                ((int *)&g_int_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)((_union_1226 *)(local_8 + 4))->S_un_b,local_22c);
    }
    pCVar29 = PTR_00802a30;
    g_currentExceptionFrame = local_3b4.previous;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      uVar22 = PTR_00802a30->field_00C9;
      uVar18 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      pCVar29->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar29,CASE_0,uVar18,uVar22);
      CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
      pCVar29->field_0xd2 = 0;
      *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
    }
    this_00 = local_20;
    if (g_int_00811764 == (int *)0x0) {
      pMVar24 = local_20->field_1A5B->field_02E6;
      if (pMVar24 != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(pMVar24,0x2595,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0
                           ,0,0);
      }
      goto cf_common_exit_005A8CA7;
    }
    CFsgsConnection::JoinGame((CFsgsConnection *)&DAT_00802a90,puVar16[1]);
    this_00 = local_20;
    DAT_0080877f = g_int_00811764[0xe];
    DAT_0080877e = 0;
    DAT_008087be = 0;
    local_20->field_1A61 = 0;
    DAT_008067a0 = 1;
    uVar27 = local_20->field_1EC2;
    if (uVar27 < 0x502) {
      if (uVar27 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar27 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar27 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar27 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    thunk_FUN_005b6350(local_20,0x6109,0,1);
    (**(code **)(this_00->field_0000 + 8))((MMObjTy *)this_00);
    pMVar24 = this_00->field_1A5B->field_02E6;
    if (pMVar24 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar24,1,0,1);
    }
    goto cf_common_exit_005A8CA7;
  }
  if (uVar27 < 0x6152) {
    if (uVar27 != 0x6151) {
      if (uVar27 < 0x6106) {
        if (uVar27 == 0x6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = param_1[4];
          this_00->field_0051 = param_1[5];
          this_00->field_0055 = param_1[6];
          thunk_FUN_005b66e0((STJellyGunC *)this_00);
        }
        else {
          switch(uVar27) {
          case 0:
            NoneFSGS(this_00,(int)unaff_EDI);
            break;
          case 2:
            InitFSGS(this_00,*(byte *)(param_1[5] + 0x14));
            break;
          case 3:
            DoneFSGS(this_00);
            break;
          case 5:
            PaintFSGS(this_00,'\0');
          }
        }
      }
      else {
        switch(uVar27) {
        case 0x6109:
        case 0x611f:
          StartSystemTy::InitChat(this_00->field_1A5B);
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = param_1[4];
          this_00->field_0051 = param_1[5];
          this_00->field_0055 = param_1[6];
          thunk_FUN_005b66e0((STJellyGunC *)this_00);
          break;
        case 0x614f:
          if (PTR_00802a30 != (CursorClassTy *)0x0) {
            PTR_00802a30->field_0493 = 1;
            pCVar29->field_0494 = 0xffff;
            CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
            CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
            pCVar29->field_0xd2 = 0;
            *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
          }
          pSVar6 = this_00->field_1A5B;
          puVar15 = local_19c;
          for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
            *puVar15 = 0;
            puVar15 = puVar15 + 1;
          }
          local_19c[2] = this_00->field_0008;
          local_19c[3] = 2;
          local_19c[4] = 0x6941;
          pMVar24 = pSVar6->field_02E6;
          if (pMVar24 == (MMsgTy *)0x0) {
            (**(code **)this_00->field_0000)(local_19c);
          }
          else {
            MMsgTy::SetMessage(pMVar24,0x2593,'\0',local_19c,(undefined4 *)0x0,(undefined4 *)0x0,
                               param_1[5],0x2599);
          }
          break;
        case 0x6150:
          if (this_00->field_1A5F == CASE_1) {
            if (PTR_00802a30 != (CursorClassTy *)0x0) {
              PTR_00802a30->field_0493 = 1;
              pCVar29->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
              CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
              pCVar29->field_0xd2 = 0;
              *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
            }
            iVar13 = param_1[5];
            puVar15 = local_160;
            for (iVar38 = 8; iVar38 != 0; iVar38 = iVar38 + -1) {
              *puVar15 = 0;
              puVar15 = puVar15 + 1;
            }
            local_160[2] = this_00->field_0008;
            local_160[3] = 2;
            local_160[4] = 0x6941;
            switch(iVar13) {
            case 1:
              UVar14 = 0x2580;
              break;
            case 2:
              UVar14 = 0x2581;
              break;
            case 3:
              UVar14 = 0x2582;
              break;
            case 4:
              UVar14 = 0x2583;
              break;
            default:
              UVar14 = 0x2584;
            }
            if ((UVar14 == 0) ||
               (pMVar24 = this_00->field_1A5B->field_02E6, pMVar24 == (MMsgTy *)0x0)) {
              (**(code **)this_00->field_0000)(local_160);
            }
            else if (UVar14 == 0x2584) {
              MMsgTy::SetMessage(pMVar24,0x2584,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,
                                 iVar13,0x2599);
            }
            else {
              MMsgTy::SetMessage(pMVar24,UVar14,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,0
                                 ,0);
            }
          }
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (this_00->field_1A5F != CASE_1) goto cf_common_exit_005A8CA7;
    CFsgsConnection::StartBanners((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      iVar13 = this_00->field_1AC0;
      uVar27 = *(uint *)(iVar13 + 0x14);
      if (uVar27 == 0) {
        uVar27 = ((uint)*(ushort *)(iVar13 + 0xe) * *(int *)(iVar13 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar13 + 8);
      }
      puVar15 = (undefined4 *)FUN_006b4fa0(iVar13);
      for (uVar23 = uVar27 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
        *puVar15 = 0xffffffff;
        puVar15 = puVar15 + 1;
      }
      for (uVar27 = uVar27 & 3; uVar27 != 0; uVar27 = uVar27 - 1) {
        *(undefined1 *)puVar15 = 0xff;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar41 = -1;
      iVar40 = -1;
      uVar27 = 2;
      iVar38 = -1;
      iVar13 = -1;
      puVar16 = (uint *)FUN_006b0140(0x25b6,HINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_1A73,puVar16,iVar13,iVar38,uVar27,iVar40,iVar41);
      FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
      CFsgsConnection::RequestDatafile((CFsgsConnection *)&DAT_00802a90,s_st_inf_007cc66c);
      goto cf_common_exit_005A8CA7;
    }
    goto LAB_005a6d57;
  }
  if (0x6333 < uVar27) {
    if (uVar27 == 0x6334) {
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_1BB9,
                 (int)param_1,0);
    }
    else if (uVar27 == 0x6335) {
      this_00->field_1C6A = *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
      if (this_00->field_1C4E != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,this_00->field_1C52,
                   this_00->field_1C66,this_00->field_1C6A);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (uVar27 == 0x6333) {
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_1B28,(int)param_1,
               0);
    goto cf_common_exit_005A8CA7;
  }
  switch(uVar27) {
  case 0x6152:
    if (this_00->field_1A5F != CASE_2) goto cf_common_exit_005A8CA7;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      PTR_00802a30->field_0493 = 1;
      pCVar29->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
      CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
      pCVar29->field_0xd2 = 0;
      *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
    }
    pSVar6 = this_00->field_1A5B;
    puVar15 = local_2c8;
    for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar15 = 0x10001;
      puVar15 = puVar15 + 1;
    }
    *(undefined2 *)puVar15 = 1;
    pMVar24 = pSVar6->field_02E6;
    if (pMVar24 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(pMVar24,(int)local_2c8);
    }
    switch(param_1[5]) {
    case 2:
      UVar14 = 0x258b;
      break;
    case 3:
      UVar14 = 0x258c;
      break;
    case 4:
      UVar14 = 0x258d;
      break;
    default:
      UVar14 = 0x2589;
      break;
    case 7:
      UVar14 = 0x25c2;
    }
    if ((UVar14 == 0) || (pMVar24 = this_00->field_1A5B->field_02E6, pMVar24 == (MMsgTy *)0x0))
    goto cf_common_exit_005A8CA7;
    if (UVar14 == 0x2589) {
      MMsgTy::SetMessage(pMVar24,0x2589,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                         param_1[5],0x2599);
      goto cf_common_exit_005A8CA7;
    }
    break;
  case 0x6153:
    if ((this_00->field_1A5F == CASE_2) || (this_00->field_1A5F == CASE_4)) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        PTR_00802a30->field_0493 = 1;
        pCVar29->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
        CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
        pCVar29->field_0xd2 = 0;
        *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
      }
      local_100 = s_Profile_Age_007cc1a8;
      local_fc = s_Profile_Sex_007cc198;
      local_f8 = s_Profile_Location_007cc184;
      local_f4 = s_Profile_Description_007cc16c;
      if (this_00->field_1A5F == CASE_2) {
        CFsgsConnection::RequestInfo((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,4,&local_100);
      }
      else {
        local_11c = s_Profile_Sex_007cc198;
        local_118 = s_Profile_Location_007cc184;
        local_114 = s_Profile_Description_007cc16c;
        local_124 = DAT_008030d4;
        local_120 = s_Profile_Age_007cc1a8;
        local_130 = &DAT_00802ad4;
        local_12c = &DAT_00802cd4;
        local_128 = &DAT_00802ed4;
        CFsgsConnection::UpdateInfo((CFsgsConnection *)&DAT_00802a90,4,&local_120,&local_130);
      }
      thunk_FUN_0055bf20(&DAT_00802a90,this_00->field_1A67);
      if ((AnonShape_006B5570_4D68B99C *)this_00->field_1E9E != (AnonShape_006B5570_4D68B99C *)0x0)
      {
        FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_00->field_1E9E);
      }
      puVar16 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,100);
      this_00->field_1E9E = puVar16;
      (**(code **)(this_00->field_0000 + 8))();
      this_00->field_1A61 = 6;
      if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
        local_ac = 0;
        local_a8 = 0;
        local_b0 = 0x10101;
        local_a4 = 0;
        thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_b0);
      }
    }
    goto cf_common_exit_005A8CA7;
  case 0x6154:
    if (this_00->field_1A5F == CASE_5) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        PTR_00802a30->field_0493 = 1;
        pCVar29->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
        CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
        pCVar29->field_0xd2 = 0;
        *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
      }
      uVar27 = param_1[5];
      if (uVar27 == 0) {
        this_00->field_002D = 0x6952;
        (**(code **)this_00->field_0000)(&this_00->field_0x1d);
      }
      else if ((uVar27 != 0) && (uVar27 < 3)) {
        puVar15 = local_300;
        for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar15 = 0x10001;
          puVar15 = puVar15 + 1;
        }
        pSVar6 = this_00->field_1A5B;
        *(undefined2 *)puVar15 = 1;
        pMVar24 = pSVar6->field_02E6;
        if (pMVar24 != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(pMVar24,(int)local_300);
        }
        pMVar24 = this_00->field_1A5B->field_02E6;
        if (pMVar24 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar24,(-(uint)(param_1[5] != 1) & 10) + 0x258e,'\0',(undefined4 *)0x0
                             ,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
      }
    }
    goto cf_common_exit_005A8CA7;
  case 0x6155:
    if (this_00->field_1A5F != CASE_4) goto cf_common_exit_005A8CA7;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      PTR_00802a30->field_0493 = 1;
      pCVar29->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
      CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
      pCVar29->field_0xd2 = 0;
      *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
    }
    if (param_1[5] == 0) goto LAB_005a67e1;
    if (6 < (uint)param_1[5]) goto cf_common_exit_005A8CA7;
    puVar15 = local_354;
    for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar15 = 0x10001;
      puVar15 = puVar15 + 1;
    }
    *(undefined2 *)puVar15 = 1;
    pMVar24 = this_00->field_1A5B->field_02E6;
    if (pMVar24 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(pMVar24,(int)local_354);
    }
    pMVar24 = this_00->field_1A5B->field_02E6;
    if (pMVar24 == (MMsgTy *)0x0) goto cf_common_exit_005A8CA7;
    switch(param_1[5]) {
    case 2:
      UVar14 = 0x2597;
      break;
    case 3:
      UVar14 = 0x2596;
      break;
    case 4:
      UVar14 = 0x25c3;
      break;
    case 5:
      UVar14 = 0x25c4;
      break;
    case 6:
      UVar14 = 0x25c5;
      break;
    default:
      UVar14 = 0x258f;
    }
    break;
  case 0x6156:
    if (this_00->field_1A5F != CASE_6) goto cf_common_exit_005A8CA7;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      PTR_00802a30->field_0493 = 1;
      pCVar29->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar29,CASE_0,pCVar29->field_00C5,pCVar29->field_00C9);
      CursorClassTy::DrawSprite(pCVar29,pCVar29->field_00C5,pCVar29->field_00C9);
      pCVar29->field_0xd2 = 0;
      *(undefined4 *)&pCVar29->field_0x4df = 0xffffffff;
    }
    UVar14 = 0;
    if (param_1[5] == 0xd) {
      UVar14 = 0x2590;
    }
    else if (param_1[5] == 0xf) {
      UVar14 = 0x2591;
    }
    if ((UVar14 == 0) || (pMVar24 = this_00->field_1A5B->field_02E6, pMVar24 == (MMsgTy *)0x0))
    goto cf_common_exit_005A8CA7;
    break;
  default:
    goto cf_common_exit_005A8CA7;
  }
  MMsgTy::SetMessage(pMVar24,UVar14,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
cf_common_exit_005A8CA7:
  g_currentExceptionFrame = local_21c.previous;
  uVar22 = MMObjTy::GetMessage((MMObjTy *)this_00,(int)param_1);
  return uVar22;
}


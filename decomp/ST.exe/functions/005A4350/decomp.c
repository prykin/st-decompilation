
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
  ushort uVar3;
  ccFntTy *pcVar4;
  StartSystemTy *pSVar5;
  LPCSTR pCVar6;
  LPCSTR pCVar7;
  LPCSTR pCVar8;
  int *piVar9;
  code *pcVar10;
  DWORD DVar11;
  int iVar12;
  UINT UVar13;
  undefined4 *puVar14;
  uint *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  ulong uVar18;
  LPCSTR pCVar19;
  HINSTANCE pHVar20;
  undefined3 extraout_var;
  undefined4 uVar21;
  uint uVar22;
  MMsgTy *pMVar23;
  byte bVar24;
  FSGSTy *this_00;
  undefined4 unaff_ESI;
  uint uVar25;
  byte *pbVar26;
  CursorClassTy *pCVar27;
  byte *pbVar28;
  void *unaff_EDI;
  char *pcVar29;
  uint *puVar30;
  LPCSTR pCVar31;
  char *pcVar32;
  bool bVar33;
  BITMAPINFO *pBVar34;
  int iVar35;
  DWORD DVar36;
  int iVar37;
  int iVar38;
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
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  FSGSTy *local_20;
  byte *local_1c;
  char local_15;
  BITMAPINFO *local_14;
  uint *local_10;
  byte *local_c;
  uint *local_8;
  
  local_20 = this;
  DVar11 = FUN_006e51b0(this->field_0010);
  pcVar29 = (char *)0x0;
  this->field_0061 = DVar11;
  local_21c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_21c;
  iVar12 = Library::MSVCRT::__setjmp3(local_21c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_21c.previous;
    iVar35 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048,0,iVar12,
                                &DAT_007a4ccc,s_FSGSTy__GetMessage_007cc5d8);
    if (iVar35 != 0) {
      pcVar10 = (code *)swi(3);
      uVar21 = (*pcVar10)();
      return uVar21;
    }
    RaiseInternalException(iVar12,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_20,(int)param_1);
  pCVar27 = DAT_00802a30;
  uVar25 = param_1[4];
  if (0x6949 < uVar25) {
    if (uVar25 < 0x6980) {
      if (uVar25 == 0x697f) {
        iVar12 = param_1[7];
        local_60 = *(int *)(iVar12 + 0x24) + -0xb4;
        local_58 = *(int *)(iVar12 + 0x2c);
        local_54 = *(int *)(iVar12 + 0x30);
        iVar35 = *(int *)(iVar12 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
        local_5c = iVar35;
        FUN_006b4170(this_00->field_1AC0,0,*(int *)(iVar12 + 0x24) + -0xb5,iVar35,local_58 + 2,
                     local_54,0xff);
        ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,local_60,iVar35,local_58,local_54
                        );
        if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)param_1[5],0,-1,0);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar12 = (uint)*(ushort *)(param_1 + 6) + local_60;
          FUN_006b5b10(this_00->field_1AC0,0,iVar12,iVar35 + 1,iVar12,local_54 + -2 + iVar35,9,0xd);
        }
        FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
        goto cf_common_exit_005A8CA7;
      }
      switch(uVar25) {
      case 0x694a:
      case 0x694e:
        (**(code **)(this_00->field_0000 + 8))();
        this_00->field_1A61 = (param_1[4] != 0x694a) + '\a';
        pSVar5 = this_00->field_1A5B;
        if (pSVar5->field_02E6 == (MMsgTy *)0x0) break;
        puVar14 = local_31c;
        for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
        }
        *(undefined2 *)puVar14 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        MMsgTy::StatePanel(pSVar5->field_02E6,(int)local_31c);
        puVar14 = &local_a0;
        goto cf_common_exit_005A7F3B;
      case 0x694b:
        if (this_00->field_1A5F == '\x02') {
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
        else if (this_00->field_1A5F == '\x05') {
          if (0 < *(int *)(this_00->field_1AF4 + 8)) {
            pcVar29 = (char *)**(undefined4 **)(this_00->field_1AF4 + 0x14);
          }
          iVar12 = -1;
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar29 + 1;
          } while (cVar2 != '\0');
          if (iVar12 == -2) {
            pMVar23 = this_00->field_1A5B->field_02E6;
            if (pMVar23 != (MMsgTy *)0x0) {
              MMsgTy::SetMessage(pMVar23,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                 (undefined4 *)0x0,0,0);
            }
          }
          else {
            puVar14 = local_1d8;
            for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar14 = 0xffffffff;
              puVar14 = puVar14 + 1;
            }
            *(undefined2 *)puVar14 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            pMVar23 = this_00->field_1A5B->field_02E6;
            if (pMVar23 != (MMsgTy *)0x0) {
              MMsgTy::StatePanel(pMVar23,(int)local_1d8);
            }
            pCVar27 = DAT_00802a30;
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar21 = DAT_00802a30->field_00C9;
              uVar17 = DAT_00802a30->field_00C5;
              DAT_00802a30->field_0493 = 5;
              pCVar27->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
              CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
              pCVar27->field_0xd2 = 0;
              *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
            }
            if (*(int *)(this_00->field_1AF4 + 8) < 1) {
              pcVar29 = (char *)0x0;
            }
            else {
              pcVar29 = (char *)**(undefined4 **)(this_00->field_1AF4 + 0x14);
            }
            if (*(int *)(this_00->field_1AEC + 8) < 1) {
              pcVar16 = (char *)0x0;
            }
            else {
              pcVar16 = (char *)**(undefined4 **)(this_00->field_1AEC + 0x14);
            }
            if (*(int *)(this_00->field_1AE8 + 8) < 1) {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,(char *)0x0,pcVar16,pcVar29);
            }
            else {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,
                         (char *)**(undefined4 **)(this_00->field_1AE8 + 0x14),pcVar16,pcVar29);
            }
          }
        }
        break;
      case 0x694c:
        if ((this_00->field_1AAB != (LPCSTR)0x0) &&
           (pHVar20 = ShellExecuteA(DAT_00856d78,&DAT_007cc624,this_00->field_1AAB,(LPCSTR)0x0,
                                    (LPCSTR)0x0,1), 0x20 < (int)pHVar20)) {
          CFsgsConnection::BannerClick((CFsgsConnection *)&DAT_00802a90,this_00->field_1AAF);
        }
        break;
      case 0x6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(this_00->field_1A5F) {
        case 6:
          local_30 = 0x10000;
        case 3:
          local_30 = CONCAT31(local_30._1_3_,1);
        case 5:
          local_30._0_2_ = CONCAT11(1,(undefined1)local_30);
        case 4:
          local_2c = 0x10100;
          this_00->field_1A61 = 2;
          break;
        case 7:
        case 8:
          local_30 = 0x100;
        case 9:
          this_00->field_1A61 = 6;
          break;
        case 10:
          pbVar26 = (byte *)this_00->field_1B0C;
          if (pbVar26 != (byte *)0x0) {
            pbVar28 = &DAT_00807e1d;
            do {
              bVar24 = *pbVar26;
              bVar33 = bVar24 < *pbVar28;
              if (bVar24 != *pbVar28) {
LAB_005a63e7:
                iVar12 = (1 - (uint)bVar33) - (uint)(bVar33 != 0);
                goto LAB_005a63ec;
              }
              if (bVar24 == 0) break;
              bVar24 = pbVar26[1];
              bVar33 = bVar24 < pbVar28[1];
              if (bVar24 != pbVar28[1]) goto LAB_005a63e7;
              pbVar26 = pbVar26 + 2;
              pbVar28 = pbVar28 + 2;
            } while (bVar24 != 0);
            iVar12 = 0;
LAB_005a63ec:
            if (iVar12 == 0) {
              if (*(int *)(this_00->field_1B00 + 8) < 1) {
                pcVar29 = (char *)0x0;
              }
              else {
                pcVar29 = (char *)**(undefined4 **)(this_00->field_1B00 + 0x14);
              }
              if (*(int *)(this_00->field_1AFC + 8) < 1) {
                pcVar16 = (char *)0x0;
              }
              else {
                pcVar16 = (char *)**(undefined4 **)(this_00->field_1AFC + 0x14);
              }
              if (*(int *)(this_00->field_1AF8 + 8) < 1) {
                pbVar26 = (byte *)0x0;
              }
              else {
                pbVar26 = (byte *)**(undefined4 **)(this_00->field_1AF8 + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar26,pcVar16,pcVar29,(int)this_00->field_1B04);
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
        pSVar5 = this_00->field_1A5B;
        if (pSVar5->field_02E6 != (MMsgTy *)0x0) {
          puVar14 = local_2e4;
          for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar14 = 0xffffffff;
            puVar14 = puVar14 + 1;
          }
          *(undefined2 *)puVar14 = 0xffff;
          MMsgTy::StatePanel(pSVar5->field_02E6,(int)local_2e4);
          thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_30);
        }
        break;
      case 0x6953:
        puVar14 = local_17c;
        for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
        }
        *(undefined2 *)puVar14 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if (*(int *)(this_00->field_1AE8 + 8) < 1) {
          pcVar29 = (char *)0x0;
        }
        else {
          pcVar29 = (char *)**(undefined4 **)(this_00->field_1AE8 + 0x14);
        }
        Library::MSVCRT::_strncpy(&DAT_00807e1d,pcVar29,0x40);
        DAT_00807e5c = 0;
        if (*(int *)(this_00->field_1AEC + 8) < 1) {
          pcVar29 = (char *)0x0;
        }
        else {
          pcVar29 = (char *)**(undefined4 **)(this_00->field_1AEC + 0x14);
        }
        uVar25 = 0xffffffff;
        do {
          pcVar16 = pcVar29;
          if (uVar25 == 0) break;
          uVar25 = uVar25 - 1;
          pcVar16 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar16;
        } while (cVar2 != '\0');
        uVar25 = ~uVar25;
        pcVar29 = pcVar16 + -uVar25;
        pcVar16 = (char *)&DAT_00807e5d;
        for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
          pcVar29 = pcVar29 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *pcVar16 = *pcVar29;
          pcVar29 = pcVar29 + 1;
          pcVar16 = pcVar16 + 1;
        }
        iVar12 = -1;
        pcVar29 = (char *)&DAT_00807e5d;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar29 + 1;
        } while (cVar2 != '\0');
        if (iVar12 == -2) {
          pMVar23 = this_00->field_1A5B->field_02E6;
          if (pMVar23 != (MMsgTy *)0x0) {
            MMsgTy::SetMessage(pMVar23,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                               (undefined4 *)0x0,0,0);
          }
          break;
        }
        if (this_00->field_1A5F != '\x02') {
          if (this_00->field_1A5F == '\x04') {
            if (*(int *)(this_00->field_1AF0 + 8) < 1) {
              pbVar26 = (byte *)0x0;
            }
            else {
              pbVar26 = (byte *)**(undefined4 **)(this_00->field_1AF0 + 0x14);
            }
            pbVar28 = (byte *)&DAT_00807e5d;
            do {
              bVar24 = *pbVar28;
              bVar33 = bVar24 < *pbVar26;
              if (bVar24 != *pbVar26) {
LAB_005a6653:
                iVar12 = (1 - (uint)bVar33) - (uint)(bVar33 != 0);
                goto LAB_005a6658;
              }
              if (bVar24 == 0) break;
              bVar24 = pbVar28[1];
              bVar33 = bVar24 < pbVar26[1];
              if (bVar24 != pbVar26[1]) goto LAB_005a6653;
              pbVar28 = pbVar28 + 2;
              pbVar26 = pbVar26 + 2;
            } while (bVar24 != 0);
            iVar12 = 0;
LAB_005a6658:
            if (iVar12 == 0) {
              pMVar23 = this_00->field_1A5B->field_02E6;
              if (pMVar23 != (MMsgTy *)0x0) {
                MMsgTy::StatePanel(pMVar23,(int)local_17c);
              }
              pCVar27 = DAT_00802a30;
              if (DAT_00802a30 != (CursorClassTy *)0x0) {
                uVar21 = DAT_00802a30->field_00C9;
                uVar17 = DAT_00802a30->field_00C5;
                DAT_00802a30->field_0493 = 5;
                pCVar27->field_0494 = 0xffff;
                CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
                CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
                pCVar27->field_0xd2 = 0;
                *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
              }
              if (*(int *)(this_00->field_1B00 + 8) < 1) {
                pcVar29 = (char *)0x0;
              }
              else {
                pcVar29 = (char *)**(undefined4 **)(this_00->field_1B00 + 0x14);
              }
              if (*(int *)(this_00->field_1AFC + 8) < 1) {
                pcVar16 = (char *)0x0;
              }
              else {
                pcVar16 = (char *)**(undefined4 **)(this_00->field_1AFC + 0x14);
              }
              if (*(int *)(this_00->field_1AF8 + 8) < 1) {
                pbVar26 = (byte *)0x0;
              }
              else {
                pbVar26 = (byte *)**(undefined4 **)(this_00->field_1AF8 + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar26,pcVar16,pcVar29,(int)this_00->field_1B04);
              CFsgsConnection::CreateNewAccount
                        ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
            }
            else {
              pMVar23 = this_00->field_1A5B->field_02E6;
              if (pMVar23 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar23,0x258a,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
          }
          break;
        }
        pMVar23 = this_00->field_1A5B->field_02E6;
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(pMVar23,(int)local_17c);
        }
        pCVar27 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          uVar21 = DAT_00802a30->field_00C9;
          uVar17 = DAT_00802a30->field_00C5;
          DAT_00802a30->field_0493 = 5;
          pCVar27->field_0494 = 0xffff;
          CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
          CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
          pCVar27->field_0xd2 = 0;
          *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
        }
LAB_005a67e1:
        uVar18 = CFsgsConnection::Login
                           ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
        if (uVar18 == 0) {
          DVar11 = GetLastError();
          thunk_FUN_0055beb0(&DAT_00802a90,DVar11);
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
        pCVar6 = (LPCSTR)this_00->field_1AB7;
        pCVar19 = (LPCSTR)0x0;
        pCVar31 = (LPCSTR)0x0;
        if (pCVar6 != (LPCSTR)0x0) {
          if (param_1[5] == 0) {
            switch(this_00->field_1A5F) {
            case 2:
            case 6:
            case 7:
              goto switchD_005a6a92_caseD_2;
            case 4:
              pCVar31 = (LPCSTR)this_00->field_1AC4;
              if (pCVar6 == pCVar31) {
                pCVar19 = pCVar31;
                pCVar31 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar6 == (LPCSTR)this_00->field_1AC8) {
                pCVar19 = (LPCSTR)this_00->field_1AC8;
                pCVar31 = (LPCSTR)this_00->field_1ACC;
              }
              else if (pCVar6 == (LPCSTR)this_00->field_1ACC) {
                pCVar19 = (LPCSTR)this_00->field_1ACC;
                pCVar31 = (LPCSTR)this_00->field_1AD8;
              }
              else if (pCVar6 == (LPCSTR)this_00->field_1AD8) {
                pCVar19 = (LPCSTR)this_00->field_1AD8;
                pCVar31 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar6 == (LPCSTR)this_00->field_1ADC) {
                pCVar19 = (LPCSTR)this_00->field_1ADC;
                pCVar31 = (LPCSTR)this_00->field_1AE0;
              }
              else {
                if (pCVar6 != (LPCSTR)this_00->field_1AE0) goto LAB_005a6cc4;
                pCVar19 = (LPCSTR)this_00->field_1AE0;
                pCVar31 = this_00->field_1AE4;
              }
              break;
            case 5:
              pCVar31 = (LPCSTR)this_00->field_1AC4;
              if (pCVar6 == pCVar31) {
                pCVar19 = pCVar31;
                pCVar31 = (LPCSTR)this_00->field_1AC8;
              }
              else if (pCVar6 == (LPCSTR)this_00->field_1AC8) {
                pCVar19 = (LPCSTR)this_00->field_1AC8;
                pCVar31 = (LPCSTR)this_00->field_1AD4;
              }
              else if (pCVar6 == (LPCSTR)this_00->field_1AD4) {
                pCVar19 = (LPCSTR)this_00->field_1AD4;
                pCVar31 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar19 = (LPCSTR)this_00->field_1ACC;
              }
              break;
            case 10:
              pCVar31 = (LPCSTR)this_00->field_1AD8;
              if (pCVar6 == pCVar31) {
                pCVar19 = pCVar31;
                pCVar31 = (LPCSTR)this_00->field_1ADC;
              }
              else if (pCVar6 == (LPCSTR)this_00->field_1ADC) {
                pCVar19 = (LPCSTR)this_00->field_1ADC;
                pCVar31 = (LPCSTR)this_00->field_1AE0;
              }
              else if (pCVar6 == (LPCSTR)this_00->field_1AE0) {
                pCVar19 = (LPCSTR)this_00->field_1AE0;
                pCVar31 = this_00->field_1AE4;
              }
              else {
LAB_005a6cc4:
                pCVar19 = this_00->field_1AE4;
              }
            }
          }
          else {
            switch(this_00->field_1A5F) {
            case 2:
            case 6:
            case 7:
switchD_005a6a92_caseD_2:
              pCVar31 = (LPCSTR)this_00->field_1AC4;
              if (pCVar6 == pCVar31) {
                pCVar19 = pCVar31;
                pCVar31 = (LPCSTR)this_00->field_1AC8;
              }
              else {
                pCVar19 = (LPCSTR)this_00->field_1AC8;
              }
              break;
            case 4:
              pCVar31 = (LPCSTR)this_00->field_1AC4;
              if (pCVar6 == pCVar31) {
                pCVar19 = pCVar31;
                pCVar31 = this_00->field_1AE4;
              }
              else {
                pCVar7 = (LPCSTR)this_00->field_1AC8;
                pCVar19 = pCVar7;
                if (((pCVar6 != pCVar7) &&
                    (pCVar8 = (LPCSTR)this_00->field_1ACC, pCVar19 = pCVar8, pCVar31 = pCVar7,
                    pCVar6 != pCVar8)) &&
                   (pCVar7 = (LPCSTR)this_00->field_1AD8, pCVar19 = pCVar7, pCVar31 = pCVar8,
                   pCVar6 != pCVar7)) {
                  pCVar8 = (LPCSTR)this_00->field_1ADC;
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case 5:
              pCVar31 = (LPCSTR)this_00->field_1AC4;
              if (pCVar6 == pCVar31) {
                pCVar19 = pCVar31;
                pCVar31 = (LPCSTR)this_00->field_1ACC;
              }
              else {
                pCVar7 = (LPCSTR)this_00->field_1AC8;
                pCVar19 = pCVar7;
                if ((pCVar6 != pCVar7) &&
                   (pCVar8 = (LPCSTR)this_00->field_1AD4, pCVar19 = pCVar8, pCVar31 = pCVar7,
                   pCVar6 != pCVar8)) {
                  pCVar19 = (LPCSTR)this_00->field_1ACC;
                  pCVar31 = pCVar8;
                }
              }
              break;
            case 10:
              pCVar7 = (LPCSTR)this_00->field_1AD8;
              if (pCVar6 == pCVar7) {
                pCVar19 = pCVar7;
                pCVar31 = this_00->field_1AE4;
              }
              else {
                pCVar8 = (LPCSTR)this_00->field_1ADC;
joined_r0x005a6ba3:
                pCVar19 = pCVar8;
                pCVar31 = pCVar7;
                if ((pCVar6 != pCVar8) &&
                   (pCVar7 = (LPCSTR)this_00->field_1AE0, pCVar19 = pCVar7, pCVar31 = pCVar8,
                   pCVar6 != pCVar7)) {
                  pCVar19 = this_00->field_1AE4;
                  pCVar31 = pCVar7;
                }
              }
            }
          }
        }
        this_00->field_002D = 0x20;
        if (pCVar19 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 0;
          FUN_006e6080(this_00,2,pCVar19,(undefined4 *)&this_00->field_0x1d);
        }
        if (pCVar31 != (LPCSTR)0x0) {
          *(undefined4 *)&this_00->field_0x31 = 1;
          FUN_006e6080(this_00,2,pCVar31,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x6956:
        this_00->field_1ED2 = 1;
LAB_005a6d57:
        DoLogon(this_00);
        break;
      case 0x6957:
        iVar12 = this_00->field_1AC0;
        uVar25 = *(uint *)(iVar12 + 0x14);
        if (uVar25 == 0) {
          uVar25 = ((uint)*(ushort *)(iVar12 + 0xe) * *(int *)(iVar12 + 4) + 0x1f >> 3 & 0x1ffffffc)
                   * *(int *)(iVar12 + 8);
        }
        puVar14 = (undefined4 *)FUN_006b4fa0(iVar12);
        for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
        }
        for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *(undefined1 *)puVar14 = 0xff;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
        iVar38 = -1;
        iVar37 = -1;
        uVar21 = 2;
        iVar35 = -1;
        iVar12 = -2;
        puVar15 = (uint *)FUN_006b0140(0x25be,DAT_00807618);
        ccFntTy::WrTxt(this_00->field_1A73,puVar15,iVar12,iVar35,uVar21,iVar37,iVar38);
        FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        wsprintfA(local_4b8,s_subtitans__s_007cc614,&DAT_0080f126);
        CFsgsConnection::DownloadFile
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar27 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          DAT_00802a30->field_0493 = 5;
          pCVar27->field_0494 = 0xffff;
          CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
          CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
          pCVar27->field_0xd2 = 0;
          *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (0x8160 < uVar25) {
      if (uVar25 < 0xc0a2) {
        if (uVar25 == 0xc0a1) {
          if ((this_00->field_1A6B != 0) && (this_00->field_1B10 != 0)) {
            this_00->field_002D = 0x20;
            *(undefined4 *)&this_00->field_0x31 = 1;
            FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)&this_00->field_0x1d);
          }
          goto cf_common_exit_005A8CA7;
        }
        switch(uVar25) {
        case 0x8161:
          if ((this_00->field_1E8E == 0) || (this_00->field_1E9A == 0)) break;
          pbVar26 = (byte *)param_1[7];
          local_1c = pbVar26;
          FUN_006b5f80(DAT_008075a8,*(int *)(pbVar26 + 0x24),
                       (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar26 + 0x28),
                       *(int *)(pbVar26 + 0x2c),0x11);
          if (this_00->field_1A5F == '\x06') {
            iVar12 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar26 + 0x28);
            PutDDXClip(*(int *)(pbVar26 + 0x24),iVar12,*(int *)(pbVar26 + 0x24) + -0x1e9,
                       iVar12 + -0x5e,*(uint *)(pbVar26 + 0x2c),(byte *)0x11,'\x01',
                       (BITMAPINFO *)this_00->field_1E9A);
            FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),0x11,0xff);
            if (this_00->field_1A60 == '\0') {
              iVar12 = this_00->field_1EA6;
              if (iVar12 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar12 + 0xc)) {
                  local_8 = (uint *)(*(int *)(iVar12 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar12 + 0x1c));
                }
                else {
                  local_8 = (uint *)0x0;
                }
                if (local_8 != (uint *)0x0) {
                  ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                   *(int *)(pbVar26 + 0x2c) + -0x46,0x11);
                  if (*(char *)((int)local_8 + 0x2d) == '\0') {
                    local_c = (byte *)thunk_FUN_0055c050(&DAT_00802a90,(int)local_8);
                    DibPut((undefined4 *)this_00->field_1E8E,3,1,'\x01',local_c);
                    if (local_c != (byte *)0x0) {
                      FUN_006ab060(&local_c);
                    }
                    ccFntTy::WrStr(this_00->field_1A73,local_8,0,-1,
                                   (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2)
                    ;
                    if ((*(byte *)((int)local_8 + 0x25) & 0x10) != 0) {
                      iVar12 = FUN_0070b3a0(this_00->field_1A8B,3);
                      FUN_006b5440(this_00->field_1E8E,0,*(int *)(pbVar26 + 0x2c) + -0x1d,
                                   (0x11 - *(int *)(iVar12 + 8)) / 2,iVar12,0,0xff);
                    }
                  }
                  else {
                    pbVar28 = (byte *)FUN_0070b3a0(this_00->field_1A87,1);
                    DibPut((undefined4 *)this_00->field_1E8E,3,(0x11 - *(int *)(pbVar28 + 8)) / 2,
                           '\x06',pbVar28);
                    iVar12 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                    iVar37 = -1;
                    iVar35 = 0;
                    puVar15 = (uint *)FUN_006b0140(0x2567,DAT_00807618);
                    ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar35,iVar37,iVar12);
                  }
                }
              }
            }
            else {
              iVar12 = this_00->field_1EAA;
              if (iVar12 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar12 + 0xc)) {
                  local_c = (byte *)(*(int *)(iVar12 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar12 + 0x1c));
                }
                else {
                  local_c = (byte *)0x0;
                }
                if (local_c != (byte *)0x0) {
                  uVar25 = *(uint *)(local_c + 0x60);
                  if ((uVar25 & 0x40) == 0) {
                    if ((uVar25 & 0x18) == 0) {
                      local_10 = (uint *)(CONCAT31(local_10._1_3_,-((uVar25 & 2) != 0)) & 0xffffff05
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
                                   *(int *)(pbVar26 + 0x2c) + -0x46,0x11);
                  iVar12 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                  wsprintfA((LPSTR)&DAT_0080f33a,s___d_s___0_d__d__007cc5f8,iVar12,local_c,
                            *(undefined4 *)(local_c + 100),iVar12);
                  ccFntTy::WrStr(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar12 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar26 + 0x28);
            PutDDXClip(*(int *)(pbVar26 + 0x24),iVar12,*(int *)(pbVar26 + 0x24) + -0x13,
                       iVar12 + -0x5e,*(uint *)(pbVar26 + 0x2c),(byte *)0x11,'\x01',
                       (BITMAPINFO *)this_00->field_1E9A);
            FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),0x11,0xff);
            iVar12 = this_00->field_1EBE;
            if (iVar12 != 0) {
              if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar12 + 0xc)) {
                local_10 = (uint *)(*(int *)(iVar12 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                   *(int *)(iVar12 + 0x1c));
              }
              else {
                local_10 = (uint *)0x0;
              }
              if (local_10 != (uint *)0x0) {
                iVar12 = -1;
                puVar15 = local_10 + 0x13;
                do {
                  if (iVar12 == 0) break;
                  iVar12 = iVar12 + -1;
                  uVar25 = *puVar15;
                  puVar15 = (uint *)((int)puVar15 + 1);
                } while ((char)uVar25 != '\0');
                pbVar26 = (byte *)FUN_0070b3a0(this_00->field_1A87,-(uint)(iVar12 != -2) & 4);
                DibPut((undefined4 *)this_00->field_1E8E,3,(0x11 - *(int *)(pbVar26 + 8)) / 2,'\x06'
                       ,pbVar26);
                ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0x23,0,
                                 *(int *)(local_1c + 0x2c) + -0x40,0x11);
                ccFntTy::WrStr(this_00->field_1A73,local_10 + 0xb,0,-1,
                               (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2);
                pbVar26 = local_1c;
              }
            }
          }
          DVar36 = *(DWORD *)(pbVar26 + 0x2c);
          pBVar34 = (BITMAPINFO *)this_00->field_1E8E;
          DVar11 = 0x11;
          iVar12 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar26 + 0x28);
          goto LAB_005a89f6;
        case 0x8162:
          if ((DAT_00802a30 != (CursorClassTy *)0x0) && (DAT_00802a30->field_0493 == '\x05')) break;
          if (this_00->field_1A60 != '\0') {
            iVar12 = this_00->field_1EAA;
            if (iVar12 != 0) {
              if ((uint)param_1[5] < *(uint *)(iVar12 + 0xc)) {
                pcVar29 = (char *)(*(int *)(iVar12 + 8) * param_1[5] + *(int *)(iVar12 + 0x1c));
              }
              else {
                pcVar29 = (char *)0x0;
              }
              if (pcVar29 != (char *)0x0) {
                if (DAT_00802a30 != (CursorClassTy *)0x0) {
                  uVar21 = DAT_00802a30->field_00C9;
                  uVar17 = DAT_00802a30->field_00C5;
                  DAT_00802a30->field_0493 = 5;
                  pCVar27->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
                  CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
                  pCVar27->field_0xd2 = 0;
                  *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
                }
                iVar12 = -1;
                pcVar16 = pcVar29 + 0x40;
                do {
                  if (iVar12 == 0) break;
                  iVar12 = iVar12 + -1;
                  cVar2 = *pcVar16;
                  pcVar16 = pcVar16 + 1;
                } while (cVar2 != '\0');
                if (iVar12 == -2) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar29,pcVar29 + 0x40,1);
                }
                else if (*(int *)(this_00->field_1AEC + 8) < 1) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar29,(char *)0x0,1);
                }
                else {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar29,
                                     (char *)**(undefined4 **)(this_00->field_1AEC + 0x14),1);
                }
              }
            }
            break;
          }
          uVar25 = param_1[5];
          if (uVar25 == 0) {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar21 = DAT_00802a30->field_00C9;
              uVar17 = DAT_00802a30->field_00C5;
              DAT_00802a30->field_0493 = 5;
              pCVar27->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
              CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
              pCVar27->field_0xd2 = 0;
              *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
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
          iVar12 = this_00->field_1EA6;
          if (uVar25 < *(uint *)(iVar12 + 0xc)) {
            pcVar29 = (char *)(*(int *)(iVar12 + 8) * uVar25 + *(int *)(iVar12 + 0x1c));
          }
          else {
            pcVar29 = (char *)0x0;
          }
          if (pcVar29 == (char *)0x0) break;
          if (this_00->field_1B0C != 0) {
            FUN_006ab060(&this_00->field_1B0C);
          }
          uVar25 = 0xffffffff;
          pcVar16 = pcVar29;
          do {
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            cVar2 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar2 != '\0');
          pcVar16 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar25);
          uVar25 = 0xffffffff;
          this_00->field_1B0C = pcVar16;
          do {
            pcVar32 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar32 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar32;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar32 + -uVar25;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar16 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar16 = pcVar16 + 1;
          }
          (**(code **)(this_00->field_0000 + 8))();
          this_00->field_1A61 = 10;
          this_00->field_1ED2 = 6;
          pSVar5 = this_00->field_1A5B;
          if (pSVar5->field_02E6 == (MMsgTy *)0x0) break;
          puVar14 = local_370;
          for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar14 = 0xffffffff;
            puVar14 = puVar14 + 1;
          }
          *(undefined2 *)puVar14 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          MMsgTy::StatePanel(pSVar5->field_02E6,(int)local_370);
          puVar14 = &local_80;
          goto cf_common_exit_005A7F3B;
        case 0x8163:
          if (this_00->field_1A5F == '\x06') {
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
          else if (this_00->field_1A5F == '\b') {
            iVar12 = this_00->field_1EBE;
            bVar33 = true;
            if (((iVar12 != 0) && ((uint)param_1[5] < *(uint *)(iVar12 + 0xc))) &&
               (iVar12 = *(int *)(iVar12 + 8) * param_1[5] + *(int *)(iVar12 + 0x1c), iVar12 != 0))
            {
              bVar33 = false;
              Library::DKW::TBL::FUN_006b6020(this_00->field_1AE8,0,(char *)(iVar12 + 0x2c));
              this_00->field_002D = 0x33;
              *(undefined4 *)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                         (BITMAPINFO *)this_00->field_1E92);
              FUN_006b4170(this_00->field_1E8E,0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,0x15e,0x11);
              uVar21 = 2;
              iVar37 = -1;
              iVar35 = -1;
              puVar15 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar35,iVar37,uVar21);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x11,0x14a,0x11);
              ccFntTy::WrStr(this_00->field_1A73,(uint *)(iVar12 + 0x1c),0,-1,0);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x22,0x15e,0x11);
              uVar21 = 2;
              iVar37 = -1;
              iVar35 = -1;
              puVar15 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar35,iVar37,uVar21);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x33,0x14a,0x11);
              uVar21 = 0;
              iVar37 = -1;
              iVar35 = 0;
              if (*(char *)(iVar12 + 0x7c) == '\0') {
                puVar15 = (uint *)FUN_006b0140(0x2573,DAT_00807618);
              }
              else {
                puVar15 = (uint *)(iVar12 + 0x83);
              }
              ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar35,iVar37,uVar21);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x44,0x15e,0x11);
              uVar21 = 2;
              iVar37 = -1;
              iVar35 = -1;
              puVar15 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar35,iVar37,uVar21);
              if (*(char *)(iVar12 + 0x7c) != '\0') {
                ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x55,0x14a,0x11);
                iVar35 = (int)*(char *)(iVar12 + 0x7e) << 1;
                wsprintfA((LPSTR)&DAT_0080f33a,s__dx_d_007cc60c,iVar35,iVar35);
                ccFntTy::WrStr(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
              }
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x66,0x15e,0x11);
              uVar21 = 2;
              iVar37 = -1;
              iVar35 = -1;
              puVar15 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar35,iVar37,uVar21);
              if (*(char *)(iVar12 + 0x7c) != '\0') {
                ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,10,0x77,0x14a,0x11);
                uVar21 = FUN_006b0140(0x2574,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(int)*(char *)(iVar12 + 0x7d),uVar21
                         );
                ccFntTy::WrStr(this_00->field_1A73,&DAT_0080f33a,0,-1,0);
              }
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
            if (bVar33) {
              Library::DKW::TBL::FUN_006b6020(this_00->field_1AE8,0,&DAT_008016a0);
              this_00->field_002D = 0x33;
              *(undefined4 *)&this_00->field_0x31 = this_00->field_1AE8;
              FUN_006e6080(this_00,2,this_00->field_1AC4,(undefined4 *)&this_00->field_0x1d);
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              PutDDXClip(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                         (BITMAPINFO *)this_00->field_1E92);
              FUN_006b4170(this_00->field_1E8E,0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,0x15e,0x11);
              uVar21 = 2;
              iVar35 = -1;
              iVar12 = -1;
              puVar15 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar12,iVar35,uVar21);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x22,0x15e,0x11);
              uVar21 = 2;
              iVar35 = -1;
              iVar12 = -1;
              puVar15 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar12,iVar35,uVar21);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x44,0x15e,0x11);
              uVar21 = 2;
              iVar35 = -1;
              iVar12 = -1;
              puVar15 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar12,iVar35,uVar21);
              ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0x66,0x15e,0x11);
              uVar21 = 2;
              iVar35 = -1;
              iVar12 = -1;
              puVar15 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar12,iVar35,uVar21);
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,(BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case 0x8164:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00->field_1CDB,(int)param_1,0);
          break;
        case 0x8165:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00->field_1D6C,(int)param_1,0);
          break;
        case 0x8166:
          uVar25 = *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
          this_00->field_1E1D = uVar25;
          if (this_00->field_1E01 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1E45,this_00->field_1E01,this_00->field_1E05,
                       this_00->field_1E19,uVar25);
          }
        }
        goto cf_common_exit_005A8CA7;
      }
      switch(uVar25) {
      case 0xc0a2:
        if (*(int *)(this_00->field_1EA2 + 8) < 1) {
          pcVar29 = (char *)0x0;
        }
        else {
          pcVar29 = (char *)**(undefined4 **)(this_00->field_1EA2 + 0x14);
        }
        bVar33 = thunk_FUN_00571810(pcVar29);
        if (CONCAT31(extraout_var,bVar33) == 0) {
          if (*(int *)(this_00->field_1EA2 + 8) < 1) {
            pcVar29 = (char *)0x0;
          }
          else {
            pcVar29 = (char *)**(undefined4 **)(this_00->field_1EA2 + 0x14);
          }
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,pcVar29);
        }
        else {
          iVar35 = 0;
          iVar12 = this_00->field_1A5B->field_0696;
          if (0 < *(int *)(iVar12 + 8)) {
            if (*(int *)(iVar12 + 8) < 1) {
              pcVar29 = (char *)0x0;
              goto LAB_005a8b12;
            }
            do {
              pcVar29 = *(char **)(*(int *)(iVar12 + 0x14) + iVar35 * 4);
LAB_005a8b12:
              AddMessage(this_00,8,&DAT_008016a0,pcVar29,8);
              iVar35 = iVar35 + 1;
              iVar12 = this_00->field_1A5B->field_0696;
            } while (iVar35 < *(int *)(iVar12 + 8));
          }
        }
        Library::DKW::TBL::FUN_006b6020(this_00->field_1EA2,0,&DAT_008016a0);
        this_00->field_002D = 0x33;
        *(undefined4 *)&this_00->field_0x31 = this_00->field_1EA2;
        goto LAB_005a8c85;
      case 0xc0a3:
        iVar12 = this_00->field_1AE8;
        iVar35 = *(int *)(iVar12 + 8);
joined_r0x005a8b8f:
        if (0 < iVar35) {
          pcVar29 = (char *)**(undefined4 **)(iVar12 + 0x14);
        }
        iVar37 = -1;
        do {
          if (iVar37 == 0) break;
          iVar37 = iVar37 + -1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar29 + 1;
        } while (cVar2 != '\0');
        if (iVar37 != -2) {
          if (*(int *)(this_00->field_1AEC + 8) < 1) {
            pcVar29 = (char *)0x0;
          }
          else {
            pcVar29 = (char *)**(undefined4 **)(this_00->field_1AEC + 0x14);
          }
          if (iVar35 < 1) {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)0x0,pcVar29,1);
          }
          else {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)**(undefined4 **)(iVar12 + 0x14),pcVar29,1);
          }
        }
        break;
      case 0xc0a4:
        if (this_00->field_1A60 != '\0') break;
        this_00->field_002D = 0x26;
        FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
        uVar25 = *(uint *)&this_00->field_0x31;
        if (uVar25 == 0) break;
        iVar12 = this_00->field_1EA6;
        if (uVar25 < *(uint *)(iVar12 + 0xc)) {
          iVar12 = *(int *)(iVar12 + 8) * uVar25 + *(int *)(iVar12 + 0x1c);
        }
        else {
          iVar12 = 0;
        }
        if (*(int *)(this_00->field_1EA2 + 8) < 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = **(undefined4 **)(this_00->field_1EA2 + 0x14);
        }
        wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007cc5f0,uVar21,iVar12);
        Library::DKW::TBL::FUN_006b6020(this_00->field_1EA2,0,(char *)&DAT_0080f33a);
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
    if (uVar25 == 0x8160) {
      param_1[6] = 0x11;
      goto cf_common_exit_005A8CA7;
    }
    switch(uVar25) {
    case 0x6980:
      piVar9 = (int *)param_1[6];
      iVar12 = *piVar9;
      local_140 = iVar12 + -0xb4;
      iVar35 = piVar9[1];
      local_13c = iVar35 + -0xaa;
      local_138 = piVar9[2];
      local_134 = piVar9[3];
      FUN_006b4170(this_00->field_1AC0,0,iVar12 + -0xb3,iVar35 + -0xa9,local_138 + -2,local_134 + -2
                   ,0xff);
      if (DAT_0080735f != '\0') {
        pbVar26 = (byte *)FUN_0070b3a0(this_00->field_1A83,0);
        DibPut((undefined4 *)this_00->field_1AC0,iVar12 + -0xb2,iVar35 + -0xa8,'\x06',pbVar26);
      }
      break;
    case 0x6981:
      pcVar4 = this_00->field_1A73;
      local_14 = (BITMAPINFO *)0x0;
      if (pcVar4->field_00A0 != 0) {
        FUN_00710790((int)pcVar4);
      }
      iVar12 = param_1[7];
      iVar35 = *(int *)&pcVar4->field_0x8a;
      local_50 = *(int *)(iVar12 + 0x24) + -0xb4;
      local_48 = *(int *)(iVar12 + 0x2c);
      local_44 = *(int *)(iVar12 + 0x30);
      local_4c = *(int *)(iVar12 + 0x28) -
                 ((-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa);
      FUN_006b4170(this_00->field_1AC0,0,*(int *)(iVar12 + 0x24) + -0xb5,local_4c,local_48 + 2,
                   local_44,0xff);
      iVar12 = param_1[5];
      if (iVar12 != 0) {
        local_8 = (uint *)0x0;
        do {
          if (*(uint **)(iVar12 + (int)local_8) == (uint *)0x0) break;
          iVar35 = FUN_007111c0(this_00->field_1A73,*(uint **)(iVar12 + (int)local_8));
          ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,local_50,
                           (int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                           local_4c,local_48,iVar35);
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)(param_1[5] + (int)local_8),0,-1,0);
          local_14 = (BITMAPINFO *)
                     ((int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     this_00->field_1A73->field_005C + iVar35);
          iVar12 = param_1[5];
          local_8 = local_8 + 1;
        } while (iVar12 != 0);
      }
      if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
        iVar37 = (uint)*(ushort *)((int)param_1 + 0x1a) + local_4c;
        iVar12 = (uint)*(ushort *)(param_1 + 6) + local_50;
        FUN_006b5b10(this_00->field_1AC0,0,iVar12,iVar37,iVar12,iVar37 + iVar35,9,0xd);
      }
      goto LAB_005a7c92;
    case 0x6982:
      if (((this_00->field_1E8E != 0) && (this_00->field_1E92 != 0)) &&
         (local_8 = (uint *)param_1[7], local_8 != (uint *)0x0)) {
        if (this_00->field_1A5F == '\x03') {
          pcVar4 = this_00->field_1A73;
          local_1c = (byte *)this_00->field_1B08;
        }
        else {
          pcVar4 = this_00->field_1A77;
          local_1c = (byte *)this_00->field_1E9E;
        }
        FUN_006b5f80(DAT_008075a8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        PutDDXClip(local_8[9],local_8[10],6,1,local_8[0xb],(byte *)local_8[0xc],'\x01',
                   (BITMAPINFO *)this_00->field_1E92);
        FUN_006b4170(this_00->field_1E8E,0,0,0,local_8[0xb],local_8[0xc],0xff);
        local_14 = (BITMAPINFO *)(uint)*(ushort *)((int)param_1 + 0x16);
        if ((int)local_14 <
            (int)((int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                 local_8[0x78])) {
          do {
            if ((int)local_14 < *(int *)(local_1c + 8)) {
              local_10 = *(uint **)(*(int *)(local_1c + 0x14) + (int)local_14 * 4);
            }
            else {
              local_10 = (uint *)0x0;
            }
            if (local_10 != (uint *)0x0) {
              if (pcVar4->field_00A0 != 0) {
                FUN_00710790((int)pcVar4);
              }
              local_c = *(byte **)&pcVar4->field_0x8a;
              if (pcVar4->field_00A0 != 0) {
                FUN_00710790((int)pcVar4);
              }
              ccFntTy::SetSurf(pcVar4,this_00->field_1E8E,0,0,
                               ((int)local_14 - (uint)*(ushort *)((int)param_1 + 0x16)) *
                               *(int *)&pcVar4->field_0x8a,*(int *)(this_00->field_1E8E + 4),
                               (int)local_c);
              ccFntTy::WrStr(pcVar4,local_10,0,-1,2);
            }
            local_14 = (BITMAPINFO *)((int)&(local_14->bmiHeader).biSize + 1);
          } while ((int)local_14 < (int)((uint)*(ushort *)((int)param_1 + 0x16) + local_8[0x78]));
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,local_8[9],local_8[10],(BITMAPINFO *)this_00->field_1E8E,(uint *)0x0
                   ,0,0,local_8[0xb],local_8[0xc],0x10000ff);
      }
      break;
    case 0x6983:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != 0)) {
        iVar12 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar12 + 0x24),*(int *)(iVar12 + 0x28),
                     *(int *)(iVar12 + 0x2c),*(int *)(iVar12 + 0x30));
        PutDDXClip(*(int *)(iVar12 + 0x24),*(int *)(iVar12 + 0x28),6,0x15f,*(uint *)(iVar12 + 0x2c),
                   *(byte **)(iVar12 + 0x30),'\x01',(BITMAPINFO *)this_00->field_1E92);
        FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(iVar12 + 0x2c),*(int *)(iVar12 + 0x30),0xff)
        ;
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(this_00->field_1A77,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x14);
          ccFntTy::WrStr(this_00->field_1A77,*(uint **)param_1[5],0,-1,5);
        }
        uVar3 = *(ushort *)(param_1 + 6);
        if ((uVar3 != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          FUN_006b5b10(this_00->field_1E8E,0,(uint)uVar3,2,(uint)uVar3,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar12 + 0x24),*(int *)(iVar12 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(iVar12 + 0x2c),
                   *(DWORD *)(iVar12 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((this_00->field_1E8E == 0) || (this_00->field_1E92 == 0)) break;
      pbVar26 = (byte *)param_1[7];
      FUN_006b5f80(DAT_008075a8,*(int *)(pbVar26 + 0x24),*(int *)(pbVar26 + 0x28),
                   *(int *)(pbVar26 + 0x2c),*(int *)(pbVar26 + 0x30));
      PutDDXClip(*(int *)(pbVar26 + 0x24),*(int *)(pbVar26 + 0x28),*(int *)(pbVar26 + 0x24) + -0x13,
                 0x160,*(uint *)(pbVar26 + 0x2c),*(byte **)(pbVar26 + 0x30),'\x01',
                 (BITMAPINFO *)this_00->field_1E92);
      FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),*(int *)(pbVar26 + 0x30),0xff)
      ;
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),
                       *(int *)(pbVar26 + 0x30));
      if ((short)param_1[5] == 1) {
        iVar12 = 2;
      }
      else {
        iVar12 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar37 = -1;
      iVar35 = -1;
      puVar15 = (uint *)FUN_006b0140(0x2565,DAT_00807618);
      ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar35,iVar37,iVar12);
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
      local_14 = (BITMAPINFO *)0x0;
      switch(uVar25) {
      case 0x6985:
      case 0x6986:
        local_14 = (BITMAPINFO *)this_00->field_1E9A;
        local_10 = (uint *)0x1e9;
        break;
      default:
        goto switchD_005a7593_caseD_6987;
      case 0x6989:
      case 0x698a:
      case 0x698d:
        local_14 = (BITMAPINFO *)this_00->field_1E92;
        local_10 = (uint *)0x199;
        break;
      case 0x698e:
      case 0x698f:
      case 0x6990:
      case 0x6991:
      case 0x6992:
        local_14 = (BITMAPINFO *)this_00->field_1E92;
        local_10 = (uint *)0x22;
      }
      local_1c = (byte *)0x5e;
switchD_005a7593_caseD_6987:
      if (local_14 == (BITMAPINFO *)0x0) break;
      local_c = (byte *)param_1[7];
      switch(uVar25 - 0x6985) {
      case 0:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case 8:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar25 = this_00->field_1EC2;
        if (uVar25 < 0x401) {
          if (uVar25 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar25 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar25 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar25 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar25 == 0x502) {
          local_8 = (uint *)0x235d;
        }
        else {
LAB_005a7656:
          local_8 = (uint *)0x235c;
        }
        break;
      case 5:
        if (this_00->field_1EC6 == -1) {
          pcVar29 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar16 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar16 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar16;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar16 + -uVar25;
          pcVar16 = (char *)&DAT_0080f33a;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar16 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar16 = pcVar16 + 1;
          }
        }
        else {
          if ((uint)this_00->field_1ECA < *(uint *)(DAT_0080c502 + 0xc)) {
            pcVar29 = (char *)(*(int *)(DAT_0080c502 + 8) * this_00->field_1ECA +
                              *(int *)(DAT_0080c502 + 0x1c));
          }
          else {
            pcVar29 = (char *)0x0;
          }
          if (pcVar29 == (char *)0x0) {
            pcVar29 = &DAT_008016a0;
          }
          uVar25 = 0xffffffff;
          do {
            pcVar16 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar16 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar16;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar16 + -uVar25;
          pcVar16 = (char *)&DAT_0080f33a;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar16 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar16 = pcVar16 + 1;
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
      pbVar26 = local_c;
      FUN_006b5f80(DAT_008075a8,*(int *)(local_c + 0x24),*(int *)(local_c + 0x28),
                   *(int *)(local_c + 0x2c),*(int *)(local_c + 0x30));
      PutDDXClip(*(int *)(pbVar26 + 0x24),*(int *)(pbVar26 + 0x28),
                 *(int *)(pbVar26 + 0x24) - (int)local_10,*(int *)(pbVar26 + 0x28) - (int)local_1c,
                 *(uint *)(pbVar26 + 0x2c),*(byte **)(pbVar26 + 0x30),'\x01',local_14);
      FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),*(int *)(pbVar26 + 0x30),0xff)
      ;
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),
                       *(int *)(pbVar26 + 0x30));
      if ((short)param_1[5] == 1) {
        local_c = (byte *)0x2;
      }
      else {
        local_c = (byte *)((-(uint)((short)param_1[5] != 0) & 2) + 1);
      }
      if (param_1[4] == 0x698a) {
        puVar15 = &DAT_0080f33a;
      }
      else {
        puVar15 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      }
      ccFntTy::WrStr(this_00->field_1A73,puVar15,-1,-1,local_c);
      if ((short)param_1[5] == 0) {
        bVar24 = 0xd;
      }
      else {
        bVar24 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_00->field_1E8E,0,0,0,*(undefined4 **)(pbVar26 + 0x2c),
                   *(int *)(pbVar26 + 0x30),4,bVar24);
      if ((short)param_1[5] == 0) {
        bVar24 = 0xd;
      }
      else {
        bVar24 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_00->field_1E8E,0,2,2,(undefined4 *)(*(int *)(pbVar26 + 0x2c) + -4),
                   *(int *)(pbVar26 + 0x30) + -4,4,bVar24);
LAB_005a754e:
      DVar11 = *(DWORD *)(pbVar26 + 0x30);
      DVar36 = *(DWORD *)(pbVar26 + 0x2c);
      pBVar34 = (BITMAPINFO *)this_00->field_1E8E;
      iVar12 = *(int *)(pbVar26 + 0x28);
LAB_005a89f6:
      Library::DKW::DDX::FUN_006b4680
                (DAT_0080759c,*(int *)(pbVar26 + 0x24),iVar12,pBVar34,(uint *)0x0,0,0,DVar36,DVar11,
                 0x10000ff);
      break;
    case 0x6987:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E9A != 0)) {
        iVar12 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar12 + 0x24),*(int *)(iVar12 + 0x28),
                     *(int *)(iVar12 + 0x2c),*(int *)(iVar12 + 0x30));
        PutDDXClip(*(int *)(iVar12 + 0x24),*(int *)(iVar12 + 0x28),*(int *)(iVar12 + 0x24) + -0x1e9,
                   *(int *)(iVar12 + 0x28) + -0x5e,*(uint *)(iVar12 + 0x2c),
                   *(byte **)(iVar12 + 0x30),'\x01',(BITMAPINFO *)this_00->field_1E9A);
        FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(iVar12 + 0x2c),*(int *)(iVar12 + 0x30),0xff)
        ;
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar35 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(this_00->field_1E8E,0,iVar35,4,iVar35,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar12 + 0x24),*(int *)(iVar12 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(iVar12 + 0x2c),
                   *(DWORD *)(iVar12 + 0x30),0x10000ff);
      }
      break;
    case 0x6988:
      if ((this_00->field_1E8E != 0) && (this_00->field_1E92 != 0)) {
        iVar12 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar12 + 0x24),*(int *)(iVar12 + 0x28),
                     *(int *)(iVar12 + 0x2c),*(int *)(iVar12 + 0x30));
        PutDDXClip(*(int *)(iVar12 + 0x24),*(int *)(iVar12 + 0x28),
                   *(int *)(iVar12 + 0x24) - ((-(uint)(this_00->field_1A5F != '\t') & 0x177) + 0x22)
                   ,*(int *)(iVar12 + 0x28) + -0x5e,*(uint *)(iVar12 + 0x2c),
                   *(byte **)(iVar12 + 0x30),'\x01',(BITMAPINFO *)this_00->field_1E92);
        FUN_006b4170(this_00->field_1E8E,0,0,0,*(int *)(iVar12 + 0x2c),*(int *)(iVar12 + 0x30),0xff)
        ;
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1E8E,0,0,0,
                           *(int *)(this_00->field_1E8E + 4),0x19);
          ccFntTy::WrStr(this_00->field_1A73,*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar35 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(this_00->field_1E8E,0,iVar35,3,iVar35,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar12 + 0x24),*(int *)(iVar12 + 0x28),
                   (BITMAPINFO *)this_00->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(iVar12 + 0x2c),
                   *(DWORD *)(iVar12 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar9 = (int *)param_1[6];
      iVar12 = *piVar9;
      iVar35 = iVar12 + -0xb4;
      local_3c = piVar9[1] + -0xaa;
      local_38 = (undefined4 *)piVar9[2];
      local_34 = piVar9[3];
      local_40 = iVar35;
      FUN_006b4170(this_00->field_1AC0,0,iVar35,local_3c,(int)local_38,local_34,0xff);
      if ((short)param_1[5] == 0) {
        bVar24 = 0xd;
      }
      else {
        bVar24 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_00->field_1AC0,0,iVar35,local_3c,local_38,local_34,4,bVar24);
      if ((short)param_1[5] == 0) {
        bVar24 = 0xd;
      }
      else {
        bVar24 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_00->field_1AC0,0,iVar12 + -0xb2,local_3c + 2,local_38 + -1,local_34 + -4,4,
                   bVar24);
      uVar25 = this_00->field_1EC2;
      if (uVar25 < 0x502) {
        if (uVar25 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar25 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar25 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar25 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,iVar35,local_3c,(int)local_38,
                       local_34);
      if ((short)param_1[5] == 1) {
        iVar12 = 2;
      }
      else {
        iVar12 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar37 = -1;
      iVar35 = -1;
      puVar15 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      ccFntTy::WrStr(this_00->field_1A73,puVar15,iVar35,iVar37,iVar12);
LAB_005a7c92:
      FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
      break;
    case 0x698c:
      ccFntTy::SetSurf(this_00->field_1A73,param_1[6],0,0,0,0,0);
      iVar12 = this_00->field_1FB3;
      if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar12 + 0xc)) {
        puVar15 = (uint *)(*(int *)(iVar12 + 8) * (uint)*(ushort *)(param_1 + 5) +
                          *(int *)(iVar12 + 0x1c));
      }
      else {
        puVar15 = (uint *)0x0;
      }
      ccFntTy::WrStr(this_00->field_1A73,puVar15,-1,-1,
                     3 - (uint)(*(short *)((int)param_1 + 0x16) != 1));
      if (*(short *)((int)param_1 + 0x16) == 1) {
        iVar12 = param_1[6];
        FUN_006b5ee0(iVar12,0,0,0,*(int *)(iVar12 + 4),*(int *)(iVar12 + 8),0xf,0xd);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (uVar25 == 0x6949) {
    (**(code **)(this_00->field_0000 + 8))();
    this_00->field_1A61 = 9;
    pSVar5 = this_00->field_1A5B;
    if (pSVar5->field_02E6 == (MMsgTy *)0x0) goto cf_common_exit_005A8CA7;
    puVar14 = local_2ac;
    for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    MMsgTy::StatePanel(pSVar5->field_02E6,(int)local_2ac);
    puVar14 = &local_d0;
cf_common_exit_005A7F3B:
    thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,puVar14);
    goto cf_common_exit_005A8CA7;
  }
  if (0x63ff < uVar25) {
    if (uVar25 < 0x6907) {
      if (uVar25 == 0x6906) {
        if (DAT_00802a30->field_0493 == '\x05') goto cf_common_exit_005A8CA7;
        local_c = (byte *)param_1[7];
        this_00->field_1F43 = 0x6506;
        uVar21 = *(undefined4 *)(local_c + 8);
        this_00->field_1F63 = 0x698c;
        this_00->field_1F4B = uVar21;
        *(undefined4 *)(this_00->field_1FB3 + 0xc) = 0;
        this_00->field_20BB = 1;
        pcVar29 = (char *)FUN_006b0140(0x25b4,DAT_00807618);
        uVar25 = 0xffffffff;
        do {
          pcVar16 = pcVar29;
          if (uVar25 == 0) break;
          uVar25 = uVar25 - 1;
          pcVar16 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar16;
        } while (cVar2 != '\0');
        uVar25 = ~uVar25;
        pcVar29 = pcVar16 + -uVar25;
        pcVar16 = &this_00->field_0x1fb7;
        for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
          pcVar29 = pcVar29 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *pcVar16 = *pcVar29;
          pcVar29 = pcVar29 + 1;
          pcVar16 = pcVar16 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
        this_00->field_20BB = 2;
        pcVar29 = (char *)FUN_006b0140(0x25b5,DAT_00807618);
        uVar25 = 0xffffffff;
        do {
          pcVar16 = pcVar29;
          if (uVar25 == 0) break;
          uVar25 = uVar25 - 1;
          pcVar16 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar16;
        } while (cVar2 != '\0');
        uVar25 = ~uVar25;
        pcVar29 = pcVar16 + -uVar25;
        pcVar16 = &this_00->field_0x1fb7;
        for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
          pcVar29 = pcVar29 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *pcVar16 = *pcVar29;
          pcVar29 = pcVar29 + 1;
          pcVar16 = pcVar16 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
        iVar12 = this_00->field_1FB3;
        this_00->field_1F7B = *(undefined4 *)(iVar12 + 0xc);
        uVar25 = 0;
        this_00->field_1F73 = 0;
        if (*(uint *)(iVar12 + 0xc) != 0) {
          do {
            if (DAT_00803140 ==
                *(int *)(*(int *)(iVar12 + 8) * uVar25 + *(int *)(iVar12 + 0x1c) + 0x104)) {
              this_00->field_1F73 = uVar25;
              break;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < *(uint *)(iVar12 + 0xc));
        }
      }
      else {
        if (uVar25 < 0x6903) {
          if (uVar25 == 0x6902) {
            iVar12 = this_00->field_1AE8;
            iVar35 = *(int *)(iVar12 + 8);
            goto joined_r0x005a8b8f;
          }
          if (0x6900 < uVar25) {
            if ((uVar25 == 0x6901) && (this_00->field_1A60 == '\0')) {
              this_00->field_002D = 0x26;
              puVar1 = &this_00->field_0x1d;
              FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)puVar1);
              iVar12 = this_00->field_1EA6;
              if ((uint)*(ushort *)&this_00->field_0x31 < *(uint *)(iVar12 + 0xc)) {
                iVar12 = *(int *)(iVar12 + 8) * (uint)*(ushort *)&this_00->field_0x31 +
                         *(int *)(iVar12 + 0x1c);
              }
              else {
                iVar12 = 0;
              }
              if (iVar12 != 0) {
                this_00->field_002D = 0x32;
                FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                iVar35 = *(int *)&this_00->field_0x31;
                if (iVar35 != 0) {
                  if (*(int *)(iVar35 + 8) < 1) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = **(undefined4 **)(iVar35 + 0x14);
                  }
                  uVar17 = FUN_006b0140(0x2568,DAT_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,s__s__s__s_007cc62c,uVar17,iVar12,uVar21);
                  CFsgsConnection::SendChatMessage
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  Library::DKW::TBL::FUN_006b6020(this_00->field_1EA2,0,&DAT_008016a0);
                  this_00->field_002D = 0x33;
                  *(undefined4 *)&this_00->field_0x31 = this_00->field_1EA2;
                  FUN_006e6080(this_00,2,this_00->field_1B10,(undefined4 *)puVar1);
                }
              }
            }
            goto cf_common_exit_005A8CA7;
          }
          if (uVar25 == 0x6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_1AD0,(undefined4 *)&this_00->field_0x1d);
            goto cf_common_exit_005A8CA7;
          }
          if (uVar25 != 0x6506) {
            if (uVar25 == 0x68ff) {
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
          iVar12 = this_00->field_1FB3;
          uVar25 = param_1[5];
          if (*(uint *)(iVar12 + 0xc) <= uVar25) goto cf_common_exit_005A8CA7;
          if (this_00->field_1A5F == '\t') {
            if (param_1[6] == this_00->field_1EB6) {
              DAT_00803140 = *(ulong *)(*(int *)(iVar12 + 8) * uVar25 + 0x104 +
                                       *(int *)(iVar12 + 0x1c));
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar27 = DAT_00802a30;
joined_r0x005a55e5:
              DAT_00802a30 = pCVar27;
              if (pCVar27 == (CursorClassTy *)0x0) goto cf_common_exit_005A5634;
              pCVar27->field_0493 = 5;
              pCVar27->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
              iVar12 = pCVar27->field_00C9;
              iVar35 = pCVar27->field_00C5;
            }
            else {
              DAT_00803144 = *(int *)(*(int *)(iVar12 + 8) * uVar25 + 0x104 +
                                     *(int *)(iVar12 + 0x1c));
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar27 = DAT_00802a30;
              if (DAT_00802a30 == (CursorClassTy *)0x0) goto cf_common_exit_005A5634;
              uVar21 = DAT_00802a30->field_00C9;
              uVar17 = DAT_00802a30->field_00C5;
              DAT_00802a30->field_0493 = 5;
              pCVar27->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
              iVar12 = pCVar27->field_00C9;
              iVar35 = pCVar27->field_00C5;
            }
LAB_005a561c:
            CursorClassTy::DrawSprite(pCVar27,iVar35,iVar12);
            pCVar27->field_0xd2 = 0;
            *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
          }
          else {
            if (param_1[6] != this_00->field_1EB6) {
              iVar12 = *(int *)(iVar12 + 8) * uVar25 + *(int *)(iVar12 + 0x1c);
              this_00->field_1EC6 = *(undefined4 *)(iVar12 + 0x104);
              this_00->field_1ECA = *(undefined4 *)(iVar12 + 0x108);
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,(char *)0x0);
              DVar11 = timeGetTime();
              this_00->field_1A63 = DVar11;
              pCVar27 = DAT_00802a30;
              goto joined_r0x005a55e5;
            }
            this_00->field_1EC2 =
                 *(undefined4 *)(*(int *)(iVar12 + 8) * uVar25 + 0x104 + *(int *)(iVar12 + 0x1c));
            if (this_00->field_1A5F == '\b') {
              iVar12 = this_00->field_1EC2;
              puVar14 = local_24c;
              for (iVar35 = 8; iVar35 != 0; iVar35 = iVar35 + -1) {
                *puVar14 = 0;
                puVar14 = puVar14 + 1;
              }
              this_00->field_1EC6 = 0xffffffff;
              local_238 = (uint)(iVar12 == 0x100);
              this_00->field_1ECA = 0;
              local_23c = 0x20;
              if (this_00->field_1EBA != 0) {
                FUN_006e6080(this_00,2,this_00->field_1EBA,local_24c);
              }
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,(char *)0x0);
              DVar11 = timeGetTime();
              this_00->field_1A63 = DVar11;
              pCVar27 = DAT_00802a30;
              if (DAT_00802a30 != (CursorClassTy *)0x0) {
                uVar21 = DAT_00802a30->field_00C9;
                uVar17 = DAT_00802a30->field_00C5;
                DAT_00802a30->field_0493 = 5;
                pCVar27->field_0494 = 0xffff;
                CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
                iVar12 = pCVar27->field_00C9;
                iVar35 = pCVar27->field_00C5;
                goto LAB_005a561c;
              }
            }
          }
cf_common_exit_005A5634:
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,param_1[6],(undefined4 *)&this_00->field_0x1d);
          goto cf_common_exit_005A8CA7;
        }
        if (uVar25 == 0x6903) {
          if (DAT_00802a30 != (CursorClassTy *)0x0) {
            uVar21 = DAT_00802a30->field_00C9;
            uVar17 = DAT_00802a30->field_00C5;
            DAT_00802a30->field_0493 = 5;
            pCVar27->field_0494 = 0xffff;
            CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
            CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
            pCVar27->field_0xd2 = 0;
            *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
          }
          if (this_00->field_1A5F == '\x06') {
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_00->field_1A60 = 1;
          }
          if (this_00->field_1A5F == '\b') {
            CFsgsConnection::RequestGameList
                      ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,(char *)0x0);
            DVar11 = timeGetTime();
            this_00->field_1A63 = DVar11;
          }
          goto cf_common_exit_005A8CA7;
        }
        if (uVar25 == 0x6904) {
          local_c = (byte *)param_1[7];
          this_00->field_1F43 = 0x6506;
          uVar21 = *(undefined4 *)(local_c + 8);
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = uVar21;
          *(undefined4 *)(this_00->field_1FB3 + 0xc) = 0;
          if (this_00->field_1A5F == '\b') {
            this_00->field_20BB = 0;
            pcVar29 = (char *)FUN_006b0140(0x235c,DAT_00807618);
            uVar25 = 0xffffffff;
            do {
              pcVar16 = pcVar29;
              if (uVar25 == 0) break;
              uVar25 = uVar25 - 1;
              pcVar16 = pcVar29 + 1;
              cVar2 = *pcVar29;
              pcVar29 = pcVar16;
            } while (cVar2 != '\0');
            uVar25 = ~uVar25;
            pcVar29 = pcVar16 + -uVar25;
            pcVar16 = &this_00->field_0x1fb7;
            for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
              pcVar29 = pcVar29 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
              *pcVar16 = *pcVar29;
              pcVar29 = pcVar29 + 1;
              pcVar16 = pcVar16 + 1;
            }
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          }
          this_00->field_20BB = 0x100;
          pcVar29 = (char *)FUN_006b0140(0x2341,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar16 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar16 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar16;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar16 + -uVar25;
          pcVar16 = &this_00->field_0x1fb7;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar16 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar16 = pcVar16 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          this_00->field_20BB = 0x501;
          pcVar29 = (char *)FUN_006b0140(0x2342,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar16 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar16 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar16;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar16 + -uVar25;
          pcVar16 = &this_00->field_0x1fb7;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar16 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar16 = pcVar16 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          this_00->field_20BB = 0x200;
          pcVar29 = (char *)FUN_006b0140(0x235a,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar16 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar16 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar16;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar16 + -uVar25;
          pcVar16 = &this_00->field_0x1fb7;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar16 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar16 = pcVar16 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          this_00->field_20BB = 0x400;
          pcVar29 = (char *)FUN_006b0140(0x235b,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar16 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar16 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar16;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar16 + -uVar25;
          pcVar16 = &this_00->field_0x1fb7;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar16 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar16 = pcVar16 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          this_00->field_20BB = 0x502;
          pcVar29 = (char *)FUN_006b0140(0x235d,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar16 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar16 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar16;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar16 + -uVar25;
          pcVar16 = &this_00->field_0x1fb7;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar16 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar16 = pcVar16 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          iVar12 = this_00->field_1FB3;
          this_00->field_1F7B = *(undefined4 *)(iVar12 + 0xc);
          uVar25 = 0;
          this_00->field_1F73 = 0;
          if (*(uint *)(iVar12 + 0xc) != 0) {
            do {
              if (this_00->field_1EC2 ==
                  *(int *)(*(int *)(iVar12 + 8) * uVar25 + *(int *)(iVar12 + 0x1c) + 0x104)) {
                this_00->field_1F73 = uVar25;
                break;
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < *(uint *)(iVar12 + 0xc));
          }
        }
        else {
          if (uVar25 != 0x6905) goto cf_common_exit_005A8CA7;
          local_c = (byte *)param_1[7];
          this_00->field_1F43 = 0x6506;
          uVar21 = *(undefined4 *)(local_c + 8);
          this_00->field_1F63 = 0x698c;
          this_00->field_1F4B = uVar21;
          *(undefined4 *)(this_00->field_1FB3 + 0xc) = 0;
          this_00->field_20BB = 0xffffffff;
          pcVar29 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar16 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar16 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar16;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar16 + -uVar25;
          pcVar16 = &this_00->field_0x1fb7;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar16 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar16 = pcVar16 + 1;
          }
          this_00->field_20BF = 0;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
          local_8 = (uint *)0x0;
          if (*(int *)(DAT_0080c502 + 0xc) != 0) {
            iVar12 = DAT_0080c502;
            if (*(int *)(DAT_0080c502 + 0xc) == 0) {
              pcVar29 = (char *)0x0;
              goto LAB_005a5859;
            }
            do {
              pcVar29 = (char *)(*(int *)(iVar12 + 8) * (int)local_8 + *(int *)(iVar12 + 0x1c));
LAB_005a5859:
              if (pcVar29 != (char *)0x0) {
                this_00->field_20BB = *(undefined4 *)(pcVar29 + 0x90);
                uVar25 = 0xffffffff;
                do {
                  pcVar16 = pcVar29;
                  if (uVar25 == 0) break;
                  uVar25 = uVar25 - 1;
                  pcVar16 = pcVar29 + 1;
                  cVar2 = *pcVar29;
                  pcVar29 = pcVar16;
                } while (cVar2 != '\0');
                uVar25 = ~uVar25;
                pcVar29 = pcVar16 + -uVar25;
                pcVar16 = &this_00->field_0x1fb7;
                for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
                  *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
                  pcVar29 = pcVar29 + 4;
                  pcVar16 = pcVar16 + 4;
                }
                for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                  *pcVar16 = *pcVar29;
                  pcVar29 = pcVar29 + 1;
                  pcVar16 = pcVar16 + 1;
                }
                this_00->field_20BF = local_8;
                Library::DKW::TBL::FUN_006ae1c0
                          ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
                iVar12 = DAT_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < *(uint **)(iVar12 + 0xc));
          }
          iVar12 = this_00->field_1FB3;
          uVar25 = 0;
          uVar21 = *(undefined4 *)(iVar12 + 0xc);
          this_00->field_1F73 = 0;
          this_00->field_1F7B = uVar21;
          if (*(uint *)(iVar12 + 0xc) != 0) {
            do {
              if (this_00->field_1EC6 ==
                  *(int *)(*(int *)(iVar12 + 8) * uVar25 + *(int *)(iVar12 + 0x1c) + 0x104)) {
                this_00->field_1F73 = uVar25;
                break;
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < *(uint *)(iVar12 + 0xc));
          }
        }
      }
      pcVar4 = this_00->field_1A73;
      this_00->field_1F97 = *(undefined4 *)(local_c + 0x24);
      this_00->field_1F9F = *(int *)(local_c + 0x2c) + 10;
      this_00->field_1F9B = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar12 = pcVar4->field_00A0;
joined_r0x005a5b89:
      if (iVar12 != 0) {
        FUN_00710790((int)pcVar4);
      }
      this_00->field_1F77 = *(undefined4 *)&pcVar4->field_0x8a;
      (**(code **)(*(int *)this_00->field_000C + 8))(0x100ef,0,0,&this_00->field_0x1f33,0);
      goto cf_common_exit_005A8CA7;
    }
    switch(uVar25) {
    case 0x6907:
      if (DAT_00802a30->field_0493 == '\x05') break;
      local_c = (byte *)param_1[7];
      this_00->field_1F43 = 0x6506;
      uVar21 = *(undefined4 *)(local_c + 8);
      this_00->field_1F63 = 0x698c;
      this_00->field_1F4B = uVar21;
      *(undefined4 *)(this_00->field_1FB3 + 0xc) = 0;
      this_00->field_20BB = 0;
      pcVar29 = (char *)FUN_006b0140(0x25bf,DAT_00807618);
      uVar25 = 0xffffffff;
      do {
        pcVar16 = pcVar29;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar16 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar16;
      } while (cVar2 != '\0');
      uVar25 = ~uVar25;
      pcVar29 = pcVar16 + -uVar25;
      pcVar16 = &this_00->field_0x1fb7;
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
        pcVar29 = pcVar29 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar16 = *pcVar29;
        pcVar29 = pcVar29 + 1;
        pcVar16 = pcVar16 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
      this_00->field_20BB = 1;
      pcVar29 = (char *)FUN_006b0140(0x25c0,DAT_00807618);
      uVar25 = 0xffffffff;
      do {
        pcVar16 = pcVar29;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar16 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar16;
      } while (cVar2 != '\0');
      uVar25 = ~uVar25;
      pcVar29 = pcVar16 + -uVar25;
      pcVar16 = &this_00->field_0x1fb7;
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
        pcVar29 = pcVar29 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar16 = *pcVar29;
        pcVar29 = pcVar29 + 1;
        pcVar16 = pcVar16 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
      this_00->field_20BB = 2;
      pcVar29 = (char *)FUN_006b0140(0x25c1,DAT_00807618);
      uVar25 = 0xffffffff;
      do {
        pcVar16 = pcVar29;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar16 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar16;
      } while (cVar2 != '\0');
      uVar25 = ~uVar25;
      pcVar29 = pcVar16 + -uVar25;
      pcVar16 = &this_00->field_0x1fb7;
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar29;
        pcVar29 = pcVar29 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar16 = *pcVar29;
        pcVar29 = pcVar29 + 1;
        pcVar16 = pcVar16 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1FB3,(undefined4 *)&this_00->field_0x1fb7);
      iVar12 = this_00->field_1FB3;
      this_00->field_1F7B = *(undefined4 *)(iVar12 + 0xc);
      uVar25 = 0;
      this_00->field_1F73 = 0;
      if (*(uint *)(iVar12 + 0xc) != 0) {
        do {
          if (DAT_00803144 ==
              *(int *)(*(int *)(iVar12 + 8) * uVar25 + *(int *)(iVar12 + 0x1c) + 0x104)) {
            this_00->field_1F73 = uVar25;
            break;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < *(uint *)(iVar12 + 0xc));
      }
      pcVar4 = this_00->field_1A73;
      this_00->field_1F97 = *(undefined4 *)(local_c + 0x24);
      this_00->field_1F9F = *(int *)(local_c + 0x2c) + 10;
      this_00->field_1F9B = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar12 = pcVar4->field_00A0;
      goto joined_r0x005a5b89;
    case 0x6908:
      if (DAT_00802a30->field_0493 == '\x05') break;
      bVar33 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar33 = true;
      }
      if ((!bVar33) ||
         (CFsgsConnection::RequestLadderList
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar27 = DAT_00802a30, DAT_00802a30 == (CursorClassTy *)0x0)) break;
      uVar21 = DAT_00802a30->field_00C9;
      uVar17 = DAT_00802a30->field_00C5;
      DAT_00802a30->field_0493 = 5;
      pCVar27->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
      iVar12 = pCVar27->field_00C9;
      iVar35 = pCVar27->field_00C5;
      goto cf_common_exit_005A52AA;
    case 0x6909:
      if ((DAT_00802a30->field_0493 == '\x05') || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar27 = DAT_00802a30;
      if (DAT_00802a30 == (CursorClassTy *)0x0) break;
      uVar21 = DAT_00802a30->field_00C9;
      uVar17 = DAT_00802a30->field_00C5;
      DAT_00802a30->field_0493 = 5;
      pCVar27->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
      iVar12 = pCVar27->field_00C9;
      iVar35 = pCVar27->field_00C5;
cf_common_exit_005A52AA:
      CursorClassTy::DrawSprite(pCVar27,iVar35,iVar12);
      pCVar27->field_0xd2 = 0;
      *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
      break;
    case 0x690a:
      if ((DAT_00802a30->field_0493 == '\x05') || (iVar12 = this_00->field_1AE8, iVar12 == 0))
      break;
      if (0 < *(int *)(iVar12 + 8)) {
        pcVar29 = (char *)**(undefined4 **)(iVar12 + 0x14);
      }
      iVar35 = -1;
      do {
        if (iVar35 == 0) break;
        iVar35 = iVar35 + -1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar29 + 1;
      } while (cVar2 != '\0');
      if (iVar35 == -2) break;
      if (*(int *)(iVar12 + 8) < 1) {
        pcVar29 = (char *)0x0;
      }
      else {
        pcVar29 = (char *)**(undefined4 **)(iVar12 + 0x14);
      }
      CFsgsConnection::RequestLadderListByName
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,pcVar29,0xf);
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
      bVar24 = (char)param_1[4] - 0x13;
      local_c = (byte *)CONCAT31(local_c._1_3_,bVar24);
      if (((uint)this_00->field_1EE3 <= (uint)bVar24) || (this_00->field_1EDB == 0)) break;
      iVar35 = (uint)bVar24 * 0x24;
      iVar12 = -1;
      pcVar29 = (char *)(iVar35 + 0x14 + this_00->field_1EDB);
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar29 + 1;
      } while (cVar2 != '\0');
      if (iVar12 == -2) break;
      if (this_00->field_1B0C != 0) {
        FUN_006ab060(&this_00->field_1B0C);
      }
      uVar25 = 0xffffffff;
      pcVar29 = (char *)(iVar35 + 0x14 + this_00->field_1EDB);
      do {
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar29 + 1;
      } while (cVar2 != '\0');
      pcVar29 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar25);
      this_00->field_1B0C = pcVar29;
      uVar25 = 0xffffffff;
      pcVar16 = (char *)(iVar35 + 0x14 + this_00->field_1EDB);
      do {
        pcVar32 = pcVar16;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar32 = pcVar16 + 1;
        cVar2 = *pcVar16;
        pcVar16 = pcVar32;
      } while (cVar2 != '\0');
      uVar25 = ~uVar25;
      pcVar16 = pcVar32 + -uVar25;
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar29 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar29 = pcVar29 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar29 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar29 = pcVar29 + 1;
      }
      (**(code **)(this_00->field_0000 + 8))();
      this_00->field_1A61 = 10;
      this_00->field_1ED2 = 9;
      pSVar5 = this_00->field_1A5B;
      if (pSVar5->field_02E6 == (MMsgTy *)0x0) break;
      puVar14 = local_338;
      for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar14 = 0xffffffff;
        puVar14 = puVar14 + 1;
      }
      *(undefined2 *)puVar14 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      MMsgTy::StatePanel(pSVar5->field_02E6,(int)local_338);
      puVar14 = &local_70;
      goto cf_common_exit_005A7F3B;
    case 0x693f:
      thunk_FUN_0059b820(this_00);
      break;
    case 0x6940:
      thunk_FUN_0059be50(this_00);
      break;
    case 0x6941:
      thunk_FUN_005b6350(this_00,0x6105,0,1);
      this_00->field_1A61 = 0;
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      (**(code **)(this_00->field_0000 + 8))();
      pMVar23 = this_00->field_1A5B->field_02E6;
      if (pMVar23 != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(pMVar23,1,0,1);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (uVar25 == 0x63ff) {
    cVar2 = this_00->field_1A5F;
    if (cVar2 == '\x03') {
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
    if (cVar2 == '\a') {
      if ((DAT_00802a30 != (CursorClassTy *)0x0) && (DAT_00802a30->field_0493 == '\x05'))
      goto cf_common_exit_005A8CA7;
      thunk_FUN_005daa60();
      local_290.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_290;
      iVar12 = Library::MSVCRT::__setjmp3(local_290.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_00 = local_20;
      if (iVar12 == 0) {
        FUN_006b6150((uint)DAT_00807362);
        if (*(int *)(this_00->field_1AE8 + 8) < 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = **(undefined4 **)(this_00->field_1AE8 + 0x14);
        }
        Library::DKW::DDX::FUN_006b69b0(&DAT_00811764,(int *)&DAT_007cd6f0,0,uVar21,0x20);
        g_currentExceptionFrame = local_290.previous;
      }
      else {
        g_currentExceptionFrame = local_290.previous;
        iVar12 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xc08,0,iVar12,
                                    &DAT_007a4ccc,s_FSGSTy__GetMessage_MESS_ID_MSGOK_007cc638);
        if (iVar12 != 0) {
          pcVar10 = (code *)swi(3);
          uVar21 = (*pcVar10)();
          return uVar21;
        }
      }
      if (DAT_00811764 == 0) {
        pMVar23 = this_00->field_1A5B->field_02E6;
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar23,0x2594,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
        goto cf_common_exit_005A8CA7;
      }
      FUN_006b6160(local_6b8,DAT_00811764 + 0x18);
      local_698 = 0;
      if (*(int *)(this_00->field_1AEC + 8) < 1) {
        pcVar29 = (char *)0x0;
      }
      else {
        pcVar29 = (char *)**(undefined4 **)(this_00->field_1AEC + 0x14);
      }
      if (*(int *)(this_00->field_1AE8 + 8) < 1) {
        pcVar16 = (char *)0x0;
      }
      else {
        pcVar16 = (char *)**(undefined4 **)(this_00->field_1AE8 + 0x14);
      }
      CFsgsConnection::CreateGame
                ((CFsgsConnection *)&DAT_00802a90,this_00->field_1EC2,0x17e0,pcVar16,pcVar29,
                 local_6b8);
      pCVar27 = DAT_00802a30;
      if (DAT_00802a30 == (CursorClassTy *)0x0) goto cf_common_exit_005A8CA7;
      uVar21 = DAT_00802a30->field_00C9;
      uVar17 = DAT_00802a30->field_00C5;
      DAT_00802a30->field_0493 = 5;
      pCVar27->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
      iVar12 = pCVar27->field_00C9;
      iVar35 = pCVar27->field_00C5;
      goto cf_common_exit_005A52AA;
    }
    if ((cVar2 != '\b') ||
       (((DAT_00802a30 != (CursorClassTy *)0x0 && (DAT_00802a30->field_0493 == '\x05')) ||
        (this_00->field_1EBE == 0)))) goto cf_common_exit_005A8CA7;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30->field_0493 = 5;
      pCVar27->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
      CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
      pCVar27->field_0xd2 = 0;
      *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
    }
    this_00->field_002D = 0x26;
    FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
    pCVar27 = DAT_00802a30;
    iVar12 = this_00->field_1EBE;
    if (*(uint *)(iVar12 + 0xc) <= *(uint *)&this_00->field_0x31) goto cf_common_exit_005A8CA7;
    local_15 = '\x01';
    local_8 = (uint *)(*(int *)(iVar12 + 8) * *(uint *)&this_00->field_0x31 +
                      *(int *)(iVar12 + 0x1c));
    if (local_8 == (uint *)0x0) goto cf_common_exit_005A8CA7;
    puVar15 = local_8 + 0x13;
    iVar12 = -1;
    puVar30 = puVar15;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      uVar25 = *puVar30;
      puVar30 = (uint *)((int)puVar30 + 1);
    } while ((byte)uVar25 != 0);
    if (iVar12 != -2) {
      if (*(int *)(this_00->field_1AEC + 8) < 1) {
        pbVar26 = (byte *)0x0;
      }
      else {
        pbVar26 = (byte *)**(undefined4 **)(this_00->field_1AEC + 0x14);
      }
      do {
        bVar24 = (byte)*puVar15;
        bVar33 = bVar24 < *pbVar26;
        if (bVar24 != *pbVar26) {
LAB_005a4eca:
          iVar12 = (1 - (uint)bVar33) - (uint)(bVar33 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar24 == 0) break;
        bVar24 = *(byte *)((int)puVar15 + 1);
        bVar33 = bVar24 < pbVar26[1];
        if (bVar24 != pbVar26[1]) goto LAB_005a4eca;
        puVar15 = (uint *)((int)puVar15 + 2);
        pbVar26 = pbVar26 + 2;
      } while (bVar24 != 0);
      iVar12 = 0;
LAB_005a4ecf:
      if (iVar12 != 0) {
        local_15 = '\0';
        DAT_00802a30->field_0493 = 1;
        pCVar27->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
        CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
        pCVar27->field_0xd2 = 0;
        *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
        pMVar23 = this_00->field_1A5B->field_02E6;
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar23,0x258b,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
      }
    }
    puVar15 = local_8;
    if (local_15 == '\0') goto cf_common_exit_005A8CA7;
    thunk_FUN_005daa60();
    FUN_006b61a0(local_22c,(byte *)(puVar15 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    iVar12 = Library::MSVCRT::__setjmp3(local_3b4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar15 = local_8;
    if (iVar12 == 0) {
      Library::DKW::DDX::FUN_006b6a50
                (&DAT_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)((_union_1226 *)(local_8 + 4))->S_un_b,local_22c);
    }
    pCVar27 = DAT_00802a30;
    g_currentExceptionFrame = local_3b4.previous;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar21 = DAT_00802a30->field_00C9;
      uVar17 = DAT_00802a30->field_00C5;
      DAT_00802a30->field_0493 = 1;
      pCVar27->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,uVar17,uVar21);
      CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
      pCVar27->field_0xd2 = 0;
      *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
    }
    this_00 = local_20;
    if (DAT_00811764 == 0) {
      pMVar23 = local_20->field_1A5B->field_02E6;
      if (pMVar23 != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(pMVar23,0x2595,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0
                           ,0,0);
      }
      goto cf_common_exit_005A8CA7;
    }
    CFsgsConnection::JoinGame((CFsgsConnection *)&DAT_00802a90,puVar15[1]);
    this_00 = local_20;
    DAT_0080877f = *(undefined4 *)(DAT_00811764 + 0x38);
    DAT_0080877e = 0;
    DAT_008087be = 0;
    local_20->field_1A61 = 0;
    DAT_008067a0 = 1;
    uVar25 = local_20->field_1EC2;
    if (uVar25 < 0x502) {
      if (uVar25 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar25 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar25 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar25 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    thunk_FUN_005b6350(local_20,0x6109,0,1);
    (**(code **)(this_00->field_0000 + 8))((MMObjTy *)this_00);
    pMVar23 = this_00->field_1A5B->field_02E6;
    if (pMVar23 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar23,1,0,1);
    }
    goto cf_common_exit_005A8CA7;
  }
  if (uVar25 < 0x6152) {
    if (uVar25 != 0x6151) {
      if (uVar25 < 0x6106) {
        if (uVar25 == 0x6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = param_1[4];
          this_00->field_0051 = param_1[5];
          this_00->field_0055 = param_1[6];
          thunk_FUN_005b66e0(this_00);
        }
        else {
          switch(uVar25) {
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
        switch(uVar25) {
        case 0x6109:
        case 0x611f:
          StartSystemTy::InitChat(this_00->field_1A5B);
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = param_1[4];
          this_00->field_0051 = param_1[5];
          this_00->field_0055 = param_1[6];
          thunk_FUN_005b66e0(this_00);
          break;
        case 0x614f:
          if (DAT_00802a30 != (CursorClassTy *)0x0) {
            DAT_00802a30->field_0493 = 1;
            pCVar27->field_0494 = 0xffff;
            CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
            CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
            pCVar27->field_0xd2 = 0;
            *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
          }
          pSVar5 = this_00->field_1A5B;
          puVar14 = local_19c;
          for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          local_19c[2] = this_00->field_0008;
          local_19c[3] = 2;
          local_19c[4] = 0x6941;
          pMVar23 = pSVar5->field_02E6;
          if (pMVar23 == (MMsgTy *)0x0) {
            (**(code **)this_00->field_0000)(local_19c);
          }
          else {
            MMsgTy::SetMessage(pMVar23,0x2593,'\0',local_19c,(undefined4 *)0x0,(undefined4 *)0x0,
                               param_1[5],0x2599);
          }
          break;
        case 0x6150:
          if (this_00->field_1A5F == '\x01') {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              DAT_00802a30->field_0493 = 1;
              pCVar27->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
              CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
              pCVar27->field_0xd2 = 0;
              *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
            }
            iVar12 = param_1[5];
            puVar14 = local_160;
            for (iVar35 = 8; iVar35 != 0; iVar35 = iVar35 + -1) {
              *puVar14 = 0;
              puVar14 = puVar14 + 1;
            }
            local_160[2] = this_00->field_0008;
            local_160[3] = 2;
            local_160[4] = 0x6941;
            switch(iVar12) {
            case 1:
              UVar13 = 0x2580;
              break;
            case 2:
              UVar13 = 0x2581;
              break;
            case 3:
              UVar13 = 0x2582;
              break;
            case 4:
              UVar13 = 0x2583;
              break;
            default:
              UVar13 = 0x2584;
            }
            if ((UVar13 == 0) ||
               (pMVar23 = this_00->field_1A5B->field_02E6, pMVar23 == (MMsgTy *)0x0)) {
              (**(code **)this_00->field_0000)(local_160);
            }
            else if (UVar13 == 0x2584) {
              MMsgTy::SetMessage(pMVar23,0x2584,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,
                                 iVar12,0x2599);
            }
            else {
              MMsgTy::SetMessage(pMVar23,UVar13,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,0
                                 ,0);
            }
          }
        }
      }
      goto cf_common_exit_005A8CA7;
    }
    if (this_00->field_1A5F != '\x01') goto cf_common_exit_005A8CA7;
    CFsgsConnection::StartBanners((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      iVar12 = this_00->field_1AC0;
      uVar25 = *(uint *)(iVar12 + 0x14);
      if (uVar25 == 0) {
        uVar25 = ((uint)*(ushort *)(iVar12 + 0xe) * *(int *)(iVar12 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar12 + 8);
      }
      puVar14 = (undefined4 *)FUN_006b4fa0(iVar12);
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *puVar14 = 0xffffffff;
        puVar14 = puVar14 + 1;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined1 *)puVar14 = 0xff;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar38 = -1;
      iVar37 = -1;
      uVar21 = 2;
      iVar35 = -1;
      iVar12 = -1;
      puVar15 = (uint *)FUN_006b0140(0x25b6,DAT_00807618);
      ccFntTy::WrTxt(this_00->field_1A73,puVar15,iVar12,iVar35,uVar21,iVar37,iVar38);
      FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
      CFsgsConnection::RequestDatafile((CFsgsConnection *)&DAT_00802a90,s_st_inf_007cc66c);
      goto cf_common_exit_005A8CA7;
    }
    goto LAB_005a6d57;
  }
  if (0x6333 < uVar25) {
    if (uVar25 == 0x6334) {
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00->field_1BB9,(int)param_1,0);
    }
    else if (uVar25 == 0x6335) {
      this_00->field_1C6A = *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
      if (this_00->field_1C4E != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,this_00->field_1C52,
                   this_00->field_1C66,this_00->field_1C6A);
      }
    }
    goto cf_common_exit_005A8CA7;
  }
  if (uVar25 == 0x6333) {
    MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00->field_1B28,(int)param_1,0);
    goto cf_common_exit_005A8CA7;
  }
  switch(uVar25) {
  case 0x6152:
    if (this_00->field_1A5F != '\x02') goto cf_common_exit_005A8CA7;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30->field_0493 = 1;
      pCVar27->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
      CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
      pCVar27->field_0xd2 = 0;
      *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
    }
    pSVar5 = this_00->field_1A5B;
    puVar14 = local_2c8;
    for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar14 = 0x10001;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = 1;
    pMVar23 = pSVar5->field_02E6;
    if (pMVar23 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(pMVar23,(int)local_2c8);
    }
    switch(param_1[5]) {
    case 2:
      UVar13 = 0x258b;
      break;
    case 3:
      UVar13 = 0x258c;
      break;
    case 4:
      UVar13 = 0x258d;
      break;
    default:
      UVar13 = 0x2589;
      break;
    case 7:
      UVar13 = 0x25c2;
    }
    if ((UVar13 == 0) || (pMVar23 = this_00->field_1A5B->field_02E6, pMVar23 == (MMsgTy *)0x0))
    goto cf_common_exit_005A8CA7;
    if (UVar13 == 0x2589) {
      MMsgTy::SetMessage(pMVar23,0x2589,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                         param_1[5],0x2599);
      goto cf_common_exit_005A8CA7;
    }
    break;
  case 0x6153:
    if ((this_00->field_1A5F == '\x02') || (this_00->field_1A5F == '\x04')) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        DAT_00802a30->field_0493 = 1;
        pCVar27->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
        CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
        pCVar27->field_0xd2 = 0;
        *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
      }
      local_100 = s_Profile_Age_007cc1a8;
      local_fc = s_Profile_Sex_007cc198;
      local_f8 = s_Profile_Location_007cc184;
      local_f4 = s_Profile_Description_007cc16c;
      if (this_00->field_1A5F == '\x02') {
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
      if ((byte *)this_00->field_1E9E != (byte *)0x0) {
        FUN_006b5570((byte *)this_00->field_1E9E);
      }
      puVar15 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,100);
      this_00->field_1E9E = puVar15;
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
    if (this_00->field_1A5F == '\x05') {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        DAT_00802a30->field_0493 = 1;
        pCVar27->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
        CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
        pCVar27->field_0xd2 = 0;
        *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
      }
      uVar25 = param_1[5];
      if (uVar25 == 0) {
        this_00->field_002D = 0x6952;
        (**(code **)this_00->field_0000)(&this_00->field_0x1d);
      }
      else if ((uVar25 != 0) && (uVar25 < 3)) {
        puVar14 = local_300;
        for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar14 = 0x10001;
          puVar14 = puVar14 + 1;
        }
        pSVar5 = this_00->field_1A5B;
        *(undefined2 *)puVar14 = 1;
        pMVar23 = pSVar5->field_02E6;
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(pMVar23,(int)local_300);
        }
        pMVar23 = this_00->field_1A5B->field_02E6;
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar23,(-(uint)(param_1[5] != 1) & 10) + 0x258e,'\0',(undefined4 *)0x0
                             ,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
      }
    }
    goto cf_common_exit_005A8CA7;
  case 0x6155:
    if (this_00->field_1A5F != '\x04') goto cf_common_exit_005A8CA7;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30->field_0493 = 1;
      pCVar27->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
      CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
      pCVar27->field_0xd2 = 0;
      *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
    }
    if (param_1[5] == 0) goto LAB_005a67e1;
    if (6 < (uint)param_1[5]) goto cf_common_exit_005A8CA7;
    puVar14 = local_354;
    for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar14 = 0x10001;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = 1;
    pMVar23 = this_00->field_1A5B->field_02E6;
    if (pMVar23 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(pMVar23,(int)local_354);
    }
    pMVar23 = this_00->field_1A5B->field_02E6;
    if (pMVar23 == (MMsgTy *)0x0) goto cf_common_exit_005A8CA7;
    switch(param_1[5]) {
    case 2:
      UVar13 = 0x2597;
      break;
    case 3:
      UVar13 = 0x2596;
      break;
    case 4:
      UVar13 = 0x25c3;
      break;
    case 5:
      UVar13 = 0x25c4;
      break;
    case 6:
      UVar13 = 0x25c5;
      break;
    default:
      UVar13 = 0x258f;
    }
    break;
  case 0x6156:
    if (this_00->field_1A5F != '\x06') goto cf_common_exit_005A8CA7;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30->field_0493 = 1;
      pCVar27->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,pCVar27->field_00C5,pCVar27->field_00C9);
      CursorClassTy::DrawSprite(pCVar27,pCVar27->field_00C5,pCVar27->field_00C9);
      pCVar27->field_0xd2 = 0;
      *(undefined4 *)&pCVar27->field_0x4df = 0xffffffff;
    }
    UVar13 = 0;
    if (param_1[5] == 0xd) {
      UVar13 = 0x2590;
    }
    else if (param_1[5] == 0xf) {
      UVar13 = 0x2591;
    }
    if ((UVar13 == 0) || (pMVar23 = this_00->field_1A5B->field_02E6, pMVar23 == (MMsgTy *)0x0))
    goto cf_common_exit_005A8CA7;
    break;
  default:
    goto cf_common_exit_005A8CA7;
  }
  MMsgTy::SetMessage(pMVar23,UVar13,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
cf_common_exit_005A8CA7:
  g_currentExceptionFrame = local_21c.previous;
  uVar21 = MMObjTy::GetMessage((MMObjTy *)this_00,(int)param_1);
  return uVar21;
}


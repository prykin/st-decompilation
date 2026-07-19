
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
  int *piVar4;
  int iVar5;
  ccFntTy *this_00;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  UINT UVar14;
  undefined4 *puVar15;
  uint *puVar16;
  char *pcVar17;
  DWORD DVar18;
  undefined4 uVar19;
  ulong uVar20;
  HINSTANCE pHVar21;
  undefined3 extraout_var;
  uint uVar22;
  MMsgTy *pMVar23;
  byte bVar24;
  FSGSTy *this_01;
  undefined4 unaff_ESI;
  uint uVar25;
  byte *pbVar26;
  CursorClassTy *pCVar27;
  byte *pbVar28;
  void *unaff_EDI;
  char *pcVar29;
  uint *puVar30;
  char *pcVar31;
  bool bVar32;
  BITMAPINFO *pBVar33;
  int iVar34;
  DWORD DVar35;
  int iVar36;
  int iVar37;
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
  uVar12 = FUN_006e51b0(this->field_0010);
  pcVar29 = (char *)0x0;
  this->field_0061 = uVar12;
  local_21c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_21c;
  iVar13 = Library::MSVCRT::__setjmp3(local_21c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_20;
  if (iVar13 != 0) {
    g_currentExceptionFrame = local_21c.previous;
    iVar34 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048,0,iVar13,
                                &DAT_007a4ccc,s_FSGSTy__GetMessage_007cc5d8);
    if (iVar34 != 0) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return uVar12;
    }
    RaiseInternalException(iVar13,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_20,(int)param_1);
  pCVar27 = DAT_00802a30;
  uVar25 = param_1[4];
  if (0x6949 < uVar25) {
    if (uVar25 < 0x6980) {
      if (uVar25 == 0x697f) {
        iVar13 = param_1[7];
        local_60 = *(int *)(iVar13 + 0x24) + -0xb4;
        local_58 = *(int *)(iVar13 + 0x2c);
        local_54 = *(int *)(iVar13 + 0x30);
        iVar34 = *(int *)(iVar13 + 0x28) -
                 ((-(uint)(this_01->field_0x1abb != '\0') & 0xffffffb4) + 0xaa);
        local_5c = iVar34;
        FUN_006b4170(this_01->field_1AC0,0,*(int *)(iVar13 + 0x24) + -0xb5,iVar34,local_58 + 2,
                     local_54,0xff);
        ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1AC0,0,local_60,iVar34,
                         local_58,local_54);
        if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
          ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,*(uint **)param_1[5],0,-1,0);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar13 = (uint)*(ushort *)(param_1 + 6) + local_60;
          FUN_006b5b10(this_01->field_1AC0,0,iVar13,iVar34 + 1,iVar13,local_54 + -2 + iVar34,9,0xd);
        }
        FUN_006b35d0(DAT_008075a8,this_01->field_1ABC);
        goto switchD_005a43f5_caseD_1;
      }
      switch(uVar25) {
      case 0x694a:
      case 0x694e:
        (**(code **)(*(int *)this_01 + 8))();
        this_01->field_0x1a61 = (param_1[4] != 0x694a) + '\a';
        iVar13 = *(int *)&this_01->field_0x1a5b;
        if (*(int *)(iVar13 + 0x2e6) == 0) break;
        puVar15 = local_31c;
        for (iVar34 = 6; iVar34 != 0; iVar34 = iVar34 + -1) {
          *puVar15 = 0xffffffff;
          puVar15 = puVar15 + 1;
        }
        *(undefined2 *)puVar15 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        MMsgTy::StatePanel(*(MMsgTy **)(iVar13 + 0x2e6),(int)local_31c);
        puVar15 = &local_a0;
        goto LAB_005a7f3b;
      case 0x694b:
        if (this_01->field_1A5F == '\x02') {
          (**(code **)(*(int *)this_01 + 8))();
          this_01->field_0x1a61 = 5;
          if (*(int *)(*(int *)&this_01->field_0x1a5b + 0x2e6) != 0) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_90 = 0x10101;
            thunk_FUN_005b8f40(*(void **)(*(int *)&this_01->field_0x1a5b + 0x2e6),&local_90);
          }
        }
        else if (this_01->field_1A5F == '\x05') {
          if (0 < *(int *)(*(int *)&this_01->field_0x1af4 + 8)) {
            pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1af4 + 0x14);
          }
          iVar13 = -1;
          do {
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar29 + 1;
          } while (cVar2 != '\0');
          if (iVar13 == -2) {
            pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
            if (pMVar23 != (MMsgTy *)0x0) {
              MMsgTy::SetMessage(pMVar23,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
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
            pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
            if (pMVar23 != (MMsgTy *)0x0) {
              MMsgTy::StatePanel(pMVar23,(int)local_1d8);
            }
            pCVar27 = DAT_00802a30;
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
              uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
              DAT_00802a30[0xb].field_0x47 = 5;
              *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
              CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
              CursorClassTy::DrawSprite
                        (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),
                         *(int *)&pCVar27[2].field_0x1);
              pCVar27[2].field_0xa = 0;
              *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
            }
            if (*(int *)(*(int *)&this_01->field_0x1af4 + 8) < 1) {
              pcVar29 = (char *)0x0;
            }
            else {
              pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1af4 + 0x14);
            }
            if (*(int *)(*(int *)&this_01->field_0x1aec + 8) < 1) {
              pcVar17 = (char *)0x0;
            }
            else {
              pcVar17 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1aec + 0x14);
            }
            if (*(int *)(*(int *)&this_01->field_0x1ae8 + 8) < 1) {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,(char *)0x0,pcVar17,pcVar29);
            }
            else {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,
                         (char *)**(undefined4 **)(*(int *)&this_01->field_0x1ae8 + 0x14),pcVar17,
                         pcVar29);
            }
          }
        }
        break;
      case 0x694c:
        if ((*(LPCSTR *)&this_01->field_0x1aab != (LPCSTR)0x0) &&
           (pHVar21 = ShellExecuteA(DAT_00856d78,&DAT_007cc624,*(LPCSTR *)&this_01->field_0x1aab,
                                    (LPCSTR)0x0,(LPCSTR)0x0,1), 0x20 < (int)pHVar21)) {
          CFsgsConnection::BannerClick
                    ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_01->field_0x1aaf);
        }
        break;
      case 0x6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(this_01->field_1A5F) {
        case 6:
          local_30 = 0x10000;
        case 3:
          local_30 = CONCAT31(local_30._1_3_,1);
        case 5:
          local_30._0_2_ = CONCAT11(1,(undefined1)local_30);
        case 4:
          local_2c = 0x10100;
          this_01->field_0x1a61 = 2;
          break;
        case 7:
        case 8:
          local_30 = 0x100;
        case 9:
          this_01->field_0x1a61 = 6;
          break;
        case 10:
          pbVar26 = (byte *)this_01->field_1B0C;
          if (pbVar26 != (byte *)0x0) {
            pbVar28 = &DAT_00807e1d;
            do {
              bVar24 = *pbVar26;
              bVar32 = bVar24 < *pbVar28;
              if (bVar24 != *pbVar28) {
LAB_005a63e7:
                iVar13 = (1 - (uint)bVar32) - (uint)(bVar32 != 0);
                goto LAB_005a63ec;
              }
              if (bVar24 == 0) break;
              bVar24 = pbVar26[1];
              bVar32 = bVar24 < pbVar28[1];
              if (bVar24 != pbVar28[1]) goto LAB_005a63e7;
              pbVar26 = pbVar26 + 2;
              pbVar28 = pbVar28 + 2;
            } while (bVar24 != 0);
            iVar13 = 0;
LAB_005a63ec:
            if (iVar13 == 0) {
              if (*(int *)(*(int *)&this_01->field_0x1b00 + 8) < 1) {
                pcVar29 = (char *)0x0;
              }
              else {
                pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1b00 + 0x14);
              }
              if (*(int *)(*(int *)&this_01->field_0x1afc + 8) < 1) {
                pcVar17 = (char *)0x0;
              }
              else {
                pcVar17 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1afc + 0x14);
              }
              if (*(int *)(*(int *)&this_01->field_0x1af8 + 8) < 1) {
                pbVar26 = (byte *)0x0;
              }
              else {
                pbVar26 = (byte *)**(undefined4 **)(*(int *)&this_01->field_0x1af8 + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar26,pcVar17,pcVar29,
                                 *(int *)&this_01->field_0x1b04);
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
          this_01->field_0x1a61 = this_01->field_0x1ed2;
        }
        (**(code **)(*(int *)this_01 + 8))();
        iVar13 = *(int *)&this_01->field_0x1a5b;
        if (*(int *)(iVar13 + 0x2e6) != 0) {
          puVar15 = local_2e4;
          for (iVar34 = 6; iVar34 != 0; iVar34 = iVar34 + -1) {
            *puVar15 = 0xffffffff;
            puVar15 = puVar15 + 1;
          }
          *(undefined2 *)puVar15 = 0xffff;
          MMsgTy::StatePanel(*(MMsgTy **)(iVar13 + 0x2e6),(int)local_2e4);
          thunk_FUN_005b8f40(*(void **)(*(int *)&this_01->field_0x1a5b + 0x2e6),&local_30);
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
        if (*(int *)(*(int *)&this_01->field_0x1ae8 + 8) < 1) {
          pcVar29 = (char *)0x0;
        }
        else {
          pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1ae8 + 0x14);
        }
        Library::MSVCRT::_strncpy(&DAT_00807e1d,pcVar29,0x40);
        DAT_00807e5c = 0;
        if (*(int *)(*(int *)&this_01->field_0x1aec + 8) < 1) {
          pcVar29 = (char *)0x0;
        }
        else {
          pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1aec + 0x14);
        }
        uVar25 = 0xffffffff;
        do {
          pcVar17 = pcVar29;
          if (uVar25 == 0) break;
          uVar25 = uVar25 - 1;
          pcVar17 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar17;
        } while (cVar2 != '\0');
        uVar25 = ~uVar25;
        pcVar29 = pcVar17 + -uVar25;
        pcVar17 = (char *)&DAT_00807e5d;
        for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
          pcVar29 = pcVar29 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *pcVar17 = *pcVar29;
          pcVar29 = pcVar29 + 1;
          pcVar17 = pcVar17 + 1;
        }
        iVar13 = -1;
        pcVar29 = (char *)&DAT_00807e5d;
        do {
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar29 + 1;
        } while (cVar2 != '\0');
        if (iVar13 == -2) {
          pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
          if (pMVar23 != (MMsgTy *)0x0) {
            MMsgTy::SetMessage(pMVar23,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                               (undefined4 *)0x0,0,0);
          }
          break;
        }
        if (this_01->field_1A5F != '\x02') {
          if (this_01->field_1A5F == '\x04') {
            if (*(int *)(*(int *)&this_01->field_0x1af0 + 8) < 1) {
              pbVar26 = (byte *)0x0;
            }
            else {
              pbVar26 = (byte *)**(undefined4 **)(*(int *)&this_01->field_0x1af0 + 0x14);
            }
            pbVar28 = (byte *)&DAT_00807e5d;
            do {
              bVar24 = *pbVar28;
              bVar32 = bVar24 < *pbVar26;
              if (bVar24 != *pbVar26) {
LAB_005a6653:
                iVar13 = (1 - (uint)bVar32) - (uint)(bVar32 != 0);
                goto LAB_005a6658;
              }
              if (bVar24 == 0) break;
              bVar24 = pbVar28[1];
              bVar32 = bVar24 < pbVar26[1];
              if (bVar24 != pbVar26[1]) goto LAB_005a6653;
              pbVar28 = pbVar28 + 2;
              pbVar26 = pbVar26 + 2;
            } while (bVar24 != 0);
            iVar13 = 0;
LAB_005a6658:
            if (iVar13 == 0) {
              pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
              if (pMVar23 != (MMsgTy *)0x0) {
                MMsgTy::StatePanel(pMVar23,(int)local_17c);
              }
              pCVar27 = DAT_00802a30;
              if (DAT_00802a30 != (CursorClassTy *)0x0) {
                uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
                uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
                DAT_00802a30[0xb].field_0x47 = 5;
                *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
                CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
                CursorClassTy::DrawSprite
                          (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),
                           *(int *)&pCVar27[2].field_0x1);
                pCVar27[2].field_0xa = 0;
                *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
              }
              if (*(int *)(*(int *)&this_01->field_0x1b00 + 8) < 1) {
                pcVar29 = (char *)0x0;
              }
              else {
                pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1b00 + 0x14);
              }
              if (*(int *)(*(int *)&this_01->field_0x1afc + 8) < 1) {
                pcVar17 = (char *)0x0;
              }
              else {
                pcVar17 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1afc + 0x14);
              }
              if (*(int *)(*(int *)&this_01->field_0x1af8 + 8) < 1) {
                pbVar26 = (byte *)0x0;
              }
              else {
                pbVar26 = (byte *)**(undefined4 **)(*(int *)&this_01->field_0x1af8 + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar26,pcVar17,pcVar29,
                                 *(int *)&this_01->field_0x1b04);
              CFsgsConnection::CreateNewAccount
                        ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
            }
            else {
              pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
              if (pMVar23 != (MMsgTy *)0x0) {
                MMsgTy::SetMessage(pMVar23,0x258a,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
          }
          break;
        }
        pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(pMVar23,(int)local_17c);
        }
        pCVar27 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
          uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
          DAT_00802a30[0xb].field_0x47 = 5;
          *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
          CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
          CursorClassTy::DrawSprite
                    (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1
                    );
          pCVar27[2].field_0xa = 0;
          *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
        }
LAB_005a67e1:
        uVar20 = CFsgsConnection::Login
                           ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
        if (uVar20 == 0) {
          DVar18 = GetLastError();
          thunk_FUN_0055beb0(&DAT_00802a90,DVar18);
        }
        DAT_00802a9a = 0;
        break;
      case 0x6954:
        (**(code **)(*(int *)this_01 + 8))();
        this_01->field_0x1a61 = 4;
        if (*(int *)(*(int *)&this_01->field_0x1a5b + 0x2e6) != 0) {
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_c0 = 0x10101;
          thunk_FUN_005b8f40(*(void **)(*(int *)&this_01->field_0x1a5b + 0x2e6),&local_c0);
        }
        break;
      case 0x6955:
        iVar13 = *(int *)&this_01->field_0x1ab7;
        iVar36 = 0;
        iVar34 = 0;
        if (iVar13 != 0) {
          if (param_1[5] == 0) {
            switch(this_01->field_1A5F) {
            case 2:
            case 6:
            case 7:
              goto switchD_005a6a92_caseD_2;
            case 4:
              iVar34 = *(int *)&this_01->field_0x1ac4;
              if (iVar13 == iVar34) {
                iVar36 = iVar34;
                iVar34 = *(int *)&this_01->field_0x1ac8;
              }
              else if (iVar13 == *(int *)&this_01->field_0x1ac8) {
                iVar36 = *(int *)&this_01->field_0x1ac8;
                iVar34 = *(int *)&this_01->field_0x1acc;
              }
              else if (iVar13 == *(int *)&this_01->field_0x1acc) {
                iVar36 = *(int *)&this_01->field_0x1acc;
                iVar34 = *(int *)&this_01->field_0x1ad8;
              }
              else if (iVar13 == *(int *)&this_01->field_0x1ad8) {
                iVar36 = *(int *)&this_01->field_0x1ad8;
                iVar34 = *(int *)&this_01->field_0x1adc;
              }
              else if (iVar13 == *(int *)&this_01->field_0x1adc) {
                iVar36 = *(int *)&this_01->field_0x1adc;
                iVar34 = *(int *)&this_01->field_0x1ae0;
              }
              else {
                if (iVar13 != *(int *)&this_01->field_0x1ae0) goto LAB_005a6cc4;
                iVar36 = *(int *)&this_01->field_0x1ae0;
                iVar34 = *(int *)&this_01->field_0x1ae4;
              }
              break;
            case 5:
              iVar34 = *(int *)&this_01->field_0x1ac4;
              if (iVar13 == iVar34) {
                iVar36 = iVar34;
                iVar34 = *(int *)&this_01->field_0x1ac8;
              }
              else if (iVar13 == *(int *)&this_01->field_0x1ac8) {
                iVar36 = *(int *)&this_01->field_0x1ac8;
                iVar34 = *(int *)&this_01->field_0x1ad4;
              }
              else if (iVar13 == *(int *)&this_01->field_0x1ad4) {
                iVar36 = *(int *)&this_01->field_0x1ad4;
                iVar34 = *(int *)&this_01->field_0x1acc;
              }
              else {
                iVar36 = *(int *)&this_01->field_0x1acc;
              }
              break;
            case 10:
              iVar34 = *(int *)&this_01->field_0x1ad8;
              if (iVar13 == iVar34) {
                iVar36 = iVar34;
                iVar34 = *(int *)&this_01->field_0x1adc;
              }
              else if (iVar13 == *(int *)&this_01->field_0x1adc) {
                iVar36 = *(int *)&this_01->field_0x1adc;
                iVar34 = *(int *)&this_01->field_0x1ae0;
              }
              else if (iVar13 == *(int *)&this_01->field_0x1ae0) {
                iVar36 = *(int *)&this_01->field_0x1ae0;
                iVar34 = *(int *)&this_01->field_0x1ae4;
              }
              else {
LAB_005a6cc4:
                iVar36 = *(int *)&this_01->field_0x1ae4;
              }
            }
          }
          else {
            switch(this_01->field_1A5F) {
            case 2:
            case 6:
            case 7:
switchD_005a6a92_caseD_2:
              iVar34 = *(int *)&this_01->field_0x1ac4;
              if (iVar13 == iVar34) {
                iVar36 = iVar34;
                iVar34 = *(int *)&this_01->field_0x1ac8;
              }
              else {
                iVar36 = *(int *)&this_01->field_0x1ac8;
              }
              break;
            case 4:
              iVar34 = *(int *)&this_01->field_0x1ac4;
              if (iVar13 == iVar34) {
                iVar36 = iVar34;
                iVar34 = *(int *)&this_01->field_0x1ae4;
              }
              else {
                iVar37 = *(int *)&this_01->field_0x1ac8;
                iVar36 = iVar37;
                if (((iVar13 != iVar37) &&
                    (iVar5 = *(int *)&this_01->field_0x1acc, iVar36 = iVar5, iVar34 = iVar37,
                    iVar13 != iVar5)) &&
                   (iVar37 = *(int *)&this_01->field_0x1ad8, iVar36 = iVar37, iVar34 = iVar5,
                   iVar13 != iVar37)) {
                  iVar5 = *(int *)&this_01->field_0x1adc;
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case 5:
              iVar34 = *(int *)&this_01->field_0x1ac4;
              if (iVar13 == iVar34) {
                iVar36 = iVar34;
                iVar34 = *(int *)&this_01->field_0x1acc;
              }
              else {
                iVar37 = *(int *)&this_01->field_0x1ac8;
                iVar36 = iVar37;
                if ((iVar13 != iVar37) &&
                   (iVar5 = *(int *)&this_01->field_0x1ad4, iVar36 = iVar5, iVar34 = iVar37,
                   iVar13 != iVar5)) {
                  iVar36 = *(int *)&this_01->field_0x1acc;
                  iVar34 = iVar5;
                }
              }
              break;
            case 10:
              iVar37 = *(int *)&this_01->field_0x1ad8;
              if (iVar13 == iVar37) {
                iVar36 = iVar37;
                iVar34 = *(int *)&this_01->field_0x1ae4;
              }
              else {
                iVar5 = *(int *)&this_01->field_0x1adc;
joined_r0x005a6ba3:
                iVar36 = iVar5;
                iVar34 = iVar37;
                if ((iVar13 != iVar5) &&
                   (iVar37 = *(int *)&this_01->field_0x1ae0, iVar36 = iVar37, iVar34 = iVar5,
                   iVar13 != iVar37)) {
                  iVar36 = *(int *)&this_01->field_0x1ae4;
                  iVar34 = iVar37;
                }
              }
            }
          }
        }
        *(undefined4 *)&this_01->field_0x2d = 0x20;
        if (iVar36 != 0) {
          *(undefined4 *)&this_01->field_0x31 = 0;
          FUN_006e6080(this_01,2,iVar36,(undefined4 *)&this_01->field_0x1d);
        }
        if (iVar34 != 0) {
          *(undefined4 *)&this_01->field_0x31 = 1;
          FUN_006e6080(this_01,2,iVar34,(undefined4 *)&this_01->field_0x1d);
        }
        break;
      case 0x6956:
        this_01->field_0x1ed2 = 1;
LAB_005a6d57:
        DoLogon(this_01);
        break;
      case 0x6957:
        iVar13 = this_01->field_1AC0;
        uVar25 = *(uint *)(iVar13 + 0x14);
        if (uVar25 == 0) {
          uVar25 = ((uint)*(ushort *)(iVar13 + 0xe) * *(int *)(iVar13 + 4) + 0x1f >> 3 & 0x1ffffffc)
                   * *(int *)(iVar13 + 8);
        }
        puVar15 = (undefined4 *)FUN_006b4fa0(iVar13);
        for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
          *puVar15 = 0xffffffff;
          puVar15 = puVar15 + 1;
        }
        for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *(undefined1 *)puVar15 = 0xff;
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1AC0,0,0,0x16,0x1b8,0xf0
                        );
        iVar37 = -1;
        iVar36 = -1;
        uVar12 = 2;
        iVar34 = -1;
        iVar13 = -2;
        puVar16 = (uint *)FUN_006b0140(0x25be,DAT_00807618);
        ccFntTy::WrTxt(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar13,iVar34,uVar12,iVar36,
                       iVar37);
        FUN_006b35d0(DAT_008075a8,this_01->field_1ABC);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        wsprintfA(local_4b8,s_subtitans__s_007cc614,&DAT_0080f126);
        CFsgsConnection::DownloadFile
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar27 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          DAT_00802a30[0xb].field_0x47 = 5;
          *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
          CursorClassTy::SetGCType
                    (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                     *(undefined4 *)&pCVar27[2].field_0x1);
          CursorClassTy::DrawSprite
                    (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1
                    );
          pCVar27[2].field_0xa = 0;
          *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
        }
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (0x8160 < uVar25) {
      if (uVar25 < 0xc0a2) {
        if (uVar25 == 0xc0a1) {
          if ((*(int *)&this_01->field_0x1a6b != 0) && (*(int *)&this_01->field_0x1b10 != 0)) {
            *(undefined4 *)&this_01->field_0x2d = 0x20;
            *(undefined4 *)&this_01->field_0x31 = 1;
            FUN_006e6080(this_01,2,*(int *)&this_01->field_0x1b10,(undefined4 *)&this_01->field_0x1d
                        );
          }
          goto switchD_005a43f5_caseD_1;
        }
        switch(uVar25) {
        case 0x8161:
          if ((this_01->field_1E8E == 0) || (*(int *)&this_01->field_0x1e9a == 0)) break;
          pbVar26 = (byte *)param_1[7];
          local_1c = pbVar26;
          FUN_006b5f80(DAT_008075a8,*(int *)(pbVar26 + 0x24),
                       (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar26 + 0x28),
                       *(int *)(pbVar26 + 0x2c),0x11);
          if (this_01->field_1A5F == '\x06') {
            iVar13 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar26 + 0x28);
            thunk_FUN_00540620(*(int *)(pbVar26 + 0x24),iVar13,*(int *)(pbVar26 + 0x24) + -0x1e9,
                               iVar13 + -0x5e,*(uint *)(pbVar26 + 0x2c),(byte *)0x11,'\x01',
                               *(BITMAPINFO **)&this_01->field_0x1e9a);
            FUN_006b4170(this_01->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),0x11,0xff);
            if (this_01->field_1A60 == '\0') {
              iVar13 = this_01->field_1EA6;
              if (iVar13 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar13 + 0xc)) {
                  local_8 = (uint *)(*(int *)(iVar13 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar13 + 0x1c));
                }
                else {
                  local_8 = (uint *)0x0;
                }
                if (local_8 != (uint *)0x0) {
                  ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0x23,0,
                                   *(int *)(pbVar26 + 0x2c) + -0x46,0x11);
                  if (*(char *)((int)local_8 + 0x2d) == '\0') {
                    local_c = (byte *)thunk_FUN_0055c050(&DAT_00802a90,(int)local_8);
                    thunk_FUN_00540760((undefined4 *)this_01->field_1E8E,3,1,'\x01',local_c);
                    if (local_c != (byte *)0x0) {
                      FUN_006ab060(&local_c);
                    }
                    ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,local_8,0,-1,
                                   (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2)
                    ;
                    if ((*(byte *)((int)local_8 + 0x25) & 0x10) != 0) {
                      iVar13 = FUN_0070b3a0(*(int *)&this_01->field_0x1a8b,3);
                      FUN_006b5440(this_01->field_1E8E,0,*(int *)(pbVar26 + 0x2c) + -0x1d,
                                   (0x11 - *(int *)(iVar13 + 8)) / 2,iVar13,0,0xff);
                    }
                  }
                  else {
                    pbVar28 = (byte *)FUN_0070b3a0(*(int *)&this_01->field_0x1a87,1);
                    thunk_FUN_00540760((undefined4 *)this_01->field_1E8E,3,
                                       (0x11 - *(int *)(pbVar28 + 8)) / 2,'\x06',pbVar28);
                    iVar13 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                    iVar36 = -1;
                    iVar34 = 0;
                    puVar16 = (uint *)FUN_006b0140(0x2567,DAT_00807618);
                    ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar34,iVar36,iVar13)
                    ;
                  }
                }
              }
            }
            else {
              iVar13 = *(int *)&this_01->field_0x1eaa;
              if (iVar13 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar13 + 0xc)) {
                  local_c = (byte *)(*(int *)(iVar13 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar13 + 0x1c));
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
                  pbVar28 = (byte *)FUN_0070b3a0(*(int *)&this_01->field_0x1a87,
                                                 (uint)local_10 & 0xff);
                  thunk_FUN_00540760((undefined4 *)this_01->field_1E8E,3,
                                     (0x11 - *(int *)(pbVar28 + 8)) / 2,'\x06',pbVar28);
                  ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0x23,0,
                                   *(int *)(pbVar26 + 0x2c) + -0x46,0x11);
                  iVar13 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                  wsprintfA((LPSTR)&DAT_0080f33a,s___d_s___0_d__d__007cc5f8,iVar13,local_c,
                            *(undefined4 *)(local_c + 100),iVar13);
                  ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar13 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar26 + 0x28);
            thunk_FUN_00540620(*(int *)(pbVar26 + 0x24),iVar13,*(int *)(pbVar26 + 0x24) + -0x13,
                               iVar13 + -0x5e,*(uint *)(pbVar26 + 0x2c),(byte *)0x11,'\x01',
                               *(BITMAPINFO **)&this_01->field_0x1e9a);
            FUN_006b4170(this_01->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),0x11,0xff);
            iVar13 = this_01->field_1EBE;
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
                  uVar25 = *puVar16;
                  puVar16 = (uint *)((int)puVar16 + 1);
                } while ((char)uVar25 != '\0');
                pbVar26 = (byte *)FUN_0070b3a0(*(int *)&this_01->field_0x1a87,
                                               -(uint)(iVar13 != -2) & 4);
                thunk_FUN_00540760((undefined4 *)this_01->field_1E8E,3,
                                   (0x11 - *(int *)(pbVar26 + 8)) / 2,'\x06',pbVar26);
                ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0x23,0,
                                 *(int *)(local_1c + 0x2c) + -0x40,0x11);
                ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,local_10 + 0xb,0,-1,
                               (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2);
                pbVar26 = local_1c;
              }
            }
          }
          DVar35 = *(DWORD *)(pbVar26 + 0x2c);
          pBVar33 = (BITMAPINFO *)this_01->field_1E8E;
          DVar18 = 0x11;
          iVar13 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar26 + 0x28);
          goto LAB_005a89f6;
        case 0x8162:
          if ((DAT_00802a30 != (CursorClassTy *)0x0) && (DAT_00802a30[0xb].field_0x47 == '\x05'))
          break;
          if (this_01->field_1A60 != '\0') {
            iVar13 = *(int *)&this_01->field_0x1eaa;
            if (iVar13 != 0) {
              if ((uint)param_1[5] < *(uint *)(iVar13 + 0xc)) {
                pcVar29 = (char *)(*(int *)(iVar13 + 8) * param_1[5] + *(int *)(iVar13 + 0x1c));
              }
              else {
                pcVar29 = (char *)0x0;
              }
              if (pcVar29 != (char *)0x0) {
                if (DAT_00802a30 != (CursorClassTy *)0x0) {
                  uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
                  uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
                  DAT_00802a30[0xb].field_0x47 = 5;
                  *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
                  CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
                  CursorClassTy::DrawSprite
                            (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),
                             *(int *)&pCVar27[2].field_0x1);
                  pCVar27[2].field_0xa = 0;
                  *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
                }
                iVar13 = -1;
                pcVar17 = pcVar29 + 0x40;
                do {
                  if (iVar13 == 0) break;
                  iVar13 = iVar13 + -1;
                  cVar2 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                } while (cVar2 != '\0');
                if (iVar13 == -2) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar29,pcVar29 + 0x40,1);
                }
                else if (*(int *)(*(int *)&this_01->field_0x1aec + 8) < 1) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar29,(char *)0x0,1);
                }
                else {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar29,
                                     (char *)**(undefined4 **)
                                               (*(int *)&this_01->field_0x1aec + 0x14),1);
                }
              }
            }
            break;
          }
          uVar25 = param_1[5];
          if (uVar25 == 0) {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
              uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
              DAT_00802a30[0xb].field_0x47 = 5;
              *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
              CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
              CursorClassTy::DrawSprite
                        (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),
                         *(int *)&pCVar27[2].field_0x1);
              pCVar27[2].field_0xa = 0;
              *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
            }
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_01->field_1A60 = 1;
            *(undefined4 *)&this_01->field_0x2d = 0x20;
            *(undefined4 *)&this_01->field_0x31 = 0;
            if (*(int *)&this_01->field_0x1b18 != 0) {
              FUN_006e6080(this_01,2,*(int *)&this_01->field_0x1b18,
                           (undefined4 *)&this_01->field_0x1d);
            }
            *(undefined4 *)&this_01->field_0x31 = 1;
            if (*(int *)&this_01->field_0x1b24 != 0) {
              FUN_006e6080(this_01,2,*(int *)&this_01->field_0x1b24,
                           (undefined4 *)&this_01->field_0x1d);
            }
            break;
          }
          iVar13 = this_01->field_1EA6;
          if (uVar25 < *(uint *)(iVar13 + 0xc)) {
            pcVar29 = (char *)(*(int *)(iVar13 + 8) * uVar25 + *(int *)(iVar13 + 0x1c));
          }
          else {
            pcVar29 = (char *)0x0;
          }
          if (pcVar29 == (char *)0x0) break;
          if (this_01->field_1B0C != 0) {
            FUN_006ab060(&this_01->field_1B0C);
          }
          uVar25 = 0xffffffff;
          pcVar17 = pcVar29;
          do {
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
          pcVar17 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar25);
          uVar25 = 0xffffffff;
          this_01->field_1B0C = pcVar17;
          do {
            pcVar31 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar31 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar31;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar31 + -uVar25;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar17 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar17 = pcVar17 + 1;
          }
          (**(code **)(*(int *)this_01 + 8))();
          this_01->field_0x1a61 = 10;
          this_01->field_0x1ed2 = 6;
          iVar13 = *(int *)&this_01->field_0x1a5b;
          if (*(int *)(iVar13 + 0x2e6) == 0) break;
          puVar15 = local_370;
          for (iVar34 = 6; iVar34 != 0; iVar34 = iVar34 + -1) {
            *puVar15 = 0xffffffff;
            puVar15 = puVar15 + 1;
          }
          *(undefined2 *)puVar15 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          MMsgTy::StatePanel(*(MMsgTy **)(iVar13 + 0x2e6),(int)local_370);
          puVar15 = &local_80;
          goto LAB_005a7f3b;
        case 0x8163:
          if (this_01->field_1A5F == '\x06') {
            if (this_01->field_1A60 == '\0') {
              local_1ac = 0x20;
              if (param_1[5] == 0) {
                local_1a8 = 0;
                if (*(int *)&this_01->field_0x1b18 != 0) {
                  FUN_006e6080(this_01,2,*(int *)&this_01->field_0x1b18,local_1bc);
                }
              }
              else {
                local_1a8 = 1;
                if (*(int *)&this_01->field_0x1b18 != 0) {
                  FUN_006e6080(this_01,2,*(int *)&this_01->field_0x1b18,local_1bc);
                }
              }
            }
          }
          else if (this_01->field_1A5F == '\b') {
            iVar13 = this_01->field_1EBE;
            bVar32 = true;
            if (((iVar13 != 0) && ((uint)param_1[5] < *(uint *)(iVar13 + 0xc))) &&
               (iVar13 = *(int *)(iVar13 + 8) * param_1[5] + *(int *)(iVar13 + 0x1c), iVar13 != 0))
            {
              bVar32 = false;
              Library::DKW::TBL::FUN_006b6020
                        (*(int *)&this_01->field_0x1ae8,0,(char *)(iVar13 + 0x2c));
              *(undefined4 *)&this_01->field_0x2d = 0x33;
              *(undefined4 *)&this_01->field_0x31 = *(undefined4 *)&this_01->field_0x1ae8;
              FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1ac4,
                           (undefined4 *)&this_01->field_0x1d);
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              thunk_FUN_00540620(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                                 (BITMAPINFO *)this_01->field_1E92);
              FUN_006b4170(this_01->field_1E8E,0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0,0x15e,
                               0x11);
              uVar12 = 2;
              iVar36 = -1;
              iVar34 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar34,iVar36,uVar12);
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,10,0x11,
                               0x14a,0x11);
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,(uint *)(iVar13 + 0x1c),0,-1,0);
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0x22,
                               0x15e,0x11);
              uVar12 = 2;
              iVar36 = -1;
              iVar34 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar34,iVar36,uVar12);
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,10,0x33,
                               0x14a,0x11);
              uVar12 = 0;
              iVar36 = -1;
              iVar34 = 0;
              if (*(char *)(iVar13 + 0x7c) == '\0') {
                puVar16 = (uint *)FUN_006b0140(0x2573,DAT_00807618);
              }
              else {
                puVar16 = (uint *)(iVar13 + 0x83);
              }
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar34,iVar36,uVar12);
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0x44,
                               0x15e,0x11);
              uVar12 = 2;
              iVar36 = -1;
              iVar34 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar34,iVar36,uVar12);
              if (*(char *)(iVar13 + 0x7c) != '\0') {
                ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,10,0x55,
                                 0x14a,0x11);
                iVar34 = (int)*(char *)(iVar13 + 0x7e) << 1;
                wsprintfA((LPSTR)&DAT_0080f33a,s__dx_d_007cc60c,iVar34,iVar34);
                ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,&DAT_0080f33a,0,-1,0);
              }
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0x66,
                               0x15e,0x11);
              uVar12 = 2;
              iVar36 = -1;
              iVar34 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar34,iVar36,uVar12);
              if (*(char *)(iVar13 + 0x7c) != '\0') {
                ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,10,0x77,
                                 0x14a,0x11);
                uVar12 = FUN_006b0140(0x2574,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(int)*(char *)(iVar13 + 0x7d),uVar12
                         );
                ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,&DAT_0080f33a,0,-1,0);
              }
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,(BITMAPINFO *)this_01->field_1E8E,(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
            if (bVar32) {
              Library::DKW::TBL::FUN_006b6020(*(int *)&this_01->field_0x1ae8,0,&DAT_008016a0);
              *(undefined4 *)&this_01->field_0x2d = 0x33;
              *(undefined4 *)&this_01->field_0x31 = *(undefined4 *)&this_01->field_0x1ae8;
              FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1ac4,
                           (undefined4 *)&this_01->field_0x1d);
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              thunk_FUN_00540620(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                                 (BITMAPINFO *)this_01->field_1E92);
              FUN_006b4170(this_01->field_1E8E,0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0,0x15e,
                               0x11);
              uVar12 = 2;
              iVar34 = -1;
              iVar13 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar13,iVar34,uVar12);
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0x22,
                               0x15e,0x11);
              uVar12 = 2;
              iVar34 = -1;
              iVar13 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar13,iVar34,uVar12);
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0x44,
                               0x15e,0x11);
              uVar12 = 2;
              iVar34 = -1;
              iVar13 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar13,iVar34,uVar12);
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0x66,
                               0x15e,0x11);
              uVar12 = 2;
              iVar34 = -1;
              iVar13 = -1;
              puVar16 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar13,iVar34,uVar12);
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,(BITMAPINFO *)this_01->field_1E8E,(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case 0x8164:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)&this_01->field_0x1cdb,(int)param_1,0);
          break;
        case 0x8165:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)&this_01->field_0x1d6c,(int)param_1,0);
          break;
        case 0x8166:
          uVar25 = *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
          *(uint *)&this_01->field_0x1e1d = uVar25;
          if (*(uint *)&this_01->field_0x1e01 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      (*(uint **)&this_01->field_0x1e45,*(uint *)&this_01->field_0x1e01,
                       *(uint *)&this_01->field_0x1e05,*(uint *)&this_01->field_0x1e19,uVar25);
          }
        }
        goto switchD_005a43f5_caseD_1;
      }
      switch(uVar25) {
      case 0xc0a2:
        if (*(int *)(*(int *)&this_01->field_0x1ea2 + 8) < 1) {
          pcVar29 = (char *)0x0;
        }
        else {
          pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1ea2 + 0x14);
        }
        bVar32 = thunk_FUN_00571810(pcVar29);
        if (CONCAT31(extraout_var,bVar32) == 0) {
          if (*(int *)(*(int *)&this_01->field_0x1ea2 + 8) < 1) {
            pcVar29 = (char *)0x0;
          }
          else {
            pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1ea2 + 0x14);
          }
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,pcVar29);
        }
        else {
          iVar34 = 0;
          iVar13 = *(int *)(*(int *)&this_01->field_0x1a5b + 0x696);
          if (0 < *(int *)(iVar13 + 8)) {
            if (*(int *)(iVar13 + 8) < 1) {
              pcVar29 = (char *)0x0;
              goto LAB_005a8b12;
            }
            do {
              pcVar29 = *(char **)(*(int *)(iVar13 + 0x14) + iVar34 * 4);
LAB_005a8b12:
              AddMessage(this_01,8,&DAT_008016a0,pcVar29,8);
              iVar34 = iVar34 + 1;
              iVar13 = *(int *)(*(int *)&this_01->field_0x1a5b + 0x696);
            } while (iVar34 < *(int *)(iVar13 + 8));
          }
        }
        Library::DKW::TBL::FUN_006b6020(*(int *)&this_01->field_0x1ea2,0,&DAT_008016a0);
        *(undefined4 *)&this_01->field_0x2d = 0x33;
        *(undefined4 *)&this_01->field_0x31 = *(undefined4 *)&this_01->field_0x1ea2;
        goto LAB_005a8c85;
      case 0xc0a3:
        iVar13 = *(int *)&this_01->field_0x1ae8;
        iVar34 = *(int *)(iVar13 + 8);
joined_r0x005a8b8f:
        if (0 < iVar34) {
          pcVar29 = (char *)**(undefined4 **)(iVar13 + 0x14);
        }
        iVar36 = -1;
        do {
          if (iVar36 == 0) break;
          iVar36 = iVar36 + -1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar29 + 1;
        } while (cVar2 != '\0');
        if (iVar36 != -2) {
          if (*(int *)(*(int *)&this_01->field_0x1aec + 8) < 1) {
            pcVar29 = (char *)0x0;
          }
          else {
            pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1aec + 0x14);
          }
          if (iVar34 < 1) {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)0x0,pcVar29,1);
          }
          else {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)**(undefined4 **)(iVar13 + 0x14),pcVar29,1);
          }
        }
        break;
      case 0xc0a4:
        if (this_01->field_1A60 != '\0') break;
        *(undefined4 *)&this_01->field_0x2d = 0x26;
        FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1b20,
                     (undefined4 *)&this_01->field_0x1d);
        uVar25 = *(uint *)&this_01->field_0x31;
        if (uVar25 == 0) break;
        iVar13 = this_01->field_1EA6;
        if (uVar25 < *(uint *)(iVar13 + 0xc)) {
          iVar13 = *(int *)(iVar13 + 8) * uVar25 + *(int *)(iVar13 + 0x1c);
        }
        else {
          iVar13 = 0;
        }
        if (*(int *)(*(int *)&this_01->field_0x1ea2 + 8) < 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = **(undefined4 **)(*(int *)&this_01->field_0x1ea2 + 0x14);
        }
        wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007cc5f0,uVar12,iVar13);
        Library::DKW::TBL::FUN_006b6020(*(int *)&this_01->field_0x1ea2,0,(char *)&DAT_0080f33a);
        *(undefined4 *)&this_01->field_0x2d = 0x33;
        *(undefined4 *)&this_01->field_0x31 = *(undefined4 *)&this_01->field_0x1ea2;
LAB_005a8c85:
        FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1b10,
                     (undefined4 *)&this_01->field_0x1d);
        break;
      case 0xc0a5:
        DAT_00807360 = DAT_00807360 == '\0';
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (uVar25 == 0x8160) {
      param_1[6] = 0x11;
      goto switchD_005a43f5_caseD_1;
    }
    switch(uVar25) {
    case 0x6980:
      piVar4 = (int *)param_1[6];
      iVar13 = *piVar4;
      local_140 = iVar13 + -0xb4;
      iVar34 = piVar4[1];
      local_13c = iVar34 + -0xaa;
      local_138 = piVar4[2];
      local_134 = piVar4[3];
      FUN_006b4170(this_01->field_1AC0,0,iVar13 + -0xb3,iVar34 + -0xa9,local_138 + -2,local_134 + -2
                   ,0xff);
      if (DAT_0080735f != '\0') {
        pbVar26 = (byte *)FUN_0070b3a0(*(int *)&this_01->field_0x1a83,0);
        thunk_FUN_00540760((undefined4 *)this_01->field_1AC0,iVar13 + -0xb2,iVar34 + -0xa8,'\x06',
                           pbVar26);
      }
      break;
    case 0x6981:
      iVar13 = *(int *)&this_01->field_0x1a73;
      local_14 = (BITMAPINFO *)0x0;
      if (*(int *)(iVar13 + 0xa0) != 0) {
        FUN_00710790(iVar13);
      }
      iVar34 = param_1[7];
      iVar13 = *(int *)(iVar13 + 0x8a);
      local_50 = *(int *)(iVar34 + 0x24) + -0xb4;
      local_48 = *(int *)(iVar34 + 0x2c);
      local_44 = *(int *)(iVar34 + 0x30);
      local_4c = *(int *)(iVar34 + 0x28) -
                 ((-(uint)(this_01->field_0x1abb != '\0') & 0xffffffb4) + 0xaa);
      FUN_006b4170(this_01->field_1AC0,0,*(int *)(iVar34 + 0x24) + -0xb5,local_4c,local_48 + 2,
                   local_44,0xff);
      iVar34 = param_1[5];
      if (iVar34 != 0) {
        local_8 = (uint *)0x0;
        do {
          if (*(uint **)(iVar34 + (int)local_8) == (uint *)0x0) break;
          iVar13 = FUN_007111c0(*(void **)&this_01->field_0x1a73,*(uint **)(iVar34 + (int)local_8));
          ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1AC0,0,local_50,
                           (int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                           local_4c,local_48,iVar13);
          ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,*(uint **)(param_1[5] + (int)local_8),0
                         ,-1,0);
          local_14 = (BITMAPINFO *)
                     ((int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     *(int *)(*(int *)&this_01->field_0x1a73 + 0x5c) + iVar13);
          iVar34 = param_1[5];
          local_8 = local_8 + 1;
        } while (iVar34 != 0);
      }
      if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
        iVar36 = (uint)*(ushort *)((int)param_1 + 0x1a) + local_4c;
        iVar34 = (uint)*(ushort *)(param_1 + 6) + local_50;
        FUN_006b5b10(this_01->field_1AC0,0,iVar34,iVar36,iVar34,iVar36 + iVar13,9,0xd);
      }
      goto LAB_005a7c92;
    case 0x6982:
      if (((this_01->field_1E8E != 0) && (this_01->field_1E92 != 0)) &&
         (local_8 = (uint *)param_1[7], local_8 != (uint *)0x0)) {
        if (this_01->field_1A5F == '\x03') {
          this_00 = *(ccFntTy **)&this_01->field_0x1a73;
          local_1c = *(byte **)&this_01->field_0x1b08;
        }
        else {
          this_00 = *(ccFntTy **)&this_01->field_0x1a77;
          local_1c = *(byte **)&this_01->field_0x1e9e;
        }
        FUN_006b5f80(DAT_008075a8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        thunk_FUN_00540620(local_8[9],local_8[10],6,1,local_8[0xb],(byte *)local_8[0xc],'\x01',
                           (BITMAPINFO *)this_01->field_1E92);
        FUN_006b4170(this_01->field_1E8E,0,0,0,local_8[0xb],local_8[0xc],0xff);
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
              if (*(int *)(this_00 + 0xa0) != 0) {
                FUN_00710790((int)this_00);
              }
              local_c = *(byte **)(this_00 + 0x8a);
              if (*(int *)(this_00 + 0xa0) != 0) {
                FUN_00710790((int)this_00);
              }
              ccFntTy::SetSurf(this_00,this_01->field_1E8E,0,0,
                               ((int)local_14 - (uint)*(ushort *)((int)param_1 + 0x16)) *
                               *(int *)(this_00 + 0x8a),*(int *)(this_01->field_1E8E + 4),
                               (int)local_c);
              ccFntTy::WrStr(this_00,local_10,0,-1,2);
            }
            local_14 = (BITMAPINFO *)((int)&(local_14->bmiHeader).biSize + 1);
          } while ((int)local_14 < (int)((uint)*(ushort *)((int)param_1 + 0x16) + local_8[0x78]));
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,local_8[9],local_8[10],(BITMAPINFO *)this_01->field_1E8E,(uint *)0x0
                   ,0,0,local_8[0xb],local_8[0xc],0x10000ff);
      }
      break;
    case 0x6983:
      if ((this_01->field_1E8E != 0) && (this_01->field_1E92 != 0)) {
        iVar13 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                     *(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),6,0x15f,
                           *(uint *)(iVar13 + 0x2c),*(byte **)(iVar13 + 0x30),'\x01',
                           (BITMAPINFO *)this_01->field_1E92);
        FUN_006b4170(this_01->field_1E8E,0,0,0,*(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30),0xff)
        ;
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a77,this_01->field_1E8E,0,0,0,
                           *(int *)(this_01->field_1E8E + 4),0x14);
          ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a77,*(uint **)param_1[5],0,-1,5);
        }
        uVar3 = *(ushort *)(param_1 + 6);
        if ((uVar3 != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          FUN_006b5b10(this_01->field_1E8E,0,(uint)uVar3,2,(uint)uVar3,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                   (BITMAPINFO *)this_01->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(iVar13 + 0x2c),
                   *(DWORD *)(iVar13 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((this_01->field_1E8E == 0) || (this_01->field_1E92 == 0)) break;
      pbVar26 = (byte *)param_1[7];
      FUN_006b5f80(DAT_008075a8,*(int *)(pbVar26 + 0x24),*(int *)(pbVar26 + 0x28),
                   *(int *)(pbVar26 + 0x2c),*(int *)(pbVar26 + 0x30));
      thunk_FUN_00540620(*(int *)(pbVar26 + 0x24),*(int *)(pbVar26 + 0x28),
                         *(int *)(pbVar26 + 0x24) + -0x13,0x160,*(uint *)(pbVar26 + 0x2c),
                         *(byte **)(pbVar26 + 0x30),'\x01',(BITMAPINFO *)this_01->field_1E92);
      FUN_006b4170(this_01->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),*(int *)(pbVar26 + 0x30),0xff)
      ;
      ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0,
                       *(int *)(pbVar26 + 0x2c),*(int *)(pbVar26 + 0x30));
      if ((short)param_1[5] == 1) {
        iVar13 = 2;
      }
      else {
        iVar13 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar36 = -1;
      iVar34 = -1;
      puVar16 = (uint *)FUN_006b0140(0x2565,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar34,iVar36,iVar13);
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
      if (this_01->field_1E8E == 0) break;
      local_14 = (BITMAPINFO *)0x0;
      switch(uVar25) {
      case 0x6985:
      case 0x6986:
        local_14 = *(BITMAPINFO **)&this_01->field_0x1e9a;
        local_10 = (uint *)0x1e9;
        break;
      default:
        goto switchD_005a7593_caseD_6987;
      case 0x6989:
      case 0x698a:
      case 0x698d:
        local_14 = (BITMAPINFO *)this_01->field_1E92;
        local_10 = (uint *)0x199;
        break;
      case 0x698e:
      case 0x698f:
      case 0x6990:
      case 0x6991:
      case 0x6992:
        local_14 = (BITMAPINFO *)this_01->field_1E92;
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
        uVar25 = *(uint *)&this_01->field_0x1ec2;
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
        if (*(int *)&this_01->field_0x1ec6 == -1) {
          pcVar29 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar17 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar17 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar17;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar17 + -uVar25;
          pcVar17 = (char *)&DAT_0080f33a;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar17 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
        else {
          if (*(uint *)&this_01->field_0x1eca < *(uint *)(DAT_0080c502 + 0xc)) {
            pcVar29 = (char *)(*(int *)(DAT_0080c502 + 8) * *(uint *)&this_01->field_0x1eca +
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
            pcVar17 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar17 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar17;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar17 + -uVar25;
          pcVar17 = (char *)&DAT_0080f33a;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar17 = *pcVar29;
            pcVar29 = pcVar29 + 1;
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
      pbVar26 = local_c;
      FUN_006b5f80(DAT_008075a8,*(int *)(local_c + 0x24),*(int *)(local_c + 0x28),
                   *(int *)(local_c + 0x2c),*(int *)(local_c + 0x30));
      thunk_FUN_00540620(*(int *)(pbVar26 + 0x24),*(int *)(pbVar26 + 0x28),
                         *(int *)(pbVar26 + 0x24) - (int)local_10,
                         *(int *)(pbVar26 + 0x28) - (int)local_1c,*(uint *)(pbVar26 + 0x2c),
                         *(byte **)(pbVar26 + 0x30),'\x01',local_14);
      FUN_006b4170(this_01->field_1E8E,0,0,0,*(int *)(pbVar26 + 0x2c),*(int *)(pbVar26 + 0x30),0xff)
      ;
      ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0,
                       *(int *)(pbVar26 + 0x2c),*(int *)(pbVar26 + 0x30));
      if ((short)param_1[5] == 1) {
        local_c = (byte *)0x2;
      }
      else {
        local_c = (byte *)((-(uint)((short)param_1[5] != 0) & 2) + 1);
      }
      if (param_1[4] == 0x698a) {
        puVar16 = &DAT_0080f33a;
      }
      else {
        puVar16 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      }
      ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,-1,-1,local_c);
      if ((short)param_1[5] == 0) {
        bVar24 = 0xd;
      }
      else {
        bVar24 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_01->field_1E8E,0,0,0,*(undefined4 **)(pbVar26 + 0x2c),
                   *(int *)(pbVar26 + 0x30),4,bVar24);
      if ((short)param_1[5] == 0) {
        bVar24 = 0xd;
      }
      else {
        bVar24 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_01->field_1E8E,0,2,2,(undefined4 *)(*(int *)(pbVar26 + 0x2c) + -4),
                   *(int *)(pbVar26 + 0x30) + -4,4,bVar24);
LAB_005a754e:
      DVar18 = *(DWORD *)(pbVar26 + 0x30);
      DVar35 = *(DWORD *)(pbVar26 + 0x2c);
      pBVar33 = (BITMAPINFO *)this_01->field_1E8E;
      iVar13 = *(int *)(pbVar26 + 0x28);
LAB_005a89f6:
      Library::DKW::DDX::FUN_006b4680
                (DAT_0080759c,*(int *)(pbVar26 + 0x24),iVar13,pBVar33,(uint *)0x0,0,0,DVar35,DVar18,
                 0x10000ff);
      break;
    case 0x6987:
      if ((this_01->field_1E8E != 0) && (*(int *)&this_01->field_0x1e9a != 0)) {
        iVar13 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                     *(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                           *(int *)(iVar13 + 0x24) + -0x1e9,*(int *)(iVar13 + 0x28) + -0x5e,
                           *(uint *)(iVar13 + 0x2c),*(byte **)(iVar13 + 0x30),'\x01',
                           *(BITMAPINFO **)&this_01->field_0x1e9a);
        FUN_006b4170(this_01->field_1E8E,0,0,0,*(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30),0xff)
        ;
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0,
                           *(int *)(this_01->field_1E8E + 4),0x19);
          ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar34 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(this_01->field_1E8E,0,iVar34,4,iVar34,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                   (BITMAPINFO *)this_01->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(iVar13 + 0x2c),
                   *(DWORD *)(iVar13 + 0x30),0x10000ff);
      }
      break;
    case 0x6988:
      if ((this_01->field_1E8E != 0) && (this_01->field_1E92 != 0)) {
        iVar13 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                     *(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                           *(int *)(iVar13 + 0x24) -
                           ((-(uint)(this_01->field_1A5F != '\t') & 0x177) + 0x22),
                           *(int *)(iVar13 + 0x28) + -0x5e,*(uint *)(iVar13 + 0x2c),
                           *(byte **)(iVar13 + 0x30),'\x01',(BITMAPINFO *)this_01->field_1E92);
        FUN_006b4170(this_01->field_1E8E,0,0,0,*(int *)(iVar13 + 0x2c),*(int *)(iVar13 + 0x30),0xff)
        ;
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1E8E,0,0,0,
                           *(int *)(this_01->field_1E8E + 4),0x19);
          ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar34 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(this_01->field_1E8E,0,iVar34,3,iVar34,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar13 + 0x24),*(int *)(iVar13 + 0x28),
                   (BITMAPINFO *)this_01->field_1E8E,(uint *)0x0,0,0,*(DWORD *)(iVar13 + 0x2c),
                   *(DWORD *)(iVar13 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar4 = (int *)param_1[6];
      iVar13 = *piVar4;
      iVar34 = iVar13 + -0xb4;
      local_3c = piVar4[1] + -0xaa;
      local_38 = (undefined4 *)piVar4[2];
      local_34 = piVar4[3];
      local_40 = iVar34;
      FUN_006b4170(this_01->field_1AC0,0,iVar34,local_3c,(int)local_38,local_34,0xff);
      if ((short)param_1[5] == 0) {
        bVar24 = 0xd;
      }
      else {
        bVar24 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_01->field_1AC0,0,iVar34,local_3c,local_38,local_34,4,bVar24);
      if ((short)param_1[5] == 0) {
        bVar24 = 0xd;
      }
      else {
        bVar24 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(this_01->field_1AC0,0,iVar13 + -0xb2,local_3c + 2,local_38 + -1,local_34 + -4,4,
                   bVar24);
      uVar25 = *(uint *)&this_01->field_0x1ec2;
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
      ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1AC0,0,iVar34,local_3c,
                       (int)local_38,local_34);
      if ((short)param_1[5] == 1) {
        iVar13 = 2;
      }
      else {
        iVar13 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar36 = -1;
      iVar34 = -1;
      puVar16 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar34,iVar36,iVar13);
LAB_005a7c92:
      FUN_006b35d0(DAT_008075a8,this_01->field_1ABC);
      break;
    case 0x698c:
      ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,param_1[6],0,0,0,0,0);
      iVar13 = *(int *)&this_01[1].field_0xd4;
      if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar13 + 0xc)) {
        puVar16 = (uint *)(*(int *)(iVar13 + 8) * (uint)*(ushort *)(param_1 + 5) +
                          *(int *)(iVar13 + 0x1c));
      }
      else {
        puVar16 = (uint *)0x0;
      }
      ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x1a73,puVar16,-1,-1,
                     3 - (uint)(*(short *)((int)param_1 + 0x16) != 1));
      if (*(short *)((int)param_1 + 0x16) == 1) {
        iVar13 = param_1[6];
        FUN_006b5ee0(iVar13,0,0,0,*(int *)(iVar13 + 4),*(int *)(iVar13 + 8),0xf,0xd);
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar25 == 0x6949) {
    (**(code **)(*(int *)this_01 + 8))();
    this_01->field_0x1a61 = 9;
    iVar13 = *(int *)&this_01->field_0x1a5b;
    if (*(int *)(iVar13 + 0x2e6) == 0) goto switchD_005a43f5_caseD_1;
    puVar15 = local_2ac;
    for (iVar34 = 6; iVar34 != 0; iVar34 = iVar34 + -1) {
      *puVar15 = 0xffffffff;
      puVar15 = puVar15 + 1;
    }
    *(undefined2 *)puVar15 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar13 + 0x2e6),(int)local_2ac);
    puVar15 = &local_d0;
LAB_005a7f3b:
    thunk_FUN_005b8f40(*(void **)(*(int *)&this_01->field_0x1a5b + 0x2e6),puVar15);
    goto switchD_005a43f5_caseD_1;
  }
  if (0x63ff < uVar25) {
    if (uVar25 < 0x6907) {
      if (uVar25 == 0x6906) {
        if (DAT_00802a30[0xb].field_0x47 == '\x05') goto switchD_005a43f5_caseD_1;
        iVar13 = *(int *)&this_01[1].field_0xd4;
        local_c = (byte *)param_1[7];
        *(undefined4 *)((int)&this_01[1].field_0061 + 3) = 0x6506;
        bVar24 = local_c[8];
        bVar7 = local_c[9];
        bVar8 = local_c[10];
        bVar9 = local_c[0xb];
        *(undefined4 *)&this_01[1].field_0x84 = 0x698c;
        this_01[1].field_0x6c = bVar24;
        this_01[1].field_0x6d = bVar7;
        this_01[1].field_0x6e = bVar8;
        this_01[1].field_0x6f = bVar9;
        *(undefined4 *)(iVar13 + 0xc) = 0;
        *(undefined4 *)&this_01[1].field_0x1dc = 1;
        pcVar29 = (char *)FUN_006b0140(0x25b4,DAT_00807618);
        uVar25 = 0xffffffff;
        do {
          pcVar17 = pcVar29;
          if (uVar25 == 0) break;
          uVar25 = uVar25 - 1;
          pcVar17 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar17;
        } while (cVar2 != '\0');
        uVar25 = ~uVar25;
        pcVar29 = pcVar17 + -uVar25;
        pcVar17 = &this_01[1].field_0xd8;
        for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
          pcVar29 = pcVar29 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *pcVar17 = *pcVar29;
          pcVar29 = pcVar29 + 1;
          pcVar17 = pcVar17 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
        *(undefined4 *)&this_01[1].field_0x1dc = 2;
        pcVar29 = (char *)FUN_006b0140(0x25b5,DAT_00807618);
        uVar25 = 0xffffffff;
        do {
          pcVar17 = pcVar29;
          if (uVar25 == 0) break;
          uVar25 = uVar25 - 1;
          pcVar17 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar17;
        } while (cVar2 != '\0');
        uVar25 = ~uVar25;
        pcVar29 = pcVar17 + -uVar25;
        pcVar17 = &this_01[1].field_0xd8;
        for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
          pcVar29 = pcVar29 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
          *pcVar17 = *pcVar29;
          pcVar29 = pcVar29 + 1;
          pcVar17 = pcVar17 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
        iVar13 = *(int *)&this_01[1].field_0xd4;
        *(undefined4 *)&this_01[1].field_0x9c = *(undefined4 *)(iVar13 + 0xc);
        uVar25 = 0;
        *(undefined4 *)&this_01[1].field_0x94 = 0;
        if (*(uint *)(iVar13 + 0xc) != 0) {
          do {
            if (DAT_00803140 ==
                *(int *)(*(int *)(iVar13 + 8) * uVar25 + *(int *)(iVar13 + 0x1c) + 0x104)) {
              *(uint *)&this_01[1].field_0x94 = uVar25;
              break;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < *(uint *)(iVar13 + 0xc));
        }
      }
      else {
        if (uVar25 < 0x6903) {
          if (uVar25 == 0x6902) {
            iVar13 = *(int *)&this_01->field_0x1ae8;
            iVar34 = *(int *)(iVar13 + 8);
            goto joined_r0x005a8b8f;
          }
          if (0x6900 < uVar25) {
            if ((uVar25 == 0x6901) && (this_01->field_1A60 == '\0')) {
              *(undefined4 *)&this_01->field_0x2d = 0x26;
              puVar1 = &this_01->field_0x1d;
              FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1b20,(undefined4 *)puVar1);
              iVar13 = this_01->field_1EA6;
              if ((uint)*(ushort *)&this_01->field_0x31 < *(uint *)(iVar13 + 0xc)) {
                iVar13 = *(int *)(iVar13 + 8) * (uint)*(ushort *)&this_01->field_0x31 +
                         *(int *)(iVar13 + 0x1c);
              }
              else {
                iVar13 = 0;
              }
              if (iVar13 != 0) {
                *(undefined4 *)&this_01->field_0x2d = 0x32;
                FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1b10,(undefined4 *)puVar1);
                iVar34 = *(int *)&this_01->field_0x31;
                if (iVar34 != 0) {
                  if (*(int *)(iVar34 + 8) < 1) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = **(undefined4 **)(iVar34 + 0x14);
                  }
                  uVar19 = FUN_006b0140(0x2568,DAT_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,s__s__s__s_007cc62c,uVar19,iVar13,uVar12);
                  CFsgsConnection::SendChatMessage
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  Library::DKW::TBL::FUN_006b6020(*(int *)&this_01->field_0x1ea2,0,&DAT_008016a0);
                  *(undefined4 *)&this_01->field_0x2d = 0x33;
                  *(undefined4 *)&this_01->field_0x31 = *(undefined4 *)&this_01->field_0x1ea2;
                  FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1b10,(undefined4 *)puVar1)
                  ;
                }
              }
            }
            goto switchD_005a43f5_caseD_1;
          }
          if (uVar25 == 0x6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            *(undefined4 *)&this_01->field_0x2d = 5;
            FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1ad0,
                         (undefined4 *)&this_01->field_0x1d);
            goto switchD_005a43f5_caseD_1;
          }
          if (uVar25 != 0x6506) {
            if (uVar25 == 0x68ff) {
              if (param_1[5] == 0) {
                if (*(int *)&this_01->field_0x1ab7 == *param_1) {
                  *(undefined4 *)&this_01->field_0x1ab7 = 0;
                }
              }
              else if (param_1[5] == 1) {
                *(int *)&this_01->field_0x1ab7 = *param_1;
              }
            }
            goto switchD_005a43f5_caseD_1;
          }
          iVar13 = *(int *)&this_01[1].field_0xd4;
          uVar25 = param_1[5];
          if (*(uint *)(iVar13 + 0xc) <= uVar25) goto switchD_005a43f5_caseD_1;
          if (this_01->field_1A5F == '\t') {
            if (param_1[6] == *(int *)&this_01->field_0x1eb6) {
              DAT_00803140 = *(ulong *)(*(int *)(iVar13 + 8) * uVar25 + 0x104 +
                                       *(int *)(iVar13 + 0x1c));
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar27 = DAT_00802a30;
joined_r0x005a55e5:
              DAT_00802a30 = pCVar27;
              if (pCVar27 == (CursorClassTy *)0x0) goto LAB_005a5634;
              pCVar27[0xb].field_0x47 = 5;
              *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
              CursorClassTy::SetGCType
                        (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                         *(undefined4 *)&pCVar27[2].field_0x1);
              iVar13 = *(int *)&pCVar27[2].field_0x1;
              iVar34 = *(int *)((int)&pCVar27[1].field_0060 + 1);
            }
            else {
              DAT_00803144 = *(int *)(*(int *)(iVar13 + 8) * uVar25 + 0x104 +
                                     *(int *)(iVar13 + 0x1c));
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar27 = DAT_00802a30;
              if (DAT_00802a30 == (CursorClassTy *)0x0) goto LAB_005a5634;
              uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
              uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
              DAT_00802a30[0xb].field_0x47 = 5;
              *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
              CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
              iVar13 = *(int *)&pCVar27[2].field_0x1;
              iVar34 = *(int *)((int)&pCVar27[1].field_0060 + 1);
            }
LAB_005a561c:
            CursorClassTy::DrawSprite(pCVar27,iVar34,iVar13);
            pCVar27[2].field_0xa = 0;
            *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
          }
          else {
            if (param_1[6] != *(int *)&this_01->field_0x1eb6) {
              iVar13 = *(int *)(iVar13 + 8) * uVar25 + *(int *)(iVar13 + 0x1c);
              *(undefined4 *)&this_01->field_0x1ec6 = *(undefined4 *)(iVar13 + 0x104);
              *(undefined4 *)&this_01->field_0x1eca = *(undefined4 *)(iVar13 + 0x108);
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_01->field_0x1ec2,
                         (char *)0x0);
              DVar18 = timeGetTime();
              *(DWORD *)&this_01->field_0x1a63 = DVar18;
              pCVar27 = DAT_00802a30;
              goto joined_r0x005a55e5;
            }
            *(undefined4 *)&this_01->field_0x1ec2 =
                 *(undefined4 *)(*(int *)(iVar13 + 8) * uVar25 + 0x104 + *(int *)(iVar13 + 0x1c));
            if (this_01->field_1A5F == '\b') {
              iVar13 = *(int *)&this_01->field_0x1ec2;
              puVar15 = local_24c;
              for (iVar34 = 8; iVar34 != 0; iVar34 = iVar34 + -1) {
                *puVar15 = 0;
                puVar15 = puVar15 + 1;
              }
              *(undefined4 *)&this_01->field_0x1ec6 = 0xffffffff;
              local_238 = (uint)(iVar13 == 0x100);
              *(undefined4 *)&this_01->field_0x1eca = 0;
              local_23c = 0x20;
              if (*(int *)&this_01->field_0x1eba != 0) {
                FUN_006e6080(this_01,2,*(int *)&this_01->field_0x1eba,local_24c);
              }
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_01->field_0x1ec2,
                         (char *)0x0);
              DVar18 = timeGetTime();
              *(DWORD *)&this_01->field_0x1a63 = DVar18;
              pCVar27 = DAT_00802a30;
              if (DAT_00802a30 != (CursorClassTy *)0x0) {
                uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
                uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
                DAT_00802a30[0xb].field_0x47 = 5;
                *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
                CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
                iVar13 = *(int *)&pCVar27[2].field_0x1;
                iVar34 = *(int *)((int)&pCVar27[1].field_0060 + 1);
                goto LAB_005a561c;
              }
            }
          }
LAB_005a5634:
          *(undefined4 *)&this_01->field_0x2d = 5;
          FUN_006e6080(this_01,2,param_1[6],(undefined4 *)&this_01->field_0x1d);
          goto switchD_005a43f5_caseD_1;
        }
        if (uVar25 == 0x6903) {
          if (DAT_00802a30 != (CursorClassTy *)0x0) {
            uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
            uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
            DAT_00802a30[0xb].field_0x47 = 5;
            *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
            CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
            CursorClassTy::DrawSprite
                      (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),
                       *(int *)&pCVar27[2].field_0x1);
            pCVar27[2].field_0xa = 0;
            *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
          }
          if (this_01->field_1A5F == '\x06') {
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_01->field_1A60 = 1;
          }
          if (this_01->field_1A5F == '\b') {
            CFsgsConnection::RequestGameList
                      ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_01->field_0x1ec2,(char *)0x0
                      );
            DVar18 = timeGetTime();
            *(DWORD *)&this_01->field_0x1a63 = DVar18;
          }
          goto switchD_005a43f5_caseD_1;
        }
        if (uVar25 == 0x6904) {
          local_c = (byte *)param_1[7];
          iVar13 = *(int *)&this_01[1].field_0xd4;
          *(undefined4 *)((int)&this_01[1].field_0061 + 3) = 0x6506;
          bVar24 = local_c[8];
          bVar7 = local_c[9];
          bVar8 = local_c[10];
          bVar9 = local_c[0xb];
          *(undefined4 *)&this_01[1].field_0x84 = 0x698c;
          this_01[1].field_0x6c = bVar24;
          this_01[1].field_0x6d = bVar7;
          this_01[1].field_0x6e = bVar8;
          this_01[1].field_0x6f = bVar9;
          *(undefined4 *)(iVar13 + 0xc) = 0;
          if (this_01->field_1A5F == '\b') {
            *(undefined4 *)&this_01[1].field_0x1dc = 0;
            pcVar29 = (char *)FUN_006b0140(0x235c,DAT_00807618);
            uVar25 = 0xffffffff;
            do {
              pcVar17 = pcVar29;
              if (uVar25 == 0) break;
              uVar25 = uVar25 - 1;
              pcVar17 = pcVar29 + 1;
              cVar2 = *pcVar29;
              pcVar29 = pcVar17;
            } while (cVar2 != '\0');
            uVar25 = ~uVar25;
            pcVar29 = pcVar17 + -uVar25;
            pcVar17 = &this_01[1].field_0xd8;
            for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
              pcVar29 = pcVar29 + 4;
              pcVar17 = pcVar17 + 4;
            }
            for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
              *pcVar17 = *pcVar29;
              pcVar29 = pcVar29 + 1;
              pcVar17 = pcVar17 + 1;
            }
            Library::DKW::TBL::FUN_006ae1c0
                      (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
          }
          *(undefined4 *)&this_01[1].field_0x1dc = 0x100;
          pcVar29 = (char *)FUN_006b0140(0x2341,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar17 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar17 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar17;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar17 + -uVar25;
          pcVar17 = &this_01[1].field_0xd8;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar17 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
          *(undefined4 *)&this_01[1].field_0x1dc = 0x501;
          pcVar29 = (char *)FUN_006b0140(0x2342,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar17 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar17 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar17;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar17 + -uVar25;
          pcVar17 = &this_01[1].field_0xd8;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar17 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
          *(undefined4 *)&this_01[1].field_0x1dc = 0x200;
          pcVar29 = (char *)FUN_006b0140(0x235a,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar17 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar17 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar17;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar17 + -uVar25;
          pcVar17 = &this_01[1].field_0xd8;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar17 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
          *(undefined4 *)&this_01[1].field_0x1dc = 0x400;
          pcVar29 = (char *)FUN_006b0140(0x235b,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar17 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar17 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar17;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar17 + -uVar25;
          pcVar17 = &this_01[1].field_0xd8;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar17 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
          *(undefined4 *)&this_01[1].field_0x1dc = 0x502;
          pcVar29 = (char *)FUN_006b0140(0x235d,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar17 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar17 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar17;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar17 + -uVar25;
          pcVar17 = &this_01[1].field_0xd8;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar17 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar17 = pcVar17 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
          iVar13 = *(int *)&this_01[1].field_0xd4;
          *(undefined4 *)&this_01[1].field_0x9c = *(undefined4 *)(iVar13 + 0xc);
          uVar25 = 0;
          *(undefined4 *)&this_01[1].field_0x94 = 0;
          if (*(uint *)(iVar13 + 0xc) != 0) {
            do {
              if (*(int *)&this_01->field_0x1ec2 ==
                  *(int *)(*(int *)(iVar13 + 8) * uVar25 + *(int *)(iVar13 + 0x1c) + 0x104)) {
                *(uint *)&this_01[1].field_0x94 = uVar25;
                break;
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < *(uint *)(iVar13 + 0xc));
          }
        }
        else {
          if (uVar25 != 0x6905) goto switchD_005a43f5_caseD_1;
          iVar13 = *(int *)&this_01[1].field_0xd4;
          local_c = (byte *)param_1[7];
          *(undefined4 *)((int)&this_01[1].field_0061 + 3) = 0x6506;
          bVar24 = local_c[8];
          bVar7 = local_c[9];
          bVar8 = local_c[10];
          bVar9 = local_c[0xb];
          *(undefined4 *)&this_01[1].field_0x84 = 0x698c;
          this_01[1].field_0x6c = bVar24;
          this_01[1].field_0x6d = bVar7;
          this_01[1].field_0x6e = bVar8;
          this_01[1].field_0x6f = bVar9;
          *(undefined4 *)(iVar13 + 0xc) = 0;
          *(undefined4 *)&this_01[1].field_0x1dc = 0xffffffff;
          pcVar29 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar25 = 0xffffffff;
          do {
            pcVar17 = pcVar29;
            if (uVar25 == 0) break;
            uVar25 = uVar25 - 1;
            pcVar17 = pcVar29 + 1;
            cVar2 = *pcVar29;
            pcVar29 = pcVar17;
          } while (cVar2 != '\0');
          uVar25 = ~uVar25;
          pcVar29 = pcVar17 + -uVar25;
          pcVar17 = &this_01[1].field_0xd8;
          for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
            pcVar29 = pcVar29 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            *pcVar17 = *pcVar29;
            pcVar29 = pcVar29 + 1;
            pcVar17 = pcVar17 + 1;
          }
          *(undefined4 *)&this_01[1].field_0x1e0 = 0;
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
          local_8 = (uint *)0x0;
          if (*(int *)(DAT_0080c502 + 0xc) != 0) {
            iVar13 = DAT_0080c502;
            if (*(int *)(DAT_0080c502 + 0xc) == 0) {
              pcVar29 = (char *)0x0;
              goto LAB_005a5859;
            }
            do {
              pcVar29 = (char *)(*(int *)(iVar13 + 8) * (int)local_8 + *(int *)(iVar13 + 0x1c));
LAB_005a5859:
              if (pcVar29 != (char *)0x0) {
                cVar2 = pcVar29[0x91];
                cVar10 = pcVar29[0x92];
                cVar11 = pcVar29[0x93];
                this_01[1].field_0x1dc = pcVar29[0x90];
                this_01[1].field_0x1dd = cVar2;
                this_01[1].field_0x1de = cVar10;
                this_01[1].field_0x1df = cVar11;
                uVar25 = 0xffffffff;
                do {
                  pcVar17 = pcVar29;
                  if (uVar25 == 0) break;
                  uVar25 = uVar25 - 1;
                  pcVar17 = pcVar29 + 1;
                  cVar2 = *pcVar29;
                  pcVar29 = pcVar17;
                } while (cVar2 != '\0');
                uVar25 = ~uVar25;
                pcVar29 = pcVar17 + -uVar25;
                pcVar17 = &this_01[1].field_0xd8;
                for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
                  *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
                  pcVar29 = pcVar29 + 4;
                  pcVar17 = pcVar17 + 4;
                }
                for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                  *pcVar17 = *pcVar29;
                  pcVar29 = pcVar29 + 1;
                  pcVar17 = pcVar17 + 1;
                }
                *(uint **)&this_01[1].field_0x1e0 = local_8;
                Library::DKW::TBL::FUN_006ae1c0
                          (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
                iVar13 = DAT_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < *(uint **)(iVar13 + 0xc));
          }
          iVar13 = *(int *)&this_01[1].field_0xd4;
          uVar25 = 0;
          uVar12 = *(undefined4 *)(iVar13 + 0xc);
          *(undefined4 *)&this_01[1].field_0x94 = 0;
          *(undefined4 *)&this_01[1].field_0x9c = uVar12;
          if (*(uint *)(iVar13 + 0xc) != 0) {
            do {
              if (*(int *)&this_01->field_0x1ec6 ==
                  *(int *)(*(int *)(iVar13 + 8) * uVar25 + *(int *)(iVar13 + 0x1c) + 0x104)) {
                *(uint *)&this_01[1].field_0x94 = uVar25;
                break;
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < *(uint *)(iVar13 + 0xc));
          }
        }
      }
      bVar24 = local_c[0x25];
      bVar7 = local_c[0x26];
      bVar8 = local_c[0x27];
      iVar13 = *(int *)&this_01->field_0x1a73;
      this_01[1].field_0xb8 = local_c[0x24];
      this_01[1].field_0xb9 = bVar24;
      this_01[1].field_0xba = bVar7;
      this_01[1].field_0xbb = bVar8;
      *(int *)&this_01[1].field_0xc0 = *(int *)(local_c + 0x2c) + 10;
      *(int *)&this_01[1].field_0xbc = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar34 = *(int *)(iVar13 + 0xa0);
joined_r0x005a5b89:
      if (iVar34 != 0) {
        FUN_00710790(iVar13);
      }
      piVar4 = *(int **)&this_01->field_0xc;
      *(undefined4 *)&this_01[1].field_0x98 = *(undefined4 *)(iVar13 + 0x8a);
      (**(code **)(*piVar4 + 8))(0x100ef,0,0,&this_01[1].field_0x54,0);
      goto switchD_005a43f5_caseD_1;
    }
    switch(uVar25) {
    case 0x6907:
      if (DAT_00802a30[0xb].field_0x47 == '\x05') break;
      iVar13 = *(int *)&this_01[1].field_0xd4;
      local_c = (byte *)param_1[7];
      *(undefined4 *)((int)&this_01[1].field_0061 + 3) = 0x6506;
      bVar24 = local_c[8];
      bVar7 = local_c[9];
      bVar8 = local_c[10];
      bVar9 = local_c[0xb];
      *(undefined4 *)&this_01[1].field_0x84 = 0x698c;
      this_01[1].field_0x6c = bVar24;
      this_01[1].field_0x6d = bVar7;
      this_01[1].field_0x6e = bVar8;
      this_01[1].field_0x6f = bVar9;
      *(undefined4 *)(iVar13 + 0xc) = 0;
      *(undefined4 *)&this_01[1].field_0x1dc = 0;
      pcVar29 = (char *)FUN_006b0140(0x25bf,DAT_00807618);
      uVar25 = 0xffffffff;
      do {
        pcVar17 = pcVar29;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar17 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar17;
      } while (cVar2 != '\0');
      uVar25 = ~uVar25;
      pcVar29 = pcVar17 + -uVar25;
      pcVar17 = &this_01[1].field_0xd8;
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
        pcVar29 = pcVar29 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar17 = *pcVar29;
        pcVar29 = pcVar29 + 1;
        pcVar17 = pcVar17 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
      *(undefined4 *)&this_01[1].field_0x1dc = 1;
      pcVar29 = (char *)FUN_006b0140(0x25c0,DAT_00807618);
      uVar25 = 0xffffffff;
      do {
        pcVar17 = pcVar29;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar17 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar17;
      } while (cVar2 != '\0');
      uVar25 = ~uVar25;
      pcVar29 = pcVar17 + -uVar25;
      pcVar17 = &this_01[1].field_0xd8;
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
        pcVar29 = pcVar29 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar17 = *pcVar29;
        pcVar29 = pcVar29 + 1;
        pcVar17 = pcVar17 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
      *(undefined4 *)&this_01[1].field_0x1dc = 2;
      pcVar29 = (char *)FUN_006b0140(0x25c1,DAT_00807618);
      uVar25 = 0xffffffff;
      do {
        pcVar17 = pcVar29;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar17 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar17;
      } while (cVar2 != '\0');
      uVar25 = ~uVar25;
      pcVar29 = pcVar17 + -uVar25;
      pcVar17 = &this_01[1].field_0xd8;
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar29;
        pcVar29 = pcVar29 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar17 = *pcVar29;
        pcVar29 = pcVar29 + 1;
        pcVar17 = pcVar17 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_01[1].field_0xd4,(undefined4 *)&this_01[1].field_0xd8);
      iVar13 = *(int *)&this_01[1].field_0xd4;
      *(undefined4 *)&this_01[1].field_0x9c = *(undefined4 *)(iVar13 + 0xc);
      uVar25 = 0;
      *(undefined4 *)&this_01[1].field_0x94 = 0;
      if (*(uint *)(iVar13 + 0xc) != 0) {
        do {
          if (DAT_00803144 ==
              *(int *)(*(int *)(iVar13 + 8) * uVar25 + *(int *)(iVar13 + 0x1c) + 0x104)) {
            *(uint *)&this_01[1].field_0x94 = uVar25;
            break;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < *(uint *)(iVar13 + 0xc));
      }
      iVar13 = *(int *)&this_01->field_0x1a73;
      bVar24 = local_c[0x25];
      bVar7 = local_c[0x26];
      bVar8 = local_c[0x27];
      this_01[1].field_0xb8 = local_c[0x24];
      this_01[1].field_0xb9 = bVar24;
      this_01[1].field_0xba = bVar7;
      this_01[1].field_0xbb = bVar8;
      *(int *)&this_01[1].field_0xc0 = *(int *)(local_c + 0x2c) + 10;
      *(int *)&this_01[1].field_0xbc = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar34 = *(int *)(iVar13 + 0xa0);
      goto joined_r0x005a5b89;
    case 0x6908:
      if (DAT_00802a30[0xb].field_0x47 == '\x05') break;
      bVar32 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar32 = true;
      }
      if ((!bVar32) ||
         (CFsgsConnection::RequestLadderList
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar27 = DAT_00802a30, DAT_00802a30 == (CursorClassTy *)0x0)) break;
      uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
      uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
      DAT_00802a30[0xb].field_0x47 = 5;
      *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
      iVar13 = *(int *)&pCVar27[2].field_0x1;
      iVar34 = *(int *)((int)&pCVar27[1].field_0060 + 1);
      goto LAB_005a52aa;
    case 0x6909:
      if ((DAT_00802a30[0xb].field_0x47 == '\x05') || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar27 = DAT_00802a30;
      if (DAT_00802a30 == (CursorClassTy *)0x0) break;
      uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
      uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
      DAT_00802a30[0xb].field_0x47 = 5;
      *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
      iVar13 = *(int *)&pCVar27[2].field_0x1;
      iVar34 = *(int *)((int)&pCVar27[1].field_0060 + 1);
LAB_005a52aa:
      CursorClassTy::DrawSprite(pCVar27,iVar34,iVar13);
      pCVar27[2].field_0xa = 0;
      *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
      break;
    case 0x690a:
      if ((DAT_00802a30[0xb].field_0x47 == '\x05') ||
         (iVar13 = *(int *)&this_01->field_0x1ae8, iVar13 == 0)) break;
      if (0 < *(int *)(iVar13 + 8)) {
        pcVar29 = (char *)**(undefined4 **)(iVar13 + 0x14);
      }
      iVar34 = -1;
      do {
        if (iVar34 == 0) break;
        iVar34 = iVar34 + -1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar29 + 1;
      } while (cVar2 != '\0');
      if (iVar34 == -2) break;
      if (*(int *)(iVar13 + 8) < 1) {
        pcVar29 = (char *)0x0;
      }
      else {
        pcVar29 = (char *)**(undefined4 **)(iVar13 + 0x14);
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
      if ((*(uint *)&this_01[1].field_0x4 <= (uint)bVar24) || (this_01->field_1EDB == 0)) break;
      iVar34 = (uint)bVar24 * 0x24;
      iVar13 = -1;
      pcVar29 = (char *)(iVar34 + 0x14 + this_01->field_1EDB);
      do {
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar29 + 1;
      } while (cVar2 != '\0');
      if (iVar13 == -2) break;
      if (this_01->field_1B0C != 0) {
        FUN_006ab060(&this_01->field_1B0C);
      }
      uVar25 = 0xffffffff;
      pcVar29 = (char *)(iVar34 + 0x14 + this_01->field_1EDB);
      do {
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar29 + 1;
      } while (cVar2 != '\0');
      pcVar29 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar25);
      this_01->field_1B0C = pcVar29;
      uVar25 = 0xffffffff;
      pcVar17 = (char *)(iVar34 + 0x14 + this_01->field_1EDB);
      do {
        pcVar31 = pcVar17;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar31 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar31;
      } while (cVar2 != '\0');
      uVar25 = ~uVar25;
      pcVar17 = pcVar31 + -uVar25;
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar29 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar29 = pcVar29 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar29 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar29 = pcVar29 + 1;
      }
      (**(code **)(*(int *)this_01 + 8))();
      this_01->field_0x1a61 = 10;
      this_01->field_0x1ed2 = 9;
      iVar13 = *(int *)&this_01->field_0x1a5b;
      if (*(int *)(iVar13 + 0x2e6) == 0) break;
      puVar15 = local_338;
      for (iVar34 = 6; iVar34 != 0; iVar34 = iVar34 + -1) {
        *puVar15 = 0xffffffff;
        puVar15 = puVar15 + 1;
      }
      *(undefined2 *)puVar15 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      MMsgTy::StatePanel(*(MMsgTy **)(iVar13 + 0x2e6),(int)local_338);
      puVar15 = &local_70;
      goto LAB_005a7f3b;
    case 0x693f:
      thunk_FUN_0059b820(this_01);
      break;
    case 0x6940:
      thunk_FUN_0059be50(this_01);
      break;
    case 0x6941:
      thunk_FUN_005b6350(this_01,0x6105,0,1);
      this_01->field_0x1a61 = 0;
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      (**(code **)(*(int *)this_01 + 8))();
      pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
      if (pMVar23 != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(pMVar23,1,0,1);
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar25 == 0x63ff) {
    cVar2 = this_01->field_1A5F;
    if (cVar2 == '\x03') {
      (**(code **)(*(int *)this_01 + 8))();
      this_01->field_0x1a61 = 4;
      if (*(int *)(*(int *)&this_01->field_0x1a5b + 0x2e6) != 0) {
        local_dc = 0;
        local_d8 = 0;
        local_e0 = 0x101;
        local_d4 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)&this_01->field_0x1a5b + 0x2e6),&local_e0);
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (cVar2 == '\a') {
      if ((DAT_00802a30 != (CursorClassTy *)0x0) && (DAT_00802a30[0xb].field_0x47 == '\x05'))
      goto switchD_005a43f5_caseD_1;
      thunk_FUN_005daa60();
      local_290.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_290;
      iVar13 = Library::MSVCRT::__setjmp3(local_290.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_01 = local_20;
      if (iVar13 == 0) {
        FUN_006b6150((uint)DAT_00807362);
        if (*(int *)(*(int *)&this_01->field_0x1ae8 + 8) < 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = **(undefined4 **)(*(int *)&this_01->field_0x1ae8 + 0x14);
        }
        Library::DKW::DDX::FUN_006b69b0(&DAT_00811764,(int *)&DAT_007cd6f0,0,uVar12,0x20);
        g_currentExceptionFrame = local_290.previous;
      }
      else {
        g_currentExceptionFrame = local_290.previous;
        iVar13 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xc08,0,iVar13,
                                    &DAT_007a4ccc,s_FSGSTy__GetMessage_MESS_ID_MSGOK_007cc638);
        if (iVar13 != 0) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return uVar12;
        }
      }
      if (DAT_00811764 == 0) {
        pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar23,0x2594,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
        goto switchD_005a43f5_caseD_1;
      }
      FUN_006b6160(local_6b8,DAT_00811764 + 0x18);
      local_698 = 0;
      if (*(int *)(*(int *)&this_01->field_0x1aec + 8) < 1) {
        pcVar29 = (char *)0x0;
      }
      else {
        pcVar29 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1aec + 0x14);
      }
      if (*(int *)(*(int *)&this_01->field_0x1ae8 + 8) < 1) {
        pcVar17 = (char *)0x0;
      }
      else {
        pcVar17 = (char *)**(undefined4 **)(*(int *)&this_01->field_0x1ae8 + 0x14);
      }
      CFsgsConnection::CreateGame
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)&this_01->field_0x1ec2,0x17e0,pcVar17,
                 pcVar29,local_6b8);
      pCVar27 = DAT_00802a30;
      if (DAT_00802a30 == (CursorClassTy *)0x0) goto switchD_005a43f5_caseD_1;
      uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
      uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
      DAT_00802a30[0xb].field_0x47 = 5;
      *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
      iVar13 = *(int *)&pCVar27[2].field_0x1;
      iVar34 = *(int *)((int)&pCVar27[1].field_0060 + 1);
      goto LAB_005a52aa;
    }
    if ((cVar2 != '\b') ||
       (((DAT_00802a30 != (CursorClassTy *)0x0 && (DAT_00802a30[0xb].field_0x47 == '\x05')) ||
        (this_01->field_1EBE == 0)))) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0xb].field_0x47 = 5;
      *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType
                (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                 *(undefined4 *)&pCVar27[2].field_0x1);
      CursorClassTy::DrawSprite
                (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1);
      pCVar27[2].field_0xa = 0;
      *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
    }
    *(undefined4 *)&this_01->field_0x2d = 0x26;
    FUN_006e6080(this_01,2,*(undefined4 *)&this_01->field_0x1b20,(undefined4 *)&this_01->field_0x1d)
    ;
    pCVar27 = DAT_00802a30;
    iVar13 = this_01->field_1EBE;
    if (*(uint *)(iVar13 + 0xc) <= *(uint *)&this_01->field_0x31) goto switchD_005a43f5_caseD_1;
    local_15 = '\x01';
    local_8 = (uint *)(*(int *)(iVar13 + 8) * *(uint *)&this_01->field_0x31 +
                      *(int *)(iVar13 + 0x1c));
    if (local_8 == (uint *)0x0) goto switchD_005a43f5_caseD_1;
    puVar16 = local_8 + 0x13;
    iVar13 = -1;
    puVar30 = puVar16;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      uVar25 = *puVar30;
      puVar30 = (uint *)((int)puVar30 + 1);
    } while ((byte)uVar25 != 0);
    if (iVar13 != -2) {
      if (*(int *)(*(int *)&this_01->field_0x1aec + 8) < 1) {
        pbVar26 = (byte *)0x0;
      }
      else {
        pbVar26 = (byte *)**(undefined4 **)(*(int *)&this_01->field_0x1aec + 0x14);
      }
      do {
        bVar24 = (byte)*puVar16;
        bVar32 = bVar24 < *pbVar26;
        if (bVar24 != *pbVar26) {
LAB_005a4eca:
          iVar13 = (1 - (uint)bVar32) - (uint)(bVar32 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar24 == 0) break;
        bVar24 = *(byte *)((int)puVar16 + 1);
        bVar32 = bVar24 < pbVar26[1];
        if (bVar24 != pbVar26[1]) goto LAB_005a4eca;
        puVar16 = (uint *)((int)puVar16 + 2);
        pbVar26 = pbVar26 + 2;
      } while (bVar24 != 0);
      iVar13 = 0;
LAB_005a4ecf:
      if (iVar13 != 0) {
        local_15 = '\0';
        DAT_00802a30[0xb].field_0x47 = 1;
        *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                   *(undefined4 *)&pCVar27[2].field_0x1);
        CursorClassTy::DrawSprite
                  (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1);
        pCVar27[2].field_0xa = 0;
        *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
        pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar23,0x258b,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
      }
    }
    puVar16 = local_8;
    if (local_15 == '\0') goto switchD_005a43f5_caseD_1;
    thunk_FUN_005daa60();
    FUN_006b61a0(local_22c,(byte *)(puVar16 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    iVar13 = Library::MSVCRT::__setjmp3(local_3b4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar16 = local_8;
    if (iVar13 == 0) {
      Library::DKW::DDX::FUN_006b6a50
                (&DAT_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)((_union_1226 *)(local_8 + 4))->S_un_b,local_22c);
    }
    pCVar27 = DAT_00802a30;
    g_currentExceptionFrame = local_3b4.previous;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar12 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
      uVar19 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
      DAT_00802a30[0xb].field_0x47 = 1;
      *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType(pCVar27,CASE_0,uVar19,uVar12);
      CursorClassTy::DrawSprite
                (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1);
      pCVar27[2].field_0xa = 0;
      *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
    }
    this_01 = local_20;
    if (DAT_00811764 == 0) {
      pMVar23 = *(MMsgTy **)(*(int *)&local_20->field_0x1a5b + 0x2e6);
      if (pMVar23 != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(pMVar23,0x2595,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0
                           ,0,0);
      }
      goto switchD_005a43f5_caseD_1;
    }
    CFsgsConnection::JoinGame((CFsgsConnection *)&DAT_00802a90,puVar16[1]);
    this_01 = local_20;
    DAT_0080877f = *(undefined4 *)(DAT_00811764 + 0x38);
    DAT_0080877e = 0;
    DAT_008087be = 0;
    local_20->field_0x1a61 = 0;
    DAT_008067a0 = 1;
    uVar25 = *(uint *)&local_20->field_0x1ec2;
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
    (**(code **)(*(int *)this_01 + 8))();
    pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
    if (pMVar23 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar23,1,0,1);
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar25 < 0x6152) {
    if (uVar25 != 0x6151) {
      if (uVar25 < 0x6106) {
        if (uVar25 == 0x6105) {
          *(undefined4 *)&this_01->field_0x45 = 0x200;
          *(undefined4 *)&this_01->field_0x49 = 0;
          *(int *)&this_01->field_0x4d = param_1[4];
          *(int *)&this_01->field_0x51 = param_1[5];
          *(int *)&this_01->field_0x55 = param_1[6];
          thunk_FUN_005b66e0(this_01);
        }
        else {
          switch(uVar25) {
          case 0:
            NoneFSGS(this_01,(int)unaff_EDI);
            break;
          case 2:
            InitFSGS(this_01,*(byte *)(param_1[5] + 0x14));
            break;
          case 3:
            DoneFSGS(this_01);
            break;
          case 5:
            PaintFSGS(this_01,'\0');
          }
        }
      }
      else {
        switch(uVar25) {
        case 0x6109:
        case 0x611f:
          StartSystemTy::InitChat(*(StartSystemTy **)&this_01->field_0x1a5b);
          *(undefined4 *)&this_01->field_0x45 = 0x200;
          *(undefined4 *)&this_01->field_0x49 = 0;
          *(int *)&this_01->field_0x4d = param_1[4];
          *(int *)&this_01->field_0x51 = param_1[5];
          *(int *)&this_01->field_0x55 = param_1[6];
          thunk_FUN_005b66e0(this_01);
          break;
        case 0x614f:
          if (DAT_00802a30 != (CursorClassTy *)0x0) {
            DAT_00802a30[0xb].field_0x47 = 1;
            *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
            CursorClassTy::SetGCType
                      (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                       *(undefined4 *)&pCVar27[2].field_0x1);
            CursorClassTy::DrawSprite
                      (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),
                       *(int *)&pCVar27[2].field_0x1);
            pCVar27[2].field_0xa = 0;
            *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
          }
          iVar13 = *(int *)&this_01->field_0x1a5b;
          puVar15 = local_19c;
          for (iVar34 = 8; iVar34 != 0; iVar34 = iVar34 + -1) {
            *puVar15 = 0;
            puVar15 = puVar15 + 1;
          }
          local_19c[2] = *(undefined4 *)&this_01->field_0x8;
          local_19c[3] = 2;
          local_19c[4] = 0x6941;
          pMVar23 = *(MMsgTy **)(iVar13 + 0x2e6);
          if (pMVar23 == (MMsgTy *)0x0) {
            (*(code *)**(undefined4 **)this_01)(local_19c);
          }
          else {
            MMsgTy::SetMessage(pMVar23,0x2593,'\0',local_19c,(undefined4 *)0x0,(undefined4 *)0x0,
                               param_1[5],0x2599);
          }
          break;
        case 0x6150:
          if (this_01->field_1A5F == '\x01') {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              DAT_00802a30[0xb].field_0x47 = 1;
              *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
              CursorClassTy::SetGCType
                        (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                         *(undefined4 *)&pCVar27[2].field_0x1);
              CursorClassTy::DrawSprite
                        (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),
                         *(int *)&pCVar27[2].field_0x1);
              pCVar27[2].field_0xa = 0;
              *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
            }
            iVar13 = param_1[5];
            puVar15 = local_160;
            for (iVar34 = 8; iVar34 != 0; iVar34 = iVar34 + -1) {
              *puVar15 = 0;
              puVar15 = puVar15 + 1;
            }
            local_160[2] = *(undefined4 *)&this_01->field_0x8;
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
               (pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6),
               pMVar23 == (MMsgTy *)0x0)) {
              (*(code *)**(undefined4 **)this_01)(local_160);
            }
            else if (UVar14 == 0x2584) {
              MMsgTy::SetMessage(pMVar23,0x2584,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,
                                 iVar13,0x2599);
            }
            else {
              MMsgTy::SetMessage(pMVar23,UVar14,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,0
                                 ,0);
            }
          }
        }
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (this_01->field_1A5F != '\x01') goto switchD_005a43f5_caseD_1;
    CFsgsConnection::StartBanners((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      iVar13 = this_01->field_1AC0;
      uVar25 = *(uint *)(iVar13 + 0x14);
      if (uVar25 == 0) {
        uVar25 = ((uint)*(ushort *)(iVar13 + 0xe) * *(int *)(iVar13 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar13 + 8);
      }
      puVar15 = (undefined4 *)FUN_006b4fa0(iVar13);
      for (uVar22 = uVar25 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *puVar15 = 0xffffffff;
        puVar15 = puVar15 + 1;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *(undefined1 *)puVar15 = 0xff;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x1a73,this_01->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar37 = -1;
      iVar36 = -1;
      uVar12 = 2;
      iVar34 = -1;
      iVar13 = -1;
      puVar16 = (uint *)FUN_006b0140(0x25b6,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)&this_01->field_0x1a73,puVar16,iVar13,iVar34,uVar12,iVar36,iVar37)
      ;
      FUN_006b35d0(DAT_008075a8,this_01->field_1ABC);
      CFsgsConnection::RequestDatafile((CFsgsConnection *)&DAT_00802a90,s_st_inf_007cc66c);
      goto switchD_005a43f5_caseD_1;
    }
    goto LAB_005a6d57;
  }
  if (0x6333 < uVar25) {
    if (uVar25 == 0x6334) {
      MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)&this_01->field_0x1bb9,(int)param_1,0);
    }
    else if (uVar25 == 0x6335) {
      *(uint *)&this_01->field_0x1c6a =
           *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
      if (*(uint *)&this_01->field_0x1c4e != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)&this_01->field_0x1c92,*(uint *)&this_01->field_0x1c4e,
                   *(uint *)&this_01->field_0x1c52,*(uint *)&this_01->field_0x1c66,
                   *(uint *)&this_01->field_0x1c6a);
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar25 == 0x6333) {
    MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)&this_01->field_0x1b28,(int)param_1,0);
    goto switchD_005a43f5_caseD_1;
  }
  switch(uVar25) {
  case 0x6152:
    if (this_01->field_1A5F != '\x02') goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0xb].field_0x47 = 1;
      *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType
                (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                 *(undefined4 *)&pCVar27[2].field_0x1);
      CursorClassTy::DrawSprite
                (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1);
      pCVar27[2].field_0xa = 0;
      *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
    }
    iVar13 = *(int *)&this_01->field_0x1a5b;
    puVar15 = local_2c8;
    for (iVar34 = 6; iVar34 != 0; iVar34 = iVar34 + -1) {
      *puVar15 = 0x10001;
      puVar15 = puVar15 + 1;
    }
    *(undefined2 *)puVar15 = 1;
    pMVar23 = *(MMsgTy **)(iVar13 + 0x2e6);
    if (pMVar23 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(pMVar23,(int)local_2c8);
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
    if ((UVar14 == 0) ||
       (pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6), pMVar23 == (MMsgTy *)0x0))
    goto switchD_005a43f5_caseD_1;
    if (UVar14 == 0x2589) {
      MMsgTy::SetMessage(pMVar23,0x2589,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                         param_1[5],0x2599);
      goto switchD_005a43f5_caseD_1;
    }
    break;
  case 0x6153:
    if ((this_01->field_1A5F == '\x02') || (this_01->field_1A5F == '\x04')) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        DAT_00802a30[0xb].field_0x47 = 1;
        *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                   *(undefined4 *)&pCVar27[2].field_0x1);
        CursorClassTy::DrawSprite
                  (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1);
        pCVar27[2].field_0xa = 0;
        *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
      }
      local_100 = s_Profile_Age_007cc1a8;
      local_fc = s_Profile_Sex_007cc198;
      local_f8 = s_Profile_Location_007cc184;
      local_f4 = s_Profile_Description_007cc16c;
      if (this_01->field_1A5F == '\x02') {
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
      thunk_FUN_0055bf20(&DAT_00802a90,*(undefined4 *)&this_01->field_0x1a67);
      if (*(byte **)&this_01->field_0x1e9e != (byte *)0x0) {
        FUN_006b5570(*(byte **)&this_01->field_0x1e9e);
      }
      puVar16 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,100);
      *(uint **)&this_01->field_0x1e9e = puVar16;
      (**(code **)(*(int *)this_01 + 8))();
      this_01->field_0x1a61 = 6;
      if (*(int *)(*(int *)&this_01->field_0x1a5b + 0x2e6) != 0) {
        local_ac = 0;
        local_a8 = 0;
        local_b0 = 0x10101;
        local_a4 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)&this_01->field_0x1a5b + 0x2e6),&local_b0);
      }
    }
    goto switchD_005a43f5_caseD_1;
  case 0x6154:
    if (this_01->field_1A5F == '\x05') {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        DAT_00802a30[0xb].field_0x47 = 1;
        *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                   *(undefined4 *)&pCVar27[2].field_0x1);
        CursorClassTy::DrawSprite
                  (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1);
        pCVar27[2].field_0xa = 0;
        *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
      }
      uVar25 = param_1[5];
      if (uVar25 == 0) {
        *(undefined4 *)&this_01->field_0x2d = 0x6952;
        (*(code *)**(undefined4 **)this_01)(&this_01->field_0x1d);
      }
      else if ((uVar25 != 0) && (uVar25 < 3)) {
        puVar15 = local_300;
        for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar15 = 0x10001;
          puVar15 = puVar15 + 1;
        }
        iVar13 = *(int *)&this_01->field_0x1a5b;
        *(undefined2 *)puVar15 = 1;
        pMVar23 = *(MMsgTy **)(iVar13 + 0x2e6);
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(pMVar23,(int)local_300);
        }
        pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
        if (pMVar23 != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(pMVar23,(-(uint)(param_1[5] != 1) & 10) + 0x258e,'\0',(undefined4 *)0x0
                             ,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
      }
    }
    goto switchD_005a43f5_caseD_1;
  case 0x6155:
    if (this_01->field_1A5F != '\x04') goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0xb].field_0x47 = 1;
      *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType
                (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                 *(undefined4 *)&pCVar27[2].field_0x1);
      CursorClassTy::DrawSprite
                (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1);
      pCVar27[2].field_0xa = 0;
      *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
    }
    if (param_1[5] == 0) goto LAB_005a67e1;
    if (6 < (uint)param_1[5]) goto switchD_005a43f5_caseD_1;
    puVar15 = local_354;
    for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar15 = 0x10001;
      puVar15 = puVar15 + 1;
    }
    *(undefined2 *)puVar15 = 1;
    pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
    if (pMVar23 != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(pMVar23,(int)local_354);
    }
    pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
    if (pMVar23 == (MMsgTy *)0x0) goto switchD_005a43f5_caseD_1;
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
    if (this_01->field_1A5F != '\x06') goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0xb].field_0x47 = 1;
      *(undefined2 *)&pCVar27[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType
                (pCVar27,CASE_0,*(undefined4 *)((int)&pCVar27[1].field_0060 + 1),
                 *(undefined4 *)&pCVar27[2].field_0x1);
      CursorClassTy::DrawSprite
                (pCVar27,*(int *)((int)&pCVar27[1].field_0060 + 1),*(int *)&pCVar27[2].field_0x1);
      pCVar27[2].field_0xa = 0;
      *(undefined4 *)&pCVar27[0xc].field_0x2f = 0xffffffff;
    }
    UVar14 = 0;
    if (param_1[5] == 0xd) {
      UVar14 = 0x2590;
    }
    else if (param_1[5] == 0xf) {
      UVar14 = 0x2591;
    }
    if ((UVar14 == 0) ||
       (pMVar23 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6), pMVar23 == (MMsgTy *)0x0))
    goto switchD_005a43f5_caseD_1;
    break;
  default:
    goto switchD_005a43f5_caseD_1;
  }
  MMsgTy::SetMessage(pMVar23,UVar14,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
switchD_005a43f5_caseD_1:
  g_currentExceptionFrame = local_21c.previous;
  uVar12 = MMObjTy::GetMessage((MMObjTy *)this_01,(int)param_1);
  return uVar12;
}



/* WARNING: Removing unreachable block (ram,0x005a58e7) */
/* WARNING: Removing unreachable block (ram,0x005a5b40) */
/* WARNING: Removing unreachable block (ram,0x005a5f43) */
/* WARNING: Removing unreachable block (ram,0x005a5d46) */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::GetMessage */

undefined4 __thiscall FSGSTy::GetMessage(FSGSTy *this,int *param_1)

{
  char cVar1;
  FSGSTy FVar2;
  ushort uVar3;
  int iVar4;
  ccFntTy *this_00;
  int *piVar5;
  code *pcVar6;
  FSGSTy *pFVar7;
  undefined4 uVar8;
  int iVar9;
  UINT UVar10;
  undefined4 *puVar11;
  uint *puVar12;
  char *pcVar13;
  DWORD DVar14;
  undefined4 uVar15;
  ulong uVar16;
  HINSTANCE pHVar17;
  undefined3 extraout_var;
  uint uVar18;
  MMsgTy *pMVar19;
  byte bVar20;
  undefined4 unaff_ESI;
  uint uVar21;
  byte *pbVar22;
  CursorClassTy *pCVar23;
  FSGSTy *pFVar24;
  byte *pbVar25;
  void *unaff_EDI;
  char *pcVar26;
  uint *puVar27;
  FSGSTy *pFVar28;
  char *pcVar29;
  bool bVar30;
  BITMAPINFO *pBVar31;
  int iVar32;
  DWORD DVar33;
  int iVar34;
  int iVar35;
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
  uVar8 = FUN_006e51b0(*(int *)(this + 0x10));
  pcVar26 = (char *)0x0;
  *(undefined4 *)(this + 0x61) = uVar8;
  local_21c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_21c;
  iVar9 = Library::MSVCRT::__setjmp3(local_21c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pFVar7 = local_20;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_21c.previous;
    iVar32 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048,0,iVar9,
                                &DAT_007a4ccc,s_FSGSTy__GetMessage_007cc5d8);
    if (iVar32 != 0) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return uVar8;
    }
    RaiseInternalException(iVar9,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_20,(int)param_1);
  pCVar23 = DAT_00802a30;
  uVar21 = param_1[4];
  if (0x6949 < uVar21) {
    if (uVar21 < 0x6980) {
      if (uVar21 == 0x697f) {
        iVar9 = param_1[7];
        local_60 = *(int *)(iVar9 + 0x24) + -0xb4;
        local_58 = *(int *)(iVar9 + 0x2c);
        local_54 = *(int *)(iVar9 + 0x30);
        iVar32 = *(int *)(iVar9 + 0x28) -
                 ((-(uint)(pFVar7[0x1abb] != (FSGSTy)0x0) & 0xffffffb4) + 0xaa);
        local_5c = iVar32;
        FUN_006b4170(*(int *)(pFVar7 + 0x1ac0),0,*(int *)(iVar9 + 0x24) + -0xb5,iVar32,local_58 + 2,
                     local_54,0xff);
        ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1ac0),0,local_60,iVar32,
                         local_58,local_54);
        if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
          ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),*(uint **)param_1[5],0,-1,0);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar9 = (uint)*(ushort *)(param_1 + 6) + local_60;
          FUN_006b5b10(*(int *)(pFVar7 + 0x1ac0),0,iVar9,iVar32 + 1,iVar9,local_54 + -2 + iVar32,9,
                       0xd);
        }
        FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar7 + 0x1abc));
        goto switchD_005a43f5_caseD_1;
      }
      switch(uVar21) {
      case 0x694a:
      case 0x694e:
        (**(code **)(*(int *)pFVar7 + 8))();
        pFVar7[0x1a61] = (FSGSTy)((param_1[4] != 0x694a) + '\a');
        iVar9 = *(int *)(pFVar7 + 0x1a5b);
        if (*(int *)(iVar9 + 0x2e6) == 0) break;
        puVar11 = local_31c;
        for (iVar32 = 6; iVar32 != 0; iVar32 = iVar32 + -1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        *(undefined2 *)puVar11 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        MMsgTy::StatePanel(*(MMsgTy **)(iVar9 + 0x2e6),(int)local_31c);
        puVar11 = &local_a0;
        goto LAB_005a7f3b;
      case 0x694b:
        if (pFVar7[0x1a5f] == (FSGSTy)0x2) {
          (**(code **)(*(int *)pFVar7 + 8))();
          pFVar7[0x1a61] = (FSGSTy)0x5;
          if (*(int *)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != 0) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_90 = 0x10101;
            thunk_FUN_005b8f40(*(void **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),&local_90);
          }
        }
        else if (pFVar7[0x1a5f] == (FSGSTy)0x5) {
          if (0 < *(int *)(*(int *)(pFVar7 + 0x1af4) + 8)) {
            pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1af4) + 0x14);
          }
          iVar9 = -1;
          do {
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar26 + 1;
          } while (cVar1 != '\0');
          if (iVar9 == -2) {
            if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
              MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),0x2592,'\0',
                                 (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          else {
            puVar11 = local_1d8;
            for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar11 = 0xffffffff;
              puVar11 = puVar11 + 1;
            }
            *(undefined2 *)puVar11 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
              MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),(int)local_1d8);
            }
            pCVar23 = DAT_00802a30;
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
              uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
              DAT_00802a30[0x493] = (CursorClassTy)0x5;
              *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
              CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
              CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
              pCVar23[0xd2] = (CursorClassTy)0x0;
              *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
            }
            if (*(int *)(*(int *)(pFVar7 + 0x1af4) + 8) < 1) {
              pcVar26 = (char *)0x0;
            }
            else {
              pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1af4) + 0x14);
            }
            if (*(int *)(*(int *)(pFVar7 + 0x1aec) + 8) < 1) {
              pcVar13 = (char *)0x0;
            }
            else {
              pcVar13 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1aec) + 0x14);
            }
            if (*(int *)(*(int *)(pFVar7 + 0x1ae8) + 8) < 1) {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,(char *)0x0,pcVar13,pcVar26);
            }
            else {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,
                         (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1ae8) + 0x14),pcVar13,pcVar26
                        );
            }
          }
        }
        break;
      case 0x694c:
        if ((*(LPCSTR *)(pFVar7 + 0x1aab) != (LPCSTR)0x0) &&
           (pHVar17 = ShellExecuteA(DAT_00856d78,&DAT_007cc624,*(LPCSTR *)(pFVar7 + 0x1aab),
                                    (LPCSTR)0x0,(LPCSTR)0x0,1), 0x20 < (int)pHVar17)) {
          CFsgsConnection::BannerClick((CFsgsConnection *)&DAT_00802a90,*(ulong *)(pFVar7 + 0x1aaf))
          ;
        }
        break;
      case 0x6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(pFVar7[0x1a5f]) {
        case (FSGSTy)0x6:
          local_30 = 0x10000;
        case (FSGSTy)0x3:
          local_30 = CONCAT31(local_30._1_3_,1);
        case (FSGSTy)0x5:
          local_30._0_2_ = CONCAT11(1,(undefined1)local_30);
        case (FSGSTy)0x4:
          local_2c = 0x10100;
          pFVar7[0x1a61] = (FSGSTy)0x2;
          break;
        case (FSGSTy)0x7:
        case (FSGSTy)0x8:
          local_30 = 0x100;
        case (FSGSTy)0x9:
          pFVar7[0x1a61] = (FSGSTy)0x6;
          break;
        case (FSGSTy)0xa:
          pbVar22 = *(byte **)(pFVar7 + 0x1b0c);
          if (pbVar22 != (byte *)0x0) {
            pbVar25 = &DAT_00807e1d;
            do {
              bVar20 = *pbVar22;
              bVar30 = bVar20 < *pbVar25;
              if (bVar20 != *pbVar25) {
LAB_005a63e7:
                iVar9 = (1 - (uint)bVar30) - (uint)(bVar30 != 0);
                goto LAB_005a63ec;
              }
              if (bVar20 == 0) break;
              bVar20 = pbVar22[1];
              bVar30 = bVar20 < pbVar25[1];
              if (bVar20 != pbVar25[1]) goto LAB_005a63e7;
              pbVar22 = pbVar22 + 2;
              pbVar25 = pbVar25 + 2;
            } while (bVar20 != 0);
            iVar9 = 0;
LAB_005a63ec:
            if (iVar9 == 0) {
              if (*(int *)(*(int *)(pFVar7 + 0x1b00) + 8) < 1) {
                pcVar26 = (char *)0x0;
              }
              else {
                pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1b00) + 0x14);
              }
              if (*(int *)(*(int *)(pFVar7 + 0x1afc) + 8) < 1) {
                pcVar13 = (char *)0x0;
              }
              else {
                pcVar13 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1afc) + 0x14);
              }
              if (*(int *)(*(int *)(pFVar7 + 0x1af8) + 8) < 1) {
                pbVar22 = (byte *)0x0;
              }
              else {
                pbVar22 = (byte *)**(undefined4 **)(*(int *)(pFVar7 + 0x1af8) + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar22,pcVar13,pcVar26,*(int *)(pFVar7 + 0x1b04));
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
          pFVar7[0x1a61] = pFVar7[0x1ed2];
        }
        (**(code **)(*(int *)pFVar7 + 8))();
        iVar9 = *(int *)(pFVar7 + 0x1a5b);
        if (*(int *)(iVar9 + 0x2e6) != 0) {
          puVar11 = local_2e4;
          for (iVar32 = 6; iVar32 != 0; iVar32 = iVar32 + -1) {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = 0xffff;
          MMsgTy::StatePanel(*(MMsgTy **)(iVar9 + 0x2e6),(int)local_2e4);
          thunk_FUN_005b8f40(*(void **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),&local_30);
        }
        break;
      case 0x6953:
        puVar11 = local_17c;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        *(undefined2 *)puVar11 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if (*(int *)(*(int *)(pFVar7 + 0x1ae8) + 8) < 1) {
          pcVar26 = (char *)0x0;
        }
        else {
          pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1ae8) + 0x14);
        }
        Library::MSVCRT::_strncpy(&DAT_00807e1d,pcVar26,0x40);
        DAT_00807e5c = 0;
        if (*(int *)(*(int *)(pFVar7 + 0x1aec) + 8) < 1) {
          pcVar26 = (char *)0x0;
        }
        else {
          pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1aec) + 0x14);
        }
        uVar21 = 0xffffffff;
        do {
          pcVar13 = pcVar26;
          if (uVar21 == 0) break;
          uVar21 = uVar21 - 1;
          pcVar13 = pcVar26 + 1;
          cVar1 = *pcVar26;
          pcVar26 = pcVar13;
        } while (cVar1 != '\0');
        uVar21 = ~uVar21;
        pcVar26 = pcVar13 + -uVar21;
        pcVar13 = (char *)&DAT_00807e5d;
        for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar26;
          pcVar26 = pcVar26 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
          *pcVar13 = *pcVar26;
          pcVar26 = pcVar26 + 1;
          pcVar13 = pcVar13 + 1;
        }
        iVar9 = -1;
        pcVar26 = (char *)&DAT_00807e5d;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar1 = *pcVar26;
          pcVar26 = pcVar26 + 1;
        } while (cVar1 != '\0');
        if (iVar9 == -2) {
          if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
            MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),0x2592,'\0',
                               (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
          }
          break;
        }
        if (pFVar7[0x1a5f] != (FSGSTy)0x2) {
          if (pFVar7[0x1a5f] == (FSGSTy)0x4) {
            if (*(int *)(*(int *)(pFVar7 + 0x1af0) + 8) < 1) {
              pbVar22 = (byte *)0x0;
            }
            else {
              pbVar22 = (byte *)**(undefined4 **)(*(int *)(pFVar7 + 0x1af0) + 0x14);
            }
            pbVar25 = (byte *)&DAT_00807e5d;
            do {
              bVar20 = *pbVar25;
              bVar30 = bVar20 < *pbVar22;
              if (bVar20 != *pbVar22) {
LAB_005a6653:
                iVar9 = (1 - (uint)bVar30) - (uint)(bVar30 != 0);
                goto LAB_005a6658;
              }
              if (bVar20 == 0) break;
              bVar20 = pbVar25[1];
              bVar30 = bVar20 < pbVar22[1];
              if (bVar20 != pbVar22[1]) goto LAB_005a6653;
              pbVar25 = pbVar25 + 2;
              pbVar22 = pbVar22 + 2;
            } while (bVar20 != 0);
            iVar9 = 0;
LAB_005a6658:
            if (iVar9 == 0) {
              if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
                MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),(int)local_17c);
              }
              pCVar23 = DAT_00802a30;
              if (DAT_00802a30 != (CursorClassTy *)0x0) {
                uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
                uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
                DAT_00802a30[0x493] = (CursorClassTy)0x5;
                *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
                CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
                CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9))
                ;
                pCVar23[0xd2] = (CursorClassTy)0x0;
                *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
              }
              if (*(int *)(*(int *)(pFVar7 + 0x1b00) + 8) < 1) {
                pcVar26 = (char *)0x0;
              }
              else {
                pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1b00) + 0x14);
              }
              if (*(int *)(*(int *)(pFVar7 + 0x1afc) + 8) < 1) {
                pcVar13 = (char *)0x0;
              }
              else {
                pcVar13 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1afc) + 0x14);
              }
              if (*(int *)(*(int *)(pFVar7 + 0x1af8) + 8) < 1) {
                pbVar22 = (byte *)0x0;
              }
              else {
                pbVar22 = (byte *)**(undefined4 **)(*(int *)(pFVar7 + 0x1af8) + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar22,pcVar13,pcVar26,*(int *)(pFVar7 + 0x1b04));
              CFsgsConnection::CreateNewAccount
                        ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
            }
            else if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
              MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),0x258a,'\0',
                                 (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          break;
        }
        if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),(int)local_17c);
        }
        pCVar23 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
          uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
          DAT_00802a30[0x493] = (CursorClassTy)0x5;
          *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
          CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
          CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
          pCVar23[0xd2] = (CursorClassTy)0x0;
          *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
        }
LAB_005a67e1:
        uVar16 = CFsgsConnection::Login
                           ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
        if (uVar16 == 0) {
          DVar14 = GetLastError();
          thunk_FUN_0055beb0(&DAT_00802a90,DVar14);
        }
        DAT_00802a9a = 0;
        break;
      case 0x6954:
        (**(code **)(*(int *)pFVar7 + 8))();
        pFVar7[0x1a61] = (FSGSTy)0x4;
        if (*(int *)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != 0) {
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_c0 = 0x10101;
          thunk_FUN_005b8f40(*(void **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),&local_c0);
        }
        break;
      case 0x6955:
        iVar9 = *(int *)(pFVar7 + 0x1ab7);
        iVar34 = 0;
        iVar32 = 0;
        if (iVar9 != 0) {
          if (param_1[5] == 0) {
            switch(pFVar7[0x1a5f]) {
            case (FSGSTy)0x2:
            case (FSGSTy)0x6:
            case (FSGSTy)0x7:
              goto switchD_005a6a92_caseD_2;
            case (FSGSTy)0x4:
              iVar32 = *(int *)(pFVar7 + 0x1ac4);
              if (iVar9 == iVar32) {
                iVar34 = iVar32;
                iVar32 = *(int *)(pFVar7 + 0x1ac8);
              }
              else if (iVar9 == *(int *)(pFVar7 + 0x1ac8)) {
                iVar34 = *(int *)(pFVar7 + 0x1ac8);
                iVar32 = *(int *)(pFVar7 + 0x1acc);
              }
              else if (iVar9 == *(int *)(pFVar7 + 0x1acc)) {
                iVar34 = *(int *)(pFVar7 + 0x1acc);
                iVar32 = *(int *)(pFVar7 + 0x1ad8);
              }
              else if (iVar9 == *(int *)(pFVar7 + 0x1ad8)) {
                iVar34 = *(int *)(pFVar7 + 0x1ad8);
                iVar32 = *(int *)(pFVar7 + 0x1adc);
              }
              else if (iVar9 == *(int *)(pFVar7 + 0x1adc)) {
                iVar34 = *(int *)(pFVar7 + 0x1adc);
                iVar32 = *(int *)(pFVar7 + 0x1ae0);
              }
              else {
                if (iVar9 != *(int *)(pFVar7 + 0x1ae0)) goto LAB_005a6cc4;
                iVar34 = *(int *)(pFVar7 + 0x1ae0);
                iVar32 = *(int *)(pFVar7 + 0x1ae4);
              }
              break;
            case (FSGSTy)0x5:
              iVar32 = *(int *)(pFVar7 + 0x1ac4);
              if (iVar9 == iVar32) {
                iVar34 = iVar32;
                iVar32 = *(int *)(pFVar7 + 0x1ac8);
              }
              else if (iVar9 == *(int *)(pFVar7 + 0x1ac8)) {
                iVar34 = *(int *)(pFVar7 + 0x1ac8);
                iVar32 = *(int *)(pFVar7 + 0x1ad4);
              }
              else if (iVar9 == *(int *)(pFVar7 + 0x1ad4)) {
                iVar34 = *(int *)(pFVar7 + 0x1ad4);
                iVar32 = *(int *)(pFVar7 + 0x1acc);
              }
              else {
                iVar34 = *(int *)(pFVar7 + 0x1acc);
              }
              break;
            case (FSGSTy)0xa:
              iVar32 = *(int *)(pFVar7 + 0x1ad8);
              if (iVar9 == iVar32) {
                iVar34 = iVar32;
                iVar32 = *(int *)(pFVar7 + 0x1adc);
              }
              else if (iVar9 == *(int *)(pFVar7 + 0x1adc)) {
                iVar34 = *(int *)(pFVar7 + 0x1adc);
                iVar32 = *(int *)(pFVar7 + 0x1ae0);
              }
              else if (iVar9 == *(int *)(pFVar7 + 0x1ae0)) {
                iVar34 = *(int *)(pFVar7 + 0x1ae0);
                iVar32 = *(int *)(pFVar7 + 0x1ae4);
              }
              else {
LAB_005a6cc4:
                iVar34 = *(int *)(pFVar7 + 0x1ae4);
              }
            }
          }
          else {
            switch(pFVar7[0x1a5f]) {
            case (FSGSTy)0x2:
            case (FSGSTy)0x6:
            case (FSGSTy)0x7:
switchD_005a6a92_caseD_2:
              iVar32 = *(int *)(pFVar7 + 0x1ac4);
              if (iVar9 == iVar32) {
                iVar34 = iVar32;
                iVar32 = *(int *)(pFVar7 + 0x1ac8);
              }
              else {
                iVar34 = *(int *)(pFVar7 + 0x1ac8);
              }
              break;
            case (FSGSTy)0x4:
              iVar32 = *(int *)(pFVar7 + 0x1ac4);
              if (iVar9 == iVar32) {
                iVar34 = iVar32;
                iVar32 = *(int *)(pFVar7 + 0x1ae4);
              }
              else {
                iVar35 = *(int *)(pFVar7 + 0x1ac8);
                iVar34 = iVar35;
                if (((iVar9 != iVar35) &&
                    (iVar4 = *(int *)(pFVar7 + 0x1acc), iVar34 = iVar4, iVar32 = iVar35,
                    iVar9 != iVar4)) &&
                   (iVar35 = *(int *)(pFVar7 + 0x1ad8), iVar34 = iVar35, iVar32 = iVar4,
                   iVar9 != iVar35)) {
                  iVar4 = *(int *)(pFVar7 + 0x1adc);
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case (FSGSTy)0x5:
              iVar32 = *(int *)(pFVar7 + 0x1ac4);
              if (iVar9 == iVar32) {
                iVar34 = iVar32;
                iVar32 = *(int *)(pFVar7 + 0x1acc);
              }
              else {
                iVar35 = *(int *)(pFVar7 + 0x1ac8);
                iVar34 = iVar35;
                if ((iVar9 != iVar35) &&
                   (iVar4 = *(int *)(pFVar7 + 0x1ad4), iVar34 = iVar4, iVar32 = iVar35,
                   iVar9 != iVar4)) {
                  iVar34 = *(int *)(pFVar7 + 0x1acc);
                  iVar32 = iVar4;
                }
              }
              break;
            case (FSGSTy)0xa:
              iVar35 = *(int *)(pFVar7 + 0x1ad8);
              if (iVar9 == iVar35) {
                iVar34 = iVar35;
                iVar32 = *(int *)(pFVar7 + 0x1ae4);
              }
              else {
                iVar4 = *(int *)(pFVar7 + 0x1adc);
joined_r0x005a6ba3:
                iVar34 = iVar4;
                iVar32 = iVar35;
                if ((iVar9 != iVar4) &&
                   (iVar35 = *(int *)(pFVar7 + 0x1ae0), iVar34 = iVar35, iVar32 = iVar4,
                   iVar9 != iVar35)) {
                  iVar34 = *(int *)(pFVar7 + 0x1ae4);
                  iVar32 = iVar35;
                }
              }
            }
          }
        }
        *(undefined4 *)(pFVar7 + 0x2d) = 0x20;
        if (iVar34 != 0) {
          *(undefined4 *)(pFVar7 + 0x31) = 0;
          FUN_006e6080(pFVar7,2,iVar34,(undefined4 *)(pFVar7 + 0x1d));
        }
        if (iVar32 != 0) {
          *(undefined4 *)(pFVar7 + 0x31) = 1;
          FUN_006e6080(pFVar7,2,iVar32,(undefined4 *)(pFVar7 + 0x1d));
        }
        break;
      case 0x6956:
        pFVar7[0x1ed2] = (FSGSTy)0x1;
LAB_005a6d57:
        DoLogon(pFVar7);
        break;
      case 0x6957:
        iVar9 = *(int *)(pFVar7 + 0x1ac0);
        uVar21 = *(uint *)(iVar9 + 0x14);
        if (uVar21 == 0) {
          uVar21 = ((uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar9 + 8);
        }
        puVar11 = (undefined4 *)FUN_006b4fa0(iVar9);
        for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
          *(undefined1 *)puVar11 = 0xff;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1ac0),0,0,0x16,0x1b8,
                         0xf0);
        iVar35 = -1;
        iVar34 = -1;
        uVar8 = 2;
        iVar32 = -1;
        iVar9 = -2;
        puVar12 = (uint *)FUN_006b0140(0x25be,DAT_00807618);
        ccFntTy::WrTxt(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar9,iVar32,uVar8,iVar34,iVar35);
        FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar7 + 0x1abc));
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        wsprintfA(local_4b8,s_subtitans__s_007cc614,&DAT_0080f126);
        CFsgsConnection::DownloadFile
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar23 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          DAT_00802a30[0x493] = (CursorClassTy)0x5;
          *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
          CursorClassTy::SetGCType
                    (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
          CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
          pCVar23[0xd2] = (CursorClassTy)0x0;
          *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
        }
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (0x8160 < uVar21) {
      if (uVar21 < 0xc0a2) {
        if (uVar21 == 0xc0a1) {
          if ((*(int *)(pFVar7 + 0x1a6b) != 0) && (*(int *)(pFVar7 + 0x1b10) != 0)) {
            *(undefined4 *)(pFVar7 + 0x2d) = 0x20;
            *(undefined4 *)(pFVar7 + 0x31) = 1;
            FUN_006e6080(pFVar7,2,*(int *)(pFVar7 + 0x1b10),(undefined4 *)(pFVar7 + 0x1d));
          }
          goto switchD_005a43f5_caseD_1;
        }
        switch(uVar21) {
        case 0x8161:
          if ((*(int *)(pFVar7 + 0x1e8e) == 0) || (*(int *)(pFVar7 + 0x1e9a) == 0)) break;
          pbVar22 = (byte *)param_1[7];
          local_1c = pbVar22;
          FUN_006b5f80(DAT_008075a8,*(int *)(pbVar22 + 0x24),
                       (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar22 + 0x28),
                       *(int *)(pbVar22 + 0x2c),0x11);
          if (pFVar7[0x1a5f] == (FSGSTy)0x6) {
            iVar9 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar22 + 0x28);
            thunk_FUN_00540620(*(int *)(pbVar22 + 0x24),iVar9,*(int *)(pbVar22 + 0x24) + -0x1e9,
                               iVar9 + -0x5e,*(uint *)(pbVar22 + 0x2c),(byte *)0x11,'\x01',
                               *(BITMAPINFO **)(pFVar7 + 0x1e9a));
            FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,*(int *)(pbVar22 + 0x2c),0x11,0xff);
            if (pFVar7[0x1a60] == (FSGSTy)0x0) {
              iVar9 = *(int *)(pFVar7 + 0x1ea6);
              if (iVar9 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar9 + 0xc)) {
                  local_8 = (uint *)(*(int *)(iVar9 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar9 + 0x1c));
                }
                else {
                  local_8 = (uint *)0x0;
                }
                if (local_8 != (uint *)0x0) {
                  ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0x23,0
                                   ,*(int *)(pbVar22 + 0x2c) + -0x46,0x11);
                  if (*(char *)((int)local_8 + 0x2d) == '\0') {
                    local_c = (byte *)thunk_FUN_0055c050(&DAT_00802a90,(int)local_8);
                    thunk_FUN_00540760(*(undefined4 **)(pFVar7 + 0x1e8e),3,1,'\x01',local_c);
                    if (local_c != (byte *)0x0) {
                      FUN_006ab060(&local_c);
                    }
                    ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),local_8,0,-1,
                                   (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2)
                    ;
                    if ((*(byte *)((int)local_8 + 0x25) & 0x10) != 0) {
                      iVar9 = FUN_0070b3a0(*(int *)(pFVar7 + 0x1a8b),3);
                      FUN_006b5440(*(int *)(pFVar7 + 0x1e8e),0,*(int *)(pbVar22 + 0x2c) + -0x1d,
                                   (0x11 - *(int *)(iVar9 + 8)) / 2,iVar9,0,0xff);
                    }
                  }
                  else {
                    pbVar25 = (byte *)FUN_0070b3a0(*(int *)(pFVar7 + 0x1a87),1);
                    thunk_FUN_00540760(*(undefined4 **)(pFVar7 + 0x1e8e),3,
                                       (0x11 - *(int *)(pbVar25 + 8)) / 2,'\x06',pbVar25);
                    iVar9 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                    iVar34 = -1;
                    iVar32 = 0;
                    puVar12 = (uint *)FUN_006b0140(0x2567,DAT_00807618);
                    ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar32,iVar34,iVar9);
                  }
                }
              }
            }
            else {
              iVar9 = *(int *)(pFVar7 + 0x1eaa);
              if (iVar9 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar9 + 0xc)) {
                  local_c = (byte *)(*(int *)(iVar9 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar9 + 0x1c));
                }
                else {
                  local_c = (byte *)0x0;
                }
                if (local_c != (byte *)0x0) {
                  uVar21 = *(uint *)(local_c + 0x60);
                  if ((uVar21 & 0x40) == 0) {
                    if ((uVar21 & 0x18) == 0) {
                      local_10 = (uint *)(CONCAT31(local_10._1_3_,-((uVar21 & 2) != 0)) & 0xffffff05
                                         );
                    }
                    else {
                      local_10 = (uint *)CONCAT31(local_10._1_3_,3);
                    }
                  }
                  else {
                    local_10 = (uint *)CONCAT31(local_10._1_3_,4);
                  }
                  pbVar25 = (byte *)FUN_0070b3a0(*(int *)(pFVar7 + 0x1a87),(uint)local_10 & 0xff);
                  thunk_FUN_00540760(*(undefined4 **)(pFVar7 + 0x1e8e),3,
                                     (0x11 - *(int *)(pbVar25 + 8)) / 2,'\x06',pbVar25);
                  ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0x23,0
                                   ,*(int *)(pbVar22 + 0x2c) + -0x46,0x11);
                  iVar9 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                  wsprintfA((LPSTR)&DAT_0080f33a,s___d_s___0_d__d__007cc5f8,iVar9,local_c,
                            *(undefined4 *)(local_c + 100),iVar9);
                  ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar9 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar22 + 0x28);
            thunk_FUN_00540620(*(int *)(pbVar22 + 0x24),iVar9,*(int *)(pbVar22 + 0x24) + -0x13,
                               iVar9 + -0x5e,*(uint *)(pbVar22 + 0x2c),(byte *)0x11,'\x01',
                               *(BITMAPINFO **)(pFVar7 + 0x1e9a));
            FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,*(int *)(pbVar22 + 0x2c),0x11,0xff);
            iVar9 = *(int *)(pFVar7 + 0x1ebe);
            if (iVar9 != 0) {
              if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar9 + 0xc)) {
                local_10 = (uint *)(*(int *)(iVar9 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                   *(int *)(iVar9 + 0x1c));
              }
              else {
                local_10 = (uint *)0x0;
              }
              if (local_10 != (uint *)0x0) {
                iVar9 = -1;
                puVar12 = local_10 + 0x13;
                do {
                  if (iVar9 == 0) break;
                  iVar9 = iVar9 + -1;
                  uVar21 = *puVar12;
                  puVar12 = (uint *)((int)puVar12 + 1);
                } while ((char)uVar21 != '\0');
                pbVar22 = (byte *)FUN_0070b3a0(*(int *)(pFVar7 + 0x1a87),-(uint)(iVar9 != -2) & 4);
                thunk_FUN_00540760(*(undefined4 **)(pFVar7 + 0x1e8e),3,
                                   (0x11 - *(int *)(pbVar22 + 8)) / 2,'\x06',pbVar22);
                ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0x23,0,
                                 *(int *)(local_1c + 0x2c) + -0x40,0x11);
                ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),local_10 + 0xb,0,-1,
                               (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2);
                pbVar22 = local_1c;
              }
            }
          }
          DVar33 = *(DWORD *)(pbVar22 + 0x2c);
          pBVar31 = *(BITMAPINFO **)(pFVar7 + 0x1e8e);
          DVar14 = 0x11;
          iVar9 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar22 + 0x28);
          goto LAB_005a89f6;
        case 0x8162:
          if ((DAT_00802a30 != (CursorClassTy *)0x0) && (DAT_00802a30[0x493] == (CursorClassTy)0x5))
          break;
          if (pFVar7[0x1a60] != (FSGSTy)0x0) {
            iVar9 = *(int *)(pFVar7 + 0x1eaa);
            if (iVar9 != 0) {
              if ((uint)param_1[5] < *(uint *)(iVar9 + 0xc)) {
                pcVar26 = (char *)(*(int *)(iVar9 + 8) * param_1[5] + *(int *)(iVar9 + 0x1c));
              }
              else {
                pcVar26 = (char *)0x0;
              }
              if (pcVar26 != (char *)0x0) {
                if (DAT_00802a30 != (CursorClassTy *)0x0) {
                  uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
                  uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
                  DAT_00802a30[0x493] = (CursorClassTy)0x5;
                  *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
                  CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
                  CursorClassTy::DrawSprite
                            (pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
                  pCVar23[0xd2] = (CursorClassTy)0x0;
                  *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
                }
                iVar9 = -1;
                pcVar13 = pcVar26 + 0x40;
                do {
                  if (iVar9 == 0) break;
                  iVar9 = iVar9 + -1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                } while (cVar1 != '\0');
                if (iVar9 == -2) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar26,pcVar26 + 0x40,1);
                }
                else if (*(int *)(*(int *)(pFVar7 + 0x1aec) + 8) < 1) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar26,(char *)0x0,1);
                }
                else {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar26,
                                     (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1aec) + 0x14),1);
                }
              }
            }
            break;
          }
          uVar21 = param_1[5];
          if (uVar21 == 0) {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
              uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
              DAT_00802a30[0x493] = (CursorClassTy)0x5;
              *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
              CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
              CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
              pCVar23[0xd2] = (CursorClassTy)0x0;
              *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
            }
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            pFVar7[0x1a60] = (FSGSTy)0x1;
            *(undefined4 *)(pFVar7 + 0x2d) = 0x20;
            *(undefined4 *)(pFVar7 + 0x31) = 0;
            if (*(int *)(pFVar7 + 0x1b18) != 0) {
              FUN_006e6080(pFVar7,2,*(int *)(pFVar7 + 0x1b18),(undefined4 *)(pFVar7 + 0x1d));
            }
            *(undefined4 *)(pFVar7 + 0x31) = 1;
            if (*(int *)(pFVar7 + 0x1b24) != 0) {
              FUN_006e6080(pFVar7,2,*(int *)(pFVar7 + 0x1b24),(undefined4 *)(pFVar7 + 0x1d));
            }
            break;
          }
          iVar9 = *(int *)(pFVar7 + 0x1ea6);
          if (uVar21 < *(uint *)(iVar9 + 0xc)) {
            pcVar26 = (char *)(*(int *)(iVar9 + 8) * uVar21 + *(int *)(iVar9 + 0x1c));
          }
          else {
            pcVar26 = (char *)0x0;
          }
          if (pcVar26 == (char *)0x0) break;
          if (*(int *)(pFVar7 + 0x1b0c) != 0) {
            FUN_006ab060((undefined4 *)(pFVar7 + 0x1b0c));
          }
          uVar21 = 0xffffffff;
          pcVar13 = pcVar26;
          do {
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 != '\0');
          pcVar13 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar21);
          uVar21 = 0xffffffff;
          *(char **)(pFVar7 + 0x1b0c) = pcVar13;
          do {
            pcVar29 = pcVar26;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar29 = pcVar26 + 1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar29;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pcVar26 = pcVar29 + -uVar21;
          for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar26;
            pcVar26 = pcVar26 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pcVar13 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            pcVar13 = pcVar13 + 1;
          }
          (**(code **)(*(int *)pFVar7 + 8))();
          pFVar7[0x1a61] = (FSGSTy)0xa;
          pFVar7[0x1ed2] = (FSGSTy)0x6;
          iVar9 = *(int *)(pFVar7 + 0x1a5b);
          if (*(int *)(iVar9 + 0x2e6) == 0) break;
          puVar11 = local_370;
          for (iVar32 = 6; iVar32 != 0; iVar32 = iVar32 + -1) {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          MMsgTy::StatePanel(*(MMsgTy **)(iVar9 + 0x2e6),(int)local_370);
          puVar11 = &local_80;
          goto LAB_005a7f3b;
        case 0x8163:
          if (pFVar7[0x1a5f] == (FSGSTy)0x6) {
            if (pFVar7[0x1a60] == (FSGSTy)0x0) {
              local_1ac = 0x20;
              if (param_1[5] == 0) {
                local_1a8 = 0;
                if (*(int *)(pFVar7 + 0x1b18) != 0) {
                  FUN_006e6080(pFVar7,2,*(int *)(pFVar7 + 0x1b18),local_1bc);
                }
              }
              else {
                local_1a8 = 1;
                if (*(int *)(pFVar7 + 0x1b18) != 0) {
                  FUN_006e6080(pFVar7,2,*(int *)(pFVar7 + 0x1b18),local_1bc);
                }
              }
            }
          }
          else if (pFVar7[0x1a5f] == (FSGSTy)0x8) {
            iVar9 = *(int *)(pFVar7 + 0x1ebe);
            bVar30 = true;
            if (((iVar9 != 0) && ((uint)param_1[5] < *(uint *)(iVar9 + 0xc))) &&
               (iVar9 = *(int *)(iVar9 + 8) * param_1[5] + *(int *)(iVar9 + 0x1c), iVar9 != 0)) {
              bVar30 = false;
              Library::DKW::TBL::FUN_006b6020(*(int *)(pFVar7 + 0x1ae8),0,(char *)(iVar9 + 0x2c));
              *(undefined4 *)(pFVar7 + 0x2d) = 0x33;
              *(undefined4 *)(pFVar7 + 0x31) = *(undefined4 *)(pFVar7 + 0x1ae8);
              FUN_006e6080(pFVar7,2,*(undefined4 *)(pFVar7 + 0x1ac4),(undefined4 *)(pFVar7 + 0x1d));
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              thunk_FUN_00540620(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                                 *(BITMAPINFO **)(pFVar7 + 0x1e92));
              FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0,0x15e,
                               0x11);
              uVar8 = 2;
              iVar34 = -1;
              iVar32 = -1;
              puVar12 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar32,iVar34,uVar8);
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,10,0x11,
                               0x14a,0x11);
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),(uint *)(iVar9 + 0x1c),0,-1,0);
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0x22,
                               0x15e,0x11);
              uVar8 = 2;
              iVar34 = -1;
              iVar32 = -1;
              puVar12 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar32,iVar34,uVar8);
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,10,0x33,
                               0x14a,0x11);
              uVar8 = 0;
              iVar34 = -1;
              iVar32 = 0;
              if (*(char *)(iVar9 + 0x7c) == '\0') {
                puVar12 = (uint *)FUN_006b0140(0x2573,DAT_00807618);
              }
              else {
                puVar12 = (uint *)(iVar9 + 0x83);
              }
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar32,iVar34,uVar8);
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0x44,
                               0x15e,0x11);
              uVar8 = 2;
              iVar34 = -1;
              iVar32 = -1;
              puVar12 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar32,iVar34,uVar8);
              if (*(char *)(iVar9 + 0x7c) != '\0') {
                ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,10,0x55,
                                 0x14a,0x11);
                iVar32 = (int)*(char *)(iVar9 + 0x7e) << 1;
                wsprintfA((LPSTR)&DAT_0080f33a,s__dx_d_007cc60c,iVar32,iVar32);
                ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),&DAT_0080f33a,0,-1,0);
              }
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0x66,
                               0x15e,0x11);
              uVar8 = 2;
              iVar34 = -1;
              iVar32 = -1;
              puVar12 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar32,iVar34,uVar8);
              if (*(char *)(iVar9 + 0x7c) != '\0') {
                ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,10,0x77,
                                 0x14a,0x11);
                uVar8 = FUN_006b0140(0x2574,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(int)*(char *)(iVar9 + 0x7d),uVar8);
                ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),&DAT_0080f33a,0,-1,0);
              }
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,*(BITMAPINFO **)(pFVar7 + 0x1e8e),(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
            if (bVar30) {
              Library::DKW::TBL::FUN_006b6020(*(int *)(pFVar7 + 0x1ae8),0,&DAT_008016a0);
              *(undefined4 *)(pFVar7 + 0x2d) = 0x33;
              *(undefined4 *)(pFVar7 + 0x31) = *(undefined4 *)(pFVar7 + 0x1ae8);
              FUN_006e6080(pFVar7,2,*(undefined4 *)(pFVar7 + 0x1ac4),(undefined4 *)(pFVar7 + 0x1d));
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              thunk_FUN_00540620(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                                 *(BITMAPINFO **)(pFVar7 + 0x1e92));
              FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0,0x15e,
                               0x11);
              uVar8 = 2;
              iVar32 = -1;
              iVar9 = -1;
              puVar12 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar9,iVar32,uVar8);
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0x22,
                               0x15e,0x11);
              uVar8 = 2;
              iVar32 = -1;
              iVar9 = -1;
              puVar12 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar9,iVar32,uVar8);
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0x44,
                               0x15e,0x11);
              uVar8 = 2;
              iVar32 = -1;
              iVar9 = -1;
              puVar12 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar9,iVar32,uVar8);
              ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0x66,
                               0x15e,0x11);
              uVar8 = 2;
              iVar32 = -1;
              iVar9 = -1;
              puVar12 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar9,iVar32,uVar8);
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,*(BITMAPINFO **)(pFVar7 + 0x1e8e),(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case 0x8164:
          MMMObjTy::PaintSlBut((MMMObjTy *)pFVar7,(int)(pFVar7 + 0x1cdb),(int)param_1,0);
          break;
        case 0x8165:
          MMMObjTy::PaintSlBut((MMMObjTy *)pFVar7,(int)(pFVar7 + 0x1d6c),(int)param_1,0);
          break;
        case 0x8166:
          uVar21 = *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
          *(uint *)(pFVar7 + 0x1e1d) = uVar21;
          if (*(uint *)(pFVar7 + 0x1e01) != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      (*(uint **)(pFVar7 + 0x1e45),*(uint *)(pFVar7 + 0x1e01),
                       *(uint *)(pFVar7 + 0x1e05),*(uint *)(pFVar7 + 0x1e19),uVar21);
          }
        }
        goto switchD_005a43f5_caseD_1;
      }
      switch(uVar21) {
      case 0xc0a2:
        if (*(int *)(*(int *)(pFVar7 + 0x1ea2) + 8) < 1) {
          pcVar26 = (char *)0x0;
        }
        else {
          pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1ea2) + 0x14);
        }
        bVar30 = thunk_FUN_00571810(pcVar26);
        if (CONCAT31(extraout_var,bVar30) == 0) {
          if (*(int *)(*(int *)(pFVar7 + 0x1ea2) + 8) < 1) {
            pcVar26 = (char *)0x0;
          }
          else {
            pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1ea2) + 0x14);
          }
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,pcVar26);
        }
        else {
          iVar32 = 0;
          iVar9 = *(int *)(*(int *)(pFVar7 + 0x1a5b) + 0x696);
          if (0 < *(int *)(iVar9 + 8)) {
            if (*(int *)(iVar9 + 8) < 1) {
              pcVar26 = (char *)0x0;
              goto LAB_005a8b12;
            }
            do {
              pcVar26 = *(char **)(*(int *)(iVar9 + 0x14) + iVar32 * 4);
LAB_005a8b12:
              AddMessage(pFVar7,8,&DAT_008016a0,pcVar26,8);
              iVar32 = iVar32 + 1;
              iVar9 = *(int *)(*(int *)(pFVar7 + 0x1a5b) + 0x696);
            } while (iVar32 < *(int *)(iVar9 + 8));
          }
        }
        Library::DKW::TBL::FUN_006b6020(*(int *)(pFVar7 + 0x1ea2),0,&DAT_008016a0);
        *(undefined4 *)(pFVar7 + 0x2d) = 0x33;
        *(undefined4 *)(pFVar7 + 0x31) = *(undefined4 *)(pFVar7 + 0x1ea2);
        goto LAB_005a8c85;
      case 0xc0a3:
        iVar9 = *(int *)(pFVar7 + 0x1ae8);
        iVar32 = *(int *)(iVar9 + 8);
joined_r0x005a8b8f:
        if (0 < iVar32) {
          pcVar26 = (char *)**(undefined4 **)(iVar9 + 0x14);
        }
        iVar34 = -1;
        do {
          if (iVar34 == 0) break;
          iVar34 = iVar34 + -1;
          cVar1 = *pcVar26;
          pcVar26 = pcVar26 + 1;
        } while (cVar1 != '\0');
        if (iVar34 != -2) {
          if (*(int *)(*(int *)(pFVar7 + 0x1aec) + 8) < 1) {
            pcVar26 = (char *)0x0;
          }
          else {
            pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1aec) + 0x14);
          }
          if (iVar32 < 1) {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)0x0,pcVar26,1);
          }
          else {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)**(undefined4 **)(iVar9 + 0x14),pcVar26,1);
          }
        }
        break;
      case 0xc0a4:
        if (pFVar7[0x1a60] != (FSGSTy)0x0) break;
        *(undefined4 *)(pFVar7 + 0x2d) = 0x26;
        FUN_006e6080(pFVar7,2,*(undefined4 *)(pFVar7 + 0x1b20),(undefined4 *)(pFVar7 + 0x1d));
        uVar21 = *(uint *)(pFVar7 + 0x31);
        if (uVar21 == 0) break;
        iVar9 = *(int *)(pFVar7 + 0x1ea6);
        if (uVar21 < *(uint *)(iVar9 + 0xc)) {
          iVar9 = *(int *)(iVar9 + 8) * uVar21 + *(int *)(iVar9 + 0x1c);
        }
        else {
          iVar9 = 0;
        }
        if (*(int *)(*(int *)(pFVar7 + 0x1ea2) + 8) < 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = **(undefined4 **)(*(int *)(pFVar7 + 0x1ea2) + 0x14);
        }
        wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007cc5f0,uVar8,iVar9);
        Library::DKW::TBL::FUN_006b6020(*(int *)(pFVar7 + 0x1ea2),0,(char *)&DAT_0080f33a);
        *(undefined4 *)(pFVar7 + 0x2d) = 0x33;
        *(undefined4 *)(pFVar7 + 0x31) = *(undefined4 *)(pFVar7 + 0x1ea2);
LAB_005a8c85:
        FUN_006e6080(pFVar7,2,*(undefined4 *)(pFVar7 + 0x1b10),(undefined4 *)(pFVar7 + 0x1d));
        break;
      case 0xc0a5:
        DAT_00807360 = DAT_00807360 == '\0';
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (uVar21 == 0x8160) {
      param_1[6] = 0x11;
      goto switchD_005a43f5_caseD_1;
    }
    switch(uVar21) {
    case 0x6980:
      piVar5 = (int *)param_1[6];
      iVar9 = *piVar5;
      local_140 = iVar9 + -0xb4;
      iVar32 = piVar5[1];
      local_13c = iVar32 + -0xaa;
      local_138 = piVar5[2];
      local_134 = piVar5[3];
      FUN_006b4170(*(int *)(pFVar7 + 0x1ac0),0,iVar9 + -0xb3,iVar32 + -0xa9,local_138 + -2,
                   local_134 + -2,0xff);
      if (DAT_0080735f != '\0') {
        pbVar22 = (byte *)FUN_0070b3a0(*(int *)(pFVar7 + 0x1a83),0);
        thunk_FUN_00540760(*(undefined4 **)(pFVar7 + 0x1ac0),iVar9 + -0xb2,iVar32 + -0xa8,'\x06',
                           pbVar22);
      }
      break;
    case 0x6981:
      iVar9 = *(int *)(pFVar7 + 0x1a73);
      local_14 = (BITMAPINFO *)0x0;
      if (*(int *)(iVar9 + 0xa0) != 0) {
        FUN_00710790(iVar9);
      }
      iVar32 = param_1[7];
      iVar9 = *(int *)(iVar9 + 0x8a);
      local_50 = *(int *)(iVar32 + 0x24) + -0xb4;
      local_48 = *(int *)(iVar32 + 0x2c);
      local_44 = *(int *)(iVar32 + 0x30);
      local_4c = *(int *)(iVar32 + 0x28) -
                 ((-(uint)(pFVar7[0x1abb] != (FSGSTy)0x0) & 0xffffffb4) + 0xaa);
      FUN_006b4170(*(int *)(pFVar7 + 0x1ac0),0,*(int *)(iVar32 + 0x24) + -0xb5,local_4c,local_48 + 2
                   ,local_44,0xff);
      iVar32 = param_1[5];
      if (iVar32 != 0) {
        local_8 = (uint *)0x0;
        do {
          if (*(uint **)(iVar32 + (int)local_8) == (uint *)0x0) break;
          iVar9 = FUN_007111c0(*(void **)(pFVar7 + 0x1a73),*(uint **)(iVar32 + (int)local_8));
          ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1ac0),0,local_50,
                           (int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                           local_4c,local_48,iVar9);
          ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),*(uint **)(param_1[5] + (int)local_8),0,-1,0
                        );
          local_14 = (BITMAPINFO *)
                     ((int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     *(int *)(*(int *)(pFVar7 + 0x1a73) + 0x5c) + iVar9);
          iVar32 = param_1[5];
          local_8 = local_8 + 1;
        } while (iVar32 != 0);
      }
      if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
        iVar34 = (uint)*(ushort *)((int)param_1 + 0x1a) + local_4c;
        iVar32 = (uint)*(ushort *)(param_1 + 6) + local_50;
        FUN_006b5b10(*(int *)(pFVar7 + 0x1ac0),0,iVar32,iVar34,iVar32,iVar34 + iVar9,9,0xd);
      }
      goto LAB_005a7c92;
    case 0x6982:
      if (((*(int *)(pFVar7 + 0x1e8e) != 0) && (*(int *)(pFVar7 + 0x1e92) != 0)) &&
         (local_8 = (uint *)param_1[7], local_8 != (uint *)0x0)) {
        if (pFVar7[0x1a5f] == (FSGSTy)0x3) {
          this_00 = *(ccFntTy **)(pFVar7 + 0x1a73);
          local_1c = *(byte **)(pFVar7 + 0x1b08);
        }
        else {
          this_00 = *(ccFntTy **)(pFVar7 + 0x1a77);
          local_1c = *(byte **)(pFVar7 + 0x1e9e);
        }
        FUN_006b5f80(DAT_008075a8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        thunk_FUN_00540620(local_8[9],local_8[10],6,1,local_8[0xb],(byte *)local_8[0xc],'\x01',
                           *(BITMAPINFO **)(pFVar7 + 0x1e92));
        FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,local_8[0xb],local_8[0xc],0xff);
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
              ccFntTy::SetSurf(this_00,*(int *)(pFVar7 + 0x1e8e),0,0,
                               ((int)local_14 - (uint)*(ushort *)((int)param_1 + 0x16)) *
                               *(int *)(this_00 + 0x8a),*(int *)(*(int *)(pFVar7 + 0x1e8e) + 4),
                               (int)local_c);
              ccFntTy::WrStr(this_00,local_10,0,-1,2);
            }
            local_14 = (BITMAPINFO *)((int)&(local_14->bmiHeader).biSize + 1);
          } while ((int)local_14 < (int)((uint)*(ushort *)((int)param_1 + 0x16) + local_8[0x78]));
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,local_8[9],local_8[10],*(BITMAPINFO **)(pFVar7 + 0x1e8e),(uint *)0x0
                   ,0,0,local_8[0xb],local_8[0xc],0x10000ff);
      }
      break;
    case 0x6983:
      if ((*(int *)(pFVar7 + 0x1e8e) != 0) && (*(int *)(pFVar7 + 0x1e92) != 0)) {
        iVar9 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x28),
                     *(int *)(iVar9 + 0x2c),*(int *)(iVar9 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x28),6,0x15f,
                           *(uint *)(iVar9 + 0x2c),*(byte **)(iVar9 + 0x30),'\x01',
                           *(BITMAPINFO **)(pFVar7 + 0x1e92));
        FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,*(int *)(iVar9 + 0x2c),*(int *)(iVar9 + 0x30),
                     0xff);
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a77),*(int *)(pFVar7 + 0x1e8e),0,0,0,
                           *(int *)(*(int *)(pFVar7 + 0x1e8e) + 4),0x14);
          ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a77),*(uint **)param_1[5],0,-1,5);
        }
        uVar3 = *(ushort *)(param_1 + 6);
        if ((uVar3 != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          FUN_006b5b10(*(int *)(pFVar7 + 0x1e8e),0,(uint)uVar3,2,(uint)uVar3,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x28),
                   *(BITMAPINFO **)(pFVar7 + 0x1e8e),(uint *)0x0,0,0,*(DWORD *)(iVar9 + 0x2c),
                   *(DWORD *)(iVar9 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((*(int *)(pFVar7 + 0x1e8e) == 0) || (*(int *)(pFVar7 + 0x1e92) == 0)) break;
      pbVar22 = (byte *)param_1[7];
      FUN_006b5f80(DAT_008075a8,*(int *)(pbVar22 + 0x24),*(int *)(pbVar22 + 0x28),
                   *(int *)(pbVar22 + 0x2c),*(int *)(pbVar22 + 0x30));
      thunk_FUN_00540620(*(int *)(pbVar22 + 0x24),*(int *)(pbVar22 + 0x28),
                         *(int *)(pbVar22 + 0x24) + -0x13,0x160,*(uint *)(pbVar22 + 0x2c),
                         *(byte **)(pbVar22 + 0x30),'\x01',*(BITMAPINFO **)(pFVar7 + 0x1e92));
      FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,*(int *)(pbVar22 + 0x2c),*(int *)(pbVar22 + 0x30)
                   ,0xff);
      ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0,
                       *(int *)(pbVar22 + 0x2c),*(int *)(pbVar22 + 0x30));
      if ((short)param_1[5] == 1) {
        iVar9 = 2;
      }
      else {
        iVar9 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar34 = -1;
      iVar32 = -1;
      puVar12 = (uint *)FUN_006b0140(0x2565,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar32,iVar34,iVar9);
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
      if (*(int *)(pFVar7 + 0x1e8e) == 0) break;
      local_14 = (BITMAPINFO *)0x0;
      switch(uVar21) {
      case 0x6985:
      case 0x6986:
        local_14 = *(BITMAPINFO **)(pFVar7 + 0x1e9a);
        local_10 = (uint *)0x1e9;
        break;
      default:
        goto switchD_005a7593_caseD_6987;
      case 0x6989:
      case 0x698a:
      case 0x698d:
        local_14 = *(BITMAPINFO **)(pFVar7 + 0x1e92);
        local_10 = (uint *)0x199;
        break;
      case 0x698e:
      case 0x698f:
      case 0x6990:
      case 0x6991:
      case 0x6992:
        local_14 = *(BITMAPINFO **)(pFVar7 + 0x1e92);
        local_10 = (uint *)0x22;
      }
      local_1c = (byte *)0x5e;
switchD_005a7593_caseD_6987:
      if (local_14 == (BITMAPINFO *)0x0) break;
      local_c = (byte *)param_1[7];
      switch(uVar21 - 0x6985) {
      case 0:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case 8:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar21 = *(uint *)(pFVar7 + 0x1ec2);
        if (uVar21 < 0x401) {
          if (uVar21 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar21 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar21 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar21 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar21 == 0x502) {
          local_8 = (uint *)0x235d;
        }
        else {
LAB_005a7656:
          local_8 = (uint *)0x235c;
        }
        break;
      case 5:
        if (*(int *)(pFVar7 + 0x1ec6) == -1) {
          pcVar26 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar13 = pcVar26;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar26 + 1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar13;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pcVar26 = pcVar13 + -uVar21;
          pcVar13 = (char *)&DAT_0080f33a;
          for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar26;
            pcVar26 = pcVar26 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pcVar13 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            pcVar13 = pcVar13 + 1;
          }
        }
        else {
          if (*(uint *)(pFVar7 + 0x1eca) < *(uint *)(DAT_0080c502 + 0xc)) {
            pcVar26 = (char *)(*(int *)(DAT_0080c502 + 8) * *(uint *)(pFVar7 + 0x1eca) +
                              *(int *)(DAT_0080c502 + 0x1c));
          }
          else {
            pcVar26 = (char *)0x0;
          }
          if (pcVar26 == (char *)0x0) {
            pcVar26 = &DAT_008016a0;
          }
          uVar21 = 0xffffffff;
          do {
            pcVar13 = pcVar26;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar26 + 1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar13;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pcVar26 = pcVar13 + -uVar21;
          pcVar13 = (char *)&DAT_0080f33a;
          for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar26;
            pcVar26 = pcVar26 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pcVar13 = *pcVar26;
            pcVar26 = pcVar26 + 1;
            pcVar13 = pcVar13 + 1;
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
      pbVar22 = local_c;
      FUN_006b5f80(DAT_008075a8,*(int *)(local_c + 0x24),*(int *)(local_c + 0x28),
                   *(int *)(local_c + 0x2c),*(int *)(local_c + 0x30));
      thunk_FUN_00540620(*(int *)(pbVar22 + 0x24),*(int *)(pbVar22 + 0x28),
                         *(int *)(pbVar22 + 0x24) - (int)local_10,
                         *(int *)(pbVar22 + 0x28) - (int)local_1c,*(uint *)(pbVar22 + 0x2c),
                         *(byte **)(pbVar22 + 0x30),'\x01',local_14);
      FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,*(int *)(pbVar22 + 0x2c),*(int *)(pbVar22 + 0x30)
                   ,0xff);
      ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0,
                       *(int *)(pbVar22 + 0x2c),*(int *)(pbVar22 + 0x30));
      if ((short)param_1[5] == 1) {
        local_c = (byte *)0x2;
      }
      else {
        local_c = (byte *)((-(uint)((short)param_1[5] != 0) & 2) + 1);
      }
      if (param_1[4] == 0x698a) {
        puVar12 = &DAT_0080f33a;
      }
      else {
        puVar12 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      }
      ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,-1,-1,local_c);
      if ((short)param_1[5] == 0) {
        bVar20 = 0xd;
      }
      else {
        bVar20 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)(pFVar7 + 0x1e8e),0,0,0,*(undefined4 **)(pbVar22 + 0x2c),
                   *(int *)(pbVar22 + 0x30),4,bVar20);
      if ((short)param_1[5] == 0) {
        bVar20 = 0xd;
      }
      else {
        bVar20 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)(pFVar7 + 0x1e8e),0,2,2,(undefined4 *)(*(int *)(pbVar22 + 0x2c) + -4),
                   *(int *)(pbVar22 + 0x30) + -4,4,bVar20);
LAB_005a754e:
      DVar14 = *(DWORD *)(pbVar22 + 0x30);
      DVar33 = *(DWORD *)(pbVar22 + 0x2c);
      pBVar31 = *(BITMAPINFO **)(pFVar7 + 0x1e8e);
      iVar9 = *(int *)(pbVar22 + 0x28);
LAB_005a89f6:
      Library::DKW::DDX::FUN_006b4680
                (DAT_0080759c,*(int *)(pbVar22 + 0x24),iVar9,pBVar31,(uint *)0x0,0,0,DVar33,DVar14,
                 0x10000ff);
      break;
    case 0x6987:
      if ((*(int *)(pFVar7 + 0x1e8e) != 0) && (*(int *)(pFVar7 + 0x1e9a) != 0)) {
        iVar9 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x28),
                     *(int *)(iVar9 + 0x2c),*(int *)(iVar9 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x28),
                           *(int *)(iVar9 + 0x24) + -0x1e9,*(int *)(iVar9 + 0x28) + -0x5e,
                           *(uint *)(iVar9 + 0x2c),*(byte **)(iVar9 + 0x30),'\x01',
                           *(BITMAPINFO **)(pFVar7 + 0x1e9a));
        FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,*(int *)(iVar9 + 0x2c),*(int *)(iVar9 + 0x30),
                     0xff);
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0,
                           *(int *)(*(int *)(pFVar7 + 0x1e8e) + 4),0x19);
          ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar32 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(*(int *)(pFVar7 + 0x1e8e),0,iVar32,4,iVar32,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x28),
                   *(BITMAPINFO **)(pFVar7 + 0x1e8e),(uint *)0x0,0,0,*(DWORD *)(iVar9 + 0x2c),
                   *(DWORD *)(iVar9 + 0x30),0x10000ff);
      }
      break;
    case 0x6988:
      if ((*(int *)(pFVar7 + 0x1e8e) != 0) && (*(int *)(pFVar7 + 0x1e92) != 0)) {
        iVar9 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x28),
                     *(int *)(iVar9 + 0x2c),*(int *)(iVar9 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x28),
                           *(int *)(iVar9 + 0x24) -
                           ((-(uint)(pFVar7[0x1a5f] != (FSGSTy)0x9) & 0x177) + 0x22),
                           *(int *)(iVar9 + 0x28) + -0x5e,*(uint *)(iVar9 + 0x2c),
                           *(byte **)(iVar9 + 0x30),'\x01',*(BITMAPINFO **)(pFVar7 + 0x1e92));
        FUN_006b4170(*(int *)(pFVar7 + 0x1e8e),0,0,0,*(int *)(iVar9 + 0x2c),*(int *)(iVar9 + 0x30),
                     0xff);
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1e8e),0,0,0,
                           *(int *)(*(int *)(pFVar7 + 0x1e8e) + 4),0x19);
          ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar32 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(*(int *)(pFVar7 + 0x1e8e),0,iVar32,3,iVar32,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar9 + 0x24),*(int *)(iVar9 + 0x28),
                   *(BITMAPINFO **)(pFVar7 + 0x1e8e),(uint *)0x0,0,0,*(DWORD *)(iVar9 + 0x2c),
                   *(DWORD *)(iVar9 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar5 = (int *)param_1[6];
      iVar9 = *piVar5;
      iVar32 = iVar9 + -0xb4;
      local_3c = piVar5[1] + -0xaa;
      local_38 = (undefined4 *)piVar5[2];
      local_34 = piVar5[3];
      local_40 = iVar32;
      FUN_006b4170(*(int *)(pFVar7 + 0x1ac0),0,iVar32,local_3c,(int)local_38,local_34,0xff);
      if ((short)param_1[5] == 0) {
        bVar20 = 0xd;
      }
      else {
        bVar20 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)(pFVar7 + 0x1ac0),0,iVar32,local_3c,local_38,local_34,4,bVar20);
      if ((short)param_1[5] == 0) {
        bVar20 = 0xd;
      }
      else {
        bVar20 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)(pFVar7 + 0x1ac0),0,iVar9 + -0xb2,local_3c + 2,local_38 + -1,
                   local_34 + -4,4,bVar20);
      uVar21 = *(uint *)(pFVar7 + 0x1ec2);
      if (uVar21 < 0x502) {
        if (uVar21 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar21 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar21 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar21 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1ac0),0,iVar32,local_3c,
                       (int)local_38,local_34);
      if ((short)param_1[5] == 1) {
        iVar9 = 2;
      }
      else {
        iVar9 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar34 = -1;
      iVar32 = -1;
      puVar12 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar32,iVar34,iVar9);
LAB_005a7c92:
      FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar7 + 0x1abc));
      break;
    case 0x698c:
      ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),param_1[6],0,0,0,0,0);
      iVar9 = *(int *)(pFVar7 + 0x1fb3);
      if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar9 + 0xc)) {
        puVar12 = (uint *)(*(int *)(iVar9 + 8) * (uint)*(ushort *)(param_1 + 5) +
                          *(int *)(iVar9 + 0x1c));
      }
      else {
        puVar12 = (uint *)0x0;
      }
      ccFntTy::WrStr(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,-1,-1,
                     3 - (uint)(*(short *)((int)param_1 + 0x16) != 1));
      if (*(short *)((int)param_1 + 0x16) == 1) {
        iVar9 = param_1[6];
        FUN_006b5ee0(iVar9,0,0,0,*(int *)(iVar9 + 4),*(int *)(iVar9 + 8),0xf,0xd);
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar21 == 0x6949) {
    (**(code **)(*(int *)pFVar7 + 8))();
    pFVar7[0x1a61] = (FSGSTy)0x9;
    iVar9 = *(int *)(pFVar7 + 0x1a5b);
    if (*(int *)(iVar9 + 0x2e6) == 0) goto switchD_005a43f5_caseD_1;
    puVar11 = local_2ac;
    for (iVar32 = 6; iVar32 != 0; iVar32 = iVar32 + -1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar9 + 0x2e6),(int)local_2ac);
    puVar11 = &local_d0;
LAB_005a7f3b:
    thunk_FUN_005b8f40(*(void **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),puVar11);
    goto switchD_005a43f5_caseD_1;
  }
  if (0x63ff < uVar21) {
    if (uVar21 < 0x6907) {
      if (uVar21 == 0x6906) {
        if (DAT_00802a30[0x493] == (CursorClassTy)0x5) goto switchD_005a43f5_caseD_1;
        local_c = (byte *)param_1[7];
        *(undefined4 *)(pFVar7 + 0x1f43) = 0x6506;
        uVar8 = *(undefined4 *)(local_c + 8);
        *(undefined4 *)(pFVar7 + 0x1f63) = 0x698c;
        *(undefined4 *)(pFVar7 + 0x1f4b) = uVar8;
        *(undefined4 *)(*(int *)(pFVar7 + 0x1fb3) + 0xc) = 0;
        *(undefined4 *)(pFVar7 + 0x20bb) = 1;
        pcVar26 = (char *)FUN_006b0140(0x25b4,DAT_00807618);
        uVar21 = 0xffffffff;
        do {
          pcVar13 = pcVar26;
          if (uVar21 == 0) break;
          uVar21 = uVar21 - 1;
          pcVar13 = pcVar26 + 1;
          cVar1 = *pcVar26;
          pcVar26 = pcVar13;
        } while (cVar1 != '\0');
        uVar21 = ~uVar21;
        pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
        pFVar28 = pFVar7 + 0x1fb7;
        for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
          pFVar24 = pFVar24 + 4;
          pFVar28 = pFVar28 + 4;
        }
        for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
          *pFVar28 = *pFVar24;
          pFVar24 = pFVar24 + 1;
          pFVar28 = pFVar28 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7))
        ;
        *(undefined4 *)(pFVar7 + 0x20bb) = 2;
        pcVar26 = (char *)FUN_006b0140(0x25b5,DAT_00807618);
        uVar21 = 0xffffffff;
        do {
          pcVar13 = pcVar26;
          if (uVar21 == 0) break;
          uVar21 = uVar21 - 1;
          pcVar13 = pcVar26 + 1;
          cVar1 = *pcVar26;
          pcVar26 = pcVar13;
        } while (cVar1 != '\0');
        uVar21 = ~uVar21;
        pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
        pFVar28 = pFVar7 + 0x1fb7;
        for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
          pFVar24 = pFVar24 + 4;
          pFVar28 = pFVar28 + 4;
        }
        for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
          *pFVar28 = *pFVar24;
          pFVar24 = pFVar24 + 1;
          pFVar28 = pFVar28 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7))
        ;
        iVar9 = *(int *)(pFVar7 + 0x1fb3);
        *(undefined4 *)(pFVar7 + 0x1f7b) = *(undefined4 *)(iVar9 + 0xc);
        uVar21 = 0;
        *(undefined4 *)(pFVar7 + 0x1f73) = 0;
        if (*(uint *)(iVar9 + 0xc) != 0) {
          do {
            if (DAT_00803140 ==
                *(int *)(*(int *)(iVar9 + 8) * uVar21 + *(int *)(iVar9 + 0x1c) + 0x104)) {
              *(uint *)(pFVar7 + 0x1f73) = uVar21;
              break;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)(iVar9 + 0xc));
        }
      }
      else {
        if (uVar21 < 0x6903) {
          if (uVar21 == 0x6902) {
            iVar9 = *(int *)(pFVar7 + 0x1ae8);
            iVar32 = *(int *)(iVar9 + 8);
            goto joined_r0x005a8b8f;
          }
          if (0x6900 < uVar21) {
            if ((uVar21 == 0x6901) && (pFVar7[0x1a60] == (FSGSTy)0x0)) {
              *(undefined4 *)(pFVar7 + 0x2d) = 0x26;
              pFVar24 = pFVar7 + 0x1d;
              FUN_006e6080(pFVar7,2,*(undefined4 *)(pFVar7 + 0x1b20),(undefined4 *)pFVar24);
              iVar9 = *(int *)(pFVar7 + 0x1ea6);
              if ((uint)*(ushort *)(pFVar7 + 0x31) < *(uint *)(iVar9 + 0xc)) {
                iVar9 = *(int *)(iVar9 + 8) * (uint)*(ushort *)(pFVar7 + 0x31) +
                        *(int *)(iVar9 + 0x1c);
              }
              else {
                iVar9 = 0;
              }
              if (iVar9 != 0) {
                *(undefined4 *)(pFVar7 + 0x2d) = 0x32;
                FUN_006e6080(pFVar7,2,*(undefined4 *)(pFVar7 + 0x1b10),(undefined4 *)pFVar24);
                iVar32 = *(int *)(pFVar7 + 0x31);
                if (iVar32 != 0) {
                  if (*(int *)(iVar32 + 8) < 1) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = **(undefined4 **)(iVar32 + 0x14);
                  }
                  uVar15 = FUN_006b0140(0x2568,DAT_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,s__s__s__s_007cc62c,uVar15,iVar9,uVar8);
                  CFsgsConnection::SendChatMessage
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  Library::DKW::TBL::FUN_006b6020(*(int *)(pFVar7 + 0x1ea2),0,&DAT_008016a0);
                  *(undefined4 *)(pFVar7 + 0x2d) = 0x33;
                  *(undefined4 *)(pFVar7 + 0x31) = *(undefined4 *)(pFVar7 + 0x1ea2);
                  FUN_006e6080(pFVar7,2,*(undefined4 *)(pFVar7 + 0x1b10),(undefined4 *)pFVar24);
                }
              }
            }
            goto switchD_005a43f5_caseD_1;
          }
          if (uVar21 == 0x6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            *(undefined4 *)(pFVar7 + 0x2d) = 5;
            FUN_006e6080(pFVar7,2,*(undefined4 *)(pFVar7 + 0x1ad0),(undefined4 *)(pFVar7 + 0x1d));
            goto switchD_005a43f5_caseD_1;
          }
          if (uVar21 != 0x6506) {
            if (uVar21 == 0x68ff) {
              if (param_1[5] == 0) {
                if (*(int *)(pFVar7 + 0x1ab7) == *param_1) {
                  *(undefined4 *)(pFVar7 + 0x1ab7) = 0;
                }
              }
              else if (param_1[5] == 1) {
                *(int *)(pFVar7 + 0x1ab7) = *param_1;
              }
            }
            goto switchD_005a43f5_caseD_1;
          }
          iVar9 = *(int *)(pFVar7 + 0x1fb3);
          uVar21 = param_1[5];
          if (*(uint *)(iVar9 + 0xc) <= uVar21) goto switchD_005a43f5_caseD_1;
          if (pFVar7[0x1a5f] == (FSGSTy)0x9) {
            if (param_1[6] == *(int *)(pFVar7 + 0x1eb6)) {
              DAT_00803140 = *(ulong *)(*(int *)(iVar9 + 8) * uVar21 + 0x104 +
                                       *(int *)(iVar9 + 0x1c));
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar23 = DAT_00802a30;
joined_r0x005a55e5:
              DAT_00802a30 = pCVar23;
              if (pCVar23 == (CursorClassTy *)0x0) goto LAB_005a5634;
              pCVar23[0x493] = (CursorClassTy)0x5;
              *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
              CursorClassTy::SetGCType
                        (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
              iVar9 = *(int *)(pCVar23 + 0xc9);
              iVar32 = *(int *)(pCVar23 + 0xc5);
            }
            else {
              DAT_00803144 = *(int *)(*(int *)(iVar9 + 8) * uVar21 + 0x104 + *(int *)(iVar9 + 0x1c))
              ;
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar23 = DAT_00802a30;
              if (DAT_00802a30 == (CursorClassTy *)0x0) goto LAB_005a5634;
              uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
              uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
              DAT_00802a30[0x493] = (CursorClassTy)0x5;
              *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
              CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
              iVar9 = *(int *)(pCVar23 + 0xc9);
              iVar32 = *(int *)(pCVar23 + 0xc5);
            }
LAB_005a561c:
            CursorClassTy::DrawSprite(pCVar23,iVar32,iVar9);
            pCVar23[0xd2] = (CursorClassTy)0x0;
            *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
          }
          else {
            if (param_1[6] != *(int *)(pFVar7 + 0x1eb6)) {
              iVar9 = *(int *)(iVar9 + 8) * uVar21 + *(int *)(iVar9 + 0x1c);
              *(undefined4 *)(pFVar7 + 0x1ec6) = *(undefined4 *)(iVar9 + 0x104);
              *(undefined4 *)(pFVar7 + 0x1eca) = *(undefined4 *)(iVar9 + 0x108);
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(pFVar7 + 0x1ec2),(char *)0x0);
              DVar14 = timeGetTime();
              *(DWORD *)(pFVar7 + 0x1a63) = DVar14;
              pCVar23 = DAT_00802a30;
              goto joined_r0x005a55e5;
            }
            *(undefined4 *)(pFVar7 + 0x1ec2) =
                 *(undefined4 *)(*(int *)(iVar9 + 8) * uVar21 + 0x104 + *(int *)(iVar9 + 0x1c));
            if (pFVar7[0x1a5f] == (FSGSTy)0x8) {
              iVar9 = *(int *)(pFVar7 + 0x1ec2);
              puVar11 = local_24c;
              for (iVar32 = 8; iVar32 != 0; iVar32 = iVar32 + -1) {
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              }
              *(undefined4 *)(pFVar7 + 0x1ec6) = 0xffffffff;
              local_238 = (uint)(iVar9 == 0x100);
              *(undefined4 *)(pFVar7 + 0x1eca) = 0;
              local_23c = 0x20;
              if (*(int *)(pFVar7 + 0x1eba) != 0) {
                FUN_006e6080(pFVar7,2,*(int *)(pFVar7 + 0x1eba),local_24c);
              }
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(pFVar7 + 0x1ec2),(char *)0x0);
              DVar14 = timeGetTime();
              *(DWORD *)(pFVar7 + 0x1a63) = DVar14;
              pCVar23 = DAT_00802a30;
              if (DAT_00802a30 != (CursorClassTy *)0x0) {
                uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
                uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
                DAT_00802a30[0x493] = (CursorClassTy)0x5;
                *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
                CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
                iVar9 = *(int *)(pCVar23 + 0xc9);
                iVar32 = *(int *)(pCVar23 + 0xc5);
                goto LAB_005a561c;
              }
            }
          }
LAB_005a5634:
          *(undefined4 *)(pFVar7 + 0x2d) = 5;
          FUN_006e6080(pFVar7,2,param_1[6],(undefined4 *)(pFVar7 + 0x1d));
          goto switchD_005a43f5_caseD_1;
        }
        if (uVar21 == 0x6903) {
          if (DAT_00802a30 != (CursorClassTy *)0x0) {
            uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
            uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
            DAT_00802a30[0x493] = (CursorClassTy)0x5;
            *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
            CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
            CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
            pCVar23[0xd2] = (CursorClassTy)0x0;
            *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
          }
          if (pFVar7[0x1a5f] == (FSGSTy)0x6) {
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            pFVar7[0x1a60] = (FSGSTy)0x1;
          }
          if (pFVar7[0x1a5f] == (FSGSTy)0x8) {
            CFsgsConnection::RequestGameList
                      ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(pFVar7 + 0x1ec2),(char *)0x0);
            DVar14 = timeGetTime();
            *(DWORD *)(pFVar7 + 0x1a63) = DVar14;
          }
          goto switchD_005a43f5_caseD_1;
        }
        if (uVar21 == 0x6904) {
          local_c = (byte *)param_1[7];
          *(undefined4 *)(pFVar7 + 0x1f43) = 0x6506;
          uVar8 = *(undefined4 *)(local_c + 8);
          *(undefined4 *)(pFVar7 + 0x1f63) = 0x698c;
          *(undefined4 *)(pFVar7 + 0x1f4b) = uVar8;
          *(undefined4 *)(*(int *)(pFVar7 + 0x1fb3) + 0xc) = 0;
          if (pFVar7[0x1a5f] == (FSGSTy)0x8) {
            *(undefined4 *)(pFVar7 + 0x20bb) = 0;
            pcVar26 = (char *)FUN_006b0140(0x235c,DAT_00807618);
            uVar21 = 0xffffffff;
            do {
              pcVar13 = pcVar26;
              if (uVar21 == 0) break;
              uVar21 = uVar21 - 1;
              pcVar13 = pcVar26 + 1;
              cVar1 = *pcVar26;
              pcVar26 = pcVar13;
            } while (cVar1 != '\0');
            uVar21 = ~uVar21;
            pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
            pFVar28 = pFVar7 + 0x1fb7;
            for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
              pFVar24 = pFVar24 + 4;
              pFVar28 = pFVar28 + 4;
            }
            for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
              *pFVar28 = *pFVar24;
              pFVar24 = pFVar24 + 1;
              pFVar28 = pFVar28 + 1;
            }
            Library::DKW::TBL::FUN_006ae1c0
                      (*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
          }
          *(undefined4 *)(pFVar7 + 0x20bb) = 0x100;
          pcVar26 = (char *)FUN_006b0140(0x2341,DAT_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar13 = pcVar26;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar26 + 1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar13;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
          pFVar28 = pFVar7 + 0x1fb7;
          for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
            pFVar24 = pFVar24 + 4;
            pFVar28 = pFVar28 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pFVar28 = *pFVar24;
            pFVar24 = pFVar24 + 1;
            pFVar28 = pFVar28 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
          *(undefined4 *)(pFVar7 + 0x20bb) = 0x501;
          pcVar26 = (char *)FUN_006b0140(0x2342,DAT_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar13 = pcVar26;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar26 + 1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar13;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
          pFVar28 = pFVar7 + 0x1fb7;
          for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
            pFVar24 = pFVar24 + 4;
            pFVar28 = pFVar28 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pFVar28 = *pFVar24;
            pFVar24 = pFVar24 + 1;
            pFVar28 = pFVar28 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
          *(undefined4 *)(pFVar7 + 0x20bb) = 0x200;
          pcVar26 = (char *)FUN_006b0140(0x235a,DAT_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar13 = pcVar26;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar26 + 1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar13;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
          pFVar28 = pFVar7 + 0x1fb7;
          for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
            pFVar24 = pFVar24 + 4;
            pFVar28 = pFVar28 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pFVar28 = *pFVar24;
            pFVar24 = pFVar24 + 1;
            pFVar28 = pFVar28 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
          *(undefined4 *)(pFVar7 + 0x20bb) = 0x400;
          pcVar26 = (char *)FUN_006b0140(0x235b,DAT_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar13 = pcVar26;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar26 + 1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar13;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
          pFVar28 = pFVar7 + 0x1fb7;
          for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
            pFVar24 = pFVar24 + 4;
            pFVar28 = pFVar28 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pFVar28 = *pFVar24;
            pFVar24 = pFVar24 + 1;
            pFVar28 = pFVar28 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
          *(undefined4 *)(pFVar7 + 0x20bb) = 0x502;
          pcVar26 = (char *)FUN_006b0140(0x235d,DAT_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar13 = pcVar26;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar26 + 1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar13;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
          pFVar28 = pFVar7 + 0x1fb7;
          for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
            pFVar24 = pFVar24 + 4;
            pFVar28 = pFVar28 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pFVar28 = *pFVar24;
            pFVar24 = pFVar24 + 1;
            pFVar28 = pFVar28 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
          iVar9 = *(int *)(pFVar7 + 0x1fb3);
          *(undefined4 *)(pFVar7 + 0x1f7b) = *(undefined4 *)(iVar9 + 0xc);
          uVar21 = 0;
          *(undefined4 *)(pFVar7 + 0x1f73) = 0;
          if (*(uint *)(iVar9 + 0xc) != 0) {
            do {
              if (*(int *)(pFVar7 + 0x1ec2) ==
                  *(int *)(*(int *)(iVar9 + 8) * uVar21 + *(int *)(iVar9 + 0x1c) + 0x104)) {
                *(uint *)(pFVar7 + 0x1f73) = uVar21;
                break;
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < *(uint *)(iVar9 + 0xc));
          }
        }
        else {
          if (uVar21 != 0x6905) goto switchD_005a43f5_caseD_1;
          local_c = (byte *)param_1[7];
          *(undefined4 *)(pFVar7 + 0x1f43) = 0x6506;
          uVar8 = *(undefined4 *)(local_c + 8);
          *(undefined4 *)(pFVar7 + 0x1f63) = 0x698c;
          *(undefined4 *)(pFVar7 + 0x1f4b) = uVar8;
          *(undefined4 *)(*(int *)(pFVar7 + 0x1fb3) + 0xc) = 0;
          *(undefined4 *)(pFVar7 + 0x20bb) = 0xffffffff;
          pcVar26 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar13 = pcVar26;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar26 + 1;
            cVar1 = *pcVar26;
            pcVar26 = pcVar13;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
          pFVar28 = pFVar7 + 0x1fb7;
          for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
            pFVar24 = pFVar24 + 4;
            pFVar28 = pFVar28 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pFVar28 = *pFVar24;
            pFVar24 = pFVar24 + 1;
            pFVar28 = pFVar28 + 1;
          }
          *(undefined4 *)(pFVar7 + 0x20bf) = 0;
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
          local_8 = (uint *)0x0;
          if (*(int *)(DAT_0080c502 + 0xc) != 0) {
            iVar9 = DAT_0080c502;
            if (*(int *)(DAT_0080c502 + 0xc) == 0) {
              pcVar26 = (char *)0x0;
              goto LAB_005a5859;
            }
            do {
              pcVar26 = (char *)(*(int *)(iVar9 + 8) * (int)local_8 + *(int *)(iVar9 + 0x1c));
LAB_005a5859:
              if (pcVar26 != (char *)0x0) {
                *(undefined4 *)(pFVar7 + 0x20bb) = *(undefined4 *)(pcVar26 + 0x90);
                uVar21 = 0xffffffff;
                do {
                  pcVar13 = pcVar26;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pcVar13 = pcVar26 + 1;
                  cVar1 = *pcVar26;
                  pcVar26 = pcVar13;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
                pFVar28 = pFVar7 + 0x1fb7;
                for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
                  pFVar24 = pFVar24 + 4;
                  pFVar28 = pFVar28 + 4;
                }
                for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *pFVar28 = *pFVar24;
                  pFVar24 = pFVar24 + 1;
                  pFVar28 = pFVar28 + 1;
                }
                *(uint **)(pFVar7 + 0x20bf) = local_8;
                Library::DKW::TBL::FUN_006ae1c0
                          (*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
                iVar9 = DAT_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < *(uint **)(iVar9 + 0xc));
          }
          iVar9 = *(int *)(pFVar7 + 0x1fb3);
          uVar21 = 0;
          uVar8 = *(undefined4 *)(iVar9 + 0xc);
          *(undefined4 *)(pFVar7 + 0x1f73) = 0;
          *(undefined4 *)(pFVar7 + 0x1f7b) = uVar8;
          if (*(uint *)(iVar9 + 0xc) != 0) {
            do {
              if (*(int *)(pFVar7 + 0x1ec6) ==
                  *(int *)(*(int *)(iVar9 + 8) * uVar21 + *(int *)(iVar9 + 0x1c) + 0x104)) {
                *(uint *)(pFVar7 + 0x1f73) = uVar21;
                break;
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < *(uint *)(iVar9 + 0xc));
          }
        }
      }
      iVar9 = *(int *)(pFVar7 + 0x1a73);
      *(undefined4 *)(pFVar7 + 0x1f97) = *(undefined4 *)(local_c + 0x24);
      *(int *)(pFVar7 + 0x1f9f) = *(int *)(local_c + 0x2c) + 10;
      *(int *)(pFVar7 + 0x1f9b) = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar32 = *(int *)(iVar9 + 0xa0);
joined_r0x005a5b89:
      if (iVar32 != 0) {
        FUN_00710790(iVar9);
      }
      *(undefined4 *)(pFVar7 + 0x1f77) = *(undefined4 *)(iVar9 + 0x8a);
      (**(code **)(**(int **)(pFVar7 + 0xc) + 8))(0x100ef,0,0,pFVar7 + 0x1f33,0);
      goto switchD_005a43f5_caseD_1;
    }
    switch(uVar21) {
    case 0x6907:
      if (DAT_00802a30[0x493] == (CursorClassTy)0x5) break;
      local_c = (byte *)param_1[7];
      *(undefined4 *)(pFVar7 + 0x1f43) = 0x6506;
      uVar8 = *(undefined4 *)(local_c + 8);
      *(undefined4 *)(pFVar7 + 0x1f63) = 0x698c;
      *(undefined4 *)(pFVar7 + 0x1f4b) = uVar8;
      *(undefined4 *)(*(int *)(pFVar7 + 0x1fb3) + 0xc) = 0;
      *(undefined4 *)(pFVar7 + 0x20bb) = 0;
      pcVar26 = (char *)FUN_006b0140(0x25bf,DAT_00807618);
      uVar21 = 0xffffffff;
      do {
        pcVar13 = pcVar26;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar13 = pcVar26 + 1;
        cVar1 = *pcVar26;
        pcVar26 = pcVar13;
      } while (cVar1 != '\0');
      uVar21 = ~uVar21;
      pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
      pFVar28 = pFVar7 + 0x1fb7;
      for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
        pFVar24 = pFVar24 + 4;
        pFVar28 = pFVar28 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pFVar28 = *pFVar24;
        pFVar24 = pFVar24 + 1;
        pFVar28 = pFVar28 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
      *(undefined4 *)(pFVar7 + 0x20bb) = 1;
      pcVar26 = (char *)FUN_006b0140(0x25c0,DAT_00807618);
      uVar21 = 0xffffffff;
      do {
        pcVar13 = pcVar26;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar13 = pcVar26 + 1;
        cVar1 = *pcVar26;
        pcVar26 = pcVar13;
      } while (cVar1 != '\0');
      uVar21 = ~uVar21;
      pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
      pFVar28 = pFVar7 + 0x1fb7;
      for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
        pFVar24 = pFVar24 + 4;
        pFVar28 = pFVar28 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pFVar28 = *pFVar24;
        pFVar24 = pFVar24 + 1;
        pFVar28 = pFVar28 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
      *(undefined4 *)(pFVar7 + 0x20bb) = 2;
      pcVar26 = (char *)FUN_006b0140(0x25c1,DAT_00807618);
      uVar21 = 0xffffffff;
      do {
        pcVar13 = pcVar26;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar13 = pcVar26 + 1;
        cVar1 = *pcVar26;
        pcVar26 = pcVar13;
      } while (cVar1 != '\0');
      uVar21 = ~uVar21;
      pFVar24 = (FSGSTy *)(pcVar13 + -uVar21);
      pFVar28 = pFVar7 + 0x1fb7;
      for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pFVar28 = *(undefined4 *)pFVar24;
        pFVar24 = pFVar24 + 4;
        pFVar28 = pFVar28 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pFVar28 = *pFVar24;
        pFVar24 = pFVar24 + 1;
        pFVar28 = pFVar28 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pFVar7 + 0x1fb3),(undefined4 *)(pFVar7 + 0x1fb7));
      iVar9 = *(int *)(pFVar7 + 0x1fb3);
      *(undefined4 *)(pFVar7 + 0x1f7b) = *(undefined4 *)(iVar9 + 0xc);
      uVar21 = 0;
      *(undefined4 *)(pFVar7 + 0x1f73) = 0;
      if (*(uint *)(iVar9 + 0xc) != 0) {
        do {
          if (DAT_00803144 ==
              *(int *)(*(int *)(iVar9 + 8) * uVar21 + *(int *)(iVar9 + 0x1c) + 0x104)) {
            *(uint *)(pFVar7 + 0x1f73) = uVar21;
            break;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < *(uint *)(iVar9 + 0xc));
      }
      iVar9 = *(int *)(pFVar7 + 0x1a73);
      *(undefined4 *)(pFVar7 + 0x1f97) = *(undefined4 *)(local_c + 0x24);
      *(int *)(pFVar7 + 0x1f9f) = *(int *)(local_c + 0x2c) + 10;
      *(int *)(pFVar7 + 0x1f9b) = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar32 = *(int *)(iVar9 + 0xa0);
      goto joined_r0x005a5b89;
    case 0x6908:
      if (DAT_00802a30[0x493] == (CursorClassTy)0x5) break;
      bVar30 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar30 = true;
      }
      if ((!bVar30) ||
         (CFsgsConnection::RequestLadderList
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar23 = DAT_00802a30, DAT_00802a30 == (CursorClassTy *)0x0)) break;
      uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x5;
      *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
      iVar9 = *(int *)(pCVar23 + 0xc9);
      iVar32 = *(int *)(pCVar23 + 0xc5);
      goto LAB_005a52aa;
    case 0x6909:
      if ((DAT_00802a30[0x493] == (CursorClassTy)0x5) || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar23 = DAT_00802a30;
      if (DAT_00802a30 == (CursorClassTy *)0x0) break;
      uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x5;
      *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
      iVar9 = *(int *)(pCVar23 + 0xc9);
      iVar32 = *(int *)(pCVar23 + 0xc5);
LAB_005a52aa:
      CursorClassTy::DrawSprite(pCVar23,iVar32,iVar9);
      pCVar23[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
      break;
    case 0x690a:
      if ((DAT_00802a30[0x493] == (CursorClassTy)0x5) ||
         (iVar9 = *(int *)(pFVar7 + 0x1ae8), iVar9 == 0)) break;
      if (0 < *(int *)(iVar9 + 8)) {
        pcVar26 = (char *)**(undefined4 **)(iVar9 + 0x14);
      }
      iVar32 = -1;
      do {
        if (iVar32 == 0) break;
        iVar32 = iVar32 + -1;
        cVar1 = *pcVar26;
        pcVar26 = pcVar26 + 1;
      } while (cVar1 != '\0');
      if (iVar32 == -2) break;
      if (*(int *)(iVar9 + 8) < 1) {
        pcVar26 = (char *)0x0;
      }
      else {
        pcVar26 = (char *)**(undefined4 **)(iVar9 + 0x14);
      }
      CFsgsConnection::RequestLadderListByName
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,pcVar26,0xf);
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
      bVar20 = (char)param_1[4] - 0x13;
      local_c = (byte *)CONCAT31(local_c._1_3_,bVar20);
      if ((*(uint *)(pFVar7 + 0x1ee3) <= (uint)bVar20) || (*(int *)(pFVar7 + 0x1edb) == 0)) break;
      iVar32 = (uint)bVar20 * 0x24;
      iVar9 = -1;
      pcVar26 = (char *)(iVar32 + 0x14 + *(int *)(pFVar7 + 0x1edb));
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar1 = *pcVar26;
        pcVar26 = pcVar26 + 1;
      } while (cVar1 != '\0');
      if (iVar9 == -2) break;
      if (*(int *)(pFVar7 + 0x1b0c) != 0) {
        FUN_006ab060((undefined4 *)(pFVar7 + 0x1b0c));
      }
      uVar21 = 0xffffffff;
      pcVar26 = (char *)(iVar32 + 0x14 + *(int *)(pFVar7 + 0x1edb));
      do {
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        cVar1 = *pcVar26;
        pcVar26 = pcVar26 + 1;
      } while (cVar1 != '\0');
      pcVar26 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar21);
      *(char **)(pFVar7 + 0x1b0c) = pcVar26;
      uVar21 = 0xffffffff;
      pcVar13 = (char *)(iVar32 + 0x14 + *(int *)(pFVar7 + 0x1edb));
      do {
        pcVar29 = pcVar13;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar29 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar29;
      } while (cVar1 != '\0');
      uVar21 = ~uVar21;
      pcVar13 = pcVar29 + -uVar21;
      for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar26 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar26 = pcVar26 + 1;
      }
      (**(code **)(*(int *)pFVar7 + 8))();
      pFVar7[0x1a61] = (FSGSTy)0xa;
      pFVar7[0x1ed2] = (FSGSTy)0x9;
      iVar9 = *(int *)(pFVar7 + 0x1a5b);
      if (*(int *)(iVar9 + 0x2e6) == 0) break;
      puVar11 = local_338;
      for (iVar32 = 6; iVar32 != 0; iVar32 = iVar32 + -1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      MMsgTy::StatePanel(*(MMsgTy **)(iVar9 + 0x2e6),(int)local_338);
      puVar11 = &local_70;
      goto LAB_005a7f3b;
    case 0x693f:
      thunk_FUN_0059b820(pFVar7);
      break;
    case 0x6940:
      thunk_FUN_0059be50(pFVar7);
      break;
    case 0x6941:
      thunk_FUN_005b6350(pFVar7,0x6105,0,1);
      pFVar7[0x1a61] = (FSGSTy)0x0;
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      (**(code **)(*(int *)pFVar7 + 8))();
      if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),1,0,1);
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar21 == 0x63ff) {
    FVar2 = pFVar7[0x1a5f];
    if (FVar2 == (FSGSTy)0x3) {
      (**(code **)(*(int *)pFVar7 + 8))();
      pFVar7[0x1a61] = (FSGSTy)0x4;
      if (*(int *)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != 0) {
        local_dc = 0;
        local_d8 = 0;
        local_e0 = 0x101;
        local_d4 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),&local_e0);
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (FVar2 == (FSGSTy)0x7) {
      if ((DAT_00802a30 != (CursorClassTy *)0x0) && (DAT_00802a30[0x493] == (CursorClassTy)0x5))
      goto switchD_005a43f5_caseD_1;
      thunk_FUN_005daa60();
      local_290.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_290;
      iVar9 = Library::MSVCRT::__setjmp3(local_290.jumpBuffer,0,unaff_EDI,unaff_ESI);
      pFVar7 = local_20;
      if (iVar9 == 0) {
        FUN_006b6150((uint)DAT_00807362);
        if (*(int *)(*(int *)(pFVar7 + 0x1ae8) + 8) < 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = **(undefined4 **)(*(int *)(pFVar7 + 0x1ae8) + 0x14);
        }
        Library::DKW::DDX::FUN_006b69b0(&DAT_00811764,(int *)&DAT_007cd6f0,0,uVar8,0x20);
        g_currentExceptionFrame = local_290.previous;
      }
      else {
        g_currentExceptionFrame = local_290.previous;
        iVar9 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xc08,0,iVar9,
                                   &DAT_007a4ccc,s_FSGSTy__GetMessage_MESS_ID_MSGOK_007cc638);
        if (iVar9 != 0) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return uVar8;
        }
      }
      if (DAT_00811764 == 0) {
        if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),0x2594,'\0',
                             (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
        goto switchD_005a43f5_caseD_1;
      }
      FUN_006b6160(local_6b8,DAT_00811764 + 0x18);
      local_698 = 0;
      if (*(int *)(*(int *)(pFVar7 + 0x1aec) + 8) < 1) {
        pcVar26 = (char *)0x0;
      }
      else {
        pcVar26 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1aec) + 0x14);
      }
      if (*(int *)(*(int *)(pFVar7 + 0x1ae8) + 8) < 1) {
        pcVar13 = (char *)0x0;
      }
      else {
        pcVar13 = (char *)**(undefined4 **)(*(int *)(pFVar7 + 0x1ae8) + 0x14);
      }
      CFsgsConnection::CreateGame
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(pFVar7 + 0x1ec2),0x17e0,pcVar13,pcVar26
                 ,local_6b8);
      pCVar23 = DAT_00802a30;
      if (DAT_00802a30 == (CursorClassTy *)0x0) goto switchD_005a43f5_caseD_1;
      uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x5;
      *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
      iVar9 = *(int *)(pCVar23 + 0xc9);
      iVar32 = *(int *)(pCVar23 + 0xc5);
      goto LAB_005a52aa;
    }
    if ((FVar2 != (FSGSTy)0x8) ||
       (((DAT_00802a30 != (CursorClassTy *)0x0 && (DAT_00802a30[0x493] == (CursorClassTy)0x5)) ||
        (*(int *)(pFVar7 + 0x1ebe) == 0)))) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0x493] = (CursorClassTy)0x5;
      *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
      CursorClassTy::SetGCType
                (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
      CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
      pCVar23[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
    }
    *(undefined4 *)(pFVar7 + 0x2d) = 0x26;
    FUN_006e6080(pFVar7,2,*(undefined4 *)(pFVar7 + 0x1b20),(undefined4 *)(pFVar7 + 0x1d));
    pCVar23 = DAT_00802a30;
    iVar9 = *(int *)(pFVar7 + 0x1ebe);
    if (*(uint *)(iVar9 + 0xc) <= *(uint *)(pFVar7 + 0x31)) goto switchD_005a43f5_caseD_1;
    local_15 = '\x01';
    local_8 = (uint *)(*(int *)(iVar9 + 8) * *(uint *)(pFVar7 + 0x31) + *(int *)(iVar9 + 0x1c));
    if (local_8 == (uint *)0x0) goto switchD_005a43f5_caseD_1;
    puVar12 = local_8 + 0x13;
    iVar9 = -1;
    puVar27 = puVar12;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      uVar21 = *puVar27;
      puVar27 = (uint *)((int)puVar27 + 1);
    } while ((byte)uVar21 != 0);
    if (iVar9 != -2) {
      if (*(int *)(*(int *)(pFVar7 + 0x1aec) + 8) < 1) {
        pbVar22 = (byte *)0x0;
      }
      else {
        pbVar22 = (byte *)**(undefined4 **)(*(int *)(pFVar7 + 0x1aec) + 0x14);
      }
      do {
        bVar20 = (byte)*puVar12;
        bVar30 = bVar20 < *pbVar22;
        if (bVar20 != *pbVar22) {
LAB_005a4eca:
          iVar9 = (1 - (uint)bVar30) - (uint)(bVar30 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar20 == 0) break;
        bVar20 = *(byte *)((int)puVar12 + 1);
        bVar30 = bVar20 < pbVar22[1];
        if (bVar20 != pbVar22[1]) goto LAB_005a4eca;
        puVar12 = (uint *)((int)puVar12 + 2);
        pbVar22 = pbVar22 + 2;
      } while (bVar20 != 0);
      iVar9 = 0;
LAB_005a4ecf:
      if (iVar9 != 0) {
        local_15 = '\0';
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
        CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
        pCVar23[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
        if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),0x258b,'\0',
                             (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
      }
    }
    puVar12 = local_8;
    if (local_15 == '\0') goto switchD_005a43f5_caseD_1;
    thunk_FUN_005daa60();
    FUN_006b61a0(local_22c,(byte *)(puVar12 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    iVar9 = Library::MSVCRT::__setjmp3(local_3b4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar12 = local_8;
    if (iVar9 == 0) {
      Library::DKW::DDX::FUN_006b6a50
                (&DAT_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)((_union_1226 *)(local_8 + 4))->S_un_b,local_22c);
    }
    pCVar23 = DAT_00802a30;
    g_currentExceptionFrame = local_3b4.previous;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar8 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar15 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(pCVar23,0,uVar15,uVar8);
      CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
      pCVar23[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
    }
    if (DAT_00811764 == 0) {
      if (*(MMsgTy **)(*(int *)(local_20 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(local_20 + 0x1a5b) + 0x2e6),0x2595,'\0',
                           (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
      }
      goto switchD_005a43f5_caseD_1;
    }
    CFsgsConnection::JoinGame((CFsgsConnection *)&DAT_00802a90,puVar12[1]);
    pFVar7 = local_20;
    DAT_0080877f = *(undefined4 *)(DAT_00811764 + 0x38);
    DAT_0080877e = 0;
    DAT_008087be = 0;
    local_20[0x1a61] = (FSGSTy)0x0;
    DAT_008067a0 = 1;
    uVar21 = *(uint *)(local_20 + 0x1ec2);
    if (uVar21 < 0x502) {
      if (uVar21 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar21 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar21 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar21 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    thunk_FUN_005b6350(local_20,0x6109,0,1);
    (**(code **)(*(int *)pFVar7 + 8))();
    pMVar19 = *(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6);
    if (pMVar19 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar19,1,0,1);
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar21 < 0x6152) {
    if (uVar21 != 0x6151) {
      if (uVar21 < 0x6106) {
        if (uVar21 == 0x6105) {
          *(undefined4 *)(pFVar7 + 0x45) = 0x200;
          *(undefined4 *)(pFVar7 + 0x49) = 0;
          *(int *)(pFVar7 + 0x4d) = param_1[4];
          *(int *)(pFVar7 + 0x51) = param_1[5];
          *(int *)(pFVar7 + 0x55) = param_1[6];
          thunk_FUN_005b66e0(pFVar7);
        }
        else {
          switch(uVar21) {
          case 0:
            NoneFSGS(pFVar7,(int)unaff_EDI);
            break;
          case 2:
            InitFSGS(pFVar7,*(byte *)(param_1[5] + 0x14));
            break;
          case 3:
            DoneFSGS(pFVar7);
            break;
          case 5:
            PaintFSGS(pFVar7,'\0');
          }
        }
      }
      else {
        switch(uVar21) {
        case 0x6109:
        case 0x611f:
          StartSystemTy::InitChat(*(StartSystemTy **)(pFVar7 + 0x1a5b));
          *(undefined4 *)(pFVar7 + 0x45) = 0x200;
          *(undefined4 *)(pFVar7 + 0x49) = 0;
          *(int *)(pFVar7 + 0x4d) = param_1[4];
          *(int *)(pFVar7 + 0x51) = param_1[5];
          *(int *)(pFVar7 + 0x55) = param_1[6];
          thunk_FUN_005b66e0(pFVar7);
          break;
        case 0x614f:
          if (DAT_00802a30 != (CursorClassTy *)0x0) {
            DAT_00802a30[0x493] = (CursorClassTy)0x1;
            *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
            CursorClassTy::SetGCType
                      (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
            CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
            pCVar23[0xd2] = (CursorClassTy)0x0;
            *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
          }
          iVar9 = *(int *)(pFVar7 + 0x1a5b);
          puVar11 = local_19c;
          for (iVar32 = 8; iVar32 != 0; iVar32 = iVar32 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          local_19c[2] = *(undefined4 *)(pFVar7 + 8);
          local_19c[3] = 2;
          local_19c[4] = 0x6941;
          if (*(MMsgTy **)(iVar9 + 0x2e6) == (MMsgTy *)0x0) {
            (*(code *)**(undefined4 **)pFVar7)(local_19c);
          }
          else {
            MMsgTy::SetMessage(*(MMsgTy **)(iVar9 + 0x2e6),0x2593,'\0',local_19c,(undefined4 *)0x0,
                               (undefined4 *)0x0,param_1[5],0x2599);
          }
          break;
        case 0x6150:
          if (pFVar7[0x1a5f] == (FSGSTy)0x1) {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              DAT_00802a30[0x493] = (CursorClassTy)0x1;
              *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
              CursorClassTy::SetGCType
                        (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
              CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
              pCVar23[0xd2] = (CursorClassTy)0x0;
              *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
            }
            iVar9 = param_1[5];
            puVar11 = local_160;
            for (iVar32 = 8; iVar32 != 0; iVar32 = iVar32 + -1) {
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            }
            local_160[2] = *(undefined4 *)(pFVar7 + 8);
            local_160[3] = 2;
            local_160[4] = 0x6941;
            switch(iVar9) {
            case 1:
              UVar10 = 0x2580;
              break;
            case 2:
              UVar10 = 0x2581;
              break;
            case 3:
              UVar10 = 0x2582;
              break;
            case 4:
              UVar10 = 0x2583;
              break;
            default:
              UVar10 = 0x2584;
            }
            if ((UVar10 == 0) ||
               (pMVar19 = *(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6), pMVar19 == (MMsgTy *)0x0)
               ) {
              (*(code *)**(undefined4 **)pFVar7)(local_160);
            }
            else if (UVar10 == 0x2584) {
              MMsgTy::SetMessage(pMVar19,0x2584,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,
                                 iVar9,0x2599);
            }
            else {
              MMsgTy::SetMessage(pMVar19,UVar10,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,0
                                 ,0);
            }
          }
        }
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (pFVar7[0x1a5f] != (FSGSTy)0x1) goto switchD_005a43f5_caseD_1;
    CFsgsConnection::StartBanners((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      iVar9 = *(int *)(pFVar7 + 0x1ac0);
      uVar21 = *(uint *)(iVar9 + 0x14);
      if (uVar21 == 0) {
        uVar21 = ((uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar9 + 8);
      }
      puVar11 = (undefined4 *)FUN_006b4fa0(iVar9);
      for (uVar18 = uVar21 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined1 *)puVar11 = 0xff;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(pFVar7 + 0x1a73),*(int *)(pFVar7 + 0x1ac0),0,0,0x16,0x1b8,0xf0)
      ;
      iVar35 = -1;
      iVar34 = -1;
      uVar8 = 2;
      iVar32 = -1;
      iVar9 = -1;
      puVar12 = (uint *)FUN_006b0140(0x25b6,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(pFVar7 + 0x1a73),puVar12,iVar9,iVar32,uVar8,iVar34,iVar35);
      FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar7 + 0x1abc));
      CFsgsConnection::RequestDatafile((CFsgsConnection *)&DAT_00802a90,s_st_inf_007cc66c);
      goto switchD_005a43f5_caseD_1;
    }
    goto LAB_005a6d57;
  }
  if (0x6333 < uVar21) {
    if (uVar21 == 0x6334) {
      MMMObjTy::PaintSlBut((MMMObjTy *)pFVar7,(int)(pFVar7 + 0x1bb9),(int)param_1,0);
    }
    else if (uVar21 == 0x6335) {
      *(uint *)(pFVar7 + 0x1c6a) = *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16)
      ;
      if (*(uint *)(pFVar7 + 0x1c4e) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(pFVar7 + 0x1c92),*(uint *)(pFVar7 + 0x1c4e),*(uint *)(pFVar7 + 0x1c52)
                   ,*(uint *)(pFVar7 + 0x1c66),*(uint *)(pFVar7 + 0x1c6a));
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar21 == 0x6333) {
    MMMObjTy::PaintSlBut((MMMObjTy *)pFVar7,(int)(pFVar7 + 0x1b28),(int)param_1,0);
    goto switchD_005a43f5_caseD_1;
  }
  switch(uVar21) {
  case 0x6152:
    if (pFVar7[0x1a5f] != (FSGSTy)0x2) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
      CursorClassTy::SetGCType
                (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
      CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
      pCVar23[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
    }
    iVar9 = *(int *)(pFVar7 + 0x1a5b);
    puVar11 = local_2c8;
    for (iVar32 = 6; iVar32 != 0; iVar32 = iVar32 + -1) {
      *puVar11 = 0x10001;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 1;
    if (*(MMsgTy **)(iVar9 + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(*(MMsgTy **)(iVar9 + 0x2e6),(int)local_2c8);
    }
    switch(param_1[5]) {
    case 2:
      UVar10 = 0x258b;
      break;
    case 3:
      UVar10 = 0x258c;
      break;
    case 4:
      UVar10 = 0x258d;
      break;
    default:
      UVar10 = 0x2589;
      break;
    case 7:
      UVar10 = 0x25c2;
    }
    if ((UVar10 == 0) ||
       (pMVar19 = *(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6), pMVar19 == (MMsgTy *)0x0))
    goto switchD_005a43f5_caseD_1;
    if (UVar10 == 0x2589) {
      MMsgTy::SetMessage(pMVar19,0x2589,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                         param_1[5],0x2599);
      goto switchD_005a43f5_caseD_1;
    }
    break;
  case 0x6153:
    if ((pFVar7[0x1a5f] == (FSGSTy)0x2) || (pFVar7[0x1a5f] == (FSGSTy)0x4)) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
        CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
        pCVar23[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
      }
      local_100 = s_Profile_Age_007cc1a8;
      local_fc = s_Profile_Sex_007cc198;
      local_f8 = s_Profile_Location_007cc184;
      local_f4 = s_Profile_Description_007cc16c;
      if (pFVar7[0x1a5f] == (FSGSTy)0x2) {
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
      thunk_FUN_0055bf20(&DAT_00802a90,*(undefined4 *)(pFVar7 + 0x1a67));
      if (*(byte **)(pFVar7 + 0x1e9e) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(pFVar7 + 0x1e9e));
      }
      puVar12 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,100);
      *(uint **)(pFVar7 + 0x1e9e) = puVar12;
      (**(code **)(*(int *)pFVar7 + 8))();
      pFVar7[0x1a61] = (FSGSTy)0x6;
      if (*(int *)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != 0) {
        local_ac = 0;
        local_a8 = 0;
        local_b0 = 0x10101;
        local_a4 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),&local_b0);
      }
    }
    goto switchD_005a43f5_caseD_1;
  case 0x6154:
    if (pFVar7[0x1a5f] == (FSGSTy)0x5) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
        CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
        pCVar23[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
      }
      uVar21 = param_1[5];
      if (uVar21 == 0) {
        *(undefined4 *)(pFVar7 + 0x2d) = 0x6952;
        (*(code *)**(undefined4 **)pFVar7)(pFVar7 + 0x1d);
      }
      else if ((uVar21 != 0) && (uVar21 < 3)) {
        puVar11 = local_300;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = 0x10001;
          puVar11 = puVar11 + 1;
        }
        iVar9 = *(int *)(pFVar7 + 0x1a5b);
        *(undefined2 *)puVar11 = 1;
        if (*(MMsgTy **)(iVar9 + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(*(MMsgTy **)(iVar9 + 0x2e6),(int)local_300);
        }
        if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),
                             (-(uint)(param_1[5] != 1) & 10) + 0x258e,'\0',(undefined4 *)0x0,
                             (undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
      }
    }
    goto switchD_005a43f5_caseD_1;
  case 0x6155:
    if (pFVar7[0x1a5f] != (FSGSTy)0x4) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
      CursorClassTy::SetGCType
                (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
      CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
      pCVar23[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
    }
    if (param_1[5] == 0) goto LAB_005a67e1;
    if (6 < (uint)param_1[5]) goto switchD_005a43f5_caseD_1;
    puVar11 = local_354;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = 0x10001;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 1;
    if (*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6),(int)local_354);
    }
    pMVar19 = *(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6);
    if (pMVar19 == (MMsgTy *)0x0) goto switchD_005a43f5_caseD_1;
    switch(param_1[5]) {
    case 2:
      UVar10 = 0x2597;
      break;
    case 3:
      UVar10 = 0x2596;
      break;
    case 4:
      UVar10 = 0x25c3;
      break;
    case 5:
      UVar10 = 0x25c4;
      break;
    case 6:
      UVar10 = 0x25c5;
      break;
    default:
      UVar10 = 0x258f;
    }
    break;
  case 0x6156:
    if (pFVar7[0x1a5f] != (FSGSTy)0x6) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(pCVar23 + 0x494) = 0xffff;
      CursorClassTy::SetGCType
                (pCVar23,0,*(undefined4 *)(pCVar23 + 0xc5),*(undefined4 *)(pCVar23 + 0xc9));
      CursorClassTy::DrawSprite(pCVar23,*(int *)(pCVar23 + 0xc5),*(int *)(pCVar23 + 0xc9));
      pCVar23[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar23 + 0x4df) = 0xffffffff;
    }
    UVar10 = 0;
    if (param_1[5] == 0xd) {
      UVar10 = 0x2590;
    }
    else if (param_1[5] == 0xf) {
      UVar10 = 0x2591;
    }
    if ((UVar10 == 0) ||
       (pMVar19 = *(MMsgTy **)(*(int *)(pFVar7 + 0x1a5b) + 0x2e6), pMVar19 == (MMsgTy *)0x0))
    goto switchD_005a43f5_caseD_1;
    break;
  default:
    goto switchD_005a43f5_caseD_1;
  }
  MMsgTy::SetMessage(pMVar19,UVar10,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
switchD_005a43f5_caseD_1:
  g_currentExceptionFrame = local_21c.previous;
  uVar8 = thunk_FUN_005b6430();
  return uVar8;
}


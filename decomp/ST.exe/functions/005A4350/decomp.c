
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
  undefined4 uVar7;
  int iVar8;
  UINT UVar9;
  undefined4 *puVar10;
  uint *puVar11;
  char *pcVar12;
  DWORD DVar13;
  undefined4 uVar14;
  ulong uVar15;
  HINSTANCE pHVar16;
  undefined3 extraout_var;
  uint uVar17;
  MMsgTy *pMVar18;
  byte bVar19;
  FSGSTy *this_01;
  undefined4 unaff_ESI;
  uint uVar20;
  byte *pbVar21;
  CursorClassTy *pCVar22;
  FSGSTy *pFVar23;
  byte *pbVar24;
  void *unaff_EDI;
  char *pcVar25;
  uint *puVar26;
  FSGSTy *pFVar27;
  char *pcVar28;
  bool bVar29;
  BITMAPINFO *pBVar30;
  int iVar31;
  DWORD DVar32;
  int iVar33;
  int iVar34;
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
  uVar7 = FUN_006e51b0(*(int *)(this + 0x10));
  pcVar25 = (char *)0x0;
  *(undefined4 *)(this + 0x61) = uVar7;
  local_21c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_21c;
  iVar8 = Library::MSVCRT::__setjmp3(local_21c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_20;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_21c.previous;
    iVar31 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048,0,iVar8,
                                &DAT_007a4ccc,s_FSGSTy__GetMessage_007cc5d8);
    if (iVar31 != 0) {
      pcVar6 = (code *)swi(3);
      uVar7 = (*pcVar6)();
      return uVar7;
    }
    RaiseInternalException(iVar8,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_20,(int)param_1);
  pCVar22 = DAT_00802a30;
  uVar20 = param_1[4];
  if (0x6949 < uVar20) {
    if (uVar20 < 0x6980) {
      if (uVar20 == 0x697f) {
        iVar8 = param_1[7];
        local_60 = *(int *)(iVar8 + 0x24) + -0xb4;
        local_58 = *(int *)(iVar8 + 0x2c);
        local_54 = *(int *)(iVar8 + 0x30);
        iVar31 = *(int *)(iVar8 + 0x28) -
                 ((-(uint)(this_01[0x1abb] != (FSGSTy)0x0) & 0xffffffb4) + 0xaa);
        local_5c = iVar31;
        FUN_006b4170(*(int *)(this_01 + 0x1ac0),0,*(int *)(iVar8 + 0x24) + -0xb5,iVar31,local_58 + 2
                     ,local_54,0xff);
        ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1ac0),0,local_60,
                         iVar31,local_58,local_54);
        if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
          ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),*(uint **)param_1[5],0,-1,0);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar8 = (uint)*(ushort *)(param_1 + 6) + local_60;
          FUN_006b5b10(*(int *)(this_01 + 0x1ac0),0,iVar8,iVar31 + 1,iVar8,local_54 + -2 + iVar31,9,
                       0xd);
        }
        FUN_006b35d0(DAT_008075a8,*(uint *)(this_01 + 0x1abc));
        goto switchD_005a43f5_caseD_1;
      }
      switch(uVar20) {
      case 0x694a:
      case 0x694e:
        (**(code **)(*(int *)this_01 + 8))();
        this_01[0x1a61] = (FSGSTy)((param_1[4] != 0x694a) + '\a');
        iVar8 = *(int *)(this_01 + 0x1a5b);
        if (*(int *)(iVar8 + 0x2e6) == 0) break;
        puVar10 = local_31c;
        for (iVar31 = 6; iVar31 != 0; iVar31 = iVar31 + -1) {
          *puVar10 = 0xffffffff;
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)local_31c);
        puVar10 = &local_a0;
        goto LAB_005a7f3b;
      case 0x694b:
        if (this_01[0x1a5f] == (FSGSTy)0x2) {
          (**(code **)(*(int *)this_01 + 8))();
          this_01[0x1a61] = (FSGSTy)0x5;
          if (*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != 0) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_90 = 0x10101;
            thunk_FUN_005b8f40(*(void **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),&local_90);
          }
        }
        else if (this_01[0x1a5f] == (FSGSTy)0x5) {
          if (0 < *(int *)(*(int *)(this_01 + 0x1af4) + 8)) {
            pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1af4) + 0x14);
          }
          iVar8 = -1;
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar25 + 1;
          } while (cVar1 != '\0');
          if (iVar8 == -2) {
            if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
              MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0x2592,'\0',
                                 (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          else {
            puVar10 = local_1d8;
            for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar10 = 0xffffffff;
              puVar10 = puVar10 + 1;
            }
            *(undefined2 *)puVar10 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
              MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),(int)local_1d8);
            }
            pCVar22 = DAT_00802a30;
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
              uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
              DAT_00802a30[0x493] = (CursorClassTy)0x5;
              *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
              CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
              CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
              pCVar22[0xd2] = (CursorClassTy)0x0;
              *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
            }
            if (*(int *)(*(int *)(this_01 + 0x1af4) + 8) < 1) {
              pcVar25 = (char *)0x0;
            }
            else {
              pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1af4) + 0x14);
            }
            if (*(int *)(*(int *)(this_01 + 0x1aec) + 8) < 1) {
              pcVar12 = (char *)0x0;
            }
            else {
              pcVar12 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1aec) + 0x14);
            }
            if (*(int *)(*(int *)(this_01 + 0x1ae8) + 8) < 1) {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,(char *)0x0,pcVar12,pcVar25);
            }
            else {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,
                         (char *)**(undefined4 **)(*(int *)(this_01 + 0x1ae8) + 0x14),pcVar12,
                         pcVar25);
            }
          }
        }
        break;
      case 0x694c:
        if ((*(LPCSTR *)(this_01 + 0x1aab) != (LPCSTR)0x0) &&
           (pHVar16 = ShellExecuteA(DAT_00856d78,&DAT_007cc624,*(LPCSTR *)(this_01 + 0x1aab),
                                    (LPCSTR)0x0,(LPCSTR)0x0,1), 0x20 < (int)pHVar16)) {
          CFsgsConnection::BannerClick
                    ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(this_01 + 0x1aaf));
        }
        break;
      case 0x6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(this_01[0x1a5f]) {
        case (FSGSTy)0x6:
          local_30 = 0x10000;
        case (FSGSTy)0x3:
          local_30 = CONCAT31(local_30._1_3_,1);
        case (FSGSTy)0x5:
          local_30._0_2_ = CONCAT11(1,(undefined1)local_30);
        case (FSGSTy)0x4:
          local_2c = 0x10100;
          this_01[0x1a61] = (FSGSTy)0x2;
          break;
        case (FSGSTy)0x7:
        case (FSGSTy)0x8:
          local_30 = 0x100;
        case (FSGSTy)0x9:
          this_01[0x1a61] = (FSGSTy)0x6;
          break;
        case (FSGSTy)0xa:
          pbVar21 = *(byte **)(this_01 + 0x1b0c);
          if (pbVar21 != (byte *)0x0) {
            pbVar24 = &DAT_00807e1d;
            do {
              bVar19 = *pbVar21;
              bVar29 = bVar19 < *pbVar24;
              if (bVar19 != *pbVar24) {
LAB_005a63e7:
                iVar8 = (1 - (uint)bVar29) - (uint)(bVar29 != 0);
                goto LAB_005a63ec;
              }
              if (bVar19 == 0) break;
              bVar19 = pbVar21[1];
              bVar29 = bVar19 < pbVar24[1];
              if (bVar19 != pbVar24[1]) goto LAB_005a63e7;
              pbVar21 = pbVar21 + 2;
              pbVar24 = pbVar24 + 2;
            } while (bVar19 != 0);
            iVar8 = 0;
LAB_005a63ec:
            if (iVar8 == 0) {
              if (*(int *)(*(int *)(this_01 + 0x1b00) + 8) < 1) {
                pcVar25 = (char *)0x0;
              }
              else {
                pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1b00) + 0x14);
              }
              if (*(int *)(*(int *)(this_01 + 0x1afc) + 8) < 1) {
                pcVar12 = (char *)0x0;
              }
              else {
                pcVar12 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1afc) + 0x14);
              }
              if (*(int *)(*(int *)(this_01 + 0x1af8) + 8) < 1) {
                pbVar21 = (byte *)0x0;
              }
              else {
                pbVar21 = (byte *)**(undefined4 **)(*(int *)(this_01 + 0x1af8) + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar21,pcVar12,pcVar25,*(int *)(this_01 + 0x1b04));
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
          this_01[0x1a61] = this_01[0x1ed2];
        }
        (**(code **)(*(int *)this_01 + 8))();
        iVar8 = *(int *)(this_01 + 0x1a5b);
        if (*(int *)(iVar8 + 0x2e6) != 0) {
          puVar10 = local_2e4;
          for (iVar31 = 6; iVar31 != 0; iVar31 = iVar31 + -1) {
            *puVar10 = 0xffffffff;
            puVar10 = puVar10 + 1;
          }
          *(undefined2 *)puVar10 = 0xffff;
          MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)local_2e4);
          thunk_FUN_005b8f40(*(void **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),&local_30);
        }
        break;
      case 0x6953:
        puVar10 = local_17c;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = 0xffffffff;
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if (*(int *)(*(int *)(this_01 + 0x1ae8) + 8) < 1) {
          pcVar25 = (char *)0x0;
        }
        else {
          pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1ae8) + 0x14);
        }
        Library::MSVCRT::_strncpy(&DAT_00807e1d,pcVar25,0x40);
        DAT_00807e5c = 0;
        if (*(int *)(*(int *)(this_01 + 0x1aec) + 8) < 1) {
          pcVar25 = (char *)0x0;
        }
        else {
          pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1aec) + 0x14);
        }
        uVar20 = 0xffffffff;
        do {
          pcVar12 = pcVar25;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar12 = pcVar25 + 1;
          cVar1 = *pcVar25;
          pcVar25 = pcVar12;
        } while (cVar1 != '\0');
        uVar20 = ~uVar20;
        pcVar25 = pcVar12 + -uVar20;
        pcVar12 = (char *)&DAT_00807e5d;
        for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar25;
          pcVar25 = pcVar25 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar12 = *pcVar25;
          pcVar25 = pcVar25 + 1;
          pcVar12 = pcVar12 + 1;
        }
        iVar8 = -1;
        pcVar25 = (char *)&DAT_00807e5d;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          cVar1 = *pcVar25;
          pcVar25 = pcVar25 + 1;
        } while (cVar1 != '\0');
        if (iVar8 == -2) {
          if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
            MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0x2592,'\0',
                               (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
          }
          break;
        }
        if (this_01[0x1a5f] != (FSGSTy)0x2) {
          if (this_01[0x1a5f] == (FSGSTy)0x4) {
            if (*(int *)(*(int *)(this_01 + 0x1af0) + 8) < 1) {
              pbVar21 = (byte *)0x0;
            }
            else {
              pbVar21 = (byte *)**(undefined4 **)(*(int *)(this_01 + 0x1af0) + 0x14);
            }
            pbVar24 = (byte *)&DAT_00807e5d;
            do {
              bVar19 = *pbVar24;
              bVar29 = bVar19 < *pbVar21;
              if (bVar19 != *pbVar21) {
LAB_005a6653:
                iVar8 = (1 - (uint)bVar29) - (uint)(bVar29 != 0);
                goto LAB_005a6658;
              }
              if (bVar19 == 0) break;
              bVar19 = pbVar24[1];
              bVar29 = bVar19 < pbVar21[1];
              if (bVar19 != pbVar21[1]) goto LAB_005a6653;
              pbVar24 = pbVar24 + 2;
              pbVar21 = pbVar21 + 2;
            } while (bVar19 != 0);
            iVar8 = 0;
LAB_005a6658:
            if (iVar8 == 0) {
              if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
                MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),(int)local_17c);
              }
              pCVar22 = DAT_00802a30;
              if (DAT_00802a30 != (CursorClassTy *)0x0) {
                uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
                uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
                DAT_00802a30[0x493] = (CursorClassTy)0x5;
                *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
                CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
                CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9))
                ;
                pCVar22[0xd2] = (CursorClassTy)0x0;
                *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
              }
              if (*(int *)(*(int *)(this_01 + 0x1b00) + 8) < 1) {
                pcVar25 = (char *)0x0;
              }
              else {
                pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1b00) + 0x14);
              }
              if (*(int *)(*(int *)(this_01 + 0x1afc) + 8) < 1) {
                pcVar12 = (char *)0x0;
              }
              else {
                pcVar12 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1afc) + 0x14);
              }
              if (*(int *)(*(int *)(this_01 + 0x1af8) + 8) < 1) {
                pbVar21 = (byte *)0x0;
              }
              else {
                pbVar21 = (byte *)**(undefined4 **)(*(int *)(this_01 + 0x1af8) + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar21,pcVar12,pcVar25,*(int *)(this_01 + 0x1b04));
              CFsgsConnection::CreateNewAccount
                        ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
            }
            else if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
              MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0x258a,'\0',
                                 (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          break;
        }
        if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),(int)local_17c);
        }
        pCVar22 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
          uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
          DAT_00802a30[0x493] = (CursorClassTy)0x5;
          *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
          CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
          CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
          pCVar22[0xd2] = (CursorClassTy)0x0;
          *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
        }
LAB_005a67e1:
        uVar15 = CFsgsConnection::Login
                           ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
        if (uVar15 == 0) {
          DVar13 = GetLastError();
          thunk_FUN_0055beb0(&DAT_00802a90,DVar13);
        }
        DAT_00802a9a = 0;
        break;
      case 0x6954:
        (**(code **)(*(int *)this_01 + 8))();
        this_01[0x1a61] = (FSGSTy)0x4;
        if (*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != 0) {
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_c0 = 0x10101;
          thunk_FUN_005b8f40(*(void **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),&local_c0);
        }
        break;
      case 0x6955:
        iVar8 = *(int *)(this_01 + 0x1ab7);
        iVar33 = 0;
        iVar31 = 0;
        if (iVar8 != 0) {
          if (param_1[5] == 0) {
            switch(this_01[0x1a5f]) {
            case (FSGSTy)0x2:
            case (FSGSTy)0x6:
            case (FSGSTy)0x7:
              goto switchD_005a6a92_caseD_2;
            case (FSGSTy)0x4:
              iVar31 = *(int *)(this_01 + 0x1ac4);
              if (iVar8 == iVar31) {
                iVar33 = iVar31;
                iVar31 = *(int *)(this_01 + 0x1ac8);
              }
              else if (iVar8 == *(int *)(this_01 + 0x1ac8)) {
                iVar33 = *(int *)(this_01 + 0x1ac8);
                iVar31 = *(int *)(this_01 + 0x1acc);
              }
              else if (iVar8 == *(int *)(this_01 + 0x1acc)) {
                iVar33 = *(int *)(this_01 + 0x1acc);
                iVar31 = *(int *)(this_01 + 0x1ad8);
              }
              else if (iVar8 == *(int *)(this_01 + 0x1ad8)) {
                iVar33 = *(int *)(this_01 + 0x1ad8);
                iVar31 = *(int *)(this_01 + 0x1adc);
              }
              else if (iVar8 == *(int *)(this_01 + 0x1adc)) {
                iVar33 = *(int *)(this_01 + 0x1adc);
                iVar31 = *(int *)(this_01 + 0x1ae0);
              }
              else {
                if (iVar8 != *(int *)(this_01 + 0x1ae0)) goto LAB_005a6cc4;
                iVar33 = *(int *)(this_01 + 0x1ae0);
                iVar31 = *(int *)(this_01 + 0x1ae4);
              }
              break;
            case (FSGSTy)0x5:
              iVar31 = *(int *)(this_01 + 0x1ac4);
              if (iVar8 == iVar31) {
                iVar33 = iVar31;
                iVar31 = *(int *)(this_01 + 0x1ac8);
              }
              else if (iVar8 == *(int *)(this_01 + 0x1ac8)) {
                iVar33 = *(int *)(this_01 + 0x1ac8);
                iVar31 = *(int *)(this_01 + 0x1ad4);
              }
              else if (iVar8 == *(int *)(this_01 + 0x1ad4)) {
                iVar33 = *(int *)(this_01 + 0x1ad4);
                iVar31 = *(int *)(this_01 + 0x1acc);
              }
              else {
                iVar33 = *(int *)(this_01 + 0x1acc);
              }
              break;
            case (FSGSTy)0xa:
              iVar31 = *(int *)(this_01 + 0x1ad8);
              if (iVar8 == iVar31) {
                iVar33 = iVar31;
                iVar31 = *(int *)(this_01 + 0x1adc);
              }
              else if (iVar8 == *(int *)(this_01 + 0x1adc)) {
                iVar33 = *(int *)(this_01 + 0x1adc);
                iVar31 = *(int *)(this_01 + 0x1ae0);
              }
              else if (iVar8 == *(int *)(this_01 + 0x1ae0)) {
                iVar33 = *(int *)(this_01 + 0x1ae0);
                iVar31 = *(int *)(this_01 + 0x1ae4);
              }
              else {
LAB_005a6cc4:
                iVar33 = *(int *)(this_01 + 0x1ae4);
              }
            }
          }
          else {
            switch(this_01[0x1a5f]) {
            case (FSGSTy)0x2:
            case (FSGSTy)0x6:
            case (FSGSTy)0x7:
switchD_005a6a92_caseD_2:
              iVar31 = *(int *)(this_01 + 0x1ac4);
              if (iVar8 == iVar31) {
                iVar33 = iVar31;
                iVar31 = *(int *)(this_01 + 0x1ac8);
              }
              else {
                iVar33 = *(int *)(this_01 + 0x1ac8);
              }
              break;
            case (FSGSTy)0x4:
              iVar31 = *(int *)(this_01 + 0x1ac4);
              if (iVar8 == iVar31) {
                iVar33 = iVar31;
                iVar31 = *(int *)(this_01 + 0x1ae4);
              }
              else {
                iVar34 = *(int *)(this_01 + 0x1ac8);
                iVar33 = iVar34;
                if (((iVar8 != iVar34) &&
                    (iVar4 = *(int *)(this_01 + 0x1acc), iVar33 = iVar4, iVar31 = iVar34,
                    iVar8 != iVar4)) &&
                   (iVar34 = *(int *)(this_01 + 0x1ad8), iVar33 = iVar34, iVar31 = iVar4,
                   iVar8 != iVar34)) {
                  iVar4 = *(int *)(this_01 + 0x1adc);
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case (FSGSTy)0x5:
              iVar31 = *(int *)(this_01 + 0x1ac4);
              if (iVar8 == iVar31) {
                iVar33 = iVar31;
                iVar31 = *(int *)(this_01 + 0x1acc);
              }
              else {
                iVar34 = *(int *)(this_01 + 0x1ac8);
                iVar33 = iVar34;
                if ((iVar8 != iVar34) &&
                   (iVar4 = *(int *)(this_01 + 0x1ad4), iVar33 = iVar4, iVar31 = iVar34,
                   iVar8 != iVar4)) {
                  iVar33 = *(int *)(this_01 + 0x1acc);
                  iVar31 = iVar4;
                }
              }
              break;
            case (FSGSTy)0xa:
              iVar34 = *(int *)(this_01 + 0x1ad8);
              if (iVar8 == iVar34) {
                iVar33 = iVar34;
                iVar31 = *(int *)(this_01 + 0x1ae4);
              }
              else {
                iVar4 = *(int *)(this_01 + 0x1adc);
joined_r0x005a6ba3:
                iVar33 = iVar4;
                iVar31 = iVar34;
                if ((iVar8 != iVar4) &&
                   (iVar34 = *(int *)(this_01 + 0x1ae0), iVar33 = iVar34, iVar31 = iVar4,
                   iVar8 != iVar34)) {
                  iVar33 = *(int *)(this_01 + 0x1ae4);
                  iVar31 = iVar34;
                }
              }
            }
          }
        }
        *(undefined4 *)(this_01 + 0x2d) = 0x20;
        if (iVar33 != 0) {
          *(undefined4 *)(this_01 + 0x31) = 0;
          FUN_006e6080(this_01,2,iVar33,(undefined4 *)(this_01 + 0x1d));
        }
        if (iVar31 != 0) {
          *(undefined4 *)(this_01 + 0x31) = 1;
          FUN_006e6080(this_01,2,iVar31,(undefined4 *)(this_01 + 0x1d));
        }
        break;
      case 0x6956:
        this_01[0x1ed2] = (FSGSTy)0x1;
LAB_005a6d57:
        DoLogon(this_01);
        break;
      case 0x6957:
        iVar8 = *(int *)(this_01 + 0x1ac0);
        uVar20 = *(uint *)(iVar8 + 0x14);
        if (uVar20 == 0) {
          uVar20 = ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar8 + 8);
        }
        puVar10 = (undefined4 *)FUN_006b4fa0(iVar8);
        for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar10 = 0xffffffff;
          puVar10 = puVar10 + 1;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined1 *)puVar10 = 0xff;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1ac0),0,0,0x16,0x1b8,
                         0xf0);
        iVar34 = -1;
        iVar33 = -1;
        uVar7 = 2;
        iVar31 = -1;
        iVar8 = -2;
        puVar11 = (uint *)FUN_006b0140(0x25be,DAT_00807618);
        ccFntTy::WrTxt(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar8,iVar31,uVar7,iVar33,iVar34);
        FUN_006b35d0(DAT_008075a8,*(uint *)(this_01 + 0x1abc));
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        wsprintfA(local_4b8,s_subtitans__s_007cc614,&DAT_0080f126);
        CFsgsConnection::DownloadFile
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pCVar22 = DAT_00802a30;
        if (DAT_00802a30 != (CursorClassTy *)0x0) {
          DAT_00802a30[0x493] = (CursorClassTy)0x5;
          *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
          CursorClassTy::SetGCType
                    (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
          CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
          pCVar22[0xd2] = (CursorClassTy)0x0;
          *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
        }
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (0x8160 < uVar20) {
      if (uVar20 < 0xc0a2) {
        if (uVar20 == 0xc0a1) {
          if ((*(int *)(this_01 + 0x1a6b) != 0) && (*(int *)(this_01 + 0x1b10) != 0)) {
            *(undefined4 *)(this_01 + 0x2d) = 0x20;
            *(undefined4 *)(this_01 + 0x31) = 1;
            FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1b10),(undefined4 *)(this_01 + 0x1d));
          }
          goto switchD_005a43f5_caseD_1;
        }
        switch(uVar20) {
        case 0x8161:
          if ((*(int *)(this_01 + 0x1e8e) == 0) || (*(int *)(this_01 + 0x1e9a) == 0)) break;
          pbVar21 = (byte *)param_1[7];
          local_1c = pbVar21;
          FUN_006b5f80(DAT_008075a8,*(int *)(pbVar21 + 0x24),
                       (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar21 + 0x28),
                       *(int *)(pbVar21 + 0x2c),0x11);
          if (this_01[0x1a5f] == (FSGSTy)0x6) {
            iVar8 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar21 + 0x28);
            thunk_FUN_00540620(*(int *)(pbVar21 + 0x24),iVar8,*(int *)(pbVar21 + 0x24) + -0x1e9,
                               iVar8 + -0x5e,*(uint *)(pbVar21 + 0x2c),(byte *)0x11,'\x01',
                               *(BITMAPINFO **)(this_01 + 0x1e9a));
            FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,*(int *)(pbVar21 + 0x2c),0x11,0xff);
            if (this_01[0x1a60] == (FSGSTy)0x0) {
              iVar8 = *(int *)(this_01 + 0x1ea6);
              if (iVar8 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar8 + 0xc)) {
                  local_8 = (uint *)(*(int *)(iVar8 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar8 + 0x1c));
                }
                else {
                  local_8 = (uint *)0x0;
                }
                if (local_8 != (uint *)0x0) {
                  ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0x23
                                   ,0,*(int *)(pbVar21 + 0x2c) + -0x46,0x11);
                  if (*(char *)((int)local_8 + 0x2d) == '\0') {
                    local_c = (byte *)thunk_FUN_0055c050(&DAT_00802a90,(int)local_8);
                    thunk_FUN_00540760(*(undefined4 **)(this_01 + 0x1e8e),3,1,'\x01',local_c);
                    if (local_c != (byte *)0x0) {
                      FUN_006ab060(&local_c);
                    }
                    ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),local_8,0,-1,
                                   (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2)
                    ;
                    if ((*(byte *)((int)local_8 + 0x25) & 0x10) != 0) {
                      iVar8 = FUN_0070b3a0(*(int *)(this_01 + 0x1a8b),3);
                      FUN_006b5440(*(int *)(this_01 + 0x1e8e),0,*(int *)(pbVar21 + 0x2c) + -0x1d,
                                   (0x11 - *(int *)(iVar8 + 8)) / 2,iVar8,0,0xff);
                    }
                  }
                  else {
                    pbVar24 = (byte *)FUN_0070b3a0(*(int *)(this_01 + 0x1a87),1);
                    thunk_FUN_00540760(*(undefined4 **)(this_01 + 0x1e8e),3,
                                       (0x11 - *(int *)(pbVar24 + 8)) / 2,'\x06',pbVar24);
                    iVar8 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                    iVar33 = -1;
                    iVar31 = 0;
                    puVar11 = (uint *)FUN_006b0140(0x2567,DAT_00807618);
                    ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar31,iVar33,iVar8);
                  }
                }
              }
            }
            else {
              iVar8 = *(int *)(this_01 + 0x1eaa);
              if (iVar8 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar8 + 0xc)) {
                  local_c = (byte *)(*(int *)(iVar8 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar8 + 0x1c));
                }
                else {
                  local_c = (byte *)0x0;
                }
                if (local_c != (byte *)0x0) {
                  uVar20 = *(uint *)(local_c + 0x60);
                  if ((uVar20 & 0x40) == 0) {
                    if ((uVar20 & 0x18) == 0) {
                      local_10 = (uint *)(CONCAT31(local_10._1_3_,-((uVar20 & 2) != 0)) & 0xffffff05
                                         );
                    }
                    else {
                      local_10 = (uint *)CONCAT31(local_10._1_3_,3);
                    }
                  }
                  else {
                    local_10 = (uint *)CONCAT31(local_10._1_3_,4);
                  }
                  pbVar24 = (byte *)FUN_0070b3a0(*(int *)(this_01 + 0x1a87),(uint)local_10 & 0xff);
                  thunk_FUN_00540760(*(undefined4 **)(this_01 + 0x1e8e),3,
                                     (0x11 - *(int *)(pbVar24 + 8)) / 2,'\x06',pbVar24);
                  ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0x23
                                   ,0,*(int *)(pbVar21 + 0x2c) + -0x46,0x11);
                  iVar8 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                  wsprintfA((LPSTR)&DAT_0080f33a,s___d_s___0_d__d__007cc5f8,iVar8,local_c,
                            *(undefined4 *)(local_c + 100),iVar8);
                  ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar8 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar21 + 0x28);
            thunk_FUN_00540620(*(int *)(pbVar21 + 0x24),iVar8,*(int *)(pbVar21 + 0x24) + -0x13,
                               iVar8 + -0x5e,*(uint *)(pbVar21 + 0x2c),(byte *)0x11,'\x01',
                               *(BITMAPINFO **)(this_01 + 0x1e9a));
            FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,*(int *)(pbVar21 + 0x2c),0x11,0xff);
            iVar8 = *(int *)(this_01 + 0x1ebe);
            if (iVar8 != 0) {
              if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar8 + 0xc)) {
                local_10 = (uint *)(*(int *)(iVar8 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                   *(int *)(iVar8 + 0x1c));
              }
              else {
                local_10 = (uint *)0x0;
              }
              if (local_10 != (uint *)0x0) {
                iVar8 = -1;
                puVar11 = local_10 + 0x13;
                do {
                  if (iVar8 == 0) break;
                  iVar8 = iVar8 + -1;
                  uVar20 = *puVar11;
                  puVar11 = (uint *)((int)puVar11 + 1);
                } while ((char)uVar20 != '\0');
                pbVar21 = (byte *)FUN_0070b3a0(*(int *)(this_01 + 0x1a87),-(uint)(iVar8 != -2) & 4);
                thunk_FUN_00540760(*(undefined4 **)(this_01 + 0x1e8e),3,
                                   (0x11 - *(int *)(pbVar21 + 8)) / 2,'\x06',pbVar21);
                ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0x23,0
                                 ,*(int *)(local_1c + 0x2c) + -0x40,0x11);
                ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),local_10 + 0xb,0,-1,
                               (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2);
                pbVar21 = local_1c;
              }
            }
          }
          DVar32 = *(DWORD *)(pbVar21 + 0x2c);
          pBVar30 = *(BITMAPINFO **)(this_01 + 0x1e8e);
          DVar13 = 0x11;
          iVar8 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar21 + 0x28);
          goto LAB_005a89f6;
        case 0x8162:
          if ((DAT_00802a30 != (CursorClassTy *)0x0) && (DAT_00802a30[0x493] == (CursorClassTy)0x5))
          break;
          if (this_01[0x1a60] != (FSGSTy)0x0) {
            iVar8 = *(int *)(this_01 + 0x1eaa);
            if (iVar8 != 0) {
              if ((uint)param_1[5] < *(uint *)(iVar8 + 0xc)) {
                pcVar25 = (char *)(*(int *)(iVar8 + 8) * param_1[5] + *(int *)(iVar8 + 0x1c));
              }
              else {
                pcVar25 = (char *)0x0;
              }
              if (pcVar25 != (char *)0x0) {
                if (DAT_00802a30 != (CursorClassTy *)0x0) {
                  uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
                  uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
                  DAT_00802a30[0x493] = (CursorClassTy)0x5;
                  *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
                  CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
                  CursorClassTy::DrawSprite
                            (pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
                  pCVar22[0xd2] = (CursorClassTy)0x0;
                  *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
                }
                iVar8 = -1;
                pcVar12 = pcVar25 + 0x40;
                do {
                  if (iVar8 == 0) break;
                  iVar8 = iVar8 + -1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar12 + 1;
                } while (cVar1 != '\0');
                if (iVar8 == -2) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar25,pcVar25 + 0x40,1);
                }
                else if (*(int *)(*(int *)(this_01 + 0x1aec) + 8) < 1) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar25,(char *)0x0,1);
                }
                else {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar25,
                                     (char *)**(undefined4 **)(*(int *)(this_01 + 0x1aec) + 0x14),1)
                  ;
                }
              }
            }
            break;
          }
          uVar20 = param_1[5];
          if (uVar20 == 0) {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
              uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
              DAT_00802a30[0x493] = (CursorClassTy)0x5;
              *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
              CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
              CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
              pCVar22[0xd2] = (CursorClassTy)0x0;
              *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
            }
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_01[0x1a60] = (FSGSTy)0x1;
            *(undefined4 *)(this_01 + 0x2d) = 0x20;
            *(undefined4 *)(this_01 + 0x31) = 0;
            if (*(int *)(this_01 + 0x1b18) != 0) {
              FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1b18),(undefined4 *)(this_01 + 0x1d));
            }
            *(undefined4 *)(this_01 + 0x31) = 1;
            if (*(int *)(this_01 + 0x1b24) != 0) {
              FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1b24),(undefined4 *)(this_01 + 0x1d));
            }
            break;
          }
          iVar8 = *(int *)(this_01 + 0x1ea6);
          if (uVar20 < *(uint *)(iVar8 + 0xc)) {
            pcVar25 = (char *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c));
          }
          else {
            pcVar25 = (char *)0x0;
          }
          if (pcVar25 == (char *)0x0) break;
          if (*(int *)(this_01 + 0x1b0c) != 0) {
            FUN_006ab060((undefined4 *)(this_01 + 0x1b0c));
          }
          uVar20 = 0xffffffff;
          pcVar12 = pcVar25;
          do {
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          pcVar12 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar20);
          uVar20 = 0xffffffff;
          *(char **)(this_01 + 0x1b0c) = pcVar12;
          do {
            pcVar28 = pcVar25;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar28 = pcVar25 + 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar28;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pcVar25 = pcVar28 + -uVar20;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar25;
            pcVar25 = pcVar25 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar12 = *pcVar25;
            pcVar25 = pcVar25 + 1;
            pcVar12 = pcVar12 + 1;
          }
          (**(code **)(*(int *)this_01 + 8))();
          this_01[0x1a61] = (FSGSTy)0xa;
          this_01[0x1ed2] = (FSGSTy)0x6;
          iVar8 = *(int *)(this_01 + 0x1a5b);
          if (*(int *)(iVar8 + 0x2e6) == 0) break;
          puVar10 = local_370;
          for (iVar31 = 6; iVar31 != 0; iVar31 = iVar31 + -1) {
            *puVar10 = 0xffffffff;
            puVar10 = puVar10 + 1;
          }
          *(undefined2 *)puVar10 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)local_370);
          puVar10 = &local_80;
          goto LAB_005a7f3b;
        case 0x8163:
          if (this_01[0x1a5f] == (FSGSTy)0x6) {
            if (this_01[0x1a60] == (FSGSTy)0x0) {
              local_1ac = 0x20;
              if (param_1[5] == 0) {
                local_1a8 = 0;
                if (*(int *)(this_01 + 0x1b18) != 0) {
                  FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1b18),local_1bc);
                }
              }
              else {
                local_1a8 = 1;
                if (*(int *)(this_01 + 0x1b18) != 0) {
                  FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1b18),local_1bc);
                }
              }
            }
          }
          else if (this_01[0x1a5f] == (FSGSTy)0x8) {
            iVar8 = *(int *)(this_01 + 0x1ebe);
            bVar29 = true;
            if (((iVar8 != 0) && ((uint)param_1[5] < *(uint *)(iVar8 + 0xc))) &&
               (iVar8 = *(int *)(iVar8 + 8) * param_1[5] + *(int *)(iVar8 + 0x1c), iVar8 != 0)) {
              bVar29 = false;
              Library::DKW::TBL::FUN_006b6020(*(int *)(this_01 + 0x1ae8),0,(char *)(iVar8 + 0x2c));
              *(undefined4 *)(this_01 + 0x2d) = 0x33;
              *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(this_01 + 0x1ae8);
              FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1ac4),
                           (undefined4 *)(this_01 + 0x1d));
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              thunk_FUN_00540620(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                                 *(BITMAPINFO **)(this_01 + 0x1e92));
              FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0,
                               0x15e,0x11);
              uVar7 = 2;
              iVar33 = -1;
              iVar31 = -1;
              puVar11 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar31,iVar33,uVar7);
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,10,0x11,
                               0x14a,0x11);
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),(uint *)(iVar8 + 0x1c),0,-1,0);
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0x22,
                               0x15e,0x11);
              uVar7 = 2;
              iVar33 = -1;
              iVar31 = -1;
              puVar11 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar31,iVar33,uVar7);
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,10,0x33,
                               0x14a,0x11);
              uVar7 = 0;
              iVar33 = -1;
              iVar31 = 0;
              if (*(char *)(iVar8 + 0x7c) == '\0') {
                puVar11 = (uint *)FUN_006b0140(0x2573,DAT_00807618);
              }
              else {
                puVar11 = (uint *)(iVar8 + 0x83);
              }
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar31,iVar33,uVar7);
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0x44,
                               0x15e,0x11);
              uVar7 = 2;
              iVar33 = -1;
              iVar31 = -1;
              puVar11 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar31,iVar33,uVar7);
              if (*(char *)(iVar8 + 0x7c) != '\0') {
                ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,10,
                                 0x55,0x14a,0x11);
                iVar31 = (int)*(char *)(iVar8 + 0x7e) << 1;
                wsprintfA((LPSTR)&DAT_0080f33a,s__dx_d_007cc60c,iVar31,iVar31);
                ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),&DAT_0080f33a,0,-1,0);
              }
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0x66,
                               0x15e,0x11);
              uVar7 = 2;
              iVar33 = -1;
              iVar31 = -1;
              puVar11 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar31,iVar33,uVar7);
              if (*(char *)(iVar8 + 0x7c) != '\0') {
                ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,10,
                                 0x77,0x14a,0x11);
                uVar7 = FUN_006b0140(0x2574,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(int)*(char *)(iVar8 + 0x7d),uVar7);
                ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),&DAT_0080f33a,0,-1,0);
              }
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,*(BITMAPINFO **)(this_01 + 0x1e8e),(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
            if (bVar29) {
              Library::DKW::TBL::FUN_006b6020(*(int *)(this_01 + 0x1ae8),0,&DAT_008016a0);
              *(undefined4 *)(this_01 + 0x2d) = 0x33;
              *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(this_01 + 0x1ae8);
              FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1ac4),
                           (undefined4 *)(this_01 + 0x1d));
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              thunk_FUN_00540620(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                                 *(BITMAPINFO **)(this_01 + 0x1e92));
              FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,0x15e,0x8c,0xff);
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0,
                               0x15e,0x11);
              uVar7 = 2;
              iVar31 = -1;
              iVar8 = -1;
              puVar11 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar8,iVar31,uVar7);
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0x22,
                               0x15e,0x11);
              uVar7 = 2;
              iVar31 = -1;
              iVar8 = -1;
              puVar11 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar8,iVar31,uVar7);
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0x44,
                               0x15e,0x11);
              uVar7 = 2;
              iVar31 = -1;
              iVar8 = -1;
              puVar11 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar8,iVar31,uVar7);
              ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0x66,
                               0x15e,0x11);
              uVar7 = 2;
              iVar31 = -1;
              iVar8 = -1;
              puVar11 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar8,iVar31,uVar7);
              Library::DKW::DDX::FUN_006b4680
                        (DAT_0080759c,0x1a4,0x7d,*(BITMAPINFO **)(this_01 + 0x1e8e),(uint *)0x0,0,0,
                         0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case 0x8164:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)(this_01 + 0x1cdb),(int)param_1,0);
          break;
        case 0x8165:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)(this_01 + 0x1d6c),(int)param_1,0);
          break;
        case 0x8166:
          uVar20 = *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
          *(uint *)(this_01 + 0x1e1d) = uVar20;
          if (*(uint *)(this_01 + 0x1e01) != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      (*(uint **)(this_01 + 0x1e45),*(uint *)(this_01 + 0x1e01),
                       *(uint *)(this_01 + 0x1e05),*(uint *)(this_01 + 0x1e19),uVar20);
          }
        }
        goto switchD_005a43f5_caseD_1;
      }
      switch(uVar20) {
      case 0xc0a2:
        if (*(int *)(*(int *)(this_01 + 0x1ea2) + 8) < 1) {
          pcVar25 = (char *)0x0;
        }
        else {
          pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1ea2) + 0x14);
        }
        bVar29 = thunk_FUN_00571810(pcVar25);
        if (CONCAT31(extraout_var,bVar29) == 0) {
          if (*(int *)(*(int *)(this_01 + 0x1ea2) + 8) < 1) {
            pcVar25 = (char *)0x0;
          }
          else {
            pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1ea2) + 0x14);
          }
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,pcVar25);
        }
        else {
          iVar31 = 0;
          iVar8 = *(int *)(*(int *)(this_01 + 0x1a5b) + 0x696);
          if (0 < *(int *)(iVar8 + 8)) {
            if (*(int *)(iVar8 + 8) < 1) {
              pcVar25 = (char *)0x0;
              goto LAB_005a8b12;
            }
            do {
              pcVar25 = *(char **)(*(int *)(iVar8 + 0x14) + iVar31 * 4);
LAB_005a8b12:
              AddMessage(this_01,8,&DAT_008016a0,pcVar25,8);
              iVar31 = iVar31 + 1;
              iVar8 = *(int *)(*(int *)(this_01 + 0x1a5b) + 0x696);
            } while (iVar31 < *(int *)(iVar8 + 8));
          }
        }
        Library::DKW::TBL::FUN_006b6020(*(int *)(this_01 + 0x1ea2),0,&DAT_008016a0);
        *(undefined4 *)(this_01 + 0x2d) = 0x33;
        *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(this_01 + 0x1ea2);
        goto LAB_005a8c85;
      case 0xc0a3:
        iVar8 = *(int *)(this_01 + 0x1ae8);
        iVar31 = *(int *)(iVar8 + 8);
joined_r0x005a8b8f:
        if (0 < iVar31) {
          pcVar25 = (char *)**(undefined4 **)(iVar8 + 0x14);
        }
        iVar33 = -1;
        do {
          if (iVar33 == 0) break;
          iVar33 = iVar33 + -1;
          cVar1 = *pcVar25;
          pcVar25 = pcVar25 + 1;
        } while (cVar1 != '\0');
        if (iVar33 != -2) {
          if (*(int *)(*(int *)(this_01 + 0x1aec) + 8) < 1) {
            pcVar25 = (char *)0x0;
          }
          else {
            pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1aec) + 0x14);
          }
          if (iVar31 < 1) {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)0x0,pcVar25,1);
          }
          else {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)**(undefined4 **)(iVar8 + 0x14),pcVar25,1);
          }
        }
        break;
      case 0xc0a4:
        if (this_01[0x1a60] != (FSGSTy)0x0) break;
        *(undefined4 *)(this_01 + 0x2d) = 0x26;
        FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),(undefined4 *)(this_01 + 0x1d));
        uVar20 = *(uint *)(this_01 + 0x31);
        if (uVar20 == 0) break;
        iVar8 = *(int *)(this_01 + 0x1ea6);
        if (uVar20 < *(uint *)(iVar8 + 0xc)) {
          iVar8 = *(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar8 = 0;
        }
        if (*(int *)(*(int *)(this_01 + 0x1ea2) + 8) < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = **(undefined4 **)(*(int *)(this_01 + 0x1ea2) + 0x14);
        }
        wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007cc5f0,uVar7,iVar8);
        Library::DKW::TBL::FUN_006b6020(*(int *)(this_01 + 0x1ea2),0,(char *)&DAT_0080f33a);
        *(undefined4 *)(this_01 + 0x2d) = 0x33;
        *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(this_01 + 0x1ea2);
LAB_005a8c85:
        FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b10),(undefined4 *)(this_01 + 0x1d));
        break;
      case 0xc0a5:
        DAT_00807360 = DAT_00807360 == '\0';
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (uVar20 == 0x8160) {
      param_1[6] = 0x11;
      goto switchD_005a43f5_caseD_1;
    }
    switch(uVar20) {
    case 0x6980:
      piVar5 = (int *)param_1[6];
      iVar8 = *piVar5;
      local_140 = iVar8 + -0xb4;
      iVar31 = piVar5[1];
      local_13c = iVar31 + -0xaa;
      local_138 = piVar5[2];
      local_134 = piVar5[3];
      FUN_006b4170(*(int *)(this_01 + 0x1ac0),0,iVar8 + -0xb3,iVar31 + -0xa9,local_138 + -2,
                   local_134 + -2,0xff);
      if (DAT_0080735f != '\0') {
        pbVar21 = (byte *)FUN_0070b3a0(*(int *)(this_01 + 0x1a83),0);
        thunk_FUN_00540760(*(undefined4 **)(this_01 + 0x1ac0),iVar8 + -0xb2,iVar31 + -0xa8,'\x06',
                           pbVar21);
      }
      break;
    case 0x6981:
      iVar8 = *(int *)(this_01 + 0x1a73);
      local_14 = (BITMAPINFO *)0x0;
      if (*(int *)(iVar8 + 0xa0) != 0) {
        FUN_00710790(iVar8);
      }
      iVar31 = param_1[7];
      iVar8 = *(int *)(iVar8 + 0x8a);
      local_50 = *(int *)(iVar31 + 0x24) + -0xb4;
      local_48 = *(int *)(iVar31 + 0x2c);
      local_44 = *(int *)(iVar31 + 0x30);
      local_4c = *(int *)(iVar31 + 0x28) -
                 ((-(uint)(this_01[0x1abb] != (FSGSTy)0x0) & 0xffffffb4) + 0xaa);
      FUN_006b4170(*(int *)(this_01 + 0x1ac0),0,*(int *)(iVar31 + 0x24) + -0xb5,local_4c,
                   local_48 + 2,local_44,0xff);
      iVar31 = param_1[5];
      if (iVar31 != 0) {
        local_8 = (uint *)0x0;
        do {
          if (*(uint **)(iVar31 + (int)local_8) == (uint *)0x0) break;
          iVar8 = FUN_007111c0(*(void **)(this_01 + 0x1a73),*(uint **)(iVar31 + (int)local_8));
          ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1ac0),0,local_50,
                           (int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                           local_4c,local_48,iVar8);
          ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),*(uint **)(param_1[5] + (int)local_8),0,-1,
                         0);
          local_14 = (BITMAPINFO *)
                     ((int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     *(int *)(*(int *)(this_01 + 0x1a73) + 0x5c) + iVar8);
          iVar31 = param_1[5];
          local_8 = local_8 + 1;
        } while (iVar31 != 0);
      }
      if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
        iVar33 = (uint)*(ushort *)((int)param_1 + 0x1a) + local_4c;
        iVar31 = (uint)*(ushort *)(param_1 + 6) + local_50;
        FUN_006b5b10(*(int *)(this_01 + 0x1ac0),0,iVar31,iVar33,iVar31,iVar33 + iVar8,9,0xd);
      }
      goto LAB_005a7c92;
    case 0x6982:
      if (((*(int *)(this_01 + 0x1e8e) != 0) && (*(int *)(this_01 + 0x1e92) != 0)) &&
         (local_8 = (uint *)param_1[7], local_8 != (uint *)0x0)) {
        if (this_01[0x1a5f] == (FSGSTy)0x3) {
          this_00 = *(ccFntTy **)(this_01 + 0x1a73);
          local_1c = *(byte **)(this_01 + 0x1b08);
        }
        else {
          this_00 = *(ccFntTy **)(this_01 + 0x1a77);
          local_1c = *(byte **)(this_01 + 0x1e9e);
        }
        FUN_006b5f80(DAT_008075a8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        thunk_FUN_00540620(local_8[9],local_8[10],6,1,local_8[0xb],(byte *)local_8[0xc],'\x01',
                           *(BITMAPINFO **)(this_01 + 0x1e92));
        FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,local_8[0xb],local_8[0xc],0xff);
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
              ccFntTy::SetSurf(this_00,*(int *)(this_01 + 0x1e8e),0,0,
                               ((int)local_14 - (uint)*(ushort *)((int)param_1 + 0x16)) *
                               *(int *)(this_00 + 0x8a),*(int *)(*(int *)(this_01 + 0x1e8e) + 4),
                               (int)local_c);
              ccFntTy::WrStr(this_00,local_10,0,-1,2);
            }
            local_14 = (BITMAPINFO *)((int)&(local_14->bmiHeader).biSize + 1);
          } while ((int)local_14 < (int)((uint)*(ushort *)((int)param_1 + 0x16) + local_8[0x78]));
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,local_8[9],local_8[10],*(BITMAPINFO **)(this_01 + 0x1e8e),
                   (uint *)0x0,0,0,local_8[0xb],local_8[0xc],0x10000ff);
      }
      break;
    case 0x6983:
      if ((*(int *)(this_01 + 0x1e8e) != 0) && (*(int *)(this_01 + 0x1e92) != 0)) {
        iVar8 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar8 + 0x24),*(int *)(iVar8 + 0x28),
                     *(int *)(iVar8 + 0x2c),*(int *)(iVar8 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar8 + 0x24),*(int *)(iVar8 + 0x28),6,0x15f,
                           *(uint *)(iVar8 + 0x2c),*(byte **)(iVar8 + 0x30),'\x01',
                           *(BITMAPINFO **)(this_01 + 0x1e92));
        FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,*(int *)(iVar8 + 0x2c),*(int *)(iVar8 + 0x30),
                     0xff);
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a77),*(int *)(this_01 + 0x1e8e),0,0,0,
                           *(int *)(*(int *)(this_01 + 0x1e8e) + 4),0x14);
          ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a77),*(uint **)param_1[5],0,-1,5);
        }
        uVar3 = *(ushort *)(param_1 + 6);
        if ((uVar3 != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          FUN_006b5b10(*(int *)(this_01 + 0x1e8e),0,(uint)uVar3,2,(uint)uVar3,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar8 + 0x24),*(int *)(iVar8 + 0x28),
                   *(BITMAPINFO **)(this_01 + 0x1e8e),(uint *)0x0,0,0,*(DWORD *)(iVar8 + 0x2c),
                   *(DWORD *)(iVar8 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((*(int *)(this_01 + 0x1e8e) == 0) || (*(int *)(this_01 + 0x1e92) == 0)) break;
      pbVar21 = (byte *)param_1[7];
      FUN_006b5f80(DAT_008075a8,*(int *)(pbVar21 + 0x24),*(int *)(pbVar21 + 0x28),
                   *(int *)(pbVar21 + 0x2c),*(int *)(pbVar21 + 0x30));
      thunk_FUN_00540620(*(int *)(pbVar21 + 0x24),*(int *)(pbVar21 + 0x28),
                         *(int *)(pbVar21 + 0x24) + -0x13,0x160,*(uint *)(pbVar21 + 0x2c),
                         *(byte **)(pbVar21 + 0x30),'\x01',*(BITMAPINFO **)(this_01 + 0x1e92));
      FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,*(int *)(pbVar21 + 0x2c),
                   *(int *)(pbVar21 + 0x30),0xff);
      ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0,
                       *(int *)(pbVar21 + 0x2c),*(int *)(pbVar21 + 0x30));
      if ((short)param_1[5] == 1) {
        iVar8 = 2;
      }
      else {
        iVar8 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar33 = -1;
      iVar31 = -1;
      puVar11 = (uint *)FUN_006b0140(0x2565,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar31,iVar33,iVar8);
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
      if (*(int *)(this_01 + 0x1e8e) == 0) break;
      local_14 = (BITMAPINFO *)0x0;
      switch(uVar20) {
      case 0x6985:
      case 0x6986:
        local_14 = *(BITMAPINFO **)(this_01 + 0x1e9a);
        local_10 = (uint *)0x1e9;
        break;
      default:
        goto switchD_005a7593_caseD_6987;
      case 0x6989:
      case 0x698a:
      case 0x698d:
        local_14 = *(BITMAPINFO **)(this_01 + 0x1e92);
        local_10 = (uint *)0x199;
        break;
      case 0x698e:
      case 0x698f:
      case 0x6990:
      case 0x6991:
      case 0x6992:
        local_14 = *(BITMAPINFO **)(this_01 + 0x1e92);
        local_10 = (uint *)0x22;
      }
      local_1c = (byte *)0x5e;
switchD_005a7593_caseD_6987:
      if (local_14 == (BITMAPINFO *)0x0) break;
      local_c = (byte *)param_1[7];
      switch(uVar20 - 0x6985) {
      case 0:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case 8:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar20 = *(uint *)(this_01 + 0x1ec2);
        if (uVar20 < 0x401) {
          if (uVar20 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar20 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar20 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar20 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar20 == 0x502) {
          local_8 = (uint *)0x235d;
        }
        else {
LAB_005a7656:
          local_8 = (uint *)0x235c;
        }
        break;
      case 5:
        if (*(int *)(this_01 + 0x1ec6) == -1) {
          pcVar25 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar12 = pcVar25;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar12 = pcVar25 + 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar12;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pcVar25 = pcVar12 + -uVar20;
          pcVar12 = (char *)&DAT_0080f33a;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar25;
            pcVar25 = pcVar25 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar12 = *pcVar25;
            pcVar25 = pcVar25 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        else {
          if (*(uint *)(this_01 + 0x1eca) < *(uint *)(DAT_0080c502 + 0xc)) {
            pcVar25 = (char *)(*(int *)(DAT_0080c502 + 8) * *(uint *)(this_01 + 0x1eca) +
                              *(int *)(DAT_0080c502 + 0x1c));
          }
          else {
            pcVar25 = (char *)0x0;
          }
          if (pcVar25 == (char *)0x0) {
            pcVar25 = &DAT_008016a0;
          }
          uVar20 = 0xffffffff;
          do {
            pcVar12 = pcVar25;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar12 = pcVar25 + 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar12;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pcVar25 = pcVar12 + -uVar20;
          pcVar12 = (char *)&DAT_0080f33a;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar25;
            pcVar25 = pcVar25 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar12 = *pcVar25;
            pcVar25 = pcVar25 + 1;
            pcVar12 = pcVar12 + 1;
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
      pbVar21 = local_c;
      FUN_006b5f80(DAT_008075a8,*(int *)(local_c + 0x24),*(int *)(local_c + 0x28),
                   *(int *)(local_c + 0x2c),*(int *)(local_c + 0x30));
      thunk_FUN_00540620(*(int *)(pbVar21 + 0x24),*(int *)(pbVar21 + 0x28),
                         *(int *)(pbVar21 + 0x24) - (int)local_10,
                         *(int *)(pbVar21 + 0x28) - (int)local_1c,*(uint *)(pbVar21 + 0x2c),
                         *(byte **)(pbVar21 + 0x30),'\x01',local_14);
      FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,*(int *)(pbVar21 + 0x2c),
                   *(int *)(pbVar21 + 0x30),0xff);
      ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0,
                       *(int *)(pbVar21 + 0x2c),*(int *)(pbVar21 + 0x30));
      if ((short)param_1[5] == 1) {
        local_c = (byte *)0x2;
      }
      else {
        local_c = (byte *)((-(uint)((short)param_1[5] != 0) & 2) + 1);
      }
      if (param_1[4] == 0x698a) {
        puVar11 = &DAT_0080f33a;
      }
      else {
        puVar11 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      }
      ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,-1,-1,local_c);
      if ((short)param_1[5] == 0) {
        bVar19 = 0xd;
      }
      else {
        bVar19 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)(this_01 + 0x1e8e),0,0,0,*(undefined4 **)(pbVar21 + 0x2c),
                   *(int *)(pbVar21 + 0x30),4,bVar19);
      if ((short)param_1[5] == 0) {
        bVar19 = 0xd;
      }
      else {
        bVar19 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)(this_01 + 0x1e8e),0,2,2,(undefined4 *)(*(int *)(pbVar21 + 0x2c) + -4),
                   *(int *)(pbVar21 + 0x30) + -4,4,bVar19);
LAB_005a754e:
      DVar13 = *(DWORD *)(pbVar21 + 0x30);
      DVar32 = *(DWORD *)(pbVar21 + 0x2c);
      pBVar30 = *(BITMAPINFO **)(this_01 + 0x1e8e);
      iVar8 = *(int *)(pbVar21 + 0x28);
LAB_005a89f6:
      Library::DKW::DDX::FUN_006b4680
                (DAT_0080759c,*(int *)(pbVar21 + 0x24),iVar8,pBVar30,(uint *)0x0,0,0,DVar32,DVar13,
                 0x10000ff);
      break;
    case 0x6987:
      if ((*(int *)(this_01 + 0x1e8e) != 0) && (*(int *)(this_01 + 0x1e9a) != 0)) {
        iVar8 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar8 + 0x24),*(int *)(iVar8 + 0x28),
                     *(int *)(iVar8 + 0x2c),*(int *)(iVar8 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar8 + 0x24),*(int *)(iVar8 + 0x28),
                           *(int *)(iVar8 + 0x24) + -0x1e9,*(int *)(iVar8 + 0x28) + -0x5e,
                           *(uint *)(iVar8 + 0x2c),*(byte **)(iVar8 + 0x30),'\x01',
                           *(BITMAPINFO **)(this_01 + 0x1e9a));
        FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,*(int *)(iVar8 + 0x2c),*(int *)(iVar8 + 0x30),
                     0xff);
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0,
                           *(int *)(*(int *)(this_01 + 0x1e8e) + 4),0x19);
          ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar31 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(*(int *)(this_01 + 0x1e8e),0,iVar31,4,iVar31,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar8 + 0x24),*(int *)(iVar8 + 0x28),
                   *(BITMAPINFO **)(this_01 + 0x1e8e),(uint *)0x0,0,0,*(DWORD *)(iVar8 + 0x2c),
                   *(DWORD *)(iVar8 + 0x30),0x10000ff);
      }
      break;
    case 0x6988:
      if ((*(int *)(this_01 + 0x1e8e) != 0) && (*(int *)(this_01 + 0x1e92) != 0)) {
        iVar8 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar8 + 0x24),*(int *)(iVar8 + 0x28),
                     *(int *)(iVar8 + 0x2c),*(int *)(iVar8 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar8 + 0x24),*(int *)(iVar8 + 0x28),
                           *(int *)(iVar8 + 0x24) -
                           ((-(uint)(this_01[0x1a5f] != (FSGSTy)0x9) & 0x177) + 0x22),
                           *(int *)(iVar8 + 0x28) + -0x5e,*(uint *)(iVar8 + 0x2c),
                           *(byte **)(iVar8 + 0x30),'\x01',*(BITMAPINFO **)(this_01 + 0x1e92));
        FUN_006b4170(*(int *)(this_01 + 0x1e8e),0,0,0,*(int *)(iVar8 + 0x2c),*(int *)(iVar8 + 0x30),
                     0xff);
        if (param_1[5] != 0) {
          ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1e8e),0,0,0,
                           *(int *)(*(int *)(this_01 + 0x1e8e) + 4),0x19);
          ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar31 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(*(int *)(this_01 + 0x1e8e),0,iVar31,3,iVar31,0x11,9,0xd);
        }
        Library::DKW::DDX::FUN_006b4680
                  (DAT_0080759c,*(int *)(iVar8 + 0x24),*(int *)(iVar8 + 0x28),
                   *(BITMAPINFO **)(this_01 + 0x1e8e),(uint *)0x0,0,0,*(DWORD *)(iVar8 + 0x2c),
                   *(DWORD *)(iVar8 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar5 = (int *)param_1[6];
      iVar8 = *piVar5;
      iVar31 = iVar8 + -0xb4;
      local_3c = piVar5[1] + -0xaa;
      local_38 = (undefined4 *)piVar5[2];
      local_34 = piVar5[3];
      local_40 = iVar31;
      FUN_006b4170(*(int *)(this_01 + 0x1ac0),0,iVar31,local_3c,(int)local_38,local_34,0xff);
      if ((short)param_1[5] == 0) {
        bVar19 = 0xd;
      }
      else {
        bVar19 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)(this_01 + 0x1ac0),0,iVar31,local_3c,local_38,local_34,4,bVar19);
      if ((short)param_1[5] == 0) {
        bVar19 = 0xd;
      }
      else {
        bVar19 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)(this_01 + 0x1ac0),0,iVar8 + -0xb2,local_3c + 2,local_38 + -1,
                   local_34 + -4,4,bVar19);
      uVar20 = *(uint *)(this_01 + 0x1ec2);
      if (uVar20 < 0x502) {
        if (uVar20 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar20 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar20 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar20 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1ac0),0,iVar31,local_3c,
                       (int)local_38,local_34);
      if ((short)param_1[5] == 1) {
        iVar8 = 2;
      }
      else {
        iVar8 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar33 = -1;
      iVar31 = -1;
      puVar11 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar31,iVar33,iVar8);
LAB_005a7c92:
      FUN_006b35d0(DAT_008075a8,*(uint *)(this_01 + 0x1abc));
      break;
    case 0x698c:
      ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),param_1[6],0,0,0,0,0);
      iVar8 = *(int *)(this_01 + 0x1fb3);
      if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar8 + 0xc)) {
        puVar11 = (uint *)(*(int *)(iVar8 + 8) * (uint)*(ushort *)(param_1 + 5) +
                          *(int *)(iVar8 + 0x1c));
      }
      else {
        puVar11 = (uint *)0x0;
      }
      ccFntTy::WrStr(*(ccFntTy **)(this_01 + 0x1a73),puVar11,-1,-1,
                     3 - (uint)(*(short *)((int)param_1 + 0x16) != 1));
      if (*(short *)((int)param_1 + 0x16) == 1) {
        iVar8 = param_1[6];
        FUN_006b5ee0(iVar8,0,0,0,*(int *)(iVar8 + 4),*(int *)(iVar8 + 8),0xf,0xd);
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar20 == 0x6949) {
    (**(code **)(*(int *)this_01 + 8))();
    this_01[0x1a61] = (FSGSTy)0x9;
    iVar8 = *(int *)(this_01 + 0x1a5b);
    if (*(int *)(iVar8 + 0x2e6) == 0) goto switchD_005a43f5_caseD_1;
    puVar10 = local_2ac;
    for (iVar31 = 6; iVar31 != 0; iVar31 = iVar31 + -1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)local_2ac);
    puVar10 = &local_d0;
LAB_005a7f3b:
    thunk_FUN_005b8f40(*(void **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),puVar10);
    goto switchD_005a43f5_caseD_1;
  }
  if (0x63ff < uVar20) {
    if (uVar20 < 0x6907) {
      if (uVar20 == 0x6906) {
        if (DAT_00802a30[0x493] == (CursorClassTy)0x5) goto switchD_005a43f5_caseD_1;
        local_c = (byte *)param_1[7];
        *(undefined4 *)(this_01 + 0x1f43) = 0x6506;
        uVar7 = *(undefined4 *)(local_c + 8);
        *(undefined4 *)(this_01 + 0x1f63) = 0x698c;
        *(undefined4 *)(this_01 + 0x1f4b) = uVar7;
        *(undefined4 *)(*(int *)(this_01 + 0x1fb3) + 0xc) = 0;
        *(undefined4 *)(this_01 + 0x20bb) = 1;
        pcVar25 = (char *)FUN_006b0140(0x25b4,DAT_00807618);
        uVar20 = 0xffffffff;
        do {
          pcVar12 = pcVar25;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar12 = pcVar25 + 1;
          cVar1 = *pcVar25;
          pcVar25 = pcVar12;
        } while (cVar1 != '\0');
        uVar20 = ~uVar20;
        pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
        pFVar27 = this_01 + 0x1fb7;
        for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
          pFVar23 = pFVar23 + 4;
          pFVar27 = pFVar27 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pFVar27 = *pFVar23;
          pFVar23 = pFVar23 + 1;
          pFVar27 = pFVar27 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
        *(undefined4 *)(this_01 + 0x20bb) = 2;
        pcVar25 = (char *)FUN_006b0140(0x25b5,DAT_00807618);
        uVar20 = 0xffffffff;
        do {
          pcVar12 = pcVar25;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar12 = pcVar25 + 1;
          cVar1 = *pcVar25;
          pcVar25 = pcVar12;
        } while (cVar1 != '\0');
        uVar20 = ~uVar20;
        pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
        pFVar27 = this_01 + 0x1fb7;
        for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
          pFVar23 = pFVar23 + 4;
          pFVar27 = pFVar27 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pFVar27 = *pFVar23;
          pFVar23 = pFVar23 + 1;
          pFVar27 = pFVar27 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
        iVar8 = *(int *)(this_01 + 0x1fb3);
        *(undefined4 *)(this_01 + 0x1f7b) = *(undefined4 *)(iVar8 + 0xc);
        uVar20 = 0;
        *(undefined4 *)(this_01 + 0x1f73) = 0;
        if (*(uint *)(iVar8 + 0xc) != 0) {
          do {
            if (DAT_00803140 ==
                *(int *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c) + 0x104)) {
              *(uint *)(this_01 + 0x1f73) = uVar20;
              break;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(uint *)(iVar8 + 0xc));
        }
      }
      else {
        if (uVar20 < 0x6903) {
          if (uVar20 == 0x6902) {
            iVar8 = *(int *)(this_01 + 0x1ae8);
            iVar31 = *(int *)(iVar8 + 8);
            goto joined_r0x005a8b8f;
          }
          if (0x6900 < uVar20) {
            if ((uVar20 == 0x6901) && (this_01[0x1a60] == (FSGSTy)0x0)) {
              *(undefined4 *)(this_01 + 0x2d) = 0x26;
              pFVar23 = this_01 + 0x1d;
              FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),(undefined4 *)pFVar23);
              iVar8 = *(int *)(this_01 + 0x1ea6);
              if ((uint)*(ushort *)(this_01 + 0x31) < *(uint *)(iVar8 + 0xc)) {
                iVar8 = *(int *)(iVar8 + 8) * (uint)*(ushort *)(this_01 + 0x31) +
                        *(int *)(iVar8 + 0x1c);
              }
              else {
                iVar8 = 0;
              }
              if (iVar8 != 0) {
                *(undefined4 *)(this_01 + 0x2d) = 0x32;
                FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b10),(undefined4 *)pFVar23);
                iVar31 = *(int *)(this_01 + 0x31);
                if (iVar31 != 0) {
                  if (*(int *)(iVar31 + 8) < 1) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = **(undefined4 **)(iVar31 + 0x14);
                  }
                  uVar14 = FUN_006b0140(0x2568,DAT_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,s__s__s__s_007cc62c,uVar14,iVar8,uVar7);
                  CFsgsConnection::SendChatMessage
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  Library::DKW::TBL::FUN_006b6020(*(int *)(this_01 + 0x1ea2),0,&DAT_008016a0);
                  *(undefined4 *)(this_01 + 0x2d) = 0x33;
                  *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(this_01 + 0x1ea2);
                  FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b10),(undefined4 *)pFVar23);
                }
              }
            }
            goto switchD_005a43f5_caseD_1;
          }
          if (uVar20 == 0x6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            *(undefined4 *)(this_01 + 0x2d) = 5;
            FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1ad0),(undefined4 *)(this_01 + 0x1d))
            ;
            goto switchD_005a43f5_caseD_1;
          }
          if (uVar20 != 0x6506) {
            if (uVar20 == 0x68ff) {
              if (param_1[5] == 0) {
                if (*(int *)(this_01 + 0x1ab7) == *param_1) {
                  *(undefined4 *)(this_01 + 0x1ab7) = 0;
                }
              }
              else if (param_1[5] == 1) {
                *(int *)(this_01 + 0x1ab7) = *param_1;
              }
            }
            goto switchD_005a43f5_caseD_1;
          }
          iVar8 = *(int *)(this_01 + 0x1fb3);
          uVar20 = param_1[5];
          if (*(uint *)(iVar8 + 0xc) <= uVar20) goto switchD_005a43f5_caseD_1;
          if (this_01[0x1a5f] == (FSGSTy)0x9) {
            if (param_1[6] == *(int *)(this_01 + 0x1eb6)) {
              DAT_00803140 = *(ulong *)(*(int *)(iVar8 + 8) * uVar20 + 0x104 +
                                       *(int *)(iVar8 + 0x1c));
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar22 = DAT_00802a30;
joined_r0x005a55e5:
              DAT_00802a30 = pCVar22;
              if (pCVar22 == (CursorClassTy *)0x0) goto LAB_005a5634;
              pCVar22[0x493] = (CursorClassTy)0x5;
              *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
              CursorClassTy::SetGCType
                        (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
              iVar8 = *(int *)(pCVar22 + 0xc9);
              iVar31 = *(int *)(pCVar22 + 0xc5);
            }
            else {
              DAT_00803144 = *(int *)(*(int *)(iVar8 + 8) * uVar20 + 0x104 + *(int *)(iVar8 + 0x1c))
              ;
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pCVar22 = DAT_00802a30;
              if (DAT_00802a30 == (CursorClassTy *)0x0) goto LAB_005a5634;
              uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
              uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
              DAT_00802a30[0x493] = (CursorClassTy)0x5;
              *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
              CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
              iVar8 = *(int *)(pCVar22 + 0xc9);
              iVar31 = *(int *)(pCVar22 + 0xc5);
            }
LAB_005a561c:
            CursorClassTy::DrawSprite(pCVar22,iVar31,iVar8);
            pCVar22[0xd2] = (CursorClassTy)0x0;
            *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
          }
          else {
            if (param_1[6] != *(int *)(this_01 + 0x1eb6)) {
              iVar8 = *(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c);
              *(undefined4 *)(this_01 + 0x1ec6) = *(undefined4 *)(iVar8 + 0x104);
              *(undefined4 *)(this_01 + 0x1eca) = *(undefined4 *)(iVar8 + 0x108);
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(this_01 + 0x1ec2),(char *)0x0);
              DVar13 = timeGetTime();
              *(DWORD *)(this_01 + 0x1a63) = DVar13;
              pCVar22 = DAT_00802a30;
              goto joined_r0x005a55e5;
            }
            *(undefined4 *)(this_01 + 0x1ec2) =
                 *(undefined4 *)(*(int *)(iVar8 + 8) * uVar20 + 0x104 + *(int *)(iVar8 + 0x1c));
            if (this_01[0x1a5f] == (FSGSTy)0x8) {
              iVar8 = *(int *)(this_01 + 0x1ec2);
              puVar10 = local_24c;
              for (iVar31 = 8; iVar31 != 0; iVar31 = iVar31 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              *(undefined4 *)(this_01 + 0x1ec6) = 0xffffffff;
              local_238 = (uint)(iVar8 == 0x100);
              *(undefined4 *)(this_01 + 0x1eca) = 0;
              local_23c = 0x20;
              if (*(int *)(this_01 + 0x1eba) != 0) {
                FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1eba),local_24c);
              }
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(this_01 + 0x1ec2),(char *)0x0);
              DVar13 = timeGetTime();
              *(DWORD *)(this_01 + 0x1a63) = DVar13;
              pCVar22 = DAT_00802a30;
              if (DAT_00802a30 != (CursorClassTy *)0x0) {
                uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
                uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
                DAT_00802a30[0x493] = (CursorClassTy)0x5;
                *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
                CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
                iVar8 = *(int *)(pCVar22 + 0xc9);
                iVar31 = *(int *)(pCVar22 + 0xc5);
                goto LAB_005a561c;
              }
            }
          }
LAB_005a5634:
          *(undefined4 *)(this_01 + 0x2d) = 5;
          FUN_006e6080(this_01,2,param_1[6],(undefined4 *)(this_01 + 0x1d));
          goto switchD_005a43f5_caseD_1;
        }
        if (uVar20 == 0x6903) {
          if (DAT_00802a30 != (CursorClassTy *)0x0) {
            uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
            uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
            DAT_00802a30[0x493] = (CursorClassTy)0x5;
            *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
            CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
            CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
            pCVar22[0xd2] = (CursorClassTy)0x0;
            *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
          }
          if (this_01[0x1a5f] == (FSGSTy)0x6) {
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            this_01[0x1a60] = (FSGSTy)0x1;
          }
          if (this_01[0x1a5f] == (FSGSTy)0x8) {
            CFsgsConnection::RequestGameList
                      ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(this_01 + 0x1ec2),(char *)0x0);
            DVar13 = timeGetTime();
            *(DWORD *)(this_01 + 0x1a63) = DVar13;
          }
          goto switchD_005a43f5_caseD_1;
        }
        if (uVar20 == 0x6904) {
          local_c = (byte *)param_1[7];
          *(undefined4 *)(this_01 + 0x1f43) = 0x6506;
          uVar7 = *(undefined4 *)(local_c + 8);
          *(undefined4 *)(this_01 + 0x1f63) = 0x698c;
          *(undefined4 *)(this_01 + 0x1f4b) = uVar7;
          *(undefined4 *)(*(int *)(this_01 + 0x1fb3) + 0xc) = 0;
          if (this_01[0x1a5f] == (FSGSTy)0x8) {
            *(undefined4 *)(this_01 + 0x20bb) = 0;
            pcVar25 = (char *)FUN_006b0140(0x235c,DAT_00807618);
            uVar20 = 0xffffffff;
            do {
              pcVar12 = pcVar25;
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              pcVar12 = pcVar25 + 1;
              cVar1 = *pcVar25;
              pcVar25 = pcVar12;
            } while (cVar1 != '\0');
            uVar20 = ~uVar20;
            pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
            pFVar27 = this_01 + 0x1fb7;
            for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
              pFVar23 = pFVar23 + 4;
              pFVar27 = pFVar27 + 4;
            }
            for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
              *pFVar27 = *pFVar23;
              pFVar23 = pFVar23 + 1;
              pFVar27 = pFVar27 + 1;
            }
            Library::DKW::TBL::FUN_006ae1c0
                      (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
          }
          *(undefined4 *)(this_01 + 0x20bb) = 0x100;
          pcVar25 = (char *)FUN_006b0140(0x2341,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar12 = pcVar25;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar12 = pcVar25 + 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar12;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
          pFVar27 = this_01 + 0x1fb7;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
            pFVar23 = pFVar23 + 4;
            pFVar27 = pFVar27 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pFVar27 = *pFVar23;
            pFVar23 = pFVar23 + 1;
            pFVar27 = pFVar27 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
          *(undefined4 *)(this_01 + 0x20bb) = 0x501;
          pcVar25 = (char *)FUN_006b0140(0x2342,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar12 = pcVar25;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar12 = pcVar25 + 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar12;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
          pFVar27 = this_01 + 0x1fb7;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
            pFVar23 = pFVar23 + 4;
            pFVar27 = pFVar27 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pFVar27 = *pFVar23;
            pFVar23 = pFVar23 + 1;
            pFVar27 = pFVar27 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
          *(undefined4 *)(this_01 + 0x20bb) = 0x200;
          pcVar25 = (char *)FUN_006b0140(0x235a,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar12 = pcVar25;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar12 = pcVar25 + 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar12;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
          pFVar27 = this_01 + 0x1fb7;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
            pFVar23 = pFVar23 + 4;
            pFVar27 = pFVar27 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pFVar27 = *pFVar23;
            pFVar23 = pFVar23 + 1;
            pFVar27 = pFVar27 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
          *(undefined4 *)(this_01 + 0x20bb) = 0x400;
          pcVar25 = (char *)FUN_006b0140(0x235b,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar12 = pcVar25;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar12 = pcVar25 + 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar12;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
          pFVar27 = this_01 + 0x1fb7;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
            pFVar23 = pFVar23 + 4;
            pFVar27 = pFVar27 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pFVar27 = *pFVar23;
            pFVar23 = pFVar23 + 1;
            pFVar27 = pFVar27 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
          *(undefined4 *)(this_01 + 0x20bb) = 0x502;
          pcVar25 = (char *)FUN_006b0140(0x235d,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar12 = pcVar25;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar12 = pcVar25 + 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar12;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
          pFVar27 = this_01 + 0x1fb7;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
            pFVar23 = pFVar23 + 4;
            pFVar27 = pFVar27 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pFVar27 = *pFVar23;
            pFVar23 = pFVar23 + 1;
            pFVar27 = pFVar27 + 1;
          }
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
          iVar8 = *(int *)(this_01 + 0x1fb3);
          *(undefined4 *)(this_01 + 0x1f7b) = *(undefined4 *)(iVar8 + 0xc);
          uVar20 = 0;
          *(undefined4 *)(this_01 + 0x1f73) = 0;
          if (*(uint *)(iVar8 + 0xc) != 0) {
            do {
              if (*(int *)(this_01 + 0x1ec2) ==
                  *(int *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c) + 0x104)) {
                *(uint *)(this_01 + 0x1f73) = uVar20;
                break;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < *(uint *)(iVar8 + 0xc));
          }
        }
        else {
          if (uVar20 != 0x6905) goto switchD_005a43f5_caseD_1;
          local_c = (byte *)param_1[7];
          *(undefined4 *)(this_01 + 0x1f43) = 0x6506;
          uVar7 = *(undefined4 *)(local_c + 8);
          *(undefined4 *)(this_01 + 0x1f63) = 0x698c;
          *(undefined4 *)(this_01 + 0x1f4b) = uVar7;
          *(undefined4 *)(*(int *)(this_01 + 0x1fb3) + 0xc) = 0;
          *(undefined4 *)(this_01 + 0x20bb) = 0xffffffff;
          pcVar25 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar12 = pcVar25;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar12 = pcVar25 + 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar12;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
          pFVar27 = this_01 + 0x1fb7;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
            pFVar23 = pFVar23 + 4;
            pFVar27 = pFVar27 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pFVar27 = *pFVar23;
            pFVar23 = pFVar23 + 1;
            pFVar27 = pFVar27 + 1;
          }
          *(undefined4 *)(this_01 + 0x20bf) = 0;
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
          local_8 = (uint *)0x0;
          if (*(int *)(DAT_0080c502 + 0xc) != 0) {
            iVar8 = DAT_0080c502;
            if (*(int *)(DAT_0080c502 + 0xc) == 0) {
              pcVar25 = (char *)0x0;
              goto LAB_005a5859;
            }
            do {
              pcVar25 = (char *)(*(int *)(iVar8 + 8) * (int)local_8 + *(int *)(iVar8 + 0x1c));
LAB_005a5859:
              if (pcVar25 != (char *)0x0) {
                *(undefined4 *)(this_01 + 0x20bb) = *(undefined4 *)(pcVar25 + 0x90);
                uVar20 = 0xffffffff;
                do {
                  pcVar12 = pcVar25;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar12 = pcVar25 + 1;
                  cVar1 = *pcVar25;
                  pcVar25 = pcVar12;
                } while (cVar1 != '\0');
                uVar20 = ~uVar20;
                pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
                pFVar27 = this_01 + 0x1fb7;
                for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
                  pFVar23 = pFVar23 + 4;
                  pFVar27 = pFVar27 + 4;
                }
                for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pFVar27 = *pFVar23;
                  pFVar23 = pFVar23 + 1;
                  pFVar27 = pFVar27 + 1;
                }
                *(uint **)(this_01 + 0x20bf) = local_8;
                Library::DKW::TBL::FUN_006ae1c0
                          (*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7));
                iVar8 = DAT_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < *(uint **)(iVar8 + 0xc));
          }
          iVar8 = *(int *)(this_01 + 0x1fb3);
          uVar20 = 0;
          uVar7 = *(undefined4 *)(iVar8 + 0xc);
          *(undefined4 *)(this_01 + 0x1f73) = 0;
          *(undefined4 *)(this_01 + 0x1f7b) = uVar7;
          if (*(uint *)(iVar8 + 0xc) != 0) {
            do {
              if (*(int *)(this_01 + 0x1ec6) ==
                  *(int *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c) + 0x104)) {
                *(uint *)(this_01 + 0x1f73) = uVar20;
                break;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < *(uint *)(iVar8 + 0xc));
          }
        }
      }
      iVar8 = *(int *)(this_01 + 0x1a73);
      *(undefined4 *)(this_01 + 0x1f97) = *(undefined4 *)(local_c + 0x24);
      *(int *)(this_01 + 0x1f9f) = *(int *)(local_c + 0x2c) + 10;
      *(int *)(this_01 + 0x1f9b) = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar31 = *(int *)(iVar8 + 0xa0);
joined_r0x005a5b89:
      if (iVar31 != 0) {
        FUN_00710790(iVar8);
      }
      *(undefined4 *)(this_01 + 0x1f77) = *(undefined4 *)(iVar8 + 0x8a);
      (**(code **)(**(int **)(this_01 + 0xc) + 8))(0x100ef,0,0,this_01 + 0x1f33,0);
      goto switchD_005a43f5_caseD_1;
    }
    switch(uVar20) {
    case 0x6907:
      if (DAT_00802a30[0x493] == (CursorClassTy)0x5) break;
      local_c = (byte *)param_1[7];
      *(undefined4 *)(this_01 + 0x1f43) = 0x6506;
      uVar7 = *(undefined4 *)(local_c + 8);
      *(undefined4 *)(this_01 + 0x1f63) = 0x698c;
      *(undefined4 *)(this_01 + 0x1f4b) = uVar7;
      *(undefined4 *)(*(int *)(this_01 + 0x1fb3) + 0xc) = 0;
      *(undefined4 *)(this_01 + 0x20bb) = 0;
      pcVar25 = (char *)FUN_006b0140(0x25bf,DAT_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar12 = pcVar25;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar12 = pcVar25 + 1;
        cVar1 = *pcVar25;
        pcVar25 = pcVar12;
      } while (cVar1 != '\0');
      uVar20 = ~uVar20;
      pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
      pFVar27 = this_01 + 0x1fb7;
      for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
        pFVar23 = pFVar23 + 4;
        pFVar27 = pFVar27 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pFVar27 = *pFVar23;
        pFVar23 = pFVar23 + 1;
        pFVar27 = pFVar27 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7))
      ;
      *(undefined4 *)(this_01 + 0x20bb) = 1;
      pcVar25 = (char *)FUN_006b0140(0x25c0,DAT_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar12 = pcVar25;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar12 = pcVar25 + 1;
        cVar1 = *pcVar25;
        pcVar25 = pcVar12;
      } while (cVar1 != '\0');
      uVar20 = ~uVar20;
      pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
      pFVar27 = this_01 + 0x1fb7;
      for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
        pFVar23 = pFVar23 + 4;
        pFVar27 = pFVar27 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pFVar27 = *pFVar23;
        pFVar23 = pFVar23 + 1;
        pFVar27 = pFVar27 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7))
      ;
      *(undefined4 *)(this_01 + 0x20bb) = 2;
      pcVar25 = (char *)FUN_006b0140(0x25c1,DAT_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar12 = pcVar25;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar12 = pcVar25 + 1;
        cVar1 = *pcVar25;
        pcVar25 = pcVar12;
      } while (cVar1 != '\0');
      uVar20 = ~uVar20;
      pFVar23 = (FSGSTy *)(pcVar12 + -uVar20);
      pFVar27 = this_01 + 0x1fb7;
      for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pFVar27 = *(undefined4 *)pFVar23;
        pFVar23 = pFVar23 + 4;
        pFVar27 = pFVar27 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pFVar27 = *pFVar23;
        pFVar23 = pFVar23 + 1;
        pFVar27 = pFVar27 + 1;
      }
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this_01 + 0x1fb3),(undefined4 *)(this_01 + 0x1fb7))
      ;
      iVar8 = *(int *)(this_01 + 0x1fb3);
      *(undefined4 *)(this_01 + 0x1f7b) = *(undefined4 *)(iVar8 + 0xc);
      uVar20 = 0;
      *(undefined4 *)(this_01 + 0x1f73) = 0;
      if (*(uint *)(iVar8 + 0xc) != 0) {
        do {
          if (DAT_00803144 ==
              *(int *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c) + 0x104)) {
            *(uint *)(this_01 + 0x1f73) = uVar20;
            break;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < *(uint *)(iVar8 + 0xc));
      }
      iVar8 = *(int *)(this_01 + 0x1a73);
      *(undefined4 *)(this_01 + 0x1f97) = *(undefined4 *)(local_c + 0x24);
      *(int *)(this_01 + 0x1f9f) = *(int *)(local_c + 0x2c) + 10;
      *(int *)(this_01 + 0x1f9b) = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar31 = *(int *)(iVar8 + 0xa0);
      goto joined_r0x005a5b89;
    case 0x6908:
      if (DAT_00802a30[0x493] == (CursorClassTy)0x5) break;
      bVar29 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar29 = true;
      }
      if ((!bVar29) ||
         (CFsgsConnection::RequestLadderList
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pCVar22 = DAT_00802a30, DAT_00802a30 == (CursorClassTy *)0x0)) break;
      uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x5;
      *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
      iVar8 = *(int *)(pCVar22 + 0xc9);
      iVar31 = *(int *)(pCVar22 + 0xc5);
      goto LAB_005a52aa;
    case 0x6909:
      if ((DAT_00802a30[0x493] == (CursorClassTy)0x5) || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pCVar22 = DAT_00802a30;
      if (DAT_00802a30 == (CursorClassTy *)0x0) break;
      uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x5;
      *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
      iVar8 = *(int *)(pCVar22 + 0xc9);
      iVar31 = *(int *)(pCVar22 + 0xc5);
LAB_005a52aa:
      CursorClassTy::DrawSprite(pCVar22,iVar31,iVar8);
      pCVar22[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
      break;
    case 0x690a:
      if ((DAT_00802a30[0x493] == (CursorClassTy)0x5) ||
         (iVar8 = *(int *)(this_01 + 0x1ae8), iVar8 == 0)) break;
      if (0 < *(int *)(iVar8 + 8)) {
        pcVar25 = (char *)**(undefined4 **)(iVar8 + 0x14);
      }
      iVar31 = -1;
      do {
        if (iVar31 == 0) break;
        iVar31 = iVar31 + -1;
        cVar1 = *pcVar25;
        pcVar25 = pcVar25 + 1;
      } while (cVar1 != '\0');
      if (iVar31 == -2) break;
      if (*(int *)(iVar8 + 8) < 1) {
        pcVar25 = (char *)0x0;
      }
      else {
        pcVar25 = (char *)**(undefined4 **)(iVar8 + 0x14);
      }
      CFsgsConnection::RequestLadderListByName
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,pcVar25,0xf);
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
      bVar19 = (char)param_1[4] - 0x13;
      local_c = (byte *)CONCAT31(local_c._1_3_,bVar19);
      if ((*(uint *)(this_01 + 0x1ee3) <= (uint)bVar19) || (*(int *)(this_01 + 0x1edb) == 0)) break;
      iVar31 = (uint)bVar19 * 0x24;
      iVar8 = -1;
      pcVar25 = (char *)(iVar31 + 0x14 + *(int *)(this_01 + 0x1edb));
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar1 = *pcVar25;
        pcVar25 = pcVar25 + 1;
      } while (cVar1 != '\0');
      if (iVar8 == -2) break;
      if (*(int *)(this_01 + 0x1b0c) != 0) {
        FUN_006ab060((undefined4 *)(this_01 + 0x1b0c));
      }
      uVar20 = 0xffffffff;
      pcVar25 = (char *)(iVar31 + 0x14 + *(int *)(this_01 + 0x1edb));
      do {
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        cVar1 = *pcVar25;
        pcVar25 = pcVar25 + 1;
      } while (cVar1 != '\0');
      pcVar25 = (char *)Library::DKW::LIB::FUN_006aac70(~uVar20);
      *(char **)(this_01 + 0x1b0c) = pcVar25;
      uVar20 = 0xffffffff;
      pcVar12 = (char *)(iVar31 + 0x14 + *(int *)(this_01 + 0x1edb));
      do {
        pcVar28 = pcVar12;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar28 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar28;
      } while (cVar1 != '\0');
      uVar20 = ~uVar20;
      pcVar12 = pcVar28 + -uVar20;
      for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar25 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar25 = pcVar25 + 1;
      }
      (**(code **)(*(int *)this_01 + 8))();
      this_01[0x1a61] = (FSGSTy)0xa;
      this_01[0x1ed2] = (FSGSTy)0x9;
      iVar8 = *(int *)(this_01 + 0x1a5b);
      if (*(int *)(iVar8 + 0x2e6) == 0) break;
      puVar10 = local_338;
      for (iVar31 = 6; iVar31 != 0; iVar31 = iVar31 + -1) {
        *puVar10 = 0xffffffff;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)local_338);
      puVar10 = &local_70;
      goto LAB_005a7f3b;
    case 0x693f:
      thunk_FUN_0059b820(this_01);
      break;
    case 0x6940:
      thunk_FUN_0059be50(this_01);
      break;
    case 0x6941:
      thunk_FUN_005b6350(this_01,0x6105,0,1);
      this_01[0x1a61] = (FSGSTy)0x0;
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      (**(code **)(*(int *)this_01 + 8))();
      if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),1,0,1);
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar20 == 0x63ff) {
    FVar2 = this_01[0x1a5f];
    if (FVar2 == (FSGSTy)0x3) {
      (**(code **)(*(int *)this_01 + 8))();
      this_01[0x1a61] = (FSGSTy)0x4;
      if (*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != 0) {
        local_dc = 0;
        local_d8 = 0;
        local_e0 = 0x101;
        local_d4 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),&local_e0);
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (FVar2 == (FSGSTy)0x7) {
      if ((DAT_00802a30 != (CursorClassTy *)0x0) && (DAT_00802a30[0x493] == (CursorClassTy)0x5))
      goto switchD_005a43f5_caseD_1;
      thunk_FUN_005daa60();
      local_290.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_290;
      iVar8 = Library::MSVCRT::__setjmp3(local_290.jumpBuffer,0,unaff_EDI,unaff_ESI);
      this_01 = local_20;
      if (iVar8 == 0) {
        FUN_006b6150((uint)DAT_00807362);
        if (*(int *)(*(int *)(this_01 + 0x1ae8) + 8) < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = **(undefined4 **)(*(int *)(this_01 + 0x1ae8) + 0x14);
        }
        Library::DKW::DDX::FUN_006b69b0(&DAT_00811764,(int *)&DAT_007cd6f0,0,uVar7,0x20);
        g_currentExceptionFrame = local_290.previous;
      }
      else {
        g_currentExceptionFrame = local_290.previous;
        iVar8 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xc08,0,iVar8,
                                   &DAT_007a4ccc,s_FSGSTy__GetMessage_MESS_ID_MSGOK_007cc638);
        if (iVar8 != 0) {
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return uVar7;
        }
      }
      if (DAT_00811764 == 0) {
        if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0x2594,'\0',
                             (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
        goto switchD_005a43f5_caseD_1;
      }
      FUN_006b6160(local_6b8,DAT_00811764 + 0x18);
      local_698 = 0;
      if (*(int *)(*(int *)(this_01 + 0x1aec) + 8) < 1) {
        pcVar25 = (char *)0x0;
      }
      else {
        pcVar25 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1aec) + 0x14);
      }
      if (*(int *)(*(int *)(this_01 + 0x1ae8) + 8) < 1) {
        pcVar12 = (char *)0x0;
      }
      else {
        pcVar12 = (char *)**(undefined4 **)(*(int *)(this_01 + 0x1ae8) + 0x14);
      }
      CFsgsConnection::CreateGame
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)(this_01 + 0x1ec2),0x17e0,pcVar12,
                 pcVar25,local_6b8);
      pCVar22 = DAT_00802a30;
      if (DAT_00802a30 == (CursorClassTy *)0x0) goto switchD_005a43f5_caseD_1;
      uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x5;
      *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
      iVar8 = *(int *)(pCVar22 + 0xc9);
      iVar31 = *(int *)(pCVar22 + 0xc5);
      goto LAB_005a52aa;
    }
    if ((FVar2 != (FSGSTy)0x8) ||
       (((DAT_00802a30 != (CursorClassTy *)0x0 && (DAT_00802a30[0x493] == (CursorClassTy)0x5)) ||
        (*(int *)(this_01 + 0x1ebe) == 0)))) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0x493] = (CursorClassTy)0x5;
      *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
      CursorClassTy::SetGCType
                (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
      CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
      pCVar22[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
    }
    *(undefined4 *)(this_01 + 0x2d) = 0x26;
    FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),(undefined4 *)(this_01 + 0x1d));
    pCVar22 = DAT_00802a30;
    iVar8 = *(int *)(this_01 + 0x1ebe);
    if (*(uint *)(iVar8 + 0xc) <= *(uint *)(this_01 + 0x31)) goto switchD_005a43f5_caseD_1;
    local_15 = '\x01';
    local_8 = (uint *)(*(int *)(iVar8 + 8) * *(uint *)(this_01 + 0x31) + *(int *)(iVar8 + 0x1c));
    if (local_8 == (uint *)0x0) goto switchD_005a43f5_caseD_1;
    puVar11 = local_8 + 0x13;
    iVar8 = -1;
    puVar26 = puVar11;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      uVar20 = *puVar26;
      puVar26 = (uint *)((int)puVar26 + 1);
    } while ((byte)uVar20 != 0);
    if (iVar8 != -2) {
      if (*(int *)(*(int *)(this_01 + 0x1aec) + 8) < 1) {
        pbVar21 = (byte *)0x0;
      }
      else {
        pbVar21 = (byte *)**(undefined4 **)(*(int *)(this_01 + 0x1aec) + 0x14);
      }
      do {
        bVar19 = (byte)*puVar11;
        bVar29 = bVar19 < *pbVar21;
        if (bVar19 != *pbVar21) {
LAB_005a4eca:
          iVar8 = (1 - (uint)bVar29) - (uint)(bVar29 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar19 == 0) break;
        bVar19 = *(byte *)((int)puVar11 + 1);
        bVar29 = bVar19 < pbVar21[1];
        if (bVar19 != pbVar21[1]) goto LAB_005a4eca;
        puVar11 = (uint *)((int)puVar11 + 2);
        pbVar21 = pbVar21 + 2;
      } while (bVar19 != 0);
      iVar8 = 0;
LAB_005a4ecf:
      if (iVar8 != 0) {
        local_15 = '\0';
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
        CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
        pCVar22[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
        if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0x258b,'\0',
                             (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
      }
    }
    puVar11 = local_8;
    if (local_15 == '\0') goto switchD_005a43f5_caseD_1;
    thunk_FUN_005daa60();
    FUN_006b61a0(local_22c,(byte *)(puVar11 + 0x17));
    local_3b4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_3b4;
    iVar8 = Library::MSVCRT::__setjmp3(local_3b4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar11 = local_8;
    if (iVar8 == 0) {
      Library::DKW::DDX::FUN_006b6a50
                (&DAT_00811764,(undefined4 *)&DAT_007cd6f0,
                 (in_addr)((_union_1226 *)(local_8 + 4))->S_un_b,local_22c);
    }
    pCVar22 = DAT_00802a30;
    g_currentExceptionFrame = local_3b4.previous;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar14 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(pCVar22,0,uVar14,uVar7);
      CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
      pCVar22[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
    }
    this_01 = local_20;
    if (DAT_00811764 == 0) {
      if (*(MMsgTy **)(*(int *)(local_20 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(local_20 + 0x1a5b) + 0x2e6),0x2595,'\0',
                           (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
      }
      goto switchD_005a43f5_caseD_1;
    }
    CFsgsConnection::JoinGame((CFsgsConnection *)&DAT_00802a90,puVar11[1]);
    this_01 = local_20;
    DAT_0080877f = *(undefined4 *)(DAT_00811764 + 0x38);
    DAT_0080877e = 0;
    DAT_008087be = 0;
    *(MMObjTy *)(local_20 + 0x1a61) = (MMObjTy)0x0;
    DAT_008067a0 = 1;
    uVar20 = *(uint *)(local_20 + 0x1ec2);
    if (uVar20 < 0x502) {
      if (uVar20 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar20 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar20 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar20 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    thunk_FUN_005b6350(local_20,0x6109,0,1);
    (**(code **)(*(int *)this_01 + 8))();
    if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),1,0,1);
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar20 < 0x6152) {
    if (uVar20 != 0x6151) {
      if (uVar20 < 0x6106) {
        if (uVar20 == 0x6105) {
          *(undefined4 *)(this_01 + 0x45) = 0x200;
          *(undefined4 *)(this_01 + 0x49) = 0;
          *(int *)(this_01 + 0x4d) = param_1[4];
          *(int *)(this_01 + 0x51) = param_1[5];
          *(int *)(this_01 + 0x55) = param_1[6];
          thunk_FUN_005b66e0(this_01);
        }
        else {
          switch(uVar20) {
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
        switch(uVar20) {
        case 0x6109:
        case 0x611f:
          StartSystemTy::InitChat(*(StartSystemTy **)(this_01 + 0x1a5b));
          *(undefined4 *)(this_01 + 0x45) = 0x200;
          *(undefined4 *)(this_01 + 0x49) = 0;
          *(int *)(this_01 + 0x4d) = param_1[4];
          *(int *)(this_01 + 0x51) = param_1[5];
          *(int *)(this_01 + 0x55) = param_1[6];
          thunk_FUN_005b66e0(this_01);
          break;
        case 0x614f:
          if (DAT_00802a30 != (CursorClassTy *)0x0) {
            DAT_00802a30[0x493] = (CursorClassTy)0x1;
            *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
            CursorClassTy::SetGCType
                      (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
            CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
            pCVar22[0xd2] = (CursorClassTy)0x0;
            *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
          }
          iVar8 = *(int *)(this_01 + 0x1a5b);
          puVar10 = local_19c;
          for (iVar31 = 8; iVar31 != 0; iVar31 = iVar31 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          local_19c[2] = *(undefined4 *)(this_01 + 8);
          local_19c[3] = 2;
          local_19c[4] = 0x6941;
          if (*(MMsgTy **)(iVar8 + 0x2e6) == (MMsgTy *)0x0) {
            (*(code *)**(undefined4 **)this_01)(local_19c);
          }
          else {
            MMsgTy::SetMessage(*(MMsgTy **)(iVar8 + 0x2e6),0x2593,'\0',local_19c,(undefined4 *)0x0,
                               (undefined4 *)0x0,param_1[5],0x2599);
          }
          break;
        case 0x6150:
          if (this_01[0x1a5f] == (FSGSTy)0x1) {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              DAT_00802a30[0x493] = (CursorClassTy)0x1;
              *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
              CursorClassTy::SetGCType
                        (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
              CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
              pCVar22[0xd2] = (CursorClassTy)0x0;
              *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
            }
            iVar8 = param_1[5];
            puVar10 = local_160;
            for (iVar31 = 8; iVar31 != 0; iVar31 = iVar31 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            local_160[2] = *(undefined4 *)(this_01 + 8);
            local_160[3] = 2;
            local_160[4] = 0x6941;
            switch(iVar8) {
            case 1:
              UVar9 = 0x2580;
              break;
            case 2:
              UVar9 = 0x2581;
              break;
            case 3:
              UVar9 = 0x2582;
              break;
            case 4:
              UVar9 = 0x2583;
              break;
            default:
              UVar9 = 0x2584;
            }
            if ((UVar9 == 0) ||
               (pMVar18 = *(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6), pMVar18 == (MMsgTy *)0x0
               )) {
              (*(code *)**(undefined4 **)this_01)(local_160);
            }
            else if (UVar9 == 0x2584) {
              MMsgTy::SetMessage(pMVar18,0x2584,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,
                                 iVar8,0x2599);
            }
            else {
              MMsgTy::SetMessage(pMVar18,UVar9,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,0,
                                 0);
            }
          }
        }
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (this_01[0x1a5f] != (FSGSTy)0x1) goto switchD_005a43f5_caseD_1;
    CFsgsConnection::StartBanners((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      iVar8 = *(int *)(this_01 + 0x1ac0);
      uVar20 = *(uint *)(iVar8 + 0x14);
      if (uVar20 == 0) {
        uVar20 = ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar8 + 8);
      }
      puVar10 = (undefined4 *)FUN_006b4fa0(iVar8);
      for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar10 = 0xffffffff;
        puVar10 = puVar10 + 1;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined1 *)puVar10 = 0xff;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_01 + 0x1a73),*(int *)(this_01 + 0x1ac0),0,0,0x16,0x1b8,
                       0xf0);
      iVar34 = -1;
      iVar33 = -1;
      uVar7 = 2;
      iVar31 = -1;
      iVar8 = -1;
      puVar11 = (uint *)FUN_006b0140(0x25b6,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(this_01 + 0x1a73),puVar11,iVar8,iVar31,uVar7,iVar33,iVar34);
      FUN_006b35d0(DAT_008075a8,*(uint *)(this_01 + 0x1abc));
      CFsgsConnection::RequestDatafile((CFsgsConnection *)&DAT_00802a90,s_st_inf_007cc66c);
      goto switchD_005a43f5_caseD_1;
    }
    goto LAB_005a6d57;
  }
  if (0x6333 < uVar20) {
    if (uVar20 == 0x6334) {
      MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)(this_01 + 0x1bb9),(int)param_1,0);
    }
    else if (uVar20 == 0x6335) {
      *(uint *)(this_01 + 0x1c6a) =
           *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
      if (*(uint *)(this_01 + 0x1c4e) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(this_01 + 0x1c92),*(uint *)(this_01 + 0x1c4e),
                   *(uint *)(this_01 + 0x1c52),*(uint *)(this_01 + 0x1c66),
                   *(uint *)(this_01 + 0x1c6a));
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar20 == 0x6333) {
    MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)(this_01 + 0x1b28),(int)param_1,0);
    goto switchD_005a43f5_caseD_1;
  }
  switch(uVar20) {
  case 0x6152:
    if (this_01[0x1a5f] != (FSGSTy)0x2) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
      CursorClassTy::SetGCType
                (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
      CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
      pCVar22[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
    }
    iVar8 = *(int *)(this_01 + 0x1a5b);
    puVar10 = local_2c8;
    for (iVar31 = 6; iVar31 != 0; iVar31 = iVar31 + -1) {
      *puVar10 = 0x10001;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 1;
    if (*(MMsgTy **)(iVar8 + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)local_2c8);
    }
    switch(param_1[5]) {
    case 2:
      UVar9 = 0x258b;
      break;
    case 3:
      UVar9 = 0x258c;
      break;
    case 4:
      UVar9 = 0x258d;
      break;
    default:
      UVar9 = 0x2589;
      break;
    case 7:
      UVar9 = 0x25c2;
    }
    if ((UVar9 == 0) ||
       (pMVar18 = *(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6), pMVar18 == (MMsgTy *)0x0))
    goto switchD_005a43f5_caseD_1;
    if (UVar9 == 0x2589) {
      MMsgTy::SetMessage(pMVar18,0x2589,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                         param_1[5],0x2599);
      goto switchD_005a43f5_caseD_1;
    }
    break;
  case 0x6153:
    if ((this_01[0x1a5f] == (FSGSTy)0x2) || (this_01[0x1a5f] == (FSGSTy)0x4)) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
        CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
        pCVar22[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
      }
      local_100 = s_Profile_Age_007cc1a8;
      local_fc = s_Profile_Sex_007cc198;
      local_f8 = s_Profile_Location_007cc184;
      local_f4 = s_Profile_Description_007cc16c;
      if (this_01[0x1a5f] == (FSGSTy)0x2) {
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
      thunk_FUN_0055bf20(&DAT_00802a90,*(undefined4 *)(this_01 + 0x1a67));
      if (*(byte **)(this_01 + 0x1e9e) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(this_01 + 0x1e9e));
      }
      puVar11 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,100);
      *(uint **)(this_01 + 0x1e9e) = puVar11;
      (**(code **)(*(int *)this_01 + 8))();
      this_01[0x1a61] = (FSGSTy)0x6;
      if (*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != 0) {
        local_ac = 0;
        local_a8 = 0;
        local_b0 = 0x10101;
        local_a4 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),&local_b0);
      }
    }
    goto switchD_005a43f5_caseD_1;
  case 0x6154:
    if (this_01[0x1a5f] == (FSGSTy)0x5) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
        CursorClassTy::SetGCType
                  (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
        CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
        pCVar22[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
      }
      uVar20 = param_1[5];
      if (uVar20 == 0) {
        *(undefined4 *)(this_01 + 0x2d) = 0x6952;
        (*(code *)**(undefined4 **)this_01)(this_01 + 0x1d);
      }
      else if ((uVar20 != 0) && (uVar20 < 3)) {
        puVar10 = local_300;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = 0x10001;
          puVar10 = puVar10 + 1;
        }
        iVar8 = *(int *)(this_01 + 0x1a5b);
        *(undefined2 *)puVar10 = 1;
        if (*(MMsgTy **)(iVar8 + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)local_300);
        }
        if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
          MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),
                             (-(uint)(param_1[5] != 1) & 10) + 0x258e,'\0',(undefined4 *)0x0,
                             (undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
      }
    }
    goto switchD_005a43f5_caseD_1;
  case 0x6155:
    if (this_01[0x1a5f] != (FSGSTy)0x4) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
      CursorClassTy::SetGCType
                (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
      CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
      pCVar22[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
    }
    if (param_1[5] == 0) goto LAB_005a67e1;
    if (6 < (uint)param_1[5]) goto switchD_005a43f5_caseD_1;
    puVar10 = local_354;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = 0x10001;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 1;
    if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),(int)local_354);
    }
    pMVar18 = *(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6);
    if (pMVar18 == (MMsgTy *)0x0) goto switchD_005a43f5_caseD_1;
    switch(param_1[5]) {
    case 2:
      UVar9 = 0x2597;
      break;
    case 3:
      UVar9 = 0x2596;
      break;
    case 4:
      UVar9 = 0x25c3;
      break;
    case 5:
      UVar9 = 0x25c4;
      break;
    case 6:
      UVar9 = 0x25c5;
      break;
    default:
      UVar9 = 0x258f;
    }
    break;
  case 0x6156:
    if (this_01[0x1a5f] != (FSGSTy)0x6) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(pCVar22 + 0x494) = 0xffff;
      CursorClassTy::SetGCType
                (pCVar22,0,*(undefined4 *)(pCVar22 + 0xc5),*(undefined4 *)(pCVar22 + 0xc9));
      CursorClassTy::DrawSprite(pCVar22,*(int *)(pCVar22 + 0xc5),*(int *)(pCVar22 + 0xc9));
      pCVar22[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar22 + 0x4df) = 0xffffffff;
    }
    UVar9 = 0;
    if (param_1[5] == 0xd) {
      UVar9 = 0x2590;
    }
    else if (param_1[5] == 0xf) {
      UVar9 = 0x2591;
    }
    if ((UVar9 == 0) ||
       (pMVar18 = *(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6), pMVar18 == (MMsgTy *)0x0))
    goto switchD_005a43f5_caseD_1;
    break;
  default:
    goto switchD_005a43f5_caseD_1;
  }
  MMsgTy::SetMessage(pMVar18,UVar9,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
switchD_005a43f5_caseD_1:
  g_currentExceptionFrame = local_21c.previous;
  uVar7 = MMObjTy::GetMessage((MMObjTy *)this_01,(int)param_1);
  return uVar7;
}


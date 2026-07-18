
/* WARNING: Removing unreachable block (ram,0x005a58e7) */
/* WARNING: Removing unreachable block (ram,0x005a5b40) */
/* WARNING: Removing unreachable block (ram,0x005a5f43) */
/* WARNING: Removing unreachable block (ram,0x005a5d46) */

undefined4 __thiscall FUN_005a4350(void *this,int *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  UINT UVar8;
  undefined4 *puVar9;
  uint *puVar10;
  char *pcVar11;
  DWORD DVar12;
  undefined4 uVar13;
  ulong uVar14;
  HINSTANCE pHVar15;
  undefined3 extraout_var;
  uint uVar16;
  void *pvVar17;
  byte bVar18;
  undefined4 unaff_ESI;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  void *unaff_EDI;
  char *pcVar22;
  int *piVar23;
  uint *puVar24;
  char *pcVar25;
  bool bVar26;
  BITMAPINFO *pBVar27;
  int iVar28;
  DWORD DVar29;
  int iVar30;
  int iVar31;
  char local_6b8 [32];
  undefined1 local_698;
  CHAR local_4b8 [260];
  undefined4 **local_3b4;
  undefined4 local_3b0 [16];
  undefined4 local_370 [7];
  undefined4 local_354 [7];
  undefined4 local_338 [7];
  undefined4 local_31c [7];
  undefined4 local_300 [7];
  undefined4 local_2e4 [7];
  undefined4 local_2c8 [7];
  undefined4 local_2ac [7];
  undefined4 **local_290;
  undefined4 local_28c [16];
  undefined4 local_24c [4];
  undefined4 local_23c;
  uint local_238;
  undefined4 local_22c [4];
  undefined4 **local_21c;
  undefined4 local_218 [16];
  undefined4 local_1d8 [2];
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined4 local_1bc [4];
  undefined4 local_1ac;
  undefined4 local_1a8;
  int local_19c [8];
  undefined4 local_17c [2];
  undefined2 local_172;
  undefined2 local_170;
  int local_160 [8];
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
  int *local_20;
  byte *local_1c;
  char local_15;
  BITMAPINFO *local_14;
  uint *local_10;
  byte *local_c;
  uint *local_8;
  
  local_20 = this;
  uVar6 = FUN_006e51b0(*(int *)((int)this + 0x10));
  pcVar22 = (char *)0x0;
  *(undefined4 *)((int)this + 0x61) = uVar6;
  local_21c = DAT_00858df8;
  DAT_00858df8 = &local_21c;
  iVar7 = __setjmp3(local_218,0,unaff_EDI,unaff_ESI);
  piVar5 = local_20;
  if (iVar7 != 0) {
    DAT_00858df8 = local_21c;
    iVar28 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1048,0,iVar7,&DAT_007a4ccc);
    if (iVar28 != 0) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    FUN_006a5e40(iVar7,0,0x7cbf70,0x1048);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_20,(int)param_1);
  pvVar17 = DAT_00802a30;
  uVar19 = param_1[4];
  if (0x6949 < uVar19) {
    if (uVar19 < 0x6980) {
      if (uVar19 == 0x697f) {
        iVar7 = param_1[7];
        local_60 = *(int *)(iVar7 + 0x24) + -0xb4;
        local_58 = *(int *)(iVar7 + 0x2c);
        local_54 = *(int *)(iVar7 + 0x30);
        iVar28 = *(int *)(iVar7 + 0x28) -
                 ((-(uint)(*(char *)((int)piVar5 + 0x1abb) != '\0') & 0xffffffb4) + 0xaa);
        local_5c = iVar28;
        FUN_006b4170(piVar5[0x6b0],0,*(int *)(iVar7 + 0x24) + -0xb5,iVar28,local_58 + 2,local_54,
                     0xff);
        FUN_00710a90(piVar5[0x6b0],0,local_60,iVar28,local_58,local_54);
        if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
          FUN_007119c0(*(uint **)param_1[5],0,-1,0);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar7 = (uint)*(ushort *)(param_1 + 6) + local_60;
          FUN_006b5b10(piVar5[0x6b0],0,iVar7,iVar28 + 1,iVar7,local_54 + -2 + iVar28,9,0xd);
        }
        FUN_006b35d0(DAT_008075a8,piVar5[0x6af]);
        goto switchD_005a43f5_caseD_1;
      }
      switch(uVar19) {
      case 0x694a:
      case 0x694e:
        (**(code **)(*piVar5 + 8))();
        *(char *)((int)piVar5 + 0x1a61) = (param_1[4] != 0x694a) + '\a';
        iVar7 = *(int *)((int)piVar5 + 0x1a5b);
        if (*(int *)(iVar7 + 0x2e6) == 0) break;
        puVar9 = local_31c;
        for (iVar28 = 6; iVar28 != 0; iVar28 = iVar28 + -1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = 0xffff;
        local_9c = 0;
        local_98 = 0;
        local_a0 = 0x10101;
        local_94 = 0;
        thunk_FUN_005b9010(*(void **)(iVar7 + 0x2e6),(int)local_31c);
        puVar9 = &local_a0;
        goto LAB_005a7f3b;
      case 0x694b:
        if (*(char *)((int)piVar5 + 0x1a5f) == '\x02') {
          (**(code **)(*piVar5 + 8))();
          *(undefined1 *)((int)piVar5 + 0x1a61) = 5;
          if (*(int *)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6) != 0) {
            local_8c = 0;
            local_88 = 0;
            local_84 = 0;
            local_90 = 0x10101;
            thunk_FUN_005b8f40(*(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6),&local_90);
          }
        }
        else if (*(char *)((int)piVar5 + 0x1a5f) == '\x05') {
          if (0 < *(int *)(piVar5[0x6bd] + 8)) {
            pcVar22 = (char *)**(undefined4 **)(piVar5[0x6bd] + 0x14);
          }
          iVar7 = -1;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar22 + 1;
          } while (cVar1 != '\0');
          if (iVar7 == -2) {
            pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
            if (pvVar17 != (void *)0x0) {
              thunk_FUN_005b7ef0(pvVar17,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                 (undefined4 *)0x0,0,0);
            }
          }
          else {
            puVar9 = local_1d8;
            for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar9 = 0xffffffff;
              puVar9 = puVar9 + 1;
            }
            *(undefined2 *)puVar9 = 0xffff;
            local_1cc = 1;
            local_1ce = 1;
            pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
            if (pvVar17 != (void *)0x0) {
              thunk_FUN_005b9010(pvVar17,(int)local_1d8);
            }
            pvVar17 = DAT_00802a30;
            if (DAT_00802a30 != (void *)0x0) {
              uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
              uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
              *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
              *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
              thunk_FUN_0054bf40(0,uVar13,uVar6);
              thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9)
                                );
              *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
              *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
            }
            if (*(int *)(piVar5[0x6bd] + 8) < 1) {
              pcVar22 = (char *)0x0;
            }
            else {
              pcVar22 = (char *)**(undefined4 **)(piVar5[0x6bd] + 0x14);
            }
            if (*(int *)(piVar5[0x6bb] + 8) < 1) {
              pcVar11 = (char *)0x0;
            }
            else {
              pcVar11 = (char *)**(undefined4 **)(piVar5[0x6bb] + 0x14);
            }
            if (*(int *)(piVar5[0x6ba] + 8) < 1) {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,(char *)0x0,pcVar11,pcVar22);
            }
            else {
              CFsgsConnection::ChangePassword
                        ((CFsgsConnection *)&DAT_00802a90,
                         (char *)**(undefined4 **)(piVar5[0x6ba] + 0x14),pcVar11,pcVar22);
            }
          }
        }
        break;
      case 0x694c:
        if ((*(LPCSTR *)((int)piVar5 + 0x1aab) != (LPCSTR)0x0) &&
           (pHVar15 = ShellExecuteA(DAT_00856d78,&DAT_007cc624,*(LPCSTR *)((int)piVar5 + 0x1aab),
                                    (LPCSTR)0x0,(LPCSTR)0x0,1), 0x20 < (int)pHVar15)) {
          CFsgsConnection::BannerClick
                    ((CFsgsConnection *)&DAT_00802a90,*(ulong *)((int)piVar5 + 0x1aaf));
        }
        break;
      case 0x6952:
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        switch(*(undefined1 *)((int)piVar5 + 0x1a5f)) {
        case 6:
          local_30 = 0x10000;
        case 3:
          local_30 = CONCAT31(local_30._1_3_,1);
        case 5:
          local_30._0_2_ = CONCAT11(1,(undefined1)local_30);
        case 4:
          local_2c = 0x10100;
          *(undefined1 *)((int)piVar5 + 0x1a61) = 2;
          break;
        case 7:
        case 8:
          local_30 = 0x100;
        case 9:
          *(undefined1 *)((int)piVar5 + 0x1a61) = 6;
          break;
        case 10:
          pbVar20 = (byte *)piVar5[0x6c3];
          if (pbVar20 != (byte *)0x0) {
            pbVar21 = &DAT_00807e1d;
            do {
              bVar18 = *pbVar20;
              bVar26 = bVar18 < *pbVar21;
              if (bVar18 != *pbVar21) {
LAB_005a63e7:
                iVar7 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                goto LAB_005a63ec;
              }
              if (bVar18 == 0) break;
              bVar18 = pbVar20[1];
              bVar26 = bVar18 < pbVar21[1];
              if (bVar18 != pbVar21[1]) goto LAB_005a63e7;
              pbVar20 = pbVar20 + 2;
              pbVar21 = pbVar21 + 2;
            } while (bVar18 != 0);
            iVar7 = 0;
LAB_005a63ec:
            if (iVar7 == 0) {
              if (*(int *)(piVar5[0x6c0] + 8) < 1) {
                pcVar22 = (char *)0x0;
              }
              else {
                pcVar22 = (char *)**(undefined4 **)(piVar5[0x6c0] + 0x14);
              }
              if (*(int *)(piVar5[0x6bf] + 8) < 1) {
                pcVar11 = (char *)0x0;
              }
              else {
                pcVar11 = (char *)**(undefined4 **)(piVar5[0x6bf] + 0x14);
              }
              if (*(int *)(piVar5[0x6be] + 8) < 1) {
                pbVar20 = (byte *)0x0;
              }
              else {
                pbVar20 = (byte *)**(undefined4 **)(piVar5[0x6be] + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar20,pcVar11,pcVar22,piVar5[0x6c1]);
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
          *(undefined1 *)((int)piVar5 + 0x1a61) = *(undefined1 *)((int)piVar5 + 0x1ed2);
        }
        (**(code **)(*piVar5 + 8))();
        iVar7 = *(int *)((int)piVar5 + 0x1a5b);
        if (*(int *)(iVar7 + 0x2e6) != 0) {
          puVar9 = local_2e4;
          for (iVar28 = 6; iVar28 != 0; iVar28 = iVar28 + -1) {
            *puVar9 = 0xffffffff;
            puVar9 = puVar9 + 1;
          }
          *(undefined2 *)puVar9 = 0xffff;
          thunk_FUN_005b9010(*(void **)(iVar7 + 0x2e6),(int)local_2e4);
          thunk_FUN_005b8f40(*(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6),&local_30);
        }
        break;
      case 0x6953:
        puVar9 = local_17c;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = 0xffff;
        local_170 = 1;
        local_172 = 1;
        if (*(int *)(piVar5[0x6ba] + 8) < 1) {
          pcVar22 = (char *)0x0;
        }
        else {
          pcVar22 = (char *)**(undefined4 **)(piVar5[0x6ba] + 0x14);
        }
        _strncpy(&DAT_00807e1d,pcVar22,0x40);
        DAT_00807e5c = 0;
        if (*(int *)(piVar5[0x6bb] + 8) < 1) {
          pcVar22 = (char *)0x0;
        }
        else {
          pcVar22 = (char *)**(undefined4 **)(piVar5[0x6bb] + 0x14);
        }
        uVar19 = 0xffffffff;
        do {
          pcVar11 = pcVar22;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar11 = pcVar22 + 1;
          cVar1 = *pcVar22;
          pcVar22 = pcVar11;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar22 = pcVar11 + -uVar19;
        pcVar11 = (char *)&DAT_00807e5d;
        for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar11 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar11 = pcVar11 + 1;
        }
        iVar7 = -1;
        pcVar22 = (char *)&DAT_00807e5d;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          cVar1 = *pcVar22;
          pcVar22 = pcVar22 + 1;
        } while (cVar1 != '\0');
        if (iVar7 == -2) {
          pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
          if (pvVar17 != (void *)0x0) {
            thunk_FUN_005b7ef0(pvVar17,0x2592,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                               (undefined4 *)0x0,0,0);
          }
          break;
        }
        if (*(char *)((int)piVar5 + 0x1a5f) != '\x02') {
          if (*(char *)((int)piVar5 + 0x1a5f) == '\x04') {
            if (*(int *)(piVar5[0x6bc] + 8) < 1) {
              pbVar20 = (byte *)0x0;
            }
            else {
              pbVar20 = (byte *)**(undefined4 **)(piVar5[0x6bc] + 0x14);
            }
            pbVar21 = (byte *)&DAT_00807e5d;
            do {
              bVar18 = *pbVar21;
              bVar26 = bVar18 < *pbVar20;
              if (bVar18 != *pbVar20) {
LAB_005a6653:
                iVar7 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                goto LAB_005a6658;
              }
              if (bVar18 == 0) break;
              bVar18 = pbVar21[1];
              bVar26 = bVar18 < pbVar20[1];
              if (bVar18 != pbVar20[1]) goto LAB_005a6653;
              pbVar21 = pbVar21 + 2;
              pbVar20 = pbVar20 + 2;
            } while (bVar18 != 0);
            iVar7 = 0;
LAB_005a6658:
            if (iVar7 == 0) {
              pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
              if (pvVar17 != (void *)0x0) {
                thunk_FUN_005b9010(pvVar17,(int)local_17c);
              }
              pvVar17 = DAT_00802a30;
              if (DAT_00802a30 != (void *)0x0) {
                uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
                uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
                *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
                *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
                thunk_FUN_0054bf40(0,uVar13,uVar6);
                thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),
                                   *(int *)((int)pvVar17 + 0xc9));
                *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
                *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
              }
              if (*(int *)(piVar5[0x6c0] + 8) < 1) {
                pcVar22 = (char *)0x0;
              }
              else {
                pcVar22 = (char *)**(undefined4 **)(piVar5[0x6c0] + 0x14);
              }
              if (*(int *)(piVar5[0x6bf] + 8) < 1) {
                pcVar11 = (char *)0x0;
              }
              else {
                pcVar11 = (char *)**(undefined4 **)(piVar5[0x6bf] + 0x14);
              }
              if (*(int *)(piVar5[0x6be] + 8) < 1) {
                pbVar20 = (byte *)0x0;
              }
              else {
                pbVar20 = (byte *)**(undefined4 **)(piVar5[0x6be] + 0x14);
              }
              thunk_FUN_0055c320(&DAT_00802a90,pbVar20,pcVar11,pcVar22,piVar5[0x6c1]);
              CFsgsConnection::CreateNewAccount
                        ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
            }
            else {
              pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
              if (pvVar17 != (void *)0x0) {
                thunk_FUN_005b7ef0(pvVar17,0x258a,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                                   (undefined4 *)0x0,0,0);
              }
            }
          }
          break;
        }
        pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
        if (pvVar17 != (void *)0x0) {
          thunk_FUN_005b9010(pvVar17,(int)local_17c);
        }
        pvVar17 = DAT_00802a30;
        if (DAT_00802a30 != (void *)0x0) {
          uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
          uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
          *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
          *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
          thunk_FUN_0054bf40(0,uVar13,uVar6);
          thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
          *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
          *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
        }
LAB_005a67e1:
        uVar14 = CFsgsConnection::Login
                           ((CFsgsConnection *)&DAT_00802a90,&DAT_00807e1d,(char *)&DAT_00807e5d);
        if (uVar14 == 0) {
          DVar12 = GetLastError();
          thunk_FUN_0055beb0(&DAT_00802a90,DVar12);
        }
        DAT_00802a9a = 0;
        break;
      case 0x6954:
        (**(code **)(*piVar5 + 8))();
        *(undefined1 *)((int)piVar5 + 0x1a61) = 4;
        if (*(int *)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6) != 0) {
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_c0 = 0x10101;
          thunk_FUN_005b8f40(*(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6),&local_c0);
        }
        break;
      case 0x6955:
        iVar7 = *(int *)((int)piVar5 + 0x1ab7);
        iVar30 = 0;
        iVar28 = 0;
        if (iVar7 != 0) {
          if (param_1[5] == 0) {
            switch(*(undefined1 *)((int)piVar5 + 0x1a5f)) {
            case 2:
            case 6:
            case 7:
              goto switchD_005a6a92_caseD_2;
            case 4:
              iVar28 = piVar5[0x6b1];
              if (iVar7 == iVar28) {
                iVar30 = iVar28;
                iVar28 = piVar5[0x6b2];
              }
              else if (iVar7 == piVar5[0x6b2]) {
                iVar30 = piVar5[0x6b2];
                iVar28 = piVar5[0x6b3];
              }
              else if (iVar7 == piVar5[0x6b3]) {
                iVar30 = piVar5[0x6b3];
                iVar28 = piVar5[0x6b6];
              }
              else if (iVar7 == piVar5[0x6b6]) {
                iVar30 = piVar5[0x6b6];
                iVar28 = piVar5[0x6b7];
              }
              else if (iVar7 == piVar5[0x6b7]) {
                iVar30 = piVar5[0x6b7];
                iVar28 = piVar5[0x6b8];
              }
              else {
                if (iVar7 != piVar5[0x6b8]) goto LAB_005a6cc4;
                iVar30 = piVar5[0x6b8];
                iVar28 = piVar5[0x6b9];
              }
              break;
            case 5:
              iVar28 = piVar5[0x6b1];
              if (iVar7 == iVar28) {
                iVar30 = iVar28;
                iVar28 = piVar5[0x6b2];
              }
              else if (iVar7 == piVar5[0x6b2]) {
                iVar30 = piVar5[0x6b2];
                iVar28 = piVar5[0x6b5];
              }
              else if (iVar7 == piVar5[0x6b5]) {
                iVar30 = piVar5[0x6b5];
                iVar28 = piVar5[0x6b3];
              }
              else {
                iVar30 = piVar5[0x6b3];
              }
              break;
            case 10:
              iVar28 = piVar5[0x6b6];
              if (iVar7 == iVar28) {
                iVar30 = iVar28;
                iVar28 = piVar5[0x6b7];
              }
              else if (iVar7 == piVar5[0x6b7]) {
                iVar30 = piVar5[0x6b7];
                iVar28 = piVar5[0x6b8];
              }
              else if (iVar7 == piVar5[0x6b8]) {
                iVar30 = piVar5[0x6b8];
                iVar28 = piVar5[0x6b9];
              }
              else {
LAB_005a6cc4:
                iVar30 = piVar5[0x6b9];
              }
            }
          }
          else {
            switch(*(undefined1 *)((int)piVar5 + 0x1a5f)) {
            case 2:
            case 6:
            case 7:
switchD_005a6a92_caseD_2:
              iVar28 = piVar5[0x6b1];
              if (iVar7 == iVar28) {
                iVar30 = iVar28;
                iVar28 = piVar5[0x6b2];
              }
              else {
                iVar30 = piVar5[0x6b2];
              }
              break;
            case 4:
              iVar28 = piVar5[0x6b1];
              if (iVar7 == iVar28) {
                iVar30 = iVar28;
                iVar28 = piVar5[0x6b9];
              }
              else {
                iVar31 = piVar5[0x6b2];
                iVar30 = iVar31;
                if (((iVar7 != iVar31) &&
                    (iVar3 = piVar5[0x6b3], iVar30 = iVar3, iVar28 = iVar31, iVar7 != iVar3)) &&
                   (iVar31 = piVar5[0x6b6], iVar30 = iVar31, iVar28 = iVar3, iVar7 != iVar31)) {
                  iVar3 = piVar5[0x6b7];
                  goto joined_r0x005a6ba3;
                }
              }
              break;
            case 5:
              iVar28 = piVar5[0x6b1];
              if (iVar7 == iVar28) {
                iVar30 = iVar28;
                iVar28 = piVar5[0x6b3];
              }
              else {
                iVar31 = piVar5[0x6b2];
                iVar30 = iVar31;
                if ((iVar7 != iVar31) &&
                   (iVar3 = piVar5[0x6b5], iVar30 = iVar3, iVar28 = iVar31, iVar7 != iVar3)) {
                  iVar30 = piVar5[0x6b3];
                  iVar28 = iVar3;
                }
              }
              break;
            case 10:
              iVar31 = piVar5[0x6b6];
              if (iVar7 == iVar31) {
                iVar30 = iVar31;
                iVar28 = piVar5[0x6b9];
              }
              else {
                iVar3 = piVar5[0x6b7];
joined_r0x005a6ba3:
                iVar30 = iVar3;
                iVar28 = iVar31;
                if ((iVar7 != iVar3) &&
                   (iVar31 = piVar5[0x6b8], iVar30 = iVar31, iVar28 = iVar3, iVar7 != iVar31)) {
                  iVar30 = piVar5[0x6b9];
                  iVar28 = iVar31;
                }
              }
            }
          }
        }
        *(undefined4 *)((int)piVar5 + 0x2d) = 0x20;
        if (iVar30 != 0) {
          *(undefined4 *)((int)piVar5 + 0x31) = 0;
          FUN_006e6080(piVar5,2,iVar30,(undefined4 *)((int)piVar5 + 0x1d));
        }
        if (iVar28 != 0) {
          *(undefined4 *)((int)piVar5 + 0x31) = 1;
          FUN_006e6080(piVar5,2,iVar28,(undefined4 *)((int)piVar5 + 0x1d));
        }
        break;
      case 0x6956:
        *(undefined1 *)((int)piVar5 + 0x1ed2) = 1;
LAB_005a6d57:
        thunk_FUN_005a0ff0();
        break;
      case 0x6957:
        iVar7 = piVar5[0x6b0];
        uVar19 = *(uint *)(iVar7 + 0x14);
        if (uVar19 == 0) {
          uVar19 = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar7 + 8);
        }
        puVar9 = (undefined4 *)FUN_006b4fa0(iVar7);
        for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined1 *)puVar9 = 0xff;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_00710a90(piVar5[0x6b0],0,0,0x16,0x1b8,0xf0);
        iVar31 = -1;
        iVar30 = -1;
        uVar6 = 2;
        iVar28 = -1;
        iVar7 = -2;
        puVar10 = (uint *)FUN_006b0140(0x25be,DAT_00807618);
        FUN_00711b70(puVar10,iVar7,iVar28,uVar6,iVar30,iVar31);
        FUN_006b35d0(DAT_008075a8,piVar5[0x6af]);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079c020,
                  &DAT_0080f126);
        wsprintfA(local_4b8,s_subtitans__s_007cc614,&DAT_0080f126);
        CFsgsConnection::DownloadFile
                  ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a,local_4b8);
LAB_005a6e50:
        pvVar17 = DAT_00802a30;
        if (DAT_00802a30 != (void *)0x0) {
          *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
          *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
          thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),
                             *(undefined4 *)((int)pvVar17 + 0xc9));
          thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
          *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
          *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
        }
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (0x8160 < uVar19) {
      if (uVar19 < 0xc0a2) {
        if (uVar19 == 0xc0a1) {
          if ((*(int *)((int)piVar5 + 0x1a6b) != 0) && (piVar5[0x6c4] != 0)) {
            *(undefined4 *)((int)piVar5 + 0x2d) = 0x20;
            *(undefined4 *)((int)piVar5 + 0x31) = 1;
            FUN_006e6080(piVar5,2,piVar5[0x6c4],(undefined4 *)((int)piVar5 + 0x1d));
          }
          goto switchD_005a43f5_caseD_1;
        }
        switch(uVar19) {
        case 0x8161:
          if ((*(int *)((int)piVar5 + 0x1e8e) == 0) || (*(int *)((int)piVar5 + 0x1e9a) == 0)) break;
          pbVar20 = (byte *)param_1[7];
          local_1c = pbVar20;
          FUN_006b5f80(DAT_008075a8,*(int *)(pbVar20 + 0x24),
                       (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar20 + 0x28),
                       *(int *)(pbVar20 + 0x2c),0x11);
          if (*(char *)((int)piVar5 + 0x1a5f) == '\x06') {
            iVar7 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar20 + 0x28);
            thunk_FUN_00540620(*(int *)(pbVar20 + 0x24),iVar7,*(int *)(pbVar20 + 0x24) + -0x1e9,
                               iVar7 + -0x5e,*(uint *)(pbVar20 + 0x2c),(byte *)0x11,'\x01',
                               *(BITMAPINFO **)((int)piVar5 + 0x1e9a));
            FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(int *)(pbVar20 + 0x2c),0x11,0xff);
            if ((char)piVar5[0x698] == '\0') {
              iVar7 = *(int *)((int)piVar5 + 0x1ea6);
              if (iVar7 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar7 + 0xc)) {
                  local_8 = (uint *)(*(int *)(iVar7 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar7 + 0x1c));
                }
                else {
                  local_8 = (uint *)0x0;
                }
                if (local_8 != (uint *)0x0) {
                  FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0x23,0,
                               *(int *)(pbVar20 + 0x2c) + -0x46,0x11);
                  if (*(char *)((int)local_8 + 0x2d) == '\0') {
                    local_c = (byte *)thunk_FUN_0055c050(&DAT_00802a90,(int)local_8);
                    thunk_FUN_00540760(*(undefined4 **)((int)piVar5 + 0x1e8e),3,1,'\x01',local_c);
                    if (local_c != (byte *)0x0) {
                      FUN_006ab060(&local_c);
                    }
                    FUN_007119c0(local_8,0,-1,
                                 (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2);
                    if ((*(byte *)((int)local_8 + 0x25) & 0x10) != 0) {
                      iVar7 = FUN_0070b3a0(*(int *)((int)piVar5 + 0x1a8b),3);
                      FUN_006b5440(*(int *)((int)piVar5 + 0x1e8e),0,*(int *)(pbVar20 + 0x2c) + -0x1d
                                   ,(0x11 - *(int *)(iVar7 + 8)) / 2,iVar7,0,0xff);
                    }
                  }
                  else {
                    pbVar21 = (byte *)FUN_0070b3a0(*(int *)((int)piVar5 + 0x1a87),1);
                    thunk_FUN_00540760(*(undefined4 **)((int)piVar5 + 0x1e8e),3,
                                       (0x11 - *(int *)(pbVar21 + 8)) / 2,'\x06',pbVar21);
                    iVar7 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                    iVar30 = -1;
                    iVar28 = 0;
                    puVar10 = (uint *)FUN_006b0140(0x2567,DAT_00807618);
                    FUN_007119c0(puVar10,iVar28,iVar30,iVar7);
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)((int)piVar5 + 0x1eaa);
              if (iVar7 != 0) {
                if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar7 + 0xc)) {
                  local_c = (byte *)(*(int *)(iVar7 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                    *(int *)(iVar7 + 0x1c));
                }
                else {
                  local_c = (byte *)0x0;
                }
                if (local_c != (byte *)0x0) {
                  uVar19 = *(uint *)(local_c + 0x60);
                  if ((uVar19 & 0x40) == 0) {
                    if ((uVar19 & 0x18) == 0) {
                      local_10 = (uint *)(CONCAT31(local_10._1_3_,-((uVar19 & 2) != 0)) & 0xffffff05
                                         );
                    }
                    else {
                      local_10 = (uint *)CONCAT31(local_10._1_3_,3);
                    }
                  }
                  else {
                    local_10 = (uint *)CONCAT31(local_10._1_3_,4);
                  }
                  pbVar21 = (byte *)FUN_0070b3a0(*(int *)((int)piVar5 + 0x1a87),
                                                 (uint)local_10 & 0xff);
                  thunk_FUN_00540760(*(undefined4 **)((int)piVar5 + 0x1e8e),3,
                                     (0x11 - *(int *)(pbVar21 + 8)) / 2,'\x06',pbVar21);
                  FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0x23,0,
                               *(int *)(pbVar20 + 0x2c) + -0x46,0x11);
                  iVar7 = (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2;
                  wsprintfA((LPSTR)&DAT_0080f33a,s___d_s___0_d__d__007cc5f8,iVar7,local_c,
                            *(undefined4 *)(local_c + 100),iVar7);
                  FUN_007119c0(&DAT_0080f33a,0,-1,0);
                }
              }
            }
          }
          else {
            iVar7 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar20 + 0x28);
            thunk_FUN_00540620(*(int *)(pbVar20 + 0x24),iVar7,*(int *)(pbVar20 + 0x24) + -0x13,
                               iVar7 + -0x5e,*(uint *)(pbVar20 + 0x2c),(byte *)0x11,'\x01',
                               *(BITMAPINFO **)((int)piVar5 + 0x1e9a));
            FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(int *)(pbVar20 + 0x2c),0x11,0xff);
            iVar7 = *(int *)((int)piVar5 + 0x1ebe);
            if (iVar7 != 0) {
              if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar7 + 0xc)) {
                local_10 = (uint *)(*(int *)(iVar7 + 8) * (uint)*(ushort *)(param_1 + 5) +
                                   *(int *)(iVar7 + 0x1c));
              }
              else {
                local_10 = (uint *)0x0;
              }
              if (local_10 != (uint *)0x0) {
                iVar7 = -1;
                puVar10 = local_10 + 0x13;
                do {
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  uVar19 = *puVar10;
                  puVar10 = (uint *)((int)puVar10 + 1);
                } while ((char)uVar19 != '\0');
                pbVar20 = (byte *)FUN_0070b3a0(*(int *)((int)piVar5 + 0x1a87),
                                               -(uint)(iVar7 != -2) & 4);
                thunk_FUN_00540760(*(undefined4 **)((int)piVar5 + 0x1e8e),3,
                                   (0x11 - *(int *)(pbVar20 + 8)) / 2,'\x06',pbVar20);
                FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0x23,0,
                             *(int *)(local_1c + 0x2c) + -0x40,0x11);
                FUN_007119c0(local_10 + 0xb,0,-1,
                             (-(uint)(*(short *)((int)param_1 + 0x16) != 0) & 0xfffffffe) + 2);
                pbVar20 = local_1c;
              }
            }
          }
          DVar29 = *(DWORD *)(pbVar20 + 0x2c);
          pBVar27 = *(BITMAPINFO **)((int)piVar5 + 0x1e8e);
          DVar12 = 0x11;
          iVar7 = (uint)*(ushort *)((int)param_1 + 0x1a) + *(int *)(pbVar20 + 0x28);
          goto LAB_005a89f6;
        case 0x8162:
          if ((DAT_00802a30 != (void *)0x0) && (*(char *)((int)DAT_00802a30 + 0x493) == '\x05'))
          break;
          if ((char)piVar5[0x698] != '\0') {
            iVar7 = *(int *)((int)piVar5 + 0x1eaa);
            if (iVar7 != 0) {
              if ((uint)param_1[5] < *(uint *)(iVar7 + 0xc)) {
                pcVar22 = (char *)(*(int *)(iVar7 + 8) * param_1[5] + *(int *)(iVar7 + 0x1c));
              }
              else {
                pcVar22 = (char *)0x0;
              }
              if (pcVar22 != (char *)0x0) {
                if (DAT_00802a30 != (void *)0x0) {
                  uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
                  uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
                  *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
                  *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
                  thunk_FUN_0054bf40(0,uVar13,uVar6);
                  thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),
                                     *(int *)((int)pvVar17 + 0xc9));
                  *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
                  *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
                }
                iVar7 = -1;
                pcVar11 = pcVar22 + 0x40;
                do {
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                } while (cVar1 != '\0');
                if (iVar7 == -2) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar22,pcVar22 + 0x40,1);
                }
                else if (*(int *)(piVar5[0x6bb] + 8) < 1) {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar22,(char *)0x0,1);
                }
                else {
                  thunk_FUN_0055d390(&DAT_00802a90,pcVar22,
                                     (char *)**(undefined4 **)(piVar5[0x6bb] + 0x14),1);
                }
              }
            }
            break;
          }
          uVar19 = param_1[5];
          if (uVar19 == 0) {
            if (DAT_00802a30 != (void *)0x0) {
              uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
              uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
              *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
              *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
              thunk_FUN_0054bf40(0,uVar13,uVar6);
              thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9)
                                );
              *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
              *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
            }
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            *(undefined1 *)(piVar5 + 0x698) = 1;
            *(undefined4 *)((int)piVar5 + 0x2d) = 0x20;
            *(undefined4 *)((int)piVar5 + 0x31) = 0;
            if (piVar5[0x6c6] != 0) {
              FUN_006e6080(piVar5,2,piVar5[0x6c6],(undefined4 *)((int)piVar5 + 0x1d));
            }
            *(undefined4 *)((int)piVar5 + 0x31) = 1;
            if (piVar5[0x6c9] != 0) {
              FUN_006e6080(piVar5,2,piVar5[0x6c9],(undefined4 *)((int)piVar5 + 0x1d));
            }
            break;
          }
          iVar7 = *(int *)((int)piVar5 + 0x1ea6);
          if (uVar19 < *(uint *)(iVar7 + 0xc)) {
            pcVar22 = (char *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c));
          }
          else {
            pcVar22 = (char *)0x0;
          }
          if (pcVar22 == (char *)0x0) break;
          if (piVar5[0x6c3] != 0) {
            FUN_006ab060(piVar5 + 0x6c3);
          }
          uVar19 = 0xffffffff;
          pcVar11 = pcVar22;
          do {
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          pcVar11 = (char *)FUN_006aac70(~uVar19);
          uVar19 = 0xffffffff;
          piVar5[0x6c3] = (int)pcVar11;
          do {
            pcVar25 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar25 = pcVar22 + 1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar25;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar25 + -uVar19;
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar11 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar11 = pcVar11 + 1;
          }
          (**(code **)(*piVar5 + 8))();
          *(undefined1 *)((int)piVar5 + 0x1a61) = 10;
          *(undefined1 *)((int)piVar5 + 0x1ed2) = 6;
          iVar7 = *(int *)((int)piVar5 + 0x1a5b);
          if (*(int *)(iVar7 + 0x2e6) == 0) break;
          puVar9 = local_370;
          for (iVar28 = 6; iVar28 != 0; iVar28 = iVar28 + -1) {
            *puVar9 = 0xffffffff;
            puVar9 = puVar9 + 1;
          }
          *(undefined2 *)puVar9 = 0xffff;
          local_7c = 0;
          local_78 = 0;
          local_80 = 0x10101;
          local_74 = 0;
          thunk_FUN_005b9010(*(void **)(iVar7 + 0x2e6),(int)local_370);
          puVar9 = &local_80;
          goto LAB_005a7f3b;
        case 0x8163:
          if (*(char *)((int)piVar5 + 0x1a5f) == '\x06') {
            if ((char)piVar5[0x698] == '\0') {
              local_1ac = 0x20;
              if (param_1[5] == 0) {
                local_1a8 = 0;
                if (piVar5[0x6c6] != 0) {
                  FUN_006e6080(piVar5,2,piVar5[0x6c6],local_1bc);
                }
              }
              else {
                local_1a8 = 1;
                if (piVar5[0x6c6] != 0) {
                  FUN_006e6080(piVar5,2,piVar5[0x6c6],local_1bc);
                }
              }
            }
          }
          else if (*(char *)((int)piVar5 + 0x1a5f) == '\b') {
            iVar7 = *(int *)((int)piVar5 + 0x1ebe);
            bVar26 = true;
            if (((iVar7 != 0) && ((uint)param_1[5] < *(uint *)(iVar7 + 0xc))) &&
               (iVar7 = *(int *)(iVar7 + 8) * param_1[5] + *(int *)(iVar7 + 0x1c), iVar7 != 0)) {
              bVar26 = false;
              FUN_006b6020(piVar5[0x6ba],0,(char *)(iVar7 + 0x2c));
              *(undefined4 *)((int)piVar5 + 0x2d) = 0x33;
              *(int *)((int)piVar5 + 0x31) = piVar5[0x6ba];
              FUN_006e6080(piVar5,2,piVar5[0x6b1],(undefined4 *)((int)piVar5 + 0x1d));
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              thunk_FUN_00540620(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                                 *(BITMAPINFO **)((int)piVar5 + 0x1e92));
              FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,0x15e,0x8c,0xff);
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0,0x15e,0x11);
              uVar6 = 2;
              iVar30 = -1;
              iVar28 = -1;
              puVar10 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              FUN_007119c0(puVar10,iVar28,iVar30,uVar6);
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,10,0x11,0x14a,0x11);
              FUN_007119c0((uint *)(iVar7 + 0x1c),0,-1,0);
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0x22,0x15e,0x11);
              uVar6 = 2;
              iVar30 = -1;
              iVar28 = -1;
              puVar10 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              FUN_007119c0(puVar10,iVar28,iVar30,uVar6);
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,10,0x33,0x14a,0x11);
              uVar6 = 0;
              iVar30 = -1;
              iVar28 = 0;
              if (*(char *)(iVar7 + 0x7c) == '\0') {
                puVar10 = (uint *)FUN_006b0140(0x2573,DAT_00807618);
              }
              else {
                puVar10 = (uint *)(iVar7 + 0x83);
              }
              FUN_007119c0(puVar10,iVar28,iVar30,uVar6);
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0x44,0x15e,0x11);
              uVar6 = 2;
              iVar30 = -1;
              iVar28 = -1;
              puVar10 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              FUN_007119c0(puVar10,iVar28,iVar30,uVar6);
              if (*(char *)(iVar7 + 0x7c) != '\0') {
                FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,10,0x55,0x14a,0x11);
                iVar28 = (int)*(char *)(iVar7 + 0x7e) << 1;
                wsprintfA((LPSTR)&DAT_0080f33a,s__dx_d_007cc60c,iVar28,iVar28);
                FUN_007119c0(&DAT_0080f33a,0,-1,0);
              }
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0x66,0x15e,0x11);
              uVar6 = 2;
              iVar30 = -1;
              iVar28 = -1;
              puVar10 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              FUN_007119c0(puVar10,iVar28,iVar30,uVar6);
              if (*(char *)(iVar7 + 0x7c) != '\0') {
                FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,10,0x77,0x14a,0x11);
                uVar6 = FUN_006b0140(0x2574,DAT_00807618);
                wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,(int)*(char *)(iVar7 + 0x7d),uVar6);
                FUN_007119c0(&DAT_0080f33a,0,-1,0);
              }
              FUN_006b4680(DAT_0080759c,0x1a4,0x7d,*(BITMAPINFO **)((int)piVar5 + 0x1e8e),
                           (uint *)0x0,0,0,0x15e,0x8c,0x10000ff);
            }
            if (bVar26) {
              FUN_006b6020(piVar5[0x6ba],0,&DAT_008016a0);
              *(undefined4 *)((int)piVar5 + 0x2d) = 0x33;
              *(int *)((int)piVar5 + 0x31) = piVar5[0x6ba];
              FUN_006e6080(piVar5,2,piVar5[0x6b1],(undefined4 *)((int)piVar5 + 0x1d));
              FUN_006b5f80(DAT_008075a8,0x1a4,0x7d,0x15e,0x8c);
              thunk_FUN_00540620(0x1a4,0x7d,0xb,0x1f,0x15e,(byte *)0x8c,'\x01',
                                 *(BITMAPINFO **)((int)piVar5 + 0x1e92));
              FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,0x15e,0x8c,0xff);
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0,0x15e,0x11);
              uVar6 = 2;
              iVar28 = -1;
              iVar7 = -1;
              puVar10 = (uint *)FUN_006b0140(0x2572,DAT_00807618);
              FUN_007119c0(puVar10,iVar7,iVar28,uVar6);
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0x22,0x15e,0x11);
              uVar6 = 2;
              iVar28 = -1;
              iVar7 = -1;
              puVar10 = (uint *)FUN_006b0140(0x2347,DAT_00807618);
              FUN_007119c0(puVar10,iVar7,iVar28,uVar6);
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0x44,0x15e,0x11);
              uVar6 = 2;
              iVar28 = -1;
              iVar7 = -1;
              puVar10 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
              FUN_007119c0(puVar10,iVar7,iVar28,uVar6);
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0x66,0x15e,0x11);
              uVar6 = 2;
              iVar28 = -1;
              iVar7 = -1;
              puVar10 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
              FUN_007119c0(puVar10,iVar7,iVar28,uVar6);
              FUN_006b4680(DAT_0080759c,0x1a4,0x7d,*(BITMAPINFO **)((int)piVar5 + 0x1e8e),
                           (uint *)0x0,0,0,0x15e,0x8c,0x10000ff);
            }
          }
          break;
        case 0x8164:
          thunk_FUN_005b6560((int)piVar5 + 0x1cdb,(int)param_1,0);
          break;
        case 0x8165:
          thunk_FUN_005b6560((int)(piVar5 + 0x75b),(int)param_1,0);
          break;
        case 0x8166:
          uVar19 = *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
          *(uint *)((int)piVar5 + 0x1e1d) = uVar19;
          if (*(uint *)((int)piVar5 + 0x1e01) != 0xffffffff) {
            FUN_006b3730(*(uint **)((int)piVar5 + 0x1e45),*(uint *)((int)piVar5 + 0x1e01),
                         *(uint *)((int)piVar5 + 0x1e05),*(uint *)((int)piVar5 + 0x1e19),uVar19);
          }
        }
        goto switchD_005a43f5_caseD_1;
      }
      switch(uVar19) {
      case 0xc0a2:
        if (*(int *)(*(int *)((int)piVar5 + 0x1ea2) + 8) < 1) {
          pcVar22 = (char *)0x0;
        }
        else {
          pcVar22 = (char *)**(undefined4 **)(*(int *)((int)piVar5 + 0x1ea2) + 0x14);
        }
        bVar26 = thunk_FUN_00571810(pcVar22);
        if (CONCAT31(extraout_var,bVar26) == 0) {
          if (*(int *)(*(int *)((int)piVar5 + 0x1ea2) + 8) < 1) {
            pcVar22 = (char *)0x0;
          }
          else {
            pcVar22 = (char *)**(undefined4 **)(*(int *)((int)piVar5 + 0x1ea2) + 0x14);
          }
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,pcVar22);
        }
        else {
          iVar28 = 0;
          iVar7 = *(int *)(*(int *)((int)piVar5 + 0x1a5b) + 0x696);
          if (0 < *(int *)(iVar7 + 8)) {
            if (*(int *)(iVar7 + 8) < 1) {
              pcVar22 = (char *)0x0;
              goto LAB_005a8b12;
            }
            do {
              pcVar22 = *(char **)(*(int *)(iVar7 + 0x14) + iVar28 * 4);
LAB_005a8b12:
              thunk_FUN_005a1f00(8,&DAT_008016a0,pcVar22,8);
              iVar28 = iVar28 + 1;
              iVar7 = *(int *)(*(int *)((int)piVar5 + 0x1a5b) + 0x696);
            } while (iVar28 < *(int *)(iVar7 + 8));
          }
        }
        FUN_006b6020(*(int *)((int)piVar5 + 0x1ea2),0,&DAT_008016a0);
        *(undefined4 *)((int)piVar5 + 0x2d) = 0x33;
        *(undefined4 *)((int)piVar5 + 0x31) = *(undefined4 *)((int)piVar5 + 0x1ea2);
        goto LAB_005a8c85;
      case 0xc0a3:
        iVar7 = piVar5[0x6ba];
        iVar28 = *(int *)(iVar7 + 8);
joined_r0x005a8b8f:
        if (0 < iVar28) {
          pcVar22 = (char *)**(undefined4 **)(iVar7 + 0x14);
        }
        iVar30 = -1;
        do {
          if (iVar30 == 0) break;
          iVar30 = iVar30 + -1;
          cVar1 = *pcVar22;
          pcVar22 = pcVar22 + 1;
        } while (cVar1 != '\0');
        if (iVar30 != -2) {
          if (*(int *)(piVar5[0x6bb] + 8) < 1) {
            pcVar22 = (char *)0x0;
          }
          else {
            pcVar22 = (char *)**(undefined4 **)(piVar5[0x6bb] + 0x14);
          }
          if (iVar28 < 1) {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)0x0,pcVar22,1);
          }
          else {
            thunk_FUN_0055d390(&DAT_00802a90,(char *)**(undefined4 **)(iVar7 + 0x14),pcVar22,1);
          }
        }
        break;
      case 0xc0a4:
        if ((char)piVar5[0x698] != '\0') break;
        *(undefined4 *)((int)piVar5 + 0x2d) = 0x26;
        FUN_006e6080(piVar5,2,piVar5[0x6c8],(undefined4 *)((int)piVar5 + 0x1d));
        uVar19 = *(uint *)((int)piVar5 + 0x31);
        if (uVar19 == 0) break;
        iVar7 = *(int *)((int)piVar5 + 0x1ea6);
        if (uVar19 < *(uint *)(iVar7 + 0xc)) {
          iVar7 = *(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c);
        }
        else {
          iVar7 = 0;
        }
        if (*(int *)(*(int *)((int)piVar5 + 0x1ea2) + 8) < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined4 **)(*(int *)((int)piVar5 + 0x1ea2) + 0x14);
        }
        wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007cc5f0,uVar6,iVar7);
        FUN_006b6020(*(int *)((int)piVar5 + 0x1ea2),0,(char *)&DAT_0080f33a);
        *(undefined4 *)((int)piVar5 + 0x2d) = 0x33;
        *(undefined4 *)((int)piVar5 + 0x31) = *(undefined4 *)((int)piVar5 + 0x1ea2);
LAB_005a8c85:
        FUN_006e6080(piVar5,2,piVar5[0x6c4],(undefined4 *)((int)piVar5 + 0x1d));
        break;
      case 0xc0a5:
        DAT_00807360 = DAT_00807360 == '\0';
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (uVar19 == 0x8160) {
      param_1[6] = 0x11;
      goto switchD_005a43f5_caseD_1;
    }
    switch(uVar19) {
    case 0x6980:
      piVar23 = (int *)param_1[6];
      iVar7 = *piVar23;
      local_140 = iVar7 + -0xb4;
      iVar28 = piVar23[1];
      local_13c = iVar28 + -0xaa;
      local_138 = piVar23[2];
      local_134 = piVar23[3];
      FUN_006b4170(piVar5[0x6b0],0,iVar7 + -0xb3,iVar28 + -0xa9,local_138 + -2,local_134 + -2,0xff);
      if (DAT_0080735f != '\0') {
        pbVar20 = (byte *)FUN_0070b3a0(*(int *)((int)piVar5 + 0x1a83),0);
        thunk_FUN_00540760((undefined4 *)piVar5[0x6b0],iVar7 + -0xb2,iVar28 + -0xa8,'\x06',pbVar20);
      }
      break;
    case 0x6981:
      iVar7 = *(int *)((int)piVar5 + 0x1a73);
      local_14 = (BITMAPINFO *)0x0;
      if (*(int *)(iVar7 + 0xa0) != 0) {
        FUN_00710790(iVar7);
      }
      iVar28 = param_1[7];
      iVar7 = *(int *)(iVar7 + 0x8a);
      local_50 = *(int *)(iVar28 + 0x24) + -0xb4;
      local_48 = *(int *)(iVar28 + 0x2c);
      local_44 = *(int *)(iVar28 + 0x30);
      local_4c = *(int *)(iVar28 + 0x28) -
                 ((-(uint)(*(char *)((int)piVar5 + 0x1abb) != '\0') & 0xffffffb4) + 0xaa);
      FUN_006b4170(piVar5[0x6b0],0,*(int *)(iVar28 + 0x24) + -0xb5,local_4c,local_48 + 2,local_44,
                   0xff);
      iVar28 = param_1[5];
      if (iVar28 != 0) {
        local_8 = (uint *)0x0;
        do {
          if (*(uint **)(iVar28 + (int)local_8) == (uint *)0x0) break;
          iVar7 = FUN_007111c0(*(void **)((int)piVar5 + 0x1a73),*(uint **)(iVar28 + (int)local_8));
          FUN_00710a90(piVar5[0x6b0],0,local_50,
                       (int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                       local_4c,local_48,iVar7);
          FUN_007119c0(*(uint **)(param_1[5] + (int)local_8),0,-1,0);
          local_14 = (BITMAPINFO *)
                     ((int)&(((BITMAPINFO *)(local_14->bmiColors + -10))->bmiHeader).biSize +
                     *(int *)(*(int *)((int)piVar5 + 0x1a73) + 0x5c) + iVar7);
          iVar28 = param_1[5];
          local_8 = local_8 + 1;
        } while (iVar28 != 0);
      }
      if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
        iVar30 = (uint)*(ushort *)((int)param_1 + 0x1a) + local_4c;
        iVar28 = (uint)*(ushort *)(param_1 + 6) + local_50;
        FUN_006b5b10(piVar5[0x6b0],0,iVar28,iVar30,iVar28,iVar30 + iVar7,9,0xd);
      }
      goto LAB_005a7c92;
    case 0x6982:
      if (((*(int *)((int)piVar5 + 0x1e8e) != 0) && (*(int *)((int)piVar5 + 0x1e92) != 0)) &&
         (local_8 = (uint *)param_1[7], local_8 != (uint *)0x0)) {
        if (*(char *)((int)piVar5 + 0x1a5f) == '\x03') {
          iVar7 = *(int *)((int)piVar5 + 0x1a73);
          local_1c = (byte *)piVar5[0x6c2];
        }
        else {
          iVar7 = *(int *)((int)piVar5 + 0x1a77);
          local_1c = *(byte **)((int)piVar5 + 0x1e9e);
        }
        FUN_006b5f80(DAT_008075a8,local_8[9],local_8[10],local_8[0xb],local_8[0xc]);
        thunk_FUN_00540620(local_8[9],local_8[10],6,1,local_8[0xb],(byte *)local_8[0xc],'\x01',
                           *(BITMAPINFO **)((int)piVar5 + 0x1e92));
        FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,local_8[0xb],local_8[0xc],0xff);
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
              if (*(int *)(iVar7 + 0xa0) != 0) {
                FUN_00710790(iVar7);
              }
              local_c = *(byte **)(iVar7 + 0x8a);
              if (*(int *)(iVar7 + 0xa0) != 0) {
                FUN_00710790(iVar7);
              }
              FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,
                           ((int)local_14 - (uint)*(ushort *)((int)param_1 + 0x16)) *
                           *(int *)(iVar7 + 0x8a),*(int *)(*(int *)((int)piVar5 + 0x1e8e) + 4),
                           (int)local_c);
              FUN_007119c0(local_10,0,-1,2);
            }
            local_14 = (BITMAPINFO *)((int)&(local_14->bmiHeader).biSize + 1);
          } while ((int)local_14 < (int)((uint)*(ushort *)((int)param_1 + 0x16) + local_8[0x78]));
        }
        FUN_006b4680(DAT_0080759c,local_8[9],local_8[10],*(BITMAPINFO **)((int)piVar5 + 0x1e8e),
                     (uint *)0x0,0,0,local_8[0xb],local_8[0xc],0x10000ff);
      }
      break;
    case 0x6983:
      if ((*(int *)((int)piVar5 + 0x1e8e) != 0) && (*(int *)((int)piVar5 + 0x1e92) != 0)) {
        iVar7 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x28),
                     *(int *)(iVar7 + 0x2c),*(int *)(iVar7 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x28),6,0x15f,
                           *(uint *)(iVar7 + 0x2c),*(byte **)(iVar7 + 0x30),'\x01',
                           *(BITMAPINFO **)((int)piVar5 + 0x1e92));
        FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(int *)(iVar7 + 0x2c),
                     *(int *)(iVar7 + 0x30),0xff);
        if (param_1[5] != 0) {
          FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0,
                       *(int *)(*(int *)((int)piVar5 + 0x1e8e) + 4),0x14);
          FUN_007119c0(*(uint **)param_1[5],0,-1,5);
        }
        uVar2 = *(ushort *)(param_1 + 6);
        if ((uVar2 != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          FUN_006b5b10(*(int *)((int)piVar5 + 0x1e8e),0,(uint)uVar2,2,(uint)uVar2,0x11,9,0xd);
        }
        FUN_006b4680(DAT_0080759c,*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x28),
                     *(BITMAPINFO **)((int)piVar5 + 0x1e8e),(uint *)0x0,0,0,*(DWORD *)(iVar7 + 0x2c)
                     ,*(DWORD *)(iVar7 + 0x30),0x10000ff);
      }
      break;
    case 0x6984:
      if ((*(int *)((int)piVar5 + 0x1e8e) == 0) || (*(int *)((int)piVar5 + 0x1e92) == 0)) break;
      pbVar20 = (byte *)param_1[7];
      FUN_006b5f80(DAT_008075a8,*(int *)(pbVar20 + 0x24),*(int *)(pbVar20 + 0x28),
                   *(int *)(pbVar20 + 0x2c),*(int *)(pbVar20 + 0x30));
      thunk_FUN_00540620(*(int *)(pbVar20 + 0x24),*(int *)(pbVar20 + 0x28),
                         *(int *)(pbVar20 + 0x24) + -0x13,0x160,*(uint *)(pbVar20 + 0x2c),
                         *(byte **)(pbVar20 + 0x30),'\x01',*(BITMAPINFO **)((int)piVar5 + 0x1e92));
      FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(int *)(pbVar20 + 0x2c),
                   *(int *)(pbVar20 + 0x30),0xff);
      FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(int *)(pbVar20 + 0x2c),
                   *(int *)(pbVar20 + 0x30));
      if ((short)param_1[5] == 1) {
        iVar7 = 2;
      }
      else {
        iVar7 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar30 = -1;
      iVar28 = -1;
      puVar10 = (uint *)FUN_006b0140(0x2565,DAT_00807618);
      FUN_007119c0(puVar10,iVar28,iVar30,iVar7);
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
      if (*(int *)((int)piVar5 + 0x1e8e) == 0) break;
      local_14 = (BITMAPINFO *)0x0;
      switch(uVar19) {
      case 0x6985:
      case 0x6986:
        local_14 = *(BITMAPINFO **)((int)piVar5 + 0x1e9a);
        local_10 = (uint *)0x1e9;
        break;
      default:
        goto switchD_005a7593_caseD_6987;
      case 0x6989:
      case 0x698a:
      case 0x698d:
        local_14 = *(BITMAPINFO **)((int)piVar5 + 0x1e92);
        local_10 = (uint *)0x199;
        break;
      case 0x698e:
      case 0x698f:
      case 0x6990:
      case 0x6991:
      case 0x6992:
        local_14 = *(BITMAPINFO **)((int)piVar5 + 0x1e92);
        local_10 = (uint *)0x22;
      }
      local_1c = (byte *)0x5e;
switchD_005a7593_caseD_6987:
      if (local_14 == (BITMAPINFO *)0x0) break;
      local_c = (byte *)param_1[7];
      switch(uVar19 - 0x6985) {
      case 0:
        local_8 = (uint *)0x2566;
        break;
      case 1:
      case 8:
        local_8 = (uint *)0x2616;
        break;
      case 4:
        uVar19 = *(uint *)((int)piVar5 + 0x1ec2);
        if (uVar19 < 0x401) {
          if (uVar19 == 0x400) {
            local_8 = (uint *)0x235b;
          }
          else if (uVar19 == 0x100) {
            local_8 = (uint *)0x2341;
          }
          else {
            if (uVar19 != 0x200) goto LAB_005a7656;
            local_8 = (uint *)0x235a;
          }
        }
        else if (uVar19 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar19 == 0x502) {
          local_8 = (uint *)0x235d;
        }
        else {
LAB_005a7656:
          local_8 = (uint *)0x235c;
        }
        break;
      case 5:
        if (*(int *)((int)piVar5 + 0x1ec6) == -1) {
          pcVar22 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar22 + 1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar11 + -uVar19;
          pcVar11 = (char *)&DAT_0080f33a;
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar11 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
        else {
          if (*(uint *)((int)piVar5 + 0x1eca) < *(uint *)(DAT_0080c502 + 0xc)) {
            pcVar22 = (char *)(*(int *)(DAT_0080c502 + 8) * *(uint *)((int)piVar5 + 0x1eca) +
                              *(int *)(DAT_0080c502 + 0x1c));
          }
          else {
            pcVar22 = (char *)0x0;
          }
          if (pcVar22 == (char *)0x0) {
            pcVar22 = &DAT_008016a0;
          }
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar22 + 1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar11 + -uVar19;
          pcVar11 = (char *)&DAT_0080f33a;
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar11 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar11 = pcVar11 + 1;
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
      pbVar20 = local_c;
      FUN_006b5f80(DAT_008075a8,*(int *)(local_c + 0x24),*(int *)(local_c + 0x28),
                   *(int *)(local_c + 0x2c),*(int *)(local_c + 0x30));
      thunk_FUN_00540620(*(int *)(pbVar20 + 0x24),*(int *)(pbVar20 + 0x28),
                         *(int *)(pbVar20 + 0x24) - (int)local_10,
                         *(int *)(pbVar20 + 0x28) - (int)local_1c,*(uint *)(pbVar20 + 0x2c),
                         *(byte **)(pbVar20 + 0x30),'\x01',local_14);
      FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(int *)(pbVar20 + 0x2c),
                   *(int *)(pbVar20 + 0x30),0xff);
      FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(int *)(pbVar20 + 0x2c),
                   *(int *)(pbVar20 + 0x30));
      if ((short)param_1[5] == 1) {
        local_c = (byte *)0x2;
      }
      else {
        local_c = (byte *)((-(uint)((short)param_1[5] != 0) & 2) + 1);
      }
      if (param_1[4] == 0x698a) {
        puVar10 = &DAT_0080f33a;
      }
      else {
        puVar10 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      }
      FUN_007119c0(puVar10,-1,-1,local_c);
      if ((short)param_1[5] == 0) {
        bVar18 = 0xd;
      }
      else {
        bVar18 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(undefined4 **)(pbVar20 + 0x2c),
                   *(int *)(pbVar20 + 0x30),4,bVar18);
      if ((short)param_1[5] == 0) {
        bVar18 = 0xd;
      }
      else {
        bVar18 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(*(int *)((int)piVar5 + 0x1e8e),0,2,2,
                   (undefined4 *)(*(int *)(pbVar20 + 0x2c) + -4),*(int *)(pbVar20 + 0x30) + -4,4,
                   bVar18);
LAB_005a754e:
      DVar12 = *(DWORD *)(pbVar20 + 0x30);
      DVar29 = *(DWORD *)(pbVar20 + 0x2c);
      pBVar27 = *(BITMAPINFO **)((int)piVar5 + 0x1e8e);
      iVar7 = *(int *)(pbVar20 + 0x28);
LAB_005a89f6:
      FUN_006b4680(DAT_0080759c,*(int *)(pbVar20 + 0x24),iVar7,pBVar27,(uint *)0x0,0,0,DVar29,DVar12
                   ,0x10000ff);
      break;
    case 0x6987:
      if ((*(int *)((int)piVar5 + 0x1e8e) != 0) && (*(int *)((int)piVar5 + 0x1e9a) != 0)) {
        iVar7 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x28),
                     *(int *)(iVar7 + 0x2c),*(int *)(iVar7 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x28),
                           *(int *)(iVar7 + 0x24) + -0x1e9,*(int *)(iVar7 + 0x28) + -0x5e,
                           *(uint *)(iVar7 + 0x2c),*(byte **)(iVar7 + 0x30),'\x01',
                           *(BITMAPINFO **)((int)piVar5 + 0x1e9a));
        FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(int *)(iVar7 + 0x2c),
                     *(int *)(iVar7 + 0x30),0xff);
        if (param_1[5] != 0) {
          FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0,
                       *(int *)(*(int *)((int)piVar5 + 0x1e8e) + 4),0x19);
          FUN_007119c0(*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar28 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(*(int *)((int)piVar5 + 0x1e8e),0,iVar28,4,iVar28,0x11,9,0xd);
        }
        FUN_006b4680(DAT_0080759c,*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x28),
                     *(BITMAPINFO **)((int)piVar5 + 0x1e8e),(uint *)0x0,0,0,*(DWORD *)(iVar7 + 0x2c)
                     ,*(DWORD *)(iVar7 + 0x30),0x10000ff);
      }
      break;
    case 0x6988:
      if ((*(int *)((int)piVar5 + 0x1e8e) != 0) && (*(int *)((int)piVar5 + 0x1e92) != 0)) {
        iVar7 = param_1[7];
        FUN_006b5f80(DAT_008075a8,*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x28),
                     *(int *)(iVar7 + 0x2c),*(int *)(iVar7 + 0x30));
        thunk_FUN_00540620(*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x28),
                           *(int *)(iVar7 + 0x24) -
                           ((-(uint)(*(char *)((int)piVar5 + 0x1a5f) != '\t') & 0x177) + 0x22),
                           *(int *)(iVar7 + 0x28) + -0x5e,*(uint *)(iVar7 + 0x2c),
                           *(byte **)(iVar7 + 0x30),'\x01',*(BITMAPINFO **)((int)piVar5 + 0x1e92));
        FUN_006b4170(*(int *)((int)piVar5 + 0x1e8e),0,0,0,*(int *)(iVar7 + 0x2c),
                     *(int *)(iVar7 + 0x30),0xff);
        if (param_1[5] != 0) {
          FUN_00710a90(*(int *)((int)piVar5 + 0x1e8e),0,0,0,
                       *(int *)(*(int *)((int)piVar5 + 0x1e8e) + 4),0x19);
          FUN_007119c0(*(uint **)param_1[5],3,-1,5);
        }
        if ((*(ushort *)(param_1 + 6) != 0xffff) || (*(short *)((int)param_1 + 0x1a) != -1)) {
          iVar28 = *(ushort *)(param_1 + 6) + 3;
          FUN_006b5b10(*(int *)((int)piVar5 + 0x1e8e),0,iVar28,3,iVar28,0x11,9,0xd);
        }
        FUN_006b4680(DAT_0080759c,*(int *)(iVar7 + 0x24),*(int *)(iVar7 + 0x28),
                     *(BITMAPINFO **)((int)piVar5 + 0x1e8e),(uint *)0x0,0,0,*(DWORD *)(iVar7 + 0x2c)
                     ,*(DWORD *)(iVar7 + 0x30),0x10000ff);
      }
      break;
    case 0x698b:
      piVar23 = (int *)param_1[6];
      iVar7 = *piVar23;
      iVar28 = iVar7 + -0xb4;
      local_3c = piVar23[1] + -0xaa;
      local_38 = (undefined4 *)piVar23[2];
      local_34 = piVar23[3];
      local_40 = iVar28;
      FUN_006b4170(piVar5[0x6b0],0,iVar28,local_3c,(int)local_38,local_34,0xff);
      if ((short)param_1[5] == 0) {
        bVar18 = 0xd;
      }
      else {
        bVar18 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(piVar5[0x6b0],0,iVar28,local_3c,local_38,local_34,4,bVar18);
      if ((short)param_1[5] == 0) {
        bVar18 = 0xd;
      }
      else {
        bVar18 = (-((short)param_1[5] != 2) & 0x10U) - 2;
      }
      FUN_006c7570(piVar5[0x6b0],0,iVar7 + -0xb2,local_3c + 2,local_38 + -1,local_34 + -4,4,bVar18);
      uVar19 = *(uint *)((int)piVar5 + 0x1ec2);
      if (uVar19 < 0x502) {
        if (uVar19 == 0x501) {
          local_8 = (uint *)0x2342;
        }
        else if (uVar19 == 0x200) {
          local_8 = (uint *)0x235a;
        }
        else {
          if (uVar19 != 0x400) goto LAB_005a7c26;
          local_8 = (uint *)0x235b;
        }
      }
      else if (uVar19 == 0x502) {
        local_8 = (uint *)0x235d;
      }
      else {
LAB_005a7c26:
        local_8 = (uint *)0x2341;
      }
      FUN_00710a90(piVar5[0x6b0],0,iVar28,local_3c,(int)local_38,local_34);
      if ((short)param_1[5] == 1) {
        iVar7 = 2;
      }
      else {
        iVar7 = (-(uint)((short)param_1[5] != 0) & 2) + 1;
      }
      iVar30 = -1;
      iVar28 = -1;
      puVar10 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      FUN_007119c0(puVar10,iVar28,iVar30,iVar7);
LAB_005a7c92:
      FUN_006b35d0(DAT_008075a8,piVar5[0x6af]);
      break;
    case 0x698c:
      FUN_00710a90(param_1[6],0,0,0,0,0);
      iVar7 = *(int *)((int)piVar5 + 0x1fb3);
      if ((uint)*(ushort *)(param_1 + 5) < *(uint *)(iVar7 + 0xc)) {
        puVar10 = (uint *)(*(int *)(iVar7 + 8) * (uint)*(ushort *)(param_1 + 5) +
                          *(int *)(iVar7 + 0x1c));
      }
      else {
        puVar10 = (uint *)0x0;
      }
      FUN_007119c0(puVar10,-1,-1,3 - (uint)(*(short *)((int)param_1 + 0x16) != 1));
      if (*(short *)((int)param_1 + 0x16) == 1) {
        iVar7 = param_1[6];
        FUN_006b5ee0(iVar7,0,0,0,*(int *)(iVar7 + 4),*(int *)(iVar7 + 8),0xf,0xd);
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar19 == 0x6949) {
    (**(code **)(*piVar5 + 8))();
    *(undefined1 *)((int)piVar5 + 0x1a61) = 9;
    iVar7 = *(int *)((int)piVar5 + 0x1a5b);
    if (*(int *)(iVar7 + 0x2e6) == 0) goto switchD_005a43f5_caseD_1;
    puVar9 = local_2ac;
    for (iVar28 = 6; iVar28 != 0; iVar28 = iVar28 + -1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0xffff;
    local_cc = 0;
    local_c8 = 0;
    local_d0 = 0x10101;
    local_c4 = 0;
    thunk_FUN_005b9010(*(void **)(iVar7 + 0x2e6),(int)local_2ac);
    puVar9 = &local_d0;
LAB_005a7f3b:
    thunk_FUN_005b8f40(*(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6),puVar9);
    goto switchD_005a43f5_caseD_1;
  }
  if (0x63ff < uVar19) {
    if (uVar19 < 0x6907) {
      if (uVar19 == 0x6906) {
        if (*(char *)((int)DAT_00802a30 + 0x493) == '\x05') goto switchD_005a43f5_caseD_1;
        local_c = (byte *)param_1[7];
        *(undefined4 *)((int)piVar5 + 0x1f43) = 0x6506;
        uVar6 = *(undefined4 *)(local_c + 8);
        *(undefined4 *)((int)piVar5 + 0x1f63) = 0x698c;
        *(undefined4 *)((int)piVar5 + 0x1f4b) = uVar6;
        *(undefined4 *)(*(int *)((int)piVar5 + 0x1fb3) + 0xc) = 0;
        *(undefined4 *)((int)piVar5 + 0x20bb) = 1;
        pcVar22 = (char *)FUN_006b0140(0x25b4,DAT_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar11 = pcVar22;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar11 = pcVar22 + 1;
          cVar1 = *pcVar22;
          pcVar22 = pcVar11;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar22 = pcVar11 + -uVar19;
        pcVar11 = (char *)((int)piVar5 + 0x1fb7);
        for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar11 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
        *(undefined4 *)((int)piVar5 + 0x20bb) = 2;
        pcVar22 = (char *)FUN_006b0140(0x25b5,DAT_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar11 = pcVar22;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar11 = pcVar22 + 1;
          cVar1 = *pcVar22;
          pcVar22 = pcVar11;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar22 = pcVar11 + -uVar19;
        pcVar11 = (char *)((int)piVar5 + 0x1fb7);
        for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar11 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
        iVar7 = *(int *)((int)piVar5 + 0x1fb3);
        *(undefined4 *)((int)piVar5 + 0x1f7b) = *(undefined4 *)(iVar7 + 0xc);
        uVar19 = 0;
        *(undefined4 *)((int)piVar5 + 0x1f73) = 0;
        if (*(uint *)(iVar7 + 0xc) != 0) {
          do {
            if (DAT_00803140 ==
                *(int *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c) + 0x104)) {
              *(uint *)((int)piVar5 + 0x1f73) = uVar19;
              break;
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(iVar7 + 0xc));
        }
      }
      else {
        if (uVar19 < 0x6903) {
          if (uVar19 == 0x6902) {
            iVar7 = piVar5[0x6ba];
            iVar28 = *(int *)(iVar7 + 8);
            goto joined_r0x005a8b8f;
          }
          if (0x6900 < uVar19) {
            if ((uVar19 == 0x6901) && ((char)piVar5[0x698] == '\0')) {
              *(undefined4 *)((int)piVar5 + 0x2d) = 0x26;
              puVar9 = (undefined4 *)((int)piVar5 + 0x1d);
              FUN_006e6080(piVar5,2,piVar5[0x6c8],puVar9);
              iVar7 = *(int *)((int)piVar5 + 0x1ea6);
              if ((uint)*(ushort *)((int)piVar5 + 0x31) < *(uint *)(iVar7 + 0xc)) {
                iVar7 = *(int *)(iVar7 + 8) * (uint)*(ushort *)((int)piVar5 + 0x31) +
                        *(int *)(iVar7 + 0x1c);
              }
              else {
                iVar7 = 0;
              }
              if (iVar7 != 0) {
                *(undefined4 *)((int)piVar5 + 0x2d) = 0x32;
                FUN_006e6080(piVar5,2,piVar5[0x6c4],puVar9);
                iVar28 = *(int *)((int)piVar5 + 0x31);
                if (iVar28 != 0) {
                  if (*(int *)(iVar28 + 8) < 1) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = **(undefined4 **)(iVar28 + 0x14);
                  }
                  uVar13 = FUN_006b0140(0x2568,DAT_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,s__s__s__s_007cc62c,uVar13,iVar7,uVar6);
                  CFsgsConnection::SendChatMessage
                            ((CFsgsConnection *)&DAT_00802a90,(char *)&DAT_0080f33a);
                  FUN_006b6020(*(int *)((int)piVar5 + 0x1ea2),0,&DAT_008016a0);
                  *(undefined4 *)((int)piVar5 + 0x2d) = 0x33;
                  *(undefined4 *)((int)piVar5 + 0x31) = *(undefined4 *)((int)piVar5 + 0x1ea2);
                  FUN_006e6080(piVar5,2,piVar5[0x6c4],puVar9);
                }
              }
            }
            goto switchD_005a43f5_caseD_1;
          }
          if (uVar19 == 0x6900) {
            DAT_0080735f = DAT_0080735f == '\0';
            *(undefined4 *)((int)piVar5 + 0x2d) = 5;
            FUN_006e6080(piVar5,2,piVar5[0x6b4],(undefined4 *)((int)piVar5 + 0x1d));
            goto switchD_005a43f5_caseD_1;
          }
          if (uVar19 != 0x6506) {
            if (uVar19 == 0x68ff) {
              if (param_1[5] == 0) {
                if (*(int *)((int)piVar5 + 0x1ab7) == *param_1) {
                  *(undefined4 *)((int)piVar5 + 0x1ab7) = 0;
                }
              }
              else if (param_1[5] == 1) {
                *(int *)((int)piVar5 + 0x1ab7) = *param_1;
              }
            }
            goto switchD_005a43f5_caseD_1;
          }
          iVar7 = *(int *)((int)piVar5 + 0x1fb3);
          uVar19 = param_1[5];
          if (*(uint *)(iVar7 + 0xc) <= uVar19) goto switchD_005a43f5_caseD_1;
          if (*(char *)((int)piVar5 + 0x1a5f) == '\t') {
            if (param_1[6] == *(int *)((int)piVar5 + 0x1eb6)) {
              DAT_00803140 = *(ulong *)(*(int *)(iVar7 + 8) * uVar19 + 0x104 +
                                       *(int *)(iVar7 + 0x1c));
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pvVar17 = DAT_00802a30;
joined_r0x005a55e5:
              DAT_00802a30 = pvVar17;
              if (pvVar17 == (void *)0x0) goto LAB_005a5634;
              *(undefined1 *)((int)pvVar17 + 0x493) = 5;
              *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
              thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),
                                 *(undefined4 *)((int)pvVar17 + 0xc9));
              iVar7 = *(int *)((int)pvVar17 + 0xc9);
              iVar28 = *(int *)((int)pvVar17 + 0xc5);
            }
            else {
              DAT_00803144 = *(int *)(*(int *)(iVar7 + 8) * uVar19 + 0x104 + *(int *)(iVar7 + 0x1c))
              ;
              CFsgsConnection::RequestLadderList
                        ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
              pvVar17 = DAT_00802a30;
              if (DAT_00802a30 == (void *)0x0) goto LAB_005a5634;
              uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
              uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
              *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
              *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
              thunk_FUN_0054bf40(0,uVar13,uVar6);
              iVar7 = *(int *)((int)pvVar17 + 0xc9);
              iVar28 = *(int *)((int)pvVar17 + 0xc5);
            }
LAB_005a561c:
            thunk_FUN_00543c90(pvVar17,iVar28,iVar7);
            *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
            *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
          }
          else {
            if (param_1[6] != *(int *)((int)piVar5 + 0x1eb6)) {
              iVar7 = *(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c);
              *(undefined4 *)((int)piVar5 + 0x1ec6) = *(undefined4 *)(iVar7 + 0x104);
              *(undefined4 *)((int)piVar5 + 0x1eca) = *(undefined4 *)(iVar7 + 0x108);
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,*(ulong *)((int)piVar5 + 0x1ec2),
                         (char *)0x0);
              DVar12 = timeGetTime();
              *(DWORD *)((int)piVar5 + 0x1a63) = DVar12;
              pvVar17 = DAT_00802a30;
              goto joined_r0x005a55e5;
            }
            *(undefined4 *)((int)piVar5 + 0x1ec2) =
                 *(undefined4 *)(*(int *)(iVar7 + 8) * uVar19 + 0x104 + *(int *)(iVar7 + 0x1c));
            if (*(char *)((int)piVar5 + 0x1a5f) == '\b') {
              iVar7 = *(int *)((int)piVar5 + 0x1ec2);
              puVar9 = local_24c;
              for (iVar28 = 8; iVar28 != 0; iVar28 = iVar28 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
              }
              *(undefined4 *)((int)piVar5 + 0x1ec6) = 0xffffffff;
              local_238 = (uint)(iVar7 == 0x100);
              *(undefined4 *)((int)piVar5 + 0x1eca) = 0;
              local_23c = 0x20;
              if (*(int *)((int)piVar5 + 0x1eba) != 0) {
                FUN_006e6080(piVar5,2,*(int *)((int)piVar5 + 0x1eba),local_24c);
              }
              CFsgsConnection::RequestGameList
                        ((CFsgsConnection *)&DAT_00802a90,*(ulong *)((int)piVar5 + 0x1ec2),
                         (char *)0x0);
              DVar12 = timeGetTime();
              *(DWORD *)((int)piVar5 + 0x1a63) = DVar12;
              pvVar17 = DAT_00802a30;
              if (DAT_00802a30 != (void *)0x0) {
                uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
                uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
                *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
                *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
                thunk_FUN_0054bf40(0,uVar13,uVar6);
                iVar7 = *(int *)((int)pvVar17 + 0xc9);
                iVar28 = *(int *)((int)pvVar17 + 0xc5);
                goto LAB_005a561c;
              }
            }
          }
LAB_005a5634:
          *(undefined4 *)((int)piVar5 + 0x2d) = 5;
          FUN_006e6080(piVar5,2,param_1[6],(undefined4 *)((int)piVar5 + 0x1d));
          goto switchD_005a43f5_caseD_1;
        }
        if (uVar19 == 0x6903) {
          if (DAT_00802a30 != (void *)0x0) {
            uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
            uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
            *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
            *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
            thunk_FUN_0054bf40(0,uVar13,uVar6);
            thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
            *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
            *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
          }
          if (*(char *)((int)piVar5 + 0x1a5f) == '\x06') {
            CFsgsConnection::RequestChannelList((CFsgsConnection *)&DAT_00802a90);
            *(undefined1 *)(piVar5 + 0x698) = 1;
          }
          if (*(char *)((int)piVar5 + 0x1a5f) == '\b') {
            CFsgsConnection::RequestGameList
                      ((CFsgsConnection *)&DAT_00802a90,*(ulong *)((int)piVar5 + 0x1ec2),(char *)0x0
                      );
            DVar12 = timeGetTime();
            *(DWORD *)((int)piVar5 + 0x1a63) = DVar12;
          }
          goto switchD_005a43f5_caseD_1;
        }
        if (uVar19 == 0x6904) {
          local_c = (byte *)param_1[7];
          *(undefined4 *)((int)piVar5 + 0x1f43) = 0x6506;
          uVar6 = *(undefined4 *)(local_c + 8);
          *(undefined4 *)((int)piVar5 + 0x1f63) = 0x698c;
          *(undefined4 *)((int)piVar5 + 0x1f4b) = uVar6;
          *(undefined4 *)(*(int *)((int)piVar5 + 0x1fb3) + 0xc) = 0;
          if (*(char *)((int)piVar5 + 0x1a5f) == '\b') {
            *(undefined4 *)((int)piVar5 + 0x20bb) = 0;
            pcVar22 = (char *)FUN_006b0140(0x235c,DAT_00807618);
            uVar19 = 0xffffffff;
            do {
              pcVar11 = pcVar22;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar11 = pcVar22 + 1;
              cVar1 = *pcVar22;
              pcVar22 = pcVar11;
            } while (cVar1 != '\0');
            uVar19 = ~uVar19;
            pcVar22 = pcVar11 + -uVar19;
            pcVar11 = (char *)((int)piVar5 + 0x1fb7);
            for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
              *pcVar11 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar11 = pcVar11 + 1;
            }
            FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
          }
          *(undefined4 *)((int)piVar5 + 0x20bb) = 0x100;
          pcVar22 = (char *)FUN_006b0140(0x2341,DAT_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar22 + 1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar11 + -uVar19;
          pcVar11 = (char *)((int)piVar5 + 0x1fb7);
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar11 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
          *(undefined4 *)((int)piVar5 + 0x20bb) = 0x501;
          pcVar22 = (char *)FUN_006b0140(0x2342,DAT_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar22 + 1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar11 + -uVar19;
          pcVar11 = (char *)((int)piVar5 + 0x1fb7);
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar11 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
          *(undefined4 *)((int)piVar5 + 0x20bb) = 0x200;
          pcVar22 = (char *)FUN_006b0140(0x235a,DAT_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar22 + 1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar11 + -uVar19;
          pcVar11 = (char *)((int)piVar5 + 0x1fb7);
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar11 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
          *(undefined4 *)((int)piVar5 + 0x20bb) = 0x400;
          pcVar22 = (char *)FUN_006b0140(0x235b,DAT_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar22 + 1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar11 + -uVar19;
          pcVar11 = (char *)((int)piVar5 + 0x1fb7);
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar11 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
          *(undefined4 *)((int)piVar5 + 0x20bb) = 0x502;
          pcVar22 = (char *)FUN_006b0140(0x235d,DAT_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar22 + 1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar11 + -uVar19;
          pcVar11 = (char *)((int)piVar5 + 0x1fb7);
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar11 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
          iVar7 = *(int *)((int)piVar5 + 0x1fb3);
          *(undefined4 *)((int)piVar5 + 0x1f7b) = *(undefined4 *)(iVar7 + 0xc);
          uVar19 = 0;
          *(undefined4 *)((int)piVar5 + 0x1f73) = 0;
          if (*(uint *)(iVar7 + 0xc) != 0) {
            do {
              if (*(int *)((int)piVar5 + 0x1ec2) ==
                  *(int *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c) + 0x104)) {
                *(uint *)((int)piVar5 + 0x1f73) = uVar19;
                break;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(uint *)(iVar7 + 0xc));
          }
        }
        else {
          if (uVar19 != 0x6905) goto switchD_005a43f5_caseD_1;
          local_c = (byte *)param_1[7];
          *(undefined4 *)((int)piVar5 + 0x1f43) = 0x6506;
          uVar6 = *(undefined4 *)(local_c + 8);
          *(undefined4 *)((int)piVar5 + 0x1f63) = 0x698c;
          *(undefined4 *)((int)piVar5 + 0x1f4b) = uVar6;
          *(undefined4 *)(*(int *)((int)piVar5 + 0x1fb3) + 0xc) = 0;
          *(undefined4 *)((int)piVar5 + 0x20bb) = 0xffffffff;
          pcVar22 = (char *)FUN_006b0140(0x235c,DAT_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar22;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar22 + 1;
            cVar1 = *pcVar22;
            pcVar22 = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar22 = pcVar11 + -uVar19;
          pcVar11 = (char *)((int)piVar5 + 0x1fb7);
          for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar11 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar11 = pcVar11 + 1;
          }
          *(undefined4 *)((int)piVar5 + 0x20bf) = 0;
          FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
          local_8 = (uint *)0x0;
          if (*(int *)(DAT_0080c502 + 0xc) != 0) {
            iVar7 = DAT_0080c502;
            if (*(int *)(DAT_0080c502 + 0xc) == 0) {
              pcVar22 = (char *)0x0;
              goto LAB_005a5859;
            }
            do {
              pcVar22 = (char *)(*(int *)(iVar7 + 8) * (int)local_8 + *(int *)(iVar7 + 0x1c));
LAB_005a5859:
              if (pcVar22 != (char *)0x0) {
                *(undefined4 *)((int)piVar5 + 0x20bb) = *(undefined4 *)(pcVar22 + 0x90);
                uVar19 = 0xffffffff;
                do {
                  pcVar11 = pcVar22;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar11 = pcVar22 + 1;
                  cVar1 = *pcVar22;
                  pcVar22 = pcVar11;
                } while (cVar1 != '\0');
                uVar19 = ~uVar19;
                pcVar22 = pcVar11 + -uVar19;
                pcVar11 = (char *)((int)piVar5 + 0x1fb7);
                for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
                  pcVar22 = pcVar22 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar11 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                *(uint **)((int)piVar5 + 0x20bf) = local_8;
                FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
                iVar7 = DAT_0080c502;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < *(uint **)(iVar7 + 0xc));
          }
          iVar7 = *(int *)((int)piVar5 + 0x1fb3);
          uVar19 = 0;
          uVar6 = *(undefined4 *)(iVar7 + 0xc);
          *(undefined4 *)((int)piVar5 + 0x1f73) = 0;
          *(undefined4 *)((int)piVar5 + 0x1f7b) = uVar6;
          if (*(uint *)(iVar7 + 0xc) != 0) {
            do {
              if (*(int *)((int)piVar5 + 0x1ec6) ==
                  *(int *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c) + 0x104)) {
                *(uint *)((int)piVar5 + 0x1f73) = uVar19;
                break;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(uint *)(iVar7 + 0xc));
          }
        }
      }
      iVar7 = *(int *)((int)piVar5 + 0x1a73);
      *(undefined4 *)((int)piVar5 + 0x1f97) = *(undefined4 *)(local_c + 0x24);
      *(int *)((int)piVar5 + 0x1f9f) = *(int *)(local_c + 0x2c) + 10;
      *(int *)((int)piVar5 + 0x1f9b) = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar28 = *(int *)(iVar7 + 0xa0);
joined_r0x005a5b89:
      if (iVar28 != 0) {
        FUN_00710790(iVar7);
      }
      *(undefined4 *)((int)piVar5 + 0x1f77) = *(undefined4 *)(iVar7 + 0x8a);
      (**(code **)(*(int *)piVar5[3] + 8))(0x100ef,0,0,(int)piVar5 + 0x1f33,0);
      goto switchD_005a43f5_caseD_1;
    }
    switch(uVar19) {
    case 0x6907:
      if (*(char *)((int)DAT_00802a30 + 0x493) == '\x05') break;
      local_c = (byte *)param_1[7];
      *(undefined4 *)((int)piVar5 + 0x1f43) = 0x6506;
      uVar6 = *(undefined4 *)(local_c + 8);
      *(undefined4 *)((int)piVar5 + 0x1f63) = 0x698c;
      *(undefined4 *)((int)piVar5 + 0x1f4b) = uVar6;
      *(undefined4 *)(*(int *)((int)piVar5 + 0x1fb3) + 0xc) = 0;
      *(undefined4 *)((int)piVar5 + 0x20bb) = 0;
      pcVar22 = (char *)FUN_006b0140(0x25bf,DAT_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar11 = pcVar22;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar11 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar11;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      pcVar22 = pcVar11 + -uVar19;
      pcVar11 = (char *)((int)piVar5 + 0x1fb7);
      for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar11 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
      *(undefined4 *)((int)piVar5 + 0x20bb) = 1;
      pcVar22 = (char *)FUN_006b0140(0x25c0,DAT_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar11 = pcVar22;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar11 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar11;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      pcVar22 = pcVar11 + -uVar19;
      pcVar11 = (char *)((int)piVar5 + 0x1fb7);
      for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar11 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
      *(undefined4 *)((int)piVar5 + 0x20bb) = 2;
      pcVar22 = (char *)FUN_006b0140(0x25c1,DAT_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar11 = pcVar22;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar11 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar11;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      pcVar22 = pcVar11 + -uVar19;
      pcVar11 = (char *)((int)piVar5 + 0x1fb7);
      for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar11 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_006ae1c0(*(uint **)((int)piVar5 + 0x1fb3),(undefined4 *)((int)piVar5 + 0x1fb7));
      iVar7 = *(int *)((int)piVar5 + 0x1fb3);
      *(undefined4 *)((int)piVar5 + 0x1f7b) = *(undefined4 *)(iVar7 + 0xc);
      uVar19 = 0;
      *(undefined4 *)((int)piVar5 + 0x1f73) = 0;
      if (*(uint *)(iVar7 + 0xc) != 0) {
        do {
          if (DAT_00803144 ==
              *(int *)(*(int *)(iVar7 + 8) * uVar19 + *(int *)(iVar7 + 0x1c) + 0x104)) {
            *(uint *)((int)piVar5 + 0x1f73) = uVar19;
            break;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(uint *)(iVar7 + 0xc));
      }
      iVar7 = *(int *)((int)piVar5 + 0x1a73);
      *(undefined4 *)((int)piVar5 + 0x1f97) = *(undefined4 *)(local_c + 0x24);
      *(int *)((int)piVar5 + 0x1f9f) = *(int *)(local_c + 0x2c) + 10;
      *(int *)((int)piVar5 + 0x1f9b) = *(int *)(local_c + 0x30) + *(int *)(local_c + 0x28);
      iVar28 = *(int *)(iVar7 + 0xa0);
      goto joined_r0x005a5b89;
    case 0x6908:
      if (*(char *)((int)DAT_00802a30 + 0x493) == '\x05') break;
      bVar26 = false;
      if (DAT_00803148 != 0) {
        if (DAT_00803148 < 0x10) {
          DAT_00803148 = 0;
        }
        else {
          DAT_00803148 = DAT_00803148 - 0xf;
        }
        bVar26 = true;
      }
      if ((!bVar26) ||
         (CFsgsConnection::RequestLadderList
                    ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf),
         pvVar17 = DAT_00802a30, DAT_00802a30 == (void *)0x0)) break;
      uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
      uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
      *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,uVar13,uVar6);
      iVar7 = *(int *)((int)pvVar17 + 0xc9);
      iVar28 = *(int *)((int)pvVar17 + 0xc5);
      goto LAB_005a52aa;
    case 0x6909:
      if ((*(char *)((int)DAT_00802a30 + 0x493) == '\x05') || (0xf422f < DAT_00803148)) break;
      DAT_00803148 = DAT_00803148 + 0xf;
      CFsgsConnection::RequestLadderList
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,DAT_00803148,0xf);
      pvVar17 = DAT_00802a30;
      if (DAT_00802a30 == (void *)0x0) break;
      uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
      uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
      *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,uVar13,uVar6);
      iVar7 = *(int *)((int)pvVar17 + 0xc9);
      iVar28 = *(int *)((int)pvVar17 + 0xc5);
LAB_005a52aa:
      thunk_FUN_00543c90(pvVar17,iVar28,iVar7);
      *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
      *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
      break;
    case 0x690a:
      if ((*(char *)((int)DAT_00802a30 + 0x493) == '\x05') || (iVar7 = piVar5[0x6ba], iVar7 == 0))
      break;
      if (0 < *(int *)(iVar7 + 8)) {
        pcVar22 = (char *)**(undefined4 **)(iVar7 + 0x14);
      }
      iVar28 = -1;
      do {
        if (iVar28 == 0) break;
        iVar28 = iVar28 + -1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar1 != '\0');
      if (iVar28 == -2) break;
      if (*(int *)(iVar7 + 8) < 1) {
        pcVar22 = (char *)0x0;
      }
      else {
        pcVar22 = (char *)**(undefined4 **)(iVar7 + 0x14);
      }
      CFsgsConnection::RequestLadderListByName
                ((CFsgsConnection *)&DAT_00802a90,DAT_00803140,0,pcVar22,0xf);
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
      bVar18 = (char)param_1[4] - 0x13;
      local_c = (byte *)CONCAT31(local_c._1_3_,bVar18);
      if ((*(uint *)((int)piVar5 + 0x1ee3) <= (uint)bVar18) || (*(int *)((int)piVar5 + 0x1edb) == 0)
         ) break;
      iVar28 = (uint)bVar18 * 0x24;
      iVar7 = -1;
      pcVar22 = (char *)(iVar28 + 0x14 + *(int *)((int)piVar5 + 0x1edb));
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar1 != '\0');
      if (iVar7 == -2) break;
      if (piVar5[0x6c3] != 0) {
        FUN_006ab060(piVar5 + 0x6c3);
      }
      uVar19 = 0xffffffff;
      pcVar22 = (char *)(iVar28 + 0x14 + *(int *)((int)piVar5 + 0x1edb));
      do {
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar1 != '\0');
      pcVar22 = (char *)FUN_006aac70(~uVar19);
      piVar5[0x6c3] = (int)pcVar22;
      uVar19 = 0xffffffff;
      pcVar11 = (char *)(iVar28 + 0x14 + *(int *)((int)piVar5 + 0x1edb));
      do {
        pcVar25 = pcVar11;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar25 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar25;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      pcVar11 = pcVar25 + -uVar19;
      for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar22 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar22 = pcVar22 + 1;
      }
      (**(code **)(*piVar5 + 8))();
      *(undefined1 *)((int)piVar5 + 0x1a61) = 10;
      *(undefined1 *)((int)piVar5 + 0x1ed2) = 9;
      iVar7 = *(int *)((int)piVar5 + 0x1a5b);
      if (*(int *)(iVar7 + 0x2e6) == 0) break;
      puVar9 = local_338;
      for (iVar28 = 6; iVar28 != 0; iVar28 = iVar28 + -1) {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0xffff;
      local_6c = 0;
      local_68 = 0;
      local_70 = 0x10101;
      local_64 = 0;
      thunk_FUN_005b9010(*(void **)(iVar7 + 0x2e6),(int)local_338);
      puVar9 = &local_70;
      goto LAB_005a7f3b;
    case 0x693f:
      thunk_FUN_0059b820(piVar5);
      break;
    case 0x6940:
      thunk_FUN_0059be50(piVar5);
      break;
    case 0x6941:
      thunk_FUN_005b6350(piVar5,0x6105,0,1);
      *(undefined1 *)((int)piVar5 + 0x1a61) = 0;
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      (**(code **)(*piVar5 + 8))();
      pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
      if (pvVar17 != (void *)0x0) {
        thunk_FUN_005b8c70(pvVar17,1,0,1);
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar19 == 0x63ff) {
    cVar1 = *(char *)((int)piVar5 + 0x1a5f);
    if (cVar1 == '\x03') {
      (**(code **)(*piVar5 + 8))();
      *(undefined1 *)((int)piVar5 + 0x1a61) = 4;
      if (*(int *)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6) != 0) {
        local_dc = 0;
        local_d8 = 0;
        local_e0 = 0x101;
        local_d4 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6),&local_e0);
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (cVar1 == '\a') {
      if ((DAT_00802a30 != (void *)0x0) && (*(char *)((int)DAT_00802a30 + 0x493) == '\x05'))
      goto switchD_005a43f5_caseD_1;
      thunk_FUN_005daa60();
      local_290 = DAT_00858df8;
      DAT_00858df8 = &local_290;
      iVar7 = __setjmp3(local_28c,0,unaff_EDI,unaff_ESI);
      piVar5 = local_20;
      if (iVar7 == 0) {
        FUN_006b6150((uint)DAT_00807362);
        if (*(int *)(piVar5[0x6ba] + 8) < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined4 **)(piVar5[0x6ba] + 0x14);
        }
        FUN_006b69b0(&DAT_00811764,(int *)&DAT_007cd6f0,0,uVar6,0x20);
        DAT_00858df8 = local_290;
      }
      else {
        DAT_00858df8 = local_290;
        iVar7 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xc08,0,iVar7,&DAT_007a4ccc);
        if (iVar7 != 0) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
      }
      if (DAT_00811764 == 0) {
        pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
        if (pvVar17 != (void *)0x0) {
          thunk_FUN_005b7ef0(pvVar17,0x2594,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
        goto switchD_005a43f5_caseD_1;
      }
      FUN_006b6160(local_6b8,DAT_00811764 + 0x18);
      local_698 = 0;
      if (*(int *)(piVar5[0x6bb] + 8) < 1) {
        pcVar22 = (char *)0x0;
      }
      else {
        pcVar22 = (char *)**(undefined4 **)(piVar5[0x6bb] + 0x14);
      }
      if (*(int *)(piVar5[0x6ba] + 8) < 1) {
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar11 = (char *)**(undefined4 **)(piVar5[0x6ba] + 0x14);
      }
      CFsgsConnection::CreateGame
                ((CFsgsConnection *)&DAT_00802a90,*(ulong *)((int)piVar5 + 0x1ec2),0x17e0,pcVar11,
                 pcVar22,local_6b8);
      pvVar17 = DAT_00802a30;
      if (DAT_00802a30 == (void *)0x0) goto switchD_005a43f5_caseD_1;
      uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
      uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
      *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,uVar13,uVar6);
      iVar7 = *(int *)((int)pvVar17 + 0xc9);
      iVar28 = *(int *)((int)pvVar17 + 0xc5);
      goto LAB_005a52aa;
    }
    if ((cVar1 != '\b') ||
       (((DAT_00802a30 != (void *)0x0 && (*(char *)((int)DAT_00802a30 + 0x493) == '\x05')) ||
        (*(int *)((int)piVar5 + 0x1ebe) == 0)))) goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (void *)0x0) {
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
      *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),*(undefined4 *)((int)pvVar17 + 0xc9)
                        );
      thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
      *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
      *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
    }
    *(undefined4 *)((int)piVar5 + 0x2d) = 0x26;
    FUN_006e6080(piVar5,2,piVar5[0x6c8],(undefined4 *)((int)piVar5 + 0x1d));
    pvVar17 = DAT_00802a30;
    iVar7 = *(int *)((int)piVar5 + 0x1ebe);
    if (*(uint *)(iVar7 + 0xc) <= *(uint *)((int)piVar5 + 0x31)) goto switchD_005a43f5_caseD_1;
    local_15 = '\x01';
    local_8 = (uint *)(*(int *)(iVar7 + 8) * *(uint *)((int)piVar5 + 0x31) + *(int *)(iVar7 + 0x1c))
    ;
    if (local_8 == (uint *)0x0) goto switchD_005a43f5_caseD_1;
    puVar10 = local_8 + 0x13;
    iVar7 = -1;
    puVar24 = puVar10;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      uVar19 = *puVar24;
      puVar24 = (uint *)((int)puVar24 + 1);
    } while ((byte)uVar19 != 0);
    if (iVar7 != -2) {
      if (*(int *)(piVar5[0x6bb] + 8) < 1) {
        pbVar20 = (byte *)0x0;
      }
      else {
        pbVar20 = (byte *)**(undefined4 **)(piVar5[0x6bb] + 0x14);
      }
      do {
        bVar18 = (byte)*puVar10;
        bVar26 = bVar18 < *pbVar20;
        if (bVar18 != *pbVar20) {
LAB_005a4eca:
          iVar7 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
          goto LAB_005a4ecf;
        }
        if (bVar18 == 0) break;
        bVar18 = *(byte *)((int)puVar10 + 1);
        bVar26 = bVar18 < pbVar20[1];
        if (bVar18 != pbVar20[1]) goto LAB_005a4eca;
        puVar10 = (uint *)((int)puVar10 + 2);
        pbVar20 = pbVar20 + 2;
      } while (bVar18 != 0);
      iVar7 = 0;
LAB_005a4ecf:
      if (iVar7 != 0) {
        local_15 = '\0';
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
        *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),
                           *(undefined4 *)((int)pvVar17 + 0xc9));
        thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
        *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
        pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
        if (pvVar17 != (void *)0x0) {
          thunk_FUN_005b7ef0(pvVar17,0x258b,'\0',(undefined4 *)0x0,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
      }
    }
    puVar10 = local_8;
    if (local_15 == '\0') goto switchD_005a43f5_caseD_1;
    thunk_FUN_005daa60();
    FUN_006b61a0(local_22c,(byte *)(puVar10 + 0x17));
    local_3b4 = DAT_00858df8;
    DAT_00858df8 = &local_3b4;
    iVar7 = __setjmp3(local_3b0,0,unaff_EDI,unaff_ESI);
    puVar10 = local_8;
    if (iVar7 == 0) {
      FUN_006b6a50(&DAT_00811764,(undefined4 *)&DAT_007cd6f0,
                   (in_addr)((_union_1226 *)(local_8 + 4))->S_un_b,local_22c);
    }
    pvVar17 = DAT_00802a30;
    DAT_00858df8 = local_3b4;
    if (DAT_00802a30 != (void *)0x0) {
      uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
      uVar13 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
      *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,uVar13,uVar6);
      thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
      *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
      *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
    }
    if (DAT_00811764 == 0) {
      pvVar17 = *(void **)(*(int *)((int)local_20 + 0x1a5b) + 0x2e6);
      if (pvVar17 != (void *)0x0) {
        thunk_FUN_005b7ef0(pvVar17,0x2595,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0
                           ,0,0);
      }
      goto switchD_005a43f5_caseD_1;
    }
    CFsgsConnection::JoinGame((CFsgsConnection *)&DAT_00802a90,puVar10[1]);
    piVar5 = local_20;
    DAT_0080877f = *(undefined4 *)(DAT_00811764 + 0x38);
    DAT_0080877e = 0;
    DAT_008087be = 0;
    *(undefined1 *)((int)local_20 + 0x1a61) = 0;
    DAT_008067a0 = 1;
    uVar19 = *(uint *)((int)local_20 + 0x1ec2);
    if (uVar19 < 0x502) {
      if (uVar19 == 0x501) {
        DAT_00803400 = 5;
      }
      else if (uVar19 == 0x200) {
        DAT_00803400 = 0x14;
      }
      else {
        if (uVar19 != 0x400) goto LAB_005a50be;
        DAT_00803400 = 0x15;
      }
    }
    else if (uVar19 == 0x502) {
      DAT_00803400 = 0xc;
    }
    else {
LAB_005a50be:
      DAT_00803400 = 4;
    }
    thunk_FUN_005b6350(local_20,0x6109,0,1);
    (**(code **)(*piVar5 + 8))();
    pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
    if (pvVar17 != (void *)0x0) {
      thunk_FUN_005b8c70(pvVar17,1,0,1);
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar19 < 0x6152) {
    if (uVar19 != 0x6151) {
      if (uVar19 < 0x6106) {
        if (uVar19 == 0x6105) {
          *(undefined4 *)((int)piVar5 + 0x45) = 0x200;
          *(undefined4 *)((int)piVar5 + 0x49) = 0;
          *(int *)((int)piVar5 + 0x4d) = param_1[4];
          *(int *)((int)piVar5 + 0x51) = param_1[5];
          *(int *)((int)piVar5 + 0x55) = param_1[6];
          thunk_FUN_005b66e0(piVar5);
        }
        else {
          switch(uVar19) {
          case 0:
            thunk_FUN_00597120((int)piVar5);
            break;
          case 2:
            thunk_FUN_00595e40(*(byte *)(param_1[5] + 0x14));
            break;
          case 3:
            thunk_FUN_005967f0();
            break;
          case 5:
            thunk_FUN_00596cc0('\0');
          }
        }
      }
      else {
        switch(uVar19) {
        case 0x6109:
        case 0x611f:
          thunk_FUN_005dadf0();
          *(undefined4 *)((int)piVar5 + 0x45) = 0x200;
          *(undefined4 *)((int)piVar5 + 0x49) = 0;
          *(int *)((int)piVar5 + 0x4d) = param_1[4];
          *(int *)((int)piVar5 + 0x51) = param_1[5];
          *(int *)((int)piVar5 + 0x55) = param_1[6];
          thunk_FUN_005b66e0(piVar5);
          break;
        case 0x614f:
          if (DAT_00802a30 != (void *)0x0) {
            *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
            *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
            thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),
                               *(undefined4 *)((int)pvVar17 + 0xc9));
            thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
            *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
            *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
          }
          iVar7 = *(int *)((int)piVar5 + 0x1a5b);
          piVar23 = local_19c;
          for (iVar28 = 8; iVar28 != 0; iVar28 = iVar28 + -1) {
            *piVar23 = 0;
            piVar23 = piVar23 + 1;
          }
          local_19c[2] = piVar5[2];
          local_19c[3] = 2;
          local_19c[4] = 0x6941;
          pvVar17 = *(void **)(iVar7 + 0x2e6);
          if (pvVar17 == (void *)0x0) {
            (**(code **)*piVar5)(local_19c);
          }
          else {
            thunk_FUN_005b7ef0(pvVar17,0x2593,'\0',local_19c,(undefined4 *)0x0,(undefined4 *)0x0,
                               param_1[5],0x2599);
          }
          break;
        case 0x6150:
          if (*(char *)((int)piVar5 + 0x1a5f) == '\x01') {
            if (DAT_00802a30 != (void *)0x0) {
              *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
              *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
              thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),
                                 *(undefined4 *)((int)pvVar17 + 0xc9));
              thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9)
                                );
              *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
              *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
            }
            iVar7 = param_1[5];
            piVar23 = local_160;
            for (iVar28 = 8; iVar28 != 0; iVar28 = iVar28 + -1) {
              *piVar23 = 0;
              piVar23 = piVar23 + 1;
            }
            local_160[2] = piVar5[2];
            local_160[3] = 2;
            local_160[4] = 0x6941;
            switch(iVar7) {
            case 1:
              UVar8 = 0x2580;
              break;
            case 2:
              UVar8 = 0x2581;
              break;
            case 3:
              UVar8 = 0x2582;
              break;
            case 4:
              UVar8 = 0x2583;
              break;
            default:
              UVar8 = 0x2584;
            }
            if ((UVar8 == 0) ||
               (pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6), pvVar17 == (void *)0x0
               )) {
              (**(code **)*piVar5)(local_160);
            }
            else if (UVar8 == 0x2584) {
              thunk_FUN_005b7ef0(pvVar17,0x2584,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,
                                 iVar7,0x2599);
            }
            else {
              thunk_FUN_005b7ef0(pvVar17,UVar8,'\0',local_160,(undefined4 *)0x0,(undefined4 *)0x0,0,
                                 0);
            }
          }
        }
      }
      goto switchD_005a43f5_caseD_1;
    }
    if (*(char *)((int)piVar5 + 0x1a5f) != '\x01') goto switchD_005a43f5_caseD_1;
    CFsgsConnection::StartBanners((CFsgsConnection *)&DAT_00802a90);
    if (((char)DAT_00807dd1 != '\x01') && ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000)) {
      iVar7 = piVar5[0x6b0];
      uVar19 = *(uint *)(iVar7 + 0x14);
      if (uVar19 == 0) {
        uVar19 = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar7 + 8);
      }
      puVar9 = (undefined4 *)FUN_006b4fa0(iVar7);
      for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar9 = 0xff;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00710a90(piVar5[0x6b0],0,0,0x16,0x1b8,0xf0);
      iVar31 = -1;
      iVar30 = -1;
      uVar6 = 2;
      iVar28 = -1;
      iVar7 = -1;
      puVar10 = (uint *)FUN_006b0140(0x25b6,DAT_00807618);
      FUN_00711b70(puVar10,iVar7,iVar28,uVar6,iVar30,iVar31);
      FUN_006b35d0(DAT_008075a8,piVar5[0x6af]);
      CFsgsConnection::RequestDatafile((CFsgsConnection *)&DAT_00802a90,s_st_inf_007cc66c);
      goto switchD_005a43f5_caseD_1;
    }
    goto LAB_005a6d57;
  }
  if (0x6333 < uVar19) {
    if (uVar19 == 0x6334) {
      thunk_FUN_005b6560((int)piVar5 + 0x1bb9,(int)param_1,0);
    }
    else if (uVar19 == 0x6335) {
      *(uint *)((int)piVar5 + 0x1c6a) =
           *(int *)(param_1[6] + 4) + (uint)*(ushort *)((int)param_1 + 0x16);
      if (*(uint *)((int)piVar5 + 0x1c4e) != 0xffffffff) {
        FUN_006b3730(*(uint **)((int)piVar5 + 0x1c92),*(uint *)((int)piVar5 + 0x1c4e),
                     *(uint *)((int)piVar5 + 0x1c52),*(uint *)((int)piVar5 + 0x1c66),
                     *(uint *)((int)piVar5 + 0x1c6a));
      }
    }
    goto switchD_005a43f5_caseD_1;
  }
  if (uVar19 == 0x6333) {
    thunk_FUN_005b6560((int)(piVar5 + 0x6ca),(int)param_1,0);
    goto switchD_005a43f5_caseD_1;
  }
  switch(uVar19) {
  case 0x6152:
    if (*(char *)((int)piVar5 + 0x1a5f) != '\x02') goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (void *)0x0) {
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
      *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),*(undefined4 *)((int)pvVar17 + 0xc9)
                        );
      thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
      *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
      *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
    }
    iVar7 = *(int *)((int)piVar5 + 0x1a5b);
    puVar9 = local_2c8;
    for (iVar28 = 6; iVar28 != 0; iVar28 = iVar28 + -1) {
      *puVar9 = 0x10001;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 1;
    pvVar17 = *(void **)(iVar7 + 0x2e6);
    if (pvVar17 != (void *)0x0) {
      thunk_FUN_005b9010(pvVar17,(int)local_2c8);
    }
    switch(param_1[5]) {
    case 2:
      UVar8 = 0x258b;
      break;
    case 3:
      UVar8 = 0x258c;
      break;
    case 4:
      UVar8 = 0x258d;
      break;
    default:
      UVar8 = 0x2589;
      break;
    case 7:
      UVar8 = 0x25c2;
    }
    if ((UVar8 == 0) ||
       (pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6), pvVar17 == (void *)0x0))
    goto switchD_005a43f5_caseD_1;
    if (UVar8 == 0x2589) {
      thunk_FUN_005b7ef0(pvVar17,0x2589,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                         param_1[5],0x2599);
      goto switchD_005a43f5_caseD_1;
    }
    break;
  case 0x6153:
    if ((*(char *)((int)piVar5 + 0x1a5f) == '\x02') || (*(char *)((int)piVar5 + 0x1a5f) == '\x04'))
    {
      if (DAT_00802a30 != (void *)0x0) {
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
        *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),
                           *(undefined4 *)((int)pvVar17 + 0xc9));
        thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
        *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
      }
      local_100 = s_Profile_Age_007cc1a8;
      local_fc = s_Profile_Sex_007cc198;
      local_f8 = s_Profile_Location_007cc184;
      local_f4 = s_Profile_Description_007cc16c;
      if (*(char *)((int)piVar5 + 0x1a5f) == '\x02') {
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
      thunk_FUN_0055bf20(&DAT_00802a90,*(undefined4 *)((int)piVar5 + 0x1a67));
      if (*(byte **)((int)piVar5 + 0x1e9e) != (byte *)0x0) {
        FUN_006b5570(*(byte **)((int)piVar5 + 0x1e9e));
      }
      puVar10 = FUN_006b54f0((uint *)0x0,100,100);
      *(uint **)((int)piVar5 + 0x1e9e) = puVar10;
      (**(code **)(*piVar5 + 8))();
      *(undefined1 *)((int)piVar5 + 0x1a61) = 6;
      if (*(int *)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6) != 0) {
        local_ac = 0;
        local_a8 = 0;
        local_b0 = 0x10101;
        local_a4 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6),&local_b0);
      }
    }
    goto switchD_005a43f5_caseD_1;
  case 0x6154:
    if (*(char *)((int)piVar5 + 0x1a5f) == '\x05') {
      if (DAT_00802a30 != (void *)0x0) {
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
        *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),
                           *(undefined4 *)((int)pvVar17 + 0xc9));
        thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
        *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
      }
      uVar19 = param_1[5];
      if (uVar19 == 0) {
        *(undefined4 *)((int)piVar5 + 0x2d) = 0x6952;
        (**(code **)*piVar5)((int)piVar5 + 0x1d);
      }
      else if ((uVar19 != 0) && (uVar19 < 3)) {
        puVar9 = local_300;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = 0x10001;
          puVar9 = puVar9 + 1;
        }
        iVar7 = *(int *)((int)piVar5 + 0x1a5b);
        *(undefined2 *)puVar9 = 1;
        pvVar17 = *(void **)(iVar7 + 0x2e6);
        if (pvVar17 != (void *)0x0) {
          thunk_FUN_005b9010(pvVar17,(int)local_300);
        }
        pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
        if (pvVar17 != (void *)0x0) {
          thunk_FUN_005b7ef0(pvVar17,(-(uint)(param_1[5] != 1) & 10) + 0x258e,'\0',(undefined4 *)0x0
                             ,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        }
      }
    }
    goto switchD_005a43f5_caseD_1;
  case 0x6155:
    if (*(char *)((int)piVar5 + 0x1a5f) != '\x04') goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (void *)0x0) {
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
      *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),*(undefined4 *)((int)pvVar17 + 0xc9)
                        );
      thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
      *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
      *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
    }
    if (param_1[5] == 0) goto LAB_005a67e1;
    if (6 < (uint)param_1[5]) goto switchD_005a43f5_caseD_1;
    puVar9 = local_354;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = 0x10001;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 1;
    pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
    if (pvVar17 != (void *)0x0) {
      thunk_FUN_005b9010(pvVar17,(int)local_354);
    }
    pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6);
    if (pvVar17 == (void *)0x0) goto switchD_005a43f5_caseD_1;
    switch(param_1[5]) {
    case 2:
      UVar8 = 0x2597;
      break;
    case 3:
      UVar8 = 0x2596;
      break;
    case 4:
      UVar8 = 0x25c3;
      break;
    case 5:
      UVar8 = 0x25c4;
      break;
    case 6:
      UVar8 = 0x25c5;
      break;
    default:
      UVar8 = 0x258f;
    }
    break;
  case 0x6156:
    if (*(char *)((int)piVar5 + 0x1a5f) != '\x06') goto switchD_005a43f5_caseD_1;
    if (DAT_00802a30 != (void *)0x0) {
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
      *(undefined2 *)((int)pvVar17 + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,*(undefined4 *)((int)pvVar17 + 0xc5),*(undefined4 *)((int)pvVar17 + 0xc9)
                        );
      thunk_FUN_00543c90(pvVar17,*(int *)((int)pvVar17 + 0xc5),*(int *)((int)pvVar17 + 0xc9));
      *(undefined1 *)((int)pvVar17 + 0xd2) = 0;
      *(undefined4 *)((int)pvVar17 + 0x4df) = 0xffffffff;
    }
    UVar8 = 0;
    if (param_1[5] == 0xd) {
      UVar8 = 0x2590;
    }
    else if (param_1[5] == 0xf) {
      UVar8 = 0x2591;
    }
    if ((UVar8 == 0) ||
       (pvVar17 = *(void **)(*(int *)((int)piVar5 + 0x1a5b) + 0x2e6), pvVar17 == (void *)0x0))
    goto switchD_005a43f5_caseD_1;
    break;
  default:
    goto switchD_005a43f5_caseD_1;
  }
  thunk_FUN_005b7ef0(pvVar17,UVar8,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
switchD_005a43f5_caseD_1:
  DAT_00858df8 = local_21c;
  uVar6 = thunk_FUN_005b6430();
  return uVar6;
}


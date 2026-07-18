
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::GetMessage */

undefined4 __thiscall GameSystemC::GetMessage(GameSystemC *this,int param_1)

{
  char cVar1;
  byte bVar2;
  size_t _Count;
  int *piVar3;
  code *pcVar4;
  void *this_00;
  int iVar5;
  HANDLE pvVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  LPCSTR pCVar9;
  uint *puVar10;
  undefined4 uVar11;
  int extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *extraout_ECX_02;
  cMf32 *extraout_ECX_03;
  uint uVar12;
  uint uVar13;
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar14;
  cMf32 *extraout_ECX_05;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar15;
  char *pcVar16;
  char *pcVar17;
  bool bVar18;
  undefined1 local_1d90 [8];
  cMf32 *local_1d88;
  _WIN32_FIND_DATAA local_3f4;
  undefined4 **local_1b0;
  undefined4 local_1ac [16];
  char local_16c [64];
  undefined4 local_12c;
  byte local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  DWORD local_124;
  undefined4 **local_d0;
  undefined4 local_cc [16];
  undefined4 **local_8c;
  undefined4 local_88 [16];
  undefined4 local_48;
  undefined *puVar19;
  cMf32 *pcVar20;
  undefined *puVar21;
  int iVar22;
  
  FUN_0072da40();
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  iVar22 = extraout_ECX;
  iVar5 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = local_8c;
    iVar22 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0x1c6,0,iVar5,&DAT_007a4ccc);
    if (iVar22 == 0) {
      FUN_006a5e40(iVar5,0,0x7cab5c,0x1c7);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  FUN_006e5f00(param_1);
  if (*(int *)(param_1 + 0x10) == 0x43ff) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x14) + 0x17);
    switch(*piVar3) {
    case 1:
      if (DAT_00808783 == '\x03') {
        if (piVar3[2] != 0) {
          DAT_00808784 = piVar3[1];
          *(int *)(iVar22 + 0x42c) = DAT_00808784;
          FUN_00725760(DAT_00807598,DAT_00808784,-(uint)(DAT_00808784 != 0) & DAT_008032b4);
          if (DAT_008016e0 != (PausePanelTy *)0x0) {
            PausePanelTy::SwitchPausePanel(DAT_008016e0,DAT_00808784);
            DAT_00858df8 = local_8c;
            return 0;
          }
        }
      }
      else if (piVar3[2] == 0) {
        if (*(int *)(iVar22 + 0x42c) == 0) {
          DAT_00808784 = piVar3[1];
          FUN_00725760(DAT_00807598,DAT_00808784,-(uint)(DAT_00808784 != 0) & DAT_008032b4);
          DAT_00858df8 = local_8c;
          return 0;
        }
      }
      else {
        if ((DAT_0080878c == 0) && (DAT_00808790 == 0)) {
          DAT_00808784 = piVar3[1];
          FUN_00725760(DAT_00807598,DAT_00808784,-(uint)(DAT_00808784 != 0) & DAT_008032b4);
        }
        iVar5 = piVar3[1];
        *(int *)(iVar22 + 0x42c) = iVar5;
        if (DAT_008016e0 != (PausePanelTy *)0x0) {
          PausePanelTy::SwitchPausePanel(DAT_008016e0,iVar5);
          DAT_00858df8 = local_8c;
          return 0;
        }
      }
      break;
    case 4:
      uVar12 = piVar3[1];
      if (DAT_0080733b != uVar12) {
        DAT_0080733b = (byte)uVar12;
        if (DAT_0080877e == '\0') {
          iVar22 = (uVar12 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar22 + 0x14);
        }
        else {
          iVar22 = (uVar12 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar22 + 8);
        }
        if (DAT_00807598 != (void *)0x0) {
          FUN_006e8640(DAT_00807598,
                       *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar22 + 0x10),
                       *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar22 + 4));
          DAT_00858df8 = local_8c;
          return 0;
        }
      }
      break;
    case 6:
    case 7:
      if (*piVar3 == 6) {
        thunk_FUN_0056a8d0(&DAT_00807620,(uint)piVar3[1] >> 0x10,*(byte *)(piVar3 + 1),
                           (char)piVar3[2]);
      }
      else {
        thunk_FUN_0056a960(&DAT_00807620,(uint)piVar3[1] >> 0x10,*(byte *)(piVar3 + 1));
      }
      this_00 = DAT_008016e4;
      if (DAT_008016e4 != (void *)0x0) {
        *(undefined4 *)((int)DAT_008016e4 + 0x28) = 5;
        piVar15 = (int *)((int)this_00 + 0x181);
        puVar7 = (undefined4 *)0x8;
        do {
          if (*piVar15 != 0) {
            puVar7 = (undefined4 *)((int)this_00 + 0x18);
            FUN_006e6080(this_00,2,*piVar15,puVar7);
          }
          piVar15 = piVar15 + 1;
          puVar7 = (undefined4 *)((int)puVar7 + -1);
        } while (puVar7 != (undefined4 *)0x0);
      }
      if ((ushort)((uint)piVar3[1] >> 0x10) != (ushort)DAT_0080874d) {
        if (DAT_00808aaf != 0) {
          uVar12 = (uint)DAT_00808aaf;
          do {
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          if (DAT_00808aaf != 0) {
            uVar12 = (uint)DAT_00808aaf;
            do {
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
        pCVar9 = (LPCSTR)FUN_006b0140(0x42c2,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,pCVar9);
        if (DAT_008016d8 != (void *)0x0) {
          thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,8);
          DAT_00858df8 = local_8c;
          return 0;
        }
      }
      break;
    case 8:
      local_1b0 = DAT_00858df8;
      DAT_00858df8 = &local_1b0;
      iVar22 = __setjmp3(local_1ac,0,unaff_EDI,unaff_ESI);
      if (iVar22 == 0) {
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc);
        puVar7 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
        local_48 = 0x577d84;
        puVar10 = thunk_FUN_0067dfd0((int)puVar7,piVar3[1],DAT_0080995c);
        pcVar20 = (cMf32 *)puVar10[3];
        pcVar14 = extraout_ECX_02;
        if (pcVar20 != (cMf32 *)0x0) {
          pcVar14 = pcVar20 + -1;
          if (pcVar14 < pcVar20) {
            pcVar16 = (char *)((int)(pcVar20 + -1) * puVar10[2] + puVar10[7]);
          }
          else {
            pcVar16 = (char *)0x0;
          }
          if ((pcVar16 + 0x4c != (char *)0x0) &&
             (puVar8 = thunk_FUN_00648ab0((int)puVar7,pcVar16 + 0x4c,(int *)0x0),
             pcVar14 = extraout_ECX_03, puVar8 != (ushort *)0x0)) {
            uVar12 = 0xffffffff;
            do {
              pcVar17 = pcVar16;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar17 = pcVar16 + 1;
              cVar1 = *pcVar16;
              pcVar16 = pcVar17;
            } while (cVar1 != '\0');
            uVar12 = ~uVar12;
            pcVar16 = pcVar17 + -uVar12;
            pcVar17 = local_16c;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              pcVar17 = pcVar17 + 4;
            }
            bVar2 = *(byte *)(piVar3 + 2);
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar17 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar17 = pcVar17 + 1;
            }
            local_12c = DAT_0080877f;
            local_127 = 1;
            local_125 = 1;
            local_126 = 0;
            local_128 = bVar2;
            local_124 = timeGetTime();
            if (bVar2 < 8) {
              pcVar16 = local_16c;
              puVar7 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar22 = 0x27; iVar22 != 0; iVar22 = iVar22 + -1) {
                *puVar7 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                puVar7 = puVar7 + 1;
              }
              DAT_00808aaf = DAT_00808aaf + 1;
              if (DAT_008016e4 != (void *)0x0) {
                thunk_FUN_0053a540(DAT_008016e4);
              }
            }
            puVar7 = (undefined4 *)0x577e83;
            thunk_FUN_00648c10((int)puVar8,piVar3[2]);
            *(undefined1 *)((int)&DAT_008087c4 + piVar3[2] * 0x51 + 3) = 1;
            puVar10 = (uint *)0x577e9d;
            FUN_006ab060((undefined4 *)&stack0xffffffdc);
            pcVar14 = extraout_ECX_04;
          }
        }
        if (puVar10 != (uint *)0x0) {
          FUN_006ae110((byte *)puVar10);
          pcVar14 = extraout_ECX_05;
        }
        cMf32::delete(pcVar14,puVar7);
        DAT_00858df8 = local_8c;
        return 0;
      }
      break;
    case 9:
      if (DAT_008117bc != (undefined4 *)0x0) {
        puVar7 = &local_48;
        for (iVar22 = 8; iVar22 != 0; iVar22 = iVar22 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        (**(code **)*DAT_008117bc)();
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0x4400) {
    pcVar16 = *(char **)(*(int *)(param_1 + 0x14) + 0x17);
    cVar1 = *pcVar16;
    bVar2 = pcVar16[1];
    uVar12 = (uint)bVar2;
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        DAT_00858df8 = local_8c;
        return 0;
      }
      thunk_FUN_00648dd0(uVar12);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          DAT_00858df8 = local_8c;
          return 0;
        }
        _Count = *(size_t *)(pcVar16 + 1);
        DAT_00808750 = *(undefined4 *)(pcVar16 + 9);
        iVar22 = -1;
        _strncpy((char *)0x88000516,*(char **)(pcVar16 + 5),_Count);
        local_3f4.cAlternateFileName[_Count + 0xf] = '\0';
        do {
          if (iVar22 < 0) {
            wsprintfA((LPSTR)&DAT_0080f022,s__s_s_s__s_s_s_007cac78);
          }
          else {
            wsprintfA((LPSTR)&DAT_0080f022,s__s_s_s__s_s_d_s_007cac64);
          }
          iVar22 = iVar22 + 1;
          pvVar6 = FindFirstFileA((LPCSTR)&DAT_0080f022,&local_3f4);
          bVar18 = pvVar6 != (HANDLE)0xffffffff;
          if (!bVar18) {
            DAT_00808794 = 1;
            DAT_00858df8 = local_8c;
            return 0;
          }
          puVar21 = (undefined *)0x0;
          local_d0 = DAT_00858df8;
          DAT_00858df8 = &local_d0;
          iVar5 = __setjmp3(local_cc,0,(void *)0x0,iVar22);
          if (iVar5 == 0) {
            puVar7 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f022,0,0,0);
            if (puVar7 == (undefined4 *)0x0) {
              bVar18 = false;
            }
            else {
              puVar8 = FUN_006f1ce0((byte)SUB41(local_1d90,0),PTR_s_DESCRIPTOR_0079b1a4,
                                    (int *)&stack0xffffffe0,0);
              pcVar14 = extraout_ECX_00;
              if (puVar8 != (ushort *)0x0) {
                pcVar20 = (cMf32 *)&stack0xffffffe0;
                puVar19 = PTR_s_SAVE_DESC_0079b1a0;
                puVar8 = FUN_006f1ce0((byte)SUB41(&stack0xfffffff0,0),PTR_s_SAVE_DESC_0079b1a0,
                                      (int *)pcVar20,0);
                pcVar14 = extraout_ECX_01;
                if ((puVar8 != (ushort *)0x0) &&
                   ((pcVar14 = extraout_ECX_01, puVar19 != puVar21 ||
                    (pcVar14 = pcVar20, local_1d88 != pcVar20)))) {
                  bVar18 = true;
                  cMf32::delete(pcVar14,puVar7);
                  goto LAB_00577956;
                }
              }
              bVar18 = false;
              cMf32::delete(pcVar14,puVar7);
            }
          }
LAB_00577956:
          DAT_00858df8 = local_d0;
          if (!bVar18) {
            DAT_00808794 = 1;
            DAT_00858df8 = local_8c;
            return 0;
          }
        } while( true );
      }
      if (bVar2 == 0xff) {
        DAT_00858df8 = local_8c;
        return 0;
      }
      thunk_FUN_00648dd0(uVar12);
      thunk_FUN_00648c10((int)(pcVar16 + 2),uVar12);
    }
    if (DAT_008016dc != (void *)0x0) {
      thunk_FUN_00532ce0(DAT_008016dc);
      DAT_00858df8 = local_8c;
      return 0;
    }
  }
  DAT_00858df8 = local_8c;
  return 0;
}


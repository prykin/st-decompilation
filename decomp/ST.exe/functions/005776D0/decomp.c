
undefined4 FUN_005776d0(int param_1)

{
  char cVar1;
  byte bVar2;
  size_t _Count;
  code *pcVar3;
  void *this;
  int iVar4;
  HANDLE pvVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  LPCSTR pCVar8;
  uint *puVar9;
  undefined4 uVar10;
  int extraout_ECX;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  bool bVar16;
  undefined1 local_1d90 [8];
  int *local_1d88;
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
  undefined *puVar17;
  int *piVar18;
  undefined *puVar19;
  int iVar20;
  
  FUN_0072da40();
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  iVar20 = extraout_ECX;
  iVar4 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = local_8c;
    iVar20 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0x1c6,0,iVar4,&DAT_007a4ccc);
    if (iVar20 == 0) {
      FUN_006a5e40(iVar4,0,0x7cab5c,0x1c7);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return uVar10;
  }
  FUN_006e5f00(param_1);
  if (*(int *)(param_1 + 0x10) == 0x43ff) {
    piVar18 = *(int **)(*(int *)(param_1 + 0x14) + 0x17);
    switch(*piVar18) {
    case 1:
      if (DAT_00808783 == '\x03') {
        if (piVar18[2] != 0) {
          DAT_00808784 = piVar18[1];
          *(int *)(iVar20 + 0x42c) = DAT_00808784;
          FUN_00725760(DAT_00807598,DAT_00808784,-(uint)(DAT_00808784 != 0) & DAT_008032b4);
          if (DAT_008016e0 != 0) {
            thunk_FUN_005395b0(DAT_00808784);
            DAT_00858df8 = local_8c;
            return 0;
          }
        }
      }
      else if (piVar18[2] == 0) {
        if (*(int *)(iVar20 + 0x42c) == 0) {
          DAT_00808784 = piVar18[1];
          FUN_00725760(DAT_00807598,DAT_00808784,-(uint)(DAT_00808784 != 0) & DAT_008032b4);
          DAT_00858df8 = local_8c;
          return 0;
        }
      }
      else {
        if ((DAT_0080878c == 0) && (DAT_00808790 == 0)) {
          DAT_00808784 = piVar18[1];
          FUN_00725760(DAT_00807598,DAT_00808784,-(uint)(DAT_00808784 != 0) & DAT_008032b4);
        }
        iVar4 = piVar18[1];
        *(int *)(iVar20 + 0x42c) = iVar4;
        if (DAT_008016e0 != 0) {
          thunk_FUN_005395b0(iVar4);
          DAT_00858df8 = local_8c;
          return 0;
        }
      }
      break;
    case 4:
      uVar11 = piVar18[1];
      if (DAT_0080733b != uVar11) {
        DAT_0080733b = (byte)uVar11;
        if (DAT_0080877e == '\0') {
          iVar20 = (uVar11 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 0x14);
        }
        else {
          iVar20 = (uVar11 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 8);
        }
        if (DAT_00807598 != (void *)0x0) {
          FUN_006e8640(DAT_00807598,
                       *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 0x10),
                       *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 4));
          DAT_00858df8 = local_8c;
          return 0;
        }
      }
      break;
    case 6:
    case 7:
      if (*piVar18 == 6) {
        thunk_FUN_0056a8d0(&DAT_00807620,(uint)piVar18[1] >> 0x10,*(byte *)(piVar18 + 1),
                           (char)piVar18[2]);
      }
      else {
        thunk_FUN_0056a960(&DAT_00807620,(uint)piVar18[1] >> 0x10,*(byte *)(piVar18 + 1));
      }
      this = DAT_008016e4;
      if (DAT_008016e4 != (void *)0x0) {
        *(undefined4 *)((int)DAT_008016e4 + 0x28) = 5;
        piVar13 = (int *)((int)this + 0x181);
        puVar6 = (undefined4 *)0x8;
        do {
          if (*piVar13 != 0) {
            puVar6 = (undefined4 *)((int)this + 0x18);
            FUN_006e6080(this,2,*piVar13,puVar6);
          }
          piVar13 = piVar13 + 1;
          puVar6 = (undefined4 *)((int)puVar6 + -1);
        } while (puVar6 != (undefined4 *)0x0);
      }
      if ((ushort)((uint)piVar18[1] >> 0x10) != (ushort)DAT_0080874d) {
        if (DAT_00808aaf != 0) {
          uVar11 = (uint)DAT_00808aaf;
          do {
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          if (DAT_00808aaf != 0) {
            uVar11 = (uint)DAT_00808aaf;
            do {
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        pCVar8 = (LPCSTR)FUN_006b0140(0x42c2,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,pCVar8);
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
      iVar20 = __setjmp3(local_1ac,0,unaff_EDI,unaff_ESI);
      if (iVar20 == 0) {
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc);
        puVar6 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
        local_48 = 0x577d84;
        puVar9 = thunk_FUN_0067dfd0((int)puVar6,piVar18[1],DAT_0080995c);
        uVar11 = puVar9[3];
        if (uVar11 != 0) {
          if (uVar11 - 1 < uVar11) {
            pcVar14 = (char *)((uVar11 - 1) * puVar9[2] + puVar9[7]);
          }
          else {
            pcVar14 = (char *)0x0;
          }
          if ((pcVar14 + 0x4c != (char *)0x0) &&
             (puVar7 = thunk_FUN_00648ab0((int)puVar6,pcVar14 + 0x4c,(int *)0x0),
             puVar7 != (ushort *)0x0)) {
            uVar11 = 0xffffffff;
            do {
              pcVar15 = pcVar14;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar15 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar15;
            } while (cVar1 != '\0');
            uVar11 = ~uVar11;
            pcVar14 = pcVar15 + -uVar11;
            pcVar15 = local_16c;
            for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar15 = pcVar15 + 4;
            }
            bVar2 = *(byte *)(piVar18 + 2);
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar15 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar15 = pcVar15 + 1;
            }
            local_12c = DAT_0080877f;
            local_127 = 1;
            local_125 = 1;
            local_126 = 0;
            local_128 = bVar2;
            local_124 = timeGetTime();
            if (bVar2 < 8) {
              pcVar14 = local_16c;
              puVar6 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar20 = 0x27; iVar20 != 0; iVar20 = iVar20 + -1) {
                *puVar6 = *(undefined4 *)pcVar14;
                pcVar14 = pcVar14 + 4;
                puVar6 = puVar6 + 1;
              }
              DAT_00808aaf = DAT_00808aaf + 1;
              if (DAT_008016e4 != (void *)0x0) {
                thunk_FUN_0053a540(DAT_008016e4);
              }
            }
            puVar6 = (undefined4 *)0x577e83;
            thunk_FUN_00648c10((int)puVar7,piVar18[2]);
            *(undefined1 *)((int)&DAT_008087c4 + piVar18[2] * 0x51 + 3) = 1;
            puVar9 = (uint *)0x577e9d;
            FUN_006ab060((undefined4 *)&stack0xffffffdc);
          }
        }
        if (puVar9 != (uint *)0x0) {
          FUN_006ae110((byte *)puVar9);
        }
        FUN_006f1170(puVar6);
        DAT_00858df8 = local_8c;
        return 0;
      }
      break;
    case 9:
      if (DAT_008117bc != (undefined4 *)0x0) {
        puVar6 = &local_48;
        for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        (**(code **)*DAT_008117bc)();
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0x4400) {
    pcVar14 = *(char **)(*(int *)(param_1 + 0x14) + 0x17);
    cVar1 = *pcVar14;
    bVar2 = pcVar14[1];
    uVar11 = (uint)bVar2;
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        DAT_00858df8 = local_8c;
        return 0;
      }
      thunk_FUN_00648dd0(uVar11);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          DAT_00858df8 = local_8c;
          return 0;
        }
        _Count = *(size_t *)(pcVar14 + 1);
        DAT_00808750 = *(undefined4 *)(pcVar14 + 9);
        iVar20 = -1;
        _strncpy((char *)0x88000516,*(char **)(pcVar14 + 5),_Count);
        local_3f4.cAlternateFileName[_Count + 0xf] = '\0';
        do {
          if (iVar20 < 0) {
            wsprintfA((LPSTR)&DAT_0080f022,s__s_s_s__s_s_s_007cac78);
          }
          else {
            wsprintfA((LPSTR)&DAT_0080f022,s__s_s_s__s_s_d_s_007cac64);
          }
          iVar20 = iVar20 + 1;
          pvVar5 = FindFirstFileA((LPCSTR)&DAT_0080f022,&local_3f4);
          bVar16 = pvVar5 != (HANDLE)0xffffffff;
          if (!bVar16) {
            DAT_00808794 = 1;
            DAT_00858df8 = local_8c;
            return 0;
          }
          puVar19 = (undefined *)0x0;
          local_d0 = DAT_00858df8;
          DAT_00858df8 = &local_d0;
          iVar4 = __setjmp3(local_cc,0,(void *)0x0,iVar20);
          if (iVar4 == 0) {
            puVar6 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f022,0,0,0);
            if (puVar6 == (undefined4 *)0x0) {
              bVar16 = false;
            }
            else {
              puVar7 = FUN_006f1ce0((byte)local_1d90,PTR_s_DESCRIPTOR_0079b1a4,
                                    (int *)&stack0xffffffe0,0);
              if (puVar7 != (ushort *)0x0) {
                piVar18 = (int *)&stack0xffffffe0;
                puVar17 = PTR_s_SAVE_DESC_0079b1a0;
                puVar7 = FUN_006f1ce0((byte)&stack0xfffffff0,PTR_s_SAVE_DESC_0079b1a0,piVar18,0);
                if ((puVar7 != (ushort *)0x0) && ((puVar17 != puVar19 || (local_1d88 != piVar18))))
                {
                  bVar16 = true;
                  FUN_006f1170(puVar6);
                  goto LAB_00577956;
                }
              }
              bVar16 = false;
              FUN_006f1170(puVar6);
            }
          }
LAB_00577956:
          DAT_00858df8 = local_d0;
          if (!bVar16) {
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
      thunk_FUN_00648dd0(uVar11);
      thunk_FUN_00648c10((int)(pcVar14 + 2),uVar11);
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


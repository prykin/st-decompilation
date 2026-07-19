
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::GetMessage */

undefined4 __thiscall GameSystemC::GetMessage(GameSystemC *this,int param_1)

{
  char cVar1;
  byte bVar2;
  size_t _Count;
  int *piVar3;
  void *pvVar4;
  code *pcVar5;
  int iVar6;
  HANDLE pvVar7;
  int iVar8;
  cMf32 *pcVar9;
  ushort *puVar10;
  LPCSTR pCVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  SystemClassTy *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *pcVar15;
  cMf32 *extraout_ECX_02;
  cMf32 *extraout_ECX_03;
  uint uVar16;
  uint uVar17;
  cMf32 *extraout_ECX_04;
  cMf32 *extraout_ECX_05;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar18;
  char *pcVar19;
  char *pcVar20;
  bool bVar21;
  undefined1 local_1d90 [8];
  cMf32 *local_1d88;
  _WIN32_FIND_DATAA local_3f4;
  InternalExceptionFrame local_1b0;
  char local_16c [64];
  undefined4 local_12c;
  byte local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  DWORD local_124;
  InternalExceptionFrame local_d0;
  InternalExceptionFrame local_8c;
  undefined4 local_48;
  SystemClassTy *this_00;
  undefined *puVar22;
  cMf32 *pcVar23;
  undefined *puVar24;
  
  Library::MSVCRT::FUN_0072da40();
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  this_00 = extraout_ECX;
  iVar6 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar8 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x1c6,0,iVar6,&DAT_007a4ccc);
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_tsystem_cpp_007cab5c,0x1c7);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return uVar14;
  }
  SystemClassTy::GetMessage(this_00,param_1);
  if (*(int *)(param_1 + 0x10) == 0x43ff) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x14) + 0x17);
    switch(*piVar3) {
    case 1:
      if (DAT_00808783 == '\x03') {
        if (piVar3[2] != 0) {
          DAT_00808784 = (void *)piVar3[1];
          this_00[0x21].objectLock = DAT_00808784;
          FUN_00725760(DAT_00807598,(int)DAT_00808784,
                       -(uint)(DAT_00808784 != (void *)0x0) & DAT_008032b4);
          if (DAT_008016e0 != (PausePanelTy *)0x0) {
            PausePanelTy::SwitchPausePanel(DAT_008016e0,(int)DAT_00808784);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
        }
      }
      else if (piVar3[2] == 0) {
        if (this_00[0x21].objectLock == (void *)0x0) {
          DAT_00808784 = (void *)piVar3[1];
          FUN_00725760(DAT_00807598,(int)DAT_00808784,
                       -(uint)(DAT_00808784 != (void *)0x0) & DAT_008032b4);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else {
        if ((DAT_0080878c == 0) && (DAT_00808790 == 0)) {
          DAT_00808784 = (void *)piVar3[1];
          FUN_00725760(DAT_00807598,(int)DAT_00808784,
                       -(uint)(DAT_00808784 != (void *)0x0) & DAT_008032b4);
        }
        pvVar4 = (void *)piVar3[1];
        this_00[0x21].objectLock = pvVar4;
        if (DAT_008016e0 != (PausePanelTy *)0x0) {
          PausePanelTy::SwitchPausePanel(DAT_008016e0,(int)pvVar4);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 4:
      uVar16 = piVar3[1];
      if (DAT_0080733b != uVar16) {
        DAT_0080733b = (byte)uVar16;
        if (DAT_0080877e == '\0') {
          iVar6 = (uVar16 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 0x14);
        }
        else {
          iVar6 = (uVar16 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 8);
        }
        if (DAT_00807598 != (void *)0x0) {
          FUN_006e8640(DAT_00807598,
                       *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 0x10),
                       *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 4));
          g_currentExceptionFrame = local_8c.previous;
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
      pvVar4 = DAT_008016e4;
      if (DAT_008016e4 != (void *)0x0) {
        *(undefined4 *)((int)DAT_008016e4 + 0x28) = 5;
        piVar18 = (int *)((int)pvVar4 + 0x181);
        puVar12 = (undefined4 *)0x8;
        do {
          if (*piVar18 != 0) {
            puVar12 = (undefined4 *)((int)pvVar4 + 0x18);
            FUN_006e6080(pvVar4,2,*piVar18,puVar12);
          }
          piVar18 = piVar18 + 1;
          puVar12 = (undefined4 *)((int)puVar12 + -1);
        } while (puVar12 != (undefined4 *)0x0);
      }
      if ((ushort)((uint)piVar3[1] >> 0x10) != (ushort)DAT_0080874d) {
        if (DAT_00808aaf != 0) {
          uVar16 = (uint)DAT_00808aaf;
          do {
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          if (DAT_00808aaf != 0) {
            uVar16 = (uint)DAT_00808aaf;
            do {
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
        pCVar11 = (LPCSTR)FUN_006b0140(0x42c2,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,pCVar11);
        if (DAT_008016d8 != (void *)0x0) {
          thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,8);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 8:
      local_1b0.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_1b0;
      iVar6 = Library::MSVCRT::__setjmp3(local_1b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar6 == 0) {
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc);
        puVar12 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
        local_48 = 0x577d84;
        puVar13 = CreateOpponentList((int)puVar12,piVar3[1],DAT_0080995c);
        pcVar15 = (cMf32 *)puVar13[3];
        pcVar9 = extraout_ECX_02;
        if (pcVar15 != (cMf32 *)0x0) {
          pcVar9 = (cMf32 *)((int)&pcVar15[-1].field_002E + 1);
          if (pcVar9 < pcVar15) {
            pcVar19 = (char *)((int)((int)&pcVar15[-1].field_002E + 1) * puVar13[2] + puVar13[7]);
          }
          else {
            pcVar19 = (char *)0x0;
          }
          if ((pcVar19 + 0x4c != (char *)0x0) &&
             (puVar10 = LoadStrategData((int)puVar12,pcVar19 + 0x4c,(int *)0x0),
             pcVar9 = extraout_ECX_03, puVar10 != (ushort *)0x0)) {
            uVar16 = 0xffffffff;
            do {
              pcVar20 = pcVar19;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar20 = pcVar19 + 1;
              cVar1 = *pcVar19;
              pcVar19 = pcVar20;
            } while (cVar1 != '\0');
            uVar16 = ~uVar16;
            pcVar19 = pcVar20 + -uVar16;
            pcVar20 = local_16c;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar20 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
              pcVar20 = pcVar20 + 4;
            }
            bVar2 = *(byte *)(piVar3 + 2);
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar20 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar20 = pcVar20 + 1;
            }
            local_12c = DAT_0080877f;
            local_127 = 1;
            local_125 = 1;
            local_126 = 0;
            local_128 = bVar2;
            local_124 = timeGetTime();
            if (bVar2 < 8) {
              pcVar19 = local_16c;
              puVar12 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar6 = 0x27; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar12 = *(undefined4 *)pcVar19;
                pcVar19 = pcVar19 + 4;
                puVar12 = puVar12 + 1;
              }
              DAT_00808aaf = DAT_00808aaf + 1;
              if (DAT_008016e4 != (void *)0x0) {
                thunk_FUN_0053a540(DAT_008016e4);
              }
            }
            puVar12 = (undefined4 *)0x577e83;
            StartStrateg((int)puVar10,piVar3[2]);
            *(undefined1 *)((int)&DAT_008087c4 + piVar3[2] * 0x51 + 3) = 1;
            puVar13 = (uint *)0x577e9d;
            FUN_006ab060((undefined4 *)&stack0xffffffdc);
            pcVar9 = extraout_ECX_04;
          }
        }
        if (puVar13 != (uint *)0x0) {
          FUN_006ae110((byte *)puVar13);
          pcVar9 = extraout_ECX_05;
        }
        cMf32::delete(pcVar9,puVar12);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 9:
      if (DAT_008117bc != (undefined4 *)0x0) {
        puVar12 = &local_48;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        (**(code **)*DAT_008117bc)();
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0x4400) {
    pcVar19 = *(char **)(*(int *)(param_1 + 0x14) + 0x17);
    cVar1 = *pcVar19;
    bVar2 = pcVar19[1];
    uVar16 = (uint)bVar2;
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      thunk_FUN_00648dd0(uVar16);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        _Count = *(size_t *)(pcVar19 + 1);
        DAT_00808750 = *(undefined4 *)(pcVar19 + 9);
        iVar6 = -1;
        Library::MSVCRT::_strncpy((char *)0x88000516,*(char **)(pcVar19 + 5),_Count);
        local_3f4.cAlternateFileName[_Count + 0xf] = '\0';
        do {
          if (iVar6 < 0) {
            wsprintfA((LPSTR)&DAT_0080f022,s__s_s_s__s_s_s_007cac78);
          }
          else {
            wsprintfA((LPSTR)&DAT_0080f022,s__s_s_s__s_s_d_s_007cac64);
          }
          iVar6 = iVar6 + 1;
          pvVar7 = FindFirstFileA((LPCSTR)&DAT_0080f022,&local_3f4);
          bVar21 = pvVar7 != (HANDLE)0xffffffff;
          if (!bVar21) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          puVar24 = (undefined *)0x0;
          local_d0.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_d0;
          iVar8 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0,(void *)0x0,iVar6);
          if (iVar8 == 0) {
            pcVar9 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)&DAT_0080f022,0,0,0);
            if (pcVar9 == (cMf32 *)0x0) {
              bVar21 = false;
            }
            else {
              puVar10 = cMf32::RecGet(pcVar9,(byte)local_1d90,PTR_s_DESCRIPTOR_0079b1a4,
                                      (int *)&stack0xffffffe0,0);
              pcVar15 = extraout_ECX_00;
              if (puVar10 != (ushort *)0x0) {
                pcVar23 = (cMf32 *)&stack0xffffffe0;
                puVar22 = PTR_s_SAVE_DESC_0079b1a0;
                puVar10 = cMf32::RecGet(pcVar9,(byte)&stack0xfffffff0,PTR_s_SAVE_DESC_0079b1a0,
                                        (int *)pcVar23,0);
                pcVar15 = extraout_ECX_01;
                if ((puVar10 != (ushort *)0x0) &&
                   ((pcVar15 = extraout_ECX_01, puVar22 != puVar24 ||
                    (pcVar15 = pcVar23, local_1d88 != pcVar23)))) {
                  bVar21 = true;
                  cMf32::delete(pcVar15,(undefined4 *)pcVar9);
                  goto LAB_00577956;
                }
              }
              bVar21 = false;
              cMf32::delete(pcVar15,(undefined4 *)pcVar9);
            }
          }
LAB_00577956:
          g_currentExceptionFrame = local_d0.previous;
          if (!bVar21) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
        } while( true );
      }
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      thunk_FUN_00648dd0(uVar16);
      StartStrateg((int)(pcVar19 + 2),uVar16);
    }
    if (DAT_008016dc != (void *)0x0) {
      thunk_FUN_00532ce0(DAT_008016dc);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}


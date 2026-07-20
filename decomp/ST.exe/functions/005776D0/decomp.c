
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::GetMessage */

undefined4 __thiscall
GameSystemC::GetMessage(GameSystemC *this,AnonShape_005776D0_202C27C7 *param_1)

{
  char cVar1;
  byte bVar2;
  size_t _Count;
  int *piVar3;
  void *pvVar4;
  code *pcVar5;
  PlayPanelTy *this_00;
  int iVar6;
  HANDLE pvVar7;
  int iVar8;
  cMf32 *pcVar9;
  ushort *puVar10;
  cMf32 *pcVar11;
  uint *groupContent;
  undefined4 uVar12;
  SystemClassTy *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *pcVar13;
  cMf32 *extraout_ECX_02;
  cMf32 *extraout_ECX_03;
  uint uVar14;
  uint uVar15;
  cMf32 *extraout_ECX_04;
  cMf32 *extraout_ECX_05;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 *puVar19;
  bool bVar20;
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
  SystemClassTy *this_01;
  undefined *puVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  
  Library::MSVCRT::FUN_0072da40();
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  this_01 = extraout_ECX;
  iVar6 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar8 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x1c6,0,iVar6,&DAT_007a4ccc);
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_tsystem_cpp_007cab5c,0x1c7);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return uVar12;
  }
  SystemClassTy::GetMessage(this_01,(int)param_1);
  if (param_1->field_0010 == 0x43ff) {
    piVar3 = *(int **)(param_1->field_0014 + 0x17);
    switch(*piVar3) {
    case 1:
      if (DAT_00808783 == '\x03') {
        if (piVar3[2] != 0) {
          DAT_00808784 = (void *)piVar3[1];
          this_01[0x21].objectLock = DAT_00808784;
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (PTR_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != (void *)0x0) & DAT_008032b4);
          if (g_pausePanel_008016E0 != (PausePanelTy *)0x0) {
            PausePanelTy::SwitchPausePanel(g_pausePanel_008016E0,(int)DAT_00808784);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
        }
      }
      else if (piVar3[2] == 0) {
        if (this_01[0x21].objectLock == (void *)0x0) {
          DAT_00808784 = (void *)piVar3[1];
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (PTR_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != (void *)0x0) & DAT_008032b4);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else {
        if ((DAT_0080878c == 0) && (DAT_00808790 == 0)) {
          DAT_00808784 = (void *)piVar3[1];
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (PTR_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != (void *)0x0) & DAT_008032b4);
        }
        pvVar4 = (void *)piVar3[1];
        this_01[0x21].objectLock = pvVar4;
        if (g_pausePanel_008016E0 != (PausePanelTy *)0x0) {
          PausePanelTy::SwitchPausePanel(g_pausePanel_008016E0,(int)pvVar4);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 4:
      uVar14 = piVar3[1];
      if (DAT_0080733b != uVar14) {
        DAT_0080733b = (byte)uVar14;
        if (DAT_0080877e == '\0') {
          iVar6 = (uVar14 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 0x14);
        }
        else {
          iVar6 = (uVar14 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 8);
        }
        if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
          FUN_006e8640(PTR_00807598,*(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 0x10),
                       *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 4));
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
      this_00 = g_playPanel_008016E4;
      if (g_playPanel_008016E4 != (PlayPanelTy *)0x0) {
        g_playPanel_008016E4->field_0028 = 5;
        piVar16 = &this_00->field_0181;
        puVar22 = (undefined1 *)0x8;
        do {
          if (*piVar16 != 0) {
            puVar22 = &this_00->field_0x18;
            FUN_006e6080(this_00,2,*piVar16,(undefined4 *)puVar22);
          }
          piVar16 = piVar16 + 1;
          puVar22 = puVar22 + -1;
        } while (puVar22 != (undefined1 *)0x0);
      }
      if ((ushort)((uint)piVar3[1] >> 0x10) != (ushort)DAT_0080874d) {
        if (DAT_00808aaf != 0) {
          uVar14 = (uint)DAT_00808aaf;
          do {
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          if (DAT_00808aaf != 0) {
            uVar14 = (uint)DAT_00808aaf;
            do {
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        pcVar17 = (char *)FUN_006b0140(0x42c2,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,pcVar17);
        if (g_popUp_008016D8 != (PopUpTy *)0x0) {
          thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
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
        pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0)
        ;
        local_48 = 0x577d84;
        groupContent = CreateOpponentList(pcVar11,piVar3[1],DAT_0080995c);
        pcVar13 = (cMf32 *)groupContent[3];
        pcVar9 = extraout_ECX_02;
        if (pcVar13 != (cMf32 *)0x0) {
          pcVar9 = (cMf32 *)((int)&pcVar13[-1].field_002E + 1);
          if (pcVar9 < pcVar13) {
            pcVar17 = (char *)((int)((int)&pcVar13[-1].field_002E + 1) * groupContent[2] +
                              groupContent[7]);
          }
          else {
            pcVar17 = (char *)0x0;
          }
          if ((pcVar17 + 0x4c != (char *)0x0) &&
             (puVar10 = LoadStrategData((int)pcVar11,pcVar17 + 0x4c,(int *)0x0),
             pcVar9 = extraout_ECX_03, puVar10 != (ushort *)0x0)) {
            uVar14 = 0xffffffff;
            do {
              pcVar18 = pcVar17;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar18 = pcVar17 + 1;
              cVar1 = *pcVar17;
              pcVar17 = pcVar18;
            } while (cVar1 != '\0');
            uVar14 = ~uVar14;
            pcVar17 = pcVar18 + -uVar14;
            pcVar18 = local_16c;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcVar18 = pcVar18 + 4;
            }
            bVar2 = *(byte *)(piVar3 + 2);
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar18 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcVar18 = pcVar18 + 1;
            }
            local_12c = DAT_0080877f;
            local_127 = 1;
            local_125 = 1;
            local_126 = 0;
            local_128 = bVar2;
            local_124 = timeGetTime();
            if (bVar2 < 8) {
              pcVar17 = local_16c;
              puVar19 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar6 = 0x27; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar19 = *(undefined4 *)pcVar17;
                pcVar17 = pcVar17 + 4;
                puVar19 = puVar19 + 1;
              }
              DAT_00808aaf = DAT_00808aaf + 1;
              if (g_playPanel_008016E4 != (PlayPanelTy *)0x0) {
                thunk_FUN_0053a540(g_playPanel_008016E4);
              }
            }
            pcVar11 = (cMf32 *)0x577e83;
            StartStrateg(puVar10,piVar3[2]);
            *(undefined1 *)((int)&DAT_008087c4 + piVar3[2] * 0x51 + 3) = 1;
            groupContent = (uint *)0x577e9d;
            FUN_006ab060((LPVOID *)&stack0xffffffdc);
            pcVar9 = extraout_ECX_04;
          }
        }
        if (groupContent != (uint *)0x0) {
          FUN_006ae110((byte *)groupContent);
          pcVar9 = extraout_ECX_05;
        }
        cMf32::delete(pcVar9,pcVar11);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 9:
      if (DAT_008117bc != (undefined4 *)0x0) {
        puVar19 = &local_48;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar19 = 0;
          puVar19 = puVar19 + 1;
        }
        (**(code **)*DAT_008117bc)();
      }
    }
  }
  else if (param_1->field_0010 == 0x4400) {
    pcVar17 = *(char **)(param_1->field_0014 + 0x17);
    cVar1 = *pcVar17;
    bVar2 = pcVar17[1];
    uVar14 = (uint)bVar2;
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      thunk_FUN_00648dd0(uVar14);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        _Count = *(size_t *)(pcVar17 + 1);
        DAT_00808750 = *(undefined4 *)(pcVar17 + 9);
        iVar6 = -1;
        Library::MSVCRT::_strncpy((char *)0x88000516,*(char **)(pcVar17 + 5),_Count);
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
          bVar20 = pvVar7 != (HANDLE)0xffffffff;
          if (!bVar20) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          puVar23 = (undefined *)0x0;
          local_d0.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_d0;
          iVar8 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0,(void *)0x0,iVar6);
          if (iVar8 == 0) {
            pcVar9 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                        (0x345,(byte *)&DAT_0080f022,0,0,0);
            if (pcVar9 == (cMf32 *)0x0) {
              bVar20 = false;
            }
            else {
              puVar10 = cMf32::RecGet(pcVar9,(byte)local_1d90,PTR_s_DESCRIPTOR_0079b1a4,
                                      (int *)&stack0xffffffe0,0);
              pcVar13 = extraout_ECX_00;
              if (puVar10 != (ushort *)0x0) {
                pcVar11 = (cMf32 *)&stack0xffffffe0;
                puVar21 = PTR_s_SAVE_DESC_0079b1a0;
                puVar10 = cMf32::RecGet(pcVar9,(byte)&stack0xfffffff0,PTR_s_SAVE_DESC_0079b1a0,
                                        (int *)pcVar11,0);
                pcVar13 = extraout_ECX_01;
                if ((puVar10 != (ushort *)0x0) &&
                   ((pcVar13 = extraout_ECX_01, puVar21 != puVar23 ||
                    (pcVar13 = pcVar11, local_1d88 != pcVar11)))) {
                  bVar20 = true;
                  cMf32::delete(pcVar13,pcVar9);
                  goto LAB_00577956;
                }
              }
              bVar20 = false;
              cMf32::delete(pcVar13,pcVar9);
            }
          }
LAB_00577956:
          g_currentExceptionFrame = local_d0.previous;
          if (!bVar20) {
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
      thunk_FUN_00648dd0(uVar14);
      StartStrateg((ushort *)(pcVar17 + 2),uVar14);
    }
    if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
      thunk_FUN_00532ce0((AnonShape_00532CE0_361E49BD *)g_optPanel_008016DC);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}


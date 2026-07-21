#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040482C|005776D0; family_names=GameSystemC::GetMessage; ret4=10;
   direct_offsets={10:1,14:2,18:1,1c:1} */

int __thiscall GameSystemC::GetMessage(GameSystemC *this,STMessage *message)

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
  DArrayTy *array;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  SystemClassTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_01;
  cMf32 *pcVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_03;
  uint uVar13;
  uint uVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_05;
  int *piVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 *puVar18;
  bool bVar19;
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
  undefined *puVar20;
  undefined1 *puVar21;

  Library::MSVCRT::FUN_0072da40();
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  this_01 = extraout_ECX;
  iVar6 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0x1c6,0,iVar6,"%s");
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\tsystem.cpp",0x1c7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SystemClassTy::GetMessage(this_01,message);
  if (message->id == MESS_GAMESYSTEMC_43FF) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar3 = *(int **)((message->arg0).u32 + 0x17);
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
      uVar13 = piVar3[1];
      if (DAT_0080733b != uVar13) {
        DAT_0080733b = (byte)uVar13;
        if (DAT_0080877e == '\0') {
          iVar6 = (uVar13 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 0x14);
        }
        else {
          iVar6 = (uVar13 & 0xff) * 0x18;
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
        piVar15 = &this_00->field_0181;
        puVar21 = (undefined1 *)0x8;
        do {
          if (*piVar15 != 0) {
            puVar21 = &this_00->field_0x18;
            FUN_006e6080(this_00,2,*piVar15,(undefined4 *)puVar21);
          }
          piVar15 = piVar15 + 1;
          puVar21 = puVar21 + -1;
        } while (puVar21 != (undefined1 *)0x0);
      }
      if ((ushort)((uint)piVar3[1] >> 0x10) != (ushort)DAT_0080874d) {
        if (DAT_00808aaf != 0) {
          uVar13 = (uint)DAT_00808aaf;
          do {
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          if (DAT_00808aaf != 0) {
            uVar13 = (uint)DAT_00808aaf;
            do {
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        pcVar16 = LoadResourceString(0x42c2,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,pcVar16);
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
      iVar6 = Library::MSVCRT::__setjmp3(local_1b0.jumpBuffer,0);
      if (iVar6 == 0) {
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s");
        pcVar11 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0)
        ;
        local_48 = 0x577d84;
        array = (DArrayTy *)CreateOpponentList(pcVar11,piVar3[1],DAT_0080995c);
        pcVar12 = (cMf32 *)array->count;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pcVar9 = extraout_ECX_02;
        if (pcVar12 != (cMf32 *)0x0) {
          pcVar9 = (cMf32 *)((int)&pcVar12[-1].field_002E + 1);
          if (pcVar9 < pcVar12) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar16 = (char *)((int)((int)&pcVar12[-1].field_002E + 1) * array->elementSize +
                              (int)array->data);
          }
          else {
            pcVar16 = (char *)0x0;
          }
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((pcVar16 + 0x4c != (char *)0x0) &&
             (puVar10 = LoadStrategData((int)pcVar11,pcVar16 + 0x4c,(int *)0x0),
             pcVar9 = extraout_ECX_03, puVar10 != (ushort *)0x0)) {
            uVar13 = 0xffffffff;
            do {
              pcVar17 = pcVar16;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pcVar17 = pcVar16 + 1;
              cVar1 = *pcVar16;
              pcVar16 = pcVar17;
            } while (cVar1 != '\0');
            uVar13 = ~uVar13;
            pcVar16 = pcVar17 + -uVar13;
            pcVar17 = local_16c;
            for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              pcVar17 = pcVar17 + 4;
            }
            bVar2 = *(byte *)(piVar3 + 2);
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
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
              puVar18 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar6 = 0x27; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar18 = *(undefined4 *)pcVar16;
                pcVar16 = pcVar16 + 4;
                puVar18 = puVar18 + 1;
              }
              DAT_00808aaf = DAT_00808aaf + 1;
              if (g_playPanel_008016E4 != (PlayPanelTy *)0x0) {
                thunk_FUN_0053a540(g_playPanel_008016E4);
              }
            }
            pcVar11 = (cMf32 *)0x577e83;
            StartStrateg(puVar10,piVar3[2]);
            *(undefined1 *)((int)&DAT_008087c4 + piVar3[2] * 0x51 + 3) = 1;
            array = (DArrayTy *)0x577e9d;
            FreeAndNull((void **)&stack0xffffffdc);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            pcVar9 = extraout_ECX_04;
          }
        }
        if (array != (DArrayTy *)0x0) {
          DArrayDestroy(array);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          pcVar9 = extraout_ECX_05;
        }
        cMf32::delete(pcVar9,pcVar11);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 9:
      if (DAT_008117bc != (undefined4 *)0x0) {
        memset(&local_48, 0, 0x20); /* compiler bulk-zero initialization */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)();
      }
    }
  }
  else if (message->id == MESS_GAMESYSTEMC_4400) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar16 = *(char **)((message->arg0).u32 + 0x17);
    cVar1 = *pcVar16;
    bVar2 = pcVar16[1];
    uVar13 = (uint)bVar2;
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      thunk_FUN_00648dd0(uVar13);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        _Count = *(size_t *)(pcVar16 + 1);
        DAT_00808750 = *(undefined4 *)(pcVar16 + 9);
        iVar6 = -1;
        Library::MSVCRT::_strncpy((char *)0x88000516,*(char **)(pcVar16 + 5),_Count);
        local_3f4.cAlternateFileName[_Count + 0xf] = '\0';
        do {
          if (iVar6 < 0) {
            wsprintfA((LPSTR)&DAT_0080f022,"%s%s%s\\%s%s%s");
          }
          else {
            wsprintfA((LPSTR)&DAT_0080f022,"%s%s%s\\%s%s%d%s");
          }
          iVar6 = iVar6 + 1;
          pvVar7 = FindFirstFileA((LPCSTR)&DAT_0080f022,&local_3f4);
          bVar19 = pvVar7 != (HANDLE)0xffffffff;
          if (!bVar19) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          local_d0.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_d0;
          iVar8 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0);
          if (iVar8 == 0) {
            pcVar9 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                        (0x345,(byte *)&DAT_0080f022,0,0,0);
            if (pcVar9 == (cMf32 *)0x0) {
              bVar19 = false;
            }
            else {
              puVar10 = cMf32::RecGet(pcVar9,(byte)local_1d90,PTR_s_DESCRIPTOR_0079b1a4,
                                      (int *)&stack0xffffffe0,0);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              pcVar12 = extraout_ECX_00;
              if (puVar10 != (ushort *)0x0) {
                pcVar11 = (cMf32 *)&stack0xffffffe0;
                puVar20 = PTR_s_SAVE_DESC_0079b1a0;
                puVar10 = cMf32::RecGet(pcVar9,(byte)&stack0xfffffff0,PTR_s_SAVE_DESC_0079b1a0,
                                        (int *)pcVar11,0);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                pcVar12 = extraout_ECX_01;
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if ((puVar10 != (ushort *)0x0) &&
                   ((pcVar12 = extraout_ECX_01, puVar20 != (undefined *)0x0 ||
                    (pcVar12 = pcVar11, local_1d88 != pcVar11)))) {
                  bVar19 = true;
                  cMf32::delete(pcVar12,pcVar9);
                  goto LAB_00577956;
                }
              }
              bVar19 = false;
              cMf32::delete(pcVar12,pcVar9);
            }
          }
LAB_00577956:
          g_currentExceptionFrame = local_d0.previous;
          if (!bVar19) {
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
      thunk_FUN_00648dd0(uVar13);
      StartStrateg((ushort *)(pcVar16 + 2),uVar13);
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


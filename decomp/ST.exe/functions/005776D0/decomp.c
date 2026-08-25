#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040482C|005776D0; family_names=GameSystemC::GetMessage; ret4=10;
   direct_offsets={10:1,14:2,18:1,1c:1}

   [STDiscriminatedPayloadApplier] Case-local payload view: message->id == MESS_GAMESYSTEMC_43FF
   uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/GameSystemC_GetMessage_005776D0_MessagePayload_Case_MESS_GAMESYSTEMC_43FF.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage.

   [STDiscriminatedPayloadApplier] Case-local payload view: message->id == MESS_GAMESYSTEMC_4400
   uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/GameSystemC_GetMessage_005776D0_MessagePayload_Case_MESS_GAMESYSTEMC_4400.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage. */

int __thiscall GameSystemC::GetMessage(GameSystemC *this,STMessage *message)

{
  char cVar1;
  byte bVar2;
  size_t _Count;
  PlayPanelTy *this_00;
  GameSystemC *pGVar4;
  int local_EAX_51;
  HANDLE pvVar5;
  int iVar6_mg1;
  cMf32 *pcVar6;
  ushort *puVar7;
  char *pcVar8;
  char *local_EAX_1519;
  int iVar5;
  DArrayTy *array;
  int iVar19;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  STMessage *pSVar16;
  char *local_1d90 [2];
  int local_1d88;
  _WIN32_FIND_DATAA local_3f4;
  char local_2b4 [260];
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
  STMessage local_48;
  GameSystemC *local_28;
  AnonShape_00648C10_30A1BBFD *local_24;
  char **local_20;
  cMf32 *local_1c;
  DArrayTy *local_18;
  int local_14;
  char *local_10;
  char *local_c;
  int *local_8;
  char *pcVar13;

  local_8 = (int *)0x5776dd;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_28 = this;
  local_EAX_51 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  pGVar4 = local_28;
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar19 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0x1c6,0,local_EAX_51,
                                "%s","GameSystemC::GetMessage");
    if (iVar19 == 0) {
      RaiseInternalException(local_EAX_51,0,"E:\\__titans\\tsystem.cpp",0x1c7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SystemClassTy::GetMessage((SystemClassTy *)local_28,message);
  if (message->id == MESS_GAMESYSTEMC_43FF) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar13 = *(int **)((message->arg0).u32 + 0x17);
    local_8 = piVar13;
    switch(*piVar13) {
    case 1:
      if (DAT_00808783 == '\x03') {
        if (piVar13[2] != 0) {
          DAT_00808784 = piVar13[1];
          pGVar4->field_042C = DAT_00808784;
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (g_sT3DSMAPContext_00807598,DAT_00808784,
                     -(uint)(DAT_00808784 != 0) & (uint)PTR_008032b4);
          if (g_pausePanel_008016E0 != nullptr) {
            /* ST_CALLSITE[00577A59]: CALL 0x0040504c; direct=0040504C PausePanelTy::SwitchPausePanel */
            PausePanelTy::SwitchPausePanel(g_pausePanel_008016E0,DAT_00808784);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
        }
      }
      else if (piVar13[2] == 0) {
        if (pGVar4->field_042C == 0) {
          DAT_00808784 = piVar13[1];
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (g_sT3DSMAPContext_00807598,DAT_00808784,
                     -(uint)(DAT_00808784 != 0) & (uint)PTR_008032b4);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else {
        if ((DAT_0080878c == 0) && (DAT_00808790 == 0)) {
          DAT_00808784 = piVar13[1];
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (g_sT3DSMAPContext_00807598,DAT_00808784,
                     -(uint)(DAT_00808784 != 0) & (uint)PTR_008032b4);
        }
        iVar9 = piVar13[1];
        pGVar4->field_042C = iVar9;
        if (g_pausePanel_008016E0 != nullptr) {
          /* ST_CALLSITE[00577AC6]: CALL 0x0040504c; direct=0040504C PausePanelTy::SwitchPausePanel */
          PausePanelTy::SwitchPausePanel(g_pausePanel_008016E0,iVar9);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 4:
      uVar10 = piVar13[1];
      if (DAT_0080733b != uVar10) {
        DAT_0080733b = (byte)uVar10;
        if (DAT_0080877e == '\0') {
          iVar9 = (uVar10 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar9 + 0x14);
        }
        else {
          iVar9 = (uVar10 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar9 + 8);
        }
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          ST3DSMAPContext::sub_006E8640
                    (g_sT3DSMAPContext_00807598,
                     *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar9 + 0x10),
                     *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar9 + 4));
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 6:
    case 7:
      local_c = &CHAR_00h_008016a0;
      local_10 = &CHAR_00h_008016a0;
      if (*piVar13 == 6) {
        thunk_FUN_0056a8d0(&DAT_00807620,(byte)((uint)piVar13[1] >> 0x10),((byte *)piVar13)[1],
                           (char)piVar13[2]);
      }
      else {
        thunk_FUN_0056a960(&DAT_00807620,(byte)((uint)piVar13[1] >> 0x10),((byte *)piVar13)[1]);
      }
      this_00 = g_playPanel_008016E4;
      if (g_playPanel_008016E4 != nullptr) {
        g_playPanel_008016E4->field_0028 = 5;
        piVar14 = &this_00->field_0181;
        local_14 = 8;
        do {
          if (*piVar14 != 0) {
            FUN_006e6080(this_00,2,*piVar14,(undefined4 *)&this_00->field_0x18);
          }
          piVar14 = piVar14 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      uVar12 = (ushort)((uint)piVar13[1] >> 0x10);
      if (uVar12 != DAT_0080874d) {
        pcVar15 = local_10;
        if (DAT_00808aaf != 0) {
          pcVar8 = &DAT_00808af5;
          uVar10 = (uint)DAT_00808aaf;
          do {
            if (((byte)pcVar8[-1] == uVar12) && (*pcVar8 != '\0')) {
              local_c = pcVar8 + -0x45;
            }
            pcVar8 = pcVar8 + 0x9c;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          if (DAT_00808aaf != 0) {
            uVar10 = (uint)DAT_00808aaf;
            pcVar8 = &DAT_00808af5;
            do {
              if (((ushort)(byte)pcVar8[-1] == *(ushort *)(piVar13 + 1)) && (*pcVar8 != '\0')) {
                pcVar15 = pcVar8 + -0x45;
              }
              pcVar8 = pcVar8 + 0x9c;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        pcVar8 = local_c;
        local_EAX_1519 = LoadResourceString(0x42c2,g_hINSTANCE_00807618);
        /* ST_CALLSITE[00577CCA]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,local_EAX_1519,pcVar8,pcVar15);
        if (g_popUp_008016D8 != nullptr) {
          thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 8:
      local_1b0.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_1b0;
      iVar5 = Library::MSVCRT::__setjmp3(local_1b0.jumpBuffer,0);
      if (iVar5 == 0) {
        /* ST_CALLSITE[00577D50]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079b190,
                  PTR_s_STRATEGS_0079b198);
        pcVar6 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
        local_1c = pcVar6;
        /* ST_CALLSITE[00577D7F]: CALL 0x00403f44; direct=00403F44 CreateOpponentList */
        array = (DArrayTy *)CreateOpponentList(pcVar6,local_8[1],DAT_0080995c);
        uVar10 = array->count;
        local_18 = array;
        if (uVar10 != 0) {
          if (uVar10 - 1 < uVar10) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar15 = (char *)((uVar10 - 1) * array->elementSize + (int)array->data);
          }
          else {
            pcVar15 = nullptr;
          }
          if ((pcVar15 + 0x4c != nullptr) &&
             (local_24 = (AnonShape_00648C10_30A1BBFD *)
                         /* ST_CALLSITE[00577DBF]: CALL 0x004012ad; direct=004012AD LoadStrategData */
                         LoadStrategData((int)pcVar6,pcVar15 + 0x4c,nullptr), piVar13 = local_8,
             local_24 != nullptr)) {
            uVar10 = 0xffffffff;
            do {
              pcVar8 = pcVar15;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar8 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar8;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            pcVar15 = pcVar8 + -uVar10;
            pcVar8 = local_16c;
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar8 = pcVar8 + 4;
            }
            bVar2 = ((byte *)piVar13)[2];
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar8 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar8 = pcVar8 + 1;
            }
            local_12c = DAT_0080877f;
            local_127 = 1;
            local_125 = 1;
            local_126 = 0;
            local_128 = bVar2;
            /* ST_CALLSITE[00577E22]: CALL dword ptr [0x0085bedc] */
            local_124 = timeGetTime();
            if (bVar2 < 8) {
              pcVar15 = local_16c;
              pcVar8 = &CHAR_00h_00808ab0 + (uint)DAT_00808aaf * 0x9c;
              memmove(pcVar8, pcVar15, 0x9c); /* compiler REP MOVS byte copy */
              DAT_00808aaf = DAT_00808aaf + 1;
              if (g_playPanel_008016E4 != nullptr) {
                /* ST_CALLSITE[00577E6E]: CALL 0x00405e07; direct=00405E07 PlayPanelTy::sub_0053A540 */
                PlayPanelTy::sub_0053A540(g_playPanel_008016E4);
              }
            }
            piVar13 = local_8;
            /* ST_CALLSITE[00577E7E]: CALL 0x004018a7; direct=004018A7 StartStrateg */
            StartStrateg(local_24,local_8[2]);
            *(undefined1 *)(g_bulkInitializedRecords_008087C7 + piVar13[2]) = 1;
            FreeAndNull(&local_24);
            pcVar6 = local_1c;
            array = local_18;
          }
        }
        if (array != nullptr) {
          DArrayDestroy(array);
        }
        cMf32::delete(pcVar6);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 9:
      if (g_aiBossClass_008117BC != nullptr) {
        pSVar16 = &local_48;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          pSVar16->unknown_00 = 0;
          pSVar16 = (STMessage *)&pSVar16->unknown_04;
        }
        local_48.id = MESS_AIBOSSCLASSTY_5DC5;
        local_48.arg0 = *(STMessageArg *)(piVar13 + 1);
        /* ST_CALLSITE[00577EF8]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_aiBossClass_008117BC->GetMessage(&local_48);
      }
    }
  }
  else if (message->id == MESS_GAMESYSTEMC_4400) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar15 = *(char **)((message->arg0).u32 + 0x17);
    cVar1 = *pcVar15;
    bVar2 = pcVar15[1];
    local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar2));
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      thunk_FUN_00648dd0((uint)bVar2);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        _Count = *(size_t *)(pcVar15 + 1);
        local_18 = *(DArrayTy **)(pcVar15 + 5);
        DAT_00808750 = *(undefined4 *)(pcVar15 + 9);
        local_1c = (cMf32 *)0x88000516;
        local_8 = (int *)0x1;
        local_c = (char *)0xffffffff;
        Library::MSVCRT::_strncpy(local_2b4,pcVar15 + 0xd,_Count);
        local_3f4.cAlternateFileName[_Count + 0xf] = '\0';
        do {
          pcVar15 = local_c;
          if ((int)local_c < 0) {
            /* ST_CALLSITE[005777DE]: CALL EBX */
            wsprintfA(&CHAR_00h_0080f022,"%s%s%s\\%s%s%s",&CHAR_00h_00807680,
                      PTR_s_SAVEGAME__0079b18c,&CHAR_00h_00807ddd,PTR_DAT_0079b19c,local_2b4,
                      PTR_CHAR___0079b194);
          }
          else {
            /* ST_CALLSITE[00577816]: CALL EBX */
            wsprintfA(&CHAR_00h_0080f022,"%s%s%s\\%s%s%d%s",&CHAR_00h_00807680,
                      PTR_s_SAVEGAME__0079b18c,&CHAR_00h_00807ddd,PTR_DAT_0079b19c,local_2b4,local_c
                      ,PTR_CHAR___0079b194);
          }
          local_c = (char *)((int)pcVar15 + 1);
          /* ST_CALLSITE[0057782B]: CALL dword ptr [0x0085bcec] */
          pvVar5 = FindFirstFileA(&CHAR_00h_0080f022,&local_3f4);
          local_8 = (int *)(uint)(pvVar5 != (HANDLE)0xffffffff);
          if (local_8 == nullptr) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          local_10 = nullptr;
          local_d0.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_d0;
          iVar6_mg1 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0);
          piVar13 = local_8;
          if (iVar6_mg1 == 0) {
            pcVar6 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                        (0x345,(byte *)&CHAR_00h_0080f022,0,0,0);
            if (pcVar6 == nullptr) {
              local_8 = nullptr;
              piVar13 = (int *)0;
            }
            else {
              local_20 = local_1d90;
              puVar7 = cMf32::RecGet(pcVar6,0,PTR_s_DESCRIPTOR_0079b1a4,(int *)&local_20,0);
              if (puVar7 != nullptr) {
                local_20 = &local_10;
                puVar7 = cMf32::RecGet(pcVar6,0x80,PTR_s_SAVE_DESC_0079b1a0,(int *)&local_20,0);
                if ((puVar7 != nullptr) &&
                   ((local_1c != (cMf32 *)local_10 || ((DArrayTy *)local_1d88 != local_18)))) {
                  local_8 = (int *)0x1;
                  cMf32::delete(pcVar6);
                  piVar13 = (int *)1;
                  goto LAB_00577956;
                }
              }
              local_8 = nullptr;
              cMf32::delete(pcVar6);
              piVar13 = (int *)0;
            }
          }
LAB_00577956:
          g_currentExceptionFrame = local_d0.previous;
          if (piVar13 == nullptr) {
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
      thunk_FUN_00648dd0((uint)bVar2);
      /* ST_CALLSITE[0057799C]: CALL 0x004018a7; direct=004018A7 StartStrateg */
      StartStrateg((AnonShape_00648C10_30A1BBFD *)(pcVar15 + 2),(uint)bVar2);
    }
    if (g_optPanel_008016DC != nullptr) {
      /* ST_CALLSITE[005779B2]: CALL 0x00401cbc; direct=00401CBC OptPanelTy::sub_00532CE0 */
      OptPanelTy::sub_00532CE0(g_optPanel_008016DC);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}


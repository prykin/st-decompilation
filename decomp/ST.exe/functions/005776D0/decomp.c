#include "../../pseudocode_runtime.h"


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
  void *pvVar3;
  PlayPanelTy *this_00;
  int local_EAX_51;
  HANDLE pvVar5;
  int iVar6;
  cMf32 *pcVar7;
  ushort *puVar8;
  char *local_EAX_1519;
  int iVar5;
  DArrayTy *array;
  AnonShape_00648C10_30A1BBFD *strategData;
  int iVar19;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  SystemClassTy *extraout_ECX;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar14;
  byte *puVar15;
  bool bVar16;
  undefined1 local_1d90 [8];
  int *local_1d88;
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
  int *piVar17;
  undefined1 *puVar18;
  int iVar20;
  char *pcVar13;

  Library::MSVCRT::FUN_0072da40();
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  this_01 = extraout_ECX;
  local_EAX_51 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar19 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0x1c6,0,local_EAX_51,
                                "%s");
    if (iVar19 == 0) {
      RaiseInternalException(local_EAX_51,0,"E:\\__titans\\tsystem.cpp",0x1c7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SystemClassTy::GetMessage(this_01,message);
  if (message->id == MESS_GAMESYSTEMC_43FF) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar17 = *(int **)((message->arg0).u32 + 0x17);
    switch(*piVar17) {
    case 1:
      if (DAT_00808783 == '\x03') {
        if (piVar17[2] != 0) {
          DAT_00808784 = (void *)piVar17[1];
          this_01[0x21].objectLock = DAT_00808784;
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (g_sT3DSMAPContext_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != nullptr) & (uint)PTR_008032b4);
          if (g_pausePanel_008016E0 != nullptr) {
            PausePanelTy::SwitchPausePanel(g_pausePanel_008016E0,(int)DAT_00808784);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
        }
      }
      else if (piVar17[2] == 0) {
        if (this_01[0x21].objectLock == nullptr) {
          DAT_00808784 = (void *)piVar17[1];
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (g_sT3DSMAPContext_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != nullptr) & (uint)PTR_008032b4);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else {
        if ((DAT_0080878c == 0) && (DAT_00808790 == 0)) {
          DAT_00808784 = (void *)piVar17[1];
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (g_sT3DSMAPContext_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != nullptr) & (uint)PTR_008032b4);
        }
        pvVar3 = (void *)piVar17[1];
        this_01[0x21].objectLock = pvVar3;
        if (g_pausePanel_008016E0 != nullptr) {
          PausePanelTy::SwitchPausePanel(g_pausePanel_008016E0,(int)pvVar3);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 4:
      uVar9 = piVar17[1];
      if (DAT_0080733b != uVar9) {
        DAT_0080733b = (byte)uVar9;
        if (DAT_0080877e == '\0') {
          iVar20 = (uVar9 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 0x14);
        }
        else {
          iVar20 = (uVar9 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 8);
        }
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          ST3DSMAPContext::sub_006E8640
                    (g_sT3DSMAPContext_00807598,
                     *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 0x10),
                     *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar20 + 4));
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 6:
    case 7:
      if (*piVar17 == 6) {
        thunk_FUN_0056a8d0(&DAT_00807620,(byte)((uint)piVar17[1] >> 0x10),*(byte *)(piVar17 + 1),
                           (char)piVar17[2]);
      }
      else {
        thunk_FUN_0056a960(&DAT_00807620,(byte)((uint)piVar17[1] >> 0x10),*(byte *)(piVar17 + 1));
      }
      this_00 = g_playPanel_008016E4;
      if (g_playPanel_008016E4 != nullptr) {
        g_playPanel_008016E4->field_0028 = 5;
        piVar11 = &this_00->field_0181;
        puVar18 = (undefined1 *)0x8;
        do {
          if (*piVar11 != 0) {
            puVar18 = &this_00->field_0x18;
            FUN_006e6080(this_00,2,*piVar11,(undefined4 *)puVar18);
          }
          piVar11 = piVar11 + 1;
          puVar18 = puVar18 + -1;
        } while (puVar18 != nullptr);
      }
      if ((ushort)((uint)piVar17[1] >> 0x10) != (ushort)DAT_0080874d) {
        if (DAT_00808aaf != 0) {
          uVar9 = (uint)DAT_00808aaf;
          do {
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          if (DAT_00808aaf != 0) {
            uVar9 = (uint)DAT_00808aaf;
            do {
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        local_EAX_1519 = LoadResourceString(0x42c2,g_hINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,local_EAX_1519);
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
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s");
        pcVar7 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
        local_48 = 0x577d84;
        array = (DArrayTy *)CreateOpponentList(pcVar7,piVar17[1],DAT_0080995c);
        uVar9 = array->count;
        if (uVar9 != 0) {
          if (uVar9 - 1 < uVar9) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar12 = (char *)((uVar9 - 1) * array->elementSize + (int)array->data);
          }
          else {
            pcVar12 = nullptr;
          }
          if ((pcVar12 + 0x4c != nullptr) &&
             (strategData = (AnonShape_00648C10_30A1BBFD *)
                            LoadStrategData((int)pcVar7,pcVar12 + 0x4c,nullptr),
             strategData != nullptr)) {
            uVar9 = 0xffffffff;
            do {
              pcVar14 = pcVar12;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar14 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar14;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            pcVar12 = pcVar14 + -uVar9;
            pcVar14 = local_16c;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar14 = pcVar14 + 4;
            }
            bVar2 = *(byte *)(piVar17 + 2);
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar14 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar14 = pcVar14 + 1;
            }
            local_12c = DAT_0080877f;
            local_127 = 1;
            local_125 = 1;
            local_126 = 0;
            local_128 = bVar2;
            local_124 = timeGetTime();
            if (bVar2 < 8) {
              pcVar12 = local_16c;
              puVar15 = (byte *)(&DAT_00808ab0 + (uint)DAT_00808aaf * 0x27);
              memmove(puVar15, pcVar12, 0x9c); /* compiler REP MOVS byte copy */
              DAT_00808aaf = DAT_00808aaf + 1;
              if (g_playPanel_008016E4 != nullptr) {
                PlayPanelTy::sub_0053A540(g_playPanel_008016E4);
              }
            }
            pcVar7 = (cMf32 *)0x577e83;
            StartStrateg(strategData,piVar17[2]);
            *(undefined1 *)(g_bulkInitializedRecords_008087C7 + piVar17[2]) = 1;
            array = (DArrayTy *)0x577e9d;
            FreeAndNull(&stack0xffffffdc);
          }
        }
        if (array != nullptr) {
          DArrayDestroy(array);
        }
        cMf32::delete(pcVar7);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 9:
      if (DAT_008117bc != nullptr) {
        memset(&local_48, 0, 0x20); /* compiler bulk-zero initialization */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)*DAT_008117bc)();
      }
    }
  }
  else if (message->id == MESS_GAMESYSTEMC_4400) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar12 = *(char **)((message->arg0).u32 + 0x17);
    cVar1 = *pcVar12;
    bVar2 = pcVar12[1];
    uVar9 = (uint)bVar2;
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      thunk_FUN_00648dd0(uVar9);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        _Count = *(size_t *)(pcVar12 + 1);
        DAT_00808750 = *(undefined4 *)(pcVar12 + 9);
        iVar20 = -1;
        Library::MSVCRT::_strncpy((char *)0x88000516,*(char **)(pcVar12 + 5),_Count);
        local_3f4.cAlternateFileName[_Count + 0xf] = '\0';
        do {
          if (iVar20 < 0) {
            wsprintfA((LPSTR)&DAT_0080f022,"%s%s%s\\%s%s%s");
          }
          else {
            wsprintfA((LPSTR)&DAT_0080f022,"%s%s%s\\%s%s%d%s");
          }
          iVar20 = iVar20 + 1;
          pvVar5 = FindFirstFileA((LPCSTR)&DAT_0080f022,&local_3f4);
          bVar16 = pvVar5 != (HANDLE)0xffffffff;
          if (!bVar16) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          local_d0.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_d0;
          iVar6 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0);
          if (iVar6 == 0) {
            pcVar7 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                        (0x345,(byte *)&DAT_0080f022,0,0,0);
            if (pcVar7 == nullptr) {
              bVar16 = false;
            }
            else {
              puVar8 = cMf32::RecGet(pcVar7,(byte)local_1d90,PTR_s_DESCRIPTOR_0079b1a4,
                                     (int *)&stack0xffffffe0,0);
              if (puVar8 != nullptr) {
                piVar17 = (int *)&stack0xffffffe0;
                pcVar13 = PTR_s_SAVE_DESC_0079b1a0;
                puVar8 = cMf32::RecGet(pcVar7,(byte)&stack0xfffffff0,PTR_s_SAVE_DESC_0079b1a0,
                                       piVar17,0);
                if ((puVar8 != nullptr) &&
                   ((pcVar13 != nullptr || (local_1d88 != piVar17)))) {
                  bVar16 = true;
                  cMf32::delete(pcVar7);
                  goto LAB_00577956;
                }
              }
              bVar16 = false;
              cMf32::delete(pcVar7);
            }
          }
LAB_00577956:
          g_currentExceptionFrame = local_d0.previous;
          if (!bVar16) {
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
      thunk_FUN_00648dd0(uVar9);
      StartStrateg((AnonShape_00648C10_30A1BBFD *)(pcVar12 + 2),uVar9);
    }
    if (g_optPanel_008016DC != nullptr) {
      OptPanelTy::sub_00532CE0(g_optPanel_008016DC);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}


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
  code *pcVar4;
  PlayPanelTy *this_00;
  int iVar5;
  HANDLE pvVar6;
  int iVar7;
  cMf32 *pcVar8;
  ushort *puVar9;
  DArrayTy *array;
  AnonShape_00648C10_30A1BBFD *strategData;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  SystemClassTy *extraout_ECX;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
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
  undefined *puVar17;
  int *piVar18;
  undefined1 *puVar19;

  Library::MSVCRT::FUN_0072da40();
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  this_01 = extraout_ECX;
  iVar5 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0x1c6,0,iVar5,"%s");
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\tsystem.cpp",0x1c7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SystemClassTy::GetMessage(this_01,message);
  if (message->id == MESS_GAMESYSTEMC_43FF) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar18 = *(int **)((message->arg0).u32 + 0x17);
    switch(*piVar18) {
    case 1:
      if (DAT_00808783 == '\x03') {
        if (piVar18[2] != 0) {
          DAT_00808784 = (void *)piVar18[1];
          this_01[0x21].objectLock = DAT_00808784;
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (g_sT3DSMAPContext_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != nullptr) & DAT_008032b4);
          if (g_pausePanel_008016E0 != nullptr) {
            PausePanelTy::SwitchPausePanel(g_pausePanel_008016E0,(int)DAT_00808784);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
        }
      }
      else if (piVar18[2] == 0) {
        if (this_01[0x21].objectLock == nullptr) {
          DAT_00808784 = (void *)piVar18[1];
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (g_sT3DSMAPContext_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != nullptr) & DAT_008032b4);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else {
        if ((DAT_0080878c == 0) && (DAT_00808790 == 0)) {
          DAT_00808784 = (void *)piVar18[1];
          Library::Ourlib::ST3DPAUS::FUN_00725760
                    (g_sT3DSMAPContext_00807598,(int)DAT_00808784,
                     -(uint)(DAT_00808784 != nullptr) & DAT_008032b4);
        }
        pvVar3 = (void *)piVar18[1];
        this_01[0x21].objectLock = pvVar3;
        if (g_pausePanel_008016E0 != nullptr) {
          PausePanelTy::SwitchPausePanel(g_pausePanel_008016E0,(int)pvVar3);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 4:
      uVar10 = piVar18[1];
      if (DAT_0080733b != uVar10) {
        DAT_0080733b = (byte)uVar10;
        if (DAT_0080877e == '\0') {
          iVar5 = (uVar10 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar5 + 0x14);
        }
        else {
          iVar5 = (uVar10 & 0xff) * 0x18;
          DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar5 + 8);
        }
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          ST3DSMAPContext::sub_006E8640
                    (g_sT3DSMAPContext_00807598,
                     *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar5 + 0x10),
                     *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar5 + 4));
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      break;
    case 6:
    case 7:
      if (*piVar18 == 6) {
        thunk_FUN_0056a8d0(&DAT_00807620,(byte)((uint)piVar18[1] >> 0x10),*(byte *)(piVar18 + 1),
                           (char)piVar18[2]);
      }
      else {
        thunk_FUN_0056a960(&DAT_00807620,(byte)((uint)piVar18[1] >> 0x10),*(byte *)(piVar18 + 1));
      }
      this_00 = g_playPanel_008016E4;
      if (g_playPanel_008016E4 != nullptr) {
        g_playPanel_008016E4->field_0028 = 5;
        piVar12 = &this_00->field_0181;
        puVar19 = (undefined1 *)0x8;
        do {
          if (*piVar12 != 0) {
            puVar19 = &this_00->field_0x18;
            FUN_006e6080(this_00,2,*piVar12,(undefined4 *)puVar19);
          }
          piVar12 = piVar12 + 1;
          puVar19 = puVar19 + -1;
        } while (puVar19 != nullptr);
      }
      if ((ushort)((uint)piVar18[1] >> 0x10) != (ushort)DAT_0080874d) {
        if (DAT_00808aaf != 0) {
          uVar10 = (uint)DAT_00808aaf;
          do {
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          if (DAT_00808aaf != 0) {
            uVar10 = (uint)DAT_00808aaf;
            do {
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        pcVar13 = LoadResourceString(0x42c2,g_module_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,pcVar13);
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
        pcVar8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
        local_48 = 0x577d84;
        array = (DArrayTy *)CreateOpponentList(pcVar8,piVar18[1],DAT_0080995c);
        uVar10 = array->count;
        if (uVar10 != 0) {
          if (uVar10 - 1 < uVar10) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar13 = (char *)((uVar10 - 1) * array->elementSize + (int)array->data);
          }
          else {
            pcVar13 = nullptr;
          }
          if ((pcVar13 + 0x4c != nullptr) &&
             (strategData = (AnonShape_00648C10_30A1BBFD *)
                            LoadStrategData((int)pcVar8,pcVar13 + 0x4c,nullptr),
             strategData != nullptr)) {
            uVar10 = 0xffffffff;
            do {
              pcVar14 = pcVar13;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar14 = pcVar13 + 1;
              cVar1 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            pcVar13 = pcVar14 + -uVar10;
            pcVar14 = local_16c;
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar14 = pcVar14 + 4;
            }
            bVar2 = *(byte *)(piVar18 + 2);
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar14 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar14 = pcVar14 + 1;
            }
            local_12c = DAT_0080877f;
            local_127 = 1;
            local_125 = 1;
            local_126 = 0;
            local_128 = bVar2;
            local_124 = timeGetTime();
            if (bVar2 < 8) {
              pcVar13 = local_16c;
              puVar15 = (byte *)(&DAT_00808ab0 + (uint)DAT_00808aaf * 0x27);
              memmove(puVar15, pcVar13, 0x9c); /* compiler REP MOVS byte copy */
              DAT_00808aaf = DAT_00808aaf + 1;
              if (g_playPanel_008016E4 != nullptr) {
                PlayPanelTy::sub_0053A540(g_playPanel_008016E4);
              }
            }
            pcVar8 = (cMf32 *)0x577e83;
            StartStrateg(strategData,piVar18[2]);
            *(undefined1 *)(g_bulkInitializedRecords_008087C7 + piVar18[2]) = 1;
            array = (DArrayTy *)0x577e9d;
            FreeAndNull((void **)&stack0xffffffdc);
          }
        }
        if (array != nullptr) {
          DArrayDestroy(array);
        }
        cMf32::delete(pcVar8);
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
    pcVar13 = *(char **)((message->arg0).u32 + 0x17);
    cVar1 = *pcVar13;
    bVar2 = pcVar13[1];
    uVar10 = (uint)bVar2;
    if (cVar1 == '\0') {
      if (bVar2 == 0xff) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      thunk_FUN_00648dd0(uVar10);
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        _Count = *(size_t *)(pcVar13 + 1);
        DAT_00808750 = *(undefined4 *)(pcVar13 + 9);
        iVar5 = -1;
        Library::MSVCRT::_strncpy((char *)0x88000516,*(char **)(pcVar13 + 5),_Count);
        local_3f4.cAlternateFileName[_Count + 0xf] = '\0';
        do {
          if (iVar5 < 0) {
            wsprintfA((LPSTR)&DAT_0080f022,"%s%s%s\\%s%s%s");
          }
          else {
            wsprintfA((LPSTR)&DAT_0080f022,"%s%s%s\\%s%s%d%s");
          }
          iVar5 = iVar5 + 1;
          pvVar6 = FindFirstFileA((LPCSTR)&DAT_0080f022,&local_3f4);
          bVar16 = pvVar6 != (HANDLE)0xffffffff;
          if (!bVar16) {
            DAT_00808794 = 1;
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          local_d0.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_d0;
          iVar7 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0);
          if (iVar7 == 0) {
            pcVar8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                        (0x345,(byte *)&DAT_0080f022,0,0,0);
            if (pcVar8 == nullptr) {
              bVar16 = false;
            }
            else {
              puVar9 = cMf32::RecGet(pcVar8,(byte)local_1d90,PTR_s_DESCRIPTOR_0079b1a4,
                                     (int *)&stack0xffffffe0,0);
              if (puVar9 != nullptr) {
                piVar18 = (int *)&stack0xffffffe0;
                puVar17 = PTR_s_SAVE_DESC_0079b1a0;
                puVar9 = cMf32::RecGet(pcVar8,(byte)&stack0xfffffff0,PTR_s_SAVE_DESC_0079b1a0,
                                       piVar18,0);
                if ((puVar9 != nullptr) &&
                   ((puVar17 != nullptr || (local_1d88 != piVar18)))) {
                  bVar16 = true;
                  cMf32::delete(pcVar8);
                  goto LAB_00577956;
                }
              }
              bVar16 = false;
              cMf32::delete(pcVar8);
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
      thunk_FUN_00648dd0(uVar10);
      StartStrateg((AnonShape_00648C10_30A1BBFD *)(pcVar13 + 2),uVar10);
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


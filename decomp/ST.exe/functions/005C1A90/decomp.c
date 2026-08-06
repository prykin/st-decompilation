#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005C1A90; family_names=MReportTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:10,18:5,1c:3} */

int __thiscall MReportTy::GetMessage(MReportTy *this,STMessage *message)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  word wVar4;
  STMessageId SVar5;
  dword dVar6;
  DArrayTy *pDVar7;
  RecoveredSourceFamily_dibcopy *pRVar8;
  bool bVar10;
  MReportTy *this_00;
  DWORD DVar11;
  int local_EAX_49;
  int iVar13;
  char *pcVar14_mg4;
  uint *puVar14;
  void *pvVar15;
  char *pcVar14_mg2;
  char *pcVar14_mg0;
  char *pcVar14_mg3;
  int iVar12;
  int iVar16;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  char *pcVar22;
  UINT UVar23;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  undefined4 local_14;
  MReportTy *local_10;
  int local_c;
  int *local_8;

  local_10 = this;
  DVar11 = STAppC::sub_006E51B0(this->field_0010);
  piVar21 = nullptr;
  this->field_0061 = DVar11;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_EAX_49 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar16 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x42b,0,local_EAX_49,
                                "%s","MReportTy::GetMessage");
    if (iVar16 == 0) {
      RaiseInternalException(local_EAX_49,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x42b);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar5 = message->id;
  if (MESS_MREPORTTY_6214 < SVar5) {
    if (SVar5 < MESS_SHARED_6980) {
      if (SVar5 == MESS_SHARED_697F) {
        if ((message->arg0).words.low < 3) {
          ccFntTy::SetSurf(local_10->field_0087,(message->arg1).i32,0,0,0,0,0);
          wVar4 = (message->arg0).words.low;
          if (wVar4 == 1) {
            UVar23 = 0x23f0;
          }
          else if (wVar4 == 2) {
            UVar23 = 0x23f2;
          }
          else {
            UVar23 = 0x23f1;
          }
          pcVar14_mg0 = LoadResourceString(UVar23,g_hINSTANCE_00807618);
          uVar16 = 0xffffffff;
          do {
            pcVar20 = pcVar14_mg0;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar20 = pcVar14_mg0 + 1;
            cVar1 = *pcVar14_mg0;
            pcVar14_mg0 = pcVar20;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16;
          pcVar20 = pcVar20 + -uVar16;
          pcVar22 = (char *)&DAT_0080f33a;
          memmove(pcVar22, pcVar20, uVar16); /* compiler REP MOVS byte copy */
          uVar17 = 0;
          for (puVar14 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar14 != nullptr;
              puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n')) {
            *(undefined1 *)puVar14 = 0x20;
          }
          ccFntTy::WrStr(this_00->field_0087,(char *)&DAT_0080f33a,-1,-1,
                         (uint)((message->arg0).words.high == 1));
          if ((message->arg0).words.high == 1) {
            pRVar8 = (message->arg1).ptr;
            FUN_006b5ee0(pRVar8,0,0,0,pRVar8->field_0004,pRVar8->field_0008,0x18,0xd);
          }
        }
      }
      else if (SVar5 < MESS_FSGSTY_6901) {
        if (SVar5 == MESS_SHARED_6900) {
          if ((message->arg0).u32 != 0xffffffff) {
            local_10->field_006B = (message->arg0).u32;
            SetCtrl(local_10);
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_009B,(undefined4 *)&this_00->field_0x1d);
          }
        }
        else if (SVar5 == MESS_MREPORTTY_6215) {
          pDVar7 = (&local_10->field_0347)[(byte)local_10->field_006A];
          if (pDVar7 != nullptr) {
            uVar16 = local_10->field_006B;
            if (uVar16 < pDVar7->count) {
              pvVar15 = DArrayAt<void>(pDVar7, uVar16);
            }
            else {
              pvVar15 = nullptr;
            }
            if (pvVar15 != nullptr) {
              if (uVar16 < pDVar7->count) {
                piVar21 = DArrayAt<int>(pDVar7, uVar16);
              }
              else {
                piVar21 = nullptr;
              }
              iVar13 = *piVar21 + 1;
              pcVar14_mg2 = LoadResourceString(0x2445,g_hINSTANCE_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,"%s %d",pcVar14_mg2,iVar13);
              PaintBut(this_00,message,0,2,'\x01',&DAT_0080f33a);
            }
          }
        }
        else if ((SVar5 == MESS_MMSGTY_68FF) && (uVar16 = (message->arg0).u32, uVar16 < 3)) {
          local_10->field_006A = (char)uVar16;
          uVar16 = (&local_10->field_0347)[uVar16 & 0xff]->count;
          if (uVar16 <= local_10->field_006B) {
            local_10->field_006B = uVar16 - 1;
          }
          SetCtrl(local_10);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_0097,(undefined4 *)&this_00->field_0x1d);
        }
      }
      else if (SVar5 == MESS_PRIVIDERTY_693F) {
        sub_005C00D0(local_10);
      }
      else if (SVar5 == MESS_SHARED_6940) {
        sub_005C0190(local_10);
      }
      goto cf_common_exit_005C22B1;
    }
    if (MESS_MREPORTTY_B208 < SVar5) {
      if (SVar5 == MESS_PLAYPANELTY_B209) {
        PaintTab(local_10,(AnonShape_005C1610_B64592CA *)message);
      }
      goto cf_common_exit_005C22B1;
    }
    if (SVar5 == MESS_MREPORTTY_B208) {
      cVar1 = *(char *)(message->arg0).ptr;
      local_10->field_0068 = 0;
      local_10->field_0069 = cVar1 + -1;
      PaintMReport(local_10,'\0');
      goto cf_common_exit_005C22B1;
    }
    if (SVar5 == MESS_SHARED_6980) {
      pDVar7 = (&local_10->field_0347)[(byte)local_10->field_006A];
      if ((pDVar7 != nullptr) &&
         (uVar16 = (uint)(message->arg0).words.low, uVar16 < pDVar7->count)) {
        piVar21 = DArrayAt<int>(pDVar7, uVar16);
      }
      if (piVar21 != nullptr) {
        ccFntTy::SetSurf(local_10->field_0087,(message->arg1).i32,0,0,0,0,0);
        iVar13 = *piVar21 + 1;
        pcVar14_mg3 = LoadResourceString(0x2445,g_hINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s %d",pcVar14_mg3,iVar13);
        ccFntTy::WrStr(this_00->field_0087,(char *)&DAT_0080f33a,-1,-1,
                       (uint)((message->arg0).words.high == 1));
        if ((message->arg0).words.high == 1) {
          pRVar8 = (message->arg1).ptr;
          FUN_006b5ee0(pRVar8,0,0,0,pRVar8->field_0004,pRVar8->field_0008,0x18,0xd);
        }
      }
      goto cf_common_exit_005C22B1;
    }
    if (SVar5 != MESS_MREPORTTY_70FF) goto cf_common_exit_005C22B1;
    thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                       local_10->field_005D,0,0);
switchD_005c1b14_caseD_5:
    PaintMReport(this_00,'\0');
    goto cf_common_exit_005C22B1;
  }
  if (SVar5 == MESS_MREPORTTY_6214) {
    if (local_10->field_006A == '\x01') {
      UVar23 = 0x23f0;
    }
    else if (local_10->field_006A == '\x02') {
      UVar23 = 0x23f2;
    }
    else {
      UVar23 = 0x23f1;
    }
    pcVar14_mg4 = LoadResourceString(UVar23,g_hINSTANCE_00807618);
    uVar16 = 0xffffffff;
    do {
      pcVar20 = pcVar14_mg4;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar20 = pcVar14_mg4 + 1;
      cVar1 = *pcVar14_mg4;
      pcVar14_mg4 = pcVar20;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    pcVar20 = pcVar20 + -uVar16;
    pcVar22 = (char *)&DAT_0080f33a;
    memmove(pcVar22, pcVar20, uVar16); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    for (puVar14 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar14 != nullptr;
        puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n')) {
      *(undefined1 *)puVar14 = 0x20;
    }
    PaintBut(this_00,message,0,2,'\x01',&DAT_0080f33a);
    goto cf_common_exit_005C22B1;
  }
  if (SVar5 < MESS_PLAYPANELTY_6201) {
    if (SVar5 != MESS_SHARED_6200) {
      switch(SVar5) {
      case MESS_ID_NONE:
        NoneMReport(local_10);
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case MESS_ID_CREATE:
        InitMReport(local_10,*(undefined1 *)((message->arg0).u32 + 0x14));
        break;
      case MESS_SHARED_0003:
        DoneMReport(local_10);
        break;
      case MESS_SHARED_0005:
        goto switchD_005c1b14_caseD_5;
      case MESS_SHARED_0060:
        uVar2 = (message->arg1).words.low;
        uVar3 = (message->arg1).words.high;
        local_8 = nullptr;
        local_18 = STReplaceLowWord((uint32_t)(local_18), (uint16_t)(uVar2));
        local_14 = STReplaceLowWord((uint32_t)(local_14), (uint16_t)(uVar3));
        if ((local_10->field_0067 != '\0') && (local_10->field_0069 != '\0')) {
          piVar19 = &local_10->field_0357;
          local_c = 9;
          do {
            if (piVar19[5] != 0) {
              if (((((int)(uint)uVar2 < piVar19[-1]) ||
                   (piVar19[1] + piVar19[-1] <= (int)(uint)uVar2)) || ((int)(uint)uVar3 < *piVar19))
                 || (piVar19[2] + *piVar19 <= (int)(uint)uVar3)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              piVar21 = local_8;
              if (bVar10) {
                local_8 = (int *)piVar19[5];
                piVar21 = local_8;
              }
            }
            piVar19 = piVar19 + 7;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        piVar19 = (int *)local_10->field_044F;
        if (piVar19 != piVar21) {
          if (piVar19 != nullptr) {
            local_10->field_002D = 0x4202;
            *(undefined2 *)&local_10->field_0x31 = 0;
            *(undefined2 *)&local_10->field_0x33 = 3;
            local_10->field_0035 = piVar19;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_10->field_0x1d);
          }
          this_00->field_044F = piVar21;
          if (piVar21 != nullptr) {
            this_00->field_002D = 0x4201;
            *(undefined2 *)&this_00->field_0x31 = 0;
            *(undefined2 *)&this_00->field_0x33 = 3;
            this_00->field_0035 = piVar21;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x1d);
          }
        }
      }
      goto cf_common_exit_005C22B1;
    }
    local_10->field_0049 = 1;
    if (local_10->field_0066 == '\0') {
      local_10->field_004D = 0x6108;
      sub_005C05F0(local_10);
      goto cf_common_exit_005C22B1;
    }
    wsprintfA(&DAT_0080ed16,"%s%s",&DAT_00807680,&DAT_0080c52e);
    uVar16 = 0xffffffff;
    pcVar20 = (char *)&DAT_0080c52e;
    do {
      pcVar22 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar22 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar22;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    pcVar20 = pcVar22 + -uVar16;
    pcVar22 = &DAT_0080ef1e;
    memmove(pcVar22, pcVar20, uVar16); /* compiler REP MOVS byte copy */
    uVar17 = 0;
    uVar16 = 0xffffffff;
    pcVar20 = &DAT_0080ed16;
    do {
      pcVar22 = pcVar20;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar22 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar22;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    pcVar20 = pcVar22 + -uVar16;
    pcVar22 = (char *)&DAT_0080ee1a;
    memmove(pcVar22, pcVar20, uVar16); /* compiler REP MOVS byte copy */
    DAT_008087a0 = 8;
    iVar13 = STAppC::sub_0056E9E0((STAppC *)&DAT_00807620,1);
    if (iVar13 != 0) {
      this_00->field_004D = 0x6104;
      this_00->field_0051 = 0;
      this_00->field_0055 = 2;
      sub_005C05F0(this_00);
      goto cf_common_exit_005C22B1;
    }
LAB_005c1d24:
    this_00->field_004D = 0x6102;
    sub_005C05F0(this_00);
  }
  else {
    switch(SVar5) {
    case MESS_PLAYPANELTY_6201:
      local_10->field_0045 = 0x200;
      local_10->field_0049 = 0;
      goto LAB_005c1d24;
    case MESS_PLAYPANELTY_6202:
      local_10->field_0307 = (uint)(byte)local_10->field_006A;
      local_10->field_02D7 = 0x68ff;
      local_10->field_02F7 = 0x697f;
      local_10->field_030F = 3;
      local_10->field_032B = 0x50;
      local_10->field_0333 = 200;
      local_10->field_032F = 0x1b3;
      (*local_10->field_000C->vtable->CreateObject)
                ((SystemClassTy *)local_10->field_000C,0x100ef,nullptr,nullptr,
                 &local_10->field_0x2c7,0);
      break;
    case MESS_SETTMAPTY_6203:
      if ((&local_10->field_0347)[(byte)local_10->field_006A] != nullptr) {
        local_10->field_02D7 = 0x6900;
        local_10->field_02F7 = 0x6980;
        dVar6 = (&local_10->field_0347)[(byte)local_10->field_006A]->count;
        local_10->field_0307 = local_10->field_006B;
        local_10->field_030F = dVar6;
        iVar13 = local_10->field_030B * dVar6;
        iVar18 = iVar13 + 10;
        local_10->field_032B = 0x50;
        local_10->field_0333 = 200;
        iVar13 = 0x1ea - (iVar13 + -0x14) / 2;
        local_10->field_032F = iVar13;
        if (600 < iVar13 + iVar18) {
          local_10->field_032F = 600 - iVar18;
        }
        (*local_10->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)local_10->field_000C,0x100ef,nullptr,nullptr,
                   &local_10->field_0x2c7,0);
      }
      break;
    case MESS_MTASKTY_6212:
      if (local_10->field_0066 == '\0') {
        PaintBut(local_10,message,(-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c,4,'\0',nullptr
                );
      }
      else {
        PaintBut(local_10,message,0x2358,4,'\0',nullptr);
      }
      break;
    case MESS_MTASKTY_6213:
      PaintBut(local_10,message,0x24bc,4,'\0',nullptr);
    }
  }
cf_common_exit_005C22B1:
  g_currentExceptionFrame = local_5c.previous;
  iVar12 = FUN_006e5fd0(this_00,message);
  return iVar12;
}


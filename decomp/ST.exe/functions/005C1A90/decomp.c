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
  AnonShape_006B5B10_E0D06CF1 *pAVar8;
  code *pcVar9;
  bool bVar10;
  MReportTy *this_00;
  DWORD DVar11;
  int iVar12;
  char *pcVar13;
  uint *puVar14;
  void *pvVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  char *pcVar21;
  UINT UVar22;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  undefined4 local_14;
  MReportTy *local_10;
  int local_c;
  int *local_8;

  local_10 = this;
  DVar11 = FUN_006e51b0(this->field_0010);
  piVar20 = (int *)0x0;
  this->field_0061 = DVar11;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar12 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar16 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x42b,0,iVar12,
                                "%s","MReportTy::GetMessage");
    if (iVar16 == 0) {
      RaiseInternalException(iVar12,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x42b);
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
            UVar22 = 0x23f0;
          }
          else if (wVar4 == 2) {
            UVar22 = 0x23f2;
          }
          else {
            UVar22 = 0x23f1;
          }
          pcVar13 = LoadResourceString(UVar22,HINSTANCE_00807618);
          uVar17 = 0xffffffff;
          do {
            pcVar21 = pcVar13;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar21 = pcVar13 + 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar21;
          } while (cVar1 != '\0');
          uVar17 = ~uVar17;
          pcVar13 = pcVar21 + -uVar17;
          pcVar21 = (char *)&DAT_0080f33a;
          for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar21 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar21 = pcVar21 + 1;
          }
          for (puVar14 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar14 != (uint *)0x0;
              puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n')) {
            *(undefined1 *)puVar14 = 0x20;
          }
          ccFntTy::WrStr(this_00->field_0087,&DAT_0080f33a,-1,-1,
                         (uint)((message->arg0).words.high == 1));
          if ((message->arg0).words.high == 1) {
            pAVar8 = (message->arg1).ptr;
            FUN_006b5ee0(pAVar8,0,0,0,pAVar8->field_0004,pAVar8->field_0008,0x18,0xd);
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
          if (pDVar7 != (DArrayTy *)0x0) {
            uVar17 = local_10->field_006B;
            if (uVar17 < pDVar7->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar17) (runtime stride) */
              pvVar15 = (void *)(pDVar7->elementSize * uVar17 + (int)pDVar7->data);
            }
            else {
              pvVar15 = (void *)0x0;
            }
            if (pvVar15 != (void *)0x0) {
              if (uVar17 < pDVar7->count) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar17) (runtime stride) */
                piVar20 = (int *)(pDVar7->elementSize * uVar17 + (int)pDVar7->data);
              }
              else {
                piVar20 = (int *)0x0;
              }
              iVar12 = *piVar20 + 1;
              pcVar13 = LoadResourceString(0x2445,HINSTANCE_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,"%s %d",pcVar13,iVar12);
              PaintBut(this_00,(AnonShape_005C0B00_CBE14AB4 *)message,0,2,'\x01',&DAT_0080f33a);
            }
          }
        }
        else if ((SVar5 == MESS_MMSGTY_68FF) && (uVar17 = (message->arg0).u32, uVar17 < 3)) {
          local_10->field_006A = (char)uVar17;
          uVar17 = (&local_10->field_0347)[uVar17 & 0xff]->count;
          if (uVar17 <= local_10->field_006B) {
            local_10->field_006B = uVar17 - 1;
          }
          SetCtrl(local_10);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_0097,(undefined4 *)&this_00->field_0x1d);
        }
      }
      else if (SVar5 == MESS_PRIVIDERTY_693F) {
        thunk_FUN_005c00d0((AnonShape_005C00D0_8BBBA4CC *)local_10);
      }
      else if (SVar5 == MESS_SHARED_6940) {
        thunk_FUN_005c0190((AnonShape_005C0190_99FBAF43 *)local_10);
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
      if ((pDVar7 != (DArrayTy *)0x0) &&
         (uVar17 = (uint)(message->arg0).words.low, uVar17 < pDVar7->count)) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar17) (runtime stride) */
        piVar20 = (int *)(pDVar7->elementSize * uVar17 + (int)pDVar7->data);
      }
      if (piVar20 != (int *)0x0) {
        ccFntTy::SetSurf(local_10->field_0087,(message->arg1).i32,0,0,0,0,0);
        iVar12 = *piVar20 + 1;
        pcVar13 = LoadResourceString(0x2445,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,"%s %d",pcVar13,iVar12);
        ccFntTy::WrStr(this_00->field_0087,&DAT_0080f33a,-1,-1,
                       (uint)((message->arg0).words.high == 1));
        if ((message->arg0).words.high == 1) {
          pAVar8 = (message->arg1).ptr;
          FUN_006b5ee0(pAVar8,0,0,0,pAVar8->field_0004,pAVar8->field_0008,0x18,0xd);
        }
      }
      goto cf_common_exit_005C22B1;
    }
    if (SVar5 != MESS_MREPORTTY_70FF) goto cf_common_exit_005C22B1;
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,local_10->field_005D,0,0);
switchD_005c1b14_caseD_5:
    PaintMReport(this_00,'\0');
    goto cf_common_exit_005C22B1;
  }
  if (SVar5 == MESS_MREPORTTY_6214) {
    if (local_10->field_006A == '\x01') {
      UVar22 = 0x23f0;
    }
    else if (local_10->field_006A == '\x02') {
      UVar22 = 0x23f2;
    }
    else {
      UVar22 = 0x23f1;
    }
    pcVar13 = LoadResourceString(UVar22,HINSTANCE_00807618);
    uVar17 = 0xffffffff;
    do {
      pcVar21 = pcVar13;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar21 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar21;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    pcVar13 = pcVar21 + -uVar17;
    pcVar21 = (char *)&DAT_0080f33a;
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar21 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar21 = pcVar21 + 1;
    }
    for (puVar14 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar14 != (uint *)0x0;
        puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n')) {
      *(undefined1 *)puVar14 = 0x20;
    }
    PaintBut(this_00,(AnonShape_005C0B00_CBE14AB4 *)message,0,2,'\x01',&DAT_0080f33a);
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
        local_8 = (int *)0x0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_18 = CONCAT22(local_18._2_2_,uVar2);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = CONCAT22(local_14._2_2_,uVar3);
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
              piVar20 = local_8;
              if (bVar10) {
                local_8 = (int *)piVar19[5];
                piVar20 = local_8;
              }
            }
            piVar19 = piVar19 + 7;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        piVar19 = (int *)local_10->field_044F;
        if (piVar19 != piVar20) {
          if (piVar19 != (int *)0x0) {
            local_10->field_002D = 0x4202;
            *(undefined2 *)&local_10->field_0x31 = 0;
            *(undefined2 *)&local_10->field_0x33 = 3;
            local_10->field_0035 = piVar19;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)PTR_00802a30->field_0000)(&local_10->field_0x1d);
          }
          this_00->field_044F = piVar20;
          if (piVar20 != (int *)0x0) {
            this_00->field_002D = 0x4201;
            *(undefined2 *)&this_00->field_0x31 = 0;
            *(undefined2 *)&this_00->field_0x33 = 3;
            this_00->field_0035 = piVar20;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)PTR_00802a30->field_0000)(&this_00->field_0x1d);
          }
        }
      }
      goto cf_common_exit_005C22B1;
    }
    local_10->field_0049 = 1;
    if (local_10->field_0066 == '\0') {
      local_10->field_004D = 0x6108;
      thunk_FUN_005c05f0((AnonShape_005C05F0_AB1ACC3B *)local_10);
      goto cf_common_exit_005C22B1;
    }
    wsprintfA(&DAT_0080ed16,"%s%s",&DAT_00807680,&DAT_0080c52e);
    uVar17 = 0xffffffff;
    pcVar13 = (char *)&DAT_0080c52e;
    do {
      pcVar21 = pcVar13;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar21 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar21;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    pcVar13 = pcVar21 + -uVar17;
    pcVar21 = &DAT_0080ef1e;
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar21 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar21 = pcVar21 + 1;
    }
    uVar17 = 0xffffffff;
    pcVar13 = &DAT_0080ed16;
    do {
      pcVar21 = pcVar13;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar21 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar21;
    } while (cVar1 != '\0');
    uVar17 = ~uVar17;
    pcVar13 = pcVar21 + -uVar17;
    pcVar21 = (char *)&DAT_0080ee1a;
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar21 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar21 = pcVar21 + 1;
    }
    DAT_008087a0 = 8;
    iVar12 = thunk_FUN_0056e9e0(&DAT_00807620,1);
    if (iVar12 != 0) {
      this_00->field_004D = 0x6104;
      this_00->field_0051 = 0;
      this_00->field_0055 = 2;
      thunk_FUN_005c05f0((AnonShape_005C05F0_AB1ACC3B *)this_00);
      goto cf_common_exit_005C22B1;
    }
LAB_005c1d24:
    this_00->field_004D = 0x6102;
    thunk_FUN_005c05f0((AnonShape_005C05F0_AB1ACC3B *)this_00);
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
                ((SystemClassTy *)local_10->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &local_10->field_0x2c7,0);
      break;
    case MESS_SETTMAPTY_6203:
      if ((&local_10->field_0347)[(byte)local_10->field_006A] != (DArrayTy *)0x0) {
        local_10->field_02D7 = 0x6900;
        local_10->field_02F7 = 0x6980;
        dVar6 = (&local_10->field_0347)[(byte)local_10->field_006A]->count;
        local_10->field_0307 = local_10->field_006B;
        local_10->field_030F = dVar6;
        iVar12 = local_10->field_030B * dVar6;
        iVar16 = iVar12 + 10;
        local_10->field_032B = 0x50;
        local_10->field_0333 = 200;
        iVar12 = 0x1ea - (iVar12 + -0x14) / 2;
        local_10->field_032F = iVar12;
        if (600 < iVar12 + iVar16) {
          local_10->field_032F = 600 - iVar16;
        }
        (*local_10->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)local_10->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &local_10->field_0x2c7,0);
      }
      break;
    case MESS_MTASKTY_6212:
      if (local_10->field_0066 == '\0') {
        PaintBut(local_10,(AnonShape_005C0B00_CBE14AB4 *)message,
                 (-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c,4,'\0',(uint *)0x0);
      }
      else {
        PaintBut(local_10,(AnonShape_005C0B00_CBE14AB4 *)message,0x2358,4,'\0',(uint *)0x0);
      }
      break;
    case MESS_MTASKTY_6213:
      PaintBut(local_10,(AnonShape_005C0B00_CBE14AB4 *)message,0x24bc,4,'\0',(uint *)0x0);
    }
  }
cf_common_exit_005C22B1:
  g_currentExceptionFrame = local_5c.previous;
  iVar12 = FUN_006e5fd0(this_00,message);
  return iVar12;
}


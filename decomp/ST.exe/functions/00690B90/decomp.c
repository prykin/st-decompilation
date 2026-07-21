#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GetMessage */

int __thiscall AiTactClassTy::GetMessage(AiTactClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  undefined4 *puVar2;
  code *pcVar3;
  AiTactClassTy *this_00;
  int iVar4;
  DArrayTy *pDVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  bool bVar9;
  InternalExceptionFrame local_58;
  AiTactClassTy *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  int local_8;

  uVar7 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar4 == 0) {
    local_14->field_012C = PTR_00802a38->field_00E4;
    SVar1 = message->id;
    if (SVar1 < MESS_TORPHIT) {
      if (SVar1 == MESS_SHARED_010F) {
        local_c = (AnonShape_0060EA30_DCEB68AD *)0x0;
        local_10 = (byte *)PrepareToSave(local_14,(uint *)&local_c);
        STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_10,local_c);
        if (local_10 != (byte *)0x0) {
          FreeAndNull(&local_10);
        }
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_14->field_0099 == 0) {
          local_14->field_0099 = 1;
          thunk_FUN_00690a40((AnonShape_00690A40_CA73153C *)local_14);
        }
        else {
          thunk_FUN_00690ab0((AnonShape_00690AB0_91AAAD49 *)local_14);
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          ExecClaim(this_00,unaff_EDI);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        puVar2 = (message->arg0).ptr;
        if (puVar2 == (undefined4 *)0x0) {
          RaiseInternalException
                    (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_tact.cpp",0x45e);
        }
        InitData(this_00,puVar2);
        if (puVar2[3] == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_007E;
        }
        if (puVar2[3] == 0) {
          InitDistrObj(this_00);
        }
      }
      else if (SVar1 == MESS_SHARED_0003) {
        thunk_FUN_0068e010((int)local_14);
      }
    }
    else if (SVar1 == MESS_ID_ALLCREATE) {
      pDVar5 = local_14->field_00A5;
      if (0 < (int)pDVar5->count) {
        bVar9 = pDVar5->count != 0;
        do {
          if (bVar9) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar7) (runtime stride) */
            piVar8 = (int *)(pDVar5->elementSize * uVar7 + (int)pDVar5->data);
          }
          else {
            piVar8 = (int *)0x0;
          }
          local_8 = 0;
          if (((*piVar8 == 0) || (iVar4 = FUN_006e62d0(PTR_00802a38,*piVar8,&local_8), iVar4 != 0))
             || (local_8 == 0)) {
            piVar8[1] = 0;
            *piVar8 = 0;
          }
          else {
            piVar8[1] = local_8;
            *(AiTactClassTy **)(local_8 + 0x284) = this_00;
          }
          pDVar5 = this_00->field_00A5;
          uVar7 = uVar7 + 1;
          bVar9 = uVar7 < pDVar5->count;
        } while ((int)uVar7 < (int)pDVar5->count);
      }
    }
    else if (SVar1 == MESS_SHARED_5DD5) {
      HelpOrganize(local_14,(AnonShape_00690650_F810CDF4 *)message);
    }
    FUN_006e5fd0(this_00,message);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x4ad,0,iVar4,
                             "AiTactClassTy::GetMessage error mess->id == %lX Name=%d",message->id,
                             local_14->field_0018);
  if (iVar6 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_tact.cpp",0x4ae);
    return 0xffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}


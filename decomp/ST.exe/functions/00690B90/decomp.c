#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402DF1|00690B90; family_names=AiTactClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:2,1c:3} */

int __thiscall AiTactClassTy::GetMessage(AiTactClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  AiTactClassTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  bool bVar8;
  InternalExceptionFrame local_58;
  AiTactClassTy *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  int local_8;

  uVar6 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 == 0) {
    local_14->field_012C = g_playSystem_00802A38->field_00E4;
    SVar1 = message->id;
    if (SVar1 < MESS_TORPHIT) {
      if (SVar1 == MESS_SHARED_010F) {
        local_c = (AnonShape_0060EA30_DCEB68AD *)0x0;
        local_10 = (byte *)PrepareToSave(local_14,(uint *)&local_c);
        STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
        if (local_10 != (byte *)0x0) {
          FreeAndNull(&local_10);
        }
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_14->field_0099 == 0) {
          local_14->field_0099 = 1;
          sub_00690A40(local_14);
        }
        else {
          sub_00690AB0(local_14);
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          ExecClaim(this_00,unaff_EDI);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        puVar7 = (message->arg0).ptr;
        if (puVar7 == (undefined4 *)0x0) {
          RaiseInternalException
                    (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_tact.cpp",0x45e);
        }
        InitData(this_00,puVar7);
        if (puVar7[3] == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_007E;
        }
        if (puVar7[3] == 0) {
          InitDistrObj(this_00);
        }
      }
      else if (SVar1 == MESS_SHARED_0003) {
        sub_0068E010(local_14);
      }
    }
    else if (SVar1 == MESS_ID_ALLCREATE) {
      pDVar4 = local_14->field_00A5;
      if (0 < (int)pDVar4->count) {
        bVar8 = pDVar4->count != 0;
        do {
          if (bVar8) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar6) (runtime stride) */
            puVar7 = (undefined4 *)(pDVar4->elementSize * uVar6 + (int)pDVar4->data);
          }
          else {
            puVar7 = (undefined4 *)0x0;
          }
          local_8 = 0;
          if ((((AnonShape_005EFAE0_B406B78B *)*puVar7 == (AnonShape_005EFAE0_B406B78B *)0x0) ||
              (iVar3 = STPlaySystemC::sub_006E62D0
                                 (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar7,
                                  &local_8), iVar3 != 0)) || (local_8 == 0)) {
            puVar7[1] = 0;
            *puVar7 = 0;
          }
          else {
            puVar7[1] = local_8;
            *(AiTactClassTy **)(local_8 + 0x284) = this_00;
          }
          pDVar4 = this_00->field_00A5;
          uVar6 = uVar6 + 1;
          bVar8 = uVar6 < pDVar4->count;
        } while ((int)uVar6 < (int)pDVar4->count);
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
  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x4ad,0,iVar3,
                             "AiTactClassTy::GetMessage error mess->id == %lX Name=%d",message->id,
                             local_14->field_0018);
  if (iVar5 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_tact.cpp",0x4ae);
    return 0xffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}


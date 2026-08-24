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
  AiTactClassTy *this_00;
  int iVar3;
  AiTactClassTy_field_00A5DArray *pAVar3;
  int iVar5_mg1;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  AiTactClassTy_field_00A5Element *element_00a5;
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
        local_c = nullptr;
        /* ST_CALLSITE[00690C9C]: CALL 0x00404511; direct=00404511 AiTactClassTy::PrepareToSave */
        local_10 = PrepareToSave(local_14,(uint *)&local_c);
        /* ST_CALLSITE[00690CB3]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
        STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,(uint)local_c);
        if (local_10 != nullptr) {
          FreeAndNull(&local_10);
        }
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_14->field_0099 == 0) {
          local_14->field_0099 = 1;
          /* ST_CALLSITE[00690C76]: CALL 0x00402c7f; direct=00402C7F AiTactClassTy::sub_00690A40 */
          sub_00690A40(local_14);
        }
        else {
          /* ST_CALLSITE[00690C82]: CALL 0x00402b49; direct=00402B49 AiTactClassTy::sub_00690AB0 */
          sub_00690AB0(local_14);
          /* ST_CALLSITE[00690C89]: CALL 0x00404598; direct=00404598 AiTactClassTy::ExecClaim */
          ExecClaim(this_00);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        puVar7 = (message->arg0).ptr;
        if (puVar7 == nullptr) {
          RaiseInternalException
                    (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_tact.cpp",0x45e);
        }
        /* ST_CALLSITE[00690C2F]: CALL 0x004037c9; direct=004037C9 AiTactClassTy::InitData */
        InitData(this_00,puVar7);
        if (puVar7[3] == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_007E;
        }
        if (puVar7[3] == 0) {
          /* ST_CALLSITE[00690C58]: CALL 0x00404741; direct=00404741 AiTactClassTy::InitDistrObj */
          InitDistrObj(this_00);
        }
      }
      else if (SVar1 == MESS_SHARED_0003) {
        /* ST_CALLSITE[00690C03]: CALL 0x0040284c; direct=0040284C AiTactClassTy::sub_0068E010 */
        sub_0068E010(local_14);
      }
    }
    else if (SVar1 == MESS_ID_ALLCREATE) {
      pAVar3 = local_14->field_00A5;
      if (0 < (int)pAVar3->count) {
        bVar8 = pAVar3->count != 0;
        do {
          if (bVar8) {
            element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar3, uVar6);
          }
          else {
            element_00a5 = nullptr;
          }
          local_8 = 0;
          if ((((AnonShape_005EFAE0_B406B78B *)element_00a5->field_0000 == nullptr) ||
              (iVar5_mg1 = STPlaySystemC::sub_006E62D0
                                     (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)element_00a5->field_0000,
                                      &local_8), iVar5_mg1 != 0)) || (local_8 == 0)) {
            element_00a5->field_0004 = 0;
            element_00a5->field_0000 = 0;
          }
          else {
            element_00a5->field_0004 = local_8;
            *(AiTactClassTy **)(local_8 + 0x284) = this_00;
          }
          pAVar3 = this_00->field_00A5;
          uVar6 = uVar6 + 1;
          bVar8 = uVar6 < pAVar3->count;
        } while ((int)uVar6 < (int)pAVar3->count);
      }
    }
    else if (SVar1 == MESS_SHARED_5DD5) {
      /* ST_CALLSITE[00690CE0]: CALL 0x004046e2; direct=004046E2 AiTactClassTy::HelpOrganize */
      HelpOrganize(local_14,(AnonShape_00690650_F810CDF4 *)message);
    }
    FUN_006e5fd0(this_00,message);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x4ad,0,iVar3,
                             "AiTactClassTy::GetMessage error mess->id == %lX Name=%d",message->id,
                             local_14->field_0018);
  if (iVar4 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_tact.cpp",0x4ae);
    return 0xffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}


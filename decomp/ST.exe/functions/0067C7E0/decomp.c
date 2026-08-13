#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401F8C|0067C7E0; family_names=AiPlrClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:3,18:4,1c:6} */

int __thiscall AiPlrClassTy::GetMessage(AiPlrClassTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  undefined4 *puVar3;
  AiPlrClassTy *this_00;
  int iVar5;
  byte *pbVar5;
  LPSTR pCVar6;
  STGameObjC *objPtr;
  AiFltClassTy *this_01;
  DArrayTy *pDVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  AnonShape_0068FD00_A5257008 **ppAVar15;
  bool bVar16;
  byte bVar17;
  InternalExceptionFrame local_b0;
  AnonShape_0068FD00_A5257008 *local_6c;
  uint local_68;
  undefined4 local_64;
  DArrayTy *local_60;
  int local_38 [5];
  undefined4 local_24;
  AiPlrClassTyVTable_at_1C **local_20;
  byte *local_18;
  uint local_14;
  AiPlrClassTy *local_10;
  int local_c;
  DArrayTy *local_8;

  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x655,0,iVar5,
                               "AiPlrClassTy::GetMessage error mess->id == %lX Name=%d ",message->id,
                               local_10->field_0018);
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\ai\\ai_plr.cpp",0x656);
    return 0xffff;
  }
  local_10->field_06FE = g_playSystem_00802A38->field_00E4;
  SVar2 = message->id;
  if (SVar2 < 0x5d98) {
    if (SVar2 == MESS_AIPLRCLASSTY_5D97) {
      CloseAllTact(local_10);
    }
    else if (SVar2 < MESS_TORPHIT) {
      if (SVar2 == MESS_SHARED_010F) {
        local_14 = 0;
        pbVar5 = PrepareToSave(local_10,&local_14);
        bVar17 = 0xc;
        uVar10 = local_14;
        local_18 = pbVar5;
        pCVar6 = FUN_006f2c00(PTR_s_AIPLAYER_0079d6d0,2,this_00->field_05D7);
        STPlaySystemC::SaveObjData(g_playSystem_00802A38,pCVar6,pbVar5,uVar10,bVar17);
        pCVar6 = FUN_006f2c00(PTR_s_AIPLAYER_0079d6d0,2,this_00->field_05D7);
        uVar10 = 0xffffffff;
        do {
          pcVar12 = pCVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar12 = pCVar6 + 1;
          cVar1 = *pCVar6;
          pCVar6 = pcVar12;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar12 = pcVar12 + -uVar10;
        pcVar13 = &g_bulkInitializedRecords_008087C7[this_00->field_05D7].field_0x1;
        memmove(pcVar13, pcVar12, uVar10); /* compiler REP MOVS byte copy */
        if (local_18 != nullptr) {
          FreeAndNull(&local_18);
        }
      }
      else if (SVar2 == MESS_ID_NONE) {
        if ((&DAT_00809950)[local_10->field_05D7] == '\0') {
          if (DAT_008117bc != nullptr) {
            memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
            iVar9 = 0;
            local_38[4] = 0x5deb;
            local_24 = STReplaceLowWord((uint32_t)(local_24), (uint16_t)(*(undefined2 *)&this_00->field_05D7));
            if (this_00 == nullptr) {
              local_20 = nullptr;
            }
            else {
              local_20 = &this_00->vtable_at_1c;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)*DAT_008117bc)(local_38);
          }
          AiEventClassTy::GetMessage((AiEventClassTy *)&this_00->vtable_at_1c,message);
          if (this_00->field_0658 == 0) {
            this_00->field_0658 = 1;
            thunk_FUN_0067a2d0((AnonShape_0067A2D0_742706D4 *)this_00);
          }
          else {
            thunk_FUN_0067a390((AnonShape_00679600_B8E418A8 *)this_00);
            ExecTech(this_00);
            Offensive(this_00);
          }
        }
        else {
          CloseAllTact(local_10);
          memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
          iVar9 = 0;
          local_38[2] = this_00->field_000C->systemId;
          local_38[3] = 0;
          local_24 = this_00->field_0008;
          local_38[4] = 10;
          SystemClassTy::PostMessage(this_00->field_000C,local_38);
        }
      }
      else if (SVar2 == MESS_ID_CREATE) {
        puVar3 = (message->arg0).ptr;
        if (puVar3 == nullptr) {
          RaiseInternalException
                    (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_plr.cpp",0x586);
        }
        InitData(this_00,puVar3);
        if (g_allPlayers_007FA174 != nullptr) {
          thunk_FUN_004357b0(*(char *)&this_00->field_05D7,this_00);
        }
        if (puVar3[3] == 0) {
          sub_00678FC0(this_00);
        }
        thunk_FUN_0064a450();
      }
      else if (SVar2 == MESS_SHARED_0003) {
        if (DAT_008117bc != nullptr) {
          memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
          local_38[4] = 0x5dec;
          local_24 = STReplaceLowWord((uint32_t)(local_24), (uint16_t)(*(undefined2 *)&this_00->field_05D7));
          if (this_00 == nullptr) {
            local_20 = nullptr;
          }
          else {
            local_20 = &this_00->vtable_at_1c;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)*DAT_008117bc)(local_38);
        }
        thunk_FUN_0064a580();
        if (g_allPlayers_007FA174 != nullptr) {
          thunk_FUN_004357b0(*(char *)&this_00->field_05D7,nullptr);
        }
        thunk_FUN_00678ba0(this_00);
      }
    }
    else if (SVar2 == MESS_ID_ALLCREATE) {
      pDVar7 = local_10->field_0695;
      uVar10 = 0;
      if (0 < (int)pDVar7->count) {
        bVar16 = pDVar7->count != 0;
        do {
          if (bVar16) {
            piVar14 = DArrayAt<int>(pDVar7, uVar10);
          }
          else {
            piVar14 = nullptr;
          }
          if ((AnonShape_005EFAE0_B406B78B *)piVar14[1] != nullptr) {
            local_c = 0;
            iVar9 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)piVar14[1],
                               &local_c);
            if ((iVar9 == 0) && (local_c != 0)) {
              *piVar14 = local_c;
            }
            else {
              *piVar14 = 0;
              piVar14[1] = 0;
            }
          }
          pDVar7 = this_00->field_0695;
          uVar10 = uVar10 + 1;
          bVar16 = uVar10 < pDVar7->count;
        } while ((int)uVar10 < (int)pDVar7->count);
      }
    }
    else if (SVar2 == MESS_AIPLRCLASSTY_5D94) {
      if (g_allPlayers_007FA174 == nullptr) {
        objPtr = nullptr;
      }
      else {
        objPtr = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)&local_10->field_05D7,
                            (message->arg0).words.high,CASE_1);
      }
      if (objPtr != nullptr) {
        iVar9 = (*objPtr->vtable->vfunc_2C)();
        if ((iVar9 < 1) || (0x28 < iVar9)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if ((bVar16) &&
           (this_01 = (AiFltClassTy *)thunk_FUN_00679e70(this_00,objPtr->field_081C),
           this_01 != nullptr)) {
          AiFltClassTy::_AddObjFlt(this_01,(uint)objPtr,0);
        }
      }
    }
  }
  else {
    switch(SVar2) {
    case 0x5d98:
      if ((message->arg0).words.low == 0) {
        thunk_FUN_00675dc0(local_10->field_05D7,(message->arg1).ptr);
      }
      else {
        local_8 = nullptr;
        Library::DKW::TBL::FUN_006afe40((int *)&local_8,(message->arg1).ptr);
        pDVar7 = local_8;
        if (local_8 != nullptr) {
          ppAVar15 = &local_6c;
          for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
            *ppAVar15 = nullptr;
            ppAVar15 = ppAVar15 + 1;
          }
          local_68 = this_00->field_06FE;
          local_6c = (AnonShape_0068FD00_A5257008 *)0x72;
          local_64 = 0;
          local_60 = pDVar7;
          sub_0067A020(this_00,(AnonShape_0068FD00_A5257008 *)&local_6c,-1);
          local_64 = 1;
          sub_0067A020(this_00,(AnonShape_0068FD00_A5257008 *)&local_6c,-1);
          DArrayDestroy(local_8);
        }
      }
      break;
    case MESS_AIBOSSCLASSTY_5DC5:
    case MESS_AIBOSSCLASSTY_5DC6:
    case MESS_AIBOSSCLASSTY_5DD0:
    case 0x5dd1:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_ID_CREATE:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0003:
    case 0x5dd4:
    case 0x5dd6:
    case 0x5dd7:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_CURSORCLASSTY_0009:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SYSTEMCLASSTY_000A:
    case 0x5ddb:
    case 0x5ddc:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005:
    case 0x5dde:
    case 0x5ddf:
    case 0x5de0:
    case 0x5de1:
    case 0x5de2:
    case 0x5de3:
    case 0x5de4:
    case 0x5de5:
    case 0x5de6:
    case 0x5de7:
    case 0x5de8:
    case 0x5de9:
    case 0x5dea:
    case 0x5deb:
    case MESS_SHARED_5DEC:
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->vtable_at_1c,message);
      break;
    case MESS_SHARED_5DD5:
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->vtable_at_1c,message);
      if (this_00->field_0645 + 10 <= this_00->field_06FE) {
        this_00->field_0645 = this_00->field_06FE;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        thunk_FUN_006799b0(this_00,CONCAT22(extraout_var,(message->arg1).words.low));
        thunk_FUN_0067a1b0(this_00,(int)message);
      }
    }
  }
  FUN_006e5fd0(this_00,message);
  g_currentExceptionFrame = local_b0.previous;
  return 0;
}


#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::GetMessage */

int __thiscall AiPlrClassTy::GetMessage(AiPlrClassTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  undefined4 *puVar3;
  code *pcVar4;
  AiPlrClassTy *this_00;
  int iVar5;
  byte *pbVar6;
  LPSTR pCVar7;
  STGameObjC *objPtr;
  AiFltClassTy *this_01;
  DArrayTy *pDVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  char *pcVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
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
    iVar9 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x655,0,iVar5,
                               "AiPlrClassTy::GetMessage error mess->id == %lX Name=%d ",message->id,
                               local_10->field_0018);
    if (iVar9 != 0) {
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
        pbVar6 = (byte *)PrepareToSave(local_10,&local_14);
        bVar17 = 0xc;
        uVar10 = local_14;
        local_18 = pbVar6;
        pCVar7 = FUN_006f2c00(PTR_s_AIPLAYER_0079d6d0,2,this_00->field_05D7);
        STPlaySystemC::SaveObjData(g_playSystem_00802A38,pCVar7,pbVar6,uVar10,bVar17);
        pCVar7 = FUN_006f2c00(PTR_s_AIPLAYER_0079d6d0,2,this_00->field_05D7);
        uVar10 = 0xffffffff;
        do {
          pcVar12 = pCVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar12 = pCVar7 + 1;
          cVar1 = *pCVar7;
          pCVar7 = pcVar12;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar12 = pcVar12 + -uVar10;
        pcVar13 = &DAT_008087c8 + this_00->field_05D7 * 0x51;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar13 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        }
        if (local_18 != (byte *)0x0) {
          FreeAndNull(&local_18);
        }
      }
      else if (SVar2 == MESS_ID_NONE) {
        if ((&DAT_00809950)[local_10->field_05D7] == '\0') {
          if (DAT_008117bc != (undefined4 *)0x0) {
            memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
            iVar5 = 0;
            local_38[4] = 0x5deb;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)&this_00->field_05D7);
            if (this_00 == (AiPlrClassTy *)0x0) {
              local_20 = (AiPlrClassTyVTable_at_1C **)0x0;
            }
            else {
              local_20 = &this_00->vtable_at_1c;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)*DAT_008117bc)(local_38);
          }
          AiEventClassTy::GetMessage((AiEventClassTy *)&this_00->vtable_at_1c,message);
          if (this_00->field_0658 == 0) {
            this_00->field_0658 = 1;
            thunk_FUN_0067a2d0((AnonShape_0067A2D0_742706D4 *)this_00);
          }
          else {
            thunk_FUN_0067a390((AnonShape_00679600_B8E418A8 *)this_00);
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            ExecTech(this_00,unaff_EDI);
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            Offensive(this_00,unaff_EDI);
          }
        }
        else {
          CloseAllTact(local_10);
          memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
          iVar5 = 0;
          local_38[2] = this_00->field_000C->systemId;
          local_38[3] = 0;
          local_24 = this_00->field_0008;
          local_38[4] = 10;
          SystemClassTy::PostMessage(this_00->field_000C,local_38);
        }
      }
      else if (SVar2 == MESS_ID_CREATE) {
        puVar3 = (message->arg0).ptr;
        if (puVar3 == (undefined4 *)0x0) {
          RaiseInternalException
                    (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_plr.cpp",0x586);
        }
        InitData(this_00,puVar3);
        if (g_allPlayers_007FA174 != (STAllPlayersC *)0x0) {
          thunk_FUN_004357b0(*(char *)&this_00->field_05D7,this_00);
        }
        if (puVar3[3] == 0) {
          sub_00678FC0(this_00);
        }
        thunk_FUN_0064a450();
      }
      else if (SVar2 == MESS_SHARED_0003) {
        if (DAT_008117bc != (undefined4 *)0x0) {
          memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
          local_38[4] = 0x5dec;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)&this_00->field_05D7);
          if (this_00 == (AiPlrClassTy *)0x0) {
            local_20 = (AiPlrClassTyVTable_at_1C **)0x0;
          }
          else {
            local_20 = &this_00->vtable_at_1c;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*DAT_008117bc)(local_38);
        }
        thunk_FUN_0064a580();
        if (g_allPlayers_007FA174 != (STAllPlayersC *)0x0) {
          thunk_FUN_004357b0(*(char *)&this_00->field_05D7,(AiPlrClassTy *)0x0);
        }
        thunk_FUN_00678ba0(this_00);
      }
    }
    else if (SVar2 == MESS_ID_ALLCREATE) {
      pDVar8 = local_10->field_0695;
      uVar10 = 0;
      if (0 < (int)pDVar8->count) {
        bVar16 = pDVar8->count != 0;
        do {
          if (bVar16) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar8, uVar10) (runtime stride) */
            piVar14 = (int *)(pDVar8->elementSize * uVar10 + (int)pDVar8->data);
          }
          else {
            piVar14 = (int *)0x0;
          }
          if (piVar14[1] != 0) {
            local_c = 0;
            iVar5 = FUN_006e62d0(g_playSystem_00802A38,piVar14[1],&local_c);
            if ((iVar5 == 0) && (local_c != 0)) {
              *piVar14 = local_c;
            }
            else {
              *piVar14 = 0;
              piVar14[1] = 0;
            }
          }
          pDVar8 = this_00->field_0695;
          uVar10 = uVar10 + 1;
          bVar16 = uVar10 < pDVar8->count;
        } while ((int)uVar10 < (int)pDVar8->count);
      }
    }
    else if (SVar2 == MESS_AIPLRCLASSTY_5D94) {
      if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
        objPtr = (STGameObjC *)0x0;
      }
      else {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        objPtr = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)&local_10->field_05D7,
                            CONCAT22(extraout_var,(message->arg0).words.high),CASE_1);
      }
      if (objPtr != (STGameObjC *)0x0) {
        iVar5 = (*objPtr->vtable->vfunc_2C)();
        if ((iVar5 < 1) || (0x28 < iVar5)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if ((bVar16) &&
           (this_01 = (AiFltClassTy *)thunk_FUN_00679e70(this_00,objPtr->field_081C),
           this_01 != (AiFltClassTy *)0x0)) {
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
        local_8 = (DArrayTy *)0x0;
        Library::DKW::TBL::FUN_006afe40((int *)&local_8,(message->arg1).ptr);
        pDVar8 = local_8;
        if (local_8 != (DArrayTy *)0x0) {
          ppAVar15 = &local_6c;
          for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
            *ppAVar15 = (AnonShape_0068FD00_A5257008 *)0x0;
            ppAVar15 = ppAVar15 + 1;
          }
          local_68 = this_00->field_06FE;
          local_6c = (AnonShape_0068FD00_A5257008 *)0x72;
          local_64 = 0;
          local_60 = pDVar8;
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006799B0::thunk_FUN_0067a020
                    ((AnonReceiver_006799B0 *)this_00,(AnonShape_0068FD00_A5257008 *)&local_6c,-1);
          local_64 = 1;
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006799B0::thunk_FUN_0067a020
                    ((AnonReceiver_006799B0 *)this_00,(AnonShape_0068FD00_A5257008 *)&local_6c,-1);
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
        thunk_FUN_006799b0(this_00,CONCAT22(extraout_var_00,(message->arg1).words.low));
        thunk_FUN_0067a1b0(this_00,(int)message);
      }
    }
  }
  FUN_006e5fd0(this_00,message);
  g_currentExceptionFrame = local_b0.previous;
  return 0;
}


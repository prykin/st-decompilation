#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::HelpOrganize */

void __thiscall
AiTactClassTy::HelpOrganize(AiTactClassTy *this,AnonShape_00690650_F810CDF4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  AiFltClassTy *this_00;
  AiTactClassTy *this_01;
  short sVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar6;
  STGameObjC *pSVar7;
  uint uVar8;
  AiTactClassTy_field_00A5DArray *pAVar9;
  int iVar10;
  AiTactClassTy_field_00A5Element *element_00a5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EDI;
  bool bVar14;
  InternalExceptionFrame local_98;
  uint local_54 [2];
  char local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined1 local_42;
  uint local_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  uint local_18;
  byte local_14;
  undefined3 uStack_13;
  uint local_10;
  AiTactClassTy *local_c;
  uint local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_10 = STReplaceLowWord((uint32_t)(in_EAX), (uint16_t)(param_1->field_0016));
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_20 = STReplaceLowWord((uint32_t)(unaff_EDI), (uint16_t)(param_1->field_001A));
  bVar1 = param_1->field_0018;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_14 = CONCAT31(uStack_13,bVar1);
  if (7 < bVar1) {
    return;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[(char)bVar1].field_0022)) {
    return;
  }
  if ((int)(char)bVar1 == this->field_0024) {
    return;
  }
  bVar2 = *(byte *)&this->field_0024;
  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
  if (DAT_00808a8f != '\0') {
    bVar14 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
             g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    goto LAB_00690763;
  }
  if (bVar1 == bVar2) {
LAB_00690758:
    iVar6 = 0;
  }
  else {
    bVar3 = g_playerRelationMatrix[bVar1][bVar2];
    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
      iVar6 = -2;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
      iVar6 = -1;
    }
    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
      iVar6 = 1;
    }
    else {
      if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_00690758;
      iVar6 = 2;
    }
  }
  bVar14 = iVar6 < 0;
LAB_00690763:
  if ((bVar14) && (param_1->field_001A != -1)) {
    local_98.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_98;
    local_c = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0);
    this_01 = local_c;
    if (iVar6 == 0) {
      if (g_allPlayers_007FA174 == nullptr) {
        pSVar7 = nullptr;
      }
      else {
        /* ST_CALLSITE[006907BF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar7 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)&local_c->field_0024,(ushort)local_10,
                            CASE_1);
      }
      if ((pSVar7 != nullptr) &&
         /* ST_CALLSITE[006907DA]: CALL 0x00405b23; direct=00405B23 AiTactClassTy::sub_0068E290 */
         (iVar6 = sub_0068E290(this_01,pSVar7->field_0030), iVar6 != 0)) {
        if (*(short *)(iVar6 + 0x7b) == 1) {
          sVar5 = (short)local_10;
        }
        else {
          sVar5 = -1;
        }
        uVar8 = thunk_FUN_00690550(this_01,*(short *)(iVar6 + 0x7d),sVar5);
        if ((int)uVar8 < 0) {
          pAVar9 = this_01->field_00A5;
          local_8 = 0;
          if (0 < (int)pAVar9->count) {
            bVar14 = pAVar9->count != 0;
            do {
              if (bVar14) {
                element_00a5 = DArrayAt<AiTactClassTy_field_00A5Element>(pAVar9, local_8);
              }
              else {
                element_00a5 = nullptr;
              }
              if (((undefined4 *)element_00a5 != nullptr) &&
                 (this_00 = element_00a5->field_0004, this_00 != nullptr)) {
                memset(local_54, 0, 0x34); /* compiler bulk-zero initialization */
                local_54[0] = 100;
                local_4b = 1;
                local_54[1] = local_c->field_012C;
                local_48 = *(undefined2 *)(iVar6 + 0x7d);
                local_4a = (undefined2)local_10;
                local_46 = *(undefined2 *)(iVar6 + 0x7b);
                local_44 = (undefined2)local_20;
                local_42 = local_14;
                /* ST_CALLSITE[00690897]: CALL 0x00401555; direct=00401555 AiFltClassTy::GetAiMess */
                AiFltClassTy::GetAiMess(this_00,local_54);
                if ('\0' < local_4c) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_1c = CONCAT22(*(undefined2 *)(iVar6 + 0x7d),
                                       *(undefined2 *)(element_00a5->field_0004 + 0x7d));
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_18 = CONCAT22(*(undefined2 *)(iVar6 + 0x7b),(short)local_10);
                  Library::DKW::TBL::DArrayAppend(local_c->field_00C9,&local_1c);
                  g_currentExceptionFrame = local_98.previous;
                  return;
                }
              }
              local_8 = local_8 + 1;
              pAVar9 = local_c->field_00A5;
              bVar14 = local_8 < pAVar9->count;
              if ((int)pAVar9->count <= (int)local_8) {
                g_currentExceptionFrame = local_98.previous;
                return;
              }
            } while( true );
          }
        }
      }
      g_currentExceptionFrame = local_98.previous;
      return;
    }
    g_currentExceptionFrame = local_98.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x433,0,iVar6,"%s",
                                "AiTactClassTy::HelpOrganize");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\ai\\ai_tact.cpp",0x434);
  }
  return;
}


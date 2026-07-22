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
  code *pcVar4;
  AiTactClassTy *this_01;
  short sVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar6;
  STGameObjC *pSVar7;
  uint uVar8;
  DArrayTy *pDVar9;
  int iVar10;
  void *pvVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EDI;
  bool bVar13;
  InternalExceptionFrame local_98;
  uint local_54 [2];
  char local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined4 local_18;
  byte local_14;
  undefined3 uStack_13;
  uint local_10;
  AiTactClassTy *local_c;
  uint local_8;

  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  local_10 = CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_0016);
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  local_20 = CONCAT22((short)((uint)unaff_EDI >> 0x10),param_1->field_001A);
  bVar1 = param_1->field_0018;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_14 = CONCAT31(uStack_13,bVar1);
  if (7 < bVar1) {
    return;
  }
  if ((g_playSystem_00802A38 != (STPlaySystemC *)0x0) &&
     (7 < (byte)(&DAT_008087e9)[(char)bVar1 * 0x51])) {
    return;
  }
  if ((int)(char)bVar1 == this->field_0024) {
    return;
  }
  bVar2 = *(byte *)&this->field_0024;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_8 = CONCAT31(local_8._1_3_,bVar2);
  if (DAT_00808a8f != '\0') {
    bVar13 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
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
  bVar13 = iVar6 < 0;
LAB_00690763:
  if ((bVar13) && (param_1->field_001A != -1)) {
    local_98.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_98;
    local_c = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0);
    this_01 = local_c;
    if (iVar6 == 0) {
      if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
        pSVar7 = (STGameObjC *)0x0;
      }
      else {
        pSVar7 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)&local_c->field_0024,local_10,CASE_1);
      }
      if ((pSVar7 != (STGameObjC *)0x0) &&
         (iVar6 = sub_0068E290(this_01,pSVar7->field_0030), iVar6 != 0)) {
        if (*(short *)(iVar6 + 0x7b) == 1) {
          sVar5 = (short)local_10;
        }
        else {
          sVar5 = -1;
        }
        uVar8 = thunk_FUN_00690550(this_01,*(short *)(iVar6 + 0x7d),sVar5);
        if ((int)uVar8 < 0) {
          pDVar9 = this_01->field_00A5;
          local_8 = 0;
          if (0 < (int)pDVar9->count) {
            bVar13 = pDVar9->count != 0;
            do {
              if (bVar13) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, local_8) (runtime stride) */
                pvVar11 = (void *)(pDVar9->elementSize * local_8 + (int)pDVar9->data);
              }
              else {
                pvVar11 = (void *)0x0;
              }
              if ((pvVar11 != (void *)0x0) &&
                 (this_00 = *(AiFltClassTy **)((int)pvVar11 + 4), this_00 != (AiFltClassTy *)0x0)) {
                memset(local_54, 0, 0x34); /* compiler bulk-zero initialization */
                local_54[0] = 100;
                local_4b = 1;
                local_54[1] = local_c->field_012C;
                local_48 = *(undefined2 *)(iVar6 + 0x7d);
                local_4a = (undefined2)local_10;
                local_46 = *(undefined2 *)(iVar6 + 0x7b);
                local_44 = (undefined2)local_20;
                local_42 = local_14;
                AiFltClassTy::GetAiMess(this_00,local_54);
                if ('\0' < local_4c) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_1c = CONCAT22(*(undefined2 *)(iVar6 + 0x7d),
                                       *(undefined2 *)(*(int *)((int)pvVar11 + 4) + 0x7d));
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_18 = CONCAT22(*(undefined2 *)(iVar6 + 0x7b),(short)local_10);
                  Library::DKW::TBL::FUN_006ae1c0
                            (&local_c->field_00C9->flags,(undefined4 *)&local_1c);
                  g_currentExceptionFrame = local_98.previous;
                  return;
                }
              }
              local_8 = local_8 + 1;
              pDVar9 = local_c->field_00A5;
              bVar13 = local_8 < pDVar9->count;
              if ((int)pDVar9->count <= (int)local_8) {
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


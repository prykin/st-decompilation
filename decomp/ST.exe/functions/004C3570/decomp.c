#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bfire.cpp
   TLOBaseTy::fireProc */

int __thiscall TLOBaseTy::fireProc(TLOBaseTy *this)

{
  AnonPointee_TLOBaseTy_0291 *pAVar1;
  TLOBaseTy *this_00;
  short sVar3;
  int local_EAX_35;
  uint uVar4;
  int iVar4;
  int local_EAX_1247;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  bool bVar9;
  InternalExceptionFrame local_5c;
  TLOBaseTy *local_18;
  short local_14;
  undefined2 uStack_12;
  short local_10;
  undefined2 uStack_e;
  uint local_c;
  int *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;

  local_EAX_35 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_5c.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bfire.cpp",0xb2,0,local_EAX_35,
                               "%s","TLOBaseTy::fireProc error");
    if (iVar5 == 0) {
      RaiseInternalException(local_EAX_35,0,"E:\\__titans\\Artem\\TLO_bfire.cpp",0xb3);
      return local_EAX_35;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (0 < local_18->field_025D) {
    puVar8 = &local_18->field_0285;
    local_8 = nullptr;
    do {
      if (puVar8[-8] != 0) {
        if (this_00->field_0255 != 0) {
          if ((puVar8[-4] != 0) &&
             (*(int *)(&DAT_00792040 + this_00->field_0235 * 4) + *puVar8 <=
              g_playSystem_00802A38->field_00E4)) {
            *puVar8 = g_playSystem_00802A38->field_00E4;
            uVar4 = g_playSystem_00802A38->field_00E4;
            bVar9 = uVar4 < puVar8[1] + *(int *)(&DAT_00792040 + this_00->field_0235 * 4) * 10;
            if (!bVar9) {
              puVar8[1] = uVar4;
              /* ST_CALLSITE[004C363A]: CALL 0x0040239c; direct=0040239C TLOBaseTy::fireFindCheckTarget */
              fireFindCheckTarget(this_00,(int)local_8,0);
            }
            if ((RecoveredRecordView_005EFAE0_855D930D *)puVar8[2] !=
                nullptr) {
              puVar8[0xc] = g_playSystem_00802A38->field_00E4;
              puVar8[0xd] = 100;
              if ((bVar9) ||
                 ((AnonPointee_TLOBaseTy_0291 *)puVar8[3] == nullptr)) {
                puVar8[3] = 0;

                STPlaySystemC::sub_006E62D0
                          (g_playSystem_00802A38,(RecoveredRecordView_005EFAE0_855D930D *)puVar8[2],
                           (int *)(puVar8 + 3));
              }
              pAVar1 = (AnonPointee_TLOBaseTy_0291 *)puVar8[3];
              if (pAVar1 != nullptr) {
                if (&stack0x00000000 != (undefined1 *)0x14) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_14 = CONCAT22(uStack_12,this_00->field_0041);
                }
                if (&stack0x00000000 != (undefined1 *)0x10) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_10 = CONCAT22(uStack_e,this_00->field_0043);
                }
                if (&stack0x00000000 != &DAT_0000000c) {
                  local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(this_00->field_0045));
                }
                /* ST_CALLSITE[004C36E1]: CALL dword ptr [EDX + 0x10] */
                sVar3 = (*this_00->vtable->vfunc_10)
                                  (pAVar1->field_0041,pAVar1->field_0043,
                                   STReplaceLowWord((uint32_t)(_local_14), (uint16_t)(pAVar1->field_0045)),
                                   (short)_local_14,(short)_local_10,local_c);
                iVar6 = (sVar3 + 0xb4) % 0x168;
                if (puVar8[-2] == 8) {
                  iVar6 = (iVar6 / 0x2d) * 0x2d;
                }
                /* ST_CALLSITE[004C3726]: CALL 0x004035a3; direct=004035A3 TLOBaseTy::sub_004C34A0 */
                sub_004C34A0(this_00,iVar6);
              }
            }
          }
          if (((this_00->field_0255 != 0) && (puVar8[-4] != 0)) &&
             ((RecoveredRecordView_005EFAE0_855D930D *)puVar8[2] ==
              nullptr)) {
            if (puVar8[0xb] == 0) {
              if (puVar8[0xd] + puVar8[0xc] <= g_playSystem_00802A38->field_00E4) {
                puVar8[0xc] = g_playSystem_00802A38->field_00E4;
                puVar8[0xb] = 1;
                do {
                  uVar4 = this_00->field_001C * 0x41c64e6d + 0x3039;
                  this_00->field_001C = uVar4;
                  uVar4 = ((uVar4 >> 0x10) % 0x18) * 0xf;
                  puVar8[0xe] = uVar4;
                } while (uVar4 == this_00->field_0259);
                if (*(int *)(&DAT_00795afc + this_00->field_0235 * 4) != 0) {
                  /* ST_CALLSITE[004C380C]: CALL dword ptr [EDX + 0x90] */
                  this_00->vfunc_90(3,(short)*(int *)(&DAT_00795afc + this_00->field_0235 * 4));
                }
              }
            }
            else {
              /* ST_CALLSITE[004C375C]: CALL 0x004035a3; direct=004035A3 TLOBaseTy::sub_004C34A0 */
              uVar4 = sub_004C34A0(this_00,puVar8[0xe]);
              puVar8[0xb] = uVar4;
              if (uVar4 == 0) {
                puVar8[0xc] = g_playSystem_00802A38->field_00E4;
                uVar4 = this_00->field_001C * 0x41c64e6d + 0x3039;
                this_00->field_001C = uVar4;
                puVar8[0xd] = (uVar4 >> 0x10) % 0x4c + 0x19;
              }
            }
          }
        }
        uVar4 = g_playSystem_00802A38->field_00E4;

        iVar6 = thunk_FUN_004e8230((int)this_00->field_0024,this_00->field_0235,(int)local_8);
        piVar7 = local_8;
        if (iVar6 + puVar8[-5] <= uVar4) {
          puVar8[-5] = uVar4;
          iVar6 = (int)local_8 + this_00->field_0235 * 2;
          if (((*(int *)(&DAT_00793e28 + iVar6 * 4) == 0) ||
              (*(int *)(&DAT_007932d0 + iVar6 * 0x16) <= (int)puVar8[0x10])) ||
             ((puVar8[0x10] != 0 && (0 < (int)local_8)))) {
            /* ST_CALLSITE[004C3882]: CALL 0x0040239c; direct=0040239C TLOBaseTy::fireFindCheckTarget */
            fireFindCheckTarget(this_00,(int)local_8,1);
            if (((*(int *)(&DAT_00792a90 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 2) ||
                ((*(int *)(&DAT_00792a90 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 3 &&
                 /* ST_CALLSITE[004C38A4]: CALL 0x00401087; direct=00401087 TLOBaseTy::sub_004C56B0 */
                 (iVar6 = sub_004C56B0(this_00,piVar7), iVar6 != 0)))) ||
               ((RecoveredRecordView_005EFAE0_855D930D *)puVar8[2] !=
                nullptr)) {
              puVar8[0xc] = g_playSystem_00802A38->field_00E4;
              puVar8[0xd] = 100;
              if ((RecoveredRecordView_005EFAE0_855D930D *)puVar8[2] !=
                  nullptr) {
                if ((AnonPointee_TLOBaseTy_0291 *)puVar8[3] == nullptr) {

                  STPlaySystemC::sub_006E62D0
                            (g_playSystem_00802A38,
                             (RecoveredRecordView_005EFAE0_855D930D *)puVar8[2],(int *)(puVar8 + 3));
                }
                puVar8[8] = (int)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0041;
                puVar8[9] = (int)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0043;
                puVar8[10] = (int)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0045;
              }
              puVar8[6] = 0;
              if (*(int *)(&DAT_007915f0 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 0) {
                /* ST_CALLSITE[004C3934]: CALL 0x00403efe; direct=00403EFE TLOBaseTy::sub_004C4550 */
                sub_004C4550(this_00,piVar7);
              }
              else {
                /* ST_CALLSITE[004C392A]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
                SetState(this_00,5,1);
              }
            }
          }
          iVar6 = (int)piVar7 + this_00->field_0235 * 2;
          if (*(int *)(&DAT_00793e28 + iVar6 * 4) == 1) {
            piVar7 = local_8;
            if ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar6 * 4)) {

              iVar4 = thunk_FUN_004de410(this_00->field_0024,(&DAT_00792ca0)[iVar6 * 3],
                                         *(int *)(&DAT_00794038 + iVar6 * 4) - puVar8[0x10]);
              puVar8[0x10] = puVar8[0x10] + iVar4;
              piVar7 = local_8;
              goto LAB_004c3985;
            }
          }
          if (*(int *)(&DAT_00793e28 + iVar6 * 4) == 2) {
            if ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar6 * 4)) {

              local_EAX_1247 =
                   thunk_FUN_004dfb90((uint)this_00->field_0024,
                                      *(int *)(&DAT_00794038 + iVar6 * 4) - puVar8[0x10],
                                      *(RecoveredRecord_004DFB90_1056A84E **)
                                       (&DAT_00793ff0 + (&DAT_00792ca0)[this_00->field_0235 * 6] * 4
                                       ));
              puVar8[0x10] = puVar8[0x10] + local_EAX_1247;
            }
          }
        }
LAB_004c3985:
        iVar6 = ((int)piVar7 + this_00->field_0235 * 2) * 4;
        if (((*(int *)(&DAT_00793e28 + iVar6) == 2) &&
            ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar6))) &&

           (iVar6 = thunk_FUN_004e8230((int)this_00->field_0024,this_00->field_0235,(int)piVar7),
           puVar8[0x11] + iVar6 * 10 <= g_playSystem_00802A38->field_00E4)) {
          puVar8[0x10] = puVar8[0x10] + 1;
          puVar8[0x11] = g_playSystem_00802A38->field_00E4;
        }
      }
      local_8 = (int *)((int)local_8 + 1);
      puVar8 = puVar8 + 0x20;
    } while ((int)local_8 < this_00->field_025D);
  }
  g_currentExceptionFrame = local_5c.previous;
  return 0;
}


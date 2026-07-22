#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bfire.cpp
   TLOBaseTy::fireProc */

int __thiscall TLOBaseTy::fireProc(TLOBaseTy *this)

{
  AnonPointee_TLOBaseTy_0291 *pAVar1;
  code *pcVar2;
  TLOBaseTy *this_00;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  bool bVar9;
  InternalExceptionFrame local_5c;
  TLOBaseTy *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bfire.cpp",0xb2,0,iVar4,"%s"
                               ,"TLOBaseTy::fireProc error");
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Artem\\TLO_bfire.cpp",0xb3);
      return iVar4;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (0 < local_18->field_025D) {
    puVar8 = &local_18->field_0285;
    local_8 = (int *)0x0;
    do {
      if (puVar8[-8] != 0) {
        if (this_00->field_0255 != 0) {
          if ((puVar8[-4] != 0) &&
             (*(int *)(&DAT_00792040 + this_00->field_0235 * 4) + *puVar8 <=
              g_playSystem_00802A38->field_00E4)) {
            *puVar8 = g_playSystem_00802A38->field_00E4;
            uVar5 = g_playSystem_00802A38->field_00E4;
            bVar9 = uVar5 < puVar8[1] + *(int *)(&DAT_00792040 + this_00->field_0235 * 4) * 10;
            if (!bVar9) {
              puVar8[1] = uVar5;
              fireFindCheckTarget(this_00,(int)local_8,0);
            }
            if (puVar8[2] != 0) {
              puVar8[0xc] = g_playSystem_00802A38->field_00E4;
              puVar8[0xd] = 100;
              if ((bVar9) ||
                 ((AnonPointee_TLOBaseTy_0291 *)puVar8[3] == (AnonPointee_TLOBaseTy_0291 *)0x0)) {
                puVar8[3] = 0;
                FUN_006e62d0(g_playSystem_00802A38,puVar8[2],(int *)(puVar8 + 3));
              }
              pAVar1 = (AnonPointee_TLOBaseTy_0291 *)puVar8[3];
              if (pAVar1 != (AnonPointee_TLOBaseTy_0291 *)0x0) {
                if (&stack0x00000000 != (undefined1 *)0x14) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_14 = CONCAT22(local_14._2_2_,this_00->field_0041);
                }
                if (&stack0x00000000 != (undefined1 *)0x10) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_10 = CONCAT22(local_10._2_2_,this_00->field_0043);
                }
                if (&stack0x00000000 != &DAT_0000000c) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = CONCAT22(local_c._2_2_,this_00->field_0045);
                }
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                sVar3 = (*this_00->vtable->vfunc_10)
                                  (CONCAT22((short)((uint)pAVar1 >> 0x10),pAVar1->field_0041),
                                   pAVar1->field_0043,pAVar1->field_0045,local_14,local_10,local_c);
                iVar4 = (sVar3 + 0xb4) % 0x168;
                if (puVar8[-2] == 8) {
                  iVar4 = (iVar4 / 0x2d) * 0x2d;
                }
                sub_004C34A0(this_00,iVar4);
              }
            }
          }
          if (((this_00->field_0255 != 0) && (puVar8[-4] != 0)) && (puVar8[2] == 0)) {
            if (puVar8[0xb] == 0) {
              if (puVar8[0xd] + puVar8[0xc] <= g_playSystem_00802A38->field_00E4) {
                puVar8[0xc] = g_playSystem_00802A38->field_00E4;
                puVar8[0xb] = 1;
                do {
                  uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
                  this_00->field_001C = uVar5;
                  uVar5 = ((uVar5 >> 0x10) % 0x18) * 0xf;
                  puVar8[0xe] = uVar5;
                } while (uVar5 == this_00->field_0259);
                if (*(int *)(&DAT_00795afc + this_00->field_0235 * 4) != 0) {
                  (*this_00->vtable->vfunc_90)(3,*(int *)(&DAT_00795afc + this_00->field_0235 * 4));
                }
              }
            }
            else {
              uVar5 = sub_004C34A0(this_00,puVar8[0xe]);
              puVar8[0xb] = uVar5;
              if (uVar5 == 0) {
                puVar8[0xc] = g_playSystem_00802A38->field_00E4;
                uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
                this_00->field_001C = uVar5;
                puVar8[0xd] = (uVar5 >> 0x10) % 0x4c + 0x19;
              }
            }
          }
        }
        uVar5 = g_playSystem_00802A38->field_00E4;
        iVar4 = thunk_FUN_004e8230(this_00->field_0024,this_00->field_0235,(int)local_8);
        piVar7 = local_8;
        if (iVar4 + puVar8[-5] <= uVar5) {
          puVar8[-5] = uVar5;
          iVar4 = (int)local_8 + this_00->field_0235 * 2;
          if (((*(int *)(&DAT_00793e28 + iVar4 * 4) == 0) ||
              (*(int *)(&DAT_007932d0 + iVar4 * 0x16) <= (int)puVar8[0x10])) ||
             ((puVar8[0x10] != 0 && (0 < (int)local_8)))) {
            fireFindCheckTarget(this_00,(int)local_8,1);
            if (((*(int *)(&DAT_00792a90 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 2) ||
                ((*(int *)(&DAT_00792a90 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 3 &&
                 (iVar4 = sub_004C56B0(this_00,piVar7), iVar4 != 0)))) || (puVar8[2] != 0)) {
              puVar8[0xc] = g_playSystem_00802A38->field_00E4;
              puVar8[0xd] = 100;
              if (puVar8[2] != 0) {
                if ((AnonPointee_TLOBaseTy_0291 *)puVar8[3] == (AnonPointee_TLOBaseTy_0291 *)0x0) {
                  FUN_006e62d0(g_playSystem_00802A38,puVar8[2],(int *)(puVar8 + 3));
                }
                puVar8[8] = (int)(short)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0041;
                puVar8[9] = (int)(short)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0043;
                puVar8[10] = (int)(short)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0045;
              }
              puVar8[6] = 0;
              if (*(int *)(&DAT_007915f0 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 0) {
                sub_004C4550(this_00,piVar7);
              }
              else {
                SetState(this_00,5,1);
              }
            }
          }
          iVar4 = (int)piVar7 + this_00->field_0235 * 2;
          if (*(int *)(&DAT_00793e28 + iVar4 * 4) == 1) {
            piVar7 = local_8;
            if ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar4 * 4)) {
              iVar4 = thunk_FUN_004de410((void *)this_00->field_0024,(&DAT_00792ca0)[iVar4 * 3],
                                         *(int *)(&DAT_00794038 + iVar4 * 4) - puVar8[0x10]);
              puVar8[0x10] = puVar8[0x10] + iVar4;
              piVar7 = local_8;
              goto LAB_004c3985;
            }
          }
          if (*(int *)(&DAT_00793e28 + iVar4 * 4) == 2) {
            if ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar4 * 4)) {
              iVar4 = thunk_FUN_004dfb90(this_00->field_0024,
                                         *(int *)(&DAT_00794038 + iVar4 * 4) - puVar8[0x10],
                                         *(int *)(&DAT_00793ff0 +
                                                 (&DAT_00792ca0)[this_00->field_0235 * 6] * 4));
              puVar8[0x10] = puVar8[0x10] + iVar4;
            }
          }
        }
LAB_004c3985:
        iVar4 = ((int)piVar7 + this_00->field_0235 * 2) * 4;
        if (((*(int *)(&DAT_00793e28 + iVar4) == 2) &&
            ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar4))) &&
           (iVar4 = thunk_FUN_004e8230(this_00->field_0024,this_00->field_0235,(int)piVar7),
           puVar8[0x11] + iVar4 * 10 <= g_playSystem_00802A38->field_00E4)) {
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


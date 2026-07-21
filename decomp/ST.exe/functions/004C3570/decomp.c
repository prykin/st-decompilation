#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bfire.cpp
   TLOBaseTy::fireProc */

int __thiscall TLOBaseTy::fireProc(TLOBaseTy *this)

{
  code *pcVar1;
  TLOBaseTy *this_00;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  bool bVar8;
  InternalExceptionFrame local_5c;
  TLOBaseTy *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Artem_TLO_bfire_cpp_007ac910,0xb2,0,iVar3,&DAT_007a4ccc
                               ,s_TLOBaseTy__fireProc_error_007ac938);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Artem_TLO_bfire_cpp_007ac910,0xb3);
      return iVar3;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (0 < (int)local_18->field_025D) {
    puVar7 = &local_18->field_0285;
    local_8 = (int *)0x0;
    do {
      if (puVar7[-8] != 0) {
        if (this_00->field_0255 != 0) {
          if ((puVar7[-4] != 0) &&
             (*(int *)(&DAT_00792040 + this_00->field_0235 * 4) + *puVar7 <=
              (uint)PTR_00802a38->field_00E4)) {
            *puVar7 = PTR_00802a38->field_00E4;
            uVar4 = PTR_00802a38->field_00E4;
            bVar8 = uVar4 < puVar7[1] + *(int *)(&DAT_00792040 + this_00->field_0235 * 4) * 10;
            if (!bVar8) {
              puVar7[1] = uVar4;
              fireFindCheckTarget(this_00,(int)local_8,0);
            }
            if (puVar7[2] != 0) {
              puVar7[0xc] = PTR_00802a38->field_00E4;
              puVar7[0xd] = 100;
              if ((bVar8) || (puVar7[3] == 0)) {
                puVar7[3] = 0;
                FUN_006e62d0(PTR_00802a38,puVar7[2],(int *)(puVar7 + 3));
              }
              uVar4 = puVar7[3];
              if (uVar4 != 0) {
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
                sVar2 = (*this_00->vtable->vfunc_10)
                                  (CONCAT22((short)(uVar4 >> 0x10),*(undefined2 *)(uVar4 + 0x41)),
                                   *(undefined2 *)(uVar4 + 0x43),*(undefined2 *)(uVar4 + 0x45),
                                   local_14,local_10,local_c);
                iVar3 = (sVar2 + 0xb4) % 0x168;
                if (puVar7[-2] == 8) {
                  iVar3 = (iVar3 / 0x2d) * 0x2d;
                }
                thunk_FUN_004c34a0(this_00,iVar3);
              }
            }
          }
          if (((this_00->field_0255 != 0) && (puVar7[-4] != 0)) && (puVar7[2] == 0)) {
            if (puVar7[0xb] == 0) {
              if (puVar7[0xd] + puVar7[0xc] <= (uint)PTR_00802a38->field_00E4) {
                puVar7[0xc] = PTR_00802a38->field_00E4;
                puVar7[0xb] = 1;
                do {
                  uVar4 = this_00->field_001C * 0x41c64e6d + 0x3039;
                  this_00->field_001C = uVar4;
                  uVar4 = ((uVar4 >> 0x10) % 0x18) * 0xf;
                  puVar7[0xe] = uVar4;
                } while (uVar4 == *(uint *)&this_00->field_0x259);
                if (*(int *)(&DAT_00795afc + this_00->field_0235 * 4) != 0) {
                  (*this_00->vtable->vfunc_90)(3,*(int *)(&DAT_00795afc + this_00->field_0235 * 4));
                }
              }
            }
            else {
              uVar4 = thunk_FUN_004c34a0(this_00,puVar7[0xe]);
              puVar7[0xb] = uVar4;
              if (uVar4 == 0) {
                puVar7[0xc] = PTR_00802a38->field_00E4;
                uVar4 = this_00->field_001C * 0x41c64e6d + 0x3039;
                this_00->field_001C = uVar4;
                puVar7[0xd] = (uVar4 >> 0x10) % 0x4c + 0x19;
              }
            }
          }
        }
        uVar4 = PTR_00802a38->field_00E4;
        iVar3 = thunk_FUN_004e8230(*(int *)&this_00->field_0x24,this_00->field_0235,(int)local_8);
        piVar6 = local_8;
        if (iVar3 + puVar7[-5] <= uVar4) {
          puVar7[-5] = uVar4;
          iVar3 = (int)local_8 + this_00->field_0235 * 2;
          if (((*(int *)(&DAT_00793e28 + iVar3 * 4) == 0) ||
              (*(int *)(&DAT_007932d0 + iVar3 * 0x16) <= (int)puVar7[0x10])) ||
             ((puVar7[0x10] != 0 && (0 < (int)local_8)))) {
            fireFindCheckTarget(this_00,(int)local_8,1);
            if (((*(int *)(&DAT_00792a90 + ((int)piVar6 + this_00->field_0235 * 2) * 4) == 2) ||
                ((*(int *)(&DAT_00792a90 + ((int)piVar6 + this_00->field_0235 * 2) * 4) == 3 &&
                 (iVar3 = thunk_FUN_004c56b0(this_00,piVar6), iVar3 != 0)))) || (puVar7[2] != 0)) {
              puVar7[0xc] = PTR_00802a38->field_00E4;
              puVar7[0xd] = 100;
              if (puVar7[2] != 0) {
                if (puVar7[3] == 0) {
                  FUN_006e62d0(PTR_00802a38,puVar7[2],(int *)(puVar7 + 3));
                }
                puVar7[8] = (int)*(short *)(puVar7[3] + 0x41);
                puVar7[9] = (int)*(short *)(puVar7[3] + 0x43);
                puVar7[10] = (int)*(short *)(puVar7[3] + 0x45);
              }
              puVar7[6] = 0;
              if (*(int *)(&DAT_007915f0 + ((int)piVar6 + this_00->field_0235 * 2) * 4) == 0) {
                thunk_FUN_004c4550(this_00,piVar6);
              }
              else {
                SetState(this_00,5,1);
              }
            }
          }
          iVar3 = (int)piVar6 + this_00->field_0235 * 2;
          if (*(int *)(&DAT_00793e28 + iVar3 * 4) == 1) {
            piVar6 = local_8;
            if ((int)puVar7[0x10] < *(int *)(&DAT_00794038 + iVar3 * 4)) {
              iVar3 = thunk_FUN_004de410(*(void **)&this_00->field_0x24,(&DAT_00792ca0)[iVar3 * 3],
                                         *(int *)(&DAT_00794038 + iVar3 * 4) - puVar7[0x10]);
              puVar7[0x10] = puVar7[0x10] + iVar3;
              piVar6 = local_8;
              goto LAB_004c3985;
            }
          }
          if (*(int *)(&DAT_00793e28 + iVar3 * 4) == 2) {
            if ((int)puVar7[0x10] < *(int *)(&DAT_00794038 + iVar3 * 4)) {
              iVar3 = thunk_FUN_004dfb90(*(uint *)&this_00->field_0x24,
                                         *(int *)(&DAT_00794038 + iVar3 * 4) - puVar7[0x10],
                                         *(int *)(&DAT_00793ff0 +
                                                 (&DAT_00792ca0)[this_00->field_0235 * 6] * 4));
              puVar7[0x10] = puVar7[0x10] + iVar3;
            }
          }
        }
LAB_004c3985:
        iVar3 = ((int)piVar6 + this_00->field_0235 * 2) * 4;
        if (((*(int *)(&DAT_00793e28 + iVar3) == 2) &&
            ((int)puVar7[0x10] < *(int *)(&DAT_00794038 + iVar3))) &&
           (iVar3 = thunk_FUN_004e8230(*(int *)&this_00->field_0x24,this_00->field_0235,(int)piVar6)
           , puVar7[0x11] + iVar3 * 10 <= (uint)PTR_00802a38->field_00E4)) {
          puVar7[0x10] = puVar7[0x10] + 1;
          puVar7[0x11] = PTR_00802a38->field_00E4;
        }
      }
      local_8 = (int *)((int)local_8 + 1);
      puVar7 = puVar7 + 0x20;
    } while ((int)local_8 < (int)this_00->field_025D);
  }
  g_currentExceptionFrame = local_5c.previous;
  return 0;
}


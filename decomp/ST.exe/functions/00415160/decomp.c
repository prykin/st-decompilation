#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Grpway3d.cpp
   STGroupBoatC::Way3DGrpDistribTgt */

int STGroupBoatC::Way3DGrpDistribTgt
              (void *param_1,AnonShape_00413AF0_B6B4EE9A *param_2,int param_3,int param_4,
              int param_5)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  ushort uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  InternalExceptionFrame local_50;
  int local_c;
  int local_8;

  iVar8 = 0;
  local_c = 0;
  sVar1 = (short)param_2->field_000C;
  *(short *)((int)param_1 + 0x27) = sVar1;
  if (sVar1 == 0) {
    return 0;
  }
  uVar4 = thunk_FUN_004233c0((int)param_1);
  DAT_007f4d4c = (uint)uVar4;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((DAT_007f4d4c < 2) && (*(short *)((int)param_1 + 0x27) == 1)) {
    if (param_2->field_000C == 0) {
      puVar5 = (undefined2 *)0x0;
    }
    else {
      puVar5 = (undefined2 *)param_2->field_001C;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar6 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5));
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0xb7) = 0;
      *(int *)(iVar6 + 0xbb) = param_3;
      *(int *)(iVar6 + 199) = param_3;
      *(int *)(iVar6 + 0xbf) = param_4;
      *(int *)(iVar6 + 0xcb) = param_4;
      *(int *)(iVar6 + 0xc3) = param_5;
      *(int *)(iVar6 + 0xcf) = param_5;
    }
    goto LAB_00415472;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar8 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar8 == 0) {
    uVar10 = thunk_FUN_00413af0(param_1,param_2,param_3,param_4,param_5);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar9 = 0;
    if ((int)uVar10 == 0) {
      local_8 = 0;
      if (0 < DAT_007f4d40) {
        do {
          uVar2 = *(uint *)(uVar9 + 0x18 + (int)DAT_007f4d04);
          if (uVar2 < param_2->field_000C) {
            puVar5 = (undefined2 *)(param_2->field_0008 * uVar2 + param_2->field_001C);
          }
          else {
            puVar5 = (undefined2 *)0x0;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar8 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5));
          if (iVar8 != 0) {
            uVar7 = *(undefined4 *)(uVar9 + 0xc + (int)DAT_007f4d04);
            *(undefined4 *)(iVar8 + 0xbb) = uVar7;
            *(undefined4 *)(iVar8 + 199) = uVar7;
            uVar7 = *(undefined4 *)(uVar9 + 0x10 + (int)DAT_007f4d04);
            *(undefined4 *)(iVar8 + 0xbf) = uVar7;
            *(undefined4 *)(iVar8 + 0xcb) = uVar7;
            uVar7 = *(undefined4 *)(uVar9 + 0x14 + (int)DAT_007f4d04);
            *(undefined4 *)(iVar8 + 0xc3) = uVar7;
            *(undefined4 *)(iVar8 + 0xcf) = uVar7;
          }
          local_8 = local_8 + 1;
          uVar9 = uVar9 + 0x1c;
        } while (local_8 < DAT_007f4d40);
      }
      iVar8 = 0;
      if (0 < DAT_007f4cf8) {
        do {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar9 = *(uint *)(DAT_007f4d04 +
                           ((uint)*(ushort *)((int)param_1 + 0x27) - iVar8) * 0xe + -2);
          if (uVar9 < param_2->field_000C) {
            puVar5 = (undefined2 *)(param_2->field_0008 * uVar9 + param_2->field_001C);
          }
          else {
            puVar5 = (undefined2 *)0x0;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar6 = thunk_FUN_00423e70(param_1,CONCAT22((short)(uVar9 >> 0x10),*puVar5));
          if (iVar6 != 0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar7 = *(undefined4 *)
                     (DAT_007f4d04 + ((uint)*(ushort *)((int)param_1 + 0x27) - iVar8) * 0xe + -8);
            *(undefined4 *)(iVar6 + 0xbb) = uVar7;
            *(undefined4 *)(iVar6 + 199) = uVar7;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar7 = *(undefined4 *)
                     (DAT_007f4d04 + ((uint)*(ushort *)((int)param_1 + 0x27) - iVar8) * 0xe + -6);
            *(undefined4 *)(iVar6 + 0xbf) = uVar7;
            *(undefined4 *)(iVar6 + 0xcb) = uVar7;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar7 = *(undefined4 *)
                     (DAT_007f4d04 + ((uint)*(ushort *)((int)param_1 + 0x27) - iVar8) * 0xe + -4);
            *(undefined4 *)(iVar6 + 0xc3) = uVar7;
            *(undefined4 *)(iVar6 + 0xcf) = uVar7;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < DAT_007f4cf8);
        g_currentExceptionFrame = local_50.previous;
        iVar8 = local_c;
        goto LAB_00415467;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    else if (*(short *)((int)param_1 + 0x27) != 0) {
      do {
        if (uVar9 < param_2->field_000C) {
          puVar5 = (undefined2 *)(param_2->field_0008 * uVar9 + param_2->field_001C);
        }
        else {
          puVar5 = (undefined2 *)0x0;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar10 = thunk_FUN_00423e70(param_1,CONCAT22((short)((uint)uVar7 >> 0x10),*puVar5));
        uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
        iVar8 = (int)uVar10;
        if (iVar8 != 0) {
          *(int *)(iVar8 + 0xbb) = param_3;
          *(int *)(iVar8 + 199) = param_3;
          *(int *)(iVar8 + 0xbf) = param_4;
          *(int *)(iVar8 + 0xcb) = param_4;
          *(int *)(iVar8 + 0xc3) = param_5;
          *(int *)(iVar8 + 0xcf) = param_5;
        }
        uVar9 = uVar9 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while ((int)uVar9 < (int)(uint)*(ushort *)((int)param_1 + 0x27));
    }
    g_currentExceptionFrame = local_50.previous;
    iVar8 = local_c;
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    local_c = iVar8;
    iVar6 = ReportDebugMessage(s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xe66,0,iVar8,&DAT_007a4ccc,
                               s_STGroupBoatC__Way3DGrpDistribTgt_007a4cd0);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
LAB_00415467:
  FUN_006a5e90(DAT_007f4d04);
LAB_00415472:
  if (iVar8 == 0) {
    return 0;
  }
  RaiseInternalException
            (iVar8,g_overwriteContext_007ED77C,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xe6d);
  return iVar8;
}


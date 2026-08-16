#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x0041112c) */
/* WARNING: Removing unreachable block (ram,0x00411131) */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 2726 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int FUN_00410dc0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int local_EAX_46;
  int iVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  int iVar6;
  int iVar5;
  int local_EAX_522;
  uint uVar7;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int iVar4_mg2;

  if (DAT_007f4d20 <= *(int *)(&DAT_007a4c20 + param_5 * 8)) {
    local_EAX_46 = thunk_FUN_0040fc40(param_1,param_2,param_3,param_4,param_5,0);
    return local_EAX_46;
  }
  if ((((DAT_007f4d20 < 0xc9) && (-1 < param_1)) && (param_1 < DAT_007f4d2c)) &&
     (((-1 < param_2 && (param_2 < DAT_007f4d30)) && ((-1 < param_3 && (param_3 < DAT_007f4d34))))))
  {
    if (0 < param_4) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
    }
    iVar1 = DAT_007f4d30 * DAT_007f4d2c;
    uVar7 = *(uint *)(&DAT_007a4c24 + param_5 * 8);
    g_runtimeRecordCount_007F4D14 = 0;
    iVar3 = DAT_007f4d20 / (int)uVar7 + 2;
    if (DAT_007f4d20 < iVar3) {
      iVar3 = DAT_007f4d20;
    }
    iVar2 = thunk_FUN_0040fc40(param_1,param_2,param_3,0,param_5,iVar3);
    if (iVar2 != 0) {
      return iVar2;
    }
    auto param_4_after_write = 1; /* compiler stack-slot lifetime split */
    iVar3 = (int)((uVar7 & 0xfffffffe) - ((int)uVar7 >> 0x1f)) >> 1;
    if (0 < iVar3) {
      local_14 = (uVar7 & 0xfffffffe) - 1;
      do {
        if (DAT_007f4d20 <= g_runtimeRecordCount_007F4D14) goto cf_break_loop_00411005;
        local_8 = (DAT_007f4d38 * param_4_after_write >> 0x10) + param_1;
        local_c = param_2 - (DAT_007f4d28 * param_4_after_write >> 0x10);
        iVar4 = DAT_007f4d20 - g_runtimeRecordCount_007F4D14;
        iVar6 = iVar4 / (local_14 + 1);
        if (iVar4 < iVar6) {
          iVar6 = iVar4;
        }
        if ((0 < iVar6) &&
           (iVar5 = thunk_FUN_0040fc40(local_8,local_c,param_3,0,param_5,iVar6), iVar5 != 0)) {
          return iVar5;
        }
        if (DAT_007f4d20 <= g_runtimeRecordCount_007F4D14) goto cf_break_loop_00411005;
        local_8 = param_1 - (DAT_007f4d38 * param_4_after_write >> 0x10);
        iVar4 = DAT_007f4d20 - g_runtimeRecordCount_007F4D14;
        local_c = (DAT_007f4d28 * param_4_after_write >> 0x10) + param_2;
        iVar6 = iVar4 / local_14;
        if (iVar4 < iVar4 / local_14) {
          iVar6 = iVar4;
        }
        if (iVar6 < 1) {
          iVar6 = DAT_007f4d20;
        }
        local_EAX_522 = thunk_FUN_0040fc40(local_8,local_c,param_3,0,param_5,iVar6);
        if (local_EAX_522 != 0) {
          return local_EAX_522;
        }
        param_4_after_write = param_4_after_write + 1;
        local_14 = local_14 + -2;
      } while (param_4_after_write <= iVar3);
    }
    if (DAT_007f4d20 <= g_runtimeRecordCount_007F4D14) {
cf_break_loop_00411005:
      iVar3 = 0;
      param_4_after_write = 0;
      iVar4_mg2 = g_runtimeRecordCount_007F4D14;
      if (0 < g_runtimeRecordCount_007F4D14) {
        do {
          local_8 = STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar3).field_0000;
          local_c = STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar3).field_0004;
          local_10 = STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar3).field_0008;
          if ((((local_8 < 0) || (DAT_007f4d2c <= local_8)) || (local_c < 0)) ||
             ((DAT_007f4d30 <= local_c ||
              (*(short *)((int)PTR_007f4cf0 +
                         (local_10 * iVar1 + local_8 + DAT_007f4d2c * local_c) * 2) != 0)))) {
            iVar6 = FUN_0040f270(&local_8,&local_c,&local_10,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                                 DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
            if (iVar6 != 0) {
              return -4;
            }
            uVar7 = local_10 * iVar1 + local_8 + DAT_007f4d2c * local_c ^ 7;
            STBitSet(g_bitset_007F4CFC, uVar7);
            STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar3).field_0000 = local_8;
            STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar3).field_0004 = local_c;
            STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar3).field_0008 = local_10;
            iVar4_mg2 = g_runtimeRecordCount_007F4D14;
          }
          param_4_after_write = param_4_after_write + 1;
          iVar3 = iVar3 + 0x14;
        } while (param_4_after_write < iVar4_mg2);
      }
      FUN_0040eb90();
      return 0;
    }
  }
  return -4;
}


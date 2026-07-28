#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B8C80 -> 0062B830 @ 004B95E3; MOVSX at 004B95DC establishes signed source width 2 |
   004B9FA0 -> 0062B830 @ 004BBD81; MOVSX at 004BBD7A establishes signed source width 2 | 004D32C0
   -> 0062B830 @ 004D4CD9; MOVSX at 004D4CD2 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004B8C80 -> 0062B830 @ 004B95E3; MOVSX at 004B95C6 establishes signed source width 2 |
   004B9FA0 -> 0062B830 @ 004BBD81; MOVSX at 004BBD64 establishes signed source width 2 | 004D32C0
   -> 0062B830 @ 004D4CD9; MOVSX at 004D4CBC establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004B8C80 -> 0062B830 @ 004B95E3; MOVSX at 004B95C2 establishes signed source width 2 |
   004B9FA0 -> 0062B830 @ 004BBD81; MOVSX at 004BBD60 establishes signed source width 2 | 004D32C0
   -> 0062B830 @ 004D4CD9; MOVSX at 004D4CB8 establishes signed source width 2 */

void __cdecl
FUN_0062b830(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,undefined4 param_6,
            undefined4 param_7,int param_8,int param_9)

{
  int *this;
  int iVar1;
  undefined4 local_44 [5];
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_c;
  undefined4 local_8;

  this = param_5;
  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  local_28 = param_1;
  local_24 = param_2;
  local_18 = param_5[6];
  local_20 = param_3;
  local_14 = param_5[9];
  local_1c = param_4;
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_5 + 0x2c))();
  local_8 = param_7;
  local_30 = (uint)(*(int *)(&DAT_00791d68 + iVar1 * 4) == 1);
  local_c = param_6;
  g_playSystem_00802A38->vfunc_08(0x124,0,0,local_44,0);
  STFishC::sub_004162B0
            ((STFishC *)this,(short *)((int)&param_3 + 2),(undefined2 *)((int)&param_2 + 2),
             (undefined2 *)((int)&param_1 + 2));
  iVar1 = param_8;
  if ((param_9 == 0) && (g_manRuin_008117B0 != (STManRuinC *)0x0)) {
    if (this[0xb] == 0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STManRuinC::sub_00631510
                (g_manRuin_008117B0,this[8],1,(int)param_3._2_2_,(int)param_2._2_2_,
                 (int)param_1._2_2_,param_8);
    }
    if (this[0xb] == 1) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STManRuinC::sub_00631510
                (g_manRuin_008117B0,this[8],4,(int)param_3._2_2_,(int)param_2._2_2_,
                 (int)param_1._2_2_,iVar1);
    }
  }
  return;
}


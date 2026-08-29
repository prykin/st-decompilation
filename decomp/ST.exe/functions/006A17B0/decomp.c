#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x006a1957) */
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=3, ignored=0,
   unknown=0 */

int __cdecl
FUN_006a17b0(int *param_1,int param_2,int param_3,int param_4,int param_5,ushort *param_6,
            undefined *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  int local_EAX_219;
  uint uVar5;
  uint uVar6;
  int iVar7;
  RecoveredRecord_006A1370_30F34641 local_14;
  int local_c;
  int *local_8;

  iVar1 = param_4;

  iVar2 = thunk_FUN_006a20e0(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 != 0) {
    thunk_FUN_006a1410(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
    local_c = 0;
    do {
      auto param_4_after_write = 0; /* compiler stack-slot lifetime split */
      local_8 = &DAT_007df82c;
      do {
        iVar2 = local_8[-1] + param_2;
        iVar7 = *local_8 + param_3;
        if ((((-1 < iVar2) && (iVar2 < *param_1)) && (-1 < iVar7)) &&
           (((iVar7 < param_1[1] && (-1 < iVar1)) &&
            ((iVar1 < 6 &&

             (iVar4 = thunk_FUN_006a20e0(param_1,iVar2,iVar7,iVar1,param_5), iVar4 != 0)))))) {

          iVar3 = thunk_FUN_006a1370(param_1,iVar2,iVar7,iVar1,&local_14);

          local_EAX_219 =
               thunk_FUN_006a24e0((ushort *)&local_14,iVar1,param_6,(short)iVar3,param_5);
          if (local_EAX_219 != 0) {
            if (param_5 == 0xff) {
              uVar6 = (uint)(byte)param_6[2];
            }
            else if (param_5 == 1) {
              uVar6 = (uint)(byte)param_6[1];
            }
            else {
              uVar6 = (uint)(byte)*param_6;
            }
            if (param_5 == 0xff) {
              uVar5 = (uint)local_14.field_0004;
            }
            else if (param_5 == 1) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar5 = CONCAT22(local_14.field_0004,STPiece<2,2>(local_14));
            }
            else {
              uVar5 = STReplaceLowWord((uint32_t)(local_14), (uint16_t)(STPiece<0,2>(local_14)));
            }
            if ((*(ushort *)(&DAT_007df898 + (param_4_after_write + (uVar5 & 0xf) * 8) * 2) &
                 (&DAT_007df808)[uVar6 & 0xf] & 0xf00) != 0) {
              thunk_FUN_006a1410(param_1,iVar2,iVar7,iVar1,param_5,param_7,param_8);
            }
          }
        }
        local_8 = local_8 + 2;
        param_4_after_write = param_4_after_write + 1;
      } while ((int)local_8 < 0x7df86c);
      local_c = local_c + 1;
    } while (local_c < 1);
  }
  return 1;
}


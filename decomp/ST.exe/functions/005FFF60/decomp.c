#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_005fff60(void *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  uint local_1c;
  short sStack_18;
  undefined2 uStack_16;
  short local_14;
  short local_12;
  short local_10 [4];
  int local_8;

  iVar4 = STField<int>(this,0x226);
  local_8 = iVar4;
  iVar2 = thunk_FUN_005ff3a0(this,&local_1c,(short *)((int)&local_1c + 2),&sStack_18);
  iVar5 = param_2;
  if (iVar2 == 0) {
    thunk_FUN_005fd940(this,param_1);
    return 0;
  }
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar4 = thunk_FUN_005ff430(this,param_1,param_2,STReplaceLowWord((uint32_t)(local_1c), (uint16_t)((short)local_1c)),
                               CONCAT22(sStack_18,STPiece<2,2>(local_1c)),CONCAT22(uStack_16,sStack_18),
                               &local_14,&local_12,local_10);
    if (((iVar4 != 0) &&
        (iVar4 = thunk_FUN_005fe360((short *)(STField<int>(this,0x233) + param_1 * 0x52),
                                    (short)local_1c,(int)STPiece<2,2>(local_1c),sStack_18,(int)local_14
                                    ,local_12,local_10[0]), -1 < iVar4)) &&
       (iVar3 = thunk_FUN_005fe5d0(this,param_1,(undefined2 *)&local_1c,(int)&local_14), iVar3 != 0)
       ) break;
    if ((param_2 != 30000) && (iVar5 = iVar5 + 1, STField<int>(this,0x226) < iVar5)) {
      iVar5 = 0;
    }
    local_8 = local_8 + -1;
    iVar4 = local_8;
  }
  if (param_2 == 30000) {
    return 1;
  }
  iVar4 = *(int *)(STField<int>(this,0x23f) + iVar5 * 4);
  *(uint *)(STField<int>(this,0x23b) + 0xc + iVar4 * 0x18) =
       *(uint *)(STField<int>(this,0x23b) + 0xc + iVar4 * 0x18) >> 1;
  puVar1 = (uint *)(STField<int>(this,0x23b) + 0x10 +
                   *(int *)(STField<int>(this,0x23f) + iVar5 * 4) * 0x18);
  *puVar1 = *puVar1 >> 1;
  return 1;
}


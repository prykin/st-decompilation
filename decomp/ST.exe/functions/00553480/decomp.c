#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=0, unknown=0 */

uint __cdecl FUN_00553480(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_18 [4];
  int local_8;

  uVar2 = param_4;
  uVar3 = 0;
  local_8 = 0;
  if ((((param_1 < 0) || ((int)param_4 <= param_1)) || (param_2 < 0)) || (param_5 <= param_2)) {
    iVar4 = -1;
  }
  else {
    iVar4 = param_2 * param_4 + param_1;
  }
  if (param_1 < 1) {
    local_18[0] = 1;
    local_8 = 1;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((0 < param_2) &&
       (bVar1 = *(byte *)((iVar4 - param_4) + -1 + param_3), param_4 = (uint)bVar1, bVar1 < 0xf)) {
      uVar3 = (uint)*(ushort *)(&DAT_007c88f4 + param_4 * 0x10);
    }
    bVar1 = *(byte *)(iVar4 + -1 + param_3);
    param_4 = (uint)bVar1;
    if (bVar1 < 0xf) {
      uVar3 = uVar3 | *(ushort *)(&DAT_007c88f6 + param_4 * 0x10);
    }
  }
  if (((0 < param_1) && (param_2 < param_5 + -1)) &&
     (bVar1 = *(byte *)(iVar4 + param_3 + -1 + uVar2), param_4 = (uint)bVar1, bVar1 < 0xf)) {
    uVar3 = uVar3 | *(ushort *)(&DAT_007c88f8 + param_4 * 0x10);
  }
  if (param_2 < param_5 + -1) {
    bVar1 = *(byte *)(iVar4 + param_3 + uVar2);
    param_4 = (uint)bVar1;
    if (bVar1 < 0xf) {
      uVar3 = uVar3 | *(ushort *)(&DAT_007c88fa + param_4 * 0x10);
    }
  }
  else {
    local_18[local_8] = 3;
    local_8 = local_8 + 1;
  }
  if (((param_1 < (int)(uVar2 - 1)) && (param_2 < param_5 + -1)) &&
     (bVar1 = *(byte *)(iVar4 + param_3 + 1 + uVar2), param_4 = (uint)bVar1, bVar1 < 0xf)) {
    uVar3 = uVar3 | *(ushort *)(&DAT_007c88fc + param_4 * 0x10);
  }
  if (param_1 < (int)(uVar2 - 1)) {
    bVar1 = *(byte *)(iVar4 + 1 + param_3);
    param_4 = (uint)bVar1;
    if (bVar1 < 0xf) {
      uVar3 = uVar3 | *(ushort *)(&DAT_007c88fe + param_4 * 0x10);
    }
  }
  else {
    local_18[local_8] = 5;
    local_8 = local_8 + 1;
  }
  if (param_1 < (int)(uVar2 - 1)) {
    if (0 < param_2) {
      bVar1 = *(byte *)((iVar4 - uVar2) + 1 + param_3);
      param_4 = (uint)bVar1;
      if (bVar1 < 0xf) {
        uVar3 = uVar3 | *(ushort *)(&DAT_007c8900 + param_4 * 0x10);
      }
      goto LAB_00553637;
    }
  }
  else {
LAB_00553637:
    if (0 < param_2) {
      bVar1 = *(byte *)((iVar4 - uVar2) + param_3);
      param_4 = (uint)bVar1;
      if (bVar1 < 0xf) {
        uVar3 = uVar3 | STReplaceLowWord((uint32_t)(param_2), (uint16_t)(*(undefined2 *)(&DAT_007c8902 + param_4 * 0x10)));
      }
      goto LAB_00553663;
    }
  }
  local_18[local_8] = 7;
  local_8 = local_8 + 1;
LAB_00553663:
  if (local_8 != 0) {
    puVar5 = local_18;
    do {
      switch(*puVar5) {
      case 1:
        if ((uVar3 & 0x400) != 0) {
          if ((uVar3 & 0x800) == 0) {
            uVar3 = uVar3 | 0x20;
          }
          if ((uVar3 & 0x400) != 0) break;
        }
        if ((uVar3 & 0x800) != 0) {
          uVar3 = uVar3 | 0x10;
        }
        break;
      case 3:
        if ((uVar3 & 0x800) != 0) {
          if ((uVar3 & 0x100) == 0) {
            uVar3 = uVar3 | 0x80;
          }
          if ((uVar3 & 0x800) != 0) break;
        }
        if ((uVar3 & 0x100) != 0) {
          uVar3 = uVar3 | 0x40;
        }
        break;
      case 5:
        if ((uVar3 & 0x100) != 0) {
          if ((uVar3 & 0x200) == 0) {
            uVar3 = uVar3 | 2;
          }
          if ((uVar3 & 0x100) != 0) break;
        }
        if ((uVar3 & 0x200) != 0) {
          uVar3 = uVar3 | 1;
        }
        break;
      case 7:
        if ((uVar3 & 0x200) != 0) {
          if ((uVar3 & 0x400) == 0) {
            uVar3 = uVar3 | 8;
          }
          if ((uVar3 & 0x200) != 0) break;
        }
        if ((uVar3 & 0x400) != 0) {
          uVar3 = uVar3 | 4;
        }
      }
      puVar5 = puVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return uVar3;
}


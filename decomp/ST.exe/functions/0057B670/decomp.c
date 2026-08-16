#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0057B670 -> 00416270 @ 0057B716 | 0057B670 -> 0057A2C0 @ 0057B6F7

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0057B670 -> 00416270 @ 0057B716 | 0057B670 -> 0057A2C0 @ 0057B6F7 */

undefined4 __cdecl
FUN_0057b670(int *param_1,uint param_2,uint param_3,short *param_4,short *param_5)

{
  undefined2 uVar1;
  int *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_60 [5];
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  int *local_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined2 local_2f;
  int local_8;

  this = param_1;
  uVar5 = 0;
  local_8 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == nullptr) {
    return 1;
  }
  if ((param_2 & 0xff) != 0) {
    if ((param_2 & 0xff) != 1) {
      return 1;
    }
    thunk_FUN_0057b350(param_1,param_3,&local_8);
    goto LAB_0057b6ff;
  }
  if (STField<int>(param_1,0x259) == 0x99) {
    iVar4 = 0x15e;
LAB_0057b6da:
    param_1 = (int *)0x3fc00000;
  }
  else {
    if (STField<int>(param_1,0x259) != 0xb7) {
      iVar4 = 400;
      goto LAB_0057b6da;
    }
    iVar4 = 0xfa;
    param_1 = (int *)0x3f000000;
  }
  thunk_FUN_0057a2c0((AnonShape_0057A2C0_A829D396 *)this,param_3,&local_8,param_4,iVar4,param_1,
                     param_5);
LAB_0057b6ff:
  if (local_8 != 0) {
    thunk_FUN_00416270(this,&param_2,(int *)&param_5,(short *)&param_4);
    if (STField<int>(this,0x259) == 0x99) {
      param_1 = (int *)0xb4;
    }
    else if (STField<int>(this,0x259) == 0xb7) {
      param_1 = (int *)0xb9;
    }
    else {
      param_1 = (int *)0x96;
    }
    if (0 < (int)(param_3 + 1)) {
      do {
        uVar2 = param_3;
        uVar1 = STField<undefined2>(this,0x247);
        memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
        local_4c = STField<undefined2>(this,0x245);
        local_60[3] = 1;
        local_60[2] = 1;
        local_60[1] = this[9];
        local_48 = STField<undefined2>(this,0x249);
        local_2f = STField<undefined2>(this,0x262);
        local_33 = STField<undefined4>(this,0x25e);
        local_34 = STField<undefined1>(this,0x25d);
        local_60[0] = 0x28;
        local_46 = (undefined2)param_2;
        local_44 = STPiece<0,2>(param_5);
        local_42 = STPiece<0,2>(param_4);
        local_4a = uVar1;
        if (uVar5 == param_3) {
          iVar3 = FUN_006acf0d((int)STField<short>(this,0x3a),(int)(short)this[0xf],
                               (int)STField<short>(this,0x3e),(int)(short)this[0xd],
                               (int)STField<short>(this,0x36),(int)(short)this[0xe]);
          if (iVar3 == 0) {
            local_40 = *(short *)(local_8 + -8 + uVar5 * 8);
            local_3e = *(short *)(local_8 + -6 + uVar5 * 8);
            local_3c = *(short *)(local_8 + -4 + uVar5 * 8);
          }
          else {
            local_40 = (short)((((int)STField<short>(this,0x3a) - (int)(short)this[0xd]) * 100) /
                              iVar3) + (short)param_2;
            local_3e = (short)((((int)(short)this[0xf] - (int)STField<short>(this,0x36)) * 100) /
                              iVar3) + (short)param_5;
            local_3c = (short)((((int)STField<short>(this,0x3e) - (int)(short)this[0xe]) * 100) /
                              iVar3) + (short)param_4;
          }
        }
        else {
          local_40 = *(short *)(local_8 + uVar5 * 8);
          local_3e = *(short *)(local_8 + 2 + uVar5 * 8);
          local_3c = *(short *)(local_8 + 4 + uVar5 * 8);
        }
        local_38 = param_1;
        local_3a = *(undefined2 *)(local_8 + 6 + uVar5 * 8);
        g_playSystem_00802A38->vfunc_08(0x106,0,0,(short)local_60,0);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)(uVar2 + 1));
    }
    if (local_8 != 0) {
      FreeAndNull(&local_8);
    }
  }
  return 1;
}


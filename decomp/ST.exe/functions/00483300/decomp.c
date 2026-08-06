#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (8), none consume AL/AX, and every RET path defines full EAX; sites=004608B0 @ 00460E24
   -> MOV MOV EBX,EAX | 004608B0 @ 0046131C -> MOV MOV EBX,EAX | 004608B0 @ 00461653 -> MOV MOV
   EBX,EAX | 004608B0 @ 004618E8 -> MOV MOV EBX,EAX | 00471AC0 @ 00471FD0 -> MOV MOV EBX,EAX |
   00471AC0 @ 00472503 -> MOV MOV EBX,EAX | 00471AC0 @ 004727D1 -> MOV MOV EBX,EAX | 00471AC0 @
   00472A00 -> MOV MOV EBX,EAX */

int __fastcall FUN_00483300(int *param_1,undefined4 param_2)

{
  short sVar1;
  STGameObjC *this;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  short local_28;
  short sStack_26;
  undefined2 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c;
  undefined4 local_8;

  if (STField<int>(param_1,0x7e2) == 0) {
    if (STField<int>(param_1,0x7a2) != 0) goto LAB_00483342;
  }
  else if ((STField<int>(param_1,0x7a2) != 0) || (0x27 < STField<int>(param_1,0x72a))) {
LAB_00483342:
    this = STAllPlayersC::GetObjPtr
                     (g_allPlayers_007FA174,STField<char>(param_1,0x487),
                      STField<ushort>(param_1,0x48b),
                      STField<STAllPlayersC_GetObjPtr_param_3Enum>(param_1,0x483));
    thunk_FUN_00416270(this,&local_10,&local_14,(short *)&local_8);
    iVar2 = FUN_006acf0d((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43),
                         (int)STField<short>(param_1,0x45),(int)(short)local_10,
                         (int)(short)local_14,(int)(short)local_8);
    if ((short)param_1[0x205] < iVar2) {
      return (-(uint)(STField<int>(param_1,0x7e6) != 0) & 4) + 5;
    }
    iVar3 = this->vfunc_F8();
    if (((iVar3 == 0) || (iVar3 = this->vfunc_F0(), iVar3 == 0)) ||
       (iVar3 = (*this->vtable->vfunc_F4)(param_1[9]), iVar3 == 0)) {
      return 3;
    }
    sVar1 = STField<short>(param_1,0x45);
    uVar4 = (int)(short)local_8 - (int)sVar1;
    uVar6 = (int)uVar4 >> 0x1f;
    if (3 < (int)(((uVar4 ^ uVar6) - uVar6) * 10) / iVar2) {
      return ((short)local_8 <= sVar1) + 6;
    }
    /* ST_PSEUDO[return_width_artifact,raw_indirect_call]: candidate call-output artifact: verify return width, clobbers, or x87 state; expected typed vtable/callback call with explicit __thiscall receiver */
    sVar1 = (**(code **)(*param_1 + 0x10))
                      (STField<undefined2>(param_1,0x41),
                       CONCAT22(extraout_var,STField<undefined2>(param_1,0x43)),
                       CONCAT22(extraout_var,sVar1),local_10,local_14,local_8);
    local_18 = (int)sVar1;
    local_20 = 0;
    if (STField<char>(param_1,0x2b2) != '\0') {
      local_c = param_1 + 0xaa;
      do {
        puVar5 = (undefined4 *)
                 thunk_FUN_0041dc40(local_30,(short)*(undefined4 *)((int)local_c + -2),
                                    STField<ushort>(local_c,2),(short)local_18);
        sStack_26 = (short)((uint)*puVar5 >> 0x10);
        local_1c = STReplaceLowWord((uint32_t)(puVar5), (uint16_t)(STField<short>(param_1,0x45) + *(short *)(puVar5 + 1)));
        sVar1 = STField<short>(param_1,0x43) - sStack_26;
        sVar7 = STField<short>(param_1,0x41) + (short)*puVar5;
        sStack_26 = (short)*local_c;
        local_28 = 0;
        puVar5 = (undefined4 *)thunk_FUN_0041dc40(local_38,0,0,(short)local_18);
        local_28 = (short)*puVar5;
        sStack_26 = (short)((uint)*puVar5 >> 0x10);
        local_24 = *(undefined2 *)(puVar5 + 1);
        sVar8 = (short)local_10 + local_28;
        sVar9 = (short)local_14 - sStack_26;
        if (STField<int>(param_1,0x736) == 0) {
          iVar3 = STSprGameObjC::CheckRay
                            ((STSprGameObjC *)param_1,sVar7,sVar1,(short)local_1c,sVar8,sVar9,
                             (short)local_8,
                             STField<STSprGameObjC_CheckRay_param_7Enum>(param_1,0x79a),
                             nullptr,0);
        }
        else {
          iVar3 = STSprGameObjC::CheckRay
                            ((STSprGameObjC *)param_1,sVar7,sVar1,(short)local_1c,sVar8,sVar9,
                             (short)local_8,
                             STField<STSprGameObjC_CheckRay_param_7Enum>(param_1,0x79a),
                             nullptr,1);
        }
        if (iVar3 == 0) {
          return 8;
        }
        local_20 = local_20 + 1;
        local_c = (int *)((int)local_c + 6);
      } while (local_20 < (int)(uint)STField<byte>(param_1,0x2b2));
    }
    if (local_18 != (short)param_1[0x1b]) {
      return 9;
    }
    if (STField<int>(param_1,0x7e2) != 0) {
      if (STField<int>(param_1,0x7aa) < STField<int>(param_1,0x7a6)) {
        return ((STField<int>(param_1,0x72a) < 0x28) - 1 & 7) + 3;
      }
      return 0;
    }
    return (STField<int>(param_1,0x7a6) <= STField<int>(param_1,0x7aa)) - 1 & 3;
  }
  return 2;
}


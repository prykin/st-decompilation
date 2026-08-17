#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0065E9A0 -> 004162B0 @ 0065EAAE */

undefined4 __thiscall
FUN_0065e9a0(void *this,short *param_1,short *param_2,uint param_3,uint param_4,byte *param_5,
            undefined4 param_6,int param_7)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  short local_14 [2];
  void *local_10;
  undefined4 local_c;
  uint *local_8;

  psVar1 = param_2;
  local_c = 0;
  local_8 = nullptr;
  if ((g_allPlayers_007FA174 == nullptr) || (param_2 == nullptr)) {
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (psVar4 = param_1, 8 < (int)param_1)) {
    psVar4 = STField<short *>(this,0x97);
  }
  if (psVar4 == (short *)0x8) {
    psVar4 = (short *)(uint)DAT_0080874d;
  }
  if (psVar4 == (short *)0xff) {
    return 0xffffffff;
  }
  local_10 = this;
  uVar2 = thunk_FUN_0043e460((char)psVar4);
  if (uVar2 != 0) {
    local_8 = Library::DKW::LIB::MemAllocClear((uint)uVar2 * 0x2c);
    DAT_00811900 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((char)param_6 == '\b') {
      param_6 = STReplaceLowByte((uint32_t)(param_6), (uint8_t)((char)psVar4));
    }
    else if (((char)param_6 < '\0') || ('\b' < (char)param_6)) {
      param_6 = STReplaceLowByte((uint32_t)(param_6), (uint8_t)(0xff));
    }
    /* ST_CALLSITE[0065EA70]: CALL 0x004012f8; direct=004012F8 _EnumPlObj */
    _EnumPlObj(psVar4,param_3,param_4,param_5,(char)param_6,0,0,0,-1,-1,-1,thunk_FUN_0065e860,
               local_8,(undefined *)(~-(uint)(param_7 != 0) & 0x404935));
    if (DAT_00811900 != 0) {
      iVar3 = thunk_FUN_00423220((void *)((int)local_10 + 0x1c),(int *)local_8,DAT_00811900);
      if ((STFishC *)local_8[iVar3 * 0xb + 3] != nullptr) {
        /* ST_CALLSITE[0065EAAE]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0
                  ((STFishC *)local_8[iVar3 * 0xb + 3],(short *)&param_1,local_14,
                   (short *)((int)&param_2 + 2));
        *psVar1 = (short)param_1 + -1;
        psVar1[2] = 0;
        psVar1[1] = local_14[0] + -1;
        psVar1[3] = 3;
        psVar1[4] = 3;
        psVar1[5] = 5;
        thunk_FUN_006756d0(psVar1,psVar1 + 1,psVar1 + 3,psVar1 + 4);
        goto LAB_0065eaf3;
      }
    }
  }
  local_c = 0xffffffff;
LAB_0065eaf3:
  if (local_8 != nullptr) {
    FreeAndNull(&local_8);
  }
  return local_c;
}


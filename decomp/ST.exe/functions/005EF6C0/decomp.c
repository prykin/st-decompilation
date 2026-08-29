#include "../../pseudocode_runtime.h"


void __thiscall FUN_005ef6c0(void *this,int param_1)

{
  int iVar1;
  STBoatC *this_00;
  STBoatC *local_8;

  this_00 = nullptr;
  local_8 = this;
  if (STField<ushort>(this,0x2ab) != 0) {
    this_00 = (STBoatC *)
              /* ST_CALLSITE[005EF6E6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,STField<char>(this,0x2a3),
                         STField<ushort>(this,0x2ab),CASE_1);
    if ((this_00 != nullptr) && (this_00->field_0018 == STField<int>(this,0x2a7)))
    goto LAB_005ef720;
  }
  if (STField<RecoveredRecordView_005EFAE0_855D930D *>(this,0x2a7) !=
      nullptr) {

    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,
                       STField<RecoveredRecordView_005EFAE0_855D930D *>(this,0x2a7),
                       (int *)&local_8);
    if (iVar1 != -4) {
      this_00 = local_8;
    }
  }
LAB_005ef720:
  if ((this_00 != nullptr) && (this_00->field_0020 == 0x14)) {
    if (param_1 == 1) {
      /* ST_CALLSITE[005EF762]: CALL 0x0040164a; direct=0040164A STBoatC::ReadyForLoading */
      STBoatC::ReadyForLoading(this_00,STField<STFishC *>(this,0x18));
    }
    else {
      if (param_1 == 2) {
        /* ST_CALLSITE[005EF74F]: CALL 0x004054e3; direct=004054E3 STBoatC::NotReadyForLoading */
        STBoatC::NotReadyForLoading(this_00,STField<int>(this,0x18));
        return;
      }
      if (param_1 == 3) {
        /* ST_CALLSITE[005EF73C]: CALL 0x00403864; direct=00403864 STBoatC::CancelLoading */
        STBoatC::CancelLoading(this_00,STField<int>(this,0x18));
        return;
      }
    }
  }
  return;
}


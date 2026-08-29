#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00423c70(void *this,short param_1)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *this_00;
  uint index;
  uint uVar3;
  byte local_28 [16];
  uint local_18;
  ushort local_14;
  short local_12;
  uint local_10;
  uint local_8;
  uVar1 = *(uint *)(STField<int>(this,0x29) + 0xc);
  uVar2 = 0xffffffff;
  if ((uVar1 != 0) && (uVar3 = 0, uVar1 != 0)) {
    index = 0;
    while( true ) {
      DArrayGetElement(STField<DArrayTy *>(this,0x29),index,&local_8);
      if ((ushort)local_8 == param_1) break;
      uVar3 = uVar3 + 1;
      index = uVar3 & 0xffff;
      if (uVar1 <= index) {
        return 0xffffffff;
      }
    }
    /* ST_CALLSITE[00423CD3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    this_00 = STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,STField<char>(this,0x24),(ushort)local_8,CASE_1);
    /* ST_CALLSITE[00423CE1]: CALL 0x004033be; direct=004033BE STGameObjC::sub_00419C30 */
    STGameObjC::sub_00419C30(this_00,0xffff);
    local_8 = 0xffff;
    Library::DKW::TBL::DArrayPut(STField<DArrayTy *>(this,0x29),uVar3 & 0xffff,&local_8);
    STField<short>(this,0x27) = STField<short>(this,0x27) + -1;
    if (STField<undefined4 *>(this,0x1c) != nullptr) {
      local_18 = 0x5d96;
      local_14 = 1;
      local_12 = param_1;
      local_10 = this_00->field_0018;
      /* ST_CALLSITE[00423D2F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)*STField<undefined4 *>(this,0x1c))(local_28);
    }
    uVar2 = 0;
  }
  return uVar2;
}


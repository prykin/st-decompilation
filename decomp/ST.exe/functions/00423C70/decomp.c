#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00423c70(void *this,short param_1)

{
  uint uVar1;
  undefined4 uVar2;
  STGameObjC *this_00;
  uint index;
  uint uVar3;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined2 local_14;
  short local_12;
  undefined4 local_10;
  undefined4 local_8;

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
    thunk_FUN_00419c30(this_00,0xffff);
    local_8 = 0xffff;
    Library::DKW::TBL::DArrayPut(STField<DArrayTy *>(this,0x29),uVar3 & 0xffff,&local_8);
    STField<short>(this,0x27) = STField<short>(this,0x27) + -1;
    if (STField<undefined4 *>(this,0x1c) != nullptr) {
      local_18 = 0x5d96;
      local_14 = 1;
      local_12 = param_1;
      local_10 = this_00->field_0018;
      /* ST_CALLSITE[00423D2F]: CALL dword ptr [EDX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)*STField<undefined4 *>(this,0x1c))(local_28);
    }
    uVar2 = 0;
  }
  return uVar2;
}


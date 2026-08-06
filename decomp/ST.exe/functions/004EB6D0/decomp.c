#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004eb6d0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int uVar2;

  if (param_4 == 0) {
    return 0;
  }
  bVar1 = LookupRecordByte(STField<char>(this,0x24));
  if (bVar1 == 3) {
    if (param_2 == 0xdd) {
      if (param_1 == 2) {
        uVar3 = thunk_FUN_004e41c0(STField<int>(this,0x24));
        if ((int)uVar3 < param_3 * param_4) {
          return 0;
        }
        thunk_FUN_004d88f0(STField<char>(this,0x24),param_3);
        thunk_FUN_004e4330(STField<int>(this,0x24),param_3 * param_4);
      }
      else {
        if (param_1 != 3) {
          return 0;
        }
        iVar2 = thunk_FUN_004d89b0(STField<char>(this,0x24));
        if (iVar2 < param_3) {
          return 0;
        }
        thunk_FUN_004d8940(STField<char>(this,0x24),param_3);
        thunk_FUN_004e4230(STField<int>(this,0x24),param_3 * param_4);
      }
    }
    else {
      if (param_2 != 0xde) {
        return 0;
      }
      if (param_1 == 2) {
        uVar3 = thunk_FUN_004e41c0(STField<int>(this,0x24));
        if ((int)uVar3 < param_3 / param_4) {
          return 0;
        }
        thunk_FUN_004e4380(STField<int>(this,0x24),param_3);
        thunk_FUN_004e4330(STField<int>(this,0x24),param_3 / param_4);
      }
      else {
        if (param_1 != 3) {
          return 0;
        }
        iVar2 = thunk_FUN_004e4410(STField<byte *>(this,0x24));
        if (iVar2 < param_3) {
          return 0;
        }
        thunk_FUN_004e43c0(STField<int>(this,0x24),param_3);
        thunk_FUN_004e4230(STField<int>(this,0x24),param_3 / param_4);
      }
    }
    goto cf_common_exit_004EB94E;
  }
  if (param_2 == 0xdd) {
    if (param_1 == 2) {
      iVar2 = thunk_FUN_004d8870(STField<char>(this,0x24));
      if (iVar2 < param_3 / param_4) {
        return 0;
      }
      thunk_FUN_004d88f0(STField<char>(this,0x24),param_3);
      goto LAB_004eb93e;
    }
    if (param_1 != 3) {
      return 0;
    }
    iVar2 = thunk_FUN_004d89b0(STField<char>(this,0x24));
    if (iVar2 < param_3) {
      return 0;
    }
    thunk_FUN_004d8940(STField<char>(this,0x24),param_3);
  }
  else {
    if (param_2 != 0xde) {
      return 0;
    }
    if (param_1 == 2) {
      iVar2 = thunk_FUN_004d8870(STField<char>(this,0x24));
      if (iVar2 < param_3 / param_4) {
        return 0;
      }
      thunk_FUN_004d8a30(STField<char>(this,0x24),param_3);
LAB_004eb93e:
      thunk_FUN_004d8800(STField<char>(this,0x24),param_3 / param_4);
      goto cf_common_exit_004EB94E;
    }
    if (param_1 != 3) {
      return 0;
    }
    iVar2 = thunk_FUN_004d8af0(STField<char>(this,0x24));
    if (iVar2 < param_3) {
      return 0;
    }
    thunk_FUN_004d8a80(STField<char>(this,0x24),param_3);
  }
  thunk_FUN_004d87b0(STField<char>(this,0x24),param_3 / param_4);
cf_common_exit_004EB94E:
  thunk_FUN_004d78e0(STField<char>(this,0x24));
  if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)STField<uint>(this,0x24));
    uVar2 = LookupRecordByte(STField<char>(this,0x24));
    uVar2 = (int)(byte)uVar2;
    if (uVar2 == 1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(6,0x6e);
    }
    else {
      if (uVar2 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(6,0x6f);
        return 0;
      }
      if (uVar2 == 3) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(6,0x70);
        return 0;
      }
    }
  }
  return 0;
}


#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004e96c0(void *this,int *param_1)

{
  int iVar1;
  int uVar2;
  int local_EAX_378;
  undefined4 uVar3;

  if (STField<int *>(this,0x4d8) != param_1) {
    return 0;
  }
  if (STField<int>(this,0x4e0) == 0) {
    return 0;
  }
  thunk_FUN_004d0a80(DAT_00800bcc,STField<int>(this,0x4e4),STField<int>(this,0x4e8),
                     STField<int>(this,0x4ec));
  STField<undefined4>(this,0x4e0) = 0;
  iVar1 = STPlaySystemC::sub_006E62D0
                    (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x4d8),
                     (int *)&param_1);
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    if ((iVar1 < 1) || (iVar1 = (**(code **)(*param_1 + 0x2c))(), 0x28 < iVar1)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*param_1 + 0x2c))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      if ((iVar1 < 0x32) || (iVar1 = (**(code **)(*param_1 + 0x2c))(), 0x73 < iVar1)) {
        iVar1 = 100;
      }
      else {
        uVar2 = LookupRecordByte((char)param_1[9]);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar1 = (**(code **)(*param_1 + 0x2c))();
        iVar1 = *(int *)(&DAT_007e37b0 + ((uint)(byte)uVar2 + iVar1 * 3) * 4);
      }
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*param_1 + 0x2c))();
      iVar1 = *(int *)(&DAT_007e0d9c + iVar1 * 4);
    }
    iVar1 = STField<int>(this,0x4d0) + (iVar1 * -100) / 100;
    STField<int>(this,0x4d0) = iVar1;
    if (iVar1 < 0) {
      STField<undefined4>(this,0x4d0) = 0;
    }
  }
  if (STField<int>(this,0x4f0) != 0) {
    if (DAT_00811798 == nullptr) {
      if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
        local_EAX_378 = LookupRecordByte(STField<char>(this,0x23d));
        local_EAX_378 = (int)(byte)local_EAX_378;
        if (local_EAX_378 == 1) {
          iVar1 = *(int *)this;
          uVar3 = 0x218;
        }
        else {
          if (local_EAX_378 == 2) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)this + 0x90))(4,0x2de);
            goto cf_common_exit_004E987A;
          }
          if (local_EAX_378 != 3) goto cf_common_exit_004E987A;
          iVar1 = *(int *)this;
          uVar3 = 0x405;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar1 + 0x90))(4,uVar3);
      }
    }
    else {
      thunk_FUN_00620670(DAT_00811798,STField<int>(this,0x5b0),STField<int>(this,0x5b4),
                         STField<uint>(this,0x24));
    }
  }
cf_common_exit_004E987A:
  thunk_FUN_004ea6e0(STField<uint>(this,0x24),STField<int>(this,0x4e4),
                     STField<int>(this,0x4e8),STField<undefined4>(this,0x4ec));
  return 0;
}


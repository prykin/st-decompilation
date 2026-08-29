#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004e96c0(void *this,int *param_1)

{
  int iVar1_mg0;
  int iVar1;
  int uVar2;
  int local_EAX_378;
  uint uVar3;
  if (STField<int *>(this,0x4d8) != param_1) {
    return 0;
  }
  if (STField<int>(this,0x4e0) == 0) {
    return 0;
  }
  /* ST_CALLSITE[004E9700]: CALL 0x00401dd4; direct=00401DD4 TLOFakeTy::sub_004D0A80 */
  TLOFakeTy::sub_004D0A80
            (g_tLOFake_00800BCC,STField<int>(this,0x4e4),STField<int>(this,0x4e8),
             STField<int>(this,0x4ec));
  STField<undefined4>(this,0x4e0) = 0;

  iVar1_mg0 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         STField<RecoveredRecordView_005EFAE0_855D930D *>(this,0x4d8),
                         (int *)&param_1);
  if (iVar1_mg0 == 0) {
    /* ST_CALLSITE[004E9732]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x2C);
    /* ST_CALLSITE[004E973F]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    if ((iVar1 < 1) || (iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x2C), 0x28 < iVar1)) {
      /* ST_CALLSITE[004E975D]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x2C);
      /* ST_CALLSITE[004E976A]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      if ((iVar1 < 0x32) || (iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x2C), 0x73 < iVar1)) {
        iVar1 = 100;
      }
      else {
        /* ST_CALLSITE[004E9780]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        uVar2 = LookupRecordByte((char)param_1[9]);
        /* ST_CALLSITE[004E9792]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
        iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x2C);
        iVar1 = *(int *)(&DAT_007e37b0 + ((uint)(byte)uVar2 + iVar1 * 3) * 4);
      }
    }
    else {
      /* ST_CALLSITE[004E974C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x2C);
      iVar1 = *(int *)(&DAT_007e0d9c + iVar1 * 4);
    }
    iVar1 = STField<int>(this,0x4d0) + (iVar1 * -100) / 100;
    STField<int>(this,0x4d0) = iVar1;
    if (iVar1 < 0) {
      STField<undefined4>(this,0x4d0) = 0;
    }
  }
  if (STField<int>(this,0x4f0) != 0) {
    if (g_sndUnderAttMeneg_00811798 == nullptr) {
      if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
        /* ST_CALLSITE[004E983A]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        local_EAX_378 = LookupRecordByte(STField<char>(this,0x23d));
        local_EAX_378 = (int)(byte)local_EAX_378;
        if (local_EAX_378 == 1) {
          iVar1 = *(int *)this;
          uVar3 = 0x218;
        }
        else {
          if (local_EAX_378 == 2) {
            /* ST_CALLSITE[004E9861]: CALL dword ptr [EAX + 0x90] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)this + 0x90))(4,0x2de);
            goto cf_common_exit_004E987A;
          }
          if (local_EAX_378 != 3) goto cf_common_exit_004E987A;
          iVar1 = *(int *)this;
          uVar3 = 0x405;
        }
        /* ST_CALLSITE[004E9874]: CALL dword ptr [EDX + 0x90]; [STIndirectCallsiteApplier] exact slot 0x90; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4 */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar1 + 0x90))(4,uVar3);
      }
    }
    else {
      /* ST_CALLSITE[004E9814]: CALL 0x0040321a; direct=0040321A SndUnderAttMenegC::sub_00620670 */
      SndUnderAttMenegC::sub_00620670
                (g_sndUnderAttMeneg_00811798,STField<int>(this,0x5b0),STField<int>(this,0x5b4)
                 ,STField<uint>(this,0x24));
    }
  }
cf_common_exit_004E987A:
  thunk_FUN_004ea6e0(STField<uint>(this,0x24),STField<int>(this,0x4e4),
                     STField<int>(this,0x4e8),STField<undefined4>(this,0x4ec));
  return 0;
}


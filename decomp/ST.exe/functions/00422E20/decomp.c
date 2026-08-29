#include "../../pseudocode_runtime.h"


void __thiscall FUN_00422e20(void *this,byte param_1)

{
  STGameObjC *this_00;
  int iVar1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_02;
  uint uVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_03;
  Global_sub_0043FC50_param_1Enum GVar3;

  /* ST_CALLSITE[00422E29]: CALL dword ptr [EAX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  this_00 = (STGameObjC *)(**(code **)(*(int *)this + 4))();
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uVar2 = extraout_ECX;
  if (((STField<int>(this,0x20) != 0x14) ||
      /* ST_CALLSITE[00422E38]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      (iVar1 = STGameObjC::sub_0045FF10(this_00), uVar2 = extraout_ECX_00, iVar1 != 0x14)) ||
     (this_00->field_05C0 != CASE_3)) {
    if (((param_1 & 1) != 0) && ((STField<byte>(this,0x1d1) & 1) == 0)) {
      /* ST_CALLSITE[00422E66]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
      sub_0041C5A0(this);
      STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 1;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar2 = extraout_ECX_01;
    }
    if (((param_1 & 2) != 0) && ((STField<uint>(this,0x1d1) & 2) == 0)) {
      STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 2;
      if (STField<int>(this,0x20) == 0x14) {
        iVar1 = 0;
        do {
          /* ST_CALLSITE[00422EAB]: CALL 0x004024e1; direct=004024E1 STAllPlayersC::sub_0042C300 */
          STAllPlayersC::sub_0042C300
                    (g_allPlayers_007FA174,DAT_0080874d,0,iVar1,STField<char>(this,0x24),
                     STReplaceLowWord((uint32_t)(uVar2), (uint16_t)(STField<undefined2>(this,0x32))));
          iVar1 = iVar1 + 1;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar2 = extraout_ECX_02;
        } while (iVar1 < 5);
      }
      else {
        iVar1 = 0;
        do {
          /* ST_CALLSITE[00422ED1]: CALL 0x004024e1; direct=004024E1 STAllPlayersC::sub_0042C300 */
          STAllPlayersC::sub_0042C300
                    (g_allPlayers_007FA174,DAT_0080874d,1,iVar1,STField<char>(this,0x24),
                     STReplaceLowWord((uint32_t)(uVar2), (uint16_t)(STField<undefined2>(this,0x32))));
          iVar1 = iVar1 + 1;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar2 = extraout_ECX_03;
        } while (iVar1 < 5);
      }
      /* ST_CALLSITE[00422EEF]: CALL 0x00403643; direct=00403643 STAllPlayersC::DelObjFromSaveTmps */
      STAllPlayersC::DelObjFromSaveTmps
                (g_allPlayers_007FA174,STField<int>(this,0x20),STField<char>(this,0x24),
                 STField<short>(this,0x32));
    }
    if ((((param_1 & 4) != 0) && ((STField<uint>(this,0x1d1) & 4) == 0)) &&
       (STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 4,
       STField<int>(this,0x21d) == 1)) {
      if (STField<int>(this,0x20) == 0x14) {
        thunk_FUN_0043fc50(CASE_1,0);
        GVar3 = CASE_2;
      }
      else {
        thunk_FUN_0043fc50(CASE_4,0);
        GVar3 = CASE_5;
      }
      thunk_FUN_0043fc50(GVar3,0);
    }
    if (((param_1 & 8) != 0) && ((STField<uint>(this,0x1d1) & 8) == 0)) {
      STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 8;
    }
    if (((param_1 & 0x10) != 0) && ((STField<uint>(this,0x1d1) & 0x10) == 0)) {
      STField<uint>(this,0x1d1) = STField<uint>(this,0x1d1) | 0x10;
    }
  }
  return;
}


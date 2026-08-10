#include "../../pseudocode_runtime.h"


void __thiscall FUN_00422e20(void *this,byte param_1)

{
  STGameObjC *objPtr;
  int iVar1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_02;
  undefined4 uVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_03;
  Global_sub_0043FC50_param_1Enum GVar3;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  objPtr = (STGameObjC *)(**(code **)(*(int *)this + 4))();
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uVar2 = extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((STField<int>(this,0x20) != 0x14) ||
      (iVar1 = thunk_FUN_0045ff10(objPtr), uVar2 = extraout_ECX_00, iVar1 != 0x14)) ||
     (objPtr->field_05C0 != 3)) {
    if (((param_1 & 1) != 0) && ((STField<byte>(this,0x1d1) & 1) == 0)) {
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
          thunk_FUN_0042c300(DAT_0080874d,0,iVar1,STField<char>(this,0x24),
                             STReplaceLowWord((uint32_t)(uVar2), (uint16_t)(STField<undefined2>(this,0x32))));
          iVar1 = iVar1 + 1;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar2 = extraout_ECX_02;
        } while (iVar1 < 5);
      }
      else {
        iVar1 = 0;
        do {
          thunk_FUN_0042c300(DAT_0080874d,1,iVar1,STField<char>(this,0x24),
                             STReplaceLowWord((uint32_t)(uVar2), (uint16_t)(STField<undefined2>(this,0x32))));
          iVar1 = iVar1 + 1;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar2 = extraout_ECX_03;
        } while (iVar1 < 5);
      }
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


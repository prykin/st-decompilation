#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004d7040(RecoveredRecord_004D7040_D83D570C *param_1)

{
  AnonNested_RecoveredRecord_004D7040_D83D570C_0000_087ACD08 *pAVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar2_mg4;
  int iVar2_mg5;
  int iVar1;
  longlong lVar6;
  int local_8;


  iVar2 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x24,0x4e);
  if (3 < iVar2) {
    iVar2 = 3;
  }
  /* ST_CALLSITE[004D7069]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar3 = (*STField<code *>(param_1->field_0000,0x002C))();
  /* ST_CALLSITE[004D7075]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  if ((iVar3 < 0x32) || (iVar3 = (*STField<code *>(param_1->field_0000,0x002C))(), 0x73 < iVar3)) {
    /* ST_CALLSITE[004D70BA]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar3 = (*STField<code *>(param_1->field_0000,0x002C))();
    if (iVar3 < 1) {
      return 0;
    }
    /* ST_CALLSITE[004D70CA]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar3 = (*STField<code *>(param_1->field_0000,0x002C))();
    if (0x28 < iVar3) {
      return 0;
    }
    /* ST_CALLSITE[004D70DA]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar3 = (*STField<code *>(param_1->field_0000,0x002C))();
    local_8 = *(int *)(&DAT_007e0a90 + (iVar2 + iVar3 * 4) * 4);
    /* ST_CALLSITE[004D70FF]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar2 = (*STField<code *>(param_1->field_0000,0x002C))();
    iVar2 = *(int *)(&DAT_007e06dc + iVar2 * 4);
  }
  else {
    /* ST_CALLSITE[004D7081]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar3 = (*STField<code *>(param_1->field_0000,0x002C))();
    local_8 = *(int *)(&DAT_007e3518 + (iVar2 + -200 + iVar3 * 4) * 4);
    /* ST_CALLSITE[004D70AA]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    iVar2 = (*STField<code *>(param_1->field_0000,0x002C))();
    iVar2 = *(int *)(&DAT_007e27ec + iVar2 * 4);
  }
  local_8 = local_8 / 0x5dc;
  if ((local_8 != 0) && (iVar2 != 0)) {
    /* ST_CALLSITE[004D7121]: CALL dword ptr [EAX + 0xc4]; [STIndirectCallsiteApplier] exact slot 0xC4; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
    iVar3 = (*STField<code *>(param_1->field_0000,0x00C4))();
    /* ST_CALLSITE[004D7135]: CALL dword ptr [EDX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    if ((iVar3 != 0) && (iVar4 = (*STField<code *>(param_1->field_0000,0x007C))(), iVar4 < 100)) {

      iVar4 = thunk_FUN_004e60d0(*(int *)&param_1->field_0x24,0x66);
      if (iVar4 != 0) {
        iVar2 = iVar2 + (uint)(iVar2 * 10) / 100;
      }
      lVar6 = FUN_006b12cc(100);
      iVar4 = (int)lVar6;
      lVar6 = FUN_006b12cc(iVar3);
      iVar5 = (int)lVar6;
      lVar6 = FUN_006b12cc(iVar2);

      iVar2_mg4 = FUN_006b12bc((int)lVar6,iVar5,iVar4);
      lVar6 = FUN_006b12cc(0x5dc);

      iVar2_mg5 = FUN_006b12a8((int)lVar6,iVar2_mg4);

      iVar1 = FUN_006b1280(iVar2_mg5);
      if ((uint)(param_1->field_0119 + iVar1) < g_playSystem_00802A38->field_00E4) {
        pAVar1 = param_1->field_0000;
        param_1->field_0119 = g_playSystem_00802A38->field_00E4;
        /* ST_CALLSITE[004D71CD]: CALL dword ptr [EDI + 0x78]; [STIndirectCallsiteApplier] exact slot 0x78; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
        iVar2 = (*STField<code *>(pAVar1,0x78))();
        /* ST_CALLSITE[004D71D8]: CALL dword ptr [EDI + 0x80]; [STIndirectCallsiteApplier] exact slot 0x80; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
        (*STField<code *>(pAVar1,0x80))(iVar2 + local_8);
        /* ST_CALLSITE[004D71E4]: CALL dword ptr [EAX + 0xc8]; [STIndirectCallsiteApplier] exact slot 0xC8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
        (*STField<code *>(param_1->field_0000,0x00C8))(iVar3 + -1);
      }
    }
    return 0;
  }
  return 0;
}


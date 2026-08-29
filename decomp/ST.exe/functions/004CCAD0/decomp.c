#include "../../pseudocode_runtime.h"


void __fastcall FUN_004ccad0(RecoveredRecordView_004CCAD0_7620F668 *param_1)

{
  uint uVar1;
  thunk_FUN_00423160();
  uVar1 = 0;
  if (param_1->field_0361 != 0) {
    /* ST_CALLSITE[004CCAE6]: CALL 0x0040142e; direct=0040142E thunk_FUN_004c91a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
    uVar1 = thunk_FUN_004c91a0((TLOBaseTy *)param_1);
  }
  param_1->field_0265 = param_1->field_0265 & 0xfffffffd;
  param_1->field_026D = 0;
  if (param_1->field_05AC == 0x50) {

    thunk_FUN_004b70d0(g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar1), (uint8_t)(param_1->field_0x24)),
                       0x28);
  }
  if ((param_1->field_05AC == 0x6f) || (param_1->field_05AC == 0x73)) {

    thunk_FUN_004eccc0((int *)param_1);
  }
  if (param_1->field_05AC == 0x36) {
    thunk_FUN_0041cf50((RecoveredRecordView_0041CF50_A204ECAD *)param_1);
  }
  if ((param_1->field_05AC == 0x3d) || (param_1->field_05AC == 0x5d)) {
    if (param_1->field_04E0 != 0) {
      thunk_FUN_0041d100((RecoveredRecordView_0041D100_F8DD70B8 *)param_1);
      param_1->field_04E0 = 0;
    }
    if (param_1->field_04E4 != 0) {
      /* ST_CALLSITE[004CCB98]: CALL 0x0040216c; direct=0040216C STMineSetC::sub_0041D2B0 */
      STMineSetC::sub_0041D2B0((STMineSetC *)param_1);
      param_1->field_04E4 = 0;
    }
  }
  /* ST_CALLSITE[004CCBA9]: CALL 0x00402d92; direct=00402D92 TLOBaseTy::sub_004B9A40 */
  TLOBaseTy::sub_004B9A40((TLOBaseTy *)param_1);
  /* ST_CALLSITE[004CCBB0]: CALL 0x00403404; direct=00403404 STSprGameObjC::sub_0041F970 */
  STSprGameObjC::sub_0041F970((STSprGameObjC *)param_1);
  /* ST_CALLSITE[004CCBBC]: CALL 0x0040207c; direct=0040207C TLOBaseTy::sub_00419D30 */
  TLOBaseTy::sub_00419D30((TLOBaseTy *)param_1,0xfe);
  return;
}


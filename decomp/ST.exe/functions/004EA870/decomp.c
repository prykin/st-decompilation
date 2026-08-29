#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004ea870(TLOBaseTy *param_1)

{
  int iVar1;
  dword dVar2;
  DArrayOf_STGameObjCPtr *array;
  uint index;
  TLOBaseTy *local_8;

  if ((param_1->field_04D0 == CASE_0) &&
     (param_1->field_04E0[3] + 0x19 <= g_playSystem_00802A38->field_00E4)) {
    param_1->field_04E0[3] = g_playSystem_00802A38->field_00E4;
    local_8 = param_1;
    /* ST_CALLSITE[004EA8B4]: CALL 0x00405ace; direct=00405ACE TLOBaseTy::sub_004C7860 */
    iVar1 = TLOBaseTy::sub_004C7860(param_1,3,0,1,1,1);
    if ((iVar1 != 0) &&

       ((iVar1 = thunk_FUN_004c7c20(param_1), iVar1 != 0 &&
        (g_packedRecords_A62x8[(int)param_1->field_0024].field1600_0x7d6 != 0)))) {
      array = g_packedRecords_A62x8[(int)param_1->field_0024].field3_0x9;
      index = 0;
      if (array->count != 0) {

        while (((DArrayGetElement((DArrayTy *)array,index,&local_8), local_8 == nullptr ||
                /* ST_CALLSITE[004EA91E]: CALL dword ptr [EAX + 0x2c] */
                (dVar2 = local_8->vfunc_2C(), dVar2 != 0x44)) ||
               (local_8->field_04D0 == CASE_0))) {
          index = index + 1;
          array = g_packedRecords_A62x8[(int)param_1->field_0024].field3_0x9;
          if (array->count <= index) {
            return 0;
          }
        }
        /* ST_CALLSITE[004EA965]: CALL 0x00405ace; direct=00405ACE TLOBaseTy::sub_004C7860 */
        iVar1 = TLOBaseTy::sub_004C7860(param_1,3,0,1,1,1);

        if ((iVar1 != 0) && (iVar1 = thunk_FUN_004c7c20(param_1), iVar1 != 0)) {

          TLOBaseTy::thunk_FUN_004c7cc0(param_1,3,0,1,0,0xffffffff,0,0xff,nullptr);
          param_1->field_04D0 = CASE_2;
          /* ST_CALLSITE[004EA9A7]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
          TLOBaseTy::RotateSpr(param_1,0);
        }
        thunk_FUN_004dea40((RecoveredRecordView_004DEA40_A555DAF1 *)local_8);
        return 0;
      }
    }
  }
  return 0;
}


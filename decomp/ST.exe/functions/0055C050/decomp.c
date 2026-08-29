#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 0055C050 returns used as parameter 4 of DibPut @ 005A8830 */

RecoveredRecordView_006B84D0_87AF9D9B * __thiscall
FUN_0055c050(void *this,RecoveredRecord_0055C050_16147770 *param_1)

{
  int iVar1;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar2;
  int iVar3;
  int iVar4;

  if (STField<int>(this,0x40) == 0) {
    thunk_FUN_0055bf20(this,STField<undefined4>(this,0x3c));
    if (STField<int>(this,0x40) == 0) {
      return nullptr;
    }
  }
  iVar4 = 0xe;
  iVar3 = 0x1c;
  /* ST_CALLSITE[0055C07E]: CALL dword ptr [0x0085c040] */
  iVar1 = CFsgsConnection::GetUserIconIndex(this,&param_1->field_0x10,param_1->field_0025);
  /* ST_CALLSITE[0055C0A0]: CALL 0x006b55f0; direct=006B55F0 Library::DKW::WGR::FUN_006b55f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredSourceFamily_dibcopy;/int;/int;/int;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;/int;/int;/int;/int;/int */
  pRVar2 = Library::DKW::WGR::FUN_006b55f0
                     (nullptr,0,0,0,
                      STField<RecoveredRecordView_006B84D0_87AF9D9B *>(this,0x40),0,0,iVar1 * 0xe,
                      iVar3,iVar4);
  return pRVar2;
}


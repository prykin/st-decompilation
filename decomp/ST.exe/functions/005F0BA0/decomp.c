#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005EAF10 @ 005EB3B3 -> read as EAX on
   every CFG path | 005FB640 @ 005FBB14 -> read as EAX on every CFG path */

int __fastcall FUN_005f0ba0(RecoveredRecordView_005F0BA0_EE8C5420 *param_1)

{
  byte *this;
  byte bVar1;
  int iVar2;
  int iVar3;

  if (g_playSystem_00802A38->field_00E4 % 5 == 0) {
    this = &param_1->field_0x1d5;
    if (param_1->field_02B5 == 1) {
      /* ST_CALLSITE[005F0BEB]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)this,PTR_00806724->entries[param_1->field_02D2],
                 (int)PTR_00806724->field_002C);
      iVar2 = param_1->field_02D2 + -1;
      param_1->field_02D2 = iVar2;
      if (iVar2 == (int)PTR_00806724->entryCount / 2) {
        bVar1 = thunk_FUN_004ad610((RecoveredRecord_004AD610_D99117A2 *)this);
        if (bVar1 != 0) {
          thunk_FUN_005ef5f0((RecoveredRecord_005EF5F0_8C51B92F *)param_1);
          /* ST_CALLSITE[005F0C27]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=structural-presentation; signature=__thiscall;/void;pointer:/void */
          STStructuralVirtualCall<void>(this, 0x0);
        }
      }
      if ((int)param_1->field_02D2 < 0) {
        param_1->field_02D2 = 0;
        /* ST_CALLSITE[005F0C4B]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        STT3DSprC::sub_004ACE30((STT3DSprC *)this,0,(int)PTR_00806724->field_002C);
        return 1;
      }
    }
    else {
      /* ST_CALLSITE[005F0C59]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
      STT3DSprC::sub_004ACE30
                ((STT3DSprC *)this,PTR_00806724->entries[param_1->field_02D2],
                 (int)PTR_00806724->field_002C);
      iVar2 = param_1->field_02D2;
      iVar3 = iVar2 + 1;
      param_1->field_02D2 = iVar3;
      if (PTR_00806724->entryCount <= iVar3) {
        param_1->field_02D2 = iVar2;
        /* ST_CALLSITE[005F0C83]: CALL 0x00403d0f; direct=00403D0F STT3DSprC::sub_004AD430 */
        STT3DSprC::sub_004AD430((STT3DSprC *)this);
        return 1;
      }
      if (iVar3 == (int)PTR_00806724->entryCount / 2) {
        thunk_FUN_004ad5e0((STT3DSprC *)this);
      }
    }
  }
  return 0;
}


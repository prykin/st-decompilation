#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005f9e40(RecoveredRecordView_005F9E40_46F0E2B5 *param_1)

{
  AnonNested_AnonShape_005F9E40_7E333F34_02E6_E59503F8 *pAVar1;
  STT3DSprC *this;

  pAVar1 = param_1->field_02E6;
  if (pAVar1 != nullptr) {
    this = *(STT3DSprC **)pAVar1;
    if (this != nullptr) {
      /* ST_CALLSITE[005F9E60]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase(this,'\x0e',*(uint *)(pAVar1 + 1));
      /* ST_CALLSITE[005F9E69]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      STT3DSprC::ShowCurFase(this,'\x0e');
      pAVar1 = param_1->field_02E6;
      /* ST_CALLSITE[005F9EB5]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      STT3DSprC::sub_004AD3C0
                (this,(float)(int)pAVar1->field_0014 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)pAVar1->field_0018 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)pAVar1->field_001C * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      return;
    }
    if (-1 < (int)*(uint *)&pAVar1->field_0x4) {
      ST3DSMAPContext::sub_006EA270
                (param_1->field_0211,*(uint *)&pAVar1->field_0x4,0,*(uint *)(pAVar1 + 1));
      pAVar1 = param_1->field_02E6;
      Library::Ourlib::ST3DSMAP::SprMove
                (param_1->field_0211,*(uint *)&pAVar1->field_0x4,
                 (float)(int)pAVar1->field_0014 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)pAVar1->field_0018 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)pAVar1->field_001C * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    }
  }
  return;
}


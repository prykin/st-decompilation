#include "../../pseudocode_runtime.h"


void __fastcall FUN_00640240(RecoveredRecordView_00640240_E5896BE3 *param_1)

{
  AnonNested_AnonShape_00640240_D1DBDD81_037F_89D39015 *pAVar1;

  if (param_1->field_037F != nullptr) {

    ST3DSMAPContext::sub_006E8660(param_1->field_0211,(int *)param_1->field_037F,0,0,0,0,0,0,0);
    Library::Ourlib::ST3DSMAP::SprSetShadow
              (param_1->field_0211,param_1->field_037F->field_0000,0,0x640320,
               (uint)param_1->field_037F);
    Library::Ourlib::ST3DSMAP::FUN_006e9720
              (param_1->field_0211,param_1->field_037F->field_0000,
               (uint)(PTR_008032b8 + (uint)(byte)param_1->field_037F->field_0015 * 0x80));
    pAVar1 = param_1->field_037F;
    Library::Ourlib::ST3DSMAP::SprMove
              (param_1->field_0211,pAVar1->field_0000,(float)pAVar1->field_0004,
               (float)pAVar1->field_0008,49.829998);

    Library::Ourlib::ST3DSMAP::SprShow(param_1->field_0211,param_1->field_037F->field_0000,0);
  }
  return;
}


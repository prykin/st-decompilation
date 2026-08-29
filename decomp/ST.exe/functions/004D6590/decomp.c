#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00798C70
   Entries: 00403C3D
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=868/884; unique_owner_for_target */

undefined4 __thiscall
TLOEmbryoTy::vfunc_E0
          (TLOEmbryoTy *this,float param_1,short *param_2,short *param_3,short *param_4,
          undefined4 *param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  longlong lVar9;

  psVar7 = param_4;
  psVar6 = param_3;
  iVar2 = this->field_0265;
  iVar3 = this->field_0261;
  iVar8 = (int)param_1 * 0xc;
  param_1 = (float)((int)((2 - (uint)(this->field_002C != 1)) * 0xc9) / 2);
  *param_2 = *(short *)(iVar8 + this->field_0360) + (short)this->field_025D * 0xc9 +
             SUB42(param_1,0);
  *param_3 = *(short *)(iVar8 + 4 + this->field_0360) + (short)iVar3 * 0xc9 + SUB42(param_1,0);
  *param_4 = *(short *)(iVar8 + 8 + this->field_0360) + (short)iVar2 * 200;
  *param_5 = 0;
  ST3DSMAPContext::sub_006DD530(this->field_0211,&param_1,(float *)&param_3,(float *)&param_4);
  lVar9 = Library::MSVCRT::__ftol();
  param_1 = (float)(short)lVar9;
  lVar9 = Library::MSVCRT::__ftol();
  param_1 = (float)(short)lVar9;
  lVar9 = Library::MSVCRT::__ftol();
  fVar4 = (float)(int)this->field_0043 - param_1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fVar1 = (float)((float10)(int)this->field_0041 - extraout_ST0);
  fVar5 = (float)(int)*psVar7 - (float)(short)lVar9;
  fVar5 = fVar5 * fVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((float10)(int)*param_2 - extraout_ST0) * ((float10)(int)*param_2 - extraout_ST0) +
      ((float10)(int)*psVar6 - (float10)param_1) * ((float10)(int)*psVar6 - (float10)param_1) +
      (float10)fVar5 <
      (float10)fVar4 * (float10)fVar4 + (float10)fVar1 * (float10)fVar1 + (float10)fVar5) {
    *param_5 = 0;
    return 0;
  }
  *param_5 = 1;
  return 0;
}


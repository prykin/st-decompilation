#include "../../pseudocode_runtime.h"


/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 00790AA0
   Entries: 004015AA
   Slots: 0xE0
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_physical_vtable_owner_and_slot;
   receiver_extent=1535/1571; unique_owner_for_target */

undefined4 __thiscall
TLOBaseTy::vfunc_E0(TLOBaseTy *this,float param_1,short *param_2,short *param_3,short *param_4,
                   undefined4 *param_5)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  longlong lVar8;

  psVar6 = param_3;
  psVar5 = param_2;
  iVar7 = (int)param_1 * 0xc;
  sVar2 = (short)((int)((2 - (uint)(*(int *)(&DAT_00791e30 + this->field_0235 * 4) != 1)) * 0xc9) /
                 2);
  *param_2 = *(short *)(iVar7 + this->field_05FB) + (short)this->field_05B0 * 0xc9 + sVar2;
  *param_3 = *(short *)(iVar7 + 4 + this->field_05FB) + (short)this->field_05B4 * 0xc9 + sVar2;
  *param_4 = *(short *)(iVar7 + 8 + this->field_05FB) + (short)this->field_05B8 * 200;
  *param_5 = 0;
  ST3DSMAPContext::sub_006DD530(this->field_0211,&param_1,(float *)&param_2,(float *)&param_3);
  lVar8 = Library::MSVCRT::__ftol();
  param_1 = (float)(short)lVar8;
  lVar8 = Library::MSVCRT::__ftol();
  param_1 = (float)(short)lVar8;
  lVar8 = Library::MSVCRT::__ftol();
  fVar3 = (float)(int)this->field_0043 - param_1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fVar1 = (float)((float10)(int)this->field_0041 - extraout_ST0);
  fVar4 = (float)(int)*param_4 - (float)(short)lVar8;
  fVar4 = fVar4 * fVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((float10)(int)*psVar5 - extraout_ST0) * ((float10)(int)*psVar5 - extraout_ST0) +
      ((float10)(int)*psVar6 - (float10)param_1) * ((float10)(int)*psVar6 - (float10)param_1) +
      (float10)fVar4 <
      (float10)fVar3 * (float10)fVar3 + (float10)fVar1 * (float10)fVar1 + (float10)fVar4) {
    *param_5 = 0;
    return 0;
  }
  *param_5 = 1;
  return 0;
}


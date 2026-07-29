#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STManRuinC::sub_00631010(STManRuinC *this)

{
  STManRuinC_field_0038DArray *pSVar1;
  short *psVar2;
  STManRuinC_field_0038Element *element_0038;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_18;
  undefined4 local_c;
  uint local_8;

  pSVar1 = this->field_0038;
  if (pSVar1 != (STManRuinC_field_0038DArray *)0x0) {
    local_8 = pSVar1->count - 1;
    if (-1 < (int)local_8) {
      if (local_8 < pSVar1->count) {
        element_0038 = DArrayAt<STManRuinC_field_0038Element>(pSVar1, local_8);
      }
      else {
        element_0038 = (STManRuinC_field_0038Element *)0x0;
      }
      if (element_0038->field_000C + 0x2eeU < g_playSystem_00802A38->field_00E4) {
        puVar3 = element_0038->field_0010;
        psVar6 = &local_20;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)psVar6 = *(undefined4 *)element_0038;
          psVar2 = psVar2 + 2;
          psVar6 = psVar6 + 2;
        }
        ST3DSMAPContext::sub_006E91D0(g_sT3DSMAPContext_00807598,(int *)puVar3);
        iVar5 = sub_00630AC0(this,local_8);
        if (iVar5 != 0) {
          sub_00630BB0(this,local_20,local_1e,local_1c,local_18,(int)local_1a,local_c);
          this->field_0044 = 1;
          iVar5 = thunk_FUN_00630ff0();
          this->field_0048 = iVar5;
          if (iVar5 < 1) {
            this->field_0044 = 1;
          }
          else {
            puVar3 = sub_00630C50(this,this->field_0040,this->field_004C,1,1,this->field_0050);
            if (puVar3 != (ushort *)0x0) {
              this->field_0044 = 2;
            }
          }
          uVar4 = sub_00631880(this,&this->field_0040,this->field_0061);
          if (((uVar4 == 0) && (this->field_0048 != 0)) && (this->field_0061 != 0)) {
            Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this->field_0061);
          }
          this->field_0061 = 0xffffffff;
        }
      }
    }
  }
  return;
}


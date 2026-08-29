#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=16; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
STManRuinC::sub_006308F0
          (STManRuinC *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6)

{
  byte bVar1;
  byte *pbVar2;
  STManRuinC_field_0038DArray *array;
  DArrayTy *pSVar3_mg0;
  int iVar3;
  int iVar4;
  uint index;
  short *psVar5;
  short local_20;
  short local_1e;
  short local_1c;
  ushort local_1a;
  uint local_18;
  uint local_14;
  int local_c;
  int local_8;

  index = 0xffffffff;
  iVar4 = (g_worldGrid.sizeX * param_3 + param_2) * (int)g_worldGrid.sizeY + param_1;
  local_8 = 0;
  if (param_4 == 1) {
    bVar1 = this->field_0034[iVar4];
  }
  else {
    pbVar2 = this->field_0034;
    local_8 = g_worldGrid.sizeY + iVar4;
    if (pbVar2[iVar4] != 0) {
      return 0xffffffff;
    }
    if (pbVar2[iVar4 + 1] != 0) {
      return 0xffffffff;
    }
    if (pbVar2[local_8] != 0) {
      return 0xffffffff;
    }
    bVar1 = pbVar2[local_8 + 1];
  }
  if (bVar1 == 0) {
    if (this->field_0038 == nullptr) {
      /* ST_CALLSITE[0063097E]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STManRuinC_field_0038DArray; source view only; no Ghidra override */
      pSVar3_mg0 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x75,10);
      this->field_0038 = (STManRuinC_field_0038DArray *)pSVar3_mg0;
    }
    array = this->field_0038;
    if ((array != nullptr) && (array->count < 0xfe)) {
      psVar5 = &local_20;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        psVar5[0] = 0;
        psVar5[1] = 0;
        psVar5 = psVar5 + 2;
      }
      local_1a = (undefined2)param_4;
      local_18 = param_5;
      local_14 = g_playSystem_00802A38->field_00E4;
      local_20 = (short)param_1;
      local_1c = (short)param_3;
      local_1e = (short)param_2;
      local_c = param_6;

      index = Library::DKW::TBL::DArrayAppend((DArrayTy *)array,&local_20);
      if (-1 < (int)index) {
        if (param_4 == 1) {
          this->field_0034[iVar4] = 1;
        }
        else {
          this->field_0034[iVar4] = 1;
          this->field_0034[iVar4 + 1] = 1;
          this->field_0034[local_8] = 1;
          this->field_0034[local_8 + 1] = 1;
        }

        iVar4 = thunk_FUN_00631190(this,index,(short)param_1,(short)param_2,(short)param_3,param_4,
                                   param_5,param_6);
        if (iVar4 == 0) {

          DArrayRemoveAt((DArrayTy *)this->field_0038,index);
          index = 0xffffffff;
        }
      }
    }
  }
  return index;
}


#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=27;
   incoming_edx_uses=0; incoming_stack_parameter_uses=30; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
STBHEShellC::sub_005F4C50
          (STBHEShellC *this,float param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  int iVar1;
  STBHEShellC_field_0169DArray *pSVar2;
  STBHEShellC_field_0169Element *element_0169;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_2c [6];
  int local_26;
  undefined4 local_22;
  undefined4 local_1e;
  int local_1a;
  int local_16;
  undefined4 local_12;
  undefined4 local_d;
  float local_8;

  iVar5 = param_4;
  local_8 = _DAT_0079c5a4 / (float)param_5;
  this->field_0109 = param_5;
  this->field_010D = param_4;
  this->field_0111 = (int)param_1;
  this->field_0115 = param_2;
  this->field_0119 = param_3;
  this->field_0121 = -0x1e;
  this->field_011D = 0x14;
  this->field_0125 = 7;
  if (0 < param_4) {
    iVar6 = 0;
    puVar3 = &this->field_0149;
    do {
      puVar3[-4] = this->field_011D;
      *puVar3 = this->field_0119;
      iVar1 = iVar6 / this->field_0121;
      iVar6 = iVar6 + -0x96;
      puVar3[4] = iVar1 + g_playSystem_00802A38->field_00E4 + param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = param_4 + -1;
      puVar3 = puVar3 + 1;
    } while (param_4 != 0);
  }
  if (this->field_0169 != (STBHEShellC_field_0169DArray *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_0169);
  }
  pSVar2 = (STBHEShellC_field_0169DArray *)
           Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,iVar5 * param_5,0x23,10);
  this->field_0169 = pSVar2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((pSVar2 != (STBHEShellC_field_0169DArray *)0x0) && (param_4 = 0, 0 < this->field_010D)) {
    do {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = 0.0;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = 0;
      iVar5 = this->field_0109 * param_4;
      if (0 < this->field_0109) {
        do {
          puVar3 = (undefined4 *)local_2c;
          memset(puVar3, 0, 0x22); /* compiler bulk-zero initialization */
          puVar3 = (undefined4 *)((byte *)puVar3 + 0x20);
          *(undefined1 *)((int)puVar3 + 2) = 0;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (param_4 == 0) {
            fcos((float10)param_1);
            lVar7 = Library::MSVCRT::__ftol();
            iVar6 = (int)lVar7;
            fsin((float10)param_1);
            local_1a = iVar6;
            lVar7 = Library::MSVCRT::__ftol();
            local_16 = (int)lVar7;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + local_8;
          }
          else {
            pSVar2 = this->field_0169;
            if ((uint)(iVar5 - param_5) < pSVar2->count) {
              element_0169 = DArrayAt<STBHEShellC_field_0169Element>(pSVar2, iVar5 - param_5);
            }
            else {
              element_0169 = (STBHEShellC_field_0169Element *)0x0;
            }
            iVar6 = element_0169->field_0012;
            local_16 = element_0169->field_0016;
            local_1a = iVar6;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_2c._2_4_ = ((&this->field_0139)[param_4] * iVar6) / 10000 + this->field_0111;
          local_26 = ((&this->field_0139)[param_4] * local_16) / 10000 + this->field_0115;
          local_12 = DAT_007ce5ec;
          local_22 = this->field_0119;
          local_1e = 0;
          local_2c[1] = 3;
          local_d = 0xffffffff;
          uVar4 = (uint)((&this->field_0159)[param_4] != 0);
          if (this->field_0103 != '\0') {
            thunk_FUN_005f4a30((int)local_2c,3,uVar4);
          }
          local_2c[0] = uVar4 == 0;
          Library::DKW::TBL::FUN_006ae1c0(&this->field_0169->flags,(undefined4 *)local_2c);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 1;
          iVar5 = iVar5 + 1;
        } while (param_3 < this->field_0109);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = param_4 + 1;
    } while (param_4 < this->field_010D);
  }
  if (this->field_0169 == (STBHEShellC_field_0169DArray *)0x0) {
    return 0;
  }
  return 1;
}


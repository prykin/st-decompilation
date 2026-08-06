#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004248D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=5;
   ecx_pointer_setup=5; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=21; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00427bb0
          (AnonReceiver_004248D0 *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  int local_8;

  piVar3 = (int *)(param_1 * 0x10 + DAT_007f4d74);
  iVar6 = (DAT_007f4d80 + param_1) * *(int *)&this->field_0x37c + *(int *)&this->field_0x38c;
  bVar1 = 0;
  local_8 = 0x7fffffff;
  if (param_1 <= param_2) {
    do {
      iVar4 = param_1;
      local_14 = *piVar3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = piVar3[3];
      if (param_3 == -1) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = piVar3[1];
      }
      else if (param_3 == 1) {
        local_14 = piVar3[2];
      }
      if (param_1 < local_14) {
        if (local_8 != 0x7fffffff) {
          sub_00427090(this,local_8,iVar4 + -1,param_3);
          local_8 = 0x7fffffff;
        }
      }
      else {
        bVar5 = *(byte *)(local_14 + DAT_007f4d7c + iVar6);
        iVar7 = local_14 + 1;
        if (iVar7 <= param_1) {
          do {
            if (*(byte *)(DAT_007f4d7c + iVar6 + iVar7) != bVar5) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 <= param_1);
        }
        if ((local_8 != 0x7fffffff) && ((iVar7 <= param_1 || (bVar5 != bVar1)))) {
          sub_00427090(this,local_8,iVar4 + -1,param_3);
          local_8 = 0x7fffffff;
        }
        if (param_1 < iVar7) {
          if (local_8 == 0x7fffffff) {
            local_8 = iVar4;
            bVar1 = bVar5;
          }
        }
        else {
LAB_00427cca:
          iVar8 = iVar7;
          if (DAT_007f4d84 <= DAT_007f4d78) {
            pvVar2 = Library::DKW::LIB::MemRealloc(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
            if (pvVar2 == nullptr) {
              return 0;
            }
            DAT_007f4d84 = DAT_007f4d84 + 10;
            DAT_007f4d6c = pvVar2;
          }
          pvVar2 = Library::DKW::LIB::MemAlloc(0x20);
          if (pvVar2 == nullptr) {
            return 0;
          }
          *(void **)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc + 8) = pvVar2;
          iVar7 = sub_004248D0(this,(int)pvVar2,0,DAT_007f4d7c + local_14,DAT_007f4d80 + iVar4,
                               CASE_0,CASE_1);
          iVar7 = sub_004248D0(this,(int)pvVar2,iVar7,DAT_007f4d7c + -1 + iVar8,DAT_007f4d80 + iVar4
                               ,CASE_3,CASE_2);
          *(int *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc + 4) = iVar7;
          if ((bVar5 & 0x80) == 0) {
            *(undefined4 *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) = 0;
          }
          else {
            *(undefined4 *)((int)DAT_007f4d6c + DAT_007f4d78 * 0xc) = 1;
          }
          DAT_007f4d78 = DAT_007f4d78 + 1;
          if (iVar8 <= param_1) {
            iVar7 = iVar8 + 1;
            bVar5 = *(byte *)(DAT_007f4d7c + iVar8 + iVar6);
            local_14 = iVar8;
            if (iVar7 <= param_1) {
              do {
                if (*(byte *)(DAT_007f4d7c + iVar6 + iVar7) != bVar5) break;
                iVar7 = iVar7 + 1;
              } while (iVar7 <= param_1);
            }
            goto LAB_00427cca;
          }
        }
      }
      piVar3 = piVar3 + 4;
      iVar6 = iVar6 + *(int *)&this->field_0x37c;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = iVar4 + 1;
    } while (iVar4 + 1 <= param_2);
    if (local_8 != 0x7fffffff) {
      sub_00427090(this,local_8,iVar4,param_3);
    }
  }
  return 0;
}


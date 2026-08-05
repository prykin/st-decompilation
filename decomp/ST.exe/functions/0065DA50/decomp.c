#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0065DA50.
   Evidence: incoming_receiver_captures=1; receiver_accesses=5; incoming_edx_uses=0; calls=3;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall */

uint __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065DA50::FUN_0065da50
          (AnonReceiver_0065DA50 *this,int param_1,char param_2)

{
  ushort uVar1;
  STGroupBoatC *this_00;
  uint uVar2;
  DArrayTy *array;
  dword dVar3;
  ushort *puVar4;
  STGameObjC *this_01;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar6;
  char cVar7;
  uint local_8;

  local_8 = 0;
  if ((((*(ushort *)&this->field_0x7d != 0xfffe) && (g_allPlayers_007FA174 != nullptr))
      && (this_00 = thunk_FUN_0042b760(this->field_0x24,*(ushort *)&this->field_0x7d),
         this_00 != nullptr)) && (g_allPlayers_007FA174 != nullptr)) {
    cVar7 = this->field_0x81;
    if ((cVar7 < '\0') || ('\a' < cVar7)) {
      cVar7 = (char)*(undefined4 *)&this->field_0x24;
    }
    /* ST_PSEUDO[return_width_artifact,stack_slot_reuse]: candidate call-output artifact: verify return width, clobbers, or x87 state; compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (((param_2 != '\b') && ((param_2 < '\0' || (cVar7 = param_2, '\b' < param_2)))) ||
       (param_2 = cVar7, uVar6 = STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(param_2)), param_2 < '\0'))
    {
      if (param_1 != 0) {
        uVar2 = STGroupC::GetTOBJQty((STGroupC *)this_00,param_1);
        return uVar2 & 0xffff;
      }
      uVar1 = thunk_FUN_004233c0(this_00);
      return (uint)uVar1;
    }
    if (param_1 == 0) {
      array = (DArrayTy *)AiFltClassTy::sub_0065DA10((AiFltClassTy *)this,uVar6);
    }
    else {
      array = (DArrayTy *)AiFltClassTy::sub_0065E360((AiFltClassTy *)this,uVar6,param_1);
    }
    if (array != nullptr) {
      dVar3 = array->count;
      uVar2 = 0;
      if (0 < (int)dVar3) {
        do {
          if (uVar2 < dVar3) {
            puVar4 = DArrayAt<ushort>(array, uVar2);
          }
          else {
            puVar4 = nullptr;
          }
          this_01 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,this->field_0x24,*puVar4,CASE_1);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          if (((this_01 != nullptr) &&
              (iVar5 = this_01->vfunc_F8(), iVar5 != 0)) &&
             (iVar5 = this_01->vfunc_6C(), param_2 == iVar5)) {
            local_8 = local_8 + 1;
          }
          dVar3 = array->count;
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < (int)dVar3);
      }
      DArrayDestroy(array);
    }
  }
  return local_8;
}


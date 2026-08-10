#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__AnonReceiver_00678E00.cpp

// 00679120 SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00678E00::FUN_00679120
#line 4 "decomp/ST.exe/functions/00679120/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00678E00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=7; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=6; single_call_corroborated_by_receiver_family */

uint __thiscall
st::fn_00679120
          (AnonReceiver_00678E00 *this,byte *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  AnonShape_00679120_6A32469C *pAVar2;
  uint uVar3;
  int *slotStorage;
  InternalExceptionFrame local_68;
  undefined1 local_24 [4];
  uint local_20;
  short local_1c [4];
  AnonShape_00679120_6A32469C *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = (AnonShape_00679120_6A32469C *)this;
  uVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  pAVar2 = local_14;
  if (uVar3 == 0) {
    local_20 = st::fn_00402464(local_14,param_1);
    if (-1 < (int)local_20) {
      iVar1 = pAVar2->field_0695;
      if (local_20 < *(uint *)(iVar1 + 0xc)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        slotStorage = (int *)(*(int *)(iVar1 + 8) * local_20 + *(int *)(iVar1 + 0x1c));
      }
      else {
        slotStorage = nullptr;
      }
      if ((slotStorage[1] == 0) && (*slotStorage != 0)) {
        local_10 = 0;
        if ((param_2 < 0) || ((param_3 < 0 || (param_4 < 0)))) {
          param_2 = (int)pAVar2->field_063A;
          param_3 = (int)pAVar2->field_063C;
          param_4 = (int)pAVar2->field_063E;
        }
        local_c = param_3 + -2;
        local_8 = param_2 + -2;
        local_1c[2] = 5;
        local_1c[3] = 0;
        local_1c[0] = 5;
        local_1c[1] = 0;
        st::fn_00401906((short *)&local_8,(short *)&local_c,local_1c,local_1c + 2);
        *(undefined4 *)(*slotStorage + 4) = pAVar2->field_05D7;
        *(undefined4 *)(*slotStorage + 0x7d) = pAVar2->field_0640;
        *(short *)(*slotStorage + 0x62) = (short)local_8 + 2;
        *(short *)(*slotStorage + 100) = (short)local_c + 2;
        *(short *)(*slotStorage + 0x66) = (short)param_4;
        *(undefined1 *)(*slotStorage + 0x68) = pAVar2->field_064F;
        st::fn_00401BC2
                  (g_playSystem_00802A38,0x38e,st::machine_word_boundary_cast<undefined4>(local_24),st::machine_word_boundary_cast<undefined4>(&local_10),*slotStorage,0);
        st::fn_006AB060(slotStorage);
        *slotStorage = local_10;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        slotStorage[1] = *(int *)(local_10 + 0x18);
      }
    }
    g_currentExceptionFrame = local_68.previous;
    return local_20;
  }
  g_currentExceptionFrame = local_68.previous;
  if (-1 < (int)uVar3) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


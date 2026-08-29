#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SubmarineTitans__Recovered__HiddenThis__RecoveredReceiver_00678E00.cpp

// 00679120 SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00678E00::FUN_00679120
#line 4 "decomp/ST.exe/functions/00679120/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_00678E00.
   Evidence: incoming_receiver_captures=1; receiver_accesses=7; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=6; single_call_corroborated_by_receiver_family */

uint __thiscall
st::fn_00679120
          (RecoveredReceiver_00678E00 *this,byte *param_1,int param_2,int param_3,int param_4)

{
  DArrayTy *pDVar1;
  RecoveredReceiver_00678E00 *pRVar2;
  uint uVar3;
  int *slotStorage;
  InternalExceptionFrame local_68;
  byte local_24 [4];
  uint local_20;
  short local_1c [4];
  RecoveredReceiver_00678E00 *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;

  uVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  pRVar2 = local_14;
  if (uVar3 == 0) {

    local_20 = st::fn_00402464(local_14,param_1);
    if (-1 < (int)local_20) {
      pDVar1 = pRVar2->field_0695;
      if (local_20 < pDVar1->count) {
        slotStorage = DArrayAt<int>(pDVar1, local_20);
      }
      else {
        slotStorage = nullptr;
      }
      if ((slotStorage[1] == 0) && (*slotStorage != 0)) {
        local_10 = 0;
        if ((param_2 < 0) || ((param_3 < 0 || (param_4 < 0)))) {
          param_2 = (int)pRVar2->field_063A;
          param_3 = (int)pRVar2->field_063C;
          param_4 = (int)pRVar2->field_063E;
        }
        local_c = param_3 + -2;
        local_8 = param_2 + -2;
        local_1c[2] = 5;
        local_1c[3] = 0;
        local_1c[0] = 5;
        local_1c[1] = 0;
        st::fn_00401906(reinterpret_cast<short *>(&local_8),reinterpret_cast<short *>(&local_c),local_1c,local_1c + 2);
        *(undefined4 *)(*slotStorage + 4) = pRVar2->field_05D7;
        *(undefined4 *)(*slotStorage + 0x7d) = pRVar2->field_0640;
        *(short *)(*slotStorage + 0x62) = (short)local_8 + 2;
        *(short *)(*slotStorage + 100) = (short)local_c + 2;
        *(short *)(*slotStorage + 0x66) = (short)param_4;
        *(undefined1 *)(*slotStorage + 0x68) = pRVar2->field_064F;
        /* ST_CALLSITE[0067925A]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
        st::fn_00401BC2
                  (g_playSystem_00802A38,0x38e,st::machine_word_boundary_cast<undefined4>(local_24),st::machine_word_boundary_cast<undefined4>(&local_10),*slotStorage,0);
        st::fn_006AB060(slotStorage);
        *slotStorage = local_10;
        slotStorage[1] = STField<int>(local_10,0x18);
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

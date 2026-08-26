
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004AB530 -> 004AB470 @ 004AB5FF; FUN_004ab530 parameter param_2 */

void FUN_004ab470(uint *param_1,int param_2)

{
  DAT_008073d8 = param_1;
  DAT_008073dc = param_2;
  DAT_008073d0 = (float)(int)param_1 * _DAT_007904f8 + _DAT_007904f4;
  _DAT_008073d4 = (float)param_2 * _DAT_007904f8 + _DAT_007904f4;
  thunk_FUN_004a8f20(1);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00567510::thunk_FUN_00567510
            ((AnonReceiver_00567510 *)&g_sound,(int)DAT_008073d8,DAT_008073dc,DAT_008073fc,
             DAT_0080743c & 0xff);
  DAT_008073e0 = 0;
  return;
}


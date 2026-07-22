
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005F5C40 -> 00568DD0 @ 005F5CC6

   [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall STBHEShellC::sub_005F5C40(STBHEShellC *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                             (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                             (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = this->field_0018;
  SoundClassTy::PlaySound_thunk
            ((SoundClassTy *)&g_sound,SOUND_MODE_2,(char *)0x0,soundId,&local_10,0);
  return;
}


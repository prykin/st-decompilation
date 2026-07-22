
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=22;
   incoming_edx_uses=16; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STColl3C::sub_005F8650(STColl3C *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;

  this->field_02C9 = param_3;
  this->field_02C1 = param_1;
  this->field_02C5 = param_2;
  sVar3 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    sVar3 = (((short)(param_1 / 0xc9) + sVar3) - (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar3 = ((short)(param_1 / 0xc9) + sVar3) - (short)((longlong)param_1 * 0x28c1979 >> 0x3f);
  }
  this->field_0047 = sVar3;
  sVar4 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    sVar4 = (((short)(param_2 / 0xc9) + sVar4) - (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar4 = ((short)(param_2 / 0xc9) + sVar4) - (short)((longlong)param_2 * 0x28c1979 >> 0x3f);
  }
  this->field_0049 = sVar4;
  sVar5 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    sVar5 = (((short)(param_3 / 200) + sVar5) - (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = ((short)(param_3 / 200) + sVar5) - (short)((longlong)param_3 * 0x51eb851f >> 0x3f);
  }
  this->field_004B = sVar5;
  this->field_0041 = *(short *)&this->field_02C1;
  this->field_0043 = *(short *)&this->field_02C5;
  this->field_0045 = *(short *)&this->field_02C9;
  this->field_005B = sVar3;
  this->field_005D = sVar4;
  this->field_005F = sVar5;
  uVar1 = g_playSystem_00802A38->field_00E4;
  this->field_02D9 = 0;
  this->field_02D5 = uVar1;
  iVar2 = thunk_FUN_005faf70(this,param_1,param_2,param_3,
                             (int)(short)(*(short *)&this->field_027D * 0xc9 + 100),
                             (int)(short)(*(short *)&this->field_0281 * 0xc9 + 100),
                             (int)(short)(*(short *)&this->field_0285 * 200 + 100));
  this->field_02BD = iVar2;
  this->field_006C = (short)iVar2;
  return 1;
}


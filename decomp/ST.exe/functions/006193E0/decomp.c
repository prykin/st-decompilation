
/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STJumpMineC::sub_006193E0(STJumpMineC *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  iVar1 = this->field_0061;
  iVar2 = this->field_0065;
  iVar3 = this->field_0069;
  this->field_009F = iVar1;
  this->field_00A3 = iVar2;
  this->field_00A7 = iVar3;
  this->field_00DB = iVar1;
  this->field_00DF = iVar2;
  this->field_00E3 = iVar3;
  sVar4 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    sVar4 = (((short)(iVar1 / 0xc9) + sVar4) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar4 = ((short)(iVar1 / 0xc9) + sVar4) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f);
  }
  this->field_00C9 = sVar4;
  sVar5 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    sVar5 = (((short)(iVar2 / 0xc9) + sVar5) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar5 = ((short)(iVar2 / 0xc9) + sVar5) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
  }
  this->field_00CB = sVar5;
  sVar6 = (short)(iVar3 >> 0x1f);
  if (iVar3 < 0) {
    sVar6 = (((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    sVar6 = ((short)(iVar3 / 200) + sVar6) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f);
  }
  this->field_00CD = sVar6;
  if ((((-1 < sVar4) && (-1 < sVar5)) && (-1 < sVar6)) &&
     (((sVar4 < g_worldGrid.sizeX && (sVar5 < g_worldGrid.sizeY)) && (sVar6 < 5)))) {
    this->field_00E7 = this->field_006D;
    this->field_00EB = this->field_0071;
    this->field_00EF = this->field_0075;
    return 1;
  }
  return 0;
}


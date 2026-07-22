
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=37;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00627EB0 -> 00629F90 @ 00627F75 */

undefined4 __thiscall
STParticleC::sub_00629F90(STParticleC *this,STParticleC *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  short sVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_00;
  longlong lVar7;

  this->field_00D2 = param_1->field_0042;
  this->field_0046 = param_1->field_0020;
  this->field_004A = param_1->field_0024;
  this->field_004E = param_1->field_0028;
  this->field_007A = param_1->field_0020;
  this->field_007E = param_1->field_0024;
  this->field_0082 = param_1->field_0028;
  this->field_0052 = param_1->field_0020;
  this->field_0056 = param_1->field_0024;
  this->field_005A = param_1->field_0028;
  if (this->field_0040 != '\0') {
    uVar5 = sub_0062B4A0(this);
    this->field_00D6 = (char)uVar5;
  }
  fsin((float10)param_1->field_002C * (float10)_DAT_0079d064 * (float10)_DAT_0079d060);
  lVar7 = Library::MSVCRT::__ftol();
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fcos(extraout_ST0);
  this->field_008A = (int)lVar7;
  lVar7 = Library::MSVCRT::__ftol();
  iVar6 = (int)lVar7;
  this->field_008E = iVar6;
  if (iVar6 < 0) {
    this->field_008E = -iVar6;
  }
  fsin((float10)param_1->field_0030 * (float10)_DAT_0079d064 * (float10)_DAT_0079d060);
  lVar7 = Library::MSVCRT::__ftol();
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fcos(extraout_ST0_00);
  this->field_0092 = (int)lVar7;
  lVar7 = Library::MSVCRT::__ftol();
  this->field_0096 = (int)lVar7;
  this->field_009A = param_1->field_0034;
  this->field_00A2 = 5;
  if (param_1->field_0038 == 0) {
    this->field_00A6 = 1000;
  }
  else {
    this->field_00A6 = param_1->field_0038;
  }
  iVar6 = this->field_0046;
  this->field_00AA = param_2;
  this->field_00AE = param_2;
  sVar3 = (short)(iVar6 >> 0x1f);
  if (iVar6 < 0) {
    iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                        (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
  }
  iVar2 = this->field_004A;
  this->field_005E = iVar6;
  sVar3 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    iVar6 = (short)(((short)(iVar2 / 0xc9) + sVar3) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar2 / 0xc9) + sVar3) -
                        (short)((longlong)iVar2 * 0x28c1979 >> 0x3f));
  }
  iVar2 = this->field_004E;
  this->field_0062 = iVar6;
  if (iVar2 < 0) {
    iVar6 = (short)(iVar2 / 200) + -1;
  }
  else {
    iVar6 = (int)(short)(iVar2 / 200);
  }
  this->field_0066 = iVar6;
  cVar1 = param_1->field_0041;
  this->field_00C0 = cVar1;
  if (cVar1 == '\0') {
    return 0;
  }
  this->field_00BE = 0x1e;
  switch((uint)this->field_0014 >> 8 & 0xff) {
  case 0:
    if (param_1->field_001C == 4) {
      this->field_00BE = (byte)(&DAT_007d0af0)[(uint)*(byte *)&param_1->field_0014 * 8] >> 1;
      goto cf_common_exit_0062A1E3;
    }
    bVar4 = (byte)(&DAT_007d0a70)[(uint)*(byte *)&param_1->field_0014 * 8] >> 1;
    goto LAB_0062a1dd;
  case 1:
  case 0x20:
    this->field_00BE = (byte)(&DAT_007d0bf0)[(uint)*(byte *)&param_1->field_0014 * 8] >> 1;
    goto cf_common_exit_0062A1E3;
  case 2:
  case 8:
  case 0x40:
    iVar6 = DAT_007d09d4;
    break;
  default:
    goto cf_common_exit_0062A1E3;
  case 4:
    iVar6 = *(int *)(&DAT_007d0a00 + (uint)*(byte *)&this->field_0014 * 4);
    break;
  case 0x10:
    iVar6 = *(int *)(&DAT_007d0af0 + (uint)*(byte *)&param_1->field_0014 * 8);
    break;
  case 0x80:
    iVar6 = DAT_007d08b8;
  }
  bVar4 = (byte)(iVar6 / 2);
LAB_0062a1dd:
  this->field_00BE = bVar4;
cf_common_exit_0062A1E3:
  this->field_00BE = this->field_00BE + '\n';
  return 0;
}


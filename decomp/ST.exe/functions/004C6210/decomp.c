
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_BldMark.cpp
   Diagnostic line evidence: 72 | 73 | 76 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBldMark::sub_004C6210(TLOBldMark *this,int param_1,int *param_2)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  STT3DSprC *this_00;
  int iVar2;
  uint uVar3;
  DWORD DVar4;

  this->field_0018 = 0;
  this->field_001C = param_1;
  this->field_0020 = param_2;
  pAVar1 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (pAVar1 == (AnonShape_004AB810_8E5693D5 *)0x0) {
    this_00 = (STT3DSprC *)0x0;
  }
  else {
    this_00 = (STT3DSprC *)thunk_FUN_004ab810(pAVar1);
  }
  this->field_002C = this_00;
  if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 0) {
    iVar2 = STT3DSprC::Init(this_00,DAT_008073cc,0x5a,0x45,(STDcResourcC *)0x0,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_BldMark.cpp",0x48);
    }
  }
  else if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 1) {
    iVar2 = STT3DSprC::Init(this_00,DAT_008073cc,0x78,0x56,(STDcResourcC *)0x0,0xf0,0xbe,0x11);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_BldMark.cpp",0x49);
    }
    uVar3 = thunk_FUN_004ad650(this->field_002C);
    Library::Ourlib::ST3DSMAP::SprSetSplit(g_sT3DSMAPContext_00807598,uVar3);
  }
  thunk_FUN_004ad5e0(this->field_002C);
  iVar2 = STT3DSprC::LoadSequence
                    (this->field_002C,0,DAT_0080678c,
                     *(char **)(&DAT_007ad250 + (uint)(byte)this->field_0010->field_112E * 4),0x1d);
  if (iVar2 != 0) {
    RaiseInternalException
              (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_BldMark.cpp",0x4c);
  }
  thunk_FUN_004abce0(this->field_002C,0,*(int *)(&DAT_00790f84 + this->field_001C * 4),
                     *(int *)(&DAT_00790f84 + this->field_001C * 4),'\0');
  STT3DSprC::SetCurFase(this->field_002C,'\0',*(uint *)(&DAT_00790f84 + this->field_001C * 4));
  DVar4 = STAppC::sub_006E51B0(this->field_0010);
  STT3DSprC::StartShow(this->field_002C,0,DVar4);
  thunk_FUN_004ad430(this->field_002C);
  this->field_0024 = 0;
  this->field_0028 = 0;
  return 0;
}


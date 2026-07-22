
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_tls.cpp
   Diagnostic line evidence: 86 | 99 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __fastcall TLOBaseTy::sub_004EAA20(AnonShape_004D9C80_80F657D3 *param_1)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  STT3DSprC *this;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CHAR local_108 [256];
  int local_8;

  if (param_1->field_05FF == 0) {
    pAVar1 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pAVar1 == (AnonShape_004AB810_8E5693D5 *)0x0) {
      this = (STT3DSprC *)0x0;
    }
    else {
      this = (STT3DSprC *)thunk_FUN_004ab810(pAVar1);
    }
    param_1->field_05FF = this;
    iVar2 = STT3DSprC::Init(this,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_tls.cpp",0x56);
    }
  }
  switch(param_1->field_0245) {
  case 0:
    if (*(int *)&param_1->field_0x4d0 == 3) {
      *(undefined4 *)&param_1->field_0x4d0 = 0;
    }
    if (*(int *)&param_1->field_0x4d0 == 1) {
      param_1->field_0261 = 1;
    }
    break;
  case 1:
  case 6:
    *(undefined4 *)&param_1->field_0x4d0 = 0;
    break;
  case 5:
    *(undefined4 *)&param_1->field_0x4d0 = 3;
    param_1->field_0261 = 0;
    param_1->field_0265 = param_1->field_0265 & 0xfffffffd;
    param_1->field_026D = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x279);
  }
  if ((*(int *)&param_1->field_0x4d0 != 1) && (*(int *)&param_1->field_0x4d0 != 3)) {
    thunk_FUN_004ad430(param_1->field_05FF);
    return 0;
  }
  wsprintfA(local_108,"%s","trmmine");
  iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)param_1->field_05FF,0xe,DAT_00806774,local_108,0x1d);
  if (iVar2 != 0) {
    RaiseInternalException
              (iVar2,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_tls.cpp",99);
  }
  uVar4 = 10;
  iVar2 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
  uVar3 = thunk_FUN_004ad650(param_1->field_05FF);
  FUN_006ea340(param_1->field_0211,uVar3,iVar2,uVar4);
  thunk_FUN_004abce0((void *)param_1->field_05FF,0xe,0x28,
                     (-(uint)(*(int *)&param_1->field_0x4d0 != 3) & 0xffffffed) + 0x3b,'\0');
  STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\x0e',0x28);
  STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  *(undefined4 *)&param_1->field_0x4d4 = 0;
  uVar3 = g_playSystem_00802A38->field_00E4;
  *(undefined4 *)&param_1->field_0x4dc = 1;
  *(uint *)&param_1->field_0x4d8 = uVar3;
  iVar2 = *(int *)&param_1->field_0x4d0 * 0x18;
  local_8 = *(int *)(&DAT_0079aa18 + iVar2) + (int)param_1->field_0041;
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)param_1->field_05FF,(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
             (float)(*(int *)(&DAT_0079aa1c + iVar2) + (int)param_1->field_0043) * _DAT_007904f8 *
             _DAT_007904f0,
             (float)(*(int *)(&DAT_0079aa20 + iVar2) + (int)param_1->field_0045) * _DAT_007904f8 *
             _DAT_007904f0 + _DAT_007904fc);
  thunk_FUN_004ad460((void *)param_1->field_05FF,1);
  if (*(int *)&param_1->field_0x4d0 == 3) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x279);
  }
  return 0;
}


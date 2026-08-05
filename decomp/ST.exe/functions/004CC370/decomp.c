
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bspr.cpp
   Diagnostic line evidence: 895 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004cc370(AnonShape_004CC370_02CE3D17 *param_1)

{
  AnonPointee_STT3DSprC_0020 *pAVar1;
  uint uVar3;
  int iVar4;
  int uVar2;
  uint uVar5;
  int local_EAX_774;
  int local_EAX_824;
  int iVar6;
  int iVar7;

  if ((*(int *)&param_1->field_0x444 == 0) || (*(int *)&param_1->field_0x448 == 0)) {
    return 0;
  }
  if (-1 < *(int *)&param_1->field_0x44c) {
    pAVar1 = ((STT3DSprC *)param_1->field_0603)->field_0020;
    if ((int)pAVar1->field_020C <= (int)pAVar1->field_0210) {
      STT3DSprC::StopShow((STT3DSprC *)param_1->field_0603,0xe);
      thunk_FUN_004ad430((STT3DSprC *)param_1->field_0603);
      STT3DSprC::UnLoadSequence((STT3DSprC *)param_1->field_0603,0xe);
      uVar3 = thunk_FUN_004ad650((STT3DSprC *)param_1->field_0603);
      Library::Ourlib::ST3DSMAP::SprRstLev(param_1->field_0211,uVar3);
      *(undefined4 *)&param_1->field_0x44c = 0xffffffff;
      *(uint *)&param_1->field_0x450 = g_playSystem_00802A38->field_00E4;
    }
    goto cf_common_exit_004CC6D2;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*(int *)param_1 + 0x7c))();
  if ((3 < iVar4 / 0x14) && (*(int *)&param_1->field_0x43c == 1)) {
    TLOBaseTy::sub_004CC900((TLOBaseTy *)param_1);
    goto cf_common_exit_004CC6D2;
  }
  STT3DSprC::UnLoadSequence((STT3DSprC *)&param_1->field_0x1d5,6);
  iVar4 = *(int *)&param_1->field_0x440;
  *(int *)&param_1->field_0x43c = iVar4;
  if (g_playSystem_00802A38->field_00E4 <
      *(int *)&param_1->field_0x450 + (~-(uint)(iVar4 != 1) & DAT_00790c14))
  goto cf_common_exit_004CC6D2;
  if (iVar4 == 2) {
    iVar4 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_0080678c,PTR_s_tlo_capture_00790c28,
                       0x1d);
    if (iVar4 != 0) {
      iVar7 = 0x37c;
      goto cf_error_exit_004CC50A;
    }
  }
  else if ((iVar4 == 3) || (iVar4 == 4)) {
    iVar4 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,
                       0x1d);
    if (iVar4 != 0) {
      iVar7 = 0x37f;
      goto cf_error_exit_004CC50A;
    }
  }
  else {
    iVar4 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_00806764,PTR_s_tlo_bubbles_00790c1c,
                       0x1d);
    if (iVar4 != 0) {
      iVar7 = 0x381;
cf_error_exit_004CC50A:
      RaiseInternalException
                (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",iVar7);
    }
  }
  uVar3 = 6;
  iVar4 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_0x1d5);
  uVar2 = thunk_FUN_004ad650((STT3DSprC *)param_1->field_0603);
  FUN_006ea340(param_1->field_0211,uVar2,iVar4,uVar3);
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)param_1->field_0603,param_1->field_01F9,param_1->field_01FD,
             param_1->field_0201);
  uVar3 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
  *(uint *)&param_1->field_0x1c = uVar3;
  iVar7 = param_1->field_0235 * 0x44;
  uVar3 = (uVar3 >> 0x10) % *(uint *)(&DAT_00797748 + iVar7);
  *(uint *)&param_1->field_0x44c = uVar3;
  iVar4 = *(int *)&param_1->field_0x43c;
  if (iVar4 == 2) {
    uVar5 = (param_1->field_0613 - *(int *)(&DAT_0079774c + uVar3 * 8 + iVar7)) + 0x28;
    uVar3 = (param_1->field_0617 - *(int *)(&DAT_00797750 + uVar3 * 8 + iVar7)) + 0x1f;
  }
  else {
    if ((iVar4 == 3) || (iVar6 = 0x17, iVar4 == 4)) {
      iVar6 = 0x10;
    }
    uVar5 = (param_1->field_0613 - *(int *)(&DAT_0079774c + uVar3 * 8 + iVar7)) + iVar6;
    if ((iVar4 == 3) || (iVar6 = 0x5c, iVar4 == 4)) {
      iVar6 = 0x15;
    }
    uVar3 = (param_1->field_0617 - *(int *)(&DAT_00797750 + uVar3 * 8 + iVar7)) + iVar6;
  }
  thunk_FUN_004ad380((void *)param_1->field_0603,uVar5,uVar3);
  STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_0603,'\x0e',0);
  STT3DSprC::StartShow((STT3DSprC *)param_1->field_0603,0xe,g_playSystem_00802A38->field_00E4);
  thunk_FUN_004ad460((void *)param_1->field_0603,1);
  if ((*(int *)&param_1->field_0x43c == 3) || (*(int *)&param_1->field_0x43c == 4)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x363);
  }
  if (*(int *)&param_1->field_0x43c == 2) {
    local_EAX_774 = LookupRecordByte(param_1->field_023D);
    if (*(int *)(&DAT_00795f18 + ((uint)(byte)local_EAX_774 + param_1->field_0235 * 3) * 4) != 0) {
      iVar4 = *(int *)param_1;
      local_EAX_824 = LookupRecordByte(param_1->field_023D);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar4 + 0x90))
                (3,*(undefined4 *)
                    (&DAT_00795f18 + ((uint)(byte)local_EAX_824 + param_1->field_0235 * 3) * 4));
    }
  }
cf_common_exit_004CC6D2:
  thunk_FUN_004ac9e0((void *)param_1->field_0603,g_playSystem_00802A38->field_00E4);
  return 0;
}


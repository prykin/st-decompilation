
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bspr.cpp
   Diagnostic line evidence: 895 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004cc370(AnonShape_004CC370_02CE3D17 *param_1)

{
  AnonPointee_STT3DSprC_0020 *pAVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  if ((*(int *)&param_1->field_0x444 == 0) || (*(int *)&param_1->field_0x448 == 0)) {
    return 0;
  }
  if (-1 < *(int *)&param_1->field_0x44c) {
    pAVar1 = ((STT3DSprC *)param_1->field_0603)->field_0020;
    if ((int)pAVar1->field_020C <= (int)pAVar1->field_0210) {
      STT3DSprC::StopShow((STT3DSprC *)param_1->field_0603,0xe);
      thunk_FUN_004ad430(param_1->field_0603);
      STT3DSprC::UnLoadSequence((STT3DSprC *)param_1->field_0603,0xe);
      uVar2 = thunk_FUN_004ad650(param_1->field_0603);
      FUN_006ea2f0(param_1->field_0211,uVar2);
      *(undefined4 *)&param_1->field_0x44c = 0xffffffff;
      *(uint *)&param_1->field_0x450 = g_playSystem_00802A38->field_00E4;
    }
    goto cf_common_exit_004CC6D2;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (**(code **)(*(int *)param_1 + 0x7c))();
  if ((3 < iVar3 / 0x14) && (*(int *)&param_1->field_0x43c == 1)) {
    thunk_FUN_004cc900((AnonShape_004CC900_31EE9CAA *)param_1);
    goto cf_common_exit_004CC6D2;
  }
  STT3DSprC::UnLoadSequence((STT3DSprC *)&param_1->field_0x1d5,6);
  iVar3 = *(int *)&param_1->field_0x440;
  *(int *)&param_1->field_0x43c = iVar3;
  if (g_playSystem_00802A38->field_00E4 <
      *(int *)&param_1->field_0x450 + (~-(uint)(iVar3 != 1) & DAT_00790c14))
  goto cf_common_exit_004CC6D2;
  if (iVar3 == 2) {
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_0080678c,PTR_s_tlo_capture_00790c28,
                       0x1d);
    if (iVar3 != 0) {
      iVar5 = 0x37c;
      goto cf_error_exit_004CC50A;
    }
  }
  else if ((iVar3 == 3) || (iVar3 == 4)) {
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,
                       0x1d);
    if (iVar3 != 0) {
      iVar5 = 0x37f;
      goto cf_error_exit_004CC50A;
    }
  }
  else {
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_00806764,PTR_s_tlo_bubbles_00790c1c,
                       0x1d);
    if (iVar3 != 0) {
      iVar5 = 0x381;
cf_error_exit_004CC50A:
      RaiseInternalException
                (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_bspr.cpp",iVar5);
    }
  }
  uVar6 = 6;
  iVar3 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
  uVar2 = thunk_FUN_004ad650(param_1->field_0603);
  FUN_006ea340(param_1->field_0211,uVar2,iVar3,uVar6);
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)param_1->field_0603,param_1->field_01F9,param_1->field_01FD,
             param_1->field_0201);
  uVar2 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
  *(uint *)&param_1->field_0x1c = uVar2;
  iVar5 = param_1->field_0235 * 0x44;
  uVar2 = (uVar2 >> 0x10) % *(uint *)(&DAT_00797748 + iVar5);
  *(uint *)&param_1->field_0x44c = uVar2;
  iVar3 = *(int *)&param_1->field_0x43c;
  if (iVar3 == 2) {
    uVar6 = (param_1->field_0613 - *(int *)(&DAT_0079774c + uVar2 * 8 + iVar5)) + 0x28;
    uVar2 = (param_1->field_0617 - *(int *)(&DAT_00797750 + uVar2 * 8 + iVar5)) + 0x1f;
  }
  else {
    if ((iVar3 == 3) || (iVar4 = 0x17, iVar3 == 4)) {
      iVar4 = 0x10;
    }
    uVar6 = (param_1->field_0613 - *(int *)(&DAT_0079774c + uVar2 * 8 + iVar5)) + iVar4;
    if ((iVar3 == 3) || (iVar4 = 0x5c, iVar3 == 4)) {
      iVar4 = 0x15;
    }
    uVar2 = (param_1->field_0617 - *(int *)(&DAT_00797750 + uVar2 * 8 + iVar5)) + iVar4;
  }
  thunk_FUN_004ad380((void *)param_1->field_0603,uVar6,uVar2);
  STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_0603,'\x0e',0);
  STT3DSprC::StartShow((STT3DSprC *)param_1->field_0603,0xe,g_playSystem_00802A38->field_00E4);
  thunk_FUN_004ad460((void *)param_1->field_0603,1);
  if ((*(int *)&param_1->field_0x43c == 3) || (*(int *)&param_1->field_0x43c == 4)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x90))(3,0x363);
  }
  if (*(int *)&param_1->field_0x43c == 2) {
    uVar2 = GetPlayerRaceId(param_1->field_023D);
    if (*(int *)(&DAT_00795f18 + ((uVar2 & 0xff) + param_1->field_0235 * 3) * 4) != 0) {
      iVar3 = *(int *)param_1;
      uVar2 = GetPlayerRaceId(param_1->field_023D);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar3 + 0x90))
                (3,*(undefined4 *)(&DAT_00795f18 + ((uVar2 & 0xff) + param_1->field_0235 * 3) * 4));
    }
  }
cf_common_exit_004CC6D2:
  thunk_FUN_004ac9e0((void *)param_1->field_0603,g_playSystem_00802A38->field_00E4);
  return 0;
}


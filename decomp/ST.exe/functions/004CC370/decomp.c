
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bspr.cpp
   Diagnostic line evidence: 895 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004cc370(AnonShape_004CC370_02CE3D17 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(int *)&param_1->field_0x444 == 0) || (*(int *)&param_1->field_0x448 == 0)) {
    return 0;
  }
  if (-1 < *(int *)&param_1->field_0x44c) {
    iVar2 = ((STT3DSprC *)param_1->field_0603)->field_0020;
    if (*(int *)(iVar2 + 0x20c) <= *(int *)(iVar2 + 0x210)) {
      STT3DSprC::StopShow((STT3DSprC *)param_1->field_0603,0xe);
      thunk_FUN_004ad430(param_1->field_0603);
      STT3DSprC::UnLoadSequence((STT3DSprC *)param_1->field_0603,0xe);
      uVar1 = thunk_FUN_004ad650(param_1->field_0603);
      FUN_006ea2f0(param_1->field_0211,uVar1);
      *(undefined4 *)&param_1->field_0x44c = 0xffffffff;
      *(undefined4 *)&param_1->field_0x450 = PTR_00802a38->field_00E4;
    }
    goto cf_common_exit_004CC6D2;
  }
  iVar2 = (**(code **)(*(int *)param_1 + 0x7c))();
  if ((3 < iVar2 / 0x14) && (*(int *)&param_1->field_0x43c == 1)) {
    thunk_FUN_004cc900((AnonShape_004CC900_31EE9CAA *)param_1);
    goto cf_common_exit_004CC6D2;
  }
  STT3DSprC::UnLoadSequence((STT3DSprC *)&param_1->field_0x1d5,6);
  iVar2 = *(int *)&param_1->field_0x440;
  *(int *)&param_1->field_0x43c = iVar2;
  if ((uint)PTR_00802a38->field_00E4 <
      *(int *)&param_1->field_0x450 + (~-(uint)(iVar2 != 1) & DAT_00790c14))
  goto cf_common_exit_004CC6D2;
  if (iVar2 == 2) {
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_0080678c,PTR_s_tlo_capture_00790c28,
                       0x1d);
    if (iVar2 != 0) {
      iVar4 = 0x37c;
      goto cf_error_exit_004CC50A;
    }
  }
  else if ((iVar2 == 3) || (iVar2 == 4)) {
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_0080678c,PTR_s_tlo_emb6_00790c20,
                       0x1d);
    if (iVar2 != 0) {
      iVar4 = 0x37f;
      goto cf_error_exit_004CC50A;
    }
  }
  else {
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_0603,0xe,DAT_00806764,PTR_s_tlo_bubbles_00790c1c,
                       0x1d);
    if (iVar2 != 0) {
      iVar4 = 0x381;
cf_error_exit_004CC50A:
      RaiseInternalException
                (iVar2,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,iVar4);
    }
  }
  uVar5 = 6;
  iVar2 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
  uVar1 = thunk_FUN_004ad650(param_1->field_0603);
  FUN_006ea340(param_1->field_0211,uVar1,iVar2,uVar5);
  thunk_FUN_004ad3c0((void *)param_1->field_0603,param_1->field_01F9,param_1->field_01FD,
                     param_1->field_0201);
  uVar1 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
  *(uint *)&param_1->field_0x1c = uVar1;
  iVar4 = param_1->field_0235 * 0x44;
  uVar1 = (uVar1 >> 0x10) % *(uint *)(&DAT_00797748 + iVar4);
  *(uint *)&param_1->field_0x44c = uVar1;
  iVar2 = *(int *)&param_1->field_0x43c;
  if (iVar2 == 2) {
    uVar5 = (param_1->field_0613 - *(int *)(&DAT_0079774c + uVar1 * 8 + iVar4)) + 0x28;
    uVar1 = (param_1->field_0617 - *(int *)(&DAT_00797750 + uVar1 * 8 + iVar4)) + 0x1f;
  }
  else {
    if ((iVar2 == 3) || (iVar3 = 0x17, iVar2 == 4)) {
      iVar3 = 0x10;
    }
    uVar5 = (param_1->field_0613 - *(int *)(&DAT_0079774c + uVar1 * 8 + iVar4)) + iVar3;
    if ((iVar2 == 3) || (iVar3 = 0x5c, iVar2 == 4)) {
      iVar3 = 0x15;
    }
    uVar1 = (param_1->field_0617 - *(int *)(&DAT_00797750 + uVar1 * 8 + iVar4)) + iVar3;
  }
  thunk_FUN_004ad380((void *)param_1->field_0603,uVar5,uVar1);
  STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_0603,'\x0e',0);
  STT3DSprC::StartShow((STT3DSprC *)param_1->field_0603,0xe,PTR_00802a38->field_00E4);
  thunk_FUN_004ad460((void *)param_1->field_0603,1);
  if ((*(int *)&param_1->field_0x43c == 3) || (*(int *)&param_1->field_0x43c == 4)) {
    (**(code **)(*(int *)param_1 + 0x90))(3,0x363);
  }
  if (*(int *)&param_1->field_0x43c == 2) {
    uVar1 = GetPlayerRaceId(param_1->field_023D);
    if (*(int *)(&DAT_00795f18 + ((uVar1 & 0xff) + param_1->field_0235 * 3) * 4) != 0) {
      iVar2 = *(int *)param_1;
      uVar1 = GetPlayerRaceId(param_1->field_023D);
      (**(code **)(iVar2 + 0x90))
                (3,*(undefined4 *)(&DAT_00795f18 + ((uVar1 & 0xff) + param_1->field_0235 * 3) * 4));
    }
  }
cf_common_exit_004CC6D2:
  thunk_FUN_004ac9e0((void *)param_1->field_0603,PTR_00802a38->field_00E4);
  return 0;
}



/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 664 | 666 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004d0310(AnonShape_004D0310_B8EE97FF *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  CHAR *pCVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  CHAR local_48 [64];
  uint local_8;

  pCVar5 = local_48;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar5[0] = '\0';
    pCVar5[1] = '\0';
    pCVar5[2] = '\0';
    pCVar5[3] = '\0';
    pCVar5 = pCVar5 + 4;
  }
  uVar4 = 0;
  local_8 = 0;
  iVar3 = STT3DSprC::LoadSequence
                    ((STT3DSprC *)param_1->field_05FF,0xe,DAT_0080677c,
                     &DAT_007a9342 + param_1->field_0369 * 6,0x1d);
  if (iVar3 != 0) {
    RaiseInternalException
              (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp",0x298);
  }
  iVar3 = param_1->field_0379;
  if (iVar3 == 0xff) {
    iVar3 = param_1->field_0024;
  }
  wsprintfA(local_48,"%s%1i",&DAT_007a9342 + param_1->field_0369 * 6,iVar3);
  iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)param_1->field_05FF,0xc,DAT_0080677c,local_48,0x1d);
  if (iVar3 != 0) {
    RaiseInternalException
              (iVar3,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp",0x29a);
  }
  iVar3 = -1;
  pcVar7 = (char *)((int)&DAT_007a9440 + param_1->field_0369 * 6 + 2);
  pcVar6 = pcVar7;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (iVar3 == -2) {
    STT3DSprC::StopShow((STT3DSprC *)param_1->field_05FF,0xd);
  }
  else {
    iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)param_1->field_05FF,0xd,DAT_0080677c,pcVar7,0x1d);
    if (iVar3 != 0) {
      return 0xffff;
    }
  }
  uVar8 = 10;
  iVar3 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
  uVar2 = thunk_FUN_004ad650(param_1->field_05FF);
  FUN_006ea340(param_1->field_0211,uVar2,iVar3,uVar8);
  iVar3 = thunk_FUN_004ab050();
  switch(iVar3) {
  case 0:
    uVar4 = *(uint *)(&DAT_007a90b8 + param_1->field_0369 * 0x10);
    local_8 = DAT_007a9438;
    break;
  case 1:
    local_8 = DAT_007a943c;
    uVar4 = *(uint *)(&DAT_007a90bc + param_1->field_0369 * 0x10);
    break;
  case 2:
    local_8 = DAT_007a9440;
    uVar4 = *(uint *)(&DAT_007a90c0 + param_1->field_0369 * 0x10);
    break;
  case 3:
    uVar4 = *(uint *)(&DAT_007a90c4 + param_1->field_0369 * 0x10);
    local_8 = DAT_007a9444;
  }
  thunk_FUN_004ad460((void *)param_1->field_05FF,0);
  thunk_FUN_004abce0((void *)param_1->field_05FF,0xe,uVar4,uVar4,'\0');
  thunk_FUN_004abce0((void *)param_1->field_05FF,0xc,uVar4,uVar4,'\0');
  STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\x0e',uVar4);
  STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\f',uVar4);
  STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xc,g_playSystem_00802A38->field_00E4);
  uVar4 = local_8;
  iVar3 = -1;
  pcVar7 = (char *)((int)&DAT_007a9440 + param_1->field_0369 * 6 + 2);
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    thunk_FUN_004abce0((void *)param_1->field_05FF,0xd,local_8,local_8,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\r',uVar4);
    STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xd,g_playSystem_00802A38->field_00E4);
  }
  return 0;
}


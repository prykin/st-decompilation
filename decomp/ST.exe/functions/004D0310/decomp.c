#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 664 | 666 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004CEB00 -> 004D0310 @ 004CEE37; TLOBaseTy::sub_004CEB00 this; stable alias EBX */

undefined4 __fastcall FUN_004d0310(TLOBaseTy *param_1)

{
  char cVar1;
  byte *pbVar2;
  int iVar4;
  uint uVar3;
  int local_EAX_323;
  int iVar5;
  uint uVar6;
  CHAR *pCVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  CHAR local_48 [64];
  uint local_8;

  pCVar7 = local_48;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar7[0] = '\0';
    pCVar7[1] = '\0';
    pCVar7[2] = '\0';
    pCVar7[3] = '\0';
    pCVar7 = pCVar7 + 4;
  }
  uVar6 = 0;
  local_8 = 0;
  iVar5 = STT3DSprC::LoadSequence
                    ((STT3DSprC *)param_1->field_05FF,0xe,PTR_0080677c,
                     &DAT_007a9342 + *(int *)&param_1->field_0x369 * 6,CASE_1D);
  if (iVar5 != 0) {
    RaiseInternalException
              (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp",0x298);
  }
  pbVar2 = (byte *)param_1->field_0379;
  if (pbVar2 == (byte *)0xff) {
    pbVar2 = param_1->field_0024;
  }
  wsprintfA(local_48,"%s%1i",&DAT_007a9342 + *(int *)&param_1->field_0x369 * 6,pbVar2);
  iVar5 = STT3DSprC::LoadSequence
                    ((STT3DSprC *)param_1->field_05FF,0xc,PTR_0080677c,local_48,CASE_1D);
  if (iVar5 != 0) {
    RaiseInternalException
              (iVar5,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp",0x29a);
  }
  iVar5 = -1;
  pcVar9 = (char *)((int)&DAT_007a9440 + *(int *)&param_1->field_0x369 * 6 + 2);
  pcVar8 = pcVar9;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (iVar5 == -2) {
    STT3DSprC::StopShow((STT3DSprC *)param_1->field_05FF,0xd);
  }
  else {
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)param_1->field_05FF,0xd,PTR_0080677c,pcVar9,CASE_1D);
    if (iVar5 != 0) {
      return 0xffff;
    }
  }
  uVar10 = 10;
  iVar4 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_01D5);
  uVar3 = thunk_FUN_004ad650((STT3DSprC *)param_1->field_05FF);
  FUN_006ea340((void *)param_1->field_0211,uVar3,iVar4,uVar10);
  local_EAX_323 = thunk_FUN_004ab050();
  switch(local_EAX_323) {
  case 0:
    uVar6 = *(uint *)(&DAT_007a90b8 + *(int *)&param_1->field_0x369 * 0x10);
    local_8 = DAT_007a9438;
    break;
  case 1:
    local_8 = DAT_007a943c;
    uVar6 = *(uint *)(&DAT_007a90bc + *(int *)&param_1->field_0x369 * 0x10);
    break;
  case 2:
    local_8 = DAT_007a9440;
    uVar6 = *(uint *)(&DAT_007a90c0 + *(int *)&param_1->field_0x369 * 0x10);
    break;
  case 3:
    uVar6 = *(uint *)(&DAT_007a90c4 + *(int *)&param_1->field_0x369 * 0x10);
    local_8 = DAT_007a9444;
  }
  thunk_FUN_004ad460(param_1->field_05FF,0);
  thunk_FUN_004abce0(param_1->field_05FF,0xe,uVar6,uVar6,'\0');
  thunk_FUN_004abce0(param_1->field_05FF,0xc,uVar6,uVar6,'\0');
  STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\x0e',uVar6);
  STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\f',uVar6);
  STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xc,g_playSystem_00802A38->field_00E4);
  uVar6 = local_8;
  iVar5 = -1;
  pcVar9 = (char *)((int)&DAT_007a9440 + *(int *)&param_1->field_0x369 * 6 + 2);
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if (iVar5 != -2) {
    thunk_FUN_004abce0(param_1->field_05FF,0xd,local_8,local_8,'\0');
    STT3DSprC::SetCurFase((STT3DSprC *)param_1->field_05FF,'\r',uVar6);
    STT3DSprC::StartShow((STT3DSprC *)param_1->field_05FF,0xd,g_playSystem_00802A38->field_00E4);
  }
  return 0;
}


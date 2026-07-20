
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 664 | 666 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004d0310(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  CHAR *pCVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  CHAR local_48 [64];
  uint local_8;
  
  pCVar6 = local_48;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar6[0] = '\0';
    pCVar6[1] = '\0';
    pCVar6[2] = '\0';
    pCVar6[3] = '\0';
    pCVar6 = pCVar6 + 4;
  }
  uVar5 = 0;
  local_8 = 0;
  iVar4 = STT3DSprC::LoadSequence
                    (*(STT3DSprC **)(param_1 + 0x5ff),0xe,DAT_0080677c,
                     &DAT_007a9342 + *(int *)(param_1 + 0x369) * 6,0x1d);
  if (iVar4 != 0) {
    RaiseInternalException
              (iVar4,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x298);
  }
  iVar4 = *(int *)(param_1 + 0x379);
  if (iVar4 == 0xff) {
    iVar4 = *(int *)(param_1 + 0x24);
  }
  wsprintfA(local_48,s__s_1i_007ac908,&DAT_007a9342 + *(int *)(param_1 + 0x369) * 6,iVar4);
  iVar4 = STT3DSprC::LoadSequence(*(STT3DSprC **)(param_1 + 0x5ff),0xc,DAT_0080677c,local_48,0x1d);
  if (iVar4 != 0) {
    RaiseInternalException
              (iVar4,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x29a);
  }
  iVar4 = -1;
  pcVar8 = (char *)((int)&DAT_007a9440 + *(int *)(param_1 + 0x369) * 6 + 2);
  pcVar7 = pcVar8;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (iVar4 == -2) {
    STT3DSprC::StopShow(*(STT3DSprC **)(param_1 + 0x5ff),0xd);
  }
  else {
    iVar4 = STT3DSprC::LoadSequence(*(STT3DSprC **)(param_1 + 0x5ff),0xd,DAT_0080677c,pcVar8,0x1d);
    if (iVar4 != 0) {
      return 0xffff;
    }
  }
  uVar9 = 10;
  iVar4 = thunk_FUN_004ad650(param_1 + 0x1d5);
  uVar2 = thunk_FUN_004ad650(*(int *)(param_1 + 0x5ff));
  FUN_006ea340(*(void **)(param_1 + 0x211),uVar2,iVar4,uVar9);
  uVar3 = thunk_FUN_004ab050();
  switch(uVar3) {
  case 0:
    uVar5 = *(uint *)(&DAT_007a90b8 + *(int *)(param_1 + 0x369) * 0x10);
    local_8 = DAT_007a9438;
    break;
  case 1:
    local_8 = DAT_007a943c;
    uVar5 = *(uint *)(&DAT_007a90bc + *(int *)(param_1 + 0x369) * 0x10);
    break;
  case 2:
    local_8 = DAT_007a9440;
    uVar5 = *(uint *)(&DAT_007a90c0 + *(int *)(param_1 + 0x369) * 0x10);
    break;
  case 3:
    uVar5 = *(uint *)(&DAT_007a90c4 + *(int *)(param_1 + 0x369) * 0x10);
    local_8 = DAT_007a9444;
  }
  thunk_FUN_004ad460(*(void **)(param_1 + 0x5ff),0);
  thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xe,uVar5,uVar5,'\0');
  thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xc,uVar5,uVar5,'\0');
  STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\x0e',uVar5);
  STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\f',uVar5);
  STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
  STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
  uVar5 = local_8;
  iVar4 = -1;
  pcVar8 = (char *)((int)&DAT_007a9440 + *(int *)(param_1 + 0x369) * 6 + 2);
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xd,local_8,local_8,'\0');
    STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\r',uVar5);
    STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
  }
  return 0;
}


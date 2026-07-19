
undefined4 __fastcall FUN_004d0310(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  byte local_48 [64];
  int local_8;
  
  pbVar7 = local_48;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7 = pbVar7 + 4;
  }
  iVar6 = 0;
  local_8 = 0;
  iVar3 = STT3DSprC::LoadSequence
                    (*(STT3DSprC **)(param_1 + 0x5ff),0xe,DAT_0080677c,
                     &DAT_007a9342 + *(int *)(param_1 + 0x369) * 6,0x1d);
  if (iVar3 != 0) {
    RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x298);
  }
  iVar3 = *(int *)(param_1 + 0x379);
  if (iVar3 == 0xff) {
    iVar3 = *(int *)(param_1 + 0x24);
  }
  wsprintfA((LPSTR)local_48,s__s_1i_007ac908,&DAT_007a9342 + *(int *)(param_1 + 0x369) * 6,iVar3);
  iVar3 = STT3DSprC::LoadSequence(*(STT3DSprC **)(param_1 + 0x5ff),0xc,DAT_0080677c,local_48,0x1d);
  if (iVar3 != 0) {
    RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x29a);
  }
  iVar3 = -1;
  pbVar7 = (byte *)((int)&DAT_007a9440 + *(int *)(param_1 + 0x369) * 6 + 2);
  pbVar8 = pbVar7;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar1 != 0);
  if (iVar3 == -2) {
    STT3DSprC::StopShow(*(STT3DSprC **)(param_1 + 0x5ff),0xd);
  }
  else {
    iVar3 = STT3DSprC::LoadSequence(*(STT3DSprC **)(param_1 + 0x5ff),0xd,DAT_0080677c,pbVar7,0x1d);
    if (iVar3 != 0) {
      return 0xffff;
    }
  }
  uVar10 = 10;
  iVar3 = thunk_FUN_004ad650(param_1 + 0x1d5);
  uVar4 = thunk_FUN_004ad650(*(int *)(param_1 + 0x5ff));
  FUN_006ea340(*(void **)(param_1 + 0x211),uVar4,iVar3,uVar10);
  uVar5 = thunk_FUN_004ab050();
  switch(uVar5) {
  case 0:
    iVar6 = *(int *)(&DAT_007a90b8 + *(int *)(param_1 + 0x369) * 0x10);
    local_8 = DAT_007a9438;
    break;
  case 1:
    local_8 = DAT_007a943c;
    iVar6 = *(int *)(&DAT_007a90bc + *(int *)(param_1 + 0x369) * 0x10);
    break;
  case 2:
    local_8 = DAT_007a9440;
    iVar6 = *(int *)(&DAT_007a90c0 + *(int *)(param_1 + 0x369) * 0x10);
    break;
  case 3:
    iVar6 = *(int *)(&DAT_007a90c4 + *(int *)(param_1 + 0x369) * 0x10);
    local_8 = DAT_007a9444;
  }
  thunk_FUN_004ad460(*(void **)(param_1 + 0x5ff),0);
  thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xe,iVar6,iVar6,'\0');
  thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xc,iVar6,iVar6,'\0');
  STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\x0e',iVar6);
  STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\f',iVar6);
  STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
  STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
  iVar6 = local_8;
  iVar3 = -1;
  pcVar9 = (char *)((int)&DAT_007a9440 + *(int *)(param_1 + 0x369) * 6 + 2);
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  if (iVar3 != -2) {
    thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xd,local_8,local_8,'\0');
    STT3DSprC::SetCurFase(*(STT3DSprC **)(param_1 + 0x5ff),'\r',iVar6);
    STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
  }
  return 0;
}


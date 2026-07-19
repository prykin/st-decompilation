
undefined4 * __cdecl FUN_006803b0(byte param_1)

{
  char cVar1;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR local_a8 [128];
  char local_28 [32];
  cMf32 *local_8;
  
  iVar2 = DAT_00848a04;
  if (DAT_00848a04 < 1) {
    if (-1 < DAT_00848a00) goto LAB_00680474;
  }
  else if (-1 < DAT_00848a00) {
    Library::MSVCRT::__itoa(DAT_00848a04,local_28,10);
    wsprintfA(local_a8,s__s_s_s_007c6edc,&DAT_007d5628,local_28,&DAT_007d5630);
    wsprintfA((LPSTR)&DAT_008478ac,local_a8,&DAT_008489e0,DAT_00848a00);
    DAT_00848a00 = DAT_00848a00 + DAT_007d3fa0;
    return &DAT_008478ac;
  }
  if (DAT_008489d0 != (cMf32 *)0x0) {
    local_8 = DAT_008489d0;
    iVar7 = 0;
    do {
      pCVar3 = FUN_006f2c00(&DAT_008489e0,iVar2,iVar7);
      iVar4 = cMf32::RecChk(local_8,param_1,pCVar3);
      if (iVar4 != 0) {
        if (pCVar3 != (LPSTR)0x0) {
          uVar5 = 0xffffffff;
          goto code_r0x006804ae;
        }
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x7ffffff0);
  }
LAB_00680474:
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_008489e0;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = (char *)&DAT_008478ac;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return &DAT_008478ac;
  while( true ) {
    uVar5 = uVar5 - 1;
    pcVar8 = pCVar3 + 1;
    cVar1 = *pCVar3;
    pCVar3 = pcVar8;
    if (cVar1 == '\0') break;
code_r0x006804ae:
    pcVar8 = pCVar3;
    if (uVar5 == 0) break;
  }
  uVar5 = ~uVar5;
  pcVar8 = pcVar8 + -uVar5;
  pcVar9 = (char *)&DAT_008478ac;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return &DAT_008478ac;
}


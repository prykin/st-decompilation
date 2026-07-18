
undefined4 * __thiscall thunk_FUN_0057f3a0(void *this,int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  LPCSTR pCVar8;
  
  pCVar8 = PTR_s_rgold__d_007cb098;
  if (param_1 == -1) {
    iVar4 = *(int *)((int)this + 0x259) / 999999;
    if (0 < iVar4) {
      iVar4 = 0;
    }
    param_1 = -iVar4;
    pCVar8 = PTR_s_rgold_c0_007cb094;
  }
  wsprintfA((LPSTR)&DAT_00811650,pCVar8,param_1);
  if (param_2 == 0) {
    return &DAT_00811650;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_007cb260;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar5 = (char *)&DAT_00811650;
  do {
    pcVar6 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return &DAT_00811650;
}


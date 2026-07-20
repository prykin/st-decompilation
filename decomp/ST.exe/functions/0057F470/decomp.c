
undefined4 * __thiscall FUN_0057f470(void *this,int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar6 = PTR_s_rmeta__d_007cb0a0;
  if (param_1 == -1) {
    uVar2 = thunk_FUN_0057f240(0xde,*(int *)((int)this + 0x259));
    param_1 = CONCAT31(extraout_var,uVar2);
    pcVar6 = PTR_s_rmeta_c_d_007cb09c;
  }
  wsprintfA((LPSTR)&DAT_00811690,pcVar6,param_1);
  if (param_2 == 0) {
    return &DAT_00811690;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_007cb260;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = (char *)&DAT_00811690;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return &DAT_00811690;
}



int __fastcall FUN_007219a0(AnonShape_007219A0_88F70163 *param_1)

{
  char cVar1;
  AnonNested_007219A0_0138_7CAF6BF8 *pAVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  
  pAVar2 = param_1->field_0138;
  if ((pAVar2 == (AnonNested_007219A0_0138_7CAF6BF8 *)0x0) ||
     (uVar3 = pAVar2->field_0008, uVar3 == 0)) {
    return 0;
  }
  if ((int)uVar3 < 1) {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar8 = *(char **)pAVar2->field_0014;
  }
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar7 = 1;
  iVar6 = ~uVar5 - 1;
  if (1 < uVar3) {
    bVar9 = SBORROW4(1,uVar3);
    iVar4 = 1 - uVar3;
    do {
      if (bVar9 == iVar4 < 0) {
        pcVar8 = (char *)0x0;
      }
      else {
        pcVar8 = *(char **)(pAVar2->field_0014 + uVar7 * 4);
      }
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (iVar6 < (int)(~uVar5 - 1)) {
        iVar6 = ~uVar5 - 1;
      }
      uVar7 = uVar7 + 1;
      bVar9 = SBORROW4(uVar7,uVar3);
      iVar4 = uVar7 - uVar3;
    } while (uVar7 < uVar3);
  }
  return iVar6;
}


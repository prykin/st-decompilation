
char * FUN_00674af0(int param_1)

{
  char *pcVar1;
  AnonShape_006747E0_C06E010E *pAVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  AnonShape_006747E0_C06E010E *pAVar7;

  pcVar5 = &CHAR_00h_008016a0;
  if (PTR_00811934 != nullptr) {
    cVar3 = *(char *)PTR_00811934;
    pcVar6 = PTR_00811934;
    while (cVar3 != '\0') {
      if (*(int *)(pcVar6 + 4) == param_1) {
        return pcVar6;
      }
      pcVar1 = pcVar6 + 8;
      pcVar6 = pcVar6 + 8;
      cVar3 = *pcVar1;
    }
  }
  if (PTR_00811938 != nullptr) {
    cVar3 = *(char *)PTR_00811938;
    pcVar6 = PTR_00811938;
    while (cVar3 != '\0') {
      if (*(int *)(pcVar6 + 4) == param_1) {
        return pcVar6;
      }
      pcVar1 = pcVar6 + 8;
      pcVar6 = pcVar6 + 8;
      cVar3 = *pcVar1;
    }
  }
  if (PTR_0081193c != nullptr) {
    cVar3 = *(char *)PTR_0081193c;
    pcVar6 = PTR_0081193c;
    while (cVar3 != '\0') {
      if (*(int *)(pcVar6 + 4) == param_1) {
        return pcVar6;
      }
      pcVar1 = pcVar6 + 8;
      pcVar6 = pcVar6 + 8;
      cVar3 = *pcVar1;
    }
  }
  if (PTR_00811928 != nullptr) {
    iVar4 = PTR_00811928->field_0000;
    pAVar7 = PTR_00811928;
    while (iVar4 != 0) {
      if (pAVar7->field_0004 == param_1) goto cf_common_exit_00674BC4;
      pAVar2 = pAVar7 + 1;
      pAVar7 = pAVar7 + 1;
      iVar4 = pAVar2->field_0000;
    }
  }
  if (DAT_0081192c != nullptr) {
    iVar4 = DAT_0081192c->field_0000;
    pAVar7 = DAT_0081192c;
    while (iVar4 != 0) {
      if (pAVar7->field_0004 == param_1) goto cf_common_exit_00674BC4;
      pAVar2 = pAVar7 + 1;
      pAVar7 = pAVar7 + 1;
      iVar4 = pAVar2->field_0000;
    }
  }
  if ((PTR_00811930 != nullptr) &&
     (pAVar7 = PTR_00811930, PTR_00811930->field_0000 != 0)) {
    while (pAVar7->field_0004 != param_1) {
      pAVar2 = pAVar7 + 1;
      pAVar7 = pAVar7 + 1;
      if (pAVar2->field_0000 == 0) {
        return pcVar5;
      }
    }
cf_common_exit_00674BC4:
    pcVar5 = (char *)pAVar7->field_0000;
  }
  return pcVar5;
}



int __fastcall FUN_007217e0(AnonShape_007217E0_1A4AB243 *param_1)

{
  char cVar1;
  AnonNested_007217E0_0138_CBD04E88 *pAVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;

  iVar5 = 0;
  param_1->field_0138->field_0004 = 0;
  do {
    pAVar2 = param_1->field_0138;
    if (pAVar2->field_0008 <= (int)pAVar2->field_0004) {
      return iVar5;
    }
    iVar3 = pAVar2->field_0004 + 1;
    pcVar6 = *(char **)(pAVar2->field_0014 + -4 + iVar3 * 4);
    pAVar2->field_0004 = iVar3;
    if (pcVar6 == (char *)0x0) {
      return iVar5;
    }
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = iVar5 + (~uVar4 - 1);
  } while( true );
}


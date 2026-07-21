
int __cdecl FUN_006ecfc0(AnonShape_006ECFC0_6CF214D7 *param_1,AnonShape_006ECFC0_1618ABFE *param_2)

{
  AnonNested_006ECFC0_0064_4836A151 *pAVar1;
  AnonNested_006ECFC0_0064_60428B19 *pAVar2;
  int iVar3;
  int iVar4;

  pAVar1 = param_1->field_0064;
  pAVar2 = param_2->field_0064;
  if (((byte)pAVar1->field_0004 & 0x72) == 2) {
    if (((byte)pAVar2->field_0004 & 0x72) == 2) {
      return ((pAVar1->field_002C - pAVar2->field_002C) - pAVar2->field_0014) + pAVar1->field_0014;
    }
    iVar3 = pAVar2->field_0014;
    iVar4 = pAVar1->field_002C + pAVar1->field_0014;
    if (iVar4 < iVar3) {
      return -1;
    }
    if ((iVar4 == iVar3) && (pAVar1->field_000C < pAVar2->field_000C)) {
      return -1;
    }
    iVar4 = pAVar1->field_0030 / 2 + pAVar1->field_0014;
    if ((iVar4 <= iVar3) && ((iVar4 != iVar3 || (pAVar1->field_000C <= pAVar2->field_000C)))) {
      return (((pAVar1->field_0050 - (pAVar1->field_0038 >> 2)) - pAVar2->field_0088) -
             pAVar2->field_0050) + pAVar1->field_0038;
    }
  }
  else if (((byte)pAVar2->field_0004 & 0x72) == 2) {
    iVar3 = pAVar1->field_0014;
    iVar4 = pAVar2->field_0030 / 2 + pAVar2->field_0014;
    if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (pAVar1->field_000C < pAVar2->field_000C)))) {
      return -1;
    }
    iVar4 = pAVar2->field_002C + pAVar2->field_0014;
    if ((iVar3 <= iVar4) && ((iVar3 != iVar4 || (pAVar1->field_000C <= pAVar2->field_000C)))) {
      return (((pAVar2->field_0038 >> 2) - pAVar2->field_0050) + pAVar1->field_0088 +
             pAVar1->field_0050) - pAVar2->field_0038;
    }
  }
  else {
    if (pAVar1->field_0014 < pAVar2->field_0014) {
      return -1;
    }
    if (pAVar1->field_0014 == pAVar2->field_0014) {
      return pAVar1->field_000C - pAVar2->field_000C;
    }
  }
  return 1;
}


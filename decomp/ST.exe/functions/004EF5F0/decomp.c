
char __cdecl FUN_004ef5f0(AnonShape_004EF5F0_1FA558EC *param_1)

{
  AnonNested_004EF5F0_0014_2E827CED *pAVar1;
  char cVar2;
  bool bVar3;

  bVar3 = false;
  cVar2 = '\b';
  pAVar1 = param_1->field_0014;
  switch(pAVar1->field_0000) {
  case 1:
    cVar2 = '\b';
    break;
  case 2:
    cVar2 = '\n';
    break;
  case 3:
    cVar2 = '\f';
    break;
  case 4:
    cVar2 = '\x06';
  }
  switch(pAVar1->field_0004) {
  case 0:
  case 2:
    return cVar2;
  case 1:
    return cVar2 + '\x01';
  case 3:
    bVar3 = pAVar1->field_0008 != 0;
  }
  return bVar3 + cVar2;
}


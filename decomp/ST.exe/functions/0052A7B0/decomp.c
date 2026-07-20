
char __cdecl FUN_0052a7b0(AnonShape_0052A7B0_DD603BF4 *param_1)

{
  AnonNested_0052A7B0_0014_0177A204 *pAVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = false;
  cVar2 = '\b';
  pAVar1 = param_1->field_0014;
  switch(pAVar1->field_0000) {
  case 1:
    cVar2 = '\0';
    break;
  case 2:
    cVar2 = '\x02';
    break;
  case 3:
    cVar2 = '\x04';
    break;
  case 4:
    cVar2 = '\x0e';
    break;
  case 5:
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


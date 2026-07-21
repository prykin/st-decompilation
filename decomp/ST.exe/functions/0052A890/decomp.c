
char __cdecl FUN_0052a890(AnonShape_0052A890_F679384E *param_1)

{
  AnonNested_0052A890_0014_9BCDCE5B *pAVar1;
  char cVar2;
  bool bVar3;

  cVar2 = '\0';
  bVar3 = false;
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


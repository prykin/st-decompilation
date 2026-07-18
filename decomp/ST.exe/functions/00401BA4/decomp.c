
char __cdecl thunk_FUN_0052a7b0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = false;
  cVar2 = '\b';
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  switch(*puVar1) {
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
  switch(puVar1[1]) {
  case 0:
  case 2:
    return cVar2;
  case 1:
    return cVar2 + '\x01';
  case 3:
    bVar3 = puVar1[2] != 0;
  }
  return bVar3 + cVar2;
}


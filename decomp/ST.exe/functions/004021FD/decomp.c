
int __cdecl thunk_FUN_00677700(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = 0;
  if (DAT_007fa174 == 0) {
    return iVar1;
  }
  cVar3 = (char)param_1;
  switch(param_2) {
  case 0xdc:
    iVar1 = thunk_FUN_004d8870(cVar3);
    return iVar1;
  case 0xdd:
    iVar1 = thunk_FUN_004d89b0(cVar3);
    return iVar1;
  case 0xde:
    iVar1 = thunk_FUN_004d8af0(cVar3);
    return iVar1;
  case 0xdf:
    iVar1 = thunk_FUN_004b72b0(cVar3);
    iVar2 = thunk_FUN_004b71c0(cVar3);
    return iVar2 - iVar1;
  case 0xe2:
    iVar1 = thunk_FUN_004e4410(param_1);
    return iVar1;
  case 0xe3:
    iVar1 = thunk_FUN_004e41c0(param_1);
  }
  return iVar1;
}


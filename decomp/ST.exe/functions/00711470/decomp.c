
int FUN_00711470(uint *param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;

  iVar4 = 0;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  cVar1 = (char)*param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return iVar4;
    }
    puVar3 = Library::MSVCRT::FUN_00730590(param_1,&DAT_007c8ff4);
    iVar5 = iVar4 + 1;
    iVar4 = iVar4 + 1;
    if (puVar3 == (uint *)0x0) break;
    uVar2 = *puVar3;
    *(undefined1 *)puVar3 = 0;
    *(char *)puVar3 = (char)uVar2;
    cVar1 = *(char *)((int)puVar3 + 1);
    param_1 = (uint *)((int)puVar3 + 1);
  }
  return iVar5;
}


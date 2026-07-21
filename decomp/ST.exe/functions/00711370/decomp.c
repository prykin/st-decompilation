
int __thiscall FUN_00711370(void *this,uint *param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  undefined1 uVar4;
  int local_8;

  uVar4 = 0;
  local_8 = 0;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  cVar1 = (char)*param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return local_8;
    }
    puVar2 = Library::MSVCRT::FUN_00730590(param_1,&DAT_007c8ff4);
    if (puVar2 != (uint *)0x0) {
      uVar4 = (undefined1)*puVar2;
      *(undefined1 *)puVar2 = 0;
    }
    iVar3 = FUN_00711110(this,(char *)param_1);
    if (local_8 < iVar3) {
      local_8 = iVar3;
    }
    if (puVar2 == (uint *)0x0) break;
    param_1 = (uint *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = uVar4;
    cVar1 = *(char *)param_1;
  }
  return local_8;
}


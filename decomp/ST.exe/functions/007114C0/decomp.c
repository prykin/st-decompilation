
int __thiscall FUN_007114c0(void *this,uint *param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_5;

  iVar4 = 0;
  local_5 = 0;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  cVar1 = (char)*param_1;
  while (cVar1 != '\0') {
    puVar2 = Library::MSVCRT::FUN_00730590(param_1,&DAT_007c8ff4);
    if (puVar2 != (uint *)0x0) {
      local_5 = (undefined1)*puVar2;
      *(undefined1 *)puVar2 = 0;
    }
    iVar3 = FUN_00711260(this,param_1);
    iVar4 = iVar4 + 1 + iVar3;
    if (puVar2 == (uint *)0x0) break;
    param_1 = (uint *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = local_5;
    cVar1 = *(char *)param_1;
  }
  return iVar4 + -1;
}


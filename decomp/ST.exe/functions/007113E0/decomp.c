
int __thiscall FUN_007113e0(void *this,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int local_c;
  undefined1 local_5;
  
  local_5 = 0;
  local_c = 0;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  iVar2 = 0;
  if ((char)*param_1 != '\0') {
    do {
      iVar3 = iVar2;
      puVar1 = Library::MSVCRT::FUN_00730590(param_1,&DAT_007c8ff4);
      if (puVar1 != (uint *)0x0) {
        local_5 = (undefined1)*puVar1;
        *(undefined1 *)puVar1 = 0;
      }
      iVar2 = FUN_007111c0(this,param_1);
      local_c = local_c + iVar2;
      iVar2 = iVar3 + 1;
      if (puVar1 == (uint *)0x0) break;
      param_1 = (uint *)((int)puVar1 + 1);
      *(undefined1 *)puVar1 = local_5;
    } while (*(char *)param_1 != '\0');
    if (iVar2 != 0) {
      local_c = local_c + *(int *)((int)this + 0x5c) * iVar3;
    }
  }
  return local_c;
}


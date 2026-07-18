
int __thiscall FUN_007112e0(void *this,uint *param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int local_8;
  
  iVar4 = -1;
  bVar3 = false;
  local_8 = -1;
  if (((param_1 != (uint *)0x0) && (*(int *)((int)this + 0x7e) != 0)) &&
     (*(int *)((int)this + 0x82) < 0)) {
    cVar2 = (char)*param_1;
    iVar4 = local_8;
    while (cVar2 != '\0') {
      local_8 = iVar4;
      if (bVar3) {
        bVar3 = false;
        iVar4 = FUN_0070cdc0((byte *)param_1);
        if ((-1 < iVar4) && (local_8 = iVar4, 0xe < iVar4)) {
          local_8 = *(int *)((int)this + 0x48);
        }
      }
      else {
        iVar4 = FUN_0070cd90((char *)((int)this + 0x9e),param_1);
        if ((iVar4 == 0) && (*(int *)((int)this + 0x7e) != 0)) {
          bVar3 = true;
        }
      }
      pcVar1 = (char *)((int)param_1 + 1);
      param_1 = (uint *)((int)param_1 + 1);
      iVar4 = local_8;
      cVar2 = *pcVar1;
    }
  }
  return iVar4;
}


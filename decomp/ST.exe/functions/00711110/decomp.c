
int __thiscall FUN_00711110(void *this,uint *param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  local_8 = 0;
  bVar2 = false;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if ((char)*param_1 != '\0') {
    do {
      if (bVar2) {
        bVar2 = false;
        iVar3 = FUN_0070cdc0((byte *)param_1);
        if (iVar3 < 0) {
LAB_00711153:
          uVar4 = FUN_00710fb0(this,(byte *)param_1);
          local_8 = local_8 + *(short *)(*(int *)((int)this + 0x9a) + 0x6a + (uVar4 & 0xffff) * 10);
          iVar5 = iVar5 + 1;
        }
      }
      else {
        iVar3 = FUN_0070cd90((char *)((int)this + 0x9e),param_1);
        if ((iVar3 != 0) || (*(int *)((int)this + 0x7e) == 0)) goto LAB_00711153;
        bVar2 = true;
      }
      pcVar1 = (char *)((int)param_1 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    } while (*pcVar1 != '\0');
    if (0 < iVar5) {
      local_8 = local_8 + *(int *)((int)this + 0x58) * (iVar5 + -1);
    }
  }
  return local_8;
}


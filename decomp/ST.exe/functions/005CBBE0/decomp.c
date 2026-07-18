
int __thiscall FUN_005cbbe0(void *this,char *param_1)

{
  int iVar1;
  UINT UVar2;
  
  iVar1 = FUN_006b0140(8000,DAT_00807618);
  if (param_1 != (char *)0x0) {
    switch(param_1[4]) {
    case '\x01':
      if (((*(char *)((int)this + 0x1e26) != '\f') && (*(char *)((int)this + 0x1e26) != '\x10')) ||
         (UVar2 = 0x1f5a, *param_1 == '\0')) {
        UVar2 = 0x1f41;
      }
      iVar1 = FUN_006b0140(UVar2,DAT_00807618);
      return iVar1;
    case '\x02':
      iVar1 = FUN_006b0140(0x1f42,DAT_00807618);
      return iVar1;
    case '\x03':
      iVar1 = FUN_006b0140(0x1f46,DAT_00807618);
      return iVar1;
    case '\x04':
      iVar1 = *(int *)(param_1 + 0x50);
      if (((uint)(byte)param_1[5] < *(uint *)(iVar1 + 0xc)) &&
         (iVar1 = *(int *)(iVar1 + 8) * (uint)(byte)param_1[5] + *(int *)(iVar1 + 0x1c), iVar1 != 0)
         ) {
        return iVar1 + 0x40;
      }
      iVar1 = FUN_006b0140(10000,DAT_00807618);
    }
  }
  return iVar1;
}


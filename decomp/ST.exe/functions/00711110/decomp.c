
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005E1330 -> 00711110 @ 005E2065 */

int __thiscall FUN_00711110(void *this,char *resourceString)

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
  if (resourceString == (char *)0x0) {
    return 0;
  }
  if (*resourceString != '\0') {
    do {
      if (bVar2) {
        bVar2 = false;
        iVar3 = FUN_0070cdc0((byte *)resourceString);
        if (iVar3 < 0) {
LAB_00711153:
          uVar4 = FUN_00710fb0(this,(byte *)resourceString);
          local_8 = local_8 + *(short *)(*(int *)((int)this + 0x9a) + 0x6a + (uVar4 & 0xffff) * 10);
          iVar5 = iVar5 + 1;
        }
      }
      else {
        iVar3 = FUN_0070cd90((char *)((int)this + 0x9e),(uint *)resourceString);
        if ((iVar3 != 0) || (*(int *)((int)this + 0x7e) == 0)) goto LAB_00711153;
        bVar2 = true;
      }
      pcVar1 = (char *)((int)resourceString + 1);
      resourceString = (char *)((int)resourceString + 1);
    } while (*pcVar1 != '\0');
    if (0 < iVar5) {
      local_8 = local_8 + *(int *)((int)this + 0x58) * (iVar5 + -1);
    }
  }
  return local_8;
}


#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005E1330 -> 00711110 @ 005E2065 */

int __thiscall FUN_00711110(void *this,char *resourceString)

{
  char *pcVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int local_8;

  iVar5 = 0;
  local_8 = 0;
  bVar2 = false;
  if (resourceString == nullptr) {
    return 0;
  }
  if (*resourceString != '\0') {
    do {
      if (bVar2) {
        bVar2 = false;

        iVar4 = FUN_0070cdc0((byte *)resourceString);
        if (iVar4 < 0) {
LAB_00711153:
          uVar3 = FUN_00710fb0(this,(byte *)resourceString);
          local_8 = local_8 + *(short *)(STField<int>(this,0x9a) + 0x6a + (uint)uVar3 * 10);
          iVar5 = iVar5 + 1;
        }
      }
      else {

        iVar4 = FUN_0070cd90((char *)((int)this + 0x9e),(uint *)resourceString);
        if ((iVar4 != 0) || (STField<int>(this,0x7e) == 0)) goto LAB_00711153;
        bVar2 = true;
      }
      pcVar1 = (char *)((int)resourceString + 1);
      resourceString = (char *)((int)resourceString + 1);
    } while (*pcVar1 != '\0');
    if (0 < iVar5) {
      local_8 = local_8 + STField<int>(this,0x58) * (iVar5 + -1);
    }
  }
  return local_8;
}


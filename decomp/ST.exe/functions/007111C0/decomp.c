#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005545C0 -> 007111C0 @ 0055460C | 00554800 -> 007111C0 @ 005548F6 */

int __thiscall FUN_007111c0(void *this,RecoveredRecord_007111C0_C04D120D *resourceString)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;

  iVar5 = 0;
  bVar2 = false;
  if (resourceString == nullptr) {
    return 0;
  }
  cVar1 = *(char *)resourceString;
  do {
    if (cVar1 == '\0') {
      return iVar5;
    }
    if (bVar2) {
      bVar2 = false;

      iVar4 = FUN_0070cdc0((byte *)resourceString);
      if (iVar4 < 0) {
LAB_00711200:
        uVar3 = FUN_00710fb0(this,(byte *)resourceString);
        iVar4 = (int)*(short *)(STField<int>(this,0x9a) + 0x6c + (uint)uVar3 * 10);
        if (iVar5 < iVar4) {
          iVar5 = iVar4;
        }
      }
    }
    else {

      iVar4 = FUN_0070cd90((char *)((int)this + 0x9e),(uint *)resourceString);
      if ((iVar4 != 0) || (STField<int>(this,0x7e) == 0)) goto LAB_00711200;
      bVar2 = true;
    }
    cVar1 = resourceString->field_0001;
    resourceString = (RecoveredRecord_007111C0_C04D120D *)&resourceString->field_0001;
  } while( true );
}


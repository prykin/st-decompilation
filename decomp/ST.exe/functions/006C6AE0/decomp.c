#include "../../pseudocode_runtime.h"


int FUN_006c6ae0(AnonShape_006C6AE0_9C4F43C2 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  short local_14;
  short local_12;
  byte local_10;
  byte local_f;
  short local_c;
  short local_a;
  short local_8;

  /* ST_CALLSITE[006C6AF3]: CALL dword ptr [ESI + 0x42] */
  iVar2 = (*STField<code *>(param_1,0x42))(param_1,&local_c,6);
  if (iVar2 == 6) {
    if (local_c != 0x4947) {
      return -5;
    }
    if (local_a != 0x3846) {
      return -5;
    }
    if ((local_8 != 0x6137) && (local_8 != 0x6139)) {
      return -5;
    }
    /* ST_CALLSITE[006C6B32]: CALL dword ptr [ESI + 0x42] */
    iVar2 = (*STField<code *>(param_1,0x42))(param_1,&local_14,7);
    if (iVar2 == 7) {
      param_1->field_000C = (int)local_12;
      param_1->field_0008 = (int)local_14;
      iVar2 = 0;
      param_1->field_0011 = local_f;
      param_1->field_0010 = local_10 & 7;
      if ((local_10 & 0x80) != 0) {
        iVar1 = (1 << (local_10 & 7) + 1) * 3;
        piVar3 = FUN_006bfb70(iVar1);
        param_1->field_0012 = (int)piVar3;
        if (piVar3 == nullptr) {
          return -2;
        }
        /* ST_CALLSITE[006C6B8C]: CALL dword ptr [ESI + 0x42] */
        iVar2 = (*STField<code *>(param_1,0x42))(param_1,piVar3,iVar1);
        if (iVar2 == iVar1) {
          iVar2 = 0;
        }
        else {
          FreeAndNull(&param_1->field_0012);
          if (-1 < iVar2) {
            iVar2 = -5;
          }
        }
      }
      /* ST_CALLSITE[006C6BAC]: CALL dword ptr [ESI + 0x4a] */
      uVar4 = (*STField<code *>(param_1,0x4A))(param_1);
      param_1->field_0052 = uVar4;
      param_1->field_0056 = 4;
      return iVar2;
    }
  }
  if (-1 < iVar2) {
    return -5;
  }
  return iVar2;
}


#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0060ea30(void *this,AnonShape_0060EA30_DCEB68AD *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *local_8;

  uVar1 = param_1->field_0010;
  local_8 = this;
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      thunk_FUN_00614bf0(this);
      return 0;
    }
    if (uVar1 == 0) {
      iVar3 = thunk_FUN_006101b0(this);
      if (iVar3 != 0) {
        thunk_FUN_0060ec00(this);
        *(undefined4 *)((int)this + 0x20c) = 9;
        return 0;
      }
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined4 *)param_1->field_0014;
      if (puVar4[3] != 2) {
        puVar5 = (undefined4 *)((int)this + 0x1d5);
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)((int)this + 0x1d5) = 0x15e;
        *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x1d9);
        thunk_FUN_00614400(this,(AnonShape_00614400_1B90EA7E *)param_1->field_0014);
        thunk_FUN_00615390(this);
        uVar2 = thunk_FUN_0060ecc0();
        *(char *)((int)this + 0x2e9) = (char)uVar2;
        return 0;
      }
      thunk_FUN_00614a90(this,puVar4);
      memset((void *)((int)this + 0x2eb), 0, 0x2d); /* compiler bulk-zero initialization */
      iVar3 = 0;
      if (((*(int *)((int)this + 0x20c) != 7) && (*(int *)((int)this + 0x20c) != 9)) &&
         (iVar3 = STGenBombC::LoadImagSpr(this,1,0), iVar3 != 0)) {
        return 0;
      }
      thunk_FUN_0060ec00(this);
      *(undefined4 *)((int)this + 0x20c) = 9;
      return 0;
    }
  }
  else if ((uVar1 == 0x10f) &&
          (local_8 = (byte *)thunk_FUN_00614950(this,(int *)&param_1), local_8 != (byte *)0x0)) {
    STPlaySystemC::SaveObjData(PTR_00802a38,*(undefined4 *)((int)this + 0x18),local_8,param_1);
    FreeAndNull(&local_8);
  }
  return 0;
}


#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0060ea30(void *this,AnonShape_0060EA30_DCEB68AD *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  byte *puVar6;
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
        STField<undefined4>(this,0x20c) = 9;
        return 0;
      }
    }
    else if (uVar1 == 2) {
      puVar5 = (byte *)param_1->field_0014;
      if (puVar5[3] != 2) {
        puVar6 = (byte *)((int)this + 0x1d5);
        memmove(puVar6, puVar5, 0x14); /* compiler REP MOVS byte copy */
        STField<undefined4>(this,0x1d5) = 0x15e;
        STField<undefined4>(this,0x24) = STField<undefined4>(this,0x1d9);
        thunk_FUN_00614400(this,(AnonShape_00614400_1B90EA7E *)param_1->field_0014);
        thunk_FUN_00615390(this);
        uVar2 = thunk_FUN_0060ecc0();
        STField<char>(this,0x2e9) = (char)uVar2;
        return 0;
      }
      thunk_FUN_00614a90(this,puVar5);
      memset((void *)((int)this + 0x2eb), 0, 0x2d); /* compiler bulk-zero initialization */
      iVar4 = 0;
      if (((STField<int>(this,0x20c) != 7) && (STField<int>(this,0x20c) != 9)) &&
         /* ST_CALLSITE[0060EAFB]: CALL 0x00405993; direct=00405993 STGenBombC::LoadImagSpr */
         (iVar4 = STGenBombC::LoadImagSpr(this,1,0), iVar4 != 0)) {
        return 0;
      }
      thunk_FUN_0060ec00(this);
      STField<undefined4>(this,0x20c) = 9;
      return 0;
    }
  }
  else if ((uVar1 == 0x10f) &&
          (local_8 = (byte *)thunk_FUN_00614950(this,(int *)&param_1), local_8 != nullptr)) {
    /* ST_CALLSITE[0060EB81]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,STField<int *>(this,0x18),local_8,(uint)param_1);
    FreeAndNull(&local_8);
  }
  return 0;
}


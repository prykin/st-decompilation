#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005fd3a0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int local_EAX_152;
  int iVar3;
  int iVar4;
  uint *puVar5;
  byte *puVar6;
  byte *local_10;
  uint local_c;
  short local_8;
  short local_6;

  iVar4 = param_1;
  /* ST_CALLSITE[005FD3AE]: CALL 0x00403ebd; direct=00403EBD STGameObjC::GetMessage */
  iVar2 = STGameObjC::GetMessage(this,(STMessage *)param_1);
  if (iVar2 == 0xffff) {
    return 0xffff;
  }
  uVar1 = STField<uint>(iVar4,0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      thunk_FUN_005fda60(this);
      return 0;
    }
    if (uVar1 == 0) {
      iVar4 = thunk_FUN_00600750(this);
      if (iVar4 != 0) {
LAB_005fd4eb:
        thunk_FUN_005fd6a0(this);
        return 0;
      }
    }
    else if (uVar1 == 2) {
      puVar5 = *(undefined4 **)(iVar4 + 0x14);
      if (puVar5[3] != 2) {
        puVar6 = (byte *)((int)this + 0x206);
        memmove(puVar6, puVar5, 0x2c); /* compiler REP MOVS byte copy */
        puVar5 = puVar5 + 0xb;
        STField<undefined4>(this,0x22a) = DAT_007e65e4;
        iVar4 = thunk_FUN_005fd830();
        if (iVar4 != 0) {
          STField<undefined1>(this,0x232) = 1;
        }
        local_EAX_152 = thunk_FUN_005fd850(this);
        if ((-1 < local_EAX_152) &&
           (iVar4 = thunk_FUN_005ff3a0(this,(uint *)&local_6,(short *)((int)&param_1 + 2),&local_8),
           iVar4 != 0)) {
          thunk_FUN_005fea50(this);
          thunk_FUN_005feb60(this,(int)local_6,(int)STPiece<2,2>(param_1),(int)local_8);
          thunk_FUN_00600110(this,(int)local_6,(int)STPiece<2,2>(param_1),0x45f);
          return 0;
        }
        goto LAB_005fd4eb;
      }
      iVar3 = thunk_FUN_006010a0(this,puVar5);
      if (iVar3 != 0) {
        memset((void *)((int)this + 0x1d5), 0, 0x2d); /* compiler bulk-zero initialization */
        if (STField<char>(this,0x232) != '\0') {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005FDB50::thunk_FUN_005fdb50
                    (this,0,-1);
          return 0;
        }
      }
    }
  }
  else if ((uVar1 == 0x10f) &&
          (local_10 = (byte *)thunk_FUN_006012d0(this,(int *)&local_c), local_10 != nullptr)) {
    /* ST_CALLSITE[005FD535]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,STField<int *>(this,0x18),local_10,local_c);
    FreeAndNull(&local_10);
  }
  return 0;
}


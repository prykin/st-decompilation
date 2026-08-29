#include "../../pseudocode_runtime.h"


/* [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=forwarded:0041AF40; family_names=STGameObjC::GetMessage; ret4=6;
   direct_offsets={10:1,14:1,18:1,1c:0}; forwarded_envelope=true */

int __thiscall FUN_005fd3a0(void *this,STMessage *message)

{
  STMessageId SVar1;
  STMessage *pSVar2;
  int iVar4;
  int local_EAX_152;
  int iVar3;
  uint *puVar5;
  byte *puVar6;
  byte *local_10;
  uint local_c;
  short local_8;
  short local_6;

  pSVar2 = message;
  /* ST_CALLSITE[005FD3AE]: CALL 0x00403ebd; direct=00403EBD STGameObjC::GetMessage */
  iVar4 = STGameObjC::GetMessage(this,message);
  if (iVar4 == 0xffff) {
    return 0xffff;
  }
  SVar1 = pSVar2->id;
  if (SVar1 < 4) {
    if (SVar1 == MESS_SHARED_0003) {
      thunk_FUN_005fda60(this);
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {

      iVar4 = thunk_FUN_00600750(this);
      if (iVar4 != 0) {
LAB_005fd4eb:

        thunk_FUN_005fd6a0(this);
        return 0;
      }
    }
    else if (SVar1 == MESS_ID_CREATE) {
      puVar5 = (pSVar2->arg0).ptr;
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

           (iVar4 = thunk_FUN_005ff3a0(this,(uint *)&local_6,(short *)((int)&message + 2),&local_8),
           iVar4 != 0)) {
          thunk_FUN_005fea50(this);

          thunk_FUN_005feb60(this,(int)local_6,(int)STPiece<2,2>(message),(int)local_8);
          thunk_FUN_00600110(this,(int)local_6,(int)STPiece<2,2>(message),0x45f);
          return 0;
        }
        goto LAB_005fd4eb;
      }

      iVar3 = thunk_FUN_006010a0(this,puVar5);
      if (iVar3 != 0) {
        memset((void *)((int)this + 0x1d5), 0, 0x2d); /* compiler bulk-zero initialization */
        if (STField<char>(this,0x232) != '\0') {

          SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_005FDB50::thunk_FUN_005fdb50
                    (this,0,-1);
          return 0;
        }
      }
    }
  }
  else if ((SVar1 == MESS_SHARED_010F) &&
          /* ST_CALLSITE[005FD51A]: CALL 0x00403161; direct=00403161 thunk_FUN_006012d0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
          (local_10 = STPointerBoundaryCast<byte *>(thunk_FUN_006012d0(this,(int *)&local_c)), local_10 != nullptr)) {
    /* ST_CALLSITE[005FD535]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,STField<int *>(this,0x18),local_10,local_c);
    FreeAndNull(&local_10);
  }
  return 0;
}


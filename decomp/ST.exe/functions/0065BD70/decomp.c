#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiEventClassTy.
   Evidence: this_call_owners=[AiEventClassTy]; agreed_this_calls=1; incoming_this_accesses=89;
   incoming_edx_uses=1; incoming_stack_parameter_uses=26

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00652810 -> 0065BD70 @ 00652844 | 00652810 -> 0065BD70 @ 00652933 */

int __thiscall AiEventClassTy::sub_0065BD70(AiEventClassTy *this,STMessage *message,int param_2)

{
  STMessageId SVar1;
  STFishC *this_00;
  AiEventClassTyVTable *pAVar2;
  STMessage *pSVar3;
  dword dVar4;
  STGameObjC *pSVar5;
  uint uVar6;
  word wVar7;
  ushort uVar8;
  char *pcVar9;
  DArrayTy *pDVar10;
  char local_1c [16];
  int local_c;
  short local_6;

  pSVar3 = message;
  SVar1 = message->id;
  if (SVar1 < (MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005)) {
    if (SVar1 == 0x5ddc) {
      local_c = 0x464;
    }
    else if (SVar1 < MESS_SHARED_5DD5) {
      if (SVar1 == 0x5dd4) {
        local_c = 0x45d;
      }
      else if (SVar1 < 0x5dd1) {
        if (SVar1 == MESS_AIBOSSCLASSTY_5DD0) {
          local_c = 0x459;
        }
        else if (SVar1 == MESS_ID_NONE) {
          local_c = 0x456;
        }
        else if (SVar1 == MESS_AIBOSSCLASSTY_5DC5) {
          local_c = 0x457;
        }
        else {
          if (SVar1 != MESS_AIBOSSCLASSTY_5DC6) {
            return -1;
          }
          local_c = 0x458;
        }
      }
      else if (SVar1 == 0x5dd1) {
        local_c = 0x45a;
      }
      else if (SVar1 == (MESS_AIBOSSCLASSTY_5DD0|MESS_ID_CREATE)) {
        local_c = 0x45b;
      }
      else {
        if (SVar1 != (MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0003)) {
          return -1;
        }
        local_c = 0x45c;
      }
    }
    else {
      switch(SVar1) {
      case MESS_SHARED_5DD5:
        local_c = 0x474;
        break;
      case 0x5dd6:
        local_c = 0x45e;
        break;
      case 0x5dd7:
        local_c = 0x45f;
        break;
      case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008:
        local_c = 0x460;
        break;
      case MESS_AIBOSSCLASSTY_5DD0|MESS_CURSORCLASSTY_0009:
        local_c = 0x461;
        break;
      case MESS_AIBOSSCLASSTY_5DD0|MESS_SYSTEMCLASSTY_000A:
        local_c = 0x462;
        break;
      case 0x5ddb:
        local_c = 0x463;
        break;
      default:
        return -1;
      }
    }
  }
  else {
    switch(SVar1) {
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005:
      local_c = 0x465;
      break;
    case 0x5dde:
      local_c = 0x466;
      break;
    case 0x5ddf:
      local_c = 0x467;
      break;
    case 0x5de0:
      local_c = 0x468;
      break;
    case 0x5de1:
      local_c = 0x469;
      break;
    case 0x5de2:
      local_c = 0x46a;
      break;
    case 0x5de3:
      local_c = 0x46b;
      break;
    case 0x5de4:
      local_c = 0x46c;
      break;
    case 0x5de5:
      local_c = 0x471;
      break;
    case 0x5de6:
      local_c = 0x46d;
      break;
    case 0x5de7:
    case 0x5de8:
      local_c = 0x46e;
      break;
    case 0x5de9:
      local_c = 0x46f;
      break;
    case 0x5dea:
      local_c = 0x470;
      break;
    case 0x5deb:
      local_c = 0x472;
      break;
    case MESS_SHARED_5DEC:
      local_c = 0x473;
      break;
    default:
      return -1;
    }
  }
  if (param_2 == 0) {
    return local_c;
  }
  switch(SVar1) {
  case MESS_AIBOSSCLASSTY_5DC5:
    this->field_052F[0] = (uint)message->arg0;
    goto cf_common_exit_0065C65B;
  case MESS_AIBOSSCLASSTY_5DC6:
    pcVar9 = (message->arg0).ptr;
    pDVar10 = this->field_05B3;
    uVar6 = 0;
    break;
  default:
    goto cf_common_exit_0065C65B;
  case MESS_AIBOSSCLASSTY_5DD0:
  case 0x5dd1:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_ID_CREATE:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0003:
  case 0x5dd4:
  case MESS_SHARED_5DD5:
    wVar7 = (message->arg0).words.low;
    if (((-1 < (short)wVar7) && ((short)wVar7 < 8)) &&
       (uVar6 = (uint)(short)wVar7, g_bulkInitializedRecords_008087C7[uVar6].field_0022 != 0xff)) {
      this->field_052F[0] = uVar6;
      this->field_052F[1] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0021;
      this->field_052F[2] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0023;
      /* ST_CALLSITE[0065BFAD]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar5 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,(char)wVar7,(message->arg0).words.high,CASE_1);
      if (pSVar5 != nullptr) {
        /* ST_CALLSITE[0065BFC0]: CALL dword ptr [EDX + 0x2c] */
        uVar6 = pSVar5->vfunc_2C();
        this->field_052F[3] = uVar6;
        /* ST_CALLSITE[0065BFCD]: CALL dword ptr [EAX + 0x6c] */
        uVar6 = pSVar5->vfunc_6C();
        this->field_052F[4] = uVar6;
        /* ST_CALLSITE[0065BFE4]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0
                  ((STFishC *)pSVar5,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),
                   &local_6);
        this->field_052F[5] = (int)STPiece<2,2>(message);
        this->field_052F[6] = (int)STPiece<2,2>(param_2);
        this->field_052F[7] = (int)local_6;
        if (pSVar5->field_0030 == 0xffff) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(ushort)pSVar5->field_0030;
        }
        this->field_052F[8] = uVar6;
LAB_0065c021:
        /* ST_CALLSITE[0065C029]: CALL dword ptr [EDX + 0x74] */
        (*pSVar5->vtable->vfunc_74)((short)local_1c);

        Library::DKW::TBL::FUN_006b6020(this->field_05B3,0,local_1c);
      }
    }
    goto LAB_0065c03e;
  case 0x5dd6:
  case 0x5dd7:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_CURSORCLASSTY_0009:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SYSTEMCLASSTY_000A:
    /* ST_CALLSITE[0065C0A5]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar5 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,'\0',(message->arg0).words.high,CASE_5);
    if (pSVar5 != nullptr) {
      /* ST_CALLSITE[0065C0B8]: CALL dword ptr [EDX + 0x12c]; [STIndirectCallsiteApplier] exact slot 0x12C; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      uVar6 = (*pSVar5->vtable[1].vfunc_58)(pSVar5);
      this->field_052F[0] = uVar6;
      /* ST_CALLSITE[0065C0C8]: CALL dword ptr [EAX + 0xc] */
      uVar6 = pSVar5->vfunc_0C();
      this->field_052F[1] = uVar6;
      this->field_052F[2] = (uint)g_bulkInitializedRecords_008087C7[this->field_052F[0]].field_0023;
      /* ST_CALLSITE[0065C0ED]: CALL dword ptr [EDX + 0x130]; [STIndirectCallsiteApplier] exact slot 0x130; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      uVar6 = (*pSVar5->vtable[1].vfunc_5C)(pSVar5);
      this->field_052F[3] = uVar6;
      this->field_052F[4] = 0;
      /* ST_CALLSITE[0065C111]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
      STFishC::sub_004162F0
                ((STFishC *)pSVar5,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),
                 &local_6);
      this->field_052F[5] = (int)STPiece<2,2>(message);
      this->field_052F[6] = (int)STPiece<2,2>(param_2);
      this->field_052F[7] = (int)local_6;
      /* ST_CALLSITE[0065C138]: CALL dword ptr [EAX + 0x138]; [STIndirectCallsiteApplier] exact slot 0x138; signature=__thiscall;/undefined4;pointer:/STGameObjC */
      uVar6 = (*pSVar5->vtable[1].vfunc_64)(pSVar5);
      this->field_052F[8] = uVar6;
      /* ST_CALLSITE[0065C14C]: CALL dword ptr [EDX + 0x74] */
      (*pSVar5->vtable->vfunc_74)((short)local_1c);

      Library::DKW::TBL::FUN_006b6020(this->field_05B3,0,local_1c);
    }
    wVar7 = (pSVar3->arg1).words.low;
    if (((-1 < (short)wVar7) && ((short)wVar7 < 8)) &&
       (uVar6 = (uint)(short)wVar7, g_bulkInitializedRecords_008087C7[uVar6].field_0022 != 0xff)) {
      this->field_052F[10] = uVar6;
      this->field_052F[0xb] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0021;
      this->field_052F[0xc] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0023;
      uVar8 = (pSVar3->arg1).words.high;
      goto LAB_0065c4bb;
    }
    goto cf_common_exit_0065C570;
  case 0x5ddb:
  case 0x5ddc:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005:
  case 0x5dde:
    /* ST_CALLSITE[0065C1C8]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar5 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,'\0',(message->arg0).words.high,CASE_2);
    if (pSVar5 != nullptr) {
      this->field_052F[0] = 0;
      /* ST_CALLSITE[0065C1E1]: CALL dword ptr [EDX + 0xc] */
      uVar6 = pSVar5->vfunc_0C();
      this->field_052F[1] = uVar6;
      this->field_052F[2] = 0;
      uVar6 = pSVar5->field_0342;
      this->field_052F[4] = 0;
      this->field_052F[3] = uVar6;
      /* ST_CALLSITE[0065C212]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
      STFishC::sub_004162F0
                ((STFishC *)pSVar5,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),
                 &local_6);
      this->field_052F[6] = (int)STPiece<2,2>(param_2);
      this->field_052F[5] = (int)STPiece<2,2>(message);
      this->field_052F[7] = (int)local_6;
      /* ST_CALLSITE[0065C23D]: CALL dword ptr [EDX + 0x74] */
      (*pSVar5->vtable->vfunc_74)((short)local_1c);

      Library::DKW::TBL::FUN_006b6020(this->field_05B3,0,local_1c);
    }
    wVar7 = (pSVar3->arg1).words.low;
    if ((((short)wVar7 < 0) || (7 < (short)wVar7)) ||
       (uVar6 = (uint)(short)wVar7, g_bulkInitializedRecords_008087C7[uVar6].field_0022 == 0xff))
    goto cf_common_exit_0065C570;
    this->field_052F[10] = uVar6;
    this->field_052F[0xb] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0021;
    this->field_052F[0xc] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0023;
    uVar8 = (pSVar3->arg1).words.high;
    goto LAB_0065c4bb;
  case 0x5ddf:
  case 0x5de0:
  case 0x5de1:
  case 0x5de2:
    this_00 = (message->arg0).ptr;
    if (this_00 != nullptr) {
      this->field_052F[0] = 0;
      this->field_052F[1] = 0;
      this->field_052F[2] = 0;
      /* ST_CALLSITE[0065C2C9]: CALL dword ptr [EAX + 0x2c] */
      dVar4 = this_00->vfunc_2C();
      this->field_052F[3] = dVar4;
      this->field_052F[4] = 0;
      /* ST_CALLSITE[0065C2EA]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      STFishC::sub_004162B0
                (this_00,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),&local_6);
      this->field_052F[5] = (int)STPiece<2,2>(message);
      this->field_052F[6] = (int)STPiece<2,2>(param_2);
      this->field_052F[7] = (int)local_6;
    }
    wVar7 = (pSVar3->arg1).words.low;
    if (pSVar3->id != 0x5de1) goto cf_common_exit_0065C570;
    goto LAB_0065c042;
  case 0x5de3:
  case 0x5de4:
    wVar7 = (message->arg0).words.low;
    if (((-1 < (short)wVar7) && ((short)wVar7 < 8)) &&
       (uVar6 = (uint)(short)wVar7, g_bulkInitializedRecords_008087C7[uVar6].field_0022 != 0xff)) {
      this->field_052F[0] = uVar6;
      this->field_052F[1] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0021;
      this->field_052F[2] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0023;
      /* ST_CALLSITE[0065C382]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar5 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,'\0',(message->arg0).words.high,CASE_3);
      if (pSVar5 != nullptr) {
        /* ST_CALLSITE[0065C395]: CALL dword ptr [EDX + 0x2c] */
        uVar6 = pSVar5->vfunc_2C();
        this->field_052F[3] = uVar6;
        /* ST_CALLSITE[0065C3A2]: CALL dword ptr [EAX + 0x6c] */
        uVar6 = pSVar5->vfunc_6C();
        this->field_052F[4] = uVar6;
        /* ST_CALLSITE[0065C3B9]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0
                  ((STFishC *)pSVar5,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),
                   &local_6);
        this->field_052F[5] = (int)STPiece<2,2>(message);
        this->field_052F[6] = (int)STPiece<2,2>(param_2);
        this->field_052F[7] = (int)local_6;
        goto LAB_0065c021;
      }
    }
LAB_0065c03e:
    wVar7 = (pSVar3->arg1).words.low;
LAB_0065c042:
    if ((((short)wVar7 < 0) || (7 < (short)wVar7)) ||
       (uVar6 = (uint)(short)wVar7, g_bulkInitializedRecords_008087C7[uVar6].field_0022 == 0xff)) {
cf_common_exit_0065C570:
      this->field_052F[10] = 0xff;
      goto cf_common_exit_0065C65B;
    }
    this->field_052F[10] = uVar6;
    this->field_052F[0xb] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0021;
    this->field_052F[0xc] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0023;
    uVar8 = (pSVar3->arg1).words.high;
    goto LAB_0065c4bb;
  case 0x5de5:
    wVar7 = (message->arg0).words.low;
    if ((((short)wVar7 < 0) || (7 < (short)wVar7)) ||
       (uVar6 = (uint)(short)wVar7, g_bulkInitializedRecords_008087C7[uVar6].field_0022 == 0xff))
    goto cf_common_exit_0065C65B;
    this->field_052F[0] = uVar6;
    this->field_052F[1] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0021;
    this->field_052F[2] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0023;
    this->field_052F[3] = (uint)(message->arg0).words.high;
    this->field_052F[4] = (uint)(message->arg2).words.low;
    if ((message->arg1).u32 == 0) goto cf_common_exit_0065C65B;
    pDVar10 = this->field_05B3;
    pcVar9 = (char *)((message->arg1).u32 + 0x3b);
    uVar6 = 0;
    break;
  case 0x5de6:
  case 0x5de7:
  case 0x5de8:
  case 0x5de9:
  case 0x5dea:
    wVar7 = (message->arg0).words.low;
    if (((-1 < (short)wVar7) && ((short)wVar7 < 8)) &&
       (uVar6 = (uint)(short)wVar7, g_bulkInitializedRecords_008087C7[uVar6].field_0022 != 0xff)) {
      this->field_052F[0] = uVar6;
      this->field_052F[1] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0021;
      this->field_052F[2] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0023;
      this->field_052F[3] = (uint)(message->arg1).words.low;
      this->field_052F[4] = (uint)(message->arg1).words.high;
      this->field_052F[5] = (uint)(message->id == 0x5de7);
    }
    if ((message->id < 0x5de6) || (0x5de8 < message->id)) goto cf_common_exit_0065C65B;
    wVar7 = (message->arg0).words.low;
    if (((short)wVar7 < 0) ||
       ((7 < (short)wVar7 ||
        (uVar6 = (uint)(short)wVar7, g_bulkInitializedRecords_008087C7[uVar6].field_0022 == 0xff))))
    goto cf_common_exit_0065C570;
    this->field_052F[10] = uVar6;
    this->field_052F[0xb] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0021;
    this->field_052F[0xc] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0023;
    uVar8 = (message->arg0).words.high;
LAB_0065c4bb:
    if ((uVar8 == 0xffff) ||
       /* ST_CALLSITE[0065C4D0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
       (pSVar5 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)wVar7,uVar8,CASE_1),
       pSVar5 == nullptr)) {
      this->field_052F[0xd] = 0;
      goto cf_common_exit_0065C65B;
    }
    /* ST_CALLSITE[0065C4E3]: CALL dword ptr [EDX + 0x2c] */
    uVar6 = pSVar5->vfunc_2C();
    this->field_052F[0xd] = uVar6;
    /* ST_CALLSITE[0065C4F0]: CALL dword ptr [EAX + 0x6c] */
    uVar6 = pSVar5->vfunc_6C();
    this->field_052F[0xe] = uVar6;
    /* ST_CALLSITE[0065C507]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    STFishC::sub_004162B0
              ((STFishC *)pSVar5,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),&local_6);
    this->field_052F[0xf] = (int)STPiece<2,2>(message);
    this->field_052F[0x10] = (int)STPiece<2,2>(param_2);
    this->field_052F[0x11] = (int)local_6;
    if (pSVar5->field_0030 == 0xffff) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)(ushort)pSVar5->field_0030;
    }
    this->field_052F[0x12] = uVar6;
    /* ST_CALLSITE[0065C54C]: CALL dword ptr [EDX + 0x74] */
    (*pSVar5->vtable->vfunc_74)((short)local_1c);
    pDVar10 = this->field_05B3;
    pcVar9 = local_1c;
    uVar6 = 1;
    break;
  case 0x5deb:
  case MESS_SHARED_5DEC:
    wVar7 = (message->arg0).words.low;
    if ((((short)wVar7 < 0) || (7 < (short)wVar7)) ||
       (uVar6 = (uint)(short)wVar7, g_bulkInitializedRecords_008087C7[uVar6].field_0022 == 0xff))
    goto cf_common_exit_0065C65B;
    this->field_052F[0] = uVar6;
    this->field_052F[1] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0021;
    this->field_052F[2] = (uint)g_bulkInitializedRecords_008087C7[uVar6].field_0023;
    if ((message->arg1).u32 == 0) goto cf_common_exit_0065C65B;
    pDVar10 = this->field_05B3;
    pcVar9 = (char *)((message->arg1).u32 + 0x92);
    uVar6 = 0;
  }

  Library::DKW::TBL::FUN_006b6020(pDVar10,uVar6,pcVar9);
cf_common_exit_0065C65B:
  this->field_052F[0x1e] = g_playSystem_00802A38->field_00E4 / 0x19;
  pAVar2 = this->vtable;
  this->field_052F[0x1f] = g_playSystem_00802A38->field_00E4;
  /* ST_CALLSITE[0065C68B]: CALL dword ptr [EDX + 0x14] */
  uVar6 = (*pAVar2->vfunc_14)(this);
  this->field_052F[0x20] = uVar6;
  return local_c;
}


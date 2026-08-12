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
  STMessage *pSVar2;
  dword dVar3;
  STGameObjC *pSVar4;
  undefined4 uVar5;
  int iVar6;
  word wVar7;
  ushort uVar8;
  char *pcVar9;
  DArrayTy *pDVar10;
  uint uVar11;
  char local_1c [16];
  int local_c;
  short local_6;

  pSVar2 = message;
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
    this->field_052F = message->arg0;
    goto cf_common_exit_0065C65B;
  case MESS_AIBOSSCLASSTY_5DC6:
    pcVar9 = (message->arg0).ptr;
    pDVar10 = this->field_05B3;
    uVar11 = 0;
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
       (iVar6 = (int)(short)wVar7, g_bulkInitializedRecords_008087C7[iVar6].field_0022 != 0xff)) {
      this->field_052F = iVar6;
      this->field_0533 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0021;
      this->field_0537 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0023;
      pSVar4 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,(char)wVar7,(message->arg0).words.high,CASE_1);
      if (pSVar4 != nullptr) {
        uVar5 = (*pSVar4->vtable->vfunc_2C)();
        this->field_053B = uVar5;
        uVar5 = pSVar4->vfunc_6C();
        this->field_053F = uVar5;
        STFishC::sub_004162B0
                  ((STFishC *)pSVar4,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),
                   &local_6);
        this->field_0543 = (int)STPiece<2,2>(message);
        this->field_0547 = (int)STPiece<2,2>(param_2);
        this->field_054B = (int)local_6;
        if (pSVar4->field_0030 == 0xffff) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = (uint)(ushort)pSVar4->field_0030;
        }
        this->field_054F = uVar11;
LAB_0065c021:
        (*pSVar4->vtable->vfunc_74)((short)local_1c);
        Library::DKW::TBL::FUN_006b6020(this->field_05B3,0,local_1c);
      }
    }
    goto LAB_0065c03e;
  case 0x5dd6:
  case 0x5dd7:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_CURSORCLASSTY_0009:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SYSTEMCLASSTY_000A:
    pSVar4 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,'\0',(message->arg0).words.high,CASE_5);
    if (pSVar4 != nullptr) {
      uVar5 = (*pSVar4->vtable->vfunc_12C)();
      this->field_052F = uVar5;
      uVar5 = (*pSVar4->vtable->vfunc_0C)();
      this->field_0533 = uVar5;
      this->field_0537 = (uint)g_bulkInitializedRecords_008087C7[this->field_052F].field_0023;
      uVar5 = (*pSVar4->vtable->vfunc_130)();
      this->field_053B = uVar5;
      this->field_053F = 0;
      STFishC::sub_004162F0
                ((STFishC *)pSVar4,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),
                 &local_6);
      this->field_0543 = (int)STPiece<2,2>(message);
      this->field_0547 = (int)STPiece<2,2>(param_2);
      this->field_054B = (int)local_6;
      uVar5 = (*pSVar4->vtable->vfunc_138)();
      this->field_054F = uVar5;
      (*pSVar4->vtable->vfunc_74)((short)local_1c);
      Library::DKW::TBL::FUN_006b6020(this->field_05B3,0,local_1c);
    }
    wVar7 = (pSVar2->arg1).words.low;
    if (((-1 < (short)wVar7) && ((short)wVar7 < 8)) &&
       (iVar6 = (int)(short)wVar7, g_bulkInitializedRecords_008087C7[iVar6].field_0022 != 0xff)) {
      this->field_0557 = iVar6;
      this->field_055B = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0021;
      this->field_055F = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0023;
      uVar8 = (pSVar2->arg1).words.high;
      goto LAB_0065c4bb;
    }
    goto cf_common_exit_0065C570;
  case 0x5ddb:
  case 0x5ddc:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005:
  case 0x5dde:
    pSVar4 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,'\0',(message->arg0).words.high,CASE_2);
    if (pSVar4 != nullptr) {
      this->field_052F = 0;
      uVar5 = (*pSVar4->vtable->vfunc_0C)();
      this->field_0533 = uVar5;
      this->field_0537 = 0;
      uVar5 = pSVar4->field_0342;
      this->field_053F = 0;
      this->field_053B = uVar5;
      STFishC::sub_004162F0
                ((STFishC *)pSVar4,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),
                 &local_6);
      this->field_0547 = (int)STPiece<2,2>(param_2);
      this->field_0543 = (int)STPiece<2,2>(message);
      this->field_054B = (int)local_6;
      (*pSVar4->vtable->vfunc_74)((short)local_1c);
      Library::DKW::TBL::FUN_006b6020(this->field_05B3,0,local_1c);
    }
    wVar7 = (pSVar2->arg1).words.low;
    if ((((short)wVar7 < 0) || (7 < (short)wVar7)) ||
       (iVar6 = (int)(short)wVar7, g_bulkInitializedRecords_008087C7[iVar6].field_0022 == 0xff))
    goto cf_common_exit_0065C570;
    this->field_0557 = iVar6;
    this->field_055B = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0021;
    this->field_055F = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0023;
    uVar8 = (pSVar2->arg1).words.high;
    goto LAB_0065c4bb;
  case 0x5ddf:
  case 0x5de0:
  case 0x5de1:
  case 0x5de2:
    this_00 = (message->arg0).ptr;
    if (this_00 != nullptr) {
      this->field_052F = 0;
      this->field_0533 = 0;
      this->field_0537 = 0;
      dVar3 = this_00->slot_2C();
      this->field_053B = dVar3;
      this->field_053F = 0;
      STFishC::sub_004162B0
                (this_00,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),&local_6);
      this->field_0543 = (int)STPiece<2,2>(message);
      this->field_0547 = (int)STPiece<2,2>(param_2);
      this->field_054B = (int)local_6;
    }
    wVar7 = (pSVar2->arg1).words.low;
    if (pSVar2->id != 0x5de1) goto cf_common_exit_0065C570;
    goto LAB_0065c042;
  case 0x5de3:
  case 0x5de4:
    wVar7 = (message->arg0).words.low;
    if (((-1 < (short)wVar7) && ((short)wVar7 < 8)) &&
       (iVar6 = (int)(short)wVar7, g_bulkInitializedRecords_008087C7[iVar6].field_0022 != 0xff)) {
      this->field_052F = iVar6;
      this->field_0533 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0021;
      this->field_0537 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0023;
      pSVar4 = STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,'\0',(message->arg0).words.high,CASE_3);
      if (pSVar4 != nullptr) {
        uVar5 = (*pSVar4->vtable->vfunc_2C)();
        this->field_053B = uVar5;
        uVar5 = pSVar4->vfunc_6C();
        this->field_053F = uVar5;
        STFishC::sub_004162B0
                  ((STFishC *)pSVar4,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),
                   &local_6);
        this->field_0543 = (int)STPiece<2,2>(message);
        this->field_0547 = (int)STPiece<2,2>(param_2);
        this->field_054B = (int)local_6;
        goto LAB_0065c021;
      }
    }
LAB_0065c03e:
    wVar7 = (pSVar2->arg1).words.low;
LAB_0065c042:
    if ((((short)wVar7 < 0) || (7 < (short)wVar7)) ||
       (iVar6 = (int)(short)wVar7, g_bulkInitializedRecords_008087C7[iVar6].field_0022 == 0xff)) {
cf_common_exit_0065C570:
      this->field_0557 = 0xff;
      goto cf_common_exit_0065C65B;
    }
    this->field_0557 = iVar6;
    this->field_055B = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0021;
    this->field_055F = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0023;
    uVar8 = (pSVar2->arg1).words.high;
    goto LAB_0065c4bb;
  case 0x5de5:
    wVar7 = (message->arg0).words.low;
    if ((((short)wVar7 < 0) || (7 < (short)wVar7)) ||
       (iVar6 = (int)(short)wVar7, g_bulkInitializedRecords_008087C7[iVar6].field_0022 == 0xff))
    goto cf_common_exit_0065C65B;
    this->field_052F = iVar6;
    this->field_0533 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0021;
    this->field_0537 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0023;
    this->field_053B = (uint)(message->arg0).words.high;
    this->field_053F = (uint)(message->arg2).words.low;
    if ((message->arg1).u32 == 0) goto cf_common_exit_0065C65B;
    pDVar10 = this->field_05B3;
    pcVar9 = (char *)((message->arg1).u32 + 0x3b);
    uVar11 = 0;
    break;
  case 0x5de6:
  case 0x5de7:
  case 0x5de8:
  case 0x5de9:
  case 0x5dea:
    wVar7 = (message->arg0).words.low;
    if (((-1 < (short)wVar7) && ((short)wVar7 < 8)) &&
       (iVar6 = (int)(short)wVar7, g_bulkInitializedRecords_008087C7[iVar6].field_0022 != 0xff)) {
      this->field_052F = iVar6;
      this->field_0533 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0021;
      this->field_0537 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0023;
      this->field_053B = (uint)(message->arg1).words.low;
      this->field_053F = (uint)(message->arg1).words.high;
      this->field_0543 = (uint)(message->id == 0x5de7);
    }
    if ((message->id < 0x5de6) || (0x5de8 < message->id)) goto cf_common_exit_0065C65B;
    wVar7 = (message->arg0).words.low;
    if (((short)wVar7 < 0) ||
       ((7 < (short)wVar7 ||
        (iVar6 = (int)(short)wVar7, g_bulkInitializedRecords_008087C7[iVar6].field_0022 == 0xff))))
    goto cf_common_exit_0065C570;
    this->field_0557 = iVar6;
    this->field_055B = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0021;
    this->field_055F = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0023;
    uVar8 = (message->arg0).words.high;
LAB_0065c4bb:
    if ((uVar8 == 0xffff) ||
       (pSVar4 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)wVar7,uVar8,CASE_1),
       pSVar4 == nullptr)) {
      this->field_0563 = 0;
      goto cf_common_exit_0065C65B;
    }
    uVar5 = (*pSVar4->vtable->vfunc_2C)();
    this->field_0563 = uVar5;
    uVar5 = pSVar4->vfunc_6C();
    this->field_0567 = uVar5;
    STFishC::sub_004162B0
              ((STFishC *)pSVar4,(short *)((int)&message + 2),(short *)((int)&param_2 + 2),&local_6);
    this->field_056B = (int)STPiece<2,2>(message);
    this->field_056F = (int)STPiece<2,2>(param_2);
    this->field_0573 = (int)local_6;
    if (pSVar4->field_0030 == 0xffff) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar11 = (uint)(ushort)pSVar4->field_0030;
    }
    this->field_0577 = uVar11;
    (*pSVar4->vtable->vfunc_74)((short)local_1c);
    pDVar10 = this->field_05B3;
    pcVar9 = local_1c;
    uVar11 = 1;
    break;
  case 0x5deb:
  case MESS_SHARED_5DEC:
    wVar7 = (message->arg0).words.low;
    if ((((short)wVar7 < 0) || (7 < (short)wVar7)) ||
       (iVar6 = (int)(short)wVar7, g_bulkInitializedRecords_008087C7[iVar6].field_0022 == 0xff))
    goto cf_common_exit_0065C65B;
    this->field_052F = iVar6;
    this->field_0533 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0021;
    this->field_0537 = (uint)g_bulkInitializedRecords_008087C7[iVar6].field_0023;
    if ((message->arg1).u32 == 0) goto cf_common_exit_0065C65B;
    pDVar10 = this->field_05B3;
    pcVar9 = (char *)((message->arg1).u32 + 0x92);
    uVar11 = 0;
  }
  Library::DKW::TBL::FUN_006b6020(pDVar10,uVar11,pcVar9);
cf_common_exit_0065C65B:
  this->field_05A7 = g_playSystem_00802A38->field_00E4 / 0x19;
  this->field_05AB = g_playSystem_00802A38->field_00E4;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar5 = (*(code *)this->field_0000->field_0014)();
  this->field_05AF = uVar5;
  return local_c;
}


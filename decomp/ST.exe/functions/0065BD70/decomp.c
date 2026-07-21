
/* [STMethodOwnerApplier] Structural method owner recovered as AiEventClassTy.
   Evidence: this_call_owners=[AiEventClassTy]; agreed_this_calls=1; incoming_this_accesses=89;
   incoming_edx_uses=1; incoming_stack_parameter_uses=26

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00652810 -> 0065BD70 @ 00652844 | 00652810 -> 0065BD70 @ 00652933 */

int __thiscall AiEventClassTy::sub_0065BD70(AiEventClassTy *this,STMessage *message,int param_2)

{
  STMessageId SVar1;
  STMessage *pSVar2;
  undefined2 uVar6;
  STGameObjC *pSVar3;
  STFishC *pSVar4;
  undefined4 uVar5;
  int iVar7;
  short sVar8;
  undefined2 uVar10;
  char *pcVar9;
  uint *puVar11;
  uint uVar12;
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
  uVar10 = (undefined2)((uint)message >> 0x10);
  uVar6 = (undefined2)(SVar1 - MESS_AIBOSSCLASSTY_5DC5 >> 0x10);
  switch(SVar1) {
  case MESS_AIBOSSCLASSTY_5DC5:
    this->field_052F = message->data;
    goto cf_common_exit_0065C65B;
  case MESS_AIBOSSCLASSTY_5DC6:
    pcVar9 = message->data;
    puVar11 = (uint *)this->field_05B3;
    uVar12 = 0;
    break;
  default:
    goto cf_common_exit_0065C65B;
  case MESS_AIBOSSCLASSTY_5DD0:
  case 0x5dd1:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_ID_CREATE:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0003:
  case 0x5dd4:
  case MESS_SHARED_5DD5:
    sVar8 = *(short *)&message->data;
    if ((-1 < sVar8) && (sVar8 < 8)) {
      iVar7 = (int)sVar8;
      if ((&DAT_008087e9)[iVar7 * 0x51] != -1) {
        this->field_052F = iVar7;
        this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar7 * 0x51];
        this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar7 * 0x51];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar4 = (STFishC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,(char)sVar8,
                            CONCAT22((short)((uint)(iVar7 * 9) >> 0x10),
                                     *(undefined2 *)((int)&message->data + 2)),CASE_1);
        if (pSVar4 != (STFishC *)0x0) {
          uVar5 = (*pSVar4->vtable->vfunc_2C)();
          this->field_053B = uVar5;
          uVar5 = (*pSVar4->vtable->vfunc_6C)();
          this->field_053F = uVar5;
          STFishC::sub_004162B0
                    (pSVar4,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),
                     &local_6);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          this->field_0543 = (int)message._2_2_;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          this->field_0547 = (int)param_2._2_2_;
          this->field_054B = (int)local_6;
          if (*(ushort *)&pSVar4->field_0x30 == 0xffff) {
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = (uint)*(ushort *)&pSVar4->field_0x30;
          }
          this->field_054F = uVar12;
LAB_0065c021:
          (*pSVar4->vtable->vfunc_74)(local_1c);
          Library::DKW::TBL::FUN_006b6020((uint *)this->field_05B3,0,local_1c);
        }
      }
    }
    goto LAB_0065c03e;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x5dd6:
  case 0x5dd7:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_CURSORCLASSTY_0009:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SYSTEMCLASSTY_000A:
    pSVar3 = STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,'\0',
                        CONCAT22(uVar6,*(undefined2 *)((int)&message->data + 2)),CASE_5);
    if (pSVar3 != (STGameObjC *)0x0) {
      uVar5 = (*pSVar3->vtable[1].vfunc_58)();
      this->field_052F = uVar5;
      uVar5 = (*pSVar3->vtable->vfunc_0C)();
      this->field_0533 = uVar5;
      this->field_0537 = (uint)(byte)(&DAT_008087ea)[this->field_052F * 0x51];
      uVar5 = (*pSVar3->vtable[1].vfunc_5C)();
      this->field_053B = uVar5;
      this->field_053F = 0;
      thunk_FUN_004162f0(pSVar3,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),
                         &local_6);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this->field_0543 = (int)message._2_2_;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this->field_0547 = (int)param_2._2_2_;
      this->field_054B = (int)local_6;
      uVar5 = (*pSVar3->vtable[1].vfunc_64)();
      this->field_054F = uVar5;
      (*pSVar3->vtable->vfunc_74)(local_1c);
      Library::DKW::TBL::FUN_006b6020((uint *)this->field_05B3,0,local_1c);
    }
    sVar8 = (short)pSVar2[1].unknown_00;
    if (((-1 < sVar8) && (sVar8 < 8)) && (iVar7 = (int)sVar8, (&DAT_008087e9)[iVar7 * 0x51] != -1))
    {
      this->field_0557 = iVar7;
      this->field_055B = (uint)(byte)(&DAT_008087e8)[iVar7 * 0x51];
      this->field_055F = (uint)(byte)(&DAT_008087ea)[iVar7 * 0x51];
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar12 = CONCAT22(uVar10,*(undefined2 *)((int)&pSVar2[1].unknown_00 + 2));
      goto LAB_0065c4bb;
    }
    goto cf_common_exit_0065C570;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x5ddb:
  case 0x5ddc:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005:
  case 0x5dde:
    pSVar3 = STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,'\0',
                        CONCAT22(uVar6,*(undefined2 *)((int)&message->data + 2)),CASE_2);
    if (pSVar3 != (STGameObjC *)0x0) {
      this->field_052F = 0;
      uVar5 = (*pSVar3->vtable->vfunc_0C)();
      this->field_0533 = uVar5;
      this->field_0537 = 0;
      uVar5 = pSVar3[1].field_0171;
      this->field_053F = 0;
      this->field_053B = uVar5;
      thunk_FUN_004162f0(pSVar3,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),
                         &local_6);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this->field_0547 = (int)param_2._2_2_;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this->field_0543 = (int)message._2_2_;
      this->field_054B = (int)local_6;
      (*pSVar3->vtable->vfunc_74)(local_1c);
      Library::DKW::TBL::FUN_006b6020((uint *)this->field_05B3,0,local_1c);
    }
    sVar8 = (short)pSVar2[1].unknown_00;
    if (((sVar8 < 0) || (7 < sVar8)) || (iVar7 = (int)sVar8, (&DAT_008087e9)[iVar7 * 0x51] == -1))
    goto cf_common_exit_0065C570;
    this->field_0557 = iVar7;
    this->field_055B = (uint)(byte)(&DAT_008087e8)[iVar7 * 0x51];
    this->field_055F = (uint)(byte)(&DAT_008087ea)[iVar7 * 0x51];
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar12 = CONCAT22(uVar10,*(undefined2 *)((int)&pSVar2[1].unknown_00 + 2));
    goto LAB_0065c4bb;
  case 0x5ddf:
  case 0x5de0:
  case 0x5de1:
  case 0x5de2:
    pSVar4 = message->data;
    if (pSVar4 != (STFishC *)0x0) {
      this->field_052F = 0;
      this->field_0533 = 0;
      this->field_0537 = 0;
      uVar5 = (*pSVar4->vtable->vfunc_2C)();
      this->field_053B = uVar5;
      this->field_053F = 0;
      STFishC::sub_004162B0
                (pSVar4,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),&local_6
                );
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this->field_0543 = (int)message._2_2_;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this->field_0547 = (int)param_2._2_2_;
      this->field_054B = (int)local_6;
    }
    sVar8 = (short)pSVar2[1].unknown_00;
    if (pSVar2->id != 0x5de1) goto cf_common_exit_0065C570;
    goto LAB_0065c042;
  case 0x5de3:
  case 0x5de4:
    sVar8 = *(short *)&message->data;
    if ((-1 < sVar8) && (sVar8 < 8)) {
      iVar7 = (int)sVar8;
      if ((&DAT_008087e9)[iVar7 * 0x51] != -1) {
        this->field_052F = iVar7;
        this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar7 * 0x51];
        this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar7 * 0x51];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar4 = (STFishC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,'\0',
                            CONCAT22((short)((uint)(iVar7 * 9) >> 0x10),
                                     *(undefined2 *)((int)&message->data + 2)),CASE_3);
        if (pSVar4 != (STFishC *)0x0) {
          uVar5 = (*pSVar4->vtable->vfunc_2C)();
          this->field_053B = uVar5;
          uVar5 = (*pSVar4->vtable->vfunc_6C)();
          this->field_053F = uVar5;
          STFishC::sub_004162B0
                    (pSVar4,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),
                     &local_6);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          this->field_0543 = (int)message._2_2_;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          this->field_0547 = (int)param_2._2_2_;
          this->field_054B = (int)local_6;
          goto LAB_0065c021;
        }
      }
    }
LAB_0065c03e:
    sVar8 = (short)pSVar2[1].unknown_00;
LAB_0065c042:
    if (((sVar8 < 0) || (7 < sVar8)) || (iVar7 = (int)sVar8, (&DAT_008087e9)[iVar7 * 0x51] == -1)) {
cf_common_exit_0065C570:
      this->field_0557 = 0xff;
      goto cf_common_exit_0065C65B;
    }
    this->field_0557 = iVar7;
    this->field_055B = (uint)(byte)(&DAT_008087e8)[iVar7 * 0x51];
    this->field_055F = (uint)(byte)(&DAT_008087ea)[iVar7 * 0x51];
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar12 = CONCAT22(uVar10,*(undefined2 *)((int)&pSVar2[1].unknown_00 + 2));
    goto LAB_0065c4bb;
  case 0x5de5:
    sVar8 = *(short *)&message->data;
    if (((sVar8 < 0) || (7 < sVar8)) || (iVar7 = (int)sVar8, (&DAT_008087e9)[iVar7 * 0x51] == -1))
    goto cf_common_exit_0065C65B;
    this->field_052F = iVar7;
    this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar7 * 0x51];
    this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar7 * 0x51];
    this->field_053B = (uint)*(ushort *)((int)&message->data + 2);
    this->field_053F = (uint)(ushort)message[1].unknown_04;
    if (message[1].unknown_00 == 0) goto cf_common_exit_0065C65B;
    puVar11 = (uint *)this->field_05B3;
    pcVar9 = (char *)(message[1].unknown_00 + 0x3b);
    uVar12 = 0;
    break;
  case 0x5de6:
  case 0x5de7:
  case 0x5de8:
  case 0x5de9:
  case 0x5dea:
    sVar8 = *(short *)&message->data;
    if (((-1 < sVar8) && (sVar8 < 8)) && (iVar7 = (int)sVar8, (&DAT_008087e9)[iVar7 * 0x51] != -1))
    {
      this->field_052F = iVar7;
      this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar7 * 0x51];
      this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar7 * 0x51];
      this->field_053B = (uint)(ushort)message[1].unknown_00;
      this->field_053F = (uint)*(ushort *)((int)&message[1].unknown_00 + 2);
      this->field_0543 = (uint)(message->id == 0x5de7);
    }
    if ((message->id < 0x5de6) || (0x5de8 < message->id)) goto cf_common_exit_0065C65B;
    sVar8 = *(short *)&message->data;
    if ((sVar8 < 0) || ((7 < sVar8 || (iVar7 = (int)sVar8, (&DAT_008087e9)[iVar7 * 0x51] == -1))))
    goto cf_common_exit_0065C570;
    this->field_0557 = iVar7;
    this->field_055B = (uint)(byte)(&DAT_008087e8)[iVar7 * 0x51];
    this->field_055F = (uint)(byte)(&DAT_008087ea)[iVar7 * 0x51];
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar12 = CONCAT22(uVar10,*(undefined2 *)((int)&message->data + 2));
LAB_0065c4bb:
    if (((short)uVar12 == -1) ||
       (pSVar4 = (STFishC *)
                 STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,(char)sVar8,uVar12,CASE_1),
       pSVar4 == (STFishC *)0x0)) {
      this->field_0563 = 0;
      goto cf_common_exit_0065C65B;
    }
    uVar5 = (*pSVar4->vtable->vfunc_2C)();
    this->field_0563 = uVar5;
    uVar5 = (*pSVar4->vtable->vfunc_6C)();
    this->field_0567 = uVar5;
    STFishC::sub_004162B0
              (pSVar4,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),&local_6);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this->field_056B = (int)message._2_2_;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this->field_056F = (int)param_2._2_2_;
    this->field_0573 = (int)local_6;
    if (*(ushort *)&pSVar4->field_0x30 == 0xffff) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)&pSVar4->field_0x30;
    }
    this->field_0577 = uVar12;
    (*pSVar4->vtable->vfunc_74)(local_1c);
    puVar11 = (uint *)this->field_05B3;
    pcVar9 = local_1c;
    uVar12 = 1;
    break;
  case 0x5deb:
  case MESS_SHARED_5DEC:
    sVar8 = *(short *)&message->data;
    if (((sVar8 < 0) || (7 < sVar8)) || (iVar7 = (int)sVar8, (&DAT_008087e9)[iVar7 * 0x51] == -1))
    goto cf_common_exit_0065C65B;
    this->field_052F = iVar7;
    this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar7 * 0x51];
    this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar7 * 0x51];
    if (message[1].unknown_00 == 0) goto cf_common_exit_0065C65B;
    puVar11 = (uint *)this->field_05B3;
    pcVar9 = (char *)(message[1].unknown_00 + 0x92);
    uVar12 = 0;
  }
  Library::DKW::TBL::FUN_006b6020(puVar11,uVar12,pcVar9);
cf_common_exit_0065C65B:
  this->field_05A7 = (uint)PTR_00802a38->field_00E4 / 0x19;
  this->field_05AB = PTR_00802a38->field_00E4;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar5 = (*(code *)this->field_0000->field_0014)();
  this->field_05AF = uVar5;
  return local_c;
}


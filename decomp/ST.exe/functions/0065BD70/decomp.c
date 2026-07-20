
/* [STMethodOwnerApplier] Structural method owner recovered as AiEventClassTy.
   Evidence: this_call_owners=[AiEventClassTy]; agreed_this_calls=1; incoming_this_accesses=89;
   incoming_edx_uses=1; incoming_stack_parameter_uses=26
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00652810 -> 0065BD70 @ 00652844 | 00652810 -> 0065BD70 @ 00652933 */

int __thiscall AiEventClassTy::sub_0065BD70(AiEventClassTy *this,STMessage *message,int param_2)

{
  ushort uVar1;
  STMessageId SVar2;
  STMessage *pSVar3;
  undefined2 uVar7;
  int *piVar4;
  STFishC *pSVar5;
  undefined4 uVar6;
  int iVar8;
  short sVar9;
  int iVar10;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int extraout_EDX_01;
  undefined2 uVar13;
  uint uVar11;
  char *pcVar12;
  uint *puVar14;
  uint uVar15;
  char local_1c [16];
  int local_c;
  short local_6;
  
  pSVar3 = message;
  SVar2 = message->id;
  if (SVar2 < (MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005)) {
    if (SVar2 == 0x5ddc) {
      iVar10 = 0x464;
    }
    else if (SVar2 < MESS_SHARED_5DD5) {
      if (SVar2 == 0x5dd4) {
        iVar10 = 0x45d;
      }
      else if (SVar2 < 0x5dd1) {
        if (SVar2 == MESS_AIBOSSCLASSTY_5DD0) {
          iVar10 = 0x459;
        }
        else if (SVar2 == MESS_ID_NONE) {
          iVar10 = 0x456;
        }
        else if (SVar2 == MESS_AIBOSSCLASSTY_5DC5) {
          iVar10 = 0x457;
        }
        else {
          if (SVar2 != MESS_AIBOSSCLASSTY_5DC6) {
            return -1;
          }
          iVar10 = 0x458;
        }
      }
      else if (SVar2 == 0x5dd1) {
        iVar10 = 0x45a;
      }
      else if (SVar2 == (MESS_AIBOSSCLASSTY_5DD0|MESS_ID_CREATE)) {
        iVar10 = 0x45b;
      }
      else {
        if (SVar2 != (MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0003)) {
          return -1;
        }
        iVar10 = 0x45c;
      }
    }
    else {
      switch(SVar2) {
      case MESS_SHARED_5DD5:
        iVar10 = 0x474;
        break;
      case 0x5dd6:
        iVar10 = 0x45e;
        break;
      case 0x5dd7:
        iVar10 = 0x45f;
        break;
      case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008:
        iVar10 = 0x460;
        break;
      case MESS_AIBOSSCLASSTY_5DD0|MESS_CURSORCLASSTY_0009:
        iVar10 = 0x461;
        break;
      case MESS_AIBOSSCLASSTY_5DD0|MESS_SYSTEMCLASSTY_000A:
        iVar10 = 0x462;
        break;
      case 0x5ddb:
        iVar10 = 0x463;
        break;
      default:
        return -1;
      }
    }
  }
  else {
    switch(SVar2) {
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005:
      iVar10 = 0x465;
      break;
    case 0x5dde:
      iVar10 = 0x466;
      break;
    case 0x5ddf:
      iVar10 = 0x467;
      break;
    case 0x5de0:
      iVar10 = 0x468;
      break;
    case 0x5de1:
      iVar10 = 0x469;
      break;
    case 0x5de2:
      iVar10 = 0x46a;
      break;
    case 0x5de3:
      iVar10 = 0x46b;
      break;
    case 0x5de4:
      iVar10 = 0x46c;
      break;
    case 0x5de5:
      iVar10 = 0x471;
      break;
    case 0x5de6:
      iVar10 = 0x46d;
      break;
    case 0x5de7:
    case 0x5de8:
      iVar10 = 0x46e;
      break;
    case 0x5de9:
      iVar10 = 0x46f;
      break;
    case 0x5dea:
      iVar10 = 0x470;
      break;
    case 0x5deb:
      iVar10 = 0x472;
      break;
    case MESS_SHARED_5DEC:
      iVar10 = 0x473;
      break;
    default:
      return -1;
    }
  }
  if (param_2 == 0) {
    return iVar10;
  }
  uVar13 = (undefined2)((uint)message >> 0x10);
  uVar7 = (undefined2)(SVar2 - MESS_AIBOSSCLASSTY_5DC5 >> 0x10);
  local_c = iVar10;
  switch(SVar2) {
  case MESS_AIBOSSCLASSTY_5DC5:
    this->field_052F = message->data;
    goto cf_common_exit_0065C65B;
  case MESS_AIBOSSCLASSTY_5DC6:
    pcVar12 = message->data;
    puVar14 = (uint *)this->field_05B3;
    uVar15 = 0;
    break;
  default:
    goto cf_common_exit_0065C65B;
  case MESS_AIBOSSCLASSTY_5DD0:
  case 0x5dd1:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_ID_CREATE:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0003:
  case 0x5dd4:
  case MESS_SHARED_5DD5:
    uVar1 = *(ushort *)&message->data;
    if ((-1 < (short)uVar1) && ((short)uVar1 < 8)) {
      iVar10 = (int)(short)uVar1;
      if ((&DAT_008087e9)[iVar10 * 0x51] != -1) {
        this->field_052F = iVar10;
        this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar10 * 0x51];
        this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar10 * 0x51];
        pSVar5 = (STFishC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,(uint)uVar1,
                            CONCAT22((short)((uint)(iVar10 * 9) >> 0x10),
                                     *(undefined2 *)((int)&message->data + 2)),CASE_1);
        iVar10 = extraout_EDX;
        if (pSVar5 != (STFishC *)0x0) {
          uVar6 = (*pSVar5->vtable->vfunc_2C)();
          this->field_053B = uVar6;
          uVar6 = (*pSVar5->vtable->vfunc_6C)();
          this->field_053F = uVar6;
          STFishC::sub_004162B0
                    (pSVar5,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),
                     &local_6);
          this->field_0543 = (int)message._2_2_;
          this->field_0547 = (int)param_2._2_2_;
          this->field_054B = (int)local_6;
          if (*(ushort *)&pSVar5->field_0x30 == 0xffff) {
            uVar15 = 0xffffffff;
          }
          else {
            uVar15 = (uint)*(ushort *)&pSVar5->field_0x30;
          }
          this->field_054F = uVar15;
LAB_0065c021:
          (*pSVar5->vtable->vfunc_74)(local_1c);
          Library::DKW::TBL::FUN_006b6020((uint *)this->field_05B3,0,local_1c);
          iVar10 = extraout_EDX_00;
        }
      }
    }
    goto LAB_0065c03e;
  case 0x5dd6:
  case 0x5dd7:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_CURSORCLASSTY_0009:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SYSTEMCLASSTY_000A:
    piVar4 = (int *)STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,0,
                               CONCAT22(uVar7,*(undefined2 *)((int)&message->data + 2)),CASE_5);
    uVar7 = extraout_var;
    if (piVar4 != (int *)0x0) {
      uVar6 = (**(code **)(*piVar4 + 300))();
      this->field_052F = uVar6;
      uVar6 = (**(code **)(*piVar4 + 0xc))();
      this->field_0533 = uVar6;
      this->field_0537 = (uint)(byte)(&DAT_008087ea)[this->field_052F * 0x51];
      uVar6 = (**(code **)(*piVar4 + 0x130))();
      this->field_053B = uVar6;
      this->field_053F = 0;
      thunk_FUN_004162f0(piVar4,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),
                         &local_6);
      this->field_0543 = (int)message._2_2_;
      this->field_0547 = (int)param_2._2_2_;
      this->field_054B = (int)local_6;
      uVar6 = (**(code **)(*piVar4 + 0x138))();
      this->field_054F = uVar6;
      (**(code **)(*piVar4 + 0x74))(local_1c);
      Library::DKW::TBL::FUN_006b6020((uint *)this->field_05B3,0,local_1c);
      uVar7 = extraout_var_00;
    }
    sVar9 = (short)pSVar3[1].unknown_00;
    uVar15 = CONCAT22(uVar7,sVar9);
    if (((-1 < sVar9) && (sVar9 < 8)) && (iVar10 = (int)sVar9, (&DAT_008087e9)[iVar10 * 0x51] != -1)
       ) {
      this->field_0557 = iVar10;
      this->field_055B = (uint)(byte)(&DAT_008087e8)[iVar10 * 0x51];
      this->field_055F = (uint)(byte)(&DAT_008087ea)[iVar10 * 0x51];
      uVar11 = CONCAT22(uVar13,*(undefined2 *)((int)&pSVar3[1].unknown_00 + 2));
      goto LAB_0065c4bb;
    }
    goto cf_common_exit_0065C570;
  case 0x5ddb:
  case 0x5ddc:
  case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005:
  case 0x5dde:
    piVar4 = (int *)STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,0,
                               CONCAT22(uVar7,*(undefined2 *)((int)&message->data + 2)),CASE_2);
    uVar7 = extraout_var_01;
    if (piVar4 != (int *)0x0) {
      this->field_052F = 0;
      uVar6 = (**(code **)(*piVar4 + 0xc))();
      this->field_0533 = uVar6;
      this->field_0537 = 0;
      uVar6 = *(undefined4 *)((int)piVar4 + 0x342);
      this->field_053F = 0;
      this->field_053B = uVar6;
      thunk_FUN_004162f0(piVar4,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),
                         &local_6);
      this->field_0547 = (int)param_2._2_2_;
      this->field_0543 = (int)message._2_2_;
      this->field_054B = (int)local_6;
      (**(code **)(*piVar4 + 0x74))(local_1c);
      Library::DKW::TBL::FUN_006b6020((uint *)this->field_05B3,0,local_1c);
      uVar7 = extraout_var_02;
    }
    sVar9 = (short)pSVar3[1].unknown_00;
    uVar15 = CONCAT22(uVar7,sVar9);
    if (((sVar9 < 0) || (7 < sVar9)) || (iVar10 = (int)sVar9, (&DAT_008087e9)[iVar10 * 0x51] == -1))
    goto cf_common_exit_0065C570;
    this->field_0557 = iVar10;
    this->field_055B = (uint)(byte)(&DAT_008087e8)[iVar10 * 0x51];
    this->field_055F = (uint)(byte)(&DAT_008087ea)[iVar10 * 0x51];
    uVar11 = CONCAT22(uVar13,*(undefined2 *)((int)&pSVar3[1].unknown_00 + 2));
    goto LAB_0065c4bb;
  case 0x5ddf:
  case 0x5de0:
  case 0x5de1:
  case 0x5de2:
    pSVar5 = message->data;
    if (pSVar5 != (STFishC *)0x0) {
      this->field_052F = 0;
      this->field_0533 = 0;
      this->field_0537 = 0;
      uVar6 = (*pSVar5->vtable->vfunc_2C)();
      this->field_053B = uVar6;
      this->field_053F = 0;
      STFishC::sub_004162B0
                (pSVar5,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),&local_6
                );
      iVar10 = (int)param_2._2_2_;
      this->field_0543 = (int)message._2_2_;
      this->field_0547 = iVar10;
      this->field_054B = (int)local_6;
    }
    uVar15 = CONCAT22((short)((uint)iVar10 >> 0x10),(short)pSVar3[1].unknown_00);
    if (pSVar3->id != 0x5de1) goto cf_common_exit_0065C570;
    goto LAB_0065c042;
  case 0x5de3:
  case 0x5de4:
    sVar9 = *(short *)&message->data;
    if ((-1 < sVar9) && (sVar9 < 8)) {
      iVar8 = (int)sVar9;
      if ((&DAT_008087e9)[iVar8 * 0x51] != -1) {
        this->field_052F = iVar8;
        this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar8 * 0x51];
        this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar8 * 0x51];
        pSVar5 = (STFishC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,0,
                            CONCAT22((short)((uint)(iVar8 * 9) >> 0x10),
                                     *(undefined2 *)((int)&message->data + 2)),CASE_3);
        iVar10 = extraout_EDX_01;
        if (pSVar5 != (STFishC *)0x0) {
          uVar6 = (*pSVar5->vtable->vfunc_2C)();
          this->field_053B = uVar6;
          uVar6 = (*pSVar5->vtable->vfunc_6C)();
          this->field_053F = uVar6;
          STFishC::sub_004162B0
                    (pSVar5,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),
                     &local_6);
          this->field_0543 = (int)message._2_2_;
          this->field_0547 = (int)param_2._2_2_;
          this->field_054B = (int)local_6;
          goto LAB_0065c021;
        }
      }
    }
LAB_0065c03e:
    uVar15 = CONCAT22((short)((uint)iVar10 >> 0x10),(short)pSVar3[1].unknown_00);
LAB_0065c042:
    sVar9 = (short)uVar15;
    if (((sVar9 < 0) || (7 < sVar9)) || (iVar10 = (int)sVar9, (&DAT_008087e9)[iVar10 * 0x51] == -1))
    {
cf_common_exit_0065C570:
      this->field_0557 = 0xff;
      goto cf_common_exit_0065C65B;
    }
    this->field_0557 = iVar10;
    this->field_055B = (uint)(byte)(&DAT_008087e8)[iVar10 * 0x51];
    this->field_055F = (uint)(byte)(&DAT_008087ea)[iVar10 * 0x51];
    uVar11 = CONCAT22(uVar13,*(undefined2 *)((int)&pSVar3[1].unknown_00 + 2));
    goto LAB_0065c4bb;
  case 0x5de5:
    sVar9 = *(short *)&message->data;
    if (((sVar9 < 0) || (7 < sVar9)) || (iVar10 = (int)sVar9, (&DAT_008087e9)[iVar10 * 0x51] == -1))
    goto cf_common_exit_0065C65B;
    this->field_052F = iVar10;
    this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar10 * 0x51];
    this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar10 * 0x51];
    this->field_053B = (uint)*(ushort *)((int)&message->data + 2);
    this->field_053F = (uint)(ushort)message[1].unknown_04;
    if (message[1].unknown_00 == 0) goto cf_common_exit_0065C65B;
    puVar14 = (uint *)this->field_05B3;
    pcVar12 = (char *)(message[1].unknown_00 + 0x3b);
    uVar15 = 0;
    break;
  case 0x5de6:
  case 0x5de7:
  case 0x5de8:
  case 0x5de9:
  case 0x5dea:
    sVar9 = *(short *)&message->data;
    if (((-1 < sVar9) && (sVar9 < 8)) && (iVar10 = (int)sVar9, (&DAT_008087e9)[iVar10 * 0x51] != -1)
       ) {
      this->field_052F = iVar10;
      this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar10 * 0x51];
      this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar10 * 0x51];
      this->field_053B = (uint)(ushort)message[1].unknown_00;
      this->field_053F = (uint)*(ushort *)((int)&message[1].unknown_00 + 2);
      this->field_0543 = (uint)(message->id == 0x5de7);
    }
    if ((message->id < 0x5de6) || (0x5de8 < message->id)) goto cf_common_exit_0065C65B;
    uVar1 = *(ushort *)&message->data;
    uVar15 = (uint)uVar1;
    if (((short)uVar1 < 0) ||
       ((7 < (short)uVar1 || (iVar10 = (int)(short)uVar1, (&DAT_008087e9)[iVar10 * 0x51] == -1))))
    goto cf_common_exit_0065C570;
    this->field_0557 = iVar10;
    this->field_055B = (uint)(byte)(&DAT_008087e8)[iVar10 * 0x51];
    this->field_055F = (uint)(byte)(&DAT_008087ea)[iVar10 * 0x51];
    uVar11 = CONCAT22(uVar13,*(undefined2 *)((int)&message->data + 2));
LAB_0065c4bb:
    if (((short)uVar11 == -1) ||
       (pSVar5 = (STFishC *)STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,uVar15,uVar11,CASE_1),
       pSVar5 == (STFishC *)0x0)) {
      this->field_0563 = 0;
      goto cf_common_exit_0065C65B;
    }
    uVar6 = (*pSVar5->vtable->vfunc_2C)();
    this->field_0563 = uVar6;
    uVar6 = (*pSVar5->vtable->vfunc_6C)();
    this->field_0567 = uVar6;
    STFishC::sub_004162B0
              (pSVar5,(undefined2 *)((int)&message + 2),(undefined2 *)((int)&param_2 + 2),&local_6);
    this->field_056B = (int)message._2_2_;
    this->field_056F = (int)param_2._2_2_;
    this->field_0573 = (int)local_6;
    if (*(ushort *)&pSVar5->field_0x30 == 0xffff) {
      uVar15 = 0xffffffff;
    }
    else {
      uVar15 = (uint)*(ushort *)&pSVar5->field_0x30;
    }
    this->field_0577 = uVar15;
    (*pSVar5->vtable->vfunc_74)(local_1c);
    puVar14 = (uint *)this->field_05B3;
    pcVar12 = local_1c;
    uVar15 = 1;
    break;
  case 0x5deb:
  case MESS_SHARED_5DEC:
    sVar9 = *(short *)&message->data;
    if (((sVar9 < 0) || (7 < sVar9)) || (iVar10 = (int)sVar9, (&DAT_008087e9)[iVar10 * 0x51] == -1))
    goto cf_common_exit_0065C65B;
    this->field_052F = iVar10;
    this->field_0533 = (uint)(byte)(&DAT_008087e8)[iVar10 * 0x51];
    this->field_0537 = (uint)(byte)(&DAT_008087ea)[iVar10 * 0x51];
    if (message[1].unknown_00 == 0) goto cf_common_exit_0065C65B;
    puVar14 = (uint *)this->field_05B3;
    pcVar12 = (char *)(message[1].unknown_00 + 0x92);
    uVar15 = 0;
  }
  Library::DKW::TBL::FUN_006b6020(puVar14,uVar15,pcVar12);
cf_common_exit_0065C65B:
  this->field_05A7 = (uint)PTR_00802a38->field_00E4 / 0x19;
  this->field_05AB = PTR_00802a38->field_00E4;
  uVar6 = (*(code *)this->field_0000->field_0014)();
  this->field_05AF = uVar6;
  return local_c;
}



/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetMessage */

undefined4 __thiscall STGroupBoatC::GetMessage(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  void *unaff_EDI;
  byte *pbVar9;
  bool bVar10;
  InternalExceptionFrame local_84;
  undefined4 local_40 [2];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  STGroupBoatC *local_20;
  byte *local_1c;
  byte *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_20 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x3b4,0,iVar2,&DAT_007a4ccc,
                               s_STGroupBoatC__GetMessage_007abe7c);
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x3b5);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  if (*(int *)(param_1 + 0x10) != 3) {
    STGroupC::GetMessage((STGroupC *)local_20,param_1);
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  if (3 < uVar6) {
    if (uVar6 != 0x10f) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    local_1c = (byte *)STGroupC::SaveGrpData((STGroupC *)this_00,(int *)&local_c);
    local_1c[0] = 0x3c;
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_1c[3] = 0;
    local_18 = (byte *)SaveGrpBData(this_00,(int *)&local_10);
    local_8 = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + local_c);
    pbVar8 = local_1c;
    pbVar9 = local_8;
    for (uVar6 = local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar6 = local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    pbVar8 = local_18;
    pbVar9 = local_8 + local_c;
    for (uVar6 = local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar6 = local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    *(uint *)(local_8 + 0x38) = local_c;
    *(uint *)(local_8 + 0x3c) = local_10;
    STPlaySystemC::SaveObjData
              (DAT_00802a38,*(undefined4 *)&this_00->field_0x18,local_8,local_10 + local_c);
    FUN_006ab060(&local_1c);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_8);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (uVar6 == 3) {
    if ((byte *)this_00->field_00EF != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_00EF);
      this_00->field_00EF = 0;
    }
    if ((byte *)this_00->field_0103 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_0103);
      this_00->field_0103 = 0;
    }
    if ((byte *)this_00->field_010F != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_010F);
      this_00->field_010F = 0;
    }
    if ((byte *)this_00->field_0127 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_0127);
      this_00->field_0127 = 0;
    }
    if ((byte *)this_00->field_0160 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_0160);
      this_00->field_0160 = 0;
    }
    if ((byte *)this_00->field_0168 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_0168);
      this_00->field_0168 = 0;
    }
    if ((byte *)this_00->field_01CA != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_01CA);
      this_00->field_01CA = 0;
    }
    if ((byte *)this_00->field_01CE != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_01CE);
      this_00->field_01CE = 0;
    }
    if ((byte *)this_00->field_01D2 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_01D2);
      this_00->field_01D2 = 0;
    }
    if ((byte *)this_00->field_01D6 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_01D6);
      this_00->field_01D6 = 0;
    }
    if ((byte *)this_00->field_01DA != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_01DA);
      this_00->field_01DA = 0;
    }
    if ((byte *)this_00->field_01DE != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_01DE);
      this_00->field_01DE = 0;
    }
    uVar6 = *(uint *)(this_00->field_0029 + 0xc);
    if ((uVar6 != 0) && (uVar7 = 0, uVar6 != 0)) {
      do {
        FUN_006acc70(this_00->field_0029,uVar7,&local_14);
        if ((short)local_14 != -1) {
          thunk_FUN_0040cdb0(this_00,local_14 & 0xffff);
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffff) < uVar6);
    }
    if (this_00->field_021E != 0) {
      FUN_006ab060((LPVOID *)&this_00->field_021E);
    }
    if ((byte *)this_00->field_020E != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_020E);
      this_00->field_020E = 0;
    }
    if ((byte *)this_00->field_0226 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_0226);
      this_00->field_0226 = 0;
    }
    if ((byte *)this_00->field_022A != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_022A);
      this_00->field_022A = 0;
    }
    if ((byte *)this_00->field_022E != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_022E);
      this_00->field_022E = 0;
    }
    if ((byte *)this_00->field_024E != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_024E);
      this_00->field_024E = 0;
    }
    if ((byte *)this_00->field_0266 != (byte *)0x0) {
      FUN_006ae110((byte *)this_00->field_0266);
      this_00->field_0266 = 0;
    }
    if (this_00->field_029F != (uint *)0x0) {
      FUN_006ae110((byte *)this_00->field_029F);
      this_00->field_029F = (uint *)0x0;
    }
    (*this_00->vtable->vfunc_18)(this_00,0,0,0);
    STGroupC::GetMessage((STGroupC *)this_00,param_1);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (uVar6 != 0) {
    if (uVar6 != 2) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if (1 < *(uint *)(iVar2 + 0xc)) {
      if (*(uint *)(iVar2 + 0xc) != 2) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      RestoreGrpBData(this_00,(undefined4 *)(*(int *)(iVar2 + 0x38) + iVar2));
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    this_00->field_01E6 = 3;
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (this_00->field_005D == 1) {
    local_2c = *(undefined4 *)&this_00->field_0x8;
    local_30 = 10;
    local_34 = 0;
    local_38 = *(int *)&DAT_00802a38->field_0x14;
    SystemClassTy::PostMessage((SystemClassTy *)DAT_00802a38,local_40);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (this_00->field_0061 == 1) {
    uVar6 = 0;
    this_00->field_0061 = 0;
    if (*(int *)&this_00->field_0x81 == 1) {
      iVar2 = this_00->field_01DA;
      *(undefined4 *)&this_00->field_0x81 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          FUN_006acc70(iVar2,uVar6,&local_14);
          (*this_00->vtable->vfunc_04)(local_14);
          iVar2 = this_00->field_01DA;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < *(int *)(iVar2 + 0xc));
      }
      if (this_00->field_01E6 == 6) {
        ReMakePatrolPoints(this_00,(int)unaff_EDI);
        sub_004A7E30(this_00,1);
      }
      if ((this_00->field_0027 == 0) && (this_00->field_0020 == 0)) {
        this_00->field_005D = 1;
      }
      FUN_006ae110((byte *)this_00->field_01DA);
      this_00->field_01DA = 0;
    }
    if ((*(int *)&this_00->field_0x6d == 1) &&
       (*(undefined4 *)&this_00->field_0x6d = 0, this_00->field_002D != 0)) {
      RechargeNewCmd(this_00,unaff_EDI);
      FUN_006ae110((byte *)this_00->field_002D);
      this_00->field_002D = 0;
    }
    if (*(int *)&this_00->field_0x71 == 1) {
      *(undefined4 *)&this_00->field_0x71 = 0;
      FUN_006ae110((byte *)this_00->field_01CA);
      this_00->field_01CA = 0;
    }
    if (*(int *)&this_00->field_0x75 == 1) {
      *(undefined4 *)&this_00->field_0x75 = 0;
      ReMakePVecAndTgtList(this_00,(uint *)this_00->field_01CE);
      DistributeTargets(this_00,(uint *)this_00->field_01CE);
      FUN_006ae110((byte *)this_00->field_01CE);
      this_00->field_01CE = 0;
    }
    if (*(int *)&this_00->field_0x79 == 1) {
      *(undefined4 *)&this_00->field_0x79 = 0;
      FUN_006ae110((byte *)this_00->field_01D2);
      this_00->field_01D2 = 0;
    }
    if (*(int *)&this_00->field_0x7d == 1) {
      *(undefined4 *)&this_00->field_0x7d = 0;
      FUN_006ae110((byte *)this_00->field_01D6);
      this_00->field_01D6 = 0;
    }
  }
  if (this_00->field_0065 != 1) {
LAB_004984d0:
    switch(this_00->field_01E6) {
    case 1:
      iVar2 = 2;
LAB_004984e9:
      puVar3 = (uint *)GrpMove(this_00,iVar2);
      break;
    case 2:
      puVar3 = (uint *)GrpAttack(this_00,2);
      break;
    case 3:
      GrpMove(this_00,2);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 4:
      puVar3 = (uint *)GrpRepare(this_00,2);
      break;
    case 5:
      puVar3 = (uint *)GrpGuard(this_00,2);
      break;
    case 6:
      puVar3 = (uint *)GrpPatrol(this_00,2);
      break;
    case 7:
      puVar3 = (uint *)GrpGoToDeep(this_00,2);
      break;
    case 8:
      puVar3 = (uint *)GrpLoadRC(this_00,2);
      break;
    case 9:
      iVar2 = GrpBuild(this_00,2);
      if (iVar2 != 0) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      this_00->field_01E6 = 3;
      iVar2 = 2;
      goto LAB_00498503;
    case 10:
      puVar3 = (uint *)GrpUnLoadRC(this_00,2);
      break;
    case 0xb:
      puVar3 = (uint *)GrpLoadObj(this_00,2);
      break;
    case 0xc:
      puVar3 = GrpUnLoadObj(this_00,2);
      break;
    case 0xd:
      puVar3 = (uint *)SetMine(this_00,2);
      break;
    case 0xe:
      puVar3 = (uint *)DCBomb(this_00,2);
      break;
    case 0xf:
      puVar3 = (uint *)Capture(this_00,2);
      break;
    case 0x10:
      puVar3 = (uint *)Teleport(this_00,2);
      break;
    case 0x11:
      puVar3 = (uint *)Recharge(this_00,2);
      break;
    case 0x12:
      puVar3 = Bring(this_00,2);
      break;
    case 0x13:
      puVar3 = (uint *)GrpDismant(this_00,2);
      break;
    case 0x14:
      puVar3 = Scout(this_00,2);
      break;
    case 0x15:
      puVar3 = (uint *)GrpRepSub(this_00,2);
      break;
    default:
      goto switchD_004984e0_default;
    }
    goto cf_common_exit_004984F2;
  }
  if (*(int *)&this_00->field_0x89 == 1) {
    if (this_00->field_01E6 == 1) {
      iVar2 = 1;
    }
    else {
      this_00->field_01E6 = 1;
      iVar2 = 0;
    }
    goto LAB_004984e9;
  }
  if (*(int *)&this_00->field_0x91 == 1) {
    if (this_00->field_01E6 != 3) {
      this_00->field_01E6 = 3;
      GrpMove(this_00,0);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    GrpMove(this_00,1);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (*(int *)&this_00->field_0x8d == 1) {
    if (this_00->field_01E6 == 2) {
      puVar3 = (uint *)GrpAttack(this_00,1);
    }
    else {
      this_00->field_01E6 = 2;
      puVar3 = (uint *)GrpAttack(this_00,0);
    }
cf_common_exit_004984F2:
    if (puVar3 != (uint *)0x0) {
switchD_004984e0_default:
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    this_00->field_01E6 = 3;
  }
  else {
    if (*(int *)&this_00->field_0xa1 == 1) {
      if (this_00->field_01E6 == 7) {
        puVar3 = (uint *)GrpGoToDeep(this_00,1);
      }
      else {
        this_00->field_01E6 = 7;
        puVar3 = (uint *)GrpGoToDeep(this_00,0);
      }
      goto cf_common_exit_004984F2;
    }
    if (*(int *)&this_00->field_0x9d == 1) {
      bVar10 = this_00->field_01E6 == 6;
      if (!bVar10) {
        this_00->field_01E6 = 6;
      }
      puVar3 = (uint *)GrpPatrol(this_00,(uint)bVar10);
      if (puVar3 == (uint *)0xffffffff) {
        return 0xffff;
      }
      goto cf_common_exit_004984F2;
    }
    if (*(int *)&this_00->field_0xa5 == 1) {
      bVar10 = this_00->field_01E6 == 8;
      if (!bVar10) {
        this_00->field_01E6 = 8;
      }
      puVar3 = (uint *)GrpLoadRC(this_00,(uint)bVar10);
    }
    else {
      if (*(int *)&this_00->field_0xa9 == 1) {
        if (this_00->field_01E6 == 9) {
          puVar3 = (uint *)GrpBuild(this_00,1);
        }
        else {
          this_00->field_01E6 = 9;
          puVar3 = (uint *)GrpBuild(this_00,0);
        }
        goto cf_common_exit_004984F2;
      }
      if (*(int *)&this_00->field_0xad == 1) {
        if (this_00->field_01E6 == 10) {
          puVar3 = (uint *)GrpUnLoadRC(this_00,1);
        }
        else {
          this_00->field_01E6 = 10;
          puVar3 = (uint *)GrpUnLoadRC(this_00,0);
        }
      }
      else if (*(int *)&this_00->field_0x95 == 1) {
        if (this_00->field_01E6 == 4) {
          puVar3 = (uint *)GrpRepare(this_00,1);
        }
        else {
          this_00->field_01E6 = 4;
          puVar3 = (uint *)GrpRepare(this_00,0);
        }
      }
      else if (*(int *)&this_00->field_0x99 == 1) {
        if (this_00->field_01E6 == 5) {
          puVar3 = (uint *)GrpGuard(this_00,1);
        }
        else {
          this_00->field_01E6 = 5;
          puVar3 = (uint *)GrpGuard(this_00,0);
        }
      }
      else if (*(int *)&this_00->field_0xb1 == 1) {
        if (this_00->field_01E6 == 0xb) {
          puVar3 = (uint *)GrpLoadObj(this_00,1);
        }
        else {
          this_00->field_01E6 = 0xb;
          puVar3 = (uint *)GrpLoadObj(this_00,0);
        }
      }
      else {
        if (*(int *)&this_00->field_0xb5 != 1) {
          if (*(int *)&this_00->field_0xb9 == 1) {
            if (this_00->field_01E6 == 0xd) {
              puVar3 = (uint *)SetMine(this_00,1);
            }
            else {
              this_00->field_01E6 = 0xd;
              puVar3 = (uint *)SetMine(this_00,0);
            }
          }
          else if (*(int *)&this_00->field_0xbd == 1) {
            if (this_00->field_01E6 == 0xe) {
              puVar3 = (uint *)DCBomb(this_00,1);
            }
            else {
              this_00->field_01E6 = 0xe;
              puVar3 = (uint *)DCBomb(this_00,0);
            }
          }
          else if (*(int *)&this_00->field_0xc1 == 1) {
            if (this_00->field_01E6 == 0xf) {
              puVar3 = (uint *)Capture(this_00,1);
            }
            else {
              this_00->field_01E6 = 0xf;
              puVar3 = (uint *)Capture(this_00,0);
            }
          }
          else if (*(int *)&this_00->field_0xc9 == 1) {
            if (this_00->field_01E6 == 0x11) {
              puVar3 = (uint *)Recharge(this_00,1);
            }
            else {
              this_00->field_01E6 = 0x11;
              puVar3 = (uint *)Recharge(this_00,0);
            }
          }
          else if (*(int *)&this_00->field_0xc5 == 1) {
            if (this_00->field_01E6 == 0x10) {
              puVar3 = (uint *)Teleport(this_00,1);
            }
            else {
              this_00->field_01E6 = 0x10;
              puVar3 = (uint *)Teleport(this_00,0);
            }
          }
          else if (*(int *)&this_00->field_0xcd == 1) {
            if (this_00->field_01E6 == 0x12) {
              puVar3 = Bring(this_00,1);
            }
            else {
              this_00->field_01E6 = 0x12;
              puVar3 = Bring(this_00,0);
            }
          }
          else if (*(int *)&this_00->field_0xd1 == 1) {
            if (this_00->field_01E6 == 0x13) {
              puVar3 = (uint *)GrpDismant(this_00,1);
            }
            else {
              this_00->field_01E6 = 0x13;
              puVar3 = (uint *)GrpDismant(this_00,0);
            }
          }
          else {
            if (*(int *)&this_00->field_0xd5 != 1) {
              if (*(int *)&this_00->field_0xd9 != 1) goto LAB_004984d0;
              if (this_00->field_01E6 == 0x15) {
                puVar3 = (uint *)GrpRepSub(this_00,1);
              }
              else {
                this_00->field_01E6 = 0x15;
                puVar3 = (uint *)GrpRepSub(this_00,0);
              }
              goto LAB_0049818d;
            }
            if (this_00->field_01E6 == 0x14) {
              puVar3 = Scout(this_00,1);
            }
            else {
              this_00->field_01E6 = 0x14;
              puVar3 = Scout(this_00,0);
            }
          }
          goto cf_common_exit_004984F2;
        }
        if (this_00->field_01E6 == 0xc) {
          puVar3 = GrpUnLoadObj(this_00,1);
        }
        else {
          this_00->field_01E6 = 0xc;
          puVar3 = GrpUnLoadObj(this_00,0);
        }
      }
    }
LAB_0049818d:
    if (puVar3 == (uint *)0xffffffff) {
      return 0xffff;
    }
    if (puVar3 != (uint *)0x0) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  iVar2 = 0;
LAB_00498503:
  GrpMove(this_00,iVar2);
  thunk_FUN_00423320(this_00,0x5d95);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}


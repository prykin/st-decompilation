
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetMessage */

undefined4 __thiscall STGroupBoatC::GetMessage(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupC *this_00;
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
  InternalExceptionFrame local_84;
  undefined4 local_40 [2];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  STGroupC *local_20;
  byte *local_1c;
  byte *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_20 = (STGroupC *)this;
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
    STGroupC::GetMessage(local_20,param_1);
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  if (3 < uVar6) {
    if (uVar6 != 0x10f) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    local_1c = (byte *)STGroupC::SaveGrpData(this_00,(int *)&local_c);
    local_1c[0] = 0x3c;
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_1c[3] = 0;
    local_18 = (byte *)SaveGrpBData((STGroupBoatC *)this_00,(int *)&local_10);
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
              ((STPlaySystemC *)DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_8,
               local_10 + local_c);
    FUN_006ab060(&local_1c);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_8);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (uVar6 == 3) {
    if (*(byte **)(this_00 + 0xef) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0xef));
      *(undefined4 *)(this_00 + 0xef) = 0;
    }
    if (*(byte **)(this_00 + 0x103) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x103));
      *(undefined4 *)(this_00 + 0x103) = 0;
    }
    if (*(byte **)(this_00 + 0x10f) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x10f));
      *(undefined4 *)(this_00 + 0x10f) = 0;
    }
    if (*(byte **)(this_00 + 0x127) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x127));
      *(undefined4 *)(this_00 + 0x127) = 0;
    }
    if (*(byte **)(this_00 + 0x160) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x160));
      *(undefined4 *)(this_00 + 0x160) = 0;
    }
    if (*(byte **)(this_00 + 0x168) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x168));
      *(undefined4 *)(this_00 + 0x168) = 0;
    }
    if (*(byte **)(this_00 + 0x1ca) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x1ca));
      *(undefined4 *)(this_00 + 0x1ca) = 0;
    }
    if (*(byte **)(this_00 + 0x1ce) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x1ce));
      *(undefined4 *)(this_00 + 0x1ce) = 0;
    }
    if (*(byte **)(this_00 + 0x1d2) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x1d2));
      *(undefined4 *)(this_00 + 0x1d2) = 0;
    }
    if (*(byte **)(this_00 + 0x1d6) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x1d6));
      *(undefined4 *)(this_00 + 0x1d6) = 0;
    }
    if (*(byte **)(this_00 + 0x1da) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x1da));
      *(undefined4 *)(this_00 + 0x1da) = 0;
    }
    if (*(byte **)(this_00 + 0x1de) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x1de));
      *(undefined4 *)(this_00 + 0x1de) = 0;
    }
    uVar6 = *(uint *)(*(int *)(this_00 + 0x29) + 0xc);
    if ((uVar6 != 0) && (uVar7 = 0, uVar6 != 0)) {
      do {
        FUN_006acc70(*(int *)(this_00 + 0x29),uVar7,&local_14);
        if ((short)local_14 != -1) {
          thunk_FUN_0040cdb0(this_00,local_14 & 0xffff);
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffff) < uVar6);
    }
    if (*(int *)(this_00 + 0x21e) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x21e));
    }
    if (*(byte **)(this_00 + 0x20e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x20e));
      *(undefined4 *)(this_00 + 0x20e) = 0;
    }
    if (*(byte **)(this_00 + 0x226) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x226));
      *(undefined4 *)(this_00 + 0x226) = 0;
    }
    if (*(byte **)(this_00 + 0x22a) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x22a));
      *(undefined4 *)(this_00 + 0x22a) = 0;
    }
    if (*(byte **)(this_00 + 0x22e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x22e));
      *(undefined4 *)(this_00 + 0x22e) = 0;
    }
    if (*(byte **)(this_00 + 0x24e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x24e));
      *(undefined4 *)(this_00 + 0x24e) = 0;
    }
    if (*(byte **)(this_00 + 0x266) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x266));
      *(undefined4 *)(this_00 + 0x266) = 0;
    }
    if (*(byte **)(this_00 + 0x29f) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(this_00 + 0x29f));
      *(undefined4 *)(this_00 + 0x29f) = 0;
    }
    (**(code **)(*(int *)this_00 + 0x18))(this_00,0,0,0);
    STGroupC::GetMessage(this_00,param_1);
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
      RestoreGrpBData((STGroupBoatC *)this_00,(undefined4 *)(*(int *)(iVar2 + 0x38) + iVar2));
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    *(undefined4 *)(this_00 + 0x1e6) = 3;
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (*(int *)(this_00 + 0x5d) == 1) {
    local_2c = *(undefined4 *)(this_00 + 8);
    local_30 = 10;
    local_34 = 0;
    local_38 = DAT_00802a38->systemId;
    SystemClassTy::PostMessage(DAT_00802a38,local_40);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (*(int *)(this_00 + 0x61) == 1) {
    uVar6 = 0;
    *(undefined4 *)(this_00 + 0x61) = 0;
    if (*(int *)(this_00 + 0x81) == 1) {
      iVar2 = *(int *)(this_00 + 0x1da);
      *(undefined4 *)(this_00 + 0x81) = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          FUN_006acc70(iVar2,uVar6,&local_14);
          (**(code **)(*(int *)this_00 + 4))(local_14);
          iVar2 = *(int *)(this_00 + 0x1da);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(this_00 + 0x1e6) == 6) {
        ReMakePatrolPoints((STGroupBoatC *)this_00,(int)unaff_EDI);
        thunk_FUN_004a7e30(this_00,1);
      }
      if ((*(short *)(this_00 + 0x27) == 0) && (*(int *)(this_00 + 0x20) == 0)) {
        *(undefined4 *)(this_00 + 0x5d) = 1;
      }
      FUN_006ae110(*(byte **)(this_00 + 0x1da));
      *(undefined4 *)(this_00 + 0x1da) = 0;
    }
    if ((*(int *)(this_00 + 0x6d) == 1) &&
       (*(undefined4 *)(this_00 + 0x6d) = 0, *(int *)(this_00 + 0x2d) != 0)) {
      RechargeNewCmd((STGroupBoatC *)this_00,unaff_EDI);
      FUN_006ae110(*(byte **)(this_00 + 0x2d));
      *(undefined4 *)(this_00 + 0x2d) = 0;
    }
    if (*(int *)(this_00 + 0x71) == 1) {
      *(undefined4 *)(this_00 + 0x71) = 0;
      FUN_006ae110(*(byte **)(this_00 + 0x1ca));
      *(undefined4 *)(this_00 + 0x1ca) = 0;
    }
    if (*(int *)(this_00 + 0x75) == 1) {
      *(undefined4 *)(this_00 + 0x75) = 0;
      ReMakePVecAndTgtList((STGroupBoatC *)this_00,*(int *)(this_00 + 0x1ce));
      DistributeTargets((STGroupBoatC *)this_00,*(uint **)(this_00 + 0x1ce));
      FUN_006ae110(*(byte **)(this_00 + 0x1ce));
      *(undefined4 *)(this_00 + 0x1ce) = 0;
    }
    if (*(int *)(this_00 + 0x79) == 1) {
      *(undefined4 *)(this_00 + 0x79) = 0;
      FUN_006ae110(*(byte **)(this_00 + 0x1d2));
      *(undefined4 *)(this_00 + 0x1d2) = 0;
    }
    if (*(int *)(this_00 + 0x7d) == 1) {
      *(undefined4 *)(this_00 + 0x7d) = 0;
      FUN_006ae110(*(byte **)(this_00 + 0x1d6));
      *(undefined4 *)(this_00 + 0x1d6) = 0;
    }
  }
  if (*(int *)(this_00 + 0x65) != 1) {
LAB_004984d0:
    switch(*(undefined4 *)(this_00 + 0x1e6)) {
    case 1:
      iVar2 = 2;
LAB_004984e9:
      puVar3 = (uint *)GrpMove((STGroupBoatC *)this_00,iVar2);
      break;
    case 2:
      puVar3 = (uint *)GrpAttack((STGroupBoatC *)this_00,2);
      break;
    case 3:
      GrpMove((STGroupBoatC *)this_00,2);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 4:
      puVar3 = (uint *)GrpRepare((STGroupBoatC *)this_00,2);
      break;
    case 5:
      puVar3 = (uint *)GrpGuard((STGroupBoatC *)this_00,2);
      break;
    case 6:
      puVar3 = (uint *)GrpPatrol((STGroupBoatC *)this_00,2);
      break;
    case 7:
      puVar3 = (uint *)GrpGoToDeep((STGroupBoatC *)this_00,2);
      break;
    case 8:
      puVar3 = (uint *)GrpLoadRC((STGroupBoatC *)this_00,2);
      break;
    case 9:
      iVar2 = GrpBuild((STGroupBoatC *)this_00,2);
      if (iVar2 != 0) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      *(undefined4 *)(this_00 + 0x1e6) = 3;
      iVar2 = 2;
      goto LAB_00498503;
    case 10:
      puVar3 = (uint *)GrpUnLoadRC((STGroupBoatC *)this_00,2);
      break;
    case 0xb:
      puVar3 = (uint *)GrpLoadObj((STGroupBoatC *)this_00,2);
      break;
    case 0xc:
      puVar3 = GrpUnLoadObj((STGroupBoatC *)this_00,2);
      break;
    case 0xd:
      puVar3 = (uint *)SetMine((STGroupBoatC *)this_00,2);
      break;
    case 0xe:
      puVar3 = (uint *)DCBomb((STGroupBoatC *)this_00,2);
      break;
    case 0xf:
      puVar3 = (uint *)Capture((STGroupBoatC *)this_00,2);
      break;
    case 0x10:
      puVar3 = (uint *)Teleport((STGroupBoatC *)this_00,2);
      break;
    case 0x11:
      puVar3 = (uint *)Recharge((STGroupBoatC *)this_00,2);
      break;
    case 0x12:
      puVar3 = Bring((STGroupBoatC *)this_00,2);
      break;
    case 0x13:
      puVar3 = (uint *)GrpDismant((STGroupBoatC *)this_00,2);
      break;
    case 0x14:
      puVar3 = (uint *)Scout((STGroupBoatC *)this_00,2);
      break;
    case 0x15:
      puVar3 = (uint *)GrpRepSub((STGroupBoatC *)this_00,2);
      break;
    default:
      goto switchD_004984e0_default;
    }
    goto LAB_004984f2;
  }
  if (*(int *)(this_00 + 0x89) == 1) {
    if (*(int *)(this_00 + 0x1e6) == 1) {
      iVar2 = 1;
    }
    else {
      *(undefined4 *)(this_00 + 0x1e6) = 1;
      iVar2 = 0;
    }
    goto LAB_004984e9;
  }
  if (*(int *)(this_00 + 0x91) == 1) {
    if (*(int *)(this_00 + 0x1e6) != 3) {
      *(undefined4 *)(this_00 + 0x1e6) = 3;
      GrpMove((STGroupBoatC *)this_00,0);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    GrpMove((STGroupBoatC *)this_00,1);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (*(int *)(this_00 + 0x8d) == 1) {
    if (*(int *)(this_00 + 0x1e6) == 2) {
      puVar3 = (uint *)GrpAttack((STGroupBoatC *)this_00,1);
    }
    else {
      *(undefined4 *)(this_00 + 0x1e6) = 2;
      puVar3 = (uint *)GrpAttack((STGroupBoatC *)this_00,0);
    }
LAB_004984f2:
    if (puVar3 != (uint *)0x0) {
switchD_004984e0_default:
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    *(undefined4 *)(this_00 + 0x1e6) = 3;
  }
  else {
    if (*(int *)(this_00 + 0xa1) == 1) {
      if (*(int *)(this_00 + 0x1e6) == 7) {
        puVar3 = (uint *)GrpGoToDeep((STGroupBoatC *)this_00,1);
      }
      else {
        *(undefined4 *)(this_00 + 0x1e6) = 7;
        puVar3 = (uint *)GrpGoToDeep((STGroupBoatC *)this_00,0);
      }
      goto LAB_004984f2;
    }
    if (*(int *)(this_00 + 0x9d) == 1) {
      iVar2 = *(int *)(this_00 + 0x1e6);
      if (iVar2 != 6) {
        *(undefined4 *)(this_00 + 0x1e6) = 6;
      }
      puVar3 = (uint *)GrpPatrol((STGroupBoatC *)this_00,(uint)(iVar2 == 6));
      if (puVar3 == (uint *)0xffffffff) {
        return 0xffff;
      }
      goto LAB_004984f2;
    }
    if (*(int *)(this_00 + 0xa5) == 1) {
      iVar2 = *(int *)(this_00 + 0x1e6);
      if (iVar2 != 8) {
        *(undefined4 *)(this_00 + 0x1e6) = 8;
      }
      puVar3 = (uint *)GrpLoadRC((STGroupBoatC *)this_00,(uint)(iVar2 == 8));
    }
    else {
      if (*(int *)(this_00 + 0xa9) == 1) {
        if (*(int *)(this_00 + 0x1e6) == 9) {
          puVar3 = (uint *)GrpBuild((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)(this_00 + 0x1e6) = 9;
          puVar3 = (uint *)GrpBuild((STGroupBoatC *)this_00,0);
        }
        goto LAB_004984f2;
      }
      if (*(int *)(this_00 + 0xad) == 1) {
        if (*(int *)(this_00 + 0x1e6) == 10) {
          puVar3 = (uint *)GrpUnLoadRC((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)(this_00 + 0x1e6) = 10;
          puVar3 = (uint *)GrpUnLoadRC((STGroupBoatC *)this_00,0);
        }
      }
      else if (*(int *)(this_00 + 0x95) == 1) {
        if (*(int *)(this_00 + 0x1e6) == 4) {
          puVar3 = (uint *)GrpRepare((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)(this_00 + 0x1e6) = 4;
          puVar3 = (uint *)GrpRepare((STGroupBoatC *)this_00,0);
        }
      }
      else if (*(int *)(this_00 + 0x99) == 1) {
        if (*(int *)(this_00 + 0x1e6) == 5) {
          puVar3 = (uint *)GrpGuard((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)(this_00 + 0x1e6) = 5;
          puVar3 = (uint *)GrpGuard((STGroupBoatC *)this_00,0);
        }
      }
      else if (*(int *)(this_00 + 0xb1) == 1) {
        if (*(int *)(this_00 + 0x1e6) == 0xb) {
          puVar3 = (uint *)GrpLoadObj((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)(this_00 + 0x1e6) = 0xb;
          puVar3 = (uint *)GrpLoadObj((STGroupBoatC *)this_00,0);
        }
      }
      else {
        if (*(int *)(this_00 + 0xb5) != 1) {
          if (*(int *)(this_00 + 0xb9) == 1) {
            if (*(int *)(this_00 + 0x1e6) == 0xd) {
              puVar3 = (uint *)SetMine((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)(this_00 + 0x1e6) = 0xd;
              puVar3 = (uint *)SetMine((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)(this_00 + 0xbd) == 1) {
            if (*(int *)(this_00 + 0x1e6) == 0xe) {
              puVar3 = (uint *)DCBomb((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)(this_00 + 0x1e6) = 0xe;
              puVar3 = (uint *)DCBomb((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)(this_00 + 0xc1) == 1) {
            if (*(int *)(this_00 + 0x1e6) == 0xf) {
              puVar3 = (uint *)Capture((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)(this_00 + 0x1e6) = 0xf;
              puVar3 = (uint *)Capture((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)(this_00 + 0xc9) == 1) {
            if (*(int *)(this_00 + 0x1e6) == 0x11) {
              puVar3 = (uint *)Recharge((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)(this_00 + 0x1e6) = 0x11;
              puVar3 = (uint *)Recharge((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)(this_00 + 0xc5) == 1) {
            if (*(int *)(this_00 + 0x1e6) == 0x10) {
              puVar3 = (uint *)Teleport((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)(this_00 + 0x1e6) = 0x10;
              puVar3 = (uint *)Teleport((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)(this_00 + 0xcd) == 1) {
            if (*(int *)(this_00 + 0x1e6) == 0x12) {
              puVar3 = Bring((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)(this_00 + 0x1e6) = 0x12;
              puVar3 = Bring((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)(this_00 + 0xd1) == 1) {
            if (*(int *)(this_00 + 0x1e6) == 0x13) {
              puVar3 = (uint *)GrpDismant((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)(this_00 + 0x1e6) = 0x13;
              puVar3 = (uint *)GrpDismant((STGroupBoatC *)this_00,0);
            }
          }
          else {
            if (*(int *)(this_00 + 0xd5) != 1) {
              if (*(int *)(this_00 + 0xd9) != 1) goto LAB_004984d0;
              if (*(int *)(this_00 + 0x1e6) == 0x15) {
                puVar3 = (uint *)GrpRepSub((STGroupBoatC *)this_00,1);
              }
              else {
                *(undefined4 *)(this_00 + 0x1e6) = 0x15;
                puVar3 = (uint *)GrpRepSub((STGroupBoatC *)this_00,0);
              }
              goto LAB_0049818d;
            }
            if (*(int *)(this_00 + 0x1e6) == 0x14) {
              puVar3 = (uint *)Scout((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)(this_00 + 0x1e6) = 0x14;
              puVar3 = (uint *)Scout((STGroupBoatC *)this_00,0);
            }
          }
          goto LAB_004984f2;
        }
        if (*(int *)(this_00 + 0x1e6) == 0xc) {
          puVar3 = GrpUnLoadObj((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)(this_00 + 0x1e6) = 0xc;
          puVar3 = GrpUnLoadObj((STGroupBoatC *)this_00,0);
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
  GrpMove((STGroupBoatC *)this_00,iVar2);
  thunk_FUN_00423320(this_00,0x5d95);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}


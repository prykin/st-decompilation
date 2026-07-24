#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetMessage

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403BA7|00497E00; family_names=STGroupBoatC::GetMessage; ret4=10;
   direct_offsets={10:2,14:2,18:2,1c:0} */

int __thiscall STGroupBoatC::GetMessage(STGroupBoatC *this,STMessage *message)

{
  STMessageId SVar1;
  void *pvVar2;
  code *pcVar3;
  STGroupBoatC *this_00;
  int iVar4;
  uint *puVar5;
  int iVar6;
  DArrayTy *array;
  uint uVar7;
  uint index;
  byte *pbVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  byte *pbVar9;
  bool bVar10;
  InternalExceptionFrame local_84;
  undefined4 local_40 [2];
  undefined4 local_38;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  this_00 = local_20;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x3b4,0,iVar4,"%s",
                               "STGroupBoatC::GetMessage");
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x3b5);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id != MESS_SHARED_0003) {
    STGroupC::GetMessage((STGroupC *)local_20,message);
  }
  SVar1 = message->id;
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_010F) {
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
    for (uVar7 = local_c >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar7 = local_c & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    pbVar8 = local_18;
    pbVar9 = local_8 + local_c;
    for (uVar7 = local_10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar7 = local_10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    *(uint *)(local_8 + 0x38) = local_c;
    *(uint *)(local_8 + 0x3c) = local_10;
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,this_00->field_0018,local_8,
               (AnonShape_0060EA30_DCEB68AD *)(local_10 + local_c));
    FreeAndNull(&local_1c);
    FreeAndNull(&local_18);
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    if (this_00->field_00EF != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_00EF);
      this_00->field_00EF = (DArrayTy *)0x0;
    }
    if (this_00->field_0103 != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_0103);
      this_00->field_0103 = (DArrayTy *)0x0;
    }
    if (this_00->field_010F != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_010F);
      this_00->field_010F = (DArrayTy *)0x0;
    }
    if (this_00->field_0127 != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_0127);
      this_00->field_0127 = (DArrayTy *)0x0;
    }
    if (this_00->field_0160 != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_0160);
      this_00->field_0160 = (DArrayTy *)0x0;
    }
    if (this_00->field_0168 != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_0168);
      this_00->field_0168 = (DArrayTy *)0x0;
    }
    if (this_00->field_01CA != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_01CA);
      this_00->field_01CA = (DArrayTy *)0x0;
    }
    if (this_00->field_01CE != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_01CE);
      this_00->field_01CE = (DArrayTy *)0x0;
    }
    if (*(DArrayTy **)&this_00->field_0x1d2 != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00->field_0x1d2);
      *(undefined4 *)&this_00->field_0x1d2 = 0;
    }
    if (this_00->field_01D6 != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_01D6);
      this_00->field_01D6 = (DArrayTy *)0x0;
    }
    if (this_00->field_01DA != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_01DA);
      this_00->field_01DA = (DArrayTy *)0x0;
    }
    if ((DArrayTy *)this_00->field_01DE != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_01DE);
      this_00->field_01DE = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar7 = *(uint *)(this_00->field_0029 + 0xc);
    if ((uVar7 != 0) && (index = 0, uVar7 != 0)) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,index,&local_14);
        if ((short)local_14 != -1) {
          thunk_FUN_0040cdb0(this_00,local_14 & 0xffff);
        }
        index = index + 1;
      } while ((index & 0xffff) < uVar7);
    }
    if (this_00->field_021E != (ushort *)0x0) {
      FreeAndNull(&this_00->field_021E);
    }
    if (this_00->field_020E != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_020E);
      this_00->field_020E = (DArrayTy *)0x0;
    }
    if (this_00->field_0226 != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_0226);
      this_00->field_0226 = (DArrayTy *)0x0;
    }
    if (this_00->field_022A != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_022A);
      this_00->field_022A = (DArrayTy *)0x0;
    }
    if (this_00->field_022E != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_022E);
      this_00->field_022E = (DArrayTy *)0x0;
    }
    if (this_00->field_024E != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_024E);
      this_00->field_024E = (DArrayTy *)0x0;
    }
    if (this_00->field_0266 != (DArrayTy *)0x0) {
      DArrayDestroy(this_00->field_0266);
      this_00->field_0266 = (DArrayTy *)0x0;
    }
    if (*(DArrayTy **)&this_00->field_0x29f != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00->field_0x29f);
      *(undefined4 *)&this_00->field_0x29f = 0;
    }
    (*this_00->vtable->vfunc_18)(this_00,0,0,0);
    STGroupC::GetMessage((STGroupC *)this_00,message);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_NONE) {
    if (SVar1 != MESS_ID_CREATE) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    pvVar2 = (message->arg0).ptr;
    if (1 < *(uint *)((int)pvVar2 + 0xc)) {
      if (*(uint *)((int)pvVar2 + 0xc) != 2) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      RestoreGrpBData(this_00,(undefined4 *)(*(int *)((int)pvVar2 + 0x38) + (int)pvVar2));
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    this_00->field_01E6 = CASE_3;
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (this_00->field_005D == 1) {
    local_2c = this_00->field_0008;
    local_30 = 10;
    local_34 = 0;
    local_38 = g_playSystem_00802A38->field_0014;
    SystemClassTy::PostMessage((SystemClassTy *)g_playSystem_00802A38,local_40);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (this_00->field_0061 == 1) {
    uVar7 = 0;
    this_00->field_0061 = 0;
    if (this_00->field_0081 == 1) {
      array = this_00->field_01DA;
      this_00->field_0081 = 0;
      if (0 < (int)array->count) {
        do {
          DArrayGetElement(array,uVar7,&local_14);
          (*this_00->vtable->vfunc_04)(local_14);
          array = this_00->field_01DA;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)array->count);
      }
      if (this_00->field_01E6 == CASE_6) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        ReMakePatrolPoints(this_00,(int)unaff_EDI);
        sub_004A7E30(this_00,1);
      }
      if ((this_00->field_0027 == 0) && (this_00->field_0020 == 0)) {
        this_00->field_005D = 1;
      }
      DArrayDestroy(this_00->field_01DA);
      this_00->field_01DA = (DArrayTy *)0x0;
    }
    if ((this_00->field_006D == 1) && (this_00->field_006D = 0, this_00->field_002D != 0)) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      RechargeNewCmd(this_00,unaff_EDI);
      DArrayDestroy((DArrayTy *)this_00->field_002D);
      this_00->field_002D = 0;
    }
    if (this_00->field_0071 == 1) {
      this_00->field_0071 = 0;
      DArrayDestroy(this_00->field_01CA);
      this_00->field_01CA = (DArrayTy *)0x0;
    }
    if (this_00->field_0075 == 1) {
      this_00->field_0075 = 0;
      ReMakePVecAndTgtList(this_00,this_00->field_01CE);
      DistributeTargets(this_00,&this_00->field_01CE->flags);
      DArrayDestroy(this_00->field_01CE);
      this_00->field_01CE = (DArrayTy *)0x0;
    }
    if (this_00->field_0079 == 1) {
      this_00->field_0079 = 0;
      DArrayDestroy(*(DArrayTy **)&this_00->field_0x1d2);
      *(undefined4 *)&this_00->field_0x1d2 = 0;
    }
    if (this_00->field_007D == 1) {
      this_00->field_007D = 0;
      DArrayDestroy(this_00->field_01D6);
      this_00->field_01D6 = (DArrayTy *)0x0;
    }
  }
  if (this_00->field_0065 != 1) {
LAB_004984d0:
    switch(this_00->field_01E6) {
    case CASE_1:
      iVar4 = 2;
LAB_004984e9:
      puVar5 = (uint *)GrpMove(this_00,iVar4);
      break;
    case CASE_2:
      puVar5 = (uint *)GrpAttack(this_00,2);
      break;
    case CASE_3:
      GrpMove(this_00,2);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case CASE_4:
      puVar5 = (uint *)GrpRepare(this_00,2);
      break;
    case CASE_5:
      puVar5 = (uint *)GrpGuard(this_00,2);
      break;
    case CASE_6:
      puVar5 = (uint *)GrpPatrol(this_00,2);
      break;
    case CASE_7:
      puVar5 = (uint *)GrpGoToDeep(this_00,2);
      break;
    case CASE_8:
      puVar5 = (uint *)GrpLoadRC(this_00,2);
      break;
    case CASE_9:
      iVar4 = GrpBuild(this_00,2);
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      this_00->field_01E6 = CASE_3;
      iVar4 = 2;
      goto LAB_00498503;
    case CASE_A:
      puVar5 = (uint *)GrpUnLoadRC(this_00,2);
      break;
    case CASE_B:
      puVar5 = (uint *)GrpLoadObj(this_00,2);
      break;
    case CASE_C:
      puVar5 = GrpUnLoadObj(this_00,2);
      break;
    case CASE_D:
      puVar5 = (uint *)SetMine(this_00,2);
      break;
    case CASE_E:
      puVar5 = (uint *)DCBomb(this_00,2);
      break;
    case CASE_F:
      puVar5 = (uint *)Capture(this_00,2);
      break;
    case CASE_10:
      puVar5 = (uint *)Teleport(this_00,2);
      break;
    case CASE_11:
      puVar5 = (uint *)Recharge(this_00,2);
      break;
    case CASE_12:
      puVar5 = Bring(this_00,2);
      break;
    case CASE_13:
      puVar5 = (uint *)GrpDismant(this_00,2);
      break;
    case CASE_14:
      puVar5 = Scout(this_00,2);
      break;
    case CASE_15:
      puVar5 = (uint *)GrpRepSub(this_00,2);
      break;
    default:
      goto switchD_004984e0_default;
    }
    goto cf_common_exit_004984F2;
  }
  if (this_00->field_0089 == 1) {
    if (this_00->field_01E6 == CASE_1) {
      iVar4 = 1;
    }
    else {
      this_00->field_01E6 = CASE_1;
      iVar4 = 0;
    }
    goto LAB_004984e9;
  }
  if (this_00->field_0091 == 1) {
    if (this_00->field_01E6 != CASE_3) {
      this_00->field_01E6 = CASE_3;
      GrpMove(this_00,0);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    GrpMove(this_00,1);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (this_00->field_008D == 1) {
    if (this_00->field_01E6 == CASE_2) {
      puVar5 = (uint *)GrpAttack(this_00,1);
    }
    else {
      this_00->field_01E6 = CASE_2;
      puVar5 = (uint *)GrpAttack(this_00,0);
    }
cf_common_exit_004984F2:
    if (puVar5 != (uint *)0x0) {
switchD_004984e0_default:
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    this_00->field_01E6 = CASE_3;
  }
  else {
    if (this_00->field_00A1 == 1) {
      if (this_00->field_01E6 == CASE_7) {
        puVar5 = (uint *)GrpGoToDeep(this_00,1);
      }
      else {
        this_00->field_01E6 = CASE_7;
        puVar5 = (uint *)GrpGoToDeep(this_00,0);
      }
      goto cf_common_exit_004984F2;
    }
    if (this_00->field_009D == 1) {
      bVar10 = this_00->field_01E6 == CASE_6;
      if (!bVar10) {
        this_00->field_01E6 = CASE_6;
      }
      puVar5 = (uint *)GrpPatrol(this_00,(uint)bVar10);
      if (puVar5 == (uint *)0xffffffff) {
        return 0xffff;
      }
      goto cf_common_exit_004984F2;
    }
    if (this_00->field_00A5 == 1) {
      bVar10 = this_00->field_01E6 == CASE_8;
      if (!bVar10) {
        this_00->field_01E6 = CASE_8;
      }
      puVar5 = (uint *)GrpLoadRC(this_00,(uint)bVar10);
    }
    else {
      if (this_00->field_00A9 == 1) {
        if (this_00->field_01E6 == CASE_9) {
          puVar5 = (uint *)GrpBuild(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_9;
          puVar5 = (uint *)GrpBuild(this_00,0);
        }
        goto cf_common_exit_004984F2;
      }
      if (this_00->field_00AD == 1) {
        if (this_00->field_01E6 == CASE_A) {
          puVar5 = (uint *)GrpUnLoadRC(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_A;
          puVar5 = (uint *)GrpUnLoadRC(this_00,0);
        }
      }
      else if (this_00->field_0095 == 1) {
        if (this_00->field_01E6 == CASE_4) {
          puVar5 = (uint *)GrpRepare(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_4;
          puVar5 = (uint *)GrpRepare(this_00,0);
        }
      }
      else if (this_00->field_0099 == 1) {
        if (this_00->field_01E6 == CASE_5) {
          puVar5 = (uint *)GrpGuard(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_5;
          puVar5 = (uint *)GrpGuard(this_00,0);
        }
      }
      else if (this_00->field_00B1 == 1) {
        if (this_00->field_01E6 == CASE_B) {
          puVar5 = (uint *)GrpLoadObj(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_B;
          puVar5 = (uint *)GrpLoadObj(this_00,0);
        }
      }
      else {
        if (this_00->field_00B5 != 1) {
          if (this_00->field_00B9 == 1) {
            if (this_00->field_01E6 == CASE_D) {
              puVar5 = (uint *)SetMine(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_D;
              puVar5 = (uint *)SetMine(this_00,0);
            }
          }
          else if (this_00->field_00BD == 1) {
            if (this_00->field_01E6 == CASE_E) {
              puVar5 = (uint *)DCBomb(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_E;
              puVar5 = (uint *)DCBomb(this_00,0);
            }
          }
          else if (this_00->field_00C1 == 1) {
            if (this_00->field_01E6 == CASE_F) {
              puVar5 = (uint *)Capture(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_F;
              puVar5 = (uint *)Capture(this_00,0);
            }
          }
          else if (this_00->field_00C9 == 1) {
            if (this_00->field_01E6 == CASE_11) {
              puVar5 = (uint *)Recharge(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_11;
              puVar5 = (uint *)Recharge(this_00,0);
            }
          }
          else if (this_00->field_00C5 == 1) {
            if (this_00->field_01E6 == CASE_10) {
              puVar5 = (uint *)Teleport(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_10;
              puVar5 = (uint *)Teleport(this_00,0);
            }
          }
          else if (this_00->field_00CD == 1) {
            if (this_00->field_01E6 == CASE_12) {
              puVar5 = Bring(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_12;
              puVar5 = Bring(this_00,0);
            }
          }
          else if (this_00->field_00D1 == 1) {
            if (this_00->field_01E6 == CASE_13) {
              puVar5 = (uint *)GrpDismant(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_13;
              puVar5 = (uint *)GrpDismant(this_00,0);
            }
          }
          else {
            if (this_00->field_00D5 != 1) {
              if (this_00->field_00D9 != 1) goto LAB_004984d0;
              if (this_00->field_01E6 == CASE_15) {
                puVar5 = (uint *)GrpRepSub(this_00,1);
              }
              else {
                this_00->field_01E6 = CASE_15;
                puVar5 = (uint *)GrpRepSub(this_00,0);
              }
              goto LAB_0049818d;
            }
            if (this_00->field_01E6 == CASE_14) {
              puVar5 = Scout(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_14;
              puVar5 = Scout(this_00,0);
            }
          }
          goto cf_common_exit_004984F2;
        }
        if (this_00->field_01E6 == CASE_C) {
          puVar5 = GrpUnLoadObj(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_C;
          puVar5 = GrpUnLoadObj(this_00,0);
        }
      }
    }
LAB_0049818d:
    if (puVar5 == (uint *)0xffffffff) {
      return 0xffff;
    }
    if (puVar5 != (uint *)0x0) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  iVar4 = 0;
LAB_00498503:
  GrpMove(this_00,iVar4);
  thunk_FUN_00423320(this_00,0x5d95);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}


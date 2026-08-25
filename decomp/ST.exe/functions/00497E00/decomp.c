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
  STGroupBoatC *this_00;
  int iVar4;
  uint *puVar4;
  int iVar9;
  DArrayTy *array;
  uint uVar5;
  uint index;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  int iVar10;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  this_00 = local_20;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x3b4,0,iVar4,"%s",
                               "STGroupBoatC::GetMessage");
    if (iVar9 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x3b5);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id != MESS_SHARED_0003) {
    /* ST_CALLSITE[00497E48]: CALL 0x004034ea; direct=004034EA STGroupC::GetMessage */
    STGroupC::GetMessage((STGroupC *)local_20,message);
  }
  SVar1 = message->id;
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    /* ST_CALLSITE[004988AD]: CALL 0x00405439; direct=00405439 STGroupC::SaveGrpData */
    local_1c = (byte *)STGroupC::SaveGrpData((STGroupC *)this_00,(int *)&local_c);
    local_1c[0] = 0x3c;
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_1c[3] = 0;
    /* ST_CALLSITE[004988C1]: CALL 0x00401eec; direct=00401EEC STGroupBoatC::SaveGrpBData */
    local_18 = (byte *)SaveGrpBData(this_00,(int *)&local_10);
    local_8 = Library::DKW::LIB::MemAlloc(local_10 + local_c);
    pbVar6 = local_1c;
    pbVar7 = local_8;
    memmove(pbVar7, pbVar6, local_c); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    pbVar6 = local_18;
    pbVar7 = local_8 + local_c;
    memmove(pbVar7, pbVar6, local_10); /* compiler REP MOVS byte copy */
    *(uint *)(local_8 + 0x38) = local_c;
    *(uint *)(local_8 + 0x3c) = local_10;
    /* ST_CALLSITE[00498936]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,(int *)this_00->field_0018,local_8,local_10 + local_c);
    FreeAndNull(&local_1c);
    FreeAndNull(&local_18);
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    if (this_00->field_00EF != nullptr) {
      DArrayDestroy(this_00->field_00EF);
      this_00->field_00EF = nullptr;
    }
    if (this_00->field_0103 != nullptr) {
      DArrayDestroy(this_00->field_0103);
      this_00->field_0103 = nullptr;
    }
    if (this_00->field_010F != nullptr) {
      DArrayDestroy(this_00->field_010F);
      this_00->field_010F = nullptr;
    }
    if (this_00->field_0127 != nullptr) {
      DArrayDestroy(this_00->field_0127);
      this_00->field_0127 = nullptr;
    }
    if (this_00->field_0160 != nullptr) {
      DArrayDestroy(this_00->field_0160);
      this_00->field_0160 = nullptr;
    }
    if (this_00->field_0168 != nullptr) {
      DArrayDestroy(this_00->field_0168);
      this_00->field_0168 = nullptr;
    }
    if (this_00->field_01CA != nullptr) {
      DArrayDestroy(this_00->field_01CA);
      this_00->field_01CA = nullptr;
    }
    if (this_00->field_01CE != nullptr) {
      DArrayDestroy(this_00->field_01CE);
      this_00->field_01CE = nullptr;
    }
    if (this_00->field_01D2 != nullptr) {
      DArrayDestroy(this_00->field_01D2);
      this_00->field_01D2 = nullptr;
    }
    if (this_00->field_01D6 != nullptr) {
      DArrayDestroy(this_00->field_01D6);
      this_00->field_01D6 = nullptr;
    }
    if (this_00->field_01DA != nullptr) {
      DArrayDestroy(this_00->field_01DA);
      this_00->field_01DA = nullptr;
    }
    if (this_00->field_01DE != nullptr) {
      DArrayDestroy(this_00->field_01DE);
      this_00->field_01DE = nullptr;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar5 = *(uint *)(this_00->field_0029 + 0xc);
    if ((uVar5 != 0) && (index = 0, uVar5 != 0)) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,index,&local_14);
        if ((short)local_14 != -1) {
          thunk_FUN_0040cdb0(this_00,local_14 & 0xffff);
        }
        index = index + 1;
      } while ((index & 0xffff) < uVar5);
    }
    if (this_00->field_021E != nullptr) {
      FreeAndNull(&this_00->field_021E);
    }
    if (this_00->field_020E != nullptr) {
      DArrayDestroy(this_00->field_020E);
      this_00->field_020E = nullptr;
    }
    if (this_00->field_0226 != nullptr) {
      DArrayDestroy(this_00->field_0226);
      this_00->field_0226 = nullptr;
    }
    if (this_00->field_022A != nullptr) {
      DArrayDestroy(this_00->field_022A);
      this_00->field_022A = nullptr;
    }
    if (this_00->field_022E != nullptr) {
      DArrayDestroy(this_00->field_022E);
      this_00->field_022E = nullptr;
    }
    if (this_00->field_024E != nullptr) {
      DArrayDestroy(this_00->field_024E);
      this_00->field_024E = nullptr;
    }
    if (this_00->field_0266 != nullptr) {
      DArrayDestroy(this_00->field_0266);
      this_00->field_0266 = nullptr;
    }
    if ((DArrayTy *)this_00->field_029F != nullptr) {
      DArrayDestroy((DArrayTy *)this_00->field_029F);
      this_00->field_029F = 0;
    }
    /* ST_CALLSITE[0049887A]: CALL dword ptr [EAX + 0x18] */
    (*this_00->vtable->vfunc_18)((short)this_00,0,0,0);
    /* ST_CALLSITE[00498883]: CALL 0x004034ea; direct=004034EA STGroupC::GetMessage */
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
    if (1 < STField<uint>(pvVar2,0xc)) {
      if (STField<uint>(pvVar2,0xc) != 2) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      /* ST_CALLSITE[00497E88]: CALL 0x00401947; direct=00401947 STGroupBoatC::RestoreGrpBData */
      RestoreGrpBData(this_00,(undefined4 *)(STField<int>(pvVar2,0x38) + (int)pvVar2));
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
    uVar5 = 0;
    this_00->field_0061 = 0;
    if (this_00->field_0081 == 1) {
      array = this_00->field_01DA;
      this_00->field_0081 = 0;
      if (0 < (int)array->count) {
        do {
          DArrayGetElement(array,uVar5,&local_14);
          /* ST_CALLSITE[00497F44]: CALL dword ptr [EDX + 0x4] */
          this_00->vfunc_04((short)local_14);
          array = this_00->field_01DA;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)array->count);
      }
      if (this_00->field_01E6 == CASE_6) {
        /* ST_CALLSITE[00497F5E]: CALL 0x00403f80; direct=00403F80 STGroupBoatC::ReMakePatrolPoints */
        ReMakePatrolPoints(this_00);
        /* ST_CALLSITE[00497F66]: CALL 0x0040331e; direct=0040331E STGroupBoatC::sub_004A7E30 */
        sub_004A7E30(this_00,1);
      }
      if ((this_00->field_0027 == 0) && (this_00->field_0020 == CASE_0)) {
        this_00->field_005D = 1;
      }
      DArrayDestroy(this_00->field_01DA);
      this_00->field_01DA = nullptr;
    }
    if ((this_00->field_006D == 1) &&
       (this_00->field_006D = 0, this_00->field_002D != nullptr)) {
      /* ST_CALLSITE[00497FA5]: CALL 0x00402da1; direct=00402DA1 STGroupBoatC::RechargeNewCmd */
      RechargeNewCmd(this_00);
      DArrayDestroy(this_00->field_002D);
      this_00->field_002D = nullptr;
    }
    if (this_00->field_0071 == 1) {
      this_00->field_0071 = 0;
      DArrayDestroy(this_00->field_01CA);
      this_00->field_01CA = nullptr;
    }
    if (this_00->field_0075 == 1) {
      this_00->field_0075 = 0;
      /* ST_CALLSITE[00497FE1]: CALL 0x00404985; direct=00404985 STGroupBoatC::ReMakePVecAndTgtList */
      ReMakePVecAndTgtList(this_00,this_00->field_01CE);
      /* ST_CALLSITE[00497FEF]: CALL 0x00405146; direct=00405146 STGroupBoatC::DistributeTargets */
      DistributeTargets(this_00,&this_00->field_01CE->flags);
      DArrayDestroy(this_00->field_01CE);
      this_00->field_01CE = nullptr;
    }
    if (this_00->field_0079 == 1) {
      this_00->field_0079 = 0;
      DArrayDestroy(this_00->field_01D2);
      this_00->field_01D2 = nullptr;
    }
    if (this_00->field_007D == 1) {
      this_00->field_007D = 0;
      DArrayDestroy(this_00->field_01D6);
      this_00->field_01D6 = nullptr;
    }
  }
  if (this_00->field_0065 != 1) {
LAB_004984d0:
    switch(this_00->field_01E6) {
    case CASE_1:
      iVar10 = 2;
LAB_004984e9:
      /* ST_CALLSITE[004984EB]: CALL 0x0040304e; direct=0040304E STGroupBoatC::GrpMove */
      puVar4 = (uint *)GrpMove(this_00,iVar10);
      break;
    case CASE_2:
      /* ST_CALLSITE[0049854B]: CALL 0x004010be; direct=004010BE STGroupBoatC::GrpAttack */
      puVar4 = (uint *)GrpAttack(this_00,2);
      break;
    case CASE_3:
      /* ST_CALLSITE[0049852E]: CALL 0x0040593e; direct=0040593E STGroupBoatC::GrpMove */
      GrpMove(this_00,2);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case CASE_4:
      /* ST_CALLSITE[004985AA]: CALL 0x00404859; direct=00404859 STGroupBoatC::GrpRepare */
      puVar4 = (uint *)GrpRepare(this_00,2);
      break;
    case CASE_5:
      /* ST_CALLSITE[004985B8]: CALL 0x00405da3; direct=00405DA3 STGroupBoatC::GrpGuard */
      puVar4 = (uint *)GrpGuard(this_00,2);
      break;
    case CASE_6:
      /* ST_CALLSITE[00498561]: CALL 0x00405371; direct=00405371 STGroupBoatC::GrpPatrol */
      puVar4 = (uint *)GrpPatrol(this_00,2);
      break;
    case CASE_7:
      /* ST_CALLSITE[00498556]: CALL 0x00401bef; direct=00401BEF STGroupBoatC::GrpGoToDeep */
      puVar4 = (uint *)GrpGoToDeep(this_00,2);
      break;
    case CASE_8:
      /* ST_CALLSITE[0049856C]: CALL 0x00405673; direct=00405673 STGroupBoatC::GrpLoadRC */
      puVar4 = (uint *)GrpLoadRC(this_00,2);
      break;
    case CASE_9:
      /* ST_CALLSITE[0049857A]: CALL 0x00402f81; direct=00402F81 STGroupBoatC::GrpBuild */
      iVar10 = GrpBuild(this_00,2);
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      this_00->field_01E6 = CASE_3;
      iVar10 = 2;
      goto LAB_00498503;
    case CASE_A:
      /* ST_CALLSITE[0049859C]: CALL 0x004053bc; direct=004053BC STGroupBoatC::GrpUnLoadRC */
      puVar4 = (uint *)GrpUnLoadRC(this_00,2);
      break;
    case CASE_B:
      /* ST_CALLSITE[004985C6]: CALL 0x00402955; direct=00402955 STGroupBoatC::GrpLoadObj */
      puVar4 = (uint *)GrpLoadObj(this_00,2);
      break;
    case CASE_C:
      /* ST_CALLSITE[004985D4]: CALL 0x00403125; direct=00403125 STGroupBoatC::GrpUnLoadObj */
      puVar4 = GrpUnLoadObj(this_00,2);
      break;
    case CASE_D:
      /* ST_CALLSITE[004985E2]: CALL 0x00402b85; direct=00402B85 STGroupBoatC::SetMine */
      puVar4 = (uint *)SetMine(this_00,2);
      break;
    case CASE_E:
      /* ST_CALLSITE[004985F0]: CALL 0x004036de; direct=004036DE STGroupBoatC::DCBomb */
      puVar4 = (uint *)DCBomb(this_00,2);
      break;
    case CASE_F:
      /* ST_CALLSITE[004985FE]: CALL 0x004036c5; direct=004036C5 STGroupBoatC::Capture */
      puVar4 = (uint *)Capture(this_00,2);
      break;
    case CASE_10:
      /* ST_CALLSITE[0049861A]: CALL 0x004027a2; direct=004027A2 STGroupBoatC::Teleport */
      puVar4 = (uint *)Teleport(this_00,2);
      break;
    case CASE_11:
      /* ST_CALLSITE[0049860C]: CALL 0x004051af; direct=004051AF STGroupBoatC::Recharge */
      puVar4 = (uint *)Recharge(this_00,2);
      break;
    case CASE_12:
      /* ST_CALLSITE[00498628]: CALL 0x0040546b; direct=0040546B STGroupBoatC::Bring */
      puVar4 = Bring(this_00,2);
      break;
    case CASE_13:
      /* ST_CALLSITE[00498636]: CALL 0x004018c0; direct=004018C0 STGroupBoatC::GrpDismant */
      puVar4 = (uint *)GrpDismant(this_00,2);
      break;
    case CASE_14:
      /* ST_CALLSITE[00498644]: CALL 0x00401a00; direct=00401A00 STGroupBoatC::Scout */
      puVar4 = Scout(this_00,2);
      break;
    case CASE_15:
      /* ST_CALLSITE[00498652]: CALL 0x00405326; direct=00405326 STGroupBoatC::GrpRepSub */
      puVar4 = (uint *)GrpRepSub(this_00,2);
      break;
    default:
      goto switchD_004984e0_default;
    }
    goto cf_common_exit_004984F2;
  }
  if (this_00->field_0089 == 1) {
    if (this_00->field_01E6 == CASE_1) {
      iVar10 = 1;
    }
    else {
      this_00->field_01E6 = CASE_1;
      iVar10 = 0;
    }
    goto LAB_004984e9;
  }
  if (this_00->field_0091 == 1) {
    if (this_00->field_01E6 != CASE_3) {
      this_00->field_01E6 = CASE_3;
      /* ST_CALLSITE[0049808A]: CALL 0x0040593e; direct=0040593E STGroupBoatC::GrpMove */
      GrpMove(this_00,0);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    /* ST_CALLSITE[004980A6]: CALL 0x0040593e; direct=0040593E STGroupBoatC::GrpMove */
    GrpMove(this_00,1);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (this_00->field_008D == 1) {
    if (this_00->field_01E6 == CASE_2) {
      /* ST_CALLSITE[004980EC]: CALL 0x004010be; direct=004010BE STGroupBoatC::GrpAttack */
      puVar4 = (uint *)GrpAttack(this_00,1);
    }
    else {
      this_00->field_01E6 = CASE_2;
      /* ST_CALLSITE[004980DF]: CALL 0x004010be; direct=004010BE STGroupBoatC::GrpAttack */
      puVar4 = (uint *)GrpAttack(this_00,0);
    }
cf_common_exit_004984F2:
    if (puVar4 != nullptr) {
switchD_004984e0_default:
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    this_00->field_01E6 = CASE_3;
  }
  else {
    if (this_00->field_00A1 == 1) {
      if (this_00->field_01E6 == CASE_7) {
        /* ST_CALLSITE[00498123]: CALL 0x00401bef; direct=00401BEF STGroupBoatC::GrpGoToDeep */
        puVar4 = (uint *)GrpGoToDeep(this_00,1);
      }
      else {
        this_00->field_01E6 = CASE_7;
        /* ST_CALLSITE[00498116]: CALL 0x00401bef; direct=00401BEF STGroupBoatC::GrpGoToDeep */
        puVar4 = (uint *)GrpGoToDeep(this_00,0);
      }
      goto cf_common_exit_004984F2;
    }
    if (this_00->field_009D == 1) {
      bVar8 = this_00->field_01E6 == CASE_6;
      if (!bVar8) {
        this_00->field_01E6 = CASE_6;
      }
      /* ST_CALLSITE[00498150]: CALL 0x00405371; direct=00405371 STGroupBoatC::GrpPatrol */
      puVar4 = (uint *)GrpPatrol(this_00,(uint)bVar8);
      if (puVar4 == (uint *)0xffffffff) {
        return 0xffff;
      }
      goto cf_common_exit_004984F2;
    }
    if (this_00->field_00A5 == 1) {
      bVar8 = this_00->field_01E6 == CASE_8;
      if (!bVar8) {
        this_00->field_01E6 = CASE_8;
      }
      /* ST_CALLSITE[00498188]: CALL 0x00405673; direct=00405673 STGroupBoatC::GrpLoadRC */
      puVar4 = (uint *)GrpLoadRC(this_00,(uint)bVar8);
    }
    else {
      if (this_00->field_00A9 == 1) {
        if (this_00->field_01E6 == CASE_9) {
          /* ST_CALLSITE[004981D0]: CALL 0x00402f81; direct=00402F81 STGroupBoatC::GrpBuild */
          puVar4 = (uint *)GrpBuild(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_9;
          /* ST_CALLSITE[004981C3]: CALL 0x00402f81; direct=00402F81 STGroupBoatC::GrpBuild */
          puVar4 = (uint *)GrpBuild(this_00,0);
        }
        goto cf_common_exit_004984F2;
      }
      if (this_00->field_00AD == 1) {
        if (this_00->field_01E6 == CASE_A) {
          /* ST_CALLSITE[00498204]: CALL 0x004053bc; direct=004053BC STGroupBoatC::GrpUnLoadRC */
          puVar4 = (uint *)GrpUnLoadRC(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_A;
          /* ST_CALLSITE[004981FA]: CALL 0x004053bc; direct=004053BC STGroupBoatC::GrpUnLoadRC */
          puVar4 = (uint *)GrpUnLoadRC(this_00,0);
        }
      }
      else if (this_00->field_0095 == 1) {
        if (this_00->field_01E6 == CASE_4) {
          /* ST_CALLSITE[00498238]: CALL 0x00404859; direct=00404859 STGroupBoatC::GrpRepare */
          puVar4 = (uint *)GrpRepare(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_4;
          /* ST_CALLSITE[0049822B]: CALL 0x00404859; direct=00404859 STGroupBoatC::GrpRepare */
          puVar4 = (uint *)GrpRepare(this_00,0);
        }
      }
      else if (this_00->field_0099 == 1) {
        if (this_00->field_01E6 == CASE_5) {
          /* ST_CALLSITE[0049826F]: CALL 0x00405da3; direct=00405DA3 STGroupBoatC::GrpGuard */
          puVar4 = (uint *)GrpGuard(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_5;
          /* ST_CALLSITE[00498262]: CALL 0x00405da3; direct=00405DA3 STGroupBoatC::GrpGuard */
          puVar4 = (uint *)GrpGuard(this_00,0);
        }
      }
      else if (this_00->field_00B1 == 1) {
        if (this_00->field_01E6 == CASE_B) {
          /* ST_CALLSITE[004982A6]: CALL 0x00402955; direct=00402955 STGroupBoatC::GrpLoadObj */
          puVar4 = (uint *)GrpLoadObj(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_B;
          /* ST_CALLSITE[00498299]: CALL 0x00402955; direct=00402955 STGroupBoatC::GrpLoadObj */
          puVar4 = (uint *)GrpLoadObj(this_00,0);
        }
      }
      else {
        if (this_00->field_00B5 != 1) {
          if (this_00->field_00B9 == 1) {
            if (this_00->field_01E6 == CASE_D) {
              /* ST_CALLSITE[00498314]: CALL 0x00402b85; direct=00402B85 STGroupBoatC::SetMine */
              puVar4 = (uint *)SetMine(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_D;
              /* ST_CALLSITE[00498307]: CALL 0x00402b85; direct=00402B85 STGroupBoatC::SetMine */
              puVar4 = (uint *)SetMine(this_00,0);
            }
          }
          else if (this_00->field_00BD == 1) {
            if (this_00->field_01E6 == CASE_E) {
              /* ST_CALLSITE[0049834B]: CALL 0x004036de; direct=004036DE STGroupBoatC::DCBomb */
              puVar4 = (uint *)DCBomb(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_E;
              /* ST_CALLSITE[0049833E]: CALL 0x004036de; direct=004036DE STGroupBoatC::DCBomb */
              puVar4 = (uint *)DCBomb(this_00,0);
            }
          }
          else if (this_00->field_00C1 == 1) {
            if (this_00->field_01E6 == CASE_F) {
              /* ST_CALLSITE[00498382]: CALL 0x004036c5; direct=004036C5 STGroupBoatC::Capture */
              puVar4 = (uint *)Capture(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_F;
              /* ST_CALLSITE[00498375]: CALL 0x004036c5; direct=004036C5 STGroupBoatC::Capture */
              puVar4 = (uint *)Capture(this_00,0);
            }
          }
          else if (this_00->field_00C9 == 1) {
            if (this_00->field_01E6 == CASE_11) {
              /* ST_CALLSITE[004983B9]: CALL 0x004051af; direct=004051AF STGroupBoatC::Recharge */
              puVar4 = (uint *)Recharge(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_11;
              /* ST_CALLSITE[004983AC]: CALL 0x004051af; direct=004051AF STGroupBoatC::Recharge */
              puVar4 = (uint *)Recharge(this_00,0);
            }
          }
          else if (this_00->field_00C5 == 1) {
            if (this_00->field_01E6 == CASE_10) {
              /* ST_CALLSITE[004983F0]: CALL 0x004027a2; direct=004027A2 STGroupBoatC::Teleport */
              puVar4 = (uint *)Teleport(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_10;
              /* ST_CALLSITE[004983E3]: CALL 0x004027a2; direct=004027A2 STGroupBoatC::Teleport */
              puVar4 = (uint *)Teleport(this_00,0);
            }
          }
          else if (this_00->field_00CD == 1) {
            if (this_00->field_01E6 == CASE_12) {
              /* ST_CALLSITE[00498427]: CALL 0x0040546b; direct=0040546B STGroupBoatC::Bring */
              puVar4 = Bring(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_12;
              /* ST_CALLSITE[0049841A]: CALL 0x0040546b; direct=0040546B STGroupBoatC::Bring */
              puVar4 = Bring(this_00,0);
            }
          }
          else if (this_00->field_00D1 == 1) {
            if (this_00->field_01E6 == CASE_13) {
              /* ST_CALLSITE[0049845E]: CALL 0x004018c0; direct=004018C0 STGroupBoatC::GrpDismant */
              puVar4 = (uint *)GrpDismant(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_13;
              /* ST_CALLSITE[00498451]: CALL 0x004018c0; direct=004018C0 STGroupBoatC::GrpDismant */
              puVar4 = (uint *)GrpDismant(this_00,0);
            }
          }
          else {
            if (this_00->field_00D5 != 1) {
              if (this_00->field_00D9 != 1) goto LAB_004984d0;
              if (this_00->field_01E6 == CASE_15) {
                /* ST_CALLSITE[004984C6]: CALL 0x00405326; direct=00405326 STGroupBoatC::GrpRepSub */
                puVar4 = (uint *)GrpRepSub(this_00,1);
              }
              else {
                this_00->field_01E6 = CASE_15;
                /* ST_CALLSITE[004984B9]: CALL 0x00405326; direct=00405326 STGroupBoatC::GrpRepSub */
                puVar4 = (uint *)GrpRepSub(this_00,0);
              }
              goto LAB_0049818d;
            }
            if (this_00->field_01E6 == CASE_14) {
              /* ST_CALLSITE[00498492]: CALL 0x00401a00; direct=00401A00 STGroupBoatC::Scout */
              puVar4 = Scout(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_14;
              /* ST_CALLSITE[00498488]: CALL 0x00401a00; direct=00401A00 STGroupBoatC::Scout */
              puVar4 = Scout(this_00,0);
            }
          }
          goto cf_common_exit_004984F2;
        }
        if (this_00->field_01E6 == CASE_C) {
          /* ST_CALLSITE[004982DD]: CALL 0x00403125; direct=00403125 STGroupBoatC::GrpUnLoadObj */
          puVar4 = GrpUnLoadObj(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_C;
          /* ST_CALLSITE[004982D0]: CALL 0x00403125; direct=00403125 STGroupBoatC::GrpUnLoadObj */
          puVar4 = GrpUnLoadObj(this_00,0);
        }
      }
    }
LAB_0049818d:
    if (puVar4 == (uint *)0xffffffff) {
      return 0xffff;
    }
    if (puVar4 != nullptr) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  iVar10 = 0;
LAB_00498503:
  /* ST_CALLSITE[00498505]: CALL 0x0040593e; direct=0040593E STGroupBoatC::GrpMove */
  GrpMove(this_00,iVar10);
  thunk_FUN_00423320(this_00,0x5d95);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}


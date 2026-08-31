#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/to_grpb.cpp

// 00497CD0 STGroupBoatC::InitWay
#line 4 "decomp/ST.exe/functions/00497CD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::InitWay */

undefined4 __thiscall
st::fn_00497CD0(STGroupBoatC *this,DArrayTy *param_1,int param_2,int param_3,int param_4)

{
  STGroupBoatC *pSVar2;
  int errorCode;
  STGameObjC *pSVar3;
  int iVar4;
  uint uVar5;
  uint index;
  InternalExceptionFrame local_50;
  STGroupBoatC *local_c;
  byte local_8 [4];
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (errorCode == 0) {
    index = 0;
    if (param_1->count != 0) {
      do {
        st::fn_006ACC70(param_1,index,local_8);
        /* ST_CALLSITE[00497D2B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar3 = st::fn_004028BA
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
        pSVar3->field_00FD = 0;
        index = index + 1;
      } while (index < param_1->count);
    }
    /* ST_CALLSITE[00497D54]: CALL 0x00402a31; direct=00402A31 STGroupBoatC::Way3DGrpDistribTgt */
    st::fn_00402A31(pSVar2,param_1,param_2,param_3,param_4);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x6e,0,errorCode,st::mutable_c_string("%s"),
                             "STGroupBoatC::InitWay");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x6f);
  return 0xffffffff;
}

// 00497E00 STGroupBoatC::GetMessage
#line 4 "decomp/ST.exe/functions/00497E00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetMessage

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403BA7|00497E00; family_names=STGroupBoatC::GetMessage; ret4=10;
   direct_offsets={10:2,14:2,18:2,1c:0} */

int __thiscall st::fn_00497E00(STGroupBoatC *this,STMessage *message)

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
  uint local_40 [2];
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
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

  iVar4 = st::fn_0072D7F0(local_84.jumpBuffer,0);
  this_00 = local_20;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_84.previous;

    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x3b4,0,iVar4,st::mutable_c_string("%s"),
                               "STGroupBoatC::GetMessage");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x3b5);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id != MESS_SHARED_0003) {
    /* ST_CALLSITE[00497E48]: CALL 0x004034ea; direct=004034EA STGroupC::GetMessage */
    st::fn_004034EA(reinterpret_cast<STGroupC *>(local_20),message);
  }
  SVar1 = message->id;
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_010F) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    /* ST_CALLSITE[004988AD]: CALL 0x00405439; direct=00405439 STGroupC::SaveGrpData */
    local_1c = STPointerBoundaryCast<byte *>(st::fn_00405439(reinterpret_cast<STGroupC *>(this_00),reinterpret_cast<int *>(&local_c)));
    local_1c[0] = 0x3c;
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_1c[3] = 0;
    /* ST_CALLSITE[004988C1]: CALL 0x00401eec; direct=00401EEC STGroupBoatC::SaveGrpBData */
    local_18 = STPointerBoundaryCast<byte *>(st::fn_00401EEC(this_00,reinterpret_cast<int *>(&local_10)));

    local_8 = (byte *)st::fn_006AAC70(local_10 + local_c);
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
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)this_00->field_0018,local_8,local_10 + local_c);
    st::fn_006AB060(&local_1c);
    st::fn_006AB060(&local_18);
    st::fn_006AB060(&local_8);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_0003) {
    if (this_00->field_00EF != nullptr) {
      st::fn_006AE110(this_00->field_00EF);
      this_00->field_00EF = nullptr;
    }
    if (this_00->field_0103 != nullptr) {
      st::fn_006AE110(this_00->field_0103);
      this_00->field_0103 = nullptr;
    }
    if (this_00->field_010F != nullptr) {
      st::fn_006AE110(this_00->field_010F);
      this_00->field_010F = nullptr;
    }
    if (this_00->field_0127 != nullptr) {
      st::fn_006AE110(this_00->field_0127);
      this_00->field_0127 = nullptr;
    }
    if (this_00->field_0160 != nullptr) {
      st::fn_006AE110(this_00->field_0160);
      this_00->field_0160 = nullptr;
    }
    if (this_00->field_0168 != nullptr) {
      st::fn_006AE110(this_00->field_0168);
      this_00->field_0168 = nullptr;
    }
    if (this_00->field_01CA != nullptr) {
      st::fn_006AE110(this_00->field_01CA);
      this_00->field_01CA = nullptr;
    }
    if (this_00->field_01CE != nullptr) {
      st::fn_006AE110(this_00->field_01CE);
      this_00->field_01CE = nullptr;
    }
    if (this_00->field_01D2 != nullptr) {
      st::fn_006AE110(this_00->field_01D2);
      this_00->field_01D2 = nullptr;
    }
    if (this_00->field_01D6 != nullptr) {
      st::fn_006AE110(this_00->field_01D6);
      this_00->field_01D6 = nullptr;
    }
    if (this_00->field_01DA != nullptr) {
      st::fn_006AE110(this_00->field_01DA);
      this_00->field_01DA = nullptr;
    }
    if (this_00->field_01DE != nullptr) {
      st::fn_006AE110(this_00->field_01DE);
      this_00->field_01DE = nullptr;
    }
    uVar5 = this_00->field_0029->count;
    if ((uVar5 != 0) && (index = 0, uVar5 != 0)) {
      do {

        st::fn_006ACC70(this_00->field_0029,index,&local_14);
        if ((short)local_14 != -1) {
          /* ST_CALLSITE[00498793]: CALL 0x00404ff2; direct=00404FF2 STGroupBoatC::sub_0040CDB0 */
          st::fn_00404FF2(this_00,local_14 & 0xffff);
        }
        index = index + 1;
      } while ((index & 0xffff) < uVar5);
    }
    if (this_00->field_021E != nullptr) {
      st::fn_006AB060(&this_00->field_021E);
    }
    if (this_00->field_020E != nullptr) {
      st::fn_006AE110(this_00->field_020E);
      this_00->field_020E = nullptr;
    }
    if (this_00->field_0226 != nullptr) {
      st::fn_006AE110(this_00->field_0226);
      this_00->field_0226 = nullptr;
    }
    if (this_00->field_022A != nullptr) {
      st::fn_006AE110(this_00->field_022A);
      this_00->field_022A = nullptr;
    }
    if (this_00->field_022E != nullptr) {
      st::fn_006AE110(this_00->field_022E);
      this_00->field_022E = nullptr;
    }
    if (this_00->field_024E != nullptr) {
      st::fn_006AE110(this_00->field_024E);
      this_00->field_024E = nullptr;
    }
    if (this_00->field_0266 != nullptr) {
      st::fn_006AE110(this_00->field_0266);
      this_00->field_0266 = nullptr;
    }
    if ((DArrayTy *)this_00->field_029F != 0) {
      st::fn_006AE110((DArrayTy *)this_00->field_029F);
      this_00->field_029F = 0;
    }
    /* ST_CALLSITE[0049887A]: CALL dword ptr [EAX + 0x18] */
    (*this_00->vtable->vfunc_18)((short)this_00,0,0,0);
    /* ST_CALLSITE[00498883]: CALL 0x004034ea; direct=004034EA STGroupC::GetMessage */
    st::fn_004034EA(reinterpret_cast<STGroupC *>(this_00),message);
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
      st::fn_00401947(this_00,(undefined4 *)(STField<int>(pvVar2,0x38) + (int)pvVar2));
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

    st::fn_006E5810(reinterpret_cast<SystemClassTy *>(g_playSystem_00802A38),local_40);
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

          st::fn_006ACC70(array,uVar5,&local_14);
          /* ST_CALLSITE[00497F44]: CALL dword ptr [EDX + 0x4] */
          this_00->vfunc_4((ushort)local_14);
          array = this_00->field_01DA;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)array->count);
      }
      if (this_00->field_01E6 == CASE_6) {
        /* ST_CALLSITE[00497F5E]: CALL 0x00403f80; direct=00403F80 STGroupBoatC::ReMakePatrolPoints */
        st::fn_00403F80(this_00);
        /* ST_CALLSITE[00497F66]: CALL 0x0040331e; direct=0040331E STGroupBoatC::sub_004A7E30 */
        st::fn_0040331E(this_00,1);
      }
      if ((this_00->field_0027 == 0) && (this_00->field_0020 == CASE_0)) {
        this_00->field_005D = 1;
      }
      st::fn_006AE110(this_00->field_01DA);
      this_00->field_01DA = nullptr;
    }
    if ((this_00->field_006D == 1) &&
       (this_00->field_006D = 0, this_00->field_002D != nullptr)) {
      /* ST_CALLSITE[00497FA5]: CALL 0x00402da1; direct=00402DA1 STGroupBoatC::RechargeNewCmd */
      st::fn_00402DA1(this_00);
      st::fn_006AE110(this_00->field_002D);
      this_00->field_002D = nullptr;
    }
    if (this_00->field_0071 == 1) {
      this_00->field_0071 = 0;
      st::fn_006AE110(this_00->field_01CA);
      this_00->field_01CA = nullptr;
    }
    if (this_00->field_0075 == 1) {
      this_00->field_0075 = 0;
      /* ST_CALLSITE[00497FE1]: CALL 0x00404985; direct=00404985 STGroupBoatC::ReMakePVecAndTgtList */
      st::fn_00404985(this_00,this_00->field_01CE);
      /* ST_CALLSITE[00497FEF]: CALL 0x00405146; direct=00405146 STGroupBoatC::DistributeTargets */
      st::fn_00405146(this_00,&this_00->field_01CE->flags);
      st::fn_006AE110(this_00->field_01CE);
      this_00->field_01CE = nullptr;
    }
    if (this_00->field_0079 == 1) {
      this_00->field_0079 = 0;
      st::fn_006AE110(this_00->field_01D2);
      this_00->field_01D2 = nullptr;
    }
    if (this_00->field_007D == 1) {
      this_00->field_007D = 0;
      st::fn_006AE110(this_00->field_01D6);
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
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_0040304E(this_00,iVar10));
      break;
    case CASE_2:
      /* ST_CALLSITE[0049854B]: CALL 0x004010be; direct=004010BE STGroupBoatC::GrpAttack */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_004010BE(this_00,2));
      break;
    case CASE_3:
      /* ST_CALLSITE[0049852E]: CALL 0x0040593e; direct=0040593E STGroupBoatC::GrpMove */
      st::fn_0040593E(this_00,2);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case CASE_4:
      /* ST_CALLSITE[004985AA]: CALL 0x00404859; direct=00404859 STGroupBoatC::GrpRepare */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00404859(this_00,2));
      break;
    case CASE_5:
      /* ST_CALLSITE[004985B8]: CALL 0x00405da3; direct=00405DA3 STGroupBoatC::GrpGuard */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405DA3(this_00,2));
      break;
    case CASE_6:
      /* ST_CALLSITE[00498561]: CALL 0x00405371; direct=00405371 STGroupBoatC::GrpPatrol */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405371(this_00,2));
      break;
    case CASE_7:
      /* ST_CALLSITE[00498556]: CALL 0x00401bef; direct=00401BEF STGroupBoatC::GrpGoToDeep */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00401BEF(this_00,2));
      break;
    case CASE_8:
      /* ST_CALLSITE[0049856C]: CALL 0x00405673; direct=00405673 STGroupBoatC::GrpLoadRC */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405673(this_00,2));
      break;
    case CASE_9:
      /* ST_CALLSITE[0049857A]: CALL 0x00402f81; direct=00402F81 STGroupBoatC::GrpBuild */
      iVar10 = st::fn_00402F81(this_00,2);
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      this_00->field_01E6 = CASE_3;
      iVar10 = 2;
      goto LAB_00498503;
    case CASE_A:
      /* ST_CALLSITE[0049859C]: CALL 0x004053bc; direct=004053BC STGroupBoatC::GrpUnLoadRC */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_004053BC(this_00,2));
      break;
    case CASE_B:
      /* ST_CALLSITE[004985C6]: CALL 0x00402955; direct=00402955 STGroupBoatC::GrpLoadObj */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00402955(this_00,2));
      break;
    case CASE_C:
      /* ST_CALLSITE[004985D4]: CALL 0x00403125; direct=00403125 STGroupBoatC::GrpUnLoadObj */
      puVar4 = st::fn_00403125(this_00,2);
      break;
    case CASE_D:
      /* ST_CALLSITE[004985E2]: CALL 0x00402b85; direct=00402B85 STGroupBoatC::SetMine */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00402B85(this_00,2));
      break;
    case CASE_E:
      /* ST_CALLSITE[004985F0]: CALL 0x004036de; direct=004036DE STGroupBoatC::DCBomb */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_004036DE(this_00,2));
      break;
    case CASE_F:
      /* ST_CALLSITE[004985FE]: CALL 0x004036c5; direct=004036C5 STGroupBoatC::Capture */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_004036C5(this_00,2));
      break;
    case CASE_10:
      /* ST_CALLSITE[0049861A]: CALL 0x004027a2; direct=004027A2 STGroupBoatC::Teleport */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_004027A2(this_00,2));
      break;
    case CASE_11:
      /* ST_CALLSITE[0049860C]: CALL 0x004051af; direct=004051AF STGroupBoatC::Recharge */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_004051AF(this_00,2));
      break;
    case CASE_12:
      /* ST_CALLSITE[00498628]: CALL 0x0040546b; direct=0040546B STGroupBoatC::Bring */
      puVar4 = st::fn_0040546B(this_00,2);
      break;
    case CASE_13:
      /* ST_CALLSITE[00498636]: CALL 0x004018c0; direct=004018C0 STGroupBoatC::GrpDismant */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_004018C0(this_00,2));
      break;
    case CASE_14:
      /* ST_CALLSITE[00498644]: CALL 0x00401a00; direct=00401A00 STGroupBoatC::Scout */
      puVar4 = st::fn_00401A00(this_00,2);
      break;
    case CASE_15:
      /* ST_CALLSITE[00498652]: CALL 0x00405326; direct=00405326 STGroupBoatC::GrpRepSub */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405326(this_00,2));
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
      st::fn_0040593E(this_00,0);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    /* ST_CALLSITE[004980A6]: CALL 0x0040593e; direct=0040593E STGroupBoatC::GrpMove */
    st::fn_0040593E(this_00,1);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (this_00->field_008D == 1) {
    if (this_00->field_01E6 == CASE_2) {
      /* ST_CALLSITE[004980EC]: CALL 0x004010be; direct=004010BE STGroupBoatC::GrpAttack */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_004010BE(this_00,1));
    }
    else {
      this_00->field_01E6 = CASE_2;
      /* ST_CALLSITE[004980DF]: CALL 0x004010be; direct=004010BE STGroupBoatC::GrpAttack */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_004010BE(this_00,0));
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
        puVar4 = STPointerBoundaryCast<uint *>(st::fn_00401BEF(this_00,1));
      }
      else {
        this_00->field_01E6 = CASE_7;
        /* ST_CALLSITE[00498116]: CALL 0x00401bef; direct=00401BEF STGroupBoatC::GrpGoToDeep */
        puVar4 = STPointerBoundaryCast<uint *>(st::fn_00401BEF(this_00,0));
      }
      goto cf_common_exit_004984F2;
    }
    if (this_00->field_009D == 1) {
      bVar8 = this_00->field_01E6 == CASE_6;
      if (!bVar8) {
        this_00->field_01E6 = CASE_6;
      }
      /* ST_CALLSITE[00498150]: CALL 0x00405371; direct=00405371 STGroupBoatC::GrpPatrol */
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405371(this_00,(uint)bVar8));
      if (st::machine_word_boundary_cast<uint>(puVar4) == st::machine_word_boundary_cast<uint>((uint *)0xffffffff)) {
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
      puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405673(this_00,(uint)bVar8));
    }
    else {
      if (this_00->field_00A9 == 1) {
        if (this_00->field_01E6 == CASE_9) {
          /* ST_CALLSITE[004981D0]: CALL 0x00402f81; direct=00402F81 STGroupBoatC::GrpBuild */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_00402F81(this_00,1));
        }
        else {
          this_00->field_01E6 = CASE_9;
          /* ST_CALLSITE[004981C3]: CALL 0x00402f81; direct=00402F81 STGroupBoatC::GrpBuild */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_00402F81(this_00,0));
        }
        goto cf_common_exit_004984F2;
      }
      if (this_00->field_00AD == 1) {
        if (this_00->field_01E6 == CASE_A) {
          /* ST_CALLSITE[00498204]: CALL 0x004053bc; direct=004053BC STGroupBoatC::GrpUnLoadRC */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_004053BC(this_00,1));
        }
        else {
          this_00->field_01E6 = CASE_A;
          /* ST_CALLSITE[004981FA]: CALL 0x004053bc; direct=004053BC STGroupBoatC::GrpUnLoadRC */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_004053BC(this_00,0));
        }
      }
      else if (this_00->field_0095 == 1) {
        if (this_00->field_01E6 == CASE_4) {
          /* ST_CALLSITE[00498238]: CALL 0x00404859; direct=00404859 STGroupBoatC::GrpRepare */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_00404859(this_00,1));
        }
        else {
          this_00->field_01E6 = CASE_4;
          /* ST_CALLSITE[0049822B]: CALL 0x00404859; direct=00404859 STGroupBoatC::GrpRepare */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_00404859(this_00,0));
        }
      }
      else if (this_00->field_0099 == 1) {
        if (this_00->field_01E6 == CASE_5) {
          /* ST_CALLSITE[0049826F]: CALL 0x00405da3; direct=00405DA3 STGroupBoatC::GrpGuard */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405DA3(this_00,1));
        }
        else {
          this_00->field_01E6 = CASE_5;
          /* ST_CALLSITE[00498262]: CALL 0x00405da3; direct=00405DA3 STGroupBoatC::GrpGuard */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405DA3(this_00,0));
        }
      }
      else if (this_00->field_00B1 == 1) {
        if (this_00->field_01E6 == CASE_B) {
          /* ST_CALLSITE[004982A6]: CALL 0x00402955; direct=00402955 STGroupBoatC::GrpLoadObj */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_00402955(this_00,1));
        }
        else {
          this_00->field_01E6 = CASE_B;
          /* ST_CALLSITE[00498299]: CALL 0x00402955; direct=00402955 STGroupBoatC::GrpLoadObj */
          puVar4 = STPointerBoundaryCast<uint *>(st::fn_00402955(this_00,0));
        }
      }
      else {
        if (this_00->field_00B5 != 1) {
          if (this_00->field_00B9 == 1) {
            if (this_00->field_01E6 == CASE_D) {
              /* ST_CALLSITE[00498314]: CALL 0x00402b85; direct=00402B85 STGroupBoatC::SetMine */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_00402B85(this_00,1));
            }
            else {
              this_00->field_01E6 = CASE_D;
              /* ST_CALLSITE[00498307]: CALL 0x00402b85; direct=00402B85 STGroupBoatC::SetMine */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_00402B85(this_00,0));
            }
          }
          else if (this_00->field_00BD == 1) {
            if (this_00->field_01E6 == CASE_E) {
              /* ST_CALLSITE[0049834B]: CALL 0x004036de; direct=004036DE STGroupBoatC::DCBomb */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004036DE(this_00,1));
            }
            else {
              this_00->field_01E6 = CASE_E;
              /* ST_CALLSITE[0049833E]: CALL 0x004036de; direct=004036DE STGroupBoatC::DCBomb */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004036DE(this_00,0));
            }
          }
          else if (this_00->field_00C1 == 1) {
            if (this_00->field_01E6 == CASE_F) {
              /* ST_CALLSITE[00498382]: CALL 0x004036c5; direct=004036C5 STGroupBoatC::Capture */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004036C5(this_00,1));
            }
            else {
              this_00->field_01E6 = CASE_F;
              /* ST_CALLSITE[00498375]: CALL 0x004036c5; direct=004036C5 STGroupBoatC::Capture */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004036C5(this_00,0));
            }
          }
          else if (this_00->field_00C9 == 1) {
            if (this_00->field_01E6 == CASE_11) {
              /* ST_CALLSITE[004983B9]: CALL 0x004051af; direct=004051AF STGroupBoatC::Recharge */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004051AF(this_00,1));
            }
            else {
              this_00->field_01E6 = CASE_11;
              /* ST_CALLSITE[004983AC]: CALL 0x004051af; direct=004051AF STGroupBoatC::Recharge */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004051AF(this_00,0));
            }
          }
          else if (this_00->field_00C5 == 1) {
            if (this_00->field_01E6 == CASE_10) {
              /* ST_CALLSITE[004983F0]: CALL 0x004027a2; direct=004027A2 STGroupBoatC::Teleport */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004027A2(this_00,1));
            }
            else {
              this_00->field_01E6 = CASE_10;
              /* ST_CALLSITE[004983E3]: CALL 0x004027a2; direct=004027A2 STGroupBoatC::Teleport */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004027A2(this_00,0));
            }
          }
          else if (this_00->field_00CD == 1) {
            if (this_00->field_01E6 == CASE_12) {
              /* ST_CALLSITE[00498427]: CALL 0x0040546b; direct=0040546B STGroupBoatC::Bring */
              puVar4 = st::fn_0040546B(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_12;
              /* ST_CALLSITE[0049841A]: CALL 0x0040546b; direct=0040546B STGroupBoatC::Bring */
              puVar4 = st::fn_0040546B(this_00,0);
            }
          }
          else if (this_00->field_00D1 == 1) {
            if (this_00->field_01E6 == CASE_13) {
              /* ST_CALLSITE[0049845E]: CALL 0x004018c0; direct=004018C0 STGroupBoatC::GrpDismant */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004018C0(this_00,1));
            }
            else {
              this_00->field_01E6 = CASE_13;
              /* ST_CALLSITE[00498451]: CALL 0x004018c0; direct=004018C0 STGroupBoatC::GrpDismant */
              puVar4 = STPointerBoundaryCast<uint *>(st::fn_004018C0(this_00,0));
            }
          }
          else {
            if (this_00->field_00D5 != 1) {
              if (this_00->field_00D9 != 1) goto LAB_004984d0;
              if (this_00->field_01E6 == CASE_15) {
                /* ST_CALLSITE[004984C6]: CALL 0x00405326; direct=00405326 STGroupBoatC::GrpRepSub */
                puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405326(this_00,1));
              }
              else {
                this_00->field_01E6 = CASE_15;
                /* ST_CALLSITE[004984B9]: CALL 0x00405326; direct=00405326 STGroupBoatC::GrpRepSub */
                puVar4 = STPointerBoundaryCast<uint *>(st::fn_00405326(this_00,0));
              }
              goto LAB_0049818d;
            }
            if (this_00->field_01E6 == CASE_14) {
              /* ST_CALLSITE[00498492]: CALL 0x00401a00; direct=00401A00 STGroupBoatC::Scout */
              puVar4 = st::fn_00401A00(this_00,1);
            }
            else {
              this_00->field_01E6 = CASE_14;
              /* ST_CALLSITE[00498488]: CALL 0x00401a00; direct=00401A00 STGroupBoatC::Scout */
              puVar4 = st::fn_00401A00(this_00,0);
            }
          }
          goto cf_common_exit_004984F2;
        }
        if (this_00->field_01E6 == CASE_C) {
          /* ST_CALLSITE[004982DD]: CALL 0x00403125; direct=00403125 STGroupBoatC::GrpUnLoadObj */
          puVar4 = st::fn_00403125(this_00,1);
        }
        else {
          this_00->field_01E6 = CASE_C;
          /* ST_CALLSITE[004982D0]: CALL 0x00403125; direct=00403125 STGroupBoatC::GrpUnLoadObj */
          puVar4 = st::fn_00403125(this_00,0);
        }
      }
    }
LAB_0049818d:
    if (st::machine_word_boundary_cast<uint>(puVar4) == st::machine_word_boundary_cast<uint>((uint *)0xffffffff)) {
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
  st::fn_0040593E(this_00,iVar10);
  st::fn_00403F58(this_00,0x5d95);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}

// 00498D20 STGroupBoatC::sub_00498D20
#line 4 "decomp/ST.exe/functions/00498D20/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00498D20_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106

   [ST_RECOVERY:group_boat_set_order_data_v1]
   Source: E:\__titans\wlad\to_grpb.cpp
   Copies discriminator-specific group-order payloads into STGroupBoatC state, deep-copying
   DArray-backed variants and marking the corresponding order data dirty. Name is descriptive;
   original spelling is not confirmed.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 2 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_2. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_4. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 5 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_5. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 6 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_6. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 7 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_7. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 8 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_8. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 10 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_A. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 12 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_C. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 13 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_D. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 14 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_E. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 15 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_F. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 16 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_10. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 17 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_11. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 18 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_12. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 19 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_13. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 20 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_14. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 101 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_SetOrderData_00498D20_Case_65. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 2 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_2. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_4. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 5 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_5. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 6 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_6. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 7 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_7. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 8 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_8. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 10 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_A. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 11 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_B. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 12 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_C. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 13 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_D. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 14 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_E. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 15 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_F. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 16 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_10. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 17 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_11. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 18 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_12. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 19 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_13. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 20 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_14. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 21 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_15. The
   carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 101 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_65. The
   carrier ABI remains pointer:/void.
   [STTypeBootstrapApplier] Retired legacy curated identity; name=STGroupBoatC::sub_00498D20.
   Evidence: unconfirmed descriptive leaf replaced by a structural address name
   [STTypeBootstrapApplier] Normalized signature, return, and explicit parameter provenance to
   ANALYSIS after heuristic identity retirement. Evidence: legacy signature/parameter source
   priority survived curated identity retirement

   [STSwitchEnumApplier] Switch target orderType uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_sub_00498D20_orderTypeEnum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00498D20 -> 006ACC70 @ 00498DD3 | 00498D20 -> 006ACC70 @ 00498EF0 | 00498D20 ->
   006ACC70 @ 00498F4A | 00498D20 -> 006ACC70 @ 00499021 | 00498D20 -> 006ACC70 @ 0049909E

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 102 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_66.
   carrier=data; The carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 103 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_67.
   carrier=data; The carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 104 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_68.
   carrier=data; The carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 105 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_69.
   carrier=data; The carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy.

   [STDiscriminatedPayloadApplier] Case-local payload view: orderType == 106 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupBoatC_sub_00498D20_00498D20_Case_6A.
   carrier=data; The carrier ABI remains pointer:/SubmarineTitans/Recovered/DArrayTy. */

void __thiscall
st::fn_00498D20
          (STGroupBoatC *this,STGroupBoatC_sub_00498D20_orderTypeEnum orderType,DArrayTy *data)

{
  DArrayTy *pDVar1;
  ushort uVar2;
  DArrayTy *local_EAX_149;
  DArrayTy *pDVar4;
  uint *puVar5;
  DArrayTy *local_EAX_438;
  DArrayTy *local_EAX_524;
  DArrayTy *local_EAX_739;
  DArrayTy *local_EAX_864;
  DArrayTy *local_EAX_1484;
  DArrayTy *local_EAX_1547;
  DArrayTy *local_EAX_1610;
  DArrayTy *pDVar3;
  DArrayTy *local_EAX_1739;
  int iVar6;
  DArrayTy **ppDVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  dword *pdVar11;
  uint local_10;
  ushort local_c;
  byte local_8 [4];
  switch(orderType) {
  case CASE_1:
    this->field_0065 = 1;
    this->field_0089 = 1;
    psVar8 = &this->field_00DD;
    goto LAB_00499129;
  case CASE_2:
    this->field_0065 = 1;
    this->field_008D = 1;
    pdVar11 = &this->field_00E7;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pdVar11 = data->flags;
      data = reinterpret_cast<DArrayTy *>(&data->iteratorIndex);
      pdVar11 = pdVar11 + 1;
    }
    if (this->field_00E7 == 0) {
      data = this->field_00EF;
      uVar9 = data->count;
      local_EAX_149 = st::fn_006AE290(nullptr,uVar9,4,1);
      uVar10 = 0;
      this->field_00EF = local_EAX_149;
      if (0 < (int)uVar9) {
        do {

          st::fn_006ACC70(data,uVar10,local_8);

          st::fn_006AE140(this->field_00EF,uVar10,local_8);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar9);
        return;
      }
    }
    break;
  case CASE_3:
    this->field_0065 = 1;
    this->field_0091 = 1;
    return;
  case CASE_4:
    this->field_0065 = 1;
    this->field_0095 = 1;
    this->field_015C = data->flags;
    this->field_0160 = (DArrayTy *)data->iteratorIndex;
    if (this->field_015C == 0) {
      data = this->field_0160;
      uVar9 = data->count;
      local_EAX_739 = st::fn_006AE290(nullptr,uVar9,2,1);
      uVar10 = 0;
      this->field_0160 = local_EAX_739;
      if (0 < (int)uVar9) {
        do {

          st::fn_006ACC70(data,uVar10,(byte *)((int)&orderType + 2));

          st::fn_006AE140(this->field_0160,uVar10,(byte *)((int)&orderType + 2));
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar9);
        return;
      }
    }
    break;
  case CASE_5:
    this->field_0065 = 1;
    this->field_0099 = 1;
    pdVar11 = &this->field_0164;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pdVar11 = data->flags;
      data = reinterpret_cast<DArrayTy *>(&data->iteratorIndex);
      pdVar11 = pdVar11 + 1;
    }
    if (this->field_0164 == 0) {
      data = this->field_0168;
      uVar9 = data->count;
      local_EAX_864 = st::fn_006AE290(nullptr,uVar9,2,1);
      uVar10 = 0;
      this->field_0168 = local_EAX_864;
      if (0 < (int)uVar9) {
        do {

          st::fn_006ACC70(data,uVar10,(byte *)((int)&orderType + 2));

          st::fn_006AE140(this->field_0168,uVar10,(byte *)((int)&orderType + 2));
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar9);
        return;
      }
    }
    break;
  case CASE_6:
    this->field_0065 = 1;
    this->field_009D = 1;
    ppDVar7 = &this->field_0103;
    *ppDVar7 = (DArrayTy *)data->flags;
    this->field_0107 = data->iteratorIndex;
    pDVar1 = *ppDVar7;
    data = (DArrayTy *)pDVar1->count;
    pDVar4 = st::fn_006AE290(nullptr,1,6,1);
    *ppDVar7 = pDVar4;
    uVar9 = 0;
    if (0 < (int)data) {
      do {
        if (uVar9 < pDVar1->count) {
          puVar5 = DArrayAt<undefined4>(pDVar1, uVar9);
        }
        else {
          puVar5 = nullptr;
        }
        local_10 = *puVar5;
        local_c = *(undefined2 *)(puVar5 + 1);

        st::fn_006AE140(*ppDVar7,uVar9,&local_10);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)data);
      return;
    }
    break;
  case CASE_7:
    this->field_0065 = 1;
    this->field_00A1 = 1;
    *(dword *)&this->field_0xff = data->flags;
    return;
  case CASE_8:
    this->field_0065 = 1;
    this->field_00A5 = 1;
    pdVar11 = &this->field_010B;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pdVar11 = data->flags;
      data = reinterpret_cast<DArrayTy *>(&data->iteratorIndex);
      pdVar11 = pdVar11 + 1;
    }
    if (this->field_010B == 0) {
      data = this->field_010F;
      uVar9 = data->count;
      local_EAX_438 = st::fn_006AE290(nullptr,uVar9,2,1);
      uVar10 = 0;
      this->field_010F = local_EAX_438;
      if (0 < (int)uVar9) {
        do {

          st::fn_006ACC70(data,uVar10,(byte *)((int)&orderType + 2));

          st::fn_006AE140(this->field_010F,uVar10,(byte *)((int)&orderType + 2));
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar9);
      }
    }
    if (this->field_0123 == 0) {
      data = this->field_0127;
      uVar9 = data->count;
      local_EAX_524 = st::fn_006AE290(nullptr,uVar9,2,1);
      uVar10 = 0;
      this->field_0127 = local_EAX_524;
      if (0 < (int)uVar9) {
        do {

          st::fn_006ACC70(data,uVar10,(byte *)((int)&orderType + 2));

          st::fn_006AE140(this->field_0127,uVar10,(byte *)((int)&orderType + 2));
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar9);
        return;
      }
    }
    break;
  case CASE_9:
    this->field_0065 = 1;
    this->field_00A9 = 1;
    pdVar11 = reinterpret_cast<dword *>(&this->field_0137);
    for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pdVar11 = data->flags;
      data = reinterpret_cast<DArrayTy *>(&data->iteratorIndex);
      pdVar11 = pdVar11 + 1;
    }
    *(short *)pdVar11 = (short)data->flags;
    STField<undefined1>(pdVar11,2) = *(undefined1 *)((int)&data->flags + 2);
    return;
  case CASE_A:
    this->field_0065 = 1;
    this->field_00AD = 1;
    uVar2 = *(undefined2 *)((int)&data->flags + 2);
    this->field_0156 = *(undefined2 *)&data->flags;
    this->field_0158 = uVar2;
    this->field_015A = (short)data->iteratorIndex;
    return;
  case CASE_B:
    this->field_0065 = 1;
    this->field_00B1 = 1;
    this->field_0178 = (RecoveredRecordView_005EFAE0_855D930D *)data->flags;
    return;
  case CASE_C:
    this->field_0065 = 1;
    this->field_00B5 = 1;
    uVar2 = *(undefined2 *)((int)&data->flags + 2);
    this->field_017C = *(undefined2 *)&data->flags;
    this->field_017E = uVar2;
    this->field_0180 = (short)data->iteratorIndex;
    return;
  case CASE_D:
    this->field_0065 = 1;
    this->field_00B9 = 1;
    psVar8 = reinterpret_cast<short *>(&this->field_0182);
LAB_00499129:
    *(dword *)psVar8 = data->flags;
    *(dword *)(psVar8 + 2) = data->iteratorIndex;
    psVar8[4] = (short)data->elementSize;
    return;
  case CASE_E:
    this->field_0065 = 1;
    this->field_00BD = 1;
    uVar2 = *(undefined2 *)((int)&data->flags + 2);
    this->field_018C = *(undefined2 *)&data->flags;
    this->field_018E = uVar2;
    this->field_0190 = (short)data->iteratorIndex;
    return;
  case CASE_F:
    this->field_0065 = 1;
    this->field_00C1 = 1;
    *(dword *)&this->field_0x192 = data->flags;
    this->field_0196 = (short)data->iteratorIndex;
    this->field_0198 = *(undefined1 *)((int)&data->iteratorIndex + 2);
    return;
  case CASE_10:
    this->field_0065 = 1;
    this->field_00C5 = 1;
    this->field_01A3 = data->flags;
    uVar2 = *(undefined2 *)((int)&data->iteratorIndex + 2);
    this->field_01A7 = *(undefined2 *)&data->iteratorIndex;
    this->field_01A9 = uVar2;
    uVar2 = *(undefined2 *)((int)&data->elementSize + 2);
    this->field_01AB = *(undefined2 *)&data->elementSize;
    this->field_01AD = uVar2;
    uVar2 = *(undefined2 *)((int)&data->count + 2);
    this->field_01AF = *(undefined2 *)&data->count;
    this->field_01B1 = uVar2;
    return;
  case CASE_11:
    this->field_0065 = 1;
    this->field_00C9 = 1;
    this->field_0199 = data->flags;
    uVar2 = *(undefined2 *)((int)&data->iteratorIndex + 2);
    this->field_019D = *(undefined2 *)&data->iteratorIndex;
    this->field_019F = uVar2;
    this->field_01A1 = (short)data->elementSize;
    return;
  case CASE_12:
    this->field_0065 = 1;
    this->field_00CD = 1;
    uVar2 = *(undefined2 *)((int)&data->flags + 2);
    this->field_01B3 = *(undefined2 *)&data->flags;
    this->field_01B5 = uVar2;
    this->field_01B7 = (short)data->iteratorIndex;
    return;
  case CASE_13:
    this->field_0065 = 1;
    this->field_00D1 = 1;
    uVar2 = *(undefined2 *)((int)&data->flags + 2);
    this->field_01B9 = *(undefined2 *)&data->flags;
    this->field_01BB = uVar2;
    this->field_01BD = (short)data->iteratorIndex;
    return;
  case CASE_14:
    this->field_0065 = 1;
    this->field_00D5 = 1;
    uVar2 = *(undefined2 *)((int)&data->flags + 2);
    this->field_01BF = *(undefined2 *)&data->flags;
    this->field_01C1 = uVar2;
    this->field_01C3 = (short)data->iteratorIndex;
    return;
  case CASE_15:
    this->field_0065 = 1;
    this->field_00D9 = 1;
    this->field_01C5 = (RecoveredRecordView_005EFAE0_855D930D *)data->flags;
    return;
  case CASE_65:
    this->field_0061 = 1;
    this->field_006D = 1;
    this->field_01C9 = (char)data->flags;
    return;
  case CASE_66:
    this->field_0061 = 1;
    this->field_0071 = 1;
    if (this->field_01CA == nullptr) {
      local_EAX_1484 = st::fn_006AE290(nullptr,1,2,1);
      this->field_01CA = local_EAX_1484;
    }

    st::fn_006AE1C0(this->field_01CA,data);
    return;
  case CASE_67:
    this->field_0061 = 1;
    this->field_0075 = 1;
    if (this->field_01CE == nullptr) {
      local_EAX_1547 = st::fn_006AE290(nullptr,1,4,1);
      this->field_01CE = local_EAX_1547;
    }

    st::fn_006AE1C0(this->field_01CE,data);
    return;
  case CASE_68:
    this->field_0061 = 1;
    this->field_0079 = 1;
    if (this->field_01D2 == nullptr) {
      local_EAX_1610 = st::fn_006AE290(nullptr,1,2,1);
      this->field_01D2 = local_EAX_1610;
    }

    st::fn_006AE1C0(this->field_01D2,data);
    return;
  case CASE_69:
    this->field_0061 = 1;
    this->field_007D = 1;
    if (this->field_01D6 == nullptr) {
      pDVar3 = st::fn_006AE290(nullptr,1,2,1);
      this->field_01D6 = pDVar3;
    }

    st::fn_006AE1C0(this->field_01D6,data);
    return;
  case CASE_6A:
    this->field_0061 = 1;
    this->field_0081 = 1;
    if (this->field_01DA == nullptr) {
      local_EAX_1739 = st::fn_006AE290(nullptr,1,2,1);
      this->field_01DA = local_EAX_1739;
    }

    st::fn_006AE1C0(this->field_01DA,data);
  }
  return;
}

// 00499750 STGroupBoatC::ReMakePVecAndTgtList
#line 4 "decomp/ST.exe/functions/00499750/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePVecAndTgtList

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004999C0 -> 00499750 @ 00499AA8 */

undefined4 __thiscall st::fn_00499750(STGroupBoatC *this,DArrayTy *param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  ushort *puVar4;
  int iVar6;
  uint uVar5;
  int iVar7;
  uint index;
  InternalExceptionFrame local_58;
  dword local_14;
  STGroupBoatC *local_10;
  byte local_c [2];
  short local_a;
  byte local_8 [2];
  short local_6;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pSVar2 = local_10;
  if (iVar3 == 0) {
    if (local_10->field_0212 == 0) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x4d7);
    }
    index = 0;
    local_14 = param_1->count;
    if (0 < (int)local_14) {
      do {
        st::fn_006ACC70(param_1,index,local_c);
        st::fn_006ACC70(pSVar2->field_020E,(int)local_a,local_8);
        if (local_6 != -1) {
          local_6 = -1;
          st::fn_006AE140(pSVar2->field_020E,(int)local_a,local_8);
          puVar4 = pSVar2->field_021E;
          pSVar2->field_0212 = pSVar2->field_0212 + -1;
          (puVar4 + local_a * 4)[0] = 0xffff;
          (puVar4 + local_a * 4)[1] = 0xffff;
        }
        index = index + 1;
      } while ((int)index < (int)local_14);
    }
    if (pSVar2->field_0212 == 0) {
      st::fn_006AE110(pSVar2->field_020E);
      pSVar2->field_020E = nullptr;
      st::fn_006AB060(&pSVar2->field_021E);
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x4e5);
    }
    iVar7 = -1;
    iVar3 = 0;
    if (0 < pSVar2->field_021A) {
      puVar4 = pSVar2->field_021E;
      do {
        if (*(int *)(puVar4 + iVar3 * 4) != -1) {
          if (iVar7 == -1) {
            (puVar4 + iVar3 * 4)[0] = 0;
            (puVar4 + iVar3 * 4)[1] = 0;
            puVar4 = pSVar2->field_021E;
            pSVar2->field_0216 = *(int *)(puVar4 + iVar3 * 4 + 2);
            iVar7 = 0;
          }
          else {
            *(int *)(puVar4 + iVar3 * 4) = pSVar2->field_0216;
            puVar4 = pSVar2->field_021E;
            pSVar2->field_0216 = pSVar2->field_0216 + *(int *)(puVar4 + iVar3 * 4 + 2);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < pSVar2->field_021A);
    }
    g_currentExceptionFrame = local_58.previous;
  }
  else {
    g_currentExceptionFrame = local_58.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x4f3,0,iVar3,st::mutable_c_string("%s")
                                 ,"STGroupBoatC::ReMakePVecAndTgtList");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x4f4);
      return 0xffffffff;
    }
  }
  return pSVar2->field_0212;
}

// 004999C0 STGroupBoatC::ReMakePVecAndTgtListExt
#line 4 "decomp/ST.exe/functions/004999C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePVecAndTgtListExt */

undefined4 __thiscall
st::fn_004999C0(STGroupBoatC *this,char param_1,short param_2)

{
  dword dVar1;
  STGroupBoatC *this_00;
  int errorCode;
  DArrayTy *array;
  int iVar3;
  uint uVar4;
  uint index;
  InternalExceptionFrame local_54;
  STGroupBoatC *local_10;
  ushort local_c;
  ushort local_a;
  char local_8 [2];
  short local_6;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;

  errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (errorCode == 0) {
    if (local_10->field_0212 == 0) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x509);
    }
    if (this_00->field_020E == nullptr) {
      st::fn_006A5E40
                (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x50b);
    }
    index = 0;
    dVar1 = this_00->field_020E->count;
    if (0 < (int)dVar1) {
      do {

        st::fn_006ACC70(this_00->field_020E,index,local_8);
        if (((local_6 != -1) && (local_8[0] == param_1)) && (local_6 == param_2)) {
          array = st::fn_006AE290(nullptr,1,4,1);
          local_c = 0xffff;
          local_a = (undefined2)index;

          st::fn_006AE1C0(array,&local_c);
          /* ST_CALLSITE[00499AA8]: CALL 0x00404985; direct=00404985 STGroupBoatC::ReMakePVecAndTgtList */
          st::fn_00404985(this_00,array);
          st::fn_006AE110(array);
          break;
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
    }
    g_currentExceptionFrame = local_54.previous;
  }
  else {
    g_currentExceptionFrame = local_54.previous;
    if (errorCode != -0x5001fff7) {

      iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x51c,0,errorCode,
                                 st::mutable_c_string("%s"),"STGroupBoatC::ReMakePVecAndTgtListExt");
      if (iVar3 == 0) {
        st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x51d);
        return 0xffffffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return this_00->field_0212;
}

// 00499B80 STGroupBoatC::MakePVec
#line 4 "decomp/ST.exe/functions/00499B80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::MakePVec */

undefined4 __thiscall st::fn_00499B80(STGroupBoatC *this)

{
  uint uVar2;
  STGroupBoatC *pSVar3;
  int iVar4;
  ushort *puVar4;
  STGameObjC *pSVar5;
  int iVar7;
  uint uVar6;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_58;
  char local_14;
  char cStack_13;
  ushort uStack_12;
  uint local_c;
  STGroupBoatC *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;

  iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_020E == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x52e);
    }
    if (pSVar3->field_021E != nullptr) {
      st::fn_006AB060(&pSVar3->field_021E);
    }
    uVar9 = pSVar3->field_020E->count;
    pSVar3->field_021A = uVar9;
    local_c = uVar9;
    /* ST_CALLSITE[00499C0C]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
    puVar4 = static_cast<ushort *>(st::fn_006AAC70(uVar9 * 8));
    uVar2 = local_c;
    pSVar3->field_021E = puVar4;
    for (iVar8 = (uVar9 & 0x1fffffff) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    }
    uVar9 = 0;
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (ushort *)((int)puVar4 + 1);
    }
    pSVar3->field_0216 = 0;
    if (0 < (int)local_c) {
      do {

        st::fn_006ACC70(pSVar3->field_020E,uVar9,&local_14);
        /* ST_CALLSITE[00499C60]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar5 = st::fn_004028BA(g_allPlayers_007FA174,local_14,uStack_12,(int)cStack_13);
        if (pSVar5 == nullptr) {
          uStack_12 = 0xffff;

          st::fn_006AE140(pSVar3->field_020E,uVar9,&local_14);
          puVar4 = pSVar3->field_021E;
          (puVar4 + uVar9 * 4)[0] = 0xffff;
          (puVar4 + uVar9 * 4)[1] = 0xffff;
          if ((int)uVar9 < st::storage_bit_cast<int>(static_cast<uint32_t>(uVar2 - 1))) {
            *(int *)(pSVar3->field_021E + uVar9 * 4 + 4) = pSVar3->field_0216;
          }
        }
        else {
          iVar8 = pSVar5->field_0219 + pSVar5->field_0215;
          pSVar3->field_0216 = pSVar3->field_0216 + iVar8;
          *(int *)(pSVar3->field_021E + uVar9 * 4 + 2) = iVar8;
          if ((int)uVar9 < st::storage_bit_cast<int>(static_cast<uint32_t>(uVar2 - 1))) {
            *(int *)(pSVar3->field_021E + uVar9 * 4 + 4) = pSVar3->field_0216;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar2);
    }
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  if (iVar4 == -0x5001fff7) {
    return 0;
  }

  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x543,0,iVar4,st::mutable_c_string("%s"),
                             "STGroupBoatC::MakePVec");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x544);
  return 0xffffffff;
}

// 00499DE0 STGroupBoatC::DistributeTargets
#line 4 "decomp/ST.exe/functions/00499DE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeTargets */

undefined4 __thiscall st::fn_00499DE0(STGroupBoatC *this,uint *param_1)

{
  uint32_t _local_1c;

  ushort *puVar1;
  STGroupBoatC *this_00;
  int iVar3;
  STBoatC *pSVar3;
  dword dVar4;
  int iVar6;
  STGameObjC *this_01;
  uint uVar7;
  DArrayTy *pDVar8;
  int iVar5;
  ushort *puVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  DArrayTy *pDVar15;
  uint *puVar16;
  InternalExceptionFrame local_a4;
  STGroupBoatC *local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  byte local_40;
  int local_3f;
  short local_3b;
  short local_39;
  DArrayTy *local_34;
  DArrayTy *local_30;
  short local_2a;
  short local_28;
  short local_26;
  uint local_24;
  uint local_20;
  byte local_1c [2];
  short sStack_1a;
  short local_16;
  dword local_14;
  DArrayTy *local_10;
  uint local_c;
  byte local_5;
  uVar11 = 0;
  local_10 = nullptr;
  local_34 = nullptr;
  local_30 = nullptr;
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_60 = this;

  iVar3 = st::fn_0072D7F0(local_a4.jumpBuffer,0);
  this_00 = local_60;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    if (iVar3 == -0x5001fff7) {
      if (local_10 != nullptr) {
        st::fn_006AE110(local_10);
      }
      return 0;
    }

    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x5eb,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::DistributeTargets");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x5ec);
    return 0xffffffff;
  }
  if (local_60->field_020E == nullptr) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x55a
              );
  }

  st::fn_006AFE40(reinterpret_cast<int *>(&local_10),param_1);
  local_20 = g_playSystem_00802A38->field_00E4;
  local_14 = local_10->count;
  if (0 < (int)local_14) {
    do {
      dVar4 = local_14;

      st::fn_006ACC70(local_10,uVar11,&local_c);
      if ((ushort)local_c == 0xffff) {

        st::fn_006B0C70(local_10,uVar11);
        uVar11 = uVar11 - 1;
        local_14 = dVar4 - 1;
      }
      else {
        pSVar3 = (STBoatC *)
                 /* ST_CALLSITE[00499EA3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 st::fn_004028BA
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_c,CASE_1);
        if (pSVar3 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x564);
        }
        /* ST_CALLSITE[00499ECC]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
        dVar4 = pSVar3->sub_0045EEE0();
        switch(dVar4) {
        case 7:
        case 8:
        case 0xc:
        case 0x13:
        case 0x14:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x24:
        case 0x25:

          st::fn_006B0C70(local_10,uVar11);
          uVar11 = uVar11 - 1;
          local_14 = local_14 - 1;
          /* ST_CALLSITE[00499F00]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar3,CASE_3,&local_20);
          break;
        default:
          if ((this_00->field_020A == 1) &&
             /* ST_CALLSITE[00499F14]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (dVar4 = pSVar3->sub_0045EEE0(), dVar4 != 0x17)) {

            st::fn_006B0C70(local_10,uVar11);
            uVar11 = uVar11 - 1;
            local_14 = local_14 - 1;

            iVar6 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar3));
            if (iVar6 == 0) {
              /* ST_CALLSITE[00499F41]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(pSVar3,CASE_3,&local_20);
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_14);
  }
  dVar4 = local_14;
  uVar11 = 0;
  if (local_14 != 0) {
    pDVar8 = this_00->field_020E;
    this_00->field_0212 = 0;
    uVar12 = 0;
    if (pDVar8->count != 0) {
      do {

        st::fn_006ACC70(pDVar8,uVar11,local_1c);
        if (sStack_1a != -1) {
          this_00->field_0212 = this_00->field_0212 + 1;
        }
        pDVar8 = this_00->field_020E;
        uVar12 = uVar12 + 1;
        uVar11 = uVar12 & 0xffff;
      } while (uVar11 < pDVar8->count);
    }
    if (this_00->field_0212 == 0) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x58f);
    }
    uVar11 = 0;
    local_24 = 0;
    if (0 < (int)dVar4) {
      do {

        st::fn_006ACC70(local_10,uVar11,&local_c);
        if ((ushort)local_c != 0xffff) {
          pSVar3 = (STBoatC *)
                   /* ST_CALLSITE[0049A005]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_c,CASE_1);
          /* ST_CALLSITE[0049A010]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar4 = pSVar3->sub_0045EEE0();
          if (dVar4 == 9) {
            /* ST_CALLSITE[0049A032]: CALL 0x004019ba; direct=004019BA STGroupBoatC::GetDepotForAttack */
            st::fn_004019BA(this_00,local_c,&local_5,&local_16,&local_2a,&local_28,&local_26);
            if (local_16 == -1) {
              puVar16 = &local_20;
              SVar14 = CASE_3;
              local_20 = g_playSystem_00802A38->field_00E4;
            }
            else {
              local_44 = this_00->field_020A;
              local_3b = local_16;
              puVar16 = &local_48;
              local_40 = local_5;
              local_3f = 1;
              SVar14 = CASE_2;
              local_48 = g_playSystem_00802A38->field_00E4;
            }
          }
          else {
            local_5c = this_00->field_0216 + 1;
            local_50 = 0;
            local_4c = 2;
            do {
              uVar11 = this_00->field_0031 * 0x41c64e6d + 0x3039;
              this_00->field_0031 = uVar11;
              local_54 = (uVar11 >> 0x10) % local_5c;
              iVar6 = 0;
              if (0 < this_00->field_021A) {
                puVar1 = this_00->field_021E;
                puVar9 = puVar1;
                uVar11 = local_54;
                do {
                  if ((*(int *)puVar9 != -1) &&
                     (uVar10 = (short)uVar11 - puVar9[2], uVar11 = (uint)uVar10, (short)uVar10 < 1))
                  {
                    if (local_50 < *(int *)(puVar1 + iVar6 * 4 + 2)) {
                      local_50 = *(int *)(puVar1 + (short)iVar6 * 4 + 2);
                      local_58 = iVar6;
                    }
                    break;
                  }
                  iVar6 = iVar6 + 1;
                  puVar9 = puVar9 + 4;
                } while (iVar6 < this_00->field_021A);
              }
              local_4c = local_4c + -1;
            } while (local_4c != 0);
            sVar13 = (short)local_58;

            st::fn_006ACC70(this_00->field_020E,(int)sVar13,&_local_1c);
            local_48 = g_playSystem_00802A38->field_00E4;
            local_40 = (undefined1)_local_1c;
            local_44 = this_00->field_020A;
            local_3b = sStack_1a;
            local_3f = (int)(char)((uint)_local_1c >> 8);
            local_39 = sVar13;
            /* ST_CALLSITE[0049A15D]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar3 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_c,CASE_1));
            puVar16 = &local_48;
            SVar14 = CASE_2;
          }
          /* ST_CALLSITE[0049A16A]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar3,SVar14,puVar16);
        }
        local_24 = local_24 + 1;
        uVar11 = local_24 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    if (this_00->field_020A == 1) {
      local_14 = this_00->field_0029->count;
      uVar11 = 0;
      local_24 = 0;
      pDVar8 = local_34;
      if (0 < (int)local_14) {
        do {

          st::fn_006ACC70(this_00->field_0029,uVar11,&local_c);
          if ((ushort)local_c != 0xffff) {
            /* ST_CALLSITE[0049A1D3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            this_01 = st::fn_004028BA
                                (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_c,CASE_1);
            if (this_01 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x5c4);
            }
            /* ST_CALLSITE[0049A1FD]: CALL dword ptr [EAX + 0x2c] */
            uVar7 = this_01->vfunc_2C();
            switch(uVar7) {
            case 7:
            case 8:
            case 0xc:
            case 0x13:
            case 0x14:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x24:
            case 0x25:
              break;
            default:
              /* ST_CALLSITE[0049A21B]: CALL dword ptr [EDX + 0x2c] */
              iVar6 = this_01->vfunc_2C();
              if (iVar6 == 0x17) {
                pDVar15 = pDVar8;
                if (pDVar8 == nullptr) {
                  pDVar8 = st::fn_006AE290(nullptr,1,2,1);
                  pDVar15 = pDVar8;
                  local_34 = pDVar8;
                }
              }
              else {

                iVar6 = st::fn_00404E58(this_01);
                if (iVar6 == 0) break;
                pDVar15 = local_30;
                if (local_30 == nullptr) {
                  local_30 = st::fn_006AE290(nullptr,1,2,1);
                  pDVar15 = local_30;
                }
              }

              st::fn_006AE1C0(pDVar15,&local_c);
            }
          }
          local_24 = local_24 + 1;
          uVar11 = local_24 & 0xffff;
        } while ((int)uVar11 < (int)local_14);
      }
      pDVar15 = local_30;
      /* ST_CALLSITE[0049A295]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      st::fn_00403D9B
                (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_14)), (uint8_t)(this_00->field_0024)),
                 &pDVar8->flags,&local_30->flags);
      if (pDVar8 != nullptr) {
        st::fn_006AE110(pDVar8);
      }
      if (pDVar15 != nullptr) {
        st::fn_006AE110(pDVar15);
      }
    }
  }
  if (local_10 != nullptr) {
    st::fn_006AE110(local_10);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

// 0049A620 STGroupBoatC::GrpMove
#line 4 "decomp/ST.exe/functions/0049A620/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpMove */

undefined4 __thiscall st::fn_0049A620(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *this_00;
  int iVar2;
  DArrayTy *array;
  STBoatC *this_01;
  STGameObjC *this_02;
  int iVar3;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  InternalExceptionFrame local_64;
  uint local_20;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  STGroupBoatC *local_14;
  dword local_10;
  byte local_c [4];
  uint local_8;
  local_10 = this->field_0029->count;
  uVar6 = 0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_14 = this;

  iVar2 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_64.previous;

    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x642,0,iVar2,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpMove");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x643);
    return 0xffffffff;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_14->field_003D = (int)local_14->field_00DD;
    uVar2 = local_14->field_00E5;
    local_14->field_0045 = (int)*(short *)&local_14->field_0xe1;
    local_14->field_0065 = 0;
    local_14->field_0041 = (int)local_14->field_00DF;
    *(undefined2 *)&local_14->field_0x30e = *(undefined2 *)&local_14->field_0xe3;
    *(undefined2 *)&local_14->field_0x310 = uVar2;
    /* ST_CALLSITE[0049A6B0]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STGroupBoatC; source view only; no Ghidra override */
    array = reinterpret_cast<DArrayTy *>(st::fn_00402DB5(reinterpret_cast<STGroupC *>(local_14)));
    /* ST_CALLSITE[0049A6CD]: CALL 0x00405d7b; direct=00405D7B STGroupBoatC::InitWay */
    st::fn_00405D7B(this_00,array,this_00->field_003D,this_00->field_0041,this_00->field_0045);
    st::fn_006AE110(array);
    local_20 = g_playSystem_00802A38->field_00E4;
    local_1c = 0xffff;
    local_1a = 0xffff;
    local_18 = 0xffff;
    if (local_10 != 0) {
      uVar5 = 0;
      do {

        st::fn_006ACC70(this_00->field_0029,uVar5,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          /* ST_CALLSITE[0049A721]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          this_01 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                              (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_c),CASE_1));
          if (this_01 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x629);
          }
          /* ST_CALLSITE[0049A74F]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(this_01,CASE_1,&local_20);
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar6 & 0xffff;
      } while (uVar5 < local_10);
    }
    local_8 = 2;
  }
  if (param_1 == 2) {
    if (g_playSystem_00802A38->field_00E4 % 3 == 0) {
      uVar5 = 0;
      local_8 = 0;
      uVar6 = 0;
      if (local_10 != 0) {
        do {

          st::fn_006ACC70(this_00->field_0029,uVar6,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049A7C6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_0045FF30_A86BE482; source view only; no Ghidra override */
            this_02 = st::fn_004028BA
                                (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (this_02 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x638);
            }

            iVar4 = st::fn_0040397C(reinterpret_cast<RecoveredRecord_0045FF30_A86BE482 *>(this_02));
            if (iVar4 != 0) goto cf_common_exit_0049A832;
            /* ST_CALLSITE[0049A7F9]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar4 = st::fn_00402EDC(this_02);
            if (iVar4 == 1) goto cf_common_exit_0049A832;
            /* ST_CALLSITE[0049A805]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar4 = st::fn_00402EDC(this_02);
            if (iVar4 == 0) goto cf_common_exit_0049A832;
          }
          uVar5 = uVar5 + 1;
          uVar6 = uVar5 & 0xffff;
          if (local_10 <= uVar6) {
            g_currentExceptionFrame = local_64.previous;
            return local_8;
          }
        } while( true );
      }
    }
    else {
cf_common_exit_0049A832:
      local_8 = 2;
    }
  }
  g_currentExceptionFrame = local_64.previous;
  return local_8;
}

// 0049A940 STGroupBoatC::GrpMove
#line 4 "decomp/ST.exe/functions/0049A940/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpMove */

undefined4 __thiscall st::fn_0049A940(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *this_00;
  int iVar4;
  uint uVar3;
  uint index;
  uint uVar7;
  InternalExceptionFrame local_58;
  STGroupBoatC *local_14;
  dword local_10;
  byte local_c [4];
  uint local_8;

  local_10 = this->field_0029->count;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      uVar7 = 0;
      local_14->field_0065 = 0;
      local_8 = g_playSystem_00802A38->field_00E4;
      if (local_10 != 0) {
        index = 0;
        do {

          st::fn_006ACC70(pSVar2->field_0029,index,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049A9DF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            this_00 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                                (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1));
            if (this_00 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x65e);
            }
            /* ST_CALLSITE[0049AA0C]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(this_00,CASE_3,&local_8);
          }
          uVar7 = uVar7 + 1;
          index = uVar7 & 0xffff;
        } while (index < local_10);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return 2;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x665,0,iVar3,st::mutable_c_string("%s"),
                             "STGroupBoatC::GrpMove");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x666);
  return 0xffffffff;
}

// 0049AAF0 STGroupBoatC::GrpAttack
#line 4 "decomp/ST.exe/functions/0049AAF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpAttack

   [STSwitchEnumApplier] Switch target field_0020 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_0020State. Cases:
   CASE_0=0;CASE_14=20;CASE_1AE=430
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004980DF -> read as EAX on
   every CFG path | 00497E00 @ 004980EC -> read as EAX on every CFG path | 00497E00 @ 0049854B ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049AAF0(STGroupBoatC *this,int param_1)

{
  uint32_t _local_1c;
  uint32_t _local_20;

  byte bVar1;
  byte bVar2;
  short sVar4;
  int iVar6;
  short sVar5;
  DArrayTy *pDVar6;
  STGameObjC *pSVar7;
  int iVar8;
  dword dVar9;
  int iVar9;
  int iVar10;
  STWorldObject *pSVar11;
  STGroupBoatC *pSVar12;
  uint uVar14;
  STGroupBoatC *pSVar15;
  bool bVar16;
  InternalExceptionFrame local_70;
  byte local_2c;
  char cStack_2b;
  ushort uStack_2a;
  int local_24;
  byte local_20;
  undefined3 uStack_1f;
  byte local_1c;
  undefined3 uStack_1b;
  dword local_18;
  int local_14;
  int local_10;
  int local_c;
  STGroupBoatC *local_8;

  local_24 = 2;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = this;

  iVar6 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  pSVar12 = local_8;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar6 == -0x5001fff7) {
      return 0;
    }

    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x701,0,iVar6,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpAttack");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x702);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == 1) {
    st::fn_006AE110(local_8->field_020E);
    pSVar12->field_020E = nullptr;
    pSVar12->field_0212 = 0;
    st::fn_006AB060(&pSVar12->field_021E);
    param_1 = 0;
  }
  pSVar15 = local_8;
  if (param_1 == 0) {
    memset(&pSVar12->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar10 = 0;
    pSVar12->field_0065 = 0;
    if (pSVar12->field_00E7 == 0) {
      local_18 = local_8->field_00EF->count;
      if (local_18 == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x68f);
      }
      if (pSVar15->field_020E != nullptr) {
        st::fn_006AE110(pSVar15->field_020E);
        pSVar15->field_020E = nullptr;
        pSVar15->field_0212 = 0;
      }
      pDVar6 = st::fn_006AE290(nullptr,0,4,1);
      sVar5 = 0;
      local_8->field_020E = pDVar6;
      pSVar12 = local_8;
      if (0 < (int)local_18) {
        uVar14 = 0;
        do {

          st::fn_006ACC70(pSVar12->field_00EF,uVar14,&local_2c);
          if ((local_2c < 8) &&
             ((((g_playSystem_00802A38 == nullptr ||
                (g_bulkInitializedRecords_008087C7[(char)local_2c].field_0022 < 8)) &&
               /* ST_CALLSITE[0049AC3E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
               (pSVar7 = st::fn_004028BA
                                   (g_allPlayers_007FA174,local_2c,uStack_2a,(int)cStack_2b),
               pSVar12 = local_8, pSVar7 != nullptr)) &&
              /* ST_CALLSITE[0049AC4D]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
              ((iVar10 = pSVar7->vfunc_F8(), pSVar12 = local_8, iVar10 == 1 &&
               /* ST_CALLSITE[0049AC64]: CALL dword ptr [EAX + 0xf4]; [STIndirectCallsiteApplier] exact slot 0xF4; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
               (iVar10 = pSVar7->vfunc_F4((int)local_8->field_0024),
               pSVar12 = local_8, iVar10 == 1)))))) {

            st::fn_006AE140(local_8->field_020E,uVar14,&local_2c);
            pSVar12 = local_8;
          }
          sVar5 = sVar5 + 1;
          uVar14 = (uint)sVar5;
        } while ((int)uVar14 < (int)local_18);
      }
      st::fn_006AE110(pSVar12->field_00EF);
      pSVar12->field_00EF = nullptr;
      if (pSVar12->field_020E->count == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x69d);
      }
    }
    pSVar12 = local_8;
    if (local_8->field_00E7 == 1) {
      if (local_8->field_020E != nullptr) {
        st::fn_006AE110(local_8->field_020E);
        pSVar12->field_020E = nullptr;
        pSVar12->field_0212 = 0;
      }
      pDVar6 = st::fn_006AE290(nullptr,1,4,1);
      pSVar12->field_020E = pDVar6;
      local_c = STReplaceLowWord((uint32_t)(pDVar6), (uint16_t)(pSVar12->field_00F3));
      iVar10 = (int)pSVar12->field_00F3;
      local_18 = 0;
      if (iVar10 < pSVar12->field_00F9 + iVar10) {
        do {
          sVar5 = pSVar12->field_00F5;
          local_14 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(iVar10)), (uint16_t)(sVar5));
          iVar10 = local_c;
          if ((int)sVar5 < (int)pSVar12->field_00FB + (int)sVar5) {
            do {
              local_10 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(iVar10)), (uint16_t)(pSVar12->field_00F7));
              iVar10 = (int)pSVar12->field_00F7;
              if (iVar10 < pSVar12->field_00FD + iVar10) {
                do {
                  sVar5 = (short)local_c;
                  if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
                     ((sVar4 = (short)local_14, sVar4 < 0 ||
                      (((g_worldGrid.sizeY <= sVar4 || ((short)local_10 < 0)) ||
                       (g_worldGrid.sizeZ <= (short)local_10)))))) {
                    pSVar11 = nullptr;
                  }
                  else {
                    pSVar11 = STGridAt3D(g_worldGrid, sVar5, sVar4, iVar10).objects[0];
                  }
                  if ((pSVar11 == nullptr) ||
                     (((iVar8 = pSVar11->value_20, iVar8 != 0x14 && (iVar8 != 1000)) &&
                      (iVar8 != 0x3e9)))) {
LAB_0049af27:
                    pSVar12 = local_8;
                    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
                        (sVar5 = (short)local_14, sVar5 < 0)) ||
                       (((g_worldGrid.sizeY <= sVar5 || ((short)local_10 < 0)) ||
                        (g_worldGrid.sizeZ <= (short)local_10)))) {
                      pSVar11 = nullptr;
                    }
                    else {
                      pSVar11 = STGridAt3D(g_worldGrid, local_c, sVar5, iVar10).objects[1];
                    }
                    if (((pSVar11 != nullptr) && (pSVar11->value_20 == 0x1ae)) &&
                       ((local_2c = *(byte *)&pSVar11[1].vtable, local_2c < 8 &&
                        ((g_playSystem_00802A38 == nullptr ||
                         (g_bulkInitializedRecords_008087C7[(char)local_2c].field_0022 < 8)))))) {
                      bVar1 = local_8->field_0024;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      _local_20 = CONCAT31(uStack_1f,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (local_2c == bVar1) {
LAB_0049b073:
                          iVar10 = 0;
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          uVar14 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          bVar2 = g_playerRelationMatrix[uVar14][bVar1];
                          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar10 = -2;
                          }
                          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar10 = -1;
                          }
                          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 1)) {
                            iVar10 = 1;
                          }
                          else {
                            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar14] != 1))
                            goto LAB_0049b073;
                            iVar10 = 2;
                          }
                        }
                        bVar16 = iVar10 < 0;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        bVar16 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                                 g_bulkInitializedRecords_008087C7
                                 [CONCAT11(cStack_2b,local_2c) & 0xff].field_0023;
                      }
                      if (bVar16) {
                        uStack_2a = *(ushort *)&pSVar11[1].field_0xe;
                        cStack_2b = '\x03';
                        /* ST_CALLSITE[0049B092]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                        iVar10 = pSVar11->vfunc_F8();
                        if ((iVar10 == 1) &&
                           /* ST_CALLSITE[0049B0A6]: CALL dword ptr [EDX + 0xf4]; [STIndirectCallsiteApplier] exact slot 0xF4; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4 */
                           (dVar9 = pSVar11->vfunc_F4((int)pSVar12->field_0024), dVar9 == 1)) {
                          local_18 = dVar9;

                          st::fn_006AE1C0(pSVar12->field_020E,&local_2c);
                        }
                      }
                    }
                  }
                  else {
                    local_2c = *(byte *)&pSVar11[1].vtable;
                    if ((local_2c < 8) &&
                       ((g_playSystem_00802A38 == nullptr ||
                        (g_bulkInitializedRecords_008087C7[(char)local_2c].field_0022 < 8)))) {
                      bVar1 = local_8->field_0024;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      _local_1c = CONCAT31(uStack_1b,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (local_2c == bVar1) {
LAB_0049aec9:
                          iVar8 = 0;
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          uVar14 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          bVar2 = g_playerRelationMatrix[uVar14][bVar1];
                          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar8 = -2;
                          }
                          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar8 = -1;
                          }
                          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 1)) {
                            iVar8 = 1;
                          }
                          else {
                            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar14] != 1))
                            goto LAB_0049aec9;
                            iVar8 = 2;
                          }
                        }
                        bVar16 = iVar8 < 0;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        bVar16 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                                 g_bulkInitializedRecords_008087C7
                                 [CONCAT11(cStack_2b,local_2c) & 0xff].field_0023;
                      }
                      if (bVar16) {
                        uStack_2a = *(ushort *)&pSVar11[1].field_0xe;
                        cStack_2b = '\x01';
                        /* ST_CALLSITE[0049AEEC]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                        iVar8 = pSVar11->vfunc_F8();
                        pSVar12 = local_8;
                        if ((iVar8 == 1) &&
                           /* ST_CALLSITE[0049AF03]: CALL dword ptr [EDX + 0xf4]; [STIndirectCallsiteApplier] exact slot 0xF4; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4 */
                           (dVar9 = pSVar11->vfunc_F4((int)local_8->field_0024), dVar9 == 1)) {
                          local_18 = dVar9;

                          st::fn_006AE1C0(pSVar12->field_020E,&local_2c);
                        }
                        sVar5 = (short)local_c;
                        goto LAB_0049af27;
                      }
                    }
                  }
                  local_10 = local_10 + 1;
                  iVar10 = (short)local_10;
                  pSVar12 = local_8;
                } while (iVar10 < (int)local_8->field_00F7 + (int)local_8->field_00FD);
              }
              local_14 = local_14 + 1;
              iVar10 = (short)local_14;
            } while (iVar10 < (int)pSVar12->field_00FB + (int)pSVar12->field_00F5);
          }
          local_c = local_c + 1;
          iVar10 = (short)local_c;
        } while (iVar10 < (int)pSVar12->field_00F3 + (int)pSVar12->field_00F9);
      }
      if (local_18 == 0) {
        st::fn_006AE110(pSVar12->field_020E);
        pSVar12->field_020E = nullptr;
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x6ce);
      }
    }
    pSVar12->field_020A = pSVar12->field_00EB;
    pSVar15 = local_8;
    if (pSVar12->field_00EB == 1) {
      sVar5 = 0;
      dVar9 = local_8->field_020E->count;
      if (0 < (int)dVar9) {
        do {

          st::fn_006ACC70(local_8->field_020E,(int)sVar5,&local_2c);
          if ((cStack_2b != '\x01') ||
             /* ST_CALLSITE[0049B1B9]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
             (pSVar7 = st::fn_004028BA(g_allPlayers_007FA174,local_2c,uStack_2a,CASE_1),
             pSVar7->field_0020 != 0x14)) {

            st::fn_006B0C70(local_8->field_020E,(int)sVar5);
            dVar9 = dVar9 - 1;
            sVar5 = sVar5 + -1;
          }
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < (int)dVar9);
      }
      pSVar15 = local_8;
      if (local_8->field_020E->count == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x6e3);
      }
    }
    /* ST_CALLSITE[0049B20B]: CALL 0x00402603; direct=00402603 STGroupBoatC::MakePVec */
    st::fn_00402603(pSVar15);
    /* ST_CALLSITE[0049B216]: CALL 0x00405146; direct=00405146 STGroupBoatC::DistributeTargets */
    st::fn_00405146(pSVar15,&pSVar15->field_0029->flags);
    pSVar12 = local_8;
  }
  if ((param_1 == 2) && (pSVar12->field_0212 == 0)) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  g_currentExceptionFrame = local_70.previous;
  return local_24;
}

// 0049B4C0 STGroupBoatC::GrpGoToDeep
#line 4 "decomp/ST.exe/functions/0049B4C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpGoToDeep
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498116 -> read as EAX on
   every CFG path | 00497E00 @ 00498123 -> read as EAX on every CFG path | 00497E00 @ 00498556 ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049B4C0(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *this_00;
  STGameObjC *this_01;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  InternalExceptionFrame local_6c;
  uint local_28;
  ushort local_24;
  ushort local_22;
  ushort local_20;
  STGroupBoatC *local_1c;
  dword local_18;
  byte local_14 [4];
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  local_18 = this->field_0029->count;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_1c = this;

  iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  pSVar2 = local_1c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x73c,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpGoToDeep");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x73d);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_1c->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    uVar8 = 0;
    *(undefined4 *)&local_1c->field_0x222 = *(undefined4 *)&local_1c->field_0xff;
    local_1c->field_0065 = 0;
    if (local_18 != 0) {
      uVar6 = 0;
      do {

        st::fn_006ACC70(pSVar2->field_0029,uVar6,local_14);
        if (STPiece<0,2>(local_14) != 0xffff) {
          this_00 = (STBoatC *)
                    /* ST_CALLSITE[0049B564]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                    st::fn_004028BA
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_14),CASE_1);
          if (this_00 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x720);
          }
          /* ST_CALLSITE[0049B597]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          st::fn_004018C5(reinterpret_cast<STFishC *>(this_00),&local_8,&local_6,&local_a);
          /* ST_CALLSITE[0049B5AF]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
          st::fn_00404F6B(this_00,(int)local_8,(int)local_6,*(int *)&pSVar2->field_0x222);
          local_28 = g_playSystem_00802A38->field_00E4;
          local_24 = 0xffff;
          local_22 = 0xffff;
          local_20 = 0xffff;
          /* ST_CALLSITE[0049B5DA]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(this_00,CASE_1,&local_28);
        }
        uVar8 = uVar8 + 1;
        uVar6 = uVar8 & 0xffff;
      } while (uVar6 < local_18);
    }
    local_10 = 2;
  }
  iVar5 = local_10;
  if (param_1 == 2) {
    if (g_playSystem_00802A38->field_00E4 % 3 == 0) {
      uVar6 = 0;
      uVar8 = 0;
      local_10 = 0;
      iVar5 = 0;
      if (local_18 != 0) {
        do {

          st::fn_006ACC70(pSVar2->field_0029,uVar8,local_14);
          if (STPiece<0,2>(local_14) != 0xffff) {
            /* ST_CALLSITE[0049B655]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_0045FF30_A86BE482; source view only; no Ghidra override */
            this_01 = st::fn_004028BA
                                (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_14),CASE_1);
            if (this_01 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x732);
            }

            iVar5 = st::fn_0040397C(reinterpret_cast<RecoveredRecord_0045FF30_A86BE482 *>(this_01));
            /* ST_CALLSITE[0049B688]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            if (((iVar5 != 0) || (iVar5 = st::fn_00402EDC(this_01), iVar5 == 1)) ||
               /* ST_CALLSITE[0049B694]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
               (iVar5 = st::fn_00402EDC(this_01), iVar5 == 0)) goto LAB_0049b6c1;
          }
          uVar6 = uVar6 + 1;
          uVar8 = uVar6 & 0xffff;
          if (local_18 <= uVar8) {
            g_currentExceptionFrame = local_6c.previous;
            return local_10;
          }
        } while( true );
      }
    }
    else {
LAB_0049b6c1:
      local_10 = 2;
      iVar5 = local_10;
    }
  }
  local_10 = iVar5;
  g_currentExceptionFrame = local_6c.previous;
  return local_10;
}

// 0049B7D0 STGroupBoatC::GrpPatrol
#line 4 "decomp/ST.exe/functions/0049B7D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpPatrol

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint __thiscall st::fn_0049B7D0(STGroupBoatC *this,int param_1)

{
  int scalar_local_34;

  byte bVar2;
  int iVar4;
  short *psVar6;
  STFishC *pSVar7;
  DArrayTy *pDVar8;
  DArrayTy *pDVar9;
  STBoatC *this_00;
  int iVar3;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  short *psVar14;
  Global_sub_006C8EC0_param_3Enum GVar15;
  int iVar17;
  short *psVar18;
  uint local_6c;
  uint local_68 [3];
  uint local_5a;
  short local_54;
  short local_52;
  short local_50;
  uint local_44;
  uint local_40;
  short local_3c;
  short local_3a;
  short local_38;
  RecoveredRecordView_00413AF0_B98DB3AE *local_34;
  DArrayTy *local_30;
  uint local_2c;
  uint local_28;
  short *local_24;
  Global_sub_006C8EC0_param_3Enum local_20;
  dword local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  short *psVar5;
  short *psVar4;

  local_1c = this->field_0029->count;
  if ((param_1 != 0) && (param_1 != 1)) {
    if (0 < this->field_023E) {
      this->field_023E = this->field_023E + 1;
    }
    /* ST_CALLSITE[0049B806]: CALL 0x0040331e; direct=0040331E STGroupBoatC::sub_004A7E30 */
    iVar4 = st::fn_0040331E(this,0);
    return -(uint)(iVar4 != 2) & 2;
  }
  memset(&this->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  this->field_0065 = 0;
  if (this->field_0226 != nullptr) {
    st::fn_006AE110(this->field_0226);
    this->field_0226 = nullptr;
  }
  if (this->field_022A != nullptr) {
    st::fn_006AE110(this->field_022A);
    this->field_022A = nullptr;
  }
  if (this->field_022E != nullptr) {
    st::fn_006AE110(this->field_022E);
    this->field_022E = nullptr;
  }
  this->field_0232 = -1;
  this->field_0236 = 1;
  this->field_023E = 0;
  this->field_023A = 0;
  this->field_0242 = 0;
  this->field_0246 = this->field_0107;
  local_2c = this->field_0103->count;
  local_28 = local_2c;
  if ((int)local_2c < 1) {
    st::fn_006AE110(this->field_0103);
    this->field_0103 = nullptr;
    return 0;
  }
  uVar13 = 0;
  iVar4 = -30000;
  local_30 = nullptr;
  local_c = 30000;
  local_8 = 30000;
  local_24 = (short *)0xffff8ad0;
  if (0 < (int)local_2c) {
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((uVar13 < local_2c) &&
         (psVar6 = (short *)(this->field_0103->elementSize * uVar13 + (int)this->field_0103->data),
         psVar6 != nullptr)) {
        iVar10 = (int)*psVar6;
        if (iVar10 < local_c) {
          local_c = iVar10;
        }
        if ((int)local_24 < iVar10) {
          local_24 = (short *)iVar10;
        }
        iVar10 = (int)psVar6[1];
        if (iVar10 < local_8) {
          local_8 = iVar10;
        }
        if (iVar4 < iVar10) {
          iVar4 = iVar10;
        }
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)local_2c);
  }
  local_20 = 0;
  if (0 < (int)local_1c) {
    do {

      st::fn_006ACC70(this->field_0029,local_20,&local_18);
      if ((ushort)local_18 != 0xffff) {
        /* ST_CALLSITE[0049B959]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar7 = st::pointer_boundary_cast<STFishC *>(st::fn_004028BA
                           (g_allPlayers_007FA174,this->field_0024,(ushort)local_18,CASE_1));
        if (pSVar7 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x77d);
        }
        /* ST_CALLSITE[0049B98D]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
        st::fn_00405F0B
                  (pSVar7,(short *)((int)&param_1 + 2),reinterpret_cast<short *>(&local_10),reinterpret_cast<short *>(&local_14));
        iVar10 = (int)STPiece<2,2>(param_1);
        if (iVar10 < local_c) {
          local_c = iVar10;
        }
        if ((int)local_24 < iVar10) {
          local_24 = (short *)iVar10;
        }
        iVar10 = (short)local_10;
        if (iVar10 < local_8) {
          local_8 = iVar10;
        }
        if (iVar4 < iVar10) {
          iVar4 = iVar10;
        }
      }
      local_20 = local_20 + 1;
    } while ((int)local_20 < (int)local_1c);
  }
  local_c = local_c + -10;
  if (local_c < 0) {
    local_c = 0;
  }
  iVar10 = local_c;
  local_8 = local_8 + -10;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar17 = (int)g_pathingGrid.sizeX;
  iVar11 = (int)local_24 + 10;
  if (iVar17 <= iVar11) {
    iVar11 = iVar17 + -1;
  }
  iVar4 = iVar4 + 10;
  if (g_pathingGrid.sizeY <= iVar4) {
    iVar4 = g_pathingGrid.sizeY + -1;
  }
  local_2c = (iVar11 - local_c) + 1;
  local_20 = (iVar4 - local_8) + CASE_1;
  scalar_local_34 = local_20 * local_2c; /* split integer lifetime from pointer-typed SSA storage */
  local_14 = 0;
  do {
    local_10 = 0;
    psVar6 = g_pathingGrid.cells +
             iVar17 * local_8 + local_c + (int)g_pathingGrid.planeStride * (short)local_14;
    local_24 = g_pathingScratchGrid.cells + (short)local_14 * scalar_local_34;
    if (0 < (int)local_20) {
      do {
        psVar14 = psVar6;
        psVar18 = local_24;
        for (uVar13 = (local_2c & 0x7fffffff) >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)psVar18 = *(undefined4 *)psVar14;
          psVar14 = psVar14 + 2;
          psVar18 = psVar18 + 2;
        }
        for (uVar13 = local_2c * 2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(char *)psVar18 = (char)*psVar14;
          psVar14 = (short *)((int)psVar14 + 1);
          psVar18 = (short *)((int)psVar18 + 1);
        }
        local_10 = local_10 + 1;
        iVar17 = (int)g_pathingGrid.sizeX;
        local_24 = local_24 + local_2c;
        psVar6 = psVar6 + iVar17;
      } while ((short)local_10 < (int)local_20);
    }
    local_14 = local_14 + 1;
  } while ((short)local_14 < 5);
  if (this->field_0103->count == 0) {
    psVar6 = nullptr;
  }
  else {
    psVar6 = static_cast<short *>(this->field_0103->data);
  }

  st::fn_006AB090((int)g_pathingScratchGrid.cells,local_2c,local_20,5,*psVar6 - local_c,
               psVar6[1] - local_8,(int)psVar6[2],-1,-1,-1);
  uVar13 = 1;
  if (1 < (int)local_28) {
    local_34 = reinterpret_cast<RecoveredRecordView_00413AF0_B98DB3AE *>(this->field_0103);
    local_2c = ((DArrayTy *)local_34)->count;
    do {
      if (uVar13 < local_2c) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        psVar6 = reinterpret_cast<short *>((((DArrayTy *)local_34)->elementSize * uVar13 +
                          (int)((DArrayTy *)local_34)->data));
      }
      else {
        psVar6 = nullptr;
      }
      iVar10 = local_c;
      if (g_pathingScratchGrid.cells
          [((psVar6[1] - local_8) * (int)g_pathingGrid.sizeX +
            (int)psVar6[2] * (int)g_pathingGrid.planeStride + (int)*psVar6) - local_c] < 1) {
        local_30 = (DArrayTy *)0x1;
        break;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)local_28);
  }
  local_20 = 0;
  if (0 < (int)local_1c) {
    do {
      GVar15 = local_20;

      st::fn_006ACC70(this->field_0029,local_20,&local_18);
      if ((ushort)local_18 != 0xffff) {
        /* ST_CALLSITE[0049BBC2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar7 = st::pointer_boundary_cast<STFishC *>(st::fn_004028BA
                           (g_allPlayers_007FA174,this->field_0024,(ushort)local_18,CASE_1));
        if (pSVar7 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x7a7);
        }
        /* ST_CALLSITE[0049BBF5]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
        st::fn_00405F0B
                  (pSVar7,(short *)((int)&param_1 + 2),reinterpret_cast<short *>(&local_10),reinterpret_cast<short *>(&local_14));
        GVar15 = local_20;
        if (g_pathingScratchGrid.cells
            [(((short)local_10 - local_8) * (int)g_pathingGrid.sizeX +
              (int)g_pathingGrid.planeStride * (short)local_14 + (int)STPiece<2,2>(param_1)) - iVar10]
            == 0) goto joined_r0x0049bc58;
      }
      local_20 = GVar15 + 1;
    } while ((int)local_20 < (int)local_1c);
  }
  if (local_30 != nullptr) {
joined_r0x0049bc58:
    local_28 = local_28 - 1;
    if (-1 < (int)local_28) {

      st::fn_006ACC70(this->field_0103,local_28,&local_3c);
      uVar13 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
      psVar4 = g_pathingGrid.cells;
      psVar5 = g_pathingScratchGrid.cells;
      for (uVar12 = (uVar13 & 0x7fffffff) >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)psVar5 = *(undefined4 *)psVar4;
        psVar4 = psVar4 + 2;
        psVar5 = psVar5 + 2;
      }
      for (uVar13 = uVar13 * 2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(char *)psVar5 = (char)*psVar4;
        psVar4 = (short *)((int)psVar4 + 1);
        psVar5 = (short *)((int)psVar5 + 1);
      }

      st::fn_006AB090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY
                   ,(int)g_pathingGrid.sizeZ,(int)local_3c,(int)local_3a,(int)local_38,-1,-1,-1);
      uVar13 = 0;
      if (0 < (int)local_1c) {
        do {

          st::fn_006ACC70(this->field_0029,uVar13,&local_18);
          if ((ushort)local_18 != 0xffff) {
            /* ST_CALLSITE[0049BD10]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar7 = st::pointer_boundary_cast<STFishC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,this->field_0024,(ushort)local_18,CASE_1));
            if (pSVar7 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x7bd);
            }
            /* ST_CALLSITE[0049BD43]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
            st::fn_00405F0B
                      (pSVar7,(short *)((int)&param_1 + 2),reinterpret_cast<short *>(&local_10),reinterpret_cast<short *>(&local_14));
            if (g_pathingScratchGrid.cells
                [(int)g_pathingGrid.planeStride * (short)local_14 +
                 (int)g_pathingGrid.sizeX * (short)local_10 + (int)STPiece<2,2>(param_1)] == 0) {

              st::fn_006B0C70(this->field_0103,local_28);
              break;
            }
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_1c);
      }
      goto joined_r0x0049bc58;
    }
    if (this->field_0103->count == 0) {
      st::fn_006AE110(this->field_0103);
      this->field_0103 = nullptr;
      return 0;
    }
  }
  pDVar8 = st::fn_006AE290(nullptr,this->field_0103->count,6,1);
  pDVar9 = this->field_0103;
  this->field_0226 = pDVar8;
  uVar13 = 0;
  if (0 < (int)pDVar9->count) {
    do {

      st::fn_006ACC70(pDVar9,uVar13,&local_3c);

      st::fn_006AE140(this->field_0226,uVar13,&local_3c);
      pDVar9 = this->field_0103;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)pDVar9->count);
  }
  st::fn_006AE110(this->field_0103);
  this->field_0103 = nullptr;
  /* ST_CALLSITE[0049BE31]: CALL 0x00403f80; direct=00403F80 STGroupBoatC::ReMakePatrolPoints */
  st::fn_00403F80(this);
  pDVar9 = st::fn_006AE290(nullptr,(uint)(ushort)this->field_0027,0x16,1);
  this->field_022E = pDVar9;
  uVar13 = 0;
  local_6c = 0;
  local_5a = 0;
  if (0 < (int)local_1c) {
    do {

      st::fn_006ACC70(this->field_0029,uVar13,&local_18);
      if ((short)local_18 != -1) {
        local_68[0] = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_68[0])), (uint16_t)((short)local_18));

        st::fn_006AE1C0(this->field_022E,&local_6c);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)local_1c);
  }
  bVar2 = st::fn_004025AE(CASE_8);
  this->field_023A = ((this->field_0242 * 0xc9) / (int)(uint)bVar2) / 3;
  local_30 = st::fn_006AE290(nullptr,0,2,1);
  uVar13 = 0;
  local_44 = g_playSystem_00802A38->field_00E4;
  pDVar9 = this->field_022E;
  if (0 < (int)pDVar9->count) {
    do {

      st::fn_006ACC70(pDVar9,uVar13,&local_6c);
      if ((ushort)local_68[0] != 0xffff) {
        /* ST_CALLSITE[0049BF23]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        this_00 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                            (g_allPlayers_007FA174,this->field_0024,(ushort)local_68[0],CASE_1));
        if (this_00 == nullptr) {

          iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x7ed,0,0,st::mutable_c_string("%s")
                                     ,"STGroupBoatC::GrpPatrol NULL value");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x7ee);
        }

        st::fn_006AE1C0(local_30,local_68);
        local_40 = uVar13;
        /* ST_CALLSITE[0049BF83]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        st::fn_00402126(this_00,CASE_6,&local_44);
      }
      pDVar9 = this->field_022E;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)pDVar9->count);
  }
  pDVar9 = local_30;

  st::fn_006ACC70(this->field_022A,this->field_0232,&local_54);
  /* ST_CALLSITE[0049BFC4]: CALL 0x00405d7b; direct=00405D7B STGroupBoatC::InitWay */
  st::fn_00405D7B(this,pDVar9,(int)local_54,(int)local_52,(int)local_50);
  st::fn_006AE110(pDVar9);
  return 2;
}

// 0049C210 STGroupBoatC::GrpLoadRC
#line 4 "decomp/ST.exe/functions/0049C210/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpLoadRC
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498188 -> read as EAX on
   every CFG path | 00497E00 @ 0049856C -> read as EAX on every CFG path */

int __thiscall st::fn_0049C210(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *this_00;
  byte bVar2;
  int iVar3;
  DArrayTy *pDVar3;
  STGameObjC *pSVar4;
  DArrayTy *pDVar5;
  STBoatC *this_01;
  short *psVar6;
  int iVar8;
  int iVar7;
  int iVar9;
  STWorldObject *pSVar10;
  int *piVar11;
  byte *puVar12;
  byte *puVar13;
  uint uVar14;
  dword dVar15;
  short *psVar16;
  char cVar17;
  Global_sub_0043EC20_param_2Enum GVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  STAllPlayersC_GetTOBJList_param_2Enum SVar25;
  uint local_100 [17];
  InternalExceptionFrame local_bc;
  short local_78 [3];
  int local_72;
  short local_6e;
  short local_6c;
  short local_6a;
  int local_68;
  int local_3e;
  int local_34 [5];
  STGroupBoatC *local_20;
  int local_1c;
  byte local_18 [4];
  int local_14;
  dword local_10;
  dword local_c;
  uint local_8;
  local_14 = 4;
  local_34[0] = 0x38;
  local_34[1] = 0x39;
  local_34[2] = 0x4f;
  local_34[3] = 0x5e;
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_20 = this;

  iVar3 = st::fn_0072D7F0(local_bc.jumpBuffer,0);
  this_00 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_bc.previous;
    if (iVar3 == -0x5001fff7) {
      if (local_20->field_010F != nullptr) {
        st::fn_006AE110(local_20->field_010F);
        this_00->field_010F = nullptr;
      }
      if (this_00->field_0127 != nullptr) {
        st::fn_006AE110(this_00->field_0127);
        this_00->field_0127 = nullptr;
      }
      if (this_00->field_024E != nullptr) {
        st::fn_006AE110(this_00->field_024E);
        this_00->field_024E = nullptr;
      }
      if (this_00->field_0266 != nullptr) {
        st::fn_006AE110(this_00->field_0266);
        this_00->field_0266 = nullptr;
      }
      return 0;
    }

    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x8ee,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpLoadRC");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x8ef);
      return local_34[4];
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    memset(&local_20->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar7 = 0;
    local_20->field_0065 = 0;
    if (local_20->field_024E != nullptr) {
      st::fn_006AE110(local_20->field_024E);
    }
    if (this_00->field_0266 != nullptr) {
      st::fn_006AE110(this_00->field_0266);
    }
    puVar12 = reinterpret_cast<byte *>((&this_00->field_010B));
    puVar13 = reinterpret_cast<byte *>((&this_00->field_024A));
    memmove(puVar13, puVar12, 0x2c); /* compiler REP MOVS byte copy */
    this_00->field_024E = nullptr;
    this_00->field_0266 = nullptr;
    if (this_00->field_010B == 0) {
      if ((this_00->field_010F == nullptr) ||
         (local_c = this_00->field_010F->count, local_c == 0)) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x81d);
      }
      pDVar3 = st::fn_006AE290(nullptr,0,2,1);
      this_00->field_024E = pDVar3;
      uVar14 = 0;
      if (0 < (int)local_c) {
        do {

          st::fn_006ACC70(this_00->field_010F,uVar14,&local_8);
          if (((ushort)local_8 != 0xffff) &&
             /* ST_CALLSITE[0049C35C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
             (pSVar4 = st::fn_004028BA
                                 (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1),
             pSVar4 != nullptr)) {
            /* ST_CALLSITE[0049C36B]: CALL dword ptr [EAX + 0x2c] */
            iVar7 = pSVar4->vfunc_2C();
            iVar9 = 0;
            if (0 < local_14) {
              piVar11 = local_34;
              do {
                if (iVar7 == *piVar11) break;
                iVar9 = iVar9 + 1;
                piVar11 = piVar11 + 1;
              } while (iVar9 < local_14);
            }
            if (((iVar9 != local_14) && (iVar7 == this_00->field_025E)) &&
               /* ST_CALLSITE[0049C39C]: CALL dword ptr [EDX + 0x88] */
               (iVar7 = (*pSVar4->vtable->vfunc_88)(st::machine_word_boundary_cast<undefined4>(local_18)), 0 < iVar7)) {

              st::fn_006AE1C0(this_00->field_024E,&local_8);
            }
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_c);
      }
      st::fn_006AE110(this_00->field_010F);
      this_00->field_010F = nullptr;
      if (this_00->field_024E->count == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x834);
      }
    }
    else {
      /* ST_CALLSITE[0049C44E]: CALL 0x00401974; direct=00401974 thunk_FUN_0043ec20; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArrayTy;/char;/SubmarineTitans/Recovered/Enums/Global_sub_0043EC20_param_2Enum;/short;/short;/short;/short;/short;/short;/int;/char */
      pDVar3 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00401974(this_00->field_0024,this_00->field_025E,this_00->field_0252,
                                  this_00->field_0254,this_00->field_0256,this_00->field_0258,
                                  this_00->field_025A,this_00->field_025C,1,-1));
      if (pDVar3 == nullptr) {
        pDVar3 = st::fn_006AE290(nullptr,0,2,1);
        this_00->field_024E = pDVar3;
        local_8 = 0xffff;

        st::fn_006AE1C0(pDVar3,&local_8);
      }
      else {
        pDVar5 = st::fn_006AE290(nullptr,0,2,1);
        this_00->field_024E = pDVar5;
        local_c = pDVar3->count;
        uVar14 = 0;
        if (0 < (int)local_c) {
          do {

            st::fn_006ACC70(pDVar3,uVar14,&local_8);
            /* ST_CALLSITE[0049C4B6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar4 = st::fn_004028BA
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            if ((pSVar4 != nullptr) &&
               /* ST_CALLSITE[0049C4C7]: CALL dword ptr [EDX + 0x88] */
               (iVar7 = (*pSVar4->vtable->vfunc_88)(st::machine_word_boundary_cast<undefined4>(local_18)), 0 < iVar7)) {

              st::fn_006AE1C0(this_00->field_024E,&local_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_c);
        }
        if (this_00->field_024E->count == 0) {
          local_8 = 0xffff;

          st::fn_006AE1C0(this_00->field_024E,&local_8);
        }
        st::fn_006AE110(pDVar3);
      }
    }
    if (this_00->field_0262 == 0) {
      if ((this_00->field_0127 == nullptr) ||
         (dVar15 = this_00->field_0127->count, local_c = dVar15, dVar15 == 0)) {
        dVar15 = local_c;
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x855);
      }
      pDVar3 = st::fn_006AE290(nullptr,0,2,1);
      uVar14 = 0;
      this_00->field_0266 = pDVar3;
      if (0 < (int)dVar15) {
        do {

          st::fn_006ACC70(this_00->field_0127,uVar14,&local_8);
          if ((((ushort)local_8 != 0xffff) &&
              /* ST_CALLSITE[0049C58F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              (pSVar4 = st::fn_004028BA
                                  (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1)
              , pSVar4 != nullptr)) &&
             /* ST_CALLSITE[0049C59C]: CALL dword ptr [EDX + 0x2c] */
             ((iVar7 = pSVar4->vfunc_2C(), iVar7 == 0x3b || (iVar7 == 0x60)))) {

            st::fn_006AE1C0(this_00->field_0266,&local_8);
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)dVar15);
      }
      st::fn_006AE110(this_00->field_0127);
      this_00->field_0127 = nullptr;
      if (this_00->field_0266->count == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x866);
      }
    }
    if (this_00->field_0262 == 2) {
      /* ST_CALLSITE[0049C613]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar2 = st::fn_004049B7(this_00->field_0024);
      if (bVar2 == 3) {
        sVar24 = this_00->field_0274;
        sVar23 = this_00->field_0272;
        sVar22 = this_00->field_0270;
        sVar21 = this_00->field_026E;
        sVar20 = this_00->field_026C;
        sVar19 = this_00->field_026A;
        cVar17 = this_00->field_0024;
        GVar18 = 0x60;
      }
      else {
        sVar24 = this_00->field_0274;
        sVar23 = this_00->field_0272;
        sVar22 = this_00->field_0270;
        sVar21 = this_00->field_026E;
        sVar20 = this_00->field_026C;
        sVar19 = this_00->field_026A;
        cVar17 = this_00->field_0024;
        GVar18 = 0x3b;
      }
      /* ST_CALLSITE[0049C694]: CALL 0x00401974; direct=00401974 thunk_FUN_0043ec20; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArrayTy;/char;/SubmarineTitans/Recovered/Enums/Global_sub_0043EC20_param_2Enum;/short;/short;/short;/short;/short;/short;/int;/char */
      pDVar3 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00401974(cVar17,GVar18,sVar19,sVar20,sVar21,sVar22,sVar23,sVar24,0,-1));
      if (pDVar3 == nullptr) {
        pDVar3 = st::fn_006AE290(nullptr,0,2,1);
        this_00->field_0266 = pDVar3;
        local_8 = 0xffff;

        st::fn_006AE1C0(pDVar3,&local_8);
      }
      else {
        pDVar5 = st::fn_006AE290(nullptr,0,2,1);
        this_00->field_0266 = pDVar5;
        local_c = pDVar3->count;
        uVar14 = 0;
        if (0 < (int)local_c) {
          do {

            st::fn_006ACC70(pDVar3,uVar14,&local_8);
            /* ST_CALLSITE[0049C6F9]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar4 = st::fn_004028BA
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            if (pSVar4 != nullptr) {

              st::fn_006AE1C0(this_00->field_0266,&local_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_c);
        }
        st::fn_006AE110(pDVar3);
      }
    }
    if (this_00->field_0262 == 1) {
      /* ST_CALLSITE[0049C737]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar2 = st::fn_004049B7(this_00->field_0024);
      if (bVar2 == 3) {
        cVar17 = this_00->field_0024;
        SVar25 = 0x60;
      }
      else {
        cVar17 = this_00->field_0024;
        SVar25 = 0x3b;
      }
      /* ST_CALLSITE[0049C758]: CALL 0x00401415; direct=00401415 STAllPlayersC::GetTOBJList; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__thiscall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STAllPlayersC;/char;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetTOBJList_param_2Enum;/int;/char */
      pDVar3 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00401415(g_allPlayers_007FA174,cVar17,SVar25,0,-1));
      if (pDVar3->count == 0) {
        pDVar5 = st::fn_006AE290(nullptr,0,2,1);
        this_00->field_0266 = pDVar5;
        local_8 = 0xffff;

        st::fn_006AE1C0(pDVar5,&local_8);
      }
      else {
        pDVar5 = st::fn_006AE290(nullptr,0,2,1);
        this_00->field_0266 = pDVar5;
        local_c = pDVar3->count;
        uVar14 = 0;
        if (0 < (int)local_c) {
          do {

            st::fn_006ACC70(pDVar3,uVar14,&local_8);
            /* ST_CALLSITE[0049C7C0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            pSVar4 = st::fn_004028BA
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            if (pSVar4 != nullptr) {

              st::fn_006AE1C0(this_00->field_0266,&local_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_c);
        }
      }
      st::fn_006AE110(pDVar3);
    }
    /* ST_CALLSITE[0049C7FD]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
    st::fn_0040143D(this_00,1,this_00->field_024E,this_00->field_0266,this_00->field_0029);
  }
  local_34[4] = 2;
  if ((g_playSystem_00802A38->field_00E4 % 100 == 0) &&
     ((this_00->field_024A == 0 || (this_00->field_0262 == 0)))) {
    local_10 = 0;
    local_c = this_00->field_0029->count;
    if (0 < (int)local_c) {
      do {

        st::fn_006ACC70(this_00->field_0029,local_10,&local_8);
        this_01 = (STBoatC *)
                  /* ST_CALLSITE[0049C875]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                  st::fn_004028BA
                            (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (((this_01 != nullptr) &&
            /* ST_CALLSITE[0049C886]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            (iVar7 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(this_01)), iVar7 == 0xc)) &&

           (local_1c = st::fn_00403184(this_01), local_1c != 0)) {
          /* ST_CALLSITE[0049C8AF]: CALL 0x004024cd; direct=004024CD STGameObjC::sub_0048DC90 */
          psVar6 = STPointerBoundaryCast<short *>(st::fn_004024CD(reinterpret_cast<STGameObjC *>(this_01),local_100));
          psVar16 = local_78;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined4 *)psVar16 = *(undefined4 *)psVar6;
            psVar6 = psVar6 + 2;
            psVar16 = psVar16 + 2;
          }
          *psVar16 = *psVar6;
          if ((local_3e == 6) || (local_3e == 0xe)) break;
          if (local_1c == 1) {
            if (local_72 != -1) {
              if (((local_78[0] < 0) || (g_worldGrid.sizeX <= local_78[0])) ||
                 ((local_78[1] < 0 ||
                  (((g_worldGrid.sizeY <= local_78[1] || (local_78[2] < 0)) ||
                   (g_worldGrid.sizeZ <= local_78[2])))))) {
                pSVar10 = nullptr;
              }
              else {
                pSVar10 = STGridAt3D(g_worldGrid, local_78[0], local_78[1], local_78[2]).objects[0];
              }
              if (((pSVar10 != nullptr) && (*(int *)&pSVar10->field_0x18 == local_72))
                 /* ST_CALLSITE[0049C96A]: CALL dword ptr [EAX + 0x88]; [STIndirectCallsiteApplier] exact slot 0x88; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4 */
                 && (iVar7 = pSVar10->vfunc_88(st::machine_word_boundary_cast<undefined4>(&local_1c)), 0 < iVar7))
              break;
            }
          }
          else if (local_68 != -1) {
            if (((local_6e < 0) || (g_worldGrid.sizeX <= local_6e)) ||
               ((local_6c < 0 ||
                (((g_worldGrid.sizeY <= local_6c || (local_6a < 0)) ||
                 (g_worldGrid.sizeZ <= local_6a)))))) {
              pSVar10 = nullptr;
            }
            else {
              pSVar10 = STGridAt3D(g_worldGrid, local_6e, local_6c, local_6a).objects[0];
            }
            if ((pSVar10 != nullptr) && (*(int *)&pSVar10->field_0x18 == local_68))
            break;
          }
        }
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)local_c);
    }
    if (local_10 == local_c) {
      local_34[4] = 0;
    }
  }
  g_currentExceptionFrame = local_bc.previous;
  return local_34[4];
}

// 0049CD30 STGroupBoatC::GrpBuild
#line 4 "decomp/ST.exe/functions/0049CD30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpBuild
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004981C3 -> read as EAX on
   every CFG path | 00497E00 @ 004981D0 -> read as EAX on every CFG path | 00497E00 @ 0049857A ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049CD30(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  STGroupBoatC *pSVar4;
  DArrayTy *array;
  short sVar5;
  int iVar6;
  STBoatC *pSVar6;
  dword dVar7;
  DArrayTy *array_00;
  int iVar9;
  int iVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  short *psVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  uint *puVar15;
  InternalExceptionFrame local_8c;
  uint local_48;
  ushort local_44;
  ushort local_42;
  ushort local_40;
  uint local_3e;
  uint local_3a;
  char local_36 [14];
  byte local_28;
  ushort local_27;
  STGroupBoatC *local_24;
  uint local_20;
  DArrayTy *local_1c;
  int local_18;
  dword local_14;
  DArrayTy *local_10;
  uint local_c;
  byte local_8 [4];
  local_14 = this->field_0029->count;
  local_10 = nullptr;
  local_1c = nullptr;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_24 = this;

  iVar6 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  pSVar4 = local_24;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_8c.previous;

    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x944,0,iVar6,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpBuild");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x945);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_24->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar8 = 0;
    local_24->field_0065 = 0;
    psVar11 = reinterpret_cast<short *>(&local_24->field_0137);
    psVar13 = &local_24->field_0276;
    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)psVar13 = *(undefined4 *)psVar11;
      psVar11 = psVar11 + 2;
      psVar13 = psVar13 + 2;
    }
    *psVar13 = *psVar11;
    ((char *)psVar13)[1] = (char)psVar11[1];
    local_20 = g_playSystem_00802A38->field_00E4;
    local_44 = local_24->field_0137;
    local_48 = g_playSystem_00802A38->field_00E4;
    local_42 = local_24->field_0139;
    local_3e = local_24->field_013D;
    local_27 = local_24->field_0154;
    local_40 = local_24->field_013B;
    local_3a = *(undefined4 *)&local_24->field_0x141;
    st::fn_0072E340(local_36,&local_24->field_0145,0xe);
    uVar9 = 0;
    local_28 = 0;
    local_c = 0;
    array_00 = local_1c;
    if (local_14 != 0) {
      do {

        st::fn_006ACC70(pSVar4->field_0029,uVar9,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar6 = (STBoatC *)
                   /* ST_CALLSITE[0049CE62]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar6 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x90f);
          }
          /* ST_CALLSITE[0049CE8B]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar7 = pSVar6->sub_0045EEE0();
          /* ST_CALLSITE[0049CE97]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar7 == 0xc) || (dVar7 = pSVar6->sub_0045EEE0(), dVar7 == 0x18))
             /* ST_CALLSITE[0049CEA3]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             || (dVar7 = pSVar6->sub_0045EEE0(), dVar7 == 0x19)) {
            if (array_00 == nullptr) {
              array_00 = st::fn_006AE290(nullptr,1,2,1);
              local_1c = array_00;
            }

            st::fn_006AE1C0(array_00,local_8);
            puVar15 = &local_48;
            SVar14 = CASE_11;
          }
          else {

            iVar8 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar6));
            if (iVar8 != 0) {
              if (local_10 == nullptr) {
                local_10 = st::fn_006AE290(nullptr,1,2,1);
              }

              st::fn_006AE1C0(local_10,local_8);
              goto LAB_0049cf10;
            }
            puVar15 = &local_20;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[0049CF0B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar6,SVar14,puVar15);
        }
LAB_0049cf10:
        local_c = local_c + 1;
        uVar9 = local_c & 0xffff;
      } while (uVar9 < local_14);
    }
    array = local_10;
    /* ST_CALLSITE[0049CF37]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar9)), (uint8_t)(pSVar4->field_0024)),
               &array_00->flags,&local_10->flags);
    if (array_00 != nullptr) {
      st::fn_006AE110(array_00);
    }
    if (array != nullptr) {
      st::fn_006AE110(array);
    }
  }
  uVar9 = 0;
  local_c = 2;
  if (g_playSystem_00802A38->field_00E4 % 0x32 == 0) {
    sVar5 = pSVar4->field_0276;
    sVar1 = pSVar4->field_027A;
    sVar2 = pSVar4->field_0278;
    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
        ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar1)) {
      sVar5 = -1;
    }
    else {
      sVar5 = STGridAt3D(g_pathingGrid, sVar5, sVar2, sVar1);
    }
    if (sVar5 != 0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_18 = 0;
    if (local_14 != 0) {
      uVar10 = 0;
      do {

        st::fn_006ACC70(pSVar4->field_0029,uVar10,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar6 = (STBoatC *)
                   /* ST_CALLSITE[0049D034]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar6 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x938);
          }
          /* ST_CALLSITE[0049D05E]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar7 = pSVar6->sub_0045EEE0();
          /* ST_CALLSITE[0049D06A]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((((dVar7 == 0xc) || (dVar7 = pSVar6->sub_0045EEE0(), dVar7 == 0x18))
               /* ST_CALLSITE[0049D076]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
               || (dVar7 = pSVar6->sub_0045EEE0(), dVar7 == 0x19)) &&
              /* ST_CALLSITE[0049D080]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
              (iVar8 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar6)), iVar8 == 0x11)) ||
             /* ST_CALLSITE[0049D08E]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
             (uVar10 = st::fn_00404DF9(pSVar6,CASE_11), uVar10 == 1)) {
            local_18 = local_18 + 1;
          }
        }
        uVar9 = uVar9 + 1;
        uVar10 = uVar9 & 0xffff;
      } while (uVar10 < local_14);
    }
    if (local_18 == 0) {
      local_c = 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return local_c;
}

// 0049D230 STGroupBoatC::GrpUnLoadRC
#line 4 "decomp/ST.exe/functions/0049D230/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpUnLoadRC
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004981FA -> read as EAX on
   every CFG path | 00497E00 @ 00498204 -> read as EAX on every CFG path | 00497E00 @ 0049859C ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049D230(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar5;
  STGroupBoatC *pSVar6;
  DArrayTy *array;
  int iVar6;
  STBoatC *this_00;
  dword dVar7;
  DArrayTy *array_00;
  STGameObjC *this_01;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint index;
  STWorldObject *this_02;
  STBoatC_CmdToObj_param_1Enum SVar12;
  uint *puVar13;
  InternalExceptionFrame local_7c;
  uint local_38;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  STGroupBoatC *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  DArrayTy *local_14;
  dword local_10;
  DArrayTy *local_c;
  byte local_8 [4];
  local_10 = this->field_0029->count;
  local_c = nullptr;
  local_14 = nullptr;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_2c = this;

  iVar6 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
  pSVar6 = local_2c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_7c.previous;

    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x99a,0,iVar6,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpUnLoadRC");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x99b);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    uVar10 = 0;
    memset(&local_2c->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_2c->field_0065 = 0;
    local_20 = 0;
    uVar5 = local_2c->field_0158;
    local_2c->field_0295 = local_2c->field_0156;
    local_2c->field_0297 = uVar5;
    local_2c->field_0299 = local_2c->field_015A;
    local_34 = local_2c->field_0156;
    local_38 = g_playSystem_00802A38->field_00E4;
    local_30 = local_2c->field_015A;
    local_32 = local_2c->field_0158;
    array_00 = local_14;
    local_24 = local_38;
    if (local_10 != 0) {
      do {

        st::fn_006ACC70(pSVar6->field_0029,uVar10,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          this_00 = (STBoatC *)
                    /* ST_CALLSITE[0049D31C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                    st::fn_004028BA
                              (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (this_00 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x960);
          }
          /* ST_CALLSITE[0049D345]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar7 = this_00->sub_0045EEE0();
          /* ST_CALLSITE[0049D351]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar7 == 8) || (dVar7 = this_00->sub_0045EEE0(), dVar7 == 0x14))
             /* ST_CALLSITE[0049D35D]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             || (dVar7 = this_00->sub_0045EEE0(), dVar7 == 0x1a)) {
            if (array_00 == nullptr) {
              array_00 = st::fn_006AE290(nullptr,1,2,1);
              local_14 = array_00;
            }

            st::fn_006AE1C0(array_00,local_8);
            puVar13 = &local_38;
            SVar12 = CASE_D;
          }
          else {

            iVar9 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(this_00));
            if (iVar9 != 0) {
              if (local_c == nullptr) {
                local_c = st::fn_006AE290(nullptr,1,2,1);
              }

              st::fn_006AE1C0(local_c,local_8);
              goto LAB_0049d3ca;
            }
            puVar13 = &local_24;
            SVar12 = CASE_3;
          }
          /* ST_CALLSITE[0049D3C5]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(this_00,SVar12,puVar13);
        }
LAB_0049d3ca:
        local_20 = local_20 + 1;
        uVar10 = local_20 & 0xffff;
      } while (uVar10 < local_10);
    }
    array = local_c;
    /* ST_CALLSITE[0049D3F1]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar10)), (uint8_t)(pSVar6->field_0024)),
               &array_00->flags,&local_c->flags);
    if (array_00 != nullptr) {
      st::fn_006AE110(array_00);
    }
    if (array != nullptr) {
      st::fn_006AE110(array);
    }
  }
  local_20 = 2;
  if (g_playSystem_00802A38->field_00E4 % 100 == 0) {
    sVar1 = pSVar6->field_0295;
    sVar2 = pSVar6->field_0299;
    sVar3 = pSVar6->field_0297;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
        ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar2)) {
      this_02 = nullptr;
    }
    else {
      this_02 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    uVar10 = 0;
    if (((this_02 == nullptr) ||
        (this_02[1].vtable != (STWorldObjectVTable *)(int)pSVar6->field_0024)) ||
       /* ST_CALLSITE[0049D4B4]: CALL dword ptr [EAX + 0x2c] */
       ((iVar9 = this_02->GetObjectTypeId(), iVar9 != 0x3b &&
        /* ST_CALLSITE[0049D4C0]: CALL dword ptr [EDX + 0x2c] */
        (iVar9 = this_02->GetObjectTypeId(), iVar9 != 0x60)))) {
      local_20 = 0;
    }
    else {
      local_28 = 0;
      local_1c = 0;
      local_18 = 0;
      if (local_10 != 0) {
        index = 0;
        do {

          st::fn_006ACC70(pSVar6->field_0029,index,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            /* ST_CALLSITE[0049D508]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            this_01 = st::fn_004028BA
                                (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
            if (this_01 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x989);
            }
            /* ST_CALLSITE[0049D532]: CALL dword ptr [EAX + 0x2c] */
            iVar9 = this_01->vfunc_2C();
            /* ST_CALLSITE[0049D53E]: CALL dword ptr [EDX + 0x2c] */
            if (((iVar9 == 8) || (iVar9 = this_01->vfunc_2C(), iVar9 == 0x14)) ||
               /* ST_CALLSITE[0049D54A]: CALL dword ptr [EAX + 0x2c] */
               (iVar9 = this_01->vfunc_2C(), iVar9 == 0x1a)) {
              local_18 = local_18 + 1;
              local_1c = local_1c + this_01->field_07DA + this_01->field_07D6 + this_01->field_07D2;
              if (0 < local_1c) break;
              /* ST_CALLSITE[0049D57D]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
              iVar9 = st::fn_00402EDC(this_01);
              if (iVar9 == 0xd) {
                local_28 = 1;
                break;
              }
            }
          }
          uVar10 = uVar10 + 1;
          index = uVar10 & 0xffff;
        } while (index < local_10);
      }
      if ((local_18 == 0) || ((local_1c == 0 && (local_28 == 0)))) {
        g_currentExceptionFrame = local_7c.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_20;
}

// 0049D750 STGroupBoatC::GrpRepare
#line 4 "decomp/ST.exe/functions/0049D750/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepare
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 0049822B -> read as EAX on
   every CFG path | 00497E00 @ 00498238 -> read as EAX on every CFG path | 00497E00 @ 004985AA ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049D750(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *this_00;
  int iVar2;
  DArrayTy *pDVar2;
  STGameObjC *this_01;
  uint *puVar3;
  STBoatC *this_02;
  uint uVar4;
  int iVar7;
  int iVar5;
  dword dVar6;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_58;
  STGroupBoatC *local_14;
  int local_10;
  dword local_c;
  byte local_8 [4];
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  iVar2 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    if (iVar2 == -0x5001fff7) {
      if (local_14->field_0160 != nullptr) {
        st::fn_006AE110(local_14->field_0160);
        this_00->field_0160 = nullptr;
      }
      if ((DArrayTy *)this_00->field_029F != 0) {
        st::fn_006AE110((DArrayTy *)this_00->field_029F);
        this_00->field_029F = 0;
      }
      return 0;
    }

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x9ea,0,iVar2,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpRepare");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x9eb);
      return local_10;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar5 = 0;
    local_14->field_0065 = 0;
    if ((DArrayTy *)local_14->field_029F != 0) {
      st::fn_006AE110((DArrayTy *)local_14->field_029F);
    }
    this_00->field_029B = this_00->field_015C;
    this_00->field_029F = st::machine_word_boundary_cast<undefined4>(this_00->field_0160);
    this_00->field_029F = 0;
    if (this_00->field_029B == 0) {
      if ((this_00->field_0160 == nullptr) ||
         (dVar6 = this_00->field_0160->count, local_c = dVar6, dVar6 == 0)) {
        dVar6 = local_c;
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x9b7);
      }
      pDVar2 = st::fn_006AE290(nullptr,0,2,1);
      uVar8 = 0;
      this_00->field_029F = st::machine_word_boundary_cast<undefined4>(pDVar2);
      if (0 < (int)dVar6) {
        do {

          st::fn_006ACC70(this_00->field_0160,uVar8,local_8);
          if (((STPiece<0,2>(local_8) != 0xffff) &&
              /* ST_CALLSITE[0049D857]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              (this_01 = st::fn_004028BA
                                   (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_8),CASE_1),
              this_01 != nullptr)) &&
             /* ST_CALLSITE[0049D864]: CALL dword ptr [EDX + 0x2c] */
             (iVar5 = this_01->vfunc_2C(), iVar5 == 0x33)) {

            st::fn_006AE1C0((DArrayTy *)this_00->field_029F,local_8);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)dVar6);
      }
      st::fn_006AE110(this_00->field_0160);
      this_00->field_0160 = nullptr;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(this_00->field_029F + 0xc) == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x9c8);
      }
    }
    if (this_00->field_029B == 1) {
      /* ST_CALLSITE[0049D8D9]: CALL 0x00401415; direct=00401415 STAllPlayersC::GetTOBJList */
      puVar3 = st::fn_00401415(g_allPlayers_007FA174,this_00->field_0024,0x33,0,-1);
      this_00->field_029F = st::machine_word_boundary_cast<undefined4>(puVar3);
      if (puVar3[3] == 0) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x9cd);
      }
    }
    /* ST_CALLSITE[0049D914]: CALL 0x00403251; direct=00403251 STGroupBoatC::DistributeDock */
    st::fn_00403251(this_00,1,(DArrayTy *)this_00->field_029F,this_00->field_0029);
  }
  uVar8 = 0;
  local_10 = 2;
  if (g_playSystem_00802A38->field_00E4 % 0x19 == 0) {
    if ((this_00->field_029F == 0) || (this_00->field_0027 == 0)) {
      local_10 = 0;
    }
    else {
      uVar9 = this_00->field_0029->count;
      local_c = uVar9;
      if (0 < (int)uVar9) {
        do {

          st::fn_006ACC70(this_00->field_0029,uVar8,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            this_02 = (STBoatC *)
                      /* ST_CALLSITE[0049D97F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                      st::fn_004028BA
                                (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_8),CASE_1);
            /* ST_CALLSITE[0049D988]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar5 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(this_02));
            uVar9 = local_c;
            if ((iVar5 == 4) ||
               /* ST_CALLSITE[0049D996]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
               (uVar4 = st::fn_00404DF9(this_02,CASE_4), uVar9 = local_c, uVar4 == 1)) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar9);
      }
      if (uVar8 == uVar9) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return local_10;
}

// 0049DB40 STGroupBoatC::GrpGuard
#line 4 "decomp/ST.exe/functions/0049DB40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpGuard
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498262 -> read as EAX on
   every CFG path | 00497E00 @ 0049826F -> read as EAX on every CFG path | 00497E00 @ 004985B8 ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049DB40(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int local_EAX_64;
  DArrayTy *array;
  STBoatC *pSVar3;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar5;
  dword index;
  InternalExceptionFrame local_78;
  int local_34;
  STGroupBoatC *local_30;
  uint local_2c;
  DArrayTy *local_28;
  uint local_24;
  dword local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  DArrayTy *local_10;
  byte local_c [4];
  DArrayTy *local_8;

  local_8 = nullptr;
  local_1c = nullptr;
  local_10 = nullptr;
  local_20 = this->field_0029->count;
  local_28 = nullptr;
  local_34 = 2;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_30 = this;

  local_EAX_64 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  pSVar2 = local_30;
  if (local_EAX_64 != 0) {
    g_currentExceptionFrame = local_78.previous;

    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xa3e,0,local_EAX_64,
                               st::mutable_c_string("%s"),"STGroupBoatC::GrpGuard");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_64,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xa3f);
    return -1;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    memset(&local_30->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_30->field_0065 = 0;
    local_8 = st::fn_006AE290(nullptr,0,2,1);
    if (pSVar2->field_0164 == 0) {

      st::fn_006AFE40(reinterpret_cast<int *>(&local_8),&pSVar2->field_0168->flags);
    }
    if (pSVar2->field_0164 == 1) {
      /* ST_CALLSITE[0049DC52]: CALL 0x00403869; direct=00403869 STAllPlayersC::GetGObjFromBox */
      st::fn_00403869
                (g_allPlayers_007FA174,pSVar2->field_0024,pSVar2->field_016C,pSVar2->field_016E,
                 pSVar2->field_0170,pSVar2->field_0172,pSVar2->field_0174,pSVar2->field_0176,
                 reinterpret_cast<int *>(&local_1c),reinterpret_cast<int *>(&local_10),&local_14,&local_18);
      if (0 < local_14) {

        st::fn_006AFE40(reinterpret_cast<int *>(&local_8),local_1c);
      }
      if (0 < local_18) {
        if (local_14 == 0) {

          st::fn_006AFE40(reinterpret_cast<int *>(&local_8),&local_10->flags);
        }
        else {
          uVar5 = 0;
          if (0 < local_18) {
            do {

              st::fn_006ACC70(local_10,uVar5,local_c);

              st::fn_006AE1C0(local_8,local_c);
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < local_18);
          }
        }
      }
    }
    local_2c = 0;
    array = local_28;
    if (0 < (int)local_20) {
      do {

        st::fn_006ACC70(pSVar2->field_0029,local_2c,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          /* ST_CALLSITE[0049DCDE]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar3 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1));
          if (pSVar3 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xa1a);
          }

          iVar4 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar3));
          if (iVar4 == 0) {
            local_24 = g_playSystem_00802A38->field_00E4;
            /* ST_CALLSITE[0049DD25]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar3,CASE_3,&local_24);
          }
          else {
            if (array == nullptr) {
              array = st::fn_006AE290(nullptr,1,2,1);
              local_28 = array;
            }

            st::fn_006AE1C0(array,local_c);
          }
        }
        local_2c = local_2c + 1;
      } while ((int)local_2c < (int)local_20);
    }
    /* ST_CALLSITE[0049DD6C]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_20)), (uint8_t)(pSVar2->field_0024)),
               &local_8->flags,&array->flags);
    st::fn_006AE110(local_8);
    if (array != nullptr) {
      st::fn_006AE110(array);
    }
    if (pSVar2->field_0168 != nullptr) {
      st::fn_006AE110(pSVar2->field_0168);
      pSVar2->field_0168 = nullptr;
    }
  }
  else if (g_playSystem_00802A38->field_00E4 % 5 != 0) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  index = 0;
  if (0 < (int)local_20) {
    do {

      st::fn_006ACC70(pSVar2->field_0029,index,local_c);
      if (STPiece<0,2>(local_c) != 0xffff) {
        /* ST_CALLSITE[0049DDCF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar3 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1));
        if (pSVar3 == nullptr) {

          iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xa34,0,0,st::mutable_c_string("%s")
                                     ,"STGroupBoatC::GrpGuard NULL");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0xa35);
        }
        /* ST_CALLSITE[0049DE1A]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
        iVar4 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar3));
        /* ST_CALLSITE[0049DE28]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
        if ((iVar4 == 5) || (uVar5 = st::fn_00404DF9(pSVar3,CASE_5), uVar5 == 1)) break;
      }
      index = index + 1;
    } while ((int)index < (int)local_20);
  }
  if ((local_20 != 0) && (index != local_20)) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

// 0049DFA0 STGroupBoatC::GrpLoadObj
#line 4 "decomp/ST.exe/functions/0049DFA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpLoadObj
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498299 -> read as EAX on
   every CFG path | 00497E00 @ 004982A6 -> read as EAX on every CFG path | 00497E00 @ 004985C6 ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049DFA0(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  int iVar8_mg1;
  dword dVar3;
  DArrayTy *pDVar4;
  DArrayTy *array;
  uint uVar5;
  int iVar7;
  int iVar6;
  STBoatC *pSVar7;
  uint uVar9;
  InternalExceptionFrame local_84;
  uint local_40;
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  uint local_36;
  STGroupBoatC *local_30;
  int local_2c;
  int local_28;
  DArrayTy *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  DArrayTy *local_14;
  STBoatC *local_10;
  byte local_c [4];
  STBoatC *local_8;

  local_10 = (STBoatC *)this->field_0029->count;
  local_14 = nullptr;
  local_24 = nullptr;
  local_28 = 0;
  local_2c = 0;
  local_18 = 2;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_30 = this;

  iVar3 = st::fn_0072D7F0(local_84.jumpBuffer,0);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_84.previous;
    if (iVar3 == -0x5001fff7) {
      return local_18;
    }

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xaa0,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpLoadObj");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xaa1);
    return -1;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_0049e26d;
  memset(&local_30->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  local_30->field_0065 = 0;

  iVar8_mg1 = st::fn_006E62D0
                        (g_playSystem_00802A38,local_30->field_0178,reinterpret_cast<int *>(&local_8));
  if (iVar8_mg1 == -4) {
    return 0;
  }
  /* ST_CALLSITE[0049E058]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
  st::fn_00405F0B
            (reinterpret_cast<STFishC *>(local_8),reinterpret_cast<short *>(&pSVar2->field_02A3),reinterpret_cast<short *>(&pSVar2->field_02A5),
             reinterpret_cast<short *>(&pSVar2->field_0x2a7));
  local_20 = 0;
  *(int *)&pSVar2->field_0x2a9 = local_8->field_0018;
  local_40 = g_playSystem_00802A38->field_00E4;
  pSVar7 = local_8;
  array = local_24;
  local_1c = local_40;
  if (0 < (int)local_10) {
    do {

      st::fn_006ACC70(pSVar2->field_0029,local_20,local_c);
      if (STPiece<0,2>(local_c) != 0xffff) {
        local_8 = (STBoatC *)
                  /* ST_CALLSITE[0049E0B8]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                  st::fn_004028BA
                            (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
        if (local_8 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0xa5b);
        }
        /* ST_CALLSITE[0049E0E5]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
        iVar6 = local_8->sub_004838B0();
        if (iVar6 != 0) {

          iVar6 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(local_8));
          if (iVar6 == 0) {
            /* ST_CALLSITE[0049E108]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
            dVar3 = local_8->sub_0045EEE0();
            if ((((dVar3 != 7) && (dVar3 != 0x13)) && (dVar3 != 0x1b)) ||
               /* ST_CALLSITE[0049E11D]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
               (iVar6 = st::fn_00402608(reinterpret_cast<STGameObjC *>(local_8)), iVar6 != 0)) {
              /* ST_CALLSITE[0049E184]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(local_8,CASE_3,&local_1c);
              goto LAB_0049e1aa;
            }
            local_3c = pSVar2->field_02A3;
            local_3a = pSVar2->field_02A5;
            local_38 = *(undefined2 *)&pSVar2->field_0x2a7;
            local_36 = *(undefined4 *)&pSVar2->field_0x2a9;
            /* ST_CALLSITE[0049E155]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(local_8,CASE_F,&local_40);
            pDVar4 = local_14;
            if (local_14 == nullptr) {
              pDVar4 = st::fn_006AE290(nullptr,1,2,1);
              local_14 = pDVar4;
            }
          }
          else {
            pDVar4 = array;
            if (array == nullptr) {
              array = st::fn_006AE290(nullptr,1,2,1);
              pDVar4 = array;
              local_24 = array;
            }
          }

          st::fn_006AE1C0(pDVar4,local_c);
        }
      }
LAB_0049e1aa:
      local_20 = local_20 + 1;
      pSVar7 = local_10;
    } while ((int)local_20 < (int)local_10);
  }
  pDVar4 = local_14;
  if (local_14 == nullptr) {
LAB_0049e1de:
    if (array != nullptr) {
      local_10 = (STBoatC *)array->count;
      uVar9 = 0;
      if (0 < (int)local_10) {
        do {

          st::fn_006ACC70(array,uVar9,local_c);
          /* ST_CALLSITE[0049E20B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          local_8 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1));
          /* ST_CALLSITE[0049E21B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(local_8,CASE_3,&local_1c);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_10);
      }
      local_18 = 0;
    }
    pDVar4 = local_14;
    if (local_14 != nullptr) goto LAB_0049e241;
    if (array == nullptr) {
      local_18 = 0;
    }
LAB_0049e23d:
    if (pDVar4 != nullptr) goto LAB_0049e241;
  }
  else {
    if (array != nullptr) {
      /* ST_CALLSITE[0049E1D3]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      st::fn_00403D9B
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(pSVar7), (uint8_t)(pSVar2->field_0024)),
                 &local_14->flags,&array->flags);
      goto LAB_0049e23d;
    }
    if (local_14 == nullptr) goto LAB_0049e1de;
LAB_0049e241:
    st::fn_006AE110(pDVar4);
  }
  if (array != nullptr) {
    st::fn_006AE110(array);
  }
  st::fn_006A5E40
            (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xa86);
LAB_0049e26d:
  if (g_playSystem_00802A38->field_00E4 % 0x14 == 0) {
    uVar9 = 0;
    if (0 < (int)local_10) {
      do {

        st::fn_006ACC70(pSVar2->field_0029,uVar9,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          local_8 = (STBoatC *)
                    /* ST_CALLSITE[0049E2BF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                    st::fn_004028BA
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
          if (local_8 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xa8e);
          }
          /* ST_CALLSITE[0049E2ED]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar6 = local_8->sub_004838B0();
          if ((iVar6 != 0) &&
             /* ST_CALLSITE[0049E2FC]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (((dVar3 = local_8->sub_0045EEE0(), dVar3 == 7 || (dVar3 == 0x13)) ||
              (dVar3 == 0x1b)))) {
            local_28 = 1;
            /* ST_CALLSITE[0049E318]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
            iVar6 = st::fn_00402608(reinterpret_cast<STGameObjC *>(local_8));
            if (iVar6 == *(int *)&pSVar2->field_0x2a9) {
              local_18 = 0;
              st::fn_006A5E40
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xa95);
            }
            /* ST_CALLSITE[0049E346]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar6 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(local_8));
            /* ST_CALLSITE[0049E355]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            if ((iVar6 == 0xf) || (uVar5 = st::fn_00404DF9(local_8,CASE_F), uVar5 == 1)) {
              local_2c = 1;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)local_10);
    }
    if ((local_28 == 0) || (local_2c == 0)) {
      local_18 = 0;
    }
  }
  g_currentExceptionFrame = local_84.previous;
  return local_18;
}

// 0049E510 STGroupBoatC::GrpUnLoadObj
#line 4 "decomp/ST.exe/functions/0049E510/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpUnLoadObj */

uint * __thiscall st::fn_0049E510(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar3;
  dword dVar4;
  DArrayTy *pDVar5;
  uint uVar6;
  int iVar8;
  uint *puVar7;
  int iVar9;
  uint uVar10;
  DArrayTy *array;
  InternalExceptionFrame local_78;
  uint local_34;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  STGroupBoatC *local_28;
  int local_24;
  uint local_20;
  DArrayTy *local_1c;
  uint local_18;
  dword local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  byte local_8 [4];
  local_14 = this->field_0029->count;
  local_10 = nullptr;
  local_c = nullptr;
  local_24 = 0;
  local_1c = (DArrayTy *)0x2;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_28 = this;

  iVar3 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  pSVar2 = local_28;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar3 == -0x5001fff7) {
      return &local_1c->flags;
    }

    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb01,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpUnLoadObj");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb02);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_0049e7c1;
  memset(&local_28->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  local_30 = local_28->field_017C;
  local_28->field_0065 = 0;
  local_28->field_02AD = local_30;
  local_2e = local_28->field_017E;
  local_28->field_02AF = local_2e;
  local_2c = local_28->field_0180;
  local_28->field_02B1 = local_2c;
  local_34 = g_playSystem_00802A38->field_00E4;
  local_20 = 0;
  local_18 = local_34;
  if (0 < (int)local_14) {
    do {

      st::fn_006ACC70(pSVar2->field_0029,local_20,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        pSVar3 = (STBoatC *)
                 /* ST_CALLSITE[0049E602]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 st::fn_004028BA
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (pSVar3 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0xabe);
        }
        /* ST_CALLSITE[0049E62C]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
        iVar9 = pSVar3->sub_004838B0();
        if (iVar9 != 0) {
          /* ST_CALLSITE[0049E63E]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar4 = pSVar3->sub_0045EEE0();
          if ((((dVar4 == 7) || (dVar4 == 0x13)) || (dVar4 == 0x1b)) &&
             /* ST_CALLSITE[0049E652]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
             (iVar9 = st::fn_00402608(reinterpret_cast<STGameObjC *>(pSVar3)), iVar9 != 0)) {
            /* ST_CALLSITE[0049E663]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar3,CASE_10,&local_34);
            if (((pSVar2->field_02AD != -1) || (pSVar2->field_02AF != -1)) ||
               (pSVar2->field_02B1 != -1)) {
              pDVar5 = local_10;
              if (local_10 == nullptr) {
                pDVar5 = st::fn_006AE290(nullptr,1,2,1);
                local_10 = pDVar5;
              }
LAB_0049e6f6:

              st::fn_006AE1C0(pDVar5,local_8);
            }
          }
          else {

            iVar9 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar3));
            if (iVar9 == 0) {
              /* ST_CALLSITE[0049E6B6]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(pSVar3,CASE_3,&local_18);
            }
            else if (((pSVar2->field_02AD != -1) || (pSVar2->field_02AF != -1)) ||
                    (pSVar2->field_02B1 != -1)) {
              pDVar5 = local_c;
              if (local_c == nullptr) {
                pDVar5 = st::fn_006AE290(nullptr,1,2,1);
                local_c = pDVar5;
              }
              goto LAB_0049e6f6;
            }
          }
        }
      }
      local_20 = local_20 + 1;
    } while ((int)local_20 < (int)local_14);
  }
  array = local_c;
  pDVar5 = local_10;
  if ((local_10 == nullptr) || (local_c == nullptr)) {
    if (local_10 == nullptr) {
      if (local_c != nullptr) {
        dVar4 = local_c->count;
        uVar10 = 0;
        local_14 = dVar4;
        if (0 < (int)dVar4) {
          do {
            /* ST_CALLSITE[0049E74C]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
            st::fn_006ACC70(local_c,uVar10,local_8);
            /* ST_CALLSITE[0049E761]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar3 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1));
            /* ST_CALLSITE[0049E76E]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar3,CASE_3,&local_18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)dVar4);
        }
        local_1c = nullptr;
      }
      pDVar5 = local_10;
      array = local_c;
      if (local_10 == nullptr) {
        if (local_c == nullptr) {
          local_1c = local_c;
        }
        goto LAB_0049e790;
      }
    }
LAB_0049e794:
    st::fn_006AE110(pDVar5);
  }
  else {
    /* ST_CALLSITE[0049E728]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_14)), (uint8_t)(pSVar2->field_0024)),
               &local_10->flags,&local_c->flags);
LAB_0049e790:
    if (pDVar5 != nullptr) goto LAB_0049e794;
  }
  if (array != nullptr) {
    st::fn_006AE110(array);
  }
  st::fn_006A5E40
            (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xae9);
LAB_0049e7c1:
  uVar10 = 0;
  if (g_playSystem_00802A38->field_00E4 % 0x32 == 0) {
    if (0 < (int)local_14) {
      do {

        st::fn_006ACC70(pSVar2->field_0029,uVar10,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar3 = (STBoatC *)
                   /* ST_CALLSITE[0049E80C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar3 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xaf1);
          }
          /* ST_CALLSITE[0049E836]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar9 = pSVar3->sub_004838B0();
          if ((iVar9 != 0) &&
             /* ST_CALLSITE[0049E844]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             ((((dVar4 = pSVar3->sub_0045EEE0(), dVar4 == 7 || (dVar4 == 0x13)) ||
               (dVar4 == 0x1b)) &&
              /* ST_CALLSITE[0049E858]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
              ((iVar9 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar3)), iVar9 == 0x10 ||
               /* ST_CALLSITE[0049E866]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
               (uVar6 = st::fn_00404DF9(pSVar3,CASE_10), uVar6 == 1)))))) {
            local_24 = 1;
            break;
          }
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)local_14);
    }
    if (local_24 == 0) {
      local_1c = nullptr;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return &local_1c->flags;
}

// 0049EA00 STGroupBoatC::SetMine
#line 4 "decomp/ST.exe/functions/0049EA00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SetMine
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498307 -> read as EAX on
   every CFG path | 00497E00 @ 00498314 -> read as EAX on every CFG path | 00497E00 @ 004985E2 ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049EA00(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *pSVar3;
  int iVar3;
  STBoatC *pSVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar9;
  STBoatC_CmdToObj_param_1Enum SVar10;
  uint *puVar11;
  InternalExceptionFrame local_6c;
  uint local_28;
  ushort local_24;
  ushort local_22;
  short local_20;
  STGroupBoatC *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  dword local_c;
  byte local_8 [4];
  local_c = this->field_0029->count;
  local_18 = 2;
  local_14 = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_1c = this;

  iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  pSVar3 = local_1c;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_1c->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      uVar9 = 0;
      local_1c->field_0065 = 0;
      uVar2 = local_1c->field_0184;
      local_1c->field_02B3 = local_1c->field_0182;
      local_1c->field_02B5 = uVar2;
      *(undefined4 *)&local_1c->field_0x2b7 = local_1c->field_0186;
      local_1c->field_02BB = local_1c->field_018A;
      local_24 = local_1c->field_02B3;
      local_22 = local_1c->field_02B5;
      local_28 = g_playSystem_00802A38->field_00E4;
      local_10 = local_28;
      if (0 < (int)local_c) {
        do {

          st::fn_006ACC70(pSVar3->field_0029,uVar9,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            /* ST_CALLSITE[0049EAE6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1));
            if (pSVar4 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb1f);
            }
            if (*(int *)&pSVar3->field_0x2b9 == -1) {
              if (pSVar4->field_07B6 == 0) goto LAB_0049eb44;
LAB_0049eb2a:
              if (pSVar4->field_07BE < 1) goto LAB_0049eb44;
              local_20 = pSVar4->field_004B;
              puVar11 = &local_28;
              SVar10 = CASE_7;
            }
            else {
              if (pSVar4->field_07B6 == *(int *)&pSVar3->field_0x2b9) goto LAB_0049eb2a;
LAB_0049eb44:
              puVar11 = &local_10;
              SVar10 = CASE_3;
            }
            /* ST_CALLSITE[0049EB4C]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,SVar10,puVar11);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_c);
      }
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0xb3c);
    }
    if (g_playSystem_00802A38->field_00E4 % 0x1e == 5) {
      uVar9 = 0;
      if (0 < (int)local_c) {
        do {

          st::fn_006ACC70(pSVar3->field_0029,uVar9,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            /* ST_CALLSITE[0049EBC3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1));
            if (pSVar4 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb43);
            }
            /* ST_CALLSITE[0049EBEB]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar7 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar4));
            /* ST_CALLSITE[0049EBF9]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            if ((iVar7 == 7) || (uVar5 = st::fn_00404DF9(pSVar4,CASE_7), uVar5 == 1)) {
              local_14 = local_14 + 1;
              break;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_c);
      }
      if (local_14 == 0) {
        local_18 = 0;
      }
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  else {
    g_currentExceptionFrame = local_6c.previous;
    if (iVar3 != -0x5001fff7) {

      iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb4c,0,iVar3,st::mutable_c_string("%s")
                                 ,"STGroupBoatC::SetMine");
      if (iVar6 == 0) {
        st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb4d);
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return local_18;
}

// 0049ED40 STGroupBoatC::DCBomb
#line 4 "decomp/ST.exe/functions/0049ED40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DCBomb
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 0049833E -> read as EAX on
   every CFG path | 00497E00 @ 0049834B -> read as EAX on every CFG path | 00497E00 @ 004985F0 ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049ED40(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *pSVar3;
  DArrayTy *array;
  int iVar3;
  STBoatC *pSVar4;
  DArrayTy *array_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint index;
  InternalExceptionFrame local_78;
  uint local_34;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  STGroupBoatC *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  DArrayTy *local_14;
  dword local_10;
  DArrayTy *local_c;
  byte local_8 [4];
  local_10 = this->field_0029->count;
  local_c = nullptr;
  local_14 = nullptr;
  local_24 = 2;
  local_18 = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_28 = this;

  iVar3 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  pSVar3 = local_28;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_28->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      local_28->field_0065 = 0;
      uVar2 = local_28->field_018E;
      local_20 = 0;
      local_28->field_02BD = local_28->field_018C;
      local_28->field_02BF = uVar2;
      local_28->field_02C1 = local_28->field_0190;
      local_30 = local_28->field_02BD;
      local_34 = g_playSystem_00802A38->field_00E4;
      local_2c = local_28->field_02C1;
      local_2e = local_28->field_02BF;
      array_00 = local_14;
      local_1c = local_34;
      if (0 < (int)local_10) {
        do {

          st::fn_006ACC70(pSVar3->field_0029,local_20,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            /* ST_CALLSITE[0049EE36]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1));
            if (pSVar4 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb6b);
            }
            if ((pSVar4->field_06F7 == CASE_4) && (0 < pSVar4->field_07BE)) {
              if (array_00 == nullptr) {
                array_00 = st::fn_006AE290(nullptr,1,2,1);
                local_14 = array_00;
              }

              st::fn_006AE1C0(array_00,local_8);
              /* ST_CALLSITE[0049EE95]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(pSVar4,CASE_A,&local_34);
            }
            else {

              iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
              if (iVar7 == 0) {
                /* ST_CALLSITE[0049EEAF]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                st::fn_00402126(pSVar4,CASE_3,&local_1c);
              }
              else {
                if (local_c == nullptr) {
                  local_c = st::fn_006AE290(nullptr,1,2,1);
                }

                st::fn_006AE1C0(local_c,local_8);
              }
            }
          }
          local_20 = local_20 + 1;
        } while ((int)local_20 < (int)local_10);
      }
      array = local_c;
      /* ST_CALLSITE[0049EEFB]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      st::fn_00403D9B
                (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint8_t)(pSVar3->field_0024)),
                 &array_00->flags,&local_c->flags);
      if (array_00 != nullptr) {
        st::fn_006AE110(array_00);
      }
      if (array != nullptr) {
        st::fn_006AE110(array);
      }
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0xb84);
    }
    index = 0;
    if (g_playSystem_00802A38->field_00E4 % 0x1e == 10) {
      if (0 < (int)local_10) {
        do {

          st::fn_006ACC70(pSVar3->field_0029,index,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            /* ST_CALLSITE[0049EF7A]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1));
            if (pSVar4 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb8b);
            }
            /* ST_CALLSITE[0049EFA2]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar7 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar4));
            /* ST_CALLSITE[0049EFB0]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            if ((iVar7 == 10) || (uVar5 = st::fn_00404DF9(pSVar4,CASE_A), uVar5 == 1)) {
              local_18 = local_18 + 1;
              break;
            }
          }
          index = index + 1;
        } while ((int)index < (int)local_10);
      }
      if (local_18 == 0) {
        local_24 = 0;
      }
    }
    g_currentExceptionFrame = local_78.previous;
  }
  else {
    g_currentExceptionFrame = local_78.previous;
    if (iVar3 != -0x5001fff7) {

      iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb94,0,iVar3,st::mutable_c_string("%s")
                                 ,"STGroupBoatC::DCBomb");
      if (iVar6 == 0) {
        st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xb95);
        return -1;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return local_24;
}

// 0049F100 STGroupBoatC::Capture
#line 4 "decomp/ST.exe/functions/0049F100/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Capture
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498375 -> read as EAX on
   every CFG path | 00497E00 @ 00498382 -> read as EAX on every CFG path | 00497E00 @ 004985FE ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049F100(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  DArrayTy *array;
  int iVar3;
  STBoatC *pSVar3;
  dword dVar4;
  DArrayTy *array_00;
  STGameObjC *this_00;
  int iVar7;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *puVar8;
  byte *puVar9;
  STBoatC_CmdToObj_param_1Enum SVar10;
  uint *puVar11;
  uint local_9c [5];
  int local_87;
  InternalExceptionFrame local_7c;
  STGroupBoatC *local_38;
  STBoatC *local_34;
  uint local_30;
  byte local_2c;
  ushort local_2b;
  uint local_29;
  int local_24;
  DArrayTy *local_20;
  int local_1c;
  DArrayTy *local_18;
  uint local_14;
  uint local_10;
  dword local_c;
  byte local_8 [4];
  local_c = this->field_0029->count;
  local_18 = nullptr;
  local_20 = nullptr;
  local_1c = 0;
  local_24 = 2;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_38 = this;

  iVar3 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
  pSVar2 = local_38;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_7c.previous;

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xbf4,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::Capture");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xbf5);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_38->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_38->field_0065 = 0;
    local_10 = 0;
    *(undefined4 *)&local_38->field_0x2c3 = *(undefined4 *)&local_38->field_0x192;
    *(undefined2 *)&local_38->field_0x2c7 = local_38->field_0196;
    local_38->field_0x2c9 = local_38->field_0198;
    local_2c = local_38->field_0x192;
    local_2b = *(undefined2 *)&local_38->field_0x193;
    *(undefined4 *)&local_38->field_0x2ca = 0;
    local_30 = g_playSystem_00802A38->field_00E4;
    local_29 = *(undefined4 *)&local_38->field_0x195;
    array_00 = local_20;
    local_14 = local_30;
    if (local_c != 0) {
      uVar6 = 0;
      do {

        st::fn_006ACC70(pSVar2->field_0029,uVar6,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar3 = (STBoatC *)
                   /* ST_CALLSITE[0049F203]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar3 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xbb4);
          }
          /* ST_CALLSITE[0049F22D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar4 = pSVar3->sub_0045EEE0();
          /* ST_CALLSITE[0049F239]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar4 == 6) || (dVar4 = pSVar3->sub_0045EEE0(), dVar4 == 0x12)) ||
             /* ST_CALLSITE[0049F245]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (dVar4 = pSVar3->sub_0045EEE0(), dVar4 == 0x22)) {
            if (array_00 == nullptr) {
              array_00 = st::fn_006AE290(nullptr,1,2,1);
              local_20 = array_00;
            }

            st::fn_006AE1C0(array_00,local_8);
            puVar11 = &local_30;
            SVar10 = CASE_9;
          }
          else {

            iVar5 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar3));
            if (iVar5 != 0) {
              if (local_18 == nullptr) {
                local_18 = st::fn_006AE290(nullptr,1,2,1);
              }

              st::fn_006AE1C0(local_18,local_8);
              goto LAB_0049f2b2;
            }
            puVar11 = &local_14;
            SVar10 = CASE_3;
          }
          /* ST_CALLSITE[0049F2AD]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar3,SVar10,puVar11);
        }
LAB_0049f2b2:
        local_10 = local_10 + 1;
        uVar6 = local_10 & 0xffff;
      } while (uVar6 < local_c);
    }
    array = local_18;
    /* ST_CALLSITE[0049F2DE]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(pSVar2->field_0024)),
               &array_00->flags,&local_18->flags);
    if (array_00 != nullptr) {
      st::fn_006AE110(array_00);
    }
    if (array != nullptr) {
      st::fn_006AE110(array);
    }
  }
  uVar6 = 0;
  if (*(int *)&pSVar2->field_0x2ca == 0) {
    /* ST_CALLSITE[0049F31C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    this_00 = st::fn_004028BA
                        (g_allPlayers_007FA174,pSVar2->field_0x2c3,*(ushort *)&pSVar2->field_0x2c4,
                         CASE_1);
    if (((this_00 == nullptr) || (this_00->field_0018 != *(int *)&pSVar2->field_0x2c6)) ||
       /* ST_CALLSITE[0049F33B]: CALL dword ptr [EDX + 0x108]; [STIndirectCallsiteApplier] exact slot 0x108; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
       (iVar5 = this_00->vfunc_108((int)pSVar2->field_0024), iVar5 == 0)) {
      *(undefined4 *)&pSVar2->field_0x2ca = 1;
      local_10 = 0;
      local_14 = g_playSystem_00802A38->field_00E4;
      if (0 < (int)local_c) {
        uVar6 = 0;
        do {

          st::fn_006ACC70(pSVar2->field_0029,uVar6,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            pSVar3 = (STBoatC *)
                     /* ST_CALLSITE[0049F394]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                     st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
            local_34 = pSVar3;
            if (pSVar3 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xbda);
            }
            /* ST_CALLSITE[0049F3BE]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar5 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar3));
            if (iVar5 == 9) {
              puVar8 = reinterpret_cast<byte *>(&pSVar3->field_05FC);
              puVar9 = reinterpret_cast<byte *>((local_9c));
              memmove(puVar9, puVar8, 0x1d); /* compiler REP MOVS byte copy */
              pSVar3 = local_34;
              if (3 < local_87) goto LAB_0049f3f5;
            }
            /* ST_CALLSITE[0049F3F0]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar3,CASE_3,&local_14);
          }
LAB_0049f3f5:
          local_10 = local_10 + 1;
          uVar6 = local_10 & 0xffff;
          if ((int)local_c <= (int)uVar6) {
            g_currentExceptionFrame = local_7c.previous;
            return local_24;
          }
        } while( true );
      }
    }
  }
  else if (g_playSystem_00802A38->field_00E4 % 0x14 == 5) {
    if (0 < (int)local_c) {
      uVar7 = 0;
      do {

        st::fn_006ACC70(pSVar2->field_0029,uVar7,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          /* ST_CALLSITE[0049F46A]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar3 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1));
          if (pSVar3 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xbeb);
          }
          /* ST_CALLSITE[0049F492]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
          iVar5 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar3));
          /* ST_CALLSITE[0049F4A0]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
          if ((iVar5 == 9) || (uVar7 = st::fn_00404DF9(pSVar3,CASE_9), uVar7 == 1)) {
            local_1c = local_1c + 1;
            break;
          }
        }
        uVar6 = uVar6 + 1;
        uVar7 = uVar6 & 0xffff;
      } while ((int)uVar7 < (int)local_c);
    }
    if (local_1c == 0) {
      local_24 = 0;
    }
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_24;
}

// 0049F640 STGroupBoatC::Recharge
#line 4 "decomp/ST.exe/functions/0049F640/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Recharge
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004983AC -> read as EAX on
   every CFG path | 00497E00 @ 004983B9 -> read as EAX on every CFG path | 00497E00 @ 0049860C ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049F640(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *pSVar3;
  int iVar3;
  STBoatC *pSVar4;
  int iVar6;
  int iVar5;
  uint uVar6;
  dword index;
  InternalExceptionFrame local_68;
  uint local_24;
  uint local_20;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  STGroupBoatC *local_14;
  int local_10;
  byte local_c [4];
  dword local_8;

  local_8 = this->field_0029->count;
  uVar6 = 0;
  local_10 = 2;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;

  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  pSVar3 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      local_14->field_0065 = 0;
      local_14->field_02CE = local_14->field_0199;
      uVar2 = local_14->field_019F;
      local_14->field_02D2 = local_14->field_019D;
      local_14->field_02D4 = uVar2;
      local_14->field_02D6 = local_14->field_01A1;
      local_20 = local_14->field_02CE;
      local_24 = g_playSystem_00802A38->field_00E4;
      local_1c = local_14->field_02D2;
      local_18 = local_14->field_02D6;
      local_1a = local_14->field_02D4;
      if (0 < (int)local_8) {
        do {

          st::fn_006ACC70(pSVar3->field_0029,uVar6,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049F72B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1));
            if (pSVar4 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xc11);
            }
            /* ST_CALLSITE[0049F758]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,CASE_16,&local_24);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)local_8);
      }
    }
    if (g_playSystem_00802A38->field_00E4 % 0x19 == 7) {
      index = 0;
      if (0 < (int)local_8) {
        do {

          st::fn_006ACC70(pSVar3->field_0029,index,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049F7B0]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1));
            if (pSVar4 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xc1c);
            }
            /* ST_CALLSITE[0049F7D8]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar5 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar4));
            if (iVar5 == 0x16) break;
            /* ST_CALLSITE[0049F7E6]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            uVar6 = st::fn_00404DF9(pSVar4,CASE_16);
            if (uVar6 == 1) break;
          }
          index = index + 1;
        } while ((int)index < (int)local_8);
      }
      if (index == local_8) {
        local_10 = 0;
      }
    }
    g_currentExceptionFrame = local_68.previous;
  }
  else {
    g_currentExceptionFrame = local_68.previous;
    if (iVar3 != -0x5001fff7) {

      iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xc25,0,iVar3,st::mutable_c_string("%s")
                                 ,"STGroupBoatC::Recharge");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xc26);
      return -1;
    }
  }
  return local_10;
}

// 0049F900 STGroupBoatC::Teleport
#line 4 "decomp/ST.exe/functions/0049F900/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Teleport
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004983E3 -> read as EAX on
   every CFG path | 00497E00 @ 004983F0 -> read as EAX on every CFG path | 00497E00 @ 0049861A ->
   read as EAX on every CFG path */

int __thiscall st::fn_0049F900(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *pSVar3;
  int iVar3;
  STBoatC *pSVar4;
  int iVar6;
  int iVar5;
  uint uVar6;
  dword index;
  InternalExceptionFrame local_6c;
  uint local_28;
  uint local_24;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  STGroupBoatC *local_14;
  int local_10;
  byte local_c [4];
  dword local_8;

  local_8 = this->field_0029->count;
  uVar6 = 0;
  local_10 = 2;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;

  iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  pSVar3 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      local_14->field_0065 = 0;
      local_14->field_02D8 = local_14->field_01A3;
      uVar2 = local_14->field_01A9;
      local_14->field_02DC = local_14->field_01A7;
      local_14->field_02DE = uVar2;
      uVar2 = local_14->field_01AD;
      local_14->field_02E0 = local_14->field_01AB;
      local_14->field_02E2 = uVar2;
      uVar2 = local_14->field_01B1;
      local_14->field_02E4 = local_14->field_01AF;
      local_14->field_02E6 = uVar2;
      local_24 = local_14->field_02D8;
      local_28 = g_playSystem_00802A38->field_00E4;
      local_20 = local_14->field_02DC;
      local_1c = local_14->field_02E0;
      local_16 = local_14->field_02E6;
      local_1e = local_14->field_02DE;
      local_1a = local_14->field_02E2;
      local_18 = local_14->field_02E4;
      if (0 < (int)local_8) {
        do {

          st::fn_006ACC70(pSVar3->field_0029,uVar6,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049FA10]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1));
            if (pSVar4 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xc46);
            }
            /* ST_CALLSITE[0049FA3D]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,CASE_15,&local_28);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)local_8);
      }
    }
    if (g_playSystem_00802A38->field_00E4 % 0x19 == 1) {
      index = 0;
      if (0 < (int)local_8) {
        do {

          st::fn_006ACC70(pSVar3->field_0029,index,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049FA95]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1));
            if (pSVar4 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xc51);
            }
            /* ST_CALLSITE[0049FABD]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar5 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar4));
            if (iVar5 == 0x15) break;
            /* ST_CALLSITE[0049FACB]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            uVar6 = st::fn_00404DF9(pSVar4,CASE_15);
            if (uVar6 == 1) break;
          }
          index = index + 1;
        } while ((int)index < (int)local_8);
      }
      if (index == local_8) {
        local_10 = 0;
      }
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  else {
    g_currentExceptionFrame = local_6c.previous;
    if (iVar3 != -0x5001fff7) {

      iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xc5a,0,iVar3,st::mutable_c_string("%s")
                                 ,"STGroupBoatC::Teleport");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xc5b);
      return -1;
    }
  }
  return local_10;
}

// 0049FBF0 STGroupBoatC::Bring
#line 4 "decomp/ST.exe/functions/0049FBF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Bring */

uint * __thiscall st::fn_0049FBF0(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *pSVar3;
  int iVar3;
  STBoatC *pSVar4;
  dword dVar5;
  DArrayTy *pDVar6;
  int iVar8;
  uint *puVar7;
  int iVar9;
  DArrayTy *array;
  uint uVar11;
  InternalExceptionFrame local_70;
  uint local_2c;
  ushort local_28;
  ushort local_26;
  ushort local_24;
  STGroupBoatC *local_20;
  DArrayTy *local_1c;
  uint local_18;
  DArrayTy *local_14;
  dword local_10;
  DArrayTy *local_c;
  byte local_8 [4];
  local_10 = this->field_0029->count;
  local_14 = nullptr;
  local_c = nullptr;
  local_1c = (DArrayTy *)0x2;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_20 = this;

  iVar3 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  pSVar3 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar3 == -0x5001fff7) {
      return &local_1c->flags;
    }

    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xcb0,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::Bring");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xcb1);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 0) && (param_1 != 1)) goto LAB_0049fe51;
  memset(&local_20->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  uVar11 = 0;
  local_20->field_0065 = 0;
  uVar2 = local_20->field_01B5;
  local_20->field_02E8 = local_20->field_01B3;
  local_20->field_02EA = uVar2;
  local_20->field_02EC = local_20->field_01B7;
  local_28 = local_20->field_02E8;
  local_26 = local_20->field_02EA;
  local_2c = g_playSystem_00802A38->field_00E4;
  local_24 = local_20->field_02EC;
  local_18 = local_2c;
  if (0 < (int)local_10) {
    do {

      st::fn_006ACC70(pSVar3->field_0029,uVar11,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        pSVar4 = (STBoatC *)
                 /* ST_CALLSITE[0049FCDF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 st::fn_004028BA
                           (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (pSVar4 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0xc79);
        }
        /* ST_CALLSITE[0049FD09]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
        dVar5 = pSVar4->sub_0045EEE0();
        /* ST_CALLSITE[0049FD15]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
        if (((dVar5 == 7) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x13)) ||
           /* ST_CALLSITE[0049FD21]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
           (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x1b)) {
          /* ST_CALLSITE[0049FD6B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,CASE_17,&local_2c);
          pDVar6 = local_14;
          if (local_14 == nullptr) {
            pDVar6 = st::fn_006AE290(nullptr,1,2,1);
            local_14 = pDVar6;
          }
        }
        else {

          iVar9 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
          if (iVar9 == 0) {
            /* ST_CALLSITE[0049FD3C]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,CASE_3,&local_18);
            goto LAB_0049fd94;
          }
          pDVar6 = local_c;
          if (local_c == nullptr) {
            pDVar6 = st::fn_006AE290(nullptr,1,2,1);
            local_c = pDVar6;
          }
        }

        st::fn_006AE1C0(pDVar6,local_8);
      }
LAB_0049fd94:
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_10);
  }
  array = local_c;
  pDVar6 = local_14;
  if ((local_14 == nullptr) || (local_c == nullptr)) {
    if (local_14 == nullptr) {
      if (local_c != nullptr) {
        dVar5 = local_c->count;
        uVar11 = 0;
        local_10 = dVar5;
        if (0 < (int)dVar5) {
          do {
            /* ST_CALLSITE[0049FDDE]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__fastcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
            st::fn_006ACC70(local_c,uVar11,local_8);
            /* ST_CALLSITE[0049FDF3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1));
            /* ST_CALLSITE[0049FE00]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,CASE_3,&local_18);
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)dVar5);
        }
        local_1c = nullptr;
      }
      array = local_c;
      pDVar6 = local_14;
      if (local_14 == nullptr) {
        if (local_c == nullptr) {
          local_1c = local_c;
        }
        goto LAB_0049fe22;
      }
    }
LAB_0049fe26:
    st::fn_006AE110(pDVar6);
  }
  else {
    /* ST_CALLSITE[0049FDBA]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint8_t)(pSVar3->field_0024)),
               &local_14->flags,&local_c->flags);
LAB_0049fe22:
    if (pDVar6 != nullptr) goto LAB_0049fe26;
  }
  if (array != nullptr) {
    st::fn_006AE110(array);
  }
  st::fn_006A5E40
            (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xca0);
LAB_0049fe51:
  if (g_playSystem_00802A38->field_00E4 % 0x19 == 7) {
    dVar5 = 0;
    if (0 < (int)local_10) {
      do {

        st::fn_006ACC70(pSVar3->field_0029,dVar5,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          /* ST_CALLSITE[0049FE9B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1));
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xca7);
          }
          /* ST_CALLSITE[0049FEC3]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
          iVar9 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar4));
          /* ST_CALLSITE[0049FED1]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
          if ((iVar9 == 0x17) || (uVar11 = st::fn_00404DF9(pSVar4,CASE_17), uVar11 == 1))
          break;
        }
        dVar5 = dVar5 + 1;
      } while ((int)dVar5 < (int)local_10);
    }
    if (dVar5 == local_10) {
      local_1c = nullptr;
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return &local_1c->flags;
}

// 004A0040 STGroupBoatC::GrpDismant
#line 4 "decomp/ST.exe/functions/004A0040/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpDismant
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498451 -> read as EAX on
   every CFG path | 00497E00 @ 0049845E -> read as EAX on every CFG path | 00497E00 @ 00498636 ->
   read as EAX on every CFG path */

int __thiscall st::fn_004A0040(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar5;
  STGroupBoatC *pSVar6;
  DArrayTy *array;
  int iVar7;
  STBoatC *pSVar7;
  dword dVar8;
  DArrayTy *array_00;
  int iVar10;
  int iVar9;
  uint uVar10;
  uint uVar11;
  RecoveredRecordView_004B9D90_09AED060 *pRVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  uint *puVar15;
  InternalExceptionFrame local_78;
  uint local_34;
  short local_30;
  short local_2e;
  ushort local_2c;
  uint local_2a;
  STGroupBoatC *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  DArrayTy *local_14;
  dword local_10;
  DArrayTy *local_c;
  byte local_8 [4];
  local_10 = this->field_0029->count;
  local_c = nullptr;
  local_14 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_24 = this;

  iVar7 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  pSVar6 = local_24;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar7 == -0x5001fff7) {
      return 0;
    }

    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xd02,0,iVar7,st::mutable_c_string("%s"),
                                "STGroupBoatC::GrpDismant");
    if (iVar10 == 0) {
      st::fn_006A5E40(iVar7,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xd03);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_24->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar9 = 0;
    local_24->field_02F0 = local_24->field_01BB;
    local_24->field_0065 = 0;
    local_24->field_02EE = local_24->field_01B9;
    *(short *)&local_24->field_0x2f2 = local_24->field_01BD;
    if (g_worldGrid.sizeZ + -2 < (int)local_24->field_01BD) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0xcc7);
    }
    sVar1 = pSVar6->field_02EE;
    sVar2 = *(short *)&pSVar6->field_0x2f2;
    sVar3 = pSVar6->field_02F0;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pRVar13 = nullptr;
    }
    else {
      pRVar13 = reinterpret_cast<RecoveredRecordView_004B9D90_09AED060 *>(STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0]);
    }
    if (((pRVar13 == nullptr) ||
        (*(int *)&pRVar13->field_0x20 != 1000)) ||
       ((*(int *)&pRVar13->field_0x24 != (int)pSVar6->field_0024 ||

        (iVar9 = st::fn_0040141A(pRVar13), iVar9 == 0)))) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0xccc);
    }
    uVar5 = *(undefined2 *)&pRVar13->field_0x1a;
    local_1c = 0;
    *(undefined2 *)&pSVar6->field_0x2f4 = *(undefined2 *)&pRVar13->field_0x18;
    pSVar6->field_02F6 = uVar5;
    local_2e = pSVar6->field_02F0;
    local_34 = g_playSystem_00802A38->field_00E4;
    local_2c = *(undefined2 *)&pSVar6->field_0x2f2;
    uVar10 = STReplaceLowWord((uint32_t)(g_playSystem_00802A38), (uint16_t)(local_2c));
    local_30 = pSVar6->field_02EE;
    local_2a = *(undefined4 *)&pSVar6->field_0x2f4;
    array_00 = local_14;
    local_18 = local_34;
    if (local_10 != 0) {
      uVar10 = 0;
      do {

        st::fn_006ACC70(pSVar6->field_0029,uVar10,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar7 = (STBoatC *)
                   /* ST_CALLSITE[004A0228]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar7 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xcd4);
          }
          /* ST_CALLSITE[004A0251]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar8 = pSVar7->sub_0045EEE0();
          /* ST_CALLSITE[004A025D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar8 == 0xc) || (dVar8 = pSVar7->sub_0045EEE0(), dVar8 == 0x18))
             /* ST_CALLSITE[004A0269]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             || (dVar8 = pSVar7->sub_0045EEE0(), dVar8 == 0x1d)) {
            if (array_00 == nullptr) {
              array_00 = st::fn_006AE290(nullptr,1,2,1);
              local_14 = array_00;
            }

            st::fn_006AE1C0(array_00,local_8);
            puVar15 = &local_34;
            SVar14 = CASE_12;
          }
          else {

            iVar9 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar7));
            if (iVar9 != 0) {
              if (local_c == nullptr) {
                local_c = st::fn_006AE290(nullptr,1,2,1);
              }

              st::fn_006AE1C0(local_c,local_8);
              goto LAB_004a02d6;
            }
            puVar15 = &local_18;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A02D1]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar7,SVar14,puVar15);
        }
LAB_004a02d6:
        local_1c = local_1c + 1;
        uVar10 = local_1c & 0xffff;
      } while (uVar10 < local_10);
    }
    array = local_c;
    /* ST_CALLSITE[004A0302]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar10)), (uint8_t)(pSVar6->field_0024)),
               &array_00->flags,&local_c->flags);
    if (array_00 != nullptr) {
      st::fn_006AE110(array_00);
    }
    if (array != nullptr) {
      st::fn_006AE110(array);
    }
  }
  uVar10 = 0;
  local_1c = 2;
  if (g_playSystem_00802A38->field_00E4 % 0x1e == 0xc) {
    local_20 = 0;
    if (local_10 != 0) {
      uVar11 = 0;
      do {

        st::fn_006ACC70(pSVar6->field_0029,uVar11,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar7 = (STBoatC *)
                   /* ST_CALLSITE[004A0373]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar7 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xcf6);
          }
          /* ST_CALLSITE[004A039D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar8 = pSVar7->sub_0045EEE0();
          /* ST_CALLSITE[004A03A9]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((((dVar8 == 0xc) || (dVar8 = pSVar7->sub_0045EEE0(), dVar8 == 0x18))
               /* ST_CALLSITE[004A03B5]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
               || (dVar8 = pSVar7->sub_0045EEE0(), dVar8 == 0x1d)) &&
              /* ST_CALLSITE[004A03BF]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
              (iVar9 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar7)), iVar9 == 0x12)) ||
             /* ST_CALLSITE[004A03CD]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
             (uVar11 = st::fn_00404DF9(pSVar7,CASE_12), uVar11 == 1)) {
            local_20 = 1;
            break;
          }
        }
        uVar10 = uVar10 + 1;
        uVar11 = uVar10 & 0xffff;
      } while (uVar11 < local_10);
    }
    if (local_20 == 0) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return local_1c;
}

// 004A0590 STGroupBoatC::Scout
#line 4 "decomp/ST.exe/functions/004A0590/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Scout

   [STPrototypeApplier] Propagated return.
   Evidence: 004A0590 returns return of STGroupBoatC::Way3DGrpGetDistrPoint @ 004A0681 */

uint * __thiscall st::fn_004A0590(STGroupBoatC *this,int param_1)

{
  short *psVar1;
  short *psVar2;
  STGroupBoatC *pSVar4;
  int iVar5;
  DArrayTy *array;
  STBoatC *pSVar5;
  int iVar8;
  uint *puVar6;
  int iVar7;
  dword index;
  uint uVar9;
  InternalExceptionFrame local_80;
  uint local_3c;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort local_28;
  ushort local_24;
  ushort local_22;
  ushort local_20;
  DArrayTy *local_1c;
  STGroupBoatC *local_18;
  uint *local_14;
  DArrayTy *local_10;
  byte local_c [4];
  dword local_8;

  local_8 = this->field_0029->count;
  local_14 = (uint *)0x2;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_18 = this;

  iVar5 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  pSVar4 = local_18;
  if (iVar5 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      psVar1 = &local_18->field_0300;
      memset(&local_18->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      local_18->field_0065 = 0;
      psVar2 = &local_18->field_0302;
      local_18->field_02FA = local_18->field_01C1;
      local_18->field_02FC = local_18->field_01C3;
      local_18->field_02F8 = local_18->field_01BF;
      /* ST_CALLSITE[004A063B]: CALL 0x004019d8; direct=004019D8 STGroupBoatC::sub_0049A500 */
      st::fn_004019D8(local_18,reinterpret_cast<undefined2 *>(&local_18->field_02FE),reinterpret_cast<undefined2 *>(psVar1),reinterpret_cast<undefined2 *>(psVar2));
      /* ST_CALLSITE[004A066F]: CALL 0x00403bca; direct=00403BCA STGroupBoatC::Way3DGrpGetDistrPoint; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STGroupBoatC;pointer:/SubmarineTitans/Recovered/DArrayTy;/int;/int;/undefined4;/int;/int;/int */
      local_10 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00403BCA
                           (pSVar4,pSVar4->field_0029,(int)pSVar4->field_02FE,(int)*psVar1,
                            (int)*psVar2,(int)pSVar4->field_02F8,(int)pSVar4->field_02FA,
                            (int)pSVar4->field_02FC));
      if (local_10 == nullptr) {
        return nullptr;
      }
      array = (DArrayTy *)
              /* ST_CALLSITE[004A06B3]: CALL 0x00403bca; direct=00403BCA STGroupBoatC::Way3DGrpGetDistrPoint */
              st::fn_00403BCA
                        (pSVar4,pSVar4->field_0029,(int)pSVar4->field_02F8,(int)pSVar4->field_02FA,
                         (int)pSVar4->field_02FC,(int)pSVar4->field_02FE,(int)*psVar1,(int)*psVar2);
      local_1c = array;
      if (array == nullptr) {
        st::fn_006AE110(local_10);
        return nullptr;
      }
      uVar9 = 0;
      local_3c = g_playSystem_00802A38->field_00E4;
      if (0 < (int)local_8) {
        do {

          st::fn_006ACC70(local_10,uVar9,&local_24);

          st::fn_006ACC70(array,uVar9,&local_2c);

          st::fn_006ACC70(pSVar4->field_0029,uVar9,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[004A0730]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar5 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_c),CASE_1));
            if (pSVar5 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xd2a);
            }
            local_38 = local_24;
            local_36 = local_22;
            local_32 = local_2c;
            local_34 = local_20;
            local_30 = local_2a;
            local_2e = local_28;
            /* ST_CALLSITE[004A078E]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar5,CASE_8,&local_3c);
            array = local_1c;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_8);
      }
      st::fn_006AE110(local_10);
      st::fn_006AE110(array);
    }
    if (g_playSystem_00802A38->field_00E4 % 0x19 == 3) {
      index = 0;
      if (0 < (int)local_8) {
        do {

          st::fn_006ACC70(pSVar4->field_0029,index,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[004A07FC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar5 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_c),CASE_1));
            if (pSVar5 == nullptr) {
              st::fn_006A5E40
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xd3d);
            }
            /* ST_CALLSITE[004A0824]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar7 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(pSVar5));
            if (iVar7 == 8) break;
            /* ST_CALLSITE[004A0832]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            uVar9 = st::fn_00404DF9(pSVar5,CASE_8);
            if (uVar9 == 1) break;
          }
          index = index + 1;
        } while ((int)index < (int)local_8);
      }
      if (index == local_8) {
        local_14 = nullptr;
      }
    }
    g_currentExceptionFrame = local_80.previous;
  }
  else {
    g_currentExceptionFrame = local_80.previous;
    if (iVar5 != -0x5001fff7) {

      iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xd46,0,iVar5,st::mutable_c_string("%s")
                                 ,"STGroupBoatC::Scout");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xd47);
      return (uint *)0xffffffff;
    }
  }
  return local_14;
}

// 004A0990 STGroupBoatC::GrpRepSub
#line 4 "decomp/ST.exe/functions/004A0990/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepSub
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004984B9 -> read as EAX on
   every CFG path | 00497E00 @ 004984C6 -> read as EAX on every CFG path | 00497E00 @ 00498652 ->
   read as EAX on every CFG path */

int __thiscall st::fn_004A0990(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  int iVar8_mg1;
  dword dVar3;
  DArrayTy *pDVar4;
  DArrayTy *array;
  uint uVar5;
  int iVar7;
  int iVar6;
  STBoatC *pSVar7;
  uint uVar9;
  InternalExceptionFrame local_84;
  uint local_40;
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  uint local_36;
  STGroupBoatC *local_30;
  int local_2c;
  int local_28;
  DArrayTy *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  STBoatC *local_14;
  DArrayTy *local_10;
  byte local_c [4];
  STBoatC *local_8;

  local_14 = (STBoatC *)this->field_0029->count;
  local_10 = nullptr;
  local_24 = nullptr;
  local_28 = 0;
  local_2c = 0;
  local_1c = 2;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_30 = this;

  iVar3 = st::fn_0072D7F0(local_84.jumpBuffer,0);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_84.previous;
    if (iVar3 == -0x5001fff7) {
      return local_1c;
    }

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xda5,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::GrpRepSub");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xda6);
    return -1;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_004a0c5b;
  memset(&local_30->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  local_30->field_0065 = 0;

  iVar8_mg1 = st::fn_006E62D0
                        (g_playSystem_00802A38,local_30->field_01C5,reinterpret_cast<int *>(&local_8));
  if (iVar8_mg1 == -4) {
    return 0;
  }
  /* ST_CALLSITE[004A0A48]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
  st::fn_00405F0B
            (reinterpret_cast<STFishC *>(local_8),reinterpret_cast<short *>(&pSVar2->field_0304),reinterpret_cast<short *>(&pSVar2->field_0306),
             reinterpret_cast<short *>(&pSVar2->field_0x308));
  local_20 = 0;
  *(int *)&pSVar2->field_0x30a = local_8->field_0018;
  local_40 = g_playSystem_00802A38->field_00E4;
  pSVar7 = local_8;
  array = local_24;
  local_18 = local_40;
  if (0 < (int)local_14) {
    do {

      st::fn_006ACC70(pSVar2->field_0029,local_20,local_c);
      if (STPiece<0,2>(local_c) != 0xffff) {
        local_8 = (STBoatC *)
                  /* ST_CALLSITE[004A0AA8]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                  st::fn_004028BA
                            (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
        if (local_8 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0xd64);
        }
        /* ST_CALLSITE[004A0AD5]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
        iVar6 = local_8->sub_004838B0();
        if (iVar6 != 0) {

          iVar6 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(local_8));
          if (iVar6 == 0) {
            /* ST_CALLSITE[004A0AF8]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
            dVar3 = local_8->sub_0045EEE0();
            if ((dVar3 == 7) || (dVar3 == 0x13)) {
              /* ST_CALLSITE[004A0B1B]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
              iVar6 = st::fn_00402608(reinterpret_cast<STGameObjC *>(local_8));
              if (iVar6 == 0) {
                local_3a = pSVar2->field_0306;
                local_3c = pSVar2->field_0304;
                local_38 = *(undefined2 *)&pSVar2->field_0x308;
                local_36 = *(undefined4 *)&pSVar2->field_0x30a;
                /* ST_CALLSITE[004A0B53]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                st::fn_00402126(local_8,CASE_E,&local_40);
                pDVar4 = local_10;
                if (local_10 == nullptr) {
                  pDVar4 = st::fn_006AE290(nullptr,1,2,1);
                  local_10 = pDVar4;
                }
                goto LAB_004a0b93;
              }
            }
            else {
              /* ST_CALLSITE[004A0B0E]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(local_8,CASE_3,&local_18);
            }
          }
          else {
            pDVar4 = array;
            if (array == nullptr) {
              array = st::fn_006AE290(nullptr,1,2,1);
              pDVar4 = array;
              local_24 = array;
            }
LAB_004a0b93:

            st::fn_006AE1C0(pDVar4,local_c);
          }
        }
      }
      local_20 = local_20 + 1;
      pSVar7 = local_14;
    } while ((int)local_20 < (int)local_14);
  }
  pDVar4 = local_10;
  if (local_10 == nullptr) {
LAB_004a0bcc:
    if (array != nullptr) {
      local_14 = (STBoatC *)array->count;
      uVar9 = 0;
      if (0 < (int)local_14) {
        do {

          st::fn_006ACC70(array,uVar9,local_c);
          /* ST_CALLSITE[004A0BF9]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          local_8 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1));
          /* ST_CALLSITE[004A0C09]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(local_8,CASE_3,&local_18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_14);
      }
      local_1c = 0;
    }
    pDVar4 = local_10;
    if (local_10 != nullptr) goto LAB_004a0c2f;
    if (array == nullptr) {
      local_1c = 0;
    }
LAB_004a0c2b:
    if (pDVar4 != nullptr) goto LAB_004a0c2f;
  }
  else {
    if (array != nullptr) {
      /* ST_CALLSITE[004A0BC1]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      st::fn_00403D9B
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(pSVar7), (uint8_t)(pSVar2->field_0024)),
                 &local_10->flags,&array->flags);
      goto LAB_004a0c2b;
    }
    if (local_10 == nullptr) goto LAB_004a0bcc;
LAB_004a0c2f:
    st::fn_006AE110(pDVar4);
  }
  if (array != nullptr) {
    st::fn_006AE110(array);
  }
  st::fn_006A5E40
            (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xd8f);
LAB_004a0c5b:
  pSVar7 = local_14;
  if (g_playSystem_00802A38->field_00E4 % 0x14 == 4) {
    uVar9 = 0;
    if (0 < (int)local_14) {
      do {

        st::fn_006ACC70(pSVar2->field_0029,uVar9,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          local_8 = (STBoatC *)
                    /* ST_CALLSITE[004A0CAA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                    st::fn_004028BA
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
          if (local_8 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xd97);
          }
          /* ST_CALLSITE[004A0CD8]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar6 = local_8->sub_004838B0();
          if ((iVar6 != 0) &&
             /* ST_CALLSITE[004A0CE7]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (((dVar3 = local_8->sub_0045EEE0(), dVar3 == 7 || (dVar3 == 0x13)) ||
              (dVar3 == 0x1b)))) {
            local_28 = 1;
            /* ST_CALLSITE[004A0D03]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar6 = st::fn_00402EDC(reinterpret_cast<STGameObjC *>(local_8));
            /* ST_CALLSITE[004A0D12]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            if ((iVar6 == 0xe) || (uVar5 = st::fn_00404DF9(local_8,CASE_E), uVar5 == 1)) {
              local_2c = 1;
              break;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)pSVar7);
    }
    if ((local_28 == 0) || (local_2c == 0)) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_84.previous;
  return local_1c;
}

// 004A0FA0 STGroupBoatC::RechargeNewCmd
#line 4 "decomp/ST.exe/functions/004A0FA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::RechargeNewCmd
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall RechargeNewCmd(STGroupBoatC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=004A297E RET | 004A2C89 RET | 004A2CD7 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall st::fn_004A0FA0(STGroupBoatC *this)

{
  STBoatC_field_06F7State SVar1;
  uint uVar3;
  STGroupBoatC *this_00;
  int local_EAX_76;
  STGameObjC *puVar4_mg0;
  STBoatC *pSVar4;
  int local_EAX_791;
  int iVar3;
  dword dVar5;
  int iVar7;
  STGameObjC *pSVar8;
  DArrayTy *pDVar9;
  DArrayTy *pDVar10;
  int iVar6;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_05;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_06;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_07;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_08;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_09;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_10;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_11;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_12;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_13;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_14;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_15;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_16;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_17;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX_18;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_19;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_20;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_21;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_22;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_23;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_24;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  STGroupBoatC_field_01E6State extraout_ECX_25;
  STGroupBoatC_field_01E6State SVar11;
  uint uVar12;
  uint uVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  uint *puVar15;
  InternalExceptionFrame local_19c;
  STGroupBoatC *local_158;
  uint local_154;
  short local_150;
  short local_14e;
  short local_14c;
  uint local_14a;
  uint local_146;
  uint local_142;
  uint local_13e;
  uint local_13a;
  ushort local_136;
  byte local_134;
  ushort local_133;
  uint *local_130 [3];
  short local_124;
  short local_122;
  short local_120;
  uint local_114;
  short local_110;
  uint local_102;
  uint local_fc;
  uint local_f8;
  ushort local_f4;
  ushort local_f2;
  ushort local_f0;
  ushort local_ee;
  ushort local_ec;
  ushort local_ea;
  uint local_e8;
  uint local_e4 [3];
  uint local_d8;
  ushort local_d4;
  ushort local_d2;
  ushort local_d0;
  uint local_ce;
  uint local_c8;
  uint local_c4;
  ushort local_c0;
  ushort local_be;
  ushort local_bc;
  uint local_b8;
  short local_b4;
  short local_b2;
  ushort local_b0;
  uint local_ae;
  uint local_a8;
  ushort local_a4;
  ushort local_a2;
  ushort local_a0;
  uint local_9e;
  uint local_98;
  ushort local_94;
  ushort local_92;
  ushort local_90;
  ushort local_8e;
  ushort local_8c;
  ushort local_8a;
  uint local_88;
  byte local_84;
  ushort local_83;
  uint local_81;
  uint local_7c;
  ushort local_78;
  ushort local_76;
  ushort local_74;
  uint local_70;
  ushort local_6c;
  ushort local_6a;
  ushort local_68;
  uint local_64;
  short local_60;
  short local_5e;
  short local_5c;
  uint local_58;
  ushort local_54;
  ushort local_52;
  ushort local_50;
  uint local_4c;
  uint local_48;
  STGroupBoatC_field_01E6State local_44;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  DArrayTy *local_28;
  short local_22;
  short local_20;
  short local_1e;
  uint local_1c;
  uint local_18;
  uint local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  uint local_8;
  local_14 = this->field_002D->count;
  local_e8 = 0xffffffff;
  local_c = nullptr;
  local_10 = nullptr;
  local_19c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_19c;
  local_158 = this;

  local_EAX_76 = st::fn_0072D7F0(local_19c.jumpBuffer,0);
  this_00 = local_158;
  uVar12 = local_14;
  uVar13 = local_14;
  if (local_EAX_76 != 0) {
    g_currentExceptionFrame = local_19c.previous;
    if (local_EAX_76 == -0x5001fff7) {
      return;
    }

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x10dc,0,local_EAX_76,
                               st::mutable_c_string("%s"),"STGroupBoatC::RechargeNewCmd");
    if (iVar6 == 0) {
      st::fn_006A5E40(local_EAX_76,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x10dd);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  while (uVar13 = uVar13 - 1, -1 < (int)uVar13) {

    st::fn_006ACC70(this_00->field_002D,uVar13,&local_8);
    /* ST_CALLSITE[004A102C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    puVar4_mg0 = st::fn_004028BA
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
    if ((puVar4_mg0 == nullptr) || (puVar4_mg0->field_0020 != 0x14)) {

      st::fn_006B0C70(this_00->field_002D,uVar13);
      uVar12 = uVar12 - 1;
    }
  }
  if (uVar12 == 0) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xdf7
              );
  }
  SVar11 = this_00->field_01E6;
  uVar13 = this_00->field_002D->count;
  local_14 = uVar13;
  if (SVar11 == CASE_1) {
    /* ST_CALLSITE[004A1095]: CALL 0x00405d7b; direct=00405D7B STGroupBoatC::InitWay */
    st::fn_00405D7B(this_00,this_00->field_002D,this_00->field_003D,this_00->field_0041,this_00->field_0045);
    uVar12 = 0;
    local_18 = 0;
    SVar11 = g_playSystem_00802A38->field_00E4;
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = SVar11;
    if (uVar13 != 0) {
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        /* ST_CALLSITE[004A10DC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
        if (pSVar4 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0xe03);
        }
        /* ST_CALLSITE[004A1109]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        st::fn_00402126(pSVar4,CASE_1,reinterpret_cast<uint *>(&local_44));
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX;
      } while (uVar12 < uVar13);
    }
  }
  if (this_00->field_01E6 == CASE_3) {
    local_18 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    if (uVar13 != 0) {
      uVar12 = 0;
      do {
        /* ST_CALLSITE[004A114B]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__fastcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        /* ST_CALLSITE[004A1160]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
        if (pSVar4 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0xe46);
        }
        /* ST_CALLSITE[004A118E]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        st::fn_00402126(pSVar4,CASE_3,&local_1c);
        local_18 = local_18 + 1;
        uVar12 = local_18 & 0xffff;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_00;
      } while (uVar12 < uVar13);
    }
  }
  if (this_00->field_01E6 == CASE_2) {
    /* ST_CALLSITE[004A11B3]: CALL 0x00405146; direct=00405146 STGroupBoatC::DistributeTargets */
    st::fn_00405146(this_00,&this_00->field_002D->flags);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_01;
  }
  if (this_00->field_01E6 == CASE_6) {
    local_4c = g_playSystem_00802A38->field_00E4;
    /* ST_CALLSITE[004A11D6]: CALL 0x00403f80; direct=00403F80 STGroupBoatC::ReMakePatrolPoints */
    st::fn_00403F80(this_00);
    local_28 = st::fn_006AE290(nullptr,0,2,1);
    if (this_00->field_022E->count == 0) {
      uVar12 = 0;
      local_18 = 0;
      if (uVar13 != 0) {
        uVar13 = 0;
        do {

          st::fn_006ACC70(this_00->field_002D,uVar13,&local_8);
          local_110 = (short)local_8;
          local_114 = 0;
          local_102 = 0;
          /* ST_CALLSITE[004A1355]: CALL 0x006ae140; direct=006AE140 Library::DKW::TBL::DArrayPut; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__stdcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
          st::fn_006AE140(this_00->field_022E,uVar12,&local_114);
          local_48 = uVar12;
          /* ST_CALLSITE[004A136D]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
          if (pSVar4 == nullptr) {

            iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xe77,0,0,
                                       st::mutable_c_string("%s"),"STGroupBoatC::RechargeNewCmd Patrol NULL value");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xe78);
          }

          st::fn_006AE1C0(local_28,&local_8);
          /* ST_CALLSITE[004A13CB]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,CASE_6,&local_4c);
          uVar12 = uVar12 + 1;
          local_18 = local_18 + 1;
          uVar13 = local_18 & 0xffff;
        } while (uVar13 < local_14);
      }
    }
    else {
      local_18 = 0;
      if (uVar13 != 0) {
        do {
          uVar13 = this_00->field_022E->count;
          uVar12 = uVar13;
          uVar3 = local_18;
          while (uVar13 = uVar13 - 1, local_18 = uVar3, -1 < (int)uVar13) {

            st::fn_006ACC70(this_00->field_022E,uVar13,&local_114);
            uVar3 = local_18;
            if (local_110 == -1) {
              uVar12 = uVar13;
            }
          }

          st::fn_006ACC70(this_00->field_002D,uVar3 & 0xffff,&local_8);
          local_114 = 0;
          local_102 = 0;
          local_110 = (short)local_8;

          st::fn_006AE140(this_00->field_022E,uVar12,&local_114);
          local_48 = uVar12;
          /* ST_CALLSITE[004A1296]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
          if (pSVar4 == nullptr) {

            local_EAX_791 =
                 st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xe64,0,0,st::mutable_c_string("%s"),
                                    "STGroupBoatC::RechargeNewCmd Patrol NULL value");
            if (local_EAX_791 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xe65);
          }

          st::fn_006AE1C0(local_28,&local_8);
          /* ST_CALLSITE[004A12F3]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,CASE_6,&local_4c);
          local_18 = uVar3 + 1;
        } while ((local_18 & 0xffff) < local_14);
      }
    }

    st::fn_006ACC70(this_00->field_022A,this_00->field_0232,&local_124);
    pDVar10 = local_28;
    if (local_28->count != 0) {
      /* ST_CALLSITE[004A1428]: CALL 0x00405d7b; direct=00405D7B STGroupBoatC::InitWay */
      st::fn_00405D7B(this_00,local_28,(int)local_124,(int)local_122,(int)local_120);
    }
    st::fn_006AE110(pDVar10);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_02;
  }
  if (this_00->field_01E6 == CASE_7) {
    uVar13 = 0;
    SVar11 = g_playSystem_00802A38->field_00E4;
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = SVar11;
    if (local_14 != 0) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        pSVar4 = (STBoatC *)
                 /* ST_CALLSITE[004A1488]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 st::fn_004028BA
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar4 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0xe8c);
        }
        /* ST_CALLSITE[004A14BB]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5(reinterpret_cast<STFishC *>(pSVar4),&local_20,&local_1e,&local_22);
        /* ST_CALLSITE[004A14D3]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        st::fn_00404F6B(pSVar4,(int)local_20,(int)local_1e,*(int *)&this_00->field_0x222);
        /* ST_CALLSITE[004A14E0]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        st::fn_00402126(pSVar4,CASE_1,reinterpret_cast<uint *>(&local_44));
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_03;
      } while (uVar12 < local_14);
    }
  }
  if (this_00->field_01E6 == CASE_8) {
    local_18 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    if (local_14 != 0) {
      do {
        uVar13 = local_18 & 0xffff;

        st::fn_006ACC70(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A1553]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xe9a);
          }
          /* ST_CALLSITE[004A157C]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A1588]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 != 8) && (dVar5 = pSVar4->sub_0045EEE0(), dVar5 != 0x14)) &&
             /* ST_CALLSITE[004A1594]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (dVar5 = pSVar4->sub_0045EEE0(), dVar5 != 0x1a)) {

            iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
            if (iVar7 == 0) {
              /* ST_CALLSITE[004A15AF]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(pSVar4,CASE_3,&local_1c);
            }
            else {
              if (local_c == nullptr) {
                local_c = st::fn_006AE290(nullptr,1,2,1);
              }

              st::fn_006AE1C0(local_c,&local_8);
            }

            st::fn_006B0C70(this_00->field_002D,uVar13);
            local_18 = local_18 + 0xffff;
            local_14 = local_14 - 1;
          }
        }
        local_18 = local_18 + 1;
      } while ((local_18 & 0xffff) < local_14);
    }
    uVar13 = 0;
    local_18 = this_00->field_0029->count;
    if (local_18 != 0) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_0029,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A1643]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar8 = st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar8 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xeb0);
          }
          /* ST_CALLSITE[004A166D]: CALL dword ptr [EAX + 0x2c] */
          iVar7 = pSVar8->vfunc_2C();
          /* ST_CALLSITE[004A1679]: CALL dword ptr [EDX + 0x2c] */
          if (((iVar7 == 8) || (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x14)) ||
             /* ST_CALLSITE[004A1685]: CALL dword ptr [EAX + 0x2c] */
             (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x1a)) {
            if (local_10 == nullptr) {
              local_10 = st::fn_006AE290(nullptr,1,2,1);
            }

            st::fn_006AE1C0(local_10,&local_8);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    pDVar10 = local_c;
    /* ST_CALLSITE[004A16D3]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_18)), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    if (local_10 != nullptr) {
      st::fn_006AE110(local_10);
    }
    if (pDVar10 != nullptr) {
      st::fn_006AE110(pDVar10);
    }
    /* ST_CALLSITE[004A1705]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
    st::fn_0040143D(this_00,1,this_00->field_024E,this_00->field_0266,this_00->field_002D);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_04;
  }
  if (this_00->field_01E6 == CASE_9) {
    uVar13 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    local_154 = g_playSystem_00802A38->field_00E4;
    local_150 = this_00->field_0276;
    local_14e = this_00->field_0278;
    local_14a = this_00->field_027C;
    local_14c = this_00->field_027A;
    local_146 = this_00->field_0280;
    local_133 = this_00->field_0293;
    local_142 = this_00->field_0284;
    local_13e = this_00->field_0288;
    local_13a = this_00->field_028C;
    local_136 = this_00->field_0290;
    local_134 = this_00->field_0292;
    if (local_14 != 0) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A17EA]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xecf);
          }
          /* ST_CALLSITE[004A1813]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A181F]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 == 0xc) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x18))
             /* ST_CALLSITE[004A182B]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x19)) {
            puVar15 = &local_154;
            SVar14 = CASE_11;
          }
          else {

            iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
            if (iVar7 != 0) {
              if (local_c == nullptr) {
                local_c = st::fn_006AE290(nullptr,1,2,1);
              }

              st::fn_006AE1C0(local_c,&local_8);
              goto LAB_004a1878;
            }
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A1873]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,SVar14,puVar15);
        }
LAB_004a1878:
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_14);
    }
    uVar13 = 0;
    local_18 = this_00->field_0029->count;
    if (local_18 != 0) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_0029,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A18C3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar8 = st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar8 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xee9);
          }
          /* ST_CALLSITE[004A18EC]: CALL dword ptr [EDX + 0x2c] */
          iVar7 = pSVar8->vfunc_2C();
          /* ST_CALLSITE[004A18F8]: CALL dword ptr [EAX + 0x2c] */
          if (((iVar7 == 0xc) || (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x18)) ||
             /* ST_CALLSITE[004A1904]: CALL dword ptr [EDX + 0x2c] */
             (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x19)) {
            if (local_10 == nullptr) {
              local_10 = st::fn_006AE290(nullptr,1,2,1);
            }

            st::fn_006AE1C0(local_10,&local_8);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    pDVar10 = local_c;
    /* ST_CALLSITE[004A1952]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_18)), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_05;
    if (local_10 != nullptr) {
      st::fn_006AE110(local_10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_06;
    }
    if (pDVar10 != nullptr) {
      st::fn_006AE110(pDVar10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_07;
    }
  }
  if (this_00->field_01E6 == CASE_A) {
    uVar13 = 0;
    local_1c = g_playSystem_00802A38->field_00E4;
    local_64 = g_playSystem_00802A38->field_00E4;
    local_60 = this_00->field_0295;
    local_5e = this_00->field_0297;
    local_5c = this_00->field_0299;
    if (local_14 != 0) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A19E8]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xf02);
          }
          /* ST_CALLSITE[004A1A12]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A1A1E]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 == 8) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x14)) ||
             /* ST_CALLSITE[004A1A2A]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x1a)) {
            puVar15 = &local_64;
            SVar14 = CASE_D;
          }
          else {

            iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
            if (iVar7 != 0) {
              if (local_c == nullptr) {
                local_c = st::fn_006AE290(nullptr,1,2,1);
              }

              st::fn_006AE1C0(local_c,&local_8);
              goto LAB_004a1a74;
            }
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A1A6F]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,SVar14,puVar15);
        }
LAB_004a1a74:
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_14);
    }
    uVar13 = 0;
    local_18 = this_00->field_0029->count;
    if (local_18 != 0) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_0029,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A1ABF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar8 = st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar8 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xf1c);
          }
          /* ST_CALLSITE[004A1AE9]: CALL dword ptr [EAX + 0x2c] */
          iVar7 = pSVar8->vfunc_2C();
          /* ST_CALLSITE[004A1AF5]: CALL dword ptr [EDX + 0x2c] */
          if (((iVar7 == 8) || (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x14)) ||
             /* ST_CALLSITE[004A1B01]: CALL dword ptr [EAX + 0x2c] */
             (iVar7 = pSVar8->vfunc_2C(), iVar7 == 0x1a)) {
            if (local_10 == nullptr) {
              local_10 = st::fn_006AE290(nullptr,1,2,1);
            }

            st::fn_006AE1C0(local_10,&local_8);
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    pDVar10 = local_c;
    /* ST_CALLSITE[004A1B4F]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_18)), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_08;
    if (local_10 != nullptr) {
      st::fn_006AE110(local_10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_09;
    }
    if (pDVar10 != nullptr) {
      st::fn_006AE110(pDVar10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_10;
    }
  }
  if (this_00->field_01E6 == CASE_4) {
    /* ST_CALLSITE[004A1B83]: CALL 0x00403251; direct=00403251 STGroupBoatC::DistributeDock */
    st::fn_00403251(this_00,1,(DArrayTy *)this_00->field_029F,this_00->field_002D);
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    SVar11 = extraout_ECX_11;
  }
  if (this_00->field_01E6 == CASE_5) {
    uVar13 = 0;
    if (local_14 != 0) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_12;
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A1BC6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xf35);
          }

          iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
          if (iVar7 == 0) {
            local_1c = g_playSystem_00802A38->field_00E4;
            /* ST_CALLSITE[004A1C0D]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,CASE_3,&local_1c);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            SVar11 = extraout_ECX_13;
          }
          else {
            if (local_c == nullptr) {
              local_c = st::fn_006AE290(nullptr,1,2,1);
            }

            st::fn_006AE1C0(local_c,&local_8);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            SVar11 = extraout_ECX_14;
          }
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_14);
    }
    uVar13 = 0;
    local_18 = this_00->field_0029->count;
    if (local_18 != 0) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_0029,uVar12,&local_8);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_15;
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A1C7F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar8 = st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar8 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xf47);
          }

          iVar7 = st::fn_00404E58(pSVar8);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          SVar11 = extraout_ECX_16;
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          if ((iVar7 == 1) &&

             (local_e8 = st::fn_004044F3(this_00->field_0024,(short)local_8),
             SVar11 = extraout_ECX_17, local_e8 != 0xffffffff)) break;
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while (uVar12 < local_18);
    }
    if (local_e8 != 0xffffffff) {

      st::fn_006ACC70((DArrayTy *)g_packedRecords_A62x8[this_00->field_0024].field1976_0x9f6,
                       local_e8,local_130);

      st::fn_006AFE40(reinterpret_cast<int *>(&local_10),local_130[0]);
      /* ST_CALLSITE[004A1D33]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      st::fn_00403D9B
                (g_allPlayers_007FA174,
                 STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(extraout_ECX_18)), (uint8_t)(this_00->field_0024)),&local_10->flags,
                 &local_c->flags);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_19;
    }
    if (local_10 != nullptr) {
      st::fn_006AE110(local_10);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_20;
    }
    if (local_c != nullptr) {
      st::fn_006AE110(local_c);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      SVar11 = extraout_ECX_21;
    }
  }
  if (this_00->field_01E6 == CASE_B) {
    uVar13 = 0;
    local_d8 = g_playSystem_00802A38->field_00E4;
    local_18 = 0;
    pDVar10 = local_c;
    local_1c = local_d8;
    if (0 < (int)local_14) {
      do {

        st::fn_006ACC70(this_00->field_002D,uVar13,&local_8);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        SVar11 = extraout_ECX_22;
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A1DAC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xf5d);
          }
          /* ST_CALLSITE[004A1DD5]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar7 = pSVar4->sub_004838B0();
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          SVar11 = extraout_ECX_23;
          if (iVar7 != 0) {

            iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
            if (iVar7 == 0) {
              /* ST_CALLSITE[004A1DF6]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
              dVar5 = pSVar4->sub_0045EEE0();
              if ((((dVar5 != 7) && (dVar5 != 0x13)) && (dVar5 != 0x1b)) ||
                 /* ST_CALLSITE[004A1E0A]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
                 (iVar7 = st::fn_00402608(reinterpret_cast<STGameObjC *>(pSVar4)), iVar7 != 0)) {
                /* ST_CALLSITE[004A1E7E]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                st::fn_00402126(pSVar4,CASE_3,&local_1c);
                /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                SVar11 = extraout_ECX_24;
                goto LAB_004a1ea4;
              }
              local_d4 = this_00->field_02A3;
              local_d2 = this_00->field_02A5;
              local_d0 = *(undefined2 *)&this_00->field_0x2a7;
              local_ce = *(undefined4 *)&this_00->field_0x2a9;
              /* ST_CALLSITE[004A1E54]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(pSVar4,CASE_F,&local_d8);
              pDVar9 = local_10;
              if (local_10 == nullptr) {
                pDVar9 = st::fn_006AE290(nullptr,1,2,1);
                local_10 = pDVar9;
              }
            }
            else {
              pDVar9 = pDVar10;
              if (pDVar10 == nullptr) {
                pDVar10 = st::fn_006AE290(nullptr,1,2,1);
                pDVar9 = pDVar10;
                local_c = pDVar10;
              }
            }

            st::fn_006AE1C0(pDVar9,&local_8);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            SVar11 = extraout_ECX_25;
          }
        }
LAB_004a1ea4:
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    if (local_10 == nullptr) {
LAB_004a1ede:
      if (local_c != nullptr) {
        uVar13 = 0;
        dVar5 = local_c->count;
        if (0 < (int)dVar5) {
          uVar12 = 0;
          do {

            st::fn_006ACC70(local_c,uVar12,&local_8);
            /* ST_CALLSITE[004A1F0E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
            /* ST_CALLSITE[004A1F1B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,CASE_3,&local_1c);
            uVar13 = uVar13 + 1;
            uVar12 = uVar13 & 0xffff;
          } while ((int)uVar12 < (int)dVar5);
        }
      }
    }
    else if (pDVar10 == nullptr) {
      if (local_10 == nullptr) goto LAB_004a1ede;
    }
    else {
      /* ST_CALLSITE[004A1ED3]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      st::fn_00403D9B
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(SVar11), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&pDVar10->flags);
    }
    if (local_10 != nullptr) {
      st::fn_006AE110(local_10);
    }
    if (local_c != nullptr) {
      st::fn_006AE110(local_c);
    }
  }
  if (this_00->field_01E6 == CASE_C) {
    local_e4[0] = g_playSystem_00802A38->field_00E4;
    uVar13 = 0;
    local_18 = 0;
    local_1c = local_e4[0];
    if (0 < (int)local_14) {
      do {

        st::fn_006ACC70(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A1FA2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xf8e);
          }
          /* ST_CALLSITE[004A1FCC]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar7 = pSVar4->sub_004838B0();
          if (iVar7 != 0) {
            /* ST_CALLSITE[004A1FDE]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
            dVar5 = pSVar4->sub_0045EEE0();
            if ((((dVar5 == 7) || (dVar5 == 0x13)) || (dVar5 == 0x1b)) &&
               /* ST_CALLSITE[004A1FF2]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
               (iVar7 = st::fn_00402608(reinterpret_cast<STGameObjC *>(pSVar4)), iVar7 != 0)) {
              /* ST_CALLSITE[004A2006]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(pSVar4,CASE_10,local_e4);
              if (((this_00->field_02AD != -1) || (this_00->field_02AF != -1)) ||
                 (this_00->field_02B1 != -1)) {
                pDVar10 = local_10;
                if (local_10 == nullptr) {
                  pDVar10 = st::fn_006AE290(nullptr,1,2,1);
                  local_10 = pDVar10;
                }
LAB_004a2089:

                st::fn_006AE1C0(pDVar10,&local_8);
              }
            }
            else {

              iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
              if (iVar7 == 0) {
                /* ST_CALLSITE[004A2051]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                st::fn_00402126(pSVar4,CASE_3,&local_1c);
              }
              else if (((this_00->field_02AD != -1) || (this_00->field_02AF != -1)) ||
                      (this_00->field_02B1 != -1)) {
                pDVar10 = local_c;
                if (local_c == nullptr) {
                  pDVar10 = st::fn_006AE290(nullptr,1,2,1);
                  local_c = pDVar10;
                }
                goto LAB_004a2089;
              }
            }
          }
        }
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    if (local_10 == nullptr) {
LAB_004a20d0:
      if (local_c != nullptr) {
        dVar5 = local_c->count;
        uVar13 = 0;
        if (0 < (int)dVar5) {
          uVar12 = 0;
          do {
            /* ST_CALLSITE[004A20E9]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__fastcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
            st::fn_006ACC70(local_c,uVar12,&local_8);
            /* ST_CALLSITE[004A20FE]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
            /* ST_CALLSITE[004A210B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,CASE_3,&local_1c);
            uVar13 = uVar13 + 1;
            uVar12 = uVar13 & 0xffff;
          } while ((int)uVar12 < (int)dVar5);
        }
      }
    }
    else if (local_c == nullptr) {
      if (local_10 == nullptr) goto LAB_004a20d0;
    }
    else {
      /* ST_CALLSITE[004A20C5]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      st::fn_00403D9B
                (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar13)), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&local_c->flags);
    }
    if (local_10 != nullptr) {
      st::fn_006AE110(local_10);
    }
    if (local_c != nullptr) {
      st::fn_006AE110(local_c);
    }
  }
  if (this_00->field_01E6 == CASE_D) {
    local_52 = this_00->field_02B5;
    uVar13 = 0;
    local_58 = g_playSystem_00802A38->field_00E4;
    local_50 = *(undefined2 *)&this_00->field_0x2b7;
    local_54 = this_00->field_02B3;
    local_1c = local_58;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A21AC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xfc2);
          }
          if (*(int *)&this_00->field_0x2b9 == -1) {
            if ((pSVar4->field_07B6 == 0) || (pSVar4->field_07BE < 1)) {
LAB_004a221d:
              puVar15 = &local_1c;
              SVar14 = CASE_3;
            }
            else {
              puVar15 = &local_58;
              SVar14 = CASE_7;
            }
          }
          else {
            if ((pSVar4->field_07B6 != *(int *)&this_00->field_0x2b9) || (pSVar4->field_07BE < 1))
            goto LAB_004a221d;
            puVar15 = &local_58;
            SVar14 = CASE_7;
          }
          /* ST_CALLSITE[004A2221]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,SVar14,puVar15);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_E) {
    local_78 = this_00->field_02BD;
    uVar13 = 0;
    local_7c = g_playSystem_00802A38->field_00E4;
    local_74 = this_00->field_02C1;
    local_76 = this_00->field_02BF;
    local_1c = local_7c;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A22AB]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0xfea);
          }
          if ((pSVar4->field_06F7 == CASE_4) && (0 < pSVar4->field_07A2)) {
            puVar15 = &local_7c;
            SVar14 = CASE_A;
          }
          else {
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A22F4]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,SVar14,puVar15);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_F) {
    local_83 = *(undefined2 *)&this_00->field_0x2c4;
    uVar13 = 0;
    local_88 = g_playSystem_00802A38->field_00E4;
    local_81 = *(undefined4 *)&this_00->field_0x2c6;
    local_84 = this_00->field_0x2c3;
    local_1c = local_88;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A2379]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1003);
          }
          SVar1 = pSVar4->field_06F7;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_12)) || (SVar1 == CASE_22)) {
            puVar15 = &local_88;
            SVar14 = CASE_9;
          }
          else {
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A23C7]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,SVar14,puVar15);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_11) {
    local_c4 = this_00->field_02CE;
    uVar13 = 0;
    local_c8 = g_playSystem_00802A38->field_00E4;
    local_c0 = this_00->field_02D2;
    local_be = this_00->field_02D4;
    local_bc = this_00->field_02D6;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A2462]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x101e);
          }
          /* ST_CALLSITE[004A2493]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,CASE_16,&local_c8);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_10) {
    local_f8 = this_00->field_02D8;
    uVar13 = 0;
    local_fc = g_playSystem_00802A38->field_00E4;
    local_f4 = this_00->field_02DC;
    local_f0 = this_00->field_02E0;
    local_ea = this_00->field_02E6;
    local_f2 = this_00->field_02DE;
    local_ee = this_00->field_02E2;
    local_ec = this_00->field_02E4;
    if (0 < (int)local_14) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A2554]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1032);
          }
          /* ST_CALLSITE[004A2584]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,CASE_15,&local_fc);
        }
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == CASE_12) {
    local_6c = this_00->field_02E8;
    local_70 = g_playSystem_00802A38->field_00E4;
    local_6a = this_00->field_02EA;
    local_68 = this_00->field_02EC;
    uVar13 = 0;
    local_18 = 0;
    pDVar10 = local_c;
    if (0 < (int)local_14) {
      do {

        st::fn_006ACC70(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A260F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1042);
          }
          /* ST_CALLSITE[004A2638]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A2644]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 == 7) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x13)) ||
             /* ST_CALLSITE[004A2650]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x1b)) {
            /* ST_CALLSITE[004A2696]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,CASE_17,&local_70);
            pDVar9 = local_10;
            if (local_10 == nullptr) {
              local_10 = st::fn_006AE290(nullptr,1,2,1);
              pDVar9 = local_10;
            }
          }
          else {

            iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
            if (iVar7 == 0) {
              /* ST_CALLSITE[004A266B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(pSVar4,CASE_3,&local_1c);
              goto LAB_004a26bb;
            }
            pDVar9 = pDVar10;
            if (pDVar10 == nullptr) {
              pDVar10 = st::fn_006AE290(nullptr,1,2,1);
              pDVar9 = pDVar10;
              local_c = pDVar10;
            }
          }

          st::fn_006AE1C0(pDVar9,&local_8);
        }
LAB_004a26bb:
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    if (local_10 == nullptr) {
LAB_004a26f5:
      if (local_c != nullptr) {
        dVar5 = local_c->count;
        uVar13 = 0;
        if (0 < (int)dVar5) {
          uVar12 = 0;
          do {
            /* ST_CALLSITE[004A270E]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__fastcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
            st::fn_006ACC70(local_c,uVar12,&local_8);
            /* ST_CALLSITE[004A2723]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
            /* ST_CALLSITE[004A2730]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar4,CASE_3,&local_1c);
            uVar13 = uVar13 + 1;
            uVar12 = uVar13 & 0xffff;
          } while ((int)uVar12 < (int)dVar5);
        }
      }
    }
    else if (pDVar10 == nullptr) {
      if (local_10 == nullptr) goto LAB_004a26f5;
    }
    else {
      /* ST_CALLSITE[004A26EA]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      st::fn_00403D9B
                (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar13)), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&pDVar10->flags);
    }
    if (local_10 != nullptr) {
      st::fn_006AE110(local_10);
    }
    if (local_c != nullptr) {
      st::fn_006AE110(local_c);
    }
  }
  if (this_00->field_01E6 == CASE_13) {
    local_b2 = this_00->field_02F0;
    uVar12 = 0;
    local_b8 = g_playSystem_00802A38->field_00E4;
    local_b0 = *(undefined2 *)&this_00->field_0x2f2;
    uVar13 = STReplaceLowWord((uint32_t)(g_playSystem_00802A38), (uint16_t)(local_b0));
    local_b4 = this_00->field_02EE;
    local_ae = *(undefined4 *)&this_00->field_0x2f4;
    local_1c = local_b8;
    if (0 < (int)local_14) {
      uVar13 = 0;
      do {

        st::fn_006ACC70(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          pSVar4 = (STBoatC *)
                   /* ST_CALLSITE[004A27E9]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1071);
          }
          /* ST_CALLSITE[004A2812]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar5 = pSVar4->sub_0045EEE0();
          /* ST_CALLSITE[004A281E]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar5 == 0xc) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x18))
             /* ST_CALLSITE[004A282A]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x1d)) {
            if (local_10 == nullptr) {
              local_10 = st::fn_006AE290(nullptr,1,2,1);
            }

            st::fn_006AE1C0(local_10,&local_8);
            puVar15 = &local_b8;
            SVar14 = CASE_12;
          }
          else {

            iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
            if (iVar7 != 0) {
              if (local_c == nullptr) {
                local_c = st::fn_006AE290(nullptr,1,2,1);
              }

              st::fn_006AE1C0(local_c,&local_8);
              goto LAB_004a2897;
            }
            puVar15 = &local_1c;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A2892]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,SVar14,puVar15);
        }
LAB_004a2897:
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    pDVar10 = local_c;
    /* ST_CALLSITE[004A28BD]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    st::fn_00403D9B
              (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(uVar13)), (uint8_t)(this_00->field_0024)),
               &local_10->flags,&local_c->flags);
    if (local_10 != nullptr) {
      st::fn_006AE110(local_10);
    }
    if (pDVar10 != nullptr) {
      st::fn_006AE110(pDVar10);
    }
  }
  if (this_00->field_01E6 == CASE_14) {
    /* ST_CALLSITE[004A291D]: CALL 0x00403bca; direct=00403BCA STGroupBoatC::Way3DGrpGetDistrPoint; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STGroupBoatC;pointer:/SubmarineTitans/Recovered/DArrayTy;/int;/int;/undefined4;/int;/int;/int */
    local_28 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00403BCA
                         (this_00,this_00->field_002D,(int)this_00->field_02FE,
                          (int)this_00->field_0300,(int)this_00->field_0302,(int)this_00->field_02F8
                          ,(int)this_00->field_02FA,(int)this_00->field_02FC));
    if (local_28 == nullptr) {
      return;
    }
    /* ST_CALLSITE[004A2964]: CALL 0x00403bca; direct=00403BCA STGroupBoatC::Way3DGrpGetDistrPoint; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STGroupBoatC;pointer:/SubmarineTitans/Recovered/DArrayTy;/int;/int;/undefined4;/int;/int;/int */
    pDVar10 = st::pointer_boundary_cast<DArrayTy *>(st::fn_00403BCA
                        (this_00,this_00->field_002D,(int)this_00->field_02F8,
                         (int)this_00->field_02FA,(int)this_00->field_02FC,(int)this_00->field_02FE,
                         (int)this_00->field_0300,(int)this_00->field_0302));
    if (pDVar10 == nullptr) {
      st::fn_006AE110(local_28);
      return;
    }
    local_18 = 0;
    local_98 = g_playSystem_00802A38->field_00E4;
    if (0 < (int)local_14) {
      uVar13 = 0;
      do {

        st::fn_006ACC70(local_28,uVar13,&local_38);

        st::fn_006ACC70(pDVar10,uVar13,&local_30);

        st::fn_006ACC70(this_00->field_002D,uVar13,&local_8);
        if ((ushort)local_8 != 0xffff) {
          /* ST_CALLSITE[004A29E7]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
          if (pSVar4 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x109b);
          }
          local_94 = local_38;
          local_92 = local_36;
          local_8e = local_30;
          local_90 = local_34;
          local_8c = local_2e;
          local_8a = local_2c;
          /* ST_CALLSITE[004A2A59]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar4,CASE_8,&local_98);
        }
        local_18 = local_18 + 1;
        uVar13 = local_18 & 0xffff;
      } while ((int)uVar13 < (int)local_14);
    }
    st::fn_006AE110(local_28);
    st::fn_006AE110(pDVar10);
  }
  if (this_00->field_01E6 != CASE_15) {
    g_currentExceptionFrame = local_19c.previous;
    return;
  }
  uVar13 = 0;
  local_a8 = g_playSystem_00802A38->field_00E4;
  local_1c = local_a8;
  if (0 < (int)local_14) {
    uVar12 = 0;
    do {

      st::fn_006ACC70(this_00->field_002D,uVar12,&local_8);
      if ((ushort)local_8 != 0xffff) {
        pSVar4 = (STBoatC *)
                 /* ST_CALLSITE[004A2ADB]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 st::fn_004028BA
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (pSVar4 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x10b0);
        }
        /* ST_CALLSITE[004A2B04]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
        iVar7 = pSVar4->sub_004838B0();
        if (iVar7 != 0) {

          iVar7 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar4));
          if (iVar7 == 0) {
            /* ST_CALLSITE[004A2B25]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
            dVar5 = pSVar4->sub_0045EEE0();
            if ((dVar5 == 7) || (dVar5 == 0x13)) {
              /* ST_CALLSITE[004A2B46]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
              iVar7 = st::fn_00402608(reinterpret_cast<STGameObjC *>(pSVar4));
              if (iVar7 == 0) {
                local_a2 = this_00->field_0306;
                local_a4 = this_00->field_0304;
                local_a0 = *(undefined2 *)&this_00->field_0x308;
                local_9e = *(undefined4 *)&this_00->field_0x30a;
                /* ST_CALLSITE[004A2B94]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                st::fn_00402126(pSVar4,CASE_F,&local_a8);
                pDVar10 = local_10;
                if (local_10 == nullptr) {
                  pDVar10 = st::fn_006AE290(nullptr,1,2,1);
                  local_10 = pDVar10;
                }
                goto LAB_004a2bcf;
              }
            }
            else {
              /* ST_CALLSITE[004A2B3A]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              st::fn_00402126(pSVar4,CASE_3,&local_1c);
            }
          }
          else {
            pDVar10 = local_c;
            if (local_c == nullptr) {
              pDVar10 = st::fn_006AE290(nullptr,1,2,1);
              local_c = pDVar10;
            }
LAB_004a2bcf:

            st::fn_006AE1C0(pDVar10,&local_8);
          }
        }
      }
      uVar13 = uVar13 + 1;
      uVar12 = uVar13 & 0xffff;
    } while ((int)uVar12 < (int)local_14);
  }
  if (local_10 != nullptr) {
    if (local_c != nullptr) {
      /* ST_CALLSITE[004A2C03]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      st::fn_00403D9B
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_c), (uint8_t)(this_00->field_0024)),
                 &local_10->flags,&local_c->flags);
      goto cf_common_exit_004A2C5D;
    }
    if (local_10 != nullptr) goto cf_common_exit_004A2C5D;
  }
  if (local_c != nullptr) {
    uVar13 = 0;
    dVar5 = local_c->count;
    if (0 < (int)dVar5) {
      uVar12 = 0;
      do {

        st::fn_006ACC70(local_c,uVar12,&local_8);
        /* ST_CALLSITE[004A2C3E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar4 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1));
        /* ST_CALLSITE[004A2C4B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        st::fn_00402126(pSVar4,CASE_3,&local_1c);
        uVar13 = uVar13 + 1;
        uVar12 = uVar13 & 0xffff;
      } while ((int)uVar12 < (int)dVar5);
    }
  }
cf_common_exit_004A2C5D:
  if (local_10 != nullptr) {
    st::fn_006AE110(local_10);
  }
  if (local_c != nullptr) {
    st::fn_006AE110(local_c);
  }
  g_currentExceptionFrame = local_19c.previous;
  return;
}

// 004A3430 STGroupBoatC::DistributeMD
#line 4 "decomp/ST.exe/functions/004A3430/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeMD */

void __thiscall
st::fn_004A3430
          (STGroupBoatC *this,int param_1,DArrayTy *param_2,DArrayTy *param_3,DArrayTy *param_4)

{
  STGroupBoatC *pSVar2;
  int local_EAX_63;
  STBoatC *pSVar3;
  int iVar3;
  dword dVar4;
  int iVar6;
  STGameObjC *pSVar7;
  DArrayTy *pDVar8;
  int local_EAX_1021;
  int local_EAX_1098;
  STFishC *pSVar9;
  int iVar5;
  uint uVar10;
  uint uVar11;
  InternalExceptionFrame local_b0;
  STGroupBoatC *local_6c;
  dword local_68;
  dword local_64;
  uint local_60;
  short local_5c;
  short local_5a;
  short local_58;
  uint local_56;
  short local_52;
  short local_50;
  short local_4e;
  uint local_4c;
  uint local_44;
  DArrayTy *local_40;
  ushort local_3c;
  ushort uStack_3a;
  ushort uStack_38;
  ushort local_36;
  undefined2 uStack_34;
  uint local_32;
  DArrayTy *local_2c;
  DArrayTy *local_28;
  DArrayTy *local_24;
  uint local_20;
  DArrayTy *local_1c;
  uint local_18;
  short local_14 [2];
  short local_10 [2];
  short local_c [2];
  byte local_8 [4];
  uVar11 = 0;
  local_40 = nullptr;
  local_2c = nullptr;
  local_28 = nullptr;
  local_1c = nullptr;
  local_24 = nullptr;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_6c = this;

  local_EAX_63 = st::fn_0072D7F0(local_b0.jumpBuffer,0);
  if (local_EAX_63 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    if (local_EAX_63 == -0x5001fff7) {
      if (local_2c != nullptr) {
        st::fn_006AE110(local_2c);
      }
      if (local_28 != nullptr) {
        st::fn_006AE110(local_28);
      }
      if (local_1c != nullptr) {
        st::fn_006AE110(local_1c);
      }
      if (local_40 != nullptr) {
        st::fn_006AE110(local_40);
      }
      if (local_24 != nullptr) {
        st::fn_006AE110(local_24);
        return;
      }
    }
    else {

      iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x116f,0,local_EAX_63,
                                 st::mutable_c_string("%s"),"STGroupBoatC::DistributeMD");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(local_EAX_63,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1170);
    }
    return;
  }
  if ((param_4 == nullptr) || (local_68 = param_4->count, local_68 == 0)) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
               0x10f5);
  }
  dVar4 = local_68;
  local_1c = st::fn_006AE290(nullptr,0,2,1);
  pSVar2 = local_6c;
  if (0 < (int)dVar4) {
    do {

      st::fn_006ACC70(param_4,uVar11,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        pSVar3 = (STBoatC *)
                 /* ST_CALLSITE[004A34F4]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 st::fn_004028BA
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (pSVar3 == nullptr) {

          iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x10fc,0,0,
                                     st::mutable_c_string("%s"),"STGroupBoatC::DistributeMD ptr==NULL");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x10fd);
        }
        /* ST_CALLSITE[004A3540]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
        dVar4 = pSVar3->sub_0045EEE0();
        pDVar8 = local_1c;
        if (((dVar4 != 8) &&
            /* ST_CALLSITE[004A354C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
            (dVar4 = pSVar3->sub_0045EEE0(), pDVar8 = local_1c, dVar4 != 0x14)) &&
           /* ST_CALLSITE[004A3558]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
           (dVar4 = pSVar3->sub_0045EEE0(), pDVar8 = local_1c, dVar4 != 0x1a)) {

          iVar6 = st::fn_00404E58(reinterpret_cast<STGameObjC *>(pSVar3));
          if (iVar6 == 0) {
            local_18 = g_playSystem_00802A38->field_00E4;
            /* ST_CALLSITE[004A3581]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            st::fn_00402126(pSVar3,CASE_3,&local_18);
            goto LAB_004a35b6;
          }
          pDVar8 = local_24;
          if (local_24 == nullptr) {
            pDVar8 = st::fn_006AE290(nullptr,1,2,1);
            local_24 = pDVar8;
          }
        }

        st::fn_006AE1C0(pDVar8,local_8);
      }
LAB_004a35b6:
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_68);
  }
  local_20 = local_1c->count;
  if (local_20 == 0) {
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
               0x110f);
  }
  if ((param_2 != nullptr) && (dVar4 = param_2->count, dVar4 != 0)) {
    local_2c = st::fn_006AE290(nullptr,0,2,1);
    uVar11 = 0;
    if (0 < (int)dVar4) {
      do {

        st::fn_006ACC70(param_2,uVar11,local_8);
        if ((STPiece<0,2>(local_8) != 0xffff) &&
           /* ST_CALLSITE[004A3632]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
           (pSVar7 = st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1),
           pSVar7 != nullptr)) {

          st::fn_006AE1C0(local_2c,local_8);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)dVar4);
    }
  }
  uVar11 = local_20;
  if ((local_2c == nullptr) || (local_2c->count == 0)) {
    uVar10 = 0;
    if (0 < (int)local_20) {
      do {
        /* ST_CALLSITE[004A3671]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
        st::fn_006ACC70(local_1c,uVar10,local_8);
        /* ST_CALLSITE[004A3686]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar3 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1));
        if (param_1 == 1) {
          local_60 = g_playSystem_00802A38->field_00E4;
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          /* ST_CALLSITE[004A36B1]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar3,CASE_C,&local_60);
        }
        else {
          /* ST_CALLSITE[004A36C6]: CALL 0x00401708; direct=00401708 STBoatC::SetNewMD */
          st::fn_00401708(pSVar3,1,-1,-1,-1,-1,0xffffffff);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar11);
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
               0x1124);
  }
  if ((param_3 != nullptr) && (dVar4 = param_3->count, dVar4 != 0)) {
    local_28 = st::fn_006AE290(nullptr,0,2,1);
    uVar11 = 0;
    if (0 < (int)dVar4) {
      do {

        st::fn_006ACC70(param_3,uVar11,local_8);
        if ((STPiece<0,2>(local_8) != 0xffff) &&
           /* ST_CALLSITE[004A3733]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
           (pSVar7 = st::fn_004028BA
                               (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1),
           pSVar7 != nullptr)) {

          st::fn_006AE1C0(local_28,local_8);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)dVar4);
    }
  }
  uVar11 = local_20;
  if ((local_28 == nullptr) || (local_28->count == 0)) {
    uVar10 = 0;
    if (0 < (int)local_20) {
      do {
        /* ST_CALLSITE[004A3772]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
        st::fn_006ACC70(local_1c,uVar10,local_8);
        /* ST_CALLSITE[004A3787]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar3 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1));
        if (param_1 == 1) {
          local_60 = g_playSystem_00802A38->field_00E4;
          local_4c = 0xffffffff;
          local_56 = 0xffffffff;
          /* ST_CALLSITE[004A37B2]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar3,CASE_C,&local_60);
        }
        else {
          /* ST_CALLSITE[004A37C7]: CALL 0x00401708; direct=00401708 STBoatC::SetNewMD */
          st::fn_00401708(pSVar3,0,-1,-1,-1,-1,0xffffffff);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar11);
    }
    st::fn_006A5E40
              (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
               0x113a);
  }
  pDVar8 = (DArrayTy *)
           /* ST_CALLSITE[004A3809]: CALL 0x00403a35; direct=00403A35 STAllPlayersC::_AssignMDPairs */
           st::fn_00403A35
                     (g_allPlayers_007FA174,pSVar2->field_0024,pSVar2->field_025E,local_2c,local_28,
                      local_1c);
  local_40 = pDVar8;
  if (pDVar8 == nullptr) {

    local_EAX_1021 =
         st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x113f,0,0,st::mutable_c_string("%s"),
                            "STGroupBoatC::DistributeMD unknown error");
    if (local_EAX_1021 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fff8,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
               0x1140);
  }
  local_64 = pDVar8->count;
  if (local_64 != local_20) {

    local_EAX_1098 =
         st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1144,0,0,st::mutable_c_string("%s"),
                            "STGroupBoatC::DistributeMD different value");
    if (local_EAX_1098 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40
              (-0x5001fff9,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
               0x1145);
  }
  local_20 = 0;
  if (0 < (int)local_64) {
    do {
      uVar11 = local_20;

      st::fn_006ACC70(pDVar8,local_20,&local_3c);
      if (param_1 == 1) {
        local_60 = g_playSystem_00802A38->field_00E4;
        /* ST_CALLSITE[004A38EC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar9 = st::pointer_boundary_cast<STFishC *>(st::fn_004028BA(g_allPlayers_007FA174,pSVar2->field_0024,local_3c,CASE_1));
        /* ST_CALLSITE[004A3901]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5(pSVar9,&local_5c,&local_5a,&local_58);
        local_56 = pSVar9->field_0018;
        /* ST_CALLSITE[004A391C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar9 = st::pointer_boundary_cast<STFishC *>(st::fn_004028BA(g_allPlayers_007FA174,pSVar2->field_0024,uStack_3a,CASE_1));
        /* ST_CALLSITE[004A3931]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5(pSVar9,&local_52,&local_50,&local_4e);
        local_4c = pSVar9->field_0018;
        local_44 = local_32;
        /* ST_CALLSITE[004A3958]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar3 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA(g_allPlayers_007FA174,pSVar2->field_0024,uStack_38,CASE_1));
        /* ST_CALLSITE[004A3965]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        st::fn_00402126(pSVar3,CASE_C,&local_60);
        local_20 = uVar11;
      }
      else {
        pSVar3 = (STBoatC *)
                 /* ST_CALLSITE[004A397F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
                 st::fn_004028BA(g_allPlayers_007FA174,pSVar2->field_0024,uStack_38,CASE_1);
        /* ST_CALLSITE[004A3996]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar9 = st::pointer_boundary_cast<STFishC *>(st::fn_004028BA(g_allPlayers_007FA174,pSVar2->field_0024,local_3c,CASE_1));
        /* ST_CALLSITE[004A39AB]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5(pSVar9,local_c,local_14,local_10);
        /* ST_CALLSITE[004A39C8]: CALL 0x00401708; direct=00401708 STBoatC::SetNewMD */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        st::fn_00401708(pSVar3,1,local_c[0],local_14[0],local_10[0],pSVar9->field_0018,
                          CONCAT22(uStack_34,local_36));
        /* ST_CALLSITE[004A39DD]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar9 = st::pointer_boundary_cast<STFishC *>(st::fn_004028BA(g_allPlayers_007FA174,pSVar2->field_0024,uStack_3a,CASE_1));
        /* ST_CALLSITE[004A39F2]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5(pSVar9,local_c,local_14,local_10);
        /* ST_CALLSITE[004A3A0F]: CALL 0x00401708; direct=00401708 STBoatC::SetNewMD */
        st::fn_00401708(pSVar3,0,local_c[0],local_14[0],local_10[0],pSVar9->field_0018,local_32);
      }
      local_20 = local_20 + 1;
      pDVar8 = local_40;
    } while ((int)local_20 < (int)local_64);
  }
  /* ST_CALLSITE[004A3A38]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
  st::fn_00403D9B
            (g_allPlayers_007FA174,STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_64)), (uint8_t)(pSVar2->field_0024)),
             &local_1c->flags,&local_24->flags);
  st::fn_006A5E40
            (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1165);
  g_currentExceptionFrame = local_b0.previous;
  return;
}

// 004A3CD0 STGroupBoatC::DistributeDock
#line 4 "decomp/ST.exe/functions/004A3CD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DistributeDock */

void __thiscall
st::fn_004A3CD0(STGroupBoatC *this,int param_1,DArrayTy *param_2,DArrayTy *param_3)

{
  dword dVar1;
  STGroupBoatC *pSVar3;
  int local_EAX_54;
  STGameObjC *pSVar4;
  int iVar4;
  int iVar6;
  int local_EAX_299;
  STBoatC *pSVar7;
  DArrayTy *pDVar8;
  STFishC *pSVar9;
  int iVar5;
  uint uVar10;
  InternalExceptionFrame local_88;
  uint local_44;
  short local_40;
  short local_3e;
  short local_3c;
  ushort local_38;
  ushort uStack_36;
  dword local_30;
  STGroupBoatC *local_2c;
  DArrayTy *local_28;
  dword local_24;
  DArrayTy *local_20;
  short local_1c [2];
  short local_18 [2];
  short local_14 [2];
  uint local_10;
  DArrayTy *local_c;
  byte local_8 [4];
  uVar10 = 0;
  local_20 = nullptr;
  local_c = nullptr;
  local_28 = nullptr;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_2c = this;

  local_EAX_54 = st::fn_0072D7F0(local_88.jumpBuffer,0);
  if (local_EAX_54 == 0) {
    if ((param_3 == nullptr) || (local_24 = param_3->count, local_24 == 0)) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x1189);
    }
    dVar1 = local_24;
    local_20 = st::fn_006AE290(nullptr,0,2,1);
    local_c = st::fn_006AE290(nullptr,0,2,1);
    pSVar3 = local_2c;
    if (0 < (int)dVar1) {
      do {

        st::fn_006ACC70(param_3,uVar10,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          /* ST_CALLSITE[004A3D99]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar4 = st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar4 == nullptr) {

            iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1191,0,0,
                                       st::mutable_c_string("%s"),"STGroupBoatC::DistributeDock NULL value");
            if (iVar4 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1192);
          }
          /* ST_CALLSITE[004A3DE5]: CALL dword ptr [EDX + 0x2c] */
          iVar6 = pSVar4->vfunc_2C();
          pDVar8 = local_c;
          if (((iVar6 != 9) &&
              /* ST_CALLSITE[004A3DF1]: CALL dword ptr [EAX + 0x2c] */
              (iVar6 = pSVar4->vfunc_2C(), pDVar8 = local_c, iVar6 != 0x15)) &&
             /* ST_CALLSITE[004A3DFB]: CALL 0x004043e0; direct=004043E0 STGameObjC::sub_00486B40 */
             (local_EAX_299 = st::fn_004043E0(pSVar4), pDVar8 = local_c, local_EAX_299 != 0
             )) {
            pDVar8 = local_20;
          }

          st::fn_006AE1C0(pDVar8,local_8);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)local_24);
    }
    if (local_20->count == 0) {
      dVar1 = local_c->count;
      local_24 = dVar1;
      if ((dVar1 != 0) && (uVar10 = 0, 0 < (int)dVar1)) {
        do {
          /* ST_CALLSITE[004A3E4D]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
          st::fn_006ACC70(local_c,uVar10,local_8);
          /* ST_CALLSITE[004A3E62]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar7 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1));
          /* ST_CALLSITE[004A3E6F]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar7,CASE_3,&local_10);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x11a3);
    }
    if ((param_2 == nullptr) || (param_2->count == 0)) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x11a6);
    }
    pDVar8 = (DArrayTy *)
             /* ST_CALLSITE[004A3ECB]: CALL 0x004024fa; direct=004024FA STAllPlayersC::_AssignDocks */
             st::fn_004024FA(g_allPlayers_007FA174,pSVar3->field_0024,param_2,local_20);
    local_28 = pDVar8;
    if (pDVar8 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x11a9);
    }
    uVar10 = 0;
    local_44 = g_playSystem_00802A38->field_00E4;
    local_30 = pDVar8->count;
    local_10 = local_44;
    if (0 < (int)local_30) {
      do {

        st::fn_006ACC70(pDVar8,uVar10,&local_38);
        if (uStack_36 == 0xffff) {
          /* ST_CALLSITE[004A3F3B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar7 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar3->field_0024,local_38,CASE_1));
          /* ST_CALLSITE[004A3F48]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar7,CASE_3,&local_10);
        }
        else if (param_1 == 1) {
          /* ST_CALLSITE[004A3F67]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar9 = st::pointer_boundary_cast<STFishC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar3->field_0024,uStack_36,CASE_1));
          /* ST_CALLSITE[004A3F7A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
          st::fn_004018C5(pSVar9,local_1c,local_18,local_14);
          local_40 = local_1c[0];
          local_3e = local_18[0];
          local_3c = local_14[0];
          /* ST_CALLSITE[004A3FA7]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar7 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar3->field_0024,local_38,CASE_1));
          /* ST_CALLSITE[004A3FB4]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          st::fn_00402126(pSVar7,CASE_4,&local_44);
        }
        else {
          /* ST_CALLSITE[004A3FC5]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar9 = st::pointer_boundary_cast<STFishC *>(st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar3->field_0024,uStack_36,CASE_1));
          /* ST_CALLSITE[004A3FD8]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
          st::fn_004018C5(pSVar9,local_1c,local_18,local_14);
          /* ST_CALLSITE[004A3FED]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar4 = st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar3->field_0024,local_38,CASE_1);
          st::fn_00405669(pSVar4,local_1c[0],local_18[0],local_14[0]);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)local_30);
    }
    dVar1 = local_c->count;
    local_24 = dVar1;
    if ((dVar1 != 0) && (uVar10 = 0, pDVar8 = local_28, 0 < (int)dVar1)) {
      do {

        st::fn_006ACC70(local_c,uVar10,local_8);
        /* ST_CALLSITE[004A4042]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar7 = st::pointer_boundary_cast<STBoatC *>(st::fn_004028BA
                           (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1));
        /* ST_CALLSITE[004A404F]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
        st::fn_00402126(pSVar7,CASE_3,&local_10);
        uVar10 = uVar10 + 1;
        pDVar8 = local_28;
      } while ((int)uVar10 < (int)dVar1);
    }
    if (local_20 != nullptr) {
      st::fn_006AE110(local_20);
    }
    if (local_c != nullptr) {
      st::fn_006AE110(local_c);
    }
    if (pDVar8 != nullptr) {
      st::fn_006AE110(pDVar8);
    }
    g_currentExceptionFrame = local_88.previous;
    return;
  }
  g_currentExceptionFrame = local_88.previous;
  if (local_EAX_54 == -0x5001fff7) {
    if (local_20 != nullptr) {
      st::fn_006AE110(local_20);
    }
    if (local_c != nullptr) {
      st::fn_006AE110(local_c);
    }
    if (local_28 != nullptr) {
      st::fn_006AE110(local_28);
      return;
    }
  }
  else {

    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x11d8,0,local_EAX_54,
                               st::mutable_c_string("%s"),"STGroupBoatC::DistributeDock");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_54,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x11d9);
  }
  return;
}

// 004A4240 STGroupBoatC::ChangeMDNotify
#line 4 "decomp/ST.exe/functions/004A4240/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ChangeMDNotify */

void __thiscall st::fn_004A4240(STGroupBoatC *this,int param_1,uint param_2)

{
  dword dVar1;
  STGroupBoatC *this_00;
  int local_EAX_70;
  STGameObjC *this_01;
  int iVar5;
  int iVar6;
  int local_EAX_228;
  int iVar7;
  int local_EAX_1110;
  int local_EAX_1610;
  int iVar3;
  int iVar4;
  DArrayTy *pDVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  DArrayTy *pDVar12;
  DArrayTy *pDVar13;
  InternalExceptionFrame local_78;
  int local_34 [4];
  STGroupBoatC *local_24;
  int *local_20;
  int local_1c;
  STGameObjC *local_18;
  byte local_14 [4];
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_1c = 4;
  local_34[0] = 0x38;
  local_34[1] = 0x39;
  local_34[2] = 0x4f;
  local_34[3] = 0x5e;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_24 = this;

  local_EAX_70 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  this_00 = local_24;
  if (local_EAX_70 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (local_EAX_70 != -0x5001fff7) {

      iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x126a,0,local_EAX_70,
                                 st::mutable_c_string("%s"),"STGroupBoatC::ChangeMDNotify");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(local_EAX_70,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x126b);
    }
    return;
  }
  /* ST_CALLSITE[004A42AB]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  this_01 = st::fn_004028BA
                      (g_allPlayers_007FA174,local_24->field_0024,(ushort)param_2,CASE_1);
  local_18 = this_01;
  if (param_1 == 1) {
    /* ST_CALLSITE[004A42C5]: CALL dword ptr [EDX + 0x2c] */
    iVar5 = this_01->vfunc_2C();
    /* ST_CALLSITE[004A42D5]: CALL dword ptr [EAX + 0x2c] */
    if ((iVar5 == 0x3b) || (iVar5 = this_01->vfunc_2C(), iVar5 == 0x60)) {
      if ((this_00->field_0262 == 1) || (this_00->field_0262 == 0)) {
        if (this_00->field_0266 == nullptr) {
          st::fn_006A5E40
                    (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x11f2);
        }
        uVar10 = 0;
        dVar1 = this_00->field_0266->count;
        if (0 < (int)dVar1) {
          do {

            st::fn_006ACC70(this_00->field_0266,uVar10,&local_10);
            if ((short)local_10 == -1) break;
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)dVar1);
        }

        st::fn_006AE140(this_00->field_0266,uVar10,&param_2);
        /* ST_CALLSITE[004A4508]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
        st::fn_0040143D(this_00,0,this_00->field_024E,this_00->field_0266,this_00->field_0029);
        this_01 = local_18;
      }
      if (this_00->field_0262 != 2) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      /* ST_CALLSITE[004A452B]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      st::fn_004018C5(reinterpret_cast<STFishC *>(this_01),&local_a,&local_8,&local_6);
      if (local_a < this_00->field_026A) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0270 + -1 + (int)this_00->field_026A < (int)local_a) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_8 < this_00->field_026C) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0272 + -1 + (int)this_00->field_026C < (int)local_8) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_6 < this_00->field_026E) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0274 + -1 + (int)this_00->field_026E < (int)local_6) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0266 == nullptr) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x11fe);
      }
      uVar10 = 0;
      dVar1 = this_00->field_0266->count;
      if (0 < (int)dVar1) {
        do {

          st::fn_006ACC70(this_00->field_0266,uVar10,&local_10);
          if ((short)local_10 == -1) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      pDVar8 = this_00->field_0266;
    }
    else {
      iVar5 = 0;
      if (0 < local_1c) {
        piVar9 = local_34;
        do {
          /* ST_CALLSITE[004A42F2]: CALL dword ptr [EDX + 0x2c] */
          iVar6 = local_18->vfunc_2C();
          this_01 = local_18;
          if (iVar6 == *piVar9) break;
          iVar5 = iVar5 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar5 < local_1c);
      }
      if (iVar5 == local_1c) {

        local_EAX_228 =
             st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x120a,0,0,st::mutable_c_string("%s"),
                                "STGroupBoatC::ChangeMDNotify invalid type");
        if (local_EAX_228 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        st::fn_006A5E40
                  (-0x5001fffe,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x120b);
      }
      if (this_00->field_024A != 2) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      /* ST_CALLSITE[004A435C]: CALL dword ptr [EDX + 0x2c] */
      iVar5 = this_01->vfunc_2C();
      if (iVar5 != this_00->field_025E) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      /* ST_CALLSITE[004A4373]: CALL dword ptr [EAX + 0x88] */
      iVar5 = (*this_01->vtable->vfunc_88)(st::machine_word_boundary_cast<undefined4>(local_14));
      if (iVar5 < 1) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      /* ST_CALLSITE[004A438F]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
      st::fn_004018C5(reinterpret_cast<STFishC *>(this_01),&local_a,&local_8,&local_6);
      if (local_a < this_00->field_0252) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_0258 + -1 + (int)this_00->field_0252 < (int)local_a) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_8 < this_00->field_0254) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_025A + -1 + (int)this_00->field_0254 < (int)local_8) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (local_6 < this_00->field_0256) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_025C + -1 + (int)this_00->field_0256 < (int)local_6) {
        g_currentExceptionFrame = local_78.previous;
        return;
      }
      if (this_00->field_024E == nullptr) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x1215);
      }
      uVar10 = 0;
      dVar1 = this_00->field_024E->count;
      if (0 < (int)dVar1) {
        do {

          st::fn_006ACC70(this_00->field_024E,uVar10,&local_10);
          if ((short)local_10 == -1) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      pDVar8 = this_00->field_024E;
    }

    st::fn_006AE140(pDVar8,uVar10,&param_2);
    pDVar8 = this_00->field_0029;
    pDVar13 = this_00->field_0266;
    pDVar12 = this_00->field_024E;
    goto LAB_004a4aab;
  }
  /* ST_CALLSITE[004A4635]: CALL dword ptr [EAX + 0x2c] */
  iVar5 = this_01->vfunc_2C();
  if ((iVar5 == 0x3b) ||
     /* ST_CALLSITE[004A4645]: CALL dword ptr [EDX + 0x2c] */
     (iVar6 = this_01->vfunc_2C(), iVar5 = local_1c, iVar6 == 0x60)) {
    if ((this_00->field_0262 == 1) || (this_00->field_0262 == 0)) {
      if (this_00->field_0266 == nullptr) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x1226);
      }
      uVar10 = 0;
      dVar1 = this_00->field_0266->count;
      if (0 < (int)dVar1) {
        do {

          st::fn_006ACC70(this_00->field_0266,uVar10,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;

            st::fn_006AE140(this_00->field_0266,uVar10,&local_10);
            break;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      /* ST_CALLSITE[004A4938]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
      st::fn_0040143D(this_00,0,this_00->field_024E,this_00->field_0266,this_00->field_0029);
      this_01 = local_18;
    }
    if (this_00->field_0262 != 2) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    /* ST_CALLSITE[004A495B]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(reinterpret_cast<STFishC *>(this_01),&local_a,&local_8,&local_6);
    if (local_a < this_00->field_026A) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0270 + -1 + (int)this_00->field_026A < (int)local_a) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_8 < this_00->field_026C) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0272 + -1 + (int)this_00->field_026C < (int)local_8) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_6 < this_00->field_026E) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0274 + -1 + (int)this_00->field_026E < (int)local_6) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0266 == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x1234);
    }
    uVar11 = 0;
    uVar10 = this_00->field_0266->count;
    if (0 < (int)uVar10) {
      do {

        st::fn_006ACC70(this_00->field_0266,uVar11,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;

          st::fn_006AE140(this_00->field_0266,uVar11,&local_10);
          break;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar10);
    }
    if (uVar11 == uVar10) {

      iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x123b,0,0,st::mutable_c_string("%s"),
                                 "STGroupBoatC::ChangeMDNotify depot is absent");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x123c;
      goto LAB_004a4a83;
    }
  }
  else {
    iVar6 = 0;
    if (0 < local_1c) {
      local_20 = local_34;
      do {
        /* ST_CALLSITE[004A4665]: CALL dword ptr [EDX + 0x2c] */
        iVar7 = local_18->vfunc_2C();
        if (iVar7 == *local_20) break;
        iVar6 = iVar6 + 1;
        local_20 = local_20 + 1;
      } while (iVar6 < iVar5);
    }
    if (iVar6 == iVar5) {

      local_EAX_1110 =
           st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1246,0,0,st::mutable_c_string("%s"),
                              "STGroupBoatC::ChangeMDNotify invalid type");
      if (local_EAX_1110 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40
                (-0x5001fffe,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x1247);
    }
    if (this_00->field_024A == 0) {
      if (this_00->field_024E == nullptr) {
        st::fn_006A5E40
                  (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                   0x124b);
      }
      uVar10 = 0;
      dVar1 = this_00->field_024E->count;
      if (0 < (int)dVar1) {
        do {

          st::fn_006ACC70(this_00->field_024E,uVar10,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;

            st::fn_006AE140(this_00->field_024E,uVar10,&local_10);
            break;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar1);
      }
      /* ST_CALLSITE[004A474F]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
      st::fn_0040143D(this_00,0,this_00->field_024E,this_00->field_0266,this_00->field_0029);
    }
    if (this_00->field_024A != 2) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    /* ST_CALLSITE[004A4770]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(reinterpret_cast<STFishC *>(local_18),&local_a,&local_8,&local_6);
    if (local_a < this_00->field_0252) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_0258 + -1 + (int)this_00->field_0252 < (int)local_a) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_8 < this_00->field_0254) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_025A + -1 + (int)this_00->field_0254 < (int)local_8) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (local_6 < this_00->field_0256) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_025C + -1 + (int)this_00->field_0256 < (int)local_6) {
      g_currentExceptionFrame = local_78.previous;
      return;
    }
    if (this_00->field_024E == nullptr) {
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x1259);
    }
    uVar11 = 0;
    uVar10 = this_00->field_024E->count;
    if (0 < (int)uVar10) {
      do {

        st::fn_006ACC70(this_00->field_024E,uVar11,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;

          st::fn_006AE140(this_00->field_024E,uVar11,&local_10);
          break;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar10);
    }
    if (uVar11 == uVar10) {

      local_EAX_1610 =
           st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1260,0,0,st::mutable_c_string("%s"),
                              "STGroupBoatC::ChangeMDNotify mine is absent");
      if (local_EAX_1610 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x1261;
LAB_004a4a83:
      st::fn_006A5E40
                (-0x5001fffe,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 iVar5);
    }
  }
  pDVar8 = this_00->field_0029;
  pDVar13 = this_00->field_0266;
  pDVar12 = this_00->field_024E;
LAB_004a4aab:
  /* ST_CALLSITE[004A4AAF]: CALL 0x0040143d; direct=0040143D STGroupBoatC::DistributeMD */
  st::fn_0040143D(this_00,0,pDVar12,pDVar13,pDVar8);
  g_currentExceptionFrame = local_78.previous;
  return;
}

// 004A4D60 STGroupBoatC::ChangeMDNotify
#line 4 "decomp/ST.exe/functions/004A4D60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ChangeMDNotify */

void __thiscall st::fn_004A4D60(STGroupBoatC *this,int param_1,short param_2)

{
  STGroupBoatC *this_00;
  int iVar2;
  int iVar3;
  short *element;
  uint index;
  InternalExceptionFrame local_50;
  STGroupBoatC *local_c;
  short local_8 [2];

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if (iVar2 != -0x5001fff7) {

      iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1294,0,iVar2,
                                 st::mutable_c_string("%s"),"STGroupBoatC::ChangeMDNotify");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1295);
    }
    return;
  }
  if (param_1 == 1) {
    if (local_c->field_029B != 1) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (local_c->field_029F == 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(local_c->field_029F + 0xc);
    index = 0;
    if (0 < iVar2) {
      do {

        st::fn_006ACC70((DArrayTy *)this_00->field_029F,index,local_8);
        if (local_8[0] == -1) break;
        index = index + 1;
      } while ((int)index < iVar2);
    }
    element = &param_2;
LAB_004a4e27:

    st::fn_006AE140((DArrayTy *)this_00->field_029F,index,element);
  }
  else {
    if (local_c->field_029F == 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(local_c->field_029F + 0xc);
    index = 0;
    if (0 < iVar2) {
      do {

        st::fn_006ACC70((DArrayTy *)this_00->field_029F,index,local_8);
        if (local_8[0] == param_2) {
          local_8[0] = -1;
          local_8[1] = 0;
          element = local_8;
          goto LAB_004a4e27;
        }
        index = index + 1;
      } while ((int)index < iVar2);
    }
  }
  /* ST_CALLSITE[004A4E44]: CALL 0x00403251; direct=00403251 STGroupBoatC::DistributeDock */
  st::fn_00403251(this_00,0,(DArrayTy *)this_00->field_029F,this_00->field_0029);
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 004A4F10 STGroupBoatC::SaveGrpBData
#line 4 "decomp/ST.exe/functions/004A4F10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SaveGrpBData */

undefined4 * __thiscall st::fn_004A4F10(STGroupBoatC *this,int *param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  int iVar5;
  uint *puVar6;
  int iVar4;
  byte *puVar7;
  uint uVar8;
  short *psVar9;
  int *piVar10;
  ushort *puVar11;
  byte *puVar12;
  short *psVar13;
  int *piVar14;
  InternalExceptionFrame local_5c;
  undefined4 *local_18;
  STGroupBoatC *local_14;
  int local_10;
  ushort *local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;

  iVar3 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pSVar2 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1495,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::SaveGrpBData");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1496);
    return local_18;
  }
  *param_1 = 0x321;
  if (local_14->field_0059 != nullptr) {
    iVar5 = *STField<int *>(local_14,0x59) * 0x10;
    local_8 = iVar5 + 0xc;
    *param_1 = iVar5 + 0x32d;
  }
  if (local_14->field_00EF != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_00EF->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0103 != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_0103->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_010F != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_010F->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0127 != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_0127->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0160 != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_0160->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0168 != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_0168->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01CA != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_01CA->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01CE != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_01CE->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01D2 != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_01D2->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01D6 != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_01D6->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01DA != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_01DA->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_01DE != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_01DE->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_020E != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_020E->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  *param_1 = *param_1 + pSVar2->field_021A * 8;
  if (pSVar2->field_0226 != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_0226->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_022A != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_022A->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_022E != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_022E->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_024E != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_024E->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if (pSVar2->field_0266 != nullptr) {

    local_c = static_cast<ushort *>(st::fn_006B0020(&pSVar2->field_0266->flags,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }
  if ((uint *)pSVar2->field_029F != 0) {

    local_c = static_cast<ushort *>(st::fn_006B0020((uint *)pSVar2->field_029F,reinterpret_cast<int *>(&local_8)));
    st::fn_006AB060(&local_c);
    *param_1 = *param_1 + local_8;
  }

  puVar6 = static_cast<uint *>(st::fn_006AAC70(*param_1));
  *puVar6 = local_14->field_003D;
  puVar6[1] = local_14->field_0041;
  puVar6[2] = local_14->field_0045;
  puVar6[3] = local_14->field_0049;
  puVar6[4] = local_14->field_004D;
  puVar6[5] = local_14->field_0051;
  puVar6[6] = local_14->field_0055;
  puVar6[9] = local_14->field_005D;
  puVar6[10] = local_14->field_0061;
  puVar6[0xb] = local_14->field_0065;
  puVar7 = reinterpret_cast<byte *>(&local_14->field_0x69);
  puVar12 = reinterpret_cast<byte *>((puVar6 + 0xc));
  memmove(puVar12, puVar7, 0x20); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  puVar7 = reinterpret_cast<byte *>((&local_14->field_0089));
  puVar12 = reinterpret_cast<byte *>((puVar6 + 0x14));
  memmove(puVar12, puVar7, 0x54); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  puVar6[0x29] = *(undefined4 *)&local_14->field_00DD;
  puVar6[0x2a] = *(undefined4 *)&local_14->field_0xe1;
  *(undefined2 *)(puVar6 + 0x2b) = local_14->field_00E5;
  STField<undefined4>(puVar6,0xae) = local_14->field_00E7;
  STField<short>(puVar6,0xba) = local_14->field_00F3;
  *(short *)(puVar6 + 0x2f) = local_14->field_00F5;
  STField<short>(puVar6,0xbe) = local_14->field_00F7;
  *(short *)(puVar6 + 0x30) = local_14->field_00F9;
  STField<short>(puVar6,0xc2) = local_14->field_00FB;
  *(short *)(puVar6 + 0x31) = local_14->field_00FD;
  STField<undefined4>(puVar6,0xc6) = *(undefined4 *)&local_14->field_0xff;
  STField<undefined4>(puVar6,0xd2) = local_14->field_0107;
  STField<undefined4>(puVar6,0xd6) = local_14->field_010B;
  STField<undefined2>(puVar6,0xe2) = local_14->field_0113;
  *(undefined2 *)(puVar6 + 0x39) = local_14->field_0115;
  STField<undefined2>(puVar6,0xe6) = local_14->field_0117;
  *(undefined2 *)(puVar6 + 0x3a) = local_14->field_0119;
  STField<undefined2>(puVar6,0xea) = local_14->field_011B;
  *(undefined2 *)(puVar6 + 0x3b) = local_14->field_011D;
  STField<undefined4>(puVar6,0xee) = local_14->field_011F;
  STField<undefined4>(puVar6,0xf2) = local_14->field_0123;
  STField<undefined2>(puVar6,0xfe) = local_14->field_012B;
  *(undefined2 *)(puVar6 + 0x40) = local_14->field_012D;
  STField<undefined2>(puVar6,0x102) = local_14->field_012F;
  *(undefined2 *)(puVar6 + 0x41) = local_14->field_0131;
  STField<undefined2>(puVar6,0x106) = local_14->field_0133;
  *(undefined2 *)(puVar6 + 0x42) = local_14->field_0135;
  puVar7 = reinterpret_cast<byte *>(&local_14->field_0137);
  puVar12 = (byte *)((int)puVar6 + 0x10a);
  memmove(puVar12, puVar7, 0x1f); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  STField<undefined4>(puVar6,0x129) = *(undefined4 *)&local_14->field_0156;
  STField<undefined2>(puVar6,0x12d) = local_14->field_015A;
  ((undefined1 *)puVar6)[0x69] = local_14->field_01C9;
  STField<undefined4>(puVar6,0x12f) = local_14->field_015C;
  STField<undefined4>(puVar6,0x13b) = local_14->field_0164;
  STField<undefined2>(puVar6,0x147) = local_14->field_016C;
  STField<undefined2>(puVar6,0x149) = local_14->field_016E;
  STField<undefined2>(puVar6,0x14b) = local_14->field_0170;
  STField<undefined2>(puVar6,0x14d) = local_14->field_0172;
  STField<undefined2>(puVar6,0x14f) = local_14->field_0174;
  STField<undefined2>(puVar6,0x151) = local_14->field_0176;
  STField<RecoveredRecordView_005EFAE0_855D930D *>(puVar6,0x153) = local_14->field_0178;
  STField<undefined2>(puVar6,0x157) = local_14->field_017C;
  STField<undefined2>(puVar6,0x159) = local_14->field_017E;
  STField<undefined2>(puVar6,0x15b) = local_14->field_0180;
  STField<undefined4>(puVar6,0x15d) = *(undefined4 *)&local_14->field_0182;
  STField<undefined4>(puVar6,0x161) = local_14->field_0186;
  STField<undefined2>(puVar6,0x165) = local_14->field_018A;
  STField<undefined4>(puVar6,0x167) = *(undefined4 *)&local_14->field_018C;
  STField<undefined2>(puVar6,0x16b) = local_14->field_0190;
  STField<undefined4>(puVar6,0x16d) = *(undefined4 *)&local_14->field_0x192;
  STField<undefined2>(puVar6,0x171) = local_14->field_0196;
  STField<undefined1>(puVar6,0x173) = local_14->field_0198;
  puVar6[0x5d] = local_14->field_0199;
  puVar6[0x5e] = *(undefined4 *)&local_14->field_019D;
  *(undefined2 *)(puVar6 + 0x5f) = local_14->field_01A1;
  STField<undefined4>(puVar6,0x17e) = local_14->field_01A3;
  STField<undefined4>(puVar6,0x182) = *(undefined4 *)&local_14->field_01A7;
  STField<undefined4>(puVar6,0x186) = *(undefined4 *)&local_14->field_01AB;
  STField<undefined4>(puVar6,0x18a) = *(undefined4 *)&local_14->field_01AF;
  STField<undefined4>(puVar6,0x18e) = *(undefined4 *)&local_14->field_01B3;
  STField<undefined2>(puVar6,0x192) = local_14->field_01B7;
  puVar6[0x65] = *(undefined4 *)&local_14->field_01B9;
  *(short *)(puVar6 + 0x66) = local_14->field_01BD;
  STField<undefined4>(puVar6,0x19a) = *(undefined4 *)&local_14->field_01BF;
  STField<undefined2>(puVar6,0x19e) = local_14->field_01C3;
  puVar6[0x68] = st::machine_word_boundary_cast<uint>(local_14->field_01C5);
  puVar7 = reinterpret_cast<byte *>(&local_14->field_0x1e2);
  puVar12 = (byte *)((int)puVar6 + 0x1d5);
  memmove(puVar12, puVar7, 0x28); /* compiler REP MOVS byte copy */
  iVar5 = 0;
  STField<undefined4>(puVar6,0x205) = local_14->field_0212;
  STField<int>(puVar6,0x209) = local_14->field_0216;
  STField<int>(puVar6,0x20d) = local_14->field_021A;
  STField<undefined4>(puVar6,0x219) = *(undefined4 *)&local_14->field_0x222;
  STField<int>(puVar6,0x235) = local_14->field_0232;
  STField<undefined4>(puVar6,0x239) = local_14->field_0236;
  STField<undefined4>(puVar6,0x23d) = local_14->field_023A;
  STField<int>(puVar6,0x241) = local_14->field_023E;
  STField<int>(puVar6,0x245) = local_14->field_0242;
  STField<undefined4>(puVar6,0x249) = local_14->field_0246;
  STField<undefined4>(puVar6,0x24d) = local_14->field_024A;
  STField<short>(puVar6,0x259) = local_14->field_0252;
  STField<short>(puVar6,0x25b) = local_14->field_0254;
  STField<short>(puVar6,0x25d) = local_14->field_0256;
  STField<short>(puVar6,0x25f) = local_14->field_0258;
  STField<short>(puVar6,0x261) = local_14->field_025A;
  STField<short>(puVar6,0x263) = local_14->field_025C;
  STField<int>(puVar6,0x265) = local_14->field_025E;
  STField<undefined4>(puVar6,0x269) = local_14->field_0262;
  STField<short>(puVar6,0x275) = local_14->field_026A;
  STField<short>(puVar6,0x277) = local_14->field_026C;
  STField<short>(puVar6,0x279) = local_14->field_026E;
  STField<short>(puVar6,0x27b) = local_14->field_0270;
  STField<short>(puVar6,0x27d) = local_14->field_0272;
  STField<short>(puVar6,0x27f) = local_14->field_0274;
  psVar9 = &local_14->field_0276;
  psVar13 = (short *)((int)puVar6 + 0x281);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)psVar13 = *(undefined4 *)psVar9;
    psVar9 = psVar9 + 2;
    psVar13 = psVar13 + 2;
  }
  *psVar13 = *psVar9;
  ((char *)psVar13)[1] = (char)psVar9[1];
  puVar6[0xa8] = *(undefined4 *)&local_14->field_0295;
  *(short *)(puVar6 + 0xa9) = local_14->field_0299;
  STField<undefined4>(puVar6,0x2a6) = local_14->field_029B;
  STField<undefined4>(puVar6,0x2b2) = *(undefined4 *)&local_14->field_02A3;
  STField<undefined4>(puVar6,0x2b6) = *(undefined4 *)&local_14->field_0x2a7;
  STField<undefined2>(puVar6,0x2ba) = local_14->field_02AB;
  puVar6[0xaf] = *(undefined4 *)&local_14->field_02AD;
  *(undefined2 *)(puVar6 + 0xb0) = local_14->field_02B1;
  STField<undefined4>(puVar6,0x2c2) = *(undefined4 *)&local_14->field_02B3;
  STField<undefined4>(puVar6,0x2c6) = *(undefined4 *)&local_14->field_0x2b7;
  STField<undefined2>(puVar6,0x2ca) = local_14->field_02BB;
  puVar6[0xb3] = *(undefined4 *)&local_14->field_02BD;
  *(undefined2 *)(puVar6 + 0xb4) = local_14->field_02C1;
  STField<undefined4>(puVar6,0x2d2) = *(undefined4 *)&local_14->field_0x2c3;
  STField<undefined4>(puVar6,0x2d6) = *(undefined4 *)&local_14->field_0x2c7;
  STField<undefined2>(puVar6,0x2da) = local_14->field_02CB;
  ((undefined1 *)puVar6)[0xb7] = local_14->field_02CD;
  STField<undefined4>(puVar6,0x2dd) = local_14->field_02CE;
  STField<undefined4>(puVar6,0x2e1) = *(undefined4 *)&local_14->field_02D2;
  STField<undefined2>(puVar6,0x2e5) = local_14->field_02D6;
  STField<undefined4>(puVar6,0x2e7) = local_14->field_02D8;
  STField<undefined4>(puVar6,0x2eb) = *(undefined4 *)&local_14->field_02DC;
  STField<undefined4>(puVar6,0x2ef) = *(undefined4 *)&local_14->field_02E0;
  STField<undefined4>(puVar6,0x2f3) = *(undefined4 *)&local_14->field_02E4;
  STField<undefined4>(puVar6,0x2f7) = *(undefined4 *)&local_14->field_02E8;
  STField<undefined2>(puVar6,0x2fb) = local_14->field_02EC;
  STField<undefined4>(puVar6,0x2fd) = *(undefined4 *)&local_14->field_02EE;
  STField<undefined4>(puVar6,0x301) = *(undefined4 *)&local_14->field_0x2f2;
  STField<undefined2>(puVar6,0x305) = local_14->field_02F6;
  STField<undefined4>(puVar6,0x307) = *(undefined4 *)&local_14->field_02F8;
  STField<undefined4>(puVar6,0x30b) = *(undefined4 *)&local_14->field_02FC;
  STField<undefined4>(puVar6,0x30f) = *(undefined4 *)&local_14->field_0300;
  STField<undefined4>(puVar6,0x313) = *(undefined4 *)&local_14->field_0304;
  STField<undefined4>(puVar6,0x317) = *(undefined4 *)&local_14->field_0x308;
  STField<undefined2>(puVar6,0x31b) = local_14->field_030C;
  STField<undefined4>(puVar6,0x31d) = *(undefined4 *)&local_14->field_0x30e;
  piVar10 = static_cast<int *>(local_14->field_0059);
  if (piVar10 == nullptr) {
    local_8 = 0;
    puVar6[7] = 0xffffffff;
    puVar6[8] = 0;
  }
  else {
    local_8 = *piVar10 * 0x10 + 0xc;
    piVar14 = (int *)((int)puVar6 + 0x321);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *piVar14 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar14 = piVar14 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(char *)piVar14 = (char)*piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      piVar14 = (int *)((int)piVar14 + 1);
    }
    puVar6[7] = 0x321;
    puVar6[8] = local_8;
  }
  local_10 = local_8 + 0x321;
  local_18 = puVar6;
  if (local_14->field_00EF == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0xb2) = 0xffffffff;
    STField<undefined4>(puVar6,0xb6) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_00EF->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0xb2) = local_10;
    STField<uint>(puVar6,0xb6) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0103 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0xca) = 0xffffffff;
    STField<undefined4>(puVar6,0xce) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_0103->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0xca) = local_10;
    STField<uint>(puVar6,0xce) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_010F == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0xda) = 0xffffffff;
    STField<undefined4>(puVar6,0xde) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_010F->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0xda) = local_10;
    STField<uint>(puVar6,0xde) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0127 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0xf6) = 0xffffffff;
    STField<undefined4>(puVar6,0xfa) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_0127->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0xf6) = local_10;
    STField<uint>(puVar6,0xfa) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0160 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x133) = 0xffffffff;
    STField<undefined4>(puVar6,0x137) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_0160->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x133) = local_10;
    STField<uint>(puVar6,0x137) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0168 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x13f) = 0xffffffff;
    STField<undefined4>(puVar6,0x143) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_0168->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x13f) = local_10;
    STField<uint>(puVar6,0x143) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01CA == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1a5) = 0xffffffff;
    STField<undefined4>(puVar6,0x1a9) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_01CA->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1a5) = local_10;
    STField<uint>(puVar6,0x1a9) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01CE == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1ad) = 0xffffffff;
    STField<undefined4>(puVar6,0x1b1) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_01CE->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1ad) = local_10;
    STField<uint>(puVar6,0x1b1) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01D2 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1b5) = 0xffffffff;
    STField<undefined4>(puVar6,0x1b9) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_01D2->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1b5) = local_10;
    STField<uint>(puVar6,0x1b9) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01D6 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1bd) = 0xffffffff;
    STField<undefined4>(puVar6,0x1c1) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_01D6->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1bd) = local_10;
    STField<uint>(puVar6,0x1c1) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01DA == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1c5) = 0xffffffff;
    STField<undefined4>(puVar6,0x1c9) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_01DA->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1c5) = local_10;
    STField<uint>(puVar6,0x1c9) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_01DE == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1cd) = 0xffffffff;
    STField<undefined4>(puVar6,0x1d1) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_01DE->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1cd) = local_10;
    STField<uint>(puVar6,0x1d1) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_020E == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x1fd) = 0xffffffff;
    STField<undefined4>(puVar6,0x201) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_020E->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x1fd) = local_10;
    STField<uint>(puVar6,0x201) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  local_c = local_14->field_021E;
  if (local_c == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x211) = 0xffffffff;
    STField<undefined4>(puVar6,0x215) = 0;
  }
  else {
    local_8 = local_14->field_021A << 3;
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (iVar5 = (local_14->field_021A & 0x1fffffffU) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x211) = local_10;
    STField<uint>(puVar6,0x215) = local_8;
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0226 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x21d) = 0xffffffff;
    STField<undefined4>(puVar6,0x221) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_0226->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x21d) = local_10;
    STField<uint>(puVar6,0x221) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_022A == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x225) = 0xffffffff;
    STField<undefined4>(puVar6,0x229) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_022A->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x225) = local_10;
    STField<uint>(puVar6,0x229) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_022E == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x22d) = 0xffffffff;
    STField<undefined4>(puVar6,0x231) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_022E->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x22d) = local_10;
    STField<uint>(puVar6,0x231) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_024E == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x251) = 0xffffffff;
    STField<undefined4>(puVar6,0x255) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_024E->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x251) = local_10;
    STField<uint>(puVar6,0x255) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if (local_14->field_0266 == nullptr) {
    local_8 = 0;
    STField<undefined4>(puVar6,0x26d) = 0xffffffff;
    STField<undefined4>(puVar6,0x271) = 0;
  }
  else {

    local_c = static_cast<ushort *>(st::fn_006B0020(&local_14->field_0266->flags,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x26d) = local_10;
    STField<uint>(puVar6,0x271) = local_8;
    st::fn_006AB060(&local_c);
  }
  local_10 = local_10 + local_8;
  if ((uint *)local_14->field_029F != 0) {

    local_c = static_cast<ushort *>(st::fn_006B0020((uint *)local_14->field_029F,reinterpret_cast<int *>(&local_8)));
    puVar11 = local_c;
    puVar7 = (byte *)(local_10 + (int)puVar6);
    for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar7 = *(undefined4 *)puVar11;
      puVar11 = puVar11 + 2;
      puVar7 = reinterpret_cast<byte *>((puVar7 + 1));
    }
    for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)puVar7 = (char)*puVar11;
      puVar11 = (ushort *)((int)puVar11 + 1);
      puVar7 = (byte *)((int)puVar7 + 1);
    }
    STField<int>(puVar6,0x2aa) = local_10;
    STField<uint>(puVar6,0x2ae) = local_8;
    st::fn_006AB060(&local_c);
    g_currentExceptionFrame = local_5c.previous;
    return puVar6;
  }
  STField<undefined4>(puVar6,0x2aa) = 0xffffffff;
  STField<undefined4>(puVar6,0x2ae) = 0;
  g_currentExceptionFrame = local_5c.previous;
  return puVar6;
}

// 004A67A0 STGroupBoatC::RestoreGrpBData
#line 4 "decomp/ST.exe/functions/004A67A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::RestoreGrpBData */

void __thiscall st::fn_004A67A0(STGroupBoatC *this,undefined4 *param_1)

{
  uint uVar1;
  uint *puVar3;
  int iVar3;
  byte *puVar4;
  DArrayTy *pDVar5;
  ushort *puVar6;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  byte *puVar11;
  short *psVar12;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  STGroupBoatC *local_8;

  local_c = param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  puVar3 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x158b,0,iVar3,st::mutable_c_string("%s"),
                               "STGroupBoatC::RestoreGrpBData");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x158c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_8->field_003D = *local_c;
  local_8->field_0041 = local_c[1];
  local_8->field_0045 = local_c[2];
  local_8->field_0049 = local_c[3];
  local_8->field_004D = local_c[4];
  local_8->field_0051 = local_c[5];
  local_8->field_0055 = local_c[6];
  local_8->field_005D = local_c[9];
  local_8->field_0061 = local_c[10];
  local_8->field_0065 = local_c[0xb];
  puVar11 = reinterpret_cast<byte *>((local_c + 0xc));
  puVar4 = reinterpret_cast<byte *>(&local_8->field_0x69);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar11;
    puVar11 = reinterpret_cast<byte *>((puVar11 + 1));
    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
  }
  puVar11 = reinterpret_cast<byte *>((local_c + 0x14));
  puVar4 = reinterpret_cast<byte *>((&local_8->field_0089));
  for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar11;
    puVar11 = reinterpret_cast<byte *>((puVar11 + 1));
    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
  }
  uVar1 = local_c[0x29];
  local_8->field_00DD = (short)uVar1;
  local_8->field_00DF = (short)((uint)uVar1 >> 0x10);
  *(undefined4 *)&local_8->field_0xe1 = local_c[0x2a];
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00E5 = *(undefined2 *)(local_c + 0x2b);
  local_8->field_00E7 = STField<undefined4>(local_c,0xae);
  local_8->field_00F3 = STField<short>(local_c,0xba);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00F5 = *(short *)(local_c + 0x2f);
  local_8->field_00F7 = STField<short>(local_c,0xbe);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00F9 = *(short *)(local_c + 0x30);
  local_8->field_00FB = STField<short>(local_c,0xc2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_00FD = *(short *)(local_c + 0x31);
  *(undefined4 *)&local_8->field_0xff = STField<undefined4>(local_c,0xc6);
  local_8->field_0107 = STField<undefined4>(local_c,0xd2);
  local_8->field_010B = STField<undefined4>(local_c,0xd6);
  local_8->field_0113 = STField<undefined2>(local_c,0xe2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0115 = *(undefined2 *)(local_c + 0x39);
  local_8->field_0117 = STField<undefined2>(local_c,0xe6);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0119 = *(undefined2 *)(local_c + 0x3a);
  local_8->field_011B = STField<undefined2>(local_c,0xea);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_011D = *(undefined2 *)(local_c + 0x3b);
  local_8->field_011F = STField<undefined4>(local_c,0xee);
  local_8->field_0123 = STField<undefined4>(local_c,0xf2);
  local_8->field_012B = STField<undefined2>(local_c,0xfe);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_012D = *(undefined2 *)(local_c + 0x40);
  local_8->field_012F = STField<undefined2>(local_c,0x102);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0131 = *(undefined2 *)(local_c + 0x41);
  local_8->field_0133 = STField<undefined2>(local_c,0x106);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0135 = *(undefined2 *)(local_c + 0x42);
  puVar11 = (byte *)((int)local_c + 0x10a);
  puVar4 = reinterpret_cast<byte *>(&local_8->field_0137);
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar11;
    puVar11 = reinterpret_cast<byte *>((puVar11 + 1));
    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar11;
  STField<undefined1>(puVar4,2) = STField<undefined1>(puVar11,2);
  uVar1 = STField<undefined4>(local_c,0x129);
  local_8->field_0156 = (short)uVar1;
  local_8->field_0158 = (short)((uint)uVar1 >> 0x10);
  local_8->field_015A = STField<undefined2>(local_c,0x12d);
  local_8->field_01C9 = ((undefined1 *)local_c)[0x69];
  local_8->field_015C = STField<undefined4>(local_c,0x12f);
  local_8->field_0164 = STField<undefined4>(local_c,0x13b);
  local_8->field_016C = STField<undefined2>(local_c,0x147);
  local_8->field_016E = STField<undefined2>(local_c,0x149);
  local_8->field_0170 = STField<undefined2>(local_c,0x14b);
  local_8->field_0172 = STField<undefined2>(local_c,0x14d);
  local_8->field_0174 = STField<undefined2>(local_c,0x14f);
  local_8->field_0176 = STField<undefined2>(local_c,0x151);
  local_8->field_0178 = STField<RecoveredRecordView_005EFAE0_855D930D *>(local_c,0x153);
  local_8->field_017C = STField<undefined2>(local_c,0x157);
  local_8->field_017E = STField<undefined2>(local_c,0x159);
  local_8->field_0180 = STField<undefined2>(local_c,0x15b);
  uVar1 = STField<undefined4>(local_c,0x15d);
  local_8->field_0182 = (short)uVar1;
  local_8->field_0184 = (short)((uint)uVar1 >> 0x10);
  local_8->field_0186 = STField<undefined4>(local_c,0x161);
  local_8->field_018A = STField<undefined2>(local_c,0x165);
  uVar1 = STField<undefined4>(local_c,0x167);
  local_8->field_018C = (short)uVar1;
  local_8->field_018E = (short)((uint)uVar1 >> 0x10);
  local_8->field_0190 = STField<undefined2>(local_c,0x16b);
  *(undefined4 *)&local_8->field_0x192 = STField<undefined4>(local_c,0x16d);
  local_8->field_0196 = STField<undefined2>(local_c,0x171);
  local_8->field_0198 = STField<undefined1>(local_c,0x173);
  local_8->field_0199 = local_c[0x5d];
  uVar1 = local_c[0x5e];
  local_8->field_019D = (short)uVar1;
  local_8->field_019F = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01A1 = *(undefined2 *)(local_c + 0x5f);
  local_8->field_01A3 = STField<undefined4>(local_c,0x17e);
  uVar1 = STField<undefined4>(local_c,0x182);
  local_8->field_01A7 = (short)uVar1;
  local_8->field_01A9 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x186);
  local_8->field_01AB = (short)uVar1;
  local_8->field_01AD = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x18a);
  local_8->field_01AF = (short)uVar1;
  local_8->field_01B1 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x18e);
  local_8->field_01B3 = (short)uVar1;
  local_8->field_01B5 = (short)((uint)uVar1 >> 0x10);
  local_8->field_01B7 = STField<undefined2>(local_c,0x192);
  uVar1 = local_c[0x65];
  local_8->field_01B9 = (short)uVar1;
  local_8->field_01BB = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_01BD = *(short *)(local_c + 0x66);
  uVar1 = STField<undefined4>(local_c,0x19a);
  local_8->field_01BF = (short)uVar1;
  local_8->field_01C1 = (short)((uint)uVar1 >> 0x10);
  local_8->field_01C3 = STField<undefined2>(local_c,0x19e);
  local_8->field_01C5 = (RecoveredRecordView_005EFAE0_855D930D *)local_c[0x68];
  puVar11 = (byte *)((int)local_c + 0x1d5);
  puVar4 = reinterpret_cast<byte *>(&local_8->field_0x1e2);
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar11;
    puVar11 = reinterpret_cast<byte *>((puVar11 + 1));
    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
  }
  local_8->field_0212 = STField<undefined4>(local_c,0x205);
  local_8->field_0216 = STField<int>(local_c,0x209);
  local_8->field_021A = STField<int>(local_c,0x20d);
  *(undefined4 *)&local_8->field_0x222 = STField<undefined4>(local_c,0x219);
  local_8->field_0232 = STField<int>(local_c,0x235);
  local_8->field_0236 = STField<undefined4>(local_c,0x239);
  local_8->field_023A = STField<undefined4>(local_c,0x23d);
  local_8->field_023E = STField<int>(local_c,0x241);
  local_8->field_0242 = STField<int>(local_c,0x245);
  local_8->field_0246 = STField<undefined4>(local_c,0x249);
  local_8->field_024A = STField<undefined4>(local_c,0x24d);
  local_8->field_0252 = STField<short>(local_c,0x259);
  local_8->field_0254 = STField<short>(local_c,0x25b);
  local_8->field_0256 = STField<short>(local_c,0x25d);
  local_8->field_0258 = STField<short>(local_c,0x25f);
  local_8->field_025A = STField<short>(local_c,0x261);
  local_8->field_025C = STField<short>(local_c,0x263);
  local_8->field_025E = STField<int>(local_c,0x265);
  local_8->field_0262 = STField<undefined4>(local_c,0x269);
  local_8->field_026A = STField<short>(local_c,0x275);
  local_8->field_026C = STField<short>(local_c,0x277);
  local_8->field_026E = STField<short>(local_c,0x279);
  local_8->field_0270 = STField<short>(local_c,0x27b);
  local_8->field_0272 = STField<short>(local_c,0x27d);
  local_8->field_0274 = STField<short>(local_c,0x27f);
  psVar10 = (short *)((int)local_c + 0x281);
  psVar12 = &local_8->field_0276;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)psVar12 = *(undefined4 *)psVar10;
    psVar10 = psVar10 + 2;
    psVar12 = psVar12 + 2;
  }
  *psVar12 = *psVar10;
  ((char *)psVar12)[1] = (char)psVar10[1];
  uVar1 = local_c[0xa8];
  local_8->field_0295 = (short)uVar1;
  local_8->field_0297 = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_0299 = *(short *)(local_c + 0xa9);
  local_8->field_029B = STField<undefined4>(local_c,0x2a6);
  uVar1 = STField<undefined4>(local_c,0x2b2);
  local_8->field_02A3 = (short)uVar1;
  local_8->field_02A5 = (short)((uint)uVar1 >> 0x10);
  *(undefined4 *)&local_8->field_0x2a7 = STField<undefined4>(local_c,0x2b6);
  local_8->field_02AB = STField<undefined2>(local_c,0x2ba);
  uVar1 = local_c[0xaf];
  local_8->field_02AD = (short)uVar1;
  local_8->field_02AF = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02B1 = *(undefined2 *)(local_c + 0xb0);
  uVar1 = STField<undefined4>(local_c,0x2c2);
  local_8->field_02B3 = (short)uVar1;
  local_8->field_02B5 = (short)((uint)uVar1 >> 0x10);
  *(undefined4 *)&local_8->field_0x2b7 = STField<undefined4>(local_c,0x2c6);
  local_8->field_02BB = STField<undefined2>(local_c,0x2ca);
  uVar1 = local_c[0xb3];
  local_8->field_02BD = (short)uVar1;
  local_8->field_02BF = (short)((uint)uVar1 >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8->field_02C1 = *(undefined2 *)(local_c + 0xb4);
  *(undefined4 *)&local_8->field_0x2c3 = STField<undefined4>(local_c,0x2d2);
  *(undefined4 *)&local_8->field_0x2c7 = STField<undefined4>(local_c,0x2d6);
  local_8->field_02CB = STField<undefined2>(local_c,0x2da);
  local_8->field_02CD = ((undefined1 *)local_c)[0xb7];
  local_8->field_02CE = STField<undefined4>(local_c,0x2dd);
  uVar1 = STField<undefined4>(local_c,0x2e1);
  local_8->field_02D2 = (short)uVar1;
  local_8->field_02D4 = (short)((uint)uVar1 >> 0x10);
  local_8->field_02D6 = STField<undefined2>(local_c,0x2e5);
  local_8->field_02D8 = STField<undefined4>(local_c,0x2e7);
  uVar1 = STField<undefined4>(local_c,0x2eb);
  local_8->field_02DC = (short)uVar1;
  local_8->field_02DE = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x2ef);
  local_8->field_02E0 = (short)uVar1;
  local_8->field_02E2 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x2f3);
  local_8->field_02E4 = (short)uVar1;
  local_8->field_02E6 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x2f7);
  local_8->field_02E8 = (short)uVar1;
  local_8->field_02EA = (short)((uint)uVar1 >> 0x10);
  local_8->field_02EC = STField<undefined2>(local_c,0x2fb);
  uVar1 = STField<undefined4>(local_c,0x2fd);
  local_8->field_02EE = (short)uVar1;
  local_8->field_02F0 = (short)((uint)uVar1 >> 0x10);
  *(undefined4 *)&local_8->field_0x2f2 = STField<undefined4>(local_c,0x301);
  local_8->field_02F6 = STField<undefined2>(local_c,0x305);
  uVar1 = STField<undefined4>(local_c,0x307);
  local_8->field_02F8 = (short)uVar1;
  local_8->field_02FA = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x30b);
  local_8->field_02FC = (short)uVar1;
  local_8->field_02FE = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x30f);
  local_8->field_0300 = (short)uVar1;
  local_8->field_0302 = (short)((uint)uVar1 >> 0x10);
  uVar1 = STField<undefined4>(local_c,0x313);
  local_8->field_0304 = (short)uVar1;
  local_8->field_0306 = (short)((uint)uVar1 >> 0x10);
  *(undefined4 *)&local_8->field_0x308 = STField<undefined4>(local_c,0x317);
  local_8->field_030C = STField<undefined2>(local_c,0x31b);
  *(undefined4 *)&local_8->field_0x30e = STField<undefined4>(local_c,0x31d);
  if (local_c[7] == -1) {
    local_8->field_0059 = nullptr;
  }
  else {

    puVar4 = reinterpret_cast<byte *>((st::fn_006AAC70(local_c[8])));
    local_8->field_0059 = puVar4;
    uVar9 = puVar3[8];
    puVar11 = (byte *)(puVar3[7] + (int)puVar3);
    memmove(puVar4, puVar11, uVar9); /* compiler REP MOVS byte copy */
    uVar8 = 0;
    uVar9 = 0;
  }
  if (STField<int>(puVar3,0xb2) == -1) {
    local_8->field_00EF = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0xb2) + (int)puVar3));
    local_8->field_00EF = pDVar5;
  }
  if (STField<int>(puVar3,0xca) == -1) {
    local_8->field_0103 = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0xca) + (int)puVar3));
    local_8->field_0103 = pDVar5;
  }
  if (STField<int>(puVar3,0xda) == -1) {
    local_8->field_010F = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0xda) + (int)puVar3));
    local_8->field_010F = pDVar5;
  }
  if (STField<int>(puVar3,0xf6) == -1) {
    local_8->field_0127 = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0xf6) + (int)puVar3));
    local_8->field_0127 = pDVar5;
  }
  if (STField<int>(puVar3,0x133) == -1) {
    local_8->field_0160 = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x133) + (int)puVar3));
    local_8->field_0160 = pDVar5;
  }
  if (STField<int>(puVar3,0x1a5) == -1) {
    local_8->field_01CA = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x1a5) + (int)puVar3));
    local_8->field_01CA = pDVar5;
  }
  if (STField<int>(puVar3,0x1ad) == -1) {
    local_8->field_01CE = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x1ad) + (int)puVar3));
    local_8->field_01CE = pDVar5;
  }
  if (STField<int>(puVar3,0x1b5) == -1) {
    local_8->field_01D2 = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x1b5) + (int)puVar3));
    local_8->field_01D2 = pDVar5;
  }
  if (STField<int>(puVar3,0x1bd) == -1) {
    local_8->field_01D6 = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x1bd) + (int)puVar3));
    local_8->field_01D6 = pDVar5;
  }
  if (STField<int>(puVar3,0x1c5) == -1) {
    local_8->field_01DA = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x1c5) + (int)puVar3));
    local_8->field_01DA = pDVar5;
  }
  if (STField<int>(puVar3,0x1cd) == -1) {
    local_8->field_01DE = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x1cd) + (int)puVar3));
    local_8->field_01DE = pDVar5;
  }
  if (STField<int>(puVar3,0x1fd) == -1) {
    local_8->field_020E = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x1fd) + (int)puVar3));
    local_8->field_020E = pDVar5;
  }
  if ((STField<int>(puVar3,0x211) == -1) ||
     (uVar9 = STField<uint>(puVar3,0x215), (int)uVar9 < 1)) {
    local_8->field_021E = nullptr;
  }
  else {
    /* ST_CALLSITE[004A7064]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
    puVar6 = static_cast<ushort *>(st::fn_006AAC70(uVar9));
    local_8->field_021E = puVar6;
    puVar11 = (byte *)((int)puVar3 + STField<int>(puVar3,0x211));
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)puVar6 = *puVar11;
      puVar11 = reinterpret_cast<byte *>((puVar11 + 1));
      puVar6 = puVar6 + 2;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar11;
      puVar11 = (byte *)((int)puVar11 + 1);
      puVar6 = (ushort *)((int)puVar6 + 1);
    }
  }
  if (STField<int>(puVar3,0x21d) == -1) {
    local_8->field_0226 = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x21d) + (int)puVar3));
    local_8->field_0226 = pDVar5;
  }
  if (STField<int>(puVar3,0x225) == -1) {
    local_8->field_022A = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x225) + (int)puVar3));
    local_8->field_022A = pDVar5;
  }
  if (STField<int>(puVar3,0x22d) == -1) {
    local_8->field_022E = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x22d) + (int)puVar3));
    local_8->field_022E = pDVar5;
  }
  if (STField<int>(puVar3,0x251) == -1) {
    local_8->field_024E = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x251) + (int)puVar3));
    local_8->field_024E = pDVar5;
  }
  if (STField<int>(puVar3,0x26d) == -1) {
    local_8->field_0266 = nullptr;
  }
  else {
    pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x26d) + (int)puVar3));
    local_8->field_0266 = pDVar5;
  }
  if (STField<int>(puVar3,0x2aa) == -1) {
    local_8->field_029F = 0;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  pDVar5 = st::fn_006B0060(nullptr,(uint *)(STField<int>(puVar3,0x2aa) + (int)puVar3));
  local_8->field_029F = st::machine_word_boundary_cast<undefined4>(pDVar5);
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 004A7490 STGroupBoatC::ReMakePatrolPoints
#line 4 "decomp/ST.exe/functions/004A7490/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePatrolPoints
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall ReMakePatrolPoints(STGroupBoatC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=004A7998 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_004A7490(STGroupBoatC *this)

{
  ushort uVar1;
  DArrayTy *array;
  short *psVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  short local_4c;
  short local_4a;
  short local_48;
  short local_3c;
  short local_3a;
  short local_38;
  int local_32;
  short local_2c;
  short local_2a;
  short local_28;
  int local_26;
  uint local_22;
  short local_1c;
  short local_1a;
  short local_18;
  int local_14;
  STGroupBoatC *local_10;
  uint local_c;
  uint local_8;

  uVar1 = this->field_0027;
  if (uVar1 < 10) {
    this->field_0242 = 2;
  }
  else if (uVar1 < 0x28) {
    this->field_0242 = 4;
  }
  else if (uVar1 < 100) {
    this->field_0242 = 6;
  }
  else if (uVar1 < 0xf0) {
    this->field_0242 = 8;
  }
  else {
    this->field_0242 = 10;
  }
  local_10 = this;
  array = st::fn_006AE290(nullptr,this->field_0226->count,0xe,1);
  pDVar4 = this->field_0226;
  uVar7 = 0;
  if (0 < (int)pDVar4->count) {
    do {

      st::fn_006ACC70(pDVar4,uVar7,&local_1c);
      local_2c = local_1c;
      local_2a = local_1a;
      local_22 = 0;
      local_26 = 0;
      local_28 = local_18;

      st::fn_006AE140(array,uVar7,&local_2c);
      pDVar4 = this->field_0226;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)pDVar4->count);
  }
  uVar7 = array->count;
  if (1 < uVar7) {
    local_8 = 0;
    if (uVar7 != 1 && -1 < st::storage_bit_cast<int>(static_cast<uint32_t>(uVar7 - 1))) {
      local_c = 1;
      do {

        st::fn_006ACC70(array,local_8,&local_2c);

        st::fn_006ACC70(array,local_c,&local_3c);
        psVar3 = st::fn_006A9190
                           ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,
                            (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(short *)(int)local_2c
                            ,(short *)(int)local_2a,(short *)(int)local_28,(short *)(int)local_3c,
                            (short *)(int)local_3a,(short *)(int)local_38,0,&local_14,
                            nullptr,nullptr,0);
        if (psVar3 == nullptr) {
          uVar7 = (int)g_pathingGrid.sizeX * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeZ;
          psVar3 = g_pathingGrid.cells;
          psVar8 = g_pathingScratchGrid.cells;
          for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)psVar8 = *(undefined4 *)psVar3;
            psVar3 = psVar3 + 2;
            psVar8 = psVar8 + 2;
          }
          for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)psVar8 = (char)*psVar3;
            psVar3 = (short *)((int)psVar3 + 1);
            psVar8 = (short *)((int)psVar8 + 1);
          }

          st::fn_006AB090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                       (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_2c,(int)local_2a
                       ,(int)local_28,(int)local_3c,(int)local_3a,(int)local_38);
          iVar6 = g_pathingScratchGrid.cells
                  [(int)g_pathingGrid.planeStride * (int)local_38 +
                   (int)g_pathingGrid.sizeX * (int)local_3a + (int)local_3c] + -1;
          this = local_10;
        }
        else {
          iVar6 = (int)psVar3[3];
          st::fn_006A5E90(psVar3);
        }
        uVar7 = local_c;
        iVar6 = iVar6 / 3;
        if (iVar6 < this->field_0242) {

          st::fn_006B0C70(array,local_c);
          local_8 = local_8 - 1;
          local_c = uVar7 - 1;
        }
        else {
          local_32 = iVar6;
          local_26 = iVar6;

          st::fn_006AE140(array,local_8,&local_2c);

          st::fn_006AE140(array,local_c,&local_3c);
        }
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while ((int)local_8 < (int)(array->count - 1));
    }
    if (this->field_0232 != 0xffffffff) {

      st::fn_006ACC70(this->field_022A,this->field_0232,&local_4c);
      pDVar4 = this->field_0226;
      uVar7 = 0;
      local_c = 0xffffffff;
      if (0 < (int)pDVar4->count) {
        do {

          st::fn_006ACC70(pDVar4,uVar7,&local_1c);
          if (((local_1c == local_4c) && (local_1a == local_4a)) && (local_18 == local_48)) {
            local_c = uVar7;
            if (uVar7 != 0xffffffff) goto LAB_004a77bb;
            break;
          }
          pDVar4 = this->field_0226;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)pDVar4->count);
      }

      iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x15ed,0,0,st::mutable_c_string("%s"),
                                 "STGroupBoatC::ReMakePatrolPoints wrong index");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
LAB_004a77bb:
      this->field_0232 = -1;
      local_8 = local_c;
      if (this->field_0236 == 1) {
        pDVar4 = this->field_0226;
        if ((int)local_c < (int)pDVar4->count) {
          do {

            st::fn_006ACC70(pDVar4,local_8,&local_1c);
            uVar7 = 0;
            if (0 < (int)array->count) {
              do {

                st::fn_006ACC70(array,uVar7,&local_2c);
                if (((local_1c == local_2c) && (local_1a == local_2a)) && (local_18 == local_28)) {
                  this->field_0232 = uVar7;
                  break;
                }
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 < (int)array->count);
            }
            if (this->field_0232 != -1) break;
            pDVar4 = this->field_0226;
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)pDVar4->count);
        }
        if (this->field_0232 != -1) goto LAB_004a792e;
        this->field_0232 = array->count - 1;
      }
      else {
        for (; -1 < (int)local_8; local_8 = local_8 - 1) {

          st::fn_006ACC70(this->field_0226,local_8,&local_1c);
          uVar7 = 0;
          if (0 < (int)array->count) {
            do {

              st::fn_006ACC70(array,uVar7,&local_2c);
              if (((local_1c == local_2c) && (local_1a == local_2a)) && (local_18 == local_28)) {
                this->field_0232 = uVar7;
                break;
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < (int)array->count);
          }
          if (this->field_0232 != -1) break;
        }
        if (this->field_0232 != -1) goto LAB_004a792e;
        this->field_0232 = 0;
      }
      if ((this->field_0232 == -1) &&

         (iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x160e,0,0,
                                     st::mutable_c_string("%s"),"STGroupBoatC::ReMakePatrolPoints unknown error"),
         iVar6 != 0)) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto LAB_004a792e;
    }
  }
  this->field_0232 = 0;
LAB_004a792e:
  if (this->field_022A != nullptr) {
    st::fn_006AE110(this->field_022A);
    this->field_022A = nullptr;
  }
  pDVar4 = st::fn_006AE290(nullptr,array->count,0xe,1);
  this->field_022A = pDVar4;
  uVar7 = 0;
  if (0 < (int)array->count) {
    do {

      st::fn_006ACC70(array,uVar7,&local_2c);

      st::fn_006AE140(this->field_022A,uVar7,&local_2c);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)array->count);
  }
  st::fn_006AE110(array);
  return;
}

// 004A7AF0 STGroupBoatC::GetPatrolTask
#line 4 "decomp/ST.exe/functions/004A7AF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetPatrolTask */

uint __thiscall
st::fn_004A7AF0(STGroupBoatC *this,int param_1,uint param_2,uint param_3)

{
  int iVar3;
  int iVar2;
  uint uVar4;
  STGameObjC *pSVar5;
  DArrayTy *array;
  uint local_2c;
  int local_26;
  int local_22;
  int local_1e;
  int local_1a;
  short local_14;
  short local_12;
  short local_10;
  int local_e;
  int local_a;

  if (this->field_022A == nullptr) {
    return 1;
  }

  st::fn_006ACC70(this->field_022A,this->field_0232,&local_14);
  if (param_1 == 1) {
    /* ST_CALLSITE[004A7B4F]: CALL 0x0040407a; direct=0040407A STGroupBoatC::sub_0040BC90 */
    local_1e = st::fn_0040407A(this,param_2 & 0xffff,(short *)(int)local_14,(short *)(int)local_12,
                            (short *)(int)local_10,'\0');
    if (this->field_0242 < local_1e) {
      if ((1 < (ushort)this->field_0027) &&
         (((this->field_0236 == 1 && (local_1e <= local_a / 2)) ||
          ((this->field_0236 == 0 && (local_1e <= local_e / 2)))))) {

        st::fn_006ACC70(this->field_022E,param_3,&local_2c);
        if (local_1a != 0) {
          if (local_1a == 1) {
            if (local_1e < local_26) {
              local_1a = 1;
              local_26 = local_1e;

              st::fn_006AE140(this->field_022E,param_3,&local_2c);
              return 0;
            }
            local_1a = 2;
            local_22 = local_1e;

            st::fn_006AE140(this->field_022E,param_3,&local_2c);
            return 0;
          }
          if (local_1a != 2) {

            iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x164b,0,0,
                                       st::mutable_c_string("%s"),"STGroupBoatC::GetPatrolTask incorrect data");
            if (iVar2 == 0) {
              return 0;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (local_22 <= local_1e) {
            if (this->field_023E == 0) {
              this->field_023E = 1;
            }
            local_1a = 3;
            local_2c = 1;

            st::fn_006AE140(this->field_022E,param_3,&local_2c);
            /* ST_CALLSITE[004A7C80]: CALL 0x0040331e; direct=0040331E STGroupBoatC::sub_004A7E30 */
            iVar3 = st::fn_0040331E(this,1);
            return (uint)(iVar3 != 0);
          }
        }
        local_1a = 1;
        local_26 = local_1e;

        st::fn_006AE140(this->field_022E,param_3,&local_2c);
      }
      return 0;
    }
    if (this->field_023E == 0) {
      this->field_023E = 1;
    }

    st::fn_006ACC70(this->field_022E,param_3,&local_2c);
    array = this->field_022E;
  }
  else {
    /* ST_CALLSITE[004A7D11]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
    pSVar5 = st::fn_0040286F(this,(ushort)param_2);
    if ((int)pSVar5->field_0047 != pSVar5->field_00C7) {
      return 0;
    }
    if ((int)pSVar5->field_0049 != pSVar5->field_00CB) {
      return 0;
    }
    if ((int)pSVar5->field_004B != pSVar5->field_00CF) {
      return 0;
    }
    if (this->field_023E == 0) {
      this->field_023E = 1;
    }

    st::fn_006ACC70(this->field_022E,param_3,&local_2c);
    array = this->field_022E;
  }
  local_2c = 1;

  st::fn_006AE140(array,param_3,&local_2c);
  /* ST_CALLSITE[004A7B9B]: CALL 0x0040331e; direct=0040331E STGroupBoatC::sub_004A7E30 */
  iVar3 = st::fn_0040331E(this,1);
  return (uint)(iVar3 != 0);
}

// 004A80A0 STGroupBoatC::SetPatrolCmdToBoat
#line 4 "decomp/ST.exe/functions/004A80A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SetPatrolCmdToBoat
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall SetPatrolCmdToBoat(STGroupBoatC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=004A81C6 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_004A80A0(STGroupBoatC *this)

{
  DArrayTy *array;
  STGameObjC *pSVar2;
  int iVar3;
  uint index;
  dword dVar4;
  uint local_34;
  short local_30 [7];
  uint local_22;
  short local_1c;
  short local_1a;
  short local_18;
  dword local_c;
  DArrayTy *local_8;

  dVar4 = this->field_022E->count;
  local_c = dVar4;
  local_8 = st::fn_006AE290(nullptr,0,2,1);
  index = 0;
  if (0 < (int)dVar4) {
    do {

      st::fn_006ACC70(this->field_022E,index,&local_34);
      if (local_30[0] != -1) {
        local_34 = 0;
        local_22 = 0;

        st::fn_006AE140(this->field_022E,index,&local_34);
        /* ST_CALLSITE[004A8117]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar2 = st::fn_004028BA
                           (g_allPlayers_007FA174,this->field_0024,(ushort)STPiece<0,4>(local_30),CASE_1);
        if (pSVar2 == nullptr) {

          iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x16c9,0,0,
                                     st::mutable_c_string("%s"),"STGroupBoatC::SetPatrolCmdToBoat");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x16ca);
        }

        st::fn_006AE1C0(local_8,local_30);
        pSVar2->field_0493 = 1;
        dVar4 = local_c;
      }
      index = index + 1;
    } while ((int)index < (int)dVar4);
  }

  st::fn_006ACC70(this->field_022A,this->field_0232,&local_1c);
  array = local_8;
  if (local_8->count != 0) {
    /* ST_CALLSITE[004A81B5]: CALL 0x00405d7b; direct=00405D7B STGroupBoatC::InitWay */
    st::fn_00405D7B(this,local_8,(int)local_1c,(int)local_1a,(int)local_18);
  }
  st::fn_006AE110(array);
  return;
}

// 004A8340 STGroupBoatC::GetDepotForAttack
#line 4 "decomp/ST.exe/functions/004A8340/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetDepotForAttack

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_004A8340
          (STGroupBoatC *this,uint param_1,undefined1 *param_2,short *param_3,short *param_4,
          short *param_5,short *param_6)

{
  int iVar2;
  STGameObjC *pSVar3;
  int iVar5;
  int local_EAX_310;
  int iVar4;
  uint index;
  STGroupBoatC *pSVar6;
  InternalExceptionFrame local_68;
  char local_24;
  char cStack_23;
  ushort uStack_22;
  dword local_1c;
  int local_18;
  STGroupBoatC *local_14;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;

  local_18 = 1000000;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;

  iVar2 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  pSVar6 = local_14;
  if (iVar2 == 0) {
    *param_3 = -1;
    if ((local_14->field_01E6 != CASE_2) || (local_14->field_020E == nullptr)) {
      /* ST_CALLSITE[004A83B2]: CALL 0x006a5e40; direct=006A5E40 RaiseInternalException; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STAllPlayersC; source view only; no Ghidra override */
      st::fn_006A5E40
                (-0x5001fff7,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),
                 0x1708);
    }
    /* ST_CALLSITE[004A83C7]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
    pSVar3 = st::fn_004028BA
                       (g_allPlayers_007FA174,pSVar6->field_0024,(ushort)param_1,CASE_1);
    /* ST_CALLSITE[004A83DA]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    st::fn_004018C5(reinterpret_cast<STFishC *>(pSVar3),&local_10,&local_e,&local_c);
    index = 0;
    local_1c = pSVar6->field_020E->count;
    iVar2 = local_18;
    if (0 < (int)local_1c) {
      do {

        st::fn_006ACC70(pSVar6->field_020E,index,&local_24);
        if (uStack_22 != 0xffff) {
          /* ST_CALLSITE[004A8426]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          pSVar3 = st::fn_004028BA(g_allPlayers_007FA174,local_24,uStack_22,(int)cStack_23);
          /* ST_CALLSITE[004A8431]: CALL dword ptr [EAX + 0x2c] */
          iVar5 = pSVar3->vfunc_2C();
          if ((iVar5 == 0x3b) ||
             /* ST_CALLSITE[004A843D]: CALL dword ptr [EDX + 0x2c] */
             (iVar5 = pSVar3->vfunc_2C(), pSVar6 = local_14, iVar5 == 0x60)) {
            /* ST_CALLSITE[004A8453]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            st::fn_004018C5(reinterpret_cast<STFishC *>(pSVar3),&local_8,&local_6,&local_a);

            local_EAX_310 =
                 st::fn_006AADD0((int)local_10,(int)local_e,(int)local_c,(int)local_8,(int)local_6,
                              (int)local_a);
            pSVar6 = local_14;
            if (local_EAX_310 < iVar2) {
              *param_2 = local_24;
              *param_3 = uStack_22;
              *param_4 = local_8;
              *param_5 = local_6;
              *param_6 = local_a;
              iVar2 = local_EAX_310;
              local_18 = local_EAX_310;
            }
          }
        }
        index = index + 1;
      } while ((int)index < (int)local_1c);
    }
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;
  if (iVar2 != -0x5001fff7) {

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x171b,0,iVar2,st::mutable_c_string("%s"),
                               "STGroupBoatC::GetDepotForAttack");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x171c);
  }
  return;
}

// 004A85B0 STGroupBoatC::StartReceiveOrderSound
#line 4 "decomp/ST.exe/functions/004A85B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::StartReceiveOrderSound
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall StartReceiveOrderSound(STGroupBoatC * this) Evidence: every machine RET purges exactly
   0 explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=004A865B RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_004A85B0(STGroupBoatC *this)

{
  uint uVar1;
  STGameObjC *pSVar3;
  int iVar4;
  uint index;
  uint uVar5;
  byte local_8 [4];
  uVar5 = 0;
  uVar1 = this->field_0029->count;
  if (uVar1 != 0) {
    index = 0;
    do {

      st::fn_006ACC70(this->field_0029,index,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        /* ST_CALLSITE[004A85F2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/CallableReceivers/CallableReceiver_00493D10_P0; source view only; no Ghidra override */
        pSVar3 = st::fn_004028BA
                           (g_allPlayers_007FA174,this->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (pSVar3 == nullptr) {

          iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x172d,0,0,
                                     st::mutable_c_string("%s"),"STGroupBoatC::StartReceiveOrderSound NULL");
          if (iVar4 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x172e);
        }
        st::fn_0040204A(reinterpret_cast<CallableReceiver_00493D10_P0 *>(pSVar3));
      }
      uVar5 = uVar5 + 1;
      index = uVar5 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

// 004A8690 STGroupBoatC::GenSwitch
#line 4 "decomp/ST.exe/functions/004A8690/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GenSwitch

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_004A8690(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  STGameObjC *this_00;
  int iVar3;
  int iVar4;
  uint index;
  uint uVar5;
  byte local_8 [4];
  uVar5 = 0;
  uVar1 = this->field_0029->count;
  if (uVar1 != 0) {
    index = 0;
    do {

      st::fn_006ACC70(this->field_0029,index,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        /* ST_CALLSITE[004A86D2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        this_00 = st::fn_004028BA
                            (g_allPlayers_007FA174,this->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (this_00 == nullptr) {

          iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1742,0,0,
                                     st::mutable_c_string("%s"),"STGroupBoatC::GenSwitch NULL");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x1743);
        }
        /* ST_CALLSITE[004A871E]: CALL dword ptr [EDX + 0x2c] */
        iVar4 = this_00->vfunc_2C();
        /* ST_CALLSITE[004A872A]: CALL dword ptr [EAX + 0x2c] */
        if ((iVar4 == 0x16) || (iVar4 = this_00->vfunc_2C(), iVar4 == 0x25)) {
          st::fn_004011F4(this_00,param_1);
        }
      }
      uVar5 = uVar5 + 1;
      index = uVar5 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

// 004A87A0 STGroupBoatC::IsAgAtt
#line 4 "decomp/ST.exe/functions/004A87A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::IsAgAtt
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall IsAgAtt(STGroupBoatC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=004A8853 RET | 004A885C RET */

undefined4 __thiscall st::fn_004A87A0(STGroupBoatC *this)

{
  uint uVar1;
  STGameObjC *pSVar3;
  int iVar4;
  uint uVar5;
  uint index;
  uint uVar6;
  byte local_8 [4];
  uVar6 = 0;
  uVar1 = this->field_0029->count;
  if (uVar1 != 0) {
    index = 0;
    do {

      st::fn_006ACC70(this->field_0029,index,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        /* ST_CALLSITE[004A87E2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar3 = st::fn_004028BA
                           (g_allPlayers_007FA174,this->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (pSVar3 == nullptr) {

          iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp"),0x1758,0,0,
                                     st::mutable_c_string("%s"),"STGroupBoatC::IsAgAtt");
          if (iVar4 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\to_grpb.cpp")
                     ,0x1759);
        }
        if (pSVar3->field_07EA == 0) {
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
      index = uVar6 & 0xffff;
    } while (index < uVar1);
  }
  return 1;
}

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
  STGroupC *this_00;
  int iVar4;
  uint *puVar5;
  int iVar6;
  DArrayTy *pDVar7;
  uint uVar8;
  uint index;
  byte *pbVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_84;
  undefined4 local_40 [2];
  undefined4 local_38;
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
    STGroupC::GetMessage(local_20,message);
  }
  SVar1 = message->id;
  if (MESS_SHARED_0003 < SVar1) {
    if (SVar1 != MESS_SHARED_010F) {
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
    pbVar9 = local_1c;
    pbVar10 = local_8;
    for (uVar8 = local_c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar8 = local_c & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar10 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    }
    pbVar9 = local_18;
    pbVar10 = local_8 + local_c;
    for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar10 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
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
    pDVar7 = *(DArrayTy **)((int)&this_00[3].field_0035 + 3);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[3].field_0035 + 3) = 0;
    }
    if (*(DArrayTy **)&this_00[4].field_0xf != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00[4].field_0xf);
      *(undefined4 *)&this_00[4].field_0xf = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[4].field_0018 + 3);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[4].field_0018 + 3) = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[4].field_0031 + 2);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[4].field_0031 + 2) = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[5].field_002D + 2);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[5].field_002D + 2) = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[5].field_0035 + 2);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[5].field_0035 + 2) = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[7].field_001C + 3);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[7].field_001C + 3) = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[7].field_0020 + 3);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[7].field_0020 + 3) = 0;
    }
    if (*(DArrayTy **)&this_00[7].field_0027 != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00[7].field_0027);
      *(undefined4 *)&this_00[7].field_0027 = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[7].field_0029 + 2);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[7].field_0029 + 2) = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[7].field_002D + 2);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[7].field_002D + 2) = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[7].field_0031 + 2);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[7].field_0031 + 2) = 0;
    }
    uVar8 = this_00->field_0029[3];
    if ((uVar8 != 0) && (index = 0, uVar8 != 0)) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,index,&local_14);
        if ((short)local_14 != -1) {
          thunk_FUN_0040cdb0(this_00,local_14 & 0xffff);
        }
        index = index + 1;
      } while ((index & 0xffff) < uVar8);
    }
    if (*(int *)((int)&this_00[8].field_0035 + 1) != 0) {
      FreeAndNull((void **)((int)&this_00[8].field_0035 + 1));
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[8].field_0025 + 1);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[8].field_0025 + 1) = 0;
    }
    pDVar7 = *(DArrayTy **)((int)&this_00[9].vtable + 1);
    if (pDVar7 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[9].vtable + 1) = 0;
    }
    if (*(DArrayTy **)&this_00[9].field_0x5 != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00[9].field_0x5);
      *(undefined4 *)&this_00[9].field_0x5 = 0;
    }
    if (*(DArrayTy **)&this_00[9].field_0x9 != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00[9].field_0x9);
      *(undefined4 *)&this_00[9].field_0x9 = 0;
    }
    if ((DArrayTy *)this_00[9].field_0029 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00[9].field_0029);
      this_00[9].field_0029 = (uint *)0x0;
    }
    if (*(DArrayTy **)&this_00[10].field_0x4 != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00[10].field_0x4);
      *(undefined4 *)&this_00[10].field_0x4 = 0;
    }
    if ((DArrayTy *)this_00[0xb].vtable != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00[0xb].vtable);
      this_00[0xb].vtable = 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->vtable + 0x18))(this_00,0,0,0);
    STGroupC::GetMessage(this_00,message);
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
      RestoreGrpBData((STGroupBoatC *)this_00,
                      (undefined4 *)(*(int *)((int)pvVar2 + 0x38) + (int)pvVar2));
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 3;
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (this_00[1].field_0020 == 1) {
    local_2c = *(undefined4 *)&this_00->field_0x8;
    local_30 = 10;
    local_34 = 0;
    local_38 = g_playSystem_00802A38->field_0014;
    SystemClassTy::PostMessage((SystemClassTy *)g_playSystem_00802A38,local_40);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (*(int *)&this_00[1].field_0024 == 1) {
    iVar4 = *(int *)&this_00[2].field_0x7;
    uVar8 = 0;
    *(undefined4 *)&this_00[1].field_0024 = 0;
    if (iVar4 == 1) {
      pDVar7 = *(DArrayTy **)((int)&this_00[7].field_002D + 2);
      *(undefined4 *)&this_00[2].field_0x7 = 0;
      if (0 < (int)pDVar7->count) {
        do {
          DArrayGetElement(pDVar7,uVar8,&local_14);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(this_00->vtable + 4))(local_14);
          pDVar7 = *(DArrayTy **)((int)&this_00[7].field_002D + 2);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)pDVar7->count);
      }
      if (*(int *)((int)&this_00[7].field_0039 + 2) == 6) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        ReMakePatrolPoints((STGroupBoatC *)this_00,(int)unaff_EDI);
        sub_004A7E30((STGroupBoatC *)this_00,1);
      }
      if ((this_00->field_0027 == 0) && (this_00->field_0020 == 0)) {
        this_00[1].field_0020 = 1;
      }
      DArrayDestroy(*(DArrayTy **)((int)&this_00[7].field_002D + 2));
      *(undefined4 *)((int)&this_00[7].field_002D + 2) = 0;
    }
    if ((*(int *)((int)&this_00[1].field_002D + 3) == 1) &&
       (puVar5 = this_00->field_002D, *(undefined4 *)((int)&this_00[1].field_002D + 3) = 0,
       puVar5 != (uint *)0x0)) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      RechargeNewCmd((STGroupBoatC *)this_00,unaff_EDI);
      DArrayDestroy((DArrayTy *)this_00->field_002D);
      this_00->field_002D = (uint *)0x0;
    }
    if (*(int *)((int)&this_00[1].field_0031 + 3) == 1) {
      pDVar7 = *(DArrayTy **)((int)&this_00[7].field_001C + 3);
      *(undefined4 *)((int)&this_00[1].field_0031 + 3) = 0;
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[7].field_001C + 3) = 0;
    }
    if (*(int *)((int)&this_00[1].field_0035 + 3) == 1) {
      pDVar7 = *(DArrayTy **)((int)&this_00[7].field_0020 + 3);
      *(undefined4 *)((int)&this_00[1].field_0035 + 3) = 0;
      ReMakePVecAndTgtList((STGroupBoatC *)this_00,pDVar7);
      DistributeTargets((STGroupBoatC *)this_00,*(uint **)((int)&this_00[7].field_0020 + 3));
      DArrayDestroy(*(DArrayTy **)((int)&this_00[7].field_0020 + 3));
      *(undefined4 *)((int)&this_00[7].field_0020 + 3) = 0;
    }
    if (*(int *)((int)&this_00[1].field_0039 + 3) == 1) {
      pDVar7 = *(DArrayTy **)&this_00[7].field_0027;
      *(undefined4 *)((int)&this_00[1].field_0039 + 3) = 0;
      DArrayDestroy(pDVar7);
      *(undefined4 *)&this_00[7].field_0027 = 0;
    }
    if (*(int *)((int)&this_00[2].vtable + 3) == 1) {
      pDVar7 = *(DArrayTy **)((int)&this_00[7].field_0029 + 2);
      *(undefined4 *)((int)&this_00[2].vtable + 3) = 0;
      DArrayDestroy(pDVar7);
      *(undefined4 *)((int)&this_00[7].field_0029 + 2) = 0;
    }
  }
  if (*(int *)((int)&this_00[1].field_0027 + 1) != 1) {
LAB_004984d0:
    switch(*(undefined4 *)((int)&this_00[7].field_0039 + 2)) {
    case 1:
      iVar4 = 2;
LAB_004984e9:
      puVar5 = (uint *)GrpMove((STGroupBoatC *)this_00,iVar4);
      break;
    case 2:
      puVar5 = (uint *)GrpAttack((STGroupBoatC *)this_00,2);
      break;
    case 3:
      GrpMove((STGroupBoatC *)this_00,2);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case 4:
      puVar5 = (uint *)GrpRepare((STGroupBoatC *)this_00,2);
      break;
    case 5:
      puVar5 = (uint *)GrpGuard((STGroupBoatC *)this_00,2);
      break;
    case 6:
      puVar5 = (uint *)GrpPatrol((STGroupBoatC *)this_00,2);
      break;
    case 7:
      puVar5 = (uint *)GrpGoToDeep((STGroupBoatC *)this_00,2);
      break;
    case 8:
      puVar5 = (uint *)GrpLoadRC((STGroupBoatC *)this_00,2);
      break;
    case 9:
      iVar4 = GrpBuild((STGroupBoatC *)this_00,2);
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 3;
      iVar4 = 2;
      goto LAB_00498503;
    case 10:
      puVar5 = (uint *)GrpUnLoadRC((STGroupBoatC *)this_00,2);
      break;
    case 0xb:
      puVar5 = (uint *)GrpLoadObj((STGroupBoatC *)this_00,2);
      break;
    case 0xc:
      puVar5 = GrpUnLoadObj((STGroupBoatC *)this_00,2);
      break;
    case 0xd:
      puVar5 = (uint *)SetMine((STGroupBoatC *)this_00,2);
      break;
    case 0xe:
      puVar5 = (uint *)DCBomb((STGroupBoatC *)this_00,2);
      break;
    case 0xf:
      puVar5 = (uint *)Capture((STGroupBoatC *)this_00,2);
      break;
    case 0x10:
      puVar5 = (uint *)Teleport((STGroupBoatC *)this_00,2);
      break;
    case 0x11:
      puVar5 = (uint *)Recharge((STGroupBoatC *)this_00,2);
      break;
    case 0x12:
      puVar5 = Bring((STGroupBoatC *)this_00,2);
      break;
    case 0x13:
      puVar5 = (uint *)GrpDismant((STGroupBoatC *)this_00,2);
      break;
    case 0x14:
      puVar5 = Scout((STGroupBoatC *)this_00,2);
      break;
    case 0x15:
      puVar5 = (uint *)GrpRepSub((STGroupBoatC *)this_00,2);
      break;
    default:
      goto switchD_004984e0_default;
    }
    goto cf_common_exit_004984F2;
  }
  if (*(int *)&this_00[2].field_0xf == 1) {
    if (*(int *)((int)&this_00[7].field_0039 + 2) == 1) {
      iVar4 = 1;
    }
    else {
      *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 1;
      iVar4 = 0;
    }
    goto LAB_004984e9;
  }
  if (*(int *)&this_00[2].field_0x17 == 1) {
    if (*(int *)((int)&this_00[7].field_0039 + 2) != 3) {
      *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 3;
      GrpMove((STGroupBoatC *)this_00,0);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    GrpMove((STGroupBoatC *)this_00,1);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (*(int *)&this_00[2].field_0x13 == 1) {
    if (*(int *)((int)&this_00[7].field_0039 + 2) == 2) {
      puVar5 = (uint *)GrpAttack((STGroupBoatC *)this_00,1);
    }
    else {
      *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 2;
      puVar5 = (uint *)GrpAttack((STGroupBoatC *)this_00,0);
    }
cf_common_exit_004984F2:
    if (puVar5 != (uint *)0x0) {
switchD_004984e0_default:
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 3;
  }
  else {
    if (*(int *)&this_00[2].field_0027 == 1) {
      if (*(int *)((int)&this_00[7].field_0039 + 2) == 7) {
        puVar5 = (uint *)GrpGoToDeep((STGroupBoatC *)this_00,1);
      }
      else {
        *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 7;
        puVar5 = (uint *)GrpGoToDeep((STGroupBoatC *)this_00,0);
      }
      goto cf_common_exit_004984F2;
    }
    if (*(int *)((int)&this_00[2].field_0020 + 3) == 1) {
      bVar11 = *(int *)((int)&this_00[7].field_0039 + 2) == 6;
      if (!bVar11) {
        *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 6;
      }
      puVar5 = (uint *)GrpPatrol((STGroupBoatC *)this_00,(uint)bVar11);
      if (puVar5 == (uint *)0xffffffff) {
        return 0xffff;
      }
      goto cf_common_exit_004984F2;
    }
    if (*(int *)((int)&this_00[2].field_0029 + 2) == 1) {
      bVar11 = *(int *)((int)&this_00[7].field_0039 + 2) == 8;
      if (!bVar11) {
        *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 8;
      }
      puVar5 = (uint *)GrpLoadRC((STGroupBoatC *)this_00,(uint)bVar11);
    }
    else {
      if (*(int *)((int)&this_00[2].field_002D + 2) == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 9) {
          puVar5 = (uint *)GrpBuild((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 9;
          puVar5 = (uint *)GrpBuild((STGroupBoatC *)this_00,0);
        }
        goto cf_common_exit_004984F2;
      }
      if (*(int *)((int)&this_00[2].field_0031 + 2) == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 10) {
          puVar5 = (uint *)GrpUnLoadRC((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 10;
          puVar5 = (uint *)GrpUnLoadRC((STGroupBoatC *)this_00,0);
        }
      }
      else if (*(int *)((int)&this_00[2].field_0018 + 3) == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 4) {
          puVar5 = (uint *)GrpRepare((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 4;
          puVar5 = (uint *)GrpRepare((STGroupBoatC *)this_00,0);
        }
      }
      else if (*(int *)((int)&this_00[2].field_001C + 3) == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 5) {
          puVar5 = (uint *)GrpGuard((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 5;
          puVar5 = (uint *)GrpGuard((STGroupBoatC *)this_00,0);
        }
      }
      else if (*(int *)((int)&this_00[2].field_0035 + 2) == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xb) {
          puVar5 = (uint *)GrpLoadObj((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xb;
          puVar5 = (uint *)GrpLoadObj((STGroupBoatC *)this_00,0);
        }
      }
      else {
        if (*(int *)((int)&this_00[2].field_0039 + 2) != 1) {
          if (*(int *)((int)&this_00[3].vtable + 2) == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xd) {
              puVar5 = (uint *)SetMine((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xd;
              puVar5 = (uint *)SetMine((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0x6 == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xe) {
              puVar5 = (uint *)DCBomb((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xe;
              puVar5 = (uint *)DCBomb((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0xa == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xf) {
              puVar5 = (uint *)Capture((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xf;
              puVar5 = (uint *)Capture((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0x12 == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x11) {
              puVar5 = (uint *)Recharge((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x11;
              puVar5 = (uint *)Recharge((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0xe == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x10) {
              puVar5 = (uint *)Teleport((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x10;
              puVar5 = (uint *)Teleport((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0x16 == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x12) {
              puVar5 = Bring((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x12;
              puVar5 = Bring((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)((int)&this_00[3].field_0018 + 2) == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x13) {
              puVar5 = (uint *)GrpDismant((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x13;
              puVar5 = (uint *)GrpDismant((STGroupBoatC *)this_00,0);
            }
          }
          else {
            if (*(int *)((int)&this_00[3].field_001C + 2) != 1) {
              if (*(int *)((int)&this_00[3].field_0020 + 2) != 1) goto LAB_004984d0;
              if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x15) {
                puVar5 = (uint *)GrpRepSub((STGroupBoatC *)this_00,1);
              }
              else {
                *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x15;
                puVar5 = (uint *)GrpRepSub((STGroupBoatC *)this_00,0);
              }
              goto LAB_0049818d;
            }
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x14) {
              puVar5 = Scout((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x14;
              puVar5 = Scout((STGroupBoatC *)this_00,0);
            }
          }
          goto cf_common_exit_004984F2;
        }
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xc) {
          puVar5 = GrpUnLoadObj((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xc;
          puVar5 = GrpUnLoadObj((STGroupBoatC *)this_00,0);
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
  GrpMove((STGroupBoatC *)this_00,iVar4);
  thunk_FUN_00423320(this_00,0x5d95);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}


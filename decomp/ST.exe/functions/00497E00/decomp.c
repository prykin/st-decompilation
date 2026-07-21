#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetMessage

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21
    */

undefined4 __thiscall
STGroupBoatC::GetMessage(STGroupBoatC *this,AnonShape_00497E00_1D819A47 *param_1)

{
  code *pcVar1;
  STGroupC *this_00;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  DArrayTy *pDVar6;
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
  iVar2 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  this_00 = local_20;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x3b4,0,iVar2,&DAT_007a4ccc,
                               s_STGroupBoatC__GetMessage_007abe7c);
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x3b5);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1->field_0010 != 3) {
    STGroupC::GetMessage(local_20,(AnonShape_00423EC0_64CE1121 *)param_1);
  }
  uVar7 = param_1->field_0010;
  if (3 < uVar7) {
    if (uVar7 != 0x10f) {
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
              (PTR_00802a38,*(undefined4 *)&this_00->field_0x18,local_8,
               (AnonShape_0060EA30_DCEB68AD *)(local_10 + local_c));
    FreeAndNull(&local_1c);
    FreeAndNull(&local_18);
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (uVar7 == 3) {
    pDVar6 = *(DArrayTy **)((int)&this_00[3].field_0035 + 3);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[3].field_0035 + 3) = 0;
    }
    if (*(DArrayTy **)&this_00[4].field_0xf != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00[4].field_0xf);
      *(undefined4 *)&this_00[4].field_0xf = 0;
    }
    if (*(DArrayTy **)&this_00[4].field_0x1b != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00[4].field_0x1b);
      *(undefined4 *)&this_00[4].field_0x1b = 0;
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[4].field_0031 + 2);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[4].field_0031 + 2) = 0;
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[5].field_002D + 2);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[5].field_002D + 2) = 0;
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[5].field_0035 + 2);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[5].field_0035 + 2) = 0;
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[7].field_001C + 3);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[7].field_001C + 3) = 0;
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[7].field_0020 + 3);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[7].field_0020 + 3) = 0;
    }
    if (*(DArrayTy **)&this_00[7].field_0027 != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00[7].field_0027);
      *(undefined4 *)&this_00[7].field_0027 = 0;
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[7].field_0029 + 2);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[7].field_0029 + 2) = 0;
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[7].field_002D + 2);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[7].field_002D + 2) = 0;
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[7].field_0031 + 2);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[7].field_0031 + 2) = 0;
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
    if (*(int *)((int)&this_00[8].field_0035 + 1) != 0) {
      FreeAndNull((void **)((int)&this_00[8].field_0035 + 1));
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[8].field_0025 + 1);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[8].field_0025 + 1) = 0;
    }
    pDVar6 = *(DArrayTy **)((int)&this_00[9].vtable + 1);
    if (pDVar6 != (DArrayTy *)0x0) {
      DArrayDestroy(pDVar6);
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
      this_00[9].field_0029 = 0;
    }
    if (*(DArrayTy **)&this_00[10].field_0x4 != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&this_00[10].field_0x4);
      *(undefined4 *)&this_00[10].field_0x4 = 0;
    }
    if (this_00[0xb].vtable != (STGroupCVTable *)0x0) {
      DArrayDestroy((DArrayTy *)this_00[0xb].vtable);
      this_00[0xb].vtable = (STGroupCVTable *)0x0;
    }
    (*this_00->vtable->vfunc_18)(this_00,0,0,0);
    STGroupC::GetMessage(this_00,(AnonShape_00423EC0_64CE1121 *)param_1);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (uVar7 != 0) {
    if (uVar7 != 2) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    iVar2 = param_1->field_0014;
    if (1 < *(uint *)(iVar2 + 0xc)) {
      if (*(uint *)(iVar2 + 0xc) != 2) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      RestoreGrpBData((STGroupBoatC *)this_00,(undefined4 *)(*(int *)(iVar2 + 0x38) + iVar2));
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
    local_38 = *(undefined4 *)&PTR_00802a38->field_0x14;
    SystemClassTy::PostMessage((SystemClassTy *)PTR_00802a38,local_40);
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (*(int *)&this_00[1].field_0024 == 1) {
    iVar2 = *(int *)&this_00[2].field_0x7;
    uVar7 = 0;
    *(undefined4 *)&this_00[1].field_0024 = 0;
    if (iVar2 == 1) {
      pDVar6 = *(DArrayTy **)((int)&this_00[7].field_002D + 2);
      *(undefined4 *)&this_00[2].field_0x7 = 0;
      if (0 < (int)pDVar6->count) {
        do {
          DArrayGetElement(pDVar6,uVar7,&local_14);
          (*this_00->vtable->vfunc_04)(local_14);
          pDVar6 = *(DArrayTy **)((int)&this_00[7].field_002D + 2);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)pDVar6->count);
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
       (iVar2 = this_00->field_002D, *(undefined4 *)((int)&this_00[1].field_002D + 3) = 0,
       iVar2 != 0)) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      RechargeNewCmd((STGroupBoatC *)this_00,unaff_EDI);
      DArrayDestroy((DArrayTy *)this_00->field_002D);
      this_00->field_002D = 0;
    }
    if (*(int *)((int)&this_00[1].field_0031 + 3) == 1) {
      pDVar6 = *(DArrayTy **)((int)&this_00[7].field_001C + 3);
      *(undefined4 *)((int)&this_00[1].field_0031 + 3) = 0;
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[7].field_001C + 3) = 0;
    }
    if (*(int *)((int)&this_00[1].field_0035 + 3) == 1) {
      puVar3 = *(uint **)((int)&this_00[7].field_0020 + 3);
      *(undefined4 *)((int)&this_00[1].field_0035 + 3) = 0;
      ReMakePVecAndTgtList((STGroupBoatC *)this_00,puVar3);
      DistributeTargets((STGroupBoatC *)this_00,*(uint **)((int)&this_00[7].field_0020 + 3));
      DArrayDestroy(*(DArrayTy **)((int)&this_00[7].field_0020 + 3));
      *(undefined4 *)((int)&this_00[7].field_0020 + 3) = 0;
    }
    if (*(int *)((int)&this_00[1].field_0039 + 3) == 1) {
      pDVar6 = *(DArrayTy **)&this_00[7].field_0027;
      *(undefined4 *)((int)&this_00[1].field_0039 + 3) = 0;
      DArrayDestroy(pDVar6);
      *(undefined4 *)&this_00[7].field_0027 = 0;
    }
    if (*(int *)((int)&this_00[2].vtable + 3) == 1) {
      pDVar6 = *(DArrayTy **)((int)&this_00[7].field_0029 + 2);
      *(undefined4 *)((int)&this_00[2].vtable + 3) = 0;
      DArrayDestroy(pDVar6);
      *(undefined4 *)((int)&this_00[7].field_0029 + 2) = 0;
    }
  }
  if (*(int *)((int)&this_00[1].field_0027 + 1) != 1) {
LAB_004984d0:
    switch(*(undefined4 *)((int)&this_00[7].field_0039 + 2)) {
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
      *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 3;
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
      puVar3 = Scout((STGroupBoatC *)this_00,2);
      break;
    case 0x15:
      puVar3 = (uint *)GrpRepSub((STGroupBoatC *)this_00,2);
      break;
    default:
      goto switchD_004984e0_default;
    }
    goto cf_common_exit_004984F2;
  }
  if (*(int *)&this_00[2].field_0xf == 1) {
    if (*(int *)((int)&this_00[7].field_0039 + 2) == 1) {
      iVar2 = 1;
    }
    else {
      *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 1;
      iVar2 = 0;
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
      puVar3 = (uint *)GrpAttack((STGroupBoatC *)this_00,1);
    }
    else {
      *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 2;
      puVar3 = (uint *)GrpAttack((STGroupBoatC *)this_00,0);
    }
cf_common_exit_004984F2:
    if (puVar3 != (uint *)0x0) {
switchD_004984e0_default:
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 3;
  }
  else {
    if (*(int *)&this_00[2].field_0027 == 1) {
      if (*(int *)((int)&this_00[7].field_0039 + 2) == 7) {
        puVar3 = (uint *)GrpGoToDeep((STGroupBoatC *)this_00,1);
      }
      else {
        *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 7;
        puVar3 = (uint *)GrpGoToDeep((STGroupBoatC *)this_00,0);
      }
      goto cf_common_exit_004984F2;
    }
    if (*(int *)((int)&this_00[2].field_0020 + 3) == 1) {
      bVar10 = *(int *)((int)&this_00[7].field_0039 + 2) == 6;
      if (!bVar10) {
        *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 6;
      }
      puVar3 = (uint *)GrpPatrol((STGroupBoatC *)this_00,(uint)bVar10);
      if (puVar3 == (uint *)0xffffffff) {
        return 0xffff;
      }
      goto cf_common_exit_004984F2;
    }
    if (*(int *)((int)&this_00[2].field_0029 + 2) == 1) {
      bVar10 = *(int *)((int)&this_00[7].field_0039 + 2) == 8;
      if (!bVar10) {
        *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 8;
      }
      puVar3 = (uint *)GrpLoadRC((STGroupBoatC *)this_00,(uint)bVar10);
    }
    else {
      if (*(int *)((int)&this_00[2].field_002D + 2) == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 9) {
          puVar3 = (uint *)GrpBuild((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 9;
          puVar3 = (uint *)GrpBuild((STGroupBoatC *)this_00,0);
        }
        goto cf_common_exit_004984F2;
      }
      if (*(int *)((int)&this_00[2].field_0031 + 2) == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 10) {
          puVar3 = (uint *)GrpUnLoadRC((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 10;
          puVar3 = (uint *)GrpUnLoadRC((STGroupBoatC *)this_00,0);
        }
      }
      else if (*(int *)&this_00[2].field_0x1b == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 4) {
          puVar3 = (uint *)GrpRepare((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 4;
          puVar3 = (uint *)GrpRepare((STGroupBoatC *)this_00,0);
        }
      }
      else if (*(int *)((int)&this_00[2].field_001C + 3) == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 5) {
          puVar3 = (uint *)GrpGuard((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 5;
          puVar3 = (uint *)GrpGuard((STGroupBoatC *)this_00,0);
        }
      }
      else if (*(int *)((int)&this_00[2].field_0035 + 2) == 1) {
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xb) {
          puVar3 = (uint *)GrpLoadObj((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xb;
          puVar3 = (uint *)GrpLoadObj((STGroupBoatC *)this_00,0);
        }
      }
      else {
        if (*(int *)((int)&this_00[2].field_0039 + 2) != 1) {
          if (*(int *)((int)&this_00[3].vtable + 2) == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xd) {
              puVar3 = (uint *)SetMine((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xd;
              puVar3 = (uint *)SetMine((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0x6 == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xe) {
              puVar3 = (uint *)DCBomb((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xe;
              puVar3 = (uint *)DCBomb((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0xa == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xf) {
              puVar3 = (uint *)Capture((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xf;
              puVar3 = (uint *)Capture((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0x12 == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x11) {
              puVar3 = (uint *)Recharge((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x11;
              puVar3 = (uint *)Recharge((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0xe == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x10) {
              puVar3 = (uint *)Teleport((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x10;
              puVar3 = (uint *)Teleport((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0x16 == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x12) {
              puVar3 = Bring((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x12;
              puVar3 = Bring((STGroupBoatC *)this_00,0);
            }
          }
          else if (*(int *)&this_00[3].field_0x1a == 1) {
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x13) {
              puVar3 = (uint *)GrpDismant((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x13;
              puVar3 = (uint *)GrpDismant((STGroupBoatC *)this_00,0);
            }
          }
          else {
            if (*(int *)((int)&this_00[3].field_001C + 2) != 1) {
              if (*(int *)((int)&this_00[3].field_0020 + 2) != 1) goto LAB_004984d0;
              if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x15) {
                puVar3 = (uint *)GrpRepSub((STGroupBoatC *)this_00,1);
              }
              else {
                *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x15;
                puVar3 = (uint *)GrpRepSub((STGroupBoatC *)this_00,0);
              }
              goto LAB_0049818d;
            }
            if (*(int *)((int)&this_00[7].field_0039 + 2) == 0x14) {
              puVar3 = Scout((STGroupBoatC *)this_00,1);
            }
            else {
              *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0x14;
              puVar3 = Scout((STGroupBoatC *)this_00,0);
            }
          }
          goto cf_common_exit_004984F2;
        }
        if (*(int *)((int)&this_00[7].field_0039 + 2) == 0xc) {
          puVar3 = GrpUnLoadObj((STGroupBoatC *)this_00,1);
        }
        else {
          *(undefined4 *)((int)&this_00[7].field_0039 + 2) = 0xc;
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



/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SelectObjects
   
   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_SelectObjects_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

void __thiscall
STAllPlayersC::SelectObjects
          (STAllPlayersC *this,STAllPlayersC_SelectObjects_param_1Enum param_1,uint param_2,
          uint param_3)

{
  DArrayTy *pDVar1;
  dword dVar2;
  code *pcVar3;
  byte playerId;
  uint objPtr;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar4;
  STGroupBoatC *this_00;
  int *piVar5;
  int iVar6;
  int unaff_EDI;
  uint uVar7;
  char cVar8;
  uint local_14;
  DArrayTy *local_10;
  AnonShape_0043EED0_93C25F9A *local_c;
  DArrayTy *local_8;
  
  playerId = DAT_0080874d;
  objPtr = (uint)DAT_0080874d;
  local_8 = (DArrayTy *)0x0;
  local_10 = (DArrayTy *)0x0;
  local_c = (AnonShape_0043EED0_93C25F9A *)0x0;
  local_8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  switch(param_1) {
  case CASE_0:
    param_3 = 0;
    pDVar1 = g_playerRuntime[objPtr].objects;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        piVar5 = *(int **)((int)pDVar1->data + param_3 * 4);
        if (((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
           ((iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 1 &&
            (iVar6 = (**(code **)(*piVar5 + 0xec))(), iVar6 == 1)))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_1:
    GetGObjFromZone(this,playerId,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,
                    (int *)&local_8,(int *)0x0);
    param_3 = 0;
    param_2 = local_8->count;
    if (0 < (int)param_2) {
      do {
        piVar5 = (int *)GetObjPtr(this,objPtr,
                                  CONCAT22((short)((uint)local_8 >> 0x10),
                                           *(undefined2 *)((int)local_8->data + param_3 * 2)),CASE_1
                                 );
        if ((((piVar5 == (int *)0x0) || (piVar5[8] != 0x14)) ||
            (iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 0)) ||
           (iVar6 = (**(code **)(*piVar5 + 0xec))(), iVar6 == 0)) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_8,param_3);
          param_2 = param_2 - 1;
          param_3 = param_3 - 1;
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)param_2);
    }
    break;
  case CASE_2:
    param_3 = 0;
    pDVar1 = g_playerRuntime[objPtr].objects;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        piVar5 = *(int **)((int)pDVar1->data + param_3 * 4);
        if (((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
           (((iVar6 = (**(code **)(*piVar5 + 0x2c))(),
             (*(uint *)(&DAT_00800f10 + (iVar6 + 0x41U >> 5) * 4) &
             1 << ((byte)(iVar6 + 0x41U) & 0x1f)) != 0 ||
             (iVar6 = (**(code **)(*piVar5 + 0x2c))(),
             ((&DAT_00800f00)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) != 0)) &&
            ((iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 1 &&
             (iVar6 = (**(code **)(*piVar5 + 0xec))(), iVar6 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_3:
    param_3 = 0;
    pDVar1 = g_playerRuntime[objPtr].objects;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        piVar5 = *(int **)((int)pDVar1->data + param_3 * 4);
        if (((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
           ((iVar6 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00801000)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) != 0 &&
            ((iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 1 &&
             (iVar6 = (**(code **)(*piVar5 + 0xec))(), iVar6 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_4:
    param_3 = 0;
    pDVar1 = g_playerRuntime[objPtr].objects;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        piVar5 = *(int **)((int)pDVar1->data + param_3 * 4);
        if ((((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
            (iVar6 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00800fa0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) != 0)) &&
           ((iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 1 &&
            (iVar6 = (**(code **)(*piVar5 + 0xec))(), iVar6 == 1)))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_5:
    param_3 = 0;
    pDVar1 = g_playerRuntime[objPtr].objects;
    dVar2 = pDVar1->count;
    if (0 < (int)dVar2) {
      do {
        piVar5 = *(int **)((int)pDVar1->data + param_3 * 4);
        if (((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
           ((iVar6 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00801010)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) != 0 &&
            ((iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 1 &&
             (iVar6 = (**(code **)(*piVar5 + 0xec))(), iVar6 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_6:
    piVar5 = (int *)FUN_006eb350(PTR_00807598,param_2,param_3,0xe,1);
    if (((piVar5 != (int *)0x0) && (piVar5[9] == objPtr)) && (piVar5[8] == 0x14)) {
      FUN_006ae110((byte *)local_8);
      GetGObjFromZone(this,playerId,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,
                      (int *)&local_c,(int *)0x0);
      cVar8 = -1;
      iVar6 = 0;
      SVar4 = (**(code **)(*piVar5 + 0x2c))();
      local_8 = (DArrayTy *)GetTOBJListFromDArr(this,objPtr,local_c,SVar4,iVar6,cVar8);
      FUN_006ae110((byte *)local_c);
      param_3 = 0;
      param_2 = local_8->count;
      if (0 < (int)param_2) {
        do {
          piVar5 = (int *)GetObjPtr(this,objPtr,
                                    CONCAT22((short)((uint)local_8 >> 0x10),
                                             *(undefined2 *)((int)local_8->data + param_3 * 2)),
                                    CASE_1);
          if ((((piVar5 == (int *)0x0) || (piVar5[8] != 0x14)) ||
              (iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 0)) ||
             (iVar6 = (**(code **)(*piVar5 + 0xec))(), iVar6 == 0)) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_8,param_3);
            param_2 = param_2 - 1;
            param_3 = param_3 - 1;
          }
          param_3 = param_3 + 1;
        } while ((int)param_3 < (int)param_2);
      }
    }
    break;
  case CASE_7:
    iVar6 = FUN_006eb350(PTR_00807598,param_2,param_3,0xe,1);
    if ((((iVar6 != 0) && (*(uint *)(iVar6 + 0x24) == objPtr)) && (*(int *)(iVar6 + 0x20) == 0x14))
       && ((*(short *)(iVar6 + 0x30) != -1 &&
           (this_00 = thunk_FUN_0042b760(objPtr,CONCAT22((short)((uint)iVar6 >> 0x10),
                                                         *(short *)(iVar6 + 0x30))),
           this_00 != (STGroupBoatC *)0x0)))) {
      FUN_006ae110((byte *)local_8);
      local_8 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this_00,unaff_EDI);
      param_2 = local_8->count;
      uVar7 = 0;
      if (0 < (int)param_2) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_8,uVar7,&local_14);
          piVar5 = (int *)GetObjPtr(this,objPtr,local_14,CASE_1);
          iVar6 = (**(code **)(*piVar5 + 0xec))();
          if (iVar6 == 0) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_8,uVar7);
            param_2 = param_2 - 1;
            uVar7 = uVar7 - 1;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)param_2);
      }
    }
    break;
  default:
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3123,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__SelectObjects_inv_007a8a58);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_8->count == 0) {
    FUN_006ae110((byte *)local_8);
    return;
  }
  if (g_playerRuntime[objPtr].field324_0x203 == 0) {
    iVar6 = g_playerRuntime[objPtr].tempSlots[0][0].objectType;
    if (iVar6 != 0) {
      if (iVar6 == 0x3c) {
        iVar6 = CheckTmps(playerId,0,0x3c,playerId,local_8,0);
        if (0 < iVar6) {
          ActivateTV(this,playerId,0,iVar6);
          goto cf_common_exit_0044BD53;
        }
        if (-1 < iVar6) goto cf_common_exit_0044BD53;
        PushTV(playerId,0);
        if (g_playerRuntime[objPtr].tempSlots[0][1].playerId == objPtr) {
          CalibrateTmp(this,playerId,0,1,&local_8->flags,(int *)&local_10,(int *)0x0,(int *)0x0);
          ResetActivityFromObjs(this,objPtr,0x3c,local_10,0,0);
          FUN_006ae110((byte *)local_10);
        }
        else {
          ResetActivityFromTmp(this,playerId,0,1,0);
        }
      }
      else {
        if (iVar6 != 0x1ae) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3152,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__SelectObjects_GAM_007a898c);
          if (iVar6 != 0) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto cf_common_exit_0044BD53;
        }
        iVar6 = CheckTmps(playerId,0,0x3c,playerId,local_8,0);
        if (0 < iVar6) {
          ActivateTV(this,playerId,0,iVar6);
          goto cf_common_exit_0044BD53;
        }
        PushTV(playerId,0);
        ResetActivityFromTmp(this,playerId,0,1,0);
      }
      goto cf_common_exit_0044BD3D;
    }
    iVar6 = CheckTmps(playerId,0,0x3c,playerId,local_8,0);
    if (iVar6 < 1) goto cf_common_exit_0044BD3D;
    ActivateTV(this,playerId,0,iVar6);
  }
  else {
    if (g_playerRuntime[objPtr].field324_0x203 != 1) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x317d,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__SelectObjects_GAM_007a8a0c);
      if (iVar6 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto cf_common_exit_0044BD53;
    }
    g_playerRuntime[objPtr].field324_0x203 = 0;
    ResetActivityFromTmp(this,playerId,1,0,0);
    iVar6 = g_playerRuntime[objPtr].tempSlots[0][0].objectType;
    if (iVar6 == 0) {
      iVar6 = CheckTmps(playerId,0,0x3c,playerId,local_8,0);
      if (0 < iVar6) {
        ActivateTV(this,playerId,0,iVar6);
        goto LAB_0044bd49;
      }
    }
    else if (iVar6 == 0x3c) {
      iVar6 = CheckTmps(playerId,0,0x3c,playerId,local_8,0);
      if (-1 < iVar6) {
        ActivateTV(this,playerId,0,iVar6);
        goto cf_common_exit_0044BD53;
      }
      PushTV(playerId,0);
    }
    else {
      if (iVar6 != 0x1ae) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3179,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__SelectObjects_GAM_007a89cc);
        if (iVar6 != 0) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto cf_common_exit_0044BD53;
      }
      iVar6 = CheckTmps(playerId,0,0x3c,playerId,local_8,0);
      if (0 < iVar6) {
        ActivateTV(this,playerId,0,iVar6);
        goto cf_common_exit_0044BD53;
      }
      PushTV(playerId,0);
    }
cf_common_exit_0044BD3D:
    AddObjsToTmp(this,objPtr,0,0,local_8);
  }
LAB_0044bd49:
  g_playerRuntime[objPtr].tempSlots[0][0].objectType = 0x3c;
cf_common_exit_0044BD53:
  FUN_006ae110((byte *)local_8);
  SelfCheckObjControl(this);
  return;
}


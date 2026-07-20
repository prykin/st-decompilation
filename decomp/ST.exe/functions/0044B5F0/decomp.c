
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
  byte bVar4;
  uint objPtr;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar5;
  STGroupBoatC *this_00;
  int *piVar6;
  int iVar7;
  int unaff_EDI;
  uint uVar8;
  char cVar9;
  uint local_14;
  DArrayTy *local_10;
  AnonShape_0043EED0_93C25F9A *local_c;
  DArrayTy *local_8;
  
  bVar4 = DAT_0080874d;
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
        piVar6 = *(int **)((int)pDVar1->data + param_3 * 4);
        if (((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
           ((iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 == 1 &&
            (iVar7 = (**(code **)(*piVar6 + 0xec))(), iVar7 == 1)))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar6 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_1:
    GetGObjFromZone(this,bVar4,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,(int *)&local_8,
                    (int *)0x0);
    param_3 = 0;
    param_2 = local_8->count;
    if (0 < (int)param_2) {
      do {
        piVar6 = (int *)GetObjPtr(this,objPtr,
                                  CONCAT22((short)((uint)local_8 >> 0x10),
                                           *(undefined2 *)((int)local_8->data + param_3 * 2)),CASE_1
                                 );
        if ((((piVar6 == (int *)0x0) || (piVar6[8] != 0x14)) ||
            (iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 == 0)) ||
           (iVar7 = (**(code **)(*piVar6 + 0xec))(), iVar7 == 0)) {
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
        piVar6 = *(int **)((int)pDVar1->data + param_3 * 4);
        if (((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
           (((iVar7 = (**(code **)(*piVar6 + 0x2c))(),
             (*(uint *)(&DAT_00800f10 + (iVar7 + 0x41U >> 5) * 4) &
             1 << ((byte)(iVar7 + 0x41U) & 0x1f)) != 0 ||
             (iVar7 = (**(code **)(*piVar6 + 0x2c))(),
             ((&DAT_00800f00)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) != 0)) &&
            ((iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 == 1 &&
             (iVar7 = (**(code **)(*piVar6 + 0xec))(), iVar7 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar6 + 0x32));
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
        piVar6 = *(int **)((int)pDVar1->data + param_3 * 4);
        if (((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
           ((iVar7 = (**(code **)(*piVar6 + 0x2c))(),
            ((&DAT_00801000)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) != 0 &&
            ((iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 == 1 &&
             (iVar7 = (**(code **)(*piVar6 + 0xec))(), iVar7 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar6 + 0x32));
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
        piVar6 = *(int **)((int)pDVar1->data + param_3 * 4);
        if ((((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
            (iVar7 = (**(code **)(*piVar6 + 0x2c))(),
            ((&DAT_00800fa0)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) != 0)) &&
           ((iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 == 1 &&
            (iVar7 = (**(code **)(*piVar6 + 0xec))(), iVar7 == 1)))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar6 + 0x32));
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
        piVar6 = *(int **)((int)pDVar1->data + param_3 * 4);
        if (((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
           ((iVar7 = (**(code **)(*piVar6 + 0x2c))(),
            ((&DAT_00801010)[iVar7 + 0x41U >> 5] & 1 << ((byte)(iVar7 + 0x41U) & 0x1f)) != 0 &&
            ((iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 == 1 &&
             (iVar7 = (**(code **)(*piVar6 + 0xec))(), iVar7 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)((int)piVar6 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)dVar2);
    }
    break;
  case CASE_6:
    piVar6 = (int *)FUN_006eb350(PTR_00807598,param_2,param_3,0xe,1);
    if (((piVar6 != (int *)0x0) && (piVar6[9] == objPtr)) && (piVar6[8] == 0x14)) {
      FUN_006ae110((byte *)local_8);
      GetGObjFromZone(this,bVar4,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,(int *)&local_c
                      ,(int *)0x0);
      cVar9 = -1;
      iVar7 = 0;
      SVar5 = (**(code **)(*piVar6 + 0x2c))();
      local_8 = (DArrayTy *)GetTOBJListFromDArr(this,objPtr,local_c,SVar5,iVar7,cVar9);
      FUN_006ae110((byte *)local_c);
      param_3 = 0;
      param_2 = local_8->count;
      if (0 < (int)param_2) {
        do {
          piVar6 = (int *)GetObjPtr(this,objPtr,
                                    CONCAT22((short)((uint)local_8 >> 0x10),
                                             *(undefined2 *)((int)local_8->data + param_3 * 2)),
                                    CASE_1);
          if ((((piVar6 == (int *)0x0) || (piVar6[8] != 0x14)) ||
              (iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 == 0)) ||
             (iVar7 = (**(code **)(*piVar6 + 0xec))(), iVar7 == 0)) {
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
    iVar7 = FUN_006eb350(PTR_00807598,param_2,param_3,0xe,1);
    if ((((iVar7 != 0) && (*(uint *)(iVar7 + 0x24) == objPtr)) && (*(int *)(iVar7 + 0x20) == 0x14))
       && ((*(short *)(iVar7 + 0x30) != -1 &&
           (this_00 = thunk_FUN_0042b760(objPtr,CONCAT22((short)((uint)iVar7 >> 0x10),
                                                         *(short *)(iVar7 + 0x30))),
           this_00 != (STGroupBoatC *)0x0)))) {
      FUN_006ae110((byte *)local_8);
      local_8 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this_00,unaff_EDI);
      param_2 = local_8->count;
      uVar8 = 0;
      if (0 < (int)param_2) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_8,uVar8,&local_14);
          piVar6 = (int *)GetObjPtr(this,objPtr,local_14,CASE_1);
          iVar7 = (**(code **)(*piVar6 + 0xec))();
          if (iVar7 == 0) {
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_8,uVar8);
            param_2 = param_2 - 1;
            uVar8 = uVar8 - 1;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)param_2);
      }
    }
    break;
  default:
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3123,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__SelectObjects_inv_007a8a58);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_8->count == 0) {
    FUN_006ae110((byte *)local_8);
    return;
  }
  if (g_playerRuntime[objPtr].field442_0x203 == 0) {
    iVar7 = g_playerRuntime[objPtr].field326_0x163;
    if (iVar7 != 0) {
      if (iVar7 == 0x3c) {
        iVar7 = CheckTmps(objPtr,0,0x3c,bVar4,&local_8->flags,0);
        if (0 < iVar7) {
          ActivateTV(this,bVar4,0,iVar7);
          goto cf_common_exit_0044BD53;
        }
        if (-1 < iVar7) goto cf_common_exit_0044BD53;
        PushTV(bVar4,0);
        if (g_playerRuntime[objPtr].field332_0x177 == objPtr) {
          CalibrateTmp(this,bVar4,0,1,&local_8->flags,(int *)&local_10,(int *)0x0,(int *)0x0);
          ResetActivityFromObjs(this,objPtr,0x3c,local_10,0,0);
          FUN_006ae110((byte *)local_10);
        }
        else {
          ResetActivityFromTmp(this,bVar4,0,1,0);
        }
      }
      else {
        if (iVar7 != 0x1ae) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3152,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__SelectObjects_GAM_007a898c);
          if (iVar7 != 0) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto cf_common_exit_0044BD53;
        }
        iVar7 = CheckTmps(objPtr,0,0x3c,bVar4,&local_8->flags,0);
        if (0 < iVar7) {
          ActivateTV(this,bVar4,0,iVar7);
          goto cf_common_exit_0044BD53;
        }
        PushTV(bVar4,0);
        ResetActivityFromTmp(this,bVar4,0,1,0);
      }
      goto cf_common_exit_0044BD3D;
    }
    iVar7 = CheckTmps(objPtr,0,0x3c,bVar4,&local_8->flags,0);
    if (iVar7 < 1) goto cf_common_exit_0044BD3D;
    ActivateTV(this,bVar4,0,iVar7);
  }
  else {
    if (g_playerRuntime[objPtr].field442_0x203 != 1) {
      iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x317d,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__SelectObjects_GAM_007a8a0c);
      if (iVar7 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto cf_common_exit_0044BD53;
    }
    g_playerRuntime[objPtr].field442_0x203 = 0;
    ResetActivityFromTmp(this,bVar4,1,0,0);
    iVar7 = g_playerRuntime[objPtr].field326_0x163;
    if (iVar7 == 0) {
      iVar7 = CheckTmps(objPtr,0,0x3c,bVar4,&local_8->flags,0);
      if (0 < iVar7) {
        ActivateTV(this,bVar4,0,iVar7);
        goto LAB_0044bd49;
      }
    }
    else if (iVar7 == 0x3c) {
      iVar7 = CheckTmps(objPtr,0,0x3c,bVar4,&local_8->flags,0);
      if (-1 < iVar7) {
        ActivateTV(this,bVar4,0,iVar7);
        goto cf_common_exit_0044BD53;
      }
      PushTV(bVar4,0);
    }
    else {
      if (iVar7 != 0x1ae) {
        iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3179,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__SelectObjects_GAM_007a89cc);
        if (iVar7 != 0) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        goto cf_common_exit_0044BD53;
      }
      iVar7 = CheckTmps(objPtr,0,0x3c,bVar4,&local_8->flags,0);
      if (0 < iVar7) {
        ActivateTV(this,bVar4,0,iVar7);
        goto cf_common_exit_0044BD53;
      }
      PushTV(bVar4,0);
    }
cf_common_exit_0044BD3D:
    AddObjsToTmp(this,objPtr,0,0,local_8);
  }
LAB_0044bd49:
  g_playerRuntime[objPtr].field326_0x163 = 0x3c;
cf_common_exit_0044BD53:
  FUN_006ae110((byte *)local_8);
  SelfCheckObjControl(this);
  return;
}


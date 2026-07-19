
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
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar5;
  STGroupC *this_00;
  int *piVar6;
  int iVar7;
  int iVar8;
  int unaff_EDI;
  uint uVar9;
  char cVar10;
  uint local_14;
  byte *local_10;
  byte *local_c;
  uint *local_8;
  
  bVar2 = DAT_0080874d;
  uVar3 = (uint)DAT_0080874d;
  local_8 = (uint *)0x0;
  local_10 = (byte *)0x0;
  local_c = (byte *)0x0;
  local_8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  switch(param_1) {
  case CASE_0:
    param_3 = 0;
    iVar7 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar8 = *(int *)(iVar7 + 0xc);
    if (0 < iVar8) {
      do {
        piVar6 = *(int **)(*(int *)(iVar7 + 0x1c) + param_3 * 4);
        if (((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar6 + 0xf8))(), iVar4 == 1 &&
            (iVar4 = (**(code **)(*piVar6 + 0xec))(), iVar4 == 1)))) {
          Library::DKW::TBL::FUN_006ae1c0(local_8,(undefined4 *)((int)piVar6 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar8);
    }
    break;
  case CASE_1:
    GetGObjFromZone(this,bVar2,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,(int *)&local_8,
                    (int *)0x0);
    param_3 = 0;
    param_2 = local_8[3];
    if (0 < (int)param_2) {
      do {
        piVar6 = (int *)GetObjPtr(this,uVar3,
                                  CONCAT22((short)((uint)local_8 >> 0x10),
                                           *(undefined2 *)(local_8[7] + param_3 * 2)),CASE_1);
        if ((((piVar6 == (int *)0x0) || (piVar6[8] != 0x14)) ||
            (iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 == 0)) ||
           (iVar7 = (**(code **)(*piVar6 + 0xec))(), iVar7 == 0)) {
          FUN_006b0c70((int)local_8,param_3);
          param_2 = param_2 - 1;
          param_3 = param_3 - 1;
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)param_2);
    }
    break;
  case CASE_2:
    param_3 = 0;
    iVar7 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar8 = *(int *)(iVar7 + 0xc);
    if (0 < iVar8) {
      do {
        piVar6 = *(int **)(*(int *)(iVar7 + 0x1c) + param_3 * 4);
        if (((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
           (((iVar4 = (**(code **)(*piVar6 + 0x2c))(),
             (*(uint *)(&DAT_00800f10 + (iVar4 + 0x41U >> 5) * 4) &
             1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 ||
             (iVar4 = (**(code **)(*piVar6 + 0x2c))(),
             ((&DAT_00800f00)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0)) &&
            ((iVar4 = (**(code **)(*piVar6 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar6 + 0xec))(), iVar4 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(local_8,(undefined4 *)((int)piVar6 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar8);
    }
    break;
  case CASE_3:
    param_3 = 0;
    iVar7 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar8 = *(int *)(iVar7 + 0xc);
    if (0 < iVar8) {
      do {
        piVar6 = *(int **)(*(int *)(iVar7 + 0x1c) + param_3 * 4);
        if (((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar6 + 0x2c))(),
            ((&DAT_00801000)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 &&
            ((iVar4 = (**(code **)(*piVar6 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar6 + 0xec))(), iVar4 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(local_8,(undefined4 *)((int)piVar6 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar8);
    }
    break;
  case CASE_4:
    param_3 = 0;
    iVar7 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar8 = *(int *)(iVar7 + 0xc);
    if (0 < iVar8) {
      do {
        piVar6 = *(int **)(*(int *)(iVar7 + 0x1c) + param_3 * 4);
        if ((((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
            (iVar4 = (**(code **)(*piVar6 + 0x2c))(),
            ((&DAT_00800fa0)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0)) &&
           ((iVar4 = (**(code **)(*piVar6 + 0xf8))(), iVar4 == 1 &&
            (iVar4 = (**(code **)(*piVar6 + 0xec))(), iVar4 == 1)))) {
          Library::DKW::TBL::FUN_006ae1c0(local_8,(undefined4 *)((int)piVar6 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar8);
    }
    break;
  case CASE_5:
    param_3 = 0;
    iVar7 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar8 = *(int *)(iVar7 + 0xc);
    if (0 < iVar8) {
      do {
        piVar6 = *(int **)(*(int *)(iVar7 + 0x1c) + param_3 * 4);
        if (((piVar6 != (int *)0x0) && (piVar6[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar6 + 0x2c))(),
            ((&DAT_00801010)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 &&
            ((iVar4 = (**(code **)(*piVar6 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar6 + 0xec))(), iVar4 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(local_8,(undefined4 *)((int)piVar6 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar8);
    }
    break;
  case CASE_6:
    piVar6 = (int *)FUN_006eb350(DAT_00807598,param_2,param_3,0xe,1);
    if (((piVar6 != (int *)0x0) && (piVar6[9] == uVar3)) && (piVar6[8] == 0x14)) {
      FUN_006ae110((byte *)local_8);
      GetGObjFromZone(this,bVar2,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,(int *)&local_c
                      ,(int *)0x0);
      cVar10 = -1;
      iVar7 = 0;
      SVar5 = (**(code **)(*piVar6 + 0x2c))();
      local_8 = GetTOBJListFromDArr(this,uVar3,(int)local_c,SVar5,iVar7,cVar10);
      FUN_006ae110(local_c);
      param_3 = 0;
      param_2 = local_8[3];
      if (0 < (int)param_2) {
        do {
          piVar6 = (int *)GetObjPtr(this,uVar3,
                                    CONCAT22((short)((uint)local_8 >> 0x10),
                                             *(undefined2 *)(local_8[7] + param_3 * 2)),CASE_1);
          if ((((piVar6 == (int *)0x0) || (piVar6[8] != 0x14)) ||
              (iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 == 0)) ||
             (iVar7 = (**(code **)(*piVar6 + 0xec))(), iVar7 == 0)) {
            FUN_006b0c70((int)local_8,param_3);
            param_2 = param_2 - 1;
            param_3 = param_3 - 1;
          }
          param_3 = param_3 + 1;
        } while ((int)param_3 < (int)param_2);
      }
    }
    break;
  case CASE_7:
    iVar7 = FUN_006eb350(DAT_00807598,param_2,param_3,0xe,1);
    if ((((iVar7 != 0) && (*(uint *)(iVar7 + 0x24) == uVar3)) && (*(int *)(iVar7 + 0x20) == 0x14))
       && ((*(short *)(iVar7 + 0x30) != -1 &&
           (this_00 = (STGroupC *)
                      thunk_FUN_0042b760(uVar3,CONCAT22((short)((uint)iVar7 >> 0x10),
                                                        *(short *)(iVar7 + 0x30))),
           this_00 != (STGroupC *)0x0)))) {
      FUN_006ae110((byte *)local_8);
      local_8 = STGroupC::GetGroupContent(this_00,unaff_EDI);
      param_2 = local_8[3];
      uVar9 = 0;
      if (0 < (int)param_2) {
        do {
          FUN_006acc70((int)local_8,uVar9,&local_14);
          piVar6 = (int *)GetObjPtr(this,uVar3,local_14,CASE_1);
          iVar7 = (**(code **)(*piVar6 + 0xec))();
          if (iVar7 == 0) {
            FUN_006b0c70((int)local_8,uVar9);
            param_2 = param_2 - 1;
            uVar9 = uVar9 - 1;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)param_2);
      }
    }
    break;
  default:
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3123,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__SelectObjects_inv_007a8a58);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_8[3] == 0) {
    FUN_006ae110((byte *)local_8);
    return;
  }
  iVar7 = uVar3 * 0xa62;
  if (*(int *)((int)&DAT_007f5023 + iVar7) == 0) {
    iVar8 = *(int *)((int)&DAT_007f4f83 + iVar7);
    if (iVar8 != 0) {
      if (iVar8 == 0x3c) {
        iVar8 = CheckTmps(uVar3,0,0x3c,bVar2,local_8,0);
        if (0 < iVar8) {
          ActivateTV(this,bVar2,0,iVar8);
          goto cf_common_exit_0044BD53;
        }
        if (-1 < iVar8) goto cf_common_exit_0044BD53;
        PushTV(bVar2,0);
        if (*(uint *)((int)&DAT_007f4f97 + iVar7) == uVar3) {
          CalibrateTmp(this,bVar2,0,1,local_8,(int *)&local_10,(int *)0x0,(int *)0x0);
          ResetActivityFromObjs(this,uVar3,0x3c,(int)local_10,0,0);
          FUN_006ae110(local_10);
        }
        else {
          ResetActivityFromTmp(this,bVar2,0,1,0);
        }
      }
      else {
        if (iVar8 != 0x1ae) {
          iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3152,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__SelectObjects_GAM_007a898c);
          if (iVar7 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          goto cf_common_exit_0044BD53;
        }
        iVar8 = CheckTmps(uVar3,0,0x3c,bVar2,local_8,0);
        if (0 < iVar8) {
          ActivateTV(this,bVar2,0,iVar8);
          goto cf_common_exit_0044BD53;
        }
        PushTV(bVar2,0);
        ResetActivityFromTmp(this,bVar2,0,1,0);
      }
      goto cf_common_exit_0044BD3D;
    }
    iVar8 = CheckTmps(uVar3,0,0x3c,bVar2,local_8,0);
    if (iVar8 < 1) goto cf_common_exit_0044BD3D;
    ActivateTV(this,bVar2,0,iVar8);
  }
  else {
    if (*(int *)((int)&DAT_007f5023 + iVar7) != 1) {
      iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x317d,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__SelectObjects_GAM_007a8a0c);
      if (iVar7 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto cf_common_exit_0044BD53;
    }
    *(undefined4 *)((int)&DAT_007f5023 + iVar7) = 0;
    ResetActivityFromTmp(this,bVar2,1,0,0);
    iVar8 = *(int *)((int)&DAT_007f4f83 + iVar7);
    if (iVar8 == 0) {
      iVar8 = CheckTmps(uVar3,0,0x3c,bVar2,local_8,0);
      if (0 < iVar8) {
        ActivateTV(this,bVar2,0,iVar8);
        goto LAB_0044bd49;
      }
    }
    else if (iVar8 == 0x3c) {
      iVar8 = CheckTmps(uVar3,0,0x3c,bVar2,local_8,0);
      if (-1 < iVar8) {
        ActivateTV(this,bVar2,0,iVar8);
        goto cf_common_exit_0044BD53;
      }
      PushTV(bVar2,0);
    }
    else {
      if (iVar8 != 0x1ae) {
        iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3179,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__SelectObjects_GAM_007a89cc);
        if (iVar7 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        goto cf_common_exit_0044BD53;
      }
      iVar8 = CheckTmps(uVar3,0,0x3c,bVar2,local_8,0);
      if (0 < iVar8) {
        ActivateTV(this,bVar2,0,iVar8);
        goto cf_common_exit_0044BD53;
      }
      PushTV(bVar2,0);
    }
cf_common_exit_0044BD3D:
    AddObjsToTmp(this,uVar3,0,0,(int)local_8);
  }
LAB_0044bd49:
  *(undefined4 *)((int)&DAT_007f4f83 + iVar7) = 0x3c;
cf_common_exit_0044BD53:
  FUN_006ae110((byte *)local_8);
  SelfCheckObjControl(this);
  return;
}


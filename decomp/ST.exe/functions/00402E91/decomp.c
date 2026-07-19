
void __thiscall
STAllPlayersC::SelectObjects(STAllPlayersC *this,undefined4 param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  STGroupC *this_00;
  int *piVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  uint uVar8;
  char cVar9;
  uint uStack_14;
  byte *pbStack_10;
  byte *pbStack_c;
  uint *puStack_8;
  
  bVar2 = DAT_0080874d;
  uVar3 = (uint)DAT_0080874d;
  puStack_8 = (uint *)0x0;
  pbStack_10 = (byte *)0x0;
  pbStack_c = (byte *)0x0;
  puStack_8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  switch(param_1) {
  case 0:
    param_3 = 0;
    iVar6 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar7 = *(int *)(iVar6 + 0xc);
    if (0 < iVar7) {
      do {
        piVar5 = *(int **)(*(int *)(iVar6 + 0x1c) + param_3 * 4);
        if (((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
            (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))) {
          Library::DKW::TBL::FUN_006ae1c0(puStack_8,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar7);
    }
    break;
  case 1:
    GetGObjFromZone(this,bVar2,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,(int *)&puStack_8
                    ,(int *)0x0);
    param_3 = 0;
    param_2 = puStack_8[3];
    if (0 < (int)param_2) {
      do {
        piVar5 = (int *)GetObjPtr(this,uVar3,
                                  CONCAT22((short)((uint)puStack_8 >> 0x10),
                                           *(undefined2 *)(puStack_8[7] + param_3 * 2)),1);
        if ((((piVar5 == (int *)0x0) || (piVar5[8] != 0x14)) ||
            (iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 0)) ||
           (iVar6 = (**(code **)(*piVar5 + 0xec))(), iVar6 == 0)) {
          FUN_006b0c70((int)puStack_8,param_3);
          param_2 = param_2 - 1;
          param_3 = param_3 - 1;
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < (int)param_2);
    }
    break;
  case 2:
    param_3 = 0;
    iVar6 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar7 = *(int *)(iVar6 + 0xc);
    if (0 < iVar7) {
      do {
        piVar5 = *(int **)(*(int *)(iVar6 + 0x1c) + param_3 * 4);
        if (((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
           (((iVar4 = (**(code **)(*piVar5 + 0x2c))(),
             (*(uint *)(&DAT_00800f10 + (iVar4 + 0x41U >> 5) * 4) &
             1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 ||
             (iVar4 = (**(code **)(*piVar5 + 0x2c))(),
             ((&DAT_00800f00)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0)) &&
            ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(puStack_8,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar7);
    }
    break;
  case 3:
    param_3 = 0;
    iVar6 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar7 = *(int *)(iVar6 + 0xc);
    if (0 < iVar7) {
      do {
        piVar5 = *(int **)(*(int *)(iVar6 + 0x1c) + param_3 * 4);
        if (((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00801000)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 &&
            ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(puStack_8,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar7);
    }
    break;
  case 4:
    param_3 = 0;
    iVar6 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar7 = *(int *)(iVar6 + 0xc);
    if (0 < iVar7) {
      do {
        piVar5 = *(int **)(*(int *)(iVar6 + 0x1c) + param_3 * 4);
        if ((((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
            (iVar4 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00800fa0)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
            (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))) {
          Library::DKW::TBL::FUN_006ae1c0(puStack_8,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar7);
    }
    break;
  case 5:
    param_3 = 0;
    iVar6 = *(int *)((int)&DAT_007f4e29 + uVar3 * 0xa62);
    iVar7 = *(int *)(iVar6 + 0xc);
    if (0 < iVar7) {
      do {
        piVar5 = *(int **)(*(int *)(iVar6 + 0x1c) + param_3 * 4);
        if (((piVar5 != (int *)0x0) && (piVar5[8] == 0x14)) &&
           ((iVar4 = (**(code **)(*piVar5 + 0x2c))(),
            ((&DAT_00801010)[iVar4 + 0x41U >> 5] & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)) != 0 &&
            ((iVar4 = (**(code **)(*piVar5 + 0xf8))(), iVar4 == 1 &&
             (iVar4 = (**(code **)(*piVar5 + 0xec))(), iVar4 == 1)))))) {
          Library::DKW::TBL::FUN_006ae1c0(puStack_8,(undefined4 *)((int)piVar5 + 0x32));
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar7);
    }
    break;
  case 6:
    piVar5 = (int *)FUN_006eb350(DAT_00807598,param_2,param_3,0xe,1);
    if (((piVar5 != (int *)0x0) && (piVar5[9] == uVar3)) && (piVar5[8] == 0x14)) {
      FUN_006ae110((byte *)puStack_8);
      GetGObjFromZone(this,bVar2,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c,
                      (int *)&pbStack_c,(int *)0x0);
      cVar9 = -1;
      iVar7 = 0;
      iVar6 = (**(code **)(*piVar5 + 0x2c))();
      puStack_8 = GetTOBJListFromDArr(this,uVar3,(int)pbStack_c,iVar6,iVar7,cVar9);
      FUN_006ae110(pbStack_c);
      param_3 = 0;
      param_2 = puStack_8[3];
      if (0 < (int)param_2) {
        do {
          piVar5 = (int *)GetObjPtr(this,uVar3,
                                    CONCAT22((short)((uint)puStack_8 >> 0x10),
                                             *(undefined2 *)(puStack_8[7] + param_3 * 2)),1);
          if ((((piVar5 == (int *)0x0) || (piVar5[8] != 0x14)) ||
              (iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 == 0)) ||
             (iVar6 = (**(code **)(*piVar5 + 0xec))(), iVar6 == 0)) {
            FUN_006b0c70((int)puStack_8,param_3);
            param_2 = param_2 - 1;
            param_3 = param_3 - 1;
          }
          param_3 = param_3 + 1;
        } while ((int)param_3 < (int)param_2);
      }
    }
    break;
  case 7:
    iVar6 = FUN_006eb350(DAT_00807598,param_2,param_3,0xe,1);
    if ((((iVar6 != 0) && (*(uint *)(iVar6 + 0x24) == uVar3)) && (*(int *)(iVar6 + 0x20) == 0x14))
       && ((*(short *)(iVar6 + 0x30) != -1 &&
           (this_00 = (STGroupC *)
                      thunk_FUN_0042b760(uVar3,CONCAT22((short)((uint)iVar6 >> 0x10),
                                                        *(short *)(iVar6 + 0x30))),
           this_00 != (STGroupC *)0x0)))) {
      FUN_006ae110((byte *)puStack_8);
      puStack_8 = STGroupC::GetGroupContent(this_00,unaff_EDI);
      param_2 = puStack_8[3];
      uVar8 = 0;
      if (0 < (int)param_2) {
        do {
          FUN_006acc70((int)puStack_8,uVar8,&uStack_14);
          piVar5 = (int *)GetObjPtr(this,uVar3,uStack_14,1);
          iVar6 = (**(code **)(*piVar5 + 0xec))();
          if (iVar6 == 0) {
            FUN_006b0c70((int)puStack_8,uVar8);
            param_2 = param_2 - 1;
            uVar8 = uVar8 - 1;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)param_2);
      }
    }
    break;
  default:
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3123,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__SelectObjects_inv_007a8a58);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (puStack_8[3] == 0) {
    FUN_006ae110((byte *)puStack_8);
    return;
  }
  iVar6 = uVar3 * 0xa62;
  if (*(int *)((int)&DAT_007f5023 + iVar6) == 0) {
    iVar7 = *(int *)((int)&DAT_007f4f83 + iVar6);
    if (iVar7 != 0) {
      if (iVar7 == 0x3c) {
        iVar7 = CheckTmps(uVar3,0,0x3c,bVar2,puStack_8,0);
        if (0 < iVar7) {
          ActivateTV(this,bVar2,0,iVar7);
          goto LAB_0044bd53;
        }
        if (-1 < iVar7) goto LAB_0044bd53;
        PushTV(bVar2,0);
        if (*(uint *)((int)&DAT_007f4f97 + iVar6) == uVar3) {
          CalibrateTmp(this,bVar2,0,1,puStack_8,(int *)&pbStack_10,(int *)0x0,(int *)0x0);
          ResetActivityFromObjs(this,uVar3,0x3c,(int)pbStack_10,0,0);
          FUN_006ae110(pbStack_10);
        }
        else {
          ResetActivityFromTmp(this,bVar2,0,1,0);
        }
      }
      else {
        if (iVar7 != 0x1ae) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3152,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__SelectObjects_GAM_007a898c);
          if (iVar6 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          goto LAB_0044bd53;
        }
        iVar7 = CheckTmps(uVar3,0,0x3c,bVar2,puStack_8,0);
        if (0 < iVar7) {
          ActivateTV(this,bVar2,0,iVar7);
          goto LAB_0044bd53;
        }
        PushTV(bVar2,0);
        ResetActivityFromTmp(this,bVar2,0,1,0);
      }
      goto LAB_0044bd3d;
    }
    iVar7 = CheckTmps(uVar3,0,0x3c,bVar2,puStack_8,0);
    if (iVar7 < 1) goto LAB_0044bd3d;
    ActivateTV(this,bVar2,0,iVar7);
  }
  else {
    if (*(int *)((int)&DAT_007f5023 + iVar6) != 1) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x317d,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__SelectObjects_GAM_007a8a0c);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_0044bd53;
    }
    *(undefined4 *)((int)&DAT_007f5023 + iVar6) = 0;
    ResetActivityFromTmp(this,bVar2,1,0,0);
    iVar7 = *(int *)((int)&DAT_007f4f83 + iVar6);
    if (iVar7 == 0) {
      iVar7 = CheckTmps(uVar3,0,0x3c,bVar2,puStack_8,0);
      if (0 < iVar7) {
        ActivateTV(this,bVar2,0,iVar7);
        goto LAB_0044bd49;
      }
    }
    else if (iVar7 == 0x3c) {
      iVar7 = CheckTmps(uVar3,0,0x3c,bVar2,puStack_8,0);
      if (-1 < iVar7) {
        ActivateTV(this,bVar2,0,iVar7);
        goto LAB_0044bd53;
      }
      PushTV(bVar2,0);
    }
    else {
      if (iVar7 != 0x1ae) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3179,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__SelectObjects_GAM_007a89cc);
        if (iVar6 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        goto LAB_0044bd53;
      }
      iVar7 = CheckTmps(uVar3,0,0x3c,bVar2,puStack_8,0);
      if (0 < iVar7) {
        ActivateTV(this,bVar2,0,iVar7);
        goto LAB_0044bd53;
      }
      PushTV(bVar2,0);
    }
LAB_0044bd3d:
    AddObjsToTmp(this,uVar3,0,0,(int)puStack_8);
  }
LAB_0044bd49:
  *(undefined4 *)((int)&DAT_007f4f83 + iVar6) = 0x3c;
LAB_0044bd53:
  FUN_006ae110((byte *)puStack_8);
  SelfCheckObjControl(this);
  return;
}


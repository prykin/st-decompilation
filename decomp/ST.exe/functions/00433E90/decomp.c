
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PointPick */

void __thiscall
STAllPlayersC::PointPick(STAllPlayersC *this,uint *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  uint uVar7;
  uint uVar8;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 extraout_ECX;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined4 extraout_ECX_01;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 uVar9;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined4 extraout_EDX;
  undefined2 extraout_var_13;
  undefined4 extraout_EDX_00;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  char cVar10;
  char cVar11;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  piVar2 = (int *)FUN_006eb350(DAT_00807598,param_2,param_3,0xe,1);
  cVar11 = (char)param_1;
  if (piVar2 == (int *)0x0) {
    RemoveActiveTV(cVar11);
    return;
  }
  iVar3 = (**(code **)(*piVar2 + 0xec))();
  if (iVar3 != 1) {
    return;
  }
  uVar7 = piVar2[8];
  if (0x1a4 < uVar7) {
    if (uVar7 < 0x1b9) {
      if (uVar7 == 0x1b8) goto LAB_004345cf;
      if (uVar7 != 0x1ae) {
        return;
      }
      if (param_4 == 1) {
        return;
      }
      iVar3 = cVar11 * 0xa62;
      if (*(int *)((int)&DAT_007f5023 + iVar3) == 0) {
        iVar3 = *(int *)((int)&DAT_007f4f83 + iVar3);
        if (iVar3 != 0) {
          if (iVar3 == 0x3c) {
            iVar3 = CheckTmps(param_1,0,0x1ae,(char)piVar2[9],(uint *)0x0,
                              (uint)*(ushort *)((int)piVar2 + 0x32));
            if (0 < iVar3) {
              ActivateTV(this,cVar11,0,iVar3);
              SelfCheckObjControl(this);
              return;
            }
            PushTV(cVar11,0);
            uVar6 = ResetActivityFromTmp(this,cVar11,0,1,0);
            uVar7 = CONCAT22(extraout_var_13,*(undefined2 *)((int)piVar2 + 0x32));
            uVar8 = CONCAT31((int3)((uint)uVar6 >> 8),(char)piVar2[9]);
            iVar3 = piVar2[8];
            goto cf_common_exit_0043440E;
          }
          if (iVar3 != 0x1ae) {
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1003,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a715c);
            if (iVar3 == 0) {
              return;
            }
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = CheckTmps(param_1,0,0x1ae,(char)piVar2[9],(uint *)0x0,
                            (uint)*(ushort *)((int)piVar2 + 0x32));
          if (0 < iVar3) {
            ActivateTV(this,cVar11,0,iVar3);
            SelfCheckObjControl(this);
            return;
          }
          if (iVar3 < 0) {
            PushTV(cVar11,0);
            ResetActivityFromTmp(this,cVar11,0,1,0);
            uVar7 = CONCAT22(extraout_var,*(undefined2 *)((int)piVar2 + 0x32));
            uVar8 = CONCAT31((int3)((uint)extraout_ECX >> 8),(char)piVar2[9]);
            iVar3 = piVar2[8];
            goto cf_common_exit_0043440E;
          }
          goto cf_common_exit_00434CBD;
        }
        uVar6 = CONCAT22((short)((uint)(cVar11 * 0x29) >> 0x10),*(undefined2 *)((int)piVar2 + 0x32))
        ;
        cVar10 = (char)piVar2[9];
        iVar3 = 0x1ae;
LAB_004345a2:
        iVar3 = CheckTmps(param_1,0,iVar3,cVar10,(uint *)0x0,uVar6);
        uVar6 = extraout_EDX_00;
        uVar9 = extraout_var_02;
        if (0 < iVar3) {
LAB_004345b4:
          ActivateTV(this,cVar11,0,iVar3);
          SelfCheckObjControl(this);
          return;
        }
      }
      else {
        if (*(int *)((int)&DAT_007f5023 + iVar3) != 1) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x102e,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a71dc);
          if (iVar3 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(undefined4 *)((int)&DAT_007f5023 + iVar3) = 0;
        ResetActivityFromTmp(this,cVar11,1,0,0);
        iVar5 = *(int *)((int)&DAT_007f4f83 + iVar3);
        uVar9 = (undefined2)((uint)iVar3 >> 0x10);
        if (iVar5 == 0) {
          uVar6 = CONCAT22(uVar9,*(undefined2 *)((int)piVar2 + 0x32));
          cVar10 = (char)piVar2[9];
          iVar3 = piVar2[8];
          goto LAB_004345a2;
        }
        if (iVar5 == 0x3c) {
          iVar3 = CheckTmps(param_1,0,piVar2[8],(char)piVar2[9],(uint *)0x0,
                            CONCAT22(uVar9,*(undefined2 *)((int)piVar2 + 0x32)));
          if (0 < iVar3) {
            ActivateTV(this,cVar11,0,iVar3);
            SelfCheckObjControl(this);
            return;
          }
        }
        else {
          if (iVar5 != 0x1ae) {
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x102a,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a719c);
            if (iVar3 == 0) {
              return;
            }
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = CheckTmps(param_1,0,0x1ae,(char)piVar2[9],(uint *)0x0,
                            CONCAT22(extraout_var_12,*(undefined2 *)((int)piVar2 + 0x32)));
          if (-1 < iVar3) goto LAB_004345b4;
        }
        PushTV(cVar11,0);
        uVar6 = extraout_EDX;
        uVar9 = extraout_var_01;
      }
      uVar7 = CONCAT22(uVar9,*(undefined2 *)((int)piVar2 + 0x32));
      uVar8 = CONCAT31((int3)((uint)uVar6 >> 8),(char)piVar2[9]);
      iVar3 = piVar2[8];
cf_common_exit_0043440E:
      AddObjToTmp2(this,cVar11,0,0,iVar3,uVar8,uVar7);
      SelfCheckObjControl(this);
      return;
    }
    if (uVar7 < 1000) {
      return;
    }
    if (0x3e9 < uVar7) {
      return;
    }
    if (param_4 == 1) {
      return;
    }
    iVar3 = cVar11 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iVar3) == 0) {
      *(undefined4 *)((int)&DAT_007f5023 + iVar3) = 1;
      ResetActivityFromTmp(this,cVar11,0,0,0);
      iVar5 = *(int *)((int)&DAT_007f4fd3 + iVar3);
      if (iVar5 < 0x19b) {
        if (iVar5 == 0x19a) {
          puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
          Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
          iVar5 = CheckTmps(param_1,1,0x19a,(char)piVar2[9],puVar4,0);
          param_1 = puVar4;
          if (-1 < iVar5) {
            ActivateTV(this,cVar11,1,iVar5);
            goto cf_common_exit_00434CB8;
          }
          goto LAB_00434c88;
        }
        if (iVar5 != 0) {
          if ((iVar5 != 0x5a) && (iVar5 != 0x172)) goto LAB_00434c12;
          goto LAB_00434c44;
        }
LAB_004349ac:
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
        iVar5 = CheckTmps(param_1,1,0x19a,(char)piVar2[9],puVar4,0);
        uVar6 = extraout_ECX_00;
        param_1 = puVar4;
        if (iVar5 < 1) goto LAB_00434c92;
        ActivateTV(this,cVar11,1,iVar5);
      }
      else {
        if ((iVar5 != 0x1a4) && (iVar5 != 0x1b8)) {
LAB_00434c12:
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xfd1,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a7018);
          if (iVar3 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
LAB_00434c44:
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
        iVar5 = CheckTmps(param_1,1,0x19a,(char)piVar2[9],puVar4,0);
        param_1 = puVar4;
        if (0 < iVar5) {
          ActivateTV(this,cVar11,1,iVar5);
          goto cf_common_exit_00434CB8;
        }
LAB_00434c88:
        iVar5 = PushTV(cVar11,1);
        uVar6 = extraout_ECX_01;
LAB_00434c92:
        AddObjToTmp(this,cVar11,1,0,CONCAT31((int3)((uint)uVar6 >> 8),(char)piVar2[9]),
                    CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)((int)piVar2 + 0x32)));
      }
      *(undefined4 *)((int)&DAT_007f4fd3 + iVar3) = 0x19a;
      puVar4 = param_1;
    }
    else {
      if (*(int *)((int)&DAT_007f5023 + iVar3) != 1) {
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xfd5,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__PointPick_GAMETYP_007a7094);
        if (iVar3 == 0) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = *(int *)((int)&DAT_007f4fd3 + iVar3);
      if (iVar5 < 0x19b) {
        if (iVar5 != 0x19a) {
          if (iVar5 == 0) goto LAB_004349ac;
          if ((iVar5 != 0x5a) && (iVar5 != 0x172)) goto LAB_00434ab0;
          goto LAB_00434ae2;
        }
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
        iVar5 = CheckTmps(param_1,1,0x19a,(char)piVar2[9],puVar4,0);
        if (0 < iVar5) {
          ActivateTV(this,cVar11,1,iVar5);
          goto cf_common_exit_00434CB8;
        }
        if (-1 < iVar5) goto cf_common_exit_00434CB8;
        PushTV(cVar11,1);
        param_1 = puVar4;
        if (*(int *)((int)&DAT_007f4fe7 + iVar3) != piVar2[9]) goto LAB_00434b39;
        CalibrateTmp(this,cVar11,1,1,puVar4,(int *)&local_8,(int *)0x0,(int *)0x0);
        ResetActivityFromObjs
                  (this,CONCAT31((int3)((uint)extraout_EDX_03 >> 8),(char)piVar2[9]),0x19a,
                   (int)local_8,0,0);
        FUN_006ae110(local_8);
        uVar6 = extraout_EDX_04;
        uVar9 = extraout_var_06;
      }
      else {
        if ((iVar5 != 0x1a4) && (iVar5 != 0x1b8)) {
LAB_00434ab0:
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xf9a,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a7054);
          if (iVar3 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
LAB_00434ae2:
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
        iVar5 = CheckTmps(param_1,1,0x19a,(char)piVar2[9],puVar4,0);
        if (0 < iVar5) {
          ActivateTV(this,cVar11,1,iVar5);
          goto cf_common_exit_00434CB8;
        }
        PushTV(cVar11,1);
        param_1 = puVar4;
LAB_00434b39:
        ResetActivityFromTmp(this,cVar11,1,1,0);
        uVar6 = extraout_EDX_05;
        uVar9 = extraout_var_07;
      }
      AddObjToTmp(this,cVar11,1,0,CONCAT31((int3)((uint)uVar6 >> 8),(char)piVar2[9]),
                  CONCAT22(uVar9,*(undefined2 *)((int)piVar2 + 0x32)));
      *(undefined4 *)((int)&DAT_007f4fd3 + iVar3) = 0x19a;
      puVar4 = param_1;
    }
cf_common_exit_00434CB8:
    FUN_006ae110((byte *)puVar4);
    goto cf_common_exit_00434CBD;
  }
  if (uVar7 != 0x1a4) {
    if (uVar7 == 0x14) {
      if ((param_4 == 1) && (cVar11 != (char)piVar2[9])) {
        return;
      }
      iVar3 = cVar11 * 0xa62;
      if (*(int *)((int)&DAT_007f5023 + iVar3) == 0) {
        iVar5 = *(int *)((int)&DAT_007f4f83 + iVar3);
        if (iVar5 != 0) {
          if (iVar5 == 0x3c) {
            if (param_4 == 1) {
              if (*(int *)((int)&DAT_007f4f87 + iVar3) != (int)(char)piVar2[9]) {
                return;
              }
              iVar3 = PushTV(param_1,0,0,cVar11,*(short *)((int)piVar2 + 0x32));
              if (iVar3 == 1) {
                thunk_FUN_0042c300(param_1,0,0,(uint)param_1,(uint)*(ushort *)((int)piVar2 + 0x32));
                SelfCheckObjControl(this);
                return;
              }
              AddObjToTmp(this,cVar11,0,0,(uint)param_1,
                          CONCAT22(extraout_var_00,*(undefined2 *)((int)piVar2 + 0x32)));
              SelfCheckObjControl(this);
              return;
            }
            puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
            Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
            iVar5 = CheckTmps(param_1,0,0x3c,(char)piVar2[9],puVar4,0);
            if (iVar5 < 1) {
              if (iVar5 < 0) {
                PushTV(cVar11,0);
                param_1 = puVar4;
                if (*(int *)((int)&DAT_007f4f97 + iVar3) != piVar2[9]) goto LAB_0043414f;
                uVar6 = CalibrateTmp(this,cVar11,0,1,puVar4,(int *)&local_8,(int *)0x0,(int *)0x0);
                ResetActivityFromObjs
                          (this,CONCAT31((int3)((uint)uVar6 >> 8),(char)piVar2[9]),0x3c,(int)local_8
                           ,0,0);
                iVar5 = FUN_006ae110(local_8);
                uVar9 = extraout_var_10;
                goto LAB_0043415b;
              }
            }
            else {
              ActivateTV(this,cVar11,0,iVar5);
            }
          }
          else {
            if (iVar5 != 0x1ae) {
              iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xf1e,0,0,
                                         &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a7228);
              if (iVar3 == 0) {
                return;
              }
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (param_4 == 1) {
              return;
            }
            puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
            Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
            iVar5 = CheckTmps(param_1,0,0x3c,(char)piVar2[9],puVar4,0);
            if (iVar5 < 1) {
              PushTV(cVar11,0);
              param_1 = puVar4;
LAB_0043414f:
              iVar5 = ResetActivityFromTmp(this,cVar11,0,1,0);
              uVar9 = extraout_var_09;
              goto LAB_0043415b;
            }
            ActivateTV(this,cVar11,0,iVar5);
          }
          goto cf_common_exit_00434CB8;
        }
LAB_0043429d:
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
        iVar5 = CheckTmps(param_1,0,0x3c,(char)piVar2[9],puVar4,0);
        uVar9 = extraout_var_11;
        param_1 = puVar4;
        if (iVar5 < 1) goto LAB_0043415b;
        ActivateTV(this,cVar11,0,iVar5);
      }
      else {
        if (*(int *)((int)&DAT_007f5023 + iVar3) != 1) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xf56,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a72a0);
          if (iVar3 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_4 == 1) {
          return;
        }
        *(undefined4 *)((int)&DAT_007f5023 + iVar3) = 0;
        ResetActivityFromTmp(this,cVar11,1,0,0);
        iVar5 = *(int *)((int)&DAT_007f4f83 + iVar3);
        if (iVar5 == 0) goto LAB_0043429d;
        if (iVar5 == 0x3c) {
          puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
          Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
          iVar5 = CheckTmps(param_1,0,0x3c,(char)piVar2[9],puVar4,0);
          param_1 = puVar4;
          if (iVar5 < 0) goto LAB_0043404a;
          ActivateTV(this,cVar11,0,iVar5);
          goto cf_common_exit_00434CB8;
        }
        if (iVar5 != 0x1ae) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xf52,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a7264);
          if (iVar3 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar4,(undefined4 *)((int)piVar2 + 0x32));
        iVar5 = CheckTmps(param_1,0,0x3c,(char)piVar2[9],puVar4,0);
        param_1 = puVar4;
        if (0 < iVar5) {
          ActivateTV(this,cVar11,0,iVar5);
          goto cf_common_exit_00434CB8;
        }
LAB_0043404a:
        iVar5 = PushTV(cVar11,0);
        uVar9 = extraout_var_08;
LAB_0043415b:
        AddObjToTmp(this,cVar11,0,0,CONCAT31((int3)((uint)iVar5 >> 8),(char)piVar2[9]),
                    CONCAT22(uVar9,*(undefined2 *)((int)piVar2 + 0x32)));
      }
      *(undefined4 *)((int)&DAT_007f4f83 + iVar3) = 0x3c;
      puVar4 = param_1;
      goto cf_common_exit_00434CB8;
    }
    if ((uVar7 != 0x5a) && (uVar7 != 0x172)) {
      return;
    }
  }
LAB_004345cf:
  if (param_4 == 1) {
    return;
  }
  iVar3 = cVar11 * 0xa62;
  if (*(int *)((int)&DAT_007f5023 + iVar3) != 0) {
    if (*(int *)((int)&DAT_007f5023 + iVar3) != 1) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1090,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__PointPick_GAMETYP_007a71dc);
      if (iVar3 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar3);
    if (iVar3 < 0x19b) {
      if (iVar3 != 0x19a) {
        if (iVar3 == 0) {
          iVar3 = CheckTmps(param_1,1,uVar7,(char)piVar2[9],(uint *)0x0,
                            (uint)*(ushort *)((int)piVar2 + 0x32));
          uVar9 = extraout_var_14;
          if (0 < iVar3) {
            ActivateTV(this,cVar11,1,iVar3);
            SelfCheckObjControl(this);
            return;
          }
          goto LAB_00434768;
        }
        if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_004346e3;
        goto LAB_00434715;
      }
      iVar3 = CheckTmps(param_1,1,uVar7,(char)piVar2[9],(uint *)0x0,
                        (uint)*(ushort *)((int)piVar2 + 0x32));
      if (0 < iVar3) {
        ActivateTV(this,cVar11,1,iVar3);
        SelfCheckObjControl(this);
        return;
      }
    }
    else {
      if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_004346e3:
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1062,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__PointPick_GAMETYP_007a711c);
        if (iVar3 == 0) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
LAB_00434715:
      iVar3 = CheckTmps(param_1,1,uVar7,(char)piVar2[9],(uint *)0x0,
                        (uint)*(ushort *)((int)piVar2 + 0x32));
      if (0 < iVar3) {
        ActivateTV(this,cVar11,1,iVar3);
        SelfCheckObjControl(this);
        return;
      }
      if (-1 < iVar3) {
cf_common_exit_00434CBD:
        SelfCheckObjControl(this);
        return;
      }
    }
    PushTV(cVar11,1);
    iVar3 = ResetActivityFromTmp(this,cVar11,1,1,0);
    uVar9 = extraout_var_15;
LAB_00434768:
    AddObjToTmp2(this,cVar11,1,0,piVar2[8],CONCAT31((int3)((uint)iVar3 >> 8),(char)piVar2[9]),
                 CONCAT22(uVar9,*(undefined2 *)((int)piVar2 + 0x32)));
    SelfCheckObjControl(this);
    return;
  }
  *(undefined4 *)((int)&DAT_007f5023 + iVar3) = 1;
  ResetActivityFromTmp(this,cVar11,0,0,0);
  iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar3);
  if (iVar3 < 0x19b) {
    if (iVar3 != 0x19a) {
      if (iVar3 == 0) {
        iVar3 = CheckTmps(param_1,1,piVar2[8],(char)piVar2[9],(uint *)0x0,
                          CONCAT22(extraout_var_03,*(undefined2 *)((int)piVar2 + 0x32)));
        uVar6 = extraout_EDX_01;
        uVar9 = extraout_var_04;
        if (0 < iVar3) {
          ActivateTV(this,cVar11,1,iVar3);
          SelfCheckObjControl(this);
          return;
        }
        goto LAB_004348d7;
      }
      if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_00434863;
      goto LAB_00434895;
    }
    iVar3 = CheckTmps(param_1,1,piVar2[8],(char)piVar2[9],(uint *)0x0,
                      CONCAT22(extraout_var_03,*(undefined2 *)((int)piVar2 + 0x32)));
    if (0 < iVar3) {
      ActivateTV(this,cVar11,1,iVar3);
      SelfCheckObjControl(this);
      return;
    }
  }
  else {
    if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00434863:
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x108c,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__PointPick_GAMETYP_007a70dc);
      if (iVar3 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_00434895:
    iVar3 = CheckTmps(param_1,1,piVar2[8],(char)piVar2[9],(uint *)0x0,
                      CONCAT22(extraout_var_03,*(undefined2 *)((int)piVar2 + 0x32)));
    if (-1 < iVar3) {
      ActivateTV(this,cVar11,1,iVar3);
      SelfCheckObjControl(this);
      return;
    }
  }
  PushTV(cVar11,1);
  uVar6 = extraout_EDX_02;
  uVar9 = extraout_var_05;
LAB_004348d7:
  AddObjToTmp2(this,cVar11,1,0,piVar2[8],CONCAT31((int3)((uint)uVar6 >> 8),(char)piVar2[9]),
               CONCAT22(uVar9,*(undefined2 *)((int)piVar2 + 0x32)));
  SelfCheckObjControl(this);
  return;
}


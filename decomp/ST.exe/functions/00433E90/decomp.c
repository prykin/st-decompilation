
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PointPick
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00433E90 -> 0044AB90 @ 0043402D | 00433E90 -> 0044AB90 @ 00434084 | 00433E90 ->
   0044AB90 @ 00434126 | 00433E90 -> 0044AB90 @ 00434221 | 00433E90 -> 0044AB90 @ 004342C8 |
   00433E90 -> 0044AB90 @ 004349DA | 00433E90 -> 0044AB90 @ 00434A25 | 00433E90 -> 0044AB90 @
   00434B10 | 00433E90 -> 0044AB90 @ 00434BE9 | 00433E90 -> 0044AB90 @ 00434C72 | 005449B0 ->
   00433E90 @ 005473F1 */

void __thiscall
STAllPlayersC::PointPick(STAllPlayersC *this,uint *objectIds,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_EAX;
  undefined2 extraout_var;
  uint uVar5;
  uint uVar6;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 extraout_ECX;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined4 extraout_ECX_01;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 uVar7;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined4 extraout_EDX;
  undefined2 extraout_var_11;
  undefined4 extraout_EDX_00;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  char ownerPlayerId;
  char playerId;
  short objectId;
  DArrayTy *local_8;
  
  local_8 = (DArrayTy *)0x0;
  piVar2 = (int *)FUN_006eb350(PTR_00807598,param_2,param_3,0xe,1);
  playerId = (char)objectIds;
  if (piVar2 == (int *)0x0) {
    RemoveActiveTV(playerId);
    return;
  }
  iVar3 = (**(code **)(*piVar2 + 0xec))();
  if (iVar3 != 1) {
    return;
  }
  uVar5 = piVar2[8];
  if (0x1a4 < uVar5) {
    if (uVar5 < 0x1b9) {
      if (uVar5 == 0x1b8) goto LAB_004345cf;
      if (uVar5 != 0x1ae) {
        return;
      }
      if (param_4 == 1) {
        return;
      }
      if (g_playerRuntime[playerId].field324_0x203 == 0) {
        iVar3 = g_playerRuntime[playerId].tempSlots[0][0].objectType;
        if (iVar3 != 0) {
          if (iVar3 == 0x3c) {
            iVar3 = CheckTmps(playerId,0,0x1ae,(char)piVar2[9],(DArrayTy *)0x0,
                              *(short *)((int)piVar2 + 0x32));
            if (0 < iVar3) {
              ActivateTV(this,playerId,0,iVar3);
              SelfCheckObjControl(this);
              return;
            }
            PushTV(playerId,0);
            uVar4 = ResetActivityFromTmp(this,playerId,0,1,0);
            uVar5 = CONCAT22(extraout_var_11,*(undefined2 *)((int)piVar2 + 0x32));
            uVar6 = CONCAT31((int3)((uint)uVar4 >> 8),(char)piVar2[9]);
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
          iVar3 = CheckTmps(playerId,0,0x1ae,(char)piVar2[9],(DArrayTy *)0x0,
                            *(short *)((int)piVar2 + 0x32));
          if (0 < iVar3) {
            ActivateTV(this,playerId,0,iVar3);
            SelfCheckObjControl(this);
            return;
          }
          if (iVar3 < 0) {
            PushTV(playerId,0);
            ResetActivityFromTmp(this,playerId,0,1,0);
            uVar5 = CONCAT22(extraout_var,*(undefined2 *)((int)piVar2 + 0x32));
            uVar6 = CONCAT31((int3)((uint)extraout_ECX >> 8),(char)piVar2[9]);
            iVar3 = piVar2[8];
            goto cf_common_exit_0043440E;
          }
          goto cf_common_exit_00434CBD;
        }
        objectId = *(short *)((int)piVar2 + 0x32);
        ownerPlayerId = (char)piVar2[9];
        iVar3 = 0x1ae;
LAB_004345a2:
        iVar3 = CheckTmps(playerId,0,iVar3,ownerPlayerId,(DArrayTy *)0x0,objectId);
        uVar4 = extraout_EDX_00;
        uVar7 = extraout_var_02;
        if (0 < iVar3) {
LAB_004345b4:
          ActivateTV(this,playerId,0,iVar3);
          SelfCheckObjControl(this);
          return;
        }
      }
      else {
        if (g_playerRuntime[playerId].field324_0x203 != 1) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x102e,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a71dc);
          if (iVar3 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        g_playerRuntime[playerId].field324_0x203 = 0;
        ResetActivityFromTmp(this,playerId,1,0,0);
        iVar3 = g_playerRuntime[playerId].tempSlots[0][0].objectType;
        if (iVar3 == 0) {
          objectId = *(short *)((int)piVar2 + 0x32);
          ownerPlayerId = (char)piVar2[9];
          iVar3 = piVar2[8];
          goto LAB_004345a2;
        }
        if (iVar3 == 0x3c) {
          iVar3 = CheckTmps(playerId,0,piVar2[8],(char)piVar2[9],(DArrayTy *)0x0,
                            *(short *)((int)piVar2 + 0x32));
          if (0 < iVar3) {
            ActivateTV(this,playerId,0,iVar3);
            SelfCheckObjControl(this);
            return;
          }
        }
        else {
          if (iVar3 != 0x1ae) {
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x102a,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a719c);
            if (iVar3 == 0) {
              return;
            }
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = CheckTmps(playerId,0,0x1ae,(char)piVar2[9],(DArrayTy *)0x0,
                            *(short *)((int)piVar2 + 0x32));
          if (-1 < iVar3) goto LAB_004345b4;
        }
        PushTV(playerId,0);
        uVar4 = extraout_EDX;
        uVar7 = extraout_var_01;
      }
      uVar5 = CONCAT22(uVar7,*(undefined2 *)((int)piVar2 + 0x32));
      uVar6 = CONCAT31((int3)((uint)uVar4 >> 8),(char)piVar2[9]);
      iVar3 = piVar2[8];
cf_common_exit_0043440E:
      AddObjToTmp2(this,playerId,0,0,iVar3,uVar6,uVar5);
      SelfCheckObjControl(this);
      return;
    }
    if (uVar5 < 1000) {
      return;
    }
    if (0x3e9 < uVar5) {
      return;
    }
    if (param_4 == 1) {
      return;
    }
    if (g_playerRuntime[playerId].field324_0x203 == 0) {
      g_playerRuntime[playerId].field324_0x203 = 1;
      ResetActivityFromTmp(this,playerId,0,0,0);
      iVar3 = g_playerRuntime[playerId].tempSlots[1][0].objectType;
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
          objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
          Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
          iVar3 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
          if (-1 < iVar3) {
            ActivateTV(this,playerId,1,iVar3);
            goto cf_common_exit_00434CB8;
          }
          goto LAB_00434c88;
        }
        if (iVar3 != 0) {
          if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_00434c12;
          goto LAB_00434c44;
        }
LAB_004349ac:
        objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
        iVar3 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
        uVar4 = extraout_ECX_00;
        if (iVar3 < 1) goto LAB_00434c92;
        ActivateTV(this,playerId,1,iVar3);
      }
      else {
        if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
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
        objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
        iVar3 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
        if (0 < iVar3) {
          ActivateTV(this,playerId,1,iVar3);
          goto cf_common_exit_00434CB8;
        }
LAB_00434c88:
        iVar3 = PushTV(playerId,1);
        uVar4 = extraout_ECX_01;
LAB_00434c92:
        AddObjToTmp(this,playerId,1,0,CONCAT31((int3)((uint)uVar4 >> 8),(char)piVar2[9]),
                    CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)((int)piVar2 + 0x32)));
      }
      g_playerRuntime[playerId].tempSlots[1][0].objectType = 0x19a;
    }
    else {
      if (g_playerRuntime[playerId].field324_0x203 != 1) {
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xfd5,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__PointPick_GAMETYP_007a7094);
        if (iVar3 == 0) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = g_playerRuntime[playerId].tempSlots[1][0].objectType;
      if (iVar3 < 0x19b) {
        if (iVar3 != 0x19a) {
          if (iVar3 == 0) goto LAB_004349ac;
          if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_00434ab0;
          goto LAB_00434ae2;
        }
        objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
        iVar3 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
        if (0 < iVar3) {
          ActivateTV(this,playerId,1,iVar3);
          goto cf_common_exit_00434CB8;
        }
        if (-1 < iVar3) goto cf_common_exit_00434CB8;
        PushTV(playerId,1);
        if (g_playerRuntime[playerId].tempSlots[1][1].playerId != piVar2[9]) goto LAB_00434b39;
        CalibrateTmp(this,playerId,1,1,objectIds,(int *)&local_8,(int *)0x0,(int *)0x0);
        ResetActivityFromObjs
                  (this,CONCAT31((int3)((uint)extraout_EDX_03 >> 8),(char)piVar2[9]),0x19a,local_8,0
                   ,0);
        DArrayDestroy(local_8);
        uVar4 = extraout_EDX_04;
        uVar7 = extraout_var_05;
      }
      else {
        if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
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
        objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
        iVar3 = CheckTmps(playerId,1,0x19a,(char)piVar2[9],(DArrayTy *)objectIds,0);
        if (0 < iVar3) {
          ActivateTV(this,playerId,1,iVar3);
          goto cf_common_exit_00434CB8;
        }
        PushTV(playerId,1);
LAB_00434b39:
        ResetActivityFromTmp(this,playerId,1,1,0);
        uVar4 = extraout_EDX_05;
        uVar7 = extraout_var_06;
      }
      AddObjToTmp(this,playerId,1,0,CONCAT31((int3)((uint)uVar4 >> 8),(char)piVar2[9]),
                  CONCAT22(uVar7,*(undefined2 *)((int)piVar2 + 0x32)));
      g_playerRuntime[playerId].tempSlots[1][0].objectType = 0x19a;
    }
cf_common_exit_00434CB8:
    DArrayDestroy((DArrayTy *)objectIds);
    goto cf_common_exit_00434CBD;
  }
  if (uVar5 != 0x1a4) {
    if (uVar5 == 0x14) {
      if ((param_4 == 1) && (playerId != (char)piVar2[9])) {
        return;
      }
      if (g_playerRuntime[playerId].field324_0x203 == 0) {
        iVar3 = g_playerRuntime[playerId].tempSlots[0][0].objectType;
        if (iVar3 != 0) {
          if (iVar3 == 0x3c) {
            if (param_4 == 1) {
              if (g_playerRuntime[playerId].tempSlots[0][0].playerId != (int)(char)piVar2[9]) {
                return;
              }
              iVar3 = PushTV(objectIds,0,0,playerId,*(short *)((int)piVar2 + 0x32));
              if (iVar3 == 1) {
                thunk_FUN_0042c300((uint)objectIds,0,0,(uint)objectIds,
                                   (uint)*(ushort *)((int)piVar2 + 0x32));
                SelfCheckObjControl(this);
                return;
              }
              AddObjToTmp(this,playerId,0,0,(uint)objectIds,
                          CONCAT22(extraout_var_00,*(undefined2 *)((int)piVar2 + 0x32)));
              SelfCheckObjControl(this);
              return;
            }
            objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
            Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
            iVar3 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
            if (iVar3 < 1) {
              if (iVar3 < 0) {
                PushTV(playerId,0);
                if (g_playerRuntime[playerId].tempSlots[0][1].playerId != piVar2[9])
                goto LAB_0043414f;
                uVar4 = CalibrateTmp(this,playerId,0,1,objectIds,(int *)&local_8,(int *)0x0,
                                     (int *)0x0);
                ResetActivityFromObjs
                          (this,CONCAT31((int3)((uint)uVar4 >> 8),(char)piVar2[9]),0x3c,local_8,0,0)
                ;
                DArrayDestroy(local_8);
                iVar3 = extraout_EAX;
                uVar7 = extraout_var_09;
                goto LAB_0043415b;
              }
            }
            else {
              ActivateTV(this,playerId,0,iVar3);
            }
          }
          else {
            if (iVar3 != 0x1ae) {
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
            objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
            Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
            iVar3 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
            if (iVar3 < 1) {
              PushTV(playerId,0);
LAB_0043414f:
              iVar3 = ResetActivityFromTmp(this,playerId,0,1,0);
              uVar7 = extraout_var_08;
              goto LAB_0043415b;
            }
            ActivateTV(this,playerId,0,iVar3);
          }
          goto cf_common_exit_00434CB8;
        }
LAB_0043429d:
        objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
        iVar3 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
        uVar7 = extraout_var_10;
        if (iVar3 < 1) goto LAB_0043415b;
        ActivateTV(this,playerId,0,iVar3);
      }
      else {
        if (g_playerRuntime[playerId].field324_0x203 != 1) {
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
        g_playerRuntime[playerId].field324_0x203 = 0;
        ResetActivityFromTmp(this,playerId,1,0,0);
        iVar3 = g_playerRuntime[playerId].tempSlots[0][0].objectType;
        if (iVar3 == 0) goto LAB_0043429d;
        if (iVar3 == 0x3c) {
          objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
          Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
          iVar3 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
          if (iVar3 < 0) goto LAB_0043404a;
          ActivateTV(this,playerId,0,iVar3);
          goto cf_common_exit_00434CB8;
        }
        if (iVar3 != 0x1ae) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xf52,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__PointPick_GAMETYP_007a7264);
          if (iVar3 == 0) {
            return;
          }
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        objectIds = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        Library::DKW::TBL::FUN_006ae1c0(objectIds,(undefined4 *)((int)piVar2 + 0x32));
        iVar3 = CheckTmps(playerId,0,0x3c,(char)piVar2[9],(DArrayTy *)objectIds,0);
        if (0 < iVar3) {
          ActivateTV(this,playerId,0,iVar3);
          goto cf_common_exit_00434CB8;
        }
LAB_0043404a:
        iVar3 = PushTV(playerId,0);
        uVar7 = extraout_var_07;
LAB_0043415b:
        AddObjToTmp(this,playerId,0,0,CONCAT31((int3)((uint)iVar3 >> 8),(char)piVar2[9]),
                    CONCAT22(uVar7,*(undefined2 *)((int)piVar2 + 0x32)));
      }
      g_playerRuntime[playerId].tempSlots[0][0].objectType = 0x3c;
      goto cf_common_exit_00434CB8;
    }
    if ((uVar5 != 0x5a) && (uVar5 != 0x172)) {
      return;
    }
  }
LAB_004345cf:
  if (param_4 == 1) {
    return;
  }
  if (g_playerRuntime[playerId].field324_0x203 != 0) {
    if (g_playerRuntime[playerId].field324_0x203 != 1) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1090,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__PointPick_GAMETYP_007a71dc);
      if (iVar3 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = g_playerRuntime[playerId].tempSlots[1][0].objectType;
    if (iVar3 < 0x19b) {
      if (iVar3 != 0x19a) {
        if (iVar3 == 0) {
          iVar3 = CheckTmps(playerId,1,uVar5,(char)piVar2[9],(DArrayTy *)0x0,
                            *(short *)((int)piVar2 + 0x32));
          uVar7 = extraout_var_12;
          if (0 < iVar3) {
            ActivateTV(this,playerId,1,iVar3);
            SelfCheckObjControl(this);
            return;
          }
          goto LAB_00434768;
        }
        if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_004346e3;
        goto LAB_00434715;
      }
      iVar3 = CheckTmps(playerId,1,uVar5,(char)piVar2[9],(DArrayTy *)0x0,
                        *(short *)((int)piVar2 + 0x32));
      if (0 < iVar3) {
        ActivateTV(this,playerId,1,iVar3);
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
      iVar3 = CheckTmps(playerId,1,uVar5,(char)piVar2[9],(DArrayTy *)0x0,
                        *(short *)((int)piVar2 + 0x32));
      if (0 < iVar3) {
        ActivateTV(this,playerId,1,iVar3);
        SelfCheckObjControl(this);
        return;
      }
      if (-1 < iVar3) {
cf_common_exit_00434CBD:
        SelfCheckObjControl(this);
        return;
      }
    }
    PushTV(playerId,1);
    iVar3 = ResetActivityFromTmp(this,playerId,1,1,0);
    uVar7 = extraout_var_13;
LAB_00434768:
    AddObjToTmp2(this,playerId,1,0,piVar2[8],CONCAT31((int3)((uint)iVar3 >> 8),(char)piVar2[9]),
                 CONCAT22(uVar7,*(undefined2 *)((int)piVar2 + 0x32)));
    SelfCheckObjControl(this);
    return;
  }
  g_playerRuntime[playerId].field324_0x203 = 1;
  ResetActivityFromTmp(this,playerId,0,0,0);
  iVar3 = g_playerRuntime[playerId].tempSlots[1][0].objectType;
  if (iVar3 < 0x19b) {
    if (iVar3 != 0x19a) {
      if (iVar3 == 0) {
        iVar3 = CheckTmps(playerId,1,piVar2[8],(char)piVar2[9],(DArrayTy *)0x0,
                          *(short *)((int)piVar2 + 0x32));
        uVar4 = extraout_EDX_01;
        uVar7 = extraout_var_03;
        if (0 < iVar3) {
          ActivateTV(this,playerId,1,iVar3);
          SelfCheckObjControl(this);
          return;
        }
        goto LAB_004348d7;
      }
      if ((iVar3 != 0x5a) && (iVar3 != 0x172)) goto LAB_00434863;
      goto LAB_00434895;
    }
    iVar3 = CheckTmps(playerId,1,piVar2[8],(char)piVar2[9],(DArrayTy *)0x0,
                      *(short *)((int)piVar2 + 0x32));
    if (0 < iVar3) {
      ActivateTV(this,playerId,1,iVar3);
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
    iVar3 = CheckTmps(playerId,1,piVar2[8],(char)piVar2[9],(DArrayTy *)0x0,
                      *(short *)((int)piVar2 + 0x32));
    if (-1 < iVar3) {
      ActivateTV(this,playerId,1,iVar3);
      SelfCheckObjControl(this);
      return;
    }
  }
  PushTV(playerId,1);
  uVar4 = extraout_EDX_02;
  uVar7 = extraout_var_04;
LAB_004348d7:
  AddObjToTmp2(this,playerId,1,0,piVar2[8],CONCAT31((int3)((uint)uVar4 >> 8),(char)piVar2[9]),
               CONCAT22(uVar7,*(undefined2 *)((int)piVar2 + 0x32)));
  SelfCheckObjControl(this);
  return;
}


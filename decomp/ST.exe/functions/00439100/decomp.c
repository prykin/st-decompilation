
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RestoreTmp */

void __thiscall STAllPlayersC::RestoreTmp(STAllPlayersC *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  STAllPlayersC *this_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint uVar6;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 uVar7;
  uint uVar8;
  undefined2 extraout_var_03;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 uVar9;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  undefined2 extraout_var_22;
  undefined2 extraout_var_23;
  undefined2 extraout_var_24;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined2 extraout_var_25;
  undefined2 extraout_var_26;
  undefined2 extraout_var_27;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar11;
  InternalExceptionFrame local_70;
  STAllPlayersC *local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  byte *local_c;
  uint local_8;
  
  local_8 = CONCAT31(local_8._1_3_,DAT_0080874d);
  local_c = (byte *)0x0;
  local_24 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_2c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar3 != -0x5001fff7) {
      iVar10 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x19ab,0,0,&DAT_007a4ccc,
                                  s_STAllPlayersC__RestoreTmp_007a74e0);
      if (iVar10 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x19ac);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x170e);
  }
  this_00 = local_2c;
  local_20 = (uint)(char)local_8;
  iVar10 = local_20 * 0xa62;
  iVar3 = *(int *)((int)&DAT_007f5027 + iVar10 + param_1 * 0x10);
  piVar1 = (int *)((int)&DAT_007f5027 + iVar10 + param_1 * 0x10);
  local_28 = piVar1;
  if (iVar3 < 0x19b) {
    if (iVar3 == 0x19a) {
      if (*(int *)((int)&DAT_007f5023 + iVar10) == 0) {
        *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
        ResetActivityFromTmp(local_2c,(char)local_8,0,0,0);
        iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) {
            iVar3 = CheckTmps(local_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
            if (-1 < iVar3) {
              ActivateTV(this_00,(char)local_8,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            iVar3 = PushTV((char)local_8,1);
LAB_00439c32:
            uVar5 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
            uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                             **(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c));
          }
          else {
            if (iVar3 != 0) {
              if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439c87;
              goto LAB_00439c59;
            }
            iVar3 = CheckTmps(local_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
            uVar9 = extraout_var_19;
            if (0 < iVar3) {
              ActivateTV(this_00,(char)local_8,1,iVar3);
              *(undefined4 *)((int)&DAT_007f4fd3 + iVar10) = 0x19a;
              goto cf_common_exit_0043A47C;
            }
LAB_00439aaa:
            uVar5 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
            uVar4 = CONCAT22(uVar9,**(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c));
          }
        }
        else {
          if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00439c59:
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x17d3,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a76d0);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            goto cf_common_exit_0043A47C;
          }
LAB_00439c87:
          iVar3 = CheckTmps(local_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          PushTV((char)local_8,1);
          uVar9 = extraout_var_05;
LAB_00439cc7:
          uVar5 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
          uVar4 = CONCAT22(uVar9,**(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c));
        }
        AddObjToTmp(this_00,(char)local_8,1,0,uVar5,uVar4);
        *(undefined4 *)((int)&DAT_007f4fd3 + iVar10) = 0x19a;
        goto cf_common_exit_0043A47C;
      }
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x17d7,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__RestoreTmp_GAMETY_007a7750);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto cf_common_exit_0043A47C;
      }
      iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
          iVar3 = CheckTmps(local_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          if (iVar3 < 0) {
            PushTV((char)local_8,1);
            ResetActivityFromTmp(this_00,(char)local_8,1,1,0);
            uVar9 = extraout_var_18;
            goto LAB_00439aaa;
          }
cf_common_join_0043A107:
          local_24 = 1;
          goto cf_common_exit_0043A47C;
        }
        if (iVar3 == 0) {
          iVar3 = CheckTmps(local_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,1,iVar3);
            *(undefined4 *)((int)&DAT_007f4fd3 + iVar10) = 0x19a;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439c32;
        }
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439b10;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439b10:
        iVar3 = CheckTmps(local_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
        if (0 < iVar3) {
          ActivateTV(this_00,(char)local_8,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV((char)local_8,1);
        ResetActivityFromTmp(this_00,(char)local_8,1,1,0);
        uVar9 = extraout_var_04;
        goto LAB_00439cc7;
      }
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x17a9,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__RestoreTmp_GAMETY_007a7710);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto cf_common_exit_0043A47C;
    }
    uVar9 = (undefined2)(local_20 * 0x29 >> 0x10);
    if (0x5a < iVar3) {
      if (iVar3 == 0x172) {
        uVar5 = GetObjPtr(local_2c,0xffffffff,CONCAT22(uVar9,(short)piVar1[2]),CASE_2);
        uVar4 = local_8;
        cVar11 = (char)local_8;
        if (*(int *)((int)&DAT_007f5023 + iVar10) != 0) {
          if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x18df,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a781c);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            goto cf_common_exit_0043A47C;
          }
          iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
          if (iVar3 < 0x19b) {
            uVar9 = extraout_var_17;
            if (iVar3 == 0x19a) goto LAB_004397fb;
            if (iVar3 == 0) goto LAB_0043a394;
            if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043986a;
          }
          else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_0043986a:
            iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                              CONCAT22(extraout_var_17,*(undefined2 *)(uVar5 + 0x32)));
            if (0 < iVar3) {
              ActivateTV(this_00,cVar11,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            if (iVar3 < 0) goto LAB_00439672;
            goto cf_common_join_0043A107;
          }
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x18b4,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a77dc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto cf_common_exit_0043A47C;
        }
        *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
        ResetActivityFromTmp(this_00,cVar11,0,0,0);
        uVar4 = local_8;
        iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
        if (iVar3 < 0x19b) {
          uVar9 = extraout_var_00;
          if (iVar3 == 0x19a) goto LAB_004396d1;
          if (iVar3 == 0) goto LAB_004398e7;
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439956;
        }
        else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439956:
          iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                            CONCAT22(extraout_var_00,*(undefined2 *)(uVar5 + 0x32)));
          if (-1 < iVar3) {
            ActivateTV(this_00,(char)uVar4,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439986;
        }
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x18db,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__RestoreTmp_GAMETY_007a779c);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto cf_common_exit_0043A47C;
      }
LAB_00439cfb:
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1998,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__RestoreTmp_invali_007a769c);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x1999);
      goto cf_common_exit_0043A47C;
    }
    if (iVar3 != 0x5a) {
      if (iVar3 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                   0x1713);
      }
      else if (iVar3 != 0x3c) goto LAB_00439cfb;
      if (*(int *)((int)&DAT_007f5023 + iVar10) == 0) {
        iVar3 = *(int *)((int)&DAT_007f4f83 + iVar10);
        if (iVar3 == 0) {
LAB_00439369:
          iVar3 = CheckTmps(local_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,0,iVar3);
            *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
            goto cf_common_exit_0043A47C;
          }
LAB_0043953a:
          uVar5 = piVar1[1];
          if (uVar5 == local_20) {
            AddObjsToTmp(this_00,local_8,0,0,*(int *)((int)piVar1 + 10));
            *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439566;
        }
        if (iVar3 == 0x3c) {
          iVar3 = CheckTmps(local_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,0,iVar3);
            goto cf_common_exit_0043A47C;
          }
          if (-1 < iVar3) goto cf_common_join_0043A107;
          PushTV((char)local_8,0);
          if ((*(uint *)((int)&DAT_007f4f97 + iVar10) == local_20) && (piVar1[1] == local_20)) {
            CalibrateTmp(this_00,(char)local_8,0,1,*(uint **)((int)piVar1 + 10),(int *)&local_c,
                         (int *)0x0,(int *)0x0);
            ResetActivityFromObjs(this_00,local_8,0x3c,(int)local_c,0,0);
            FUN_006ae110(local_c);
          }
          else {
            ResetActivityFromTmp(this_00,(char)local_8,0,1,0);
          }
          goto LAB_0043953a;
        }
        if (iVar3 != 0x1ae) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1748,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a7934);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = CheckTmps(local_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
        if (0 < iVar3) {
          ActivateTV(this_00,(char)local_8,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV((char)local_8,0);
        ResetActivityFromTmp(this_00,(char)local_8,0,1,0);
        uVar9 = extraout_var_14;
        if (piVar1[1] == local_20) {
          AddObjsToTmp(this_00,local_8,0,0,*(int *)((int)piVar1 + 10));
          *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
          goto cf_common_exit_0043A47C;
        }
LAB_00439469:
        uVar4 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
        uVar5 = CONCAT22(uVar9,**(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c));
      }
      else {
        if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1778,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a79ac);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto cf_common_exit_0043A47C;
        }
        *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 0;
        ResetActivityFromTmp(this_00,(char)local_8,1,0,0);
        iVar3 = *(int *)((int)&DAT_007f4f83 + iVar10);
        if (iVar3 == 0) goto LAB_00439369;
        if (iVar3 != 0x3c) {
          if (iVar3 != 0x1ae) {
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1774,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a7970);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            goto cf_common_exit_0043A47C;
          }
          iVar3 = CheckTmps(local_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
          if (0 < iVar3) {
            ActivateTV(this_00,(char)local_8,0,iVar3);
            goto cf_common_exit_0043A47C;
          }
          PushTV((char)local_8,0);
          uVar9 = extraout_var_13;
          if (piVar1[1] == local_20) {
            AddObjsToTmp(this_00,local_8,0,0,*(int *)((int)piVar1 + 10));
            *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
            goto cf_common_exit_0043A47C;
          }
          goto LAB_00439469;
        }
        iVar3 = CheckTmps(local_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
        if (-1 < iVar3) {
          ActivateTV(this_00,(char)local_8,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV((char)local_8,0);
        uVar5 = piVar1[1];
        if (uVar5 == local_20) {
          AddObjsToTmp(this_00,local_8,0,0,*(int *)((int)piVar1 + 10));
          *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
          goto cf_common_exit_0043A47C;
        }
LAB_00439566:
        uVar4 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
        uVar5 = CONCAT22((short)(uVar5 >> 0x10),**(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c)
                        );
      }
      AddObjToTmp(this_00,(char)local_8,0,0,uVar4,uVar5);
      *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
      goto cf_common_exit_0043A47C;
    }
    uVar5 = GetObjPtr(local_2c,0xffffffff,CONCAT22(uVar9,(short)piVar1[2]),CASE_4);
    uVar4 = local_8;
    cVar11 = (char)local_8;
    if (*(int *)((int)&DAT_007f5023 + iVar10) != 0) {
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1885,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__RestoreTmp_GAMETY_007a78e8);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto cf_common_exit_0043A47C;
      }
      iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
      if (iVar3 < 0x19b) {
        uVar9 = extraout_var_15;
        if (iVar3 == 0x19a) {
LAB_004397fb:
          uVar4 = local_8;
          iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                            CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
          if (0 < iVar3) {
            ActivateTV(this_00,(char)uVar4,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
LAB_00439672:
          PushTV((char)uVar4,1);
          iVar3 = ResetActivityFromTmp(this_00,(char)uVar4,1,1,0);
          uVar9 = extraout_var_16;
          goto LAB_0043a463;
        }
        if (iVar3 == 0) goto LAB_0043a394;
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043963c;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_0043963c:
        iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                          CONCAT22(extraout_var_15,*(undefined2 *)(uVar5 + 0x32)));
        if (0 < iVar3) {
          ActivateTV(this_00,cVar11,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        if (-1 < iVar3) goto cf_common_join_0043A107;
        goto LAB_00439672;
      }
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x185a,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__RestoreTmp_GAMETY_007a78a8);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto cf_common_exit_0043A47C;
    }
    *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
    ResetActivityFromTmp(this_00,cVar11,0,0,0);
    uVar4 = local_8;
    iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
    if (iVar3 < 0x19b) {
      uVar9 = extraout_var;
      if (iVar3 == 0x19a) {
LAB_004396d1:
        uVar4 = local_8;
        iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                          CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
        if (0 < iVar3) {
          ActivateTV(this_00,(char)uVar4,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        goto LAB_00439986;
      }
      if (iVar3 != 0) {
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439740;
        goto LAB_00439712;
      }
LAB_004398e7:
      uVar4 = local_8;
      iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                        CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
      uVar7 = extraout_ECX;
      if (0 < iVar3) {
        ActivateTV(this_00,(char)uVar4,1,iVar3);
        goto cf_common_exit_0043A47C;
      }
    }
    else {
      if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00439712:
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1881,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__RestoreTmp_GAMETY_007a7868);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto cf_common_exit_0043A47C;
      }
LAB_00439740:
      iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                        CONCAT22(extraout_var,*(undefined2 *)(uVar5 + 0x32)));
      if (-1 < iVar3) {
        ActivateTV(this_00,(char)uVar4,1,iVar3);
        goto cf_common_exit_0043A47C;
      }
LAB_00439986:
      iVar3 = PushTV((char)uVar4,1);
      uVar7 = extraout_ECX_00;
    }
    uVar6 = CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(uVar5 + 0x32));
    uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),*(undefined1 *)(uVar5 + 0x24));
    iVar3 = *(int *)(uVar5 + 0x20);
LAB_0043a470:
    iVar10 = 1;
  }
  else {
    if (iVar3 == 0x1a4) {
      uVar5 = GetObjPtr(local_2c,0xffffffff,(uint)*(ushort *)(piVar1 + 2),CASE_5);
      uVar4 = local_8;
      cVar11 = (char)local_8;
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 0) {
        if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1939,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a7650);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
        if (iVar3 < 0x19b) {
          uVar9 = extraout_var_10;
          if (iVar3 == 0x19a) {
LAB_0043a27b:
            uVar4 = local_8;
            iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                              CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
            if (0 < iVar3) {
              ActivateTV(this_00,(char)uVar4,1,iVar3);
              goto cf_common_exit_0043A47C;
            }
            goto LAB_0043a320;
          }
          if (iVar3 != 0) {
            if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043a2ea;
            goto LAB_0043a2bc;
          }
LAB_0043a247:
          uVar4 = local_8;
          iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                            CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
          uVar7 = extraout_EDX_00;
          uVar9 = extraout_var_11;
          if (0 < iVar3) {
            ActivateTV(this_00,(char)uVar4,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
        }
        else {
          if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_0043a2bc:
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x190e,0,0,
                                       &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a760c);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            goto cf_common_exit_0043A47C;
          }
LAB_0043a2ea:
          iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                            CONCAT22(extraout_var_10,*(undefined2 *)(uVar5 + 0x32)));
          if (0 < iVar3) {
            ActivateTV(this_00,cVar11,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
joined_r0x0043a31a:
          if (-1 < iVar3) goto cf_common_join_0043A107;
LAB_0043a320:
          PushTV((char)uVar4,1);
          ResetActivityFromTmp(this_00,(char)uVar4,1,1,0);
          uVar7 = extraout_EDX_01;
          uVar9 = extraout_var_12;
        }
        uVar6 = CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32));
        uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),*(undefined1 *)(uVar5 + 0x24));
        iVar3 = *(int *)(uVar5 + 0x20);
        goto LAB_0043a470;
      }
      *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
      ResetActivityFromTmp(this_00,cVar11,0,0,0);
      uVar4 = local_8;
      iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
      if (iVar3 < 0x19b) {
        uVar9 = extraout_var_25;
        if (iVar3 == 0x19a) {
LAB_0043a3c8:
          uVar4 = local_8;
          iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                            CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
          if (0 < iVar3) {
            ActivateTV(this_00,(char)uVar4,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_0043a459;
        }
        if (iVar3 != 0) {
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043a42c;
          goto LAB_0043a405;
        }
LAB_0043a394:
        uVar4 = local_8;
        iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                          CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
        uVar9 = extraout_var_26;
        if (0 < iVar3) {
          ActivateTV(this_00,(char)uVar4,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
      }
      else {
        if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_0043a405:
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1935,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a75cc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto cf_common_exit_0043A47C;
        }
LAB_0043a42c:
        iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                          CONCAT22(extraout_var_25,*(undefined2 *)(uVar5 + 0x32)));
        if (-1 < iVar3) {
          ActivateTV(this_00,(char)uVar4,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
LAB_0043a459:
        iVar3 = PushTV((char)uVar4,1);
        uVar9 = extraout_var_27;
      }
LAB_0043a463:
      uVar6 = CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32));
      uVar8 = CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(uVar5 + 0x24));
      iVar3 = *(int *)(uVar5 + 0x20);
      goto LAB_0043a470;
    }
    if (iVar3 != 0x1ae) {
      if (iVar3 != 0x1b8) goto LAB_00439cfb;
      uVar5 = GetObjPtr(local_2c,0xffffffff,(uint)*(ushort *)(piVar1 + 2),CASE_6);
      uVar4 = local_8;
      cVar11 = (char)local_8;
      if (*(int *)((int)&DAT_007f5023 + iVar10) == 0) {
        *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
        ResetActivityFromTmp(this_00,cVar11,0,0,0);
        uVar4 = local_8;
        iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
        if (iVar3 < 0x19b) {
          uVar9 = extraout_var_20;
          if (iVar3 == 0x19a) goto LAB_0043a3c8;
          if (iVar3 == 0) goto LAB_0043a394;
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439eb7;
        }
        else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439eb7:
          iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                            CONCAT22(extraout_var_20,*(undefined2 *)(uVar5 + 0x32)));
          if (-1 < iVar3) {
            ActivateTV(this_00,(char)uVar4,1,iVar3);
            goto cf_common_exit_0043A47C;
          }
          goto LAB_0043a459;
        }
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x198f,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__RestoreTmp_GAMETY_007a75cc);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto cf_common_exit_0043A47C;
      }
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1993,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__RestoreTmp_GAMETY_007a7650);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto cf_common_exit_0043A47C;
      }
      iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
      if (iVar3 < 0x19b) {
        uVar9 = extraout_var_06;
        if (iVar3 == 0x19a) goto LAB_0043a27b;
        if (iVar3 == 0) goto LAB_0043a247;
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439dfb;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439dfb:
        iVar3 = CheckTmps(local_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),(uint *)0x0,
                          CONCAT22(extraout_var_06,*(undefined2 *)(uVar5 + 0x32)));
        if (0 < iVar3) {
          ActivateTV(this_00,cVar11,1,iVar3);
          goto cf_common_exit_0043A47C;
        }
        goto joined_r0x0043a31a;
      }
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1968,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__RestoreTmp_GAMETY_007a760c);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto cf_common_exit_0043A47C;
    }
    local_20 = GetObjPtr(local_2c,(uint)*(byte *)(piVar1 + 1),
                         CONCAT22((short)(local_20 * 5 >> 0x10),(short)piVar1[2]),CASE_3);
    uVar4 = local_8;
    cVar11 = (char)local_8;
    if (*(int *)((int)&DAT_007f5023 + iVar10) == 0) {
      iVar3 = *(int *)((int)&DAT_007f4f83 + iVar10);
      uVar9 = 0;
      if (iVar3 == 0) {
LAB_0043a177:
        uVar4 = local_8;
        iVar3 = CheckTmps(local_8,0,*(int *)(local_20 + 0x20),(char)piVar1[1],(uint *)0x0,
                          CONCAT22(uVar9,(short)piVar1[2]));
        if (0 < iVar3) {
          ActivateTV(this_00,(char)uVar4,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        uVar6 = CONCAT22(extraout_var_09,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)extraout_EDX >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(local_20 + 0x20);
        iVar10 = 0;
      }
      else if (iVar3 == 0x3c) {
        iVar3 = CheckTmps(local_8,0,*(int *)(local_20 + 0x20),(char)piVar1[1],(uint *)0x0,
                          CONCAT22(extraout_var_07,(short)piVar1[2]));
        if (0 < iVar3) {
          ActivateTV(this_00,cVar11,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV(cVar11,0);
        uVar7 = ResetActivityFromTmp(this_00,cVar11,0,1,0);
        uVar6 = CONCAT22(extraout_var_24,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(local_20 + 0x20);
        iVar10 = 0;
      }
      else {
        if (iVar3 != 0x1ae) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1803,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a7500);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = CheckTmps(local_8,0,*(int *)(local_20 + 0x20),(char)piVar1[1],(uint *)0x0,
                          CONCAT22(extraout_var_21,(short)piVar1[2]));
        if (0 < iVar3) {
          ActivateTV(this_00,cVar11,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        if (-1 < iVar3) goto cf_common_join_0043A107;
        PushTV(cVar11,0);
        ResetActivityFromTmp(this_00,cVar11,0,1,0);
        uVar6 = CONCAT22(extraout_var_03,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)extraout_ECX_02 >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(local_20 + 0x20);
        iVar10 = 0;
      }
    }
    else {
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
        iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x182b,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__RestoreTmp_GAMETY_007a7580);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto cf_common_exit_0043A47C;
      }
      *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 0;
      ResetActivityFromTmp(this_00,cVar11,1,0,0);
      uVar4 = local_8;
      iVar3 = *(int *)((int)&DAT_007f4f83 + iVar10);
      uVar9 = extraout_var_01;
      if (iVar3 == 0) goto LAB_0043a177;
      cVar11 = (char)local_8;
      if (iVar3 == 0x3c) {
        iVar3 = CheckTmps(local_8,0,*(int *)(local_20 + 0x20),(char)piVar1[1],(uint *)0x0,
                          CONCAT22(extraout_var_08,(short)piVar1[2]));
        if (0 < iVar3) {
          ActivateTV(this_00,cVar11,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        uVar7 = PushTV(cVar11,0);
        uVar6 = CONCAT22(extraout_var_23,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(local_20 + 0x20);
        iVar10 = 0;
      }
      else {
        if (iVar3 != 0x1ae) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1827,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__RestoreTmp_GAMETY_007a7540);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto cf_common_exit_0043A47C;
        }
        iVar3 = CheckTmps(local_8,0,*(int *)(local_20 + 0x20),(char)piVar1[1],(uint *)0x0,
                          CONCAT22(extraout_var_22,(short)piVar1[2]));
        if (-1 < iVar3) {
          ActivateTV(this_00,cVar11,0,iVar3);
          goto cf_common_exit_0043A47C;
        }
        PushTV(cVar11,0);
        uVar6 = CONCAT22(extraout_var_02,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)extraout_ECX_01 >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(local_20 + 0x20);
        iVar10 = 0;
      }
    }
  }
  AddObjToTmp2(this_00,(char)uVar4,iVar10,0,iVar3,uVar8,uVar6);
cf_common_exit_0043A47C:
  if (((local_24 == 1) &&
      (uVar5 = CONCAT22((short)((uint)&local_14 >> 0x10),(short)local_28[2]),
      iVar3 = GetCamPoint(*local_28,CONCAT31((int3)(uVar5 >> 8),(char)local_28[1]),
                          *(int *)((int)local_28 + 10),uVar5,&local_18,&local_14,&local_10,&local_1c
                         ), iVar3 == 0)) &&
     (iVar3 = FUN_006eb230(DAT_00807598,local_1c,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c
                          ), iVar3 != 1)) {
    thunk_FUN_004a8e00(local_18,local_14,local_10);
    thunk_FUN_004a8f20(1);
    thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
    thunk_FUN_0054b540(DAT_00802a30);
    DAT_0080674c = 2;
    DAT_0080745d = 0;
  }
  SelfCheckObjControl(this_00);
  g_currentExceptionFrame = local_70.previous;
  return;
}


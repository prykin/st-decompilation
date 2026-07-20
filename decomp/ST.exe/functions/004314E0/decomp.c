
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::FramePick */

void __thiscall
STAllPlayersC::FramePick
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar7;
  InternalExceptionFrame local_90;
  int local_4c;
  DArrayTy *local_48;
  DArrayTy *local_44;
  AnonShape_006ACC70_C8641025 *local_40;
  AnonShape_006ACC70_C8641025 *local_3c;
  AnonShape_006ACC70_C8641025 *local_38;
  AnonShape_006ACC70_C8641025 *local_34;
  AnonShape_006ACC70_C8641025 *local_30;
  AnonShape_006ACC70_C8641025 *local_2c;
  AnonShape_006ACC70_C8641025 *local_28;
  DArrayTy *local_24;
  AnonShape_006ACC70_C8641025 *local_20;
  AnonShape_006ACC70_C8641025 *local_1c;
  AnonShape_006ACC70_C8641025 *local_18;
  AnonShape_006ACC70_C8641025 *local_14;
  DArrayTy *local_10;
  uint local_c;
  uint local_8;
  
  local_10 = (DArrayTy *)0x0;
  local_18 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_3c = (AnonShape_006ACC70_C8641025 *)0x0;
  local_14 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_1c = (AnonShape_006ACC70_C8641025 *)0x0;
  local_40 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_34 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_2c = (AnonShape_006ACC70_C8641025 *)0x0;
  local_20 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_28 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_30 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_38 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_24 = (DArrayTy *)0x0;
  local_44 = (DArrayTy *)0x0;
  local_48 = (DArrayTy *)0x0;
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  iVar2 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_90.previous;
    if (iVar2 == -0x5001fff7) {
      if (local_10 != (DArrayTy *)0x0) {
        FUN_006ae110((byte *)local_10);
      }
      if (local_18 != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_18);
      }
      if (local_3c != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_3c);
      }
      if (local_14 != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_14);
      }
      if (local_1c != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_1c);
      }
      if (local_40 != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_40);
      }
      if (local_34 != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_34);
      }
      if (local_2c != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_2c);
      }
      if (local_20 != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_20);
      }
      if (local_28 != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_28);
      }
      if (local_30 != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_30);
      }
      if (local_38 != (AnonShape_006ACC70_C8641025 *)0x0) {
        FUN_006ae110((byte *)local_38);
      }
      SelfCheckObjControl(this);
      return;
    }
    iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xdd1,0,iVar2,&DAT_007a4ccc,
                               s_STAllPlayersC__FramePick_007a67e4);
    if (iVar3 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0xdd2);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cVar7 = (char)param_1;
  GetGObjFromZone2(this,cVar7,param_2,param_3,param_4,param_5,(int *)&local_10,(int *)&local_18,
                   (int *)&local_3c,(int *)&local_14,(int *)&local_1c,(int *)&local_40,
                   (int *)&local_34,(int *)&local_2c,(int *)&local_20,(int *)&local_28,
                   (int *)&local_30,(int *)&local_38);
  if (local_10->count != 0) {
    iVar2 = (int)cVar7;
    if (g_playerRuntime[iVar2].field442_0x203 == 0) {
      iVar3 = g_playerRuntime[iVar2].field326_0x163;
      if (iVar3 == 0) {
LAB_00431886:
        iVar3 = CheckTmps(param_1,0,0x3c,cVar7,&local_10->flags,0);
        if (iVar3 < 1) goto cf_error_exit_004318A9;
        ActivateTV(this,cVar7,0,iVar3);
LAB_004318b5:
        g_playerRuntime[iVar2].field326_0x163 = 0x3c;
      }
      else if (iVar3 == 0x3c) {
        if (param_6 == 1) {
          if (g_playerRuntime[iVar2].field327_0x167 == iVar2) {
            CalibrateTmp(this,cVar7,0,0,&local_10->flags,(int *)0x0,(int *)&local_44,
                         (int *)&local_48);
            ResetActivityFromObjs(this,param_1,0x3c,local_44,0,0);
            DelObjsFromTmp(this,param_1,0,0,local_44);
            AddObjsToTmp(this,param_1,0,0,local_48);
            FUN_006ae110((byte *)local_44);
            FUN_006ae110((byte *)local_48);
          }
        }
        else {
          iVar3 = CheckTmps(param_1,0,0x3c,cVar7,&local_10->flags,0);
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              PushTV(cVar7,0);
              if (g_playerRuntime[iVar2].field332_0x177 == (int)cVar7) {
                CalibrateTmp(this,cVar7,0,1,&local_10->flags,(int *)&local_24,(int *)0x0,(int *)0x0)
                ;
                ResetActivityFromObjs(this,param_1,0x3c,local_24,0,0);
                FUN_006ae110((byte *)local_24);
              }
              else {
                ResetActivityFromTmp(this,cVar7,0,1,0);
              }
              goto cf_error_exit_004318A9;
            }
          }
          else {
            ActivateTV(this,cVar7,0,iVar3);
          }
        }
      }
      else if (iVar3 == 0x1ae) {
        if (param_6 != 1) {
          iVar3 = CheckTmps(param_1,0,0x3c,cVar7,&local_10->flags,0);
          if (iVar3 < 1) {
            PushTV(cVar7,0);
            ResetActivityFromTmp(this,cVar7,0,1,0);
            goto cf_error_exit_004318A9;
          }
          ActivateTV(this,cVar7,0,iVar3);
        }
      }
      else {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xa60,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6f58);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (g_playerRuntime[iVar2].field442_0x203 == 1) {
      if (param_6 != 1) {
        g_playerRuntime[iVar2].field442_0x203 = 0;
        ResetActivityFromTmp(this,cVar7,1,0,0);
        iVar3 = g_playerRuntime[iVar2].field326_0x163;
        if (iVar3 == 0) goto LAB_00431886;
        if (iVar3 == 0x3c) {
          iVar3 = CheckTmps(param_1,0,0x3c,cVar7,&local_10->flags,0);
          if (iVar3 < 0) {
            PushTV(cVar7,0);
cf_error_exit_004318A9:
            AddObjsToTmp(this,param_1,0,0,local_10);
            goto LAB_004318b5;
          }
          ActivateTV(this,cVar7,0,iVar3);
        }
        else if (iVar3 == 0x1ae) {
          iVar3 = CheckTmps(param_1,0,0x3c,cVar7,&local_10->flags,0);
          if (iVar3 < 1) {
            PushTV(cVar7,0);
            goto cf_error_exit_004318A9;
          }
          ActivateTV(this,cVar7,0,iVar3);
        }
        else {
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xa88,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__FramePick_GAMETYP_007a6f94);
          if (iVar2 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xa8c,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6fd0);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xa8e);
  }
  if (local_34->field_000C != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xa92);
    }
    FUN_006acc70(local_34,0,&local_8);
    local_34->field_000C = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_34,&local_8);
    uVar4 = GetObjPtr(this,0,local_8,CASE_3);
    if (uVar4 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xa95);
    }
    iVar2 = (int)cVar7;
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field442_0x203 == 0) {
      iVar2 = g_playerRuntime[iVar2].field326_0x163;
      if (iVar2 == 0) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
cf_error_exit_00431A49:
          AddObjToTmp2(this,cVar7,0,0,*(int *)(uVar4 + 0x20),
                       CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(uVar4 + 0x24)),local_8);
        }
        else {
          ActivateTV(this,cVar7,0,iVar2);
        }
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
LAB_00431c38:
          PushTV(cVar7,0);
          iVar2 = ResetActivityFromTmp(this,cVar7,0,1,0);
          goto cf_error_exit_00431A49;
        }
        ActivateTV(this,cVar7,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00431c38;
        }
        else {
          ActivateTV(this,cVar7,0,iVar2);
        }
      }
      else {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xaba,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6e40);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (g_playerRuntime[iVar2].field442_0x203 == 1) {
      g_playerRuntime[iVar2].field442_0x203 = 0;
      ResetActivityFromTmp(this,cVar7,1,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].field326_0x163 + local_4c);
      if (iVar2 == 0) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) goto cf_error_exit_00431A49;
        ActivateTV(this,cVar7,0,iVar2);
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
LAB_00431a3f:
          iVar2 = PushTV(cVar7,0);
          goto cf_error_exit_00431A49;
        }
        ActivateTV(this,cVar7,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 0) goto LAB_00431a3f;
        ActivateTV(this,cVar7,0,iVar2);
      }
      else {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xade,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6ecc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xae2,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6f0c);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xae4);
  }
  if (local_28->field_000C != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xae8);
    }
    FUN_006acc70(local_28,0,&local_8);
    local_28->field_000C = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_28,&local_8);
    uVar4 = GetObjPtr(this,0xffffffff,local_8,CASE_2);
    if (uVar4 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xaeb);
    }
    iVar2 = (int)cVar7;
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field442_0x203 == 0) {
      g_playerRuntime[iVar2].field442_0x203 = 1;
      ResetActivityFromTmp(this,cVar7,0,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].field384_0x1b3 + local_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) goto LAB_00431ec7;
          ActivateTV(this,cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00431e9e;
            goto LAB_00431e77;
          }
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          uVar6 = extraout_ECX;
          if (iVar2 < 1) goto LAB_00431ed1;
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00431e9e:
        iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 0) {
LAB_00431ec7:
          PushTV(cVar7,1);
          uVar6 = extraout_ECX_00;
LAB_00431ed1:
          uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar4 + 0x24));
          iVar2 = *(int *)(uVar4 + 0x20);
LAB_00431edd:
          AddObjToTmp2(this,cVar7,1,0,iVar2,uVar5,local_8);
        }
        else {
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else {
LAB_00431e77:
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb3a,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6dc0);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (g_playerRuntime[iVar2].field442_0x203 == 1) {
      iVar2 = g_playerRuntime[iVar2].field384_0x1b3;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) {
LAB_00431da2:
            PushTV(cVar7,1);
            ResetActivityFromTmp(this,cVar7,1,1,0);
            uVar6 = extraout_EDX_00;
LAB_00431dba:
            uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar4 + 0x24));
            iVar2 = *(int *)(uVar4 + 0x20);
            goto LAB_00431edd;
          }
          ActivateTV(this,cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00431d70;
            goto LAB_00431d42;
          }
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          uVar6 = extraout_EDX;
          if (iVar2 < 1) goto LAB_00431dba;
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00431d70:
        iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00431da2;
        }
        else {
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else {
LAB_00431d42:
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb13,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6e00);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb3e,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6e80);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xb40);
  }
  if (local_30->field_000C != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xb44);
    }
    FUN_006acc70(local_30,0,&local_8);
    local_30->field_000C = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_30,&local_8);
    uVar4 = GetObjPtr(this,0xffffffff,local_8,CASE_5);
    if (uVar4 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xb47);
    }
    iVar2 = (int)cVar7;
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field442_0x203 == 0) {
      g_playerRuntime[iVar2].field442_0x203 = 1;
      ResetActivityFromTmp(this,cVar7,0,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].field384_0x1b3 + local_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) goto LAB_004321f3;
          ActivateTV(this,cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_004321ca;
            goto LAB_004321a3;
          }
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) goto LAB_004321fd;
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_004321ca:
        iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 0) {
LAB_004321f3:
          iVar2 = PushTV(cVar7,1);
LAB_004321fd:
          uVar5 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(uVar4 + 0x24));
          iVar2 = *(int *)(uVar4 + 0x20);
LAB_00432209:
          AddObjToTmp2(this,cVar7,1,0,iVar2,uVar5,local_8);
        }
        else {
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else {
LAB_004321a3:
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb96,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6cf4);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (g_playerRuntime[iVar2].field442_0x203 == 1) {
      iVar2 = g_playerRuntime[iVar2].field384_0x1b3;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) {
LAB_004320ce:
            PushTV(cVar7,1);
            ResetActivityFromTmp(this,cVar7,1,1,0);
            uVar6 = extraout_ECX_02;
LAB_004320e6:
            uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar4 + 0x24));
            iVar2 = *(int *)(uVar4 + 0x20);
            goto LAB_00432209;
          }
          ActivateTV(this,cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_0043209c;
            goto LAB_0043206e;
          }
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          uVar6 = extraout_ECX_01;
          if (iVar2 < 1) goto LAB_004320e6;
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_0043209c:
        iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_004320ce;
        }
        else {
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else {
LAB_0043206e:
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb6f,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6d34);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb9a,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6d74);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xb9c);
  }
  if (local_14->field_000C != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xba0);
    }
    FUN_006acc70(local_14,0,&local_8);
    local_14->field_000C = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_14,&local_8);
    if (g_playerRuntime[cVar7].field442_0x203 == 0) {
      g_playerRuntime[cVar7].field442_0x203 = 1;
      ResetActivityFromTmp(this,cVar7,0,0,0);
      iVar2 = g_playerRuntime[cVar7].field384_0x1b3;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,0x19a,cVar7,(uint *)local_14,0);
          if (-1 < iVar2) {
            ActivateTV(this,cVar7,1,iVar2);
            goto LAB_00432582;
          }
          PushTV(cVar7,1);
cf_error_exit_0043256B:
          AddObjToTmp(this,cVar7,1,0,param_1,local_8);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432536;
            goto LAB_0043250f;
          }
          iVar2 = CheckTmps(param_1,1,0x19a,cVar7,(uint *)local_14,0);
          if (iVar2 < 1) goto cf_error_exit_0043256B;
          ActivateTV(this,cVar7,1,iVar2);
        }
LAB_00432578:
        g_playerRuntime[cVar7].field384_0x1b3 = 0x19a;
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432536:
        iVar2 = CheckTmps(param_1,1,0x19a,cVar7,(uint *)local_14,0);
        if (iVar2 < 1) {
          PushTV(cVar7,1);
          goto cf_error_exit_0043256B;
        }
        ActivateTV(this,cVar7,1,iVar2);
      }
      else {
LAB_0043250f:
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xbfb,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6c30);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (g_playerRuntime[cVar7].field442_0x203 == 1) {
      iVar2 = g_playerRuntime[cVar7].field384_0x1b3;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,0x19a,cVar7,(uint *)local_14,0);
          if (iVar2 < 1) {
            if (iVar2 < 0) {
              PushTV(cVar7,1);
              if (g_playerRuntime[cVar7].field390_0x1c7 == (int)cVar7) {
                CalibrateTmp(this,cVar7,1,1,(uint *)local_14,(int *)&local_24,(int *)0x0,(int *)0x0)
                ;
                ResetActivityFromObjs(this,param_1,0x19a,local_24,0,0);
                FUN_006ae110((byte *)local_24);
              }
              else {
                ResetActivityFromTmp(this,cVar7,1,1,0);
              }
              goto cf_error_exit_0043256B;
            }
          }
          else {
            ActivateTV(this,cVar7,1,iVar2);
          }
        }
        else {
          if (iVar2 == 0) {
            iVar2 = CheckTmps(param_1,1,0x19a,cVar7,(uint *)local_14,0);
            if (0 < iVar2) {
              ActivateTV(this,cVar7,1,iVar2);
              goto LAB_00432578;
            }
            goto cf_error_exit_0043256B;
          }
          if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_0043240a;
LAB_004323dc:
          iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xbd1,0,0,
                                     &DAT_007a4ccc,s_STAllPlayersC__FramePick_GAMETYP_007a6c6c);
          if (iVar2 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      else {
        if ((iVar2 != 0x1a4) && (iVar2 != 0x1b8)) goto LAB_004323dc;
LAB_0043240a:
        iVar2 = CheckTmps(param_1,1,0x19a,cVar7,(uint *)local_14,0);
        if (iVar2 < 1) {
          PushTV(cVar7,1);
          ResetActivityFromTmp(this,cVar7,1,1,0);
          goto cf_error_exit_0043256B;
        }
        ActivateTV(this,cVar7,1,iVar2);
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xbff,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6cac);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_00432582:
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xc01);
  }
  if (local_20->field_000C != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xc05);
    }
    FUN_006acc70(local_20,0,&local_8);
    local_20->field_000C = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_20,&local_8);
    uVar4 = GetObjPtr(this,0xffffffff,local_8,CASE_4);
    if (uVar4 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xc08);
    }
    iVar2 = (int)cVar7;
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field442_0x203 == 0) {
      g_playerRuntime[iVar2].field442_0x203 = 1;
      ResetActivityFromTmp(this,cVar7,0,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].field384_0x1b3 + local_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) goto LAB_0043288b;
          ActivateTV(this,cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432862;
            goto LAB_0043283b;
          }
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          uVar6 = extraout_ECX_03;
          if (iVar2 < 1) goto LAB_00432895;
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432862:
        iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 0) {
LAB_0043288b:
          PushTV(cVar7,1);
          uVar6 = extraout_ECX_04;
LAB_00432895:
          uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar4 + 0x24));
          iVar2 = *(int *)(uVar4 + 0x20);
LAB_004328a1:
          AddObjToTmp2(this,cVar7,1,0,iVar2,uVar5,local_8);
        }
        else {
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else {
LAB_0043283b:
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xc57,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6b64);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (g_playerRuntime[iVar2].field442_0x203 == 1) {
      iVar2 = g_playerRuntime[iVar2].field384_0x1b3;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) {
LAB_00432766:
            PushTV(cVar7,1);
            ResetActivityFromTmp(this,cVar7,1,1,0);
            uVar6 = extraout_EDX_02;
LAB_0043277e:
            uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar4 + 0x24));
            iVar2 = *(int *)(uVar4 + 0x20);
            goto LAB_004328a1;
          }
          ActivateTV(this,cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432734;
            goto LAB_00432706;
          }
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          uVar6 = extraout_EDX_01;
          if (iVar2 < 1) goto LAB_0043277e;
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432734:
        iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00432766;
        }
        else {
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else {
LAB_00432706:
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xc30,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6ba4);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xc5b,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6be4);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xc5d);
  }
  if (local_38->field_000C != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xc61);
    }
    FUN_006acc70(local_38,0,&local_8);
    local_38->field_000C = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_38,&local_8);
    uVar4 = GetObjPtr(this,0xffffffff,local_8,CASE_6);
    if (uVar4 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xc64);
    }
    iVar2 = (int)cVar7;
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field442_0x203 == 0) {
      g_playerRuntime[iVar2].field442_0x203 = 1;
      ResetActivityFromTmp(this,cVar7,0,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].field384_0x1b3 + local_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) goto LAB_00432bb7;
          ActivateTV(this,cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432b8e;
            goto LAB_00432b67;
          }
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) goto LAB_00432bc1;
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432b8e:
        iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 0) {
LAB_00432bb7:
          iVar2 = PushTV(cVar7,1);
LAB_00432bc1:
          uVar5 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(uVar4 + 0x24));
          iVar2 = *(int *)(uVar4 + 0x20);
LAB_00432bcd:
          AddObjToTmp2(this,cVar7,1,0,iVar2,uVar5,local_8);
        }
        else {
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else {
LAB_00432b67:
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xcb3,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6aa4);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (g_playerRuntime[iVar2].field442_0x203 == 1) {
      iVar2 = g_playerRuntime[iVar2].field384_0x1b3;
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          if (iVar2 < 1) {
LAB_00432a92:
            PushTV(cVar7,1);
            ResetActivityFromTmp(this,cVar7,1,1,0);
            uVar6 = extraout_ECX_06;
LAB_00432aaa:
            uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar4 + 0x24));
            iVar2 = *(int *)(uVar4 + 0x20);
            goto LAB_00432bcd;
          }
          ActivateTV(this,cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432a60;
            goto LAB_00432a32;
          }
          iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                            local_8);
          uVar6 = extraout_ECX_05;
          if (iVar2 < 1) goto LAB_00432aaa;
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432a60:
        iVar2 = CheckTmps(param_1,1,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00432a92;
        }
        else {
          ActivateTV(this,cVar7,1,iVar2);
        }
      }
      else {
LAB_00432a32:
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xc8c,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6ae0);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xcb7,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6b1c);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xcb9);
  }
  if (local_18->field_000C != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xcbd);
    }
    FUN_006acc70(local_18,0,&local_8);
    local_18->field_000C = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_18,&local_8);
    FUN_006acc70(local_3c,0,&local_c);
    local_3c->field_000C = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_3c,&local_c);
    if (g_playerRuntime[cVar7].field442_0x203 == 0) {
      iVar2 = g_playerRuntime[cVar7].field326_0x163;
      if (iVar2 == 0) {
LAB_00432e7f:
        iVar2 = CheckTmps(param_1,0,0x3c,(char)local_c,(uint *)local_18,0);
        if (iVar2 < 1) {
cf_error_exit_00432EAE:
          AddObjToTmp(this,cVar7,0,0,local_c,local_8);
        }
        else {
          ActivateTV(this,cVar7,0,iVar2);
        }
        g_playerRuntime[cVar7].field326_0x163 = 0x3c;
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(param_1,0,0x3c,(char)local_c,(uint *)local_18,0);
        if (iVar2 < 1) {
          if (iVar2 < 0) {
            PushTV(cVar7,0);
            ResetActivityFromTmp(this,cVar7,0,1,0);
            goto cf_error_exit_00432EAE;
          }
        }
        else {
          ActivateTV(this,cVar7,0,iVar2);
        }
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(param_1,0,0x3c,(char)local_c,(uint *)local_18,0);
        if (iVar2 < 1) {
          PushTV(cVar7,0);
          ResetActivityFromTmp(this,cVar7,0,1,0);
          goto cf_error_exit_00432EAE;
        }
        ActivateTV(this,cVar7,0,iVar2);
      }
      else {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xce7,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a69cc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (g_playerRuntime[cVar7].field442_0x203 == 1) {
      g_playerRuntime[cVar7].field442_0x203 = 0;
      ResetActivityFromTmp(this,cVar7,1,0,0);
      iVar2 = g_playerRuntime[cVar7].field326_0x163;
      if (iVar2 == 0) goto LAB_00432e7f;
      if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(param_1,0,0x3c,(char)local_c,(uint *)local_18,0);
        if (iVar2 < 0) {
          PushTV(cVar7,0);
          goto cf_error_exit_00432EAE;
        }
        ActivateTV(this,cVar7,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(param_1,0,0x3c,(char)local_c,(uint *)local_18,0);
        if (iVar2 < 1) {
          PushTV(cVar7,0);
          goto cf_error_exit_00432EAE;
        }
        ActivateTV(this,cVar7,0,iVar2);
      }
      else {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd0e,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6a10);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd12,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6a54);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xd14);
  }
  if (local_2c->field_000C != 0) {
    if (param_6 == 1) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xd18);
    }
    FUN_006acc70(local_2c,0,&local_8);
    local_2c->field_000C = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)local_2c,&local_8);
    uVar4 = GetObjPtr(this,0,local_8,CASE_3);
    if (uVar4 == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0xd1b);
    }
    iVar2 = (int)cVar7;
    local_4c = iVar2 * 0xa62;
    if (g_playerRuntime[iVar2].field442_0x203 == 0) {
      iVar2 = g_playerRuntime[iVar2].field326_0x163;
      if (iVar2 == 0) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
cf_error_exit_00433050:
          AddObjToTmp2(this,cVar7,0,0,*(int *)(uVar4 + 0x20),
                       CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(uVar4 + 0x24)),local_8);
        }
        else {
          ActivateTV(this,cVar7,0,iVar2);
        }
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
LAB_0043322b:
          PushTV(cVar7,0);
          iVar2 = ResetActivityFromTmp(this,cVar7,0,1,0);
          goto cf_error_exit_00433050;
        }
        ActivateTV(this,cVar7,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_0043322b;
        }
        else {
          ActivateTV(this,cVar7,0,iVar2);
        }
      }
      else {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd40,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6894);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (g_playerRuntime[iVar2].field442_0x203 == 1) {
      g_playerRuntime[iVar2].field442_0x203 = 0;
      ResetActivityFromTmp(this,cVar7,1,0,0);
      iVar2 = *(int *)((int)&g_playerRuntime[0].field326_0x163 + local_4c);
      if (iVar2 == 0) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) goto cf_error_exit_00433050;
        ActivateTV(this,cVar7,0,iVar2);
      }
      else if (iVar2 == 0x3c) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
LAB_00433046:
          iVar2 = PushTV(cVar7,0);
          goto cf_error_exit_00433050;
        }
        ActivateTV(this,cVar7,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = CheckTmps(param_1,0,*(int *)(uVar4 + 0x20),*(char *)(uVar4 + 0x24),(uint *)0x0,
                          local_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00433046;
        }
        else {
          ActivateTV(this,cVar7,0,iVar2);
        }
      }
      else {
        iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd66,0,0,&DAT_007a4ccc,
                                   s_STAllPlayersC__FramePick_GAMETYP_007a6930);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd6a,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6978);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xd6c);
  }
  if (local_1c->field_000C == 0) goto cf_error_exit_004334F5;
  if (param_6 == 1) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0xd70);
  }
  FUN_006acc70(local_1c,0,&local_8);
  local_1c->field_000C = 0;
  Library::DKW::TBL::FUN_006ae1c0((uint *)local_1c,&local_8);
  FUN_006acc70(local_40,0,&local_c);
  local_40->field_000C = 0;
  Library::DKW::TBL::FUN_006ae1c0((uint *)local_40,&local_c);
  if (g_playerRuntime[cVar7].field442_0x203 != 0) {
    if (g_playerRuntime[cVar7].field442_0x203 != 1) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xdcb,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a68dc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto cf_error_exit_004334F5;
    }
    iVar2 = g_playerRuntime[cVar7].field384_0x1b3;
    if (iVar2 < 0x19b) {
      if (iVar2 == 0x19a) {
        iVar2 = CheckTmps(param_1,1,0x19a,(char)local_c,(uint *)local_1c,0);
        if (0 < iVar2) {
          ActivateTV(this,cVar7,1,iVar2);
          goto cf_error_exit_004334F5;
        }
        if (-1 < iVar2) goto cf_error_exit_004334F5;
        PushTV(cVar7,1);
        ResetActivityFromTmp(this,cVar7,1,1,0);
        goto cf_error_exit_004334DF;
      }
      if (iVar2 == 0) goto LAB_004333f5;
      if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00433363;
    }
    else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00433363:
      iVar2 = CheckTmps(param_1,1,0x19a,(char)local_c,(uint *)local_1c,0);
      if (0 < iVar2) {
        ActivateTV(this,cVar7,1,iVar2);
        goto cf_error_exit_004334F5;
      }
      PushTV(cVar7,1);
      ResetActivityFromTmp(this,cVar7,1,1,0);
      goto cf_error_exit_004334DF;
    }
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd9d,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__FramePick_GAMETYP_007a684c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto cf_error_exit_004334F5;
  }
  g_playerRuntime[cVar7].field442_0x203 = 1;
  ResetActivityFromTmp(this,cVar7,0,0,0);
  iVar2 = g_playerRuntime[cVar7].field384_0x1b3;
  if (iVar2 < 0x19b) {
    if (iVar2 == 0x19a) {
      iVar2 = CheckTmps(param_1,1,0x19a,(char)local_c,(uint *)local_1c,0);
      if (-1 < iVar2) {
        ActivateTV(this,cVar7,1,iVar2);
        goto cf_error_exit_004334F5;
      }
      PushTV(cVar7,1);
      goto cf_error_exit_004334DF;
    }
    if (iVar2 != 0) {
      if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_004334a3;
      goto LAB_0043347c;
    }
LAB_004333f5:
    iVar2 = CheckTmps(param_1,1,0x19a,(char)local_c,(uint *)local_1c,0);
    if (iVar2 < 1) goto cf_error_exit_004334DF;
    ActivateTV(this,cVar7,1,iVar2);
  }
  else {
    if ((iVar2 != 0x1a4) && (iVar2 != 0x1b8)) {
LAB_0043347c:
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xdc7,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__FramePick_GAMETYP_007a6804);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto cf_error_exit_004334F5;
    }
LAB_004334a3:
    iVar2 = CheckTmps(param_1,1,0x19a,(char)local_c,(uint *)local_1c,0);
    if (0 < iVar2) {
      ActivateTV(this,cVar7,1,iVar2);
      goto cf_error_exit_004334F5;
    }
    PushTV(cVar7,1);
cf_error_exit_004334DF:
    AddObjToTmp(this,cVar7,1,0,local_c,local_8);
  }
  g_playerRuntime[cVar7].field384_0x1b3 = 0x19a;
cf_error_exit_004334F5:
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,0xdce)
  ;
  g_currentExceptionFrame = local_90.previous;
  return;
}


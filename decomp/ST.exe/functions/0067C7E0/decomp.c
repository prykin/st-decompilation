
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::GetMessage */

undefined4 __thiscall AiPlrClassTy::GetMessage(AiPlrClassTy *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  code *pcVar3;
  AiPlrClassTy *this_00;
  DArrayTy *pDVar4;
  int iVar5;
  byte *pbVar6;
  LPSTR pCVar7;
  int *piVar8;
  AiFltClassTy *this_01;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 unaff_ESI;
  char *pcVar13;
  void *unaff_EDI;
  char *pcVar14;
  uint *puVar15;
  bool bVar16;
  byte bVar17;
  InternalExceptionFrame local_b0;
  uint local_6c [3];
  DArrayTy *local_60;
  int local_38 [5];
  undefined4 local_24;
  undefined1 *local_20;
  byte *local_18;
  uint local_14;
  AiPlrClassTy *local_10;
  int local_c;
  DArrayTy *local_8;
  
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    iVar9 = ReportDebugMessage(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x655,0,iVar5,
                               s_AiPlrClassTy__GetMessage_error_m_007d2f48,
                               *(undefined4 *)(param_1 + 0x10),local_10->field_0018);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return uVar10;
    }
    RaiseInternalException(iVar5,0,s_E____titans_ai_ai_plr_cpp_007d2e4c,0x656);
    return 0xffff;
  }
  local_10->field_06FE = PTR_00802a38->field_00E4;
  uVar11 = *(uint *)(param_1 + 0x10);
  if (uVar11 < 0x5d98) {
    if (uVar11 == 0x5d97) {
      CloseAllTact(local_10);
    }
    else if (uVar11 < 0x110) {
      if (uVar11 == 0x10f) {
        local_14 = 0;
        pbVar6 = (byte *)PrepareToSave(local_10,&local_14);
        bVar17 = 0xc;
        uVar11 = local_14;
        local_18 = pbVar6;
        pCVar7 = FUN_006f2c00(PTR_s_AIPLAYER_0079d6d0,2,*(undefined4 *)&this_00->field_0x5d7);
        STPlaySystemC::SaveObjData(PTR_00802a38,pCVar7,pbVar6,uVar11,bVar17);
        pCVar7 = FUN_006f2c00(PTR_s_AIPLAYER_0079d6d0,2,*(undefined4 *)&this_00->field_0x5d7);
        uVar11 = 0xffffffff;
        do {
          pcVar13 = pCVar7;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar13 = pCVar7 + 1;
          cVar1 = *pCVar7;
          pCVar7 = pcVar13;
        } while (cVar1 != '\0');
        uVar11 = ~uVar11;
        pcVar13 = pcVar13 + -uVar11;
        pcVar14 = &DAT_008087c8 + *(int *)&this_00->field_0x5d7 * 0x51;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar14 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar14 = pcVar14 + 1;
        }
        if (local_18 != (byte *)0x0) {
          FUN_006ab060(&local_18);
        }
      }
      else if (uVar11 == 0) {
        if ((&DAT_00809950)[*(int *)&local_10->field_0x5d7] == '\0') {
          if (DAT_008117bc != (undefined4 *)0x0) {
            piVar8 = local_38;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar8 = 0;
              piVar8 = piVar8 + 1;
            }
            local_38[4] = 0x5deb;
            local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)&this_00->field_0x5d7);
            if (this_00 == (AiPlrClassTy *)0x0) {
              local_20 = (undefined1 *)0x0;
            }
            else {
              local_20 = &this_00->field_0x1c;
            }
            (**(code **)*DAT_008117bc)(local_38);
          }
          AiEventClassTy::GetMessage((AiEventClassTy *)&this_00->field_0x1c,(STMessage *)param_1);
          if (*(int *)&this_00->field_0x658 == 0) {
            *(undefined4 *)&this_00->field_0x658 = 1;
            thunk_FUN_0067a2d0((AnonShape_0067A2D0_742706D4 *)this_00);
          }
          else {
            thunk_FUN_0067a390((AnonShape_00679600_B8E418A8 *)this_00);
            ExecTech(this_00,unaff_EDI);
            Offensive(this_00,unaff_EDI);
          }
        }
        else {
          CloseAllTact(local_10);
          piVar8 = local_38;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar8 = 0;
            piVar8 = piVar8 + 1;
          }
          local_38[2] = this_00->field_000C->systemId;
          local_38[3] = 0;
          local_24 = this_00->field_0008;
          local_38[4] = 10;
          SystemClassTy::PostMessage(this_00->field_000C,local_38);
        }
      }
      else if (uVar11 == 2) {
        puVar2 = *(undefined4 **)(param_1 + 0x14);
        if (puVar2 == (undefined4 *)0x0) {
          RaiseInternalException
                    (-6,g_overwriteContext_007ED77C,s_E____titans_ai_ai_plr_cpp_007d2e4c,0x586);
        }
        InitData(this_00,puVar2);
        if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
          thunk_FUN_004357b0(this_00->field_0x5d7,this_00);
        }
        if (puVar2[3] == 0) {
          thunk_FUN_00678fc0((int)this_00);
        }
        thunk_FUN_0064a450();
      }
      else if (uVar11 == 3) {
        if (DAT_008117bc != (undefined4 *)0x0) {
          piVar8 = local_38;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar8 = 0;
            piVar8 = piVar8 + 1;
          }
          local_38[4] = 0x5dec;
          local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)&this_00->field_0x5d7);
          if (this_00 == (AiPlrClassTy *)0x0) {
            local_20 = (undefined1 *)0x0;
          }
          else {
            local_20 = &this_00->field_0x1c;
          }
          (**(code **)*DAT_008117bc)(local_38);
        }
        thunk_FUN_0064a580();
        if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
          thunk_FUN_004357b0(this_00->field_0x5d7,0);
        }
        thunk_FUN_00678ba0((int)this_00);
      }
    }
    else if (uVar11 == 0x111) {
      iVar5 = local_10->field_0695;
      uVar11 = 0;
      if (0 < *(int *)(iVar5 + 0xc)) {
        bVar16 = *(int *)(iVar5 + 0xc) != 0;
        do {
          if (bVar16) {
            piVar8 = (int *)(*(int *)(iVar5 + 8) * uVar11 + *(int *)(iVar5 + 0x1c));
          }
          else {
            piVar8 = (int *)0x0;
          }
          if (piVar8[1] != 0) {
            local_c = 0;
            iVar5 = FUN_006e62d0(PTR_00802a38,piVar8[1],&local_c);
            if ((iVar5 == 0) && (local_c != 0)) {
              *piVar8 = local_c;
            }
            else {
              *piVar8 = 0;
              piVar8[1] = 0;
            }
          }
          iVar5 = this_00->field_0695;
          uVar11 = uVar11 + 1;
          bVar16 = uVar11 < *(uint *)(iVar5 + 0xc);
        } while ((int)uVar11 < (int)*(uint *)(iVar5 + 0xc));
      }
    }
    else if (uVar11 == 0x5d94) {
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,CONCAT31(0x5d,local_10->field_0x5d7),
                                   CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x16)),CASE_1);
      }
      if (piVar8 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar8 + 0x2c))();
        if ((iVar5 < 1) || (0x28 < iVar5)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if ((bVar16) &&
           (this_01 = (AiFltClassTy *)thunk_FUN_00679e70(this_00,(short)piVar8[0x207]),
           this_01 != (AiFltClassTy *)0x0)) {
          AiFltClassTy::_AddObjFlt(this_01,(uint)piVar8,0);
        }
      }
    }
  }
  else {
    switch(uVar11) {
    case 0x5d98:
      if (*(short *)(param_1 + 0x14) == 0) {
        thunk_FUN_00675dc0(*(uint *)&local_10->field_0x5d7,*(uint **)(param_1 + 0x18));
      }
      else {
        local_8 = (DArrayTy *)0x0;
        Library::DKW::TBL::FUN_006afe40((int *)&local_8,*(uint **)(param_1 + 0x18));
        pDVar4 = local_8;
        if (local_8 != (DArrayTy *)0x0) {
          puVar15 = local_6c;
          for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar15 = 0;
            puVar15 = puVar15 + 1;
          }
          local_6c[1] = this_00->field_06FE;
          local_6c[0] = 0x72;
          local_6c[2] = 0;
          local_60 = pDVar4;
          thunk_FUN_0067a020(this_00,local_6c,-1);
          local_6c[2] = 1;
          thunk_FUN_0067a020(this_00,local_6c,-1);
          FUN_006ae110((byte *)local_8);
        }
      }
      break;
    case 0x5dc5:
    case 0x5dc6:
    case 0x5dd0:
    case 0x5dd1:
    case 0x5dd2:
    case 0x5dd3:
    case 0x5dd4:
    case 0x5dd6:
    case 0x5dd7:
    case 0x5dd8:
    case 0x5dd9:
    case 0x5dda:
    case 0x5ddb:
    case 0x5ddc:
    case 0x5ddd:
    case 0x5dde:
    case 0x5ddf:
    case 0x5de0:
    case 0x5de1:
    case 0x5de2:
    case 0x5de3:
    case 0x5de4:
    case 0x5de5:
    case 0x5de6:
    case 0x5de7:
    case 0x5de8:
    case 0x5de9:
    case 0x5dea:
    case 0x5deb:
    case 0x5dec:
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->field_0x1c,(STMessage *)param_1);
      break;
    case 0x5dd5:
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->field_0x1c,(STMessage *)param_1);
      if (*(int *)&this_00->field_0x645 + 10U <= (uint)this_00->field_06FE) {
        *(undefined4 *)&this_00->field_0x645 = this_00->field_06FE;
        thunk_FUN_006799b0(this_00,CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 0x18)));
        thunk_FUN_0067a1b0(this_00,param_1);
      }
    }
  }
  FUN_006e5fd0();
  g_currentExceptionFrame = local_b0.previous;
  return 0;
}


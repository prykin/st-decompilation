
undefined4 FUN_0067c7e0(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  LPSTR pCVar5;
  int *piVar6;
  AiFltClassTy *this;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 unaff_ESI;
  char *pcVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  char *pcVar13;
  uint *puVar14;
  bool bVar15;
  byte bVar16;
  undefined4 local_b0;
  undefined4 local_ac [16];
  uint local_6c [3];
  byte *local_60;
  undefined4 local_38 [5];
  undefined4 local_24;
  AiPlrClassTy *local_20;
  byte *local_18;
  uint local_14;
  AiPlrClassTy *local_10;
  int local_c;
  byte *local_8;
  
  local_b0 = DAT_00858df8;
  DAT_00858df8 = &local_b0;
  iVar3 = __setjmp3(local_ac,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_b0;
    iVar7 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x655,0,iVar3,
                         (byte *)s_AiPlrClassTy__GetMessage_error_m_007d2f48);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return uVar8;
    }
    FUN_006a5e40(iVar3,0,0x7d2e4c,0x656);
    return 0xffff;
  }
  *(undefined4 *)(local_10 + 0x6fe) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uVar9 = *(uint *)(param_1 + 0x10);
  if (uVar9 < 0x5d98) {
    if (uVar9 == 0x5d97) {
      AiPlrClassTy::CloseAllTact(local_10);
    }
    else if (uVar9 < 0x110) {
      if (uVar9 == 0x10f) {
        local_14 = 0;
        pbVar4 = (byte *)AiPlrClassTy::PrepareToSave(local_10,&local_14);
        bVar16 = 0xc;
        uVar9 = local_14;
        local_18 = pbVar4;
        pCVar5 = FUN_006f2c00(PTR_s_AIPLAYER_0079d6d0,2,*(undefined4 *)(local_10 + 0x5d7));
        STPlaySystemC::SaveObjData(DAT_00802a38,pCVar5,pbVar4,uVar9,bVar16);
        pCVar5 = FUN_006f2c00(PTR_s_AIPLAYER_0079d6d0,2,*(undefined4 *)(local_10 + 0x5d7));
        uVar9 = 0xffffffff;
        do {
          pcVar11 = pCVar5;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar11 = pCVar5 + 1;
          cVar1 = *pCVar5;
          pCVar5 = pcVar11;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        pcVar11 = pcVar11 + -uVar9;
        pcVar13 = &DAT_008087c8 + *(int *)(local_10 + 0x5d7) * 0x51;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        if (local_18 != (byte *)0x0) {
          FUN_006ab060(&local_18);
        }
      }
      else if (uVar9 == 0) {
        if ((&DAT_00809950)[*(int *)(local_10 + 0x5d7)] == '\0') {
          if (DAT_008117bc != (undefined4 *)0x0) {
            puVar12 = local_38;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            local_38[4] = 0x5deb;
            local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)(local_10 + 0x5d7));
            if (local_10 == (AiPlrClassTy *)0x0) {
              local_20 = (AiPlrClassTy *)0x0;
            }
            else {
              local_20 = local_10 + 0x1c;
            }
            (**(code **)*DAT_008117bc)(local_38);
          }
          thunk_FUN_00652810(local_10 + 0x1c,param_1);
          if (*(int *)(local_10 + 0x658) == 0) {
            *(undefined4 *)(local_10 + 0x658) = 1;
            thunk_FUN_0067a2d0(local_10);
          }
          else {
            thunk_FUN_0067a390(local_10);
            AiPlrClassTy::ExecTech(local_10,unaff_EDI);
            AiPlrClassTy::Offensive(local_10,unaff_EDI);
          }
        }
        else {
          AiPlrClassTy::CloseAllTact(local_10);
          puVar12 = local_38;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          local_38[2] = *(undefined4 *)(*(int *)(local_10 + 0xc) + 0x14);
          local_38[3] = 0;
          local_24 = *(undefined4 *)(local_10 + 8);
          local_38[4] = 10;
          FUN_006e5810(local_38);
        }
      }
      else if (uVar9 == 2) {
        puVar12 = *(undefined4 **)(param_1 + 0x14);
        if (puVar12 == (undefined4 *)0x0) {
          FUN_006a5e40(-6,DAT_007ed77c,0x7d2e4c,0x586);
        }
        AiPlrClassTy::InitData(local_10,puVar12);
        if (DAT_007fa174 != 0) {
          thunk_FUN_004357b0((char)local_10[0x5d7],local_10);
        }
        if (puVar12[3] == 0) {
          thunk_FUN_00678fc0((int)local_10);
        }
        thunk_FUN_0064a450();
      }
      else if (uVar9 == 3) {
        if (DAT_008117bc != (undefined4 *)0x0) {
          puVar12 = local_38;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          local_38[4] = 0x5dec;
          local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)(local_10 + 0x5d7));
          if (local_10 == (AiPlrClassTy *)0x0) {
            local_20 = (AiPlrClassTy *)0x0;
          }
          else {
            local_20 = local_10 + 0x1c;
          }
          (**(code **)*DAT_008117bc)(local_38);
        }
        thunk_FUN_0064a580();
        if (DAT_007fa174 != 0) {
          thunk_FUN_004357b0((char)local_10[0x5d7],0);
        }
        thunk_FUN_00678ba0((int)local_10);
      }
    }
    else if (uVar9 == 0x111) {
      iVar3 = *(int *)(local_10 + 0x695);
      uVar9 = 0;
      if (0 < *(int *)(iVar3 + 0xc)) {
        bVar15 = *(int *)(iVar3 + 0xc) != 0;
        do {
          if (bVar15) {
            piVar6 = (int *)(*(int *)(iVar3 + 8) * uVar9 + *(int *)(iVar3 + 0x1c));
          }
          else {
            piVar6 = (int *)0x0;
          }
          if (piVar6[1] != 0) {
            local_c = 0;
            iVar3 = FUN_006e62d0(DAT_00802a38,piVar6[1],&local_c);
            if ((iVar3 == 0) && (local_c != 0)) {
              *piVar6 = local_c;
            }
            else {
              *piVar6 = 0;
              piVar6[1] = 0;
            }
          }
          iVar3 = *(int *)(local_10 + 0x695);
          uVar9 = uVar9 + 1;
          bVar15 = uVar9 < *(uint *)(iVar3 + 0xc);
        } while ((int)uVar9 < (int)*(uint *)(iVar3 + 0xc));
      }
    }
    else if (uVar9 == 0x5d94) {
      if (DAT_007fa174 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)thunk_FUN_0042b620(CONCAT31(0x5d,local_10[0x5d7]),
                                           CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x16)),1)
        ;
      }
      if (piVar6 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar6 + 0x2c))();
        if ((iVar3 < 1) || (0x28 < iVar3)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        if ((bVar15) &&
           (this = (AiFltClassTy *)thunk_FUN_00679e70(local_10,(short)piVar6[0x207]),
           this != (AiFltClassTy *)0x0)) {
          AiFltClassTy::_AddObjFlt(this,piVar6,0);
        }
      }
    }
  }
  else {
    switch(uVar9) {
    case 0x5d98:
      if (*(short *)(param_1 + 0x14) == 0) {
        thunk_FUN_00675dc0(*(uint *)(local_10 + 0x5d7),*(int *)(param_1 + 0x18));
      }
      else {
        local_8 = (byte *)0x0;
        FUN_006afe40((int *)&local_8,*(uint **)(param_1 + 0x18));
        pbVar4 = local_8;
        if (local_8 != (byte *)0x0) {
          puVar14 = local_6c;
          for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          }
          local_6c[1] = *(uint *)(local_10 + 0x6fe);
          local_6c[0] = 0x72;
          local_6c[2] = 0;
          local_60 = pbVar4;
          thunk_FUN_0067a020(local_10,local_6c,-1);
          local_6c[2] = 1;
          thunk_FUN_0067a020(local_10,local_6c,-1);
          FUN_006ae110(local_8);
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
      thunk_FUN_00652810(local_10 + 0x1c,param_1);
      break;
    case 0x5dd5:
      thunk_FUN_00652810(local_10 + 0x1c,param_1);
      if (*(int *)(local_10 + 0x645) + 10U <= *(uint *)(local_10 + 0x6fe)) {
        *(uint *)(local_10 + 0x645) = *(uint *)(local_10 + 0x6fe);
        thunk_FUN_006799b0(local_10,CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 0x18)));
        thunk_FUN_0067a1b0(local_10,param_1);
      }
    }
  }
  FUN_006e5fd0();
  DAT_00858df8 = (undefined4 *)local_b0;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::Life */

undefined4 __thiscall STPlaySystemC::Life(STPlaySystemC *this)

{
  code *pcVar1;
  STPlaySystemC *this_00;
  int iVar2;
  char *pcVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  DWORD *pDVar8;
  int *piVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  bool bVar11;
  uint uVar12;
  InternalExceptionFrame local_a8;
  undefined4 local_64 [8];
  undefined4 local_44 [8];
  STPlaySystemC *local_24;
  int local_20;
  DWORD local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_24 = this;
  local_1c = timeGetTime();
  if (DAT_0080c512 != 0) {
    return 0;
  }
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar2 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  DVar5 = local_1c;
  this_00 = local_24;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x411,0,iVar2,
                               &DAT_007a4ccc,s_STPlaySystemC__Life_007c853c);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x412);
    return 0xffffffff;
  }
  if ((DAT_00808783 == '\x03') && (499 < local_1c - local_24->field_007F)) {
    local_24->field_007F = local_1c;
    FUN_006b6500(g_int_00811764,0);
    FUN_00715360(g_int_00811764,(uint)(DAT_0080877e == '\0'),'5',(char *)0x0,0,0,0xffffffff);
    FUN_006b6500(g_int_00811764,DAT_0080733c);
  }
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
  }
  if (DAT_00808784 == 0) {
    if (DAT_0080877e == '\0') {
      PrepareMail(this_00);
      SendMail(this_00,unaff_EDI);
      if (((this_00->field_0038 != '\0') && (g_popUp_008016D8 != (PopUpTy *)0x0)) &&
         (g_popUp_008016D8->field_009C == '\0')) {
        uVar12 = 8;
        pcVar3 = (char *)FUN_006b0140(0x4275,HINSTANCE_00807618);
        thunk_FUN_0052d320(g_popUp_008016D8,pcVar3,uVar12);
      }
      if (this_00->field_0028 != 0) {
        SystemClassTy::Life((SystemClassTy *)this_00);
        PlaySystemTy::SendClientMail((PlaySystemTy *)this_00,(int)unaff_EDI);
      }
      goto LAB_0054e02c;
    }
    if (this_00->field_0038 == '\0') {
      if ((this_00->field_0059 == 0) && (DAT_00808788 == 0)) {
        if (this_00->field_00E8 == 0) {
          if ((this_00->field_00EC != 0) && (1000 < (int)(DVar5 - this_00->field_0030))) {
            iVar2 = FUN_006b7140(g_int_00811764);
            if (iVar2 < 2) {
              this_00->field_00E8 = 1;
            }
            this_00->field_0030 = DVar5;
          }
          iVar2 = this_00->field_002C + -1;
          this_00->field_002C = iVar2;
          if (iVar2 < 1) {
            this_00->field_002C =
                 *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4);
            thunk_FUN_00550190((int)this_00);
            PrepareMail(this_00);
            SendMail(this_00,unaff_EDI);
            SystemClassTy::Life((SystemClassTy *)this_00);
            this_00->field_0028 = 0;
          }
        }
        else if (this_00->field_004D == '\0') {
          if ((30000 < (int)(DVar5 - this_00->field_0030)) ||
             (iVar2 = FUN_006b7140(g_int_00811764), iVar2 < 2)) {
            puVar10 = local_64;
            for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            local_64[3] = 1;
            local_64[4] = DAT_0080c526;
            AppClassTy::PostMessage((AppClassTy *)&DAT_00807620,local_64);
          }
        }
        else {
          if (this_00->field_003D != 0) {
            *(undefined1 *)(this_00->field_003D + 4) = this_00->field_004D;
            *(undefined2 *)(this_00->field_003D + 5) = 0;
            iVar2 = thunk_FUN_0054ebb0(this_00,(char *)this_00->field_003D,7);
            if (iVar2 != 0) {
              thunk_FUN_00550380(1);
              goto LAB_0054e052;
            }
          }
          this_00->field_004D = 0;
          iVar2 = FUN_00715360(g_int_00811764,0,'4',(char *)0x0,0,0,0xffffffff);
          if (iVar2 != 0) {
            thunk_FUN_00550380(2);
            goto LAB_0054e052;
          }
          this_00->field_0030 = DVar5;
        }
      }
      else {
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x42,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x42,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar4 == 1) && (local_8 != (int *)0x0)) {
              FUN_006ab060(&local_8);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x43,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x43,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar4 == 1) {
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != (int *)0x0) {
                FUN_006ab060(&local_8);
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x33,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x33,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar4 == 1) && (local_8 != (int *)0x0)) {
              thunk_FUN_00550830((int)local_8);
              FUN_006ab060(&local_8);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x35,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x35,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar4 == 1) && (thunk_FUN_00550430(this_00,local_10,1), local_8 != (int *)0x0)) {
              FUN_006ab060(&local_8);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x36,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x36,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if ((iVar4 == 1) &&
               (thunk_FUN_005505d0(this_00,local_10,local_8), local_8 != (int *)0x0)) {
              FUN_006ab060(&local_8);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x11,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x11,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar4 == 1) {
              thunk_FUN_005504f0(this_00,local_10,0x426f,1);
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != (int *)0x0) {
                FUN_006ab060(&local_8);
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x13,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x13,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar4 == 1) {
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != (int *)0x0) {
                FUN_006ab060(&local_8);
              }
              if (this_00->field_00EC != 0) {
                thunk_FUN_005504f0(this_00,local_10,0x4274,0);
                this_00->field_00E8 = 1;
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        if ((this_00->field_0059 != 0) &&
           (uVar12 = this_00->field_005D + 1, this_00->field_005D = uVar12, 2000 < uVar12)) {
          FUN_00715360(g_int_00811764,0,'D',(char *)0x0,0,0,0xffffffff);
          this_00->field_0059 = 0;
        }
      }
    }
    else {
      Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_20,-1,0);
      local_10 = 0;
      if (0 < local_20) {
        do {
          iVar2 = Library::Ourlib::CONNECT::FUN_00715630
                            (g_int_00811764,-1,&local_14,&local_18,&local_8,(uint *)0x0,-1,0);
          if (iVar2 == 1) {
            switch(local_14) {
            case 0x11:
              iVar2 = 0;
              if (DAT_00808aaf != 0) {
                pcVar3 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar3 + -6) == local_18) && (*pcVar3 != '\0')) {
                    uVar6 = FUN_006b0140(0x426f,HINSTANCE_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,pcVar3 + -0x46,uVar6);
                    if (g_popUp_008016D8 != (PopUpTy *)0x0) {
                      thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
                    }
                    thunk_FUN_005508f0(this_00,local_18);
                    break;
                  }
                  iVar2 = iVar2 + 1;
                  pcVar3 = pcVar3 + 0x9c;
                } while (iVar2 < (int)(uint)DAT_00808aaf);
              }
              uVar7 = 0;
              uVar12 = *(uint *)(DAT_0080c4fe + 0xc);
              if (0 < (int)uVar12) {
                bVar11 = uVar12 != 0;
                do {
                  if (bVar11) {
                    piVar9 = (int *)(*(int *)(DAT_0080c4fe + 8) * uVar7 +
                                    *(int *)(DAT_0080c4fe + 0x1c));
                  }
                  else {
                    piVar9 = (int *)0x0;
                  }
                  if ((piVar9 != (int *)0x0) && (*piVar9 == local_18)) {
                    FUN_006b0c70(DAT_0080c4fe,uVar7);
                    break;
                  }
                  uVar7 = uVar7 + 1;
                  bVar11 = uVar7 < uVar12;
                } while ((int)uVar7 < (int)uVar12);
              }
              break;
            case 0x33:
              thunk_FUN_00550830((int)local_8);
              break;
            case 0x35:
              uVar7 = 0;
              uVar12 = *(uint *)(DAT_0080c4fe + 0xc);
              if (0 < (int)uVar12) {
                bVar11 = uVar12 != 0;
                do {
                  if (bVar11) {
                    piVar9 = (int *)(*(int *)(DAT_0080c4fe + 8) * uVar7 +
                                    *(int *)(DAT_0080c4fe + 0x1c));
                  }
                  else {
                    piVar9 = (int *)0x0;
                  }
                  if ((piVar9 != (int *)0x0) && (*piVar9 == local_18)) {
                    FUN_006b0c70(DAT_0080c4fe,uVar7);
                    iVar2 = 0;
                    if (DAT_00808aaf != 0) {
                      pcVar3 = &DAT_00808af6;
                      do {
                        if ((*(int *)(pcVar3 + -6) == local_18) && (*pcVar3 != '\0')) {
                          uVar6 = FUN_006b0140(0x426e,HINSTANCE_00807618);
                          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,pcVar3 + -0x46,uVar6);
                          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
                            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
                          }
                        }
                        iVar2 = iVar2 + 1;
                        pcVar3 = pcVar3 + 0x9c;
                      } while (iVar2 < (int)(uint)DAT_00808aaf);
                    }
                    break;
                  }
                  uVar7 = uVar7 + 1;
                  bVar11 = uVar7 < uVar12;
                } while ((int)uVar7 < (int)uVar12);
              }
            case 0x1a:
              iVar2 = 0;
              if (DAT_00808aaf != 0) {
                pcVar3 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar3 + -6) == local_18) && (*pcVar3 != '\0')) {
                    *(DWORD *)(pcVar3 + 2) = local_1c;
                  }
                  iVar2 = iVar2 + 1;
                  pcVar3 = pcVar3 + 0x9c;
                } while (iVar2 < (int)(uint)DAT_00808aaf);
              }
            }
            if (local_8 != (int *)0x0) {
              FUN_006ab060(&local_8);
            }
          }
          local_10 = local_10 + 1;
          DVar5 = local_1c;
        } while (local_10 < local_20);
      }
      if ((g_popUp_008016D8 != (PopUpTy *)0x0) && (g_popUp_008016D8->field_009C == '\0')) {
        uVar12 = 8;
        pcVar3 = (char *)FUN_006b0140(0x426a,HINSTANCE_00807618);
        thunk_FUN_0052d320(g_popUp_008016D8,pcVar3,uVar12);
      }
      if ((*(int *)(DAT_0080c4fe + 0xc) == 0) || (59999 < (int)(DVar5 - this_00->field_00BC))) {
        if (g_popUp_008016D8 != (PopUpTy *)0x0) {
          uVar12 = 8;
          pcVar3 = (char *)FUN_006b0140(0x4269,HINSTANCE_00807618);
          thunk_FUN_0052d320(g_popUp_008016D8,pcVar3,uVar12);
        }
        this_00->field_0038 = 0;
      }
      if ((this_00->field_0038 == '\0') && (iVar2 = 0, DAT_00808aaf != 0)) {
        pDVar8 = &DAT_00808af8;
        do {
          *pDVar8 = DVar5;
          iVar2 = iVar2 + 1;
          pDVar8 = pDVar8 + 0x27;
          DVar5 = local_1c;
        } while (iVar2 < (int)(uint)DAT_00808aaf);
      }
    }
    if (((((DAT_00808783 == '\x03') && (DAT_00808788 == 0)) && (this_00->field_00E8 == 0)) &&
        ((this_00->field_0038 == '\0' && (this_00->field_0059 == 0)))) &&
       (iVar2 = 0, DAT_00808aaf != 0)) {
      piVar9 = &DAT_00808af0;
      do {
        if (((piVar9 != (int *)0x40) && (*piVar9 != 0)) &&
           ((*piVar9 != DAT_0080877f &&
            (((*(char *)((int)piVar9 + 6) != '\0' &&
              ((&DAT_00809950)[*(byte *)(piVar9 + 1)] == '\0')) &&
             (DVar5 = FUN_006e51b0(0x807620), 30000 < (int)(DVar5 - piVar9[2]))))))) {
          if (*piVar9 != this_00->field_00F4) {
            thunk_FUN_005503c0(this_00,*piVar9);
          }
          break;
        }
        iVar2 = iVar2 + 1;
        piVar9 = piVar9 + 0x27;
      } while (iVar2 < (int)(uint)DAT_00808aaf);
    }
  }
  else {
    PrepareMail(this_00);
    SendMail(this_00,unaff_EDI);
    if (this_00->field_0028 != 0) {
      SystemClassTy::Life((SystemClassTy *)this_00);
    }
LAB_0054e02c:
    this_00->field_0028 = 0;
  }
  if (DAT_00808794 != 0) {
    thunk_FUN_0056f250(&DAT_00807620,'\0',0,(char *)0x0);
    DAT_00808794 = 0;
  }
LAB_0054e052:
  if ((DAT_0080874d < 8) && ((&DAT_00809950)[DAT_0080874d] != '\0')) {
    puVar10 = local_44;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    local_44[3] = 1;
    DAT_0080c526 = 0x6108;
    local_44[4] = 0x6108;
    switch(_DAT_008087a0 & 0xff) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 8:
      break;
    case 4:
    case 5:
    case 7:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x13:
      if (DAT_0080877e != '\0') {
        if ((this_00->field_00E8 == 0) && (this_00->field_00EC == 0)) {
          this_00->field_0030 = local_1c;
        }
        if (DAT_0080c522 != 0) {
          this_00->field_00E8 = 1;
          g_currentExceptionFrame = local_a8.previous;
          return 0;
        }
        this_00->field_00EC = 1;
        g_currentExceptionFrame = local_a8.previous;
        return 0;
      }
      if (DAT_0080c522 == 0) {
        DAT_0080c50a = 1;
      }
      else {
        DAT_0080c50e = 1;
      }
      break;
    default:
      goto switchD_0054e0ae_caseD_9;
    }
    AppClassTy::PostMessage((AppClassTy *)&DAT_00807620,local_44);
  }
switchD_0054e0ae_caseD_9:
  g_currentExceptionFrame = local_a8.previous;
  return 0;
cf_common_join_0054DFAD:
  thunk_FUN_00550380(3);
  goto LAB_0054e052;
}


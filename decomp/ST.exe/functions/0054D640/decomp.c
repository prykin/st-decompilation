
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::Life */

undefined4 __thiscall STPlaySystemC::Life(STPlaySystemC *this)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  STPlaySystemC *this_00;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  DWORD *pDVar10;
  int *piVar11;
  void *unaff_EDI;
  DWORD DVar12;
  undefined4 *puVar13;
  bool bVar14;
  uint uVar15;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  DVar12 = local_1c;
  this_00 = local_24;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x411,0,iVar5,
                               &DAT_007a4ccc,s_STPlaySystemC__Life_007c853c);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x412);
    return 0xffffffff;
  }
  if ((DAT_00808783 == '\x03') && (499 < local_1c - *(int *)&local_24->field_0x7f)) {
    *(DWORD *)&local_24->field_0x7f = local_1c;
    FUN_006b6500((int)DAT_00811764,0);
    FUN_00715360(DAT_00811764,(uint)(DAT_0080877e == '\0'),'5',(char *)0x0,0,0,0xffffffff);
    FUN_006b6500((int)DAT_00811764,DAT_0080733c);
  }
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
  }
  if (DAT_00808784 == 0) {
    if (DAT_0080877e == '\0') {
      PrepareMail(this_00);
      SendMail(this_00,unaff_EDI);
      if (((this_00->field_0x38 != '\0') && (DAT_008016d8 != (void *)0x0)) &&
         (*(char *)((int)DAT_008016d8 + 0x9c) == '\0')) {
        uVar15 = 8;
        pcVar6 = (char *)FUN_006b0140(0x4275,DAT_00807618);
        thunk_FUN_0052d320(DAT_008016d8,pcVar6,uVar15);
      }
      if (*(int *)&this_00->field_0x28 != 0) {
        SystemClassTy::Life((SystemClassTy *)this_00);
        PlaySystemTy::SendClientMail((PlaySystemTy *)this_00,(int)unaff_EDI);
      }
      goto LAB_0054e02c;
    }
    if (this_00->field_0x38 == '\0') {
      if ((*(int *)&this_00->field_0x59 == 0) && (DAT_00808788 == 0)) {
        if (this_00[1].vtable == (STPlaySystemCVTable *)0x0) {
          if ((*(int *)&this_00[1].field_0x4 != 0) && (1000 < (int)(DVar12 - this_00->field_0030)))
          {
            iVar5 = FUN_006b7140(DAT_00811764);
            if (iVar5 < 2) {
              this_00[1].vtable = (STPlaySystemCVTable *)0x1;
            }
            this_00->field_0030 = DVar12;
          }
          iVar5 = *(int *)&this_00->field_0x2c + -1;
          *(int *)&this_00->field_0x2c = iVar5;
          if (iVar5 < 1) {
            pcVar6 = s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4;
            cVar2 = pcVar6[1];
            cVar3 = pcVar6[2];
            cVar4 = pcVar6[3];
            this_00->field_0x2c = pcVar6[0];
            this_00->field_0x2d = cVar2;
            this_00->field_0x2e = cVar3;
            this_00->field_0x2f = cVar4;
            thunk_FUN_00550190((int)this_00);
            PrepareMail(this_00);
            SendMail(this_00,unaff_EDI);
            SystemClassTy::Life((SystemClassTy *)this_00);
            *(undefined4 *)&this_00->field_0x28 = 0;
          }
        }
        else if (this_00->field_0x4d == '\0') {
          if ((30000 < (int)(DVar12 - this_00->field_0030)) ||
             (iVar5 = FUN_006b7140(DAT_00811764), iVar5 < 2)) {
            puVar13 = local_64;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
            local_64[3] = 1;
            local_64[4] = DAT_0080c526;
            AppClassTy::PostMessage((AppClassTy *)&DAT_00807620,local_64);
          }
        }
        else {
          if (this_00->field_003D != 0) {
            *(undefined1 *)(this_00->field_003D + 4) = this_00->field_0x4d;
            *(undefined2 *)(this_00->field_003D + 5) = 0;
            iVar5 = thunk_FUN_0054ebb0(this_00,(char *)this_00->field_003D,7);
            if (iVar5 != 0) {
              thunk_FUN_00550380(1);
              goto LAB_0054e052;
            }
          }
          this_00->field_0x4d = 0;
          iVar5 = FUN_00715360(DAT_00811764,0,'4',(char *)0x0,0,0,0xffffffff);
          if (iVar5 != 0) {
            thunk_FUN_00550380(2);
            goto LAB_0054e052;
          }
          this_00->field_0030 = DVar12;
        }
      }
      else {
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x42,&local_c,-1,0);
        iVar5 = 0;
        if (0 < local_c) {
          do {
            iVar7 = FUN_00715630(DAT_00811764,0x42,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar7 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar7 == 1) && (local_8 != (int *)0x0)) {
              FUN_006ab060(&local_8);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x43,&local_c,-1,0);
        iVar5 = 0;
        if (0 < local_c) {
          do {
            iVar7 = FUN_00715630(DAT_00811764,0x43,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar7 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar7 == 1) {
              if (local_10 == *(int *)&this_00->field_0x61) {
                *(undefined4 *)&this_00->field_0x59 = 0;
              }
              if (local_8 != (int *)0x0) {
                FUN_006ab060(&local_8);
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x33,&local_c,-1,0);
        iVar5 = 0;
        if (0 < local_c) {
          do {
            iVar7 = FUN_00715630(DAT_00811764,0x33,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar7 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar7 == 1) && (local_8 != (int *)0x0)) {
              thunk_FUN_00550830((int)local_8);
              FUN_006ab060(&local_8);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x35,&local_c,-1,0);
        iVar5 = 0;
        if (0 < local_c) {
          do {
            iVar7 = FUN_00715630(DAT_00811764,0x35,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar7 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar7 == 1) && (thunk_FUN_00550430(this_00,local_10,1), local_8 != (int *)0x0)) {
              FUN_006ab060(&local_8);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x36,&local_c,-1,0);
        iVar5 = 0;
        if (0 < local_c) {
          do {
            iVar7 = FUN_00715630(DAT_00811764,0x36,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if ((iVar7 == 1) &&
               (thunk_FUN_005505d0(this_00,local_10,local_8), local_8 != (int *)0x0)) {
              FUN_006ab060(&local_8);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x11,&local_c,-1,0);
        iVar5 = 0;
        if (0 < local_c) {
          do {
            iVar7 = FUN_00715630(DAT_00811764,0x11,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar7 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar7 == 1) {
              thunk_FUN_005504f0(this_00,local_10,0x426f,1);
              if (local_10 == *(int *)&this_00->field_0x61) {
                *(undefined4 *)&this_00->field_0x59 = 0;
              }
              if (local_8 != (int *)0x0) {
                FUN_006ab060(&local_8);
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x13,&local_c,-1,0);
        iVar5 = 0;
        if (0 < local_c) {
          do {
            iVar7 = FUN_00715630(DAT_00811764,0x13,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar7 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar7 == 1) {
              if (local_10 == *(int *)&this_00->field_0x61) {
                *(undefined4 *)&this_00->field_0x59 = 0;
              }
              if (local_8 != (int *)0x0) {
                FUN_006ab060(&local_8);
              }
              if (*(int *)&this_00[1].field_0x4 != 0) {
                thunk_FUN_005504f0(this_00,local_10,0x4274,0);
                this_00[1].vtable = (STPlaySystemCVTable *)0x1;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_c);
        }
        if ((*(int *)&this_00->field_0x59 != 0) &&
           (uVar15 = *(int *)&this_00->field_0x5d + 1, *(uint *)&this_00->field_0x5d = uVar15,
           2000 < uVar15)) {
          FUN_00715360(DAT_00811764,0,'D',(char *)0x0,0,0,0xffffffff);
          *(undefined4 *)&this_00->field_0x59 = 0;
        }
      }
    }
    else {
      Library::DKW::DDX::FUN_006b7510(DAT_00811764,-1,&local_20,-1,0);
      local_10 = 0;
      if (0 < local_20) {
        do {
          iVar5 = FUN_00715630(DAT_00811764,-1,&local_14,&local_18,&local_8,(uint *)0x0,-1,0);
          if (iVar5 == 1) {
            switch(local_14) {
            case 0x11:
              iVar5 = 0;
              if (DAT_00808aaf != 0) {
                pcVar6 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar6 + -6) == local_18) && (*pcVar6 != '\0')) {
                    uVar8 = FUN_006b0140(0x426f,DAT_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,pcVar6 + -0x46,uVar8);
                    if (DAT_008016d8 != (void *)0x0) {
                      thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,8);
                    }
                    thunk_FUN_005508f0(this_00,local_18);
                    break;
                  }
                  iVar5 = iVar5 + 1;
                  pcVar6 = pcVar6 + 0x9c;
                } while (iVar5 < (int)(uint)DAT_00808aaf);
              }
              uVar9 = 0;
              uVar15 = *(uint *)(DAT_0080c4fe + 0xc);
              if (0 < (int)uVar15) {
                bVar14 = uVar15 != 0;
                do {
                  if (bVar14) {
                    piVar11 = (int *)(*(int *)(DAT_0080c4fe + 8) * uVar9 +
                                     *(int *)(DAT_0080c4fe + 0x1c));
                  }
                  else {
                    piVar11 = (int *)0x0;
                  }
                  if ((piVar11 != (int *)0x0) && (*piVar11 == local_18)) {
                    FUN_006b0c70(DAT_0080c4fe,uVar9);
                    break;
                  }
                  uVar9 = uVar9 + 1;
                  bVar14 = uVar9 < uVar15;
                } while ((int)uVar9 < (int)uVar15);
              }
              break;
            case 0x33:
              thunk_FUN_00550830((int)local_8);
              break;
            case 0x35:
              uVar9 = 0;
              uVar15 = *(uint *)(DAT_0080c4fe + 0xc);
              if (0 < (int)uVar15) {
                bVar14 = uVar15 != 0;
                do {
                  if (bVar14) {
                    piVar11 = (int *)(*(int *)(DAT_0080c4fe + 8) * uVar9 +
                                     *(int *)(DAT_0080c4fe + 0x1c));
                  }
                  else {
                    piVar11 = (int *)0x0;
                  }
                  if ((piVar11 != (int *)0x0) && (*piVar11 == local_18)) {
                    FUN_006b0c70(DAT_0080c4fe,uVar9);
                    iVar5 = 0;
                    if (DAT_00808aaf != 0) {
                      pcVar6 = &DAT_00808af6;
                      do {
                        if ((*(int *)(pcVar6 + -6) == local_18) && (*pcVar6 != '\0')) {
                          uVar8 = FUN_006b0140(0x426e,DAT_00807618);
                          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,pcVar6 + -0x46,uVar8);
                          if (DAT_008016d8 != (void *)0x0) {
                            thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,8);
                          }
                        }
                        iVar5 = iVar5 + 1;
                        pcVar6 = pcVar6 + 0x9c;
                      } while (iVar5 < (int)(uint)DAT_00808aaf);
                    }
                    break;
                  }
                  uVar9 = uVar9 + 1;
                  bVar14 = uVar9 < uVar15;
                } while ((int)uVar9 < (int)uVar15);
              }
            case 0x1a:
              iVar5 = 0;
              if (DAT_00808aaf != 0) {
                pcVar6 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar6 + -6) == local_18) && (*pcVar6 != '\0')) {
                    *(DWORD *)(pcVar6 + 2) = local_1c;
                  }
                  iVar5 = iVar5 + 1;
                  pcVar6 = pcVar6 + 0x9c;
                } while (iVar5 < (int)(uint)DAT_00808aaf);
              }
            }
            if (local_8 != (int *)0x0) {
              FUN_006ab060(&local_8);
            }
          }
          local_10 = local_10 + 1;
          DVar12 = local_1c;
        } while (local_10 < local_20);
      }
      if ((DAT_008016d8 != (void *)0x0) && (*(char *)((int)DAT_008016d8 + 0x9c) == '\0')) {
        uVar15 = 8;
        pcVar6 = (char *)FUN_006b0140(0x426a,DAT_00807618);
        thunk_FUN_0052d320(DAT_008016d8,pcVar6,uVar15);
      }
      if ((*(int *)(DAT_0080c4fe + 0xc) == 0) ||
         (59999 < (int)(DVar12 - *(int *)&this_00->field_0xbc))) {
        if (DAT_008016d8 != (void *)0x0) {
          uVar15 = 8;
          pcVar6 = (char *)FUN_006b0140(0x4269,DAT_00807618);
          thunk_FUN_0052d320(DAT_008016d8,pcVar6,uVar15);
        }
        this_00->field_0x38 = 0;
      }
      if ((this_00->field_0x38 == '\0') && (iVar5 = 0, DAT_00808aaf != 0)) {
        pDVar10 = &DAT_00808af8;
        do {
          *pDVar10 = DVar12;
          iVar5 = iVar5 + 1;
          pDVar10 = pDVar10 + 0x27;
          DVar12 = local_1c;
        } while (iVar5 < (int)(uint)DAT_00808aaf);
      }
    }
    if (((((DAT_00808783 == '\x03') && (DAT_00808788 == 0)) &&
         (this_00[1].vtable == (STPlaySystemCVTable *)0x0)) &&
        ((this_00->field_0x38 == '\0' && (*(int *)&this_00->field_0x59 == 0)))) &&
       (iVar5 = 0, DAT_00808aaf != 0)) {
      piVar11 = &DAT_00808af0;
      do {
        if (((piVar11 != (int *)0x40) && (*piVar11 != 0)) &&
           ((*piVar11 != DAT_0080877f &&
            (((*(char *)((int)piVar11 + 6) != '\0' &&
              ((&DAT_00809950)[*(byte *)(piVar11 + 1)] == '\0')) &&
             (iVar7 = FUN_006e51b0(0x807620), 30000 < iVar7 - piVar11[2])))))) {
          if (*piVar11 != *(int *)&this_00[1].field_0xc) {
            thunk_FUN_005503c0(this_00,*piVar11);
          }
          break;
        }
        iVar5 = iVar5 + 1;
        piVar11 = piVar11 + 0x27;
      } while (iVar5 < (int)(uint)DAT_00808aaf);
    }
  }
  else {
    PrepareMail(this_00);
    SendMail(this_00,unaff_EDI);
    if (*(int *)&this_00->field_0x28 != 0) {
      SystemClassTy::Life((SystemClassTy *)this_00);
    }
LAB_0054e02c:
    *(undefined4 *)&this_00->field_0x28 = 0;
  }
  if (DAT_00808794 != 0) {
    thunk_FUN_0056f250(&DAT_00807620,'\0',0,(char *)0x0);
    DAT_00808794 = 0;
  }
LAB_0054e052:
  if ((DAT_0080874d < 8) && ((&DAT_00809950)[DAT_0080874d] != '\0')) {
    puVar13 = local_44;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
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
        if ((this_00[1].vtable == (STPlaySystemCVTable *)0x0) &&
           (*(int *)&this_00[1].field_0x4 == 0)) {
          this_00->field_0030 = local_1c;
        }
        if (DAT_0080c522 != 0) {
          this_00[1].vtable = (STPlaySystemCVTable *)0x1;
          g_currentExceptionFrame = local_a8.previous;
          return 0;
        }
        *(undefined4 *)&this_00[1].field_0x4 = 1;
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


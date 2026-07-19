
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::Life */

undefined4 __thiscall STPlaySystemC::Life(STPlaySystemC *this)

{
  char cVar1;
  code *pcVar2;
  SystemClassTy *this_00;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 unaff_ESI;
  DWORD *pDVar9;
  int *piVar10;
  void *unaff_EDI;
  undefined4 *puVar11;
  bool bVar12;
  uint uVar13;
  InternalExceptionFrame local_a8;
  undefined4 local_64 [8];
  undefined4 local_44 [8];
  SystemClassTy *local_24;
  int local_20;
  void *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_24 = (SystemClassTy *)this;
  local_1c = (void *)timeGetTime();
  if (DAT_0080c512 != 0) {
    return 0;
  }
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar3 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pvVar8 = local_1c;
  this_00 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x411,0,iVar3,
                               &DAT_007a4ccc,s_STPlaySystemC__Life_007c853c);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x412);
    return 0xffffffff;
  }
  if ((DAT_00808783 == '\x03') &&
     (499 < (uint)((int)local_1c - *(int *)((int)&local_24[3].parentSystem + 3)))) {
    *(void **)((int)&local_24[3].parentSystem + 3) = local_1c;
    FUN_006b6500((int)DAT_00811764,0);
    FUN_00715360(DAT_00811764,(uint)(DAT_0080877e == '\0'),'5',(char *)0x0,0,0,0xffffffff);
    FUN_006b6500((int)DAT_00811764,DAT_0080733c);
  }
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
  }
  if (DAT_00808784 == 0) {
    if (DAT_0080877e == '\0') {
      PrepareMail((STPlaySystemC *)this_00);
      SendMail((STPlaySystemC *)this_00,unaff_EDI);
      if (((*(char *)&this_00[1].app != '\0') && (DAT_008016d8 != (void *)0x0)) &&
         (*(char *)((int)DAT_008016d8 + 0x9c) == '\0')) {
        uVar13 = 8;
        pcVar4 = (char *)FUN_006b0140(0x4275,DAT_00807618);
        thunk_FUN_0052d320(DAT_008016d8,pcVar4,uVar13);
      }
      if (this_00[1].nextMessages != (void *)0x0) {
        SystemClassTy::Life(this_00);
        PlaySystemTy::SendClientMail((PlaySystemTy *)this_00,(int)unaff_EDI);
      }
      goto LAB_0054e02c;
    }
    if (*(char *)&this_00[1].app == '\0') {
      if ((*(int *)((int)&this_00[2].app + 1) == 0) && (DAT_00808788 == 0)) {
        if (this_00[7].nextMessages == (void *)0x0) {
          if ((this_00[7].objectLock != (void *)0x0) &&
             (1000 < (int)pvVar8 - (int)this_00[1].objects)) {
            iVar3 = FUN_006b7140(DAT_00811764);
            if (iVar3 < 2) {
              this_00[7].nextMessages = (void *)0x1;
            }
            this_00[1].objects = pvVar8;
          }
          pvVar8 = (void *)((int)this_00[1].objectLock + -1);
          this_00[1].objectLock = pvVar8;
          if ((int)pvVar8 < 1) {
            this_00[1].objectLock =
                 *(void **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4);
            thunk_FUN_00550190((int)this_00);
            PrepareMail((STPlaySystemC *)this_00);
            SendMail((STPlaySystemC *)this_00,unaff_EDI);
            SystemClassTy::Life(this_00);
            this_00[1].nextMessages = (void *)0x0;
          }
        }
        else {
          cVar1 = *(char *)((int)&this_00[2].objectLock + 1);
          if (cVar1 == '\0') {
            if ((30000 < (int)pvVar8 - (int)this_00[1].objects) ||
               (iVar3 = FUN_006b7140(DAT_00811764), iVar3 < 2)) {
              puVar11 = local_64;
              for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              }
              local_64[3] = 1;
              local_64[4] = DAT_0080c526;
              AppClassTy::PostMessage((AppClassTy *)&DAT_00807620,local_64);
            }
          }
          else {
            iVar3 = *(int *)((int)&this_00[1].parentSystem + 1);
            if (iVar3 != 0) {
              *(char *)(iVar3 + 4) = cVar1;
              *(undefined2 *)(*(int *)((int)&this_00[1].parentSystem + 1) + 5) = 0;
              iVar3 = thunk_FUN_0054ebb0(this_00,*(char **)((int)&this_00[1].parentSystem + 1),7);
              if (iVar3 != 0) {
                thunk_FUN_00550380(1);
                goto LAB_0054e052;
              }
            }
            *(undefined1 *)((int)&this_00[2].objectLock + 1) = 0;
            iVar3 = FUN_00715360(DAT_00811764,0,'4',(char *)0x0,0,0,0xffffffff);
            if (iVar3 != 0) {
              thunk_FUN_00550380(2);
              goto LAB_0054e052;
            }
            this_00[1].objects = pvVar8;
          }
        }
      }
      else {
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x42,&local_c,-1,0);
        iVar3 = 0;
        if (0 < local_c) {
          do {
            iVar5 = FUN_00715630(DAT_00811764,0x42,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto LAB_0054dfad;
            if ((iVar5 == 1) && (local_8 != (int *)0x0)) {
              FUN_006ab060(&local_8);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x43,&local_c,-1,0);
        iVar3 = 0;
        if (0 < local_c) {
          do {
            iVar5 = FUN_00715630(DAT_00811764,0x43,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto LAB_0054dfad;
            if (iVar5 == 1) {
              if (local_10 == *(int *)((int)&this_00[3].vtable + 1)) {
                *(undefined4 *)((int)&this_00[2].app + 1) = 0;
              }
              if (local_8 != (int *)0x0) {
                FUN_006ab060(&local_8);
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x33,&local_c,-1,0);
        iVar3 = 0;
        if (0 < local_c) {
          do {
            iVar5 = FUN_00715630(DAT_00811764,0x33,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto LAB_0054dfad;
            if ((iVar5 == 1) && (local_8 != (int *)0x0)) {
              thunk_FUN_00550830((int)local_8);
              FUN_006ab060(&local_8);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x35,&local_c,-1,0);
        iVar3 = 0;
        if (0 < local_c) {
          do {
            iVar5 = FUN_00715630(DAT_00811764,0x35,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto LAB_0054dfad;
            if ((iVar5 == 1) && (thunk_FUN_00550430(this_00,local_10,1), local_8 != (int *)0x0)) {
              FUN_006ab060(&local_8);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x36,&local_c,-1,0);
        iVar3 = 0;
        if (0 < local_c) {
          do {
            iVar5 = FUN_00715630(DAT_00811764,0x36,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if ((iVar5 == 1) &&
               (thunk_FUN_005505d0(this_00,local_10,local_8), local_8 != (int *)0x0)) {
              FUN_006ab060(&local_8);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x11,&local_c,-1,0);
        iVar3 = 0;
        if (0 < local_c) {
          do {
            iVar5 = FUN_00715630(DAT_00811764,0x11,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto LAB_0054dfad;
            if (iVar5 == 1) {
              thunk_FUN_005504f0(this_00,local_10,0x426f,1);
              if (local_10 == *(int *)((int)&this_00[3].vtable + 1)) {
                *(undefined4 *)((int)&this_00[2].app + 1) = 0;
              }
              if (local_8 != (int *)0x0) {
                FUN_006ab060(&local_8);
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,0x13,&local_c,-1,0);
        iVar3 = 0;
        if (0 < local_c) {
          do {
            iVar5 = FUN_00715630(DAT_00811764,0x13,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto LAB_0054dfad;
            if (iVar5 == 1) {
              if (local_10 == *(int *)((int)&this_00[3].vtable + 1)) {
                *(undefined4 *)((int)&this_00[2].app + 1) = 0;
              }
              if (local_8 != (int *)0x0) {
                FUN_006ab060(&local_8);
              }
              if (this_00[7].objectLock != (void *)0x0) {
                thunk_FUN_005504f0(this_00,local_10,0x4274,0);
                this_00[7].nextMessages = (void *)0x1;
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_c);
        }
        if ((*(int *)((int)&this_00[2].app + 1) != 0) &&
           (uVar13 = *(int *)((int)&this_00[2].parentSystem + 1) + 1,
           *(uint *)((int)&this_00[2].parentSystem + 1) = uVar13, 2000 < uVar13)) {
          FUN_00715360(DAT_00811764,0,'D',(char *)0x0,0,0,0xffffffff);
          *(undefined4 *)((int)&this_00[2].app + 1) = 0;
        }
      }
    }
    else {
      Library::DKW::DDX::FUN_006b7510(DAT_00811764,-1,&local_20,-1,0);
      local_10 = 0;
      if (0 < local_20) {
        do {
          iVar3 = FUN_00715630(DAT_00811764,-1,&local_14,&local_18,&local_8,(uint *)0x0,-1,0);
          if (iVar3 == 1) {
            switch(local_14) {
            case 0x11:
              iVar3 = 0;
              if (DAT_00808aaf != 0) {
                pcVar4 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar4 + -6) == local_18) && (*pcVar4 != '\0')) {
                    uVar6 = FUN_006b0140(0x426f,DAT_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,pcVar4 + -0x46,uVar6);
                    if (DAT_008016d8 != (void *)0x0) {
                      thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,8);
                    }
                    thunk_FUN_005508f0(this_00,local_18);
                    break;
                  }
                  iVar3 = iVar3 + 1;
                  pcVar4 = pcVar4 + 0x9c;
                } while (iVar3 < (int)(uint)DAT_00808aaf);
              }
              uVar7 = 0;
              uVar13 = *(uint *)(DAT_0080c4fe + 0xc);
              if (0 < (int)uVar13) {
                bVar12 = uVar13 != 0;
                do {
                  if (bVar12) {
                    piVar10 = (int *)(*(int *)(DAT_0080c4fe + 8) * uVar7 +
                                     *(int *)(DAT_0080c4fe + 0x1c));
                  }
                  else {
                    piVar10 = (int *)0x0;
                  }
                  if ((piVar10 != (int *)0x0) && (*piVar10 == local_18)) {
                    FUN_006b0c70(DAT_0080c4fe,uVar7);
                    break;
                  }
                  uVar7 = uVar7 + 1;
                  bVar12 = uVar7 < uVar13;
                } while ((int)uVar7 < (int)uVar13);
              }
              break;
            case 0x33:
              thunk_FUN_00550830((int)local_8);
              break;
            case 0x35:
              uVar7 = 0;
              uVar13 = *(uint *)(DAT_0080c4fe + 0xc);
              if (0 < (int)uVar13) {
                bVar12 = uVar13 != 0;
                do {
                  if (bVar12) {
                    piVar10 = (int *)(*(int *)(DAT_0080c4fe + 8) * uVar7 +
                                     *(int *)(DAT_0080c4fe + 0x1c));
                  }
                  else {
                    piVar10 = (int *)0x0;
                  }
                  if ((piVar10 != (int *)0x0) && (*piVar10 == local_18)) {
                    FUN_006b0c70(DAT_0080c4fe,uVar7);
                    iVar3 = 0;
                    if (DAT_00808aaf != 0) {
                      pcVar4 = &DAT_00808af6;
                      do {
                        if ((*(int *)(pcVar4 + -6) == local_18) && (*pcVar4 != '\0')) {
                          uVar6 = FUN_006b0140(0x426e,DAT_00807618);
                          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,pcVar4 + -0x46,uVar6);
                          if (DAT_008016d8 != (void *)0x0) {
                            thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,8);
                          }
                        }
                        iVar3 = iVar3 + 1;
                        pcVar4 = pcVar4 + 0x9c;
                      } while (iVar3 < (int)(uint)DAT_00808aaf);
                    }
                    break;
                  }
                  uVar7 = uVar7 + 1;
                  bVar12 = uVar7 < uVar13;
                } while ((int)uVar7 < (int)uVar13);
              }
            case 0x1a:
              iVar3 = 0;
              if (DAT_00808aaf != 0) {
                pcVar4 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar4 + -6) == local_18) && (*pcVar4 != '\0')) {
                    *(void **)(pcVar4 + 2) = local_1c;
                  }
                  iVar3 = iVar3 + 1;
                  pcVar4 = pcVar4 + 0x9c;
                } while (iVar3 < (int)(uint)DAT_00808aaf);
              }
            }
            if (local_8 != (int *)0x0) {
              FUN_006ab060(&local_8);
            }
          }
          local_10 = local_10 + 1;
          pvVar8 = local_1c;
        } while (local_10 < local_20);
      }
      if ((DAT_008016d8 != (void *)0x0) && (*(char *)((int)DAT_008016d8 + 0x9c) == '\0')) {
        uVar13 = 8;
        pcVar4 = (char *)FUN_006b0140(0x426a,DAT_00807618);
        thunk_FUN_0052d320(DAT_008016d8,pcVar4,uVar13);
      }
      if ((*(int *)(DAT_0080c4fe + 0xc) == 0) ||
         (59999 < (int)pvVar8 - (int)this_00[5].parentSystem)) {
        if (DAT_008016d8 != (void *)0x0) {
          uVar13 = 8;
          pcVar4 = (char *)FUN_006b0140(0x4269,DAT_00807618);
          thunk_FUN_0052d320(DAT_008016d8,pcVar4,uVar13);
        }
        *(undefined1 *)&this_00[1].app = 0;
      }
      if ((*(char *)&this_00[1].app == '\0') && (iVar3 = 0, DAT_00808aaf != 0)) {
        pDVar9 = &DAT_00808af8;
        do {
          *pDVar9 = (DWORD)pvVar8;
          iVar3 = iVar3 + 1;
          pDVar9 = pDVar9 + 0x27;
          pvVar8 = local_1c;
        } while (iVar3 < (int)(uint)DAT_00808aaf);
      }
    }
    if (((((DAT_00808783 == '\x03') && (DAT_00808788 == 0)) &&
         (this_00[7].nextMessages == (void *)0x0)) &&
        ((*(char *)&this_00[1].app == '\0' && (*(int *)((int)&this_00[2].app + 1) == 0)))) &&
       (iVar3 = 0, DAT_00808aaf != 0)) {
      piVar10 = &DAT_00808af0;
      do {
        if (((piVar10 != (int *)0x40) && (*piVar10 != 0)) &&
           ((*piVar10 != DAT_0080877f &&
            (((*(char *)((int)piVar10 + 6) != '\0' &&
              ((&DAT_00809950)[*(byte *)(piVar10 + 1)] == '\0')) &&
             (iVar5 = FUN_006e51b0(0x807620), 30000 < iVar5 - piVar10[2])))))) {
          if (*piVar10 != this_00[7].systemId) {
            thunk_FUN_005503c0(this_00,*piVar10);
          }
          break;
        }
        iVar3 = iVar3 + 1;
        piVar10 = piVar10 + 0x27;
      } while (iVar3 < (int)(uint)DAT_00808aaf);
    }
  }
  else {
    PrepareMail((STPlaySystemC *)this_00);
    SendMail((STPlaySystemC *)this_00,unaff_EDI);
    if (this_00[1].nextMessages != (void *)0x0) {
      SystemClassTy::Life(this_00);
    }
LAB_0054e02c:
    this_00[1].nextMessages = (void *)0x0;
  }
  if (DAT_00808794 != 0) {
    thunk_FUN_0056f250(&DAT_00807620,'\0',0,(char *)0x0);
    DAT_00808794 = 0;
  }
LAB_0054e052:
  if ((DAT_0080874d < 8) && ((&DAT_00809950)[DAT_0080874d] != '\0')) {
    puVar11 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
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
        if ((this_00[7].nextMessages == (void *)0x0) && (this_00[7].objectLock == (void *)0x0)) {
          this_00[1].objects = local_1c;
        }
        if (DAT_0080c522 != 0) {
          this_00[7].nextMessages = (void *)0x1;
          g_currentExceptionFrame = local_a8.previous;
          return 0;
        }
        this_00[7].objectLock = (void *)0x1;
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
LAB_0054dfad:
  thunk_FUN_00550380(3);
  goto LAB_0054e052;
}


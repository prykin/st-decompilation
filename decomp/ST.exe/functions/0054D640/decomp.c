#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::Life */

undefined4 __thiscall STPlaySystemC::Life(STPlaySystemC *this)

{
  STPlaySystemC *this_00;
  int local_EAX_74;
  char *pcVar2;
  char *pcVar3;
  char *local_EAX_889;
  char *local_EAX_959;
  int local_EAX_1108;
  int local_EAX_1151;
  int local_EAX_1204;
  int iVar2;
  int iVar4;
  DWORD DVar5_mg1;
  char *pcVar4;
  int iVar5;
  uint uVar5;
  uint uVar6;
  int iVar7;
  DWORD *pDVar8;
  int *piVar9;
  DWORD DVar10;
  bool bVar12;
  uint uVar13;
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
  /* ST_CALLSITE[0054D64F]: CALL dword ptr [0x0085bedc] */
  local_1c = timeGetTime();
  if (DAT_0080c512 != 0) {
    return 0;
  }
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  local_EAX_74 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0);
  DVar10 = local_1c;
  this_00 = local_24;
  if (local_EAX_74 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x411,0,local_EAX_74,
                               "%s","STPlaySystemC::Life");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_74,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x412);
    return 0xffffffff;
  }
  if ((DAT_00808783 == '\x03') && (499 < local_1c - local_24->field_007F)) {
    local_24->field_007F = local_1c;
    FUN_006b6500(g_int_00811764,0);
    FUN_00715360(g_int_00811764,(uint)(DAT_0080877e == '\0'),'5',nullptr,0,0,0xffffffff);
    FUN_006b6500(g_int_00811764,DAT_0080733c);
  }
  if (DAT_008067a0 != '\0') {
    /* ST_CALLSITE[0054D711]: CALL dword ptr [0x0085c05c] */
    CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
  }
  if (DAT_00808784 == 0) {
    if (DAT_0080877e == '\0') {
      /* ST_CALLSITE[0054DFD4]: CALL 0x00401e51; direct=00401E51 STPlaySystemC::PrepareMail */
      PrepareMail(this_00);
      /* ST_CALLSITE[0054DFDB]: CALL 0x0040174e; direct=0040174E STPlaySystemC::SendMail */
      SendMail(this_00);
      if (((this_00->field_0038 != '\0') && (g_popUp_008016D8 != nullptr)) &&
         (g_popUp_008016D8->field_009C == '\0')) {
        uVar13 = 8;
        pcVar4 = LoadResourceString(0x4275,g_hINSTANCE_00807618);
        thunk_FUN_0052d320(g_popUp_008016D8,pcVar4,uVar13);
      }
      if (this_00->field_0028 != 0) {
        SystemClassTy::Life((SystemClassTy *)this_00);
        /* ST_CALLSITE[0054E027]: CALL 0x00405420; direct=00405420 PlaySystemTy::SendClientMail */
        PlaySystemTy::SendClientMail((PlaySystemTy *)this_00);
      }
      goto LAB_0054e02c;
    }
    if (this_00->field_0038 == '\0') {
      if ((this_00->field_0059 == 0) && (DAT_00808788 == 0)) {
        if (this_00->field_00E8 == 0) {
          if ((this_00->field_00EC != 0) && (1000 < (int)(DVar10 - this_00->field_0030))) {
            iVar2 = FUN_006b7140(g_int_00811764);
            if (iVar2 < 2) {
              this_00->field_00E8 = 1;
            }
            this_00->field_0030 = DVar10;
          }
          iVar7 = this_00->field_002C + -1;
          this_00->field_002C = iVar7;
          if (iVar7 < 1) {
            this_00->field_002C =
                 *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4);
            /* ST_CALLSITE[0054DB8B]: CALL 0x00404b15; direct=00404B15 STPlaySystemC::sub_00550190 */
            sub_00550190(this_00);
            /* ST_CALLSITE[0054DB92]: CALL 0x00401e51; direct=00401E51 STPlaySystemC::PrepareMail */
            PrepareMail(this_00);
            /* ST_CALLSITE[0054DB99]: CALL 0x0040174e; direct=0040174E STPlaySystemC::SendMail */
            SendMail(this_00);
            SystemClassTy::Life((SystemClassTy *)this_00);
            this_00->field_0028 = 0;
          }
        }
        else if (this_00->field_004D == '\0') {
          if ((30000 < (int)(DVar10 - this_00->field_0030)) ||
             (local_EAX_1204 = FUN_006b7140(g_int_00811764), local_EAX_1204 < 2)) {
            memset(local_64, 0, 0x20); /* compiler bulk-zero initialization */
            local_64[3] = 1;
            local_64[4] = DAT_0080c526;
            AppClassTy::PostMessage((AppClassTy *)&DAT_00807620,local_64);
          }
        }
        else {
          if (this_00->field_003D != nullptr) {
            this_00->field_003D->field_0004 = this_00->field_004D;
            this_00->field_003D->field_0005 = 0;
            /* ST_CALLSITE[0054DA94]: CALL 0x00405443; direct=00405443 STPlaySystemC::sub_0054EBB0 */
            local_EAX_1108 = sub_0054EBB0(this_00,(char *)this_00->field_003D,7);
            if (local_EAX_1108 != 0) {
              thunk_FUN_00550380(1);
              goto LAB_0054e052;
            }
          }
          this_00->field_004D = 0;
          local_EAX_1151 = FUN_00715360(g_int_00811764,0,'4',nullptr,0,0,0xffffffff);
          if (local_EAX_1151 != 0) {
            thunk_FUN_00550380(2);
            goto LAB_0054e052;
          }
          this_00->field_0030 = DVar10;
        }
      }
      else {
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x42,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x42,&local_14,&local_10,&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar4 == 1) && (local_8 != nullptr)) {
              FreeAndNull(&local_8);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x43,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x43,&local_14,&local_10,&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar4 == 1) {
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != nullptr) {
                FreeAndNull(&local_8);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x33,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x33,&local_14,&local_10,&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar4 == 1) && (local_8 != nullptr)) {
              thunk_FUN_00550830((int)local_8);
              FreeAndNull(&local_8);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x35,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x35,&local_14,&local_10,&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar4 == 1) && (thunk_FUN_00550430(this_00,local_10,1), local_8 != nullptr)) {
              FreeAndNull(&local_8);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x36,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x36,&local_14,&local_10,&local_8,nullptr,-1,0);
            /* ST_CALLSITE[0054DDA8]: CALL 0x00401456; direct=00401456 STPlaySystemC::sub_005505D0 */
            if ((iVar4 == 1) && (sub_005505D0(this_00,local_10,local_8), local_8 != nullptr)) {
              FreeAndNull(&local_8);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x11,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x11,&local_14,&local_10,&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar4 == 1) {
              thunk_FUN_005504f0(this_00,local_10,0x426f,1);
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != nullptr) {
                FreeAndNull(&local_8);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x13,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x13,&local_14,&local_10,&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar4 == 1) {
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != nullptr) {
                FreeAndNull(&local_8);
              }
              if (this_00->field_00EC != 0) {
                thunk_FUN_005504f0(this_00,local_10,0x4274,0);
                this_00->field_00E8 = 1;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        if ((this_00->field_0059 != 0) &&
           (uVar13 = this_00->field_005D + 1, this_00->field_005D = uVar13, 2000 < uVar13)) {
          FUN_00715360(g_int_00811764,0,'D',nullptr,0,0,0xffffffff);
          this_00->field_0059 = 0;
        }
      }
    }
    else {
      Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_20,-1,0);
      local_10 = 0;
      if (0 < local_20) {
        do {
          iVar7 = Library::Ourlib::CONNECT::FUN_00715630
                            (g_int_00811764,-1,&local_14,&local_18,&local_8,nullptr,-1,0);
          if (iVar7 == 1) {
            switch(local_14) {
            case 0x11:
              iVar7 = 0;
              if (DAT_00808aaf != 0) {
                pcVar3 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar3 + -6) == local_18) && (*pcVar3 != '\0')) {
                    pcVar2 = LoadResourceString(0x426f,g_hINSTANCE_00807618);
                    /* ST_CALLSITE[0054D904]: CALL dword ptr [0x0085bde8] */
                    wsprintfA((LPSTR)&DAT_0080f33a,"%s %s",pcVar3 + -0x46,pcVar2);
                    if (g_popUp_008016D8 != nullptr) {
                      thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
                    }
                    thunk_FUN_005508f0(this_00,local_18);
                    break;
                  }
                  iVar7 = iVar7 + 1;
                  pcVar3 = pcVar3 + 0x9c;
                } while (iVar7 < (int)(uint)DAT_00808aaf);
              }
              uVar6 = 0;
              uVar13 = g_array_0080C4FE->count;
              if (0 < (int)uVar13) {
                bVar12 = uVar13 != 0;
                do {
                  if (bVar12) {
                    piVar9 = DArrayAt<int>(g_array_0080C4FE, uVar6);
                  }
                  else {
                    piVar9 = nullptr;
                  }
                  if ((piVar9 != nullptr) && (*piVar9 == local_18)) {
                    DArrayRemoveAt(g_array_0080C4FE,uVar6);
                    break;
                  }
                  uVar6 = uVar6 + 1;
                  bVar12 = uVar6 < uVar13;
                } while ((int)uVar6 < (int)uVar13);
              }
              break;
            case 0x33:
              thunk_FUN_00550830((int)local_8);
              break;
            case 0x35:
              uVar6 = 0;
              uVar13 = g_array_0080C4FE->count;
              if (0 < (int)uVar13) {
                bVar12 = uVar13 != 0;
                do {
                  if (bVar12) {
                    piVar9 = DArrayAt<int>(g_array_0080C4FE, uVar6);
                  }
                  else {
                    piVar9 = nullptr;
                  }
                  if ((piVar9 != nullptr) && (*piVar9 == local_18)) {
                    DArrayRemoveAt(g_array_0080C4FE,uVar6);
                    iVar7 = 0;
                    if (DAT_00808aaf != 0) {
                      pcVar3 = &DAT_00808af6;
                      do {
                        if ((*(int *)(pcVar3 + -6) == local_18) && (*pcVar3 != '\0')) {
                          pcVar2 = LoadResourceString(0x426e,g_hINSTANCE_00807618);
                          /* ST_CALLSITE[0054D847]: CALL dword ptr [0x0085bde8] */
                          wsprintfA((LPSTR)&DAT_0080f33a,"%s %s",pcVar3 + -0x46,pcVar2);
                          if (g_popUp_008016D8 != nullptr) {
                            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
                          }
                        }
                        iVar7 = iVar7 + 1;
                        pcVar3 = pcVar3 + 0x9c;
                      } while (iVar7 < (int)(uint)DAT_00808aaf);
                    }
                    break;
                  }
                  uVar6 = uVar6 + 1;
                  bVar12 = uVar6 < uVar13;
                } while ((int)uVar6 < (int)uVar13);
              }
            case 0x1a:
              iVar7 = 0;
              if (DAT_00808aaf != 0) {
                pcVar3 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar3 + -6) == local_18) && (*pcVar3 != '\0')) {
                    *(DWORD *)(pcVar3 + 2) = local_1c;
                  }
                  iVar7 = iVar7 + 1;
                  pcVar3 = pcVar3 + 0x9c;
                } while (iVar7 < (int)(uint)DAT_00808aaf);
              }
            }
            if (local_8 != nullptr) {
              FreeAndNull(&local_8);
            }
          }
          local_10 = local_10 + 1;
          DVar10 = local_1c;
        } while (local_10 < local_20);
      }
      if ((g_popUp_008016D8 != nullptr) && (g_popUp_008016D8->field_009C == '\0')) {
        uVar13 = 8;
        local_EAX_889 = LoadResourceString(0x426a,g_hINSTANCE_00807618);
        thunk_FUN_0052d320(g_popUp_008016D8,local_EAX_889,uVar13);
      }
      if ((g_array_0080C4FE->count == 0) || (59999 < (int)(DVar10 - this_00->field_00BC))) {
        if (g_popUp_008016D8 != nullptr) {
          uVar13 = 8;
          local_EAX_959 = LoadResourceString(0x4269,g_hINSTANCE_00807618);
          thunk_FUN_0052d320(g_popUp_008016D8,local_EAX_959,uVar13);
        }
        this_00->field_0038 = 0;
      }
      if ((this_00->field_0038 == '\0') && (iVar7 = 0, DAT_00808aaf != 0)) {
        pDVar8 = &DAT_00808af8;
        do {
          *pDVar8 = DVar10;
          iVar7 = iVar7 + 1;
          pDVar8 = pDVar8 + 0x27;
          DVar10 = local_1c;
        } while (iVar7 < (int)(uint)DAT_00808aaf);
      }
    }
    if (((((DAT_00808783 == '\x03') && (DAT_00808788 == 0)) && (this_00->field_00E8 == 0)) &&
        ((this_00->field_0038 == '\0' && (this_00->field_0059 == 0)))) &&
       (iVar7 = 0, DAT_00808aaf != 0)) {
      piVar9 = &DAT_00808af0;
      do {
        if (((piVar9 != (int *)0x40) && (*piVar9 != 0)) &&
           ((*piVar9 != DAT_0080877f &&
            (((STField<char>(piVar9,6) != '\0' &&
              ((&DAT_00809950)[((byte *)piVar9)[1]] == '\0')) &&
             (DVar5_mg1 = STAppC::sub_006E51B0((STAppC *)&DAT_00807620),
             30000 < (int)(DVar5_mg1 - piVar9[2]))))))) {
          if (*piVar9 != this_00->field_00F4) {
            thunk_FUN_005503c0(this_00,*piVar9);
          }
          break;
        }
        iVar7 = iVar7 + 1;
        piVar9 = piVar9 + 0x27;
      } while (iVar7 < (int)(uint)DAT_00808aaf);
    }
  }
  else {
    /* ST_CALLSITE[0054D721]: CALL 0x00401e51; direct=00401E51 STPlaySystemC::PrepareMail */
    PrepareMail(this_00);
    /* ST_CALLSITE[0054D728]: CALL 0x0040174e; direct=0040174E STPlaySystemC::SendMail */
    SendMail(this_00);
    if (this_00->field_0028 != 0) {
      SystemClassTy::Life((SystemClassTy *)this_00);
    }
LAB_0054e02c:
    this_00->field_0028 = 0;
  }
  if (DAT_00808794 != 0) {
    thunk_FUN_0056f250(&DAT_00807620,'\0',0,nullptr);
    DAT_00808794 = 0;
  }
LAB_0054e052:
  if ((DAT_0080874d < 8) && ((&DAT_00809950)[DAT_0080874d] != '\0')) {
    memset(local_44, 0, 0x20); /* compiler bulk-zero initialization */
    local_44[3] = 1;
    DAT_0080c526 = 0x6108;
    local_44[4] = 0x6108;
    switch(DAT_008087a0 & 0xff) {
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


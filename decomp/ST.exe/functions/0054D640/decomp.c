#include "../../pseudocode_runtime.h"


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
  char *pcVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD *pDVar9;
  int *piVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
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
  local_1c = timeGetTime();
  if (DAT_0080c512 != 0) {
    return 0;
  }
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar2 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0);
  DVar6 = local_1c;
  this_00 = local_24;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x411,0,iVar2,
                               "%s","STPlaySystemC::Life");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x412);
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
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      SendMail(this_00,unaff_EDI);
      if (((this_00->field_0038 != '\0') && (g_popUp_008016D8 != (PopUpTy *)0x0)) &&
         (g_popUp_008016D8->field_009C == '\0')) {
        uVar13 = 8;
        pcVar4 = LoadResourceString(0x4275,HINSTANCE_00807618);
        thunk_FUN_0052d320(g_popUp_008016D8,pcVar4,uVar13);
      }
      if (this_00->field_0028 != 0) {
        SystemClassTy::Life((SystemClassTy *)this_00);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PlaySystemTy::SendClientMail((PlaySystemTy *)this_00,(int)unaff_EDI);
      }
      goto LAB_0054e02c;
    }
    if (this_00->field_0038 == '\0') {
      if ((this_00->field_0059 == 0) && (DAT_00808788 == 0)) {
        if (this_00->field_00E8 == 0) {
          if ((this_00->field_00EC != 0) && (1000 < (int)(DVar6 - this_00->field_0030))) {
            iVar2 = FUN_006b7140(g_int_00811764);
            if (iVar2 < 2) {
              this_00->field_00E8 = 1;
            }
            this_00->field_0030 = DVar6;
          }
          iVar2 = this_00->field_002C + -1;
          this_00->field_002C = iVar2;
          if (iVar2 < 1) {
            this_00->field_002C =
                 *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4);
            thunk_FUN_00550190((int)this_00);
            PrepareMail(this_00);
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            SendMail(this_00,unaff_EDI);
            SystemClassTy::Life((SystemClassTy *)this_00);
            this_00->field_0028 = 0;
          }
        }
        else if (this_00->field_004D == '\0') {
          if ((30000 < (int)(DVar6 - this_00->field_0030)) ||
             (iVar2 = FUN_006b7140(g_int_00811764), iVar2 < 2)) {
            memset(local_64, 0, 0x20); /* compiler bulk-zero initialization */
            local_64[3] = 1;
            local_64[4] = DAT_0080c526;
            AppClassTy::PostMessage((AppClassTy *)&DAT_00807620,local_64);
          }
        }
        else {
          if (this_00->field_003D != (AnonPointee_STPlaySystemC_003D *)0x0) {
            this_00->field_003D->field_0004 = this_00->field_004D;
            this_00->field_003D->field_0005 = 0;
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
          this_00->field_0030 = DVar6;
        }
      }
      else {
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x42,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar5 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x42,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar5 == 1) && (local_8 != (int *)0x0)) {
              FreeAndNull(&local_8);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x43,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar5 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x43,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar5 == 1) {
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != (int *)0x0) {
                FreeAndNull(&local_8);
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x33,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar5 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x33,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar5 == 1) && (local_8 != (int *)0x0)) {
              thunk_FUN_00550830((int)local_8);
              FreeAndNull(&local_8);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x35,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar5 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x35,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar5 == 1) && (thunk_FUN_00550430(this_00,local_10,1), local_8 != (int *)0x0)) {
              FreeAndNull(&local_8);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x36,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar5 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x36,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if ((iVar5 == 1) &&
               (thunk_FUN_005505d0(this_00,local_10,local_8), local_8 != (int *)0x0)) {
              FreeAndNull(&local_8);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x11,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar5 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x11,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar5 == 1) {
              thunk_FUN_005504f0(this_00,local_10,0x426f,1);
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != (int *)0x0) {
                FreeAndNull(&local_8);
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_c);
        }
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,0x13,&local_c,-1,0);
        iVar2 = 0;
        if (0 < local_c) {
          do {
            iVar5 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,0x13,&local_14,&local_10,&local_8,(uint *)0x0,-1,0);
            if (iVar5 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar5 == 1) {
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != (int *)0x0) {
                FreeAndNull(&local_8);
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
           (uVar13 = this_00->field_005D + 1, this_00->field_005D = uVar13, 2000 < uVar13)) {
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
                pcVar4 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar4 + -6) == local_18) && (*pcVar4 != '\0')) {
                    pcVar3 = LoadResourceString(0x426f,HINSTANCE_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,"%s %s",pcVar4 + -0x46,pcVar3);
                    if (g_popUp_008016D8 != (PopUpTy *)0x0) {
                      thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
                    }
                    thunk_FUN_005508f0(this_00,local_18);
                    break;
                  }
                  iVar2 = iVar2 + 1;
                  pcVar4 = pcVar4 + 0x9c;
                } while (iVar2 < (int)(uint)DAT_00808aaf);
              }
              uVar8 = 0;
              uVar13 = PTR_0080c4fe->count;
              if (0 < (int)uVar13) {
                bVar12 = uVar13 != 0;
                do {
                  if (bVar12) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_0080c4fe, uVar8) (runtime stride) */
                    piVar10 = (int *)(PTR_0080c4fe->elementSize * uVar8 + (int)PTR_0080c4fe->data);
                  }
                  else {
                    piVar10 = (int *)0x0;
                  }
                  if ((piVar10 != (int *)0x0) && (*piVar10 == local_18)) {
                    FUN_006b0c70(PTR_0080c4fe,uVar8);
                    break;
                  }
                  uVar8 = uVar8 + 1;
                  bVar12 = uVar8 < uVar13;
                } while ((int)uVar8 < (int)uVar13);
              }
              break;
            case 0x33:
              thunk_FUN_00550830((int)local_8);
              break;
            case 0x35:
              uVar8 = 0;
              uVar13 = PTR_0080c4fe->count;
              if (0 < (int)uVar13) {
                bVar12 = uVar13 != 0;
                do {
                  if (bVar12) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_0080c4fe, uVar8) (runtime stride) */
                    piVar10 = (int *)(PTR_0080c4fe->elementSize * uVar8 + (int)PTR_0080c4fe->data);
                  }
                  else {
                    piVar10 = (int *)0x0;
                  }
                  if ((piVar10 != (int *)0x0) && (*piVar10 == local_18)) {
                    FUN_006b0c70(PTR_0080c4fe,uVar8);
                    iVar2 = 0;
                    if (DAT_00808aaf != 0) {
                      pcVar4 = &DAT_00808af6;
                      do {
                        if ((*(int *)(pcVar4 + -6) == local_18) && (*pcVar4 != '\0')) {
                          pcVar3 = LoadResourceString(0x426e,HINSTANCE_00807618);
                          wsprintfA((LPSTR)&DAT_0080f33a,"%s %s",pcVar4 + -0x46,pcVar3);
                          if (g_popUp_008016D8 != (PopUpTy *)0x0) {
                            thunk_FUN_0052d320(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
                          }
                        }
                        iVar2 = iVar2 + 1;
                        pcVar4 = pcVar4 + 0x9c;
                      } while (iVar2 < (int)(uint)DAT_00808aaf);
                    }
                    break;
                  }
                  uVar8 = uVar8 + 1;
                  bVar12 = uVar8 < uVar13;
                } while ((int)uVar8 < (int)uVar13);
              }
            case 0x1a:
              iVar2 = 0;
              if (DAT_00808aaf != 0) {
                pcVar4 = &DAT_00808af6;
                do {
                  if ((*(int *)(pcVar4 + -6) == local_18) && (*pcVar4 != '\0')) {
                    *(DWORD *)(pcVar4 + 2) = local_1c;
                  }
                  iVar2 = iVar2 + 1;
                  pcVar4 = pcVar4 + 0x9c;
                } while (iVar2 < (int)(uint)DAT_00808aaf);
              }
            }
            if (local_8 != (int *)0x0) {
              FreeAndNull(&local_8);
            }
          }
          local_10 = local_10 + 1;
          DVar6 = local_1c;
        } while (local_10 < local_20);
      }
      if ((g_popUp_008016D8 != (PopUpTy *)0x0) && (g_popUp_008016D8->field_009C == '\0')) {
        uVar13 = 8;
        pcVar4 = LoadResourceString(0x426a,HINSTANCE_00807618);
        thunk_FUN_0052d320(g_popUp_008016D8,pcVar4,uVar13);
      }
      if ((PTR_0080c4fe->count == 0) || (59999 < (int)(DVar6 - this_00->field_00BC))) {
        if (g_popUp_008016D8 != (PopUpTy *)0x0) {
          uVar13 = 8;
          pcVar4 = LoadResourceString(0x4269,HINSTANCE_00807618);
          thunk_FUN_0052d320(g_popUp_008016D8,pcVar4,uVar13);
        }
        this_00->field_0038 = 0;
      }
      if ((this_00->field_0038 == '\0') && (iVar2 = 0, DAT_00808aaf != 0)) {
        pDVar9 = &DAT_00808af8;
        do {
          *pDVar9 = DVar6;
          iVar2 = iVar2 + 1;
          pDVar9 = pDVar9 + 0x27;
          DVar6 = local_1c;
        } while (iVar2 < (int)(uint)DAT_00808aaf);
      }
    }
    if (((((DAT_00808783 == '\x03') && (DAT_00808788 == 0)) && (this_00->field_00E8 == 0)) &&
        ((this_00->field_0038 == '\0' && (this_00->field_0059 == 0)))) &&
       (iVar2 = 0, DAT_00808aaf != 0)) {
      piVar10 = &DAT_00808af0;
      do {
        if (((piVar10 != (int *)0x40) && (*piVar10 != 0)) &&
           ((*piVar10 != DAT_0080877f &&
            (((*(char *)((int)piVar10 + 6) != '\0' &&
              ((&DAT_00809950)[*(byte *)(piVar10 + 1)] == '\0')) &&
             (DVar6 = FUN_006e51b0(0x807620), 30000 < (int)(DVar6 - piVar10[2]))))))) {
          if (*piVar10 != this_00->field_00F4) {
            thunk_FUN_005503c0(this_00,*piVar10);
          }
          break;
        }
        iVar2 = iVar2 + 1;
        piVar10 = piVar10 + 0x27;
      } while (iVar2 < (int)(uint)DAT_00808aaf);
    }
  }
  else {
    PrepareMail(this_00);
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
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
    memset(local_44, 0, 0x20); /* compiler bulk-zero initialization */
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


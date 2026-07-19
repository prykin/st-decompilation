
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::NoneSettMap */

undefined4 __thiscall SettMapMTy::NoneSettMap(SettMapMTy *this,int *param_1)

{
  SettMapTy SVar1;
  byte bVar2;
  code *pcVar3;
  SettMapTy *this_00;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  byte *pbVar12;
  int *unaff_EDI;
  byte *pbVar13;
  SettMapTy *pSVar14;
  uint *puVar15;
  bool bVar16;
  char cVar17;
  SettMapTy *pSVar18;
  InternalExceptionFrame local_148;
  char local_104 [2];
  undefined1 local_102;
  undefined4 local_f2;
  int local_e6;
  undefined4 local_e2;
  int local_dc [8];
  int local_bc [8];
  uint local_9c [2];
  int local_94;
  undefined2 local_90;
  char local_8e;
  uint local_8d;
  uint local_89;
  undefined1 local_85;
  SettMapTy local_84;
  char local_83;
  undefined4 local_82;
  undefined4 local_7e;
  uint local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  int local_68;
  uint local_64;
  int *local_60;
  SettMapTy *local_5c;
  int local_58 [8];
  uint *local_38;
  SettMapTy *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  SettMapMTy local_1d;
  uint local_1c;
  uint local_18;
  SettMapTy local_11;
  SettMapTy *local_10;
  SettMapTy *local_c;
  char local_5;
  
  local_1d = this[0x65];
  local_c = (SettMapTy *)0x0;
  local_24 = 0xffffffff;
  local_148.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_148;
  local_5c = (SettMapTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_148.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_5c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_148.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x4a9,0,iVar4,&DAT_007a4ccc
                               ,s_SettMapMTy__NoneSettMap_007cd380);
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_settmobj_cpp_007cd258,0x4a9);
    return 0;
  }
  iVar4 = SettMapTy::NoneSettMap(local_5c,unaff_EDI);
  if (((iVar4 != 0) && (local_1d == (SettMapMTy)0x3)) && (this_00[0x65] == (SettMapTy)0x1)) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(this_00 + 0x2200));
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
    if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                 *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
    }
    if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                 *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
    }
  }
  Library::DKW::DDX::FUN_006b7510(DAT_00811764,-1,&local_30,-1,0);
  if (DAT_0080877e == '\0') {
    iVar4 = *(int *)(this_00 + 0x61);
    if (799 < (uint)(iVar4 - *(int *)(this_00 + 0x220d))) {
      local_f2 = *(undefined4 *)(this_00 + 0x2221);
      local_e2 = *(undefined4 *)(this_00 + 0x2211);
      local_102 = 4;
      local_e6 = iVar4;
      FUN_006b6500((int)DAT_00811764,0);
      FUN_00715360(DAT_00811764,1,'\x1a',local_104,0x26,1,0xffffffff);
      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
      *(int *)(this_00 + 0x2221) = *(int *)(this_00 + 0x2221) + 1;
      iVar4 = *(int *)(this_00 + 0x61);
      *(int *)(this_00 + 0x220d) = iVar4;
    }
    if (((local_30 == 0) && (60000 < (uint)(iVar4 - *(int *)(this_00 + 0x2209)))) &&
       (this_00[0x2225] == (SettMapTy)0x0)) {
      this_00[0x2225] = (SettMapTy)0x1;
      piVar9 = local_dc;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = 0;
        piVar9 = piVar9 + 1;
      }
      local_dc[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
      if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) == 0) {
        (*(code *)**(undefined4 **)this_00)(local_dc);
      }
      else {
        local_dc[2] = *(int *)(this_00 + 8);
        local_dc[3] = 2;
        MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),0x2522,'\0',local_dc,
                           (undefined4 *)0x0,(undefined4 *)0x0,0,0);
      }
    }
  }
  else if ((this_00[0x222e] != (SettMapTy)0x0) &&
          (29999 < (uint)(*(int *)(this_00 + 0x61) - *(int *)(this_00 + 0x2233)))) {
    this_00[0x222e] = (SettMapTy)0x0;
    RunGame((SettMapMTy *)this_00);
  }
  local_1c = 0;
  if (0 < local_30) {
    do {
      iVar4 = FUN_00715630(DAT_00811764,-1,&local_28,(int *)&local_18,&local_c,&local_2c,-1,0);
      if ((iVar4 == 1) && (local_28 == 0x1b)) {
        StartSystemTy::AddToChat(*(StartSystemTy **)(this_00 + 0x1a5b),(int)local_c);
      }
      pSVar18 = local_c;
      if (DAT_0080877e == '\0') {
        piVar9 = local_58;
        for (iVar8 = 8; pSVar18 = local_c, iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar9 = 0;
          piVar9 = piVar9 + 1;
        }
        if (iVar4 == -0x4d) {
          this_00[0x2225] = (SettMapTy)0x1;
          local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
          iVar4 = *(int *)(this_00 + 0x1a5b);
          if (*(int *)(iVar4 + 0x2e6) == 0) {
            puVar6 = *(undefined4 **)this_00;
            piVar9 = local_58;
            goto LAB_005cf387;
          }
          local_58[2] = *(int *)(this_00 + 8);
          local_58[3] = 2;
          piVar9 = local_58;
LAB_005ce9b2:
          MMsgTy::SetMessage(*(MMsgTy **)(iVar4 + 0x2e6),0x2522,'\0',piVar9,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
        else {
          if (iVar4 != 1) goto LAB_005cf38c;
          iVar4 = *(int *)(this_00 + 0x61);
          *(int *)(this_00 + 0x2209) = iVar4;
          switch(local_28) {
          case 0x10:
            if (this_00[0x65] == (SettMapTy)0x1) {
              local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) == 0) goto LAB_005cee1a;
              local_58[2] = *(int *)(this_00 + 8);
              local_58[3] = 2;
              MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),0x2524,'\0',
                                 local_58,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
            break;
          case 0x12:
            if (this_00[0x65] == (SettMapTy)0x1) {
              local_58[4] = 0x694f;
LAB_005cee1a:
              (*(code *)**(undefined4 **)this_00)(local_58);
            }
            break;
          case 0x1a:
          case 0x2d:
            pSVar14 = local_c + 2;
            if ((local_c[2] == (SettMapTy)0x3) && (this_00[0x65] == (SettMapTy)0x1)) {
              local_58[4] = 0x694f;
              (*(code *)**(undefined4 **)this_00)(local_58);
            }
            else {
              if (local_c[2] == (SettMapTy)0x1) {
                SVar1 = local_c[0xb];
                if (SVar1 == (SettMapTy)0x1) {
                  if (this_00[0x65] == (SettMapTy)0x1) {
                    if ((*(uint *)(local_c + 3) == DAT_00809958) ||
                       ((uint)(iVar4 - *(int *)(this_00 + 0x2215)) < 3000)) {
                      if ((*(uint *)(local_c + 0x16) != DAT_00808aab) &&
                         (2999 < (uint)(iVar4 - *(int *)(this_00 + 0x2219)))) {
                        FUN_006b6500((int)DAT_00811764,1);
                        FUN_00715360(DAT_00811764,1,'\x1d',(char *)0x0,0,0,0xffffffff);
                        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                        iVar4 = *(int *)(this_00 + 0x61);
                        *(int *)(this_00 + 0x2219) = iVar4;
                      }
                      if (((*(int *)(this_00 + 0x1f84) != 0) &&
                          (*(int *)(pSVar18 + 0x1a) != *(int *)(this_00 + 0x2121))) &&
                         (1999 < (uint)(iVar4 - *(int *)(this_00 + 0x221d)))) {
                        FUN_006b6500((int)DAT_00811764,1);
                        FUN_00715360(DAT_00811764,1,'#',(char *)0x0,0,0,0xffffffff);
                        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                        *(undefined4 *)(this_00 + 0x221d) = *(undefined4 *)(this_00 + 0x61);
                      }
                    }
                    else {
                      FUN_006b6500((int)DAT_00811764,1);
                      FUN_00715360(DAT_00811764,1,'!',(char *)0x0,0,0,0xffffffff);
                      FUN_00715360(DAT_00811764,1,'\x1f',(char *)0x0,0,0,0xffffffff);
                      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                      *(undefined4 *)(this_00 + 0x2215) = *(undefined4 *)(this_00 + 0x61);
                    }
                  }
                }
                else if ((1 < (byte)SVar1) && ((byte)SVar1 < 6)) {
                  if ((*(uint *)(local_c + 0x16) != DAT_00808aab) &&
                     (2999 < (uint)(iVar4 - *(int *)(this_00 + 0x2219)))) {
                    FUN_006b6500((int)DAT_00811764,1);
                    FUN_00715360(DAT_00811764,1,'\x1d',(char *)0x0,0,0,0xffffffff);
                    FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                    iVar4 = *(int *)(this_00 + 0x61);
                    *(int *)(this_00 + 0x2219) = iVar4;
                  }
                  if (*(int *)(this_00 + 0x1f84) != 0) {
                    if ((*(int *)(pSVar18 + 0x1a) != *(int *)(this_00 + 0x2121)) &&
                       (1999 < (uint)(iVar4 - *(int *)(this_00 + 0x221d)))) {
                      FUN_006b6500((int)DAT_00811764,1);
                      FUN_00715360(DAT_00811764,1,'#',(char *)0x0,0,0,0xffffffff);
                      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                      iVar4 = *(int *)(this_00 + 0x61);
                      *(int *)(this_00 + 0x221d) = iVar4;
                    }
                    if ((*(int *)(this_00 + 0x1f84) != 0) &&
                       (1999 < (uint)(iVar4 - *(int *)(this_00 + 0x221d)))) {
                      AddPlList((SettMapMTy *)this_00,(uint)(this_00[0x1e26] == (SettMapTy)0x10));
                    }
                  }
                }
              }
              iVar4 = *(int *)(pSVar18 + 0x1e);
              *(int *)(this_00 + 0x2211) = *(int *)(this_00 + 0x61) - iVar4;
              UpdatePing((SettMapMTy *)this_00,DAT_0080877f,*(int *)(this_00 + 0x61) - iVar4);
              if ((((((*pSVar14 == (SettMapTy)0x2) && (this_00[0x65] == (SettMapTy)0x1)) &&
                    (*(uint *)(pSVar18 + 3) == DAT_008087be)) &&
                   ((this_00[0x1e26] != (SettMapTy)0xe || (*(uint *)(pSVar18 + 3) == DAT_00809958)))
                   ) && (*(uint *)(pSVar18 + 0x16) == DAT_00808aab)) &&
                 (*(int *)(pSVar18 + 0x1a) == *(int *)(this_00 + 0x2121))) {
                local_5 = '\0';
                *(undefined4 *)(this_00 + 0x2d) = 0x10003;
                FUN_006e6080(this_00,3,0x100ef,(undefined4 *)(this_00 + 0x1d));
                DAT_0080733b = pSVar18[0xc];
                DAT_00808754 = *(undefined4 *)(pSVar18 + 0xe);
                iVar4 = *(int *)(this_00 + 0x1f84);
                uVar10 = 0;
                uVar11 = *(uint *)(iVar4 + 0xc);
                local_1c = 0;
                if (0 < (int)uVar11) {
                  bVar16 = uVar11 != 0;
                  do {
                    if (bVar16) {
                      iVar8 = *(int *)(iVar4 + 8) * uVar10 + *(int *)(iVar4 + 0x1c);
                    }
                    else {
                      iVar8 = 0;
                    }
                    if (((iVar8 != 0) &&
                        ((*(char *)(iVar8 + 4) == '\x02' || (*(char *)(iVar8 + 4) == '\x03')))) &&
                       (*(int *)(iVar8 + 6) == DAT_0080877f)) {
                      local_5 = '\x01';
                      local_1c = uVar10;
                      break;
                    }
                    uVar10 = uVar10 + 1;
                    bVar16 = uVar10 < uVar11;
                    local_1c = uVar10;
                  } while ((int)uVar10 < (int)uVar11);
                }
                if (local_5 == '\0') {
                  *(uint *)(this_00 + 0x2d) = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                  (*(code *)**(undefined4 **)this_00)(this_00 + 0x1d);
                }
                else {
                  *(undefined4 *)(this_00 + 0x2d) = 0x694a;
                  *(undefined4 *)(this_00 + 0x31) = 1;
                  (*(code *)**(undefined4 **)this_00)(this_00 + 0x1d);
                }
              }
            }
            break;
          case 0x1c:
            if (DAT_00808aab != *(uint *)(local_c + 0x6c)) {
              local_5 = DAT_00808a8f != local_c[0x50];
              iVar4 = 0x10;
              bVar16 = true;
              puVar5 = &DAT_00808a4f;
              pSVar18 = local_c + 0x10;
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar16 = *puVar5 == *(uint *)pSVar18;
                puVar5 = puVar5 + 1;
                pSVar18 = pSVar18 + 4;
              } while (bVar16);
              local_11 = (SettMapTy)!bVar16;
              thunk_FUN_00571a30(&DAT_008087b6,(undefined4 *)local_c,'\x01');
              DAT_0080734b = DAT_00808aa8;
              local_34 = *(SettMapTy **)(DAT_0080c502 + 0xc);
              local_10 = (SettMapTy *)0x0;
              if (0 < (int)local_34) {
                bVar16 = local_34 != (SettMapTy *)0x0;
                do {
                  if (bVar16) {
                    iVar4 = *(int *)(DAT_0080c502 + 8) * (int)local_10 +
                            *(int *)(DAT_0080c502 + 0x1c);
                  }
                  else {
                    iVar4 = 0;
                  }
                  if ((iVar4 != 0) && (*(uint *)(iVar4 + 0x90) == DAT_0080995c)) {
                    pbVar13 = (byte *)&DAT_00809960;
                    pbVar12 = (byte *)(iVar4 + 0x4c);
                    do {
                      bVar2 = *pbVar12;
                      bVar16 = bVar2 < *pbVar13;
                      if (bVar2 != *pbVar13) {
LAB_005cef58:
                        iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                        goto LAB_005cef5d;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar12[1];
                      bVar16 = bVar2 < pbVar13[1];
                      if (bVar2 != pbVar13[1]) goto LAB_005cef58;
                      pbVar12 = pbVar12 + 2;
                      pbVar13 = pbVar13 + 2;
                    } while (bVar2 != 0);
                    iVar8 = 0;
LAB_005cef5d:
                    if (iVar8 == 0) {
                      *(SettMapTy **)(this_00 + 0x1c5f) = local_10;
                      StartSystemTy::SetObjectives
                                (DAT_0081176c,*(int *)(this_00 + 0x1f43),(char *)(iVar4 + 0x70),
                                 *(int *)(this_00 + 0x1c63));
                      break;
                    }
                  }
                  local_10 = local_10 + 1;
                  bVar16 = local_10 < local_34;
                } while ((int)local_10 < (int)local_34);
              }
              pSVar18 = this_00 + 0x2125;
              iVar4 = 0xe;
              do {
                if (*(int *)pSVar18 != 0) {
                  *(undefined4 *)(this_00 + 0x2d) = 5;
                  FUN_006e6080(this_00,2,*(int *)pSVar18,(undefined4 *)(this_00 + 0x1d));
                }
                pSVar18 = pSVar18 + 4;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              if (((local_5 == '\0') || ((**(code **)(*(int *)this_00 + 0x2c))(), local_5 == '\0'))
                 && (local_11 != (SettMapTy)0x0)) {
                pSVar18 = this_00 + 0x1f8c;
                local_10 = (SettMapTy *)0xa;
                do {
                  iVar4 = 8;
                  do {
                    if (*(int *)pSVar18 != 0) {
                      *(undefined4 *)(this_00 + 0x2d) = 5;
                      FUN_006e6080(this_00,2,*(int *)pSVar18,(undefined4 *)(this_00 + 0x1d));
                    }
                    pSVar18 = pSVar18 + 4;
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                  local_10 = local_10 + -1;
                } while (local_10 != (SettMapTy *)0x0);
              }
              SettMapTy::PaintSC(this_00);
            }
            break;
          case 0x1e:
            if ((DAT_00809958 != *(uint *)local_c) && (this_00[0x65] == (SettMapTy)0x1)) {
              puVar5 = &DAT_00853de0;
              for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar5 = *(uint *)pSVar18;
                pSVar18 = pSVar18 + 4;
                puVar5 = puVar5 + 1;
              }
              *(undefined2 *)puVar5 = *(undefined2 *)pSVar18;
              thunk_FUN_005c7800();
            }
            break;
          case 0x20:
            iVar4 = 0xd;
            bVar16 = true;
            pSVar18 = this_00 + 0x1f53;
            pSVar14 = local_c;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar16 = *pSVar18 == *pSVar14;
              pSVar18 = pSVar18 + 1;
              pSVar14 = pSVar14 + 1;
            } while (bVar16);
            if (!bVar16) {
              iVar4 = 6;
              *(uint *)(this_00 + 0x1f53) = *(uint *)local_c;
              *(uint *)(this_00 + 0x1f57) = *(uint *)(local_c + 4);
              *(uint *)(this_00 + 0x1f5b) = *(uint *)(local_c + 8);
              this_00[0x1f5f] = local_c[0xc];
              pSVar18 = this_00 + 0x1f60;
              do {
                if (*(int *)pSVar18 != 0) {
                  *(undefined4 *)(this_00 + 0x2d) = 5;
                  FUN_006e6080(this_00,2,*(int *)pSVar18,(undefined4 *)(this_00 + 0x1d));
                }
                pSVar18 = pSVar18 + 4;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1f80));
            }
            break;
          case 0x22:
            if (((*(int *)(this_00 + 0x1f84) != 0) &&
                (*(uint *)(this_00 + 0x2121) != *(uint *)local_c)) &&
               (DAT_00808aab == *(uint *)(local_c + 4))) {
              local_10 = (SettMapTy *)(local_2c - 9);
              if (-1 < (int)local_10) {
                *(undefined4 *)(this_00 + 0x2d) = 0x10003;
                FUN_006e6080(this_00,3,0x100ef,(undefined4 *)(this_00 + 0x1d));
                uVar11 = 0;
                *(uint *)(this_00 + 0x2121) = *(uint *)local_c;
                local_11 = pSVar18[8];
                iVar4 = *(int *)(this_00 + 0x1f84);
                if (0 < *(int *)(iVar4 + 0xc)) {
                  bVar16 = *(int *)(iVar4 + 0xc) != 0;
                  do {
                    if (bVar16) {
                      iVar4 = *(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c);
                    }
                    else {
                      iVar4 = 0;
                    }
                    if ((iVar4 != 0) && (*(byte **)(iVar4 + 0x50) != (byte *)0x0)) {
                      FUN_006ae110(*(byte **)(iVar4 + 0x50));
                    }
                    iVar4 = *(int *)(this_00 + 0x1f84);
                    uVar11 = uVar11 + 1;
                    bVar16 = uVar11 < *(uint *)(iVar4 + 0xc);
                  } while ((int)uVar11 < (int)*(uint *)(iVar4 + 0xc));
                }
                iVar4 = *(int *)(this_00 + 0x1f84);
                pSVar14 = (SettMapTy *)(local_2c / 0x60);
                local_34 = pSVar14;
                if (*(int *)(iVar4 + 0xc) * *(int *)(iVar4 + 8) < (int)local_10) {
                  iVar4 = Library::DKW::LIB::FUN_006acf50
                                    (*(undefined4 **)(iVar4 + 0x1c),(uint)local_10);
                  *(int *)(*(int *)(this_00 + 0x1f84) + 0x1c) = iVar4;
                  *(SettMapTy **)(*(int *)(this_00 + 0x1f84) + 0x10) = pSVar14;
                }
                pSVar18 = pSVar18 + 9;
                pSVar14 = *(SettMapTy **)(*(int *)(this_00 + 0x1f84) + 0x1c);
                for (uVar11 = (uint)local_10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *(undefined4 *)pSVar14 = *(undefined4 *)pSVar18;
                  pSVar18 = pSVar18 + 4;
                  pSVar14 = pSVar14 + 4;
                }
                for (uVar11 = (uint)local_10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pSVar14 = *pSVar18;
                  pSVar18 = pSVar18 + 1;
                  pSVar14 = pSVar14 + 1;
                }
                uVar11 = 0;
                *(SettMapTy **)(*(int *)(this_00 + 0x1f84) + 0xc) = local_34;
                iVar4 = *(int *)(this_00 + 0x1f84);
                if (0 < *(int *)(iVar4 + 0xc)) {
                  bVar16 = *(int *)(iVar4 + 0xc) != 0;
                  do {
                    if (bVar16) {
                      iVar4 = *(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c);
                    }
                    else {
                      iVar4 = 0;
                    }
                    if (iVar4 != 0) {
                      if ((local_11 == (SettMapTy)0x5) || (this_00[0x1e26] == (SettMapTy)0xf)) {
                        puVar5 = thunk_FUN_0067e0e0(*(int *)(this_00 + 7999),
                                                    (uint)*(byte *)(iVar4 + 2),0xffffffff);
                      }
                      else if ((local_11 == (SettMapTy)0xc) || (this_00[0x1e26] == (SettMapTy)0x10))
                      {
                        puVar5 = thunk_FUN_0067e200(*(int *)(this_00 + 7999),
                                                    (uint)*(byte *)(iVar4 + 2),0xffffffff);
                      }
                      else {
                        puVar5 = thunk_FUN_0067dfd0(*(int *)(this_00 + 0x1f43),
                                                    (uint)*(byte *)(iVar4 + 3),DAT_0080995c);
                      }
                      *(uint **)(iVar4 + 0x50) = puVar5;
                    }
                    iVar4 = *(int *)(this_00 + 0x1f84);
                    uVar11 = uVar11 + 1;
                    bVar16 = uVar11 < *(uint *)(iVar4 + 0xc);
                  } while ((int)uVar11 < (int)*(uint *)(iVar4 + 0xc));
                }
              }
              if (this_00[0x1e26] != (SettMapTy)0x10) {
                thunk_FUN_005d1380((int)this_00);
              }
              (**(code **)(*(int *)this_00 + 0x2c))();
              SettMapTy::PaintSC(this_00);
            }
            AddPlList((SettMapMTy *)this_00,(uint)(this_00[0x1e26] == (SettMapTy)0x10));
            break;
          case 0x31:
          case 0x33:
          case 0x35:
            if (this_00[0x2225] == (SettMapTy)0x0) {
              this_00[0x2225] = (SettMapTy)0x1;
              local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) == 0) goto LAB_005cee1a;
              local_58[2] = *(int *)(this_00 + 8);
              local_58[3] = 2;
              MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),0x2522,'\0',
                                 local_58,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          if (local_c != (SettMapTy *)0x0) {
            FUN_006ab060(&local_c);
          }
        }
        goto LAB_005cf38c;
      }
      if (iVar4 == -0x4d) {
        this_00[0x2225] = (SettMapTy)0x1;
        piVar9 = local_bc;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar9 = 0;
          piVar9 = piVar9 + 1;
        }
        iVar4 = *(int *)(this_00 + 0x1a5b);
        if (*(int *)(iVar4 + 0x2e6) != 0) {
          local_bc[2] = *(int *)(this_00 + 8);
          local_bc[3] = 2;
          local_bc[4] = 0x6947;
          piVar9 = local_bc;
          goto LAB_005ce9b2;
        }
        puVar6 = *(undefined4 **)this_00;
        local_bc[4] = 0x6947;
        piVar9 = local_bc;
LAB_005cf387:
        (*(code *)*puVar6)(piVar9);
        goto LAB_005cf38c;
      }
      if (iVar4 != 1) goto LAB_005cf38c;
      switch(local_28) {
      case 0x11:
        DeletePlayer((SettMapMTy *)this_00,local_18);
        CheckPlList((SettMapMTy *)this_00,unaff_EDI);
        (**(code **)(*(int *)this_00 + 0x2c))();
        SettMapTy::PaintSC(this_00);
        local_24 = 0;
        *(int *)(this_00 + 0x2121) = *(int *)(this_00 + 0x2121) + 1;
        break;
      case 0x1a:
        if (local_c[2] == (SettMapTy)0x4) {
          local_90 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
          local_84 = DAT_0080733b;
          local_8e = (this_00[0x222e] != (SettMapTy)0x0) + '\x01';
          local_83 = DAT_00807361;
          local_82 = DAT_00808754;
          local_7e = *(undefined4 *)(local_c + 0x12);
          local_8d = DAT_008087be;
          local_89 = (this_00[0x1e26] != (SettMapTy)0xc) - 1 & DAT_00808750;
          local_76 = *(undefined4 *)(this_00 + 0x2121);
          local_7a = DAT_00808aab;
          switch(this_00[0x1e26]) {
          case (SettMapTy)0x4:
            local_85 = 2;
            break;
          case (SettMapTy)0x5:
            local_85 = 3;
            break;
          case (SettMapTy)0x7:
            local_85 = 1;
            break;
          case (SettMapTy)0xc:
            local_85 = 5;
            break;
          case (SettMapTy)0x13:
            if ((0x13 < DAT_00803400) && (DAT_00803400 < 0x16)) {
              local_85 = 4;
            }
          }
          local_6e = *(undefined4 *)(local_c + 0x22);
          pSVar18 = local_c + 0x22;
          local_72 = *(undefined4 *)(local_c + 0x1e);
          FUN_006b6500((int)DAT_00811764,0);
          FUN_00715360(DAT_00811764,local_18,'\x1a',(char *)&local_90,0x26,1,0xffffffff);
          FUN_006b6500((int)DAT_00811764,DAT_0080733c);
          UpdatePing((SettMapMTy *)this_00,local_18,*(undefined4 *)pSVar18);
        }
        break;
      case 0x1d:
        SendDesc((SettMapMTy *)this_00,local_18);
        break;
      case 0x1f:
        uVar11 = 0x232;
        pSVar18 = (SettMapTy *)&DAT_00853de0;
        cVar17 = '\x1e';
        goto LAB_005ce59f;
      case 0x21:
        pSVar18 = this_00 + 0x1f53;
        uVar11 = 0xd;
        cVar17 = ' ';
LAB_005ce59f:
        FUN_00715360(DAT_00811764,local_18,cVar17,(char *)pSVar18,uVar11,1,0xffffffff);
        break;
      case 0x23:
        local_24 = (local_24 != 0xffffffff) - 1 & local_18;
        break;
      case 0x24:
        if (local_c != (SettMapTy *)0x0) {
          iVar4 = *(int *)(this_00 + 0x1f84);
          if ((iVar4 == 0) || (*(uint *)(iVar4 + 0xc) <= *(uint *)local_c)) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 8) * *(uint *)local_c + *(int *)(iVar4 + 0x1c);
          }
          if (iVar4 != 0) {
            local_10 = local_c + 4;
            uVar11 = *(uint *)local_10;
            if ((-1 < (int)uVar11) && (((int)uVar11 < 4 || (uVar11 == 7)))) {
              local_24 = 0;
            }
            *(undefined4 *)(this_00 + 0x2d) = 0x10003;
            FUN_006e6080(this_00,3,0x100ef,(undefined4 *)(this_00 + 0x1d));
            switch(*(uint *)local_10) {
            case 0:
              ChangePlayerState((SettMapMTy *)this_00,*(uint *)pSVar18);
              break;
            case 1:
              ChangePlayerColor((SettMapMTy *)this_00,*(uint *)pSVar18,(char)*(uint *)(pSVar18 + 8))
              ;
              break;
            case 2:
              ChangePlayerCiv((SettMapMTy *)this_00,*(uint *)pSVar18,(char)*(uint *)(pSVar18 + 8));
              break;
            case 3:
              ChangePlayerList((SettMapMTy *)this_00,local_18,*(uint *)pSVar18,
                               *(uint *)(pSVar18 + 8),(char)*(uint *)(pSVar18 + 0xc),
                               (char *)(pSVar18 + 0x10));
              break;
            case 5:
              ChangePlayerTeam((SettMapMTy *)this_00,*(uint *)pSVar18,*(uint *)(pSVar18 + 8),
                               *(uint *)(pSVar18 + 0xc));
              SendDesc((SettMapMTy *)this_00,0);
              break;
            case 7:
              pSVar14 = this_00 + 0x1f8c;
              *(SettMapTy *)(iVar4 + 0x4f) = pSVar18[8];
              local_10 = (SettMapTy *)0xa;
              *(int *)(this_00 + 0x2121) = *(int *)(this_00 + 0x2121) + 1;
              do {
                iVar4 = 8;
                do {
                  if (*(int *)pSVar14 != 0) {
                    *(undefined4 *)(this_00 + 0x2d) = 5;
                    FUN_006e6080(this_00,2,*(int *)pSVar14,(undefined4 *)(this_00 + 0x1d));
                  }
                  pSVar14 = pSVar14 + 4;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                local_10 = (SettMapTy *)((int)local_10 + -1);
              } while (local_10 != (SettMapTy *)0x0);
              local_10 = (SettMapTy *)0x0;
            }
          }
        }
        break;
      case 0x25:
        if (local_c == (SettMapTy *)0x0) goto LAB_005cf38c;
        if (((3 < local_2c) && (DAT_00807361 != '\0')) && (this_00[0x2243] != (SettMapTy)0x0)) {
          if ((*(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a) == 0) &&
             (thunk_FUN_005de670(*(int *)(this_00 + 0x1a5b)),
             *(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a) == 0)) {
            this_00[0x2243] = (SettMapTy)0x0;
          }
          else {
            iVar4 = *(int *)(this_00 + 0x2237);
            bVar16 = false;
            uVar10 = 0;
            local_10 = (SettMapTy *)0x0;
            uVar11 = *(uint *)(iVar4 + 0xc);
            if (uVar11 != 0) {
              if (uVar11 == 0) {
                puVar5 = (uint *)0x0;
                goto LAB_005ce8db;
              }
              do {
                puVar5 = (uint *)(*(int *)(iVar4 + 8) * uVar10 + *(int *)(iVar4 + 0x1c));
LAB_005ce8db:
                if ((puVar5 != (uint *)0x0) && (*puVar5 == local_18)) {
                  PrepareAFT((SettMapMTy *)this_00,(int)puVar5,(uint *)local_c);
                  bVar16 = true;
                  goto LAB_005ce8fe;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar11);
              bVar16 = false;
            }
LAB_005ce8fe:
            if (!bVar16) {
              local_9c[0] = local_18;
              local_94 = Library::DKW::LIB::FUN_006aac70
                                   (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x6a6));
              PrepareAFT((SettMapMTy *)this_00,(int)local_9c,(uint *)local_c);
              Library::DKW::TBL::FUN_006ae1c0(*(uint **)(this_00 + 0x2237),local_9c);
            }
          }
        }
        break;
      case 0x28:
        if (local_c != (SettMapTy *)0x0) {
          iVar4 = *(int *)(this_00 + 0x1f84);
          if ((iVar4 == 0) || (*(uint *)(iVar4 + 0xc) <= *(uint *)local_c)) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 8) * *(uint *)local_c + *(int *)(iVar4 + 0x1c);
          }
          if ((iVar4 != 0) && (*(uint *)(local_c + 4) == 3)) {
            local_24 = 0;
            *(undefined4 *)(this_00 + 0x2d) = 0x10003;
            FUN_006e6080(this_00,3,0x100ef,(undefined4 *)(this_00 + 0x1d));
            AddPlayerList((SettMapMTy *)this_00,local_18,*(uint *)pSVar18,*(uint *)(pSVar18 + 8),
                          (char *)(pSVar18 + 0x10));
          }
        }
        break;
      case 0x2e:
        if ((this_00[0x222e] != (SettMapTy)0x0) && (iVar4 = *(int *)(this_00 + 0x222f), iVar4 != 0))
        {
          uVar11 = *(uint *)(iVar4 + 0xc);
          uVar10 = 0;
          local_1c = 0;
          if (0 < (int)uVar11) {
            bVar16 = uVar11 != 0;
            do {
              if (bVar16) {
                puVar5 = (uint *)(*(int *)(iVar4 + 8) * uVar10 + *(int *)(iVar4 + 0x1c));
              }
              else {
                puVar5 = (uint *)0x0;
              }
              if ((puVar5 != (uint *)0x0) && (*puVar5 == local_18)) {
                local_1c = uVar10;
                FUN_006b0c70(iVar4,uVar10);
                break;
              }
              uVar10 = uVar10 + 1;
              bVar16 = uVar10 < uVar11;
              local_1c = uVar10;
            } while ((int)uVar10 < (int)uVar11);
          }
          if (*(int *)(*(int *)(this_00 + 0x222f) + 0xc) == 0) {
            this_00[0x222e] = (SettMapTy)0x0;
            RunGame((SettMapMTy *)this_00);
            if (DAT_008067a0 != '\0') {
              CFsgsConnection::UpdateGame
                        ((CFsgsConnection *)&DAT_00802a90,6,(char *)(this_00 + 0x1a5f));
              CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
            }
          }
        }
      }
      if (local_c != (SettMapTy *)0x0) {
        FUN_006ab060(&local_c);
      }
LAB_005cf38c:
      local_1c = local_1c + 1;
    } while ((int)local_1c < local_30);
  }
  if (DAT_0080877e != '\0') {
    if (local_24 != 0xffffffff) {
      SendPlList((SettMapMTy *)this_00,local_24);
    }
    if ((*(uint *)(this_00 + 0x223b) < *(uint *)(*(int *)(this_00 + 0x2237) + 0xc)) &&
       (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a) != 0)) {
      if (*(int *)(this_00 + 0x223f) == 0) {
        *(undefined4 *)(this_00 + 0x223f) = *(undefined4 *)(*(int *)(this_00 + 0x1a5b) + 0x6aa);
      }
      else {
        *(int *)(this_00 + 0x223f) = *(int *)(this_00 + 0x223f) + -1;
      }
      iVar4 = (**(code **)(*(int *)*DAT_00811764 + 200))
                        ((int *)*DAT_00811764,DAT_0080877f,0,1,0,&local_64);
      if (((iVar4 == 0) && (local_64 < 0x400)) && (*(int *)(this_00 + 0x223f) == 0)) {
        iVar4 = *(int *)(this_00 + 0x2237);
        if (*(uint *)(this_00 + 0x223b) < *(uint *)(iVar4 + 0xc)) {
          local_10 = (SettMapTy *)
                     (*(int *)(iVar4 + 8) * *(uint *)(this_00 + 0x223b) + *(int *)(iVar4 + 0x1c));
        }
        else {
          local_10 = (SettMapTy *)0x0;
        }
        if (local_10 != (SettMapTy *)0x0) {
          iVar4 = *(int *)(this_00 + 0x1a5b);
          local_68 = *(int *)((int)local_10 + 8);
          local_60 = (int *)((int)local_10 + 8);
          local_1c = 0;
          if (*(uint *)(iVar4 + 0x6a6) != 0) {
LAB_005cf496:
            if (*(char *)(local_1c + local_68) == '\0') goto code_r0x005cf49c;
            if (local_1c == *(int *)(iVar4 + 0x6a6) - 1U) {
              uVar11 = *(uint *)(iVar4 + 0x69e) % *(uint *)(iVar4 + 0x6a2);
            }
            else {
              uVar11 = *(uint *)(iVar4 + 0x6a2);
            }
            local_34 = (SettMapTy *)(uVar11 + 0x1c);
            local_38 = (uint *)Library::DKW::LIB::FUN_006aac70((int)local_34);
            pSVar18 = local_10;
            *local_38 = DAT_008087be;
            local_38[1] = local_1c;
            local_38[2] = *(uint *)(*(int *)(this_00 + 0x1a5b) + 0x6a6);
            local_38[3] = *(uint *)(*(int *)(this_00 + 0x1a5b) + 0x69e);
            local_38[4] = *(uint *)(*(int *)(this_00 + 0x1a5b) + 0x6ae);
            local_38[5] = *(uint *)(*(int *)(this_00 + 0x1a5b) + 0x6b2);
            local_38[6] = *(uint *)(*(int *)(this_00 + 0x1a5b) + 0x6a2);
            puVar5 = (uint *)(*(int *)(*(int *)(this_00 + 0x1a5b) + 0x6a2) * local_1c +
                             *(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a));
            puVar15 = local_38 + 7;
            for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar15 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar15 = puVar15 + 1;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(char *)puVar15 = (char)*puVar5;
              puVar5 = (uint *)((int)puVar5 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            FUN_00715360(DAT_00811764,*(int *)local_10,'&',(char *)local_38,(uint)local_34,1,
                         0xffffffff);
            FUN_006ab060(&local_38);
            *(undefined1 *)(local_1c + local_68) = 0;
            iVar4 = *(int *)((int)pSVar18 + 4) + -1;
            *(int *)((int)pSVar18 + 4) = iVar4;
            if (iVar4 == 0) {
              FUN_006ab060(local_60);
              FUN_006b0c70(*(int *)(this_00 + 0x2237),*(uint *)(this_00 + 0x223b));
            }
          }
LAB_005cf5bf:
          iVar4 = *(int *)(this_00 + 0x223b);
          *(uint *)(this_00 + 0x223b) = iVar4 + 1U;
          if (*(uint *)(*(int *)(this_00 + 0x2237) + 0xc) <= iVar4 + 1U) {
            *(undefined4 *)(this_00 + 0x223b) = 0;
          }
        }
      }
    }
  }
  g_currentExceptionFrame = local_148.previous;
  return 1;
code_r0x005cf49c:
  local_1c = local_1c + 1;
  if (*(uint *)(iVar4 + 0x6a6) <= local_1c) goto LAB_005cf5bf;
  goto LAB_005cf496;
}


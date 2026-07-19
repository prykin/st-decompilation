
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::GetMessage */

undefined4 __thiscall OptPanelTy::GetMessage(OptPanelTy *this,int param_1)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  InternalExceptionFrame *pIVar4;
  undefined1 uVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  undefined4 *puVar9;
  LPSTR pCVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  uint uVar13;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *this_00;
  OptPanelTy *this_01;
  undefined4 unaff_ESI;
  ushort *puVar14;
  void *unaff_EDI;
  int *piVar15;
  char *pcVar16;
  undefined4 *puVar17;
  char *pcVar18;
  char *pcVar19;
  byte *pbVar20;
  bool bVar21;
  uint uVar22;
  uint *puVar23;
  undefined4 uVar24;
  byte bVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  UINT UVar29;
  code *pcVar30;
  ulong uVar31;
  InternalExceptionFrame local_268;
  InternalExceptionFrame local_224;
  InternalExceptionFrame local_1e0;
  InternalExceptionFrame local_19c;
  InternalExceptionFrame local_158;
  InternalExceptionFrame local_114;
  InternalExceptionFrame local_d0;
  InternalExceptionFrame local_8c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  ushort *local_20;
  uint *local_1c;
  uint local_18;
  undefined4 *local_14;
  OptPanelTy *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_10 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar26 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x7f4,0,iVar6,
                                &DAT_007a4ccc,s_OptPanelTy__GetMessage_007c7334);
    if (iVar26 != 0) {
      pcVar30 = (code *)swi(3);
      uVar28 = (*pcVar30)();
      return uVar28;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x7f4);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    PreInitOptPanel(local_10);
  }
  PanelTy::GetMessage((PanelTy *)this_01,param_1);
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0xc001:
  case 0xc003:
  case 0xc09f:
  case 0xc0a0:
  case 0xc0a1:
  case 0xc0a2:
  case 0xc0a3:
  case 0xc0a4:
  case 0xc0a5:
  case 0xc0a6:
  case 0xc0a7:
  case 0xc0a8:
  case 0xc0a9:
  case 0xc0aa:
  case 0xc0ab:
  case 0xc0ac:
  case 0xc0ad:
  case 0xc0ae:
    if ((*(int *)(param_1 + 0x1c) != 0) &&
       ((uVar8 = *(uint *)(*(int *)(param_1 + 0x1c) + 4), uVar8 == 2 || ((3 < uVar8 && (uVar8 < 6)))
        ))) {
      thunk_FUN_005252c0(0xae);
    }
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  if (uVar8 < 0xc007) {
    if (uVar8 == 0xc006) {
      pcVar30 = thunk_FUN_00529fe0;
      pCVar10 = thunk_FUN_00571240(s_BUT_MINUS_007c718c,0);
      bVar25 = 1;
    }
    else {
      if (uVar8 < 0x8165) {
        if (uVar8 != 0x8164) {
          if (0x8160 < uVar8) {
            if (uVar8 == 0x8161) {
              iVar6 = *(int *)&this_01[1].field_0x2c;
              uVar8 = *(uint *)(iVar6 + 0x14);
              if (uVar8 == 0) {
                uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                        0x1ffffffc) * *(int *)(iVar6 + 8);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar9 = (undefined4 *)FUN_006b4fa0(iVar6);
              uVar5 = (undefined1)local_8;
              for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar9 = CONCAT22(CONCAT11(uVar5,uVar5),CONCAT11(uVar5,uVar5));
                puVar9 = puVar9 + 1;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined1 *)puVar9 = uVar5;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x17c,*(int *)&this_01[1].field_0x2c,0,0
                               ,0,0,0);
              if (this_01->field_0x1a4 == '\x0e') {
                iVar6 = *(int *)&this_01[1].field_0x144;
                if ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar6 + 0xc)) {
                  puVar23 = (uint *)(*(int *)(iVar6 + 8) * (uint)*(ushort *)(param_1 + 0x14) +
                                    *(int *)(iVar6 + 0x1c));
                }
                else {
                  puVar23 = (uint *)0x0;
                }
                uVar8 = (uint)(*(short *)(param_1 + 0x16) == 0);
              }
              else if ((int)(uint)*(ushort *)(param_1 + 0x14) <
                       *(int *)(*(int *)&this_01[1].field_0x30 + 8)) {
                puVar23 = *(uint **)(*(int *)(*(int *)&this_01[1].field_0x30 + 0x14) +
                                    (uint)*(ushort *)(param_1 + 0x14) * 4);
                uVar8 = (uint)(*(short *)(param_1 + 0x16) == 0);
              }
              else {
                puVar23 = (uint *)0x0;
                uVar8 = (uint)(*(short *)(param_1 + 0x16) == 0);
              }
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x17c,puVar23,2,-1,uVar8);
              Library::DKW::WGR::FUN_006b55f0
                        (*(undefined4 **)&this_01->field_0x68,0,*(ushort *)(param_1 + 0x18) + 0x26,
                         *(ushort *)(param_1 + 0x1a) + 0x31,*(int *)&this_01[1].field_0x2c,0,0,0,200
                         ,*(int *)(*(int *)&this_01[1].field_0x2c + 8));
              Library::DKW::DDX::FUN_006b3640
                        (DAT_008075a8,*(uint *)&this_01->field_0x60,0xffffffff,this_01->field_003C,
                         this_01->field_0044);
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            if (uVar8 != 0x8162) {
              if (uVar8 != 0x8163) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              cVar1 = this_01->field_0x1a4;
              if (cVar1 == '\x03') {
                if (*(int *)(param_1 + 0x14) < *(int *)(*(int *)&this_01[1].field_0x30 + 8)) {
                  pcVar16 = *(char **)(*(int *)(*(int *)&this_01[1].field_0x30 + 0x14) +
                                      *(int *)(param_1 + 0x14) * 4);
                }
                else {
                  pcVar16 = (char *)0x0;
                }
                Library::DKW::TBL::FUN_006b6020(*(int *)&this_01[1].field_0x38,0,pcVar16);
                uVar28 = *(undefined4 *)&this_01[1].field_0x38;
                this_01->field_0028 = 0x33;
                *(undefined4 *)&this_01->field_0x2c = uVar28;
                FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 1),
                             (undefined4 *)&this_01->field_0x18);
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (cVar1 == '\x04') {
                iVar6 = *(int *)&this_01[1].field_0x2c;
                uVar8 = *(uint *)(iVar6 + 0x14);
                if (uVar8 == 0) {
                  uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                          0x1ffffffc) * *(int *)(iVar6 + 8);
                }
                local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
                puVar9 = (undefined4 *)FUN_006b4fa0(iVar6);
                uVar5 = (undefined1)local_8;
                for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *puVar9 = CONCAT22(CONCAT11(uVar5,uVar5),CONCAT11(uVar5,uVar5));
                  puVar9 = puVar9 + 1;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined1 *)puVar9 = uVar5;
                  puVar9 = (undefined4 *)((int)puVar9 + 1);
                }
                this_01->field_0028 = 0x26;
                FUN_006e6080(this_01,2,this_01->field_01B5,(undefined4 *)&this_01->field_0x18);
                ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x17c,*(int *)&this_01[1].field_0x2c,0
                                 ,0,0,0,0);
                if (*(int *)&this_01->field_0x2c < *(int *)(*(int *)&this_01[1].field_0x30 + 8)) {
                  puVar23 = *(uint **)(*(int *)(*(int *)&this_01[1].field_0x30 + 0x14) +
                                      *(int *)&this_01->field_0x2c * 4);
                }
                else {
                  puVar23 = (uint *)0x0;
                }
                ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x17c,puVar23,0,-1,0);
                iVar6 = *(int *)&this_01[1].field_0x2c;
                Library::DKW::WGR::FUN_006b55f0
                          (*(undefined4 **)&this_01->field_0x68,0,0x26,0x1c,iVar6,0,0,0,
                           *(int *)(iVar6 + 4),*(int *)(iVar6 + 8));
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (cVar1 != '\x0e') {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              iVar6 = *(int *)&this_01[1].field_0x2c;
              uVar8 = *(uint *)(iVar6 + 0x14);
              if (uVar8 == 0) {
                uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                        0x1ffffffc) * *(int *)(iVar6 + 8);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar9 = (undefined4 *)FUN_006b4fa0(iVar6);
              uVar5 = (undefined1)local_8;
              for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar9 = CONCAT22(CONCAT11(uVar5,uVar5),CONCAT11(uVar5,uVar5));
                puVar9 = puVar9 + 1;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined1 *)puVar9 = uVar5;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
              ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x17c,*(int *)&this_01[1].field_0x2c,0,0
                               ,0,0,0);
              iVar6 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
              uVar28 = 0;
              iVar27 = -1;
              iVar26 = 0;
              if (iVar6 == 0) {
                puVar23 = (uint *)FUN_006b0140(0x2711,DAT_00807618);
              }
              else {
                puVar23 = &DAT_0080f33a;
              }
              ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x17c,puVar23,iVar26,iVar27,uVar28);
              iVar6 = *(int *)&this_01[1].field_0x2c;
              Library::DKW::WGR::FUN_006b55f0
                        (*(undefined4 **)&this_01->field_0x68,0,0x26,0x1c,iVar6,0,0,0,
                         *(int *)(iVar6 + 4),*(int *)(iVar6 + 8));
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            bVar25 = this_01->field_0x1a4;
            if (bVar25 < 3) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            if ((4 < bVar25) && (bVar25 != 0xe)) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            goto switchD_00535190_caseD_3;
          }
          if (uVar8 == 0x8160) {
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)&this_01[1].field_0x2c + 8);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (3 < uVar8) {
            if (uVar8 != 0x6332) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            local_18 = *(uint *)(param_1 + 0x1c);
            iVar6 = *(int *)&this_01->field_0x17c;
            if (*(int *)(iVar6 + 0xa0) != 0) {
              FUN_00710790(iVar6);
            }
            local_8 = *(int *)(iVar6 + 0x8a);
            FUN_006b4170(*(int *)&this_01->field_0x68,0,0x26,0x1a,0xca,0x6f,
                         (DAT_0080874e != '\x03') - 1U & 0x73);
            uVar13 = (uint)*(ushort *)(param_1 + 0x16);
            uVar8 = uVar13;
            if ((int)uVar13 < (int)(*(int *)(local_18 + 0x1e0) + uVar13)) {
              do {
                if ((int)uVar8 < *(int *)(*(int *)&this_01[1].field_0x140 + 8)) {
                  local_1c = *(uint **)(*(int *)(*(int *)&this_01[1].field_0x140 + 0x14) + uVar8 * 4
                                       );
                }
                else {
                  local_1c = (uint *)0x0;
                }
                if (local_1c != (uint *)0x0) {
                  ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x17c,*(int *)&this_01->field_0x68,0
                                   ,0x26,(uVar8 - uVar13) * local_8 + 0x1b,0xca,local_8);
                  ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x17c,local_1c,0,-1,0);
                }
                uVar13 = (uint)*(ushort *)(param_1 + 0x16);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)(*(int *)(local_18 + 0x1e0) + uVar13));
            }
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,*(uint *)&this_01->field_0x60,0xffffffff,this_01->field_003C,
                       this_01->field_0044);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (uVar8 == 3) {
            DoneOptPanel(this_01);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (uVar8 != 0) {
            if (uVar8 != 2) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            InitOptPanel(this_01);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          bVar25 = this_01->field_0x1a4;
          if ((2 < bVar25) &&
             ((((bVar25 < 5 || (bVar25 == 7)) && (*(HANDLE *)&this_01[1].field_0x24 != (HANDLE)0x0))
              && (DVar7 = WaitForSingleObject(*(HANDLE *)&this_01[1].field_0x24,0), DVar7 == 0)))) {
            FindNextChangeNotification(*(HANDLE *)&this_01[1].field_0x24);
            if (this_01->field_0x1a4 != '\a') {
              PrepFiles(this_01,this_01[1].field_0028);
            }
            this_01->field_0028 = 5;
            piVar15 = &this_01->field_01B5;
            iVar6 = 10;
            do {
              if (*piVar15 != 0) {
                FUN_006e6080(this_01,2,*piVar15,(undefined4 *)&this_01->field_0x18);
              }
              piVar15 = piVar15 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          if (this_01->field_0172 == 3) {
            iVar6 = *(int *)&this_01->field_0x50;
            if ((int)this_01->field_0044 < iVar6) {
              this_01->field_0044 = this_01->field_0044 + 0x1e;
            }
            if (iVar6 <= (int)this_01->field_0044) {
              this_01->field_0044 = iVar6;
              this_01->field_0172 = 1;
              ShiftControls(this_01,1);
            }
            uVar8 = this_01->field_0044;
            uVar13 = this_01->field_003C;
            uVar22 = *(uint *)&this_01->field_0x60;
          }
          else {
            if (this_01->field_0172 != 4) goto LAB_00534016;
            iVar6 = *(int *)&this_01->field_0x50 - this_01->field_0048;
            if (iVar6 < (int)this_01->field_0044) {
              this_01->field_0044 = this_01->field_0044 + -0x1e;
            }
            if ((int)this_01->field_0044 <= iVar6) {
              DAT_0080878c = 0;
              local_38 = 0;
              local_34 = 0;
              local_3c = 1;
              if (this_01->field_019C != 0x6102) {
                thunk_FUN_0054edf0((undefined4 *)0x5,&local_3c,1,0xffffffff);
              }
              this_01->field_0044 = *(int *)&this_01->field_0x50 - this_01->field_0048;
              this_01->field_0172 = 2;
              if (*(int *)&this_01->field_0x1a0 != 0) {
                this_01->field_0x1a4 = 1;
                SetOptControls(this_01);
                *(undefined4 *)&this_01->field_0x1a0 = 0;
              }
              if (this_01->field_019C != 0) {
                if ((this_01->field_0x1a4 == '\x05') && (this_01->field_0x1ab == '\x02')) {
                  _DAT_0080f32e = 1;
                  if (DAT_00808783 == '\x01') {
                    _DAT_008087a0 = CONCAT31(_DAT_008087a1,9);
                  }
                  else if (DAT_00808783 == '\x02') {
                    _DAT_008087a0 = CONCAT31(_DAT_008087a1,10);
                  }
                }
                puVar9 = (undefined4 *)&this_01->field_0x18;
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar9 = 0;
                  puVar9 = puVar9 + 1;
                }
                *(undefined4 *)&this_01->field_0x24 = 1;
                this_01->field_0028 = this_01->field_019C;
                if (this_01->field_019C == 0x610a) {
                  *(undefined4 *)&this_01->field_0x2c = 6;
                }
                AppClassTy::PostNextMessage
                          (*(AppClassTy **)&this_01->field_0x10,(undefined4 *)&this_01->field_0x18);
                this_01->field_019C = 0;
              }
            }
            uVar8 = this_01->field_0044;
            uVar13 = this_01->field_003C;
            uVar22 = *(uint *)&this_01->field_0x60;
          }
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar22,0xffffffff,uVar13,uVar8);
LAB_00534016:
          if ((uint)(*(int *)&this_01->field_0x38 - *(int *)&this_01[1].field_0x148) < 0x7d1) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          *(int *)&this_01[1].field_0x148 = *(int *)&this_01->field_0x38;
          uVar8 = thunk_FUN_00567060(0x807658);
          if (uVar8 != 0) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          thunk_FUN_00571320(&DAT_00807620,DAT_00856d78);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar16 = s_BUT_SLUP_007c3e40;
      }
      else {
        if (0xc002 < uVar8) {
          if (uVar8 == 0xc003) {
            if ((this_01->field_0x1a4 == '\x05') && (this_01->field_0x1ab == '\a')) {
              DAT_00808788 = 0;
            }
            if (this_01->field_0x1a9 == '\0') {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            this_01->field_0x1a4 = this_01->field_0x1a9;
            this_01->field_0x1a9 = this_01->field_0x1aa;
            this_01->field_0x1aa = 0;
            SetOptControls(this_01);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (uVar8 != 0xc004) {
            if (uVar8 != 0xc005) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            pcVar30 = thunk_FUN_00529fe0;
            pCVar10 = thunk_FUN_00571240(s_BUT_PLUS_007c7360,0);
            bVar25 = 1;
            goto LAB_00534654;
          }
          UVar29 = 0x274f;
          goto cf_common_exit_00536DB5;
        }
        if (uVar8 == 0xc002) {
          UVar29 = 0x274e;
          goto cf_common_exit_00536DB5;
        }
        if (0xa106 < uVar8) {
          if (uVar8 != 0xc001) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if ((this_01->field_0x1a4 == '\x05') && (this_01->field_0x1ab == '\a')) {
            DAT_00808788 = 0;
          }
          *(undefined4 *)&this_01->field_0x1a0 = 1;
          *(undefined4 *)(param_1 + 0x10) = 0xa101;
          (**(code **)*DAT_00802a30)(param_1);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (0xa104 < uVar8) {
          if (this_01->field_0x1a4 != '\x05') {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(uint *)(param_1 + 0x10) = (uVar8 != 0xa105) + 0xc09f;
          (*(code *)**(undefined4 **)this_01)(param_1);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (uVar8 != 0x8165) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar16 = s_BUT_SLDN_007c3e34;
      }
      pcVar30 = thunk_FUN_00529fe0;
      pCVar10 = thunk_FUN_00571240(pcVar16,0);
      bVar25 = 6;
    }
LAB_00534654:
    UPanelTy::PaintBut((UPanelTy *)this_01,param_1,bVar25,pCVar10,pcVar30);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  switch(uVar8) {
  case 0xc09f:
    uVar5 = this_01->field_0x1a4;
    switch(uVar5) {
    case 1:
      this_01->field_0x1a9 = uVar5;
      this_01->field_0x1a4 = 3;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 2:
      uVar2 = this_01->field_0x1a9;
      this_01->field_0x1a9 = uVar5;
      this_01->field_0x1aa = uVar2;
      this_01->field_0x1a4 = 7;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 5:
      switch(this_01->field_0x1ab) {
      case 1:
        goto switchD_00534835_caseD_1;
      case 2:
        uVar8 = 0xffffffff;
        pcVar16 = &DAT_00807680;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = (char *)&DAT_0080ee1a;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = (char *)&DAT_0080ee1a;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = (char *)&DAT_00807ddd;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = (char *)&DAT_0080ee1a;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
        uVar8 = 0xffffffff;
        pcVar16 = PTR_DAT_0079ad00;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = (char *)&DAT_0080ee1a;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = (char *)&this_01[1].field_003C;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = (char *)&DAT_0080ee1a;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        SwitchOptPanel(this_01,-1);
        this_01->field_019C = 0x6100;
        DAT_0080879c = 1;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case 3:
        wsprintfA((LPSTR)&DAT_0080ee1a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080ef1e);
        SwitchOptPanel(this_01,-1);
        uVar8 = 0xffffffff;
        this_01->field_019C = 0x6100;
        pcVar16 = (char *)&DAT_0080ee1a;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = &DAT_0080ed16;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        thunk_FUN_0056e9e0(&DAT_00807620,0);
        puVar9 = &DAT_0080a14f;
        puVar17 = &DAT_008087b6;
        for (iVar6 = 0x666; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar17 = puVar17 + 1;
        }
        *(undefined1 *)puVar17 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)&DAT_0080baec;
        puVar17 = &DAT_0080e43b;
        for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar17 = puVar17 + 1;
        }
        if (DAT_0080ed12 != (undefined4 *)0x0) {
          FUN_006ab060(&DAT_0080ed12);
        }
        DAT_0080ed12 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x8db);
        puVar9 = &DAT_0080bae8;
        puVar17 = DAT_0080ed12;
        for (iVar6 = 0x236; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)puVar9;
        *(undefined1 *)((int)puVar17 + 2) = *(undefined1 *)((int)puVar9 + 2);
        DAT_0080879c = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case 4:
        SwitchOptPanel(this_01,-1);
        this_01->field_019C = 0x6102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
        }
        if (DAT_008067a0 == '\0') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_00802a38 != (int *)0x0) {
          uVar31 = ((uint)(DAT_00802a38[0x39] - DAT_00802a38[0xd]) < 6000) + 2;
          goto LAB_00535271;
        }
        goto LAB_0053526f;
      case 5:
        SwitchOptPanel(this_01,-1);
        this_01->field_019C = 0x7102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        break;
      case 6:
        uVar8 = 0xffffffff;
        pcVar16 = &DAT_00807680;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = &this_01->field_0x6c;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = (char *)&DAT_00807ddd;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_006b8280(&this_01->field_0x6c,&this_01->field_0x6c);
        uVar8 = 0xffffffff;
        pcVar16 = PTR_DAT_0079ad00;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = (char *)&this_01[1].field_003C;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = PTR_DAT_0079acf4;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        DeleteFileA(&this_01->field_0x6c);
        uVar8 = 0xffffffff;
        pcVar16 = &DAT_00807680;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = &this_01->field_0x6c;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = (char *)&DAT_00807ddd;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_006b8280(&this_01->field_0x6c,&this_01->field_0x6c);
        uVar8 = 0xffffffff;
        pcVar16 = PTR_DAT_0079ad00;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = (char *)&this_01[1].field_003C;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar16 = PTR_DAT_0079acf8;
        do {
          pcVar19 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar6 = -1;
        pcVar16 = &this_01->field_0x6c;
        do {
          pcVar18 = pcVar16;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar18 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar18;
        } while (cVar1 != '\0');
        pcVar16 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar19 = pcVar19 + 1;
        }
        DeleteFileA(&this_01->field_0x6c);
        uVar5 = this_01->field_0x1a9;
        this_01->field_0x1a9 = this_01->field_0x1aa;
        this_01->field_0x1a4 = uVar5;
        SetOptControls(this_01);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case 7:
        this_01->field_0028 = 0x44ff;
        (**(code **)(*DAT_00802a38 + 0x20))(&this_01->field_0x18);
        this_01->field_0028 = 0xc001;
        *(undefined4 *)&this_01->field_0x34 = 0;
        (*(code *)**(undefined4 **)this_01)(&this_01->field_0x18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 1;
      thunk_FUN_00568010(&g_sound,CASE_1);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 7:
      thunk_FUN_005713b0(0x807620);
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        DAT_00807300._0_1_ = '\x01';
      }
      else if (iVar6 == 2) {
        DAT_00807300._0_1_ = '\b';
      }
      else if (iVar6 == 3) {
        DAT_00807300._0_1_ = '\x02';
      }
      switch((char)DAT_00807300) {
      case '\x01':
        local_c = (undefined4 *)0x0;
        break;
      case '\x02':
        local_d0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_d0;
        iVar6 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0,unaff_EDI,unaff_ESI);
        if (iVar6 == 0) {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x80) & 1;
          }
          if (uVar8 != 0) {
            Library::DKW::SND::FUN_006b7e00(DAT_0080765c,3,&local_30,&local_28);
          }
          uVar8 = (uint)(local_30 + local_28) >> 1;
        }
        else {
          uVar8 = 0;
        }
        if (g_sound == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(uint *)(DAT_0080765c + 0x80) & 1;
        }
        g_currentExceptionFrame = local_d0.previous;
        if (uVar13 == 0) {
LAB_005350ba:
          uVar13 = 0;
        }
        else {
          uVar13 = (*(int *)(DAT_0080765c + 0x94) - *(int *)(DAT_0080765c + 0x90)) + 1;
        }
        goto LAB_005350bc;
      default:
        break;
      case '\x04':
        local_224.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_224;
        iVar6 = Library::MSVCRT::__setjmp3(local_224.jumpBuffer,0,unaff_EDI,unaff_ESI);
        if (iVar6 == 0) {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x68) & 1;
          }
          if (uVar8 != 0) {
            Library::DKW::SND::FUN_006b7e00(DAT_0080765c,2,&local_24,&local_2c);
          }
          uVar8 = local_24 + local_2c >> 1;
        }
        else {
          uVar8 = 0;
        }
        if (g_sound == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(uint *)(DAT_0080765c + 0x68) & 1;
        }
        g_currentExceptionFrame = local_224.previous;
        if (uVar13 == 0) goto LAB_005350ba;
        uVar13 = (*(int *)(DAT_0080765c + 0x7c) - *(int *)(DAT_0080765c + 0x78)) + 1;
LAB_005350bc:
        local_c = (undefined4 *)((uVar8 * 0x1f) / uVar13);
        this_01 = local_10;
        break;
      case '\b':
        local_c = (undefined4 *)(((DAT_0080730a + 4000) * 0x1f) / 0xfa1);
      }
      puVar9 = local_c;
      PaintVolume(this_01,0,(byte)local_c);
      uVar28 = *(undefined4 *)&this_01[1].field_0xc;
      this_01->field_0028 = 0x22;
      *(undefined4 **)&this_01->field_0x2c = puVar9;
      FUN_006e6080(this_01,2,uVar28,(undefined4 *)&this_01->field_0x18);
      this_01->field_0028 = 0x20;
      uVar28 = *(undefined4 *)&this_01[1].field_0xc;
      *(uint *)&this_01->field_0x2c = (uint)((char)DAT_00807300 != '\x01');
      FUN_006e6080(this_01,2,uVar28,(undefined4 *)&this_01->field_0x18);
      thunk_FUN_00571320(&DAT_00807620,DAT_00856d78);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 8:
      DAT_0080733b = 4 - **(char **)(param_1 + 0x14);
      if (DAT_0080877e == '\0') {
        iVar6 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 0x14);
      }
      else {
        iVar6 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 8);
      }
      local_44 = (uint)DAT_0080733b;
      if (DAT_00808783 == '\x03') {
        local_48 = 4;
        thunk_FUN_0054edf0((undefined4 *)0x5,&local_48,1,0xffffffff);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_00807598 != (void *)0x0) {
        FUN_006e8640(DAT_00807598,*(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 0x10),
                     *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar6 + 4));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 9:
      DAT_0080731a = (uint)(DAT_0080731a == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 0xd:
      uVar28 = *(undefined4 *)(this_01 + 1);
      this_01[1].field_0x14c = **(char **)(param_1 + 0x14) + -1;
      this_01->field_0028 = 0x20;
      *(undefined4 *)&this_01->field_0x2c = 1;
      FUN_006e6080(this_01,2,uVar28,(undefined4 *)&this_01->field_0x18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    break;
  case 0xc0a0:
    cVar1 = this_01->field_0x1a4;
    switch(cVar1) {
    case '\x01':
      this_01->field_0x1a9 = cVar1;
      this_01->field_0x1a4 = 4;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case '\x02':
      this_01->field_0x1aa = this_01->field_0x1a9;
      this_01->field_0x1a9 = cVar1;
      this_01->field_0x1a4 = 6;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case '\x03':
switchD_00535190_caseD_3:
      this_01->field_0028 = 0xc0a1;
      *(undefined4 *)&this_01->field_0x34 = 0;
      (*(code *)**(undefined4 **)this_01)(&this_01->field_0x18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case '\x05':
    case '\v':
      if (this_01->field_0x1a9 != '\0') {
        this_01->field_0x1a4 = this_01->field_0x1a9;
        this_01->field_0x1a9 = this_01->field_0x1aa;
        SetOptControls(this_01);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (cVar1 == '\x05') {
        this_01->field_0x1a4 = 1;
        SetOptControls(this_01);
        SwitchOptPanel(this_01,-1);
        if (this_01->field_0x1ab != '\a') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        DAT_00808788 = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      SwitchOptPanel(this_01,-1);
      if ((byte)this_01->field_0x1ab < 10) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (0xb < (byte)this_01->field_0x1ab) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_008067a0 == '\0') {
        this_01->field_019C = 0x6102;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case '\x06':
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 2;
      thunk_FUN_00568010(&g_sound,CASE_2);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case '\b':
      DAT_0080733a = '\x03' - **(char **)(param_1 + 0x14);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case '\t':
      DAT_00807322 = (uint)(DAT_00807322 == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case '\r':
      DAT_00807348 = this_01[1].field_0x14c;
      SwitchOptPanel(this_01,-1);
      this_01->field_019C = 0x6107;
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
LAB_0053526f:
    uVar31 = 4;
LAB_00535271:
    CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,uVar31);
    this_01->field_019C = 0x610a;
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0a1:
    uVar5 = this_01->field_0x1a4;
    switch(uVar5) {
    case 1:
      *(undefined4 *)&this_01->field_0x1a5 = 0x3e83;
      this_01->field_0x1a9 = uVar5;
      this_01->field_0x1ab = 3;
      this_01->field_0x1a4 = 5;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 2:
      uVar2 = this_01->field_0x1a9;
      this_01->field_0x1a9 = uVar5;
      this_01->field_0x1aa = uVar2;
      this_01->field_0x1a4 = 8;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 3:
      this_01->field_0028 = 0x32;
      FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 1),(undefined4 *)&this_01->field_0x18);
      if (*(int *)(*(int *)&this_01[1].field_0x38 + 8) < 1) {
        pcVar16 = (char *)0x0;
      }
      else {
        pcVar16 = (char *)**(undefined4 **)(*(int *)&this_01[1].field_0x38 + 0x14);
      }
      uVar8 = 0xffffffff;
      do {
        pcVar19 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      puVar9 = &this_01[1].field_003C;
      pcVar16 = pcVar19 + -uVar8;
      pcVar19 = (char *)puVar9;
      for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar19 = pcVar19 + 1;
      }
      pbVar20 = &DAT_008016a0;
      pbVar11 = (byte *)puVar9;
      do {
        bVar25 = *pbVar11;
        bVar21 = bVar25 < *pbVar20;
        if (bVar25 != *pbVar20) {
LAB_0053556a:
          iVar6 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
          goto LAB_0053556f;
        }
        if (bVar25 == 0) break;
        bVar25 = pbVar11[1];
        bVar21 = bVar25 < pbVar20[1];
        if (bVar25 != pbVar20[1]) goto LAB_0053556a;
        pbVar11 = pbVar11 + 2;
        pbVar20 = pbVar20 + 2;
      } while (bVar25 != 0);
      iVar6 = 0;
LAB_0053556f:
      if (iVar6 == 0) {
        *(undefined4 *)&this_01->field_0x1a5 = 0x3f4b;
        this_01->field_0x1aa = this_01->field_0x1a9;
        this_01->field_0x1a9 = this_01->field_0x1a4;
        this_01->field_0x1a4 = 0xb;
        SetOptControls(this_01);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      iVar6 = CheckFiles(this_01,(byte *)puVar9);
      if (iVar6 != 0) {
        this_01->field_0x1aa = this_01->field_0x1a9;
        *(undefined4 *)&this_01->field_0x1a5 = 0x3f49;
        this_01->field_0x1a9 = this_01->field_0x1a4;
        this_01->field_0x1a4 = 5;
        this_01->field_0x1ab = 1;
        SetOptControls(this_01);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
switchD_00534835_caseD_1:
      thunk_FUN_005335e0();
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 4:
      this_01->field_0028 = 0x26;
      FUN_006e6080(this_01,2,this_01->field_01B5,(undefined4 *)&this_01->field_0x18);
      if (*(int *)&this_01->field_0x2c < *(int *)(*(int *)&this_01[1].field_0x30 + 8)) {
        pcVar16 = *(char **)(*(int *)(*(int *)&this_01[1].field_0x30 + 0x14) +
                            *(int *)&this_01->field_0x2c * 4);
      }
      else {
        pcVar16 = (char *)0x0;
      }
      uVar8 = 0xffffffff;
      do {
        pcVar19 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar19 + -uVar8;
      pcVar19 = (char *)&this_01[1].field_003C;
      for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar5 = this_01->field_0x1a9;
      this_01[1].field_0028 = *(undefined4 *)&this_01->field_0x2c;
      *(undefined4 *)&this_01->field_0x1a5 = 0x3f48;
      this_01->field_0x1aa = uVar5;
      this_01->field_0x1a9 = this_01->field_0x1a4;
      this_01->field_0x1ab = 2;
      this_01->field_0x1a4 = 5;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 4;
      thunk_FUN_00568010(&g_sound,CASE_4);
      SoundClassTy::PlaySound_thunk
                ((SoundClassTy *)&g_sound,SOUND_MODE_1,(char *)0x0,0x4b7,(SoundPosition *)0x0,0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 9:
      DAT_0080731e = (uint)(DAT_0080731e == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 0xd:
      DAT_00807342 = (uint)(DAT_00807342 == 0);
      if (DAT_008016d8 != (PopUpTy *)0x0) {
        PopUpTy::ChangeState(DAT_008016d8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 0xe:
      local_c = (undefined4 *)0x0;
      local_14 = (undefined4 *)0x0;
      local_20 = (ushort *)0x0;
      local_8 = 1;
      local_1c = (uint *)0x0;
      this_01->field_0028 = 0x26;
      FUN_006e6080(this_01,2,this_01->field_01B5,(undefined4 *)&this_01->field_0x18);
      iVar6 = *(int *)&this_01[1].field_0x144;
      if (*(uint *)&this_01->field_0x2c < *(uint *)(iVar6 + 0xc)) {
        iVar6 = *(int *)(iVar6 + 8) * *(uint *)&this_01->field_0x2c + *(int *)(iVar6 + 0x1c);
      }
      else {
        iVar6 = 0;
      }
      if (*(int *)(iVar6 + 0x6c) == 0) {
        switch(_DAT_008087a0 & 0xff) {
        case 1:
        case 4:
        case 6:
        case 7:
        case 0xd:
        case 0xe:
        case 0x13:
          wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079acf0,
                    PTR_s_STRATEGS_0079acfc);
          break;
        case 2:
        case 3:
        case 5:
        case 8:
        case 0xf:
          wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080ef1e);
        }
        local_19c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_19c;
        iVar6 = Library::MSVCRT::__setjmp3(local_19c.jumpBuffer,0,unaff_EDI,unaff_ESI);
        this_01 = local_10;
        this_00 = extraout_ECX;
        puVar9 = local_c;
        if (iVar6 == 0) {
          puVar9 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
          iVar6 = *(int *)&this_01[1].field_0x144;
          if (*(uint *)&this_01->field_0x2c < *(uint *)(iVar6 + 0xc)) {
            iVar6 = *(int *)(iVar6 + 8) * *(uint *)&this_01->field_0x2c + *(int *)(iVar6 + 0x1c);
          }
          else {
            iVar6 = 0;
          }
          local_c = puVar9;
          local_20 = thunk_FUN_00648ab0((int)puVar9,(char *)(iVar6 + 0x4c),(int *)&local_18);
          uVar8 = local_8;
          this_00 = extraout_ECX_00;
          if (local_20 != (ushort *)0x0) {
            local_14 = Library::DKW::LIB::FUN_006aac10(local_18 + local_8 * 2);
            *(undefined1 *)local_14 = 1;
            pbVar11 = (byte *)((int)local_14 + uVar8);
            *pbVar11 = DAT_0080874d;
            puVar14 = local_20;
            pbVar11 = pbVar11 + uVar8;
            for (uVar13 = local_18 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pbVar11 = *(undefined4 *)puVar14;
              puVar14 = puVar14 + 2;
              pbVar11 = pbVar11 + 4;
            }
            for (uVar8 = local_18 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar11 = (byte)*puVar14;
              puVar14 = (ushort *)((int)puVar14 + 1);
              pbVar11 = pbVar11 + 1;
            }
            thunk_FUN_0054edf0((undefined4 *)0x32,local_14,1,local_18 + local_8 * 2);
            local_1c = (uint *)0x1;
            this_00 = extraout_ECX_01;
            puVar9 = local_c;
          }
        }
        g_currentExceptionFrame = local_19c.previous;
        if (puVar9 != (undefined4 *)0x0) {
          cMf32::delete(this_00,puVar9);
        }
        if (local_20 != (ushort *)0x0) {
          FUN_006ab060(&local_20);
        }
        if (local_14 != (undefined4 *)0x0) {
          FUN_006ab060(&local_14);
        }
      }
      else {
        local_14 = Library::DKW::LIB::FUN_006aac10(2);
        if (local_14 != (undefined4 *)0x0) {
          *(undefined1 *)local_14 = 0;
          *(byte *)((int)local_14 + 1) = DAT_0080874d;
          thunk_FUN_0054edf0((undefined4 *)0x32,local_14,1,2);
          FUN_006ab060(&local_14);
          local_1c = (uint *)0x1;
        }
      }
      if (local_1c != (uint *)0x0) {
        this_01->field_0028 = 0xc001;
        *(undefined4 *)&this_01->field_0x34 = 0;
        (*(code *)**(undefined4 **)this_01)(&this_01->field_0x18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case 0xc0a2:
    uVar5 = this_01->field_0x1a4;
    switch(uVar5) {
    case 1:
      if (DAT_008067a0 == '\0') {
        iVar6 = 0x3e84;
      }
      else {
        iVar6 = 0x3e96 - (uint)((uint)(DAT_00802a38[0x39] - DAT_00802a38[0xd]) < 6000);
      }
      this_01->field_0x1a9 = uVar5;
      *(int *)&this_01->field_0x1a5 = iVar6;
      this_01->field_0x1ab = 4;
      this_01->field_0x1a4 = 5;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 2:
      uVar2 = this_01->field_0x1a9;
      this_01->field_0x1a9 = uVar5;
      this_01->field_0x1aa = uVar2;
      this_01->field_0x1a4 = 9;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 3:
    case 4:
      this_01->field_0028 = 0x26;
      FUN_006e6080(this_01,2,this_01->field_01B5,(undefined4 *)&this_01->field_0x18);
      if (*(int *)&this_01->field_0x2c < *(int *)(*(int *)&this_01[1].field_0x30 + 8)) {
        pcVar16 = *(char **)(*(int *)(*(int *)&this_01[1].field_0x30 + 0x14) +
                            *(int *)&this_01->field_0x2c * 4);
      }
      else {
        pcVar16 = (char *)0x0;
      }
      uVar8 = 0xffffffff;
      do {
        pcVar19 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar19 + -uVar8;
      pcVar19 = (char *)&this_01[1].field_003C;
      for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar5 = this_01->field_0x1a9;
      this_01[1].field_0028 = *(undefined4 *)&this_01->field_0x2c;
      *(undefined4 *)&this_01->field_0x1a5 = 0x3f4a;
      this_01->field_0x1aa = uVar5;
      this_01->field_0x1a9 = this_01->field_0x1a4;
      this_01->field_0x1ab = 6;
      this_01->field_0x1a4 = 5;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 8;
      thunk_FUN_00568010(&g_sound,CASE_8);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 8:
      g_currentExceptionFrame = local_8c.previous;
      DAT_00807349 = **(char **)(param_1 + 0x14) + -1;
      return 0;
    case 9:
      DAT_00807326 = DAT_00807326 == '\0';
      thunk_FUN_00440700((uint)(byte)DAT_00807326);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 0xd:
      DAT_00807346 = (*(char *)(param_1 + 0x14) + '\x01') * '\x05';
      thunk_FUN_00540760(*(undefined4 **)&this_01->field_0x68,0xaa,0x6f,'\x01',
                         *(byte **)&this_01->field_0x18c);
      wsprintfA(&this_01->field_0x6c,&DAT_007c1890,(uint)(byte)DAT_00807346);
      ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x17c,*(int *)&this_01->field_0x68,0,0xaa,0x6f,
                       *(int *)(*(int *)&this_01->field_0x18c + 4),
                       *(int *)(*(int *)&this_01->field_0x18c + 8));
      ccFntTy::WrTxt(*(ccFntTy **)&this_01->field_0x17c,(uint *)&this_01->field_0x6c,-2,-1,0,-1,-1);
      if (DAT_008016d8 != (PopUpTy *)0x0) {
        PopUpTy::ChangeNumStr(DAT_008016d8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case 0xc0a3:
    uVar5 = this_01->field_0x1a4;
    switch(uVar5) {
    case 1:
      *(undefined4 *)&this_01->field_0x1a5 = 0x3e85;
      this_01->field_0x1a9 = uVar5;
      this_01->field_0x1ab = 5;
      this_01->field_0x1a4 = 5;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 2:
      uVar2 = this_01->field_0x1a9;
      this_01->field_0x1a9 = uVar5;
      this_01->field_0x1aa = uVar2;
      this_01->field_0x1a4 = 0xd;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 6:
      DAT_0080730e = (uint)(*(int *)(param_1 + 0x14) * 4000) / 0x1e - 4000;
      thunk_FUN_005682c0(&g_sound,DAT_0080730e);
      PaintVolume(this_01,0,*(byte *)(param_1 + 0x14));
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 7:
      if ((char)DAT_00807300 == '\x02') {
        if (g_sound == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(DAT_0080765c + 0x80) & 1;
        }
        if (uVar8 != 0) {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x80) & 1;
          }
          if (uVar8 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (*(int *)(DAT_0080765c + 0x94) - *(int *)(DAT_0080765c + 0x90)) + 1;
          }
          local_8 = (uint)((iVar6 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
          DAT_00807300._2_2_ = (undefined2)local_8;
          uRam00807304 = (undefined2)(local_8 >> 0x10);
          local_158.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_158;
          iVar6 = Library::MSVCRT::__setjmp3(local_158.jumpBuffer,0,unaff_EDI,unaff_ESI);
          pIVar4 = local_158.previous;
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(uint *)(DAT_0080765c + 0x80) & 1;
            }
            if (uVar8 != 0) {
              Library::DKW::SND::FUN_006b7f00(DAT_0080765c,3,local_8,local_8);
            }
            g_currentExceptionFrame = local_158.previous;
            pIVar4 = g_currentExceptionFrame;
          }
LAB_00535ef1:
          g_currentExceptionFrame = pIVar4;
          PaintVolume(local_10,0,*(byte *)(param_1 + 0x14));
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else if ((char)DAT_00807300 == '\x04') {
        if (g_sound == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(DAT_0080765c + 0x68) & 1;
        }
        if (uVar8 != 0) {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x68) & 1;
          }
          if (uVar8 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (*(int *)(DAT_0080765c + 0x7c) - *(int *)(DAT_0080765c + 0x78)) + 1;
          }
          _DAT_00807306 = (uint)((iVar6 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
          local_114.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_114;
          local_8 = _DAT_00807306;
          iVar6 = Library::MSVCRT::__setjmp3(local_114.jumpBuffer,0,unaff_EDI,unaff_ESI);
          pIVar4 = local_114.previous;
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(uint *)(DAT_0080765c + 0x68) & 1;
            }
            if (uVar8 != 0) {
              Library::DKW::SND::FUN_006b7f00(DAT_0080765c,2,local_8,local_8);
            }
            g_currentExceptionFrame = local_114.previous;
            pIVar4 = g_currentExceptionFrame;
          }
          goto LAB_00535ef1;
        }
      }
      else if ((char)DAT_00807300 == '\b') {
        DAT_0080730a = (uint)(*(int *)(param_1 + 0x14) * 4000) / 0x1e - 4000;
        thunk_FUN_005686c0(&g_sound,DAT_0080730a);
        PaintVolume(this_01,0,*(byte *)(param_1 + 0x14));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case 9:
      DAT_00807328 = (uint)(DAT_00807328 == 0);
      if (DAT_00807328 != 0) {
        FUN_006ddb70((int)DAT_00807598);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      FUN_006ddbb0((int)DAT_00807598);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 0xd:
      DAT_00807347 = *(byte *)(param_1 + 0x14);
      thunk_FUN_00540760(*(undefined4 **)&this_01->field_0x68,0xaa,0x81,'\x01',
                         *(byte **)&this_01->field_0x18c);
      wsprintfA(&this_01->field_0x6c,&DAT_007c1890,DAT_00807347 + 1);
      ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x17c,*(int *)&this_01->field_0x68,0,0xaa,0x81,
                       *(int *)(*(int *)&this_01->field_0x18c + 4),
                       *(int *)(*(int *)&this_01->field_0x18c + 8));
      ccFntTy::WrTxt(*(ccFntTy **)&this_01->field_0x17c,(uint *)&this_01->field_0x6c,-2,-1,0,-1,-1);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    break;
  case 0xc0a4:
    if (this_01->field_0x1a4 == '\x01') {
      this_01->field_0x1a9 = 1;
      this_01->field_0x1a4 = 0xc;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (this_01->field_0x1a4 == '\t') {
      DAT_0080732c = (uint)(DAT_0080732c == 0);
      this_01->field_0028 = 0x440f;
      FUN_006e6000(this_01,0xf,0,(undefined4 *)&this_01->field_0x18);
      if (DAT_00807598 != (void *)0x0) {
        FUN_006e8630(DAT_00807598,DAT_0080732c);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case 0xc0a5:
    bVar25 = this_01->field_0x1a4;
    if (bVar25 == 1) {
      this_01->field_0x1a9 = 1;
      this_01->field_0x1a4 = 2;
      SetOptControls(this_01);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if ((5 < bVar25) && (bVar25 < 8)) {
      if (g_sound == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(DAT_0080765c + 0x50) & 1;
      }
      if (uVar8 != 0) {
        if (g_sound == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(DAT_0080765c + 0x50) & 1;
        }
        if (uVar8 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*(int *)(DAT_0080765c + 100) - *(int *)(DAT_0080765c + 0x60)) + 1;
        }
        _DAT_00807312 = (uint)((iVar6 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
        local_1e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_1e0;
        local_8 = _DAT_00807312;
        iVar6 = Library::MSVCRT::__setjmp3(local_1e0.jumpBuffer,0,unaff_EDI,unaff_ESI);
        if (iVar6 == 0) {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x50) & 1;
          }
          if (uVar8 != 0) {
            Library::DKW::SND::FUN_006b7f00(DAT_0080765c,1,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_1e0.previous;
        PaintVolume(local_10,2,*(byte *)(param_1 + 0x14));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case 0xc0a6:
    if ((5 < (byte)this_01->field_0x1a4) && ((byte)this_01->field_0x1a4 < 8)) {
      if (g_sound == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(DAT_0080765c + 0x38) & 1;
      }
      if (uVar8 != 0) {
        if (g_sound == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(DAT_0080765c + 0x38) & 1;
        }
        if (uVar8 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (*(int *)(DAT_0080765c + 0x4c) - *(int *)(DAT_0080765c + 0x48)) + 1;
        }
        _DAT_00807316 = (uint)((iVar6 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
        local_268.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_268;
        local_8 = _DAT_00807316;
        iVar6 = Library::MSVCRT::__setjmp3(local_268.jumpBuffer,0,unaff_EDI,unaff_ESI);
        if (iVar6 == 0) {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(uint *)(DAT_0080765c + 0x38) & 1;
          }
          if (uVar8 != 0) {
            Library::DKW::SND::FUN_006b7f00(DAT_0080765c,0,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_268.previous;
        PaintVolume(local_10,3,*(byte *)(param_1 + 0x14));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case 0xc0af:
    switch(this_01->field_0x1a4) {
    case 1:
      if (DAT_0080874e == '\x03') {
        puVar12 = &LAB_00404692;
        UVar29 = 0x3e81;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
        UVar29 = 0x3e81;
      }
      goto cf_common_exit_00536F8B;
    case 2:
      if (DAT_0080874e == '\x03') {
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        puVar12 = &LAB_00404692;
        UVar29 = 0x3e8b;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        UVar29 = 0x3e8b;
      }
      goto cf_common_exit_00536F92;
    default:
      goto cf_common_exit_00536FB7;
    case 5:
      UVar29 = 0x273e;
      goto cf_common_exit_00536DB5;
    case 6:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar12 = &LAB_00403fe9;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3efc;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3efc;
      }
      break;
    case 7:
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        if (DAT_0080874e == '\x03') {
          iVar6 = 1;
          puVar12 = &LAB_00405c7c;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar29 = 0x3ee7;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
          iVar6 = 1;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar29 = 0x3ee7;
        }
      }
      else if (iVar6 == 2) {
        if (DAT_0080874e == '\x03') {
          iVar6 = 1;
          puVar12 = &LAB_00405c7c;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar29 = 0x3ee5;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
          iVar6 = 1;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar29 = 0x3ee5;
        }
      }
      else {
        if (iVar6 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar6 = 1;
          puVar12 = &LAB_00405c7c;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar29 = 0x3ee6;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
          iVar6 = 1;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar29 = 0x3ee6;
        }
      }
      break;
    case 8:
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar29 = 0x3ef1;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_01,param_1,pCVar10,UVar29,pcVar30,puVar12,iVar6);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar6 != 2) {
        if (iVar6 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar29 = 0x3ef2;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_01,param_1,pCVar10,UVar29,pcVar30,puVar12,iVar6);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        puVar12 = &LAB_00405c7c;
      }
      else {
joined_r0x0053686a:
        puVar12 = &LAB_00402919;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_00405b87;
        }
      }
LAB_00536434:
      UVar29 = 0x3ef0;
cf_common_exit_00536441:
      iVar6 = 1;
      pcVar30 = thunk_FUN_0052a4d0;
      pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
      PaintDblBut(this_01,param_1,pCVar10,UVar29,pcVar30,puVar12,iVar6);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 9:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar12 = &LAB_00403fe9;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef4;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef4;
      }
      break;
    case 0xd:
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar29 = 0x3e90;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_01,param_1,pCVar10,UVar29,pcVar30,puVar12,iVar6);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar6 == 2) {
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar29 = 0x3e91;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_01,param_1,pCVar10,UVar29,pcVar30,puVar12,iVar6);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar6 == 3) {
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
        }
        iVar6 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar29 = 0x3e92;
        pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_01,param_1,pCVar10,UVar29,pcVar30,puVar12,iVar6);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      goto cf_common_exit_00536FB7;
    }
cf_common_exit_00536EE8:
    uVar28 = 0;
    iVar26 = 1;
    pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    pCVar10 = FUN_006f2c00(pCVar10,iVar26,uVar28);
    PaintDblBut(this_01,param_1,pCVar10,UVar29,pcVar30,puVar12,iVar6);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0b0:
    switch(this_01->field_0x1a4) {
    case 1:
      if (DAT_0080874e == '\x03') {
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        puVar12 = &LAB_00404692;
        UVar29 = 0x3e82;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        UVar29 = 0x3e82;
      }
      break;
    case 2:
      if (DAT_0080874e == '\x03') {
        puVar12 = &LAB_00404692;
        UVar29 = 0x3e8a;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
        UVar29 = 0x3e8a;
      }
      goto cf_common_exit_00536F8B;
    case 3:
      iVar6 = *(int *)&this_01[1].field_0x2c;
      uVar8 = *(uint *)(iVar6 + 0x14);
      if (uVar8 == 0) {
        uVar8 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar6 + 8);
      }
      local_24 = (DAT_0080874e != '\x03') - 1 & 0x73;
      puVar9 = (undefined4 *)FUN_006b4fa0(iVar6);
      uVar5 = (undefined1)local_24;
      for (uVar13 = uVar8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar9 = CONCAT22(CONCAT11(uVar5,uVar5),CONCAT11(uVar5,uVar5));
        puVar9 = puVar9 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar9 = uVar5;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)&this_01->field_0x17c,*(int *)&this_01[1].field_0x2c,0,0,0,0,0);
      ccFntTy::WrStr(*(ccFntTy **)&this_01->field_0x17c,(uint *)**(undefined4 **)(param_1 + 0x14),0,
                     -1,0);
      uVar3 = *(ushort *)(param_1 + 0x18);
      if ((uVar3 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
        FUN_006b5b10(*(int *)&this_01[1].field_0x2c,0,(uint)uVar3,(uint)*(ushort *)(param_1 + 0x1a),
                     (uint)uVar3,*(ushort *)(param_1 + 0x1a) + 10,0x6c,0xd);
      }
      iVar6 = *(int *)&this_01[1].field_0x2c;
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)&this_01->field_0x68,0,0x26,0x1c,iVar6,0,0,0,*(int *)(iVar6 + 4),
                 *(int *)(iVar6 + 8));
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)&this_01->field_0x60,0xffffffff,this_01->field_003C,
                 this_01->field_0044);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case 5:
      UVar29 = 0x273f;
      goto cf_common_exit_00536DB5;
    case 6:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar12 = &LAB_00403fe9;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3efd;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3efd;
      }
      goto cf_common_exit_00536EE8;
    case 8:
      iVar6 = **(int **)(param_1 + 0x14);
      if (iVar6 == 1) {
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
          UVar29 = 0x3ef1;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
          UVar29 = 0x3ef1;
        }
        goto cf_common_exit_00536441;
      }
      if (iVar6 != 2) {
        if (iVar6 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
          UVar29 = 0x3ef2;
          goto cf_common_exit_00536441;
        }
        goto LAB_00536d52;
      }
      if (DAT_0080874e != '\x03') goto joined_r0x0053686a;
      puVar12 = &LAB_00405c7c;
      goto LAB_00536434;
    case 9:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar12 = &LAB_00403fe9;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef5;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef5;
      }
      goto cf_common_exit_00536EE8;
    case 0xb:
switchD_00536a2b_caseD_3:
      UVar29 = 0x2751;
cf_common_exit_00536DB5:
      pCVar10 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      UPanelTy::PaintIBut((UPanelTy *)this_01,param_1,pCVar10,UVar29);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case 0xd:
      if (DAT_0080874e == '\x03') {
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        puVar12 = &LAB_00404692;
        UVar29 = 0x3e93;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        UVar29 = 0x3e93;
      }
    }
    goto cf_common_exit_00536F92;
  case 0xc0b1:
    switch(this_01->field_0x1a4) {
    case 1:
      if (DAT_0080874e == '\x03') {
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        puVar12 = &LAB_00404692;
        UVar29 = 0x3e83;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        UVar29 = 0x3e83;
      }
      goto cf_common_exit_00536F92;
    case 2:
      if (DAT_0080874e == '\x03') {
        puVar12 = &LAB_00404692;
        UVar29 = 0x3e8c;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
        UVar29 = 0x3e8c;
      }
      goto cf_common_exit_00536F8B;
    case 3:
    case 4:
      goto switchD_00536a2b_caseD_3;
    default:
      goto cf_common_exit_00536FB7;
    case 6:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar12 = &LAB_00403fe9;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3efe;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3efe;
      }
      break;
    case 8:
      if (**(int **)(param_1 + 0x14) == 1) {
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
          UVar29 = 0x3f02;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
          UVar29 = 0x3f02;
        }
      }
      else {
        if (**(int **)(param_1 + 0x14) != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
          UVar29 = 0x3f03;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
          UVar29 = 0x3f03;
        }
      }
      goto cf_common_exit_00536441;
    case 9:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar12 = &LAB_00403fe9;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef6;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef6;
      }
      break;
    case 0xd:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar12 = &LAB_00403fe9;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef8;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef8;
      }
      break;
    case 0xe:
      UVar29 = 0x2752;
      goto cf_common_exit_00536DB5;
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b2:
    switch(this_01->field_0x1a4) {
    case 1:
      if (DAT_0080874e == '\x03') {
        puVar12 = &LAB_00404692;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
      }
      if (DAT_008067a0 == '\0') {
        UVar29 = 0x3e84;
      }
      else {
        UVar29 = 0x3e96 - ((uint)(DAT_00802a38[0x39] - DAT_00802a38[0xd]) < 6000);
      }
      goto cf_common_exit_00536F8B;
    case 2:
      if (DAT_0080874e == '\x03') {
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        puVar12 = &LAB_00404692;
        UVar29 = 0x3e8d;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
        uVar28 = *(undefined4 *)&this_01->field_0x180;
        UVar29 = 0x3e8d;
      }
      goto cf_common_exit_00536F92;
    case 3:
    case 4:
      UVar29 = 0x2750;
      goto cf_common_exit_00536DB5;
    default:
      goto cf_common_exit_00536FB7;
    case 6:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar12 = &LAB_00403fe9;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3eff;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3eff;
      }
      break;
    case 8:
      if (**(int **)(param_1 + 0x14) != 1) {
        if (**(int **)(param_1 + 0x14) != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar12 = &LAB_00405c7c;
          UVar29 = 0x3f06;
        }
        else {
          puVar12 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_00405b87;
          }
          UVar29 = 0x3f06;
        }
        goto cf_common_exit_00536441;
      }
      if (DAT_0080874e == '\x03') {
        puVar12 = &LAB_00405c7c;
        UVar29 = 0x3ef2;
        goto cf_common_exit_00536441;
      }
LAB_00536d52:
      puVar12 = &LAB_00402919;
      if (DAT_0080874e != '\x01') {
        puVar12 = &LAB_00405b87;
      }
      UVar29 = 0x3ef2;
      goto cf_common_exit_00536441;
    case 9:
      if (DAT_0080874e == '\x03') {
        iVar6 = 0;
        puVar12 = &LAB_00403fe9;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef7;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
        iVar6 = 0;
        pcVar30 = (code *)&LAB_0040235b;
        UVar29 = 0x3ef7;
      }
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b3:
    cVar1 = this_01->field_0x1a4;
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        if (cVar1 != '\t') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar6 = 0;
          puVar12 = &LAB_00403fe9;
          pcVar30 = (code *)&LAB_0040235b;
          UVar29 = 0x3f04;
        }
        else {
          puVar12 = &LAB_0040146a;
          if (DAT_0080874e != '\x01') {
            puVar12 = &LAB_0040211c;
          }
          iVar6 = 0;
          pcVar30 = (code *)&LAB_0040235b;
          UVar29 = 0x3f04;
        }
        goto cf_common_exit_00536EE8;
      }
      if (DAT_0080874e == '\x03') {
        puVar12 = &LAB_00404692;
        UVar29 = 0x3e8f;
      }
      else {
        puVar12 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_004039d1;
        }
        UVar29 = 0x3e8f;
      }
      goto cf_common_exit_00536F8B;
    }
    if (DAT_0080874e == '\x03') {
      uVar28 = *(undefined4 *)&this_01->field_0x180;
      puVar12 = &LAB_00404692;
      UVar29 = 0x3e85;
    }
    else {
      puVar12 = &LAB_00404d95;
      if (DAT_0080874e != '\x01') {
        puVar12 = &LAB_004039d1;
      }
      uVar28 = *(undefined4 *)&this_01->field_0x180;
      UVar29 = 0x3e85;
    }
    goto cf_common_exit_00536F92;
  case 0xc0b4:
    if (this_01->field_0x1a4 != '\x01') {
      if (this_01->field_0x1a4 != '\t') {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        puVar12 = &LAB_00403fe9;
      }
      else {
        puVar12 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar12 = &LAB_0040211c;
        }
      }
      iVar6 = 0;
      pcVar30 = (code *)&LAB_0040235b;
      UVar29 = 0x3f05;
      goto cf_common_exit_00536EE8;
    }
    if (DAT_0080874e == '\x03') {
      uVar28 = *(undefined4 *)&this_01->field_0x180;
      puVar12 = &LAB_00404692;
      UVar29 = 0x3e86;
    }
    else {
      puVar12 = &LAB_00404d95;
      if (DAT_0080874e != '\x01') {
        puVar12 = &LAB_004039d1;
      }
      uVar28 = *(undefined4 *)&this_01->field_0x180;
      UVar29 = 0x3e86;
    }
    goto cf_common_exit_00536F92;
  case 0xc0b5:
    if (this_01->field_0x1a4 != '\x01') {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (DAT_0080874e == '\x03') {
      puVar12 = &LAB_00404692;
    }
    else {
      puVar12 = &LAB_00404d95;
      if (DAT_0080874e != '\x01') {
        puVar12 = &LAB_004039d1;
      }
    }
    UVar29 = 0x3e87;
cf_common_exit_00536F8B:
    uVar28 = *(undefined4 *)&this_01->field_0x180;
cf_common_exit_00536F92:
    uVar24 = 0;
    iVar6 = 1;
    pCVar10 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    pCVar10 = FUN_006f2c00(pCVar10,iVar6,uVar24);
    UPanelTy::PaintTxtBut((UPanelTy *)this_01,param_1,1,pCVar10,uVar28,UVar29,puVar12);
  }
cf_common_exit_00536FB7:
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}


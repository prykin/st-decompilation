
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::GetMessage */

undefined4 __thiscall OptPanelTy::GetMessage(OptPanelTy *this,int param_1)

{
  char cVar1;
  OptPanelTy_field_01A4State OVar2;
  ushort uVar3;
  DArrayTy *pDVar4;
  undefined2 uVar5;
  InternalExceptionFrame *pIVar6;
  undefined1 uVar7;
  int iVar8;
  DWORD DVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *extraout_EAX;
  LPSTR pCVar12;
  cMf32 *pcVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  uint uVar16;
  void *pvVar17;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *pcVar18;
  OptPanelTy *this_00;
  undefined4 unaff_ESI;
  ushort *puVar19;
  void *unaff_EDI;
  int *piVar20;
  char *pcVar21;
  undefined4 *puVar22;
  char *pcVar23;
  char *pcVar24;
  byte *pbVar25;
  bool bVar26;
  uint uVar27;
  uint *puVar28;
  byte bVar29;
  int iVar30;
  ccFntTy *pcVar31;
  int iVar32;
  undefined4 uVar33;
  UINT UVar34;
  code *pcVar35;
  ulong uVar36;
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
  cMf32 *local_c;
  uint local_8;
  
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_10 = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar30 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x7f4,0,iVar8,
                                &DAT_007a4ccc,s_OptPanelTy__GetMessage_007c7334);
    if (iVar30 != 0) {
      pcVar35 = (code *)swi(3);
      uVar33 = (*pcVar35)();
      return uVar33;
    }
    RaiseInternalException(iVar8,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x7f4);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    PreInitOptPanel(local_10);
  }
  PanelTy::GetMessage((PanelTy *)this_00,param_1);
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
       ((uVar10 = *(uint *)(*(int *)(param_1 + 0x1c) + 4), uVar10 == 2 ||
        ((3 < uVar10 && (uVar10 < 6)))))) {
      thunk_FUN_005252c0(0xae);
    }
  }
  uVar10 = *(uint *)(param_1 + 0x10);
  if (uVar10 < 0xc007) {
    if (uVar10 == 0xc006) {
      pcVar35 = thunk_FUN_00529fe0;
      pCVar12 = thunk_FUN_00571240(s_BUT_MINUS_007c718c,0);
      bVar29 = 1;
    }
    else {
      if (uVar10 < 0x8165) {
        if (uVar10 != 0x8164) {
          if (0x8160 < uVar10) {
            if (uVar10 == 0x8161) {
              iVar8 = this_00->field_01E5;
              uVar10 = *(uint *)(iVar8 + 0x14);
              if (uVar10 == 0) {
                uVar10 = ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 &
                         0x1ffffffc) * *(int *)(iVar8 + 8);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar11 = (undefined4 *)FUN_006b4fa0(iVar8);
              uVar7 = (undefined1)local_8;
              for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar11 = CONCAT22(CONCAT11(uVar7,uVar7),CONCAT11(uVar7,uVar7));
                puVar11 = puVar11 + 1;
              }
              for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined1 *)puVar11 = uVar7;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              ccFntTy::SetSurf(this_00->field_017C,this_00->field_01E5,0,0,0,0,0);
              if (this_00->field_01A4 == CASE_E) {
                pDVar4 = this_00->field_02FD;
                if ((uint)*(ushort *)(param_1 + 0x14) < pDVar4->count) {
                  puVar28 = (uint *)(pDVar4->elementSize * (uint)*(ushort *)(param_1 + 0x14) +
                                    (int)pDVar4->data);
                }
                else {
                  puVar28 = (uint *)0x0;
                }
                uVar10 = (uint)(*(short *)(param_1 + 0x16) == 0);
              }
              else if ((int)(uint)*(ushort *)(param_1 + 0x14) < (int)this_00->field_01E9->field_0008
                      ) {
                puVar28 = *(uint **)(this_00->field_01E9->field_0014 +
                                    (uint)*(ushort *)(param_1 + 0x14) * 4);
                uVar10 = (uint)(*(short *)(param_1 + 0x16) == 0);
              }
              else {
                puVar28 = (uint *)0x0;
                uVar10 = (uint)(*(short *)(param_1 + 0x16) == 0);
              }
              ccFntTy::WrStr(this_00->field_017C,puVar28,2,-1,uVar10);
              Library::DKW::WGR::FUN_006b55f0
                        ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0,
                         *(ushort *)(param_1 + 0x18) + 0x26,*(ushort *)(param_1 + 0x1a) + 0x31,
                         (byte *)this_00->field_01E5,0,0,0,200,
                         *(int *)((byte *)this_00->field_01E5 + 8));
              Library::DKW::DDX::FUN_006b3640
                        (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                         this_00->field_0044);
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            if (uVar10 != 0x8162) {
              if (uVar10 != 0x8163) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              OVar2 = this_00->field_01A4;
              if (OVar2 == CASE_3) {
                if (*(int *)(param_1 + 0x14) < (int)this_00->field_01E9->field_0008) {
                  pcVar21 = *(char **)(this_00->field_01E9->field_0014 +
                                      *(int *)(param_1 + 0x14) * 4);
                }
                else {
                  pcVar21 = (char *)0x0;
                }
                Library::DKW::TBL::FUN_006b6020((uint *)this_00->field_01F1,0,pcVar21);
                this_00->field_0028 = 0x33;
                *(undefined4 *)&this_00->field_0x2c = this_00->field_01F1;
                FUN_006e6080(this_00,2,this_00->field_01B9,(undefined4 *)&this_00->field_0x18);
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar2 == CASE_4) {
                iVar8 = this_00->field_01E5;
                uVar10 = *(uint *)(iVar8 + 0x14);
                if (uVar10 == 0) {
                  uVar10 = ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 &
                           0x1ffffffc) * *(int *)(iVar8 + 8);
                }
                local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
                puVar11 = (undefined4 *)FUN_006b4fa0(iVar8);
                uVar7 = (undefined1)local_8;
                for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *puVar11 = CONCAT22(CONCAT11(uVar7,uVar7),CONCAT11(uVar7,uVar7));
                  puVar11 = puVar11 + 1;
                }
                for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined1 *)puVar11 = uVar7;
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                }
                this_00->field_0028 = 0x26;
                FUN_006e6080(this_00,2,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
                ccFntTy::SetSurf(this_00->field_017C,this_00->field_01E5,0,0,0,0,0);
                if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->field_0008) {
                  puVar28 = *(uint **)(this_00->field_01E9->field_0014 +
                                      *(int *)&this_00->field_0x2c * 4);
                }
                else {
                  puVar28 = (uint *)0x0;
                }
                ccFntTy::WrStr(this_00->field_017C,puVar28,0,-1,0);
                pbVar14 = (byte *)this_00->field_01E5;
                Library::DKW::WGR::FUN_006b55f0
                          ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0,0x26,0x1c,pbVar14,0,
                           0,0,*(int *)(pbVar14 + 4),*(int *)(pbVar14 + 8));
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar2 != CASE_E) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              iVar8 = this_00->field_01E5;
              uVar10 = *(uint *)(iVar8 + 0x14);
              if (uVar10 == 0) {
                uVar10 = ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 &
                         0x1ffffffc) * *(int *)(iVar8 + 8);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar11 = (undefined4 *)FUN_006b4fa0(iVar8);
              uVar7 = (undefined1)local_8;
              for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar11 = CONCAT22(CONCAT11(uVar7,uVar7),CONCAT11(uVar7,uVar7));
                puVar11 = puVar11 + 1;
              }
              for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined1 *)puVar11 = uVar7;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              ccFntTy::SetSurf(this_00->field_017C,this_00->field_01E5,0,0,0,0,0);
              iVar8 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
              uVar33 = 0;
              iVar32 = -1;
              iVar30 = 0;
              if (iVar8 == 0) {
                LoadResourceString(0x2711,HINSTANCE_00807618);
                puVar28 = extraout_EAX;
              }
              else {
                puVar28 = &DAT_0080f33a;
              }
              ccFntTy::WrStr(this_00->field_017C,puVar28,iVar30,iVar32,uVar33);
              pbVar14 = (byte *)this_00->field_01E5;
              Library::DKW::WGR::FUN_006b55f0
                        ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0,0x26,0x1c,pbVar14,0,0,
                         0,*(int *)(pbVar14 + 4),*(int *)(pbVar14 + 8));
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            OVar2 = this_00->field_01A4;
            if (OVar2 < CASE_3) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            if ((CASE_4 < OVar2) && (OVar2 != CASE_E)) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            goto switchD_00535190_caseD_3;
          }
          if (uVar10 == 0x8160) {
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this_00->field_01E5 + 8);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (3 < uVar10) {
            if (uVar10 != 0x6332) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            local_18 = *(uint *)(param_1 + 0x1c);
            pcVar31 = this_00->field_017C;
            if (pcVar31->field_00A0 != 0) {
              FUN_00710790((uint *)pcVar31);
            }
            local_8 = *(uint *)&pcVar31->field_0x8a;
            FUN_006b4170((AnonShape_006C7610_838EDECF *)this_00->field_0068,0,0x26,0x1a,0xca,0x6f,
                         (DAT_0080874e != '\x03') - 1U & 0x73);
            uVar16 = (uint)*(ushort *)(param_1 + 0x16);
            uVar10 = uVar16;
            if ((int)uVar16 < (int)(*(int *)(local_18 + 0x1e0) + uVar16)) {
              do {
                if ((int)uVar10 < (int)this_00->field_02F9[2]) {
                  local_1c = *(uint **)(this_00->field_02F9[5] + uVar10 * 4);
                }
                else {
                  local_1c = (uint *)0x0;
                }
                if (local_1c != (uint *)0x0) {
                  ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x26,
                                   (uVar10 - uVar16) * local_8 + 0x1b,0xca,local_8);
                  ccFntTy::WrStr(this_00->field_017C,local_1c,0,-1,0);
                }
                uVar16 = (uint)*(ushort *)(param_1 + 0x16);
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < (int)(*(int *)(local_18 + 0x1e0) + uVar16));
            }
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                       this_00->field_0044);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (uVar10 == 3) {
            DoneOptPanel(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (uVar10 != 0) {
            if (uVar10 != 2) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            InitOptPanel(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          OVar2 = this_00->field_01A4;
          if ((CASE_2 < OVar2) &&
             ((((OVar2 < CASE_5 || (OVar2 == CASE_7)) && (this_00->field_01DD != (HANDLE)0x0)) &&
              (DVar9 = WaitForSingleObject(this_00->field_01DD,0), DVar9 == 0)))) {
            FindNextChangeNotification(this_00->field_01DD);
            if (this_00->field_01A4 != CASE_7) {
              PrepFiles(this_00,*(uint *)&this_00->field_0x1e1);
            }
            this_00->field_0028 = 5;
            piVar20 = &this_00->field_01B5;
            iVar8 = 10;
            do {
              if (*piVar20 != 0) {
                FUN_006e6080(this_00,2,*piVar20,(undefined4 *)&this_00->field_0x18);
              }
              piVar20 = piVar20 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          if (this_00->field_0172 == CASE_3) {
            iVar8 = this_00->field_0050;
            if ((int)this_00->field_0044 < iVar8) {
              this_00->field_0044 = this_00->field_0044 + 0x1e;
            }
            if (iVar8 <= (int)this_00->field_0044) {
              this_00->field_0044 = iVar8;
              this_00->field_0172 = CASE_1;
              ShiftControls(this_00,1);
            }
            uVar10 = this_00->field_0044;
            uVar16 = this_00->field_003C;
            uVar27 = this_00->field_0060;
          }
          else {
            if (this_00->field_0172 != CASE_4) goto LAB_00534016;
            iVar8 = this_00->field_0050 - this_00->field_0048;
            if (iVar8 < (int)this_00->field_0044) {
              this_00->field_0044 = this_00->field_0044 + -0x1e;
            }
            if ((int)this_00->field_0044 <= iVar8) {
              DAT_0080878c = 0;
              local_38 = 0;
              local_34 = 0;
              local_3c = 1;
              if (this_00->field_019C != 0x6102) {
                thunk_FUN_0054edf0((undefined4 *)0x5,&local_3c,1,0xffffffff);
              }
              this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
              this_00->field_0172 = CASE_2;
              if (this_00->field_01A0 != 0) {
                this_00->field_01A4 = CASE_1;
                SetOptControls(this_00);
                this_00->field_01A0 = 0;
              }
              if (this_00->field_019C != 0) {
                if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == '\x02')) {
                  _DAT_0080f32e = 1;
                  if (DAT_00808783 == '\x01') {
                    _DAT_008087a0 = CONCAT31(_DAT_008087a1,9);
                  }
                  else if (DAT_00808783 == '\x02') {
                    _DAT_008087a0 = CONCAT31(_DAT_008087a1,10);
                  }
                }
                puVar11 = (undefined4 *)&this_00->field_0x18;
                for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar11 = 0;
                  puVar11 = puVar11 + 1;
                }
                *(undefined4 *)&this_00->field_0x24 = 1;
                this_00->field_0028 = this_00->field_019C;
                if (this_00->field_019C == 0x610a) {
                  *(undefined4 *)&this_00->field_0x2c = 6;
                }
                AppClassTy::PostNextMessage
                          (*(AppClassTy **)&this_00->field_0x10,(undefined4 *)&this_00->field_0x18);
                this_00->field_019C = 0;
              }
            }
            uVar10 = this_00->field_0044;
            uVar16 = this_00->field_003C;
            uVar27 = this_00->field_0060;
          }
          Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar27,0xffffffff,uVar16,uVar10);
LAB_00534016:
          if ((uint)(this_00->field_0038 - this_00->field_0301) < 0x7d1) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          this_00->field_0301 = this_00->field_0038;
          uVar10 = thunk_FUN_00567060(0x807658);
          if (uVar10 != 0) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          thunk_FUN_00571320(&DAT_00807620,HWND_00856d78);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar21 = s_BUT_SLUP_007c3e40;
      }
      else {
        if (0xc002 < uVar10) {
          if (uVar10 == 0xc003) {
            if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == '\a')) {
              DAT_00808788 = 0;
            }
            if (this_00->field_01A9 == 0) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            this_00->field_01A4 = this_00->field_01A9;
            this_00->field_01A9 = this_00->field_01AA;
            this_00->field_01AA = 0;
            SetOptControls(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (uVar10 != 0xc004) {
            if (uVar10 != 0xc005) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            pcVar35 = thunk_FUN_00529fe0;
            pCVar12 = thunk_FUN_00571240(s_BUT_PLUS_007c7360,0);
            bVar29 = 1;
            goto LAB_00534654;
          }
          UVar34 = 0x274f;
          goto cf_common_exit_00536DB5;
        }
        if (uVar10 == 0xc002) {
          UVar34 = 0x274e;
          goto cf_common_exit_00536DB5;
        }
        if (0xa106 < uVar10) {
          if (uVar10 != 0xc001) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == '\a')) {
            DAT_00808788 = 0;
          }
          this_00->field_01A0 = 1;
          *(undefined4 *)(param_1 + 0x10) = 0xa101;
          (*(code *)**(undefined4 **)PTR_00802a30)(param_1);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (0xa104 < uVar10) {
          if (this_00->field_01A4 != CASE_5) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          *(undefined4 *)(param_1 + 0x1c) = 0;
          *(uint *)(param_1 + 0x10) = (uVar10 != 0xa105) + 0xc09f;
          (**(code **)this_00->field_0000)(param_1);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (uVar10 != 0x8165) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar21 = s_BUT_SLDN_007c3e34;
      }
      pcVar35 = thunk_FUN_00529fe0;
      pCVar12 = thunk_FUN_00571240(pcVar21,0);
      bVar29 = 6;
    }
LAB_00534654:
    UPanelTy::PaintBut((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)param_1,bVar29,pCVar12,
                       pcVar35);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  switch(uVar10) {
  case 0xc09f:
    OVar2 = this_00->field_01A4;
    switch(OVar2) {
    case CASE_1:
      this_00->field_01A9 = OVar2;
      this_00->field_01A4 = CASE_3;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar7 = this_00->field_01A9;
      this_00->field_01A9 = OVar2;
      this_00->field_01AA = uVar7;
      this_00->field_01A4 = CASE_7;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_5:
      switch(this_00->field_01AB) {
      case 1:
        goto switchD_00534835_caseD_1;
      case 2:
        uVar10 = 0xffffffff;
        pcVar21 = &DAT_00807680;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = (char *)&DAT_0080ee1a;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = (char *)&DAT_0080ee1a;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = (char *)&DAT_00807ddd;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = (char *)&DAT_0080ee1a;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
        uVar10 = 0xffffffff;
        pcVar21 = PTR_DAT_0079ad00;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = (char *)&DAT_0080ee1a;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = &this_00->field_0x1f5;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = (char *)&DAT_0080ee1a;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        SwitchOptPanel(this_00,-1);
        this_00->field_019C = 0x6100;
        DAT_0080879c = 1;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case 3:
        wsprintfA((LPSTR)&DAT_0080ee1a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080ef1e);
        SwitchOptPanel(this_00,-1);
        uVar10 = 0xffffffff;
        this_00->field_019C = 0x6100;
        pcVar21 = (char *)&DAT_0080ee1a;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = &DAT_0080ed16;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        thunk_FUN_0056e9e0(&DAT_00807620,0);
        puVar11 = &DAT_0080a14f;
        puVar22 = &DAT_008087b6;
        for (iVar8 = 0x666; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar22 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar22 = puVar22 + 1;
        }
        *(undefined1 *)puVar22 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)&DAT_0080baec;
        puVar22 = &DAT_0080e43b;
        for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar22 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar22 = puVar22 + 1;
        }
        if (DAT_0080ed12 != (undefined4 *)0x0) {
          FreeAndNull(&DAT_0080ed12);
        }
        DAT_0080ed12 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x8db);
        puVar11 = &DAT_0080bae8;
        puVar22 = DAT_0080ed12;
        for (iVar8 = 0x236; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar22 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar22 = puVar22 + 1;
        }
        *(undefined2 *)puVar22 = *(undefined2 *)puVar11;
        *(undefined1 *)((int)puVar22 + 2) = *(undefined1 *)((int)puVar11 + 2);
        DAT_0080879c = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case 4:
        SwitchOptPanel(this_00,-1);
        this_00->field_019C = 0x6102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
        }
        if (DAT_008067a0 == '\0') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (PTR_00802a38 != (STPlaySystemC *)0x0) {
          uVar36 = ((uint)(PTR_00802a38->field_00E4 - PTR_00802a38->field_0034) < 6000) + 2;
          goto LAB_00535271;
        }
        goto LAB_0053526f;
      case 5:
        SwitchOptPanel(this_00,-1);
        this_00->field_019C = 0x7102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        break;
      case 6:
        uVar10 = 0xffffffff;
        pcVar21 = &DAT_00807680;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = &this_00->field_0x6c;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = (char *)&DAT_00807ddd;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        FUN_006b8280(&this_00->field_0x6c,&this_00->field_0x6c);
        uVar10 = 0xffffffff;
        pcVar21 = PTR_DAT_0079ad00;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = &this_00->field_0x1f5;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = PTR_DAT_0079acf4;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        DeleteFileA(&this_00->field_0x6c);
        uVar10 = 0xffffffff;
        pcVar21 = &DAT_00807680;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = &this_00->field_0x6c;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = (char *)&DAT_00807ddd;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        FUN_006b8280(&this_00->field_0x6c,&this_00->field_0x6c);
        uVar10 = 0xffffffff;
        pcVar21 = PTR_DAT_0079ad00;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = &this_00->field_0x1f5;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        uVar10 = 0xffffffff;
        pcVar21 = PTR_DAT_0079acf8;
        do {
          pcVar24 = pcVar21;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar24 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar24;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar8 = -1;
        pcVar21 = &this_00->field_0x6c;
        do {
          pcVar23 = pcVar21;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar23 = pcVar21 + 1;
          cVar1 = *pcVar21;
          pcVar21 = pcVar23;
        } while (cVar1 != '\0');
        pcVar21 = pcVar24 + -uVar10;
        pcVar24 = pcVar23 + -1;
        for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
          pcVar21 = pcVar21 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar24 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          pcVar24 = pcVar24 + 1;
        }
        DeleteFileA(&this_00->field_0x6c);
        OVar2 = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01AA;
        this_00->field_01A4 = OVar2;
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case 7:
        this_00->field_0028 = 0x44ff;
        (*PTR_00802a38->vtable->GetMessage)(PTR_00802a38,(int)&this_00->field_0x18);
        this_00->field_0028 = 0xc001;
        this_00->field_0034 = 0;
        (**(code **)this_00->field_0000)(&this_00->field_0x18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 1;
      thunk_FUN_00568010(&g_sound,CASE_1);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_7:
      thunk_FUN_005713b0(0x807620);
      iVar8 = **(int **)(param_1 + 0x14);
      if (iVar8 == 1) {
        DAT_00807300._0_1_ = '\x01';
      }
      else if (iVar8 == 2) {
        DAT_00807300._0_1_ = '\b';
      }
      else if (iVar8 == 3) {
        DAT_00807300._0_1_ = '\x02';
      }
      switch((char)DAT_00807300) {
      case '\x01':
        local_c = (cMf32 *)0x0;
        break;
      case '\x02':
        local_d0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_d0;
        iVar8 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0,unaff_EDI,unaff_ESI);
        if (iVar8 == 0) {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = PTR_0080765c->field_0080 & 1;
          }
          if (uVar10 != 0) {
            Library::DKW::SND::FUN_006b7e00((int)PTR_0080765c,3,&local_30,&local_28);
          }
          uVar10 = (uint)(local_30 + local_28) >> 1;
        }
        else {
          uVar10 = 0;
        }
        if (g_sound == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = PTR_0080765c->field_0080 & 1;
        }
        g_currentExceptionFrame = local_d0.previous;
        if (uVar16 == 0) {
LAB_005350ba:
          uVar16 = 0;
        }
        else {
          uVar16 = (PTR_0080765c->field_0094 - PTR_0080765c->field_0090) + 1;
        }
        goto LAB_005350bc;
      default:
        break;
      case '\x04':
        local_224.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_224;
        iVar8 = Library::MSVCRT::__setjmp3(local_224.jumpBuffer,0,unaff_EDI,unaff_ESI);
        if (iVar8 == 0) {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = PTR_0080765c->field_0068 & 1;
          }
          if (uVar10 != 0) {
            Library::DKW::SND::FUN_006b7e00((int)PTR_0080765c,2,&local_24,&local_2c);
          }
          uVar10 = local_24 + local_2c >> 1;
        }
        else {
          uVar10 = 0;
        }
        if (g_sound == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = PTR_0080765c->field_0068 & 1;
        }
        g_currentExceptionFrame = local_224.previous;
        if (uVar16 == 0) goto LAB_005350ba;
        uVar16 = (PTR_0080765c->field_007C - PTR_0080765c->field_0078) + 1;
LAB_005350bc:
        local_c = (cMf32 *)((uVar10 * 0x1f) / uVar16);
        this_00 = local_10;
        break;
      case '\b':
        local_c = (cMf32 *)(((DAT_0080730a + 4000) * 0x1f) / 0xfa1);
      }
      pcVar18 = local_c;
      PaintVolume(this_00,0,(byte)local_c);
      this_00->field_0028 = 0x22;
      *(cMf32 **)&this_00->field_0x2c = pcVar18;
      FUN_006e6080(this_00,2,this_00->field_01C5,(undefined4 *)&this_00->field_0x18);
      this_00->field_0028 = 0x20;
      *(uint *)&this_00->field_0x2c = (uint)((char)DAT_00807300 != '\x01');
      FUN_006e6080(this_00,2,this_00->field_01C5,(undefined4 *)&this_00->field_0x18);
      thunk_FUN_00571320(&DAT_00807620,HWND_00856d78);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733b = 4 - **(char **)(param_1 + 0x14);
      if (DAT_0080877e == '\0') {
        iVar8 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar8 + 0x14);
      }
      else {
        iVar8 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar8 + 8);
      }
      local_44 = (uint)DAT_0080733b;
      if (DAT_00808783 == '\x03') {
        local_48 = 4;
        thunk_FUN_0054edf0((undefined4 *)0x5,&local_48,1,0xffffffff);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
        FUN_006e8640(PTR_00807598,*(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar8 + 0x10),
                     *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar8 + 4));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_0080731a = (uint)(DAT_0080731a == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      uVar33 = this_00->field_01B9;
      *(char *)&this_00[1].field_0000 = **(char **)(param_1 + 0x14) + -1;
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      FUN_006e6080(this_00,2,uVar33,(undefined4 *)&this_00->field_0x18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    break;
  case 0xc0a0:
    OVar2 = this_00->field_01A4;
    switch(OVar2) {
    case CASE_1:
      this_00->field_01A9 = OVar2;
      this_00->field_01A4 = CASE_4;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      this_00->field_01AA = this_00->field_01A9;
      this_00->field_01A9 = OVar2;
      this_00->field_01A4 = CASE_6;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
switchD_00535190_caseD_3:
      this_00->field_0028 = 0xc0a1;
      this_00->field_0034 = 0;
      (**(code **)this_00->field_0000)(&this_00->field_0x18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
    case CASE_B:
      if (this_00->field_01A9 != 0) {
        this_00->field_01A4 = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01AA;
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (OVar2 == CASE_5) {
        this_00->field_01A4 = CASE_1;
        SetOptControls(this_00);
        SwitchOptPanel(this_00,-1);
        if (this_00->field_01AB != '\a') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        DAT_00808788 = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      SwitchOptPanel(this_00,-1);
      if ((byte)this_00->field_01AB < 10) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (0xb < (byte)this_00->field_01AB) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_008067a0 == '\0') {
        this_00->field_019C = 0x6102;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 2;
      thunk_FUN_00568010(&g_sound,CASE_2);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733a = '\x03' - **(char **)(param_1 + 0x14);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      DAT_00807322 = (uint)(DAT_00807322 == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807348 = *(undefined1 *)&this_00[1].field_0000;
      SwitchOptPanel(this_00,-1);
      this_00->field_019C = 0x6107;
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
LAB_0053526f:
    uVar36 = 4;
LAB_00535271:
    CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,uVar36);
    this_00->field_019C = 0x610a;
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0a1:
    OVar2 = this_00->field_01A4;
    switch(OVar2) {
    case CASE_1:
      this_00->field_01A5 = 0x3e83;
      this_00->field_01A9 = OVar2;
      this_00->field_01AB = 3;
      this_00->field_01A4 = CASE_5;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar7 = this_00->field_01A9;
      this_00->field_01A9 = OVar2;
      this_00->field_01AA = uVar7;
      this_00->field_01A4 = CASE_8;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
      this_00->field_0028 = 0x32;
      FUN_006e6080(this_00,2,this_00->field_01B9,(undefined4 *)&this_00->field_0x18);
      if (*(int *)(this_00->field_01F1 + 8) < 1) {
        pcVar21 = (char *)0x0;
      }
      else {
        pcVar21 = (char *)**(undefined4 **)(this_00->field_01F1 + 0x14);
      }
      uVar10 = 0xffffffff;
      do {
        pcVar24 = pcVar21;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar21 + 1;
        cVar1 = *pcVar21;
        pcVar21 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      puVar15 = &this_00->field_0x1f5;
      pcVar21 = pcVar24 + -uVar10;
      pcVar24 = puVar15;
      for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
        pcVar21 = pcVar21 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        pcVar24 = pcVar24 + 1;
      }
      pbVar25 = &DAT_008016a0;
      pbVar14 = puVar15;
      do {
        bVar29 = *pbVar14;
        bVar26 = bVar29 < *pbVar25;
        if (bVar29 != *pbVar25) {
LAB_0053556a:
          iVar8 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
          goto LAB_0053556f;
        }
        if (bVar29 == 0) break;
        bVar29 = pbVar14[1];
        bVar26 = bVar29 < pbVar25[1];
        if (bVar29 != pbVar25[1]) goto LAB_0053556a;
        pbVar14 = pbVar14 + 2;
        pbVar25 = pbVar25 + 2;
      } while (bVar29 != 0);
      iVar8 = 0;
LAB_0053556f:
      if (iVar8 == 0) {
        this_00->field_01A5 = 0x3f4b;
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_B;
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      iVar8 = CheckFiles(this_00,puVar15);
      if (iVar8 != 0) {
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A5 = 0x3f49;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_5;
        this_00->field_01AB = 1;
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
switchD_00534835_caseD_1:
      thunk_FUN_005335e0();
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_4:
      this_00->field_0028 = 0x26;
      FUN_006e6080(this_00,2,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
      if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->field_0008) {
        pcVar21 = *(char **)(this_00->field_01E9->field_0014 + *(int *)&this_00->field_0x2c * 4);
      }
      else {
        pcVar21 = (char *)0x0;
      }
      uVar10 = 0xffffffff;
      do {
        pcVar24 = pcVar21;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar21 + 1;
        cVar1 = *pcVar21;
        pcVar21 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar21 = pcVar24 + -uVar10;
      pcVar24 = &this_00->field_0x1f5;
      for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
        pcVar21 = pcVar21 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        pcVar24 = pcVar24 + 1;
      }
      uVar5 = this_00->field_002E;
      uVar7 = this_00->field_01A9;
      *(undefined2 *)&this_00->field_0x1e1 = *(undefined2 *)&this_00->field_0x2c;
      *(undefined2 *)&this_00->field_0x1e3 = uVar5;
      this_00->field_01A5 = 0x3f48;
      this_00->field_01AA = uVar7;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = 2;
      this_00->field_01A4 = CASE_5;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 4;
      thunk_FUN_00568010(&g_sound,CASE_4);
      SoundClassTy::PlaySound_thunk
                ((SoundClassTy *)&g_sound,SOUND_MODE_1,(char *)0x0,0x4b7,(SoundPosition *)0x0,0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      DAT_0080731e = (uint)(DAT_0080731e == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807342 = (uint)(DAT_00807342 == 0);
      if (g_popUp_008016D8 != (PopUpTy *)0x0) {
        PopUpTy::ChangeState(g_popUp_008016D8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_E:
      local_c = (cMf32 *)0x0;
      local_14 = (undefined4 *)0x0;
      local_20 = (ushort *)0x0;
      local_8 = 1;
      local_1c = (uint *)0x0;
      this_00->field_0028 = 0x26;
      FUN_006e6080(this_00,2,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
      pDVar4 = this_00->field_02FD;
      if (*(uint *)&this_00->field_0x2c < pDVar4->count) {
        pvVar17 = (void *)(pDVar4->elementSize * *(uint *)&this_00->field_0x2c + (int)pDVar4->data);
      }
      else {
        pvVar17 = (void *)0x0;
      }
      if (*(int *)((int)pvVar17 + 0x6c) == 0) {
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
        iVar8 = Library::MSVCRT::__setjmp3(local_19c.jumpBuffer,0,unaff_EDI,unaff_ESI);
        this_00 = local_10;
        pcVar18 = extraout_ECX;
        pcVar13 = local_c;
        if (iVar8 == 0) {
          pcVar13 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                       (0x345,(byte *)&DAT_0080f33a,0,0,0);
          pDVar4 = this_00->field_02FD;
          if (*(uint *)&this_00->field_0x2c < pDVar4->count) {
            pvVar17 = (void *)(pDVar4->elementSize * *(uint *)&this_00->field_0x2c +
                              (int)pDVar4->data);
          }
          else {
            pvVar17 = (void *)0x0;
          }
          local_c = pcVar13;
          local_20 = LoadStrategData((int)pcVar13,(char *)((int)pvVar17 + 0x4c),(int *)&local_18);
          uVar10 = local_8;
          pcVar18 = extraout_ECX_00;
          if (local_20 != (ushort *)0x0) {
            local_14 = Library::DKW::LIB::FUN_006aac10(local_18 + local_8 * 2);
            *(undefined1 *)local_14 = 1;
            pbVar14 = (byte *)((int)local_14 + uVar10);
            *pbVar14 = DAT_0080874d;
            puVar19 = local_20;
            pbVar14 = pbVar14 + uVar10;
            for (uVar16 = local_18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pbVar14 = *(undefined4 *)puVar19;
              puVar19 = puVar19 + 2;
              pbVar14 = pbVar14 + 4;
            }
            for (uVar10 = local_18 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pbVar14 = (byte)*puVar19;
              puVar19 = (ushort *)((int)puVar19 + 1);
              pbVar14 = pbVar14 + 1;
            }
            thunk_FUN_0054edf0((undefined4 *)0x32,local_14,1,local_18 + local_8 * 2);
            local_1c = (uint *)0x1;
            pcVar18 = extraout_ECX_01;
            pcVar13 = local_c;
          }
        }
        g_currentExceptionFrame = local_19c.previous;
        if (pcVar13 != (cMf32 *)0x0) {
          cMf32::delete(pcVar18,pcVar13);
        }
        if (local_20 != (ushort *)0x0) {
          FreeAndNull(&local_20);
        }
        if (local_14 != (undefined4 *)0x0) {
          FreeAndNull(&local_14);
        }
      }
      else {
        local_14 = Library::DKW::LIB::FUN_006aac10(2);
        if (local_14 != (undefined4 *)0x0) {
          *(undefined1 *)local_14 = 0;
          *(byte *)((int)local_14 + 1) = DAT_0080874d;
          thunk_FUN_0054edf0((undefined4 *)0x32,local_14,1,2);
          FreeAndNull(&local_14);
          local_1c = (uint *)0x1;
        }
      }
      if (local_1c != (uint *)0x0) {
        this_00->field_0028 = 0xc001;
        this_00->field_0034 = 0;
        (**(code **)this_00->field_0000)(&this_00->field_0x18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case 0xc0a2:
    OVar2 = this_00->field_01A4;
    switch(OVar2) {
    case CASE_1:
      if (DAT_008067a0 == '\0') {
        iVar8 = 0x3e84;
      }
      else {
        iVar8 = 0x3e96 - (uint)((uint)(PTR_00802a38->field_00E4 - PTR_00802a38->field_0034) < 6000);
      }
      this_00->field_01A9 = OVar2;
      this_00->field_01A5 = iVar8;
      this_00->field_01AB = 4;
      this_00->field_01A4 = CASE_5;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar7 = this_00->field_01A9;
      this_00->field_01A9 = OVar2;
      this_00->field_01AA = uVar7;
      this_00->field_01A4 = CASE_9;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
    case CASE_4:
      this_00->field_0028 = 0x26;
      FUN_006e6080(this_00,2,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
      if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->field_0008) {
        pcVar21 = *(char **)(this_00->field_01E9->field_0014 + *(int *)&this_00->field_0x2c * 4);
      }
      else {
        pcVar21 = (char *)0x0;
      }
      uVar10 = 0xffffffff;
      do {
        pcVar24 = pcVar21;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar24 = pcVar21 + 1;
        cVar1 = *pcVar21;
        pcVar21 = pcVar24;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar21 = pcVar24 + -uVar10;
      pcVar24 = &this_00->field_0x1f5;
      for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar21;
        pcVar21 = pcVar21 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar24 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        pcVar24 = pcVar24 + 1;
      }
      uVar5 = this_00->field_002E;
      uVar7 = this_00->field_01A9;
      *(undefined2 *)&this_00->field_0x1e1 = *(undefined2 *)&this_00->field_0x2c;
      *(undefined2 *)&this_00->field_0x1e3 = uVar5;
      this_00->field_01A5 = 0x3f4a;
      this_00->field_01AA = uVar7;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = 6;
      this_00->field_01A4 = CASE_5;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      DAT_00807300._1_1_ = DAT_00807300._1_1_ ^ 8;
      thunk_FUN_00568010(&g_sound,CASE_8);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      g_currentExceptionFrame = local_8c.previous;
      DAT_00807349 = **(char **)(param_1 + 0x14) + -1;
      return 0;
    case CASE_9:
      DAT_00807326 = DAT_00807326 == '\0';
      thunk_FUN_00440700((uint)(byte)DAT_00807326);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807346 = (*(char *)(param_1 + 0x14) + '\x01') * '\x05';
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0xaa,0x6f,'\x01',
             (byte *)this_00->field_018C);
      wsprintfA(&this_00->field_0x6c,&DAT_007c1890,(uint)(byte)DAT_00807346);
      ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                       *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
      ccFntTy::WrTxt(this_00->field_017C,(uint *)&this_00->field_0x6c,-2,-1,0,-1,-1);
      if (g_popUp_008016D8 != (PopUpTy *)0x0) {
        PopUpTy::ChangeNumStr(g_popUp_008016D8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case 0xc0a3:
    OVar2 = this_00->field_01A4;
    switch(OVar2) {
    case CASE_1:
      this_00->field_01A5 = 0x3e85;
      this_00->field_01A9 = OVar2;
      this_00->field_01AB = 5;
      this_00->field_01A4 = CASE_5;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar7 = this_00->field_01A9;
      this_00->field_01A9 = OVar2;
      this_00->field_01AA = uVar7;
      this_00->field_01A4 = CASE_D;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      DAT_0080730e = (uint)(*(int *)(param_1 + 0x14) * 4000) / 0x1e - 4000;
      thunk_FUN_005682c0(&g_sound,DAT_0080730e);
      PaintVolume(this_00,0,*(byte *)(param_1 + 0x14));
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_7:
      if ((char)DAT_00807300 == '\x02') {
        if (g_sound == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = PTR_0080765c->field_0080 & 1;
        }
        if (uVar10 != 0) {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = PTR_0080765c->field_0080 & 1;
          }
          if (uVar10 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (PTR_0080765c->field_0094 - PTR_0080765c->field_0090) + 1;
          }
          local_8 = (uint)((iVar8 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
          DAT_00807300._2_2_ = (undefined2)local_8;
          uRam00807304 = (undefined2)(local_8 >> 0x10);
          local_158.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_158;
          iVar8 = Library::MSVCRT::__setjmp3(local_158.jumpBuffer,0,unaff_EDI,unaff_ESI);
          pIVar6 = local_158.previous;
          if (iVar8 == 0) {
            if (g_sound == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = PTR_0080765c->field_0080 & 1;
            }
            if (uVar10 != 0) {
              Library::DKW::SND::FUN_006b7f00((int)PTR_0080765c,3,local_8,local_8);
            }
            g_currentExceptionFrame = local_158.previous;
            pIVar6 = g_currentExceptionFrame;
          }
LAB_00535ef1:
          g_currentExceptionFrame = pIVar6;
          PaintVolume(local_10,0,*(byte *)(param_1 + 0x14));
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else if ((char)DAT_00807300 == '\x04') {
        if (g_sound == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = PTR_0080765c->field_0068 & 1;
        }
        if (uVar10 != 0) {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = PTR_0080765c->field_0068 & 1;
          }
          if (uVar10 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (PTR_0080765c->field_007C - PTR_0080765c->field_0078) + 1;
          }
          _DAT_00807306 = (uint)((iVar8 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
          local_114.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_114;
          local_8 = _DAT_00807306;
          iVar8 = Library::MSVCRT::__setjmp3(local_114.jumpBuffer,0,unaff_EDI,unaff_ESI);
          pIVar6 = local_114.previous;
          if (iVar8 == 0) {
            if (g_sound == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = PTR_0080765c->field_0068 & 1;
            }
            if (uVar10 != 0) {
              Library::DKW::SND::FUN_006b7f00((int)PTR_0080765c,2,local_8,local_8);
            }
            g_currentExceptionFrame = local_114.previous;
            pIVar6 = g_currentExceptionFrame;
          }
          goto LAB_00535ef1;
        }
      }
      else if ((char)DAT_00807300 == '\b') {
        DAT_0080730a = (uint)(*(int *)(param_1 + 0x14) * 4000) / 0x1e - 4000;
        thunk_FUN_005686c0(&g_sound,DAT_0080730a);
        PaintVolume(this_00,0,*(byte *)(param_1 + 0x14));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_00807328 = (uint)(DAT_00807328 == 0);
      if (DAT_00807328 != 0) {
        FUN_006ddb70((AnonShape_006DDB70_C8239555 *)PTR_00807598);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      FUN_006ddbb0((int)PTR_00807598);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807347 = *(byte *)(param_1 + 0x14);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0xaa,0x81,'\x01',
             (byte *)this_00->field_018C);
      wsprintfA(&this_00->field_0x6c,&DAT_007c1890,DAT_00807347 + 1);
      ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                       *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
      ccFntTy::WrTxt(this_00->field_017C,(uint *)&this_00->field_0x6c,-2,-1,0,-1,-1);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    break;
  case 0xc0a4:
    if (this_00->field_01A4 == CASE_1) {
      this_00->field_01A9 = 1;
      this_00->field_01A4 = CASE_C;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (this_00->field_01A4 == CASE_9) {
      DAT_0080732c = (uint)(DAT_0080732c == 0);
      this_00->field_0028 = 0x440f;
      FUN_006e6000(this_00,0xf,0,(undefined4 *)&this_00->field_0x18);
      if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
        FUN_006e8630(PTR_00807598,DAT_0080732c);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case 0xc0a5:
    OVar2 = this_00->field_01A4;
    if (OVar2 == CASE_1) {
      this_00->field_01A9 = 1;
      this_00->field_01A4 = CASE_2;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if ((CASE_5 < OVar2) && (OVar2 < CASE_8)) {
      if (g_sound == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = PTR_0080765c->field_0050 & 1;
      }
      if (uVar10 != 0) {
        if (g_sound == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = PTR_0080765c->field_0050 & 1;
        }
        if (uVar10 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (PTR_0080765c->field_0064 - PTR_0080765c->field_0060) + 1;
        }
        _DAT_00807312 = (uint)((iVar8 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
        local_1e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_1e0;
        local_8 = _DAT_00807312;
        iVar8 = Library::MSVCRT::__setjmp3(local_1e0.jumpBuffer,0,unaff_EDI,unaff_ESI);
        if (iVar8 == 0) {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = PTR_0080765c->field_0050 & 1;
          }
          if (uVar10 != 0) {
            Library::DKW::SND::FUN_006b7f00((int)PTR_0080765c,1,local_8,local_8);
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
    if ((CASE_5 < this_00->field_01A4) && (this_00->field_01A4 < CASE_8)) {
      if (g_sound == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = PTR_0080765c->field_0038 & 1;
      }
      if (uVar10 != 0) {
        if (g_sound == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = PTR_0080765c->field_0038 & 1;
        }
        if (uVar10 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (PTR_0080765c->field_004C - PTR_0080765c->field_0048) + 1;
        }
        _DAT_00807316 = (uint)((iVar8 + -1) * *(int *)(param_1 + 0x14)) / 0x1e;
        local_268.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_268;
        local_8 = _DAT_00807316;
        iVar8 = Library::MSVCRT::__setjmp3(local_268.jumpBuffer,0,unaff_EDI,unaff_ESI);
        if (iVar8 == 0) {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = PTR_0080765c->field_0038 & 1;
          }
          if (uVar10 != 0) {
            Library::DKW::SND::FUN_006b7f00((int)PTR_0080765c,0,local_8,local_8);
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
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        puVar15 = &LAB_00404692;
        UVar34 = 0x3e81;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
        UVar34 = 0x3e81;
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        puVar15 = &LAB_00404692;
        UVar34 = 0x3e8b;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
        pcVar31 = this_00->field_0180;
        UVar34 = 0x3e8b;
      }
      goto cf_common_exit_00536F92;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar34 = 0x273e;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar8 = 0;
        puVar15 = &LAB_00403fe9;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3efc;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
        iVar8 = 0;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3efc;
      }
      break;
    case CASE_7:
      iVar8 = **(int **)(param_1 + 0x14);
      if (iVar8 == 1) {
        if (DAT_0080874e == '\x03') {
          iVar8 = 1;
          puVar15 = &LAB_00405c7c;
          pcVar35 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee7;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
          iVar8 = 1;
          pcVar35 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee7;
        }
      }
      else if (iVar8 == 2) {
        if (DAT_0080874e == '\x03') {
          iVar8 = 1;
          puVar15 = &LAB_00405c7c;
          pcVar35 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee5;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
          iVar8 = 1;
          pcVar35 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee5;
        }
      }
      else {
        if (iVar8 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar8 = 1;
          puVar15 = &LAB_00405c7c;
          pcVar35 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee6;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
          iVar8 = 1;
          pcVar35 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee6;
        }
      }
      break;
    case CASE_8:
      iVar8 = **(int **)(param_1 + 0x14);
      if (iVar8 == 1) {
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
        }
        iVar8 = 1;
        pcVar35 = thunk_FUN_0052a4d0;
        UVar34 = 0x3ef1;
        pCVar12 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)param_1,pCVar12,UVar34,pcVar35,puVar15,
                    iVar8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar8 != 2) {
        if (iVar8 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
        }
        iVar8 = 1;
        pcVar35 = thunk_FUN_0052a4d0;
        UVar34 = 0x3ef2;
        pCVar12 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)param_1,pCVar12,UVar34,pcVar35,puVar15,
                    iVar8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        puVar15 = &LAB_00405c7c;
      }
      else {
joined_r0x0053686a:
        puVar15 = &LAB_00402919;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_00405b87;
        }
      }
LAB_00536434:
      UVar34 = 0x3ef0;
cf_common_exit_00536441:
      iVar8 = 1;
      pcVar35 = thunk_FUN_0052a4d0;
      pCVar12 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
      PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)param_1,pCVar12,UVar34,pcVar35,puVar15,
                  iVar8);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar8 = 0;
        puVar15 = &LAB_00403fe9;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef4;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
        iVar8 = 0;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef4;
      }
      break;
    case CASE_D:
      iVar8 = **(int **)(param_1 + 0x14);
      if (iVar8 == 1) {
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
        }
        iVar8 = 1;
        pcVar35 = thunk_FUN_0052a4d0;
        UVar34 = 0x3e90;
        pCVar12 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)param_1,pCVar12,UVar34,pcVar35,puVar15,
                    iVar8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar8 == 2) {
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
        }
        iVar8 = 1;
        pcVar35 = thunk_FUN_0052a4d0;
        UVar34 = 0x3e91;
        pCVar12 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)param_1,pCVar12,UVar34,pcVar35,puVar15,
                    iVar8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar8 == 3) {
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
        }
        iVar8 = 1;
        pcVar35 = thunk_FUN_0052a4d0;
        UVar34 = 0x3e92;
        pCVar12 = thunk_FUN_00571240(s_BUT_BUTOPT1_007c7350,0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)param_1,pCVar12,UVar34,pcVar35,puVar15,
                    iVar8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      goto cf_common_exit_00536FB7;
    }
cf_common_exit_00536EE8:
    uVar33 = 0;
    iVar30 = 1;
    pCVar12 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    pCVar12 = FUN_006f2c00(pCVar12,iVar30,uVar33);
    PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)param_1,pCVar12,UVar34,pcVar35,puVar15,iVar8)
    ;
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0b0:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        puVar15 = &LAB_00404692;
        UVar34 = 0x3e82;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
        pcVar31 = this_00->field_0180;
        UVar34 = 0x3e82;
      }
      break;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        puVar15 = &LAB_00404692;
        UVar34 = 0x3e8a;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
        UVar34 = 0x3e8a;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
      iVar8 = this_00->field_01E5;
      uVar10 = *(uint *)(iVar8 + 0x14);
      if (uVar10 == 0) {
        uVar10 = ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar8 + 8);
      }
      local_24 = (DAT_0080874e != '\x03') - 1 & 0x73;
      puVar11 = (undefined4 *)FUN_006b4fa0(iVar8);
      uVar7 = (undefined1)local_24;
      for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar11 = CONCAT22(CONCAT11(uVar7,uVar7),CONCAT11(uVar7,uVar7));
        puVar11 = puVar11 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar11 = uVar7;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      ccFntTy::SetSurf(this_00->field_017C,this_00->field_01E5,0,0,0,0,0);
      ccFntTy::WrStr(this_00->field_017C,(uint *)**(undefined4 **)(param_1 + 0x14),0,-1,0);
      uVar3 = *(ushort *)(param_1 + 0x18);
      if ((uVar3 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
        FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)this_00->field_01E5,0,(uint)uVar3,
                     (uint)*(ushort *)(param_1 + 0x1a),(uint)uVar3,*(ushort *)(param_1 + 0x1a) + 10,
                     0x6c,0xd);
      }
      pbVar14 = (byte *)this_00->field_01E5;
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0,0x26,0x1c,pbVar14,0,0,0,
                 *(int *)(pbVar14 + 4),*(int *)(pbVar14 + 8));
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,this_00->field_0044
                );
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar34 = 0x273f;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar8 = 0;
        puVar15 = &LAB_00403fe9;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3efd;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
        iVar8 = 0;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3efd;
      }
      goto cf_common_exit_00536EE8;
    case CASE_8:
      iVar8 = **(int **)(param_1 + 0x14);
      if (iVar8 == 1) {
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
          UVar34 = 0x3ef1;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
          UVar34 = 0x3ef1;
        }
        goto cf_common_exit_00536441;
      }
      if (iVar8 != 2) {
        if (iVar8 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
          UVar34 = 0x3ef2;
          goto cf_common_exit_00536441;
        }
        goto LAB_00536d52;
      }
      if (DAT_0080874e != '\x03') goto joined_r0x0053686a;
      puVar15 = &LAB_00405c7c;
      goto LAB_00536434;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar8 = 0;
        puVar15 = &LAB_00403fe9;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef5;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
        iVar8 = 0;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef5;
      }
      goto cf_common_exit_00536EE8;
    case CASE_B:
switchD_00536a2b_caseD_3:
      UVar34 = 0x2751;
cf_common_exit_00536DB5:
      pCVar12 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      UPanelTy::PaintIBut((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)param_1,pCVar12,UVar34)
      ;
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        puVar15 = &LAB_00404692;
        UVar34 = 0x3e93;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
        pcVar31 = this_00->field_0180;
        UVar34 = 0x3e93;
      }
    }
    goto cf_common_exit_00536F92;
  case 0xc0b1:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        puVar15 = &LAB_00404692;
        UVar34 = 0x3e83;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
        pcVar31 = this_00->field_0180;
        UVar34 = 0x3e83;
      }
      goto cf_common_exit_00536F92;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        puVar15 = &LAB_00404692;
        UVar34 = 0x3e8c;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
        UVar34 = 0x3e8c;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
    case CASE_4:
      goto switchD_00536a2b_caseD_3;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar8 = 0;
        puVar15 = &LAB_00403fe9;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3efe;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
        iVar8 = 0;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3efe;
      }
      break;
    case CASE_8:
      if (**(int **)(param_1 + 0x14) == 1) {
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
          UVar34 = 0x3f02;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
          UVar34 = 0x3f02;
        }
      }
      else {
        if (**(int **)(param_1 + 0x14) != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
          UVar34 = 0x3f03;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
          UVar34 = 0x3f03;
        }
      }
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar8 = 0;
        puVar15 = &LAB_00403fe9;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef6;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
        iVar8 = 0;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef6;
      }
      break;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        iVar8 = 0;
        puVar15 = &LAB_00403fe9;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef8;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
        iVar8 = 0;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef8;
      }
      break;
    case CASE_E:
      UVar34 = 0x2752;
      goto cf_common_exit_00536DB5;
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b2:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        puVar15 = &LAB_00404692;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
      }
      if (DAT_008067a0 == '\0') {
        UVar34 = 0x3e84;
      }
      else {
        UVar34 = 0x3e96 - ((uint)(PTR_00802a38->field_00E4 - PTR_00802a38->field_0034) < 6000);
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        puVar15 = &LAB_00404692;
        UVar34 = 0x3e8d;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
        pcVar31 = this_00->field_0180;
        UVar34 = 0x3e8d;
      }
      goto cf_common_exit_00536F92;
    case CASE_3:
    case CASE_4:
      UVar34 = 0x2750;
      goto cf_common_exit_00536DB5;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar8 = 0;
        puVar15 = &LAB_00403fe9;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3eff;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
        iVar8 = 0;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3eff;
      }
      break;
    case CASE_8:
      if (**(int **)(param_1 + 0x14) != 1) {
        if (**(int **)(param_1 + 0x14) != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          puVar15 = &LAB_00405c7c;
          UVar34 = 0x3f06;
        }
        else {
          puVar15 = &LAB_00402919;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_00405b87;
          }
          UVar34 = 0x3f06;
        }
        goto cf_common_exit_00536441;
      }
      if (DAT_0080874e == '\x03') {
        puVar15 = &LAB_00405c7c;
        UVar34 = 0x3ef2;
        goto cf_common_exit_00536441;
      }
LAB_00536d52:
      puVar15 = &LAB_00402919;
      if (DAT_0080874e != '\x01') {
        puVar15 = &LAB_00405b87;
      }
      UVar34 = 0x3ef2;
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar8 = 0;
        puVar15 = &LAB_00403fe9;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef7;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
        iVar8 = 0;
        pcVar35 = (code *)&LAB_0040235b;
        UVar34 = 0x3ef7;
      }
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b3:
    OVar2 = this_00->field_01A4;
    if (OVar2 != CASE_1) {
      if (OVar2 != CASE_2) {
        if (OVar2 != CASE_9) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar8 = 0;
          puVar15 = &LAB_00403fe9;
          pcVar35 = (code *)&LAB_0040235b;
          UVar34 = 0x3f04;
        }
        else {
          puVar15 = &LAB_0040146a;
          if (DAT_0080874e != '\x01') {
            puVar15 = &LAB_0040211c;
          }
          iVar8 = 0;
          pcVar35 = (code *)&LAB_0040235b;
          UVar34 = 0x3f04;
        }
        goto cf_common_exit_00536EE8;
      }
      if (DAT_0080874e == '\x03') {
        puVar15 = &LAB_00404692;
        UVar34 = 0x3e8f;
      }
      else {
        puVar15 = &LAB_00404d95;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_004039d1;
        }
        UVar34 = 0x3e8f;
      }
      goto cf_common_exit_00536F8B;
    }
    if (DAT_0080874e == '\x03') {
      pcVar31 = this_00->field_0180;
      puVar15 = &LAB_00404692;
      UVar34 = 0x3e85;
    }
    else {
      puVar15 = &LAB_00404d95;
      if (DAT_0080874e != '\x01') {
        puVar15 = &LAB_004039d1;
      }
      pcVar31 = this_00->field_0180;
      UVar34 = 0x3e85;
    }
    goto cf_common_exit_00536F92;
  case 0xc0b4:
    if (this_00->field_01A4 != CASE_1) {
      if (this_00->field_01A4 != CASE_9) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        puVar15 = &LAB_00403fe9;
      }
      else {
        puVar15 = &LAB_0040146a;
        if (DAT_0080874e != '\x01') {
          puVar15 = &LAB_0040211c;
        }
      }
      iVar8 = 0;
      pcVar35 = (code *)&LAB_0040235b;
      UVar34 = 0x3f05;
      goto cf_common_exit_00536EE8;
    }
    if (DAT_0080874e == '\x03') {
      pcVar31 = this_00->field_0180;
      puVar15 = &LAB_00404692;
      UVar34 = 0x3e86;
    }
    else {
      puVar15 = &LAB_00404d95;
      if (DAT_0080874e != '\x01') {
        puVar15 = &LAB_004039d1;
      }
      pcVar31 = this_00->field_0180;
      UVar34 = 0x3e86;
    }
    goto cf_common_exit_00536F92;
  case 0xc0b5:
    if (this_00->field_01A4 != CASE_1) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (DAT_0080874e == '\x03') {
      puVar15 = &LAB_00404692;
    }
    else {
      puVar15 = &LAB_00404d95;
      if (DAT_0080874e != '\x01') {
        puVar15 = &LAB_004039d1;
      }
    }
    UVar34 = 0x3e87;
cf_common_exit_00536F8B:
    pcVar31 = this_00->field_0180;
cf_common_exit_00536F92:
    uVar33 = 0;
    iVar8 = 1;
    pCVar12 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    pCVar12 = FUN_006f2c00(pCVar12,iVar8,uVar33);
    UPanelTy::PaintTxtBut
              ((UPanelTy *)this_00,(AnonShape_0053D920_829E6B3B *)param_1,1,pCVar12,pcVar31,UVar34,
               puVar15);
  }
cf_common_exit_00536FB7:
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}


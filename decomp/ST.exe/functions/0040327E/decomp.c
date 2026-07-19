
undefined4 __thiscall SettMapTy::GetMessage(SettMapTy *this,int param_1)

{
  SettMapTy SVar1;
  code *pcVar2;
  SettMapTy *this_00;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  DWORD DVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  MMsgTy *this_01;
  int *piVar16;
  undefined4 unaff_ESI;
  SettMapTy *pSVar17;
  void *unaff_EDI;
  undefined4 *puVar18;
  char *pcVar19;
  SettMapTy *pSVar20;
  uint *puVar21;
  UINT UVar22;
  int iVar23;
  undefined4 uVar24;
  InternalExceptionFrame IStack_dc;
  uint auStack_98 [13];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  SettMapTy *pSStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  UINT UStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  int *piStack_8;
  
  pSStack_38 = this;
  uVar5 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x61) = uVar5;
  IStack_dc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_dc;
  iVar6 = __setjmp3(IStack_dc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pSStack_38;
  if (iVar6 != 0) {
    g_currentExceptionFrame = IStack_dc.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x758,0,iVar6,
                                &DAT_007a4ccc,s_SettMapTy__GetMessage_007cd23c);
    if (iVar11 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x758);
    return 0xffff;
  }
  thunk_FUN_005b6450(pSStack_38,param_1);
  uVar14 = *(uint *)(param_1 + 0x10);
  if (uVar14 < 0x6549) {
    if (uVar14 == 0x6548) {
      if (this_00[0x65] == (SettMapTy)0x1) {
        DAT_00808a95 = DAT_00808a95 == '\0';
        *(undefined4 *)(this_00 + 0x2d) = 5;
        FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2149),(undefined4 *)(this_00 + 0x1d));
      }
      goto switchD_005c8bd0_caseD_6120;
    }
    if (uVar14 < 0x6333) {
      if (uVar14 == 0x6332) {
        StartSystemTy::PaintBinDesc(DAT_0081176c,param_1);
      }
      else if (uVar14 < 0x610b) {
        if (uVar14 == 0x610a) {
          *(undefined4 *)(this_00 + 0x45) = 0x200;
          *(undefined4 *)(this_00 + 0x49) = 0;
          *(undefined4 *)(this_00 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(this_00 + 0x51) = 6;
          thunk_FUN_005b66e0(this_00);
        }
        else if (uVar14 < 6) {
          if (uVar14 == 5) {
            PaintSettMap(this_00,'\0');
          }
          else if (uVar14 == 0) {
            (**(code **)(*(int *)this_00 + 0xc))();
          }
          else if (uVar14 == 2) {
            uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18);
            *(undefined4 *)(this_00 + 0x1e27) = uVar5;
            (**(code **)(*(int *)this_00 + 0x10))
                      (CONCAT31((int3)((uint)uVar5 >> 8),
                                *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14)));
          }
          else if (uVar14 == 3) {
            (**(code **)(*(int *)this_00 + 0x14))();
          }
        }
        else if (uVar14 == 0x6105) {
          *(undefined4 *)(this_00 + 0x45) = 0x200;
          *(undefined4 *)(this_00 + 0x49) = 0;
          *(undefined4 *)(this_00 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(this_00 + 0x51) = *(undefined4 *)(param_1 + 0x14);
          *(undefined4 *)(this_00 + 0x55) = *(undefined4 *)(param_1 + 0x18);
          thunk_FUN_005b66e0(this_00);
        }
        else if (uVar14 == 0x6109) goto switchD_005c8bd0_caseD_611f;
      }
      else {
        switch(uVar14) {
        case 0x611f:
switchD_005c8bd0_caseD_611f:
          *(undefined4 *)(this_00 + 0x45) = 0x200;
          *(undefined4 *)(this_00 + 0x49) = 0;
          *(undefined4 *)(this_00 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(this_00 + 0x51) = *(undefined4 *)(param_1 + 0x14);
          *(undefined4 *)(this_00 + 0x55) = *(undefined4 *)(param_1 + 0x18);
          thunk_FUN_005b66e0(this_00);
          break;
        case 0x6200:
          *(undefined4 *)(this_00 + 0x1f88) = *(undefined4 *)(param_1 + 0x14);
          (**(code **)(*(int *)this_00 + 0x2c))();
          break;
        case 0x6201:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(this_00 + 0x1c6b),param_1,0);
          break;
        case 0x6202:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(this_00 + 0x1cfc),param_1,0);
          break;
        case 0x6203:
          uVar14 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
          *(uint *)(this_00 + 0x1dad) = uVar14;
          if (*(uint *)(this_00 + 0x1d91) != 0xffffffff) {
            FUN_006b3730(*(uint **)(this_00 + 0x1dd5),*(uint *)(this_00 + 0x1d91),
                         *(uint *)(this_00 + 0x1d95),*(uint *)(this_00 + 0x1da9),uVar14);
          }
        }
      }
      goto switchD_005c8bd0_caseD_6120;
    }
    if (uVar14 < 0x6504) {
      if (uVar14 == 0x6503) {
        iVar6 = *(int *)(this_00 + 0x1e2f);
        if ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar6 + 0xc)) {
          iVar6 = *(int *)(iVar6 + 8) * (uint)*(ushort *)(param_1 + 0x14) + *(int *)(iVar6 + 0x1c);
        }
        else {
          iVar6 = 0;
        }
        cVar4 = *(char *)(iVar6 + 0x104);
        piStack_c = (int *)CONCAT31(piStack_c._1_3_,cVar4);
        if (cVar4 != -1) {
          switch(cVar4) {
          case '\0':
            uVar12 = 0xfc;
            break;
          case '\x01':
            uVar12 = 0xfa;
            break;
          case '\x02':
            uVar12 = 0xfb;
            break;
          case '\x03':
            uVar12 = 0xf9;
            break;
          case '\x04':
            uVar12 = 0xfd;
            break;
          case '\x05':
            uVar12 = 0xfe;
            break;
          case '\x06':
            uVar12 = 0xf3;
            break;
          case '\a':
            uVar12 = 7;
            break;
          default:
            uVar12 = 0xff;
          }
          iVar6 = *(int *)(param_1 + 0x18);
          FUN_006b4170(iVar6,0,2,2,*(int *)(iVar6 + 4) + -4,*(int *)(iVar6 + 8) + -4,uVar12);
        }
        if (*(short *)(param_1 + 0x16) == 1) {
          iVar6 = *(int *)(param_1 + 0x18);
          FUN_006b5ee0(iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8),0xf,0xd);
        }
      }
      else if (uVar14 < 0x6336) {
        if (uVar14 == 0x6335) {
          *(uint *)(DAT_0081176c + 0x4cf) =
               *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
          if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
            FUN_006b3730(*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),
                         *(uint *)(DAT_0081176c + 0x4b7),*(uint *)(DAT_0081176c + 0x4cb),
                         *(uint *)(DAT_0081176c + 0x4cf));
          }
        }
        else if (uVar14 == 0x6333) {
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(DAT_0081176c + 0x38d),param_1,0);
        }
        else if (uVar14 == 0x6334) {
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(DAT_0081176c + 0x41e),param_1,0);
        }
      }
      else if (uVar14 == 0x64ff) {
        switch(*(undefined4 *)(param_1 + 0x18)) {
        case 0:
          uVar14 = *(uint *)(param_1 + 0x14);
          if (uVar14 != 0xffffffff) {
            this_00[0x1f57] = SUB41(uVar14,0);
            if ((uVar14 & 0xff) == 0) {
              if (3 < (byte)this_00[0x1f5c]) {
                this_00[0x1f5c] = (SettMapTy)0x3;
                *(undefined4 *)(this_00 + 0x2d) = 5;
                FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1f64),
                             (undefined4 *)(this_00 + 0x1d));
                FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1f80));
              }
            }
            else if (((uVar14 & 0xff) == 1) && (5 < (byte)this_00[0x1f5c])) {
              this_00[0x1f5c] = (SettMapTy)0x4;
              *(undefined4 *)(this_00 + 0x2d) = 5;
              FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1f64),
                           (undefined4 *)(this_00 + 0x1d));
              FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1f80));
            }
LAB_005c8ecc:
            *(undefined4 *)(this_00 + 0x1f47) = 0;
          }
          break;
        case 1:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00[0x1f5c] = (SettMapTy)((char)*(int *)(param_1 + 0x14) + '\x02');
            goto LAB_005c8ecc;
          }
          break;
        case 2:
          if (*(int *)(param_1 + 0x14) != -1) {
            *(int *)(this_00 + 0x1f58) = *(int *)(param_1 + 0x14);
            goto LAB_005c8ecc;
          }
          break;
        case 3:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00[0x1f5f] = SUB41(*(int *)(param_1 + 0x14),0);
            goto LAB_005c8ecc;
          }
          break;
        case 4:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00[0x1f5d] = SUB41(*(int *)(param_1 + 0x14),0);
            goto LAB_005c8ecc;
          }
          break;
        case 5:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00[0x1f5e] = SUB41(*(int *)(param_1 + 0x14),0);
            goto LAB_005c8ecc;
          }
        }
        *(undefined4 *)(this_00 + 0x2d) = 5;
        FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + *(int *)(param_1 + 0x18) * 4 + 0x1f60),
                     (undefined4 *)(this_00 + 0x1d));
        FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1f80));
      }
      else if (uVar14 == 0x6500) {
        ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(param_1 + 0x18),0,0,0,0,0);
        iVar6 = *(int *)(this_00 + 0x1e2f);
        if ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar6 + 0xc)) {
          puVar13 = (uint *)(*(int *)(iVar6 + 8) * (uint)*(ushort *)(param_1 + 0x14) +
                            *(int *)(iVar6 + 0x1c));
        }
        else {
          puVar13 = (uint *)0x0;
        }
        ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar13,-1,-1,
                       3 - (uint)(*(short *)(param_1 + 0x16) != 1));
        if (*(short *)(param_1 + 0x16) == 1) {
          iVar6 = *(int *)(param_1 + 0x18);
          FUN_006b5ee0(iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8),0xf,0xd);
        }
      }
      goto switchD_005c8bd0_caseD_6120;
    }
    switch(uVar14) {
    case 0x6506:
      iVar6 = *(int *)(this_00 + 0x1e2f);
      uVar14 = *(uint *)(param_1 + 0x14);
      if (uVar14 < *(uint *)(iVar6 + 0xc)) {
        switch(*(undefined4 *)(param_1 + 0x18)) {
        case 0:
          SVar1 = this_00[0x1e26];
          if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
             (piVar16 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
            piVar16 = DAT_0080c506;
          }
          if (uVar14 < (uint)piVar16[3]) {
            if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
               (piVar16 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
              piVar16 = DAT_0080c506;
            }
            if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
               (piVar7 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
              piVar7 = DAT_0080c506;
            }
            iVar6 = piVar7[2] * uVar14 + piVar16[7];
          }
          else {
            iVar6 = 0;
          }
          if (iVar6 == 0) {
            *(undefined4 *)(this_00 + 0x1c5f) = 0;
            DAT_0080995c = 1;
            puVar18 = &DAT_00809960;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            StartSystemTy::SetObjectives
                      (DAT_0081176c,*(int *)(this_00 + 0x1f43),(char *)0x0,
                       *(int *)(this_00 + 0x1c63));
          }
          else {
            *(uint *)(this_00 + 0x1c5f) = uVar14;
            DAT_0080995c = *(undefined4 *)(iVar6 + 0x90);
            uVar14 = 0xffffffff;
            pcVar8 = (char *)(iVar6 + 0x4c);
            do {
              pcVar19 = pcVar8;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar19 = pcVar8 + 1;
              cVar4 = *pcVar8;
              pcVar8 = pcVar19;
            } while (cVar4 != '\0');
            uVar14 = ~uVar14;
            pcVar8 = pcVar19 + -uVar14;
            pcVar19 = (char *)&DAT_00809960;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar19 = pcVar19 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar19 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar19 = pcVar19 + 1;
            }
            StartSystemTy::SetObjectives
                      (DAT_0081176c,*(int *)(this_00 + 0x1f43),(char *)(iVar6 + 0x70),
                       *(int *)(this_00 + 0x1c63));
          }
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2125),(undefined4 *)(this_00 + 0x1d));
          if ((DAT_008067a0 != '\0') && (DAT_00811764 != 0)) {
            FUN_006b6160((char *)(this_00 + 0x1a5f),DAT_00811764 + 0x18);
            this_00[0x1a7f] = (SettMapTy)0x1;
            this_00[0x1a80] = DAT_008087c4._2_1_;
            this_00[0x1a81] = SUB21(DAT_008087c2 >> 1,0);
            wsprintfA((LPSTR)&uStack_64,&DAT_007cc584,DAT_0080995c);
            *(undefined4 *)(this_00 + 0x1a82) = uStack_64;
            *(undefined4 *)(this_00 + 0x1a86) = uStack_60;
            _strncpy((char *)(this_00 + 0x1a8a),(char *)&DAT_0080c3c3,0x1d5);
            this_00[0x1c5e] = (SettMapTy)0x0;
          }
          (**(code **)(*(int *)this_00 + 0x2c))();
          break;
        case 3:
          DAT_00808a90._0_2_ =
               CONCAT11(*(undefined1 *)
                         (*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c)),
                        (char)DAT_00808a90);
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2131),(undefined4 *)(this_00 + 0x1d));
          break;
        case 4:
          DAT_00808a90 = CONCAT31(DAT_00808a90._1_3_,
                                  *(undefined1 *)
                                   (*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c)));
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2135),(undefined4 *)(this_00 + 0x1d));
          break;
        case 5:
          DAT_00808a90._0_3_ =
               CONCAT12(*(undefined1 *)
                         (*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c)),
                        (undefined2)DAT_00808a90);
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2139),(undefined4 *)(this_00 + 0x1d));
          bVar3 = DAT_00808a90._2_1_;
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            DAT_00808a90 = CONCAT13(bVar3,(undefined3)DAT_00808a90);
            *(undefined4 *)(this_00 + 0x2d) = 5;
            FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x213d),(undefined4 *)(this_00 + 0x1d))
            ;
          }
          break;
        case 6:
          DAT_00808a90 = CONCAT13(*(undefined1 *)
                                   (*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c)),
                                  (undefined3)DAT_00808a90);
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x213d),(undefined4 *)(this_00 + 0x1d));
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            DAT_00808a90._0_3_ = CONCAT12(DAT_00808a90._3_1_,(undefined2)DAT_00808a90);
            *(undefined4 *)(this_00 + 0x2d) = 5;
            FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2139),(undefined4 *)(this_00 + 0x1d))
            ;
          }
          break;
        case 7:
          DAT_00808a97 = *(int *)(*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c));
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2141),(undefined4 *)(this_00 + 0x1d));
          break;
        case 8:
          DAT_00808a9b = *(byte *)(*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c));
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2145),(undefined4 *)(this_00 + 0x1d));
        }
      }
      break;
    case 0x653f:
      if (this_00[0x65] == (SettMapTy)0x1) {
        SVar1 = this_00[0x1e26];
        if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
           (piVar16 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
          piVar16 = DAT_0080c506;
        }
        *(undefined4 *)(this_00 + 0x2171) = 0x6506;
        *(undefined4 *)(this_00 + 0x2179) = 0;
        *(undefined4 *)(this_00 + 0x2191) = 0x6500;
        *(undefined4 *)(this_00 + 0x21a1) = 0;
        piStack_8 = (int *)0x0;
        *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
        piStack_c = piVar16;
        if (piVar16[3] != 0) {
          do {
            pcVar8 = (char *)(piVar16[2] * (int)piStack_8 + piVar16[7]);
            if (pcVar8 != (char *)0x0) {
              *(int **)(this_00 + 0x1f37) = piStack_8;
              uVar14 = 0xffffffff;
              do {
                pcVar19 = pcVar8;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar19 = pcVar8 + 1;
                cVar4 = *pcVar8;
                pcVar8 = pcVar19;
              } while (cVar4 != '\0');
              uVar14 = ~uVar14;
              pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
              pSVar20 = this_00 + 0x1e33;
              for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
                pSVar17 = pSVar17 + 4;
                pSVar20 = pSVar20 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pSVar20 = *pSVar17;
                pSVar17 = pSVar17 + 1;
                pSVar20 = pSVar20 + 1;
              }
              FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
              piVar16 = piStack_c;
            }
            piStack_8 = (int *)((int)piStack_8 + 1);
          } while (piStack_8 < (int *)piVar16[3]);
        }
        *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
        *(undefined4 *)(this_00 + 0x21a1) = *(undefined4 *)(this_00 + 0x1c5f);
        *(undefined4 *)(this_00 + 0x21c5) = 0x1c5;
        *(undefined4 *)(this_00 + 0x21cd) = 0x154;
        *(undefined4 *)(this_00 + 0x21c9) = 0x14e;
        goto LAB_005c9fef;
      }
      break;
    case 0x6542:
    case 0x6543:
    case 0x6544:
    case 0x6545:
      if (this_00[0x65] != (SettMapTy)0x1) break;
      *(undefined4 *)(this_00 + 0x2171) = 0x6506;
      *(int *)(this_00 + 0x2179) = *(int *)(param_1 + 0x10) + -0x653f;
      *(undefined4 *)(this_00 + 0x2191) = 0x6500;
      *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
      pcVar8 = (char *)FUN_006b0140(0x234e,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
      pSVar20 = this_00 + 0x1e33;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
        pSVar17 = pSVar17 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pSVar20 = *pSVar17;
        pSVar17 = pSVar17 + 1;
        pSVar20 = pSVar20 + 1;
      }
      *(undefined4 *)(this_00 + 0x1f37) = 0;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
      pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
      pSVar20 = this_00 + 0x1e33;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
        pSVar17 = pSVar17 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pSVar20 = *pSVar17;
        pSVar17 = pSVar17 + 1;
        pSVar20 = pSVar20 + 1;
      }
      *(undefined4 *)(this_00 + 0x1f37) = 1;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
      pcVar8 = (char *)FUN_006b0140(0x234f,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
      pSVar20 = this_00 + 0x1e33;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
        pSVar17 = pSVar17 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pSVar20 = *pSVar17;
        pSVar17 = pSVar17 + 1;
        pSVar20 = pSVar20 + 1;
      }
      *(undefined4 *)(this_00 + 0x1f37) = 2;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
      *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
      switch(*(undefined4 *)(this_00 + 0x2179)) {
      case 3:
        bVar3 = DAT_00808a90._1_1_;
        goto LAB_005c95d4;
      case 4:
        *(uint *)(this_00 + 0x21a1) = DAT_00808a90 & 0xff;
        break;
      case 5:
        *(uint *)(this_00 + 0x21a1) = DAT_00808a90 >> 0x10 & 0xff;
        break;
      case 6:
        bVar3 = DAT_00808a90._3_1_;
LAB_005c95d4:
        *(uint *)(this_00 + 0x21a1) = (uint)bVar3;
      }
      switch(*(undefined4 *)(this_00 + 0x2179)) {
      case 3:
      case 5:
        *(undefined4 *)(this_00 + 0x21c5) = 0x1c5;
        break;
      case 4:
      case 6:
        *(undefined4 *)(this_00 + 0x21c5) = 0x2bf;
      }
      *(undefined4 *)(this_00 + 0x21cd) = 0x5a;
      switch(*(undefined4 *)(this_00 + 0x2179)) {
      case 3:
      case 4:
        *(undefined4 *)(this_00 + 0x21c9) = 0x164;
        break;
      case 5:
      case 6:
        *(undefined4 *)(this_00 + 0x21c9) = 0x17a;
      }
      iVar6 = *(int *)(DAT_0081176c + 0x34);
      iVar11 = *(int *)(iVar6 + 0xa0);
joined_r0x005c964b:
      if (iVar11 != 0) {
        FUN_00710790(iVar6);
      }
      *(undefined4 *)(this_00 + 0x21a5) = *(undefined4 *)(iVar6 + 0x8a);
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(0x100ef,0,0,this_00 + 0x2161,0);
      break;
    case 0x6546:
      if (this_00[0x65] == (SettMapTy)0x1) {
        *(undefined4 *)(this_00 + 0x2171) = 0x6506;
        *(undefined4 *)(this_00 + 0x2179) = 7;
        *(undefined4 *)(this_00 + 0x2191) = 0x6500;
        *(undefined4 *)(this_00 + 0x21a1) = 0;
        pSVar17 = this_00 + 0x1e33;
        *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
        *(undefined4 *)(this_00 + 0x1f37) = 100;
        wsprintfA((LPSTR)pSVar17,&DAT_007c1890,100);
        FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)pSVar17);
        *(undefined4 *)(this_00 + 0x1f37) = 0x96;
        wsprintfA((LPSTR)pSVar17,&DAT_007c1890,0x96);
        FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)pSVar17);
        *(undefined4 *)(this_00 + 0x1f37) = 200;
        wsprintfA((LPSTR)pSVar17,&DAT_007c1890,200);
        FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)pSVar17);
        *(undefined4 *)(this_00 + 0x1f37) = 0xffffffff;
        pcVar8 = (char *)FUN_006b0140(0x1f55,DAT_00807618);
        uVar14 = 0xffffffff;
        do {
          pcVar19 = pcVar8;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar19 = pcVar8 + 1;
          cVar4 = *pcVar8;
          pcVar8 = pcVar19;
        } while (cVar4 != '\0');
        uVar14 = ~uVar14;
        pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
        pSVar20 = this_00 + 0x1e33;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
          pSVar17 = pSVar17 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pSVar20 = *pSVar17;
          pSVar17 = pSVar17 + 1;
          pSVar20 = pSVar20 + 1;
        }
        FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
        *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
        if (DAT_00808a97 == 0x96) {
          *(undefined4 *)(this_00 + 0x21a1) = 1;
        }
        else if (DAT_00808a97 == 200) {
          *(undefined4 *)(this_00 + 0x21a1) = 2;
        }
        else if (DAT_00808a97 == -1) {
          *(undefined4 *)(this_00 + 0x21a1) = 3;
        }
        *(undefined4 *)(this_00 + 0x21c5) = 0x1c5;
        *(undefined4 *)(this_00 + 0x21cd) = 0x5a;
        *(undefined4 *)(this_00 + 0x21c9) = 400;
        iVar6 = *(int *)(DAT_0081176c + 0x34);
        if (*(int *)(iVar6 + 0xa0) != 0) {
          FUN_00710790(iVar6);
        }
        *(undefined4 *)(this_00 + 0x21a5) = *(undefined4 *)(iVar6 + 0x8a);
        (**(code **)(**(int **)(this_00 + 0xc) + 8))(0x100ef,0,0,this_00 + 0x2161,0);
      }
      break;
    case 0x6547:
      if (this_00[0x65] == (SettMapTy)0x1) {
        *(undefined4 *)(this_00 + 0x2171) = 0x6506;
        *(undefined4 *)(this_00 + 0x2179) = 8;
        *(undefined4 *)(this_00 + 0x2191) = 0x6500;
        *(undefined4 *)(this_00 + 0x21a1) = 0;
        uVar24 = 1;
        pSVar17 = this_00 + 0x1e33;
        *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
        *(undefined4 *)(this_00 + 0x1f37) = 0;
        uVar5 = FUN_006b0140(0x1f57,DAT_00807618);
        wsprintfA((LPSTR)pSVar17,s__s__d_007cd0b8,uVar5,uVar24);
        FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)pSVar17);
        *(undefined4 *)(this_00 + 0x1f37) = 1;
        uVar24 = 2;
        uVar5 = FUN_006b0140(0x1f57,DAT_00807618);
        wsprintfA((LPSTR)pSVar17,s__s__d_007cd0b8,uVar5,uVar24);
        FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)pSVar17);
        *(undefined4 *)(this_00 + 0x1f37) = 2;
        uVar24 = 3;
        uVar5 = FUN_006b0140(0x1f57,DAT_00807618);
        wsprintfA((LPSTR)pSVar17,s__s__d_007cd0b8,uVar5,uVar24);
        FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)pSVar17);
        *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
        *(uint *)(this_00 + 0x21a1) = (uint)DAT_00808a9b;
        *(undefined4 *)(this_00 + 0x21c5) = 0x2bf;
        *(undefined4 *)(this_00 + 0x21cd) = 0x5a;
        *(undefined4 *)(this_00 + 0x21c9) = 400;
        iVar6 = *(int *)(DAT_0081176c + 0x34);
        iVar11 = *(int *)(iVar6 + 0xa0);
        goto joined_r0x005c996c;
      }
    }
    goto switchD_005c8bd0_caseD_6120;
  }
  if (uVar14 < 0x6900) {
    if (uVar14 == 0x68ff) {
      if (this_00[0x65] == (SettMapTy)0x1) {
        *(undefined4 *)(this_00 + 0x2171) = 0x64ff;
        *(int *)(this_00 + 0x2179) = *(int *)(param_1 + 0x10) + -0x68ff;
        *(undefined4 *)(this_00 + 0x2191) = 0x6500;
        *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
        pcVar8 = (char *)FUN_006b0140(0x234b,DAT_00807618);
        uVar14 = 0xffffffff;
        do {
          pcVar19 = pcVar8;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar19 = pcVar8 + 1;
          cVar4 = *pcVar8;
          pcVar8 = pcVar19;
        } while (cVar4 != '\0');
        uVar14 = ~uVar14;
        pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
        pSVar20 = this_00 + 0x1e33;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
          pSVar17 = pSVar17 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pSVar20 = *pSVar17;
          pSVar17 = pSVar17 + 1;
          pSVar20 = pSVar20 + 1;
        }
        *(undefined4 *)(this_00 + 0x1f37) = 0;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
        pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
        uVar14 = 0xffffffff;
        do {
          pcVar19 = pcVar8;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar19 = pcVar8 + 1;
          cVar4 = *pcVar8;
          pcVar8 = pcVar19;
        } while (cVar4 != '\0');
        uVar14 = ~uVar14;
        pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
        pSVar20 = this_00 + 0x1e33;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
          pSVar17 = pSVar17 + 4;
          pSVar20 = pSVar20 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pSVar20 = *pSVar17;
          pSVar17 = pSVar17 + 1;
          pSVar20 = pSVar20 + 1;
        }
        *(undefined4 *)(this_00 + 0x1f37) = 1;
        FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
        if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
          pcVar8 = (char *)FUN_006b0140(0x234d,DAT_00807618);
          uVar14 = 0xffffffff;
          do {
            pcVar19 = pcVar8;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar19 = pcVar8 + 1;
            cVar4 = *pcVar8;
            pcVar8 = pcVar19;
          } while (cVar4 != '\0');
          uVar14 = ~uVar14;
          pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
          pSVar20 = this_00 + 0x1e33;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
            pSVar17 = pSVar17 + 4;
            pSVar20 = pSVar20 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pSVar20 = *pSVar17;
            pSVar17 = pSVar17 + 1;
            pSVar20 = pSVar20 + 1;
          }
          *(undefined4 *)(this_00 + 0x1f37) = 2;
          FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
        }
        *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
        *(uint *)(this_00 + 0x21a1) = (uint)(byte)this_00[0x1f57];
        *(undefined4 *)(this_00 + 0x21c5) = 0x1a;
        *(undefined4 *)(this_00 + 0x21cd) = 0xe0;
        *(undefined4 *)(this_00 + 0x21c9) = 0xba;
        goto LAB_005c9c8a;
      }
    }
    else {
      switch(uVar14) {
      case 0x6549:
        if (this_00[0x65] == (SettMapTy)0x1) {
          DAT_00808a8f = DAT_00808a8f == '\0';
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x214d),(undefined4 *)(this_00 + 0x1d));
          (**(code **)(*(int *)this_00 + 0x2c))();
        }
        break;
      case 0x654a:
        if (this_00[0x65] == (SettMapTy)0x1) {
          DAT_00808a94 = DAT_00808a94 == '\0';
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2151),(undefined4 *)(this_00 + 0x1d));
        }
        break;
      case 0x654b:
        if (this_00[0x65] == (SettMapTy)0x1) {
          DAT_00808aa9 = DAT_00808aa9 == '\0';
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2155),(undefined4 *)(this_00 + 0x1d));
        }
        break;
      case 0x654c:
        if (this_00[0x65] == (SettMapTy)0x1) {
          DAT_00808aaa = DAT_00808aaa == '\0';
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x2159),(undefined4 *)(this_00 + 0x1d));
        }
        break;
      case 0x654d:
        if (this_00[0x65] == (SettMapTy)0x1) {
          DAT_0080734b = DAT_0080734b == '\0';
          DAT_00808aa8 = DAT_0080734b;
          PaintSC(this_00);
        }
      }
    }
    goto switchD_005c8bd0_caseD_6120;
  }
  switch(uVar14) {
  case 0x6900:
    if (this_00[0x65] == (SettMapTy)0x1) {
      *(undefined4 *)(this_00 + 0x2171) = 0x64ff;
      *(int *)(this_00 + 0x2179) = *(int *)(param_1 + 0x10) + -0x68ff;
      *(undefined4 *)(this_00 + 0x2191) = 0x6500;
      piStack_8 = (int *)0x3;
      if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
        if (this_00[0x1f57] == (SettMapTy)0x0) {
          piStack_8 = (int *)0x2;
        }
        else if (this_00[0x1f57] == (SettMapTy)0x1) {
          piStack_8 = (int *)0x4;
        }
        else {
          piStack_8 = (int *)0x7;
        }
      }
      *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
      if (piStack_8 != (int *)0x0) {
        iVar6 = 2;
        do {
          uVar5 = FUN_006b0140(0x2354,DAT_00807618);
          wsprintfA((LPSTR)(this_00 + 0x1e33),s__d__s_007c2864,iVar6,uVar5);
          *(int *)(this_00 + 0x1f37) = iVar6;
          FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
          iVar11 = iVar6 + -1;
          iVar6 = iVar6 + 1;
        } while (iVar11 < (int)piStack_8);
      }
      *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
      *(uint *)(this_00 + 0x21a1) = (byte)this_00[0x1f5c] - 2;
      *(undefined4 *)(this_00 + 0x21c5) = 0x1a;
      *(undefined4 *)(this_00 + 0x21cd) = 0xe0;
      *(undefined4 *)(this_00 + 0x21c9) = 0xe2;
LAB_005c9fef:
      iVar6 = *(int *)(DAT_0081176c + 0x34);
      iVar11 = *(int *)(iVar6 + 0xa0);
joined_r0x005c996c:
      if (iVar11 != 0) {
        FUN_00710790(iVar6);
      }
      *(undefined4 *)(this_00 + 0x21a5) = *(undefined4 *)(iVar6 + 0x8a);
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(0x100ef,0,0,this_00 + 0x2161,0);
    }
    break;
  case 0x6901:
    if (this_00[0x65] == (SettMapTy)0x1) {
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        piStack_c = (int *)0x1;
      }
      else {
        piStack_c = *(int **)(*(int *)(this_00 + 0x1f7c) + 0xc);
      }
      *(undefined4 *)(this_00 + 0x2171) = 0x64ff;
      *(int *)(this_00 + 0x2179) = *(int *)(param_1 + 0x10) + -0x68ff;
      *(undefined4 *)(this_00 + 0x2191) = 0x6500;
      piStack_8 = (int *)0x0;
      *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
      if (piStack_c != (int *)0x0) {
        do {
          iVar6 = *(int *)(this_00 + 0x1f7c);
          if (piStack_8 < *(int **)(iVar6 + 0xc)) {
            iVar6 = *(int *)(iVar6 + 8) * (int)piStack_8 + *(int *)(iVar6 + 0x1c);
          }
          else {
            iVar6 = 0;
          }
          uVar14 = 0xffffffff;
          pcVar8 = (char *)(iVar6 + 0x104);
          do {
            pcVar19 = pcVar8;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar19 = pcVar8 + 1;
            cVar4 = *pcVar8;
            pcVar8 = pcVar19;
          } while (cVar4 != '\0');
          uVar14 = ~uVar14;
          pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
          pSVar20 = this_00 + 0x1e33;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
            pSVar17 = pSVar17 + 4;
            pSVar20 = pSVar20 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pSVar20 = *pSVar17;
            pSVar17 = pSVar17 + 1;
            pSVar20 = pSVar20 + 1;
          }
          *(int **)(this_00 + 0x1f37) = piStack_8;
          FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
          piStack_8 = (int *)((int)piStack_8 + 1);
        } while (piStack_8 < piStack_c);
      }
      *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
      *(undefined4 *)(this_00 + 0x21a1) = *(undefined4 *)(this_00 + 0x1f58);
      *(undefined4 *)(this_00 + 0x21c5) = 0x1a;
      *(undefined4 *)(this_00 + 0x21cd) = 0xe0;
      *(undefined4 *)(this_00 + 0x21c9) = 0x10a;
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        *(undefined4 *)(this_00 + 0x21c9) = 0x118;
      }
      iVar6 = *(int *)(DAT_0081176c + 0x34);
      if (*(int *)(iVar6 + 0xa0) != 0) {
        FUN_00710790(iVar6);
      }
      *(undefined4 *)(this_00 + 0x21a5) = *(undefined4 *)(iVar6 + 0x8a);
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(0x100ef,0,0,this_00 + 0x2161,0);
    }
    break;
  case 0x6902:
    if (this_00[0x65] != (SettMapTy)0x1) break;
    *(undefined4 *)(this_00 + 0x2171) = 0x64ff;
    *(int *)(this_00 + 0x2179) = *(int *)(param_1 + 0x10) + -0x68ff;
    *(undefined4 *)(this_00 + 0x2191) = 0x6500;
    *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
    pcVar8 = (char *)FUN_006b0140(0x2355,DAT_00807618);
    uVar14 = 0xffffffff;
    do {
      pcVar19 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar19;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
    pSVar20 = this_00 + 0x1e33;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
      pSVar17 = pSVar17 + 4;
      pSVar20 = pSVar20 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pSVar20 = *pSVar17;
      pSVar17 = pSVar17 + 1;
      pSVar20 = pSVar20 + 1;
    }
    *(undefined4 *)(this_00 + 0x1f37) = 0;
    FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
    pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
    uVar14 = 0xffffffff;
    do {
      pcVar19 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar19;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
    pSVar20 = this_00 + 0x1e33;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
      pSVar17 = pSVar17 + 4;
      pSVar20 = pSVar20 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pSVar20 = *pSVar17;
      pSVar17 = pSVar17 + 1;
      pSVar20 = pSVar20 + 1;
    }
    *(undefined4 *)(this_00 + 0x1f37) = 1;
    FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
    pcVar8 = (char *)FUN_006b0140(0x2356,DAT_00807618);
    uVar14 = 0xffffffff;
    do {
      pcVar19 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar19;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
    pSVar20 = this_00 + 0x1e33;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
      pSVar17 = pSVar17 + 4;
      pSVar20 = pSVar20 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pSVar20 = *pSVar17;
      pSVar17 = pSVar17 + 1;
      pSVar20 = pSVar20 + 1;
    }
    *(undefined4 *)(this_00 + 0x1f37) = 2;
    FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
    *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
    *(uint *)(this_00 + 0x21a1) = (uint)(byte)this_00[0x1f5f];
    *(undefined4 *)(this_00 + 0x21c5) = 0x1a;
    *(undefined4 *)(this_00 + 0x21cd) = 0xe0;
    *(undefined4 *)(this_00 + 0x21c9) = 0x132;
LAB_005c9c8a:
    iVar6 = *(int *)(DAT_0081176c + 0x34);
    iVar11 = *(int *)(iVar6 + 0xa0);
    goto joined_r0x005c964b;
  case 0x6903:
    if (this_00[0x65] == (SettMapTy)0x1) {
      *(undefined4 *)(this_00 + 0x2171) = 0x64ff;
      *(int *)(this_00 + 0x2179) = *(int *)(param_1 + 0x10) + -0x68ff;
      *(undefined4 *)(this_00 + 0x2191) = 0x6500;
      *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
      pcVar8 = (char *)FUN_006b0140(0x234e,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
      pSVar20 = this_00 + 0x1e33;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
        pSVar17 = pSVar17 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pSVar20 = *pSVar17;
        pSVar17 = pSVar17 + 1;
        pSVar20 = pSVar20 + 1;
      }
      *(undefined4 *)(this_00 + 0x1f37) = 0;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
      pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
      pSVar20 = this_00 + 0x1e33;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
        pSVar17 = pSVar17 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pSVar20 = *pSVar17;
        pSVar17 = pSVar17 + 1;
        pSVar20 = pSVar20 + 1;
      }
      *(undefined4 *)(this_00 + 0x1f37) = 1;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
      pcVar8 = (char *)FUN_006b0140(0x234f,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
      pSVar20 = this_00 + 0x1e33;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
        pSVar17 = pSVar17 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pSVar20 = *pSVar17;
        pSVar17 = pSVar17 + 1;
        pSVar20 = pSVar20 + 1;
      }
      *(undefined4 *)(this_00 + 0x1f37) = 2;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
      *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
      *(uint *)(this_00 + 0x21a1) = (uint)(byte)this_00[0x1f5d];
      *(undefined4 *)(this_00 + 0x21c5) = 0x1a;
      *(undefined4 *)(this_00 + 0x21cd) = 0xe0;
      *(undefined4 *)(this_00 + 0x21c9) = 0x15a;
      goto LAB_005c9c8a;
    }
    break;
  case 0x6904:
    if (this_00[0x65] == (SettMapTy)0x1) {
      *(undefined4 *)(this_00 + 0x2171) = 0x64ff;
      *(int *)(this_00 + 0x2179) = *(int *)(param_1 + 0x10) + -0x68ff;
      *(undefined4 *)(this_00 + 0x2191) = 0x6500;
      *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc) = 0;
      pcVar8 = (char *)FUN_006b0140(0x234e,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
      pSVar20 = this_00 + 0x1e33;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
        pSVar17 = pSVar17 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pSVar20 = *pSVar17;
        pSVar17 = pSVar17 + 1;
        pSVar20 = pSVar20 + 1;
      }
      *(undefined4 *)(this_00 + 0x1f37) = 0;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
      pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
      pSVar20 = this_00 + 0x1e33;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
        pSVar17 = pSVar17 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pSVar20 = *pSVar17;
        pSVar17 = pSVar17 + 1;
        pSVar20 = pSVar20 + 1;
      }
      *(undefined4 *)(this_00 + 0x1f37) = 1;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
      pcVar8 = (char *)FUN_006b0140(0x234f,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pSVar17 = (SettMapTy *)(pcVar19 + -uVar14);
      pSVar20 = this_00 + 0x1e33;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pSVar20 = *(undefined4 *)pSVar17;
        pSVar17 = pSVar17 + 4;
        pSVar20 = pSVar20 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pSVar20 = *pSVar17;
        pSVar17 = pSVar17 + 1;
        pSVar20 = pSVar20 + 1;
      }
      *(undefined4 *)(this_00 + 0x1f37) = 2;
      FUN_006ae1c0(*(uint **)(this_00 + 0x1e2f),(undefined4 *)(this_00 + 0x1e33));
      *(undefined4 *)(this_00 + 0x21a9) = *(undefined4 *)(*(int *)(this_00 + 0x1e2f) + 0xc);
      *(uint *)(this_00 + 0x21a1) = (uint)(byte)this_00[0x1f5e];
      *(undefined4 *)(this_00 + 0x21c5) = 0x1a;
      *(undefined4 *)(this_00 + 0x21cd) = 0xe0;
      *(undefined4 *)(this_00 + 0x21c9) = 0x182;
      goto LAB_005c9c8a;
    }
    break;
  case 0x6905:
    if (this_00[0x65] == (SettMapTy)0x1) {
      DVar9 = timeGetTime();
      *(DWORD *)(this_00 + 0x1f53) = DVar9;
      thunk_FUN_005c7800();
    }
    break;
  case 0x693f:
    (**(code **)(*(int *)this_00 + 0x20))();
    break;
  case 0x6940:
    (**(code **)(*(int *)this_00 + 0x24))();
    break;
  case 0x6942:
    *(undefined4 *)(this_00 + 0x45) = 0x200;
    *(undefined4 *)(this_00 + 0x49) = 0;
    *(undefined4 *)(this_00 + 0x4d) = 0x6102;
    *(undefined4 *)(this_00 + 0x51) = 0;
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    *(undefined4 *)(this_00 + 0x21e1) = 0x1010101;
    *(undefined2 *)(this_00 + 0x21e5) = 0x101;
    this_00[0x21e7] = (SettMapTy)0x1;
    (**(code **)(*(int *)this_00 + 8))();
    this_01 = *(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6);
    goto LAB_005c9e75;
  case 0x6947:
    thunk_FUN_005b6350(this_00,0x611f,*(undefined4 *)(this_00 + 0x1e27),(uint)(byte)this_00[0x1e26])
    ;
    (**(code **)(*(int *)this_00 + 8))();
    if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != 0) {
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      thunk_FUN_005b8f40(*(void **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),&uStack_58);
    }
    break;
  case 0x6948:
    DAT_008087a0 = this_00[0x1e26];
    switch(this_00[0x1e26]) {
    case (SettMapTy)0x1:
    case (SettMapTy)0x2:
    case (SettMapTy)0x3:
    case (SettMapTy)0x6:
    case (SettMapTy)0x8:
    case (SettMapTy)0x9:
    case (SettMapTy)0xa:
    case (SettMapTy)0xb:
      DAT_00808783 = 2;
      break;
    case (SettMapTy)0x4:
    case (SettMapTy)0x5:
    case (SettMapTy)0x7:
    case (SettMapTy)0xc:
    case (SettMapTy)0xd:
    case (SettMapTy)0xe:
    case (SettMapTy)0xf:
    case (SettMapTy)0x10:
    case (SettMapTy)0x11:
    case (SettMapTy)0x12:
    case (SettMapTy)0x13:
    case (SettMapTy)0x14:
    case (SettMapTy)0x15:
      DAT_00808783 = 3;
    }
    *(undefined4 *)(this_00 + 0x49) = 1;
    *(undefined4 *)(this_00 + 0x4d) = 0x60ff;
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x694d:
    thunk_FUN_005b6350(this_00,0x6105,1,0);
    *(undefined4 *)(this_00 + 0x21e1) = 0x1010101;
    *(undefined2 *)(this_00 + 0x21e5) = 0x101;
    this_00[0x21e7] = (SettMapTy)0x1;
    this_00[0x21e7] = (SettMapTy)0x0;
    goto LAB_005c9e62;
  case 0x694f:
    thunk_FUN_005b6350(this_00,0x6109,1,(uint)(this_00[0x1e26] == (SettMapTy)0xe));
    this_00[0x21e6] = (SettMapTy)0x0;
    this_00[0x21e4] = (SettMapTy)0x0;
    (**(code **)(*(int *)this_00 + 8))();
    if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != 0) {
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      thunk_FUN_005b8f40(*(void **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),&uStack_48);
    }
    break;
  case 0x6951:
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    *(undefined4 *)(this_00 + 0x21e1) = 0x1010101;
    *(undefined2 *)(this_00 + 0x21e5) = 0x101;
    this_00[0x21e7] = (SettMapTy)0x1;
LAB_005c9e62:
    (**(code **)(*(int *)this_00 + 8))();
    this_01 = *(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6);
LAB_005c9e75:
    if (this_01 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(this_01,1,0,1);
    }
    break;
  case 0x697f:
  case 0x6980:
  case 0x6981:
  case 0x6982:
  case 0x6983:
  case 0x6984:
    piStack_8 = *(int **)(param_1 + 0x18);
    piStack_c = *(int **)(*(int *)(this_00 + 0x1e2b) + 4);
    iStack_34 = *(int *)(*(int *)(this_00 + 0x1e2b) + 8);
    switch(uVar14) {
    case 0x697f:
      if (this_00[0x1f57] == (SettMapTy)0x0) {
        UVar22 = 0x234b;
        goto LAB_005ca70e;
      }
      if (this_00[0x1f57] != (SettMapTy)0x1) {
        UVar22 = 0x234d;
        goto LAB_005ca70e;
      }
      goto LAB_005ca619;
    case 0x6980:
      uVar5 = FUN_006b0140(0x2354,DAT_00807618);
      wsprintfA((LPSTR)auStack_98,s__d__s_007c2864,(uint)(byte)this_00[0x1f5c],uVar5);
      goto LAB_005ca73b;
    case 0x6981:
      iVar6 = *(int *)(this_00 + 0x1f7c);
      if (*(uint *)(this_00 + 0x1f58) < *(uint *)(iVar6 + 0xc)) {
        pcVar8 = (char *)(*(int *)(iVar6 + 8) * *(uint *)(this_00 + 0x1f58) + *(int *)(iVar6 + 0x1c)
                         + 0x104);
      }
      else {
        pcVar8 = (char *)0x104;
      }
      goto LAB_005ca71b;
    case 0x6982:
      if (this_00[0x1f5f] == (SettMapTy)0x0) {
        UVar22 = 0x2355;
      }
      else {
        if (this_00[0x1f5f] == (SettMapTy)0x1) goto LAB_005ca619;
        UVar22 = 0x2356;
      }
      goto LAB_005ca70e;
    case 0x6983:
      SVar1 = this_00[0x1f5d];
      break;
    default:
      SVar1 = this_00[0x1f5e];
    }
    if (SVar1 == (SettMapTy)0x0) {
      UVar22 = 0x234e;
    }
    else if (SVar1 == (SettMapTy)0x1) {
LAB_005ca619:
      UVar22 = 0x234c;
    }
    else {
      UVar22 = 0x234f;
    }
LAB_005ca70e:
    pcVar8 = (char *)FUN_006b0140(UVar22,DAT_00807618);
LAB_005ca71b:
    uVar14 = 0xffffffff;
    do {
      pcVar19 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar19;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    puVar13 = (uint *)(pcVar19 + -uVar14);
    puVar21 = auStack_98;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar21 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar21 = puVar21 + 1;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(char *)puVar21 = (char)*puVar13;
      puVar13 = (uint *)((int)puVar13 + 1);
      puVar21 = (uint *)((int)puVar21 + 1);
    }
LAB_005ca73b:
    piVar16 = piStack_8;
    iStack_30 = *piStack_8 + -10;
    iStack_28 = piStack_8[2];
    iStack_2c = piStack_8[1] + -0xb4;
    iStack_24 = piStack_8[3];
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(this_00 + 0x1c67),&iStack_30,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x1c67),
                       (iStack_28 - (int)piStack_c) + -8 + iStack_30,
                       (iStack_24 - iStack_34) / 2 + iStack_2c,'\x06',*(byte **)(this_00 + 0x1e2b));
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_00 + 0x1c67),0,*piVar16 + -10,
                     piVar16[1] + -0xb4,(piVar16[2] - (int)piStack_c) + -8,piVar16[3]);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),auStack_98,-1,-1,iVar6);
    FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1f80));
    if (*(short *)(param_1 + 0x14) == 3) goto LAB_005ca964;
    break;
  case 0x6985:
    piVar16 = *(int **)(param_1 + 0x18);
    FUN_006c7610(*(int *)(this_00 + 0x1c67),0,*piVar16 + -10,piVar16[1] + -0xb4,piVar16[2],
                 piVar16[3],piVar16[3] / 2,0x67);
    FUN_006c7570(*(int *)(this_00 + 0x1c67),0,*piVar16 + -8,piVar16[1] + -0xb2,
                 (undefined4 *)(piVar16[2] + -4),piVar16[3] + -4,piVar16[3] / 2 + -2,
                 (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23);
    FUN_006c7570(*(int *)(this_00 + 0x1c67),0,*piVar16 + -10,piVar16[1] + -0xb4,
                 (undefined4 *)piVar16[2],piVar16[3],piVar16[3] / 2,
                 (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x30),*(int *)(this_00 + 0x1c67),0,*piVar16 + -10,
                     piVar16[1] + -0xb4,piVar16[2],piVar16[3]);
    iVar6 = (*(short *)(param_1 + 0x14) != 1) + 5;
    iVar23 = -1;
    iVar11 = -1;
    puVar13 = (uint *)FUN_006b0140(0x234a,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x30),puVar13,iVar11,iVar23,iVar6);
    if (*(short *)(param_1 + 0x14) != 3) break;
LAB_005ca964:
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
switchD_005c8bd0_caseD_6120:
  uVar14 = *(uint *)(param_1 + 0x10);
  if ((uVar14 < 0x657f) || (0x658c < uVar14)) goto LAB_005cae3e;
  piVar16 = *(int **)(param_1 + 0x18);
  iStack_14 = piVar16[2];
  iStack_10 = piVar16[3];
  iStack_1c = *piVar16 + -0x112;
  iStack_18 = piVar16[1] + -0x149;
  MMObjTy::PaintButDib
            ((MMObjTy *)this_00,*(int *)(this_00 + 0x1e1e),&iStack_1c,2,
             (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
  switch(uVar14) {
  case 0x657f:
    SVar1 = this_00[0x1e26];
    if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
       (piVar16 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
      piVar16 = DAT_0080c506;
    }
    if (*(uint *)(this_00 + 0x1c5f) < (uint)piVar16[3]) {
      if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
         (piVar16 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
        piVar16 = DAT_0080c506;
      }
      if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
         (piVar7 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
        piVar7 = DAT_0080c506;
      }
      pcVar8 = (char *)(piVar7[2] * *(uint *)(this_00 + 0x1c5f) + piVar16[7]);
    }
    else {
      pcVar8 = (char *)0x0;
    }
    if (pcVar8 == (char *)0x0) {
      pcVar8 = &DAT_008016a0;
    }
    uVar14 = 0xffffffff;
    do {
      pcVar19 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar19 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar19;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    pcVar8 = pcVar19 + -uVar14;
    pcVar19 = (char *)&DAT_0080f33a;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar19 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar19 = pcVar19 + 1;
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_00 + 0x1e1e),0,iStack_1c,
                     iStack_18,iStack_14,iStack_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),&DAT_0080f33a,-1,-1,iVar6);
    break;
  case 0x6582:
  case 0x6583:
  case 0x6584:
  case 0x6585:
    switch(uVar14) {
    case 0x6582:
      cVar4 = DAT_00808a90._1_1_;
      if (DAT_00808a90._1_1_ == '\0') {
        UStack_20 = 0x234e;
      }
      else {
LAB_005cab38:
        UStack_20 = (-(uint)(cVar4 != '\x01') & 3) + 0x234c;
      }
      break;
    case 0x6583:
      cVar4 = (char)DAT_00808a90;
      if ((char)DAT_00808a90 != '\0') goto LAB_005cab38;
      UStack_20 = 0x234e;
      break;
    case 0x6584:
      cVar4 = DAT_00808a90._2_1_;
      if (DAT_00808a90._2_1_ != '\0') goto LAB_005cab38;
      UStack_20 = 0x234e;
      break;
    case 0x6585:
      cVar4 = DAT_00808a90._3_1_;
      if (DAT_00808a90._3_1_ != '\0') goto LAB_005cab38;
      UStack_20 = 0x234e;
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_00 + 0x1e1e),0,iStack_1c,
                     iStack_18,iStack_14,iStack_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    iVar23 = -1;
    iVar11 = -1;
    puVar13 = (uint *)FUN_006b0140(UStack_20,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar13,iVar11,iVar23,iVar6);
    break;
  case 0x6586:
    if (DAT_00808a97 == -1) {
      pcVar8 = (char *)FUN_006b0140(0x1f55,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar19 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar19 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar19 + -uVar14;
      pcVar19 = (char *)&DAT_0080f33a;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar19 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar19 = pcVar19 + 1;
      }
    }
    else {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,DAT_00808a97);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_00 + 0x1e1e),0,iStack_1c,
                     iStack_18,iStack_14,iStack_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),&DAT_0080f33a,-1,-1,iVar6);
    break;
  case 0x6587:
    if (DAT_00808a9b == 0xff) {
      uVar5 = FUN_006b0140(0x1f59,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007a4ccc,uVar5);
    }
    else {
      iVar6 = DAT_00808a9b + 1;
      uVar5 = FUN_006b0140(0x1f57,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,uVar5,iVar6);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_00 + 0x1e1e),0,iStack_1c,
                     iStack_18,iStack_14,iStack_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),&DAT_0080f33a,-1,-1,iVar6);
    break;
  case 0x6588:
    cVar4 = DAT_00808a95;
    goto LAB_005cad88;
  case 0x6589:
    if (DAT_00808a8f == '\0') break;
LAB_005cadd5:
    pbVar10 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x1f4f),0);
    iVar6 = (iStack_10 + -0x10) / 2 + iStack_18;
    puVar18 = *(undefined4 **)(this_00 + 0x1e1e);
    iVar11 = (iStack_14 + -0x11) / 2 + iStack_1c;
    goto LAB_005cae0f;
  case 0x658a:
    if (DAT_00808a94 != '\0') {
      pbVar10 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x1f4f),0);
      iVar6 = (iStack_10 + -0x10) / 2 + iStack_18;
      iVar11 = (iStack_14 + -0x11) / 2 + iStack_1c;
      puVar18 = *(undefined4 **)(this_00 + 0x1e1e);
      goto LAB_005cae0f;
    }
    break;
  case 0x658b:
    cVar4 = DAT_00808aa9;
LAB_005cad88:
    if (cVar4 != '\0') {
      pbVar10 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x1f4f),0);
      iVar6 = (iStack_10 + -0x10) / 2 + iStack_18;
      iVar11 = (iStack_14 + -0x11) / 2 + iStack_1c;
      puVar18 = *(undefined4 **)(this_00 + 0x1e1e);
LAB_005cae0f:
      thunk_FUN_00540760(puVar18,iVar11,iVar6,'\x06',pbVar10);
    }
    break;
  case 0x658c:
    if (DAT_00808aaa != '\0') goto LAB_005cadd5;
  }
  FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1e22));
  if (*(short *)(param_1 + 0x14) == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
LAB_005cae3e:
  g_currentExceptionFrame = IStack_dc.previous;
  uVar5 = thunk_FUN_005b6430();
  return uVar5;
}


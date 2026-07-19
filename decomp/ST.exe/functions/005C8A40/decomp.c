
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::GetMessage */

undefined4 __thiscall SettMapTy::GetMessage(SettMapTy *this,int param_1)

{
  undefined1 *puVar1;
  ccFntTy *pcVar2;
  code *pcVar3;
  SettMapTy *this_00;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  DWORD DVar10;
  byte *pbVar11;
  int iVar12;
  undefined1 uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  MMsgTy *this_01;
  int *piVar17;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar18;
  char *pcVar19;
  uint *puVar20;
  UINT UVar21;
  int iVar22;
  undefined4 uVar23;
  InternalExceptionFrame local_dc;
  uint local_98 [13];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  SettMapTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  UINT local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_38 = this;
  uVar6 = FUN_006e51b0(this->field_0010);
  this->field_0061 = uVar6;
  local_dc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_dc;
  iVar7 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_38;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_dc.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x758,0,iVar7,
                                &DAT_007a4ccc,s_SettMapTy__GetMessage_007cd23c);
    if (iVar12 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x758);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_38,param_1);
  uVar15 = *(uint *)(param_1 + 0x10);
  if (uVar15 < 0x6549) {
    if (uVar15 == 0x6548) {
      if (this_00->field_0065 == '\x01') {
        DAT_00808a95 = DAT_00808a95 == '\0';
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,this_00->field_2149,(undefined4 *)&this_00->field_0x1d);
      }
      goto cf_switch_join_005CA971;
    }
    if (uVar15 < 0x6333) {
      if (uVar15 == 0x6332) {
        StartSystemTy::PaintBinDesc(DAT_0081176c,param_1);
      }
      else if (uVar15 < 0x610b) {
        if (uVar15 == 0x610a) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = *(undefined4 *)(param_1 + 0x10);
          this_00->field_0051 = 6;
          thunk_FUN_005b66e0(this_00);
        }
        else if (uVar15 < 6) {
          if (uVar15 == 5) {
            PaintSettMap(this_00,'\0');
          }
          else if (uVar15 == 0) {
            (**(code **)(this_00->field_0000 + 0xc))();
          }
          else if (uVar15 == 2) {
            uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18);
            this_00->field_1E27 = uVar6;
            (**(code **)(this_00->field_0000 + 0x10))
                      (CONCAT31((int3)((uint)uVar6 >> 8),
                                *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14)));
          }
          else if (uVar15 == 3) {
            (**(code **)(this_00->field_0000 + 0x14))();
          }
        }
        else if (uVar15 == 0x6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = *(undefined4 *)(param_1 + 0x10);
          this_00->field_0051 = *(undefined4 *)(param_1 + 0x14);
          this_00->field_0055 = *(undefined4 *)(param_1 + 0x18);
          thunk_FUN_005b66e0(this_00);
        }
        else if (uVar15 == 0x6109) goto switchD_005c8bd0_caseD_611f;
      }
      else {
        switch(uVar15) {
        case 0x611f:
switchD_005c8bd0_caseD_611f:
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = *(undefined4 *)(param_1 + 0x10);
          this_00->field_0051 = *(undefined4 *)(param_1 + 0x14);
          this_00->field_0055 = *(undefined4 *)(param_1 + 0x18);
          thunk_FUN_005b66e0(this_00);
          break;
        case 0x6200:
          this_00->field_1F88 = *(undefined4 *)(param_1 + 0x14);
          (**(code **)(this_00->field_0000 + 0x2c))();
          break;
        case 0x6201:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00->field_0x1c6b,param_1,0);
          break;
        case 0x6202:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00->field_0x1cfc,param_1,0);
          break;
        case 0x6203:
          uVar15 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
          this_00->field_1DAD = uVar15;
          if (this_00->field_1D91 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1DD5,this_00->field_1D91,this_00->field_1D95,
                       this_00->field_1DA9,uVar15);
          }
        }
      }
      goto cf_switch_join_005CA971;
    }
    if (uVar15 < 0x6504) {
      if (uVar15 == 0x6503) {
        iVar7 = this_00->field_1E2F;
        if ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar7 + 0xc)) {
          iVar7 = *(int *)(iVar7 + 8) * (uint)*(ushort *)(param_1 + 0x14) + *(int *)(iVar7 + 0x1c);
        }
        else {
          iVar7 = 0;
        }
        cVar5 = *(char *)(iVar7 + 0x104);
        local_c = (int *)CONCAT31(local_c._1_3_,cVar5);
        if (cVar5 != -1) {
          switch(cVar5) {
          case '\0':
            uVar13 = 0xfc;
            break;
          case '\x01':
            uVar13 = 0xfa;
            break;
          case '\x02':
            uVar13 = 0xfb;
            break;
          case '\x03':
            uVar13 = 0xf9;
            break;
          case '\x04':
            uVar13 = 0xfd;
            break;
          case '\x05':
            uVar13 = 0xfe;
            break;
          case '\x06':
            uVar13 = 0xf3;
            break;
          case '\a':
            uVar13 = 7;
            break;
          default:
            uVar13 = 0xff;
          }
          iVar7 = *(int *)(param_1 + 0x18);
          FUN_006b4170(iVar7,0,2,2,*(int *)(iVar7 + 4) + -4,*(int *)(iVar7 + 8) + -4,uVar13);
        }
        if (*(short *)(param_1 + 0x16) == 1) {
          iVar7 = *(int *)(param_1 + 0x18);
          FUN_006b5ee0(iVar7,0,0,0,*(int *)(iVar7 + 4),*(int *)(iVar7 + 8),0xf,0xd);
        }
      }
      else if (uVar15 < 0x6336) {
        if (uVar15 == 0x6335) {
          DAT_0081176c->field_04CF =
               *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
          if (DAT_0081176c->field_04B3 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)DAT_0081176c->field_04F7,DAT_0081176c->field_04B3,
                       DAT_0081176c->field_04B7,DAT_0081176c->field_04CB,DAT_0081176c->field_04CF);
          }
        }
        else if (uVar15 == 0x6333) {
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&DAT_0081176c->field_038D,param_1,0);
        }
        else if (uVar15 == 0x6334) {
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&DAT_0081176c->field_041E,param_1,0);
        }
      }
      else if (uVar15 == 0x64ff) {
        switch(*(undefined4 *)(param_1 + 0x18)) {
        case 0:
          uVar15 = *(uint *)(param_1 + 0x14);
          if (uVar15 != 0xffffffff) {
            this_00->field_1F57 = (char)uVar15;
            if ((uVar15 & 0xff) == 0) {
              if (3 < (byte)this_00->field_1F5C) {
                this_00->field_1F5C = 3;
                this_00->field_002D = 5;
                FUN_006e6080(this_00,2,this_00->field_1F64,(undefined4 *)&this_00->field_0x1d);
                FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
              }
            }
            else if (((uVar15 & 0xff) == 1) && (5 < (byte)this_00->field_1F5C)) {
              this_00->field_1F5C = 4;
              this_00->field_002D = 5;
              FUN_006e6080(this_00,2,this_00->field_1F64,(undefined4 *)&this_00->field_0x1d);
              FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
            }
cf_common_join_005C8ECC:
            this_00->field_1F47 = 0;
          }
          break;
        case 1:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00->field_1F5C = (char)*(int *)(param_1 + 0x14) + '\x02';
            goto cf_common_join_005C8ECC;
          }
          break;
        case 2:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00->field_1F58 = *(int *)(param_1 + 0x14);
            goto cf_common_join_005C8ECC;
          }
          break;
        case 3:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00->field_1F5F = (char)*(int *)(param_1 + 0x14);
            goto cf_common_join_005C8ECC;
          }
          break;
        case 4:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00->field_1F5D = (char)*(int *)(param_1 + 0x14);
            goto cf_common_join_005C8ECC;
          }
          break;
        case 5:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00->field_1F5E = (char)*(int *)(param_1 + 0x14);
            goto cf_common_join_005C8ECC;
          }
        }
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,(&this_00->field_1F60)[*(int *)(param_1 + 0x18)],
                     (undefined4 *)&this_00->field_0x1d);
        FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
      }
      else if (uVar15 == 0x6500) {
        ccFntTy::SetSurf(DAT_0081176c->field_0034,*(int *)(param_1 + 0x18),0,0,0,0,0);
        iVar7 = this_00->field_1E2F;
        if ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar7 + 0xc)) {
          puVar14 = (uint *)(*(int *)(iVar7 + 8) * (uint)*(ushort *)(param_1 + 0x14) +
                            *(int *)(iVar7 + 0x1c));
        }
        else {
          puVar14 = (uint *)0x0;
        }
        ccFntTy::WrStr(DAT_0081176c->field_0034,puVar14,-1,-1,
                       3 - (uint)(*(short *)(param_1 + 0x16) != 1));
        if (*(short *)(param_1 + 0x16) == 1) {
          iVar7 = *(int *)(param_1 + 0x18);
          FUN_006b5ee0(iVar7,0,0,0,*(int *)(iVar7 + 4),*(int *)(iVar7 + 8),0xf,0xd);
        }
      }
      goto cf_switch_join_005CA971;
    }
    switch(uVar15) {
    case 0x6506:
      iVar7 = this_00->field_1E2F;
      uVar15 = *(uint *)(param_1 + 0x14);
      if (uVar15 < *(uint *)(iVar7 + 0xc)) {
        switch(*(undefined4 *)(param_1 + 0x18)) {
        case 0:
          cVar5 = this_00->field_1E26;
          if (((cVar5 == '\x06') || (cVar5 == '\x01')) || (piVar17 = DAT_0080c502, cVar5 == '\x02'))
          {
            piVar17 = DAT_0080c506;
          }
          if (uVar15 < (uint)piVar17[3]) {
            if (((cVar5 == '\x06') || (cVar5 == '\x01')) ||
               (piVar17 = DAT_0080c502, cVar5 == '\x02')) {
              piVar17 = DAT_0080c506;
            }
            if (((cVar5 == '\x06') || (cVar5 == '\x01')) || (piVar8 = DAT_0080c502, cVar5 == '\x02')
               ) {
              piVar8 = DAT_0080c506;
            }
            iVar7 = piVar8[2] * uVar15 + piVar17[7];
          }
          else {
            iVar7 = 0;
          }
          if (iVar7 == 0) {
            this_00->field_1C5F = 0;
            DAT_0080995c = 1;
            puVar18 = &DAT_00809960;
            for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            StartSystemTy::SetObjectives
                      (DAT_0081176c,this_00->field_1F43,(char *)0x0,this_00->field_1C63);
          }
          else {
            this_00->field_1C5F = uVar15;
            DAT_0080995c = *(undefined4 *)(iVar7 + 0x90);
            uVar15 = 0xffffffff;
            pcVar9 = (char *)(iVar7 + 0x4c);
            do {
              pcVar19 = pcVar9;
              if (uVar15 == 0) break;
              uVar15 = uVar15 - 1;
              pcVar19 = pcVar9 + 1;
              cVar5 = *pcVar9;
              pcVar9 = pcVar19;
            } while (cVar5 != '\0');
            uVar15 = ~uVar15;
            pcVar9 = pcVar19 + -uVar15;
            pcVar19 = (char *)&DAT_00809960;
            for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar19 = pcVar19 + 4;
            }
            for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *pcVar19 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar19 = pcVar19 + 1;
            }
            StartSystemTy::SetObjectives
                      (DAT_0081176c,this_00->field_1F43,(char *)(iVar7 + 0x70),this_00->field_1C63);
          }
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2125,(undefined4 *)&this_00->field_0x1d);
          if ((DAT_008067a0 != '\0') && (DAT_00811764 != 0)) {
            FUN_006b6160(&this_00->field_0x1a5f,DAT_00811764 + 0x18);
            this_00->field_1A7F = 1;
            this_00->field_1A80 = DAT_008087c4._2_1_;
            this_00->field_1A81 = (char)(DAT_008087c2 >> 1);
            wsprintfA((LPSTR)&local_64,&DAT_007cc584,DAT_0080995c);
            this_00->field_1A82 = local_64;
            this_00->field_1A86 = local_60;
            Library::MSVCRT::_strncpy(&this_00->field_0x1a8a,(char *)&DAT_0080c3c3,0x1d5);
            this_00->field_1C5E = 0;
          }
          (**(code **)(this_00->field_0000 + 0x2c))();
          break;
        case 3:
          DAT_00808a90._0_2_ =
               CONCAT11(*(undefined1 *)
                         (*(int *)(iVar7 + 8) * uVar15 + 0x104 + *(int *)(iVar7 + 0x1c)),
                        (char)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2131,(undefined4 *)&this_00->field_0x1d);
          break;
        case 4:
          DAT_00808a90 = CONCAT31(DAT_00808a90._1_3_,
                                  *(undefined1 *)
                                   (*(int *)(iVar7 + 8) * uVar15 + 0x104 + *(int *)(iVar7 + 0x1c)));
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2135,(undefined4 *)&this_00->field_0x1d);
          break;
        case 5:
          DAT_00808a90._0_3_ =
               CONCAT12(*(undefined1 *)
                         (*(int *)(iVar7 + 8) * uVar15 + 0x104 + *(int *)(iVar7 + 0x1c)),
                        (undefined2)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2139,(undefined4 *)&this_00->field_0x1d);
          bVar4 = DAT_00808a90._2_1_;
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            DAT_00808a90 = CONCAT13(bVar4,(undefined3)DAT_00808a90);
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_213D,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        case 6:
          DAT_00808a90 = CONCAT13(*(undefined1 *)
                                   (*(int *)(iVar7 + 8) * uVar15 + 0x104 + *(int *)(iVar7 + 0x1c)),
                                  (undefined3)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_213D,(undefined4 *)&this_00->field_0x1d);
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            DAT_00808a90._0_3_ = CONCAT12(DAT_00808a90._3_1_,(undefined2)DAT_00808a90);
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_2139,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        case 7:
          DAT_00808a97 = *(int *)(*(int *)(iVar7 + 8) * uVar15 + 0x104 + *(int *)(iVar7 + 0x1c));
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2141,(undefined4 *)&this_00->field_0x1d);
          break;
        case 8:
          DAT_00808a9b = *(byte *)(*(int *)(iVar7 + 8) * uVar15 + 0x104 + *(int *)(iVar7 + 0x1c));
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2145,(undefined4 *)&this_00->field_0x1d);
        }
      }
      break;
    case 0x653f:
      if (this_00->field_0065 == '\x01') {
        cVar5 = this_00->field_1E26;
        if (((cVar5 == '\x06') || (cVar5 == '\x01')) || (piVar17 = DAT_0080c502, cVar5 == '\x02')) {
          piVar17 = DAT_0080c506;
        }
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 0;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        local_8 = (int *)0x0;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        local_c = piVar17;
        if (piVar17[3] != 0) {
          do {
            pcVar9 = (char *)(piVar17[2] * (int)local_8 + piVar17[7]);
            if (pcVar9 != (char *)0x0) {
              this_00->field_1F37 = local_8;
              uVar15 = 0xffffffff;
              do {
                pcVar19 = pcVar9;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1;
                pcVar19 = pcVar9 + 1;
                cVar5 = *pcVar9;
                pcVar9 = pcVar19;
              } while (cVar5 != '\0');
              uVar15 = ~uVar15;
              pcVar9 = pcVar19 + -uVar15;
              pcVar19 = &this_00->field_0x1e33;
              for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar19 = pcVar19 + 4;
              }
              for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                *pcVar19 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar19 = pcVar19 + 1;
              }
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
              piVar17 = local_c;
            }
            local_8 = (int *)((int)local_8 + 1);
          } while (local_8 < (int *)piVar17[3]);
        }
        this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
        this_00->field_21A1 = this_00->field_1C5F;
        this_00->field_21C5 = 0x1c5;
        this_00->field_21CD = 0x154;
        this_00->field_21C9 = 0x14e;
        goto LAB_005c9fef;
      }
      break;
    case 0x6542:
    case 0x6543:
    case 0x6544:
    case 0x6545:
      if (this_00->field_0065 != '\x01') break;
      this_00->field_2171 = 0x6506;
      this_00->field_2179 = *(int *)(param_1 + 0x10) + -0x653f;
      this_00->field_2191 = 0x6500;
      *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
      pcVar9 = (char *)FUN_006b0140(0x234e,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = &this_00->field_0x1e33;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar9 = (char *)FUN_006b0140(0x234c,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = &this_00->field_0x1e33;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar9 = (char *)FUN_006b0140(0x234f,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = &this_00->field_0x1e33;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
      this_00->field_1F37 = 2;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
      switch(this_00->field_2179) {
      case 3:
        bVar4 = DAT_00808a90._1_1_;
        goto LAB_005c95d4;
      case 4:
        this_00->field_21A1 = DAT_00808a90 & 0xff;
        break;
      case 5:
        this_00->field_21A1 = DAT_00808a90 >> 0x10 & 0xff;
        break;
      case 6:
        bVar4 = DAT_00808a90._3_1_;
LAB_005c95d4:
        this_00->field_21A1 = (uint)bVar4;
      }
      switch(this_00->field_2179) {
      case 3:
      case 5:
        this_00->field_21C5 = 0x1c5;
        break;
      case 4:
      case 6:
        this_00->field_21C5 = 0x2bf;
      }
      this_00->field_21CD = 0x5a;
      switch(this_00->field_2179) {
      case 3:
      case 4:
        this_00->field_21C9 = 0x164;
        break;
      case 5:
      case 6:
        this_00->field_21C9 = 0x17a;
      }
      pcVar2 = DAT_0081176c->field_0034;
      iVar7 = pcVar2->field_00A0;
joined_r0x005c964b:
      if (iVar7 != 0) {
        FUN_00710790((int)pcVar2);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar2->field_0x8a;
      (**(code **)(*(int *)this_00->field_000C + 8))(0x100ef,0,0,&this_00->field_0x2161,0);
      break;
    case 0x6546:
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 7;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        puVar1 = &this_00->field_0x1e33;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        this_00->field_1F37 = 100;
        wsprintfA(puVar1,&DAT_007c1890,100);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_1E2F,(undefined4 *)puVar1);
        this_00->field_1F37 = 0x96;
        wsprintfA(puVar1,&DAT_007c1890,0x96);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_1E2F,(undefined4 *)puVar1);
        this_00->field_1F37 = 200;
        wsprintfA(puVar1,&DAT_007c1890,200);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_1E2F,(undefined4 *)puVar1);
        this_00->field_1F37 = 0xffffffff;
        pcVar9 = (char *)FUN_006b0140(0x1f55,DAT_00807618);
        uVar15 = 0xffffffff;
        do {
          pcVar19 = pcVar9;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar19 = pcVar9 + 1;
          cVar5 = *pcVar9;
          pcVar9 = pcVar19;
        } while (cVar5 != '\0');
        uVar15 = ~uVar15;
        pcVar9 = pcVar19 + -uVar15;
        pcVar19 = &this_00->field_0x1e33;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar19 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar19 = pcVar19 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
        if (DAT_00808a97 == 0x96) {
          this_00->field_21A1 = 1;
        }
        else if (DAT_00808a97 == 200) {
          this_00->field_21A1 = 2;
        }
        else if (DAT_00808a97 == -1) {
          this_00->field_21A1 = 3;
        }
        this_00->field_21C5 = 0x1c5;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar2 = DAT_0081176c->field_0034;
        if (pcVar2->field_00A0 != 0) {
          FUN_00710790((int)pcVar2);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar2->field_0x8a;
        (**(code **)(*(int *)this_00->field_000C + 8))(0x100ef,0,0,&this_00->field_0x2161,0);
      }
      break;
    case 0x6547:
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 8;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        uVar23 = 1;
        puVar1 = &this_00->field_0x1e33;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        this_00->field_1F37 = 0;
        uVar6 = FUN_006b0140(0x1f57,DAT_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,uVar6,uVar23);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_1E2F,(undefined4 *)puVar1);
        this_00->field_1F37 = 1;
        uVar23 = 2;
        uVar6 = FUN_006b0140(0x1f57,DAT_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,uVar6,uVar23);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_1E2F,(undefined4 *)puVar1);
        this_00->field_1F37 = 2;
        uVar23 = 3;
        uVar6 = FUN_006b0140(0x1f57,DAT_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,uVar6,uVar23);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_1E2F,(undefined4 *)puVar1);
        this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
        this_00->field_21A1 = (uint)DAT_00808a9b;
        this_00->field_21C5 = 0x2bf;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar2 = DAT_0081176c->field_0034;
        iVar7 = pcVar2->field_00A0;
        goto joined_r0x005c996c;
      }
    }
    goto cf_switch_join_005CA971;
  }
  if (uVar15 < 0x6900) {
    if (uVar15 == 0x68ff) {
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x64ff;
        this_00->field_2179 = *(int *)(param_1 + 0x10) + -0x68ff;
        this_00->field_2191 = 0x6500;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        pcVar9 = (char *)FUN_006b0140(0x234b,DAT_00807618);
        uVar15 = 0xffffffff;
        do {
          pcVar19 = pcVar9;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar19 = pcVar9 + 1;
          cVar5 = *pcVar9;
          pcVar9 = pcVar19;
        } while (cVar5 != '\0');
        uVar15 = ~uVar15;
        pcVar9 = pcVar19 + -uVar15;
        pcVar19 = &this_00->field_0x1e33;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar19 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar19 = pcVar19 + 1;
        }
        this_00->field_1F37 = 0;
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        pcVar9 = (char *)FUN_006b0140(0x234c,DAT_00807618);
        uVar15 = 0xffffffff;
        do {
          pcVar19 = pcVar9;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar19 = pcVar9 + 1;
          cVar5 = *pcVar9;
          pcVar9 = pcVar19;
        } while (cVar5 != '\0');
        uVar15 = ~uVar15;
        pcVar9 = pcVar19 + -uVar15;
        pcVar19 = &this_00->field_0x1e33;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar19 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar19 = pcVar19 + 1;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
          pcVar9 = (char *)FUN_006b0140(0x234d,DAT_00807618);
          uVar15 = 0xffffffff;
          do {
            pcVar19 = pcVar9;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar19 = pcVar9 + 1;
            cVar5 = *pcVar9;
            pcVar9 = pcVar19;
          } while (cVar5 != '\0');
          uVar15 = ~uVar15;
          pcVar9 = pcVar19 + -uVar15;
          pcVar19 = &this_00->field_0x1e33;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar19 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar19 = pcVar19 + 1;
          }
          this_00->field_1F37 = 2;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        }
        this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
        this_00->field_21A1 = (uint)(byte)this_00->field_1F57;
        this_00->field_21C5 = 0x1a;
        this_00->field_21CD = 0xe0;
        this_00->field_21C9 = 0xba;
        goto LAB_005c9c8a;
      }
    }
    else {
      switch(uVar15) {
      case 0x6549:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a8f = DAT_00808a8f == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_214D,(undefined4 *)&this_00->field_0x1d);
          (**(code **)(this_00->field_0000 + 0x2c))();
        }
        break;
      case 0x654a:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a94 = DAT_00808a94 == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2151,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x654b:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aa9 = DAT_00808aa9 == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2155,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x654c:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aaa = DAT_00808aaa == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2159,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x654d:
        if (this_00->field_0065 == '\x01') {
          DAT_0080734b = DAT_0080734b == '\0';
          DAT_00808aa8 = DAT_0080734b;
          PaintSC(this_00);
        }
      }
    }
    goto cf_switch_join_005CA971;
  }
  switch(uVar15) {
  case 0x6900:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)(param_1 + 0x10) + -0x68ff;
      this_00->field_2191 = 0x6500;
      local_8 = (int *)0x3;
      if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
        if (this_00->field_1F57 == '\0') {
          local_8 = (int *)0x2;
        }
        else if (this_00->field_1F57 == '\x01') {
          local_8 = (int *)0x4;
        }
        else {
          local_8 = (int *)0x7;
        }
      }
      *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
      if (local_8 != (int *)0x0) {
        iVar7 = 2;
        do {
          uVar6 = FUN_006b0140(0x2354,DAT_00807618);
          wsprintfA(&this_00->field_0x1e33,s__d__s_007c2864,iVar7,uVar6);
          this_00->field_1F37 = iVar7;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
          iVar12 = iVar7 + -1;
          iVar7 = iVar7 + 1;
        } while (iVar12 < (int)local_8);
      }
      this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
      this_00->field_21A1 = (byte)this_00->field_1F5C - 2;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0xe2;
LAB_005c9fef:
      pcVar2 = DAT_0081176c->field_0034;
      iVar7 = pcVar2->field_00A0;
joined_r0x005c996c:
      if (iVar7 != 0) {
        FUN_00710790((int)pcVar2);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar2->field_0x8a;
      (**(code **)(*(int *)this_00->field_000C + 8))(0x100ef,0,0,&this_00->field_0x2161,0);
    }
    break;
  case 0x6901:
    if (this_00->field_0065 == '\x01') {
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        local_c = (int *)0x1;
      }
      else {
        local_c = *(int **)(this_00->field_1F7C + 0xc);
      }
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)(param_1 + 0x10) + -0x68ff;
      this_00->field_2191 = 0x6500;
      local_8 = (int *)0x0;
      *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
      if (local_c != (int *)0x0) {
        do {
          iVar7 = this_00->field_1F7C;
          if (local_8 < *(int **)(iVar7 + 0xc)) {
            iVar7 = *(int *)(iVar7 + 8) * (int)local_8 + *(int *)(iVar7 + 0x1c);
          }
          else {
            iVar7 = 0;
          }
          uVar15 = 0xffffffff;
          pcVar9 = (char *)(iVar7 + 0x104);
          do {
            pcVar19 = pcVar9;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar19 = pcVar9 + 1;
            cVar5 = *pcVar9;
            pcVar9 = pcVar19;
          } while (cVar5 != '\0');
          uVar15 = ~uVar15;
          pcVar9 = pcVar19 + -uVar15;
          pcVar19 = &this_00->field_0x1e33;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar19 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar19 = pcVar19 + 1;
          }
          this_00->field_1F37 = local_8;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
          local_8 = (int *)((int)local_8 + 1);
        } while (local_8 < local_c);
      }
      this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
      this_00->field_21A1 = this_00->field_1F58;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0x10a;
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        this_00->field_21C9 = 0x118;
      }
      pcVar2 = DAT_0081176c->field_0034;
      if (pcVar2->field_00A0 != 0) {
        FUN_00710790((int)pcVar2);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar2->field_0x8a;
      (**(code **)(*(int *)this_00->field_000C + 8))(0x100ef,0,0,&this_00->field_0x2161,0);
    }
    break;
  case 0x6902:
    if (this_00->field_0065 != '\x01') break;
    this_00->field_2171 = 0x64ff;
    this_00->field_2179 = *(int *)(param_1 + 0x10) + -0x68ff;
    this_00->field_2191 = 0x6500;
    *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
    pcVar9 = (char *)FUN_006b0140(0x2355,DAT_00807618);
    uVar15 = 0xffffffff;
    do {
      pcVar19 = pcVar9;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar19 = pcVar9 + 1;
      cVar5 = *pcVar9;
      pcVar9 = pcVar19;
    } while (cVar5 != '\0');
    uVar15 = ~uVar15;
    pcVar9 = pcVar19 + -uVar15;
    pcVar19 = &this_00->field_0x1e33;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar19 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar19 = pcVar19 + 1;
    }
    this_00->field_1F37 = 0;
    Library::DKW::TBL::FUN_006ae1c0
              ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
    pcVar9 = (char *)FUN_006b0140(0x234c,DAT_00807618);
    uVar15 = 0xffffffff;
    do {
      pcVar19 = pcVar9;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar19 = pcVar9 + 1;
      cVar5 = *pcVar9;
      pcVar9 = pcVar19;
    } while (cVar5 != '\0');
    uVar15 = ~uVar15;
    pcVar9 = pcVar19 + -uVar15;
    pcVar19 = &this_00->field_0x1e33;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar19 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar19 = pcVar19 + 1;
    }
    this_00->field_1F37 = 1;
    Library::DKW::TBL::FUN_006ae1c0
              ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
    pcVar9 = (char *)FUN_006b0140(0x2356,DAT_00807618);
    uVar15 = 0xffffffff;
    do {
      pcVar19 = pcVar9;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar19 = pcVar9 + 1;
      cVar5 = *pcVar9;
      pcVar9 = pcVar19;
    } while (cVar5 != '\0');
    uVar15 = ~uVar15;
    pcVar9 = pcVar19 + -uVar15;
    pcVar19 = &this_00->field_0x1e33;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar19 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar19 = pcVar19 + 1;
    }
    this_00->field_1F37 = 2;
    Library::DKW::TBL::FUN_006ae1c0
              ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
    this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
    this_00->field_21A1 = (uint)(byte)this_00->field_1F5F;
    this_00->field_21C5 = 0x1a;
    this_00->field_21CD = 0xe0;
    this_00->field_21C9 = 0x132;
LAB_005c9c8a:
    pcVar2 = DAT_0081176c->field_0034;
    iVar7 = pcVar2->field_00A0;
    goto joined_r0x005c964b;
  case 0x6903:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)(param_1 + 0x10) + -0x68ff;
      this_00->field_2191 = 0x6500;
      *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
      pcVar9 = (char *)FUN_006b0140(0x234e,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = &this_00->field_0x1e33;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar9 = (char *)FUN_006b0140(0x234c,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = &this_00->field_0x1e33;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar9 = (char *)FUN_006b0140(0x234f,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = &this_00->field_0x1e33;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
      this_00->field_1F37 = 2;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
      this_00->field_21A1 = (uint)(byte)this_00->field_1F5D;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0x15a;
      goto LAB_005c9c8a;
    }
    break;
  case 0x6904:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)(param_1 + 0x10) + -0x68ff;
      this_00->field_2191 = 0x6500;
      *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
      pcVar9 = (char *)FUN_006b0140(0x234e,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = &this_00->field_0x1e33;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar9 = (char *)FUN_006b0140(0x234c,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = &this_00->field_0x1e33;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar9 = (char *)FUN_006b0140(0x234f,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = &this_00->field_0x1e33;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
      this_00->field_1F37 = 2;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
      this_00->field_21A1 = (uint)(byte)this_00->field_1F5E;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0x182;
      goto LAB_005c9c8a;
    }
    break;
  case 0x6905:
    if (this_00->field_0065 == '\x01') {
      DVar10 = timeGetTime();
      this_00->field_1F53 = DVar10;
      thunk_FUN_005c7800();
    }
    break;
  case 0x693f:
    (**(code **)(this_00->field_0000 + 0x20))();
    break;
  case 0x6940:
    (**(code **)(this_00->field_0000 + 0x24))();
    break;
  case 0x6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = 0;
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    *(undefined4 *)&this_00->field_0x21e1 = 0x1010101;
    *(undefined2 *)&this_00->field_0x21e5 = 0x101;
    this_00->field_21E7 = 1;
    (**(code **)(this_00->field_0000 + 8))();
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
    goto LAB_005c9e75;
  case 0x6947:
    thunk_FUN_005b6350(this_00,0x611f,this_00->field_1E27,(uint)(byte)this_00->field_1E26);
    (**(code **)(this_00->field_0000 + 8))();
    if (*(int *)(this_00->field_1A5B + 0x2e6) != 0) {
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      thunk_FUN_005b8f40(*(void **)(this_00->field_1A5B + 0x2e6),&local_58);
    }
    break;
  case 0x6948:
    DAT_008087a0 = this_00->field_1E26;
    switch(this_00->field_1E26) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xb:
      DAT_00808783 = 2;
      break;
    case 4:
    case 5:
    case 7:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      DAT_00808783 = 3;
    }
    this_00->field_0049 = 1;
    this_00->field_004D = 0x60ff;
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x694d:
    thunk_FUN_005b6350(this_00,0x6105,1,0);
    *(undefined4 *)&this_00->field_0x21e1 = 0x1010101;
    *(undefined2 *)&this_00->field_0x21e5 = 0x101;
    this_00->field_21E7 = 1;
    this_00->field_21E7 = 0;
    goto LAB_005c9e62;
  case 0x694f:
    thunk_FUN_005b6350(this_00,0x6109,1,(uint)(this_00->field_1E26 == '\x0e'));
    this_00->field_0x21e6 = 0;
    this_00->field_0x21e4 = 0;
    (**(code **)(this_00->field_0000 + 8))();
    if (*(int *)(this_00->field_1A5B + 0x2e6) != 0) {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      thunk_FUN_005b8f40(*(void **)(this_00->field_1A5B + 0x2e6),&local_48);
    }
    break;
  case 0x6951:
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    *(undefined4 *)&this_00->field_0x21e1 = 0x1010101;
    *(undefined2 *)&this_00->field_0x21e5 = 0x101;
    this_00->field_21E7 = 1;
LAB_005c9e62:
    (**(code **)(this_00->field_0000 + 8))();
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
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
    local_8 = *(int **)(param_1 + 0x18);
    local_c = *(int **)(this_00->field_1E2B + 4);
    local_34 = *(int *)(this_00->field_1E2B + 8);
    switch(uVar15) {
    case 0x697f:
      if (this_00->field_1F57 == '\0') {
        UVar21 = 0x234b;
        goto LAB_005ca70e;
      }
      if (this_00->field_1F57 != '\x01') {
        UVar21 = 0x234d;
        goto LAB_005ca70e;
      }
      goto LAB_005ca619;
    case 0x6980:
      uVar6 = FUN_006b0140(0x2354,DAT_00807618);
      wsprintfA((LPSTR)local_98,s__d__s_007c2864,(uint)(byte)this_00->field_1F5C,uVar6);
      goto LAB_005ca73b;
    case 0x6981:
      iVar7 = this_00->field_1F7C;
      if ((uint)this_00->field_1F58 < *(uint *)(iVar7 + 0xc)) {
        pcVar9 = (char *)(*(int *)(iVar7 + 8) * this_00->field_1F58 + *(int *)(iVar7 + 0x1c) + 0x104
                         );
      }
      else {
        pcVar9 = (char *)0x104;
      }
      goto LAB_005ca71b;
    case 0x6982:
      if (this_00->field_1F5F == '\0') {
        UVar21 = 0x2355;
      }
      else {
        if (this_00->field_1F5F == '\x01') goto LAB_005ca619;
        UVar21 = 0x2356;
      }
      goto LAB_005ca70e;
    case 0x6983:
      cVar5 = this_00->field_1F5D;
      break;
    default:
      cVar5 = this_00->field_1F5E;
    }
    if (cVar5 == '\0') {
      UVar21 = 0x234e;
    }
    else if (cVar5 == '\x01') {
LAB_005ca619:
      UVar21 = 0x234c;
    }
    else {
      UVar21 = 0x234f;
    }
LAB_005ca70e:
    pcVar9 = (char *)FUN_006b0140(UVar21,DAT_00807618);
LAB_005ca71b:
    uVar15 = 0xffffffff;
    do {
      pcVar19 = pcVar9;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar19 = pcVar9 + 1;
      cVar5 = *pcVar9;
      pcVar9 = pcVar19;
    } while (cVar5 != '\0');
    uVar15 = ~uVar15;
    puVar14 = (uint *)(pcVar19 + -uVar15);
    puVar20 = local_98;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar20 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar20 = puVar20 + 1;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(char *)puVar20 = (char)*puVar14;
      puVar14 = (uint *)((int)puVar14 + 1);
      puVar20 = (uint *)((int)puVar20 + 1);
    }
LAB_005ca73b:
    piVar17 = local_8;
    local_30 = *local_8 + -10;
    local_28 = local_8[2];
    local_2c = local_8[1] + -0xb4;
    local_24 = local_8[3];
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_1C67,&local_30,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    DibPut((undefined4 *)this_00->field_1C67,(local_28 - (int)local_c) + -8 + local_30,
           (local_24 - local_34) / 2 + local_2c,'\x06',(byte *)this_00->field_1E2B);
    ccFntTy::SetSurf(DAT_0081176c->field_0034,this_00->field_1C67,0,*piVar17 + -10,
                     piVar17[1] + -0xb4,(piVar17[2] - (int)local_c) + -8,piVar17[3]);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar7 = 2;
    }
    else {
      iVar7 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr(DAT_0081176c->field_0034,local_98,-1,-1,iVar7);
    FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
    if (*(short *)(param_1 + 0x14) == 3) goto LAB_005ca964;
    break;
  case 0x6985:
    piVar17 = *(int **)(param_1 + 0x18);
    FUN_006c7610(this_00->field_1C67,0,*piVar17 + -10,piVar17[1] + -0xb4,piVar17[2],piVar17[3],
                 piVar17[3] / 2,0x67);
    FUN_006c7570(this_00->field_1C67,0,*piVar17 + -8,piVar17[1] + -0xb2,
                 (undefined4 *)(piVar17[2] + -4),piVar17[3] + -4,piVar17[3] / 2 + -2,
                 (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23);
    FUN_006c7570(this_00->field_1C67,0,*piVar17 + -10,piVar17[1] + -0xb4,(undefined4 *)piVar17[2],
                 piVar17[3],piVar17[3] / 2,(-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23);
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0030,this_00->field_1C67,0,*piVar17 + -10,
                     piVar17[1] + -0xb4,piVar17[2],piVar17[3]);
    iVar7 = (*(short *)(param_1 + 0x14) != 1) + 5;
    iVar22 = -1;
    iVar12 = -1;
    puVar14 = (uint *)FUN_006b0140(0x234a,DAT_00807618);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0030,puVar14,iVar12,iVar22,iVar7);
    if (*(short *)(param_1 + 0x14) != 3) break;
LAB_005ca964:
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
cf_switch_join_005CA971:
  uVar15 = *(uint *)(param_1 + 0x10);
  if ((uVar15 < 0x657f) || (0x658c < uVar15)) goto LAB_005cae3e;
  piVar17 = *(int **)(param_1 + 0x18);
  local_14 = piVar17[2];
  local_10 = piVar17[3];
  local_1c = *piVar17 + -0x112;
  local_18 = piVar17[1] + -0x149;
  MMObjTy::PaintButDib
            ((MMObjTy *)this_00,this_00->field_1E1E,&local_1c,2,
             (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
  switch(uVar15) {
  case 0x657f:
    cVar5 = this_00->field_1E26;
    if (((cVar5 == '\x06') || (cVar5 == '\x01')) || (piVar17 = DAT_0080c502, cVar5 == '\x02')) {
      piVar17 = DAT_0080c506;
    }
    if ((uint)this_00->field_1C5F < (uint)piVar17[3]) {
      if (((cVar5 == '\x06') || (cVar5 == '\x01')) || (piVar17 = DAT_0080c502, cVar5 == '\x02')) {
        piVar17 = DAT_0080c506;
      }
      if (((cVar5 == '\x06') || (cVar5 == '\x01')) || (piVar8 = DAT_0080c502, cVar5 == '\x02')) {
        piVar8 = DAT_0080c506;
      }
      pcVar9 = (char *)(piVar8[2] * this_00->field_1C5F + piVar17[7]);
    }
    else {
      pcVar9 = (char *)0x0;
    }
    if (pcVar9 == (char *)0x0) {
      pcVar9 = &DAT_008016a0;
    }
    uVar15 = 0xffffffff;
    do {
      pcVar19 = pcVar9;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar19 = pcVar9 + 1;
      cVar5 = *pcVar9;
      pcVar9 = pcVar19;
    } while (cVar5 != '\0');
    uVar15 = ~uVar15;
    pcVar9 = pcVar19 + -uVar15;
    pcVar19 = (char *)&DAT_0080f33a;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar19 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar19 = pcVar19 + 1;
    }
    ccFntTy::SetSurf(DAT_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar7 = 2;
    }
    else {
      iVar7 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr(DAT_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar7);
    break;
  case 0x6582:
  case 0x6583:
  case 0x6584:
  case 0x6585:
    switch(uVar15) {
    case 0x6582:
      cVar5 = DAT_00808a90._1_1_;
      if (DAT_00808a90._1_1_ == '\0') {
        local_20 = 0x234e;
      }
      else {
LAB_005cab38:
        local_20 = (-(uint)(cVar5 != '\x01') & 3) + 0x234c;
      }
      break;
    case 0x6583:
      cVar5 = (char)DAT_00808a90;
      if ((char)DAT_00808a90 != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6584:
      cVar5 = DAT_00808a90._2_1_;
      if (DAT_00808a90._2_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6585:
      cVar5 = DAT_00808a90._3_1_;
      if (DAT_00808a90._3_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
    }
    ccFntTy::SetSurf(DAT_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar7 = 2;
    }
    else {
      iVar7 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    iVar22 = -1;
    iVar12 = -1;
    puVar14 = (uint *)FUN_006b0140(local_20,DAT_00807618);
    ccFntTy::WrStr(DAT_0081176c->field_0034,puVar14,iVar12,iVar22,iVar7);
    break;
  case 0x6586:
    if (DAT_00808a97 == -1) {
      pcVar9 = (char *)FUN_006b0140(0x1f55,DAT_00807618);
      uVar15 = 0xffffffff;
      do {
        pcVar19 = pcVar9;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar19 = pcVar9 + 1;
        cVar5 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar5 != '\0');
      uVar15 = ~uVar15;
      pcVar9 = pcVar19 + -uVar15;
      pcVar19 = (char *)&DAT_0080f33a;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar19 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar19 = pcVar19 + 1;
      }
    }
    else {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,DAT_00808a97);
    }
    ccFntTy::SetSurf(DAT_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar7 = 2;
    }
    else {
      iVar7 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr(DAT_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar7);
    break;
  case 0x6587:
    if (DAT_00808a9b == 0xff) {
      uVar6 = FUN_006b0140(0x1f59,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007a4ccc,uVar6);
    }
    else {
      iVar7 = DAT_00808a9b + 1;
      uVar6 = FUN_006b0140(0x1f57,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,uVar6,iVar7);
    }
    ccFntTy::SetSurf(DAT_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar7 = 2;
    }
    else {
      iVar7 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr(DAT_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar7);
    break;
  case 0x6588:
    cVar5 = DAT_00808a95;
    goto LAB_005cad88;
  case 0x6589:
    if (DAT_00808a8f == '\0') break;
LAB_005cadd5:
    pbVar11 = (byte *)FUN_0070b3a0(this_00->field_1F4F,0);
    iVar7 = (local_10 + -0x10) / 2 + local_18;
    puVar18 = (undefined4 *)this_00->field_1E1E;
    iVar12 = (local_14 + -0x11) / 2 + local_1c;
    goto cf_common_exit_005CAE0F;
  case 0x658a:
    if (DAT_00808a94 != '\0') {
      pbVar11 = (byte *)FUN_0070b3a0(this_00->field_1F4F,0);
      iVar7 = (local_10 + -0x10) / 2 + local_18;
      iVar12 = (local_14 + -0x11) / 2 + local_1c;
      puVar18 = (undefined4 *)this_00->field_1E1E;
      goto cf_common_exit_005CAE0F;
    }
    break;
  case 0x658b:
    cVar5 = DAT_00808aa9;
LAB_005cad88:
    if (cVar5 != '\0') {
      pbVar11 = (byte *)FUN_0070b3a0(this_00->field_1F4F,0);
      iVar7 = (local_10 + -0x10) / 2 + local_18;
      iVar12 = (local_14 + -0x11) / 2 + local_1c;
      puVar18 = (undefined4 *)this_00->field_1E1E;
cf_common_exit_005CAE0F:
      DibPut(puVar18,iVar12,iVar7,'\x06',pbVar11);
    }
    break;
  case 0x658c:
    if (DAT_00808aaa != '\0') goto LAB_005cadd5;
  }
  FUN_006b35d0(DAT_008075a8,this_00->field_1E22);
  if (*(short *)(param_1 + 0x14) == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
LAB_005cae3e:
  g_currentExceptionFrame = local_dc.previous;
  uVar6 = MMObjTy::GetMessage((MMObjTy *)this_00,param_1);
  return uVar6;
}


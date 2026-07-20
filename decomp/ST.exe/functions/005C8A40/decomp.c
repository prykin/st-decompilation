
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::GetMessage */

undefined4 __thiscall SettMapTy::GetMessage(SettMapTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  undefined1 *puVar1;
  ccFntTy *pcVar2;
  int *piVar3;
  code *pcVar4;
  SettMapTy *this_00;
  byte bVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  MMsgTy *this_01;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar18;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar19;
  char *pcVar20;
  uint *puVar21;
  UINT uID;
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
  uint local_18;
  int local_14;
  int local_10;
  AnonShape_GLOBAL_0080C502_B8708D85 *local_c;
  int *local_8;
  
  local_38 = this;
  DVar7 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar7;
  local_dc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_dc;
  iVar8 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_38;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_dc.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x758,0,iVar8,
                                &DAT_007a4ccc,s_SettMapTy__GetMessage_007cd23c);
    if (iVar13 != 0) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return uVar12;
    }
    RaiseInternalException(iVar8,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x758);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_38,(int)param_1);
  uVar16 = *(uint *)&param_1->field_0x10;
  if (uVar16 < 0x6549) {
    if (uVar16 == 0x6548) {
      if (this_00->field_0065 == '\x01') {
        DAT_00808a95 = DAT_00808a95 == '\0';
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,this_00->field_2149,(undefined4 *)&this_00->field_0x1d);
      }
      goto cf_switch_join_005CA971;
    }
    if (uVar16 < 0x6333) {
      if (uVar16 == 0x6332) {
        StartSystemTy::PaintBinDesc(PTR_0081176c,param_1);
      }
      else if (uVar16 < 0x610b) {
        if (uVar16 == 0x610a) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = *(undefined4 *)&param_1->field_0x10;
          this_00->field_0051 = 6;
          thunk_FUN_005b66e0((STJellyGunC *)this_00);
        }
        else if (uVar16 < 6) {
          if (uVar16 == 5) {
            PaintSettMap(this_00,'\0');
          }
          else if (uVar16 == 0) {
            (**(code **)(this_00->field_0000 + 0xc))();
          }
          else if (uVar16 == 2) {
            uVar12 = *(undefined4 *)(*(int *)&param_1->field_0x14 + 0x18);
            this_00->field_1E27 = uVar12;
            (**(code **)(this_00->field_0000 + 0x10))
                      (CONCAT31((int3)((uint)uVar12 >> 8),
                                *(undefined1 *)(*(int *)&param_1->field_0x14 + 0x14)));
          }
          else if (uVar16 == 3) {
            (**(code **)(this_00->field_0000 + 0x14))();
          }
        }
        else if (uVar16 == 0x6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = *(undefined4 *)&param_1->field_0x10;
          this_00->field_0051 = *(undefined4 *)&param_1->field_0x14;
          this_00->field_0055 = *(undefined4 *)&param_1->field_0x18;
          thunk_FUN_005b66e0((STJellyGunC *)this_00);
        }
        else if (uVar16 == 0x6109) goto switchD_005c8bd0_caseD_611f;
      }
      else {
        switch(uVar16) {
        case 0x611f:
switchD_005c8bd0_caseD_611f:
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = *(undefined4 *)&param_1->field_0x10;
          this_00->field_0051 = *(undefined4 *)&param_1->field_0x14;
          this_00->field_0055 = *(undefined4 *)&param_1->field_0x18;
          thunk_FUN_005b66e0((STJellyGunC *)this_00);
          break;
        case 0x6200:
          this_00->field_1F88 = *(undefined4 *)&param_1->field_0x14;
          (**(code **)(this_00->field_0000 + 0x2c))();
          break;
        case 0x6201:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_0x1c6b,
                     (int)param_1,0);
          break;
        case 0x6202:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_0x1cfc,
                     (int)param_1,0);
          break;
        case 0x6203:
          uVar16 = *(int *)(*(int *)&param_1->field_0x18 + 4) + (uint)param_1->field_0016;
          this_00->field_1DAD = uVar16;
          if (this_00->field_1D91 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1DD5,this_00->field_1D91,this_00->field_1D95,
                       this_00->field_1DA9,uVar16);
          }
        }
      }
      goto cf_switch_join_005CA971;
    }
    if (uVar16 < 0x6504) {
      if (uVar16 == 0x6503) {
        iVar8 = this_00->field_1E2F;
        if ((uint)*(ushort *)&param_1->field_0x14 < *(uint *)(iVar8 + 0xc)) {
          iVar8 = *(int *)(iVar8 + 8) * (uint)*(ushort *)&param_1->field_0x14 +
                  *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar8 = 0;
        }
        cVar6 = *(char *)(iVar8 + 0x104);
        local_c = (AnonShape_GLOBAL_0080C502_B8708D85 *)CONCAT31(local_c._1_3_,cVar6);
        if (cVar6 != -1) {
          switch(cVar6) {
          case '\0':
            uVar14 = 0xfc;
            break;
          case '\x01':
            uVar14 = 0xfa;
            break;
          case '\x02':
            uVar14 = 0xfb;
            break;
          case '\x03':
            uVar14 = 0xf9;
            break;
          case '\x04':
            uVar14 = 0xfd;
            break;
          case '\x05':
            uVar14 = 0xfe;
            break;
          case '\x06':
            uVar14 = 0xf3;
            break;
          case '\a':
            uVar14 = 7;
            break;
          default:
            uVar14 = 0xff;
          }
          iVar8 = *(int *)&param_1->field_0x18;
          FUN_006b4170(iVar8,0,2,2,*(int *)(iVar8 + 4) + -4,*(int *)(iVar8 + 8) + -4,uVar14);
        }
        if (param_1->field_0016 == 1) {
          iVar8 = *(int *)&param_1->field_0x18;
          FUN_006b5ee0(iVar8,0,0,0,*(int *)(iVar8 + 4),*(int *)(iVar8 + 8),0xf,0xd);
        }
      }
      else if (uVar16 < 0x6336) {
        if (uVar16 == 0x6335) {
          PTR_0081176c->field_04CF =
               *(int *)(*(int *)&param_1->field_0x18 + 4) + (uint)param_1->field_0016;
          if (PTR_0081176c->field_04B3 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,
                       PTR_0081176c->field_04B7,PTR_0081176c->field_04CB,PTR_0081176c->field_04CF);
          }
        }
        else if (uVar16 == 0x6333) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_038D,
                     (int)param_1,0);
        }
        else if (uVar16 == 0x6334) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_041E,
                     (int)param_1,0);
        }
      }
      else if (uVar16 == 0x64ff) {
        switch(*(undefined4 *)&param_1->field_0x18) {
        case 0:
          uVar16 = *(uint *)&param_1->field_0x14;
          if (uVar16 != 0xffffffff) {
            this_00->field_1F57 = (char)uVar16;
            if ((uVar16 & 0xff) == 0) {
              if (3 < (byte)this_00->field_1F5C) {
                this_00->field_1F5C = 3;
                this_00->field_002D = 5;
                FUN_006e6080(this_00,2,this_00->field_1F64,(undefined4 *)&this_00->field_0x1d);
                FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
              }
            }
            else if (((uVar16 & 0xff) == 1) && (5 < (byte)this_00->field_1F5C)) {
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
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F5C = (char)*(int *)&param_1->field_0x14 + '\x02';
            goto cf_common_join_005C8ECC;
          }
          break;
        case 2:
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F58 = *(int *)&param_1->field_0x14;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 3:
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F5F = (char)*(int *)&param_1->field_0x14;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 4:
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F5D = (char)*(int *)&param_1->field_0x14;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 5:
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F5E = (char)*(int *)&param_1->field_0x14;
            goto cf_common_join_005C8ECC;
          }
        }
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,(&this_00->field_1F60)[*(int *)&param_1->field_0x18],
                     (undefined4 *)&this_00->field_0x1d);
        FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
      }
      else if (uVar16 == 0x6500) {
        ccFntTy::SetSurf(PTR_0081176c->field_0034,*(int *)&param_1->field_0x18,0,0,0,0,0);
        iVar8 = this_00->field_1E2F;
        if ((uint)*(ushort *)&param_1->field_0x14 < *(uint *)(iVar8 + 0xc)) {
          puVar15 = (uint *)(*(int *)(iVar8 + 8) * (uint)*(ushort *)&param_1->field_0x14 +
                            *(int *)(iVar8 + 0x1c));
        }
        else {
          puVar15 = (uint *)0x0;
        }
        ccFntTy::WrStr(PTR_0081176c->field_0034,puVar15,-1,-1,3 - (uint)(param_1->field_0016 != 1));
        if (param_1->field_0016 == 1) {
          iVar8 = *(int *)&param_1->field_0x18;
          FUN_006b5ee0(iVar8,0,0,0,*(int *)(iVar8 + 4),*(int *)(iVar8 + 8),0xf,0xd);
        }
      }
      goto cf_switch_join_005CA971;
    }
    switch(uVar16) {
    case 0x6506:
      iVar8 = this_00->field_1E2F;
      uVar16 = *(uint *)&param_1->field_0x14;
      if (uVar16 < *(uint *)(iVar8 + 0xc)) {
        switch(*(undefined4 *)&param_1->field_0x18) {
        case 0:
          cVar6 = this_00->field_1E26;
          if (((cVar6 == '\x06') || (cVar6 == '\x01')) || (pAVar18 = PTR_0080c502, cVar6 == '\x02'))
          {
            pAVar18 = DAT_0080c506;
          }
          if (uVar16 < (uint)pAVar18->field_000C) {
            if (((cVar6 == '\x06') || (cVar6 == '\x01')) ||
               (pAVar18 = PTR_0080c502, cVar6 == '\x02')) {
              pAVar18 = DAT_0080c506;
            }
            if (((cVar6 == '\x06') || (cVar6 == '\x01')) || (pAVar9 = PTR_0080c502, cVar6 == '\x02')
               ) {
              pAVar9 = DAT_0080c506;
            }
            iVar8 = pAVar9->field_0008 * uVar16 + pAVar18->field_001C;
          }
          else {
            iVar8 = 0;
          }
          if (iVar8 == 0) {
            this_00->field_1C5F = 0;
            DAT_0080995c = 1;
            puVar19 = &DAT_00809960;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
            }
            StartSystemTy::SetObjectives
                      (PTR_0081176c,this_00->field_1F43,(char *)0x0,this_00->field_1C63);
          }
          else {
            this_00->field_1C5F = uVar16;
            DAT_0080995c = *(undefined4 *)(iVar8 + 0x90);
            uVar16 = 0xffffffff;
            pcVar10 = (char *)(iVar8 + 0x4c);
            do {
              pcVar20 = pcVar10;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar20 = pcVar10 + 1;
              cVar6 = *pcVar10;
              pcVar10 = pcVar20;
            } while (cVar6 != '\0');
            uVar16 = ~uVar16;
            pcVar10 = pcVar20 + -uVar16;
            pcVar20 = (char *)&DAT_00809960;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar20 = pcVar20 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar20 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar20 = pcVar20 + 1;
            }
            StartSystemTy::SetObjectives
                      (PTR_0081176c,this_00->field_1F43,(char *)(iVar8 + 0x70),this_00->field_1C63);
          }
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2125,(undefined4 *)&this_00->field_0x1d);
          if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
            FUN_006b6160(&this_00->field_0x1a5f,(int)(g_int_00811764 + 6));
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
                         (*(int *)(iVar8 + 8) * uVar16 + 0x104 + *(int *)(iVar8 + 0x1c)),
                        (char)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2131,(undefined4 *)&this_00->field_0x1d);
          break;
        case 4:
          DAT_00808a90 = CONCAT31(DAT_00808a90._1_3_,
                                  *(undefined1 *)
                                   (*(int *)(iVar8 + 8) * uVar16 + 0x104 + *(int *)(iVar8 + 0x1c)));
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2135,(undefined4 *)&this_00->field_0x1d);
          break;
        case 5:
          DAT_00808a90._0_3_ =
               CONCAT12(*(undefined1 *)
                         (*(int *)(iVar8 + 8) * uVar16 + 0x104 + *(int *)(iVar8 + 0x1c)),
                        (undefined2)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2139,(undefined4 *)&this_00->field_0x1d);
          bVar5 = DAT_00808a90._2_1_;
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            DAT_00808a90 = CONCAT13(bVar5,(undefined3)DAT_00808a90);
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_213D,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        case 6:
          DAT_00808a90 = CONCAT13(*(undefined1 *)
                                   (*(int *)(iVar8 + 8) * uVar16 + 0x104 + *(int *)(iVar8 + 0x1c)),
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
          DAT_00808a97 = *(int *)(*(int *)(iVar8 + 8) * uVar16 + 0x104 + *(int *)(iVar8 + 0x1c));
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2141,(undefined4 *)&this_00->field_0x1d);
          break;
        case 8:
          DAT_00808a9b = *(byte *)(*(int *)(iVar8 + 8) * uVar16 + 0x104 + *(int *)(iVar8 + 0x1c));
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2145,(undefined4 *)&this_00->field_0x1d);
        }
      }
      break;
    case 0x653f:
      if (this_00->field_0065 == '\x01') {
        cVar6 = this_00->field_1E26;
        if (((cVar6 == '\x06') || (cVar6 == '\x01')) || (pAVar18 = PTR_0080c502, cVar6 == '\x02')) {
          pAVar18 = DAT_0080c506;
        }
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 0;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        local_8 = (int *)0x0;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        local_c = pAVar18;
        if (pAVar18->field_000C != 0) {
          do {
            pcVar10 = (char *)(pAVar18->field_0008 * (int)local_8 + pAVar18->field_001C);
            if (pcVar10 != (char *)0x0) {
              this_00->field_1F37 = local_8;
              uVar16 = 0xffffffff;
              do {
                pcVar20 = pcVar10;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                pcVar20 = pcVar10 + 1;
                cVar6 = *pcVar10;
                pcVar10 = pcVar20;
              } while (cVar6 != '\0');
              uVar16 = ~uVar16;
              pcVar10 = pcVar20 + -uVar16;
              pcVar20 = &this_00->field_0x1e33;
              for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar20 = pcVar20 + 4;
              }
              for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                *pcVar20 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar20 = pcVar20 + 1;
              }
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
              pAVar18 = local_c;
            }
            local_8 = (int *)((int)local_8 + 1);
          } while (local_8 < (uint)pAVar18->field_000C);
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
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x653f;
      this_00->field_2191 = 0x6500;
      *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
      pcVar10 = (char *)FUN_006b0140(0x234e,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = &this_00->field_0x1e33;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar10 = (char *)FUN_006b0140(0x234c,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = &this_00->field_0x1e33;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar10 = (char *)FUN_006b0140(0x234f,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = &this_00->field_0x1e33;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
      }
      this_00->field_1F37 = 2;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
      switch(this_00->field_2179) {
      case 3:
        bVar5 = DAT_00808a90._1_1_;
        goto LAB_005c95d4;
      case 4:
        this_00->field_21A1 = DAT_00808a90 & 0xff;
        break;
      case 5:
        this_00->field_21A1 = DAT_00808a90 >> 0x10 & 0xff;
        break;
      case 6:
        bVar5 = DAT_00808a90._3_1_;
LAB_005c95d4:
        this_00->field_21A1 = (uint)bVar5;
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
      pcVar2 = PTR_0081176c->field_0034;
      iVar8 = pcVar2->field_00A0;
joined_r0x005c964b:
      if (iVar8 != 0) {
        FUN_00710790((uint *)pcVar2);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar2->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &this_00->field_0x2161,0);
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
        pcVar10 = (char *)FUN_006b0140(0x1f55,HINSTANCE_00807618);
        uVar16 = 0xffffffff;
        do {
          pcVar20 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar20 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar20;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar10 = pcVar20 + -uVar16;
        pcVar20 = &this_00->field_0x1e33;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar20 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar20 = pcVar20 + 1;
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
        pcVar2 = PTR_0081176c->field_0034;
        if (pcVar2->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar2);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar2->field_0x8a;
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &this_00->field_0x2161,0);
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
        uVar12 = FUN_006b0140(0x1f57,HINSTANCE_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,uVar12,uVar23);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_1E2F,(undefined4 *)puVar1);
        this_00->field_1F37 = 1;
        uVar23 = 2;
        uVar12 = FUN_006b0140(0x1f57,HINSTANCE_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,uVar12,uVar23);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_1E2F,(undefined4 *)puVar1);
        this_00->field_1F37 = 2;
        uVar23 = 3;
        uVar12 = FUN_006b0140(0x1f57,HINSTANCE_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,uVar12,uVar23);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_1E2F,(undefined4 *)puVar1);
        this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
        this_00->field_21A1 = (uint)DAT_00808a9b;
        this_00->field_21C5 = 0x2bf;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar2 = PTR_0081176c->field_0034;
        iVar8 = pcVar2->field_00A0;
        goto joined_r0x005c996c;
      }
    }
    goto cf_switch_join_005CA971;
  }
  if (uVar16 < 0x6900) {
    if (uVar16 == 0x68ff) {
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x64ff;
        this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
        this_00->field_2191 = 0x6500;
        *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
        pcVar10 = (char *)FUN_006b0140(0x234b,HINSTANCE_00807618);
        uVar16 = 0xffffffff;
        do {
          pcVar20 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar20 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar20;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar10 = pcVar20 + -uVar16;
        pcVar20 = &this_00->field_0x1e33;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar20 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar20 = pcVar20 + 1;
        }
        this_00->field_1F37 = 0;
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        pcVar10 = (char *)FUN_006b0140(0x234c,HINSTANCE_00807618);
        uVar16 = 0xffffffff;
        do {
          pcVar20 = pcVar10;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar20 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar20;
        } while (cVar6 != '\0');
        uVar16 = ~uVar16;
        pcVar10 = pcVar20 + -uVar16;
        pcVar20 = &this_00->field_0x1e33;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar20 = pcVar20 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar20 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar20 = pcVar20 + 1;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
        if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
          pcVar10 = (char *)FUN_006b0140(0x234d,HINSTANCE_00807618);
          uVar16 = 0xffffffff;
          do {
            pcVar20 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar20 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar20;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar20 + -uVar16;
          pcVar20 = &this_00->field_0x1e33;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar20 = pcVar20 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar20 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar20 = pcVar20 + 1;
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
      switch(uVar16) {
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
  switch(uVar16) {
  case 0x6900:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
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
        iVar8 = 2;
        do {
          uVar12 = FUN_006b0140(0x2354,HINSTANCE_00807618);
          wsprintfA(&this_00->field_0x1e33,s__d__s_007c2864,iVar8,uVar12);
          this_00->field_1F37 = iVar8;
          Library::DKW::TBL::FUN_006ae1c0
                    ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
          iVar13 = iVar8 + -1;
          iVar8 = iVar8 + 1;
        } while (iVar13 < (int)local_8);
      }
      this_00->field_21A9 = *(undefined4 *)(this_00->field_1E2F + 0xc);
      this_00->field_21A1 = (byte)this_00->field_1F5C - 2;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0xe2;
LAB_005c9fef:
      pcVar2 = PTR_0081176c->field_0034;
      iVar8 = pcVar2->field_00A0;
joined_r0x005c996c:
      if (iVar8 != 0) {
        FUN_00710790((uint *)pcVar2);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar2->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &this_00->field_0x2161,0);
    }
    break;
  case 0x6901:
    if (this_00->field_0065 == '\x01') {
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        local_c = (AnonShape_GLOBAL_0080C502_B8708D85 *)0x1;
      }
      else {
        local_c = *(AnonShape_GLOBAL_0080C502_B8708D85 **)(this_00->field_1F7C + 0xc);
      }
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
      this_00->field_2191 = 0x6500;
      local_8 = (int *)0x0;
      *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
      if (local_c != (AnonShape_GLOBAL_0080C502_B8708D85 *)0x0) {
        do {
          iVar8 = this_00->field_1F7C;
          if (local_8 < *(int **)(iVar8 + 0xc)) {
            iVar8 = *(int *)(iVar8 + 8) * (int)local_8 + *(int *)(iVar8 + 0x1c);
          }
          else {
            iVar8 = 0;
          }
          uVar16 = 0xffffffff;
          pcVar10 = (char *)(iVar8 + 0x104);
          do {
            pcVar20 = pcVar10;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar20 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar20;
          } while (cVar6 != '\0');
          uVar16 = ~uVar16;
          pcVar10 = pcVar20 + -uVar16;
          pcVar20 = &this_00->field_0x1e33;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar20 = pcVar20 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar20 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar20 = pcVar20 + 1;
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
      pcVar2 = PTR_0081176c->field_0034;
      if (pcVar2->field_00A0 != 0) {
        FUN_00710790((uint *)pcVar2);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar2->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &this_00->field_0x2161,0);
    }
    break;
  case 0x6902:
    if (this_00->field_0065 != '\x01') break;
    this_00->field_2171 = 0x64ff;
    this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
    this_00->field_2191 = 0x6500;
    *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
    pcVar10 = (char *)FUN_006b0140(0x2355,HINSTANCE_00807618);
    uVar16 = 0xffffffff;
    do {
      pcVar20 = pcVar10;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar20 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar20;
    } while (cVar6 != '\0');
    uVar16 = ~uVar16;
    pcVar10 = pcVar20 + -uVar16;
    pcVar20 = &this_00->field_0x1e33;
    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar20 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar20 = pcVar20 + 1;
    }
    this_00->field_1F37 = 0;
    Library::DKW::TBL::FUN_006ae1c0
              ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
    pcVar10 = (char *)FUN_006b0140(0x234c,HINSTANCE_00807618);
    uVar16 = 0xffffffff;
    do {
      pcVar20 = pcVar10;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar20 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar20;
    } while (cVar6 != '\0');
    uVar16 = ~uVar16;
    pcVar10 = pcVar20 + -uVar16;
    pcVar20 = &this_00->field_0x1e33;
    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar20 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar20 = pcVar20 + 1;
    }
    this_00->field_1F37 = 1;
    Library::DKW::TBL::FUN_006ae1c0
              ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
    pcVar10 = (char *)FUN_006b0140(0x2356,HINSTANCE_00807618);
    uVar16 = 0xffffffff;
    do {
      pcVar20 = pcVar10;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar20 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar20;
    } while (cVar6 != '\0');
    uVar16 = ~uVar16;
    pcVar10 = pcVar20 + -uVar16;
    pcVar20 = &this_00->field_0x1e33;
    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar20 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar20 = pcVar20 + 1;
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
    pcVar2 = PTR_0081176c->field_0034;
    iVar8 = pcVar2->field_00A0;
    goto joined_r0x005c964b;
  case 0x6903:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
      this_00->field_2191 = 0x6500;
      *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
      pcVar10 = (char *)FUN_006b0140(0x234e,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = &this_00->field_0x1e33;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar10 = (char *)FUN_006b0140(0x234c,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = &this_00->field_0x1e33;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar10 = (char *)FUN_006b0140(0x234f,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = &this_00->field_0x1e33;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
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
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
      this_00->field_2191 = 0x6500;
      *(undefined4 *)(this_00->field_1E2F + 0xc) = 0;
      pcVar10 = (char *)FUN_006b0140(0x234e,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = &this_00->field_0x1e33;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar10 = (char *)FUN_006b0140(0x234c,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = &this_00->field_0x1e33;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                ((uint *)this_00->field_1E2F,(undefined4 *)&this_00->field_0x1e33);
      pcVar10 = (char *)FUN_006b0140(0x234f,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = &this_00->field_0x1e33;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
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
      DVar7 = timeGetTime();
      this_00->field_1F53 = DVar7;
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
    thunk_FUN_005b66e0((STJellyGunC *)this_00);
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
    thunk_FUN_005b66e0((STJellyGunC *)this_00);
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
    local_8 = *(int **)&param_1->field_0x18;
    local_c = *(AnonShape_GLOBAL_0080C502_B8708D85 **)(this_00->field_1E2B + 4);
    local_34 = *(int *)(this_00->field_1E2B + 8);
    switch(uVar16) {
    case 0x697f:
      if (this_00->field_1F57 == '\0') {
        uID = 0x234b;
        goto LAB_005ca70e;
      }
      if (this_00->field_1F57 != '\x01') {
        uID = 0x234d;
        goto LAB_005ca70e;
      }
      goto LAB_005ca619;
    case 0x6980:
      uVar12 = FUN_006b0140(0x2354,HINSTANCE_00807618);
      wsprintfA((LPSTR)local_98,s__d__s_007c2864,(uint)(byte)this_00->field_1F5C,uVar12);
      goto LAB_005ca73b;
    case 0x6981:
      iVar8 = this_00->field_1F7C;
      if ((uint)this_00->field_1F58 < *(uint *)(iVar8 + 0xc)) {
        pcVar10 = (char *)(*(int *)(iVar8 + 8) * this_00->field_1F58 + *(int *)(iVar8 + 0x1c) +
                          0x104);
      }
      else {
        pcVar10 = (char *)0x104;
      }
      goto LAB_005ca71b;
    case 0x6982:
      if (this_00->field_1F5F == '\0') {
        uID = 0x2355;
      }
      else {
        if (this_00->field_1F5F == '\x01') goto LAB_005ca619;
        uID = 0x2356;
      }
      goto LAB_005ca70e;
    case 0x6983:
      cVar6 = this_00->field_1F5D;
      break;
    default:
      cVar6 = this_00->field_1F5E;
    }
    if (cVar6 == '\0') {
      uID = 0x234e;
    }
    else if (cVar6 == '\x01') {
LAB_005ca619:
      uID = 0x234c;
    }
    else {
      uID = 0x234f;
    }
LAB_005ca70e:
    pcVar10 = (char *)FUN_006b0140(uID,HINSTANCE_00807618);
LAB_005ca71b:
    uVar16 = 0xffffffff;
    do {
      pcVar20 = pcVar10;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar20 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar20;
    } while (cVar6 != '\0');
    uVar16 = ~uVar16;
    puVar15 = (uint *)(pcVar20 + -uVar16);
    puVar21 = local_98;
    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar21 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar21 = puVar21 + 1;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(char *)puVar21 = (char)*puVar15;
      puVar15 = (uint *)((int)puVar15 + 1);
      puVar21 = (uint *)((int)puVar21 + 1);
    }
LAB_005ca73b:
    piVar3 = local_8;
    local_30 = *local_8 + -10;
    local_28 = local_8[2];
    local_2c = local_8[1] + -0xb4;
    local_24 = local_8[3];
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_1C67,&local_30,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    DibPut((undefined4 *)this_00->field_1C67,(local_28 - (int)local_c) + -8 + local_30,
           (local_24 - local_34) / 2 + local_2c,'\x06',(byte *)this_00->field_1E2B);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1C67,0,*piVar3 + -10,piVar3[1] - 0xb4,
                     (piVar3[2] - (int)local_c) + -8,piVar3[3]);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar8 = 2;
    }
    else {
      iVar8 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,local_98,-1,-1,iVar8);
    FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
    if (*(short *)&param_1->field_0x14 == 3) goto LAB_005ca964;
    break;
  case 0x6985:
    piVar3 = *(int **)&param_1->field_0x18;
    FUN_006c7610(this_00->field_1C67,0,*piVar3 + -10,piVar3[1] + -0xb4,piVar3[2],piVar3[3],
                 piVar3[3] / 2,0x67);
    FUN_006c7570(this_00->field_1C67,0,*piVar3 + -8,piVar3[1] + -0xb2,(undefined4 *)(piVar3[2] + -4)
                 ,piVar3[3] + -4,piVar3[3] / 2 + -2,
                 (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23);
    FUN_006c7570(this_00->field_1C67,0,*piVar3 + -10,piVar3[1] + -0xb4,(undefined4 *)piVar3[2],
                 piVar3[3],piVar3[3] / 2,(-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23);
    ccFntTy::SetSurf((ccFntTy *)PTR_0081176c->field_0030,this_00->field_1C67,0,*piVar3 + -10,
                     piVar3[1] - 0xb4,piVar3[2],piVar3[3]);
    iVar8 = (*(short *)&param_1->field_0x14 != 1) + 5;
    iVar22 = -1;
    iVar13 = -1;
    puVar15 = (uint *)FUN_006b0140(0x234a,HINSTANCE_00807618);
    ccFntTy::WrStr((ccFntTy *)PTR_0081176c->field_0030,puVar15,iVar13,iVar22,iVar8);
    if (*(short *)&param_1->field_0x14 != 3) break;
LAB_005ca964:
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
cf_switch_join_005CA971:
  uVar16 = *(uint *)&param_1->field_0x10;
  if ((uVar16 < 0x657f) || (0x658c < uVar16)) goto LAB_005cae3e;
  piVar3 = *(int **)&param_1->field_0x18;
  local_14 = piVar3[2];
  local_10 = piVar3[3];
  local_1c = *piVar3 + -0x112;
  local_18 = piVar3[1] - 0x149;
  MMObjTy::PaintButDib
            ((MMObjTy *)this_00,this_00->field_1E1E,&local_1c,2,
             (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
  switch(uVar16) {
  case 0x657f:
    cVar6 = this_00->field_1E26;
    if (((cVar6 == '\x06') || (cVar6 == '\x01')) || (pAVar18 = PTR_0080c502, cVar6 == '\x02')) {
      pAVar18 = DAT_0080c506;
    }
    if ((uint)this_00->field_1C5F < (uint)pAVar18->field_000C) {
      if (((cVar6 == '\x06') || (cVar6 == '\x01')) || (pAVar18 = PTR_0080c502, cVar6 == '\x02')) {
        pAVar18 = DAT_0080c506;
      }
      if (((cVar6 == '\x06') || (cVar6 == '\x01')) || (pAVar9 = PTR_0080c502, cVar6 == '\x02')) {
        pAVar9 = DAT_0080c506;
      }
      pcVar10 = (char *)(pAVar9->field_0008 * this_00->field_1C5F + pAVar18->field_001C);
    }
    else {
      pcVar10 = (char *)0x0;
    }
    if (pcVar10 == (char *)0x0) {
      pcVar10 = &DAT_008016a0;
    }
    uVar16 = 0xffffffff;
    do {
      pcVar20 = pcVar10;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar20 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar20;
    } while (cVar6 != '\0');
    uVar16 = ~uVar16;
    pcVar10 = pcVar20 + -uVar16;
    pcVar20 = (char *)&DAT_0080f33a;
    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar20 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar20 = pcVar20 + 1;
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar8 = 2;
    }
    else {
      iVar8 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar8);
    break;
  case 0x6582:
  case 0x6583:
  case 0x6584:
  case 0x6585:
    switch(uVar16) {
    case 0x6582:
      cVar6 = DAT_00808a90._1_1_;
      if (DAT_00808a90._1_1_ == '\0') {
        local_20 = 0x234e;
      }
      else {
LAB_005cab38:
        local_20 = (-(uint)(cVar6 != '\x01') & 3) + 0x234c;
      }
      break;
    case 0x6583:
      cVar6 = (char)DAT_00808a90;
      if ((char)DAT_00808a90 != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6584:
      cVar6 = DAT_00808a90._2_1_;
      if (DAT_00808a90._2_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6585:
      cVar6 = DAT_00808a90._3_1_;
      if (DAT_00808a90._3_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar8 = 2;
    }
    else {
      iVar8 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    iVar22 = -1;
    iVar13 = -1;
    puVar15 = (uint *)FUN_006b0140(local_20,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar15,iVar13,iVar22,iVar8);
    break;
  case 0x6586:
    if (DAT_00808a97 == -1) {
      pcVar10 = (char *)FUN_006b0140(0x1f55,HINSTANCE_00807618);
      uVar16 = 0xffffffff;
      do {
        pcVar20 = pcVar10;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar20 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar20;
      } while (cVar6 != '\0');
      uVar16 = ~uVar16;
      pcVar10 = pcVar20 + -uVar16;
      pcVar20 = (char *)&DAT_0080f33a;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar20 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    else {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,DAT_00808a97);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar8 = 2;
    }
    else {
      iVar8 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar8);
    break;
  case 0x6587:
    if (DAT_00808a9b == 0xff) {
      uVar12 = FUN_006b0140(0x1f59,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007a4ccc,uVar12);
    }
    else {
      iVar8 = DAT_00808a9b + 1;
      uVar12 = FUN_006b0140(0x1f57,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,uVar12,iVar8);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar8 = 2;
    }
    else {
      iVar8 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar8);
    break;
  case 0x6588:
    cVar6 = DAT_00808a95;
    goto LAB_005cad88;
  case 0x6589:
    if (DAT_00808a8f == '\0') break;
LAB_005cadd5:
    pbVar11 = (byte *)FUN_0070b3a0(this_00->field_1F4F,0);
    iVar8 = (local_10 + -0x10) / 2 + local_18;
    puVar19 = (undefined4 *)this_00->field_1E1E;
    iVar13 = (local_14 + -0x11) / 2 + local_1c;
    goto cf_common_exit_005CAE0F;
  case 0x658a:
    if (DAT_00808a94 != '\0') {
      pbVar11 = (byte *)FUN_0070b3a0(this_00->field_1F4F,0);
      iVar8 = (local_10 + -0x10) / 2 + local_18;
      iVar13 = (local_14 + -0x11) / 2 + local_1c;
      puVar19 = (undefined4 *)this_00->field_1E1E;
      goto cf_common_exit_005CAE0F;
    }
    break;
  case 0x658b:
    cVar6 = DAT_00808aa9;
LAB_005cad88:
    if (cVar6 != '\0') {
      pbVar11 = (byte *)FUN_0070b3a0(this_00->field_1F4F,0);
      iVar8 = (local_10 + -0x10) / 2 + local_18;
      iVar13 = (local_14 + -0x11) / 2 + local_1c;
      puVar19 = (undefined4 *)this_00->field_1E1E;
cf_common_exit_005CAE0F:
      DibPut(puVar19,iVar13,iVar8,'\x06',pbVar11);
    }
    break;
  case 0x658c:
    if (DAT_00808aaa != '\0') goto LAB_005cadd5;
  }
  FUN_006b35d0(DAT_008075a8,this_00->field_1E22);
  if (*(short *)&param_1->field_0x14 == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
LAB_005cae3e:
  g_currentExceptionFrame = local_dc.previous;
  uVar12 = MMObjTy::GetMessage((MMObjTy *)this_00,(int)param_1);
  return uVar12;
}


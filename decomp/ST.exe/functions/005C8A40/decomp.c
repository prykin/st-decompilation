
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::GetMessage */

undefined4 __thiscall SettMapTy::GetMessage(SettMapTy *this,int param_1)

{
  undefined1 *puVar1;
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
  void *unaff_EDI;
  undefined4 *puVar17;
  char *pcVar18;
  uint *puVar19;
  UINT UVar20;
  int iVar21;
  undefined4 uVar22;
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
  uVar5 = FUN_006e51b0(this->field_0010);
  this->field_0061 = uVar5;
  local_dc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_dc;
  iVar6 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_38;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_dc.previous;
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
  thunk_FUN_005b6450(local_38,param_1);
  uVar14 = *(uint *)(param_1 + 0x10);
  if (uVar14 < 0x6549) {
    if (uVar14 == 0x6548) {
      if (*(char *)(this_00 + 1) == '\x01') {
        DAT_00808a95 = DAT_00808a95 == '\0';
        uVar5 = *(undefined4 *)&this_00[0x54].field_0x25;
        *(undefined4 *)&this_00->field_0x2d = 5;
        FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
      }
      goto cf_switch_join_005CA971;
    }
    if (uVar14 < 0x6333) {
      if (uVar14 == 0x6332) {
        StartSystemTy::PaintBinDesc(DAT_0081176c,param_1);
      }
      else if (uVar14 < 0x610b) {
        if (uVar14 == 0x610a) {
          *(undefined4 *)&this_00->field_0x45 = 0x200;
          *(undefined4 *)&this_00->field_0x49 = 0;
          *(undefined4 *)&this_00->field_0x4d = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)&this_00->field_0x51 = 6;
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
            *(undefined4 *)&this_00[0x4c].field_0x2b = uVar5;
            (**(code **)(*(int *)this_00 + 0x10))
                      (CONCAT31((int3)((uint)uVar5 >> 8),
                                *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14)));
          }
          else if (uVar14 == 3) {
            (**(code **)(*(int *)this_00 + 0x14))();
          }
        }
        else if (uVar14 == 0x6105) {
          *(undefined4 *)&this_00->field_0x45 = 0x200;
          *(undefined4 *)&this_00->field_0x49 = 0;
          *(undefined4 *)&this_00->field_0x4d = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)&this_00->field_0x51 = *(undefined4 *)(param_1 + 0x14);
          *(undefined4 *)&this_00->field_0x55 = *(undefined4 *)(param_1 + 0x18);
          thunk_FUN_005b66e0(this_00);
        }
        else if (uVar14 == 0x6109) goto switchD_005c8bd0_caseD_611f;
      }
      else {
        switch(uVar14) {
        case 0x611f:
switchD_005c8bd0_caseD_611f:
          *(undefined4 *)&this_00->field_0x45 = 0x200;
          *(undefined4 *)&this_00->field_0x49 = 0;
          *(undefined4 *)&this_00->field_0x4d = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)&this_00->field_0x51 = *(undefined4 *)(param_1 + 0x14);
          *(undefined4 *)&this_00->field_0x55 = *(undefined4 *)(param_1 + 0x18);
          thunk_FUN_005b66e0(this_00);
          break;
        case 0x6200:
          *(undefined4 *)&this_00[0x4f].field_0x5d = *(undefined4 *)(param_1 + 0x14);
          (**(code **)(*(int *)this_00 + 0x2c))();
          break;
        case 0x6201:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00[0x48].field_0x3,param_1,0);
          break;
        case 0x6202:
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&this_00[0x49].field_0x2f,param_1,0);
          break;
        case 0x6203:
          uVar14 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
          *(uint *)&this_00[0x4b].field_0x16 = uVar14;
          if (*(uint *)&this_00[0x4a].field_0x5f != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      (*(uint **)&this_00[0x4b].field_0x3e,*(uint *)&this_00[0x4a].field_0x5f,
                       *(uint *)((int)&this_00[0x4a].field_0061 + 2),
                       *(uint *)((int)&this_00[0x4b].field_0010 + 2),uVar14);
          }
        }
      }
      goto cf_switch_join_005CA971;
    }
    if (uVar14 < 0x6504) {
      if (uVar14 == 0x6503) {
        iVar6 = *(int *)&this_00[0x4c].field_0x33;
        if ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar6 + 0xc)) {
          iVar6 = *(int *)(iVar6 + 8) * (uint)*(ushort *)(param_1 + 0x14) + *(int *)(iVar6 + 0x1c);
        }
        else {
          iVar6 = 0;
        }
        cVar4 = *(char *)(iVar6 + 0x104);
        local_c = (int *)CONCAT31(local_c._1_3_,cVar4);
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
          *(uint *)&DAT_0081176c->field_0x4cf =
               *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
          if (*(uint *)&DAT_0081176c->field_0x4b3 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      (*(uint **)&DAT_0081176c->field_0x4f7,*(uint *)&DAT_0081176c->field_0x4b3,
                       *(uint *)&DAT_0081176c->field_0x4b7,*(uint *)&DAT_0081176c->field_0x4cb,
                       *(uint *)&DAT_0081176c->field_0x4cf);
          }
        }
        else if (uVar14 == 0x6333) {
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&DAT_0081176c->field_0x38d,param_1,0);
        }
        else if (uVar14 == 0x6334) {
          MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)&DAT_0081176c->field_0x41e,param_1,0);
        }
      }
      else if (uVar14 == 0x64ff) {
        switch(*(undefined4 *)(param_1 + 0x18)) {
        case 0:
          uVar14 = *(uint *)(param_1 + 0x14);
          if (uVar14 != 0xffffffff) {
            this_00[0x4f].field_0x2c = (char)uVar14;
            if ((uVar14 & 0xff) == 0) {
              if (3 < (byte)this_00[0x4f].field_0x31) {
                uVar5 = *(undefined4 *)&this_00[0x4f].field_0x39;
                this_00[0x4f].field_0x31 = 3;
                *(undefined4 *)&this_00->field_0x2d = 5;
                FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
                FUN_006b35d0(DAT_008075a8,*(uint *)&this_00[0x4f].field_0x55);
              }
            }
            else if (((uVar14 & 0xff) == 1) && (5 < (byte)this_00[0x4f].field_0x31)) {
              uVar5 = *(undefined4 *)&this_00[0x4f].field_0x39;
              this_00[0x4f].field_0x31 = 4;
              *(undefined4 *)&this_00->field_0x2d = 5;
              FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
              FUN_006b35d0(DAT_008075a8,*(uint *)&this_00[0x4f].field_0x55);
            }
cf_common_join_005C8ECC:
            *(undefined4 *)&this_00[0x4f].field_0x1c = 0;
          }
          break;
        case 1:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00[0x4f].field_0x31 = (char)*(int *)(param_1 + 0x14) + '\x02';
            goto cf_common_join_005C8ECC;
          }
          break;
        case 2:
          if (*(int *)(param_1 + 0x14) != -1) {
            *(int *)&this_00[0x4f].field_0x2d = *(int *)(param_1 + 0x14);
            goto cf_common_join_005C8ECC;
          }
          break;
        case 3:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00[0x4f].field_0x34 = (char)*(int *)(param_1 + 0x14);
            goto cf_common_join_005C8ECC;
          }
          break;
        case 4:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00[0x4f].field_0x32 = (char)*(int *)(param_1 + 0x14);
            goto cf_common_join_005C8ECC;
          }
          break;
        case 5:
          if (*(int *)(param_1 + 0x14) != -1) {
            this_00[0x4f].field_0x33 = (char)*(int *)(param_1 + 0x14);
            goto cf_common_join_005C8ECC;
          }
        }
        *(undefined4 *)&this_00->field_0x2d = 5;
        FUN_006e6080(this_00,2,
                     *(undefined4 *)(&this_00[0x4f].field_0x35 + *(int *)(param_1 + 0x18) * 4),
                     (undefined4 *)&this_00->field_0x1d);
        FUN_006b35d0(DAT_008075a8,*(uint *)&this_00[0x4f].field_0x55);
      }
      else if (uVar14 == 0x6500) {
        ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)(param_1 + 0x18),0,0,0,0,0);
        iVar6 = *(int *)&this_00[0x4c].field_0x33;
        if ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar6 + 0xc)) {
          puVar13 = (uint *)(*(int *)(iVar6 + 8) * (uint)*(ushort *)(param_1 + 0x14) +
                            *(int *)(iVar6 + 0x1c));
        }
        else {
          puVar13 = (uint *)0x0;
        }
        ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar13,-1,-1,
                       3 - (uint)(*(short *)(param_1 + 0x16) != 1));
        if (*(short *)(param_1 + 0x16) == 1) {
          iVar6 = *(int *)(param_1 + 0x18);
          FUN_006b5ee0(iVar6,0,0,0,*(int *)(iVar6 + 4),*(int *)(iVar6 + 8),0xf,0xd);
        }
      }
      goto cf_switch_join_005CA971;
    }
    switch(uVar14) {
    case 0x6506:
      iVar6 = *(int *)&this_00[0x4c].field_0x33;
      uVar14 = *(uint *)(param_1 + 0x14);
      if (uVar14 < *(uint *)(iVar6 + 0xc)) {
        switch(*(undefined4 *)(param_1 + 0x18)) {
        case 0:
          cVar4 = this_00[0x4c].field_0x2a;
          if (((cVar4 == '\x06') || (cVar4 == '\x01')) || (piVar16 = DAT_0080c502, cVar4 == '\x02'))
          {
            piVar16 = DAT_0080c506;
          }
          if (uVar14 < (uint)piVar16[3]) {
            if (((cVar4 == '\x06') || (cVar4 == '\x01')) ||
               (piVar16 = DAT_0080c502, cVar4 == '\x02')) {
              piVar16 = DAT_0080c506;
            }
            if (((cVar4 == '\x06') || (cVar4 == '\x01')) || (piVar7 = DAT_0080c502, cVar4 == '\x02')
               ) {
              piVar7 = DAT_0080c506;
            }
            iVar6 = piVar7[2] * uVar14 + piVar16[7];
          }
          else {
            iVar6 = 0;
          }
          if (iVar6 == 0) {
            *(undefined4 *)&this_00[0x47].field_0x5c = 0;
            DAT_0080995c = 1;
            puVar17 = &DAT_00809960;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            StartSystemTy::SetObjectives
                      (DAT_0081176c,*(int *)&this_00[0x4f].field_0x18,(char *)0x0,
                       *(int *)&this_00[0x47].field_0x60);
          }
          else {
            *(uint *)&this_00[0x47].field_0x5c = uVar14;
            DAT_0080995c = *(undefined4 *)(iVar6 + 0x90);
            uVar14 = 0xffffffff;
            pcVar8 = (char *)(iVar6 + 0x4c);
            do {
              pcVar18 = pcVar8;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar18 = pcVar8 + 1;
              cVar4 = *pcVar8;
              pcVar8 = pcVar18;
            } while (cVar4 != '\0');
            uVar14 = ~uVar14;
            pcVar8 = pcVar18 + -uVar14;
            pcVar18 = (char *)&DAT_00809960;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar18 = pcVar18 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar18 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar18 = pcVar18 + 1;
            }
            StartSystemTy::SetObjectives
                      (DAT_0081176c,*(int *)&this_00[0x4f].field_0x18,(char *)(iVar6 + 0x70),
                       *(int *)&this_00[0x47].field_0x60);
          }
          uVar5 = *(undefined4 *)&this_00[0x54].field_0x1;
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
          if ((DAT_008067a0 != '\0') && (DAT_00811764 != 0)) {
            FUN_006b6160(&this_00[0x42].field_0x55,DAT_00811764 + 0x18);
            *(undefined1 *)&this_00[0x43].field_0010 = 1;
            *(undefined1 *)((int)&this_00[0x43].field_0010 + 1) = DAT_008087c4._2_1_;
            *(char *)((int)&this_00[0x43].field_0010 + 2) = (char)(DAT_008087c2 >> 1);
            wsprintfA((LPSTR)&local_64,&DAT_007cc584,DAT_0080995c);
            *(undefined4 *)((int)&this_00[0x43].field_0010 + 3) = local_64;
            *(undefined4 *)&this_00[0x43].field_0x17 = local_60;
            Library::MSVCRT::_strncpy(&this_00[0x43].field_0x1b,(char *)&DAT_0080c3c3,0x1d5);
            this_00[0x47].field_0x5b = 0;
          }
          (**(code **)(*(int *)this_00 + 0x2c))();
          break;
        case 3:
          DAT_00808a90._0_2_ =
               CONCAT11(*(undefined1 *)
                         (*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c)),
                        (char)DAT_00808a90);
          uVar5 = *(undefined4 *)&this_00[0x54].field_0xd;
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
          break;
        case 4:
          DAT_00808a90 = CONCAT31(DAT_00808a90._1_3_,
                                  *(undefined1 *)
                                   (*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c)));
          uVar5 = *(undefined4 *)((int)&this_00[0x54].field_0010 + 1);
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
          break;
        case 5:
          DAT_00808a90._0_3_ =
               CONCAT12(*(undefined1 *)
                         (*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c)),
                        (undefined2)DAT_00808a90);
          uVar5 = *(undefined4 *)&this_00[0x54].field_0x15;
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
          bVar3 = DAT_00808a90._2_1_;
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            DAT_00808a90 = CONCAT13(bVar3,(undefined3)DAT_00808a90);
            uVar5 = *(undefined4 *)&this_00[0x54].field_0x19;
            *(undefined4 *)&this_00->field_0x2d = 5;
            FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        case 6:
          DAT_00808a90 = CONCAT13(*(undefined1 *)
                                   (*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c)),
                                  (undefined3)DAT_00808a90);
          uVar5 = *(undefined4 *)&this_00[0x54].field_0x19;
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            DAT_00808a90._0_3_ = CONCAT12(DAT_00808a90._3_1_,(undefined2)DAT_00808a90);
            uVar5 = *(undefined4 *)&this_00[0x54].field_0x15;
            *(undefined4 *)&this_00->field_0x2d = 5;
            FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        case 7:
          DAT_00808a97 = *(int *)(*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c));
          uVar5 = *(undefined4 *)&this_00[0x54].field_0x1d;
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
          break;
        case 8:
          DAT_00808a9b = *(byte *)(*(int *)(iVar6 + 8) * uVar14 + 0x104 + *(int *)(iVar6 + 0x1c));
          uVar5 = *(undefined4 *)&this_00[0x54].field_0x21;
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
        }
      }
      break;
    case 0x653f:
      if (*(char *)(this_00 + 1) == '\x01') {
        cVar4 = this_00[0x4c].field_0x2a;
        if (((cVar4 == '\x06') || (cVar4 == '\x01')) || (piVar16 = DAT_0080c502, cVar4 == '\x02')) {
          piVar16 = DAT_0080c506;
        }
        *(undefined4 *)&this_00[0x54].field_0x4d = 0x6506;
        *(undefined4 *)&this_00[0x54].field_0x55 = 0;
        *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
        *(undefined4 *)&this_00[0x55].field_0x18 = 0;
        local_8 = (int *)0x0;
        *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
        local_c = piVar16;
        if (piVar16[3] != 0) {
          do {
            pcVar8 = (char *)(piVar16[2] * (int)local_8 + piVar16[7]);
            if (pcVar8 != (char *)0x0) {
              *(int **)&this_00[0x4f].field_0xc = local_8;
              uVar14 = 0xffffffff;
              do {
                pcVar18 = pcVar8;
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                pcVar18 = pcVar8 + 1;
                cVar4 = *pcVar8;
                pcVar8 = pcVar18;
              } while (cVar4 != '\0');
              uVar14 = ~uVar14;
              pcVar8 = pcVar18 + -uVar14;
              pcVar18 = &this_00[0x4c].field_0x37;
              for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar18 = pcVar18 + 4;
              }
              for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                *pcVar18 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar18 = pcVar18 + 1;
              }
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37
                        );
              piVar16 = local_c;
            }
            local_8 = (int *)((int)local_8 + 1);
          } while (local_8 < (int *)piVar16[3]);
        }
        uVar5 = *(undefined4 *)&this_00[0x47].field_0x5c;
        *(undefined4 *)&this_00[0x55].field_0x20 =
             *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
        *(undefined4 *)&this_00[0x55].field_0x18 = uVar5;
        *(undefined4 *)&this_00[0x55].field_0x3c = 0x1c5;
        *(undefined4 *)&this_00[0x55].field_0x44 = 0x154;
        *(undefined4 *)&this_00[0x55].field_0x40 = 0x14e;
        goto LAB_005c9fef;
      }
      break;
    case 0x6542:
    case 0x6543:
    case 0x6544:
    case 0x6545:
      if (*(char *)(this_00 + 1) != '\x01') break;
      *(undefined4 *)&this_00[0x54].field_0x4d = 0x6506;
      *(int *)&this_00[0x54].field_0x55 = *(int *)(param_1 + 0x10) + -0x653f;
      *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
      *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
      pcVar8 = (char *)FUN_006b0140(0x234e,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = &this_00[0x4c].field_0x37;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined4 *)&this_00[0x4f].field_0xc = 0;
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
      pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = &this_00[0x4c].field_0x37;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined4 *)&this_00[0x4f].field_0xc = 1;
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
      pcVar8 = (char *)FUN_006b0140(0x234f,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = &this_00[0x4c].field_0x37;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined4 *)&this_00[0x4f].field_0xc = 2;
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
      *(undefined4 *)&this_00[0x55].field_0x20 =
           *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
      switch(*(undefined4 *)&this_00[0x54].field_0x55) {
      case 3:
        bVar3 = DAT_00808a90._1_1_;
        goto LAB_005c95d4;
      case 4:
        *(uint *)&this_00[0x55].field_0x18 = DAT_00808a90 & 0xff;
        break;
      case 5:
        *(uint *)&this_00[0x55].field_0x18 = DAT_00808a90 >> 0x10 & 0xff;
        break;
      case 6:
        bVar3 = DAT_00808a90._3_1_;
LAB_005c95d4:
        *(uint *)&this_00[0x55].field_0x18 = (uint)bVar3;
      }
      switch(*(undefined4 *)&this_00[0x54].field_0x55) {
      case 3:
      case 5:
        *(undefined4 *)&this_00[0x55].field_0x3c = 0x1c5;
        break;
      case 4:
      case 6:
        *(undefined4 *)&this_00[0x55].field_0x3c = 0x2bf;
      }
      *(undefined4 *)&this_00[0x55].field_0x44 = 0x5a;
      switch(*(undefined4 *)&this_00[0x54].field_0x55) {
      case 3:
      case 4:
        *(undefined4 *)&this_00[0x55].field_0x40 = 0x164;
        break;
      case 5:
      case 6:
        *(undefined4 *)&this_00[0x55].field_0x40 = 0x17a;
      }
      iVar6 = DAT_0081176c->field_0034;
      iVar11 = *(int *)(iVar6 + 0xa0);
joined_r0x005c964b:
      if (iVar11 != 0) {
        FUN_00710790(iVar6);
      }
      *(undefined4 *)&this_00[0x55].field_0x1c = *(undefined4 *)(iVar6 + 0x8a);
      (**(code **)(**(int **)&this_00->field_0xc + 8))(0x100ef,0,0,&this_00[0x54].field_0x3d,0);
      break;
    case 0x6546:
      if (*(char *)(this_00 + 1) == '\x01') {
        *(undefined4 *)&this_00[0x54].field_0x4d = 0x6506;
        *(undefined4 *)&this_00[0x54].field_0x55 = 7;
        *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
        *(undefined4 *)&this_00[0x55].field_0x18 = 0;
        puVar1 = &this_00[0x4c].field_0x37;
        *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
        *(undefined4 *)&this_00[0x4f].field_0xc = 100;
        wsprintfA(puVar1,&DAT_007c1890,100);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)puVar1);
        *(undefined4 *)&this_00[0x4f].field_0xc = 0x96;
        wsprintfA(puVar1,&DAT_007c1890,0x96);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)puVar1);
        *(undefined4 *)&this_00[0x4f].field_0xc = 200;
        wsprintfA(puVar1,&DAT_007c1890,200);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)puVar1);
        *(undefined4 *)&this_00[0x4f].field_0xc = 0xffffffff;
        pcVar8 = (char *)FUN_006b0140(0x1f55,DAT_00807618);
        uVar14 = 0xffffffff;
        do {
          pcVar18 = pcVar8;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar8 + 1;
          cVar4 = *pcVar8;
          pcVar8 = pcVar18;
        } while (cVar4 != '\0');
        uVar14 = ~uVar14;
        pcVar8 = pcVar18 + -uVar14;
        pcVar18 = &this_00[0x4c].field_0x37;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar18 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar18 = pcVar18 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
        *(undefined4 *)&this_00[0x55].field_0x20 =
             *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
        if (DAT_00808a97 == 0x96) {
          *(undefined4 *)&this_00[0x55].field_0x18 = 1;
        }
        else if (DAT_00808a97 == 200) {
          *(undefined4 *)&this_00[0x55].field_0x18 = 2;
        }
        else if (DAT_00808a97 == -1) {
          *(undefined4 *)&this_00[0x55].field_0x18 = 3;
        }
        *(undefined4 *)&this_00[0x55].field_0x3c = 0x1c5;
        *(undefined4 *)&this_00[0x55].field_0x44 = 0x5a;
        *(undefined4 *)&this_00[0x55].field_0x40 = 400;
        iVar6 = DAT_0081176c->field_0034;
        if (*(int *)(iVar6 + 0xa0) != 0) {
          FUN_00710790(iVar6);
        }
        *(undefined4 *)&this_00[0x55].field_0x1c = *(undefined4 *)(iVar6 + 0x8a);
        (**(code **)(**(int **)&this_00->field_0xc + 8))(0x100ef,0,0,&this_00[0x54].field_0x3d,0);
      }
      break;
    case 0x6547:
      if (*(char *)(this_00 + 1) == '\x01') {
        *(undefined4 *)&this_00[0x54].field_0x4d = 0x6506;
        *(undefined4 *)&this_00[0x54].field_0x55 = 8;
        *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
        *(undefined4 *)&this_00[0x55].field_0x18 = 0;
        uVar22 = 1;
        puVar1 = &this_00[0x4c].field_0x37;
        *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
        *(undefined4 *)&this_00[0x4f].field_0xc = 0;
        uVar5 = FUN_006b0140(0x1f57,DAT_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,uVar5,uVar22);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)puVar1);
        *(undefined4 *)&this_00[0x4f].field_0xc = 1;
        uVar22 = 2;
        uVar5 = FUN_006b0140(0x1f57,DAT_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,uVar5,uVar22);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)puVar1);
        *(undefined4 *)&this_00[0x4f].field_0xc = 2;
        uVar22 = 3;
        uVar5 = FUN_006b0140(0x1f57,DAT_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,uVar5,uVar22);
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)puVar1);
        *(undefined4 *)&this_00[0x55].field_0x20 =
             *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
        *(uint *)&this_00[0x55].field_0x18 = (uint)DAT_00808a9b;
        *(undefined4 *)&this_00[0x55].field_0x3c = 0x2bf;
        *(undefined4 *)&this_00[0x55].field_0x44 = 0x5a;
        *(undefined4 *)&this_00[0x55].field_0x40 = 400;
        iVar6 = DAT_0081176c->field_0034;
        iVar11 = *(int *)(iVar6 + 0xa0);
        goto joined_r0x005c996c;
      }
    }
    goto cf_switch_join_005CA971;
  }
  if (uVar14 < 0x6900) {
    if (uVar14 == 0x68ff) {
      if (*(char *)(this_00 + 1) == '\x01') {
        *(undefined4 *)&this_00[0x54].field_0x4d = 0x64ff;
        *(int *)&this_00[0x54].field_0x55 = *(int *)(param_1 + 0x10) + -0x68ff;
        *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
        *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
        pcVar8 = (char *)FUN_006b0140(0x234b,DAT_00807618);
        uVar14 = 0xffffffff;
        do {
          pcVar18 = pcVar8;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar8 + 1;
          cVar4 = *pcVar8;
          pcVar8 = pcVar18;
        } while (cVar4 != '\0');
        uVar14 = ~uVar14;
        pcVar8 = pcVar18 + -uVar14;
        pcVar18 = &this_00[0x4c].field_0x37;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar18 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar18 = pcVar18 + 1;
        }
        *(undefined4 *)&this_00[0x4f].field_0xc = 0;
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
        pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
        uVar14 = 0xffffffff;
        do {
          pcVar18 = pcVar8;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar18 = pcVar8 + 1;
          cVar4 = *pcVar8;
          pcVar8 = pcVar18;
        } while (cVar4 != '\0');
        uVar14 = ~uVar14;
        pcVar8 = pcVar18 + -uVar14;
        pcVar18 = &this_00[0x4c].field_0x37;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar18 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar18 = pcVar18 + 1;
        }
        *(undefined4 *)&this_00[0x4f].field_0xc = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
        if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
          pcVar8 = (char *)FUN_006b0140(0x234d,DAT_00807618);
          uVar14 = 0xffffffff;
          do {
            pcVar18 = pcVar8;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar18 = pcVar8 + 1;
            cVar4 = *pcVar8;
            pcVar8 = pcVar18;
          } while (cVar4 != '\0');
          uVar14 = ~uVar14;
          pcVar8 = pcVar18 + -uVar14;
          pcVar18 = &this_00[0x4c].field_0x37;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar18 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar18 = pcVar18 + 1;
          }
          *(undefined4 *)&this_00[0x4f].field_0xc = 2;
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
        }
        *(undefined4 *)&this_00[0x55].field_0x20 =
             *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
        *(uint *)&this_00[0x55].field_0x18 = (uint)(byte)this_00[0x4f].field_0x2c;
        *(undefined4 *)&this_00[0x55].field_0x3c = 0x1a;
        *(undefined4 *)&this_00[0x55].field_0x44 = 0xe0;
        *(undefined4 *)&this_00[0x55].field_0x40 = 0xba;
        goto LAB_005c9c8a;
      }
    }
    else {
      switch(uVar14) {
      case 0x6549:
        if (*(char *)(this_00 + 1) == '\x01') {
          DAT_00808a8f = DAT_00808a8f == '\0';
          uVar5 = *(undefined4 *)&this_00[0x54].field_0x29;
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
          (**(code **)(*(int *)this_00 + 0x2c))();
        }
        break;
      case 0x654a:
        if (*(char *)(this_00 + 1) == '\x01') {
          DAT_00808a94 = DAT_00808a94 == '\0';
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)&this_00[0x54].field_0x2d,
                       (undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x654b:
        if (*(char *)(this_00 + 1) == '\x01') {
          DAT_00808aa9 = DAT_00808aa9 == '\0';
          uVar5 = *(undefined4 *)&this_00[0x54].field_0x31;
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x654c:
        if (*(char *)(this_00 + 1) == '\x01') {
          DAT_00808aaa = DAT_00808aaa == '\0';
          uVar5 = *(undefined4 *)&this_00[0x54].field_0x35;
          *(undefined4 *)&this_00->field_0x2d = 5;
          FUN_006e6080(this_00,2,uVar5,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x654d:
        if (*(char *)(this_00 + 1) == '\x01') {
          DAT_0080734b = DAT_0080734b == '\0';
          DAT_00808aa8 = DAT_0080734b;
          PaintSC(this_00);
        }
      }
    }
    goto cf_switch_join_005CA971;
  }
  switch(uVar14) {
  case 0x6900:
    if (*(char *)(this_00 + 1) == '\x01') {
      *(undefined4 *)&this_00[0x54].field_0x4d = 0x64ff;
      *(int *)&this_00[0x54].field_0x55 = *(int *)(param_1 + 0x10) + -0x68ff;
      *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
      local_8 = (int *)0x3;
      if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
        if (this_00[0x4f].field_0x2c == '\0') {
          local_8 = (int *)0x2;
        }
        else if (this_00[0x4f].field_0x2c == '\x01') {
          local_8 = (int *)0x4;
        }
        else {
          local_8 = (int *)0x7;
        }
      }
      *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
      if (local_8 != (int *)0x0) {
        iVar6 = 2;
        do {
          uVar5 = FUN_006b0140(0x2354,DAT_00807618);
          wsprintfA(&this_00[0x4c].field_0x37,s__d__s_007c2864,iVar6,uVar5);
          *(int *)&this_00[0x4f].field_0xc = iVar6;
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
          iVar11 = iVar6 + -1;
          iVar6 = iVar6 + 1;
        } while (iVar11 < (int)local_8);
      }
      *(undefined4 *)&this_00[0x55].field_0x20 =
           *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
      *(uint *)&this_00[0x55].field_0x18 = (byte)this_00[0x4f].field_0x31 - 2;
      *(undefined4 *)&this_00[0x55].field_0x3c = 0x1a;
      *(undefined4 *)&this_00[0x55].field_0x44 = 0xe0;
      *(undefined4 *)&this_00[0x55].field_0x40 = 0xe2;
LAB_005c9fef:
      iVar6 = DAT_0081176c->field_0034;
      iVar11 = *(int *)(iVar6 + 0xa0);
joined_r0x005c996c:
      if (iVar11 != 0) {
        FUN_00710790(iVar6);
      }
      *(undefined4 *)&this_00[0x55].field_0x1c = *(undefined4 *)(iVar6 + 0x8a);
      (**(code **)(**(int **)&this_00->field_0xc + 8))(0x100ef,0,0,&this_00[0x54].field_0x3d,0);
    }
    break;
  case 0x6901:
    if (*(char *)(this_00 + 1) == '\x01') {
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        local_c = (int *)0x1;
      }
      else {
        local_c = *(int **)(*(int *)&this_00[0x4f].field_0x51 + 0xc);
      }
      *(undefined4 *)&this_00[0x54].field_0x4d = 0x64ff;
      *(int *)&this_00[0x54].field_0x55 = *(int *)(param_1 + 0x10) + -0x68ff;
      *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
      local_8 = (int *)0x0;
      *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
      if (local_c != (int *)0x0) {
        do {
          iVar6 = *(int *)&this_00[0x4f].field_0x51;
          if (local_8 < *(int **)(iVar6 + 0xc)) {
            iVar6 = *(int *)(iVar6 + 8) * (int)local_8 + *(int *)(iVar6 + 0x1c);
          }
          else {
            iVar6 = 0;
          }
          uVar14 = 0xffffffff;
          pcVar8 = (char *)(iVar6 + 0x104);
          do {
            pcVar18 = pcVar8;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar18 = pcVar8 + 1;
            cVar4 = *pcVar8;
            pcVar8 = pcVar18;
          } while (cVar4 != '\0');
          uVar14 = ~uVar14;
          pcVar8 = pcVar18 + -uVar14;
          pcVar18 = &this_00[0x4c].field_0x37;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar18 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar18 = pcVar18 + 1;
          }
          *(int **)&this_00[0x4f].field_0xc = local_8;
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
          local_8 = (int *)((int)local_8 + 1);
        } while (local_8 < local_c);
      }
      *(undefined4 *)&this_00[0x55].field_0x20 =
           *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
      *(undefined4 *)&this_00[0x55].field_0x18 = *(undefined4 *)&this_00[0x4f].field_0x2d;
      *(undefined4 *)&this_00[0x55].field_0x3c = 0x1a;
      *(undefined4 *)&this_00[0x55].field_0x44 = 0xe0;
      *(undefined4 *)&this_00[0x55].field_0x40 = 0x10a;
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        *(undefined4 *)&this_00[0x55].field_0x40 = 0x118;
      }
      iVar6 = DAT_0081176c->field_0034;
      if (*(int *)(iVar6 + 0xa0) != 0) {
        FUN_00710790(iVar6);
      }
      *(undefined4 *)&this_00[0x55].field_0x1c = *(undefined4 *)(iVar6 + 0x8a);
      (**(code **)(**(int **)&this_00->field_0xc + 8))(0x100ef,0,0,&this_00[0x54].field_0x3d,0);
    }
    break;
  case 0x6902:
    if (*(char *)(this_00 + 1) != '\x01') break;
    *(undefined4 *)&this_00[0x54].field_0x4d = 0x64ff;
    *(int *)&this_00[0x54].field_0x55 = *(int *)(param_1 + 0x10) + -0x68ff;
    *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
    *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
    pcVar8 = (char *)FUN_006b0140(0x2355,DAT_00807618);
    uVar14 = 0xffffffff;
    do {
      pcVar18 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar18;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    pcVar8 = pcVar18 + -uVar14;
    pcVar18 = &this_00[0x4c].field_0x37;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar18 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar18 = pcVar18 + 1;
    }
    *(undefined4 *)&this_00[0x4f].field_0xc = 0;
    Library::DKW::TBL::FUN_006ae1c0
              (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
    pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
    uVar14 = 0xffffffff;
    do {
      pcVar18 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar18;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    pcVar8 = pcVar18 + -uVar14;
    pcVar18 = &this_00[0x4c].field_0x37;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar18 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar18 = pcVar18 + 1;
    }
    *(undefined4 *)&this_00[0x4f].field_0xc = 1;
    Library::DKW::TBL::FUN_006ae1c0
              (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
    pcVar8 = (char *)FUN_006b0140(0x2356,DAT_00807618);
    uVar14 = 0xffffffff;
    do {
      pcVar18 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar18;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    pcVar8 = pcVar18 + -uVar14;
    pcVar18 = &this_00[0x4c].field_0x37;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar18 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar18 = pcVar18 + 1;
    }
    *(undefined4 *)&this_00[0x4f].field_0xc = 2;
    Library::DKW::TBL::FUN_006ae1c0
              (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
    *(undefined4 *)&this_00[0x55].field_0x20 =
         *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
    *(uint *)&this_00[0x55].field_0x18 = (uint)(byte)this_00[0x4f].field_0x34;
    *(undefined4 *)&this_00[0x55].field_0x3c = 0x1a;
    *(undefined4 *)&this_00[0x55].field_0x44 = 0xe0;
    *(undefined4 *)&this_00[0x55].field_0x40 = 0x132;
LAB_005c9c8a:
    iVar6 = DAT_0081176c->field_0034;
    iVar11 = *(int *)(iVar6 + 0xa0);
    goto joined_r0x005c964b;
  case 0x6903:
    if (*(char *)(this_00 + 1) == '\x01') {
      *(undefined4 *)&this_00[0x54].field_0x4d = 0x64ff;
      *(int *)&this_00[0x54].field_0x55 = *(int *)(param_1 + 0x10) + -0x68ff;
      *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
      *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
      pcVar8 = (char *)FUN_006b0140(0x234e,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = &this_00[0x4c].field_0x37;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined4 *)&this_00[0x4f].field_0xc = 0;
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
      pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = &this_00[0x4c].field_0x37;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined4 *)&this_00[0x4f].field_0xc = 1;
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
      pcVar8 = (char *)FUN_006b0140(0x234f,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = &this_00[0x4c].field_0x37;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined4 *)&this_00[0x4f].field_0xc = 2;
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
      bVar3 = this_00[0x4f].field_0x32;
      *(undefined4 *)&this_00[0x55].field_0x20 =
           *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
      *(uint *)&this_00[0x55].field_0x18 = (uint)bVar3;
      *(undefined4 *)&this_00[0x55].field_0x3c = 0x1a;
      *(undefined4 *)&this_00[0x55].field_0x44 = 0xe0;
      *(undefined4 *)&this_00[0x55].field_0x40 = 0x15a;
      goto LAB_005c9c8a;
    }
    break;
  case 0x6904:
    if (*(char *)(this_00 + 1) == '\x01') {
      *(undefined4 *)&this_00[0x54].field_0x4d = 0x64ff;
      *(int *)&this_00[0x54].field_0x55 = *(int *)(param_1 + 0x10) + -0x68ff;
      *(undefined4 *)&this_00[0x55].field_0x8 = 0x6500;
      *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc) = 0;
      pcVar8 = (char *)FUN_006b0140(0x234e,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = &this_00[0x4c].field_0x37;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined4 *)&this_00[0x4f].field_0xc = 0;
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
      pcVar8 = (char *)FUN_006b0140(0x234c,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = &this_00[0x4c].field_0x37;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined4 *)&this_00[0x4f].field_0xc = 1;
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
      pcVar8 = (char *)FUN_006b0140(0x234f,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = &this_00[0x4c].field_0x37;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
      *(undefined4 *)&this_00[0x4f].field_0xc = 2;
      Library::DKW::TBL::FUN_006ae1c0
                (*(uint **)&this_00[0x4c].field_0x33,(undefined4 *)&this_00[0x4c].field_0x37);
      bVar3 = this_00[0x4f].field_0x33;
      *(undefined4 *)&this_00[0x55].field_0x20 =
           *(undefined4 *)(*(int *)&this_00[0x4c].field_0x33 + 0xc);
      *(uint *)&this_00[0x55].field_0x18 = (uint)bVar3;
      *(undefined4 *)&this_00[0x55].field_0x3c = 0x1a;
      *(undefined4 *)&this_00[0x55].field_0x44 = 0xe0;
      *(undefined4 *)&this_00[0x55].field_0x40 = 0x182;
      goto LAB_005c9c8a;
    }
    break;
  case 0x6905:
    if (*(char *)(this_00 + 1) == '\x01') {
      DVar9 = timeGetTime();
      *(DWORD *)&this_00[0x4f].field_0x28 = DVar9;
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
    *(undefined4 *)&this_00->field_0x45 = 0x200;
    *(undefined4 *)&this_00->field_0x49 = 0;
    *(undefined4 *)&this_00->field_0x4d = 0x6102;
    *(undefined4 *)&this_00->field_0x51 = 0;
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    *(undefined4 *)&this_00[0x55].field_0x58 = 0x1010101;
    *(undefined2 *)&this_00[0x55].field_0x5c = 0x101;
    this_00[0x55].field_0x5e = 1;
    (**(code **)(*(int *)this_00 + 8))();
    this_01 = *(MMsgTy **)(*(int *)&this_00[0x42].field_0x51 + 0x2e6);
    goto LAB_005c9e75;
  case 0x6947:
    thunk_FUN_005b6350(this_00,0x611f,*(undefined4 *)&this_00[0x4c].field_0x2b,
                       (uint)(byte)this_00[0x4c].field_0x2a);
    (**(code **)(*(int *)this_00 + 8))();
    if (*(int *)(*(int *)&this_00[0x42].field_0x51 + 0x2e6) != 0) {
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      thunk_FUN_005b8f40(*(void **)(*(int *)&this_00[0x42].field_0x51 + 0x2e6),&local_58);
    }
    break;
  case 0x6948:
    DAT_008087a0 = this_00[0x4c].field_0x2a;
    switch(this_00[0x4c].field_0x2a) {
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
    *(undefined4 *)&this_00->field_0x49 = 1;
    *(undefined4 *)&this_00->field_0x4d = 0x60ff;
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x694d:
    thunk_FUN_005b6350(this_00,0x6105,1,0);
    *(undefined4 *)&this_00[0x55].field_0x58 = 0x1010101;
    *(undefined2 *)&this_00[0x55].field_0x5c = 0x101;
    this_00[0x55].field_0x5e = 1;
    this_00[0x55].field_0x5e = 0;
    goto LAB_005c9e62;
  case 0x694f:
    thunk_FUN_005b6350(this_00,0x6109,1,(uint)(this_00[0x4c].field_0x2a == '\x0e'));
    this_00[0x55].field_0x5d = 0;
    this_00[0x55].field_0x5b = 0;
    (**(code **)(*(int *)this_00 + 8))();
    if (*(int *)(*(int *)&this_00[0x42].field_0x51 + 0x2e6) != 0) {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      thunk_FUN_005b8f40(*(void **)(*(int *)&this_00[0x42].field_0x51 + 0x2e6),&local_48);
    }
    break;
  case 0x6951:
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    *(undefined4 *)&this_00[0x55].field_0x58 = 0x1010101;
    *(undefined2 *)&this_00[0x55].field_0x5c = 0x101;
    this_00[0x55].field_0x5e = 1;
LAB_005c9e62:
    (**(code **)(*(int *)this_00 + 8))();
    this_01 = *(MMsgTy **)(*(int *)&this_00[0x42].field_0x51 + 0x2e6);
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
    local_c = *(int **)(*(int *)&this_00[0x4c].field_0x2f + 4);
    local_34 = *(int *)(*(int *)&this_00[0x4c].field_0x2f + 8);
    switch(uVar14) {
    case 0x697f:
      if (this_00[0x4f].field_0x2c == '\0') {
        UVar20 = 0x234b;
        goto LAB_005ca70e;
      }
      if (this_00[0x4f].field_0x2c != '\x01') {
        UVar20 = 0x234d;
        goto LAB_005ca70e;
      }
      goto LAB_005ca619;
    case 0x6980:
      uVar5 = FUN_006b0140(0x2354,DAT_00807618);
      wsprintfA((LPSTR)local_98,s__d__s_007c2864,(uint)(byte)this_00[0x4f].field_0x31,uVar5);
      goto LAB_005ca73b;
    case 0x6981:
      iVar6 = *(int *)&this_00[0x4f].field_0x51;
      if (*(uint *)&this_00[0x4f].field_0x2d < *(uint *)(iVar6 + 0xc)) {
        pcVar8 = (char *)(*(int *)(iVar6 + 8) * *(uint *)&this_00[0x4f].field_0x2d +
                          *(int *)(iVar6 + 0x1c) + 0x104);
      }
      else {
        pcVar8 = (char *)0x104;
      }
      goto LAB_005ca71b;
    case 0x6982:
      if (this_00[0x4f].field_0x34 == '\0') {
        UVar20 = 0x2355;
      }
      else {
        if (this_00[0x4f].field_0x34 == '\x01') goto LAB_005ca619;
        UVar20 = 0x2356;
      }
      goto LAB_005ca70e;
    case 0x6983:
      cVar4 = this_00[0x4f].field_0x32;
      break;
    default:
      cVar4 = this_00[0x4f].field_0x33;
    }
    if (cVar4 == '\0') {
      UVar20 = 0x234e;
    }
    else if (cVar4 == '\x01') {
LAB_005ca619:
      UVar20 = 0x234c;
    }
    else {
      UVar20 = 0x234f;
    }
LAB_005ca70e:
    pcVar8 = (char *)FUN_006b0140(UVar20,DAT_00807618);
LAB_005ca71b:
    uVar14 = 0xffffffff;
    do {
      pcVar18 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar18;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    puVar13 = (uint *)(pcVar18 + -uVar14);
    puVar19 = local_98;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar19 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar19 = puVar19 + 1;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(char *)puVar19 = (char)*puVar13;
      puVar13 = (uint *)((int)puVar13 + 1);
      puVar19 = (uint *)((int)puVar19 + 1);
    }
LAB_005ca73b:
    piVar16 = local_8;
    local_30 = *local_8 + -10;
    local_28 = local_8[2];
    local_2c = local_8[1] + -0xb4;
    local_24 = local_8[3];
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)((int)&this_00[0x47].field_0061 + 3),&local_30,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    thunk_FUN_00540760(*(undefined4 **)((int)&this_00[0x47].field_0061 + 3),
                       (local_28 - (int)local_c) + -8 + local_30,
                       (local_24 - local_34) / 2 + local_2c,'\x06',
                       *(byte **)&this_00[0x4c].field_0x2f);
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,
                     *(int *)((int)&this_00[0x47].field_0061 + 3),0,*piVar16 + -10,
                     piVar16[1] + -0xb4,(piVar16[2] - (int)local_c) + -8,piVar16[3]);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,local_98,-1,-1,iVar6);
    FUN_006b35d0(DAT_008075a8,*(uint *)&this_00[0x4f].field_0x55);
    if (*(short *)(param_1 + 0x14) == 3) goto LAB_005ca964;
    break;
  case 0x6985:
    piVar16 = *(int **)(param_1 + 0x18);
    FUN_006c7610(*(int *)((int)&this_00[0x47].field_0061 + 3),0,*piVar16 + -10,piVar16[1] + -0xb4,
                 piVar16[2],piVar16[3],piVar16[3] / 2,0x67);
    FUN_006c7570(*(int *)((int)&this_00[0x47].field_0061 + 3),0,*piVar16 + -8,piVar16[1] + -0xb2,
                 (undefined4 *)(piVar16[2] + -4),piVar16[3] + -4,piVar16[3] / 2 + -2,
                 (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23);
    FUN_006c7570(*(int *)((int)&this_00[0x47].field_0061 + 3),0,*piVar16 + -10,piVar16[1] + -0xb4,
                 (undefined4 *)piVar16[2],piVar16[3],piVar16[3] / 2,
                 (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23);
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0030,
                     *(int *)((int)&this_00[0x47].field_0061 + 3),0,*piVar16 + -10,
                     piVar16[1] + -0xb4,piVar16[2],piVar16[3]);
    iVar6 = (*(short *)(param_1 + 0x14) != 1) + 5;
    iVar21 = -1;
    iVar11 = -1;
    puVar13 = (uint *)FUN_006b0140(0x234a,DAT_00807618);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0030,puVar13,iVar11,iVar21,iVar6);
    if (*(short *)(param_1 + 0x14) != 3) break;
LAB_005ca964:
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
cf_switch_join_005CA971:
  uVar14 = *(uint *)(param_1 + 0x10);
  if ((uVar14 < 0x657f) || (0x658c < uVar14)) goto LAB_005cae3e;
  piVar16 = *(int **)(param_1 + 0x18);
  local_14 = piVar16[2];
  local_10 = piVar16[3];
  local_1c = *piVar16 + -0x112;
  local_18 = piVar16[1] + -0x149;
  MMObjTy::PaintButDib
            ((MMObjTy *)this_00,*(int *)&this_00[0x4c].field_0x22,&local_1c,2,
             (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
  switch(uVar14) {
  case 0x657f:
    cVar4 = this_00[0x4c].field_0x2a;
    if (((cVar4 == '\x06') || (cVar4 == '\x01')) || (piVar16 = DAT_0080c502, cVar4 == '\x02')) {
      piVar16 = DAT_0080c506;
    }
    if (*(uint *)&this_00[0x47].field_0x5c < (uint)piVar16[3]) {
      if (((cVar4 == '\x06') || (cVar4 == '\x01')) || (piVar16 = DAT_0080c502, cVar4 == '\x02')) {
        piVar16 = DAT_0080c506;
      }
      if (((cVar4 == '\x06') || (cVar4 == '\x01')) || (piVar7 = DAT_0080c502, cVar4 == '\x02')) {
        piVar7 = DAT_0080c506;
      }
      pcVar8 = (char *)(piVar7[2] * *(uint *)&this_00[0x47].field_0x5c + piVar16[7]);
    }
    else {
      pcVar8 = (char *)0x0;
    }
    if (pcVar8 == (char *)0x0) {
      pcVar8 = &DAT_008016a0;
    }
    uVar14 = 0xffffffff;
    do {
      pcVar18 = pcVar8;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar18 = pcVar8 + 1;
      cVar4 = *pcVar8;
      pcVar8 = pcVar18;
    } while (cVar4 != '\0');
    uVar14 = ~uVar14;
    pcVar8 = pcVar18 + -uVar14;
    pcVar18 = (char *)&DAT_0080f33a;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar18 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar18 = pcVar18 + 1;
    }
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_00[0x4c].field_0x22,0,
                     local_1c,local_18,local_14,local_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar6);
    break;
  case 0x6582:
  case 0x6583:
  case 0x6584:
  case 0x6585:
    switch(uVar14) {
    case 0x6582:
      cVar4 = DAT_00808a90._1_1_;
      if (DAT_00808a90._1_1_ == '\0') {
        local_20 = 0x234e;
      }
      else {
LAB_005cab38:
        local_20 = (-(uint)(cVar4 != '\x01') & 3) + 0x234c;
      }
      break;
    case 0x6583:
      cVar4 = (char)DAT_00808a90;
      if ((char)DAT_00808a90 != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6584:
      cVar4 = DAT_00808a90._2_1_;
      if (DAT_00808a90._2_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6585:
      cVar4 = DAT_00808a90._3_1_;
      if (DAT_00808a90._3_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
    }
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_00[0x4c].field_0x22,0,
                     local_1c,local_18,local_14,local_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    iVar21 = -1;
    iVar11 = -1;
    puVar13 = (uint *)FUN_006b0140(local_20,DAT_00807618);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar13,iVar11,iVar21,iVar6);
    break;
  case 0x6586:
    if (DAT_00808a97 == -1) {
      pcVar8 = (char *)FUN_006b0140(0x1f55,DAT_00807618);
      uVar14 = 0xffffffff;
      do {
        pcVar18 = pcVar8;
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        pcVar18 = pcVar8 + 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar18;
      } while (cVar4 != '\0');
      uVar14 = ~uVar14;
      pcVar8 = pcVar18 + -uVar14;
      pcVar18 = (char *)&DAT_0080f33a;
      for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *pcVar18 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar18 = pcVar18 + 1;
      }
    }
    else {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,DAT_00808a97);
    }
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_00[0x4c].field_0x22,0,
                     local_1c,local_18,local_14,local_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar6);
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
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_00[0x4c].field_0x22,0,
                     local_1c,local_18,local_14,local_10);
    if (*(short *)(param_1 + 0x14) == 1) {
      iVar6 = 2;
    }
    else {
      iVar6 = (-(uint)(*(short *)(param_1 + 0x14) != 0) & 2) + 1;
    }
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar6);
    break;
  case 0x6588:
    cVar4 = DAT_00808a95;
    goto LAB_005cad88;
  case 0x6589:
    if (DAT_00808a8f == '\0') break;
LAB_005cadd5:
    pbVar10 = (byte *)FUN_0070b3a0(*(int *)&this_00[0x4f].field_0x24,0);
    iVar6 = (local_10 + -0x10) / 2 + local_18;
    puVar17 = *(undefined4 **)&this_00[0x4c].field_0x22;
    iVar11 = (local_14 + -0x11) / 2 + local_1c;
    goto cf_common_exit_005CAE0F;
  case 0x658a:
    if (DAT_00808a94 != '\0') {
      pbVar10 = (byte *)FUN_0070b3a0(*(int *)&this_00[0x4f].field_0x24,0);
      iVar6 = (local_10 + -0x10) / 2 + local_18;
      iVar11 = (local_14 + -0x11) / 2 + local_1c;
      puVar17 = *(undefined4 **)&this_00[0x4c].field_0x22;
      goto cf_common_exit_005CAE0F;
    }
    break;
  case 0x658b:
    cVar4 = DAT_00808aa9;
LAB_005cad88:
    if (cVar4 != '\0') {
      pbVar10 = (byte *)FUN_0070b3a0(*(int *)&this_00[0x4f].field_0x24,0);
      iVar6 = (local_10 + -0x10) / 2 + local_18;
      iVar11 = (local_14 + -0x11) / 2 + local_1c;
      puVar17 = *(undefined4 **)&this_00[0x4c].field_0x22;
cf_common_exit_005CAE0F:
      thunk_FUN_00540760(puVar17,iVar11,iVar6,'\x06',pbVar10);
    }
    break;
  case 0x658c:
    if (DAT_00808aaa != '\0') goto LAB_005cadd5;
  }
  FUN_006b35d0(DAT_008075a8,*(uint *)&this_00[0x4c].field_0x26);
  if (*(short *)(param_1 + 0x14) == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
LAB_005cae3e:
  g_currentExceptionFrame = local_dc.previous;
  uVar5 = MMObjTy::GetMessage((MMObjTy *)this_00,param_1);
  return uVar5;
}


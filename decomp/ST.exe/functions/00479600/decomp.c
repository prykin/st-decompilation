
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Teleport */

int __thiscall STBoatC::Teleport(STBoatC *this,int param_1)

{
  short *psVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  STBoatC_field_06F7State SVar5;
  code *pcVar6;
  bool bVar7;
  undefined2 uVar8;
  int iVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  int *extraout_ECX;
  short sVar15;
  int iVar16;
  undefined2 extraout_var_02;
  longlong lVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  int iVar23;
  short sVar24;
  byte bVar25;
  uint uVar26;
  undefined4 local_30 [2];
  undefined4 local_28;
  short local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar12 = &this->field_02CC;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    this->field_02C4 = 0;
    this->field_0635 = *(undefined4 *)&this->field_0x405;
    this->field_0639 = *(undefined2 *)&this->field_0x409;
    this->field_063B = *(undefined2 *)&this->field_0x40b;
    this->field_063D = *(undefined2 *)&this->field_0x40d;
    this->field_0643 = *(undefined2 *)&this->field_0x40f;
    this->field_0645 = *(undefined2 *)&this->field_0x411;
    this->field_0647 = *(undefined2 *)&this->field_0x413;
    *(undefined4 *)&this->field_0x64d = 0;
    iVar9 = (*this->vtable->vfunc_D8)();
    if (iVar9 != 0) {
      return -1;
    }
    iVar9 = this->field_0635;
    if (iVar9 == 0) {
      sVar18 = this->field_0639;
      sVar19 = this->field_063D;
      sVar15 = this->field_063B;
      if (((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar15 < 0)) ||
          ((DAT_007fb242 <= sVar15 || (sVar19 < 0)))) || (DAT_007fb244 <= sVar19)) {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = *(int **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar19 + (int)sVar15 * (int)DAT_007fb240 +
                           (int)sVar18) * 8);
      }
      if (local_8 == (int *)0x0) {
        return 0;
      }
      iVar9 = (**(code **)(*local_8 + 0x2c))();
      if (iVar9 != 0x37) {
        return 0;
      }
      this->field_063F = local_8[6];
    }
    else {
      if (iVar9 != 1) {
        if (iVar9 != 2) {
          iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x351b,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Teleport_invalid_type_o_007ab3ac);
          if (iVar9 == 0) {
            return 0;
          }
          pcVar6 = (code *)swi(3);
          iVar9 = (*pcVar6)();
          return iVar9;
        }
        uVar11 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
        psVar1 = (short *)((int)&this->field_065A + 1);
        *(uint *)&this->field_0x1c = uVar11;
        puVar2 = &this->field_0x657;
        thunk_FUN_004b2520(*(uint *)&this->field_0x24,this->field_06F7,(int)(short)this->field_0643,
                           (int)(short)this->field_0645,(int)(short)this->field_0647,
                           (undefined4 *)puVar2,(undefined4 *)&this->field_0x659,
                           (undefined4 *)psVar1,uVar11 >> 0x10,(int *)&this->field_0x64d);
        if (*(short *)puVar2 < 0) {
          return 0;
        }
        if (*(short *)&this->field_0x659 < 0) {
          return 0;
        }
        if (*psVar1 < 0) {
          return 0;
        }
        *(undefined4 *)&this->field_0x742 = 1;
        this->field_063F = 0;
        this->field_0649 = 0;
        if (DAT_00800bcc == (void *)0x0) {
          thunk_FUN_004d0f00();
        }
        thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)puVar2,(int)*(short *)&this->field_0x659,
                           (int)*psVar1);
        *(undefined4 *)&this->field_0x663 = 5;
        *(undefined4 *)((int)&this->field_0666 + 1) = 0;
        return 2;
      }
      sVar18 = this->field_0639;
      sVar19 = this->field_063D;
      sVar15 = this->field_063B;
      if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
         ((sVar15 < 0 || (((DAT_007fb242 <= sVar15 || (sVar19 < 0)) || (DAT_007fb244 <= sVar19))))))
      {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = *(int **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar19 + (int)sVar15 * (int)DAT_007fb240 +
                           (int)sVar18) * 8);
      }
      if (local_8 == (int *)0x0) {
        return 0;
      }
      iVar9 = (**(code **)(*local_8 + 0x2c))();
      if (iVar9 != 0x6c) {
        return 0;
      }
      this->field_063F = local_8[6];
      sVar18 = this->field_0643;
      sVar19 = this->field_0647;
      sVar15 = this->field_0645;
      if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
         (((sVar15 < 0 || ((DAT_007fb242 <= sVar15 || (sVar19 < 0)))) || (DAT_007fb244 <= sVar19))))
      {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = *(int **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar19 + (int)sVar15 * (int)DAT_007fb240 +
                           (int)sVar18) * 8);
      }
      if (local_8 == (int *)0x0) {
        return 0;
      }
      iVar9 = (**(code **)(*local_8 + 0x2c))();
      if (iVar9 != 0x6c) {
        return 0;
      }
      this->field_0649 = local_8[6];
    }
    *(undefined4 *)&this->field_0x663 = 0;
    *(undefined4 *)((int)&this->field_0666 + 1) = 0;
    this->field_00B7 = 3;
    thunk_FUN_00481520(this,(int)(short)this->field_0639,(int)(short)this->field_063B,
                       (short)this->field_063D + 1);
  }
  else {
    iVar9 = *(int *)&this->field_0x663;
    if (iVar9 == 0) {
      iVar9 = thunk_FUN_00460260(this,2);
      switch(iVar9) {
      case 0:
        this->field_00B7 = 0;
        if (this->field_0635 == 1) {
          sVar18 = this->field_0643;
          sVar19 = this->field_0647;
          sVar15 = this->field_0645;
          if ((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
              ((sVar15 < 0 || ((DAT_007fb242 <= sVar15 || (sVar19 < 0)))))) ||
             (DAT_007fb244 <= sVar19)) {
            local_8 = (int *)0x0;
          }
          else {
            local_8 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar19 + (int)sVar15 * (int)DAT_007fb240 +
                               (int)sVar18) * 8);
          }
          if (local_8 == (int *)0x0) {
            return 0;
          }
          if (local_8[6] != this->field_0649) {
            return 0;
          }
          iVar9 = (**(code **)(*local_8 + 0xf8))();
          if (iVar9 == 0) {
            return 0;
          }
        }
        sVar18 = this->field_0639;
        sVar19 = this->field_063D;
        sVar15 = this->field_063B;
        if (((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar15 < 0)) ||
            ((DAT_007fb242 <= sVar15 || (sVar19 < 0)))) || (DAT_007fb244 <= sVar19)) {
          local_8 = (int *)0x0;
        }
        else {
          local_8 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar19 + (int)sVar15 * (int)DAT_007fb240 +
                             (int)sVar18) * 8);
        }
        if (local_8 == (int *)0x0) {
          return 0;
        }
        if (local_8[6] != this->field_063F) {
          return 0;
        }
        iVar9 = (**(code **)(*local_8 + 0xf8))();
        if (iVar9 == 0) {
          return 0;
        }
        bVar7 = thunk_FUN_004939b0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                                   (short *)&this->field_0x655);
        if ((CONCAT31(extraout_var,bVar7) != 1) ||
           (iVar9 = thunk_FUN_004e91e0(local_8,(int *)this), iVar9 != 1)) {
LAB_00479e39:
          *(undefined4 *)&this->field_0x663 = 1;
          *(undefined4 *)((int)&this->field_065A + 3) = 0;
          iVar9 = Defence(this,0);
          if (iVar9 != -1) {
            return 2;
          }
          return -1;
        }
        *(undefined4 *)&this->field_0x663 = 2;
LAB_0047b2dc:
        iVar9 = (int)*(short *)&this->field_0x655;
        sVar19 = *(short *)&this->field_0x653;
        sVar18 = *(short *)&this->field_0x651;
        break;
      case 1:
        sVar18 = this->field_0639;
        sVar19 = this->field_063D;
        sVar15 = this->field_063B;
        if ((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
            ((sVar15 < 0 || ((DAT_007fb242 <= sVar15 || (sVar19 < 0)))))) ||
           (DAT_007fb244 <= sVar19)) {
          local_8 = (int *)0x0;
        }
        else {
          local_8 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar19 + (int)sVar15 * (int)DAT_007fb240 +
                             (int)sVar18) * 8);
        }
        if (((local_8 != (int *)0x0) && (local_8[6] == this->field_063F)) &&
           (iVar9 = (**(code **)(*local_8 + 0xf8))(), iVar9 != 0)) {
          if (this->field_0635 != 1) {
            return 2;
          }
          sVar18 = this->field_0643;
          sVar19 = this->field_0647;
          sVar15 = this->field_0645;
          if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
             (((sVar15 < 0 || ((DAT_007fb242 <= sVar15 || (sVar19 < 0)))) ||
              (DAT_007fb244 <= sVar19)))) {
            local_8 = (int *)0x0;
          }
          else {
            local_8 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar19 + (int)sVar15 * (int)DAT_007fb240 +
                               (int)sVar18) * 8);
          }
          if (((local_8 != (int *)0x0) && (local_8[6] == this->field_0649)) &&
             (iVar9 = (**(code **)(*local_8 + 0xf8))(), iVar9 != 0)) {
            return 2;
          }
        }
        thunk_FUN_004602b0((int *)this);
        this->field_00B7 = 0;
        return 0;
      default:
        goto switchD_00479647_caseD_2;
      case 3:
        sVar19 = this->field_063B;
        sVar18 = this->field_0639;
        iVar9 = (short)this->field_063D + 1;
        break;
      case -1:
        iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3525,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Teleport__TELEPORT_MOVE_007ab4f8);
        if (iVar9 != 0) {
          pcVar6 = (code *)swi(3);
          iVar9 = (*pcVar6)();
          return iVar9;
        }
        iVar9 = 0x3525;
LAB_00479ba6:
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar9);
        return 0xffff;
      }
    }
    else {
      if (iVar9 == 1) {
        *(int *)((int)&this->field_065A + 3) = *(int *)((int)&this->field_065A + 3) + 1;
        iVar9 = Defence(this,2);
        if (iVar9 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_048B != 0xffff) {
          return 2;
        }
        if (*(int *)((int)&this->field_065A + 3) % 10 != 0) {
          return 2;
        }
        if (this->field_0635 == 1) {
          sVar18 = this->field_0643;
          sVar19 = this->field_0647;
          sVar15 = this->field_0645;
          if (((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar15 < 0)) ||
              ((DAT_007fb242 <= sVar15 || (sVar19 < 0)))) || (DAT_007fb244 <= sVar19)) {
            local_8 = (int *)0x0;
          }
          else {
            local_8 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar19 + (int)sVar15 * (int)DAT_007fb240 +
                               (int)sVar18) * 8);
          }
          if (local_8 == (int *)0x0) {
            return 0;
          }
          if (local_8[6] != this->field_0649) {
            return 0;
          }
          iVar9 = (**(code **)(*local_8 + 0xf8))();
          if (iVar9 == 0) {
            return 0;
          }
        }
        sVar18 = this->field_0639;
        sVar19 = this->field_063D;
        sVar15 = this->field_063B;
        if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
           ((sVar15 < 0 || (((DAT_007fb242 <= sVar15 || (sVar19 < 0)) || (DAT_007fb244 <= sVar19))))
           )) {
          local_8 = (int *)0x0;
        }
        else {
          local_8 = *(int **)(DAT_007fb248 +
                             ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240 +
                             (int)sVar18) * 8);
        }
        if (local_8 == (int *)0x0) {
          return 0;
        }
        if (local_8[6] != this->field_063F) {
          return 0;
        }
        iVar9 = (**(code **)(*local_8 + 0xf8))();
        if (iVar9 == 0) {
          return 0;
        }
        bVar7 = thunk_FUN_004939b0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                                   (short *)&this->field_0x655);
        if (CONCAT31(extraout_var_00,bVar7) != 1) {
          return 2;
        }
        iVar9 = thunk_FUN_004e91e0(local_8,(int *)this);
        if (iVar9 != 1) {
          return 2;
        }
        *(undefined4 *)&this->field_0x663 = 2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 != 3) {
            if (iVar9 == 4) {
              if (*(int *)((int)&this->field_0666 + 1) == 0) {
                SVar5 = this->field_06F7;
                if ((((SVar5 == CASE_7) || (SVar5 == CASE_13)) || (SVar5 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar9 = FUN_006e62d0(DAT_00802a38,this->field_07CA,(int *)&local_8),
                    iVar9 != -4)))) {
                  iVar23 = (int)(short)this->field_0045;
                  iVar9 = (int)(short)this->field_0043;
                  iVar10 = (int)(short)this->field_0041;
                  uVar26 = 0;
                  iVar13 = 0;
                  uVar11 = thunk_FUN_004ad650((int)local_8 + 0x1d5);
                }
                else {
                  iVar23 = (int)(short)this->field_0045;
                  iVar9 = (int)(short)this->field_0043;
                  iVar10 = (int)(short)this->field_0041;
                  uVar26 = 0;
                  uVar11 = *(uint *)&this->field_0x1ed;
                  iVar13 = 0;
                }
                thunk_FUN_006377b0(uVar11,iVar13,iVar10,iVar9,iVar23,uVar26);
                *(undefined4 *)((int)&this->field_0666 + 1) = 1;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 1) &&
                 (iVar9 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar9, iVar9 == 0x16)) {
                *(undefined4 *)((int)&this->field_0666 + 1) = 2;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
                thunk_FUN_0041c5a0((int *)this);
                if (((this->field_06F7 == CASE_B) || (this->field_06F7 == CASE_23)) &&
                   ((*(int *)&this->field_0x21d == 1 &&
                    (*(uint *)&this->field_0x24 == (uint)DAT_0080874d)))) {
                  FUN_006e6780(*(void **)&this->field_0x211,
                               CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                                        *(undefined2 *)&this->field_0018));
                }
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,
                                   (int)*(short *)((int)&this->field_065A + 1));
                thunk_FUN_00417a20(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   *(short *)((int)&this->field_065A + 1),1);
                sVar18 = (this->field_0643 + 1) * 0xc9;
                this->field_0041 = sVar18;
                sVar19 = (this->field_0645 + 1) * 0xc9;
                sVar15 = this->field_0647 * 200 + 300;
                this->field_0043 = sVar19;
                this->field_0045 = sVar15;
                local_20 = (int)sVar18;
                thunk_FUN_004ad3c0(&this->field_01D5,(float)local_20 * _DAT_007904f8 * _DAT_007904f0
                                   ,(float)(int)sVar19 * _DAT_007904f8 * _DAT_007904f0,
                                   (float)(int)sVar15 * _DAT_007904f8 * _DAT_007904f0);
                thunk_FUN_0041c3f0(this,*(undefined **)&this->field_0x70a);
                SVar5 = this->field_06F7;
                if ((((SVar5 == CASE_7) || (SVar5 == CASE_13)) || (SVar5 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar9 = FUN_006e62d0(DAT_00802a38,this->field_07CA,(int *)&local_8),
                    iVar9 != -4)))) {
                  iVar10 = (int)(short)this->field_0045;
                  iVar9 = (int)(short)this->field_0043;
                  iVar23 = (int)(short)this->field_0041;
                  uVar26 = 0;
                  iVar13 = 0;
                  uVar11 = thunk_FUN_004ad650((int)local_8 + 0x1d5);
                  thunk_FUN_006377b0(uVar11,iVar13,iVar23,iVar9,iVar10,uVar26);
                  thunk_FUN_004ad430((int)local_8 + 0x1d5);
                }
                else {
                  thunk_FUN_006377b0(*(uint *)&this->field_0x1ed,0,(int)(short)this->field_0041,
                                     (int)(short)this->field_0043,(int)(short)this->field_0045,0);
                }
                thunk_FUN_004ad430((int)&this->field_01D5);
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 2) &&
                 (iVar9 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar9, iVar9 == 0x16)) {
                *(undefined4 *)((int)&this->field_0666 + 1) = 3;
                SVar5 = this->field_06F7;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
                if (((SVar5 == CASE_7) || ((SVar5 == CASE_13 || (SVar5 == CASE_1B)))) &&
                   ((this->field_07CA != 0 &&
                    (iVar9 = FUN_006e62d0(DAT_00802a38,this->field_07CA,(int *)&local_8),
                    iVar9 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)local_8 + 0x1d5),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
                if ((((this->field_06F7 == CASE_B) || (this->field_06F7 == CASE_23)) &&
                    (*(int *)&this->field_0x21d == 1)) &&
                   (*(uint *)&this->field_0x24 == (uint)DAT_0080874d)) {
                  local_20 = (int)(short)this->field_0041;
                  FUN_006e6710(*(void **)&this->field_0x211,
                               (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)(short)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
                               (float)*(int *)&this->field_0x10d * _DAT_007904f8 + _DAT_007904f4,
                               0x28,CONCAT22(CONCAT11(2,(char)((uint)this->field_0018 >> 0x10)),
                                             *(undefined2 *)&this->field_0018));
                }
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 3) &&
                 (iVar9 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar9, iVar9 == 10)) {
                *(undefined4 *)&this->field_0x663 = 6;
                *(undefined4 *)((int)&this->field_0666 + 1) = 0;
                *(undefined4 *)&this->field_0x742 = 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar9 == 5) {
              if (*(int *)((int)&this->field_0666 + 1) == 0) {
                SVar5 = this->field_06F7;
                if ((((SVar5 == CASE_7) || (SVar5 == CASE_13)) || (SVar5 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar9 = FUN_006e62d0(DAT_00802a38,this->field_07CA,(int *)&local_8),
                    iVar9 != -4)))) {
                  iVar23 = (int)(short)this->field_0045;
                  iVar9 = (int)(short)this->field_0043;
                  iVar10 = (int)(short)this->field_0041;
                  uVar26 = 0;
                  iVar13 = 0;
                  uVar11 = thunk_FUN_004ad650((int)local_8 + 0x1d5);
                }
                else {
                  iVar23 = (int)(short)this->field_0045;
                  iVar9 = (int)(short)this->field_0043;
                  iVar10 = (int)(short)this->field_0041;
                  uVar26 = 0;
                  uVar11 = *(uint *)&this->field_0x1ed;
                  iVar13 = 0;
                }
                thunk_FUN_006377b0(uVar11,iVar13,iVar10,iVar9,iVar23,uVar26);
                *(undefined4 *)((int)&this->field_0666 + 1) = 1;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 1) &&
                 (iVar9 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar9, iVar9 == 0x16)) {
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
                *(undefined4 *)((int)&this->field_0666 + 1) = 2;
                if (this->field_0635 == 2) {
                  iVar9 = *(int *)&this->field_0x71e + -10;
                  *(int *)&this->field_0x71e = iVar9;
                  if (iVar9 < 0) {
                    *(undefined4 *)&this->field_0x71e = 0;
                  }
                  if ((*(int *)&this->field_0x64d != 0) && (DAT_00811798 != (void *)0x0)) {
                    thunk_FUN_00620670(DAT_00811798,(int)(short)this->field_0047,
                                       (int)(short)this->field_0049,*(uint *)&this->field_0x24);
                  }
                  thunk_FUN_004ea6e0(*(uint *)&this->field_0x24,(int)*(short *)&this->field_0x657,
                                     (int)*(short *)&this->field_0x659,
                                     (int)*(short *)((int)&this->field_065A + 1));
                }
                thunk_FUN_0041c5a0((int *)this);
                thunk_FUN_004d0a80(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                   (int)*(short *)&this->field_0x659,
                                   (int)*(short *)((int)&this->field_065A + 1));
                thunk_FUN_00417a20(this,*(short *)&this->field_0x657,*(short *)&this->field_0x659,
                                   *(short *)((int)&this->field_065A + 1),1);
                local_20 = (int)(short)this->field_0041;
                thunk_FUN_004ad3c0(&this->field_01D5,(float)local_20 * _DAT_007904f8 * _DAT_007904f0
                                   ,(float)(int)(short)this->field_0043 * _DAT_007904f8 *
                                    _DAT_007904f0,
                                   (float)(int)(short)this->field_0045 * _DAT_007904f8 *
                                   _DAT_007904f0);
                thunk_FUN_0041c3f0(this,*(undefined **)&this->field_0x70a);
                SVar5 = this->field_06F7;
                if ((((SVar5 == CASE_7) || (SVar5 == CASE_13)) || (SVar5 == CASE_1B)) &&
                   ((this->field_07CA != 0 &&
                    (iVar9 = FUN_006e62d0(DAT_00802a38,this->field_07CA,(int *)&local_8),
                    iVar9 != -4)))) {
                  iVar10 = (int)(short)this->field_0045;
                  iVar9 = (int)(short)this->field_0043;
                  iVar23 = (int)(short)this->field_0041;
                  uVar26 = 0;
                  iVar13 = 0;
                  uVar11 = thunk_FUN_004ad650((int)local_8 + 0x1d5);
                  thunk_FUN_006377b0(uVar11,iVar13,iVar23,iVar9,iVar10,uVar26);
                  thunk_FUN_004ad430((int)local_8 + 0x1d5);
                }
                else {
                  thunk_FUN_006377b0(*(uint *)&this->field_0x1ed,0,(int)(short)this->field_0041,
                                     (int)(short)this->field_0043,(int)(short)this->field_0045,0);
                }
                thunk_FUN_004ad430((int)&this->field_01D5);
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 2) &&
                 (iVar9 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar9, iVar9 == 0x16)) {
                *(undefined4 *)((int)&this->field_0666 + 1) = 3;
                SVar5 = this->field_06F7;
                *(undefined4 *)((int)&this->field_065A + 3) = 0;
                if (((SVar5 == CASE_7) || ((SVar5 == CASE_13 || (SVar5 == CASE_1B)))) &&
                   ((this->field_07CA != 0 &&
                    (iVar9 = FUN_006e62d0(DAT_00802a38,this->field_07CA,(int *)&local_8),
                    iVar9 != -4)))) {
                  thunk_FUN_004ad460((void *)((int)local_8 + 0x1d5),0);
                }
                thunk_FUN_004ad460(&this->field_01D5,0);
              }
              if ((*(int *)((int)&this->field_0666 + 1) == 3) &&
                 (iVar9 = *(int *)((int)&this->field_065A + 3) + 1,
                 *(int *)((int)&this->field_065A + 3) = iVar9, iVar9 == 10)) {
                sVar18 = this->field_0639;
                sVar19 = this->field_063D;
                sVar15 = this->field_063B;
                *(undefined4 *)&this->field_0x742 = 0;
                if ((sVar18 < 0) ||
                   ((((DAT_007fb240 <= sVar18 || (sVar15 < 0)) || (DAT_007fb242 <= sVar15)) ||
                    ((sVar19 < 0 || (DAT_007fb244 <= sVar19)))))) {
                  local_8 = (int *)0x0;
                }
                else {
                  local_8 = *(int **)(DAT_007fb248 +
                                     ((int)sVar19 * (int)DAT_007fb246 +
                                      (int)sVar15 * (int)DAT_007fb240 + (int)sVar18) * 8);
                }
                if (((local_8 != (int *)0x0) && (local_8[6] == this->field_063F)) &&
                   (iVar9 = (**(code **)(*local_8 + 0xf8))(), iVar9 != 0)) {
                  thunk_FUN_004e95c0(local_8,(int)this);
                }
                iVar9 = (*this->vtable->vfunc_D8)();
                if (iVar9 != 0) {
                  return -1;
                }
LAB_0047acdc:
                iVar9 = thunk_FUN_004b2d10((byte)*(undefined4 *)&this->field_0x24,this->field_06F7,
                                           (int)(short)this->field_005B,(int)(short)this->field_005D
                                          );
                if (iVar9 == 0) {
                  return 0;
                }
                thunk_FUN_00495010(this,0xaf);
                return 0;
              }
              goto cf_common_exit_0047ADB5;
            }
            if (iVar9 != 6) {
              if (iVar9 != 7) {
                iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3744,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Teleport___incorrect_en_007ab3e8
                                          );
                if (iVar9 == 0) {
                  return -1;
                }
                pcVar6 = (code *)swi(3);
                iVar9 = (*pcVar6)();
                return iVar9;
              }
              iVar9 = thunk_FUN_00460260(this,2);
              if (iVar9 == -1) {
                return -1;
              }
              if (iVar9 == 0) goto LAB_0047acdc;
              if (iVar9 != 3) {
                return 2;
              }
              iVar23 = CONCAT22(extraout_var_02,*(undefined2 *)&this->field_0x651);
              uVar11 = (uint)(ushort)(*(short *)&this->field_0x655 + 1);
              iVar9 = CONCAT22((short)((uint)&this->field_0x651 >> 0x10),
                               *(undefined2 *)&this->field_0x653);
              thunk_FUN_0048dfd0(iVar23,iVar9,uVar11,iVar23,iVar9,(int *)uVar11,1,
                                 (short *)&this->field_0x651,(short *)&this->field_0x653,
                                 (short *)&this->field_0x655);
              goto LAB_0047b2dc;
            }
            if (*(int *)((int)&this->field_0666 + 1) == 0) {
              iVar9 = (ushort)(*(short *)((int)&this->field_065A + 1) * 200) + 100;
              iVar10 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x659 * 0xc9) +
                       100;
              iVar23 = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)&this->field_0x657 * 0xc9) +
                       100;
              uVar8 = (undefined2)((uint)iVar10 >> 0x10);
              uVar8 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar8,this->field_0041),
                                 CONCAT22((short)((uint)iVar23 >> 0x10),this->field_0043),
                                 CONCAT22(uVar8,this->field_0045),iVar23,iVar10,iVar9);
              *(undefined2 *)((int)&this->field_065E + 3) = uVar8;
              *(undefined4 *)((int)&this->field_0666 + 1) = 1;
            }
            iVar9 = *(int *)((int)&this->field_0666 + 1);
            if (iVar9 == 1) {
              uVar11 = thunk_FUN_004176c0(this,*(short *)((int)&this->field_065E + 3));
              uVar11 = thunk_FUN_00417910(this,(short)uVar11);
              if (uVar11 == 0xffffffff) {
                iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x36e3,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_OMOVE_007ab440
                                          );
                if (iVar9 == 0) {
                  return -1;
                }
                pcVar6 = (code *)swi(3);
                iVar9 = (*pcVar6)();
                return iVar9;
              }
              goto joined_r0x0047ada9;
            }
            if (iVar9 == 2) {
              thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                                 *(short *)&this->field_0x657 * 0xc9 + 100,
                                 *(short *)&this->field_0x659 * 0xc9 + 100,
                                 *(short *)((int)&this->field_065A + 1) * 200 + 100,this->field_0x61
                                );
              *(undefined4 *)((int)&this->field_0666 + 1) = 3;
            }
            if (*(int *)((int)&this->field_0666 + 1) != 3) goto cf_common_exit_0047ADB5;
            local_14 = thunk_FUN_00415ed0(this,&local_18,&local_1c);
            uVar11 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
            *(uint *)&this->field_0x1c = uVar11;
            iVar9 = (uVar11 >> 0x10) % 7 - 3;
            uVar11 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
            *(uint *)&this->field_0x1c = uVar11;
            uVar26 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
            *(uint *)&this->field_0x1c = uVar26;
            local_20 = (uVar26 >> 0x10) % 7 - 3;
            if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
               (local_c = 0, this->field_0x2bf != '\0')) {
              local_10 = (undefined4 *)&this->field_0x2b3;
              do {
                puVar12 = (undefined4 *)
                          thunk_FUN_0041dc40(local_30,*local_10,*(undefined2 *)(local_10 + 1),
                                             *(short *)&this->field_0x6c);
                uVar4 = *puVar12;
                bVar25 = 0;
                sVar24 = 0;
                iVar23 = -1;
                local_24 = *(short *)(puVar12 + 1);
                sVar22 = 0;
                sVar21 = 0;
                sVar20 = 0;
                sVar15 = 0;
                sVar19 = 0;
                sVar18 = 0;
                local_28 = uVar4;
                if (DAT_0080732c == 1) {
                  sVar18 = 0;
                  sVar19 = 0;
                  sVar15 = 0;
                  sVar20 = 0;
                  sVar21 = 0;
                  sVar22 = 0;
                  sVar24 = 0;
                  bVar25 = 0;
                  lVar17 = Library::MSVCRT::__ftol();
                  iVar16 = (int)local_24 + (short)this->field_0045 + local_20 + (int)(short)lVar17;
                  iVar10 = (int)(short)this->field_0043 - (int)local_28._2_2_;
                  iVar13 = (int)(short)local_28 + iVar9 + (short)this->field_0041;
                }
                else {
                  iVar16 = (int)local_24 + local_20 + (short)this->field_0045;
                  local_28._2_2_ = (short)((uint)uVar4 >> 0x10);
                  iVar10 = (int)(short)this->field_0043 - (int)local_28._2_2_;
                  local_28._0_2_ = (short)uVar4;
                  iVar13 = (int)(short)local_28 + iVar9 + (short)this->field_0041;
                }
                TraksClassTy::TraksCreate
                          (DAT_00802a7c,1,2,7,iVar13,iVar10 + ((uVar11 >> 0x10) % 7 - 3),iVar16,
                           sVar18,sVar19,sVar15,sVar20,sVar21,sVar22,iVar23,sVar24,bVar25);
                local_10 = (undefined4 *)((int)local_10 + 6);
                local_c = local_c + 1;
              } while (local_c < (int)(uint)(byte)this->field_0x2bf);
            }
            if (local_14 == -1) {
              iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x370a,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_OMOVE_007ab414);
              if (iVar9 == 0) {
                return -1;
              }
              pcVar6 = (code *)swi(3);
              iVar9 = (*pcVar6)();
              return iVar9;
            }
            if (local_14 != 0) goto cf_common_exit_0047ADB5;
            sVar18 = this->field_0639;
            iVar9 = 0;
            sVar19 = this->field_063D;
            sVar15 = this->field_063B;
            if ((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar15 < 0)) ||
               (((DAT_007fb242 <= sVar15 || (sVar19 < 0)) || (DAT_007fb244 <= sVar19)))) {
              local_8 = (int *)0x0;
            }
            else {
              iVar9 = (int)sVar18;
              local_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240
                                 + iVar9) * 8);
            }
            if ((local_8 != (int *)0x0) && (iVar9 = local_8[6], iVar9 == this->field_063F)) {
              iVar23 = (**(code **)(*local_8 + 0xf8))();
              iVar9 = 0;
              if (iVar23 != 0) {
                iVar9 = thunk_FUN_004e95c0(local_8,(int)this);
              }
            }
            sVar18 = this->field_0643;
            iVar9 = CONCAT22((short)((uint)iVar9 >> 0x10),sVar18);
            sVar19 = this->field_0647;
            sVar15 = this->field_0645;
            if (((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar15 < 0)) ||
                ((DAT_007fb242 <= sVar15 || (sVar19 < 0)))) || (DAT_007fb244 <= sVar19)) {
              piVar14 = (int *)0x0;
            }
            else {
              iVar9 = (int)sVar18;
              piVar14 = *(int **)(DAT_007fb248 +
                                 ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240
                                 + iVar9) * 8);
            }
            local_8 = piVar14;
            if ((piVar14 == (int *)0x0) || (iVar9 = piVar14[6], iVar9 != this->field_0649)) {
LAB_0047b1c5:
              iVar23 = CONCAT22((short)((uint)piVar14 >> 0x10),this->field_0645);
              uVar11 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0647 + 1);
              iVar9 = CONCAT22((short)((uint)&this->field_0x651 >> 0x10),this->field_0643);
              iVar9 = thunk_FUN_0048dfd0(iVar9,iVar23,uVar11,iVar9,iVar23,(int *)uVar11,2,
                                         (short *)&this->field_0x651,(short *)&this->field_0x653,
                                         (short *)&this->field_0x655);
joined_r0x0047b202:
              if (iVar9 == 0) {
                *(undefined2 *)&this->field_0x651 = this->field_0047;
                *(undefined2 *)&this->field_0x653 = this->field_0049;
                *(undefined2 *)&this->field_0x655 = this->field_004B;
              }
            }
            else {
              iVar23 = (**(code **)(*piVar14 + 0xf8))();
              iVar9 = 0;
              piVar14 = extraout_ECX;
              if (iVar23 == 0) goto LAB_0047b1c5;
              puVar2 = &this->field_0x655;
              puVar3 = &this->field_0x653;
              if (local_8[0x10b] != 0) {
                if (&this->field_0x651 != (undefined1 *)0x0) {
                  *(int *)&this->field_0x651 = local_8[0x10c];
                }
                if (puVar3 != (undefined1 *)0x0) {
                  *(int *)puVar3 = local_8[0x10d];
                }
                if (puVar2 != (undefined1 *)0x0) {
                  *(int *)puVar2 = local_8[0x10e];
                }
              }
              if (local_8[0x10b] == 0) {
                uVar11 = CONCAT22((short)((uint)local_8 >> 0x10),this->field_0647 + 1);
                iVar9 = CONCAT22((short)((uint)&this->field_0x651 >> 0x10),this->field_0643);
                iVar9 = thunk_FUN_0048dfd0(iVar9,(uint)(ushort)this->field_0645,uVar11,iVar9,
                                           (uint)(ushort)this->field_0645,(int *)uVar11,2,
                                           (short *)&this->field_0x651,(short *)puVar3,
                                           (short *)puVar2);
                goto joined_r0x0047b202;
              }
            }
            thunk_FUN_00481520(this,(int)*(short *)&this->field_0x651,
                               (int)*(short *)&this->field_0x653,(int)*(short *)&this->field_0x655);
            thunk_FUN_00460260(this,0);
            *(undefined4 *)&this->field_0x663 = 7;
cf_common_exit_0047ADB5:
            iVar9 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
          }
          if (*(int *)((int)&this->field_0666 + 1) == 0) {
            iVar10 = (ushort)(this->field_063D * 200) + 300;
            iVar23 = CONCAT22((short)((uint)iVar10 >> 0x10),this->field_063B + 1) * 0xc9;
            iVar13 = CONCAT22((short)((uint)iVar23 >> 0x10),this->field_0639 + 1);
            iVar9 = iVar13 * 0xc9;
            uVar8 = (undefined2)((uint)(iVar13 * 0x19) >> 0x10);
            uVar8 = (*this->vtable->vfunc_10)
                              (CONCAT22(uVar8,this->field_0041),
                               CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0043),
                               CONCAT22(uVar8,this->field_0045),iVar9,iVar23,iVar10);
            *(undefined2 *)((int)&this->field_065E + 3) = uVar8;
            *(undefined4 *)((int)&this->field_0666 + 1) = 1;
          }
          iVar9 = *(int *)((int)&this->field_0666 + 1);
          if (iVar9 == 1) {
            uVar11 = thunk_FUN_004176c0(this,*(short *)((int)&this->field_065E + 3));
            uVar11 = thunk_FUN_00417910(this,(short)uVar11);
            if (uVar11 == 0xffffffff) {
              iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x35f4,0,0,
                                         &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_PMOVE_007ab498);
              if (iVar9 == 0) {
                return -1;
              }
              pcVar6 = (code *)swi(3);
              iVar9 = (*pcVar6)();
              return iVar9;
            }
joined_r0x0047ada9:
            if (uVar11 == 0) {
              *(undefined4 *)((int)&this->field_0666 + 1) = 2;
            }
            goto cf_common_exit_0047ADB5;
          }
          if (iVar9 == 2) {
            thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                               (this->field_0639 + 1) * 0xc9,(this->field_063B + 1) * 0xc9,
                               this->field_063D * 200 + 300,this->field_0x61);
            *(undefined4 *)((int)&this->field_0666 + 1) = 3;
          }
          if (*(int *)((int)&this->field_0666 + 1) != 3) goto cf_common_exit_0047A369;
          local_14 = thunk_FUN_00415ed0(this,&local_20,&local_1c);
          uVar11 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
          *(uint *)&this->field_0x1c = uVar11;
          iVar9 = (uVar11 >> 0x10) % 7 - 3;
          uVar11 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
          *(uint *)&this->field_0x1c = uVar11;
          uVar26 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
          *(uint *)&this->field_0x1c = uVar26;
          local_18 = (uVar26 >> 0x10) % 7 - 3;
          if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
             (local_c = 0, this->field_0x2bf != '\0')) {
            local_10 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar12 = (undefined4 *)
                        thunk_FUN_0041dc40(local_30,*local_10,*(undefined2 *)(local_10 + 1),
                                           *(short *)&this->field_0x6c);
              uVar4 = *puVar12;
              bVar25 = 0;
              sVar24 = 0;
              iVar23 = -1;
              local_24 = *(short *)(puVar12 + 1);
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar15 = 0;
              sVar19 = 0;
              sVar18 = 0;
              local_28 = uVar4;
              if (DAT_0080732c == 1) {
                sVar18 = 0;
                sVar19 = 0;
                sVar15 = 0;
                sVar20 = 0;
                sVar21 = 0;
                sVar22 = 0;
                sVar24 = 0;
                bVar25 = 0;
                lVar17 = Library::MSVCRT::__ftol();
                iVar16 = (int)local_24 + (short)this->field_0045 + local_18 + (int)(short)lVar17;
                iVar10 = (int)(short)this->field_0043 - (int)local_28._2_2_;
                iVar13 = (int)(short)local_28 + iVar9 + (short)this->field_0041;
              }
              else {
                iVar16 = (int)local_24 + local_18 + (short)this->field_0045;
                local_28._2_2_ = (short)((uint)uVar4 >> 0x10);
                iVar10 = (int)(short)this->field_0043 - (int)local_28._2_2_;
                local_28._0_2_ = (short)uVar4;
                iVar13 = (int)(short)local_28 + iVar9 + (short)this->field_0041;
              }
              TraksClassTy::TraksCreate
                        (DAT_00802a7c,1,2,7,iVar13,iVar10 + ((uVar11 >> 0x10) % 7 - 3),iVar16,sVar18
                         ,sVar19,sVar15,sVar20,sVar21,sVar22,iVar23,sVar24,bVar25);
              local_10 = (undefined4 *)((int)local_10 + 6);
              local_c = local_c + 1;
            } while (local_c < (int)(uint)(byte)this->field_0x2bf);
          }
          if (local_14 == -1) {
            iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x361b,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Teleport_TELEPORT_PMOVE_007ab46c);
            if (iVar9 == 0) {
              return -1;
            }
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
          if (local_14 != 0) goto cf_common_exit_0047A369;
          if (this->field_0635 == 1) {
            sVar18 = this->field_0643;
            sVar19 = this->field_0647;
            sVar15 = this->field_0645;
            if ((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar15 < 0)) ||
               (((DAT_007fb242 <= sVar15 || (sVar19 < 0)) || (DAT_007fb244 <= sVar19)))) {
              local_8 = (int *)0x0;
            }
            else {
              local_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240
                                 + (int)sVar18) * 8);
            }
            if (((local_8 != (int *)0x0) && (local_8[6] == this->field_0649)) &&
               ((iVar9 = (**(code **)(*local_8 + 0xf8))(), iVar9 != 0 &&
                ((local_8[0x12d] == 0 && (*(int *)((int)local_8 + 0x245) != 6))))))
            goto LAB_0047a385;
            param_1 = *(int *)((int)DAT_00802a38 + 0xe4);
          }
          else {
LAB_0047a385:
            sVar18 = this->field_0639;
            sVar19 = this->field_063D;
            sVar15 = this->field_063B;
            if (((sVar18 < 0) ||
                (((DAT_007fb240 <= sVar18 || (sVar15 < 0)) || (DAT_007fb242 <= sVar15)))) ||
               ((sVar19 < 0 || (DAT_007fb244 <= sVar19)))) {
              local_8 = (int *)0x0;
            }
            else {
              local_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240
                                 + (int)sVar18) * 8);
            }
            if (((local_8 != (int *)0x0) && (local_8[6] == this->field_063F)) &&
               ((iVar9 = (**(code **)(*local_8 + 0xf8))(), iVar9 != 0 &&
                ((local_8[0x12d] == 0 && (*(int *)((int)local_8 + 0x245) != 6)))))) {
              psVar1 = (short *)((int)&this->field_065A + 1);
              *(undefined4 *)&this->field_0x742 = 1;
              thunk_FUN_004e9650(local_8,(undefined4 *)&this->field_0x657,
                                 (undefined4 *)&this->field_0x659,(undefined4 *)psVar1);
              thunk_FUN_004e96c0(local_8,(int *)this->field_0018);
              thunk_FUN_004d0970(DAT_00800bcc,(int)*(short *)&this->field_0x657,
                                 (int)*(short *)&this->field_0x659,(int)*psVar1);
              *(undefined4 *)((int)&this->field_0666 + 1) = 0;
              *(uint *)&this->field_0x663 = (this->field_0635 != 1) + 4;
              goto cf_common_exit_0047A369;
            }
            param_1 = *(int *)((int)DAT_00802a38 + 0xe4);
          }
          CmdToObj(this,CASE_3,&param_1);
cf_common_exit_0047A369:
          iVar9 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
        }
        iVar9 = thunk_FUN_00460260(this,2);
        switch(iVar9) {
        case 0:
          if (this->field_0635 == 1) {
            sVar18 = this->field_0643;
            sVar19 = this->field_0647;
            sVar15 = this->field_0645;
            if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
               ((sVar15 < 0 ||
                (((DAT_007fb242 <= sVar15 || (sVar19 < 0)) || (DAT_007fb244 <= sVar19)))))) {
              local_8 = (int *)0x0;
            }
            else {
              local_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240
                                 + (int)sVar18) * 8);
            }
            if (local_8 == (int *)0x0) {
              return 0;
            }
            if (local_8[6] != this->field_0649) {
              return 0;
            }
            iVar9 = (**(code **)(*local_8 + 0xf8))();
            if (iVar9 == 0) {
              return 0;
            }
          }
          sVar18 = this->field_0639;
          sVar19 = this->field_063D;
          sVar15 = this->field_063B;
          if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
             (((sVar15 < 0 || ((DAT_007fb242 <= sVar15 || (sVar19 < 0)))) ||
              (DAT_007fb244 <= sVar19)))) {
            local_8 = (int *)0x0;
          }
          else {
            local_8 = *(int **)(DAT_007fb248 +
                               ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240 +
                               (int)sVar18) * 8);
          }
          if (local_8 == (int *)0x0) {
            return 0;
          }
          if (local_8[6] != this->field_063F) {
            return 0;
          }
          iVar9 = (**(code **)(*local_8 + 0xf8))();
          if (iVar9 == 0) {
            return 0;
          }
          if (((this->field_0047 == *(short *)&this->field_0x651) &&
              (this->field_0049 == *(short *)&this->field_0x653)) &&
             (this->field_004B == *(short *)&this->field_0x655)) {
            *(undefined4 *)&this->field_0x663 = 3;
            *(undefined4 *)((int)&this->field_0666 + 1) = 0;
            return 2;
          }
          thunk_FUN_004e95c0(local_8,(int)this);
          return 0;
        case 1:
          sVar18 = this->field_0639;
          sVar19 = this->field_063D;
          sVar15 = this->field_063B;
          if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
             ((sVar15 < 0 ||
              (((DAT_007fb242 <= sVar15 || (sVar19 < 0)) || (DAT_007fb244 <= sVar19)))))) {
            local_8 = (int *)0x0;
          }
          else {
            local_8 = *(int **)(DAT_007fb248 +
                               ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240 +
                               (int)sVar18) * 8);
          }
          if (((local_8 != (int *)0x0) && (local_8[6] == this->field_063F)) &&
             (iVar9 = (**(code **)(*local_8 + 0xf8))(), iVar9 != 0)) {
            if (this->field_0635 != 1) {
              return 2;
            }
            sVar18 = this->field_0643;
            sVar19 = this->field_0647;
            sVar15 = this->field_0645;
            if (((sVar18 < 0) || (DAT_007fb240 <= sVar18)) ||
               ((sVar15 < 0 ||
                (((DAT_007fb242 <= sVar15 || (sVar19 < 0)) || (DAT_007fb244 <= sVar19)))))) {
              local_8 = (int *)0x0;
            }
            else {
              local_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240
                                 + (int)sVar18) * 8);
            }
            if (((local_8 != (int *)0x0) && (local_8[6] == this->field_0649)) &&
               (iVar9 = (**(code **)(*local_8 + 0xf8))(), iVar9 != 0)) {
              return 2;
            }
          }
          thunk_FUN_004602b0((int *)this);
          return 0;
        default:
          return 2;
        case 3:
          bVar7 = thunk_FUN_004939b0(this,(short *)&this->field_0x651,(short *)&this->field_0x653,
                                     (short *)&this->field_0x655);
          if (CONCAT31(extraout_var_01,bVar7) != 1) {
            sVar18 = this->field_0639;
            sVar19 = this->field_063D;
            sVar15 = this->field_063B;
            if ((((sVar18 < 0) || (DAT_007fb240 <= sVar18)) || (sVar15 < 0)) ||
               (((DAT_007fb242 <= sVar15 || (sVar19 < 0)) || (DAT_007fb244 <= sVar19)))) {
              local_8 = (int *)0x0;
            }
            else {
              local_8 = *(int **)(DAT_007fb248 +
                                 ((int)sVar19 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240
                                 + (int)sVar18) * 8);
            }
            if (local_8 == (int *)0x0) {
              return 0;
            }
            if (local_8[6] != this->field_063F) {
              return 0;
            }
            iVar9 = (**(code **)(*local_8 + 0xf8))();
            if (iVar9 == 0) {
              return 0;
            }
            thunk_FUN_004e95c0(local_8,(int)this);
            goto LAB_00479e39;
          }
          break;
        case -1:
          iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3596,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Teleport__TELEPORT_MOVE_007ab4c4);
          if (iVar9 != 0) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
          iVar9 = 0x3596;
          goto LAB_00479ba6;
        }
      }
      iVar9 = (int)*(short *)&this->field_0x655;
      sVar19 = *(short *)&this->field_0x653;
      sVar18 = *(short *)&this->field_0x651;
    }
    thunk_FUN_00481520(this,(int)sVar18,(int)sVar19,iVar9);
  }
  thunk_FUN_00460260(this,0);
switchD_00479647_caseD_2:
  return 2;
}


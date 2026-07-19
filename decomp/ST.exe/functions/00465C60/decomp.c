
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::LoadRC */

int __thiscall STBoatC::LoadRC(STBoatC *this,int *param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  STBoatC_field_06F7State SVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  int iVar8;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined3 extraout_var_15;
  STBoatC_field_04D5State SVar14;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  uint uVar15;
  undefined4 in_EDX;
  undefined2 extraout_var_22;
  undefined2 extraout_var_23;
  int *piVar16;
  undefined2 extraout_var_24;
  undefined2 extraout_var_25;
  STBoatCVTable *pSVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  byte bVar26;
  undefined4 uVar27;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  undefined3 extraout_var_16;
  
  local_8 = 0;
  if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
    puVar12 = &this->field_02CC;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    this->field_02C4 = 0;
    this->field_049B = *(undefined2 *)&this->field_0x353;
    this->field_049D = *(undefined2 *)&this->field_0x355;
    this->field_049F = *(undefined2 *)&this->field_0x357;
    this->field_04A1 = *(undefined4 *)&this->field_0x359;
    *(undefined2 *)&this->field_0x4a5 = *(undefined2 *)&this->field_0x35d;
    *(undefined2 *)&this->field_0x4a7 = *(undefined2 *)&this->field_0x35f;
    *(undefined2 *)&this->field_0x4a9 = *(undefined2 *)&this->field_0x361;
    *(undefined4 *)&this->field_0x4ab = *(undefined4 *)&this->field_0x363;
    this->field_04B5 = *(undefined4 *)&this->field_0x367;
    *(undefined4 *)&this->field_0x4b9 = *(undefined4 *)&this->field_0x36b;
    *(undefined4 *)&this->field_0x4c1 = 0;
    this->field_04BD = 0;
    *(undefined4 *)&this->field_0x4d1 = 0;
    this->field_04CD = 0;
    bVar4 = thunk_FUN_0048d440((int)this);
    SVar14 = CONCAT31(extraout_var_16,bVar4);
    if (SVar14 == CASE_0) {
LAB_00469972:
      this->field_04D5 = CASE_0;
      goto LAB_00469979;
    }
    this->field_04D5 = SVar14;
    this->field_00B7 = 3;
    if (SVar14 == CASE_1) {
      sVar21 = this->field_049F;
      sVar20 = this->field_049D;
      sVar19 = this->field_049B;
    }
    else {
      sVar21 = *(short *)&this->field_0x4a9;
      sVar20 = *(short *)&this->field_0x4a7;
      sVar19 = *(short *)&this->field_0x4a5;
    }
    iVar9 = sVar21 + 1;
    iVar7 = (int)sVar20;
    iVar8 = (int)sVar19;
LAB_004699da:
    thunk_FUN_00481520(this,iVar8,iVar7,iVar9);
  }
  else {
    SVar14 = this->field_04D5;
    if (SVar14 == CASE_0) {
      iVar7 = Defence(this,2);
      if (iVar7 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465cda:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar19 = this->field_049B;
          sVar20 = this->field_049F;
          sVar21 = this->field_049D;
          if (((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
              ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) || (DAT_007fb244 <= sVar20)) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar20 + (int)DAT_007fb240 * (int)sVar21 +
                            (int)sVar19) * 8);
          }
          if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
            this->field_04A1 = 0xffffffff;
          }
        }
      }
      else {
        if (*(int *)&this->field_0x4c1 != 1) {
          return 2;
        }
        if (this->field_04BD == 1) goto LAB_00465cda;
      }
      if (*(int *)&this->field_0x4c1 == 1) {
        *(undefined4 *)&this->field_0x4c1 = 0;
        if (*(int *)&this->field_0x4ab != -1) {
          sVar19 = *(short *)&this->field_0x4a5;
          sVar20 = *(short *)&this->field_0x4a9;
          sVar21 = *(short *)&this->field_0x4a7;
          if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
             ((sVar21 < 0 ||
              (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(DAT_007fb248 +
                            ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                            (int)sVar19) * 8);
          }
          if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
            *(undefined4 *)&this->field_0x4ab = 0xffffffff;
          }
        }
      }
      bVar4 = thunk_FUN_0048d440((int)this);
      if (CONCAT31(extraout_var,bVar4) == 0) {
        return 2;
      }
      if (CONCAT31(extraout_var,bVar4) == 1) {
        if (this->field_04A1 == -1) {
          return 2;
        }
LAB_00465e40:
        this->field_04CD = 0;
        this->field_04D5 = CASE_1;
        this->field_00B7 = 3;
        goto LAB_00465e5a;
      }
LAB_00468742:
      this->field_04CD = 0;
      this->field_04D5 = CASE_7;
      this->field_00B7 = 3;
LAB_0046875c:
      sVar19 = *(short *)&this->field_0x4a9;
      sVar20 = *(short *)&this->field_0x4a7;
      sVar21 = *(short *)&this->field_0x4a5;
LAB_00465e72:
      thunk_FUN_00481520(this,(int)sVar21,(int)sVar20,sVar19 + 1);
LAB_00465e7b:
      thunk_FUN_00460260(this,0);
      return 2;
    }
    if (SVar14 == CASE_1) {
      if ((int)this->field_04CD < 1) {
        iVar7 = thunk_FUN_00460260(this,2);
        switch(iVar7) {
        case 0:
          iVar7 = thunk_FUN_00490570((int)this);
          if (iVar7 == 1) {
            sVar19 = this->field_049B;
            sVar20 = this->field_049F;
            sVar21 = this->field_049D;
            if ((((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < sVar21)) &&
                 ((sVar21 < DAT_007fb242 && (-1 < sVar20)))) &&
                ((sVar20 < DAT_007fb244 &&
                 ((iVar7 = *(int *)(DAT_007fb248 +
                                   ((int)sVar20 * (int)DAT_007fb246 +
                                    (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8), iVar7 != 0
                  && (*(int *)(iVar7 + 0x18) == this->field_04A1)))))) &&
               (iVar7 = thunk_FUN_004e1490(iVar7), iVar7 != 1)) {
              uVar6 = (undefined2)((uint)&this->field_0x4af >> 0x10);
              thunk_FUN_0048dfd0(CONCAT22(uVar6,this->field_0047),
                                 CONCAT22(extraout_var_22,this->field_0049),
                                 CONCAT22(extraout_var_17,this->field_004B),
                                 CONCAT22(uVar6,this->field_049B),
                                 CONCAT22(extraout_var_22,this->field_049D),
                                 (int *)CONCAT22(extraout_var_17,this->field_049F + 1),1,
                                 (short *)&this->field_0x4af,(short *)&this->field_0x4b1,
                                 (short *)&this->field_0x4b3);
              this->field_04D5 = CASE_2;
              this->field_00B7 = 0;
              thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4af,
                                 (int)*(short *)&this->field_0x4b1,(int)*(short *)&this->field_0x4b3
                                );
              break;
            }
          }
          this->field_04D5 = CASE_3;
          goto LAB_00469979;
        case 1:
          if ((this->field_04BD != 1) && (*(int *)&this->field_0x4c1 != 1))
          goto switchD_004660af_caseD_2;
          local_c = (undefined4 *)0x0;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar19 = this->field_049B;
              sVar20 = this->field_049F;
              sVar21 = this->field_049D;
              if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                 ((sVar21 < 0 ||
                  (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(DAT_007fb248 +
                                ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                                (int)sVar19) * 8);
              }
              if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
            if (this->field_04A1 != -1) {
              local_c = (undefined4 *)0x1;
            }
          }
          if (*(int *)&this->field_0x4c1 == 1) {
            *(undefined4 *)&this->field_0x4c1 = 0;
            if (*(int *)&this->field_0x4ab != -1) {
              sVar19 = *(short *)&this->field_0x4a5;
              sVar20 = *(short *)&this->field_0x4a9;
              sVar21 = *(short *)&this->field_0x4a7;
              if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                  ((sVar21 < 0 || ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))))) ||
                 (DAT_007fb244 <= sVar20)) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(DAT_007fb248 +
                                ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                                (int)sVar19) * 8);
              }
              if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
                *(undefined4 *)&this->field_0x4ab = 0xffffffff;
              }
            }
          }
          bVar4 = thunk_FUN_0048d440((int)this);
          if (CONCAT31(extraout_var_01,bVar4) == 0) goto LAB_00467fe4;
          if (CONCAT31(extraout_var_01,bVar4) == 1) {
            if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
            goto switchD_004660af_caseD_2;
            thunk_FUN_004602b0((int *)this);
            if (this->field_04A1 == -1) {
              this->field_04CD = this->field_04CD + 1;
              iVar7 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
            }
            if (local_c != (undefined4 *)0x1) goto switchD_004660af_caseD_2;
LAB_00467018:
            thunk_FUN_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                               (short)this->field_049F + 1);
          }
          else {
            thunk_FUN_004602b0((int *)this);
            this->field_04D5 = CASE_7;
LAB_00468b42:
            thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4a5,
                               (int)*(short *)&this->field_0x4a7,*(short *)&this->field_0x4a9 + 1);
          }
          break;
        default:
          goto switchD_004660af_caseD_2;
        case 3:
switchD_004660af_caseD_3:
          thunk_FUN_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                             (short)this->field_049F + 1);
          break;
        case -1:
          iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d02,0,0,
                                     &DAT_007a4ccc,s_STBoatC__LoadRC__move_to_mine_er_007aa4e4);
          if (iVar7 != 0) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
          iVar7 = 0x1d02;
          goto LAB_004660e9;
        }
LAB_00468c49:
        thunk_FUN_00460260(this,0);
        goto switchD_004660af_caseD_2;
      }
      iVar7 = this->field_04CD + 1;
      this->field_04CD = iVar7;
      if (iVar7 == 2) {
        iVar7 = Defence(this,0);
        if (iVar7 != -1) {
          return 2;
        }
        return -1;
      }
      iVar7 = Defence(this,2);
      if (iVar7 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465f11:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar19 = this->field_049B;
          sVar20 = this->field_049F;
          sVar21 = this->field_049D;
          if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
             (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(DAT_007fb248 +
                            ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                            (int)sVar19) * 8);
          }
          if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
            this->field_04A1 = 0xffffffff;
          }
        }
      }
      else {
        if (*(int *)&this->field_0x4c1 != 1) {
          return 2;
        }
        if (this->field_04BD == 1) goto LAB_00465f11;
      }
      if (*(int *)&this->field_0x4c1 == 1) {
        *(undefined4 *)&this->field_0x4c1 = 0;
        if (*(int *)&this->field_0x4ab != -1) {
          sVar19 = *(short *)&this->field_0x4a5;
          sVar20 = *(short *)&this->field_0x4a9;
          sVar21 = *(short *)&this->field_0x4a7;
          if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
             ((sVar21 < 0 ||
              (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(DAT_007fb248 +
                            ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                            (int)sVar19) * 8);
          }
          if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
            *(undefined4 *)&this->field_0x4ab = 0xffffffff;
          }
        }
      }
      bVar4 = thunk_FUN_0048d440((int)this);
      if (CONCAT31(extraout_var_00,bVar4) == 0) {
        thunk_FUN_004602b0((int *)this);
        this->field_04D5 = CASE_0;
LAB_00469979:
        iVar7 = Defence(this,0);
        return (-(uint)(iVar7 != -1) & 3) - 1;
      }
      if (CONCAT31(extraout_var_00,bVar4) != 1) goto LAB_00466087;
      if (this->field_04A1 == -1) {
        return 2;
      }
      this->field_04CD = 0;
LAB_00465e5a:
      sVar19 = this->field_049F;
      sVar20 = this->field_049D;
      sVar21 = this->field_049B;
      goto LAB_00465e72;
    }
    if (SVar14 != CASE_2) {
      if (SVar14 == CASE_3) {
        this->field_04CD = this->field_04CD + 1;
        iVar7 = Defence(this,2);
        if (iVar7 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if ((this->field_04BD != 1) && (*(int *)&this->field_0x4c1 != 1)) {
          if ((int)this->field_04CD % 0x32 != 1) {
            return 2;
          }
          sVar19 = this->field_049B;
          sVar20 = this->field_049F;
          sVar21 = this->field_049D;
          if (sVar19 < 0) {
            return 2;
          }
          if (DAT_007fb240 <= sVar19) {
            return 2;
          }
          if (sVar21 < 0) {
            return 2;
          }
          if (DAT_007fb242 <= sVar21) {
            return 2;
          }
          if (sVar20 < 0) {
            return 2;
          }
          if (DAT_007fb244 <= sVar20) {
            return 2;
          }
          pvVar1 = *(void **)(DAT_007fb248 +
                             ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                             (int)sVar19) * 8);
          if (pvVar1 == (void *)0x0) {
            return 2;
          }
          if (*(int *)((int)pvVar1 + 0x18) != this->field_04A1) {
            return 2;
          }
          iVar7 = thunk_FUN_004e1490((int)pvVar1);
          if (iVar7 != 1) {
            return 2;
          }
          thunk_FUN_004e15f0(pvVar1,this->field_0018);
          sVar20 = this->field_049D;
          sVar19 = this->field_049B;
          iVar7 = (short)this->field_049F + 1;
          this->field_04CD = 0;
          this->field_04D5 = CASE_4;
          this->field_00B7 = 0;
LAB_00468322:
          thunk_FUN_00481520(this,(int)sVar19,(int)sVar20,iVar7);
          thunk_FUN_00460260(this,0);
          return 2;
        }
        local_c = (undefined4 *)0x0;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar19 = this->field_049B;
            sVar20 = this->field_049F;
            sVar21 = this->field_049D;
            if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
               ((sVar21 < 0 ||
                (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 +
                              ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                              (int)sVar19) * 8);
            }
            if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
          if (this->field_04A1 != -1) {
            local_c = (undefined4 *)0x1;
          }
        }
        if (*(int *)&this->field_0x4c1 == 1) {
          *(undefined4 *)&this->field_0x4c1 = 0;
          if (*(int *)&this->field_0x4ab != -1) {
            sVar19 = *(short *)&this->field_0x4a5;
            sVar20 = *(short *)&this->field_0x4a9;
            sVar21 = *(short *)&this->field_0x4a7;
            if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
               (((sVar21 < 0 || ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) ||
                (DAT_007fb244 <= sVar20)))) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 +
                              ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                              (int)sVar19) * 8);
            }
            if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
              *(undefined4 *)&this->field_0x4ab = 0xffffffff;
            }
          }
        }
        bVar4 = thunk_FUN_0048d440((int)this);
        if (CONCAT31(extraout_var_03,bVar4) == 0) {
          thunk_FUN_004602b0((int *)this);
          this->field_04D5 = CASE_0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_03,bVar4) == 1) {
          if (this->field_04A1 == -1) {
            return 2;
          }
          if (local_c == (undefined4 *)0x0) {
            return 2;
          }
          if (this->field_04A1 == -1) {
            return 2;
          }
          if (local_c != (undefined4 *)0x1) {
            return 2;
          }
          this->field_04CD = 0;
          this->field_04D5 = CASE_1;
          thunk_FUN_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                             (short)this->field_049F + 1);
          goto LAB_00465e7b;
        }
LAB_00466087:
        this->field_04CD = 0;
        this->field_04D5 = CASE_7;
        goto LAB_0046875c;
      }
      if (SVar14 == CASE_4) {
        if ((int)this->field_04CD < 1) {
          iVar7 = thunk_FUN_00460260(this,2);
          switch(iVar7) {
          case 0:
            this->field_04D5 = CASE_5;
            iVar7 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
          case 1:
            if ((this->field_04BD != 1) && (*(int *)&this->field_0x4c1 != 1))
            goto switchD_004660af_caseD_2;
            local_c = (undefined4 *)0x0;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar19 = this->field_049B;
                sVar20 = this->field_049F;
                sVar21 = this->field_049D;
                if (((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
                    ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) || (DAT_007fb244 <= sVar20)) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(DAT_007fb248 +
                                  ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                  + (int)sVar19) * 8);
                }
                if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
              if (this->field_04A1 != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            if (*(int *)&this->field_0x4c1 == 1) {
              *(undefined4 *)&this->field_0x4c1 = 0;
              if (*(int *)&this->field_0x4ab != -1) {
                sVar19 = *(short *)&this->field_0x4a5;
                sVar20 = *(short *)&this->field_0x4a9;
                sVar21 = *(short *)&this->field_0x4a7;
                if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                   ((sVar21 < 0 ||
                    (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(DAT_007fb248 +
                                  ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                  + (int)sVar19) * 8);
                }
                if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
                  *(undefined4 *)&this->field_0x4ab = 0xffffffff;
                }
              }
            }
            bVar4 = thunk_FUN_0048d440((int)this);
            if (CONCAT31(extraout_var_05,bVar4) == 0) {
              thunk_FUN_004602b0((int *)this);
              this->field_04D5 = CASE_0;
              goto LAB_00469979;
            }
            if (CONCAT31(extraout_var_05,bVar4) == 1) {
              if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
              goto switchD_004660af_caseD_2;
              thunk_FUN_004602b0((int *)this);
              if (this->field_04A1 == -1) {
                this->field_04CD = this->field_04CD + 1;
                iVar7 = (*this->vtable->vfunc_D8)();
                return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
              }
              if (local_c != (undefined4 *)0x1) goto switchD_004660af_caseD_2;
              this->field_04CD = 0;
              this->field_04D5 = CASE_1;
              this->field_00B7 = 3;
              goto LAB_00467018;
            }
            thunk_FUN_004602b0((int *)this);
            this->field_04CD = 0;
            this->field_00B7 = 3;
            this->field_04D5 = CASE_7;
            iVar7 = *(short *)&this->field_0x4a9 + 1;
            break;
          default:
            goto switchD_004660af_caseD_2;
          case 3:
            goto switchD_004660af_caseD_3;
          case -1:
            iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1e6e,0,0,
                                       &DAT_007a4ccc,s_STBoatC__LoadRC__move_to_mine_2_e_007aa480);
            if (iVar7 != 0) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            iVar7 = 0x1e6e;
            goto LAB_004660e9;
          }
LAB_00467068:
          sVar20 = *(short *)&this->field_0x4a7;
          sVar19 = *(short *)&this->field_0x4a5;
LAB_00468c40:
          thunk_FUN_00481520(this,(int)sVar19,(int)sVar20,iVar7);
          goto LAB_00468c49;
        }
        iVar7 = this->field_04CD + 1;
        this->field_04CD = iVar7;
        if (iVar7 == 2) {
          iVar7 = Defence(this,0);
          if (iVar7 != -1) {
            return 2;
          }
          return -1;
        }
        iVar7 = Defence(this,2);
        if (iVar7 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_00466bff:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar19 = this->field_049B;
            sVar20 = this->field_049F;
            sVar21 = this->field_049D;
            if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
               ((sVar21 < 0 ||
                (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 +
                              ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                              (int)sVar19) * 8);
            }
            if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
        }
        else {
          if (*(int *)&this->field_0x4c1 != 1) {
            return 2;
          }
          if (this->field_04BD == 1) goto LAB_00466bff;
        }
        if (*(int *)&this->field_0x4c1 == 1) {
          *(undefined4 *)&this->field_0x4c1 = 0;
          if (*(int *)&this->field_0x4ab != -1) {
            sVar19 = *(short *)&this->field_0x4a5;
            sVar20 = *(short *)&this->field_0x4a9;
            sVar21 = *(short *)&this->field_0x4a7;
            if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                ((sVar21 < 0 || ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))))) ||
               (DAT_007fb244 <= sVar20)) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 +
                              ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                              (int)sVar19) * 8);
            }
            if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
              *(undefined4 *)&this->field_0x4ab = 0xffffffff;
            }
          }
        }
        bVar4 = thunk_FUN_0048d440((int)this);
        if (CONCAT31(extraout_var_04,bVar4) == 0) {
          thunk_FUN_004602b0((int *)this);
          this->field_04D5 = CASE_0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_04,bVar4) != 1) goto LAB_00468742;
        if (this->field_04A1 == -1) {
          return 2;
        }
        goto LAB_00465e40;
      }
      if (SVar14 == CASE_5) {
        this->field_04CD = this->field_04CD + 1;
        if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
          local_c = (undefined4 *)0x0;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar19 = this->field_049B;
              sVar20 = this->field_049F;
              sVar21 = this->field_049D;
              if (((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
                  ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) || (DAT_007fb244 <= sVar20)) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(DAT_007fb248 +
                                ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                                (int)sVar19) * 8);
              }
              if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
            if (this->field_04A1 != -1) {
              local_c = (undefined4 *)0x1;
            }
          }
          if (*(int *)&this->field_0x4c1 == 1) {
            *(undefined4 *)&this->field_0x4c1 = 0;
            if (*(int *)&this->field_0x4ab != -1) {
              sVar19 = *(short *)&this->field_0x4a5;
              sVar20 = *(short *)&this->field_0x4a9;
              sVar21 = *(short *)&this->field_0x4a7;
              if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                 ((sVar21 < 0 ||
                  (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(DAT_007fb248 +
                                ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                                (int)sVar19) * 8);
              }
              if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
                *(undefined4 *)&this->field_0x4ab = 0xffffffff;
              }
            }
          }
          bVar4 = thunk_FUN_0048d440((int)this);
          if (CONCAT31(extraout_var_06,bVar4) == 0) {
            thunk_FUN_004602b0((int *)this);
            this->field_04D5 = CASE_0;
            goto LAB_00469979;
          }
          if (CONCAT31(extraout_var_06,bVar4) != 1) {
            iVar7 = (int)*(short *)&this->field_0x4a9;
            this->field_04CD = 0;
            this->field_04D5 = CASE_6;
            this->field_00B7 = 3;
            goto LAB_00467068;
          }
          if ((this->field_04A1 == -1) || (local_c != (undefined4 *)0x0)) {
            this->field_04CD = 0;
            this->field_00B7 = 3;
            if (this->field_04A1 == -1) {
              this->field_04D5 = CASE_6;
              thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4a5,
                                 (int)*(short *)&this->field_0x4a7,*(short *)&this->field_0x4a9 + 1)
              ;
            }
            else if (local_c == (undefined4 *)0x1) {
              this->field_04D5 = CASE_1;
              thunk_FUN_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                                 (short)this->field_049F + 1);
            }
            else {
              iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1efd,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_MINE_007aa41c);
              if (iVar7 != 0) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
            }
            goto LAB_004699e2;
          }
        }
        if ((int)this->field_04CD % 10 != 1) goto switchD_004660af_caseD_2;
        sVar19 = this->field_049B;
        sVar20 = this->field_049F;
        sVar21 = this->field_049D;
        if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
            ((sVar21 < 0 || (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))
             ))) || ((piVar16 = *(int **)(DAT_007fb248 +
                                         ((int)sVar20 * (int)DAT_007fb246 +
                                          (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8),
                     piVar16 == (int *)0x0 || (piVar16[6] != this->field_04A1)))) {
          thunk_FUN_0048d930((int)this);
          this->field_04CD = 0;
          this->field_04D5 = CASE_6;
LAB_00468b38:
          this->field_00B7 = 3;
          goto LAB_00468b42;
        }
        if ((piVar16[0x12d] == 0) && (*(int *)((int)piVar16 + 0x245) != 6)) {
          thunk_FUN_004e1930(piVar16,&local_8,0);
          iVar7 = thunk_FUN_00430910(local_8);
          local_18 = thunk_FUN_004e1930(piVar16,&local_8,iVar7);
          if (local_18 == iVar7) {
            thunk_FUN_004e16d0(piVar16,this->field_0018);
            if ((int)this->field_04CD % 0x78 == 1) {
              SVar2 = this->field_06F7;
              if (SVar2 == CASE_8) {
                pSVar17 = this->vtable;
                uVar27 = 0xfc;
LAB_0046739a:
                (*pSVar17->vfunc_90)(3,uVar27);
              }
              else if (SVar2 == CASE_14) {
                (*this->vtable->vfunc_90)(3,0x160);
              }
              else if (SVar2 == CASE_1A) {
                pSVar17 = this->vtable;
                uVar27 = 0x19f;
                goto LAB_0046739a;
              }
            }
            if (local_8 == 0xdc) {
              iVar8 = *(int *)&this->field_0x7d2 + 1;
              *(int *)&this->field_0x7d2 = iVar8;
              if (0x28 < iVar8 + *(int *)&this->field_0x7d6 + *(int *)&this->field_0x7da) {
                *(int *)&this->field_0x7d2 =
                     (0x28 - *(int *)&this->field_0x7d6) - *(int *)&this->field_0x7da;
              }
            }
            else if (local_8 == 0xdd) {
              iVar8 = *(int *)&this->field_0x7d6 + 1;
              *(int *)&this->field_0x7d6 = iVar8;
              if (0x28 < iVar8 + *(int *)&this->field_0x7d2 + *(int *)&this->field_0x7da) {
                *(int *)&this->field_0x7d6 =
                     (0x28 - *(int *)&this->field_0x7d2) - *(int *)&this->field_0x7da;
              }
            }
            else if (local_8 == 0xde) {
              iVar8 = *(int *)&this->field_0x7da + 1;
              *(int *)&this->field_0x7da = iVar8;
              if (0x28 < *(int *)&this->field_0x7d2 + *(int *)&this->field_0x7d6 + iVar8) {
                *(int *)&this->field_0x7da =
                     (0x28 - *(int *)&this->field_0x7d2) - *(int *)&this->field_0x7d6;
              }
            }
            else {
              iVar8 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1f2f,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_MINE___u_007aa440);
              if (iVar8 != 0) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
            }
          }
          if (((local_18 < iVar7) ||
              (*(int *)&this->field_0x7da + *(int *)&this->field_0x7d6 + *(int *)&this->field_0x7d2
               == 0x28)) || (iVar7 = (**(code **)(*piVar16 + 0x88))(&local_8), iVar7 == 0))
          goto LAB_0046744c;
        }
        else {
LAB_0046744c:
          thunk_FUN_0048d930((int)this);
          this->field_04CD = 0;
          this->field_04D5 = CASE_6;
          this->field_00B7 = 3;
          thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4a5,
                             (int)*(short *)&this->field_0x4a7,*(short *)&this->field_0x4a9 + 1);
          thunk_FUN_00460260(this,0);
        }
        iVar7 = (**(code **)(*piVar16 + 0x88))(&local_8);
        if (iVar7 == 0) {
          STAllPlayersC::_ChangeMD
                    (DAT_007fa174,0,*(int **)&this->field_0x24,
                     CONCAT22(extraout_var_19,*(undefined2 *)((int)piVar16 + 0x32)));
          iVar7 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
switchD_004660af_caseD_2:
        iVar7 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      if (SVar14 != CASE_6) {
        if (SVar14 != CASE_7) {
          if (SVar14 == CASE_8) {
            iVar7 = thunk_FUN_00460260(this,2);
            switch(iVar7) {
            case 0:
              iVar7 = thunk_FUN_00490570((int)this);
              if (iVar7 != 1) {
                this->field_04D5 = CASE_9;
                this->field_00B7 = 3;
                goto LAB_00469979;
              }
              iVar8 = CONCAT22(extraout_var_21,*(undefined2 *)&this->field_0x4a5);
              iVar7 = CONCAT22((short)((uint)&this->field_0x4af >> 0x10),
                               *(undefined2 *)&this->field_0x4a7);
              piVar16 = (int *)CONCAT22(extraout_var_25,*(short *)&this->field_0x4a9 + 1);
              break;
            case 1:
              if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
                local_c = (undefined4 *)0x0;
                if (this->field_04BD == 1) {
                  this->field_04BD = 0;
                  if (this->field_04A1 != -1) {
                    sVar19 = this->field_049B;
                    sVar20 = this->field_049F;
                    sVar21 = this->field_049D;
                    if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                       ((sVar21 < 0 ||
                        (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20))))))
                    {
                      iVar7 = 0;
                    }
                    else {
                      iVar7 = *(int *)(DAT_007fb248 +
                                      ((int)sVar20 * (int)DAT_007fb246 +
                                       (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8);
                    }
                    if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
                      this->field_04A1 = 0xffffffff;
                    }
                  }
                  if (this->field_04A1 != -1) {
                    local_c = (undefined4 *)0x1;
                  }
                }
                if (*(int *)&this->field_0x4c1 == 1) {
                  *(undefined4 *)&this->field_0x4c1 = 0;
                  if (*(int *)&this->field_0x4ab != -1) {
                    sVar19 = *(short *)&this->field_0x4a5;
                    sVar20 = *(short *)&this->field_0x4a9;
                    sVar21 = *(short *)&this->field_0x4a7;
                    if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                       (((sVar21 < 0 || ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) ||
                        (DAT_007fb244 <= sVar20)))) {
                      iVar7 = 0;
                    }
                    else {
                      iVar7 = *(int *)(DAT_007fb248 +
                                      ((int)sVar20 * (int)DAT_007fb246 +
                                       (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8);
                    }
                    if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
                      *(undefined4 *)&this->field_0x4ab = 0xffffffff;
                    }
                  }
                }
                bVar4 = thunk_FUN_0048d440((int)this);
                if (CONCAT31(extraout_var_09,bVar4) == 0) goto LAB_00467fe4;
                if (CONCAT31(extraout_var_09,bVar4) != 1) goto LAB_0046817e;
                if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
                goto switchD_00466448_caseD_2;
                thunk_FUN_004602b0((int *)this);
                if (this->field_04A1 == -1) {
                  this->field_04CD = this->field_04CD + 1;
                  goto switchD_00466448_caseD_2;
                }
                if (local_c == (undefined4 *)0x1) {
                  this->field_00B7 = 3;
                  this->field_04D5 = CASE_1;
                  thunk_FUN_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                                     (short)this->field_049F + 1);
                  goto LAB_004699e2;
                }
              }
              sVar19 = *(short *)&this->field_0x4a5;
              sVar20 = *(short *)&this->field_0x4a9;
              sVar21 = *(short *)&this->field_0x4a7;
              if (((((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
                    ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) || (DAT_007fb244 <= sVar20)) ||
                  ((pvVar1 = *(void **)(DAT_007fb248 +
                                       ((int)sVar20 * (int)DAT_007fb246 +
                                        (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8),
                   pvVar1 == (void *)0x0 ||
                   (*(int *)((int)pvVar1 + 0x18) != *(int *)&this->field_0x4ab)))) ||
                 ((iVar7 = thunk_FUN_004e1490((int)pvVar1), iVar7 != 1 ||
                  (bVar4 = thunk_FUN_0048d650(this,pvVar1), CONCAT31(extraout_var_10,bVar4) != 1))))
              goto switchD_00466448_caseD_2;
              thunk_FUN_004602b0((int *)this);
              thunk_FUN_004e15f0(pvVar1,this->field_0018);
              this->field_04CD = 0;
              this->field_04D5 = CASE_A;
              thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4c5,
                                 (int)*(short *)&this->field_0x4c7,(int)*(short *)&this->field_0x4c9
                                );
              goto LAB_004699e2;
            default:
              goto switchD_00466448_caseD_2;
            case 3:
              iVar7 = thunk_FUN_00490570((int)this);
              if (iVar7 == 1) {
                iVar7 = CONCAT22((short)((uint)&this->field_0x4b1 >> 0x10),
                                 *(undefined2 *)&this->field_0x4a7);
                iVar8 = CONCAT22((short)((uint)&this->field_0x4af >> 0x10),
                                 *(undefined2 *)&this->field_0x4a5);
                piVar16 = (int *)CONCAT22((short)((uint)&this->field_0x4b3 >> 0x10),
                                          *(short *)&this->field_0x4a9 + 1);
                goto LAB_00467e31;
              }
              goto LAB_00467e48;
            case -1:
              iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x201c,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__correct_move_to_007aa384);
              if (iVar7 != 0) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              iVar7 = 0x201c;
LAB_004660e9:
              RaiseInternalException
                        (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar7);
              return 0xffff;
            }
            goto LAB_00467da5;
          }
          if (SVar14 == CASE_9) {
            this->field_04CD = this->field_04CD + 1;
            iVar7 = Defence(this,2);
            if (iVar7 == -1) {
              return -1;
            }
            if (this->field_082E != 0) {
              return 2;
            }
            if ((this->field_04BD != 1) && (*(int *)&this->field_0x4c1 != 1)) {
              if ((int)this->field_04CD % 0x32 != 1) {
                return 2;
              }
              sVar19 = *(short *)&this->field_0x4a5;
              sVar20 = *(short *)&this->field_0x4a9;
              sVar21 = *(short *)&this->field_0x4a7;
              if (sVar19 < 0) {
                return 2;
              }
              if (DAT_007fb240 <= sVar19) {
                return 2;
              }
              if (sVar21 < 0) {
                return 2;
              }
              if (DAT_007fb242 <= sVar21) {
                return 2;
              }
              if (sVar20 < 0) {
                return 2;
              }
              if (DAT_007fb244 <= sVar20) {
                return 2;
              }
              pvVar1 = *(void **)(DAT_007fb248 +
                                 ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                 + (int)sVar19) * 8);
              if (pvVar1 == (void *)0x0) {
                return 2;
              }
              if (*(int *)((int)pvVar1 + 0x18) != *(int *)&this->field_0x4ab) {
                return 2;
              }
              iVar7 = thunk_FUN_004e1490((int)pvVar1);
              if (iVar7 != 1) {
                return 2;
              }
              bVar4 = thunk_FUN_0048d650(this,pvVar1);
              if (CONCAT31(extraout_var_11,bVar4) != 1) {
                return 2;
              }
              thunk_FUN_004e15f0(pvVar1,this->field_0018);
              iVar7 = (int)*(short *)&this->field_0x4c9;
              sVar20 = *(short *)&this->field_0x4c7;
              sVar19 = *(short *)&this->field_0x4c5;
              this->field_04CD = 0;
              this->field_04D5 = CASE_A;
              this->field_00B7 = 0;
              goto LAB_00468322;
            }
            local_c = (undefined4 *)0x0;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar19 = this->field_049B;
                sVar20 = this->field_049F;
                sVar21 = this->field_049D;
                if (((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
                    ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) || (DAT_007fb244 <= sVar20)) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(DAT_007fb248 +
                                  ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                  + (int)sVar19) * 8);
                }
                if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (*(int *)&this->field_0x4c1 == 1) {
              *(undefined4 *)&this->field_0x4c1 = 0;
              if (*(int *)&this->field_0x4ab != -1) {
                sVar19 = *(short *)&this->field_0x4a5;
                sVar20 = *(short *)&this->field_0x4a9;
                sVar21 = *(short *)&this->field_0x4a7;
                if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                   ((sVar21 < 0 ||
                    (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(DAT_007fb248 +
                                  ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                  + (int)sVar19) * 8);
                }
                if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
                  *(undefined4 *)&this->field_0x4ab = 0xffffffff;
                }
              }
              bVar4 = true;
              if (*(int *)&this->field_0x4ab == -1) goto LAB_00468493;
            }
            else {
LAB_00468493:
              bVar4 = false;
            }
            bVar5 = thunk_FUN_0048d440((int)this);
            if (CONCAT31(extraout_var_12,bVar5) != 0) {
              if (CONCAT31(extraout_var_12,bVar5) == 7) {
                if (*(int *)&this->field_0x4ab == -1) {
                  return 2;
                }
                if (!bVar4) {
                  return 2;
                }
                if (*(int *)&this->field_0x4ab == -1) {
                  return 2;
                }
                if (!bVar4) {
                  return 2;
                }
                this->field_04CD = 0;
                this->field_04D5 = CASE_7;
                thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4a5,
                                   (int)*(short *)&this->field_0x4a7,
                                   *(short *)&this->field_0x4a9 + 1);
              }
              else {
                this->field_04CD = 0;
                this->field_04D5 = CASE_1;
                thunk_FUN_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                                   (short)this->field_049F + 1);
              }
              goto LAB_00465e7b;
            }
            thunk_FUN_004602b0((int *)this);
            goto LAB_00469972;
          }
          if (SVar14 != CASE_A) {
            if (SVar14 == CASE_B) {
              if (*(int *)&this->field_0x4d9 == 0) {
                iVar9 = (ushort)(*(short *)&this->field_0x4a9 * 200) + 300;
                iVar8 = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)&this->field_0x4a7 + 1) *
                        0xc9;
                iVar10 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)&this->field_0x4a5 + 1);
                iVar7 = iVar10 * 0xc9;
                uVar6 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
                uVar6 = (*this->vtable->vfunc_10)
                                  (CONCAT22(uVar6,this->field_0041),
                                   CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                                   CONCAT22(uVar6,this->field_0045),iVar7,iVar8,iVar9);
                *(undefined2 *)&this->field_0x4cb = uVar6;
                *(undefined4 *)&this->field_0x4d9 = 1;
              }
              if (*(int *)&this->field_0x4d9 == 1) {
                uVar11 = thunk_FUN_004176c0(this,*(short *)&this->field_0x4cb);
                uVar11 = thunk_FUN_00417910(this,(short)uVar11);
                if (uVar11 == 0xffffffff) {
                  iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2196,0,0,
                                             &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_PDEPOT_007aa32c
                                            );
                  if (iVar7 != 0) {
                    pcVar3 = (code *)swi(3);
                    iVar7 = (*pcVar3)();
                    return iVar7;
                  }
                  iVar7 = 0x2197;
                  goto LAB_004660e9;
                }
                if (uVar11 == 0) {
                  *(undefined4 *)&this->field_0x4d9 = 2;
                  iVar7 = (*this->vtable->vfunc_D8)();
                  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
                }
              }
              if (*(int *)&this->field_0x4d9 == 2) {
                thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                                   (*(short *)&this->field_0x4a5 + 1) * 0xc9,
                                   (*(short *)&this->field_0x4a7 + 1) * 0xc9,
                                   *(short *)&this->field_0x4a9 * 200 + 300,this->field_0x61);
                *(undefined4 *)&this->field_0x4d9 = 3;
              }
              if (*(int *)&this->field_0x4d9 == 3) {
                local_10 = thunk_FUN_00415ed0(this,&local_18,&local_14);
                param_1 = (int *)0x0;
                if (this->field_0x2bf != '\0') {
                  local_c = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar12 = (undefined4 *)
                              thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                                 *(short *)&this->field_0x6c);
                    local_24 = *puVar12;
                    local_20 = *(short *)(puVar12 + 1);
                    if (DAT_0080732c == 1) {
                      bVar26 = 0;
                      sVar25 = 0;
                      uVar11 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
                      iVar9 = -1;
                      *(uint *)&this->field_0x1c = uVar11;
                      sVar24 = 0;
                      sVar23 = 0;
                      uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                      sVar22 = 0;
                      *(uint *)&this->field_0x1c = uVar13;
                      sVar21 = 0;
                      sVar20 = 0;
                      local_1c = uVar13 * 0x41c64e6d + 0x3039;
                      sVar19 = 0;
                      *(uint *)&this->field_0x1c = local_1c;
                      lVar18 = Library::MSVCRT::__ftol();
                      iVar7 = (int)(short)lVar18 + (uVar11 >> 0x10) % 7 +
                              (int)(short)this->field_0045 + -3 + (int)local_20;
                      iVar8 = ((uVar13 >> 0x10) % 7 + (int)(short)this->field_0043) -
                              (int)local_24._2_2_;
                      uVar11 = local_1c;
                    }
                    else {
                      uVar13 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
                      bVar26 = 0;
                      sVar25 = 0;
                      uVar15 = uVar13 * 0x41c64e6d + 0x3039;
                      iVar9 = -1;
                      sVar24 = 0;
                      sVar23 = 0;
                      sVar22 = 0;
                      sVar21 = 0;
                      sVar20 = 0;
                      *(uint *)&this->field_0x1c = uVar13;
                      uVar11 = uVar15 * 0x41c64e6d + 0x3039;
                      sVar19 = 0;
                      *(uint *)&this->field_0x1c = uVar15;
                      *(uint *)&this->field_0x1c = uVar11;
                      iVar7 = (uVar13 >> 0x10) % 7 + (int)(short)this->field_0045 + -3 +
                              (int)local_20;
                      local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                      iVar8 = ((uVar15 >> 0x10) % 7 + (int)(short)this->field_0043) -
                              (int)local_24._2_2_;
                    }
                    TraksClassTy::TraksCreate
                              (DAT_00802a7c,1,2,7,
                               (uVar11 >> 0x10) % 7 + (int)(short)this->field_0041 + -3 +
                               (int)(short)local_24,iVar8 + -3,iVar7,sVar19,sVar20,sVar21,sVar22,
                               sVar23,sVar24,iVar9,sVar25,bVar26);
                    param_1 = (int *)((int)param_1 + 1);
                    local_c = (undefined4 *)((int)local_c + 6);
                  } while ((int)param_1 < (int)(uint)(byte)this->field_0x2bf);
                }
                if (local_10 == -1) {
                  iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x21bc,0,0,
                                             &DAT_007a4ccc,
                                             s_STBoatC__LoadRC__LOADRC_PDEPOT_2_007aa304);
                  if (iVar7 != 0) {
                    pcVar3 = (code *)swi(3);
                    iVar7 = (*pcVar3)();
                    return iVar7;
                  }
                  iVar7 = 0x21bd;
                  goto LAB_004660e9;
                }
                if (local_10 == 0) {
                  this->field_04D5 = CASE_C;
                  *(undefined4 *)&this->field_0x4d9 = 0;
                  iVar7 = (*this->vtable->vfunc_D8)();
                  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
                }
              }
              goto LAB_004693c9;
            }
            if (SVar14 != CASE_C) {
              if (SVar14 == CASE_D) {
                iVar7 = *(int *)&this->field_0x4d1 + 1;
                *(int *)&this->field_0x4d1 = iVar7;
                if (0x45 < iVar7) {
                  if (*(int *)&this->field_0x4d9 == 0) {
                    iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)&this->field_0x4c9 * 200
                                    ) + 100;
                    iVar9 = CONCAT22((short)((uint)in_EDX >> 0x10),
                                     *(short *)&this->field_0x4c7 * 0xc9) + 100;
                    iVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),
                                     *(short *)&this->field_0x4c5 * 0xc9) + 100;
                    uVar6 = (undefined2)((uint)iVar9 >> 0x10);
                    uVar6 = (*this->vtable->vfunc_10)
                                      (CONCAT22(uVar6,this->field_0041),
                                       CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0043),
                                       CONCAT22(uVar6,this->field_0045),iVar8,iVar9,iVar7);
                    *(undefined2 *)&this->field_0x4cb = uVar6;
                    *(undefined4 *)&this->field_0x4d9 = 1;
                  }
                  if (*(int *)&this->field_0x4d9 == 1) {
                    uVar11 = thunk_FUN_004176c0(this,*(short *)&this->field_0x4cb);
                    uVar11 = thunk_FUN_00417910(this,(short)uVar11);
                    if (uVar11 == 0xffffffff) {
                      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x223c,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STBoatC__LoadRC__LOADRC_ODEPOT_007aa2dc);
                      if (iVar7 != 0) {
                        pcVar3 = (code *)swi(3);
                        iVar7 = (*pcVar3)();
                        return iVar7;
                      }
                      iVar7 = 0x223d;
                      goto LAB_004660e9;
                    }
                    if (uVar11 == 0) {
                      *(undefined4 *)&this->field_0x4d9 = 2;
                      goto switchD_00466448_caseD_2;
                    }
                  }
                  if (*(int *)&this->field_0x4d9 == 2) {
                    thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                                       *(short *)&this->field_0x4c5 * 0xc9 + 100,
                                       *(short *)&this->field_0x4c7 * 0xc9 + 100,
                                       *(short *)&this->field_0x4c9 * 200 + 100,this->field_0x61);
                    *(undefined4 *)&this->field_0x4d9 = 3;
                  }
                  if (*(int *)&this->field_0x4d9 == 3) {
                    local_10 = thunk_FUN_00415ed0(this,&local_14,&local_18);
                    param_1 = (int *)0x0;
                    if (this->field_0x2bf != '\0') {
                      local_c = (undefined4 *)&this->field_0x2b3;
                      do {
                        puVar12 = (undefined4 *)
                                  thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                                     *(short *)&this->field_0x6c);
                        local_24 = *puVar12;
                        local_20 = *(short *)(puVar12 + 1);
                        if (DAT_0080732c == 1) {
                          bVar26 = 0;
                          sVar25 = 0;
                          iVar9 = -1;
                          uVar11 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
                          sVar24 = 0;
                          *(uint *)&this->field_0x1c = uVar11;
                          sVar23 = 0;
                          sVar22 = 0;
                          uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                          sVar21 = 0;
                          *(uint *)&this->field_0x1c = uVar13;
                          local_1c = uVar13 * 0x41c64e6d + 0x3039;
                          sVar20 = 0;
                          *(uint *)&this->field_0x1c = local_1c;
                          sVar19 = 0;
                          lVar18 = Library::MSVCRT::__ftol();
                          iVar7 = (int)(short)lVar18 + (uVar11 >> 0x10) % 7 +
                                  (int)(short)this->field_0045 + -3 + (int)local_20;
                          iVar8 = ((uVar13 >> 0x10) % 7 + (int)(short)this->field_0043) -
                                  (int)local_24._2_2_;
                          uVar11 = local_1c;
                        }
                        else {
                          bVar26 = 0;
                          uVar13 = *(int *)&this->field_0x1c * 0x41c64e6d + 0x3039;
                          sVar25 = 0;
                          iVar9 = -1;
                          uVar15 = uVar13 * 0x41c64e6d + 0x3039;
                          sVar24 = 0;
                          sVar23 = 0;
                          sVar22 = 0;
                          sVar21 = 0;
                          sVar20 = 0;
                          *(uint *)&this->field_0x1c = uVar13;
                          uVar11 = uVar15 * 0x41c64e6d + 0x3039;
                          sVar19 = 0;
                          *(uint *)&this->field_0x1c = uVar15;
                          *(uint *)&this->field_0x1c = uVar11;
                          iVar7 = (uVar13 >> 0x10) % 7 + (int)(short)this->field_0045 + -3 +
                                  (int)local_20;
                          local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                          iVar8 = ((uVar15 >> 0x10) % 7 + (int)(short)this->field_0043) -
                                  (int)local_24._2_2_;
                        }
                        TraksClassTy::TraksCreate
                                  (DAT_00802a7c,1,2,7,
                                   (uVar11 >> 0x10) % 7 + (int)(short)this->field_0041 + -3 +
                                   (int)(short)local_24,iVar8 + -3,iVar7,sVar19,sVar20,sVar21,sVar22
                                   ,sVar23,sVar24,iVar9,sVar25,bVar26);
                        param_1 = (int *)((int)param_1 + 1);
                        local_c = (undefined4 *)((int)local_c + 6);
                      } while ((int)param_1 < (int)(uint)(byte)this->field_0x2bf);
                    }
                    if (local_10 == -1) {
                      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2262,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STBoatC__LoadRC__LOADRC_ODEPOT_2_007aa2b4);
                      if (iVar7 != 0) {
                        pcVar3 = (code *)swi(3);
                        iVar7 = (*pcVar3)();
                        return iVar7;
                      }
                      iVar7 = 0x2263;
                      goto LAB_004660e9;
                    }
                    if (local_10 == 0) {
                      this->field_04CD = 0;
                      *(undefined4 *)&this->field_0x4d1 = 0;
                      this->field_00B7 = 3;
                      bVar4 = thunk_FUN_0048d440((int)this);
                      if (CONCAT31(extraout_var_15,bVar4) == 0) {
                        thunk_FUN_004602b0((int *)this);
                        this->field_04D5 = CASE_0;
                        this->field_00B7 = 0;
                        iVar7 = Defence(this,0);
                        return (-(uint)(iVar7 != -1) & 3) - 1;
                      }
                      if (CONCAT31(extraout_var_15,bVar4) == 1) {
                        sVar19 = this->field_049F;
                        sVar20 = this->field_049D;
                        sVar21 = this->field_049B;
                        this->field_04D5 = CASE_E;
                      }
                      else {
                        sVar19 = *(short *)&this->field_0x4a9;
                        sVar20 = *(short *)&this->field_0x4a7;
                        sVar21 = *(short *)&this->field_0x4a5;
                        this->field_04D5 = CASE_7;
                      }
                      thunk_FUN_00481520(this,(int)sVar21,(int)sVar20,sVar19 + 1);
                      thunk_FUN_00460260(this,0);
                    }
                  }
                  goto LAB_004693c9;
                }
                goto switchD_00466448_caseD_2;
              }
              if (SVar14 != CASE_E) {
                iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x22ad,0,0,
                                           &DAT_007a4ccc,s_STBoatC__LoadRC___incorrect_entr_007aa254
                                          );
                if (iVar7 == 0) {
                  return -1;
                }
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              iVar7 = thunk_FUN_00460260(this,2);
              switch(iVar7) {
              case 1:
                thunk_FUN_004602b0((int *)this);
              case 0:
                this->field_04CD = 0;
                this->field_04D5 = CASE_1;
                this->field_00B7 = 3;
              case 3:
                iVar7 = (int)(short)this->field_049D;
                iVar8 = (int)(short)this->field_049B;
                iVar9 = (short)this->field_049F + 1;
                break;
              default:
                goto switchD_00466448_caseD_2;
              case -1:
                iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x228f,0,0,
                                           &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_MOVEWAIT_007aa27c
                                          );
                if (iVar7 != 0) {
                  pcVar3 = (code *)swi(3);
                  iVar7 = (*pcVar3)();
                  return iVar7;
                }
                iVar7 = 0x228f;
                goto LAB_004660e9;
              }
              goto LAB_004699da;
            }
            iVar7 = this->field_04CD + 1;
            this->field_04CD = iVar7;
            if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
              local_c = (undefined4 *)0x0;
              if (this->field_04BD == 1) {
                this->field_04BD = 0;
                if (this->field_04A1 != -1) {
                  sVar19 = this->field_049B;
                  sVar20 = this->field_049F;
                  sVar21 = this->field_049D;
                  if (((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
                      ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) || (DAT_007fb244 <= sVar20)) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = *(int *)(DAT_007fb248 +
                                    ((int)sVar20 * (int)DAT_007fb246 +
                                     (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8);
                  }
                  if (*(int *)(iVar8 + 0x18) != this->field_04A1) {
                    this->field_04A1 = 0xffffffff;
                  }
                }
              }
              if (*(int *)&this->field_0x4c1 == 1) {
                *(undefined4 *)&this->field_0x4c1 = 0;
                if (*(int *)&this->field_0x4ab != -1) {
                  sVar19 = *(short *)&this->field_0x4a5;
                  sVar20 = *(short *)&this->field_0x4a9;
                  sVar21 = *(short *)&this->field_0x4a7;
                  if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                     ((sVar21 < 0 ||
                      (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = *(int *)(DAT_007fb248 +
                                    ((int)sVar20 * (int)DAT_007fb246 +
                                     (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8);
                  }
                  if (*(int *)(iVar8 + 0x18) != *(int *)&this->field_0x4ab) {
                    *(undefined4 *)&this->field_0x4ab = 0xffffffff;
                  }
                }
                if (*(int *)&this->field_0x4ab != -1) {
                  local_c = (undefined4 *)0x1;
                  goto LAB_00469198;
                }
              }
              else {
LAB_00469198:
                if ((*(int *)&this->field_0x4ab != -1) && (local_c == (undefined4 *)0x0))
                goto LAB_004691ae;
              }
              this->field_04CD = 0;
              this->field_04D5 = CASE_D;
              this->field_00B7 = 3;
LAB_004693c9:
              iVar7 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
            }
LAB_004691ae:
            if (iVar7 % 10 != 1) goto switchD_00466448_caseD_2;
            sVar19 = *(short *)&this->field_0x4a5;
            sVar20 = *(short *)&this->field_0x4a9;
            sVar21 = *(short *)&this->field_0x4a7;
            if ((((((-1 < sVar19) && (sVar19 < DAT_007fb240)) &&
                  ((-1 < sVar21 &&
                   (((sVar21 < DAT_007fb242 && (-1 < sVar20)) && (sVar20 < DAT_007fb244)))))) &&
                 ((pvVar1 = *(void **)(DAT_007fb248 +
                                      ((int)sVar20 * (int)DAT_007fb246 +
                                       (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8),
                  pvVar1 != (void *)0x0 &&
                  (*(int *)((int)pvVar1 + 0x18) == *(int *)&this->field_0x4ab)))) &&
                (*(int *)((int)pvVar1 + 0x4b4) == 0)) && (*(int *)((int)pvVar1 + 0x245) != 6)) {
              if (iVar7 % 0x78 == 1) {
                SVar2 = this->field_06F7;
                if (SVar2 == CASE_8) {
                  pSVar17 = this->vtable;
                  uVar27 = 0xfb;
LAB_004692be:
                  (*pSVar17->vfunc_90)(3,uVar27);
                }
                else if (SVar2 == CASE_14) {
                  (*this->vtable->vfunc_90)(3,0x15f);
                }
                else if (SVar2 == CASE_1A) {
                  pSVar17 = this->vtable;
                  uVar27 = 0x19e;
                  goto LAB_004692be;
                }
              }
              iVar7 = *(int *)&this->field_0x7d2;
              iVar8 = 1;
              if (iVar7 < 1) {
                iVar7 = *(int *)&this->field_0x7d6;
                if (iVar7 < 1) {
                  iVar7 = *(int *)&this->field_0x7da;
                  if (0 < iVar7) {
                    if (iVar7 < 1) {
                      iVar8 = iVar7;
                    }
                    thunk_FUN_004e1d70(pvVar1,0xde,iVar8 * 0x14);
                    thunk_FUN_004e16d0(pvVar1,this->field_0018);
                    *(int *)&this->field_0x7da = *(int *)&this->field_0x7da - iVar8;
                  }
                }
                else {
                  if (iVar7 < 1) {
                    iVar8 = iVar7;
                  }
                  thunk_FUN_004e1d70(pvVar1,0xdd,iVar8 * 3);
                  thunk_FUN_004e16d0(pvVar1,this->field_0018);
                  *(int *)&this->field_0x7d6 = *(int *)&this->field_0x7d6 - iVar8;
                }
              }
              else {
                if (iVar7 < 1) {
                  iVar8 = iVar7;
                }
                thunk_FUN_004e1d70(pvVar1,0xdc,iVar8 * 5);
                thunk_FUN_004e16d0(pvVar1,this->field_0018);
                *(int *)&this->field_0x7d2 = *(int *)&this->field_0x7d2 - iVar8;
              }
              if (*(int *)&this->field_0x7da + *(int *)&this->field_0x7d6 +
                  *(int *)&this->field_0x7d2 != 0) goto switchD_00466448_caseD_2;
            }
            thunk_FUN_0048d930((int)this);
            this->field_04CD = 0;
            this->field_04D5 = CASE_D;
            this->field_00B7 = 3;
            goto switchD_00466448_caseD_2;
          }
          if ((int)this->field_04CD < 1) {
            iVar7 = thunk_FUN_00460260(this,2);
            switch(iVar7) {
            case 0:
              if (((this->field_0047 == *(short *)&this->field_0x4c5) &&
                  (this->field_0049 == *(short *)&this->field_0x4c7)) &&
                 (this->field_004B == *(short *)&this->field_0x4c9)) {
                this->field_04D5 = CASE_B;
                *(undefined4 *)&this->field_0x4d9 = 0;
                iVar7 = (*this->vtable->vfunc_D8)();
                return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
              }
              sVar19 = *(short *)&this->field_0x4a5;
              sVar20 = *(short *)&this->field_0x4a9;
              sVar21 = *(short *)&this->field_0x4a7;
              if ((((-1 < sVar19) && (sVar19 < DAT_007fb240)) &&
                  ((-1 < sVar21 &&
                   (((sVar21 < DAT_007fb242 && (-1 < sVar20)) && (sVar20 < DAT_007fb244)))))) &&
                 ((pvVar1 = *(void **)(DAT_007fb248 +
                                      ((int)sVar20 * (int)DAT_007fb246 +
                                       (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8),
                  pvVar1 != (void *)0x0 &&
                  (*(int *)((int)pvVar1 + 0x18) == *(int *)&this->field_0x4ab)))) {
                thunk_FUN_004e1690(pvVar1,this->field_0018);
              }
              return 0;
            case 1:
              goto switchD_0046878c_caseD_1;
            default:
              goto switchD_004660af_caseD_2;
            case 3:
              sVar19 = *(short *)&this->field_0x4a5;
              sVar20 = *(short *)&this->field_0x4a9;
              sVar21 = *(short *)&this->field_0x4a7;
              if ((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < sVar21)) &&
                 (((sVar21 < DAT_007fb242 && (-1 < sVar20)) &&
                  ((sVar20 < DAT_007fb244 &&
                   (pvVar1 = *(void **)(DAT_007fb248 +
                                       ((int)sVar20 * (int)DAT_007fb246 +
                                        (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8),
                   pvVar1 != (void *)0x0)))))) {
                thunk_FUN_0048d650(this,pvVar1);
              }
              thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4c5,
                                 (int)*(short *)&this->field_0x4c7,(int)*(short *)&this->field_0x4c9
                                );
              goto LAB_00468c49;
            case -1:
              iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2126,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__move_to_depot_2_007aa354);
              if (iVar7 != 0) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              iVar7 = 0x2126;
              goto LAB_004660e9;
            }
          }
          iVar7 = this->field_04CD + 1;
          this->field_04CD = iVar7;
          if (iVar7 == 2) {
            iVar7 = Defence(this,0);
            if (iVar7 != -1) {
              return 2;
            }
            return -1;
          }
          iVar7 = Defence(this,2);
          if (iVar7 == -1) {
            return -1;
          }
          if (this->field_082E != 0) {
            return 2;
          }
          if (this->field_04BD == 1) {
LAB_004685d3:
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar19 = this->field_049B;
              sVar20 = this->field_049F;
              sVar21 = this->field_049D;
              if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                 ((sVar21 < 0 ||
                  (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(DAT_007fb248 +
                                ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                                (int)sVar19) * 8);
              }
              if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
          }
          else {
            if (*(int *)&this->field_0x4c1 != 1) {
              return 2;
            }
            if (this->field_04BD == 1) goto LAB_004685d3;
          }
          if (*(int *)&this->field_0x4c1 == 1) {
            *(undefined4 *)&this->field_0x4c1 = 0;
            if (*(int *)&this->field_0x4ab != -1) {
              sVar19 = *(short *)&this->field_0x4a5;
              sVar20 = *(short *)&this->field_0x4a9;
              sVar21 = *(short *)&this->field_0x4a7;
              if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                 (((sVar21 < 0 || ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) ||
                  (DAT_007fb244 <= sVar20)))) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(DAT_007fb248 +
                                ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                                (int)sVar19) * 8);
              }
              if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
                *(undefined4 *)&this->field_0x4ab = 0xffffffff;
              }
            }
          }
          bVar4 = thunk_FUN_0048d440((int)this);
          if (CONCAT31(extraout_var_13,bVar4) == 0) {
            thunk_FUN_004602b0((int *)this);
            this->field_04D5 = CASE_0;
            goto LAB_00469979;
          }
          if (CONCAT31(extraout_var_13,bVar4) == 7) {
            if (*(int *)&this->field_0x4ab == -1) {
              return 2;
            }
            goto LAB_00468742;
          }
          goto LAB_00465e40;
        }
        if ((int)this->field_04CD < 1) {
          iVar7 = thunk_FUN_00460260(this,2);
          switch(iVar7) {
          case 0:
            iVar7 = thunk_FUN_00490570((int)this);
            if (iVar7 == 1) {
              sVar19 = *(short *)&this->field_0x4a5;
              sVar20 = *(short *)&this->field_0x4a9;
              sVar21 = *(short *)&this->field_0x4a7;
              if ((((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < sVar21)) &&
                   ((sVar21 < DAT_007fb242 && (-1 < sVar20)))) &&
                  ((sVar20 < DAT_007fb244 &&
                   ((iVar7 = *(int *)(DAT_007fb248 +
                                     ((int)sVar20 * (int)DAT_007fb246 +
                                      (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8),
                    iVar7 != 0 && (*(int *)(iVar7 + 0x18) == *(int *)&this->field_0x4ab)))))) &&
                 (iVar7 = thunk_FUN_004e1490(iVar7), iVar7 != 1)) {
                uVar6 = (undefined2)((uint)&this->field_0x4af >> 0x10);
                thunk_FUN_0048dfd0(CONCAT22(uVar6,this->field_0047),
                                   CONCAT22(extraout_var_24,this->field_0049),
                                   CONCAT22(extraout_var_20,this->field_004B),
                                   CONCAT22(uVar6,*(undefined2 *)&this->field_0x4a5),
                                   CONCAT22(extraout_var_24,*(undefined2 *)&this->field_0x4a7),
                                   (int *)CONCAT22(extraout_var_20,*(short *)&this->field_0x4a9 + 1)
                                   ,1,(short *)&this->field_0x4af,(short *)&this->field_0x4b1,
                                   (short *)&this->field_0x4b3);
                this->field_04D5 = CASE_8;
                this->field_00B7 = 0;
                thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4af,
                                   (int)*(short *)&this->field_0x4b1,
                                   (int)*(short *)&this->field_0x4b3);
                break;
              }
            }
            this->field_04D5 = CASE_9;
            goto LAB_00469979;
          case 1:
            if ((this->field_04BD != 1) && (*(int *)&this->field_0x4c1 != 1))
            goto switchD_004660af_caseD_2;
            local_c = (undefined4 *)0x0;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar19 = this->field_049B;
                sVar20 = this->field_049F;
                sVar21 = this->field_049D;
                if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                   ((sVar21 < 0 ||
                    (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(DAT_007fb248 +
                                  ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                  + (int)sVar19) * 8);
                }
                if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (*(int *)&this->field_0x4c1 == 1) {
              *(undefined4 *)&this->field_0x4c1 = 0;
              if (*(int *)&this->field_0x4ab != -1) {
                sVar19 = *(short *)&this->field_0x4a5;
                sVar20 = *(short *)&this->field_0x4a9;
                sVar21 = *(short *)&this->field_0x4a7;
                if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
                    ((sVar21 < 0 || ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))))) ||
                   (DAT_007fb244 <= sVar20)) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = *(int *)(DAT_007fb248 +
                                  ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                  + (int)sVar19) * 8);
                }
                if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
                  *(undefined4 *)&this->field_0x4ab = 0xffffffff;
                }
              }
              if (*(int *)&this->field_0x4ab != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            bVar4 = thunk_FUN_0048d440((int)this);
            if (CONCAT31(extraout_var_08,bVar4) == 0) goto LAB_00467fe4;
            if (CONCAT31(extraout_var_08,bVar4) == 7) {
              if ((*(int *)&this->field_0x4ab != -1) && (local_c == (undefined4 *)0x0))
              goto switchD_004660af_caseD_2;
              thunk_FUN_004602b0((int *)this);
              if (*(int *)&this->field_0x4ab == -1) {
                this->field_04CD = this->field_04CD + 1;
                iVar7 = (*this->vtable->vfunc_D8)();
                return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
              }
              if (local_c != (undefined4 *)0x1) goto switchD_004660af_caseD_2;
              thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4a5,
                                 (int)*(short *)&this->field_0x4a7,*(short *)&this->field_0x4a9 + 1)
              ;
            }
            else {
              thunk_FUN_004602b0((int *)this);
              this->field_04D5 = CASE_1;
              thunk_FUN_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                                 (short)this->field_049F + 1);
            }
            break;
          default:
            goto switchD_004660af_caseD_2;
          case 3:
            thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4a5,
                               (int)*(short *)&this->field_0x4a7,*(short *)&this->field_0x4a9 + 1);
            break;
          case -1:
            iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1fb8,0,0,
                                       &DAT_007a4ccc,s_STBoatC__LoadRC__move_to_depot_e_007aa3bc);
            if (iVar7 != 0) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            iVar7 = 0x1fb8;
            goto LAB_004660e9;
          }
          goto LAB_00468c49;
        }
        iVar7 = this->field_04CD + 1;
        this->field_04CD = iVar7;
        if (iVar7 == 2) {
          iVar7 = Defence(this,0);
          if (iVar7 != -1) {
            return 2;
          }
          return -1;
        }
        iVar7 = Defence(this,2);
        if (iVar7 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_0046779f:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar19 = this->field_049B;
            sVar20 = this->field_049F;
            sVar21 = this->field_049D;
            if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
               (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 +
                              ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                              (int)sVar19) * 8);
            }
            if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
        }
        else {
          if (*(int *)&this->field_0x4c1 != 1) {
            return 2;
          }
          if (this->field_04BD == 1) goto LAB_0046779f;
        }
        if (*(int *)&this->field_0x4c1 == 1) {
          *(undefined4 *)&this->field_0x4c1 = 0;
          if (*(int *)&this->field_0x4ab != -1) {
            sVar19 = *(short *)&this->field_0x4a5;
            sVar20 = *(short *)&this->field_0x4a9;
            sVar21 = *(short *)&this->field_0x4a7;
            if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
               ((sVar21 < 0 ||
                (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 +
                              ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                              (int)sVar19) * 8);
            }
            if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
              *(undefined4 *)&this->field_0x4ab = 0xffffffff;
            }
          }
        }
        bVar4 = thunk_FUN_0048d440((int)this);
        if (CONCAT31(extraout_var_07,bVar4) == 0) {
          thunk_FUN_004602b0((int *)this);
          this->field_04D5 = CASE_0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_07,bVar4) != 7) {
          this->field_04CD = 0;
          this->field_04D5 = CASE_1;
          goto LAB_00465e5a;
        }
        if (*(int *)&this->field_0x4ab == -1) {
          return 2;
        }
        this->field_04CD = 0;
        goto LAB_0046875c;
      }
      iVar7 = *(int *)&this->field_0x4d1 + 1;
      *(int *)&this->field_0x4d1 = iVar7;
      if (iVar7 < 0x47) goto switchD_00466448_caseD_2;
      iVar7 = thunk_FUN_00460260(this,2);
      switch(iVar7) {
      case 1:
        iVar7 = this->field_04CD + 1;
        this->field_04CD = iVar7;
        if (iVar7 < 3) goto switchD_00466448_caseD_2;
        thunk_FUN_004602b0((int *)this);
      case 0:
        this->field_04CD = 0;
        *(undefined4 *)&this->field_0x4d1 = 0;
        this->field_04D5 = CASE_7;
        this->field_00B7 = 3;
      case 3:
        iVar7 = (int)*(short *)&this->field_0x4a7;
        iVar8 = (int)*(short *)&this->field_0x4a5;
        iVar9 = *(short *)&this->field_0x4a9 + 1;
        break;
      default:
        goto switchD_00466448_caseD_2;
      case -1:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1f53,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadRC__LOADRC_MOVEWAIT_007aa3e8);
        if (iVar7 != 0) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        iVar7 = 0x1f53;
        goto LAB_004660e9;
      }
      goto LAB_004699da;
    }
    iVar7 = thunk_FUN_00460260(this,2);
    switch(iVar7) {
    case 0:
      iVar7 = thunk_FUN_00490570((int)this);
      if (iVar7 != 1) {
        this->field_04D5 = CASE_3;
        this->field_00B7 = 3;
        iVar7 = Defence(this,0);
        return (-(uint)(iVar7 != -1) & 3) - 1;
      }
      iVar8 = CONCAT22(extraout_var_18,this->field_049B);
      iVar7 = CONCAT22((short)((uint)&this->field_0x4af >> 0x10),this->field_049D);
      piVar16 = (int *)CONCAT22(extraout_var_23,this->field_049F + 1);
LAB_00467da5:
      thunk_FUN_0048dfd0(CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0047),
                         CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0049),
                         CONCAT22((short)((uint)piVar16 >> 0x10),this->field_004B),iVar8,iVar7,
                         piVar16,1,(short *)&this->field_0x4af,(short *)&this->field_0x4b1,
                         (short *)&this->field_0x4b3);
      thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4af,(int)*(short *)&this->field_0x4b1,
                         (int)*(short *)&this->field_0x4b3);
      break;
    case 1:
      if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
        local_c = (undefined4 *)0x0;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar19 = this->field_049B;
            sVar20 = this->field_049F;
            sVar21 = this->field_049D;
            if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
               ((sVar21 < 0 ||
                (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))))) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 +
                              ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                              (int)sVar19) * 8);
            }
            if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
          if (this->field_04A1 != -1) {
            local_c = (undefined4 *)0x1;
          }
        }
        if (*(int *)&this->field_0x4c1 == 1) {
          *(undefined4 *)&this->field_0x4c1 = 0;
          if (*(int *)&this->field_0x4ab != -1) {
            sVar19 = *(short *)&this->field_0x4a5;
            sVar20 = *(short *)&this->field_0x4a9;
            sVar21 = *(short *)&this->field_0x4a7;
            if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
               (((sVar21 < 0 || ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) ||
                (DAT_007fb244 <= sVar20)))) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 +
                              ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                              (int)sVar19) * 8);
            }
            if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
              *(undefined4 *)&this->field_0x4ab = 0xffffffff;
            }
          }
        }
        bVar4 = thunk_FUN_0048d440((int)this);
        if (CONCAT31(extraout_var_02,bVar4) == 0) {
LAB_00467fe4:
          thunk_FUN_004602b0((int *)this);
          this->field_04D5 = CASE_0;
          goto LAB_00469979;
        }
        if (CONCAT31(extraout_var_02,bVar4) == 1) {
          if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
          goto switchD_00466448_caseD_2;
          thunk_FUN_004602b0((int *)this);
          if (this->field_04A1 == -1) {
            this->field_04CD = this->field_04CD + 1;
            goto switchD_00466448_caseD_2;
          }
          if (local_c != (undefined4 *)0x1) goto LAB_00466744;
          this->field_00B7 = 3;
          this->field_04D5 = CASE_1;
          thunk_FUN_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                             (short)this->field_049F + 1);
        }
        else {
LAB_0046817e:
          thunk_FUN_004602b0((int *)this);
          this->field_00B7 = 3;
          this->field_04D5 = CASE_7;
          thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4a5,
                             (int)*(short *)&this->field_0x4a7,*(short *)&this->field_0x4a9 + 1);
        }
      }
      else {
LAB_00466744:
        sVar19 = this->field_049B;
        sVar20 = this->field_049F;
        sVar21 = this->field_049D;
        if ((((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
             ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) ||
            ((DAT_007fb244 <= sVar20 ||
             ((pvVar1 = *(void **)(DAT_007fb248 +
                                  ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                  + (int)sVar19) * 8), pvVar1 == (void *)0x0 ||
              (*(int *)((int)pvVar1 + 0x18) != this->field_04A1)))))) ||
           (iVar7 = thunk_FUN_004e1490((int)pvVar1), iVar7 != 1)) goto switchD_00466448_caseD_2;
        thunk_FUN_004602b0((int *)this);
        thunk_FUN_004e15f0(pvVar1,this->field_0018);
        this->field_04CD = 0;
        this->field_04D5 = CASE_4;
        thunk_FUN_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                           (short)this->field_049F + 1);
      }
      break;
    default:
      goto switchD_00466448_caseD_2;
    case 3:
      iVar7 = thunk_FUN_00490570((int)this);
      if (iVar7 == 1) {
        iVar7 = CONCAT22((short)((uint)&this->field_0x4b1 >> 0x10),this->field_049D);
        iVar8 = CONCAT22((short)((uint)&this->field_0x4af >> 0x10),this->field_049B);
        piVar16 = (int *)CONCAT22((short)((uint)&this->field_0x4b3 >> 0x10),this->field_049F + 1);
LAB_00467e31:
        thunk_FUN_0048dfd0(CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0047),
                           CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0049),
                           CONCAT22((short)((uint)piVar16 >> 0x10),this->field_004B),iVar8,iVar7,
                           piVar16,1,(short *)&this->field_0x4af,(short *)&this->field_0x4b1,
                           (short *)&this->field_0x4b3);
      }
LAB_00467e48:
      thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4af,(int)*(short *)&this->field_0x4b1,
                         (int)*(short *)&this->field_0x4b3);
      break;
    case -1:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d66,0,0,&DAT_007a4ccc,
                                 s_STBoatC__LoadRC__correct_move_to_007aa4b0);
      if (iVar7 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d66);
        return 0xffff;
      }
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
LAB_004699e2:
  thunk_FUN_00460260(this,0);
switchD_00466448_caseD_2:
  iVar7 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
switchD_0046878c_caseD_1:
  if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
    local_c = (undefined4 *)0x0;
    if (this->field_04BD == 1) {
      this->field_04BD = 0;
      if (this->field_04A1 != -1) {
        sVar19 = this->field_049B;
        sVar20 = this->field_049F;
        sVar21 = this->field_049D;
        if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
           (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(DAT_007fb248 +
                          ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                          (int)sVar19) * 8);
        }
        if (*(int *)(iVar7 + 0x18) != this->field_04A1) {
          this->field_04A1 = 0xffffffff;
        }
      }
    }
    if (*(int *)&this->field_0x4c1 == 1) {
      *(undefined4 *)&this->field_0x4c1 = 0;
      if (*(int *)&this->field_0x4ab != -1) {
        sVar19 = *(short *)&this->field_0x4a5;
        sVar20 = *(short *)&this->field_0x4a9;
        sVar21 = *(short *)&this->field_0x4a7;
        if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
           ((sVar21 < 0 || (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20))))
           )) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(DAT_007fb248 +
                          ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                          (int)sVar19) * 8);
        }
        if (*(int *)(iVar7 + 0x18) != *(int *)&this->field_0x4ab) {
          *(undefined4 *)&this->field_0x4ab = 0xffffffff;
        }
      }
      if (*(int *)&this->field_0x4ab != -1) {
        local_c = (undefined4 *)0x1;
      }
    }
    bVar4 = thunk_FUN_0048d440((int)this);
    if (CONCAT31(extraout_var_14,bVar4) == 0) {
      thunk_FUN_004602b0((int *)this);
      this->field_04D5 = CASE_0;
      goto LAB_00469979;
    }
    if (CONCAT31(extraout_var_14,bVar4) != 7) {
      thunk_FUN_004602b0((int *)this);
      sVar20 = this->field_049D;
      sVar19 = this->field_049B;
      iVar7 = (short)this->field_049F + 1;
      this->field_04CD = 0;
      this->field_00B7 = 3;
      this->field_04D5 = CASE_1;
      goto LAB_00468c40;
    }
    if ((*(int *)&this->field_0x4ab != -1) && (local_c == (undefined4 *)0x0))
    goto switchD_004660af_caseD_2;
    thunk_FUN_004602b0((int *)this);
    if (*(int *)&this->field_0x4ab == -1) {
      this->field_04CD = this->field_04CD + 1;
      iVar7 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
    }
    if (local_c == (undefined4 *)0x1) {
      this->field_04CD = 0;
      this->field_04D5 = CASE_7;
      goto LAB_00468b38;
    }
  }
  thunk_FUN_004602b0((int *)this);
  sVar19 = *(short *)&this->field_0x4a5;
  sVar20 = *(short *)&this->field_0x4a9;
  sVar21 = *(short *)&this->field_0x4a7;
  if (((-1 < sVar19) && (sVar19 < DAT_007fb240)) &&
     ((-1 < sVar21 &&
      ((((sVar21 < DAT_007fb242 && (-1 < sVar20)) && (sVar20 < DAT_007fb244)) &&
       (pvVar1 = *(void **)(DAT_007fb248 +
                           ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                           (int)sVar19) * 8), pvVar1 != (void *)0x0)))))) {
    thunk_FUN_0048d650(this,pvVar1);
  }
  thunk_FUN_00481520(this,(int)*(short *)&this->field_0x4c5,(int)*(short *)&this->field_0x4c7,
                     (int)*(short *)&this->field_0x4c9);
  goto LAB_00468c49;
}


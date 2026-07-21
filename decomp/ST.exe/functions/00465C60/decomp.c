
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::LoadRC */

int __thiscall STBoatC::LoadRC(STBoatC *this,int *param_1,undefined4 param_2,int param_3)

{
  STBoatC_field_06F7State SVar1;
  STFishC *pSVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  STWorldObject *pSVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  int iVar9;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined3 extraout_var_15;
  STBoatC_field_04D5State SVar15;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  uint uVar16;
  undefined4 in_EDX;
  undefined2 extraout_var_22;
  undefined2 extraout_var_23;
  int *piVar17;
  undefined2 extraout_var_24;
  undefined2 extraout_var_25;
  STBoatCVTable *pSVar18;
  longlong lVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  byte bVar27;
  undefined4 uVar28;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  undefined3 extraout_var_16;
  
  local_8 = 0;
  if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
    puVar13 = &this->field_02CC;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    this->field_02C4 = 0;
    this->field_049B = *(undefined2 *)&this->field_0x353;
    this->field_049D = *(undefined2 *)&this->field_0x355;
    this->field_049F = *(undefined2 *)&this->field_0x357;
    this->field_04A1 = *(undefined4 *)&this->field_0x359;
    this->field_04A5 = *(undefined2 *)&this->field_0x35d;
    this->field_04A7 = *(undefined2 *)&this->field_0x35f;
    this->field_04A9 = *(undefined2 *)&this->field_0x361;
    this->field_04AB = *(undefined4 *)&this->field_0x363;
    this->field_04B5 = *(undefined4 *)&this->field_0x367;
    *(undefined4 *)&this->field_0x4b9 = *(undefined4 *)&this->field_0x36b;
    *(undefined4 *)&this->field_0x4c1 = 0;
    this->field_04BD = 0;
    *(undefined4 *)&this->field_0x4d1 = 0;
    this->field_04CD = 0;
    bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
    SVar15 = CONCAT31(extraout_var_16,bVar4);
    if (SVar15 == CASE_0) {
LAB_00469972:
      this->field_04D5 = CASE_0;
      goto cf_common_exit_00469979;
    }
    this->field_04D5 = SVar15;
    this->field_00B7 = 3;
    if (SVar15 == CASE_1) {
      sVar22 = this->field_049F;
      sVar21 = this->field_049D;
      sVar20 = this->field_049B;
    }
    else {
      sVar22 = this->field_04A9;
      sVar21 = this->field_04A7;
      sVar20 = this->field_04A5;
    }
    iVar10 = sVar22 + 1;
    iVar7 = (int)sVar21;
    iVar9 = (int)sVar20;
cf_common_exit_004699DA:
    sub_00481520(this,iVar9,iVar7,iVar10);
  }
  else {
    SVar15 = this->field_04D5;
    if (SVar15 == CASE_0) {
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
          sVar20 = this->field_049B;
          sVar21 = this->field_049F;
          sVar22 = this->field_049D;
          if (((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
              ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) || (g_worldGrid.sizeZ <= sVar21)) {
            pSVar8 = (STWorldObject *)0x0;
          }
          else {
            pSVar8 = g_worldGrid.cells
                     [(int)g_worldGrid.planeStride * (int)sVar21 +
                      (int)g_worldGrid.sizeX * (int)sVar22 + (int)sVar20].objects[0];
          }
          if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
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
        if (this->field_04AB != -1) {
          sVar20 = this->field_04A5;
          sVar21 = this->field_04A9;
          sVar22 = this->field_04A7;
          if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
             ((sVar22 < 0 ||
              (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21))))))
          {
            pSVar8 = (STWorldObject *)0x0;
          }
          else {
            pSVar8 = g_worldGrid.cells
                     [(int)sVar21 * (int)g_worldGrid.planeStride +
                      (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
          }
          if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
      if (CONCAT31(extraout_var,bVar4) == 0) {
        return 2;
      }
      if (CONCAT31(extraout_var,bVar4) == 1) {
        if (this->field_04A1 == -1) {
          return 2;
        }
cf_common_exit_00465E40:
        this->field_04CD = 0;
        this->field_04D5 = CASE_1;
        this->field_00B7 = 3;
        goto cf_common_exit_00465E5A;
      }
cf_common_exit_00468742:
      this->field_04CD = 0;
      this->field_04D5 = CASE_7;
      this->field_00B7 = 3;
cf_common_exit_0046875C:
      sVar20 = this->field_04A9;
      sVar21 = this->field_04A7;
      sVar22 = this->field_04A5;
LAB_00465e72:
      sub_00481520(this,(int)sVar22,(int)sVar21,sVar20 + 1);
cf_common_exit_00465E7B:
      sub_00460260(this,0);
      return 2;
    }
    if (SVar15 == CASE_1) {
      if ((int)this->field_04CD < 1) {
        iVar7 = sub_00460260(this,2);
        switch(iVar7) {
        case 0:
          iVar7 = sub_00490570(this);
          if (iVar7 == 1) {
            sVar20 = this->field_049B;
            sVar21 = this->field_049F;
            sVar22 = this->field_049D;
            if ((((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
                 ((sVar22 < g_worldGrid.sizeY && (-1 < sVar21)))) &&
                ((sVar21 < g_worldGrid.sizeZ &&
                 ((pSVar8 = g_worldGrid.cells
                            [(int)sVar21 * (int)g_worldGrid.planeStride +
                             (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0],
                  pSVar8 != (STWorldObject *)0x0 &&
                  (*(int *)&pSVar8->field_0x18 == this->field_04A1)))))) &&
               (iVar7 = thunk_FUN_004e1490((int)pSVar8), iVar7 != 1)) {
              uVar6 = (undefined2)((uint)&this->field_0x4af >> 0x10);
              SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                        ((AnonReceiver_0048DFD0 *)this,CONCAT22(uVar6,this->field_0047),
                         CONCAT22(extraout_var_22,this->field_0049),
                         CONCAT22(extraout_var_17,this->field_004B),CONCAT22(uVar6,this->field_049B)
                         ,CONCAT22(extraout_var_22,this->field_049D),
                         (int *)CONCAT22(extraout_var_17,this->field_049F + 1),1,
                         (short *)&this->field_0x4af,(short *)&this->field_0x4b1,
                         (short *)&this->field_0x4b3);
              this->field_04D5 = CASE_2;
              this->field_00B7 = 0;
              sub_00481520(this,(int)*(short *)&this->field_0x4af,(int)*(short *)&this->field_0x4b1,
                           (int)*(short *)&this->field_0x4b3);
              break;
            }
          }
          this->field_04D5 = CASE_3;
          goto cf_common_exit_00469979;
        case 1:
          if ((this->field_04BD != 1) && (*(int *)&this->field_0x4c1 != 1))
          goto cf_common_exit_00468C50;
          local_c = (undefined4 *)0x0;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar20 = this->field_049B;
              sVar21 = this->field_049F;
              sVar22 = this->field_049D;
              if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                 ((sVar22 < 0 ||
                  (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))
                  ))) {
                pSVar8 = (STWorldObject *)0x0;
              }
              else {
                pSVar8 = g_worldGrid.cells
                         [(int)sVar21 * (int)g_worldGrid.planeStride +
                          (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
              }
              if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
            if (this->field_04A1 != -1) {
              local_c = (undefined4 *)0x1;
            }
          }
          if (*(int *)&this->field_0x4c1 == 1) {
            *(undefined4 *)&this->field_0x4c1 = 0;
            if (this->field_04AB != -1) {
              sVar20 = this->field_04A5;
              sVar21 = this->field_04A9;
              sVar22 = this->field_04A7;
              if ((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                  ((sVar22 < 0 || ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))))) ||
                 (g_worldGrid.sizeZ <= sVar21)) {
                pSVar8 = (STWorldObject *)0x0;
              }
              else {
                pSVar8 = g_worldGrid.cells
                         [(int)sVar21 * (int)g_worldGrid.planeStride +
                          (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
              }
              if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
          if (CONCAT31(extraout_var_01,bVar4) == 0) goto cf_common_exit_00467FE4;
          if (CONCAT31(extraout_var_01,bVar4) == 1) {
            if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
            goto cf_common_exit_00468C50;
            sub_004602B0(this);
            if (this->field_04A1 == -1) {
              this->field_04CD = this->field_04CD + 1;
              iVar7 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
            }
            if (local_c != (undefined4 *)0x1) goto cf_common_exit_00468C50;
LAB_00467018:
            sub_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                         (short)this->field_049F + 1);
          }
          else {
            sub_004602B0(this);
            this->field_04D5 = CASE_7;
LAB_00468b42:
            sub_00481520(this,(int)(short)this->field_04A5,(int)(short)this->field_04A7,
                         (short)this->field_04A9 + 1);
          }
          break;
        default:
          goto cf_common_exit_00468C50;
        case 3:
switchD_004660af_caseD_3:
          sub_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
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
          goto cf_error_exit_004660E9;
        }
cf_common_exit_00468C49:
        sub_00460260(this,0);
        goto cf_common_exit_00468C50;
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
          sVar20 = this->field_049B;
          sVar21 = this->field_049F;
          sVar22 = this->field_049D;
          if ((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
             (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))) {
            pSVar8 = (STWorldObject *)0x0;
          }
          else {
            pSVar8 = g_worldGrid.cells
                     [(int)sVar21 * (int)g_worldGrid.planeStride +
                      (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
          }
          if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
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
        if (this->field_04AB != -1) {
          sVar20 = this->field_04A5;
          sVar21 = this->field_04A9;
          sVar22 = this->field_04A7;
          if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
             ((sVar22 < 0 ||
              (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21))))))
          {
            pSVar8 = (STWorldObject *)0x0;
          }
          else {
            pSVar8 = g_worldGrid.cells
                     [(int)sVar21 * (int)g_worldGrid.planeStride +
                      (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
          }
          if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
      if (CONCAT31(extraout_var_00,bVar4) == 0) {
        sub_004602B0(this);
        this->field_04D5 = CASE_0;
cf_common_exit_00469979:
        iVar7 = Defence(this,0);
        return (-(uint)(iVar7 != -1) & 3) - 1;
      }
      if (CONCAT31(extraout_var_00,bVar4) != 1) goto LAB_00466087;
      if (this->field_04A1 == -1) {
        return 2;
      }
      this->field_04CD = 0;
cf_common_exit_00465E5A:
      sVar20 = this->field_049F;
      sVar21 = this->field_049D;
      sVar22 = this->field_049B;
      goto LAB_00465e72;
    }
    if (SVar15 != CASE_2) {
      if (SVar15 == CASE_3) {
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
          sVar20 = this->field_049B;
          sVar21 = this->field_049F;
          sVar22 = this->field_049D;
          if (sVar20 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeX <= sVar20) {
            return 2;
          }
          if (sVar22 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeY <= sVar22) {
            return 2;
          }
          if (sVar21 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeZ <= sVar21) {
            return 2;
          }
          pSVar8 = g_worldGrid.cells
                   [(int)sVar21 * (int)g_worldGrid.planeStride +
                    (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
          if (pSVar8 == (STWorldObject *)0x0) {
            return 2;
          }
          if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
            return 2;
          }
          iVar7 = thunk_FUN_004e1490((int)pSVar8);
          if (iVar7 != 1) {
            return 2;
          }
          thunk_FUN_004e15f0(pSVar8,this->field_0018);
          sVar21 = this->field_049D;
          sVar20 = this->field_049B;
          iVar7 = (short)this->field_049F + 1;
          this->field_04CD = 0;
          this->field_04D5 = CASE_4;
          this->field_00B7 = 0;
LAB_00468322:
          sub_00481520(this,(int)sVar20,(int)sVar21,iVar7);
          sub_00460260(this,0);
          return 2;
        }
        local_c = (undefined4 *)0x0;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar20 = this->field_049B;
            sVar21 = this->field_049F;
            sVar22 = this->field_049D;
            if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
               ((sVar22 < 0 ||
                (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))))
               ) {
              pSVar8 = (STWorldObject *)0x0;
            }
            else {
              pSVar8 = g_worldGrid.cells
                       [(int)sVar21 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
            }
            if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
          if (this->field_04A1 != -1) {
            local_c = (undefined4 *)0x1;
          }
        }
        if (*(int *)&this->field_0x4c1 == 1) {
          *(undefined4 *)&this->field_0x4c1 = 0;
          if (this->field_04AB != -1) {
            sVar20 = this->field_04A5;
            sVar21 = this->field_04A9;
            sVar22 = this->field_04A7;
            if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
               (((sVar22 < 0 || ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar21)))) {
              pSVar8 = (STWorldObject *)0x0;
            }
            else {
              pSVar8 = g_worldGrid.cells
                       [(int)sVar21 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
            }
            if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
        if (CONCAT31(extraout_var_03,bVar4) == 0) {
          sub_004602B0(this);
          this->field_04D5 = CASE_0;
          goto cf_common_exit_00469979;
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
          sub_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                       (short)this->field_049F + 1);
          goto cf_common_exit_00465E7B;
        }
LAB_00466087:
        this->field_04CD = 0;
        this->field_04D5 = CASE_7;
        goto cf_common_exit_0046875C;
      }
      if (SVar15 == CASE_4) {
        if ((int)this->field_04CD < 1) {
          iVar7 = sub_00460260(this,2);
          switch(iVar7) {
          case 0:
            this->field_04D5 = CASE_5;
            iVar7 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
          case 1:
            if ((this->field_04BD != 1) && (*(int *)&this->field_0x4c1 != 1))
            goto cf_common_exit_00468C50;
            local_c = (undefined4 *)0x0;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar20 = this->field_049B;
                sVar21 = this->field_049F;
                sVar22 = this->field_049D;
                if (((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar21)) {
                  pSVar8 = (STWorldObject *)0x0;
                }
                else {
                  pSVar8 = g_worldGrid.cells
                           [(int)sVar21 * (int)g_worldGrid.planeStride +
                            (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                }
                if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
              if (this->field_04A1 != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            if (*(int *)&this->field_0x4c1 == 1) {
              *(undefined4 *)&this->field_0x4c1 = 0;
              if (this->field_04AB != -1) {
                sVar20 = this->field_04A5;
                sVar21 = this->field_04A9;
                sVar22 = this->field_04A7;
                if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                   ((sVar22 < 0 ||
                    (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)
                     ))))) {
                  pSVar8 = (STWorldObject *)0x0;
                }
                else {
                  pSVar8 = g_worldGrid.cells
                           [(int)sVar21 * (int)g_worldGrid.planeStride +
                            (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                }
                if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
            }
            bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
            if (CONCAT31(extraout_var_05,bVar4) == 0) {
              sub_004602B0(this);
              this->field_04D5 = CASE_0;
              goto cf_common_exit_00469979;
            }
            if (CONCAT31(extraout_var_05,bVar4) == 1) {
              if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
              goto cf_common_exit_00468C50;
              sub_004602B0(this);
              if (this->field_04A1 == -1) {
                this->field_04CD = this->field_04CD + 1;
                iVar7 = (*this->vtable->vfunc_D8)();
                return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
              }
              if (local_c != (undefined4 *)0x1) goto cf_common_exit_00468C50;
              this->field_04CD = 0;
              this->field_04D5 = CASE_1;
              this->field_00B7 = 3;
              goto LAB_00467018;
            }
            sub_004602B0(this);
            this->field_04CD = 0;
            this->field_00B7 = 3;
            this->field_04D5 = CASE_7;
            iVar7 = (short)this->field_04A9 + 1;
            break;
          default:
            goto cf_common_exit_00468C50;
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
            goto cf_error_exit_004660E9;
          }
LAB_00467068:
          sVar21 = this->field_04A7;
          sVar20 = this->field_04A5;
LAB_00468c40:
          sub_00481520(this,(int)sVar20,(int)sVar21,iVar7);
          goto cf_common_exit_00468C49;
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
            sVar20 = this->field_049B;
            sVar21 = this->field_049F;
            sVar22 = this->field_049D;
            if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
               ((sVar22 < 0 ||
                (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))))
               ) {
              pSVar8 = (STWorldObject *)0x0;
            }
            else {
              pSVar8 = g_worldGrid.cells
                       [(int)sVar21 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
            }
            if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
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
          if (this->field_04AB != -1) {
            sVar20 = this->field_04A5;
            sVar21 = this->field_04A9;
            sVar22 = this->field_04A7;
            if ((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                ((sVar22 < 0 || ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))))) ||
               (g_worldGrid.sizeZ <= sVar21)) {
              pSVar8 = (STWorldObject *)0x0;
            }
            else {
              pSVar8 = g_worldGrid.cells
                       [(int)sVar21 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
            }
            if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
        if (CONCAT31(extraout_var_04,bVar4) == 0) {
          sub_004602B0(this);
          this->field_04D5 = CASE_0;
          goto cf_common_exit_00469979;
        }
        if (CONCAT31(extraout_var_04,bVar4) != 1) goto cf_common_exit_00468742;
        if (this->field_04A1 == -1) {
          return 2;
        }
        goto cf_common_exit_00465E40;
      }
      if (SVar15 == CASE_5) {
        this->field_04CD = this->field_04CD + 1;
        if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
          local_c = (undefined4 *)0x0;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar20 = this->field_049B;
              sVar21 = this->field_049F;
              sVar22 = this->field_049D;
              if (((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) || (g_worldGrid.sizeZ <= sVar21))
              {
                pSVar8 = (STWorldObject *)0x0;
              }
              else {
                pSVar8 = g_worldGrid.cells
                         [(int)sVar21 * (int)g_worldGrid.planeStride +
                          (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
              }
              if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
            if (this->field_04A1 != -1) {
              local_c = (undefined4 *)0x1;
            }
          }
          if (*(int *)&this->field_0x4c1 == 1) {
            *(undefined4 *)&this->field_0x4c1 = 0;
            if (this->field_04AB != -1) {
              sVar20 = this->field_04A5;
              sVar21 = this->field_04A9;
              sVar22 = this->field_04A7;
              if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                 ((sVar22 < 0 ||
                  (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))
                  ))) {
                pSVar8 = (STWorldObject *)0x0;
              }
              else {
                pSVar8 = g_worldGrid.cells
                         [(int)sVar21 * (int)g_worldGrid.planeStride +
                          (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
              }
              if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
          if (CONCAT31(extraout_var_06,bVar4) == 0) {
            sub_004602B0(this);
            this->field_04D5 = CASE_0;
            goto cf_common_exit_00469979;
          }
          if (CONCAT31(extraout_var_06,bVar4) != 1) {
            iVar7 = (int)(short)this->field_04A9;
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
              sub_00481520(this,(int)(short)this->field_04A5,(int)(short)this->field_04A7,
                           (short)this->field_04A9 + 1);
            }
            else if (local_c == (undefined4 *)0x1) {
              this->field_04D5 = CASE_1;
              sub_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
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
            goto cf_common_exit_004699E2;
          }
        }
        if ((int)this->field_04CD % 10 != 1) goto cf_common_exit_00468C50;
        sVar20 = this->field_049B;
        sVar21 = this->field_049F;
        sVar22 = this->field_049D;
        if ((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
            ((sVar22 < 0 ||
             (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21))))))
           || ((pSVar8 = g_worldGrid.cells
                         [(int)sVar21 * (int)g_worldGrid.planeStride +
                          (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0],
               pSVar8 == (STWorldObject *)0x0 || (*(int *)&pSVar8->field_0x18 != this->field_04A1)))
           ) {
          sub_0048D930(this);
          this->field_04CD = 0;
          this->field_04D5 = CASE_6;
LAB_00468b38:
          this->field_00B7 = 3;
          goto LAB_00468b42;
        }
        if ((*(int *)&pSVar8[0x21].field_0x10 == 0) && (*(int *)&pSVar8[0x10].field_0x5 != 6)) {
          thunk_FUN_004e1930(pSVar8,&local_8,0);
          iVar7 = thunk_FUN_00430910(local_8);
          local_18 = thunk_FUN_004e1930(pSVar8,&local_8,iVar7);
          if (local_18 == iVar7) {
            thunk_FUN_004e16d0(pSVar8,this->field_0018);
            if ((int)this->field_04CD % 0x78 == 1) {
              SVar1 = this->field_06F7;
              if (SVar1 == CASE_8) {
                pSVar18 = this->vtable;
                uVar28 = 0xfc;
LAB_0046739a:
                (*pSVar18->vfunc_90)(3,uVar28);
              }
              else if (SVar1 == CASE_14) {
                (*this->vtable->vfunc_90)(3,0x160);
              }
              else if (SVar1 == CASE_1A) {
                pSVar18 = this->vtable;
                uVar28 = 0x19f;
                goto LAB_0046739a;
              }
            }
            if (local_8 == 0xdc) {
              iVar9 = *(int *)&this->field_0x7d2 + 1;
              *(int *)&this->field_0x7d2 = iVar9;
              if (0x28 < iVar9 + this->field_07D6 + this->field_07DA) {
                *(int *)&this->field_0x7d2 = (0x28 - this->field_07D6) - this->field_07DA;
              }
            }
            else if (local_8 == 0xdd) {
              iVar9 = this->field_07D6 + 1;
              this->field_07D6 = iVar9;
              if (0x28 < iVar9 + *(int *)&this->field_0x7d2 + this->field_07DA) {
                this->field_07D6 = (0x28 - *(int *)&this->field_0x7d2) - this->field_07DA;
              }
            }
            else if (local_8 == 0xde) {
              iVar9 = this->field_07DA + 1;
              this->field_07DA = iVar9;
              if (0x28 < *(int *)&this->field_0x7d2 + this->field_07D6 + iVar9) {
                this->field_07DA = (0x28 - *(int *)&this->field_0x7d2) - this->field_07D6;
              }
            }
            else {
              iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1f2f,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_MINE___u_007aa440);
              if (iVar9 != 0) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
            }
          }
          if (((local_18 < iVar7) ||
              (this->field_07DA + this->field_07D6 + *(int *)&this->field_0x7d2 == 0x28)) ||
             (iVar7 = (*pSVar8->vtable[2].slots_00_28[10])(&local_8), iVar7 == 0))
          goto LAB_0046744c;
        }
        else {
LAB_0046744c:
          sub_0048D930(this);
          this->field_04CD = 0;
          this->field_04D5 = CASE_6;
          this->field_00B7 = 3;
          sub_00481520(this,(int)(short)this->field_04A5,(int)(short)this->field_04A7,
                       (short)this->field_04A9 + 1);
          sub_00460260(this,0);
        }
        iVar7 = (*pSVar8->vtable[2].slots_00_28[10])(&local_8);
        if (iVar7 == 0) {
          STAllPlayersC::_ChangeMD
                    (g_sTAllPlayers_007FA174,0,*(int **)&this->field_0x24,
                     CONCAT22(extraout_var_19,*(undefined2 *)&pSVar8[1].field_0xe));
          iVar7 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
        }
cf_common_exit_00468C50:
        iVar7 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
      }
      if (SVar15 != CASE_6) {
        if (SVar15 != CASE_7) {
          if (SVar15 == CASE_8) {
            iVar7 = sub_00460260(this,2);
            switch(iVar7) {
            case 0:
              iVar7 = sub_00490570(this);
              if (iVar7 != 1) {
                this->field_04D5 = CASE_9;
                this->field_00B7 = 3;
                goto cf_common_exit_00469979;
              }
              iVar9 = CONCAT22(extraout_var_21,this->field_04A5);
              iVar7 = CONCAT22((short)((uint)&this->field_0x4af >> 0x10),this->field_04A7);
              piVar17 = (int *)CONCAT22(extraout_var_25,this->field_04A9 + 1);
              break;
            case 1:
              if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
                local_c = (undefined4 *)0x0;
                if (this->field_04BD == 1) {
                  this->field_04BD = 0;
                  if (this->field_04A1 != -1) {
                    sVar20 = this->field_049B;
                    sVar21 = this->field_049F;
                    sVar22 = this->field_049D;
                    if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                       ((sVar22 < 0 ||
                        (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) ||
                         (g_worldGrid.sizeZ <= sVar21)))))) {
                      pSVar8 = (STWorldObject *)0x0;
                    }
                    else {
                      pSVar8 = g_worldGrid.cells
                               [(int)sVar21 * (int)g_worldGrid.planeStride +
                                (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                    }
                    if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
                      this->field_04A1 = 0xffffffff;
                    }
                  }
                  if (this->field_04A1 != -1) {
                    local_c = (undefined4 *)0x1;
                  }
                }
                if (*(int *)&this->field_0x4c1 == 1) {
                  *(undefined4 *)&this->field_0x4c1 = 0;
                  if (this->field_04AB != -1) {
                    sVar20 = this->field_04A5;
                    sVar21 = this->field_04A9;
                    sVar22 = this->field_04A7;
                    if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                       (((sVar22 < 0 || ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) ||
                        (g_worldGrid.sizeZ <= sVar21)))) {
                      pSVar8 = (STWorldObject *)0x0;
                    }
                    else {
                      pSVar8 = g_worldGrid.cells
                               [(int)sVar21 * (int)g_worldGrid.planeStride +
                                (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                    }
                    if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
                      this->field_04AB = 0xffffffff;
                    }
                  }
                }
                bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
                if (CONCAT31(extraout_var_09,bVar4) == 0) goto cf_common_exit_00467FE4;
                if (CONCAT31(extraout_var_09,bVar4) != 1) goto LAB_0046817e;
                if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
                goto cf_common_exit_004699E9;
                sub_004602B0(this);
                if (this->field_04A1 == -1) {
                  this->field_04CD = this->field_04CD + 1;
                  goto cf_common_exit_004699E9;
                }
                if (local_c == (undefined4 *)0x1) {
                  this->field_00B7 = 3;
                  this->field_04D5 = CASE_1;
                  sub_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                               (short)this->field_049F + 1);
                  goto cf_common_exit_004699E2;
                }
              }
              sVar20 = this->field_04A5;
              sVar21 = this->field_04A9;
              sVar22 = this->field_04A7;
              if (((((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar21)) ||
                  ((pSVar2 = (STFishC *)
                             g_worldGrid.cells
                             [(int)sVar21 * (int)g_worldGrid.planeStride +
                              (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0],
                   pSVar2 == (STFishC *)0x0 || (pSVar2->field_0018 != this->field_04AB)))) ||
                 ((iVar7 = thunk_FUN_004e1490((int)pSVar2), iVar7 != 1 ||
                  (bVar4 = thunk_FUN_0048d650(this,pSVar2), CONCAT31(extraout_var_10,bVar4) != 1))))
              goto cf_common_exit_004699E9;
              sub_004602B0(this);
              thunk_FUN_004e15f0(pSVar2,this->field_0018);
              this->field_04CD = 0;
              this->field_04D5 = CASE_A;
              sub_00481520(this,(int)*(short *)&this->field_0x4c5,(int)*(short *)&this->field_0x4c7,
                           (int)*(short *)&this->field_0x4c9);
              goto cf_common_exit_004699E2;
            default:
              goto cf_common_exit_004699E9;
            case 3:
              iVar7 = sub_00490570(this);
              if (iVar7 == 1) {
                iVar7 = CONCAT22((short)((uint)&this->field_0x4b1 >> 0x10),this->field_04A7);
                iVar9 = CONCAT22((short)((uint)&this->field_0x4af >> 0x10),this->field_04A5);
                piVar17 = (int *)CONCAT22((short)((uint)&this->field_0x4b3 >> 0x10),
                                          this->field_04A9 + 1);
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
cf_error_exit_004660E9:
              RaiseInternalException
                        (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                         iVar7);
              return 0xffff;
            }
            goto LAB_00467da5;
          }
          if (SVar15 == CASE_9) {
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
              sVar20 = this->field_04A5;
              sVar21 = this->field_04A9;
              sVar22 = this->field_04A7;
              if (sVar20 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeX <= sVar20) {
                return 2;
              }
              if (sVar22 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeY <= sVar22) {
                return 2;
              }
              if (sVar21 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeZ <= sVar21) {
                return 2;
              }
              pSVar2 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar21 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
              if (pSVar2 == (STFishC *)0x0) {
                return 2;
              }
              if (pSVar2->field_0018 != this->field_04AB) {
                return 2;
              }
              iVar7 = thunk_FUN_004e1490((int)pSVar2);
              if (iVar7 != 1) {
                return 2;
              }
              bVar4 = thunk_FUN_0048d650(this,pSVar2);
              if (CONCAT31(extraout_var_11,bVar4) != 1) {
                return 2;
              }
              thunk_FUN_004e15f0(pSVar2,this->field_0018);
              iVar7 = (int)*(short *)&this->field_0x4c9;
              sVar21 = *(short *)&this->field_0x4c7;
              sVar20 = *(short *)&this->field_0x4c5;
              this->field_04CD = 0;
              this->field_04D5 = CASE_A;
              this->field_00B7 = 0;
              goto LAB_00468322;
            }
            local_c = (undefined4 *)0x0;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar20 = this->field_049B;
                sVar21 = this->field_049F;
                sVar22 = this->field_049D;
                if (((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar21)) {
                  pSVar8 = (STWorldObject *)0x0;
                }
                else {
                  pSVar8 = g_worldGrid.cells
                           [(int)sVar21 * (int)g_worldGrid.planeStride +
                            (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                }
                if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (*(int *)&this->field_0x4c1 == 1) {
              *(undefined4 *)&this->field_0x4c1 = 0;
              if (this->field_04AB != -1) {
                sVar20 = this->field_04A5;
                sVar21 = this->field_04A9;
                sVar22 = this->field_04A7;
                if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                   ((sVar22 < 0 ||
                    (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)
                     ))))) {
                  pSVar8 = (STWorldObject *)0x0;
                }
                else {
                  pSVar8 = g_worldGrid.cells
                           [(int)sVar21 * (int)g_worldGrid.planeStride +
                            (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                }
                if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
              bVar4 = true;
              if (this->field_04AB == -1) goto LAB_00468493;
            }
            else {
LAB_00468493:
              bVar4 = false;
            }
            bVar5 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
            if (CONCAT31(extraout_var_12,bVar5) != 0) {
              if (CONCAT31(extraout_var_12,bVar5) == 7) {
                if (this->field_04AB == -1) {
                  return 2;
                }
                if (!bVar4) {
                  return 2;
                }
                if (this->field_04AB == -1) {
                  return 2;
                }
                if (!bVar4) {
                  return 2;
                }
                this->field_04CD = 0;
                this->field_04D5 = CASE_7;
                sub_00481520(this,(int)(short)this->field_04A5,(int)(short)this->field_04A7,
                             (short)this->field_04A9 + 1);
              }
              else {
                this->field_04CD = 0;
                this->field_04D5 = CASE_1;
                sub_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                             (short)this->field_049F + 1);
              }
              goto cf_common_exit_00465E7B;
            }
            sub_004602B0(this);
            goto LAB_00469972;
          }
          if (SVar15 != CASE_A) {
            if (SVar15 == CASE_B) {
              if (*(int *)&this->field_0x4d9 == 0) {
                iVar10 = (ushort)(this->field_04A9 * 200) + 300;
                iVar9 = CONCAT22((short)((uint)iVar10 >> 0x10),this->field_04A7 + 1) * 0xc9;
                iVar11 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_04A5 + 1);
                iVar7 = iVar11 * 0xc9;
                uVar6 = (undefined2)((uint)(iVar11 * 0x19) >> 0x10);
                uVar6 = (*this->vtable->vfunc_10)
                                  (CONCAT22(uVar6,this->field_0041),
                                   CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                                   CONCAT22(uVar6,this->field_0045),iVar7,iVar9,iVar10);
                *(undefined2 *)&this->field_0x4cb = uVar6;
                *(undefined4 *)&this->field_0x4d9 = 1;
              }
              if (*(int *)&this->field_0x4d9 == 1) {
                uVar12 = sub_004176C0(this,*(short *)&this->field_0x4cb);
                uVar12 = sub_00417910(this,(short)uVar12);
                if (uVar12 == 0xffffffff) {
                  iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2196,0,0,
                                             &DAT_007a4ccc,s_STBoatC__LoadRC__LOADRC_PDEPOT_007aa32c
                                            );
                  if (iVar7 != 0) {
                    pcVar3 = (code *)swi(3);
                    iVar7 = (*pcVar3)();
                    return iVar7;
                  }
                  iVar7 = 0x2197;
                  goto cf_error_exit_004660E9;
                }
                if (uVar12 == 0) {
                  *(undefined4 *)&this->field_0x4d9 = 2;
                  iVar7 = (*this->vtable->vfunc_D8)();
                  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
                }
              }
              if (*(int *)&this->field_0x4d9 == 2) {
                STJellyGunC::sub_00415B30
                          ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                           (this->field_04A5 + 1) * 0xc9,(this->field_04A7 + 1) * 0xc9,
                           this->field_04A9 * 200 + 300,this->field_0061);
                *(undefined4 *)&this->field_0x4d9 = 3;
              }
              if (*(int *)&this->field_0x4d9 == 3) {
                local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
                param_1 = (int *)0x0;
                if (this->field_0x2bf != '\0') {
                  local_c = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar13 = (undefined4 *)
                              thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                                 this->field_006C);
                    local_24 = *puVar13;
                    local_20 = *(short *)(puVar13 + 1);
                    if (DAT_0080732c == 1) {
                      bVar27 = 0;
                      sVar26 = 0;
                      uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar10 = -1;
                      this->field_001C = uVar12;
                      sVar25 = 0;
                      sVar24 = 0;
                      uVar14 = uVar12 * 0x41c64e6d + 0x3039;
                      sVar23 = 0;
                      this->field_001C = uVar14;
                      sVar22 = 0;
                      sVar21 = 0;
                      local_1c = uVar14 * 0x41c64e6d + 0x3039;
                      sVar20 = 0;
                      this->field_001C = local_1c;
                      lVar19 = Library::MSVCRT::__ftol();
                      iVar7 = (int)(short)lVar19 + (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3
                              + (int)local_20;
                      iVar9 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                      uVar12 = local_1c;
                    }
                    else {
                      uVar14 = this->field_001C * 0x41c64e6d + 0x3039;
                      bVar27 = 0;
                      sVar26 = 0;
                      uVar16 = uVar14 * 0x41c64e6d + 0x3039;
                      iVar10 = -1;
                      sVar25 = 0;
                      sVar24 = 0;
                      sVar23 = 0;
                      sVar22 = 0;
                      sVar21 = 0;
                      this->field_001C = uVar14;
                      uVar12 = uVar16 * 0x41c64e6d + 0x3039;
                      sVar20 = 0;
                      this->field_001C = uVar16;
                      this->field_001C = uVar12;
                      iVar7 = (uVar14 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                      local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                      iVar9 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                    }
                    TraksClassTy::TraksCreate
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar12 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_24,iVar9 + -3,iVar7,sVar20,sVar21,sVar22,sVar23,
                               sVar24,sVar25,iVar10,sVar26,bVar27);
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
                  goto cf_error_exit_004660E9;
                }
                if (local_10 == 0) {
                  this->field_04D5 = CASE_C;
                  *(undefined4 *)&this->field_0x4d9 = 0;
                  iVar7 = (*this->vtable->vfunc_D8)();
                  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
                }
              }
              goto cf_common_exit_004693C9;
            }
            if (SVar15 != CASE_C) {
              if (SVar15 == CASE_D) {
                iVar7 = *(int *)&this->field_0x4d1 + 1;
                *(int *)&this->field_0x4d1 = iVar7;
                if (0x45 < iVar7) {
                  if (*(int *)&this->field_0x4d9 == 0) {
                    iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)&this->field_0x4c9 * 200
                                    ) + 100;
                    iVar10 = CONCAT22((short)((uint)in_EDX >> 0x10),
                                      *(short *)&this->field_0x4c7 * 0xc9) + 100;
                    iVar9 = CONCAT22((short)((uint)iVar7 >> 0x10),
                                     *(short *)&this->field_0x4c5 * 0xc9) + 100;
                    uVar6 = (undefined2)((uint)iVar10 >> 0x10);
                    uVar6 = (*this->vtable->vfunc_10)
                                      (CONCAT22(uVar6,this->field_0041),
                                       CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0043),
                                       CONCAT22(uVar6,this->field_0045),iVar9,iVar10,iVar7);
                    *(undefined2 *)&this->field_0x4cb = uVar6;
                    *(undefined4 *)&this->field_0x4d9 = 1;
                  }
                  if (*(int *)&this->field_0x4d9 == 1) {
                    uVar12 = sub_004176C0(this,*(short *)&this->field_0x4cb);
                    uVar12 = sub_00417910(this,(short)uVar12);
                    if (uVar12 == 0xffffffff) {
                      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x223c,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STBoatC__LoadRC__LOADRC_ODEPOT_007aa2dc);
                      if (iVar7 != 0) {
                        pcVar3 = (code *)swi(3);
                        iVar7 = (*pcVar3)();
                        return iVar7;
                      }
                      iVar7 = 0x223d;
                      goto cf_error_exit_004660E9;
                    }
                    if (uVar12 == 0) {
                      *(undefined4 *)&this->field_0x4d9 = 2;
                      goto cf_common_exit_004699E9;
                    }
                  }
                  if (*(int *)&this->field_0x4d9 == 2) {
                    STJellyGunC::sub_00415B30
                              ((STJellyGunC *)this,this->field_0041,this->field_0043,
                               this->field_0045,*(short *)&this->field_0x4c5 * 0xc9 + 100,
                               *(short *)&this->field_0x4c7 * 0xc9 + 100,
                               *(short *)&this->field_0x4c9 * 200 + 100,this->field_0061);
                    *(undefined4 *)&this->field_0x4d9 = 3;
                  }
                  if (*(int *)&this->field_0x4d9 == 3) {
                    local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_18);
                    param_1 = (int *)0x0;
                    if (this->field_0x2bf != '\0') {
                      local_c = (undefined4 *)&this->field_0x2b3;
                      do {
                        puVar13 = (undefined4 *)
                                  thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                                     this->field_006C);
                        local_24 = *puVar13;
                        local_20 = *(short *)(puVar13 + 1);
                        if (DAT_0080732c == 1) {
                          bVar27 = 0;
                          sVar26 = 0;
                          iVar10 = -1;
                          uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar25 = 0;
                          this->field_001C = uVar12;
                          sVar24 = 0;
                          sVar23 = 0;
                          uVar14 = uVar12 * 0x41c64e6d + 0x3039;
                          sVar22 = 0;
                          this->field_001C = uVar14;
                          local_1c = uVar14 * 0x41c64e6d + 0x3039;
                          sVar21 = 0;
                          this->field_001C = local_1c;
                          sVar20 = 0;
                          lVar19 = Library::MSVCRT::__ftol();
                          iVar7 = (int)(short)lVar19 + (uVar12 >> 0x10) % 7 + (int)this->field_0045
                                  + -3 + (int)local_20;
                          iVar9 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) -
                                  (int)local_24._2_2_;
                          uVar12 = local_1c;
                        }
                        else {
                          bVar27 = 0;
                          uVar14 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar26 = 0;
                          iVar10 = -1;
                          uVar16 = uVar14 * 0x41c64e6d + 0x3039;
                          sVar25 = 0;
                          sVar24 = 0;
                          sVar23 = 0;
                          sVar22 = 0;
                          sVar21 = 0;
                          this->field_001C = uVar14;
                          uVar12 = uVar16 * 0x41c64e6d + 0x3039;
                          sVar20 = 0;
                          this->field_001C = uVar16;
                          this->field_001C = uVar12;
                          iVar7 = (uVar14 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                          local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                          iVar9 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) -
                                  (int)local_24._2_2_;
                        }
                        TraksClassTy::TraksCreate
                                  (g_traksClass_00802A7C,1,2,7,
                                   (uVar12 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                                   (int)(short)local_24,iVar9 + -3,iVar7,sVar20,sVar21,sVar22,sVar23
                                   ,sVar24,sVar25,iVar10,sVar26,bVar27);
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
                      goto cf_error_exit_004660E9;
                    }
                    if (local_10 == 0) {
                      this->field_04CD = 0;
                      *(undefined4 *)&this->field_0x4d1 = 0;
                      this->field_00B7 = 3;
                      bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
                      if (CONCAT31(extraout_var_15,bVar4) == 0) {
                        sub_004602B0(this);
                        this->field_04D5 = CASE_0;
                        this->field_00B7 = 0;
                        iVar7 = Defence(this,0);
                        return (-(uint)(iVar7 != -1) & 3) - 1;
                      }
                      if (CONCAT31(extraout_var_15,bVar4) == 1) {
                        sVar20 = this->field_049F;
                        sVar21 = this->field_049D;
                        sVar22 = this->field_049B;
                        this->field_04D5 = CASE_E;
                      }
                      else {
                        sVar20 = this->field_04A9;
                        sVar21 = this->field_04A7;
                        sVar22 = this->field_04A5;
                        this->field_04D5 = CASE_7;
                      }
                      sub_00481520(this,(int)sVar22,(int)sVar21,sVar20 + 1);
                      sub_00460260(this,0);
                    }
                  }
                  goto cf_common_exit_004693C9;
                }
                goto cf_common_exit_004699E9;
              }
              if (SVar15 != CASE_E) {
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
              iVar7 = sub_00460260(this,2);
              switch(iVar7) {
              case 1:
                sub_004602B0(this);
              case 0:
                this->field_04CD = 0;
                this->field_04D5 = CASE_1;
                this->field_00B7 = 3;
              case 3:
                iVar7 = (int)(short)this->field_049D;
                iVar9 = (int)(short)this->field_049B;
                iVar10 = (short)this->field_049F + 1;
                break;
              default:
                goto cf_common_exit_004699E9;
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
                goto cf_error_exit_004660E9;
              }
              goto cf_common_exit_004699DA;
            }
            iVar7 = this->field_04CD + 1;
            this->field_04CD = iVar7;
            if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
              local_c = (undefined4 *)0x0;
              if (this->field_04BD == 1) {
                this->field_04BD = 0;
                if (this->field_04A1 != -1) {
                  sVar20 = this->field_049B;
                  sVar21 = this->field_049F;
                  sVar22 = this->field_049D;
                  if (((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
                      ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) ||
                     (g_worldGrid.sizeZ <= sVar21)) {
                    pSVar8 = (STWorldObject *)0x0;
                  }
                  else {
                    pSVar8 = g_worldGrid.cells
                             [(int)sVar21 * (int)g_worldGrid.planeStride +
                              (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                  }
                  if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
                    this->field_04A1 = 0xffffffff;
                  }
                }
              }
              if (*(int *)&this->field_0x4c1 == 1) {
                *(undefined4 *)&this->field_0x4c1 = 0;
                if (this->field_04AB != -1) {
                  sVar20 = this->field_04A5;
                  sVar21 = this->field_04A9;
                  sVar22 = this->field_04A7;
                  if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                     ((sVar22 < 0 ||
                      (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) ||
                       (g_worldGrid.sizeZ <= sVar21)))))) {
                    pSVar8 = (STWorldObject *)0x0;
                  }
                  else {
                    pSVar8 = g_worldGrid.cells
                             [(int)sVar21 * (int)g_worldGrid.planeStride +
                              (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                  }
                  if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
                    this->field_04AB = 0xffffffff;
                  }
                }
                if (this->field_04AB != -1) {
                  local_c = (undefined4 *)0x1;
                  goto LAB_00469198;
                }
              }
              else {
LAB_00469198:
                if ((this->field_04AB != -1) && (local_c == (undefined4 *)0x0)) goto LAB_004691ae;
              }
              this->field_04CD = 0;
              this->field_04D5 = CASE_D;
              this->field_00B7 = 3;
cf_common_exit_004693C9:
              iVar7 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
            }
LAB_004691ae:
            if (iVar7 % 10 != 1) goto cf_common_exit_004699E9;
            sVar20 = this->field_04A5;
            sVar21 = this->field_04A9;
            sVar22 = this->field_04A7;
            if ((((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar22 &&
                   (((sVar22 < g_worldGrid.sizeY && (-1 < sVar21)) && (sVar21 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar8 = g_worldGrid.cells
                                     [(int)sVar21 * (int)g_worldGrid.planeStride +
                                      (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0]
                           , pSVar8 != (STWorldObject *)0x0 &&
                           (*(int *)&pSVar8->field_0x18 == this->field_04AB)))) &&
                (*(int *)&pSVar8[0x21].field_0x10 == 0)) && (*(int *)&pSVar8[0x10].field_0x5 != 6))
            {
              if (iVar7 % 0x78 == 1) {
                SVar1 = this->field_06F7;
                if (SVar1 == CASE_8) {
                  pSVar18 = this->vtable;
                  uVar28 = 0xfb;
LAB_004692be:
                  (*pSVar18->vfunc_90)(3,uVar28);
                }
                else if (SVar1 == CASE_14) {
                  (*this->vtable->vfunc_90)(3,0x15f);
                }
                else if (SVar1 == CASE_1A) {
                  pSVar18 = this->vtable;
                  uVar28 = 0x19e;
                  goto LAB_004692be;
                }
              }
              iVar7 = *(int *)&this->field_0x7d2;
              iVar9 = 1;
              if (iVar7 < 1) {
                iVar7 = this->field_07D6;
                if (iVar7 < 1) {
                  iVar7 = this->field_07DA;
                  if (0 < iVar7) {
                    if (iVar7 < 1) {
                      iVar9 = iVar7;
                    }
                    thunk_FUN_004e1d70(pSVar8,0xde,iVar9 * 0x14);
                    thunk_FUN_004e16d0(pSVar8,this->field_0018);
                    this->field_07DA = this->field_07DA - iVar9;
                  }
                }
                else {
                  if (iVar7 < 1) {
                    iVar9 = iVar7;
                  }
                  thunk_FUN_004e1d70(pSVar8,0xdd,iVar9 * 3);
                  thunk_FUN_004e16d0(pSVar8,this->field_0018);
                  this->field_07D6 = this->field_07D6 - iVar9;
                }
              }
              else {
                if (iVar7 < 1) {
                  iVar9 = iVar7;
                }
                thunk_FUN_004e1d70(pSVar8,0xdc,iVar9 * 5);
                thunk_FUN_004e16d0(pSVar8,this->field_0018);
                *(int *)&this->field_0x7d2 = *(int *)&this->field_0x7d2 - iVar9;
              }
              if (this->field_07DA + this->field_07D6 + *(int *)&this->field_0x7d2 != 0)
              goto cf_common_exit_004699E9;
            }
            sub_0048D930(this);
            this->field_04CD = 0;
            this->field_04D5 = CASE_D;
            this->field_00B7 = 3;
            goto cf_common_exit_004699E9;
          }
          if ((int)this->field_04CD < 1) {
            iVar7 = sub_00460260(this,2);
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
              sVar20 = this->field_04A5;
              sVar21 = this->field_04A9;
              sVar22 = this->field_04A7;
              if ((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar22 &&
                   (((sVar22 < g_worldGrid.sizeY && (-1 < sVar21)) && (sVar21 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar8 = g_worldGrid.cells
                                     [(int)sVar21 * (int)g_worldGrid.planeStride +
                                      (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0]
                           , pSVar8 != (STWorldObject *)0x0 &&
                           (*(int *)&pSVar8->field_0x18 == this->field_04AB)))) {
                thunk_FUN_004e1690(pSVar8,this->field_0018);
              }
              return 0;
            case 1:
              goto switchD_0046878c_caseD_1;
            default:
              goto cf_common_exit_00468C50;
            case 3:
              sVar20 = this->field_04A5;
              sVar21 = this->field_04A9;
              sVar22 = this->field_04A7;
              if ((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
                 (((sVar22 < g_worldGrid.sizeY && (-1 < sVar21)) &&
                  ((sVar21 < g_worldGrid.sizeZ &&
                   ((STFishC *)
                    g_worldGrid.cells
                    [(int)sVar21 * (int)g_worldGrid.planeStride +
                     (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0] !=
                    (STFishC *)0x0)))))) {
                thunk_FUN_0048d650(this,(STFishC *)
                                        g_worldGrid.cells
                                        [(int)sVar21 * (int)g_worldGrid.planeStride +
                                         (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects
                                        [0]);
              }
              sub_00481520(this,(int)*(short *)&this->field_0x4c5,(int)*(short *)&this->field_0x4c7,
                           (int)*(short *)&this->field_0x4c9);
              goto cf_common_exit_00468C49;
            case -1:
              iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2126,0,0,
                                         &DAT_007a4ccc,s_STBoatC__LoadRC__move_to_depot_2_007aa354);
              if (iVar7 != 0) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              iVar7 = 0x2126;
              goto cf_error_exit_004660E9;
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
              sVar20 = this->field_049B;
              sVar21 = this->field_049F;
              sVar22 = this->field_049D;
              if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                 ((sVar22 < 0 ||
                  (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))
                  ))) {
                pSVar8 = (STWorldObject *)0x0;
              }
              else {
                pSVar8 = g_worldGrid.cells
                         [(int)sVar21 * (int)g_worldGrid.planeStride +
                          (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
              }
              if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
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
            if (this->field_04AB != -1) {
              sVar20 = this->field_04A5;
              sVar21 = this->field_04A9;
              sVar22 = this->field_04A7;
              if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                 (((sVar22 < 0 || ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) ||
                  (g_worldGrid.sizeZ <= sVar21)))) {
                pSVar8 = (STWorldObject *)0x0;
              }
              else {
                pSVar8 = g_worldGrid.cells
                         [(int)sVar21 * (int)g_worldGrid.planeStride +
                          (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
              }
              if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
          if (CONCAT31(extraout_var_13,bVar4) == 0) {
            sub_004602B0(this);
            this->field_04D5 = CASE_0;
            goto cf_common_exit_00469979;
          }
          if (CONCAT31(extraout_var_13,bVar4) == 7) {
            if (this->field_04AB == -1) {
              return 2;
            }
            goto cf_common_exit_00468742;
          }
          goto cf_common_exit_00465E40;
        }
        if ((int)this->field_04CD < 1) {
          iVar7 = sub_00460260(this,2);
          switch(iVar7) {
          case 0:
            iVar7 = sub_00490570(this);
            if (iVar7 == 1) {
              sVar20 = this->field_04A5;
              sVar21 = this->field_04A9;
              sVar22 = this->field_04A7;
              if ((((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
                   ((sVar22 < g_worldGrid.sizeY && (-1 < sVar21)))) &&
                  ((sVar21 < g_worldGrid.sizeZ &&
                   ((pSVar8 = g_worldGrid.cells
                              [(int)sVar21 * (int)g_worldGrid.planeStride +
                               (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0],
                    pSVar8 != (STWorldObject *)0x0 &&
                    (*(int *)&pSVar8->field_0x18 == this->field_04AB)))))) &&
                 (iVar7 = thunk_FUN_004e1490((int)pSVar8), iVar7 != 1)) {
                uVar6 = (undefined2)((uint)&this->field_0x4af >> 0x10);
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                          ((AnonReceiver_0048DFD0 *)this,CONCAT22(uVar6,this->field_0047),
                           CONCAT22(extraout_var_24,this->field_0049),
                           CONCAT22(extraout_var_20,this->field_004B),
                           CONCAT22(uVar6,this->field_04A5),
                           CONCAT22(extraout_var_24,this->field_04A7),
                           (int *)CONCAT22(extraout_var_20,this->field_04A9 + 1),1,
                           (short *)&this->field_0x4af,(short *)&this->field_0x4b1,
                           (short *)&this->field_0x4b3);
                this->field_04D5 = CASE_8;
                this->field_00B7 = 0;
                sub_00481520(this,(int)*(short *)&this->field_0x4af,
                             (int)*(short *)&this->field_0x4b1,(int)*(short *)&this->field_0x4b3);
                break;
              }
            }
            this->field_04D5 = CASE_9;
            goto cf_common_exit_00469979;
          case 1:
            if ((this->field_04BD != 1) && (*(int *)&this->field_0x4c1 != 1))
            goto cf_common_exit_00468C50;
            local_c = (undefined4 *)0x0;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar20 = this->field_049B;
                sVar21 = this->field_049F;
                sVar22 = this->field_049D;
                if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                   ((sVar22 < 0 ||
                    (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)
                     ))))) {
                  pSVar8 = (STWorldObject *)0x0;
                }
                else {
                  pSVar8 = g_worldGrid.cells
                           [(int)sVar21 * (int)g_worldGrid.planeStride +
                            (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                }
                if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (*(int *)&this->field_0x4c1 == 1) {
              *(undefined4 *)&this->field_0x4c1 = 0;
              if (this->field_04AB != -1) {
                sVar20 = this->field_04A5;
                sVar21 = this->field_04A9;
                sVar22 = this->field_04A7;
                if ((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
                    ((sVar22 < 0 || ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))))) ||
                   (g_worldGrid.sizeZ <= sVar21)) {
                  pSVar8 = (STWorldObject *)0x0;
                }
                else {
                  pSVar8 = g_worldGrid.cells
                           [(int)sVar21 * (int)g_worldGrid.planeStride +
                            (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
                }
                if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
              if (this->field_04AB != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
            if (CONCAT31(extraout_var_08,bVar4) == 0) goto cf_common_exit_00467FE4;
            if (CONCAT31(extraout_var_08,bVar4) == 7) {
              if ((this->field_04AB != -1) && (local_c == (undefined4 *)0x0))
              goto cf_common_exit_00468C50;
              sub_004602B0(this);
              if (this->field_04AB == -1) {
                this->field_04CD = this->field_04CD + 1;
                iVar7 = (*this->vtable->vfunc_D8)();
                return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
              }
              if (local_c != (undefined4 *)0x1) goto cf_common_exit_00468C50;
              sub_00481520(this,(int)(short)this->field_04A5,(int)(short)this->field_04A7,
                           (short)this->field_04A9 + 1);
            }
            else {
              sub_004602B0(this);
              this->field_04D5 = CASE_1;
              sub_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                           (short)this->field_049F + 1);
            }
            break;
          default:
            goto cf_common_exit_00468C50;
          case 3:
            sub_00481520(this,(int)(short)this->field_04A5,(int)(short)this->field_04A7,
                         (short)this->field_04A9 + 1);
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
            goto cf_error_exit_004660E9;
          }
          goto cf_common_exit_00468C49;
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
            sVar20 = this->field_049B;
            sVar21 = this->field_049F;
            sVar22 = this->field_049D;
            if ((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
               (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))) {
              pSVar8 = (STWorldObject *)0x0;
            }
            else {
              pSVar8 = g_worldGrid.cells
                       [(int)sVar21 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
            }
            if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
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
          if (this->field_04AB != -1) {
            sVar20 = this->field_04A5;
            sVar21 = this->field_04A9;
            sVar22 = this->field_04A7;
            if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
               ((sVar22 < 0 ||
                (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))))
               ) {
              pSVar8 = (STWorldObject *)0x0;
            }
            else {
              pSVar8 = g_worldGrid.cells
                       [(int)sVar21 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
            }
            if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
        if (CONCAT31(extraout_var_07,bVar4) == 0) {
          sub_004602B0(this);
          this->field_04D5 = CASE_0;
          goto cf_common_exit_00469979;
        }
        if (CONCAT31(extraout_var_07,bVar4) != 7) {
          this->field_04CD = 0;
          this->field_04D5 = CASE_1;
          goto cf_common_exit_00465E5A;
        }
        if (this->field_04AB == -1) {
          return 2;
        }
        this->field_04CD = 0;
        goto cf_common_exit_0046875C;
      }
      iVar7 = *(int *)&this->field_0x4d1 + 1;
      *(int *)&this->field_0x4d1 = iVar7;
      if (iVar7 < 0x47) goto cf_common_exit_004699E9;
      iVar7 = sub_00460260(this,2);
      switch(iVar7) {
      case 1:
        iVar7 = this->field_04CD + 1;
        this->field_04CD = iVar7;
        if (iVar7 < 3) goto cf_common_exit_004699E9;
        sub_004602B0(this);
      case 0:
        this->field_04CD = 0;
        *(undefined4 *)&this->field_0x4d1 = 0;
        this->field_04D5 = CASE_7;
        this->field_00B7 = 3;
      case 3:
        iVar7 = (int)(short)this->field_04A7;
        iVar9 = (int)(short)this->field_04A5;
        iVar10 = (short)this->field_04A9 + 1;
        break;
      default:
        goto cf_common_exit_004699E9;
      case -1:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1f53,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadRC__LOADRC_MOVEWAIT_007aa3e8);
        if (iVar7 != 0) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        iVar7 = 0x1f53;
        goto cf_error_exit_004660E9;
      }
      goto cf_common_exit_004699DA;
    }
    iVar7 = sub_00460260(this,2);
    switch(iVar7) {
    case 0:
      iVar7 = sub_00490570(this);
      if (iVar7 != 1) {
        this->field_04D5 = CASE_3;
        this->field_00B7 = 3;
        iVar7 = Defence(this,0);
        return (-(uint)(iVar7 != -1) & 3) - 1;
      }
      iVar9 = CONCAT22(extraout_var_18,this->field_049B);
      iVar7 = CONCAT22((short)((uint)&this->field_0x4af >> 0x10),this->field_049D);
      piVar17 = (int *)CONCAT22(extraout_var_23,this->field_049F + 1);
LAB_00467da5:
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                ((AnonReceiver_0048DFD0 *)this,
                 CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0047),
                 CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0049),
                 CONCAT22((short)((uint)piVar17 >> 0x10),this->field_004B),iVar9,iVar7,piVar17,1,
                 (short *)&this->field_0x4af,(short *)&this->field_0x4b1,(short *)&this->field_0x4b3
                );
      sub_00481520(this,(int)*(short *)&this->field_0x4af,(int)*(short *)&this->field_0x4b1,
                   (int)*(short *)&this->field_0x4b3);
      break;
    case 1:
      if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
        local_c = (undefined4 *)0x0;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar20 = this->field_049B;
            sVar21 = this->field_049F;
            sVar22 = this->field_049D;
            if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
               ((sVar22 < 0 ||
                (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))))
               ) {
              pSVar8 = (STWorldObject *)0x0;
            }
            else {
              pSVar8 = g_worldGrid.cells
                       [(int)sVar21 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
            }
            if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
          if (this->field_04A1 != -1) {
            local_c = (undefined4 *)0x1;
          }
        }
        if (*(int *)&this->field_0x4c1 == 1) {
          *(undefined4 *)&this->field_0x4c1 = 0;
          if (this->field_04AB != -1) {
            sVar20 = this->field_04A5;
            sVar21 = this->field_04A9;
            sVar22 = this->field_04A7;
            if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
               (((sVar22 < 0 || ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar21)))) {
              pSVar8 = (STWorldObject *)0x0;
            }
            else {
              pSVar8 = g_worldGrid.cells
                       [(int)sVar21 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
            }
            if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
        if (CONCAT31(extraout_var_02,bVar4) == 0) {
cf_common_exit_00467FE4:
          sub_004602B0(this);
          this->field_04D5 = CASE_0;
          goto cf_common_exit_00469979;
        }
        if (CONCAT31(extraout_var_02,bVar4) == 1) {
          if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
          goto cf_common_exit_004699E9;
          sub_004602B0(this);
          if (this->field_04A1 == -1) {
            this->field_04CD = this->field_04CD + 1;
            goto cf_common_exit_004699E9;
          }
          if (local_c != (undefined4 *)0x1) goto LAB_00466744;
          this->field_00B7 = 3;
          this->field_04D5 = CASE_1;
          sub_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                       (short)this->field_049F + 1);
        }
        else {
LAB_0046817e:
          sub_004602B0(this);
          this->field_00B7 = 3;
          this->field_04D5 = CASE_7;
          sub_00481520(this,(int)(short)this->field_04A5,(int)(short)this->field_04A7,
                       (short)this->field_04A9 + 1);
        }
      }
      else {
LAB_00466744:
        sVar20 = this->field_049B;
        sVar21 = this->field_049F;
        sVar22 = this->field_049D;
        if ((((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
             ((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)))) ||
            ((g_worldGrid.sizeZ <= sVar21 ||
             ((pSVar8 = g_worldGrid.cells
                        [(int)sVar21 * (int)g_worldGrid.planeStride +
                         (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0],
              pSVar8 == (STWorldObject *)0x0 || (*(int *)&pSVar8->field_0x18 != this->field_04A1))))
            )) || (iVar7 = thunk_FUN_004e1490((int)pSVar8), iVar7 != 1))
        goto cf_common_exit_004699E9;
        sub_004602B0(this);
        thunk_FUN_004e15f0(pSVar8,this->field_0018);
        this->field_04CD = 0;
        this->field_04D5 = CASE_4;
        sub_00481520(this,(int)(short)this->field_049B,(int)(short)this->field_049D,
                     (short)this->field_049F + 1);
      }
      break;
    default:
      goto cf_common_exit_004699E9;
    case 3:
      iVar7 = sub_00490570(this);
      if (iVar7 == 1) {
        iVar7 = CONCAT22((short)((uint)&this->field_0x4b1 >> 0x10),this->field_049D);
        iVar9 = CONCAT22((short)((uint)&this->field_0x4af >> 0x10),this->field_049B);
        piVar17 = (int *)CONCAT22((short)((uint)&this->field_0x4b3 >> 0x10),this->field_049F + 1);
LAB_00467e31:
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                  ((AnonReceiver_0048DFD0 *)this,
                   CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0047),
                   CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0049),
                   CONCAT22((short)((uint)piVar17 >> 0x10),this->field_004B),iVar9,iVar7,piVar17,1,
                   (short *)&this->field_0x4af,(short *)&this->field_0x4b1,
                   (short *)&this->field_0x4b3);
      }
LAB_00467e48:
      sub_00481520(this,(int)*(short *)&this->field_0x4af,(int)*(short *)&this->field_0x4b1,
                   (int)*(short *)&this->field_0x4b3);
      break;
    case -1:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d66,0,0,&DAT_007a4ccc,
                                 s_STBoatC__LoadRC__correct_move_to_007aa4b0);
      if (iVar7 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1d66
                  );
        return 0xffff;
      }
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
cf_common_exit_004699E2:
  sub_00460260(this,0);
cf_common_exit_004699E9:
  iVar7 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar7 != 0) & 0xfffffffd) + 2;
switchD_0046878c_caseD_1:
  if ((this->field_04BD == 1) || (*(int *)&this->field_0x4c1 == 1)) {
    local_c = (undefined4 *)0x0;
    if (this->field_04BD == 1) {
      this->field_04BD = 0;
      if (this->field_04A1 != -1) {
        sVar20 = this->field_049B;
        sVar21 = this->field_049F;
        sVar22 = this->field_049D;
        if ((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar22 < 0)) ||
           (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))) {
          pSVar8 = (STWorldObject *)0x0;
        }
        else {
          pSVar8 = g_worldGrid.cells
                   [(int)sVar21 * (int)g_worldGrid.planeStride +
                    (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
        }
        if (*(int *)&pSVar8->field_0x18 != this->field_04A1) {
          this->field_04A1 = 0xffffffff;
        }
      }
    }
    if (*(int *)&this->field_0x4c1 == 1) {
      *(undefined4 *)&this->field_0x4c1 = 0;
      if (this->field_04AB != -1) {
        sVar20 = this->field_04A5;
        sVar21 = this->field_04A9;
        sVar22 = this->field_04A7;
        if (((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) ||
           ((sVar22 < 0 ||
            (((g_worldGrid.sizeY <= sVar22 || (sVar21 < 0)) || (g_worldGrid.sizeZ <= sVar21)))))) {
          pSVar8 = (STWorldObject *)0x0;
        }
        else {
          pSVar8 = g_worldGrid.cells
                   [(int)sVar21 * (int)g_worldGrid.planeStride +
                    (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0];
        }
        if (*(int *)&pSVar8->field_0x18 != this->field_04AB) {
          this->field_04AB = 0xffffffff;
        }
      }
      if (this->field_04AB != -1) {
        local_c = (undefined4 *)0x1;
      }
    }
    bVar4 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
    if (CONCAT31(extraout_var_14,bVar4) == 0) {
      sub_004602B0(this);
      this->field_04D5 = CASE_0;
      goto cf_common_exit_00469979;
    }
    if (CONCAT31(extraout_var_14,bVar4) != 7) {
      sub_004602B0(this);
      sVar21 = this->field_049D;
      sVar20 = this->field_049B;
      iVar7 = (short)this->field_049F + 1;
      this->field_04CD = 0;
      this->field_00B7 = 3;
      this->field_04D5 = CASE_1;
      goto LAB_00468c40;
    }
    if ((this->field_04AB != -1) && (local_c == (undefined4 *)0x0)) goto cf_common_exit_00468C50;
    sub_004602B0(this);
    if (this->field_04AB == -1) {
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
  sub_004602B0(this);
  sVar20 = this->field_04A5;
  sVar21 = this->field_04A9;
  sVar22 = this->field_04A7;
  if (((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) &&
     ((-1 < sVar22 &&
      ((((sVar22 < g_worldGrid.sizeY && (-1 < sVar21)) && (sVar21 < g_worldGrid.sizeZ)) &&
       ((STFishC *)
        g_worldGrid.cells
        [(int)sVar21 * (int)g_worldGrid.planeStride + (int)sVar22 * (int)g_worldGrid.sizeX +
         (int)sVar20].objects[0] != (STFishC *)0x0)))))) {
    thunk_FUN_0048d650(this,(STFishC *)
                            g_worldGrid.cells
                            [(int)sVar21 * (int)g_worldGrid.planeStride +
                             (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0]);
  }
  sub_00481520(this,(int)*(short *)&this->field_0x4c5,(int)*(short *)&this->field_0x4c7,
               (int)*(short *)&this->field_0x4c9);
  goto cf_common_exit_00468C49;
}


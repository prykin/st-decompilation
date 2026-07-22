#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::LoadRC */

int __thiscall STBoatC::LoadRC(STBoatC *this,int *param_1,undefined4 param_2,int param_3)

{
  STBoatC *pSVar1;
  STBoatC_field_06F7State SVar2;
  code *pcVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  STWorldObject *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  short sVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  uint uVar15;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int *piVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  STBoatCVTable *pSVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  byte bVar25;
  undefined4 uVar26;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_8 = 0;
  if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    this->field_049B = this->field_0353;
    this->field_049D = this->field_0355;
    this->field_049F = this->field_0357;
    this->field_04A1 = this->field_0359;
    this->field_04A5 = this->field_035D;
    this->field_04A7 = this->field_035F;
    this->field_04A9 = this->field_0361;
    this->field_04AB = this->field_0363;
    this->field_04B5 = this->field_0367;
    this->field_04B9 = this->field_036B;
    this->field_04C1 = 0;
    this->field_04BD = 0;
    *(undefined4 *)&this->field_0x4d1 = 0;
    *(undefined4 *)&this->field_0x4cd = 0;
    iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
    if (iVar6 == 0) {
LAB_00469972:
      *(undefined4 *)&this->field_0x4d5 = 0;
      goto cf_common_exit_00469979;
    }
    *(int *)&this->field_0x4d5 = iVar6;
    this->field_00B7 = 3;
    if (iVar6 == 1) {
      sVar20 = this->field_049F;
      sVar19 = this->field_049D;
      sVar14 = this->field_049B;
    }
    else {
      sVar20 = this->field_04A9;
      sVar19 = this->field_04A7;
      sVar14 = this->field_04A5;
    }
    iVar9 = sVar20 + 1;
    iVar6 = (int)sVar19;
    iVar8 = (int)sVar14;
cf_common_exit_004699DA:
    sub_00481520(this,iVar8,iVar6,iVar9);
  }
  else {
    iVar6 = *(int *)&this->field_0x4d5;
    if (iVar6 == 0) {
      iVar6 = Defence(this,2);
      if (iVar6 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465cda:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar14 = this->field_049B;
          sVar19 = this->field_049F;
          sVar20 = this->field_049D;
          if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
              ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
            pSVar7 = (STWorldObject *)0x0;
          }
          else {
            pSVar7 = g_worldGrid.cells
                     [(int)g_worldGrid.planeStride * (int)sVar19 +
                      (int)g_worldGrid.sizeX * (int)sVar20 + (int)sVar14].objects[0];
          }
          if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
            this->field_04A1 = 0xffffffff;
          }
        }
      }
      else {
        if (this->field_04C1 != 1) {
          return 2;
        }
        if (this->field_04BD == 1) goto LAB_00465cda;
      }
      if (this->field_04C1 == 1) {
        this->field_04C1 = 0;
        if (this->field_04AB != -1) {
          sVar14 = this->field_04A5;
          sVar19 = this->field_04A9;
          sVar20 = this->field_04A7;
          if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
             ((sVar20 < 0 ||
              (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19))))))
          {
            pSVar7 = (STWorldObject *)0x0;
          }
          else {
            pSVar7 = g_worldGrid.cells
                     [(int)sVar19 * (int)g_worldGrid.planeStride +
                      (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
          }
          if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
      if (iVar6 == 0) {
        return 2;
      }
      if (iVar6 == 1) {
        if (this->field_04A1 == -1) {
          return 2;
        }
cf_common_exit_00465E40:
        *(undefined4 *)&this->field_0x4cd = 0;
        *(undefined4 *)&this->field_0x4d5 = 1;
        this->field_00B7 = 3;
        goto cf_common_exit_00465E5A;
      }
cf_common_exit_00468742:
      *(undefined4 *)&this->field_0x4cd = 0;
      *(undefined4 *)&this->field_0x4d5 = 7;
      this->field_00B7 = 3;
cf_common_exit_0046875C:
      sVar14 = this->field_04A9;
      sVar19 = this->field_04A7;
      sVar20 = this->field_04A5;
LAB_00465e72:
      sub_00481520(this,(int)sVar20,(int)sVar19,sVar14 + 1);
cf_common_exit_00465E7B:
      sub_00460260(this,0);
      return 2;
    }
    if (iVar6 == 1) {
      if (*(int *)&this->field_0x4cd < 1) {
        iVar6 = sub_00460260(this,2);
        switch(iVar6) {
        case 0:
          iVar6 = sub_00490570(this);
          if (iVar6 == 1) {
            sVar14 = this->field_049B;
            sVar19 = this->field_049F;
            sVar20 = this->field_049D;
            if ((((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar20)) &&
                 ((sVar20 < g_worldGrid.sizeY && (-1 < sVar19)))) &&
                ((sVar19 < g_worldGrid.sizeZ &&
                 ((pSVar1 = (STBoatC *)
                            g_worldGrid.cells
                            [(int)sVar19 * (int)g_worldGrid.planeStride +
                             (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
                  pSVar1 != (STBoatC *)0x0 && (pSVar1->field_0018 == this->field_04A1)))))) &&
               (iVar6 = thunk_FUN_004e1490(pSVar1), iVar6 != 1)) {
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                        ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,
                         this->field_004B,this->field_049B,this->field_049D,
                         (int *)CONCAT22(extraout_var,this->field_049F + 1),1,&this->field_04AF,
                         &this->field_04B1,&this->field_04B3);
              *(undefined4 *)&this->field_0x4d5 = 2;
              this->field_00B7 = 0;
              sub_00481520(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
              break;
            }
          }
          *(undefined4 *)&this->field_0x4d5 = 3;
          goto cf_common_exit_00469979;
        case 1:
          if ((this->field_04BD != 1) && (this->field_04C1 != 1)) goto cf_common_exit_00468C50;
          local_c = (undefined4 *)0x0;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar14 = this->field_049B;
              sVar19 = this->field_049F;
              sVar20 = this->field_049D;
              if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                 ((sVar20 < 0 ||
                  (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))
                  ))) {
                pSVar7 = (STWorldObject *)0x0;
              }
              else {
                pSVar7 = g_worldGrid.cells
                         [(int)sVar19 * (int)g_worldGrid.planeStride +
                          (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
              }
              if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
            if (this->field_04A1 != -1) {
              local_c = (undefined4 *)0x1;
            }
          }
          if (this->field_04C1 == 1) {
            this->field_04C1 = 0;
            if (this->field_04AB != -1) {
              sVar14 = this->field_04A5;
              sVar19 = this->field_04A9;
              sVar20 = this->field_04A7;
              if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                  ((sVar20 < 0 || ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))))) ||
                 (g_worldGrid.sizeZ <= sVar19)) {
                pSVar7 = (STWorldObject *)0x0;
              }
              else {
                pSVar7 = g_worldGrid.cells
                         [(int)sVar19 * (int)g_worldGrid.planeStride +
                          (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
              }
              if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
          if (iVar6 == 0) goto cf_common_exit_00467FE4;
          if (iVar6 == 1) {
            if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
            goto cf_common_exit_00468C50;
            sub_004602B0(this);
            if (this->field_04A1 == -1) {
              *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
              iVar6 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
            if (local_c != (undefined4 *)0x1) goto cf_common_exit_00468C50;
LAB_00467018:
            sub_00481520(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
          }
          else {
            sub_004602B0(this);
            *(undefined4 *)&this->field_0x4d5 = 7;
LAB_00468b42:
            sub_00481520(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
          }
          break;
        default:
          goto cf_common_exit_00468C50;
        case 3:
switchD_004660af_caseD_3:
          sub_00481520(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
          break;
        case -1:
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1d02,0,0,
                                     "%s","STBoatC::LoadRC, move to mine error");
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar6 = 0x1d02;
          goto cf_error_exit_004660E9;
        }
cf_common_exit_00468C49:
        sub_00460260(this,0);
        goto cf_common_exit_00468C50;
      }
      iVar6 = *(int *)&this->field_0x4cd + 1;
      *(int *)&this->field_0x4cd = iVar6;
      if (iVar6 == 2) {
        iVar6 = Defence(this,0);
        if (iVar6 != -1) {
          return 2;
        }
        return -1;
      }
      iVar6 = Defence(this,2);
      if (iVar6 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465f11:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar14 = this->field_049B;
          sVar19 = this->field_049F;
          sVar20 = this->field_049D;
          if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
             (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
            pSVar7 = (STWorldObject *)0x0;
          }
          else {
            pSVar7 = g_worldGrid.cells
                     [(int)sVar19 * (int)g_worldGrid.planeStride +
                      (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
          }
          if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
            this->field_04A1 = 0xffffffff;
          }
        }
      }
      else {
        if (this->field_04C1 != 1) {
          return 2;
        }
        if (this->field_04BD == 1) goto LAB_00465f11;
      }
      if (this->field_04C1 == 1) {
        this->field_04C1 = 0;
        if (this->field_04AB != -1) {
          sVar14 = this->field_04A5;
          sVar19 = this->field_04A9;
          sVar20 = this->field_04A7;
          if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
             ((sVar20 < 0 ||
              (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19))))))
          {
            pSVar7 = (STWorldObject *)0x0;
          }
          else {
            pSVar7 = g_worldGrid.cells
                     [(int)sVar19 * (int)g_worldGrid.planeStride +
                      (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
          }
          if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
      if (iVar6 == 0) {
        sub_004602B0(this);
        *(undefined4 *)&this->field_0x4d5 = 0;
cf_common_exit_00469979:
        iVar6 = Defence(this,0);
        return (-(uint)(iVar6 != -1) & 3) - 1;
      }
      if (iVar6 != 1) goto LAB_00466087;
      if (this->field_04A1 == -1) {
        return 2;
      }
      *(undefined4 *)&this->field_0x4cd = 0;
cf_common_exit_00465E5A:
      sVar14 = this->field_049F;
      sVar19 = this->field_049D;
      sVar20 = this->field_049B;
      goto LAB_00465e72;
    }
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
        iVar6 = Defence(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if ((this->field_04BD != 1) && (this->field_04C1 != 1)) {
          if (*(int *)&this->field_0x4cd % 0x32 != 1) {
            return 2;
          }
          sVar14 = this->field_049B;
          sVar19 = this->field_049F;
          sVar20 = this->field_049D;
          if (sVar14 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeX <= sVar14) {
            return 2;
          }
          if (sVar20 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeY <= sVar20) {
            return 2;
          }
          if (sVar19 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeZ <= sVar19) {
            return 2;
          }
          pSVar1 = (STBoatC *)
                   g_worldGrid.cells
                   [(int)sVar19 * (int)g_worldGrid.planeStride +
                    (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
          if (pSVar1 == (STBoatC *)0x0) {
            return 2;
          }
          if (pSVar1->field_0018 != this->field_04A1) {
            return 2;
          }
          iVar6 = thunk_FUN_004e1490(pSVar1);
          if (iVar6 != 1) {
            return 2;
          }
          thunk_FUN_004e15f0(pSVar1,this->field_0018);
          sVar19 = this->field_049D;
          sVar14 = this->field_049B;
          iVar6 = this->field_049F + 1;
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 4;
          this->field_00B7 = 0;
LAB_00468322:
          sub_00481520(this,(int)sVar14,(int)sVar19,iVar6);
          sub_00460260(this,0);
          return 2;
        }
        local_c = (undefined4 *)0x0;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar14 = this->field_049B;
            sVar19 = this->field_049F;
            sVar20 = this->field_049D;
            if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
               ((sVar20 < 0 ||
                (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))
               ) {
              pSVar7 = (STWorldObject *)0x0;
            }
            else {
              pSVar7 = g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
            }
            if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
          if (this->field_04A1 != -1) {
            local_c = (undefined4 *)0x1;
          }
        }
        if (this->field_04C1 == 1) {
          this->field_04C1 = 0;
          if (this->field_04AB != -1) {
            sVar14 = this->field_04A5;
            sVar19 = this->field_04A9;
            sVar20 = this->field_04A7;
            if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
               (((sVar20 < 0 || ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar19)))) {
              pSVar7 = (STWorldObject *)0x0;
            }
            else {
              pSVar7 = g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
            }
            if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
        if (iVar6 == 0) {
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (iVar6 == 1) {
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
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 1;
          sub_00481520(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
          goto cf_common_exit_00465E7B;
        }
LAB_00466087:
        *(undefined4 *)&this->field_0x4cd = 0;
        *(undefined4 *)&this->field_0x4d5 = 7;
        goto cf_common_exit_0046875C;
      }
      if (iVar6 == 4) {
        if (*(int *)&this->field_0x4cd < 1) {
          iVar6 = sub_00460260(this,2);
          switch(iVar6) {
          case 0:
            *(undefined4 *)&this->field_0x4d5 = 5;
            iVar6 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          case 1:
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) goto cf_common_exit_00468C50;
            local_c = (undefined4 *)0x0;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar14 = this->field_049B;
                sVar19 = this->field_049F;
                sVar20 = this->field_049D;
                if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar19)) {
                  pSVar7 = (STWorldObject *)0x0;
                }
                else {
                  pSVar7 = g_worldGrid.cells
                           [(int)sVar19 * (int)g_worldGrid.planeStride +
                            (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                }
                if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
              if (this->field_04A1 != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar14 = this->field_04A5;
                sVar19 = this->field_04A9;
                sVar20 = this->field_04A7;
                if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                   ((sVar20 < 0 ||
                    (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)
                     ))))) {
                  pSVar7 = (STWorldObject *)0x0;
                }
                else {
                  pSVar7 = g_worldGrid.cells
                           [(int)sVar19 * (int)g_worldGrid.planeStride +
                            (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                }
                if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
            }
            iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
            if (iVar6 == 0) {
              sub_004602B0(this);
              *(undefined4 *)&this->field_0x4d5 = 0;
              goto cf_common_exit_00469979;
            }
            if (iVar6 == 1) {
              if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
              goto cf_common_exit_00468C50;
              sub_004602B0(this);
              if (this->field_04A1 == -1) {
                *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                iVar6 = (*this->vtable->vfunc_D8)();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              if (local_c != (undefined4 *)0x1) goto cf_common_exit_00468C50;
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 1;
              this->field_00B7 = 3;
              goto LAB_00467018;
            }
            sub_004602B0(this);
            *(undefined4 *)&this->field_0x4cd = 0;
            this->field_00B7 = 3;
            *(undefined4 *)&this->field_0x4d5 = 7;
            iVar6 = this->field_04A9 + 1;
            break;
          default:
            goto cf_common_exit_00468C50;
          case 3:
            goto switchD_004660af_caseD_3;
          case -1:
            iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1e6e,0,0,
                                       "%s","STBoatC::LoadRC, move to mine 2 error");
            if (iVar6 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar6 = 0x1e6e;
            goto cf_error_exit_004660E9;
          }
LAB_00467068:
          sVar19 = this->field_04A7;
          sVar14 = this->field_04A5;
LAB_00468c40:
          sub_00481520(this,(int)sVar14,(int)sVar19,iVar6);
          goto cf_common_exit_00468C49;
        }
        iVar6 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar6;
        if (iVar6 == 2) {
          iVar6 = Defence(this,0);
          if (iVar6 != -1) {
            return 2;
          }
          return -1;
        }
        iVar6 = Defence(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_00466bff:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar14 = this->field_049B;
            sVar19 = this->field_049F;
            sVar20 = this->field_049D;
            if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
               ((sVar20 < 0 ||
                (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))
               ) {
              pSVar7 = (STWorldObject *)0x0;
            }
            else {
              pSVar7 = g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
            }
            if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
        }
        else {
          if (this->field_04C1 != 1) {
            return 2;
          }
          if (this->field_04BD == 1) goto LAB_00466bff;
        }
        if (this->field_04C1 == 1) {
          this->field_04C1 = 0;
          if (this->field_04AB != -1) {
            sVar14 = this->field_04A5;
            sVar19 = this->field_04A9;
            sVar20 = this->field_04A7;
            if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                ((sVar20 < 0 || ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))))) ||
               (g_worldGrid.sizeZ <= sVar19)) {
              pSVar7 = (STWorldObject *)0x0;
            }
            else {
              pSVar7 = g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
            }
            if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
        if (iVar6 == 0) {
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (iVar6 != 1) goto cf_common_exit_00468742;
        if (this->field_04A1 == -1) {
          return 2;
        }
        goto cf_common_exit_00465E40;
      }
      if (iVar6 == 5) {
        *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
        if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
          local_c = (undefined4 *)0x0;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar14 = this->field_049B;
              sVar19 = this->field_049F;
              sVar20 = this->field_049D;
              if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19))
              {
                pSVar7 = (STWorldObject *)0x0;
              }
              else {
                pSVar7 = g_worldGrid.cells
                         [(int)sVar19 * (int)g_worldGrid.planeStride +
                          (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
              }
              if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
            if (this->field_04A1 != -1) {
              local_c = (undefined4 *)0x1;
            }
          }
          if (this->field_04C1 == 1) {
            this->field_04C1 = 0;
            if (this->field_04AB != -1) {
              sVar14 = this->field_04A5;
              sVar19 = this->field_04A9;
              sVar20 = this->field_04A7;
              if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                 ((sVar20 < 0 ||
                  (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))
                  ))) {
                pSVar7 = (STWorldObject *)0x0;
              }
              else {
                pSVar7 = g_worldGrid.cells
                         [(int)sVar19 * (int)g_worldGrid.planeStride +
                          (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
              }
              if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
          if (iVar6 == 0) {
            sub_004602B0(this);
            *(undefined4 *)&this->field_0x4d5 = 0;
            goto cf_common_exit_00469979;
          }
          if (iVar6 != 1) {
            iVar6 = (int)this->field_04A9;
            *(undefined4 *)&this->field_0x4cd = 0;
            *(undefined4 *)&this->field_0x4d5 = 6;
            this->field_00B7 = 3;
            goto LAB_00467068;
          }
          if ((this->field_04A1 == -1) || (local_c != (undefined4 *)0x0)) {
            *(undefined4 *)&this->field_0x4cd = 0;
            this->field_00B7 = 3;
            if (this->field_04A1 == -1) {
              *(undefined4 *)&this->field_0x4d5 = 6;
              sub_00481520(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
            }
            else if (local_c == (undefined4 *)0x1) {
              *(undefined4 *)&this->field_0x4d5 = 1;
              sub_00481520(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
            }
            else {
              iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1efd,0,0,
                                         "%s","STBoatC::LoadRC, LOADRC_MINE");
              if (iVar6 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
            }
            goto cf_common_exit_004699E2;
          }
        }
        if (*(int *)&this->field_0x4cd % 10 != 1) goto cf_common_exit_00468C50;
        sVar14 = this->field_049B;
        sVar19 = this->field_049F;
        sVar20 = this->field_049D;
        if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
            ((sVar20 < 0 ||
             (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19))))))
           || ((pSVar7 = g_worldGrid.cells
                         [(int)sVar19 * (int)g_worldGrid.planeStride +
                          (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
               pSVar7 == (STWorldObject *)0x0 || (*(int *)&pSVar7->field_0x18 != this->field_04A1)))
           ) {
          sub_0048D930(this);
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 6;
LAB_00468b38:
          this->field_00B7 = 3;
          goto LAB_00468b42;
        }
        if ((*(int *)&pSVar7[0x21].field_0x10 == 0) && (*(int *)&pSVar7[0x10].field_0x5 != 6)) {
          thunk_FUN_004e1930(pSVar7,&local_8,0);
          iVar6 = thunk_FUN_00430910(local_8);
          local_18 = thunk_FUN_004e1930(pSVar7,&local_8,iVar6);
          if (local_18 == iVar6) {
            thunk_FUN_004e16d0(pSVar7,this->field_0018);
            if (*(int *)&this->field_0x4cd % 0x78 == 1) {
              SVar2 = this->field_06F7;
              if (SVar2 == CASE_8) {
                pSVar17 = this->vtable;
                uVar26 = 0xfc;
LAB_0046739a:
                (*pSVar17->vfunc_90)(3,uVar26);
              }
              else if (SVar2 == CASE_14) {
                (*this->vtable->vfunc_90)(3,0x160);
              }
              else if (SVar2 == CASE_1A) {
                pSVar17 = this->vtable;
                uVar26 = 0x19f;
                goto LAB_0046739a;
              }
            }
            if (local_8 == 0xdc) {
              iVar8 = this->field_07D2 + 1;
              this->field_07D2 = iVar8;
              if (0x28 < iVar8 + this->field_07D6 + this->field_07DA) {
                this->field_07D2 = (0x28 - this->field_07D6) - this->field_07DA;
              }
            }
            else if (local_8 == 0xdd) {
              iVar8 = this->field_07D6 + 1;
              this->field_07D6 = iVar8;
              if (0x28 < iVar8 + this->field_07D2 + this->field_07DA) {
                this->field_07D6 = (0x28 - this->field_07D2) - this->field_07DA;
              }
            }
            else if (local_8 == 0xde) {
              iVar8 = this->field_07DA + 1;
              this->field_07DA = iVar8;
              if (0x28 < this->field_07D2 + this->field_07D6 + iVar8) {
                this->field_07DA = (0x28 - this->field_07D2) - this->field_07D6;
              }
            }
            else {
              iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1f2f,0,0,
                                         "%s","STBoatC::LoadRC, LOADRC_MINE - unknown resource type");
              if (iVar8 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
            }
          }
          if (((local_18 < iVar6) ||
              (this->field_07DA + this->field_07D6 + this->field_07D2 == 0x28)) ||
             (iVar6 = (*pSVar7->vtable[2].slots_00_28[10])(&local_8), iVar6 == 0))
          goto LAB_0046744c;
        }
        else {
LAB_0046744c:
          sub_0048D930(this);
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 6;
          this->field_00B7 = 3;
          sub_00481520(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
          sub_00460260(this,0);
        }
        iVar6 = (*pSVar7->vtable[2].slots_00_28[10])(&local_8);
        if (iVar6 == 0) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STAllPlayersC::_ChangeMD
                    (g_allPlayers_007FA174,0,(int *)this->field_0024,
                     CONCAT22(extraout_var_00,*(undefined2 *)&pSVar7[1].field_0xe));
          iVar6 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
cf_common_exit_00468C50:
        iVar6 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      if (iVar6 != 6) {
        if (iVar6 != 7) {
          if (iVar6 == 8) {
            iVar6 = sub_00460260(this,2);
            switch(iVar6) {
            case 0:
              iVar6 = sub_00490570(this);
              if (iVar6 != 1) {
                *(undefined4 *)&this->field_0x4d5 = 9;
                this->field_00B7 = 3;
                goto cf_common_exit_00469979;
              }
              sVar14 = this->field_04A5;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              piVar16 = (int *)CONCAT22(extraout_var_03,this->field_04A9 + 1);
              break;
            case 1:
              if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
                local_c = (undefined4 *)0x0;
                if (this->field_04BD == 1) {
                  this->field_04BD = 0;
                  if (this->field_04A1 != -1) {
                    sVar14 = this->field_049B;
                    sVar19 = this->field_049F;
                    sVar20 = this->field_049D;
                    if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                       ((sVar20 < 0 ||
                        (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) ||
                         (g_worldGrid.sizeZ <= sVar19)))))) {
                      pSVar7 = (STWorldObject *)0x0;
                    }
                    else {
                      pSVar7 = g_worldGrid.cells
                               [(int)sVar19 * (int)g_worldGrid.planeStride +
                                (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                    }
                    if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
                      this->field_04A1 = 0xffffffff;
                    }
                  }
                  if (this->field_04A1 != -1) {
                    local_c = (undefined4 *)0x1;
                  }
                }
                if (this->field_04C1 == 1) {
                  this->field_04C1 = 0;
                  if (this->field_04AB != -1) {
                    sVar14 = this->field_04A5;
                    sVar19 = this->field_04A9;
                    sVar20 = this->field_04A7;
                    if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                       (((sVar20 < 0 || ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) ||
                        (g_worldGrid.sizeZ <= sVar19)))) {
                      pSVar7 = (STWorldObject *)0x0;
                    }
                    else {
                      pSVar7 = g_worldGrid.cells
                               [(int)sVar19 * (int)g_worldGrid.planeStride +
                                (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                    }
                    if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
                      this->field_04AB = 0xffffffff;
                    }
                  }
                }
                iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
                if (iVar6 == 0) goto cf_common_exit_00467FE4;
                if (iVar6 != 1) goto LAB_0046817e;
                if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
                goto cf_common_exit_004699E9;
                sub_004602B0(this);
                if (this->field_04A1 == -1) {
                  *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                  goto cf_common_exit_004699E9;
                }
                if (local_c == (undefined4 *)0x1) {
                  this->field_00B7 = 3;
                  *(undefined4 *)&this->field_0x4d5 = 1;
                  sub_00481520(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1
                              );
                  goto cf_common_exit_004699E2;
                }
              }
              sVar14 = this->field_04A5;
              sVar19 = this->field_04A9;
              sVar20 = this->field_04A7;
              if (((((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar19)) ||
                  ((pSVar1 = (STBoatC *)
                             g_worldGrid.cells
                             [(int)sVar19 * (int)g_worldGrid.planeStride +
                              (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
                   pSVar1 == (STBoatC *)0x0 || (pSVar1->field_0018 != this->field_04AB)))) ||
                 ((iVar6 = thunk_FUN_004e1490(pSVar1), iVar6 != 1 ||
                  (iVar6 = thunk_FUN_0048d650(this,(STFishC *)pSVar1), iVar6 != 1))))
              goto cf_common_exit_004699E9;
              sub_004602B0(this);
              thunk_FUN_004e15f0(pSVar1,this->field_0018);
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 10;
              sub_00481520(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
              goto cf_common_exit_004699E2;
            default:
              goto cf_common_exit_004699E9;
            case 3:
              iVar6 = sub_00490570(this);
              if (iVar6 == 1) {
                sVar14 = this->field_04A5;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                piVar16 = (int *)CONCAT22((short)((uint)&this->field_04B3 >> 0x10),
                                          this->field_04A9 + 1);
                goto LAB_00467e31;
              }
              goto LAB_00467e48;
            case -1:
              iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x201c,0,0,
                                         "%s","STBoatC::LoadRC, correct move to depot error");
              if (iVar6 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar6 = 0x201c;
cf_error_exit_004660E9:
              RaiseInternalException
                        (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                         iVar6);
              return 0xffff;
            }
            goto LAB_00467da5;
          }
          if (iVar6 == 9) {
            *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
            iVar6 = Defence(this,2);
            if (iVar6 == -1) {
              return -1;
            }
            if (this->field_082E != 0) {
              return 2;
            }
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) {
              if (*(int *)&this->field_0x4cd % 0x32 != 1) {
                return 2;
              }
              sVar14 = this->field_04A5;
              sVar19 = this->field_04A9;
              sVar20 = this->field_04A7;
              if (sVar14 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeX <= sVar14) {
                return 2;
              }
              if (sVar20 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeY <= sVar20) {
                return 2;
              }
              if (sVar19 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeZ <= sVar19) {
                return 2;
              }
              pSVar1 = (STBoatC *)
                       g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
              if (pSVar1 == (STBoatC *)0x0) {
                return 2;
              }
              if (pSVar1->field_0018 != this->field_04AB) {
                return 2;
              }
              iVar6 = thunk_FUN_004e1490(pSVar1);
              if (iVar6 != 1) {
                return 2;
              }
              iVar6 = thunk_FUN_0048d650(this,(STFishC *)pSVar1);
              if (iVar6 != 1) {
                return 2;
              }
              thunk_FUN_004e15f0(pSVar1,this->field_0018);
              iVar6 = (int)this->field_04C9;
              sVar19 = this->field_04C7;
              sVar14 = this->field_04C5;
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 10;
              this->field_00B7 = 0;
              goto LAB_00468322;
            }
            local_c = (undefined4 *)0x0;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar14 = this->field_049B;
                sVar19 = this->field_049F;
                sVar20 = this->field_049D;
                if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar19)) {
                  pSVar7 = (STWorldObject *)0x0;
                }
                else {
                  pSVar7 = g_worldGrid.cells
                           [(int)sVar19 * (int)g_worldGrid.planeStride +
                            (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                }
                if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar14 = this->field_04A5;
                sVar19 = this->field_04A9;
                sVar20 = this->field_04A7;
                if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                   ((sVar20 < 0 ||
                    (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)
                     ))))) {
                  pSVar7 = (STWorldObject *)0x0;
                }
                else {
                  pSVar7 = g_worldGrid.cells
                           [(int)sVar19 * (int)g_worldGrid.planeStride +
                            (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                }
                if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
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
            iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
            if (iVar6 != 0) {
              if (iVar6 == 7) {
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
                *(undefined4 *)&this->field_0x4cd = 0;
                *(undefined4 *)&this->field_0x4d5 = 7;
                sub_00481520(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
              }
              else {
                *(undefined4 *)&this->field_0x4cd = 0;
                *(undefined4 *)&this->field_0x4d5 = 1;
                sub_00481520(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
              }
              goto cf_common_exit_00465E7B;
            }
            sub_004602B0(this);
            goto LAB_00469972;
          }
          if (iVar6 != 10) {
            if (iVar6 == 0xb) {
              if (this->field_04D9 == 0) {
                iVar9 = (ushort)(this->field_04A9 * 200) + 300;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar8 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_04A7 + 1) * 0xc9;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar10 = CONCAT22((short)((uint)iVar8 >> 0x10),this->field_04A5 + 1);
                iVar6 = iVar10 * 0xc9;
                uVar5 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar5 = (*this->vtable->vfunc_10)
                                  (CONCAT22(uVar5,this->field_0041),
                                   CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                                   CONCAT22(uVar5,this->field_0045),iVar6,iVar8,iVar9);
                this->field_04CB = uVar5;
                this->field_04D9 = 1;
              }
              if (this->field_04D9 == 1) {
                uVar11 = sub_004176C0(this,this->field_04CB);
                uVar11 = sub_00417910(this,(short)uVar11);
                if (uVar11 == 0xffffffff) {
                  iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2196,0,0,
                                             "%s","STBoatC::LoadRC, LOADRC_PDEPOT"
                                            );
                  if (iVar6 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  iVar6 = 0x2197;
                  goto cf_error_exit_004660E9;
                }
                if (uVar11 == 0) {
                  this->field_04D9 = 2;
                  iVar6 = (*this->vtable->vfunc_D8)();
                  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
                }
              }
              if (this->field_04D9 == 2) {
                sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                             (this->field_04A5 + 1) * 0xc9,(this->field_04A7 + 1) * 0xc9,
                             this->field_04A9 * 200 + 300,this->field_0061);
                this->field_04D9 = 3;
              }
              if (this->field_04D9 == 3) {
                local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
                param_1 = (int *)0x0;
                if (this->field_02BF != '\0') {
                  local_c = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar12 = (undefined4 *)
                              thunk_FUN_0041dc40(local_2c,(short)*local_c,
                                                 *(undefined2 *)(local_c + 1),this->field_006C);
                    local_24 = *puVar12;
                    local_20 = *(short *)(puVar12 + 1);
                    if (DAT_0080732c == 1) {
                      bVar25 = 0;
                      sVar24 = 0;
                      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar9 = -1;
                      this->field_001C = uVar11;
                      sVar23 = 0;
                      sVar22 = 0;
                      uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                      sVar21 = 0;
                      this->field_001C = uVar13;
                      sVar20 = 0;
                      sVar19 = 0;
                      local_1c = uVar13 * 0x41c64e6d + 0x3039;
                      sVar14 = 0;
                      this->field_001C = local_1c;
                      lVar18 = Library::MSVCRT::__ftol();
                      iVar6 = (int)(short)lVar18 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3
                              + (int)local_20;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      iVar8 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                      uVar11 = local_1c;
                    }
                    else {
                      uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
                      bVar25 = 0;
                      sVar24 = 0;
                      uVar15 = uVar13 * 0x41c64e6d + 0x3039;
                      iVar9 = -1;
                      sVar23 = 0;
                      sVar22 = 0;
                      sVar21 = 0;
                      sVar20 = 0;
                      sVar19 = 0;
                      this->field_001C = uVar13;
                      uVar11 = uVar15 * 0x41c64e6d + 0x3039;
                      sVar14 = 0;
                      this->field_001C = uVar15;
                      this->field_001C = uVar11;
                      iVar6 = (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      iVar8 = ((uVar15 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                    }
                    TraksClassTy::TraksCreate
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_24,iVar8 + -3,iVar6,sVar14,sVar19,sVar20,sVar21,
                               sVar22,sVar23,iVar9,sVar24,bVar25);
                    param_1 = (int *)((int)param_1 + 1);
                    local_c = (undefined4 *)((int)local_c + 6);
                  } while ((int)param_1 < (int)(uint)(byte)this->field_02BF);
                }
                if (local_10 == -1) {
                  iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x21bc,0,0,
                                             "%s",
                                             "STBoatC::LoadRC, LOADRC_PDEPOT 2");
                  if (iVar6 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  iVar6 = 0x21bd;
                  goto cf_error_exit_004660E9;
                }
                if (local_10 == 0) {
                  *(undefined4 *)&this->field_0x4d5 = 0xc;
                  this->field_04D9 = 0;
                  iVar6 = (*this->vtable->vfunc_D8)();
                  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
                }
              }
              goto cf_common_exit_004693C9;
            }
            if (iVar6 != 0xc) {
              if (iVar6 == 0xd) {
                iVar6 = *(int *)&this->field_0x4d1 + 1;
                *(int *)&this->field_0x4d1 = iVar6;
                if (0x45 < iVar6) {
                  if (this->field_04D9 == 0) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_04C9 * 200) + 100;
                    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
                    iVar9 = CONCAT22((short)((uint)in_EDX >> 0x10),this->field_04C7 * 0xc9) + 100;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    iVar8 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_04C5 * 0xc9) + 100;
                    uVar5 = (undefined2)((uint)iVar9 >> 0x10);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar5 = (*this->vtable->vfunc_10)
                                      (CONCAT22(uVar5,this->field_0041),
                                       CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0043),
                                       CONCAT22(uVar5,this->field_0045),iVar8,iVar9,iVar6);
                    this->field_04CB = uVar5;
                    this->field_04D9 = 1;
                  }
                  if (this->field_04D9 == 1) {
                    uVar11 = sub_004176C0(this,this->field_04CB);
                    uVar11 = sub_00417910(this,(short)uVar11);
                    if (uVar11 == 0xffffffff) {
                      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x223c,0,0,
                                                 "%s",
                                                 "STBoatC::LoadRC, LOADRC_ODEPOT");
                      if (iVar6 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                      iVar6 = 0x223d;
                      goto cf_error_exit_004660E9;
                    }
                    if (uVar11 == 0) {
                      this->field_04D9 = 2;
                      goto cf_common_exit_004699E9;
                    }
                  }
                  if (this->field_04D9 == 2) {
                    sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                                 this->field_04C5 * 0xc9 + 100,this->field_04C7 * 0xc9 + 100,
                                 this->field_04C9 * 200 + 100,this->field_0061);
                    this->field_04D9 = 3;
                  }
                  if (this->field_04D9 == 3) {
                    local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_18);
                    param_1 = (int *)0x0;
                    if (this->field_02BF != '\0') {
                      local_c = (undefined4 *)&this->field_0x2b3;
                      do {
                        puVar12 = (undefined4 *)
                                  thunk_FUN_0041dc40(local_2c,(short)*local_c,
                                                     *(undefined2 *)(local_c + 1),this->field_006C);
                        local_24 = *puVar12;
                        local_20 = *(short *)(puVar12 + 1);
                        if (DAT_0080732c == 1) {
                          bVar25 = 0;
                          sVar24 = 0;
                          iVar9 = -1;
                          uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar23 = 0;
                          this->field_001C = uVar11;
                          sVar22 = 0;
                          sVar21 = 0;
                          uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                          sVar20 = 0;
                          this->field_001C = uVar13;
                          local_1c = uVar13 * 0x41c64e6d + 0x3039;
                          sVar19 = 0;
                          this->field_001C = local_1c;
                          sVar14 = 0;
                          lVar18 = Library::MSVCRT::__ftol();
                          iVar6 = (int)(short)lVar18 + (uVar11 >> 0x10) % 7 + (int)this->field_0045
                                  + -3 + (int)local_20;
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          iVar8 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) -
                                  (int)local_24._2_2_;
                          uVar11 = local_1c;
                        }
                        else {
                          bVar25 = 0;
                          uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar24 = 0;
                          iVar9 = -1;
                          uVar15 = uVar13 * 0x41c64e6d + 0x3039;
                          sVar23 = 0;
                          sVar22 = 0;
                          sVar21 = 0;
                          sVar20 = 0;
                          sVar19 = 0;
                          this->field_001C = uVar13;
                          uVar11 = uVar15 * 0x41c64e6d + 0x3039;
                          sVar14 = 0;
                          this->field_001C = uVar15;
                          this->field_001C = uVar11;
                          iVar6 = (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          iVar8 = ((uVar15 >> 0x10) % 7 + (int)this->field_0043) -
                                  (int)local_24._2_2_;
                        }
                        TraksClassTy::TraksCreate
                                  (g_traksClass_00802A7C,1,2,7,
                                   (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                                   (int)(short)local_24,iVar8 + -3,iVar6,sVar14,sVar19,sVar20,sVar21
                                   ,sVar22,sVar23,iVar9,sVar24,bVar25);
                        param_1 = (int *)((int)param_1 + 1);
                        local_c = (undefined4 *)((int)local_c + 6);
                      } while ((int)param_1 < (int)(uint)(byte)this->field_02BF);
                    }
                    if (local_10 == -1) {
                      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2262,0,0,
                                                 "%s",
                                                 "STBoatC::LoadRC, LOADRC_ODEPOT 2");
                      if (iVar6 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                      iVar6 = 0x2263;
                      goto cf_error_exit_004660E9;
                    }
                    if (local_10 == 0) {
                      *(undefined4 *)&this->field_0x4cd = 0;
                      *(undefined4 *)&this->field_0x4d1 = 0;
                      this->field_00B7 = 3;
                      iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
                      if (iVar6 == 0) {
                        sub_004602B0(this);
                        *(undefined4 *)&this->field_0x4d5 = 0;
                        this->field_00B7 = 0;
                        iVar6 = Defence(this,0);
                        return (-(uint)(iVar6 != -1) & 3) - 1;
                      }
                      if (iVar6 == 1) {
                        sVar14 = this->field_049F;
                        sVar19 = this->field_049D;
                        sVar20 = this->field_049B;
                        *(undefined4 *)&this->field_0x4d5 = 0xe;
                      }
                      else {
                        sVar14 = this->field_04A9;
                        sVar19 = this->field_04A7;
                        sVar20 = this->field_04A5;
                        *(undefined4 *)&this->field_0x4d5 = 7;
                      }
                      sub_00481520(this,(int)sVar20,(int)sVar19,sVar14 + 1);
                      sub_00460260(this,0);
                    }
                  }
                  goto cf_common_exit_004693C9;
                }
                goto cf_common_exit_004699E9;
              }
              if (iVar6 != 0xe) {
                iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x22ad,0,0,
                                           "%s","STBoatC::LoadRC - incorrect entry"
                                          );
                if (iVar6 == 0) {
                  return -1;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar6 = sub_00460260(this,2);
              switch(iVar6) {
              case 1:
                sub_004602B0(this);
              case 0:
                *(undefined4 *)&this->field_0x4cd = 0;
                *(undefined4 *)&this->field_0x4d5 = 1;
                this->field_00B7 = 3;
              case 3:
                iVar6 = (int)this->field_049D;
                iVar8 = (int)this->field_049B;
                iVar9 = this->field_049F + 1;
                break;
              default:
                goto cf_common_exit_004699E9;
              case -1:
                iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x228f,0,0,
                                           "%s","STBoatC::LoadRC, LOADRC_MOVEWAITUNLOAD error"
                                          );
                if (iVar6 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar6 = 0x228f;
                goto cf_error_exit_004660E9;
              }
              goto cf_common_exit_004699DA;
            }
            iVar6 = *(int *)&this->field_0x4cd + 1;
            *(int *)&this->field_0x4cd = iVar6;
            if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
              local_c = (undefined4 *)0x0;
              if (this->field_04BD == 1) {
                this->field_04BD = 0;
                if (this->field_04A1 != -1) {
                  sVar14 = this->field_049B;
                  sVar19 = this->field_049F;
                  sVar20 = this->field_049D;
                  if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
                      ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) ||
                     (g_worldGrid.sizeZ <= sVar19)) {
                    pSVar7 = (STWorldObject *)0x0;
                  }
                  else {
                    pSVar7 = g_worldGrid.cells
                             [(int)sVar19 * (int)g_worldGrid.planeStride +
                              (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                  }
                  if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
                    this->field_04A1 = 0xffffffff;
                  }
                }
              }
              if (this->field_04C1 == 1) {
                this->field_04C1 = 0;
                if (this->field_04AB != -1) {
                  sVar14 = this->field_04A5;
                  sVar19 = this->field_04A9;
                  sVar20 = this->field_04A7;
                  if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                     ((sVar20 < 0 ||
                      (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) ||
                       (g_worldGrid.sizeZ <= sVar19)))))) {
                    pSVar7 = (STWorldObject *)0x0;
                  }
                  else {
                    pSVar7 = g_worldGrid.cells
                             [(int)sVar19 * (int)g_worldGrid.planeStride +
                              (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                  }
                  if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
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
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 0xd;
              this->field_00B7 = 3;
cf_common_exit_004693C9:
              iVar6 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
LAB_004691ae:
            if (iVar6 % 10 != 1) goto cf_common_exit_004699E9;
            sVar14 = this->field_04A5;
            sVar19 = this->field_04A9;
            sVar20 = this->field_04A7;
            if ((((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar20 &&
                   (((sVar20 < g_worldGrid.sizeY && (-1 < sVar19)) && (sVar19 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar7 = g_worldGrid.cells
                                     [(int)sVar19 * (int)g_worldGrid.planeStride +
                                      (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0]
                           , pSVar7 != (STWorldObject *)0x0 &&
                           (*(int *)&pSVar7->field_0x18 == this->field_04AB)))) &&
                (*(int *)&pSVar7[0x21].field_0x10 == 0)) && (*(int *)&pSVar7[0x10].field_0x5 != 6))
            {
              if (iVar6 % 0x78 == 1) {
                SVar2 = this->field_06F7;
                if (SVar2 == CASE_8) {
                  pSVar17 = this->vtable;
                  uVar26 = 0xfb;
LAB_004692be:
                  (*pSVar17->vfunc_90)(3,uVar26);
                }
                else if (SVar2 == CASE_14) {
                  (*this->vtable->vfunc_90)(3,0x15f);
                }
                else if (SVar2 == CASE_1A) {
                  pSVar17 = this->vtable;
                  uVar26 = 0x19e;
                  goto LAB_004692be;
                }
              }
              iVar6 = this->field_07D2;
              iVar8 = 1;
              if (iVar6 < 1) {
                iVar6 = this->field_07D6;
                if (iVar6 < 1) {
                  iVar6 = this->field_07DA;
                  if (0 < iVar6) {
                    if (iVar6 < 1) {
                      iVar8 = iVar6;
                    }
                    thunk_FUN_004e1d70(pSVar7,0xde,iVar8 * 0x14);
                    thunk_FUN_004e16d0(pSVar7,this->field_0018);
                    this->field_07DA = this->field_07DA - iVar8;
                  }
                }
                else {
                  if (iVar6 < 1) {
                    iVar8 = iVar6;
                  }
                  thunk_FUN_004e1d70(pSVar7,0xdd,iVar8 * 3);
                  thunk_FUN_004e16d0(pSVar7,this->field_0018);
                  this->field_07D6 = this->field_07D6 - iVar8;
                }
              }
              else {
                if (iVar6 < 1) {
                  iVar8 = iVar6;
                }
                thunk_FUN_004e1d70(pSVar7,0xdc,iVar8 * 5);
                thunk_FUN_004e16d0(pSVar7,this->field_0018);
                this->field_07D2 = this->field_07D2 - iVar8;
              }
              if (this->field_07DA + this->field_07D6 + this->field_07D2 != 0)
              goto cf_common_exit_004699E9;
            }
            sub_0048D930(this);
            *(undefined4 *)&this->field_0x4cd = 0;
            *(undefined4 *)&this->field_0x4d5 = 0xd;
            this->field_00B7 = 3;
            goto cf_common_exit_004699E9;
          }
          if (*(int *)&this->field_0x4cd < 1) {
            iVar6 = sub_00460260(this,2);
            switch(iVar6) {
            case 0:
              if (((this->field_0047 == this->field_04C5) && (this->field_0049 == this->field_04C7))
                 && (this->field_004B == this->field_04C9)) {
                *(undefined4 *)&this->field_0x4d5 = 0xb;
                this->field_04D9 = 0;
                iVar6 = (*this->vtable->vfunc_D8)();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              sVar14 = this->field_04A5;
              sVar19 = this->field_04A9;
              sVar20 = this->field_04A7;
              if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar20 &&
                   (((sVar20 < g_worldGrid.sizeY && (-1 < sVar19)) && (sVar19 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar7 = g_worldGrid.cells
                                     [(int)sVar19 * (int)g_worldGrid.planeStride +
                                      (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0]
                           , pSVar7 != (STWorldObject *)0x0 &&
                           (*(int *)&pSVar7->field_0x18 == this->field_04AB)))) {
                thunk_FUN_004e1690(pSVar7,this->field_0018);
              }
              return 0;
            case 1:
              goto switchD_0046878c_caseD_1;
            default:
              goto cf_common_exit_00468C50;
            case 3:
              sVar14 = this->field_04A5;
              sVar19 = this->field_04A9;
              sVar20 = this->field_04A7;
              if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar20)) &&
                 (((sVar20 < g_worldGrid.sizeY && (-1 < sVar19)) &&
                  ((sVar19 < g_worldGrid.sizeZ &&
                   ((STFishC *)
                    g_worldGrid.cells
                    [(int)sVar19 * (int)g_worldGrid.planeStride +
                     (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0] !=
                    (STFishC *)0x0)))))) {
                thunk_FUN_0048d650(this,(STFishC *)
                                        g_worldGrid.cells
                                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                                         (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects
                                        [0]);
              }
              sub_00481520(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
              goto cf_common_exit_00468C49;
            case -1:
              iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2126,0,0,
                                         "%s","STBoatC::LoadRC, move to depot 2 error");
              if (iVar6 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar6 = 0x2126;
              goto cf_error_exit_004660E9;
            }
          }
          iVar6 = *(int *)&this->field_0x4cd + 1;
          *(int *)&this->field_0x4cd = iVar6;
          if (iVar6 == 2) {
            iVar6 = Defence(this,0);
            if (iVar6 != -1) {
              return 2;
            }
            return -1;
          }
          iVar6 = Defence(this,2);
          if (iVar6 == -1) {
            return -1;
          }
          if (this->field_082E != 0) {
            return 2;
          }
          if (this->field_04BD == 1) {
LAB_004685d3:
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar14 = this->field_049B;
              sVar19 = this->field_049F;
              sVar20 = this->field_049D;
              if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                 ((sVar20 < 0 ||
                  (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))
                  ))) {
                pSVar7 = (STWorldObject *)0x0;
              }
              else {
                pSVar7 = g_worldGrid.cells
                         [(int)sVar19 * (int)g_worldGrid.planeStride +
                          (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
              }
              if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
                this->field_04A1 = 0xffffffff;
              }
            }
          }
          else {
            if (this->field_04C1 != 1) {
              return 2;
            }
            if (this->field_04BD == 1) goto LAB_004685d3;
          }
          if (this->field_04C1 == 1) {
            this->field_04C1 = 0;
            if (this->field_04AB != -1) {
              sVar14 = this->field_04A5;
              sVar19 = this->field_04A9;
              sVar20 = this->field_04A7;
              if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                 (((sVar20 < 0 || ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) ||
                  (g_worldGrid.sizeZ <= sVar19)))) {
                pSVar7 = (STWorldObject *)0x0;
              }
              else {
                pSVar7 = g_worldGrid.cells
                         [(int)sVar19 * (int)g_worldGrid.planeStride +
                          (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
              }
              if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
          if (iVar6 == 0) {
            sub_004602B0(this);
            *(undefined4 *)&this->field_0x4d5 = 0;
            goto cf_common_exit_00469979;
          }
          if (iVar6 == 7) {
            if (this->field_04AB == -1) {
              return 2;
            }
            goto cf_common_exit_00468742;
          }
          goto cf_common_exit_00465E40;
        }
        if (*(int *)&this->field_0x4cd < 1) {
          iVar6 = sub_00460260(this,2);
          switch(iVar6) {
          case 0:
            iVar6 = sub_00490570(this);
            if (iVar6 == 1) {
              sVar14 = this->field_04A5;
              sVar19 = this->field_04A9;
              sVar20 = this->field_04A7;
              if ((((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar20)) &&
                   ((sVar20 < g_worldGrid.sizeY && (-1 < sVar19)))) &&
                  ((sVar19 < g_worldGrid.sizeZ &&
                   ((pSVar1 = (STBoatC *)
                              g_worldGrid.cells
                              [(int)sVar19 * (int)g_worldGrid.planeStride +
                               (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
                    pSVar1 != (STBoatC *)0x0 && (pSVar1->field_0018 == this->field_04AB)))))) &&
                 (iVar6 = thunk_FUN_004e1490(pSVar1), iVar6 != 1)) {
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                          ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,
                           this->field_004B,this->field_04A5,this->field_04A7,
                           (int *)CONCAT22(extraout_var_01,this->field_04A9 + 1),1,&this->field_04AF
                           ,&this->field_04B1,&this->field_04B3);
                *(undefined4 *)&this->field_0x4d5 = 8;
                this->field_00B7 = 0;
                sub_00481520(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3)
                ;
                break;
              }
            }
            *(undefined4 *)&this->field_0x4d5 = 9;
            goto cf_common_exit_00469979;
          case 1:
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) goto cf_common_exit_00468C50;
            local_c = (undefined4 *)0x0;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar14 = this->field_049B;
                sVar19 = this->field_049F;
                sVar20 = this->field_049D;
                if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                   ((sVar20 < 0 ||
                    (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)
                     ))))) {
                  pSVar7 = (STWorldObject *)0x0;
                }
                else {
                  pSVar7 = g_worldGrid.cells
                           [(int)sVar19 * (int)g_worldGrid.planeStride +
                            (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                }
                if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar14 = this->field_04A5;
                sVar19 = this->field_04A9;
                sVar20 = this->field_04A7;
                if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
                    ((sVar20 < 0 || ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))))) ||
                   (g_worldGrid.sizeZ <= sVar19)) {
                  pSVar7 = (STWorldObject *)0x0;
                }
                else {
                  pSVar7 = g_worldGrid.cells
                           [(int)sVar19 * (int)g_worldGrid.planeStride +
                            (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
                }
                if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
              if (this->field_04AB != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
            if (iVar6 == 0) goto cf_common_exit_00467FE4;
            if (iVar6 == 7) {
              if ((this->field_04AB != -1) && (local_c == (undefined4 *)0x0))
              goto cf_common_exit_00468C50;
              sub_004602B0(this);
              if (this->field_04AB == -1) {
                *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                iVar6 = (*this->vtable->vfunc_D8)();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              if (local_c != (undefined4 *)0x1) goto cf_common_exit_00468C50;
              sub_00481520(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
            }
            else {
              sub_004602B0(this);
              *(undefined4 *)&this->field_0x4d5 = 1;
              sub_00481520(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
            }
            break;
          default:
            goto cf_common_exit_00468C50;
          case 3:
            sub_00481520(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
            break;
          case -1:
            iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1fb8,0,0,
                                       "%s","STBoatC::LoadRC, move to depot error");
            if (iVar6 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar6 = 0x1fb8;
            goto cf_error_exit_004660E9;
          }
          goto cf_common_exit_00468C49;
        }
        iVar6 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar6;
        if (iVar6 == 2) {
          iVar6 = Defence(this,0);
          if (iVar6 != -1) {
            return 2;
          }
          return -1;
        }
        iVar6 = Defence(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_0046779f:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar14 = this->field_049B;
            sVar19 = this->field_049F;
            sVar20 = this->field_049D;
            if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
               (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
              pSVar7 = (STWorldObject *)0x0;
            }
            else {
              pSVar7 = g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
            }
            if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
        }
        else {
          if (this->field_04C1 != 1) {
            return 2;
          }
          if (this->field_04BD == 1) goto LAB_0046779f;
        }
        if (this->field_04C1 == 1) {
          this->field_04C1 = 0;
          if (this->field_04AB != -1) {
            sVar14 = this->field_04A5;
            sVar19 = this->field_04A9;
            sVar20 = this->field_04A7;
            if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
               ((sVar20 < 0 ||
                (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))
               ) {
              pSVar7 = (STWorldObject *)0x0;
            }
            else {
              pSVar7 = g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
            }
            if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
        if (iVar6 == 0) {
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (iVar6 != 7) {
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 1;
          goto cf_common_exit_00465E5A;
        }
        if (this->field_04AB == -1) {
          return 2;
        }
        *(undefined4 *)&this->field_0x4cd = 0;
        goto cf_common_exit_0046875C;
      }
      iVar6 = *(int *)&this->field_0x4d1 + 1;
      *(int *)&this->field_0x4d1 = iVar6;
      if (iVar6 < 0x47) goto cf_common_exit_004699E9;
      iVar6 = sub_00460260(this,2);
      switch(iVar6) {
      case 1:
        iVar6 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar6;
        if (iVar6 < 3) goto cf_common_exit_004699E9;
        sub_004602B0(this);
      case 0:
        *(undefined4 *)&this->field_0x4cd = 0;
        *(undefined4 *)&this->field_0x4d1 = 0;
        *(undefined4 *)&this->field_0x4d5 = 7;
        this->field_00B7 = 3;
      case 3:
        iVar6 = (int)this->field_04A7;
        iVar8 = (int)this->field_04A5;
        iVar9 = this->field_04A9 + 1;
        break;
      default:
        goto cf_common_exit_004699E9;
      case -1:
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1f53,0,0,"%s",
                                   "STBoatC::LoadRC, LOADRC_MOVEWAITLOAD error");
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x1f53;
        goto cf_error_exit_004660E9;
      }
      goto cf_common_exit_004699DA;
    }
    iVar6 = sub_00460260(this,2);
    switch(iVar6) {
    case 0:
      iVar6 = sub_00490570(this);
      if (iVar6 != 1) {
        *(undefined4 *)&this->field_0x4d5 = 3;
        this->field_00B7 = 3;
        iVar6 = Defence(this,0);
        return (-(uint)(iVar6 != -1) & 3) - 1;
      }
      sVar14 = this->field_049B;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      piVar16 = (int *)CONCAT22(extraout_var_02,this->field_049F + 1);
LAB_00467da5:
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,this->field_004B,
                 sVar14,0,piVar16,1,&this->field_04AF,&this->field_04B1,&this->field_04B3);
      sub_00481520(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
      break;
    case 1:
      if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
        local_c = (undefined4 *)0x0;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar14 = this->field_049B;
            sVar19 = this->field_049F;
            sVar20 = this->field_049D;
            if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
               ((sVar20 < 0 ||
                (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))
               ) {
              pSVar7 = (STWorldObject *)0x0;
            }
            else {
              pSVar7 = g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
            }
            if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
              this->field_04A1 = 0xffffffff;
            }
          }
          if (this->field_04A1 != -1) {
            local_c = (undefined4 *)0x1;
          }
        }
        if (this->field_04C1 == 1) {
          this->field_04C1 = 0;
          if (this->field_04AB != -1) {
            sVar14 = this->field_04A5;
            sVar19 = this->field_04A9;
            sVar20 = this->field_04A7;
            if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
               (((sVar20 < 0 || ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar19)))) {
              pSVar7 = (STWorldObject *)0x0;
            }
            else {
              pSVar7 = g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
            }
            if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
        if (iVar6 == 0) {
cf_common_exit_00467FE4:
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (iVar6 == 1) {
          if ((this->field_04A1 != -1) && (local_c == (undefined4 *)0x0))
          goto cf_common_exit_004699E9;
          sub_004602B0(this);
          if (this->field_04A1 == -1) {
            *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
            goto cf_common_exit_004699E9;
          }
          if (local_c != (undefined4 *)0x1) goto LAB_00466744;
          this->field_00B7 = 3;
          *(undefined4 *)&this->field_0x4d5 = 1;
          sub_00481520(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
        }
        else {
LAB_0046817e:
          sub_004602B0(this);
          this->field_00B7 = 3;
          *(undefined4 *)&this->field_0x4d5 = 7;
          sub_00481520(this,(int)this->field_04A5,(int)this->field_04A7,this->field_04A9 + 1);
        }
      }
      else {
LAB_00466744:
        sVar14 = this->field_049B;
        sVar19 = this->field_049F;
        sVar20 = this->field_049D;
        if ((((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
             ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) ||
            ((g_worldGrid.sizeZ <= sVar19 ||
             ((pSVar1 = (STBoatC *)
                        g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
              pSVar1 == (STBoatC *)0x0 || (pSVar1->field_0018 != this->field_04A1)))))) ||
           (iVar6 = thunk_FUN_004e1490(pSVar1), iVar6 != 1)) goto cf_common_exit_004699E9;
        sub_004602B0(this);
        thunk_FUN_004e15f0(pSVar1,this->field_0018);
        *(undefined4 *)&this->field_0x4cd = 0;
        *(undefined4 *)&this->field_0x4d5 = 4;
        sub_00481520(this,(int)this->field_049B,(int)this->field_049D,this->field_049F + 1);
      }
      break;
    default:
      goto cf_common_exit_004699E9;
    case 3:
      iVar6 = sub_00490570(this);
      if (iVar6 == 1) {
        sVar14 = this->field_049B;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        piVar16 = (int *)CONCAT22((short)((uint)&this->field_04B3 >> 0x10),this->field_049F + 1);
LAB_00467e31:
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                  ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,this->field_004B,
                   sVar14,0,piVar16,1,&this->field_04AF,&this->field_04B1,&this->field_04B3);
      }
LAB_00467e48:
      sub_00481520(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
      break;
    case -1:
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1d66,0,0,"%s",
                                 "STBoatC::LoadRC, correct move to mine error");
      if (iVar6 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x1d66
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
cf_common_exit_004699E2:
  sub_00460260(this,0);
cf_common_exit_004699E9:
  iVar6 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
switchD_0046878c_caseD_1:
  if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
    local_c = (undefined4 *)0x0;
    if (this->field_04BD == 1) {
      this->field_04BD = 0;
      if (this->field_04A1 != -1) {
        sVar14 = this->field_049B;
        sVar19 = this->field_049F;
        sVar20 = this->field_049D;
        if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar20 < 0)) ||
           (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
          pSVar7 = (STWorldObject *)0x0;
        }
        else {
          pSVar7 = g_worldGrid.cells
                   [(int)sVar19 * (int)g_worldGrid.planeStride +
                    (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
        }
        if (*(int *)&pSVar7->field_0x18 != this->field_04A1) {
          this->field_04A1 = 0xffffffff;
        }
      }
    }
    if (this->field_04C1 == 1) {
      this->field_04C1 = 0;
      if (this->field_04AB != -1) {
        sVar14 = this->field_04A5;
        sVar19 = this->field_04A9;
        sVar20 = this->field_04A7;
        if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
           ((sVar20 < 0 ||
            (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))) {
          pSVar7 = (STWorldObject *)0x0;
        }
        else {
          pSVar7 = g_worldGrid.cells
                   [(int)sVar19 * (int)g_worldGrid.planeStride +
                    (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0];
        }
        if (*(int *)&pSVar7->field_0x18 != this->field_04AB) {
          this->field_04AB = 0xffffffff;
        }
      }
      if (this->field_04AB != -1) {
        local_c = (undefined4 *)0x1;
      }
    }
    iVar6 = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)this);
    if (iVar6 == 0) {
      sub_004602B0(this);
      *(undefined4 *)&this->field_0x4d5 = 0;
      goto cf_common_exit_00469979;
    }
    if (iVar6 != 7) {
      sub_004602B0(this);
      sVar19 = this->field_049D;
      sVar14 = this->field_049B;
      iVar6 = this->field_049F + 1;
      *(undefined4 *)&this->field_0x4cd = 0;
      this->field_00B7 = 3;
      *(undefined4 *)&this->field_0x4d5 = 1;
      goto LAB_00468c40;
    }
    if ((this->field_04AB != -1) && (local_c == (undefined4 *)0x0)) goto cf_common_exit_00468C50;
    sub_004602B0(this);
    if (this->field_04AB == -1) {
      *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
      iVar6 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (local_c == (undefined4 *)0x1) {
      *(undefined4 *)&this->field_0x4cd = 0;
      *(undefined4 *)&this->field_0x4d5 = 7;
      goto LAB_00468b38;
    }
  }
  sub_004602B0(this);
  sVar14 = this->field_04A5;
  sVar19 = this->field_04A9;
  sVar20 = this->field_04A7;
  if (((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
     ((-1 < sVar20 &&
      ((((sVar20 < g_worldGrid.sizeY && (-1 < sVar19)) && (sVar19 < g_worldGrid.sizeZ)) &&
       ((STFishC *)
        g_worldGrid.cells
        [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar20 * (int)g_worldGrid.sizeX +
         (int)sVar14].objects[0] != (STFishC *)0x0)))))) {
    thunk_FUN_0048d650(this,(STFishC *)
                            g_worldGrid.cells
                            [(int)sVar19 * (int)g_worldGrid.planeStride +
                             (int)sVar20 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0]);
  }
  sub_00481520(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
  goto cf_common_exit_00468C49;
}


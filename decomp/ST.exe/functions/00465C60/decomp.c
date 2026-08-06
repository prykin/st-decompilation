#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::LoadRC
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   LoadRC(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit stack
   bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=00465CAA RET 0x4 | 00465E3D RET 0x4 | 00465E8D RET 0x4 | 00465ECB RET 0x4 |
   00465EE4 RET 0x4 | 004660FE RET 0x4 | 00466405 RET 0x4 | 0046649A RET 0x4 | 00466506 RET 0x4 |
   0046686A RET 0x4 | 00466BB6 RET 0x4 | 00466BCF RET 0x4 | 00466D79 RET 0x4 | 00466DE6 RET 0x4 |
   00466FED RET 0x4 | 004674DE RET 0x4 | 00467756 RET 0x4 | 0046776F RET 0x4 | 00467C9F RET 0x4 |
   004681EC RET 0x4 | 0046833D RET 0x4 | 0046858A RET 0x4 | 004685A3 RET 0x4 | 00468810 RET 0x4 |
   0046889D RET 0x4 | 00468B1B RET 0x4 | 00468C69 RET 0x4 | 00468D28 RET 0x4 | 00468FCE RET 0x4 |
   004693E2 RET 0x4 | 00469754 RET 0x4 | 004698B3 RET 0x4 | 0046998F RET 0x4 | 00469A02 RET 0x4 */

int __thiscall STBoatC::LoadRC(STBoatC *this,int *param_1)

{
  STBoatC *pSVar1;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  STWorldObject *pSVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  short sVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  uint uVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int *piVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  STBoatCVTable *pSVar14;
  longlong lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  byte bVar23;
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
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
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
    iVar5 = thunk_FUN_0048d440(this);
    if (iVar5 == 0) {
LAB_00469972:
      *(undefined4 *)&this->field_0x4d5 = 0;
      goto cf_common_exit_00469979;
    }
    *(int *)&this->field_0x4d5 = iVar5;
    this->field_00B7 = 3;
    if (iVar5 == 1) {
      sVar17 = this->field_049F;
      sVar16 = this->field_049D;
      sVar11 = this->field_049B;
    }
    else {
      sVar17 = this->field_04A9;
      sVar16 = this->field_04A7;
      sVar11 = this->field_04A5;
    }
    iVar21 = sVar17 + 1;
    iVar5 = (int)sVar16;
    iVar7 = (int)sVar11;
cf_common_exit_004699DA:
    sub_00481520(this,iVar7,iVar5,iVar21);
  }
  else {
    iVar5 = *(int *)&this->field_0x4d5;
    if (iVar5 == 0) {
      iVar5 = Defence(this,2);
      if (iVar5 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465cda:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar11 = this->field_049B;
          sVar16 = this->field_049F;
          sVar17 = this->field_049D;
          if (((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
              ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16)) {
            pSVar6 = nullptr;
          }
          else {
            pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
          sVar11 = this->field_04A5;
          sVar16 = this->field_04A9;
          sVar17 = this->field_04A7;
          if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
             ((sVar17 < 0 ||
              (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
          {
            pSVar6 = nullptr;
          }
          else {
            pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      iVar5 = thunk_FUN_0048d440(this);
      if (iVar5 == 0) {
        return 2;
      }
      if (iVar5 == 1) {
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
      sVar11 = this->field_04A9;
      sVar16 = this->field_04A7;
      sVar17 = this->field_04A5;
LAB_00465e72:
      sub_00481520(this,(int)sVar17,(int)sVar16,sVar11 + 1);
cf_common_exit_00465E7B:
      sub_00460260(this,0);
      return 2;
    }
    if (iVar5 == 1) {
      if (*(int *)&this->field_0x4cd < 1) {
        iVar5 = sub_00460260(this,2);
        switch(iVar5) {
        case 0:
          iVar5 = sub_00490570(this);
          if (iVar5 == 1) {
            sVar11 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if ((((((-1 < sVar11) && (sVar11 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
                 ((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)))) &&
                ((sVar16 < g_worldGrid.sizeZ &&
                 ((pSVar1 = (STBoatC *)
                            STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0],
                  pSVar1 != nullptr && (pSVar1->field_0018 == this->field_04A1)))))) &&
               (iVar5 = thunk_FUN_004e1490(pSVar1), iVar5 != 1)) {
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_049B,
                           this->field_049D,(int *)CONCAT22(extraout_var,this->field_049F + 1),1,
                           &this->field_04AF,&this->field_04B1,&this->field_04B3);
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
          local_c = nullptr;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar11 = this->field_049B;
              sVar16 = this->field_049F;
              sVar17 = this->field_049D;
              if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                 ((sVar17 < 0 ||
                  (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))
                  ))) {
                pSVar6 = nullptr;
              }
              else {
                pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
              sVar11 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                  ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))))) ||
                 (g_worldGrid.sizeZ <= sVar16)) {
                pSVar6 = nullptr;
              }
              else {
                pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          iVar5 = thunk_FUN_0048d440(this);
          if (iVar5 == 0) goto cf_common_exit_00467FE4;
          if (iVar5 == 1) {
            if ((this->field_04A1 != -1) && (local_c == nullptr))
            goto cf_common_exit_00468C50;
            sub_004602B0(this);
            if (this->field_04A1 == -1) {
              *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
              iVar5 = this->vfunc_D8();
              return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
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
          iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1d02,0,0,
                                     "%s","STBoatC::LoadRC, move to mine error");
          if (iVar5 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar5 = 0x1d02;
          goto cf_error_exit_004660E9;
        }
cf_common_exit_00468C49:
        sub_00460260(this,0);
        goto cf_common_exit_00468C50;
      }
      iVar5 = *(int *)&this->field_0x4cd + 1;
      *(int *)&this->field_0x4cd = iVar5;
      if (iVar5 == 2) {
        iVar5 = Defence(this,0);
        if (iVar5 != -1) {
          return 2;
        }
        return -1;
      }
      iVar5 = Defence(this,2);
      if (iVar5 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465f11:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar11 = this->field_049B;
          sVar16 = this->field_049F;
          sVar17 = this->field_049D;
          if ((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
             (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
            pSVar6 = nullptr;
          }
          else {
            pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
          sVar11 = this->field_04A5;
          sVar16 = this->field_04A9;
          sVar17 = this->field_04A7;
          if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
             ((sVar17 < 0 ||
              (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
          {
            pSVar6 = nullptr;
          }
          else {
            pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      iVar5 = thunk_FUN_0048d440(this);
      if (iVar5 == 0) {
        sub_004602B0(this);
        *(undefined4 *)&this->field_0x4d5 = 0;
cf_common_exit_00469979:
        iVar5 = Defence(this,0);
        return (-(uint)(iVar5 != -1) & 3) - 1;
      }
      if (iVar5 != 1) goto LAB_00466087;
      if (this->field_04A1 == -1) {
        return 2;
      }
      *(undefined4 *)&this->field_0x4cd = 0;
cf_common_exit_00465E5A:
      sVar11 = this->field_049F;
      sVar16 = this->field_049D;
      sVar17 = this->field_049B;
      goto LAB_00465e72;
    }
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
        iVar5 = Defence(this,2);
        if (iVar5 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if ((this->field_04BD != 1) && (this->field_04C1 != 1)) {
          if (*(int *)&this->field_0x4cd % 0x32 != 1) {
            return 2;
          }
          sVar11 = this->field_049B;
          sVar16 = this->field_049F;
          sVar17 = this->field_049D;
          if (sVar11 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeX <= sVar11) {
            return 2;
          }
          if (sVar17 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeY <= sVar17) {
            return 2;
          }
          if (sVar16 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeZ <= sVar16) {
            return 2;
          }
          pSVar1 = (STBoatC *)
                   STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
          if (pSVar1 == nullptr) {
            return 2;
          }
          if (pSVar1->field_0018 != this->field_04A1) {
            return 2;
          }
          iVar5 = thunk_FUN_004e1490(pSVar1);
          if (iVar5 != 1) {
            return 2;
          }
          thunk_FUN_004e15f0(pSVar1,this->field_0018);
          sVar16 = this->field_049D;
          sVar11 = this->field_049B;
          iVar5 = this->field_049F + 1;
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 4;
          this->field_00B7 = 0;
LAB_00468322:
          sub_00481520(this,(int)sVar11,(int)sVar16,iVar5);
          sub_00460260(this,0);
          return 2;
        }
        local_c = nullptr;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar11 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar6 = nullptr;
            }
            else {
              pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
            sVar11 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
               (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar16)))) {
              pSVar6 = nullptr;
            }
            else {
              pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        iVar5 = thunk_FUN_0048d440(this);
        if (iVar5 == 0) {
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (iVar5 == 1) {
          if (this->field_04A1 == -1) {
            return 2;
          }
          if (local_c == nullptr) {
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
      if (iVar5 == 4) {
        if (*(int *)&this->field_0x4cd < 1) {
          iVar5 = sub_00460260(this,2);
          switch(iVar5) {
          case 0:
            *(undefined4 *)&this->field_0x4d5 = 5;
            iVar5 = this->vfunc_D8();
            return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
          case 1:
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) goto cf_common_exit_00468C50;
            local_c = nullptr;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar11 = this->field_049B;
                sVar16 = this->field_049F;
                sVar17 = this->field_049D;
                if (((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar16)) {
                  pSVar6 = nullptr;
                }
                else {
                  pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
                sVar11 = this->field_04A5;
                sVar16 = this->field_04A9;
                sVar17 = this->field_04A7;
                if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                   ((sVar17 < 0 ||
                    (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)
                     ))))) {
                  pSVar6 = nullptr;
                }
                else {
                  pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
            }
            iVar5 = thunk_FUN_0048d440(this);
            if (iVar5 == 0) {
              sub_004602B0(this);
              *(undefined4 *)&this->field_0x4d5 = 0;
              goto cf_common_exit_00469979;
            }
            if (iVar5 == 1) {
              if ((this->field_04A1 != -1) && (local_c == nullptr))
              goto cf_common_exit_00468C50;
              sub_004602B0(this);
              if (this->field_04A1 == -1) {
                *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                iVar5 = this->vfunc_D8();
                return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
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
            iVar5 = this->field_04A9 + 1;
            break;
          default:
            goto cf_common_exit_00468C50;
          case 3:
            goto switchD_004660af_caseD_3;
          case -1:
            iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1e6e,0,0,
                                       "%s","STBoatC::LoadRC, move to mine 2 error");
            if (iVar5 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar5 = 0x1e6e;
            goto cf_error_exit_004660E9;
          }
LAB_00467068:
          sVar16 = this->field_04A7;
          sVar11 = this->field_04A5;
LAB_00468c40:
          sub_00481520(this,(int)sVar11,(int)sVar16,iVar5);
          goto cf_common_exit_00468C49;
        }
        iVar5 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar5;
        if (iVar5 == 2) {
          iVar5 = Defence(this,0);
          if (iVar5 != -1) {
            return 2;
          }
          return -1;
        }
        iVar5 = Defence(this,2);
        if (iVar5 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_00466bff:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar11 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar6 = nullptr;
            }
            else {
              pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
            sVar11 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if ((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))))) ||
               (g_worldGrid.sizeZ <= sVar16)) {
              pSVar6 = nullptr;
            }
            else {
              pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        iVar5 = thunk_FUN_0048d440(this);
        if (iVar5 == 0) {
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (iVar5 != 1) goto cf_common_exit_00468742;
        if (this->field_04A1 == -1) {
          return 2;
        }
        goto cf_common_exit_00465E40;
      }
      if (iVar5 == 5) {
        *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
        if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
          local_c = nullptr;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar11 = this->field_049B;
              sVar16 = this->field_049F;
              sVar17 = this->field_049D;
              if (((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16))
              {
                pSVar6 = nullptr;
              }
              else {
                pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
              sVar11 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                 ((sVar17 < 0 ||
                  (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))
                  ))) {
                pSVar6 = nullptr;
              }
              else {
                pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          iVar5 = thunk_FUN_0048d440(this);
          if (iVar5 == 0) {
            sub_004602B0(this);
            *(undefined4 *)&this->field_0x4d5 = 0;
            goto cf_common_exit_00469979;
          }
          if (iVar5 != 1) {
            iVar5 = (int)this->field_04A9;
            *(undefined4 *)&this->field_0x4cd = 0;
            *(undefined4 *)&this->field_0x4d5 = 6;
            this->field_00B7 = 3;
            goto LAB_00467068;
          }
          if ((this->field_04A1 == -1) || (local_c != nullptr)) {
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
              iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1efd,0,0,
                                         "%s","STBoatC::LoadRC, LOADRC_MINE");
              if (iVar5 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
            }
            goto cf_common_exit_004699E2;
          }
        }
        if (*(int *)&this->field_0x4cd % 10 != 1) goto cf_common_exit_00468C50;
        sVar11 = this->field_049B;
        sVar16 = this->field_049F;
        sVar17 = this->field_049D;
        if ((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
            ((sVar17 < 0 ||
             (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
           || ((pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0],
               pSVar6 == nullptr || (*(int *)&pSVar6->field_0x18 != this->field_04A1)))
           ) {
          sub_0048D930(this);
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 6;
LAB_00468b38:
          this->field_00B7 = 3;
          goto LAB_00468b42;
        }
        if ((*(int *)&pSVar6[0x21].field_0x10 == 0) && (*(int *)&pSVar6[0x10].field_0x5 != 6)) {
          thunk_FUN_004e1930(pSVar6,&local_8,0);
          iVar5 = thunk_FUN_00430910(local_8);
          local_18 = thunk_FUN_004e1930(pSVar6,&local_8,iVar5);
          if (local_18 == iVar5) {
            thunk_FUN_004e16d0(pSVar6,this->field_0018);
            if (*(int *)&this->field_0x4cd % 0x78 == 1) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar7 = *(int *)((int)this->field_06CB + 0x2c);
              if (iVar7 == 8) {
                pSVar14 = this->vtable;
                uVar4 = 0xfc;
LAB_0046739a:
                (*pSVar14->vfunc_90)(this,3,uVar4);
              }
              else if (iVar7 == 0x14) {
                this->vfunc_90(3,0x160);
              }
              else if (iVar7 == 0x1a) {
                pSVar14 = this->vtable;
                uVar4 = 0x19f;
                goto LAB_0046739a;
              }
            }
            if (local_8 == 0xdc) {
              iVar7 = this->field_07D2 + 1;
              this->field_07D2 = iVar7;
              if (0x28 < iVar7 + this->field_07D6 + this->field_07DA) {
                this->field_07D2 = (0x28 - this->field_07D6) - this->field_07DA;
              }
            }
            else if (local_8 == 0xdd) {
              iVar7 = this->field_07D6 + 1;
              this->field_07D6 = iVar7;
              if (0x28 < iVar7 + this->field_07D2 + this->field_07DA) {
                this->field_07D6 = (0x28 - this->field_07D2) - this->field_07DA;
              }
            }
            else if (local_8 == 0xde) {
              iVar7 = this->field_07DA + 1;
              this->field_07DA = iVar7;
              if (0x28 < this->field_07D2 + this->field_07D6 + iVar7) {
                this->field_07DA = (0x28 - this->field_07D2) - this->field_07D6;
              }
            }
            else {
              iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1f2f,0,0,
                                         "%s","STBoatC::LoadRC, LOADRC_MINE - unknown resource type");
              if (iVar7 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
            }
          }
          if (((local_18 < iVar5) ||
              (this->field_07DA + this->field_07D6 + this->field_07D2 == 0x28)) ||
             (iVar5 = (*pSVar6->vtable[2].slots_00_28[10])(&local_8), iVar5 == 0))
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
        iVar5 = (*pSVar6->vtable[2].slots_00_28[10])(&local_8);
        if (iVar5 == 0) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STAllPlayersC::_ChangeMD
                    (g_allPlayers_007FA174,0,(int *)this->field_0024,
                     CONCAT22(extraout_var_00,*(undefined2 *)&pSVar6[1].field_0xe));
          iVar5 = this->vfunc_D8();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
cf_common_exit_00468C50:
        iVar5 = this->vfunc_D8();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      if (iVar5 != 6) {
        if (iVar5 != 7) {
          if (iVar5 == 8) {
            iVar5 = sub_00460260(this,2);
            switch(iVar5) {
            case 0:
              iVar5 = sub_00490570(this);
              if (iVar5 != 1) {
                *(undefined4 *)&this->field_0x4d5 = 9;
                this->field_00B7 = 3;
                goto cf_common_exit_00469979;
              }
              sVar11 = this->field_04A5;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              piVar13 = (int *)CONCAT22(extraout_var_03,this->field_04A9 + 1);
              break;
            case 1:
              if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
                local_c = nullptr;
                if (this->field_04BD == 1) {
                  this->field_04BD = 0;
                  if (this->field_04A1 != -1) {
                    sVar11 = this->field_049B;
                    sVar16 = this->field_049F;
                    sVar17 = this->field_049D;
                    if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                       ((sVar17 < 0 ||
                        (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) ||
                         (g_worldGrid.sizeZ <= sVar16)))))) {
                      pSVar6 = nullptr;
                    }
                    else {
                      pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                    }
                    if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
                    sVar11 = this->field_04A5;
                    sVar16 = this->field_04A9;
                    sVar17 = this->field_04A7;
                    if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                       (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                        (g_worldGrid.sizeZ <= sVar16)))) {
                      pSVar6 = nullptr;
                    }
                    else {
                      pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                    }
                    if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
                      this->field_04AB = 0xffffffff;
                    }
                  }
                }
                iVar5 = thunk_FUN_0048d440(this);
                if (iVar5 == 0) goto cf_common_exit_00467FE4;
                if (iVar5 != 1) goto LAB_0046817e;
                if ((this->field_04A1 != -1) && (local_c == nullptr))
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
              sVar11 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (((((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar16)) ||
                  ((pSVar1 = (STBoatC *)
                             STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0],
                   pSVar1 == nullptr || (pSVar1->field_0018 != this->field_04AB)))) ||
                 ((iVar5 = thunk_FUN_004e1490(pSVar1), iVar5 != 1 ||
                  (iVar5 = thunk_FUN_0048d650(this,(STFishC *)pSVar1), iVar5 != 1))))
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
              iVar5 = sub_00490570(this);
              if (iVar5 == 1) {
                sVar11 = this->field_04A5;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                piVar13 = (int *)CONCAT22((short)((uint)&this->field_04B3 >> 0x10),
                                          this->field_04A9 + 1);
                goto LAB_00467e31;
              }
              goto LAB_00467e48;
            case -1:
              iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x201c,0,0,
                                         "%s","STBoatC::LoadRC, correct move to depot error");
              if (iVar5 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar5 = 0x201c;
cf_error_exit_004660E9:
              RaiseInternalException
                        (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                         iVar5);
              return 0xffff;
            }
            goto LAB_00467da5;
          }
          if (iVar5 == 9) {
            *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
            iVar5 = Defence(this,2);
            if (iVar5 == -1) {
              return -1;
            }
            if (this->field_082E != 0) {
              return 2;
            }
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) {
              if (*(int *)&this->field_0x4cd % 0x32 != 1) {
                return 2;
              }
              sVar11 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (sVar11 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeX <= sVar11) {
                return 2;
              }
              if (sVar17 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeY <= sVar17) {
                return 2;
              }
              if (sVar16 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeZ <= sVar16) {
                return 2;
              }
              pSVar1 = (STBoatC *)
                       STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
              if (pSVar1 == nullptr) {
                return 2;
              }
              if (pSVar1->field_0018 != this->field_04AB) {
                return 2;
              }
              iVar5 = thunk_FUN_004e1490(pSVar1);
              if (iVar5 != 1) {
                return 2;
              }
              iVar5 = thunk_FUN_0048d650(this,(STFishC *)pSVar1);
              if (iVar5 != 1) {
                return 2;
              }
              thunk_FUN_004e15f0(pSVar1,this->field_0018);
              iVar5 = (int)this->field_04C9;
              sVar16 = this->field_04C7;
              sVar11 = this->field_04C5;
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 10;
              this->field_00B7 = 0;
              goto LAB_00468322;
            }
            local_c = nullptr;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar11 = this->field_049B;
                sVar16 = this->field_049F;
                sVar17 = this->field_049D;
                if (((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar16)) {
                  pSVar6 = nullptr;
                }
                else {
                  pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar11 = this->field_04A5;
                sVar16 = this->field_04A9;
                sVar17 = this->field_04A7;
                if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                   ((sVar17 < 0 ||
                    (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)
                     ))))) {
                  pSVar6 = nullptr;
                }
                else {
                  pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
              bVar3 = true;
              if (this->field_04AB == -1) goto LAB_00468493;
            }
            else {
LAB_00468493:
              bVar3 = false;
            }
            iVar5 = thunk_FUN_0048d440(this);
            if (iVar5 != 0) {
              if (iVar5 == 7) {
                if (this->field_04AB == -1) {
                  return 2;
                }
                if (!bVar3) {
                  return 2;
                }
                if (this->field_04AB == -1) {
                  return 2;
                }
                if (!bVar3) {
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
          if (iVar5 != 10) {
            if (iVar5 == 0xb) {
              if (this->field_04D9 == 0) {
                iVar7 = (ushort)(this->field_04A9 * 200) + 300;
                iVar5 = STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_04A7 + 1)) * 0xc9;
                iVar21 = STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(this->field_04A5 + 1));
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar4 = (*this->vtable->vfunc_10)
                                  (this->field_0041,this->field_0043,
                                   CONCAT22((short)((uint)(iVar21 * 0x19) >> 0x10),this->field_0045)
                                   ,(short)(iVar21 * 0xc9),(short)iVar5,iVar7);
                this->field_04CB = uVar4;
                this->field_04D9 = 1;
              }
              if (this->field_04D9 == 1) {
                uVar8 = sub_004176C0(this,this->field_04CB);
                uVar8 = sub_00417910(this,(short)uVar8);
                if (uVar8 == 0xffffffff) {
                  iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2196,0,0,
                                             "%s","STBoatC::LoadRC, LOADRC_PDEPOT"
                                            );
                  if (iVar5 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  iVar5 = 0x2197;
                  goto cf_error_exit_004660E9;
                }
                if (uVar8 == 0) {
                  this->field_04D9 = 2;
                  iVar5 = this->vfunc_D8();
                  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
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
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = nullptr;
                if (this->field_02BF != '\0') {
                  local_c = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar9 = (undefined4 *)
                             thunk_FUN_0041dc40(local_2c,(short)*local_c,*(ushort *)(local_c + 1),
                                                this->field_006C);
                    local_24 = *puVar9;
                    local_20 = *(short *)(puVar9 + 1);
                    if (DAT_0080732c == 1) {
                      bVar23 = 0;
                      sVar22 = 0;
                      uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar21 = -1;
                      this->field_001C = uVar8;
                      sVar20 = 0;
                      sVar19 = 0;
                      uVar10 = uVar8 * 0x41c64e6d + 0x3039;
                      sVar18 = 0;
                      this->field_001C = uVar10;
                      sVar17 = 0;
                      sVar16 = 0;
                      local_1c = uVar10 * 0x41c64e6d + 0x3039;
                      sVar11 = 0;
                      this->field_001C = local_1c;
                      lVar15 = Library::MSVCRT::__ftol();
                      iVar5 = (int)(short)lVar15 + (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3
                              + (int)local_20;
                      iVar7 = ((uVar10 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                      uVar8 = local_1c;
                    }
                    else {
                      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                      bVar23 = 0;
                      sVar22 = 0;
                      uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                      iVar21 = -1;
                      sVar20 = 0;
                      sVar19 = 0;
                      sVar18 = 0;
                      sVar17 = 0;
                      sVar16 = 0;
                      this->field_001C = uVar10;
                      uVar8 = uVar12 * 0x41c64e6d + 0x3039;
                      sVar11 = 0;
                      this->field_001C = uVar12;
                      this->field_001C = uVar8;
                      iVar5 = (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                      STPiece<2,2>(local_24) = (short)((uint)local_24 >> 0x10);
                      iVar7 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                    }
                    TraksClassTy::TraksCreate
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar8 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_24,iVar7 + -3,iVar5,sVar11,sVar16,sVar17,sVar18,
                               sVar19,sVar20,iVar21,sVar22,bVar23);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (int *)((int)param_1 + 1);
                    local_c = (undefined4 *)((int)local_c + 6);
                  } while ((int)param_1 < (int)(uint)(byte)this->field_02BF);
                }
                if (local_10 == -1) {
                  iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x21bc,0,0,
                                             "%s",
                                             "STBoatC::LoadRC, LOADRC_PDEPOT 2");
                  if (iVar5 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  iVar5 = 0x21bd;
                  goto cf_error_exit_004660E9;
                }
                if (local_10 == 0) {
                  *(undefined4 *)&this->field_0x4d5 = 0xc;
                  this->field_04D9 = 0;
                  iVar5 = this->vfunc_D8();
                  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
                }
              }
              goto cf_common_exit_004693C9;
            }
            if (iVar5 != 0xc) {
              if (iVar5 == 0xd) {
                iVar5 = *(int *)&this->field_0x4d1 + 1;
                *(int *)&this->field_0x4d1 = iVar5;
                if (0x45 < iVar5) {
                  if (this->field_04D9 == 0) {
                    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                    iVar7 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_04C7 * 0xc9)) + 100;
                    uVar4 = (*this->vtable->vfunc_10)
                                      (this->field_0041,this->field_0043,
                                       STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_0045)),
                                       this->field_04C5 * 0xc9 + 100,(short)iVar7,
                                       STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(this->field_04C9 * 200))
                                       + 100);
                    this->field_04CB = uVar4;
                    this->field_04D9 = 1;
                  }
                  if (this->field_04D9 == 1) {
                    uVar8 = sub_004176C0(this,this->field_04CB);
                    uVar8 = sub_00417910(this,(short)uVar8);
                    if (uVar8 == 0xffffffff) {
                      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x223c,0,0,
                                                 "%s",
                                                 "STBoatC::LoadRC, LOADRC_ODEPOT");
                      if (iVar5 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                      iVar5 = 0x223d;
                      goto cf_error_exit_004660E9;
                    }
                    if (uVar8 == 0) {
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
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = nullptr;
                    if (this->field_02BF != '\0') {
                      local_c = (undefined4 *)&this->field_0x2b3;
                      do {
                        puVar9 = (undefined4 *)
                                 thunk_FUN_0041dc40(local_2c,(short)*local_c,
                                                    *(ushort *)(local_c + 1),this->field_006C);
                        local_24 = *puVar9;
                        local_20 = *(short *)(puVar9 + 1);
                        if (DAT_0080732c == 1) {
                          bVar23 = 0;
                          sVar22 = 0;
                          iVar21 = -1;
                          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar20 = 0;
                          this->field_001C = uVar8;
                          sVar19 = 0;
                          sVar18 = 0;
                          uVar10 = uVar8 * 0x41c64e6d + 0x3039;
                          sVar17 = 0;
                          this->field_001C = uVar10;
                          local_1c = uVar10 * 0x41c64e6d + 0x3039;
                          sVar16 = 0;
                          this->field_001C = local_1c;
                          sVar11 = 0;
                          lVar15 = Library::MSVCRT::__ftol();
                          iVar5 = (int)(short)lVar15 + (uVar8 >> 0x10) % 7 + (int)this->field_0045 +
                                  -3 + (int)local_20;
                          iVar7 = ((uVar10 >> 0x10) % 7 + (int)this->field_0043) -
                                  (int)STPiece<2,2>(local_24);
                          uVar8 = local_1c;
                        }
                        else {
                          bVar23 = 0;
                          uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar22 = 0;
                          iVar21 = -1;
                          uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                          sVar20 = 0;
                          sVar19 = 0;
                          sVar18 = 0;
                          sVar17 = 0;
                          sVar16 = 0;
                          this->field_001C = uVar10;
                          uVar8 = uVar12 * 0x41c64e6d + 0x3039;
                          sVar11 = 0;
                          this->field_001C = uVar12;
                          this->field_001C = uVar8;
                          iVar5 = (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                          STPiece<2,2>(local_24) = (short)((uint)local_24 >> 0x10);
                          iVar7 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) -
                                  (int)STPiece<2,2>(local_24);
                        }
                        TraksClassTy::TraksCreate
                                  (g_traksClass_00802A7C,1,2,7,
                                   (uVar8 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                                   (int)(short)local_24,iVar7 + -3,iVar5,sVar11,sVar16,sVar17,sVar18
                                   ,sVar19,sVar20,iVar21,sVar22,bVar23);
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (int *)((int)param_1 + 1);
                        local_c = (undefined4 *)((int)local_c + 6);
                      } while ((int)param_1 < (int)(uint)(byte)this->field_02BF);
                    }
                    if (local_10 == -1) {
                      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2262,0,0,
                                                 "%s",
                                                 "STBoatC::LoadRC, LOADRC_ODEPOT 2");
                      if (iVar5 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                      iVar5 = 0x2263;
                      goto cf_error_exit_004660E9;
                    }
                    if (local_10 == 0) {
                      *(undefined4 *)&this->field_0x4cd = 0;
                      *(undefined4 *)&this->field_0x4d1 = 0;
                      this->field_00B7 = 3;
                      iVar5 = thunk_FUN_0048d440(this);
                      if (iVar5 == 0) {
                        sub_004602B0(this);
                        *(undefined4 *)&this->field_0x4d5 = 0;
                        this->field_00B7 = 0;
                        iVar5 = Defence(this,0);
                        return (-(uint)(iVar5 != -1) & 3) - 1;
                      }
                      if (iVar5 == 1) {
                        sVar11 = this->field_049F;
                        sVar16 = this->field_049D;
                        sVar17 = this->field_049B;
                        *(undefined4 *)&this->field_0x4d5 = 0xe;
                      }
                      else {
                        sVar11 = this->field_04A9;
                        sVar16 = this->field_04A7;
                        sVar17 = this->field_04A5;
                        *(undefined4 *)&this->field_0x4d5 = 7;
                      }
                      sub_00481520(this,(int)sVar17,(int)sVar16,sVar11 + 1);
                      sub_00460260(this,0);
                    }
                  }
                  goto cf_common_exit_004693C9;
                }
                goto cf_common_exit_004699E9;
              }
              if (iVar5 != 0xe) {
                iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x22ad,0,0,
                                           "%s","STBoatC::LoadRC - incorrect entry"
                                          );
                if (iVar5 == 0) {
                  return -1;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar5 = sub_00460260(this,2);
              switch(iVar5) {
              case 1:
                sub_004602B0(this);
              case 0:
                *(undefined4 *)&this->field_0x4cd = 0;
                *(undefined4 *)&this->field_0x4d5 = 1;
                this->field_00B7 = 3;
              case 3:
                iVar5 = (int)this->field_049D;
                iVar7 = (int)this->field_049B;
                iVar21 = this->field_049F + 1;
                break;
              default:
                goto cf_common_exit_004699E9;
              case -1:
                iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x228f,0,0,
                                           "%s","STBoatC::LoadRC, LOADRC_MOVEWAITUNLOAD error"
                                          );
                if (iVar5 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar5 = 0x228f;
                goto cf_error_exit_004660E9;
              }
              goto cf_common_exit_004699DA;
            }
            iVar5 = *(int *)&this->field_0x4cd + 1;
            *(int *)&this->field_0x4cd = iVar5;
            if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
              local_c = nullptr;
              if (this->field_04BD == 1) {
                this->field_04BD = 0;
                if (this->field_04A1 != -1) {
                  sVar11 = this->field_049B;
                  sVar16 = this->field_049F;
                  sVar17 = this->field_049D;
                  if (((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
                      ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                     (g_worldGrid.sizeZ <= sVar16)) {
                    pSVar6 = nullptr;
                  }
                  else {
                    pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                  }
                  if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
                    this->field_04A1 = 0xffffffff;
                  }
                }
              }
              if (this->field_04C1 == 1) {
                this->field_04C1 = 0;
                if (this->field_04AB != -1) {
                  sVar11 = this->field_04A5;
                  sVar16 = this->field_04A9;
                  sVar17 = this->field_04A7;
                  if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                     ((sVar17 < 0 ||
                      (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) ||
                       (g_worldGrid.sizeZ <= sVar16)))))) {
                    pSVar6 = nullptr;
                  }
                  else {
                    pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                  }
                  if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
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
                if ((this->field_04AB != -1) && (local_c == nullptr)) goto LAB_004691ae;
              }
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 0xd;
              this->field_00B7 = 3;
cf_common_exit_004693C9:
              iVar5 = this->vfunc_D8();
              return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
            }
LAB_004691ae:
            if (iVar5 % 10 != 1) goto cf_common_exit_004699E9;
            sVar11 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if ((((((-1 < sVar11) && (sVar11 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar17 &&
                   (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0]
                           , pSVar6 != nullptr &&
                           (*(int *)&pSVar6->field_0x18 == this->field_04AB)))) &&
                (*(int *)&pSVar6[0x21].field_0x10 == 0)) && (*(int *)&pSVar6[0x10].field_0x5 != 6))
            {
              if (iVar5 % 0x78 == 1) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar5 = *(int *)((int)this->field_06CB + 0x2c);
                if (iVar5 == 8) {
                  pSVar14 = this->vtable;
                  uVar4 = 0xfb;
LAB_004692be:
                  (*pSVar14->vfunc_90)(this,3,uVar4);
                }
                else if (iVar5 == 0x14) {
                  this->vfunc_90(3,0x15f);
                }
                else if (iVar5 == 0x1a) {
                  pSVar14 = this->vtable;
                  uVar4 = 0x19e;
                  goto LAB_004692be;
                }
              }
              iVar5 = this->field_07D2;
              iVar7 = 1;
              if (iVar5 < 1) {
                iVar5 = this->field_07D6;
                if (iVar5 < 1) {
                  iVar5 = this->field_07DA;
                  if (0 < iVar5) {
                    if (iVar5 < 1) {
                      iVar7 = iVar5;
                    }
                    thunk_FUN_004e1d70(pSVar6,0xde,iVar7 * 0x14);
                    thunk_FUN_004e16d0(pSVar6,this->field_0018);
                    this->field_07DA = this->field_07DA - iVar7;
                  }
                }
                else {
                  if (iVar5 < 1) {
                    iVar7 = iVar5;
                  }
                  thunk_FUN_004e1d70(pSVar6,0xdd,iVar7 * 3);
                  thunk_FUN_004e16d0(pSVar6,this->field_0018);
                  this->field_07D6 = this->field_07D6 - iVar7;
                }
              }
              else {
                if (iVar5 < 1) {
                  iVar7 = iVar5;
                }
                thunk_FUN_004e1d70(pSVar6,0xdc,iVar7 * 5);
                thunk_FUN_004e16d0(pSVar6,this->field_0018);
                this->field_07D2 = this->field_07D2 - iVar7;
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
            iVar5 = sub_00460260(this,2);
            switch(iVar5) {
            case 0:
              if (((this->field_0047 == this->field_04C5) && (this->field_0049 == this->field_04C7))
                 && (this->field_004B == this->field_04C9)) {
                *(undefined4 *)&this->field_0x4d5 = 0xb;
                this->field_04D9 = 0;
                iVar5 = this->vfunc_D8();
                return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
              }
              sVar11 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((-1 < sVar11) && (sVar11 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar17 &&
                   (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0]
                           , pSVar6 != nullptr &&
                           (*(int *)&pSVar6->field_0x18 == this->field_04AB)))) {
                thunk_FUN_004e1690(pSVar6,this->field_0018);
              }
              return 0;
            case 1:
              goto switchD_0046878c_caseD_1;
            default:
              goto cf_common_exit_00468C50;
            case 3:
              sVar11 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((-1 < sVar11) && (sVar11 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
                 (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) &&
                  ((sVar16 < g_worldGrid.sizeZ &&
                   ((STFishC *)
                    STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0] !=
                    nullptr)))))) {
                thunk_FUN_0048d650(this,(STFishC *)
                                        STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects
                                        [0]);
              }
              sub_00481520(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
              goto cf_common_exit_00468C49;
            case -1:
              iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2126,0,0,
                                         "%s","STBoatC::LoadRC, move to depot 2 error");
              if (iVar5 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar5 = 0x2126;
              goto cf_error_exit_004660E9;
            }
          }
          iVar5 = *(int *)&this->field_0x4cd + 1;
          *(int *)&this->field_0x4cd = iVar5;
          if (iVar5 == 2) {
            iVar5 = Defence(this,0);
            if (iVar5 != -1) {
              return 2;
            }
            return -1;
          }
          iVar5 = Defence(this,2);
          if (iVar5 == -1) {
            return -1;
          }
          if (this->field_082E != 0) {
            return 2;
          }
          if (this->field_04BD == 1) {
LAB_004685d3:
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar11 = this->field_049B;
              sVar16 = this->field_049F;
              sVar17 = this->field_049D;
              if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                 ((sVar17 < 0 ||
                  (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))
                  ))) {
                pSVar6 = nullptr;
              }
              else {
                pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
              sVar11 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                 (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                  (g_worldGrid.sizeZ <= sVar16)))) {
                pSVar6 = nullptr;
              }
              else {
                pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          iVar5 = thunk_FUN_0048d440(this);
          if (iVar5 == 0) {
            sub_004602B0(this);
            *(undefined4 *)&this->field_0x4d5 = 0;
            goto cf_common_exit_00469979;
          }
          if (iVar5 == 7) {
            if (this->field_04AB == -1) {
              return 2;
            }
            goto cf_common_exit_00468742;
          }
          goto cf_common_exit_00465E40;
        }
        if (*(int *)&this->field_0x4cd < 1) {
          iVar5 = sub_00460260(this,2);
          switch(iVar5) {
          case 0:
            iVar5 = sub_00490570(this);
            if (iVar5 == 1) {
              sVar11 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((((-1 < sVar11) && (sVar11 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
                   ((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)))) &&
                  ((sVar16 < g_worldGrid.sizeZ &&
                   ((pSVar1 = (STBoatC *)
                              STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0],
                    pSVar1 != nullptr && (pSVar1->field_0018 == this->field_04AB)))))) &&
                 (iVar5 = thunk_FUN_004e1490(pSVar1), iVar5 != 1)) {
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,
                             this->field_04A5,this->field_04A7,
                             (int *)CONCAT22(extraout_var_01,this->field_04A9 + 1),1,
                             &this->field_04AF,&this->field_04B1,&this->field_04B3);
                *(undefined4 *)&this->field_0x4d5 = 8;
                this->field_00B7 = 0;
                sub_00481520(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
                break;
              }
            }
            *(undefined4 *)&this->field_0x4d5 = 9;
            goto cf_common_exit_00469979;
          case 1:
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) goto cf_common_exit_00468C50;
            local_c = nullptr;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar11 = this->field_049B;
                sVar16 = this->field_049F;
                sVar17 = this->field_049D;
                if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                   ((sVar17 < 0 ||
                    (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)
                     ))))) {
                  pSVar6 = nullptr;
                }
                else {
                  pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar11 = this->field_04A5;
                sVar16 = this->field_04A9;
                sVar17 = this->field_04A7;
                if ((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                    ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))))) ||
                   (g_worldGrid.sizeZ <= sVar16)) {
                  pSVar6 = nullptr;
                }
                else {
                  pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
              if (this->field_04AB != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            iVar5 = thunk_FUN_0048d440(this);
            if (iVar5 == 0) goto cf_common_exit_00467FE4;
            if (iVar5 == 7) {
              if ((this->field_04AB != -1) && (local_c == nullptr))
              goto cf_common_exit_00468C50;
              sub_004602B0(this);
              if (this->field_04AB == -1) {
                *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                iVar5 = this->vfunc_D8();
                return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
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
            iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1fb8,0,0,
                                       "%s","STBoatC::LoadRC, move to depot error");
            if (iVar5 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar5 = 0x1fb8;
            goto cf_error_exit_004660E9;
          }
          goto cf_common_exit_00468C49;
        }
        iVar5 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar5;
        if (iVar5 == 2) {
          iVar5 = Defence(this,0);
          if (iVar5 != -1) {
            return 2;
          }
          return -1;
        }
        iVar5 = Defence(this,2);
        if (iVar5 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_0046779f:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar11 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if ((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
               (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
              pSVar6 = nullptr;
            }
            else {
              pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
            sVar11 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar6 = nullptr;
            }
            else {
              pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        iVar5 = thunk_FUN_0048d440(this);
        if (iVar5 == 0) {
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (iVar5 != 7) {
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
      iVar5 = *(int *)&this->field_0x4d1 + 1;
      *(int *)&this->field_0x4d1 = iVar5;
      if (iVar5 < 0x47) goto cf_common_exit_004699E9;
      iVar5 = sub_00460260(this,2);
      switch(iVar5) {
      case 1:
        iVar5 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar5;
        if (iVar5 < 3) goto cf_common_exit_004699E9;
        sub_004602B0(this);
      case 0:
        *(undefined4 *)&this->field_0x4cd = 0;
        *(undefined4 *)&this->field_0x4d1 = 0;
        *(undefined4 *)&this->field_0x4d5 = 7;
        this->field_00B7 = 3;
      case 3:
        iVar5 = (int)this->field_04A7;
        iVar7 = (int)this->field_04A5;
        iVar21 = this->field_04A9 + 1;
        break;
      default:
        goto cf_common_exit_004699E9;
      case -1:
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1f53,0,0,"%s",
                                   "STBoatC::LoadRC, LOADRC_MOVEWAITLOAD error");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar5 = 0x1f53;
        goto cf_error_exit_004660E9;
      }
      goto cf_common_exit_004699DA;
    }
    iVar5 = sub_00460260(this,2);
    switch(iVar5) {
    case 0:
      iVar5 = sub_00490570(this);
      if (iVar5 != 1) {
        *(undefined4 *)&this->field_0x4d5 = 3;
        this->field_00B7 = 3;
        iVar5 = Defence(this,0);
        return (-(uint)(iVar5 != -1) & 3) - 1;
      }
      sVar11 = this->field_049B;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      piVar13 = (int *)CONCAT22(extraout_var_02,this->field_049F + 1);
LAB_00467da5:
      sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,sVar11,0,piVar13,1,
                   &this->field_04AF,&this->field_04B1,&this->field_04B3);
      sub_00481520(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
      break;
    case 1:
      if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
        local_c = nullptr;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar11 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar6 = nullptr;
            }
            else {
              pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
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
            sVar11 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
               (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar16)))) {
              pSVar6 = nullptr;
            }
            else {
              pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        iVar5 = thunk_FUN_0048d440(this);
        if (iVar5 == 0) {
cf_common_exit_00467FE4:
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (iVar5 == 1) {
          if ((this->field_04A1 != -1) && (local_c == nullptr))
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
        sVar11 = this->field_049B;
        sVar16 = this->field_049F;
        sVar17 = this->field_049D;
        if ((((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
             ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
            ((g_worldGrid.sizeZ <= sVar16 ||
             ((pSVar1 = (STBoatC *)
                        STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0],
              pSVar1 == nullptr || (pSVar1->field_0018 != this->field_04A1)))))) ||
           (iVar5 = thunk_FUN_004e1490(pSVar1), iVar5 != 1)) goto cf_common_exit_004699E9;
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
      iVar5 = sub_00490570(this);
      if (iVar5 == 1) {
        sVar11 = this->field_049B;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        piVar13 = (int *)CONCAT22((short)((uint)&this->field_04B3 >> 0x10),this->field_049F + 1);
LAB_00467e31:
        sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,sVar11,0,piVar13,1,
                     &this->field_04AF,&this->field_04B1,&this->field_04B3);
      }
LAB_00467e48:
      sub_00481520(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
      break;
    case -1:
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1d66,0,0,"%s",
                                 "STBoatC::LoadRC, correct move to mine error");
      if (iVar5 == 0) {
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
  iVar5 = this->vfunc_D8();
  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
switchD_0046878c_caseD_1:
  if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
    local_c = nullptr;
    if (this->field_04BD == 1) {
      this->field_04BD = 0;
      if (this->field_04A1 != -1) {
        sVar11 = this->field_049B;
        sVar16 = this->field_049F;
        sVar17 = this->field_049D;
        if ((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar17 < 0)) ||
           (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
          pSVar6 = nullptr;
        }
        else {
          pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
        }
        if (*(int *)&pSVar6->field_0x18 != this->field_04A1) {
          this->field_04A1 = 0xffffffff;
        }
      }
    }
    if (this->field_04C1 == 1) {
      this->field_04C1 = 0;
      if (this->field_04AB != -1) {
        sVar11 = this->field_04A5;
        sVar16 = this->field_04A9;
        sVar17 = this->field_04A7;
        if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
           ((sVar17 < 0 ||
            (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))) {
          pSVar6 = nullptr;
        }
        else {
          pSVar6 = STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0];
        }
        if (*(int *)&pSVar6->field_0x18 != this->field_04AB) {
          this->field_04AB = 0xffffffff;
        }
      }
      if (this->field_04AB != -1) {
        local_c = (undefined4 *)0x1;
      }
    }
    iVar5 = thunk_FUN_0048d440(this);
    if (iVar5 == 0) {
      sub_004602B0(this);
      *(undefined4 *)&this->field_0x4d5 = 0;
      goto cf_common_exit_00469979;
    }
    if (iVar5 != 7) {
      sub_004602B0(this);
      sVar16 = this->field_049D;
      sVar11 = this->field_049B;
      iVar5 = this->field_049F + 1;
      *(undefined4 *)&this->field_0x4cd = 0;
      this->field_00B7 = 3;
      *(undefined4 *)&this->field_0x4d5 = 1;
      goto LAB_00468c40;
    }
    if ((this->field_04AB != -1) && (local_c == nullptr)) goto cf_common_exit_00468C50;
    sub_004602B0(this);
    if (this->field_04AB == -1) {
      *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
      iVar5 = this->vfunc_D8();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    if (local_c == (undefined4 *)0x1) {
      *(undefined4 *)&this->field_0x4cd = 0;
      *(undefined4 *)&this->field_0x4d5 = 7;
      goto LAB_00468b38;
    }
  }
  sub_004602B0(this);
  sVar11 = this->field_04A5;
  sVar16 = this->field_04A9;
  sVar17 = this->field_04A7;
  if (((-1 < sVar11) && (sVar11 < g_worldGrid.sizeX)) &&
     ((-1 < sVar17 &&
      ((((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)) &&
       ((STFishC *)
        STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0] != nullptr)))))) {
    thunk_FUN_0048d650(this,(STFishC *)
                            STGridAt3D(g_worldGrid, sVar11, sVar17, sVar16).objects[0]);
  }
  sub_00481520(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
  goto cf_common_exit_00468C49;
}


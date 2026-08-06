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
  int local_EAX_56;
  STWorldObject *pSVar5;
  int local_EAX_437;
  int iVar6;
  int local_EAX_597;
  int local_EAX_626;
  int local_EAX_1004;
  int local_EAX_1088;
  int local_EAX_1132;
  int local_EAX_1865;
  int local_EAX_2009;
  int local_EAX_2055;
  int local_EAX_2195;
  int local_EAX_2651;
  int local_EAX_3064;
  int local_EAX_3722;
  int local_EAX_3904;
  int local_EAX_3933;
  int local_EAX_4314;
  int local_EAX_4384;
  int local_EAX_4428;
  int local_EAX_4894;
  int local_EAX_5538;
  int iVar7;
  int local_EAX_6580;
  int local_EAX_6675;
  int local_EAX_6719;
  int local_EAX_6880;
  int local_EAX_6909;
  int local_EAX_7290;
  int local_EAX_7374;
  int local_EAX_7418;
  int local_EAX_8163;
  int local_EAX_8376;
  int local_EAX_8422;
  int local_EAX_9083;
  int local_EAX_9412;
  int local_EAX_9594;
  int local_EAX_9852;
  int local_EAX_10296;
  int local_EAX_10516;
  int local_EAX_10545;
  int local_EAX_10926;
  int local_EAX_11037;
  int local_EAX_11081;
  int local_EAX_11852;
  uint uVar7;
  int local_EAX_12513;
  undefined4 *puVar8;
  uint uVar9;
  int local_EAX_13191;
  int local_EAX_14419;
  int local_EAX_15042;
  int local_EAX_15073;
  int local_EAX_15213;
  int local_EAX_15261;
  int local_EAX_15305;
  int local_EAX_15421;
  int iVar5;
  int local_EAX_15643;
  short sVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  uint uVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int *piVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  STBoatCVTable *pSVar13;
  int iVar14;
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
      sVar10 = this->field_049B;
    }
    else {
      sVar17 = this->field_04A9;
      sVar16 = this->field_04A7;
      sVar10 = this->field_04A5;
    }
    iVar21 = sVar17 + 1;
    iVar6 = (int)sVar16;
    iVar14 = (int)sVar10;
cf_common_exit_004699DA:
    sub_00481520(this,iVar14,iVar6,iVar21);
  }
  else {
    iVar6 = *(int *)&this->field_0x4d5;
    if (iVar6 == 0) {
      local_EAX_56 = Defence(this,2);
      if (local_EAX_56 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465cda:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar10 = this->field_049B;
          sVar16 = this->field_049F;
          sVar17 = this->field_049D;
          if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
              ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16)) {
            pSVar5 = nullptr;
          }
          else {
            pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
          sVar10 = this->field_04A5;
          sVar16 = this->field_04A9;
          sVar17 = this->field_04A7;
          if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
             ((sVar17 < 0 ||
              (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
          {
            pSVar5 = nullptr;
          }
          else {
            pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      local_EAX_437 = thunk_FUN_0048d440(this);
      if (local_EAX_437 == 0) {
        return 2;
      }
      if (local_EAX_437 == 1) {
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
      sVar10 = this->field_04A9;
      sVar16 = this->field_04A7;
      sVar17 = this->field_04A5;
LAB_00465e72:
      sub_00481520(this,(int)sVar17,(int)sVar16,sVar10 + 1);
cf_common_exit_00465E7B:
      sub_00460260(this,0);
      return 2;
    }
    if (iVar6 == 1) {
      if (*(int *)&this->field_0x4cd < 1) {
        local_EAX_1088 = sub_00460260(this,2);
        switch(local_EAX_1088) {
        case 0:
          iVar6 = sub_00490570(this);
          if (iVar6 == 1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if ((((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
                 ((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)))) &&
                ((sVar16 < g_worldGrid.sizeZ &&
                 ((pSVar1 = (STBoatC *)
                            STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
                  pSVar1 != nullptr && (pSVar1->field_0018 == this->field_04A1)))))) &&
               (iVar6 = thunk_FUN_004e1490(pSVar1), iVar6 != 1)) {
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
              sVar10 = this->field_049B;
              sVar16 = this->field_049F;
              sVar17 = this->field_049D;
              if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                 ((sVar17 < 0 ||
                  (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))
                  ))) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                  ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))))) ||
                 (g_worldGrid.sizeZ <= sVar16)) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          local_EAX_1865 = thunk_FUN_0048d440(this);
          if (local_EAX_1865 == 0) goto cf_common_exit_00467FE4;
          if (local_EAX_1865 == 1) {
            if ((this->field_04A1 != -1) && (local_c == nullptr))
            goto cf_common_exit_00468C50;
            sub_004602B0(this);
            if (this->field_04A1 == -1) {
              *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
              iVar6 = this->vfunc_D8();
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
          local_EAX_1132 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1d02,0,0,"%s",
                                  "STBoatC::LoadRC, move to mine error");
          if (local_EAX_1132 != 0) {
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
        local_EAX_597 = Defence(this,0);
        if (local_EAX_597 != -1) {
          return 2;
        }
        return -1;
      }
      local_EAX_626 = Defence(this,2);
      if (local_EAX_626 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
        return 2;
      }
      if (this->field_04BD == 1) {
LAB_00465f11:
        this->field_04BD = 0;
        if (this->field_04A1 != -1) {
          sVar10 = this->field_049B;
          sVar16 = this->field_049F;
          sVar17 = this->field_049D;
          if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
             (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
            pSVar5 = nullptr;
          }
          else {
            pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
          sVar10 = this->field_04A5;
          sVar16 = this->field_04A9;
          sVar17 = this->field_04A7;
          if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
             ((sVar17 < 0 ||
              (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
          {
            pSVar5 = nullptr;
          }
          else {
            pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          }
          if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
            this->field_04AB = 0xffffffff;
          }
        }
      }
      local_EAX_1004 = thunk_FUN_0048d440(this);
      if (local_EAX_1004 == 0) {
        sub_004602B0(this);
        *(undefined4 *)&this->field_0x4d5 = 0;
cf_common_exit_00469979:
        local_EAX_15643 = Defence(this,0);
        return (-(uint)(local_EAX_15643 != -1) & 3) - 1;
      }
      if (local_EAX_1004 != 1) goto LAB_00466087;
      if (this->field_04A1 == -1) {
        return 2;
      }
      *(undefined4 *)&this->field_0x4cd = 0;
cf_common_exit_00465E5A:
      sVar10 = this->field_049F;
      sVar16 = this->field_049D;
      sVar17 = this->field_049B;
      goto LAB_00465e72;
    }
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
        local_EAX_3064 = Defence(this,2);
        if (local_EAX_3064 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if ((this->field_04BD != 1) && (this->field_04C1 != 1)) {
          if (*(int *)&this->field_0x4cd % 0x32 != 1) {
            return 2;
          }
          sVar10 = this->field_049B;
          sVar16 = this->field_049F;
          sVar17 = this->field_049D;
          if (sVar10 < 0) {
            return 2;
          }
          if (g_worldGrid.sizeX <= sVar10) {
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
                   STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
          if (pSVar1 == nullptr) {
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
          sVar16 = this->field_049D;
          sVar10 = this->field_049B;
          iVar6 = this->field_049F + 1;
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 4;
          this->field_00B7 = 0;
LAB_00468322:
          sub_00481520(this,(int)sVar10,(int)sVar16,iVar6);
          sub_00460260(this,0);
          return 2;
        }
        local_c = nullptr;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar16)))) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        local_EAX_3722 = thunk_FUN_0048d440(this);
        if (local_EAX_3722 == 0) {
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (local_EAX_3722 == 1) {
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
      if (iVar6 == 4) {
        if (*(int *)&this->field_0x4cd < 1) {
          local_EAX_4384 = sub_00460260(this,2);
          switch(local_EAX_4384) {
          case 0:
            *(undefined4 *)&this->field_0x4d5 = 5;
            iVar6 = this->vfunc_D8();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          case 1:
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) goto cf_common_exit_00468C50;
            local_c = nullptr;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar10 = this->field_049B;
                sVar16 = this->field_049F;
                sVar17 = this->field_049D;
                if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar16)) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
                sVar10 = this->field_04A5;
                sVar16 = this->field_04A9;
                sVar17 = this->field_04A7;
                if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                   ((sVar17 < 0 ||
                    (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)
                     ))))) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
            }
            local_EAX_4894 = thunk_FUN_0048d440(this);
            if (local_EAX_4894 == 0) {
              sub_004602B0(this);
              *(undefined4 *)&this->field_0x4d5 = 0;
              goto cf_common_exit_00469979;
            }
            if (local_EAX_4894 == 1) {
              if ((this->field_04A1 != -1) && (local_c == nullptr))
              goto cf_common_exit_00468C50;
              sub_004602B0(this);
              if (this->field_04A1 == -1) {
                *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                iVar6 = this->vfunc_D8();
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
            local_EAX_4428 =
                 ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1e6e,0,0,"%s"
                                    ,"STBoatC::LoadRC, move to mine 2 error");
            if (local_EAX_4428 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar6 = 0x1e6e;
            goto cf_error_exit_004660E9;
          }
LAB_00467068:
          sVar16 = this->field_04A7;
          sVar10 = this->field_04A5;
LAB_00468c40:
          sub_00481520(this,(int)sVar10,(int)sVar16,iVar6);
          goto cf_common_exit_00468C49;
        }
        iVar6 = *(int *)&this->field_0x4cd + 1;
        *(int *)&this->field_0x4cd = iVar6;
        if (iVar6 == 2) {
          local_EAX_3904 = Defence(this,0);
          if (local_EAX_3904 != -1) {
            return 2;
          }
          return -1;
        }
        local_EAX_3933 = Defence(this,2);
        if (local_EAX_3933 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_00466bff:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))))) ||
               (g_worldGrid.sizeZ <= sVar16)) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        local_EAX_4314 = thunk_FUN_0048d440(this);
        if (local_EAX_4314 == 0) {
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (local_EAX_4314 != 1) goto cf_common_exit_00468742;
        if (this->field_04A1 == -1) {
          return 2;
        }
        goto cf_common_exit_00465E40;
      }
      if (iVar6 == 5) {
        *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
        if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
          local_c = nullptr;
          if (this->field_04BD == 1) {
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar10 = this->field_049B;
              sVar16 = this->field_049F;
              sVar17 = this->field_049D;
              if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16))
              {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                 ((sVar17 < 0 ||
                  (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))
                  ))) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          local_EAX_5538 = thunk_FUN_0048d440(this);
          if (local_EAX_5538 == 0) {
            sub_004602B0(this);
            *(undefined4 *)&this->field_0x4d5 = 0;
            goto cf_common_exit_00469979;
          }
          if (local_EAX_5538 != 1) {
            iVar6 = (int)this->field_04A9;
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
              local_EAX_6580 =
                   ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1efd,0,0,
                                      "%s","STBoatC::LoadRC, LOADRC_MINE");
              if (local_EAX_6580 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
            }
            goto cf_common_exit_004699E2;
          }
        }
        if (*(int *)&this->field_0x4cd % 10 != 1) goto cf_common_exit_00468C50;
        sVar10 = this->field_049B;
        sVar16 = this->field_049F;
        sVar17 = this->field_049D;
        if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
            ((sVar17 < 0 ||
             (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16))))))
           || ((pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
               pSVar5 == nullptr || (*(int *)&pSVar5->field_0x18 != this->field_04A1)))
           ) {
          sub_0048D930(this);
          *(undefined4 *)&this->field_0x4cd = 0;
          *(undefined4 *)&this->field_0x4d5 = 6;
LAB_00468b38:
          this->field_00B7 = 3;
          goto LAB_00468b42;
        }
        if ((*(int *)&pSVar5[0x21].field_0x10 == 0) && (*(int *)&pSVar5[0x10].field_0x5 != 6)) {
          thunk_FUN_004e1930(pSVar5,&local_8,0);
          iVar6 = thunk_FUN_00430910(local_8);
          local_18 = thunk_FUN_004e1930(pSVar5,&local_8,iVar6);
          if (local_18 == iVar6) {
            thunk_FUN_004e16d0(pSVar5,this->field_0018);
            if (*(int *)&this->field_0x4cd % 0x78 == 1) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              iVar14 = *(int *)((int)this->field_06CB + 0x2c);
              if (iVar14 == 8) {
                pSVar13 = this->vtable;
                uVar4 = 0xfc;
LAB_0046739a:
                (*pSVar13->vfunc_90)(this,3,uVar4);
              }
              else if (iVar14 == 0x14) {
                this->vfunc_90(3,0x160);
              }
              else if (iVar14 == 0x1a) {
                pSVar13 = this->vtable;
                uVar4 = 0x19f;
                goto LAB_0046739a;
              }
            }
            if (local_8 == 0xdc) {
              iVar14 = this->field_07D2 + 1;
              this->field_07D2 = iVar14;
              if (0x28 < iVar14 + this->field_07D6 + this->field_07DA) {
                this->field_07D2 = (0x28 - this->field_07D6) - this->field_07DA;
              }
            }
            else if (local_8 == 0xdd) {
              iVar14 = this->field_07D6 + 1;
              this->field_07D6 = iVar14;
              if (0x28 < iVar14 + this->field_07D2 + this->field_07DA) {
                this->field_07D6 = (0x28 - this->field_07D2) - this->field_07DA;
              }
            }
            else if (local_8 == 0xde) {
              iVar14 = this->field_07DA + 1;
              this->field_07DA = iVar14;
              if (0x28 < this->field_07D2 + this->field_07D6 + iVar14) {
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
          if (((local_18 < iVar6) ||
              (this->field_07DA + this->field_07D6 + this->field_07D2 == 0x28)) ||
             (iVar6 = (*pSVar5->vtable[2].slots_00_28[10])(&local_8), iVar6 == 0))
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
        iVar6 = (*pSVar5->vtable[2].slots_00_28[10])(&local_8);
        if (iVar6 == 0) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          STAllPlayersC::_ChangeMD
                    (g_allPlayers_007FA174,0,(int *)this->field_0024,
                     CONCAT22(extraout_var_00,*(undefined2 *)&pSVar5[1].field_0xe));
          iVar6 = this->vfunc_D8();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
cf_common_exit_00468C50:
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      if (iVar6 != 6) {
        if (iVar6 != 7) {
          if (iVar6 == 8) {
            local_EAX_8376 = sub_00460260(this,2);
            switch(local_EAX_8376) {
            case 0:
              iVar6 = sub_00490570(this);
              if (iVar6 != 1) {
                *(undefined4 *)&this->field_0x4d5 = 9;
                this->field_00B7 = 3;
                goto cf_common_exit_00469979;
              }
              sVar10 = this->field_04A5;
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              piVar12 = (int *)CONCAT22(extraout_var_03,this->field_04A9 + 1);
              break;
            case 1:
              if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
                local_c = nullptr;
                if (this->field_04BD == 1) {
                  this->field_04BD = 0;
                  if (this->field_04A1 != -1) {
                    sVar10 = this->field_049B;
                    sVar16 = this->field_049F;
                    sVar17 = this->field_049D;
                    if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                       ((sVar17 < 0 ||
                        (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) ||
                         (g_worldGrid.sizeZ <= sVar16)))))) {
                      pSVar5 = nullptr;
                    }
                    else {
                      pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                    }
                    if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
                    sVar10 = this->field_04A5;
                    sVar16 = this->field_04A9;
                    sVar17 = this->field_04A7;
                    if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                       (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                        (g_worldGrid.sizeZ <= sVar16)))) {
                      pSVar5 = nullptr;
                    }
                    else {
                      pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                    }
                    if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                      this->field_04AB = 0xffffffff;
                    }
                  }
                }
                local_EAX_9083 = thunk_FUN_0048d440(this);
                if (local_EAX_9083 == 0) goto cf_common_exit_00467FE4;
                if (local_EAX_9083 != 1) goto LAB_0046817e;
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
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (((((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar16)) ||
                  ((pSVar1 = (STBoatC *)
                             STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
                   pSVar1 == nullptr || (pSVar1->field_0018 != this->field_04AB)))) ||
                 ((iVar6 = thunk_FUN_004e1490(pSVar1), iVar6 != 1 ||
                  (local_EAX_9412 = thunk_FUN_0048d650(this,(STFishC *)pSVar1), local_EAX_9412 != 1)
                  ))) goto cf_common_exit_004699E9;
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
                sVar10 = this->field_04A5;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                piVar12 = (int *)CONCAT22((short)((uint)&this->field_04B3 >> 0x10),
                                          this->field_04A9 + 1);
                goto LAB_00467e31;
              }
              goto LAB_00467e48;
            case -1:
              local_EAX_8422 =
                   ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x201c,0,0,
                                      "%s","STBoatC::LoadRC, correct move to depot error");
              if (local_EAX_8422 != 0) {
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
            local_EAX_9594 = Defence(this,2);
            if (local_EAX_9594 == -1) {
              return -1;
            }
            if (this->field_082E != 0) {
              return 2;
            }
            if ((this->field_04BD != 1) && (this->field_04C1 != 1)) {
              if (*(int *)&this->field_0x4cd % 0x32 != 1) {
                return 2;
              }
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (sVar10 < 0) {
                return 2;
              }
              if (g_worldGrid.sizeX <= sVar10) {
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
                       STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              if (pSVar1 == nullptr) {
                return 2;
              }
              if (pSVar1->field_0018 != this->field_04AB) {
                return 2;
              }
              iVar6 = thunk_FUN_004e1490(pSVar1);
              if (iVar6 != 1) {
                return 2;
              }
              local_EAX_9852 = thunk_FUN_0048d650(this,(STFishC *)pSVar1);
              if (local_EAX_9852 != 1) {
                return 2;
              }
              thunk_FUN_004e15f0(pSVar1,this->field_0018);
              iVar6 = (int)this->field_04C9;
              sVar16 = this->field_04C7;
              sVar10 = this->field_04C5;
              *(undefined4 *)&this->field_0x4cd = 0;
              *(undefined4 *)&this->field_0x4d5 = 10;
              this->field_00B7 = 0;
              goto LAB_00468322;
            }
            local_c = nullptr;
            if (this->field_04BD == 1) {
              this->field_04BD = 0;
              if (this->field_04A1 != -1) {
                sVar10 = this->field_049B;
                sVar16 = this->field_049F;
                sVar17 = this->field_049D;
                if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                    ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                   (g_worldGrid.sizeZ <= sVar16)) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar10 = this->field_04A5;
                sVar16 = this->field_04A9;
                sVar17 = this->field_04A7;
                if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                   ((sVar17 < 0 ||
                    (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)
                     ))))) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
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
            local_EAX_10296 = thunk_FUN_0048d440(this);
            if (local_EAX_10296 != 0) {
              if (local_EAX_10296 == 7) {
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
          if (iVar6 != 10) {
            if (iVar6 == 0xb) {
              if (this->field_04D9 == 0) {
                iVar14 = (ushort)(this->field_04A9 * 200) + 300;
                iVar6 = STReplaceLowWord((uint32_t)(iVar14), (uint16_t)(this->field_04A7 + 1)) * 0xc9;
                iVar21 = STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_04A5 + 1));
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar4 = (*this->vtable->vfunc_10)
                                  (this->field_0041,this->field_0043,
                                   CONCAT22((short)((uint)(iVar21 * 0x19) >> 0x10),this->field_0045)
                                   ,(short)(iVar21 * 0xc9),(short)iVar6,iVar14);
                this->field_04CB = uVar4;
                this->field_04D9 = 1;
              }
              if (this->field_04D9 == 1) {
                uVar7 = sub_004176C0(this,this->field_04CB);
                uVar7 = sub_00417910(this,(short)uVar7);
                if (uVar7 == 0xffffffff) {
                  local_EAX_12513 =
                       ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2196,0,0,
                                          "%s","STBoatC::LoadRC, LOADRC_PDEPOT");
                  if (local_EAX_12513 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  iVar6 = 0x2197;
                  goto cf_error_exit_004660E9;
                }
                if (uVar7 == 0) {
                  this->field_04D9 = 2;
                  iVar6 = this->vfunc_D8();
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
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = nullptr;
                if (this->field_02BF != '\0') {
                  local_c = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar8 = (undefined4 *)
                             thunk_FUN_0041dc40(local_2c,(short)*local_c,*(ushort *)(local_c + 1),
                                                this->field_006C);
                    local_24 = *puVar8;
                    local_20 = *(short *)(puVar8 + 1);
                    if (DAT_0080732c == 1) {
                      bVar23 = 0;
                      sVar22 = 0;
                      uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar21 = -1;
                      this->field_001C = uVar7;
                      sVar20 = 0;
                      sVar19 = 0;
                      uVar9 = uVar7 * 0x41c64e6d + 0x3039;
                      sVar18 = 0;
                      this->field_001C = uVar9;
                      sVar17 = 0;
                      sVar16 = 0;
                      local_1c = uVar9 * 0x41c64e6d + 0x3039;
                      sVar10 = 0;
                      this->field_001C = local_1c;
                      lVar15 = Library::MSVCRT::__ftol();
                      iVar6 = (int)(short)lVar15 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 + -3
                              + (int)local_20;
                      iVar14 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                      uVar7 = local_1c;
                    }
                    else {
                      uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
                      bVar23 = 0;
                      sVar22 = 0;
                      uVar11 = uVar9 * 0x41c64e6d + 0x3039;
                      iVar21 = -1;
                      sVar20 = 0;
                      sVar19 = 0;
                      sVar18 = 0;
                      sVar17 = 0;
                      sVar16 = 0;
                      this->field_001C = uVar9;
                      uVar7 = uVar11 * 0x41c64e6d + 0x3039;
                      sVar10 = 0;
                      this->field_001C = uVar11;
                      this->field_001C = uVar7;
                      iVar6 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                      STPiece<2,2>(local_24) = (short)((uint)local_24 >> 0x10);
                      iVar14 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                    }
                    TraksClassTy::TraksCreate
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_24,iVar14 + -3,iVar6,sVar10,sVar16,sVar17,sVar18,
                               sVar19,sVar20,iVar21,sVar22,bVar23);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = (int *)((int)param_1 + 1);
                    local_c = (undefined4 *)((int)local_c + 6);
                  } while ((int)param_1 < (int)(uint)(byte)this->field_02BF);
                }
                if (local_10 == -1) {
                  local_EAX_13191 =
                       ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x21bc,0,0,
                                          "%s","STBoatC::LoadRC, LOADRC_PDEPOT 2");
                  if (local_EAX_13191 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  iVar6 = 0x21bd;
                  goto cf_error_exit_004660E9;
                }
                if (local_10 == 0) {
                  *(undefined4 *)&this->field_0x4d5 = 0xc;
                  this->field_04D9 = 0;
                  iVar6 = this->vfunc_D8();
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
                    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
                    iVar14 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_04C7 * 0xc9)) + 100;
                    uVar4 = (*this->vtable->vfunc_10)
                                      (this->field_0041,this->field_0043,
                                       STReplaceLowWord((uint32_t)(iVar14), (uint16_t)(this->field_0045)),
                                       this->field_04C5 * 0xc9 + 100,(short)iVar14,
                                       STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_04C9 * 200))
                                       + 100);
                    this->field_04CB = uVar4;
                    this->field_04D9 = 1;
                  }
                  if (this->field_04D9 == 1) {
                    uVar7 = sub_004176C0(this,this->field_04CB);
                    uVar7 = sub_00417910(this,(short)uVar7);
                    if (uVar7 == 0xffffffff) {
                      local_EAX_14419 =
                           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x223c,0,0,
                                              "%s",
                                              "STBoatC::LoadRC, LOADRC_ODEPOT");
                      if (local_EAX_14419 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                      iVar6 = 0x223d;
                      goto cf_error_exit_004660E9;
                    }
                    if (uVar7 == 0) {
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
                        puVar8 = (undefined4 *)
                                 thunk_FUN_0041dc40(local_2c,(short)*local_c,
                                                    *(ushort *)(local_c + 1),this->field_006C);
                        local_24 = *puVar8;
                        local_20 = *(short *)(puVar8 + 1);
                        if (DAT_0080732c == 1) {
                          bVar23 = 0;
                          sVar22 = 0;
                          iVar21 = -1;
                          uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar20 = 0;
                          this->field_001C = uVar7;
                          sVar19 = 0;
                          sVar18 = 0;
                          uVar9 = uVar7 * 0x41c64e6d + 0x3039;
                          sVar17 = 0;
                          this->field_001C = uVar9;
                          local_1c = uVar9 * 0x41c64e6d + 0x3039;
                          sVar16 = 0;
                          this->field_001C = local_1c;
                          sVar10 = 0;
                          lVar15 = Library::MSVCRT::__ftol();
                          iVar6 = (int)(short)lVar15 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 +
                                  -3 + (int)local_20;
                          iVar14 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) -
                                   (int)STPiece<2,2>(local_24);
                          uVar7 = local_1c;
                        }
                        else {
                          bVar23 = 0;
                          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
                          sVar22 = 0;
                          iVar21 = -1;
                          uVar11 = uVar9 * 0x41c64e6d + 0x3039;
                          sVar20 = 0;
                          sVar19 = 0;
                          sVar18 = 0;
                          sVar17 = 0;
                          sVar16 = 0;
                          this->field_001C = uVar9;
                          uVar7 = uVar11 * 0x41c64e6d + 0x3039;
                          sVar10 = 0;
                          this->field_001C = uVar11;
                          this->field_001C = uVar7;
                          iVar6 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                          STPiece<2,2>(local_24) = (short)((uint)local_24 >> 0x10);
                          iVar14 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) -
                                   (int)STPiece<2,2>(local_24);
                        }
                        TraksClassTy::TraksCreate
                                  (g_traksClass_00802A7C,1,2,7,
                                   (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                                   (int)(short)local_24,iVar14 + -3,iVar6,sVar10,sVar16,sVar17,
                                   sVar18,sVar19,sVar20,iVar21,sVar22,bVar23);
                        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                        param_1 = (int *)((int)param_1 + 1);
                        local_c = (undefined4 *)((int)local_c + 6);
                      } while ((int)param_1 < (int)(uint)(byte)this->field_02BF);
                    }
                    if (local_10 == -1) {
                      local_EAX_15213 =
                           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2262,0,0,
                                              "%s",
                                              "STBoatC::LoadRC, LOADRC_ODEPOT 2");
                      if (local_EAX_15213 != 0) {
                        STDebugBreak(); /* noreturn in standalone pseudocode */
                      }
                      iVar6 = 0x2263;
                      goto cf_error_exit_004660E9;
                    }
                    if (local_10 == 0) {
                      *(undefined4 *)&this->field_0x4cd = 0;
                      *(undefined4 *)&this->field_0x4d1 = 0;
                      this->field_00B7 = 3;
                      local_EAX_15042 = thunk_FUN_0048d440(this);
                      if (local_EAX_15042 == 0) {
                        sub_004602B0(this);
                        *(undefined4 *)&this->field_0x4d5 = 0;
                        this->field_00B7 = 0;
                        local_EAX_15073 = Defence(this,0);
                        return (-(uint)(local_EAX_15073 != -1) & 3) - 1;
                      }
                      if (local_EAX_15042 == 1) {
                        sVar10 = this->field_049F;
                        sVar16 = this->field_049D;
                        sVar17 = this->field_049B;
                        *(undefined4 *)&this->field_0x4d5 = 0xe;
                      }
                      else {
                        sVar10 = this->field_04A9;
                        sVar16 = this->field_04A7;
                        sVar17 = this->field_04A5;
                        *(undefined4 *)&this->field_0x4d5 = 7;
                      }
                      sub_00481520(this,(int)sVar17,(int)sVar16,sVar10 + 1);
                      sub_00460260(this,0);
                    }
                  }
                  goto cf_common_exit_004693C9;
                }
                goto cf_common_exit_004699E9;
              }
              if (iVar6 != 0xe) {
                local_EAX_15421 =
                     ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x22ad,0,0,
                                        "%s","STBoatC::LoadRC - incorrect entry");
                if (local_EAX_15421 == 0) {
                  return -1;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              local_EAX_15261 = sub_00460260(this,2);
              switch(local_EAX_15261) {
              case 1:
                sub_004602B0(this);
              case 0:
                *(undefined4 *)&this->field_0x4cd = 0;
                *(undefined4 *)&this->field_0x4d5 = 1;
                this->field_00B7 = 3;
              case 3:
                iVar6 = (int)this->field_049D;
                iVar14 = (int)this->field_049B;
                iVar21 = this->field_049F + 1;
                break;
              default:
                goto cf_common_exit_004699E9;
              case -1:
                local_EAX_15305 =
                     ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x228f,0,0,
                                        "%s","STBoatC::LoadRC, LOADRC_MOVEWAITUNLOAD error");
                if (local_EAX_15305 != 0) {
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
              local_c = nullptr;
              if (this->field_04BD == 1) {
                this->field_04BD = 0;
                if (this->field_04A1 != -1) {
                  sVar10 = this->field_049B;
                  sVar16 = this->field_049F;
                  sVar17 = this->field_049D;
                  if (((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
                      ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                     (g_worldGrid.sizeZ <= sVar16)) {
                    pSVar5 = nullptr;
                  }
                  else {
                    pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                  }
                  if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                    this->field_04A1 = 0xffffffff;
                  }
                }
              }
              if (this->field_04C1 == 1) {
                this->field_04C1 = 0;
                if (this->field_04AB != -1) {
                  sVar10 = this->field_04A5;
                  sVar16 = this->field_04A9;
                  sVar17 = this->field_04A7;
                  if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                     ((sVar17 < 0 ||
                      (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) ||
                       (g_worldGrid.sizeZ <= sVar16)))))) {
                    pSVar5 = nullptr;
                  }
                  else {
                    pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                  }
                  if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
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
              iVar6 = this->vfunc_D8();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
LAB_004691ae:
            if (iVar6 % 10 != 1) goto cf_common_exit_004699E9;
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if ((((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar17 &&
                   (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0]
                           , pSVar5 != nullptr &&
                           (*(int *)&pSVar5->field_0x18 == this->field_04AB)))) &&
                (*(int *)&pSVar5[0x21].field_0x10 == 0)) && (*(int *)&pSVar5[0x10].field_0x5 != 6))
            {
              if (iVar6 % 0x78 == 1) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar6 = *(int *)((int)this->field_06CB + 0x2c);
                if (iVar6 == 8) {
                  pSVar13 = this->vtable;
                  uVar4 = 0xfb;
LAB_004692be:
                  (*pSVar13->vfunc_90)(this,3,uVar4);
                }
                else if (iVar6 == 0x14) {
                  this->vfunc_90(3,0x15f);
                }
                else if (iVar6 == 0x1a) {
                  pSVar13 = this->vtable;
                  uVar4 = 0x19e;
                  goto LAB_004692be;
                }
              }
              iVar6 = this->field_07D2;
              iVar14 = 1;
              if (iVar6 < 1) {
                iVar6 = this->field_07D6;
                if (iVar6 < 1) {
                  iVar6 = this->field_07DA;
                  if (0 < iVar6) {
                    if (iVar6 < 1) {
                      iVar14 = iVar6;
                    }
                    thunk_FUN_004e1d70(pSVar5,0xde,iVar14 * 0x14);
                    thunk_FUN_004e16d0(pSVar5,this->field_0018);
                    this->field_07DA = this->field_07DA - iVar14;
                  }
                }
                else {
                  if (iVar6 < 1) {
                    iVar14 = iVar6;
                  }
                  thunk_FUN_004e1d70(pSVar5,0xdd,iVar14 * 3);
                  thunk_FUN_004e16d0(pSVar5,this->field_0018);
                  this->field_07D6 = this->field_07D6 - iVar14;
                }
              }
              else {
                if (iVar6 < 1) {
                  iVar14 = iVar6;
                }
                thunk_FUN_004e1d70(pSVar5,0xdc,iVar14 * 5);
                thunk_FUN_004e16d0(pSVar5,this->field_0018);
                this->field_07D2 = this->field_07D2 - iVar14;
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
            local_EAX_11037 = sub_00460260(this,2);
            switch(local_EAX_11037) {
            case 0:
              if (((this->field_0047 == this->field_04C5) && (this->field_0049 == this->field_04C7))
                 && (this->field_004B == this->field_04C9)) {
                *(undefined4 *)&this->field_0x4d5 = 0xb;
                this->field_04D9 = 0;
                iVar6 = this->vfunc_D8();
                return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
              }
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar17 &&
                   (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)))
                   ))) && ((pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0]
                           , pSVar5 != nullptr &&
                           (*(int *)&pSVar5->field_0x18 == this->field_04AB)))) {
                thunk_FUN_004e1690(pSVar5,this->field_0018);
              }
              return 0;
            case 1:
              goto switchD_0046878c_caseD_1;
            default:
              goto cf_common_exit_00468C50;
            case 3:
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
                 (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) &&
                  ((sVar16 < g_worldGrid.sizeZ &&
                   ((STFishC *)
                    STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0] !=
                    nullptr)))))) {
                thunk_FUN_0048d650(this,(STFishC *)
                                        STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects
                                        [0]);
              }
              sub_00481520(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
              goto cf_common_exit_00468C49;
            case -1:
              local_EAX_11081 =
                   ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2126,0,0,
                                      "%s","STBoatC::LoadRC, move to depot 2 error");
              if (local_EAX_11081 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              iVar6 = 0x2126;
              goto cf_error_exit_004660E9;
            }
          }
          iVar6 = *(int *)&this->field_0x4cd + 1;
          *(int *)&this->field_0x4cd = iVar6;
          if (iVar6 == 2) {
            local_EAX_10516 = Defence(this,0);
            if (local_EAX_10516 != -1) {
              return 2;
            }
            return -1;
          }
          local_EAX_10545 = Defence(this,2);
          if (local_EAX_10545 == -1) {
            return -1;
          }
          if (this->field_082E != 0) {
            return 2;
          }
          if (this->field_04BD == 1) {
LAB_004685d3:
            this->field_04BD = 0;
            if (this->field_04A1 != -1) {
              sVar10 = this->field_049B;
              sVar16 = this->field_049F;
              sVar17 = this->field_049D;
              if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                 ((sVar17 < 0 ||
                  (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))
                  ))) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                 (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                  (g_worldGrid.sizeZ <= sVar16)))) {
                pSVar5 = nullptr;
              }
              else {
                pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
              }
              if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                this->field_04AB = 0xffffffff;
              }
            }
          }
          local_EAX_10926 = thunk_FUN_0048d440(this);
          if (local_EAX_10926 == 0) {
            sub_004602B0(this);
            *(undefined4 *)&this->field_0x4d5 = 0;
            goto cf_common_exit_00469979;
          }
          if (local_EAX_10926 == 7) {
            if (this->field_04AB == -1) {
              return 2;
            }
            goto cf_common_exit_00468742;
          }
          goto cf_common_exit_00465E40;
        }
        if (*(int *)&this->field_0x4cd < 1) {
          local_EAX_7374 = sub_00460260(this,2);
          switch(local_EAX_7374) {
          case 0:
            iVar6 = sub_00490570(this);
            if (iVar6 == 1) {
              sVar10 = this->field_04A5;
              sVar16 = this->field_04A9;
              sVar17 = this->field_04A7;
              if ((((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) && (-1 < sVar17)) &&
                   ((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)))) &&
                  ((sVar16 < g_worldGrid.sizeZ &&
                   ((pSVar1 = (STBoatC *)
                              STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
                    pSVar1 != nullptr && (pSVar1->field_0018 == this->field_04AB)))))) &&
                 (iVar6 = thunk_FUN_004e1490(pSVar1), iVar6 != 1)) {
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
                sVar10 = this->field_049B;
                sVar16 = this->field_049F;
                sVar17 = this->field_049D;
                if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                   ((sVar17 < 0 ||
                    (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)
                     ))))) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
                  this->field_04A1 = 0xffffffff;
                }
              }
            }
            if (this->field_04C1 == 1) {
              this->field_04C1 = 0;
              if (this->field_04AB != -1) {
                sVar10 = this->field_04A5;
                sVar16 = this->field_04A9;
                sVar17 = this->field_04A7;
                if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
                    ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))))) ||
                   (g_worldGrid.sizeZ <= sVar16)) {
                  pSVar5 = nullptr;
                }
                else {
                  pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
                }
                if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
                  this->field_04AB = 0xffffffff;
                }
              }
              if (this->field_04AB != -1) {
                local_c = (undefined4 *)0x1;
              }
            }
            local_EAX_8163 = thunk_FUN_0048d440(this);
            if (local_EAX_8163 == 0) goto cf_common_exit_00467FE4;
            if (local_EAX_8163 == 7) {
              if ((this->field_04AB != -1) && (local_c == nullptr))
              goto cf_common_exit_00468C50;
              sub_004602B0(this);
              if (this->field_04AB == -1) {
                *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
                iVar6 = this->vfunc_D8();
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
            local_EAX_7418 =
                 ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1fb8,0,0,"%s"
                                    ,"STBoatC::LoadRC, move to depot error");
            if (local_EAX_7418 != 0) {
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
          local_EAX_6880 = Defence(this,0);
          if (local_EAX_6880 != -1) {
            return 2;
          }
          return -1;
        }
        local_EAX_6909 = Defence(this,2);
        if (local_EAX_6909 == -1) {
          return -1;
        }
        if (this->field_082E != 0) {
          return 2;
        }
        if (this->field_04BD == 1) {
LAB_0046779f:
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
               (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        local_EAX_7290 = thunk_FUN_0048d440(this);
        if (local_EAX_7290 == 0) {
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (local_EAX_7290 != 7) {
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
      local_EAX_6675 = sub_00460260(this,2);
      switch(local_EAX_6675) {
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
        iVar14 = (int)this->field_04A5;
        iVar21 = this->field_04A9 + 1;
        break;
      default:
        goto cf_common_exit_004699E9;
      case -1:
        local_EAX_6719 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1f53,0,0,"%s",
                                "STBoatC::LoadRC, LOADRC_MOVEWAITLOAD error");
        if (local_EAX_6719 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x1f53;
        goto cf_error_exit_004660E9;
      }
      goto cf_common_exit_004699DA;
    }
    local_EAX_2009 = sub_00460260(this,2);
    switch(local_EAX_2009) {
    case 0:
      iVar6 = sub_00490570(this);
      if (iVar6 != 1) {
        *(undefined4 *)&this->field_0x4d5 = 3;
        this->field_00B7 = 3;
        local_EAX_2195 = Defence(this,0);
        return (-(uint)(local_EAX_2195 != -1) & 3) - 1;
      }
      sVar10 = this->field_049B;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      piVar12 = (int *)CONCAT22(extraout_var_02,this->field_049F + 1);
LAB_00467da5:
      sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,sVar10,0,piVar12,1,
                   &this->field_04AF,&this->field_04B1,&this->field_04B3);
      sub_00481520(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
      break;
    case 1:
      if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
        local_c = nullptr;
        if (this->field_04BD == 1) {
          this->field_04BD = 0;
          if (this->field_04A1 != -1) {
            sVar10 = this->field_049B;
            sVar16 = this->field_049F;
            sVar17 = this->field_049D;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               ((sVar17 < 0 ||
                (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))
               ) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
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
            sVar10 = this->field_04A5;
            sVar16 = this->field_04A9;
            sVar17 = this->field_04A7;
            if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
               (((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
                (g_worldGrid.sizeZ <= sVar16)))) {
              pSVar5 = nullptr;
            }
            else {
              pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
            }
            if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
              this->field_04AB = 0xffffffff;
            }
          }
        }
        local_EAX_2651 = thunk_FUN_0048d440(this);
        if (local_EAX_2651 == 0) {
cf_common_exit_00467FE4:
          sub_004602B0(this);
          *(undefined4 *)&this->field_0x4d5 = 0;
          goto cf_common_exit_00469979;
        }
        if (local_EAX_2651 == 1) {
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
        sVar10 = this->field_049B;
        sVar16 = this->field_049F;
        sVar17 = this->field_049D;
        if ((((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
             ((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)))) ||
            ((g_worldGrid.sizeZ <= sVar16 ||
             ((pSVar1 = (STBoatC *)
                        STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0],
              pSVar1 == nullptr || (pSVar1->field_0018 != this->field_04A1)))))) ||
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
        sVar10 = this->field_049B;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        piVar12 = (int *)CONCAT22((short)((uint)&this->field_04B3 >> 0x10),this->field_049F + 1);
LAB_00467e31:
        sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,sVar10,0,piVar12,1,
                     &this->field_04AF,&this->field_04B1,&this->field_04B3);
      }
LAB_00467e48:
      sub_00481520(this,(int)this->field_04AF,(int)this->field_04B1,(int)this->field_04B3);
      break;
    case -1:
      local_EAX_2055 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1d66,0,0,"%s",
                              "STBoatC::LoadRC, correct move to mine error");
      if (local_EAX_2055 == 0) {
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
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
switchD_0046878c_caseD_1:
  if ((this->field_04BD == 1) || (this->field_04C1 == 1)) {
    local_c = nullptr;
    if (this->field_04BD == 1) {
      this->field_04BD = 0;
      if (this->field_04A1 != -1) {
        sVar10 = this->field_049B;
        sVar16 = this->field_049F;
        sVar17 = this->field_049D;
        if ((((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) || (sVar17 < 0)) ||
           (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
          pSVar5 = nullptr;
        }
        else {
          pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
        }
        if (*(int *)&pSVar5->field_0x18 != this->field_04A1) {
          this->field_04A1 = 0xffffffff;
        }
      }
    }
    if (this->field_04C1 == 1) {
      this->field_04C1 = 0;
      if (this->field_04AB != -1) {
        sVar10 = this->field_04A5;
        sVar16 = this->field_04A9;
        sVar17 = this->field_04A7;
        if (((sVar10 < 0) || (g_worldGrid.sizeX <= sVar10)) ||
           ((sVar17 < 0 ||
            (((g_worldGrid.sizeY <= sVar17 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))) {
          pSVar5 = nullptr;
        }
        else {
          pSVar5 = STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0];
        }
        if (*(int *)&pSVar5->field_0x18 != this->field_04AB) {
          this->field_04AB = 0xffffffff;
        }
      }
      if (this->field_04AB != -1) {
        local_c = (undefined4 *)0x1;
      }
    }
    local_EAX_11852 = thunk_FUN_0048d440(this);
    if (local_EAX_11852 == 0) {
      sub_004602B0(this);
      *(undefined4 *)&this->field_0x4d5 = 0;
      goto cf_common_exit_00469979;
    }
    if (local_EAX_11852 != 7) {
      sub_004602B0(this);
      sVar16 = this->field_049D;
      sVar10 = this->field_049B;
      iVar6 = this->field_049F + 1;
      *(undefined4 *)&this->field_0x4cd = 0;
      this->field_00B7 = 3;
      *(undefined4 *)&this->field_0x4d5 = 1;
      goto LAB_00468c40;
    }
    if ((this->field_04AB != -1) && (local_c == nullptr)) goto cf_common_exit_00468C50;
    sub_004602B0(this);
    if (this->field_04AB == -1) {
      *(int *)&this->field_0x4cd = *(int *)&this->field_0x4cd + 1;
      iVar6 = this->vfunc_D8();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (local_c == (undefined4 *)0x1) {
      *(undefined4 *)&this->field_0x4cd = 0;
      *(undefined4 *)&this->field_0x4d5 = 7;
      goto LAB_00468b38;
    }
  }
  sub_004602B0(this);
  sVar10 = this->field_04A5;
  sVar16 = this->field_04A9;
  sVar17 = this->field_04A7;
  if (((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) &&
     ((-1 < sVar17 &&
      ((((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)) &&
       ((STFishC *)
        STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0] != nullptr)))))) {
    thunk_FUN_0048d650(this,(STFishC *)
                            STGridAt3D(g_worldGrid, sVar10, sVar17, sVar16).objects[0]);
  }
  sub_00481520(this,(int)this->field_04C5,(int)this->field_04C7,(int)this->field_04C9);
  goto cf_common_exit_00468C49;
}


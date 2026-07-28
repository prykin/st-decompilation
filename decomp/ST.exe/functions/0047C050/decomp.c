#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Bring */

undefined4 __thiscall STBoatC::Bring(STBoatC *this,STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STBoatC_field_0687State SVar4;
  code *pcVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  dword dVar9;
  int iVar10;
  int iVar11;
  STWorldObject *this_00;
  uint local_14;
  short local_10;
  short local_e;
  short local_c;
  STBoatC *local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == (STBoatC *)0x0) || (param_1 == (STBoatC *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar7 = *(int *)((int)this->field_06CB + 0x2c);
    this->field_02C4 = 0;
    if ((((iVar7 != 7) && (iVar7 != 0x13)) && (iVar7 != 0x1b)) ||
       ((AnonShape_005EFAE0_B406B78B *)this->field_07CA == (AnonShape_005EFAE0_B406B78B *)0x0)) {
      return 0;
    }
    iVar7 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)this->field_07CA,
                       (int *)&param_1);
    if (iVar7 == -4) {
      iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3781,0,0,"%s",
                                 "STBoatC::Bring can not find object");
      if (iVar7 == 0) {
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    sVar1 = this->field_041B;
    sVar2 = this->field_041D;
    this->field_066B = param_1->field_0020;
    sVar3 = this->field_0419;
    this->field_066F = sVar3;
    this->field_0671 = sVar1;
    this->field_0673 = sVar2;
    if ((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
        ((sVar1 < 0 || ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar2)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (STBoatC *)0x0;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (STBoatC *)
                g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar1 +
                 (int)sVar3].objects[0];
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == (STBoatC *)0x0) {
      return 0;
    }
    dVar9 = param_1->slot_2C();
    this->field_0675 = dVar9;
    if ((((dVar9 != 0x52) && (dVar9 != 0x5f)) || (this->field_066B != 0x1a4)) && (dVar9 != 99)) {
      return 0;
    }
    iVar11 = this->field_0673 + 1;
    iVar7 = (int)this->field_0671;
    this->field_0679 = param_1->field_0018;
    iVar10 = (int)this->field_066F;
    this->field_0687 = CASE_0;
    this->field_00B7 = 3;
    goto cf_common_exit_0047C9FE;
  }
  SVar4 = this->field_0687;
  if (SVar4 == CASE_0) {
    iVar7 = sub_00460260(this,2);
    switch(iVar7) {
    case 0:
      goto switchD_0047c090_caseD_0;
    case 1:
      sVar1 = this->field_066F;
      sVar2 = this->field_0673;
      sVar3 = this->field_0671;
      if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
         (((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar2)))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (STBoatC *)0x0;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (STBoatC *)
                  g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                   (int)sVar1].objects[0];
      }
      if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
         (iVar7 = param_1->vfunc_F8(), iVar7 != 0)) {
        return 2;
      }
      sub_004602B0(this);
      this->field_00B7 = 0;
      return 0;
    default:
      return 2;
    case 3:
      sub_00481520(this,(int)this->field_066F,(int)this->field_0671,this->field_0673 + 1);
      sub_00460260(this,0);
      return 2;
    case -1:
      iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x379a,0,0,"%s",
                                 "STBoatC::Bring, BRING_MOVE error");
      if (iVar7 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x379a
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  if (SVar4 != CASE_1) {
    if (SVar4 == CASE_2) {
      iVar7 = sub_00460260(this,2);
      switch(iVar7) {
      case 0:
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
           ((sVar3 < 0 ||
            (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)0x0;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    g_worldGrid.cells
                    [(int)sVar2 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX
                     + (int)sVar1].objects[0];
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           ((iVar7 = param_1->vfunc_F8(), iVar7 != 0 &&
            ((param_1->field_0020 != 1000 ||
             ((*(int *)((int)&param_1->field_04B3 + 1) == 0 && (*(int *)&param_1->field_0x245 != 6))
             )))))) {
          this->field_05D6 = 0;
          this->field_0687 = CASE_3;
          return 2;
        }
        break;
      case 1:
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
           ((sVar3 < 0 ||
            (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)0x0;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    g_worldGrid.cells
                    [(int)sVar2 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX
                     + (int)sVar1].objects[0];
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           (iVar7 = param_1->vfunc_F8(), iVar7 != 0)) {
          return 2;
        }
        break;
      default:
        return 2;
      case 3:
        iVar7 = thunk_FUN_004950b0(this,&this->field_067D,&this->field_067F,&this->field_0681);
        if (iVar7 == 1) {
          iVar11 = (int)this->field_0681;
          iVar7 = (int)this->field_067F;
          iVar10 = (int)this->field_067D;
          goto cf_common_exit_0047C9FE;
        }
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
           ((sVar3 < 0 ||
            (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)0x0;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    g_worldGrid.cells
                    [(int)sVar2 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX
                     + (int)sVar1].objects[0];
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           (iVar7 = param_1->vfunc_F8(), iVar7 != 0)) {
          if (this->field_0675 == 99) {
            thunk_FUN_004b7d50(param_1,this);
          }
          goto cf_common_exit_0047C68C;
        }
        break;
      case -1:
        iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x37e9,0,0,"%s",
                                   "STBoatC::Bring, BRING_MOVEOBJ error");
        if (iVar7 == 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x37e9);
          return 0xffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto cf_common_exit_0047C74D;
    }
    if (SVar4 == CASE_3) {
      iVar7 = UnLoadObj(this,2);
      if (((this->field_07CA != 0) && (this->field_07C6 != 0)) && (iVar7 == 0)) {
        this->field_05D6 = 0;
        return 2;
      }
      if (this->field_05D6 == 1) {
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
            ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar2)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)0x0;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    g_worldGrid.cells
                    [(int)sVar2 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX
                     + (int)sVar1].objects[0];
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           (iVar7 = param_1->vfunc_F8(), iVar7 != 0)) {
          if (this->field_0675 == 99) {
            thunk_FUN_004b7d50(param_1,this);
          }
          sVar1 = this->field_0047;
          sVar2 = this->field_004B;
          sVar3 = this->field_0049;
          if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
              ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
             (g_worldGrid.sizeZ <= sVar2)) {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (STBoatC *)0x0;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (STBoatC *)
                      g_worldGrid.cells
                      [(int)sVar2 * (int)g_worldGrid.planeStride +
                       (int)sVar3 * (int)g_worldGrid.sizeX + (int)sVar1].objects[0];
          }
          if (param_1 != (STBoatC *)0x0) {
            if (this->field_066B == 0x14) {
              if (this->field_0675 == 99) {
                local_c = this->field_0673;
                local_e = this->field_0671;
                local_10 = this->field_066F;
                if (((((local_10 < 0) || (g_worldGrid.sizeX <= local_10)) || (local_e < 0)) ||
                    ((g_worldGrid.sizeY <= local_e || (local_c < 0)))) ||
                   (g_worldGrid.sizeZ <= local_c)) {
                  this_00 = (STWorldObject *)0x0;
                }
                else {
                  this_00 = g_worldGrid.cells
                            [(int)local_c * (int)g_worldGrid.planeStride +
                             (int)local_e * (int)g_worldGrid.sizeX + (int)local_10].objects[0];
                }
                local_14 = g_playSystem_00802A38->field_00E4;
                local_8 = param_1;
                CmdToObj(param_1,CASE_B,&local_14);
                thunk_FUN_004b7d00(this_00,param_1);
                return 2;
              }
            }
            else {
              *(undefined1 *)((int)&param_1->field_0314 + 3) = 1;
            }
          }
          return 2;
        }
        goto cf_common_exit_0047C74D;
      }
      if (this->field_07CA != 0) {
        return 2;
      }
      if (this->field_07C6 != 0) {
        return 2;
      }
      if (iVar7 != 0) {
        return 2;
      }
      this->field_0687 = CASE_4;
    }
    else {
      if (SVar4 != CASE_4) {
        iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3857,0,0,"%s",
                                   "STBoatC::Bring - incorrect entry");
        if (iVar7 == 0) {
          return 0xffffffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar7 = sub_00460260(this,2);
      if (iVar7 == -1) {
        return 0xffffffff;
      }
      if (iVar7 == 0) {
        return 0;
      }
      if (iVar7 != 3) {
        return 2;
      }
    }
    uVar6 = this->field_0673 + 1;
    sub_0048DFD0(this,this->field_066F,this->field_0671,uVar6,this->field_066F,this->field_0671,
                 (int *)(uint)uVar6,2,&this->field_067D,&this->field_067F,&this->field_0681);
    iVar11 = (int)this->field_0681;
    iVar7 = (int)this->field_067F;
    iVar10 = (int)this->field_067D;
    goto cf_common_exit_0047C9FE;
  }
  this->field_0683 = this->field_0683 + 1;
  iVar7 = Defence(this,2);
  if (iVar7 == -1) {
    return 0xffffffff;
  }
  if (this->field_082E != 0) {
    return 2;
  }
  if (this->field_048B != 0xffff) {
    return 2;
  }
  if (this->field_0683 % 0x32 != 0) {
    return 2;
  }
  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
     ((sVar3 < 0 || (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2))))
     )) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (STBoatC *)0x0;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (STBoatC *)
              g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
               (int)sVar1].objects[0];
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_1 == (STBoatC *)0x0) || (param_1->field_0018 != this->field_0679)) ||
     (iVar7 = param_1->vfunc_F8(), iVar7 == 0)) {
cf_common_exit_0047C74D:
    sub_004602B0(this);
    return 0;
  }
  iVar7 = thunk_FUN_004950b0(this,&this->field_067D,&this->field_067F,&this->field_0681);
  if (iVar7 != 1) {
    return 2;
  }
  if (this->field_0675 == 99) {
    iVar7 = thunk_FUN_004b7d00(param_1,this);
    if (iVar7 == 1) goto cf_common_exit_0047C43E;
    if (this->field_0675 == 99) {
      return 2;
    }
  }
  local_8 = param_1;
  iVar7 = thunk_FUN_004e1490(param_1);
  if (iVar7 == 0) {
    return 2;
  }
  if (local_8->field_0508 != CASE_0) {
    return 2;
  }
  goto cf_common_exit_0047C43E;
switchD_0047c090_caseD_0:
  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  this->field_00B7 = 0;
  if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
      ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
     (g_worldGrid.sizeZ <= sVar2)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (STBoatC *)0x0;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (STBoatC *)
              g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
               (int)sVar1].objects[0];
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_1 == (STBoatC *)0x0) || (param_1->field_0018 != this->field_0679)) ||
     (iVar7 = param_1->vfunc_F8(), iVar7 == 0)) goto cf_common_exit_0047C74D;
  iVar7 = thunk_FUN_004950b0(this,&this->field_067D,&this->field_067F,&this->field_0681);
  if (iVar7 != 1) goto cf_common_exit_0047C68C;
  if (this->field_0675 == 99) {
    iVar7 = thunk_FUN_004b7d00(param_1,this);
    if (iVar7 == 1) goto cf_common_exit_0047C43E;
    if (this->field_0675 == 99) goto cf_common_exit_0047C68C;
  }
  local_8 = param_1;
  iVar7 = thunk_FUN_004e1490(param_1);
  if ((iVar7 == 0) || (local_8->field_0508 != CASE_0)) {
cf_common_exit_0047C68C:
    this->field_0687 = CASE_1;
    this->field_0683 = 0;
    iVar7 = Defence(this,0);
    if (iVar7 != -1) {
      return 2;
    }
    return 0xffffffff;
  }
cf_common_exit_0047C43E:
  iVar11 = (int)this->field_0681;
  iVar7 = (int)this->field_067F;
  iVar10 = (int)this->field_067D;
  this->field_0687 = CASE_2;
cf_common_exit_0047C9FE:
  sub_00481520(this,iVar10,iVar7,iVar11);
  sub_00460260(this,0);
  return 2;
}


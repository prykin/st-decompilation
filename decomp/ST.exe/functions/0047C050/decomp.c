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
  STBoatC_field_06F7State SVar5;
  ushort uVar7;
  int local_EAX_49;
  int local_EAX_93;
  int local_EAX_327;
  int local_EAX_674;
  int iVar8;
  int local_EAX_920;
  int local_EAX_1049;
  int local_EAX_1093;
  int local_EAX_1395;
  int local_EAX_1620;
  int local_EAX_1820;
  int local_EAX_2517;
  int local_EAX_2567;
  undefined4 uVar9;
  int iVar7;
  dword dVar10;
  int iVar11;
  int iVar12;
  STWorldObject *this_00;
  uint local_14;
  short local_10;
  short local_e;
  short local_c;
  STBoatC *local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (STBoatC *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    SVar5 = this->field_06F7;
    this->field_02C4 = 0;
    if ((((SVar5 != CASE_7) && (SVar5 != CASE_13)) && (SVar5 != CASE_1B)) ||
       (this->field_07CA == nullptr)) {
      return 0;
    }
    iVar8 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_07CA,(int *)&param_1);
    if (iVar8 == -4) {
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
      param_1 = nullptr;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (STBoatC *)
                STGridAt3D(g_worldGrid, sVar3, sVar1, sVar2).objects[0];
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == nullptr) {
      return 0;
    }
    dVar10 = param_1->slot_2C();
    this->field_0675 = dVar10;
    if ((((dVar10 != 0x52) && (dVar10 != 0x5f)) || (this->field_066B != 0x1a4)) && (dVar10 != 99)) {
      return 0;
    }
    iVar12 = this->field_0673 + 1;
    iVar8 = (int)this->field_0671;
    this->field_0679 = param_1->field_0018;
    iVar11 = (int)this->field_066F;
    this->field_0687 = CASE_0;
    this->field_00B7 = 3;
    goto cf_common_exit_0047C9FE;
  }
  SVar4 = this->field_0687;
  if (SVar4 == CASE_0) {
    local_EAX_49 = sub_00460260(this,2);
    switch(local_EAX_49) {
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
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (STBoatC *)
                  STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      }
      if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
         (iVar8 = param_1->vfunc_F8(), iVar8 != 0)) {
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
      local_EAX_93 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x379a,0,0,
                                        "%s","STBoatC::Bring, BRING_MOVE error");
      if (local_EAX_93 == 0) {
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
      local_EAX_1049 = sub_00460260(this,2);
      switch(local_EAX_1049) {
      case 0:
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
           ((sVar3 < 0 ||
            (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
        }
        if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
           ((iVar8 = param_1->vfunc_F8(), iVar8 != 0 &&
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
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
        }
        if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = param_1->vfunc_F8(), iVar8 != 0)) {
          return 2;
        }
        break;
      default:
        return 2;
      case 3:
        local_EAX_1395 =
             thunk_FUN_004950b0(this,&this->field_067D,&this->field_067F,&this->field_0681);
        if (local_EAX_1395 == 1) {
          iVar12 = (int)this->field_0681;
          iVar8 = (int)this->field_067F;
          iVar11 = (int)this->field_067D;
          goto cf_common_exit_0047C9FE;
        }
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
           ((sVar3 < 0 ||
            (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
        }
        if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = param_1->vfunc_F8(), iVar8 != 0)) {
          if (this->field_0675 == 99) {
            thunk_FUN_004b7d50(param_1,this);
          }
          goto cf_common_exit_0047C68C;
        }
        break;
      case -1:
        local_EAX_1093 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x37e9,0,0,"%s",
                                "STBoatC::Bring, BRING_MOVEOBJ error");
        if (local_EAX_1093 == 0) {
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
      local_EAX_1820 = UnLoadObj(this,2);
      if (((this->field_07CA != nullptr) && (this->field_07C6 != 0)) &&
         (local_EAX_1820 == 0)) {
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
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (STBoatC *)
                    STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
        }
        if (((param_1 != nullptr) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = param_1->vfunc_F8(), iVar8 != 0)) {
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
            param_1 = nullptr;
          }
          else {
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (STBoatC *)
                      STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
          }
          if (param_1 != nullptr) {
            if (this->field_066B == 0x14) {
              if (this->field_0675 == 99) {
                local_c = this->field_0673;
                local_e = this->field_0671;
                local_10 = this->field_066F;
                if (((((local_10 < 0) || (g_worldGrid.sizeX <= local_10)) || (local_e < 0)) ||
                    ((g_worldGrid.sizeY <= local_e || (local_c < 0)))) ||
                   (g_worldGrid.sizeZ <= local_c)) {
                  this_00 = nullptr;
                }
                else {
                  this_00 = STGridAt3D(g_worldGrid, local_10, local_e, local_c).objects[0];
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
      if (this->field_07CA != nullptr) {
        return 2;
      }
      if (this->field_07C6 != 0) {
        return 2;
      }
      if (local_EAX_1820 != 0) {
        return 2;
      }
      this->field_0687 = CASE_4;
    }
    else {
      if (SVar4 != CASE_4) {
        local_EAX_2567 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3857,0,0,"%s",
                                "STBoatC::Bring - incorrect entry");
        if (local_EAX_2567 == 0) {
          return 0xffffffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      local_EAX_2517 = sub_00460260(this,2);
      if (local_EAX_2517 == -1) {
        return 0xffffffff;
      }
      if (local_EAX_2517 == 0) {
        return 0;
      }
      if (local_EAX_2517 != 3) {
        return 2;
      }
    }
    uVar7 = this->field_0673 + 1;
    sub_0048DFD0(this,this->field_066F,this->field_0671,uVar7,this->field_066F,this->field_0671,
                 (int *)(uint)uVar7,2,&this->field_067D,&this->field_067F,&this->field_0681);
    iVar12 = (int)this->field_0681;
    iVar8 = (int)this->field_067F;
    iVar11 = (int)this->field_067D;
    goto cf_common_exit_0047C9FE;
  }
  this->field_0683 = this->field_0683 + 1;
  local_EAX_674 = Defence(this,2);
  if (local_EAX_674 == -1) {
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
    param_1 = nullptr;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (STBoatC *)
              STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_1 == nullptr) || (param_1->field_0018 != this->field_0679)) ||
     (iVar8 = param_1->vfunc_F8(), iVar8 == 0)) {
cf_common_exit_0047C74D:
    sub_004602B0(this);
    return 0;
  }
  local_EAX_920 = thunk_FUN_004950b0(this,&this->field_067D,&this->field_067F,&this->field_0681);
  if (local_EAX_920 != 1) {
    return 2;
  }
  if (this->field_0675 == 99) {
    iVar8 = thunk_FUN_004b7d00(param_1,this);
    if (iVar8 == 1) goto cf_common_exit_0047C43E;
    if (this->field_0675 == 99) {
      return 2;
    }
  }
  local_8 = param_1;
  iVar8 = thunk_FUN_004e1490(param_1);
  if (iVar8 == 0) {
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
    param_1 = nullptr;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (STBoatC *)
              STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((param_1 == nullptr) || (param_1->field_0018 != this->field_0679)) ||
     (iVar8 = param_1->vfunc_F8(), iVar8 == 0)) goto cf_common_exit_0047C74D;
  local_EAX_327 = thunk_FUN_004950b0(this,&this->field_067D,&this->field_067F,&this->field_0681);
  if (local_EAX_327 != 1) goto cf_common_exit_0047C68C;
  if (this->field_0675 == 99) {
    iVar8 = thunk_FUN_004b7d00(param_1,this);
    if (iVar8 == 1) goto cf_common_exit_0047C43E;
    if (this->field_0675 == 99) goto cf_common_exit_0047C68C;
  }
  local_8 = param_1;
  iVar8 = thunk_FUN_004e1490(param_1);
  if ((iVar8 == 0) || (local_8->field_0508 != CASE_0)) {
cf_common_exit_0047C68C:
    this->field_0687 = CASE_1;
    this->field_0683 = 0;
    local_EAX_1620 = Defence(this,0);
    if (local_EAX_1620 != -1) {
      return 2;
    }
    return 0xffffffff;
  }
cf_common_exit_0047C43E:
  iVar12 = (int)this->field_0681;
  iVar8 = (int)this->field_067F;
  iVar11 = (int)this->field_067D;
  this->field_0687 = CASE_2;
cf_common_exit_0047C9FE:
  sub_00481520(this,iVar11,iVar8,iVar12);
  sub_00460260(this,0);
  return 2;
}


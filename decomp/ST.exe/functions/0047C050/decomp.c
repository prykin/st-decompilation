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
  code *pcVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  dword dVar10;
  int iVar11;
  int iVar12;
  STWorldObject *this_00;
  undefined4 *puVar13;
  undefined4 local_14;
  short local_10;
  short local_e;
  short local_c;
  STBoatC *local_8;

  if ((param_1 == (STBoatC *)0x0) || (param_1 == (STBoatC *)0x1)) {
    puVar13 = &this->field_02CC;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    SVar5 = this->field_06F7;
    this->field_02C4 = 0;
    if ((((SVar5 != CASE_7) && (SVar5 != CASE_13)) && (SVar5 != CASE_1B)) || (this->field_07CA == 0)
       ) {
      return 0;
    }
    iVar8 = FUN_006e62d0(PTR_00802a38,this->field_07CA,(int *)&param_1);
    if (iVar8 == -4) {
      iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3781,0,0,"%s",
                                 "STBoatC::Bring can not find object");
      if (iVar8 == 0) {
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
      param_1 = (STBoatC *)0x0;
    }
    else {
      param_1 = (STBoatC *)
                g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar1 +
                 (int)sVar3].objects[0];
    }
    if (param_1 == (STBoatC *)0x0) {
      return 0;
    }
    dVar10 = (*param_1->vtable->slot_2C)(param_1);
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
    iVar8 = sub_00460260(this,2);
    switch(iVar8) {
    case 0:
      goto switchD_0047c090_caseD_0;
    case 1:
      sVar1 = this->field_066F;
      sVar2 = this->field_0673;
      sVar3 = this->field_0671;
      if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
         (((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar2)))) {
        param_1 = (STBoatC *)0x0;
      }
      else {
        param_1 = (STBoatC *)
                  g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                   (int)sVar1].objects[0];
      }
      if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
         (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0)) {
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
      iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x379a,0,0,"%s",
                                 "STBoatC::Bring, BRING_MOVE error");
      if (iVar8 == 0) {
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
      iVar8 = sub_00460260(this,2);
      switch(iVar8) {
      case 0:
        sVar1 = this->field_066F;
        sVar2 = this->field_0673;
        sVar3 = this->field_0671;
        if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
           ((sVar3 < 0 ||
            (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
          param_1 = (STBoatC *)0x0;
        }
        else {
          param_1 = (STBoatC *)
                    g_worldGrid.cells
                    [(int)sVar2 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX
                     + (int)sVar1].objects[0];
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           ((iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0 &&
            ((param_1->field_0020 != 1000 ||
             ((*(int *)((int)&param_1->field_04B3 + 1) == 0 &&
              (*(int *)((int)&param_1->field_0244 + 1) != 6)))))))) {
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
          param_1 = (STBoatC *)0x0;
        }
        else {
          param_1 = (STBoatC *)
                    g_worldGrid.cells
                    [(int)sVar2 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX
                     + (int)sVar1].objects[0];
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0)) {
          return 2;
        }
        break;
      default:
        return 2;
      case 3:
        iVar8 = thunk_FUN_004950b0(this,&this->field_067D,&this->field_067F,&this->field_0681);
        if (iVar8 == 1) {
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
          param_1 = (STBoatC *)0x0;
        }
        else {
          param_1 = (STBoatC *)
                    g_worldGrid.cells
                    [(int)sVar2 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX
                     + (int)sVar1].objects[0];
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0)) {
          if (this->field_0675 == 99) {
            thunk_FUN_004b7d50(param_1,this);
          }
          goto cf_common_exit_0047C68C;
        }
        break;
      case -1:
        iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x37e9,0,0,"%s",
                                   "STBoatC::Bring, BRING_MOVEOBJ error");
        if (iVar8 == 0) {
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
      iVar8 = UnLoadObj(this,2);
      if (((this->field_07CA != 0) && (this->field_07C6 != 0)) && (iVar8 == 0)) {
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
          param_1 = (STBoatC *)0x0;
        }
        else {
          param_1 = (STBoatC *)
                    g_worldGrid.cells
                    [(int)sVar2 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX
                     + (int)sVar1].objects[0];
        }
        if (((param_1 != (STBoatC *)0x0) && (param_1->field_0018 == this->field_0679)) &&
           (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 != 0)) {
          if (this->field_0675 == 99) {
            thunk_FUN_004b7d50(param_1,this);
          }
          sVar1 = this->field_0047;
          sVar2 = this->field_004B;
          sVar3 = this->field_0049;
          if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
              ((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))))) ||
             (g_worldGrid.sizeZ <= sVar2)) {
            param_1 = (STBoatC *)0x0;
          }
          else {
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
                local_14 = PTR_00802a38->field_00E4;
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
      if (iVar8 != 0) {
        return 2;
      }
      this->field_0687 = CASE_4;
    }
    else {
      if (SVar4 != CASE_4) {
        iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3857,0,0,"%s",
                                   "STBoatC::Bring - incorrect entry");
        if (iVar8 == 0) {
          return 0xffffffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar8 = sub_00460260(this,2);
      if (iVar8 == -1) {
        return 0xffffffff;
      }
      if (iVar8 == 0) {
        return 0;
      }
      if (iVar8 != 3) {
        return 2;
      }
    }
    uVar7 = this->field_0673 + 1;
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
              ((AnonReceiver_0048DFD0 *)this,this->field_066F,this->field_0671,uVar7,
               this->field_066F,this->field_0671,(int *)(uint)uVar7,2,&this->field_067D,
               &this->field_067F,&this->field_0681);
    iVar12 = (int)this->field_0681;
    iVar8 = (int)this->field_067F;
    iVar11 = (int)this->field_067D;
    goto cf_common_exit_0047C9FE;
  }
  this->field_0683 = this->field_0683 + 1;
  iVar8 = Defence(this,2);
  if (iVar8 == -1) {
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
    param_1 = (STBoatC *)0x0;
  }
  else {
    param_1 = (STBoatC *)
              g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
               (int)sVar1].objects[0];
  }
  if (((param_1 == (STBoatC *)0x0) || (param_1->field_0018 != this->field_0679)) ||
     (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 == 0)) {
cf_common_exit_0047C74D:
    sub_004602B0(this);
    return 0;
  }
  iVar8 = thunk_FUN_004950b0(this,&this->field_067D,&this->field_067F,&this->field_0681);
  if (iVar8 != 1) {
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
  iVar8 = thunk_FUN_004e1490((int)param_1);
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
    param_1 = (STBoatC *)0x0;
  }
  else {
    param_1 = (STBoatC *)
              g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
               (int)sVar1].objects[0];
  }
  if (((param_1 == (STBoatC *)0x0) || (param_1->field_0018 != this->field_0679)) ||
     (iVar8 = (*param_1->vtable->vfunc_F8)(), iVar8 == 0)) goto cf_common_exit_0047C74D;
  iVar8 = thunk_FUN_004950b0(this,&this->field_067D,&this->field_067F,&this->field_0681);
  if (iVar8 != 1) goto cf_common_exit_0047C68C;
  if (this->field_0675 == 99) {
    iVar8 = thunk_FUN_004b7d00(param_1,this);
    if (iVar8 == 1) goto cf_common_exit_0047C43E;
    if (this->field_0675 == 99) goto cf_common_exit_0047C68C;
  }
  local_8 = param_1;
  iVar8 = thunk_FUN_004e1490((int)param_1);
  if ((iVar8 == 0) || (local_8->field_0508 != CASE_0)) {
cf_common_exit_0047C68C:
    this->field_0687 = CASE_1;
    this->field_0683 = 0;
    iVar8 = Defence(this,0);
    if (iVar8 != -1) {
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


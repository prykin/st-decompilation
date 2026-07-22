#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SetMine */

int __thiscall STBoatC::SetMine(STBoatC *this,int *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STBoatC_field_06F7State SVar4;
  code *pcVar5;
  int iVar6;
  STBoatCVTable *pSVar7;
  undefined4 uVar9;

  if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    iVar6 = 0;
    this->field_02C4 = 0;
    if (this->field_07BE < 1) {
      return 0;
    }
    sVar1 = this->field_03D8;
    sVar2 = this->field_03DA;
    sVar3 = this->field_03DC;
    *(short *)&this->field_0x5e2 = sVar1;
    *(short *)&this->field_0x5dc = sVar1;
    *(short *)&this->field_0x5e4 = sVar2;
    *(short *)&this->field_0x5de = sVar2;
    *(short *)&this->field_0x5e6 = sVar3;
    *(short *)&this->field_0x5e0 = sVar3;
    if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
         (((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar3 ||
           (g_pathingGrid.cells
            [(int)g_pathingGrid.sizeX * (int)sVar2 + (int)g_pathingGrid.planeStride * (int)sVar3 +
             (int)sVar1] != 0)))))) ||
        (((-1 < sVar1 && (sVar1 < g_worldGrid.sizeX)) &&
         ((-1 < sVar2 &&
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          (((((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeZ)) &&
            (g_worldGrid.cells
             [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2 +
              (int)sVar1].objects[1] != (STWorldObject *)0x0)) &&
           ((iVar6 = g_worldGrid.cells
                     [(int)g_worldGrid.planeStride * (int)sVar3 +
                      (int)g_worldGrid.sizeX * (int)sVar2 + (int)sVar1].objects[1]->value_20,
            iVar6 == 0x5a || (iVar6 == 0x1ae)))))))))) &&
       (iVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                          ((AnonReceiver_0048DFD0 *)this,sVar1,sVar2,sVar3,this->field_0047,
                           this->field_0049,
                           (int *)CONCAT22((short)((uint)&this->field_0x5e2 >> 0x10),
                                           this->field_004B),1,(short *)&this->field_0x5e2,
                           (short *)&this->field_0x5e4,(short *)&this->field_0x5e6), iVar6 == 0)) {
      return 0;
    }
    this->field_05E8 = 0;
    sub_00481520(this,(int)*(short *)&this->field_0x5e2,(int)*(short *)&this->field_0x5e4,
                 (int)*(short *)&this->field_0x5e6);
    iVar6 = sub_00460260(this,0);
    return (-(uint)(iVar6 != -1) & 3) - 1;
  }
  if (this->field_05E8 == 0) {
    iVar6 = sub_00460260(this,2);
    switch(iVar6) {
    case 0:
      this->field_05E8 = 1;
      return 2;
    case 1:
      sVar1 = *(short *)&this->field_0x5e2;
      sVar2 = *(short *)&this->field_0x5e4;
      sVar3 = *(short *)&this->field_0x5e6;
      *(short *)&this->field_0x5dc = sVar1;
      *(short *)&this->field_0x5de = sVar2;
      *(short *)&this->field_0x5e0 = sVar3;
      if ((((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
             ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) || (g_worldGrid.sizeZ <= sVar3)) ||
           (g_pathingGrid.cells
            [(int)g_pathingGrid.sizeX * (int)sVar2 + (int)g_pathingGrid.planeStride * (int)sVar3 +
             (int)sVar1] != 0)) ||
          ((((-1 < sVar1 && (sVar1 < g_worldGrid.sizeX)) &&
            ((-1 < sVar2 &&
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeZ)))))) &&
           ((g_worldGrid.cells
             [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2 +
              (int)sVar1].objects[1] != (STWorldObject *)0x0 &&
            ((iVar6 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar3 +
                       (int)g_worldGrid.sizeX * (int)sVar2 + (int)sVar1].objects[1]->value_20,
             iVar6 == 0x5a || (iVar6 == 0x1ae)))))))) &&
         (iVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                            ((AnonReceiver_0048DFD0 *)this,sVar1,sVar2,sVar3,this->field_0047,
                             this->field_0049,
                             (int *)CONCAT22((short)((uint)&this->field_0x5e2 >> 0x10),
                                             this->field_004B),1,(short *)&this->field_0x5e2,
                             (short *)&this->field_0x5e4,(short *)&this->field_0x5e6), iVar6 == 0))
      {
        return 0;
      }
      sub_004602B0(this);
      break;
    default:
      goto switchD_004761eb_caseD_3;
    case 3:
      sVar1 = *(short *)&this->field_0x5e2;
      sVar2 = *(short *)&this->field_0x5e4;
      sVar3 = *(short *)&this->field_0x5e6;
      *(short *)&this->field_0x5dc = sVar1;
      *(short *)&this->field_0x5de = sVar2;
      *(short *)&this->field_0x5e0 = sVar3;
      if (((((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
             ((-1 < sVar2 &&
              (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeZ)))))) &&
            (g_worldGrid.cells
             [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2 +
              (int)sVar1].objects[0] != (STWorldObject *)0x0)) ||
           ((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)))) ||
          ((((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) ||
            ((g_worldGrid.sizeZ <= sVar3 ||
             (g_pathingGrid.cells
              [(int)g_pathingGrid.sizeX * (int)sVar2 + (int)g_pathingGrid.planeStride * (int)sVar3 +
               (int)sVar1] != 0)))) ||
           (((((-1 < sVar1 && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
             (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) &&
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              ((sVar3 < g_worldGrid.sizeZ &&
               (g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2 +
                 (int)sVar1].objects[1] != (STWorldObject *)0x0)))))) &&
            ((iVar6 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar3 +
                       (int)g_worldGrid.sizeX * (int)sVar2 + (int)sVar1].objects[1]->value_20,
             iVar6 == 0x5a || (iVar6 == 0x1ae)))))))) &&
         (iVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                            ((AnonReceiver_0048DFD0 *)this,sVar1,sVar2,sVar3,this->field_0047,
                             this->field_0049,
                             (int *)CONCAT22((short)((uint)&this->field_0x5e2 >> 0x10),
                                             this->field_004B),1,(short *)&this->field_0x5e2,
                             (short *)&this->field_0x5e4,(short *)&this->field_0x5e6), iVar6 == 0))
      {
        return 0;
      }
      break;
    case -1:
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x311d,0,0,"%s",
                                 "STBoatC::SetMine, SETMINE_MOVE error");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return 0xffff;
    }
    sub_00481520(this,(int)*(short *)&this->field_0x5e2,(int)*(short *)&this->field_0x5e4,
                 (int)*(short *)&this->field_0x5e6);
    sub_00460260(this,0);
switchD_004761eb_caseD_3:
    return 2;
  }
  if (this->field_05E8 != 1) goto LAB_00476633;
  SVar4 = this->field_06F7;
  if (SVar4 == CASE_5) {
    pSVar7 = this->vtable;
    uVar9 = 0xe6;
LAB_004765df:
    (*pSVar7->vfunc_90)(3,uVar9);
  }
  else if (SVar4 == CASE_11) {
    (*this->vtable->vfunc_90)(3,0x14a);
  }
  else if (SVar4 == CASE_21) {
    pSVar7 = this->vtable;
    uVar9 = 0x1cb;
    goto LAB_004765df;
  }
  thunk_FUN_00627850(this->field_07B6,this->field_0024,this->field_0018,
                     (uint)(ushort)this->field_0032,(int)this->field_0041,(int)this->field_0043,
                     this->field_0045 + -10,this->field_06F3,(char *)0x0,0xffffffff);
  this->field_07BE = this->field_07BE + -1;
LAB_00476633:
  iVar6 = (*this->vtable->vfunc_D8)();
  return -(uint)(iVar6 != 0);
}


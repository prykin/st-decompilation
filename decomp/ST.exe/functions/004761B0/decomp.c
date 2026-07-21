#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SetMine */

int __thiscall STBoatC::SetMine(STBoatC *this,int *param_1,undefined4 param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  STBoatC_field_06F7State SVar5;
  code *pcVar6;
  int iVar7;
  STBoatCVTable *pSVar8;
  undefined4 *puVar9;
  undefined4 uVar10;

  if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
    puVar9 = &this->field_02CC;
    for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    this->field_02C4 = 0;
    if (*(int *)&this->field_0x7be < 1) {
      return 0;
    }
    sVar2 = *(short *)&this->field_0x3d8;
    sVar3 = *(short *)&this->field_0x3da;
    sVar4 = *(short *)&this->field_0x3dc;
    *(short *)((int)&this->field_05E0 + 2) = sVar2;
    *(short *)&this->field_05DC = sVar2;
    *(short *)&this->field_05E4 = sVar3;
    *(short *)((int)&this->field_05DC + 2) = sVar3;
    *(short *)((int)&this->field_05E4 + 2) = sVar4;
    *(short *)&this->field_05E0 = sVar4;
    if ((((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar3 < 0)) ||
         (((g_worldGrid.sizeY <= sVar3 || (sVar4 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar4 ||
           (g_pathingGrid.cells
            [(int)g_pathingGrid.sizeX * (int)sVar3 + (int)g_pathingGrid.planeStride * (int)sVar4 +
             (int)sVar2] != 0)))))) ||
        (((-1 < sVar2 && (sVar2 < g_worldGrid.sizeX)) &&
         ((-1 < sVar3 &&
          (((((sVar3 < g_worldGrid.sizeY && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeZ)) &&
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            (g_worldGrid.cells
             [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar3 +
              (int)sVar2].objects[1] != (STWorldObject *)0x0)) &&
           ((iVar7 = g_worldGrid.cells
                     [(int)g_worldGrid.planeStride * (int)sVar4 +
                      (int)g_worldGrid.sizeX * (int)sVar3 + (int)sVar2].objects[1]->value_20,
            iVar7 == 0x5a || (iVar7 == 0x1ae)))))))))) &&
       (psVar1 = (short *)((int)&this->field_05E0 + 2),
       iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                         ((AnonReceiver_0048DFD0 *)this,sVar2,sVar3,sVar4,this->field_0047,
                          this->field_0049,
                          (int *)CONCAT22((short)((uint)psVar1 >> 0x10),this->field_004B),1,psVar1,
                          (short *)&this->field_05E4,(short *)((int)&this->field_05E4 + 2)),
       iVar7 == 0)) {
      return 0;
    }
    sVar2 = *(short *)((int)&this->field_05E4 + 2);
    sVar3 = *(short *)((int)&this->field_05E0 + 2);
    this->field_05E8 = 0;
    sub_00481520(this,(int)sVar3,(int)*(short *)&this->field_05E4,(int)sVar2);
    iVar7 = sub_00460260(this,0);
    return (-(uint)(iVar7 != -1) & 3) - 1;
  }
  if (this->field_05E8 == 0) {
    iVar7 = sub_00460260(this,2);
    switch(iVar7) {
    case 0:
      this->field_05E8 = 1;
      return 2;
    case 1:
      sVar2 = *(short *)((int)&this->field_05E0 + 2);
      sVar3 = *(short *)&this->field_05E4;
      sVar4 = *(short *)((int)&this->field_05E4 + 2);
      *(short *)&this->field_05DC = sVar2;
      *(short *)((int)&this->field_05DC + 2) = sVar3;
      *(short *)&this->field_05E0 = sVar4;
      if ((((((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar3 < 0)) ||
             ((g_worldGrid.sizeY <= sVar3 || (sVar4 < 0)))) || (g_worldGrid.sizeZ <= sVar4)) ||
           (g_pathingGrid.cells
            [(int)g_pathingGrid.sizeX * (int)sVar3 + (int)g_pathingGrid.planeStride * (int)sVar4 +
             (int)sVar2] != 0)) ||
          ((((-1 < sVar2 && (sVar2 < g_worldGrid.sizeX)) &&
            ((-1 < sVar3 &&
             (((sVar3 < g_worldGrid.sizeY && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeZ)))))) &&
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           ((g_worldGrid.cells
             [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar3 +
              (int)sVar2].objects[1] != (STWorldObject *)0x0 &&
            ((iVar7 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar4 +
                       (int)g_worldGrid.sizeX * (int)sVar3 + (int)sVar2].objects[1]->value_20,
             iVar7 == 0x5a || (iVar7 == 0x1ae)))))))) &&
         (psVar1 = (short *)((int)&this->field_05E0 + 2),
         iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                           ((AnonReceiver_0048DFD0 *)this,sVar2,sVar3,sVar4,this->field_0047,
                            this->field_0049,
                            (int *)CONCAT22((short)((uint)psVar1 >> 0x10),this->field_004B),1,psVar1
                            ,(short *)&this->field_05E4,(short *)((int)&this->field_05E4 + 2)),
         iVar7 == 0)) {
        return 0;
      }
      sub_004602B0(this);
      break;
    default:
      goto switchD_004761eb_caseD_3;
    case 3:
      sVar2 = *(short *)((int)&this->field_05E0 + 2);
      sVar3 = *(short *)&this->field_05E4;
      sVar4 = *(short *)((int)&this->field_05E4 + 2);
      *(short *)&this->field_05DC = sVar2;
      *(short *)((int)&this->field_05DC + 2) = sVar3;
      *(short *)&this->field_05E0 = sVar4;
      if (((((((-1 < sVar2) && (sVar2 < g_worldGrid.sizeX)) &&
             ((-1 < sVar3 &&
              (((sVar3 < g_worldGrid.sizeY && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeZ)))))) &&
            (g_worldGrid.cells
             [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar3 +
              (int)sVar2].objects[0] != (STWorldObject *)0x0)) ||
           ((sVar2 < 0 || (g_worldGrid.sizeX <= sVar2)))) ||
          ((((sVar3 < 0 || ((g_worldGrid.sizeY <= sVar3 || (sVar4 < 0)))) ||
            ((g_worldGrid.sizeZ <= sVar4 ||
             (g_pathingGrid.cells
              [(int)g_pathingGrid.sizeX * (int)sVar3 + (int)g_pathingGrid.planeStride * (int)sVar4 +
               (int)sVar2] != 0)))) ||
           (((((-1 < sVar2 && (sVar2 < g_worldGrid.sizeX)) && (-1 < sVar3)) &&
             (((sVar3 < g_worldGrid.sizeY && (-1 < sVar4)) &&
              ((sVar4 < g_worldGrid.sizeZ &&
               /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
               (g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar3 +
                 (int)sVar2].objects[1] != (STWorldObject *)0x0)))))) &&
            ((iVar7 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar4 +
                       (int)g_worldGrid.sizeX * (int)sVar3 + (int)sVar2].objects[1]->value_20,
             iVar7 == 0x5a || (iVar7 == 0x1ae)))))))) &&
         (psVar1 = (short *)((int)&this->field_05E0 + 2),
         iVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                           ((AnonReceiver_0048DFD0 *)this,sVar2,sVar3,sVar4,this->field_0047,
                            this->field_0049,
                            (int *)CONCAT22((short)((uint)psVar1 >> 0x10),this->field_004B),1,psVar1
                            ,(short *)&this->field_05E4,(short *)((int)&this->field_05E4 + 2)),
         iVar7 == 0)) {
        return 0;
      }
      break;
    case -1:
      iVar7 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x311d,0,0,&DAT_007a4ccc,
                                 s_STBoatC__SetMine__SETMINE_MOVE_e_007ab0e0);
      if (iVar7 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return 0xffff;
    }
    sub_00481520(this,(int)*(short *)((int)&this->field_05E0 + 2),(int)*(short *)&this->field_05E4,
                 (int)*(short *)((int)&this->field_05E4 + 2));
    sub_00460260(this,0);
switchD_004761eb_caseD_3:
    return 2;
  }
  if (this->field_05E8 != 1) goto LAB_00476633;
  SVar5 = this->field_06F7;
  if (SVar5 == CASE_5) {
    pSVar8 = this->vtable;
    uVar10 = 0xe6;
LAB_004765df:
    (*pSVar8->vfunc_90)(3,uVar10);
  }
  else if (SVar5 == CASE_11) {
    (*this->vtable->vfunc_90)(3,0x14a);
  }
  else if (SVar5 == CASE_21) {
    pSVar8 = this->vtable;
    uVar10 = 0x1cb;
    goto LAB_004765df;
  }
  thunk_FUN_00627850(*(undefined4 *)&this->field_0x7b6,*(undefined4 *)&this->field_0x24,
                     this->field_0018,(uint)(ushort)this->field_0032,(int)this->field_0041,
                     (int)this->field_0043,this->field_0045 + -10,this->field_06F3,(char *)0x0,
                     0xffffffff);
  *(int *)&this->field_0x7be = *(int *)&this->field_0x7be + -1;
LAB_00476633:
  iVar7 = (*this->vtable->vfunc_D8)();
  return -(uint)(iVar7 != 0);
}


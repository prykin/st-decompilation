#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SetMine
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   SetMine(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=00476220 RET 0x4 | 00476236 RET 0x4 | 00476405 RET 0x4 | 00476560 RET 0x4 |
   0047659B RET 0x4 | 00476645 RET 0x4 | 0047666D RET 0x4 | 004767DD RET 0x4 | 0047681F RET 0x4 */

int __thiscall STBoatC::SetMine(STBoatC *this,int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar5;
  STBoatCVTable *pSVar6;
  undefined2 arg_2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    iVar5 = 0;
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
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
         (((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar3 ||
           (STGridAt3D(g_pathingGrid, sVar1, sVar2, sVar3) != 0)))))) ||
        (((-1 < sVar1 && (sVar1 < g_worldGrid.sizeX)) &&
         ((-1 < sVar2 &&
          (((((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeZ)) &&
            (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1] != nullptr)) &&
           ((iVar5 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1]->value_20,
            iVar5 == 0x5a || (iVar5 == 0x1ae)))))))))) &&
       (iVar5 = sub_0048DFD0(this,sVar1,sVar2,sVar3,this->field_0047,this->field_0049,
                             (int *)CONCAT22((short)((uint)&this->field_0x5e2 >> 0x10),
                                             this->field_004B),1,(short *)&this->field_0x5e2,
                             (short *)&this->field_0x5e4,(short *)&this->field_0x5e6), iVar5 == 0))
    {
      return 0;
    }
    this->field_05E8 = 0;
    sub_00481520(this,(int)*(short *)&this->field_0x5e2,(int)*(short *)&this->field_0x5e4,
                 (int)*(short *)&this->field_0x5e6);
    iVar5 = sub_00460260(this,0);
    return (-(uint)(iVar5 != -1) & 3) - 1;
  }
  if (this->field_05E8 == 0) {
    iVar5 = sub_00460260(this,2);
    switch(iVar5) {
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
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
             ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) || (g_worldGrid.sizeZ <= sVar3)) ||
           (STGridAt3D(g_pathingGrid, sVar1, sVar2, sVar3) != 0)) ||
          ((((-1 < sVar1 && (sVar1 < g_worldGrid.sizeX)) &&
            ((-1 < sVar2 &&
             (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeZ)))))) &&
           ((STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1] != nullptr &&
            ((iVar5 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1]->value_20,
             iVar5 == 0x5a || (iVar5 == 0x1ae)))))))) &&
         (iVar5 = sub_0048DFD0(this,sVar1,sVar2,sVar3,this->field_0047,this->field_0049,
                               (int *)CONCAT22((short)((uint)&this->field_0x5e2 >> 0x10),
                                               this->field_004B),1,(short *)&this->field_0x5e2,
                               (short *)&this->field_0x5e4,(short *)&this->field_0x5e6), iVar5 == 0)
         ) {
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
            (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[0] != nullptr)) ||
           /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
           ((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)))) ||
          ((((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) ||
            ((g_worldGrid.sizeZ <= sVar3 ||
             (STGridAt3D(g_pathingGrid, sVar1, sVar2, sVar3) != 0)))) ||
           (((((-1 < sVar1 && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
             (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) &&
              ((sVar3 < g_worldGrid.sizeZ &&
               (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1] != nullptr)))))) &&
            ((iVar5 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[1]->value_20,
             iVar5 == 0x5a || (iVar5 == 0x1ae)))))))) &&
         (iVar5 = sub_0048DFD0(this,sVar1,sVar2,sVar3,this->field_0047,this->field_0049,
                               (int *)CONCAT22((short)((uint)&this->field_0x5e2 >> 0x10),
                                               this->field_004B),1,(short *)&this->field_0x5e2,
                               (short *)&this->field_0x5e4,(short *)&this->field_0x5e6), iVar5 == 0)
         ) {
        return 0;
      }
      break;
    case -1:
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x311d,0,0,"%s",
                                 "STBoatC::SetMine, SETMINE_MOVE error");
      if (iVar5 != 0) {
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
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar5 = *(int *)((int)this->field_06CB + 0x2c);
  if (iVar5 == 5) {
    pSVar6 = this->vtable;
    arg_2 = 0xe6;
LAB_004765df:
    (*pSVar6->vfunc_90)(this,3,arg_2);
  }
  else if (iVar5 == 0x11) {
    this->vfunc_90(3,0x14a);
  }
  else if (iVar5 == 0x21) {
    pSVar6 = this->vtable;
    arg_2 = 0x1cb;
    goto LAB_004765df;
  }
  thunk_FUN_00627850(this->field_07B6,this->field_0024,this->field_0018,
                     (uint)(ushort)this->field_0032,(int)this->field_0041,(int)this->field_0043,
                     this->field_0045 + -10,(int)this->field_06CB[5],nullptr,0xffffffff);
  this->field_07BE = this->field_07BE + -1;
LAB_00476633:
  iVar5 = this->vfunc_D8();
  return -(uint)(iVar5 != 0);
}


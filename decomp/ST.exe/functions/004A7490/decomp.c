#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePatrolPoints */

void __thiscall STGroupBoatC::ReMakePatrolPoints(STGroupBoatC *this,int param_1)

{
  ushort uVar1;
  code *pcVar2;
  DArrayTy *array;
  short *psVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  short local_4c;
  short local_4a;
  short local_48;
  short local_3c;
  short local_3a;
  short local_38;
  int local_32;
  short local_2c;
  short local_2a;
  short local_28;
  int local_26;
  undefined4 local_22;
  short local_1c;
  short local_1a;
  short local_18;
  int local_14;
  STGroupBoatC *local_10;
  uint local_c;
  uint local_8;

  uVar1 = this->field_0027;
  if (uVar1 < 10) {
    this->field_0242 = 2;
  }
  else if (uVar1 < 0x28) {
    this->field_0242 = 4;
  }
  else if (uVar1 < 100) {
    this->field_0242 = 6;
  }
  else if (uVar1 < 0xf0) {
    this->field_0242 = 8;
  }
  else {
    this->field_0242 = 10;
  }
  local_10 = this;
  array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,this->field_0226->count,0xe,1);
  pDVar4 = this->field_0226;
  uVar7 = 0;
  if (0 < (int)pDVar4->count) {
    do {
      DArrayGetElement(pDVar4,uVar7,&local_1c);
      local_2c = local_1c;
      local_2a = local_1a;
      local_22 = 0;
      local_26 = 0;
      local_28 = local_18;
      Library::DKW::TBL::FUN_006ae140(&array->flags,uVar7,(undefined4 *)&local_2c);
      pDVar4 = this->field_0226;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)pDVar4->count);
  }
  uVar7 = array->count;
  if (1 < uVar7) {
    local_8 = 0;
    if (uVar7 != 1 && -1 < (int)(uVar7 - 1)) {
      local_c = 1;
      do {
        DArrayGetElement(array,local_8,&local_2c);
        DArrayGetElement(array,local_c,&local_3c);
        psVar3 = Library::DKW::WAY::FUN_006a9190
                           ((int)g_pathingGrid.cells,(int)g_pathingGrid.sizeX,
                            (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(short *)(int)local_2c
                            ,(short *)(int)local_2a,(short *)(int)local_28,(short *)(int)local_3c,
                            (short *)(int)local_3a,(short *)(int)local_38,0,&local_14,
                            (undefined4 *)0x0,(short *)0x0,0);
        if (psVar3 == (short *)0x0) {
          uVar7 = (int)g_pathingGrid.sizeX * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeZ;
          psVar3 = g_pathingGrid.cells;
          psVar8 = g_pathingScratchGrid.cells;
          for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)psVar8 = *(undefined4 *)psVar3;
            psVar3 = psVar3 + 2;
            psVar8 = psVar8 + 2;
          }
          for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)psVar8 = (char)*psVar3;
            psVar3 = (short *)((int)psVar3 + 1);
            psVar8 = (short *)((int)psVar8 + 1);
          }
          FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                       (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_2c,(int)local_2a
                       ,(int)local_28,(int)local_3c,(int)local_3a,(int)local_38);
          iVar6 = g_pathingScratchGrid.cells
                  [(int)g_pathingGrid.planeStride * (int)local_38 +
                   (int)g_pathingGrid.sizeX * (int)local_3a + (int)local_3c] + -1;
          this = local_10;
        }
        else {
          iVar6 = (int)psVar3[3];
          FUN_006a5e90(psVar3);
        }
        uVar7 = local_c;
        iVar6 = iVar6 / 3;
        if (iVar6 < this->field_0242) {
          FUN_006b0c70(array,local_c);
          local_8 = local_8 - 1;
          local_c = uVar7 - 1;
        }
        else {
          local_32 = iVar6;
          local_26 = iVar6;
          Library::DKW::TBL::FUN_006ae140(&array->flags,local_8,(undefined4 *)&local_2c);
          Library::DKW::TBL::FUN_006ae140(&array->flags,local_c,(undefined4 *)&local_3c);
        }
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while ((int)local_8 < (int)(array->count - 1));
    }
    if (this->field_0232 != 0xffffffff) {
      DArrayGetElement(this->field_022A,this->field_0232,&local_4c);
      pDVar4 = this->field_0226;
      uVar7 = 0;
      local_c = 0xffffffff;
      if (0 < (int)pDVar4->count) {
        do {
          DArrayGetElement(pDVar4,uVar7,&local_1c);
          if (((local_1c == local_4c) && (local_1a == local_4a)) && (local_18 == local_48)) {
            local_c = uVar7;
            if (uVar7 != 0xffffffff) goto LAB_004a77bb;
            break;
          }
          pDVar4 = this->field_0226;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)pDVar4->count);
      }
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x15ed,0,0,"%s",
                                 "STGroupBoatC::ReMakePatrolPoints wrong index");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
LAB_004a77bb:
      this->field_0232 = -1;
      local_8 = local_c;
      if (this->field_0236 == 1) {
        pDVar4 = this->field_0226;
        if ((int)local_c < (int)pDVar4->count) {
          do {
            DArrayGetElement(pDVar4,local_8,&local_1c);
            uVar7 = 0;
            if (0 < (int)array->count) {
              do {
                DArrayGetElement(array,uVar7,&local_2c);
                if (((local_1c == local_2c) && (local_1a == local_2a)) && (local_18 == local_28)) {
                  this->field_0232 = uVar7;
                  break;
                }
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 < (int)array->count);
            }
            if (this->field_0232 != -1) break;
            pDVar4 = this->field_0226;
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)pDVar4->count);
        }
        if (this->field_0232 != -1) goto LAB_004a792e;
        this->field_0232 = array->count - 1;
      }
      else {
        for (; -1 < (int)local_8; local_8 = local_8 - 1) {
          DArrayGetElement(this->field_0226,local_8,&local_1c);
          uVar7 = 0;
          if (0 < (int)array->count) {
            do {
              DArrayGetElement(array,uVar7,&local_2c);
              if (((local_1c == local_2c) && (local_1a == local_2a)) && (local_18 == local_28)) {
                this->field_0232 = uVar7;
                break;
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < (int)array->count);
          }
          if (this->field_0232 != -1) break;
        }
        if (this->field_0232 != -1) goto LAB_004a792e;
        this->field_0232 = 0;
      }
      if ((this->field_0232 == -1) &&
         (iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x160e,0,0,
                                     "%s","STGroupBoatC::ReMakePatrolPoints unknown error"),
         iVar6 != 0)) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      goto LAB_004a792e;
    }
  }
  this->field_0232 = 0;
LAB_004a792e:
  if (this->field_022A != (DArrayTy *)0x0) {
    DArrayDestroy(this->field_022A);
    this->field_022A = (DArrayTy *)0x0;
  }
  pDVar4 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,array->count,0xe,1);
  this->field_022A = pDVar4;
  uVar7 = 0;
  if (0 < (int)array->count) {
    do {
      DArrayGetElement(array,uVar7,&local_2c);
      Library::DKW::TBL::FUN_006ae140(&this->field_022A->flags,uVar7,(undefined4 *)&local_2c);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)array->count);
  }
  DArrayDestroy(array);
  return;
}


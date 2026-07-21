
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ReMakePatrolPoints */

void __thiscall STGroupBoatC::ReMakePatrolPoints(STGroupBoatC *this,int param_1)

{
  ushort uVar1;
  code *pcVar2;
  DArrayTy *array;
  short *psVar3;
  uint *puVar4;
  uint uVar5;
  DArrayTy *pDVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
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
  array = (DArrayTy *)
          Library::DKW::TBL::FUN_006ae290((uint *)0x0,*(uint *)(this->field_0226 + 0xc),0xe,1);
  pDVar6 = (DArrayTy *)this->field_0226;
  uVar8 = 0;
  if (0 < (int)pDVar6->count) {
    do {
      DArrayGetElement(pDVar6,uVar8,&local_1c);
      local_2c = local_1c;
      local_2a = local_1a;
      local_22 = 0;
      local_26 = 0;
      local_28 = local_18;
      Library::DKW::TBL::FUN_006ae140((uint *)array,uVar8,(undefined4 *)&local_2c);
      pDVar6 = (DArrayTy *)this->field_0226;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)pDVar6->count);
  }
  uVar8 = array->count;
  if (1 < uVar8) {
    local_8 = 0;
    if (uVar8 != 1 && -1 < (int)(uVar8 - 1)) {
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
          uVar8 = (int)g_pathingGrid.sizeX * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeZ;
          psVar3 = g_pathingGrid.cells;
          psVar9 = g_pathingScratchGrid.cells;
          for (uVar5 = (uVar8 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)psVar9 = *(undefined4 *)psVar3;
            psVar3 = psVar3 + 2;
            psVar9 = psVar9 + 2;
          }
          for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(char *)psVar9 = (char)*psVar3;
            psVar3 = (short *)((int)psVar3 + 1);
            psVar9 = (short *)((int)psVar9 + 1);
          }
          FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                       (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_2c,(int)local_2a
                       ,(int)local_28,(int)local_3c,(int)local_3a,(int)local_38);
          iVar7 = g_pathingScratchGrid.cells
                  [(int)g_pathingGrid.planeStride * (int)local_38 +
                   (int)g_pathingGrid.sizeX * (int)local_3a + (int)local_3c] + -1;
          this = local_10;
        }
        else {
          iVar7 = (int)psVar3[3];
          FUN_006a5e90(psVar3);
        }
        uVar8 = local_c;
        iVar7 = iVar7 / 3;
        if (iVar7 < (int)this->field_0242) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)array,local_c);
          local_8 = local_8 - 1;
          local_c = uVar8 - 1;
        }
        else {
          local_32 = iVar7;
          local_26 = iVar7;
          Library::DKW::TBL::FUN_006ae140((uint *)array,local_8,(undefined4 *)&local_2c);
          Library::DKW::TBL::FUN_006ae140((uint *)array,local_c,(undefined4 *)&local_3c);
        }
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while ((int)local_8 < (int)(array->count - 1));
    }
    if (this->field_0232 != 0xffffffff) {
      DArrayGetElement((DArrayTy *)this->field_022A,this->field_0232,&local_4c);
      pDVar6 = (DArrayTy *)this->field_0226;
      uVar8 = 0;
      local_c = 0xffffffff;
      if (0 < (int)pDVar6->count) {
        do {
          DArrayGetElement(pDVar6,uVar8,&local_1c);
          if (((local_1c == local_4c) && (local_1a == local_4a)) && (local_18 == local_48)) {
            local_c = uVar8;
            if (uVar8 != 0xffffffff) goto LAB_004a77bb;
            break;
          }
          pDVar6 = (DArrayTy *)this->field_0226;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)pDVar6->count);
      }
      iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x15ed,0,0,&DAT_007a4ccc,
                                 s_STGroupBoatC__ReMakePatrolPoints_007ac450);
      if (iVar7 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_004a77bb:
      this->field_0232 = 0xffffffff;
      local_8 = local_c;
      if (this->field_0236 == 1) {
        pDVar6 = (DArrayTy *)this->field_0226;
        if ((int)local_c < (int)pDVar6->count) {
          do {
            DArrayGetElement(pDVar6,local_8,&local_1c);
            uVar8 = 0;
            if (0 < (int)array->count) {
              do {
                DArrayGetElement(array,uVar8,&local_2c);
                if (((local_1c == local_2c) && (local_1a == local_2a)) && (local_18 == local_28)) {
                  this->field_0232 = uVar8;
                  break;
                }
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)array->count);
            }
            if (this->field_0232 != -1) break;
            pDVar6 = (DArrayTy *)this->field_0226;
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)pDVar6->count);
        }
        if (this->field_0232 != -1) goto LAB_004a792e;
        this->field_0232 = array->count - 1;
      }
      else {
        for (; -1 < (int)local_8; local_8 = local_8 - 1) {
          DArrayGetElement((DArrayTy *)this->field_0226,local_8,&local_1c);
          uVar8 = 0;
          if (0 < (int)array->count) {
            do {
              DArrayGetElement(array,uVar8,&local_2c);
              if (((local_1c == local_2c) && (local_1a == local_2a)) && (local_18 == local_28)) {
                this->field_0232 = uVar8;
                break;
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)array->count);
          }
          if (this->field_0232 != -1) break;
        }
        if (this->field_0232 != -1) goto LAB_004a792e;
        this->field_0232 = 0;
      }
      if ((this->field_0232 == -1) &&
         (iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x160e,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__ReMakePatrolPoints_007ac418),
         iVar7 != 0)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_004a792e;
    }
  }
  this->field_0232 = 0;
LAB_004a792e:
  if ((DArrayTy *)this->field_022A != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_022A);
    this->field_022A = 0;
  }
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,array->count,0xe,1);
  this->field_022A = puVar4;
  uVar8 = 0;
  if (0 < (int)array->count) {
    do {
      DArrayGetElement(array,uVar8,&local_2c);
      Library::DKW::TBL::FUN_006ae140((uint *)this->field_022A,uVar8,(undefined4 *)&local_2c);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)array->count);
  }
  DArrayDestroy(array);
  return;
}


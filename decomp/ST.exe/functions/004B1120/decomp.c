
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B1120_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97 */

int __cdecl
FUN_004b1120(int param_1,Global_sub_004B1120_param_2Enum param_2,int *param_3,int *param_4,
            int *param_5,int param_6,int param_7)

{
  short sVar1;
  int iVar2;
  dword dVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  STFishC *local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;

  local_14 = -1;
  if (param_6 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar5 = *(int **)(param_6 + 0x18);
  }
  local_10 = thunk_FUN_004ae0b0((short)*param_3,*param_4,*param_5,param_2,param_1,(undefined4 *)0x0,
                                (int *)0x0,(int *)0x0,0,piVar5);
  if (local_10 == 0) {
    if ((&STGroupBoatCVTable.vfunc_04)[param_2] == (void *)0x1) {
      param_7 = 0;
      param_1 = 0;
      param_6 = 0;
      if (g_dArray_007FA150 != (DArrayTy *)0x0) {
        g_dArray_007FA150->iteratorIndex = 0;
        iVar2 = FUN_006b1190(g_dArray_007FA150,&local_18);
        if (-1 < iVar2) {
          do {
            if (local_18 != (STFishC *)0x0) {
              switch(param_2) {
              case CASE_38:
                dVar3 = (*local_18->vtable->slot_2C)(local_18);
                if (dVar3 == 0xdc) {
LAB_004b1226:
                  STFishC::sub_004162B0(local_18,&local_6,&local_8,&local_a);
                  if (((g_worldGrid.cells
                        [(int)g_worldGrid.sizeX * (int)local_8 +
                         (int)local_6 + (int)g_worldGrid.planeStride * (int)local_a].objects[0] ==
                        (STWorldObject *)0x0) && (local_a < 4)) &&
                     ((iVar2 = FUN_006aced8((int)local_6,(int)local_8,*param_3,*param_4),
                      local_14 < 0 || (iVar2 < local_14)))) {
                    param_1 = (int)local_8;
                    param_7 = (int)local_a;
                    param_6 = (int)local_6;
                    local_10 = 1;
                    local_14 = iVar2;
                  }
                }
                break;
              case CASE_39:
              case CASE_5E:
                dVar3 = (*local_18->vtable->slot_2C)(local_18);
                if (dVar3 == 0xdd) goto LAB_004b1226;
                break;
              case CASE_4F:
                dVar3 = (*local_18->vtable->slot_2C)(local_18);
                if (dVar3 == 0xde) goto LAB_004b1226;
                break;
              case CASE_61:
                dVar3 = (*local_18->vtable->slot_2C)(local_18);
                if (dVar3 == 0xe0) goto LAB_004b1226;
              }
            }
            iVar2 = FUN_006b1190(g_dArray_007FA150,&local_18);
          } while (-1 < iVar2);
          if (local_10 != 0) {
            *param_3 = param_6;
            *param_4 = param_1;
            *param_5 = param_7;
            return local_10;
          }
        }
      }
    }
    else {
      sVar1 = g_worldGrid.sizeX;
      if (g_worldGrid.sizeX <= g_worldGrid.sizeY) {
        sVar1 = g_worldGrid.sizeY;
      }
      local_14 = 1;
      iVar2 = 0;
      if (1 < sVar1) {
        do {
          local_10 = iVar2;
          iVar6 = 0;
          iVar2 = local_14;
          if ((param_7 < local_14) && (g_worldGrid.sizeZ != 1 && -1 < g_worldGrid.sizeZ + -1)) {
            do {
              iVar7 = *param_3 - iVar2;
              if (iVar7 <= *param_3 + iVar2) {
                do {
                  if ((-1 < iVar7) && (iVar7 < g_worldGrid.sizeX)) {
                    iVar8 = *param_4 - iVar2;
                    if ((-1 < iVar8) && (iVar8 < g_worldGrid.sizeY)) {
                      if (param_6 == 0) {
                        piVar5 = (int *)0x0;
                      }
                      else {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        piVar5 = *(int **)(param_6 + 0x18);
                      }
                      iVar4 = thunk_FUN_004ae0b0((short)iVar7,iVar8,iVar6,param_2,param_1,
                                                 (undefined4 *)0x0,(int *)0x0,(int *)0x0,0,piVar5);
                      iVar2 = local_14;
                      if (iVar4 == 0) goto LAB_004b13a9;
LAB_004b14f8:
                      *param_3 = iVar7;
                      *param_4 = iVar8;
                      goto LAB_004b150e;
                    }
LAB_004b13a9:
                    iVar8 = *param_4 + iVar2;
                    if ((-1 < iVar8) && (iVar8 < g_worldGrid.sizeY)) {
                      if (param_6 == 0) {
                        piVar5 = (int *)0x0;
                      }
                      else {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        piVar5 = *(int **)(param_6 + 0x18);
                      }
                      iVar4 = thunk_FUN_004ae0b0((short)iVar7,iVar8,iVar6,param_2,param_1,
                                                 (undefined4 *)0x0,(int *)0x0,(int *)0x0,0,piVar5);
                      iVar2 = local_14;
                      if (iVar4 != 0) goto LAB_004b14f8;
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 <= *param_3 + iVar2);
              }
              iVar7 = *param_4;
              iVar8 = (iVar7 - iVar2) + 1;
              if (iVar8 <= iVar7 + -1 + iVar2) {
                do {
                  if ((-1 < iVar8) && (iVar8 < g_worldGrid.sizeY)) {
                    iVar7 = iVar7 - iVar2;
                    if ((-1 < iVar7) && (iVar7 < g_worldGrid.sizeX)) {
                      if (param_6 == 0) {
                        piVar5 = (int *)0x0;
                      }
                      else {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        piVar5 = *(int **)(param_6 + 0x18);
                      }
                      iVar4 = thunk_FUN_004ae0b0((short)iVar7,iVar8,iVar6,param_2,param_1,
                                                 (undefined4 *)0x0,(int *)0x0,(int *)0x0,0,piVar5);
                      iVar2 = local_14;
                      if (iVar4 != 0) goto LAB_004b1504;
                    }
                    iVar7 = *param_3 + iVar2;
                    if ((-1 < iVar7) && (iVar7 < g_worldGrid.sizeX)) {
                      if (param_6 == 0) {
                        piVar5 = (int *)0x0;
                      }
                      else {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        piVar5 = *(int **)(param_6 + 0x18);
                      }
                      iVar4 = thunk_FUN_004ae0b0((short)iVar7,iVar8,iVar6,param_2,param_1,
                                                 (undefined4 *)0x0,(int *)0x0,(int *)0x0,0,piVar5);
                      iVar2 = local_14;
                      if (iVar4 != 0) {
LAB_004b1504:
                        *param_3 = iVar7;
                        *param_4 = iVar8;
LAB_004b150e:
                        *param_5 = iVar6;
                        return 1;
                      }
                    }
                  }
                  iVar8 = iVar8 + 1;
                  iVar7 = *param_4;
                } while (iVar8 <= iVar7 + -1 + iVar2);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < g_worldGrid.sizeZ + -1);
          }
          local_14 = iVar2 + 1;
          iVar2 = local_10;
          if (sVar1 <= local_14) {
            return local_10;
          }
        } while( true );
      }
    }
  }
  return local_10;
}



/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AFFA0_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97 */

undefined4 __cdecl
FUN_004affa0(undefined4 param_1,Global_sub_004AFFA0_param_2Enum param_2,int *param_3,int *param_4,
            int *param_5,int param_6,int param_7)

{
  int iVar1;
  dword dVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  int local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  uVar4 = 0;
  local_14 = -1;
  local_18 = 0;
  if (g_dArray_007FA150 != (DArrayTy *)0x0) {
    g_dArray_007FA150->iteratorIndex = 0;
    iVar1 = FUN_006b1190(g_dArray_007FA150,&local_10);
    if (-1 < iVar1) {
      do {
        if (local_10 == (STFishC *)0x0) goto switchD_004afffd_caseD_3a;
        switch(param_2) {
        case CASE_38:
          dVar2 = (*local_10->vtable->slot_2C)(local_10);
          if (dVar2 != 0xdc) break;
          goto LAB_004b004a;
        case CASE_39:
        case CASE_5E:
          dVar2 = (*local_10->vtable->slot_2C)(local_10);
          if (dVar2 == 0xdd) goto LAB_004b004a;
          break;
        case CASE_4F:
          dVar2 = (*local_10->vtable->slot_2C)(local_10);
          goto joined_r0x004b0044;
        case CASE_61:
          dVar2 = (*local_10->vtable->slot_2C)(local_10);
joined_r0x004b0044:
          if (dVar2 == 0xde) {
LAB_004b004a:
            STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
            iVar1 = (int)local_8;
            iVar3 = (int)local_6;
            uVar4 = local_18;
            if ((((((g_worldGrid.cells
                     [g_worldGrid.sizeX * iVar1 +
                      iVar3 + (int)g_worldGrid.planeStride * (int)local_a].objects[0] ==
                     (STWorldObject *)0x0) && (-1 < local_6)) && (local_6 < g_worldGrid.sizeX)) &&
                 ((-1 < local_8 && (local_8 < g_worldGrid.sizeY)))) &&
                ((-1 < local_a &&
                 ((local_a < g_worldGrid.sizeZ &&
                  (g_pathingGrid.cells
                   [g_pathingGrid.sizeX * iVar1 +
                    iVar3 + (int)g_pathingGrid.planeStride * (int)local_a] == 0)))))) &&
               ((local_a < 4 &&
                ((iVar1 = FUN_006aced8(iVar3,iVar1,param_6,param_7), local_14 < 0 ||
                 (iVar1 < local_14)))))) {
              *param_3 = (int)local_6;
              *param_4 = (int)local_8;
              *param_5 = (int)local_a;
              local_18 = 1;
              uVar4 = 1;
              local_14 = iVar1;
            }
          }
        }
switchD_004afffd_caseD_3a:
        iVar1 = FUN_006b1190(g_dArray_007FA150,&local_10);
        if (iVar1 < 0) {
          return uVar4;
        }
      } while( true );
    }
  }
  return 0;
}


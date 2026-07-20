
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004B1120_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97 */

int __cdecl
FUN_004b1120(int param_1,Global_sub_004B1120_param_2Enum param_2,int *param_3,int *param_4,
            int *param_5,int param_6,int param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  STFishC *local_18;
  int local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_14 = -1;
  if (param_6 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(param_6 + 0x18);
  }
  local_10 = thunk_FUN_004ae0b0(*param_3,*param_4,*param_5,param_2,param_1,(undefined4 *)0x0,
                                (int *)0x0,(int *)0x0,0,piVar4);
  if (local_10 == 0) {
    if ((&STGroupBoatCVTable.vfunc_04)[param_2] == (void *)0x1) {
      param_7 = 0;
      param_1 = 0;
      param_6 = 0;
      if (PTR_007fa150 != (DArrayTy *)0x0) {
        PTR_007fa150->iteratorIndex = 0;
        iVar2 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_18);
        if (-1 < iVar2) {
          do {
            if (local_18 != (STFishC *)0x0) {
              switch(param_2) {
              case CASE_38:
                iVar2 = (*local_18->vtable->vfunc_2C)();
                if (iVar2 == 0xdc) {
LAB_004b1226:
                  STFishC::sub_004162B0(local_18,&local_6,&local_8,&local_a);
                  if (((g_worldCells
                        [(int)SHORT_007fb240 * (int)local_8 +
                         (int)local_6 + (int)SHORT_007fb246 * (int)local_a].objects[0] ==
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
                iVar2 = (*local_18->vtable->vfunc_2C)();
                if (iVar2 == 0xdd) goto LAB_004b1226;
                break;
              case CASE_4F:
                iVar2 = (*local_18->vtable->vfunc_2C)();
                if (iVar2 == 0xde) goto LAB_004b1226;
                break;
              case CASE_61:
                iVar2 = (*local_18->vtable->vfunc_2C)();
                if (iVar2 == 0xe0) goto LAB_004b1226;
              }
            }
            iVar2 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_18);
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
      sVar1 = (short)_SHORT_007fb240;
      if ((short)_SHORT_007fb240 <= SHORT_007fb242) {
        sVar1 = SHORT_007fb242;
      }
      local_14 = 1;
      iVar2 = 0;
      if (1 < sVar1) {
        do {
          local_10 = iVar2;
          iVar5 = 0;
          iVar2 = local_14;
          if ((param_7 < local_14) && (SHORT_007fb244 != 1 && -1 < SHORT_007fb244 + -1)) {
            do {
              iVar6 = *param_3 - iVar2;
              if (iVar6 <= *param_3 + iVar2) {
                do {
                  if ((-1 < iVar6) && (iVar6 < SHORT_007fb240)) {
                    iVar7 = *param_4 - iVar2;
                    if ((-1 < iVar7) && (iVar7 < SHORT_007fb242)) {
                      if (param_6 == 0) {
                        piVar4 = (int *)0x0;
                      }
                      else {
                        piVar4 = *(int **)(param_6 + 0x18);
                      }
                      iVar3 = thunk_FUN_004ae0b0(iVar6,iVar7,iVar5,param_2,param_1,(undefined4 *)0x0
                                                 ,(int *)0x0,(int *)0x0,0,piVar4);
                      iVar2 = local_14;
                      if (iVar3 == 0) goto LAB_004b13a9;
LAB_004b14f8:
                      *param_3 = iVar6;
                      *param_4 = iVar7;
                      goto LAB_004b150e;
                    }
LAB_004b13a9:
                    iVar7 = *param_4 + iVar2;
                    if ((-1 < iVar7) && (iVar7 < SHORT_007fb242)) {
                      if (param_6 == 0) {
                        piVar4 = (int *)0x0;
                      }
                      else {
                        piVar4 = *(int **)(param_6 + 0x18);
                      }
                      iVar3 = thunk_FUN_004ae0b0(iVar6,iVar7,iVar5,param_2,param_1,(undefined4 *)0x0
                                                 ,(int *)0x0,(int *)0x0,0,piVar4);
                      iVar2 = local_14;
                      if (iVar3 != 0) goto LAB_004b14f8;
                    }
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 <= *param_3 + iVar2);
              }
              iVar6 = *param_4;
              iVar7 = (iVar6 - iVar2) + 1;
              if (iVar7 <= iVar6 + -1 + iVar2) {
                do {
                  if ((-1 < iVar7) && (iVar7 < SHORT_007fb242)) {
                    iVar6 = iVar6 - iVar2;
                    if ((-1 < iVar6) && (iVar6 < SHORT_007fb240)) {
                      if (param_6 == 0) {
                        piVar4 = (int *)0x0;
                      }
                      else {
                        piVar4 = *(int **)(param_6 + 0x18);
                      }
                      iVar3 = thunk_FUN_004ae0b0(iVar6,iVar7,iVar5,param_2,param_1,(undefined4 *)0x0
                                                 ,(int *)0x0,(int *)0x0,0,piVar4);
                      iVar2 = local_14;
                      if (iVar3 != 0) goto LAB_004b1504;
                    }
                    iVar6 = *param_3 + iVar2;
                    if ((-1 < iVar6) && (iVar6 < SHORT_007fb240)) {
                      if (param_6 == 0) {
                        piVar4 = (int *)0x0;
                      }
                      else {
                        piVar4 = *(int **)(param_6 + 0x18);
                      }
                      iVar3 = thunk_FUN_004ae0b0(iVar6,iVar7,iVar5,param_2,param_1,(undefined4 *)0x0
                                                 ,(int *)0x0,(int *)0x0,0,piVar4);
                      iVar2 = local_14;
                      if (iVar3 != 0) {
LAB_004b1504:
                        *param_3 = iVar6;
                        *param_4 = iVar7;
LAB_004b150e:
                        *param_5 = iVar5;
                        return 1;
                      }
                    }
                  }
                  iVar7 = iVar7 + 1;
                  iVar6 = *param_4;
                } while (iVar7 <= iVar6 + -1 + iVar2);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < SHORT_007fb244 + -1);
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


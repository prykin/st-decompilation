
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_004b1120(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_18;
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
    if ((&PTR_LAB_0079072c)[param_2] == (undefined *)0x1) {
      param_7 = 0;
      param_1 = 0;
      param_6 = 0;
      if (DAT_007fa150 != 0) {
        *(undefined4 *)(DAT_007fa150 + 4) = 0;
        iVar2 = FUN_006b1190(DAT_007fa150,&local_18);
        if (-1 < iVar2) {
          do {
            if (local_18 != (int *)0x0) {
              switch(param_2) {
              case 0x38:
                iVar2 = (**(code **)(*local_18 + 0x2c))();
                if (iVar2 == 0xdc) {
LAB_004b1226:
                  thunk_FUN_004162b0(local_18,&local_6,&local_8,&local_a);
                  if (((*(int *)(DAT_007fb248 +
                                ((int)DAT_007fb240 * (int)local_8 +
                                (int)local_6 + (int)DAT_007fb246 * (int)local_a) * 8) == 0) &&
                      (local_a < 4)) &&
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
              case 0x39:
              case 0x5e:
                iVar2 = (**(code **)(*local_18 + 0x2c))();
                if (iVar2 == 0xdd) goto LAB_004b1226;
                break;
              case 0x4f:
                iVar2 = (**(code **)(*local_18 + 0x2c))();
                if (iVar2 == 0xde) goto LAB_004b1226;
                break;
              case 0x61:
                iVar2 = (**(code **)(*local_18 + 0x2c))();
                if (iVar2 == 0xe0) goto LAB_004b1226;
              }
            }
            iVar2 = FUN_006b1190(DAT_007fa150,&local_18);
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
      sVar1 = (short)_DAT_007fb240;
      if ((short)_DAT_007fb240 <= DAT_007fb242) {
        sVar1 = DAT_007fb242;
      }
      local_14 = 1;
      iVar2 = 0;
      if (1 < sVar1) {
        do {
          local_10 = iVar2;
          iVar5 = 0;
          iVar2 = local_14;
          if ((param_7 < local_14) && (DAT_007fb244 != 1 && -1 < DAT_007fb244 + -1)) {
            do {
              iVar6 = *param_3 - iVar2;
              if (iVar6 <= *param_3 + iVar2) {
                do {
                  if ((-1 < iVar6) && (iVar6 < DAT_007fb240)) {
                    iVar7 = *param_4 - iVar2;
                    if ((-1 < iVar7) && (iVar7 < DAT_007fb242)) {
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
                    if ((-1 < iVar7) && (iVar7 < DAT_007fb242)) {
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
                  if ((-1 < iVar7) && (iVar7 < DAT_007fb242)) {
                    iVar6 = iVar6 - iVar2;
                    if ((-1 < iVar6) && (iVar6 < DAT_007fb240)) {
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
                    if ((-1 < iVar6) && (iVar6 < DAT_007fb240)) {
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
            } while (iVar5 < DAT_007fb244 + -1);
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



uint * thunk_FUN_0069c8b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int aiStack_68 [9];
  int aiStack_44 [3];
  uint *puStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  int *piStack_c;
  void *pvStack_8;
  
  iVar1 = param_1;
  puVar2 = FUN_006ae290((uint *)0x0,10,0x10,10);
  if (((puVar2 != (uint *)0x0) && (param_1 != 0)) && (0 < param_3)) {
    iStack_18 = 0;
    iStack_1c = 0;
    piStack_20 = (int *)(param_1 + 2);
    iStack_2c = param_3;
    iVar5 = param_2 * 0xe;
    iStack_34 = iVar5;
    do {
      if (0 < param_2) {
        param_1 = iStack_18;
        param_3 = iStack_1c;
        piStack_14 = piStack_20;
        iStack_28 = param_2;
        do {
          uVar6 = 0xffffffff;
          iStack_24 = *piStack_14;
          iStack_30 = thunk_FUN_00696310(pvStack_8,param_1,param_2,aiStack_68,(int *)0x0);
          iStack_10 = 0;
          if (iStack_30 < 1) {
LAB_0069ca03:
            aiStack_44[0] = 0;
            aiStack_44[1] = 0;
            aiStack_44[2] = 0;
            puStack_38 = (uint *)0x0;
            puStack_38 = FUN_006ae290((uint *)0x0,10,4,10);
            aiStack_44[0] = iStack_24;
            uVar6 = FUN_006ae1c0(puVar2,aiStack_44);
            if (uVar6 < puVar2[3]) {
              iVar5 = puVar2[2] * uVar6 + puVar2[7];
            }
            else {
              iVar5 = 0;
            }
            uVar4 = thunk_FUN_0069c710(iVar1,param_1,iVar5);
            if (-1 < (int)uVar4) {
              *(uint *)(param_3 + 10 + iVar1) = uVar6;
            }
          }
          else {
            piStack_c = aiStack_68;
            do {
              uVar4 = *(uint *)(iVar1 + 10 + *piStack_c * 0xe);
              if ((int)uVar4 < 0) break;
              if (*(int *)(iVar1 + *piStack_c * 0xe + 2) == iStack_24) {
                if (uVar6 == 0xffffffff) {
                  uVar6 = uVar4;
                  if (((uVar4 < puVar2[3]) && (iVar5 = puVar2[2] * uVar4 + puVar2[7], iVar5 != 0))
                     && (uVar3 = thunk_FUN_0069c710(iVar1,param_1,iVar5), -1 < (int)uVar3)) {
                    *(uint *)(param_3 + 10 + iVar1) = uVar4;
                  }
                }
                else if (uVar6 != uVar4) {
                  uVar4 = *(uint *)(iVar1 + 10 + aiStack_68[iStack_10] * 0xe);
                  uVar3 = uVar6;
                  if ((int)uVar4 < (int)uVar6) {
                    uVar3 = uVar4;
                    uVar4 = uVar6;
                  }
                  thunk_FUN_0069c790((int)puVar2,iVar1,uVar3,uVar4);
                  break;
                }
              }
              iStack_10 = iStack_10 + 1;
              piStack_c = piStack_c + 1;
            } while (iStack_10 < iStack_30);
            if ((int)uVar6 < 0) goto LAB_0069ca03;
          }
          param_3 = param_3 + 0xe;
          piStack_14 = (int *)((int)piStack_14 + 0xe);
          param_1 = param_1 + 1;
          iStack_28 = iStack_28 + -1;
          iVar5 = iStack_34;
        } while (iStack_28 != 0);
      }
      iStack_18 = iStack_18 + param_2;
      iStack_1c = iStack_1c + iVar5;
      piStack_20 = (int *)((int)piStack_20 + iVar5);
      iStack_2c = iStack_2c + -1;
    } while (iStack_2c != 0);
  }
  return puVar2;
}


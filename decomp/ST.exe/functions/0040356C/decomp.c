
undefined4 __thiscall thunk_FUN_0069c360(void *this,int param_1,int *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int aiStack_58 [9];
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  int iStack_24;
  void *pvStack_20;
  int iStack_1c;
  int *piStack_18;
  int iStack_14;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  
  piVar2 = param_2;
  uVar3 = 0;
  if ((param_1 != 0) && (*(int *)((int)this + 0x56ff) != 0)) {
    if (0 < param_3) {
      piStack_8 = (int *)0x0;
      iStack_1c = param_3;
      iVar5 = (int)param_2 * 0xe;
      iStack_24 = (int)param_2 * 400;
      piStack_c = (int *)(param_1 + 6);
      do {
        if (0 < (int)piVar2) {
          iStack_14 = 0;
          param_2 = piStack_c;
          piStack_10 = piVar2;
          do {
            piStack_18 = (int *)0x0;
            bVar1 = *(byte *)((int)piStack_8 + iStack_14 + *(int *)((int)this + 0x56ff));
            uStack_2c = (uint)bVar1;
            pbVar4 = (byte *)((int)piStack_8 + iStack_14 + *(int *)((int)this + 0x56ff));
            do {
              iVar6 = 0;
              pbVar8 = pbVar4;
              do {
                if (bVar1 != *pbVar8) {
                  param_2[-1] = 0xff;
                  *(undefined1 *)((int)param_2 + -6) = 1;
                  goto LAB_0069c428;
                }
                iVar6 = iVar6 + 1;
                pbVar8 = pbVar8 + 1;
              } while (iVar6 < 0x14);
              pbVar4 = pbVar4 + (int)piVar2 * 0x14;
              piStack_18 = (int *)((int)piStack_18 + 1);
            } while ((int)piStack_18 < 0x14);
            param_2[-1] = uStack_2c;
            *(undefined1 *)((int)param_2 + -6) = 0;
LAB_0069c428:
            *param_2 = -1;
            param_2[1] = -1;
            param_2 = (int *)((int)param_2 + 0xe);
            iStack_14 = iStack_14 + 0x14;
            piStack_10 = (int *)((int)piStack_10 + -1);
          } while (piStack_10 != (int *)0x0);
        }
        piStack_8 = (int *)((int)piStack_8 + iStack_24);
        piStack_c = (int *)((int)piStack_c + iVar5);
        iStack_1c = iStack_1c + -1;
      } while (iStack_1c != 0);
      iStack_1c = 0;
    }
    piStack_10 = (int *)0x0;
    if (0 < param_3) {
      iStack_14 = 0;
      iVar5 = (int)piVar2 * 0xe;
      piStack_18 = (int *)(param_1 + 2);
      uStack_2c = 0;
      iStack_34 = iVar5;
      pvStack_20 = this;
      do {
        param_2 = (int *)0x0;
        if (0 < (int)piVar2) {
          piStack_8 = piStack_18;
          uVar7 = uStack_2c;
          do {
            iStack_30 = *piStack_8;
            iStack_28 = uVar7;
            iVar5 = thunk_FUN_00696310(pvStack_20,iStack_14 + (int)param_2,(int)piVar2,aiStack_58,
                                       (int *)0x0);
            iVar6 = 0;
            iStack_24 = 0;
            if (0 < iVar5) {
              piStack_c = aiStack_58;
              iStack_1c = iVar5;
              do {
                iVar5 = *piStack_c;
                if (((*(int *)(param_1 + 2 + iVar5 * 0xe) == iStack_30) &&
                    (iVar6 = iVar6 + 1, -1 < iVar5 % (int)piVar2 - (int)param_2)) &&
                   (-1 < iVar5 / (int)piVar2 - (int)piStack_10)) {
                  iStack_24 = 1;
                }
                piStack_c = piStack_c + 1;
                iStack_1c = iStack_1c + -1;
              } while (iStack_1c != 0);
              iStack_1c = 0;
              uVar7 = iStack_28;
            }
            *(undefined1 *)(uVar7 + 1 + param_1) = 0;
            if (iVar6 == 8) {
              *(undefined1 *)(uVar7 + 1 + param_1) = 4;
            }
            else if (iStack_24 != 0) {
              *(undefined1 *)(uVar7 + 1 + param_1) = 8;
            }
            param_2 = (int *)((int)param_2 + 1);
            uVar7 = uVar7 + 0xe;
            piStack_8 = (int *)((int)piStack_8 + 0xe);
            iVar5 = iStack_34;
          } while ((int)param_2 < (int)piVar2);
        }
        iStack_14 = iStack_14 + (int)piVar2;
        piStack_10 = (int *)((int)piStack_10 + 1);
        uStack_2c = uStack_2c + iVar5;
        piStack_18 = (int *)((int)piStack_18 + iVar5);
      } while ((int)piStack_10 < param_3);
    }
    uVar3 = 1;
  }
  return uVar3;
}


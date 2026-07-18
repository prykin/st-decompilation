
void FUN_006cea60(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,uint param_5,
                 int param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if ((0 < (int)param_5) && (0 < param_6)) {
    uVar9 = param_4 - param_5;
    uVar6 = param_2 - param_5;
    uVar8 = param_5;
    if (0xe < (int)param_5) {
      if (((byte)DAT_00858de0 & 1) == 0) {
        do {
          for (; ((uint)param_1 & 3) != 0; param_1 = (undefined8 *)((int)param_1 + 1)) {
            uVar2 = *(undefined1 *)param_3;
            param_3 = (undefined8 *)((int)param_3 + 1);
            *(undefined1 *)param_1 = uVar2;
            uVar8 = uVar8 - 1;
          }
          for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)param_1 = *(undefined4 *)param_3;
            param_3 = (undefined8 *)((int)param_3 + 4);
            param_1 = (undefined8 *)((int)param_1 + 4);
          }
          uVar4 = uVar8 & 3;
          if ((uVar8 & 3) != 0) {
            do {
              uVar2 = *(undefined1 *)param_3;
              param_3 = (undefined8 *)((int)param_3 + 1);
              *(undefined1 *)param_1 = uVar2;
              param_1 = (undefined8 *)((int)param_1 + 1);
              uVar8 = uVar4 - 1;
              bVar3 = 0 < (int)uVar4;
              uVar4 = uVar8;
            } while (uVar8 != 0 && bVar3);
          }
          param_3 = (undefined8 *)((int)param_3 + uVar9);
          param_1 = (undefined8 *)((int)param_1 + uVar6);
          iVar7 = param_6 + -1;
          bVar3 = 0 < param_6;
          uVar8 = param_5;
          param_6 = iVar7;
        } while (iVar7 != 0 && bVar3);
        return;
      }
      if ((((699 < (int)param_5) && (5 < DAT_00858e24)) &&
          ((((uint)param_1 ^ (uint)param_3) & 7) == 0)) && (((uVar6 ^ uVar9) & 7) == 0)) {
        do {
          for (; ((uint)param_1 & 7) != 0; param_1 = (undefined8 *)((int)param_1 + 1)) {
            uVar2 = *(undefined1 *)param_3;
            param_3 = (undefined8 *)((int)param_3 + 1);
            *(undefined1 *)param_1 = uVar2;
            uVar8 = uVar8 - 1;
          }
          for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)param_1 = *(undefined4 *)param_3;
            param_3 = (undefined8 *)((int)param_3 + 4);
            param_1 = (undefined8 *)((int)param_1 + 4);
          }
          uVar4 = uVar8 & 3;
          if ((uVar8 & 3) != 0) {
            do {
              uVar2 = *(undefined1 *)param_3;
              param_3 = (undefined8 *)((int)param_3 + 1);
              *(undefined1 *)param_1 = uVar2;
              param_1 = (undefined8 *)((int)param_1 + 1);
              uVar8 = uVar4 - 1;
              bVar3 = 0 < (int)uVar4;
              uVar4 = uVar8;
            } while (uVar8 != 0 && bVar3);
          }
          param_3 = (undefined8 *)((int)param_3 + uVar9);
          param_1 = (undefined8 *)((int)param_1 + uVar6);
          iVar7 = param_6 + -1;
          bVar3 = 0 < param_6;
          uVar8 = param_5;
          param_6 = iVar7;
        } while (iVar7 != 0 && bVar3);
        return;
      }
      do {
        for (; ((uint)param_1 & 7) != 0; param_1 = (undefined8 *)((int)param_1 + 1)) {
          uVar2 = *(undefined1 *)param_3;
          param_3 = (undefined8 *)((int)param_3 + 1);
          *(undefined1 *)param_1 = uVar2;
          uVar8 = uVar8 - 1;
        }
        uVar4 = uVar8 >> 3;
        do {
          uVar1 = *param_3;
          param_3 = param_3 + 1;
          *param_1 = uVar1;
          param_1 = param_1 + 1;
          uVar5 = uVar4 - 1;
          bVar3 = 0 < (int)uVar4;
          uVar4 = uVar5;
        } while (uVar5 != 0 && bVar3);
        uVar4 = uVar8 & 7;
        if ((uVar8 & 7) != 0) {
          do {
            uVar2 = *(undefined1 *)param_3;
            param_3 = (undefined8 *)((int)param_3 + 1);
            *(undefined1 *)param_1 = uVar2;
            param_1 = (undefined8 *)((int)param_1 + 1);
            uVar8 = uVar4 - 1;
            bVar3 = 0 < (int)uVar4;
            uVar4 = uVar8;
          } while (uVar8 != 0 && bVar3);
        }
        param_3 = (undefined8 *)((int)param_3 + uVar9);
        param_1 = (undefined8 *)((int)param_1 + uVar6);
        iVar7 = param_6 + -1;
        bVar3 = 0 < param_6;
        uVar8 = param_5;
        param_6 = iVar7;
      } while (iVar7 != 0 && bVar3);
      return;
    }
    do {
      do {
        uVar2 = *(undefined1 *)param_3;
        param_3 = (undefined8 *)((int)param_3 + 1);
        *(undefined1 *)param_1 = uVar2;
        param_1 = (undefined8 *)((int)param_1 + 1);
        uVar4 = uVar8 - 1;
        bVar3 = 0 < (int)uVar8;
        uVar8 = uVar4;
      } while (uVar4 != 0 && bVar3);
      param_3 = (undefined8 *)((int)param_3 + uVar9);
      param_1 = (undefined8 *)((int)param_1 + uVar6);
      iVar7 = param_6 + -1;
      bVar3 = 0 < param_6;
      uVar8 = param_5;
      param_6 = iVar7;
    } while (iVar7 != 0 && bVar3);
  }
  return;
}


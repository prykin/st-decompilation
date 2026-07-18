
void FUN_006db450(undefined4 *param_1,int param_2,undefined2 *param_3,int param_4,int param_5,
                 int param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  bool bVar12;
  
  if (((uint)param_1 & 1) == 0) {
    do {
      iVar4 = param_5;
      if (((uint)param_1 & 2) == 0) {
LAB_006db553:
        bVar12 = SBORROW4(iVar4,1);
        iVar6 = iVar4 + -1;
        iVar5 = iVar6;
        if (iVar6 != 0 && 0 < iVar4) {
          do {
            puVar9 = (undefined1 *)((int)param_3 + 1);
            uVar7 = *(undefined1 *)param_3;
            param_3 = param_3 + 1;
            *param_1 = CONCAT22(CONCAT11(*puVar9,*puVar9),CONCAT11(uVar7,uVar7));
            param_1 = param_1 + 1;
            bVar12 = SBORROW4(iVar5,2);
            iVar6 = iVar5 + -2;
            bVar2 = 1 < iVar5;
            iVar5 = iVar6;
          } while (iVar6 != 0 && bVar2);
        }
        if (bVar12 == iVar6 < 0) {
          uVar7 = *(undefined1 *)param_3;
          param_3 = (undefined2 *)((int)param_3 + 1);
          *(ushort *)param_1 = CONCAT11(uVar7,uVar7);
          param_1 = (undefined4 *)((int)param_1 + 2);
        }
      }
      else {
        uVar7 = *(undefined1 *)param_3;
        param_3 = (undefined2 *)((int)param_3 + 1);
        *(ushort *)param_1 = CONCAT11(uVar7,uVar7);
        param_1 = (undefined4 *)((int)param_1 + 2);
        iVar4 = param_5 + -1;
        if (iVar4 != 0 && 0 < param_5) goto LAB_006db553;
      }
      puVar9 = (undefined1 *)((int)param_3 - param_5);
      puVar10 = (undefined4 *)((int)param_1 + param_5 * -2 + param_2);
      iVar4 = param_5;
      if (((uint)puVar10 & 2) == 0) {
LAB_006db59d:
        bVar12 = SBORROW4(iVar4,1);
        iVar6 = iVar4 + -1;
        iVar5 = iVar6;
        if (iVar6 != 0 && 0 < iVar4) {
          do {
            puVar1 = puVar9 + 1;
            uVar7 = *puVar9;
            puVar9 = puVar9 + 2;
            *puVar10 = CONCAT22(CONCAT11(*puVar1,*puVar1),CONCAT11(uVar7,uVar7));
            puVar10 = puVar10 + 1;
            bVar12 = SBORROW4(iVar5,2);
            iVar6 = iVar5 + -2;
            bVar2 = 1 < iVar5;
            iVar5 = iVar6;
          } while (iVar6 != 0 && bVar2);
        }
        if (bVar12 == iVar6 < 0) {
          uVar7 = *puVar9;
          puVar9 = puVar9 + 1;
          *(ushort *)puVar10 = CONCAT11(uVar7,uVar7);
          puVar10 = (undefined4 *)((int)puVar10 + 2);
        }
      }
      else {
        uVar7 = *puVar9;
        puVar9 = puVar9 + 1;
        *(ushort *)puVar10 = CONCAT11(uVar7,uVar7);
        puVar10 = (undefined4 *)((int)puVar10 + 2);
        iVar4 = param_5 + -1;
        if (iVar4 != 0 && 0 < param_5) goto LAB_006db59d;
      }
      param_1 = (undefined4 *)((int)puVar10 + param_5 * -2 + param_2);
      param_3 = (undefined2 *)(puVar9 + (param_4 - param_5));
      iVar4 = param_6 + -1;
      bVar12 = 0 < param_6;
      param_6 = iVar4;
    } while (iVar4 != 0 && bVar12);
  }
  else {
    do {
      iVar4 = param_5;
      if (((uint)param_1 & 2) == 0) {
        uVar7 = *(undefined1 *)param_3;
        param_3 = (undefined2 *)((int)param_3 + 1);
        *(ushort *)param_1 = CONCAT11(uVar7,uVar7);
        param_1 = (undefined4 *)((int)param_1 + 2);
        iVar4 = param_5 + -1;
        if (iVar4 != 0 && 0 < param_5) goto LAB_006db484;
      }
      else {
LAB_006db484:
        uVar7 = *(undefined1 *)param_3;
        param_3 = (undefined2 *)((int)param_3 + 1);
        *(undefined1 *)param_1 = uVar7;
        puVar10 = (undefined4 *)((int)param_1 + 1);
        iVar5 = iVar4 + -2;
        if (iVar5 != 0 && 1 < iVar4) {
          do {
            iVar4 = iVar5;
            uVar3 = CONCAT31(CONCAT21(*param_3,*(undefined1 *)param_3),uVar7);
            uVar7 = *(undefined1 *)((int)param_3 + 1);
            param_3 = param_3 + 1;
            *puVar10 = uVar3;
            puVar10 = puVar10 + 1;
            iVar5 = iVar4 + -2;
          } while (iVar5 != 0 && 1 < iVar4);
        }
        *(undefined1 *)puVar10 = uVar7;
        param_1 = (undefined4 *)((int)puVar10 + 1);
        if (SBORROW4(iVar4,2) == iVar5 < 0) {
          uVar7 = *(undefined1 *)param_3;
          param_3 = (undefined2 *)((int)param_3 + 1);
          *(ushort *)param_1 = CONCAT11(uVar7,uVar7);
          param_1 = (undefined4 *)((int)puVar10 + 3);
        }
      }
      puVar8 = (undefined2 *)((int)param_3 - param_5);
      puVar11 = (undefined2 *)((int)param_1 + param_5 * -2 + param_2);
      iVar4 = param_5;
      if (((uint)puVar11 & 2) == 0) {
        uVar7 = *(undefined1 *)puVar8;
        puVar8 = (undefined2 *)((int)puVar8 + 1);
        *puVar11 = CONCAT11(uVar7,uVar7);
        puVar11 = puVar11 + 1;
        iVar4 = param_5 + -1;
        if (iVar4 != 0 && 0 < param_5) goto LAB_006db4e1;
      }
      else {
LAB_006db4e1:
        uVar7 = *(undefined1 *)puVar8;
        puVar8 = (undefined2 *)((int)puVar8 + 1);
        *(undefined1 *)puVar11 = uVar7;
        puVar10 = (undefined4 *)((int)puVar11 + 1);
        iVar5 = iVar4 + -2;
        if (iVar5 != 0 && 1 < iVar4) {
          do {
            iVar4 = iVar5;
            uVar3 = CONCAT31(CONCAT21(*puVar8,*(undefined1 *)puVar8),uVar7);
            uVar7 = *(undefined1 *)((int)puVar8 + 1);
            puVar8 = puVar8 + 1;
            *puVar10 = uVar3;
            puVar10 = puVar10 + 1;
            iVar5 = iVar4 + -2;
          } while (iVar5 != 0 && 1 < iVar4);
        }
        *(undefined1 *)puVar10 = uVar7;
        puVar11 = (undefined2 *)((int)puVar10 + 1);
        if (SBORROW4(iVar4,2) == iVar5 < 0) {
          uVar7 = *(undefined1 *)puVar8;
          puVar8 = (undefined2 *)((int)puVar8 + 1);
          *puVar11 = CONCAT11(uVar7,uVar7);
          puVar11 = (undefined2 *)((int)puVar10 + 3);
        }
      }
      param_1 = (undefined4 *)((int)puVar11 + param_5 * -2 + param_2);
      param_3 = (undefined2 *)((int)puVar8 + (param_4 - param_5));
      iVar4 = param_6 + -1;
      bVar12 = 0 < param_6;
      param_6 = iVar4;
    } while (iVar4 != 0 && bVar12);
  }
  return;
}


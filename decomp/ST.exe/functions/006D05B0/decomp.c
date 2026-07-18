
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d05b0(undefined4 *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (0 < param_6) {
    do {
      iVar3 = param_5;
      puVar5 = param_3;
      puVar7 = param_1;
      if (((uint)param_1 & 2) == 0) {
LAB_006d05f0:
        iVar4 = iVar3 + -2;
        while (bVar2 = 1 < iVar3, iVar3 = iVar4, puVar6 = puVar5, puVar8 = puVar7, bVar2) {
          uVar1 = *puVar5;
          puVar6 = (uint *)((int)puVar5 + 2);
          *puVar7 = CONCAT22(*(undefined2 *)(param_7 + (uVar1 >> 8 & 0xff) * 2),
                             *(undefined2 *)(param_7 + (uVar1 & 0xff) * 2));
          puVar8 = puVar7 + 1;
          iVar3 = iVar4 + -2;
          if (iVar4 < 2) break;
          puVar5 = puVar5 + 1;
          *puVar8 = CONCAT22(*(undefined2 *)(param_7 + (uVar1 >> 0x18) * 2),
                             *(undefined2 *)(param_7 + (uVar1 >> 0x10 & 0xff) * 2));
          puVar7 = puVar7 + 2;
          iVar4 = iVar4 + -4;
        }
        if (iVar3 != -2) {
          *(undefined2 *)puVar8 = *(undefined2 *)(param_7 + (uint)(byte)*puVar6 * 2);
        }
      }
      else {
        puVar5 = (uint *)((int)param_3 + 1);
        *(undefined2 *)param_1 = *(undefined2 *)(param_7 + (uint)(byte)*param_3 * 2);
        puVar7 = (undefined4 *)((int)param_1 + 2);
        iVar3 = param_5 + -1;
        if (iVar3 != 0 && 0 < param_5) goto LAB_006d05f0;
      }
      param_3 = (uint *)((int)param_3 + param_4);
      param_1 = (undefined4 *)((int)param_1 + param_2);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}


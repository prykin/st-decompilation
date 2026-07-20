
void FUN_0075d490(AnonShape_0075D490_1FEB0A4F *param_1,int param_2,undefined4 *param_3,
                 undefined4 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *local_8;
  
  puVar3 = (undefined4 *)*param_4;
  iVar4 = param_1->field_01B2 + *(int *)(param_2 + 4);
  uVar5 = (uint)*(byte *)(iVar4 + 0x96);
  bVar1 = *(byte *)(iVar4 + 0x8c);
  uVar8 = (uint)bVar1;
  param_2 = 0;
  if (0 < param_1->field_0126) {
    param_4 = param_3;
    local_8 = puVar3;
    do {
      puVar9 = (undefined1 *)*param_4;
      puVar10 = (undefined4 *)*local_8;
      puVar6 = (undefined4 *)(param_1->field_0068 + (int)puVar10);
      while (puVar10 < puVar6) {
        uVar2 = *puVar9;
        puVar9 = puVar9 + 1;
        if (uVar8 != 0) {
          puVar11 = puVar10;
          for (uVar7 = (uint)(bVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
            puVar11 = puVar11 + 1;
          }
          for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = uVar2;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          puVar10 = (undefined4 *)((int)puVar10 + uVar8);
        }
      }
      if (1 < uVar5) {
        FUN_00759eb0((int)puVar3,param_2,(int)puVar3,param_2 + 1,uVar5 - 1,param_1->field_0068);
      }
      param_2 = param_2 + uVar5;
      param_4 = param_4 + 1;
      local_8 = local_8 + uVar5;
    } while (param_2 < param_1->field_0126);
  }
  return;
}



void FUN_0075d590(AnonShape_0075D590_939A8180 *param_1,undefined4 param_2,int param_3,
                 undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)*param_4;
  param_4 = (undefined4 *)0x0;
  if (0 < param_1->field_0126) {
    iVar4 = param_3 - (int)puVar6;
    do {
      puVar2 = (undefined1 *)*puVar6;
      puVar5 = *(undefined1 **)(iVar4 + (int)puVar6);
      puVar3 = puVar2 + param_1->field_0068;
      for (; puVar2 < puVar3; puVar2 = puVar2 + 2) {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = uVar1;
        puVar2[1] = uVar1;
      }
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar6 = puVar6 + 1;
    } while ((int)param_4 < param_1->field_0126);
  }
  return;
}


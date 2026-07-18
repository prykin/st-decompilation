
int __fastcall FUN_0065dc00(int param_1,undefined4 param_2,uint param_3,char param_4)

{
  char cVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar8;
  int local_8;
  
  local_8 = 0;
  puVar2 = thunk_FUN_0065da10(param_1,param_2);
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x81);
  if ((cVar1 < '\0') || ('\a' < cVar1)) {
    cVar1 = (char)*(undefined4 *)(param_1 + 0x24);
  }
  uVar7 = CONCAT31((int3)((uint)extraout_ECX >> 8),param_4);
  if ((param_4 != '\b') && ((param_4 < '\0' || (cVar1 = param_4, '\b' < param_4)))) {
    param_4 = -1;
    cVar1 = param_4;
  }
  param_4 = cVar1;
  uVar6 = puVar2[3];
  uVar8 = 0;
  if (0 < (int)uVar6) {
    do {
      if (uVar8 < uVar6) {
        uVar7 = puVar2[7];
        puVar3 = (undefined2 *)(puVar2[2] * uVar8 + uVar7);
      }
      else {
        puVar3 = (undefined2 *)0x0;
      }
      piVar4 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uVar7 >> 8),*(undefined1 *)(param_1 + 0x24)
                                                 ),CONCAT22((short)((uint)puVar3 >> 0x10),*puVar3),1
                                        );
      uVar7 = extraout_ECX_00;
      if ((piVar4 != (int *)0x0) &&
         (iVar5 = (**(code **)(*piVar4 + 0xf8))(), uVar7 = extraout_ECX_01, iVar5 != 0)) {
        if (-1 < param_4) {
          uVar6 = (**(code **)(*piVar4 + 0x6c))();
          uVar7 = (int)param_4;
          if ((int)param_4 != uVar6) goto LAB_0065dcca;
        }
        iVar5 = (**(code **)(*piVar4 + 0x2c))();
        uVar6 = thunk_FUN_00674fb0(iVar5);
        uVar7 = param_3;
        if ((param_3 & uVar6) != 0) {
          local_8 = local_8 + 1;
        }
      }
LAB_0065dcca:
      uVar6 = puVar2[3];
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar6);
  }
  FUN_006ae110((byte *)puVar2);
  return local_8;
}


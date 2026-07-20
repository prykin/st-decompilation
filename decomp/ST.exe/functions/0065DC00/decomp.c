
int __fastcall FUN_0065dc00(int param_1,undefined4 param_2,uint param_3,char param_4)

{
  char cVar1;
  uint *groupContent;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  IMAGE_DOS_HEADER *pIVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar8;
  int local_8;
  
  local_8 = 0;
  groupContent = thunk_FUN_0065da10(param_1,param_2);
  if (groupContent == (uint *)0x0) {
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
  uVar5 = groupContent[3];
  uVar8 = 0;
  if (0 < (int)uVar5) {
    do {
      if (uVar8 < uVar5) {
        uVar7 = groupContent[7];
        puVar2 = (undefined2 *)(groupContent[2] * uVar8 + uVar7);
      }
      else {
        puVar2 = (undefined2 *)0x0;
      }
      piVar3 = (int *)STAllPlayersC::GetObjPtr
                                (g_sTAllPlayers_007FA174,
                                 CONCAT31((int3)(uVar7 >> 8),*(undefined1 *)(param_1 + 0x24)),
                                 CONCAT22((short)((uint)puVar2 >> 0x10),*puVar2),CASE_1);
      uVar7 = extraout_ECX_00;
      if ((piVar3 != (int *)0x0) &&
         (iVar4 = (**(code **)(*piVar3 + 0xf8))(), uVar7 = extraout_ECX_01, iVar4 != 0)) {
        if (-1 < param_4) {
          uVar5 = (**(code **)(*piVar3 + 0x6c))();
          uVar7 = (int)param_4;
          if ((int)param_4 != uVar5) goto LAB_0065dcca;
        }
        iVar4 = (**(code **)(*piVar3 + 0x2c))();
        pIVar6 = thunk_FUN_00674fb0(iVar4);
        uVar7 = param_3;
        if ((param_3 & (uint)pIVar6) != 0) {
          local_8 = local_8 + 1;
        }
      }
LAB_0065dcca:
      uVar5 = groupContent[3];
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar5);
  }
  FUN_006ae110((byte *)groupContent);
  return local_8;
}


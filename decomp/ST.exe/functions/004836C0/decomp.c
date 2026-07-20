
uint __fastcall FUN_004836c0(AnonShape_004836C0_617DC527 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *pSVar4;
  undefined2 uVar6;
  uint uVar5;
  
  sVar1 = *(short *)(param_1 + 1);
  sVar2 = param_1->field_0802;
  sVar3 = *(short *)&param_1->field_0x800;
  uVar5 = CONCAT22((short)((uint)*(int *)&param_1->field_0x7fc >> 0x10),sVar3);
  if (*(int *)&param_1->field_0x7fc == 3) {
    if (((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) ||
       ((sVar2 < 0 || (((SHORT_007fb242 <= sVar2 || (sVar1 < 0)) || (SHORT_007fb244 <= sVar1))))))
    goto cf_common_exit_004837CF;
    pSVar4 = g_worldCells
             [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar2 + (int)sVar3].
             objects[1];
  }
  else {
    if ((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar2 < 0)) ||
       (((SHORT_007fb242 <= sVar2 || (sVar1 < 0)) || (SHORT_007fb244 <= sVar1))))
    goto cf_common_exit_004837CF;
    pSVar4 = g_worldCells
             [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar2 + (int)sVar3].
             objects[0];
  }
  uVar5 = 0;
  if (pSVar4 != (STWorldObject *)0x0) {
    uVar6 = (undefined2)((uint)pSVar4 >> 0x10);
    uVar5 = (**(code **)(*(int *)param_1 + 0x10))
                      (CONCAT22(uVar6,param_1->field_0041),CONCAT22(uVar6,param_1->field_0043),
                       CONCAT22(uVar6,param_1->field_0045),
                       CONCAT22(uVar6,*(undefined2 *)&pSVar4[1].field_0x1d),
                       CONCAT22(sVar2 >> 0xf,*(undefined2 *)&pSVar4[1].field_0x1f),
                       CONCAT22(sVar2 >> 0xf,*(undefined2 *)((int)&pSVar4[1].value_20 + 1)));
    return uVar5;
  }
cf_common_exit_004837CF:
  return uVar5 & 0xffff0000;
}


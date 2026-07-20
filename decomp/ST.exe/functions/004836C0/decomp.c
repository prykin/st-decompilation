
uint __fastcall FUN_004836c0(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined2 uVar6;
  uint uVar5;
  
  sVar1 = (short)param_1[0x201];
  sVar2 = *(short *)((int)param_1 + 0x802);
  sVar3 = (short)param_1[0x200];
  uVar5 = CONCAT22((short)((uint)param_1[0x1ff] >> 0x10),sVar3);
  if (param_1[0x1ff] == 3) {
    if (((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) ||
       ((sVar2 < 0 || (((SHORT_007fb242 <= sVar2 || (sVar1 < 0)) || (SHORT_007fb244 <= sVar1))))))
    goto cf_common_exit_004837CF;
    iVar4 = *(int *)(DAT_007fb248 + 4 +
                    ((int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar2 +
                    (int)sVar3) * 8);
  }
  else {
    if ((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar2 < 0)) ||
       (((SHORT_007fb242 <= sVar2 || (sVar1 < 0)) || (SHORT_007fb244 <= sVar1))))
    goto cf_common_exit_004837CF;
    iVar4 = *(int *)(DAT_007fb248 +
                    ((int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar2 +
                    (int)sVar3) * 8);
  }
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar6 = (undefined2)((uint)iVar4 >> 0x10);
    uVar5 = (**(code **)(*param_1 + 0x10))
                      (CONCAT22(uVar6,*(undefined2 *)((int)param_1 + 0x41)),
                       CONCAT22(uVar6,*(undefined2 *)((int)param_1 + 0x43)),
                       CONCAT22(uVar6,*(undefined2 *)((int)param_1 + 0x45)),
                       CONCAT22(uVar6,*(undefined2 *)(iVar4 + 0x41)),
                       CONCAT22(sVar2 >> 0xf,*(undefined2 *)(iVar4 + 0x43)),
                       CONCAT22(sVar2 >> 0xf,*(undefined2 *)(iVar4 + 0x45)));
    return uVar5;
  }
cf_common_exit_004837CF:
  return uVar5 & 0xffff0000;
}


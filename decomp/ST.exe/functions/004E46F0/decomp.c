
undefined4 __fastcall FUN_004e46f0(int *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  STGroupBoatC *pSVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  int local_8;
  
  if (param_1[0x135] + 0x19U <= *(uint *)(DAT_00802a38 + 0xe4)) {
    iVar6 = param_1[0x136];
    param_1[0x135] = *(uint *)(DAT_00802a38 + 0xe4);
    local_8 = 0;
    do {
      iVar1 = iVar6 % 0x1d + -0xf + param_1[0x16c];
      iVar3 = iVar6 / 0x1d + -0xf + param_1[0x16d];
      if ((((-1 < iVar1) && (iVar1 < SHORT_007fb240)) && (-1 < iVar3)) && (iVar3 < SHORT_007fb242))
      {
        iVar3 = SHORT_007fb240 * iVar3 + DAT_007fa168;
        bVar2 = *(byte *)(iVar3 + iVar1);
        uVar5 = (uint)bVar2;
        if (uVar5 != 0) {
          if (9 < uVar5) {
            uVar5 = 10;
          }
          *(byte *)(iVar3 + iVar1) = bVar2 - (char)uVar5;
          iVar1 = param_1[0x134];
          local_8 = local_8 + uVar5;
          param_1[0x134] = iVar1 + uVar5;
          if (99 < (int)(iVar1 + uVar5)) {
            thunk_FUN_004e4670((int)param_1);
          }
        }
      }
      iVar6 = iVar6 + 1;
      if (0x348 < iVar6) {
        iVar6 = 0;
      }
    } while ((iVar6 != param_1[0x136]) && (local_8 < 10));
    param_1[0x136] = iVar6;
    if ((local_8 == 0) && (param_1[0x137] == 0)) {
      if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
        param_1[0x137] = 1;
        pSVar4 = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1[4] >> 8),(char)param_1[9]),
                                    CONCAT22((short)((uint)param_1[9] >> 0x10),(short)param_1[0xc]))
        ;
        if ((pSVar4 != (STGroupBoatC *)0x0) &&
           ((undefined4 *)pSVar4->field_001C != (undefined4 *)0x0)) {
          local_10 = param_1[6];
          local_12 = *(undefined2 *)((int)param_1 + 0x32);
          local_18 = 0x5d99;
          local_14 = 1;
          (*(code *)**(undefined4 **)pSVar4->field_001C)(local_28);
        }
        (**(code **)(*param_1 + 0x90))(4,0x3cf);
      }
    }
  }
  return 0;
}


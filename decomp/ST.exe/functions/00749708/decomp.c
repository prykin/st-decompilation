
uint FUN_00749708(undefined4 *param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_8;

  puVar3 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 1;
  }
  else {
    puVar6 = (undefined4 *)*param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar4 = (**(code **)(*param_2 + 0x1c))(param_2,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
    if (param_3 != 0) {
      puVar6 = (undefined4 *)*param_1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar4 = (**(code **)(*param_2 + 0xc))
                        (param_2,*puVar6,puVar6[1],puVar6[2],puVar6[3],param_1[1],param_1[2]);
      if ((-1 < (int)uVar4) && (local_8 = 0, param_1[3] != 0)) {
        param_1 = (undefined4 *)0x0;
        while( true ) {
          puVar5 = (undefined4 *)(puVar3[4] + (int)param_1);
          puVar6 = (undefined4 *)puVar5[5];
          puVar1 = (undefined4 *)*puVar3;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar4 = (**(code **)(*param_2 + 0x14))
                            (param_2,*puVar1,puVar1[1],puVar1[2],puVar1[3],*puVar5,puVar5[1],
                             puVar5[2],puVar5[3],puVar5[4],*puVar6,puVar6[1],puVar6[2],puVar6[3],
                             puVar5[6]);
          if ((int)uVar4 < 0) break;
          param_3 = 0;
          puVar6 = (undefined4 *)(puVar3[4] + (int)param_1);
          if (puVar6[7] != 0) {
            do {
              puVar1 = *(undefined4 **)(puVar6[8] + 4 + param_3 * 8);
              puVar5 = *(undefined4 **)(puVar6[8] + param_3 * 8);
              puVar2 = (undefined4 *)*puVar3;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              uVar4 = (**(code **)(*param_2 + 0x18))
                                (param_2,*puVar2,puVar2[1],puVar2[2],puVar2[3],*puVar6,*puVar5,
                                 puVar5[1],puVar5[2],puVar5[3],*puVar1,puVar1[1],puVar1[2],puVar1[3]
                                );
              if ((int)uVar4 < 0) goto LAB_0074982d;
              param_3 = param_3 + 1;
              puVar6 = (undefined4 *)(puVar3[4] + (int)param_1);
            } while (param_3 < (uint)puVar6[7]);
          }
          if ((int)uVar4 < 0) break;
          local_8 = local_8 + 1;
          param_1 = param_1 + 9;
          if ((uint)puVar3[3] <= local_8) break;
        }
      }
    }
LAB_0074982d:
    uVar4 = -(uint)(uVar4 != 0x80070002) & uVar4;
  }
  return uVar4;
}


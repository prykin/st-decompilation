
undefined4 FUN_004e76e0(int param_1,uint *param_2,undefined1 param_3)

{
  int *piVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *local_c;
  
  if ((param_1 < 0) || (7 < param_1)) {
    return 0;
  }
  uVar4 = GetPlayerRaceId((char)param_1);
  iVar5 = (uVar4 & 0xff) - 1;
  puVar10 = &DAT_00801020;
  for (iVar8 = 0xc3; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  DAT_00801020 = param_2;
  DAT_00801024 = param_3;
  do {
    _param_3 = 0;
    puVar10 = &DAT_00800bd0;
    for (iVar8 = 0xc3; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    if (DAT_00801020 == (uint *)0x0) {
      return 0;
    }
    param_2 = (uint *)&DAT_00801020;
    do {
      thunk_FUN_004e5b80(param_1,*param_2,(uint)(byte)param_2[1]);
      pbVar6 = &DAT_007c0dd4;
      do {
        bVar2 = pbVar6[1];
        iVar8 = 1;
        while( true ) {
          if ((bVar2 == 0) || (2 < iVar8)) goto LAB_004e77b8;
          if ((uint)pbVar6[iVar8] == *param_2) break;
          bVar2 = pbVar6[iVar8 + 1];
          iVar8 = iVar8 + 1;
        }
        *(undefined4 *)(param_1 * 0xa62 + 0x7f53b3 + (uint)*pbVar6 * 4) = 0;
LAB_004e77b8:
        pbVar6 = pbVar6 + 3;
      } while ((int)pbVar6 < 0x7c0e4c);
      iVar8 = 0x42;
      pbVar6 = &DAT_007c0e4c + iVar5 * 0xc6;
      do {
        bVar2 = pbVar6[1];
        iVar7 = 1;
        while( true ) {
          if ((bVar2 == 0) || (2 < iVar7)) goto LAB_004e7823;
          if ((uint)pbVar6[iVar7] == *param_2) break;
          bVar2 = pbVar6[iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        *(undefined4 *)(param_1 * 0xa62 + 0x7f53b3 + (uint)*pbVar6 * 4) = 0;
LAB_004e7823:
        pbVar6 = pbVar6 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      puVar9 = (uint *)(&PTR_DAT_007c0dc8)[iVar5];
      if (*puVar9 != 0) {
        piVar11 = (int *)((int)puVar9 + 5);
        local_c = (uint *)((int)&DAT_00800bd0 + _param_3 * 5);
        do {
          iVar8 = *piVar11;
          iVar7 = 0;
          puVar3 = puVar9;
          while( true ) {
            if ((iVar8 == 0) || (3 < iVar7)) goto LAB_004e789c;
            if ((*(uint *)((int)puVar3 + 5) == *param_2) &&
               (*(char *)((int)puVar3 + 9) == (char)param_2[1])) break;
            iVar8 = *(int *)((int)puVar3 + 10);
            iVar7 = iVar7 + 1;
            puVar3 = (uint *)((int)puVar3 + 5);
          }
          *local_c = *puVar9;
          *(char *)(local_c + 1) = (char)puVar9[1];
          _param_3 = _param_3 + 1;
          local_c = (uint *)((int)local_c + 5);
LAB_004e789c:
          piVar1 = (int *)((int)puVar9 + 0x19);
          puVar9 = (uint *)((int)puVar9 + 0x19);
          piVar11 = (int *)((int)piVar11 + 0x19);
        } while (*piVar1 != 0);
      }
      param_2 = (uint *)((int)param_2 + 5);
    } while (*param_2 != 0);
    if (_param_3 == 0) {
      return 0;
    }
    puVar10 = &DAT_00800bd0;
    puVar12 = &DAT_00801020;
    for (iVar8 = 0xc3; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
  } while( true );
}


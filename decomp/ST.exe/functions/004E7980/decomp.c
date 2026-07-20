
undefined4 FUN_004e7980(uint *param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *local_1c;
  int local_10;
  int local_c;
  
  puVar5 = param_1;
  if (((int)param_1 < 0) || (7 < (int)param_1)) {
    return 0;
  }
  uVar6 = thunk_FUN_004406c0((char)param_1);
  iVar7 = (uVar6 & 0xff) - 1;
  puVar11 = &DAT_00801020;
  for (iVar10 = 0xc3; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  DAT_00801020 = param_2;
  DAT_00801024 = param_3;
  do {
    local_c = 0;
    puVar11 = &DAT_00800bd0;
    for (iVar10 = 0xc3; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    if (DAT_00801020 == 0) {
      return 0;
    }
    param_1 = (uint *)&DAT_00801020;
    do {
      thunk_FUN_004e5af0((int)puVar5,*param_1,(uint)(byte)param_1[1]);
      pbVar12 = &DAT_007c0dd4;
      do {
        bVar2 = pbVar12[1];
        for (iVar10 = 1; (bVar2 != 0 && (iVar10 < 3)); iVar10 = iVar10 + 1) {
          if ((*(byte *)((int)puVar5 * 0xa62 + 0x7f510b + ((int)(pbVar12[iVar10] ^ 7) >> 3)) >>
               ((pbVar12[iVar10] ^ 7) & 7) & 1) == 0) goto LAB_004e7a7f;
          bVar2 = pbVar12[iVar10 + 1];
        }
        *(undefined4 *)((int)puVar5 * 0xa62 + 0x7f53b3 + (uint)*pbVar12 * 4) = 1;
LAB_004e7a7f:
        pbVar12 = pbVar12 + 3;
      } while ((int)pbVar12 < 0x7c0e4c);
      param_2 = 0x42;
      pbVar12 = &DAT_007c0e4c + iVar7 * 0xc6;
      do {
        bVar2 = pbVar12[1];
        for (iVar10 = 1; (bVar2 != 0 && (iVar10 < 3)); iVar10 = iVar10 + 1) {
          if ((*(byte *)((int)puVar5 * 0xa62 + 0x7f510b + ((int)(pbVar12[iVar10] ^ 7) >> 3)) >>
               ((pbVar12[iVar10] ^ 7) & 7) & 1) == 0) goto LAB_004e7b13;
          bVar2 = pbVar12[iVar10 + 1];
        }
        *(undefined4 *)((int)puVar5 * 0xa62 + 0x7f53b3 + (uint)*pbVar12 * 4) = 1;
LAB_004e7b13:
        pbVar12 = pbVar12 + 3;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      piVar13 = (int *)(&PTR_DAT_007c0dc8)[iVar7];
      if (*piVar13 != 0) {
        _param_3 = 0;
        param_2 = 5;
        local_1c = (undefined4 *)((int)&DAT_00800bd0 + local_c * 5);
        do {
          if ((*(uint *)((int)piVar13 + _param_3) == *param_1) &&
             (*(char *)((int)piVar13 + _param_3 + 4) == (char)param_1[1])) {
            bVar4 = true;
            local_10 = 0;
            iVar10 = _param_3;
            if (*(int *)((int)piVar13 + param_2) != 0) {
              do {
                if (3 < local_10) break;
                puVar3 = (&PTR_DAT_007c0dc8)[iVar7];
                iVar8 = thunk_FUN_004e60d0((int)puVar5,*(int *)(puVar3 + iVar10 + 5));
                if (iVar8 < (int)(uint)(byte)puVar3[iVar10 + 9]) {
                  bVar4 = false;
                }
                iVar8 = iVar10 + 10;
                local_10 = local_10 + 1;
                iVar10 = iVar10 + 5;
              } while (*(int *)(puVar3 + iVar8) != 0);
              if (!bVar4) goto LAB_004e7bd3;
            }
            thunk_FUN_004e5d50((int)puVar5,*param_1);
          }
LAB_004e7bd3:
          iVar10 = 0;
          piVar13 = (int *)(&PTR_DAT_007c0dc8)[iVar7];
          if (*(int *)((int)piVar13 + param_2) != 0) {
            puVar9 = (uint *)((int)piVar13 + _param_3 + 5);
            do {
              if (3 < iVar10) break;
              if ((*puVar9 == *param_1) && ((char)puVar9[1] == (char)param_1[1])) {
                *local_1c = *(undefined4 *)((int)piVar13 + _param_3);
                *(undefined1 *)(local_1c + 1) = *(undefined1 *)((int)piVar13 + _param_3 + 4);
                local_c = local_c + 1;
                local_1c = (undefined4 *)((int)local_1c + 5);
                break;
              }
              piVar1 = (int *)((int)puVar9 + 5);
              puVar9 = (uint *)((int)puVar9 + 5);
              iVar10 = iVar10 + 1;
            } while (*piVar1 != 0);
          }
          param_2 = param_2 + 0x19;
          _param_3 = _param_3 + 0x19;
        } while (*(int *)((int)piVar13 + _param_3) != 0);
      }
      piVar13 = (int *)((int)param_1 + 5);
      param_1 = (uint *)((int)param_1 + 5);
    } while (*piVar13 != 0);
    if (local_c == 0) {
      return 0;
    }
    puVar11 = &DAT_00800bd0;
    puVar14 = &DAT_00801020;
    for (iVar10 = 0xc3; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar14 = puVar14 + 1;
    }
  } while( true );
}


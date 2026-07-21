
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d13c0(uint *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7,byte param_8)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint *puVar6;

  if (0 < param_6) {
    do {
      pbVar5 = param_3;
      puVar6 = param_1;
      iVar3 = param_5;
      if (((uint)param_1 & 2) == 0) {
joined_r0x006d1410:
        iVar4 = iVar3 + -2;
        if (1 < iVar3) {
          while( true ) {
            bVar1 = *pbVar5;
            iVar3 = iVar4;
            while (bVar1 == param_8) {
              if (pbVar5[1] != param_8) {
                *(ushort *)((int)puVar6 + 2) = *(ushort *)(param_7 + (uint)pbVar5[1] * 2);
                pbVar5 = pbVar5 + 2;
                puVar6 = puVar6 + 1;
                goto joined_r0x006d1410;
              }
              pbVar5 = pbVar5 + 2;
              puVar6 = puVar6 + 1;
              iVar4 = iVar3 + -2;
              if (iVar3 < 2) goto LAB_006d147f;
              iVar3 = iVar4;
              bVar1 = *pbVar5;
            }
            uVar2 = *(ushort *)(param_7 + (uint)bVar1 * 2);
            if (pbVar5[1] != param_8) break;
            pbVar5 = pbVar5 + 2;
            *(ushort *)puVar6 = uVar2;
            puVar6 = puVar6 + 1;
            iVar4 = iVar3 + -2;
            if (iVar3 < 2) goto LAB_006d147f;
          }
          *puVar6 = CONCAT22(uVar2,*(undefined2 *)(param_7 + (uint)pbVar5[1] * 2)) << 0x10 |
                    (uint)uVar2;
          pbVar5 = pbVar5 + 2;
          puVar6 = puVar6 + 1;
          goto joined_r0x006d1410;
        }
LAB_006d147f:
        if ((iVar4 != -2) && (*pbVar5 != param_8)) {
          *(ushort *)puVar6 = *(ushort *)(param_7 + (uint)*pbVar5 * 2);
        }
      }
      else {
        pbVar5 = param_3 + 1;
        if (*param_3 != param_8) {
          *(undefined2 *)param_1 = *(undefined2 *)(param_7 + (uint)*param_3 * 2);
        }
        puVar6 = (uint *)((int)param_1 + 2);
        iVar3 = param_5 + -1;
        if (iVar3 != 0 && 0 < param_5) goto joined_r0x006d1410;
      }
      param_3 = param_3 + param_4;
      param_1 = (uint *)((int)param_1 + param_2);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}


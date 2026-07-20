
void FUN_004e6310(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  DArrayTy *pDVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_10;
  int local_c;
  AnonShape_00494AE0_E545732F *local_8;
  
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    iVar11 = param_1 * 0xa62;
    *(uint *)(iVar11 + 0x7f5147 + param_2 * 4) = param_3;
    pbVar2 = (byte *)(iVar11 + 0x7f511f + ((int)(param_2 ^ 7) >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << ((param_2 ^ 7) & 7));
    if (*(int *)(iVar11 + 0x7f5147 + param_2 * 4) != 0) {
      iVar3 = g_playerRuntime[param_1].raceId - 1;
      piVar4 = (int *)(&PTR_DAT_007c0dc8)[iVar3];
      if (*piVar4 != 0) {
        iVar9 = 0;
        local_10 = 5;
LAB_004e63ab:
        if ((*(int *)(iVar11 + 0x7f5147 + *(uint *)(iVar9 + (int)piVar4) * 4) ==
             *(byte *)(iVar9 + 4 + (int)piVar4) - 1) &&
           (iVar8 = 0, *(int *)(local_10 + (int)piVar4) != 0)) {
          puVar5 = (uint *)(iVar9 + 5 + (int)piVar4);
          puVar6 = puVar5;
          do {
            if (3 < iVar8) break;
            if ((*puVar6 == param_2) && ((byte)puVar6[1] == param_3)) {
              iVar8 = 0;
              goto LAB_004e63fe;
            }
            piVar1 = (int *)((int)puVar6 + 5);
            puVar6 = (uint *)((int)puVar6 + 5);
            iVar8 = iVar8 + 1;
          } while (*piVar1 != 0);
        }
        goto cf_continue_loop_004E643C;
      }
LAB_004e645f:
      if (g_playerRuntime[param_1].field2282_0x9ce != (DArrayTy *)0x0) {
        (g_playerRuntime[param_1].field2282_0x9ce)->iteratorIndex = 0;
        iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)
                              g_playerRuntime[param_1].field2282_0x9ce,&local_c);
        while (-1 < iVar11) {
          thunk_FUN_004dd880(local_c);
          iVar11 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)
                                g_playerRuntime[param_1].field2282_0x9ce,&local_c);
        }
      }
      if (((((param_2 == 0x1d) || (param_2 == 0x89)) || (param_2 == 0x46)) ||
          ((param_2 == 0x4a || (param_2 == 0x12)))) &&
         ((pDVar7 = g_playerRuntime[param_1].objects, pDVar7 != (DArrayTy *)0x0 &&
          (uVar10 = 0, pDVar7->count != 0)))) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar7,uVar10,&local_8);
          if ((local_8 != (AnonShape_00494AE0_E545732F *)0x0) &&
             (((iVar11 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar11 == 0x36 ||
               (iVar11 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar11 == 0x5d)) ||
              (iVar11 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar11 == 0x3d)))) {
            thunk_FUN_004e4d60((AnonShape_004E4D60_97789D69 *)local_8);
            thunk_FUN_004e4f30((AnonShape_004E4F30_490004C0 *)local_8);
          }
          pDVar7 = g_playerRuntime[param_1].objects;
          uVar10 = uVar10 + 1;
        } while (uVar10 < pDVar7->count);
      }
      if ((((((param_2 == 0x3c) || (param_2 == 0x91)) || (param_2 == 0x9a)) ||
           ((param_2 == 0x4b || (param_2 == 0x4c)))) || (param_2 == 0x41)) &&
         ((pDVar7 = g_playerRuntime[param_1].objects, pDVar7 != (DArrayTy *)0x0 &&
          (uVar10 = 0, pDVar7->count != 0)))) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar7,uVar10,&local_8);
          if ((local_8 != (AnonShape_00494AE0_E545732F *)0x0) &&
             (((iVar11 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar11 == 5 ||
               (iVar11 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar11 == 0x21)) ||
              (iVar11 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar11 == 0x11)))) {
            thunk_FUN_00494ae0(local_8);
          }
          pDVar7 = g_playerRuntime[param_1].objects;
          uVar10 = uVar10 + 1;
        } while (uVar10 < pDVar7->count);
      }
    }
    thunk_FUN_004e6680(param_1);
    thunk_FUN_0043fc50(CASE_13,0);
  }
  return;
  while( true ) {
    if (*(int *)(iVar11 + 0x7f5147 + *puVar5 * 4) < (int)(uint)(byte)puVar5[1])
    goto cf_continue_loop_004E643C;
    piVar1 = (int *)((int)puVar5 + 5);
    puVar5 = (uint *)((int)puVar5 + 5);
    iVar8 = iVar8 + 1;
    if (*piVar1 == 0) break;
LAB_004e63fe:
    if (3 < iVar8) break;
  }
  uVar10 = *(uint *)(iVar9 + (int)piVar4) ^ 7;
  pbVar2 = (byte *)(iVar11 + 0x7f511f + ((int)uVar10 >> 3));
  *pbVar2 = *pbVar2 | '\x01' << (uVar10 & 7);
cf_continue_loop_004E643C:
  local_10 = local_10 + 0x19;
  iVar9 = iVar9 + 0x19;
  piVar4 = (int *)(&PTR_DAT_007c0dc8)[iVar3];
  if (*(int *)(iVar9 + (int)piVar4) == 0) goto LAB_004e645f;
  goto LAB_004e63ab;
}


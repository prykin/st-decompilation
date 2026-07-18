
void thunk_FUN_004e6310(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    iVar10 = param_1 * 0xa62;
    *(uint *)((int)&DAT_007f5147 + param_2 * 4 + iVar10) = param_3;
    pbVar3 = (byte *)((int)&DAT_007f511f + ((int)(param_2 ^ 7) >> 3) + iVar10);
    *pbVar3 = *pbVar3 & ~('\x01' << ((param_2 ^ 7) & 7));
    if (*(int *)((int)&DAT_007f5147 + param_2 * 4 + iVar10) != 0) {
      bVar2 = (&DAT_007f4e20)[iVar10];
      piVar4 = (int *)(&PTR_DAT_007c0dc8)[bVar2 - 1];
      if (*piVar4 != 0) {
        iVar8 = 0;
        iStack_10 = 5;
LAB_004e63ab:
        if ((*(int *)((int)&DAT_007f5147 + *(uint *)(iVar8 + (int)piVar4) * 4 + iVar10) ==
             *(byte *)(iVar8 + 4 + (int)piVar4) - 1) &&
           (iVar7 = 0, *(int *)(iStack_10 + (int)piVar4) != 0)) {
          puVar5 = (uint *)(iVar8 + 5 + (int)piVar4);
          puVar6 = puVar5;
          do {
            if (3 < iVar7) break;
            if ((*puVar6 == param_2) && ((byte)puVar6[1] == param_3)) {
              iVar7 = 0;
              goto LAB_004e63fe;
            }
            piVar1 = (int *)((int)puVar6 + 5);
            puVar6 = (uint *)((int)puVar6 + 5);
            iVar7 = iVar7 + 1;
          } while (*piVar1 != 0);
        }
        goto LAB_004e643c;
      }
LAB_004e645f:
      if (*(int *)(&DAT_007f57ee + iVar10) != 0) {
        *(undefined4 *)(*(int *)(&DAT_007f57ee + iVar10) + 4) = 0;
        iVar8 = FUN_006b1190(*(int *)(&DAT_007f57ee + iVar10),&iStack_c);
        while (-1 < iVar8) {
          thunk_FUN_004dd880(iStack_c);
          iVar8 = FUN_006b1190(*(int *)(&DAT_007f57ee + iVar10),&iStack_c);
        }
      }
      if (((((param_2 == 0x1d) || (param_2 == 0x89)) || (param_2 == 0x46)) ||
          ((param_2 == 0x4a || (param_2 == 0x12)))) &&
         ((iVar8 = *(int *)((int)&DAT_007f4e29 + iVar10), iVar8 != 0 &&
          (uVar9 = 0, *(int *)(iVar8 + 0xc) != 0)))) {
        do {
          FUN_006acc70(iVar8,uVar9,&piStack_8);
          if ((piStack_8 != (int *)0x0) &&
             (((iVar8 = (**(code **)(*piStack_8 + 0x2c))(), iVar8 == 0x36 ||
               (iVar8 = (**(code **)(*piStack_8 + 0x2c))(), iVar8 == 0x5d)) ||
              (iVar8 = (**(code **)(*piStack_8 + 0x2c))(), iVar8 == 0x3d)))) {
            thunk_FUN_004e4d60(piStack_8);
            thunk_FUN_004e4f30(piStack_8);
          }
          iVar8 = *(int *)((int)&DAT_007f4e29 + iVar10);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(iVar8 + 0xc));
      }
      if ((((((param_2 == 0x3c) || (param_2 == 0x91)) || (param_2 == 0x9a)) ||
           ((param_2 == 0x4b || (param_2 == 0x4c)))) || (param_2 == 0x41)) &&
         ((iVar8 = *(int *)((int)&DAT_007f4e29 + iVar10), iVar8 != 0 &&
          (uVar9 = 0, *(int *)(iVar8 + 0xc) != 0)))) {
        do {
          FUN_006acc70(iVar8,uVar9,&piStack_8);
          if ((piStack_8 != (int *)0x0) &&
             (((iVar8 = (**(code **)(*piStack_8 + 0x2c))(), iVar8 == 5 ||
               (iVar8 = (**(code **)(*piStack_8 + 0x2c))(), iVar8 == 0x21)) ||
              (iVar8 = (**(code **)(*piStack_8 + 0x2c))(), iVar8 == 0x11)))) {
            thunk_FUN_00494ae0((int)piStack_8);
          }
          iVar8 = *(int *)((int)&DAT_007f4e29 + iVar10);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(iVar8 + 0xc));
      }
    }
    thunk_FUN_004e6680(param_1);
    thunk_FUN_0043fc50(0x13,0);
  }
  return;
  while( true ) {
    if (*(int *)((int)&DAT_007f5147 + *puVar5 * 4 + iVar10) < (int)(uint)(byte)puVar5[1])
    goto LAB_004e643c;
    piVar1 = (int *)((int)puVar5 + 5);
    puVar5 = (uint *)((int)puVar5 + 5);
    iVar7 = iVar7 + 1;
    if (*piVar1 == 0) break;
LAB_004e63fe:
    if (3 < iVar7) break;
  }
  uVar9 = *(uint *)(iVar8 + (int)piVar4) ^ 7;
  pbVar3 = (byte *)((int)&DAT_007f511f + ((int)uVar9 >> 3) + iVar10);
  *pbVar3 = *pbVar3 | '\x01' << (uVar9 & 7);
LAB_004e643c:
  iStack_10 = iStack_10 + 0x19;
  iVar8 = iVar8 + 0x19;
  piVar4 = (int *)(&PTR_DAT_007c0dc8)[bVar2 - 1];
  if (*(int *)(iVar8 + (int)piVar4) == 0) goto LAB_004e645f;
  goto LAB_004e63ab;
}


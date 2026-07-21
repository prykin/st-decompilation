
undefined4 __cdecl FUN_006d4cf0(AnonShape_006D4CF0_8A8947BE *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;

  iVar5 = 4;
  bVar9 = true;
  piVar7 = param_2 + 0xb;
  piVar8 = &DAT_007a1358;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *piVar7 == *piVar8;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  } while (bVar9);
  if (bVar9) {
    if ((uint)param_2[0x10] < 0x58) {
      return 0x80004005;
    }
    iVar5 = 4;
    bVar9 = true;
    piVar7 = param_2;
    piVar8 = &DAT_007a1348;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar9 = *piVar7 == *piVar8;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar9);
    if (bVar9) {
      piVar7 = (int *)param_2[0x11];
      if ((((((piVar7[0xc] == 0x28) && (0 < piVar7[0xd])) && (piVar7[0xe] != 0)) &&
           (((short)piVar7[0xf] == 1 &&
            (uVar4 = FUN_00749989((char *)(param_2 + 4)), (short)uVar4 != -1)))) &&
          ((piVar7[0x10] == 0 ||
           ((piVar7[0x10] == 3 &&
            ((*(short *)((int)piVar7 + 0x3e) == 0x10 || (*(short *)((int)piVar7 + 0x3e) == 0x20)))))
           ))) && ((piVar7[0x11] == 0 ||
                   (iVar5 = FUN_00749841((AnonShape_006B5B10_E0D06CF1 *)(piVar7 + 0xc)),
                   piVar7[0x11] == iVar5)))) {
        uVar3 = *(ushort *)((int)piVar7 + 0x3e);
        iVar5 = param_1->field_0028;
        if ((int)(uint)uVar3 <= *(int *)(iVar5 + 0x20)) {
          param_1->field_0090 = piVar7[2] - *piVar7;
          iVar1 = piVar7[3];
          iVar2 = piVar7[1];
          param_1->field_0094 = iVar1 - iVar2;
          if ((param_1->field_0090 == 0) || (iVar1 - iVar2 == 0)) {
            param_1->field_0090 = piVar7[0xd];
            uVar6 = piVar7[0xe] >> 0x1f;
            param_1->field_0094 = (piVar7[0xe] ^ uVar6) - uVar6;
          }
          if ((param_1->field_0004 & 0x8000000) == 0) {
            param_1->field_0008 = 0;
            param_1->field_000C = 0;
            param_1->field_0010 = param_1->field_0090;
            param_1->field_0014 = param_1->field_0094;
          }
          uVar3 = *(ushort *)((int)piVar7 + 0x3e);
          if (uVar3 == 8) {
            iVar5 = piVar7[0x14];
            if (iVar5 == 0) {
              iVar5 = 0x100;
            }
            if (iVar5 * 4 + 0x58U <= (uint)param_2[0x10]) {
              piVar7 = piVar7 + 0x16;
              piVar8 = (int *)&param_1[1].field_0x70;
              for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar8 = *piVar7;
                piVar7 = piVar7 + 1;
                piVar8 = piVar8 + 1;
              }
            }
            return 0;
          }
        }
        if (*(uint *)(iVar5 + 0x20) == (uint)uVar3) {
          if (uVar3 != 0x10) {
            return 0;
          }
          if (piVar7[0x10] == 3) {
            if ((piVar7[0x16] == *(int *)(iVar5 + 0x4c4)) &&
               (piVar7[0x17] == *(int *)(iVar5 + 0x4c8))) {
              if (piVar7[0x18] == *(int *)(iVar5 + 0x4cc)) {
                return 0;
              }
              return 0x80070057;
            }
          }
          else if (((*(int *)(iVar5 + 0x4c4) == 0x7c00) && (*(int *)(iVar5 + 0x4c8) == 0x3e0)) &&
                  (*(int *)(iVar5 + 0x4cc) == 0x1f)) {
            return 0;
          }
        }
      }
    }
  }
  return 0x80070057;
}


#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_006d4cf0(AnonShape_006D4CF0_8A8947BE *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  int *piVar7;

  iVar6 = 4;
  bVar10 = true;
  piVar8 = param_2 + 0xb;
  piVar9 = &DAT_007a1358;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar10 = *piVar8 == *piVar9;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  } while (bVar10);
  if (bVar10) {
    if ((uint)param_2[0x10] < 0x58) {
      return 0x80004005;
    }
    iVar6 = 4;
    bVar10 = true;
    piVar7 = param_2;
    piVar8 = &DAT_007a1348;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar10 = *piVar7 == *piVar8;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar10);
    if (bVar10) {
      piVar8 = (int *)param_2[0x11];
      if ((((((piVar8[0xc] == 0x28) && (0 < piVar8[0xd])) && (piVar8[0xe] != 0)) &&
           (((short)piVar8[0xf] == 1 &&
            (uVar4 = Library::Win32::COMSupport::FUN_00749989((char *)(param_2 + 4)),
            (short)uVar4 != -1)))) &&
          ((piVar8[0x10] == 0 ||
           ((piVar8[0x10] == 3 &&
            ((STField<short>(piVar8,0x3e) == 0x10 || (STField<short>(piVar8,0x3e) == 0x20)))))
           ))) && ((piVar8[0x11] == 0 ||
                   (iVar5 = Library::Win32::COMSupport::FUN_00749841
                                      ((RecoveredSourceFamily_dibcopy *)(piVar8 + 0xc)),
                   piVar8[0x11] == iVar5)))) {
        uVar3 = STField<ushort>(piVar8,0x3e);
        iVar6 = param_1->field_0028;
        if ((int)(uint)uVar3 <= STField<int>(iVar6,0x20)) {
          param_1->field_0090 = piVar8[2] - *piVar8;
          iVar1 = piVar8[3];
          iVar2 = piVar8[1];
          param_1->field_0094 = iVar1 - iVar2;
          if ((param_1->field_0090 == 0) || (iVar1 - iVar2 == 0)) {
            param_1->field_0090 = piVar8[0xd];
            uVar7 = piVar8[0xe] >> 0x1f;
            param_1->field_0094 = (piVar8[0xe] ^ uVar7) - uVar7;
          }
          if ((param_1->field_0004 & 0x8000000) == 0) {
            param_1->field_0008 = 0;
            param_1->field_000C = 0;
            param_1->field_0010 = param_1->field_0090;
            param_1->field_0014 = param_1->field_0094;
          }
          uVar3 = STField<ushort>(piVar8,0x3e);
          if (uVar3 == 8) {
            iVar6 = piVar8[0x14];
            if (iVar6 == 0) {
              iVar6 = 0x100;
            }
            if (iVar6 * 4 + 0x58U <= (uint)param_2[0x10]) {
              piVar8 = piVar8 + 0x16;
              piVar9 = (int *)&param_1[1].field_0x70;
              for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar9 = *piVar8;
                piVar8 = piVar8 + 1;
                piVar9 = piVar9 + 1;
              }
            }
            return 0;
          }
        }
        if (STField<uint>(iVar6,0x20) == (uint)uVar3) {
          if (uVar3 != 0x10) {
            return 0;
          }
          if (piVar8[0x10] == 3) {
            if ((piVar8[0x16] == STField<int>(iVar6,0x4C4)) &&
               (piVar8[0x17] == STField<int>(iVar6,0x4C8))) {
              if (piVar8[0x18] == STField<int>(iVar6,0x4CC)) {
                return 0;
              }
              return 0x80070057;
            }
          }
          else if (((STField<int>(iVar6,0x4C4) == 0x7c00) && (STField<int>(iVar6,0x4C8) == 0x3e0)) &&
                  (STField<int>(iVar6,0x4CC) == 0x1f)) {
            return 0;
          }
        }
      }
    }
  }
  return 0x80070057;
}


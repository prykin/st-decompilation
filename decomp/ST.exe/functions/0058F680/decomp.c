#include "../../pseudocode_runtime.h"


int __thiscall
FUN_0058f680(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,short *param_4)

{
  int iVar2;
  int iVar1;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  short sVar12;
  short sVar13;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;

  uVar9 = 0;
  uVar7 = 0;
  /* ST_CALLSITE[0058F68F]: CALL 0x0040259a; direct=0040259A STSharkC::sub_0058F430 */
  local_1c = STSharkC::sub_0058F430(this);
  if (STField<int>(this,0x23d) != 0) {
    return local_1c;
  }
  iVar4 = (int)STField<short>(this,0x47);
  if ((((iVar4 <= STField<int>(this,0x27f)) &&
       (((sVar5 = STField<short>(this,0x6c), sVar5 == 0xe1 || (sVar5 == 0xb4)) || (sVar5 == 0x87)
        ))) || ((STField<int>(this,0x287) <= iVar4 &&
                (((sVar5 = STField<short>(this,0x6c), sVar5 == 0x2d || (sVar5 == 0)) ||
                 (sVar5 == 0x13b)))))) ||
     (((iVar6 = (int)STField<short>(this,0x49), iVar6 <= STField<int>(this,0x283) &&
       (((sVar5 = STField<short>(this,0x6c), sVar5 == 0x87 || (sVar5 == 0x5a)) || (sVar5 == 0x2d)
        ))) || ((STField<int>(this,0x28b) <= iVar6 &&
                (((sVar5 = STField<short>(this,0x6c), sVar5 == 0xe1 || (sVar5 == 0x10e)) ||
                 (sVar5 == 0x13b)))))))) {
    sVar5 = (short)((sVar5 + 0x2d) % 0x168);
    *param_4 = sVar5;
    while (sVar5 < 0) {
      *param_4 = *param_4 + 0x168;
      sVar5 = *param_4;
    }
    return 6;
  }
  local_18 = iVar4 + -1;
  if (iVar4 + -1 < STField<int>(this,0x27f)) {
    local_18 = STField<int>(this,0x27f);
  }
  local_14 = iVar6 + -1;
  if (iVar6 + -1 < STField<int>(this,0x283)) {
    local_14 = STField<int>(this,0x283);
  }
  iVar4 = STField<short>(this,0x47) + 1;
  if (STField<int>(this,0x287) < iVar4) {
    iVar4 = STField<int>(this,0x287);
  }
  local_8 = iVar6 + 1;
  if (STField<int>(this,0x28b) < iVar6 + 1) {
    local_8 = STField<int>(this,0x28b);
  }
  do {
    iVar6 = (int)((ulonglong)((longlong)(int)STField<short>(this,0x6c) * -0x49f49f49) >> 0x20) +
            (int)STField<short>(this,0x6c);
    switch((iVar6 >> 5) - (iVar6 >> 0x1f)) {
    case 0:
      if (iVar4 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar9 = (uVar7 >> 0x10) % ((STField<int>(this,0x287) - iVar4) + 1U) + iVar4;
      iVar6 = uVar9 - (int)STField<short>(this,0x47);
      iVar3 = STField<short>(this,0x49) - iVar6;
      if (iVar3 < 0) {
        iVar2 = STField<int>(this,0x1c);
      }
      else {
        iVar2 = STField<int>(this,0x1c);
      }
      uVar7 = iVar2 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % (((STField<short>(this,0x49) + iVar6) - iVar3) + 1U) + iVar3;
      break;
    case 1:
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % (local_14 + 1U);
      goto LAB_0058fb0d;
    case 2:
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % (local_14 + 1U);
      iVar3 = (int)STField<short>(this,0x49) - uVar7;
      iVar6 = STField<short>(this,0x47) + iVar3;
      iVar3 = STField<short>(this,0x47) - iVar3;
      if (iVar3 < 0) {
        uVar9 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar9;
        uVar9 = (uVar9 >> 0x10) % ((iVar6 - iVar3) + 1U) + iVar3;
      }
      else {
        uVar9 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar9;
        uVar9 = (uVar9 >> 0x10) % ((iVar6 - iVar3) + 1U) + iVar3;
      }
      break;
    case 3:
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar9 = (uVar7 >> 0x10) % (local_18 + 1U);
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % (local_14 + 1U);
      break;
    case 4:
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar9 = (uVar7 >> 0x10) % (local_18 + 1U);
      iVar3 = (int)STField<short>(this,0x47) - uVar9;
      iVar6 = STField<short>(this,0x49) + iVar3;
      iVar3 = STField<short>(this,0x49) - iVar3;
      if (iVar3 < 0) {
        uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar7;
        uVar7 = (uVar7 >> 0x10) % ((iVar6 - iVar3) + 1U) + iVar3;
      }
      else {
        uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar7;
        uVar7 = (uVar7 >> 0x10) % ((iVar6 - iVar3) + 1U) + iVar3;
      }
      break;
    case 5:
      if (local_8 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % ((STField<int>(this,0x28b) - local_8) + 1U) + local_8;
      uVar9 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar9;
      uVar9 = (uVar9 >> 0x10) % (local_18 + 1U);
      break;
    case 6:
      if (local_8 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % ((STField<int>(this,0x28b) - local_8) + 1U) + local_8;
      iVar6 = uVar7 - (int)STField<short>(this,0x49);
      iVar3 = STField<short>(this,0x47) - iVar6;
      if (iVar3 < 0) {
        iVar2 = STField<int>(this,0x1c);
      }
      else {
        iVar2 = STField<int>(this,0x1c);
      }
      uVar9 = iVar2 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar9;
      uVar9 = (uVar9 >> 0x10) % (((STField<short>(this,0x47) + iVar6) - iVar3) + 1U) + iVar3;
      break;
    case 7:
      if (local_8 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      uVar7 = (uVar7 >> 0x10) % ((STField<int>(this,0x28b) - local_8) + 1U) + local_8;
LAB_0058fb0d:
      if (iVar4 < 0) {
        iVar6 = STField<int>(this,0x1c);
      }
      else {
        iVar6 = STField<int>(this,0x1c);
      }
      uVar9 = iVar6 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar9;
      uVar9 = (uVar9 >> 0x10) % ((STField<int>(this,0x287) - iVar4) + 1U) + iVar4;
    }
    if ((uVar9 != (int)STField<short>(this,0x47)) || (uVar7 != (int)STField<short>(this,0x49))
       ) {
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      if ((int)STField<uint>(this,0x287) < (int)uVar9) {
        uVar9 = STField<uint>(this,0x287);
      }
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      if ((int)STField<uint>(this,0x28b) < (int)uVar7) {
        uVar7 = STField<uint>(this,0x28b);
      }
      uVar8 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar8;
      iVar4 = STField<short>(this,0x4b) + -2 + (uVar8 >> 0x10) % 5;
      if (iVar4 < 5) {
        if (iVar4 < 0) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 4;
      }
      iVar6 = iVar4 + 5;
      if (iVar4 < iVar6) {
        local_1c = 2;
        iVar3 = iVar4;
        do {
          uVar8 = uVar7;
          uVar10 = uVar9;
          iVar4 = iVar3;
          if (4 < iVar3) {
            iVar4 = iVar3 + -5;
          }
          do {
            while( true ) {
              while( true ) {
                while( true ) {
                  sVar5 = (short)uVar10;
                  sVar12 = (short)uVar8;
                  sVar13 = (short)iVar4;
                  iVar1 = thunk_FUN_004961b0(sVar5,sVar12,sVar13);
                  if (((iVar1 != 0) &&
                      (((sVar5 < 0 || (g_worldGrid.sizeX <= sVar5)) ||
                       ((sVar12 < 0 ||
                        ((((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) ||
                          (g_worldGrid.sizeZ <= sVar13)) ||
                         (STGridAt3D(g_worldGrid, sVar5, sVar12, sVar13).objects[0] ==
                          nullptr)))))))) &&
                     (((sVar5 < 0 || (g_worldGrid.sizeX <= sVar5)) ||
                      ((sVar12 < 0 ||
                       (((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)) ||
                        ((g_worldGrid.sizeZ <= sVar13 ||
                         (STGridAt3D(g_worldGrid, sVar5, sVar12, sVar13).objects[1] ==
                          nullptr)))))))))) goto LAB_0058fd1a;
                  bVar11 = (int)(uVar10 - (int)STField<short>(this,0x47)) < 0;
                  if (uVar10 == (int)STField<short>(this,0x47) || bVar11) break;
                  uVar10 = uVar10 - 1;
                  if ((int)uVar10 < 0) goto LAB_0058fcfe;
                }
                if (!bVar11) break;
                uVar10 = uVar10 + 1;
              }
              bVar11 = -1 < (int)(uVar8 - (int)STField<short>(this,0x49));
              if (uVar8 != (int)STField<short>(this,0x49) && bVar11) break;
              if (bVar11) goto LAB_0058fcfe;
              uVar8 = uVar8 + 1;
            }
            uVar8 = uVar8 - 1;
          } while (-1 < (int)uVar8);
LAB_0058fcfe:
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar6);
      }
      else {
        uVar8 = uVar7;
        uVar10 = uVar9;
        if (local_1c != 0) {
LAB_0058fd1a:
          *param_1 = (short)uVar10;
          *param_2 = (short)uVar8;
          *param_3 = (short)iVar4;
          return local_1c;
        }
      }
      sVar5 = (short)((STField<short>(this,0x6c) + 0x2d) % 0x168);
      *param_4 = sVar5;
      while (sVar5 < 0) {
        *param_4 = *param_4 + 0x168;
        sVar5 = *param_4;
      }
      return 6;
    }
  } while( true );
}


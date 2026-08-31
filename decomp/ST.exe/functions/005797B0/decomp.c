#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00579DC3 exact 2-byte output store from MOVSX at 00579D49 establishes signed source
   width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00579DC9 exact 2-byte output store from MOVSX at 00579D96 establishes signed source
   width 2

   [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __thiscall FUN_005797b0(void *this,short *param_1,short *param_2,undefined2 *param_3)

{
  int uVar1;
  uint *puVar1;
  int iVar3;
  int iVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_18;
  int local_14;
  short local_10;
  int local_c;
  int local_8;

  iVar2 = 0;
  iVar9 = 0;
  sVar4 = STField<short>(this,0x41);
  sVar4 = STBiasedDiv16(sVar4, 0xc9); /* exact signed 16-bit grid-index division */
  sVar5 = STField<short>(this,0x43);
  STField<short>(this,0x47) = sVar4;
  sVar5 = STBiasedDiv16(sVar5, 0xc9); /* exact signed 16-bit grid-index division */
  iVar6 = (int)sVar4;
  local_c = iVar6 + -1;
  STField<short>(this,0x49) = sVar5;
  if (local_c < 0) {
    local_c = 0;
  }
  iVar8 = (int)sVar5;
  local_8 = iVar8 + -1;
  if (local_8 < 0) {
    local_8 = 0;
  }
  local_18 = iVar6 + 1;
  if ((int)g_worldGrid.sizeX <= iVar6 + 1) {
    local_18 = iVar6;
  }
  local_14 = iVar8 + 1;
  if ((int)g_worldGrid.sizeY <= iVar8 + 1) {
    local_14 = iVar8;
  }
  switch(STField<undefined2>(this,0x6c)) {
  case 0:
    if (iVar6 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar2 = (uVar3 >> 0x10) % ((local_18 - iVar6) + 1U) + iVar6;
    local_8 = iVar2 - STField<short>(this,0x47);
    iVar9 = STField<short>(this,0x49) + local_8;
    local_8 = STField<short>(this,0x49) - local_8;
    if (local_8 < 0) goto LAB_00579a6c;
LAB_005798e8:
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    goto LAB_00579a7a;
  case 1:
    if (local_8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    local_c = (int)STField<short>(this,0x47);
    iVar9 = (uVar3 >> 0x10) % ((iVar8 - local_8) + 1U) + local_8;
    if (local_c < 0) {
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    }
    else {
LAB_00579baa:
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    }
    goto LAB_00579bc9;
  case 2:
    if (local_8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar9 = (uVar3 >> 0x10) % ((iVar8 - local_8) + 1U) + local_8;
    local_c = STField<short>(this,0x49) - iVar9;
    local_18 = STField<short>(this,0x47) + local_c;
    local_c = STField<short>(this,0x47) - local_c;
    if (-1 < local_c) goto LAB_00579b56;
LAB_005799a8:
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    break;
  case 3:
    if (local_c < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar2 = (uVar3 >> 0x10) % ((iVar6 - local_c) + 1U) + local_c;
    iVar9 = (int)STField<short>(this,0x49);
    if (local_8 < 0) {
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      goto LAB_00579a7a;
    }
    goto LAB_00579a6c;
  case 4:
    if (local_c < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar2 = (uVar3 >> 0x10) % ((iVar6 - local_c) + 1U) + local_c;
    local_8 = STField<short>(this,0x47) - iVar2;
    iVar9 = STField<short>(this,0x49) + local_8;
    local_8 = STField<short>(this,0x49) - local_8;
    if (-1 < local_8) goto LAB_005798e8;
LAB_00579a6c:
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
LAB_00579a7a:
    STField<uint>(this,0x1c) = uVar3;
    iVar9 = (uVar3 >> 0x10) % ((iVar9 - local_8) + 1U) + local_8;
    goto LAB_00579bdd;
  case 5:
    if (iVar8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    local_18 = (int)STField<short>(this,0x47);
    iVar9 = (uVar3 >> 0x10) % ((local_14 - iVar8) + 1U) + iVar8;
    if (local_c < 0) {
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar3;
    }
    else {
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar3;
    }
    break;
  case 6:
    if (iVar8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar9 = (uVar3 >> 0x10) % ((local_14 - iVar8) + 1U) + iVar8;
    local_c = iVar9 - STField<short>(this,0x49);
    local_18 = STField<short>(this,0x47) + local_c;
    local_c = STField<short>(this,0x47) - local_c;
    if (-1 < local_c) goto LAB_005799a8;
LAB_00579b56:
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    break;
  case 7:
    if (iVar8 < 0) {
      iVar2 = STField<int>(this,0x1c);
    }
    else {
      iVar2 = STField<int>(this,0x1c);
    }
    uVar3 = iVar2 * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    iVar9 = (uVar3 >> 0x10) % ((local_14 - iVar8) + 1U) + iVar8;
    local_c = (int)STField<short>(this,0x47);
    if (local_c < 0) goto LAB_00579baa;
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
LAB_00579bc9:
    STField<uint>(this,0x1c) = uVar3;
    break;
  default:
    goto switchD_0057988b_default;
  }
  iVar2 = (uVar3 >> 0x10) % ((local_18 - local_c) + 1U) + local_c;
LAB_00579bdd:
  if (iVar2 < 0) {
    iVar2 = 0;
  }
switchD_0057988b_default:
  if (g_worldGrid.sizeX <= iVar2) {
    iVar2 = g_worldGrid.sizeX + -1;
  }
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  if (g_worldGrid.sizeY <= iVar9) {
    iVar9 = g_worldGrid.sizeY + -1;
  }
  sVar4 = STField<short>(this,0x45);
  local_10 = STBiasedDiv16(sVar4, 200); /* exact signed 16-bit grid-index division */
  local_14 = (short)((short)iVar2 * 0xc9 + 100);
  local_18 = (short)((short)iVar9 * 0xc9 + 100);
  local_8 = iVar9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {

          uVar1 = thunk_FUN_00496250(local_14,local_18,(int)STField<short>(this,0x45));
          sVar4 = (short)iVar2;
          if (uVar1 < 0) {
            puVar1 = thunk_FUN_004d85e0((int)sVar4,(short)local_8,(int)local_10);
            if ((puVar1 == nullptr) &&
               (((((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) || ((short)local_8 < 0)) ||
                 ((g_worldGrid.sizeY <= (short)local_8 || (local_10 < 0)))) ||
                ((g_worldGrid.sizeZ <= local_10 ||
                 (STGridAt3D(g_worldGrid, sVar4, local_8, local_10).objects[0] ==
                  nullptr)))))) {
              if ((STField<short>(this,0x47) != iVar2) ||
                 (STField<short>(this,0x49) != local_8)) {
                *param_1 = (short)local_14;
                *param_2 = (short)local_18;
                iVar2 = local_14 - STField<short>(this,0x41);
                iVar9 = local_18 - STField<short>(this,0x43);
                STField<int>(this,0x245) = iVar2;
                STField<int>(this,0x24d) = iVar9;

                iVar3 = FUN_006acf0d(0,0,0,iVar2,iVar9,0);
                STField<undefined4>(this,0x249) = 0;
                STField<undefined4>(this,0x241) = 0;
                STField<int>(this,0x245) = (STField<int>(this,0x245) << 9) / iVar3;
                iVar2 = (STField<int>(this,0x24d) << 9) / iVar3;
                STField<int>(this,0x24d) = iVar2;
                sVar4 = STField<short>(this,0x41);
                STField<int>(this,0x251) = (int)sVar4;
                sVar5 = STField<short>(this,0x43);
                STField<int>(this,0x255) = (int)sVar5;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                uVar7 = CONCAT22(sVar5 >> 0xf,STField<undefined2>(this,0x45));
                /* ST_CALLSITE[00579E50]: CALL dword ptr [EBX + 0x10]; [STIndirectCallsiteApplier] exact slot 0x10; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                sVar4 = STStructuralVirtualCall<undefined4>(this, 0x10, STReplaceLowWord((uint32_t)(iVar2), (uint16_t)(sVar4)), CONCAT22(sVar4 >> 0xf,sVar5), uVar7, local_14, local_18, uVar7);
                uVar3 = (short)((sVar4 / 0x2d + 3) - (short)((int)sVar4 / -0x4c000000)) &
                        0x80000007;
                if ((int)uVar3 < 0) {
                  uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
                }
                *param_3 = (short)uVar3;
                return 1;
              }
              goto cf_common_exit_00579E8F;
            }
          }
          bVar10 = iVar2 - STField<short>(this,0x47) < 0;
          if (iVar2 == STField<short>(this,0x47) || bVar10) break;
          iVar2 = iVar2 + -1;
          local_14 = (short)(sVar4 + 99 + (short)iVar2 * 200);
          if (iVar2 < 0) goto cf_common_exit_00579E8F;
        }
        if (!bVar10) break;
        iVar2 = iVar2 + 1;
        local_14 = (short)(sVar4 + 0x65 + (short)iVar2 * 200);
      }
      bVar10 = -1 < local_8 - STField<short>(this,0x49);
      if (local_8 != STField<short>(this,0x49) && bVar10) break;
      if (bVar10) goto cf_common_exit_00579E8F;
      local_18 = (short)((short)local_8 + 0x65 + (short)(local_8 + 1) * 200);
      local_8 = local_8 + 1;
    }
    iVar9 = local_8 + -1;
    local_18 = (short)((short)local_8 + 99 + (short)iVar9 * 200);
    local_8 = iVar9;
  } while (-1 < iVar9);
cf_common_exit_00579E8F:
  uVar3 = (int)STField<short>(this,0x6c) + 1U & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  *param_3 = (short)uVar3;
  return 0;
}


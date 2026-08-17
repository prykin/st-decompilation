#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005ed1c0(void *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  STWorldObject *pSVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int local_8;

  iVar8 = STField<int>(this,0x2ba);
  *param_4 = iVar8;
  if (STField<char>(this,0x25a) != '\0') {
    if (STField<int>(this,0x287) == 0) {
      iVar11 = STField<int>(this,0x293);
    }
    else {
      iVar11 = (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x28f)) *
               STField<int>(this,0x287);
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0xfU)) >> 4;
    }
    if (STField<int>(this,0x28b) != 0) {
      iVar8 = STField<int>(this,0x28b) + iVar8;
      *param_4 = iVar8;
      if (iVar8 < 0) {
        *param_4 = iVar8 + 0x18;
      }
      if (0x17 < *param_4) {
        *param_4 = *param_4 + -0x18;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (*param_4 == STField<int>(this,0x273) / 0xf) {
        STField<undefined4>(this,0x28b) = 0;
      }
    }
    if (STField<int>(this,0x293) <= iVar11) {
      if (STField<int>(this,0x28b) != 0) {
        STField<undefined4>(this,0x287) = 0;
        return 1;
      }
      *param_1 = STField<int>(this,0x267);
      *param_2 = STField<int>(this,0x26b);
      *param_3 = STField<int>(this,0x26f);
      STField<undefined4>(this,0x283) = 0;
      return 1;
    }
    iVar8 = STField<int>(this,0x29b);
    iVar7 = STField<int>(this,0x29f);
    iVar3 = STField<int>(this,0x25f);
    iVar4 = STField<int>(this,0x263);
    *param_1 = (STField<int>(this,0x297) * iVar11) / 10000 + STField<int>(this,0x25b);
    *param_2 = (iVar8 * iVar11) / 10000 + iVar3;
    *param_3 = (iVar7 * iVar11) / 10000 + iVar4;
    goto cf_common_exit_005ED874;
  }
  iVar11 = STField<int>(this,0x263);
  if (STField<int>(this,0x26f) - iVar11 < 1) {
    local_8 = -(uint)(STField<int>(this,0x26f) != iVar11);
  }
  else {
    local_8 = 1;
  }
  if (STField<int>(this,0x287) == 0) {
    iVar11 = STField<int>(this,0x2c6);
  }
  else {
    iVar7 = (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x28f)) *
            STField<int>(this,0x287) * local_8;
    iVar11 = ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3) + iVar11;
  }
  if (STField<int>(this,0x28b) != 0) {
    iVar8 = STField<int>(this,0x28b) + iVar8;
    *param_4 = iVar8;
    if (iVar8 < 0) {
      *param_4 = iVar8 + 0x18;
    }
    if (0x17 < *param_4) {
      *param_4 = *param_4 + -0x18;
    }
    if (*param_4 == STField<int>(this,0x273) / 0xf) {
      STField<undefined4>(this,0x28b) = 0;
    }
  }
  iVar8 = STBiasedDiv16(iVar11, 200); /* exact signed 16-bit grid-index division */
  sVar1 = STField<short>(this,0x246);
  if (iVar8 != sVar1) {
    if ((1 < STField<byte>(this,0x252)) && (STField<short>(this,600) == iVar8)) {
      iVar7 = thunk_FUN_00495ff0(STField<short>(this,0x242),STField<short>(this,0x244),sVar1,0
                                 ,this);
      if (iVar7 == 0) {
        STField<char>(this,0x252) = STField<char>(this,0x252) + -1;
      }
      STField<short>(this,0x246) = (short)iVar8;
      STField<undefined1>(this,0x253) = 0xff;
      *param_1 = STField<int>(this,0x277);
      *param_2 = STField<int>(this,0x27b);
      *param_3 = iVar11;
      return 1;
    }
    *param_1 = STField<int>(this,0x277);
    *param_2 = STField<int>(this,0x27b);
    *param_3 = iVar11;
    STField<undefined4>(this,0x283) = 1;
    if (*param_1 != STField<int>(this,0x267)) {
      return 1;
    }
    if (*param_2 != STField<int>(this,0x26b)) {
      return 1;
    }
    if (*param_3 != STField<int>(this,0x26f)) {
      return 1;
    }
    STField<undefined4>(this,0x287) = 0;
    if (STField<int>(this,0x273) != STField<int>(this,0x2ba) * 0xf) {
      return 1;
    }
    STField<undefined4>(this,0x28b) = 0;
    STField<undefined4>(this,0x283) = 0;
    return 1;
  }
  iVar8 = (int)(short)(sVar1 * 200 + 100);
  if (1 < STField<byte>(this,0x252)) {
    *param_1 = STField<int>(this,0x277);
    *param_2 = STField<int>(this,0x27b);
    *param_3 = iVar11;
    goto cf_common_exit_005ED874;
  }
  if (local_8 == 0) {
LAB_005ed68c:
    *param_1 = STField<int>(this,0x277);
    *param_2 = STField<int>(this,0x27b);
    *param_3 = iVar11;
    STField<undefined4>(this,0x283) = 1;
    if (*param_1 != STField<int>(this,0x267)) {
      return 1;
    }
    if (*param_2 != STField<int>(this,0x26b)) {
      return 1;
    }
    if (*param_3 != STField<int>(this,0x26f)) {
      return 1;
    }
    STField<undefined4>(this,0x287) = 0;
    if (STField<int>(this,0x273) != STField<int>(this,0x2ba) * 0xf) {
      return 1;
    }
    STField<undefined4>(this,0x28b) = 0;
    STField<undefined4>(this,0x283) = 0;
    return 1;
  }
  sVar5 = (short)local_8;
  if ((iVar8 + 0x1e < iVar11) && (0 < local_8)) {
    sVar10 = STField<short>(this,0x244);
    sVar9 = sVar1 + sVar5;
    sVar6 = STField<short>(this,0x242);
    if (((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) &&
       ((-1 < sVar10 &&
        (((sVar10 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ)))))) {
      pSVar2 = STGridAt3D(g_worldGrid, sVar6, sVar10, sVar9).objects[0];
joined_r0x005ed4b7:
      if (pSVar2 != nullptr) goto LAB_005ed643;
    }
  }
  else {
    if ((iVar8 + -0x1e <= iVar11) || (-1 < local_8)) {
      if (((0 < local_8) && (STField<int>(this,0x26f) <= iVar11)) ||
         ((local_8 < 0 && (iVar11 <= STField<int>(this,0x26f))))) {
        STField<undefined4>(this,0x287) = 0;
        *param_1 = STField<int>(this,0x277);
        *param_2 = STField<int>(this,0x27b);
        *param_3 = STField<int>(this,0x26f);
        iVar11 = STField<int>(this,0x26f);
        if (STField<int>(this,0x273) == STField<int>(this,0x2ba)) {
          STField<undefined4>(this,0x28b) = 0;
          STField<undefined4>(this,0x283) = 0;
          return 1;
        }
      }
      goto LAB_005ed68c;
    }
    sVar10 = STField<short>(this,0x244);
    sVar9 = sVar1 + sVar5;
    sVar6 = STField<short>(this,0x242);
    if ((((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) && (-1 < sVar10)) &&
       (((sVar10 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ)))) {
      pSVar2 = STGridAt3D(g_worldGrid, sVar6, sVar10, sVar9).objects[0];
      goto joined_r0x005ed4b7;
    }
  }
  /* ST_CALLSITE[005ED564]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
  iVar8 = DumpClassC::WritePtr(sVar6,sVar10,sVar1 + sVar5,0,this);
  if (iVar8 == 0) {
    STField<char>(this,0x252) = STField<char>(this,0x252) + '\x01';
    STField<undefined2>(this,0x254) = STField<undefined2>(this,0x242);
    STField<undefined2>(this,0x256) = STField<undefined2>(this,0x244);
    STField<short>(this,600) = STField<short>(this,0x246) + sVar5;
    *param_1 = STField<int>(this,0x277);
    *param_2 = STField<int>(this,0x27b);
    *param_3 = iVar11;
cf_common_exit_005ED874:
    STField<undefined4>(this,0x283) = 1;
    return 1;
  }
LAB_005ed643:
  thunk_FUN_005ef4b0(this,STField<int>(this,0x273));
  *param_1 = STField<int>(this,0x277);
  *param_2 = STField<int>(this,0x27b);
  *param_3 = STField<int>(this,0x27f);
  STField<undefined4>(this,0x283) = 0xffffffff;
  return 1;
}


#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00624140 -> 006E3310 @ 00624383 | 006255B0 -> 00624140 @ 00625685; FUN_006255b0
   parameter param_5 */

undefined4 __thiscall
FUN_00624140(void *this,int param_1,int param_2,Global_sub_0061BDB0_param_1Enum *param_3,int param_4
            ,int param_5,int param_6,int *param_7,int param_8)

{
  Global_sub_0061BDB0_param_1Enum *pGVar1;
  Global_sub_0061BDB0_param_1Enum *pGVar2;
  Global_sub_0061BDB0_param_1Enum *pGVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined4 local_8;

  pGVar3 = param_3;
  local_8 = 0;
  *param_7 = param_6;
  if ((-1 < param_1) && (-1 < param_2)) {
    if ((int)param_3 < 0) goto LAB_00624457;
    if (((param_1 < g_worldGrid.sizeX) && (param_2 < g_worldGrid.sizeY)) && ((int)param_3 < 5)) {
      sVar8 = (short)param_1;
      sVar9 = (short)param_2;
      sVar10 = (short)param_3;
      iVar4 = thunk_FUN_004961b0(sVar8,sVar9,sVar10);
      if (iVar4 != 0) {
        return 0;
      }
      if (((((-1 < sVar8) && (sVar8 < g_worldGrid.sizeX)) &&
           ((-1 < sVar9 && ((sVar9 < g_worldGrid.sizeY && (-1 < sVar10)))))) &&
          (sVar10 < g_worldGrid.sizeZ)) &&
         (STGridAt3D(g_worldGrid, sVar8, sVar9, sVar10).objects[0] != nullptr)) {
        if (param_8 < 1) {
          iVar5 = (int)pGVar3 * 0xc9 + 0x32;
          if (iVar5 < param_6) {
            return 0;
          }
          *param_7 = iVar5;
          return 2;
        }
        sVar8 = STField<short>(this,0x34);
        iVar5 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
        if (iVar5 == STField<short>(this,0x47)) {
          sVar8 = STField<short>(this,0x36);
          iVar5 = STBiasedDiv16(sVar8, 0xc9); /* exact signed 16-bit grid-index division */
          if (iVar5 == STField<short>(this,0x49)) {
            sVar8 = STField<short>(this,0x38);
            iVar5 = STBiasedDiv16(sVar8, 200); /* exact signed 16-bit grid-index division */
            if (iVar5 == STField<short>(this,0x4b)) {
              return 0;
            }
          }
        }
        iVar5 = (int)pGVar3 * 0xc9 + 0x97;
        if (param_6 < iVar5) {
          return 0;
        }
        *param_7 = iVar5;
        return 2;
      }
      iVar5 = (STField<ST3DSMAPContext *>(this,0x211))->field_0380;
      ST3DSMAPContext::sub_006E3310
                (STField<ST3DSMAPContext *>(this,0x211),(iVar5 * param_4) / 0xc9,
                 (int *)((iVar5 * param_5) / 0xc9),(int)pGVar3,(int *)&param_3);
      lVar7 = Library::MSVCRT::__ftol();
      iVar5 = (int)(short)lVar7;
      pGVar1 = (Global_sub_0061BDB0_param_1Enum *)((int)pGVar3 + 1);
      pGVar2 = param_3;
      if ((int)param_3 <= (int)pGVar1) {
        pGVar2 = pGVar1;
      }
      if (param_8 < 0) {
        if (iVar5 < param_6) {
          return 0;
        }
        if ((((int)param_3 <= (int)pGVar1) && ((int)pGVar1 < 5)) &&
           (iVar6 = thunk_FUN_004961b0(sVar8,sVar9,sVar10 + 1), iVar6 == 0)) {
          return 3;
        }
        if ((int)pGVar2 * 200 < iVar5) {
          return 3;
        }
      }
      else {
        if (iVar5 <= param_6) {
          return 0;
        }
        if (((int)pGVar1 < 5) && (iVar6 = thunk_FUN_004961b0(sVar8,sVar9,sVar10 + -1), iVar6 != 0))
        {
          *param_7 = (int)pGVar3 * 200;
          return 1;
        }
      }
      *param_7 = iVar5;
      return 2;
    }
  }
  if (-1 < (int)param_3) {
    if ((int)param_3 < 5) {
      local_8 = 4;
    }
    return local_8;
  }
LAB_00624457:
  *param_7 = 0;
  return 2;
}


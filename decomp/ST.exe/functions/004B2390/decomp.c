#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004B2520 -> 004B2390 @ 004B25DA | 004B2520 -> 004B2390 @ 004B2996 | 004B2520 ->
   004B2390 @ 004B29F2 | 004B2520 -> 004B2390 @ 004B2A8B | 004B2520 -> 004B2390 @ 004B2ADB

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004B23F3 TEST SI,SI classifies dword parameter loaded at 004B23E1 | 004B23F8 CMP
   SI,word ptr [0x007fb244] classifies dword parameter loaded at 004B23E1 | 004B2520 -> 004B2390 @
   004B25DA; FUN_004b2520 parameter param_5
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004B2520 @ 004B25DA -> read as EAX on
   every CFG path | 004B2520 @ 004B2996 -> read as EAX on every CFG path | 004B2520 @ 004B29F2 ->
   read as EAX on every CFG path | 004B2520 @ 004B2A8B -> read as EAX on every CFG path | 004B2520 @
   004B2ADB -> read as EAX on every CFG path */

int __cdecl FUN_004b2390(uint param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int local_8;

  local_8 = 0;
  if ((((-1 < param_2) && (param_2 < g_worldGrid.sizeX)) && (-1 < param_3)) &&
     (param_3 < g_worldGrid.sizeY)) {
    sVar3 = (short)param_2;
    if (-1 < sVar3) {
      sVar1 = (short)param_3;
      sVar4 = (short)param_4;
      if (((((g_worldGrid.sizeX <= sVar3) || (sVar1 < 0)) ||
           ((g_worldGrid.sizeY <= sVar1 || ((sVar4 < 0 || (g_worldGrid.sizeZ <= sVar4)))))) ||
          (STGridAt3D(g_worldGrid, sVar3, sVar1, sVar4).objects[0] == nullptr)) &&
         (((((sVar3 < g_worldGrid.sizeX && (-1 < sVar1)) && (sVar1 < g_worldGrid.sizeY)) &&
           ((-1 < sVar4 && (sVar4 < g_worldGrid.sizeZ)))) &&
          (((STGridAt3D(g_pathingGrid, sVar3, sVar1, sVar4) == 0 &&
            ((local_8 = 1, param_6 != 0 && (g_visibleClass_00802A88 != nullptr)))) &&
           /* ST_CALLSITE[004B24A4]: CALL 0x004052a4; direct=004052A4 VisibleClassTy::sub_0055B1C0 */
           (iVar2 = VisibleClassTy::sub_0055B1C0
                              (g_visibleClass_00802A88,param_2,param_3,param_4,param_1), iVar2 != 0)
           ))))) {
        local_8 = 0;
        *param_5 = 1;
      }
    }
    return local_8;
  }
  return 0;
}


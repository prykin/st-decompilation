#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=005FFF60 @ 0060000F
   -> TEST TEST EAX,EAX */

int __thiscall
FUN_005fe5d0(void *this,int param_1,undefined2 *param_2,RecoveredRecord_005FE5D0_FE3006E4 *param_3)

{
  short *psVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_c = 1;
  local_8 = 0;
  if (STField<int>(this,0x233) == 0) {
    return 0;
  }
  psVar1 = (short *)(param_1 * 0x52 + STField<int>(this,0x233));
  if (*(int *)(psVar1 + 0x27) != 0) {
    FreeAndNull(psVar1 + 0x27);
  }

  pvVar2 = Library::DKW::LIB::MemAlloc(600);
  *(void **)(psVar1 + 0x27) = pvVar2;
  psVar1[0x23] = 0;
  psVar1[0x24] = 0;
  psVar1[0x25] = 0;
  psVar1[0x26] = 0;
  local_20 = -1;
  local_24 = -1;
  local_28 = -1;
  do {
    if (local_8 == 0) {
      local_8 = 1;
      **(undefined2 **)(psVar1 + 0x27) = *param_2;
      *(undefined2 *)(*(int *)(psVar1 + 0x27) + 2) = param_2[1];
      *(undefined2 *)(*(int *)(psVar1 + 0x27) + 4) = param_2[2];
    }
    else {

      iVar3 = thunk_FUN_005fe280(psVar1,local_8,&local_10,&local_14,&local_18);
      if (iVar3 != 0) {
        if (local_18 <= param_3->field_0004) {
          local_c = 0;
        }
        iVar3 = STBiasedDiv16(local_10, 0xc9); /* exact signed 16-bit grid-index division */
        iVar7 = STBiasedDiv16(local_14, 0xc9); /* exact signed 16-bit grid-index division */
        iVar6 = STBiasedDiv16(local_18, 200); /* exact signed 16-bit grid-index division */
        if ((((iVar3 < 0) || (g_worldGrid.sizeX <= iVar3)) || (iVar7 < 0)) ||
           (((g_worldGrid.sizeY <= iVar7 || (iVar6 < 0)) || (g_worldGrid.sizeZ <= iVar6)))) {
          local_8 = local_8 + -1;
          if (local_8 < 1) {

            thunk_FUN_005fd6a0(this);
            return 0;
          }
          goto cf_common_exit_005FE866;
        }
        if (((iVar3 != local_20) || (iVar7 != local_24)) || (iVar6 != local_28)) {
          sVar8 = (short)iVar3;
          sVar9 = (short)iVar7;
          sVar10 = (short)iVar6;

          iVar4 = thunk_FUN_004961b0(sVar8,sVar9,sVar10);
          local_28 = iVar6;
          local_24 = iVar7;
          local_20 = iVar3;
          if ((iVar4 == 0) &&
             ((((((-1 < sVar8 && (sVar8 < g_worldGrid.sizeX)) && (-1 < sVar9)) &&
                ((sVar9 < g_worldGrid.sizeY && (-1 < sVar10)))) &&
               ((sVar10 < g_worldGrid.sizeZ &&
                (STGridAt3D(g_worldGrid, sVar8, sVar9, sVar10).objects[0] != nullptr)))) ||

              (iVar3 = thunk_FUN_00496250(local_10,local_14,local_18), -1 < iVar3)))) {
            local_c = 0;
          }
        }
        piVar5 = (int *)(psVar1 + 0x27);
        iVar3 = local_8 * 6;
        local_8 = local_8 + 1;
        *(undefined2 *)(*piVar5 + iVar3) = (undefined2)local_10;
        *(undefined2 *)(*piVar5 + 2 + iVar3) = (undefined2)local_14;
        *(undefined2 *)(*piVar5 + 4 + iVar3) = (undefined2)local_18;
        if (99 < local_8) {
          local_c = 0;
          goto cf_common_exit_005FE866;
        }
      }
    }
    if (local_c == 0) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
cf_common_exit_005FE866:
      *(uint *)(param_1 * 0x52 + 0x35 + STField<int>(this,0x233)) =
           g_playSystem_00802A38->field_00E4;
      if (local_8 != 0) {
        *(int *)(psVar1 + 0x23) = local_8;
      }
      local_2c = (uint)(local_c == 0);
      return local_2c;
    }
  } while( true );
}


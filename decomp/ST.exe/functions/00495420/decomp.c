#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=0047DF00 @ 0047E05A
   -> CMP CMP EAX,0x1 | 0047DF00 @ 0047E298 -> CMP CMP EAX,0x1 | 0047DF00 @ 0047E4D5 -> CMP CMP
   EAX,0x1 */

int __thiscall FUN_00495420(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int local_c;
  int local_8;

  local_c = 1000000;
  if (*(int *)((int)this + 0x6b9) != 1) {
    sVar5 = *(short *)((int)this + 0x6a9);
    sVar1 = *(short *)((int)this + 0x6ab);
    sVar3 = *(short *)((int)this + 0x6ad) + 1;
    if ((((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) && (-1 < sVar1)) &&
       (((sVar1 < g_worldGrid.sizeY && (-1 < sVar3)) &&
        ((sVar3 < g_worldGrid.sizeZ &&
         ((STGridAt3D(g_worldGrid, sVar5, sVar1, sVar3).objects[0] != nullptr &&
          (STGridAt3D(g_worldGrid, sVar5, sVar1, sVar3).objects[0] != this)))))))) {
      return 0;
    }
    *param_1 = sVar5;
    sVar5 = *(short *)((int)this + 0x6ab);
LAB_00495607:
    *param_2 = sVar5;
    *param_3 = *(short *)((int)this + 0x6ad) + 1;
    return 1;
  }
  local_8 = 0;
  do {
    iVar7 = 0;
    do {
      sVar1 = *(short *)((int)this + 0x6ad) + 1;
      sVar5 = (short)iVar7;
      sVar6 = sVar5 + *(short *)((int)this + 0x6ab);
      sVar3 = (short)local_8;
      sVar2 = *(short *)((int)this + 0x6a9) + sVar3;
      if (((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar6 < 0)) ||
          ((g_worldGrid.sizeY <= sVar6 || (sVar1 < 0)))) ||
         ((g_worldGrid.sizeZ <= sVar1 ||
          (STGridAt3D(g_worldGrid, sVar2, sVar6, sVar1).objects[0] == nullptr)))) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar4 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                             (int)*(short *)((int)this + 0x4b),
                             *(short *)((int)this + 0x6a9) + local_8,
                             *(short *)((int)this + 0x6ab) + iVar7,*(short *)((int)this + 0x6ad) + 1
                            );
        if (iVar4 < local_c) {
          *param_1 = *(short *)((int)this + 0x6a9) + sVar3;
          *param_2 = *(short *)((int)this + 0x6ab) + sVar5;
          *param_3 = *(short *)((int)this + 0x6ad) + 1;
          local_c = iVar4;
        }
      }
      else if (STGridAt3D(g_worldGrid, sVar2, sVar6, sVar1).objects[0] == this) {
        *param_1 = *(short *)((int)this + 0x6a9) + sVar3;
        sVar5 = *(short *)((int)this + 0x6ab) + sVar5;
        goto LAB_00495607;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return (uint)(local_c != 1000000);
    }
  } while( true );
}


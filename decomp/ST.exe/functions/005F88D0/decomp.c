#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005F6F60 @ 005F7202 -> read as EAX on
   every CFG path | 005F6F60 @ 005F7772 -> read as EAX on every CFG path | 005F6F60 @ 005F7CCE ->
   read as EAX on every CFG path */

int __thiscall
FUN_005f88d0(void *this,int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 *param_5
            )

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;
  int iVar4;
  int iVar5;

  sVar1 = STField<short>(this,0x285);
  sVar2 = STField<short>(this,0x281);
  sVar3 = STField<short>(this,0x27d);
  iVar5 = 0;
  if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
      ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) && (sVar1 < g_worldGrid.sizeZ)) {
    this_00 = STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[1];
    if ((this_00 != nullptr) && (this_00->value_20 == 0xbe)) {
      if (param_2 == 0) {

        iVar4 = thunk_FUN_00630340(this_00,param_1,nullptr,nullptr,nullptr);
        if (iVar4 != 0) {
          iVar5 = 1;
        }
      }
      else {

        iVar4 = thunk_FUN_00630340(this_00,param_1,param_3,param_4,param_5);
        if (iVar4 != 0) {
          return 1;
        }
      }
    }
  }
  return iVar5;
}


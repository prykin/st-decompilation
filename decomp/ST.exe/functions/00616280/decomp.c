#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006139A0 @ 00613CC6 -> read as EAX on
   every CFG path | 006164E0 @ 006164F7 -> read as EAX on every CFG path | 00616F60 @ 00617037 ->
   read as EAX on every CFG path */

int __thiscall FUN_00616280(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  STWorldObject *this_00;
  STWorldObject *local_14;
  short local_10 [4];
  uint local_8;

  local_8 = 0;
  sVar1 = STField<short>(this,0x2c5);
  sVar2 = STField<short>(this,0x2c9);
  sVar3 = STField<short>(this,0x2c7);
  local_10[2] = 0;
  local_10[3] = 0;
  local_10[0] = 0;
  local_10[1] = 0;
  if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
      (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) ||
       ((g_worldGrid.sizeZ <= sVar2 ||
        ((this_00 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0], this_00 == nullptr ||
         (*(int *)&this_00->field_0x18 != STField<int>(this,0x2d1))))))))) &&

     (iVar4 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,
                         STField<RecoveredRecordView_005EFAE0_855D930D *>(this,0x2d1),
                         (int *)&local_14), this_00 = local_14, iVar4 == -4)) {
    return -1;
  }
  thunk_FUN_00416270(this_00,&local_8,local_10 + 2,local_10);
  *param_1 = (short)local_8;
  *param_2 = (short)STPiece<4,4>(local_10);
  *param_3 = (short)STPiece<0,4>(local_10);
  if ((((short)local_8 == STField<short>(this,0x2cb)) &&
      ((short)STPiece<4,4>(local_10) == STField<short>(this,0x2cd))) &&
     ((short)STPiece<0,4>(local_10) == STField<short>(this,0x2cf))) {
    return 0;
  }
  return 1;
}


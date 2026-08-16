#include "../../pseudocode_runtime.h"


void __thiscall
FUN_00490b30(void *this,AnonShape_00490B30_6CCF6294 *param_1,short param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  STGameObjC *pSVar5;
  char objPtr;

  objPtr = (char)param_1;
  if ((STField<char>(this,0x33a) == objPtr) && (STField<short>(this,0x33f) == param_2)) {
    STField<undefined2>(this,0x33f) = (undefined2)param_3;
  }
  if (STField<int>(this,0x45d) == 2) {
    sVar1 = STField<short>(this,0x800);
    sVar2 = STField<short>(this,0x804);
    sVar3 = STField<short>(this,0x802);
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      param_1 = (AnonShape_00490B30_6CCF6294 *)
                STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if ((((param_1 != nullptr) &&
         (param_1->field_0018 == STField<int>(this,0x7f4))) ||
        (iVar4 = STPlaySystemC::sub_006E62D0
                           (g_playSystem_00802A38,
                            STField<AnonShape_005EFAE0_B406B78B *>(this,0x7f4),(int *)&param_1),
        iVar4 != -4)) && ((param_1->field_0032 == param_2 && (param_1->field_0024 == (int)objPtr))))
    {
      pSVar5 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,objPtr,(ushort)param_3,CASE_1);
      STField<undefined4>(this,0x7f4) = pSVar5->field_0018;
    }
  }
  return;
}


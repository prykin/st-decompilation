#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004ce250(void *this,int param_1)

{
  short sVar1;
  STWorldObject *pSVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  void *local_8;

  local_8 = nullptr;
  if ((STField<AnonShape_005EFAE0_B406B78B *>(this,0x5d3) != nullptr)
     && (STField<int>(this,0x4d4) == 0)) {
    iVar4 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x5d3),
                       (int *)&local_8);
    if (iVar4 == 0) {
      thunk_FUN_004cdeb0(local_8,STField<undefined4>(this,0x18));
      uVar5 = thunk_FUN_004cdf80(local_8,STField<int>(this,0x18));
      STField<undefined4>(this,0x4d4) = uVar5;
      if (param_1 != 0) {
        iVar4 = STField<int>(this,0x5b4) + -1;
        sVar6 = (short)STField<undefined4>(this,0x5b0);
        if (((((-1 < iVar4) && (sVar1 = STField<short>(this,0x5b8), -1 < sVar6)) &&
             (sVar6 < g_worldGrid.sizeX)) &&
            ((sVar3 = (short)iVar4, -1 < sVar3 && (sVar3 < g_worldGrid.sizeY)))) &&
           ((-1 < sVar1 &&
            ((sVar1 < g_worldGrid.sizeZ &&
             (pSVar2 = STGridAt3D(g_worldGrid, sVar6, sVar3, sVar1).objects[0],
             pSVar2 != nullptr)))))) {
          /* ST_CALLSITE[004CE336]: CALL dword ptr [EAX + 0x2c] */
          iVar4 = pSVar2->GetObjectTypeId();
          if (0x53 < iVar4) {
            /* ST_CALLSITE[004CE342]: CALL dword ptr [EDX + 0x2c] */
            iVar4 = pSVar2->GetObjectTypeId();
            if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
              *(undefined4 *)&pSVar2[0x29].field_0xf = STField<undefined4>(this,0x5d3);
              thunk_FUN_004ce250(pSVar2,1);
            }
          }
        }
        iVar4 = STField<int>(this,0x5b4) + 1;
        if ((((iVar4 < g_worldGrid.sizeY) && (sVar1 = STField<short>(this,0x5b8), -1 < sVar6)) &&
            (sVar6 < g_worldGrid.sizeX)) &&
           (((sVar3 = (short)iVar4, -1 < sVar3 && (sVar3 < g_worldGrid.sizeY)) &&
            ((-1 < sVar1 &&
             ((sVar1 < g_worldGrid.sizeZ &&
              (pSVar2 = STGridAt3D(g_worldGrid, sVar6, sVar3, sVar1).objects[0],
              pSVar2 != nullptr)))))))) {
          /* ST_CALLSITE[004CE3E4]: CALL dword ptr [EAX + 0x2c] */
          iVar4 = pSVar2->GetObjectTypeId();
          if (0x53 < iVar4) {
            /* ST_CALLSITE[004CE3F0]: CALL dword ptr [EDX + 0x2c] */
            iVar4 = pSVar2->GetObjectTypeId();
            if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
              *(undefined4 *)&pSVar2[0x29].field_0xf = STField<undefined4>(this,0x5d3);
              thunk_FUN_004ce250(pSVar2,1);
            }
          }
        }
        iVar4 = STField<int>(this,0x5b0) + -1;
        sVar6 = (short)STField<undefined4>(this,0x5b4);
        if (-1 < iVar4) {
          sVar1 = STField<short>(this,0x5b8);
          sVar3 = (short)iVar4;
          if ((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
             (((sVar6 < g_worldGrid.sizeY && (-1 < sVar1)) &&
              ((sVar1 < g_worldGrid.sizeZ &&
               (pSVar2 = STGridAt3D(g_worldGrid, sVar3, sVar6, sVar1).objects[0],
               pSVar2 != nullptr)))))) {
            /* ST_CALLSITE[004CE48F]: CALL dword ptr [EDX + 0x2c] */
            iVar4 = pSVar2->GetObjectTypeId();
            if (0x53 < iVar4) {
              /* ST_CALLSITE[004CE49B]: CALL dword ptr [EAX + 0x2c] */
              iVar4 = pSVar2->GetObjectTypeId();
              if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
                *(undefined4 *)&pSVar2[0x29].field_0xf = STField<undefined4>(this,0x5d3);
                thunk_FUN_004ce250(pSVar2,1);
              }
            }
          }
        }
        iVar4 = STField<int>(this,0x5b0) + 1;
        if (iVar4 < g_worldGrid.sizeX) {
          sVar1 = STField<short>(this,0x5b8);
          sVar3 = (short)iVar4;
          if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
              ((sVar6 < g_worldGrid.sizeY && (-1 < sVar1)))) &&
             ((sVar1 < g_worldGrid.sizeZ &&
              (pSVar2 = STGridAt3D(g_worldGrid, sVar3, sVar6, sVar1).objects[0],
              pSVar2 != nullptr)))) {
            /* ST_CALLSITE[004CE532]: CALL dword ptr [EDX + 0x2c] */
            iVar4 = pSVar2->GetObjectTypeId();
            if (0x53 < iVar4) {
              /* ST_CALLSITE[004CE53E]: CALL dword ptr [EAX + 0x2c] */
              iVar4 = pSVar2->GetObjectTypeId();
              if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
                *(undefined4 *)&pSVar2[0x29].field_0xf = STField<undefined4>(this,0x5d3);
                thunk_FUN_004ce250(pSVar2,1);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


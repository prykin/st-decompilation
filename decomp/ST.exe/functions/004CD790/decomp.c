#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004cd790(RecoveredRecordView_004CD790_D51B3E61 *param_1)

{
  STWorldObject *pSVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;

  iVar3 = param_1->field_05B4 + -1;
  sVar5 = (short)param_1->field_05B0;
  if (((((((-1 < iVar3) && (sVar6 = param_1->field_05B8, -1 < sVar5)) && (sVar5 < g_worldGrid.sizeX)
         ) && ((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)))) &&
       ((-1 < sVar6 &&
        ((sVar6 < g_worldGrid.sizeZ &&
         (pSVar1 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar6).objects[0], pSVar1 != nullptr)))))) &&
      /* ST_CALLSITE[004CD81A]: CALL dword ptr [EAX + 0x2c] */
      (iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3)) &&
     /* ST_CALLSITE[004CD826]: CALL dword ptr [EDX + 0x2c] */
     ((iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b &&
      (*(int *)&pSVar1[0x29].field_0xf == 0)))) {
    *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;

    thunk_FUN_004ce250(pSVar1,1);
  }
  iVar3 = param_1->field_05B4 + 1;
  if (((((iVar3 < g_worldGrid.sizeY) && (sVar6 = param_1->field_05B8, -1 < sVar5)) &&
       (sVar5 < g_worldGrid.sizeX)) &&
      (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)) &&
       ((-1 < sVar6 &&
        ((sVar6 < g_worldGrid.sizeZ &&
         (pSVar1 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar6).objects[0], pSVar1 != nullptr)))))))) &&
     /* ST_CALLSITE[004CD8C9]: CALL dword ptr [EDX + 0x2c] */
     ((iVar4 = pSVar1->GetObjectTypeId(), 0x53 < iVar4 &&
      /* ST_CALLSITE[004CD8D5]: CALL dword ptr [EAX + 0x2c] */
      ((iVar4 = pSVar1->GetObjectTypeId(), iVar4 < 0x5b &&
       (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
    *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;

    thunk_FUN_004ce250(pSVar1,1);
  }
  iVar4 = param_1->field_05B0 + 1;
  if (iVar4 < g_worldGrid.sizeX) {
    iVar3 = param_1->field_05B4 + -1;
    sVar5 = (short)iVar4;
    if (((((-1 < iVar3) && (sVar6 = param_1->field_05B8, -1 < sVar5)) && (sVar5 < g_worldGrid.sizeX)
         ) && (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)) &&
               ((-1 < sVar6 &&
                ((sVar6 < g_worldGrid.sizeZ &&
                 (pSVar1 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar6).objects[0],
                 pSVar1 != nullptr)))))))) &&
       /* ST_CALLSITE[004CD981]: CALL dword ptr [EDX + 0x2c] */
       ((iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3 &&
        /* ST_CALLSITE[004CD98D]: CALL dword ptr [EAX + 0x2c] */
        ((iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;

      thunk_FUN_004ce250(pSVar1,1);
    }
    iVar3 = param_1->field_05B4 + 2;
    if ((((((iVar3 < g_worldGrid.sizeY) && (sVar6 = param_1->field_05B8, -1 < sVar5)) &&
          (sVar5 < g_worldGrid.sizeX)) &&
         ((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)))) && (-1 < sVar6)) &&
       (((sVar6 < g_worldGrid.sizeZ &&
         (pSVar1 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar6).objects[0], pSVar1 != nullptr)) &&
        /* ST_CALLSITE[004CDA3C]: CALL dword ptr [EAX + 0x2c] */
        ((iVar4 = pSVar1->GetObjectTypeId(), 0x53 < iVar4 &&
         /* ST_CALLSITE[004CDA48]: CALL dword ptr [EDX + 0x2c] */
         ((iVar4 = pSVar1->GetObjectTypeId(), iVar4 < 0x5b &&
          (*(int *)&pSVar1[0x29].field_0xf == 0)))))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;

      thunk_FUN_004ce250(pSVar1,1);
    }
  }
  iVar4 = param_1->field_05B0 + -1;
  if (-1 < iVar4) {
    sVar5 = param_1->field_05B8;
    sVar6 = (short)iVar4;
    if (((((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar5)))) &&
       (((sVar5 < g_worldGrid.sizeZ &&
         ((pSVar1 = STGridAt3D(g_worldGrid, sVar6, sVar2, sVar5).objects[0], pSVar1 != nullptr &&
          /* ST_CALLSITE[004CDAE4]: CALL dword ptr [EDX + 0x2c] */
          (iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3)))) &&
        /* ST_CALLSITE[004CDAF0]: CALL dword ptr [EAX + 0x2c] */
        ((iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;

      thunk_FUN_004ce250(pSVar1,1);
    }
    iVar3 = param_1->field_05B4 + 1;
    if (((((iVar3 < g_worldGrid.sizeY) && (sVar5 = param_1->field_05B8, -1 < sVar6)) &&
         (sVar6 < g_worldGrid.sizeX)) &&
        (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)) &&
         ((-1 < sVar5 &&
          ((sVar5 < g_worldGrid.sizeZ &&
           (pSVar1 = STGridAt3D(g_worldGrid, sVar6, sVar2, sVar5).objects[0],
           pSVar1 != nullptr)))))))) &&
       /* ST_CALLSITE[004CDB9B]: CALL dword ptr [EAX + 0x2c] */
       ((iVar4 = pSVar1->GetObjectTypeId(), 0x53 < iVar4 &&
        /* ST_CALLSITE[004CDBA7]: CALL dword ptr [EDX + 0x2c] */
        ((iVar4 = pSVar1->GetObjectTypeId(), iVar4 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;

      thunk_FUN_004ce250(pSVar1,1);
    }
  }
  iVar4 = param_1->field_05B0 + 2;
  if (iVar4 < g_worldGrid.sizeX) {
    sVar5 = param_1->field_05B8;
    sVar6 = (short)iVar4;
    if (((((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar5)))) &&
       ((((sVar5 < g_worldGrid.sizeZ &&
          ((pSVar1 = STGridAt3D(g_worldGrid, sVar6, sVar2, sVar5).objects[0],
           pSVar1 != nullptr &&
           /* ST_CALLSITE[004CDC48]: CALL dword ptr [EDX + 0x2c] */
           (iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3)))) &&
         /* ST_CALLSITE[004CDC54]: CALL dword ptr [EAX + 0x2c] */
         (iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b)) &&
        (*(int *)&pSVar1[0x29].field_0xf == 0)))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;

      thunk_FUN_004ce250(pSVar1,1);
    }
    iVar3 = param_1->field_05B4 + 1;
    if ((((iVar3 < g_worldGrid.sizeY) && (sVar5 = param_1->field_05B8, -1 < sVar6)) &&
        (sVar6 < g_worldGrid.sizeX)) &&
       (((((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)) &&
          ((-1 < sVar5 &&
           ((sVar5 < g_worldGrid.sizeZ &&
            (pSVar1 = STGridAt3D(g_worldGrid, sVar6, sVar2, sVar5).objects[0],
            pSVar1 != nullptr)))))) &&
         /* ST_CALLSITE[004CDCF9]: CALL dword ptr [EAX + 0x2c] */
         (iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3)) &&
        /* ST_CALLSITE[004CDD05]: CALL dword ptr [EDX + 0x2c] */
        ((iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;

      thunk_FUN_004ce250(pSVar1,1);
    }
  }
  return 0;
}


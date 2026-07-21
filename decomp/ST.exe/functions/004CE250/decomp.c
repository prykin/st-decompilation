
undefined4 __thiscall FUN_004ce250(void *this,int param_1)

{
  short sVar1;
  STWorldObject *pSVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  void *local_8;

  local_8 = (void *)0x0;
  if ((*(int *)((int)this + 0x5d3) != 0) && (*(int *)((int)this + 0x4d4) == 0)) {
    iVar4 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x5d3),(int *)&local_8);
    if (iVar4 == 0) {
      thunk_FUN_004cdeb0(local_8,*(undefined4 *)((int)this + 0x18));
      uVar5 = thunk_FUN_004cdf80(local_8,*(int *)((int)this + 0x18));
      *(undefined4 *)((int)this + 0x4d4) = uVar5;
      if (param_1 != 0) {
        iVar4 = *(int *)((int)this + 0x5b4) + -1;
        sVar6 = (short)*(undefined4 *)((int)this + 0x5b0);
        if (((((-1 < iVar4) && (sVar1 = *(short *)((int)this + 0x5b8), -1 < sVar6)) &&
             (sVar6 < g_worldGrid.sizeX)) &&
            ((sVar3 = (short)iVar4, -1 < sVar3 && (sVar3 < g_worldGrid.sizeY)))) &&
           ((-1 < sVar1 &&
            ((sVar1 < g_worldGrid.sizeZ &&
             (pSVar2 = g_worldGrid.cells
                       [(int)g_worldGrid.planeStride * (int)sVar1 +
                        (int)g_worldGrid.sizeX * (int)sVar3 + (int)sVar6].objects[0],
             pSVar2 != (STWorldObject *)0x0)))))) {
          iVar4 = (*pSVar2->vtable->GetObjectTypeId)(pSVar2);
          if (0x53 < iVar4) {
            iVar4 = (*pSVar2->vtable->GetObjectTypeId)(pSVar2);
            if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
              *(undefined4 *)&pSVar2[0x29].field_0xf = *(undefined4 *)((int)this + 0x5d3);
              thunk_FUN_004ce250(pSVar2,1);
            }
          }
        }
        iVar4 = *(int *)((int)this + 0x5b4) + 1;
        if ((((iVar4 < g_worldGrid.sizeY) && (sVar1 = *(short *)((int)this + 0x5b8), -1 < sVar6)) &&
            (sVar6 < g_worldGrid.sizeX)) &&
           (((sVar3 = (short)iVar4, -1 < sVar3 && (sVar3 < g_worldGrid.sizeY)) &&
            ((-1 < sVar1 &&
             ((sVar1 < g_worldGrid.sizeZ &&
              (pSVar2 = g_worldGrid.cells
                        [(int)g_worldGrid.planeStride * (int)sVar1 +
                         (int)g_worldGrid.sizeX * (int)sVar3 + (int)sVar6].objects[0],
              pSVar2 != (STWorldObject *)0x0)))))))) {
          iVar4 = (*pSVar2->vtable->GetObjectTypeId)(pSVar2);
          if (0x53 < iVar4) {
            iVar4 = (*pSVar2->vtable->GetObjectTypeId)(pSVar2);
            if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
              *(undefined4 *)&pSVar2[0x29].field_0xf = *(undefined4 *)((int)this + 0x5d3);
              thunk_FUN_004ce250(pSVar2,1);
            }
          }
        }
        iVar4 = *(int *)((int)this + 0x5b0) + -1;
        sVar6 = (short)*(undefined4 *)((int)this + 0x5b4);
        if (-1 < iVar4) {
          sVar1 = *(short *)((int)this + 0x5b8);
          sVar3 = (short)iVar4;
          if ((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
             (((sVar6 < g_worldGrid.sizeY && (-1 < sVar1)) &&
              ((sVar1 < g_worldGrid.sizeZ &&
               (pSVar2 = g_worldGrid.cells
                         [(int)g_worldGrid.planeStride * (int)sVar1 +
                          (int)g_worldGrid.sizeX * (int)sVar6 + (int)sVar3].objects[0],
               pSVar2 != (STWorldObject *)0x0)))))) {
            iVar4 = (*pSVar2->vtable->GetObjectTypeId)(pSVar2);
            if (0x53 < iVar4) {
              iVar4 = (*pSVar2->vtable->GetObjectTypeId)(pSVar2);
              if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
                *(undefined4 *)&pSVar2[0x29].field_0xf = *(undefined4 *)((int)this + 0x5d3);
                thunk_FUN_004ce250(pSVar2,1);
              }
            }
          }
        }
        iVar4 = *(int *)((int)this + 0x5b0) + 1;
        if (iVar4 < g_worldGrid.sizeX) {
          sVar1 = *(short *)((int)this + 0x5b8);
          sVar3 = (short)iVar4;
          if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
              ((sVar6 < g_worldGrid.sizeY && (-1 < sVar1)))) &&
             ((sVar1 < g_worldGrid.sizeZ &&
              (pSVar2 = g_worldGrid.cells
                        [(int)g_worldGrid.planeStride * (int)sVar1 +
                         (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar3].objects[0],
              pSVar2 != (STWorldObject *)0x0)))) {
            iVar4 = (*pSVar2->vtable->GetObjectTypeId)(pSVar2);
            if (0x53 < iVar4) {
              iVar4 = (*pSVar2->vtable->GetObjectTypeId)(pSVar2);
              if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
                *(undefined4 *)&pSVar2[0x29].field_0xf = *(undefined4 *)((int)this + 0x5d3);
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


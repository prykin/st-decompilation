
bool __thiscall FUN_00495420(void *this,short *param_1,short *param_2,short *param_3)

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
         ((g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar1 +
            (int)sVar5].objects[0] != (STWorldObject *)0x0 &&
          (g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar1 +
            (int)sVar5].objects[0] != this)))))))) {
      return false;
    }
    *param_1 = sVar5;
    sVar5 = *(short *)((int)this + 0x6ab);
LAB_00495607:
    *param_2 = sVar5;
    *param_3 = *(short *)((int)this + 0x6ad) + 1;
    return true;
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
          (g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar6 +
            (int)sVar2].objects[0] == (STWorldObject *)0x0)))) {
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
      else if (g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar6 +
                (int)sVar2].objects[0] == this) {
        *param_1 = *(short *)((int)this + 0x6a9) + sVar3;
        sVar5 = *(short *)((int)this + 0x6ab) + sVar5;
        goto LAB_00495607;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return local_c != 1000000;
    }
  } while( true );
}


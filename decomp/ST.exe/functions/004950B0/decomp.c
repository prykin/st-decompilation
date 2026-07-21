
bool __thiscall FUN_004950b0(void *this,short *param_1,short *param_2,short *param_3)

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
  local_8 = 0;
  do {
    iVar7 = 0;
    do {
      iVar4 = *(short *)((int)this + 0x66f) + local_8;
      sVar6 = (short)iVar7;
      sVar2 = (short)local_8;
      if (((iVar4 == *(short *)((int)this + 0x5b)) &&
          (*(short *)((int)this + 0x671) + iVar7 == (int)*(short *)((int)this + 0x5d))) &&
         (*(short *)((int)this + 0x673) + 1 == (int)*(short *)((int)this + 0x5f))) {
        *param_1 = *(short *)((int)this + 0x66f) + sVar2;
        *param_2 = *(short *)((int)this + 0x671) + sVar6;
        *param_3 = *(short *)((int)this + 0x673) + 1;
        return true;
      }
      sVar1 = *(short *)((int)this + 0x673) + 1;
      sVar5 = sVar6 + *(short *)((int)this + 0x671);
      sVar3 = sVar2 + *(short *)((int)this + 0x66f);
      if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
           ((sVar5 < 0 || ((g_worldGrid.sizeY <= sVar5 || (sVar1 < 0)))))) ||
          (g_worldGrid.sizeZ <= sVar1)) ||
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar5 +
           (int)sVar3].objects[0] == (STWorldObject *)0x0)) {
        iVar4 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                             (int)*(short *)((int)this + 0x4b),iVar4,
                             *(short *)((int)this + 0x671) + iVar7,*(short *)((int)this + 0x673) + 1
                            );
        if (iVar4 < local_c) {
          *param_1 = *(short *)((int)this + 0x66f) + sVar2;
          *param_2 = sVar6 + *(short *)((int)this + 0x671);
          *param_3 = *(short *)((int)this + 0x673) + 1;
          local_c = iVar4;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return local_c != 1000000;
    }
  } while( true );
}


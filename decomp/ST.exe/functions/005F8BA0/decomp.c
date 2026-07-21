
undefined4 __thiscall FUN_005f8ba0(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;

  iVar4 = *(int *)((int)this + 0x285);
  do {
    if (4 < iVar4) {
      return 0;
    }
    sVar5 = (short)iVar4;
    iVar3 = thunk_FUN_004961b0(*(short *)((int)this + 0x27d),*(short *)((int)this + 0x281),sVar5);
    if (iVar3 != 0) {
      sVar1 = *(short *)((int)this + 0x27d);
      sVar2 = *(short *)((int)this + 0x281);
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
         (((g_worldGrid.sizeY <= sVar2 || (sVar5 < 0)) ||
          ((g_worldGrid.sizeZ <= sVar5 ||
           (g_worldGrid.cells
            [(int)sVar5 * (int)g_worldGrid.planeStride + (int)g_worldGrid.sizeX * (int)sVar2 +
             (int)sVar1].objects[0] == (STWorldObject *)0x0)))))) {
        *param_1 = *(undefined4 *)((int)this + 0x27d);
        *param_2 = *(undefined4 *)((int)this + 0x281);
        *param_3 = iVar4;
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



undefined4 __thiscall
FUN_00492550(void *this,short param_1,short param_2,short param_3,undefined2 *param_4,
            undefined2 *param_5,short *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1;
  iVar4 = iVar1 + -1;
  do {
    if (iVar1 + 1 < iVar4) {
      return 0;
    }
    if ((-1 < iVar4) && (iVar4 <= g_worldGrid.sizeX + -1)) {
      iVar3 = param_2 + -1;
      iVar2 = param_2 + 1;
      if (iVar3 <= iVar2) {
        _param_1 = g_worldGrid.sizeX * iVar3;
        do {
          if ((((-1 < iVar3) && (iVar3 <= g_worldGrid.sizeY + -1)) &&
              (g_pathingGrid.cells
               [g_pathingGrid.sizeX * iVar3 + iVar4 + (int)g_pathingGrid.planeStride * (int)param_3]
               == 0)) &&
             (g_worldGrid.cells[(int)g_worldGrid.planeStride * (int)param_3 + _param_1 + iVar4].
              objects[*(byte *)((int)this + 0x8e)] == (STWorldObject *)0x0)) {
            *param_4 = (short)iVar4;
            *param_5 = (short)iVar3;
            *param_6 = param_3;
            return 1;
          }
          _param_1 = _param_1 + g_worldGrid.sizeX;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar2);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



undefined4 __thiscall
FUN_005f88d0(void *this,int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 *param_5
            )

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;
  int iVar4;
  undefined4 uVar5;
  
  sVar1 = *(short *)((int)this + 0x285);
  sVar2 = *(short *)((int)this + 0x281);
  sVar3 = *(short *)((int)this + 0x27d);
  uVar5 = 0;
  if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
      ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) && (sVar1 < g_worldGrid.sizeZ)) {
    this_00 = g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar2 +
               (int)sVar3].objects[1];
    if ((this_00 != (STWorldObject *)0x0) && (this_00->value_20 == 0xbe)) {
      if (param_2 == 0) {
        iVar4 = thunk_FUN_00630340(this_00,param_1,(int *)0x0,(undefined4 *)0x0,(undefined4 *)0x0);
        if (iVar4 != 0) {
          uVar5 = 1;
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
  return uVar5;
}


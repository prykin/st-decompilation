
undefined4 __thiscall
FUN_005ecfe0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  
  if ((param_1 < 0) || (4 < param_1)) {
    if ((param_2 != -1) &&
       (((param_3 != -1 && (param_4 != -1)) &&
        (iVar3 = thunk_FUN_005ecd70(this,param_2,param_3,param_4,param_5,'\0',0x1e), iVar3 != 0))))
    {
      *(undefined4 *)((int)this + 0x23a) = 2;
      return 1;
    }
  }
  else {
    iVar3 = (int)*(short *)((int)this + 0x246);
    if ((param_1 == iVar3) && (*(int *)((int)this + 0x2ba) == param_5)) {
      return 0;
    }
    if (param_1 - iVar3 < 1) {
      sVar4 = -(ushort)(param_1 != iVar3);
    }
    else {
      sVar4 = 1;
    }
    sVar1 = *(short *)((int)this + 0x244);
    sVar4 = *(short *)((int)this + 0x246) + sVar4;
    sVar2 = *(short *)((int)this + 0x242);
    if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) ||
        ((sVar1 < 0 ||
         ((((g_worldGrid.sizeY <= sVar1 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)) ||
          ((g_worldGrid.cells
            [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar1 +
             (int)sVar2].objects[0] == (STWorldObject *)0x0 ||
           (g_worldGrid.cells
            [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar1 +
             (int)sVar2].objects[0] == this)))))))) &&
       (iVar3 = thunk_FUN_005ecd70(this,(int)(short)(sVar2 * 0xc9 + 100),
                                   (int)(short)(sVar1 * 0xc9 + 100),
                                   (int)(short)((short)param_1 * 200 + 100),param_5,'\0',0x1e),
       iVar3 != 0)) {
      *(undefined4 *)((int)this + 0x23a) = 2;
      return 1;
    }
  }
  return 0xffffffff;
}


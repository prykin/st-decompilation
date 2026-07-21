
undefined4 __thiscall FUN_005fa8b0(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  STFishC *this_00;
  undefined4 uVar5;
  STFishC *local_14;
  undefined4 local_10;
  short local_a;
  short local_8;
  short local_6;

  sVar1 = *(short *)((int)this + 0x25d);
  sVar2 = *(short *)((int)this + 0x265);
  sVar3 = *(short *)((int)this + 0x261);
  local_10 = 0;
  if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
      ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) ||
     ((g_worldGrid.sizeZ <= sVar2 ||
      (this_00 = (STFishC *)
                 g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                  (int)sVar1].objects[0], this_00 == (STFishC *)0x0)))) {
    if ((*(int *)((int)this + 0x255) == 0) ||
       (iVar4 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x255),(int *)&local_14), iVar4 == -4
       )) {
      return 0;
    }
    this_00 = local_14;
    uVar5 = 1;
  }
  else {
    uVar5 = local_10;
    if ((*(int *)&this_00->field_0x20 == 1000) &&
       (iVar4 = (*this_00->vtable->vfunc_2C)((STWorldObject *)this_00), uVar5 = local_10,
       iVar4 == 0x6e)) {
      uVar5 = 1;
    }
  }
  if (this_00 != (STFishC *)0x0) {
    STFishC::sub_004162B0(this_00,&local_6,&local_8,&local_a);
    *param_1 = (int)local_6;
    *param_2 = (int)local_8;
    *param_3 = local_a + 1;
  }
  return uVar5;
}


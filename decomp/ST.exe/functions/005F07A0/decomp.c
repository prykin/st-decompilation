
undefined4 __fastcall FUN_005f07a0(STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  STFishC *this;
  bool bVar3;
  short sVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined3 extraout_var_00;
  short local_a;
  short local_8;
  short local_6;
  
  if ((param_1->field_0x24f == '\0') && (0 < *(short *)&param_1->field_0x246)) {
    bVar3 = thunk_FUN_004961b0(*(short *)&param_1->field_0x242,*(short *)&param_1->field_0x244,
                               *(short *)&param_1->field_0x246 + -1);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      sVar1 = *(short *)&param_1->field_0x242;
      sVar2 = *(short *)&param_1->field_0x244;
      sVar4 = *(short *)&param_1->field_0x246 + -1;
      if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
         (((sVar2 < g_worldGrid.sizeY && (-1 < sVar4)) &&
          ((sVar4 < g_worldGrid.sizeZ &&
           (this = (STFishC *)
                   g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar2
                    + (int)sVar1].objects[0], this != (STFishC *)0x0)))))) {
        iVar5 = (*this->vtable->vfunc_2C)();
        if (iVar5 == 99) {
          iVar5 = thunk_FUN_004b7d00(this,(int *)param_1);
          if (iVar5 != 0) {
            iVar5 = thunk_FUN_005f09b0(param_1,(AnonShape_005EFAE0_B406B78B *)this);
            if (iVar5 != 0) {
              bVar3 = thunk_FUN_004b7d90((int *)this);
              if (CONCAT31(extraout_var_00,bVar3) != 0) {
                STFishC::sub_004162B0(this,&local_6,&local_8,&local_a);
                iVar5 = thunk_FUN_005ecd70(param_1,(local_6 + 1) * 0xc9,(local_8 + 1) * 0xc9,
                                           local_a * 0xc9 + 0x96,*(int *)&param_1->field_0x2ba,
                                           '\x01',0x3c);
                if (iVar5 != 0) {
                  return 1;
                }
              }
              thunk_FUN_004b7d50(this,param_1);
            }
          }
        }
      }
    }
  }
  return 0;
}


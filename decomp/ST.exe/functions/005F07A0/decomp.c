
undefined4 __fastcall FUN_005f07a0(STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  STFishC *this;
  short sVar3;
  int iVar4;
  dword dVar5;
  short local_a;
  short local_8;
  short local_6;

  if ((param_1->field_024F == '\0') && (0 < (short)param_1->field_0246)) {
    iVar4 = thunk_FUN_004961b0(param_1->field_0242,*(short *)&param_1->field_0x244,
                               param_1->field_0246 + -1);
    if (iVar4 == 0) {
      sVar1 = param_1->field_0242;
      sVar2 = *(short *)&param_1->field_0x244;
      sVar3 = param_1->field_0246 + -1;
      if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
         (((sVar2 < g_worldGrid.sizeY && (-1 < sVar3)) &&
          ((sVar3 < g_worldGrid.sizeZ &&
           (this = (STFishC *)
                   g_worldGrid.cells
                   [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2
                    + (int)sVar1].objects[0], this != (STFishC *)0x0)))))) {
        dVar5 = (*this->vtable->slot_2C)(this);
        if (dVar5 == 99) {
          iVar4 = thunk_FUN_004b7d00(this,param_1);
          if (iVar4 != 0) {
            iVar4 = thunk_FUN_005f09b0(param_1,(AnonShape_005EFAE0_B406B78B *)this);
            if (iVar4 != 0) {
              iVar4 = thunk_FUN_004b7d90((int *)this);
              if (iVar4 != 0) {
                STFishC::sub_004162B0(this,&local_6,&local_8,&local_a);
                iVar4 = thunk_FUN_005ecd70(param_1,(local_6 + 1) * 0xc9,(local_8 + 1) * 0xc9,
                                           local_a * 0xc9 + 0x96,param_1->field_02BA,'\x01',0x3c);
                if (iVar4 != 0) {
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



undefined4 __fastcall FUN_005edc20(AnonShape_005EDC20_3D37DB9E *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  if (0 < param_1->field_005F) {
    sVar2 = param_1->field_005D;
    sVar1 = param_1->field_005F + -1;
    sVar3 = param_1->field_005B;
    if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) &&
       ((sVar1 < g_worldGrid.sizeZ &&
        (this = g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar2 +
                 (int)sVar3].objects[0], this != (STWorldObject *)0x0)))) {
      iVar4 = (*this->vtable->GetObjectTypeId)(this);
      if ((iVar4 == 0x52) || (iVar4 == 0x5f)) {
        if ((*(int *)&this[0x23].field_0x1c == *(int *)&param_1->field_0x18) &&
           ((*(int *)&this[0x22].field_0x8 == 3 &&
            (iVar4 = thunk_FUN_004ac910((void *)((int)&this[0xd].vtable + 1),'\x0e'),
            iVar4 == *(int *)(*(int *)((int)&this[0xd].value_20 + 1) + 0x20c))))) {
          uVar12 = param_1->field_02C6;
          uVar10 = param_1->field_02C2;
          uVar8 = param_1->field_02BE;
          iVar4 = (**(code **)(*(int *)param_1 + 0x138))();
          iVar6 = (**(code **)(*(int *)param_1 + 0x130))();
          thunk_FUN_004ebda0(this,*(int *)&param_1->field_0x18,iVar6,iVar4,uVar8,uVar10,uVar12);
          thunk_FUN_005f05a0(param_1,(short)this[1].vtable,*(undefined2 *)&this[1].field_0xe);
          return 1;
        }
        return 0;
      }
      iVar4 = (*this->vtable->GetObjectTypeId)(this);
      if ((iVar4 == 99) && (*(int *)&this[0x22].field_0x8 == 2)) {
        uVar11 = 0;
        iVar9 = -100;
        iVar7 = -100;
        iVar6 = -100;
        iVar4 = 1;
        uVar5 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
        thunk_FUN_006377b0(uVar5,iVar4,iVar6,iVar7,iVar9,uVar11);
        return 2;
      }
    }
  }
  return 0xffffffff;
}



void __thiscall
FUN_0062e240(void *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
            uint param_6)

{
  uint uVar1;
  STWorldObject *this_00;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  void *local_8;

  sVar4 = (short)param_2;
  local_8 = this;
  if (((((((-1 < sVar4) && (sVar4 < g_worldGrid.sizeX)) && (sVar5 = (short)param_3, -1 < sVar5)) &&
        ((sVar5 < g_worldGrid.sizeY && (sVar2 = (short)param_4, -1 < sVar2)))) &&
       ((sVar2 < g_worldGrid.sizeZ &&
        ((this_00 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar5
                     + (int)sVar4].objects[0], this_00 != (STWorldObject *)0x0 &&
         (*(int *)&this_00->field_0x18 == param_5)))))) &&
      ((this_00->value_20 == 1000 &&
       (iVar3 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar3 == 0x6e)))) ||
     ((param_5 != 0 && (iVar3 = FUN_006e62d0(PTR_00802a38,param_5,(int *)&local_8), iVar3 != -4))))
  {
    uVar6 = param_6;
    if (param_6 == 0) {
      uVar6 = 1;
    }
    if (param_6 < 0x80000000) {
      iVar3 = 0;
      do {
        uVar1 = *(int *)((int)this + 0xb4) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0xb4) = uVar1;
        thunk_FUN_0062e170(param_1,param_2,param_3,param_4,param_5,(uVar1 >> 0x10) % 0x1f + iVar3,3)
        ;
        iVar3 = iVar3 + 0x1e;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}


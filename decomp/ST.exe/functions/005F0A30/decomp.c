
/* [STPrototypeApplier] Propagated return.
   Evidence: 005F0A30 returns return of FUN_004b7d50 @ 005F0B4F */

bool __fastcall FUN_005f0a30(STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  STWorldObject *this;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  uVar5 = (uint)(byte)param_1->field_0x24f;
  if ((param_1->field_0x24f != 0) &&
     (uVar5 = (uint)*(ushort *)&param_1->field_0x246, 0 < (short)*(ushort *)&param_1->field_0x246))
  {
    uVar5 = thunk_FUN_004961b0(*(short *)&param_1->field_0x242,*(short *)&param_1->field_0x244,
                               (short)(uVar5 - 1));
    if (uVar5 == 0) {
      sVar1 = *(short *)&param_1->field_0x242;
      sVar2 = *(short *)&param_1->field_0x244;
      uVar4 = *(short *)&param_1->field_0x246 - 1;
      uVar5 = (uint)uVar4;
      if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
         (((sVar2 < g_worldGrid.sizeY && (-1 < (short)uVar4)) && ((short)uVar4 < g_worldGrid.sizeZ))
         )) {
        uVar5 = (uint)sVar1;
        this = g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)(short)uVar4 +
                (int)g_worldGrid.sizeX * (int)sVar2 + uVar5].objects[0];
        if (this != (STWorldObject *)0x0) {
          uVar5 = (*this->vtable->GetObjectTypeId)(this);
          if (uVar5 == 99) {
            iVar6 = (*param_1->vtable[1].vfunc_14)();
            iVar7 = (*param_1->vtable[1].vfunc_0C)();
            iVar8 = (*param_1->vtable->vfunc_2C)();
            thunk_FUN_004b7e30(this,iVar8,iVar7,iVar6);
            iVar6 = (*param_1->vtable->vfunc_AC)(*(undefined4 *)&this->field_0x18);
            uVar5 = 0;
            if (iVar6 != 0) {
              thunk_FUN_004b7de0((int *)this);
              bVar3 = thunk_FUN_004b7d50(this,param_1);
              uVar5 = (uint)bVar3;
            }
          }
        }
      }
    }
  }
  return SUB41(uVar5,0);
}



/* [STPrototypeApplier] Propagated return.
   Evidence: 005EF7A0 returns return of FUN_005ef4b0 @ 005EF8CD | 005EF7A0 returns return of
   FUN_005ef4b0 @ 005EF8DE */

bool __thiscall FUN_005ef7a0(void *this,short param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;

  sVar1 = param_1;
  _param_1 = (STWorldObject *)(uint)(ushort)param_1;
  if (*(char *)((int)this + 0x252) == '\0') {
    if (((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
        (((param_2 < g_worldGrid.sizeY && (-1 < param_3)) &&
         ((param_3 < g_worldGrid.sizeZ &&
          (g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)param_3 + (int)g_worldGrid.sizeX * (int)param_2 +
            (int)sVar1].objects[0] != (STWorldObject *)0x0)))))) ||
       (_param_1 = (STWorldObject *)DumpClassC::WritePtr(sVar1,param_2,param_3,0,this),
       _param_1 != (STWorldObject *)0x0)) goto cf_common_exit_005EF8D0;
    *(char *)((int)this + 0x252) = *(char *)((int)this + 0x252) + '\x01';
  }
  else {
    sVar1 = *(short *)((int)this + 0x242);
    sVar2 = *(short *)((int)this + 0x246);
    sVar3 = *(short *)((int)this + 0x244);
    if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
       ((sVar3 < 0 ||
        (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
      _param_1 = (STWorldObject *)0x0;
    }
    else {
      _param_1 = g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                  (int)sVar1].objects[0];
    }
    if (_param_1 != this) goto cf_common_exit_005EF8D0;
  }
  iVar4 = thunk_FUN_005ef4b0(this,*(int *)((int)this + 0x273));
  _param_1 = (STWorldObject *)0x0;
  if (iVar4 != 0) {
    *(undefined4 *)((int)this + 0x23a) = 2;
    return SUB41(iVar4,0);
  }
cf_common_exit_005EF8D0:
  *(undefined4 *)((int)this + 0x23a) = 6;
  return SUB41(_param_1,0);
}


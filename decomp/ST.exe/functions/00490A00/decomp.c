
void __thiscall FUN_00490a00(void *this,short param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;

  sVar1 = *(short *)((int)this + 0x554);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((sVar1 != param_1) || (*(short *)((int)this + 0x556) != param_2)) ||
     (*(short *)((int)this + 0x558) != param_3)) {
    sVar2 = *(short *)((int)this + 0x558);
    sVar3 = *(short *)((int)this + 0x556);
    if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
        ((-1 < sVar3 && ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))))) &&
       (sVar2 < g_worldGrid.sizeZ)) {
      this_00 = g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                 (int)sVar1].objects[0];
      if (this_00 != (STWorldObject *)0x0) {
        thunk_FUN_004e22a0(this_00,*(int *)((int)this + 0x568),*(int *)((int)this + 0x18));
        thunk_FUN_004e2000(this_00,*(int *)((int)this + 0x568),*(int *)((int)this + 0x18));
      }
    }
    *(undefined4 *)((int)this + 0x564) = 1;
    *(short *)((int)this + 0x554) = param_1;
    *(short *)((int)this + 0x556) = param_2;
    *(short *)((int)this + 0x558) = param_3;
  }
  return;
}



void __fastcall FUN_00493bc0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this;
  int iVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x45d) == 0x15) || (*(int *)(param_1 + 0x459) == 0x79)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar1 = *(short *)(param_1 + 0x639);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar2 = *(short *)(param_1 + 0x63d);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sVar3 = *(short *)(param_1 + 0x63b);
    if (((-1 < sVar1) &&
        (((sVar1 < g_worldGrid.sizeX && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeY)))) &&
       ((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)))) {
      this = g_worldGrid.cells
             [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
              (int)sVar1].objects[0];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((this != (STWorldObject *)0x0) && (*(int *)&this->field_0x18 == *(int *)(param_1 + 0x63f))
         ) {
        iVar4 = (*this->vtable[5].slots_00_28[2])();
        if (iVar4 != 0) {
          thunk_FUN_004e95c0(this,param_1);
        }
      }
    }
  }
  return;
}


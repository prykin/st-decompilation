
undefined4 FUN_004137f0(AnonShape_004137F0_350C8AE0 *param_1,int param_2,uint param_3,int param_4)

{
  AnonShape_004137F0_350C8AE0 *this;
  uint uVar1;
  int iVar2;
  void *pvVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  int iVar7;

  this = param_1;
  if ((int)param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
  }
  else if (9 < (int)param_3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 9;
  }
  uVar1 = param_3;
  param_1->field_0051 = param_3;
  iVar2 = ((param_4 * 4 + 0x2d) / 0x5a) * 0x5a;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  if (iVar2 == 0x168) {
    iVar2 = 0;
  }
  param_1->field_0055 = iVar2;
  param_1->field_0049 = param_1->field_0049 | 1;
  if (param_2 != -1) {
    param_1->field_004D = param_2;
    FreeAndNull((void **)&param_1->field_0x59);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_2 == -2) || (param_2 == -3)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(param_1->field_0029 + 0xc);
    param_1->field_0049 = param_1->field_0049 & 0xfffffffe;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    pvVar3 = Library::DKW::LIB::MemAlloc(iVar5 * 0x10 + 0xc);
    *(void **)&this->field_0x59 = pvVar3;
    piVar6 = (int *)((int)pvVar3 + 0xc);
    *(int *)((int)pvVar3 + 4) = iVar2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    *(uint *)(*(int *)&this->field_0x59 + 8) = uVar1;
    **(undefined4 **)&this->field_0x59 = 0;
    if (0 < iVar5) {
      do {
        iVar2 = this->field_0029;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(uint *)(iVar2 + 0xc) <= param_3) ||
           (psVar4 = (short *)(*(int *)(iVar2 + 8) * param_3 + *(int *)(iVar2 + 0x1c)),
           psVar4 == nullptr)) break;
        if (*psVar4 != -1) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar2 = thunk_FUN_00423e70(this,CONCAT22((short)((uint)psVar4 >> 0x10),*psVar4));
          if (iVar2 != 0) {
            iVar7 = *(int *)(iVar2 + 199);
            if ((((iVar7 < 0) || (g_pathingGrid.sizeX <= iVar7)) || (*(int *)(iVar2 + 0xcb) < 0)) ||
               ((((int)g_pathingGrid.sizeY <= *(int *)(iVar2 + 0xcb) || (*(int *)(iVar2 + 0xcf) < 0)
                 ) || ((int)g_pathingGrid.sizeZ <= *(int *)(iVar2 + 0xcf))))) {
              *piVar6 = *(short *)(iVar2 + 0x5b) * 4 + 2;
              piVar6[1] = *(short *)(iVar2 + 0x5d) * 4 + 2;
              iVar7 = (int)*(short *)(iVar2 + 0x5f);
            }
            else {
              *piVar6 = iVar7 * 4 + 2;
              piVar6[1] = *(int *)(iVar2 + 0xcb) * 4 + 2;
              iVar7 = *(int *)(iVar2 + 0xcf);
            }
            piVar6[2] = iVar7 * 4 + 2;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (AnonShape_004137F0_350C8AE0 *)(&param_1->field_0x0 + *piVar6);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_4 = param_4 + piVar6[1];
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + piVar6[2];
            piVar6[3] = (uint)*(ushort *)(iVar2 + 0x32);
            piVar6 = piVar6 + 4;
            **(int **)&this->field_0x59 = **(int **)&this->field_0x59 + 1;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar5);
    }
    iVar2 = **(int **)&this->field_0x59;
    iVar5 = iVar2 / 2;
    piVar6 = *(int **)&this->field_0x59 + 3;
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        *piVar6 = *piVar6 - (int)(&param_1->field_0x0 + iVar5) / iVar2;
        piVar6[1] = piVar6[1] - (iVar5 + param_4) / iVar2;
        piVar6[2] = piVar6[2] - (param_2 + iVar5) / iVar2;
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar7 < **(int **)&this->field_0x59);
    }
  }
  return 0;
}


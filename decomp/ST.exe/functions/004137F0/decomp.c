
undefined4 FUN_004137f0(AnonShape_004137F0_350C8AE0 *param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  AnonShape_004137F0_350C8AE0 *this;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ushort *puVar5;
  STGameObjC *pSVar6;
  int iVar7;
  int *piVar8;
  int iVar9;

  this = param_1;
  if ((int)param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
  }
  else if (9 < (int)param_3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 9;
  }
  uVar2 = param_3;
  param_1->field_0051 = param_3;
  iVar3 = ((param_4 * 4 + 0x2d) / 0x5a) * 0x5a;
  iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
  if (iVar3 == 0x168) {
    iVar3 = 0;
  }
  param_1->field_0055 = iVar3;
  param_1->field_0049 = param_1->field_0049 | 1;
  if (param_2 != -1) {
    param_1->field_004D = param_2;
    FreeAndNull((void **)&param_1->field_0x59);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_2 == -2) || (param_2 == -3)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar7 = *(int *)(param_1->field_0029 + 0xc);
    param_1->field_0049 = param_1->field_0049 & 0xfffffffe;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = nullptr;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    pvVar4 = Library::DKW::LIB::MemAlloc(iVar7 * 0x10 + 0xc);
    *(void **)&this->field_0x59 = pvVar4;
    piVar8 = (int *)((int)pvVar4 + 0xc);
    *(int *)((int)pvVar4 + 4) = iVar3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    *(uint *)(*(int *)&this->field_0x59 + 8) = uVar2;
    **(undefined4 **)&this->field_0x59 = 0;
    if (0 < iVar7) {
      do {
        iVar3 = this->field_0029;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(uint *)(iVar3 + 0xc) <= param_3) ||
           (puVar5 = (ushort *)(*(int *)(iVar3 + 8) * param_3 + *(int *)(iVar3 + 0x1c)),
           puVar5 == nullptr)) break;
        uVar1 = *puVar5;
        if (uVar1 != 0xffff) {
          pSVar6 = thunk_FUN_00423e70(this,uVar1);
          if (pSVar6 != nullptr) {
            iVar3 = pSVar6->field_00C7;
            if ((((iVar3 < 0) || (g_pathingGrid.sizeX <= iVar3)) || (pSVar6->field_00CB < 0)) ||
               ((((int)g_pathingGrid.sizeY <= pSVar6->field_00CB || (pSVar6->field_00CF < 0)) ||
                ((int)g_pathingGrid.sizeZ <= pSVar6->field_00CF)))) {
              *piVar8 = pSVar6->field_005B * 4 + 2;
              piVar8[1] = pSVar6->field_005D * 4 + 2;
              iVar3 = (int)pSVar6->field_005F;
            }
            else {
              *piVar8 = iVar3 * 4 + 2;
              piVar8[1] = pSVar6->field_00CB * 4 + 2;
              iVar3 = pSVar6->field_00CF;
            }
            piVar8[2] = iVar3 * 4 + 2;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = (AnonShape_004137F0_350C8AE0 *)(&param_1->field_0x0 + *piVar8);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_4 = param_4 + piVar8[1];
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + piVar8[2];
            piVar8[3] = (uint)(ushort)pSVar6->field_0032;
            piVar8 = piVar8 + 4;
            **(int **)&this->field_0x59 = **(int **)&this->field_0x59 + 1;
          }
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar7);
    }
    iVar3 = **(int **)&this->field_0x59;
    iVar7 = iVar3 / 2;
    piVar8 = *(int **)&this->field_0x59 + 3;
    iVar9 = 0;
    if (0 < iVar3) {
      do {
        *piVar8 = *piVar8 - (int)(&param_1->field_0x0 + iVar7) / iVar3;
        piVar8[1] = piVar8[1] - (iVar7 + param_4) / iVar3;
        piVar8[2] = piVar8[2] - (param_2 + iVar7) / iVar3;
        iVar9 = iVar9 + 1;
        piVar8 = piVar8 + 4;
      } while (iVar9 < **(int **)&this->field_0x59);
    }
  }
  return 0;
}


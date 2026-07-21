
int FUN_006c6ae0(AnonShape_006C6AE0_9C4F43C2 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short local_14;
  short local_12;
  byte local_10;
  undefined1 local_f;
  short local_c;
  short local_a;
  short local_8;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (*(code *)param_1->field_0042)(param_1,&local_c,6);
  if (iVar2 == 6) {
    if (local_c != 0x4947) {
      return -5;
    }
    if (local_a != 0x3846) {
      return -5;
    }
    if ((local_8 != 0x6137) && (local_8 != 0x6139)) {
      return -5;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (*(code *)param_1->field_0042)(param_1,&local_14,7);
    if (iVar2 == 7) {
      param_1->field_000C = (int)local_12;
      param_1->field_0008 = (int)local_14;
      iVar2 = 0;
      param_1->field_0011 = local_f;
      param_1->field_0010 = local_10 & 7;
      if ((local_10 & 0x80) != 0) {
        iVar1 = (1 << (local_10 & 7) + 1) * 3;
        iVar2 = FUN_006bfb70(iVar1);
        param_1->field_0012 = iVar2;
        if (iVar2 == 0) {
          return -2;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar2 = (*(code *)param_1->field_0042)(param_1,iVar2,iVar1);
        if (iVar2 == iVar1) {
          iVar2 = 0;
        }
        else {
          FreeAndNull((void **)&param_1->field_0012);
          if (-1 < iVar2) {
            iVar2 = -5;
          }
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (*(code *)param_1->field_004A)(param_1);
      param_1->field_0052 = uVar3;
      param_1->field_0056 = 4;
      return iVar2;
    }
  }
  if (-1 < iVar2) {
    return -5;
  }
  return iVar2;
}


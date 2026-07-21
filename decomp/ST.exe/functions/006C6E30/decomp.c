
int FUN_006c6e30(AnonShape_006C6E30_3C2F0429 *param_1)

{
  undefined1 *value;
  AnonShape_006C6E30_3C2F0429 *pAVar1;
  int iVar2;
  AnonShape_006C6E30_3C2F0429 *pAVar3;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  byte local_8;

  value = &param_1->field_0x2a;
  FreeAndNull((void **)value);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (*(code *)param_1->field_0042)(param_1,&local_10,9);
  if (iVar2 == 9) {
    param_1->field_001A = (int)local_10;
    param_1->field_001E = (int)local_e;
    param_1->field_0026 = (int)local_a;
    param_1->field_0022 = (int)local_c;
    if ((local_8 & 0x80) == 0) {
      param_1->field_0019 = param_1->field_0010;
    }
    else {
      param_1->field_0019 = local_8 & 7;
      pAVar1 = (AnonShape_006C6E30_3C2F0429 *)((1 << (local_8 & 7) + 1) * 3);
      iVar2 = FUN_006bfb70((int)pAVar1);
      *(int *)value = iVar2;
      if (iVar2 == 0) {
        return -2;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      pAVar3 = (AnonShape_006C6E30_3C2F0429 *)(*(code *)param_1->field_0042)(param_1,iVar2,pAVar1);
      if (pAVar3 != pAVar1) {
        FreeAndNull((void **)value);
        param_1 = pAVar3;
        if (-1 < (int)pAVar3) {
          param_1 = (AnonShape_006C6E30_3C2F0429 *)0xfffffffb;
        }
        return (int)param_1;
      }
    }
    param_1->field_0018 = (local_8 & 0x40) == 0x40;
    iVar2 = 0;
  }
  else if (-1 < iVar2) {
    return -5;
  }
  return iVar2;
}



int FUN_006d6290(AnonShape_006D6290_6C97E0B2 *param_1,int *param_2)

{
  AnonNested_006D6290_0018_C51D55FE *pAVar1;
  int iVar2;
  int iVar3;
  int local_10;
  AnonShape_006D6290_10462BC7 *local_c;
  int *local_8;

  pAVar1 = param_1->field_0018;
  local_c = pAVar1->field_005C;
  iVar2 = local_c->field_0288;
  local_10 = 0;
  if (pAVar1->field_006C != 0) {
    *param_2 = param_1->field_000C;
    return 0;
  }
  if (local_c->field_0310 != 0) {
    if ((*(uint *)(*(int *)(iVar2 + 0x28) + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + 0x28) + 0x4f0));
    }
    iVar3 = *(int *)(iVar2 + 0x28);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (*(code **)(iVar3 + 0x4e4) != (code *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar3 + 0x4e4))
                (*(undefined4 *)(iVar3 + 0x4ec),*(int *)(iVar3 + 0x10) + *(int *)(iVar2 + 0x18),
                 *(int *)(iVar3 + 0x14) + *(int *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),
                 *(undefined4 *)(iVar2 + 0x24));
    }
  }
  local_8 = &param_1->field_000C;
  param_1 = (AnonShape_006D6290_6C97E0B2 *)0x0;
  do {
    iVar3 = FUN_006bbe40(pAVar1->field_0064,(uint *)local_8,&local_10,0);
    if (iVar3 == 0) {
LAB_006d6394:
      iVar3 = *local_8;
      *param_2 = iVar3;
      if (local_c->field_0310 != 0) {
        *param_2 = *(int *)(iVar2 + 0x1c) * local_10 +
                   iVar3 + *(int *)(*(int *)(iVar2 + 0x28) + 0x28) * *(int *)(iVar2 + 0x18);
      }
      pAVar1->field_006C = 1;
      pAVar1->field_0068 = 0;
      return 0;
    }
    if (iVar3 != -0x7789fe3e) {
      if (iVar3 == 0) goto LAB_006d6394;
      goto LAB_006d6363;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*pAVar1->field_0064 + 0x6c))(pAVar1->field_0064);
    param_1 = (AnonShape_006D6290_6C97E0B2 *)&param_1->field_0x1;
    if (1 < (int)param_1) {
LAB_006d6363:
      if ((local_c->field_0310 != 0) && ((*(uint *)(*(int *)(iVar2 + 0x28) + 8) & 0x4000000) != 0))
      {
        LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + 0x28) + 0x4f0));
      }
      return iVar3;
    }
  } while( true );
}


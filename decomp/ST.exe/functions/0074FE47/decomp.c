
int FUN_0074fe47(AnonShape_0074FE47_5517BCCF *param_1)

{
  int iVar1;
  longlong lVar2;
  int iStack0000000c;

  lVar2 = Library::MSVCRT::__ftol();
  iStack0000000c = (int)((ulonglong)lVar2 >> 0x20);
  iVar1 = FUN_0074fea4((void *)param_1->field_0004,(uint)lVar2,iStack0000000c,param_1->field_0024);
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)param_1->field_0004 + 0xc))(&param_1[-1].field_0x1c);
    if (-1 < iVar1) {
      param_1->field_000C = (uint)lVar2;
      param_1->field_0010 = iStack0000000c;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)param_1->field_0004 + 8))();
    }
  }
  else {
    iVar1 = -0x7ffbfdcd;
  }
  return iVar1;
}


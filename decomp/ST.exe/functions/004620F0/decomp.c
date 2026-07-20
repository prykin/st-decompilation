
int __fastcall FUN_004620f0(STBoatC *param_1)

{
  int iVar1;
  
  if ((byte *)param_1->field_047B != (byte *)0x0) {
    FUN_006ae110((byte *)param_1->field_047B);
    param_1->field_047B = 0;
  }
  iVar1 = param_1->field_082E;
  if (((iVar1 != -1) && (iVar1 != 0)) && (iVar1 != 2)) {
    iVar1 = STBoatC::sub_00460360(param_1);
    return iVar1;
  }
  iVar1 = (*param_1->vtable->vfunc_D8)();
  if (iVar1 != 0) {
    return -1;
  }
  return 0;
}


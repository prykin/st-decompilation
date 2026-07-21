
HRESULT FUN_00746bab(LPUNKNOWN param_1,IID *param_2,void **param_3,int *param_4)

{
  int *piVar1;
  HRESULT HVar2;

  piVar1 = param_4;
  *param_4 = 0;
  HVar2 = CoCreateInstance((IID *)&DAT_007a1ab0,param_1,1,(IID *)&DAT_007a22b8,&param_4);
  if (-1 < HVar2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    HVar2 = (**(code **)*param_4)(param_4,&DAT_007a1aa0,&param_1);
    if (-1 < HVar2) {
      HVar2 = (*param_1->lpVtbl[1].QueryInterface)(param_1,param_2,param_3);
      (*param_1->lpVtbl->Release)(param_1);
      if (-1 < HVar2) {
        *piVar1 = (int)param_4;
        return 0;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_4 + 8))(param_4);
  }
  return HVar2;
}


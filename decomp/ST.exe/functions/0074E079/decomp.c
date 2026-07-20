
void __thiscall FUN_0074e079(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    FUN_0074dfb5(this,param_2);
  }
  else if (param_1 == *(int *)((int)this + 4)) {
    FUN_0074df72(this,param_2);
  }
  else {
    piVar2 = (int *)FUN_0074e2ff((AnonShape_0074E2FF_47CF731F *)((int)this + 0xc));
    if ((piVar2 == (int *)0x0) &&
       (piVar2 = (int *)Library::MSVCRT::FUN_0072e530(0xc), piVar2 == (int *)0x0)) {
      return;
    }
    piVar2[2] = param_2;
    piVar1 = *(int **)(param_1 + 4);
    *piVar2 = param_1;
    piVar2[1] = (int)piVar1;
    *piVar1 = (int)piVar2;
    *(int **)(param_1 + 4) = piVar2;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return;
}


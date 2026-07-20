
void __thiscall FUN_005711d0(void *this,int *param_1)

{
  if (*param_1 != 0) {
    FUN_006e4c30(this,*param_1);
    FUN_006e4b80(this,*param_1);
    FUN_006e4d20(this,*param_1);
    (**(code **)(*(int *)*param_1 + 4))();
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)*param_1);
    *param_1 = 0;
  }
  return;
}


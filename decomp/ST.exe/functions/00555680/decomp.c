
void __thiscall FUN_00555680(void *this,char *param_1)

{
  if ((*(int **)((int)this + 0x4c) != (int *)0x0) && (param_1 != (char *)0x0)) {
    Library::MSVCRT::FUN_0072eb70(param_1,*(int **)((int)this + 0x4c));
    Library::MSVCRT::FUN_0072eb70(&DAT_007c8ff4,*(int **)((int)this + 0x4c));
  }
  return;
}


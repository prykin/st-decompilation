
void __thiscall FUN_006dd660(void *this,int param_1,int param_2,int param_3,int param_4)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (0 < param_3)) && (0 < param_4)) {
    *(int *)((int)this + 0x34) = param_2;
    *(int *)((int)this + 0x30) = param_1;
    *(int *)((int)this + 0x3c) = param_2 + param_4;
    *(int *)((int)this + 0x38) = param_1 + param_3;
    FUN_006dd050(this,*(uint *)((int)this + 0xa8),*(double *)((int)this + 0x88),
                 (double)CONCAT44(*(undefined4 *)((int)this + 0x94),
                                  *(undefined4 *)((int)this + 0x90)));
    return;
  }
  RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Strend_cpp_007ee758,0x3da);
  return;
}


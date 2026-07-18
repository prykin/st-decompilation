
undefined4 __thiscall FUN_00694640(void *this,uint param_1,uint param_2,uint param_3,int param_4)

{
  if ((param_1 < *(uint *)this) && (param_2 < *(uint *)((int)this + 4))) {
    if ((param_3 < *(uint *)((int)this + 8)) && ((-1 < param_4 && (param_4 < 2)))) {
      return *(undefined4 *)
              (*(int *)((int)this + 0x10) +
              (((*(uint *)((int)this + 8) * param_4 + param_3) * *(uint *)((int)this + 4) + param_2)
               * *(uint *)this + param_1) * 4);
    }
  }
  return 0;
}


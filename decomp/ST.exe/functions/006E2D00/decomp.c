
undefined2 __thiscall FUN_006e2d00(void *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0x28))) && (-1 < param_2)) &&
     (param_2 < *(int *)((int)this + 0x2c))) {
    return *(undefined2 *)
            (*(int *)((int)this + 0x14) + (*(int *)((int)this + 0x28) * param_2 + param_1) * 2);
  }
  return 0xffff;
}


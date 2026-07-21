
void __thiscall
FUN_006e2970(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            int *param_5)

{
  int local_20;
  int local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  FUN_006e25d0(this,&local_20);
  *param_4 = (local_20 >> 0x10) + *(int *)((int)this + 0x20);
  *param_5 = (local_1c >> 0x10) + *(int *)((int)this + 0x24);
  return;
}


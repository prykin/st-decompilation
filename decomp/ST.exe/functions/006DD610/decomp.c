
void __thiscall
FUN_006dd610(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *(undefined4 *)((int)this + 0x88) = param_2;
  *(undefined4 *)((int)this + 0x8c) = param_3;
  *(undefined4 *)((int)this + 0x90) = param_4;
  *(undefined4 *)((int)this + 0x94) = param_5;
  FUN_006dd050(this,param_1,(double)CONCAT44(param_3,param_2),(double)CONCAT44(param_5,param_4));
  return;
}


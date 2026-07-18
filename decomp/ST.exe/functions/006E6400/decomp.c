
void __thiscall
FUN_006e6400(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  *(undefined4 *)((int)this + 0x3dc) = param_3;
  *(undefined4 *)((int)this + 0x424) = param_3;
  *(undefined4 *)((int)this + 0x43e) = param_2;
  *(undefined4 *)((int)this + 0x418) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3e4) = param_4;
  *(undefined4 *)((int)this + 0x3e0) = 1;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x428) = *param_1;
    *(undefined4 *)((int)this + 0x42c) = param_1[1];
    *(undefined4 *)((int)this + 0x430) = param_1[2];
    *(undefined4 *)((int)this + 0x434) = param_1[3];
  }
  return;
}


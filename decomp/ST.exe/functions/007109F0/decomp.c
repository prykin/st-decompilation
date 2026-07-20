
void __thiscall FUN_007109f0(void *this,AnonShape_007109F0_BD33A2FF *param_1)

{
  if (param_1 != (AnonShape_007109F0_BD33A2FF *)0x0) {
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)param_1;
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)&param_1->field_0x4;
    *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)&param_1->field_000B + 1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)&param_1->field_0x10;
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)&param_1->field_0x14;
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)&param_1->field_0x18;
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)&param_1->field_0x1c;
    *(undefined4 *)((int)this + 100) = *(undefined4 *)&param_1->field_0x20;
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)&param_1->field_0x24;
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)&param_1->field_0x28;
    *(undefined2 *)((int)this + 0x70) = *(undefined2 *)&param_1->field_0x2c;
    *(undefined4 *)((int)this + 0x72) = param_1->field_002E;
    *(undefined4 *)((int)this + 0x76) = param_1->field_0032;
    *(undefined4 *)((int)this + 0x7a) = param_1->field_0036;
    *(undefined4 *)((int)this + 0x7e) = param_1->field_003A;
    *(undefined2 *)((int)this + 0x9e) = param_1->field_003E;
    *(undefined4 *)((int)this + 0x82) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((int)this + 0x96) = *(undefined4 *)&param_1[1].field_0x4;
  }
  return;
}


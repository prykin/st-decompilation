
void __thiscall thunk_FUN_0060bcb0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int aiStack_24 [8];
  
  piVar2 = aiStack_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (*(undefined4 **)((int)this + 0x221) != (undefined4 *)0x0) {
    aiStack_24[2] = *(undefined4 *)((int)this + 0x201);
    aiStack_24[3] = 4;
    aiStack_24[4] = 0x123;
    aiStack_24[5] = param_1;
    (**(code **)**(undefined4 **)((int)this + 0x221))(aiStack_24);
  }
  return;
}


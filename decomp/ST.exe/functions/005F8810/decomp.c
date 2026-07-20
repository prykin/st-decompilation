
void __thiscall FUN_005f8810(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;
  
  sVar1 = *(short *)((int)this + 0x285);
  sVar2 = *(short *)((int)this + 0x281);
  sVar3 = *(short *)((int)this + 0x27d);
  if (((((-1 < sVar3) && (sVar3 < SHORT_007fb240)) && (-1 < sVar2)) &&
      ((sVar2 < SHORT_007fb242 && (-1 < sVar1)))) && (sVar1 < SHORT_007fb244)) {
    this_00 = g_worldCells
              [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar2 + (int)sVar3].
              objects[1];
    if ((this_00 != (STWorldObject *)0x0) && (this_00->value_20 == 0xbe)) {
      thunk_FUN_0062f6c0(this_00,param_1);
    }
  }
  return;
}


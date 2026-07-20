
undefined4 __thiscall FUN_005f9050(void *this,int *param_1,undefined4 *param_2)

{
  STWorldObject *this_00;
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  short local_8;
  short local_6;
  
  STFishC::sub_004162B0(this,&local_8,&local_6,(undefined2 *)&local_c);
  sVar1 = (short)local_c + -1;
  if (((((-1 < local_8) && (local_8 < SHORT_007fb240)) && (-1 < local_6)) &&
      ((((local_6 < SHORT_007fb242 && (-1 < sVar1)) &&
        ((sVar1 < SHORT_007fb244 &&
         ((this_00 = g_worldCells
                     [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)local_6 +
                      (int)local_8].objects[0], this_00 != (STWorldObject *)0x0 &&
          (this_00->value_20 == 1000)))))) &&
       (iVar2 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar2 == 0x6e)))) &&
     (((*(int *)&this_00->field_0x18 == *(int *)((int)this + 0x255) &&
       (iVar2 = thunk_FUN_004dd740((int)this_00), iVar2 == 0)) &&
      (iVar2 = thunk_FUN_004dd6c0(this_00,*(undefined4 *)((int)this + 0x18)), iVar2 != 0)))) {
    thunk_FUN_004dd770(this_00,*(int *)((int)this + 0x18));
    thunk_FUN_00416270(this_00,&local_8,(int *)&local_6,&local_c);
    uVar3 = thunk_FUN_004ad650((int)((int)&this_00[0xd].vtable + 1));
    *param_2 = uVar3;
    *param_1 = (short)local_c + -0x5a;
    return 1;
  }
  return 0;
}


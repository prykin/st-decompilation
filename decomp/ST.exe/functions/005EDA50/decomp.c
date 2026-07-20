
undefined4 __fastcall FUN_005eda50(AnonShape_005EDA50_4BDBD797 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar5 = 0;
  local_18 = 0;
  if (0 < param_1->field_005F) {
    sVar2 = param_1->field_005D;
    sVar1 = param_1->field_005F + -1;
    sVar3 = param_1->field_005B;
    if ((((-1 < sVar3) && (sVar3 < SHORT_007fb240)) && (-1 < sVar2)) &&
       (((sVar2 < SHORT_007fb242 && (-1 < sVar1)) &&
        ((sVar1 < SHORT_007fb244 &&
         (this = g_worldCells
                 [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar2 + (int)sVar3].
                 objects[0], uVar5 = local_18, this != (STWorldObject *)0x0)))))) {
      if ((param_1->field_02E9 != '\0') &&
         (iVar4 = (**(code **)(*(int *)param_1 + 0x128))(), *(int *)&this->field_0x18 == iVar4)) {
        return 0;
      }
      iVar4 = (*this->vtable->GetObjectTypeId)(this);
      if ((((iVar4 == 0x52) || (iVar4 == 0x5f)) &&
          (iVar4 = thunk_FUN_004e1490((int)this), iVar4 != 0)) &&
         (*(int *)&this[0x23].field_0x1c == 0)) {
        iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
        thunk_FUN_004ebcb0(this,*(int *)&param_1->field_0x18,iVar4);
        thunk_FUN_004ebfd0(this,&local_14,&local_10,&local_c,&local_8);
        iVar4 = thunk_FUN_005ecd70(param_1,local_14,local_10,local_c,local_8,'\x01',0x3c);
        if (iVar4 != 0) {
          uVar5 = 1;
          if (param_1->field_0211 != (void *)0x0) {
            FUN_006ea460(param_1->field_0211,param_1->field_01ED,*(int *)&this[0xd].field_0x19);
            return 1;
          }
        }
      }
    }
  }
  return uVar5;
}


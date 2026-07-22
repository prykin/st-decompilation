
undefined4 __fastcall FUN_005eda50(AnonShape_005EDA50_4BDBD797 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STBoatC *this;
  uint uVar4;
  dword dVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  uVar7 = 0;
  local_18 = 0;
  if (0 < param_1->field_005F) {
    sVar2 = param_1->field_005D;
    sVar1 = param_1->field_005F + -1;
    sVar3 = param_1->field_005B;
    if ((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
       (((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)) &&
        ((sVar1 < g_worldGrid.sizeZ &&
         (this = (STBoatC *)
                 g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar2 +
                  (int)sVar3].objects[0], uVar7 = local_18, this != (STBoatC *)0x0)))))) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((param_1->field_02E9 != '\0') &&
         (uVar4 = (**(code **)(*(int *)param_1 + 0x128))(), this->field_0018 == uVar4)) {
        return 0;
      }
      dVar5 = (*this->vtable->slot_2C)(this);
      if ((((dVar5 == 0x52) || (dVar5 == 0x5f)) && (iVar6 = thunk_FUN_004e1490(this), iVar6 != 0))
         && (this->field_0508 == CASE_0)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar6 = (**(code **)(*(int *)param_1 + 0xc))();
        thunk_FUN_004ebcb0(this,*(int *)&param_1->field_0x18,iVar6);
        thunk_FUN_004ebfd0(this,&local_14,&local_10,&local_c,&local_8);
        iVar6 = thunk_FUN_005ecd70(param_1,local_14,local_10,local_c,local_8,'\x01',0x3c);
        if (iVar6 != 0) {
          uVar7 = 1;
          if (param_1->field_0211 != (AnonReceiver_006EA050 *)0x0) {
            SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::sub_006EA460
                      (param_1->field_0211,param_1->field_01ED,this->field_01ED);
            return 1;
          }
        }
      }
    }
  }
  return uVar7;
}


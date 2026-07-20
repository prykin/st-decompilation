
undefined4 __fastcall FUN_00615ad0(AnonShape_00615AD0_7BE8CE57 *param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = thunk_FUN_00615860((int)param_1->field_01F5,&local_10,&local_c,&local_8);
  if (iVar1 != 0) {
    if (param_1->field_02DD == 0) {
      iVar1 = Library::DKW::LIB::FUN_006aac70(0x1c);
      param_1->field_02DD = iVar1;
    }
    param_1->field_02D5 = 1;
    iVar1 = thunk_FUN_00615430(param_1,0,(int)param_1->field_01E9,(int)param_1->field_01EB,
                               (int)param_1->field_01ED,local_10,local_c,local_8,
                               (int)param_1->field_01EF,(int)param_1->field_01F1,
                               (undefined4 *)(int)param_1->field_01F3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


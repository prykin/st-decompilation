
undefined4 __fastcall FUN_00419a90(STFishC *param_1)

{
  char cVar1;
  STFishC *pSVar2;
  int iVar3;
  short local_a;
  short local_8;
  short local_6;
  
  if (*(int *)&param_1->field_0xe8 == 1) {
    *(undefined4 *)&param_1->field_0xe8 = 0;
    thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)param_1);
    return 1;
  }
  STFishC::sub_004162B0(param_1,&local_6,&local_8,&local_a);
  cVar1 = thunk_FUN_00416330((int)param_1);
  if (cVar1 == '\0') {
    cVar1 = thunk_FUN_00416350((int)param_1);
    if (cVar1 == '\0') {
      if ((((local_6 < 0) || (SHORT_007fb240 <= local_6)) || (local_8 < 0)) ||
         (((SHORT_007fb242 <= local_8 || (local_a < 0)) || (SHORT_007fb244 <= local_a)))) {
        pSVar2 = (STFishC *)0x0;
      }
      else {
        pSVar2 = *(STFishC **)
                  (DAT_007fb248 +
                  ((uint)(byte)param_1->field_0x8e +
                  ((int)SHORT_007fb246 * (int)local_a + (int)SHORT_007fb240 * (int)local_8 +
                  (int)local_6) * 2) * 4);
      }
      if (pSVar2 == param_1) {
        thunk_FUN_004167a0((AnonShape_004167A0_C6E28A87 *)param_1);
        return 1;
      }
    }
  }
  iVar3 = thunk_FUN_00416400((STJellyGunC *)param_1);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  if (iVar3 == 2) {
    thunk_FUN_004168b0((int)param_1);
  }
  return 0;
}



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
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::sub_004167A0
              ((AnonReceiver_00417FF0 *)param_1);
    return 1;
  }
  STFishC::sub_004162B0(param_1,&local_6,&local_8,&local_a);
  cVar1 = thunk_FUN_00416330((int)param_1);
  if (cVar1 == '\0') {
    cVar1 = thunk_FUN_00416350((int)param_1);
    if (cVar1 == '\0') {
      if ((((local_6 < 0) || (g_worldGrid.sizeX <= local_6)) || (local_8 < 0)) ||
         (((g_worldGrid.sizeY <= local_8 || (local_a < 0)) || (g_worldGrid.sizeZ <= local_a)))) {
        pSVar2 = (STFishC *)0x0;
      }
      else {
        pSVar2 = (STFishC *)
                 g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)local_a +
                  (int)g_worldGrid.sizeX * (int)local_8 + (int)local_6].objects
                 [(byte)param_1->field_0x8e];
      }
      if (pSVar2 == param_1) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::sub_004167A0
                  ((AnonReceiver_00417FF0 *)param_1);
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


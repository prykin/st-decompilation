
undefined4 __cdecl
FUN_00675b10(int param_1,int param_2,short param_3,short *param_4,short *param_5,short *param_6,
            undefined4 param_7)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  int local_24;
  short local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_24 = 1;
  local_c = param_2;
  do {
    local_10 = (param_1 - param_2) + local_c;
    local_18 = local_24;
    local_14 = local_24;
    local_8 = local_c;
    thunk_FUN_006756d0((short *)&local_10,(short *)&local_8,(short *)&local_14,(short *)&local_18);
    sVar3 = (short)local_10;
    sVar1 = (short)local_14 + -1 + sVar3;
    local_20 = (short)local_18 + -1 + (short)local_8;
    iVar6 = local_10;
    iVar2 = local_8;
    while (sVar3 <= sVar1) {
      sVar3 = (short)iVar2;
      iVar4 = iVar2;
      while (sVar3 <= local_20) {
        sVar3 = 0;
        sVar5 = param_3;
        do {
          sVar7 = (short)iVar6;
          sVar8 = (short)iVar4;
          iVar2 = thunk_FUN_004961b0(sVar7,sVar8,sVar5);
          if ((iVar2 != 0) &&
             (((((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) || (sVar8 < 0)) ||
               ((g_worldGrid.sizeY <= sVar8 || (sVar5 < 0)))) ||
              ((g_worldGrid.sizeZ <= sVar5 ||
               ((g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)sVar5 + (int)g_worldGrid.sizeX * (int)sVar8 +
                  (int)sVar7].objects[0] == (STWorldObject *)0x0 ||
                (iVar2 = (*g_worldGrid.cells
                           [(int)g_worldGrid.planeStride * (int)sVar5 +
                            (int)g_worldGrid.sizeX * (int)sVar8 + (int)sVar7].objects[0]->vtable[5].
                           slots_00_28[9])(param_7), iVar2 != 0)))))))) {
            *param_4 = sVar7;
            *param_5 = sVar8;
            *param_6 = sVar5;
            return 1;
          }
          sVar5 = sVar5 + 1;
          if (4 < sVar5) {
            sVar5 = 0;
          }
          sVar3 = sVar3 + 1;
        } while (sVar3 < 5);
        iVar4 = iVar4 + 1;
        iVar2 = local_8;
        sVar3 = (short)iVar4;
      }
      iVar6 = iVar6 + 1;
      sVar3 = (short)iVar6;
    }
    local_24 = local_24 + 2;
    local_c = local_c + -1;
    if (8 < (short)local_24) {
      *param_4 = (short)param_1;
      *param_5 = (short)param_2;
      *param_6 = param_3;
      return 0;
    }
  } while( true );
}


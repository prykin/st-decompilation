
undefined4 __cdecl
FUN_0058d160(short param_1,short param_2,short param_3,short param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,undefined2 *param_10,undefined2 *param_11,
            short *param_12)

{
  short sVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_8;
  
  iVar3 = param_5;
  local_8 = 0;
  iVar7 = ((param_8 - param_6 >> 1) + (int)*(short *)(param_5 + 0x41)) - param_6;
  iVar9 = ((param_9 - param_7 >> 1) + (int)*(short *)(param_5 + 0x43)) - param_7;
  do {
    iVar8 = iVar7;
    iVar10 = iVar9;
    if (local_8 != 0) {
      iVar8 = param_6;
      iVar10 = param_7;
    }
    iVar7 = iVar8;
    if (iVar8 < 0) {
      iVar7 = -iVar8;
    }
    iVar9 = iVar10;
    if (iVar10 < 0) {
      iVar9 = -iVar10;
    }
    if (iVar9 < iVar7) {
      while( true ) {
        while (-1 < iVar8) {
          iVar7 = *(short *)(iVar3 + 0x41) + 0xc9;
          if (iVar7 <= (short)(param_3 * 0xc9 + 100)) goto LAB_0058d1fe;
          iVar8 = -1;
        }
        iVar7 = *(short *)(iVar3 + 0x41) + -0xc9;
        if ((short)(param_1 * 0xc9 + 100) <= iVar7) break;
        iVar8 = 1;
      }
LAB_0058d1fe:
      param_6 = 0;
      iVar9 = (int)*(short *)(iVar3 + 0x43);
      param_7 = iVar10;
    }
    else {
      while( true ) {
        while (-1 < iVar10) {
          iVar9 = *(short *)(iVar3 + 0x43) + 0xc9;
          if (iVar9 <= (short)(param_4 * 0xc9 + 100)) goto LAB_0058d252;
          iVar10 = -1;
        }
        iVar9 = *(short *)(iVar3 + 0x43) + -0xc9;
        if ((short)(param_2 * 0xc9 + 100) <= iVar9) break;
        iVar10 = 1;
      }
LAB_0058d252:
      param_7 = 0;
      iVar7 = (int)*(short *)(iVar3 + 0x41);
      param_6 = iVar8;
    }
    sVar1 = *(short *)(iVar3 + 0x45);
    if (sVar1 < 0) {
      param_5 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                       (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      param_5 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
    }
    sVar1 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      sVar5 = (((short)(iVar9 / 0xc9) + sVar1) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar5 = ((short)(iVar9 / 0xc9) + sVar1) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f);
    }
    sVar2 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      sVar6 = (((short)(iVar7 / 0xc9) + sVar2) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar6 = ((short)(iVar7 / 0xc9) + sVar2) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f);
    }
    bVar4 = thunk_FUN_004961b0(sVar6,sVar5,(short)param_5);
    if (CONCAT31(extraout_var,bVar4) != 0) goto LAB_0058d3a9;
    local_8 = local_8 + 1;
  } while (local_8 < 2);
  local_8 = 0;
  while( true ) {
    if (iVar9 < 0) {
      sVar5 = (((short)(iVar9 / 0xc9) + sVar1) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar5 = ((short)(iVar9 / 0xc9) + sVar1) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f);
    }
    if (iVar7 < 0) {
      sVar6 = (((short)(iVar7 / 0xc9) + sVar2) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar6 = ((short)(iVar7 / 0xc9) + sVar2) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f);
    }
    bVar4 = thunk_FUN_004961b0(sVar6,sVar5,(short)param_5);
    if (CONCAT31(extraout_var_00,bVar4) != 0) break;
    param_5 = (param_5 + 1) % 5;
    local_8 = local_8 + 1;
    if (4 < local_8) {
      return 0;
    }
  }
LAB_0058d3a9:
  *param_10 = (short)iVar7;
  *param_11 = (short)iVar9;
  *param_12 = (short)param_5 * 200 + 100;
  return 1;
}


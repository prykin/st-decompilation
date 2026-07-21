
undefined4 __cdecl
FUN_0058d160(short param_1,short param_2,short param_3,short param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,undefined2 *param_10,undefined2 *param_11,
            short *param_12)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;

  iVar3 = param_5;
  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar6 = ((param_8 - param_6 >> 1) + (int)*(short *)(param_5 + 0x41)) - param_6;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar8 = ((param_9 - param_7 >> 1) + (int)*(short *)(param_5 + 0x43)) - param_7;
  do {
    iVar7 = iVar6;
    iVar9 = iVar8;
    if (local_8 != 0) {
      iVar7 = param_6;
      iVar9 = param_7;
    }
    iVar6 = iVar7;
    if (iVar7 < 0) {
      iVar6 = -iVar7;
    }
    iVar8 = iVar9;
    if (iVar9 < 0) {
      iVar8 = -iVar9;
    }
    if (iVar8 < iVar6) {
      while( true ) {
        while (-1 < iVar7) {
          iVar6 = *(short *)(iVar3 + 0x41) + 0xc9;
          if (iVar6 <= (short)(param_3 * 0xc9 + 100)) goto LAB_0058d1fe;
          iVar7 = -1;
        }
        iVar6 = *(short *)(iVar3 + 0x41) + -0xc9;
        if ((short)(param_1 * 0xc9 + 100) <= iVar6) break;
        iVar7 = 1;
      }
LAB_0058d1fe:
      param_6 = 0;
      iVar8 = (int)*(short *)(iVar3 + 0x43);
      param_7 = iVar9;
    }
    else {
      while( true ) {
        while (-1 < iVar9) {
          iVar8 = *(short *)(iVar3 + 0x43) + 0xc9;
          if (iVar8 <= (short)(param_4 * 0xc9 + 100)) goto LAB_0058d252;
          iVar9 = -1;
        }
        iVar8 = *(short *)(iVar3 + 0x43) + -0xc9;
        if ((short)(param_2 * 0xc9 + 100) <= iVar8) break;
        iVar9 = 1;
      }
LAB_0058d252:
      param_7 = 0;
      iVar6 = (int)*(short *)(iVar3 + 0x41);
      param_6 = iVar7;
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
    sVar1 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      sVar4 = (((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar4 = ((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f);
    }
    sVar2 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      sVar5 = (((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar5 = ((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
    }
    iVar7 = thunk_FUN_004961b0(sVar5,sVar4,(short)param_5);
    if (iVar7 != 0) goto LAB_0058d3a9;
    local_8 = local_8 + 1;
  } while (local_8 < 2);
  local_8 = 0;
  while( true ) {
    if (iVar8 < 0) {
      sVar4 = (((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar4 = ((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f);
    }
    if (iVar6 < 0) {
      sVar5 = (((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar5 = ((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
    }
    iVar3 = thunk_FUN_004961b0(sVar5,sVar4,(short)param_5);
    if (iVar3 != 0) break;
    param_5 = (param_5 + 1) % 5;
    local_8 = local_8 + 1;
    if (4 < local_8) {
      return 0;
    }
  }
LAB_0058d3a9:
  *param_10 = (short)iVar6;
  *param_11 = (short)iVar8;
  *param_12 = (short)param_5 * 200 + 100;
  return 1;
}


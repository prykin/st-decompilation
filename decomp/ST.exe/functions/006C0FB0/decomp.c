
int FUN_006c0fb0(uint *param_1,byte param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                uint param_7,uint param_8,uint param_9,uint param_10,int param_11,int param_12)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  uint *puVar4;
  BOOL BVar5;
  DWORD DVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  DWORD local_c;
  int local_8;
  
  local_8 = -1;
  if ((DAT_008568b4 == 0) || (param_1 == (uint *)0x0)) {
    return -0x34;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  iVar13 = param_11;
  if (param_11 < 0) {
    iVar13 = 0;
  }
  if ((param_12 < 0) || (0x1f < param_12)) {
    param_12 = 0x1f;
  }
  if ((param_3 & 2) != 0) {
    iVar9 = 0;
    puVar4 = &DAT_00855024;
    do {
      if ((((puVar4[-0xb] & 1) != 0) && ((uint *)puVar4[-2] == param_1)) &&
         (*puVar4 == (uint)param_2)) goto LAB_006c1365;
      puVar4 = puVar4 + 0x31;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x20);
  }
  if (DAT_008568c0 == (HANDLE)0x0) {
    DAT_008568c4 = 0;
    DAT_008568c0 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_006c08e0,(LPVOID)0x0,0,&local_c);
    if ((DAT_008568c0 != (HANDLE)0x0) && (BVar5 = SetThreadPriority(DAT_008568c0,2), BVar5 != 0))
    goto LAB_006c107d;
LAB_006c1324:
    DVar6 = GetLastError();
    if (DVar6 != 0xfffffffc) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      RaiseInternalException(DVar6,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,999);
      return -1;
    }
  }
  else {
LAB_006c107d:
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    if (DAT_008568c4 != 0) {
      DVar6 = ResumeThread(DAT_008568c0);
      if (DVar6 == 0xffffffff) goto LAB_006c1324;
      DAT_008568c4 = (uint)(DAT_008568c4 == 0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    iVar12 = 0;
    pbVar7 = &DAT_00854ff8 + iVar13 * 0xc4;
    iVar9 = iVar13;
    if (iVar13 <= param_12) {
      do {
        if ((*pbVar7 & 1) == 0) {
          if (local_8 < 0) {
            local_8 = iVar9;
          }
        }
        else if ((*(uint **)(pbVar7 + 0x24) == param_1) &&
                (*(uint *)(pbVar7 + 0x2c) == (uint)param_2)) {
          iVar12 = iVar12 + 1;
        }
        pbVar7 = pbVar7 + 0xc4;
        iVar9 = iVar9 + 1;
      } while (iVar9 <= param_12);
      if (5 < iVar12) goto LAB_006c1365;
      if (-1 < local_8) {
        puVar4 = (uint *)(&DAT_00854ff8 + local_8 * 0xc4);
        goto LAB_006c1286;
      }
    }
    piVar2 = DAT_00854ff4;
    if ((param_3 & 8) != 0) {
      while (piVar2 != (int *)0x0) {
        if (piVar2[0xe] < 0) {
          piVar1 = (int *)*piVar2;
          FUN_006b98c0((int *)&DAT_00854ff4,piVar2);
          FUN_006a5e90(piVar2);
          piVar2 = piVar1;
        }
        else {
          piVar2 = (int *)*piVar2;
        }
      }
      puVar8 = FUN_006aac10(0x3c);
      puVar8[3] = param_1;
      puVar8[4] = (uint)param_2;
      puVar8[6] = param_4;
      puVar8[5] = param_3;
      puVar8[8] = param_6;
      puVar8[7] = param_5;
      puVar8[10] = param_8;
      puVar8[9] = param_7;
      puVar8[0xb] = param_9;
      puVar8[0xc] = param_10;
      puVar8[0xd] = iVar13;
      puVar8[0xe] = param_12;
      FUN_006b9910(&DAT_00854ff4,puVar8);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      return local_8;
    }
    param_11 = (int)*(byte *)(&DAT_00855024 + iVar13 * 0x31);
    uVar11 = (&DAT_00855000)[iVar13 * 0x31];
    pbVar7 = (byte *)(&DAT_00855024 + iVar13 * 0x31);
    iVar9 = iVar13;
    local_8 = iVar13;
    while (pbVar3 = pbVar7, iVar13 = iVar13 + 1, iVar13 <= param_12) {
      pbVar7 = pbVar3 + 0xc4;
      if ((*(int *)(pbVar3 + 0xc4) < param_11) ||
         ((*(int *)(pbVar3 + 0xc4) == param_11 && (*(uint *)(pbVar3 + 0xa0) < uVar11)))) {
        uVar11 = *(uint *)(pbVar3 + 0xa0);
        param_11 = (int)*pbVar7;
        iVar9 = iVar13;
        local_8 = iVar13;
      }
    }
    puVar4 = (uint *)(&DAT_00854ff8 + iVar9 * 0xc4);
    if ((byte)param_11 < param_2) {
      piVar2 = (int *)(&DAT_00855004)[iVar9 * 0x31];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x48))(piVar2);
        piVar2 = (int *)(&DAT_00855008)[iVar9 * 0x31];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          (&DAT_00855008)[iVar9 * 0x31] = 0;
        }
        (**(code **)(*(int *)(&DAT_00855004)[iVar9 * 0x31] + 8))
                  ((int *)(&DAT_00855004)[iVar9 * 0x31]);
      }
      puVar14 = puVar4;
      for (iVar13 = 0x31; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
LAB_006c1286:
      puVar4[0xb] = (uint)param_2;
      puVar4[0xc] = param_4;
      puVar4[0xe] = param_6;
      puVar4[0xd] = param_5;
      puVar4[0xf] = param_7;
      puVar4[0x10] = param_8;
      puVar4[9] = (uint)param_1;
      puVar4[1] = param_3;
      puVar4[0x11] = param_9;
      puVar4[0x12] = param_10;
      uVar10 = (-(uint)((short)*param_1 != 1) & 0x24) + 0x1a;
      puVar14 = puVar4 + 0x13;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar14 = *param_1;
        param_1 = param_1 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(char *)puVar14 = (char)*param_1;
        param_1 = (uint *)((int)param_1 + 1);
        puVar14 = (uint *)((int)puVar14 + 1);
      }
      if ((param_3 & 4) == 0) {
        FUN_006bfbf0(puVar4);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
        return local_8;
      }
      *puVar4 = *puVar4 | 0x21;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      return local_8;
    }
  }
  local_8 = -4;
LAB_006c1365:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  return local_8;
}


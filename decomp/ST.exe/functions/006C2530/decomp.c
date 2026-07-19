
int FUN_006c2530(uint param_1,DWORD param_2,byte param_3,uint param_4,uint param_5,uint param_6,
                int param_7,int param_8)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  DWORD *pDVar6;
  BOOL BVar7;
  DWORD DVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  DWORD local_c;
  int local_8;
  
  local_8 = -1;
  if (DAT_008568b4 == 0) {
    return -0x34;
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 8) & 0x100000) == 0) {
    iVar5 = FUN_006c1390((uint *)(*(int *)(*(int *)(param_1 + 4) + 0x34) + param_2),param_3,param_4,
                         param_5,param_6,param_7,param_8);
    return iVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  if (DAT_008568b0 == 0) {
    DAT_008568b0 = FUN_006aac70(0x2800);
    DAT_00856878 = 0x2800;
  }
  iVar5 = param_7;
  if (param_7 < 0) {
    iVar5 = 0;
  }
  if ((param_8 < 0) || (0x1f < param_8)) {
    param_8 = 0x1f;
  }
  if ((param_4 & 2) != 0) {
    iVar11 = 0;
    pDVar6 = &DAT_00855018;
    do {
      if (((((pDVar6[-8] & 1) != 0) && (pDVar6[-1] == param_1)) && (*pDVar6 == param_2)) &&
         (pDVar6[3] == (uint)param_3)) goto LAB_006c2965;
      pDVar6 = pDVar6 + 0x31;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x20);
  }
  if (DAT_008568c0 == (HANDLE)0x0) {
    DAT_008568c4 = 0;
    DAT_008568c0 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_006c08e0,(LPVOID)0x0,0,&local_c);
    if ((DAT_008568c0 != (HANDLE)0x0) && (BVar7 = SetThreadPriority(DAT_008568c0,2), BVar7 != 0))
    goto LAB_006c266d;
LAB_006c28e3:
    DVar8 = GetLastError();
LAB_006c28eb:
    iVar5 = local_8;
    if (-1 < local_8) {
      iVar11 = local_8 * 0xc4;
      piVar3 = (int *)(&DAT_00855004)[local_8 * 0x31];
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x48))(piVar3);
        (**(code **)(*(int *)(&DAT_00855004)[iVar5 * 0x31] + 8))
                  ((int *)(&DAT_00855004)[iVar5 * 0x31]);
      }
      puVar10 = (undefined4 *)(&DAT_00854ff8 + iVar11);
      for (iVar5 = 0x31; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    if (DVar8 != 0xfffffffc) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      RaiseInternalException(DVar8,DAT_007ed77c,s_E__DKW_SND_C_dssnddb_cpp_007ede48,0xfa);
      return -1;
    }
  }
  else {
LAB_006c266d:
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    if (DAT_008568c4 != 0) {
      DVar8 = ResumeThread(DAT_008568c0);
      if (DVar8 == 0xffffffff) goto LAB_006c28e3;
      DAT_008568c4 = (uint)(DAT_008568c4 == 0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    iVar12 = 0;
    pbVar9 = &DAT_00854ff8 + iVar5 * 0xc4;
    iVar11 = iVar5;
    if (iVar5 <= param_8) {
      do {
        if ((*pbVar9 & 1) == 0) {
          if (local_8 < 0) {
            local_8 = iVar11;
          }
        }
        else if (((*(uint *)(pbVar9 + 0x1c) == param_1) && (*(DWORD *)(pbVar9 + 0x20) == param_2))
                && (*(uint *)(pbVar9 + 0x2c) == (uint)param_3)) {
          iVar12 = iVar12 + 1;
        }
        pbVar9 = pbVar9 + 0xc4;
        iVar11 = iVar11 + 1;
      } while (iVar11 <= param_8);
      if (5 < iVar12) goto LAB_006c2965;
      if (local_8 < 0) goto LAB_006c2734;
      puVar13 = (uint *)(&DAT_00854ff8 + local_8 * 0xc4);
LAB_006c2863:
      puVar13[0xc] = param_5;
      puVar13[0xd] = param_6;
      puVar13[0xb] = (uint)param_3;
      puVar13[7] = param_1;
      puVar13[8] = param_2;
      puVar13[1] = param_4 | 0x2000;
      DVar8 = FUN_006d49f0(*(int *)(param_1 + 4),param_2,puVar13 + 0x13,0x3e);
      if (DVar8 == 0) {
        puVar13[10] = (-(uint)((short)puVar13[0x13] != 1) & 0x24) + 0x1a + param_2;
        if ((param_4 & 4) != 0) {
          *puVar13 = *puVar13 | 0x21;
          goto LAB_006c2965;
        }
        DVar8 = FUN_006bfbf0(puVar13);
        if (DVar8 == 0) goto LAB_006c2965;
      }
      if (DVar8 == 0xffffff03) goto LAB_006c28e3;
      goto LAB_006c28eb;
    }
LAB_006c2734:
    piVar3 = DAT_00854ff4;
    if ((param_4 & 8) != 0) {
      while (piVar3 != (int *)0x0) {
        if (piVar3[0xe] < 0) {
          piVar1 = (int *)*piVar3;
          FUN_006b98c0((int *)&DAT_00854ff4,piVar3);
          FUN_006a5e90(piVar3);
          piVar3 = piVar1;
        }
        else {
          piVar3 = (int *)*piVar3;
        }
      }
      if (DAT_008568b0 == 0) {
        DAT_008568b0 = FUN_006aac70(0x2800);
        DAT_00856878 = 0x2800;
      }
      puVar10 = FUN_006aac10(0x3c);
      puVar10[2] = param_2;
      puVar10[1] = param_1;
      puVar10[4] = (uint)param_3;
      puVar10[5] = param_4 | 0x2000;
      puVar10[6] = param_5;
      puVar10[7] = param_6;
      puVar10[0xd] = iVar5;
      puVar10[0xe] = param_8;
      FUN_006b9910(&DAT_00854ff4,puVar10);
      goto LAB_006c2965;
    }
    uVar2 = (&DAT_00855000)[iVar5 * 0x31];
    param_7 = (int)*(byte *)(&DAT_00855024 + iVar5 * 0x31);
    pbVar9 = (byte *)(&DAT_00855024 + iVar5 * 0x31);
    iVar11 = iVar5;
    local_8 = iVar5;
    while (pbVar4 = pbVar9, iVar5 = iVar5 + 1, iVar5 <= param_8) {
      pbVar9 = pbVar4 + 0xc4;
      if ((*(int *)(pbVar4 + 0xc4) < param_7) ||
         ((*(int *)(pbVar4 + 0xc4) == param_7 && (*(uint *)(pbVar4 + 0xa0) < uVar2)))) {
        uVar2 = *(uint *)(pbVar4 + 0xa0);
        param_7 = (int)*pbVar9;
        iVar11 = iVar5;
        local_8 = iVar5;
      }
    }
    puVar13 = (uint *)(&DAT_00854ff8 + iVar11 * 0xc4);
    if ((byte)param_7 < param_3) {
      piVar3 = (int *)(&DAT_00855004)[iVar11 * 0x31];
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x48))(piVar3);
        (**(code **)(*(int *)(&DAT_00855004)[iVar11 * 0x31] + 8))
                  ((int *)(&DAT_00855004)[iVar11 * 0x31]);
      }
      puVar14 = puVar13;
      for (iVar5 = 0x31; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      goto LAB_006c2863;
    }
  }
  local_8 = -4;
LAB_006c2965:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
  return local_8;
}


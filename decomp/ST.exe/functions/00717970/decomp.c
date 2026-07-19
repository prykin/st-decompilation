
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00717970(undefined4 *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int local_5c;
  double local_44;
  int local_30;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  if ((*(int *)((int)param_1 + 0x4ba) == 0) || (*(int *)((int)param_1 + 0x4a2) == 0)) {
switchD_007179c7_default:
    return 0;
  }
  FUN_006e1c20(param_1,(float)param_1[0xc],param_1[0xd],
               (float)((float10)*(double *)(param_1 + 0x34) + (float10)*(double *)(param_1 + 0x34)),
               &local_8,&local_c);
  switch(param_1[0x2a]) {
  case 0:
    local_44 = (double)((*(int *)((int)param_1 + 0x4b2) * 10) / 2) +
               ((double)local_8 - (double)local_c) * _DAT_0079df60;
    dVar4 = (*(double *)(param_1 + 0x32) * _DAT_0079e248 + (double)local_8 + (double)local_c) *
            _DAT_0079df60 - _DAT_0079e240;
    goto LAB_00717b22;
  case 1:
    iVar5 = *(int *)((int)param_1 + 0x4b6);
    local_44 = (*(double *)(param_1 + 0x32) * _DAT_0079e248 + (double)local_8 + (double)local_c) *
               _DAT_0079df60 - _DAT_0079e240;
    dVar4 = (double)local_c - (double)local_8;
    break;
  case 2:
    local_44 = (double)((*(int *)((int)param_1 + 0x4b2) * 10) / 2) +
               ((double)local_c - (double)local_8) * _DAT_0079df60;
    dVar4 = (double)(*(int *)((int)param_1 + 0x4b6) * 10 + -10) +
            ((-(double)local_8 - (double)local_c) - *(double *)(param_1 + 0x32) * _DAT_0079e248) *
            _DAT_0079df60 + _DAT_0079e240;
    goto LAB_00717b22;
  case 3:
    iVar5 = *(int *)((int)param_1 + 0x4b6);
    local_44 = (double)(*(int *)((int)param_1 + 0x4b2) * 10 + -10) +
               ((-(double)local_8 - (double)local_c) - *(double *)(param_1 + 0x32) * _DAT_0079e248)
               * _DAT_0079df60 + _DAT_0079e240;
    dVar4 = (double)local_8 - (double)local_c;
    break;
  default:
    goto switchD_007179c7_default;
  }
  dVar4 = (double)((iVar5 * 10) / 2) + dVar4 * _DAT_0079df60;
LAB_00717b22:
  if (local_44 < _DAT_0079d670) {
    lVar15 = Library::MSVCRT::__ftol();
    *(int *)((int)param_1 + 0x47e) = (int)lVar15;
    Library::MSVCRT::FUN_0073459a(extraout_ECX_00);
  }
  else {
    lVar15 = Library::MSVCRT::__ftol();
    *(int *)((int)param_1 + 0x47e) = (int)lVar15;
    Library::MSVCRT::FUN_0073459a(extraout_ECX);
  }
  lVar15 = Library::MSVCRT::__ftol();
  iVar5 = (int)lVar15;
  dVar4 = dVar4 * _DAT_0079df60;
  *(int *)((int)param_1 + 0x476) = iVar5;
  if (dVar4 < _DAT_0079d670) {
    lVar15 = Library::MSVCRT::__ftol();
    *(int *)((int)param_1 + 0x482) = (int)lVar15;
    Library::MSVCRT::FUN_0073459a(extraout_ECX_02);
  }
  else {
    lVar15 = Library::MSVCRT::__ftol();
    *(int *)((int)param_1 + 0x482) = (int)lVar15;
    Library::MSVCRT::FUN_0073459a(extraout_ECX_01);
  }
  lVar15 = Library::MSVCRT::__ftol();
  iVar10 = (int)lVar15;
  iVar6 = param_1[0xc];
  *(int *)((int)param_1 + 0x47a) = iVar10;
  iVar12 = *(int *)((int)param_1 + 0x4e6);
  *(int *)((int)param_1 + 0x48e) = iVar6;
  iVar3 = param_1[0xd];
  *(int *)((int)param_1 + 0x492) = iVar3;
  if (*(int *)((int)param_1 + 0x47e) < 0) {
    *(undefined4 *)((int)param_1 + 0x476) = 0;
    *(int *)((int)param_1 + 0x48e) =
         (iVar6 - *(int *)((int)param_1 + 0x47e) * *(int *)((int)param_1 + 0x4e2)) + iVar5;
    *(undefined4 *)((int)param_1 + 0x47e) = 0;
  }
  local_1c = *(int *)((int)param_1 + 0x4b2);
  iVar5 = *(int *)((int)param_1 + 0x47e) +
          (((*(int *)((int)param_1 + 0x4e2) - iVar6) - iVar5) + -1 + param_1[0xe]) /
          *(int *)((int)param_1 + 0x4e2);
  *(int *)((int)param_1 + 0x486) = iVar5;
  if (local_1c < iVar5) {
    *(int *)((int)param_1 + 0x486) = local_1c;
  }
  if (*(int *)((int)param_1 + 0x482) < 0) {
    *(undefined4 *)((int)param_1 + 0x47a) = 0;
    *(int *)((int)param_1 + 0x492) = (iVar3 - *(int *)((int)param_1 + 0x482) * iVar12) + iVar10;
    *(undefined4 *)((int)param_1 + 0x482) = 0;
  }
  local_30 = *(int *)((int)param_1 + 0x482);
  iVar5 = (((iVar12 - iVar3) - iVar10) + -1 + param_1[0xf]) / iVar12 + local_30;
  *(int *)((int)param_1 + 0x48a) = iVar5;
  if (*(int *)((int)param_1 + 0x4b6) < iVar5) {
    *(int *)((int)param_1 + 0x48a) = *(int *)((int)param_1 + 0x4b6);
  }
  local_1c = local_30 * local_1c;
  iVar5 = local_30 * *(int *)((int)param_1 + 0x4be) + *(int *)((int)param_1 + 0x4ba);
  iVar12 = param_1[6] + local_1c;
  iVar6 = *(int *)((int)param_1 + param_1[0x2a] * 4 + 0x4a2) + local_1c;
  local_10 = *(int *)((int)param_1 + 0x492) + *(int *)((int)param_1 + 0x47a);
  if (local_30 < *(int *)((int)param_1 + 0x48a)) {
    do {
      local_14 = *(int *)((int)param_1 + 0x476) + *(int *)((int)param_1 + 0x48e);
      local_20 = *(int *)((int)param_1 + 0x47e);
      if (local_20 < *(int *)((int)param_1 + 0x486)) {
        pcVar11 = (char *)(local_20 + iVar12);
        do {
          pbVar1 = (byte *)(pcVar11 + (iVar6 - iVar12));
          if ((*(byte *)(*(int *)((int)param_1 + 0x46e) +
                        ((int)((uint)(pbVar1 + (local_1c - iVar6)) ^ 7) >> 3)) >>
               (((uint)(pbVar1 + (local_1c - iVar6)) ^ 7) & 7) & 1) != 0) {
            cVar2 = (&DAT_007f0594)[(uint)*pbVar1 * 0x10 + (uint)pbVar1[iVar5 - iVar6]];
            if ((param_1[0xb6] == 0) && (cVar2 != *pcVar11)) {
              *pcVar11 = cVar2;
              iVar3 = param_1[0xc];
              iVar10 = *(int *)((int)param_1 + 0x4e2);
              iVar7 = *(int *)((int)param_1 + 0x4e6);
              local_5c = local_14;
              if (local_14 < iVar3) {
                iVar10 = (iVar10 - iVar3) + local_14;
                local_5c = iVar3;
              }
              if ((int)param_1[0xe] < local_5c + iVar10) {
                iVar10 = param_1[0xe] - local_5c;
              }
              iVar3 = param_1[0xd];
              iVar13 = local_10;
              if (local_10 < iVar3) {
                iVar7 = (iVar7 - iVar3) + local_10;
                iVar13 = iVar3;
              }
              if ((int)param_1[0xf] < iVar7 + iVar13) {
                iVar7 = param_1[0xf] - iVar13;
              }
              if ((0 < iVar10) && (0 < iVar7)) {
                FUN_006b5f80((int *)*param_1,param_1[8] + local_5c,param_1[9] + iVar13,iVar10,iVar7)
                ;
              }
            }
            else {
              *pcVar11 = cVar2;
            }
          }
          local_14 = local_14 + *(int *)((int)param_1 + 0x4e2);
          local_20 = local_20 + 1;
          pcVar11 = pcVar11 + 1;
        } while (local_20 < *(int *)((int)param_1 + 0x486));
      }
      iVar3 = *(int *)((int)param_1 + 0x4b2);
      iVar5 = iVar5 + *(int *)((int)param_1 + 0x4be);
      local_1c = local_1c + iVar3;
      iVar12 = iVar12 + iVar3;
      iVar6 = iVar6 + iVar3;
      local_10 = local_10 + *(int *)((int)param_1 + 0x4e6);
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)((int)param_1 + 0x48a));
  }
  iVar5 = *(int *)((int)param_1 + 0x48e);
  iVar6 = *(int *)((int)param_1 + 0x476) +
          (*(int *)((int)param_1 + 0x486) - *(int *)((int)param_1 + 0x47e)) *
          *(int *)((int)param_1 + 0x4e2);
  *(int *)((int)param_1 + 0x496) = iVar6;
  if ((int)param_1[0xe] < iVar6 + iVar5) {
    *(int *)((int)param_1 + 0x496) = param_1[0xe] - iVar5;
  }
  iVar6 = (*(int *)((int)param_1 + 0x48a) - *(int *)((int)param_1 + 0x482)) *
          *(int *)((int)param_1 + 0x4e6) + *(int *)((int)param_1 + 0x47a);
  iVar12 = *(int *)((int)param_1 + 0x492);
  *(int *)((int)param_1 + 0x49a) = iVar6;
  if ((int)param_1[0xf] < iVar6 + iVar12) {
    *(int *)((int)param_1 + 0x49a) = param_1[0xf] - iVar12;
  }
  iVar6 = *(int *)((int)param_1 + 0x4c2) * *(int *)((int)param_1 + 0x4be) + 7;
  *(int *)((int)param_1 + 0x492) = param_1[9] + iVar12;
  *(int *)((int)param_1 + 0x48e) = param_1[8] + iVar5;
  uVar8 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
  puVar14 = *(undefined4 **)((int)param_1 + 0x46e);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  *(undefined4 *)((int)param_1 + 0x46a) = 0;
  return 0;
}


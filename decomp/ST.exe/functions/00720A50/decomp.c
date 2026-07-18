
int __fastcall FUN_00720a50(int *param_1)

{
  char cVar1;
  void *this;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  size_t sVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  size_t _Count;
  uint uVar10;
  undefined4 unaff_ESI;
  size_t _Count_00;
  int iVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  undefined4 local_64;
  undefined4 local_60 [16];
  size_t local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  char *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  if ((param_1[0x4e] == 0) || (*(int *)(param_1[0x4e] + 8) == 0)) {
    return 0;
  }
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  local_1c = param_1;
  iVar3 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  piVar7 = local_1c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_64;
    iVar11 = FUN_006ad4d0(s_E__Ourlib__sedit_cpp_007f0b08,0x51,0,iVar3,&DAT_007a4ccc);
    if (iVar11 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    FUN_006a5e40(iVar3,0,0x7f0b08,0x52);
    return iVar3;
  }
  local_18 = FUN_00720d30((int)local_1c);
  if (local_18 == 0) {
    local_18 = 1;
  }
  iVar3 = local_18;
  local_8 = FUN_006aac10(local_18 * 4 + 4);
  local_10 = 0;
  *(int *)(piVar7[0x4e] + 4) = piVar7[0x51];
  if (0 < iVar3) {
    do {
      iVar11 = local_10;
      iVar3 = piVar7[0x4e];
      if (*(int *)(iVar3 + 4) < *(int *)(iVar3 + 8)) {
        iVar8 = *(int *)(iVar3 + 4) + 1;
        local_c = *(char **)(*(int *)(iVar3 + 0x14) + -4 + iVar8 * 4);
        *(int *)(iVar3 + 4) = iVar8;
      }
      else {
        local_c = (char *)0x0;
      }
      if (local_c == (char *)0x0) break;
      uVar9 = 0xffffffff;
      pcVar5 = local_c;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      _Count = ~uVar9 - 1;
      local_20 = _Count;
      if (piVar7[0x52] < (int)_Count) {
        if ((*(byte *)(piVar7 + 8) & 0x20) != 0) {
          local_c = FUN_006c49b0(local_c);
          __strnset(local_c,0x2a,_Count);
        }
        if ((*(byte *)(piVar7 + 8) & 4) == 0) {
          sVar6 = piVar7[0x52];
          _Count_00 = 0;
          local_14 = 0;
          if (_Count != sVar6 && -1 < (int)(_Count - sVar6)) {
            do {
              this = (void *)piVar7[0x85];
              uVar9 = FUN_00710fb0(this,(byte *)(local_c + sVar6 + _Count_00));
              iVar3 = (int)*(short *)(*(int *)((int)this + 0x9a) + 0x6a + (uVar9 & 0xffff) * 10);
              if (piVar7[0xb] < iVar3 + local_14) break;
              sVar6 = piVar7[0x52];
              local_14 = local_14 + *(int *)(piVar7[0x85] + 0x58) + iVar3;
              _Count_00 = _Count_00 + 1;
            } while ((int)_Count_00 < (int)(local_20 - sVar6));
          }
          if (_Count_00 == 0) {
            _Count_00 = 1;
          }
          puVar4 = FUN_006aac10(_Count_00 + 1);
          local_8[local_10] = (int)puVar4;
          _strncpy((char *)local_8[local_10],local_c + piVar7[0x52],_Count_00);
          iVar11 = local_10;
        }
        else {
          pcVar5 = ccFntTy::GetFittingStr
                             ((ccFntTy *)piVar7[0x85],(char *)0x0,(uint *)(local_c + piVar7[0x52]),
                              (uint *)0x0,piVar7[0xb],(undefined4 *)0x0);
          local_8[iVar11] = (int)pcVar5;
        }
        if ((*(byte *)(piVar7 + 8) & 0x20) != 0) {
          FUN_006ab060(&local_c);
        }
      }
      else {
        uVar9 = 0xffffffff;
        pcVar5 = PTR_DAT_007f0afc;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        puVar4 = FUN_006aac10(~uVar9);
        local_8[iVar11] = (int)puVar4;
        uVar9 = 0xffffffff;
        pcVar5 = PTR_DAT_007f0afc;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        puVar4 = (undefined4 *)PTR_DAT_007f0afc;
        puVar12 = (undefined4 *)local_8[local_10];
        for (uVar10 = ~uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar9 = ~uVar9 & 3; iVar11 = local_10, uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
      }
      local_10 = iVar11 + 1;
    } while (local_10 < local_18);
  }
  iVar3 = (**(code **)(*piVar7 + 8))(local_8);
  if (local_8 != (int *)0x0) {
    if (*local_8 != 0) {
      iVar11 = 0;
      piVar7 = local_8;
      do {
        FUN_006ab060(piVar7);
        iVar11 = iVar11 + 4;
        piVar7 = (int *)(iVar11 + (int)local_8);
      } while (*(int *)(iVar11 + (int)local_8) != 0);
    }
    FUN_006ab060(&local_8);
  }
  DAT_00858df8 = (undefined4 *)local_64;
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl
FUN_00718780(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  float local_c6c;
  float afStack_c68 [767];
  undefined4 local_6c;
  undefined4 local_68 [16];
  int local_28;
  float local_24;
  float *local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  float *local_8;
  
  local_1c = -1.0;
  local_10 = -1.0;
  local_18 = -1.0;
  local_14 = -1.0;
  local_6c = DAT_00858df8;
  DAT_00858df8 = &local_6c;
  iVar3 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_6 == (undefined4 *)0x0) {
      param_6 = FUN_006aac10(param_2 + param_3);
    }
    local_8 = &local_c6c;
    iVar3 = 0;
    puVar8 = (undefined1 *)(param_1 + 2);
    do {
      if (((param_2 <= iVar3) && (iVar3 < param_2 + param_3)) ||
         ((param_4 <= iVar3 && (iVar3 < param_4 + param_5)))) {
        local_c._0_3_ = CONCAT12(*puVar8,*(undefined2 *)(puVar8 + -2));
        FUN_00718130((byte *)&local_c,local_8);
      }
      iVar3 = iVar3 + 1;
      puVar8 = puVar8 + 4;
      local_8 = local_8 + 3;
    } while (iVar3 < 0x100);
    local_28 = param_2 + param_3;
    if (param_2 < local_28) {
      pfVar5 = afStack_c68 + param_2 * 3;
      iVar3 = param_2;
      do {
        if ((iVar3 < param_4) || (param_5 + param_4 <= iVar3)) {
          if ((local_1c < _DAT_0079034c) || (*pfVar5 < local_1c)) {
            local_1c = *pfVar5;
          }
          if ((local_10 < _DAT_0079034c) || (local_10 < *pfVar5)) {
            local_10 = *pfVar5;
          }
        }
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 3;
      } while (iVar3 < local_28);
    }
    iVar3 = param_4 + param_5;
    if (param_4 < iVar3) {
      pfVar5 = afStack_c68 + param_4 * 3;
      iVar7 = iVar3 - param_4;
      do {
        if ((local_18 < _DAT_0079034c) || (*pfVar5 < local_18)) {
          local_18 = *pfVar5;
        }
        if ((local_14 < _DAT_0079034c) || (local_14 < *pfVar5)) {
          local_14 = *pfVar5;
        }
        pfVar5 = pfVar5 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    local_8 = (float *)param_2;
    if (param_2 < local_28) {
      local_20 = afStack_c68 + param_2 * 3;
      do {
        if ((param_2 < param_4) || (iVar3 <= param_2)) {
          iVar7 = -1;
          local_24 = 0.0;
          local_c = local_14 -
                    ((local_14 - local_18) * (local_10 - *local_20)) / (local_10 - local_1c);
          if (param_4 < iVar3) {
            pfVar5 = afStack_c68 + param_4 * 3;
            iVar6 = param_4;
            do {
              fVar2 = ABS(local_c - *pfVar5);
              if ((iVar7 < 0) || (fVar2 < local_24)) {
                local_24 = fVar2;
                iVar7 = iVar6;
              }
              iVar6 = iVar6 + 1;
              pfVar5 = pfVar5 + 3;
            } while (iVar6 < iVar3);
          }
          *(char *)(param_2 + (int)param_6) = (char)iVar7;
        }
        else {
          *(char *)(param_2 + (int)param_6) = (char)param_2;
        }
        param_2 = param_2 + 1;
        local_8 = (float *)param_2;
        local_20 = local_20 + 3;
      } while (param_2 < local_28);
    }
    DAT_00858df8 = (undefined4 *)local_6c;
    return param_6;
  }
  DAT_00858df8 = (undefined4 *)local_6c;
  iVar7 = FUN_006ad4d0(s_E__Ourlib_Palette_cpp_007f0718,0xdc,0,iVar3,&DAT_007a4ccc);
  if (iVar7 == 0) {
    FUN_006a5e40(iVar3,0,0x7f0718,0xdd);
    return (undefined4 *)0x0;
  }
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar1)();
  return puVar4;
}


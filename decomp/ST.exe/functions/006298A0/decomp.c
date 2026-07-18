
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006298a0(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  short sVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  byte *pbVar7;
  ushort *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar11;
  uint *puVar12;
  undefined4 local_60;
  undefined4 local_5c [16];
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  uint local_8;
  
  local_8 = 0;
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  iVar6 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar9 = FUN_006ad4d0(s_E____titans_nick_to_Part_Cpp_007d1354,800,0,iVar6,&DAT_007a4ccc);
    if (iVar9 == 0) {
      FUN_006a5e40(iVar6,0,0x7d1354,0x322);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return uVar10;
  }
  pbVar7 = PTR_s_expl_sb1_007d0c44;
  if (3 < *(byte *)(local_18 + 0x14)) {
    pbVar7 = PTR_s_expl_sb0_007d0c40;
  }
  puVar8 = FUN_00709af0(DAT_00806764,0x1d,pbVar7,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(undefined4 *)(local_18 + 0xb6) = *(undefined4 *)puVar8;
  if (param_1 != 0) {
    puVar1 = (uint *)(local_18 + 0xc6);
    if ((int)*(uint *)(local_18 + 0xc6) < 0) {
      FUN_006e8660(DAT_00807598,(int *)puVar1,2,0,*(uint *)((int)puVar8 + 9),
                   *(uint *)((int)puVar8 + 0xd),0x5a,0x45,0);
    }
    else {
      FUN_006e9520(DAT_00807598,*(uint *)(local_18 + 0xc6),0,0,0);
      FUN_006e9af0(DAT_00807598,*puVar1,2,0,*(uint *)((int)puVar8 + 9),*(uint *)((int)puVar8 + 0xd),
                   0x5a,0x45,1);
    }
    FUN_006e98e0(DAT_00807598,*puVar1,0,*(undefined4 *)puVar8,*(int *)((int)puVar8 + 0x21),1);
    FUN_006ea270(DAT_00807598,*puVar1,0,*(uint *)(local_18 + 0xb2));
    local_1c = (float)*(int *)(local_18 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(local_18 + 0x6a) = local_1c;
    local_c = (float)*(int *)(local_18 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(local_18 + 0x6e) = local_c;
    fVar4 = (float)*(int *)(local_18 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(local_18 + 0x72) = fVar4;
    FUN_006ea960(DAT_00807598,*puVar1,local_1c,local_c,fVar4 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,*puVar1,0);
    *(undefined1 *)(local_18 + 0xc1) = 1;
    pvVar5 = DAT_00802a88;
    if (DAT_00802a88 != (void *)0x0) {
      iVar6 = *(int *)(local_18 + 0x4e);
      sVar3 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        local_c = (float)((short)(((short)(iVar6 / 200) + sVar3) -
                                 (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        local_c = (float)(int)(short)(((short)(iVar6 / 200) + sVar3) -
                                     (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
      }
      iVar6 = *(int *)(local_18 + 0x4a);
      sVar3 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) -
                       (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                            (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
      }
      iVar9 = *(int *)(local_18 + 0x46);
      sVar3 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar3) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar3) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
          (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar9,iVar6,
                              &local_14,&local_10), (int)local_c < 0)) || (4 < (int)local_c)) {
        bVar11 = true;
      }
      else {
        if (((local_14 < 0) || (*(int *)((int)pvVar5 + 0x30) <= local_14)) ||
           ((local_10 + (&DAT_0079aed0)[(int)local_c] < 0 ||
            (*(int *)((int)pvVar5 + 0x34) <= local_10 + (&DAT_0079aed0)[(int)local_c])))) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((bVar11) && (*(int *)((int)pvVar5 + 0x4c) != 0)) {
          bVar11 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_10) *
                             *(int *)((int)pvVar5 + 0x30) + *(int *)((int)pvVar5 + 0x4c) + local_14)
                   != '\0';
        }
        else {
          bVar11 = true;
        }
      }
      if (bVar11) {
        if (*(char *)(local_18 + 0xc1) == '\0') {
          FUN_006eaaa0(DAT_00807598,*puVar1,0);
          *(undefined1 *)(local_18 + 0xc1) = 1;
        }
      }
      else if (*(char *)(local_18 + 0xc1) == '\x01') {
        FUN_006eab60(DAT_00807598,*puVar1);
        *(undefined1 *)(local_18 + 0xc1) = 0;
      }
    }
    if (*(byte *)(local_18 + 0x14) < 4) {
      puVar8 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_s1_007d0c48,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      if (0xe < *(int *)(local_18 + 0xb2)) {
        local_8 = *(int *)(local_18 + 0xb2) + 3;
      }
      FUN_006e98e0(DAT_00807598,*puVar1,1,*(undefined4 *)puVar8,*(int *)((int)puVar8 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,1,local_8);
      puVar12 = (uint *)*puVar1;
    }
    else {
      puVar8 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_s0_007d0c50,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      if (0xe < *(int *)(local_18 + 0xb2)) {
        local_8 = *(int *)(local_18 + 0xb2) - 0xf;
      }
      FUN_006e98e0(DAT_00807598,*puVar1,1,*(undefined4 *)puVar8,*(int *)((int)puVar8 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,1,local_8);
      puVar12 = (uint *)*puVar1;
    }
    FUN_006e9d40(DAT_00807598,puVar12,1);
    iVar6 = *(int *)(local_18 + 0xeb);
    if (iVar6 != 0) {
      if (*(int *)(local_18 + 0xf3) == 0) {
        FUN_006ea460(DAT_00807598,*puVar1,*(int *)(iVar6 + 0x1ed));
      }
      else {
        FUN_006ea3e0(DAT_00807598,*puVar1,*(int *)(iVar6 + 0x1ed));
      }
    }
    FUN_006ea4e0(DAT_00807598,*puVar1,1,0x5a,0x53);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  return 0;
}


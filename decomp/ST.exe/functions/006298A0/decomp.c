
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::InitVisibelDeton */

undefined4 __thiscall STParticleC::InitVisibelDeton(STParticleC *this,int param_1)

{
  STParticleC *pSVar1;
  code *pcVar2;
  short sVar3;
  float fVar4;
  void *pvVar5;
  STParticleC *pSVar6;
  int iVar7;
  byte *pbVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar12;
  uint *puVar13;
  undefined4 local_60;
  undefined4 local_5c [16];
  float local_1c;
  STParticleC *local_18;
  int local_14;
  int local_10;
  float local_c;
  uint local_8;
  
  local_8 = 0;
  local_60 = DAT_00858df8;
  DAT_00858df8 = &local_60;
  local_18 = this;
  iVar7 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  pSVar6 = local_18;
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_60;
    iVar10 = FUN_006ad4d0(s_E____titans_nick_to_Part_Cpp_007d1354,800,0,iVar7,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar7,0,0x7d1354,0x322);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return uVar11;
  }
  pbVar8 = PTR_s_expl_sb1_007d0c44;
  if (3 < (byte)local_18[0x14]) {
    pbVar8 = PTR_s_expl_sb0_007d0c40;
  }
  puVar9 = FUN_00709af0(DAT_00806764,0x1d,pbVar8,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(undefined4 *)(pSVar6 + 0xb6) = *(undefined4 *)puVar9;
  if (param_1 != 0) {
    pSVar1 = pSVar6 + 0xc6;
    if ((int)*(uint *)(pSVar6 + 0xc6) < 0) {
      FUN_006e8660(DAT_00807598,(int *)pSVar1,2,0,*(uint *)((int)puVar9 + 9),
                   *(uint *)((int)puVar9 + 0xd),0x5a,0x45,0);
    }
    else {
      FUN_006e9520(DAT_00807598,*(uint *)(pSVar6 + 0xc6),0,0,0);
      FUN_006e9af0(DAT_00807598,*(uint *)pSVar1,2,0,*(uint *)((int)puVar9 + 9),
                   *(uint *)((int)puVar9 + 0xd),0x5a,0x45,1);
    }
    FUN_006e98e0(DAT_00807598,*(uint *)pSVar1,0,*(undefined4 *)puVar9,*(int *)((int)puVar9 + 0x21),1
                );
    FUN_006ea270(DAT_00807598,*(uint *)pSVar1,0,*(uint *)(pSVar6 + 0xb2));
    local_1c = (float)*(int *)(pSVar6 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(pSVar6 + 0x6a) = local_1c;
    local_c = (float)*(int *)(pSVar6 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(pSVar6 + 0x6e) = local_c;
    fVar4 = (float)*(int *)(pSVar6 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
    *(float *)(pSVar6 + 0x72) = fVar4;
    FUN_006ea960(DAT_00807598,*(uint *)pSVar1,local_1c,local_c,fVar4 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,*(uint *)pSVar1,0);
    pSVar6[0xc1] = (STParticleC)0x1;
    pvVar5 = DAT_00802a88;
    if (DAT_00802a88 != (void *)0x0) {
      iVar7 = *(int *)(pSVar6 + 0x4e);
      sVar3 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        local_c = (float)((short)(((short)(iVar7 / 200) + sVar3) -
                                 (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        local_c = (float)(int)(short)(((short)(iVar7 / 200) + sVar3) -
                                     (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
      }
      iVar7 = *(int *)(pSVar6 + 0x4a);
      sVar3 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) -
                       (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                            (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
      }
      iVar10 = *(int *)(pSVar6 + 0x46);
      sVar3 = (short)(iVar10 >> 0x1f);
      if (iVar10 < 0) {
        iVar10 = (short)(((short)(iVar10 / 0xc9) + sVar3) -
                        (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar3) -
                             (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
      }
      if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
          (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar10,iVar7,
                              &local_14,&local_10), (int)local_c < 0)) || (4 < (int)local_c)) {
        bVar12 = true;
      }
      else {
        if (((local_14 < 0) || (*(int *)((int)pvVar5 + 0x30) <= local_14)) ||
           ((local_10 + (&DAT_0079aed0)[(int)local_c] < 0 ||
            (*(int *)((int)pvVar5 + 0x34) <= local_10 + (&DAT_0079aed0)[(int)local_c])))) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if ((bVar12) && (*(int *)((int)pvVar5 + 0x4c) != 0)) {
          bVar12 = *(char *)(((&DAT_0079aed0)[(int)local_c] + local_10) *
                             *(int *)((int)pvVar5 + 0x30) + *(int *)((int)pvVar5 + 0x4c) + local_14)
                   != '\0';
        }
        else {
          bVar12 = true;
        }
      }
      if (bVar12) {
        if (pSVar6[0xc1] == (STParticleC)0x0) {
          FUN_006eaaa0(DAT_00807598,*(uint *)pSVar1,0);
          pSVar6[0xc1] = (STParticleC)0x1;
        }
      }
      else if (pSVar6[0xc1] == (STParticleC)0x1) {
        FUN_006eab60(DAT_00807598,*(uint *)pSVar1);
        pSVar6[0xc1] = (STParticleC)0x0;
      }
    }
    if ((byte)pSVar6[0x14] < 4) {
      puVar9 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_s1_007d0c48,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      if (0xe < *(int *)(pSVar6 + 0xb2)) {
        local_8 = *(int *)(pSVar6 + 0xb2) + 3;
      }
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar1,1,*(undefined4 *)puVar9,*(int *)((int)puVar9 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar1,1,local_8);
      puVar13 = *(uint **)pSVar1;
    }
    else {
      puVar9 = FUN_00709af0(DAT_00806764,0x1d,(byte *)s_expl_s0_007d0c50,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
      if (0xe < *(int *)(pSVar6 + 0xb2)) {
        local_8 = *(int *)(pSVar6 + 0xb2) - 0xf;
      }
      FUN_006e98e0(DAT_00807598,*(uint *)pSVar1,1,*(undefined4 *)puVar9,*(int *)((int)puVar9 + 0x21)
                   ,1);
      FUN_006ea270(DAT_00807598,*(uint *)pSVar1,1,local_8);
      puVar13 = *(uint **)pSVar1;
    }
    FUN_006e9d40(DAT_00807598,puVar13,1);
    iVar7 = *(int *)(pSVar6 + 0xeb);
    if (iVar7 != 0) {
      if (*(int *)(pSVar6 + 0xf3) == 0) {
        FUN_006ea460(DAT_00807598,*(uint *)pSVar1,*(int *)(iVar7 + 0x1ed));
      }
      else {
        FUN_006ea3e0(DAT_00807598,*(uint *)pSVar1,*(int *)(iVar7 + 0x1ed));
      }
    }
    FUN_006ea4e0(DAT_00807598,*(uint *)pSVar1,1,0x5a,0x53);
    DAT_00858df8 = (undefined4 *)local_60;
    return 0;
  }
  return 0;
}


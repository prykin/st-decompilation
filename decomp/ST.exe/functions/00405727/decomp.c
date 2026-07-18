
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall thunk_FUN_00629070(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  short sVar5;
  float fVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 unaff_ESI;
  undefined **ppuVar13;
  void *unaff_EDI;
  bool bVar14;
  undefined4 uStack_70;
  undefined4 auStack_6c [16];
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  float fStack_20;
  void *pvStack_1c;
  uint uStack_18;
  float fStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined **ppuStack_8;
  
  uStack_24 = *(uint *)((int)this + 0x14) >> 8 & 0xff;
  ppuVar13 = (undefined **)0x0;
  ppuStack_8 = (undefined **)0x0;
  switch(uStack_24) {
  case 0:
  case 1:
    iVar9 = *(int *)((int)this + 0x1c);
    if (iVar9 == 4) {
      ppuVar13 = &PTR_s_partdw01_007d0798;
      ppuStack_8 = &PTR_s_partdw01_007d0798;
      iVar9 = (uint)*(byte *)((int)this + 0x14) * 8;
      uStack_10 = *(int *)(&DAT_007d0af0 + iVar9) / 2;
      uStack_c = *(int *)(&DAT_007d0af4 + iVar9) / 2 - 0xe;
    }
    else {
      if (uStack_24 == 0) {
        iVar11 = (uint)*(byte *)((int)this + 0x14) * 8;
        iVar2 = *(int *)(&DAT_007d0a70 + iVar11);
        iVar11 = *(int *)(&DAT_007d0a74 + iVar11);
      }
      else {
        iVar11 = (uint)*(byte *)((int)this + 0x14) * 8;
        iVar2 = *(int *)(&DAT_007d0bf0 + iVar11);
        iVar11 = *(int *)(&DAT_007d0bf4 + iVar11);
      }
      uStack_10 = iVar2 / 2;
      uStack_c = iVar11 / 2 - 0xe;
      if ((*(uint *)((int)this + 0x14) & 0x100) == 0) {
        if (iVar9 == 2) {
          ppuVar13 = &PTR_s_particle0_007d0718;
          ppuStack_8 = &PTR_s_particle0_007d0718;
        }
        else {
          ppuVar13 = &PTR_s_particle01_007d0758;
          ppuStack_8 = &PTR_s_particle01_007d0758;
        }
      }
      else if (iVar9 == 2) {
        ppuVar13 = &PTR_s_part_g0_007d0800;
        ppuStack_8 = &PTR_s_part_g0_007d0800;
      }
      else {
        ppuVar13 = &PTR_s_part_w0_007d07d8;
        ppuStack_8 = &PTR_s_part_w0_007d07d8;
      }
    }
    break;
  case 2:
    ppuVar13 = &PTR_s_gr2part0_007d0828;
    ppuStack_8 = &PTR_s_gr2part0_007d0828;
    uStack_10 = DAT_007d09d4 / 2;
    uStack_c = uStack_10 - 0xe;
    break;
  case 4:
    ppuVar13 = &PTR_s_stoun0_007d09d8;
    ppuStack_8 = &PTR_s_stoun0_007d09d8;
    iVar9 = *(int *)(&DAT_007d0a00 + (uint)*(byte *)((int)this + 0x14) * 4);
    goto LAB_00629242;
  case 8:
    ppuVar13 = &PTR_s_gr1part0_007d0870;
    ppuStack_8 = &PTR_s_gr1part0_007d0870;
    uStack_10 = DAT_007d09d4 / 2;
    uStack_c = uStack_10 - 0xe;
    break;
  case 0x10:
    ppuVar13 = &PTR_s_partsi01_007d08c4;
    ppuStack_8 = &PTR_s_partsi01_007d08c4;
    iVar9 = (uint)*(byte *)((int)this + 0x14) * 8;
    uStack_10 = *(int *)(&DAT_007d0af0 + iVar9) / 2;
    uStack_c = *(int *)(&DAT_007d0af4 + iVar9) / 2 - 0xe;
    break;
  case 0x20:
    ppuVar13 = &PTR_s_part_s0_007d0924;
    ppuStack_8 = &PTR_s_part_s0_007d0924;
    iVar9 = (uint)*(byte *)((int)this + 0x14) * 8;
    uStack_10 = *(int *)(&DAT_007d0b70 + iVar9) / 2;
    uStack_c = *(int *)(&DAT_007d0b74 + iVar9) / 2 - 0xe;
    break;
  case 0x40:
    ppuVar13 = &PTR_s_grsi0_007d0984;
    ppuStack_8 = &PTR_s_grsi0_007d0984;
    iVar9 = DAT_007d09d4;
    goto LAB_00629242;
  case 0x80:
    ppuVar13 = &PTR_s_rubb3_007d08bc;
    ppuStack_8 = &PTR_s_rubb3_007d08bc;
    iVar9 = DAT_007d08b8;
LAB_00629242:
    uStack_10 = iVar9 / 2;
    uStack_c = uStack_10 - 0xe;
  }
  if (ppuVar13 == (undefined **)0x0) {
    return 0xffffffff;
  }
  uStack_18 = CONCAT31(uStack_18._1_3_,*(undefined1 *)((int)this + 0x14));
  uStack_70 = DAT_00858df8;
  DAT_00858df8 = &uStack_70;
  pvStack_1c = this;
  iVar9 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  if (iVar9 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_70;
    iVar11 = FUN_006ad4d0(s_E____titans_nick_to_Part_Cpp_007d1354,0x2ac,0,iVar9,&DAT_007a4ccc);
    if (iVar11 != 0) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return uVar12;
    }
    FUN_006a5e40(iVar9,0,0x7d1354,0x2ae);
    return 0xffff;
  }
  puVar10 = FUN_00709af0(DAT_00806774,0x1d,ppuStack_8[uStack_18 & 0xff],0xffffffff,0,1,0,
                         (undefined4 *)0x0);
  pvVar8 = pvStack_1c;
  *(undefined4 *)((int)pvStack_1c + 0xb6) = *(undefined4 *)puVar10;
  if (param_1 == 0) {
    return 0;
  }
  *(ushort **)((int)pvStack_1c + 0xca) = puVar10;
  puVar1 = (uint *)((int)pvStack_1c + 0xc6);
  FUN_006e8660(DAT_00807598,(int *)puVar1,2,0,*(uint *)((int)puVar10 + 9),
               *(uint *)((int)puVar10 + 0xd),uStack_10,uStack_c,0);
  if (DAT_00807326 != '\0') {
    FUN_006e9520(DAT_00807598,*puVar1,0,0x4049f8,(uint)pvVar8);
  }
  FUN_006e98e0(DAT_00807598,*puVar1,0,*(undefined4 *)puVar10,*(int *)((int)puVar10 + 0x21),1);
  FUN_006ea270(DAT_00807598,*puVar1,0,0);
  uVar3 = *puVar1;
  fStack_20 = (float)*(int *)((int)pvVar8 + 0x46) * _DAT_007904f8 * _DAT_007904f0;
  *(float *)((int)pvVar8 + 0x6a) = fStack_20;
  fStack_14 = (float)*(int *)((int)pvVar8 + 0x4a) * _DAT_007904f8 * _DAT_007904f0;
  *(float *)((int)pvVar8 + 0x6e) = fStack_14;
  fVar6 = (float)*(int *)((int)pvVar8 + 0x4e) * _DAT_007904f8 * _DAT_007904f0;
  *(float *)((int)pvVar8 + 0x72) = fVar6;
  FUN_006ea960(DAT_00807598,uVar3,fStack_20,fStack_14,fVar6 + _DAT_007904fc);
  FUN_006eaaa0(DAT_00807598,*puVar1,0);
  *(undefined1 *)((int)pvVar8 + 0xc1) = 1;
  if (uStack_24 == 4) {
    FUN_006ea4e0(DAT_00807598,*puVar1,1,0xffffffff,0xffffffff);
    if (*(int *)((int)pvVar8 + 0x18) != 0) {
      FUN_006ea460(DAT_00807598,*puVar1,*(int *)((int)pvVar8 + 0x18));
    }
  }
  pvVar7 = DAT_00802a88;
  if (DAT_00802a88 != (void *)0x0) {
    iVar9 = *(int *)((int)pvVar8 + 0x4e);
    sVar5 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      fStack_14 = (float)((short)(((short)(iVar9 / 200) + sVar5) -
                                 (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      fStack_14 = (float)(int)(short)(((short)(iVar9 / 200) + sVar5) -
                                     (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
    }
    iVar9 = *(int *)((int)pvVar8 + 0x4a);
    sVar5 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar5) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar5) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    iVar11 = *(int *)((int)pvVar8 + 0x46);
    sVar5 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar5) -
                      (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar5) -
                           (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
        (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar11,iVar9,
                            &iStack_28,&iStack_2c), (int)fStack_14 < 0)) || (4 < (int)fStack_14)) {
      bVar14 = true;
    }
    else {
      if (((iStack_28 < 0) || (*(int *)((int)pvVar7 + 0x30) <= iStack_28)) ||
         (((&DAT_0079aed0)[(int)fStack_14] + iStack_2c < 0 ||
          (*(int *)((int)pvVar7 + 0x34) <= (&DAT_0079aed0)[(int)fStack_14] + iStack_2c)))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((bVar14) && (*(int *)((int)pvVar7 + 0x4c) != 0)) {
        bVar14 = *(char *)(((&DAT_0079aed0)[(int)fStack_14] + iStack_2c) *
                           *(int *)((int)pvVar7 + 0x30) + *(int *)((int)pvVar7 + 0x4c) + iStack_28)
                 != '\0';
      }
      else {
        bVar14 = true;
      }
    }
    if (bVar14) {
      if (*(char *)((int)pvVar8 + 0xc1) == '\0') {
        FUN_006eaaa0(DAT_00807598,*(uint *)((int)pvVar8 + 0xc6),0);
        *(undefined1 *)((int)pvVar8 + 0xc1) = 1;
        DAT_00858df8 = (undefined4 *)uStack_70;
        return 0;
      }
    }
    else if (*(char *)((int)pvVar8 + 0xc1) == '\x01') {
      FUN_006eab60(DAT_00807598,*(uint *)((int)pvVar8 + 0xc6));
      *(undefined1 *)((int)pvVar8 + 0xc1) = 0;
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_70;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00639c90(void *this,uint param_1)

{
  STT3DSprC *pSVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  int3 extraout_var;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  VisibleClassTy *pVVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_1c;
  int local_18;
  byte *local_14;
  int local_10;
  uint local_c;
  byte *local_8;
  
  uVar9 = param_1;
  iVar7 = STSprGameObjC::GetMessage(this,param_1);
  if (iVar7 == 0xffff) {
    return 0xffff;
  }
  uVar12 = *(uint *)(uVar9 + 0x10);
  if (3 < uVar12) {
    if (uVar12 == 0x10f) {
      local_8 = (byte *)thunk_FUN_0063cff0(this,&local_10);
      local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)((int)this + 0x1d5),&param_1);
      if (param_1 != 0) {
        local_8 = (byte *)Library::DKW::LIB::FUN_006acf50((undefined4 *)local_8,local_10 + param_1);
        pbVar13 = local_14;
        pbVar15 = local_8 + local_10;
        for (uVar9 = param_1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
          pbVar13 = pbVar13 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar9 = param_1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar15 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          pbVar15 = pbVar15 + 1;
        }
      }
      STPlaySystemC::SaveObjData
                (DAT_00802a38,*(undefined4 *)((int)this + 0x18),local_8,local_10 + param_1);
      FUN_006ab060(&local_8);
      FUN_006ab060(&local_14);
      return 0;
    }
    if (uVar12 != 0x128) {
      return 0;
    }
    thunk_FUN_004ad430((int)this + 0x1d5);
switchD_00639e3d_caseD_d:
    thunk_FUN_0063cc10(this);
    return 0;
  }
  if (uVar12 == 3) {
    thunk_FUN_004ad310((int)this + 0x1d5);
    if (-1 < (int)*(uint *)((int)this + 0x33a)) {
      FUN_006e8ba0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x33a));
      *(undefined4 *)((int)this + 0x33a) = 0xffffffff;
    }
    if (-1 < (int)*(uint *)((int)this + 0x353)) {
      FUN_006e8ba0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x353));
      *(undefined4 *)((int)this + 0x353) = 0xffffffff;
    }
    thunk_FUN_0063e660((int)this);
    thunk_FUN_00640130((int)this);
    return 0;
  }
  if (uVar12 != 0) {
    if (uVar12 != 2) {
      return 0;
    }
    puVar10 = *(undefined4 **)(uVar9 + 0x14);
    if (puVar10[3] == 2) {
      thunk_FUN_0063d100(this,puVar10);
      puVar10 = (undefined4 *)((int)this + 899);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)puVar10 = 0;
      return 0;
    }
    puVar14 = (undefined4 *)((int)this + 0x231);
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar14 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar14 = puVar14 + 1;
    }
    thunk_FUN_0063c030(this,DAT_00802a38->field_00E4);
    if (*(uint *)((int)this + 0x245) < 2) {
      iVar7 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)((int)this + 0x1d5),0xd,DAT_00806774,
                         (byte *)s_trmmine_007d1f30,0x1d);
      if (iVar7 != 0) {
        return 0xffff;
      }
      thunk_FUN_004abce0((STT3DSprC *)((int)this + 0x1d5),0xd,0x28,0x3b,'\0');
      iVar7 = 0x461;
    }
    else {
      if (*(uint *)((int)this + 0x245) != 2) goto LAB_00639dab;
      iVar7 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)((int)this + 0x1d5),0xd,DAT_00806774,
                         (byte *)s_vacmine_007d1f38,0x1d);
      if (iVar7 != 0) {
        return 0xffff;
      }
      thunk_FUN_004abce0((STT3DSprC *)((int)this + 0x1d5),0xd,0,9,'\0');
      iVar7 = 0x49a;
    }
    thunk_FUN_0063de20(this,iVar7);
LAB_00639dab:
    thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                       *(undefined2 *)((int)this + 0x26e));
    thunk_FUN_004ac660((STT3DSprC *)((int)this + 0x1d5),'\r');
    STT3DSprC::StartShow((STT3DSprC *)((int)this + 0x1d5),0xd,DAT_00802a38->field_00E4);
    *(undefined1 *)((int)this + 0x29f) = 1;
    *(undefined1 *)((int)this + 0x265) = 1;
    return 0;
  }
  switch(*(undefined1 *)((int)this + 0x265)) {
  case 1:
    uVar9 = thunk_FUN_0063c170(this,DAT_00802a38->field_00E4);
    if (0 < (int)uVar9) {
      if (uVar9 != 2) {
        thunk_FUN_004ad430((int)this + 0x1d5);
        *(undefined1 *)((int)this + 0x29f) = 0;
        *(undefined4 *)((int)this + 0x28e) = DAT_00802a38->field_00E4;
        *(undefined1 *)((int)this + 0x265) = 2;
        return 0;
      }
      pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
      iVar7 = STT3DSprC::LoadSequence(pSVar1,0xd,DAT_00806774,(byte *)s_exptme_007d1f40,0x1d);
      if (iVar7 == 0) {
        iVar7 = STT3DSprC::LoadSequence(pSVar1,0xf,DAT_00806764,(byte *)s_expl_s0_007d1f48,0x1d);
        if (iVar7 == 0) {
          thunk_FUN_004ac700(pSVar1,'\x0f');
          STT3DSprC::StartShow(pSVar1,0xd,DAT_00802a38->field_00E4);
          *(undefined1 *)((int)this + 0x29f) = 1;
          thunk_FUN_0062b990(*(undefined4 *)((int)this + 0x266),*(undefined4 *)((int)this + 0x26a),
                             *(undefined4 *)((int)this + 0x26e),0,(int)this,0,0);
          thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),
                             *(undefined2 *)((int)this + 0x26a),*(undefined2 *)((int)this + 0x26e));
          if ((*(int *)((int)this + 0x397) != 0) && (*(int *)((int)this + 0x39f) == 0)) {
            FUN_006ea460(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed),
                         *(int *)(*(int *)((int)this + 0x397) + 0x1ed));
          }
          *(undefined1 *)((int)this + 0x265) = 8;
          return 0;
        }
        return 0xffff;
      }
      return 0xffff;
    }
    thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                       *(undefined2 *)((int)this + 0x26e));
    if ((*(uint *)((int)this + 0x245) < 2) || (iVar7 = 0x50, *(uint *)((int)this + 0x245) != 2)) {
      iVar7 = 0x78;
    }
    uVar9 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar9;
    TraksClassTy::TraksCreate
              (DAT_00802a7c,0,1,uVar9 >> 0x10 & 1,*(int *)((int)this + 0x266),
               *(int *)((int)this + 0x26a),*(int *)((int)this + 0x26e) - iVar7,0,0,0,0,0,0,-1,0,0);
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = DAT_00802a88;
    if (DAT_00802a88 == (VisibleClassTy *)0x0) {
      return 0;
    }
    iVar7 = *(int *)((int)this + 0x26e);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      local_c = (short)(((short)(iVar7 / 200) + sVar3) -
                       (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar7 / 200) + sVar3) -
                             (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    iVar7 = *(int *)((int)this + 0x26a);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    iVar8 = *(int *)((int)this + 0x266);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (*(int *)(DAT_00802a88 + 0xf8) != 0)) &&
        (thunk_FUN_00558c00(DAT_00802a88,*(Global_sub_00558C00_param_1Enum *)(DAT_00802a88 + 0x10c),
                            iVar8,iVar7,&local_18,&local_1c), -1 < (int)local_c)) &&
       (((((int)local_c < 5 && (-1 < local_18)) &&
         ((local_18 < *(int *)(pVVar11 + 0x30) &&
          ((local_1c = local_1c + (&DAT_0079aed0)[local_c], -1 < local_1c &&
           (local_1c < *(int *)(pVVar11 + 0x34))))))) && (*(int *)(pVVar11 + 0x4c) != 0)))) {
      cVar2 = *(char *)(local_1c * *(int *)(pVVar11 + 0x30) + *(int *)(pVVar11 + 0x4c) + local_18);
joined_r0x0063a754:
      if (cVar2 == '\0') {
        if (*(char *)((int)this + 0x29f) == '\0') {
          return 0;
        }
        thunk_FUN_004ad430((int)this + 0x1d5);
        *(undefined1 *)((int)this + 0x29f) = 0;
        return 0;
      }
    }
    break;
  case 2:
    if ((uint)(DAT_00802a38->field_00E4 - *(int *)((int)this + 0x28e)) < 0x1f) {
      return 0;
    }
    sVar3 = *(short *)((int)this + 0x255);
    *(short *)((int)this + 0x24f) = sVar3;
    *(undefined2 *)((int)this + 0x251) = 0x1333;
    iVar8 = (int)sVar3;
    *(short *)((int)this + 0x24d) = *(short *)((int)this + 0x253);
    *(int *)((int)this + 0x266) = (int)*(short *)((int)this + 0x253);
    *(int *)((int)this + 0x26a) = iVar8;
    iVar7 = *(int *)((int)this + 0x266);
    sVar4 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar4) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    *(int *)((int)this + 0x286) = iVar7;
    if (iVar8 < 0) {
      iVar7 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    *(int *)((int)this + 0x28a) = iVar7;
    if (*(uint *)((int)this + 0x245) < 2) {
      iVar8 = 0;
      iVar7 = 0;
    }
    else {
      if (*(uint *)((int)this + 0x245) != 2) goto LAB_0063a27d;
      iVar8 = 10;
      iVar7 = 10;
    }
    thunk_FUN_004abce0((void *)((int)this + 0x1d5),0xd,iVar7,iVar8,'\0');
LAB_0063a27d:
    *(undefined1 *)((int)this + 0x29e) = 4;
    STT3DSprC::StartShow((STT3DSprC *)((int)this + 0x1d5),0xd,DAT_00802a38->field_00E4);
    thunk_FUN_004ad460((STT3DSprC *)((int)this + 0x1d5),0);
    *(undefined1 *)((int)this + 0x29f) = 1;
    *(undefined4 *)((int)this + 0x28e) = DAT_00802a38->field_00E4;
    thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                       *(undefined2 *)((int)this + 0x26e));
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = DAT_00802a88;
    if (DAT_00802a88 != (VisibleClassTy *)0x0) {
      iVar7 = *(int *)((int)this + 0x26e);
      sVar3 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        local_c = (short)(((short)(iVar7 / 200) + sVar3) -
                         (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar7 / 200) + sVar3) -
                               (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
      }
      iVar7 = *(int *)((int)this + 0x26a);
      sVar3 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) -
                       (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                            (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
      }
      iVar8 = *(int *)((int)this + 0x266);
      sVar3 = (short)(iVar8 >> 0x1f);
      if (iVar8 < 0) {
        iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) -
                       (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                            (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
      }
      if (((((DAT_0080874d == -1) || (*(int *)(DAT_00802a88 + 0xf8) == 0)) ||
           (thunk_FUN_00558c00(DAT_00802a88,
                               *(Global_sub_00558C00_param_1Enum *)(DAT_00802a88 + 0x10c),iVar8,
                               iVar7,&local_1c,&local_18), (int)local_c < 0)) ||
          (((4 < (int)local_c || (local_1c < 0)) ||
           ((*(int *)(pVVar11 + 0x30) <= local_1c ||
            ((local_18 = local_18 + (&DAT_0079aed0)[local_c], local_18 < 0 ||
             (*(int *)(pVVar11 + 0x34) <= local_18)))))))) ||
         ((*(int *)(pVVar11 + 0x4c) == 0 ||
          (*(char *)(local_18 * *(int *)(pVVar11 + 0x30) + *(int *)(pVVar11 + 0x4c) + local_1c) !=
           '\0')))) {
        if (*(char *)((int)this + 0x29f) == '\0') {
          thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
          *(undefined1 *)((int)this + 0x29f) = 1;
        }
      }
      else if (*(char *)((int)this + 0x29f) != '\0') {
        thunk_FUN_004ad430((int)this + 0x1d5);
        *(undefined1 *)((int)this + 0x29f) = 0;
      }
    }
    *(undefined1 *)((int)this + 0x265) = 3;
    *(undefined4 *)((int)this + 0x292) = 0x13;
    return 0;
  case 3:
    bVar6 = thunk_FUN_0063c4a0(this,DAT_00802a38->field_00E4);
    if (CONCAT31(extraout_var,bVar6) != 0 && -1 < extraout_var) {
      *(undefined4 *)((int)this + 0x28e) = DAT_00802a38->field_00E4;
      *(undefined1 *)((int)this + 0x265) = 4;
      if (DAT_00802a88 != (VisibleClassTy *)0x0) {
        iVar7 = *(int *)((int)this + 0x26a);
        sVar3 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) -
                         (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                              (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
        }
        iVar8 = *(int *)((int)this + 0x266);
        sVar3 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        VisibleClassTy::VisHoleCreate
                  (DAT_00802a88,iVar8,iVar7,(undefined *)0x0,*(uint *)((int)this + 0x259),
                   (undefined *)0x5,0x271);
      }
      if (*(short *)((int)this + 0x263) != -1) {
        thunk_FUN_006404b0(this,(int)*(short *)((int)this + 0x253),
                           (int)*(short *)((int)this + 0x255),(int)*(short *)((int)this + 0x263));
      }
      *(undefined4 *)((int)this + 0x292) = 0x41;
      *(undefined2 *)((int)this + 0x251) = *(undefined2 *)((int)this + 0x26e);
      iVar7 = *(int *)((int)this + 0x245);
      if (((iVar7 == 1) || (iVar7 == 0)) || (iVar7 == 2)) {
        *(undefined1 *)((int)this + 0x265) = 5;
        *(undefined4 *)((int)this + 0x292) = 0x13;
      }
    }
    if ((*(byte *)&DAT_00802a38->field_00E4 & 1) == 0) {
      iVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(int *)((int)this + 0x1c) = iVar7;
      iVar7 = iVar7 * 0x41c64e6d + 0x3039;
      *(int *)((int)this + 0x1c) = iVar7;
      uVar9 = iVar7 * 0x41c64e6d + 0x3039;
      uVar5 = (ushort)(uVar9 >> 0x10);
      *(uint *)((int)this + 0x1c) = uVar9;
      TraksClassTy::TraksCreate
                (DAT_00802a7c,1,1,uVar9 >> 0x10 & 1,*(int *)((int)this + 0x266),
                 *(int *)((int)this + 0x26a),*(int *)((int)this + 0x26e),uVar5 & 1,uVar5 & 1,0,0,0,0
                 ,-1,0,0);
    }
    thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                       *(undefined2 *)((int)this + 0x26e));
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = DAT_00802a88;
    if (DAT_00802a88 == (VisibleClassTy *)0x0) {
      return 0;
    }
    iVar7 = *(int *)((int)this + 0x26e);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      local_c = (short)(((short)(iVar7 / 200) + sVar3) -
                       (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar7 / 200) + sVar3) -
                             (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    iVar7 = *(int *)((int)this + 0x26a);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    iVar8 = *(int *)((int)this + 0x266);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    if (((((DAT_0080874d != -1) && (*(int *)(DAT_00802a88 + 0xf8) != 0)) &&
         (thunk_FUN_00558c00(DAT_00802a88,*(Global_sub_00558C00_param_1Enum *)(DAT_00802a88 + 0x10c)
                             ,iVar8,iVar7,&local_1c,&local_18), -1 < (int)local_c)) &&
        (((int)local_c < 5 && (-1 < local_1c)))) &&
       (iVar7 = *(int *)(pVVar11 + 0x30), local_1c < iVar7)) {
      iVar8 = (&DAT_0079aed0)[local_c];
LAB_0063a728:
      iVar8 = iVar8 + local_18;
      if (((-1 < iVar8) && (iVar8 < *(int *)(pVVar11 + 0x34))) && (*(int *)(pVVar11 + 0x4c) != 0)) {
        cVar2 = *(char *)(iVar8 * iVar7 + local_1c + *(int *)(pVVar11 + 0x4c));
        goto joined_r0x0063a754;
      }
    }
    break;
  case 4:
    iVar7 = thunk_FUN_0063c510(this,DAT_00802a38->field_00E4);
    if (0 < iVar7) {
      return 0;
    }
    thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                       *(undefined2 *)((int)this + 0x26e));
    if ((*(byte *)&DAT_00802a38->field_00E4 & 1) == 0) {
      iVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(int *)((int)this + 0x1c) = iVar7;
      iVar7 = iVar7 * 0x41c64e6d + 0x3039;
      *(int *)((int)this + 0x1c) = iVar7;
      uVar9 = iVar7 * 0x41c64e6d + 0x3039;
      uVar5 = (ushort)(uVar9 >> 0x10);
      *(uint *)((int)this + 0x1c) = uVar9;
      TraksClassTy::TraksCreate
                (DAT_00802a7c,1,1,uVar9 >> 0x10 & 1,*(int *)((int)this + 0x266),
                 *(int *)((int)this + 0x26a),*(int *)((int)this + 0x26e),uVar5 & 1,uVar5 & 1,0,0,0,0
                 ,-1,0,0);
    }
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = DAT_00802a88;
    if (DAT_00802a88 == (VisibleClassTy *)0x0) {
      return 0;
    }
    iVar7 = *(int *)((int)this + 0x26e);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      local_c = (short)(((short)(iVar7 / 200) + sVar3) -
                       (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar7 / 200) + sVar3) -
                             (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    iVar7 = *(int *)((int)this + 0x26a);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    iVar8 = *(int *)((int)this + 0x266);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    if ((((DAT_0080874d != -1) && (*(int *)(DAT_00802a88 + 0xf8) != 0)) &&
        (thunk_FUN_00558c00(DAT_00802a88,*(Global_sub_00558C00_param_1Enum *)(DAT_00802a88 + 0x10c),
                            iVar8,iVar7,&local_1c,&local_18), -1 < (int)local_c)) &&
       ((((int)local_c < 5 && (-1 < local_1c)) &&
        (iVar7 = *(int *)(pVVar11 + 0x30), local_1c < iVar7)))) {
      iVar8 = (&DAT_0079aed0)[local_c];
      goto LAB_0063a728;
    }
    break;
  case 5:
    uVar9 = thunk_FUN_0063c380(this,DAT_00802a38->field_00E4);
    if (uVar9 == 0) {
      thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                         *(undefined2 *)((int)this + 0x26e));
      (**(code **)(*(int *)this + 0xd8))();
      pVVar11 = DAT_00802a88;
      if (DAT_00802a88 != (VisibleClassTy *)0x0) {
        iVar7 = *(int *)((int)this + 0x26e);
        sVar3 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          local_c = (int)(short)(((short)(iVar7 / 200) + sVar3) -
                                (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) - 1;
        }
        else {
          local_c = (uint)(short)(((short)(iVar7 / 200) + sVar3) -
                                 (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
        }
        iVar7 = *(int *)((int)this + 0x26a);
        sVar3 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) -
                         (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                              (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
        }
        iVar8 = *(int *)((int)this + 0x266);
        sVar3 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        if ((((DAT_0080874d == -1) || (*(int *)(DAT_00802a88 + 0xf8) == 0)) ||
            ((thunk_FUN_00558c00(DAT_00802a88,
                                 *(Global_sub_00558C00_param_1Enum *)(DAT_00802a88 + 0x10c),iVar8,
                                 iVar7,&local_1c,&local_18), (int)local_c < 0 ||
             (((4 < (int)local_c || (local_1c < 0)) || (*(int *)(pVVar11 + 0x30) <= local_1c))))))
           || (((local_18 = (&DAT_0079aed0)[local_c] + local_18, local_18 < 0 ||
                (*(int *)(pVVar11 + 0x34) <= local_18)) ||
               ((*(int *)(pVVar11 + 0x4c) == 0 ||
                (*(char *)(local_18 * *(int *)(pVVar11 + 0x30) + local_1c + *(int *)(pVVar11 + 0x4c)
                          ) != '\0')))))) {
          if (*(char *)((int)this + 0x29f) == '\0') {
            thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
            *(undefined1 *)((int)this + 0x29f) = 1;
          }
        }
        else if (*(char *)((int)this + 0x29f) != '\0') {
          thunk_FUN_004ad430((int)this + 0x1d5);
          *(undefined1 *)((int)this + 0x29f) = 0;
        }
      }
      iVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(int *)((int)this + 0x1c) = iVar7;
      iVar7 = iVar7 * 0x41c64e6d + 0x3039;
      *(int *)((int)this + 0x1c) = iVar7;
      uVar9 = iVar7 * 0x41c64e6d + 0x3039;
      uVar5 = (ushort)(uVar9 >> 0x10);
      *(uint *)((int)this + 0x1c) = uVar9;
      TraksClassTy::TraksCreate
                (DAT_00802a7c,1,1,uVar9 >> 0x10 & 1,*(int *)((int)this + 0x266),
                 *(int *)((int)this + 0x26a),*(int *)((int)this + 0x26e),uVar5 & 1,uVar5 & 1,0,0,0,0
                 ,-1,0,0);
      thunk_FUN_0063f340((int)this);
      return 0;
    }
    *(int *)((int)this + 0x26e) = *(int *)((int)this + 0x27a) + 100;
    STT3DSprC::StopShow((STT3DSprC *)((int)this + 0x1d5),0xd);
    if (*(uint *)((int)this + 0x245) < 2) {
      iVar7 = STTmMineC::LoadImagNuclear(this,1);
      if (iVar7 == 0) {
        uVar9 = STTmMineC::CreatePart(this,500);
        if (-1 < (int)uVar9) {
          thunk_FUN_0063d460(this,*(undefined4 *)((int)this + 0x266),
                             *(undefined4 *)((int)this + 0x26a),*(int *)((int)this + 0x26e),10);
          thunk_FUN_0063d660(this,'\n');
          thunk_FUN_0063ddb0(this,1);
        }
        *(undefined1 *)((int)this + 0x265) = 9;
        return 0;
      }
      return 0xffff;
    }
    if (*(uint *)((int)this + 0x245) != 2) {
      return 0;
    }
    iVar7 = STTmMineC::LoadImagVacuum(this,1);
    if (iVar7 == 0) {
      uVar9 = STTmMineC::CreatePart(this,0x168);
      if (-1 < (int)uVar9) {
        thunk_FUN_0063d460(this,*(undefined4 *)((int)this + 0x266),
                           *(undefined4 *)((int)this + 0x26a),*(int *)((int)this + 0x26e),0xb);
        thunk_FUN_0063d660(this,'\v');
        thunk_FUN_0063ddb0(this,1);
      }
      if ((-1 < (int)*(uint *)((int)this + 0x33a)) && (*(char *)((int)this + 0x346) == '\0')) {
        FUN_006eaaa0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x33a),0);
        *(undefined1 *)((int)this + 0x346) = 1;
        thunk_FUN_00640390(this,1);
      }
      *(undefined1 *)((int)this + 0x265) = 10;
      thunk_FUN_0063de20(this,0x49b);
      return 0;
    }
    return 0xffff;
  case 6:
    iVar7 = thunk_FUN_0063c510(this,DAT_00802a38->field_00E4);
    if (iVar7 == 4) {
      pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
      thunk_FUN_004abce0(pSVar1,0xd,0x10,0x13,'\0');
      thunk_FUN_004ac660(pSVar1,'\r');
      STT3DSprC::StartShow(pSVar1,0xd,DAT_00802a38->field_00E4);
      *(undefined1 *)((int)this + 0x29f) = 1;
      *(undefined1 *)((int)this + 0x29e) = 3;
      *(undefined1 *)((int)this + 0x265) = 7;
      *(undefined4 *)((int)this + 0x28e) = DAT_00802a38->field_00E4;
    }
    iVar7 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\r');
    if (iVar7 % 7 == 0) {
      thunk_FUN_0063cc50(this,iVar7 / 7);
    }
    thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                       *(undefined2 *)((int)this + 0x26e));
    (**(code **)(*(int *)this + 0xd8))();
    pVVar11 = DAT_00802a88;
    if (DAT_00802a88 == (VisibleClassTy *)0x0) {
      return 0;
    }
    iVar7 = *(int *)((int)this + 0x26e);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      local_c = (short)(((short)(iVar7 / 200) + sVar3) -
                       (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar7 / 200) + sVar3) -
                             (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    iVar7 = *(int *)((int)this + 0x26a);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    iVar8 = *(int *)((int)this + 0x266);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                          (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
    }
    if (((((DAT_0080874d != -1) && (*(int *)(DAT_00802a88 + 0xf8) != 0)) &&
         (thunk_FUN_00558c00(DAT_00802a88,*(Global_sub_00558C00_param_1Enum *)(DAT_00802a88 + 0x10c)
                             ,iVar8,iVar7,&local_1c,&local_18), -1 < (int)local_c)) &&
        (((int)local_c < 5 && (-1 < local_1c)))) &&
       (iVar7 = *(int *)(pVVar11 + 0x30), local_1c < iVar7)) {
      iVar8 = (&DAT_0079aed0)[local_c];
      goto LAB_0063a728;
    }
    break;
  case 7:
    pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
    iVar7 = STT3DSprC::LoadSequence(pSVar1,0xd,DAT_00806774,(byte *)s_exptme_007d1f40,0x1d);
    if (iVar7 != 0) {
      return 0xffff;
    }
    iVar7 = STT3DSprC::LoadSequence(pSVar1,0xf,DAT_00806764,(byte *)s_expl_s0_007d1f48,0x1d);
    if (iVar7 == 0) {
      thunk_FUN_004ac700(pSVar1,'\x0f');
      thunk_FUN_004ac700(pSVar1,'\r');
      STT3DSprC::StartShow(pSVar1,0xd,DAT_00802a38->field_00E4);
      *(undefined1 *)((int)this + 0x29f) = 1;
      thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                         *(undefined2 *)((int)this + 0x26e));
      *(undefined1 *)((int)this + 0x265) = 8;
      thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x266),*(undefined2 *)((int)this + 0x26a),
                         *(undefined2 *)((int)this + 0x26e));
      (**(code **)(*(int *)this + 0xd8))();
      return 0;
    }
    return 0xffff;
  case 8:
    pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
    iVar7 = thunk_FUN_004ac910(pSVar1,'\r');
    if (iVar7 == 0x17) {
      STT3DSprC::StartShow(pSVar1,0xf,DAT_00802a38->field_00E4);
    }
    iVar7 = thunk_FUN_004acd30(pSVar1,'\r');
    iVar8 = thunk_FUN_004ac910(pSVar1,'\r');
    if (iVar7 + -1 == iVar8) {
      STT3DSprC::StopShow(pSVar1,0xd);
    }
    iVar7 = thunk_FUN_004acd30(pSVar1,'\x0f');
    iVar8 = thunk_FUN_004ac910(pSVar1,'\x0f');
    if (iVar7 + -1 == iVar8) {
      *(undefined1 *)((int)this + 0x265) = 0xd;
    }
    (**(code **)(*(int *)this + 0xd8))();
    return 0;
  case 9:
    if (*(int *)((int)this + 0x34b) != 0) {
      iVar7 = *(int *)((int)this + 0x34f);
      if (iVar7 < 2) {
        iVar7 = *(int *)(&DAT_007d1fd4 + iVar7 * 4);
        fVar22 = (float)*(int *)((int)this + 0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc;
        fVar21 = (float)*(int *)((int)this + 0x26a) * _DAT_007904f8 * _DAT_007904f0;
        uVar17 = **(undefined4 **)(*(int *)((int)this + 0x34b) + 0x21);
        fVar20 = (float)*(int *)((int)this + 0x266) * _DAT_007904f8 * _DAT_007904f0;
        uVar19 = 0xf7;
        uVar18 = 0x108;
      }
      else {
        iVar7 = *(int *)(&DAT_007d1fd4 + iVar7 * 4);
        fVar22 = 0.0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
      }
      FUN_006ead40(*(void **)((int)this + 0x211),iVar7 * 0x100 + DAT_008032cc,uVar17,uVar18,uVar19,
                   fVar20,fVar21,fVar22);
      if (*(int *)((int)this + 0x34f) == 2) {
        iVar7 = *(int *)((int)this + 0x26a);
        sVar3 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) -
                         (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                              (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
        }
        iVar8 = *(int *)((int)this + 0x266);
        sVar3 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar3) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar3) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        thunk_FUN_0063e700(this,iVar8,iVar7,2);
        thunk_FUN_0063de20(this,0x462);
      }
      if ((*(int *)((int)this + 0x34f) == 3) && (-1 < (int)*(uint *)((int)this + 0x33a))) {
        FUN_006eaaa0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x33a),0);
      }
      iVar7 = *(int *)((int)this + 0x34f) + 1;
      *(int *)((int)this + 0x34f) = iVar7;
      if (iVar7 == 7) {
        Library::DKW::DDX::FUN_006c83b0(DAT_008075a8,2,3,(int *)&DAT_007d1ff8);
      }
      if (8 < *(int *)((int)this + 0x34f)) {
        FUN_006ead40(*(void **)((int)this + 0x211),0,0,0x108,0xf7,
                     (float)*(int *)((int)this + 0x266) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)((int)this + 0x26a) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)((int)this + 0x26e) * _DAT_007904f8 * _DAT_007904f0 +
                     _DAT_007904fc);
        *(undefined4 *)((int)this + 0x34b) = 0;
      }
      if (*(int *)((int)this + 0x34f) < 3) {
        return 0;
      }
    }
    uVar9 = *(uint *)((int)this + 0x33a);
    if ((-1 < (int)uVar9) && ((*(byte *)&DAT_00802a38->field_00E4 & 1) == 0)) {
      uVar12 = *(int *)((int)this + 0x33e) + 1;
      *(uint *)((int)this + 0x33e) = uVar12;
      if ((int)uVar12 < *(int *)((int)this + 0x342)) {
        FUN_006ea270(*(void **)((int)this + 0x211),uVar9,0,uVar12);
      }
      else {
        FUN_006e8ba0(*(void **)((int)this + 0x211),uVar9);
        *(undefined4 *)((int)this + 0x33a) = 0xffffffff;
      }
    }
    uVar9 = *(uint *)((int)this + 0x353);
    if ((-1 < (int)uVar9) && ((*(byte *)&DAT_00802a38->field_00E4 & 1) == 0)) {
      uVar12 = *(int *)((int)this + 0x357) + 1;
      *(uint *)((int)this + 0x357) = uVar12;
      if ((int)uVar12 < *(int *)((int)this + 0x35b)) {
        FUN_006ea270(*(void **)((int)this + 0x211),uVar9,0,uVar12);
      }
      else {
        FUN_006e8ba0(*(void **)((int)this + 0x211),uVar9);
        *(undefined4 *)((int)this + 0x353) = 0xffffffff;
      }
    }
    if ((*(int *)((int)this + 0x353) == -1) && (*(int *)((int)this + 0x33a) == -1)) {
      *(undefined1 *)((int)this + 0x265) = 0xd;
      return 0;
    }
    if (*(int *)((int)this + 0x336) == 0) {
      return 0;
    }
    thunk_FUN_0063e9c0(this,10);
    thunk_FUN_0063e410((int)this);
    iVar7 = *(int *)((int)this + 0x2c0) * 10;
    if (iVar7 - *(int *)((int)this + 0x2b0) == 0 || iVar7 < *(int *)((int)this + 0x2b0)) {
      return 0;
    }
    thunk_FUN_0063e660((int)this);
    return 0;
  case 10:
    uVar9 = local_c >> 8;
    local_c = local_c & 0xffffff00;
    if (-1 < *(int *)((int)this + 0x363)) {
      if (*(int *)((int)this + 0x367) == 0) {
        local_c = CONCAT31((int3)uVar9,1);
        iVar7 = *(int *)(*(int *)((int)this + 0x211) + 0x380);
        FUN_006e3210(*(int *)((int)this + 0x211),(*(int *)((int)this + 0x2a4) * iVar7) / 0xc9,
                     (*(int *)((int)this + 0x2a8) * iVar7) / 0xc9);
        lVar16 = Library::MSVCRT::__ftol();
        param_1 = (int)(short)lVar16 + 0x2d;
      }
      uVar9 = *(int *)((int)this + 0x367) + 1;
      *(uint *)((int)this + 0x367) = uVar9;
      if ((int)uVar9 < *(int *)((int)this + 0x36b)) {
        FUN_006ea270(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x363),0,uVar9);
      }
      else {
        FUN_006e8ba0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x363));
        *(undefined4 *)((int)this + 0x363) = 0xffffffff;
      }
    }
    iVar7 = thunk_FUN_0063f790((int)this);
    if (iVar7 != 0) {
      if (-1 < iVar7) {
        thunk_FUN_0063d460(this,*(undefined4 *)((int)this + 0x266),
                           *(undefined4 *)((int)this + 0x26a),*(int *)((int)this + 0x26e),0xc);
        thunk_FUN_0063d660(this,'\f');
        thunk_FUN_0063ddb0(this,0);
        iVar7 = *(int *)((int)this + 0x37f);
        if (iVar7 != 0) {
          if ((*(byte *)&DAT_00802a38->field_00E4 & 1) == 0) {
            *(char *)(iVar7 + 0x15) = *(char *)(iVar7 + 0x15) + -1;
            uVar9 = **(uint **)((int)this + 0x37f);
            if (-1 < (int)uVar9) {
              FUN_006e9720(*(void **)((int)this + 0x211),uVar9,
                           (uint)*(byte *)((int)*(uint **)((int)this + 0x37f) + 0x15) * 0x100 +
                           DAT_008032b8);
              FUN_006e96d0(*(void **)((int)this + 0x211),**(uint **)((int)this + 0x37f));
            }
          }
          else {
            thunk_FUN_00640130((int)this);
          }
        }
        if (*(int *)((int)this + 0x34b) != 0) {
          fVar22 = *(float *)((int)this + 0x332) + _DAT_007904fc;
          iVar7 = *(int *)((int)this + 0x34f) + 1;
          *(int *)((int)this + 0x34f) = iVar7;
          FUN_006ead40(*(void **)((int)this + 0x211),
                       *(int *)(&DAT_007d1fd4 + iVar7 * 4) * 0x100 + DAT_008032cc,
                       **(undefined4 **)(*(int *)((int)this + 0x34b) + 0x21),0x108,0xf7,
                       (float)*(int *)((int)this + 0x2a4) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)this + 0x2a8) * _DAT_007904f8 * _DAT_007904f0,fVar22);
          *(int *)((int)this + 0x34f) = *(int *)((int)this + 0x34f) + 1;
        }
        *(undefined1 *)((int)this + 0x265) = 0xb;
        thunk_FUN_00640390(this,0);
        return 0;
      }
      *(undefined1 *)((int)this + 0x265) = 0xd;
      thunk_FUN_00640390(this,0);
      return 0;
    }
    thunk_FUN_0063fe70(this,(char)local_c);
    thunk_FUN_00640390(this,0);
    return 0;
  case 0xb:
    if (*(int *)((int)this + 0x34b) != 0) {
      iVar7 = *(int *)((int)this + 0x34f);
      if (iVar7 < 2) {
        fVar22 = *(float *)((int)this + 0x332) + _DAT_007904fc;
        fVar21 = (float)*(int *)((int)this + 0x2a8) * _DAT_007904f8 * _DAT_007904f0;
        uVar17 = **(undefined4 **)(*(int *)((int)this + 0x34b) + 0x21);
        iVar7 = *(int *)(&DAT_007d1fd4 + iVar7 * 4);
        fVar20 = (float)*(int *)((int)this + 0x2a4) * _DAT_007904f8 * _DAT_007904f0;
        uVar19 = 0xf7;
        uVar18 = 0x108;
      }
      else {
        iVar7 = *(int *)(&DAT_007d1fd4 + iVar7 * 4);
        fVar22 = 0.0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
      }
      FUN_006ead40(*(void **)((int)this + 0x211),iVar7 * 0x100 + DAT_008032cc,uVar17,uVar18,uVar19,
                   fVar20,fVar21,fVar22);
      iVar7 = *(int *)((int)this + 0x34f) + 1;
      *(int *)((int)this + 0x34f) = iVar7;
      if (iVar7 == 7) {
        Library::DKW::DDX::FUN_006c83b0(DAT_008075a8,2,3,(int *)&DAT_007d1ff8);
      }
      if (8 < *(int *)((int)this + 0x34f)) {
        FUN_006ead40(*(void **)((int)this + 0x211),0,0,0x108,0xf7,
                     (float)*(int *)((int)this + 0x2a4) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)((int)this + 0x2a8) * _DAT_007904f8 * _DAT_007904f0,
                     *(float *)((int)this + 0x332) + _DAT_007904fc);
        *(undefined4 *)((int)this + 0x34b) = 0;
      }
    }
    iVar7 = *(int *)((int)this + 0x37f);
    if (iVar7 != 0) {
      if ((*(byte *)&DAT_00802a38->field_00E4 & 1) == 0) {
        *(char *)(iVar7 + 0x15) = *(char *)(iVar7 + 0x15) + -1;
        uVar9 = **(uint **)((int)this + 0x37f);
        if (-1 < (int)uVar9) {
          FUN_006e9720(*(void **)((int)this + 0x211),uVar9,
                       (uint)*(byte *)((int)*(uint **)((int)this + 0x37f) + 0x15) * 0x100 +
                       DAT_008032b8);
          FUN_006e96d0(*(void **)((int)this + 0x211),**(uint **)((int)this + 0x37f));
        }
      }
      else {
        thunk_FUN_00640130((int)this);
      }
    }
    thunk_FUN_0063e9c0(this,0xc);
    thunk_FUN_0063e410((int)this);
    if (*(int *)((int)this + 0x2b8) < *(int *)((int)this + 0x2b0)) {
      thunk_FUN_0063e660((int)this);
      *(undefined1 *)((int)this + 0x265) = 0xd;
    }
    thunk_FUN_00640390(this,0);
    return 0;
  default:
    goto switchD_00639e3d_caseD_c;
  case 0xd:
    goto switchD_00639e3d_caseD_d;
  }
  if (*(char *)((int)this + 0x29f) == '\0') {
    thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
    *(undefined1 *)((int)this + 0x29f) = 1;
    return 0;
  }
switchD_00639e3d_caseD_c:
  return 0;
}


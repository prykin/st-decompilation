
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Part.Cpp
   STParticleC::InitVisibelDeton */

undefined4 __thiscall STParticleC::InitVisibelDeton(STParticleC *this,int param_1)

{
  undefined4 *puVar1;
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
  InternalExceptionFrame local_60;
  float local_1c;
  STParticleC *local_18;
  int local_14;
  int local_10;
  float local_c;
  uint local_8;
  
  local_8 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_18 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar6 = local_18;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar10 = ReportDebugMessage(s_E____titans_nick_to_Part_Cpp_007d1354,800,0,iVar7,&DAT_007a4ccc,
                                s_STParticleC__InitVisibelDeton_007d13bc);
    if (iVar10 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_nick_to_Part_Cpp_007d1354,0x322);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return uVar11;
  }
  pbVar8 = PTR_s_expl_sb1_007d0c44;
  if (3 < (byte)local_18->field_0x14) {
    pbVar8 = PTR_s_expl_sb0_007d0c40;
  }
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806764,CASE_1D,pbVar8,0xffffffff,0,1,0,(undefined4 *)0x0);
  pSVar6->field_00B6 = *(undefined4 *)puVar9;
  if (param_1 != 0) {
    puVar1 = &pSVar6->field_00C6;
    if ((int)pSVar6->field_00C6 < 0) {
      FUN_006e8660(DAT_00807598,puVar1,2,0,*(uint *)((int)puVar9 + 9),*(uint *)((int)puVar9 + 0xd),
                   0x5a,0x45,0);
    }
    else {
      FUN_006e9520(DAT_00807598,pSVar6->field_00C6,0,0,0);
      FUN_006e9af0(DAT_00807598,*puVar1,2,0,*(uint *)((int)puVar9 + 9),*(uint *)((int)puVar9 + 0xd),
                   0x5a,0x45,1);
    }
    FUN_006e98e0(DAT_00807598,*puVar1,0,*(undefined4 *)puVar9,*(int *)((int)puVar9 + 0x21),1);
    FUN_006ea270(DAT_00807598,*puVar1,0,pSVar6->field_00B2);
    local_1c = (float)pSVar6->field_0046 * _DAT_007904f8 * _DAT_007904f0;
    pSVar6->field_006A = local_1c;
    local_c = (float)pSVar6->field_004A * _DAT_007904f8 * _DAT_007904f0;
    pSVar6->field_006E = local_c;
    fVar4 = (float)pSVar6->field_004E * _DAT_007904f8 * _DAT_007904f0;
    pSVar6->field_0072 = fVar4;
    FUN_006ea960(DAT_00807598,*puVar1,local_1c,local_c,fVar4 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,*puVar1,0);
    pSVar6->field_00C1 = 1;
    pvVar5 = DAT_00802a88;
    if (DAT_00802a88 != (void *)0x0) {
      iVar7 = pSVar6->field_004E;
      sVar3 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        local_c = (float)((short)(((short)(iVar7 / 200) + sVar3) -
                                 (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        local_c = (float)(int)(short)(((short)(iVar7 / 200) + sVar3) -
                                     (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
      }
      iVar7 = pSVar6->field_004A;
      sVar3 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) -
                       (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                            (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
      }
      iVar10 = pSVar6->field_0046;
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
          (thunk_FUN_00558c00(DAT_00802a88,
                              *(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),iVar10
                              ,iVar7,&local_14,&local_10), (int)local_c < 0)) || (4 < (int)local_c))
      {
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
        if (pSVar6->field_00C1 == '\0') {
          FUN_006eaaa0(DAT_00807598,*puVar1,0);
          pSVar6->field_00C1 = 1;
        }
      }
      else if (pSVar6->field_00C1 == '\x01') {
        FUN_006eab60(DAT_00807598,*puVar1);
        pSVar6->field_00C1 = 0;
      }
    }
    if ((byte)pSVar6->field_0x14 < 4) {
      puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,(byte *)s_expl_s1_007d0c48,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      if (0xe < (int)pSVar6->field_00B2) {
        local_8 = pSVar6->field_00B2 + 3;
      }
      FUN_006e98e0(DAT_00807598,*puVar1,1,*(undefined4 *)puVar9,*(int *)((int)puVar9 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,1,local_8);
      puVar13 = (uint *)*puVar1;
    }
    else {
      puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,(byte *)s_expl_s0_007d0c50,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      if (0xe < (int)pSVar6->field_00B2) {
        local_8 = pSVar6->field_00B2 - 0xf;
      }
      FUN_006e98e0(DAT_00807598,*puVar1,1,*(undefined4 *)puVar9,*(int *)((int)puVar9 + 0x21),1);
      FUN_006ea270(DAT_00807598,*puVar1,1,local_8);
      puVar13 = (uint *)*puVar1;
    }
    FUN_006e9d40(DAT_00807598,puVar13,1);
    iVar7 = pSVar6->field_00EB;
    if (iVar7 != 0) {
      if (pSVar6->field_00F3 == 0) {
        FUN_006ea460(DAT_00807598,*puVar1,*(int *)(iVar7 + 0x1ed));
      }
      else {
        FUN_006ea3e0(DAT_00807598,*puVar1,*(int *)(iVar7 + 0x1ed));
      }
    }
    FUN_006ea4e0(DAT_00807598,*puVar1,1,0x5a,0x53);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0;
}


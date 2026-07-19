
undefined4 __fastcall FUN_00643e20(int param_1,undefined4 param_2)

{
  STT3DSprC *pSVar1;
  short sVar2;
  void *pvVar3;
  undefined4 in_EAX;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int *local_8;
  
  pvVar3 = DAT_00802a88;
  uVar8 = (undefined2)((uint)param_2 >> 0x10);
  local_8 = (int *)0x0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (DAT_00802a88 != (void *)0x0) {
    sVar2 = *(short *)(param_1 + 0x45);
    if (sVar2 < 0) {
      iVar9 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                     (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                          (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f));
    }
    sVar2 = *(short *)(param_1 + 0x43);
    if (sVar2 < 0) {
      iVar7 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                     (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar7 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                          (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
    }
    sVar2 = *(short *)(param_1 + 0x41);
    if (sVar2 < 0) {
      uVar4 = (int)(sVar2 / 0xc9) - 1;
    }
    else {
      uVar4 = (uint)(sVar2 / 0xc9);
    }
    uVar11 = CONCAT44((int)sVar2 / 0xc9,uVar4);
    if ((DAT_0080874d == -1) || (uVar11 = (ulonglong)uVar4, *(int *)((int)DAT_00802a88 + 0xf8) == 0)
       ) {
LAB_00643f4a:
      if (*(char *)(param_1 + 0x1e7) == '\x01') {
        uVar11 = thunk_FUN_004ad460((void *)(param_1 + 0x1d5),0);
      }
    }
    else {
      uVar10 = thunk_FUN_00558c00(DAT_00802a88,
                                  *(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),
                                  uVar4,iVar7,(int *)&local_1c,&local_20);
      uVar11 = uVar10;
      if ((iVar9 < 0) ||
         (((4 < iVar9 || (uVar11 = CONCAT44(local_1c,(int)uVar10), (int)local_1c < 0)) ||
          (uVar11 = CONCAT44(local_1c,(int)uVar10), *(int *)((int)pvVar3 + 0x30) <= (int)local_1c)))
         ) goto LAB_00643f4a;
      local_20 = (&DAT_0079aed0)[iVar9] + local_20;
      uVar11 = CONCAT44(local_1c,local_20);
      if ((((local_20 < 0) ||
           (uVar11 = CONCAT44(local_1c,local_20), *(int *)((int)pvVar3 + 0x34) <= local_20)) ||
          (uVar11 = CONCAT44(local_1c,local_20), *(int *)((int)pvVar3 + 0x4c) == 0)) ||
         (uVar4 = (uint)*(byte *)(local_20 * *(int *)((int)pvVar3 + 0x30) +
                                  *(int *)((int)pvVar3 + 0x4c) + local_1c),
         uVar11 = CONCAT44(local_1c,uVar4), uVar4 != 0)) goto LAB_00643f4a;
      uVar11 = (ulonglong)local_1c << 0x20;
      if (*(char *)(param_1 + 0x1e7) == '\0') {
        uVar11 = thunk_FUN_004ad430(param_1 + 0x1d5);
      }
    }
    in_EAX = (undefined4)uVar11;
    uVar8 = (undefined2)(uVar11 >> 0x30);
  }
  if (*(int *)(param_1 + 0x23d) == 1) {
    if (*(byte *)(param_1 + 0x27d) < 8) {
      local_c = STAllPlayersC::GetObjPtr
                          (DAT_007fa174,
                           CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0x24)),
                           CONCAT22(uVar8,*(undefined2 *)(param_1 + 0x262)),CASE_1);
    }
    uVar4 = local_c;
    if (((*(char *)(param_1 + 0x27d) == '\0') && (*(int *)(param_1 + 0x259) != 10)) &&
       ((local_c != 0 && (*(int *)(local_c + 0x18) == *(int *)(param_1 + 0x25e))))) {
      FUN_006ea3e0(*(void **)(param_1 + 0x211),*(uint *)(param_1 + 0x1ed),*(int *)(local_c + 0x1ed))
      ;
    }
    bVar6 = *(char *)(param_1 + 0x27d) + 1;
    *(byte *)(param_1 + 0x27d) = bVar6;
    if (bVar6 < 8) {
      if ((uVar4 == 0) || (*(int *)(uVar4 + 0x18) != *(int *)(param_1 + 0x25e))) {
        FUN_006ea2f0(*(void **)(param_1 + 0x211),*(uint *)(param_1 + 0x1ed));
      }
      bVar6 = *(byte *)(param_1 + 0x27d);
    }
    if (bVar6 == 8) {
      FUN_006ea2f0(*(void **)(param_1 + 0x211),*(uint *)(param_1 + 0x1ed));
      uVar5 = thunk_FUN_0041da30(param_1);
      return uVar5;
    }
  }
  else {
    if (*(int *)(param_1 + 0x270) == 0) {
      pSVar1 = (STT3DSprC *)(param_1 + 0x1d5);
      iVar9 = STT3DSprC::SetCurFase(pSVar1,'\0',(uint)*(byte *)(param_1 + 0x27c));
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      iVar9 = STT3DSprC::ShowCurFase(pSVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar6 = *(byte *)(param_1 + 0x27c);
      iVar9 = thunk_FUN_004acd30(pSVar1,'\x01');
      if ((int)(uint)bVar6 < iVar9) {
        iVar9 = STT3DSprC::SetCurFase(pSVar1,'\x01',(uint)bVar6);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        iVar9 = STT3DSprC::ShowCurFase(pSVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      iVar9 = thunk_FUN_004acd30(pSVar1,'\x01');
      if (iVar9 != *(byte *)(param_1 + 0x27c) - 1) goto cf_common_exit_0064428F;
    }
    else {
      bVar6 = *(byte *)(param_1 + 0x27c);
      if (bVar6 < 0xf) {
        iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x274),(int *)&local_8);
        if (iVar9 == -4) {
          *(undefined1 *)(param_1 + 0x27c) = 0xfa;
          return 0;
        }
        iVar9 = (**(code **)(*local_8 + 0xe0))
                          (*(undefined4 *)(param_1 + 0x278),&local_10,&local_14,&local_18,&local_24)
        ;
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        *(undefined2 *)(param_1 + 0x41) = (undefined2)local_10;
        *(undefined2 *)(param_1 + 0x45) = (undefined2)local_18;
        *(undefined2 *)(param_1 + 0x43) = (undefined2)local_14;
        if (local_24 == 0) {
          FUN_006ea460(*(void **)(param_1 + 0x211),*(uint *)(param_1 + 0x1ed),
                       *(int *)((int)local_8 + 0x1ed));
        }
        else {
          FUN_006ea3e0(*(void **)(param_1 + 0x211),*(uint *)(param_1 + 0x1ed),
                       *(int *)((int)local_8 + 0x1ed));
        }
        bVar6 = *(byte *)(param_1 + 0x27c);
      }
      if (bVar6 == 0xf) {
        iVar9 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x274),(int *)&local_8);
        if (iVar9 == -4) {
          *(undefined1 *)(param_1 + 0x27c) = 0xfa;
          return 0;
        }
        (**(code **)(*local_8 + 0xe4))(*(undefined4 *)(param_1 + 0x278));
      }
      pSVar1 = (STT3DSprC *)(param_1 + 0x1d5);
      iVar9 = STT3DSprC::SetCurFase(pSVar1,'\0',(uint)*(byte *)(param_1 + 0x27c));
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      iVar9 = STT3DSprC::ShowCurFase(pSVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar6 = *(byte *)(param_1 + 0x27c);
      iVar9 = thunk_FUN_004acd30(pSVar1,'\x01');
      if ((int)(uint)bVar6 < iVar9) {
        iVar9 = STT3DSprC::SetCurFase(pSVar1,'\x01',(uint)bVar6);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        iVar9 = STT3DSprC::ShowCurFase(pSVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      iVar9 = thunk_FUN_004acd30(pSVar1,'\x01');
      if (iVar9 != *(byte *)(param_1 + 0x27c) - 1) goto cf_common_exit_0064428F;
    }
    STT3DSprC::StopShow((STT3DSprC *)(param_1 + 0x1d5),1);
  }
cf_common_exit_0064428F:
  uVar5 = thunk_FUN_0041da30(param_1);
  return uVar5;
}


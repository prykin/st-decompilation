
undefined4 __fastcall FUN_00643e20(int param_1,undefined4 param_2)

{
  void *pvVar1;
  short sVar2;
  undefined4 in_EAX;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int *local_8;
  
  pvVar1 = DAT_00802a88;
  uVar7 = (undefined2)((uint)param_2 >> 0x10);
  local_8 = (int *)0x0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (DAT_00802a88 != (void *)0x0) {
    sVar2 = *(short *)(param_1 + 0x45);
    if (sVar2 < 0) {
      iVar8 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                     (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar8 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                          (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f));
    }
    sVar2 = *(short *)(param_1 + 0x43);
    if (sVar2 < 0) {
      iVar6 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                     (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar6 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                          (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
    }
    sVar2 = *(short *)(param_1 + 0x41);
    if (sVar2 < 0) {
      uVar3 = (int)(sVar2 / 0xc9) - 1;
    }
    else {
      uVar3 = (uint)(sVar2 / 0xc9);
    }
    uVar10 = CONCAT44((int)sVar2 / 0xc9,uVar3);
    if ((DAT_0080874d == -1) || (uVar10 = (ulonglong)uVar3, *(int *)((int)DAT_00802a88 + 0xf8) == 0)
       ) {
LAB_00643f4a:
      if (*(char *)(param_1 + 0x1e7) == '\x01') {
        uVar10 = thunk_FUN_004ad460((void *)(param_1 + 0x1d5),0);
      }
    }
    else {
      uVar9 = thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),uVar3,iVar6
                                 ,(int *)&local_1c,&local_20);
      uVar10 = uVar9;
      if ((iVar8 < 0) ||
         (((4 < iVar8 || (uVar10 = CONCAT44(local_1c,(int)uVar9), (int)local_1c < 0)) ||
          (uVar10 = CONCAT44(local_1c,(int)uVar9), *(int *)((int)pvVar1 + 0x30) <= (int)local_1c))))
      goto LAB_00643f4a;
      local_20 = (&DAT_0079aed0)[iVar8] + local_20;
      uVar10 = CONCAT44(local_1c,local_20);
      if ((((local_20 < 0) ||
           (uVar10 = CONCAT44(local_1c,local_20), *(int *)((int)pvVar1 + 0x34) <= local_20)) ||
          (uVar10 = CONCAT44(local_1c,local_20), *(int *)((int)pvVar1 + 0x4c) == 0)) ||
         (uVar3 = (uint)*(byte *)(local_20 * *(int *)((int)pvVar1 + 0x30) +
                                  *(int *)((int)pvVar1 + 0x4c) + local_1c),
         uVar10 = CONCAT44(local_1c,uVar3), uVar3 != 0)) goto LAB_00643f4a;
      uVar10 = (ulonglong)local_1c << 0x20;
      if (*(char *)(param_1 + 0x1e7) == '\0') {
        uVar10 = thunk_FUN_004ad430(param_1 + 0x1d5);
      }
    }
    in_EAX = (undefined4)uVar10;
    uVar7 = (undefined2)(uVar10 >> 0x30);
  }
  if (*(int *)(param_1 + 0x23d) == 1) {
    if (*(byte *)(param_1 + 0x27d) < 8) {
      local_c = thunk_FUN_0042b620(CONCAT31((int3)((uint)in_EAX >> 8),
                                            *(undefined1 *)(param_1 + 0x24)),
                                   CONCAT22(uVar7,*(undefined2 *)(param_1 + 0x262)),1);
    }
    uVar3 = local_c;
    if (((*(char *)(param_1 + 0x27d) == '\0') && (*(int *)(param_1 + 0x259) != 10)) &&
       ((local_c != 0 && (*(int *)(local_c + 0x18) == *(int *)(param_1 + 0x25e))))) {
      FUN_006ea3e0(*(void **)(param_1 + 0x211),*(uint *)(param_1 + 0x1ed),*(int *)(local_c + 0x1ed))
      ;
    }
    bVar5 = *(char *)(param_1 + 0x27d) + 1;
    *(byte *)(param_1 + 0x27d) = bVar5;
    if (bVar5 < 8) {
      if ((uVar3 == 0) || (*(int *)(uVar3 + 0x18) != *(int *)(param_1 + 0x25e))) {
        FUN_006ea2f0(*(void **)(param_1 + 0x211),*(uint *)(param_1 + 0x1ed));
      }
      bVar5 = *(byte *)(param_1 + 0x27d);
    }
    if (bVar5 == 8) {
      FUN_006ea2f0(*(void **)(param_1 + 0x211),*(uint *)(param_1 + 0x1ed));
      uVar4 = thunk_FUN_0041da30(param_1);
      return uVar4;
    }
  }
  else {
    if (*(int *)(param_1 + 0x270) == 0) {
      pvVar1 = (void *)(param_1 + 0x1d5);
      iVar8 = thunk_FUN_004abe40(pvVar1,'\0',(uint)*(byte *)(param_1 + 0x27c));
      if (iVar8 != 0) {
        return 0xffffffff;
      }
      iVar8 = thunk_FUN_004ac040('\0');
      if (iVar8 != 0) {
        return 0xffffffff;
      }
      bVar5 = *(byte *)(param_1 + 0x27c);
      iVar8 = thunk_FUN_004acd30(pvVar1,'\x01');
      if ((int)(uint)bVar5 < iVar8) {
        iVar8 = thunk_FUN_004abe40(pvVar1,'\x01',(uint)bVar5);
        if (iVar8 != 0) {
          return 0xffffffff;
        }
        iVar8 = thunk_FUN_004ac040('\x01');
        if (iVar8 != 0) {
          return 0xffffffff;
        }
      }
      iVar8 = thunk_FUN_004acd30(pvVar1,'\x01');
      if (iVar8 != *(byte *)(param_1 + 0x27c) - 1) goto LAB_0064428f;
    }
    else {
      bVar5 = *(byte *)(param_1 + 0x27c);
      if (bVar5 < 0xf) {
        iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x274),(int *)&local_8);
        if (iVar8 == -4) {
          *(undefined1 *)(param_1 + 0x27c) = 0xfa;
          return 0;
        }
        iVar8 = (**(code **)(*local_8 + 0xe0))
                          (*(undefined4 *)(param_1 + 0x278),&local_10,&local_14,&local_18,&local_24)
        ;
        if (iVar8 != 0) {
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
        bVar5 = *(byte *)(param_1 + 0x27c);
      }
      if (bVar5 == 0xf) {
        iVar8 = FUN_006e62d0(DAT_00802a38,*(int *)(param_1 + 0x274),(int *)&local_8);
        if (iVar8 == -4) {
          *(undefined1 *)(param_1 + 0x27c) = 0xfa;
          return 0;
        }
        (**(code **)(*local_8 + 0xe4))(*(undefined4 *)(param_1 + 0x278));
      }
      pvVar1 = (void *)(param_1 + 0x1d5);
      iVar8 = thunk_FUN_004abe40(pvVar1,'\0',(uint)*(byte *)(param_1 + 0x27c));
      if (iVar8 != 0) {
        return 0xffffffff;
      }
      iVar8 = thunk_FUN_004ac040('\0');
      if (iVar8 != 0) {
        return 0xffffffff;
      }
      bVar5 = *(byte *)(param_1 + 0x27c);
      iVar8 = thunk_FUN_004acd30(pvVar1,'\x01');
      if ((int)(uint)bVar5 < iVar8) {
        iVar8 = thunk_FUN_004abe40(pvVar1,'\x01',(uint)bVar5);
        if (iVar8 != 0) {
          return 0xffffffff;
        }
        iVar8 = thunk_FUN_004ac040('\x01');
        if (iVar8 != 0) {
          return 0xffffffff;
        }
      }
      iVar8 = thunk_FUN_004acd30(pvVar1,'\x01');
      if (iVar8 != *(byte *)(param_1 + 0x27c) - 1) goto LAB_0064428f;
    }
    thunk_FUN_004ac410(1);
  }
LAB_0064428f:
  uVar4 = thunk_FUN_0041da30(param_1);
  return uVar4;
}


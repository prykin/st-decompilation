
void __fastcall FUN_005efcd0(void *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  sVar1 = *(short *)((int)param_1 + 0x47);
  sVar2 = *(short *)((int)param_1 + 0x49);
  sVar3 = *(short *)((int)param_1 + 0x4b);
  *(undefined1 *)((int)param_1 + 0x24e) = 0;
  if ((((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar2 < 0)) ||
       ((DAT_007fb242 <= sVar2 || (sVar3 < 0)))) ||
      ((DAT_007fb244 <= sVar3 ||
       (*(int *)(DAT_007fb248 +
                ((int)DAT_007fb246 * (int)sVar3 + (int)DAT_007fb240 * (int)sVar2 + (int)sVar1) * 8)
        == 0)))) && (iVar4 = thunk_FUN_00495ec0(sVar1,sVar2,sVar3,0,(int)param_1), iVar4 == 0)) {
    *(char *)((int)param_1 + 0x252) = *(char *)((int)param_1 + 0x252) + '\x01';
    thunk_FUN_005f06e0((int)param_1);
    sVar1 = *(short *)((int)param_1 + 0x47);
    sVar2 = *(short *)((int)param_1 + 0x49);
    *(undefined2 *)((int)param_1 + 0x246) = *(undefined2 *)((int)param_1 + 0x4b);
    *(undefined2 *)((int)param_1 + 0x5f) = *(undefined2 *)((int)param_1 + 0x4b);
    *(undefined4 *)((int)param_1 + 0x27b) = *(undefined4 *)((int)param_1 + 0x2c2);
    *(short *)((int)param_1 + 0x242) = sVar1;
    *(short *)((int)param_1 + 0x244) = sVar2;
    *(int *)((int)param_1 + 0x277) = *(int *)((int)param_1 + 0x2be);
    *(undefined4 *)((int)param_1 + 0x27f) = *(undefined4 *)((int)param_1 + 0x2c6);
    *(short *)((int)param_1 + 0x5b) = sVar1;
    *(short *)((int)param_1 + 0x5d) = sVar2;
    if (*(int *)((int)param_1 + 0x2a7) != 0) {
      *(undefined4 *)((int)param_1 + 0x2a7) = 0;
      *(undefined2 *)((int)param_1 + 0x2ab) = 0;
      *(undefined1 *)((int)param_1 + 0x24f) = 0;
    }
    iVar4 = (int)(short)(sVar1 * 0xc9 + 100);
    if ((*(int *)((int)param_1 + 0x2be) == iVar4) &&
       (*(int *)((int)param_1 + 0x2c2) == (int)(short)(sVar2 * 0xc9 + 100))) {
      iVar4 = *(int *)(DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)param_1 + 0x23a) = 0;
      *(int *)((int)param_1 + 0x28f) = iVar4 + 10;
      return;
    }
    *(int *)((int)param_1 + 0x28f) = *(int *)(DAT_00802a38 + 0xe4) + 10;
    thunk_FUN_005ecd70(param_1,iVar4,(int)(short)(sVar2 * 0xc9 + 100),
                       *(undefined4 *)((int)param_1 + 0x2c6),*(int *)((int)param_1 + 0x2ba),'\x01',
                       0x1e);
    *(undefined4 *)((int)param_1 + 0x23a) = 2;
  }
  return;
}


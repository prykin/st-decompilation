
undefined4 __thiscall FUN_005fd3a0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *local_10;
  uint local_c;
  short local_8;
  short local_6;
  
  iVar3 = param_1;
  iVar2 = thunk_FUN_0041af40(param_1);
  if (iVar2 == 0xffff) {
    return 0xffff;
  }
  uVar1 = *(uint *)(iVar3 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      thunk_FUN_005fda60((int)this);
      return 0;
    }
    if (uVar1 == 0) {
      iVar3 = thunk_FUN_00600750(this);
      if (iVar3 != 0) {
LAB_005fd4eb:
        thunk_FUN_005fd6a0(this);
        return 0;
      }
    }
    else if (uVar1 == 2) {
      puVar4 = *(undefined4 **)(iVar3 + 0x14);
      if (puVar4[3] != 2) {
        puVar5 = (undefined4 *)((int)this + 0x206);
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)((int)this + 0x22a) = DAT_007e65e4;
        iVar3 = thunk_FUN_005fd830();
        if (iVar3 != 0) {
          *(undefined1 *)((int)this + 0x232) = 1;
        }
        iVar3 = thunk_FUN_005fd850((int)this);
        if ((-1 < iVar3) &&
           (iVar3 = thunk_FUN_005ff3a0(this,&local_6,(undefined2 *)((int)&param_1 + 2),&local_8),
           iVar3 != 0)) {
          thunk_FUN_005fea50((int)this);
          thunk_FUN_005feb60(this,(int)local_6,(int)param_1._2_2_,(int)local_8);
          thunk_FUN_00600110(this,(int)local_6,(int)param_1._2_2_,0x45f);
          return 0;
        }
        goto LAB_005fd4eb;
      }
      iVar3 = thunk_FUN_006010a0(this,puVar4);
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)((int)this + 0x1d5);
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined1 *)puVar4 = 0;
        if (*(char *)((int)this + 0x232) != '\0') {
          thunk_FUN_005fdb50(this,0,-1);
          return 0;
        }
      }
    }
  }
  else if ((uVar1 == 0x10f) &&
          (local_10 = (byte *)thunk_FUN_006012d0(this,(int *)&local_c), local_10 != (byte *)0x0)) {
    thunk_FUN_0054d430(DAT_00802a38,*(undefined4 *)((int)this + 0x18),local_10,local_c);
    FUN_006ab060(&local_10);
  }
  return 0;
}


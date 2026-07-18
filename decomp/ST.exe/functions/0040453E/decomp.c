
int __thiscall thunk_FUN_00605b60(void *this,uint param_1,uint param_2,int *param_3,int param_4)

{
  void *this_00;
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  char in_stack_00000020;
  int aiStack_ec [20];
  undefined4 auStack_9c [4];
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  undefined4 uStack_7c;
  undefined4 auStack_78 [5];
  undefined1 *puStack_64;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  byte bStack_37;
  int iStack_36;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  uStack_24 = thunk_FUN_004406c0(in_stack_00000020);
  uStack_24 = uStack_24 & 0xff;
  uStack_c = (uint)param_3 & 0xffff;
  uVar5 = (uint)param_3 >> 0x10;
  uStack_18 = param_2 & 0xffff;
  uVar1 = param_2 >> 0x10;
  uStack_20 = param_1 >> 0x10;
  iStack_2c = FUN_006acf0d(uStack_20,uVar1,uVar5,param_1 & 0xffff,uStack_18,uStack_c);
  thunk_FUN_00606fd0(param_4,&iStack_30,&uStack_7c,&uStack_1c,&uStack_14);
  if (param_4 == 0x15) {
    uStack_7c = 0;
    uStack_1c = 0;
  }
  uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar4;
  piVar8 = (int *)((uVar4 >> 0x10) % (iStack_30 - 1U) + 2);
  piStack_28 = piVar8;
  piVar2 = (int *)thunk_FUN_006041a0((int)piVar8);
  *(int **)((int)this + 0x269) = piVar2;
  if (piVar2 == piVar8) {
    if (0 < (int)piVar8) {
      piVar2 = aiStack_ec;
      param_3 = piVar8;
      do {
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        param_3 = (int *)((int)param_3 + -1);
        *piVar2 = (uVar4 >> 0x10) % 6 + 10;
        piVar2 = piVar2 + 1;
      } while (param_3 != (int *)0x0);
    }
    puVar9 = auStack_9c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    uStack_8c = 2;
    iStack_8 = 0;
    if (0 < (int)piVar8) {
      param_3 = aiStack_ec;
      iStack_10 = (int)this + 0x219;
      do {
        iVar6 = iStack_8;
        puVar9 = auStack_78;
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        *(undefined2 *)puVar9 = 0;
        iVar7 = iStack_2c;
        auStack_78[0] = 100;
        puStack_64 = (undefined1 *)*param_3;
        auStack_78[2] = 0;
        auStack_78[3] = 0;
        if (puStack_64 < &DAT_0000000b) {
          if ((byte)puStack_64 < 5) {
            bStack_37 = 1;
          }
          else {
            iVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(int *)((int)this + 0x1c) = iVar3;
            bStack_37 = (byte)((uint)iVar3 >> 0x10) & 1;
          }
        }
        else {
          bStack_37 = 0;
        }
        if (uStack_24 == 0) {
          uStack_5c = uStack_14;
        }
        else {
          uStack_5c = uStack_24;
        }
        if (param_4 == 9) {
          uStack_5c = 4;
        }
        else if (param_4 == 0x15) {
          uStack_5c = 2;
        }
        iStack_36 = iVar6;
        if (iStack_2c != 0) {
          iStack_4c = FUN_006c82a3(puStack_64,(int)((uVar5 - uStack_c) * 10000) / iStack_2c);
          iVar6 = FUN_006aff5b(iStack_4c);
          this_00 = (void *)((iVar6 * iVar7) / 10000);
          if (this_00 == (void *)0x0) {
            iStack_48 = 0;
          }
          else {
            iStack_48 = FUN_006c8290(this_00,(int)((uVar1 - uStack_18) * 10000) / (int)this_00);
          }
        }
        iVar6 = iStack_10;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        iStack_4c = iStack_4c + (-0x46 - (uVar4 >> 0x10) % 0x29);
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        iStack_48 = iStack_48 + (0x14 - (uVar4 >> 0x10) % 0x29);
        uStack_58 = uStack_20;
        switch(puStack_64) {
        case (undefined1 *)0x0:
        case (undefined1 *)0x1:
        case (undefined1 *)0x2:
          uStack_40 = 1000;
          uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar4;
          iStack_44 = (uVar4 >> 0x10) % 3 + 6;
          break;
        case (undefined1 *)0x3:
        case (undefined1 *)0x4:
        case (undefined1 *)0x5:
          uStack_40 = 0xfa;
          uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar4;
          iStack_44 = (uVar4 >> 0x10 & 3) + 6;
          break;
        case (undefined1 *)0x6:
        case (undefined1 *)0x7:
        case (undefined1 *)0x8:
        case (undefined1 *)0x9:
          uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar4;
          uStack_40 = 0x15e;
          iStack_44 = (uVar4 >> 0x10) % 5 + 6;
          break;
        case (undefined1 *)0xa:
        case (undefined1 *)0xb:
        case (undefined1 *)0xc:
        case (undefined1 *)0xd:
        case (undefined1 *)0xe:
        case (undefined1 *)0xf:
          uStack_40 = 0x1c2;
          uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar4;
          iStack_44 = (uVar4 >> 0x10 & 3) + 9;
        }
        puStack_88 = auStack_78;
        uStack_54 = uVar1;
        uStack_50 = uVar5;
        thunk_FUN_00627eb0((int)auStack_9c);
        param_3 = param_3 + 1;
        iStack_8 = iStack_8 + 1;
        iStack_10 = iVar6 + 4;
        piVar8 = piStack_28;
      } while (iStack_8 < (int)piStack_28);
    }
    return (int)piVar8;
  }
  return -1;
}


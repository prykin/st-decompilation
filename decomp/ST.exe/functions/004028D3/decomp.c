
int __thiscall
thunk_FUN_00608b50(void *this,uint param_1,uint *param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint auStack_cc [20];
  undefined4 auStack_7c [4];
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  undefined4 auStack_5c [5];
  uint uStack_48;
  int iStack_44;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  int iStack_1a;
  uint uStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_14 = (uint)param_2 & 0xffff;
  uStack_10 = param_1 & 0xffff;
  iStack_c = (param_3 & 0xffff) - 0x32;
  iVar5 = 0;
  iStack_8 = 0;
  FUN_006acf0d(uStack_10,uStack_14,iStack_c,uStack_10,uStack_14,param_3 & 0xffff);
  iVar2 = *(int *)((int)this + 0x1fd);
  if (iVar2 == 0) {
    iVar5 = 3;
    iStack_8 = 2;
  }
  else if (iVar2 == 1) {
    iVar5 = 1;
    iStack_8 = 0;
  }
  else if (iVar2 != 2) {
    iVar5 = 9;
    iStack_8 = 5;
  }
  if (iVar2 == 0) {
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    iVar5 = (uVar1 >> 0x10) % (iVar5 - 1U) + iVar5;
  }
  puVar6 = auStack_7c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uStack_6c = 2;
  iVar2 = STExplosionC::CreateGroupPart(this,iVar5);
  if (iVar2 == iVar5) {
    if (0 < iStack_8) {
      puVar3 = auStack_cc;
      iVar5 = iStack_8;
      do {
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        iVar5 = iVar5 + -1;
        *puVar3 = (uVar1 >> 0x10) % 3;
        puVar3 = puVar3 + 1;
      } while (iVar5 != 0);
    }
    if (iStack_8 < iVar2) {
      iVar5 = iVar2 - iStack_8;
      puVar3 = auStack_cc + iStack_8;
      do {
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        iVar5 = iVar5 + -1;
        *puVar3 = (uVar1 >> 0x10) % 3 + 3;
        puVar3 = puVar3 + 1;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (0 < iVar2) {
      param_2 = auStack_cc;
      param_3 = (int)this + 0x219;
      do {
        puVar6 = auStack_5c;
        for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(undefined2 *)puVar6 = 0;
        uStack_1c = param_9;
        auStack_5c[0] = 100;
        auStack_5c[1] = 0xff;
        auStack_5c[2] = 0;
        auStack_5c[3] = 0;
        if (0 < param_6) {
          iStack_44 = param_6;
        }
        uStack_48 = *param_2 | 0x400;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        uStack_20 = uVar1 >> 0x10 & 3;
        uStack_1b = 1;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        uStack_24 = 0x9c4;
        *(uint *)((int)this + 0x1c) = uVar1;
        iStack_30 = 0x78 - (uVar1 >> 0x10) % 0x3d;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        uStack_2c = (uVar1 >> 0x10) % 0x169;
        uStack_38 = uStack_14;
        iStack_34 = iStack_c;
        uStack_3c = uStack_10;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        iStack_28 = (uVar1 >> 0x10 & 3) + 9;
        puStack_68 = auStack_5c;
        iStack_1a = iVar5;
        STParticleC::GetMessage(*(STParticleC **)param_3,(int)auStack_7c);
        iVar5 = iVar5 + 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 4;
      } while (iVar5 < iVar2);
    }
    return iVar2;
  }
  return -1;
}


#include "../../pseudocode_runtime.h"


int __thiscall
FUN_00608b50(void *this,uint param_1,uint *param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar5;
  STMessage *pSVar6;
  uint local_cc [20];
  STMessage local_7c;
  undefined4 local_5c [5];
  uint local_48;
  int local_44;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  int local_1a;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_14 = (uint)param_2 & 0xffff;
  local_10 = param_1 & 0xffff;
  local_c = (param_3 & 0xffff) - 0x32;
  iVar5 = 0;
  local_8 = 0;
  FUN_006acf0d(local_10,local_14,local_c,local_10,local_14,param_3 & 0xffff);
  iVar2 = *(int *)((int)this + 0x1fd);
  if (iVar2 == 0) {
    iVar5 = 3;
    local_8 = 2;
  }
  else if (iVar2 == 1) {
    iVar5 = 1;
    local_8 = 0;
  }
  else if (iVar2 != 2) {
    iVar5 = 9;
    local_8 = 5;
  }
  if (iVar2 == 0) {
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    iVar5 = (uVar1 >> 0x10) % (iVar5 - 1U) + iVar5;
  }
  pSVar6 = &local_7c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar6->unknown_00 = 0;
    pSVar6 = (STMessage *)&pSVar6->unknown_04;
  }
  local_7c.id = MESS_ID_CREATE;
  iVar2 = STExplosionC::CreateGroupPart(this,iVar5);
  if (iVar2 == iVar5) {
    if (0 < local_8) {
      puVar3 = local_cc;
      iVar5 = local_8;
      do {
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        iVar5 = iVar5 + -1;
        *puVar3 = (uVar1 >> 0x10) % 3;
        puVar3 = puVar3 + 1;
      } while (iVar5 != 0);
    }
    if (local_8 < iVar2) {
      iVar5 = iVar2 - local_8;
      puVar3 = local_cc + local_8;
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
      param_2 = local_cc;
      param_3 = (int)this + 0x219;
      do {
        memset(local_5c, 0, 0x46); /* compiler bulk-zero initialization */
        local_1c = param_9;
        local_5c[0] = 100;
        local_5c[1] = 0xff;
        local_5c[2] = 0;
        local_5c[3] = 0;
        if (0 < param_6) {
          local_44 = param_6;
        }
        local_48 = *param_2 | 0x400;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        local_20 = uVar1 >> 0x10 & 3;
        local_1b = 1;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        local_24 = 0x9c4;
        *(uint *)((int)this + 0x1c) = uVar1;
        local_30 = 0x78 - (uVar1 >> 0x10) % 0x3d;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        local_2c = (uVar1 >> 0x10) % 0x169;
        local_38 = local_14;
        local_34 = local_c;
        local_3c = local_10;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        local_28 = (uVar1 >> 0x10 & 3) + 9;
        local_7c.arg0.ptr = local_5c;
        local_1a = iVar5;
        STParticleC::GetMessage(*(STParticleC **)param_3,&local_7c);
        iVar5 = iVar5 + 1;
        param_2 = param_2 + 1;
        param_3 = param_3 + 4;
      } while (iVar5 < iVar2);
    }
    return iVar2;
  }
  return -1;
}


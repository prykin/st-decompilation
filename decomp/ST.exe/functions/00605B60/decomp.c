#include "../../pseudocode_runtime.h"


int __thiscall FUN_00605b60(void *this,uint param_1,uint param_2,int *param_3,int param_4)

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
  STMessage *pSVar9;
  undefined4 *puVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char in_stack_00000020;
  int local_ec [20];
  STMessage local_9c;
  undefined4 local_7c;
  undefined4 local_78 [5];
  undefined1 *local_64;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  byte local_37;
  int local_36;
  int local_30;
  int local_2c;
  int *local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  int local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_24 = GetPlayerRaceId(in_stack_00000020);
  local_24 = local_24 & 0xff;
  local_c = (uint)param_3 & 0xffff;
  uVar5 = (uint)param_3 >> 0x10;
  local_18 = param_2 & 0xffff;
  uVar1 = param_2 >> 0x10;
  local_20 = param_1 >> 0x10;
  local_2c = FUN_006acf0d(local_20,uVar1,uVar5,param_1 & 0xffff,local_18,local_c);
  thunk_FUN_00606fd0(param_4,&local_30,&local_7c,&local_1c,&local_14);
  if (param_4 == 0x15) {
    local_7c = 0;
    local_1c = 0;
  }
  uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar4;
  piVar8 = (int *)((uVar4 >> 0x10) % (local_30 - 1U) + 2);
  local_28 = piVar8;
  piVar2 = (int *)STExplosionC::CreateGroupPart(this,(int)piVar8);
  *(int **)((int)this + 0x269) = piVar2;
  if (piVar2 == piVar8) {
    if (0 < (int)piVar8) {
      piVar2 = local_ec;
      param_3 = piVar8;
      do {
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        param_3 = (int *)((int)param_3 + -1);
        *piVar2 = (uVar4 >> 0x10) % 6 + 10;
        piVar2 = piVar2 + 1;
      } while (param_3 != (int *)0x0);
    }
    pSVar9 = &local_9c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pSVar9->unknown_00 = 0;
      pSVar9 = (STMessage *)&pSVar9->unknown_04;
    }
    local_9c.id = MESS_ID_CREATE;
    local_8 = 0;
    if (0 < (int)piVar8) {
      param_3 = local_ec;
      local_10 = (undefined4 *)((int)this + 0x219);
      do {
        iVar6 = local_8;
        memset(local_78, 0, 0x46); /* compiler bulk-zero initialization */
        iVar7 = local_2c;
        local_78[0] = 100;
        local_64 = (undefined1 *)*param_3;
        local_78[2] = 0;
        local_78[3] = 0;
        if (local_64 < &DAT_0000000b) {
          if ((byte)local_64 < 5) {
            local_37 = 1;
          }
          else {
            iVar3 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(int *)((int)this + 0x1c) = iVar3;
            local_37 = (byte)((uint)iVar3 >> 0x10) & 1;
          }
        }
        else {
          local_37 = 0;
        }
        if (local_24 == 0) {
          local_5c = local_14;
        }
        else {
          local_5c = local_24;
        }
        if (param_4 == 9) {
          local_5c = 4;
        }
        else if (param_4 == 0x15) {
          local_5c = 2;
        }
        local_36 = iVar6;
        if (local_2c != 0) {
          local_4c = FUN_006c82a3(local_64,(int)((uVar5 - local_c) * 10000) / local_2c);
          iVar6 = FUN_006aff5b(local_4c);
          this_00 = (void *)((iVar6 * iVar7) / 10000);
          if (this_00 == (void *)0x0) {
            local_48 = 0;
          }
          else {
            local_48 = FUN_006c8290(this_00,(int)((uVar1 - local_18) * 10000) / (int)this_00);
          }
        }
        puVar10 = local_10;
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        local_4c = local_4c + (-0x46 - (uVar4 >> 0x10) % 0x29);
        uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar4;
        local_48 = local_48 + (0x14 - (uVar4 >> 0x10) % 0x29);
        local_58 = local_20;
        switch(local_64) {
        case (undefined1 *)0x0:
        case (undefined1 *)0x1:
        case (undefined1 *)0x2:
          local_40 = 1000;
          uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar4;
          local_44 = (uVar4 >> 0x10) % 3 + 6;
          break;
        case (undefined1 *)0x3:
        case (undefined1 *)0x4:
        case (undefined1 *)0x5:
          local_40 = 0xfa;
          uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar4;
          local_44 = (uVar4 >> 0x10 & 3) + 6;
          break;
        case (undefined1 *)0x6:
        case (undefined1 *)0x7:
        case (undefined1 *)0x8:
        case (undefined1 *)0x9:
          uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar4;
          local_40 = 0x15e;
          local_44 = (uVar4 >> 0x10) % 5 + 6;
          break;
        case (undefined1 *)0xa:
        case (undefined1 *)0xb:
        case (undefined1 *)0xc:
        case (undefined1 *)0xd:
        case (undefined1 *)0xe:
        case (undefined1 *)0xf:
          local_40 = 0x1c2;
          uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar4;
          local_44 = (uVar4 >> 0x10 & 3) + 9;
        }
        local_9c.arg0.ptr = local_78;
        local_54 = uVar1;
        local_50 = uVar5;
        STParticleC::GetMessage((STParticleC *)*local_10,&local_9c);
        param_3 = param_3 + 1;
        local_8 = local_8 + 1;
        local_10 = puVar10 + 1;
        piVar8 = local_28;
      } while (local_8 < (int)local_28);
    }
    return (int)piVar8;
  }
  return -1;
}


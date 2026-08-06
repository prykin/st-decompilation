#include "../../pseudocode_runtime.h"


int __thiscall FUN_00607a60(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_EAX_23;
  int iVar2;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  STMessage *pSVar6;
  undefined4 *puVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char in_stack_00000020;
  int local_d0 [20];
  STMessage local_80;
  undefined4 local_60 [5];
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  byte local_1f;
  int local_1e;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_EAX_23 = LookupRecordByte(in_stack_00000020);
  local_14 = (int)(byte)local_EAX_23;
  uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar2;
  iVar4 = (uVar2 >> 0x10) % 0xb + 9;
  local_c = iVar4;
  iVar2 = STExplosionC::CreateGroupPart(this,iVar4);
  STField<int>(this,0x269) = iVar2;
  if (iVar2 != iVar4) {
    return -1;
  }
  iVar3 = 0;
  piVar5 = local_d0;
  do {
    if (iVar3 == iVar4) break;
    uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar2;
    iVar3 = iVar3 + 1;
    *piVar5 = (uVar2 >> 0x10) % 5 + 5;
    iVar4 = local_c;
    piVar5 = piVar5 + 1;
  } while (iVar3 < 5);
  local_8 = 0;
  piVar5 = local_d0 + iVar3;
  do {
    iVar1 = local_c;
    if (iVar3 == iVar4) break;
    uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar2;
    iVar3 = iVar3 + 1;
    *piVar5 = (uVar2 >> 0x10) % 7 + 9;
    local_8 = local_8 + 1;
    iVar4 = iVar1;
    piVar5 = piVar5 + 1;
  } while (local_8 < 0x14);
  if ((local_14 < 2) || (2 < local_14)) {
    local_14 = 1;
  }
  local_8 = 0;
  pSVar6 = &local_80;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pSVar6->unknown_00 = 0;
    pSVar6 = (STMessage *)&pSVar6->unknown_04;
  }
  local_80.id = MESS_ID_CREATE;
  if (0 < iVar4) {
    local_10 = local_d0;
    local_18 = (undefined4 *)((int)this + 0x219);
    do {
      iVar4 = local_8;
      memset(local_60, 0, 0x46); /* compiler bulk-zero initialization */
      puVar7 = local_18;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[0] = 100;
      local_1e = iVar4;
      local_4c = *local_10;
      if ((byte)local_4c < 0xb) {
        if ((byte)local_4c < 5) {
          local_1f = 1;
        }
        else {
          iVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<int>(this,0x1c) = iVar4;
          local_1f = (byte)((uint)iVar4 >> 0x10) & 1;
        }
      }
      else {
        local_1f = 0;
      }
      iVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      local_44 = local_14;
      STField<int>(this,0x1c) = iVar4;
      uVar2 = iVar4 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_38 = (param_3 - (uVar2 >> 0x10) % 0xb5) + 0x5a;
      uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_40 = (param_1 - (uVar2 >> 0x10) % 0x29) + 0x14;
      uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_3c = (param_2 - (uVar2 >> 0x10) % 0x29) + 0x14;
      uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_30 = (uVar2 >> 0x10) % 0x169;
      uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_34 = 0xf - (uVar2 >> 0x10) % 0x1f;
      switch(local_4c) {
      case 0:
      case 1:
      case 2:
        uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar2;
        local_28 = 0x7d;
        local_2c = (uVar2 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        local_28 = 0x87;
        uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar2;
        local_2c = (uVar2 >> 0x10 & 3) + 2;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar2;
        local_28 = 0x91;
        local_2c = (uVar2 >> 0x10) % 5 + 3;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        local_28 = 0x96;
        uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar2;
        local_2c = (uVar2 >> 0x10 & 3) + 5;
      }
      local_80.arg0.ptr = local_60;
      STParticleC::GetMessage((STParticleC *)*local_18,&local_80);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_18 = puVar7 + 1;
      iVar4 = local_c;
    } while (local_8 < local_c);
  }
  return iVar4;
}


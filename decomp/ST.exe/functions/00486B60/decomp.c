#include "../../pseudocode_runtime.h"


void __thiscall FUN_00486b60(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar5;
  int iVar4;
  int local_EAX_316;
  undefined4 uVar6;
  int iVar7;
  int *local_c;
  short local_8;
  short local_6;

  puVar1 = param_1;
  *param_1 = 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar5 = (**(code **)(*(int *)this + 8))();
  if (iVar5 == 1) {
    puVar1[1] = 1;
  }
  else {
    puVar1[1] = 0;
  }
  puVar1[2] = 1;
  iVar5 = thunk_FUN_00493cd0(this);
  if (iVar5 == 0) {
    puVar1[0x1d] = 1;
  }
  else {
    puVar1[0x1d] = 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x7c))();
  puVar1[0x1b] = uVar2;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0xc4))();
  puVar1[0x1c] = uVar2;
  *(undefined4 *)(puVar1 + 3) = STField<undefined4>(this,0x6f7);
  iVar4 = thunk_FUN_004e8030(STField<int>(this,0x6f7));
  puVar1[7] = (char)iVar4;
  *(undefined4 *)(puVar1 + 8) = STField<undefined4>(this,0x18);
  *(undefined4 *)(puVar1 + 0xc) = STField<undefined4>(this,0x6fb);
  *(undefined4 *)(puVar1 + 0x10) = STField<undefined4>(this,0x6ff);
  *(undefined4 *)(puVar1 + 0x14) = STField<undefined4>(this,0x703);
  *(undefined2 *)(puVar1 + 0x18) = STField<undefined2>(this,0x707);
  puVar1[0x1a] = STField<undefined1>(this,0x709);
  switch(STField<undefined4>(this,0x6f7)) {
  case 7:
  case 0x13:
  case 0x1b:
    if (STField<AnonShape_005EFAE0_B406B78B *>(this,0x7ca) != nullptr)
    {
      local_c = nullptr;
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x7ca),
                 (int *)&local_c);
      if (local_c != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar6 = (**(code **)(*local_c + 0x2c))();
        *(undefined4 *)(puVar1 + 0x1e) = uVar6;
        iVar5 = local_c[8];
        if (iVar5 == 0x14) {
          local_EAX_316 = thunk_FUN_004e8030(STField<int>(this,0x6f7));
          puVar1[0x22] = (char)local_EAX_316;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar2 = (**(code **)(*local_c + 0x7c))();
          puVar1[0x23] = uVar2;
        }
        else if ((iVar5 == 0x172) || (iVar5 == 0x1a4)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar2 = (**(code **)(*local_c + 0xc))();
          puVar1[0x22] = uVar2;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar2 = (**(code **)(*local_c + 0x7c))();
          puVar1[0x23] = uVar2;
        }
        else {
          puVar1[0x22] = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          uVar2 = (**(code **)(*local_c + 0x7c))();
          puVar1[0x23] = uVar2;
        }
        break;
      }
    }
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    break;
  case 8:
  case 9:
  case 0xc:
  case 0x14:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
    *(undefined2 *)(puVar1 + 0x20) = 0;
    *(undefined2 *)(puVar1 + 0x1e) = 0;
    break;
  default:
    *(undefined2 *)(puVar1 + 0x1e) = STField<undefined2>(this,0x79a);
    bVar3 = LookupRecordByte(STField<char>(this,0x24));
    if (bVar3 == 1) {
      iVar5 = STField<int>(this,0x24);
      iVar7 = 6;
LAB_00486cfc:
      uVar6 = thunk_FUN_004e60d0(iVar5,iVar7);
      *(short *)(puVar1 + 0x22) = (short)uVar6;
    }
    else {
      if (bVar3 == 2) {
        iVar5 = STField<int>(this,0x24);
        iVar7 = 0x83;
        goto LAB_00486cfc;
      }
      *(undefined2 *)(puVar1 + 0x22) = 0;
    }
    *(undefined2 *)(puVar1 + 0x26) = STField<undefined2>(this,0x7a2);
    *(undefined2 *)(puVar1 + 0x20) = STField<undefined2>(this,0x7b6);
    *(undefined2 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)(puVar1 + 0x28) = STField<undefined2>(this,0x7be);
  }
  *(undefined4 *)(puVar1 + 0x2a) = 0;
  puVar1[0x2e] = 0;
  STFishC::sub_004162B0(this,&local_8,&local_6,(short *)((int)&param_1 + 2));
  puVar1[0x2e - STPiece<2,2>(param_1)] = 1;
  return;
}



undefined4 __thiscall
FUN_006e8660(void *this,int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
            uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int local_8;
  
  *param_1 = -1;
  puVar5 = *(uint **)((int)this + 0x2e8);
  puVar4 = (uint *)0x0;
  if (puVar5 == (uint *)0x0) {
    local_8 = *(int *)((int)this + 0x314);
  }
  else {
    *(uint *)((int)this + 0x2e8) = puVar5[2];
    if (puVar5 == *(uint **)((int)this + 0x2ec)) {
      *(undefined4 *)((int)this + 0x2ec) = 0;
      *(undefined4 *)((int)this + 0x2e8) = 0;
    }
    local_8 = ((int)puVar5 - *(int *)((int)this + 0x31c)) / 0x114;
    puVar4 = puVar5;
  }
  if (local_8 < *(int *)((int)this + 0x314)) {
    puVar5 = puVar4;
    for (iVar1 = 0x45; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    if (*(int *)((int)this + 0x318) <= *(int *)((int)this + 0x314)) {
      iVar1 = Library::DKW::LIB::FUN_006acf50
                        (*(undefined4 **)((int)this + 0x31c),
                         (*(int *)((int)this + 0x318) + 10) * 0x114);
      if (iVar1 == 0) {
        return 0xfffffffe;
      }
      *(int *)((int)this + 0x31c) = iVar1;
      puVar2 = (undefined4 *)(iVar1 + *(int *)((int)this + 0x314) * 0x114);
      for (iVar3 = 0x2b2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(int *)((int)this + 0x318) = *(int *)((int)this + 0x318) + 10;
    }
    local_8 = *(int *)((int)this + 0x314);
    *(int *)((int)this + 0x314) = local_8 + 1;
    puVar4 = (uint *)(*(int *)((int)this + 0x31c) + local_8 * 0x114);
  }
  if (*(int *)((int)this + 0x310) <= local_8) {
    *(int *)((int)this + 0x310) = local_8 + 1;
  }
  puVar4[0x21] = param_6;
  puVar4[0x22] = param_7;
  *puVar4 = (uint)&DAT_00818000;
  puVar4[2] = 1;
  puVar4[0xd] = param_4;
  puVar4[0xe] = param_5;
  puVar4[0x25] = param_2;
  puVar4[0x28] = param_3;
  puVar4[6] = param_8;
  puVar4[0x23] = 0xffffffff;
  if (0 < (int)param_2) {
    puVar2 = Library::DKW::LIB::FUN_006aac10(param_2 << 2);
    puVar4[0x29] = (uint)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0xfffffffe;
    }
  }
  if ((0 < (int)param_4) && (0 < (int)param_5)) {
    *puVar4 = *puVar4 | 0x1000;
    *param_1 = local_8;
    return 0;
  }
  FUN_006e8840((int)puVar4);
  *param_1 = local_8;
  return 0;
}


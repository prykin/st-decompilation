
void __thiscall FUN_00720e70(void *this,int param_1,int param_2)

{
  short sVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  uint *puVar9;
  int local_10;
  int local_c;
  int local_8;
  
  iVar5 = *(int *)((int)this + 0x138);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 8) != 0)) {
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
    *(undefined4 *)((int)this + 0x208) = 0xffffffff;
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)((int)this + 0x144);
    while( true ) {
      iVar5 = *(int *)((int)this + 0x138);
      if (*(int *)(iVar5 + 8) <= *(int *)(iVar5 + 4)) break;
      iVar4 = *(int *)(iVar5 + 4) + 1;
      puVar7 = *(uint **)(*(int *)(iVar5 + 0x14) + -4 + iVar4 * 4);
      *(int *)(iVar5 + 4) = iVar4;
      if ((puVar7 == (uint *)0x0) || (*(int *)((int)this + 0x30) <= local_c))
      goto cf_break_loop_00720F4E;
      iVar5 = -1;
      puVar9 = puVar7;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        uVar6 = *puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
      } while ((char)uVar6 != '\0');
      puVar9 = (uint *)PTR_DAT_007f0afc;
      if ((iVar5 != -2) && (puVar9 = puVar7, (*(byte *)((int)this + 0x20) & 0x20) != 0)) {
        puVar9 = (uint *)PTR_DAT_007f0b00;
      }
      iVar4 = FUN_007111c0(*(void **)((int)this + 0x214),puVar9);
      iVar5 = local_c;
      iVar4 = iVar4 + *(int *)(*(int *)((int)this + 0x214) + 0x5c);
      if ((local_c <= param_2) && (param_2 < iVar4 + local_c)) {
        *(int *)((int)this + 0x208) = local_c;
        *(int *)((int)this + 0x20c) = local_8;
        goto cf_break_loop_00720F4E;
      }
      local_c = local_c + iVar4;
      local_8 = local_8 + 1;
      local_10 = iVar5;
    }
    puVar7 = (uint *)0x0;
cf_break_loop_00720F4E:
    if (*(int *)((int)this + 0x208) < 0) {
      *(int *)((int)this + 0x208) = local_10;
      param_1 = *(int *)((int)this + 0x2c) + -1;
      *(int *)((int)this + 0x20c) = local_8 + -1;
      iVar5 = *(int *)((int)this + 0x144) + local_8 + -1;
      if (iVar5 < *(int *)(*(int *)((int)this + 0x138) + 8)) {
        puVar7 = *(uint **)(*(int *)(*(int *)((int)this + 0x138) + 0x14) + iVar5 * 4);
      }
      else {
        puVar7 = (uint *)0x0;
      }
    }
    uVar6 = 0xffffffff;
    *(undefined4 *)((int)this + 0x204) = 0xffffffff;
    puVar9 = puVar7;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      uVar3 = *puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
    } while ((char)uVar3 != '\0');
    param_2 = 0;
    local_8 = *(int *)((int)this + 0x148);
    iVar5 = ~uVar6 - 1;
    if (local_8 < iVar5) {
      pbVar8 = (byte *)((int)puVar7 + local_8);
      do {
        if ((*(byte *)((int)this + 0x20) & 0x20) == 0) {
          pvVar2 = *(void **)((int)this + 0x214);
          uVar6 = FUN_00710fb0(pvVar2,pbVar8);
          sVar1 = *(short *)(*(int *)((int)pvVar2 + 0x9a) + 0x6a + (uVar6 & 0xffff) * 10);
        }
        else {
          pvVar2 = *(void **)((int)this + 0x214);
          uVar6 = FUN_00710fb0(pvVar2,PTR_DAT_007f0b00);
          sVar1 = *(short *)(*(int *)((int)pvVar2 + 0x9a) + 0x6a + (uVar6 & 0xffff) * 10);
        }
        iVar4 = *(int *)(*(int *)((int)this + 0x214) + 0x58) + (int)sVar1;
        if ((param_2 <= param_1) && (param_1 < iVar4 + param_2)) {
          *(int *)((int)this + 0x204) = param_2;
          *(int *)((int)this + 0x210) = local_8;
          break;
        }
        param_2 = param_2 + iVar4;
        local_8 = local_8 + 1;
        pbVar8 = pbVar8 + 1;
      } while (local_8 < iVar5);
    }
    if (*(int *)((int)this + 0x204) < 0) {
      *(int *)((int)this + 0x210) = iVar5;
      *(int *)((int)this + 0x204) = param_2;
    }
  }
  return;
}



void __thiscall FUN_00721080(void *this,int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  void *this_00;
  byte *pbVar10;
  int local_10;
  int local_c;

  iVar8 = *(int *)((int)this + 0x138);
  if (iVar8 == 0) {
    return;
  }
  iVar4 = *(int *)(iVar8 + 8);
  if (iVar4 == 0) {
    return;
  }
  uVar5 = *(int *)((int)this + 0x144) + param_2;
  if ((int)uVar5 < 0) {
    return;
  }
  if (iVar4 <= (int)uVar5) {
    uVar5 = iVar4 - 1;
  }
  if (param_1 == 0xfff) {
    if ((int)uVar5 < iVar4) {
      pcVar6 = *(char **)(*(int *)(iVar8 + 0x14) + uVar5 * 4);
    }
    else {
      pcVar6 = (char *)0x0;
    }
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    param_2 = ~uVar3 - 1;
  }
  else {
    if (param_1 == 0xffe) {
      param_2 = 0;
      goto LAB_0072111d;
    }
    param_2 = *(int *)((int)this + 0x148) + param_1;
  }
  if ((int)param_2 < 0) {
    return;
  }
LAB_0072111d:
  if ((int)uVar5 < iVar4) {
    pcVar6 = *(char **)(*(int *)(*(int *)((int)this + 0x138) + 0x14) + uVar5 * 4);
  }
  else {
    pcVar6 = (char *)0x0;
  }
  uVar3 = 0xffffffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (~uVar3 - 1 < param_2) {
    if ((int)uVar5 < iVar4) {
      pcVar6 = *(char **)(*(int *)(*(int *)((int)this + 0x138) + 0x14) + uVar5 * 4);
    }
    else {
      pcVar6 = (char *)0x0;
    }
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    param_2 = ~uVar3 - 1;
  }
  if (param_2 < *(uint *)((int)this + 0x148)) {
    *(uint *)((int)this + 0x148) = param_2;
  }
  if (uVar5 < *(uint *)((int)this + 0x144)) {
    *(uint *)((int)this + 0x144) = uVar5;
  }
  do {
    iVar8 = *(int *)((int)this + 0x144);
    bVar2 = false;
    local_c = 0;
    if ((int)uVar5 < iVar8) {
LAB_0072122f:
      iVar4 = 0;
    }
    else {
      do {
        if (iVar8 < *(int *)(*(int *)((int)this + 0x138) + 8)) {
          pcVar6 = *(char **)(*(int *)(*(int *)((int)this + 0x138) + 0x14) + iVar8 * 4);
        }
        else {
          pcVar6 = (char *)0x0;
        }
        iVar4 = -1;
        pcVar7 = pcVar6;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar7 = PTR_DAT_007f0afc;
        if ((iVar4 == -2) ||
           (pcVar7 = pcVar6, pcVar6 = PTR_DAT_007f0b00, (*(byte *)((int)this + 0x20) & 0x20) == 0))
        {
          pcVar6 = pcVar7;
        }
        iVar4 = FUN_007111c0(*(void **)((int)this + 0x214),pcVar6);
        if (*(int *)((int)this + 0x30) < iVar4 + local_c) {
          bVar2 = true;
          *(int *)((int)this + 0x144) = *(int *)((int)this + 0x144) + 1;
          break;
        }
        local_c = local_c + *(int *)(*(int *)((int)this + 0x214) + 0x5c) + iVar4;
        iVar8 = iVar8 + 1;
      } while (iVar8 <= (int)uVar5);
      if (local_c < 1) goto LAB_0072122f;
      iVar4 = (local_c - *(int *)(*(int *)((int)this + 0x214) + 0x5c)) - iVar4;
    }
    *(int *)((int)this + 0x208) = iVar4;
  } while (bVar2);
  do {
    bVar2 = false;
    if ((*(int *)(*(int *)((int)this + 0x138) + 8) <= (int)uVar5) ||
       (iVar8 = *(int *)(*(int *)(*(int *)((int)this + 0x138) + 0x14) + uVar5 * 4), iVar8 == 0)) {
      *(undefined4 *)((int)this + 0x204) = 0;
      break;
    }
    local_10 = *(int *)((int)this + 0x148);
    local_c = 0;
    if (local_10 < (int)param_2) {
      pbVar9 = (byte *)(iVar8 + local_10);
      do {
        if ((*(byte *)((int)this + 0x20) & 0x20) == 0) {
          this_00 = *(void **)((int)this + 0x214);
          pbVar10 = pbVar9;
        }
        else {
          this_00 = *(void **)((int)this + 0x214);
          pbVar10 = PTR_DAT_007f0b00;
        }
        uVar3 = FUN_00710fb0(this_00,pbVar10);
        iVar8 = *(int *)(*(int *)((int)this + 0x214) + 0x58) +
                (int)*(short *)(*(int *)((int)this_00 + 0x9a) + 0x6a + (uVar3 & 0xffff) * 10) +
                local_c;
        if (*(int *)((int)this + 0x2c) < iVar8) {
          bVar2 = true;
          *(int *)((int)this + 0x148) = *(int *)((int)this + 0x148) + 1;
          break;
        }
        local_10 = local_10 + 1;
        pbVar9 = pbVar9 + 1;
        local_c = iVar8;
      } while (local_10 < (int)param_2);
    }
    *(int *)((int)this + 0x204) = local_c;
  } while (bVar2);
  *(uint *)((int)this + 0x210) = param_2 - *(int *)((int)this + 0x148);
  *(uint *)((int)this + 0x20c) = uVar5 - *(int *)((int)this + 0x144);
  return;
}


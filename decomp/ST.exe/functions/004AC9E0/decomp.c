
undefined4 __thiscall FUN_004ac9e0(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_28;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00790798;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0x18) == -1) {
    return 0xffffffff;
  }
  local_20 = 1;
  local_28 = 0;
  ExceptionList = &local_14;
LAB_004aca23:
  do {
    if (*(int *)((int)this + 0x14) <= (int)local_28) {
      ExceptionList = local_14;
      return 0;
    }
    if ((*(uint *)((int)this + 0x1c) & local_20) != 0) {
      iVar5 = local_28 * 0x24;
      iVar3 = *(int *)((int)this + 0x20) + iVar5;
      if ((*(byte *)(iVar3 + 0xe) & 1) == 0) {
        uVar6 = param_1 - *(int *)(iVar3 + 0x1c);
        *(int *)(iVar3 + 0x1c) = param_1;
        bVar2 = false;
        iVar3 = *(int *)((int)this + 0x20) + iVar5;
        piVar4 = (int *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 0x18) * 4);
        iVar7 = *piVar4;
        iVar1 = *(int *)(iVar3 + 0x20);
        if (uVar6 < (uint)(iVar7 + iVar1)) {
          if (iVar7 < (int)uVar6) {
            *(uint *)(iVar3 + 0x20) = (iVar1 - uVar6) + iVar7;
            iVar5 = iVar5 + *(int *)((int)this + 0x20);
            *(undefined4 *)(*(int *)(iVar5 + 4) + *(int *)(iVar5 + 0x18) * 4) = 0;
            local_28 = local_28 + 1;
            local_20 = local_20 << 1;
          }
          else {
            *piVar4 = iVar7 - uVar6;
            local_28 = local_28 + 1;
            local_20 = local_20 << 1;
          }
          goto LAB_004aca23;
        }
        if (iVar1 != 0) {
          *(undefined4 *)(iVar3 + 0x20) = 0;
          FUN_006e9cb0(*(void **)((int)this + 0x3c),*(uint **)((int)this + 0x18),local_28);
        }
        piVar4 = (int *)(*(int *)((int)this + 0x20) + iVar5);
        *(undefined4 *)(piVar4[1] + piVar4[6] * 4) = *(undefined4 *)(piVar4[6] * 4 + 0x31 + *piVar4)
        ;
        iVar3 = *(int *)((int)this + 0x20) + iVar5;
        if (*(int *)(iVar3 + 0x18) == *(int *)(iVar3 + 0x14)) {
          if (*(char *)(iVar3 + 0xd) == '\x02') {
            thunk_FUN_004ac410((byte)local_28);
            local_28 = local_28 + 1;
            local_20 = local_20 << 1;
            goto LAB_004aca23;
          }
          if (*(char *)(iVar3 + 0xd) == '\x01') goto LAB_004acbdc;
        }
        iVar7 = uVar6 - iVar7;
        if ((iVar7 == 0) || ((*(byte *)(iVar3 + 0xe) & 4) == 0)) {
          iVar3 = thunk_FUN_004ac950(this,local_28);
          *(int *)(*(int *)((int)this + 0x20) + 0x18 + iVar5) = iVar3;
          if (local_28 == (int)*(char *)((int)this + 0x13)) {
            *(undefined4 *)((int)this + 0x30) =
                 *(undefined4 *)(*(int *)((int)this + 0x20) + 0x18 + iVar5);
          }
        }
        else {
          do {
            if (iVar7 < 0) goto LAB_004acb87;
            iVar3 = thunk_FUN_004ac950(this,local_28);
            *(int *)(*(int *)((int)this + 0x20) + 0x18 + iVar5) = iVar3;
            piVar4 = (int *)(*(int *)((int)this + 0x20) + iVar5);
            iVar7 = iVar7 - *(int *)(*piVar4 + 0x31 + piVar4[6] * 4);
          } while ((piVar4[6] != piVar4[5]) ||
                  ((*(char *)((int)piVar4 + 0xd) != '\x02' &&
                   (*(char *)((int)piVar4 + 0xd) != '\x01'))));
          bVar2 = true;
LAB_004acb87:
          if (!bVar2) {
            iVar3 = *(int *)((int)this + 0x20) + iVar5;
            *(int *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 0x18) * 4) = -iVar7;
          }
        }
        FUN_006ea270(*(void **)((int)this + 0x3c),*(uint *)((int)this + 0x18),local_28,
                     *(uint *)(*(int *)((int)this + 0x20) + 0x18 + iVar5));
      }
    }
LAB_004acbdc:
    local_28 = local_28 + 1;
    local_20 = local_20 << 1;
  } while( true );
}



void __thiscall FUN_0067bfd0(void *this,AnonShape_0067BFD0_C4B8A7A1 *param_1,int param_2)

{
  void *this_00;
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  AnonShape_0068FD00_A5257008 **ppAVar4;
  uint uVar5;
  bool bVar6;
  AnonShape_0068FD00_A5257008 *local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_37;
  undefined4 local_33;
  undefined2 local_2f;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  void *local_c;
  uint local_8;
  
  local_8 = 0;
  if (0 < (int)param_1->field_000C) {
    bVar6 = param_1->field_000C != 0;
    local_c = this;
    do {
      uVar5 = local_8;
      if ((((bVar6) &&
           (puVar3 = (ushort *)(param_1->field_0008 * local_8 + param_1->field_001C),
           puVar3 != (ushort *)0x0)) && (*puVar3 != 0)) &&
         ((puVar1 = (ushort *)
                    thunk_FUN_0067bc80((AnonShape_0067BC80_D4009586 *)param_2,*(uint *)(puVar3 + 4))
          , puVar1 != (ushort *)0x0 ||
          (puVar1 = (ushort *)thunk_FUN_0067bc10((AnonShape_0067BC10_0DEA2337 *)param_2),
          puVar1 != (ushort *)0x0)))) {
        *(uint *)(puVar3 + 6) = (uint)*puVar1;
        ppAVar4 = &local_40;
        for (iVar2 = 0xd; this_00 = local_c, iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppAVar4 = (AnonShape_0068FD00_A5257008 *)0x0;
          ppAVar4 = ppAVar4 + 1;
        }
        local_40 = (AnonShape_0068FD00_A5257008 *)0x67;
        local_38 = 0;
        local_3c = *(undefined4 *)((int)local_c + 0x6fe);
        local_37 = thunk_FUN_0067bf30((int)local_c);
        local_33 = *(undefined4 *)(puVar3 + 6);
        iVar2 = thunk_FUN_0067bef0((int)this_00);
        local_2f = (undefined2)iVar2;
        local_2d = *(undefined4 *)(puVar1 + 2);
        local_29 = *(undefined4 *)(puVar1 + 4);
        local_25 = *(undefined4 *)(puVar1 + 6);
        thunk_FUN_0067a020(this_00,(AnonShape_0068FD00_A5257008 *)&local_40,(uint)*puVar3);
        uVar5 = local_8;
      }
      local_8 = uVar5 + 1;
      bVar6 = local_8 < (uint)param_1->field_000C;
    } while ((int)local_8 < (int)param_1->field_000C);
  }
  return;
}


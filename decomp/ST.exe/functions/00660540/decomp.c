
undefined4 __thiscall
FUN_00660540(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined2 param_5,char param_6,char *param_7)

{
  char *pcVar1;
  STGroupBoatC *this_00;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1e;
  int local_1a;
  char local_16 [15];
  undefined2 local_7;
  undefined2 uVar2;

  puVar4 = &local_24;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_24._2_2_ = param_3;
  local_1a = (int)param_6;
  local_1e = param_1;
  local_20 = param_4;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_24._0_2_ = param_2;
  *(undefined4 *)((int)this + 0xa7) = 0;
  local_7 = param_5;
  uVar2 = 0;
  if (param_7 != (char *)0x0) {
    pcVar1 = Library::MSVCRT::_strncpy(local_16,param_7,0xe);
    uVar2 = (undefined2)((uint)pcVar1 >> 0x10);
  }
  if ((*(short *)((int)this + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this_00 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                 CONCAT22(uVar2,*(short *)((int)this + 0x7d)));
    if (this_00 != (STGroupBoatC *)0x0) {
      (*this_00->vtable->vfunc_08)(this_00,CASE_9,&local_24);
      return 0;
    }
  }
  return 0xffffffff;
}


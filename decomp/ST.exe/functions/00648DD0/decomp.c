
void __cdecl FUN_00648dd0(uint param_1)

{
  AiPlrClassTy *pAVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_24 [4];
  undefined4 local_14;

  if ((((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) && (PTR_00802a38 != (STPlaySystemC *)0x0))
      && (param_1 < 8)) && ((byte)(&DAT_008087e9)[param_1 * 0x51] < 8)) {
    pAVar1 = thunk_FUN_004357f0((char)param_1);
    if (pAVar1 != (AiPlrClassTy *)0x0) {
      puVar3 = local_24;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_14 = 0x5d97;
      (*pAVar1->vtable->vfunc_00)(local_24);
      thunk_FUN_0054cf70(PTR_00802a38,pAVar1->field_0008);
    }
  }
  return;
}


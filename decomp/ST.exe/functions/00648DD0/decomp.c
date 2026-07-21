
void __cdecl FUN_00648dd0(uint param_1)

{
  AiPlrClassTy *this;
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if ((((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) && (PTR_00802a38 != (STPlaySystemC *)0x0))
      && (param_1 < 8)) && ((byte)(&DAT_008087e9)[param_1 * 0x51] < 8)) {
    this = thunk_FUN_004357f0((char)param_1);
    if (this != (AiPlrClassTy *)0x0) {
      pSVar2 = &local_24;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        pSVar2->unknown_00 = 0;
        pSVar2 = (STMessage *)&pSVar2->unknown_04;
      }
      local_24.id = MESS_AIPLRCLASSTY_5D97;
      (*this->vtable->GetMessage)(this,&local_24);
      thunk_FUN_0054cf70(PTR_00802a38,this->field_0008);
    }
  }
  return;
}


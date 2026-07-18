
void thunk_FUN_00446a70(void)

{
  STAllPlayersC *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  do {
    STAllPlayersC::DeletePGPairs(in_ECX,(char)iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}


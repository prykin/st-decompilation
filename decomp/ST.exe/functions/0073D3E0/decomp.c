
void FUN_0073d3e0(void)

{
  size_t sVar1;
  int iVar2;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_0085a5ec == 0) {
    FUN_00736ac0();
  }
  local_c = 0;
  for (local_8 = DAT_008571d8; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  local_10 = (int *)thunk_FUN_006a3c10(local_c * 4 + 4,2,"stdenvp.c",0x6d);
  DAT_00857170 = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_008571d8; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    sVar1 = _strlen((char *)local_8);
    if ((char)*local_8 != '=') {
      iVar2 = thunk_FUN_006a3c10(sVar1 + 1,2,"stdenvp.c",0x79);
      *local_10 = iVar2;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_0073a240((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  thunk_FUN_006a49c0(DAT_008571d8,2);
  DAT_008571d8 = (uint *)0x0;
  *local_10 = 0;
  DAT_0085a5dc = 1;
  return;
}


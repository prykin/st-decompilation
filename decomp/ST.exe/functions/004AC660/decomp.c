
int __thiscall FUN_004ac660(void *this,char param_1)

{
  char *pcVar1;
  char cVar2;
  
  if (((*(int *)((int)this + 0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= *(int *)((int)this + 0x14) + -1)) {
    pcVar1 = (char *)(*(int *)((int)this + 0x20) + 0xd + param_1 * 0x24);
    cVar2 = *pcVar1;
    *pcVar1 = '\0';
    return (int)cVar2;
  }
  return -1;
}


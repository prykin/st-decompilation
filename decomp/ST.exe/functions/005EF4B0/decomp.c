
bool __thiscall FUN_005ef4b0(void *this,int param_1)

{
  int iVar1;
  char local_8;
  
  if ((1 < *(byte *)((int)this + 0x252)) &&
     (iVar1 = thunk_FUN_00495ff0(*(short *)((int)this + 0x254),*(short *)((int)this + 0x256),
                                 *(short *)((int)this + 600),0,(int)this), iVar1 == 0)) {
    *(char *)((int)this + 0x252) = *(char *)((int)this + 0x252) + -1;
  }
  iVar1 = (int)(short)(*(short *)((int)this + 0x242) * 0xc9 + 100);
  if ((iVar1 != *(int *)((int)this + 0x277)) ||
     (local_8 = '\0',
     (int)(short)(*(short *)((int)this + 0x244) * 0xc9 + 100) != *(int *)((int)this + 0x27b))) {
    local_8 = '\x01';
  }
  iVar1 = thunk_FUN_005ecd70(this,iVar1,(int)(short)(*(short *)((int)this + 0x244) * 0xc9 + 100),
                             (int)(short)(*(short *)((int)this + 0x246) * 200 + 100),param_1,local_8
                             ,0x1e);
  return iVar1 != 0;
}



void __thiscall
thunk_FUN_00636060(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)((int)this + 4);
  uVar2 = thunk_FUN_00635bf0(param_1,param_2,param_3);
  *(char *)((int)this + 4) = (char)uVar2;
  switch(*(undefined4 *)((int)this + 0x11)) {
  case 0:
  case 1:
  case 2:
  case 4:
    *(int *)((int)this + 0x95) = param_1;
    *(int *)((int)this + 0x99) = param_2;
    *(int *)((int)this + 0x9d) = *(int *)((int)this + 0xad) + param_3;
    break;
  case 3:
    *(int *)((int)this + 0x91) = param_2;
    *(int *)((int)this + 0x8d) = param_1;
    *(int *)((int)this + 0x95) = param_3;
  }
  if ((char)uVar2 == '\0') {
    if (cVar1 != '\0') {
      thunk_FUN_00635f50(this);
    }
    return;
  }
  thunk_FUN_00633770(this,param_4,param_5);
  thunk_FUN_00635a40(this,1);
  return;
}


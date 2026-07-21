
int __thiscall FUN_00629e60(void *this,int param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = -1;
  if (param_1 != 0) {
    *(undefined1 *)((int)this + 0x40) = 1;
    uVar1 = thunk_FUN_0062b4a0((int)this);
    *(char *)((int)this + 0xd6) = (char)uVar1;
  }
  if (*(char *)((int)this + 0xd6) != '\0') {
    switch(*(undefined4 *)((int)this + 0xc2)) {
    case 1:
    case 2:
      iVar2 = STParticleC::InitVisibelFlight(this,1);
      break;
    case 3:
    case 4:
      if (*(int *)((int)this + 0xeb) != 0) {
        thunk_FUN_00629f20((int)this);
      }
      iVar2 = STParticleC::InitVisibelDeton(this,1);
      break;
    default:
      goto switchD_00629e96_default;
    }
    if (-1 < iVar2) {
      *(undefined1 *)((int)this + 0xd6) = 1;
    }
  }
switchD_00629e96_default:
  return iVar2;
}


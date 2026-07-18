
uint __thiscall FUN_0045f400(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  switch(param_1) {
  case 1:
    return (uint)(*(int *)((int)this + 0x2cc) == 1);
  case 2:
    return (uint)(*(int *)((int)this + 0x2d0) == 1);
  case 3:
    return (uint)(*(int *)((int)this + 0x2d4) == 1);
  case 4:
    return (uint)(*(int *)((int)this + 0x2d8) == 1);
  case 5:
    return (uint)(*(int *)((int)this + 0x2dc) == 1);
  case 6:
    return (uint)(*(int *)((int)this + 0x2e0) == 1);
  case 7:
    return (uint)(*(int *)((int)this + 0x2e4) == 1);
  case 8:
    return (uint)(*(int *)((int)this + 0x2e8) == 1);
  case 9:
    return (uint)(*(int *)((int)this + 0x2ec) == 1);
  case 10:
    return (uint)(*(int *)((int)this + 0x2f0) == 1);
  case 0xb:
    return (uint)(*(int *)((int)this + 0x2f4) == 1);
  case 0xc:
    return (uint)(*(int *)((int)this + 0x2f8) == 1);
  case 0xd:
    return (uint)(*(int *)((int)this + 0x2fc) == 1);
  case 0xe:
    return (uint)(*(int *)((int)this + 0x300) == 1);
  case 0xf:
    return (uint)(*(int *)((int)this + 0x304) == 1);
  case 0x10:
    return (uint)(*(int *)((int)this + 0x308) == 1);
  case 0x11:
    return (uint)(*(int *)((int)this + 0x30c) == 1);
  case 0x12:
    return (uint)(*(int *)((int)this + 0x310) == 1);
  case 0x14:
    return (uint)(*(int *)((int)this + 0x314) == 1);
  case 0x15:
    return (uint)(*(int *)((int)this + 0x318) == 1);
  case 0x16:
    return (uint)(*(int *)((int)this + 0x31c) == 1);
  case 0x17:
    return (uint)(*(int *)((int)this + 800) == 1);
  }
  iVar2 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x13e4,0,0,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}


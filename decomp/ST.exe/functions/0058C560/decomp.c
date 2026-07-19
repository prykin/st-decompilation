
void __thiscall FUN_0058c560(void *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar2 = *(int *)((int)this + 0x231);
  *(int *)((int)this + 0x249) = param_1;
  *(int *)((int)this + 0x24d) = param_2;
  if (iVar2 == 1) {
    *(undefined4 *)((int)this + 0x231) = 2;
    *(int *)((int)this + 0x239) = *(short *)(DAT_00806724 + 0x23) + -1;
    *(undefined4 *)((int)this + 0x235) = 1;
    *(undefined4 *)((int)this + 0x23d) = 0x4b6;
    iVar2 = FUN_006aced8(*(int *)((int)this + 0x251) << 7,*(int *)((int)this + 0x255) << 7,
                         param_1 << 7,param_2 << 7);
    if (iVar2 != 0) {
      *(undefined4 *)((int)this + 0x271) = 0x3e2;
      iVar3 = ((*(int *)((int)this + 0x251) - *(int *)((int)this + 0x249)) * 0x8000) / iVar2;
      *(undefined4 *)((int)this + 0x265) = 0;
      *(undefined4 *)((int)this + 0x261) = 0;
      *(int *)((int)this + 0x259) = iVar3;
      iVar2 = ((*(int *)((int)this + 0x255) - *(int *)((int)this + 0x24d)) * 0x8000) / iVar2;
      sVar4 = (short)((uint)(iVar3 * 0x4b6) >> 8) + 100 + *(short *)((int)this + 0x249) * 0xc9;
      *(short *)((int)this + 0x41) = sVar4;
      *(int *)((int)this + 0x25d) = iVar2;
      *(int *)((int)this + 0x269) = (int)sVar4;
      sVar4 = (short)((uint)(iVar2 * 0x4b6) >> 8) + 100 + *(short *)((int)this + 0x24d) * 0xc9;
      *(short *)((int)this + 0x43) = sVar4;
      *(int *)((int)this + 0x26d) = (int)sVar4;
    }
  }
  else {
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x231) = 3;
      return;
    }
    if (iVar2 == 2) {
      iVar2 = ReportDebugMessage(s_E____titans_Igor_to_sat_cpp_007cbab8,0x11b,0,0,&DAT_007a4ccc,
                                 s_For_Artem___already_has_athe_tar_007cbadc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}


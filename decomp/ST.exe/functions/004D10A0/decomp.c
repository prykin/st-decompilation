
undefined4 __thiscall FUN_004d10a0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((((0x18 - *(int *)((int)this + 0x29c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 6
          ) * 9;
  iVar2 = iVar1;
  if (param_1 != 0) {
    iVar2 = (*(int *)(*(int *)((int)this + 0x1f5) + 0x18 + *(int *)((int)this + 0x2f0) * 0x24) -
            *(int *)(*(int *)((int)this + 0x1f5) + *(int *)((int)this + 0x2f0) * 0x24 + 0x10)) +
            iVar1;
  }
  thunk_FUN_004abce0((void *)((int)this + 0x1d5),*(byte *)((int)this + 0x2f0),iVar1,iVar1 + 8,'\0');
  STT3DSprC::SetCurFase((STT3DSprC *)((int)this + 0x1d5),*(char *)((int)this + 0x2f0),iVar2);
  thunk_FUN_004abce0((STT3DSprC *)((int)this + 0x1d5),*(char *)((int)this + 0x2f0) - 1,iVar1,
                     iVar1 + 8,'\0');
  STT3DSprC::SetCurFase((STT3DSprC *)((int)this + 0x1d5),*(char *)((int)this + 0x2f0) + -1,iVar2);
  return 0;
}



undefined4 thunk_FUN_006029c0(void)

{
  void *this;
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 **ppuStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  ppuStack_50 = DAT_00858df8;
  DAT_00858df8 = &ppuStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(int *)(iStack_c + 0x241) == 1) {
      pbVar3 = (&PTR_s_Dest4_0_007cec00)[*(int *)(iStack_c + 0x372)];
    }
    else {
      pbVar3 = (&PTR_s_Dest1_0_007cebec)[*(int *)(iStack_c + 0x372)];
    }
    this = (void *)(iStack_c + 0x1d5);
    iVar2 = thunk_FUN_004ab880(0xe,DAT_00806774,pbVar3,0x1d);
    if (iVar2 == 0) {
      thunk_FUN_004ac610(this,'\x0e');
      thunk_FUN_004abe40(this,'\x0e',*(undefined4 *)(iStack_c + 0x387));
      thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004acef0(this,DAT_008073cc);
      *(undefined1 *)(iStack_c + 0x37a) = 1;
      if (-1 < *(int *)(iStack_c + 0x249)) {
        iVar2 = thunk_FUN_004ab880(0xc,DAT_00806774,
                                   (&PTR_s_dest0s0_007cec3c)
                                   [*(int *)(iStack_c + 0x249) + *(int *)(iStack_c + 0x372) * 8],
                                   0x1d);
        if (iVar2 != 0) {
          return uStack_8;
        }
        thunk_FUN_004abe40(this,'\f',*(undefined4 *)(iStack_c + 0x38f));
        thunk_FUN_004ac610(this,'\f');
        thunk_FUN_004ac040('\f');
        thunk_FUN_004ac1a0(0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
        FUN_006e9ef0(*(void **)(iStack_c + 0x211),*(uint *)(iStack_c + 0x1ed),0xc,1,0,0,30000);
      }
      *(undefined4 *)(iStack_c + 0x36e) = 2;
      sVar1 = *(short *)(DAT_00806724 + 0x23);
      *(undefined1 *)(iStack_c + 0x39f) = 0xff;
      *(int *)(iStack_c + 0x397) = sVar1 + -1;
      uVar4 = thunk_FUN_004ad650((int)this);
      *(undefined4 *)(iStack_c + 0x39b) = uVar4;
      DAT_00858df8 = (undefined4 ***)ppuStack_50;
      return 1;
    }
  }
  else {
    DAT_00858df8 = (undefined4 ***)ppuStack_50;
  }
  return uStack_8;
}



void thunk_FUN_00551ba0(void)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  puStack_54 = DAT_00858df8;
  DAT_00858df8 = &puStack_54;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    FUN_006b55f0(*(undefined4 **)(iStack_10 + 0x68),0,0x1f,0x31,*(int *)(iStack_10 + 0x185),0,0x1f,
                 0x31,0x44,0x39);
    bVar9 = 0x3a;
    iVar7 = 0;
    iVar3 = FUN_0070b3a0(*(int *)(iStack_10 + 0x1d1),(uint)*(byte *)(iStack_10 + 0x1d0));
    FUN_006b5440(*(int *)(iStack_10 + 0x68),0,0x22,0x38,iVar3,iVar7,bVar9);
    FUN_006b55f0(*(undefined4 **)(iStack_10 + 0x68),0,0xa6,0x31,*(int *)(iStack_10 + 0x185),0,0xa6,
                 0x31,0x77,0x26);
    if (*(char *)(iStack_10 + 0x1bb) == '\0') {
      bVar9 = 0x3a;
      iVar7 = 0;
      iVar3 = FUN_0070b3a0(*(int *)(iStack_10 + 0x1d5),
                           (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 4);
      FUN_006b5440(*(int *)(iStack_10 + 0x68),0,0xd9,0x34,iVar3,iVar7,bVar9);
      if (DAT_0080874e != '\x03') {
        iVar7 = 0;
        iVar3 = 0xb5;
        iStack_8 = 0xa9;
        iStack_c = 2;
        do {
          uVar1 = *(ushort *)
                   (iStack_10 + 0x1ab + (iVar7 + (uint)*(byte *)(iStack_10 + 0x1d0) * 2) * 4);
          if (uVar1 != 0) {
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)(iStack_10 + 0x1d9),uVar1 - 1);
            thunk_FUN_00540760(*(undefined4 **)(iStack_10 + 0x68),iStack_8,0x39,'\x01',pbVar5);
          }
          wsprintfA((LPSTR)(iStack_10 + 0x18d),&DAT_007c8720,
                    (uint)*(ushort *)
                           (iStack_10 + 0x1ad + (iVar7 + (uint)*(byte *)(iStack_10 + 0x1d0) * 2) * 4
                           ));
          FUN_00710a90(*(int *)(iStack_10 + 0x68),0,iVar3,0x36,0x22,0xc);
          FUN_007119c0((uint *)(iStack_10 + 0x18d),-1,-1,1);
          iVar7 = iVar7 + 1;
          iStack_8 = iStack_8 + 0x68;
          iVar3 = iVar3 + 0x39;
          iStack_c = iStack_c + -1;
        } while (iStack_c != 0);
      }
    }
    else {
      FUN_00710a90(*(int *)(iStack_10 + 0x68),0,0xa6,0x31,0x77,0x26);
      iVar10 = -1;
      iVar8 = -1;
      iVar3 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
      iVar6 = -1;
      iVar7 = -2;
      puVar4 = (uint *)FUN_006b0140(0x4e5b,DAT_00807618);
      FUN_00711b70(puVar4,iVar7,iVar6,iVar3,iVar8,iVar10);
    }
    thunk_FUN_00551ec0();
    DAT_00858df8 = puStack_54;
    return;
  }
  DAT_00858df8 = puStack_54;
  iVar7 = FUN_006ad4d0(s_E____titans_Andrey_tradecen_cpp_007c8624,0xf5,0,iVar3,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c8624,0xf5);
  return;
}


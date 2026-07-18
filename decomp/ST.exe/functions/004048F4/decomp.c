
void thunk_FUN_00551ec0(void)

{
  uint *puVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  ushort *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  puStack_54 = DAT_00858df8;
  DAT_00858df8 = &puStack_54;
  iVar4 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    puVar1 = (uint *)(iStack_10 + 0x18d);
    wsprintfA((LPSTR)puVar1,&DAT_007c28fc,
              (uint)*(ushort *)(iStack_10 + 0x1bc + (uint)*(byte *)(iStack_10 + 0x1d0) * 2));
    FUN_00710a90(*(int *)(iStack_10 + 0x68),0,0x67,0x36,0x23,0xc);
    FUN_007119c0(puVar1,-1,-1,-(uint)(*(char *)(iStack_10 + 0x1d0) != '\0') & 2);
    if (*(char *)(iStack_10 + 0x1bb) == '\0') {
      iStack_8 = 0;
      iVar4 = 0xb4;
      iStack_c = 2;
      do {
        puVar11 = (undefined4 *)0x0;
        iVar10 = 0;
        iVar9 = 1;
        bVar8 = 0;
        uVar7 = 0xffffffff;
        pbVar5 = (byte *)thunk_FUN_00571240(s_BKG_AMOUNTRC_007c874c,0);
        puVar6 = FUN_00709af0(DAT_00806794,1,pbVar5,uVar7,bVar8,iVar9,iVar10,puVar11);
        thunk_FUN_00540760(*(undefined4 **)(iStack_10 + 0x68),iVar4 + -3,0x45,'\x01',(byte *)puVar6)
        ;
        bVar8 = *(byte *)(iStack_10 + 0x1d0);
        uVar2 = *(ushort *)(iStack_10 + 0x1ad + (iStack_8 + (uint)bVar8 * 2) * 4);
        if (uVar2 == 0) {
          iVar9 = 0;
        }
        else if ((DAT_0080874e == '\x03') && (bVar8 == 0)) {
          iVar9 = (uint)*(ushort *)(iStack_10 + 0x1bc) * (uint)uVar2;
        }
        else {
          iVar9 = (int)((ulonglong)*(ushort *)(iStack_10 + 0x1bc + (uint)bVar8 * 2) /
                       (ulonglong)(longlong)(int)(uint)uVar2);
        }
        wsprintfA((LPSTR)puVar1,&DAT_007c28fc,iVar9);
        FUN_00710a90(*(int *)(iStack_10 + 0x68),0,iVar4,0x48,0x23,0xc);
        FUN_007119c0(puVar1,-1,-1,(-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
        iStack_8 = iStack_8 + 1;
        iVar4 = iVar4 + 0x39;
        iStack_c = iStack_c + -1;
      } while (iStack_c != 0);
    }
    DAT_00858df8 = puStack_54;
    return;
  }
  DAT_00858df8 = puStack_54;
  iVar9 = FUN_006ad4d0(s_E____titans_Andrey_tradecen_cpp_007c8624,0x111,0,iVar4,&DAT_007a4ccc);
  if (iVar9 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7c8624,0x111);
  return;
}


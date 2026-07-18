
int __cdecl thunk_FUN_00676260(uint param_1,int param_2)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  uint *puStack_c;
  int iStack_8;
  
  uVar8 = 0;
  puStack_c = (uint *)0x0;
  iStack_8 = 0;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_007fa174 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = thunk_FUN_0042b760(param_1,0);
    }
    if (iVar3 != 0) {
      puStack_c = thunk_FUN_004233e0(iVar3);
    }
    puVar2 = puStack_c;
    if (puStack_c[3] != 0) {
      uVar7 = 0;
      if (puStack_c[3] == 0) {
        puVar4 = (ushort *)0x0;
        goto LAB_006762e0;
      }
      do {
        puVar4 = (ushort *)(puVar2[2] * uVar7 + puVar2[7]);
LAB_006762e0:
        piVar5 = (int *)thunk_FUN_0042b620(param_1,(uint)*puVar4,1);
        if (piVar5 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar5 + 0x2c))();
          if (iVar3 == 0x78) {
            iVar3 = *(int *)((int)piVar5 + 0x259);
          }
          else {
            iVar3 = 0;
          }
          if (param_2 == iVar3) {
            iStack_8 = iStack_8 + 1;
          }
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar8 & 0xffff;
      } while (uVar7 < puVar2[3]);
    }
    if (puVar2 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar2);
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    return iStack_8;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  if (puStack_c != (uint *)0x0) {
    FUN_006ae110((byte *)puStack_c);
  }
  iVar6 = FUN_006ad4d0(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x13a,0,iVar3,&DAT_007a4ccc);
  if (iVar6 == 0) {
    FUN_006a5e40(iVar3,0,0x7d2d58,0x13b);
    return iVar3;
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}


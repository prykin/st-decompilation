
void __fastcall thunk_FUN_00660d40(int param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  int iStack_54;
  undefined2 uStack_50;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  char cStack_40;
  char acStack_3f [47];
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  if (((*(int *)(param_1 + 0x284) != 0) && (*(int *)(param_1 + 0x20b) != 0)) && (DAT_007fa174 != 0))
  {
    iStack_8 = param_1;
    iStack_10 = thunk_FUN_004357f0(*(char *)(param_1 + 0x24));
    iVar6 = *(int *)(param_1 + 0x20b);
    uStack_c = 0;
    if (0 < *(int *)(iVar6 + 0xc)) {
      bVar8 = *(int *)(iVar6 + 0xc) != 0;
      do {
        if (bVar8) {
          iVar6 = *(int *)(iVar6 + 8) * uStack_c + *(int *)(iVar6 + 0x1c);
        }
        else {
          iVar6 = 0;
        }
        sVar2 = *(short *)(param_1 + 0x7b);
        iVar5 = 0;
        uVar4 = uStack_c;
        if ((-(uint)(sVar2 != 1) & 2) != 0xffffffff) {
          do {
            uVar1 = *(uint *)(iVar6 + iVar5 * 4);
            if ((((uVar1 != 0) && (*(int *)(iVar6 + 0x28) == 0)) && (*(int *)(iVar6 + 0x24) == 0))
               && (((uVar1 != 0 && (uVar1 < 0x29)) || (sVar2 == 1)))) {
              puVar7 = &uStack_5c;
              for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              *(undefined2 *)puVar7 = 0;
              iVar3 = iStack_8;
              uStack_5c = *(undefined4 *)(iVar6 + iVar5 * 4);
              iStack_54 = 0;
              if (iVar5 == 0) {
                uStack_56 = *(undefined2 *)(iVar6 + 0xc);
              }
              else {
                uStack_56 = 0;
              }
              uStack_58 = (undefined2)uVar4;
              if (iStack_10 != 0) {
                iStack_54 = *(int *)(iStack_10 + 0x65c);
                *(int *)(iStack_10 + 0x65c) = iStack_54 + 1;
              }
              uStack_50 = *(undefined2 *)(iStack_8 + 0x7d);
              uStack_46 = *(undefined2 *)(iVar6 + 0xe);
              uStack_44 = *(undefined2 *)(iVar6 + 0x10);
              uStack_42 = *(undefined2 *)(iVar6 + 0x12);
              cStack_40 = *(char *)(iVar6 + 0x14);
              if (((cStack_40 < '\0') || ('\a' < cStack_40)) &&
                 ((cStack_40 = *(char *)(iStack_8 + 0x81), cStack_40 < '\0' || ('\a' < cStack_40))))
              {
                cStack_40 = *(char *)(iStack_8 + 0x24);
              }
              _strncpy(acStack_3f,(char *)(iVar6 + 0x15),0xe);
              if (iVar5 == 0) {
                sVar2 = *(short *)(iVar3 + 0x7f);
              }
              else {
                sVar2 = 0;
              }
              thunk_FUN_0068eb30(&uStack_5c,sVar2);
              uVar4 = uStack_c;
              param_1 = iStack_8;
            }
            sVar2 = *(short *)(param_1 + 0x7b);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)((-(uint)(sVar2 != 1) & 2) + 1));
        }
        iVar6 = *(int *)(param_1 + 0x20b);
        uStack_c = uVar4 + 1;
        bVar8 = uStack_c < *(uint *)(iVar6 + 0xc);
      } while ((int)uStack_c < (int)*(uint *)(iVar6 + 0xc));
    }
  }
  return;
}



void __thiscall thunk_FUN_005a2a60(void *this,byte *param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  byte *pbVar7;
  void *unaff_EDI;
  byte *pbVar8;
  bool bVar9;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  uint uStack_10;
  int iStack_c;
  void *pvStack_8;
  
  if (((*(char *)((int)this + 0x1a5f) == '\x06') && (*(char *)((int)this + 0x1a60) == '\0')) &&
     (*(int *)((int)this + 0x1ea6) != 0)) {
    uStack_54 = DAT_00858df8;
    DAT_00858df8 = &uStack_54;
    pvStack_8 = this;
    iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar6 = 0;
      iStack_c = *(int *)((int)pvStack_8 + 0x1ea6);
      uStack_10 = *(uint *)(iStack_c + 0xc);
      if (uStack_10 != 0) {
        if (uStack_10 == 0) {
          pbVar8 = (byte *)0x0;
          goto LAB_005a2aea;
        }
        do {
          pbVar8 = (byte *)(*(int *)(iStack_c + 8) * uVar6 + *(int *)(iStack_c + 0x1c));
LAB_005a2aea:
          pbVar4 = pbVar8;
          pbVar7 = param_1;
          if (pbVar8 != (byte *)0x0) {
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_005a2b17:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_005a2b1c;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_005a2b17;
              pbVar4 = pbVar4 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_005a2b1c:
            if (iVar3 == 0) {
              *(undefined4 *)(pbVar8 + 0x25) = *(undefined4 *)(param_1 + 0x25);
              break;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uStack_10);
      }
      *(undefined4 *)((int)pvStack_8 + 0x2d) = 5;
      FUN_006e6080(pvStack_8,2,*(undefined4 *)((int)pvStack_8 + 0x1b20),
                   (undefined4 *)((int)pvStack_8 + 0x1d));
      DAT_00858df8 = (undefined4 *)uStack_54;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa50,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cbf70,0xa50);
  }
  return;
}


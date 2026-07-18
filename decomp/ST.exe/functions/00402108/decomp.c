
void __thiscall
thunk_FUN_005a1920(void *this,char *param_1,undefined4 param_2,int param_3,uint param_4,
                  undefined4 *param_5)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  undefined4 unaff_ESI;
  char *pcVar13;
  void *unaff_EDI;
  undefined4 *puVar14;
  undefined4 uStack_8e0;
  undefined1 auStack_860 [41];
  undefined1 auStack_837 [855];
  undefined4 uStack_4e0;
  undefined1 auStack_460 [41];
  undefined1 auStack_437 [855];
  undefined4 *puStack_e0;
  undefined4 auStack_dc [16];
  undefined4 *puStack_9c;
  undefined4 auStack_98 [16];
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  int *piStack_8;
  
  if (((param_5 != (undefined4 *)0x0) && (*(int *)((int)this + 0x1a97) != 0)) &&
     (*(char *)((int)this + 0x65) == '\x01')) {
    uStack_58 = DAT_00858df8;
    DAT_00858df8 = (undefined4 **)&uStack_58;
    pvStack_c = this;
    iVar4 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
    pvVar12 = pvStack_c;
    if (iVar4 == 0) {
      if ((param_3 == 1) || (param_3 == 8)) {
        if (*(undefined4 **)((int)pvStack_c + 0x1a9f) != (undefined4 *)0x0) {
          FUN_006c6fc0(*(undefined4 **)((int)pvStack_c + 0x1a9f));
        }
        *(undefined4 *)((int)pvVar12 + 0x1a9f) = 0;
        if (*(int *)((int)pvVar12 + 0x1a9b) != 0) {
          FUN_006ab060((undefined4 *)((int)pvVar12 + 0x1a9b));
        }
      }
      if (param_3 == 1) {
        piStack_8 = (int *)0x0;
        puStack_9c = DAT_00858df8;
        DAT_00858df8 = &puStack_9c;
        iVar4 = __setjmp3(auStack_98,0,unaff_EDI,unaff_ESI);
        if (iVar4 == 0) {
          piVar7 = FUN_006c7c50(param_5,param_4);
          pvVar12 = pvStack_c;
          piStack_8 = piVar7;
          if (piVar7 != (int *)0x0) {
            puVar5 = &uStack_8e0;
            for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            FUN_006c7bb0((int)piVar7,(undefined1 *)&uStack_8e0,&iStack_14);
            iVar4 = 0x80;
            iStack_10 = 0x40;
            do {
              puVar1 = (undefined1 *)((int)&uStack_8e0 + iVar4 + 1);
              *(undefined1 *)(iVar4 + 0x2a + *(int *)((int)pvVar12 + 0x1a97)) =
                   *(undefined1 *)((int)&uStack_8e0 + iVar4);
              *(undefined1 *)(iVar4 + 0x29 + *(int *)((int)pvVar12 + 0x1a97)) = *puVar1;
              iVar9 = iVar4 + 2;
              iVar4 = iVar4 + 4;
              puVar1[*(int *)((int)pvVar12 + 0x1a97) + (0xa8 - (int)(auStack_860 + 1))] =
                   *(undefined1 *)((int)&uStack_8e0 + iVar9);
              iStack_10 = iStack_10 + -1;
            } while (iStack_10 != 0);
            FUN_006b0a20(DAT_0080759c,(int)auStack_860,0x20,0x40,0);
            piVar7 = piStack_8;
            FUN_006c7b90(piStack_8,0x4e,9);
            FUN_006c79a0(piVar7,*(undefined4 **)((int)pvVar12 + 0x1a97),0);
            FUN_006c7980(piVar7);
          }
          DAT_00858df8 = (undefined4 **)puStack_9c;
        }
        else {
          DAT_00858df8 = (undefined4 **)puStack_9c;
          pvVar12 = pvStack_c;
          if (piStack_8 != (int *)0x0) {
            FUN_006c7980(piStack_8);
            pvVar12 = pvStack_c;
          }
        }
      }
      else if (param_3 == 8) {
        *(undefined4 *)((int)pvVar12 + 0x1aa3) = 0;
        puStack_e0 = DAT_00858df8;
        DAT_00858df8 = &puStack_e0;
        iVar4 = __setjmp3(auStack_dc,0,unaff_EDI,unaff_ESI);
        pvVar12 = pvStack_c;
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)FUN_006aac70(param_4);
          pvVar12 = pvStack_c;
          *(undefined4 **)((int)pvStack_c + 0x1a9b) = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            for (uVar10 = param_4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar5 = *param_5;
              param_5 = param_5 + 1;
              puVar5 = puVar5 + 1;
            }
            for (uVar10 = param_4 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)param_5;
              param_5 = (undefined4 *)((int)param_5 + 1);
              puVar5 = (undefined4 *)((int)puVar5 + 1);
            }
            puVar5 = FUN_006c7dc0(*(undefined4 *)((int)pvStack_c + 0x1a9b));
            *(undefined4 **)((int)pvVar12 + 0x1a9f) = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              puVar14 = &uStack_4e0;
              for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar14 = 0;
                puVar14 = puVar14 + 1;
              }
              FUN_006c7d20((int)puVar5,(int)&uStack_4e0,&iStack_10);
              iVar4 = 0x80;
              piStack_8 = (int *)0x40;
              do {
                puVar1 = (undefined1 *)((int)&uStack_4e0 + iVar4 + 1);
                *(undefined1 *)(iVar4 + 0x2a + *(int *)((int)pvVar12 + 0x1a97)) =
                     *(undefined1 *)((int)&uStack_4e0 + iVar4);
                *(undefined1 *)(iVar4 + 0x29 + *(int *)((int)pvVar12 + 0x1a97)) = *puVar1;
                iVar9 = iVar4 + 2;
                iVar4 = iVar4 + 4;
                puVar1[*(int *)((int)pvVar12 + 0x1a97) + (0xa8 - (int)(auStack_460 + 1))] =
                     *(undefined1 *)((int)&uStack_4e0 + iVar9);
                piStack_8 = (int *)((int)piStack_8 + -1);
              } while (piStack_8 != (int *)0x0);
              FUN_006b0a20(DAT_0080759c,(int)auStack_460,0x20,0x40,0);
              FUN_006c7d00(*(undefined4 **)((int)pvVar12 + 0x1a9f),0x4e,9);
              FUN_006c7070(*(int **)((int)pvVar12 + 0x1a9f),*(undefined4 **)((int)pvVar12 + 0x1a97),
                           0);
              iVar4 = FUN_006c7000(*(int *)((int)pvVar12 + 0x1a9f));
              *(int *)((int)pvVar12 + 0x1aa3) = iVar4;
              if (iVar4 < 1) {
                FUN_006c6fc0(*(undefined4 **)((int)pvVar12 + 0x1a9f));
                *(undefined4 *)((int)pvVar12 + 0x1a9f) = 0;
                FUN_006ab060((undefined4 *)((int)pvVar12 + 0x1a9b));
                *(undefined4 *)((int)pvVar12 + 0x1aa3) = 0;
                DAT_00858df8 = (undefined4 **)puStack_e0;
              }
              else {
                DVar6 = timeGetTime();
                *(DWORD *)((int)pvVar12 + 0x1aa7) = DVar6;
                DAT_00858df8 = (undefined4 **)puStack_e0;
              }
              goto LAB_005a1cfd;
            }
            FUN_006ab060((undefined4 *)((int)pvVar12 + 0x1a9b));
          }
          DAT_00858df8 = (undefined4 **)puStack_e0;
        }
        else {
          DAT_00858df8 = (undefined4 **)puStack_e0;
          if (*(undefined4 **)((int)pvStack_c + 0x1a9f) != (undefined4 *)0x0) {
            FUN_006c6fc0(*(undefined4 **)((int)pvStack_c + 0x1a9f));
          }
          *(undefined4 *)((int)pvVar12 + 0x1a9f) = 0;
          if (*(int *)((int)pvVar12 + 0x1a9b) != 0) {
            FUN_006ab060((undefined4 *)((int)pvVar12 + 0x1a9b));
          }
          *(undefined4 *)((int)pvVar12 + 0x1aa3) = 0;
        }
      }
LAB_005a1cfd:
      FUN_006b35d0(DAT_008075a8,*(uint *)((int)pvVar12 + 0x1a8f));
      if ((param_3 == 1) || (param_3 == 8)) {
        if (*(int *)((int)pvVar12 + 0x1aab) != 0) {
          FUN_006ab060((undefined4 *)((int)pvVar12 + 0x1aab));
        }
        uVar10 = 0xffffffff;
        pcVar8 = param_1;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        pcVar8 = (char *)FUN_006aac70(~uVar10);
        *(undefined4 *)((int)pvVar12 + 0x1aab) = pcVar8;
        if (pcVar8 != (char *)0x0) {
          uVar10 = 0xffffffff;
          do {
            pcVar13 = param_1;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar13 = param_1 + 1;
            cVar2 = *param_1;
            param_1 = pcVar13;
          } while (cVar2 != '\0');
          uVar10 = ~uVar10;
          pcVar13 = pcVar13 + -uVar10;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar8 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar8 = pcVar8 + 1;
          }
        }
        *(undefined4 *)((int)pvVar12 + 0x1aaf) = param_2;
      }
      DAT_00858df8 = (undefined4 **)uStack_58;
      return;
    }
    DAT_00858df8 = (undefined4 **)uStack_58;
    iVar9 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x9b5,0,iVar4,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cbf70,0x9b5);
  }
  return;
}


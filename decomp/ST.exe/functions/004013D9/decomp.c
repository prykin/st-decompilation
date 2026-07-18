
void thunk_FUN_00590b40(undefined4 param_1)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  DWORD DVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uStack_26c;
  undefined4 uStack_245;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_1a9;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_182;
  undefined4 uStack_175;
  undefined4 uStack_171;
  undefined4 uStack_16d;
  undefined4 uStack_169;
  undefined4 auStack_70 [7];
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  void *pvStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar18 = FUN_006ad4d0(s_E____titans_Start_camp_obj_cpp_007cbcd4,0x7d,0,iVar3,&DAT_007a4ccc);
    if (iVar18 == 0) {
      FUN_006a5e40(iVar3,0,0x7cbcd4,0x7d);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)((int)pvStack_10 + 0x1ffc) = param_1;
  if (DAT_00802a30 != (void *)0x0) {
    if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
    }
    else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
    }
  }
  if (*(int *)(DAT_0081176c + 0x28) != 0) {
    iStack_8 = 100;
    puVar6 = (undefined4 *)((int)pvStack_10 + 0x1a5f);
    do {
      iStack_c = 0xf;
      iVar3 = iStack_8;
      do {
        iVar18 = 0;
        bVar17 = 0;
        pCVar4 = FUN_006f2c00(s_CMPG_FLC_007cbdc4,3,iVar3);
        puVar5 = FUN_0071ad00(DAT_00806780,pCVar4,bVar17,iVar18);
        *puVar6 = puVar5;
        puVar6 = puVar6 + 1;
        iVar3 = iVar3 + 1;
        iStack_c = iStack_c + -1;
      } while (iStack_c != 0);
      iStack_8 = iStack_8 + 100;
    } while (iStack_8 < 400);
    iVar3 = 0;
    puVar6 = (undefined4 *)((int)pvStack_10 + 0x1bc7);
    iStack_c = 0;
    do {
      iVar18 = 0;
      bVar17 = 0;
      pCVar4 = FUN_006f2c00(s_CMPG_FONFLC_007cbdb4,2,iVar3);
      puVar5 = FUN_0071ad00(DAT_00806780,pCVar4,bVar17,iVar18);
      *puVar6 = puVar5;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 4);
  }
  iVar3 = 0;
  do {
    iVar18 = *(int *)((int)pvStack_10 + iVar3 * 4 + 0x1bc7);
    if (iVar18 != 0) {
      puVar6 = FUN_006c4a20(iVar18);
      *(undefined4 **)((int)pvStack_10 + iVar3 * 4 + 0x1bd7) = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        switch(iVar3) {
        case 0:
          uVar19 = 7;
          uVar7 = 0;
          break;
        case 1:
          uVar19 = 0xb5;
          uVar7 = 0x54;
          break;
        case 2:
          uVar19 = 0xb5;
          uVar7 = 0x279;
          break;
        case 3:
          uVar19 = 7;
          uVar7 = 0x2cb;
          break;
        default:
          goto switchD_00590c7b_default;
        }
        FUN_006c4a00(puVar6,DAT_0080759c,uVar7,uVar19);
      }
    }
switchD_00590c7b_default:
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      iStack_8 = 0;
      do {
        iVar3 = 0;
        iStack_c = iStack_8 * 0xf;
        do {
          if (iStack_8 == 0) {
LAB_00590d2d:
            iVar11 = iStack_c + iVar3;
            iVar18 = *(int *)((int)pvStack_10 + iVar11 * 4 + 0x1a5f);
            if (iVar18 != 0) {
              puVar6 = FUN_006c4a20(iVar18);
              *(undefined4 **)((int)pvStack_10 + iVar11 * 4 + 0x1b13) = puVar6;
            }
          }
          else if (iStack_8 == 1) {
            if (iVar3 < 0) {
LAB_00590d24:
              iVar18 = *(int *)((int)pvStack_10 + iVar3 * 4 + 0x1a9b);
            }
            else {
              if (1 < iVar3) {
                if (iVar3 == 6) {
                  if (*(int *)((int)pvStack_10 + 0x1aa7) != 0) {
                    puVar6 = FUN_006c4a20(*(int *)((int)pvStack_10 + 0x1aa7));
                    *(undefined4 **)((int)pvStack_10 + 0x1b67) = puVar6;
                  }
                  goto LAB_00590d4c;
                }
                goto LAB_00590d24;
              }
              iVar18 = *(int *)((int)pvStack_10 + iVar3 * 4 + 0x1a5f);
            }
            if (iVar18 != 0) {
              puVar6 = FUN_006c4a20(iVar18);
              *(undefined4 **)((int)pvStack_10 + iVar3 * 4 + 0x1b4f) = puVar6;
            }
          }
          else if (iStack_8 == 2) goto LAB_00590d2d;
LAB_00590d4c:
          puVar6 = *(undefined4 **)((int)pvStack_10 + (iStack_c + iVar3) * 4 + 0x1b13);
          if (puVar6 != (undefined4 *)0x0) {
            if (iStack_8 == 2) {
              switch(iVar3) {
              case 0:
              case 5:
              case 10:
                puVar6 = *(undefined4 **)((int)pvStack_10 + iVar3 * 4 + 0x1b8b);
                uVar19 = 7;
                uVar7 = 0x54;
                break;
              case 1:
              case 6:
              case 0xb:
                puVar6 = *(undefined4 **)((int)pvStack_10 + iVar3 * 4 + 0x1b8b);
                uVar19 = 7;
                uVar7 = 0x279;
                break;
              case 2:
              case 7:
              case 0xc:
                puVar6 = *(undefined4 **)((int)pvStack_10 + iVar3 * 4 + 0x1b8b);
                uVar19 = 0x25;
                uVar7 = 0xa5;
                break;
              case 3:
              case 8:
              case 0xd:
                puVar6 = *(undefined4 **)((int)pvStack_10 + iVar3 * 4 + 0x1b8b);
                uVar19 = 0x25;
                uVar7 = 0x240;
                break;
              case 4:
              case 9:
              case 0xe:
                puVar6 = *(undefined4 **)((int)pvStack_10 + iVar3 * 4 + 0x1b8b);
                uVar19 = 0x37;
                uVar7 = 0xe0;
                break;
              default:
                goto switchD_00590d73_default;
              }
            }
            else {
              switch(iVar3) {
              case 0:
              case 8:
                uVar19 = 7;
                uVar7 = 0x54;
                break;
              case 1:
              case 9:
                uVar19 = 7;
                uVar7 = 0x279;
                break;
              case 2:
              case 5:
              case 10:
                uVar19 = 0x25;
                uVar7 = 0xa5;
                break;
              case 3:
              case 6:
              case 0xb:
                uVar19 = 0x25;
                uVar7 = 0x240;
                break;
              case 4:
              case 7:
              case 0xc:
                uVar19 = 0x37;
                uVar7 = 0xe0;
                break;
              default:
                goto switchD_00590d73_default;
              }
            }
            FUN_006c4a00(puVar6,DAT_0080759c,uVar7,uVar19);
          }
switchD_00590d73_default:
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0xf);
        iStack_8 = iStack_8 + 1;
        if (2 < iStack_8) {
          thunk_FUN_005b5240((undefined4 *)((int)pvStack_10 + 0x9b),s_MM_MBUT00_007cbd98,0xf2,0x13a,
                             7,8,0,0,0x9d,0x38,10,0x7cbda4,6,8,9,6,0x28,0,0,0,0,0,-1,-1);
          thunk_FUN_005b5240((undefined4 *)((int)pvStack_10 + 0x296),s_MM_MBUT01_007cbd7c,0x191,
                             0x13a,9,8,0,0,0x9d,0x38,10,0x7cbd88,8,8,8,6,0x32,0,0,0,0,0,-1,-1);
          thunk_FUN_005b5240((undefined4 *)((int)pvStack_10 + 0x491),s_MM_MBUT02_007cbd60,0xf2,0x173
                             ,8,6,0,0,0x9d,0x38,10,0x7cbd6c,8,7,10,5,0x28,0,0,0,0,0,-1,-1);
          thunk_FUN_005b5240((undefined4 *)((int)pvStack_10 + 0x68c),s_MM_MBUT03_007cbd44,0x191,
                             0x173,8,6,0,0,0x9d,0x38,10,0x7cbd50,8,7,8,5,0x32,0,0,0,0,0,-1,-1);
          thunk_FUN_005b5240((undefined4 *)((int)pvStack_10 + 0x887),s_MM_MBUT04_007cbd28,0x143,
                             0x1ac,7,8,0,0,0x9d,0x38,10,0x7cbd34,8,9,9,6,0x32,0,0,0,0,0,-1,-1);
          if (DAT_0080874e == 0) {
            DAT_0080874e = 1;
          }
          *(uint *)((int)pvStack_10 + 0x1be8) = (uint)DAT_0080874e * 3 + -3;
          uVar7 = FUN_0070a9f0(DAT_00806780,s_CMPGN_BKG_007cbd1c,0,1);
          *(undefined4 *)(DAT_0081176c + 0x2c) = uVar7;
          thunk_FUN_0055dbf0(DAT_0080759c,1,0);
          pvVar1 = *(void **)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x2e6);
          if (pvVar1 != (void *)0x0) {
            thunk_FUN_005b8c70(pvVar1,0,0,1);
            thunk_FUN_005b7210();
            *(undefined4 *)(*(int *)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x2e6) + 0x1cab) =
                 *(undefined4 *)((int)pvStack_10 + 8);
          }
          FUN_006bc360(*(int *)(DAT_0081176c + 0x2c),(undefined4 *)((int)pvStack_10 + 0x1bf8),
                       (int *)0x0);
          pvVar1 = DAT_00802a30;
          if (DAT_00802a30 != (void *)0x0) {
            uVar7 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
            uVar19 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
            *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
            *(undefined2 *)((int)pvVar1 + 0x494) = 0xffff;
            thunk_FUN_0054bf40(0,uVar19,uVar7);
            thunk_FUN_00543c90(pvVar1,*(int *)((int)pvVar1 + 0xc5),*(int *)((int)pvVar1 + 0xc9));
            *(undefined1 *)((int)pvVar1 + 0xd2) = 0;
            *(undefined4 *)((int)pvVar1 + 0x4df) = 0xffffffff;
          }
          uVar19 = 0xffffffff;
          uVar7 = 7;
          iVar16 = -1;
          iVar3 = *(int *)((int)pvStack_10 + 0x56a);
          iVar15 = -1;
          iVar14 = 1;
          uVar13 = 0xffffffff;
          *(undefined1 *)((int)pvStack_10 + 0x9a) = 5;
          *(undefined4 *)((int)pvStack_10 + 0x4b2) = 0x23f1;
          uVar12 = 0xfffffffe;
          iVar11 = 0x28;
          iVar18 = 0x8c;
          puVar8 = (uint *)FUN_006b0140(0x23f1,DAT_00807618);
          puVar6 = FUN_00713480(puVar8,iVar18,iVar11,uVar12,uVar13,iVar14,iVar15,iVar16);
          (**(code **)(iVar3 + 8))(puVar6,uVar7,uVar19);
          uVar19 = 0xffffffff;
          uVar7 = 7;
          iVar16 = -1;
          iVar3 = *(int *)((int)pvStack_10 + 0x765);
          iVar15 = -1;
          iVar14 = 1;
          uVar13 = 0xffffffff;
          *(undefined4 *)((int)pvStack_10 + 0x6ad) = 0x23f0;
          uVar12 = 0xfffffffe;
          iVar11 = 0x28;
          iVar18 = 0x8c;
          puVar8 = (uint *)FUN_006b0140(0x23f0,DAT_00807618);
          puVar6 = FUN_00713480(puVar8,iVar18,iVar11,uVar12,uVar13,iVar14,iVar15,iVar16);
          (**(code **)(iVar3 + 8))(puVar6,uVar7,uVar19);
          uVar19 = 0xffffffff;
          uVar7 = 7;
          iVar16 = -1;
          iVar3 = *(int *)((int)pvStack_10 + 0x960);
          iVar15 = -1;
          iVar14 = 1;
          uVar13 = 0xffffffff;
          *(undefined4 *)((int)pvStack_10 + 0x8a8) = 0x23f2;
          uVar12 = 0xfffffffe;
          iVar11 = 0x28;
          iVar18 = 0x8c;
          puVar8 = (uint *)FUN_006b0140(0x23f2,DAT_00807618);
          puVar6 = FUN_00713480(puVar8,iVar18,iVar11,uVar12,uVar13,iVar14,iVar15,iVar16);
          (**(code **)(iVar3 + 8))(puVar6,uVar7,uVar19);
          thunk_FUN_00591940();
          iVar3 = 0;
          if (*(char *)((int)pvStack_10 + 0x9a) != '\0') {
            iStack_c = 0;
            piVar10 = (int *)((int)pvStack_10 + 0x123);
            do {
              DVar9 = timeGetTime();
              piVar10[1] = DVar9;
              *piVar10 = iStack_c;
              iStack_c = iStack_c + 0x96;
              iVar3 = iVar3 + 1;
              piVar10 = (int *)((int)piVar10 + 0x1fb);
            } while (iVar3 < (int)(uint)*(byte *)((int)pvStack_10 + 0x9a));
          }
          *(undefined1 *)((int)pvStack_10 + 0x65) = 3;
          thunk_FUN_005b6730(pvStack_10,1,'\0',-1);
          *(undefined4 *)((int)pvStack_10 + 0x1bf0) = *(undefined4 *)((int)pvStack_10 + 0x61);
          iVar3 = *(int *)((int)pvStack_10 + 0x1a5b);
          puVar6 = &uStack_26c;
          for (iVar18 = 0x7e; iVar18 != 0; iVar18 = iVar18 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          *(undefined2 *)puVar6 = 0;
          *(undefined1 *)((int)puVar6 + 2) = 0;
          uStack_238 = *(undefined4 *)((int)pvStack_10 + 8);
          *(undefined4 *)((int)pvStack_10 + 0x1bec) = 1;
          *(undefined4 *)((int)pvStack_10 + 0x1bf4) = 0;
          uStack_1a9 = 0x2340;
          uStack_198 = 2;
          uStack_194 = 0x6943;
          uStack_182 = 0x24bc;
          uStack_171 = 2;
          uStack_16d = 0x6943;
          uStack_169 = 1;
          uStack_245 = 0x2343;
          uStack_234 = 2;
          uStack_230 = 0x694a;
          uStack_19c = uStack_238;
          uStack_175 = uStack_238;
          if (*(int *)(iVar3 + 0x2e6) != 0) {
            puVar6 = auStack_70;
            for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
              *puVar6 = 0xffffffff;
              puVar6 = puVar6 + 1;
            }
            *(undefined2 *)puVar6 = 0xffff;
            thunk_FUN_005b87d0(*(void **)(iVar3 + 0x2e6),0,(int)&uStack_26c,0,0);
            thunk_FUN_005b9010(*(void **)(*(int *)((int)pvStack_10 + 0x1a5b) + 0x2e6),
                               (int)auStack_70);
          }
          thunk_FUN_00568bc0(&DAT_00807658,0);
          if ((DAT_00807300._1_1_ & 8) != 0) {
            thunk_FUN_0056a130(&DAT_00807658,0x12,'\x02',0,(uint *)0x0);
          }
          thunk_FUN_00568bc0(&DAT_00807658,1);
          if (DAT_0080874e == 1) {
            thunk_FUN_005b6730(pvStack_10,0x15,'\0',1);
            thunk_FUN_005b6730(pvStack_10,0x18,'\x02',1);
          }
          else {
            if (DAT_0080874e == 2) {
              thunk_FUN_005b6730(pvStack_10,0x16,'\0',1);
              thunk_FUN_005b6730(pvStack_10,0x19,'\x02',1);
              DAT_00858df8 = (undefined4 *)uStack_54;
              return;
            }
            if (DAT_0080874e == 3) {
              thunk_FUN_005b6730(pvStack_10,0x17,'\0',1);
              thunk_FUN_005b6730(pvStack_10,0x1a,'\x02',1);
              DAT_00858df8 = (undefined4 *)uStack_54;
              return;
            }
          }
          DAT_00858df8 = (undefined4 *)uStack_54;
          return;
        }
      } while( true );
    }
  } while( true );
}


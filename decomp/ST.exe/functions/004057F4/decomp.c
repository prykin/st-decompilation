
void thunk_FUN_00439100(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint uVar6;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 uVar7;
  uint uVar8;
  undefined2 extraout_var_03;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 uVar9;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  undefined2 extraout_var_22;
  undefined2 extraout_var_23;
  undefined2 extraout_var_24;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined2 extraout_var_25;
  undefined2 extraout_var_26;
  undefined2 extraout_var_27;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar11;
  undefined4 uStack_70;
  undefined4 auStack_6c [17];
  int *piStack_28;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  byte *pbStack_c;
  uint uStack_8;
  
  uStack_8 = CONCAT31(uStack_8._1_3_,DAT_0080874d);
  pbStack_c = (byte *)0x0;
  iStack_24 = 0;
  uStack_70 = DAT_00858df8;
  DAT_00858df8 = &uStack_70;
  iVar3 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_70;
    if (iVar3 != -0x5001fff7) {
      iVar10 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x19ab,0,0,&DAT_007a4ccc);
      if (iVar10 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(iVar3,0,0x7a6004,0x19ac);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x170e);
  }
  uStack_20 = (uint)(char)uStack_8;
  iVar10 = uStack_20 * 0xa62;
  iVar3 = *(int *)((int)&DAT_007f5027 + iVar10 + param_1 * 0x10);
  piVar1 = (int *)((int)&DAT_007f5027 + iVar10 + param_1 * 0x10);
  piStack_28 = piVar1;
  if (iVar3 < 0x19b) {
    if (iVar3 == 0x19a) {
      if (*(int *)((int)&DAT_007f5023 + iVar10) == 0) {
        *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
        thunk_FUN_0042d4f0((char)uStack_8,0,0,0);
        iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
        if (iVar3 < 0x19b) {
          if (iVar3 == 0x19a) {
            iVar3 = thunk_FUN_0044ab90(uStack_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10)
                                       ,0);
            if (-1 < iVar3) {
              thunk_FUN_0044b030((char)uStack_8,1,iVar3);
              goto LAB_0043a47c;
            }
            iVar3 = thunk_FUN_0044af50((char)uStack_8,1);
LAB_00439c32:
            uVar5 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
            uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                             **(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c));
          }
          else {
            if (iVar3 != 0) {
              if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439c87;
              goto LAB_00439c59;
            }
            iVar3 = thunk_FUN_0044ab90(uStack_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10)
                                       ,0);
            uVar9 = extraout_var_19;
            if (0 < iVar3) {
              thunk_FUN_0044b030((char)uStack_8,1,iVar3);
              *(undefined4 *)((int)&DAT_007f4fd3 + iVar10) = 0x19a;
              goto LAB_0043a47c;
            }
LAB_00439aaa:
            uVar5 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
            uVar4 = CONCAT22(uVar9,**(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c));
          }
        }
        else {
          if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00439c59:
            iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x17d3,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            goto LAB_0043a47c;
          }
LAB_00439c87:
          iVar3 = thunk_FUN_0044ab90(uStack_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0
                                    );
          if (0 < iVar3) {
            thunk_FUN_0044b030((char)uStack_8,1,iVar3);
            goto LAB_0043a47c;
          }
          thunk_FUN_0044af50((char)uStack_8,1);
          uVar9 = extraout_var_05;
LAB_00439cc7:
          uVar5 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
          uVar4 = CONCAT22(uVar9,**(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c));
        }
        thunk_FUN_0042bb30((char)uStack_8,1,0,uVar5,uVar4);
        *(undefined4 *)((int)&DAT_007f4fd3 + iVar10) = 0x19a;
        goto LAB_0043a47c;
      }
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
        iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x17d7,0,0,&DAT_007a4ccc);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_0043a47c;
      }
      iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
      if (iVar3 < 0x19b) {
        if (iVar3 == 0x19a) {
          iVar3 = thunk_FUN_0044ab90(uStack_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0
                                    );
          if (0 < iVar3) {
            thunk_FUN_0044b030((char)uStack_8,1,iVar3);
            goto LAB_0043a47c;
          }
          if (iVar3 < 0) {
            thunk_FUN_0044af50((char)uStack_8,1);
            thunk_FUN_0042d4f0((char)uStack_8,1,1,0);
            uVar9 = extraout_var_18;
            goto LAB_00439aaa;
          }
LAB_0043a107:
          iStack_24 = 1;
          goto LAB_0043a47c;
        }
        if (iVar3 == 0) {
          iVar3 = thunk_FUN_0044ab90(uStack_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0
                                    );
          if (0 < iVar3) {
            thunk_FUN_0044b030((char)uStack_8,1,iVar3);
            *(undefined4 *)((int)&DAT_007f4fd3 + iVar10) = 0x19a;
            goto LAB_0043a47c;
          }
          goto LAB_00439c32;
        }
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439b10;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439b10:
        iVar3 = thunk_FUN_0044ab90(uStack_8,1,0x19a,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
        if (0 < iVar3) {
          thunk_FUN_0044b030((char)uStack_8,1,iVar3);
          goto LAB_0043a47c;
        }
        thunk_FUN_0044af50((char)uStack_8,1);
        thunk_FUN_0042d4f0((char)uStack_8,1,1,0);
        uVar9 = extraout_var_04;
        goto LAB_00439cc7;
      }
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x17a9,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_0043a47c;
    }
    uVar9 = (undefined2)(uStack_20 * 0x29 >> 0x10);
    if (0x5a < iVar3) {
      if (iVar3 == 0x172) {
        uVar5 = thunk_FUN_0042b620(0xffffffff,CONCAT22(uVar9,(short)piVar1[2]),2);
        uVar4 = uStack_8;
        cVar11 = (char)uStack_8;
        if (*(int *)((int)&DAT_007f5023 + iVar10) != 0) {
          if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
            iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x18df,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            goto LAB_0043a47c;
          }
          iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
          if (iVar3 < 0x19b) {
            uVar9 = extraout_var_17;
            if (iVar3 == 0x19a) goto LAB_004397fb;
            if (iVar3 == 0) goto LAB_0043a394;
            if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043986a;
          }
          else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_0043986a:
            iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                       (uint *)0x0,
                                       CONCAT22(extraout_var_17,*(undefined2 *)(uVar5 + 0x32)));
            if (0 < iVar3) {
              thunk_FUN_0044b030(cVar11,1,iVar3);
              goto LAB_0043a47c;
            }
            if (iVar3 < 0) goto LAB_00439672;
            goto LAB_0043a107;
          }
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x18b4,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_0043a47c;
        }
        *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
        thunk_FUN_0042d4f0(cVar11,0,0,0);
        uVar4 = uStack_8;
        iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
        if (iVar3 < 0x19b) {
          uVar9 = extraout_var_00;
          if (iVar3 == 0x19a) goto LAB_004396d1;
          if (iVar3 == 0) goto LAB_004398e7;
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439956;
        }
        else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439956:
          iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                     (uint *)0x0,
                                     CONCAT22(extraout_var_00,*(undefined2 *)(uVar5 + 0x32)));
          if (-1 < iVar3) {
            thunk_FUN_0044b030((char)uVar4,1,iVar3);
            goto LAB_0043a47c;
          }
          goto LAB_00439986;
        }
        iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x18db,0,0,&DAT_007a4ccc);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_0043a47c;
      }
LAB_00439cfb:
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1998,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x1999);
      goto LAB_0043a47c;
    }
    if (iVar3 != 0x5a) {
      if (iVar3 == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x1713);
      }
      else if (iVar3 != 0x3c) goto LAB_00439cfb;
      if (*(int *)((int)&DAT_007f5023 + iVar10) == 0) {
        iVar3 = *(int *)((int)&DAT_007f4f83 + iVar10);
        if (iVar3 == 0) {
LAB_00439369:
          iVar3 = thunk_FUN_0044ab90(uStack_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0)
          ;
          if (0 < iVar3) {
            thunk_FUN_0044b030((char)uStack_8,0,iVar3);
            *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
            goto LAB_0043a47c;
          }
LAB_0043953a:
          uVar5 = piVar1[1];
          if (uVar5 == uStack_20) {
            thunk_FUN_0042c1c0(uStack_8,0,0,*(int *)((int)piVar1 + 10));
            *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
            goto LAB_0043a47c;
          }
          goto LAB_00439566;
        }
        if (iVar3 == 0x3c) {
          iVar3 = thunk_FUN_0044ab90(uStack_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0)
          ;
          if (0 < iVar3) {
            thunk_FUN_0044b030((char)uStack_8,0,iVar3);
            goto LAB_0043a47c;
          }
          if (-1 < iVar3) goto LAB_0043a107;
          thunk_FUN_0044af50((char)uStack_8,0);
          if ((*(uint *)((int)&DAT_007f4f97 + iVar10) == uStack_20) && (piVar1[1] == uStack_20)) {
            thunk_FUN_0044b280((char)uStack_8,0,1,*(uint **)((int)piVar1 + 10),(int *)&pbStack_c,
                               (int *)0x0,(int *)0x0);
            thunk_FUN_0042d190(uStack_8,0x3c,(int)pbStack_c,0,0);
            FUN_006ae110(pbStack_c);
          }
          else {
            thunk_FUN_0042d4f0((char)uStack_8,0,1,0);
          }
          goto LAB_0043953a;
        }
        if (iVar3 != 0x1ae) {
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1748,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_0043a47c;
        }
        iVar3 = thunk_FUN_0044ab90(uStack_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
        if (0 < iVar3) {
          thunk_FUN_0044b030((char)uStack_8,0,iVar3);
          goto LAB_0043a47c;
        }
        thunk_FUN_0044af50((char)uStack_8,0);
        thunk_FUN_0042d4f0((char)uStack_8,0,1,0);
        uVar9 = extraout_var_14;
        if (piVar1[1] == uStack_20) {
          thunk_FUN_0042c1c0(uStack_8,0,0,*(int *)((int)piVar1 + 10));
          *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
          goto LAB_0043a47c;
        }
LAB_00439469:
        uVar4 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
        uVar5 = CONCAT22(uVar9,**(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c));
      }
      else {
        if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1778,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_0043a47c;
        }
        *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 0;
        thunk_FUN_0042d4f0((char)uStack_8,1,0,0);
        iVar3 = *(int *)((int)&DAT_007f4f83 + iVar10);
        if (iVar3 == 0) goto LAB_00439369;
        if (iVar3 != 0x3c) {
          if (iVar3 != 0x1ae) {
            iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1774,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            goto LAB_0043a47c;
          }
          iVar3 = thunk_FUN_0044ab90(uStack_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0)
          ;
          if (0 < iVar3) {
            thunk_FUN_0044b030((char)uStack_8,0,iVar3);
            goto LAB_0043a47c;
          }
          thunk_FUN_0044af50((char)uStack_8,0);
          uVar9 = extraout_var_13;
          if (piVar1[1] == uStack_20) {
            thunk_FUN_0042c1c0(uStack_8,0,0,*(int *)((int)piVar1 + 10));
            *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
            goto LAB_0043a47c;
          }
          goto LAB_00439469;
        }
        iVar3 = thunk_FUN_0044ab90(uStack_8,0,0x3c,(char)piVar1[1],*(uint **)((int)piVar1 + 10),0);
        if (-1 < iVar3) {
          thunk_FUN_0044b030((char)uStack_8,0,iVar3);
          goto LAB_0043a47c;
        }
        thunk_FUN_0044af50((char)uStack_8,0);
        uVar5 = piVar1[1];
        if (uVar5 == uStack_20) {
          thunk_FUN_0042c1c0(uStack_8,0,0,*(int *)((int)piVar1 + 10));
          *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
          goto LAB_0043a47c;
        }
LAB_00439566:
        uVar4 = CONCAT31((int3)((uint)*(int *)((int)piVar1 + 10) >> 8),(char)piVar1[1]);
        uVar5 = CONCAT22((short)(uVar5 >> 0x10),**(undefined2 **)(*(int *)((int)piVar1 + 10) + 0x1c)
                        );
      }
      thunk_FUN_0042bb30((char)uStack_8,0,0,uVar4,uVar5);
      *(undefined4 *)((int)&DAT_007f4f83 + iVar10) = 0x3c;
      goto LAB_0043a47c;
    }
    uVar5 = thunk_FUN_0042b620(0xffffffff,CONCAT22(uVar9,(short)piVar1[2]),4);
    uVar4 = uStack_8;
    cVar11 = (char)uStack_8;
    if (*(int *)((int)&DAT_007f5023 + iVar10) != 0) {
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
        iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1885,0,0,&DAT_007a4ccc);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_0043a47c;
      }
      iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
      if (iVar3 < 0x19b) {
        uVar9 = extraout_var_15;
        if (iVar3 == 0x19a) {
LAB_004397fb:
          uVar4 = uStack_8;
          iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                     (uint *)0x0,CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
          if (0 < iVar3) {
            thunk_FUN_0044b030((char)uVar4,1,iVar3);
            goto LAB_0043a47c;
          }
LAB_00439672:
          thunk_FUN_0044af50((char)uVar4,1);
          iVar3 = thunk_FUN_0042d4f0((char)uVar4,1,1,0);
          uVar9 = extraout_var_16;
          goto LAB_0043a463;
        }
        if (iVar3 == 0) goto LAB_0043a394;
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043963c;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_0043963c:
        iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                   (uint *)0x0,
                                   CONCAT22(extraout_var_15,*(undefined2 *)(uVar5 + 0x32)));
        if (0 < iVar3) {
          thunk_FUN_0044b030(cVar11,1,iVar3);
          goto LAB_0043a47c;
        }
        if (-1 < iVar3) goto LAB_0043a107;
        goto LAB_00439672;
      }
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x185a,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_0043a47c;
    }
    *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
    thunk_FUN_0042d4f0(cVar11,0,0,0);
    uVar4 = uStack_8;
    iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
    if (iVar3 < 0x19b) {
      uVar9 = extraout_var;
      if (iVar3 == 0x19a) {
LAB_004396d1:
        uVar4 = uStack_8;
        iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                   (uint *)0x0,CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
        if (0 < iVar3) {
          thunk_FUN_0044b030((char)uVar4,1,iVar3);
          goto LAB_0043a47c;
        }
        goto LAB_00439986;
      }
      if (iVar3 != 0) {
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439740;
        goto LAB_00439712;
      }
LAB_004398e7:
      uVar4 = uStack_8;
      iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                 (uint *)0x0,CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
      uVar7 = extraout_ECX;
      if (0 < iVar3) {
        thunk_FUN_0044b030((char)uVar4,1,iVar3);
        goto LAB_0043a47c;
      }
    }
    else {
      if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_00439712:
        iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1881,0,0,&DAT_007a4ccc);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_0043a47c;
      }
LAB_00439740:
      iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                 (uint *)0x0,CONCAT22(extraout_var,*(undefined2 *)(uVar5 + 0x32)));
      if (-1 < iVar3) {
        thunk_FUN_0044b030((char)uVar4,1,iVar3);
        goto LAB_0043a47c;
      }
LAB_00439986:
      iVar3 = thunk_FUN_0044af50((char)uVar4,1);
      uVar7 = extraout_ECX_00;
    }
    uVar6 = CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(uVar5 + 0x32));
    uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),*(undefined1 *)(uVar5 + 0x24));
    iVar3 = *(int *)(uVar5 + 0x20);
LAB_0043a470:
    iVar10 = 1;
  }
  else {
    if (iVar3 == 0x1a4) {
      uVar5 = thunk_FUN_0042b620(0xffffffff,(uint)*(ushort *)(piVar1 + 2),5);
      uVar4 = uStack_8;
      cVar11 = (char)uStack_8;
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 0) {
        if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1939,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_0043a47c;
        }
        iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
        if (iVar3 < 0x19b) {
          uVar9 = extraout_var_10;
          if (iVar3 == 0x19a) {
LAB_0043a27b:
            uVar4 = uStack_8;
            iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                       (uint *)0x0,CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
            if (0 < iVar3) {
              thunk_FUN_0044b030((char)uVar4,1,iVar3);
              goto LAB_0043a47c;
            }
            goto LAB_0043a320;
          }
          if (iVar3 != 0) {
            if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043a2ea;
            goto LAB_0043a2bc;
          }
LAB_0043a247:
          uVar4 = uStack_8;
          iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                     (uint *)0x0,CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
          uVar7 = extraout_EDX_00;
          uVar9 = extraout_var_11;
          if (0 < iVar3) {
            thunk_FUN_0044b030((char)uVar4,1,iVar3);
            goto LAB_0043a47c;
          }
        }
        else {
          if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_0043a2bc:
            iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x190e,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            goto LAB_0043a47c;
          }
LAB_0043a2ea:
          iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                     (uint *)0x0,
                                     CONCAT22(extraout_var_10,*(undefined2 *)(uVar5 + 0x32)));
          if (0 < iVar3) {
            thunk_FUN_0044b030(cVar11,1,iVar3);
            goto LAB_0043a47c;
          }
joined_r0x0043a31a:
          if (-1 < iVar3) goto LAB_0043a107;
LAB_0043a320:
          thunk_FUN_0044af50((char)uVar4,1);
          thunk_FUN_0042d4f0((char)uVar4,1,1,0);
          uVar7 = extraout_EDX_01;
          uVar9 = extraout_var_12;
        }
        uVar6 = CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32));
        uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),*(undefined1 *)(uVar5 + 0x24));
        iVar3 = *(int *)(uVar5 + 0x20);
        goto LAB_0043a470;
      }
      *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
      thunk_FUN_0042d4f0(cVar11,0,0,0);
      uVar4 = uStack_8;
      iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
      if (iVar3 < 0x19b) {
        uVar9 = extraout_var_25;
        if (iVar3 == 0x19a) {
LAB_0043a3c8:
          uVar4 = uStack_8;
          iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                     (uint *)0x0,CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
          if (0 < iVar3) {
            thunk_FUN_0044b030((char)uVar4,1,iVar3);
            goto LAB_0043a47c;
          }
          goto LAB_0043a459;
        }
        if (iVar3 != 0) {
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_0043a42c;
          goto LAB_0043a405;
        }
LAB_0043a394:
        uVar4 = uStack_8;
        iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                   (uint *)0x0,CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32)));
        uVar9 = extraout_var_26;
        if (0 < iVar3) {
          thunk_FUN_0044b030((char)uVar4,1,iVar3);
          goto LAB_0043a47c;
        }
      }
      else {
        if ((iVar3 != 0x1a4) && (iVar3 != 0x1b8)) {
LAB_0043a405:
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1935,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_0043a47c;
        }
LAB_0043a42c:
        iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                   (uint *)0x0,
                                   CONCAT22(extraout_var_25,*(undefined2 *)(uVar5 + 0x32)));
        if (-1 < iVar3) {
          thunk_FUN_0044b030((char)uVar4,1,iVar3);
          goto LAB_0043a47c;
        }
LAB_0043a459:
        iVar3 = thunk_FUN_0044af50((char)uVar4,1);
        uVar9 = extraout_var_27;
      }
LAB_0043a463:
      uVar6 = CONCAT22(uVar9,*(undefined2 *)(uVar5 + 0x32));
      uVar8 = CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(uVar5 + 0x24));
      iVar3 = *(int *)(uVar5 + 0x20);
      goto LAB_0043a470;
    }
    if (iVar3 != 0x1ae) {
      if (iVar3 != 0x1b8) goto LAB_00439cfb;
      uVar5 = thunk_FUN_0042b620(0xffffffff,(uint)*(ushort *)(piVar1 + 2),6);
      uVar4 = uStack_8;
      cVar11 = (char)uStack_8;
      if (*(int *)((int)&DAT_007f5023 + iVar10) == 0) {
        *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 1;
        thunk_FUN_0042d4f0(cVar11,0,0,0);
        uVar4 = uStack_8;
        iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
        if (iVar3 < 0x19b) {
          uVar9 = extraout_var_20;
          if (iVar3 == 0x19a) goto LAB_0043a3c8;
          if (iVar3 == 0) goto LAB_0043a394;
          if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439eb7;
        }
        else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439eb7:
          iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                     (uint *)0x0,
                                     CONCAT22(extraout_var_20,*(undefined2 *)(uVar5 + 0x32)));
          if (-1 < iVar3) {
            thunk_FUN_0044b030((char)uVar4,1,iVar3);
            goto LAB_0043a47c;
          }
          goto LAB_0043a459;
        }
        iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x198f,0,0,&DAT_007a4ccc);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_0043a47c;
      }
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
        iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1993,0,0,&DAT_007a4ccc);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_0043a47c;
      }
      iVar3 = *(int *)((int)&DAT_007f4fd3 + iVar10);
      if (iVar3 < 0x19b) {
        uVar9 = extraout_var_06;
        if (iVar3 == 0x19a) goto LAB_0043a27b;
        if (iVar3 == 0) goto LAB_0043a247;
        if ((iVar3 == 0x5a) || (iVar3 == 0x172)) goto LAB_00439dfb;
      }
      else if ((iVar3 == 0x1a4) || (iVar3 == 0x1b8)) {
LAB_00439dfb:
        iVar3 = thunk_FUN_0044ab90(uStack_8,1,*(int *)(uVar5 + 0x20),*(char *)(uVar5 + 0x24),
                                   (uint *)0x0,
                                   CONCAT22(extraout_var_06,*(undefined2 *)(uVar5 + 0x32)));
        if (0 < iVar3) {
          thunk_FUN_0044b030(cVar11,1,iVar3);
          goto LAB_0043a47c;
        }
        goto joined_r0x0043a31a;
      }
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1968,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_0043a47c;
    }
    uStack_20 = thunk_FUN_0042b620((uint)*(byte *)(piVar1 + 1),
                                   CONCAT22((short)(uStack_20 * 5 >> 0x10),(short)piVar1[2]),3);
    uVar4 = uStack_8;
    cVar11 = (char)uStack_8;
    if (*(int *)((int)&DAT_007f5023 + iVar10) == 0) {
      iVar3 = *(int *)((int)&DAT_007f4f83 + iVar10);
      uVar9 = 0;
      if (iVar3 == 0) {
LAB_0043a177:
        uVar4 = uStack_8;
        iVar3 = thunk_FUN_0044ab90(uStack_8,0,*(int *)(uStack_20 + 0x20),(char)piVar1[1],(uint *)0x0
                                   ,CONCAT22(uVar9,(short)piVar1[2]));
        if (0 < iVar3) {
          thunk_FUN_0044b030((char)uVar4,0,iVar3);
          goto LAB_0043a47c;
        }
        uVar6 = CONCAT22(extraout_var_09,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)extraout_EDX >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(uStack_20 + 0x20);
        iVar10 = 0;
      }
      else if (iVar3 == 0x3c) {
        iVar3 = thunk_FUN_0044ab90(uStack_8,0,*(int *)(uStack_20 + 0x20),(char)piVar1[1],(uint *)0x0
                                   ,CONCAT22(extraout_var_07,(short)piVar1[2]));
        if (0 < iVar3) {
          thunk_FUN_0044b030(cVar11,0,iVar3);
          goto LAB_0043a47c;
        }
        thunk_FUN_0044af50(cVar11,0);
        uVar7 = thunk_FUN_0042d4f0(cVar11,0,1,0);
        uVar6 = CONCAT22(extraout_var_24,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(uStack_20 + 0x20);
        iVar10 = 0;
      }
      else {
        if (iVar3 != 0x1ae) {
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1803,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_0043a47c;
        }
        iVar3 = thunk_FUN_0044ab90(uStack_8,0,*(int *)(uStack_20 + 0x20),(char)piVar1[1],(uint *)0x0
                                   ,CONCAT22(extraout_var_21,(short)piVar1[2]));
        if (0 < iVar3) {
          thunk_FUN_0044b030(cVar11,0,iVar3);
          goto LAB_0043a47c;
        }
        if (-1 < iVar3) goto LAB_0043a107;
        thunk_FUN_0044af50(cVar11,0);
        thunk_FUN_0042d4f0(cVar11,0,1,0);
        uVar6 = CONCAT22(extraout_var_03,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)extraout_ECX_02 >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(uStack_20 + 0x20);
        iVar10 = 0;
      }
    }
    else {
      if (*(int *)((int)&DAT_007f5023 + iVar10) != 1) {
        iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x182b,0,0,&DAT_007a4ccc);
        if (iVar3 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_0043a47c;
      }
      *(undefined4 *)((int)&DAT_007f5023 + iVar10) = 0;
      thunk_FUN_0042d4f0(cVar11,1,0,0);
      uVar4 = uStack_8;
      iVar3 = *(int *)((int)&DAT_007f4f83 + iVar10);
      uVar9 = extraout_var_01;
      if (iVar3 == 0) goto LAB_0043a177;
      cVar11 = (char)uStack_8;
      if (iVar3 == 0x3c) {
        iVar3 = thunk_FUN_0044ab90(uStack_8,0,*(int *)(uStack_20 + 0x20),(char)piVar1[1],(uint *)0x0
                                   ,CONCAT22(extraout_var_08,(short)piVar1[2]));
        if (0 < iVar3) {
          thunk_FUN_0044b030(cVar11,0,iVar3);
          goto LAB_0043a47c;
        }
        uVar7 = thunk_FUN_0044af50(cVar11,0);
        uVar6 = CONCAT22(extraout_var_23,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(uStack_20 + 0x20);
        iVar10 = 0;
      }
      else {
        if (iVar3 != 0x1ae) {
          iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1827,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_0043a47c;
        }
        iVar3 = thunk_FUN_0044ab90(uStack_8,0,*(int *)(uStack_20 + 0x20),(char)piVar1[1],(uint *)0x0
                                   ,CONCAT22(extraout_var_22,(short)piVar1[2]));
        if (-1 < iVar3) {
          thunk_FUN_0044b030(cVar11,0,iVar3);
          goto LAB_0043a47c;
        }
        thunk_FUN_0044af50(cVar11,0);
        uVar6 = CONCAT22(extraout_var_02,(short)piVar1[2]);
        uVar8 = CONCAT31((int3)((uint)extraout_ECX_01 >> 8),(char)piVar1[1]);
        iVar3 = *(int *)(uStack_20 + 0x20);
        iVar10 = 0;
      }
    }
  }
  thunk_FUN_0042bea0((char)uVar4,iVar10,0,iVar3,uVar8,uVar6);
LAB_0043a47c:
  if (((iStack_24 == 1) &&
      (uVar5 = CONCAT22((short)((uint)&iStack_14 >> 0x10),(short)piStack_28[2]),
      iVar3 = thunk_FUN_0043aaf0(*piStack_28,CONCAT31((int3)(uVar5 >> 8),(char)piStack_28[1]),
                                 *(int *)((int)piStack_28 + 10),uVar5,&iStack_18,&iStack_14,
                                 &iStack_10,&uStack_1c), iVar3 == 0)) &&
     (iVar3 = FUN_006eb230(DAT_00807598,uStack_1c,DAT_00807410,DAT_00807414,DAT_00807418,
                           DAT_0080741c), iVar3 != 1)) {
    thunk_FUN_004a8e00(iStack_18,iStack_14,iStack_10);
    thunk_FUN_004a8f20(1);
    thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
    thunk_FUN_0054b540(DAT_00802a30);
    DAT_0080674c = 2;
    DAT_0080745d = 0;
  }
  thunk_FUN_00435060();
  DAT_00858df8 = (undefined4 *)uStack_70;
  return;
}


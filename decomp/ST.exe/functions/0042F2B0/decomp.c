
undefined4 FUN_0042f2b0(uint param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  code *pcVar1;
  void *pvVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  void *unaff_EDI;
  undefined4 local_68;
  undefined4 local_64 [16];
  uint local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  iVar4 = (char)param_1 * 0xa62;
  local_14 = *(uint **)((int)&DAT_007f4e29 + iVar4);
  local_1c = *(uint **)((int)&DAT_007f4e24 + iVar4 + 1);
  local_20 = *(uint **)((int)&DAT_007f5107 + iVar4);
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  iVar4 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_68;
    if (iVar4 == -0x5001fff7) {
      return 0;
    }
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x7cd,0,iVar4,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar4,0,0x7a6004,0x7ce);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if ((short)param_3 == -1) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x6cd);
  }
  if (param_4[8] == 0x14) {
    iVar4 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00801480 + (iVar4 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar4 + 0x41U) & 0x1f))
        == 0) {
      iVar4 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00800f10 + (iVar4 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar4 + 0x41U) & 0x1f)
          ) == 0) {
        iVar4 = (**(code **)(*param_4 + 0x2c))();
        if ((*(uint *)(&DAT_00801450 + (iVar4 + 0x41U >> 5) * 4) &
            1 << ((byte)(iVar4 + 0x41U) & 0x1f)) == 0) goto LAB_0042f42f;
        iVar4 = (char)param_1 * 0xa62;
        *(int *)(&DAT_007f4e53 + iVar4) = *(int *)(&DAT_007f4e53 + iVar4) + -1;
      }
      else {
        iVar4 = (char)param_1 * 0xa62;
        *(int *)((int)&DAT_007f4e4f + iVar4) = *(int *)((int)&DAT_007f4e4f + iVar4) + -1;
      }
    }
    else {
      iVar4 = (char)param_1 * 0xa62;
      *(int *)((int)&DAT_007f4e4b + iVar4) = *(int *)((int)&DAT_007f4e4b + iVar4) + -1;
    }
    *(int *)(&DAT_007f4e57 + iVar4) = *(int *)(&DAT_007f4e57 + iVar4) + 1;
  }
LAB_0042f42f:
  if (param_4[8] == 1000) {
    iVar4 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00800f90 + (iVar4 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar4 - 0x32U) & 0x1f))
        == 0) {
      iVar4 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00801360 + (iVar4 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar4 - 0x32U) & 0x1f)
          ) == 0) {
        iVar4 = (**(code **)(*param_4 + 0x2c))();
        if (((*(uint *)(&DAT_008014a0 + (iVar4 - 0x32U >> 5) * 4) &
             1 << ((byte)(iVar4 - 0x32U) & 0x1f)) == 0) &&
           (iVar4 = (**(code **)(*param_4 + 0x2c))(),
           (*(uint *)(&DAT_00800f80 + (iVar4 - 0x32U >> 5) * 4) &
           1 << ((byte)(iVar4 - 0x32U) & 0x1f)) == 0)) goto LAB_0042f547;
        iVar4 = (char)param_1 * 0xa62;
        *(int *)(&DAT_007f4e63 + iVar4) = *(int *)(&DAT_007f4e63 + iVar4) + -1;
      }
      else {
        iVar4 = (char)param_1 * 0xa62;
        *(int *)(&DAT_007f4e5f + iVar4) = *(int *)(&DAT_007f4e5f + iVar4) + -1;
      }
    }
    else {
      iVar4 = (char)param_1 * 0xa62;
      *(int *)(&DAT_007f4e5b + iVar4) = *(int *)(&DAT_007f4e5b + iVar4) + -1;
    }
    *(int *)(&DAT_007f4e67 + iVar4) = *(int *)(&DAT_007f4e67 + iVar4) + 1;
  }
LAB_0042f547:
  pvVar2 = DAT_008016d4;
  if (param_4[8] == 0x14) {
    iVar4 = (char)param_1 * 0xa62;
    *(short *)(&DAT_007f4e2d + iVar4) = *(short *)(&DAT_007f4e2d + iVar4) + -1;
    if (pvVar2 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar2,(char)param_1,(uint)*(ushort *)(&DAT_007f4e2d + iVar4));
    }
    iVar5 = (**(code **)(*param_4 + 0x2c))();
    if (iVar5 != 0x19) {
      iVar5 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
        iVar5 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
          iVar5 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
            iVar5 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
              iVar5 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0)
              {
                iVar5 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0
                   ) {
                  iVar5 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar5 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) {
                    iVar5 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar5 + 0x41U >> 5] & 1 << ((byte)(iVar5 + 0x41U) & 0x1f))
                        == 0) {
                      iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x73c,0,0,
                                           &DAT_007a4ccc);
                      if (iVar4 != 0) {
                        pcVar1 = (code *)swi(3);
                        uVar6 = (*pcVar1)();
                        return uVar6;
                      }
                    }
                    else {
                      *(int *)(&DAT_007f4edb + iVar4) = *(int *)(&DAT_007f4edb + iVar4) + -1;
                      if ((param_5 != 0xfe) &&
                         (*(int *)(&DAT_007f4ee3 + iVar4) = *(int *)(&DAT_007f4ee3 + iVar4) + 1,
                         param_5 != 0xff)) {
                        *(int *)(&DAT_007f4ee7 + param_5 * 0xa62) =
                             *(int *)(&DAT_007f4ee7 + param_5 * 0xa62) + 1;
                      }
                    }
                  }
                  else {
                    *(int *)(&DAT_007f4ecb + iVar4) = *(int *)(&DAT_007f4ecb + iVar4) + -1;
                    if ((param_5 != 0xfe) &&
                       (*(int *)(&DAT_007f4ed3 + iVar4) = *(int *)(&DAT_007f4ed3 + iVar4) + 1,
                       param_5 != 0xff)) {
                      *(int *)(&DAT_007f4ed7 + param_5 * 0xa62) =
                           *(int *)(&DAT_007f4ed7 + param_5 * 0xa62) + 1;
                    }
                  }
                }
                else {
                  *(int *)(&DAT_007f4ebb + iVar4) = *(int *)(&DAT_007f4ebb + iVar4) + -1;
                  if ((param_5 != 0xfe) &&
                     (*(int *)(&DAT_007f4ec3 + iVar4) = *(int *)(&DAT_007f4ec3 + iVar4) + 1,
                     param_5 != 0xff)) {
                    *(int *)(&DAT_007f4ec7 + param_5 * 0xa62) =
                         *(int *)(&DAT_007f4ec7 + param_5 * 0xa62) + 1;
                  }
                }
              }
              else {
                *(int *)(&DAT_007f4eab + iVar4) = *(int *)(&DAT_007f4eab + iVar4) + -1;
                if ((param_5 != 0xfe) &&
                   (*(int *)(&DAT_007f4eb3 + iVar4) = *(int *)(&DAT_007f4eb3 + iVar4) + 1,
                   param_5 != 0xff)) {
                  *(int *)(&DAT_007f4eb7 + param_5 * 0xa62) =
                       *(int *)(&DAT_007f4eb7 + param_5 * 0xa62) + 1;
                }
              }
            }
            else {
              *(int *)(&DAT_007f4e9b + iVar4) = *(int *)(&DAT_007f4e9b + iVar4) + -1;
              if ((param_5 != 0xfe) &&
                 (*(int *)(&DAT_007f4ea3 + iVar4) = *(int *)(&DAT_007f4ea3 + iVar4) + 1,
                 param_5 != 0xff)) {
                *(int *)(&DAT_007f4ea7 + param_5 * 0xa62) =
                     *(int *)(&DAT_007f4ea7 + param_5 * 0xa62) + 1;
              }
            }
          }
          else {
            *(int *)(&DAT_007f4e8b + iVar4) = *(int *)(&DAT_007f4e8b + iVar4) + -1;
            if ((param_5 != 0xfe) &&
               (*(int *)(&DAT_007f4e93 + iVar4) = *(int *)(&DAT_007f4e93 + iVar4) + 1,
               param_5 != 0xff)) {
              *(int *)(&DAT_007f4e97 + param_5 * 0xa62) =
                   *(int *)(&DAT_007f4e97 + param_5 * 0xa62) + 1;
            }
          }
        }
        else {
          *(int *)(&DAT_007f4e7b + iVar4) = *(int *)(&DAT_007f4e7b + iVar4) + -1;
          if ((param_5 != 0xfe) &&
             (*(int *)(&DAT_007f4e83 + iVar4) = *(int *)(&DAT_007f4e83 + iVar4) + 1, param_5 != 0xff
             )) {
            *(int *)(&DAT_007f4e87 + param_5 * 0xa62) =
                 *(int *)(&DAT_007f4e87 + param_5 * 0xa62) + 1;
          }
        }
      }
      else {
        *(int *)(&DAT_007f4e6b + iVar4) = *(int *)(&DAT_007f4e6b + iVar4) + -1;
        if ((param_5 != 0xfe) &&
           (*(int *)(&DAT_007f4e73 + iVar4) = *(int *)(&DAT_007f4e73 + iVar4) + 1, param_5 != 0xff))
        {
          *(int *)(&DAT_007f4e77 + param_5 * 0xa62) = *(int *)(&DAT_007f4e77 + param_5 * 0xa62) + 1;
        }
      }
    }
  }
  pvVar2 = DAT_008016d4;
  if (param_4[8] == 1000) {
    iVar4 = (char)param_1 * 0xa62;
    *(short *)(&DAT_007f4e2d + iVar4) = *(short *)(&DAT_007f4e2d + iVar4) + -1;
    if (pvVar2 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar2,(char)param_1,(uint)*(ushort *)(&DAT_007f4e2d + iVar4));
    }
    iVar5 = (**(code **)(*param_4 + 0x2c))();
    if (iVar5 == 0x33) {
      *(int *)(&DAT_007f4f7b + iVar4) = *(int *)(&DAT_007f4f7b + iVar4) + -1;
    }
    else if (iVar5 == 0x62) {
      *(int *)(&DAT_007f4f7f + iVar4) = *(int *)(&DAT_007f4f7f + iVar4) + -1;
    }
    iVar5 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
      iVar5 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
        iVar5 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
          iVar5 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
            iVar5 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) {
              iVar5 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0)
              {
                iVar5 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0
                   ) {
                  iVar5 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)) ==
                      0) {
                    iVar5 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar5 - 0x32U >> 5] & 1 << ((byte)(iVar5 - 0x32U) & 0x1f))
                        == 0) {
                      iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x797,0,0,
                                           &DAT_007a4ccc);
                      if (iVar4 != 0) {
                        pcVar1 = (code *)swi(3);
                        uVar6 = (*pcVar1)();
                        return uVar6;
                      }
                    }
                    else {
                      *(int *)(&DAT_007f4f6b + iVar4) = *(int *)(&DAT_007f4f6b + iVar4) + -1;
                      if ((param_5 != 0xfe) &&
                         (*(int *)(&DAT_007f4f73 + iVar4) = *(int *)(&DAT_007f4f73 + iVar4) + 1,
                         param_5 != 0xff)) {
                        *(int *)(&DAT_007f4f77 + param_5 * 0xa62) =
                             *(int *)(&DAT_007f4f77 + param_5 * 0xa62) + 1;
                      }
                    }
                  }
                  else {
                    *(int *)(&DAT_007f4f5b + iVar4) = *(int *)(&DAT_007f4f5b + iVar4) + -1;
                    if ((param_5 != 0xfe) &&
                       (*(int *)(&DAT_007f4f63 + iVar4) = *(int *)(&DAT_007f4f63 + iVar4) + 1,
                       param_5 != 0xff)) {
                      *(int *)(&DAT_007f4f67 + param_5 * 0xa62) =
                           *(int *)(&DAT_007f4f67 + param_5 * 0xa62) + 1;
                    }
                  }
                }
                else {
                  *(int *)(&DAT_007f4f4b + iVar4) = *(int *)(&DAT_007f4f4b + iVar4) + -1;
                  if ((param_5 != 0xfe) &&
                     (*(int *)(&DAT_007f4f53 + iVar4) = *(int *)(&DAT_007f4f53 + iVar4) + 1,
                     param_5 != 0xff)) {
                    *(int *)(&DAT_007f4f57 + param_5 * 0xa62) =
                         *(int *)(&DAT_007f4f57 + param_5 * 0xa62) + 1;
                  }
                }
              }
              else {
                *(int *)(&DAT_007f4f3b + iVar4) = *(int *)(&DAT_007f4f3b + iVar4) + -1;
                if ((param_5 != 0xfe) &&
                   (*(int *)(&DAT_007f4f43 + iVar4) = *(int *)(&DAT_007f4f43 + iVar4) + 1,
                   param_5 != 0xff)) {
                  *(int *)(&DAT_007f4f47 + param_5 * 0xa62) =
                       *(int *)(&DAT_007f4f47 + param_5 * 0xa62) + 1;
                }
              }
            }
            else {
              *(int *)(&DAT_007f4f2b + iVar4) = *(int *)(&DAT_007f4f2b + iVar4) + -1;
              if ((param_5 != 0xfe) &&
                 (*(int *)(&DAT_007f4f33 + iVar4) = *(int *)(&DAT_007f4f33 + iVar4) + 1,
                 param_5 != 0xff)) {
                *(int *)(&DAT_007f4f37 + param_5 * 0xa62) =
                     *(int *)(&DAT_007f4f37 + param_5 * 0xa62) + 1;
              }
            }
          }
          else {
            *(int *)(&DAT_007f4f1b + iVar4) = *(int *)(&DAT_007f4f1b + iVar4) + -1;
            if ((param_5 != 0xfe) &&
               (*(int *)(&DAT_007f4f23 + iVar4) = *(int *)(&DAT_007f4f23 + iVar4) + 1,
               param_5 != 0xff)) {
              *(int *)(&DAT_007f4f27 + param_5 * 0xa62) =
                   *(int *)(&DAT_007f4f27 + param_5 * 0xa62) + 1;
            }
          }
        }
        else {
          *(int *)(&DAT_007f4f0b + iVar4) = *(int *)(&DAT_007f4f0b + iVar4) + -1;
          if ((param_5 != 0xfe) &&
             (*(int *)(&DAT_007f4f13 + iVar4) = *(int *)(&DAT_007f4f13 + iVar4) + 1, param_5 != 0xff
             )) {
            *(int *)(&DAT_007f4f17 + param_5 * 0xa62) =
                 *(int *)(&DAT_007f4f17 + param_5 * 0xa62) + 1;
          }
        }
      }
      else {
        *(int *)(&DAT_007f4efb + iVar4) = *(int *)(&DAT_007f4efb + iVar4) + -1;
        if ((param_5 != 0xfe) &&
           (*(int *)(&DAT_007f4f03 + iVar4) = *(int *)(&DAT_007f4f03 + iVar4) + 1, param_5 != 0xff))
        {
          *(int *)(&DAT_007f4f07 + param_5 * 0xa62) = *(int *)(&DAT_007f4f07 + param_5 * 0xa62) + 1;
        }
      }
    }
    else {
      *(int *)(&DAT_007f4eeb + iVar4) = *(int *)(&DAT_007f4eeb + iVar4) + -1;
      if ((param_5 != 0xfe) &&
         (*(int *)(&DAT_007f4ef3 + iVar4) = *(int *)(&DAT_007f4ef3 + iVar4) + 1, param_5 != 0xff)) {
        *(int *)(&DAT_007f4ef7 + param_5 * 0xa62) = *(int *)(&DAT_007f4ef7 + param_5 * 0xa62) + 1;
      }
    }
  }
  piVar7 = (int *)thunk_FUN_0042b620(param_1,param_3,1);
  if (piVar7 != param_4) {
    FUN_006a5e40(-0x5001fff9,DAT_007ed77c,0x7a6004,0x7a3);
  }
  if ((short)param_2 != -1) {
    local_10 = (int *)thunk_FUN_0042b760(param_1,param_2);
    if (local_10 == (int *)0x0) {
      FUN_006a5e40(-0x5001fffc,DAT_007ed77c,0x7a6004,0x7a5);
    }
    iVar4 = thunk_FUN_004237d0(local_10,(short)param_3);
    if (iVar4 == 0) {
      FUN_006a5e40(-0x5001fffd,DAT_007ed77c,0x7a6004,0x7a6);
    }
  }
  thunk_FUN_00440820(param_1,param_3);
  thunk_FUN_0042c5f0(DAT_0080874d,param_4[8],param_1,param_3);
  thunk_FUN_0042cef0(param_4[8],(char)param_1,(short)param_3);
  piVar7 = local_10;
  puVar8 = local_14;
  uVar9 = param_3;
  if ((short)param_2 != -1) {
    (**(code **)(*local_10 + 4))(param_3);
    FUN_006ae140(local_14,param_3 & 0xffff,&local_c);
    sVar3 = thunk_FUN_004233c0((int)piVar7);
    if ((sVar3 != 0) || (iVar4 = thunk_FUN_004233a0((int)piVar7), iVar4 != 0)) goto LAB_00430018;
    thunk_FUN_0054cf70(DAT_00802a38,piVar7[2]);
    puVar8 = local_1c;
    uVar9 = param_2;
  }
  FUN_006ae140(puVar8,uVar9 & 0xffff,&local_c);
LAB_00430018:
  iVar4 = (**(code **)(*param_4 + 0x2c))();
  puVar8 = local_20;
  if ((iVar4 == 0x1d) && (local_20 != (uint *)0x0)) {
    local_24 = local_20[3];
    uVar9 = 0;
    if (0 < (int)local_24) {
      while( true ) {
        FUN_006acc70((int)puVar8,uVar9,&local_8);
        if ((short)local_8 == (short)param_3) break;
        uVar9 = uVar9 + 1;
        if ((int)local_24 <= (int)uVar9) {
          DAT_00858df8 = (undefined4 *)local_68;
          return 0;
        }
      }
      local_8 = 0xffff;
      FUN_006ae140(puVar8,uVar9,&local_8);
    }
  }
  DAT_00858df8 = (undefined4 *)local_68;
  return 0;
}


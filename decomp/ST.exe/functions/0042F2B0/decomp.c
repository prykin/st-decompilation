
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::UnRegisterObject */

undefined4 __thiscall
STAllPlayersC::UnRegisterObject
          (STAllPlayersC *this,uint param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  code *pcVar1;
  void *pvVar2;
  STAllPlayersC *this_00;
  STGroupBoatC *pSVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  void *unaff_EDI;
  InternalExceptionFrame local_68;
  uint local_24;
  uint *local_20;
  uint *local_1c;
  STAllPlayersC *local_18;
  uint *local_14;
  STGroupBoatC *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  iVar5 = (char)param_1 * 0xa62;
  local_14 = *(uint **)((int)&DAT_007f4e29 + iVar5);
  local_1c = *(uint **)((int)&DAT_007f4e24 + iVar5 + 1);
  local_20 = *(uint **)((int)&DAT_007f5107 + iVar5);
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar5 == -0x5001fff7) {
      return 0;
    }
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x7cd,0,iVar5,&DAT_007a4ccc,
                               s_STAllPlayersC__UnRegisterObject_007a6674);
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x7ce);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  if ((short)param_3 == -1) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x6cd);
  }
  if (param_4[8] == 0x14) {
    iVar5 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00801480 + (iVar5 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar5 + 0x41U) & 0x1f))
        == 0) {
      iVar5 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00800f10 + (iVar5 + 0x41U >> 5) * 4) & 1 << ((byte)(iVar5 + 0x41U) & 0x1f)
          ) == 0) {
        iVar5 = (**(code **)(*param_4 + 0x2c))();
        if ((*(uint *)(&DAT_00801450 + (iVar5 + 0x41U >> 5) * 4) &
            1 << ((byte)(iVar5 + 0x41U) & 0x1f)) == 0) goto LAB_0042f42f;
        iVar5 = (char)param_1 * 0xa62;
        *(int *)(&DAT_007f4e53 + iVar5) = *(int *)(&DAT_007f4e53 + iVar5) + -1;
      }
      else {
        iVar5 = (char)param_1 * 0xa62;
        *(int *)((int)&DAT_007f4e4f + iVar5) = *(int *)((int)&DAT_007f4e4f + iVar5) + -1;
      }
    }
    else {
      iVar5 = (char)param_1 * 0xa62;
      *(int *)((int)&DAT_007f4e4b + iVar5) = *(int *)((int)&DAT_007f4e4b + iVar5) + -1;
    }
    *(int *)(&DAT_007f4e57 + iVar5) = *(int *)(&DAT_007f4e57 + iVar5) + 1;
  }
LAB_0042f42f:
  if (param_4[8] == 1000) {
    iVar5 = (**(code **)(*param_4 + 0x2c))();
    if ((*(uint *)(&DAT_00800f90 + (iVar5 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar5 - 0x32U) & 0x1f))
        == 0) {
      iVar5 = (**(code **)(*param_4 + 0x2c))();
      if ((*(uint *)(&DAT_00801360 + (iVar5 - 0x32U >> 5) * 4) & 1 << ((byte)(iVar5 - 0x32U) & 0x1f)
          ) == 0) {
        iVar5 = (**(code **)(*param_4 + 0x2c))();
        if (((*(uint *)(&DAT_008014a0 + (iVar5 - 0x32U >> 5) * 4) &
             1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0) &&
           (iVar5 = (**(code **)(*param_4 + 0x2c))(),
           (*(uint *)(&DAT_00800f80 + (iVar5 - 0x32U >> 5) * 4) &
           1 << ((byte)(iVar5 - 0x32U) & 0x1f)) == 0)) goto LAB_0042f547;
        iVar5 = (char)param_1 * 0xa62;
        *(int *)(&DAT_007f4e63 + iVar5) = *(int *)(&DAT_007f4e63 + iVar5) + -1;
      }
      else {
        iVar5 = (char)param_1 * 0xa62;
        *(int *)(&DAT_007f4e5f + iVar5) = *(int *)(&DAT_007f4e5f + iVar5) + -1;
      }
    }
    else {
      iVar5 = (char)param_1 * 0xa62;
      *(int *)(&DAT_007f4e5b + iVar5) = *(int *)(&DAT_007f4e5b + iVar5) + -1;
    }
    *(int *)(&DAT_007f4e67 + iVar5) = *(int *)(&DAT_007f4e67 + iVar5) + 1;
  }
LAB_0042f547:
  pvVar2 = DAT_008016d4;
  if (param_4[8] == 0x14) {
    iVar5 = (char)param_1 * 0xa62;
    *(short *)(&DAT_007f4e2d + iVar5) = *(short *)(&DAT_007f4e2d + iVar5) + -1;
    if (pvVar2 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar2,(char)param_1,(uint)*(ushort *)(&DAT_007f4e2d + iVar5));
    }
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if (iVar6 != 0x19) {
      iVar6 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_00801000)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
        iVar6 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00801010)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
          iVar6 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00800f00)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
            iVar6 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00801370)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
              iVar6 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800fa0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0)
              {
                iVar6 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00800ff0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0
                   ) {
                  iVar6 = (**(code **)(*param_4 + 0x2c))();
                  if ((*(uint *)(&DAT_00801460 + (iVar6 + 0x41U >> 5) * 4) &
                      1 << ((byte)(iVar6 + 0x41U) & 0x1f)) == 0) {
                    iVar6 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800fe0)[iVar6 + 0x41U >> 5] & 1 << ((byte)(iVar6 + 0x41U) & 0x1f))
                        == 0) {
                      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x73c,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STAllPlayersC__UnRegisterObject_u_007a66dc);
                      if (iVar5 != 0) {
                        pcVar1 = (code *)swi(3);
                        uVar7 = (*pcVar1)();
                        return uVar7;
                      }
                    }
                    else {
                      *(int *)(&DAT_007f4edb + iVar5) = *(int *)(&DAT_007f4edb + iVar5) + -1;
                      if ((param_5 != 0xfe) &&
                         (*(int *)(&DAT_007f4ee3 + iVar5) = *(int *)(&DAT_007f4ee3 + iVar5) + 1,
                         param_5 != 0xff)) {
                        *(int *)(&DAT_007f4ee7 + param_5 * 0xa62) =
                             *(int *)(&DAT_007f4ee7 + param_5 * 0xa62) + 1;
                      }
                    }
                  }
                  else {
                    *(int *)(&DAT_007f4ecb + iVar5) = *(int *)(&DAT_007f4ecb + iVar5) + -1;
                    if ((param_5 != 0xfe) &&
                       (*(int *)(&DAT_007f4ed3 + iVar5) = *(int *)(&DAT_007f4ed3 + iVar5) + 1,
                       param_5 != 0xff)) {
                      *(int *)(&DAT_007f4ed7 + param_5 * 0xa62) =
                           *(int *)(&DAT_007f4ed7 + param_5 * 0xa62) + 1;
                    }
                  }
                }
                else {
                  *(int *)(&DAT_007f4ebb + iVar5) = *(int *)(&DAT_007f4ebb + iVar5) + -1;
                  if ((param_5 != 0xfe) &&
                     (*(int *)(&DAT_007f4ec3 + iVar5) = *(int *)(&DAT_007f4ec3 + iVar5) + 1,
                     param_5 != 0xff)) {
                    *(int *)(&DAT_007f4ec7 + param_5 * 0xa62) =
                         *(int *)(&DAT_007f4ec7 + param_5 * 0xa62) + 1;
                  }
                }
              }
              else {
                *(int *)(&DAT_007f4eab + iVar5) = *(int *)(&DAT_007f4eab + iVar5) + -1;
                if ((param_5 != 0xfe) &&
                   (*(int *)(&DAT_007f4eb3 + iVar5) = *(int *)(&DAT_007f4eb3 + iVar5) + 1,
                   param_5 != 0xff)) {
                  *(int *)(&DAT_007f4eb7 + param_5 * 0xa62) =
                       *(int *)(&DAT_007f4eb7 + param_5 * 0xa62) + 1;
                }
              }
            }
            else {
              *(int *)(&DAT_007f4e9b + iVar5) = *(int *)(&DAT_007f4e9b + iVar5) + -1;
              if ((param_5 != 0xfe) &&
                 (*(int *)(&DAT_007f4ea3 + iVar5) = *(int *)(&DAT_007f4ea3 + iVar5) + 1,
                 param_5 != 0xff)) {
                *(int *)(&DAT_007f4ea7 + param_5 * 0xa62) =
                     *(int *)(&DAT_007f4ea7 + param_5 * 0xa62) + 1;
              }
            }
          }
          else {
            *(int *)(&DAT_007f4e8b + iVar5) = *(int *)(&DAT_007f4e8b + iVar5) + -1;
            if ((param_5 != 0xfe) &&
               (*(int *)(&DAT_007f4e93 + iVar5) = *(int *)(&DAT_007f4e93 + iVar5) + 1,
               param_5 != 0xff)) {
              *(int *)(&DAT_007f4e97 + param_5 * 0xa62) =
                   *(int *)(&DAT_007f4e97 + param_5 * 0xa62) + 1;
            }
          }
        }
        else {
          *(int *)(&DAT_007f4e7b + iVar5) = *(int *)(&DAT_007f4e7b + iVar5) + -1;
          if ((param_5 != 0xfe) &&
             (*(int *)(&DAT_007f4e83 + iVar5) = *(int *)(&DAT_007f4e83 + iVar5) + 1, param_5 != 0xff
             )) {
            *(int *)(&DAT_007f4e87 + param_5 * 0xa62) =
                 *(int *)(&DAT_007f4e87 + param_5 * 0xa62) + 1;
          }
        }
      }
      else {
        *(int *)(&DAT_007f4e6b + iVar5) = *(int *)(&DAT_007f4e6b + iVar5) + -1;
        if ((param_5 != 0xfe) &&
           (*(int *)(&DAT_007f4e73 + iVar5) = *(int *)(&DAT_007f4e73 + iVar5) + 1, param_5 != 0xff))
        {
          *(int *)(&DAT_007f4e77 + param_5 * 0xa62) = *(int *)(&DAT_007f4e77 + param_5 * 0xa62) + 1;
        }
      }
    }
  }
  pvVar2 = DAT_008016d4;
  if (param_4[8] == 1000) {
    iVar5 = (char)param_1 * 0xa62;
    *(short *)(&DAT_007f4e2d + iVar5) = *(short *)(&DAT_007f4e2d + iVar5) + -1;
    if (pvVar2 != (void *)0x0) {
      thunk_FUN_0052bda0(pvVar2,(char)param_1,(uint)*(ushort *)(&DAT_007f4e2d + iVar5));
    }
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if (iVar6 == 0x33) {
      *(int *)(&DAT_007f4f7b + iVar5) = *(int *)(&DAT_007f4f7b + iVar5) + -1;
    }
    else if (iVar6 == 0x62) {
      *(int *)(&DAT_007f4f7f + iVar5) = *(int *)(&DAT_007f4f7f + iVar5) + -1;
    }
    iVar6 = (**(code **)(*param_4 + 0x2c))();
    if (((&DAT_00801420)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
      iVar6 = (**(code **)(*param_4 + 0x2c))();
      if (((&DAT_008013e0)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
        iVar6 = (**(code **)(*param_4 + 0x2c))();
        if (((&DAT_00800ee0)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
          iVar6 = (**(code **)(*param_4 + 0x2c))();
          if (((&DAT_00801490)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
            iVar6 = (**(code **)(*param_4 + 0x2c))();
            if (((&DAT_00800f20)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0) {
              iVar6 = (**(code **)(*param_4 + 0x2c))();
              if (((&DAT_00800ef0)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0)
              {
                iVar6 = (**(code **)(*param_4 + 0x2c))();
                if (((&DAT_00801430)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) == 0
                   ) {
                  iVar6 = (**(code **)(*param_4 + 0x2c))();
                  if (((&DAT_00801440)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f)) ==
                      0) {
                    iVar6 = (**(code **)(*param_4 + 0x2c))();
                    if (((&DAT_00800f60)[iVar6 - 0x32U >> 5] & 1 << ((byte)(iVar6 - 0x32U) & 0x1f))
                        == 0) {
                      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x797,0,0,
                                                 &DAT_007a4ccc,
                                                 s_STAllPlayersC__UnRegisterObject_u_007a669c);
                      if (iVar5 != 0) {
                        pcVar1 = (code *)swi(3);
                        uVar7 = (*pcVar1)();
                        return uVar7;
                      }
                    }
                    else {
                      *(int *)(&DAT_007f4f6b + iVar5) = *(int *)(&DAT_007f4f6b + iVar5) + -1;
                      if ((param_5 != 0xfe) &&
                         (*(int *)(&DAT_007f4f73 + iVar5) = *(int *)(&DAT_007f4f73 + iVar5) + 1,
                         param_5 != 0xff)) {
                        *(int *)(&DAT_007f4f77 + param_5 * 0xa62) =
                             *(int *)(&DAT_007f4f77 + param_5 * 0xa62) + 1;
                      }
                    }
                  }
                  else {
                    *(int *)(&DAT_007f4f5b + iVar5) = *(int *)(&DAT_007f4f5b + iVar5) + -1;
                    if ((param_5 != 0xfe) &&
                       (*(int *)(&DAT_007f4f63 + iVar5) = *(int *)(&DAT_007f4f63 + iVar5) + 1,
                       param_5 != 0xff)) {
                      *(int *)(&DAT_007f4f67 + param_5 * 0xa62) =
                           *(int *)(&DAT_007f4f67 + param_5 * 0xa62) + 1;
                    }
                  }
                }
                else {
                  *(int *)(&DAT_007f4f4b + iVar5) = *(int *)(&DAT_007f4f4b + iVar5) + -1;
                  if ((param_5 != 0xfe) &&
                     (*(int *)(&DAT_007f4f53 + iVar5) = *(int *)(&DAT_007f4f53 + iVar5) + 1,
                     param_5 != 0xff)) {
                    *(int *)(&DAT_007f4f57 + param_5 * 0xa62) =
                         *(int *)(&DAT_007f4f57 + param_5 * 0xa62) + 1;
                  }
                }
              }
              else {
                *(int *)(&DAT_007f4f3b + iVar5) = *(int *)(&DAT_007f4f3b + iVar5) + -1;
                if ((param_5 != 0xfe) &&
                   (*(int *)(&DAT_007f4f43 + iVar5) = *(int *)(&DAT_007f4f43 + iVar5) + 1,
                   param_5 != 0xff)) {
                  *(int *)(&DAT_007f4f47 + param_5 * 0xa62) =
                       *(int *)(&DAT_007f4f47 + param_5 * 0xa62) + 1;
                }
              }
            }
            else {
              *(int *)(&DAT_007f4f2b + iVar5) = *(int *)(&DAT_007f4f2b + iVar5) + -1;
              if ((param_5 != 0xfe) &&
                 (*(int *)(&DAT_007f4f33 + iVar5) = *(int *)(&DAT_007f4f33 + iVar5) + 1,
                 param_5 != 0xff)) {
                *(int *)(&DAT_007f4f37 + param_5 * 0xa62) =
                     *(int *)(&DAT_007f4f37 + param_5 * 0xa62) + 1;
              }
            }
          }
          else {
            *(int *)(&DAT_007f4f1b + iVar5) = *(int *)(&DAT_007f4f1b + iVar5) + -1;
            if ((param_5 != 0xfe) &&
               (*(int *)(&DAT_007f4f23 + iVar5) = *(int *)(&DAT_007f4f23 + iVar5) + 1,
               param_5 != 0xff)) {
              *(int *)(&DAT_007f4f27 + param_5 * 0xa62) =
                   *(int *)(&DAT_007f4f27 + param_5 * 0xa62) + 1;
            }
          }
        }
        else {
          *(int *)(&DAT_007f4f0b + iVar5) = *(int *)(&DAT_007f4f0b + iVar5) + -1;
          if ((param_5 != 0xfe) &&
             (*(int *)(&DAT_007f4f13 + iVar5) = *(int *)(&DAT_007f4f13 + iVar5) + 1, param_5 != 0xff
             )) {
            *(int *)(&DAT_007f4f17 + param_5 * 0xa62) =
                 *(int *)(&DAT_007f4f17 + param_5 * 0xa62) + 1;
          }
        }
      }
      else {
        *(int *)(&DAT_007f4efb + iVar5) = *(int *)(&DAT_007f4efb + iVar5) + -1;
        if ((param_5 != 0xfe) &&
           (*(int *)(&DAT_007f4f03 + iVar5) = *(int *)(&DAT_007f4f03 + iVar5) + 1, param_5 != 0xff))
        {
          *(int *)(&DAT_007f4f07 + param_5 * 0xa62) = *(int *)(&DAT_007f4f07 + param_5 * 0xa62) + 1;
        }
      }
    }
    else {
      *(int *)(&DAT_007f4eeb + iVar5) = *(int *)(&DAT_007f4eeb + iVar5) + -1;
      if ((param_5 != 0xfe) &&
         (*(int *)(&DAT_007f4ef3 + iVar5) = *(int *)(&DAT_007f4ef3 + iVar5) + 1, param_5 != 0xff)) {
        *(int *)(&DAT_007f4ef7 + param_5 * 0xa62) = *(int *)(&DAT_007f4ef7 + param_5 * 0xa62) + 1;
      }
    }
  }
  this_00 = local_18;
  piVar8 = (int *)GetObjPtr(local_18,param_1,param_3,CASE_1);
  if (piVar8 != param_4) {
    RaiseInternalException
              (-0x5001fff9,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x7a3);
  }
  if ((short)param_2 != -1) {
    local_10 = thunk_FUN_0042b760(param_1,param_2);
    if (local_10 == (STGroupBoatC *)0x0) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x7a5);
    }
    iVar5 = thunk_FUN_004237d0(local_10,(short)param_3);
    if (iVar5 == 0) {
      RaiseInternalException
                (-0x5001fffd,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x7a6);
    }
  }
  thunk_FUN_00440820(param_1,param_3);
  DelObjFromTmps(this_00,DAT_0080874d,param_4[8],param_1,param_3);
  DelObjFromSaveTmps(this_00,param_4[8],(char)param_1,(short)param_3);
  pSVar3 = local_10;
  puVar9 = local_14;
  uVar10 = param_3;
  if ((short)param_2 != -1) {
    (*local_10->vtable->vfunc_04)(param_3);
    Library::DKW::TBL::FUN_006ae140(local_14,param_3 & 0xffff,&local_c);
    sVar4 = thunk_FUN_004233c0((int)pSVar3);
    if ((sVar4 != 0) || (iVar5 = thunk_FUN_004233a0((int)pSVar3), iVar5 != 0)) goto LAB_00430018;
    thunk_FUN_0054cf70(DAT_00802a38,*(uint *)&pSVar3->field_0x8);
    puVar9 = local_1c;
    uVar10 = param_2;
  }
  Library::DKW::TBL::FUN_006ae140(puVar9,uVar10 & 0xffff,&local_c);
LAB_00430018:
  iVar5 = (**(code **)(*param_4 + 0x2c))();
  puVar9 = local_20;
  if ((iVar5 == 0x1d) && (local_20 != (uint *)0x0)) {
    local_24 = local_20[3];
    uVar10 = 0;
    if (0 < (int)local_24) {
      while( true ) {
        FUN_006acc70((int)puVar9,uVar10,&local_8);
        if ((short)local_8 == (short)param_3) break;
        uVar10 = uVar10 + 1;
        if ((int)local_24 <= (int)uVar10) {
          g_currentExceptionFrame = local_68.previous;
          return 0;
        }
      }
      local_8 = 0xffff;
      Library::DKW::TBL::FUN_006ae140(puVar9,uVar10,&local_8);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}



void __fastcall FUN_0067a390(void *param_1)

{
  short sVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  Global_sub_0043E640_param_2Enum GVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint local_74 [3];
  undefined4 *local_68;
  undefined4 local_40 [3];
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)((int)param_1 + 0x650) != 0) &&
     (*(uint *)((int)param_1 + 0x6fe) <
      (uint)(*(int *)((int)param_1 + 0x654) + *(int *)((int)param_1 + 0x650)))) {
    return;
  }
  *(undefined4 *)((int)param_1 + 0x654) = *(undefined4 *)((int)param_1 + 0x6fe);
  thunk_FUN_00679600(param_1);
  if (DAT_007fa174 == (void *)0x0) {
    return;
  }
  if (*(short *)((int)param_1 + 0x5ec) != 3) {
    iVar4 = thunk_FUN_004b71c0(*(char *)((int)param_1 + 0x5d7));
    iVar5 = thunk_FUN_004b72b0(*(char *)((int)param_1 + 0x5d7));
    if ((iVar4 <= iVar5) && (0 < iVar5)) {
      uVar2 = *(undefined4 *)((int)param_1 + 0x6fe);
      puVar9 = local_74;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_74[0] = 0x6f;
      local_68 = (undefined4 *)0x50;
      local_74[1] = uVar2;
      thunk_FUN_0067a020(param_1,local_74,-1);
      iVar4 = thunk_FUN_00676260(*(uint *)((int)param_1 + 0x5d7),0x50);
      if ((int)(iVar4 + local_74[2]) < iVar5 / 0x28 + 1) {
        puVar7 = local_40;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        puVar9 = local_74;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        local_74[1] = *(undefined4 *)((int)param_1 + 0x6fe);
        local_68 = local_40;
        iVar4 = *(int *)((int)param_1 + 0x695);
        local_40[0] = 0x50;
        local_34 = 0x31;
        local_2c = 0xff;
        local_74[0] = 0x70;
        uVar10 = *(uint *)(iVar4 + 0xc);
        uVar8 = 0;
        if (0 < (int)uVar10) {
          do {
            if (((iVar4 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar10)) {
              if (uVar8 < uVar10) {
                puVar7 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c));
              }
              else {
                puVar7 = (undefined4 *)0x0;
              }
              if (((puVar7[1] != 0) && ((AiTactClassTy *)*puVar7 != (AiTactClassTy *)0x0)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                AiTactClassTy::GetAiMess((AiTactClassTy *)*puVar7,local_74);
              }
            }
            if (0 < (int)local_74[2]) break;
            iVar4 = *(int *)((int)param_1 + 0x695);
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(iVar4 + 0xc);
          } while ((int)uVar8 < (int)uVar10);
        }
      }
    }
    uVar10 = *(int *)((int)param_1 + 0xa4) * 0x41c64e6d + 0x3039;
    *(uint *)((int)param_1 + 0xa4) = uVar10;
    if (((uVar10 >> 0x10) % 0x5dd + 0x1d4c < *(uint *)((int)param_1 + 0x6fe)) &&
       (local_10 = thunk_FUN_004de4f0(DAT_007fa174,*(int *)((int)param_1 + 0x5d7)), 0 < local_10)) {
      uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),0x34,0,-1);
      puVar9 = local_74;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_74[1] = *(undefined4 *)((int)param_1 + 0x6fe);
      local_74[0] = 0x6f;
      local_68 = (undefined4 *)0x34;
      thunk_FUN_0067a020(param_1,local_74,-1);
      iVar4 = thunk_FUN_00676260(*(uint *)((int)param_1 + 0x5d7),0x34);
      if ((int)(iVar4 + local_74[2]) < (int)((uint)uVar3 + local_10)) {
        local_74[1] = *(undefined4 *)((int)param_1 + 0x6fe);
        puVar7 = local_40;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        puVar9 = local_74;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        local_68 = local_40;
        local_40[0] = 0x34;
        iVar4 = *(int *)((int)param_1 + 0x695);
        local_34 = 0x19;
        local_2c = 0xff;
        local_74[0] = 0x70;
        uVar10 = *(uint *)(iVar4 + 0xc);
        uVar8 = 0;
        if (0 < (int)uVar10) {
          do {
            if (((iVar4 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar10)) {
              if (uVar8 < uVar10) {
                puVar7 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c));
              }
              else {
                puVar7 = (undefined4 *)0x0;
              }
              if (((puVar7[1] != 0) && ((AiTactClassTy *)*puVar7 != (AiTactClassTy *)0x0)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                AiTactClassTy::GetAiMess((AiTactClassTy *)*puVar7,local_74);
              }
            }
            if (0 < (int)local_74[2]) break;
            iVar4 = *(int *)((int)param_1 + 0x695);
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(iVar4 + 0xc);
          } while ((int)uVar8 < (int)uVar10);
        }
      }
    }
    uVar10 = *(int *)((int)param_1 + 0xa4) * 0x41c64e6d + 0x3039;
    *(uint *)((int)param_1 + 0xa4) = uVar10;
    if (((uVar10 >> 0x10) % 0x5dd + 0x1d4c < *(uint *)((int)param_1 + 0x6fe)) &&
       (local_10 = thunk_FUN_004dfc70(DAT_007fa174,*(int **)((int)param_1 + 0x5d7)), 0 < local_10))
    {
      uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),0x48,0,-1);
      puVar9 = local_74;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_74[1] = *(undefined4 *)((int)param_1 + 0x6fe);
      local_74[0] = 0x6f;
      local_68 = (undefined4 *)0x48;
      thunk_FUN_0067a020(param_1,local_74,-1);
      iVar4 = thunk_FUN_00676260(*(uint *)((int)param_1 + 0x5d7),0x48);
      if ((int)(iVar4 + local_74[2]) < (int)((uint)uVar3 + local_10)) {
        local_74[1] = *(undefined4 *)((int)param_1 + 0x6fe);
        puVar7 = local_40;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        local_40[1] = 0;
        local_2e = 0xffff;
        local_30 = 0xffff;
        local_32 = 0xffff;
        puVar9 = local_74;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        local_68 = local_40;
        local_40[0] = 0x48;
        iVar4 = *(int *)((int)param_1 + 0x695);
        local_34 = 0x19;
        local_2c = 0xff;
        local_74[0] = 0x70;
        uVar10 = *(uint *)(iVar4 + 0xc);
        uVar8 = 0;
        if (0 < (int)uVar10) {
          do {
            if (((iVar4 != 0) && (-1 < (int)uVar8)) && ((int)uVar8 < (int)uVar10)) {
              if (uVar8 < uVar10) {
                puVar7 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c));
              }
              else {
                puVar7 = (undefined4 *)0x0;
              }
              if (((puVar7[1] != 0) && ((AiTactClassTy *)*puVar7 != (AiTactClassTy *)0x0)) &&
                 (&stack0x00000000 != (undefined1 *)0x74)) {
                AiTactClassTy::GetAiMess((AiTactClassTy *)*puVar7,local_74);
              }
            }
            if (0 < (int)local_74[2]) break;
            iVar4 = *(int *)((int)param_1 + 0x695);
            uVar8 = uVar8 + 1;
            uVar10 = *(uint *)(iVar4 + 0xc);
          } while ((int)uVar8 < (int)uVar10);
        }
      }
    }
  }
  if (DAT_007fa174 == (void *)0x0) {
    return;
  }
  if (*(short *)((int)param_1 + 0x5ec) != 3) {
    uVar10 = 0xffffffff;
    iVar4 = thunk_FUN_004e6fe0(*(int *)((int)param_1 + 0x5d7));
    local_8 = thunk_FUN_004d8870(*(char *)((int)param_1 + 0x5d7));
    local_10 = thunk_FUN_004d89b0(*(char *)((int)param_1 + 0x5d7));
    local_c = thunk_FUN_004d8af0(*(char *)((int)param_1 + 0x5d7));
    local_14 = ((iVar4 < 100) - 1 & 0xffffffce) + 0x32;
    iVar4 = ((iVar4 < 100) - 1 & 0xfffffe0c) + 500;
    if (local_10 < 0x32) {
      if (iVar4 < local_8) {
        sVar1 = *(short *)((int)param_1 + 0x5ec);
        if (sVar1 < 1) {
LAB_0067a8e6:
          GVar6 = 0;
        }
        else if (sVar1 < 3) {
          GVar6 = 0x52;
        }
        else {
          if (sVar1 != 3) goto LAB_0067a8e6;
          GVar6 = 0x5f;
        }
        uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
        uVar10 = (uint)uVar3;
        if (uVar10 != 0) {
          iVar5 = local_8;
          if (100 < local_8) {
            iVar5 = 100;
          }
          uVar8 = *(uint *)((int)param_1 + 0x5d7);
          iVar11 = 0xdc;
LAB_0067a9a0:
          thunk_FUN_004eb300(uVar8,iVar11,0xdd,iVar5);
        }
      }
      else if (2000 < local_c) {
        sVar1 = *(short *)((int)param_1 + 0x5ec);
        if (sVar1 < 1) {
LAB_0067a95b:
          GVar6 = 0;
        }
        else if (sVar1 < 3) {
          GVar6 = 0x52;
        }
        else {
          if (sVar1 != 3) goto LAB_0067a95b;
          GVar6 = 0x5f;
        }
        uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
        uVar10 = (uint)uVar3;
        if (uVar10 != 0) {
          iVar5 = local_c;
          if (500 < local_c) {
            iVar5 = 500;
          }
          uVar8 = *(uint *)((int)param_1 + 0x5d7);
          iVar11 = 0xde;
          goto LAB_0067a9a0;
        }
      }
    }
    iVar5 = local_10;
    if (local_c < 0x32) {
      if (iVar4 < local_8) {
        if ((int)uVar10 < 0) {
          sVar1 = *(short *)((int)param_1 + 0x5ec);
          if (sVar1 < 1) {
LAB_0067a9e7:
            GVar6 = 0;
          }
          else if (sVar1 < 3) {
            GVar6 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067a9e7;
            GVar6 = 0x5f;
          }
          uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
          uVar10 = (uint)uVar3;
        }
        iVar5 = local_10;
        if (uVar10 != 0) {
          iVar4 = local_8;
          if (100 < local_8) {
            iVar4 = 100;
          }
          thunk_FUN_004eb300(*(uint *)((int)param_1 + 0x5d7),0xdc,0xde,iVar4);
          iVar5 = local_10;
        }
      }
      else if (0x5dc < local_10) {
        if ((int)uVar10 < 0) {
          sVar1 = *(short *)((int)param_1 + 0x5ec);
          if (sVar1 < 1) {
LAB_0067aabb:
            GVar6 = 0;
          }
          else if (sVar1 < 3) {
            GVar6 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067aabb;
            GVar6 = 0x5f;
          }
          uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
          uVar10 = (uint)uVar3;
        }
        if (uVar10 != 0) {
          iVar4 = 500;
          if (iVar5 < 0x1f5) {
            iVar4 = iVar5;
          }
          thunk_FUN_004eb300(*(uint *)((int)param_1 + 0x5d7),0xdd,0xde,iVar4);
        }
      }
    }
    if (local_8 < local_14) {
      if (local_c < 0x7d1) {
        if (0x5dc < iVar5) {
          if ((int)uVar10 < 0) {
            sVar1 = *(short *)((int)param_1 + 0x5ec);
            if (sVar1 < 1) {
LAB_0067ab99:
              GVar6 = 0;
            }
            else if (sVar1 < 3) {
              GVar6 = 0x52;
            }
            else {
              if (sVar1 != 3) goto LAB_0067ab99;
              GVar6 = 0x5f;
            }
            uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
            uVar10 = (uint)uVar3;
          }
          if (uVar10 != 0) {
            iVar4 = 100;
            if (local_8 < 0x65) {
              iVar4 = local_8;
            }
            uVar10 = *(uint *)((int)param_1 + 0x5d7);
            iVar5 = 0xdd;
            goto LAB_0067abe0;
          }
        }
      }
      else {
        if ((int)uVar10 < 0) {
          sVar1 = *(short *)((int)param_1 + 0x5ec);
          if (sVar1 < 1) {
LAB_0067ab1d:
            GVar6 = 0;
          }
          else if (sVar1 < 3) {
            GVar6 = 0x52;
          }
          else {
            if (sVar1 != 3) goto LAB_0067ab1d;
            GVar6 = 0x5f;
          }
          uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
          uVar10 = (uint)uVar3;
        }
        if (uVar10 != 0) {
          iVar4 = local_c;
          if (500 < local_c) {
            iVar4 = 500;
          }
          uVar10 = *(uint *)((int)param_1 + 0x5d7);
          iVar5 = 0xde;
LAB_0067abe0:
          thunk_FUN_004eb300(uVar10,iVar5,0xdc,iVar4);
        }
      }
    }
  }
  if (DAT_007fa174 == (void *)0x0) {
    return;
  }
  if (*(short *)((int)param_1 + 0x5ec) != 3) {
    return;
  }
  uVar10 = 0xffffffff;
  iVar4 = thunk_FUN_004e6fe0(*(int *)((int)param_1 + 0x5d7));
  local_10 = thunk_FUN_004e41c0(*(int *)((int)param_1 + 0x5d7));
  local_8 = thunk_FUN_004d89b0(*(char *)((int)param_1 + 0x5d7));
  local_c = thunk_FUN_004e4410(*(int *)((int)param_1 + 0x5d7));
  iVar4 = ((iVar4 < 100) - 1 & 0xfffffc18) + 3000;
  if (local_8 < 0x32) {
    if (iVar4 < local_10) {
      sVar1 = *(short *)((int)param_1 + 0x5ec);
      if (sVar1 < 1) {
LAB_0067aca0:
        GVar6 = 0;
      }
      else if (sVar1 < 3) {
        GVar6 = 0x52;
      }
      else {
        if (sVar1 != 3) goto LAB_0067aca0;
        GVar6 = 0x5f;
      }
      uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
      uVar10 = (uint)uVar3;
      if (uVar10 != 0) {
        iVar5 = local_10;
        if (1000 < local_10) {
          iVar5 = 1000;
        }
        uVar8 = *(uint *)((int)param_1 + 0x5d7);
        iVar11 = 0xe3;
LAB_0067ad5c:
        thunk_FUN_004eb300(uVar8,iVar11,0xdd,iVar5);
      }
    }
    else if (0x9c4 < local_c) {
      sVar1 = *(short *)((int)param_1 + 0x5ec);
      if (sVar1 < 1) {
LAB_0067ad17:
        GVar6 = 0;
      }
      else if (sVar1 < 3) {
        GVar6 = 0x52;
      }
      else {
        if (sVar1 != 3) goto LAB_0067ad17;
        GVar6 = 0x5f;
      }
      uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
      uVar10 = (uint)uVar3;
      if (uVar10 != 0) {
        iVar5 = local_c;
        if (1000 < local_c) {
          iVar5 = 1000;
        }
        uVar8 = *(uint *)((int)param_1 + 0x5d7);
        iVar11 = 0xe2;
        goto LAB_0067ad5c;
      }
    }
  }
  iVar5 = local_8;
  if (0x31 < local_c) {
    return;
  }
  if (local_10 <= iVar4) {
    if (local_8 < 0x5dd) {
      return;
    }
    if (-1 < (int)uVar10) goto LAB_0067ae56;
    sVar1 = *(short *)((int)param_1 + 0x5ec);
    if (sVar1 < 1) {
LAB_0067ae32:
      GVar6 = 0;
    }
    else if (sVar1 < 3) {
      GVar6 = 0x52;
    }
    else {
      if (sVar1 != 3) goto LAB_0067ae32;
      GVar6 = 0x5f;
    }
    uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
    uVar10 = (uint)uVar3;
LAB_0067ae56:
    if (uVar10 == 0) {
      return;
    }
    iVar4 = 700;
    if (iVar5 < 0x2bd) {
      iVar4 = iVar5;
    }
    thunk_FUN_004eb300(*(uint *)((int)param_1 + 0x5d7),0xdd,0xe2,iVar4);
    return;
  }
  if (-1 < (int)uVar10) goto LAB_0067adca;
  sVar1 = *(short *)((int)param_1 + 0x5ec);
  if (sVar1 < 1) {
LAB_0067ada3:
    GVar6 = 0;
  }
  else if (sVar1 < 3) {
    GVar6 = 0x52;
  }
  else {
    if (sVar1 != 3) goto LAB_0067ada3;
    GVar6 = 0x5f;
  }
  uVar3 = thunk_FUN_0043e640(*(char *)((int)param_1 + 0x5d7),GVar6,0,-1);
  uVar10 = (uint)uVar3;
LAB_0067adca:
  if (uVar10 == 0) {
    return;
  }
  iVar4 = local_10;
  if (1000 < local_10) {
    iVar4 = 1000;
  }
  thunk_FUN_004eb300(*(uint *)((int)param_1 + 0x5d7),0xe3,0xe2,iVar4);
  return;
}


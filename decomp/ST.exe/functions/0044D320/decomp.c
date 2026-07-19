
undefined2 * FUN_0044d320(uint param_1)

{
  short sVar1;
  uint uVar2;
  undefined2 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  uint local_18;
  int local_14;
  int local_10;
  STAllPlayersC *local_c;
  int local_8;
  
  uVar2 = param_1;
  local_8 = 0;
  local_14 = *(int *)((int)&DAT_007f4f8d + (uint)DAT_0080874d * 0xa62);
  local_10 = *(int *)(local_14 + 0xc);
  puVar3 = (undefined2 *)Library::DKW::LIB::FUN_006aac70(0xc);
  if (param_1 < 0x1001) {
    if (param_1 == 0x1000) {
      *puVar3 = 0x201;
      puVar3[1] = 0x300;
      puVar3[2] = 0x101;
      puVar3[3] = 0x400;
      puVar3[4] = 0x2f01;
      puVar3[5] = 0xb01;
    }
    else if (param_1 < 0x41) {
      if (param_1 == 0x40) {
        *puVar3 = 0x201;
        puVar3[1] = 0x301;
        puVar3[2] = 0x101;
        puVar3[3] = 0x400;
        puVar3[4] = 0x2f01;
        puVar3[5] = 0x900;
      }
      else {
        switch(param_1) {
        case 1:
          *puVar3 = 0x201;
          puVar3[1] = 0x301;
          puVar3[2] = 0x101;
          puVar3[3] = 0x400;
          puVar3[4] = 0x2f01;
          puVar3[5] = 0x701;
          break;
        case 2:
        case 4:
        case 8:
          *puVar3 = 0x201;
          puVar3[1] = 0x301;
          puVar3[2] = 0x101;
          puVar3[3] = 0x400;
          puVar3[4] = 0x2f01;
          puVar3[5] = 0x800;
          break;
        default:
          goto switchD_0044d3a8_caseD_3;
        case 0x10:
          *puVar3 = 0x201;
          puVar3[1] = 0x301;
          puVar3[2] = 0x101;
          puVar3[3] = 0x400;
          puVar3[4] = 0x2f01;
          puVar3[5] = 0xa01;
          break;
        case 0x28:
          *puVar3 = 0x201;
          puVar3[1] = 0x301;
          puVar3[2] = 0x101;
          puVar3[3] = 0x400;
          puVar3[4] = 0x2f01;
          puVar3[5] = 0xb01;
        }
      }
    }
    else if (param_1 < 0x201) {
      if (param_1 == 0x200) {
        *puVar3 = 0x201;
        puVar3[1] = 0x1101;
        puVar3[2] = 0x101;
        puVar3[3] = 0x400;
        puVar3[4] = 0x2f01;
        puVar3[5] = 0x1201;
      }
      else {
        if ((param_1 != 0x80) && (param_1 != 0x100)) {
          return puVar3;
        }
        *puVar3 = 0x201;
        puVar3[1] = 0x301;
        puVar3[2] = 0x101;
        puVar3[3] = 0;
        puVar3[4] = 0x2f01;
        puVar3[5] = 1;
      }
    }
    else if (param_1 == 0x400) {
      *puVar3 = 0x201;
      puVar3[1] = 0xd01;
      puVar3[2] = 0x101;
      puVar3[3] = 0x400;
      puVar3[4] = 0x2f01;
      puVar3[5] = 0x1301;
    }
    else {
      if (param_1 != 0x800) {
        return puVar3;
      }
      *puVar3 = 0x201;
      puVar3[1] = 0xe01;
      puVar3[2] = 0x101;
      puVar3[3] = 0x400;
      puVar3[4] = 0x2f01;
      puVar3[5] = 0x1001;
    }
    goto LAB_0044d710;
  }
  if (param_1 < 0x100001) {
    if (param_1 == 0x100000) {
      *puVar3 = 0x201;
      puVar3[1] = 0x1001;
      goto LAB_0044d6f8;
    }
    if (param_1 < 0x20001) {
      if (param_1 == 0x20000) {
        *puVar3 = 0x201;
        puVar3[1] = 0x1101;
        puVar3[2] = 0x101;
        puVar3[3] = 0x4800;
        puVar3[4] = 0x2f01;
        puVar3[5] = 0x1201;
      }
      else if (param_1 == 0x2000) {
        *puVar3 = 0x201;
        puVar3[1] = 0x301;
        puVar3[2] = 0x101;
        puVar3[3] = 0x400;
        puVar3[4] = 0x2f01;
        puVar3[5] = 0x601;
      }
      else {
        if (param_1 != 0x10000) {
          return puVar3;
        }
        *puVar3 = 0x201;
        puVar3[1] = 0x301;
        puVar3[2] = 0x101;
        puVar3[3] = 0x4800;
        puVar3[4] = 0x2f01;
        puVar3[5] = 0x701;
      }
    }
    else {
      if (param_1 == 0x40000) {
        *puVar3 = 0x201;
        puVar3[1] = 0xe01;
        goto LAB_0044d6d7;
      }
      if (param_1 != 0x80000) {
        return puVar3;
      }
      *puVar3 = 0x201;
      puVar3[1] = 0x301;
      puVar3[2] = 0x101;
      puVar3[3] = 0x4800;
      puVar3[4] = 0x2f01;
      puVar3[5] = 0x4900;
    }
  }
  else {
    if (param_1 < 0x800001) {
      if (param_1 == 0x800000) {
LAB_0044d6cc:
        *puVar3 = 0x201;
        puVar3[1] = 0x301;
LAB_0044d6d7:
        puVar3[2] = 0x101;
        puVar3[3] = 0x4800;
        puVar3[4] = 0x2f01;
        puVar3[5] = 1;
        goto LAB_0044d710;
      }
      if (param_1 != 0x200000) {
        if (param_1 != 0x400000) {
          return puVar3;
        }
        *puVar3 = 0x201;
        puVar3[1] = 0x301;
        puVar3[2] = 0x101;
        puVar3[3] = 0x4800;
        puVar3[4] = 0x2f01;
        puVar3[5] = 0x800;
        goto LAB_0044d710;
      }
      *puVar3 = 0x201;
      puVar3[1] = 0x1301;
    }
    else {
      if (param_1 != 0x1000000) {
        if (param_1 != 0x2000000) {
          return puVar3;
        }
        goto LAB_0044d6cc;
      }
      *puVar3 = 0x201;
      puVar3[1] = 1;
    }
LAB_0044d6f8:
    puVar3[2] = 0x101;
    puVar3[3] = 0x4800;
    puVar3[4] = 0x2f01;
    puVar3[5] = 0x1800;
  }
LAB_0044d710:
  param_1 = 0;
  if (0 < local_10) {
    do {
      FUN_006acc70(local_14,param_1,&local_18);
      if (((short)local_18 != -1) &&
         (piVar4 = (int *)STAllPlayersC::GetObjPtr
                                    (local_c,CONCAT31((int3)((uint)extraout_ECX >> 8),DAT_0080874d),
                                     local_18,1), piVar4 != (int *)0x0)) {
        if (uVar2 < 0x1001) {
          if (uVar2 == 0x1000) {
switchD_0044d78f_caseD_28:
            iVar5 = (**(code **)(*piVar4 + 0x2c))();
            if ((iVar5 == 0x16) || (iVar5 == 0x25)) {
              local_8 = 1;
              if ((*(char *)(puVar3 + 3) == '\0') &&
                 ((iVar5 = thunk_FUN_00486b40((int)piVar4), 0 < iVar5 &&
                  (*(short *)(&DAT_007f4f7b + (char)piVar4[9] * 0xa62) != 0)))) {
                puVar3[3] = 0x401;
              }
              if ((*(char *)((int)puVar3 + 0xb) == '\v') && (*(int *)((int)piVar4 + 0x732) == 1)) {
                puVar3[5] = 0xc01;
              }
            }
          }
          else if (uVar2 < 0x41) {
            if (uVar2 == 0x40) {
              iVar5 = (**(code **)(*piVar4 + 0x2c))();
              if (iVar5 == 4) {
                local_8 = 1;
                if (((*(char *)(puVar3 + 3) == '\0') &&
                    (iVar5 = thunk_FUN_00486b40((int)piVar4), 0 < iVar5)) &&
                   (*(short *)(&DAT_007f4f7b + (char)piVar4[9] * 0xa62) != 0)) {
                  puVar3[3] = 0x401;
                }
                if ((*(char *)(puVar3 + 5) == '\0') && (0 < *(int *)((int)piVar4 + 0x7be))) {
                  puVar3[5] = 0x901;
                }
              }
            }
            else {
              switch(uVar2) {
              case 1:
                iVar5 = (**(code **)(*piVar4 + 0x2c))();
                if ((iVar5 == 6) || (iVar5 == 0x12)) {
                  local_8 = 1;
                  iVar5 = thunk_FUN_00486b40((int)piVar4);
                  if (0 < iVar5) {
                    sVar1 = *(short *)(&DAT_007f4f7b + (char)piVar4[9] * 0xa62);
joined_r0x0044d9f5:
                    if (sVar1 != 0) {
                      puVar3[3] = 0x401;
                      return puVar3;
                    }
                  }
                }
                break;
              case 2:
              case 4:
              case 8:
                iVar5 = (**(code **)(*piVar4 + 0x2c))();
                if (((iVar5 == 5) || (iVar5 == 0xb)) || (iVar5 == 0x11)) {
                  local_8 = 1;
                  if (((*(char *)(puVar3 + 3) == '\0') &&
                      (iVar5 = thunk_FUN_00486b40((int)piVar4), 0 < iVar5)) &&
                     (*(short *)(&DAT_007f4f7b + (char)piVar4[9] * 0xa62) != 0)) {
                    puVar3[3] = 0x401;
                  }
LAB_0044dc25:
                  if ((*(char *)(puVar3 + 5) == '\0') && (0 < *(int *)((int)piVar4 + 0x7be))) {
                    puVar3[5] = 0x801;
                  }
                }
                break;
              case 0x10:
                iVar5 = (**(code **)(*piVar4 + 0x2c))();
                if (iVar5 == 0x17) {
                  local_8 = 1;
                  iVar5 = thunk_FUN_00486b40((int)piVar4);
                  if (0 < iVar5) {
                    sVar1 = *(short *)(&DAT_007f4f7b + (char)piVar4[9] * 0xa62);
                    goto joined_r0x0044d9f5;
                  }
                }
                break;
              case 0x28:
                goto switchD_0044d78f_caseD_28;
              }
            }
          }
          else if (uVar2 < 0x201) {
            if (uVar2 == 0x200) {
              iVar5 = (**(code **)(*piVar4 + 0x2c))();
              if ((iVar5 == 8) || (iVar5 == 0x14)) {
                local_8 = 1;
                iVar5 = thunk_FUN_00486b40((int)piVar4);
                if (0 < iVar5) {
                  sVar1 = *(short *)(&DAT_007f4f7b + (char)piVar4[9] * 0xa62);
                  goto joined_r0x0044d9f5;
                }
              }
            }
            else if ((uVar2 == 0x80) || (uVar2 == 0x100)) {
              iVar5 = (**(code **)(*piVar4 + 0x2c))();
              if (iVar5 == 9) {
                return puVar3;
              }
              if (iVar5 == 0x15) {
                return puVar3;
              }
            }
          }
          else if (uVar2 == 0x400) {
            iVar5 = (**(code **)(*piVar4 + 0x2c))();
            if ((iVar5 == 7) || (iVar5 == 0x13)) {
              local_8 = 1;
              if ((*(char *)(puVar3 + 3) == '\0') &&
                 ((iVar5 = thunk_FUN_00486b40((int)piVar4), 0 < iVar5 &&
                  (*(short *)(&DAT_007f4f7b + (char)piVar4[9] * 0xa62) != 0)))) {
                puVar3[3] = 0x401;
              }
              iVar5 = thunk_FUN_00492370((int)piVar4);
              if (iVar5 != 0) {
                puVar3[5] = 0x1401;
              }
            }
          }
          else if ((uVar2 == 0x800) &&
                  ((iVar5 = (**(code **)(*piVar4 + 0x2c))(), iVar5 == 0xc || (iVar5 == 0x18)))) {
LAB_0044d9c4:
            local_8 = 1;
            iVar5 = thunk_FUN_00486b40((int)piVar4);
            if (0 < iVar5) {
              sVar1 = *(short *)(&DAT_007f4f7b + (char)piVar4[9] * 0xa62);
              goto joined_r0x0044d9f5;
            }
          }
        }
        else if (uVar2 < 0x100001) {
          if (uVar2 == 0x100000) {
            iVar5 = (**(code **)(*piVar4 + 0x2c))();
            if (iVar5 == 0x1d) {
              local_8 = 1;
              iVar5 = thunk_FUN_004d6df0(piVar4);
              if (((0 < iVar5) && (iVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < iVar5)) &&
                 (*(short *)(&DAT_007f4f7f + (char)piVar4[9] * 0xa62) != 0)) {
                puVar3[3] = 0x4801;
              }
LAB_0044dcbe:
              iVar5 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x5f);
              if (0 < iVar5) {
                iVar5 = *(int *)((int)piVar4 + 0x71e);
joined_r0x0044ddc7:
                if (9 < iVar5) {
                  puVar3[5] = 0x1801;
                }
              }
            }
          }
          else {
            if (uVar2 < 0x20001) {
              if (uVar2 != 0x20000) {
                if (uVar2 == 0x2000) goto LAB_0044d9c4;
                if (uVar2 != 0x10000) goto switchD_0044d78f_caseD_3;
              }
            }
            else if ((uVar2 != 0x40000) && (uVar2 != 0x80000)) goto switchD_0044d78f_caseD_3;
LAB_0044dce3:
            uVar6 = (**(code **)(*piVar4 + 0x2c))();
            switch(uVar6) {
            case 0x19:
            case 0x1a:
            case 0x1c:
            case 0x22:
            case 0x23:
switchD_0044dcfe_caseD_19:
              local_8 = 1;
              iVar5 = thunk_FUN_004d6df0(piVar4);
              if (((0 < iVar5) && (iVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < iVar5)) &&
                 (*(short *)(&DAT_007f4f7f + (char)piVar4[9] * 0xa62) != 0)) {
                puVar3[3] = 0x4801;
                return puVar3;
              }
            }
          }
        }
        else if (uVar2 < 0x800001) {
          if (uVar2 == 0x800000) goto LAB_0044dce3;
          if (uVar2 == 0x200000) {
            iVar5 = (**(code **)(*piVar4 + 0x2c))();
            if (iVar5 == 0x1b) {
              local_8 = 1;
              iVar5 = thunk_FUN_004d6df0(piVar4);
              if (((0 < iVar5) && (iVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < iVar5)) &&
                 (*(short *)(&DAT_007f4f7f + (char)piVar4[9] * 0xa62) != 0)) {
                puVar3[3] = 0x4801;
              }
              iVar5 = thunk_FUN_00492370((int)piVar4);
              if (iVar5 != 0) {
                puVar3[1] = 0x1401;
              }
              goto LAB_0044dcbe;
            }
          }
          else if ((uVar2 == 0x400000) && (iVar5 = (**(code **)(*piVar4 + 0x2c))(), iVar5 == 0x21))
          {
            local_8 = 1;
            iVar5 = thunk_FUN_004d6df0(piVar4);
            if ((0 < iVar5) &&
               ((iVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < iVar5 &&
                (*(short *)(&DAT_007f4f7f + (char)piVar4[9] * 0xa62) != 0)))) {
              puVar3[3] = 0x4801;
            }
            goto LAB_0044dc25;
          }
        }
        else if (uVar2 == 0x1000000) {
          iVar5 = (**(code **)(*piVar4 + 0x2c))();
          if (iVar5 == 0x24) {
            local_8 = 1;
            iVar5 = thunk_FUN_004d6df0(piVar4);
            if (((0 < iVar5) && (iVar5 = thunk_FUN_004e41c0((uint)DAT_0080874d), 0 < iVar5)) &&
               (*(short *)(&DAT_007f4f7f + (char)piVar4[9] * 0xa62) != 0)) {
              puVar3[3] = 0x4801;
            }
            iVar5 = *(int *)((int)piVar4 + 0x71e);
            goto joined_r0x0044ddc7;
          }
        }
        else if (uVar2 == 0x2000000) goto switchD_0044dcfe_caseD_19;
      }
switchD_0044d78f_caseD_3:
      param_1 = param_1 + 1;
    } while ((int)param_1 < local_10);
    if (local_8 != 0) {
      return puVar3;
    }
  }
  puVar3[5] = 1;
  puVar3[4] = 1;
  puVar3[3] = 1;
  puVar3[2] = 1;
  puVar3[1] = 1;
  *puVar3 = 1;
switchD_0044d3a8_caseD_3:
  return puVar3;
}


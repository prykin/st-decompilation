
int FUN_0071b9c0(void)

{
  byte bVar1;
  code *pcVar2;
  void *this;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  uint *puVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  uint *puVar10;
  byte local_1bc [256];
  InternalExceptionFrame local_bc;
  uint local_78 [8];
  int local_58 [2];
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34 [4];
  int local_24;
  uint local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  byte local_14 [4];
  int local_10;
  undefined4 *local_c;
  void *local_8;
  
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  iVar3 = __setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_bc.previous;
    iVar6 = ReportDebugMessage(s_E__Ourlib_Sinput_cpp_007f092c,0x1a9,0,iVar3,&DAT_007a4ccc,
                               s_InputClassTy__None_error_007f0958);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E__Ourlib_Sinput_cpp_007f092c,0x1aa);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  local_38 = timeGetTime();
  this = local_8;
  if (*(int *)((int)local_8 + 0x60) == 0) {
    iVar3 = (**(code **)(**(int **)((int)local_8 + 0x1c) + 0x1c))(*(int **)((int)local_8 + 0x1c));
    *(uint *)((int)this + 0x60) = (uint)(-1 < iVar3);
    if (-1 < iVar3 == 0) goto LAB_0071bc28;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    iVar3 = (**(code **)(**(int **)((int)this + 0x1c) + 0x24))
                      (*(int **)((int)this + 0x1c),0x100,local_1bc);
    if (iVar3 != 0) {
      RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0xdb);
    }
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x24) + 4) = 0;
    iVar3 = *(int *)((int)this + 0x70);
    while (iVar3 == 0) {
      iVar3 = *(int *)((int)this + 0x24);
      uVar5 = *(uint *)(iVar3 + 4);
      if (uVar5 < *(uint *)(iVar3 + 0xc)) {
        pbVar4 = (byte *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
        *(uint *)(iVar3 + 4) = uVar5 + 1;
      }
      else {
        pbVar4 = (byte *)0x0;
      }
      if (pbVar4 == (byte *)0x0) break;
      if (((((*pbVar4 & 8) == 0) && (*(int *)(pbVar4 + 0x5c) != 0)) &&
          (*(int *)(pbVar4 + 0x60) == 0)) && (bVar1 = pbVar4[4], bVar1 != 0)) {
        if ((local_1bc[bVar1] & 0x80) == 0) {
          pbVar4[0x50] = 0;
          pbVar4[0x51] = 0;
          pbVar4[0x52] = 0;
          pbVar4[0x53] = 0;
          if (*(int *)(pbVar4 + 0x4c) != 0) {
            pbVar4[0x4c] = 0;
            pbVar4[0x4d] = 0;
            pbVar4[0x4e] = 0;
            pbVar4[0x4f] = 0;
            puVar7 = (uint *)(pbVar4 + 0x2c);
            puVar8 = local_78;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar3 = *(int *)(pbVar4 + 0x3c);
joined_r0x0071bc0d:
            if (iVar3 != 0) {
LAB_0071bc13:
              FUN_006e3db0((int)local_78);
            }
          }
        }
        else if ((((pbVar4[5] == 0) &&
                  (((((bVar1 == 0x2a || (bVar1 == 0x36)) ||
                     ((bVar1 == 0x38 || ((bVar1 == 0xb8 || (bVar1 == 0x1d)))))) || (bVar1 == 0x9d))
                   || (((((local_1bc[0x2a] & 0x80) == 0 && ((local_1bc[0x36] & 0x80) == 0)) &&
                        ((local_1bc[0x38] & 0x80) == 0)) &&
                       ((((local_1bc[0xb8] & 0x80) == 0 && ((local_1bc[0x1d] & 0x80) == 0)) &&
                        ((local_1bc[0x9d] & 0x80) == 0)))))))) ||
                 ((local_1bc[pbVar4[5]] & 0x80) != 0)) && (*(int *)(pbVar4 + 0x50) == 0)) {
          if (*(int *)(pbVar4 + 0x4c) == 0) {
            pbVar4[0x4c] = 1;
            pbVar4[0x4d] = 0;
            pbVar4[0x4e] = 0;
            pbVar4[0x4f] = 0;
            if ((*pbVar4 & 1) != 0) {
              pbVar4[0x54] = 1;
              pbVar4[0x55] = 0;
              pbVar4[0x56] = 0;
              pbVar4[0x57] = 0;
              *(uint *)(pbVar4 + 0x58) = local_38;
            }
            if (*(int *)(pbVar4 + 0x1c) != 0) {
              puVar7 = (uint *)(pbVar4 + 0xc);
              puVar8 = local_78;
              for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              goto LAB_0071bc13;
            }
          }
          else if ((*pbVar4 & 1) != 0) {
            if (*(int *)(pbVar4 + 0x54) == 0) {
              uVar5 = *(uint *)((int)this + 0x6c);
            }
            else {
              uVar5 = *(uint *)((int)this + 0x68);
            }
            if (uVar5 <= local_38 - *(int *)(pbVar4 + 0x58)) {
              *(uint *)(pbVar4 + 0x58) = local_38;
              pbVar4[0x54] = 0;
              pbVar4[0x55] = 0;
              pbVar4[0x56] = 0;
              pbVar4[0x57] = 0;
              puVar7 = (uint *)(pbVar4 + 0xc);
              puVar8 = local_78;
              for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar3 = *(int *)(pbVar4 + 0x1c);
              goto joined_r0x0071bc0d;
            }
          }
        }
      }
      iVar3 = *(int *)((int)this + 0x70);
    }
  }
LAB_0071bc28:
  FUN_0071b630(this,&local_44,&local_48,local_58);
  if (*(int *)((int)this + 100) != 0) {
    if (*(int *)((int)this + 0x28) != 0) {
      puVar9 = local_34;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      if ((*(int *)((int)this + 0x74) != 0) || (*(int *)((int)this + 0x54) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x78));
        *(undefined4 *)((int)this + 0x74) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x78));
        *(undefined4 *)((int)this + 0x54) = 0;
        local_24 = 0x60;
        local_1c = *(undefined2 *)((int)this + 0x2c);
        local_1a = *(undefined2 *)((int)this + 0x30);
      }
      if (((local_1bc[0x1d] & 0x80) != 0) || ((local_1bc[0x9d] & 0x80) != 0)) {
        local_20 = local_20 | 8;
      }
      if (((local_1bc[0x2a] & 0x80) != 0) || ((local_1bc[0x36] & 0x80) != 0)) {
        local_20 = local_20 | 4;
      }
      if ((local_4c & 0x80) != 0) {
        local_20 = local_20 | 1;
      }
      if ((local_4c & 0x8000) != 0) {
        local_20 = local_20 | 2;
      }
      if (local_24 != 0) {
        *(undefined4 *)(*(int *)((int)this + 0x28) + 4) = 0;
        iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
        while (-1 < iVar3) {
          if (local_10 != 0) {
            (**(code **)*local_c)(local_34);
          }
          iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
        }
        local_24 = 0;
      }
      puVar9 = local_34;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      if (((local_1bc[0x1d] & 0x80) != 0) || ((local_1bc[0x9d] & 0x80) != 0)) {
        local_20 = local_20 | 8;
      }
      if (((local_1bc[0x2a] & 0x80) != 0) || ((local_1bc[0x36] & 0x80) != 0)) {
        local_20 = local_20 | 4;
      }
      if ((local_4c & 0x8000) != 0) {
        local_20 = local_20 | 2;
      }
      if ((local_4c & 0x80) == 0) {
        if (*(int *)((int)this + 0x4c) != 0) {
          local_24 = 0x62;
          local_1c = *(undefined2 *)((int)this + 0x2c);
          local_1a = *(undefined2 *)((int)this + 0x30);
          *(undefined4 *)((int)this + 0x4c) = 0;
        }
      }
      else {
        local_20 = local_20 | 1;
        if (*(int *)((int)this + 0x4c) == 0) {
          local_24 = 0x61;
          local_1c = *(undefined2 *)((int)this + 0x2c);
          local_1a = *(undefined2 *)((int)this + 0x30);
          *(undefined4 *)((int)this + 0x4c) = 1;
        }
      }
      if (local_24 != 0) {
        *(undefined4 *)(*(int *)((int)this + 0x28) + 4) = 0;
        iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
        while (-1 < iVar3) {
          if (local_10 != 0) {
            (**(code **)*local_c)(local_34);
          }
          iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
        }
        local_24 = 0;
      }
      puVar9 = local_34;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      if (((local_1bc[0x1d] & 0x80) != 0) || ((local_1bc[0x9d] & 0x80) != 0)) {
        local_20 = local_20 | 8;
      }
      if (((local_1bc[0x2a] & 0x80) != 0) || ((local_1bc[0x36] & 0x80) != 0)) {
        local_20 = local_20 | 4;
      }
      if ((local_4c & 0x80) != 0) {
        local_20 = local_20 | 1;
      }
      if ((local_4c & 0x8000) == 0) {
        if (*(int *)((int)this + 0x48) != 0) {
          local_24 = 100;
          local_1c = *(undefined2 *)((int)this + 0x2c);
          local_1a = *(undefined2 *)((int)this + 0x30);
          *(undefined4 *)((int)this + 0x48) = 0;
        }
      }
      else {
        local_20 = local_20 | 2;
        if (*(int *)((int)this + 0x48) == 0) {
          local_24 = 99;
          local_1c = *(undefined2 *)((int)this + 0x2c);
          local_1a = *(undefined2 *)((int)this + 0x30);
          *(undefined4 *)((int)this + 0x48) = 1;
        }
      }
      if (local_24 != 0) {
        *(undefined4 *)(*(int *)((int)this + 0x28) + 4) = 0;
        iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
        while (-1 < iVar3) {
          if (local_10 != 0) {
            (**(code **)*local_c)(local_34);
          }
          iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
        }
        local_24 = 0;
      }
      if ((*(int *)((int)this + 0x5c) != 0) && (*(int *)((int)this + 0x58) != 0)) {
        if (local_50 != 0) {
          local_1c = *(undefined2 *)((int)this + 0x2c);
          local_24 = (local_50 < 1) + 0x67;
          local_1a = *(undefined2 *)((int)this + 0x30);
          if (local_24 != 0) {
            *(undefined4 *)(*(int *)((int)this + 0x28) + 4) = 0;
            iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
            while (-1 < iVar3) {
              if ((local_10 != 0) && ((local_14[0] & 2) != 0)) {
                (**(code **)*local_c)(local_34);
              }
              iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
            }
          }
        }
        local_24 = 0;
        if (-1 < *(int *)((int)this + 0x44)) {
          if ((*(byte *)((int)&local_4c + *(int *)((int)this + 0x44)) & 0x80) == 0) {
            if (*(int *)((int)this + 0x50) != 0) {
              *(undefined4 *)((int)this + 0x50) = 0;
              local_24 = 0x69;
            }
          }
          else if (*(int *)((int)this + 0x50) == 0) {
            *(undefined4 *)((int)this + 0x50) = 1;
            local_24 = 0x6a;
          }
          local_1c = *(undefined2 *)((int)this + 0x2c);
          local_1a = *(undefined2 *)((int)this + 0x30);
          if (local_24 != 0) {
            *(undefined4 *)(*(int *)((int)this + 0x28) + 4) = 0;
            iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
            while (-1 < iVar3) {
              if ((local_10 != 0) && ((local_14[0] & 2) != 0)) {
                (**(code **)*local_c)(local_34);
              }
              iVar3 = FUN_006b1190(*(int *)((int)this + 0x28),(undefined4 *)local_14);
            }
          }
        }
      }
    }
    if (((*(int *)((int)this + 100) != 0) && (*(int *)((int)this + 0x60) != 0)) &&
       (*(int *)((int)this + 0x24) != 0)) {
      *(undefined4 *)((int)this + 0x70) = 0;
      *(undefined4 *)(*(int *)((int)this + 0x24) + 4) = 0;
      iVar3 = *(int *)((int)this + 0x70);
      while (iVar3 == 0) {
        iVar3 = *(int *)((int)this + 0x24);
        uVar5 = *(uint *)(iVar3 + 4);
        if (uVar5 < *(uint *)(iVar3 + 0xc)) {
          puVar7 = (uint *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
          *(uint *)(iVar3 + 4) = uVar5 + 1;
        }
        else {
          puVar7 = (uint *)0x0;
        }
        if (puVar7 == (uint *)0x0) {
          g_currentExceptionFrame = local_bc.previous;
          return 0;
        }
        if ((((*puVar7 & 8) != 0) && (puVar7[0x17] != 0)) && (puVar7[0x18] == 0)) {
          FUN_0071b760(puVar7[1],(byte)*puVar7,(int)local_1bc,(int)local_58,&local_40,&local_3c);
          if ((local_40 == 0) || (local_3c == 0)) {
            puVar7[0x14] = 0;
            if (puVar7[0x13] != 0) {
              puVar7[0x13] = 0;
              puVar8 = puVar7 + 0xb;
              puVar10 = local_78;
              for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar10 = puVar10 + 1;
              }
              uVar5 = puVar7[0xf];
joined_r0x0071c146:
              if (uVar5 != 0) {
LAB_0071c152:
                FUN_006e3db0((int)local_78);
              }
            }
          }
          else if (puVar7[0x14] == 0) {
            if (puVar7[0x13] == 0) {
              puVar7[0x13] = 1;
              if ((*puVar7 & 1) != 0) {
                puVar7[0x15] = 1;
                puVar7[0x16] = local_38;
              }
              if (puVar7[7] != 0) {
                puVar7 = puVar7 + 3;
                puVar8 = local_78;
                for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
                goto LAB_0071c152;
              }
            }
            else if ((*puVar7 & 1) != 0) {
              if (puVar7[0x15] == 0) {
                uVar5 = *(uint *)((int)local_8 + 0x6c);
              }
              else {
                uVar5 = *(uint *)((int)local_8 + 0x68);
              }
              if (uVar5 <= local_38 - puVar7[0x16]) {
                puVar7[0x16] = local_38;
                puVar7[0x15] = 0;
                puVar8 = puVar7 + 3;
                puVar10 = local_78;
                for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar10 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar10 = puVar10 + 1;
                }
                uVar5 = puVar7[7];
                goto joined_r0x0071c146;
              }
            }
          }
        }
        this = local_8;
        iVar3 = *(int *)((int)local_8 + 0x70);
      }
    }
  }
  g_currentExceptionFrame = local_bc.previous;
  return 0;
}


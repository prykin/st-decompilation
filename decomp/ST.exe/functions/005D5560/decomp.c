
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::GetMessage */

undefined4 __thiscall SettMapSTy::GetMessage(SettMapSTy *this,int param_1)

{
  byte bVar1;
  MMsgTy *pMVar2;
  int *piVar3;
  code *pcVar4;
  uint3 uVar5;
  SettMapSTy *this_00;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  char cVar19;
  undefined4 unaff_ESI;
  uint uVar20;
  void *unaff_EDI;
  char *pcVar21;
  char *pcVar22;
  undefined4 *puVar23;
  bool bVar24;
  uint *puVar25;
  char local_164 [64];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  InternalExceptionFrame local_c8;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined1 uStack_79;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_64 [8];
  SettMapSTy *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  byte local_d;
  uint local_c;
  char *local_8;
  
  local_44 = this;
  uVar7 = FUN_006e51b0(this->field_0010);
  this->field_0061 = uVar7;
  local_c8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c8;
  iVar8 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_44;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_settsobj_cpp_007cd544,0x27d,0,iVar8,&DAT_007a4ccc
                               ,s_SettMapSTy__GetMessage_007cd5a8);
    if (iVar9 != 0) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    RaiseInternalException(iVar8,0,s_E____titans_Start_settsobj_cpp_007cd544,0x27d);
    return 0xffff;
  }
  SettMapTy::GetMessage((SettMapTy *)local_44,param_1);
  uVar20 = *(uint *)(param_1 + 0x10);
  if (uVar20 < 0x6505) {
    if (uVar20 == 0x6504) {
      uVar20 = *(uint *)(param_1 + 0x14);
      if ((uVar20 != 0xffffffff) && (iVar8 = *(int *)&this_00->field_0x1f84, iVar8 != 0)) {
        iVar9 = *(int *)&this_00->field_0x1e2f;
        if (uVar20 < *(uint *)(iVar9 + 0xc)) {
          iVar9 = *(int *)(iVar9 + 8) * uVar20 + *(int *)(iVar9 + 0x1c);
        }
        else {
          iVar9 = 0;
        }
        cVar19 = *(char *)(iVar9 + 0x104);
        if (*(uint *)(param_1 + 0x18) < *(uint *)(iVar8 + 0xc)) {
          iVar8 = *(int *)(iVar8 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar8 = 0;
        }
        if (iVar8 != 0) {
          *(char *)(iVar8 + 3) = cVar19;
        }
        iVar8 = *(int *)&this_00->field_0x1f84;
        uVar20 = *(int *)(param_1 + 0x18) + 1;
        bVar24 = uVar20 < *(uint *)(iVar8 + 0xc);
        if ((int)uVar20 < (int)*(uint *)(iVar8 + 0xc)) {
          do {
            if (bVar24) {
              pcVar10 = (char *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c));
            }
            else {
              pcVar10 = (char *)0x0;
            }
            if ((pcVar10 == (char *)0x0) || (*pcVar10 != '\0')) break;
            pcVar10[3] = cVar19;
            iVar8 = *(int *)&this_00->field_0x1f84;
            uVar20 = uVar20 + 1;
            bVar24 = uVar20 < *(uint *)(iVar8 + 0xc);
          } while ((int)uVar20 < (int)*(uint *)(iVar8 + 0xc));
        }
        (**(code **)(*(int *)this_00 + 0x2c))();
      }
    }
    else if (uVar20 == 0x6501) {
      uVar20 = *(uint *)(param_1 + 0x14);
      if ((uVar20 != 0xffffffff) && (iVar8 = *(int *)&this_00->field_0x1f84, iVar8 != 0)) {
        iVar9 = *(int *)&this_00->field_0x1e2f;
        if (uVar20 < *(uint *)(iVar9 + 0xc)) {
          iVar9 = *(int *)(iVar9 + 8) * uVar20 + *(int *)(iVar9 + 0x1c);
        }
        else {
          iVar9 = 0;
        }
        cVar19 = *(char *)(iVar9 + 0x104);
        if (*(uint *)(param_1 + 0x18) < *(uint *)(iVar8 + 0xc)) {
          iVar8 = *(int *)(iVar8 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar8 = 0;
        }
        if (iVar8 != 0) {
          *(char *)(iVar8 + 0x4a) = cVar19;
        }
        iVar8 = *(int *)&this_00->field_0x1f84;
        uVar20 = *(int *)(param_1 + 0x18) + 1;
        bVar24 = uVar20 < *(uint *)(iVar8 + 0xc);
        if ((int)uVar20 < (int)*(uint *)(iVar8 + 0xc)) {
          do {
            if (bVar24) {
              pcVar10 = (char *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c));
            }
            else {
              pcVar10 = (char *)0x0;
            }
            if ((pcVar10 == (char *)0x0) || (*pcVar10 != '\0')) break;
            pcVar10[0x4a] = cVar19;
            iVar8 = *(int *)&this_00->field_0x1f84;
            uVar20 = uVar20 + 1;
            bVar24 = uVar20 < *(uint *)(iVar8 + 0xc);
          } while ((int)uVar20 < (int)*(uint *)(iVar8 + 0xc));
        }
        (**(code **)(*(int *)this_00 + 0x2c))();
      }
    }
    else if (((uVar20 == 0x6502) && (uVar20 = *(uint *)(param_1 + 0x14), uVar20 != 0xffffffff)) &&
            (iVar8 = *(int *)&this_00->field_0x1f84, iVar8 != 0)) {
      iVar9 = *(int *)&this_00->field_0x1e2f;
      if (uVar20 < *(uint *)(iVar9 + 0xc)) {
        iVar9 = *(int *)(iVar9 + 8) * uVar20 + *(int *)(iVar9 + 0x1c);
      }
      else {
        iVar9 = 0;
      }
      local_d = *(byte *)(iVar9 + 0x104);
      if (*(uint *)(param_1 + 0x18) < *(uint *)(iVar8 + 0xc)) {
        iVar8 = *(int *)(iVar8 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar8 + 0x1c);
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 != 0) {
        if (*(byte *)(iVar8 + 2) != 0xff) {
          thunk_FUN_0056a840(&DAT_00807620,*(byte *)(iVar8 + 2));
        }
        *(byte *)(iVar8 + 2) = local_d;
        if (*(char *)(iVar8 + 4) == '\x02') {
          DAT_0080874d = local_d;
        }
        iVar8 = *(int *)&this_00->field_0x1f84;
        uVar20 = *(int *)(param_1 + 0x18) + 1;
        bVar24 = uVar20 < *(uint *)(iVar8 + 0xc);
        if ((int)uVar20 < (int)*(uint *)(iVar8 + 0xc)) {
          do {
            if (bVar24) {
              pcVar10 = (char *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c));
            }
            else {
              pcVar10 = (char *)0x0;
            }
            if ((pcVar10 == (char *)0x0) || (*pcVar10 != '\0')) break;
            pcVar10[2] = local_d;
            iVar8 = *(int *)&this_00->field_0x1f84;
            uVar20 = uVar20 + 1;
            bVar24 = uVar20 < *(uint *)(iVar8 + 0xc);
          } while ((int)uVar20 < (int)*(uint *)(iVar8 + 0xc));
        }
        (**(code **)(*(int *)this_00 + 0x2c))();
        goto LAB_005d5ff8;
      }
    }
  }
  else if (uVar20 == 0x6505) {
    uVar20 = *(uint *)(param_1 + 0x14);
    if ((uVar20 != 0xffffffff) && (iVar8 = *(int *)&this_00->field_0x1f84, iVar8 != 0)) {
      iVar9 = *(int *)&this_00->field_0x1e2f;
      if (uVar20 < *(uint *)(iVar9 + 0xc)) {
        iVar9 = *(int *)(iVar9 + 8) * uVar20 + *(int *)(iVar9 + 0x1c);
      }
      else {
        iVar9 = 0;
      }
      uVar20 = *(uint *)(iVar8 + 0xc);
      if (*(uint *)(param_1 + 0x18) < uVar20) {
        iVar12 = *(int *)(iVar8 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar8 + 0x1c);
      }
      else {
        iVar12 = 0;
      }
      if (iVar12 != 0) {
        if ((*(int *)(iVar9 + 0x104) == 2) && (uVar17 = 0, 0 < (int)uVar20)) {
          bVar24 = uVar20 != 0;
          do {
            if (bVar24) {
              iVar12 = *(int *)(iVar8 + 8) * uVar17 + *(int *)(iVar8 + 0x1c);
            }
            else {
              iVar12 = 0;
            }
            if ((iVar12 != 0) && (*(char *)(iVar12 + 4) == '\x02')) {
              cVar19 = this_00->field_0x1e26;
              if ((cVar19 == '\x06') || ((cVar19 == '\x01' || (cVar19 == '\x02')))) {
                *(undefined1 *)(iVar12 + 4) = 4;
                *(undefined1 *)(iVar12 + 5) = 0;
              }
              else {
                *(undefined1 *)(iVar12 + 4) = 1;
              }
              break;
            }
            uVar17 = uVar17 + 1;
            bVar24 = uVar17 < uVar20;
          } while ((int)uVar17 < (int)uVar20);
        }
        iVar8 = *(int *)&this_00->field_0x1f84;
        if (*(uint *)(param_1 + 0x18) < *(uint *)(iVar8 + 0xc)) {
          iVar8 = *(int *)(iVar8 + 8) * *(uint *)(param_1 + 0x18) + *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar8 = 0;
        }
        cVar19 = *(char *)(iVar9 + 0x104);
        *(char *)(iVar8 + 4) = cVar19;
        *(undefined1 *)(iVar8 + 5) = *(undefined1 *)(iVar9 + 0x108);
        if (cVar19 == '\0') {
          if (*(byte *)(iVar8 + 2) != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,*(byte *)(iVar8 + 2));
          }
          *(undefined1 *)(iVar8 + 2) = 0xff;
        }
        DAT_0080874d = 0xff;
        iVar8 = *(int *)&this_00->field_0x1f84;
        uVar17 = 0;
        uVar20 = *(uint *)(iVar8 + 0xc);
        if (0 < (int)uVar20) {
          bVar24 = uVar20 != 0;
          do {
            if (bVar24) {
              iVar9 = *(int *)(iVar8 + 8) * uVar17 + *(int *)(iVar8 + 0x1c);
            }
            else {
              iVar9 = 0;
            }
            if (((iVar9 != 0) && (*(char *)(iVar9 + 4) == '\x02')) &&
               (*(int *)(iVar9 + 6) == DAT_0080877f)) {
              DAT_0080874d = *(byte *)(iVar9 + 2);
              break;
            }
            uVar17 = uVar17 + 1;
            bVar24 = uVar17 < uVar20;
          } while ((int)uVar17 < (int)uVar20);
        }
        (**(code **)(*(int *)this_00 + 0x2c))();
LAB_005d5ff8:
        SettMapTy::PaintSC((SettMapTy *)this_00);
      }
    }
  }
  else if (uVar20 == 0x694a) {
    local_30 = 0x1010101;
    local_2c = (undefined1 *)0x1010101;
    if (*(int *)&this_00->field_0x1f84 != 0) {
      DAT_00808aa9 = 1;
      DAT_008087c4._2_1_ = '\0';
      DAT_0080874f = 0;
      puVar23 = (undefined4 *)((int)&DAT_008087c4 + 3);
      for (iVar8 = 0xa2; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar23 = 0;
        puVar23 = puVar23 + 1;
      }
      puVar11 = &DAT_008087e9;
      do {
        puVar11[-1] = 0;
        *puVar11 = 0xff;
        puVar11 = puVar11 + 0x51;
      } while ((int)puVar11 < 0x808a71);
      iVar8 = *(int *)&this_00->field_0x1f84;
      uVar17 = 0;
      uVar20 = *(uint *)(iVar8 + 0xc);
      if (0 < (int)uVar20) {
        bVar24 = uVar20 != 0;
        do {
          if (bVar24) {
            pcVar10 = (char *)(*(int *)(iVar8 + 8) * uVar17 + *(int *)(iVar8 + 0x1c));
          }
          else {
            pcVar10 = (char *)0x0;
          }
          if (((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) && (pcVar10[2] != 0xff)) {
            *(undefined1 *)((int)&local_30 + (uint)(byte)pcVar10[2]) = 0;
          }
          uVar17 = uVar17 + 1;
          bVar24 = uVar17 < uVar20;
        } while ((int)uVar17 < (int)uVar20);
      }
      local_c = 0;
      if (0 < (int)uVar20) {
        bVar24 = uVar20 != 0;
        do {
          if (bVar24) {
            pcVar10 = (char *)(*(int *)(iVar8 + 8) * local_c + *(int *)(iVar8 + 0x1c));
          }
          else {
            pcVar10 = (char *)0x0;
          }
          if (((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) &&
             ((pcVar10[4] != '\0' && ((pcVar10[4] != '\x01' || (this_00->field_0x1e26 == '\x02')))))
             ) {
            iVar8 = *(int *)(pcVar10 + 0x50);
            if ((uint)(byte)pcVar10[5] < *(uint *)(iVar8 + 0xc)) {
              local_8 = (char *)(*(int *)(iVar8 + 8) * (uint)(byte)pcVar10[5] +
                                *(int *)(iVar8 + 0x1c));
            }
            else {
              local_8 = (char *)0x0;
            }
            DAT_008087c4._2_1_ = DAT_008087c4._2_1_ + '\x01';
            if (pcVar10[2] == -1) {
              iVar8 = 0;
              do {
                if (*(char *)((int)&local_30 + iVar8) != '\0') {
                  pcVar10[2] = (char)iVar8;
                  *(undefined1 *)((int)&local_30 + iVar8) = 0;
                  break;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < 8);
            }
            (&DAT_008087e9)[(uint)(byte)pcVar10[2] * 0x51] = pcVar10[2];
            (&DAT_008087e8)[(uint)(byte)pcVar10[2] * 0x51] = pcVar10[3];
            uVar20 = 0xffffffff;
            pcVar22 = &DAT_008016a0;
            do {
              pcVar21 = pcVar22;
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              pcVar21 = pcVar22 + 1;
              cVar19 = *pcVar22;
              pcVar22 = pcVar21;
            } while (cVar19 != '\0');
            uVar20 = ~uVar20;
            local_14 = &DAT_008087c8 + (uint)(byte)pcVar10[2] * 0x51;
            pcVar22 = pcVar21 + -uVar20;
            pcVar21 = &DAT_008087c8 + (uint)(byte)pcVar10[2] * 0x51;
            for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar21 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar21 = pcVar21 + 4;
            }
            for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
              *pcVar21 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar21 = pcVar21 + 1;
            }
            if (pcVar10[4] == '\x02') {
              if (*pcVar10 != '\0') {
                *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar10[2] * 0x51 + 3) = 0;
                DAT_0080874d = pcVar10[2];
                DAT_0080874e = pcVar10[3];
              }
            }
            else if (pcVar10[4] == '\x04') {
              *(undefined1 *)((int)&DAT_008087c4 + (uint)(byte)pcVar10[2] * 0x51 + 3) = 1;
              if (local_8 == (char *)0x0) {
                uVar20 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar10[2] * 0x51;
                pcVar22 = &DAT_008016a0;
                do {
                  pcVar21 = pcVar22;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar21 = pcVar22 + 1;
                  cVar19 = *pcVar22;
                  pcVar22 = pcVar21;
                } while (cVar19 != '\0');
                uVar20 = ~uVar20;
                pcVar22 = pcVar21 + -uVar20;
                pcVar21 = local_8;
                for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar22;
                  pcVar22 = pcVar22 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pcVar21 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                  pcVar21 = pcVar21 + 1;
                }
              }
              else {
                pcVar22 = local_8 + 0x4c;
                uVar20 = 0xffffffff;
                local_8 = &DAT_008087c8 + (uint)(byte)pcVar10[2] * 0x51;
                do {
                  pcVar21 = pcVar22;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar21 = pcVar22 + 1;
                  cVar19 = *pcVar22;
                  pcVar22 = pcVar21;
                } while (cVar19 != '\0');
                uVar20 = ~uVar20;
                pcVar22 = pcVar21 + -uVar20;
                pcVar21 = local_8;
                for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar22;
                  pcVar22 = pcVar22 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pcVar21 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                  pcVar21 = pcVar21 + 1;
                }
              }
            }
            (&DAT_008087ea)[(uint)(byte)pcVar10[2] * 0x51] = pcVar10[0x4a];
            *(undefined4 *)((int)&DAT_008087eb + (uint)(byte)pcVar10[2] * 0x51) =
                 *(undefined4 *)(pcVar10 + 0x54);
            *(undefined4 *)((int)&DAT_008087ef + (uint)(byte)pcVar10[2] * 0x51) =
                 *(undefined4 *)(pcVar10 + 0x58);
            *(undefined4 *)((int)&DAT_008087f3 + (uint)(byte)pcVar10[2] * 0x51) =
                 *(undefined4 *)(pcVar10 + 0x5c);
          }
          iVar8 = *(int *)&this_00->field_0x1f84;
          local_c = local_c + 1;
          bVar24 = local_c < *(uint *)(iVar8 + 0xc);
        } while ((int)local_c < (int)*(uint *)(iVar8 + 0xc));
      }
      thunk_FUN_0056ee90(0x807620);
      puVar23 = &DAT_00808ab0;
      for (iVar8 = 0x3a8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar23 = 0;
        puVar23 = puVar23 + 1;
      }
      DAT_00808aaf = 0;
      iVar8 = *(int *)&this_00->field_0x1f84;
      local_c = 0;
      if (0 < *(int *)(iVar8 + 0xc)) {
        bVar24 = *(int *)(iVar8 + 0xc) != 0;
        do {
          if (bVar24) {
            puVar11 = (undefined1 *)(*(int *)(iVar8 + 8) * local_c + *(int *)(iVar8 + 0x1c));
          }
          else {
            puVar11 = (undefined1 *)0x0;
          }
          if (puVar11 != (undefined1 *)0x0) {
            bVar16 = puVar11[4];
            local_d = bVar16;
            if ((bVar16 != 1) && (bVar16 != 0)) {
              if (bVar16 == 4) {
                iVar8 = *(int *)(puVar11 + 0x50);
                if ((uint)(byte)puVar11[5] < *(uint *)(iVar8 + 0xc)) {
                  pcVar10 = (char *)(*(int *)(iVar8 + 8) * (uint)(byte)puVar11[5] +
                                    *(int *)(iVar8 + 0x1c));
                }
                else {
                  pcVar10 = (char *)0x0;
                }
                if (pcVar10 != (char *)0x0) {
                  uVar20 = 0xffffffff;
                  do {
                    pcVar22 = pcVar10;
                    if (uVar20 == 0) break;
                    uVar20 = uVar20 - 1;
                    pcVar22 = pcVar10 + 1;
                    cVar19 = *pcVar10;
                    pcVar10 = pcVar22;
                  } while (cVar19 != '\0');
                  uVar20 = ~uVar20;
                  pcVar22 = pcVar22 + -uVar20;
                  local_8 = local_164;
                  goto LAB_005d5b7e;
                }
              }
              else {
                uVar20 = 0xffffffff;
                pcVar10 = puVar11 + 10;
                do {
                  pcVar22 = pcVar10;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar22 = pcVar10 + 1;
                  cVar19 = *pcVar10;
                  pcVar10 = pcVar22;
                } while (cVar19 != '\0');
                uVar20 = ~uVar20;
                pcVar22 = pcVar22 + -uVar20;
                local_8 = local_164;
LAB_005d5b7e:
                pcVar10 = local_164;
                for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *(undefined4 *)pcVar10 = *(undefined4 *)pcVar22;
                  pcVar22 = pcVar22 + 4;
                  pcVar10 = pcVar10 + 4;
                }
                for (uVar20 = uVar20 & 3; local_8 = local_164, uVar20 != 0; uVar20 = uVar20 - 1) {
                  *pcVar10 = *pcVar22;
                  pcVar22 = pcVar22 + 1;
                  pcVar10 = pcVar10 + 1;
                }
              }
              local_124 = *(undefined4 *)(puVar11 + 6);
              local_120._0_2_ = CONCAT11(*puVar11,puVar11[2]);
              local_11c = this_00->field_0061;
              if (bVar16 == 2) {
                local_120 = CONCAT13(1,CONCAT12(1,(undefined2)local_120));
              }
              else {
                local_120 = CONCAT13(1,CONCAT12((bVar16 != 3) + -1,(undefined2)local_120)) &
                            0xff02ffff;
              }
              pcVar10 = local_164;
              puVar23 = &DAT_00808ab0 + (uint)DAT_00808aaf * 0x27;
              for (iVar8 = 0x27; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar23 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                puVar23 = puVar23 + 1;
              }
              if ((byte)local_120 < 8) {
                iVar8 = 0;
                do {
                  if ((&DAT_00808800)[iVar8 + (local_120 & 0xff) * 0x51] == '\0') {
                    (&DAT_00808800)[iVar8 + (local_120 & 0xff) * 0x51] = DAT_00808aaf;
                    break;
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < 0x18);
              }
              DAT_00808aaf = DAT_00808aaf + 1;
            }
          }
          iVar8 = *(int *)&this_00->field_0x1f84;
          local_c = local_c + 1;
          bVar24 = local_c < *(uint *)(iVar8 + 0xc);
        } while ((int)local_c < (int)*(uint *)(iVar8 + 0xc));
      }
      if (this_00->field_0x1e26 == '\x06') {
        if ((*(int *)&this_00->field_0x1f47 == 0) && (*(int *)(param_1 + 0x14) == 0)) {
          iVar8 = *(int *)&this_00->field_0x1a5b;
          if (*(int *)(iVar8 + 0x2e6) != 0) {
            puVar23 = local_64;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar23 = 0;
              puVar23 = puVar23 + 1;
            }
            puVar23 = local_84;
            for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar23 = 0;
              puVar23 = puVar23 + 1;
            }
            local_7c = *(undefined4 *)&this_00->field_0x8;
            local_64[3] = 2;
            local_78 = 2;
            local_64[4] = 0x694a;
            local_64[5] = 1;
            local_74 = 0x693f;
            local_64[2] = local_7c;
            iVar8 = MMsgTy::SetMessage(*(MMsgTy **)(iVar8 + 0x2e6),0x251f,'\x01',local_64,local_84,
                                       (undefined4 *)0x0,0,0);
            if (iVar8 != 0) {
              (**(code **)(*(int *)this_00 + 0x24))();
            }
          }
        }
        else {
          uVar20 = 0xffffffff;
          DAT_008087a0 = '\x06';
          pcVar10 = &DAT_00853de4;
          do {
            pcVar22 = pcVar10;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar22 = pcVar10 + 1;
            cVar19 = *pcVar10;
            pcVar10 = pcVar22;
          } while (cVar19 != '\0');
          uVar20 = ~uVar20;
          DAT_00808783 = 2;
          pcVar10 = pcVar22 + -uVar20;
          pcVar22 = &DAT_0080ed16;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar22 = pcVar22 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar22 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar22 = pcVar22 + 1;
          }
          uVar20 = 0xffffffff;
          pcVar10 = &DAT_0080ed16;
          do {
            pcVar22 = pcVar10;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar22 = pcVar10 + 1;
            cVar19 = *pcVar10;
            pcVar10 = pcVar22;
          } while (cVar19 != '\0');
          uVar20 = ~uVar20;
          pcVar10 = pcVar22 + -uVar20;
          pcVar22 = (char *)&DAT_0080ee1a;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar22 = pcVar22 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar22 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar22 = pcVar22 + 1;
          }
          uVar20 = 0xffffffff;
          pcVar10 = &DAT_00807680;
          do {
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            cVar19 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar19 != '\0');
          uVar17 = 0xffffffff;
          pcVar10 = (char *)((int)&DAT_0080ed12 + ~uVar20 + 3);
          do {
            pcVar22 = pcVar10;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1;
            pcVar22 = pcVar10 + 1;
            cVar19 = *pcVar10;
            pcVar10 = pcVar22;
          } while (cVar19 != '\0');
          uVar17 = ~uVar17;
          pcVar10 = pcVar22 + -uVar17;
          pcVar22 = &DAT_0080ef1e;
          for (uVar20 = uVar17 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar22 = pcVar22 + 4;
          }
          for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar22 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar22 = pcVar22 + 1;
          }
          thunk_FUN_005b6350(this_00,0x6948,0,0);
          iVar8 = *(int *)this_00;
          this_00[1].field_0xc8 = 1;
          this_00[1].field_0xc7 = 1;
          this_00[1].field_0xca = 1;
          this_00[1].field_0xc6 = 1;
          this_00[1].field_0xc4 = 1;
          (**(code **)(iVar8 + 8))();
          pMVar2 = *(MMsgTy **)(*(int *)&this_00->field_0x1a5b + 0x2e6);
          if (pMVar2 != (MMsgTy *)0x0) {
            MMsgTy::HidePanel(pMVar2,1,0,1);
          }
        }
      }
      else {
        uVar20 = 0xffffffff;
        DAT_00808783 = 2;
        pcVar10 = &DAT_0080ed16;
        do {
          pcVar22 = pcVar10;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar22 = pcVar10 + 1;
          cVar19 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar19 != '\0');
        uVar20 = ~uVar20;
        pcVar10 = pcVar22 + -uVar20;
        pcVar22 = (char *)&DAT_0080ee1a;
        DAT_008087a0 = this_00->field_0x1e26;
        for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar22 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar22 = pcVar22 + 1;
        }
        uVar20 = 0xffffffff;
        pcVar10 = &DAT_00807680;
        do {
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          cVar19 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar19 != '\0');
        uVar17 = 0xffffffff;
        pcVar10 = (char *)((int)&DAT_0080ed12 + ~uVar20 + 3);
        do {
          pcVar22 = pcVar10;
          if (uVar17 == 0) break;
          uVar17 = uVar17 - 1;
          pcVar22 = pcVar10 + 1;
          cVar19 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar19 != '\0');
        uVar17 = ~uVar17;
        pcVar10 = pcVar22 + -uVar17;
        pcVar22 = &DAT_0080ef1e;
        for (uVar20 = uVar17 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *pcVar22 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar22 = pcVar22 + 1;
        }
        thunk_FUN_005b6350(this_00,0x6948,0,0);
        iVar8 = *(int *)this_00;
        this_00[1].field_0xc8 = 1;
        this_00[1].field_0xc7 = 1;
        this_00[1].field_0xca = 1;
        this_00[1].field_0xc5 = 1;
        this_00[1].field_0xc4 = 1;
        (**(code **)(iVar8 + 8))();
        pMVar2 = *(MMsgTy **)(*(int *)&this_00->field_0x1a5b + 0x2e6);
        if (pMVar2 != (MMsgTy *)0x0) {
          MMsgTy::HidePanel(pMVar2,1,0,1);
        }
      }
    }
  }
  uVar20 = *(uint *)(param_1 + 0x10);
  if (((0x69fe < uVar20) && (uVar20 < 0x6a7f)) && (this_00->field_0x65 == '\x01')) {
    iVar8 = *(int *)&this_00->field_0x1f84;
    local_c = uVar20 - 0x69ff >> 3;
    if ((iVar8 == 0) ||
       (uVar17 = *(int *)&this_00->field_0x1f88 + local_c, *(uint *)(iVar8 + 0xc) <= uVar17)) {
      local_14 = (char *)0x0;
    }
    else {
      local_14 = (char *)(*(int *)(iVar8 + 8) * uVar17 + *(int *)(iVar8 + 0x1c));
    }
    uVar17 = 0;
    if (local_14 != (char *)0x0) {
      switch(uVar20 + 1 & 7) {
      case 1:
        uVar17 = 0;
        local_40 = 0x1010101;
        local_3c = 0x1010101;
        uVar20 = *(uint *)(iVar8 + 0xc);
        if (0 < (int)uVar20) {
          bVar24 = uVar20 != 0;
          do {
            if (bVar24) {
              pcVar10 = (char *)(*(int *)(iVar8 + 8) * uVar17 + *(int *)(iVar8 + 0x1c));
            }
            else {
              pcVar10 = (char *)0x0;
            }
            if ((*pcVar10 != '\0') && (pcVar10[2] != 0xff)) {
              *(undefined1 *)((int)&local_40 + (uint)(byte)pcVar10[2]) = 0;
            }
            uVar17 = uVar17 + 1;
            bVar24 = uVar17 < uVar20;
          } while ((int)uVar17 < (int)uVar20);
        }
        bVar16 = local_14[2];
        iVar9 = *(int *)&this_00->field_0x1f88 + local_c;
        uVar20 = 0;
        *(undefined4 *)&this_00[1].field_0x54 = 0x6502;
        *(undefined1 *)((int)&local_40 + (uint)bVar16) = 1;
        iVar8 = *(int *)&this_00->field_0x1e2f;
        *(int *)&this_00[1].field_0x5c = iVar9;
        *(undefined4 *)&this_00[1].field_0x74 = 0x6503;
        *(undefined4 *)&this_00[1].field_0x84 = 0;
        *(undefined4 *)(iVar8 + 0xc) = 0;
        *(undefined4 *)&this_00->field_0x1f37 = 0xff;
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)&this_00->field_0x1e2f,(undefined4 *)&this_00->field_0x1e33);
        local_8 = (char *)CONCAT31(local_8._1_3_,1);
        do {
          if (*(char *)((int)&local_40 + uVar20) != '\0') {
            *(uint *)&this_00->field_0x1f37 = uVar20;
            Library::DKW::TBL::FUN_006ae1c0
                      (*(uint **)&this_00->field_0x1e2f,(undefined4 *)&this_00->field_0x1e33);
            if ((byte)local_14[2] == uVar20) {
              *(uint *)&this_00[1].field_0x84 = (uint)local_8 & 0xff;
            }
            local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
          }
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < 8);
        *(undefined4 *)&this_00[1].field_0x8c =
             *(undefined4 *)(*(int *)&this_00->field_0x1e2f + 0xc);
        *(undefined4 *)&this_00[1].field_0xa8 = 0x124;
        *(undefined4 *)&this_00[1].field_0xb0 = 0x1e;
        *(undefined4 *)&this_00[1].field_0x88 = 0x12;
        *(uint *)&this_00[1].field_0xac = local_c * 0x19 + 0x41;
LAB_005d619b:
        (**(code **)(**(int **)&this_00->field_0xc + 8))(0x100ef,0,0,&this_00[1].field_0x44,0);
        break;
      case 2:
        iVar8 = *(int *)&this_00->field_0x1f88;
        iVar9 = *(int *)&this_00->field_0x1e2f;
        *(undefined4 *)&this_00[1].field_0x54 = 0x6504;
        *(uint *)&this_00[1].field_0x5c = iVar8 + local_c;
        *(undefined4 *)&this_00[1].field_0x74 = 0x6500;
        *(undefined4 *)(iVar9 + 0xc) = 0;
        local_28 = 1;
        pcVar10 = (char *)FUN_006b0140(0x23f1,DAT_00807618);
        uVar20 = 0xffffffff;
        do {
          pcVar22 = pcVar10;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar22 = pcVar10 + 1;
          cVar19 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar19 != '\0');
        uVar20 = ~uVar20;
        pcVar10 = pcVar22 + -uVar20;
        pcVar22 = &this_00->field_0x1e33;
        for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar22 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar22 = pcVar22 + 1;
        }
        for (puVar13 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar13 != (uint *)0x0; puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n')) {
          *(undefined1 *)puVar13 = 0x20;
        }
        *(undefined4 *)&this_00->field_0x1f37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)&this_00->field_0x1e2f,(undefined4 *)&this_00->field_0x1e33);
        pcVar10 = (char *)FUN_006b0140(0x23f0,DAT_00807618);
        uVar20 = 0xffffffff;
        do {
          pcVar22 = pcVar10;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar22 = pcVar10 + 1;
          cVar19 = *pcVar10;
          pcVar10 = pcVar22;
        } while (cVar19 != '\0');
        uVar20 = ~uVar20;
        pcVar10 = pcVar22 + -uVar20;
        pcVar22 = &this_00->field_0x1e33;
        for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar22 = pcVar22 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar22 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar22 = pcVar22 + 1;
        }
        for (puVar13 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
            puVar13 != (uint *)0x0; puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n')) {
          *(undefined1 *)puVar13 = 0x20;
        }
        *(undefined4 *)&this_00->field_0x1f37 = 2;
        Library::DKW::TBL::FUN_006ae1c0
                  (*(uint **)&this_00->field_0x1e2f,(undefined4 *)&this_00->field_0x1e33);
        uVar20 = local_28;
        if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
          uVar20 = (uint)(local_14[4] != '\x02');
        }
        if (uVar20 != 0) {
          pcVar10 = (char *)FUN_006b0140(0x23f2,DAT_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar22 = pcVar10;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar22 = pcVar10 + 1;
            cVar19 = *pcVar10;
            pcVar10 = pcVar22;
          } while (cVar19 != '\0');
          uVar20 = ~uVar20;
          pcVar10 = pcVar22 + -uVar20;
          pcVar22 = &this_00->field_0x1e33;
          for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar22 = pcVar22 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar22 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar22 = pcVar22 + 1;
          }
          for (puVar13 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e33,'\n');
              puVar13 != (uint *)0x0; puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n')) {
            *(undefined1 *)puVar13 = 0x20;
          }
          *(undefined4 *)&this_00->field_0x1f37 = 3;
          Library::DKW::TBL::FUN_006ae1c0
                    (*(uint **)&this_00->field_0x1e2f,(undefined4 *)&this_00->field_0x1e33);
        }
        *(undefined4 *)&this_00[1].field_0x8c =
             *(undefined4 *)(*(int *)&this_00->field_0x1e2f + 0xc);
        bVar16 = local_14[3];
        *(undefined4 *)&this_00[1].field_0xa8 = 0x143;
        *(undefined4 *)&this_00[1].field_0xb0 = 0x78;
        *(uint *)&this_00[1].field_0x84 = bVar16 - 1;
        *(uint *)&this_00[1].field_0xac = local_c * 0x19 + 0x41;
        iVar8 = *(int *)(DAT_0081176c + 0x34);
        if (*(int *)(iVar8 + 0xa0) != 0) {
          FUN_00710790(iVar8);
        }
        *(undefined4 *)&this_00[1].field_0x88 = *(undefined4 *)(iVar8 + 0x8a);
LAB_005d6676:
        (**(code **)(**(int **)&this_00->field_0xc + 8))(0x100ef,0,0,&this_00[1].field_0x44,0);
        break;
      case 3:
        iVar8 = *(int *)&this_00->field_0x1f88;
        *(undefined4 *)&this_00[1].field_0x54 = 0x6505;
        iVar9 = *(int *)&this_00->field_0x1e2f;
        *(uint *)&this_00[1].field_0x5c = iVar8 + local_c;
        *(undefined4 *)&this_00[1].field_0x74 = 0x6500;
        *(undefined4 *)(iVar9 + 0xc) = 0;
        if (*local_14 != '\0') {
          uVar20 = 0;
          local_8 = (char *)0x0;
          if ((this_00->field_0x1e26 == '\x02') && (local_14[4] == '\x02')) break;
          iVar8 = *(int *)&this_00->field_0x1f84;
          uVar17 = *(uint *)(iVar8 + 0xc);
          bVar24 = uVar17 != 0;
          if (0 < (int)uVar17) {
            do {
              if (bVar24) {
                pcVar10 = (char *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c));
              }
              else {
                pcVar10 = (char *)0x0;
              }
              if ((*pcVar10 != '\0') && (pcVar10[4] != '\0')) {
                local_8 = local_8 + 1;
              }
              uVar20 = uVar20 + 1;
              bVar24 = uVar20 < uVar17;
            } while ((int)uVar20 < (int)uVar17);
          }
          if ((this_00->field_0x1e26 != '\x02') && (2 < (int)local_8)) {
            pcVar10 = (char *)FUN_006b0140(8000,DAT_00807618);
            uVar20 = 0xffffffff;
            do {
              pcVar22 = pcVar10;
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              pcVar22 = pcVar10 + 1;
              cVar19 = *pcVar10;
              pcVar10 = pcVar22;
            } while (cVar19 != '\0');
            uVar20 = ~uVar20;
            pcVar10 = pcVar22 + -uVar20;
            pcVar22 = &this_00->field_0x1e33;
            for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
              *pcVar22 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar22 = pcVar22 + 1;
            }
            *(undefined4 *)&this_00->field_0x1f37 = 0;
            Library::DKW::TBL::FUN_006ae1c0
                      (*(uint **)&this_00->field_0x1e2f,(undefined4 *)&this_00->field_0x1e33);
          }
          if (this_00->field_0x1e26 != '\x02') {
            bVar24 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar24 = local_14[3] != '\x03';
            }
            if (bVar24) {
              pcVar10 = (char *)FUN_006b0140(0x1f42,DAT_00807618);
              uVar20 = 0xffffffff;
              do {
                pcVar22 = pcVar10;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar22 = pcVar10 + 1;
                cVar19 = *pcVar10;
                pcVar10 = pcVar22;
              } while (cVar19 != '\0');
              uVar20 = ~uVar20;
              pcVar10 = pcVar22 + -uVar20;
              pcVar22 = &this_00->field_0x1e33;
              for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar22 = pcVar22 + 4;
              }
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar22 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar22 = pcVar22 + 1;
              }
              *(undefined4 *)&this_00->field_0x1f37 = 2;
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)&this_00->field_0x1e2f,(undefined4 *)&this_00->field_0x1e33);
            }
          }
          local_8 = (char *)0x0;
          iVar8 = *(int *)(local_14 + 0x50);
          pcVar10 = *(char **)(iVar8 + 0xc);
          if (0 < (int)pcVar10) {
            do {
              if (local_8 < pcVar10) {
                iVar8 = *(int *)(iVar8 + 8) * (int)local_8 + *(int *)(iVar8 + 0x1c);
              }
              else {
                iVar8 = 0;
              }
              uVar20 = 0xffffffff;
              pcVar10 = (char *)(iVar8 + 0x40);
              do {
                pcVar22 = pcVar10;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar22 = pcVar10 + 1;
                cVar19 = *pcVar10;
                pcVar10 = pcVar22;
              } while (cVar19 != '\0');
              uVar20 = ~uVar20;
              pcVar10 = pcVar22 + -uVar20;
              pcVar22 = &this_00->field_0x1e33;
              for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar22 = pcVar22 + 4;
              }
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar22 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar22 = pcVar22 + 1;
              }
              *(undefined4 *)&this_00->field_0x1f37 = 4;
              *(char **)&this_00->field_0x1f3b = local_8;
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)&this_00->field_0x1e2f,(undefined4 *)&this_00->field_0x1e33);
              local_8 = local_8 + 1;
              iVar8 = *(int *)(local_14 + 0x50);
              pcVar10 = *(char **)(iVar8 + 0xc);
            } while ((int)local_8 < (int)pcVar10);
          }
        }
        iVar8 = *(int *)&this_00->field_0x1e2f;
        uVar20 = 0;
        if (0 < *(int *)(iVar8 + 0xc)) {
          bVar24 = *(int *)(iVar8 + 0xc) != 0;
          local_28 = (uint)(byte)local_14[4];
          do {
            if (bVar24) {
              iVar9 = *(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c);
            }
            else {
              iVar9 = 0;
            }
            if ((*(uint *)(iVar9 + 0x104) == local_28) &&
               (*(uint *)(iVar9 + 0x108) == (uint)(byte)local_14[5])) {
              *(uint *)&this_00[1].field_0x84 = uVar20;
              break;
            }
            uVar20 = uVar20 + 1;
            bVar24 = uVar20 < *(uint *)(iVar8 + 0xc);
          } while ((int)uVar20 < (int)*(uint *)(iVar8 + 0xc));
        }
        uVar7 = *(undefined4 *)(iVar8 + 0xc);
        *(undefined4 *)&this_00[1].field_0xa8 = 0x15d;
        *(undefined4 *)&this_00[1].field_0x8c = uVar7;
        *(undefined4 *)&this_00[1].field_0xb0 = 0x5f;
        *(uint *)&this_00[1].field_0xac = local_c * 0x19 + 0x41;
        iVar8 = *(int *)(DAT_0081176c + 0x34);
        if (*(int *)(iVar8 + 0xa0) != 0) {
          FUN_00710790(iVar8);
        }
        *(undefined4 *)&this_00[1].field_0x88 = *(undefined4 *)(iVar8 + 0x8a);
        if (1 < *(int *)&this_00[1].field_0x8c) goto LAB_005d6676;
        break;
      case 5:
        if (DAT_00808a8f != '\0') {
          local_8 = (char *)0x1;
          local_38 = 0;
          local_34 = 0;
          uVar20 = *(uint *)(iVar8 + 0xc);
          if (0 < (int)uVar20) {
            bVar24 = uVar20 != 0;
            do {
              if (bVar24) {
                iVar9 = *(int *)(iVar8 + 8) * uVar17 + *(int *)(iVar8 + 0x1c);
              }
              else {
                iVar9 = 0;
              }
              if ((iVar9 != 0) && (*(byte *)(iVar9 + 0x4a) < 8)) {
                *(undefined1 *)((int)&local_38 + (uint)*(byte *)(iVar9 + 0x4a)) = 1;
              }
              uVar17 = uVar17 + 1;
              bVar24 = uVar17 < uVar20;
            } while ((int)uVar17 < (int)uVar20);
          }
          bVar16 = 0;
          iVar9 = 0;
          do {
            if (*(char *)((int)&local_38 + iVar9) != '\0') {
              bVar16 = bVar16 + 1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < 8);
          bVar1 = this_00->field_211C;
joined_r0x005d6701:
          if (bVar16 < bVar1) {
            iVar9 = 0;
            do {
              if (*(char *)((int)&local_38 + iVar9) == '\0') {
                *(undefined1 *)((int)&local_38 + iVar9) = 1;
                bVar16 = bVar16 + 1;
                break;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < 8);
            goto joined_r0x005d6701;
          }
          uVar20 = 0;
          cVar19 = (char)local_28;
          if (0 < *(int *)(iVar8 + 0xc)) {
            local_2c = (undefined1 *)(*(int *)&this_00->field_0x1f88 + local_c);
            bVar24 = *(int *)(iVar8 + 0xc) != 0;
            do {
              if (bVar24) {
                pcVar10 = (char *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c));
              }
              else {
                pcVar10 = (char *)0x0;
              }
              if (local_2c == (undefined1 *)uVar20) {
LAB_005d6784:
                if ((*pcVar10 != '\0') && ((pcVar10[4] == '\0' || (pcVar10[4] == '\x01')))) {
                  *(undefined1 *)((int)&local_38 + (uint)(byte)pcVar10[0x4a]) = 0;
                }
              }
              else if (*pcVar10 != '\0') {
                if ((pcVar10[4] != '\0') && (pcVar10[4] != '\x01')) {
                  if (local_8 == (char *)0x0) {
                    if (cVar19 != pcVar10[0x4a]) {
                      cVar19 = -1;
                    }
                  }
                  else {
                    cVar19 = pcVar10[0x4a];
                    local_8 = (char *)0x0;
                  }
                }
                goto LAB_005d6784;
              }
              uVar20 = uVar20 + 1;
              bVar24 = uVar20 < *(uint *)(iVar8 + 0xc);
            } while ((int)uVar20 < (int)*(uint *)(iVar8 + 0xc));
            local_28 = CONCAT31(local_28._1_3_,cVar19);
          }
          if (cVar19 != -1) {
            *(undefined1 *)((int)&local_38 + (local_28 & 0xff)) = 0;
          }
          iVar8 = *(int *)&this_00->field_0x1f88;
          iVar9 = *(int *)&this_00->field_0x1e2f;
          uVar20 = 0;
          *(undefined4 *)&this_00[1].field_0x54 = 0x6501;
          *(uint *)&this_00[1].field_0x5c = iVar8 + local_c;
          *(undefined4 *)&this_00[1].field_0x74 = 0x6500;
          *(undefined4 *)&this_00[1].field_0x84 = 0;
          *(undefined4 *)(iVar9 + 0xc) = 0;
          local_8 = (char *)((uint)local_8 & 0xffffff00);
          puVar11 = &uStack_79;
          local_2c = puVar11;
          do {
            iVar8 = uVar20 + 0x41;
            if (puVar11[uVar20 + 0x41] != '\0') {
              uVar7 = FUN_006b0140(0x1f4a,DAT_00807618);
              wsprintfA(&this_00->field_0x1e33,&DAT_007cd508,uVar7,iVar8);
              *(uint *)&this_00->field_0x1f37 = uVar20;
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)&this_00->field_0x1e2f,(undefined4 *)&this_00->field_0x1e33);
              if ((byte)local_14[0x4a] == uVar20) {
                *(uint *)&this_00[1].field_0x84 = (uint)local_8 & 0xff;
              }
              local_8 = (char *)CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
              puVar11 = local_2c;
            }
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < 8);
          cVar19 = this_00->field_0x1e26;
          *(undefined4 *)&this_00[1].field_0x8c =
               *(undefined4 *)(*(int *)&this_00->field_0x1e2f + 0xc);
          if (((cVar19 == '\x06') || (cVar19 == '\x01')) || (uVar7 = 0x26b, cVar19 == '\x02')) {
            uVar7 = 0x2ab;
          }
          *(undefined4 *)&this_00[1].field_0xa8 = uVar7;
          *(undefined4 *)&this_00[1].field_0xb0 = 0x46;
          *(uint *)&this_00[1].field_0xac = local_c * 0x19 + 0x41;
          iVar8 = *(int *)(DAT_0081176c + 0x34);
          if (*(int *)(iVar8 + 0xa0) != 0) {
            FUN_00710790(iVar8);
          }
          *(undefined4 *)&this_00[1].field_0x88 = *(undefined4 *)(iVar8 + 0x8a);
          goto LAB_005d619b;
        }
        uVar5 = (uint3)(uVar20 - 0x69ff >> 8);
        uVar20 = CONCAT31(uVar5 >> 3,DAT_0080874d);
        if (DAT_0080874d != 0xff) {
          bVar16 = local_14[2];
          local_c = CONCAT31(uVar5 >> 3,bVar16);
          if ((bVar16 != 0xff) && (DAT_0080874d != bVar16)) {
            if (local_14[4] == '\x04') {
              local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar16);
              if (DAT_0080874d == bVar16) {
                uVar7 = 0;
                uVar18 = (uint)bVar16;
              }
              else {
                uVar14 = (uint)DAT_0080874d;
                uVar17 = (uint)bVar16;
                cVar19 = *(char *)((int)&DAT_00808a4f + uVar14 * 8 + uVar17);
                uVar18 = local_c;
                if ((cVar19 == '\0') &&
                   (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar14) == '\0')) {
                  uVar7 = 0xfffffffe;
                }
                else if ((cVar19 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar14) == '\0')) {
                  uVar7 = 0xffffffff;
                }
                else if ((cVar19 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar14) == '\x01')) {
                  uVar7 = 1;
                }
                else if ((cVar19 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar17 * 8 + uVar14) == '\x01')) {
                  uVar7 = 2;
                }
                else {
                  uVar7 = 0;
                }
              }
              switch(uVar7) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar18,DAT_0080874d,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar20,(byte)uVar18,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar20,(byte)uVar18,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,uVar18,DAT_0080874d,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,uVar20,bVar16);
            }
            (**(code **)(*(int *)this_00 + 0x2c))();
          }
        }
      }
    }
  }
  uVar20 = *(uint *)(param_1 + 0x10);
  if (uVar20 < 0x6a7f) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  if (0x6afe < uVar20) {
    g_currentExceptionFrame = local_c8.previous;
    return 0;
  }
  uVar17 = uVar20 - 0x6a7f >> 3;
  local_2c = (undefined1 *)(uVar20 + 1 & 7);
  piVar3 = *(int **)(param_1 + 0x18);
  local_1c = piVar3[2];
  local_18 = piVar3[3];
  iVar8 = *(int *)&this_00->field_0x1f84;
  local_24 = *piVar3 + -0x113;
  local_20 = 0;
  if ((iVar8 == 0) ||
     (uVar20 = *(int *)&this_00->field_0x1f88 + uVar17, *(uint *)(iVar8 + 0xc) <= uVar20)) {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar10 = (char *)(*(int *)(iVar8 + 8) * uVar20 + *(int *)(iVar8 + 0x1c));
  }
  local_28 = uVar17;
  FUN_006b4170(*(int *)(&this_00->field_0x20f4 + uVar17 * 4),0,*piVar3 + -0x113,0,piVar3[2],
               piVar3[3],0xff);
  if (pcVar10 == (char *)0x0) goto switchD_005d6abd_default;
  switch(local_2c) {
  case (undefined1 *)0x1:
    if (*pcVar10 != '\0') {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      local_1c = local_1c + -2;
      local_18 = local_18 + -2;
      MMObjTy::PaintButDib
                ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + uVar17 * 4),&local_24,0,
                 (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pcVar10[2] != -1) {
        switch(pcVar10[2]) {
        case '\0':
          uVar6 = 0xfc;
          break;
        case '\x01':
          uVar6 = 0xfa;
          break;
        case '\x02':
          uVar6 = 0xfb;
          break;
        case '\x03':
          uVar6 = 0xf9;
          break;
        case '\x04':
          uVar6 = 0xfd;
          break;
        case '\x05':
          uVar6 = 0xfe;
          break;
        case '\x06':
          uVar6 = 0xf3;
          break;
        case '\a':
          uVar6 = 7;
          break;
        default:
          uVar6 = 0xff;
        }
        FUN_006b4170(*(int *)(&this_00->field_0x20f4 + uVar17 * 4),0,local_24 + 2,local_20 + 2,
                     local_1c + -4,local_18 + -4,uVar6);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (*pcVar10 == '\0') break;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + uVar17 * 4),&local_24,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                     *(int *)(&this_00->field_0x20f4 + uVar17 * 4),0,local_24,local_20,local_1c,
                     local_18);
    if (pcVar10[3] == '\x01') {
      pcVar10 = &DAT_007ca250;
LAB_005d6c37:
      uVar20 = 0xffffffff;
      do {
        pcVar22 = pcVar10;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar22 = pcVar10 + 1;
        cVar19 = *pcVar10;
        pcVar10 = pcVar22;
      } while (cVar19 != '\0');
      uVar20 = ~uVar20;
      pcVar10 = pcVar22 + -uVar20;
      pcVar22 = (char *)&DAT_0080f33a;
      for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar22 = pcVar22 + 4;
      }
    }
    else {
      if (pcVar10[3] != '\x02') {
        pcVar10 = &DAT_007ca24c;
        goto LAB_005d6c37;
      }
      uVar20 = 0xffffffff;
      pcVar10 = &DAT_007ca248;
      do {
        pcVar22 = pcVar10;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar22 = pcVar10 + 1;
        cVar19 = *pcVar10;
        pcVar10 = pcVar22;
      } while (cVar19 != '\0');
      uVar20 = ~uVar20;
      pcVar10 = pcVar22 + -uVar20;
      pcVar22 = (char *)&DAT_0080f33a;
      for (uVar17 = uVar20 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar22 = pcVar22 + 4;
      }
    }
    iVar8 = DAT_0081176c;
    for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
      *pcVar22 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar22 = pcVar22 + 1;
    }
    ccFntTy::WrStr(*(ccFntTy **)(iVar8 + 0x34),&DAT_0080f33a,-1,-1,2);
    uVar17 = local_28;
    break;
  case (undefined1 *)0x3:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + uVar17 * 4),&local_24,2,
               (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                     *(int *)(&this_00->field_0x20f4 + uVar17 * 4),0,local_24,local_20,local_1c,
                     local_18);
    uVar7 = 2;
    iVar12 = -1;
    iVar9 = -1;
    puVar25 = (uint *)&DAT_007c2310;
    iVar8 = local_1c;
    puVar13 = (uint *)thunk_FUN_005cbbe0(this_00,pcVar10);
    goto LAB_005d6d70;
  case (undefined1 *)0x4:
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + uVar17 * 4),&local_24,2,0x67,
               0x67);
    if (pcVar10[4] == '\x02') {
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                       *(int *)(&this_00->field_0x20f4 + uVar17 * 4),0,local_24,local_20,local_1c,
                       local_18);
      uVar7 = 2;
      iVar9 = -1;
      iVar8 = -1;
      puVar13 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),(uint *)(pcVar10 + 10),
                                   (uint *)&DAT_007c7274,local_1c);
      ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar13,iVar8,iVar9,uVar7);
      break;
    }
    if (pcVar10[4] != '\x04') break;
    iVar8 = *(int *)(pcVar10 + 0x50);
    if ((uint)(byte)pcVar10[5] < *(uint *)(iVar8 + 0xc)) {
      puVar13 = (uint *)(*(int *)(iVar8 + 8) * (uint)(byte)pcVar10[5] + *(int *)(iVar8 + 0x1c));
    }
    else {
      puVar13 = (uint *)0x0;
    }
    if (puVar13 == (uint *)0x0) break;
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                     *(int *)(&this_00->field_0x20f4 + uVar17 * 4),0,local_24,local_20,local_1c,
                     local_18);
    uVar7 = 2;
    iVar12 = -1;
    iVar9 = -1;
    puVar25 = (uint *)&DAT_007c7274;
    iVar8 = local_1c;
LAB_005d6d70:
    puVar13 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar13,puVar25,iVar8);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar13,iVar9,iVar12,uVar7);
    break;
  case (undefined1 *)0x5:
    if ((*pcVar10 != '\0') &&
       (MMObjTy::PaintButDib
                  ((MMObjTy *)this_00,*(int *)(&this_00->field_0x20f4 + uVar17 * 4),&local_24,2,
                   (-(*(short *)(param_1 + 0x14) != 0) & 0xfcU) + 0x23,0x67), pcVar10[4] != '\0')) {
      if (DAT_00808a8f == '\0') {
        if (((DAT_0080874d != 0xff) && (bVar16 = pcVar10[2], bVar16 != 0xff)) &&
           (DAT_0080874d != bVar16)) {
          local_28 = 0xffffffff;
          local_2c = (undefined1 *)CONCAT31(local_2c._1_3_,bVar16);
          uVar18 = (uint)DAT_0080874d;
          uVar20 = (uint)bVar16;
          cVar19 = *(char *)((int)&DAT_00808a4f + uVar18 * 8 + uVar20);
          if ((cVar19 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar18) == '\0')) {
            uVar7 = 0xfffffffe;
          }
          else if ((cVar19 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar18) == '\0')) {
            uVar7 = 0xffffffff;
          }
          else if ((cVar19 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar18) == '\x01')) {
            uVar7 = 1;
          }
          else if ((cVar19 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar18) == '\x01')) {
            uVar7 = 2;
          }
          else {
            uVar7 = 0;
          }
          switch(uVar7) {
          default:
            iVar8 = -1;
            break;
          case 1:
            iVar8 = 1;
            break;
          case 2:
            iVar8 = 3;
            break;
          case 0xfffffffe:
            iVar8 = 0;
            break;
          case 0xffffffff:
            iVar8 = 2;
          }
          if (-1 < iVar8 + -1) {
            pbVar15 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x1f4b,iVar8 + -1);
            thunk_FUN_00540760(*(undefined4 **)(&this_00->field_0x20f4 + uVar17 * 4),
                               (local_1c - *(int *)(pbVar15 + 4)) / 2 + local_24,
                               (local_18 - *(int *)(pbVar15 + 8)) / 2 + 1 + local_20,'\x06',pbVar15)
            ;
          }
        }
      }
      else {
        iVar8 = (byte)pcVar10[0x4a] + 0x41;
        uVar7 = FUN_006b0140(0x1f4a,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd508,uVar7,iVar8);
        ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),
                         *(int *)(&this_00->field_0x20f4 + uVar17 * 4),0,local_24,local_20,local_1c,
                         local_18);
        ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),&DAT_0080f33a,-1,-1,2);
      }
    }
  }
switchD_005d6abd_default:
  FUN_006b35d0(DAT_008075a8,*(uint *)(&this_00->field_0x20cc + uVar17 * 4));
  if (*(short *)(param_1 + 0x14) == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_c8.previous;
  return 0;
}


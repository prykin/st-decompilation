
undefined4 __fastcall FUN_00480600(void *param_1)

{
  STT3DSprC *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined3 extraout_var_00;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  byte bVar20;
  undefined4 local_20 [2];
  undefined4 local_18;
  short local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  iVar3 = thunk_FUN_0041c710((int)param_1);
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar3 == 1) {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar4,iVar3);
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar4,iVar3);
    iVar3 = thunk_FUN_004e60d0(*(int *)((int)param_1 + 0x24),0x24);
    if ((iVar3 < 1) ||
       ((uint)(*(int *)((int)param_1 + 0x77a) + *(int *)(DAT_00802a38 + 0xe4)) %
        (*(uint *)((int)param_1 + 0x77e) * 2) <= *(uint *)((int)param_1 + 0x77e))) {
      bVar2 = thunk_FUN_0041caf0((int)param_1);
      iVar3 = CONCAT31(extraout_var,bVar2);
    }
    else {
      iVar3 = 0;
    }
  }
  iVar5 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar5,iVar3);
  switch(*(undefined4 *)((int)param_1 + 0x6f7)) {
  case 9:
    puVar6 = (undefined4 *)(((8 - (int)*(short *)((int)param_1 + 0x6c) / 0x2d) * 0xf) % 0x78);
    iVar3 = ((4 - DAT_008073fc) * 0x1e) % 0x78;
    if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0) {
      *(int *)((int)param_1 + 0x822) = *(int *)((int)param_1 + 0x822) + 1;
    }
    if (*(int *)((int)param_1 + 0x822) == 0xf) {
      *(undefined4 *)((int)param_1 + 0x822) = 0;
    }
    local_8 = (int)puVar6 + *(int *)((int)param_1 + 0x822) + iVar3;
    local_c = puVar6;
    uVar4 = thunk_FUN_004ac910(this,'\x0e');
    if (local_8 != uVar4) {
      thunk_FUN_004abe40(this,'\x0e',local_8);
      thunk_FUN_004abe40(this,'\f',(int)puVar6 + *(int *)((int)param_1 + 0x822) + iVar3);
      iVar3 = STT3DSprC::ShowCurFase(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::ShowCurFase(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::SetCurShad(this,'\x0e',local_c);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    goto LAB_004811c2;
  default:
switchD_004806bc_caseD_a:
    iVar5 = ((0x18 - (int)*(short *)((int)param_1 + 0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) %
            0x18;
    iVar3 = thunk_FUN_004ac910(this,'\x0e');
    if (iVar5 != iVar3) {
      thunk_FUN_004abe40(this,'\x0e',iVar5);
      thunk_FUN_004abe40(this,'\f',iVar5);
      iVar3 = STT3DSprC::ShowCurFase(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::ShowCurFase(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::SetCurShad
                        (this,'\x0e',(0x18 - (int)*(short *)((int)param_1 + 0x6c) / 0xf) % 0x18);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    break;
  case 0x15:
    puVar6 = (undefined4 *)(((8 - (int)*(short *)((int)param_1 + 0x6c) / 0x2d) * 0x14) % 0xa0);
    iVar5 = ((4 - DAT_008073fc) * 0x28) % 0xa0;
    iVar3 = *(int *)((int)param_1 + 0x822) + 1;
    *(int *)((int)param_1 + 0x822) = iVar3;
    if (iVar3 == 0x14) {
      *(undefined4 *)((int)param_1 + 0x822) = 0;
    }
    local_8 = (int)puVar6 + *(int *)((int)param_1 + 0x822) + iVar5;
    local_c = puVar6;
    uVar4 = thunk_FUN_004ac910(this,'\x0e');
    if (local_8 != uVar4) {
      thunk_FUN_004abe40(this,'\x0e',local_8);
      thunk_FUN_004abe40(this,'\f',(int)puVar6 + *(int *)((int)param_1 + 0x822) + iVar5);
      iVar3 = STT3DSprC::ShowCurFase(this,'\x0e');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::ShowCurFase(this,'\f');
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = STT3DSprC::SetCurShad(this,'\x0e',*(int *)((int)param_1 + 0x822) + (int)local_c);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
    goto LAB_004811c2;
  case 0x16:
  case 0x25:
    if (*(int *)((int)param_1 + 0x732) == 1) {
      bVar2 = thunk_FUN_0041d350(param_1,(uint)DAT_0080874d);
      iVar3 = *(int *)((int)param_1 + 0x74a);
      if (CONCAT31(extraout_var_00,bVar2) == 1) {
        if (iVar3 == -1) {
          *(undefined4 *)((int)param_1 + 0x74a) = 0;
          if (DAT_00811798 != (void *)0x0) {
            thunk_FUN_00620e40(DAT_00811798,(int)*(short *)((int)param_1 + 0x47),
                               (int)*(short *)((int)param_1 + 0x49),(uint)DAT_0080874d);
          }
        }
        else if ((iVar3 < 0) || ((int)*(short *)(DAT_00806724 + 0x23) / 2 <= iVar3)) {
          if ((int)*(short *)(DAT_00806724 + 0x23) / 2 < iVar3) {
            *(int *)((int)param_1 + 0x74a) = iVar3 + -1;
          }
          if (*(int *)((int)param_1 + 0x74a) == (int)*(short *)(DAT_00806724 + 0x23) / 2 + 1) {
            (*(code *)**(undefined4 **)this)();
          }
          sVar13 = *(short *)(DAT_00806724 + 0x23);
LAB_00480bfa:
          if ((int)sVar13 / 2 < *(int *)((int)param_1 + 0x74a)) goto LAB_00480c6a;
        }
        else {
          *(int *)((int)param_1 + 0x74a) = iVar3 + 1;
        }
      }
      else {
        local_10 = iVar3;
        if (iVar3 == -1) {
          *(undefined4 *)((int)param_1 + 0x74a) = 0;
        }
        else {
          if ((iVar3 < 0) || ((int)*(short *)(DAT_00806724 + 0x23) / 2 <= iVar3)) {
            bVar20 = *(byte *)((int)param_1 + 0x24);
            local_8 = CONCAT31(local_8._1_3_,bVar20);
            if (DAT_00808a8f == '\0') {
              if (DAT_0080874d == bVar20) {
LAB_00480a79:
                iVar5 = 0;
              }
              else {
                uVar9 = (uint)DAT_0080874d;
                uVar4 = (uint)bVar20;
                cVar1 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4);
                if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\0'))
                {
                  iVar5 = -2;
                }
                else if ((cVar1 == '\x01') &&
                        (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\0')) {
                  iVar5 = -1;
                }
                else if ((cVar1 == '\0') &&
                        (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\x01')) {
                  iVar5 = 1;
                }
                else {
                  if ((cVar1 != '\x01') ||
                     (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) != '\x01'))
                  goto LAB_00480a79;
                  iVar5 = 2;
                }
              }
              bVar2 = iVar5 < 0;
            }
            else {
              bVar2 = (&DAT_008087ea)[(uint)bVar20 * 0x51] !=
                      (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
            }
            if (bVar2) {
LAB_00480b80:
              local_c = (undefined4 *)CONCAT31(local_c._1_3_,bVar20);
              if (iVar3 < *(short *)(DAT_00806724 + 0x23) + -1) {
                *(int *)((int)param_1 + 0x74a) = iVar3 + 1;
              }
              if (*(int *)((int)param_1 + 0x74a) == (int)*(short *)(DAT_00806724 + 0x23) / 2 + 1) {
                thunk_FUN_0042c5f0(DAT_0080874d,*(int *)((int)param_1 + 0x20),local_8,
                                   CONCAT22((short)((uint)*(int *)((int)param_1 + 0x74a) >> 0x10),
                                            *(undefined2 *)((int)param_1 + 0x32)));
                thunk_FUN_0042cef0(*(int *)((int)param_1 + 0x20),*(char *)((int)param_1 + 0x24),
                                   *(short *)((int)param_1 + 0x32));
                thunk_FUN_004ad5e0((int)this);
              }
            }
            else {
              local_c = (undefined4 *)CONCAT31(local_c._1_3_,bVar20);
              if (DAT_00808a8f == '\0') {
                if (bVar20 == DAT_0080874d) {
LAB_00480b30:
                  iVar5 = 0;
                }
                else {
                  uVar4 = (uint)bVar20;
                  uVar9 = (uint)DAT_0080874d;
                  cVar1 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9);
                  if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) == '\0')
                     ) {
                    iVar5 = -2;
                  }
                  else if ((cVar1 == '\x01') &&
                          (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) == '\0')) {
                    iVar5 = -1;
                  }
                  else if ((cVar1 == '\0') &&
                          (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) == '\x01')) {
                    iVar5 = 1;
                  }
                  else {
                    if ((cVar1 != '\x01') ||
                       (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) != '\x01'))
                    goto LAB_00480b30;
                    iVar5 = 2;
                  }
                }
                bVar2 = iVar5 < 0;
              }
              else {
                bVar2 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                        (&DAT_008087ea)[(uint)bVar20 * 0x51];
              }
              if (bVar2) goto LAB_00480b80;
              if ((int)*(short *)(DAT_00806724 + 0x23) / 2 < iVar3) {
                *(int *)((int)param_1 + 0x74a) = iVar3 + -1;
              }
              if (*(int *)((int)param_1 + 0x74a) == (int)*(short *)(DAT_00806724 + 0x23) / 2 + 1) {
                (*(code *)**(undefined4 **)this)();
              }
            }
            sVar13 = *(short *)(DAT_00806724 + 0x23);
            goto LAB_00480bfa;
          }
          *(int *)((int)param_1 + 0x74a) = iVar3 + 1;
        }
      }
    }
    else {
      if (-1 < *(int *)((int)param_1 + 0x74a)) {
        *(int *)((int)param_1 + 0x74a) = *(int *)((int)param_1 + 0x74a) + -1;
      }
      if (*(int *)((int)param_1 + 0x74a) == -1) {
        thunk_FUN_004ace30(this,0,0);
      }
      if (*(int *)((int)param_1 + 0x74a) == (int)*(short *)(DAT_00806724 + 0x23) / 2 + 1) {
        (*(code *)**(undefined4 **)this)();
      }
      if (*(int *)((int)param_1 + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2)
      goto LAB_00480c7f;
LAB_00480c6a:
      iVar5 = 0;
      iVar3 = thunk_FUN_004ad650((int)this);
      FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar3,iVar5);
    }
LAB_00480c7f:
    if (-1 < *(int *)((int)param_1 + 0x74a)) {
      thunk_FUN_004ace30(this,*(uint *)(DAT_00806724 + 0x30 + *(int *)((int)param_1 + 0x74a) * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
      bVar20 = *(byte *)((int)param_1 + 0x24);
      local_8 = CONCAT31(local_8._1_3_,bVar20);
      if (DAT_00808a8f == '\0') {
        if (DAT_0080874d == bVar20) {
LAB_00480d55:
          iVar3 = 0;
        }
        else {
          uVar9 = (uint)DAT_0080874d;
          uVar4 = (uint)bVar20;
          cVar1 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4);
          if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\0')) {
            iVar3 = -2;
          }
          else if ((cVar1 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\0'))
          {
            iVar3 = -1;
          }
          else if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) == '\x01'))
          {
            iVar3 = 1;
          }
          else {
            if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9) != '\x01'))
            goto LAB_00480d55;
            iVar3 = 2;
          }
        }
        bVar2 = iVar3 < 0;
      }
      else {
        bVar2 = (&DAT_008087ea)[(uint)bVar20 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
      }
      if (!bVar2) {
        local_10 = CONCAT31(local_10._1_3_,bVar20);
        if (DAT_00808a8f == '\0') {
          if (bVar20 == DAT_0080874d) {
LAB_00480e0f:
            iVar3 = 0;
          }
          else {
            uVar4 = (uint)bVar20;
            uVar9 = (uint)DAT_0080874d;
            cVar1 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar9);
            if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) == '\0')) {
              iVar3 = -2;
            }
            else if ((cVar1 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) == '\0')) {
              iVar3 = -1;
            }
            else if ((cVar1 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) == '\x01')) {
              iVar3 = 1;
            }
            else {
              if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar4) != '\x01')
                 ) goto LAB_00480e0f;
              iVar3 = 2;
            }
          }
          bVar2 = iVar3 < 0;
        }
        else {
          bVar2 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] != (&DAT_008087ea)[(uint)bVar20 * 0x51]
          ;
        }
        if (!bVar2) {
          if (*(int *)((int)param_1 + 0x746) == 1) {
            thunk_FUN_004ace60(this,'\x0e');
            thunk_FUN_004ace60(this,'\r');
            thunk_FUN_004ace60(this,'\f');
            thunk_FUN_004aceb0(this,'\x01');
            thunk_FUN_004aceb0(this,'\x02');
            thunk_FUN_004aceb0(this,'\0');
            thunk_FUN_004aceb0(this,'\x0f');
            thunk_FUN_004aceb0(this,'\v');
            thunk_FUN_004aceb0(this,'\n');
            thunk_FUN_004aceb0(this,'\t');
            thunk_FUN_004aceb0(this,'\b');
            *(undefined4 *)((int)param_1 + 0x746) = 0;
          }
          goto LAB_00480f12;
        }
      }
      local_10 = CONCAT31(local_10._1_3_,bVar20);
      if (*(int *)((int)param_1 + 0x746) == 0) {
        thunk_FUN_004ace60(this,'\x0e');
        thunk_FUN_004ace60(this,'\r');
        thunk_FUN_004ace60(this,'\f');
        thunk_FUN_004ace60(this,'\x01');
        thunk_FUN_004ace60(this,'\x02');
        thunk_FUN_004ace60(this,'\0');
        thunk_FUN_004ace60(this,'\x0f');
        thunk_FUN_004ace60(this,'\v');
        thunk_FUN_004ace60(this,'\n');
        thunk_FUN_004ace60(this,'\t');
        thunk_FUN_004ace60(this,'\b');
        *(undefined4 *)((int)param_1 + 0x746) = 1;
      }
    }
LAB_00480f12:
    if (*(int *)((int)param_1 + 0x6f7) == 0x16) goto switchD_004806bc_caseD_a;
    break;
  case 0x24:
    break;
  }
  if ((*(int *)((int)param_1 + 0x76) == 1) ||
     ((*(int *)((int)param_1 + 0x76) == 0 && (*(short *)((int)param_1 + 0x6e) != 0x2f)))) {
    thunk_FUN_00416390((int)param_1);
  }
  uVar4 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0x1c) = uVar4;
  iVar3 = (uVar4 >> 0x10) % 7 - 3;
  uVar4 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0x1c) = uVar4;
  uVar9 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)param_1 + 0x1c) = uVar9;
  local_10 = (uVar9 >> 0x10) % 7 - 3;
  if ((((*(char *)((int)param_1 + 0xe3) == '\x01') && (*(short *)((int)param_1 + 0xfa) == 0)) &&
      (*(int *)((int)param_1 + 0xe8) != 1)) &&
     (((*(char *)((int)param_1 + 99) == *(char *)((int)param_1 + 0x61) &&
       (*(int *)((int)param_1 + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2)) &&
      (local_8 = 0, *(char *)((int)param_1 + 0x2bf) != '\0')))) {
    local_c = (undefined4 *)((int)param_1 + 0x2b3);
    do {
      puVar6 = (undefined4 *)
               thunk_FUN_0041dc40(local_20,*local_c,*(undefined2 *)(local_c + 1),
                                  *(short *)((int)param_1 + 0x6c));
      uVar8 = *puVar6;
      bVar20 = 0;
      sVar19 = 0;
      iVar5 = -1;
      local_14 = *(short *)(puVar6 + 1);
      sVar18 = 0;
      sVar17 = 0;
      sVar16 = 0;
      sVar15 = 0;
      sVar14 = 0;
      sVar13 = 0;
      local_18 = uVar8;
      if (DAT_0080732c == 1) {
        sVar13 = 0;
        sVar14 = 0;
        sVar15 = 0;
        sVar16 = 0;
        sVar17 = 0;
        sVar18 = 0;
        sVar19 = 0;
        bVar20 = 0;
        lVar12 = __ftol();
        iVar7 = (int)local_14 + *(short *)((int)param_1 + 0x45) + local_10 + (int)(short)lVar12;
        iVar10 = (int)*(short *)((int)param_1 + 0x43) - (int)local_18._2_2_;
        iVar11 = (int)(short)local_18 + iVar3 + *(short *)((int)param_1 + 0x41);
      }
      else {
        iVar7 = (int)local_14 + local_10 + *(short *)((int)param_1 + 0x45);
        local_18._2_2_ = (short)((uint)uVar8 >> 0x10);
        iVar10 = (int)*(short *)((int)param_1 + 0x43) - (int)local_18._2_2_;
        local_18._0_2_ = (short)uVar8;
        iVar11 = (int)(short)local_18 + iVar3 + *(short *)((int)param_1 + 0x41);
      }
      thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar11,iVar10 + ((uVar4 >> 0x10) % 7 - 3),iVar7,sVar13,
                         sVar14,sVar15,sVar16,sVar17,sVar18,iVar5,sVar19,bVar20);
      local_c = (undefined4 *)((int)local_c + 6);
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)(uint)*(byte *)((int)param_1 + 0x2bf));
  }
LAB_004811c2:
  uVar8 = thunk_FUN_0041da30((int)param_1);
  return uVar8;
}


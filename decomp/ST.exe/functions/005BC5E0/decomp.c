
undefined4 __thiscall FUN_005bc5e0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined1 *puVar7;
  undefined3 extraout_var_00;
  int iVar8;
  void *pvVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  undefined4 local_8c;
  undefined4 local_88 [16];
  undefined4 local_48;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_c = this;
  uVar5 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x61) = uVar5;
  local_8c = DAT_00858df8;
  DAT_00858df8 = &local_8c;
  iVar6 = __setjmp3(local_88,0,unaff_EDI,unaff_ESI);
  puVar10 = local_c;
  if (iVar6 != 0) {
    DAT_00858df8 = (undefined4 *)local_8c;
    iVar8 = FUN_006ad4d0(s_E____titans_Start_prov_obj_cpp_007ccd28,0x34c,0,iVar6,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    FUN_006a5e40(iVar6,0,0x7ccd28,0x34c);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_c,param_1);
  uVar11 = *(uint *)(param_1 + 0x10);
  if (uVar11 < 0x6941) {
    if (uVar11 == 0x6940) {
      thunk_FUN_005bba40((int)puVar10);
      goto switchD_005bc9da_caseD_6944;
    }
    if (uVar11 < 0x6120) {
      if (uVar11 != 0x611f) {
        if (uVar11 < 6) {
          if (uVar11 == 5) {
            thunk_FUN_005ba8b0('\0');
          }
          else if (uVar11 == 0) {
            thunk_FUN_005bae00(puVar10);
          }
          else if (uVar11 == 2) {
            thunk_FUN_005b9b10(*(char *)(*(int *)(param_1 + 0x14) + 0x14),
                               *(char *)(*(int *)(param_1 + 0x14) + 0x18));
          }
          else if (uVar11 == 3) {
            thunk_FUN_005ba560();
          }
          goto switchD_005bc9da_caseD_6944;
        }
        if (uVar11 != 0x6109) {
          if (uVar11 == 0x610a) {
            *(undefined4 *)((int)puVar10 + 0x45) = 0x200;
            *(undefined4 *)((int)puVar10 + 0x49) = 0;
            *(undefined4 *)((int)puVar10 + 0x4d) = 0x610a;
            thunk_FUN_005b66e0(puVar10);
          }
          goto switchD_005bc9da_caseD_6944;
        }
      }
    }
    else {
      if (0x6501 < uVar11) {
        if (uVar11 != 0x6502) {
          if (uVar11 == 0x693f) {
            thunk_FUN_005bb9f0((int)puVar10);
          }
          goto switchD_005bc9da_caseD_6944;
        }
        uVar4 = thunk_FUN_005da940(DAT_0081176c,*(int *)((int)puVar10 + 0x1a61));
        if (CONCAT31(extraout_var,uVar4) == 0) {
          *(undefined1 *)((int)puVar10 + 0x1a71) = uVar4;
          iVar6 = thunk_FUN_005da980(*(int *)((int)puVar10 + 0x1a61));
          if ((iVar6 == 0) && (iVar6 = thunk_FUN_005daa90(), iVar6 == 0)) {
            DAT_0080877e = 0;
            thunk_FUN_005bb910('\0');
            if (*(int *)(*(int *)((int)puVar10 + 0x1a5b) + 0x2e6) != 0) {
              local_18 = 0x1000000;
              local_14 = 0;
              local_10 = 0;
              local_1c = 0x10101;
              thunk_FUN_005b8f40(*(void **)(*(int *)((int)puVar10 + 0x1a5b) + 0x2e6),&local_1c);
            }
            *(undefined1 *)((int)puVar10 + 0x65) = 5;
            *(undefined1 *)(puVar10 + 0x698) = 1;
          }
          goto switchD_005bc9da_caseD_6944;
        }
LAB_005bccb9:
        *(undefined4 *)((int)puVar10 + 0x4d) = 0x6951;
        (**(code **)*puVar10)((int)puVar10 + 0x3d);
        goto switchD_005bc9da_caseD_6944;
      }
      if (uVar11 == 0x6501) goto switchD_005bc9da_caseD_6949;
      if (uVar11 != 0x6121) {
        if (uVar11 == 0x631f) {
          FUN_006b4170(*(int *)((int)puVar10 + 0x1c8e),0,3,0x16,0x22c,0x16,0xff);
          FUN_00710a90(*(int *)((int)puVar10 + 0x1c8e),0,5,0x16,0x226,0x16);
          FUN_007119c0((uint *)**(undefined4 **)(param_1 + 0x14),0,-1,3);
          if ((*(ushort *)(param_1 + 0x18) != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
            iVar6 = *(ushort *)(param_1 + 0x18) + 5;
            FUN_006b5b10(*(int *)((int)puVar10 + 0x1c8e),0,iVar6,*(ushort *)(param_1 + 0x1a) + 0x19,
                         iVar6,*(ushort *)(param_1 + 0x1a) + 0x28,9,0xd);
          }
          FUN_006b35d0(DAT_008075a8,*(uint *)((int)puVar10 + 0x1c8a));
        }
        else if (uVar11 == 0x64ff) {
          *(undefined1 *)((int)puVar10 + 0x1a71) = 0;
          iVar6 = thunk_FUN_005daa90();
          if (iVar6 == 0) {
            *(undefined4 *)((int)puVar10 + 0x31) = 0;
            puVar1 = (undefined4 *)((int)puVar10 + 0x1d);
            *(undefined4 *)((int)puVar10 + 0x2d) = 0x20;
            FUN_006e6080(puVar10,2,*(undefined4 *)((int)puVar10 + 0x1a73),puVar1);
            *(undefined4 *)((int)puVar10 + 0x2d) = 0x28;
            uVar11 = *(uint *)(*(int *)((int)DAT_0081176c + 0x68e) + 4);
            *(uint *)((int)puVar10 + 0x31) = uVar11 & ((int)uVar11 < 0) - 1;
            FUN_006e6080(puVar10,2,*(undefined4 *)((int)puVar10 + 0x1a73),puVar1);
            if (0 < *(int *)(*(int *)((int)DAT_0081176c + 0x68e) + 4)) {
              *(undefined4 *)((int)puVar10 + 0x2d) = 0x20;
              *(undefined4 *)((int)puVar10 + 0x31) = 1;
              FUN_006e6080(puVar10,2,*(undefined4 *)((int)puVar10 + 0x1a73),puVar1);
            }
            iVar6 = *(int *)((int)puVar10 + 0x1a5b);
            if (*(int *)(iVar6 + 0x2e6) != 0) {
              puVar10 = &local_48;
              for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              *(undefined2 *)puVar10 = 0;
              local_48._2_2_ = ((*(int *)(*(int *)((int)DAT_0081176c + 0x68e) + 4) < 1) - 1 & 2) - 1
              ;
              thunk_FUN_005b9010(*(void **)(iVar6 + 0x2e6),(int)&local_48);
            }
          }
        }
        goto switchD_005bc9da_caseD_6944;
      }
    }
    thunk_FUN_005dadf0();
    *(undefined4 *)((int)puVar10 + 0x45) = 0x200;
    *(undefined4 *)((int)puVar10 + 0x49) = 0;
    *(undefined4 *)((int)puVar10 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)puVar10 + 0x51) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)((int)puVar10 + 0x55) = *(undefined4 *)(param_1 + 0x18);
    thunk_FUN_005b66e0(puVar10);
    goto switchD_005bc9da_caseD_6944;
  }
  if (0x8160 < uVar11) {
    switch(uVar11) {
    case 0x8161:
      FUN_006b4170(*(int *)((int)puVar10 + 0x1c82),0,0,(uint)*(ushort *)(param_1 + 0x1a),
                   *(int *)(*(int *)((int)puVar10 + 0x1c82) + 4),0x13,0);
      FUN_00710a90(*(int *)((int)puVar10 + 0x1c82),0,4,(uint)*(ushort *)(param_1 + 0x1a),
                   *(int *)(*(int *)((int)puVar10 + 0x1c82) + 4) + -4,0x13);
      if (*(char *)((int)puVar10 + 0x1a5f) == '\0') {
        iVar6 = *(int *)((int)DAT_0081176c + 0x68a);
      }
      else {
        iVar6 = *(int *)((int)DAT_0081176c + 0x68e);
      }
      if (iVar6 != 0) {
        FUN_007119c0(*(uint **)(iVar6 + 8 + (uint)*(ushort *)(param_1 + 0x14) * 0x14),2,-1,
                     (-(uint)(*(short *)(param_1 + 0x16) != 0) & 2) + 1);
      }
      FUN_006b3640(DAT_008075a8,
                   *(uint *)((int)puVar10 + (*(ushort *)(param_1 + 0x1a) / 0x13) * 4 + 0x1c2a),
                   0xfffffffe,0x7a,*(ushort *)(param_1 + 0x1a) + 0x67);
      break;
    case 0x8163:
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      *(undefined1 *)((int)puVar10 + 0x1a71) = 0;
      *(undefined4 *)((int)puVar10 + 0x1a61) = uVar5;
      break;
    case 0x8164:
      thunk_FUN_005b6560((int)puVar10 + 0x1a77,param_1,0);
      break;
    case 0x8165:
      thunk_FUN_005b6560((int)(puVar10 + 0x6c2),param_1,0);
      break;
    case 0x8166:
      uVar11 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
      *(uint *)((int)puVar10 + 0x1bb9) = uVar11;
      if (*(uint *)((int)puVar10 + 0x1b9d) != 0xffffffff) {
        FUN_006b3730(*(uint **)((int)puVar10 + 0x1be1),*(uint *)((int)puVar10 + 0x1b9d),
                     *(uint *)((int)puVar10 + 0x1ba1),*(uint *)((int)puVar10 + 0x1bb5),uVar11);
      }
    }
    goto switchD_005bc9da_caseD_6944;
  }
  if (uVar11 == 0x8160) {
    *(undefined4 *)(param_1 + 0x18) = 0x13;
    goto switchD_005bc9da_caseD_6944;
  }
  switch(uVar11) {
  case 0x6942:
    *(undefined4 *)((int)puVar10 + 0x45) = 0x200;
    *(undefined4 *)((int)puVar10 + 0x49) = 0;
    *(undefined4 *)((int)puVar10 + 0x4d) = 0x6102;
    *(undefined4 *)((int)puVar10 + 0x51) = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_005b66e0(puVar10);
    break;
  case 0x6943:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(puVar10,0x6942,*(undefined4 *)(param_1 + 0x14),0);
    thunk_FUN_005bb910('\x01');
    pvVar9 = *(void **)(*(int *)((int)puVar10 + 0x1a5b) + 0x2e6);
    goto LAB_005bcd75;
  case 0x6949:
switchD_005bc9da_caseD_6949:
    uVar4 = thunk_FUN_005da940(DAT_0081176c,*(int *)((int)puVar10 + 0x1a61));
    if (CONCAT31(extraout_var_00,uVar4) != 0) goto LAB_005bccb9;
    iVar6 = thunk_FUN_005da980(*(int *)((int)puVar10 + 0x1a61));
    if (iVar6 != 0) break;
    if (*(int *)(*(int *)((int)puVar10 + 0x1c92) + 8) < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined4 **)(*(int *)((int)puVar10 + 0x1c92) + 0x14);
    }
    iVar6 = thunk_FUN_005dab70(0,uVar5);
    if (iVar6 != 0) {
      pvVar9 = *(void **)(*(int *)((int)puVar10 + 0x1a5b) + 0x2e6);
      if (pvVar9 != (void *)0x0) {
        thunk_FUN_005b7ef0(pvVar9,0x2134,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                           0,0);
      }
      break;
    }
    DAT_0080877e = 1;
    thunk_FUN_005b6350(puVar10,0x611f,(-(uint)(*(int *)(param_1 + 0x10) != 0x6501) & 8) + 4,0x11);
    thunk_FUN_005bb910('\x01');
    pvVar9 = *(void **)(*(int *)((int)puVar10 + 0x1a5b) + 0x2e6);
    goto LAB_005bcd75;
  case 0x694e:
    iVar6 = thunk_FUN_005dab70(*(int *)((int)puVar10 + 0x1a61),&DAT_008016a0);
    if (iVar6 == 0) {
      *(undefined1 *)((int)puVar10 + 0x1a71) = 1;
      *(undefined4 *)((int)puVar10 + 0x1a69) = *(undefined4 *)((int)puVar10 + 0x61);
      *(undefined4 *)((int)puVar10 + 0x1a6d) = 0;
      pvVar9 = DAT_00802a30;
      if (DAT_00802a30 != (void *)0x0) {
        uVar5 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 5;
        *(undefined2 *)((int)pvVar9 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,uVar2,uVar5);
        thunk_FUN_00543c90(pvVar9,*(int *)((int)pvVar9 + 0xc5),*(int *)((int)pvVar9 + 0xc9));
        *(undefined1 *)((int)pvVar9 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar9 + 0x4df) = 0xffffffff;
      }
    }
    break;
  case 0x6951:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(puVar10,0x610a,0,0);
    thunk_FUN_005bb910('\x01');
    pvVar9 = *(void **)(*(int *)((int)puVar10 + 0x1a5b) + 0x2e6);
LAB_005bcd75:
    if (pvVar9 != (void *)0x0) {
      thunk_FUN_005b8c70(pvVar9,1,0,1);
    }
    break;
  case 0x6952:
    *(undefined1 *)((int)puVar10 + 0x1a71) = 0;
    pvVar9 = DAT_00802a30;
    DAT_0080877e = 1;
    if (DAT_00802a30 != (void *)0x0) {
      uVar5 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
      uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
      *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
      *(undefined2 *)((int)pvVar9 + 0x494) = 0xffff;
      thunk_FUN_0054bf40(0,uVar2,uVar5);
      thunk_FUN_00543c90(pvVar9,*(int *)((int)pvVar9 + 0xc5),*(int *)((int)pvVar9 + 0xc9));
      *(undefined1 *)((int)pvVar9 + 0xd2) = 0;
      *(undefined4 *)((int)pvVar9 + 0x4df) = 0xffffffff;
    }
    if (*(char *)((int)puVar10 + 0x1a5f) == '\0') {
      thunk_FUN_005b6350(puVar10,0x6942,*(undefined4 *)(param_1 + 0x14),0);
      thunk_FUN_005bb910('\x01');
      pvVar9 = *(void **)(*(int *)((int)puVar10 + 0x1a5b) + 0x2e6);
      if (pvVar9 != (void *)0x0) {
        thunk_FUN_005b8c70(pvVar9,1,0,1);
      }
    }
    else {
      thunk_FUN_005bb910('\0');
      if (*(int *)(*(int *)((int)puVar10 + 0x1a5b) + 0x2e6) != 0) {
        local_2c = 0x10100;
        local_24 = 0;
        local_28 = 0x100;
        local_20 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)((int)puVar10 + 0x1a5b) + 0x2e6),&local_2c);
      }
      *(undefined1 *)((int)puVar10 + 0x65) = 5;
      *(undefined1 *)(puVar10 + 0x698) = 0;
      local_8 = 0xffffffff;
      FUN_006b3430(DAT_008075a8,*(uint *)((int)puVar10 + 0x1c8a));
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   *(int *)((int)puVar10 + 0x1a5b) + 0x140);
      FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x197);
      puVar7 = (undefined1 *)FUN_0072e530(0x33);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar7[2] = 1;
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 3) = 0xffffffff;
        puVar7[1] = 2;
        *(undefined4 *)(puVar7 + 7) = 0;
        *(undefined4 *)(puVar7 + 0xb) = 0;
        *(undefined4 *)(puVar7 + 0xf) = 0;
        *(undefined4 *)(puVar7 + 0x1b) = 1;
        *(undefined4 *)(puVar7 + 0x13) = 1;
        *(undefined4 *)(puVar7 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar7 + 0x27) = 0;
        *(undefined4 *)(puVar7 + 0x23) = 0;
        *(undefined4 *)(puVar7 + 0x2f) = 1;
        *(undefined4 *)(puVar7 + 0x2b) = 1;
      }
      *(undefined1 **)((int)puVar10 + 0x1c9a) = puVar7;
      if (puVar7 != (undefined1 *)0x0) {
        uVar13 = 0;
        cVar12 = '\x01';
        uVar11 = 0x10;
        iVar8 = 1;
        iVar6 = FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
        uVar11 = thunk_FUN_005aacb0(1,0x79,0x197,iVar6,iVar8,uVar11,cVar12,uVar13);
        if (uVar11 != 0) {
          iVar6 = *(int *)((int)puVar10 + 0x1c9a);
          *(undefined1 *)(iVar6 + 2) = 1;
          *(undefined4 *)(iVar6 + 0x17) = *(undefined4 *)(iVar6 + 0x13);
          uVar11 = *(uint *)(*(int *)((int)puVar10 + 0x1c9a) + 3);
          if (-1 < (int)uVar11) {
            FUN_006b3430(DAT_008075a8,uVar11);
          }
          FUN_006b3af0(DAT_008075a8,*(uint *)((int)puVar10 + 0x1c8a));
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
      }
    }
  }
switchD_005bc9da_caseD_6944:
  DAT_00858df8 = (undefined4 *)local_8c;
  uVar5 = thunk_FUN_005b6430();
  return uVar5;
}


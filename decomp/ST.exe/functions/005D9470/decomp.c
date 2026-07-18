
undefined4 __thiscall FUN_005d9470(void *this,int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined4 *this_00;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  UINT UVar13;
  undefined4 unaff_ESI;
  char *pcVar14;
  int *piVar15;
  byte *pbVar16;
  void *unaff_EDI;
  char *pcVar17;
  byte *pbVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  undefined4 *local_64;
  undefined4 local_60 [16];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  uint *local_8;
  
  local_10 = this;
  uVar5 = FUN_006e51b0(*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x61) = uVar5;
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  iVar6 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar6 != 0) {
    DAT_00858df8 = local_64;
    iVar20 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x212,0,iVar6,&DAT_007a4ccc);
    if (iVar20 == 0) {
      FUN_006a5e40(iVar6,0,0x7cd5c4,0x212);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
  thunk_FUN_005b6450(local_10,param_1);
  uVar10 = *(uint *)(param_1 + 0x10);
  if (uVar10 < 0x6980) {
    if (uVar10 != 0x697f) {
      if (uVar10 < 6) {
        if (uVar10 == 5) {
          thunk_FUN_005d8160();
        }
        else if (uVar10 == 0) {
          thunk_FUN_005d81f0(this_00);
        }
        else if (uVar10 == 2) {
          thunk_FUN_005d7a50();
        }
        else if (uVar10 == 3) {
          thunk_FUN_005d7f80();
        }
      }
      else if (uVar10 == 0x68ff) {
        *(undefined1 *)((int)this_00 + 0x1a5f) = 0;
        *(int *)((int)this_00 + 0x2d) = *(int *)(param_1 + 0x10) + 1;
        (**(code **)*this_00)((int)this_00 + 0x1d);
      }
      else if (uVar10 == 0x6900) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        *(undefined4 *)((int)this_00 + 0x2d) = 0x32;
        FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x1af5),
                     (undefined4 *)((int)this_00 + 0x1d));
        if (*(int *)(this_00[0x734] + 8) < 1) {
          pcVar7 = (char *)0x0;
        }
        else {
          pcVar7 = (char *)**(undefined4 **)(this_00[0x734] + 0x14);
        }
        uVar10 = 0xffffffff;
        do {
          pcVar14 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar14 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar14;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = (char *)(this_00 + 0x735);
        pcVar14 = pcVar14 + -uVar10;
        pcVar17 = pcVar7;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar17 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar17 = pcVar17 + 1;
        }
        FUN_006b7780(pcVar7,pcVar7);
        if (*(char *)(this_00 + 0x735) != '\0') {
          if (*(char *)((int)this_00 + 0x1a5f) == '\0') {
            local_8 = (uint *)0xffffffff;
            if (*(int *)(this_00[0x734] + 8) < 1) {
              pcVar7 = (char *)0x0;
            }
            else {
              pcVar7 = (char *)**(undefined4 **)(this_00[0x734] + 0x14);
            }
            _strncpy((char *)&DAT_00807ddd,pcVar7,0x3f);
            puVar12 = (uint *)0x0;
            local_c = *(uint *)(this_00[0x733] + 8);
            puVar9 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar16 = (byte *)0x0;
                goto LAB_005d979c;
              }
              do {
                pbVar16 = *(byte **)(*(int *)(this_00[0x733] + 0x14) + (int)puVar12 * 4);
LAB_005d979c:
                pbVar18 = (byte *)&DAT_00807ddd;
                do {
                  bVar2 = *pbVar16;
                  bVar19 = bVar2 < *pbVar18;
                  if (bVar2 != *pbVar18) {
LAB_005d97c5:
                    iVar6 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar16[1];
                  bVar19 = bVar2 < pbVar18[1];
                  if (bVar2 != pbVar18[1]) goto LAB_005d97c5;
                  pbVar16 = pbVar16 + 2;
                  pbVar18 = pbVar18 + 2;
                } while (bVar2 != 0);
                iVar6 = 0;
LAB_005d97ca:
                puVar9 = puVar12;
              } while ((iVar6 != 0) &&
                      (puVar12 = (uint *)((int)puVar12 + 1), puVar9 = local_8,
                      (int)puVar12 < (int)local_c));
            }
            local_8 = puVar9;
            DAT_00807340 = 1;
            if ((int)local_8 < 0) {
              thunk_FUN_005738d0(&DAT_00807658);
            }
            else {
              thunk_FUN_00572510(&DAT_00807658);
            }
            if (DAT_00808446 != '\0') {
              thunk_FUN_005d8a90();
              *(undefined1 *)((int)this_00 + 0x65) = 4;
              thunk_FUN_005b6730(this_00,2,'\x01',-1);
              FUN_006c18b0((uint)DAT_00807363);
            }
          }
          else {
            if (*(int *)(this_00[0x734] + 8) < 1) {
              uVar5 = 0;
            }
            else {
              uVar5 = **(undefined4 **)(this_00[0x734] + 0x14);
            }
            wsprintfA((LPSTR)(this_00 + 0x735),s__s_s_s_007c6edc,&DAT_00807680,
                      PTR_s_SAVEGAME__0079c19c,uVar5);
            FUN_00725910((char *)(this_00 + 0x735),&DAT_007cc8bc,0,FUN_00725c20,0,0);
            thunk_FUN_005d8bf0();
            *(undefined1 *)((int)this_00 + 0x1a5f) = 0;
            thunk_FUN_005d9250();
            *(undefined4 *)((int)this_00 + 0x2d) = 5;
            piVar15 = (int *)((int)this_00 + 0x1af9);
            iVar6 = 2;
            do {
              if (*piVar15 != 0) {
                FUN_006e6080(this_00,2,*piVar15,(undefined4 *)((int)this_00 + 0x1d));
              }
              piVar15 = piVar15 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
      else if (uVar10 == 0x6901) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        if (*(char *)((int)this_00 + 0x1a5f) == '\0') {
          if (((char)DAT_00807ddd != '\0') && (*(int *)(this_00[0x733] + 8) != 0)) {
            puVar8 = (undefined4 *)((int)this_00 + 0x1d);
            *(undefined1 *)((int)this_00 + 0x1a5f) = 1;
            *(undefined4 *)((int)this_00 + 0x2d) = 0x20;
            *(undefined4 *)((int)this_00 + 0x31) = 0;
            FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x1af1),puVar8);
            *(undefined4 *)((int)this_00 + 0x2d) = 0x29;
            *(undefined4 *)((int)this_00 + 0x31) = 0x19;
            FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x1af5),puVar8);
            *(undefined4 *)((int)this_00 + 0x2d) = 5;
            piVar15 = (int *)((int)this_00 + 0x1af9);
            local_8 = (uint *)0x2;
            do {
              if (*piVar15 != 0) {
                FUN_006e6080(this_00,2,*piVar15,puVar8);
              }
              piVar15 = piVar15 + 1;
              local_8 = (uint *)((int)local_8 - 1);
            } while (local_8 != (uint *)0x0);
            thunk_FUN_005d9250();
          }
        }
        else {
          *(undefined1 *)((int)this_00 + 0x1a5f) = 0;
          thunk_FUN_005d9250();
          *(undefined4 *)((int)this_00 + 0x2d) = 5;
          piVar15 = (int *)((int)this_00 + 0x1af9);
          iVar6 = 2;
          do {
            if (*piVar15 != 0) {
              FUN_006e6080(this_00,2,*piVar15,(undefined4 *)((int)this_00 + 0x1d));
            }
            piVar15 = piVar15 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          thunk_FUN_005d8bf0();
        }
      }
      goto LAB_005d9ccb;
    }
    iVar6 = this_00[0x732];
    local_8 = *(uint **)(iVar6 + 0x14);
    if (local_8 == (uint *)0x0) {
      local_8 = (uint *)(((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 &
                         0x1ffffffc) * *(int *)(iVar6 + 8));
    }
    puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
    for (uVar10 = (uint)local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar10 = (uint)local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_00710a90(this_00[0x732],0,0,0,0,0);
    FUN_007119c0((uint *)**(undefined4 **)(param_1 + 0x14),0,-1,2);
    uVar3 = *(ushort *)(param_1 + 0x18);
    if ((uVar3 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
      FUN_006b5b10(this_00[0x732],0,(uint)uVar3,(uint)*(ushort *)(param_1 + 0x1a),(uint)uVar3,
                   *(ushort *)(param_1 + 0x1a) + 0xe,7,0xd);
    }
    iVar6 = this_00[0x732];
    FUN_006b55f0((undefined4 *)this_00[0x72e],0,4,1,iVar6,0,0,0,*(int *)(iVar6 + 4),
                 *(int *)(iVar6 + 8));
  }
  else {
    if (0x8163 < uVar10) {
      if (uVar10 == 0x8164) {
        iVar6 = (int)this_00 + 0x1b01;
      }
      else {
        if (uVar10 != 0x8165) {
          if (uVar10 == 0x8166) {
            uVar10 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
            *(uint *)((int)this_00 + 0x1c43) = uVar10;
            if (*(uint *)((int)this_00 + 0x1c27) != 0xffffffff) {
              FUN_006b3730(*(uint **)((int)this_00 + 0x1c6b),*(uint *)((int)this_00 + 0x1c27),
                           *(uint *)((int)this_00 + 0x1c2b),*(uint *)((int)this_00 + 0x1c3f),uVar10)
              ;
            }
          }
          goto LAB_005d9ccb;
        }
        iVar6 = (int)this_00 + 0x1b92;
      }
      thunk_FUN_005b6560(iVar6,param_1,0);
      goto LAB_005d9ccb;
    }
    if (uVar10 == 0x8163) {
      iVar6 = *(int *)(this_00[0x733] + 8);
      if (iVar6 == 0) {
        iVar6 = this_00[0x734];
        pcVar7 = (char *)&DAT_00807ddd;
      }
      else {
        if (*(int *)(param_1 + 0x14) < iVar6) {
          pcVar7 = *(char **)(*(int *)(this_00[0x733] + 0x14) + *(int *)(param_1 + 0x14) * 4);
        }
        else {
          pcVar7 = (char *)0x0;
        }
        _strncpy((char *)&DAT_00807ddd,pcVar7,0x3f);
        if (*(int *)(param_1 + 0x14) < *(int *)(this_00[0x733] + 8)) {
          iVar6 = this_00[0x734];
          pcVar7 = *(char **)(*(int *)(this_00[0x733] + 0x14) + *(int *)(param_1 + 0x14) * 4);
        }
        else {
          iVar6 = this_00[0x734];
          pcVar7 = (char *)0x0;
        }
      }
      FUN_006b6020(iVar6,0,pcVar7);
      *(undefined4 *)((int)this_00 + 0x2d) = 0x33;
      *(undefined4 *)((int)this_00 + 0x31) = this_00[0x734];
      FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x1af5),
                   (undefined4 *)((int)this_00 + 0x1d));
      goto LAB_005d9ccb;
    }
    if (0x8160 < uVar10) {
      if (uVar10 == 0x8161) {
        if ((int)(uint)*(ushort *)(param_1 + 0x14) < *(int *)(this_00[0x733] + 8)) {
          local_8 = *(uint **)(*(int *)(this_00[0x733] + 0x14) +
                              (uint)*(ushort *)(param_1 + 0x14) * 4);
        }
        else {
          local_8 = (uint *)0x0;
        }
        FUN_006b4170(this_00[0x72e],0,*(ushort *)(param_1 + 0x18) + 3,
                     *(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,0xff);
        iVar6 = this_00[0x72f];
        local_c = *(uint *)(iVar6 + 0x14);
        if (local_c == 0) {
          local_c = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc)
                    * *(int *)(iVar6 + 8);
        }
        puVar8 = (undefined4 *)FUN_006b4fa0(iVar6);
        for (uVar10 = local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        for (uVar10 = local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar8 = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        if ((*(short *)(param_1 + 0x16) == 1) && (local_8 != (uint *)0x0)) {
          FUN_006b5ee0(this_00[0x72e],0,*(ushort *)(param_1 + 0x18) + 3,
                       *(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,0x87,0xd);
        }
        FUN_00710a90(this_00[0x72f],0,0,0,0,0);
        FUN_007119c0(local_8,0,-1,2);
        FUN_006b5440(this_00[0x72e],0,*(ushort *)(param_1 + 0x18) + 6,
                     *(ushort *)(param_1 + 0x1a) + 0x15,this_00[0x72f],0,0xff);
        FUN_006b35d0(DAT_008075a8,this_00[0x72d]);
      }
      goto LAB_005d9ccb;
    }
    if (uVar10 == 0x8160) {
      *(undefined4 *)(param_1 + 0x18) = 0xe;
      goto LAB_005d9ccb;
    }
    if ((uVar10 < 0x6980) || (0x6981 < uVar10)) goto LAB_005d9ccb;
    piVar15 = *(int **)(param_1 + 0x18);
    local_c = CONCAT31(local_c._1_3_,*(char *)(param_1 + 0x10) + -0x7f);
    local_20 = *piVar15 + -0xe1;
    local_18 = piVar15[2];
    local_1c = piVar15[1] + -0x1a9;
    local_14 = piVar15[3];
    FUN_006b4170(this_00[0x72e],0,local_20,local_1c,local_18,local_14,0xff);
    thunk_FUN_005b5a30(this_00[0x72e],&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      UVar13 = (*(char *)((int)this_00 + 0x1a5f) != '\0') + 0x24b8;
    }
    else {
      UVar13 = (-(uint)(*(char *)((int)this_00 + 0x1a5f) != '\0') & 0xfffffffd) + 0x24bd;
    }
    FUN_00710a90(this_00[0x72e],0,local_20,local_1c,local_18,local_14);
    iVar6 = (*(short *)(param_1 + 0x14) != 1) + 2;
    iVar21 = -1;
    iVar20 = -1;
    puVar9 = (uint *)FUN_006b0140(UVar13,DAT_00807618);
    FUN_007119c0(puVar9,iVar20,iVar21,iVar6);
  }
  FUN_006b35d0(DAT_008075a8,this_00[0x72d]);
LAB_005d9ccb:
  DAT_00858df8 = local_64;
  uVar5 = thunk_FUN_005b6430();
  return uVar5;
}


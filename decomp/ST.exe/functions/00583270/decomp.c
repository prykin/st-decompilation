
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00583270(void *this,int param_1)

{
  void *this_00;
  char cVar1;
  code *pcVar2;
  int *this_01;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  byte *pbVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  int *piVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined4 local_a0;
  undefined4 local_9c [16];
  undefined4 local_5c [4];
  undefined4 local_4c;
  int local_48;
  int *local_3c;
  undefined4 *local_38;
  int local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  if ((*(int *)((int)this + 0x235) == 4) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_a0 = DAT_00858df8;
  DAT_00858df8 = &local_a0;
  local_3c = this;
  iVar3 = __setjmp3(local_9c,0,unaff_EDI,unaff_ESI);
  this_01 = local_3c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_a0;
    iVar6 = FUN_006ad4d0(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x2af,0,iVar3,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar3,0,0x7cb7b0,0x2b0);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  thunk_FUN_0041e530(param_1);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (uVar5 < 0x111) {
    if (uVar5 == 0x110) {
      if ((*(int *)((int)this_01 + 0x235) != 2) && (*(int *)((int)this_01 + 0x235) != 4)) {
        thunk_FUN_00582530(this_01);
        *(undefined4 *)((int)this_01 + 0x241) = 0xff;
        *(undefined2 *)((int)this_01 + 0x245) = 0;
        *(undefined4 *)((int)this_01 + 0x252) = 0;
        *(undefined4 *)((int)this_01 + 0x235) = 2;
        thunk_FUN_004ac410(0xe);
        thunk_FUN_004ac410(0xc);
        thunk_FUN_004ad5e0((int)this_01 + 0x1d5);
        iVar3 = thunk_FUN_00584380(this_01);
        if (iVar3 != 0) {
          thunk_FUN_00582580(this_01);
          DAT_00858df8 = (undefined4 *)local_a0;
          return 0;
        }
      }
    }
    else if (uVar5 < 4) {
      if (uVar5 == 3) {
        uVar4 = thunk_FUN_004167a0((int)this_01);
        thunk_FUN_00495ff0(*(short *)((int)this_01 + 0x5b),*(short *)((int)this_01 + 0x5d),
                           *(short *)((int)this_01 + 0x5f),
                           CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)((int)this_01 + 0x8e)),
                           (int)this_01);
        thunk_FUN_004ad310((int)this_01 + 0x1d5);
        DAT_00858df8 = (undefined4 *)local_a0;
        return 0;
      }
      if (uVar5 == 0) {
        thunk_FUN_005825c0(this_01);
        DAT_00858df8 = (undefined4 *)local_a0;
        return 0;
      }
      if (uVar5 == 2) {
        local_38 = *(undefined4 **)(param_1 + 0x14);
        if ((uint)local_38[3] < 2) {
          *(undefined4 *)((int)this_01 + 0x235) = 4;
          *(undefined4 *)((int)this_01 + 0x23d) = 0;
          *(undefined4 *)((int)this_01 + 0x241) = 0xff;
          *(undefined4 *)((int)this_01 + 0x231) = 0;
          puVar8 = *(undefined4 **)(param_1 + 0x14);
          puVar10 = (undefined4 *)((int)this_01 + 0x256);
          for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
          iVar3 = *(int *)((int)this_01 + 0x26a);
          sVar7 = (short)(iVar3 >> 0x1f);
          if (iVar3 < 0) {
            sVar7 = (((short)(iVar3 / 0xc9) + sVar7) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar7 = ((short)(iVar3 / 0xc9) + sVar7) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f);
          }
          iVar3 = *(int *)((int)this_01 + 0x26e);
          *(short *)((int)this_01 + 0x47) = sVar7;
          sVar7 = (short)(iVar3 >> 0x1f);
          if (iVar3 < 0) {
            sVar7 = (((short)(iVar3 / 0xc9) + sVar7) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar7 = ((short)(iVar3 / 0xc9) + sVar7) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f);
          }
          iVar3 = *(int *)((int)this_01 + 0x272);
          *(short *)((int)this_01 + 0x49) = sVar7;
          sVar7 = (short)(iVar3 >> 0x1f);
          if (iVar3 < 0) {
            sVar7 = (((short)(iVar3 / 200) + sVar7) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f))
                    + -1;
          }
          else {
            sVar7 = ((short)(iVar3 / 200) + sVar7) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f);
          }
          *(short *)((int)this_01 + 0x4b) = sVar7;
          *(undefined4 *)((int)this_01 + 0x239) = 0xffffffff;
          *(undefined4 *)((int)this_01 + 0x24b) = 1;
          *(undefined4 *)((int)this_01 + 0x247) = 0;
          thunk_FUN_00417a00(this_01,1);
          iVar3 = thunk_FUN_00417a20(this_01,*(short *)((int)this_01 + 0x47),
                                     *(short *)((int)this_01 + 0x49),*(short *)((int)this_01 + 0x4b)
                                     ,1);
          if (iVar3 == 0) {
            iVar3 = thunk_FUN_00417e70(this_01,8);
            if (iVar3 == 0) {
              iVar3 = thunk_FUN_00417ee0(this_01,0);
              if (iVar3 == 0) {
                this_00 = (void *)((int)this_01 + 0x1d5);
                iVar3 = thunk_FUN_004ab880(0xe,DAT_0080676c,(byte *)s_jellygun_007cb3e0,0x1d);
                if (iVar3 != 0) {
                  FUN_006a5e40(-1,DAT_007ed77c,0x7cb7b0,0x1f9);
                }
                iVar3 = *(int *)((int)this_01 + 0x25a);
                if (7 < iVar3) {
                  iVar3 = FUN_006ad4d0(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1fe,0,0,
                                       &DAT_007a4ccc);
                  if (iVar3 != 0) {
                    pcVar2 = (code *)swi(3);
                    uVar4 = (*pcVar2)();
                    return uVar4;
                  }
                  *(undefined4 *)((int)this_01 + 0x25a) = 0;
                  iVar3 = 0;
                }
                piVar11 = DAT_0080676c;
                uVar5 = 0xffffffff;
                pcVar12 = s_jellygun0_007cb3ec;
                do {
                  if (uVar5 == 0) break;
                  uVar5 = uVar5 - 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar12 + 1;
                } while (cVar1 != '\0');
                (&DAT_007cb3ea)[~uVar5] = (char)iVar3 + '0';
                iVar3 = thunk_FUN_004ab880(0xc,piVar11,(byte *)s_jellygun0_007cb3ec,0x1d);
                if (iVar3 != 0) {
                  FUN_006a5e40(-1,DAT_007ed77c,0x7cb7b0,0x204);
                }
                thunk_FUN_004ac610(this_00,'\f');
                thunk_FUN_004ac1a0(0xc,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
                thunk_FUN_004ac610(this_00,'\x0e');
                thunk_FUN_004ac1a0(0xe,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
                thunk_FUN_00416240(this_01,*(undefined2 *)((int)this_01 + 0x26a),
                                   *(undefined2 *)((int)this_01 + 0x26e),
                                   *(undefined2 *)((int)this_01 + 0x272));
                thunk_FUN_004ad3c0(this_00,(float)*(int *)((int)this_01 + 0x26a) * _DAT_007904f8 *
                                           _DAT_007904f0,
                                   (float)*(int *)((int)this_01 + 0x26e) * _DAT_007904f8 *
                                   _DAT_007904f0,
                                   (float)*(int *)((int)this_01 + 0x272) * _DAT_007904f8 *
                                   _DAT_007904f0);
                *(undefined4 *)((int)this_01 + 0x235) = 0;
                thunk_FUN_005844e0(this_01,*(int *)((int)this_01 + 0x26a),
                                   *(int *)((int)this_01 + 0x26e),0x497);
              }
              else {
                iVar3 = FUN_006ad4d0(s_E____titans_Igor_to_jelly_cpp_007cb7b0,499,0,0,&DAT_007a4ccc)
                ;
                if (iVar3 != 0) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return uVar4;
                }
                thunk_FUN_00582580(this_01);
              }
            }
            else {
              iVar3 = FUN_006ad4d0(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1ec,0,0,&DAT_007a4ccc)
              ;
              if (iVar3 != 0) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return uVar4;
              }
              thunk_FUN_00582580(this_01);
            }
          }
          else {
            iVar3 = FUN_006ad4d0(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1e5,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return uVar4;
            }
            thunk_FUN_00582580(this_01);
          }
        }
        else if (local_38[3] == 2) {
          puVar8 = local_38;
          puVar10 = (undefined4 *)((int)this_01 + 0x256);
          for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
          local_8 = *(uint *)((int)local_38 + 0x67);
          thunk_FUN_00422210((undefined4 *)(local_8 + 0x6f + (int)local_38));
          puVar8 = local_38;
          *(undefined4 *)((int)this_01 + 0x247) = *(undefined4 *)((int)local_38 + 0x4a);
          *(undefined4 *)((int)this_01 + 0x24b) = *(undefined4 *)((int)local_38 + 0x4e);
          *(undefined4 *)((int)this_01 + 0x235) = *(undefined4 *)((int)local_38 + 0x42);
          *(undefined4 *)((int)this_01 + 0x23d) = *(undefined4 *)((int)local_38 + 0x46);
          *(undefined4 *)((int)this_01 + 0x241) = *(undefined4 *)((int)local_38 + 0x52);
          *(undefined2 *)((int)this_01 + 0x245) = *(undefined2 *)((int)local_38 + 0x56);
          *(undefined4 *)((int)this_01 + 0x239) = *(undefined4 *)((int)local_38 + 0x3e);
          *(undefined4 *)((int)this_01 + 0x231) = local_38[0x16];
          *(undefined1 *)((int)this_01 + 0x24f) = *(undefined1 *)(local_38 + 0x18);
          *(undefined1 *)(this_01 + 0x94) = *(undefined1 *)((int)local_38 + 0x61);
          *(undefined1 *)((int)this_01 + 0x251) = *(undefined1 *)((int)local_38 + 0x62);
          *(undefined4 *)((int)this_01 + 0x252) = *(undefined4 *)((int)local_38 + 99);
          local_34[0] = FUN_006aac70(0x44);
          if (local_34[0] != 0) {
            iVar3 = 0;
            do {
              piVar11 = DAT_00806774;
              if (((iVar3 == 8) || (iVar3 == 10)) || (piVar11 = DAT_0080676c, iVar3 != 9)) {
                *(int **)(local_34[0] + iVar3 * 4) = piVar11;
              }
              else {
                *(undefined4 *)(local_34[0] + 0x24) = DAT_00806764;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < 0x11);
            local_34[1] = 0;
            local_34[2] = 0;
            local_34[3] = DAT_008073cc;
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
            thunk_FUN_004adba0(local_34,(undefined4 *)((int)puVar8 + 0x6b));
            FUN_006ab060(local_34);
            thunk_FUN_00495ec0(*(short *)((int)this_01 + 0x5b),*(short *)((int)this_01 + 0x5d),
                               *(short *)((int)this_01 + 0x5f),1,(int)this_01);
          }
        }
        if ((*(int *)((int)this_01 + 0x235) != 4) && (*(int *)((int)this_01 + 0x235) != 2)) {
          iVar3 = this_01[2];
          puVar8 = local_5c;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          local_4c = 0x125;
          local_48 = iVar3;
          FUN_006e6080(this_01,4,*(undefined4 *)((int)this_01 + 0x286),local_5c);
          DAT_00858df8 = (undefined4 *)local_a0;
          return 0;
        }
      }
    }
    else if (uVar5 == 0x10f) {
      local_14 = (byte *)thunk_FUN_004ad790(&local_8);
      local_18 = (byte *)thunk_FUN_004210e0((int *)&local_10);
      local_c = (byte *)FUN_006aac70(local_10 + 0x6f + local_8);
      if (((local_14 != (byte *)0x0) && (local_18 != (byte *)0x0)) && (local_c != (byte *)0x0)) {
        puVar8 = (undefined4 *)((int)this_01 + 0x256);
        pbVar9 = local_c;
        for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pbVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          pbVar9 = pbVar9 + 4;
        }
        *(undefined2 *)pbVar9 = *(undefined2 *)puVar8;
        local_c[0xc] = 2;
        local_c[0xd] = 0;
        local_c[0xe] = 0;
        local_c[0xf] = 0;
        *(undefined4 *)(local_c + 0x42) = *(undefined4 *)((int)this_01 + 0x235);
        *(undefined4 *)(local_c + 0x46) = *(undefined4 *)((int)this_01 + 0x23d);
        *(undefined4 *)(local_c + 0x52) = *(undefined4 *)((int)this_01 + 0x241);
        *(undefined2 *)(local_c + 0x56) = *(undefined2 *)((int)this_01 + 0x245);
        *(undefined4 *)(local_c + 0x4a) = *(undefined4 *)((int)this_01 + 0x247);
        *(undefined4 *)(local_c + 0x4e) = *(undefined4 *)((int)this_01 + 0x24b);
        *(undefined4 *)(local_c + 0x3e) = *(undefined4 *)((int)this_01 + 0x239);
        *(undefined4 *)(local_c + 0x58) = *(undefined4 *)((int)this_01 + 0x231);
        local_c[0x5c] = 0;
        local_c[0x5d] = 0;
        local_c[0x5e] = 0;
        local_c[0x5f] = 0;
        local_c[0x60] = *(byte *)((int)this_01 + 0x24f);
        local_c[0x61] = *(byte *)(this_01 + 0x94);
        local_c[0x62] = *(byte *)((int)this_01 + 0x251);
        *(undefined4 *)(local_c + 99) = *(undefined4 *)((int)this_01 + 0x252);
        *(uint *)(local_c + 0x67) = local_8;
        pbVar9 = local_14;
        pbVar13 = local_c + 0x6b;
        for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar13 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar13 = pbVar13 + 1;
        }
        *(uint *)(local_c + local_8 + 0x6b) = local_10;
        pbVar9 = local_18;
        pbVar13 = local_c + local_8 + 0x6f;
        for (uVar5 = local_10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar5 = local_10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar13 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar13 = pbVar13 + 1;
        }
        thunk_FUN_0054d430(DAT_00802a38,this_01[6],local_c,local_10 + 0x6f + local_8);
        FUN_006ab060(&local_14);
        FUN_006ab060(&local_18);
        FUN_006ab060(&local_c);
        DAT_00858df8 = (undefined4 *)local_a0;
        return 0;
      }
    }
  }
  else if (uVar5 == 0x112) {
    thunk_FUN_004ad5e0((int)this_01 + 0x1d5);
  }
  else {
    if (uVar5 == 0x113) {
      (*(code *)**(undefined4 **)((int)this_01 + 0x1d5))();
      DAT_00858df8 = (undefined4 *)local_a0;
      return 0;
    }
    if (((uVar5 == 0x128) && (*(int *)((int)this_01 + 0x235) != 2)) &&
       (*(int *)((int)this_01 + 0x235) != 4)) {
      thunk_FUN_00582530(this_01);
      *(undefined4 *)((int)this_01 + 0x241) = 0xff;
      *(undefined2 *)((int)this_01 + 0x245) = 0;
      *(undefined4 *)((int)this_01 + 0x252) = 0;
      *(undefined4 *)((int)this_01 + 0x235) = 4;
      thunk_FUN_004ac410(0xe);
      thunk_FUN_004ac410(0xc);
      thunk_FUN_004ad5e0((int)this_01 + 0x1d5);
      thunk_FUN_004ad430((int)this_01 + 0x1d5);
      thunk_FUN_00582580(this_01);
      DAT_00858df8 = (undefined4 *)local_a0;
      return 0;
    }
  }
  DAT_00858df8 = (undefined4 *)local_a0;
  return 0;
}


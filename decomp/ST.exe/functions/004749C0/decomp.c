
int __thiscall FUN_004749c0(void *this,void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  undefined4 extraout_ECX;
  int iVar12;
  int iVar13;
  longlong lVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  byte bVar22;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  if ((param_1 == (void *)0x0) || (pvVar11 = this, param_1 == (void *)0x1)) {
    puVar8 = (undefined4 *)((int)this + 0x2cc);
    for (iVar10 = 0x17; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    puVar8 = (undefined4 *)((int)this + 0x5a0);
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    *(undefined2 *)((int)this + 0x5a0) = *(undefined2 *)((int)this + 0x3c8);
    *(undefined4 *)((int)this + 0x5c0) = 0;
    pvVar11 = (void *)0x0;
  }
  if (*(int *)((int)this + 0x5c0) != 0) {
    if (*(int *)((int)this + 0x5c0) != 1) {
LAB_00475068:
      if (*(int *)((int)this + 0x5c0) == 2) {
        iVar10 = thunk_FUN_00475530(this);
        if (iVar10 == 0) {
          *(undefined4 *)((int)this + 0x5c0) = 0;
        }
        return 2;
      }
      if (*(int *)((int)this + 0x5c0) != 3) {
        iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3007,0,0,&DAT_007a4ccc);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      if ((*(int *)((int)this + 0x5a6) == 0) &&
         (iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x5a2),(int *)((int)this + 0x5a6))
         , iVar10 == -4)) {
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x2fea);
      }
      if ((*(int *)(*(int *)((int)this + 0x5a6) + 0x7ce) != 0) &&
         (*(int *)((int)this + 0x716) < *(int *)((int)this + 0x712))) {
        uVar3 = (ulonglong)*(uint *)((int)DAT_00802a38 + 0xe4) % 0x19;
        if ((int)uVar3 == 0) {
          iVar10 = *(int *)((int)this + 0x6f7) + -1;
          if ((int)((uVar3 << 0x20 | (ulonglong)*(uint *)((int)DAT_00802a38 + 0xe4)) % 100) == 0) {
            (**(code **)(*(int *)this + 0x90))(3,0x363);
            thunk_FUN_00637930(*(uint *)((int)this + 0x1ed),1,-100,-100,-100,0,0);
          }
          iVar6 = *(int *)((int)this + 0x712);
          iVar12 = (iVar6 * 0x19) / (int)(&DAT_007e04a0)[iVar10];
          if (iVar6 < *(int *)((int)this + 0x716) + iVar12) {
            iVar12 = iVar6 - *(int *)((int)this + 0x716);
          }
          local_8 = (undefined4 *)((*(int *)(&DAT_0085442c + iVar10 * 4) * iVar12) / iVar6);
          iVar6 = (*(int *)(&DAT_007e07a0 + iVar10 * 4) * iVar12) / iVar6;
          thunk_FUN_004d7480(*(char *)((int)this + 0x24),4,*(undefined4 *)((int)this + 0x18),
                             (int)local_8,0,iVar6,0);
          iVar10 = thunk_FUN_004d7b10(*(char *)((int)this + 0x24),4);
          if (((int)local_8 <= iVar10) &&
             (iVar10 = thunk_FUN_004d7b90(*(char *)((int)this + 0x24),4), iVar6 <= iVar10)) {
            thunk_FUN_004d7c10(*(char *)((int)this + 0x24),4,*(int *)((int)this + 0x18),(int)local_8
                              );
            thunk_FUN_004d7e50(*(char *)((int)this + 0x24),4,*(int *)((int)this + 0x18),iVar6);
            *(int *)((int)this + 0x716) = *(int *)((int)this + 0x716) + iVar12;
            if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d))
            {
              thunk_FUN_004d8b70((char)*(uint *)((int)this + 0x24));
            }
          }
          thunk_FUN_004d7570(*(char *)((int)this + 0x24),4,*(int *)((int)this + 0x18));
        }
      }
      local_44 = *(undefined4 *)((int)this + 8);
      local_3c = 0x129;
      local_40 = 2;
      FUN_006e5810(local_4c);
switchD_00474a47_caseD_2:
      return 2;
    }
    if (*(int *)((int)this + 0x5c4) == 0) {
      iVar10 = thunk_FUN_00460260(this,2);
      switch(iVar10) {
      case 0:
      case 1:
        thunk_FUN_004602b0(this);
        iVar10 = *(int *)((int)this + 0x5bc) + 1;
        *(int *)((int)this + 0x5bc) = iVar10;
        if (*(short *)((int)this + iVar10 * 2 + 0x5b2) != -1) {
          param_1 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                        *(undefined1 *)((int)this + 0x24)),
                                               CONCAT22((short)((uint)iVar10 >> 0x10),
                                                        *(undefined2 *)((int)this + 0x30)));
          thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x5b),
                             (int)*(short *)((int)this + 0x5d),
                             (int)*(short *)((int)this + *(int *)((int)this + 0x5bc) * 2 + 0x5b2));
          thunk_FUN_00460260(this,0);
          return 2;
        }
        if ((*(short *)((int)this + 0x41) == (short)(*(short *)((int)this + 0x5aa) * 0xc9 + 100)) &&
           (*(short *)((int)this + 0x43) == (short)(*(short *)((int)this + 0x5ac) * 0xc9 + 100))) {
          if (*(short *)((int)this + 0x45) != (short)(*(short *)((int)this + 0x5ae) * 200 + 100)) {
            *(undefined4 *)((int)this + 0x5c4) = 3;
            return 2;
          }
          *(uint *)((int)this + 0x5c4) =
               6 - (uint)(*(short *)((int)this + 0x6c) != *(short *)((int)this + 0x5b0));
          return 2;
        }
        *(undefined4 *)((int)this + 0x5c4) = 1;
        return 2;
      case 2:
        goto switchD_00474a47_caseD_2;
      case 3:
        *(undefined4 *)((int)this + 0x5c0) = 0;
        iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x5a2),(int *)&param_1);
        if (iVar10 != -4) {
          thunk_FUN_00492080(param_1,*(int *)((int)this + 0x18));
          return 2;
        }
        iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2f68,0,0,&DAT_007a4ccc);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      case -1:
        iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2f61,0,0,&DAT_007a4ccc);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      default:
        return 2;
      }
    }
    if (*(int *)((int)this + 0x5c4) == 1) {
      iVar10 = (ushort)(*(short *)((int)this + 0x5ae) * 200) + 100;
      iVar12 = CONCAT22((short)((uint)pvVar11 >> 0x10),*(short *)((int)this + 0x5ac) * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar10 >> 0x10),*(short *)((int)this + 0x5aa) * 0xc9) + 100;
      uVar5 = (undefined2)((uint)iVar12 >> 0x10);
      uVar5 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar5,*(undefined2 *)((int)this + 0x41)),
                         CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                         CONCAT22(uVar5,*(undefined2 *)((int)this + 0x45)),iVar6,iVar12,iVar10);
      *(undefined2 *)((int)this + 0x5c8) = uVar5;
      *(undefined4 *)((int)this + 0x5c4) = 2;
    }
    if (*(int *)((int)this + 0x5c4) == 2) {
      uVar7 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x5c8));
      uVar7 = thunk_FUN_00417910(this,(short)uVar7);
      if (uVar7 != 0xffffffff) {
        if (uVar7 == 0) {
          *(undefined4 *)((int)this + 0x5c4) = 3;
        }
        iVar10 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
      }
      iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2f8f,0,0,&DAT_007a4ccc);
      if (iVar10 == 0) {
        return -1;
      }
      pcVar4 = (code *)swi(3);
      iVar10 = (*pcVar4)();
      return iVar10;
    }
    if (*(int *)((int)this + 0x5c4) == 3) {
      thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                         *(short *)((int)this + 0x45),*(short *)((int)this + 0x5aa) * 0xc9 + 100,
                         *(short *)((int)this + 0x5ac) * 0xc9 + 100,
                         *(short *)((int)this + 0x5ae) * 200 + 100,*(byte *)((int)this + 0x61));
      *(undefined4 *)((int)this + 0x5c4) = 4;
    }
    iVar10 = *(int *)((int)this + 0x5c4);
    if (iVar10 == 4) {
      local_1c = thunk_FUN_00415ed0(this,&local_18,&local_14);
      uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar7;
      iVar10 = (uVar7 >> 0x10) % 7 - 3;
      uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar7;
      uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar1;
      local_c = (uVar1 >> 0x10) % 7 - 3;
      if ((*(int *)((int)this + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
         (local_10 = 0, *(char *)((int)this + 0x2bf) != '\0')) {
        local_8 = (undefined4 *)((int)this + 0x2b3);
        do {
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_2c,*local_8,*(undefined2 *)(local_8 + 1),
                                      *(short *)((int)this + 0x6c));
          uVar2 = *puVar8;
          bVar22 = 0;
          sVar21 = 0;
          iVar6 = -1;
          local_20 = *(short *)(puVar8 + 1);
          sVar20 = 0;
          sVar19 = 0;
          sVar18 = 0;
          sVar17 = 0;
          sVar16 = 0;
          sVar15 = 0;
          local_24 = uVar2;
          if (DAT_0080732c == 1) {
            sVar15 = 0;
            sVar16 = 0;
            sVar17 = 0;
            sVar18 = 0;
            sVar19 = 0;
            sVar20 = 0;
            sVar21 = 0;
            bVar22 = 0;
            lVar14 = __ftol();
            iVar13 = (int)local_20 + *(short *)((int)this + 0x45) + local_c + (int)(short)lVar14;
            iVar12 = (int)*(short *)((int)this + 0x43) - (int)local_24._2_2_;
            iVar9 = (int)(short)local_24 + iVar10 + *(short *)((int)this + 0x41);
          }
          else {
            iVar13 = (int)local_20 + local_c + *(short *)((int)this + 0x45);
            local_24._2_2_ = (short)((uint)uVar2 >> 0x10);
            iVar12 = (int)*(short *)((int)this + 0x43) - (int)local_24._2_2_;
            local_24._0_2_ = (short)uVar2;
            iVar9 = (int)(short)local_24 + iVar10 + *(short *)((int)this + 0x41);
          }
          thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar9,iVar12 + ((uVar7 >> 0x10) % 7 - 3),iVar13,
                             sVar15,sVar16,sVar17,sVar18,sVar19,sVar20,iVar6,sVar21,bVar22);
          local_8 = (undefined4 *)((int)local_8 + 6);
          local_10 = local_10 + 1;
        } while (local_10 < (int)(uint)*(byte *)((int)this + 0x2bf));
      }
      if (local_1c == -1) {
        iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2fb6,0,0,&DAT_007a4ccc);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      if (local_1c == 0) {
        *(uint *)((int)this + 0x5c4) =
             6 - (uint)(*(short *)((int)this + 0x6c) != *(short *)((int)this + 0x5b0));
      }
      iVar10 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
    }
    if (iVar10 == 5) {
      uVar7 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x5b0));
      uVar7 = thunk_FUN_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2fc5,0,0,&DAT_007a4ccc);
        if (iVar10 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar10 = (*pcVar4)();
        return iVar10;
      }
      if (uVar7 == 0) {
        *(undefined4 *)((int)this + 0x5c4) = 6;
      }
    }
    else {
      if (iVar10 == 6) {
        if (*(short *)((int)this + 0x6e) == 0x2f) {
          *(undefined4 *)((int)this + 0x76) = 0;
          iVar10 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x5a2),(int *)&param_1);
          if (iVar10 == -4) {
            iVar10 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2fd1,0,0,&DAT_007a4ccc);
            if (iVar10 == 0) {
              return -1;
            }
            pcVar4 = (code *)swi(3);
            iVar10 = (*pcVar4)();
            return iVar10;
          }
          thunk_FUN_00491fb0(param_1,*(void **)((int)this + 0x18));
          *(undefined4 *)((int)this + 0x5c4) = 7;
        }
        iVar10 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
      }
      if (iVar10 != 7) goto LAB_00475068;
    }
  }
  iVar10 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar10 != 0) & 0xfffffffd) + 2;
}


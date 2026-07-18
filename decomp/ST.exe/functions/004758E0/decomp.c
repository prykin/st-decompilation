
int __thiscall FUN_004758e0(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  code *pcVar4;
  short sVar5;
  int iVar6;
  undefined2 uVar11;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar12;
  uint uVar13;
  undefined2 extraout_var_01;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  byte bVar23;
  undefined4 local_30 [2];
  undefined4 local_28;
  short local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  undefined1 local_5;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x1)) {
    puVar9 = (undefined4 *)((int)this + 0x2cc);
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    if (*(int *)((int)this + 0x7ca) != 0) {
      sVar5 = *(short *)((int)this + 0x3ce);
      uVar3 = *(ushort *)((int)this + 0x3d0);
      *(short *)((int)this + 0x5ca) = sVar5;
      *(ushort *)((int)this + 0x5cc) = uVar3;
      *(short *)((int)this + 0x5ce) = *(short *)((int)this + 0x3d2);
      if (((sVar5 == -1) && (uVar3 == 0xffff)) && (*(short *)((int)this + 0x3d2) == -1)) {
        *(undefined4 *)((int)this + 0x5d6) = 0;
        return 2;
      }
      uVar11 = (undefined2)((uint)((int)this + 0x5d0) >> 0x10);
      iVar6 = thunk_FUN_0048dfd0(CONCAT22((short)((uint)*(int *)((int)this + 0x7ca) >> 0x10),sVar5),
                                 (uint)uVar3,CONCAT22(uVar11,*(undefined2 *)((int)this + 0x3d2)),
                                 CONCAT22(uVar11,*(undefined2 *)((int)this + 0x5b)),
                                 CONCAT22(uVar11,*(undefined2 *)((int)this + 0x5d)),
                                 (int *)CONCAT22(uVar11,*(undefined2 *)((int)this + 0x5f)),0,
                                 (short *)((int)this + 0x5d0),(short *)((int)this + 0x5d2),
                                 (short *)((int)this + 0x5d4));
      if (iVar6 != 0) {
        *(undefined4 *)((int)this + 0x5d6) = 5;
        thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x5d0),
                           (int)*(short *)((int)this + 0x5d2),(int)*(short *)((int)this + 0x5d4));
        thunk_FUN_0045ff50(this,0);
        return 2;
      }
    }
    return 0;
  }
  iVar6 = *(int *)((int)this + 0x5d6);
  if (iVar6 == 5) {
    iVar6 = thunk_FUN_0045ff50(this,2);
    if (iVar6 == -1) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3079,0,0,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      return -1;
    }
    if (iVar6 == 0) {
      *(undefined4 *)((int)this + 0x5d6) = 0;
    }
    else if (iVar6 == 3) {
      uVar11 = (undefined2)((uint)((int)this + 0x5d0) >> 0x10);
      iVar6 = thunk_FUN_0048dfd0(CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x5ca)),
                                 CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x5cc)),
                                 CONCAT22(uVar11,*(undefined2 *)((int)this + 0x5ce)),
                                 CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x5b)),
                                 CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x5d)),
                                 (int *)CONCAT22(uVar11,*(undefined2 *)((int)this + 0x5f)),0,
                                 (short *)((int)this + 0x5d0),(short *)((int)this + 0x5d2),
                                 (short *)((int)this + 0x5d4));
      if (iVar6 == 0) {
        return 0;
      }
      thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x5d0),(int)*(short *)((int)this + 0x5d2),
                         (int)*(short *)((int)this + 0x5d4));
      thunk_FUN_0045ff50(this,0);
      return 2;
    }
    return 2;
  }
  if (iVar6 == 0) {
    iVar6 = thunk_FUN_00492550(this,*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                               *(short *)((int)this + 0x5f),(undefined2 *)((int)this + 0x5d0),
                               (short *)((int)this + 0x5d2),(short *)((int)this + 0x5d4));
    if (iVar6 == 0) {
      iVar6 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar6 != 0);
    }
    iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)((int)this + 0x5d4) * 200) + 100;
    iVar12 = CONCAT22(extraout_var_00,*(short *)((int)this + 0x5d2) * 0xc9) + 100;
    iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)((int)this + 0x5d0) * 0xc9) + 100;
    uVar11 = (undefined2)((uint)iVar12 >> 0x10);
    sVar5 = (**(code **)(*(int *)this + 0x10))
                      (CONCAT22(uVar11,*(undefined2 *)((int)this + 0x41)),
                       CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                       CONCAT22(uVar11,*(undefined2 *)((int)this + 0x45)),iVar7,iVar12,iVar6);
    *(short *)((int)this + 0x5da) = sVar5;
    uVar8 = thunk_FUN_004176c0(this,sVar5);
    uVar8 = thunk_FUN_00417910(this,(short)uVar8);
    if (uVar8 != 0xffffffff) {
      if (uVar8 == 0) {
        *(undefined4 *)((int)this + 0x5d6) = 1;
        FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7ca),(int *)&local_c);
        uVar1 = *(undefined1 *)((int)local_c + 0x62);
        uVar2 = *(undefined1 *)((int)local_c + 0x61);
        local_5 = *(undefined1 *)((int)local_c + 99);
        piVar14 = (int *)((int)this + 0x34);
        piVar15 = local_c + 0xd;
        for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar15 = *piVar14;
          piVar14 = piVar14 + 1;
          piVar15 = piVar15 + 1;
        }
        *(short *)piVar15 = (short)*piVar14;
        *(undefined1 *)((int)piVar15 + 2) = *(undefined1 *)((int)piVar14 + 2);
        *(undefined1 *)((int)local_c + 0x61) = uVar2;
        *(undefined1 *)((int)local_c + 0x62) = uVar1;
        *(undefined1 *)((int)local_c + 99) = local_5;
        thunk_FUN_0041c5a0(this);
        thunk_FUN_00495ff0(*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                           *(short *)((int)this + 0x5f),0,(int)this);
        (**(code **)(*local_c + 0xb8))();
        DumpClassC::WritePtr
                  (*(short *)((int)this + 0x5d0),*(short *)((int)this + 0x5d2),
                   *(short *)((int)this + 0x5d4),0,(int)this);
        thunk_FUN_0041c3f0(this,*(undefined **)((int)this + 0x70a));
        *(undefined4 *)((int)this + 0x7ca) = 0;
        *(undefined4 *)((int)this + 0x7c6) = 0;
      }
      iVar6 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x309b,0,0,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    return -1;
  }
  if (iVar6 == 1) {
    thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                       *(short *)((int)this + 0x45),*(short *)((int)this + 0x5d0) * 0xc9 + 100,
                       *(short *)((int)this + 0x5d2) * 0xc9 + 100,
                       *(short *)((int)this + 0x5d4) * 200 + 100,*(byte *)((int)this + 0x61));
    *(undefined4 *)((int)this + 0x5d6) = 2;
  }
  if (*(int *)((int)this + 0x5d6) == 2) {
    local_20 = thunk_FUN_00415ed0(this,&local_18,&local_14);
    local_10 = 0;
    if (*(char *)((int)this + 0x2bf) != '\0') {
      param_1 = (undefined4 *)((int)this + 0x2b3);
      do {
        puVar9 = (undefined4 *)
                 thunk_FUN_0041dc40(local_30,*param_1,*(undefined2 *)(param_1 + 1),
                                    *(short *)((int)this + 0x6c));
        local_28 = *puVar9;
        local_24 = *(short *)(puVar9 + 1);
        if (DAT_0080732c == 1) {
          bVar23 = 0;
          sVar22 = 0;
          iVar12 = -1;
          uVar8 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          sVar21 = 0;
          *(uint *)((int)this + 0x1c) = uVar8;
          sVar20 = 0;
          sVar19 = 0;
          uVar10 = uVar8 * 0x41c64e6d + 0x3039;
          sVar18 = 0;
          *(uint *)((int)this + 0x1c) = uVar10;
          local_1c = uVar10 * 0x41c64e6d + 0x3039;
          sVar17 = 0;
          *(uint *)((int)this + 0x1c) = local_1c;
          sVar5 = 0;
          lVar16 = __ftol();
          iVar6 = (int)(short)lVar16 + (uVar8 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45) + -3
                  + (int)local_24;
          iVar7 = ((uVar10 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) - (int)local_28._2_2_;
          uVar8 = local_1c;
        }
        else {
          uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          bVar23 = 0;
          *(uint *)((int)this + 0x1c) = uVar10;
          uVar13 = uVar10 * 0x41c64e6d + 0x3039;
          sVar22 = 0;
          *(uint *)((int)this + 0x1c) = uVar13;
          uVar8 = uVar13 * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar8;
          iVar12 = -1;
          sVar21 = 0;
          sVar20 = 0;
          sVar19 = 0;
          sVar18 = 0;
          sVar17 = 0;
          sVar5 = 0;
          iVar6 = (uVar10 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45) + -3 + (int)local_24;
          local_28._2_2_ = (short)((uint)local_28 >> 0x10);
          iVar7 = ((uVar13 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) - (int)local_28._2_2_;
        }
        thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                           (uVar8 >> 0x10) % 7 + (int)*(short *)((int)this + 0x41) + -3 +
                           (int)(short)local_28,iVar7 + -3,iVar6,sVar5,sVar17,sVar18,sVar19,sVar20,
                           sVar21,iVar12,sVar22,bVar23);
        local_10 = local_10 + 1;
        param_1 = (undefined4 *)((int)param_1 + 6);
      } while (local_10 < (int)(uint)*(byte *)((int)this + 0x2bf));
    }
    if (local_20 == -1) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x30d2,0,0,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      return -1;
    }
    if (local_20 == 0) {
      FUN_006ea2f0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed));
      iVar6 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar6 != 0);
    }
  }
  iVar6 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}


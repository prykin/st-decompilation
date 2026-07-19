
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Annih */

int __thiscall STBoatC::Annih(STBoatC *this,undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  STBoatC *pSVar12;
  longlong lVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  int iVar20;
  short sVar21;
  byte bVar22;
  undefined1 local_64 [16];
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x1)) {
    pSVar12 = this + 0x2cc;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined4 *)pSVar12 = 0;
      pSVar12 = pSVar12 + 4;
    }
    sVar14 = *(short *)(this + 0x423);
    sVar15 = *(short *)(this + 0x425);
    sVar16 = *(short *)(this + 0x427);
    *(undefined4 *)(this + 0x2c4) = 0;
    *(short *)(this + 0x68b) = sVar14;
    *(short *)(this + 0x68d) = sVar15;
    *(short *)(this + 0x68f) = sVar16;
    if (((((sVar14 < 0) || (DAT_007fb240 <= sVar14)) || (sVar15 < 0)) ||
        ((DAT_007fb242 <= sVar15 || (sVar16 < 0)))) ||
       ((DAT_007fb244 <= sVar16 ||
        (piVar2 = *(int **)(DAT_007fb248 +
                           ((int)sVar16 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240 +
                           (int)sVar14) * 8), piVar2 == (int *)0x0)))) {
LAB_0047d831:
      thunk_FUN_004952e0((int)this);
      return 0;
    }
    iVar9 = (**(code **)(*piVar2 + 0x2c))();
    if (iVar9 != 99) goto LAB_0047d831;
    *(undefined2 *)(this + 0x691) = *(undefined2 *)(this + 0x5b);
    *(undefined2 *)(this + 0x693) = *(undefined2 *)(this + 0x5d);
    *(undefined2 *)(this + 0x695) = *(undefined2 *)(this + 0x5f);
    iVar9 = piVar2[6];
    *(undefined4 *)(this + 0x6a1) = 0;
    *(int *)(this + 0x697) = iVar9;
    *(undefined4 *)(this + 0x6a5) = 0;
  }
  iVar9 = *(int *)(this + 0x6a1);
  if (iVar9 == 0) {
    if (*(int *)(this + 0x6a5) == 0) {
      iVar6 = (ushort)(*(short *)(this + 0x68f) * 200) + 0xfa;
      iVar20 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(this + 0x68d) + 1) * 0xc9;
      iVar10 = CONCAT22((short)((uint)iVar20 >> 0x10),*(short *)(this + 0x68b) + 1);
      iVar9 = iVar10 * 0xc9;
      uVar5 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
      uVar5 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar5,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar9 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar5,*(undefined2 *)(this + 0x45)),iVar9,iVar20,iVar6);
      *(undefined2 *)(this + 0x69b) = uVar5;
      *(undefined4 *)(this + 0x6a5) = 1;
    }
    if (*(int *)(this + 0x6a5) == 1) {
      uVar7 = thunk_FUN_004176c0(this,*(short *)(this + 0x69b));
      uVar7 = thunk_FUN_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3896,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Annih_ANNIH_MOVE_1_007ab67c);
        if (iVar9 != 0) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        return -1;
      }
      if (uVar7 == 0) {
        *(undefined4 *)(this + 0x6a5) = 2;
      }
    }
    else {
      if (*(int *)(this + 0x6a5) == 2) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),(*(short *)(this + 0x68b) + 1) * 0xc9,
                           (*(short *)(this + 0x68d) + 1) * 0xc9,
                           *(short *)(this + 0x68f) * 200 + 0xfa,(byte)this[0x61]);
        *(undefined4 *)(this + 0x6a5) = 3;
      }
      if (*(int *)(this + 0x6a5) == 3) {
        local_18 = thunk_FUN_00415ed0(this,&local_14,&local_10);
        uVar7 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)(this + 0x1c) = uVar7;
        iVar9 = (uVar7 >> 0x10) % 7 - 3;
        uVar7 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)(this + 0x1c) = uVar7;
        uVar1 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)(this + 0x1c) = uVar1;
        local_8 = (uVar1 >> 0x10) % 7 - 3;
        if ((*(int *)(this + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
           (local_c = 0, this[0x2bf] != (STBoatC)0x0)) {
          param_1 = (undefined4 *)(this + 0x2b3);
          do {
            puVar8 = (undefined4 *)
                     thunk_FUN_0041dc40(local_28,*param_1,*(undefined2 *)(param_1 + 1),
                                        *(short *)(this + 0x6c));
            uVar3 = *puVar8;
            bVar22 = 0;
            sVar21 = 0;
            iVar20 = -1;
            local_1c = *(short *)(puVar8 + 1);
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            sVar15 = 0;
            sVar14 = 0;
            local_20 = uVar3;
            if (DAT_0080732c == 1) {
              sVar14 = 0;
              sVar15 = 0;
              sVar16 = 0;
              sVar17 = 0;
              sVar18 = 0;
              sVar19 = 0;
              sVar21 = 0;
              bVar22 = 0;
              lVar13 = Library::MSVCRT::__ftol();
              iVar10 = (int)local_1c + *(short *)(this + 0x45) + local_8 + (int)(short)lVar13;
              iVar6 = (int)*(short *)(this + 0x43) - (int)local_20._2_2_;
              iVar11 = (int)(short)local_20 + iVar9 + *(short *)(this + 0x41);
            }
            else {
              iVar10 = (int)local_1c + local_8 + *(short *)(this + 0x45);
              local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
              iVar6 = (int)*(short *)(this + 0x43) - (int)local_20._2_2_;
              local_20._0_2_ = (short)uVar3;
              iVar11 = (int)(short)local_20 + iVar9 + *(short *)(this + 0x41);
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,iVar11,iVar6 + ((uVar7 >> 0x10) % 7 - 3),iVar10,sVar14,
                       sVar15,sVar16,sVar17,sVar18,sVar19,iVar20,sVar21,bVar22);
            param_1 = (undefined4 *)((int)param_1 + 6);
            local_c = local_c + 1;
          } while (local_c < (int)(uint)(byte)this[0x2bf]);
        }
        if (local_18 == -1) {
          iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x38bd,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Annih_ANNIH_MOVE_2_007ab658);
          if (iVar9 != 0) {
            pcVar4 = (code *)swi(3);
            iVar9 = (*pcVar4)();
            return iVar9;
          }
          return -1;
        }
        if (local_18 == 0) {
          sVar14 = *(short *)(this + 0x68b);
          sVar15 = *(short *)(this + 0x68f);
          sVar16 = *(short *)(this + 0x68d);
          if (((((-1 < sVar14) && (sVar14 < DAT_007fb240)) && (-1 < sVar16)) &&
              ((sVar16 < DAT_007fb242 && (-1 < sVar15)))) &&
             ((sVar15 < DAT_007fb244 &&
              ((piVar2 = *(int **)(DAT_007fb248 +
                                  ((int)sVar15 * (int)DAT_007fb246 + (int)sVar16 * (int)DAT_007fb240
                                  + (int)sVar14) * 8), piVar2 != (int *)0x0 &&
               (piVar2[6] == *(int *)(this + 0x697))))))) {
            iVar9 = (**(code **)(*piVar2 + 0xf8))();
            if (iVar9 == 1) {
              *(undefined4 *)(this + 0x6a5) = 0;
              *(undefined4 *)(this + 0x6a1) = 1;
              *(undefined4 *)(this + 0x69d) = 0;
              thunk_FUN_004b7d90(piVar2);
              goto LAB_0047d241;
            }
          }
          thunk_FUN_004952e0((int)this);
          param_1 = *(undefined4 **)(DAT_00802a38 + 0xe4);
          CmdToObj(this,3,&param_1);
        }
      }
    }
LAB_0047d241:
    iVar9 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  if (iVar9 == 1) {
    if (*(int *)(this + 0x69d) % 5 == 0) {
      sVar14 = *(short *)(this + 0x68b);
      sVar15 = *(short *)(this + 0x68f);
      sVar16 = *(short *)(this + 0x68d);
      if ((((-1 < sVar14) && (sVar14 < DAT_007fb240)) &&
          ((-1 < sVar16 && (((sVar16 < DAT_007fb242 && (-1 < sVar15)) && (sVar15 < DAT_007fb244)))))
          ) && ((piVar2 = *(int **)(DAT_007fb248 +
                                   ((int)sVar15 * (int)DAT_007fb246 +
                                    (int)sVar16 * (int)DAT_007fb240 + (int)sVar14) * 8),
                piVar2 != (int *)0x0 && (piVar2[6] == *(int *)(this + 0x697))))) {
        iVar9 = (**(code **)(*piVar2 + 0xf8))();
        if (iVar9 == 1) {
          if (piVar2[0x134] == 2) {
            *(undefined4 *)(this + 0x6a1) = 2;
            *(undefined4 *)(this + 0x69d) = 0;
            thunk_FUN_006377b0(*(uint *)(this + 0x1ed),0,(int)*(short *)(this + 0x41),
                               (int)*(short *)(this + 0x43),(int)*(short *)(this + 0x45),0);
          }
          goto LAB_0047d7e6;
        }
      }
      param_1 = *(undefined4 **)(DAT_00802a38 + 0xe4);
      CmdToObj(this,3,&param_1);
    }
  }
  else {
    if (iVar9 != 2) {
      iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3902,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Annih_incorrect_entry_007ab630);
      if (iVar9 != 0) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      return -1;
    }
    iVar9 = *(int *)(this + 0x69d);
    *(int *)(this + 0x69d) = iVar9 + 1;
    if (iVar9 + 1 == 0x16) {
      sVar14 = *(short *)(this + 0x68b);
      sVar15 = *(short *)(this + 0x68f);
      sVar16 = *(short *)(this + 0x68d);
      if ((((-1 < sVar14) && (sVar14 < DAT_007fb240)) &&
          ((-1 < sVar16 && (((sVar16 < DAT_007fb242 && (-1 < sVar15)) && (sVar15 < DAT_007fb244)))))
          ) && ((piVar2 = *(int **)(DAT_007fb248 +
                                   ((int)sVar15 * (int)DAT_007fb246 +
                                    (int)sVar16 * (int)DAT_007fb240 + (int)sVar14) * 8),
                piVar2 != (int *)0x0 && (piVar2[6] == *(int *)(this + 0x697))))) {
        iVar9 = (**(code **)(*piVar2 + 0xf8))();
        if (iVar9 == 1) {
          thunk_FUN_004b7e30(piVar2,*(int *)(this + 0x6f7),0,0);
          thunk_FUN_004b7de0(piVar2);
          thunk_FUN_004b7d50(piVar2,(int)this);
        }
      }
      local_30 = 1;
      local_2c = 1;
      local_50 = &local_44;
      local_44 = 10000;
      local_40 = 0;
      local_3c = 0xfe;
      local_54 = 0x128;
      (*(code *)**(undefined4 **)this)(local_64);
    }
  }
LAB_0047d7e6:
  iVar9 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}


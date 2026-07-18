
int __thiscall thunk_FUN_0047d080(void *this,undefined4 *param_1)

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
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  byte bVar21;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  short sStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x1)) {
    puVar8 = (undefined4 *)((int)this + 0x2cc);
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    sVar13 = *(short *)((int)this + 0x423);
    sVar14 = *(short *)((int)this + 0x425);
    sVar15 = *(short *)((int)this + 0x427);
    *(undefined4 *)((int)this + 0x2c4) = 0;
    *(short *)((int)this + 0x68b) = sVar13;
    *(short *)((int)this + 0x68d) = sVar14;
    *(short *)((int)this + 0x68f) = sVar15;
    if (((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar14 < 0)) ||
        ((DAT_007fb242 <= sVar14 || (sVar15 < 0)))) ||
       ((DAT_007fb244 <= sVar15 ||
        (piVar2 = *(int **)(DAT_007fb248 +
                           ((int)sVar15 * (int)DAT_007fb246 + (int)sVar14 * (int)DAT_007fb240 +
                           (int)sVar13) * 8), piVar2 == (int *)0x0)))) {
LAB_0047d831:
      thunk_FUN_004952e0((int)this);
      return 0;
    }
    iVar9 = (**(code **)(*piVar2 + 0x2c))();
    if (iVar9 != 99) goto LAB_0047d831;
    *(undefined2 *)((int)this + 0x691) = *(undefined2 *)((int)this + 0x5b);
    *(undefined2 *)((int)this + 0x693) = *(undefined2 *)((int)this + 0x5d);
    *(undefined2 *)((int)this + 0x695) = *(undefined2 *)((int)this + 0x5f);
    iVar9 = piVar2[6];
    *(undefined4 *)((int)this + 0x6a1) = 0;
    *(int *)((int)this + 0x697) = iVar9;
    *(undefined4 *)((int)this + 0x6a5) = 0;
  }
  iVar9 = *(int *)((int)this + 0x6a1);
  if (iVar9 == 0) {
    if (*(int *)((int)this + 0x6a5) == 0) {
      iVar6 = (ushort)(*(short *)((int)this + 0x68f) * 200) + 0xfa;
      iVar19 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)((int)this + 0x68d) + 1) * 0xc9;
      iVar10 = CONCAT22((short)((uint)iVar19 >> 0x10),*(short *)((int)this + 0x68b) + 1);
      iVar9 = iVar10 * 0xc9;
      uVar5 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
      uVar5 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar5,*(undefined2 *)((int)this + 0x41)),
                         CONCAT22((short)((uint)iVar9 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                         CONCAT22(uVar5,*(undefined2 *)((int)this + 0x45)),iVar9,iVar19,iVar6);
      *(undefined2 *)((int)this + 0x69b) = uVar5;
      *(undefined4 *)((int)this + 0x6a5) = 1;
    }
    if (*(int *)((int)this + 0x6a5) == 1) {
      uVar7 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x69b));
      uVar7 = thunk_FUN_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3896,0,0,&DAT_007a4ccc);
        if (iVar9 != 0) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        return -1;
      }
      if (uVar7 == 0) {
        *(undefined4 *)((int)this + 0x6a5) = 2;
      }
    }
    else {
      if (*(int *)((int)this + 0x6a5) == 2) {
        thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                           *(short *)((int)this + 0x45),(*(short *)((int)this + 0x68b) + 1) * 0xc9,
                           (*(short *)((int)this + 0x68d) + 1) * 0xc9,
                           *(short *)((int)this + 0x68f) * 200 + 0xfa,*(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x6a5) = 3;
      }
      if (*(int *)((int)this + 0x6a5) == 3) {
        iStack_18 = thunk_FUN_00415ed0(this,&uStack_14,&uStack_10);
        uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar7;
        iVar9 = (uVar7 >> 0x10) % 7 - 3;
        uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar7;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        iStack_8 = (uVar1 >> 0x10) % 7 - 3;
        if ((*(int *)((int)this + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
           (iStack_c = 0, *(char *)((int)this + 0x2bf) != '\0')) {
          param_1 = (undefined4 *)((int)this + 0x2b3);
          do {
            puVar8 = (undefined4 *)
                     thunk_FUN_0041dc40(auStack_28,*param_1,*(undefined2 *)(param_1 + 1),
                                        *(short *)((int)this + 0x6c));
            uVar3 = *puVar8;
            bVar21 = 0;
            sVar20 = 0;
            iVar19 = -1;
            sStack_1c = *(short *)(puVar8 + 1);
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            sVar15 = 0;
            sVar14 = 0;
            sVar13 = 0;
            uStack_20 = uVar3;
            if (DAT_0080732c == 1) {
              sVar13 = 0;
              sVar14 = 0;
              sVar15 = 0;
              sVar16 = 0;
              sVar17 = 0;
              sVar18 = 0;
              sVar20 = 0;
              bVar21 = 0;
              lVar12 = __ftol();
              iVar10 = (int)sStack_1c + *(short *)((int)this + 0x45) + iStack_8 + (int)(short)lVar12
              ;
              iVar6 = (int)*(short *)((int)this + 0x43) - (int)uStack_20._2_2_;
              iVar11 = (int)(short)uStack_20 + iVar9 + *(short *)((int)this + 0x41);
            }
            else {
              iVar10 = (int)sStack_1c + iStack_8 + *(short *)((int)this + 0x45);
              uStack_20._2_2_ = (short)((uint)uVar3 >> 0x10);
              iVar6 = (int)*(short *)((int)this + 0x43) - (int)uStack_20._2_2_;
              uStack_20._0_2_ = (short)uVar3;
              iVar11 = (int)(short)uStack_20 + iVar9 + *(short *)((int)this + 0x41);
            }
            thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar11,iVar6 + ((uVar7 >> 0x10) % 7 - 3),iVar10,
                               sVar13,sVar14,sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
            param_1 = (undefined4 *)((int)param_1 + 6);
            iStack_c = iStack_c + 1;
          } while (iStack_c < (int)(uint)*(byte *)((int)this + 0x2bf));
        }
        if (iStack_18 == -1) {
          iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x38bd,0,0,&DAT_007a4ccc);
          if (iVar9 != 0) {
            pcVar4 = (code *)swi(3);
            iVar9 = (*pcVar4)();
            return iVar9;
          }
          return -1;
        }
        if (iStack_18 == 0) {
          sVar13 = *(short *)((int)this + 0x68b);
          sVar14 = *(short *)((int)this + 0x68f);
          sVar15 = *(short *)((int)this + 0x68d);
          if (((((-1 < sVar13) && (sVar13 < DAT_007fb240)) && (-1 < sVar15)) &&
              ((sVar15 < DAT_007fb242 && (-1 < sVar14)))) &&
             ((sVar14 < DAT_007fb244 &&
              ((piVar2 = *(int **)(DAT_007fb248 +
                                  ((int)sVar14 * (int)DAT_007fb246 + (int)sVar15 * (int)DAT_007fb240
                                  + (int)sVar13) * 8), piVar2 != (int *)0x0 &&
               (piVar2[6] == *(int *)((int)this + 0x697))))))) {
            iVar9 = (**(code **)(*piVar2 + 0xf8))();
            if (iVar9 == 1) {
              *(undefined4 *)((int)this + 0x6a5) = 0;
              *(undefined4 *)((int)this + 0x6a1) = 1;
              *(undefined4 *)((int)this + 0x69d) = 0;
              thunk_FUN_004b7d90(piVar2);
              goto LAB_0047d241;
            }
          }
          thunk_FUN_004952e0((int)this);
          param_1 = *(undefined4 **)(DAT_00802a38 + 0xe4);
          thunk_FUN_0045ef00(this,3,&param_1);
        }
      }
    }
LAB_0047d241:
    iVar9 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  if (iVar9 == 1) {
    if (*(int *)((int)this + 0x69d) % 5 == 0) {
      sVar13 = *(short *)((int)this + 0x68b);
      sVar14 = *(short *)((int)this + 0x68f);
      sVar15 = *(short *)((int)this + 0x68d);
      if ((((-1 < sVar13) && (sVar13 < DAT_007fb240)) &&
          ((-1 < sVar15 && (((sVar15 < DAT_007fb242 && (-1 < sVar14)) && (sVar14 < DAT_007fb244)))))
          ) && ((piVar2 = *(int **)(DAT_007fb248 +
                                   ((int)sVar14 * (int)DAT_007fb246 +
                                    (int)sVar15 * (int)DAT_007fb240 + (int)sVar13) * 8),
                piVar2 != (int *)0x0 && (piVar2[6] == *(int *)((int)this + 0x697))))) {
        iVar9 = (**(code **)(*piVar2 + 0xf8))();
        if (iVar9 == 1) {
          if (piVar2[0x134] == 2) {
            *(undefined4 *)((int)this + 0x6a1) = 2;
            *(undefined4 *)((int)this + 0x69d) = 0;
            thunk_FUN_006377b0(*(uint *)((int)this + 0x1ed),0,(int)*(short *)((int)this + 0x41),
                               (int)*(short *)((int)this + 0x43),(int)*(short *)((int)this + 0x45),0
                              );
          }
          goto LAB_0047d7e6;
        }
      }
      param_1 = *(undefined4 **)(DAT_00802a38 + 0xe4);
      thunk_FUN_0045ef00(this,3,&param_1);
    }
  }
  else {
    if (iVar9 != 2) {
      iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3902,0,0,&DAT_007a4ccc);
      if (iVar9 != 0) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      return -1;
    }
    iVar9 = *(int *)((int)this + 0x69d) + 1;
    *(int *)((int)this + 0x69d) = iVar9;
    if (iVar9 == 0x16) {
      sVar13 = *(short *)((int)this + 0x68b);
      sVar14 = *(short *)((int)this + 0x68f);
      sVar15 = *(short *)((int)this + 0x68d);
      if ((((-1 < sVar13) && (sVar13 < DAT_007fb240)) &&
          ((-1 < sVar15 && (((sVar15 < DAT_007fb242 && (-1 < sVar14)) && (sVar14 < DAT_007fb244)))))
          ) && ((piVar2 = *(int **)(DAT_007fb248 +
                                   ((int)sVar14 * (int)DAT_007fb246 +
                                    (int)sVar15 * (int)DAT_007fb240 + (int)sVar13) * 8),
                piVar2 != (int *)0x0 && (piVar2[6] == *(int *)((int)this + 0x697))))) {
        iVar9 = (**(code **)(*piVar2 + 0xf8))();
        if (iVar9 == 1) {
          thunk_FUN_004b7e30(piVar2,*(int *)((int)this + 0x6f7),0,0);
          thunk_FUN_004b7de0(piVar2);
          thunk_FUN_004b7d50(piVar2,(int)this);
        }
      }
      uStack_30 = 1;
      uStack_2c = 1;
      puStack_50 = &uStack_44;
      uStack_44 = 10000;
      uStack_40 = 0;
      uStack_3c = 0xfe;
      uStack_54 = 0x128;
      (*(code *)**(undefined4 **)this)(auStack_64);
    }
  }
LAB_0047d7e6:
  iVar9 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}


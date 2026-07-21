
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00624920_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
FUN_00624920(void *this,Global_sub_00624920_param_1Enum param_1,int *param_2,int *param_3,
            int *param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  short sVar12;
  undefined4 local_8;

  local_8 = 0;
  switch(param_1) {
  case CASE_0:
    *param_2 = *(int *)((int)this + 0x2c2);
    *param_3 = *(int *)((int)this + 0x2c6);
    *param_4 = *(int *)((int)this + 0x2ca);
    if (PTR_00802a38->field_00E4 < *(uint *)((int)this + 0x30f)) {
      return 1;
    }
    bVar1 = *(byte *)((int)this + 0x2ad);
    if (bVar1 < 4) {
      *(undefined4 *)((int)this + 0x2ae) = 0;
      if ((bVar1 == 3) || (bVar1 == 2)) {
        *(undefined1 *)((int)this + 0x30e) = 1;
      }
      *(undefined4 *)((int)this + 0x30a) = 0;
      return 0;
    }
    *(int *)((int)this + 0x2f2) = *(int *)((int)this + 0x2ca);
    *(undefined4 *)((int)this + 0x302) = 1;
    iVar6 = thunk_FUN_00624570(this,CASE_1,*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                               *(int *)((int)this + 0x2ca));
    if (iVar6 != 0) {
      *(undefined2 *)((int)this + 0x36) = *(undefined2 *)((int)this + 0x2ca);
      *(undefined2 *)((int)this + 0x38) = *(undefined2 *)((int)this + 0x2ca);
      *(undefined4 *)((int)this + 0x2ee) = 1;
      *(undefined4 *)((int)this + 0x2ae) = 1;
      *(undefined2 *)((int)this + 0x34) = *(undefined2 *)((int)this + 0x2c2);
      return 1;
    }
    break;
  case CASE_1:
    if (*(byte *)((int)this + 0x62) == 0) {
      *param_2 = *(int *)((int)this + 0x2c2);
      *param_3 = *(int *)((int)this + 0x2c6);
      iVar6 = *(int *)((int)this + 0x2ca);
    }
    else {
      iVar9 = *(int *)((int)this + 0x2f2);
      iVar6 = (PTR_00802a38->field_00E4 - *(int *)((int)this + 0x30f)) *
              (uint)*(byte *)((int)this + 0x62) * *(int *)((int)this + 0x302);
      iVar6 = ((int)(iVar6 + (iVar6 >> 0x1f & 0xfU)) >> 4) + (int)*(short *)((int)this + 0x38);
      if (*(int *)((int)this + 0x302) < 1) {
        if (iVar6 < iVar9 - *(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4)) {
          *param_2 = *(int *)((int)this + 0x2c2);
          *param_3 = *(int *)((int)this + 0x2c6);
          *param_4 = (iVar9 - *(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4)) + 1;
          thunk_FUN_00624570(this,CASE_1,*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                             *(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4) +
                             iVar9);
          *(undefined4 *)((int)this + 0x2ae) = 1;
          return 1;
        }
      }
      else if (*(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4) + iVar9 < iVar6) {
        *param_2 = *(int *)((int)this + 0x2c2);
        *param_3 = *(int *)((int)this + 0x2c6);
        *param_4 = *(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4) + -1 + iVar9;
        iVar6 = thunk_FUN_00624570(this,CASE_1,*(int *)((int)this + 0x2c2),
                                   *(int *)((int)this + 0x2c6),
                                   iVar9 - *(int *)(&DAT_007d0398 +
                                                   (uint)*(byte *)((int)this + 0x2ad) * 4));
        if (iVar6 != 0) {
          *(undefined4 *)((int)this + 0x2ee) = 1;
          *(undefined4 *)((int)this + 0x2ae) = 1;
        }
        return 1;
      }
      *param_2 = *(int *)((int)this + 0x2c2);
      *param_3 = *(int *)((int)this + 0x2c6);
    }
    *param_4 = iVar6;
    return 1;
  case CASE_2:
    iVar8 = PTR_00802a38->field_00E4 - *(int *)((int)this + 0x30f);
    iVar10 = *(int *)((int)this + 0x306) * iVar8;
    iVar9 = (*(int *)((int)this + 0x2fa) * iVar10) / 10000 + (int)*(short *)((int)this + 0x34);
    iVar5 = (*(int *)((int)this + 0x2fe) * iVar10) / 10000 + (int)*(short *)((int)this + 0x36);
    iVar7 = (*(int *)((int)this + 0x302) * iVar10) / 10000 + (int)*(short *)((int)this + 0x38);
    iVar6 = thunk_FUN_00627670((int)this);
    if ((1 < iVar8) &&
       (uVar4 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                          ((AnonReceiver_00601500 *)((int)this + 0x231),iVar9,iVar5,iVar7,
                           (int)*(short *)((int)this + 0x54),(int)*(short *)((int)this + 0x56),
                           (int)*(short *)((int)this + 0x58),*(int *)((int)this + 0x262),iVar6,
                           *(int *)((int)this + 0x18),0xffff,
                           *(int *)(&DAT_007d04d0 + (uint)*(byte *)((int)this + 0x2ad) * 4),0,1),
       0 < (int)uVar4)) {
      thunk_FUN_00627390((int)this);
      return 0;
    }
    *param_2 = iVar9;
    *param_3 = iVar5;
    local_8 = 1;
    *param_4 = iVar7;
    if (*(int *)((int)this + 0x2f6) <= iVar10) {
      sVar12 = *(short *)((int)this + 0x3a);
      sVar2 = *(short *)((int)this + 0x3c);
      sVar3 = *(short *)((int)this + 0x3e);
      *param_2 = (int)sVar12;
      *param_3 = (int)sVar2;
      *param_4 = (int)sVar3;
      iVar6 = thunk_FUN_00624570(this,CASE_0,(int)sVar12,(int)sVar2,(int)sVar3);
      if (iVar6 != 0) {
        *(undefined4 *)((int)this + 0x2ee) = 0;
        *(undefined4 *)((int)this + 0x2ae) = 1;
        *(uint *)((int)this + 0x30f) = PTR_00802a38->field_00E4;
        return 1;
      }
    }
    break;
  case CASE_3:
    iVar6 = (PTR_00802a38->field_00E4 - *(int *)((int)this + 0x30f)) * *(int *)((int)this + 0x306);
    iVar9 = *(int *)((int)this + 0x302) * iVar6 + (int)*(short *)((int)this + 0x38);
    sVar12 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      puVar11 = (undefined *)
                ((short)(((short)(iVar9 / 200) + sVar12) -
                        (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      puVar11 = (undefined *)
                (int)(short)(((short)(iVar9 / 200) + sVar12) -
                            (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
    }
    if (puVar11 != (undefined *)(int)*(short *)((int)this + 0x4b)) {
      sVar12 = (short)puVar11;
      iVar5 = thunk_FUN_004961b0(*(short *)((int)this + 0x47),*(short *)((int)this + 0x49),sVar12);
      if (iVar5 != 0) {
        sVar2 = *(short *)((int)this + 0x47);
        sVar3 = *(short *)((int)this + 0x49);
        if (((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar3 < 0)) ||
            ((g_worldGrid.sizeY <= sVar3 || (sVar12 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar12 ||
            (g_worldGrid.cells
             [(int)g_worldGrid.sizeX * (int)sVar3 + (int)g_worldGrid.planeStride * (int)sVar12 +
              (int)sVar2].objects[*(byte *)((int)this + 0x8e)] == (STWorldObject *)0x0)))) {
          iVar5 = thunk_FUN_00495ff0(sVar2,sVar3,*(short *)((int)this + 0x4b),
                                     (uint)*(byte *)((int)this + 0x8e),this);
          if (iVar5 == 0) {
            *(char *)((int)this + 0x314) = *(char *)((int)this + 0x314) + -1;
          }
          sVar2 = *(short *)((int)this + 0x47);
          sVar3 = *(short *)((int)this + 0x49);
          if (((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) ||
               ((sVar3 < 0 ||
                (((g_worldGrid.sizeY <= sVar3 || (sVar12 < 0)) || (g_worldGrid.sizeZ <= sVar12))))))
              || (g_worldGrid.cells
                  [(int)sVar3 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar12
                   + (int)sVar2].objects[*(byte *)((int)this + 0x8e)] == (STWorldObject *)0x0)) &&
             (iVar5 = DumpClassC::WritePtr
                                (sVar2,sVar3,sVar12,(uint)*(byte *)((int)this + 0x8e),this),
             iVar5 == 0)) {
            bVar1 = *(byte *)((int)this + 0x2ad);
            *(char *)((int)this + 0x314) = *(char *)((int)this + 0x314) + '\x01';
            if (bVar1 < 3) {
              if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
                thunk_FUN_00559110(g_visibleClass_00802A88,(int)*(short *)((int)this + 0x47),
                                   (undefined *)(int)*(short *)((int)this + 0x49),
                                   (int)*(short *)((int)this + 0x4b),*(uint *)((int)this + 0x24),
                                   *(int *)(&DAT_007d02b4 + (uint)bVar1 * 4),
                                   *(int *)((int)this + 0x18),0xffffffff);
                thunk_FUN_00558dc0(g_visibleClass_00802A88,(int)*(short *)((int)this + 0x47),
                                   (int)*(short *)((int)this + 0x49),puVar11,
                                   *(int **)((int)this + 0x24),
                                   *(uint *)(&DAT_007d02b4 + (uint)*(byte *)((int)this + 0x2ad) * 4)
                                   ,*(int **)((int)this + 0x18),0xffffffff);
              }
            }
            else if ((bVar1 == 3) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
              thunk_FUN_00559110(g_visibleClass_00802A88,(int)*(short *)((int)this + 0x47),
                                 (undefined *)(int)*(short *)((int)this + 0x49),
                                 (int)*(short *)((int)this + 0x4b),*(uint *)((int)this + 0x24),
                                 DAT_007d02c0,*(int *)((int)this + 0x18),0xffffffff);
              SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::thunk_FUN_00559d60
                        ((AnonReceiver_00558C00 *)g_visibleClass_00802A88,
                         (int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                         (char)*(undefined2 *)((int)this + 0x4b),*(uint *)((int)this + 0x24),
                         *(undefined **)(&DAT_007d02b4 + (uint)*(byte *)((int)this + 0x2ad) * 4),
                         *(undefined4 *)((int)this + 0x18));
              thunk_FUN_00558dc0(g_visibleClass_00802A88,(int)*(short *)((int)this + 0x47),
                                 (int)*(short *)((int)this + 0x49),puVar11,
                                 *(int **)((int)this + 0x24),
                                 *(uint *)(&DAT_007d02b4 + (uint)*(byte *)((int)this + 0x2ad) * 4),
                                 *(int **)((int)this + 0x18),0xffffffff);
              VisibleClassTy::SetZoneAst
                        (g_visibleClass_00802A88,(int)*(short *)((int)this + 0x47),
                         (int)*(short *)((int)this + 0x49),(char)puVar11,*(uint *)((int)this + 0x24)
                         ,*(int *)(&DAT_007d02b4 + (uint)*(byte *)((int)this + 0x2ad) * 4),
                         *(undefined4 *)((int)this + 0x18),0xffffffff);
            }
            *(short *)((int)this + 0x4b) = sVar12;
            goto LAB_00625067;
          }
        }
      }
      iVar5 = thunk_FUN_00624570(this,CASE_2,(int)*(short *)((int)this + 0x3a),
                                 (int)*(short *)((int)this + 0x3c),
                                 (short)(*(short *)((int)this + 0x4b) * 200 + 100) + -0x32);
      if (iVar5 != 0) {
        *(undefined4 *)((int)this + 0x2ee) = 2;
        *(undefined4 *)((int)this + 0x2ae) = 1;
        *(uint *)((int)this + 0x30f) = PTR_00802a38->field_00E4;
        *param_2 = (int)*(short *)((int)this + 0x3a);
        *param_3 = (int)*(short *)((int)this + 0x3c);
        *param_4 = iVar9;
        return 1;
      }
    }
LAB_00625067:
    local_8 = 1;
    *param_2 = (int)*(short *)((int)this + 0x3a);
    *param_3 = (int)*(short *)((int)this + 0x3c);
    *param_4 = iVar9;
    if ((*(int *)((int)this + 0x2f6) <= iVar6) &&
       (iVar6 = thunk_FUN_00624570(this,CASE_0,(int)*(short *)((int)this + 0x3a),
                                   (int)*(short *)((int)this + 0x3c),iVar9), iVar6 != 0)) {
      *(undefined4 *)((int)this + 0x2ee) = 0;
      *(undefined4 *)((int)this + 0x2ae) = 1;
      *(uint *)((int)this + 0x30f) = PTR_00802a38->field_00E4;
    }
  }
  return local_8;
}


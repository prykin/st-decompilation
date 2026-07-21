
undefined4 __thiscall
FUN_0061b340(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  STWorldObject *pSVar4;
  int iVar5;
  bool bVar6;
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar9;
  longlong lVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  undefined4 local_8;
  
  local_8 = 0;
  *param_7 = param_6;
  if ((-1 < param_1) && (-1 < param_2)) {
    if (param_3 < 0) goto LAB_0061bb57;
    if (((param_1 < g_worldGrid.sizeX) && (param_2 < g_worldGrid.sizeY)) && (param_3 < 5)) {
      sVar11 = (short)param_1;
      sVar12 = (short)param_2;
      sVar13 = (short)param_3;
      bVar6 = thunk_FUN_004961b0(sVar11,sVar12,sVar13);
      if (CONCAT31(extraout_var,bVar6) == 0) {
        local_10 = *(int *)((int)this + 0xa7) - *(int *)((int)this + 0xe3);
        if (((((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) || (sVar12 < 0)) ||
            ((g_worldGrid.sizeY <= sVar12 || (sVar13 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar13 ||
            (pSVar4 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar13 +
                       (int)g_worldGrid.sizeX * (int)sVar12 + (int)sVar11].objects[0],
            pSVar4 == (STWorldObject *)0x0)))) {
          FUN_006e3310(PTR_00807598,(PTR_00807598->field_0380 * param_4) / 0xc9,
                       (int *)((PTR_00807598->field_0380 * param_5) / 0xc9),param_3,&local_14);
          lVar10 = Library::MSVCRT::__ftol();
          iVar9 = (int)(short)lVar10;
          iVar7 = param_3 + 1;
          iVar5 = local_14;
          if (local_14 <= iVar7) {
            iVar5 = iVar7;
          }
          if (local_10 < 0) {
            if (iVar9 < param_6) {
              return local_8;
            }
            if (((local_14 <= iVar7) && (iVar7 < 5)) &&
               (bVar6 = thunk_FUN_004961b0(sVar11,sVar12,sVar13 + 1),
               CONCAT31(extraout_var_00,bVar6) == 0)) {
              return 3;
            }
            if (iVar5 * 200 < iVar9) {
              return 3;
            }
          }
          else {
            if (iVar9 <= param_6) {
              return local_8;
            }
            if ((iVar7 < 5) &&
               (bVar6 = thunk_FUN_004961b0(sVar11,sVar12,sVar13 + -1),
               CONCAT31(extraout_var_01,bVar6) != 0)) {
              *param_7 = param_3 * 200;
              return 1;
            }
          }
          *param_7 = iVar9;
          return 2;
        }
        if (0 < local_10) {
          iVar7 = *(int *)((int)this + 0xcf);
          sVar11 = (short)(iVar7 >> 0x1f);
          if (iVar7 < 0) {
            iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar11) -
                           (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar11) -
                                (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
          }
          if (iVar7 == param_1) {
            iVar7 = *(int *)((int)this + 0xd3);
            sVar11 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar11) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar11) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            if (iVar7 == param_2) {
              iVar7 = *(int *)((int)this + 0xd7);
              sVar11 = (short)(iVar7 >> 0x1f);
              if (iVar7 < 0) {
                iVar7 = (short)(((short)(iVar7 / 200) + sVar11) -
                               (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                iVar7 = (int)(short)(((short)(iVar7 / 200) + sVar11) -
                                    (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
              }
              if (iVar7 == param_3) {
                return local_8;
              }
            }
          }
          iVar7 = param_3 * 0xc9 + 0x97;
          if (param_6 < iVar7) {
            return local_8;
          }
          *param_7 = iVar7;
          return 2;
        }
        if ((((pSVar4[1].vtable < (STWorldObjectVTable *)0x8) &&
             ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
              ((byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51] < 8)))) &&
            (pSVar4->value_20 == 1000)) &&
           ((iVar7 = (*pSVar4->vtable[5].slots_00_28[0])(), iVar7 != 0 &&
            (iVar7 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar7 != 0)))) {
          bVar1 = *(byte *)&pSVar4[1].vtable;
          bVar2 = *(byte *)((int)this + 0x51);
          _local_c = CONCAT31(uStack_b,bVar1);
          local_10 = CONCAT31(local_10._1_3_,bVar2);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar2) {
LAB_0061b627:
              iVar7 = 0;
            }
            else {
              bVar3 = g_playerRelationMatrix[bVar1][bVar2];
              if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                iVar7 = -2;
              }
              else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                iVar7 = -1;
              }
              else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                iVar7 = 1;
              }
              else {
                if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b627;
                iVar7 = 2;
              }
            }
            bVar6 = iVar7 < 0;
          }
          else {
            bVar6 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
          }
          if (bVar6) {
            uVar8 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::
                    thunk_FUN_00601500((AnonReceiver_00601500 *)((int)this + 0x20),param_4,param_5,
                                       param_6,*(int *)((int)this + 0xdb),*(int *)((int)this + 0xdf)
                                       ,*(int *)((int)this + 0xe3),*(int *)((int)this + 0x51),
                                       DAT_007e66ac,*(int *)((int)this + 0x85),
                                       *(undefined2 *)((int)this + 0x89),0xb3,0,0);
            if ((uVar8 != 2) && (uVar8 != 3)) {
              return local_8;
            }
            iVar7 = *(int *)((int)this + 0x93);
            goto LAB_0061b6ac;
          }
        }
        iVar7 = param_3 * 0xc9 + 0x96;
        goto LAB_0061ba9b;
      }
      if (sVar11 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeX <= sVar11) {
        return local_8;
      }
      if (sVar12 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeY <= sVar12) {
        return local_8;
      }
      if (sVar13 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeZ <= sVar13) {
        return local_8;
      }
      pSVar4 = g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)sVar13 + (int)g_worldGrid.sizeX * (int)sVar12 +
                (int)sVar11].objects[0];
      if (pSVar4 == (STWorldObject *)0x0) {
        return local_8;
      }
      if ((STWorldObjectVTable *)0x7 < pSVar4[1].vtable) {
        return local_8;
      }
      if ((PTR_00802a38 != (STPlaySystemC *)0x0) &&
         (7 < (byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51])) {
        return local_8;
      }
      if (pSVar4->value_20 != 1000) {
        return local_8;
      }
      bVar1 = *(byte *)&pSVar4[1].vtable;
      bVar2 = *(byte *)((int)this + 0x51);
      local_10 = CONCAT31(local_10._1_3_,bVar1);
      _local_c = CONCAT31(uStack_b,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar2) {
LAB_0061b993:
          iVar7 = 0;
        }
        else {
          bVar3 = g_playerRelationMatrix[bVar1][bVar2];
          if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b993;
            iVar7 = 2;
          }
        }
        bVar6 = iVar7 < 0;
      }
      else {
        bVar6 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
      }
      if (bVar6) {
        iVar7 = (*pSVar4->vtable[5].slots_00_28[0])();
        if (iVar7 == 0) {
          return local_8;
        }
        iVar7 = (*pSVar4->vtable[5].slots_00_28[2])();
        if (iVar7 == 0) {
          return local_8;
        }
        uVar8 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                          ((AnonReceiver_00601500 *)((int)this + 0x20),param_4,param_5,param_6,
                           *(int *)((int)this + 0xdb),*(int *)((int)this + 0xdf),
                           *(int *)((int)this + 0xe3),*(int *)((int)this + 0x51),DAT_007e66ac,
                           *(int *)((int)this + 0x85),*(undefined2 *)((int)this + 0x89),0xb3,0,0);
        if ((uVar8 != 2) && (uVar8 != 3)) {
          return local_8;
        }
        iVar7 = *(int *)((int)this + 0x93);
LAB_0061b6ac:
        iVar7 = thunk_FUN_0061c910(this,uVar8,iVar7,param_1,param_2,param_3,param_4,param_5,param_6)
        ;
        *(int *)((int)this + 0x93) = iVar7;
        if (iVar7 != 5) {
          return local_8;
        }
        *(undefined4 *)((int)this + 0xaf) = 0x19;
        *(undefined4 *)((int)this + 0xc0) = 0xb;
        *(undefined4 *)((int)this + 0xb3) = 0x14;
        *(undefined4 *)((int)this + 0xbc) = 0;
        *(undefined4 *)((int)this + 0xb7) = 0;
        *(undefined4 *)((int)this + 0xab) = 0;
        return 3;
      }
      if (*(int *)((int)this + 0xa7) != *(int *)((int)this + 0xe3) &&
          -1 < *(int *)((int)this + 0xa7) - *(int *)((int)this + 0xe3)) {
        iVar7 = *(int *)((int)this + 0xcf);
        sVar11 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar11) -
                         (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar11) -
                              (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
        }
        if (iVar7 == param_1) {
          iVar7 = *(int *)((int)this + 0xd3);
          sVar11 = (short)(iVar7 >> 0x1f);
          if (iVar7 < 0) {
            iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar11) -
                           (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar11) -
                                (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
          }
          if (iVar7 == param_2) {
            iVar7 = *(int *)((int)this + 0xd7);
            sVar11 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 200) + sVar11) -
                             (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 200) + sVar11) -
                                  (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
            }
            if (iVar7 == param_3) {
              return local_8;
            }
          }
        }
        iVar7 = param_3 * 0xc9 + 0x97;
        if (param_6 < iVar7) {
          return local_8;
        }
        *param_7 = iVar7;
        return 2;
      }
      iVar7 = param_3 * 0xc9 + 0x32;
LAB_0061ba9b:
      if (iVar7 < param_6) {
        return local_8;
      }
      *param_7 = iVar7;
      return 2;
    }
  }
  if (-1 < param_3) {
    if (param_3 < 5) {
      local_8 = 4;
    }
    return local_8;
  }
LAB_0061bb57:
  *param_7 = 0;
  return 2;
}


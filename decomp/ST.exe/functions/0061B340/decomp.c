
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0061B89C MOVSX EAX,word ptr [EBP + 0x8] */

undefined4 __thiscall
FUN_0061b340(void *this,short param_1,short param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  STWorldObject *pSVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000000a;
  short sVar11;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  undefined4 local_8;

  local_8 = 0;
  *param_7 = param_6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((-1 < in_stack_00000006) && (-1 < in_stack_0000000a)) {
    if (param_3 < 0) goto LAB_0061bb57;
    if (((_param_1 < g_worldGrid.sizeX) && (_param_2 < g_worldGrid.sizeY)) && (param_3 < 5)) {
      sVar11 = (short)param_3;
      iVar6 = thunk_FUN_004961b0(param_1,param_2,sVar11);
      if (iVar6 == 0) {
        local_10 = *(int *)((int)this + 0xa7) - *(int *)((int)this + 0xe3);
        if (((((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) || (param_2 < 0)) ||
            ((g_worldGrid.sizeY <= param_2 || (sVar11 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar11 ||
            (pSVar4 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar11 +
                       (int)g_worldGrid.sizeX * (int)param_2 + (int)param_1].objects[0],
            pSVar4 == (STWorldObject *)0x0)))) {
          FUN_006e3310(PTR_00807598,(PTR_00807598->field_0380 * param_4) / 0xc9,
                       (int *)((PTR_00807598->field_0380 * param_5) / 0xc9),param_3,&local_14);
          lVar10 = Library::MSVCRT::__ftol();
          iVar8 = (int)(short)lVar10;
          iVar6 = param_3 + 1;
          iVar5 = local_14;
          if (local_14 <= iVar6) {
            iVar5 = iVar6;
          }
          if (local_10 < 0) {
            if (iVar8 < param_6) {
              return local_8;
            }
            if (((local_14 <= iVar6) && (iVar6 < 5)) &&
               (iVar6 = thunk_FUN_004961b0(param_1,param_2,sVar11 + 1), iVar6 == 0)) {
              return 3;
            }
            if (iVar5 * 200 < iVar8) {
              return 3;
            }
          }
          else {
            if (iVar8 <= param_6) {
              return local_8;
            }
            if ((iVar6 < 5) && (iVar6 = thunk_FUN_004961b0(param_1,param_2,sVar11 + -1), iVar6 != 0)
               ) {
              *param_7 = param_3 * 200;
              return 1;
            }
          }
          *param_7 = iVar8;
          return 2;
        }
        if (0 < local_10) {
          iVar6 = *(int *)((int)this + 0xcf);
          sVar11 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar11) -
                           (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar11) -
                                (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
          }
          if (iVar6 == _param_1) {
            iVar6 = *(int *)((int)this + 0xd3);
            sVar11 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar11) -
                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar11) -
                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
            }
            if (iVar6 == _param_2) {
              iVar6 = *(int *)((int)this + 0xd7);
              sVar11 = (short)(iVar6 >> 0x1f);
              if (iVar6 < 0) {
                iVar6 = (short)(((short)(iVar6 / 200) + sVar11) -
                               (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                iVar6 = (int)(short)(((short)(iVar6 / 200) + sVar11) -
                                    (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
              }
              if (iVar6 == param_3) {
                return local_8;
              }
            }
          }
          iVar6 = param_3 * 0xc9 + 0x97;
          if (param_6 < iVar6) {
            return local_8;
          }
          *param_7 = iVar6;
          return 2;
        }
        if ((((pSVar4[1].vtable < (STWorldObjectVTable *)0x8) &&
             ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
              ((byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51] < 8)))) &&
            (pSVar4->value_20 == 1000)) &&
           ((iVar6 = (*pSVar4->vtable[5].slots_00_28[0])(), iVar6 != 0 &&
            (iVar6 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar6 != 0)))) {
          bVar1 = *(byte *)&pSVar4[1].vtable;
          bVar2 = *(byte *)((int)this + 0x51);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_c = CONCAT31(uStack_b,bVar1);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_10 = CONCAT31(local_10._1_3_,bVar2);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar2) {
LAB_0061b627:
              iVar6 = 0;
            }
            else {
              bVar3 = g_playerRelationMatrix[bVar1][bVar2];
              if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                iVar6 = -2;
              }
              else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                iVar6 = -1;
              }
              else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                iVar6 = 1;
              }
              else {
                if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b627;
                iVar6 = 2;
              }
            }
            bVar9 = iVar6 < 0;
          }
          else {
            bVar9 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
          }
          if (bVar9) {
            uVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::
                    thunk_FUN_00601500((AnonReceiver_00601500 *)((int)this + 0x20),param_4,param_5,
                                       param_6,*(int *)((int)this + 0xdb),*(int *)((int)this + 0xdf)
                                       ,*(int *)((int)this + 0xe3),*(int *)((int)this + 0x51),
                                       DAT_007e66ac,*(int *)((int)this + 0x85),
                                       *(undefined2 *)((int)this + 0x89),0xb3,0,0);
            if ((uVar7 != 2) && (uVar7 != 3)) {
              return local_8;
            }
            iVar6 = *(int *)((int)this + 0x93);
            goto LAB_0061b6ac;
          }
        }
        iVar6 = param_3 * 0xc9 + 0x96;
        goto LAB_0061ba9b;
      }
      if (param_1 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeX <= param_1) {
        return local_8;
      }
      if (param_2 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeY <= param_2) {
        return local_8;
      }
      if (sVar11 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeZ <= sVar11) {
        return local_8;
      }
      pSVar4 = g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)sVar11 + (int)g_worldGrid.sizeX * (int)param_2 +
                (int)param_1].objects[0];
      if (pSVar4 == (STWorldObject *)0x0) {
        return local_8;
      }
      if ((STWorldObjectVTable *)0x7 < pSVar4[1].vtable) {
        return local_8;
      }
      if ((g_playSystem_00802A38 != (STPlaySystemC *)0x0) &&
         (7 < (byte)(&DAT_008087e9)[(int)pSVar4[1].vtable * 0x51])) {
        return local_8;
      }
      if (pSVar4->value_20 != 1000) {
        return local_8;
      }
      bVar1 = *(byte *)&pSVar4[1].vtable;
      bVar2 = *(byte *)((int)this + 0x51);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = CONCAT31(local_10._1_3_,bVar1);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar2) {
LAB_0061b993:
          iVar6 = 0;
        }
        else {
          bVar3 = g_playerRelationMatrix[bVar1][bVar2];
          if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
            iVar6 = -2;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
            iVar6 = -1;
          }
          else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
            iVar6 = 1;
          }
          else {
            if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b993;
            iVar6 = 2;
          }
        }
        bVar9 = iVar6 < 0;
      }
      else {
        bVar9 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
      }
      if (bVar9) {
        iVar6 = (*pSVar4->vtable[5].slots_00_28[0])();
        if (iVar6 == 0) {
          return local_8;
        }
        iVar6 = (*pSVar4->vtable[5].slots_00_28[2])();
        if (iVar6 == 0) {
          return local_8;
        }
        uVar7 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                          ((AnonReceiver_00601500 *)((int)this + 0x20),param_4,param_5,param_6,
                           *(int *)((int)this + 0xdb),*(int *)((int)this + 0xdf),
                           *(int *)((int)this + 0xe3),*(int *)((int)this + 0x51),DAT_007e66ac,
                           *(int *)((int)this + 0x85),*(undefined2 *)((int)this + 0x89),0xb3,0,0);
        if ((uVar7 != 2) && (uVar7 != 3)) {
          return local_8;
        }
        iVar6 = *(int *)((int)this + 0x93);
LAB_0061b6ac:
        iVar6 = thunk_FUN_0061c910(this,uVar7,iVar6,_param_1,_param_2,param_3,param_4,param_5,
                                   param_6);
        *(int *)((int)this + 0x93) = iVar6;
        if (iVar6 != 5) {
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
        iVar6 = *(int *)((int)this + 0xcf);
        sVar11 = (short)(iVar6 >> 0x1f);
        if (iVar6 < 0) {
          iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar11) -
                         (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar11) -
                              (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
        }
        if (iVar6 == _param_1) {
          iVar6 = *(int *)((int)this + 0xd3);
          sVar11 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar11) -
                           (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar11) -
                                (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
          }
          if (iVar6 == _param_2) {
            iVar6 = *(int *)((int)this + 0xd7);
            sVar11 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 200) + sVar11) -
                             (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 200) + sVar11) -
                                  (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
            }
            if (iVar6 == param_3) {
              return local_8;
            }
          }
        }
        iVar6 = param_3 * 0xc9 + 0x97;
        if (param_6 < iVar6) {
          return local_8;
        }
        *param_7 = iVar6;
        return 2;
      }
      iVar6 = param_3 * 0xc9 + 0x32;
LAB_0061ba9b:
      if (iVar6 < param_6) {
        return local_8;
      }
      *param_7 = iVar6;
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



/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00644410.
   Evidence: incoming_receiver_captures=1; receiver_accesses=28; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=2; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410::FUN_00644410
          (AnonReceiver_00644410 *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  AnonShape_00644410_A4B3CF3D *pAVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  short sVar9;
  STWorldObject *this_00;
  int iVar10;
  short sVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  AnonShape_00644410_A4B3CF3D *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  iVar12 = 0;
  local_3c = (int)*(short *)&this->field_0x41;
  local_40 = (int)*(short *)&this->field_0x43;
  local_44 = (int)*(short *)&this->field_0x45;
  local_14 = 0;
  local_18 = (undefined4 *)0x0;
  if ((byte)this->field_0x27d < 2) {
    *param_2 = local_3c;
    *param_3 = local_40;
    *param_4 = local_44;
    *param_1 = 0;
    return;
  }
  local_10 = (AnonShape_00644410_A4B3CF3D *)this;
  local_2c = FUN_006aadd0((int)*(short *)&this->field_0x268,(int)*(short *)&this->field_0x26a,
                          (int)*(short *)&this->field_0x26c,local_3c,local_40,local_44);
  local_2c = local_2c / 0x32;
  if (local_2c < 1) {
    local_2c = 1;
  }
  local_38 = 1;
  if (0 < local_2c) {
    do {
      iVar12 = ((local_3c - ((AnonShape_00644410_A4B3CF3D *)this)->field_0268) * local_38) /
               local_2c + (int)((AnonShape_00644410_A4B3CF3D *)this)->field_0268;
      local_14 = ((local_40 - ((AnonShape_00644410_A4B3CF3D *)this)->field_026A) * local_38) /
                 local_2c + (int)((AnonShape_00644410_A4B3CF3D *)this)->field_026A;
      local_18 = (undefined4 *)
                 (((local_44 - ((AnonShape_00644410_A4B3CF3D *)this)->field_026C) * local_38) /
                  local_2c + (int)((AnonShape_00644410_A4B3CF3D *)this)->field_026C);
      sVar2 = (short)(iVar12 >> 0x1f);
      if (iVar12 < 0) {
        local_24 = (short)(((short)(iVar12 / 0xc9) + sVar2) -
                          (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        local_24 = (int)(short)(((short)(iVar12 / 0xc9) + sVar2) -
                               (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
      }
      sVar2 = (short)(local_14 >> 0x1f);
      if (local_14 < 0) {
        iVar5 = (short)(((short)(local_14 / 0xc9) + sVar2) -
                       (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                            (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
      }
      sVar2 = (short)((int)local_18 >> 0x1f);
      if ((int)local_18 < 0) {
        puVar8 = (undefined4 *)
                 ((short)(((short)((int)local_18 / 200) + sVar2) -
                         (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f)) + -1);
      }
      else {
        puVar8 = (undefined4 *)
                 (int)(short)(((short)((int)local_18 / 200) + sVar2) -
                             (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f));
      }
      local_34 = (int)puVar8 + -1;
      *param_1 = 0;
      local_30 = puVar8;
      local_28 = iVar5;
      local_20 = iVar12;
      if (local_34 <= (int)puVar8 + 1) {
        do {
          if ((local_34 <= g_worldGrid.sizeZ + -1) && (local_1c = iVar5 + -1, local_1c <= iVar5 + 1)
             ) {
            do {
              if ((-1 < local_1c) &&
                 ((local_1c <= g_worldGrid.sizeY + -1 &&
                  (iVar5 = local_24 + -1, iVar5 <= local_24 + 1)))) {
                do {
                  pAVar1 = local_10;
                  iVar12 = local_34;
                  if ((-1 < iVar5) && (iVar6 = (int)g_worldGrid.sizeX, iVar5 <= iVar6 + -1)) {
                    if (local_34 < 0) {
                      if ((((undefined4 *)local_34 == local_30) && (local_1c == local_28)) &&
                         (iVar5 == local_24)) {
                        *param_1 = 1;
                        local_10->field_0270 = 0;
                        lVar13 = Library::MSVCRT::__ftol();
                        *param_2 = (int)lVar13;
                        pAVar1->field_0041 = (short)lVar13;
                        lVar13 = Library::MSVCRT::__ftol();
                        *param_3 = (int)lVar13;
                        *(short *)&pAVar1->field_0x43 = (short)lVar13;
                        *param_4 = 5;
                        pAVar1->field_0045 = 5;
                        return;
                      }
                    }
                    else {
                      sVar9 = (short)iVar5;
                      sVar11 = (short)local_34;
                      sVar2 = (short)local_1c;
                      if (((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) || (sVar2 < 0)) ||
                          ((g_worldGrid.sizeY <= sVar2 || (sVar11 < 0)))) ||
                         (g_worldGrid.sizeZ <= sVar11)) {
                        this_00 = (STWorldObject *)0x0;
                      }
                      else {
                        this_00 = g_worldGrid.cells
                                  [(int)sVar11 * (int)g_worldGrid.planeStride + sVar2 * iVar6 +
                                   (int)sVar9].objects[0];
                      }
                      if (((local_10->field_0287 != '\0') && (this_00 == (STWorldObject *)0x0)) &&
                         ((((sVar9 < 0 ||
                            (((g_worldGrid.sizeX <= sVar9 || (sVar2 < 0)) ||
                             (g_worldGrid.sizeY <= sVar2)))) ||
                           ((sVar11 < 0 || (g_worldGrid.sizeZ <= sVar11)))) ||
                          ((this_00 = g_worldGrid.cells
                                      [(int)sVar11 * (int)g_worldGrid.planeStride + sVar2 * iVar6 +
                                       (int)sVar9].objects[1], this_00 != (STWorldObject *)0x0 &&
                           (((iVar6 = (*this_00->vtable->GetObjectTypeId)(this_00), iVar6 != 0xa6 &&
                             (iVar6 != 0xa7)) && ((iVar6 != 0xbd && (iVar6 != 0xaf)))))))))) {
                        this_00 = (STWorldObject *)0x0;
                      }
                      iVar6 = local_20;
                      if (((((undefined4 *)iVar12 == local_30) && (local_1c == local_28)) &&
                          (iVar5 == local_24)) &&
                         ((g_pathingGrid.cells
                           [g_pathingGrid.planeStride * iVar12 +
                            iVar5 + g_pathingGrid.sizeX * local_1c] < 0 &&
                          (this_00 == (STWorldObject *)0x0)))) {
                        *param_1 = 1;
                        local_10->field_0270 = 0;
                        *param_2 = local_20;
                        *param_3 = local_14;
                        *param_4 = (int)local_18;
                        sVar2 = (short)((int)local_18 >> 0x1f);
                        if ((int)local_18 < 0) {
                          iVar12 = (short)(((short)((int)local_18 / 200) + sVar2) -
                                          (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f)) +
                                   -1;
                        }
                        else {
                          iVar12 = (int)(short)(((short)((int)local_18 / 200) + sVar2) -
                                               (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f)
                                               );
                        }
                        sVar2 = (short)(local_14 >> 0x1f);
                        if (local_14 < 0) {
                          iVar5 = (short)(((short)(local_14 / 0xc9) + sVar2) -
                                         (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                                              (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = (short)(local_20 >> 0x1f);
                        if (local_20 < 0) {
                          iVar3 = (short)(((short)(local_20 / 0xc9) + sVar2) -
                                         (short)((longlong)local_20 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar3 = (int)(short)(((short)(local_20 / 0xc9) + sVar2) -
                                              (short)((longlong)local_20 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = local_10->field_026C;
                        local_30 = (undefined4 *)(int)sVar2;
                        if (sVar2 < 0) {
                          iVar7 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                                         (short)((longlong)(int)local_30 * 0x51eb851f >> 0x3f)) + -1
                          ;
                        }
                        else {
                          iVar7 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                                              (short)((longlong)(int)local_30 * 0x51eb851f >> 0x3f))
                          ;
                        }
                        sVar2 = local_10->field_026A;
                        local_34 = (int)sVar2;
                        if (sVar2 < 0) {
                          iVar10 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                          (short)((longlong)local_34 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar10 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                               (short)((longlong)local_34 * 0x28c1979 >> 0x3f));
                        }
                        sVar2 = local_10->field_0268;
                        local_38 = (int)sVar2;
                        if (sVar2 < 0) {
                          iVar4 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                         (short)((longlong)local_38 * 0x28c1979 >> 0x3f)) + -1;
                        }
                        else {
                          iVar4 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                              (short)((longlong)local_38 * 0x28c1979 >> 0x3f));
                        }
                        if (-1 < g_pathingGrid.cells
                                 [iVar7 * g_pathingGrid.planeStride +
                                  iVar4 + iVar10 * g_pathingGrid.sizeX]) {
                          if (g_pathingGrid.cells
                              [iVar12 * g_pathingGrid.planeStride +
                               iVar3 + iVar5 * g_pathingGrid.sizeX] ==
                              g_pathingGrid.cells
                              [iVar7 * g_pathingGrid.planeStride +
                               iVar4 + iVar10 * g_pathingGrid.sizeX]) {
                            return;
                          }
                          iVar5 = local_38 - local_20;
                          local_28 = local_20;
                          local_20 = 3;
                          iVar12 = (local_34 - local_14) / 2 + local_14;
                          param_1 = local_18;
                          iVar6 = iVar5 / 2 + iVar6;
                          local_18 = (undefined4 *)
                                     (((int)local_30 - (int)local_18) / 2 + (int)local_18);
                          local_24 = local_14;
                          do {
                            sVar2 = (short)((int)local_18 >> 0x1f);
                            if ((int)local_18 < 0) {
                              local_2c = (short)(((short)((int)local_18 / 200) + sVar2) -
                                                (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f
                                                       )) + -1;
                            }
                            else {
                              local_2c = (int)(short)(((short)((int)local_18 / 200) + sVar2) -
                                                     (short)((longlong)(int)local_18 * 0x51eb851f >>
                                                            0x3f));
                            }
                            sVar2 = (short)(iVar12 >> 0x1f);
                            if (iVar12 < 0) {
                              iVar5 = (short)(((short)(iVar12 / 0xc9) + sVar2) -
                                             (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
                            }
                            else {
                              iVar5 = (int)(short)(((short)(iVar12 / 0xc9) + sVar2) -
                                                  (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
                            }
                            sVar2 = (short)(iVar6 >> 0x1f);
                            if (iVar6 < 0) {
                              iVar3 = (short)(((short)(iVar6 / 0xc9) + sVar2) -
                                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
                            }
                            else {
                              iVar3 = (int)(short)(((short)(iVar6 / 0xc9) + sVar2) -
                                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
                            }
                            iVar7 = iVar6;
                            iVar10 = iVar12;
                            if (g_pathingGrid.cells
                                [local_2c * g_pathingGrid.planeStride +
                                 iVar3 + iVar5 * g_pathingGrid.sizeX] < 0) {
                              param_1 = local_18;
                              iVar7 = local_38;
                              iVar10 = local_34;
                              local_18 = local_30;
                              local_28 = iVar6;
                              local_24 = iVar12;
                            }
                            local_30 = local_18;
                            local_34 = iVar10;
                            local_38 = iVar7;
                            iVar6 = (local_38 - local_28) / 2 + local_28;
                            iVar12 = (local_34 - local_24) / 2 + local_24;
                            local_18 = (undefined4 *)
                                       (((int)local_30 - (int)param_1) / 2 + (int)param_1);
                            local_20 = local_20 + -1;
                          } while (local_20 != 0);
                          sVar2 = (short)((int)local_18 >> 0x1f);
                          if ((int)local_18 < 0) {
                            param_1 = (undefined4 *)
                                      ((short)(((short)((int)local_18 / 200) + sVar2) -
                                              (short)((longlong)(int)local_18 * 0x51eb851f >> 0x3f))
                                      + -1);
                          }
                          else {
                            param_1 = (undefined4 *)
                                      (int)(short)(((short)((int)local_18 / 200) + sVar2) -
                                                  (short)((longlong)(int)local_18 * 0x51eb851f >>
                                                         0x3f));
                          }
                          sVar2 = (short)(iVar12 >> 0x1f);
                          if (iVar12 < 0) {
                            iVar5 = (short)(((short)(iVar12 / 0xc9) + sVar2) -
                                           (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
                          }
                          else {
                            iVar5 = (int)(short)(((short)(iVar12 / 0xc9) + sVar2) -
                                                (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
                          }
                          sVar2 = (short)(iVar6 >> 0x1f);
                          if (iVar6 < 0) {
                            iVar3 = (short)(((short)(iVar6 / 0xc9) + sVar2) -
                                           (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
                          }
                          else {
                            iVar3 = (int)(short)(((short)(iVar6 / 0xc9) + sVar2) -
                                                (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
                          }
                          if (g_pathingGrid.cells
                              [(int)param_1 * (int)g_pathingGrid.planeStride +
                               iVar3 + iVar5 * g_pathingGrid.sizeX] < 0) {
                            iVar6 = local_38;
                            local_18 = local_30;
                            iVar12 = local_34;
                          }
                          *param_2 = iVar6;
                          *param_3 = iVar12;
                          *param_4 = (int)local_18;
                          local_10->field_0045 = (short)local_18;
                          local_10->field_0041 = (short)iVar6;
                          return;
                        }
                        *param_1 = 2;
                        return;
                      }
                      if (((this_00 != (STWorldObject *)0x0) &&
                          (*(int *)&this_00->field_0x18 != local_10->field_025E)) &&
                         (iVar12 = (*this_00->vtable[4].slots_00_28[7])
                                             (local_20,local_14,local_18,local_10->field_024B,
                                              local_10->field_024D,local_10->field_024F),
                         pAVar1 = local_10, -1 < iVar12)) {
                        *param_1 = 1;
                        iVar5 = local_10->field_0259;
                        if (((((iVar5 == 0x9c) || (iVar5 == 0x9d)) || (iVar5 == 0x9e)) ||
                            (iVar5 == 0x9b)) &&
                           (((local_10->field_0285 == '\0' &&
                             (iVar5 = GetPlayerRaceId(*(char *)&this_00[1].vtable),
                             (char)iVar5 != '\x03')) &&
                            (iVar5 = thunk_FUN_004e60d0((int)this_00[1].vtable,0x1b), iVar5 != 0))))
                        {
                          (*this_00->vtable[4].slots_00_28[8])
                                    (iVar12,&local_6,&local_8,&local_a,local_48);
                          *param_2 = (int)local_6;
                          *param_3 = (int)local_8;
                          *param_4 = (int)local_a;
                          thunk_FUN_00645f10(pAVar1,this_00,(short)*param_2,(short)*param_3,local_a)
                          ;
                          pAVar1->field_0285 = '\x02';
                        }
                        pAVar1->field_0270 = 1;
                        *(undefined4 *)&pAVar1->field_0x274 = *(undefined4 *)&this_00->field_0x18;
                        *(int *)&pAVar1->field_0x278 = iVar12;
                        *param_2 = local_20;
                        *param_3 = local_14;
                        *param_4 = (int)local_18;
                        return;
                      }
                    }
                  }
                  iVar5 = iVar5 + 1;
                  puVar8 = local_30;
                  this = (AnonReceiver_00644410 *)local_10;
                  iVar12 = local_20;
                } while (iVar5 <= local_24 + 1);
              }
              local_1c = local_1c + 1;
              iVar5 = local_28;
            } while (local_1c <= local_28 + 1);
          }
          local_34 = local_34 + 1;
        } while (local_34 <= (int)puVar8 + 1);
      }
      local_38 = local_38 + 1;
    } while (local_38 <= local_2c);
  }
  *param_2 = iVar12;
  *param_3 = local_14;
  *param_4 = (int)local_18;
  return;
}

